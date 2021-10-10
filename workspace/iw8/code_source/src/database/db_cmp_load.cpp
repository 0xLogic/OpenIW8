/*
==============
DB_CmpLoad_InflateBlock
==============
*/

bool __fastcall DB_CmpLoad_InflateBlock(DB_DecompressState *const state)
{
  return ?DB_CmpLoad_InflateBlock@@YA_NQEAUDB_DecompressState@@@Z(state);
}

/*
==============
DB_CmpLoad_ResetForNewFile
==============
*/

void __fastcall DB_CmpLoad_ResetForNewFile(DB_DecompressState *const state, const EncryptionInfo *const encryptInfo)
{
  ?DB_CmpLoad_ResetForNewFile@@YAXQEAUDB_DecompressState@@QEBUEncryptionInfo@@@Z(state, encryptInfo);
}

/*
==============
DB_Block_CopyFromStreamIn
==============
*/

void __fastcall DB_Block_CopyFromStreamIn(DB_ReadStream *stream, char *dest, unsigned int bytes)
{
  ?DB_Block_CopyFromStreamIn@@YAXPEAUDB_ReadStream@@PEADI@Z(stream, dest, bytes);
}

/*
==============
DB_CmpLoad_DumpState
==============
*/

void __fastcall DB_CmpLoad_DumpState(const DB_DecompressState *const state)
{
  ?DB_CmpLoad_DumpState@@YAXQEBUDB_DecompressState@@@Z(state);
}

/*
==============
DB_CmpLoad_OneTimeInit
==============
*/

void __fastcall DB_CmpLoad_OneTimeInit(DB_DecompressState *const state)
{
  ?DB_CmpLoad_OneTimeInit@@YAXQEAUDB_DecompressState@@@Z(state);
}

/*
==============
DB_Block_ReadData
==============
*/

char *__fastcall DB_Block_ReadData(DB_DecompressState *state, DB_ReadStream *stream, unsigned int bytes)
{
  return ?DB_Block_ReadData@@YAPEADPEAUDB_DecompressState@@PEAUDB_ReadStream@@I@Z(state, stream, bytes);
}

/*
==============
DB_CmpLoad_Decompress
==============
*/

bool __fastcall DB_CmpLoad_Decompress(DB_DecompressState *const state)
{
  return ?DB_CmpLoad_Decompress@@YA_NQEAUDB_DecompressState@@@Z(state);
}

/*
==============
DB_Block_AdvanceOutputAmount
==============
*/
void DB_Block_AdvanceOutputAmount(DB_DecompressState *const state, const unsigned int amount)
{
  unsigned __int64 v2; 

  v2 = amount;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 471, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  state->stream.avail_out -= v2;
  state->stream.next_out += v2;
  state->stream.total_out += v2;
  if ( state->uncompSizeLeft < v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 479, ASSERT_TYPE_ASSERT, "(state->uncompSizeLeft >= amount)", (const char *)&queryFormat, "state->uncompSizeLeft >= amount") )
    __debugbreak();
  state->uncompSizeLeft -= v2;
}

/*
==============
DB_Block_CopyFromStreamIn
==============
*/
void DB_Block_CopyFromStreamIn(DB_ReadStream *stream, char *dest, unsigned int bytes)
{
  size_t v3; 

  v3 = bytes;
  if ( stream->avail_in < bytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 236, ASSERT_TYPE_ASSERT, "(stream->avail_in >= bytes)", (const char *)&queryFormat, "stream->avail_in >= bytes") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_Block-memcpy1");
  memcpy_0(dest, stream->next_in, v3);
  ProfLoad_DB_End();
  stream->avail_in -= v3;
  stream->next_in += v3;
  stream->total_in += v3;
}

