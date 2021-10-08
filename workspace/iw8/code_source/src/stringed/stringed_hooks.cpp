/*
==============
SEH_GetLanguageName
==============
*/

const char *__fastcall SEH_GetLanguageName(const int iLanguage)
{
  return ?SEH_GetLanguageName@@YAPEBDH@Z(iLanguage);
}

/*
==============
SEH_GetLanguageIndexForName
==============
*/

int __fastcall SEH_GetLanguageIndexForName(const char *pszLanguageName, int *piLanguageIndex)
{
  return ?SEH_GetLanguageIndexForName@@YAHPEBDPEAH@Z(pszLanguageName, piLanguageIndex);
}

/*
==============
SE_GetString
==============
*/

const char *__fastcall SE_GetString(const char *psPackageAndStringReference)
{
  return ?SE_GetString@@YAPEBDPEBD@Z(psPackageAndStringReference);
}

/*
==============
SEH_GetCurrentLanguageName
==============
*/

const char *__fastcall SEH_GetCurrentLanguageName()
{
  return ?SEH_GetCurrentLanguageName@@YAPEBDXZ();
}

/*
==============
Language_UsesSpace
==============
*/

int __fastcall Language_UsesSpace()
{
  return ?Language_UsesSpace@@YAHXZ();
}

/*
==============
SEH_LocalizeTextMessage
==============
*/

const char *__fastcall SEH_LocalizeTextMessage(const char *pszInputBuffer, const char *pszMessageType, msgLocErrType_t errType)
{
  return ?SEH_LocalizeTextMessage@@YAPEBDPEBD0W4msgLocErrType_t@@@Z(pszInputBuffer, pszMessageType, errType);
}

/*
==============
SEH_InitLanguage
==============
*/

void SEH_InitLanguage(void)
{
  ?SEH_InitLanguage@@YAXXZ();
}

/*
==============
Language_IsAsian
==============
*/

int __fastcall Language_IsAsian()
{
  return ?Language_IsAsian@@YAHXZ();
}

/*
==============
SEH_LanguageHasAssets
==============
*/

bool __fastcall SEH_LanguageHasAssets()
{
  return ?SEH_LanguageHasAssets@@YA_NXZ();
}

/*
==============
SEH_InitFolders
==============
*/

void __fastcall SEH_InitFolders(bool forceNoZoneDirectory)
{
  ?SEH_InitFolders@@YAX_N@Z(forceNoZoneDirectory);
}

/*
==============
SEH_StringEd_GetString
==============
*/

const char *__fastcall SEH_StringEd_GetString(const char *pszReference)
{
  return ?SEH_StringEd_GetString@@YAPEBDPEBD@Z(pszReference);
}

/*
==============
SEH_SafeTranslateString
==============
*/

const char *__fastcall SEH_SafeTranslateString(const char *pszReference)
{
  return ?SEH_SafeTranslateString@@YAPEBDPEBD@Z(pszReference);
}

/*
==============
SEH_IsLanguagePresent
==============
*/

bool __fastcall SEH_IsLanguagePresent(const int iLanguage)
{
  return ?SEH_IsLanguagePresent@@YA_NH@Z(iLanguage);
}

/*
==============
SEH_VerifyLanguageSelection
==============
*/

int __fastcall SEH_VerifyLanguageSelection(int iLanguageSelection)
{
  return ?SEH_VerifyLanguageSelection@@YAHH@Z(iLanguageSelection);
}

/*
==============
SEH_GetCurrentLanguageDefaultShowSubtitles
==============
*/

bool __fastcall SEH_GetCurrentLanguageDefaultShowSubtitles()
{
  return ?SEH_GetCurrentLanguageDefaultShowSubtitles@@YA_NXZ();
}

/*
==============
SEH_ReadCharFromString
==============
*/

unsigned int __fastcall SEH_ReadCharFromString(const char **text)
{
  return ?SEH_ReadCharFromString@@YAIPEAPEBD@Z(text);
}

