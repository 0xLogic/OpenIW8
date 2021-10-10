/*
==============
indyfs_LZ4F_compressBegin
==============
*/
unsigned __int64 indyfs_LZ4F_compressBegin(indyfs_LZ4F_cctx_s *cctxPtr, void *dstBuffer, unsigned __int64 dstCapacity, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  return j_indyfs_LZ4F_compressBegin_usingCDict(cctxPtr, dstBuffer, dstCapacity, NULL, preferencesPtr);
}

/*
==============
indyfs_LZ4F_compressBegin_usingCDict
==============
*/
__int64 indyfs_LZ4F_compressBegin_usingCDict(indyfs_LZ4F_cctx_s *cctxPtr, void *dstBuffer, unsigned __int64 dstCapacity, const indyfs_LZ4F_CDict_s *cdict, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  const indyfs_LZ4F_preferences_t *v9; 
  int compressionLevel; 
  unsigned __int16 v11; 
  indyfs_LZ4_stream_u *StreamHC; 
  indyfs_LZ4_streamHC_u *indyfs_LZ4CtxPtr; 
  indyfs_LZ4F_blockSizeID_t blockSizeID; 
  bool v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  indyfs_LZ4F_blockMode_t blockMode; 
  unsigned __int64 v19; 
  unsigned __int8 *tmpBuff; 
  unsigned __int8 *v21; 
  char v22; 
  _BYTE *v23; 
  unsigned __int64 contentSize; 
  unsigned int dictID; 
  __int64 v26[7]; 

  if ( dstCapacity < 0x13 )
    return -11i64;
  v26[0] = 0i64;
  v26[1] = 0i64;
  v9 = (const indyfs_LZ4F_preferences_t *)v26;
  if ( preferencesPtr )
    v9 = preferencesPtr;
  memset(&v26[2], 0, 40);
  cctxPtr->prefs.frameInfo = v9->frameInfo;
  *(_OWORD *)&cctxPtr->prefs.compressionLevel = *(_OWORD *)&v9->compressionLevel;
  *(double *)&cctxPtr->prefs.reserved[1] = *(double *)&v9->reserved[1];
  compressionLevel = cctxPtr->prefs.compressionLevel;
  v11 = (compressionLevel >= 3) + 1;
  if ( cctxPtr->indyfs_LZ4CtxAlloc >= v11 )
  {
    if ( cctxPtr->indyfs_LZ4CtxState == v11 )
      goto LABEL_16;
    indyfs_LZ4CtxPtr = (indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr;
    if ( compressionLevel >= 3 )
      j_indyfs_LZ4_resetStreamHC(indyfs_LZ4CtxPtr, compressionLevel);
    else
      j_indyfs_LZ4_resetStream((indyfs_LZ4_stream_u *)indyfs_LZ4CtxPtr);
  }
  else
  {
    free(cctxPtr->indyfs_LZ4CtxPtr);
    if ( cctxPtr->prefs.compressionLevel >= 3 )
      StreamHC = (indyfs_LZ4_stream_u *)j_indyfs_LZ4_createStreamHC();
    else
      StreamHC = j_indyfs_LZ4_createStream();
    cctxPtr->indyfs_LZ4CtxPtr = StreamHC;
    if ( !StreamHC )
      return -9i64;
    cctxPtr->indyfs_LZ4CtxAlloc = v11;
  }
  cctxPtr->indyfs_LZ4CtxState = v11;
LABEL_16:
  blockSizeID = cctxPtr->prefs.frameInfo.blockSizeID;
  v15 = cctxPtr->prefs.frameInfo.blockSizeID == indyfs_LZ4F_default;
  if ( cctxPtr->prefs.frameInfo.blockSizeID == indyfs_LZ4F_default )
  {
    cctxPtr->prefs.frameInfo.blockSizeID = indyfs_LZ4F_max64KB;
    blockSizeID = indyfs_LZ4F_max64KB;
    v15 = 0;
  }
  if ( v15 )
    blockSizeID = indyfs_LZ4F_max64KB;
  v16 = (unsigned int)(blockSizeID - 4);
  if ( (unsigned int)v16 <= 3 )
    v17 = qword_144754980[v16];
  else
    v17 = -2i64;
  blockMode = cctxPtr->prefs.frameInfo.blockMode;
  v19 = 0i64;
  cctxPtr->maxBlockSize = v17;
  if ( v9->autoFlush )
  {
    if ( blockMode == indyfs_LZ4F_blockLinked )
      v19 = 0x10000i64;
  }
  else
  {
    if ( blockMode == indyfs_LZ4F_blockLinked )
      v19 = 0x20000i64;
    v19 += v17;
  }
  if ( cctxPtr->maxBufferSize < v19 )
  {
    tmpBuff = cctxPtr->tmpBuff;
    cctxPtr->maxBufferSize = 0i64;
    free(tmpBuff);
    v21 = (unsigned __int8 *)calloc(1ui64, v19);
    cctxPtr->tmpBuff = v21;
    if ( !v21 )
      return -9i64;
    cctxPtr->maxBufferSize = v19;
  }
  cctxPtr->tmpIn = cctxPtr->tmpBuff;
  cctxPtr->tmpInSize = 0i64;
  j_indyfs_XXH32_reset(&cctxPtr->indyfs_XXH, 0);
  v15 = cctxPtr->prefs.frameInfo.blockMode == indyfs_LZ4F_blockLinked;
  cctxPtr->cdict = cdict;
  if ( v15 )
    indyfs_LZ4F_initStream(cctxPtr->indyfs_LZ4CtxPtr, cdict, cctxPtr->prefs.compressionLevel);
  if ( v9->compressionLevel >= 3 )
    j_indyfs_LZ4_favorDecompressionSpeed((indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr, v9->favorDecSpeed);
  *(_DWORD *)dstBuffer = 407708164;
  v22 = 16;
  if ( cctxPtr->prefs.frameInfo.contentSize )
    v22 = 18;
  *((_BYTE *)dstBuffer + 4) = (cctxPtr->prefs.frameInfo.dictID != 0) + 4 * (v22 + (cctxPtr->prefs.frameInfo.contentChecksumFlag & 1) + 4 * ((cctxPtr->prefs.frameInfo.blockChecksumFlag & 1) + 2 * (cctxPtr->prefs.frameInfo.blockMode & 1)));
  *((_BYTE *)dstBuffer + 5) = 16 * (cctxPtr->prefs.frameInfo.blockSizeID & 7);
  v23 = (char *)dstBuffer + 6;
  contentSize = cctxPtr->prefs.frameInfo.contentSize;
  if ( contentSize )
  {
    *v23 = contentSize;
    *((_BYTE *)dstBuffer + 7) = BYTE1(contentSize);
    *((_BYTE *)dstBuffer + 8) = BYTE2(contentSize);
    *((_BYTE *)dstBuffer + 9) = BYTE3(contentSize);
    *((_BYTE *)dstBuffer + 10) = BYTE4(contentSize);
    *((_BYTE *)dstBuffer + 11) = BYTE5(contentSize);
    *((_BYTE *)dstBuffer + 12) = BYTE6(contentSize);
    *((_BYTE *)dstBuffer + 13) = HIBYTE(contentSize);
    v23 = (char *)dstBuffer + 14;
    cctxPtr->totalInSize = 0i64;
  }
  dictID = cctxPtr->prefs.frameInfo.dictID;
  if ( dictID )
  {
    *(_DWORD *)v23 = dictID;
    v23 += 4;
  }
  *v23 = (unsigned __int16)j_indyfs_XXH32((char *)dstBuffer + 4, v23 - ((_BYTE *)dstBuffer + 4), 0) >> 8;
  cctxPtr->cStage = 1;
  return v23 - (_BYTE *)dstBuffer + 1;
}

/*
==============
indyfs_LZ4F_compressBlock
==============
*/
int indyfs_LZ4F_compressBlock(void *ctx, const char *src, char *dst, int srcSize, int dstCapacity, int level, const indyfs_LZ4F_CDict_s *cdict)
{
  int acceleration; 

  if ( level >= -1 )
    acceleration = 1;
  else
    acceleration = -level;
  indyfs_LZ4F_initStream(ctx, cdict, level);
  if ( cdict )
    return j_indyfs_LZ4_compress_fast_continue((indyfs_LZ4_stream_u *)ctx, src, dst, srcSize, dstCapacity, acceleration);
  else
    return j_indyfs_LZ4_compress_fast_extState_fastReset(ctx, src, dst, srcSize, dstCapacity, acceleration);
}

/*
==============
indyfs_LZ4F_compressBlockHC
==============
*/
int indyfs_LZ4F_compressBlockHC(void *ctx, const char *src, char *dst, int srcSize, int dstCapacity, int level, const indyfs_LZ4F_CDict_s *cdict)
{
  indyfs_LZ4F_initStream(ctx, cdict, level);
  if ( cdict )
    return j_indyfs_LZ4_compress_HC_continue((indyfs_LZ4_streamHC_u *)ctx, src, dst, srcSize, dstCapacity);
  else
    return j_indyfs_LZ4_compress_HC_extStateHC_fastReset(ctx, src, dst, srcSize, dstCapacity, level);
}

/*
==============
indyfs_LZ4F_compressBlockHC_continue
==============
*/

int __fastcall indyfs_LZ4F_compressBlockHC_continue(void *ctx, const char *src, char *dst, int srcSize, int dstCapacity, int level, const indyfs_LZ4F_CDict_s *cdict)
{
  return j_indyfs_LZ4_compress_HC_continue((indyfs_LZ4_streamHC_u *)ctx, src, dst, srcSize, dstCapacity);
}

/*
==============
indyfs_LZ4F_compressBlock_continue
==============
*/
int indyfs_LZ4F_compressBlock_continue(void *ctx, const char *src, char *dst, int srcSize, int dstCapacity, int level, const indyfs_LZ4F_CDict_s *cdict)
{
  int acceleration; 

  if ( level >= -1 )
    acceleration = 1;
  else
    acceleration = -level;
  return j_indyfs_LZ4_compress_fast_continue((indyfs_LZ4_stream_u *)ctx, src, dst, srcSize, dstCapacity, acceleration);
}

/*
==============
indyfs_LZ4F_compressBound
==============
*/
unsigned __int64 indyfs_LZ4F_compressBound(unsigned __int64 srcSize, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  return indyfs_LZ4F_compressBound_internal(srcSize, preferencesPtr, 0xFFFFFFFFFFFFFFFFui64);
}

/*
==============
indyfs_LZ4F_compressBound_internal
==============
*/
__int64 indyfs_LZ4F_compressBound_internal(unsigned __int64 srcSize, const indyfs_LZ4F_preferences_t *preferencesPtr, unsigned __int64 alreadyBuffered)
{
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0i64;
  v4 = (int *)&v14;
  if ( preferencesPtr )
    v4 = (int *)preferencesPtr;
  LODWORD(v15) = 1;
  v5 = 0;
  v6 = *v4;
  v7 = v4[9] | (srcSize == 0);
  if ( !*v4 )
    v6 = 4;
  v8 = (unsigned int)(v6 - 4);
  if ( (unsigned int)v8 <= 3 )
    v9 = qword_144754980[v8];
  else
    v9 = -2i64;
  v10 = v9 - 1;
  if ( alreadyBuffered < v9 - 1 )
    v10 = alreadyBuffered;
  v11 = srcSize + v10;
  v12 = 0i64;
  if ( v7 )
    v12 = v11 & (v9 - 1);
  LOBYTE(v5) = v12 != 0;
  return (4 * v4[7] + 4i64) * ((unsigned int)(v11 / v9) + v5) + v12 + 4 * v4[2] + 4 + v9 * (unsigned int)(v11 / v9);
}

/*
==============
indyfs_LZ4F_compressEnd
==============
*/
unsigned __int64 indyfs_LZ4F_compressEnd(indyfs_LZ4F_cctx_s *cctxPtr, void *dstBuffer, unsigned __int64 dstMaxSize, const indyfs_LZ4F_compressOptions_t *compressOptionsPtr)
{
  unsigned __int64 tmpInSize; 
  unsigned __int64 v8; 
  indyfs_LZ4F_blockMode_t blockMode; 
  int level; 
  int (__fastcall *v12)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  int (__fastcall *v13)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  char *v14; 
  unsigned __int8 *tmpBuff; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  indyfs_LZ4_streamHC_u *indyfs_LZ4CtxPtr; 
  int v19; 
  _DWORD *v20; 
  char *v21; 
  unsigned __int64 contentSize; 

  tmpInSize = cctxPtr->tmpInSize;
  if ( tmpInSize )
  {
    if ( cctxPtr->cStage != 1 )
      return -1i64;
    if ( dstMaxSize < tmpInSize + 4 )
      return -11i64;
    blockMode = cctxPtr->prefs.frameInfo.blockMode;
    level = cctxPtr->prefs.compressionLevel;
    if ( level >= 3 )
    {
      v12 = indyfs_LZ4F_compressBlockHC_continue;
      v13 = indyfs_LZ4F_compressBlockHC;
    }
    else
    {
      v12 = indyfs_LZ4F_compressBlock_continue;
      v13 = indyfs_LZ4F_compressBlock;
    }
    if ( blockMode == indyfs_LZ4F_blockIndependent )
      v12 = v13;
    v14 = (char *)dstBuffer + indyfs_LZ4F_makeBlock(dstBuffer, cctxPtr->tmpIn, tmpInSize, v12, cctxPtr->indyfs_LZ4CtxPtr, level, cctxPtr->cdict, cctxPtr->prefs.frameInfo.blockChecksumFlag);
    if ( cctxPtr->prefs.frameInfo.blockMode == indyfs_LZ4F_blockLinked )
      cctxPtr->tmpIn += cctxPtr->tmpInSize;
    tmpBuff = cctxPtr->tmpBuff;
    v16 = &cctxPtr->tmpIn[cctxPtr->maxBlockSize];
    v17 = &tmpBuff[cctxPtr->maxBufferSize];
    cctxPtr->tmpInSize = 0i64;
    if ( v16 > v17 )
    {
      indyfs_LZ4CtxPtr = (indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr;
      if ( cctxPtr->prefs.compressionLevel >= 3 )
        v19 = j_indyfs_LZ4_saveDictHC(indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
      else
        v19 = j_indyfs_LZ4_saveDict((indyfs_LZ4_stream_u *)indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
      cctxPtr->tmpIn = &cctxPtr->tmpBuff[v19];
    }
    v8 = v14 - (_BYTE *)dstBuffer;
    if ( v8 > 0xFFFFFFFFFFFFFFECui64 )
      return v8;
  }
  else
  {
    v8 = 0i64;
  }
  v20 = (char *)dstBuffer + v8;
  *v20 = 0;
  v21 = (char *)(v20 + 1);
  if ( cctxPtr->prefs.frameInfo.contentChecksumFlag == indyfs_LZ4F_contentChecksumEnabled )
  {
    *(_DWORD *)v21 = j_indyfs_XXH32_digest(&cctxPtr->indyfs_XXH);
    v21 += 4;
  }
  contentSize = cctxPtr->prefs.frameInfo.contentSize;
  cctxPtr->cStage = 0;
  cctxPtr->maxBufferSize = 0i64;
  if ( contentSize && contentSize != cctxPtr->totalInSize )
    return -14i64;
  return v21 - (_BYTE *)dstBuffer;
}

/*
==============
indyfs_LZ4F_compressFrame
==============
*/
unsigned __int64 indyfs_LZ4F_compressFrame(void *dstBuffer, unsigned __int64 dstCapacity, const void *srcBuffer, unsigned __int64 srcSize, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  unsigned __int64 result; 
  unsigned __int64 v10; 
  indyfs_LZ4F_cctx_s cctx; 
  indyfs_LZ4_stream_u indyfs_LZ4_stream; 

  memset_0(&cctx, 0, sizeof(cctx));
  cctx.version = 100;
  cctx.maxBufferSize = 5242880i64;
  if ( !preferencesPtr || preferencesPtr->compressionLevel < 3 )
  {
    j_indyfs_LZ4_resetStream(&indyfs_LZ4_stream);
    *(_DWORD *)&cctx.indyfs_LZ4CtxAlloc = 65537;
    cctx.indyfs_LZ4CtxPtr = &indyfs_LZ4_stream;
  }
  result = j_indyfs_LZ4F_compressFrame_usingCDict(&cctx, dstBuffer, dstCapacity, srcBuffer, srcSize, NULL, preferencesPtr);
  v10 = result;
  if ( preferencesPtr )
  {
    if ( preferencesPtr->compressionLevel >= 3 )
    {
      free(cctx.indyfs_LZ4CtxPtr);
      return v10;
    }
  }
  return result;
}

/*
==============
indyfs_LZ4F_compressFrameBound
==============
*/
__int64 indyfs_LZ4F_compressFrameBound(unsigned __int64 srcSize, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  __int128 v2; 
  indyfs_LZ4F_preferences_t preferencesPtra; 

  if ( preferencesPtr )
  {
    v2 = *(_OWORD *)&preferencesPtr->compressionLevel;
    preferencesPtra.frameInfo = preferencesPtr->frameInfo;
    *(_QWORD *)&preferencesPtra.reserved[1] = *(_QWORD *)&preferencesPtr->reserved[1];
    *(_OWORD *)&preferencesPtra.compressionLevel = v2;
  }
  else
  {
    memset(&preferencesPtra, 0, sizeof(preferencesPtra));
  }
  preferencesPtra.autoFlush = 1;
  return indyfs_LZ4F_compressBound_internal(srcSize, &preferencesPtra, 0i64) + 19;
}

/*
==============
indyfs_LZ4F_compressFrame_usingCDict
==============
*/
unsigned __int64 indyfs_LZ4F_compressFrame_usingCDict(indyfs_LZ4F_cctx_s *cctx, void *dstBuffer, unsigned __int64 dstCapacity, const void *srcBuffer, unsigned __int64 srcSize, const indyfs_LZ4F_CDict_s *cdict, const indyfs_LZ4F_preferences_t *preferencesPtr)
{
  unsigned __int64 contentSize; 
  char *v8; 
  __int128 v13; 
  double v14; 
  unsigned __int64 v15; 
  indyfs_LZ4F_blockSizeID_t blockSizeID; 
  __int64 v17; 
  unsigned __int64 v18; 
  indyfs_LZ4F_blockMode_t blockMode; 
  unsigned __int64 result; 
  char *v21; 
  char *v22; 
  indyfs_LZ4F_preferences_t v23; 
  indyfs_LZ4F_compressOptions_t compressOptionsPtr; 
  indyfs_LZ4F_preferences_t v25; 

  contentSize = (unsigned __int64)preferencesPtr;
  v8 = (char *)dstBuffer + dstCapacity;
  if ( preferencesPtr )
  {
    v13 = *(_OWORD *)&preferencesPtr->compressionLevel;
    v14 = *(double *)&preferencesPtr->reserved[1];
    v23.frameInfo = preferencesPtr->frameInfo;
    contentSize = v23.frameInfo.contentSize;
    *(_OWORD *)&v23.compressionLevel = v13;
    *(double *)&v23.reserved[1] = v14;
  }
  else
  {
    v14 = 0.0;
    *(_QWORD *)&v23.frameInfo.blockSizeID = 0i64;
    *(_QWORD *)&v23.frameInfo.contentChecksumFlag = 0i64;
    memset(&v23.frameInfo.dictID, 0, 32);
  }
  if ( contentSize )
    contentSize = srcSize;
  v15 = 0x10000i64;
  v23.frameInfo.contentSize = contentSize;
  blockSizeID = indyfs_LZ4F_max64KB;
  if ( v23.frameInfo.blockSizeID <= indyfs_LZ4F_max64KB )
  {
LABEL_9:
    blockSizeID = v23.frameInfo.blockSizeID;
  }
  else
  {
    while ( srcSize > v15 )
    {
      ++blockSizeID;
      v15 *= 4i64;
      if ( v23.frameInfo.blockSizeID <= blockSizeID )
        goto LABEL_9;
    }
  }
  v23.frameInfo.blockSizeID = blockSizeID;
  if ( blockSizeID == indyfs_LZ4F_default )
    blockSizeID = indyfs_LZ4F_max64KB;
  v23.autoFlush = 1;
  v17 = (unsigned int)(blockSizeID - 4);
  if ( (unsigned int)v17 <= 3 )
    v18 = qword_144754980[v17];
  else
    v18 = -2i64;
  blockMode = v23.frameInfo.blockMode;
  if ( srcSize <= v18 )
    blockMode = indyfs_LZ4F_blockIndependent;
  v23.frameInfo.blockMode = blockMode;
  compressOptionsPtr.reserved[0] = 0;
  *(_OWORD *)&v25.compressionLevel = *(_OWORD *)&v23.compressionLevel;
  compressOptionsPtr.stableSrc = 1;
  v25.autoFlush = 1;
  *(_QWORD *)&compressOptionsPtr.reserved[1] = 0i64;
  v25.frameInfo = v23.frameInfo;
  *(double *)&v25.reserved[1] = v14;
  if ( dstCapacity < indyfs_LZ4F_compressBound_internal(srcSize, &v25, 0i64) + 19 )
    return -11i64;
  result = j_indyfs_LZ4F_compressBegin_usingCDict(cctx, dstBuffer, dstCapacity, cdict, &v23);
  if ( result <= 0xFFFFFFFFFFFFFFECui64 )
  {
    v21 = (char *)dstBuffer + result;
    result = j_indyfs_LZ4F_compressUpdate(cctx, (char *)dstBuffer + result, v8 - ((_BYTE *)dstBuffer + result), srcBuffer, srcSize, &compressOptionsPtr);
    if ( result <= 0xFFFFFFFFFFFFFFECui64 )
    {
      v22 = &v21[result];
      result = j_indyfs_LZ4F_compressEnd(cctx, v22, v8 - v22, &compressOptionsPtr);
      if ( result <= 0xFFFFFFFFFFFFFFECui64 )
        return (unsigned __int64)&v22[result - (_QWORD)dstBuffer];
    }
  }
  return result;
}

/*
==============
indyfs_LZ4F_compressUpdate
==============
*/
unsigned __int64 indyfs_LZ4F_compressUpdate(indyfs_LZ4F_cctx_s *cctxPtr, void *dstBuffer, unsigned __int64 dstCapacity, const void *srcBuffer, unsigned __int64 srcSize, const indyfs_LZ4F_compressOptions_t *compressOptionsPtr)
{
  char *v7; 
  unsigned __int64 maxBlockSize; 
  char *v9; 
  indyfs_LZ4F_blockMode_t blockMode; 
  char *v11; 
  int (__fastcall *v12)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  int (__fastcall *v13)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  unsigned __int64 tmpInSize; 
  const indyfs_LZ4F_compressOptions_t *v16; 
  unsigned __int64 v17; 
  unsigned __int8 *v18; 
  int v19; 
  unsigned __int8 *tmpBuff; 
  size_t v21; 
  indyfs_LZ4_streamHC_u *indyfs_LZ4CtxPtr; 
  int v23; 
  unsigned __int8 *tmpIn; 
  unsigned __int8 *v25; 
  indyfs_LZ4_streamHC_u *v26; 
  int v27; 
  size_t v28; 
  const indyfs_LZ4F_compressOptions_t *v31; 
  __int64 v32[2]; 

  v7 = (char *)srcBuffer;
  maxBlockSize = cctxPtr->maxBlockSize;
  v9 = (char *)dstBuffer;
  blockMode = cctxPtr->prefs.frameInfo.blockMode;
  v11 = (char *)srcBuffer + srcSize;
  if ( cctxPtr->prefs.compressionLevel >= 3 )
  {
    v12 = indyfs_LZ4F_compressBlockHC_continue;
    v13 = indyfs_LZ4F_compressBlockHC;
  }
  else
  {
    v12 = indyfs_LZ4F_compressBlock_continue;
    v13 = indyfs_LZ4F_compressBlock;
  }
  if ( blockMode == indyfs_LZ4F_blockIndependent )
    v12 = v13;
  if ( cctxPtr->cStage != 1 )
    return -1i64;
  tmpInSize = cctxPtr->tmpInSize;
  if ( dstCapacity < indyfs_LZ4F_compressBound_internal(srcSize, &cctxPtr->prefs, tmpInSize) )
    return -11i64;
  v16 = (const indyfs_LZ4F_compressOptions_t *)v32;
  v32[0] = 0i64;
  v32[1] = 0i64;
  if ( compressOptionsPtr )
    v16 = compressOptionsPtr;
  v31 = v16;
  if ( !tmpInSize )
    goto LABEL_14;
  v17 = maxBlockSize - tmpInSize;
  v18 = &cctxPtr->tmpIn[tmpInSize];
  if ( maxBlockSize - tmpInSize > srcSize )
  {
    memcpy_0(v18, srcBuffer, srcSize);
    cctxPtr->tmpInSize += srcSize;
    v7 = v11;
LABEL_14:
    v19 = 0;
    goto LABEL_15;
  }
  v21 = maxBlockSize - tmpInSize;
  v19 = 1;
  memcpy_0(v18, srcBuffer, v21);
  v7 = (char *)srcBuffer + v17;
  v9 = (char *)dstBuffer + indyfs_LZ4F_makeBlock(v9, cctxPtr->tmpIn, maxBlockSize, v12, cctxPtr->indyfs_LZ4CtxPtr, cctxPtr->prefs.compressionLevel, cctxPtr->cdict, cctxPtr->prefs.frameInfo.blockChecksumFlag);
  if ( cctxPtr->prefs.frameInfo.blockMode == indyfs_LZ4F_blockLinked )
    cctxPtr->tmpIn += maxBlockSize;
  cctxPtr->tmpInSize = 0i64;
LABEL_15:
  if ( v11 - v7 >= maxBlockSize )
  {
    v19 = 2;
    do
    {
      v9 += indyfs_LZ4F_makeBlock(v9, v7, maxBlockSize, v12, cctxPtr->indyfs_LZ4CtxPtr, cctxPtr->prefs.compressionLevel, cctxPtr->cdict, cctxPtr->prefs.frameInfo.blockChecksumFlag);
      v7 += maxBlockSize;
    }
    while ( v11 - v7 >= maxBlockSize );
  }
  if ( cctxPtr->prefs.autoFlush && v7 < v11 )
  {
    v19 = 2;
    v9 += indyfs_LZ4F_makeBlock(v9, v7, v11 - v7, v12, cctxPtr->indyfs_LZ4CtxPtr, cctxPtr->prefs.compressionLevel, cctxPtr->cdict, cctxPtr->prefs.frameInfo.blockChecksumFlag);
    v7 = v11;
  }
  if ( cctxPtr->prefs.frameInfo.blockMode || v19 != 2 )
    goto LABEL_33;
  tmpBuff = cctxPtr->tmpBuff;
  if ( v31->stableSrc )
  {
    cctxPtr->tmpIn = tmpBuff;
    goto LABEL_33;
  }
  indyfs_LZ4CtxPtr = (indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr;
  if ( cctxPtr->prefs.compressionLevel >= 3 )
    v23 = j_indyfs_LZ4_saveDictHC(indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
  else
    v23 = j_indyfs_LZ4_saveDict((indyfs_LZ4_stream_u *)indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
  if ( !v23 )
    return -1i64;
  cctxPtr->tmpIn = &cctxPtr->tmpBuff[v23];
LABEL_33:
  tmpIn = cctxPtr->tmpIn;
  v25 = cctxPtr->tmpBuff;
  if ( &tmpIn[maxBlockSize] > &v25[cctxPtr->maxBufferSize] && !cctxPtr->prefs.autoFlush )
  {
    v26 = (indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr;
    if ( cctxPtr->prefs.compressionLevel >= 3 )
      v27 = j_indyfs_LZ4_saveDictHC(v26, (char *)v25, 0x10000);
    else
      v27 = j_indyfs_LZ4_saveDict((indyfs_LZ4_stream_u *)v26, (char *)v25, 0x10000);
    tmpIn = &cctxPtr->tmpBuff[v27];
    cctxPtr->tmpIn = tmpIn;
  }
  if ( v7 < v11 )
  {
    v28 = v11 - v7;
    memcpy_0(tmpIn, v7, v28);
    cctxPtr->tmpInSize = v28;
  }
  if ( cctxPtr->prefs.frameInfo.contentChecksumFlag == indyfs_LZ4F_contentChecksumEnabled )
    j_indyfs_XXH32_update(&cctxPtr->indyfs_XXH, srcBuffer, srcSize);
  cctxPtr->totalInSize += srcSize;
  return v9 - (_BYTE *)dstBuffer;
}

/*
==============
indyfs_LZ4F_compressionLevel_max
==============
*/
__int64 indyfs_LZ4F_compressionLevel_max()
{
  return 12i64;
}

/*
==============
indyfs_LZ4F_createCDict
==============
*/
indyfs_LZ4F_CDict_s *indyfs_LZ4F_createCDict(const void *dictBuffer, unsigned __int64 dictSize)
{
  indyfs_LZ4F_CDict_s *result; 
  indyfs_LZ4F_CDict_s *v5; 
  unsigned __int64 v6; 
  indyfs_LZ4_streamHC_u *StreamHC; 
  char *dictContent; 

  result = (indyfs_LZ4F_CDict_s *)malloc(0x18ui64);
  v5 = result;
  if ( result )
  {
    v6 = 0x10000i64;
    if ( dictSize > 0x10000 )
      dictBuffer = (char *)dictBuffer + dictSize - 0x10000;
    if ( dictSize <= 0x10000 )
      v6 = dictSize;
    result->dictContent = malloc(v6);
    v5->fastCtx = j_indyfs_LZ4_createStream();
    StreamHC = j_indyfs_LZ4_createStreamHC();
    dictContent = (char *)v5->dictContent;
    v5->HCCtx = StreamHC;
    if ( dictContent && v5->fastCtx && StreamHC )
    {
      memcpy_0(dictContent, dictBuffer, v6);
      j_indyfs_LZ4_loadDict(v5->fastCtx, (const char *)v5->dictContent, v6);
      j_indyfs_LZ4_setCompressionLevel(v5->HCCtx, 9);
      j_indyfs_LZ4_loadDictHC(v5->HCCtx, (const char *)v5->dictContent, v6);
      return v5;
    }
    else
    {
      free(dictContent);
      j_indyfs_LZ4_freeStream(v5->fastCtx);
      j_indyfs_LZ4_freeStreamHC(v5->HCCtx);
      free(v5);
      return 0i64;
    }
  }
  return result;
}

/*
==============
indyfs_LZ4F_createCompressionContext
==============
*/
unsigned __int64 indyfs_LZ4F_createCompressionContext(indyfs_LZ4F_cctx_s **indyfs_LZ4F_compressionContextPtr, unsigned int version)
{
  indyfs_LZ4F_cctx_s *v4; 

  v4 = (indyfs_LZ4F_cctx_s *)calloc(1ui64, 0xB8ui64);
  if ( !v4 )
    return -9i64;
  v4->version = version;
  v4->cStage = 0;
  *indyfs_LZ4F_compressionContextPtr = v4;
  return 0i64;
}

/*
==============
indyfs_LZ4F_createDecompressionContext
==============
*/
unsigned __int64 indyfs_LZ4F_createDecompressionContext(indyfs_LZ4F_dctx_s **indyfs_LZ4F_decompressionContextPtr, unsigned int versionNumber)
{
  indyfs_LZ4F_dctx_s *v4; 

  v4 = (indyfs_LZ4F_dctx_s *)calloc(1ui64, 0x100ui64);
  if ( !v4 )
    return -1i64;
  v4->version = versionNumber;
  *indyfs_LZ4F_decompressionContextPtr = v4;
  return 0i64;
}

/*
==============
indyfs_LZ4F_decodeHeader
==============
*/
unsigned __int64 indyfs_LZ4F_decodeHeader(indyfs_LZ4F_dctx_s *dctx, const void *src, unsigned __int64 srcSize)
{
  unsigned __int64 result; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  int v19; 

  if ( srcSize < 7 )
    return -12i64;
  *(_QWORD *)&dctx->frameInfo.blockSizeID = 0i64;
  *(_QWORD *)&dctx->frameInfo.contentChecksumFlag = 0i64;
  dctx->frameInfo.contentSize = 0i64;
  *(_QWORD *)&dctx->frameInfo.dictID = 0i64;
  v7 = *(unsigned __int8 *)src + (*((unsigned __int8 *)src + 3) << 24) + (*((unsigned __int8 *)src + 1) << 8) + (*((unsigned __int8 *)src + 2) << 16);
  if ( (v7 & 0xFFFFFFF0) == 407710288 )
  {
    dctx->frameInfo.frameType = indyfs_LZ4F_skippableFrame;
    if ( src == dctx->header )
    {
      dctx->tmpInSize = srcSize;
      result = srcSize;
      dctx->tmpInTarget = 8i64;
      dctx->dStage = dstage_storeSFrameSize;
    }
    else
    {
      dctx->dStage = dstage_getSFrameSize;
      return 4i64;
    }
    return result;
  }
  if ( v7 != 407708164 )
    return -13i64;
  v8 = *((unsigned __int8 *)src + 4);
  v9 = (v8 >> 5) & 1;
  v10 = (v8 >> 3) & 1;
  v11 = (v8 >> 2) & 1;
  v19 = *((_BYTE *)src + 4) & 1;
  v12 = (v8 >> 4) & 1;
  if ( (v8 & 2) != 0 )
    return -8i64;
  if ( (v8 & 0xFFFFFFC0) != 64 )
    return -6i64;
  v13 = 4 * (*((_BYTE *)src + 4) & 1u) + (unsigned __int64)(unsigned int)(8 * v10) + 7;
  if ( srcSize < v13 )
  {
    if ( src != dctx->header )
      memcpy_0(dctx->header, src, srcSize);
    dctx->tmpInSize = srcSize;
    result = srcSize;
    dctx->tmpInTarget = v13;
    dctx->dStage = dstage_storeFrameHeader;
    return result;
  }
  v14 = *((unsigned __int8 *)src + 5);
  v15 = (v14 >> 4) & 7;
  if ( v14 >= 0x80 )
    return -8i64;
  if ( v15 < 4 )
    return -2i64;
  if ( (v14 & 0xF) != 0 )
    return -8i64;
  if ( (unsigned __int16)j_indyfs_XXH32((char *)src + 4, 4 * (*((_BYTE *)src + 4) & 1u) + (unsigned __int64)(unsigned int)(8 * v10) + 2, 0) >> 8 != *((char *)src + v13 - 1) )
    return -17i64;
  dctx->frameInfo.blockSizeID = v15;
  dctx->frameInfo.blockMode = v9;
  dctx->frameInfo.blockChecksumFlag = v12;
  v16 = v15 - 4;
  dctx->frameInfo.contentChecksumFlag = v11;
  if ( (unsigned int)v16 <= 3 )
    v17 = qword_144754980[v16];
  else
    v17 = -2i64;
  dctx->maxBlockSize = v17;
  if ( v10 )
  {
    v18 = *((unsigned __int8 *)src + 6) + ((*((unsigned __int8 *)src + 7) + ((*((unsigned __int8 *)src + 8) + ((*((unsigned __int8 *)src + 9) + ((*((unsigned __int8 *)src + 10) + ((*((unsigned __int8 *)src + 11) + ((*((unsigned __int8 *)src + 12) + ((unsigned __int64)*((unsigned __int8 *)src + 13) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
    dctx->frameInfo.contentSize = v18;
    dctx->frameRemainingSize = v18;
  }
  if ( v19 )
    dctx->frameInfo.dictID = (unsigned __int8)*((char *)src + v13 - 5) + ((unsigned __int8)*((char *)src + v13 - 2) << 24) + ((unsigned __int8)*((char *)src + v13 - 4) << 8) + ((unsigned __int8)*((char *)src + v13 - 3) << 16);
  dctx->dStage = dstage_init;
  return v13;
}

/*
==============
indyfs_LZ4F_decompress
==============
*/
unsigned __int64 indyfs_LZ4F_decompress(indyfs_LZ4F_dctx_s *dctx, void *dstBuffer, unsigned __int64 *dstSizePtr, const void *srcBuffer, unsigned __int64 *srcSizePtr, const indyfs_LZ4F_decompressOptions_t *decompressOptionsPtr)
{
  char *v6; 
  int v7; 
  char *v9; 
  char *v10; 
  const indyfs_LZ4F_decompressOptions_t *v12; 
  unsigned __int64 v13; 
  char *v14; 
  unsigned __int64 v15; 
  dStage_t dStage; 
  unsigned __int64 result; 
  unsigned __int64 tmpInSize; 
  size_t v19; 
  unsigned __int64 v20; 
  unsigned __int64 tmpInTarget; 
  __int64 v22; 
  unsigned __int8 *tmpIn; 
  unsigned __int64 v24; 
  size_t v25; 
  unsigned __int64 v26; 
  int v27; 
  int v28; 
  indyfs_LZ4F_blockChecksum_t blockChecksumFlag; 
  int v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  int v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int8 *header; 
  unsigned __int64 v39; 
  size_t v40; 
  int v41; 
  unsigned __int64 v42; 
  unsigned __int8 *v43; 
  unsigned __int64 v44; 
  size_t v45; 
  unsigned __int64 v46; 
  int v47; 
  unsigned __int64 maxBlockSize; 
  const unsigned __int8 *v49; 
  unsigned __int64 dictSize; 
  int v51; 
  unsigned __int64 v52; 
  const unsigned __int8 *v53; 
  unsigned __int8 *v54; 
  unsigned __int64 v55; 
  unsigned __int8 *v56; 
  unsigned __int64 v57; 
  const unsigned __int8 *v58; 
  unsigned __int64 v59; 
  int v60; 
  unsigned __int64 v61; 
  unsigned __int64 v62; 
  size_t v63; 
  unsigned __int8 *v64; 
  unsigned __int64 v65; 
  size_t v66; 
  unsigned __int8 *v67; 
  unsigned __int64 v68; 
  unsigned __int64 v69; 
  unsigned __int64 v70; 
  __int32 v71; 
  unsigned __int64 v72; 
  size_t v73; 
  unsigned __int8 *v74; 
  int v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  unsigned __int64 v78; 
  const unsigned __int8 *dict; 
  unsigned __int8 *tmpOutBuffer; 
  dStage_t v81; 
  unsigned __int64 v82; 
  unsigned __int64 v83; 
  unsigned __int8 *v84; 
  size_t v85; 
  unsigned __int64 tmpOutStart; 
  const unsigned __int8 *v87; 
  int v88; 
  char *v89; 
  const indyfs_LZ4F_decompressOptions_t *v91; 
  unsigned __int64 v92; 
  __int64 v95[2]; 

  v6 = (char *)dstBuffer + *dstSizePtr;
  v95[0] = 0i64;
  v7 = 1;
  v95[1] = 0i64;
  v9 = (char *)srcBuffer;
  v10 = (char *)dstBuffer;
  v12 = (const indyfs_LZ4F_decompressOptions_t *)v95;
  v13 = 1i64;
  v14 = &v9[*srcSizePtr];
  v89 = v6;
  v88 = 1;
  if ( decompressOptionsPtr )
    v12 = decompressOptionsPtr;
  v15 = 0i64;
  *srcSizePtr = 0i64;
  *dstSizePtr = 0i64;
  v91 = v12;
  while ( 2 )
  {
    dStage = dctx->dStage;
    switch ( dStage )
    {
      case dstage_getFrameHeader:
        if ( (unsigned __int64)(v14 - v9) < 0x13 )
        {
          dctx->tmpInSize = 0i64;
          if ( v14 != v9 )
          {
            dctx->tmpInTarget = 7i64;
            dctx->dStage = dstage_storeFrameHeader;
            goto $LN11_299;
          }
          return 7i64;
        }
        else
        {
          result = indyfs_LZ4F_decodeHeader(dctx, v9, v14 - v9);
          if ( result <= 0xFFFFFFFFFFFFFFECui64 )
          {
            v9 += result;
            goto LABEL_119;
          }
        }
        return result;
      case dstage_storeFrameHeader:
$LN11_299:
        tmpInSize = dctx->tmpInSize;
        v19 = dctx->tmpInTarget - tmpInSize;
        if ( v19 >= v14 - v9 )
          v19 = v14 - v9;
        memcpy_0(&dctx->header[tmpInSize], v9, v19);
        dctx->tmpInSize += v19;
        v9 += v19;
        v20 = dctx->tmpInSize;
        tmpInTarget = dctx->tmpInTarget;
        if ( v20 < tmpInTarget )
        {
          v13 = tmpInTarget - v20 + 4;
          goto LABEL_151;
        }
        result = indyfs_LZ4F_decodeHeader(dctx, dctx->header, dctx->tmpInTarget);
        if ( result <= 0xFFFFFFFFFFFFFFECui64 )
        {
          v7 = v88;
          v6 = v89;
          goto LABEL_119;
        }
        return result;
      case dstage_init:
        if ( dctx->frameInfo.contentChecksumFlag )
          j_indyfs_XXH32_reset(&dctx->xxh, 0);
        v22 = 0i64;
        if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
          v22 = 0x20000i64;
        if ( dctx->maxBlockSize + v22 <= dctx->maxBufferSize )
        {
          dStage = dstage_getBlockHeader;
          dctx->tmpOut = dctx->tmpOutBuffer;
          dctx->tmpInSize = 0i64;
          dctx->tmpInTarget = 0i64;
          dctx->tmpOutStart = 0i64;
          dctx->tmpOutSize = 0i64;
          dctx->dStage = dstage_getBlockHeader;
          goto $LN17_285;
        }
        return -9i64;
      case dstage_getBlockHeader:
$LN17_285:
        if ( (unsigned __int64)(v14 - v9) < 4 )
        {
          dctx->tmpInSize = 0i64;
          dctx->dStage = dstage_storeBlockHeader;
        }
        else
        {
          tmpIn = (unsigned __int8 *)v9;
          v9 += 4;
          if ( dStage != dstage_storeBlockHeader )
            goto LABEL_29;
        }
        goto $LN21_261;
      case dstage_storeBlockHeader:
$LN21_261:
        v24 = dctx->tmpInSize;
        v25 = v14 - v9;
        if ( 4 - v24 < v14 - v9 )
          v25 = 4 - v24;
        memcpy_0(&dctx->tmpIn[v24], v9, v25);
        dctx->tmpInSize += v25;
        v9 += v25;
        v26 = dctx->tmpInSize;
        if ( v26 < 4 )
          goto LABEL_140;
        tmpIn = dctx->tmpIn;
        v7 = v88;
LABEL_29:
        v27 = (tmpIn[3] << 24) + (tmpIn[1] << 8) + (tmpIn[2] << 16);
        v28 = *tmpIn;
        blockChecksumFlag = dctx->frameInfo.blockChecksumFlag;
        v30 = v28 + v27;
        v31 = v30 & 0x7FFFFFFF;
        if ( (v30 & 0x7FFFFFFF) != 0 )
        {
          if ( v31 > dctx->maxBlockSize )
            return -2i64;
          if ( v30 >= 0 )
          {
            v32 = 4 * blockChecksumFlag + v31;
            dctx->dStage = dstage_getCBlock;
            v33 = 0;
            if ( v10 != v6 )
              v33 = v7;
            v7 = v33;
            v88 = v33;
            v34 = v32 + 4;
            if ( v10 != v6 )
              v34 = v13;
            v13 = v34;
LABEL_118:
            dctx->tmpInTarget = v32;
          }
          else
          {
            dctx->tmpInTarget = v31;
            if ( blockChecksumFlag )
              j_indyfs_XXH32_reset(&dctx->blockChecksum, 0);
            dctx->dStage = dstage_copyDirect;
          }
        }
        else
        {
          dctx->dStage = dstage_getSuffix;
        }
        goto LABEL_119;
      case dstage_copyDirect:
        v35 = dctx->tmpInTarget;
        v36 = v14 - v9;
        if ( v14 - v9 >= (unsigned __int64)(v6 - v10) )
          v36 = v6 - v10;
        if ( v35 >= v36 )
          v35 = v36;
        memcpy_0(v10, v9, v35);
        if ( dctx->frameInfo.blockChecksumFlag )
          j_indyfs_XXH32_update(&dctx->blockChecksum, v9, v35);
        if ( dctx->frameInfo.contentChecksumFlag )
          j_indyfs_XXH32_update(&dctx->xxh, v9, v35);
        if ( dctx->frameInfo.contentSize )
          dctx->frameRemainingSize -= v35;
        if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
          indyfs_LZ4F_updateDict(dctx, (const unsigned __int8 *)v10, v35, (const unsigned __int8 *)dstBuffer, 0);
        v37 = dctx->tmpInTarget;
        v9 += v35;
        v10 += v35;
        if ( v35 == v37 )
        {
          v7 = v88;
          if ( dctx->frameInfo.blockChecksumFlag )
          {
            dctx->tmpInSize = 0i64;
            dctx->dStage = dstage_getBlockChecksum;
          }
          else
          {
            dctx->dStage = dstage_getBlockHeader;
          }
LABEL_119:
          if ( !v7 )
            goto LABEL_151;
          continue;
        }
        v70 = v37 - v35;
        v71 = 4 * dctx->frameInfo.contentChecksumFlag;
        dctx->tmpInTarget = v70;
        v13 = v71 + v70 + 4;
LABEL_151:
        if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
        {
          dict = dctx->dict;
          tmpOutBuffer = dctx->tmpOutBuffer;
          if ( dict != tmpOutBuffer && !v91->stableDst )
          {
            v81 = dctx->dStage;
            if ( (unsigned int)(v81 - 2) < 8 )
            {
              v82 = dctx->dictSize;
              v83 = 0x10000i64;
              if ( v81 == dstage_flushOut )
              {
                v84 = (unsigned __int8 *)(dctx->tmpOut - tmpOutBuffer);
                v85 = (size_t)v84;
                tmpOutStart = dctx->tmpOutStart;
                if ( dctx->tmpOutSize <= 0x10000 )
                  v15 = 0x10000 - dctx->tmpOutSize;
                if ( v15 <= (unsigned __int64)v84 )
                  v85 = v15;
                if ( v85 )
                {
                  memcpy_0(&dctx->tmpOut[-v85], &dict[-tmpOutStart - v85 + v82], v85);
                  tmpOutBuffer = dctx->tmpOutBuffer;
                  tmpOutStart = dctx->tmpOutStart;
                }
                dctx->dictSize = (unsigned __int64)&v84[tmpOutStart];
              }
              else
              {
                v87 = &dict[v82];
                if ( v82 < 0x10000 )
                  v83 = dctx->dictSize;
                v92 = v83;
                if ( v83 )
                {
                  memcpy_0(tmpOutBuffer, &v87[-v83], v83);
                  tmpOutBuffer = dctx->tmpOutBuffer;
                  v83 = v92;
                }
                dctx->dictSize = v83;
                dctx->tmpOut = &tmpOutBuffer[v83];
              }
              dctx->dict = tmpOutBuffer;
            }
          }
        }
        result = v13;
        *srcSizePtr = v9 - (_BYTE *)srcBuffer;
        *dstSizePtr = v10 - (_BYTE *)dstBuffer;
        return result;
      case dstage_getBlockChecksum:
        if ( v14 - v9 < 4 || dctx->tmpInSize )
        {
          v39 = dctx->tmpInSize;
          header = dctx->header;
          v40 = 4 - v39;
          if ( 4 - v39 >= v14 - v9 )
            v40 = v14 - v9;
          memcpy_0(&header[v39], v9, v40);
          dctx->tmpInSize += v40;
          v9 += v40;
          if ( dctx->tmpInSize < 4 )
            goto LABEL_151;
        }
        else
        {
          header = (unsigned __int8 *)v9;
          v9 += 4;
        }
        v41 = *header + (header[3] << 24) + (header[1] << 8) + (header[2] << 16);
        if ( v41 != j_indyfs_XXH32_digest(&dctx->blockChecksum) )
          return -7i64;
        v7 = v88;
        v6 = v89;
        dctx->dStage = dstage_getBlockHeader;
        goto LABEL_119;
      case dstage_getCBlock:
        v42 = dctx->tmpInTarget;
        if ( v14 - v9 >= v42 )
        {
          v43 = (unsigned __int8 *)v9;
          v9 += v42;
LABEL_72:
          if ( dctx->frameInfo.blockChecksumFlag )
          {
            dctx->tmpInTarget = v42 - 4;
            v47 = v43[v42 - 4] + (v43[v42 - 1] << 24) + (v43[v42 - 3] << 8) + (v43[v42 - 2] << 16);
            if ( v47 != j_indyfs_XXH32(v43, v42 - 4, 0) )
              return -7i64;
          }
          maxBlockSize = dctx->maxBlockSize;
          if ( v89 - v10 < maxBlockSize )
          {
            if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
            {
              v53 = dctx->dict;
              v54 = dctx->tmpOutBuffer;
              v55 = dctx->dictSize;
              if ( v53 == v54 )
              {
                if ( v55 > 0x20000 )
                {
                  memcpy_0(v54, &v53[v55 - 0x10000], 0x10000ui64);
                  v54 = dctx->tmpOutBuffer;
                  v55 = 0x10000i64;
                  LODWORD(maxBlockSize) = dctx->maxBlockSize;
                  dctx->dictSize = 0x10000i64;
                }
                v56 = &v54[v55];
              }
              else
              {
                v57 = 0x10000i64;
                if ( v55 < 0x10000 )
                  v57 = dctx->dictSize;
                v56 = &v54[v57];
              }
              dctx->tmpOut = v56;
            }
            v58 = dctx->dict;
            v59 = dctx->dictSize;
            if ( v58 && v59 > 0x40000000 )
            {
              v58 = &v58[v59 - 0x40000000];
              LODWORD(v59) = 0x40000000;
            }
            v60 = j_indyfs_LZ4_decompress_safe_usingDict((const char *)v43, (char *)dctx->tmpOut, dctx->tmpInTarget, maxBlockSize, (const char *)v58, v59);
            if ( v60 < 0 )
              return -16i64;
            v61 = v60;
            if ( dctx->frameInfo.contentChecksumFlag )
              j_indyfs_XXH32_update(&dctx->xxh, dctx->tmpOut, v60);
            if ( dctx->frameInfo.contentSize )
              dctx->frameRemainingSize -= v61;
            v6 = v89;
            dctx->tmpOutSize = v61;
            dctx->tmpOutStart = 0i64;
            dctx->dStage = dstage_flushOut;
$LN62_38:
            v62 = dctx->tmpOutStart;
            v63 = dctx->tmpOutSize - v62;
            if ( v63 >= v6 - v10 )
              v63 = v6 - v10;
            memcpy_0(v10, &dctx->tmpOut[v62], v63);
            if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
              indyfs_LZ4F_updateDict(dctx, (const unsigned __int8 *)v10, v63, (const unsigned __int8 *)dstBuffer, 1u);
            dctx->tmpOutStart += v63;
            v10 += v63;
            if ( dctx->tmpOutStart != dctx->tmpOutSize )
            {
              v13 = 4i64;
              goto LABEL_151;
            }
            v7 = v88;
            dctx->dStage = dstage_getBlockHeader;
          }
          else
          {
            v49 = dctx->dict;
            dictSize = dctx->dictSize;
            if ( v49 && dictSize > 0x40000000 )
            {
              v49 = &v49[dictSize - 0x40000000];
              LODWORD(dictSize) = 0x40000000;
            }
            v51 = j_indyfs_LZ4_decompress_safe_usingDict((const char *)v43, v10, dctx->tmpInTarget, maxBlockSize, (const char *)v49, dictSize);
            if ( v51 < 0 )
              return -1i64;
            v52 = v51;
            if ( dctx->frameInfo.contentChecksumFlag )
              j_indyfs_XXH32_update(&dctx->xxh, v10, v51);
            if ( dctx->frameInfo.contentSize )
              dctx->frameRemainingSize -= v52;
            if ( dctx->frameInfo.blockMode == indyfs_LZ4F_blockLinked )
              indyfs_LZ4F_updateDict(dctx, (const unsigned __int8 *)v10, v52, (const unsigned __int8 *)dstBuffer, 0);
            v6 = v89;
            v10 += v52;
            v7 = v88;
            dctx->dStage = dstage_getBlockHeader;
          }
        }
        else
        {
          dctx->tmpInSize = 0i64;
          dctx->dStage = dstage_storeCBlock;
        }
        goto LABEL_119;
      case dstage_storeCBlock:
        v44 = dctx->tmpInSize;
        v45 = v14 - v9;
        if ( dctx->tmpInTarget - v44 < v14 - v9 )
          v45 = dctx->tmpInTarget - v44;
        memcpy_0(&dctx->tmpIn[v44], v9, v45);
        dctx->tmpInSize += v45;
        v9 += v45;
        v46 = dctx->tmpInSize;
        v42 = dctx->tmpInTarget;
        if ( v46 < v42 )
        {
          v13 = v42 - v46 + 4;
          goto LABEL_151;
        }
        v43 = dctx->tmpIn;
        goto LABEL_72;
      case dstage_flushOut:
        goto $LN62_38;
      case dstage_getSuffix:
        if ( dctx->frameRemainingSize )
          return -14i64;
        if ( dctx->frameInfo.contentChecksumFlag )
        {
          if ( v14 - v9 >= 4 )
          {
            v74 = (unsigned __int8 *)v9;
            v9 += 4;
          }
          else
          {
            dctx->tmpInSize = 0i64;
            dctx->dStage = dstage_storeSuffix;
$LN71_38:
            v72 = dctx->tmpInSize;
            v73 = v14 - v9;
            if ( 4 - v72 < v73 )
              v73 = 4 - v72;
            memcpy_0(&dctx->tmpIn[v72], v9, v73);
            dctx->tmpInSize += v73;
            v9 += v73;
            v26 = dctx->tmpInSize;
            if ( v26 < 4 )
            {
LABEL_140:
              v13 = 4 - v26;
              goto LABEL_151;
            }
            v74 = dctx->tmpIn;
          }
          v75 = *v74 + (v74[3] << 24) + (v74[1] << 8) + (v74[2] << 16);
          if ( v75 != j_indyfs_XXH32_digest(&dctx->xxh) )
            return -18i64;
          v13 = 0i64;
        }
        else
        {
          v13 = 0i64;
        }
LABEL_150:
        dctx->dStage = dstage_getFrameHeader;
        dctx->dict = NULL;
        dctx->dictSize = 0i64;
        goto LABEL_151;
      case dstage_storeSuffix:
        goto $LN71_38;
      case dstage_getSFrameSize:
        if ( v14 - v9 < 4 )
        {
          dctx->tmpInSize = 4i64;
          dctx->tmpInTarget = 8i64;
          dctx->dStage = dstage_storeSFrameSize;
$LN78_41:
          v65 = dctx->tmpInSize;
          v66 = dctx->tmpInTarget - v65;
          v67 = &dctx->header[v65];
          if ( v66 >= v14 - v9 )
            v66 = v14 - v9;
          memcpy_0(v67, v9, v66);
          dctx->tmpInSize += v66;
          v9 += v66;
          v68 = dctx->tmpInSize;
          v69 = dctx->tmpInTarget;
          if ( v68 < v69 )
          {
            v13 = v69 - v68;
            goto LABEL_151;
          }
          v7 = v88;
          v64 = &dctx->header[4];
        }
        else
        {
          v64 = (unsigned __int8 *)v9;
          v9 += 4;
        }
        v32 = *v64 + ((v64[1] + ((v64[2] + ((unsigned __int64)v64[3] << 8)) << 8)) << 8);
        dctx->dStage = dstage_skipSkippable;
        dctx->frameInfo.contentSize = v32;
        goto LABEL_118;
      case dstage_storeSFrameSize:
        goto $LN78_41;
      case dstage_skipSkippable:
        v76 = dctx->tmpInTarget;
        v77 = v14 - v9;
        v78 = v76;
        if ( v76 >= v77 )
          v78 = v77;
        v9 += v78;
        v13 = v76 - v78;
        dctx->tmpInTarget = v13;
        if ( !v13 )
          goto LABEL_150;
        goto LABEL_151;
      default:
        goto LABEL_119;
    }
  }
}

/*
==============
indyfs_LZ4F_decompress_usingDict
==============
*/
unsigned __int64 indyfs_LZ4F_decompress_usingDict(indyfs_LZ4F_dctx_s *dctx, void *dstBuffer, unsigned __int64 *dstSizePtr, const void *srcBuffer, unsigned __int64 *srcSizePtr, const void *dict, unsigned __int64 dictSize, const indyfs_LZ4F_decompressOptions_t *decompressOptionsPtr)
{
  if ( dctx->dStage <= dstage_init )
  {
    dctx->dict = (const unsigned __int8 *)dict;
    dctx->dictSize = dictSize;
  }
  return j_indyfs_LZ4F_decompress(dctx, dstBuffer, dstSizePtr, srcBuffer, srcSizePtr, decompressOptionsPtr);
}

/*
==============
indyfs_LZ4F_flush
==============
*/
unsigned __int64 indyfs_LZ4F_flush(indyfs_LZ4F_cctx_s *cctxPtr, void *dstBuffer, unsigned __int64 dstCapacity, const indyfs_LZ4F_compressOptions_t *compressOptionsPtr)
{
  unsigned __int64 tmpInSize; 
  indyfs_LZ4F_blockMode_t blockMode; 
  int level; 
  int (__fastcall *v11)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  int (__fastcall *v12)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *); 
  char *v13; 
  unsigned __int8 *tmpBuff; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  indyfs_LZ4_streamHC_u *indyfs_LZ4CtxPtr; 
  int v18; 

  tmpInSize = cctxPtr->tmpInSize;
  if ( !tmpInSize )
    return 0i64;
  if ( cctxPtr->cStage != 1 )
    return -1i64;
  if ( dstCapacity < tmpInSize + 4 )
    return -11i64;
  blockMode = cctxPtr->prefs.frameInfo.blockMode;
  level = cctxPtr->prefs.compressionLevel;
  if ( level >= 3 )
  {
    v11 = indyfs_LZ4F_compressBlockHC_continue;
    v12 = indyfs_LZ4F_compressBlockHC;
  }
  else
  {
    v11 = indyfs_LZ4F_compressBlock_continue;
    v12 = indyfs_LZ4F_compressBlock;
  }
  if ( blockMode == indyfs_LZ4F_blockIndependent )
    v11 = v12;
  v13 = (char *)dstBuffer + indyfs_LZ4F_makeBlock(dstBuffer, cctxPtr->tmpIn, tmpInSize, v11, cctxPtr->indyfs_LZ4CtxPtr, level, cctxPtr->cdict, cctxPtr->prefs.frameInfo.blockChecksumFlag);
  if ( cctxPtr->prefs.frameInfo.blockMode == indyfs_LZ4F_blockLinked )
    cctxPtr->tmpIn += cctxPtr->tmpInSize;
  tmpBuff = cctxPtr->tmpBuff;
  v15 = &cctxPtr->tmpIn[cctxPtr->maxBlockSize];
  v16 = &tmpBuff[cctxPtr->maxBufferSize];
  cctxPtr->tmpInSize = 0i64;
  if ( v15 > v16 )
  {
    indyfs_LZ4CtxPtr = (indyfs_LZ4_streamHC_u *)cctxPtr->indyfs_LZ4CtxPtr;
    if ( cctxPtr->prefs.compressionLevel >= 3 )
      v18 = j_indyfs_LZ4_saveDictHC(indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
    else
      v18 = j_indyfs_LZ4_saveDict((indyfs_LZ4_stream_u *)indyfs_LZ4CtxPtr, (char *)tmpBuff, 0x10000);
    cctxPtr->tmpIn = &cctxPtr->tmpBuff[v18];
  }
  return v13 - (_BYTE *)dstBuffer;
}

/*
==============
indyfs_LZ4F_freeCDict
==============
*/
void indyfs_LZ4F_freeCDict(indyfs_LZ4F_CDict_s *cdict)
{
  if ( cdict )
  {
    free(cdict->dictContent);
    j_indyfs_LZ4_freeStream(cdict->fastCtx);
    j_indyfs_LZ4_freeStreamHC(cdict->HCCtx);
    free(cdict);
  }
}

/*
==============
indyfs_LZ4F_freeCompressionContext
==============
*/
unsigned __int64 indyfs_LZ4F_freeCompressionContext(indyfs_LZ4F_cctx_s *indyfs_LZ4F_compressionContext)
{
  if ( indyfs_LZ4F_compressionContext )
  {
    free(indyfs_LZ4F_compressionContext->indyfs_LZ4CtxPtr);
    free(indyfs_LZ4F_compressionContext->tmpBuff);
    free(indyfs_LZ4F_compressionContext);
  }
  return 0i64;
}

/*
==============
indyfs_LZ4F_freeDecompressionContext
==============
*/
unsigned __int64 indyfs_LZ4F_freeDecompressionContext(indyfs_LZ4F_dctx_s *dctx)
{
  __int64 dStage; 

  if ( !dctx )
    return 0i64;
  dStage = dctx->dStage;
  free(dctx->tmpIn);
  free(dctx->tmpOutBuffer);
  free(dctx);
  return dStage;
}

/*
==============
indyfs_LZ4F_getErrorCode
==============
*/
__int64 indyfs_LZ4F_getErrorCode(unsigned __int64 functionResult)
{
  if ( functionResult > 0xFFFFFFFFFFFFFFECui64 )
    return (unsigned int)-(int)functionResult;
  else
    return 0i64;
}

/*
==============
indyfs_LZ4F_getErrorName
==============
*/
const char *indyfs_LZ4F_getErrorName(unsigned __int64 code)
{
  if ( code <= 0xFFFFFFFFFFFFFFECui64 )
    return codeError;
  else
    return indyfs_LZ4F_errorStrings[-(int)code];
}

/*
==============
indyfs_LZ4F_getFrameInfo
==============
*/
unsigned __int64 indyfs_LZ4F_getFrameInfo(indyfs_LZ4F_dctx_s *dctx, indyfs_LZ4F_frameInfo_t *frameInfoPtr, const void *srcBuffer, unsigned __int64 *srcSizePtr)
{
  __m256i frameInfo; 
  unsigned __int64 result; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13[3]; 
  unsigned __int64 v14; 

  if ( dctx->dStage > dstage_storeFrameHeader )
  {
    *srcSizePtr = 0i64;
    frameInfo = (__m256i)dctx->frameInfo;
    v13[0] = 0i64;
    v14 = 0i64;
    *(__m256i *)frameInfoPtr = frameInfo;
    return j_indyfs_LZ4F_decompress(dctx, NULL, v13, NULL, &v14, NULL);
  }
  if ( dctx->dStage == dstage_storeFrameHeader )
  {
    *srcSizePtr = 0i64;
    return -19i64;
  }
  if ( *srcSizePtr < 5 )
  {
    *srcSizePtr = 0i64;
    return -12i64;
  }
  if ( ((*(unsigned __int8 *)srcBuffer + (*((unsigned __int8 *)srcBuffer + 3) << 24) + (*((unsigned __int8 *)srcBuffer + 1) << 8) + (*((unsigned __int8 *)srcBuffer + 2) << 16)) & 0xFFFFFFF0) == 407710288 )
  {
    v10 = 8i64;
  }
  else
  {
    if ( *(unsigned __int8 *)srcBuffer + (*((unsigned __int8 *)srcBuffer + 3) << 24) + (*((unsigned __int8 *)srcBuffer + 1) << 8) + (*((unsigned __int8 *)srcBuffer + 2) << 16) != 407708164 )
    {
      *srcSizePtr = 0i64;
      return -13i64;
    }
    v10 = 8 * ((*((unsigned __int8 *)srcBuffer + 4) >> 3) & 1u) + (unsigned __int64)(4 * (*((_BYTE *)srcBuffer + 4) & 1u)) + 7;
  }
  if ( *srcSizePtr >= v10 )
  {
    v11 = indyfs_LZ4F_decodeHeader(dctx, srcBuffer, v10);
    v12 = v11;
    if ( v11 <= 0xFFFFFFFFFFFFFFECui64 )
      v12 = 4i64;
    else
      v11 = 0i64;
    *srcSizePtr = v11;
    result = v12;
    *frameInfoPtr = dctx->frameInfo;
  }
  else
  {
    *srcSizePtr = 0i64;
    return -12i64;
  }
  return result;
}

/*
==============
indyfs_LZ4F_getVersion
==============
*/
__int64 indyfs_LZ4F_getVersion()
{
  return 100i64;
}

/*
==============
indyfs_LZ4F_initStream
==============
*/
void indyfs_LZ4F_initStream(void *ctx, const indyfs_LZ4F_CDict_s *cdict, int level)
{
  if ( level >= 3 )
  {
    j_indyfs_LZ4_resetStreamHC_fast((indyfs_LZ4_streamHC_u *)ctx, level);
    if ( cdict )
      j_indyfs_LZ4_attach_HC_dictionary((indyfs_LZ4_streamHC_u *)ctx, cdict->HCCtx);
    else
      j_indyfs_LZ4_attach_HC_dictionary((indyfs_LZ4_streamHC_u *)ctx, NULL);
  }
  else
  {
    j_indyfs_LZ4_resetStream_fast((indyfs_LZ4_stream_u *)ctx);
    if ( cdict )
      j_indyfs_LZ4_attach_dictionary((indyfs_LZ4_stream_u *)ctx, cdict->fastCtx);
    else
      j_indyfs_LZ4_attach_dictionary((indyfs_LZ4_stream_u *)ctx, NULL);
  }
}

/*
==============
indyfs_LZ4F_isError
==============
*/
_BOOL8 indyfs_LZ4F_isError(unsigned __int64 code)
{
  return code > 0xFFFFFFFFFFFFFFECui64;
}

/*
==============
indyfs_LZ4F_makeBlock
==============
*/
unsigned __int64 indyfs_LZ4F_makeBlock(void *dst, const void *src, unsigned __int64 srcSize, int (*compress)(void *, const char *, char *, int, int, int, const indyfs_LZ4F_CDict_s *), void *indyfs_LZ4ctx, int level, const indyfs_LZ4F_CDict_s *cdict, indyfs_LZ4F_blockChecksum_t crcFlag)
{
  int v11; 
  unsigned int v12; 

  v11 = compress(indyfs_LZ4ctx, (const char *)src, (char *)dst + 4, srcSize, srcSize - 1, level, cdict);
  *(_DWORD *)dst = v11;
  v12 = v11;
  if ( !v11 )
  {
    *(_BYTE *)dst = srcSize;
    v12 = srcSize;
    *((_BYTE *)dst + 1) = BYTE1(srcSize);
    *((_BYTE *)dst + 3) = ((unsigned int)srcSize | 0x80000000) >> 24;
    *((_BYTE *)dst + 2) = ((unsigned int)srcSize | 0x80000000) >> 16;
    memcpy_0((char *)dst + 4, src, srcSize);
  }
  if ( crcFlag )
    *(_DWORD *)((char *)dst + v12 + 4) = j_indyfs_XXH32((char *)dst + 4, v12, 0);
  return v12 + 4 * crcFlag + 4;
}

/*
==============
indyfs_LZ4F_resetDecompressionContext
==============
*/
void indyfs_LZ4F_resetDecompressionContext(indyfs_LZ4F_dctx_s *dctx)
{
  dctx->dStage = dstage_getFrameHeader;
  dctx->dict = NULL;
  dctx->dictSize = 0i64;
}

/*
==============
indyfs_LZ4F_updateDict
==============
*/
void indyfs_LZ4F_updateDict(indyfs_LZ4F_dctx_s *dctx, const unsigned __int8 *dstPtr, unsigned __int64 dstSize, const unsigned __int8 *dstPtr0, unsigned int withinTmp)
{
  unsigned __int64 dictSize; 
  const unsigned __int8 *dict; 
  unsigned __int64 v10; 
  unsigned __int8 *tmpOutBuffer; 
  unsigned __int64 v12; 
  unsigned __int8 *v13; 
  size_t v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  size_t v17; 

  dictSize = dctx->dictSize;
  if ( dictSize )
  {
    dict = dctx->dict;
  }
  else
  {
    dctx->dict = dstPtr;
    dict = dstPtr;
  }
  if ( &dict[dictSize] == dstPtr )
    goto LABEL_24;
  v10 = dstSize + dstPtr - dstPtr0;
  if ( v10 >= 0x10000 )
  {
    dctx->dict = dstPtr0;
    dctx->dictSize = v10;
    return;
  }
  tmpOutBuffer = dctx->tmpOutBuffer;
  if ( withinTmp )
  {
    if ( dict == tmpOutBuffer )
    {
LABEL_24:
      dctx->dictSize = dictSize + dstSize;
      return;
    }
  }
  if ( withinTmp )
  {
    v12 = 0i64;
    v13 = (unsigned __int8 *)(dctx->tmpOut - tmpOutBuffer);
    v14 = (size_t)v13;
    if ( dctx->tmpOutSize <= 0x10000 )
      v12 = 0x10000 - dctx->tmpOutSize;
    if ( v12 <= (unsigned __int64)v13 )
      v14 = v12;
    memcpy_0(&dctx->tmpOut[-v14], &dict[dictSize - v14 - dctx->tmpOutStart], v14);
    dctx->dict = dctx->tmpOutBuffer;
    v15 = (unsigned __int64)&v13[dstSize + dctx->tmpOutStart];
LABEL_15:
    dctx->dictSize = v15;
    return;
  }
  if ( dict != tmpOutBuffer )
  {
    v17 = dictSize;
    if ( 0x10000 - dstSize <= dictSize )
      v17 = 0x10000 - dstSize;
    memcpy_0(tmpOutBuffer, &dict[dictSize - v17], v17);
    memcpy_0(&dctx->tmpOutBuffer[v17], dstPtr, dstSize);
    dctx->dict = dctx->tmpOutBuffer;
    v15 = v17 + dstSize;
    goto LABEL_15;
  }
  if ( dictSize + dstSize > dctx->maxBufferSize )
  {
    v16 = 0x10000 - dstSize;
    memcpy_0(tmpOutBuffer, &dict[dictSize - (0x10000 - dstSize)], 0x10000 - dstSize);
    tmpOutBuffer = dctx->tmpOutBuffer;
    dictSize = v16;
    dctx->dictSize = v16;
  }
  memcpy_0(&tmpOutBuffer[dictSize], dstPtr, dstSize);
  dctx->dictSize += dstSize;
}