/*
==============
DB_Block_CopyFromUncompBuffer
==============
*/
void DB_Block_CopyFromUncompBuffer(DB_DecompressState *const state)
{
  unsigned __int64 avail_out; 
  unsigned int v3; 
  size_t v4; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 486, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state == (DB_DecompressState *const)-280624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 490, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( state->currentUncompDataPtr == state->currentUncompDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 491, ASSERT_TYPE_ASSERT, "(state->currentUncompDataPtr != state->currentUncompDataSize)", (const char *)&queryFormat, "state->currentUncompDataPtr != state->currentUncompDataSize") )
    __debugbreak();
  avail_out = state->stream.avail_out;
  if ( avail_out > state->currentUncompDataSize - state->currentUncompDataPtr )
    avail_out = state->currentUncompDataSize - state->currentUncompDataPtr;
  v3 = truncate_cast<unsigned int,unsigned __int64>(avail_out);
  v4 = v3;
  if ( v3 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 497, ASSERT_TYPE_ASSERT, "(amountToCopy <= MAX_COMPRESSION_BLOCK_SIZE)", (const char *)&queryFormat, "amountToCopy <= MAX_COMPRESSION_BLOCK_SIZE") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_Block-memcpy2");
  memcpy_0(state->stream.next_out, &state->currentUncompData[state->currentUncompDataPtr], v4);
  ProfLoad_DB_End();
  state->currentUncompDataPtr += v4;
  DB_Block_AdvanceOutputAmount(state, v4);
}

/*
==============
DB_Block_DecompressData
==============
*/
__int64 DB_Block_DecompressData(DB_DecompressState *const state, const void *const compBuffer, void *const destBuffer, const unsigned int compressedSize, const unsigned int destSize)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 437, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !compBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 438, ASSERT_TYPE_ASSERT, "(compBuffer)", (const char *)&queryFormat, "compBuffer") )
    __debugbreak();
  if ( !destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 439, ASSERT_TYPE_ASSERT, "(destBuffer)", (const char *)&queryFormat, "destBuffer") )
    __debugbreak();
  ProfLoad_DB_Begin("Block decompression func");
  if ( !state->decompressionFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 442, ASSERT_TYPE_ASSERT, "(state->decompressionFunc)", (const char *)&queryFormat, "state->decompressionFunc") )
    __debugbreak();
  if ( state->decompressionFunc(state, compBuffer, destBuffer, compressedSize, destSize) )
  {
    ProfLoad_DB_End();
    return 1i64;
  }
  else
  {
    Com_PrintError(10, "DB_Block_DecompressData: Error decompressing data.\n");
    Com_PrintError(10, "\tcompBuffer        = 0x%p\n", compBuffer);
    Com_PrintError(10, "\tdestBuffer        = 0x%p\n", destBuffer);
    Com_PrintError(10, "\tcompressedSize    = %u\n", compressedSize);
    Com_PrintError(10, "\tdestSize          = %u\n", destSize);
    DB_CmpLoad_DumpState(state);
    return 0i64;
  }
}

/*
==============
DB_Block_DecompressLZ4
==============
*/
__int64 DB_Block_DecompressLZ4(DB_DecompressState *const state, const void *const in, void *const out, const unsigned int inSize, const unsigned int outSize)
{
  if ( j_LZ4_decompress_fast((const char *)in, (char *)out, outSize) >= 0 )
    return 1i64;
  Com_PrintError(10, "DB_Block_DecompressLZ4: Error decompressing data.\n");
  Com_PrintError(10, "\tin      = 0x%p\n", in);
  Com_PrintError(10, "\tout     = 0x%p\n", out);
  Com_PrintError(10, "\tinSize  = %u\n", inSize);
  Com_PrintError(10, "\toutSize = %u\n", outSize);
  DB_CmpLoad_DumpState(state);
  return 0i64;
}

/*
==============
DB_Block_DecompressNone
==============
*/
__int64 DB_Block_DecompressNone(DB_DecompressState *const __formal, const void *const in, void *const out, const unsigned int inSize, const unsigned int outSize)
{
  size_t v6; 

  v6 = inSize;
  if ( inSize > outSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 142, ASSERT_TYPE_ASSERT, "(inSize <= outSize)", (const char *)&queryFormat, "inSize <= outSize") )
    __debugbreak();
  memcpy_0(out, in, v6);
  return 1i64;
}