/*
==============
SEH_GetCurrentBinkLanguage
==============
*/

binklanguage_t __fastcall SEH_GetCurrentBinkLanguage()
{
  return ?SEH_GetCurrentBinkLanguage@@YA?AW4binklanguage_t@@XZ();
}

/*
==============
SEH_DecodeLetter
==============
*/

unsigned int __fastcall SEH_DecodeLetter(const char *psText, int *usedCount)
{
  return ?SEH_DecodeLetter@@YAIPEBDPEAH@Z(psText, usedCount);
}

/*
==============
SEH_GetCurrentLanguage
==============
*/

int __fastcall SEH_GetCurrentLanguage()
{
  return ?SEH_GetCurrentLanguage@@YAHXZ();
}

/*
==============
Language_IsRightToLeft
==============
*/

int __fastcall Language_IsRightToLeft()
{
  return ?Language_IsRightToLeft@@YAHXZ();
}

/*
==============
SEH_GetLanguageCode
==============
*/

const char *__fastcall SEH_GetLanguageCode(const int iLanguage)
{
  return ?SEH_GetLanguageCode@@YAPEBDH@Z(iLanguage);
}

/*
==============
SEH_PrintStrlen
==============
*/

int __fastcall SEH_PrintStrlen(const char *string)
{
  return ?SEH_PrintStrlen@@YAHPEBD@Z(string);
}

/*
==============
SEH_GetCurrentLanguageCode
==============
*/

const char *__fastcall SEH_GetCurrentLanguageCode()
{
  return ?SEH_GetCurrentLanguageCode@@YAPEBDXZ();
}

/*
==============
Language_IsAsian
==============
*/
__int64 Language_IsAsian()
{
  return (unsigned int)g_currentAsian;
}

/*
==============
Language_IsRightToLeft
==============
*/
__int64 Language_IsRightToLeft()
{
  return (unsigned int)g_currentRTL;
}

/*
==============
Language_UsesSpace
==============
*/
__int64 Language_UsesSpace()
{
  return (unsigned int)g_currentUsesSpace;
}

/*
==============
SEH_DecodeLetter
==============
*/
int SEH_DecodeLetter(const char *psText, int *usedCount)
{
  int result; 

  result = GetGlyphFromUTF8((const unsigned __int8 *)psText, usedCount);
  if ( result == -1 )
  {
    *usedCount = 1;
    return 0;
  }
  return result;
}

/*
==============
SEH_GetCurrentBinkLanguage
==============
*/
__int64 SEH_GetCurrentBinkLanguage()
{
  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  return (unsigned int)g_languages[loc_language->current.integer].binkLanguage;
}

/*
==============
SEH_GetCurrentLanguage
==============
*/
__int64 SEH_GetCurrentLanguage()
{
  const dvar_t *v0; 

  v0 = loc_language;
  if ( !loc_language )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
      __debugbreak();
    v0 = loc_language;
  }
  return v0->current.unsignedInt;
}

/*
==============
SEH_GetCurrentLanguageCode
==============
*/
const char *SEH_GetCurrentLanguageCode()
{
  __int64 integer; 

  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  integer = loc_language->current.integer;
  if ( (unsigned int)integer > 0x14 )
    return g_languages[0].pszCode;
  else
    return g_languages[integer].pszCode;
}

