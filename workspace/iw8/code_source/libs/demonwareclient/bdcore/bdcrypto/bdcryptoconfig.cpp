/*
==============
bdCryptoConfig::libTomCryptCalloc
==============
*/

void *__fastcall bdCryptoConfig::libTomCryptCalloc(unsigned __int64 n, unsigned __int64 s)
{
  return ?libTomCryptCalloc@bdCryptoConfig@@SAPEAX_K0@Z(n, s);
}

/*
==============
getBCryptProvider
==============
*/

int __fastcall getBCryptProvider(void **providerHandle, const wchar_t *algorithm, unsigned int flags)
{
  return ?getBCryptProvider@@YAJPEAPEAXPEB_WK@Z(providerHandle, algorithm, flags);
}

/*
==============
bdCryptoConfig::libTomCryptRealloc
==============
*/

void *__fastcall bdCryptoConfig::libTomCryptRealloc(void *p, unsigned __int64 n)
{
  return ?libTomCryptRealloc@bdCryptoConfig@@SAPEAXPEAX_K@Z(p, n);
}

/*
==============
bdCryptoConfig::libTomCryptMalloc
==============
*/

void *__fastcall bdCryptoConfig::libTomCryptMalloc(unsigned __int64 n)
{
  return ?libTomCryptMalloc@bdCryptoConfig@@SAPEAX_K@Z(n);
}

/*
==============
bdCryptoConfig::quit
==============
*/

bool __fastcall bdCryptoConfig::quit()
{
  return ?quit@bdCryptoConfig@@SA_NXZ();
}

/*
==============
logBCryptResult
==============
*/

void __fastcall logBCryptResult(const char *const logLevel, const char *const functionName, const unsigned int result)
{
  ?logBCryptResult@@YAXQEBD0I@Z(logLevel, functionName, result);
}

/*
==============
bdCryptoConfig::init
==============
*/

bool __fastcall bdCryptoConfig::init()
{
  return ?init@bdCryptoConfig@@SA_NXZ();
}

/*
==============
bdCryptoConfig::initLibTomCrypt
==============
*/

bool __fastcall bdCryptoConfig::initLibTomCrypt()
{
  return ?initLibTomCrypt@bdCryptoConfig@@SA_NXZ();
}

/*
==============
bdCryptoConfig::libTomCryptFree
==============
*/

void __fastcall bdCryptoConfig::libTomCryptFree(void *p)
{
  ?libTomCryptFree@bdCryptoConfig@@SAXPEAX@Z(p);
}

/*
==============
getBCryptProvider
==============
*/
unsigned int getBCryptProvider(void **providerHandle, const wchar_t *algorithm, unsigned int flags)
{
  unsigned int result; 
  unsigned int v5; 

  result = BCryptOpenAlgorithmProvider_0(providerHandle, algorithm, NULL, flags);
  v5 = result;
  if ( (result & 0x80000000) != 0 )
  {
    if ( result > 0xC0000023 )
    {
      if ( result != -1073741306 )
      {
        if ( result == -1073700862 )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x37u, "Auth Tag Mismatch for %s()", "BCryptOpenAlgorithmProvider");
          goto LABEL_15;
        }
        goto LABEL_12;
      }
    }
    else if ( result != -1073741789 )
    {
      switch ( result )
      {
        case 0xC0000008:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x29u, "Invalid Handle for %s()", "BCryptOpenAlgorithmProvider");
          goto LABEL_15;
        case 0xC000000D:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x26u, "Invalid parameter for %s()", "BCryptOpenAlgorithmProvider");
          goto LABEL_15;
        case 0xC0000017:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x2Cu, "No Memory issue for %s()", "BCryptOpenAlgorithmProvider");
LABEL_15:
          *providerHandle = NULL;
          return v5;
      }
LABEL_12:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x3Au, "%s() Failure: [0x%X]", "BCryptOpenAlgorithmProvider", result);
      goto LABEL_15;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x33u, "Buffer size issue for %s()", "BCryptOpenAlgorithmProvider");
    goto LABEL_15;
  }
  return result;
}

/*
==============
bdCryptoConfig::init
==============
*/
bool bdCryptoConfig::init()
{
  __int64 v3; 
  char v10; 

  if ( j_set_ltc_memory_functions(bdCryptoConfig::libTomCryptMalloc, bdCryptoConfig::libTomCryptRealloc, bdCryptoConfig::libTomCryptCalloc, bdCryptoConfig::libTomCryptFree) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoConfig", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "bdCryptoConfig::init", 0xC8u, "Error setting DW memory allocators for LibTomCrypt");
    return 0;
  }
  bdMutex::lock(&bdCryptoConfig::s_ltcMutex);
  _RCX = &ltc_mp;
  _RAX = &ltm_desc;
  v3 = 3i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (ltc_math_descriptor *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (ltc_math_descriptor *)((char *)_RAX + 128);
    --v3;
  }
  while ( v3 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
  }
  bdCryptoConfig::s_cypherAES = j_register_cipher(&aes_desc);
  if ( bdCryptoConfig::s_cypherAES == -1 )
    goto LABEL_16;
  bdCryptoConfig::s_cypher3DES = j_register_cipher(&des3_desc);
  if ( bdCryptoConfig::s_cypher3DES == -1 || (bdCryptoConfig::s_hashMD5 = j_register_hash(&md5_desc), bdCryptoConfig::s_hashMD5 == -1) || (bdCryptoConfig::s_hashSHA1 = j_register_hash(&sha1_desc), bdCryptoConfig::s_hashSHA1 == -1) || (bdCryptoConfig::s_hashSHA256 = j_register_hash(&sha256_desc), bdCryptoConfig::s_hashSHA256 == -1) || (bdCryptoConfig::s_hashSHA384 = j_register_hash(&sha384_desc), bdCryptoConfig::s_hashSHA384 == -1) || (bdCryptoConfig::s_hashSHA512 = j_register_hash(&sha512_desc), bdCryptoConfig::s_hashSHA512 == -1) || (bdCryptoConfig::s_hashTIGER192 = j_register_hash(&tiger_desc), bdCryptoConfig::s_hashTIGER192 == -1) || (bdCryptoConfig::s_prngYarrow = j_register_prng(&yarrow_desc), bdCryptoConfig::s_prngYarrow == -1) )
  {
LABEL_16:
    v10 = 0;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "bdCryptoConfig::initLibTomCrypt", 0x100u, "Unable to register LTC ciphers / hashes / PRNGs");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "bdCryptoConfig::initLibTomCrypt", 0x100u, "Unable to register LTC ciphers / hashes / PRNGs");
  }
  else
  {
    v10 = 1;
  }
  bdMutex::unlock(&bdCryptoConfig::s_ltcMutex);
  return v10 != 0;
}

