/*
==============
ConvertCharArrayToWideCharArray
==============
*/

bool __fastcall ConvertCharArrayToWideCharArray(const char *pSrcBuffer, wchar_t *pDestBuffer, unsigned __int64 destBufferMax)
{
  return ?ConvertCharArrayToWideCharArray@@YA_NPEBDPEA_W_K@Z(pSrcBuffer, pDestBuffer, destBufferMax);
}

/*
==============
EncodeDataToPlatformString
==============
*/

void __fastcall EncodeDataToPlatformString(const void *data, const int dataSize, Platform::String **string)
{
  ?EncodeDataToPlatformString@@YAXPEBXHAEAPE$AAVString@Platform@@@Z(data, dataSize, string);
}

/*
==============
IsStringEqualCaseInsenstive
==============
*/

bool __fastcall IsStringEqualCaseInsenstive(Platform::String *val1, Platform::String *val2)
{
  return ?IsStringEqualCaseInsenstive@@YA_NPE$AAVString@Platform@@0@Z(val1, val2);
}

/*
==============
GetUserFromControllerIndex
==============
*/

Windows::Xbox::System::User *__fastcall GetUserFromControllerIndex(const int controllerIndex)
{
  return ?GetUserFromControllerIndex@@YAPE$AAVUser@System@Xbox@Windows@@H@Z(controllerIndex);
}

/*
==============
CopyBuffer
==============
*/

Windows::Storage::Streams::IBuffer *__fastcall CopyBuffer(Windows::Storage::Streams::IBuffer *buffer)
{
  return ?CopyBuffer@@YAPE$AAUIBuffer@Streams@Storage@Windows@@PE$AAU1234@@Z(buffer);
}

/*
==============
GetUserFromPlatformId
==============
*/

Windows::Xbox::System::User *__fastcall GetUserFromPlatformId(unsigned __int64 platformId)
{
  return ?GetUserFromPlatformId@@YAPE$AAVUser@System@Xbox@Windows@@_K@Z(platformId);
}

/*
==============
CountGlyphsInUTF8String
==============
*/

int __fastcall CountGlyphsInUTF8String(char *pString)
{
  return ?CountGlyphsInUTF8String@@YAHPEAD@Z(pString);
}

/*
==============
MPSDIDToPlatformString
==============
*/

Platform::String *__fastcall MPSDIDToPlatformString(const _GUID *mpsdID)
{
  return ?MPSDIDToPlatformString@@YAPE$AAVString@Platform@@PEBU_GUID@@@Z(mpsdID);
}

/*
==============
ConvertStringGamertagToDisplayableBuffer
==============
*/

void __fastcall ConvertStringGamertagToDisplayableBuffer(Platform::String *string, char *pDestBuffer, unsigned __int64 destBufferMax)
{
  ?ConvertStringGamertagToDisplayableBuffer@@YAXPE$AAVString@Platform@@PEAD_K@Z(string, pDestBuffer, destBufferMax);
}

/*
==============
MPSDIDToString
==============
*/

void __fastcall MPSDIDToString(const _GUID *mpsdId, char *str)
{
  ?MPSDIDToString@@YAXPEBU_GUID@@PEAD@Z(mpsdId, str);
}

/*
==============
DecodeDataFromPlatformString
==============
*/

int __fastcall DecodeDataFromPlatformString(Platform::String *string, void *data, const int expectedSize)
{
  return ?DecodeDataFromPlatformString@@YAHPE$AAVString@Platform@@PEAXH@Z(string, data, expectedSize);
}

/*
==============
StringToMPSDID
==============
*/

void __fastcall StringToMPSDID(const char *str, _GUID *mpsdId)
{
  ?StringToMPSDID@@YAXPEBDPEAU_GUID@@@Z(str, mpsdId);
}

/*
==============
ConvertToWindowsXboxMultiplayerSessionReference
==============
*/

Windows::Xbox::Multiplayer::MultiplayerSessionReference *__fastcall ConvertToWindowsXboxMultiplayerSessionReference(Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *sessionRef)
{
  return ?ConvertToWindowsXboxMultiplayerSessionReference@@YAPE$AAVMultiplayerSessionReference@Multiplayer@Xbox@Windows@@PE$AAV12Services@3Microsoft@@@Z(sessionRef);
}