/*
==============
SEH_GetCurrentLanguageDefaultShowSubtitles
==============
*/
bool SEH_GetCurrentLanguageDefaultShowSubtitles()
{
  bool result; 

  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 207, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  switch ( loc_language->current.integer )
  {
    case 7:
    case 9:
    case 0xB:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
SEH_GetCurrentLanguageName
==============
*/
const char *SEH_GetCurrentLanguageName()
{
  __int64 integer; 

  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  integer = loc_language->current.integer;
  if ( (unsigned int)integer > 0x14 )
    return g_languages[0].pszName;
  else
    return g_languages[integer].pszName;
}

/*
==============
SEH_GetLanguageCode
==============
*/
const char *SEH_GetLanguageCode(const int iLanguage)
{
  if ( (unsigned int)iLanguage > 0x14 )
    return g_languages[0].pszCode;
  else
    return g_languages[iLanguage].pszCode;
}

/*
==============
SEH_GetLanguageIndexForName
==============
*/
__int64 SEH_GetLanguageIndexForName(const char *pszLanguageName, int *piLanguageIndex)
{
  languageInfo_t *v3; 
  int v5; 
  const char *pszName; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  v3 = g_languages;
  v5 = 0;
  do
  {
    pszName = v3->pszName;
    v7 = 0x7FFFFFFFi64;
    if ( !pszLanguageName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !pszName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = (const char *)(pszLanguageName - pszName);
    while ( 1 )
    {
      v9 = (unsigned __int8)pszName[(_QWORD)v8];
      v10 = v7;
      v11 = *(unsigned __int8 *)pszName++;
      --v7;
      if ( !v10 )
      {
LABEL_17:
        *piLanguageIndex = v5;
        return 1i64;
      }
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          break;
      }
      if ( !v9 )
        goto LABEL_17;
    }
    ++v5;
    ++v3;
  }
  while ( (__int64)v3 < (__int64)&unk_147F85E78 );
  *piLanguageIndex = 0;
  return 0i64;
}

/*
==============
SEH_GetLanguageName
==============
*/
const char *SEH_GetLanguageName(const int iLanguage)
{
  if ( (unsigned int)iLanguage > 0x14 )
    return g_languages[0].pszName;
  else
    return g_languages[iLanguage].pszName;
}

/*
==============
SEH_InitFolders
==============
*/
void SEH_InitFolders(bool forceNoZoneDirectory)
{
  int *p_bPresent; 
  const dvar_t *v3; 
  int v4; 
  int v5; 
  __int64 integer; 
  const char *v7; 
  const char *v8; 
  BOOL v9; 
  int v10; 
  int *v11; 
  __int64 v12; 
  unsigned int unsignedInt; 
  char path[256]; 

  p_bPresent = &g_languages[0].bPresent;
  v3 = loc_language;
  v4 = 0;
  v5 = 0;
  unsignedInt = loc_language->current.unsignedInt;
  while ( 1 )
  {
    Dvar_SetInt_Internal(v3, v5);
    SEH_UpdateCurrentLanguage();
    Sys_InitFolders(forceNoZoneDirectory);
    if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
      __debugbreak();
    integer = loc_language->current.integer;
    v7 = (unsigned int)integer > 0x14 ? g_languages[0].pszCode : g_languages[integer].pszCode;
    v8 = j_va("%s_%s.ff", v7, "code_post_gfx");
    Sys_BuildAbsPath(path, 256, SF_ZONE_LOC, v8, (const char *)&queryFormat.fmt + 3);
    if ( Sys_FileExists(path) )
    {
      v9 = 1;
    }
    else
    {
      Sys_BuildAbsPath(path, 256, SF_ZONE_LOC, v8, "m");
      v9 = Sys_FileExists(path);
    }
    *p_bPresent = v9;
    ++v5;
    p_bPresent += 6;
    if ( v5 >= 21 )
      break;
    v3 = loc_language;
  }
  v10 = unsignedInt;
  if ( !g_languages[unsignedInt].bPresent )
  {
    if ( unsignedInt == 5 && g_languages[19].bPresent )
    {
      v10 = 19;
    }
    else
    {
      Com_PrintError(16, "Could not find language %d, determining fallback\n", unsignedInt);
      v10 = 0;
      v11 = g_languagePriorityOrder;
      while ( 1 )
      {
        v12 = *v11;
        if ( g_languages[v12].bPresent )
          break;
        ++v4;
        if ( (__int64)++v11 >= (__int64)&unk_147F85ED4 )
          goto LABEL_22;
      }
      Com_PrintError(16, "Falling back to found language '%d'\n", v12);
      v10 = g_languagePriorityOrder[v4];
    }
  }
LABEL_22:
  Dvar_SetInt_Internal(loc_language, v10);
  SEH_UpdateCurrentLanguage();
  Sys_InitFolders(forceNoZoneDirectory);
}

/*
==============
SEH_InitLanguage
==============
*/
void SEH_InitLanguage(void)
{
  Dvar_BeginPermanentRegistration();
  loc_language = Dvar_RegisterInt("PMKLQQKSO", g_defaultLanguage, 0, 20, 0x2000u, "Language");
  loc_translate = Dvar_RegisterBool("NSSSRLRTOO", 1, 2u, "Enable translations");
  Dvar_EndPermanentRegistration();
  SEH_UpdateCurrentLanguage();
  CrashReport_AddMemRegion("g_languages", g_languages, 0x1F8ui64);
}

/*
==============
SEH_IsLanguagePresent
==============
*/
bool SEH_IsLanguagePresent(const int iLanguage)
{
  __int64 v1; 
  int v4; 

  v1 = iLanguage;
  if ( (unsigned int)iLanguage >= 0x15 )
  {
    v4 = 21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( iLanguage ) < (unsigned)( MAX_LANGUAGES )", "iLanguage doesn't index MAX_LANGUAGES\n\t%i not in [0, %i)", iLanguage, v4) )
      __debugbreak();
  }
  return g_languages[v1].bPresent == 1;
}

/*
==============
SEH_LanguageHasAssets
==============
*/
bool SEH_LanguageHasAssets()
{
  __int64 integer; 
  const char *pszCode; 
  const char *v2; 
  bool result; 
  char path[256]; 

  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 184, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  integer = loc_language->current.integer;
  if ( (unsigned int)integer > 0x14 )
    pszCode = g_languages[0].pszCode;
  else
    pszCode = g_languages[integer].pszCode;
  v2 = j_va("%s_%s.ff", pszCode, "code_post_gfx");
  Sys_BuildAbsPath(path, 256, SF_ZONE_LOC, v2, (const char *)&queryFormat.fmt + 3);
  if ( Sys_FileExists(path) )
    return 1;
  Sys_BuildAbsPath(path, 256, SF_ZONE_LOC, v2, "m");
  result = Sys_FileExists(path);
  if ( result )
    return 1;
  return result;
}

/*
==============
SEH_LocalizeTextMessage
==============
*/
char *SEH_LocalizeTextMessage(const char *pszInputBuffer, const char *pszMessageType, msgLocErrType_t errType)
{
  char *v4; 
  int v5; 
  char v6; 
  int v7; 
  BOOL v8; 
  const char *v9; 
  const char *v10; 
  int v11; 
  unsigned int v12; 
  char *v13; 
  XAssetHeader v14; 
  __int64 v16; 
  int v17; 
  char *v18; 
  __int64 v19; 
  char *v20; 
  char v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  char *v25; 
  const char *v26; 
  __int64 v27; 
  char *v28; 
  char v29; 
  char v30; 
  int v32; 
  char v33; 
  __int64 v34; 
  char *v35; 
  int v36; 
  int v37; 
  char *v38; 
  int v40; 
  int v41; 
  unsigned int v42; 
  int v43; 
  const char *v46; 
  char dest[1024]; 
  char src[1024]; 

  v4 = szStrings[(__int64)((iCurrString + 1) % 10)];
  iCurrString = (iCurrString + 1) % 10;
  v38 = v4;
  memset_0(v4, 0, 0x400ui64);
  v41 = 1;
  v5 = 0;
  v43 = 0;
  v6 = *pszInputBuffer;
  v7 = 0;
  v36 = 0;
  v8 = 1;
  v37 = 0;
  v9 = pszInputBuffer;
  v40 = 1;
  v10 = pszInputBuffer;
  v46 = pszInputBuffer;
  if ( *pszInputBuffer )
  {
    v11 = -1069547519;
    while ( 1 )
    {
      if ( (unsigned __int8)v6 > 0x1Fu || !_bittest(&v11, v6) )
      {
        ++v10;
        goto LABEL_85;
      }
      if ( v10 > v9 )
        break;
LABEL_76:
      v33 = *v10;
      if ( *v10 == 30 )
      {
        v41 = 1;
LABEL_80:
        v33 = *++v10;
        goto LABEL_81;
      }
      if ( v33 == 31 )
      {
        v41 = 0;
        goto LABEL_80;
      }
LABEL_81:
      v9 = v10 + 1;
      if ( v33 != 22 )
        v9 = v10;
      v10 = v9;
      v8 = v33 != 22;
LABEL_85:
      v46 = v10;
      if ( !*v9 )
      {
        if ( v43 )
        {
          v34 = v5;
          if ( v5 > 0 )
          {
            v35 = v4;
            do
            {
              if ( *v35 == 22 )
                *v35 = 37;
              ++v35;
              --v34;
            }
            while ( v34 );
          }
        }
        return v4;
      }
      v6 = *v10;
    }
    v12 = (_DWORD)v10 - (_DWORD)v9;
    if ( (unsigned __int64)(v10 - v9 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v10 - (int)v9, "signed", v10 - v9) )
      __debugbreak();
    if ( (int)v12 >= 1024 - v36 )
      return 0i64;
    Core_strncpy(dest, 0x400ui64, v9, (int)v10 - (int)v9);
    if ( !v41 )
    {
LABEL_33:
      v5 = v36;
      v17 = v12 + v36;
      v42 = v12 + v36;
      if ( (int)(v12 + v36) >= 1024 )
      {
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warnings, "loc_warnings") && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warningsAsErrors, "loc_warningsAsErrors") && errType != LOCMSG_NOERR )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14415D7B8, 735i64, pszMessageType, pszInputBuffer);
        Com_Printf(16, "%s too long when translated: \"%s\"\n", pszMessageType, pszInputBuffer);
      }
      if ( (int)(v12 - 2) > 0 )
      {
        v18 = dest;
        v19 = v12 - 2;
        v20 = dest;
        do
        {
          if ( !strncmp(v20, "&&", 2ui64) && (unsigned __int8)(v18[2] - 48) <= 9u )
          {
            if ( v8 )
            {
              ++v7;
            }
            else
            {
              *v18 = 22;
              v43 = 1;
            }
          }
          ++v20;
          ++v18;
          --v19;
        }
        while ( v19 );
        v17 = v12 + v36;
        v4 = v38;
        v5 = v36;
        v37 = v7;
      }
      if ( v7 <= 0 || v5 <= 0 )
      {
        Core_strcpy(&v4[v5], 1024 - v36, dest);
        v5 = v17;
        v36 = v17;
        goto LABEL_75;
      }
      v21 = 0;
      v22 = v5 - 2;
      v23 = 0;
      v24 = 0i64;
      if ( v5 - 2 > 0 )
      {
        v25 = v38;
        while ( 2 )
        {
          v26 = "&&";
          v27 = 2i64;
          v28 = &v25[v23];
          if ( !v28 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v25 = v38;
          }
          do
          {
            v29 = *v28++;
            v30 = *v26++;
            if ( !v27-- )
              break;
            if ( v29 != v30 )
              goto LABEL_63;
          }
          while ( v29 );
          if ( (unsigned __int8)(v25[v24 + 2] - 48) <= 9u )
          {
            v32 = v25[v24 + 2] - 48;
            if ( v25[v24 + 2] == 48 )
            {
              Com_Printf(16, "%s cannot have &&0 as conversion format: \"%s\"\n", pszMessageType, pszInputBuffer);
              v25 = v38;
            }
            if ( v32 == v40 )
            {
              Core_strcpy(src, 0x400ui64, &v25[v23 + 3]);
              v25 = v38;
              v21 = 1;
              v38[v24] = 0;
              break;
            }
          }
LABEL_63:
          ++v23;
          ++v24;
          if ( v23 < v22 )
            continue;
          break;
        }
        if ( v23 < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 788, ASSERT_TYPE_ASSERT, "(i >= 0)", (const char *)&queryFormat, "i >= 0") )
            __debugbreak();
          v25 = v38;
        }
        if ( v21 )
        {
          Core_strcpy(&v25[v23], 1024 - v23, dest);
          v4 = v38;
          Core_strcpy(&v38[v23 + v12], (int)(1024 - v23 - v12), src);
          v7 = v37 - 1;
          ++v40;
          v10 = v46;
          --v37;
          v5 = v42 - 3;
          v36 = v42 - 3;
LABEL_75:
          v11 = -1069547519;
          goto LABEL_76;
        }
        v4 = v38;
        v5 = v36;
      }
      v7 = v37;
      ++v40;
      v10 = v46;
      goto LABEL_75;
    }
    if ( v12 >= 0x100 )
      return 0i64;
    if ( loc_translate && loc_translate->current.enabled && dest[0] )
    {
      if ( dest[1] )
      {
        v14.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_LOCALIZE_ENTRY, dest, 0).physicsLibrary;
        if ( !v14.physicsLibrary )
          goto LABEL_21;
        v13 = *(char **)&v14.physicsLibrary->isMaterialList;
LABEL_20:
        if ( !v13 )
        {
LABEL_21:
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warnings, "loc_warnings") )
          {
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warningsAsErrors, "loc_warningsAsErrors") || errType == LOCMSG_NOERR )
            {
              Com_PrintWarning(16, "WARNING: Could not translate part of %s: \"%s\"\n", pszMessageType, dest);
              v13 = j_va("^1UNLOCALIZED(^7%s^1)^7", dest);
            }
            else
            {
              Com_Error_impl(ERR_LOCALIZATION, (const ObfuscateErrorText)&stru_14415D720, 734i64, pszMessageType, dest);
              v13 = j_va("^1UNLOCALIZED(^7%s^1)^7", dest);
            }
          }
          else
          {
            v13 = j_va((const char *)&queryFormat, dest);
          }
          if ( errType == LOCMSG_NOERR )
            return 0i64;
        }