/*
==============
DB_Block_DecompressXB3Zlib
==============
*/
__int64 DB_Block_DecompressXB3Zlib(DB_DecompressState *const state, const void *const in, void *const out, const unsigned int inSize, const unsigned int outSize)
{
  unsigned __int64 v5; 
  unsigned int v9; 
  char *fmt; 
  char dest[128]; 

  v5 = inSize;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 163, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  v9 = XB3_HwZlib_Decompress(in, v5, out);
  if ( !v9 )
    return 1i64;
  Com_PrintError(10, "DB_Block_DecompressXB3Zlib: Error decompressing data.\n");
  Com_PrintError(10, "\tin                 = 0x%p\n", in);
  Com_PrintError(10, "\tout                = 0x%p\n", out);
  Com_PrintError(10, "\tinSize             = %u\n", (unsigned int)v5);
  Com_PrintError(10, "\toutSize            = %u\n", outSize);
  Com_PrintError(10, "\tdmaErrorCode       = 0x%08x\n", v9);
  DB_CmpLoad_DumpState(state);
  LODWORD(fmt) = outSize;
  Com_sprintf_truncate<128>((char (*)[128])dest, "DB_Block_DecompressXB3Zlib::Error %u, In: %u, Out: %u\n", v9, (unsigned int)v5, fmt);
  DLog_RecordErrorEvent(DLOG_ERROR_CODE_SYS_ERROR, dest, NULL);
  return 0i64;
}

/*
==============
DB_Block_NewFile
==============
*/
char *DB_Block_NewFile(DB_DecompressState *state, DB_ReadStream *stream)
{
  char *result; 
  char *v5; 
  unsigned int v6; 
  char v7; 
  __int64 (__fastcall *v8)(DB_DecompressState *const, const void *const, void *const, const unsigned int, const unsigned int); 
  __int64 v9; 
  __int64 v10; 
  XCompressionSettings settings; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 323, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 324, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( ((__int64)stream->next_in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 325, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0") )
    __debugbreak();
  if ( state->currentUncompDataPtr != state->currentUncompDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 327, ASSERT_TYPE_ASSERT, "(state->currentUncompDataPtr == state->currentUncompDataSize)", (const char *)&queryFormat, "state->currentUncompDataPtr == state->currentUncompDataSize") )
    __debugbreak();
  if ( state->uncompSizeLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 328, ASSERT_TYPE_ASSERT, "(state->uncompSizeLeft == 0)", (const char *)&queryFormat, "state->uncompSizeLeft == 0") )
    __debugbreak();
  if ( state->pendingPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 329, ASSERT_TYPE_ASSERT, "(state->pendingPadding == 0)", (const char *)&queryFormat, "state->pendingPadding == 0") )
    __debugbreak();
  if ( state->currentHeader.compressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 330, ASSERT_TYPE_ASSERT, "(state->currentHeader.compressedSize == 0)", (const char *)&queryFormat, "state->currentHeader.compressedSize == 0") )
    __debugbreak();
  if ( state->currentHeader.uncompressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 331, ASSERT_TYPE_ASSERT, "(state->currentHeader.uncompressedSize == 0)", (const char *)&queryFormat, "state->currentHeader.uncompressedSize == 0") )
    __debugbreak();
  result = DB_Block_ReadData(state, stream, 8u);
  v5 = result;
  if ( result )
  {
    state->uncompSizeLeft = *(unsigned int *)result;
    v6 = *((_DWORD *)result + 1) & 0xFFFFFF;
    if ( v6 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 351, ASSERT_TYPE_ASSERT, "( castedHeader->blockSize ) <= ( MAX_COMPRESSION_BLOCK_SIZE )", "%s <= %s\n\t%u, %u", "castedHeader->blockSize", "MAX_COMPRESSION_BLOCK_SIZE", v6, 0x20000) )
      __debugbreak();
    v7 = v5[7];
    if ( v7 == 1 )
    {
      v8 = DB_Block_DecompressNone;
      goto LABEL_37;
    }
    if ( (unsigned __int8)v7 > 3u )
    {
      if ( (unsigned __int8)v7 <= 5u )
      {
        v8 = DB_Block_DecompressLZ4;
        goto LABEL_37;
      }
      if ( (unsigned __int8)(v7 - 8) <= 1u )
      {
        v8 = DB_Block_DecompressXB3Zlib;
LABEL_37:
        state->decompressionFunc = (int (__fastcall *)(DB_DecompressState *, const void *, void *, unsigned int, unsigned int))v8;
        goto LABEL_38;
      }
    }
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D1DA40, 664i64);
LABEL_38:
    *(_WORD *)&settings.compType = 2;
    settings.blockSize = *((_DWORD *)v5 + 1) & 0xFFFFFF;
    settings.blockType = v5[7];
    if ( DB_GetCompressionDestBufferMaxBySettings(&settings, *((_DWORD *)v5 + 1) & 0xFFFFFF) > 0x24800 )
    {
      LODWORD(v10) = DB_GetCompressionDestBufferMaxBySettings(&settings, *((_DWORD *)v5 + 1) & 0xFFFFFF);
      LODWORD(v9) = 149504;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 428, ASSERT_TYPE_ASSERT, "( MAX_PENDING_COMPRESSION_BLOCK_SIZE ) >= ( DB_GetCompressionDestBufferMaxBySettings( &bufferSizeCheckSettings, castedHeader->blockSize ) )", "%s >= %s\n\t%i, %i", "MAX_PENDING_COMPRESSION_BLOCK_SIZE", "DB_GetCompressionDestBufferMaxBySettings( &bufferSizeCheckSettings, castedHeader->blockSize )", v9, v10) )
        __debugbreak();
    }
    return (char *)1;
  }
  return result;
}

