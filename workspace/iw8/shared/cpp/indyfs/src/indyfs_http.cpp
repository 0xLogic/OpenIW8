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
  unsigned __int8 *v12; 
  double v13; 
  int v15; 
  unsigned __int64 contentLength; 
  IndyFsArkVersion arkVersion; 
  SimpleHttpConnection *v18; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  long double v22; 
  __int64 duration; 
  char *cacheStatus; 
  unsigned __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
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
  __int64 v50[2]; 
  unsigned __int64 v51; 
  unsigned __int64 v52; 
  SimpleHttpResponse response; 
  __int64 v54[2]; 
  SimpleHttpRequest request; 
  __int64 v56; 
  IndyFsScopedEvent v57; 
  char v58[256]; 
  char _Buffer[256]; 
  char v60[1024]; 

  v56 = -2i64;
  v12 = chunkSha1;
  IndyFsScopedEvent::IndyFsScopedEvent(&v57, "Http", "GetRangeRequest");
  *connectionGood = 1;
  *(double *)&_XMM0 = indyfs_time_now_us();
  v13 = *(double *)&_XMM0;
  j_snprintf(_Buffer, 0x100ui64, "bytes=%llu-%llu", offset, offset + size - 1);
  v54[0] = (__int64)"Range";
  v54[1] = (__int64)_Buffer;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&request.path = _XMM0;
  request.bodySize = 0i64;
  request.verb = "GET";
  request.headers = (SimpleHttpRequestHeader *)v54;
  request.headersLen = 1i64;
  v50[0] = (__int64)"X-Cache-Status";
  v50[1] = (__int64)v58;
  v51 = 256i64;
  v52 = 0i64;
  response.destBuffer = NULL;
  response.destSize = 0i64;
  *(_OWORD *)&response.callback = _XMM0;
  *(_QWORD *)&response.statusCode = 0i64;
  response.contentLength = 0i64;
  response.headers = (SimpleHttpResponseHeader *)v50;
  response.headersLen = 1i64;
  v15 = -1;
  contentLength = -1i64;
  arkVersion = storageServerInfo->arkVersion;
  if ( arkVersion == V1 )
  {
    indyfs_log_message(Error, "indyfs_download_chunk_portion_to_memory does not support ArkVersion V1");
    goto LABEL_22;
  }
  if ( arkVersion == V2 )
  {
    v12 = chunkSha1;
    v28 = chunkSha1[1];
    v26 = *chunkSha1;
    LODWORD(duration) = v26;
    j_snprintf(v60, 0x400ui64, "%s%02x/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, duration, v28, v26, v28, chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], chunkSha1[7], chunkSha1[8], chunkSha1[9], chunkSha1[10], chunkSha1[11], chunkSha1[12], chunkSha1[13], chunkSha1[14], chunkSha1[15], chunkSha1[16], chunkSha1[17], chunkSha1[18], chunkSha1[19]);
    request.path = v60;
    response.destBuffer = dest;
    response.destSize = destLen;
    v18 = connection;
    v15 = simplehttp_request_do(connection, &request, &response);
    contentLength = response.contentLength;
    if ( !v15 )
      goto LABEL_7;
  }
  else
  {
    v18 = connection;
  }
  *connectionGood = 0;
  simplehttp_close_connection(v18);
LABEL_7:
  if ( v15 == -32375039 )
  {
    IndyFsScopedEvent::~IndyFsScopedEvent(&v57);
    return 4262592257i64;
  }
  if ( v15 == -49152255 )
  {
    LODWORD(v44) = storageServerInfo->port;
    LODWORD(v42) = v12[19];
    LODWORD(v41) = v12[18];
    LODWORD(v40) = v12[17];
    LODWORD(v39) = v12[16];
    LODWORD(v38) = v12[15];
    LODWORD(v37) = v12[14];
    LODWORD(v36) = v12[13];
    LODWORD(v35) = v12[12];
    LODWORD(v34) = v12[11];
    LODWORD(v33) = v12[10];
    LODWORD(v32) = chunkSha1[9];
    LODWORD(v31) = chunkSha1[8];
    LODWORD(v30) = chunkSha1[7];
    LODWORD(v29) = chunkSha1[6];
    LODWORD(v27) = chunkSha1[5];
    LODWORD(v25) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(duration) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with an unexpected EOF\nURL: http:
    IndyFsScopedEvent::~IndyFsScopedEvent(&v57);
    return 4245815041i64;
  }
  if ( v15 || (unsigned int)(response.statusCode - 200) > 0x63 )
  {
    LODWORD(v45) = storageServerInfo->port;
    LODWORD(v43) = response.statusCode;
    LODWORD(v42) = v12[19];
    LODWORD(v41) = v12[18];
    LODWORD(v40) = v12[17];
    LODWORD(v39) = v12[16];
    LODWORD(v38) = v12[15];
    LODWORD(v37) = v12[14];
    LODWORD(v36) = v12[13];
    LODWORD(v35) = v12[12];
    LODWORD(v34) = v12[11];
    LODWORD(v33) = v12[10];
    LODWORD(v32) = chunkSha1[9];
    LODWORD(v31) = chunkSha1[8];
    LODWORD(v30) = chunkSha1[7];
    LODWORD(v29) = chunkSha1[6];
    LODWORD(v27) = chunkSha1[5];
    LODWORD(v25) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(duration) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with code [%u]\nURL: http:
    goto LABEL_22;
  }
  if ( contentLength == size )
  {
    v20 = v52;
    v21 = v51;
    if ( v52 < v51 )
    {
      if ( v52 < 0x100 )
      {
LABEL_19:
        v58[v20] = 0;
        v22 = indyfs_time_now_us();
        indyfs_statistics_internal_add_chunk_download(v12, chunkSize, offset, size, v22 - v13, v58, taskId);
        IndyFsScopedEvent::~IndyFsScopedEvent(&v57);
        return 0i64;
      }
      j___report_rangecheckfailure(v51);
    }
    else
    {
      v20 = v51 - 1;
      if ( v51 - 1 < 0x100 )
        goto LABEL_19;
    }
    j___report_rangecheckfailure(v21);
    JUMPOUT(0x14388976Bi64);
  }
  LODWORD(v42) = v12[19];
  LODWORD(v41) = v12[18];
  LODWORD(v40) = v12[17];
  LODWORD(v39) = v12[16];
  LODWORD(v38) = v12[15];
  LODWORD(v37) = v12[14];
  LODWORD(v36) = v12[13];
  LODWORD(v35) = v12[12];
  LODWORD(v34) = v12[11];
  LODWORD(v33) = v12[10];
  LODWORD(v32) = v12[9];
  LODWORD(v31) = v12[8];
  LODWORD(v30) = chunkSha1[7];
  LODWORD(v29) = chunkSha1[6];
  LODWORD(v27) = chunkSha1[5];
  LODWORD(v25) = chunkSha1[4];
  LODWORD(cacheStatus) = chunkSha1[3];
  LODWORD(duration) = chunkSha1[2];
  indyfs_log_message(Canceled, "Failed to fetch portion of chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x via HTTP. Expected %zu bytes but got %zu", *chunkSha1, chunkSha1[1], duration, cacheStatus, v25, v27, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, size, response.contentLength);
LABEL_22:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v57);
  return 0xFFFFFFFFi64;
}

