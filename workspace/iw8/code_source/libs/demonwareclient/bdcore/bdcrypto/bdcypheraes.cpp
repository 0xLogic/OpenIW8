/*
==============
bdCypherAES::encrypt
==============
*/

bool __fastcall bdCypherAES::encrypt(bdCypherAES *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  return ?encrypt@bdCypherAES@@UEAA_NPEBE0PEAEI@Z(this, iv, plainText, cypherText, size);
}

/*
==============
bdCypherAES::~bdCypherAES
==============
*/

void __fastcall bdCypherAES::~bdCypherAES(bdCypherAES *this)
{
  ??1bdCypherAES@@UEAA@XZ(this);
}

/*
==============
bdCypherAES::decrypt
==============
*/

bool __fastcall bdCypherAES::decrypt(bdCypherAES *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  return ?decrypt@bdCypherAES@@UEAA_NPEBE0PEAEI@Z(this, iv, cypherText, plainText, size);
}

/*
==============
bdCypherAES::init
==============
*/

bool __fastcall bdCypherAES::init(bdCypherAES *this, const unsigned __int8 *key, unsigned int keySize)
{
  return ?init@bdCypherAES@@UEAA_NPEBEI@Z(this, key, keySize);
}

/*
==============
bdCypherAES::bdCypherAES
==============
*/

void __fastcall bdCypherAES::bdCypherAES(bdCypherAES *this)
{
  ??0bdCypherAES@@QEAA@XZ(this);
}

/*
==============
bdCypherAES::bdCypherAES
==============
*/
void bdCypherAES::bdCypherAES(bdCypherAES *this)
{
  NTSTATUS BCryptProvider; 
  const char *v3; 

  bdCypher::bdCypher(this, 0x10u, BD_CYPHER_MODE_CBC);
  this->__vftable = (bdCypherAES_vtbl *)&bdCypherAES::`vftable';
  this->m_keySize = 0;
  this->m_cypherKey = NULL;
  if ( !bdCypherAES::s_provider )
  {
    BCryptProvider = getBCryptProvider(&bdCypherAES::s_provider, L"AES", 0);
    if ( BCryptProvider < 0 )
    {
      v3 = "getBCryptProvider";
    }
    else
    {
      BCryptProvider = BCryptSetProperty_0(bdCypherAES::s_provider, L"ChainingMode", (PUCHAR)L"ChainingModeCBC", 0x20u, 0);
      if ( BCryptProvider >= 0 )
        return;
      v3 = "BCryptSetProperty";
    }
    logBCryptResult("bdCypherAES", v3, BCryptProvider);
  }
}

/*
==============
bdCypherAES::~bdCypherAES
==============
*/
void bdCypherAES::~bdCypherAES(bdCypherAES *this)
{
  void *m_cypherKey; 
  NTSTATUS v3; 

  this->__vftable = (bdCypherAES_vtbl *)&bdCypherAES::`vftable';
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
  {
    v3 = BCryptDestroyKey_0(m_cypherKey);
    if ( v3 < 0 )
      logBCryptResult("bdCypherAES", "BCryptDestroyKey", v3);
    this->m_cypherKey = NULL;
  }
  bdCypher::~bdCypher(this);
}

/*
==============
bdCypherAES::decrypt
==============
*/
bool bdCypherAES::decrypt(bdCypherAES *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  void *m_cypherKey; 
  NTSTATUS v11; 
  ULONG pcbResult; 
  unsigned __int8 pbIV[16]; 

  _R14 = iv;
  if ( !iv )
  {
    bdHandleAssert(0, "\"(iv != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Bu, "bdCypherAES: IV cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Bu, "bdCypherAES: IV cannot be NULL");
  }
  if ( !cypherText )
  {
    bdHandleAssert(0, "\"(cypherText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Cu, "bdCypherAES: Cyphertext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Cu, "bdCypherAES: Cyphertext buffer cannot be NULL");
  }
  if ( !plainText )
  {
    bdHandleAssert(0, "\"(plainText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Du, "bdCypherAES: Plaintext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Du, "bdCypherAES: Plaintext buffer cannot be NULL");
  }
  if ( (size & 0xF) != 0 )
  {
    bdHandleAssert(0, "\"(size % BD_AES_BLOCK_SIZE == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Eu, "bdCypherAES: Data size must be a multiple of 16 bytes for AES-CBC");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x13Eu, "bdCypherAES: Data size must be a multiple of 16 bytes for AES-CBC");
  }
  if ( _R14 && cypherText && plainText && (size & 0xF) == 0 )
  {
    __asm { vmovups xmm0, xmmword ptr [r14] }
    m_cypherKey = this->m_cypherKey;
    pcbResult = 0;
    __asm { vmovups xmmword ptr [rsp+0B8h+pbIV], xmm0 }
    v11 = BCryptDecrypt_0(m_cypherKey, (PUCHAR)cypherText, size, NULL, pbIV, 0x10u, plainText, size, &pcbResult, 0);
    if ( v11 < 0 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x15Fu, "bdCypherAES: Error decrypting AES-CBC");
      logBCryptResult("bdCypherAES", "BCryptDecrypt", v11);
    }
    return v11 >= 0;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::decrypt", 0x165u, "bdCypherAES: Parameter error");
    return 0;
  }
}

