/*
==============
bdDynamicCypher::bdDynamicCypher
==============
*/

void __fastcall bdDynamicCypher::bdDynamicCypher(bdDynamicCypher *this, bdCypherAlgorithms algorithm)
{
  ??0bdDynamicCypher@@QEAA@W4bdCypherAlgorithms@@@Z(this, algorithm);
}

/*
==============
bdDynamicHMAC::bdDynamicHMAC
==============
*/

void __fastcall bdDynamicHMAC::bdDynamicHMAC(bdDynamicHMAC *this, const bdHashAlgorithms algorithm, const unsigned __int8 *const key, const unsigned int keySize)
{
  ??0bdDynamicHMAC@@QEAA@W4bdHashAlgorithms@@QEBEI@Z(this, algorithm, key, keySize);
}

/*
==============
bdDynamicHash::~bdDynamicHash
==============
*/

void __fastcall bdDynamicHash::~bdDynamicHash(bdDynamicHash *this)
{
  ??1bdDynamicHash@@UEAA@XZ(this);
}

/*
==============
bdCryptoDynamic::getCypherAlgorithmKeySize
==============
*/

unsigned int __fastcall bdCryptoDynamic::getCypherAlgorithmKeySize(bdCypherAlgorithms cypherAlgorithm)
{
  return ?getCypherAlgorithmKeySize@bdCryptoDynamic@@SAIW4bdCypherAlgorithms@@@Z(cypherAlgorithm);
}

/*
==============
bdCryptoDynamic::allocateHash
==============
*/

bdHash *__fastcall bdCryptoDynamic::allocateHash(bdHashAlgorithms hashAlgorithm, void *alignedBuffer)
{
  return ?allocateHash@bdCryptoDynamic@@SAPEAVbdHash@@W4bdHashAlgorithms@@PEAX@Z(hashAlgorithm, alignedBuffer);
}

/*
==============
bdCryptoDynamic::allocateCypher
==============
*/

bdCypher *__fastcall bdCryptoDynamic::allocateCypher(bdCypherAlgorithms cypherAlgorithm, void *alignedBuffer)
{
  return ?allocateCypher@bdCryptoDynamic@@SAPEAVbdCypher@@W4bdCypherAlgorithms@@PEAX@Z(cypherAlgorithm, alignedBuffer);
}

/*
==============
bdDynamicHash::bdDynamicHash
==============
*/

void __fastcall bdDynamicHash::bdDynamicHash(bdDynamicHash *this, bdHashAlgorithms algorithm)
{
  ??0bdDynamicHash@@QEAA@W4bdHashAlgorithms@@@Z(this, algorithm);
}

/*
==============
bdCryptoDynamic::allocateHMAC
==============
*/

bdHMac *__fastcall bdCryptoDynamic::allocateHMAC(bdHashAlgorithms hashAlgorithm, const unsigned __int8 *const key, const unsigned int keySize, void *alignedBuffer)
{
  return ?allocateHMAC@bdCryptoDynamic@@SAPEAVbdHMac@@W4bdHashAlgorithms@@QEBEIPEAX@Z(hashAlgorithm, key, keySize, alignedBuffer);
}

/*
==============
bdDynamicCypher::~bdDynamicCypher
==============
*/

void __fastcall bdDynamicCypher::~bdDynamicCypher(bdDynamicCypher *this)
{
  ??1bdDynamicCypher@@UEAA@XZ(this);
}

/*
==============
bdDynamicHMAC::~bdDynamicHMAC
==============
*/

void __fastcall bdDynamicHMAC::~bdDynamicHMAC(bdDynamicHMAC *this)
{
  ??1bdDynamicHMAC@@UEAA@XZ(this);
}

