/*
==============
DB_KeyFetch_ResetState
==============
*/

void __fastcall DB_KeyFetch_ResetState(const char *filename)
{
  ?DB_KeyFetch_ResetState@@YAXPEBD@Z(filename);
}

/*
==============
DB_SetupCTRWithKey
==============
*/

int __fastcall DB_SetupCTRWithKey(symmetric_CTR *ctr, __int64 numBlocks, const unsigned __int8 *iv, const unsigned __int8 *key)
{
  return ?DB_SetupCTRWithKey@@YAHPEAUsymmetric_CTR@@_JQEBE2@Z(ctr, numBlocks, iv, key);
}

/*
==============
DB_KeyFetch_TimeStamp
==============
*/

DWORD __stdcall DB_KeyFetch_TimeStamp()
{
  return ?DB_KeyFetch_TimeStamp@@YAHXZ();
}

/*
==============
DB_KeyFetch_HandleResponse
==============
*/

bool __fastcall DB_KeyFetch_HandleResponse(unsigned __int8 *recvBuff, int bytesReceived)
{
  return ?DB_KeyFetch_HandleResponse@@YA_NPEAEH@Z(recvBuff, bytesReceived);
}

/*
==============
DB_KeyFetch_Frame
==============
*/

void DB_KeyFetch_Frame(void)
{
  ?DB_KeyFetch_Frame@@YAXXZ();
}

/*
==============
DB_Decrypt
==============
*/

bool __fastcall DB_Decrypt(unsigned __int8 *ciphertext, unsigned int cipherTextSize, symmetric_CTR *ctr)
{
  return ?DB_Decrypt@@YA_NPEAEKPEAUsymmetric_CTR@@@Z(ciphertext, cipherTextSize, ctr);
}

/*
==============
DB_DecryptFileInit
==============
*/

void __fastcall DB_DecryptFileInit(DBFile *file, const EncryptionHeader *encHeader)
{
  ?DB_DecryptFileInit@@YAXPEAUDBFile@@AEBUEncryptionHeader@@@Z(file, encHeader);
}

/*
==============
DB_KeyFetch_RecvFrom
==============
*/

keyFetchRecvResult_e __fastcall DB_KeyFetch_RecvFrom(unsigned __int8 *recvBuff, int buffSize, int *bytesReceived)
{
  return ?DB_KeyFetch_RecvFrom@@YA?AW4keyFetchRecvResult_e@@PEAEHPEAH@Z(recvBuff, buffSize, bytesReceived);
}

/*
==============
DB_KeyFetch_InitPlatform
==============
*/

bool __fastcall DB_KeyFetch_InitPlatform()
{
  return ?DB_KeyFetch_InitPlatform@@YA_NXZ();
}

/*
==============
DB_FetchKey
==============
*/

bool __fastcall DB_FetchKey()
{
  return ?DB_FetchKey@@YA_NXZ();
}

/*
==============
DB_GetKey
==============
*/

bool __fastcall DB_GetKey(const char *filename, unsigned __int8 (*outKey)[32])
{
  return ?DB_GetKey@@YA_NPEBDPEAY0CA@E@Z(filename, outKey);
}

/*
==============
DB_Decrypt
==============
*/
char DB_Decrypt(unsigned __int8 *ciphertext, unsigned int cipherTextSize, symmetric_CTR *ctr)
{
  int v6; 
  const char *v7; 

  if ( !cipherTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 673, ASSERT_TYPE_ASSERT, "(0 < cipherTextSize)", (const char *)&queryFormat, "0 < cipherTextSize") )
    __debugbreak();
  v6 = j_ctr_decrypt(ciphertext, ciphertext, cipherTextSize, ctr);
  if ( !v6 )
    return 1;
  v7 = j_error_to_string(v6);
  Com_PrintError(10, "Could not decrypt: %s.\n", v7);
  return 0;
}