/*
==============
ConvertPlatformStringToPlatformId
==============
*/

void __fastcall ConvertPlatformStringToPlatformId(Platform::String *stringXUID, unsigned __int64 *platformId)
{
  ?ConvertPlatformStringToPlatformId@@YAXPE$AAVString@Platform@@PEA_K@Z(stringXUID, platformId);
}

/*
==============
ConvertToMicrosoftXboxServicesMultiplayerSessionReference
==============
*/

Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *__fastcall ConvertToMicrosoftXboxServicesMultiplayerSessionReference(Windows::Xbox::Multiplayer::MultiplayerSessionReference *sessionRef)
{
  return ?ConvertToMicrosoftXboxServicesMultiplayerSessionReference@@YAPE$AAVMultiplayerSessionReference@Multiplayer@Services@Xbox@Microsoft@@PE$AAV124Windows@@@Z(sessionRef);
}

/*
==============
ConvertPlatformStringToCharArray
==============
*/

bool __fastcall ConvertPlatformStringToCharArray(Platform::String *srcRef, char *pDestBuffer, unsigned __int64 destBufferMax)
{
  return ?ConvertPlatformStringToCharArray@@YA_NPE$AAVString@Platform@@PEAD_K@Z(srcRef, pDestBuffer, destBufferMax);
}

/*
==============
ConvertPlatformIdToPlatformString
==============
*/

void __fastcall ConvertPlatformIdToPlatformString(const unsigned __int64 platformId, Platform::String **stringXUID)
{
  ?ConvertPlatformIdToPlatformString@@YAX_KAEAPE$AAVString@Platform@@@Z(platformId, stringXUID);
}

/*
==============
MPSDIDToWString
==============
*/

std::wstring *__fastcall MPSDIDToWString(std::wstring *result, const _GUID *mpsdID)
{
  return ?MPSDIDToWString@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBU_GUID@@@Z(result, mpsdID);
}

/*
==============
ConvertPlatformIdToWCHAR
==============
*/

void __fastcall ConvertPlatformIdToWCHAR(const unsigned __int64 platformId, wchar_t *wcharArray, const int bufferSize)
{
  ?ConvertPlatformIdToWCHAR@@YAX_KPEA_WH@Z(platformId, wcharArray, bufferSize);
}

/*
==============
ConvertPCWStringToPlatformId
==============
*/

void __fastcall ConvertPCWStringToPlatformId(const wchar_t *stringXUID, unsigned __int64 *platformId)
{
  ?ConvertPCWStringToPlatformId@@YAXPEB_WPEA_K@Z(stringXUID, platformId);
}

/*
==============
ConvertCharArrayToWideCharArray
==============
*/
bool ConvertCharArrayToWideCharArray(const char *pSrcBuffer, wchar_t *pDestBuffer, unsigned __int64 destBufferMax)
{
  size_t v6; 
  __int64 v7; 

  if ( !pSrcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 53, ASSERT_TYPE_ASSERT, "(pSrcBuffer)", (const char *)&queryFormat, "pSrcBuffer") )
    __debugbreak();
  if ( !pDestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 54, ASSERT_TYPE_ASSERT, "(pDestBuffer)", (const char *)&queryFormat, "pDestBuffer") )
    __debugbreak();
  v6 = mbstowcs(pDestBuffer, pSrcBuffer, destBufferMax);
  v7 = -1i64;
  do
    ++v7;
  while ( pSrcBuffer[v7] );
  pDestBuffer[destBufferMax - 1] = 0;
  return v6 == v7;
}

/*
==============
ConvertPCWStringToPlatformId
==============
*/
void ConvertPCWStringToPlatformId(const wchar_t *stringXUID, unsigned __int64 *platformId)
{
  char Dest[24]; 

  wcstombs(Dest, stringXUID, 0x15ui64);
  Dest[20] = 0;
  if ( !platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 77, ASSERT_TYPE_ASSERT, "(platformId)", (const char *)&queryFormat, "platformId") )
    __debugbreak();
  *platformId = I_atoui64(Dest);
}