/*
==============
bdDynamicCypher::bdDynamicCypher
==============
*/
void bdDynamicCypher::bdDynamicCypher(bdDynamicCypher *this, bdCypherAlgorithms algorithm)
{
  this->__vftable = (bdDynamicCypher_vtbl *)&bdDynamicCypher::`vftable';
  this->m_cypher = bdCryptoDynamic::allocateCypher(algorithm, &this->16);
}

/*
==============
bdDynamicHMAC::bdDynamicHMAC
==============
*/
void bdDynamicHMAC::bdDynamicHMAC(bdDynamicHMAC *this, const bdHashAlgorithms algorithm, const unsigned __int8 *const key, const unsigned int keySize)
{
  this->__vftable = (bdDynamicHMAC_vtbl *)&bdDynamicHMAC::`vftable';
  this->m_hmac = bdCryptoDynamic::allocateHMAC(algorithm, key, keySize, &this->16);
}

/*
==============
bdDynamicHash::bdDynamicHash
==============
*/
void bdDynamicHash::bdDynamicHash(bdDynamicHash *this, bdHashAlgorithms algorithm)
{
  this->__vftable = (bdDynamicHash_vtbl *)&bdDynamicHash::`vftable';
  this->m_hash = bdCryptoDynamic::allocateHash(algorithm, &this->16);
}

/*
==============
bdDynamicCypher::~bdDynamicCypher
==============
*/
void bdDynamicCypher::~bdDynamicCypher(bdDynamicCypher *this)
{
  bdCypher *m_cypher; 

  this->__vftable = (bdDynamicCypher_vtbl *)&bdDynamicCypher::`vftable';
  m_cypher = this->m_cypher;
  if ( m_cypher )
  {
    ((void (__fastcall *)(bdCypher *, _QWORD))m_cypher->~bdCypher)(m_cypher, 0i64);
    this->m_cypher = NULL;
  }
}

/*
==============
bdDynamicHMAC::~bdDynamicHMAC
==============
*/
void bdDynamicHMAC::~bdDynamicHMAC(bdDynamicHMAC *this)
{
  bdHMac *m_hmac; 

  this->__vftable = (bdDynamicHMAC_vtbl *)&bdDynamicHMAC::`vftable';
  m_hmac = this->m_hmac;
  if ( m_hmac )
  {
    ((void (__fastcall *)(bdHMac *, _QWORD))m_hmac->~bdHMac)(m_hmac, 0i64);
    this->m_hmac = NULL;
  }
}

/*
==============
bdDynamicHash::~bdDynamicHash
==============
*/
void bdDynamicHash::~bdDynamicHash(bdDynamicHash *this)
{
  bdHash *m_hash; 

  this->__vftable = (bdDynamicHash_vtbl *)&bdDynamicHash::`vftable';
  m_hash = this->m_hash;
  if ( m_hash )
  {
    ((void (__fastcall *)(bdHash *, _QWORD))m_hash->~bdHash)(m_hash, 0i64);
    this->m_hash = NULL;
  }
}

/*
==============
bdCryptoDynamic::allocateCypher
==============
*/
void bdCryptoDynamic::allocateCypher(bdCypherAlgorithms cypherAlgorithm, void *alignedBuffer)
{
  bdCypherAESGCM *v3; 
  bdCypher3Des *v4; 
  bdCypherAES *v5; 

  if ( cypherAlgorithm < BD_CYPHER_AES128_CBC )
    goto LABEL_20;
  if ( cypherAlgorithm <= BD_CYPHER_AES256_CBC )
  {
    if ( alignedBuffer )
    {
      bdCypherAES::bdCypherAES((bdCypherAES *)alignedBuffer);
    }
    else
    {
      v5 = (bdCypherAES *)bdMemory::allocate(0x20ui64);
      if ( v5 )
        bdCypherAES::bdCypherAES(v5);
    }
  }
  else
  {
    if ( cypherAlgorithm != BD_CYPHER_3DES_CBC )
    {
      if ( (unsigned int)(cypherAlgorithm - 4) <= 2 )
      {
        if ( alignedBuffer )
        {
          bdCypherAESGCM::bdCypherAESGCM((bdCypherAESGCM *)alignedBuffer);
        }
        else
        {
          v3 = (bdCypherAESGCM *)bdMemory::allocate(0x50ui64);
          if ( v3 )
            bdCypherAESGCM::bdCypherAESGCM(v3);
        }
        return;
      }
LABEL_20:
      bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateCypher", 0x38u, "Invalid bdCypherAlgorithm[%d] passed to allocateCypher()", cypherAlgorithm);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateCypher", 0x38u, "Invalid bdCypherAlgorithm[%d] passed to allocateCypher()", cypherAlgorithm);
      return;
    }
    if ( alignedBuffer )
    {
      bdCypher3Des::bdCypher3Des((bdCypher3Des *)alignedBuffer);
    }
    else
    {
      v4 = (bdCypher3Des *)bdMemory::allocate(0x18ui64);
      if ( v4 )
        bdCypher3Des::bdCypher3Des(v4);
    }
  }
}

