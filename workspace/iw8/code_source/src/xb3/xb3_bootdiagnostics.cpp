/*
==============
BootIsServicingError
==============
*/

bool __fastcall BootIsServicingError()
{
  return ?BootIsServicingError@@YA_NXZ();
}

/*
==============
BootError
==============
*/

void BootError(const EBootErrorType err_type, const char *msg, ...)
{
  ?BootError@@YAXW4EBootErrorType@@PEBDZZ(err_type, msg);
}

/*
==============
BootDiagnosticsInit
==============
*/

void BootDiagnosticsInit(void)
{
  ?BootDiagnosticsInit@@YAXXZ();
}

/*
==============
BootDiagnosticsDeleteLog
==============
*/

void BootDiagnosticsDeleteLog(void)
{
  ?BootDiagnosticsDeleteLog@@YAXXZ();
}

/*
==============
BootSetDispatcher
==============
*/

void __fastcall BootSetDispatcher(Windows::UI::Core::CoreDispatcher *dispatcher)
{
  ?BootSetDispatcher@@YAXPE$AAVCoreDispatcher@Core@UI@Windows@@@Z(dispatcher);
}

/*
==============
BootReportErrorArgs
==============
*/

void __fastcall BootReportErrorArgs(const bool handleAtBoot, const char *msg)
{
  ?BootReportErrorArgs@@YAX_NPEBD@Z(handleAtBoot, msg);
}

/*
==============
BootIsAutobuild
==============
*/

bool __fastcall BootIsAutobuild()
{
  return ?BootIsAutobuild@@YA_NXZ();
}

/*
==============
BootPrintf
==============
*/

void BootPrintf(const char *msg, ...)
{
  ?BootPrintf@@YAXPEBDZZ(msg);
}

/*
==============
BootReportLaunchData
==============
*/

void __fastcall BootReportLaunchData(const XB3LaunchData *launchData)
{
  ?BootReportLaunchData@@YAXAEBUXB3LaunchData@@@Z(launchData);
}

/*
==============
BootCheckIsAutobuild
==============
*/

bool __fastcall BootCheckIsAutobuild()
{
  return ?BootCheckIsAutobuild@@YA_NXZ();
}

/*
==============
BootPrintHex
==============
*/

void __fastcall BootPrintHex(const void *data, const unsigned __int64 dataSize)
{
  ?BootPrintHex@@YAXPEBX_K@Z(data, dataSize);
}