/*
==============
DB_Block_ReadData
==============
*/
char *DB_Block_ReadData(DB_DecompressState *state, DB_ReadStream *stream, unsigned int bytes)
{
  unsigned __int64 v3; 
  char *result; 
  unsigned int pendingSize; 
  __int64 v8; 
  unsigned __int64 avail_in; 
  unsigned int v10; 
  __int64 v11; 
  char *v12; 

  v3 = bytes;
  if ( bytes <= 0x24800 )
  {
    pendingSize = state->pendingSize;
    if ( !pendingSize )
      goto LABEL_9;
    if ( pendingSize >= bytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 284, ASSERT_TYPE_ASSERT, "(state->pendingSize < bytes)", (const char *)&queryFormat, "state->pendingSize < bytes") )
      __debugbreak();
    v8 = state->pendingSize;
    if ( stream->avail_in >= (unsigned int)(v3 - v8) )
    {
      DB_Block_CopyFromStreamIn(stream, &state->pendingData[v8], v3 - v8);
      result = state->pendingData;
      state->pendingSize = 0;
    }
    else
    {
LABEL_9:
      avail_in = stream->avail_in;
      if ( avail_in < v3 || (result = (char *)stream->next_in, avail_in -= v3, stream->total_in += v3, stream->avail_in = avail_in, stream->next_in = (unsigned __int8 *)&result[v3], !result) )
      {
        v10 = truncate_cast<unsigned int,unsigned __int64>(avail_in);
        if ( v10 + state->pendingSize > (unsigned int)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 306, ASSERT_TYPE_ASSERT, "(( state->pendingSize + inputSize ) <= bytes)", (const char *)&queryFormat, "( state->pendingSize + inputSize ) <= bytes") )
          __debugbreak();
        v11 = state->pendingSize;
        state->pendingSize = v11 + v10;
        v12 = &state->pendingData[v11];
        if ( (unsigned int)v11 + v10 > 0x24800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 309, ASSERT_TYPE_ASSERT, "( state->pendingSize ) <= ( MAX_PENDING_COMPRESSION_BLOCK_SIZE )", "%s <= %s\n\t%u, %u", "state->pendingSize", "MAX_PENDING_COMPRESSION_BLOCK_SIZE", v11 + v10, 149504) )
          __debugbreak();
        DB_Block_CopyFromStreamIn(stream, v12, v10);
        return 0i64;
      }
    }
  }
  else
  {
    Com_PrintError(10, "DB_Block_ReadData: Error decompressing data.\n");
    Com_PrintError(10, "\tbytes                              = %u\n", (unsigned int)v3);
    Com_PrintError(10, "\tMAX_PENDING_COMPRESSION_BLOCK_SIZE = %u\n", 149504i64);
    DB_CmpLoad_DumpState(state);
    return 0i64;
  }
  return result;
}