/*
==============
bdCryptoDynamic::allocateHMAC
==============
*/
bdHMac *bdCryptoDynamic::allocateHMAC(bdHashAlgorithms hashAlgorithm, const unsigned __int8 *const key, const unsigned int keySize, void *alignedBuffer)
{
  __int64 v7; 
  __int64 v8; 
  bdHMacSHA512 *v9; 
  __int64 v10; 
  __int64 v11; 
  bdHMacSHA384 *v12; 
  __int64 v13; 
  __int64 v14; 
  bdHMacSHA1 *v15; 
  __int64 v16; 
  __int64 v17; 
  bdHMacSHA256 *v18; 
  __int64 v19; 

  v7 = 0i64;
  if ( hashAlgorithm )
  {
    switch ( hashAlgorithm )
    {
      case BD_HASH_SHA1:
        if ( alignedBuffer )
        {
          bdHMacSHA1::bdHMacSHA1((bdHMacSHA1 *)alignedBuffer, key, keySize);
          return (bdHMac *)v14;
        }
        else
        {
          v15 = (bdHMacSHA1 *)bdMemory::allocate(0x18ui64);
          if ( v15 )
          {
            bdHMacSHA1::bdHMacSHA1(v15, key, keySize);
            return (bdHMac *)v16;
          }
        }
        break;
      case BD_HASH_SHA384:
        if ( alignedBuffer )
        {
          bdHMacSHA384::bdHMacSHA384((bdHMacSHA384 *)alignedBuffer, key, keySize);
          return (bdHMac *)v11;
        }
        else
        {
          v12 = (bdHMacSHA384 *)bdMemory::allocate(0x18ui64);
          if ( v12 )
          {
            bdHMacSHA384::bdHMacSHA384(v12, key, keySize);
            return (bdHMac *)v13;
          }
        }
        break;
      case BD_HASH_SHA512:
        if ( alignedBuffer )
        {
          bdHMacSHA512::bdHMacSHA512((bdHMacSHA512 *)alignedBuffer, key, keySize);
          return (bdHMac *)v8;
        }
        else
        {
          v9 = (bdHMacSHA512 *)bdMemory::allocate(0x18ui64);
          if ( v9 )
          {
            bdHMacSHA512::bdHMacSHA512(v9, key, keySize);
            return (bdHMac *)v10;
          }
        }
        break;
      default:
        bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateHMAC", 0x72u, "Invalid bdHashAlgorithm[%d] passed to allocateHMAC()", hashAlgorithm);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateHMAC", 0x72u, "Invalid bdHashAlgorithm[%d] passed to allocateHMAC()", hashAlgorithm);
        break;
    }
  }
  else if ( alignedBuffer )
  {
    bdHMacSHA256::bdHMacSHA256((bdHMacSHA256 *)alignedBuffer, key, keySize);
    return (bdHMac *)v17;
  }
  else
  {
    v18 = (bdHMacSHA256 *)bdMemory::allocate(0x18ui64);
    if ( v18 )
    {
      bdHMacSHA256::bdHMacSHA256(v18, key, keySize);
      return (bdHMac *)v19;
    }
  }
  return (bdHMac *)v7;
}