/*
==============
DB_DecryptFileInit
==============
*/
void DB_DecryptFileInit(DBFile *file, const EncryptionHeader *encHeader)
{
  __int64 v4; 
  unsigned __int8 *privateKey; 
  unsigned __int8 *IV; 
  __int64 v7; 
  unsigned __int64 v8; 

  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 698, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v4 = 32i64;
  privateKey = file->encryption.privateKey;
  do
  {
    if ( *privateKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 704, ASSERT_TYPE_ASSERT, "(!file->encryption.privateKey[i])", (const char *)&queryFormat, "!file->encryption.privateKey[i]") )
      __debugbreak();
    ++privateKey;
    --v4;
  }
  while ( v4 );
  IV = file->encryption.header.IV;
  v7 = 16i64;
  do
  {
    if ( *IV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 708, ASSERT_TYPE_ASSERT, "(!file->encryption.header.IV[i])", (const char *)&queryFormat, "!file->encryption.header.IV[i]") )
      __debugbreak();
    ++IV;
    --v7;
  }
  while ( v7 );
  file->encryption.header.isEncrypted = encHeader->isEncrypted;
  if ( encHeader->isEncrypted )
  {
    s_keyFetchState = KEY_FETCH_INIT;
    *(_QWORD *)s_aesKey = 0i64;
    v8 = -1i64;
    *(_QWORD *)&s_aesKey[8] = 0i64;
    *(_QWORD *)&s_aesKey[16] = 0i64;
    *(_QWORD *)&s_aesKey[24] = 0i64;
    do
      ++v8;
    while ( file->name[v8] );
    s_filenameHash = j_CoD_XXH32(file, v8, 0);
    if ( !s_filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 272, ASSERT_TYPE_ASSERT, "(0 != s_filenameHash)", (const char *)&queryFormat, "0 != s_filenameHash") )
      __debugbreak();
    DB_KeyFetch_Frame();
    if ( s_keyFetchState == KEY_FETCH_OK )
    {
LABEL_23:
      if ( file != (DBFile *)-104i64 )
        *(__m256i *)file->encryption.privateKey = *(__m256i *)s_aesKey;
    }
    else
    {
      while ( s_keyFetchState != KEY_FETCH_FATAL_ERROR )
      {
        Sys_Sleep(1);
        DB_KeyFetch_Frame();
        if ( s_keyFetchState == KEY_FETCH_OK )
          goto LABEL_23;
      }
      Sys_Error((const ObfuscateErrorText)&stru_143D7FC00, file);
    }
    *(_OWORD *)file->encryption.header.IV = *(_OWORD *)encHeader->IV;
  }
}

/*
==============
DB_FetchKey
==============
*/
char DB_FetchKey()
{
  struct hostent *v0; 
  char **h_addr_list; 
  int v2; 
  char buf[8]; 
  struct sockaddr to; 

  if ( (unsigned __int64)s_currentServer >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 161, ASSERT_TYPE_ASSERT, "(s_currentServer < ( sizeof( *array_counter( s_keyServerAddrs ) ) + 0 ))", (const char *)&queryFormat, "s_currentServer < ARRAY_COUNT( s_keyServerAddrs )") )
    __debugbreak();
  if ( !s_filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 162, ASSERT_TYPE_ASSERT, "(0 != s_filenameHash)", (const char *)&queryFormat, "0 != s_filenameHash") )
    __debugbreak();
  *(_QWORD *)buf = ((unsigned __int64)s_filenameHash << 32) | 0xDEADFAC2;
  to.sa_family = 2;
  *(_WORD *)to.sa_data = htons(0x2723u);
  *(_DWORD *)&to.sa_data[2] = inet_addr(s_keyServerAddrs[s_currentServer]);
  if ( *(_DWORD *)&to.sa_data[2] == -1 )
  {
    v0 = gethostbyname(s_keyServerAddrs[s_currentServer]);
    if ( v0 && v0->h_length == 4 && (h_addr_list = v0->h_addr_list) != NULL && *h_addr_list )
    {
      *(_DWORD *)&to.sa_data[2] = *(_DWORD *)*h_addr_list;
    }
    else
    {
      Com_PrintError(10, "%s: GetHostByName failed for %s\n", "DB_FetchKey", s_keyServerAddrs[s_currentServer]);
      *(_DWORD *)&to.sa_data[2] = 0;
    }
  }
  v2 = sendto(s_keySocket, buf, 8, 0, &to, 16);
  if ( v2 >= 0 )
    return 1;
  Com_PrintError(10, "%s: Err code %i sending to %s\n", "DB_FetchKey", (unsigned int)v2, s_keyServerAddrs[s_currentServer]);
  return 0;
}