LABEL_30:
        Core_strcpy(dest, 0x400ui64, v13);
        v16 = -1i64;
        do
          ++v16;
        while ( dest[v16] );
        v12 = v16;
        goto LABEL_33;
      }
      if ( dest[0] < 0 )
      {
        v13 = s_singleCharUTF8Rep[dest[0] & 0x7F];
        goto LABEL_20;
      }
    }
    v13 = dest;
    goto LABEL_30;
  }
  return v4;
}

/*
==============
SEH_PrintStrlen
==============
*/
__int64 SEH_PrintStrlen(const char *string)
{
  const unsigned __int8 *v1; 
  unsigned int v3; 
  int GlyphFromUTF8; 
  int v5; 
  int numBytesConsumed; 

  v1 = (const unsigned __int8 *)string;
  if ( !string )
    return 0i64;
  v3 = 0;
  if ( *string )
  {
    while ( 1 )
    {
      GlyphFromUTF8 = GetGlyphFromUTF8(v1, &numBytesConsumed);
      if ( GlyphFromUTF8 == -1 )
      {
        v5 = 1;
        GlyphFromUTF8 = 0;
        numBytesConsumed = 1;
      }
      else
      {
        v5 = numBytesConsumed;
      }
      v1 += v5;
      if ( GlyphFromUTF8 != 94 )
        break;
      if ( !v1 || *v1 == 94 || (unsigned __int8)(*v1 - 39) > 0x17u )
        goto LABEL_14;
      ++v1;
LABEL_15:
      if ( !*v1 )
        return v3;
    }
    if ( GlyphFromUTF8 == 10 || GlyphFromUTF8 == 13 )
      goto LABEL_15;
LABEL_14:
    ++v3;
    goto LABEL_15;
  }
  return v3;
}

