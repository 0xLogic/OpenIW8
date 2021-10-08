/*
==============
bdHMacSHA1::getData
==============
*/

bool __fastcall bdHMacSHA1::getData(bdHMacSHA1 *this, unsigned __int8 *digest, unsigned int *length)
{
  return ?getData@bdHMacSHA1@@UEAA_NPEAEAEAI@Z(this, digest, length);
}

/*
==============
bdHMacSHA1::bdHMacSHA1
==============
*/

void __fastcall bdHMacSHA1::bdHMacSHA1(bdHMacSHA1 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  ??0bdHMacSHA1@@QEAA@QEBEI@Z(this, key, keySize);
}

/*
==============
bdHMacSHA1::~bdHMacSHA1
==============
*/

void __fastcall bdHMacSHA1::~bdHMacSHA1(bdHMacSHA1 *this)
{
  ??1bdHMacSHA1@@UEAA@XZ(this);
}

/*
==============
bdHMacSHA1::process
==============
*/

bool __fastcall bdHMacSHA1::process(bdHMacSHA1 *this, const unsigned __int8 *const data, const unsigned int length)
{
  return ?process@bdHMacSHA1@@UEAA_NQEBEI@Z(this, data, length);
}

/*
==============
bdHMacSHA1::cleanHashHandle
==============
*/

void __fastcall bdHMacSHA1::cleanHashHandle(bdHMacSHA1 *this)
{
  ?cleanHashHandle@bdHMacSHA1@@IEAAXXZ(this);
}

/*
==============
bdHMacSHA1::bdHMacSHA1
==============
*/
void bdHMacSHA1::bdHMacSHA1(bdHMacSHA1 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  BCRYPT_ALG_HANDLE v6; 
  NTSTATUS Hash_0; 

  bdHMac::bdHMac(this, BD_HASH_SHA1, 0x14u);
  this->__vftable = (bdHMacSHA1_vtbl *)&bdHMacSHA1::`vftable';
  this->m_hashHandle = NULL;
  if ( !key || !keySize )
  {
    bdHandleAssert(0, "\"(key != BD_NULL && keySize > 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::bdHMacSHA1", 0x6Fu, "bdHMacSHA1 cannot have NULL key or keySize == 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::bdHMacSHA1", 0x6Fu, "bdHMacSHA1 cannot have NULL key or keySize == 0");
  }
  v6 = bdHMacSHA1::s_hashProvider;
  if ( !bdHMacSHA1::s_hashProvider )
  {
    getBCryptProvider(&bdHMacSHA1::s_hashProvider, L"SHA1", (_DWORD)bdHMacSHA1::s_hashProvider + 8);
    v6 = bdHMacSHA1::s_hashProvider;
  }
  if ( key && keySize && v6 )
  {
    Hash_0 = BCryptCreateHash_0(v6, &this->m_hashHandle, NULL, 0, (PUCHAR)key, keySize, 0);
    if ( Hash_0 < 0 )
    {
      logBCryptResult("bdHMacSHA1", "BCryptCreateHash", Hash_0);
      this->m_hashHandle = NULL;
    }
  }
}

/*
==============
bdHMacSHA1::~bdHMacSHA1
==============
*/
void bdHMacSHA1::~bdHMacSHA1(bdHMacSHA1 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHMacSHA1_vtbl *)&bdHMacSHA1::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA1", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHMac::~bdHMac(this);
}

/*
==============
bdHMacSHA1::cleanHashHandle
==============
*/
void bdHMacSHA1::cleanHashHandle(bdHMacSHA1 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA1", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHMacSHA1::getData
==============
*/
__int64 bdHMacSHA1::getData(bdHMacSHA1 *this, unsigned __int8 *digest, unsigned int *length)
{
  unsigned __int8 v3; 
  void *m_hashHandle; 
  NTSTATUS v8; 
  unsigned int v9; 
  unsigned __int8 pbOutput[24]; 

  v3 = 0;
  if ( !digest )
  {
    bdHandleAssert(0, "\"(digest != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::getData", 0xBAu, "bdHMacSHA1 digest buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::getData", 0xBAu, "bdHMacSHA1 digest buffer cannot be NULL");
  }
  if ( *length <= 0x14 )
  {
    if ( digest )
    {
      m_hashHandle = this->m_hashHandle;
      if ( m_hashHandle )
      {
        v8 = BCryptFinishHash_0(m_hashHandle, pbOutput, 0x14u, 0);
        if ( v8 < 0 )
        {
          logBCryptResult("bdHMacSHA1", "BCryptFinishHash", v8);
        }
        else
        {
          v9 = *length;
          if ( *length > 0x14 )
            v9 = 20;
          *length = v9;
          memcpy_0(digest, pbOutput, v9);
          v3 = 1;
        }
        bdHMacSHA1::cleanHashHandle(this);
      }
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHMacSHA1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::getData", 0xBFu, "Hmac result buffer of invalid size.");
  }
  return v3;
}

/*
==============
bdHMacSHA1::process
==============
*/
char bdHMacSHA1::process(bdHMacSHA1 *this, const unsigned __int8 *const data, const unsigned int length)
{
  void *m_hashHandle; 
  NTSTATUS v6; 
  void *v7; 
  NTSTATUS v8; 

  if ( !data && length )
  {
    bdHandleAssert(0, "\"(data != BD_NULL || length == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::process", 0xA1u, "bdHMacSHA1 cannot process NULL data with length > 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha1.cpp", "bdHMacSHA1::process", 0xA1u, "bdHMacSHA1 cannot process NULL data with length > 0");
    return 0;
  }
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v6 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, length, 0);
    if ( v6 >= 0 )
      return 1;
    logBCryptResult("bdHMacSHA1", "BCryptHashData", v6);
    v7 = this->m_hashHandle;
    if ( v7 )
    {
      v8 = BCryptDestroyHash_0(v7);
      if ( v8 < 0 )
        logBCryptResult("bdHMacSHA1", "BCryptDestroyHash", v8);
      this->m_hashHandle = NULL;
    }
  }
  return 0;
}

