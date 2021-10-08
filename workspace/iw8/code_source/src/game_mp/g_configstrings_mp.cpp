/*
==============
GConfigStringsMP::GetEffectName
==============
*/

void __fastcall GConfigStringsMP::GetEffectName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  ?GetEffectName@GConfigStringsMP@@UEAAXIPEADH@Z(this, index, buffer, bufferSize);
}

/*
==============
GConfigStringsMP::GetLocalizedStringName
==============
*/

void __fastcall GConfigStringsMP::GetLocalizedStringName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  ?GetLocalizedStringName@GConfigStringsMP@@UEAAXIPEADH@Z(this, index, buffer, bufferSize);
}

/*
==============
GConfigStringsMP::GetModelIndexNoCache
==============
*/

unsigned int __fastcall GConfigStringsMP::GetModelIndexNoCache(GConfigStringsMP *this, const char *string)
{
  return ?GetModelIndexNoCache@GConfigStringsMP@@MEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::GetStickerMaterialIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetStickerMaterialIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetStickerMaterialIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::GetSoundAliasIndex
==============
*/

unsigned __int16 __fastcall GConfigStringsMP::GetSoundAliasIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetSoundAliasIndex@GConfigStringsMP@@UEAAGPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::SetLocalizedString
==============
*/

void __fastcall GConfigStringsMP::SetLocalizedString(GConfigStringsMP *this, const char *string, unsigned int *entry)
{
  ?SetLocalizedString@GConfigStringsMP@@UEAAXPEBDPEAI@Z(this, string, entry);
}

/*
==============
GConfigStringsMP::GetEffectIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetEffectIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetEffectIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::GetLocalizedStringIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetLocalizedStringIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetLocalizedStringIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::ClearDevStringAfterIndex
==============
*/

void __fastcall GConfigStringsMP::ClearDevStringAfterIndex(GConfigStringsMP *this, int index)
{
  ?ClearDevStringAfterIndex@GConfigStringsMP@@UEAAXH@Z(this, index);
}

/*
==============
GConfigStringsMP::GetClientTagName
==============
*/

scr_string_t __fastcall GConfigStringsMP::GetClientTagName(GConfigStringsMP *this, const unsigned int index)
{
  return ?GetClientTagName@GConfigStringsMP@@UEAA?AW4scr_string_t@@I@Z(this, index);
}

/*
==============
G_CStringMP_SoundAliasIndex
==============
*/

unsigned __int16 __fastcall G_CStringMP_SoundAliasIndex(const char *name)
{
  return ?G_CStringMP_SoundAliasIndex@@YAGPEBD@Z(name);
}

/*
==============
GConfigStringsMP::GetStickerMaterialName
==============
*/

void __fastcall GConfigStringsMP::GetStickerMaterialName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  ?GetStickerMaterialName@GConfigStringsMP@@UEAAXIPEADH@Z(this, index, buffer, bufferSize);
}

/*
==============
GConfigStringsMP::SetDevString
==============
*/

void __fastcall GConfigStringsMP::SetDevString(GConfigStringsMP *this, const char *string, unsigned int *entry)
{
  ?SetDevString@GConfigStringsMP@@UEAAXPEBDPEAI@Z(this, string, entry);
}

/*
==============
GConfigStringsMP::GetMaterialName
==============
*/

void __fastcall GConfigStringsMP::GetMaterialName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  ?GetMaterialName@GConfigStringsMP@@UEAAXIPEADH@Z(this, index, buffer, bufferSize);
}

/*
==============
GConfigStringsMP::GetLoopingSoundAliasIndex
==============
*/

unsigned __int16 __fastcall GConfigStringsMP::GetLoopingSoundAliasIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetLoopingSoundAliasIndex@GConfigStringsMP@@UEAAGPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::GetMaterialIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetMaterialIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetMaterialIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::GetHintStringIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetHintStringIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetHintStringIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
G_CStringMP_LoopedSoundAliasIndex
==============
*/

