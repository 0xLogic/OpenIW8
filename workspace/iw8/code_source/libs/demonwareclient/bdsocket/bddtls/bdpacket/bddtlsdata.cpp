/*
==============
bdDTLSData::generateMessageAuthCode
==============
*/

bool __fastcall bdDTLSData::generateMessageAuthCode(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, const unsigned __int8 (*keyingMaterials)[32], const unsigned int plainDataSize, const unsigned int encryptedPaddedDataSize, const unsigned int outDataOffset, unsigned int *outDataNewOffset, void *outData, unsigned __int8 *const outPayloadStart)
{
  return ?generateMessageAuthCode@bdDTLSData@@IEAA_NGQEAVbdCypher@@AEAY0CA@$$CBEIIIAEAIPEAXQEAE@Z(this, cypherSuite, cypher, keyingMaterials, plainDataSize, encryptedPaddedDataSize, outDataOffset, outDataNewOffset, outData, outPayloadStart);
}

/*
==============
bdDTLSData::~bdDTLSData
==============
*/

void __fastcall bdDTLSData::~bdDTLSData(bdDTLSData *this)
{
  ??1bdDTLSData@@UEAA@XZ(this);
}

/*
==============
bdDTLSData::deserialize
==============
*/

bool __fastcall bdDTLSData::deserialize(bdDTLSData *this, const void *inData, const unsigned int inDataSize, const unsigned int inDataOffset, unsigned int *inDataNewOffset, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], unsigned __int8 *outData, const unsigned int outDataMaxSize, unsigned int *outDataSize, bdCypher *const cypher, bdHash *const hash, const unsigned __int16 cypherSuite)
{
  return ?deserialize@bdDTLSData@@UEAA_NPEBXIIAEAIAEBVbdSequenceNumber@@AEAY0CA@$$CBEPEAEI1QEAVbdCypher@@QEAVbdHash@@G@Z(this, inData, inDataSize, inDataOffset, inDataNewOffset, lastSequenceNumber, keyingMaterials, outData, outDataMaxSize, outDataSize, cypher, hash, cypherSuite);
}

/*
==============
bdDTLSData::bdDTLSData
==============
*/

void __fastcall bdDTLSData::bdDTLSData(bdDTLSData *this)
{
  ??0bdDTLSData@@QEAA@XZ(this);
}

/*
==============
bdDTLSData::deserialize
==============
*/

bool __fastcall bdDTLSData::deserialize(bdDTLSData *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdDTLSData@@MEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSData::serialize
==============
*/

bool __fastcall bdDTLSData::serialize(bdDTLSData *this, void *outData, const unsigned int outDataSize, const unsigned int outDataOffset, unsigned int *outDataNewOffset, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], const unsigned __int8 *const inData, const unsigned int inDataSize, bdCypher *const cypher, bdHash *const hash, const unsigned __int16 cypherSuite)
{
  return ?serialize@bdDTLSData@@UEAA_NPEAXIIAEAIAEBVbdSequenceNumber@@AEAY0CA@$$CBEQEBEIQEAVbdCypher@@QEAVbdHash@@G@Z(this, outData, outDataSize, outDataOffset, outDataNewOffset, lastSequenceNumber, keyingMaterials, inData, inDataSize, cypher, hash, cypherSuite);
}

/*
==============
bdDTLSData::serialize
==============
*/

