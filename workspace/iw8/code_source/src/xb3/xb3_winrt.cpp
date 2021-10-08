/*
==============
CreateFileW
==============
*/

void *__fastcall CreateFileW(const char *lpFileName, unsigned int dwDesiredAccess, unsigned int dwShareMode, _SECURITY_ATTRIBUTES *lpSecurityAttributes, unsigned int dwCreationDisposition, unsigned int dwFlagsAndAttributes, void *hTemplateFile)
{
  return ?CreateFileW@@YAPEAXPEBDKKPEAU_SECURITY_ATTRIBUTES@@KKPEAX@Z(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}

/*
==============
GetFileSize
==============
*/

unsigned int __fastcall GetFileSize(void *hFile, unsigned int *lpFileSizeHigh)
{
  return ?GetFileSize@@YAKPEAXPEAK@Z(hFile, lpFileSizeHigh);
}

/*
==============
CreateFileW
==============
*/
__int64 CreateFileW(const char *lpFileName, unsigned int dwDesiredAccess, unsigned int dwShareMode, _SECURITY_ATTRIBUTES *lpSecurityAttributes, unsigned int dwCreationDisposition, unsigned int dwFlagsAndAttributes, void *hTemplateFile)
{
  int v10[4]; 
  _SECURITY_ATTRIBUTES *v11; 
  void *v12; 
  wchar_t WideCharStr[264]; 

  v11 = lpSecurityAttributes;
  v10[1] = dwFlagsAndAttributes & 0x4FFFF;
  v10[2] = dwFlagsAndAttributes & 0xFFF80000;
  v10[0] = 32;
  v10[3] = 0;
  v12 = hTemplateFile;
  MultiByteToWideChar(0xFDE9u, 0, lpFileName, -1, WideCharStr, 260);
  return CreateFile2(WideCharStr, dwDesiredAccess, dwShareMode, dwCreationDisposition, v10);
}

/*
==============
GetFileSize
==============
*/
__int64 GetFileSize(void *hFile, unsigned int *lpFileSizeHigh)
{
  _LARGE_INTEGER FileSize; 

  if ( !GetFileSizeEx(hFile, &FileSize) )
    return 0xFFFFFFFFi64;
  if ( lpFileSizeHigh )
    *lpFileSizeHigh = FileSize.HighPart;
  return FileSize.LowPart;
}