/*
==============
DB_Block_TryNewBlock
==============
*/
__int64 DB_Block_TryNewBlock(DB_DecompressState *const state)
{
  unsigned int compressedSize; 
  char *Data; 
  unsigned __int8 *v4; 
  const EncryptionInfo *encryptInfo; 
  int v6; 
  const char *v7; 
  unsigned __int64 uncompressedSize; 
  const dvar_t *v9; 
  unsigned int flags; 
  unsigned __int8 *next_out; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 
  symmetric_CTR ctr; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 541, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state == (DB_DecompressState *const)-280624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 544, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( state->currentUncompDataPtr != state->currentUncompDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 545, ASSERT_TYPE_ASSERT, "(state->currentUncompDataPtr == state->currentUncompDataSize)", (const char *)&queryFormat, "state->currentUncompDataPtr == state->currentUncompDataSize") )
    __debugbreak();
  if ( !state->uncompSizeLeft && !(unsigned int)DB_Block_NewFile(state, &state->stream) )
    return 0i64;
  compressedSize = state->currentHeader.compressedSize;
  if ( !compressedSize )
  {
    if ( state->currentHeader.uncompressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 557, ASSERT_TYPE_ASSERT, "(state->currentHeader.uncompressedSize == 0)", (const char *)&queryFormat, "state->currentHeader.uncompressedSize == 0") )
      __debugbreak();
    if ( state->pendingPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 558, ASSERT_TYPE_ASSERT, "(state->pendingPadding == 0)", (const char *)&queryFormat, "state->pendingPadding == 0") )
      __debugbreak();
    Data = DB_Block_ReadData(state, &state->stream, 0xCu);
    if ( !Data )
      return 0i64;
    *(double *)&state->currentHeader.compressedSize = *(double *)Data;
    state->currentHeader.encryptionCTR = *((_DWORD *)Data + 2);
    if ( !state->currentHeader.compressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 571, ASSERT_TYPE_ASSERT, "(state->currentHeader.compressedSize)", (const char *)&queryFormat, "state->currentHeader.compressedSize") )
      __debugbreak();
    if ( !state->currentHeader.uncompressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 572, ASSERT_TYPE_ASSERT, "(state->currentHeader.uncompressedSize)", (const char *)&queryFormat, "state->currentHeader.uncompressedSize") )
      __debugbreak();
    if ( state->currentHeader.compressedSize > 0x24800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 573, ASSERT_TYPE_ASSERT, "( state->currentHeader.compressedSize ) <= ( MAX_PENDING_COMPRESSION_BLOCK_SIZE )", "%s <= %s\n\t%u, %u", "state->currentHeader.compressedSize", "MAX_PENDING_COMPRESSION_BLOCK_SIZE", state->currentHeader.compressedSize, 149504) )
      __debugbreak();
    if ( state->currentHeader.uncompressedSize > 0x20000 )
    {
      LODWORD(v15) = 0x20000;
      LODWORD(v14) = state->currentHeader.uncompressedSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 574, ASSERT_TYPE_ASSERT, "( state->currentHeader.uncompressedSize ) <= ( MAX_COMPRESSION_BLOCK_SIZE )", "%s <= %s\n\t%u, %u", "state->currentHeader.uncompressedSize", "MAX_COMPRESSION_BLOCK_SIZE", v14, v15) )
        __debugbreak();
    }
    compressedSize = state->currentHeader.compressedSize;
    state->pendingPadding = compressedSize & 3;
    if ( (compressedSize & 3) != 0 )
      state->pendingPadding = 4 - (compressedSize & 3);
  }
  v4 = (unsigned __int8 *)DB_Block_ReadData(state, &state->stream, compressedSize + state->pendingPadding);
  if ( v4 )
  {
    encryptInfo = state->encryptInfo;
    if ( encryptInfo )
    {
      if ( !encryptInfo->header.isEncrypted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 516, ASSERT_TYPE_ASSERT, "(state->encryptInfo->header.isEncrypted)", (const char *)&queryFormat, "state->encryptInfo->header.isEncrypted") )
        __debugbreak();
      v6 = DB_SetupCTRWithKey(&ctr, state->currentHeader.encryptionCTR, state->encryptInfo->header.IV, state->encryptInfo->privateKey);
      if ( v6 )
      {
        v7 = j_error_to_string(v6);
        Com_PrintError(10, "Could not start cipher in CTR mode: %s\n", v7);
      }
      else if ( !DB_Decrypt(v4, state->pendingPadding + state->currentHeader.compressedSize, &ctr) )
      {
        Com_PrintError(10, "%s: Decrypt failure!!\n", "DB_Block_Decrypt");
      }
    }
    uncompressedSize = state->currentHeader.uncompressedSize;
    state->pendingPadding = 0;
    if ( state->stream.avail_out < uncompressedSize )
      goto LABEL_75;
    v9 = DCONST_DVARBOOL_db_allowDirectDecompression;
    if ( !DCONST_DVARBOOL_db_allowDirectDecompression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_allowDirectDecompression") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v9->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v9->name) )
        __debugbreak();
    }
    if ( v9->current.enabled && (__int64 (__fastcall *)(DB_DecompressState *const, const void *const, void *const, const unsigned int, const unsigned int))state->decompressionFunc == DB_Block_DecompressXB3Zlib && (next_out = state->stream.next_out, ((unsigned __int8)next_out & 3) == 0) && Mem_Paged_IsInVirtualGrab(next_out) && !Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, state->stream.next_out) )
    {
      if ( ((__int64)state->stream.next_in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 625, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0") )
        __debugbreak();
      if ( (unsigned int)DB_Block_DecompressData(state, v4, state->stream.next_out, state->currentHeader.compressedSize, state->currentHeader.uncompressedSize) )
      {
        DB_Block_AdvanceOutputAmount(state, state->currentHeader.uncompressedSize);
LABEL_71:
        *(_QWORD *)&state->currentHeader.compressedSize = 0i64;
        state->currentHeader.encryptionCTR = 0;
        return 1i64;
      }
    }
    else
    {
LABEL_75:
      if ( ((unsigned __int8)state & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 639, ASSERT_TYPE_ASSERT, "(IsAligned( state->currentUncompData, 4 ))", (const char *)&queryFormat, "IsAligned( state->currentUncompData, 4 )") )
        __debugbreak();
      v12 = state->currentHeader.uncompressedSize;
      if ( (unsigned int)v12 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 640, ASSERT_TYPE_ASSERT, "( state->currentHeader.uncompressedSize ) <= ( ( sizeof( *array_counter( state->currentUncompData ) ) + 0 ) )", "%s <= %s\n\t%llu, %llu", "state->currentHeader.uncompressedSize", "ARRAY_COUNT( state->currentUncompData )", v12, 0x20000i64) )
        __debugbreak();
      if ( (unsigned int)DB_Block_DecompressData(state, v4, state, state->currentHeader.compressedSize, state->currentHeader.uncompressedSize) )
      {
        *(_QWORD *)&state->currentUncompDataSize = state->currentHeader.uncompressedSize;
        DB_Block_CopyFromUncompBuffer(state);
        goto LABEL_71;
      }
    }
  }
  return 0i64;
}

