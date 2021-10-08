/*
==============
bdECCKey::bdECCKey
==============
*/

void __fastcall bdECCKey::bdECCKey(bdECCKey *this)
{
  ??0bdECCKey@@QEAA@XZ(this);
}

/*
==============
bdECCKey::getStatus
==============
*/

bdECCKey::bdECCKeyStatus __fastcall bdECCKey::getStatus(bdECCKey *this)
{
  return ?getStatus@bdECCKey@@QEBA?AW4bdECCKeyStatus@1@XZ(this);
}

/*
==============
bdECCKey::generateSharedSecret
==============
*/

bool __fastcall bdECCKey::generateSharedSecret(bdECCKey *this, const unsigned __int8 *const publicKey, const unsigned int publicKeyLen, unsigned __int8 *secretBuffer, const unsigned int secretBufferLen)
{
  return ?generateSharedSecret@bdECCKey@@QEAA_NQEBEIPEAEI@Z(this, publicKey, publicKeyLen, secretBuffer, secretBufferLen);
}

/*
==============
bdECCKey::init
==============
*/

bool __fastcall bdECCKey::init(bdECCKey *this)
{
  return ?init@bdECCKey@@QEAA_NXZ(this);
}

/*
==============
bdECCKey::~bdECCKey
==============
*/

void __fastcall bdECCKey::~bdECCKey(bdECCKey *this)
{
  ??1bdECCKey@@QEAA@XZ(this);
}

/*
==============
bdECCKey::exportKey
==============
*/

bool __fastcall bdECCKey::exportKey(bdECCKey *this, unsigned __int8 *const pubKey, unsigned int *keylen)
{
  return ?exportKey@bdECCKey@@QEAA_NQEAEAEAI@Z(this, pubKey, keylen);
}

/*
==============
bdECCKey::bdECCKey
==============
*/
void bdECCKey::bdECCKey(bdECCKey *this)
{
  this->m_status = BD_ECC_KEY_UNINITIALIZED;
}

/*
==============
bdECCKey::~bdECCKey
==============
*/
void bdECCKey::~bdECCKey(bdECCKey *this)
{
  if ( this->m_status == BD_ECC_KEY_INITIALIZED )
  {
    j_ecc_free(&this->m_key);
    this->m_status = BD_ECC_KEY_UNINITIALIZED;
  }
  else
  {
    this->m_status = BD_ECC_KEY_UNINITIALIZED;
  }
}

/*
==============
bdECCKey::exportKey
==============
*/
char bdECCKey::exportKey(bdECCKey *this, unsigned __int8 *const pubKey, unsigned int *keylen)
{
  int v5; 
  const char *v6; 
  unsigned int outlen; 

  if ( this->m_status == BD_ECC_KEY_INITIALIZED )
  {
    outlen = *keylen;
    v5 = j_ecc_export(pubKey, &outlen, 0, &this->m_key);
    if ( v5 )
    {
      v6 = j_error_to_string(v5);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::exportKey", 0x64u, "Unable to export public key: [%s]", v6);
      return 0;
    }
    else
    {
      if ( outlen < 0x64 )
        memset_0(&pubKey[outlen], 0, 100 - outlen);
      *keylen = 100;
      return 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::exportKey", 0x75u, "Cannot only export initialized private key");
    return 0;
  }
}

/*
==============
bdECCKey::generateSharedSecret
==============
*/
__int64 bdECCKey::generateSharedSecret(bdECCKey *this, const unsigned __int8 *const publicKey, const unsigned int publicKeyLen, unsigned __int8 *secretBuffer, const unsigned int secretBufferLen)
{
  int v7; 
  const char *v8; 
  unsigned __int8 v9; 
  int v10; 
  const char *v11; 
  unsigned int outlen; 
  __int64 v14; 
  int v15; 
  ecc_key public_key; 

  v14 = -2i64;
  v15 = 0;
  v7 = j_ecc_import(publicKey, publicKeyLen, &public_key);
  if ( v7 )
  {
    v8 = j_error_to_string(v7);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::generateSharedSecret", 0x85u, "Unable to import public key: [%s]", v8);
    v9 = 0;
  }
  else
  {
    v9 = 1;
    if ( this->m_status == BD_ECC_KEY_INITIALIZED )
    {
      outlen = secretBufferLen;
      v10 = j_ecc_shared_secret(&this->m_key, &public_key, secretBuffer, &outlen);
      if ( v10 )
      {
        v11 = j_error_to_string(v10);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::generateSharedSecret", 0x93u, "Unable to generate secret key: [%s]", v11);
        v9 = 0;
      }
      else
      {
        if ( outlen < secretBufferLen )
          memset_0(&secretBuffer[outlen], 0, secretBufferLen - outlen);
        v9 = 1;
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::generateSharedSecret", 0xA3u, "Cannot generate secret with uninitialized key");
    }
    j_ecc_free(&public_key);
  }
  if ( v15 == 1 )
    j_ecc_free(&public_key);
  return v9;
}

/*
==============
bdECCKey::getStatus
==============
*/
__int64 bdECCKey::getStatus(bdECCKey *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdECCKey::init
==============
*/
bool bdECCKey::init(bdECCKey *this)
{
  bool v2; 
  bdTrulyRandomImpl *v3; 
  bdSingletonRegistryImpl *Instance; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int key; 
  const char *v10; 
  bool result; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  prng_state prng; 
  unsigned __int8 in[128]; 

  v2 = 1;
  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::init", 0x54u, "Cannot reinitialize key");
    return 0;
  }
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v3 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v3 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v3);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v3;
    if ( v3 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
        goto LABEL_9;
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
    }
    DebugBreak();
  }
LABEL_9:
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, in, 0x80u);
  bdMutex::lock(&bdCryptoConfig::s_ltcMutex);
  v5 = j_yarrow_start(&prng);
  if ( v5 )
  {
    v12 = j_error_to_string(v5);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::init", 0x33u, "Start error: [%s]", v12);
LABEL_15:
    v2 = 0;
    goto LABEL_16;
  }
  v6 = j_yarrow_add_entropy(in, 0x80u, &prng);
  if ( v6 )
  {
    v13 = j_error_to_string(v6);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::init", 0x3Au, "Add_entropy error: [%s]", v13);
    goto LABEL_15;
  }
  v7 = j_yarrow_ready(&prng);
  if ( v7 )
  {
    v14 = j_error_to_string(v7);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::init", 0x41u, "Ready error: [%s]", v14);
    goto LABEL_15;
  }
LABEL_16:
  bdMutex::unlock(&bdCryptoConfig::s_ltcMutex);
  if ( v2 )
  {
    bdHandleAssert(bdCryptoConfig::s_prngYarrow != -1, "(s_prngYarrow != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getPRNGYarrow", 0x47u, "LTC PRNG Yarrow not registered");
    v8 = j_find_prng("yarrow");
    bdHandleAssert(bdCryptoConfig::s_prngYarrow == v8, "(s_prngYarrow == find_prng(\"yarrow\"))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getPRNGYarrow", 0x48u, "LTC PRNG registry error");
    key = j_ecc_make_key(&prng, bdCryptoConfig::s_prngYarrow, 28, &this->m_key);
    if ( key )
    {
      v10 = j_error_to_string(key);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdECCKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdecckey.cpp", "bdECCKey::init", 0x49u, "Unable to create private key: [%s]", v10);
      return 0;
    }
  }
  result = v2;
  if ( v2 )
    this->m_status = BD_ECC_KEY_INITIALIZED;
  return result;
}