/*
==============
ConvertPlatformIdToPlatformString
==============
*/
void ConvertPlatformIdToPlatformString(const unsigned __int64 platformId, Platform::String **stringXUID)
{
  Platform::String *v3; 
  HSTRING v4; 
  Platform::String *v5; 
  int v6; 
  HSTRING newString[3]; 
  char dest[24]; 
  wchar_t Dest[24]; 

  newString[1] = (HSTRING)-2i64;
  Com_sprintf(dest, 0x15ui64, "%llu", platformId);
  mbstowcs(Dest, dest, 0x2Aui64);
  newString[0] = NULL;
  Platform::String::String(NULL, Dest);
  v4 = (HSTRING)v3;
  newString[2] = (HSTRING)v3;
  v5 = *stringXUID;
  if ( *stringXUID != v3 )
  {
    if ( v5 )
      WindowsDeleteString_0((HSTRING)v5);
    *stringXUID = NULL;
    if ( v4 )
    {
      v6 = WindowsDuplicateString_0(v4, newString);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      *stringXUID = (Platform::String *)newString[0];
    }
  }
  WindowsDeleteString_0(v4);
}

/*
==============
ConvertPlatformIdToWCHAR
==============
*/
void ConvertPlatformIdToWCHAR(const unsigned __int64 platformId, wchar_t *wcharArray, const int bufferSize)
{
  j_swprintf_s(wcharArray, bufferSize, L"%llu", platformId);
}

/*
==============
ConvertPlatformStringToCharArray
==============
*/
bool ConvertPlatformStringToCharArray(Platform::String *srcRef, char *pDestBuffer, unsigned __int64 destBufferMax)
{
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v7; 

  if ( !pDestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 35, ASSERT_TYPE_ASSERT, "(pDestBuffer)", (const char *)&queryFormat, "pDestBuffer") )
    __debugbreak();
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)srcRef, NULL);
  v7 = wcstombs(pDestBuffer, StringRawBuffer_0, destBufferMax - 1);
  if ( v7 >= destBufferMax )
    pDestBuffer[destBufferMax - 1] = 0;
  else
    pDestBuffer[v7] = 0;
  return v7 && v7 < destBufferMax;
}

/*
==============
ConvertPlatformStringToPlatformId
==============
*/
void ConvertPlatformStringToPlatformId(Platform::String *stringXUID, unsigned __int64 *platformId)
{
  const wchar_t *StringRawBuffer_0; 
  char Dest[24]; 

  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)stringXUID, NULL);
  wcstombs(Dest, StringRawBuffer_0, 0x15ui64);
  Dest[20] = 0;
  if ( !platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 77, ASSERT_TYPE_ASSERT, "(platformId)", (const char *)&queryFormat, "platformId") )
    __debugbreak();
  *platformId = I_atoui64(Dest);
}