/*
==============
DB_CmpLoad_Decompress
==============
*/
char DB_CmpLoad_Decompress(DB_DecompressState *const state)
{
  DB_ReadStream *p_stream; 
  __int64 compressor; 
  unsigned __int64 avail_in; 
  unsigned __int8 *next_in; 
  unsigned __int64 avail_out; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 751, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  p_stream = &state->stream;
  if ( state == (DB_DecompressState *const)-280624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 754, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  compressor = (unsigned int)state->stream.compressor;
  if ( !(_DWORD)compressor )
  {
    avail_in = state->stream.avail_in;
    if ( avail_in < 4 )
      return 1;
    next_in = p_stream->next_in;
    compressor = *p_stream->next_in;
    state->stream.compressor = compressor;
    if ( next_in[1] != 73 || next_in[2] != 87 || next_in[3] != 67 )
    {
      Com_PrintError(10, "DB_AuthLoad_InflateInternal: Bad fastfile data header sentinels.\n");
      DB_CmpLoad_DumpState(state);
      return 0;
    }
    state->stream.total_in += 4i64;
    state->stream.avail_in = avail_in - 4;
    p_stream->next_in = next_in + 4;
  }
  if ( (_DWORD)compressor == 1 )
  {
    avail_out = state->stream.avail_in;
    if ( avail_out >= p_stream->avail_out )
      avail_out = p_stream->avail_out;
    if ( !p_stream->next_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 733, ASSERT_TYPE_ASSERT, "(stream->next_out != 0)", (const char *)&queryFormat, "stream->next_out != NULL") )
      __debugbreak();
    if ( !p_stream->next_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 734, ASSERT_TYPE_ASSERT, "(stream->next_in != 0)", (const char *)&queryFormat, "stream->next_in != NULL") )
      __debugbreak();
    memcpy_0(p_stream->next_out, p_stream->next_in, avail_out);
    p_stream->avail_in -= avail_out;
    p_stream->next_in += avail_out;
    p_stream->total_in += avail_out;
    p_stream->avail_out -= avail_out;
    p_stream->next_out += avail_out;
    p_stream->total_out += avail_out;
  }
  else
  {
    if ( (_DWORD)compressor != 2 )
    {
      Com_PrintError(10, "DB_AuthLoad_InflateInternal: Invalid compressor type. %d\n", compressor);
      DB_CmpLoad_DumpState(state);
      return 0;
    }
    if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 662, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    if ( state == (DB_DecompressState *const)-280624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 665, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
      __debugbreak();
    if ( ((__int64)p_stream->next_in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 666, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0") )
      __debugbreak();
    if ( state->stream.avail_out )
      goto LABEL_54;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 667, ASSERT_TYPE_ASSERT, "(stream->avail_out)", (const char *)&queryFormat, "stream->avail_out") )
      __debugbreak();
    if ( state->stream.avail_out )
    {
LABEL_54:
      do
      {
        if ( state->currentUncompDataPtr == state->currentUncompDataSize )
        {
          if ( !(unsigned int)DB_Block_TryNewBlock(state) )
            break;
        }
        else
        {
          DB_Block_CopyFromUncompBuffer(state);
        }
      }
      while ( state->stream.avail_out );
      if ( state->stream.avail_out && state->currentUncompDataPtr != state->currentUncompDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 688, ASSERT_TYPE_ASSERT, "(state->currentUncompDataPtr == state->currentUncompDataSize)", (const char *)&queryFormat, "state->currentUncompDataPtr == state->currentUncompDataSize") )
        __debugbreak();
    }
    if ( state->stream.avail_in && state->stream.avail_out )
    {
      Com_PrintError(10, "DB_AuthLoad_InflateBlockInternal: Error decompressing data.\n");
      DB_CmpLoad_DumpState(state);
      return 0;
    }
  }
  return 1;
}

