/*
==============
indyfs_http_download_chunk_to_file
==============
*/

int __fastcall indyfs_http_download_chunk_to_file(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, char *outputPath, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 taskId, bool *connectionGood)
{
  return ?indyfs_http_download_chunk_to_file@@YAHPEAUSimpleHttpConnection@@PEAUIndyFsStorageServerInfo@@QEADQEAE_K4PEA_N@Z(connection, storageServerInfo, outputPath, chunkSha1, chunkSize, taskId, connectionGood);
}

/*
==============
indyfs_http_connect
==============
*/

int __fastcall indyfs_http_connect(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo)
{
  return ?indyfs_http_connect@@YAHPEAUSimpleHttpConnection@@PEAUIndyFsStorageServerInfo@@@Z(connection, storageServerInfo);
}

/*
==============
http_download_chunk_to_file_helper
==============
*/

int __fastcall http_download_chunk_to_file_helper(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, char *outputPath, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 taskId, bool *connectionGood)
{
  return ?http_download_chunk_to_file_helper@@YAHPEAUSimpleHttpConnection@@PEAUIndyFsStorageServerInfo@@QEADQEAE_K4PEA_N@Z(connection, storageServerInfo, outputPath, chunkSha1, chunkSize, taskId, connectionGood);
}

/*
==============
indyfs_http_download_chunk_portion_to_memory
==============
*/

int __fastcall indyfs_http_download_chunk_portion_to_memory(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, void *dest, unsigned __int64 destLen, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 taskId, bool *connectionGood)
{
  return ?indyfs_http_download_chunk_portion_to_memory@@YAHPEAUSimpleHttpConnection@@PEAUIndyFsStorageServerInfo@@PEAX_KQEAE3333PEA_N@Z(connection, storageServerInfo, dest, destLen, chunkSha1, chunkSize, offset, size, taskId, connectionGood);
}

/*
==============
http_download_chunk_portion_to_memory_helper
==============
*/

int __fastcall http_download_chunk_portion_to_memory_helper(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, void *dest, unsigned __int64 destLen, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 taskId, bool *connectionGood)
{
  return ?http_download_chunk_portion_to_memory_helper@@YAHPEAUSimpleHttpConnection@@PEAUIndyFsStorageServerInfo@@PEAX_KQEAE3333PEA_N@Z(connection, storageServerInfo, dest, destLen, chunkSha1, chunkSize, offset, size, taskId, connectionGood);
}

/*
==============
get_callback_decompress_to_file
==============
*/
__int64 get_callback_decompress_to_file(void *data, unsigned __int64 dataSize, int statusCode, void *userData)
{
  char *v5; 
  char *v7; 
  unsigned __int64 v8; 
  indyfs_LZ4F_dctx_s *v9; 
  const char *ErrorName; 
  unsigned __int64 dstSizePtr; 
  unsigned __int64 srcSizePtr; 
  char dstBuffer[8192]; 

  v5 = (char *)data;
  if ( statusCode == 200 )
  {
    v7 = (char *)data + dataSize;
    v8 = 1i64;
    if ( data != (char *)data + dataSize )
    {
      while ( v8 )
      {
        v9 = (indyfs_LZ4F_dctx_s *)*((_QWORD *)userData + 1);
        dstSizePtr = 0x2000i64;
        srcSizePtr = v7 - v5;
        v8 = j_indyfs_LZ4F_decompress(v9, dstBuffer, &dstSizePtr, v5, &srcSizePtr, NULL);
        if ( j_indyfs_LZ4F_isError(v8) )
        {
          if ( j_indyfs_LZ4F_getErrorCode(v8) == indyfs_LZ4F_ERROR_allocation_failed )
          {
            indyfs_log_message(Error, "lz4 block size is bigger than kDecompressionInBufferSize");
          }
          else
          {
            ErrorName = j_indyfs_LZ4F_getErrorName(v8);
            indyfs_log_message(Error, "Failed to decompress data - Err: %s", ErrorName);
          }
          return 0xFFFFFFFFi64;
        }
        v5 += srcSizePtr;
        if ( dstSizePtr )
        {
          indyfs_sfwrite(*(INDYFS_SFILE **)userData, dstBuffer, dstSizePtr);
          *((_QWORD *)userData + 2) += dstSizePtr;
        }
        if ( v5 == v7 )
          return 0i64;
      }
    }
  }
  else if ( indyfs_sfwrite(*(INDYFS_SFILE **)userData, data, dataSize) != dataSize )
  {
    return 0xFFFFFFFFi64;
  }
  return 0i64;
}