/*
==============
ConvertStringGamertagToDisplayableBuffer
==============
*/
void ConvertStringGamertagToDisplayableBuffer(Platform::String *string, char *pDestBuffer, unsigned __int64 destBufferMax)
{
  const wchar_t *StringRawBuffer_0; 
  char v7; 
  int v8; 
  int v9; 
  char *v10; 
  int v11; 
  int v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  char *v15; 
  __m256i v16; 
  __int128 v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  char v24; 
  unsigned __int64 v25; 
  char *v26; 
  int numBytesConsumed[4]; 
  char dest[256]; 
  char safeName[256]; 
  unsigned __int8 utf8Stream[256]; 

  if ( !pDestBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 221, ASSERT_TYPE_ASSERT, "(pDestBuffer)", (const char *)&queryFormat, "pDestBuffer") )
    __debugbreak();
  memset_0(safeName, 0, sizeof(safeName));
  memset_0(pDestBuffer, 0, destBufferMax);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)string, NULL);
  if ( MakeWideCharNameSafeForAllLanguages(safeName, StringRawBuffer_0, destBufferMax) )
  {
    v7 = safeName[0];
    v8 = 0;
    v9 = 0;
    if ( !safeName[0] )
      goto LABEL_33;
    v10 = safeName;
    do
    {
      v11 = v9 + 1;
      ++v10;
      if ( (v7 & 0xC0) == 0x80 )
        v11 = v9;
      v9 = v11;
      v7 = *v10;
    }
    while ( *v10 );
    if ( v11 > 16 )
    {
      v12 = 0;
      memset_0(dest, 0, sizeof(dest));
      v13 = utf8Stream;
      v14 = 2i64;
      v15 = safeName;
      do
      {
        v13 += 128;
        v16 = *(__m256i *)v15;
        v17 = *((_OWORD *)v15 + 7);
        v15 += 128;
        *((__m256i *)v13 - 4) = v16;
        *((__m256i *)v13 - 3) = *((__m256i *)v15 - 3);
        *((__m256i *)v13 - 2) = *((__m256i *)v15 - 2);
        *((_OWORD *)v13 - 2) = *((_OWORD *)v15 - 2);
        *((_OWORD *)v13 - 1) = v17;
        --v14;
      }
      while ( v14 );
      v18 = utf8Stream;
      v19 = 0i64;
      v20 = 0x800002400000000i64;
      do
      {
        if ( v12 >= 16 )
          break;
        LODWORD(v21) = GetGlyphFromUTF8(v18, numBytesConsumed);
        v22 = numBytesConsumed[0];
        v15 = (char *)(destBufferMax - 4);
        if ( numBytesConsumed[0] + v8 > destBufferMax - 4 )
          break;
        if ( (unsigned int)v21 <= 0x3B && _bittest64(&v20, v21) || (_DWORD)v21 == 338 || (_DWORD)v21 == 210 )
        {
          ++v8;
          dest[v19++] = 46;
        }
        else if ( numBytesConsumed[0] > 0 )
        {
          v15 = (char *)v18;
          v23 = (unsigned int)numBytesConsumed[0];
          v8 += numBytesConsumed[0];
          do
          {
            v24 = *v15++;
            dest[v19++] = v24;
            --v23;
          }
          while ( v23 );
        }
        v18 += v22;
        ++v12;
      }
      while ( *v18 );
      if ( (unsigned __int64)v8 >= 0x100 )
      {
        j___report_rangecheckfailure(v15);
        JUMPOUT(0x1428DB265i64);
      }
      dest[v8] = 0;
      v25 = -1i64;
      do
        ++v25;
      while ( dest[v25] );
      if ( v25 > destBufferMax - 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 302, ASSERT_TYPE_ASSERT, "(strlen(filteredNickname) <= (destBufferMax-kCharsNeededForSuffix))", (const char *)&queryFormat, "strlen(filteredNickname) <= (destBufferMax-kCharsNeededForSuffix)") )
        __debugbreak();
      I_strcat(dest, 0x100ui64, "...");
      v26 = dest;
    }
    else
    {
LABEL_33:
      v26 = safeName;
    }
    Core_strcpy(pDestBuffer, destBufferMax, v26);
  }
}

/*
==============
ConvertToMicrosoftXboxServicesMultiplayerSessionReference
==============
*/
Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *ConvertToMicrosoftXboxServicesMultiplayerSessionReference(Windows::Xbox::Multiplayer::MultiplayerSessionReference *sessionRef)
{
  int v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  HSTRING v9; 
  int v10; 
  HSTRING v11; 
  int v12; 
  HSTRING v13; 
  __int64 v14; 
  __int64 v15; 
  HSTRING v17; 
  HSTRING v18; 
  __int64 v19; 
  __int64 v20; 
  HSTRING v21; 
  HSTRING v22; 
  HSTRING v23; 
  HSTRING string; 
  HSTRING v25; 
  HSTRING v26; 
  HSTRING newString; 

  v20 = -2i64;
  v19 = 0i64;
  string = NULL;
  v2 = sessionRef->__abi_get_SessionName(sessionRef, (Platform::String **)&string);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = string;
  if ( string )
  {
    v4 = WindowsDuplicateString_0(string, &newString);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = newString;
    v3 = string;
  }
  else
  {
    v5 = NULL;
  }
  WindowsDeleteString_0(v3);
  v21 = v5;
  v25 = NULL;
  v6 = sessionRef->__abi_get_SessionTemplateName(sessionRef, (Platform::String **)&v25);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v25;
  if ( v25 )
  {
    v8 = WindowsDuplicateString_0(v25, &v17);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v17;
    v7 = v25;
  }
  else
  {
    v9 = NULL;
  }
  WindowsDeleteString_0(v7);
  v22 = v9;
  v26 = NULL;
  v10 = sessionRef->__abi_get_ServiceConfigurationId(sessionRef, (Platform::String **)&v26);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = v26;
  if ( v26 )
  {
    v12 = WindowsDuplicateString_0(v26, &v18);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v18;
    v11 = v26;
  }
  else
  {
    v13 = NULL;
  }
  WindowsDeleteString_0(v11);
  v23 = v13;
  Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference::MultiplayerSessionReference(NULL, (Platform::String *)v13, (Platform::String *)v9, (Platform::String *)v5);
  v15 = v14;
  v19 = 0i64;
  WindowsDeleteString_0(v13);
  WindowsDeleteString_0(v9);
  WindowsDeleteString_0(v5);
  return (Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *)v15;
}

