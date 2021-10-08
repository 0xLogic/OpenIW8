/*
==============
bdHMacSHA256::cleanHashHandle
==============
*/

void __fastcall bdHMacSHA256::cleanHashHandle(bdHMacSHA256 *this)
{
  ?cleanHashHandle@bdHMacSHA256@@IEAAXXZ(this);
}

/*
==============
bdHMacSHA256::getData
==============
*/

bool __fastcall bdHMacSHA256::getData(bdHMacSHA256 *this, unsigned __int8 *digest, unsigned int *length)
{
  return ?getData@bdHMacSHA256@@UEAA_NPEAEAEAI@Z(this, digest, length);
}

/*
==============
bdHMacSHA256::process
==============
*/

bool __fastcall bdHMacSHA256::process(bdHMacSHA256 *this, const unsigned __int8 *const data, const unsigned int length)
{
  return ?process@bdHMacSHA256@@UEAA_NQEBEI@Z(this, data, length);
}

/*
==============
bdHMacSHA256::bdHMacSHA256
==============
*/

void __fastcall bdHMacSHA256::bdHMacSHA256(bdHMacSHA256 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  ??0bdHMacSHA256@@QEAA@QEBEI@Z(this, key, keySize);
}

/*
==============
bdHMacSHA256::~bdHMacSHA256
==============
*/

void __fastcall bdHMacSHA256::~bdHMacSHA256(bdHMacSHA256 *this)
{
  ??1bdHMacSHA256@@UEAA@XZ(this);
}

/*
==============
bdHMacSHA256::bdHMacSHA256
==============
*/
void bdHMacSHA256::bdHMacSHA256(bdHMacSHA256 *this, const unsigned __int8 *const key, const unsigned int keySize)
{
  BCRYPT_ALG_HANDLE v6; 
  NTSTATUS Hash_0; 

  bdHMac::bdHMac(this, BD_HASH_SHA256, 0x20u);
  this->__vftable = (bdHMacSHA256_vtbl *)&bdHMacSHA256::`vftable';
  this->m_hashHandle = NULL;
  if ( !key || !keySize )
  {
    bdHandleAssert(0, "\"(key != BD_NULL && keySize > 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::bdHMacSHA256", 0x6Eu, "bdHMacSHA256 cannot have NULL key or keySize == 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::bdHMacSHA256", 0x6Eu, "bdHMacSHA256 cannot have NULL key or keySize == 0");
  }
  v6 = bdHMacSHA256::s_hashProvider;
  if ( !bdHMacSHA256::s_hashProvider )
  {
    getBCryptProvider(&bdHMacSHA256::s_hashProvider, L"SHA256", (_DWORD)bdHMacSHA256::s_hashProvider + 8);
    v6 = bdHMacSHA256::s_hashProvider;
  }
  if ( key && keySize && v6 )
  {
    Hash_0 = BCryptCreateHash_0(v6, &this->m_hashHandle, NULL, 0, (PUCHAR)key, keySize, 0);
    if ( Hash_0 < 0 )
    {
      logBCryptResult("bdHMacSHA256", "BCryptCreateHash", Hash_0);
      this->m_hashHandle = NULL;
    }
  }
}

/*
==============
bdHMacSHA256::~bdHMacSHA256
==============
*/
void bdHMacSHA256::~bdHMacSHA256(bdHMacSHA256 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHMacSHA256_vtbl *)&bdHMacSHA256::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA256", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHMac::~bdHMac(this);
}

/*
==============
bdHMacSHA256::cleanHashHandle
==============
*/
void bdHMacSHA256::cleanHashHandle(bdHMacSHA256 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHMacSHA256", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHMacSHA256::getData
==============
*/
__int64 bdHMacSHA256::getData(bdHMacSHA256 *this, unsigned __int8 *digest, unsigned int *length)
{
  unsigned __int8 v3; 
  void *m_hashHandle; 
  NTSTATUS v8; 
  unsigned int v9; 
  unsigned __int8 pbOutput[32]; 

  v3 = 0;
  if ( !digest )
  {
    bdHandleAssert(0, "\"(digest != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::getData", 0xB9u, "bdHMacSHA256 digest buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::getData", 0xB9u, "bdHMacSHA256 digest buffer cannot be NULL");
  }
  if ( *length <= 0x20 )
  {
    if ( digest )
    {
      m_hashHandle = this->m_hashHandle;
      if ( m_hashHandle )
      {
        v8 = BCryptFinishHash_0(m_hashHandle, pbOutput, 0x20u, 0);
        if ( v8 < 0 )
        {
          logBCryptResult("bdHMacSHA256", "BCryptFinishHash", v8);
        }
        else
        {
          v9 = *length;
          if ( *length > 0x20 )
            v9 = 32;
          *length = v9;
          memcpy_0(digest, pbOutput, v9);
          v3 = 1;
        }
        bdHMacSHA256::cleanHashHandle(this);
      }
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdHMacSHA256", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::getData", 0xBEu, "Hmac result buffer of invalid size.");
  }
  return v3;
}

/*
==============
bdHMacSHA256::process
==============
*/
char bdHMacSHA256::process(bdHMacSHA256 *this, const unsigned __int8 *const data, const unsigned int length)
{
  void *m_hashHandle; 
  NTSTATUS v6; 
  void *v7; 
  NTSTATUS v8; 

  if ( !data && length )
  {
    bdHandleAssert(0, "\"(data != BD_NULL || length == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::process", 0xA0u, "bdHMacSHA256 cannot process NULL data with length > 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhmacsha256.cpp", "bdHMacSHA256::process", 0xA0u, "bdHMacSHA256 cannot process NULL data with length > 0");
    return 0;
  }
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v6 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, length, 0);
    if ( v6 >= 0 )
      return 1;
    logBCryptResult("bdHMacSHA256", "BCryptHashData", v6);
    v7 = this->m_hashHandle;
    if ( v7 )
    {
      v8 = BCryptDestroyHash_0(v7);
      if ( v8 < 0 )
        logBCryptResult("bdHMacSHA256", "BCryptDestroyHash", v8);
      this->m_hashHandle = NULL;
    }
  }
  return 0;
}