/*
==============
DB_CmpLoad_DumpState
==============
*/
void DB_CmpLoad_DumpState(const DB_DecompressState *const state)
{
  bool outTitleSuspended; 
  bool outBusy; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 801, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  Com_Printf(0, "\nstate:\n");
  Com_Printf(0, "\tuncompSizeLeft         = %zu\n", state->uncompSizeLeft);
  Com_Printf(0, "\tcurrentUncompData      = 0x%p\n", state);
  Com_Printf(0, "\tcurrentUncompDataSize  = %u\n", state->currentUncompDataSize);
  Com_Printf(0, "\tcurrentUncompDataPtr   = %u\n", state->currentUncompDataPtr);
  Com_Printf(0, "\tpendingData            = 0x%p\n", state->pendingData);
  Com_Printf(0, "\tpendingSize            = %u\n", state->pendingSize);
  Com_Printf(0, "\tpendingPadding         = %u\n", state->pendingPadding);
  Com_Printf(0, "\tdecompressionFunc      = 0x%p\n", state->decompressionFunc);
  Com_Printf(0, "\nstate->currentHeader:\n");
  Com_Printf(0, "\tcompressedSize         = %u\n", state->currentHeader.compressedSize);
  Com_Printf(0, "\tuncompressedSize       = %u\n", state->currentHeader.uncompressedSize);
  outBusy = 0;
  outTitleSuspended = 0;
  XB3_HwZlib_GetStatus(&outBusy, &outTitleSuspended);
  Com_Printf(0, "\nXB3:\n");
  Com_Printf(0, "\ttitleSuspended         = %d\n", outTitleSuspended);
  Com_Printf(0, "\tdma2Busy               = %d\n", outBusy);
}

