/*
==============
bdHashSHA384::hash
==============
*/

bool __fastcall bdHashSHA384::hash(bdHashSHA384 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashSHA384@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashSHA384::bdHashSHA384
==============
*/

void __fastcall bdHashSHA384::bdHashSHA384(bdHashSHA384 *this)
{
  ??0bdHashSHA384@@QEAA@XZ(this);
}

/*
==============
bdHashSHA384::cleanHashHandle
==============
*/

void __fastcall bdHashSHA384::cleanHashHandle(bdHashSHA384 *this)
{
  ?cleanHashHandle@bdHashSHA384@@IEAAXXZ(this);
}

/*
==============
bdHashSHA384::~bdHashSHA384
==============
*/

void __fastcall bdHashSHA384::~bdHashSHA384(bdHashSHA384 *this)
{
  ??1bdHashSHA384@@UEAA@XZ(this);
}

/*
==============
bdHashSHA384::ensureHashHandle
==============
*/

bool __fastcall bdHashSHA384::ensureHashHandle(bdHashSHA384 *this)
{
  return ?ensureHashHandle@bdHashSHA384@@IEAA_NXZ(this);
}

/*
==============
bdHashSHA384::bdHashSHA384
==============
*/
void bdHashSHA384::bdHashSHA384(bdHashSHA384 *this)
{
  bdHash::bdHash(this, BD_HASH_SHA384, 0x30u);
  this->__vftable = (bdHashSHA384_vtbl *)&bdHashSHA384::`vftable';
  this->m_hashHandle = NULL;
  if ( !bdHashSHA384::s_provider )
  {
    bdHashSHA384::s_reusableHash = 1;
    getBCryptProvider(&bdHashSHA384::s_provider, L"SHA384", 0x20u);
  }
}

/*
==============
bdHashSHA384::~bdHashSHA384
==============
*/
void bdHashSHA384::~bdHashSHA384(bdHashSHA384 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHashSHA384_vtbl *)&bdHashSHA384::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA384", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHash::~bdHash(this);
}

/*
==============
bdHashSHA384::cleanHashHandle
==============
*/
void bdHashSHA384::cleanHashHandle(bdHashSHA384 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA384", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHashSHA384::ensureHashHandle
==============
*/
bool bdHashSHA384::ensureHashHandle(bdHashSHA384 *this)
{
  BCRYPT_ALG_HANDLE v2; 
  bool v4; 
  NTSTATUS Hash_0; 
  void *m_hashHandle; 
  NTSTATUS v7; 

  v2 = bdHashSHA384::s_provider;
  if ( bdHashSHA384::s_provider && this->m_hashHandle )
  {
    if ( bdHashSHA384::s_reusableHash )
      return 1;
    bdHashSHA384::cleanHashHandle(this);
    v2 = bdHashSHA384::s_provider;
  }
  if ( v2 )
  {
    v4 = this->m_hashHandle == NULL;
    if ( !this->m_hashHandle )
    {
      Hash_0 = BCryptCreateHash_0(v2, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA384::s_reusableHash ? 0x20 : 0);
      if ( Hash_0 < 0 )
      {
        logBCryptResult("bdHashSHA384", "BCryptCreateHash", Hash_0);
        bdHashSHA384::cleanHashHandle(this);
      }
      v4 = this->m_hashHandle == NULL;
    }
    return !v4;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA384", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha384.cpp", "bdHashSHA384::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
    m_hashHandle = this->m_hashHandle;
    if ( m_hashHandle )
    {
      v7 = BCryptDestroyHash_0(m_hashHandle);
      if ( v7 < 0 )
        logBCryptResult("bdHashSHA384", "BCryptDestroyHash", v7);
      this->m_hashHandle = NULL;
    }
    return 0;
  }
}

/*
==============
bdHashSHA384::hash
==============
*/
__int64 bdHashSHA384::hash(bdHashSHA384 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned __int8 v9; 
  BCRYPT_ALG_HANDLE v10; 
  BCRYPT_HASH_HANDLE m_hashHandle; 
  void **p_m_hashHandle; 
  NTSTATUS Hash_0; 
  NTSTATUS v14; 
  NTSTATUS v15; 
  __m256i v16; 
  __int128 v17; 
  NTSTATUS v18; 
  unsigned __int8 pbOutput[32]; 
  __int128 v21; 

  v9 = 0;
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha384.cpp", "bdHashSHA384::hash", 0xA7u, "SHA384 input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha384.cpp", "bdHashSHA384::hash", 0xA8u, "SHA384 digest buffer cannot be NULL");
  bdHandleAssert(*resultSize >= 0x30, "(resultSize >= BD_SHA384_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha384.cpp", "bdHashSHA384::hash", 0xA9u, "SHA384 requires digest buffer >= 48 bytes");
  if ( data && result && *resultSize >= 0x30 )
  {
    v10 = bdHashSHA384::s_provider;
    if ( bdHashSHA384::s_provider )
    {
      m_hashHandle = this->m_hashHandle;
      p_m_hashHandle = &this->m_hashHandle;
      if ( m_hashHandle )
      {
        if ( bdHashSHA384::s_reusableHash )
        {
LABEL_13:
          v14 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, dataSize, 0);
          if ( v14 < 0 )
          {
            logBCryptResult("bdHashSHA384", "BCryptHashData", v14);
            bdHashSHA384::cleanHashHandle(this);
          }
          else
          {
            v15 = BCryptFinishHash_0(*p_m_hashHandle, pbOutput, 0x30u, 0);
            if ( v15 < 0 )
            {
              logBCryptResult("bdHashSHA384", "BCryptFinishHash", v15);
              bdHashSHA384::cleanHashHandle(this);
            }
            else
            {
              v16 = *(__m256i *)pbOutput;
              v17 = v21;
              *resultSize = 48;
              v9 = 1;
              *(__m256i *)result = v16;
              *((_OWORD *)result + 2) = v17;
            }
          }
          return v9;
        }
        bdHashSHA384::cleanHashHandle(this);
        v10 = bdHashSHA384::s_provider;
      }
    }
    p_m_hashHandle = &this->m_hashHandle;
    if ( v10 )
    {
      if ( !*p_m_hashHandle )
      {
        Hash_0 = BCryptCreateHash_0(v10, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA384::s_reusableHash ? 0x20 : 0);
        if ( Hash_0 < 0 )
        {
          logBCryptResult("bdHashSHA384", "BCryptCreateHash", Hash_0);
          bdHashSHA384::cleanHashHandle(this);
        }
      }
      m_hashHandle = *p_m_hashHandle;
      if ( *p_m_hashHandle )
        goto LABEL_13;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA384", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha384.cpp", "bdHashSHA384::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
      if ( *p_m_hashHandle )
      {
        v18 = BCryptDestroyHash_0(*p_m_hashHandle);
        if ( v18 < 0 )
          logBCryptResult("bdHashSHA384", "BCryptDestroyHash", v18);
        this->m_hashHandle = NULL;
      }
    }
  }
  return v9;
}