/*
==============
BootCheckIsAutobuild
==============
*/
bool BootCheckIsAutobuild()
{
  bool result; 
  errno_t v1; 
  const char *v2; 
  FILE *Stream; 

  if ( s_isAutobuildChecked )
    return s_isAutobuild;
  Stream = NULL;
  v1 = fopen_s(&Stream, "G:\\version.txt", "r");
  if ( !Stream )
  {
    if ( !v1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  fclose(Stream);
  if ( v1 )
  {
LABEL_8:
    v2 = "Failed to open %s build file, assume local build package.";
    if ( v1 == 2 )
    {
LABEL_10:
      BootPrintf(v2, "G:\\version.txt");
      result = 0;
      goto LABEL_11;
    }
LABEL_9:
    v2 = "Unexpected error opening %s build file!";
    goto LABEL_10;
  }
  if ( !Stream )
    goto LABEL_9;
  BootPrintf("Found %s build file, assume AutoBuild package.", "G:\\version.txt");
  result = 1;
LABEL_11:
  s_isAutobuild = result;
  s_isAutobuildChecked = 1;
  return result;
}

/*
==============
BootCheckTitleOSVersion
==============
*/
__int64 BootCheckTitleOSVersion()
{
  const char *v0; 
  _OSVERSIONINFOW VersionInformation; 

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118ui64);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
  {
    if ( VersionInformation.dwMajorVersion != 10 || VersionInformation.dwMinorVersion )
    {
      v0 = "Unexpected Title OS Version %d.%d.%d on devkit.  EXE is built with XDK %d.%d.%d (%s %d)";
    }
    else if ( VersionInformation.dwBuildNumber >= 0x42EE )
    {
      if ( VersionInformation.dwBuildNumber <= 0x42EE )
      {
        BootPrintf("Executable _XDK_VER: 0x%x (%s %d); Title OS Version %d.%d.%d.", 1122898900i64, "July", 2018i64, 10, 0, VersionInformation.dwBuildNumber);
        return 1i64;
      }
      v0 = "Title OS Version %d.%d.%d on devkit too recent for EXEs.  Please rebuild the game with an updated XDK.  EXE is built with XDK %d.%d.%d (%s %d)";
    }
    else
    {
      v0 = "Title OS Version %d.%d.%d on devkit is too old.  Please uninstall and re-register/re-deploy the game.  EXE is built with XDK %d.%d.%d (%s %d)";
    }
    BootError(eBootErrorBuild, v0);
  }
  else
  {
    BootError(eBootErrorBuild, "Build _XDK_VER 0x%x, failed to obtain Title OS Version!", 1122898900i64);
  }
  return 0i64;
}

/*
==============
BootDiagnosticsDeleteLog
==============
*/
void BootDiagnosticsDeleteLog(void)
{
  ;
}

/*
==============
BootDiagnosticsInit
==============
*/
void BootDiagnosticsInit(void)
{
  HSTRING v0; 
  int ActivationFactoryByPCWSTR; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  HSTRING v8; 
  int v9; 
  int v10; 
  HSTRING v11; 
  int v12; 
  HSTRING v13; 
  int v14; 
  int v15; 
  HSTRING v16; 
  HSTRING v17; 
  int v18; 
  HSTRING v19; 
  int v20; 
  HSTRING v21; 
  int v22; 
  int v23; 
  HSTRING v24; 
  int v25; 
  HSTRING v26; 
  int v27; 
  int v28; 
  HSTRING v29; 
  int v30; 
  HSTRING v31; 
  int v32; 
  HSTRING v33; 
  int v34; 
  HSTRING v35; 
  int v36; 
  HSTRING v37; 
  int v38; 
  int v39; 
  errno_t v40; 
  const char *v41; 
  const wchar_t *StringRawBuffer_0; 
  const wchar_t *v43; 
  const wchar_t *v44; 
  const char *v45; 
  const wchar_t *v46; 
  const wchar_t *v47; 
  char *fmt; 
  HSTRING v49; 
  __int64 v50; 
  HSTRING string; 
  HSTRING v52; 
  HSTRING newString; 
  HSTRING v54; 
  __int64 v55; 
  void *ppActivationFactory; 
  __int64 v57; 
  __int64 v58; 
  HSTRING v59; 
  HSTRING v60; 
  HSTRING v61; 
  HSTRING v62; 
  HSTRING v63; 
  HSTRING v64; 
  HSTRING v65; 
  HSTRING v66; 
  HSTRING v67; 
  HSTRING v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  HSTRING v72; 
  _SYSTEMTIME SystemTime; 

  v69 = -2i64;
  GetSystemTimeAsFileTime(&s_bootTimer);
  InitializeCriticalSection(&s_logCS);
  BootPrintf("==============================================================================");
  BootPrintf("XB3Boot - logging as %s ", "D:\\iw8boot.log");
  *(_QWORD *)&SystemTime.wYear = 0i64;
  *(_QWORD *)&SystemTime.wHour = 0i64;
  GetLocalTime(&SystemTime);
  BootPrintf("Local  time: %4d/%2d/%2d:%02dh:%02dm\n", SystemTime.wYear, SystemTime.wMonth, SystemTime.wDay, SystemTime.wHour, SystemTime.wMinute);
  if ( s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 179, ASSERT_TYPE_ASSERT, "(s_isInitialized == false)", (const char *)&queryFormat, "s_isInitialized == false") )
    __debugbreak();
  *(_DWORD *)&SystemTime.wYear = 1314081759;
  *(_DWORD *)&SystemTime.wDayOfWeek = 1215834464;
  *(_DWORD *)&SystemTime.wHour = 613852311;
  *(_DWORD *)&SystemTime.wSecond = 758101982;
  v0 = NULL;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.ApplicationModel.Package", (Platform::Guid *)&SystemTime, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v55 = 0i64;
  v2 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v55);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = v55;
  v4 = v55;
  if ( v55 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8i64))(v55);
    v3 = v55;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  v50 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v50 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v50 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v70 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v57 = 0i64;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56i64))(v4, &v57);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v57;
  v7 = v57;
  if ( v57 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8i64))(v57);
    v6 = v57;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v50 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8i64))(v7);
  v71 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v8 = NULL;
  v52 = NULL;
  if ( v7 )
  {
    v9 = (**(__int64 (__fastcall ***)(__int64, void *, HSTRING *))v7)(v7, &_uuidof__AUIStorageItem_Storage_Windows__, &v52);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v8 = v52;
  }
  v50 = (__int64)v8;
  string = NULL;
  v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v8 + 56i64))(v8, &string);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = string;
  if ( string )
  {
    v12 = WindowsDuplicateString_0(string, &newString);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = newString;
    v11 = string;
  }
  else
  {
    v13 = NULL;
  }
  WindowsDeleteString_0(v11);
  v60 = v13;
  if ( v13 )
  {
    v14 = WindowsDuplicateString_0(v13, &v61);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v59 = v61;
    v62 = v61;
  }
  else
  {
    v59 = NULL;
    v62 = NULL;
  }
  WindowsDeleteString_0(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  string = NULL;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 48i64))(v4, &string);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  v16 = string;
  v17 = string;
  if ( string )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
    v16 = string;
  }
  if ( v16 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
  v50 = (__int64)v17;
  if ( v17 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 8i64))(v17);
  v72 = v17;
  if ( v17 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
  v49 = NULL;
  v18 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 48i64))(v17, &v49);
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  v19 = v49;
  if ( v49 )
  {
    v20 = WindowsDuplicateString_0(v49, &newString);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = newString;
    v19 = v49;
  }
  else
  {
    v21 = NULL;
  }
  WindowsDeleteString_0(v19);
  v50 = (__int64)v21;
  if ( v21 )
  {
    v22 = WindowsDuplicateString_0(v21, &v63);
    if ( v22 < 0 )
      __abi_WinRTraiseException(v22);
    v52 = v63;
    v64 = v63;
  }
  else
  {
    v52 = NULL;
    v64 = NULL;
  }
  WindowsDeleteString_0(v21);
  v49 = NULL;
  v23 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 96i64))(v17, &v49);
  if ( v23 < 0 )
    __abi_WinRTraiseException(v23);
  v24 = v49;
  if ( v49 )
  {
    v25 = WindowsDuplicateString_0(v49, &v54);
    if ( v25 < 0 )
      __abi_WinRTraiseException(v25);
    v26 = v54;
    v24 = v49;
  }
  else
  {
    v26 = NULL;
  }
  WindowsDeleteString_0(v24);
  v50 = (__int64)v26;
  if ( v26 )
  {
    v27 = WindowsDuplicateString_0(v26, &v65);
    if ( v27 < 0 )
      __abi_WinRTraiseException(v27);
    newString = v65;
    v66 = v65;
  }
  else
  {
    newString = NULL;
    v66 = NULL;
  }
  WindowsDeleteString_0(v26);
  v49 = NULL;
  v28 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 80i64))(v17, &v49);
  if ( v28 < 0 )
    __abi_WinRTraiseException(v28);
  v29 = v49;
  if ( v49 )
  {
    v30 = WindowsDuplicateString_0(v49, &v54);
    if ( v30 < 0 )
      __abi_WinRTraiseException(v30);
    v31 = v54;
    v29 = v49;
  }
  else
  {
    v31 = NULL;
  }
  WindowsDeleteString_0(v29);
  v50 = (__int64)v31;
  if ( v31 )
  {
    v32 = WindowsDuplicateString_0(v31, &v67);
    if ( v32 < 0 )
      __abi_WinRTraiseException(v32);
    v33 = v67;
    v68 = v67;
  }
  else
  {
    v33 = NULL;
    v68 = NULL;
  }
  WindowsDeleteString_0(v31);
  v49 = NULL;
  v34 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 88i64))(v17, &v49);
  if ( v34 < 0 )
    __abi_WinRTraiseException(v34);
  v35 = v49;
  if ( v49 )
  {
    v36 = WindowsDuplicateString_0(v49, &v54);
    if ( v36 < 0 )
      __abi_WinRTraiseException(v36);
    v37 = v54;
    v35 = v49;
  }
  else
  {
    v37 = NULL;
  }
  WindowsDeleteString_0(v35);
  v50 = (__int64)v37;
  if ( v37 )
  {
    v38 = WindowsDuplicateString_0(v37, &v60);
    if ( v38 < 0 )
      __abi_WinRTraiseException(v38);
    v0 = v60;
  }
  v50 = (__int64)v0;
  WindowsDeleteString_0(v37);
  v58 = 0i64;
  v39 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v17 + 56i64))(v17, &v58);
  if ( v39 < 0 )
    __abi_WinRTraiseException(v39);
  s_isInitialized_0 = 1;
  if ( !s_isAutobuildChecked )
  {
    v49 = NULL;
    v40 = fopen_s((FILE **)&v49, "G:\\version.txt", "r");
    if ( v49 )
    {
      fclose((FILE *)v49);
      if ( !v40 )
      {
        if ( v49 )
        {
          BootPrintf("Found %s build file, assume AutoBuild package.", "G:\\version.txt");
          s_isAutobuild = 1;
LABEL_99:
          s_isAutobuildChecked = 1;
          goto LABEL_100;
        }
        goto LABEL_97;
      }
    }
    else if ( !v40 )
    {
      goto LABEL_97;
    }
    v41 = "Failed to open %s build file, assume local build package.";
    if ( v40 == 2 )
    {
LABEL_98:
      BootPrintf(v41, "G:\\version.txt");
      s_isAutobuild = 0;
      goto LABEL_99;
    }
LABEL_97:
    v41 = "Unexpected error opening %s build file!";
    goto LABEL_98;
  }