unsigned __int16 __fastcall G_CStringMP_LoopedSoundAliasIndex(const char *name)
{
  return ?G_CStringMP_LoopedSoundAliasIndex@@YAGPEBD@Z(name);
}

/*
==============
GConfigStringsMP::GetClientTagIndex
==============
*/

unsigned int __fastcall GConfigStringsMP::GetClientTagIndex(GConfigStringsMP *this, const char *string)
{
  return ?GetClientTagIndex@GConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
GConfigStringsMP::ClearLocalizedString
==============
*/

void __fastcall GConfigStringsMP::ClearLocalizedString(GConfigStringsMP *this, unsigned int *entry)
{
  ?ClearLocalizedString@GConfigStringsMP@@UEAAXPEAI@Z(this, entry);
}

/*
==============
GConfigStringsMP::GetModelNameString
==============
*/

const char *__fastcall GConfigStringsMP::GetModelNameString(GConfigStringsMP *this, const unsigned int index)
{
  return ?GetModelNameString@GConfigStringsMP@@UEAAPEBDI@Z(this, index);
}

/*
==============
GConfigStringsMP::ClearDevStringAfterIndex
==============
*/
void GConfigStringsMP::ClearDevStringAfterIndex(GConfigStringsMP *this, int index)
{
  unsigned int v2; 
  __int64 v3; 

  if ( (unsigned int)(index + 1) < 0x80 )
  {
    v2 = index + 638;
    do
    {
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( BgDynamicLimits::ms_data.m_maxConfigStrings <= 0x27D )
      {
        LODWORD(v3) = 637;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v3) )
          __debugbreak();
      }
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      if ( v2 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
      {
        LODWORD(v3) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v3) )
          __debugbreak();
      }
      SV_SetConfigstring(v2++, (const char *)&queryFormat.fmt + 3);
    }
    while ( v2 < 0x2FD );
  }
}

/*
==============
GConfigStringsMP::ClearLocalizedString
==============
*/
void GConfigStringsMP::ClearLocalizedString(GConfigStringsMP *this, unsigned int *entry)
{
  if ( entry )
    *entry = 0;
}

/*
==============
G_CStringMP_LoopedSoundAliasIndex
==============
*/
__int64 G_CStringMP_LoopedSoundAliasIndex(const char *name)
{
  const SndAliasList *Alias; 
  _BYTE *integer64; 
  unsigned __int16 v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  unsigned __int16 outIndex; 

  if ( SND_FindPrecachedLoopedAliasIndex(name, &outIndex) )
    return outIndex;
  Alias = SND_TryFindAlias(name);
  if ( !Alias )
    return 0i64;
  if ( !Com_IsSoundAliasLooping(Alias) )
    return 0i64;
  Com_PrintError(15, "'%s' (looping sound alias) needs to be precached\n", name);
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( !integer64 || !*integer64 || !SND_DevAllocatePrecachedAliasIndex(&outIndex, name, 256) )
    return 0i64;
  v5 = outIndex;
  if ( outIndex >= 0x100u )
  {
    v8 = 256;
    v7 = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( aliasIndex ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES )", "aliasIndex doesn't index BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
    v5 = outIndex;
  }
  v6 = BG_ConfigStrings_ConfigStringOffset(0x110u, v5);
  SV_SetConfigstring(v6, name);
  return outIndex;
}

/*
==============
G_CStringMP_SoundAliasIndex
==============
*/
__int64 G_CStringMP_SoundAliasIndex(const char *name)
{
  const SndAliasList *Alias; 
  _BYTE *integer64; 
  char v4; 
  unsigned __int16 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int16 outIndex; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 301, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( SND_FindPrecachedAliasIndex(name, &outIndex) )
    return outIndex;
  Alias = SND_TryFindAlias(name);
  if ( !Alias || Com_IsSoundAliasLooping(Alias) )
    return 0i64;
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( integer64 && *integer64 )
  {
    v4 = 1;
    if ( SND_DevFindPrecachedAliasIndex(name, &outIndex) )
      return outIndex;
  }
  else
  {
    v4 = 0;
  }
  Com_PrintError(15, "'%s' (sound alias) needs to be precached\n", name);
  if ( !v4 || !SND_DevAllocatePrecachedAliasIndex(&outIndex, name, 256) )
    return 0i64;
  v6 = outIndex;
  if ( outIndex >= 0x100u )
  {
    LODWORD(v8) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( aliasIndex ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES )", "aliasIndex doesn't index BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES\n\t%i not in [0, %i)", v8, 256) )
      __debugbreak();
    v6 = outIndex;
  }
  v7 = BG_ConfigStrings_ConfigStringOffset(0x110u, v6);
  SV_SetConfigstring(v7, name);
  return outIndex;
}

