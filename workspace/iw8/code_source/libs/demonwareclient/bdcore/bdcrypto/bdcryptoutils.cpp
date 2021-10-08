/*
==============
bdCryptoUtils::zeroBuffer
==============
*/

void __fastcall bdCryptoUtils::zeroBuffer(void *const buffer, const unsigned __int64 size)
{
  ?zeroBuffer@bdCryptoUtils@@SAXQEAX_K@Z(buffer, size);
}

/*
==============
bdCryptoUtils::calculateInitialVector
==============
*/

void __fastcall bdCryptoUtils::calculateInitialVector(const unsigned int seed, unsigned __int8 *iv)
{
  ?calculateInitialVector@bdCryptoUtils@@SAXIPEAE@Z(seed, iv);
}

/*
==============
bdCryptoUtils::decrypt
==============
*/

bool __fastcall bdCryptoUtils::decrypt(const void *key, const void *initialVector, const void *source, void *dest, const unsigned int size)
{
  return ?decrypt@bdCryptoUtils@@SA_NPEBX00PEAXI@Z(key, initialVector, source, dest, size);
}

/*
==============
bdCryptoUtils::encrypt
==============
*/

bool __fastcall bdCryptoUtils::encrypt(const void *key, const void *initialVector, const void *source, void *dest, const unsigned int size)
{
  return ?encrypt@bdCryptoUtils@@SA_NPEBX00PEAXI@Z(key, initialVector, source, dest, size);
}

/*
==============
bdCryptoUtils::hkdfExpand
==============
*/

bool __fastcall bdCryptoUtils::hkdfExpand(const void *inPRK, const unsigned int inPRKSize, const void *inInfo, const unsigned int inInfoSize, void *outBuffer, const unsigned int outBufferSize, const bdHashAlgorithms hmacAlg)
{
  return ?hkdfExpand@bdCryptoUtils@@SA_NPEBXI0IPEAXIW4bdHashAlgorithms@@@Z(inPRK, inPRKSize, inInfo, inInfoSize, outBuffer, outBufferSize, hmacAlg);
}

/*
==============
bdCryptoUtils::aesKeyUnwrap
==============
*/

bool __fastcall bdCryptoUtils::aesKeyUnwrap(const unsigned __int8 *const inKEK, const unsigned int inKEKSize, const unsigned __int8 *const inWrappedKey, const unsigned int inWrappedKeySize, void *outKey, unsigned int *outKeySize)
{
  return ?aesKeyUnwrap@bdCryptoUtils@@SA_NQEBEI0IPEAXAEAK@Z(inKEK, inKEKSize, inWrappedKey, inWrappedKeySize, outKey, outKeySize);
}

/*
==============
bdCryptoUtils::constTimeCompare
==============
*/

bool __fastcall bdCryptoUtils::constTimeCompare(const volatile unsigned __int8 *volatile buffer1, const volatile unsigned __int8 *volatile buffer2, const unsigned __int64 size)
{
  return ?constTimeCompare@bdCryptoUtils@@SA_NREDE0_K@Z(buffer1, buffer2, size);
}

/*
==============
bdCryptoUtils::aesKeyWrap
==============
*/

bool __fastcall bdCryptoUtils::aesKeyWrap(const unsigned __int8 *const inKEK, const unsigned int inKEKSize, const unsigned __int8 *const inKey, const unsigned int inKeySize, void *outWrappedKey, unsigned int *outWrappedKeySize)
{
  return ?aesKeyWrap@bdCryptoUtils@@SA_NQEBEI0IPEAXAEAK@Z(inKEK, inKEKSize, inKey, inKeySize, outWrappedKey, outWrappedKeySize);
}

/*
==============
bdCryptoUtils::encryptAES
==============
*/

bool __fastcall bdCryptoUtils::encryptAES(const void *key, const void *initialVector, const void *source, void *dest, unsigned int size, unsigned int keySize)
{
  return ?encryptAES@bdCryptoUtils@@SA_NPEBX00PEAXII@Z(key, initialVector, source, dest, size, keySize);
}

/*
==============
bdCryptoUtils::decryptAES
==============
*/

bool __fastcall bdCryptoUtils::decryptAES(const void *key, const void *initialVector, const void *source, void *dest, unsigned int size, unsigned int keySize)
{
  return ?decryptAES@bdCryptoUtils@@SA_NPEBX00PEAXII@Z(key, initialVector, source, dest, size, keySize);
}