LABEL_100:
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v0, NULL);
  v43 = WindowsGetStringRawBuffer_0(v33, NULL);
  v44 = WindowsGetStringRawBuffer_0(v52, NULL);
  v45 = "Local";
  if ( s_isAutobuild )
    v45 = "AutoBuild";
  LODWORD(fmt) = WORD1(v58);
  BootPrintf("%s Package: \"%S\"  Version %d.%d  Publisher \"%S\" (%S) ", v45, v44, (unsigned __int16)v58, fmt, v43, StringRawBuffer_0);
  v46 = WindowsGetStringRawBuffer_0(v59, NULL);
  v47 = WindowsGetStringRawBuffer_0(newString, NULL);
  BootPrintf(" PFN: {%S} Path: \"%S\" ", v47, v46);
  BootCheckTitleOSVersion();
  WindowsDeleteString_0(v0);
  WindowsDeleteString_0(v33);
  WindowsDeleteString_0(newString);
  WindowsDeleteString_0(v52);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
  WindowsDeleteString_0(v59);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
}

/*
==============
BootError
==============
*/
void BootError(const EBootErrorType err_type, const char *msg, ...)
{
  const char *v3; 
  DWORD LastError; 
  unsigned __int64 *v5; 
  __int64 nSize; 
  size_t PtNumOfCharConverted[2]; 
  char v8[4096]; 
  wchar_t Buffer[4096]; 
  char *Format; 
  char *Formata; 
  va_list ArgList; 

  va_start(ArgList, msg);
  Format = (char *)msg;
  if ( !s_isInitialized_0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
      __debugbreak();
    msg = Format;
  }
  if ( s_deferredError <= eBootErrorNONE )
  {
    v3 = "null";
    if ( msg )
      v3 = msg;
    Formata = (char *)v3;
    memset_0(Buffer, 0, sizeof(Buffer));
    LastError = GetLastError();
    if ( LastError )
      FormatMessageW(0x1200u, NULL, LastError, 0x400u, Buffer, 0x1000u, NULL);
    memset_0(v8, 0, sizeof(v8));
    v5 = j___local_stdio_printf_options();
    __stdio_common_vsprintf(*v5 | 1, v8, 0x1000ui64, Formata, NULL, ArgList);
    PtNumOfCharConverted[0] = 0i64;
    LODWORD(nSize) = LastError;
    j__snprintf_s(s_text, 0x2000ui64, 0xFFFFFFFFFFFFFFFFui64, "%s [0x%x] %S", v8, nSize, Buffer);
    if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
      __debugbreak();
    if ( s_deferredError <= eBootErrorNONE )
    {
      BootPrintf("Error reported: \"%s\"", s_text);
      PtNumOfCharConverted[0] = 0i64;
      s_wtext[0] = 0;
      mbstowcs_s(PtNumOfCharConverted, s_wtext, 0x1000ui64, s_text, 0xFFFFFFFFFFFFFFFFui64);
      if ( s_dispatcher )
        BootErrorDialogW(err_type, s_wtext);
      s_deferredError = err_type;
    }
  }
}