/*
==============
bdCypherAES::encrypt
==============
*/
bool bdCypherAES::encrypt(bdCypherAES *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  void *m_cypherKey; 
  NTSTATUS v11; 
  ULONG pcbResult; 
  unsigned __int8 pbIV[16]; 

  _R14 = iv;
  if ( !iv )
  {
    bdHandleAssert(0, "\"(iv != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x106u, "bdCypherAES: IV cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x106u, "bdCypherAES: IV cannot be NULL");
  }
  if ( !plainText )
  {
    bdHandleAssert(0, "\"(plainText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x107u, "bdCypherAES: Plaintext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x107u, "bdCypherAES: Plaintext buffer cannot be NULL");
  }
  if ( !cypherText )
  {
    bdHandleAssert(0, "\"(cypherText != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x108u, "bdCypherAES: Cyphertext buffer cannot be NULL");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x108u, "bdCypherAES: Cyphertext buffer cannot be NULL");
  }
  if ( (size & 0xF) != 0 )
  {
    bdHandleAssert(0, "\"(size % BD_AES_BLOCK_SIZE == 0)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x109u, "bdCypherAES: Data size must be a multiple of 16 bytes for AES-CBC");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x109u, "bdCypherAES: Data size must be a multiple of 16 bytes for AES-CBC");
  }
  if ( _R14 && plainText && cypherText && (size & 0xF) == 0 )
  {
    __asm { vmovups xmm0, xmmword ptr [r14] }
    m_cypherKey = this->m_cypherKey;
    pcbResult = 0;
    __asm { vmovups xmmword ptr [rsp+0B8h+pbIV], xmm0 }
    v11 = BCryptEncrypt_0(m_cypherKey, (PUCHAR)plainText, size, NULL, pbIV, 0x10u, cypherText, size, &pcbResult, 0);
    if ( v11 < 0 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x12Au, "bdCypherAES: Error encrypting AES-CBC");
      logBCryptResult("bdCypherAES", "BCryptEncrypt", v11);
    }
    return v11 >= 0;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::encrypt", 0x130u, "bdCypherAES: Parameter error");
    return 0;
  }
}

/*
==============
bdCypherAES::init
==============
*/
bool bdCypherAES::init(bdCypherAES *this, const unsigned __int8 *key, unsigned int keySize)
{
  void *m_cypherKey; 
  NTSTATUS SymmetricKey_0; 
  bool v8; 

  if ( !key )
  {
    bdHandleAssert(0, "\"(key != BD_NULL)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::init", 0xDBu, "bdCypherAES cannot have NULL key");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::init", 0xDBu, "bdCypherAES cannot have NULL key");
  }
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
  {
    BCryptDestroyKey_0(m_cypherKey);
    this->m_cypherKey = NULL;
  }
  if ( !key || ((keySize - 16) & 0xFFFFFFE7) != 0 || keySize == 40 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypherAES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypheraes.cpp", "bdCypherAES::init", 0xFBu, "bdCypherAES: Cannot init AES cypher with key of size [%u], Key must be 16,24 or 32 bytes", keySize);
    return 0;
  }
  else
  {
    SymmetricKey_0 = BCryptGenerateSymmetricKey_0(bdCypherAES::s_provider, &this->m_cypherKey, NULL, 0, (PUCHAR)key, keySize, 0);
    v8 = SymmetricKey_0 >= 0;
    if ( SymmetricKey_0 < 0 )
      logBCryptResult("bdCypherAES", "BCryptGenerateSymmetricKey", SymmetricKey_0);
    else
      this->m_keySize = keySize;
    return v8;
  }
}