/*
==============
bdCryptoConfig::initLibTomCrypt
==============
*/
__int64 bdCryptoConfig::initLibTomCrypt()
{
  __int64 v2; 
  unsigned __int8 v9; 

  bdMutex::lock(&bdCryptoConfig::s_ltcMutex);
  _RCX = &ltc_mp;
  _RAX = &ltm_desc;
  v2 = 3i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (ltc_math_descriptor *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (ltc_math_descriptor *)((char *)_RAX + 128);
    --v2;
  }
  while ( v2 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
  }
  bdCryptoConfig::s_cypherAES = j_register_cipher(&aes_desc);
  if ( bdCryptoConfig::s_cypherAES == -1 )
    goto LABEL_13;
  bdCryptoConfig::s_cypher3DES = j_register_cipher(&des3_desc);
  if ( bdCryptoConfig::s_cypher3DES == -1 || (bdCryptoConfig::s_hashMD5 = j_register_hash(&md5_desc), bdCryptoConfig::s_hashMD5 == -1) || (bdCryptoConfig::s_hashSHA1 = j_register_hash(&sha1_desc), bdCryptoConfig::s_hashSHA1 == -1) || (bdCryptoConfig::s_hashSHA256 = j_register_hash(&sha256_desc), bdCryptoConfig::s_hashSHA256 == -1) || (bdCryptoConfig::s_hashSHA384 = j_register_hash(&sha384_desc), bdCryptoConfig::s_hashSHA384 == -1) || (bdCryptoConfig::s_hashSHA512 = j_register_hash(&sha512_desc), bdCryptoConfig::s_hashSHA512 == -1) || (bdCryptoConfig::s_hashTIGER192 = j_register_hash(&tiger_desc), bdCryptoConfig::s_hashTIGER192 == -1) || (bdCryptoConfig::s_prngYarrow = j_register_prng(&yarrow_desc), bdCryptoConfig::s_prngYarrow == -1) )
  {
LABEL_13:
    v9 = 0;
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "bdCryptoConfig::initLibTomCrypt", 0x100u, "Unable to register LTC ciphers / hashes / PRNGs");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "bdCryptoConfig::initLibTomCrypt", 0x100u, "Unable to register LTC ciphers / hashes / PRNGs");
  }
  else
  {
    v9 = 1;
  }
  bdMutex::unlock(&bdCryptoConfig::s_ltcMutex);
  return v9;
}

/*
==============
bdCryptoConfig::libTomCryptCalloc
==============
*/
void *bdCryptoConfig::libTomCryptCalloc(unsigned __int64 n, unsigned __int64 s)
{
  size_t v2; 
  void *result; 
  void *v4; 

  v2 = s * n;
  result = bdMemory::allocate(s * n);
  v4 = result;
  if ( result )
  {
    memset_0(result, 0, v2);
    return v4;
  }
  return result;
}

/*
==============
bdCryptoConfig::libTomCryptFree
==============
*/

void __fastcall bdCryptoConfig::libTomCryptFree(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdCryptoConfig::libTomCryptMalloc
==============
*/

void *__fastcall bdCryptoConfig::libTomCryptMalloc(unsigned __int64 n)
{
  return bdMemory::allocate(n);
}

/*
==============
bdCryptoConfig::libTomCryptRealloc
==============
*/

void *__fastcall bdCryptoConfig::libTomCryptRealloc(void *p, unsigned __int64 n)
{
  return bdMemory::reallocate(p, n);
}

/*
==============
logBCryptResult
==============
*/
void logBCryptResult(const char *const logLevel, const char *const functionName, const unsigned int result)
{
  if ( result <= 0xC0000023 )
  {
    if ( result != -1073741789 )
    {
      switch ( result )
      {
        case 0xC0000008:
          bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x29u, "Invalid Handle for %s()", functionName);
          return;
        case 0xC000000D:
          bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x26u, "Invalid parameter for %s()", functionName);
          return;
        case 0xC0000017:
          bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x2Cu, "No Memory issue for %s()", functionName);
          return;
      }
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  if ( result == -1073741306 )
  {
LABEL_13:
    bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x33u, "Buffer size issue for %s()", functionName);
    return;
  }
  if ( result != -1073700862 )
  {
LABEL_11:
    bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x3Au, "%s() Failure: [0x%X]", functionName, result);
    return;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", logLevel, "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.cpp", "logBCryptResult", 0x37u, "Auth Tag Mismatch for %s()", functionName);
}

/*
==============
bdCryptoConfig::quit
==============
*/
char bdCryptoConfig::quit()
{
  return 1;
}