/*
==============
BootErrorDialogDeferred
==============
*/
void BootErrorDialogDeferred(Platform::String *title, Platform::String *text)
{
  int v3; 
  HSTRING v4; 
  int v5; 
  BootErrorDialogDeferred::__l2::<lambda_0fb4f5ff6f1e73e57153a3de207506cc> *v6; 
  int v7; 
  HSTRING v8; 
  int v9; 
  HSTRING v10; 
  Windows::UI::Core::DispatchedHandler *v11; 
  Windows::UI::Core::DispatchedHandler *v12; 
  int v13; 
  HSTRING v14; 
  HSTRING v15; 
  HSTRING newString; 
  HSTRING v17[3]; 
  __int64 *v18; 
  __int64 v19[8]; 
  HSTRING v20; 
  HSTRING string; 

  v17[1] = (HSTRING)-2i64;
  if ( title )
  {
    v3 = WindowsDuplicateString_0((HSTRING)title, &string);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    v4 = string;
  }
  else
  {
    v4 = NULL;
  }
  if ( text )
  {
    v5 = WindowsDuplicateString_0((HSTRING)text, &newString);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    text = (Platform::String *)newString;
  }
  if ( s_dispatcher )
  {
    if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
      __debugbreak();
    if ( s_deferredError <= eBootErrorNONE )
    {
      v6 = (BootErrorDialogDeferred::__l2::<lambda_0fb4f5ff6f1e73e57153a3de207506cc> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
      v17[2] = (HSTRING)v6;
      v18 = v19;
      if ( text )
      {
        v7 = WindowsDuplicateString_0((HSTRING)text, &v20);
        if ( v7 < 0 )
          __abi_WinRTraiseException(v7);
        v8 = v20;
      }
      else
      {
        v8 = NULL;
      }
      v19[0] = (__int64)v8;
      if ( v4 )
      {
        v9 = WindowsDuplicateString_0(v4, v17);
        if ( v9 < 0 )
          __abi_WinRTraiseException(v9);
        v10 = v17[0];
      }
      else
      {
        v10 = NULL;
      }
      v19[1] = (__int64)v10;
      Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_0fb4f5ff6f1e73e57153a3de207506cc___(v6, (Platform::CallbackContext)v19, 2);
      v12 = v11;
      v18 = (__int64 *)v11;
      v20 = NULL;
      v13 = s_dispatcher->__abi_RunAsync(s_dispatcher, Normal, v11, (Windows::Foundation::IAsyncAction **)&v20);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = v20;
      v15 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8i64))(v20);
        v14 = v20;
      }
      if ( v14 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16i64))(v14);
      if ( v15 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
      if ( v12 )
        v12->__abi_Release(v12);
    }
  }
  else
  {
    BootPrintf("Failed premature call to BootErrorDialog - no dispatcher!");
  }
  WindowsDeleteString_0(v4);
  WindowsDeleteString_0((HSTRING)text);
}

