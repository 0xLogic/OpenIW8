/*
==============
bdRelayFunctions::deriveSecrets
==============
*/
bool bdRelayFunctions::deriveSecrets(const unsigned int titleID, const unsigned __int64 userID, const unsigned __int8 *clientAuthSecret, const unsigned __int8 *relayAuthSecret, const unsigned __int8 *clientRandom, const unsigned __int8 *serverRandom, unsigned __int8 *sToCHmac, unsigned __int8 *sToCCipher, unsigned __int8 *cToSHmac)
{
  unsigned int v15; 
  void *v17; 
  bool v18; 
  char *v19; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  int v22; 
  unsigned int offset; 
  unsigned __int64 v28; 
  void *src; 
  void *v30; 
  unsigned __int8 inSalt[32]; 
  unsigned __int8 dest[80]; 
  __int128 outBuffer[3]; 
  unsigned __int8 outPRK[32]; 

  _R13 = sToCHmac;
  _R12 = sToCCipher;
  _R15 = cToSHmac;
  v30 = (void *)serverRandom;
  src = (void *)clientAuthSecret;
  v28 = userID;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  _RDI = 4i64;
  *(_DWORD *)dest = titleID;
  offset = 12;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  v15 = offset;
  __asm { vmovsd  xmm0, [rsp+170h+var_128] }
  v17 = src;
  __asm { vmovsd  qword ptr [rbp+rdi+70h+dest], xmm0 }
  v18 = bdBytePacker::appendBuffer(dest, 0x4Cu, v15, &offset, v17, 0x10u) && bdBytePacker::appendBuffer(dest, 0x4Cu, offset, &offset, relayAuthSecret, 0x10u) && bdBytePacker::appendBuffer(dest, 0x4Cu, offset, &offset, clientRandom, 0x10u) && bdBytePacker::appendBuffer(dest, 0x4Cu, offset, &offset, v30, 0x10u);
  v19 = `bdRelayFunctions::printToken'::`2'::out;
  v20 = 0;
  v21 = dest;
  while ( 1 )
  {
    v22 = bdSnprintf(v19, 2 * (256 - v20), "%02X", *v21);
    if ( v22 < 0 )
      break;
    ++v20;
    v19 += v22;
    ++v21;
    if ( v20 >= 0x4C )
      goto LABEL_13;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "debug/print-token", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayconfig.h", "bdRelayFunctions::printToken", 0x94u, "error in bdSnprintf.");
LABEL_13:
  *v19 = 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdRelayFunctions/deriveSecrets", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayconfig.h", "bdRelayFunctions::deriveSecrets", 0xB4u, "Generating secrets, seed=[%s]", `bdRelayFunctions::printToken'::`2'::out);
  memset(inSalt, 0, sizeof(inSalt));
  if ( !v18 )
    return 0;
  if ( !bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])inSalt, dest, 0x4Cu, (unsigned __int8 (*)[32])outPRK) )
    return 0;
  if ( !bdCryptoUtils::hkdfExpand(outPRK, 0x20u, "atOnU0BTUtmM0ju414F7", 0x15u, outBuffer, 0x30u, BD_HASH_SHA256) )
    return 0;
  __asm
  {
    vmovups xmm0, [rbp+70h+outBuffer]
    vmovups xmmword ptr [r13+0], xmm0
  }
  if ( !sToCHmac )
    return 0;
  __asm
  {
    vmovups xmm0, [rbp+70h+var_90]
    vmovups xmmword ptr [r12], xmm0
  }
  if ( !sToCCipher )
    return 0;
  __asm
  {
    vmovups xmm0, [rbp+70h+var_80]
    vmovups xmmword ptr [r15], xmm0
  }
  return cToSHmac != NULL;
}

/*
==============
bdRelayFunctions::generateInitPacketKey
==============
*/
void bdRelayFunctions::generateInitPacketKey(const unsigned __int8 *clientSecret, const unsigned __int8 *relaySecret, const unsigned __int8 *random, unsigned __int8 *result)
{
  unsigned int newOffset; 
  unsigned __int8 inSalt[32]; 
  unsigned __int8 dest[48]; 
  unsigned __int8 outPRK[32]; 

  newOffset = 0;
  bdBytePacker::appendBuffer(dest, 0x30u, 0, &newOffset, clientSecret, 0x10u);
  bdBytePacker::appendBuffer(dest, 0x30u, newOffset, &newOffset, relaySecret, 0x10u);
  bdBytePacker::appendBuffer(dest, 0x30u, newOffset, &newOffset, random, 0x10u);
  memset(inSalt, 0, sizeof(inSalt));
  bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])inSalt, dest, 0x30u, (unsigned __int8 (*)[32])outPRK);
  bdCryptoUtils::hkdfExpand(outPRK, 0x20u, "GceTGCsU2PYWfEYWJ0wA", 0x15u, result, 0x10u, BD_HASH_SHA256);
}