/*
==============
bdCryptoDynamic::allocateHash
==============
*/
void bdCryptoDynamic::allocateHash(bdHashAlgorithms hashAlgorithm, void *alignedBuffer)
{
  bdHashSHA256 *v3; 
  bdHashSHA384 *v4; 
  bdHashSHA512 *v5; 
  bdHashSHA1 *v6; 
  bdHashTiger192 *v7; 
  bdHashMD5 *v8; 
  bdHashAlgorithms v10; 

  switch ( hashAlgorithm )
  {
    case BD_HASH_SHA256:
      if ( alignedBuffer )
      {
        bdHashSHA256::bdHashSHA256((bdHashSHA256 *)alignedBuffer);
      }
      else
      {
        v3 = (bdHashSHA256 *)bdMemory::allocate(0x18ui64);
        if ( v3 )
          bdHashSHA256::bdHashSHA256(v3);
      }
      break;
    case BD_HASH_TIGER192:
      if ( alignedBuffer )
      {
        bdHashTiger192::bdHashTiger192((bdHashTiger192 *)alignedBuffer);
      }
      else
      {
        v7 = (bdHashTiger192 *)bdMemory::allocate(0x10ui64);
        if ( v7 )
          bdHashTiger192::bdHashTiger192(v7);
      }
      break;
    case BD_HASH_SHA1:
      if ( alignedBuffer )
      {
        bdHashSHA1::bdHashSHA1((bdHashSHA1 *)alignedBuffer);
      }
      else
      {
        v6 = (bdHashSHA1 *)bdMemory::allocate(0x18ui64);
        if ( v6 )
          bdHashSHA1::bdHashSHA1(v6);
      }
      break;
    case BD_HASH_MD5:
      if ( alignedBuffer )
      {
        bdHashMD5::bdHashMD5((bdHashMD5 *)alignedBuffer);
      }
      else
      {
        v8 = (bdHashMD5 *)bdMemory::allocate(0x18ui64);
        if ( v8 )
          bdHashMD5::bdHashMD5(v8);
      }
      break;
    case BD_HASH_SHA384:
      if ( alignedBuffer )
      {
        bdHashSHA384::bdHashSHA384((bdHashSHA384 *)alignedBuffer);
      }
      else
      {
        v4 = (bdHashSHA384 *)bdMemory::allocate(0x18ui64);
        if ( v4 )
          bdHashSHA384::bdHashSHA384(v4);
      }
      break;
    case BD_HASH_SHA512:
      if ( alignedBuffer )
      {
        bdHashSHA512::bdHashSHA512((bdHashSHA512 *)alignedBuffer);
      }
      else
      {
        v5 = (bdHashSHA512 *)bdMemory::allocate(0x18ui64);
        if ( v5 )
          bdHashSHA512::bdHashSHA512(v5);
      }
      break;
    default:
      bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateHash", 0x57u, "Invalid bdHashAlgorithm[%d] passed to allocateHash()", hashAlgorithm);
      v10 = hashAlgorithm;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::allocateHash", 0x57u, "Invalid bdHashAlgorithm[%d] passed to allocateHash()", v10);
      break;
  }
}

/*
==============
bdCryptoDynamic::getCypherAlgorithmKeySize
==============
*/
__int64 bdCryptoDynamic::getCypherAlgorithmKeySize(bdCypherAlgorithms cypherAlgorithm)
{
  __int64 result; 
  bdCypherAlgorithms v4; 

  switch ( cypherAlgorithm )
  {
    case BD_CYPHER_AES128_CBC:
    case BD_CYPHER_AES128_GCM:
      result = 16i64;
      break;
    case BD_CYPHER_AES192_CBC:
    case BD_CYPHER_3DES_CBC:
    case BD_CYPHER_AES192_GCM:
      result = 24i64;
      break;
    case BD_CYPHER_AES256_CBC:
    case BD_CYPHER_AES256_GCM:
      result = 32i64;
      break;
    default:
      bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::getCypherAlgorithmKeySize", 0x1Eu, "Invalid bdCypherAlgorithm[%d] passed to bdCypher::getAlgorithmKeySize()", cypherAlgorithm);
      v4 = cypherAlgorithm;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptodynamic.cpp", "bdCryptoDynamic::getCypherAlgorithmKeySize", 0x1Eu, "Invalid bdCypherAlgorithm[%d] passed to bdCypher::getAlgorithmKeySize()", v4);
      result = 0i64;
      break;
  }
  return result;
}