/*
==============
bdCryptoUtils::hkdfExtractSHA1
==============
*/

bool __fastcall bdCryptoUtils::hkdfExtractSHA1(const unsigned __int8 (*inSalt)[20], const unsigned __int8 *inIKM, const unsigned int inIKMSize, unsigned __int8 (*outPRK)[20])
{
  return ?hkdfExtractSHA1@bdCryptoUtils@@SA_NAEAY0BE@$$CBEPEBEIAEAY0BE@E@Z(inSalt, inIKM, inIKMSize, outPRK);
}

/*
==============
bdCryptoUtils::getNewEncryptionKey
==============
*/

void __fastcall bdCryptoUtils::getNewEncryptionKey(unsigned __int8 *aesKey)
{
  ?getNewEncryptionKey@bdCryptoUtils@@SAXPEAE@Z(aesKey);
}

/*
==============
bdCryptoUtils::getNewIVSeed
==============
*/

unsigned int __fastcall bdCryptoUtils::getNewIVSeed()
{
  return ?getNewIVSeed@bdCryptoUtils@@SAIXZ();
}

/*
==============
bdCryptoUtils::hkdfExtractSHA256
==============
*/

bool __fastcall bdCryptoUtils::hkdfExtractSHA256(const unsigned __int8 (*inSalt)[32], const unsigned __int8 *inIKM, const unsigned int inIKMSize, unsigned __int8 (*outPRK)[32])
{
  return ?hkdfExtractSHA256@bdCryptoUtils@@SA_NAEAY0CA@$$CBEPEBEIAEAY0CA@E@Z(inSalt, inIKM, inIKMSize, outPRK);
}