/*
==============
BootErrorDialogW
==============
*/
void BootErrorDialogW(const int error_type, const wchar_t *wtext)
{
  __int64 v3; 
  const wchar_t *v4; 
  Platform::String *v5; 
  Platform::String *v6; 
  const wchar_t *v7; 
  Platform::String *v8; 
  Platform::String *v9; 

  v3 = error_type;
  if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true", -2i64) )
    __debugbreak();
  if ( s_deferredError <= eBootErrorNONE )
  {
    v4 = L"null";
    if ( wtext )
      v4 = wtext;
    Platform::String::String(NULL, v4);
    v6 = v5;
    WindowsDeleteString_0(NULL);
    v7 = s_errorTypeMessageW[0];
    if ( (unsigned int)(v3 - 1) <= 6 )
      v7 = s_errorTypeMessageW[v3];
    Platform::String::String(NULL, v7);
    v9 = v8;
    WindowsDeleteString_0(NULL);
    BootErrorDialogDeferred(v9, v6);
    WindowsDeleteString_0((HSTRING)v9);
    WindowsDeleteString_0((HSTRING)v6);
  }
}

/*
==============
BootIsAutobuild
==============
*/
_BOOL8 BootIsAutobuild()
{
  if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 694, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
    __debugbreak();
  return s_isAutobuild;
}