bool __fastcall bdDTLSData::serialize(bdDTLSData *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSData@@MEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSData::getPaddedDataSize
==============
*/

unsigned int __fastcall bdDTLSData::getPaddedDataSize(bdDTLSData *this, const unsigned __int16 cypherSuite, const unsigned int encryptedDataSize)
{
  return ?getPaddedDataSize@bdDTLSData@@IEAAIGI@Z(this, cypherSuite, encryptedDataSize);
}

/*
==============
bdDTLSData::setMACSize
==============
*/

bool __fastcall bdDTLSData::setMACSize(bdDTLSData *this, const unsigned __int16 cypherSuite)
{
  return ?setMACSize@bdDTLSData@@IEAA_NG@Z(this, cypherSuite);
}

/*
==============
bdDTLSData::processMessageAuthCode
==============
*/

bool __fastcall bdDTLSData::processMessageAuthCode(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, const unsigned __int8 (*keyingMaterials)[32], const unsigned int plainDataSize, const unsigned int paddedEncryptedDataSize, const unsigned int inDataOffset, unsigned int *inDataNewOffset, unsigned int *outDataSize, const void *inData, const unsigned __int8 *const inPayloadStart)
{
  return ?processMessageAuthCode@bdDTLSData@@IEAA_NGQEAVbdCypher@@AEAY0CA@$$CBEIIIAEAI2PEBXQEBE@Z(this, cypherSuite, cypher, keyingMaterials, plainDataSize, paddedEncryptedDataSize, inDataOffset, inDataNewOffset, outDataSize, inData, inPayloadStart);
}

/*
==============
bdDTLSData::bdDTLSData
==============
*/

void __fastcall bdDTLSData::bdDTLSData(bdDTLSData *this, unsigned __int16 vtag, unsigned __int16 counter)
{
  ??0bdDTLSData@@QEAA@GG@Z(this, vtag, counter);
}

/*
==============
bdDTLSData::generateIVNonce
==============
*/

bool __fastcall bdDTLSData::generateIVNonce(bdDTLSData *this, const unsigned __int16 cypherSuite, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], unsigned __int8 (*iv)[16], unsigned int *ivNonceSize, bdHash *const hash)
{
  return ?generateIVNonce@bdDTLSData@@IEAA_NGAEBVbdSequenceNumber@@AEAY0CA@$$CBEAEAY0BA@EAEAIQEAVbdHash@@@Z(this, cypherSuite, lastSequenceNumber, keyingMaterials, iv, ivNonceSize, hash);
}

/*
==============
bdDTLSData::setAdditionalAuthData
==============
*/

bool __fastcall bdDTLSData::setAdditionalAuthData(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, unsigned __int8 (*aadBuffer)[1288], const unsigned __int16 encryptedDataSize, const unsigned int plainDataSize, const unsigned __int8 *const plainData)
{
  return ?setAdditionalAuthData@bdDTLSData@@IEAA_NGQEAVbdCypher@@AEAY0FAI@EGIQEBE@Z(this, cypherSuite, cypher, aadBuffer, encryptedDataSize, plainDataSize, plainData);
}

/*
==============
bdDTLSData::bdDTLSData
==============
*/
void bdDTLSData::bdDTLSData(bdDTLSData *this, unsigned __int16 vtag, unsigned __int16 counter)
{
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_DATA, vtag, counter);
  this->__vftable = (bdDTLSData_vtbl *)&bdDTLSData::`vftable';
  *(_QWORD *)&this->m_mac[8] = 0i64;
  *(_QWORD *)this->m_mac = 0i64;
}

/*
==============
bdDTLSData::bdDTLSData
==============
*/
void bdDTLSData::bdDTLSData(bdDTLSData *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSData_vtbl *)&bdDTLSData::`vftable';
  *(_QWORD *)&this->m_mac[8] = 0i64;
  *(_QWORD *)this->m_mac = 0i64;
}

