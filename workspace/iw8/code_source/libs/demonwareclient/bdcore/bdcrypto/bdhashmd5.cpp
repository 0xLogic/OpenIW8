/*
==============
bdHashMD5::bdHashMD5
==============
*/

void __fastcall bdHashMD5::bdHashMD5(bdHashMD5 *this)
{
  ??0bdHashMD5@@QEAA@XZ(this);
}

/*
==============
bdHashMD5::hash
==============
*/

bool __fastcall bdHashMD5::hash(bdHashMD5 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashMD5@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashMD5::~bdHashMD5
==============
*/

void __fastcall bdHashMD5::~bdHashMD5(bdHashMD5 *this)
{
  ??1bdHashMD5@@UEAA@XZ(this);
}

/*
==============
bdHashMD5::cleanHashHandle
==============
*/

void __fastcall bdHashMD5::cleanHashHandle(bdHashMD5 *this)
{
  ?cleanHashHandle@bdHashMD5@@IEAAXXZ(this);
}

/*
==============
bdHashMD5::ensureHashHandle
==============
*/

bool __fastcall bdHashMD5::ensureHashHandle(bdHashMD5 *this)
{
  return ?ensureHashHandle@bdHashMD5@@IEAA_NXZ(this);
}

/*
==============
bdHashMD5::bdHashMD5
==============
*/
void bdHashMD5::bdHashMD5(bdHashMD5 *this)
{
  bdHash::bdHash(this, BD_HASH_MD5, 0x10u);
  this->__vftable = (bdHashMD5_vtbl *)&bdHashMD5::`vftable';
  this->m_hashHandle = NULL;
  if ( !bdHashMD5::s_provider )
  {
    bdHashMD5::s_reusableHash = 1;
    getBCryptProvider(&bdHashMD5::s_provider, L"MD5", 0x20u);
  }
}

/*
==============
bdHashMD5::~bdHashMD5
==============
*/
void bdHashMD5::~bdHashMD5(bdHashMD5 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHashMD5_vtbl *)&bdHashMD5::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashMD5", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHash::~bdHash(this);
}

/*
==============
bdHashMD5::cleanHashHandle
==============
*/
void bdHashMD5::cleanHashHandle(bdHashMD5 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashMD5", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHashMD5::ensureHashHandle
==============
*/
bool bdHashMD5::ensureHashHandle(bdHashMD5 *this)
{
  BCRYPT_ALG_HANDLE v2; 
  bool v4; 
  NTSTATUS Hash_0; 
  void *m_hashHandle; 
  NTSTATUS v7; 

  v2 = bdHashMD5::s_provider;
  if ( bdHashMD5::s_provider && this->m_hashHandle )
  {
    if ( bdHashMD5::s_reusableHash )
      return 1;
    bdHashMD5::cleanHashHandle(this);
    v2 = bdHashMD5::s_provider;
  }
  if ( v2 )
  {
    v4 = this->m_hashHandle == NULL;
    if ( !this->m_hashHandle )
    {
      Hash_0 = BCryptCreateHash_0(v2, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashMD5::s_reusableHash ? 0x20 : 0);
      if ( Hash_0 < 0 )
      {
        logBCryptResult("bdHashMD5", "BCryptCreateHash", Hash_0);
        bdHashMD5::cleanHashHandle(this);
      }
      v4 = this->m_hashHandle == NULL;
    }
    return !v4;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashMD5", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashmd5.cpp", "bdHashMD5::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
    m_hashHandle = this->m_hashHandle;
    if ( m_hashHandle )
    {
      v7 = BCryptDestroyHash_0(m_hashHandle);
      if ( v7 < 0 )
        logBCryptResult("bdHashMD5", "BCryptDestroyHash", v7);
      this->m_hashHandle = NULL;
    }
    return 0;
  }
}

/*
==============
bdHashMD5::hash
==============
*/
__int64 bdHashMD5::hash(bdHashMD5 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned __int8 v9; 
  BCRYPT_ALG_HANDLE v10; 
  BCRYPT_HASH_HANDLE m_hashHandle; 
  void **p_m_hashHandle; 
  NTSTATUS Hash_0; 
  NTSTATUS v14; 
  NTSTATUS v15; 
  __int128 v16; 
  NTSTATUS v17; 
  unsigned __int8 pbOutput[16]; 

  v9 = 0;
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashmd5.cpp", "bdHashMD5::hash", 0xA7u, "MD5 input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashmd5.cpp", "bdHashMD5::hash", 0xA8u, "MD5 digest buffer cannot be NULL");
  bdHandleAssert(*resultSize >= 0x10, "(resultSize >= BD_MD5_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashmd5.cpp", "bdHashMD5::hash", 0xA9u, "MD5 requires digest buffer >= 16 bytes");
  if ( data && result && *resultSize >= 0x10 )
  {
    v10 = bdHashMD5::s_provider;
    if ( bdHashMD5::s_provider )
    {
      m_hashHandle = this->m_hashHandle;
      p_m_hashHandle = &this->m_hashHandle;
      if ( m_hashHandle )
      {
        if ( bdHashMD5::s_reusableHash )
        {
LABEL_13:
          v14 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, dataSize, 0);
          if ( v14 < 0 )
          {
            logBCryptResult("bdHashMD5", "BCryptHashData", v14);
            bdHashMD5::cleanHashHandle(this);
          }
          else
          {
            v15 = BCryptFinishHash_0(*p_m_hashHandle, pbOutput, 0x10u, 0);
            if ( v15 < 0 )
            {
              logBCryptResult("bdHashMD5", "BCryptFinishHash", v15);
              bdHashMD5::cleanHashHandle(this);
            }
            else
            {
              v16 = *(_OWORD *)pbOutput;
              *resultSize = 16;
              v9 = 1;
              *(_OWORD *)result = v16;
            }
          }
          return v9;
        }
        bdHashMD5::cleanHashHandle(this);
        v10 = bdHashMD5::s_provider;
      }
    }
    p_m_hashHandle = &this->m_hashHandle;
    if ( v10 )
    {
      if ( !*p_m_hashHandle )
      {
        Hash_0 = BCryptCreateHash_0(v10, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashMD5::s_reusableHash ? 0x20 : 0);
        if ( Hash_0 < 0 )
        {
          logBCryptResult("bdHashMD5", "BCryptCreateHash", Hash_0);
          bdHashMD5::cleanHashHandle(this);
        }
      }
      m_hashHandle = *p_m_hashHandle;
      if ( *p_m_hashHandle )
        goto LABEL_13;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashMD5", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashmd5.cpp", "bdHashMD5::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
      if ( *p_m_hashHandle )
      {
        v17 = BCryptDestroyHash_0(*p_m_hashHandle);
        if ( v17 < 0 )
          logBCryptResult("bdHashMD5", "BCryptDestroyHash", v17);
        this->m_hashHandle = NULL;
      }
    }
  }
  return v9;
}