/*
==============
SEH_ReadCharFromString
==============
*/
int SEH_ReadCharFromString(const char **text)
{
  int result; 
  int numBytesConsumed; 

  result = GetGlyphFromUTF8((const unsigned __int8 *)*text, &numBytesConsumed);
  if ( result == -1 )
  {
    result = 0;
    ++*text;
  }
  else
  {
    *text += numBytesConsumed;
  }
  return result;
}

/*
==============
SEH_SafeTranslateString
==============
*/
const char *SEH_SafeTranslateString(const char *pszReference)
{
  const char *result; 

  result = SEH_StringEd_GetString(pszReference);
  if ( !result )
  {
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warnings, "loc_warnings") )
    {
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warningsAsErrors, "loc_warningsAsErrors") )
        Com_Error_impl(ERR_LOCALIZATION, (const ObfuscateErrorText)&stru_14415D688, 733i64, pszReference);
      else
        Com_PrintWarning(16, "WARNING: Could not translate exe string \"%s\"\n", pszReference);
      Core_strcpy_truncate(szErrorString, 0x400ui64, "^1UNLOCALIZED(^7");
      I_strcat_truncate(szErrorString, 0x400ui64, pszReference);
      I_strcat_truncate(szErrorString, 0x400ui64, "^1)^7");
      return szErrorString;
    }
    else
    {
      Core_strcpy_truncate(szErrorString, 0x400ui64, pszReference);
      return szErrorString;
    }
  }
  return result;
}