/*
==============
bdDTLSData::~bdDTLSData
==============
*/
void bdDTLSData::~bdDTLSData(bdDTLSData *this)
{
  this->__vftable = (bdDTLSData_vtbl *)&bdDTLSData::`vftable';
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSData::deserialize
==============
*/
char bdDTLSData::deserialize(bdDTLSData *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdDTLSHeader::deserialize(this, data, size, offset, newOffset) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_mac, this->m_macSize) )
    return 1;
  *newOffset = offset;
  return 0;
}

/*
==============
bdDTLSData::deserialize
==============
*/
char bdDTLSData::deserialize(bdDTLSData *this, const void *inData, const unsigned int inDataSize, const unsigned int inDataOffset, unsigned int *inDataNewOffset, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], unsigned __int8 *outData, const unsigned int outDataMaxSize, unsigned int *outDataSize, bdCypher *const cypher, bdHash *const hash, const unsigned __int16 cypherSuite)
{
  unsigned int PaddedDataSize; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  bool v21; 
  int v22; 
  bool v23; 
  unsigned int *v24; 
  unsigned int SerializedSize; 
  bool v26; 
  unsigned int v27; 
  unsigned __int16 v28; 
  bool v29; 
  unsigned __int16 var[2]; 
  unsigned int ivNonceSize; 
  unsigned int *v33; 
  unsigned int plainDataSize; 
  unsigned int v35; 
  bdCypherAESGCM *v36; 
  unsigned __int8 (*v37)[32]; 
  const unsigned __int8 *v38; 
  unsigned __int8 *plainData; 
  bdHash *v40; 
  void *v41; 
  bdHMacSHA256 v42; 
  __int64 v43; 
  bdAuthenticationTag authTag; 
  bdSequenceNumber *v45; 
  unsigned __int8 iv[16]; 
  unsigned __int8 aadBuffer[1288]; 

  v43 = -2i64;
  v45 = (bdSequenceNumber *)lastSequenceNumber;
  v37 = (unsigned __int8 (*)[32])keyingMaterials;
  v33 = outDataSize;
  v36 = (bdCypherAESGCM *)cypher;
  v40 = hash;
  bdHandleAssert(inData != outData, "(inData != outData)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0xC8u, "bdDTLSData: overwriting input data buffer");
  var[0] = 0;
  if ( !bdDTLSData::setMACSize(this, cypherSuite) )
    goto LABEL_42;
  *inDataNewOffset = inDataOffset;
  if ( !bdDTLSHeader::deserialize(this, inData, inDataSize, inDataOffset, inDataNewOffset) || !bdBytePacker::removeBuffer(inData, inDataSize, *inDataNewOffset, inDataNewOffset, this->m_mac, this->m_macSize) )
  {
    *inDataNewOffset = inDataOffset;
    goto LABEL_42;
  }
  if ( !bdBytePacker::removeBasicType<unsigned short>(inData, inDataSize, *inDataNewOffset, inDataNewOffset, var) )
  {
LABEL_42:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0xD5u, "Failed to deserialize header.");
    goto LABEL_43;
  }
  PaddedDataSize = bdDTLSData::getPaddedDataSize(this, cypherSuite, var[0]);
  v35 = PaddedDataSize;
  v18 = *inDataNewOffset;
  if ( (unsigned int)v18 + PaddedDataSize <= inDataSize )
  {
    v19 = inDataSize - v18;
    plainDataSize = v19 - PaddedDataSize;
    v38 = (const unsigned __int8 *)inData + v18;
    plainData = (unsigned __int8 *)inData + v18 + PaddedDataSize;
    v41 = &outData[var[0] + 2];
    v20 = var[0] + v19 - PaddedDataSize + 2;
    *outDataSize = v20;
    if ( v20 + 16 > outDataMaxSize )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0xF2u, "Insufficient space in the destination buffer.");
      goto LABEL_43;
    }
    ivNonceSize = 0;
    v21 = bdDTLSData::generateIVNonce(this, cypherSuite, v45, v37, (unsigned __int8 (*)[16])iv, &ivNonceSize, v40);
    v22 = 16;
    if ( cypherSuite == 0xBD02 )
      v22 = 12;
    bdHandleAssert(ivNonceSize == v22, "(ivNonceSize == ((cypherSuite == bdCypherSuites::BD_DTLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256) ? BD_AES_GCM_NONCE_SIZE : BD_AES_BLOCK_SIZE))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0xFCu, "IV / Nonce size mismatch from cypherSuite");
    if ( v21 )
    {
      if ( cypherSuite == 0xBD02 )
      {
        bdAuthenticationTag::bdAuthenticationTag(&authTag, this->m_mac, this->m_macSize);
        v23 = bdCypherAESGCM::setAuthenticationTag(v36, &authTag);
        bdAuthenticationTag::~bdAuthenticationTag(&authTag);
        v24 = v33;
        goto LABEL_25;
      }
      if ( cypherSuite == 0xBD01 )
      {
        bdHMacSHA256::bdHMacSHA256(&v42, (const unsigned __int8 *const)v37, 0x18u);
        SerializedSize = bdDTLSHeader::getSerializedSize(this);
        v26 = bdHMacSHA256::process(&v42, (const unsigned __int8 *const)inData, SerializedSize) && bdHMacSHA256::process(&v42, v38 - 2, v19 + 2);
        ivNonceSize = 8;
        bdHandleAssert(1, "sizeof(tmpHmac) <= BD_SHA256_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::processMessageAuthCode", 0x1F5u, "Constants error: BD_DTLS_HMAC_SIZE > hashDigestSize");
        if ( v26 && bdHMacSHA256::getData(&v42, (unsigned __int8 *)&v45, &ivNonceSize) && bdCryptoUtils::constTimeCompare((const volatile unsigned __int8 *volatile)&v45, this->m_mac, ivNonceSize) )
        {
          v23 = 1;
          v24 = v33;
        }
        else
        {
          v23 = 0;
          *inDataNewOffset = inDataOffset;
          v24 = v33;
          *v33 = 0;
        }
        bdHMacSHA256::~bdHMacSHA256(&v42);
LABEL_25:
        if ( !v23 )
          goto LABEL_40;
        v27 = plainDataSize;
        v28 = var[0];
        if ( !bdDTLSData::setAdditionalAuthData(this, cypherSuite, v36, (unsigned __int8 (*)[1288])aadBuffer, var[0], plainDataSize, plainData) || !v36->decrypt(v36, iv, v38, outData + 2, v35) )
          goto LABEL_40;
        memcpy_0(v41, plainData, v27);
        v29 = outDataMaxSize >= 2 || !outData;
        bdHandleAssert(v29, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
        if ( outData )
        {
          if ( outDataMaxSize < 2 )
          {
LABEL_36:
            if ( !outData )
              return 1;
LABEL_40:
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0x11Du, "Decryption failed.");
            *inDataNewOffset = inDataOffset;
            *v24 = 0;
            return 0;
          }
          *(_WORD *)outData = v28;
        }
        if ( outDataMaxSize >= 2 )
          return 1;
        goto LABEL_36;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::processMessageAuthCode", 0x205u, "Invalid CypherSuite for processMessageAuthCode()");
    }
    v24 = v33;
    goto LABEL_40;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::deserialize", 0xE1u, "Truncated packet.");
LABEL_43:
  *inDataNewOffset = inDataOffset;
  *outDataSize = 0;
  return 0;
}

/*
==============
bdDTLSData::generateIVNonce
==============
*/
char bdDTLSData::generateIVNonce(bdDTLSData *this, const unsigned __int16 cypherSuite, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], unsigned __int8 (*iv)[16], unsigned int *ivNonceSize, bdHash *const hash)
{
  unsigned int m_seqNum; 
  int v9; 
  char v11; 
  bdHashAlgorithms m_type; 
  bdSequenceNumber *v14; 
  int Value; 
  bool appended; 
  bdHashAlgorithms v17; 
  bdSequenceNumber *v18; 
  int v19; 
  bdHash_vtbl *v20; 
  bdSequenceNumber v21; 
  bdSequenceNumber v22; 
  void *Src; 
  __int128 v24; 

  m_seqNum = 0;
  v9 = cypherSuite;
  Src = (void *)keyingMaterials;
  *ivNonceSize = 0;
  if ( cypherSuite != 48385 )
  {
    if ( cypherSuite == 48386 )
    {
      bdHandleAssert(hash->m_type == BD_HASH_SHA256, "hash->m_type == BD_HASH_SHA256", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x161u, "Invalid bdHash function for CypherSuite");
      m_type = hash->m_type;
      bdSequenceNumber::bdSequenceNumber(&v21, lastSequenceNumber, this->m_counter, 0x10u);
      Value = bdSequenceNumber::getValue(v14);
      if ( m_type )
        goto LABEL_13;
      v21.m_seqNum = 4;
      bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
      if ( iv )
        *(_DWORD *)iv = Value;
      appended = bdBytePacker::appendBasicType<unsigned short>(iv, 0xCu, 4u, (unsigned int *)&v21, &this->m_vtag);
      m_seqNum = v21.m_seqNum;
      if ( !appended || (unsigned int)v21.m_seqNum >= 0xC )
LABEL_13:
        v11 = 0;
      else
        v11 = 1;
      bdHandleAssert(m_seqNum < 0xC, "(bytesWritten < BD_AES_GCM_NONCE_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x16Du, "BD_AES_GCM_NONCE_SIZE too small for GCM nonce derivation");
      if ( v11 )
      {
        memcpy_0(&(*iv)[m_seqNum], Src, 12 - m_seqNum);
        *ivNonceSize = 12;
        return v11;
      }
LABEL_5:
      bdHandleAssert(0, "\"ok\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x1A0u, "Error generating IV / Nonce");
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x1A0u, "Error generating IV / Nonce");
      return v11;
    }
    bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x19Bu, "Invalid Cypher Suite [%d] for generateIVNonce()", cypherSuite);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x19Bu, "Invalid Cypher Suite [%d] for generateIVNonce()", v9);
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  bdHandleAssert(hash->m_type == BD_HASH_SHA256, "hash->m_type == BD_HASH_SHA256", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateIVNonce", 0x17Cu, "Invalid bdHash function for CypherSuite");
  v17 = hash->m_type;
  bdSequenceNumber::bdSequenceNumber(&v22, lastSequenceNumber, this->m_counter, 0x10u);
  v19 = bdSequenceNumber::getValue(v18);
  if ( v17 )
    goto LABEL_4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  LODWORD(Src) = v19;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  WORD2(Src) = this->m_vtag;
  v20 = hash->__vftable;
  v21.m_seqNum = 32;
  if ( !v20->hash(hash, (const unsigned __int8 *)&Src, 6u, (unsigned __int8 *)&v24, (unsigned int *)&v21) || (unsigned int)v21.m_seqNum < 0x10 )
    goto LABEL_4;
  *(_OWORD *)iv = v24;
  *ivNonceSize = 16;
  return 1;
}

/*
==============
bdDTLSData::generateMessageAuthCode
==============
*/
bool bdDTLSData::generateMessageAuthCode(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, const unsigned __int8 (*keyingMaterials)[32], const unsigned int plainDataSize, const unsigned int encryptedPaddedDataSize, const unsigned int outDataOffset, unsigned int *outDataNewOffset, void *outData, unsigned __int8 *const outPayloadStart)
{
  bool AuthenticationTag; 
  unsigned __int8 TagLength; 
  unsigned int v14; 
  unsigned __int8 *Tag; 
  unsigned int SerializedSize; 
  bdAuthenticationTag authTag; 

  if ( cypherSuite == 0xBD02 )
  {
    bdAuthenticationTag::bdAuthenticationTag(&authTag);
    AuthenticationTag = bdCypherAESGCM::getAuthenticationTag((bdCypherAESGCM *)cypher, &authTag, 0xCu);
    TagLength = bdAuthenticationTag::getTagLength(&authTag);
    bdHandleAssert(TagLength <= 0xCu, "sizeof(m_mac) >= authTag.getTagLength()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateMessageAuthCode", 0x1B6u, "Constants error");
    v14 = bdAuthenticationTag::getTagLength(&authTag);
    this->m_macSize = v14;
    Tag = bdAuthenticationTag::getTag(&authTag);
    memcpy_0(this->m_mac, Tag, v14);
    bdAuthenticationTag::~bdAuthenticationTag(&authTag);
  }
  else if ( cypherSuite == 0xBD01 )
  {
    bdHMacSHA256::bdHMacSHA256((bdHMacSHA256 *)&authTag, (const unsigned __int8 *const)keyingMaterials, 0x18u);
    SerializedSize = bdDTLSHeader::getSerializedSize(this);
    AuthenticationTag = bdHMacSHA256::process((bdHMacSHA256 *)&authTag, (const unsigned __int8 *const)outData, SerializedSize) && bdHMacSHA256::process((bdHMacSHA256 *)&authTag, outPayloadStart - 2, plainDataSize + encryptedPaddedDataSize + 2);
    this->m_macSize = 8;
    bdHandleAssert(1, "sizeof(m_mac) >= m_macSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateMessageAuthCode", 0x1C4u, "Constants_error");
    bdHandleAssert(1, "sizeof(m_mac) <= BD_SHA256_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateMessageAuthCode", 0x1C5u, "Constants error");
    if ( !bdHMacSHA256::getData((bdHMacSHA256 *)&authTag, this->m_mac, &this->m_macSize) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateMessageAuthCode", 0x1C9u, "Failed to get HMAC!");
      *outDataNewOffset = outDataOffset;
      bdHMacSHA256::~bdHMacSHA256((bdHMacSHA256 *)&authTag);
      return 0;
    }
    bdHMacSHA256::~bdHMacSHA256((bdHMacSHA256 *)&authTag);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::generateMessageAuthCode", 0x1D0u, "Invalid CypherSuite for generateMessageAuthCode()");
    return 0;
  }
  return AuthenticationTag;
}

/*
==============
bdDTLSData::getPaddedDataSize
==============
*/
__int64 bdDTLSData::getPaddedDataSize(bdDTLSData *this, const unsigned __int16 cypherSuite, const unsigned int encryptedDataSize)
{
  int v3; 

  v3 = cypherSuite;
  if ( cypherSuite == 48385 )
    return (encryptedDataSize + 15) & 0xFFFFFFF0;
  if ( cypherSuite != 48386 )
  {
    bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::getPaddedDataSize", 0x14Bu, "Invalid Cypher Suite [%d] for getPaddedDataSize()", cypherSuite);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::getPaddedDataSize", 0x14Bu, "Invalid Cypher Suite [%d] for getPaddedDataSize()", v3);
  }
  return encryptedDataSize;
}

/*
==============
bdDTLSData::processMessageAuthCode
==============
*/
char bdDTLSData::processMessageAuthCode(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, const unsigned __int8 (*keyingMaterials)[32], const unsigned int plainDataSize, const unsigned int paddedEncryptedDataSize, const unsigned int inDataOffset, unsigned int *inDataNewOffset, unsigned int *outDataSize, const void *inData, const unsigned __int8 *const inPayloadStart)
{
  bool v13; 
  unsigned int SerializedSize; 
  bool v16; 
  char v17; 
  unsigned int length; 
  __int64 v19; 
  bdAuthenticationTag authTag; 
  unsigned __int8 digest[8]; 

  v19 = -2i64;
  if ( cypherSuite == 0xBD02 )
  {
    bdAuthenticationTag::bdAuthenticationTag(&authTag, this->m_mac, this->m_macSize);
    v13 = bdCypherAESGCM::setAuthenticationTag((bdCypherAESGCM *)cypher, &authTag);
    bdAuthenticationTag::~bdAuthenticationTag(&authTag);
    return v13;
  }
  else if ( cypherSuite == 0xBD01 )
  {
    bdHMacSHA256::bdHMacSHA256((bdHMacSHA256 *)&authTag, (const unsigned __int8 *const)keyingMaterials, 0x18u);
    SerializedSize = bdDTLSHeader::getSerializedSize(this);
    v16 = bdHMacSHA256::process((bdHMacSHA256 *)&authTag, (const unsigned __int8 *const)inData, SerializedSize) && bdHMacSHA256::process((bdHMacSHA256 *)&authTag, inPayloadStart - 2, plainDataSize + paddedEncryptedDataSize + 2);
    length = 8;
    bdHandleAssert(1, "sizeof(tmpHmac) <= BD_SHA256_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::processMessageAuthCode", 0x1F5u, "Constants error: BD_DTLS_HMAC_SIZE > hashDigestSize");
    if ( v16 && bdHMacSHA256::getData((bdHMacSHA256 *)&authTag, digest, &length) && bdCryptoUtils::constTimeCompare(digest, this->m_mac, length) )
    {
      v17 = 1;
    }
    else
    {
      v17 = 0;
      *inDataNewOffset = inDataOffset;
      *outDataSize = 0;
    }
    bdHMacSHA256::~bdHMacSHA256((bdHMacSHA256 *)&authTag);
    return v17;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::processMessageAuthCode", 0x205u, "Invalid CypherSuite for processMessageAuthCode()");
    return 0;
  }
}

/*
==============
bdDTLSData::serialize
==============
*/
char bdDTLSData::serialize(bdDTLSData *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdDTLSHeader::serialize(this, data, size, offset, newOffset) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_mac, this->m_macSize) )
    return 1;
  *newOffset = offset;
  return 0;
}

/*
==============
bdDTLSData::serialize
==============
*/
char bdDTLSData::serialize(bdDTLSData *this, void *outData, const unsigned int outDataSize, const unsigned int outDataOffset, unsigned int *outDataNewOffset, const bdSequenceNumber *lastSequenceNumber, const unsigned __int8 (*keyingMaterials)[32], const unsigned __int8 *const inData, const unsigned int inDataSize, bdCypher *const cypher, bdHash *const hash, const unsigned __int16 cypherSuite)
{
  unsigned int v16; 
  bool v17; 
  unsigned int v18; 
  unsigned int PaddedDataSize; 
  __int64 v20; 
  unsigned int v21; 
  bool IVNonce; 
  int v23; 
  bdDTLSData *v24; 
  char result; 
  unsigned int line; 
  char *format; 
  char v28; 
  unsigned __int16 v29; 
  unsigned int encryptedPaddedDataSize; 
  unsigned int encryptedPaddedDataSizea; 
  unsigned int ivNonceSize[2]; 
  unsigned __int8 *outPayloadStart; 
  size_t v34; 
  size_t Size; 
  unsigned __int8 *plainData; 
  bdCypher *v37; 
  void *Src; 
  bdDTLSData *v39; 
  unsigned __int8 (*v40)[32]; 
  bdHash *v41; 
  bdSequenceNumber *v42; 
  void *v43; 
  unsigned __int8 iv[16]; 
  unsigned __int8 aadBuffer[1288]; 

  v42 = (bdSequenceNumber *)lastSequenceNumber;
  v40 = (unsigned __int8 (*)[32])keyingMaterials;
  v37 = cypher;
  v41 = hash;
  v39 = this;
  *(_QWORD *)ivNonceSize = inData;
  v29 = 0;
  if ( inData )
  {
    if ( inDataSize < 2 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    else
      v29 = *(_WORD *)inData;
  }
  if ( inDataSize < 2 && inData || !bdDTLSData::setMACSize(this, cypherSuite) || !bdDTLSData::serialize(this, outData, outDataSize, outDataOffset, outDataNewOffset) )
    goto LABEL_19;
  encryptedPaddedDataSize = *outDataNewOffset;
  v16 = *outDataNewOffset + 2;
  *outDataNewOffset = v16;
  v17 = v16 <= outDataSize || !outData;
  bdHandleAssert(v17, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( outData )
  {
    if ( v16 > outDataSize )
      goto LABEL_17;
    *(_WORD *)((char *)outData + encryptedPaddedDataSize) = v29;
  }
  if ( v16 > outDataSize )
  {
LABEL_17:
    if ( !outData )
      goto LABEL_18;
LABEL_19:
    v28 = 0;
    goto LABEL_20;
  }
LABEL_18:
  v28 = 1;
LABEL_20:
  Src = (void *)(inData + 2);
  Size = v29;
  plainData = (unsigned __int8 *)&inData[v29 + 2];
  v18 = inDataSize - v29 - 2;
  PaddedDataSize = bdDTLSData::getPaddedDataSize(this, cypherSuite, v29);
  v20 = *outDataNewOffset;
  LODWORD(v34) = PaddedDataSize - v29;
  encryptedPaddedDataSizea = PaddedDataSize;
  outPayloadStart = (unsigned __int8 *)outData + v20;
  v43 = (char *)outData + v20 + PaddedDataSize;
  v21 = v18 + v20 + PaddedDataSize;
  if ( (int)inData + 2 - ivNonceSize[0] > inDataSize || (int)plainData - ivNonceSize[0] > inDataSize || Size + 2 > inDataSize || v18 + Size + 2 > inDataSize )
  {
    format = "Packet format is invalid.";
    line = 120;
    goto LABEL_37;
  }
  if ( !v28 || v18 + PaddedDataSize + (_DWORD)v20 - outDataOffset > outDataSize )
  {
    format = "Insufficient space in the destination buffer.";
    line = 128;
LABEL_37:
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::serialize", line, format);
    result = 0;
    *outDataNewOffset = outDataOffset;
    return result;
  }
  ivNonceSize[0] = 0;
  IVNonce = bdDTLSData::generateIVNonce(v39, cypherSuite, v42, v40, (unsigned __int8 (*)[16])iv, ivNonceSize, v41);
  v23 = 16;
  if ( cypherSuite == 0xBD02 )
    v23 = 12;
  bdHandleAssert(ivNonceSize[0] == v23, "(ivNonceSize == ((cypherSuite == bdCypherSuites::BD_DTLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256) ? BD_AES_GCM_NONCE_SIZE : BD_AES_BLOCK_SIZE))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::serialize", 0x89u, "IV / Nonce size mismatch from cypherSuite");
  memcpy_0(outPayloadStart, Src, Size);
  memset_0(&outPayloadStart[Size], (unsigned __int8)v34, (unsigned int)v34);
  memcpy_0(v43, plainData, v18);
  if ( IVNonce && (v24 = v39, bdDTLSData::setAdditionalAuthData(v39, cypherSuite, v37, (unsigned __int8 (*)[1288])aadBuffer, v29, v18, plainData)) && ((unsigned __int8 (__fastcall *)(bdCypher *, unsigned __int8 *, unsigned __int8 *))v37->encrypt)(v37, iv, outPayloadStart) && bdDTLSData::generateMessageAuthCode(v24, cypherSuite, v37, v40, v18, encryptedPaddedDataSizea, outDataOffset, outDataNewOffset, outData, outPayloadStart) && bdDTLSData::serialize(v24, outData, outDataSize, outDataOffset, outDataNewOffset) )
  {
    *outDataNewOffset = v21;
    bdHandleAssert(v21 - outDataOffset - inDataSize <= 0x12, "(outDataNewOffset - outDataOffset - inDataSize) <= BD_MAX_DTLS_DATA_PACKET_OVERHEAD", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::serialize", 0xB5u, "Overheads didn't match the define.");
    return 1;
  }
  else
  {
    *outDataNewOffset = outDataOffset;
    return 0;
  }
}

/*
==============
bdDTLSData::setAdditionalAuthData
==============
*/
char bdDTLSData::setAdditionalAuthData(bdDTLSData *this, const unsigned __int16 cypherSuite, bdCypher *const cypher, unsigned __int8 (*aadBuffer)[1288], const unsigned __int16 encryptedDataSize, const unsigned int plainDataSize, const unsigned __int8 *const plainData)
{
  __int64 v9; 
  unsigned int v10; 
  bool v11; 
  unsigned int offset; 

  if ( cypherSuite == 0xBD02 )
  {
    offset = 0;
    if ( !bdDTLSHeader::serialize(this, aadBuffer, 0x508u, 0, &offset) )
      return 0;
    v9 = offset;
    v10 = offset + 2;
    offset = v10;
    v11 = v10 <= 0x508 || !aadBuffer;
    bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( aadBuffer )
    {
      if ( v10 > 0x508 )
        goto LABEL_11;
      *(_WORD *)&(*aadBuffer)[v9] = encryptedDataSize;
    }
    if ( v10 <= 0x508 )
      return bdBytePacker::appendBuffer(aadBuffer, 0x508u, offset, &offset, plainData, plainDataSize) && bdCypherAESGCM::setAAD((bdCypherAESGCM *)cypher, (const unsigned __int8 *const)aadBuffer, offset);
LABEL_11:
    if ( aadBuffer )
      return 0;
    return bdBytePacker::appendBuffer(aadBuffer, 0x508u, offset, &offset, plainData, plainDataSize) && bdCypherAESGCM::setAAD((bdCypherAESGCM *)cypher, (const unsigned __int8 *const)aadBuffer, offset);
  }
  if ( cypherSuite == 0xBD01 )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDTLSData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::setAdditionalAuthData", 0x223u, "Invalid CypherSuite for setAAD()");
  return 0;
}

/*
==============
bdDTLSData::setMACSize
==============
*/
char bdDTLSData::setMACSize(bdDTLSData *this, const unsigned __int16 cypherSuite)
{
  int v2; 
  int v3; 

  v2 = cypherSuite;
  *(_QWORD *)this->m_mac = 0i64;
  *(_DWORD *)&this->m_mac[8] = 0;
  v3 = cypherSuite - 48385;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      this->m_macSize = 12;
      return 1;
    }
    else
    {
      bdHandleAssert(0, "\"false\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::setMACSize", 0x134u, "Invalid Cypher Suite [%d] for setMACSize()", v2);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bdpacket\\bddtlsdata.cpp", "bdDTLSData::setMACSize", 0x134u, "Invalid Cypher Suite [%d] for setMACSize()", v2);
      return 0;
    }
  }
  else
  {
    this->m_macSize = 8;
    return 1;
  }
}

