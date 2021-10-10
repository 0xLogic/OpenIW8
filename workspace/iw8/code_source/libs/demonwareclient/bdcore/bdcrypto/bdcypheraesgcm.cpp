/*
==============
bdCypherAESGCM::decrypt
==============
*/

bool __fastcall bdCypherAESGCM::decrypt(bdCypherAESGCM *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  return ?decrypt@bdCypherAESGCM@@UEAA_NPEBE0PEAEI@Z(this, iv, cypherText, plainText, size);
}

/*
==============
bdCypherAESGCM::init
==============
*/

bool __fastcall bdCypherAESGCM::init(bdCypherAESGCM *this, const unsigned __int8 *key, unsigned int keySize)
{
  return ?init@bdCypherAESGCM@@UEAA_NPEBEI@Z(this, key, keySize);
}

/*
==============
bdCypherAESGCM::setAuthenticationTag
==============
*/

bool __fastcall bdCypherAESGCM::setAuthenticationTag(bdCypherAESGCM *this, const bdAuthenticationTag *authTag)
{
  return ?setAuthenticationTag@bdCypherAESGCM@@QEAA_NAEBVbdAuthenticationTag@@@Z(this, authTag);
}

/*
==============
bdCypherAESGCM::setAAD
==============
*/

bool __fastcall bdCypherAESGCM::setAAD(bdCypherAESGCM *this, const unsigned __int8 *const aad, const unsigned int aadSize)
{
  return ?setAAD@bdCypherAESGCM@@QEAA_NQEBEI@Z(this, aad, aadSize);
}

/*
==============
bdCypherAESGCM::~bdCypherAESGCM
==============
*/

void __fastcall bdCypherAESGCM::~bdCypherAESGCM(bdCypherAESGCM *this)
{
  ??1bdCypherAESGCM@@UEAA@XZ(this);
}

/*
==============
bdCypherAESGCM::encrypt
==============
*/

bool __fastcall bdCypherAESGCM::encrypt(bdCypherAESGCM *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  return ?encrypt@bdCypherAESGCM@@UEAA_NPEBE0PEAEI@Z(this, iv, plainText, cypherText, size);
}

/*
==============
bdCypherAESGCM::getAuthenticationTag
==============
*/

bool __fastcall bdCypherAESGCM::getAuthenticationTag(bdCypherAESGCM *this, bdAuthenticationTag *authTag, const unsigned __int8 tagLength)
{
  return ?getAuthenticationTag@bdCypherAESGCM@@QEAA_NAEAVbdAuthenticationTag@@E@Z(this, authTag, tagLength);
}

/*
==============
bdCypherAESGCM::bdCypherAESGCM
==============
*/

void __fastcall bdCypherAESGCM::bdCypherAESGCM(bdCypherAESGCM *this)
{
  ??0bdCypherAESGCM@@QEAA@XZ(this);
}

/*
==============
bdCypherAESGCM::bdCypherAESGCM
==============
*/
void bdCypherAESGCM::bdCypherAESGCM(bdCypherAESGCM *this)
{
  NTSTATUS BCryptProvider; 
  const char *v3; 

  bdCypher::bdCypher(this, 0x10u, BD_CYPHER_MODE_GCM);
  this->__vftable = (bdCypherAESGCM_vtbl *)&bdCypherAESGCM::`vftable';
  this->m_keySize = 0;
  bdAuthenticationTag::bdAuthenticationTag(&this->m_authenticationTag);
  this->m_aad = NULL;
  this->m_aadSize = 0;
  this->m_cypherKey = NULL;
  if ( !bdCypherAESGCM::s_provider )
  {
    BCryptProvider = getBCryptProvider(&bdCypherAESGCM::s_provider, L"AES", 0);
    if ( BCryptProvider < 0 )
    {
      v3 = "getBCryptProvider";
    }
    else
    {
      BCryptProvider = BCryptSetProperty_0(bdCypherAESGCM::s_provider, L"ChainingMode", (PUCHAR)L"ChainingModeGCM", 0x20u, 0);
      if ( BCryptProvider >= 0 )
        return;
      v3 = "BCryptSetProperty";
    }
    logBCryptResult("bdCypherAESGCM", v3, BCryptProvider);
  }
}

/*
==============
bdCypherAESGCM::~bdCypherAESGCM
==============
*/
void bdCypherAESGCM::~bdCypherAESGCM(bdCypherAESGCM *this)
{
  void *m_cypherKey; 
  NTSTATUS v3; 

  this->__vftable = (bdCypherAESGCM_vtbl *)&bdCypherAESGCM::`vftable';
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
  {
    v3 = BCryptDestroyKey_0(m_cypherKey);
    if ( v3 < 0 )
      logBCryptResult("bdCypherAESGCM", "BCryptDestroyKey", v3);
    this->m_cypherKey = NULL;
  }
  bdAuthenticationTag::~bdAuthenticationTag(&this->m_authenticationTag);
  bdCypher::~bdCypher(this);
}