/*
==============
ConvertToWindowsXboxMultiplayerSessionReference
==============
*/
Windows::Xbox::Multiplayer::MultiplayerSessionReference *ConvertToWindowsXboxMultiplayerSessionReference(Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *sessionRef)
{
  int v2; 
  HSTRING v3; 
  int v4; 
  HSTRING v5; 
  int v6; 
  HSTRING v7; 
  int v8; 
  HSTRING v9; 
  int v10; 
  HSTRING v11; 
  int v12; 
  HSTRING v13; 
  __int64 v14; 
  __int64 v15; 
  HSTRING v17; 
  HSTRING v18; 
  __int64 v19; 
  __int64 v20; 
  HSTRING v21; 
  HSTRING v22; 
  HSTRING v23; 
  HSTRING string; 
  HSTRING v25; 
  HSTRING v26; 
  HSTRING newString; 

  v20 = -2i64;
  v19 = 0i64;
  string = NULL;
  v2 = sessionRef->__abi_get_SessionTemplateName(sessionRef, (Platform::String **)&string);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = string;
  if ( string )
  {
    v4 = WindowsDuplicateString_0(string, &newString);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = newString;
    v3 = string;
  }
  else
  {
    v5 = NULL;
  }
  WindowsDeleteString_0(v3);
  v21 = v5;
  v25 = NULL;
  v6 = sessionRef->__abi_get_ServiceConfigurationId(sessionRef, (Platform::String **)&v25);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v25;
  if ( v25 )
  {
    v8 = WindowsDuplicateString_0(v25, &v17);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v17;
    v7 = v25;
  }
  else
  {
    v9 = NULL;
  }
  WindowsDeleteString_0(v7);
  v22 = v9;
  v26 = NULL;
  v10 = sessionRef->__abi_get_SessionName(sessionRef, (Platform::String **)&v26);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = v26;
  if ( v26 )
  {
    v12 = WindowsDuplicateString_0(v26, &v18);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v18;
    v11 = v26;
  }
  else
  {
    v13 = NULL;
  }
  WindowsDeleteString_0(v11);
  v23 = v13;
  Windows::Xbox::Multiplayer::MultiplayerSessionReference::MultiplayerSessionReference(NULL, (Platform::String *)v13, (Platform::String *)v9, (Platform::String *)v5);
  v15 = v14;
  v19 = 0i64;
  WindowsDeleteString_0(v13);
  WindowsDeleteString_0(v9);
  WindowsDeleteString_0(v5);
  return (Windows::Xbox::Multiplayer::MultiplayerSessionReference *)v15;
}

/*
==============
CopyBuffer
==============
*/
Windows::Storage::Streams::IBuffer *CopyBuffer(Windows::Storage::Streams::IBuffer *buffer)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  v9 = 0i64;
  Windows::Storage::Streams::DataWriter::DataWriter(NULL);
  v3 = v2;
  v10 = v2;
  v9 = 0i64;
  v4 = (*(__int64 (__fastcall **)(__int64, Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v2 + 104i64))(v2, buffer);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v9 = 0i64;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 248i64))(v3, &v9);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v9;
  v7 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
    v6 = v9;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v9 = 0i64;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  return (Windows::Storage::Streams::IBuffer *)v7;
}

