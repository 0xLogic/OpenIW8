/*
==============
Scr_NativeLibrary_GetFunctionName
==============
*/

const char *__fastcall Scr_NativeLibrary_GetFunctionName(const scrContext_t *scrContext, NativeScriptFunction nativeScriptFunction)
{
  return ?Scr_NativeLibrary_GetFunctionName@@YAPEBDAEBUscrContext_t@@W4NativeScriptFunction@@@Z(scrContext, nativeScriptFunction);
}

/*
==============
Scr_NativeLibrary_GetChecksum
==============
*/

unsigned int __fastcall Scr_NativeLibrary_GetChecksum(const scrContext_t *scrContext)
{
  return ?Scr_NativeLibrary_GetChecksum@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_NativeLibrary_FindFunction
==============
*/

NativeScriptFunction __fastcall Scr_NativeLibrary_FindFunction(const scrContext_t *scrContext, const char *fileName, const char *const name)
{
  return ?Scr_NativeLibrary_FindFunction@@YA?AW4NativeScriptFunction@@AEBUscrContext_t@@PEBDQEBD@Z(scrContext, fileName, name);
}

/*
==============
Scr_NativeLibrary_GetModeString
==============
*/

const char *__fastcall Scr_NativeLibrary_GetModeString()
{
  return ?Scr_NativeLibrary_GetModeString@@YAPEBDXZ();
}

/*
==============
Scr_NativeLibrary_IsEnabled
==============
*/

bool __fastcall Scr_NativeLibrary_IsEnabled()
{
  return ?Scr_NativeLibrary_IsEnabled@@YA_NXZ();
}

/*
==============
Scr_NativeLibrary_CompareFuncHash
==============
*/
__int64 Scr_NativeLibrary_CompareFuncHash(const void *lhs, const void *rhs)
{
  if ( *(_DWORD *)lhs >= *(_DWORD *)rhs )
    return *(_DWORD *)lhs > *(_DWORD *)rhs;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Scr_NativeLibrary_FindFunction
==============
*/
__int64 Scr_NativeLibrary_FindFunction(const scrContext_t *scrContext, const char *fileName, const char *const name)
{
  NativeScriptLibrary *m_nativeScriptLibrary; 
  unsigned __int8 v5; 
  unsigned int v6; 
  int i; 
  unsigned __int8 j; 
  _DWORD *v9; 
  int Key; 

  m_nativeScriptLibrary = scrContext->m_nativeScriptLibrary;
  if ( !m_nativeScriptLibrary )
    return 0i64;
  v5 = *fileName;
  v6 = 0;
  for ( i = 0; *fileName; v5 = *fileName )
  {
    ++fileName;
    i = v5 ^ (16777619 * i);
  }
  for ( j = *name; *name; j = *name )
  {
    ++name;
    i = j ^ (16777619 * i);
  }
  Key = i;
  v9 = bsearch(&Key, m_nativeScriptLibrary->functionHash, m_nativeScriptLibrary->functionHashCount, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Scr_NativeLibrary_CompareFuncHash);
  if ( v9 )
    return (unsigned int)v9[1];
  return v6;
}

/*
==============
Scr_NativeLibrary_GetChecksum
==============
*/
NativeScriptLibrary *Scr_NativeLibrary_GetChecksum(const scrContext_t *scrContext)
{
  NativeScriptLibrary *result; 

  result = scrContext->m_nativeScriptLibrary;
  if ( result )
    return (NativeScriptLibrary *)result->checksum;
  return result;
}

/*
==============
Scr_NativeLibrary_GetFunctionName
==============
*/
const char *Scr_NativeLibrary_GetFunctionName(const scrContext_t *scrContext, NativeScriptFunction nativeScriptFunction)
{
  return 0i64;
}

/*
==============
Scr_NativeLibrary_GetModeString
==============
*/
const char *Scr_NativeLibrary_GetModeString()
{
  char ActiveGameMode; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  switch ( ActiveGameMode )
  {
    case 1:
      return "sp";
    case 2:
      return "mp";
    case 3:
      return "cp";
  }
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Scr_NativeLibrary_IsEnabled
==============
*/
bool Scr_NativeLibrary_IsEnabled()
{
  return 0;
}