/*
==============
DB_GetKey
==============
*/
bool DB_GetKey(const char *filename, unsigned __int8 (*outKey)[32])
{
  unsigned __int64 v3; 
  bool result; 

  s_keyFetchState = KEY_FETCH_INIT;
  *(_QWORD *)s_aesKey = 0i64;
  *(_QWORD *)&s_aesKey[8] = 0i64;
  v3 = -1i64;
  *(_QWORD *)&s_aesKey[16] = 0i64;
  *(_QWORD *)&s_aesKey[24] = 0i64;
  do
    ++v3;
  while ( filename[v3] );
  s_filenameHash = j_CoD_XXH32(filename, v3, 0);
  if ( !s_filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 272, ASSERT_TYPE_ASSERT, "(0 != s_filenameHash)", (const char *)&queryFormat, "0 != s_filenameHash") )
    __debugbreak();
  DB_KeyFetch_Frame();
  if ( s_keyFetchState == KEY_FETCH_OK )
  {
LABEL_9:
    result = 1;
    if ( outKey )
      *(__m256i *)outKey = *(__m256i *)s_aesKey;
  }
  else
  {
    while ( s_keyFetchState != KEY_FETCH_FATAL_ERROR )
    {
      Sys_Sleep(1);
      DB_KeyFetch_Frame();
      if ( s_keyFetchState == KEY_FETCH_OK )
        goto LABEL_9;
    }
    return 0;
  }
  return result;
}

/*
==============
DB_KeyFetchHandleSendToError
==============
*/
void DB_KeyFetchHandleSendToError()
{
  Com_PrintWarning(10, "%s: Got sendto error for current server ( %s ) - timing it out\n", "DB_KeyFetchHandleSendToError", s_keyServerAddrs[s_currentServer]);
  s_firstFetchMs = 0;
}

/*
==============
DB_KeyFetch_Frame
==============
*/
void DB_KeyFetch_Frame(void)
{
  unsigned int v0; 
  unsigned int Error; 
  int v2; 
  unsigned int v3; 
  SOCKET v4; 
  const char *String_Internal_DebugName; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  struct sockaddr *from; 
  int fromlen; 
  u_long argp; 
  struct sockaddr v14; 
  char buf[4]; 
  _DWORD v16[255]; 

  if ( s_keyFetchState == KEY_FETCH_INIT )
  {
    if ( s_keySocket == -1i64 )
    {
      v3 = WSAStartup(0x101u, &winsockdata);
      if ( v3 )
      {
        Com_PrintError(10, "%s: Winsock initialization failed, returned %d\n", "DB_KeyFetch_InitPlatform", v3);
        s_keyFetchState = KEY_FETCH_FATAL_ERROR;
        return;
      }
      v4 = socket(2, 2, 17);
      s_keySocket = v4;
      if ( v4 == -1i64 )
        goto LABEL_38;
      argp = 1;
      if ( ioctlsocket(v4, -2147195266, &argp) == -1 )
      {
        Com_PrintError(10, "%s: ioctlsocket non-block failed\n", "DB_KeyFetch_InitPlatform");
LABEL_38:
        s_keyFetchState = KEY_FETCH_FATAL_ERROR;
        return;
      }
    }
    String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_db_keyServer1, "db_keyServer1");
    if ( String_Internal_DebugName )
    {
      v6 = s_keyServerAddrs[0];
      if ( *String_Internal_DebugName )
        v6 = String_Internal_DebugName;
      s_keyServerAddrs[0] = v6;
    }
    v7 = Dvar_GetString_Internal_DebugName(DVARSTR_db_keyServer2, "db_keyServer2");
    if ( v7 )
    {
      v8 = s_keyServerAddrs[1];
      if ( *v7 )
        v8 = v7;
      s_keyServerAddrs[1] = v8;
    }
    v9 = Dvar_GetString_Internal_DebugName(DVARSTR_db_keyServer3, "db_keyServer3");
    if ( v9 )
    {
      v10 = s_keyServerAddrs[2];
      if ( *v9 )
        v10 = v9;
      s_keyServerAddrs[2] = v10;
    }
    s_currentServer = 0;
    s_firstFetchMs = GetTickCount();
    s_keyFetchState = KEY_FETCH_FETCH_KEY;
    if ( DB_FetchKey() )
      s_nextSendMs = GetTickCount() + 500;
    else
      DB_KeyFetchHandleSendToError();
    return;
  }
  if ( s_keyFetchState != KEY_FETCH_FETCH_KEY )
    return;
  memset_0(buf, 0, 0x400ui64);
  if ( !s_keySocket )
    goto LABEL_31;
  fromlen = 16;
  v0 = recvfrom(s_keySocket, buf, 1024, 0, &v14, &fromlen);
  if ( v0 == -1 )
  {
    Error = WSAGetLastError();
    if ( Error == 10054 )
    {
      v2 = v0 + 3;
    }
    else if ( Error == 10035 )
    {
      v2 = 1;
    }
    else
    {
      Com_PrintError(10, "%s: Got fatal error %u from recvfrom\n", "DB_KeyFetch_RecvFrom", Error);
      v2 = 3;
    }
  }
  else
  {
    v2 = 0;
  }
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      Com_PrintWarning(10, "%s: Got connection reset for current server ( %s ) - timing it out\n", "DB_KeyFetch_Frame", s_keyServerAddrs[s_currentServer]);
      s_firstFetchMs = 0;
      return;
    }
    if ( v2 != 3 )
      goto LABEL_22;