/*
==============
CountGlyphsInUTF8String
==============
*/
__int64 CountGlyphsInUTF8String(char *pString)
{
  char v1; 
  __int64 result; 
  unsigned int v3; 
  bool v4; 

  v1 = *pString;
  for ( result = 0i64; v1; result = v3 )
  {
    v3 = result + 1;
    v4 = (v1 & 0xC0) == 0x80;
    v1 = *++pString;
    if ( v4 )
      v3 = result;
  }
  return result;
}

/*
==============
DecodeDataFromPlatformString
==============
*/
unsigned int DecodeDataFromPlatformString(Platform::String *string, void *data, const int expectedSize)
{
  const wchar_t *StringRawBuffer_0; 
  size_t v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  char Dest[1376]; 

  if ( expectedSize > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 192, ASSERT_TYPE_ASSERT, "(expectedSize <= MAX_DATASIZE)", (const char *)&queryFormat, "expectedSize <= MAX_DATASIZE") )
    __debugbreak();
  if ( _Platform_WindowsGetStringLen((HSTRING)string) >= 0x559 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 193, ASSERT_TYPE_ASSERT, "(string->Length() < MAX_ENCODED_DATA_SIZE)", (const char *)&queryFormat, "string->Length() < MAX_ENCODED_DATA_SIZE") )
    __debugbreak();
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)string, NULL);
  v7 = wcstombs(Dest, StringRawBuffer_0, 0x558ui64);
  if ( v7 >= 0x559 )
    Dest[1368] = 0;
  else
    Dest[v7] = 0;
  v8 = -1i64;
  do
    ++v8;
  while ( Dest[v8] );
  v9 = truncate_cast<int,unsigned __int64>(v8);
  if ( 4 * ((expectedSize + 2) / 3) != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 197, ASSERT_TYPE_ASSERT, "((((((expectedSize) + 2) / 3) * 4) + 1) == encodedStringLength + 1)", (const char *)&queryFormat, "BD_BIN_TO_B64_SIZE( expectedSize ) == encodedStringLength + 1") )
    __debugbreak();
  return bdBase64::decode(Dest, v9, (char *)data, expectedSize);
}

/*
==============
EncodeDataToPlatformString
==============
*/
void EncodeDataToPlatformString(const void *data, const int dataSize, Platform::String **string)
{
  __int64 v6; 
  Platform::String *v7; 
  HSTRING v8; 
  Platform::String *v9; 
  int v10; 
  HSTRING newString[4]; 
  char dest[1376]; 
  wchar_t Dest[1376]; 

  newString[1] = (HSTRING)-2i64;
  if ( dataSize > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_utils.cpp", 176, ASSERT_TYPE_ASSERT, "(dataSize <= MAX_DATASIZE)", (const char *)&queryFormat, "dataSize <= MAX_DATASIZE") )
    __debugbreak();
  bdBase64::encode((const char *)data, dataSize, dest, 0x559u);
  mbstowcs(Dest, dest, 0x559ui64);
  v6 = -1i64;
  do
    ++v6;
  while ( dest[v6] );
  Dest[1368] = 0;
  newString[0] = NULL;
  Platform::String::String(NULL, Dest);
  v8 = (HSTRING)v7;
  newString[2] = (HSTRING)v7;
  v9 = *string;
  if ( *string != v7 )
  {
    if ( v9 )
      WindowsDeleteString_0((HSTRING)v9);
    *string = NULL;
    if ( v8 )
    {
      v10 = WindowsDuplicateString_0(v8, newString);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      *string = (Platform::String *)newString[0];
    }
  }
  WindowsDeleteString_0(v8);
}

/*
==============
GetUserFromControllerIndex
==============
*/
Windows::Xbox::System::User *GetUserFromControllerIndex(const int controllerIndex)
{
  Windows::Xbox::System::User *result; 
  __int64 userIndexToReturn; 

  if ( Live_IsUserSignedIn(controllerIndex) )
  {
    result = Live_GetCachedXboxUser(controllerIndex);
    userIndexToReturn = 0i64;
  }
  else if ( GPad_GetUserIndexForPort(controllerIndex, (int *)&userIndexToReturn) )
  {
    result = Users_GetUser(userIndexToReturn);
    userIndexToReturn = 0i64;
  }
  else
  {
    return 0i64;
  }
  return result;
}

/*
==============
GetUserFromPlatformId
==============
*/
Windows::Xbox::System::User *GetUserFromPlatformId(unsigned __int64 platformId)
{
  int v2; 
  unsigned __int64 PlatformUserId; 

  v2 = 0;
  while ( 1 )
  {
    if ( Live_IsUserSignedIn(v2) )
    {
      PlatformUserId = Live_GetPlatformUserId(v2);
      if ( PlatformUserId == platformId )
        break;
    }
    if ( ++v2 >= 8 )
      return 0i64;
  }
  return Users_GetUserByPlatformId(PlatformUserId);
}

/*
==============
IsStringEqualCaseInsenstive
==============
*/
bool IsStringEqualCaseInsenstive(Platform::String *val1, Platform::String *val2)
{
  const wchar_t *StringRawBuffer_0; 
  const wchar_t *v4; 

  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)val2, NULL);
  v4 = WindowsGetStringRawBuffer_0((HSTRING)val1, NULL);
  return _wcsicmp(v4, StringRawBuffer_0) == 0;
}