/*
==============
bdCypherAESGCM::decrypt
==============
*/
bool bdCypherAESGCM::decrypt(bdCypherAESGCM *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  double v9; 
  NTSTATUS v10; 
  ULONG pcbResult[4]; 
  int pPaddingInfo[2]; 
  __int64 *v14; 
  int v15; 
  __int128 v16; 
  int v17; 
  _QWORD v18[2]; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  double v24; 
  int v25; 

  if ( !iv )
  {
    bdHandleAssert(0, "\"(iv != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x135u, "bdCypherAESGCM: IV cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x135u, "bdCypherAESGCM: IV cannot be NULL");
  }
  if ( !cypherText )
  {
    bdHandleAssert(0, "\"(cypherText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x136u, "bdCypherAESGCM: Cyphertext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x136u, "bdCypherAESGCM: Cyphertext buffer cannot be NULL");
  }
  if ( !plainText )
  {
    bdHandleAssert(0, "\"(plainText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x137u, "bdCypherAESGCM: Plaintext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x137u, "bdCypherAESGCM: Plaintext buffer cannot be NULL");
  }
  if ( iv && cypherText && plainText )
  {
    v9 = *(double *)iv;
    v25 = *((_DWORD *)iv + 2);
    pPaddingInfo[0] = 88;
    v16 = 0ui64;
    v17 = 0;
    v19 = 0;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    v23 = 0;
    v14 = (__int64 *)&v24;
    v24 = v9;
    pPaddingInfo[1] = 1;
    v15 = 12;
    v18[0] = bdAuthenticationTag::getTag(&this->m_authenticationTag);
    v18[1] = bdAuthenticationTag::getTagLength(&this->m_authenticationTag);
    *(_QWORD *)((char *)&v16 + 4) = this->m_aad;
    HIDWORD(v16) = this->m_aadSize;
    pcbResult[0] = 0;
    v10 = BCryptDecrypt_0(this->m_cypherKey, (PUCHAR)cypherText, size, pPaddingInfo, NULL, 0, plainText, size, pcbResult, 0);
    if ( v10 < 0 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x15Bu, "bdCypherAESGCM: Error decrypting AES-GCM");
      logBCryptResult("bdCypherAESGCM", "BCryptDecrypt", v10);
    }
    return v10 >= 0;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::decrypt", 0x161u, "bdCypherAESGCM: Parameter error");
    return 0;
  }
}

/*
==============
bdCypherAESGCM::encrypt
==============
*/
bool bdCypherAESGCM::encrypt(bdCypherAESGCM *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  double v9; 
  NTSTATUS v10; 
  ULONG pcbResult[4]; 
  int pPaddingInfo[2]; 
  __int64 *v14; 
  int v15; 
  __int128 v16; 
  int v17; 
  _QWORD v18[2]; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  double v24; 
  int v25; 

  if ( !iv )
  {
    bdHandleAssert(0, "\"(iv != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0xFFu, "bdCypherAESGCM: IV cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0xFFu, "bdCypherAESGCM: IV cannot be NULL");
  }
  if ( !plainText )
  {
    bdHandleAssert(0, "\"(plainText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x100u, "bdCypherAESGCM: Plaintext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x100u, "bdCypherAESGCM: Plaintext buffer cannot be NULL");
  }
  if ( !cypherText )
  {
    bdHandleAssert(0, "\"(cypherText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x101u, "bdCypherAESGCM: Cyphertext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x101u, "bdCypherAESGCM: Cyphertext buffer cannot be NULL");
  }
  if ( iv && plainText && cypherText )
  {
    v9 = *(double *)iv;
    v25 = *((_DWORD *)iv + 2);
    pPaddingInfo[0] = 88;
    v16 = 0ui64;
    v17 = 0;
    v19 = 0;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    v23 = 0;
    v14 = (__int64 *)&v24;
    v24 = v9;
    pPaddingInfo[1] = 1;
    v15 = 12;
    v18[0] = bdAuthenticationTag::getTag(&this->m_authenticationTag);
    v18[1] = bdAuthenticationTag::getTagLength(&this->m_authenticationTag);
    *(_QWORD *)((char *)&v16 + 4) = this->m_aad;
    HIDWORD(v16) = this->m_aadSize;
    pcbResult[0] = 0;
    v10 = BCryptEncrypt_0(this->m_cypherKey, (PUCHAR)plainText, size, pPaddingInfo, NULL, 0, cypherText, size, pcbResult, 0);
    if ( v10 < 0 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x124u, "bdCypherAESGCM: Error encrypting AES-GCM");
      logBCryptResult("bdCypherAESGCM", "BCryptEncrypt", v10);
    }
    return v10 >= 0;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::encrypt", 0x12Au, "bdCypherAESGCM: Parameter error");
    return 0;
  }
}