/*
==============
BootIsServicingError
==============
*/
bool BootIsServicingError()
{
  if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
    __debugbreak();
  return s_deferredError > eBootErrorNONE;
}

/*
==============
BootPrintHex
==============
*/
void BootPrintHex(const void *data, const unsigned __int64 dataSize)
{
  unsigned int v2; 
  char *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  char v7[32]; 
  char v8[1024]; 

  v2 = 0;
  v4 = v8;
  strcpy(v7, "0123456789ABCDEF");
  v5 = 0i64;
  do
  {
    v4 += 2;
    v6 = *((unsigned __int8 *)data + v5);
    ++v2;
    *(v4 - 2) = v7[v6 >> 4];
    v5 = v2;
    *(v4 - 1) = v7[v6 & 0xF];
  }
  while ( v2 != dataSize );
  *v4 = 0;
  BootPrintf("Hex: [%s]\n", v8);
}

/*
==============
BootPrintf
==============
*/
void BootPrintf(const char *msg, ...)
{
  unsigned __int64 v1; 
  const char *v2; 
  __int64 v3; 
  int v4; 
  size_t v5; 
  char *v6; 
  unsigned __int64 *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  _iobuf *v10; 
  _locale_t Locale; 
  char _Buffer[4096]; 
  char *Formata; 
  va_list va; 

  va_start(va, msg);
  v1 = TimerDeltaInMsec(s_bootTimer);
  memset_0(_Buffer, 0, sizeof(_Buffer));
  v2 = "null";
  Locale = (_locale_t)v1;
  v3 = -1i64;
  if ( msg )
    v2 = msg;
  Formata = (char *)v2;
  v4 = j__snprintf_s(_Buffer, 0x1000ui64, 0xFFFFFFFFFFFFFFFFui64, "BOOT[%5llu] ", Locale);
  v5 = 4094i64 - v4;
  v6 = &_Buffer[v4];
  v7 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v7 | 1, v6, v5, Formata, NULL, va);
  do
    ++v3;
  while ( _Buffer[v3] );
  if ( _Buffer[v3 - 1] != 10 )
  {
    _Buffer[v3] = 10;
    v9 = v3 + 1;
    if ( v9 >= 0x1000 )
    {
      j___report_rangecheckfailure(v8);
      JUMPOUT(0x14284A614i64);
    }
    _Buffer[v9] = 0;
  }
  Sys_XB3OutputDebugString(_Buffer);
  EnterCriticalSection(&s_logCS);
  v10 = s_logFile_0;
  if ( s_logFile_0 || !fopen_s(&s_logFile_0, "D:\\iw8boot.log", "at") && (v10 = s_logFile_0) != NULL )
  {
    j_fprintf(v10, _Buffer);
    fflush(s_logFile_0);
    fclose(s_logFile_0);
    s_logFile_0 = NULL;
  }
  else
  {
    OutputDebugStringA("Failed to open logfile\n");
  }
  LeaveCriticalSection(&s_logCS);
}

