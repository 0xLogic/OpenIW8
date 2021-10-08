/*
==============
bdDTLSUtils::hkdfExpandLabel
==============
*/

bool __fastcall bdDTLSUtils::hkdfExpandLabel(const unsigned __int8 (*inSecret)[32], const char *inLabel, const unsigned __int8 *inHashValue, const unsigned __int16 hashLength, unsigned __int8 *outBuffer, const unsigned int outBufferSize)
{
  return ?hkdfExpandLabel@bdDTLSUtils@@SA_NAEAY0CA@$$CBEPEBDPEBEGPEAEI@Z(inSecret, inLabel, inHashValue, hashLength, outBuffer, outBufferSize);
}

/*
==============
bdDTLSUtils::deriveSecret
==============
*/

bool __fastcall bdDTLSUtils::deriveSecret(const unsigned __int8 (*inSecret)[32], const char *inLabel, const unsigned __int8 *inMessages, const unsigned int inMessagesSize, unsigned __int8 (*outBuffer)[32])
{
  return ?deriveSecret@bdDTLSUtils@@SA_NAEAY0CA@$$CBEPEBDPEBEIAEAY0CA@E@Z(inSecret, inLabel, inMessages, inMessagesSize, outBuffer);
}

/*
==============
bdDTLSUtils::deriveSecret
==============
*/
__int64 bdDTLSUtils::deriveSecret(const unsigned __int8 (*inSecret)[32], const char *inLabel, const unsigned __int8 *inMessages, const unsigned int inMessagesSize, unsigned __int8 (*outBuffer)[32])
{
  void *v9; 
  unsigned int v10; 
  unsigned __int8 v11; 
  unsigned int offset; 
  unsigned int resultSize; 
  __int64 v15; 
  bdHashSHA256 v16; 
  unsigned __int8 result[40]; 
  __int16 dest[168]; 

  v15 = -2i64;
  bdHashSHA256::bdHashSHA256(&v16);
  resultSize = 32;
  bdHandleAssert(inMessages != NULL, "(inMessages != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsutils.cpp", "bdDTLSUtils::deriveSecret", 0x25u, "Cannot pass NULL inMessages");
  if ( !bdHashSHA256::hash(&v16, inMessages, inMessagesSize, result, &resultSize) || resultSize != 32 )
    goto LABEL_11;
  v9 = memchr_0(inLabel, 0, 0xF6ui64);
  v10 = 246;
  if ( v9 )
    v10 = (_DWORD)v9 - (_DWORD)inLabel;
  bdHandleAssert(v10 < 0xF6, "inLabelSize < BD_DTLS_LABEL_TAIL_MAX_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsutils.cpp", "bdDTLSUtils::hkdfExpandLabel", 0x37u, "hkdfExpandLabel inLabel too long");
  bdHandleAssert(1, "(hashLength == BD_SHA256_HASH_SIZE || hashLength == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsutils.cpp", "bdDTLSUtils::hkdfExpandLabel", 0x38u, "hkdfExpandLabel hashLength not 0 or 32 bytes");
  if ( v10 < 0xF6 && (offset = 2, bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64), dest[0] = 32, bdBytePacker::appendBuffer(dest, 0x141u, 2u, &offset, bdDTLSUtils::BD_DTLS_LABEL_HEAD, 9u)) && bdBytePacker::appendBuffer(dest, 0x141u, offset, &offset, inLabel, v10) && bdBytePacker::appendBuffer(dest, 0x141u, offset, &offset, result, 0x20u) && bdCryptoUtils::hkdfExpand(inSecret, 0x20u, dest, offset, outBuffer, 0x20u, BD_HASH_SHA256) )
    v11 = 1;
  else
LABEL_11:
    v11 = 0;
  bdHashSHA256::~bdHashSHA256(&v16);
  return v11;
}

/*
==============
bdDTLSUtils::hkdfExpandLabel
==============
*/
bool bdDTLSUtils::hkdfExpandLabel(const unsigned __int8 (*inSecret)[32], const char *inLabel, const unsigned __int8 *inHashValue, const unsigned __int16 hashLength, unsigned __int8 *outBuffer, const unsigned int outBufferSize)
{
  void *v10; 
  unsigned int v11; 
  bool result; 
  unsigned int newOffset[4]; 
  __int16 dest[168]; 

  v10 = memchr_0(inLabel, 0, 0xF6ui64);
  v11 = 246;
  if ( v10 )
    v11 = (_DWORD)v10 - (_DWORD)inLabel;
  bdHandleAssert(v11 < 0xF6, "inLabelSize < BD_DTLS_LABEL_TAIL_MAX_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsutils.cpp", "bdDTLSUtils::hkdfExpandLabel", 0x37u, "hkdfExpandLabel inLabel too long");
  bdHandleAssert((hashLength & 0xFFDF) == 0, "(hashLength == BD_SHA256_HASH_SIZE || hashLength == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsutils.cpp", "bdDTLSUtils::hkdfExpandLabel", 0x38u, "hkdfExpandLabel hashLength not 0 or 32 bytes");
  result = 0;
  if ( v11 < 0xF6 )
  {
    newOffset[0] = 2;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    dest[0] = hashLength;
    if ( bdBytePacker::appendBuffer(dest, 0x141u, 2u, newOffset, bdDTLSUtils::BD_DTLS_LABEL_HEAD, 9u) && bdBytePacker::appendBuffer(dest, 0x141u, newOffset[0], newOffset, inLabel, v11) && bdBytePacker::appendBuffer(dest, 0x141u, newOffset[0], newOffset, inHashValue, hashLength) && bdCryptoUtils::hkdfExpand(inSecret, 0x20u, dest, newOffset[0], outBuffer, outBufferSize, BD_HASH_SHA256) )
      return 1;
  }
  return result;
}