/*
==============
MPSDIDToPlatformString
==============
*/
Platform::String *MPSDIDToPlatformString(const _GUID *mpsdID)
{
  Platform::String *v1; 
  Platform::String *v2; 
  _GUID v4; 

  v4 = *mpsdID;
  v1 = (Platform::String *)Platform::Guid::ToString(&v4);
  v2 = RemoveBracesFromGuidString(v1);
  WindowsDeleteString_0(NULL);
  WindowsDeleteString_0((HSTRING)v1);
  return v2;
}

/*
==============
MPSDIDToString
==============
*/
void MPSDIDToString(const _GUID *mpsdId, char *str)
{
  Platform::String *v3; 
  HSTRING v4; 
  const wchar_t *StringRawBuffer_0; 
  _GUID v6; 

  v6 = *mpsdId;
  v3 = (Platform::String *)Platform::Guid::ToString(&v6);
  v4 = (HSTRING)RemoveBracesFromGuidString(v3);
  WindowsDeleteString_0(NULL);
  WindowsDeleteString_0((HSTRING)v3);
  WindowsDeleteString_0(NULL);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v4, NULL);
  wcstombs(str, StringRawBuffer_0, 0x25ui64);
  WindowsDeleteString_0(v4);
}

/*
==============
MPSDIDToWString
==============
*/
std::wstring *MPSDIDToWString(std::wstring *result, const _GUID *mpsdID)
{
  Platform::String *v3; 
  HSTRING v4; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v6; 
  _GUID v8; 

  v8 = *mpsdID;
  v3 = (Platform::String *)Platform::Guid::ToString(&v8);
  v4 = (HSTRING)RemoveBracesFromGuidString(v3);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v4, NULL);
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Myres = 7i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = -1i64;
  do
    ++v6;
  while ( StringRawBuffer_0[v6] );
  std::wstring::assign(result, StringRawBuffer_0, v6);
  WindowsDeleteString_0(v4);
  WindowsDeleteString_0((HSTRING)v3);
  return result;
}