/*
==============
bdCypherAESGCM::getAuthenticationTag
==============
*/
char bdCypherAESGCM::getAuthenticationTag(bdCypherAESGCM *this, bdAuthenticationTag *authTag, const unsigned __int8 tagLength)
{
  const unsigned __int8 *Tag; 

  bdHandleAssert(tagLength >= 0xCu, "tagLength >= bdAuthenticationTag::BD_TAG_SIZE_MIN", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::getAuthenticationTag", 0x246u, "Tag Length too small");
  bdHandleAssert(tagLength <= 0x10u, "tagLength <= bdAuthenticationTag::BD_TAG_SIZE_MAX", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::getAuthenticationTag", 0x247u, "Tag Length too large");
  if ( (unsigned __int8)(tagLength - 12) > 4u )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::getAuthenticationTag", 0x250u, "Requested tagLength must be between 12 and 16 bytes");
    return 0;
  }
  else
  {
    Tag = bdAuthenticationTag::getTag(&this->m_authenticationTag);
    bdAuthenticationTag::setTag(authTag, Tag, tagLength);
    return 1;
  }
}

/*
==============
bdCypherAESGCM::init
==============
*/
bool bdCypherAESGCM::init(bdCypherAESGCM *this, const unsigned __int8 *key, unsigned int keySize)
{
  void *m_cypherKey; 
  NTSTATUS SymmetricKey_0; 
  bool v8; 

  if ( !key )
  {
    bdHandleAssert(0, "\"(key != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::init", 0xD4u, "bdCypherAESGCM cannot have NULL key");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::init", 0xD4u, "bdCypherAESGCM cannot have NULL key");
  }
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
  {
    BCryptDestroyKey_0(m_cypherKey);
    this->m_cypherKey = NULL;
  }
  if ( !key || ((keySize - 16) & 0xFFFFFFE7) != 0 || keySize == 40 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAESGCM", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::init", 0xF4u, "bdCypherAESGCM: Cannot init AES cypher with key of size [%u], Key must be 16,24 or 32 bytes", keySize);
    return 0;
  }
  else
  {
    SymmetricKey_0 = BCryptGenerateSymmetricKey_0(bdCypherAESGCM::s_provider, &this->m_cypherKey, NULL, 0, (PUCHAR)key, keySize, 0);
    v8 = SymmetricKey_0 >= 0;
    if ( SymmetricKey_0 < 0 )
      logBCryptResult("bdCypherAESGCM", "BCryptGenerateSymmetricKey", SymmetricKey_0);
    else
      this->m_keySize = keySize;
    return v8;
  }
}

/*
==============
bdCypherAESGCM::setAAD
==============
*/
bool bdCypherAESGCM::setAAD(bdCypherAESGCM *this, const unsigned __int8 *const aad, const unsigned int aadSize)
{
  bool result; 

  if ( aad || !aadSize )
  {
    this->m_aad = aad;
    result = 1;
    this->m_aadSize = aadSize;
  }
  else
  {
    bdHandleAssert(0, "\"(aad != BD_NULL) || (aadSize == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::setAAD", 0x231u, "bdCypherAESGCM: Cannot specify NULL AAD with aadSize > 0");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraesgcm.cpp", "bdCypherAESGCM::setAAD", 0x231u, "bdCypherAESGCM: Cannot specify NULL AAD with aadSize > 0");
    return 0;
  }
  return result;
}

/*
==============
bdCypherAESGCM::setAuthenticationTag
==============
*/
char bdCypherAESGCM::setAuthenticationTag(bdCypherAESGCM *this, const bdAuthenticationTag *authTag)
{
  *(_OWORD *)this->m_authenticationTag.m_tag = *(_OWORD *)authTag->m_tag;
  this->m_authenticationTag.m_tagLength = authTag->m_tagLength;
  return 1;
}