/*
==============
indyfs_http_download_chunk_to_file
==============
*/
__int64 indyfs_http_download_chunk_to_file(SimpleHttpConnection *connection, IndyFsStorageServerInfo *storageServerInfo, char *outputPath, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, unsigned __int64 taskId, bool *connectionGood)
{
  __m256i v8; 
  unsigned __int8 *v9; 
  bool *v12; 
  double v13; 
  int v15; 
  unsigned __int64 contentLength; 
  IndyFsArkVersion arkVersion; 
  SimpleHttpConnection *v18; 
  void *v19; 
  int v21; 
  unsigned __int64 v22; 
  long double v23; 
  __int64 v24; 
  char *cacheStatus; 
  int cacheStatusa; 
  unsigned __int64 v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  int v45; 
  __int64 v46; 
  int v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  __int64 v61; 
  int v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  int v72; 
  int v73; 
  SimpleHttpResponse response; 
  bool *v78; 
  __int64 v79[2]; 
  unsigned __int64 v80; 
  unsigned __int64 v81; 
  __int64 v82[2]; 
  unsigned __int64 v83; 
  SimpleHttpRequest request; 
  __int64 v85; 
  char v86[32]; 
  int v87; 
  __int64 v88; 
  void *v89; 
  __int64 v90; 
  IndyFsScopedEvent v91; 
  INDYFS_SFILE file; 
  char v93[256]; 
  char _Buffer[1024]; 

  v85 = -2i64;
  v9 = chunkSha1;
  v12 = connectionGood;
  v78 = connectionGood;
  IndyFsScopedEvent::IndyFsScopedEvent(&v91, "Http", "GetToFile");
  *connectionGood = 1;
  if ( indyfs_sfopen(&file, outputPath) )
  {
    indyfs_log_message(Error, "Failed to open %s to store fetched data", outputPath);
LABEL_26:
    IndyFsScopedEvent::~IndyFsScopedEvent(&v91);
    return 0xFFFFFFFFi64;
  }
  v13 = indyfs_time_now_us();
  __asm { vpxor   xmm1, xmm1, xmm1 }
  *(__m256i *)&request.path = v8;
  request.headersLen = 0i64;
  request.verb = "GET";
  v79[0] = (__int64)"X-Cache-Status";
  v79[1] = (__int64)v93;
  v80 = 256i64;
  v81 = 0i64;
  memset(&response, 0, 32);
  *(_QWORD *)&response.statusCode = 0i64;
  response.contentLength = 0i64;
  response.headers = (SimpleHttpResponseHeader *)v79;
  response.headersLen = 1i64;
  v15 = -1;
  contentLength = -1i64;
  arkVersion = storageServerInfo->arkVersion;
  if ( arkVersion )
  {
    if ( arkVersion != V2 )
    {
      v18 = connection;
      goto LABEL_10;
    }
    v73 = v9[19];
    v71 = v9[18];
    v68 = v9[17];
    v65 = v9[16];
    v62 = v9[15];
    v59 = v9[14];
    v56 = v9[13];
    v53 = v9[12];
    v50 = v9[11];
    v47 = v9[10];
    v44 = v9[9];
    v41 = v9[8];
    v38 = v9[7];
    v9 = chunkSha1;
    v30 = chunkSha1[1];
    v28 = *chunkSha1;
    j_snprintf(_Buffer, 0x400ui64, "%s%02x/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, v28, v30, v28, v30, chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], v38, v41, v44, v47, v50, v53, v56, v59, v62, v65, v68, v71, v73);
    request.path = _Buffer;
    response.callback = (int (__fastcall *)(void *, unsigned __int64, int, void *))get_callback_to_file;
    response.callbackUserData = &file;
    v18 = connection;
    v15 = simplehttp_request_do(connection, &request, &response);
    contentLength = response.contentLength;
  }
  else
  {
    v72 = v9[19];
    v69 = v9[18];
    v66 = v9[17];
    v63 = v9[16];
    v60 = v9[15];
    v57 = v9[14];
    v54 = v9[13];
    v51 = v9[12];
    v48 = v9[11];
    v45 = v9[10];
    v42 = v9[9];
    v39 = v9[8];
    v36 = v9[7];
    v9 = chunkSha1;
    cacheStatusa = *chunkSha1;
    j_snprintf(_Buffer, 0x400ui64, "%s%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->basePath, cacheStatusa, cacheStatusa, chunkSha1[1], chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], v36, v39, v42, v45, v48, v51, v54, v57, v60, v63, v66, v69, v72);
    request.path = _Buffer;
    memset_0(v86, 0, 0x100ui64);
    v87 = 100;
    v19 = indyfs_alloc_decompression_scratchpad();
    v89 = v19;
    v90 = (__int64)v19 + 65540;
    v88 = 0x10000i64;
    v82[0] = (__int64)&file;
    v82[1] = (__int64)v86;
    v83 = 0i64;
    response.callback = (int (__fastcall *)(void *, unsigned __int64, int, void *))get_callback_decompress_to_file;
    response.callbackUserData = v82;
    v18 = connection;
    v15 = simplehttp_request_do(connection, &request, &response);
    contentLength = v83;
    indyfs_free_decompression_scratchpad(v19);
  }
  if ( !v15 )
    goto LABEL_11;
  v12 = v78;
LABEL_10:
  *v12 = 0;
  simplehttp_close_connection(v18);
  indyfs_sfclose_and_delete(&file);
LABEL_11:
  if ( v15 == -32375039 )
  {
    IndyFsScopedEvent::~IndyFsScopedEvent(&v91);
    return 4262592257i64;
  }
  if ( v15 == -49152255 )
  {
    LODWORD(v67) = storageServerInfo->port;
    LODWORD(v61) = v9[19];
    LODWORD(v58) = v9[18];
    LODWORD(v55) = v9[17];
    LODWORD(v52) = v9[16];
    LODWORD(v49) = v9[15];
    LODWORD(v46) = v9[14];
    LODWORD(v43) = v9[13];
    LODWORD(v40) = v9[12];
    LODWORD(v37) = v9[11];
    LODWORD(v35) = v9[10];
    LODWORD(v34) = chunkSha1[9];
    LODWORD(v33) = chunkSha1[8];
    LODWORD(v32) = chunkSha1[7];
    LODWORD(v31) = chunkSha1[6];
    LODWORD(v29) = chunkSha1[5];
    LODWORD(v27) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v24) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with an unexpected EOF\nURL: http:
    IndyFsScopedEvent::~IndyFsScopedEvent(&v91);
    return 4245815041i64;
  }
  if ( v15 || (unsigned int)(response.statusCode - 200) > 0x63 )
  {
    LODWORD(v70) = storageServerInfo->port;
    LODWORD(v64) = response.statusCode;
    LODWORD(v61) = v9[19];
    LODWORD(v58) = v9[18];
    LODWORD(v55) = v9[17];
    LODWORD(v52) = v9[16];
    LODWORD(v49) = v9[15];
    LODWORD(v46) = v9[14];
    LODWORD(v43) = v9[13];
    LODWORD(v40) = v9[12];
    LODWORD(v37) = v9[11];
    LODWORD(v35) = v9[10];
    LODWORD(v34) = chunkSha1[9];
    LODWORD(v33) = chunkSha1[8];
    LODWORD(v32) = chunkSha1[7];
    LODWORD(v31) = chunkSha1[6];
    LODWORD(v29) = chunkSha1[5];
    LODWORD(v27) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v24) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. HTTP fetch failed with code [%u]\nURL: http:
    goto LABEL_26;
  }
  if ( contentLength != chunkSize )
  {
    indyfs_sfclose_and_delete(&file);
    LODWORD(v61) = v9[19];
    LODWORD(v58) = v9[18];
    LODWORD(v55) = v9[17];
    LODWORD(v52) = v9[16];
    LODWORD(v49) = v9[15];
    LODWORD(v46) = v9[14];
    LODWORD(v43) = v9[13];
    LODWORD(v40) = v9[12];
    LODWORD(v37) = v9[11];
    LODWORD(v35) = v9[10];
    LODWORD(v34) = v9[9];
    LODWORD(v33) = chunkSha1[8];
    LODWORD(v32) = chunkSha1[7];
    LODWORD(v31) = chunkSha1[6];
    LODWORD(v29) = chunkSha1[5];
    LODWORD(v27) = chunkSha1[4];
    LODWORD(cacheStatus) = chunkSha1[3];
    LODWORD(v24) = chunkSha1[2];
    indyfs_log_message(Canceled, "Failed to fetch chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x via HTTP. Expected %zu bytes but got %zu", *chunkSha1, chunkSha1[1], v24, cacheStatus, v27, v29, v31, v32, v33, v34, v35, v37, v40, v43, v46, v49, v52, v55, v58, v61, chunkSize, response.contentLength);
    goto LABEL_26;
  }
  v21 = indyfs_sfclose(&file);
  v22 = v81;
  if ( v81 < v80 )
  {
    if ( v81 < 0x100 )
      goto LABEL_23;
    j___report_rangecheckfailure(v81);
LABEL_30:
    j___report_rangecheckfailure(v22);
    JUMPOUT(0x14388A1C4i64);
  }
  v22 = v80 - 1;
  if ( v80 - 1 >= 0x100 )
    goto LABEL_30;
LABEL_23:
  v93[v22] = 0;
  v23 = indyfs_time_now_us();
  indyfs_statistics_internal_add_chunk_download(v9, chunkSize, 0i64, chunkSize, v23 - v13, v93, taskId);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v91);
  if ( !v21 )
    return 0i64;
  return 0xFFFFFFFFi64;
}