/*
==============
DB_CmpLoad_InflateBlock
==============
*/
char DB_CmpLoad_InflateBlock(DB_DecompressState *const state)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 662, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( state == (DB_DecompressState *const)-280624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 665, ASSERT_TYPE_ASSERT, "(stream)", (const char *)&queryFormat, "stream") )
    __debugbreak();
  if ( ((__int64)state->stream.next_in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 666, ASSERT_TYPE_ASSERT, "(( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0)", (const char *)&queryFormat, "( reinterpret_cast<size_t>( stream->next_in ) & 0x03 ) == 0") )
    __debugbreak();
  if ( state->stream.avail_out )
    goto LABEL_29;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 667, ASSERT_TYPE_ASSERT, "(stream->avail_out)", (const char *)&queryFormat, "stream->avail_out") )
    __debugbreak();
  if ( state->stream.avail_out )
  {
LABEL_29:
    do
    {
      if ( state->currentUncompDataPtr == state->currentUncompDataSize )
      {
        if ( !(unsigned int)DB_Block_TryNewBlock(state) )
          break;
      }
      else
      {
        DB_Block_CopyFromUncompBuffer(state);
      }
    }
    while ( state->stream.avail_out );
    if ( state->stream.avail_out && state->currentUncompDataPtr != state->currentUncompDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 688, ASSERT_TYPE_ASSERT, "(state->currentUncompDataPtr == state->currentUncompDataSize)", (const char *)&queryFormat, "state->currentUncompDataPtr == state->currentUncompDataSize") )
      __debugbreak();
  }
  if ( !state->stream.avail_in || !state->stream.avail_out )
    return 1;
  Com_PrintError(10, "DB_AuthLoad_InflateBlockInternal: Error decompressing data.\n");
  DB_CmpLoad_DumpState(state);
  return 0;
}

/*
==============
DB_CmpLoad_OneTimeInit
==============
*/
void DB_CmpLoad_OneTimeInit(DB_DecompressState *const state)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 707, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( ((unsigned __int8)state & 0x7F) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 709, ASSERT_TYPE_ASSERT, "(IsAligned( &state->currentUncompData, MIN_ALIGNMENT_FOR_BUFFERS ))", (const char *)&queryFormat, "IsAligned( &state->currentUncompData, MIN_ALIGNMENT_FOR_BUFFERS )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 710, ASSERT_TYPE_ASSERT, "(IsAligned( &state->pendingData, MIN_ALIGNMENT_FOR_BUFFERS ))", (const char *)&queryFormat, "IsAligned( &state->pendingData, MIN_ALIGNMENT_FOR_BUFFERS )") )
      __debugbreak();
  }
  state->stream.next_in = NULL;
  state->stream.avail_in = 0i64;
  state->stream.total_in = 0i64;
  state->stream.next_out = NULL;
  state->stream.avail_out = 0i64;
  state->stream.total_out = 0i64;
  *(_QWORD *)&state->stream.compressor = 0i64;
}

/*
==============
DB_CmpLoad_ResetForNewFile
==============
*/
void DB_CmpLoad_ResetForNewFile(DB_DecompressState *const state, const EncryptionInfo *const encryptInfo)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_load.cpp", 52, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  state->uncompSizeLeft = 0i64;
  *(_QWORD *)&state->currentUncompDataSize = 0i64;
  *(_QWORD *)&state->pendingSize = 0i64;
  if ( !encryptInfo || !encryptInfo->header.isEncrypted )
    encryptInfo = NULL;
  state->encryptInfo = encryptInfo;
  *(_QWORD *)&state->currentHeader.compressedSize = 0i64;
  state->currentHeader.encryptionCTR = 0;
}

