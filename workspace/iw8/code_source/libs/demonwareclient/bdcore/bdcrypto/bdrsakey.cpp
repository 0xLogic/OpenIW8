/*
==============
bdRSAKey::bdRSAKey
==============
*/

void __fastcall bdRSAKey::bdRSAKey(bdRSAKey *this)
{
  ??0bdRSAKey@@QEAA@XZ(this);
}

/*
==============
bdRSAKey::generateSignatureSHA256
==============
*/

bool __fastcall bdRSAKey::generateSignatureSHA256(bdRSAKey *this, const void *data, const unsigned int dataSize, unsigned __int8 *signature, unsigned int *signatureSize, bdRSAKey::bdRSAPKCS padding)
{
  return ?generateSignatureSHA256@bdRSAKey@@QEAA_NPEBXKPEAEAEAKW4bdRSAPKCS@1@@Z(this, data, dataSize, signature, signatureSize, padding);
}

/*
==============
bdRSAKey::encrypt
==============
*/

bool __fastcall bdRSAKey::encrypt(bdRSAKey *this, const unsigned __int8 *plainText, const unsigned int *plainTextSize, unsigned __int8 *cypherText, unsigned int *cypherTextSize, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return ?encrypt@bdRSAKey@@QEAA_NPEBEAEBKPEAEAEAK0I@Z(this, plainText, plainTextSize, cypherText, cypherTextSize, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::getStatePRNG
==============
*/

bool __fastcall bdRSAKey::getStatePRNG(bdRSAKey *this, prng_state *prng, int *prngIndex)
{
  return ?getStatePRNG@bdRSAKey@@AEAA_NAEAUprng_state@@AEAH@Z(this, prng, prngIndex);
}

/*
==============
bdRSAKey::decrypt
==============
*/

bool __fastcall bdRSAKey::decrypt(bdRSAKey *this, const unsigned __int8 *cypherText, const unsigned int *cypherTextSize, unsigned __int8 *plainText, unsigned int *plainTextSize, const bdHashAlgorithms mgf1Algorithm, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return ?decrypt@bdRSAKey@@QEAA_NPEBEAEBKPEAEAEAKW4bdHashAlgorithms@@0I@Z(this, cypherText, cypherTextSize, plainText, plainTextSize, mgf1Algorithm, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::verifySignatureSHA256
==============
*/

bool __fastcall bdRSAKey::verifySignatureSHA256(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize, bdRSAKey::bdRSAPKCS padding)
{
  return ?verifySignatureSHA256@bdRSAKey@@QEAA_NPEBEPEBXKW4bdRSAPKCS@1@@Z(this, signature, data, dataSize, padding);
}

/*
==============
bdRSAKey::init
==============
*/

bool __fastcall bdRSAKey::init(bdRSAKey *this, bdRSAKey::bdRSAKeySize keySize)
{
  return ?init@bdRSAKey@@QEAA_NW4bdRSAKeySize@1@@Z(this, keySize);
}

/*
==============
bdRSAKey::exportKey
==============
*/

bool __fastcall bdRSAKey::exportKey(bdRSAKey *this, unsigned __int8 *key, unsigned int *keySize)
{
  return ?exportKey@bdRSAKey@@QEAA_NPEAEAEAK@Z(this, key, keySize);
}

/*
==============
bdRSAKey::verifySignature
==============
*/

bool __fastcall bdRSAKey::verifySignature(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize, const bdHashAlgorithms hashAlgorithm, const bdRSAKey::bdRSAPKCS padding)
{
  return ?verifySignature@bdRSAKey@@QEAA_NPEBEPEBXKW4bdHashAlgorithms@@W4bdRSAPKCS@1@@Z(this, signature, data, dataSize, hashAlgorithm, padding);
}

/*
==============
bdRSAKey::import
==============
*/

bool __fastcall bdRSAKey::import(bdRSAKey *this, const char *const keyBase64)
{
  return ?import@bdRSAKey@@QEAA_NQEBD@Z(this, keyBase64);
}

/*
==============
bdRSAKey::encrypt
==============
*/

bool __fastcall bdRSAKey::encrypt(bdRSAKey *this, const unsigned __int8 *plainText, const unsigned int *plainTextSize, unsigned __int8 *cypherText, unsigned int *cypherTextSize, const bdHashAlgorithms mgf1Algorithm, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return ?encrypt@bdRSAKey@@QEAA_NPEBEAEBKPEAEAEAKW4bdHashAlgorithms@@0I@Z(this, plainText, plainTextSize, cypherText, cypherTextSize, mgf1Algorithm, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::importKey
==============
*/

bool __fastcall bdRSAKey::importKey(bdRSAKey *this, const unsigned __int8 *key, const unsigned int keySize)
{
  return ?importKey@bdRSAKey@@QEAA_NPEBEK@Z(this, key, keySize);
}

/*
==============
bdRSAKey::generateSignature
==============
*/

bool __fastcall bdRSAKey::generateSignature(bdRSAKey *this, const void *data, const unsigned int dataSize, unsigned __int8 *signature, unsigned int *signatureSize, const bdHashAlgorithms hashAlgorithm, const bdRSAKey::bdRSAPKCS padding)
{
  return ?generateSignature@bdRSAKey@@QEAA_NPEBXKPEAEAEAKW4bdHashAlgorithms@@W4bdRSAPKCS@1@@Z(this, data, dataSize, signature, signatureSize, hashAlgorithm, padding);
}

/*
==============
bdRSAKey::getKeySize
==============
*/

unsigned int __fastcall bdRSAKey::getKeySize(bdRSAKey *this)
{
  return ?getKeySize@bdRSAKey@@QEAAIXZ(this);
}

/*
==============
bdRSAKey::verifySignatureTIGER192
==============
*/

bool __fastcall bdRSAKey::verifySignatureTIGER192(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize)
{
  return ?verifySignatureTIGER192@bdRSAKey@@QEAA_NPEBEPEBXK@Z(this, signature, data, dataSize);
}

/*
==============
bdRSAKey::~bdRSAKey
==============
*/

void __fastcall bdRSAKey::~bdRSAKey(bdRSAKey *this)
{
  ??1bdRSAKey@@QEAA@XZ(this);
}

/*
==============
bdRSAKey::decrypt
==============
*/

bool __fastcall bdRSAKey::decrypt(bdRSAKey *this, const unsigned __int8 *cypherText, const unsigned int *cypherTextSize, unsigned __int8 *plainText, unsigned int *plainTextSize, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return ?decrypt@bdRSAKey@@QEAA_NPEBEAEBKPEAEAEAK0I@Z(this, cypherText, cypherTextSize, plainText, plainTextSize, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::verifyHash
==============
*/

bool __fastcall bdRSAKey::verifyHash(bdRSAKey *this, const char *signature, const void *data, const unsigned int datalen)
{
  return ?verifyHash@bdRSAKey@@QEAA_NPEBDPEBXK@Z(this, signature, data, datalen);
}

/*
==============
bdRSAKey::bdRSAKey
==============
*/
void bdRSAKey::bdRSAKey(bdRSAKey *this)
{
  this->m_status = BD_RSA_KEY_UNINITIALIZED;
  this->m_keySize = 0;
  *(_QWORD *)&this->m_key.type = 0i64;
  this->m_key.e = NULL;
  this->m_key.d = NULL;
  this->m_key.N = NULL;
  this->m_key.p = NULL;
  this->m_key.q = NULL;
  this->m_key.qP = NULL;
  this->m_key.dP = NULL;
  this->m_key.dQ = NULL;
}

/*
==============
bdRSAKey::~bdRSAKey
==============
*/
void bdRSAKey::~bdRSAKey(bdRSAKey *this)
{
  if ( this->m_status == BD_RSA_KEY_INITIALIZED )
    j_rsa_free(&this->m_key);
}

/*
==============
bdRSAKey::decrypt
==============
*/
bool bdRSAKey::decrypt(bdRSAKey *this, const unsigned __int8 *cypherText, const unsigned int *cypherTextSize, unsigned __int8 *plainText, unsigned int *plainTextSize, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return bdRSAKey::decrypt(this, cypherText, cypherTextSize, plainText, plainTextSize, BD_HASH_SHA1, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::decrypt
==============
*/
bool bdRSAKey::decrypt(bdRSAKey *this, const unsigned __int8 *cypherText, const unsigned int *cypherTextSize, unsigned __int8 *plainText, unsigned int *plainTextSize, const bdHashAlgorithms mgf1Algorithm, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  bdHashAlgorithms v12; 
  bool v13; 
  bool v14; 
  int hash_idx; 
  int v16; 
  const char *v17; 
  int stat; 

  bdHandleAssert(cypherText != NULL, "(cypherText != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::decrypt", 0xEDu, "bdRSAKey: cypherText buffer cannot be NULL");
  bdHandleAssert(plainText != NULL, "(plainText != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::decrypt", 0xEEu, "bdRSAKey: plainTextbuffer cannot be NULL");
  v12 = mgf1Algorithm;
  bdHandleAssert((mgf1Algorithm & 0xFFFFFFFD) == 0, "(mgf1Algorithm == BD_HASH_SHA1 || mgf1Algorithm == BD_HASH_SHA256)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::decrypt", 0xF0u, "bdRSAKey: Invalid MGF1 Hash algorithm");
  v13 = cypherText && plainText && (v12 & 0xFFFFFFFD) == 0;
  bdHandleAssert(this->m_status == BD_RSA_KEY_INITIALIZED, "(BD_RSA_KEY_INITIALIZED == m_status)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::decrypt", 0xF5u, "bdRSAKey: Cannot decrypt without initialized key");
  v14 = v13 && this->m_status == BD_RSA_KEY_INITIALIZED;
  if ( v12 == BD_HASH_SHA1 )
  {
    hash_idx = bdCryptoConfig::getHashSHA1();
  }
  else if ( v12 )
  {
    hash_idx = -1;
  }
  else
  {
    hash_idx = bdCryptoConfig::getHashSHA256();
  }
  stat = 0;
  if ( !v14 )
    return 0;
  v16 = j_rsa_decrypt_key_ex(cypherText, *cypherTextSize, plainText, plainTextSize, oaepLabel, oaepLabelLength, hash_idx, 2, &stat, &this->m_key);
  if ( v16 )
  {
    v17 = j_error_to_string(v16);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::decrypt", 0x10Cu, "bdRSAKey: RSA decrypt Error[%s]", v17);
    return 0;
  }
  return stat == 1;
}

/*
==============
bdRSAKey::encrypt
==============
*/
bool bdRSAKey::encrypt(bdRSAKey *this, const unsigned __int8 *plainText, const unsigned int *plainTextSize, unsigned __int8 *cypherText, unsigned int *cypherTextSize, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  return bdRSAKey::encrypt(this, plainText, plainTextSize, cypherText, cypherTextSize, BD_HASH_SHA1, oaepLabel, oaepLabelLength);
}

/*
==============
bdRSAKey::encrypt
==============
*/
char bdRSAKey::encrypt(bdRSAKey *this, const unsigned __int8 *plainText, const unsigned int *plainTextSize, unsigned __int8 *cypherText, unsigned int *cypherTextSize, const bdHashAlgorithms mgf1Algorithm, const unsigned __int8 *oaepLabel, const unsigned int oaepLabelLength)
{
  bdHashAlgorithms v12; 
  bool v13; 
  char v14; 
  unsigned int v15; 
  unsigned int v16; 
  int hash_idx; 
  int v18; 
  const char *v19; 
  prng_state prng; 

  bdHandleAssert(plainText != NULL, "(plainText != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xA9u, "bdRSAKey: plainTextbuffer cannot be NULL");
  bdHandleAssert(cypherText != NULL, "(cypherText != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xAAu, "bdRSAKey: cypherText buffer cannot be NULL");
  v12 = mgf1Algorithm;
  bdHandleAssert((mgf1Algorithm & 0xFFFFFFFD) == 0, "(mgf1Algorithm == BD_HASH_SHA1 || mgf1Algorithm == BD_HASH_SHA256)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xACu, "bdRSAKey: Invalid MGF1 Hash algorithm");
  v13 = plainText && cypherText && (v12 & 0xFFFFFFFD) == 0;
  bdHandleAssert(this->m_status == BD_RSA_KEY_INITIALIZED, "(BD_RSA_KEY_INITIALIZED == m_status)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xB1u, "bdRSAKey: Cannot encrypt without initialized key");
  if ( !v13 || this->m_status != BD_RSA_KEY_INITIALIZED )
    goto LABEL_20;
  v14 = 1;
  v15 = 8 * this->m_keySize;
  if ( v15 == 1024 )
  {
    v16 = *plainTextSize;
    if ( *plainTextSize <= 0x56 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( v15 == 2048 )
  {
    v16 = *plainTextSize;
    if ( *plainTextSize <= 0xD6 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( v15 != 3072 )
  {
    if ( v15 != 4096 )
      goto LABEL_21;
    v16 = *plainTextSize;
    if ( *plainTextSize <= 0x1D6 )
      goto LABEL_21;
    goto LABEL_19;
  }
  v16 = *plainTextSize;
  if ( *plainTextSize > 0x156 )
  {
LABEL_19:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xBBu, "bdRSAKey: plainTextSize[%u] is too large for a %u-bit RSA Key", v16, 8 * this->m_keySize);
LABEL_20:
    v14 = 0;
  }
LABEL_21:
  if ( v12 == BD_HASH_SHA1 )
  {
    hash_idx = bdCryptoConfig::getHashSHA1();
  }
  else if ( v12 )
  {
    hash_idx = -1;
  }
  else
  {
    hash_idx = bdCryptoConfig::getHashSHA256();
  }
  mgf1Algorithm = -1;
  if ( !v14 || !bdRSAKey::getStatePRNG(this, &prng, (int *)&mgf1Algorithm) )
    return 0;
  v18 = j_rsa_encrypt_key_ex(plainText, *plainTextSize, cypherText, cypherTextSize, oaepLabel, oaepLabelLength, &prng, mgf1Algorithm, hash_idx, 2, &this->m_key);
  if ( v18 )
  {
    v19 = j_error_to_string(v18);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::encrypt", 0xDDu, "bdRSAKey: RSA encrypt Error[%s]", v19);
    return 0;
  }
  return 1;
}

/*
==============
bdRSAKey::exportKey
==============
*/
char bdRSAKey::exportKey(bdRSAKey *this, unsigned __int8 *key, unsigned int *keySize)
{
  int v3; 
  const char *v4; 

  if ( this->m_status == BD_RSA_KEY_INITIALIZED )
  {
    v3 = j_rsa_export(key, keySize, 0, &this->m_key);
    if ( v3 )
    {
      v4 = j_error_to_string(v3);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::exportKey", 0x8Du, "bdRSAKey: RSA export Error[%s]", v4);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::exportKey", 0x93u, "bdRSAKey: Cannot export uninitialized RSA public key.");
    return 0;
  }
}

/*
==============
bdRSAKey::generateSignature
==============
*/
__int64 bdRSAKey::generateSignature(bdRSAKey *this, const void *data, const unsigned int dataSize, unsigned __int8 *signature, unsigned int *signatureSize, const bdHashAlgorithms hashAlgorithm, const bdRSAKey::bdRSAPKCS padding)
{
  unsigned int v11; 
  bool v12; 
  char v13; 
  bool v14; 
  int hash_idx; 
  unsigned __int8 v16; 
  int v17; 
  const char *v18; 
  int prngIndex; 
  unsigned int inlen; 
  __int64 v22; 
  bdDynamicHash v23; 
  prng_state prng; 
  unsigned __int8 in[64]; 

  v22 = -2i64;
  bdHandleAssert(signature != NULL, "(signature != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x137u, "bdRSAKey: Signature buffer cannot be NULL");
  bdHandleAssert(this->m_status == BD_RSA_KEY_INITIALIZED, "(BD_RSA_KEY_INITIALIZED == m_status)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x138u, "bdRSAKey: Cannot sign without initialized key");
  if ( !signature || this->m_status != BD_RSA_KEY_INITIALIZED )
  {
    v13 = 0;
    goto LABEL_15;
  }
  v11 = 8 * this->m_keySize;
  switch ( v11 )
  {
    case 0x400u:
      v12 = *signatureSize < 0x80;
      break;
    case 0x800u:
      v12 = *signatureSize < 0x100;
      break;
    case 0xC00u:
      v12 = *signatureSize < 0x180;
      break;
    default:
      if ( v11 != 4096 || *signatureSize < 0x200 )
        goto LABEL_6;
LABEL_13:
      v13 = 1;
      goto LABEL_15;
  }
  if ( !v12 )
    goto LABEL_13;
LABEL_6:
  v13 = 0;
  bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x143u, "bdRSAKey: RSA Signature length[%d] invalid", *signatureSize);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x143u, "bdRSAKey: RSA Signature length[%d] invalid", *signatureSize);
LABEL_15:
  bdDynamicHash::bdDynamicHash(&v23, hashAlgorithm);
  bdHandleAssert(v23.m_hash != NULL, "(m_hash != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHash::getHash", 0x97u, "Hash Object is NULL");
  inlen = v23.m_hash->m_digestSize;
  v14 = 0;
  if ( v13 )
  {
    bdHandleAssert(1, "(m_hash != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHash::getHash", 0x97u, "Hash Object is NULL");
    if ( v23.m_hash->hash(v23.m_hash, (const unsigned __int8 *)data, dataSize, in, &inlen) )
      v14 = 1;
  }
  if ( hashAlgorithm )
  {
    switch ( hashAlgorithm )
    {
      case BD_HASH_SHA384:
        hash_idx = bdCryptoConfig::getHashSHA384();
        break;
      case BD_HASH_SHA512:
        hash_idx = bdCryptoConfig::getHashSHA512();
        break;
      case BD_HASH_TIGER192:
        hash_idx = bdCryptoConfig::getHashTIGER192();
        break;
      default:
        hash_idx = -1;
        break;
    }
  }
  else
  {
    hash_idx = bdCryptoConfig::getHashSHA256();
  }
  prngIndex = -1;
  if ( !v14 || !bdRSAKey::getStatePRNG(this, &prng, &prngIndex) )
    goto LABEL_32;
  v16 = 1;
  v17 = j_rsa_sign_hash_ex(in, inlen, signature, signatureSize, padding, &prng, prngIndex, hash_idx, 0, &this->m_key);
  if ( v17 )
  {
    v18 = j_error_to_string(v17);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x165u, "bdRSAKey: RSA signature generation Error[%s]", v18);
LABEL_32:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::generateSignature", 0x16Cu, "bdRSAKey: Failed to sign data");
    v16 = 0;
  }
  bdDynamicHash::~bdDynamicHash(&v23);
  return v16;
}

/*
==============
bdRSAKey::generateSignatureSHA256
==============
*/
bool bdRSAKey::generateSignatureSHA256(bdRSAKey *this, const void *data, const unsigned int dataSize, unsigned __int8 *signature, unsigned int *signatureSize, bdRSAKey::bdRSAPKCS padding)
{
  return bdRSAKey::generateSignature(this, data, dataSize, signature, signatureSize, BD_HASH_SHA256, padding);
}

/*
==============
bdRSAKey::getKeySize
==============
*/
__int64 bdRSAKey::getKeySize(bdRSAKey *this)
{
  return 8 * this->m_keySize;
}

/*
==============
bdRSAKey::getStatePRNG
==============
*/
__int64 bdRSAKey::getStatePRNG(bdRSAKey *this, prng_state *prng, int *prngIndex)
{
  bdTrulyRandomImpl *v5; 
  bdSingletonRegistryImpl *Instance; 
  int v7; 
  unsigned __int8 v8; 
  const char *v9; 
  int v10; 
  unsigned __int8 in[128]; 

  bdMutex::lock(&bdCryptoConfig::s_ltcMutex);
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v5 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v5 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v5);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v5;
    if ( !v5 )
      goto LABEL_7;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_7:
      DebugBreak();
    }
  }
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, in, 0x80u);
  v7 = j_yarrow_start(prng);
  if ( v7 || (v7 = j_yarrow_add_entropy(in, 0x80u, prng)) != 0 || (v7 = j_yarrow_ready(prng)) != 0 )
  {
    v8 = 0;
    v9 = j_error_to_string(v7);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::getStatePRNG", 0x1E2u, "bdRSAKey: getStatePRNG() error [%s]", v9);
  }
  else
  {
    v8 = 1;
  }
  bdHandleAssert(bdCryptoConfig::s_prngYarrow != -1, "(s_prngYarrow != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getPRNGYarrow", 0x47u, "LTC PRNG Yarrow not registered");
  v10 = j_find_prng("yarrow");
  bdHandleAssert(bdCryptoConfig::s_prngYarrow == v10, "(s_prngYarrow == find_prng(\"yarrow\"))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getPRNGYarrow", 0x48u, "LTC PRNG registry error");
  *prngIndex = bdCryptoConfig::s_prngYarrow;
  bdMutex::unlock(&bdCryptoConfig::s_ltcMutex);
  return v8;
}

/*
==============
bdRSAKey::import
==============
*/
char bdRSAKey::import(bdRSAKey *this, const char *const keyBase64)
{
  unsigned int v4; 
  void *v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  const char *v10; 
  char dest[2352]; 

  memset_0(dest, 0, 0x92Cui64);
  v4 = 3133;
  v5 = memchr_0(keyBase64, 0, 0xC3Dui64);
  if ( v5 )
    v4 = (_DWORD)v5 - (_DWORD)keyBase64;
  v6 = bdBase64::decode(keyBase64, v4, dest, 0x92Cu);
  v7 = j_rsa_import((const unsigned __int8 *)dest, v6, &this->m_key);
  if ( v7 )
  {
    v10 = j_error_to_string(v7);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::import", 0x5Fu, "bdRSAKey: RSA Import Error[%s]", v10);
    return 0;
  }
  else
  {
    v8 = ltc_mp.count_bits(this->m_key.N);
    this->m_status = BD_RSA_KEY_INITIALIZED;
    this->m_keySize = v8 / 8;
    return 1;
  }
}

/*
==============
bdRSAKey::importKey
==============
*/
char bdRSAKey::importKey(bdRSAKey *this, const unsigned __int8 *key, const unsigned int keySize)
{
  int v4; 
  int v5; 
  const char *v7; 

  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::importKey", 0x7Cu, "bdRSAKey: Importing into already initialized public key.");
    return 0;
  }
  else
  {
    v4 = j_rsa_import(key, keySize, &this->m_key);
    if ( v4 )
    {
      v7 = j_error_to_string(v4);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::importKey", 0x77u, "bdRSAKey: RSA import Error[%s]", v7);
      return 0;
    }
    else
    {
      v5 = ltc_mp.count_bits(this->m_key.N);
      this->m_status = BD_RSA_KEY_INITIALIZED;
      this->m_keySize = v5 / 8;
      return 1;
    }
  }
}

/*
==============
bdRSAKey::init
==============
*/
bool bdRSAKey::init(bdRSAKey *this, bdRSAKey::bdRSAKeySize keySize)
{
  bool result; 
  int key; 
  const char *v6; 
  prng_state prng; 
  int prngIndex; 

  if ( this->m_status == BD_RSA_KEY_INITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::init", 0x2Cu, "bdRSAKey: Cannot reinitialize RSA key.");
LABEL_3:
    bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::init", 0x32u, "bdRSAKey: KeySize must be 1024, 2048, 3072 or 4096 bits");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::init", 0x32u, "bdRSAKey: KeySize must be 1024, 2048, 3072 or 4096 bits");
    return 0;
  }
  if ( ((keySize - 1024) & 0xFFFFF3FF) != 0 )
    goto LABEL_3;
  prngIndex = -1;
  if ( !bdRSAKey::getStatePRNG(this, &prng, &prngIndex) )
    return 0;
  key = j_rsa_make_key(&prng, prngIndex, keySize / 8, 65537, &this->m_key);
  if ( key )
  {
    v6 = j_error_to_string(key);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::init", 0x3Du, "bdRSAKey: Unable to create RSA private key %s.", v6);
    return 0;
  }
  this->m_keySize = keySize / 8;
  result = 1;
  this->m_status = BD_RSA_KEY_INITIALIZED;
  return result;
}

/*
==============
bdRSAKey::verifyHash
==============
*/
bool bdRSAKey::verifyHash(bdRSAKey *this, const char *signature, const void *data, const unsigned int datalen)
{
  return bdRSAKey::verifySignature(this, (const unsigned __int8 *)signature, data, datalen, BD_HASH_TIGER192, BD_RSA_PKCS_1_PSS);
}

/*
==============
bdRSAKey::verifySignature
==============
*/
_BOOL8 bdRSAKey::verifySignature(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize, const bdHashAlgorithms hashAlgorithm, const bdRSAKey::bdRSAPKCS padding)
{
  bool v10; 
  unsigned int m_keySize; 
  bool v12; 
  bool v13; 
  int HashSHA384; 
  int v15; 
  const char *v16; 
  unsigned int hashlen; 
  int stat; 
  __int64 v20; 
  bdDynamicHash v21; 
  unsigned __int8 hash[64]; 

  v20 = -2i64;
  bdHandleAssert(signature != NULL, "(signature != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::verifySignature", 0x182u, "bdRSAKey: signature cannot be NULL");
  bdHandleAssert(this->m_status == BD_RSA_KEY_INITIALIZED, "(BD_RSA_KEY_INITIALIZED == m_status)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::verifySignature", 0x183u, "bdRSAKey: Cannot verify without initialized key");
  v10 = signature && this->m_status == BD_RSA_KEY_INITIALIZED;
  m_keySize = this->m_keySize;
  v12 = v10 && ((m_keySize - 128) & 0xFFFFFE7F) == 0;
  bdDynamicHash::bdDynamicHash(&v21, hashAlgorithm);
  bdHandleAssert(v21.m_hash != NULL, "(m_hash != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHash::getHash", 0x97u, "Hash Object is NULL");
  hashlen = v21.m_hash->m_digestSize;
  v13 = 0;
  if ( v12 )
  {
    bdHandleAssert(1, "(m_hash != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHash::getHash", 0x97u, "Hash Object is NULL");
    if ( v21.m_hash->hash(v21.m_hash, (const unsigned __int8 *)data, dataSize, hash, &hashlen) )
      v13 = 1;
  }
  if ( hashAlgorithm )
  {
    switch ( hashAlgorithm )
    {
      case BD_HASH_SHA384:
        HashSHA384 = bdCryptoConfig::getHashSHA384();
        break;
      case BD_HASH_SHA512:
        HashSHA384 = bdCryptoConfig::getHashSHA512();
        break;
      case BD_HASH_TIGER192:
        HashSHA384 = bdCryptoConfig::getHashTIGER192();
        break;
      default:
        HashSHA384 = -1;
        break;
    }
  }
  else
  {
    HashSHA384 = bdCryptoConfig::getHashSHA256();
  }
  if ( v13 )
  {
    stat = 0;
    v15 = j_rsa_verify_hash_ex(signature, m_keySize, hash, hashlen, padding, HashSHA384, 0, &stat, &this->m_key);
    if ( v15 )
    {
      v16 = j_error_to_string(v15);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdRSAKey", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdrsakey.cpp", "bdRSAKey::verifySignature", 0x1A8u, "bdRSAKey: RSA signature verification Error[%s]", v16);
    }
    else if ( stat == 1 )
    {
      v13 = 1;
      goto LABEL_26;
    }
    v13 = 0;
  }
LABEL_26:
  bdDynamicHash::~bdDynamicHash(&v21);
  return v13;
}

/*
==============
bdRSAKey::verifySignatureSHA256
==============
*/
bool bdRSAKey::verifySignatureSHA256(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize, bdRSAKey::bdRSAPKCS padding)
{
  return bdRSAKey::verifySignature(this, signature, data, dataSize, BD_HASH_SHA256, padding);
}

/*
==============
bdRSAKey::verifySignatureTIGER192
==============
*/
bool bdRSAKey::verifySignatureTIGER192(bdRSAKey *this, const unsigned __int8 *signature, const void *data, const unsigned int dataSize)
{
  return bdRSAKey::verifySignature(this, signature, data, dataSize, BD_HASH_TIGER192, BD_RSA_PKCS_1_PSS);
}