/*
==============
bdCryptoUtils::aesKeyUnwrap
==============
*/
_BOOL8 bdCryptoUtils::aesKeyUnwrap(const unsigned __int8 *const inKEK, const unsigned int inKEKSize, const unsigned __int8 *const inWrappedKey, const unsigned int inWrappedKeySize, void *outKey, unsigned int *outKeySize)
{
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  unsigned int v14; 
  bool v15; 
  char v16; 
  bool appended; 
  int i; 
  int j; 
  bool v20; 
  bool v21; 
  char *v23; 
  char *v24; 
  unsigned int newOffset; 
  unsigned int v26; 
  unsigned __int64 src; 
  void *v28; 
  __int64 v29; 
  bdCypherAES v30; 
  __int64 v31; 
  __int64 dest; 
  __int64 plainText; 
  char v34[8]; 
  unsigned __int8 cypherText[16]; 
  unsigned __int8 iv[8]; 
  __int64 v37; 
  char v38[32]; 

  v29 = -2i64;
  v28 = outKey;
  bdHandleAssert(inKEK != NULL, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x194u, "inKEK cannot be NULL");
  v10 = inKEK && inWrappedKey;
  bdHandleAssert(v10, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x196u, "inWrappedKey cannot be NULL");
  v11 = v10 && outKey;
  bdHandleAssert(outKey != NULL, "outKey != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x198u, "outKey buffer cannot be NULL");
  v12 = v11 && ((inKEKSize - 16) & 0xFFFFFFE7) == 0 && inKEKSize != 40;
  bdHandleAssert(v12, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x19Bu, "Invalid AES key Length [%u] (inKEK must be 16, 24 or 32 bytes)", inKEKSize);
  v13 = v12 && ((inWrappedKeySize - 24) & 0xFFFFFFE7) == 0 && inWrappedKeySize != 48;
  LODWORD(v23) = inWrappedKeySize;
  bdHandleAssert(v13, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x19Fu, "Invalid Wraped Key Length [%u] (inWrappedKey must be 24, 32 or 40 bytes)", v23);
  v14 = inWrappedKeySize - 8;
  v15 = v13 && *outKeySize >= v14;
  LODWORD(v24) = inWrappedKeySize - 8;
  bdHandleAssert(v15, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x1A1u, "Output buffer must be at least [%u] bytes", v24);
  if ( !v15 )
    goto LABEL_53;
  v16 = 0;
  newOffset = 0;
  appended = bdBytePacker::appendBuffer(&dest, 8u, 0, &newOffset, inWrappedKey, 8u);
  v26 = 0;
  if ( appended && bdBytePacker::appendBuffer(v38, 0x20u, 0, &v26, inWrappedKey + 8, v14) )
    v16 = 1;
  bdCypherAES::bdCypherAES(&v30);
  v15 = v16 && bdCypherAES::init(&v30, inKEK, inKEKSize);
  *(_QWORD *)iv = 0i64;
  v37 = 0i64;
  for ( i = 5; v15; --i )
  {
    if ( i < 0 )
      break;
    for ( j = v14 >> 3; j >= 1; --j )
    {
      src = _byteswap_uint64(j + (v14 >> 3) * i);
      v20 = bdBytePacker::appendBuffer(&v31, 8u, 0, &newOffset, &src, 8u);
      plainText = v31 ^ dest;
      v21 = v20 && bdBytePacker::appendBuffer(cypherText, 0x10u, 0, &newOffset, &plainText, 8u) && bdBytePacker::appendBuffer(cypherText, 0x10u, newOffset, &newOffset, &v38[8 * j - 8], 8u) && bdCypherAES::decrypt(&v30, iv, cypherText, (unsigned __int8 *)&plainText, 0x10u) && bdBytePacker::appendBuffer(&dest, 8u, 0, &newOffset, &plainText, 8u);
      v26 = 8 * j - 8;
      if ( !v21 || !bdBytePacker::appendBuffer(v38, 0x20u, 8 * j - 8, &newOffset, v34, 8u) )
      {
        v15 = 0;
        break;
      }
      v15 = 1;
    }
  }
  v31 = 0xA6A6A6A6A6A6A6A6ui64;
  if ( v15 && dest == v31 )
  {
    if ( bdBytePacker::appendBuffer(v28, *outKeySize, 0, &newOffset, v38, v14) )
    {
      v15 = 1;
      *outKeySize = newOffset;
    }
    else
    {
      v15 = 0;
    }
  }
  bdCypherAES::~bdCypherAES(&v30);
  if ( !v15 )
LABEL_53:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyUnwrap", 0x1ECu, "Error performing AES Key Unwrap");
  return v15;
}

/*
==============
bdCryptoUtils::aesKeyWrap
==============
*/
_BOOL8 bdCryptoUtils::aesKeyWrap(const unsigned __int8 *const inKEK, const unsigned int inKEKSize, const unsigned __int8 *const inKey, const unsigned int inKeySize, void *outWrappedKey, unsigned int *outWrappedKeySize)
{
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool appended; 
  bool v16; 
  unsigned int v17; 
  unsigned int i; 
  unsigned int j; 
  bool v20; 
  bool v21; 
  unsigned int v22; 
  unsigned int v24; 
  char *v25; 
  char *v26; 
  unsigned int newOffset; 
  unsigned int offset; 
  __int64 v29[2]; 
  bdCypherAES v30; 
  int src; 
  int v32; 
  int v33[2]; 
  int cypherText[2]; 
  char v35[8]; 
  unsigned __int8 plainText[16]; 
  unsigned __int8 iv[8]; 
  __int64 v38; 
  char dest[32]; 

  v29[1] = -2i64;
  bdHandleAssert(inKEK != NULL, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x138u, "inKEK cannot be NULL");
  v10 = inKEK && inKey;
  bdHandleAssert(v10, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x13Au, "inKey cannot be NULL");
  v11 = v10 && outWrappedKey;
  bdHandleAssert(v11, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x13Cu, "outWrappedKey buffer cannot be NULL");
  v12 = v11 && ((inKEKSize - 16) & 0xFFFFFFE7) == 0 && inKEKSize != 40;
  v24 = inKEKSize;
  bdHandleAssert(v12, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x13Fu, "Invalid AES key Length [%u] (inKEK must be 16, 24 or 32 bytes)", v24);
  v13 = v12 && ((inKeySize - 16) & 0xFFFFFFE7) == 0 && inKeySize != 40;
  LODWORD(v25) = inKeySize;
  bdHandleAssert(v13, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x141u, "Invalid AES key Length [%u] (inKey must be 16, 24 or 32 bytes)", v25);
  v14 = v13 && *outWrappedKeySize >= inKeySize + 8;
  LODWORD(v26) = inKeySize + 8;
  bdHandleAssert(v14, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x143u, "Output buffer must be at least [%u] bytes", v26);
  if ( !v14 )
    goto LABEL_52;
  newOffset = 0;
  src = -1499027802;
  v32 = -1499027802;
  appended = bdBytePacker::appendBuffer(dest, 0x20u, 0, &newOffset, inKey, inKeySize);
  bdCypherAES::bdCypherAES(&v30);
  *(_QWORD *)iv = 0i64;
  v38 = 0i64;
  v16 = appended && bdCypherAES::init(&v30, inKEK, inKEKSize);
  v17 = inKeySize >> 3;
  for ( i = 0; i < 6; ++i )
  {
    offset = 0;
    for ( j = 0; j < v17; ++j )
    {
      v20 = v16 && bdBytePacker::appendBuffer(plainText, 0x10u, 0, &newOffset, &src, 8u) && bdBytePacker::appendBuffer(plainText, 0x10u, newOffset, &newOffset, &dest[8 * j], 8u) && bdCypherAES::encrypt(&v30, iv, plainText, (unsigned __int8 *)cypherText, 0x10u);
      v29[0] = _byteswap_uint64(v17 * i + j + 1);
      v21 = v20 && bdBytePacker::appendBuffer(v33, 8u, 0, &newOffset, v29, 8u);
      src = v33[0] ^ cypherText[0];
      v32 = v33[1] ^ cypherText[1];
      v16 = v21 && bdBytePacker::appendBuffer(dest, 0x20u, offset, &offset, v35, 8u);
    }
  }
  v22 = *outWrappedKeySize;
  if ( v16 && bdBytePacker::appendBuffer(outWrappedKey, v22, 0, &newOffset, &src, 8u) && bdBytePacker::appendBuffer(outWrappedKey, v22, newOffset, &newOffset, dest, inKeySize) )
  {
    v14 = 1;
    *outWrappedKeySize = newOffset;
  }
  else
  {
    v14 = 0;
  }
  bdCypherAES::~bdCypherAES(&v30);
  if ( !v14 )
LABEL_52:
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::aesKeyWrap", 0x185u, "Error performing AES Key Wrap");
  return v14;
}

/*
==============
bdCryptoUtils::calculateInitialVector
==============
*/
void bdCryptoUtils::calculateInitialVector(const unsigned int seed, unsigned __int8 *iv)
{
  bool v4; 
  bdHashTiger192 v5; 
  unsigned int resultSize; 
  unsigned int data; 

  bdHashTiger192::bdHashTiger192(&v5);
  resultSize = 24;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  data = seed;
  bdHandleAssert(1, "success", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::calculateInitialVector", 0x2Cu, "Failed to serialize ivseed.");
  v4 = bdHashTiger192::hash(&v5, (const unsigned __int8 *)&data, 4u, iv, &resultSize);
  bdHandleAssert(v4, "success", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::calculateInitialVector", 0x2Eu, "Hash function failed.");
  bdHashTiger192::~bdHashTiger192(&v5);
}

/*
==============
bdCryptoUtils::constTimeCompare
==============
*/
bool bdCryptoUtils::constTimeCompare(const volatile unsigned __int8 *volatile buffer1, const volatile unsigned __int8 *volatile buffer2, const unsigned __int64 size)
{
  char v3; 
  unsigned __int64 i; 
  volatile unsigned __int8 v5; 
  volatile unsigned __int8 v6; 

  v3 = 0;
  for ( i = 0i64; i < size; v3 |= v6 ^ v5 )
  {
    v5 = buffer1[i];
    v6 = buffer2[i++];
  }
  return v3 == 0;
}

/*
==============
bdCryptoUtils::decrypt
==============
*/
bool bdCryptoUtils::decrypt(const void *key, const void *initialVector, const void *source, void *dest, const unsigned int size)
{
  bool v9; 
  bdCypher3Des v11; 

  bdHandleAssert((size & 7) == 0, "BD_IS_MULTIPLE_OF_M(size, BD_3DES_BLOCK_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::decrypt", 0x54u, "Source data length must be a multiple of 8 for 3DES");
  if ( (size & 7) != 0 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::decrypt", 0x63u, "Source data length must be a multiple of 8 for 3DES");
    return 0;
  }
  else
  {
    bdCypher3Des::bdCypher3Des(&v11);
    bdCypher3Des::init(&v11, (const unsigned __int8 *)key, 0x18u);
    v9 = bdCypher3Des::decrypt(&v11, (const unsigned __int8 *)initialVector, (const unsigned __int8 *)source, (unsigned __int8 *)dest, size);
    bdCypher3Des::~bdCypher3Des(&v11);
    return v9;
  }
}

/*
==============
bdCryptoUtils::decryptAES
==============
*/
bool bdCryptoUtils::decryptAES(const void *key, const void *initialVector, const void *source, void *dest, unsigned int size, unsigned int keySize)
{
  bool v10; 
  bool v11; 
  bdCypherAES v14; 

  bdHandleAssert((size & 0xF) == 0, "BD_IS_MULTIPLE_OF_M(size, BD_AES_BLOCK_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::decryptAES", 0x8Du, "Source data length must be a multiple of 16 for AES");
  if ( (size & 0xF) != 0 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::decryptAES", 0x9Cu, "Source data length must be a multiple of 16 for AES");
    return 0;
  }
  else
  {
    bdCypherAES::bdCypherAES(&v14);
    v10 = ((keySize - 16) & 0xFFFFFFE7) == 0 && keySize != 40;
    bdHandleAssert(v10, "(keySize == BD_AES128_KEY_SIZE || keySize == BD_AES192_KEY_SIZE || keySize == BD_AES256_KEY_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::decryptAES", 0x93u, "Cannot decryptAES with key of size[%u] (Key must be 16, 24 or 32 bytes)", keySize);
    bdCypherAES::init(&v14, (const unsigned __int8 *)key, keySize);
    v11 = bdCypherAES::decrypt(&v14, (const unsigned __int8 *)initialVector, (const unsigned __int8 *)source, (unsigned __int8 *)dest, size);
    bdCypherAES::~bdCypherAES(&v14);
    return v11;
  }
}

/*
==============
bdCryptoUtils::encrypt
==============
*/
bool bdCryptoUtils::encrypt(const void *key, const void *initialVector, const void *source, void *dest, const unsigned int size)
{
  bool v9; 
  bdCypher3Des v11; 

  bdHandleAssert((size & 7) == 0, "BD_IS_MULTIPLE_OF_M(size, BD_3DES_BLOCK_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::encrypt", 0x38u, "Source data length must be a multiple of 8 for 3DES");
  if ( (size & 7) != 0 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::encrypt", 0x47u, "Source data length must be a multiple of 8 for 3DES");
    return 0;
  }
  else
  {
    bdCypher3Des::bdCypher3Des(&v11);
    bdCypher3Des::init(&v11, (const unsigned __int8 *)key, 0x18u);
    v9 = bdCypher3Des::encrypt(&v11, (const unsigned __int8 *)initialVector, (const unsigned __int8 *)source, (unsigned __int8 *)dest, size);
    bdCypher3Des::~bdCypher3Des(&v11);
    return v9;
  }
}

/*
==============
bdCryptoUtils::encryptAES
==============
*/
bool bdCryptoUtils::encryptAES(const void *key, const void *initialVector, const void *source, void *dest, unsigned int size, unsigned int keySize)
{
  bool v10; 
  bool v11; 
  bdCypherAES v14; 

  bdHandleAssert((size & 0xF) == 0, "BD_IS_MULTIPLE_OF_M(size, BD_AES_BLOCK_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::encryptAES", 0x71u, "Source data length must be a multiple of 16 for AES");
  if ( (size & 0xF) != 0 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCryptoUtils", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::encryptAES", 0x80u, "Source data length must be a multiple of 16 for AES");
    return 0;
  }
  else
  {
    bdCypherAES::bdCypherAES(&v14);
    v10 = ((keySize - 16) & 0xFFFFFFE7) == 0 && keySize != 40;
    bdHandleAssert(v10, "(keySize == BD_AES128_KEY_SIZE || keySize == BD_AES192_KEY_SIZE || keySize == BD_AES256_KEY_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::encryptAES", 0x77u, "Cannot encryptAES with key of size[%u] (Key must be 16, 24 or 32 bytes)", keySize);
    bdCypherAES::init(&v14, (const unsigned __int8 *)key, keySize);
    v11 = bdCypherAES::encrypt(&v14, (const unsigned __int8 *)initialVector, (const unsigned __int8 *)source, (unsigned __int8 *)dest, size);
    bdCypherAES::~bdCypherAES(&v14);
    return v11;
  }
}

/*
==============
bdCryptoUtils::getNewEncryptionKey
==============
*/
void bdCryptoUtils::getNewEncryptionKey(unsigned __int8 *aesKey)
{
  bdTrulyRandomImpl *Instance; 

  *(_QWORD *)aesKey = 0i64;
  *((_QWORD *)aesKey + 1) = 0i64;
  *((_QWORD *)aesKey + 2) = 0i64;
  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, aesKey, 0x18u);
}

/*
==============
bdCryptoUtils::getNewIVSeed
==============
*/
unsigned int bdCryptoUtils::getNewIVSeed()
{
  bdTrulyRandomImpl *Instance; 

  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  return bdTrulyRandomImpl::getRandomUInt(Instance);
}

/*
==============
bdCryptoUtils::hkdfExpand
==============
*/
__int64 bdCryptoUtils::hkdfExpand(const void *inPRK, const unsigned int inPRKSize, const void *inInfo, const unsigned int inInfoSize, void *outBuffer, const unsigned int outBufferSize, const bdHashAlgorithms hmacAlg)
{
  bool v9; 
  unsigned int v10; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  char v15; 
  bool v16; 
  unsigned int v17; 
  unsigned __int8 v18; 
  char v19; 
  __int64 v20; 
  unsigned int v21; 
  char v22; 
  bool v23; 
  unsigned int v24; 
  unsigned int newOffset; 
  unsigned int v27; 
  unsigned int offset; 
  unsigned int writeSize; 
  void *src; 
  unsigned __int8 *key; 
  void *v32; 
  bdDynamicHMAC v33; 
  __int64 v34; 
  char v35[64]; 
  char dest[400]; 

  v34 = -2i64;
  writeSize = inInfoSize;
  src = (void *)inInfo;
  key = (unsigned __int8 *)inPRK;
  v32 = outBuffer;
  bdHandleAssert((hmacAlg & 0xFFFFFFFD) == 0, "(hmacAlg == BD_HASH_SHA1 || hmacAlg == BD_HASH_SHA256)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0xE3u, "Invalid hash function for HKDF");
  offset = 0;
  bdHandleAssert(inPRKSize > 8, "inPRKSize > 8", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0xE7u, "Input PRK too small");
  v9 = (hmacAlg & 0xFFFFFFFD) == 0 && inPRKSize > 8;
  v10 = 32;
  if ( hmacAlg == BD_HASH_SHA1 )
    v10 = 20;
  bdHandleAssert(outBufferSize < 255 * v10, "outBufferSize < hmacResultSize * 255", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0xEBu, "Asked to produce too many bytes from key expansion.");
  v11 = v9 && outBufferSize < 255 * v10;
  v12 = inInfoSize + v10 + 1;
  bdHandleAssert(v12 < 0x190, "inInfoSize + hmacResultSize + 1 < hmacInputMaxSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0xF6u, "inInfoSize too big");
  if ( v11 && v12 < 0x190 )
  {
    newOffset = 0;
    if ( bdBytePacker::appendBuffer(dest, 0x190u, 0, &newOffset, src, inInfoSize) )
    {
      v13 = newOffset;
      v14 = newOffset + 1;
      newOffset = v14;
      bdHandleAssert(v14 <= 0x190, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
      if ( v14 <= 0x190 )
      {
        dest[v13] = 1;
        v15 = 1;
        goto LABEL_18;
      }
    }
  }
  else
  {
    newOffset = 0;
  }
  v15 = 0;
LABEL_18:
  v27 = v10;
  bdDynamicHMAC::bdDynamicHMAC(&v33, hmacAlg, key, inPRKSize);
  v16 = 0;
  if ( v15 )
  {
    bdHandleAssert(v33.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
    if ( v33.m_hmac->process(v33.m_hmac, (const unsigned __int8 *const)dest, newOffset) )
    {
      bdHandleAssert(v33.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
      if ( v33.m_hmac->getData(v33.m_hmac, (unsigned __int8 *)v35, &v27) )
        v16 = 1;
    }
  }
  bdHandleAssert(v27 == v10, "tmp == hmacResultSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0x109u, "HMAC output length unexpected?");
  if ( !v16 || v27 != v10 )
    goto LABEL_29;
  v17 = v10;
  if ( v10 >= outBufferSize - offset )
    v17 = outBufferSize - offset;
  if ( bdBytePacker::appendBuffer(v32, outBufferSize, offset, &offset, v35, v17) )
    v18 = 1;
  else
LABEL_29:
    v18 = 0;
  bdDynamicHMAC::~bdDynamicHMAC(&v33);
  if ( v18 )
  {
    v19 = 1;
    do
    {
      if ( offset >= outBufferSize )
        break;
      ++v19;
      newOffset = 0;
      if ( bdBytePacker::appendBuffer(dest, 0x190u, 0, &newOffset, v35, v10) && bdBytePacker::appendBuffer(dest, 0x190u, newOffset, &newOffset, src, writeSize) && (v20 = newOffset, v21 = newOffset + 1, newOffset = v21, bdHandleAssert(v21 <= 0x190, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64), v21 <= 0x190) )
      {
        dest[v20] = v19;
        v22 = 1;
      }
      else
      {
        v22 = 0;
      }
      v27 = v10;
      bdDynamicHMAC::bdDynamicHMAC(&v33, hmacAlg, key, inPRKSize);
      v23 = 0;
      if ( v22 )
      {
        bdHandleAssert(v33.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
        if ( v33.m_hmac->process(v33.m_hmac, (const unsigned __int8 *const)dest, newOffset) )
        {
          bdHandleAssert(v33.m_hmac != NULL, "(m_hmac != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.h", "bdDynamicHMAC::getHMAC", 0xB9u, "HMac Object is NULL");
          if ( v33.m_hmac->getData(v33.m_hmac, (unsigned __int8 *)v35, &v27) )
            v23 = 1;
        }
      }
      bdHandleAssert(v27 == v10, "tmp == hmacResultSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExpand", 0x124u, "HMAC output length unexpected?");
      if ( !v23 || v27 != v10 )
        goto LABEL_50;
      v24 = v10;
      if ( v10 >= outBufferSize - offset )
        v24 = outBufferSize - offset;
      if ( bdBytePacker::appendBuffer(v32, outBufferSize, offset, &offset, v35, v24) )
        v18 = 1;
      else
LABEL_50:
        v18 = 0;
      bdDynamicHMAC::~bdDynamicHMAC(&v33);
    }
    while ( v18 );
  }
  return v18;
}

/*
==============
bdCryptoUtils::hkdfExtractSHA1
==============
*/
_BOOL8 bdCryptoUtils::hkdfExtractSHA1(const unsigned __int8 (*inSalt)[20], const unsigned __int8 *inIKM, const unsigned int inIKMSize, unsigned __int8 (*outPRK)[20])
{
  bool v7; 
  unsigned int length; 
  __int64 v10; 
  bdHMacSHA1 v11; 

  v10 = -2i64;
  bdHMacSHA1::bdHMacSHA1(&v11, (const unsigned __int8 *const)inSalt, 0x14u);
  length = 20;
  v7 = bdHMacSHA1::process(&v11, inIKM, inIKMSize) && bdHMacSHA1::getData(&v11, (unsigned __int8 *)outPRK, &length);
  bdHandleAssert(length == 20, "outSize == BD_SHA1_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExtractSHA1", 0xC3u, "HMAC produced a result of unexpected length.");
  bdHMacSHA1::~bdHMacSHA1(&v11);
  return v7;
}

/*
==============
bdCryptoUtils::hkdfExtractSHA256
==============
*/
_BOOL8 bdCryptoUtils::hkdfExtractSHA256(const unsigned __int8 (*inSalt)[32], const unsigned __int8 *inIKM, const unsigned int inIKMSize, unsigned __int8 (*outPRK)[32])
{
  bool v7; 
  unsigned int length; 
  __int64 v10; 
  bdHMacSHA256 v11; 

  v10 = -2i64;
  bdHMacSHA256::bdHMacSHA256(&v11, (const unsigned __int8 *const)inSalt, 0x20u);
  length = 32;
  v7 = bdHMacSHA256::process(&v11, inIKM, inIKMSize) && bdHMacSHA256::getData(&v11, (unsigned __int8 *)outPRK, &length);
  bdHandleAssert(length == 32, "outSize == BD_SHA256_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoutils.cpp", "bdCryptoUtils::hkdfExtractSHA256", 0xD4u, "HMAC produced a result of unexpected length.");
  bdHMacSHA256::~bdHMacSHA256(&v11);
  return v7;
}

/*
==============
bdCryptoUtils::zeroBuffer
==============
*/
void bdCryptoUtils::zeroBuffer(void *const buffer, const unsigned __int64 size)
{
  bdMemset(buffer, 0, size);
}

