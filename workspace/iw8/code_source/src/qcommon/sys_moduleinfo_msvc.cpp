/*
==============
Sys_ModuleInfo_EnumModules
==============
*/

bool __fastcall Sys_ModuleInfo_EnumModules(void (__fastcall *r_callback)(HINSTANCE__ *, const _MODULEINFO *))
{
  return ?Sys_ModuleInfo_EnumModules@@YA_NA6AXPEAUHINSTANCE__@@AEBU_MODULEINFO@@@Z@Z(r_callback);
}

/*
==============
Sys_ModuleInfo_GetFilename
==============
*/

bool __fastcall Sys_ModuleInfo_GetFilename(HINSTANCE__ *module, char *destBuf, int destBufSize)
{
  return ?Sys_ModuleInfo_GetFilename@@YA_NPEAUHINSTANCE__@@PEADH@Z(module, destBuf, destBufSize);
}

/*
==============
Sys_ModuleInfo_EnumModules
==============
*/
char Sys_ModuleInfo_EnumModules(void (*r_callback)(HINSTANCE__ *, const _MODULEINFO *))
{
  HMODULE LibraryW; 
  HMODULE v3; 
  int (__fastcall *ProcAddress)(void *, HINSTANCE__ *, _MODULEINFO *, unsigned int); 
  HANDLE CurrentProcess; 
  DWORD v7; 
  unsigned __int64 v8; 
  DWORD v9; 
  unsigned __int64 v10; 
  DWORD LastError; 
  unsigned int v12; 
  unsigned int v13; 
  _MODULEINFO v14; 
  HINSTANCE__ *v15[256]; 

  if ( s_fnK32EnumProcessModulesEx )
    goto LABEL_7;
  LibraryW = LoadLibraryW(L"toolhelpx.dll");
  v3 = LibraryW;
  if ( !LibraryW )
  {
    Com_PrintError(0, "Couldn't load PSAPI DLL\n");
    return 0;
  }
  s_fnK32EnumProcessModulesEx = (int (__fastcall *)(void *, HINSTANCE__ **, unsigned int, unsigned int *, unsigned int))GetProcAddress(LibraryW, "K32EnumProcessModulesEx");
  ProcAddress = (int (__fastcall *)(void *, HINSTANCE__ *, _MODULEINFO *, unsigned int))GetProcAddress(v3, "K32GetModuleInformation");
  s_fnK32GetModuleInformation = ProcAddress;
  if ( s_fnK32EnumProcessModulesEx && ProcAddress )
  {
LABEL_7:
    CurrentProcess = GetCurrentProcess();
    if ( s_fnK32EnumProcessModulesEx(CurrentProcess, NULL, 0, &v12, 2u) )
    {
      if ( v12 <= 0x800 )
      {
        v8 = v12 >> 3;
        if ( s_fnK32EnumProcessModulesEx(CurrentProcess, v15, v12, &v13, 2u) )
        {
          v10 = 0i64;
          if ( v8 )
          {
            while ( s_fnK32GetModuleInformation(CurrentProcess, v15[v10], &v14, 0x18u) )
            {
              r_callback(v15[v10++], &v14);
              if ( v10 >= v8 )
                return 1;
            }
            LastError = GetLastError();
            Com_PrintError(0, "Couldn't lookup module information (Error 0x%X)\n", LastError);
            return 0;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          v9 = GetLastError();
          Com_PrintError(0, "Couldn't get module list (Error 0x%X)\n", v9);
          return 0;
        }
      }
      else
      {
        Com_PrintError(0, "Module list too small for enumaration\n");
        return 0;
      }
    }
    else
    {
      v7 = GetLastError();
      Com_PrintError(0, "Couldn't get size of module list (Error 0x%X)\n", v7);
      return 0;
    }
  }
  else
  {
    Com_PrintError(0, "Couldn't locate PSAPI entrypoints\n");
    return 0;
  }
}

/*
==============
Sys_ModuleInfo_GetFilename
==============
*/
char Sys_ModuleInfo_GetFilename(HINSTANCE__ *module, char *destBuf, int destBufSize)
{
  DWORD LastError; 

  if ( GetModuleFileNameA(module, destBuf, destBufSize) )
    return 1;
  LastError = GetLastError();
  Com_PrintError(0, "Couldn't lookup name of module %p (Error 0x%X)\n", module, LastError);
  return 0;
}

