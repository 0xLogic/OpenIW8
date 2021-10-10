/*
==============
bdHashSHA1::ensureHashHandle
==============
*/

bool __fastcall bdHashSHA1::ensureHashHandle(bdHashSHA1 *this)
{
  return ?ensureHashHandle@bdHashSHA1@@IEAA_NXZ(this);
}

/*
==============
bdHashSHA1::~bdHashSHA1
==============
*/

void __fastcall bdHashSHA1::~bdHashSHA1(bdHashSHA1 *this)
{
  ??1bdHashSHA1@@UEAA@XZ(this);
}

/*
==============
bdHashSHA1::hash
==============
*/

bool __fastcall bdHashSHA1::hash(bdHashSHA1 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashSHA1@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashSHA1::cleanHashHandle
==============
*/

void __fastcall bdHashSHA1::cleanHashHandle(bdHashSHA1 *this)
{
  ?cleanHashHandle@bdHashSHA1@@IEAAXXZ(this);
}

/*
==============
bdHashSHA1::bdHashSHA1
==============
*/

void __fastcall bdHashSHA1::bdHashSHA1(bdHashSHA1 *this)
{
  ??0bdHashSHA1@@QEAA@XZ(this);
}

/*
==============
bdHashSHA1::bdHashSHA1
==============
*/
void bdHashSHA1::bdHashSHA1(bdHashSHA1 *this)
{
  bdHash::bdHash(this, BD_HASH_SHA1, 0x14u);
  this->__vftable = (bdHashSHA1_vtbl *)&bdHashSHA1::`vftable';
  this->m_hashHandle = NULL;
  if ( !bdHashSHA1::s_provider )
  {
    bdHashSHA1::s_reusableHash = 1;
    getBCryptProvider(&bdHashSHA1::s_provider, L"SHA1", 0x20u);
  }
}

/*
==============
bdHashSHA1::~bdHashSHA1
==============
*/
void bdHashSHA1::~bdHashSHA1(bdHashSHA1 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHashSHA1_vtbl *)&bdHashSHA1::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA1", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHash::~bdHash(this);
}

/*
==============
bdHashSHA1::cleanHashHandle
==============
*/
void bdHashSHA1::cleanHashHandle(bdHashSHA1 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA1", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHashSHA1::ensureHashHandle
==============
*/
bool bdHashSHA1::ensureHashHandle(bdHashSHA1 *this)
{
  BCRYPT_ALG_HANDLE v2; 
  bool v4; 
  NTSTATUS Hash_0; 
  void *m_hashHandle; 
  NTSTATUS v7; 

  v2 = bdHashSHA1::s_provider;
  if ( bdHashSHA1::s_provider && this->m_hashHandle )
  {
    if ( bdHashSHA1::s_reusableHash )
      return 1;
    bdHashSHA1::cleanHashHandle(this);
    v2 = bdHashSHA1::s_provider;
  }
  if ( v2 )
  {
    v4 = this->m_hashHandle == NULL;
    if ( !this->m_hashHandle )
    {
      Hash_0 = BCryptCreateHash_0(v2, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA1::s_reusableHash ? 0x20 : 0);
      if ( Hash_0 < 0 )
      {
        logBCryptResult("bdHashSHA1", "BCryptCreateHash", Hash_0);
        bdHashSHA1::cleanHashHandle(this);
      }
      v4 = this->m_hashHandle == NULL;
    }
    return !v4;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha1.cpp", "bdHashSHA1::ensureHashHandle", 0x98u, "BCrypt Crypto Provider not initialized");
    m_hashHandle = this->m_hashHandle;
    if ( m_hashHandle )
    {
      v7 = BCryptDestroyHash_0(m_hashHandle);
      if ( v7 < 0 )
        logBCryptResult("bdHashSHA1", "BCryptDestroyHash", v7);
      this->m_hashHandle = NULL;
    }
    return 0;
  }
}

/*
==============
bdHashSHA1::hash
==============
*/
__int64 bdHashSHA1::hash(bdHashSHA1 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned __int8 v9; 
  BCRYPT_ALG_HANDLE v10; 
  BCRYPT_HASH_HANDLE m_hashHandle; 
  void **p_m_hashHandle; 
  NTSTATUS Hash_0; 
  NTSTATUS v14; 
  NTSTATUS v15; 
  __int128 v16; 
  int v17; 
  NTSTATUS v18; 
  unsigned __int8 pbOutput[16]; 
  int v21; 

  v9 = 0;
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha1.cpp", "bdHashSHA1::hash", 0xA6u, "SHA1 input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha1.cpp", "bdHashSHA1::hash", 0xA7u, "SHA1 digest buffer cannot be NULL");
  bdHandleAssert(*resultSize >= 0x14, "(resultSize >= BD_SHA1_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha1.cpp", "bdHashSHA1::hash", 0xA8u, "SHA1 requires digest buffer >= 20 bytes");
  if ( data && result && *resultSize >= 0x14 )
  {
    v10 = bdHashSHA1::s_provider;
    if ( bdHashSHA1::s_provider )
    {
      m_hashHandle = this->m_hashHandle;
      p_m_hashHandle = &this->m_hashHandle;
      if ( m_hashHandle )
      {
        if ( bdHashSHA1::s_reusableHash )
        {
LABEL_13:
          v14 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, dataSize, 0);
          if ( v14 < 0 )
          {
            logBCryptResult("bdHashSHA1", "BCryptHashData", v14);
            bdHashSHA1::cleanHashHandle(this);
          }
          else
          {
            v15 = BCryptFinishHash_0(*p_m_hashHandle, pbOutput, 0x14u, 0);
            if ( v15 < 0 )
            {
              logBCryptResult("bdHashSHA1", "BCryptFinishHash", v15);
              bdHashSHA1::cleanHashHandle(this);
            }
            else
            {
              v16 = *(_OWORD *)pbOutput;
              v17 = v21;
              v9 = 1;
              *resultSize = 20;
              *(_OWORD *)result = v16;
              *((_DWORD *)result + 4) = v17;
            }
          }
          return v9;
        }
        bdHashSHA1::cleanHashHandle(this);
        v10 = bdHashSHA1::s_provider;
      }
    }
    p_m_hashHandle = &this->m_hashHandle;
    if ( v10 )
    {
      if ( !*p_m_hashHandle )
      {
        Hash_0 = BCryptCreateHash_0(v10, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA1::s_reusableHash ? 0x20 : 0);
        if ( Hash_0 < 0 )
        {
          logBCryptResult("bdHashSHA1", "BCryptCreateHash", Hash_0);
          bdHashSHA1::cleanHashHandle(this);
        }
      }
      m_hashHandle = *p_m_hashHandle;
      if ( *p_m_hashHandle )
        goto LABEL_13;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha1.cpp", "bdHashSHA1::ensureHashHandle", 0x98u, "BCrypt Crypto Provider not initialized");
      if ( *p_m_hashHandle )
      {
        v18 = BCryptDestroyHash_0(*p_m_hashHandle);
        if ( v18 < 0 )
          logBCryptResult("bdHashSHA1", "BCryptDestroyHash", v18);
        this->m_hashHandle = NULL;
      }
    }
  }
  return v9;
}