/*
==============
G_ConfigStringsMP_GetIndexForNcsName
==============
*/
__int64 G_ConfigStringsMP_GetIndexForNcsName(const NetConstStringType type, const char *string)
{
  unsigned int outIndex; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 21, ASSERT_TYPE_ASSERT, "( string )", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( NetConstStrings_IsPrecacheAllowed() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 22, ASSERT_TYPE_ASSERT, "(!NetConstStrings_IsPrecacheAllowed())", "%s\n\tNetConstString type '%i' does not support non-precached access", "!NetConstStrings_IsPrecacheAllowed()", type) )
    __debugbreak();
  if ( !*string )
    return 0i64;
  if ( !NetConstStrings_GetIndexPlusOneFromName(type, string, &outIndex) )
  {
    NetConstStrings_ReportMissingString(type, string);
    return 0i64;
  }
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 31, ASSERT_TYPE_ASSERT, "( stringIndex != 0 )", (const char *)&queryFormat, "stringIndex != 0") )
    __debugbreak();
  return outIndex;
}

/*
==============
G_ConfigStringsMP_GetStringForNcsIndex
==============
*/
char *G_ConfigStringsMP_GetStringForNcsIndex(const NetConstStringType type, const unsigned int index)
{
  bool v4; 
  char *result; 
  NetConstStringType v6; 
  char *outName; 

  if ( NetConstStrings_IsPrecacheAllowed() )
  {
    v6 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 46, ASSERT_TYPE_ASSERT, "(!NetConstStrings_IsPrecacheAllowed())", "%s\n\tNetConstString type '%i' does not support non-precached access", "!NetConstStrings_IsPrecacheAllowed()", v6) )
      __debugbreak();
  }
  if ( !index )
    return (char *)&queryFormat.fmt + 3;
  v4 = !NetConstStrings_GetNameFromIndexPlusOne(type, index, (const char **)&outName);
  result = outName;
  if ( v4 )
    return (char *)&queryFormat.fmt + 3;
  return result;
}

/*
==============
GConfigStringsMP::GetClientTagIndex
==============
*/
__int64 GConfigStringsMP::GetClientTagIndex(GConfigStringsMP *this, const char *string)
{
  return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_CLIENT_TAGS, string);
}

/*
==============
GConfigStringsMP::GetClientTagName
==============
*/
scr_string_t GConfigStringsMP::GetClientTagName(GConfigStringsMP *this, const unsigned int index)
{
  char *StringForNcsIndex; 
  scr_string_t result; 

  StringForNcsIndex = G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_CLIENT_TAGS, index);
  result = SL_FindString(StringForNcsIndex);
  if ( !result )
  {
    Com_PrintError(15, "GetClientAttachTagName: Could not find const string for '%s'\n", StringForNcsIndex);
    return scr_const._;
  }
  return result;
}

/*
==============
GConfigStringsMP::GetEffectIndex
==============
*/
__int64 GConfigStringsMP::GetEffectIndex(GConfigStringsMP *this, const char *string)
{
  if ( NetConstStrings_IsPrecacheAllowed() )
    return 0i64;
  else
    return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_VFX, string);
}

