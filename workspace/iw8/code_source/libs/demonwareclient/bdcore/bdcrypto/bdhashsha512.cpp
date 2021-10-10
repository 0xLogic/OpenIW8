/*
==============
bdHashSHA512::ensureHashHandle
==============
*/

bool __fastcall bdHashSHA512::ensureHashHandle(bdHashSHA512 *this)
{
  return ?ensureHashHandle@bdHashSHA512@@IEAA_NXZ(this);
}

/*
==============
bdHashSHA512::bdHashSHA512
==============
*/

void __fastcall bdHashSHA512::bdHashSHA512(bdHashSHA512 *this)
{
  ??0bdHashSHA512@@QEAA@XZ(this);
}

/*
==============
bdHashSHA512::~bdHashSHA512
==============
*/

void __fastcall bdHashSHA512::~bdHashSHA512(bdHashSHA512 *this)
{
  ??1bdHashSHA512@@UEAA@XZ(this);
}

/*
==============
bdHashSHA512::hash
==============
*/

bool __fastcall bdHashSHA512::hash(bdHashSHA512 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashSHA512@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashSHA512::cleanHashHandle
==============
*/

void __fastcall bdHashSHA512::cleanHashHandle(bdHashSHA512 *this)
{
  ?cleanHashHandle@bdHashSHA512@@IEAAXXZ(this);
}

/*
==============
bdHashSHA512::bdHashSHA512
==============
*/
void bdHashSHA512::bdHashSHA512(bdHashSHA512 *this)
{
  bdHash::bdHash(this, BD_HASH_SHA512, 0x40u);
  this->__vftable = (bdHashSHA512_vtbl *)&bdHashSHA512::`vftable';
  this->m_hashHandle = NULL;
  if ( !bdHashSHA512::s_provider )
  {
    bdHashSHA512::s_reusableHash = 1;
    getBCryptProvider(&bdHashSHA512::s_provider, L"SHA512", 0x20u);
  }
}

/*
==============
bdHashSHA512::~bdHashSHA512
==============
*/
void bdHashSHA512::~bdHashSHA512(bdHashSHA512 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  this->__vftable = (bdHashSHA512_vtbl *)&bdHashSHA512::`vftable';
  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA512", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
  bdHash::~bdHash(this);
}

/*
==============
bdHashSHA512::cleanHashHandle
==============
*/
void bdHashSHA512::cleanHashHandle(bdHashSHA512 *this)
{
  void *m_hashHandle; 
  NTSTATUS v3; 

  m_hashHandle = this->m_hashHandle;
  if ( m_hashHandle )
  {
    v3 = BCryptDestroyHash_0(m_hashHandle);
    if ( v3 < 0 )
      logBCryptResult("bdHashSHA512", "BCryptDestroyHash", v3);
    this->m_hashHandle = NULL;
  }
}

/*
==============
bdHashSHA512::ensureHashHandle
==============
*/
bool bdHashSHA512::ensureHashHandle(bdHashSHA512 *this)
{
  BCRYPT_ALG_HANDLE v2; 
  bool v4; 
  NTSTATUS Hash_0; 
  void *m_hashHandle; 
  NTSTATUS v7; 

  v2 = bdHashSHA512::s_provider;
  if ( bdHashSHA512::s_provider && this->m_hashHandle )
  {
    if ( bdHashSHA512::s_reusableHash )
      return 1;
    bdHashSHA512::cleanHashHandle(this);
    v2 = bdHashSHA512::s_provider;
  }
  if ( v2 )
  {
    v4 = this->m_hashHandle == NULL;
    if ( !this->m_hashHandle )
    {
      Hash_0 = BCryptCreateHash_0(v2, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA512::s_reusableHash ? 0x20 : 0);
      if ( Hash_0 < 0 )
      {
        logBCryptResult("bdHashSHA512", "BCryptCreateHash", Hash_0);
        bdHashSHA512::cleanHashHandle(this);
      }
      v4 = this->m_hashHandle == NULL;
    }
    return !v4;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA512", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha512.cpp", "bdHashSHA512::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
    m_hashHandle = this->m_hashHandle;
    if ( m_hashHandle )
    {
      v7 = BCryptDestroyHash_0(m_hashHandle);
      if ( v7 < 0 )
        logBCryptResult("bdHashSHA512", "BCryptDestroyHash", v7);
      this->m_hashHandle = NULL;
    }
    return 0;
  }
}

/*
==============
bdHashSHA512::hash
==============
*/
__int64 bdHashSHA512::hash(bdHashSHA512 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned __int8 v9; 
  BCRYPT_ALG_HANDLE v10; 
  BCRYPT_HASH_HANDLE m_hashHandle; 
  void **p_m_hashHandle; 
  NTSTATUS Hash_0; 
  NTSTATUS v14; 
  NTSTATUS v15; 
  __m256i v16; 
  __m256i v17; 
  NTSTATUS v18; 
  unsigned __int8 pbOutput[32]; 
  __m256i v21; 

  v9 = 0;
  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha512.cpp", "bdHashSHA512::hash", 0xA7u, "SHA512 input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha512.cpp", "bdHashSHA512::hash", 0xA8u, "SHA512 digest buffer cannot be NULL");
  bdHandleAssert(*resultSize >= 0x40, "(resultSize >= BD_SHA512_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha512.cpp", "bdHashSHA512::hash", 0xA9u, "SHA512 requires digest buffer >= 64 bytes");
  if ( data && result && *resultSize >= 0x40 )
  {
    v10 = bdHashSHA512::s_provider;
    if ( bdHashSHA512::s_provider )
    {
      m_hashHandle = this->m_hashHandle;
      p_m_hashHandle = &this->m_hashHandle;
      if ( m_hashHandle )
      {
        if ( bdHashSHA512::s_reusableHash )
        {
LABEL_13:
          v14 = BCryptHashData_0(m_hashHandle, (PUCHAR)data, dataSize, 0);
          if ( v14 < 0 )
          {
            logBCryptResult("bdHashSHA512", "BCryptHashData", v14);
            bdHashSHA512::cleanHashHandle(this);
          }
          else
          {
            v15 = BCryptFinishHash_0(*p_m_hashHandle, pbOutput, 0x40u, 0);
            if ( v15 < 0 )
            {
              logBCryptResult("bdHashSHA512", "BCryptFinishHash", v15);
              bdHashSHA512::cleanHashHandle(this);
            }
            else
            {
              v16 = *(__m256i *)pbOutput;
              v17 = v21;
              *resultSize = 64;
              v9 = 1;
              *(__m256i *)result = v16;
              *((__m256i *)result + 1) = v17;
            }
          }
          return v9;
        }
        bdHashSHA512::cleanHashHandle(this);
        v10 = bdHashSHA512::s_provider;
      }
    }
    p_m_hashHandle = &this->m_hashHandle;
    if ( v10 )
    {
      if ( !*p_m_hashHandle )
      {
        Hash_0 = BCryptCreateHash_0(v10, &this->m_hashHandle, NULL, 0, NULL, 0, bdHashSHA512::s_reusableHash ? 0x20 : 0);
        if ( Hash_0 < 0 )
        {
          logBCryptResult("bdHashSHA512", "BCryptCreateHash", Hash_0);
          bdHashSHA512::cleanHashHandle(this);
        }
      }
      m_hashHandle = *p_m_hashHandle;
      if ( *p_m_hashHandle )
        goto LABEL_13;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHashSHA512", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashsha512.cpp", "bdHashSHA512::ensureHashHandle", 0x99u, "BCrypt Crypto Provider not initialized");
      if ( *p_m_hashHandle )
      {
        v18 = BCryptDestroyHash_0(*p_m_hashHandle);
        if ( v18 < 0 )
          logBCryptResult("bdHashSHA512", "BCryptDestroyHash", v18);
        this->m_hashHandle = NULL;
      }
    }
  }
  return v9;
}