/*
==============
get_callback_to_file
==============
*/
__int64 get_callback_to_file(void *data, unsigned __int64 dataSize, int statusCode, void *userData)
{
  return (unsigned int)-(dataSize != indyfs_sfwrite((INDYFS_SFILE *)userData, data, dataSize));
}

/*
==============
http_download_chunk_portion_to_memory_helper
==============
*/
__int64 http_download_chunk_portion_to_memory_helper(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, void *dest, unsigned __int64 destLen, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 taskId, bool *connectionGood)
{
  int v14; 
  int i; 
  int v16; 

  v14 = 500;
  for ( i = 0; ; ++i )
  {
    do
    {
      if ( !*connectionGood && simplehttp_open_connection(connection, storageServerInfo->url, storageServerInfo->port) )
      {
        indyfs_log_message(Error, "Failed to open connection to server - URL: http:
        return 0xFFFFFFFFi64;
      }
      v16 = indyfs_http_download_chunk_portion_to_memory(connection, storageServerInfo, dest, destLen, chunkSha1, chunkSize, offset, size, taskId, connectionGood);
    }
    while ( v16 == -32375039 );
    if ( !v16 )
      break;
    if ( v14 > 128000 )
    {
      indyfs_statistics_internal_add_count("HttpRetry", "NumRetries", i);
      indyfs_log_message(Error, "Failed to download chunk. See warnings above for details");
      return 0xFFFFFFFFi64;
    }
    indyfs_log_message(Completed, "Exponential backoff: Sleeping %d ms", (unsigned int)v14);
    indyfs_thread_sleep(v14);
    v14 *= 2;
  }
  indyfs_statistics_internal_add_count("HttpRetry", "NumRetries", i);
  return 0i64;
}

/*
==============
http_download_chunk_to_file_helper
==============
*/
__int64 http_download_chunk_to_file_helper(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, char *outputPath, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 taskId, bool *connectionGood)
{
  int v11; 
  int i; 
  int v13; 

  v11 = 500;
  for ( i = 0; ; ++i )
  {
    do
    {
      if ( !*connectionGood && simplehttp_open_connection(connection, storageServerInfo->url, storageServerInfo->port) )
      {
        indyfs_log_message(Error, "Failed to open connection to server - URL: http:
        return 0xFFFFFFFFi64;
      }
      v13 = indyfs_http_download_chunk_to_file(connection, storageServerInfo, outputPath, chunkSha1, chunkSize, taskId, connectionGood);
    }
    while ( v13 == -32375039 );
    if ( !v13 )
      break;
    if ( v11 > 128000 )
    {
      indyfs_statistics_internal_add_count("HttpRetry", "NumRetries", i);
      indyfs_log_message(Error, "Failed to download chunk. See warnings above for details");
      return 0xFFFFFFFFi64;
    }
    indyfs_log_message(Completed, "Exponential backoff: Sleeping %d ms", (unsigned int)v11);
    indyfs_thread_sleep(v11);
    v11 *= 2;
  }
  indyfs_statistics_internal_add_count("HttpRetry", "NumRetries", i);
  return 0i64;
}

/*
==============
indyfs_http_connect
==============
*/
int indyfs_http_connect(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo)
{
  int result; 

  result = simplehttp_open_connection(connection, storageServerInfo->url, storageServerInfo->port);
  if ( result )
  {
    indyfs_log_message(Error, "Failed to open connection to server - URL: http:
    return -1;
  }
  return result;
}

/*
==============
indyfs_http_download_chunk_portion_to_memory
==============
*/
__int64 indyfs_http_download_chunk_portion_to_memory(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, void *dest, unsigned __int64 destLen, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 taskId, bool *connectionGood)
{
  unsigned __int8 *v13; 
  int v16; 
  unsigned __int64 contentLength; 
  IndyFsArkVersion arkVersion; 
  SimpleHttpConnection *v19; 
  __int64 result; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  __int64 duration; 
  long double durationa; 
  char *cacheStatus; 
  unsigned __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v53[2]; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  SimpleHttpResponse response; 
  __int64 v57[2]; 
  SimpleHttpRequest request; 
  __int64 v59; 
  IndyFsScopedEvent v60; 
  char v61[256]; 
  char _Buffer[256]; 
  char v63[1024]; 

  v59 = -2i64;
  __asm { vmovaps [rsp+0A30h+var_50], xmm6 }
  v13 = chunkSha1;
  IndyFsScopedEvent::IndyFsScopedEvent(&v60, "Http", "GetRangeRequest");
  *connectionGood = 1;
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovaps xmm6, xmm0 }
  j_snprintf(_Buffer, 0x100ui64, "bytes=%llu-%llu", offset, offset + size - 1);
  v57[0] = (__int64)"Range";
  v57[1] = (__int64)_Buffer;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+8E0h+request.path], xmm0
  }
  request.bodySize = 0i64;
  request.verb = "GET";
  request.headers = (SimpleHttpRequestHeader *)v57;
  request.headersLen = 1i64;
  v53[0] = (__int64)"X-Cache-Status";
  v53[1] = (__int64)v61;
  v54 = 256i64;
  v55 = 0i64;
  response.destBuffer = NULL;
  response.destSize = 0i64;
  __asm { vmovdqu xmmword ptr [rbp+8E0h+response.callback], xmm0 }
  *(_QWORD *)&response.statusCode = 0i64;
  response.contentLength = 0i64;
  response.headers = (SimpleHttpResponseHeader *)v53;
  response.headersLen = 1i64;
  v16 = -1;
  contentLength = -1i64;
  arkVersion = storageServerInfo->arkVersion;
  if ( arkVersion == V1 )
  {
    indyfs_log_message(Error, "indyfs_download_chunk_portion_to_memory does not support ArkVersion V1");
    goto LABEL_22;
  }
  if ( arkVersion == V2 )
  {
    v13 = chunkSha1;
    v31 = chunkSha1[1];
    v29 = *chunkSha1;
    LODWORD(duration) = v29;
    j_snprintf(v63, 0x400ui64, "%s%02x/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, duration, v31, v29, v31, chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], chunkSha1[7], chunkSha1[8], chunkSha1[9], chunkSha1[10], chunkSha1[11], chunkSha1[12], chunkSha1[13], chunkSha1[14], chunkSha1[15], chunkSha1[16], chunkSha1[17], chunkSha1[18], chunkSha1[19]);
    request.path = v63;
    response.destBuffer = dest;
    response.destSize = destLen;
    v19 = connection;
    v16 = simplehttp_request_do(connection, &request, &response);
    contentLength = response.contentLength;
    if ( !v16 )
      goto LABEL_7;
  }
  else
  {
    v19 = connection;
  }
  *connectionGood = 0;
  simplehttp_close_connection(v19);
LABEL_7:
  if ( v16 != -32375039 )
  {
    if ( v16 == -49152255 )
    {
      LODWORD(v47) = storageServerInfo->port;
      LODWORD(v45) = v13[19];
      LODWORD(v44) = v13[18];
      LODWORD(v43) = v13[17];
      LODWORD(v42) = v13[16];
      LODWORD(v41) = v13[15];
      LODWORD(v40) = v13[14];
      LODWORD(v39) = v13[13];
      LODWORD(v38) = v13[12];
      LODWORD(v37) = v13[11];
      LODWORD(v36) = v13[10];
      LODWORD(v35) = chunkSha1[9];
      LODWORD(v34) = chunkSha1[8];
      LODWORD(v33) = chunkSha1[7];
      LODWORD(v32) = chunkSha1[6];
      LODWORD(v30) = chunkSha1[5];
      LODWORD(v28) = chunkSha1[4];
      LODWORD(cacheStatus) = chunkSha1[3];
      LODWORD(duration) = chunkSha1[2];
      indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with an unexpected EOF\nURL: http:
      IndyFsScopedEvent::~IndyFsScopedEvent(&v60);
      result = 4245815041i64;
      goto LABEL_23;
    }
    if ( v16 || (unsigned int)(response.statusCode - 200) > 0x63 )
    {
      LODWORD(v48) = storageServerInfo->port;
      LODWORD(v46) = response.statusCode;
      LODWORD(v45) = v13[19];
      LODWORD(v44) = v13[18];
      LODWORD(v43) = v13[17];
      LODWORD(v42) = v13[16];
      LODWORD(v41) = v13[15];
      LODWORD(v40) = v13[14];
      LODWORD(v39) = v13[13];
      LODWORD(v38) = v13[12];
      LODWORD(v37) = v13[11];
      LODWORD(v36) = v13[10];
      LODWORD(v35) = chunkSha1[9];
      LODWORD(v34) = chunkSha1[8];
      LODWORD(v33) = chunkSha1[7];
      LODWORD(v32) = chunkSha1[6];
      LODWORD(v30) = chunkSha1[5];
      LODWORD(v28) = chunkSha1[4];
      LODWORD(cacheStatus) = chunkSha1[3];
      LODWORD(duration) = chunkSha1[2];
      indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with code [%u]\nURL: http:
      goto LABEL_22;
    }
    if ( contentLength != size )
    {
      LODWORD(v45) = v13[19];
      LODWORD(v44) = v13[18];
      LODWORD(v43) = v13[17];
      LODWORD(v42) = v13[16];
      LODWORD(v41) = v13[15];
      LODWORD(v40) = v13[14];
      LODWORD(v39) = v13[13];
      LODWORD(v38) = v13[12];
      LODWORD(v37) = v13[11];
      LODWORD(v36) = v13[10];
      LODWORD(v35) = v13[9];
      LODWORD(v34) = v13[8];
      LODWORD(v33) = chunkSha1[7];
      LODWORD(v32) = chunkSha1[6];
      LODWORD(v30) = chunkSha1[5];
      LODWORD(v28) = chunkSha1[4];
      LODWORD(cacheStatus) = chunkSha1[3];
      LODWORD(duration) = chunkSha1[2];
      indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x via HTTP. Expected %zu bytes but got %zu", *chunkSha1, chunkSha1[1], duration, cacheStatus, v28, v30, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, size, response.contentLength);
LABEL_22:
      IndyFsScopedEvent::~IndyFsScopedEvent(&v60);
      result = 0xFFFFFFFFi64;
      goto LABEL_23;
    }
    v21 = v55;
    v22 = v54;
    if ( v55 < v54 )
    {
      if ( v55 < 0x100 )
      {
LABEL_19:
        v61[v21] = 0;
        *(double *)&_XMM0 = indyfs_time_now_us();
        __asm
        {
          vsubsd  xmm1, xmm0, xmm6
          vmovsd  [rsp+0A30h+duration], xmm1
        }
        indyfs_statistics_internal_add_chunk_download(v13, chunkSize, offset, size, durationa, v61, taskId);
        IndyFsScopedEvent::~IndyFsScopedEvent(&v60);
        result = 0i64;
        goto LABEL_23;
      }
      j___report_rangecheckfailure(v54);
    }
    else
    {
      v21 = v54 - 1;
      if ( v54 - 1 < 0x100 )
        goto LABEL_19;
    }
    j___report_rangecheckfailure(v22);
    JUMPOUT(0x14388976Bi64);
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v60);
  result = 4262592257i64;
LABEL_23:
  __asm { vmovaps xmm6, [rsp+0A30h+var_50] }
  return result;
}

/*
==============
indyfs_http_download_chunk_to_file
==============
*/
__int64 indyfs_http_download_chunk_to_file(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, char *outputPath, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 taskId, bool *connectionGood)
{
  unsigned __int8 *v11; 
  bool *v14; 
  int v17; 
  unsigned __int64 contentLength; 
  IndyFsArkVersion arkVersion; 
  SimpleHttpConnection *v20; 
  void *v21; 
  __int64 result; 
  int v23; 
  unsigned __int64 v24; 
  __int64 v27; 
  long double v28; 
  char *cacheStatus; 
  int cacheStatusa; 
  unsigned __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  __int64 v68; 
  int v69; 
  int v70; 
  __int64 v71; 
  int v72; 
  int v73; 
  __int64 v74; 
  int v75; 
  int v76; 
  int v77; 
  SimpleHttpResponse response; 
  bool *v82; 
  __int64 v83[2]; 
  unsigned __int64 v84; 
  unsigned __int64 v85; 
  __int64 v86[2]; 
  unsigned __int64 v87; 
  SimpleHttpRequest request; 
  __int64 v89; 
  char v90[32]; 
  int v91; 
  __int64 v92; 
  void *v93; 
  __int64 v94; 
  IndyFsScopedEvent v95; 
  INDYFS_SFILE file; 
  char v97[256]; 
  char _Buffer[1024]; 

  v89 = -2i64;
  __asm { vmovaps [rsp+0C20h+var_50], xmm6 }
  v11 = chunkSha1;
  v14 = connectionGood;
  v82 = connectionGood;
  IndyFsScopedEvent::IndyFsScopedEvent(&v95, "Http", "GetToFile");
  *connectionGood = 1;
  if ( indyfs_sfopen(&file, outputPath) )
  {
    indyfs_log_message(Error, "Failed to open %s to store fetched data", outputPath);
LABEL_26:
    IndyFsScopedEvent::~IndyFsScopedEvent(&v95);
    goto LABEL_27;
  }
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm
  {
    vmovaps xmm6, xmm0
    vpxor   xmm1, xmm1, xmm1
    vmovdqu ymmword ptr [rbp+0AD0h+request.path], ymm1
  }
  request.headersLen = 0i64;
  request.verb = "GET";
  v83[0] = (__int64)"X-Cache-Status";
  v83[1] = (__int64)v97;
  v84 = 256i64;
  v85 = 0i64;
  memset(&response, 0, 32);
  *(_QWORD *)&response.statusCode = 0i64;
  response.contentLength = 0i64;
  response.headers = (SimpleHttpResponseHeader *)v83;
  response.headersLen = 1i64;
  v17 = -1;
  contentLength = -1i64;
  arkVersion = storageServerInfo->arkVersion;
  if ( arkVersion )
  {
    if ( arkVersion != V2 )
    {
      v20 = connection;
      goto LABEL_10;
    }
    v77 = v11[19];
    v75 = v11[18];
    v72 = v11[17];
    v69 = v11[16];
    v66 = v11[15];
    v63 = v11[14];
    v60 = v11[13];
    v57 = v11[12];
    v54 = v11[11];
    v51 = v11[10];
    v48 = v11[9];
    v45 = v11[8];
    v42 = v11[7];
    v11 = chunkSha1;
    v34 = chunkSha1[1];
    v32 = *chunkSha1;
    j_snprintf(_Buffer, 0x400ui64, "%s%02x/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, v32, v34, v32, v34, chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], v42, v45, v48, v51, v54, v57, v60, v63, v66, v69, v72, v75, v77);
    request.path = _Buffer;
    response.callback = (int (__fastcall *)(void *, unsigned __int64, int, void *))get_callback_to_file;
    response.callbackUserData = &file;
    v20 = connection;
    v17 = simplehttp_request_do(connection, &request, &response);
    contentLength = response.contentLength;
  }
  else
  {
    v76 = v11[19];
    v73 = v11[18];
    v70 = v11[17];
    v67 = v11[16];
    v64 = v11[15];
    v61 = v11[14];
    v58 = v11[13];
    v55 = v11[12];
    v52 = v11[11];
    v49 = v11[10];
    v46 = v11[9];
    v43 = v11[8];
    v40 = v11[7];
    v11 = chunkSha1;
    cacheStatusa = *chunkSha1;
    j_snprintf(_Buffer, 0x400ui64, "%s%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, cacheStatusa, cacheStatusa, chunkSha1[1], chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], v40, v43, v46, v49, v52, v55, v58, v61, v64, v67, v70, v73, v76);
    request.path = _Buffer;
    memset_0(v90, 0, 0x100ui64);
    v91 = 100;
    v21 = indyfs_alloc_decompression_scratchpad();
    v93 = v21;
    v94 = (__int64)v21 + 65540;
    v92 = 0x10000i64;
    v86[0] = (__int64)&file;
    v86[1] = (__int64)v90;
    v87 = 0i64;
    response.callback = (int (__fastcall *)(void *, unsigned __int64, int, void *))get_callback_decompress_to_file;
    response.callbackUserData = v86;
    v20 = connection;
    v17 = simplehttp_request_do(connection, &request, &response);
    contentLength = v87;
    indyfs_free_decompression_scratchpad(v21);
  }
  if ( !v17 )
    goto LABEL_11;
  v14 = v82;
LABEL_10:
  *v14 = 0;
  simplehttp_close_connection(v20);
  indyfs_sfclose_and_delete(&file);
LABEL_11:
  if ( v17 == -32375039 )
  {
    IndyFsScopedEvent::~IndyFsScopedEvent(&v95);
    result = 4262592257i64;
    goto LABEL_28;
  }
  if ( v17 == -49152255 )
  {
    LODWORD(v71) = storageServerInfo->port;
    LODWORD(v65) = v11[19];
    LODWORD(v62) = v11[18];
    LODWORD(v59) = v11[17];
    LODWORD(v56) = v11[16];
    LODWORD(v53) = v11[15];
    LODWORD(v50) = v11[14];
    LODWORD(v47) = v11[13];
    LODWORD(v44) = v11[12];
    LODWORD(v41) = v11[11];
    LODWORD(v39) = v11[10];
    LODWORD(v38) = chunkSha1[9];
    LODWORD(v37) = chunkSha1[8];
    LODWORD(v36) = chunkSha1[7];
    LODWORD(v35) = chunkSha1[6];
    LODWORD(v33) = chunkSha1[5];
    LODWORD(v31) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v27) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with an unexpected EOF\nURL: http:
    IndyFsScopedEvent::~IndyFsScopedEvent(&v95);
    result = 4245815041i64;
    goto LABEL_28;
  }
  if ( v17 || (unsigned int)(response.statusCode - 200) > 0x63 )
  {
    LODWORD(v74) = storageServerInfo->port;
    LODWORD(v68) = response.statusCode;
    LODWORD(v65) = v11[19];
    LODWORD(v62) = v11[18];
    LODWORD(v59) = v11[17];
    LODWORD(v56) = v11[16];
    LODWORD(v53) = v11[15];
    LODWORD(v50) = v11[14];
    LODWORD(v47) = v11[13];
    LODWORD(v44) = v11[12];
    LODWORD(v41) = v11[11];
    LODWORD(v39) = v11[10];
    LODWORD(v38) = chunkSha1[9];
    LODWORD(v37) = chunkSha1[8];
    LODWORD(v36) = chunkSha1[7];
    LODWORD(v35) = chunkSha1[6];
    LODWORD(v33) = chunkSha1[5];
    LODWORD(v31) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v27) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with code [%u]\nURL: http:
    goto LABEL_26;
  }
  if ( contentLength != chunkSize )
  {
    indyfs_sfclose_and_delete(&file);
    LODWORD(v65) = v11[19];
    LODWORD(v62) = v11[18];
    LODWORD(v59) = v11[17];
    LODWORD(v56) = v11[16];
    LODWORD(v53) = v11[15];
    LODWORD(v50) = v11[14];
    LODWORD(v47) = v11[13];
    LODWORD(v44) = v11[12];
    LODWORD(v41) = v11[11];
    LODWORD(v39) = v11[10];
    LODWORD(v38) = v11[9];
    LODWORD(v37) = chunkSha1[8];
    LODWORD(v36) = chunkSha1[7];
    LODWORD(v35) = chunkSha1[6];
    LODWORD(v33) = chunkSha1[5];
    LODWORD(v31) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v27) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x via HTTP. Expected %zu bytes but got %zu", *chunkSha1, chunkSha1[1], v27, cacheStatus, v31, v33, v35, v36, v37, v38, v39, v41, v44, v47, v50, v53, v56, v59, v62, v65, chunkSize, response.contentLength);
    goto LABEL_26;
  }
  v23 = indyfs_sfclose(&file);
  v24 = v85;
  if ( v85 >= v84 )
  {
    v24 = v84 - 1;
    if ( v84 - 1 < 0x100 )
      goto LABEL_23;
LABEL_30:
    j___report_rangecheckfailure(v24);
    JUMPOUT(0x14388A1C4i64);
  }
  if ( v85 >= 0x100 )
  {
    j___report_rangecheckfailure(v85);
    goto LABEL_30;
  }
LABEL_23:
  v97[v24] = 0;
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm
  {
    vsubsd  xmm1, xmm0, xmm6
    vmovsd  [rsp+0C20h+var_C00], xmm1
  }
  indyfs_statistics_internal_add_chunk_download(v11, chunkSize, 0i64, chunkSize, v28, v97, taskId);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v95);
  if ( v23 )
  {
LABEL_27:
    result = 0xFFFFFFFFi64;
    goto LABEL_28;
  }
  result = 0i64;
LABEL_28:
  __asm { vmovaps xmm6, [rsp+0C20h+var_50] }
  return result;
}

