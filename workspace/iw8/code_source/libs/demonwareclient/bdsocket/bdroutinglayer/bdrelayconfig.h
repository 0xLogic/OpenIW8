/*
==============
bdRelayFunctions::deriveSecrets
==============
*/
bool bdRelayFunctions::deriveSecrets(const unsigned int titleID, const unsigned __int64 userID, const unsigned __int8 *clientAuthSecret, const unsigned __int8 *relayAuthSecret, const unsigned __int8 *clientRandom, const unsigned __int8 *serverRandom, unsigned __int8 *sToCHmac, unsigned __int8 *sToCCipher, unsigned __int8 *cToSHmac)
{
  bool v11; 
  char *v12; 
  unsigned int v13; 
  unsigned __int8 *p_dest; 
  int v15; 
  bool result; 
  unsigned int offset; 
  double v18; 
  void *src; 
  void *v20; 
  unsigned __int8 inSalt[32]; 
  unsigned int dest; 
  double dest_4; 
  __int128 outBuffer[3]; 
  unsigned __int8 outPRK[32]; 

  v20 = (void *)serverRandom;
  src = (void *)clientAuthSecret;
  v18 = *(double *)&userID;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  dest = titleID;
  offset = 12;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  dest_4 = v18;
  v11 = bdBytePacker::appendBuffer(&dest, 0x4Cu, offset, &offset, src, 0x10u) && bdBytePacker::appendBuffer(&dest, 0x4Cu, offset, &offset, relayAuthSecret, 0x10u) && bdBytePacker::appendBuffer(&dest, 0x4Cu, offset, &offset, clientRandom, 0x10u) && bdBytePacker::appendBuffer(&dest, 0x4Cu, offset, &offset, v20, 0x10u);
  v12 = `bdRelayFunctions::printToken'::`2'::out;
  v13 = 0;
  p_dest = (unsigned __int8 *)&dest;
  while ( 1 )
  {
    v15 = bdSnprintf(v12, 2 * (256 - v13), "%02X", *p_dest);
    if ( v15 < 0 )
      break;
    ++v13;
    v12 += v15;
    ++p_dest;
    if ( v13 >= 0x4C )
      goto LABEL_13;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "debug/print-token", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayconfig.h", "bdRelayFunctions::printToken", 0x94u, "error in bdSnprintf.");
LABEL_13:
  *v12 = 0;
  bdLogMessage(BD_LOG_INFO, "info/", "bdRelayFunctions/deriveSecrets", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelayconfig.h", "bdRelayFunctions::deriveSecrets", 0xB4u, "Generating secrets, seed=[%s]", `bdRelayFunctions::printToken'::`2'::out);
  memset(inSalt, 0, sizeof(inSalt));
  result = 0;
  if ( v11 && bdCryptoUtils::hkdfExtractSHA256((const unsigned __int8 (*)[32])inSalt, (const unsigned __int8 *)&dest, 0x4Cu, (unsigned __int8 (*)[32])outPRK) && bdCryptoUtils::hkdfExpand(outPRK, 0x20u, "atOnU0BTUtmM0ju414F7", 0x15u, outBuffer, 0x30u, BD_HASH_SHA256) )
  {
    *(_OWORD *)sToCHmac = outBuffer[0];
    if ( sToCHmac )
    {
      *(_OWORD *)sToCCipher = outBuffer[1];
      if ( sToCCipher )
      {
        *(_OWORD *)cToSHmac = outBuffer[2];
        if ( cToSHmac )
          return 1;
      }
    }
  }
  return result;
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