/*
==============
RemoveBracesFromGuidString
==============
*/
Platform::String *RemoveBracesFromGuidString(Platform::String *guid)
{
  const wchar_t *StringRawBuffer_0; 
  HSTRING v2; 
  HSTRING v3; 
  const wchar_t *v4; 
  unsigned __int64 v5; 
  unsigned __int64 Mysize; 
  wchar_t *Ptr; 
  unsigned __int64 Myres; 
  std::wstring *v9; 
  std::wstring *v10; 
  std::wstring *v11; 
  std::wstring *v12; 
  char *v13; 
  std::wstring *v14; 
  __int64 v15; 
  std::wstring *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  std::wstring *v19; 
  std::wstring *v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  wchar_t *v24; 
  __int64 v26; 
  std::wstring v27; 

  v26 = -2i64;
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)guid, NULL);
  Platform::String::String(NULL, StringRawBuffer_0);
  v3 = v2;
  WindowsDeleteString_0(NULL);
  v4 = WindowsGetStringRawBuffer_0(v3, NULL);
  v27._Mypair._Myval2._Mysize = 0i64;
  v27._Mypair._Myval2._Myres = 7i64;
  v27._Mypair._Myval2._Bx._Buf[0] = 0;
  v5 = -1i64;
  do
    ++v5;
  while ( v4[v5] );
  std::wstring::assign(&v27, v4, v5);
  WindowsDeleteString_0(v3);
  Mysize = v27._Mypair._Myval2._Mysize;
  Ptr = v27._Mypair._Myval2._Bx._Ptr;
  Myres = v27._Mypair._Myval2._Myres;
  if ( v27._Mypair._Myval2._Mysize )
  {
    v9 = &v27;
    if ( v27._Mypair._Myval2._Myres >= 8 )
      v9 = (std::wstring *)v27._Mypair._Myval2._Bx._Ptr;
    if ( v9->_Mypair._Myval2._Bx._Buf[0] == 123 )
    {
      v10 = &v27;
      if ( v27._Mypair._Myval2._Myres >= 8 )
        v10 = (std::wstring *)v27._Mypair._Myval2._Bx._Ptr;
      --v27._Mypair._Myval2._Mysize;
      memmove_0(v10, (char *)&v10->_Mypair._Myval2._Bx._Ptr + 2, 2 * v27._Mypair._Myval2._Mysize + 2);
      Myres = v27._Mypair._Myval2._Myres;
      Mysize = v27._Mypair._Myval2._Mysize;
      Ptr = v27._Mypair._Myval2._Bx._Ptr;
    }
    if ( Mysize )
    {
      v11 = &v27;
      if ( Myres >= 8 )
        v11 = (std::wstring *)Ptr;
      if ( v11->_Mypair._Myval2._Bx._Buf[Mysize - 1] == 125 )
      {
        v12 = &v27;
        if ( Myres >= 8 )
          v12 = (std::wstring *)Ptr;
        v13 = &v12->_Mypair._Myval2._Bx._Alias[2 * Mysize];
        v14 = &v27;
        if ( Myres >= 8 )
          v14 = (std::wstring *)Ptr;
        v15 = (__int64)v14 + 2 * Mysize - 2;
        v16 = &v27;
        if ( Myres >= 8 )
          v16 = (std::wstring *)Ptr;
        v17 = (v15 - (__int64)v16) >> 1;
        if ( Mysize < v17 )
          std::_String_val<std::_Simple_types<wchar_t>>::_Xran(v16, v17, Mysize, Ptr, v3, v26);
        v18 = (__int64)&v13[-v15] >> 1;
        if ( Mysize - v17 < v18 )
          v18 = Mysize - v17;
        v19 = &v27;
        if ( Myres >= 8 )
          v19 = (std::wstring *)Ptr;
        v27._Mypair._Myval2._Mysize = Mysize - v18;
        memmove_0(&v19->_Mypair._Myval2._Bx._Buf[v17], &v19->_Mypair._Myval2._Bx._Buf[v17 + v18], 2 * (Mysize - v18 - v17) + 2);
        Myres = v27._Mypair._Myval2._Myres;
        Ptr = v27._Mypair._Myval2._Bx._Ptr;
      }
    }
  }
  v20 = &v27;
  if ( Myres >= 8 )
    v20 = (std::wstring *)Ptr;
  Platform::String::String(NULL, v20->_Mypair._Myval2._Bx._Buf);
  v22 = v21;
  WindowsDeleteString_0(NULL);
  if ( v27._Mypair._Myval2._Myres >= 8 )
  {
    v23 = 2 * v27._Mypair._Myval2._Myres + 2;
    v24 = v27._Mypair._Myval2._Bx._Ptr;
    if ( v23 >= 0x1000 )
    {
      v23 = 2 * v27._Mypair._Myval2._Myres + 41;
      v24 = (wchar_t *)*((_QWORD *)v27._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)v27._Mypair._Myval2._Bx._Ptr - (char *)v24 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v24, v23);
  }
  return (Platform::String *)v22;
}

/*
==============
StringToMPSDID
==============
*/
void StringToMPSDID(const char *str, _GUID *mpsdId)
{
  wchar_t Dest[40]; 

  mbstowcs(Dest, str, 0x27ui64);
  IIDFromString(Dest, mpsdId);
}