/*
==============
BootReportErrorArgs
==============
*/
void BootReportErrorArgs(const bool handleAtBoot, const char *msg)
{
  const char *v4; 

  if ( !s_isInitialized_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 687, ASSERT_TYPE_ASSERT, "(s_isInitialized == true)", (const char *)&queryFormat, "s_isInitialized == true") )
    __debugbreak();
  if ( s_deferredError <= eBootErrorNONE )
  {
    v4 = "null";
    if ( msg )
      v4 = msg;
    BootPrintf("===== Restart on Sys_Error =====");
    BootPrintf(" ERROR:  \"%s\" ", v4);
    BootPrintf("================================");
    if ( handleAtBoot )
    {
      BootPrintf("Sys_Error restart handled at boot - game not activated....");
      BootError(eBootErrorSysErrorEarlyHandleAtBoot, "Sys_Error: %s", v4);
    }
    else
    {
      BootPrintf("Sys_Error restart deferred to game loaded....");
    }
  }
}

/*
==============
BootReportLaunchData
==============
*/
void BootReportLaunchData(const XB3LaunchData *launchData)
{
  __int64 mode; 
  const char *v3; 
  const char *v4; 
  const char *v5; 

  BootPrintf("LaunchData as serialized/read: \n");
  BootPrintf("\n");
  mode = (unsigned int)launchData->mode;
  if ( (_DWORD)mode )
  {
    switch ( (_DWORD)mode )
    {
      case 1:
        v3 = "SinglePlayer";
        break;
      case 2:
        v3 = "MultiPlayer";
        break;
      case 3:
        v3 = "Coop";
        break;
      case 4:
        v3 = "SysErrorGame";
        break;
      default:
        BootPrintf("   %s%d (bogus)\n", "gamemode=", mode);
        goto LABEL_13;
    }
  }
  else
  {
    v3 = "NoMode";
  }
  BootPrintf("   %s%s\n", "gamemode=", v3);
LABEL_13:
  BootPrintf("   %s%lld\n", "timestamp=", (unsigned int)launchData->timestamp);
  v4 = "false";
  v5 = "false";
  if ( launchData->isAutobuild )
    v5 = "true";
  BootPrintf("   %s%s\n", "autobuild=", v5);
  if ( launchData->skipMovies )
    v4 = "true";
  BootPrintf("   %s%s\n", "skipmovies=", v4);
  BootPrintf("   %s0x%x\n", "errorcat=", launchData->errorCat);
  BootPrintf("   %s0x%llx\n", "errorcode=", launchData->errorCode);
  BootPrintf("   %s%s\n", "errortext=", launchData->errorText);
  BootPrintf("   %s%s\n\n\n", "startuptext=", launchData->startupText);
}

/*
==============
BootSetDispatcher
==============
*/
void BootSetDispatcher(Windows::UI::Core::CoreDispatcher *dispatcher)
{
  Windows::UI::Core::CoreDispatcher *v2; 
  int v3; 

  if ( s_dispatcher )
    return;
  if ( dispatcher )
  {
    dispatcher->__abi_AddRef(dispatcher);
    v2 = s_dispatcher;
    if ( !s_dispatcher )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_bootdiagnostics.cpp", 227, ASSERT_TYPE_ASSERT, "(dispatcher!= nullptr)", (const char *)&queryFormat, "dispatcher!= nullptr") )
    __debugbreak();
  v2 = s_dispatcher;
  if ( s_dispatcher )
  {
LABEL_8:
    v2->__abi_Release(v2);
LABEL_9:
    s_dispatcher = dispatcher;
    if ( dispatcher )
    {
      if ( BootIsServicingError() )
      {
        v3 = s_deferredError;
        s_deferredError = eBootErrorNONE;
        BootErrorDialogW(v3, s_wtext);
      }
    }
  }
}