/*
==============
GConfigStringsMP::GetEffectName
==============
*/
void GConfigStringsMP::GetEffectName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  unsigned __int64 v4; 
  char *StringForNcsIndex; 

  v4 = bufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 267, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 268, ASSERT_TYPE_ASSERT, "(bufferSize)", (const char *)&queryFormat, "bufferSize") )
    __debugbreak();
  StringForNcsIndex = G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_VFX, index);
  Core_strcpy(buffer, v4, StringForNcsIndex);
}

/*
==============
GConfigStringsMP::GetHintStringIndex
==============
*/
__int64 GConfigStringsMP::GetHintStringIndex(GConfigStringsMP *this, const char *string)
{
  return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_HINTSTRING, string);
}

/*
==============
GConfigStringsMP::GetLocalizedStringIndex
==============
*/
__int64 GConfigStringsMP::GetLocalizedStringIndex(GConfigStringsMP *this, const char *string)
{
  return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_LOCSTRING, string);
}

/*
==============
GConfigStringsMP::GetLocalizedStringName
==============
*/
void GConfigStringsMP::GetLocalizedStringName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  unsigned __int64 v4; 
  char *StringForNcsIndex; 

  v4 = bufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 126, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 127, ASSERT_TYPE_ASSERT, "(bufferSize)", (const char *)&queryFormat, "bufferSize") )
    __debugbreak();
  StringForNcsIndex = G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_LOCSTRING, index);
  Core_strcpy(buffer, v4, StringForNcsIndex);
}

/*
==============
GConfigStringsMP::GetLoopingSoundAliasIndex
==============
*/
__int64 GConfigStringsMP::GetLoopingSoundAliasIndex(GConfigStringsMP *this, const char *string)
{
  const SndAliasList *Alias; 
  _BYTE *integer64; 
  unsigned __int16 v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  unsigned __int16 outIndex; 

  if ( SND_FindPrecachedLoopedAliasIndex(string, &outIndex) )
    return outIndex;
  Alias = SND_TryFindAlias(string);
  if ( !Alias || !Com_IsSoundAliasLooping(Alias) )
    return 0i64;
  Com_PrintError(15, "'%s' (looping sound alias) needs to be precached\n", string);
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( !integer64 || !*integer64 || !SND_DevAllocatePrecachedAliasIndex(&outIndex, string, 256) )
    return 0i64;
  v6 = outIndex;
  if ( outIndex >= 0x100u )
  {
    v9 = 256;
    v8 = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( aliasIndex ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES )", "aliasIndex doesn't index BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
    v6 = outIndex;
  }
  v7 = BG_ConfigStrings_ConfigStringOffset(0x110u, v6);
  SV_SetConfigstring(v7, string);
  return outIndex;
}

/*
==============
GConfigStringsMP::GetMaterialIndex
==============
*/
__int64 GConfigStringsMP::GetMaterialIndex(GConfigStringsMP *this, const char *string)
{
  if ( NetConstStrings_IsPrecacheAllowed() )
    return 0i64;
  else
    return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_MATERIAL, string);
}

/*
==============
GConfigStringsMP::GetMaterialName
==============
*/
void GConfigStringsMP::GetMaterialName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  unsigned __int64 v4; 
  char *StringForNcsIndex; 

  v4 = bufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 224, ASSERT_TYPE_ASSERT, "(bufferSize)", (const char *)&queryFormat, "bufferSize") )
    __debugbreak();
  StringForNcsIndex = G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_MATERIAL, index);
  Core_strcpy(buffer, v4, StringForNcsIndex);
}

/*
==============
GConfigStringsMP::GetModelIndexNoCache
==============
*/
unsigned int GConfigStringsMP::GetModelIndexNoCache(GConfigStringsMP *this, const char *string)
{
  if ( NetConstStrings_IsPrecacheAllowed() )
    return G_CString_FindConfigstringIndex(string, 0x10u, 0x100u, 1, "dev model");
  else
    return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_XMODEL, string);
}