LABEL_31:
    Com_PrintError(10, "%s: Got fatal error from recvfrom\n", "DB_KeyFetch_Frame");
    goto LABEL_25;
  }
  if ( v0 == 40 )
  {
    if ( *(_DWORD *)buf == -559023422 )
    {
      if ( v16[0] == s_filenameHash )
      {
        *(__m256i *)s_aesKey = *(__m256i *)&v16[1];
        s_keyFetchState = KEY_FETCH_OK;
        return;
      }
      LODWORD(from) = s_filenameHash;
      Com_PrintWarning(10, "%s: Received filename hash %u, expected %u\n", "DB_KeyFetch_HandleResponse", v16[0], from);
    }
    else
    {
      Com_PrintWarning(10, "%s: Unexpected preamble %u\n", "DB_KeyFetch_HandleResponse", *(unsigned int *)buf);
    }
  }
  else
  {
    Com_PrintError(10, "%s: %i bytes received, expected %lu\n", "DB_KeyFetch_HandleResponse", v0, 40i64);
  }
LABEL_22:
  if ( (int)(GetTickCount() - s_firstFetchMs) <= 2500 )
  {
    if ( (int)GetTickCount() <= s_nextSendMs )
      return;
  }
  else
  {
    LODWORD(from) = GetTickCount() - s_firstFetchMs;
    Com_PrintWarning(10, "%s: Server %s timed out after %ims, moving on..\n", "DB_KeyFetch_Frame", s_keyServerAddrs[s_currentServer], from);
    *(_QWORD *)&s_toAddr.sin_family = 0i64;
    *(_QWORD *)s_toAddr.sin_zero = 0i64;
    if ( ++s_currentServer == 3 )
    {
      Com_PrintError(10, "%s: Ran out of servers :(\n", "DB_KeyFetch_Frame");
LABEL_25:
      s_keyFetchState = KEY_FETCH_FATAL_ERROR;
      return;
    }
    s_firstFetchMs = GetTickCount();
  }
  s_nextSendMs = GetTickCount() + 500;
  if ( !DB_FetchKey() )
    DB_KeyFetchHandleSendToError();
}

/*
==============
DB_KeyFetch_HandleResponse
==============
*/
char DB_KeyFetch_HandleResponse(unsigned __int8 *recvBuff, int bytesReceived)
{
  __int64 v2; 
  __int64 v3; 

  if ( bytesReceived == 40 )
  {
    v2 = *(unsigned int *)recvBuff;
    if ( (_DWORD)v2 == -559023422 )
    {
      v3 = *((unsigned int *)recvBuff + 1);
      if ( (_DWORD)v3 == s_filenameHash )
      {
        *(__m256i *)s_aesKey = *(__m256i *)(recvBuff + 8);
        return 1;
      }
      else
      {
        Com_PrintWarning(10, "%s: Received filename hash %u, expected %u\n", "DB_KeyFetch_HandleResponse", v3, s_filenameHash);
        return 0;
      }
    }
    else
    {
      Com_PrintWarning(10, "%s: Unexpected preamble %u\n", "DB_KeyFetch_HandleResponse", v2);
      return 0;
    }
  }
  else
  {
    Com_PrintError(10, "%s: %i bytes received, expected %lu\n", "DB_KeyFetch_HandleResponse", (unsigned int)bytesReceived, 40i64);
    return 0;
  }
}