/*
==============
SEH_StringEd_GetString
==============
*/
char *SEH_StringEd_GetString(const char *pszReference)
{
  char *result; 

  if ( !loc_translate || !loc_translate->current.enabled || !*pszReference )
    return (char *)pszReference;
  if ( !pszReference[1] )
  {
    if ( *pszReference < 0 )
      return s_singleCharUTF8Rep[*pszReference & 0x7F];
    return (char *)pszReference;
  }
  result = (char *)DB_FindXAssetHeader(ASSET_TYPE_LOCALIZE_ENTRY, pszReference, 0).physicsLibrary;
  if ( result )
    return (char *)*((_QWORD *)result + 1);
  return result;
}

/*
==============
SEH_UpdateCurrentLanguage
==============
*/
const dvar_t *SEH_UpdateCurrentLanguage()
{
  const dvar_t *result; 
  int integer; 

  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stringed\\stringed_hooks.cpp", 147, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  result = loc_language;
  g_currentAsian = 0;
  g_currentUsesSpace = 1;
  g_currentRTL = 0;
  integer = loc_language->current.integer;
  if ( integer >= 10 )
  {
    if ( integer > 11 )
    {
      if ( integer > 15 )
      {
        if ( integer == 17 )
          g_currentRTL = 1;
        return result;
      }
      g_currentUsesSpace = 0;
    }
    g_currentAsian = 1;
  }
  return result;
}

/*
==============
SEH_VerifyLanguageSelection
==============
*/
__int64 SEH_VerifyLanguageSelection(int iLanguageSelection)
{
  int v3; 
  unsigned int v4; 

  if ( g_languages[iLanguageSelection].bPresent )
    return (unsigned int)iLanguageSelection;
  v3 = 0;
  while ( 1 )
  {
    v4 = (v3 + iLanguageSelection) % 21;
    if ( g_languages[v4].bPresent )
      break;
    if ( ++v3 >= 21 )
      return 0i64;
  }
  return v4;
}

/*
==============
SE_GetString
==============
*/
const char *SE_GetString(const char *psPackageAndStringReference)
{
  const char *result; 

  result = (const char *)DB_FindXAssetHeader(ASSET_TYPE_LOCALIZE_ENTRY, psPackageAndStringReference, 0).physicsLibrary;
  if ( result )
    return (const char *)*((_QWORD *)result + 1);
  return result;
}