/*
==============
GConfigStringsMP::GetModelNameString
==============
*/
char *GConfigStringsMP::GetModelNameString(GConfigStringsMP *this, const unsigned int index)
{
  unsigned int v3; 
  scr_string_t ConfigstringConst; 
  unsigned int v6; 
  int v7; 

  if ( !NetConstStrings_IsPrecacheAllowed() )
    return G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_XMODEL, index);
  if ( index >= 0x100 )
  {
    v7 = 256;
    v6 = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_MODELS )", "index doesn't index BgStaticLimitsMP::MAX_CS_DEV_MODELS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v3 = BG_ConfigStrings_ConfigStringOffset(0x10u, index);
  ConfigstringConst = SV_GetConfigstringConst(v3);
  return (char *)SL_ConvertToString(ConfigstringConst);
}

/*
==============
GConfigStringsMP::GetSoundAliasIndex
==============
*/
__int64 GConfigStringsMP::GetSoundAliasIndex(GConfigStringsMP *this, const char *string)
{
  const SndAliasList *Alias; 
  _BYTE *integer64; 
  char v6; 
  unsigned __int16 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int16 outIndex; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 301, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( SND_FindPrecachedAliasIndex(string, &outIndex) )
    return outIndex;
  Alias = SND_TryFindAlias(string);
  if ( !Alias || Com_IsSoundAliasLooping(Alias) )
    return 0i64;
  integer64 = (_BYTE *)createfx->current.integer64;
  if ( integer64 && *integer64 )
  {
    v6 = 1;
    if ( SND_DevFindPrecachedAliasIndex(string, &outIndex) )
      return outIndex;
  }
  else
  {
    v6 = 0;
  }
  Com_PrintError(15, "'%s' (sound alias) needs to be precached\n", string);
  if ( !v6 || !SND_DevAllocatePrecachedAliasIndex(&outIndex, string, 256) )
    return 0i64;
  v7 = outIndex;
  if ( outIndex >= 0x100u )
  {
    LODWORD(v9) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( aliasIndex ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES )", "aliasIndex doesn't index BgStaticLimitsMP::MAX_CS_DEV_SOUND_ALIASES\n\t%i not in [0, %i)", v9, 256) )
      __debugbreak();
    v7 = outIndex;
  }
  v8 = BG_ConfigStrings_ConfigStringOffset(0x110u, v7);
  SV_SetConfigstring(v8, string);
  return outIndex;
}

/*
==============
GConfigStringsMP::GetStickerMaterialIndex
==============
*/
__int64 GConfigStringsMP::GetStickerMaterialIndex(GConfigStringsMP *this, const char *string)
{
  if ( NetConstStrings_IsPrecacheAllowed() )
    return 0i64;
  else
    return G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_STICKER, string);
}

/*
==============
GConfigStringsMP::GetStickerMaterialName
==============
*/
void GConfigStringsMP::GetStickerMaterialName(GConfigStringsMP *this, const unsigned int index, char *buffer, int bufferSize)
{
  unsigned __int64 v4; 
  char *StringForNcsIndex; 

  v4 = bufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_configstrings_mp.cpp", 246, ASSERT_TYPE_ASSERT, "(bufferSize)", (const char *)&queryFormat, "bufferSize") )
    __debugbreak();
  StringForNcsIndex = G_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_STICKER, index);
  Core_strcpy(buffer, v4, StringForNcsIndex);
}

/*
==============
GConfigStringsMP::SetDevString
==============
*/
void GConfigStringsMP::SetDevString(GConfigStringsMP *this, const char *string, unsigned int *entry)
{
  unsigned int ConfigstringIndex; 

  ConfigstringIndex = G_CString_FindConfigstringIndex(string, 0x27Du, 0x80u, 1, "mp dev string");
  if ( entry )
    *entry = ConfigstringIndex;
}

/*
==============
GConfigStringsMP::SetLocalizedString
==============
*/
void GConfigStringsMP::SetLocalizedString(GConfigStringsMP *this, const char *string, unsigned int *entry)
{
  if ( entry )
    *entry = G_ConfigStringsMP_GetIndexForNcsName(NETCONSTSTRINGTYPE_LOCSTRING, string);
}