/*
==============
DB_KeyFetch_InitPlatform
==============
*/
char DB_KeyFetch_InitPlatform()
{
  unsigned int v0; 
  SOCKET v2; 
  u_long argp; 

  if ( s_keySocket == -1i64 )
  {
    v0 = WSAStartup(0x101u, &winsockdata);
    if ( v0 )
    {
      Com_PrintError(10, "%s: Winsock initialization failed, returned %d\n", "DB_KeyFetch_InitPlatform", v0);
      return 0;
    }
    v2 = socket(2, 2, 17);
    s_keySocket = v2;
    if ( v2 == -1i64 )
      return 0;
    argp = 1;
    if ( ioctlsocket(v2, -2147195266, &argp) == -1 )
    {
      Com_PrintError(10, "%s: ioctlsocket non-block failed\n", "DB_KeyFetch_InitPlatform");
      return 0;
    }
  }
  return 1;
}

/*
==============
DB_KeyFetch_RecvFrom
==============
*/
__int64 DB_KeyFetch_RecvFrom(unsigned __int8 *recvBuff, int buffSize, int *bytesReceived)
{
  int v4; 
  unsigned int Error; 
  int fromlen; 
  struct sockaddr from; 

  if ( !s_keySocket )
    return 3i64;
  fromlen = 16;
  v4 = recvfrom(s_keySocket, (char *)recvBuff, buffSize, 0, &from, &fromlen);
  *bytesReceived = v4;
  if ( v4 == -1 )
  {
    Error = WSAGetLastError();
    if ( Error == 10054 )
      return 2i64;
    if ( Error == 10035 )
      return 1i64;
    Com_PrintError(10, "%s: Got fatal error %u from recvfrom\n", "DB_KeyFetch_RecvFrom", Error);
    return 3i64;
  }
  return 0i64;
}

/*
==============
DB_KeyFetch_ResetState
==============
*/
void DB_KeyFetch_ResetState(const char *filename)
{
  unsigned __int64 v1; 

  s_keyFetchState = KEY_FETCH_INIT;
  *(_QWORD *)s_aesKey = 0i64;
  v1 = -1i64;
  *(_QWORD *)&s_aesKey[8] = 0i64;
  *(_QWORD *)&s_aesKey[16] = 0i64;
  *(_QWORD *)&s_aesKey[24] = 0i64;
  do
    ++v1;
  while ( filename[v1] );
  s_filenameHash = j_CoD_XXH32(filename, v1, 0);
  if ( !s_filenameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 272, ASSERT_TYPE_ASSERT, "(0 != s_filenameHash)", (const char *)&queryFormat, "0 != s_filenameHash") )
    __debugbreak();
}

/*
==============
DB_KeyFetch_TimeStamp
==============
*/

DWORD __stdcall DB_KeyFetch_TimeStamp()
{
  return GetTickCount();
}

/*
==============
DB_SetupCTRWithKey
==============
*/
__int64 DB_SetupCTRWithKey(symmetric_CTR *ctr, __int64 numBlocks, const unsigned __int8 *iv, const unsigned __int8 *key)
{
  int cipher; 
  unsigned int v10; 
  unsigned __int8 IV[16]; 

  if ( j_register_cipher(&aes_desc) == -1 )
  {
    Com_PrintError(10, "%s: Could not register cipher.\n", "DB_SetupCTRWithKey");
    return 0xFFFFFFFFi64;
  }
  else
  {
    cipher = j_find_cipher("aes");
    if ( cipher == -1 )
    {
      Com_PrintError(10, "%s: Could not find AES in cipher list.\n", "DB_SetupCTRWithKey");
      return 0xFFFFFFFFi64;
    }
    else
    {
      *(_OWORD *)IV = *(_OWORD *)iv;
      if ( numBlocks > 0 )
      {
        *(_QWORD *)IV += numBlocks;
        if ( *(_QWORD *)IV == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_encryption.cpp", 654, ASSERT_TYPE_ASSERT, "(*salt < 0xffffffffffffffffui64)", (const char *)&queryFormat, "*salt < UINT64_MAX") )
          __debugbreak();
      }
      v10 = j_ctr_start(cipher, IV, key, 32, 0, 0, ctr);
      if ( v10 )
      {
        Com_PrintError(10, "%s: Could not start CTR\n", "DB_SetupCTRWithKey");
        return v10;
      }
      else
      {
        return 0i64;
      }
    }
  }
}

