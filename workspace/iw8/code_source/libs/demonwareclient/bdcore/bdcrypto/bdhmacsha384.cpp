/*
==============
bdHMacSHA384::bdHMacSHA384
==============
*/

void __fastcall bdHMacSHA384::bdHMacSHA384(bdHMacSHA384 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  ??0bdHMacSHA384@@QEAA@QEBEI@Z(this, key, keySize);
}

/*
==============
bdHMacSHA384::getData
==============
*/

bool __fastcall bdHMacSHA384::getData(bdHMacSHA384 *this, unsigned __int8 *digest, unsigned int *length)
{
  return ?getData@bdHMacSHA384@@UEAA_NPEAEAEAI@Z(this, digest, length);
}

/*
==============
bdHMacSHA384::cleanHashHandle
==============
*/

void __fastcall bdHMacSHA384::cleanHashHandle(bdHMacSHA384 *this)
{
  ?cleanHashHandle@bdHMacSHA384@@IEAAXXZ(this);
}

/*
==============
bdHMacSHA384::~bdHMacSHA384
==============
*/

void __fastcall bdHMacSHA384::~bdHMacSHA384(bdHMacSHA384 *this)
{
  ??1bdHMacSHA384@@UEAA@XZ(this);
}

/*
==============
bdHMacSHA384::process
==============
*/

bool __fastcall bdHMacSHA384::process(bdHMacSHA384 *this, const unsigned __int8 *const data, const unsigned int length)
{
  return ?process@bdHMacSHA384@@UEAA_NQEBEI@Z(this, data, length);
}

/*
==============
bdHMacSHA384::bdHMacSHA384
==============
*/
void bdHMacSHA384::bdHMacSHA384(bdHMacSHA384 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  BCRYPT_ALG_HANDLE v6; 
  NTSTATUS Hash_0; 

  bdHMac::bdHMac(this, BD_HASH_SHA384, 0x30u);
  this->__vftable = (bdHMacSHA384_vtbl *)&bdHMacSHA384::`vftable';
  this->m_hashHandle = NULL;
  if ( !key || !keySize )
  {
    bdHandleAssert(0, "\"(key != BD_NULL && keySize > 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::bdHMacSHA384", 0x6Fu, "bdHMacSHA384 cannot have NULL key or keySize == 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::bdHMacSHA384", 0x6Fu, "bdHMacSHA384 cannot have NULL key or keySize == 0");
  }
  v6 = bdHMacSHA384::s_hashProvider;
  if ( !bdHMacSHA384::s_hashProvider )
  {
    getBCryptProvider(&bdHMacSHA384::s_hashProvider, L"SHA384", (_DWORD)bdHMacSHA384::s_hashProvider + 8);
    v6 = bdHMacSHA384::s_hashProvider;
  }
  if ( key && keySize && v6 )
  {
    Hash_0 = BCryptCreateHash_0(v6, &this->m_hashHandle, NULL, 0, (PUCHAR)key, keySize, 0);
    if ( Hash_0 < 0 )
    {
      logBCryptResult("bdHMacSHA384", "BCryptCreateHash", Hash_0);
      this->m_hashHandle = NULL;
    }
  }
}

/*
==============
bdHMacSHA384::~bdHMacSHA384
==============
*/
void bdHMacSHA384::~bdHMacSHA384(bdHMacSHA384 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHMacSHA384_vtbl *)&bdHMacSHA384::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA384", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHMac::~bdHMac(this);
}

/*
==============
bdHMacSHA384::cleanHashHandle
==============
*/
void bdHMacSHA384::cleanHashHandle(bdHMacSHA384 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA384", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHMacSHA384::getData
==============
*/
__int64 bdHMacSHA384::getData(bdHMacSHA384 *this, unsigned __int8 *digest, unsigned int *length)
{
  unsigned __int8 v3; 
  void *m_hashHandle; 
  NTSTATUS v8; 
  unsigned int v9; 
  unsigned __int8 pbOutput[48]; 

  v3 = 0;
  if ( !digest )
  {
    bdHandleAssert(0, "\"(digest != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::getData", 0xBAu, "bdHMacSHA384 digest buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::getData", 0xBAu, "bdHMacSHA384 digest buffer cannot be NULL");
  }
  if ( *length <= 0x30 )
  {
    if ( digest )
    {
      m_hashHandle = this->m_hashHandle;
      if ( m_hashHandle )
      {
        v8 = BCryptFinishHash_0(m_hashHandle, pbOutput, 0x30u, 0);
        if ( v8 < 0 )
        {
          logBCryptResult("bdHMacSHA384", "BCryptFinishHash", v8);
        }
        else
        {
          v9 = *length;
          if ( *length > 0x30 )
            v9 = 48;
          *length = v9;
          memcpy_0(digest, pbOutput, v9);
          v3 = 1;
        }
        bdHMacSHA384::cleanHashHandle(this);
      }
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHMacSHA384", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::getData", 0xBFu, "Hmac result buffer of invalid size.");
  }
  return v3;
}

/*
==============
bdHMacSHA384::process
==============
*/
char bdHMacSHA384::process(bdHMacSHA384 *this, const unsigned __int8 *const data, const unsigned int length)
{
  void *m_hashHandle; 
  NTSTATUS v6; 
  void *v7; 
  NTSTATUS v8; 

  if ( !data && length )
  {
    bdHandleAssert(0, "\"(data != BD_NULL || length == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::process", 0xA1u, "bdHMacSHA384 cannot process NULL data with length > 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha384.cpp", "bdHMacSHA384::process", 0xA1u, "bdHMacSHA384 cannot process NULL data with length > 0");
    return 0;
  }
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v6 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, length, 0);
    if ( v6 >= 0 )
      return 1;
    logBCryptResult("bdHMacSHA384", "BCryptHashData", v6);
    v7 = this->m_hashHandle;
    if ( v7 )
    {
      v8 = BCryptDestroyHash_0(v7);
      if ( v8 < 0 )
        logBCryptResult("bdHMacSHA384", "BCryptDestroyHash", v8);
      this->m_hashHandle = NULL;
    }
  }
  return 0;
}

