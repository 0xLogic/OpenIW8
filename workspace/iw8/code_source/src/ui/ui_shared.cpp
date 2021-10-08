/*
==============
UI_IsPlaybackIdPlaying
==============
*/

bool __fastcall UI_IsPlaybackIdPlaying(LocalClientNum_t localClientNum, unsigned int id)
{
  return ?UI_IsPlaybackIdPlaying@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
UI_GetFontHandle
==============
*/

GfxFont *__fastcall UI_GetFontHandle(const ScreenPlacement *scrPlace, int fontEnum, float scale)
{
  return ?UI_GetFontHandle@@YAPEAUGfxFont@@PEBUScreenPlacement@@HM@Z(scrPlace, fontEnum, scale);
}

/*
==============
UI_GetSubtitleForPlaybackId
==============
*/

const char *__fastcall UI_GetSubtitleForPlaybackId(LocalClientNum_t localClientNum, unsigned int id)
{
  return ?UI_GetSubtitleForPlaybackId@@YAPEBDW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
UI_IsUTF8String
==============
*/

bool __fastcall UI_IsUTF8String(const char *str)
{
  return ?UI_IsUTF8String@@YA_NPEBD@Z(str);
}

/*
==============
UI_Text_IsLanguageAgnostic
==============
*/

bool __fastcall UI_Text_IsLanguageAgnostic(const char *input)
{
  return ?UI_Text_IsLanguageAgnostic@@YA_NPEBD@Z(input);
}

/*
==============
UI_FormatLocalizedKeyName
==============
*/

void __fastcall UI_FormatLocalizedKeyName(char *result, unsigned __int64 resultSize, const char *localizedKeyName, bool forceNoBacking)
{
  ?UI_FormatLocalizedKeyName@@YAXPEAD_KPEBD_N@Z(result, resultSize, localizedKeyName, forceNoBacking);
}

/*
==============
String_Parse
==============
*/

int __fastcall String_Parse(const char **p, char *out, unsigned __int64 outSize)
{
  return ?String_Parse@@YAHPEAPEBDPEAD_K@Z(p, out, outSize);
}

/*
==============
UI_FeederItemText_Maps
==============
*/

const char *__fastcall UI_FeederItemText_Maps(LocalClientNum_t localClientNum, int index, int column, Material **material)
{
  return ?UI_FeederItemText_Maps@@YAPEBDW4LocalClientNum_t@@HHPEAPEAUMaterial@@@Z(localClientNum, index, column, material);
}

/*
==============
UI_ReportPlayer
==============
*/

void __fastcall UI_ReportPlayer(LocalClientNum_t localClientNum, ReportOffense offense)
{
  ?UI_ReportPlayer@@YAXW4LocalClientNum_t@@W4ReportOffense@@@Z(localClientNum, offense);
}

/*
==============
UI_GetMapCount
==============
*/

int __fastcall UI_GetMapCount()
{
  return ?UI_GetMapCount@@YAHXZ();
}

/*
==============
UI_GetMapIdForNum
==============
*/

int __fastcall UI_GetMapIdForNum(const int num)
{
  return ?UI_GetMapIdForNum@@YAHH@Z(num);
}

/*
==============
UI_DrawWrappedTextSubtitled
==============
*/

void __fastcall UI_DrawWrappedTextSubtitled(const ScreenPlacement *scrPlace, const char *text, const rectDef_s *rect, GfxFont *font, float scale, const vec4_t *color, int style, int textAlignMode, const vec4_t *subtitleGlowColor, bool cinematic)
{
  ?UI_DrawWrappedTextSubtitled@@YAXPEBUScreenPlacement@@PEBDPEBUrectDef_s@@PEAUGfxFont@@MAEBTvec4_t@@HH4_N@Z(scrPlace, text, rect, font, scale, color, style, textAlignMode, subtitleGlowColor, cinematic);
}

/*
==============
UI_ShowGamerCard
==============
*/

void __fastcall UI_ShowGamerCard(int controllerIndex, XUID xuid)
{
  ?UI_ShowGamerCard@@YAXHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
UI_IsDirectiveBound
==============
*/

bool __fastcall UI_IsDirectiveBound(LocalClientNum_t localClientNum, const char *srcString)
{
  return ?UI_IsDirectiveBound@@YA_NW4LocalClientNum_t@@PEBD@Z(localClientNum, srcString);
}

/*
==============
UI_ShowGamerCardWithPlatformId
==============
*/

void __fastcall UI_ShowGamerCardWithPlatformId(int controllerIndex, unsigned __int64 platformId)
{
  ?UI_ShowGamerCardWithPlatformId@@YAXH_K@Z(controllerIndex, platformId);
}

/*
==============
stripSpaces
==============
*/

char *__fastcall stripSpaces(const char *string)
{
  return ?stripSpaces@@YAPEADPEBD@Z(string);
}

/*
==============
UI_Text_InsertLocalizationWarnings
==============
*/

void __fastcall UI_Text_InsertLocalizationWarnings(const char *input, char *output, unsigned __int64 outputSize)
{
  ?UI_Text_InsertLocalizationWarnings@@YAXPEBDPEAD_K@Z(input, output, outputSize);
}

/*
==============
UI_GetSubtitleData
==============
*/

void __fastcall UI_GetSubtitleData(LocalClientNum_t localClientNum, const StringTable *table, char *outText, unsigned __int64 outTextSize, int *outVerticalOffset)
{
  ?UI_GetSubtitleData@@YAXW4LocalClientNum_t@@PEBUStringTable@@PEAD_KPEAH@Z(localClientNum, table, outText, outTextSize, outVerticalOffset);
}

/*
==============
UI_VerifyString
==============
*/

bool __fastcall UI_VerifyString(const char *str, const wchar_t *strOrig)
{
  return ?UI_VerifyString@@YA_NPEBDPEB_W@Z(str, strOrig);
}

/*
==============
UI_GetMapLoadNameForCurrentIndex
==============
*/

const char *__fastcall UI_GetMapLoadNameForCurrentIndex(int currentIndex)
{
  return ?UI_GetMapLoadNameForCurrentIndex@@YAPEBDH@Z(currentIndex);
}

/*
==============
UI_GetKeyBindLocalizedString
==============
*/

int __fastcall UI_GetKeyBindLocalizedString(LocalClientNum_t localClientNum, const char *command, char *result, const unsigned __int64 resultSize, InputContext inputContext, bool forceNoBacking, bool useMultipleBindings)
{
  return ?UI_GetKeyBindLocalizedString@@YAHW4LocalClientNum_t@@PEBDPEAD_KW4InputContext@@_N5@Z(localClientNum, command, result, resultSize, inputContext, forceNoBacking, useMultipleBindings);
}

/*
==============
UI_GetAxisBindLocalizedString
==============
*/

int __fastcall UI_GetAxisBindLocalizedString(LocalClientNum_t localClientNum, const char *command, char *result, const unsigned __int64 resultSize, InputContext inputContext)
{
  return ?UI_GetAxisBindLocalizedString@@YAHW4LocalClientNum_t@@PEBDPEAD_KW4InputContext@@@Z(localClientNum, command, result, resultSize, inputContext);
}

/*
==============
UI_TryFindAlias
==============
*/

bool __fastcall UI_TryFindAlias(const char *aliasname)
{
  return ?UI_TryFindAlias@@YA_NPEBD@Z(aliasname);
}

/*
==============
UI_ReplaceDirective
==============
*/

void __fastcall UI_ReplaceDirective(LocalClientNum_t localClientNum, const char *srcString, char *dstString, const unsigned __int64 dstBufferSize, bool forceNoBacking)
{
  ?UI_ReplaceDirective@@YAXW4LocalClientNum_t@@PEBDPEAD_K_N@Z(localClientNum, srcString, dstString, dstBufferSize, forceNoBacking);
}

/*
==============
UI_ActivisionClanTagAllowedForGamerTag
==============
*/

bool __fastcall UI_ActivisionClanTagAllowedForGamerTag(const int controllerIndex, const char *clanTag)
{
  return ?UI_ActivisionClanTagAllowedForGamerTag@@YA_NHPEBD@Z(controllerIndex, clanTag);
}

/*
==============
UI_StopLocalSoundAliasById
==============
*/

bool __fastcall UI_StopLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id)
{
  return ?UI_StopLocalSoundAliasById@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
UI_TogglePlayerMute
==============
*/

void __fastcall UI_TogglePlayerMute(int controllerIndex, XUID xuid)
{
  ?UI_TogglePlayerMute@@YAXHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
UI_KickPlayer
==============
*/

void __fastcall UI_KickPlayer(XUID xuid)
{
  ?UI_KickPlayer@@YAXUXUID@@@Z(xuid);
}

/*
==============
UI_PlayLocalSoundAlias
==============
*/

int __fastcall UI_PlayLocalSoundAlias(LocalClientNum_t localClientNum, SndAliasList *aliasList)
{
  return ?UI_PlayLocalSoundAlias@@YAHW4LocalClientNum_t@@PEAUSndAliasList@@@Z(localClientNum, aliasList);
}

/*
==============
UI_GetBoundKeyLocalizedString
==============
*/

int __fastcall UI_GetBoundKeyLocalizedString(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, char *result, const unsigned __int64 resultSize)
{
  return ?UI_GetBoundKeyLocalizedString@@YAHW4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@PEAD_K@Z(localClientNum, inputContext, action, slot, result, resultSize);
}

/*
==============
UI_FormattedBuildNumber
==============
*/

const char *__fastcall UI_FormattedBuildNumber()
{
  return ?UI_FormattedBuildNumber@@YAPEBDXZ();
}

/*
==============
UI_GetFontHandleFromEnum
==============
*/

GfxFont *__fastcall UI_GetFontHandleFromEnum(int fontEnum)
{
  return ?UI_GetFontHandleFromEnum@@YAPEAUGfxFont@@H@Z(fontEnum);
}

/*
==============
UI_IsKeyBindStringBound
==============
*/

bool __fastcall UI_IsKeyBindStringBound(LocalClientNum_t localClientNum, const char *command, InputContext inputContext)
{
  return ?UI_IsKeyBindStringBound@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, command, inputContext);
}

/*
==============
UI_GetDefaultKeyLocalizedString
==============
*/

int __fastcall UI_GetDefaultKeyLocalizedString(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, char *result, const unsigned __int64 resultSize)
{
  return ?UI_GetDefaultKeyLocalizedString@@YAHW4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@PEAD_K@Z(localClientNum, inputContext, action, slot, result, resultSize);
}

/*
==============
UI_PlayLocalSoundAliasByName
==============
*/

unsigned int __fastcall UI_PlayLocalSoundAliasByName(LocalClientNum_t localClientNum, const char *aliasname)
{
  return ?UI_PlayLocalSoundAliasByName@@YAIW4LocalClientNum_t@@PEBD@Z(localClientNum, aliasname);
}

/*
==============
UI_MakeHost
==============
*/

void __fastcall UI_MakeHost(XUID xuid)
{
  ?UI_MakeHost@@YAXUXUID@@@Z(xuid);
}

/*
==============
UI_FadeLocalSoundAliasById
==============
*/

bool __fastcall UI_FadeLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id, float fadeValue, int msec)
{
  return ?UI_FadeLocalSoundAliasById@@YA_NW4LocalClientNum_t@@IMH@Z(localClientNum, id, fadeValue, msec);
}

/*
==============
UI_TogglePlayerMute
==============
*/

void __fastcall UI_TogglePlayerMute(LocalClientNum_t localClientNum)
{
  ?UI_TogglePlayerMute@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_RegisterFonts
==============
*/

void UI_RegisterFonts(void)
{
  ?UI_RegisterFonts@@YAXXZ();
}

/*
==============
GetUnboundDirectiveString
==============
*/
char GetUnboundDirectiveString(LocalClientNum_t localClientNum, const char *directive, char *result)
{
  unsigned __int8 ActiveGameMode; 
  unsigned __int8 v7; 
  signed __int64 v8; 
  char v9; 
  char *v10; 
  int v11; 
  char *v12; 
  clientUIActive_t *LocalClientUIGlobals; 
  bool IsGamepadEnabled; 
  char *v15; 
  char *v16; 
  char *v18; 
  char v19; 
  StringTable *tablePtr; 
  int lookupColumns[2]; 
  char *lookupKeys[2]; 
  char Str[256]; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v7 = ActiveGameMode;
  v8 = Str - directive;
  do
  {
    v9 = *directive;
    directive[v8] = *directive;
    ++directive;
  }
  while ( v9 );
  v10 = Str;
  v11 = 4;
  if ( BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
  {
    v11 = 5;
  }
  else if ( v7 == 3 )
  {
    v11 = 6;
  }
  v12 = strchr_0(Str, 59);
  if ( v12 )
  {
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals(localClientNum);
    if ( (LocalClientUIGlobals->keyCatchers & 0x40) != 0 )
      IsGamepadEnabled = LocalClientUIGlobals->lastInputType == GAMEPAD;
    else
      IsGamepadEnabled = CL_Input_IsGamepadEnabled(localClientNum);
    if ( IsGamepadEnabled )
      *v12 = 0;
    else
      v10 = v12 + 1;
  }
  lookupColumns[0] = 3;
  lookupKeys[1] = "Y";
  lookupColumns[1] = v11;
  lookupKeys[0] = v10;
  if ( v10 )
  {
    while ( *v10 )
    {
      v15 = strchr_0(v10, 44);
      v10 = v15;
      if ( v15 )
      {
        *v15 = 0;
        v10 = v15 + 1;
      }
      StringTable_GetAsset("keyBindingsAction.csv", (const StringTable **)&tablePtr);
      v16 = (char *)StringTable_MultipleKeyLookup(tablePtr, lookupColumns, (const char **)lookupKeys, 2, 2);
      if ( *v16 || (StringTable_GetAsset("keyBindingsMovement.csv", (const StringTable **)&tablePtr), v16 = (char *)StringTable_MultipleKeyLookup(tablePtr, lookupColumns, (const char **)lookupKeys, 2, 2), *v16) || (StringTable_GetAsset("keyBindingsLook.csv", (const StringTable **)&tablePtr), v16 = (char *)StringTable_MultipleKeyLookup(tablePtr, lookupColumns, (const char **)lookupKeys, 2, 2), *v16) || (StringTable_GetAsset("keyBindingsChat.csv", (const StringTable **)&tablePtr), v16 = (char *)StringTable_MultipleKeyLookup(tablePtr, lookupColumns, (const char **)lookupKeys, 2, 2), *v16) )
      {
        v18 = (char *)(result - v16);
        do
        {
          v19 = *v16;
          v16[(_QWORD)v18] = *v16;
          ++v16;
        }
        while ( v19 );
        return 1;
      }
      if ( !v10 )
        return 0;
    }
  }
  return 0;
}

/*
==============
IsStringDirectiveBound
==============
*/
char IsStringDirectiveBound(LocalClientNum_t localClientNum, const char *directive)
{
  unsigned int v2; 
  unsigned int v3; 
  signed __int64 v4; 
  const char *v5; 
  InputContext v7; 
  char v8; 
  char *v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  char *v15; 
  __int64 v16; 
  char v17; 
  bool IsGamepadKeyBound; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  char Str[256]; 
  char resultName[256]; 
  char resultArg0[2816]; 

  v2 = 0;
  v3 = 0;
  v4 = Str - directive;
  v5 = directive;
  v7 = STRUCT_POINTER|FLOAT_POINTER;
  do
  {
    v8 = *directive;
    directive[v4] = *directive;
    ++directive;
  }
  while ( v8 );
  v9 = Str;
  v10 = strchr_0(Str, 58);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0;
    v7 = CL_InputContext_FromName(Str);
    if ( v7 == (STRUCT_POINTER|FLOAT_POINTER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1287, ASSERT_TYPE_ASSERT, "(inputContext != InputContext::INVALID)", (const char *)&queryFormat, "inputContext != InputContext::INVALID") )
      __debugbreak();
    v9 = v11 + 1;
  }
  v12 = strchr_0(v9, 59);
  if ( v12 )
  {
    if ( CL_Input_IsGamepadActiveForContext(localClientNum, v7) )
      *v12 = 0;
    else
      v9 = v12 + 1;
  }
  v13 = v9 + 1;
  if ( *v9 != 33 )
    v13 = v9;
  if ( v13 )
  {
    while ( *v13 )
    {
      v14 = strchr_0(v13, 44);
      v15 = v14;
      if ( v14 )
      {
        Core_strcpy(&resultArg0[256 * (unsigned __int64)v3++ + 256], 0x100ui64, v14);
        *v15++ = 0;
      }
      I_strlwr(v13);
      Core_strcpy(&resultArg0[256 * (unsigned __int64)v3++ + 256], 0x100ui64, v13);
      if ( CL_Input_IsGamepadActiveForContext(localClientNum, v7) )
      {
        if ( !strcmp_0(v13, "+activate") )
        {
LABEL_23:
          v13 = "+usereload";
        }
        else
        {
          v16 = 0i64;
          while ( 1 )
          {
            v17 = v13[v16++];
            if ( v17 != aReload_1[v16 - 1] )
              break;
            if ( v16 == 8 )
              goto LABEL_23;
          }
        }
        IsGamepadKeyBound = CL_Keys_IsGamepadKeyBound(localClientNum, v13, v7);
      }
      else
      {
        IsGamepadKeyBound = CL_Keys_IsKBMKeyBound(localClientNum, v13, v7);
      }
      if ( IsGamepadKeyBound || CL_Keys_IsAlternateKeyBound(localClientNum, v13, v7) )
        return 1;
      v13 = v15;
      if ( !v15 )
        break;
    }
  }
  ParseDirective(v5, resultName, 0x100ui64, resultArg0, 0x100ui64);
  v19 = 0x7FFFFFFFi64;
  v20 = 0x7FFFFFFFi64;
  v21 = 0i64;
  do
  {
    v22 = (unsigned __int8)resultName[v21];
    v23 = v20;
    v24 = (unsigned __int8)aFakeIntroSecon[v21++];
    --v20;
    if ( !v23 )
      break;
    if ( v22 != v24 )
    {
      v25 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v25 = v22;
      v22 = v25;
      v26 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v26 = v24;
      if ( v22 != v26 )
      {
        v28 = 0i64;
        while ( 1 )
        {
          v29 = (unsigned __int8)resultName[v28];
          v30 = v19;
          v31 = (unsigned __int8)aFakeIntroTime[v28++];
          --v19;
          if ( !v30 )
            break;
          if ( v29 != v31 )
          {
            v32 = v29 + 32;
            if ( (unsigned int)(v29 - 65) > 0x19 )
              v32 = v29;
            v29 = v32;
            v33 = v31 + 32;
            if ( (unsigned int)(v31 - 65) > 0x19 )
              v33 = v31;
            if ( v29 != v33 )
            {
              if ( !v3 )
                return 0;
              while ( !FontIcons_HasIconReference(localClientNum, &resultArg0[256 * (unsigned __int64)v2 + 256], v7) )
              {
                if ( ++v2 >= v3 )
                  return 0;
              }
              return 1;
            }
          }
          if ( !v29 )
            return 1;
        }
        return 1;
      }
    }
  }
  while ( v22 );
  return 1;
}

/*
==============
ParseDirective
==============
*/
void ParseDirective(const char *directive, char *resultName, const unsigned __int64 resultNameSize, char *resultArg0, const unsigned __int64 resultArg0Size)
{
  char *v9; 
  char *v10; 
  __int64 v11; 

  if ( !directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 991, ASSERT_TYPE_ASSERT, "(directive)", (const char *)&queryFormat, "directive") )
    __debugbreak();
  v9 = strstr_0(directive, ":");
  v10 = v9;
  if ( v9 )
  {
    v11 = (int)v9 - (int)directive;
    if ( (unsigned __int64)(v9 - directive + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v9 - (int)directive, "signed", v9 - directive) )
      __debugbreak();
    memcpy_0(resultName, directive, (int)v10 - (int)directive);
    resultName[v11] = 0;
    Core_strcpy(resultArg0, resultArg0Size, v10 + 1);
  }
  else
  {
    Core_strcpy(resultName, resultNameSize, directive);
    *resultArg0 = 0;
  }
}

/*
==============
ProcessStringDirective
==============
*/
void ProcessStringDirective(LocalClientNum_t localClientNum, const char *directive, char *result, unsigned __int64 resultSize, bool forceNoBacking)
{
  int v7; 
  InputContext v8; 
  unsigned int v10; 
  char *v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  char *v15; 
  GamepadPhysicalAxis AlternateAxisBinding; 
  unsigned int v17; 
  const char *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  const char *v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  char UnboundDirectiveString; 
  const char *v36; 
  char *v37; 
  const char *v38; 
  char *fmt; 
  char *fmta; 
  __int64 v41; 
  InputContext v42; 
  unsigned int v43; 
  bool useMultipleBindings; 
  char *v45; 
  char *directivea; 
  char dest[256]; 
  char resultArg0[256]; 
  char resultName[256]; 
  char resulta[256]; 
  char v51[2816]; 

  directivea = (char *)directive;
  v7 = 0;
  v8 = STRUCT_POINTER|FLOAT_POINTER;
  v42 = STRUCT_POINTER|FLOAT_POINTER;
  v10 = 0;
  Core_strcpy(dest, 0x100ui64, directive);
  v11 = dest;
  v12 = strchr_0(dest, 58);
  v45 = v12;
  if ( v12 )
  {
    *v12 = 0;
    v42 = CL_InputContext_FromName(dest);
    v8 = v42;
    if ( v42 == (STRUCT_POINTER|FLOAT_POINTER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1138, ASSERT_TYPE_ASSERT, "(inputContext != InputContext::INVALID)", (const char *)&queryFormat, "inputContext != InputContext::INVALID") )
      __debugbreak();
    v11 = v45 + 1;
  }
  v45 = strchr_0(v11, 59);
  if ( v45 )
  {
    if ( CL_Input_IsGamepadActiveForContext(localClientNum, v8) )
      *v45 = 0;
    else
      v11 = v45 + 1;
  }
  v13 = v11 + 1;
  if ( *v11 != 33 )
    v13 = v11;
  useMultipleBindings = *v11 == 33;
  if ( v13 )
  {
    while ( *v13 )
    {
      v14 = strchr_0(v13, 44);
      v15 = v14;
      if ( v14 )
      {
        Core_strcpy(&v51[256 * (unsigned __int64)v10++ + 256], 0x100ui64, v14);
        *v15++ = 0;
      }
      I_strlwr(v13);
      Core_strcpy(&v51[256 * (unsigned __int64)v10++ + 256], 0x100ui64, v13);
      if ( CL_Input_IsGamepadActiveForContext(localClientNum, v42) )
      {
        AlternateAxisBinding = CL_Gamepad_GetAlternateAxisBinding(localClientNum, v13, v42);
        if ( AlternateAxisBinding != GPAD_PHYSAXIS_NONE )
        {
          v17 = 0;
          switch ( AlternateAxisBinding )
          {
            case GPAD_PHYSAXIS_NONE:
              v27 = SEH_SafeTranslateString("KEY/UNBOUND");
              Core_strcpy(result, resultSize, v27);
              return;
            case GPAD_PHYSAXIS_RSTICK_X:
            case GPAD_PHYSAXIS_RSTICK_Y:
            case GPAD_PHYSAXIS_LSTICK_X:
            case GPAD_PHYSAXIS_LSTICK_Y:
              goto LABEL_42;
            case GPAD_PHYSAXIS_RTRIGGER:
              v17 = 19;
              goto LABEL_42;
            case GPAD_PHYSAXIS_LTRIGGER:
              v17 = 18;
              goto LABEL_42;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1545, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GamepadPhysicalAxis") )
                __debugbreak();
LABEL_42:
              if ( !FontIcons_IsCodePointAnIcon(v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1548, ASSERT_TYPE_ASSERT, "(FontIcons_IsCodePointAnIcon( unicodeCodePoint ))", (const char *)&queryFormat, "FontIcons_IsCodePointAnIcon( unicodeCodePoint )") )
                __debugbreak();
              if ( v17 )
                v7 = Com_Unicode_UTF8Encode(v17, result, resultSize);
              if ( v7 >= resultSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1554, ASSERT_TYPE_ASSERT, "(utf8Len < resultSize)", (const char *)&queryFormat, "utf8Len < resultSize") )
                __debugbreak();
              result[v7] = 0;
              break;
          }
          return;
        }
      }
      else
      {
        v18 = SEH_SafeTranslateString("KEY/UNBOUND");
        Core_strcpy(result, resultSize, v18);
      }
      if ( UI_GetKeyBindLocalizedString(localClientNum, v13, result, resultSize, v42, forceNoBacking, useMultipleBindings) )
        return;
      v13 = v15;
      if ( !v15 )
        break;
    }
  }
  ParseDirective(directivea, resultName, 0x100ui64, resultArg0, 0x100ui64);
  v19 = 0x7FFFFFFFi64;
  v20 = 0x7FFFFFFFi64;
  v21 = 0i64;
  while ( 1 )
  {
    v22 = (unsigned __int8)resultName[v21];
    v23 = v20;
    v24 = (unsigned __int8)aFakeIntroSecon[v21++];
    --v20;
    if ( !v23 )
    {
LABEL_31:
      v43 = 0;
      j_sscanf(resultArg0, "%d", &v43);
      if ( v43 > 0x28 )
      {
        v43 = 0;
        LODWORD(fmt) = 40;
        Com_PrintWarning(1, "Argument \"%s\" given for FAKE_INTRO_SECONDS is outside the acceptible range of (%d,%d).\n", resultArg0, 0i64, fmt);
      }
      if ( CL_IsGameClientActive(localClientNum) )
        v7 = v43 + CG_GetLocalClientGlobals(localClientNum)->time / 1000;
      v43 = v7 % 60;
      Com_sprintf(result, resultSize, "%02d", (unsigned int)(v7 % 60));
      return;
    }
    if ( v22 != v24 )
    {
      v25 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v25 = v22;
      v22 = v25;
      v26 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v26 = v24;
      if ( v22 != v26 )
        break;
    }
    if ( !v22 )
      goto LABEL_31;
  }
  v28 = 0i64;
  while ( 1 )
  {
    v29 = (unsigned __int8)resultName[v28];
    v30 = v19;
    v31 = (unsigned __int8)aFakeIntroTime[v28++];
    --v19;
    if ( !v30 )
    {
LABEL_60:
      v43 = 0;
      j_sscanf(resultArg0, "%d:%d:%d", &directivea, &v45, &v43);
      if ( (int)directivea < 0 )
      {
        LODWORD(directivea) = 0;
        Com_PrintWarning(1, "Argument \"%d\" hours for FAKE_INTRO_TIME is invalid.\n", 0i64);
      }
      if ( (unsigned int)v45 > 0x3B )
      {
        LODWORD(v45) = 0;
        Com_PrintWarning(1, "Argument \"%d\" minutes for FAKE_INTRO_TIME is invalid.\n", 0i64);
      }
      if ( v43 > 0x3B )
      {
        v43 = 0;
        Com_PrintWarning(1, "Argument \"%d\" seconds for FAKE_INTRO_TIME is invalid.\n", 0i64);
      }
      if ( CL_IsGameClientActive(localClientNum) )
        v7 = v43 + CG_GetLocalClientGlobals(localClientNum)->time / 1000;
      v34 = v7 / 60 + (_DWORD)v45;
      LODWORD(v41) = v7 % 60;
      v43 = v7 % 60;
      LODWORD(v45) = v34 % 60;
      LODWORD(fmta) = v34 % 60;
      Com_sprintf(result, resultSize, "%02d:%02d:%02d", (unsigned int)(v34 / 60 + (_DWORD)directivea), fmta, v41);
      return;
    }
    if ( v29 != v31 )
    {
      v32 = v29 + 32;
      if ( (unsigned int)(v29 - 65) > 0x19 )
        v32 = v29;
      v29 = v32;
      v33 = v31 + 32;
      if ( (unsigned int)(v31 - 65) > 0x19 )
        v33 = v31;
      if ( v29 != v33 )
        break;
    }
    if ( !v29 )
      goto LABEL_60;
  }
  if ( v10 )
  {
    while ( !FontIcons_GetIconReference(localClientNum, &v51[256 * (unsigned __int64)(unsigned int)v7 + 256], v42, resultSize, result) )
    {
      if ( ++v7 >= v10 )
        goto LABEL_72;
    }
  }
  else
  {
LABEL_72:
    memset_0(resulta, 0, sizeof(resulta));
    UnboundDirectiveString = GetUnboundDirectiveString(localClientNum, directivea, resulta);
    v36 = UI_SafeTranslateString("KEY/UNBOUND");
    v37 = (char *)v36;
    if ( UnboundDirectiveString )
    {
      v38 = "%s ( %s )";
      v36 = UI_SafeTranslateString(resulta);
    }
    else
    {
      v38 = "%s (%s)";
      v37 = directivea;
    }
    Com_sprintf(v51, resultSize, v38, v36, v37);
    if ( forceNoBacking )
      Com_sprintf(result, resultSize, (const char *)&queryFormat, v51);
    else
      Com_sprintf(result, resultSize, "%s%s %s %s", "^<", "!", v51, "^>");
  }
}

/*
==============
String_Parse
==============
*/
__int64 String_Parse(const char **p, char *out, unsigned __int64 outSize)
{
  const char *v6; 
  const char *String; 
  const char *v8; 
  const dvar_t *v10; 

  v6 = Com_ParseOnLine(p);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 218, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( *p )
  {
    if ( *v6 == 64 )
    {
      String = SEH_StringEd_GetString(v6 + 1);
      if ( String )
      {
        v8 = String;
LABEL_8:
        Core_strcpy(out, outSize, v8);
        return 1i64;
      }
      v10 = DCONST_DVARBOOL_loc_warnings;
      if ( !DCONST_DVARBOOL_loc_warnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warnings") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warningsAsErrors, "loc_warningsAsErrors") )
        {
          Com_Error_impl(ERR_LOCALIZATION, (const ObfuscateErrorText)&stru_1444F8DB8, 322i64, v6);
          v8 = v6;
          goto LABEL_8;
        }
        Com_PrintWarning(13, "WARNING: Could not translate menu string reference %s\n", v6);
      }
    }
    v8 = v6;
    goto LABEL_8;
  }
  return 0i64;
}

/*
==============
UI_ActivisionClanTagAllowedForGamerTag
==============
*/
char UI_ActivisionClanTagAllowedForGamerTag(const int controllerIndex, const char *clanTag)
{
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *LocalClientPlatformUsername; 
  const char *v9; 
  const char *LocalClientFullName; 
  const char *v11; 
  const char *v12; 
  __int64 v14; 
  const char *v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  char *format; 
  StringTable *tablePtr; 
  StringTable *v21; 
  StringTable *table; 
  char dest[64]; 

  if ( (unsigned int)controllerIndex > 8 )
    return 0;
  if ( !clanTag || !*clanTag )
    return 1;
  StringTable_GetAsset("mp/activisiongamertags_xb3.csv", (const StringTable **)&tablePtr);
  StringTable_GetAsset("mp/activisiongamertags.csv", (const StringTable **)&v21);
  StringTable_GetAsset("mp/activisionclantags.csv", (const StringTable **)&table);
  if ( !tablePtr )
  {
    v4 = "mp/activisiongamertags_xb3.csv";
LABEL_28:
    Com_PrintError(14, "%s: Unable to find string table %s\n", "UI_ActivisionClanTagAllowedForGamerTag", v4);
    return 0;
  }
  if ( !v21 )
  {
    v4 = "mp/activisiongamertags.csv";
    goto LABEL_28;
  }
  if ( !table || !table->rowCount )
  {
    v4 = "mp/activisionclantags.csv";
    goto LABEL_28;
  }
  v5 = StringTable_Lookup(table, 1, clanTag, 0);
  v6 = v5;
  if ( !v5 || !*v5 )
    return 1;
  v7 = NULL;
  if ( tablePtr->rowCount <= 0 || (LocalClientPlatformUsername = Live_GetLocalClientPlatformUsername(controllerIndex), Core_ReplaceAll_Copy(dest, 0x40ui64, LocalClientPlatformUsername, "#", "%%"), v9 = StringTable_Lookup(tablePtr, 1, dest, 0), (v7 = v9) == NULL) || !*v9 )
  {
    if ( v21->rowCount > 0 )
    {
      LocalClientFullName = Live_GetLocalClientFullName(controllerIndex);
      Core_ReplaceAll_Copy(dest, 0x40ui64, LocalClientFullName, "#", "%%");
      v7 = StringTable_Lookup(v21, 1, dest, 0);
    }
  }
  if ( v7 )
  {
    v14 = 0x7FFFFFFFi64;
    v15 = v6;
    while ( 1 )
    {
      v16 = v15[v7 - v6];
      v17 = v14;
      v18 = *v15++;
      --v14;
      if ( !v17 )
        break;
      if ( v16 != v18 )
      {
        LODWORD(format) = controllerIndex;
        Com_PrintError(14, "%s: assigned gamertag %s for controller %i does not match desired gamertag of %s\n", "UI_ActivisionClanTagAllowedForGamerTag", v7, format, v6);
        return 0;
      }
      if ( !v16 )
        return 1;
    }
    return 1;
  }
  v11 = Live_GetLocalClientFullName(controllerIndex);
  v12 = Live_GetLocalClientPlatformUsername(controllerIndex);
  Com_PrintError(14, "%s: Unable to find gamertag %s or %s tied to company clan tag %s\n", "UI_ActivisionClanTagAllowedForGamerTag", v12, v11, v6);
  return 0;
}

/*
==============
UI_DrawWrappedTextSubtitled
==============
*/
void UI_DrawWrappedTextSubtitled(const ScreenPlacement *scrPlace, const char *text, const rectDef_s *rect, GfxFont *font, float scale, const vec4_t *color, int style, int textAlignMode, const vec4_t *subtitleGlowColor)
{
  float v10; 

  __asm
  {
    vmovss  xmm0, [rsp+88h+scale]
    vmovss  [rsp+88h+var_68], xmm0
  }
  DrawWrappedText(scrPlace, text, rect, font, v10, color, style, textAlignMode, 1, subtitleGlowColor, NULL, NULL, 0, 0, 0, 0);
}

/*
==============
UI_FadeLocalSoundAliasById
==============
*/
bool UI_FadeLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id, float fadeValue, int msec)
{
  return SND_FadeLocalSoundAliasById(localClientNum, id, fadeValue, msec, SASYS_UI);
}

/*
==============
UI_FeederItemText_Maps
==============
*/
const char *UI_FeederItemText_Maps(LocalClientNum_t localClientNum, int index, int column, Material **material)
{
  const mapInfo *MapInfoForIndex; 

  if ( column || index < 0 || index >= Com_GameInfo_GetMapCount() )
    return (char *)&queryFormat.fmt + 3;
  MapInfoForIndex = Com_GameInfo_GetMapInfoForIndex(index);
  return UI_SafeTranslateString(MapInfoForIndex->mapName);
}

/*
==============
UI_FormatLocalizedKeyName
==============
*/
void UI_FormatLocalizedKeyName(char *result, unsigned __int64 resultSize, const char *localizedKeyName, bool forceNoBacking)
{
  unsigned int v8; 
  int usedCount; 

  usedCount = 0;
  v8 = SEH_DecodeLetter(localizedKeyName, &usedCount);
  if ( forceNoBacking || !FontIcons_DoesRequireBacking(v8) )
    Core_strcpy(result, resultSize, localizedKeyName);
  else
    Com_sprintf(result, resultSize, "%s %s %s", "^<", localizedKeyName, "^>");
}

/*
==============
UI_FormattedBuildNumber
==============
*/
char *UI_FormattedBuildNumber()
{
  unsigned int BuildNumberAsInt; 
  char buildName[128]; 

  OnlineMatchmakerOmniscient::GetBuildName(&OnlineMatchmakerOmniscient::ms_instance, buildName, 0x80u);
  BuildNumberAsInt = j_getBuildNumberAsInt();
  return j_va("%s.%i [%s]", "8.24", BuildNumberAsInt, buildName);
}

/*
==============
UI_GetAxisBindLocalizedString
==============
*/
__int64 UI_GetAxisBindLocalizedString(LocalClientNum_t localClientNum, const char *command, char *result, const unsigned __int64 resultSize, InputContext inputContext)
{
  int v9; 
  GamepadPhysicalAxis AlternateAxisBinding; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 

  v9 = 0;
  if ( !CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) )
  {
    v14 = SEH_SafeTranslateString("KEY/UNBOUND");
    Core_strcpy(result, resultSize, v14);
    return 0i64;
  }
  AlternateAxisBinding = CL_Gamepad_GetAlternateAxisBinding(localClientNum, command, inputContext);
  if ( AlternateAxisBinding == GPAD_PHYSAXIS_NONE )
    return 0i64;
  v11 = 0;
  switch ( AlternateAxisBinding )
  {
    case GPAD_PHYSAXIS_NONE:
      v12 = SEH_SafeTranslateString("KEY/UNBOUND");
      Core_strcpy(result, resultSize, v12);
      return 1i64;
    case GPAD_PHYSAXIS_RSTICK_X:
    case GPAD_PHYSAXIS_RSTICK_Y:
    case GPAD_PHYSAXIS_LSTICK_X:
    case GPAD_PHYSAXIS_LSTICK_Y:
      goto LABEL_9;
    case GPAD_PHYSAXIS_RTRIGGER:
      v11 = 19;
      goto LABEL_9;
    case GPAD_PHYSAXIS_LTRIGGER:
      v11 = 18;
      goto LABEL_9;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1545, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GamepadPhysicalAxis") )
        __debugbreak();
LABEL_9:
      if ( !FontIcons_IsCodePointAnIcon(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1548, ASSERT_TYPE_ASSERT, "(FontIcons_IsCodePointAnIcon( unicodeCodePoint ))", (const char *)&queryFormat, "FontIcons_IsCodePointAnIcon( unicodeCodePoint )") )
        __debugbreak();
      if ( v11 )
        v9 = Com_Unicode_UTF8Encode(v11, result, resultSize);
      if ( v9 >= resultSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1554, ASSERT_TYPE_ASSERT, "(utf8Len < resultSize)", (const char *)&queryFormat, "utf8Len < resultSize") )
        __debugbreak();
      result[v9] = 0;
      v13 = 1i64;
      break;
  }
  return v13;
}

/*
==============
UI_GetBoundKeyLocalizedString
==============
*/
__int64 UI_GetBoundKeyLocalizedString(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, char *result, const unsigned __int64 resultSize)
{
  const char *v10; 
  keyNum_t BoundKey; 
  int v13; 
  int ControllerFromClient; 
  const char *v15; 
  unsigned int v16; 
  int usedCount[6]; 

  if ( LUI_CoD_GetWaitingForKeyBind(localClientNum) && LUI_CoD_GetBind(localClientNum) == action )
  {
    v10 = SEH_SafeTranslateString("MENU/BIND_KEY_PENDING");
    Core_strcpy(result, resultSize, v10);
    return 0i64;
  }
  else
  {
    BoundKey = CL_Keys_GetBoundKey(localClientNum, inputContext, action, slot, 1);
    if ( BoundKey )
    {
      v13 = (unsigned __int8)BoundKey;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      usedCount[0] = 0;
      v15 = Com_Keys_KeynumToLocalizedKeyName(ControllerFromClient, v13);
      v16 = SEH_DecodeLetter(v15, usedCount);
      if ( FontIcons_DoesRequireBacking(v16) )
        Com_sprintf(result, resultSize, "%s %s %s", "^<", v15, "^>");
      else
        Core_strcpy(result, resultSize, v15);
      return 1i64;
    }
    else
    {
      Core_strcpy(result, resultSize, (const char *)&queryFormat.fmt + 3);
      return 0i64;
    }
  }
}

/*
==============
UI_GetDefaultKeyLocalizedString
==============
*/
__int64 UI_GetDefaultKeyLocalizedString(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, char *result, const unsigned __int64 resultSize)
{
  keyNum_t DefaultKey; 
  int v9; 
  int ControllerFromClient; 
  const char *v11; 
  unsigned int v12; 
  int usedCount[6]; 

  DefaultKey = CL_Keys_GetDefaultKey(localClientNum, inputContext, action, slot, 1);
  if ( DefaultKey )
  {
    v9 = (unsigned __int8)DefaultKey;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    usedCount[0] = 0;
    v11 = Com_Keys_KeynumToLocalizedKeyName(ControllerFromClient, v9);
    v12 = SEH_DecodeLetter(v11, usedCount);
    if ( FontIcons_DoesRequireBacking(v12) )
      Com_sprintf(result, resultSize, "%s %s %s", "^<", v11, "^>");
    else
      Core_strcpy(result, resultSize, v11);
    return 1i64;
  }
  else
  {
    Core_strcpy(result, resultSize, (const char *)&queryFormat.fmt + 3);
    return 0i64;
  }
}

/*
==============
UI_GetFontHandle
==============
*/

GfxFont *__fastcall UI_GetFontHandle(const ScreenPlacement *scrPlace, int fontEnum, double scale)
{
  GfxFont *result; 
  bool v4; 
  bool v5; 

  switch ( fontEnum )
  {
    case 2:
      result = sharedUiInfo.assets.bigFont;
      goto LABEL_21;
    case 3:
      result = sharedUiInfo.assets.smallFont;
      goto LABEL_21;
    case 5:
      result = cls.consoleFont;
      goto LABEL_21;
    case 6:
      result = sharedUiInfo.assets.objectiveFont;
      goto LABEL_21;
    case 4:
      result = sharedUiInfo.assets.boldFont;
      goto LABEL_21;
    case 7:
      result = sharedUiInfo.assets.textFont;
      goto LABEL_21;
    case 8:
      result = sharedUiInfo.assets.extraBigFont;
      goto LABEL_21;
    case 9:
      result = sharedUiInfo.assets.hudBigFont;
      goto LABEL_21;
    case 10:
      result = sharedUiInfo.assets.hudSmallFont;
      goto LABEL_21;
  }
  v4 = (unsigned int)fontEnum < 0xB;
  v5 = (unsigned int)fontEnum <= 0xB;
  if ( fontEnum == 11 )
  {
    result = sharedUiInfo.assets.bigNotoFont;
LABEL_21:
    v4 = 0;
    v5 = result == NULL;
    if ( result )
      return result;
  }
  _RAX = ui_smallFont;
  __asm
  {
    vmulss  xmm1, xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm2, xmm1, cs:__real@3fc00000
    vcomiss xmm2, dword ptr [rax+28h]
  }
  if ( v5 )
    return sharedUiInfo.assets.smallFont;
  _RCX = ui_extraBigFont;
  __asm { vcomiss xmm2, dword ptr [rcx+28h] }
  if ( !v4 )
    return sharedUiInfo.assets.extraBigFont;
  _RCX = ui_bigFont;
  __asm { vcomiss xmm2, dword ptr [rcx+28h] }
  return sharedUiInfo.assets.textFont;
}

/*
==============
UI_GetFontHandleFromEnum
==============
*/
GfxFont *UI_GetFontHandleFromEnum(int fontEnum)
{
  GfxFont *result; 

  switch ( fontEnum )
  {
    case 2:
      return sharedUiInfo.assets.bigFont;
    case 3:
      return sharedUiInfo.assets.smallFont;
    case 5:
      return cls.consoleFont;
    case 6:
      return sharedUiInfo.assets.objectiveFont;
    case 4:
      return sharedUiInfo.assets.boldFont;
    case 7:
      return sharedUiInfo.assets.textFont;
    case 8:
      return sharedUiInfo.assets.extraBigFont;
    case 9:
      return sharedUiInfo.assets.hudBigFont;
    case 10:
      return sharedUiInfo.assets.hudSmallFont;
  }
  result = NULL;
  if ( fontEnum == 11 )
    return sharedUiInfo.assets.bigNotoFont;
  return result;
}

/*
==============
UI_GetKeyBindLocalizedString
==============
*/
__int64 UI_GetKeyBindLocalizedString(LocalClientNum_t localClientNum, const char *command, char *result, const unsigned __int64 resultSize, InputContext inputContext, bool forceNoBacking, bool useMultipleBindings)
{
  __int64 v11; 
  char v12; 
  int GamePadBinding; 
  int AlternateKeyBinding; 
  const char *v15; 
  unsigned int v16; 
  unsigned int v17; 
  const char *v18; 
  int usedCount[4]; 
  char keyNames[128]; 
  char psText[128]; 
  char v23[256]; 
  char dest[256]; 

  if ( CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) )
  {
    if ( !strcmp_0(command, "+activate") )
    {
LABEL_6:
      command = "+usereload";
    }
    else
    {
      v11 = 0i64;
      while ( 1 )
      {
        v12 = command[v11++];
        if ( v12 != aReload_1[v11 - 1] )
          break;
        if ( v11 == 8 )
          goto LABEL_6;
      }
    }
    GamePadBinding = CL_Keys_GetGamePadBinding(localClientNum, command, (char (*)[128])keyNames, inputContext);
  }
  else
  {
    GamePadBinding = CL_Keys_GetKeyBinding(localClientNum, command, (char (*)[128])keyNames, inputContext);
  }
  AlternateKeyBinding = GamePadBinding;
  if ( !GamePadBinding )
    AlternateKeyBinding = CL_Keys_GetAlternateKeyBinding(localClientNum, command, (char (*)[128])keyNames, inputContext);
  if ( AlternateKeyBinding > 1 && !useMultipleBindings )
    AlternateKeyBinding = 1;
  if ( AlternateKeyBinding )
  {
    if ( AlternateKeyBinding == 1 )
    {
      UI_FormatLocalizedKeyName(result, resultSize, keyNames, forceNoBacking);
    }
    else
    {
      if ( AlternateKeyBinding != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1646, ASSERT_TYPE_ASSERT, "( ( bindCount == 2 ) )", "( bindCount ) = %i", AlternateKeyBinding) )
        __debugbreak();
      usedCount[0] = 0;
      v15 = UI_SafeTranslateString("KEY/OR");
      v16 = SEH_DecodeLetter(keyNames, usedCount);
      if ( forceNoBacking || !FontIcons_DoesRequireBacking(v16) )
        Core_strcpy(dest, 0x100ui64, keyNames);
      else
        Com_sprintf(dest, 0x100ui64, "%s %s %s", "^<", keyNames, "^>");
      usedCount[0] = 0;
      v17 = SEH_DecodeLetter(psText, usedCount);
      if ( forceNoBacking || !FontIcons_DoesRequireBacking(v17) )
        Core_strcpy(v23, 0x100ui64, psText);
      else
        Com_sprintf(v23, 0x100ui64, "%s %s %s", "^<", psText, "^>");
      Com_sprintf(result, resultSize, "%s %s %s", dest, v15, v23);
    }
  }
  else
  {
    v18 = UI_SafeTranslateString("KEY/UNBOUND");
    if ( forceNoBacking )
      Core_strcpy(result, resultSize, v18);
    else
      Com_sprintf(result, resultSize, "%s%s %s %s", "^<", "!", v18, "^>");
  }
  return (unsigned int)AlternateKeyBinding;
}

/*
==============
UI_GetMapCount
==============
*/

int __fastcall UI_GetMapCount()
{
  return Com_GameInfo_GetMapCount();
}

/*
==============
UI_GetMapIdForNum
==============
*/
__int64 UI_GetMapIdForNum(const int num)
{
  return (unsigned int)num;
}

/*
==============
UI_GetMapLoadNameForCurrentIndex
==============
*/
char *UI_GetMapLoadNameForCurrentIndex(int currentIndex)
{
  return Com_GameInfo_GetMapInfoForIndex(currentIndex)->mapLoadName;
}

/*
==============
UI_GetSubtitleData
==============
*/
void UI_GetSubtitleData(LocalClientNum_t localClientNum, const StringTable *table, char *outText, unsigned __int64 outTextSize, int *outVerticalOffset)
{
  unsigned __int64 v7; 
  LocalClientNum_t v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  const char *ColumnValueForRow; 
  char *v17; 
  signed __int64 v18; 
  unsigned __int8 v19; 
  int v20; 
  int v21; 
  const char *v22; 
  int v23; 
  char *v24; 
  const char *v26; 
  char *v27; 
  signed __int64 v28; 
  unsigned __int8 v29; 
  int v30; 
  bool v31; 
  const char *v32; 
  bool v33; 
  const char *v34; 
  const char *v37; 
  const char *v40; 
  int v41; 
  unsigned int v42; 
  const char *v43; 
  unsigned __int64 v44; 
  const char *v45; 
  __int64 v46; 
  __int64 v47; 
  char *fmt; 
  __int64 v50; 
  unsigned int outTimeInMsec; 
  LocalClientNum_t v52; 
  unsigned __int64 destsize; 
  unsigned __int64 v54; 
  __int64 v55; 
  int *v56; 
  char outName[64]; 

  v7 = outTextSize;
  v56 = outVerticalOffset;
  destsize = outTextSize;
  v52 = localClientNum;
  v10 = localClientNum;
  if ( !outTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 753, ASSERT_TYPE_ASSERT, "(outTextSize >= 1)", (const char *)&queryFormat, "outTextSize >= 1") )
    __debugbreak();
  *outText = 0;
  if ( !loc_language && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 757, ASSERT_TYPE_ASSERT, "(loc_language)", (const char *)&queryFormat, "loc_language") )
    __debugbreak();
  if ( table && R_Cinematic_GetFilenameAndTimeInMsec(outName, 0x40ui64, &outTimeInMsec) && outTimeInMsec )
  {
    if ( ui_cinematicsTimestamp->current.enabled )
    {
      LODWORD(fmt) = outTimeInMsec % 0x3E8 / 0x64;
      Com_sprintf(outText, v7, "%i.%01is ", outTimeInMsec / 0x3E8, fmt);
      v11 = -1i64;
      do
        ++v11;
      while ( outText[v11] );
      outText += v11;
      v7 -= v11;
      destsize = v7;
    }
    if ( s_PrevRowUsed >= 0 && s_PrevRowUsed < table->rowCount && !strcmp(outName, StringTable_GetColumnValueForRow(table, s_PrevRowUsed, 0)) )
    {
      v12 = s_PrevRowUsed;
      v13 = s_LastKnownGoodRow;
    }
    else
    {
      v14 = 0;
      v15 = table->rowCount - 1;
      if ( v15 < 0 )
        return;
      do
      {
        v12 = (v15 + v14) >> 1;
        ColumnValueForRow = StringTable_GetColumnValueForRow(table, v12, 0);
        if ( (*ColumnValueForRow & 0xDF) == 0 )
        {
          LODWORD(v50) = *ColumnValueForRow;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 793, ASSERT_TYPE_ASSERT, "( ( rowCinematic[ 0 ] && rowCinematic[ 0 ] != ' ' ) )", "( rowCinematic[ 0 ] ) = %i", v50) )
            __debugbreak();
        }
        v17 = outName;
        v18 = ColumnValueForRow - outName;
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 != v17[v18] )
            break;
          ++v17;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_27;
          }
        }
        v20 = v19 < (unsigned __int8)v17[v18] ? -1 : 1;
LABEL_27:
        if ( v20 >= 0 )
        {
          if ( v20 <= 0 )
            break;
          v14 = v12 + 1;
        }
        else
        {
          v15 = v12 - 1;
        }
      }
      while ( v14 <= v15 );
      if ( v20 )
        return;
      if ( v12 > 0 )
      {
        do
        {
          v21 = v12 - 1;
          v22 = StringTable_GetColumnValueForRow(table, v12 - 1, 0);
          if ( (*v22 & 0xDF) == 0 )
          {
            LODWORD(v50) = *v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 819, ASSERT_TYPE_ASSERT, "( ( rowCinematic[ 0 ] && rowCinematic[ 0 ] != ' ' ) )", "( rowCinematic[ 0 ] ) = %i", v50) )
              __debugbreak();
          }
          if ( strcmp(outName, v22) )
            break;
          --v12;
        }
        while ( v21 > 0 );
      }
      v7 = destsize;
      v13 = v12;
      s_LastKnownGoodRow = v12;
      s_PrevRowUsed = v12;
    }
    v23 = -1;
    v55 = 0i64;
    v24 = outText;
    v54 = v7;
    if ( v12 >= table->rowCount )
      return;
    __asm
    {
      vmovaps [rsp+108h+var_58], xmm6
      vmovsd  xmm6, cs:__real@408f400000000000
    }
    while ( 1 )
    {
      if ( v13 < 0 || v12 > v13 )
      {
        v26 = StringTable_GetColumnValueForRow(table, v12, 0);
        v27 = outName;
        v28 = v26 - outName;
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 != v27[v28] )
            break;
          ++v27;
          if ( !v29 )
          {
            v30 = 0;
            goto LABEL_49;
          }
        }
        v30 = v29 < (unsigned __int8)v27[v28] ? -1 : 1;
LABEL_49:
        if ( v30 )
        {
LABEL_72:
          __asm { vmovaps xmm6, [rsp+108h+var_58] }
          return;
        }
        s_LastKnownGoodRow = v12;
      }
      v31 = (unsigned int)SEH_GetCurrentLanguage() <= 1;
      v32 = StringTable_GetColumnValueForRow(table, v12, 5);
      v33 = atoi(v32) && !v31;
      if ( CL_SubtitlesEnabled(v10) || v33 )
      {
        v34 = StringTable_GetColumnValueForRow(table, v12, 1);
        *(double *)&_XMM0 = atof(v34);
        __asm
        {
          vmulsd  xmm1, xmm0, xmm6
          vcvttsd2si rsi, xmm1
        }
        if ( outTimeInMsec < (unsigned int)_RSI )
          goto LABEL_72;
        v37 = StringTable_GetColumnValueForRow(table, v12, 2);
        *(double *)&_XMM0 = atof(v37);
        __asm
        {
          vmulsd  xmm1, xmm0, xmm6
          vcvttsd2si rbx, xmm1
        }
        v40 = StringTable_GetColumnValueForRow(table, v12, 4);
        v41 = atoi(v40);
        v42 = _RSI + 3000;
        *v56 = v41;
        if ( (unsigned int)(_RBX - _RSI) >= 0xBB8 )
          v42 = _RBX;
        if ( outTimeInMsec < v42 )
        {
          if ( v23 >= 0 )
          {
            if ( v23 >= (unsigned int)_RSI && (unsigned int)(v23 - _RSI) < 0x46 )
            {
              outText = v24;
              destsize = v54;
            }
            v24[v55] = 10;
          }
          v43 = StringTable_GetColumnValueForRow(table, v12, 3);
          v44 = destsize;
          v45 = v43;
          Core_strcpy(outText, destsize, v43);
          v46 = -1i64;
          do
            ++v46;
          while ( v45[v46] );
          v47 = v46 + 1;
          v54 = v44;
          v24 = outText;
          v23 = v42;
          outText += v47;
          destsize = v44 - v47;
          v55 = v47 - 1;
          if ( v44 == v47 )
            goto LABEL_72;
        }
        v10 = v52;
      }
      if ( ++v12 >= table->rowCount )
        goto LABEL_72;
      v13 = s_LastKnownGoodRow;
    }
  }
}

/*
==============
UI_GetSubtitleForPlaybackId
==============
*/
const char *UI_GetSubtitleForPlaybackId(LocalClientNum_t localClientNum, unsigned int id)
{
  return SND_GetSubtitleForPlaybackId(id);
}

/*
==============
UI_IsDirectiveBound
==============
*/
char UI_IsDirectiveBound(LocalClientNum_t localClientNum, const char *srcString)
{
  const char *v2; 
  char v4; 
  char *v5; 
  char v6; 
  const char *v7; 
  char directive[256]; 

  v2 = srcString;
  if ( !srcString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1447, ASSERT_TYPE_ASSERT, "(srcString)", (const char *)&queryFormat, "srcString") )
    __debugbreak();
  v4 = *v2;
  v5 = directive;
  v6 = 0;
  if ( !*v2 )
    return 0;
  while ( v4 == 91 )
  {
    if ( v2[1] != 123 )
      goto LABEL_12;
    ++v2;
    v5 = directive;
    v6 = 1;
    memset_0(directive, 0, sizeof(directive));
LABEL_14:
    v4 = *++v2;
    if ( !v4 )
      return 0;
  }
  if ( v4 != 125 || (v7 = v2 + 1, v2[1] != 93) )
  {
LABEL_12:
    if ( v6 )
      *v5++ = v4;
    goto LABEL_14;
  }
  v6 = 0;
  ++v2;
  if ( v5 == directive )
  {
    Com_PrintError(13, "Directive empty in string '%s'", v7);
    goto LABEL_14;
  }
  return IsStringDirectiveBound(localClientNum, directive);
}

/*
==============
UI_IsKeyBindStringBound
==============
*/
bool UI_IsKeyBindStringBound(LocalClientNum_t localClientNum, const char *command, InputContext inputContext)
{
  __int64 v6; 
  char v7; 
  bool result; 

  if ( CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) )
  {
    if ( !strcmp_0(command, "+activate") )
    {
LABEL_6:
      command = "+usereload";
    }
    else
    {
      v6 = 0i64;
      while ( 1 )
      {
        v7 = command[v6++];
        if ( v7 != aReload_1[v6 - 1] )
          break;
        if ( v6 == 8 )
          goto LABEL_6;
      }
    }
    result = CL_Keys_IsGamepadKeyBound(localClientNum, command, inputContext);
  }
  else
  {
    result = CL_Keys_IsKBMKeyBound(localClientNum, command, inputContext);
  }
  if ( !result )
    return CL_Keys_IsAlternateKeyBound(localClientNum, command, inputContext);
  return result;
}

/*
==============
UI_IsPlaybackIdPlaying
==============
*/
bool UI_IsPlaybackIdPlaying(LocalClientNum_t localClientNum, unsigned int id)
{
  return SND_IsPlaybackIdPlaying(id);
}

/*
==============
UI_IsUTF8String
==============
*/
char UI_IsUTF8String(const char *str)
{
  const char *v1; 
  char v2; 
  bool v3; 
  __int64 v4; 
  unsigned int v5; 

  v1 = str;
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1794, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  v2 = *v1;
  v3 = *v1 < 0;
  if ( !*v1 )
    return 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      v4 = 1i64;
      goto LABEL_17;
    }
    if ( (v2 & 0xE0) == 0xC0 )
    {
      if ( (v1[1] & 0x7F | ((unsigned __int8)(v2 & 0x1F) << 6)) < 0x80u )
        return 0;
      v4 = 2i64;
      goto LABEL_17;
    }
    if ( (v2 & 0xF0) != 0xE0 )
      break;
    v5 = v1[2] & 0x7F | ((v1[1] & 0x7F | ((v2 & 0xF) << 6)) << 6);
    if ( v5 - 2048 > 0xCFFF && v5 < 0xE000 )
      return 0;
    v4 = 3i64;
LABEL_17:
    v1 += v4;
    v2 = *v1;
    v3 = *v1 < 0;
    if ( !*v1 )
      return 1;
  }
  if ( (v2 & 0xF8) == 0xF0 && (((v1[2] & 0x7F | ((v1[1] & 0x7F | ((v2 & 7) << 6)) << 6)) << 6) | v1[3] & 0x7Fu) - 0x10000 <= 0xFFFFE )
  {
    v4 = 4i64;
    goto LABEL_17;
  }
  return 0;
}

/*
==============
UI_KickPlayer
==============
*/
void UI_KickPlayer(XUID xuid)
{
  PartyData *PartyData; 
  const dvar_t *v2; 
  int MemberByXUID_AllowNotPresent; 
  int v4; 
  PartyDisconnectReason v5; 
  XUID player; 

  player.m_id = xuid.m_id;
  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
      goto LABEL_16;
    v2 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled )
    {
LABEL_16:
      Com_PrintError(15, "Attempt to kick a player from a public lobby or while the game is running\n");
      return;
    }
    PartyData = Lobby_GetPartyData();
  }
  if ( XUID::IsValid(&player) && Party_AreWeHost(PartyData) )
  {
    if ( Live_XUIDIsLocalPlayer(player) )
    {
      Com_Printf(14, "Attempted to kick a local player.\n");
    }
    else
    {
      MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(PartyData, player);
      v4 = MemberByXUID_AllowNotPresent;
      if ( MemberByXUID_AllowNotPresent >= 0 )
      {
        Com_Printf(14, "Kicking client %i in UI_KickPlayer()\n", (unsigned int)MemberByXUID_AllowNotPresent);
        LOBYTE(v5) = 19;
        PartyHost_KickPlayer(PartyData, v4, v5);
      }
      else
      {
        Com_Printf(14, "Attempted to kick an unknown player.\n");
      }
    }
  }
}

/*
==============
UI_MakeHost
==============
*/
void UI_MakeHost(XUID xuid)
{
  PartyData *ActiveParty; 
  int MemberByXUID; 
  const char *v3; 
  XUID player; 

  player.m_id = xuid.m_id;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
  {
    if ( Party_IsGameLobby(ActiveParty) )
    {
      Com_PrintError(15, "Makehost - Attempt to change hosts in a lobby.\n");
    }
    else if ( XUID::IsNull(&player) )
    {
      Com_PrintError(15, "Makehost - No select party member xuid for change host.\n");
    }
    else if ( Live_XUIDIsLocalPlayer(player) )
    {
      Com_PrintError(15, "Makehost - Can't make us the host.\n");
    }
    else
    {
      MemberByXUID = Party_FindMemberByXUID(ActiveParty, player);
      if ( MemberByXUID >= 0 )
      {
        if ( PartyMigrate_MigrateActive(ActiveParty) )
        {
          Com_PrintError(15, "Makehost - Migration already active.\n");
        }
        else
        {
          Com_Printf(14, "Makehost - Requesting host change to client %i in UI_MakeHost()\n", (unsigned int)MemberByXUID);
          PartyMigrate_AskArbitratorToChangeHost(ActiveParty, MemberByXUID, player);
        }
      }
      else
      {
        v3 = XUID::ToDevString(&player);
        Com_PrintError(15, "Makehost - Can't find the client num with xuid %s.\n", v3);
      }
    }
  }
  else
  {
    Com_PrintError(15, "Makehost - We aren't host of this party/lobby, so we can't change hosts\n");
  }
}

/*
==============
UI_PlayLocalSoundAlias
==============
*/
unsigned int UI_PlayLocalSoundAlias(LocalClientNum_t localClientNum, SndAliasList *aliasList)
{
  return SND_PlayLocalSoundAlias(localClientNum, aliasList, SASYS_UI);
}

/*
==============
UI_PlayLocalSoundAliasByName
==============
*/
__int64 UI_PlayLocalSoundAliasByName(LocalClientNum_t localClientNum, const char *aliasname)
{
  int SoundAliasSeed; 
  int v5; 

  SoundAliasSeed = Com_GetSoundAliasSeed();
  v5 = Sys_Milliseconds();
  Com_SetSoundAliasSeed(v5);
  LODWORD(aliasname) = SND_PlayLocalSoundAlias(localClientNum, aliasname, SASYS_UI);
  Com_SetSoundAliasSeed(SoundAliasSeed);
  return (unsigned int)aliasname;
}

/*
==============
UI_RegisterFonts
==============
*/
void UI_RegisterFonts(void)
{
  SEH_GetCurrentLanguage();
  sharedUiInfo.assets.bigFont = R_RegisterFont("fonts/main_regular.ttf", 65);
  sharedUiInfo.assets.smallFont = R_RegisterFont("fonts/main_regular.ttf", 35);
  sharedUiInfo.assets.boldFont = R_RegisterFont("fonts/main_bold.ttf", 35);
  sharedUiInfo.assets.textFont = R_RegisterFont("fonts/main_regular.ttf", 35);
  sharedUiInfo.assets.extraBigFont = R_RegisterFont("fonts/main_regular.ttf", 42);
  sharedUiInfo.assets.objectiveFont = R_RegisterFont("fonts/main_regular.ttf", 35);
  sharedUiInfo.assets.hudBigFont = R_RegisterFont("fonts/main_regular.ttf", 30);
  sharedUiInfo.assets.hudSmallFont = R_RegisterFont("fonts/main_regular.ttf", 20);
  sharedUiInfo.assets.subtitleFont = R_RegisterFont("fonts/main_regular.ttf", 20);
  sharedUiInfo.assets.bigNotoFont = R_RegisterFont("fonts/NotoSans_SemiCondensedMedium.ttf;fonts/NotoSansCJK-Regular.otf;fonts/NotoSansThai_Regular.ttf", 65);
}

/*
==============
UI_ReplaceDirective
==============
*/
void UI_ReplaceDirective(LocalClientNum_t localClientNum, const char *srcString, char *dstString, const unsigned __int64 dstBufferSize, bool forceNoBacking)
{
  const char *v7; 
  char *v8; 
  char v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  char v13; 
  const char *v14; 
  char directive[255]; 
  char v17; 
  char result[256]; 

  v7 = srcString;
  if ( !srcString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1374, ASSERT_TYPE_ASSERT, "(srcString)", (const char *)&queryFormat, "srcString") )
    __debugbreak();
  if ( !dstString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1375, ASSERT_TYPE_ASSERT, "(dstString)", (const char *)&queryFormat, "dstString") )
    __debugbreak();
  if ( v7 == dstString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1376, ASSERT_TYPE_ASSERT, "(srcString != dstString)", (const char *)&queryFormat, "srcString != dstString") )
    __debugbreak();
  if ( !dstBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1377, ASSERT_TYPE_ASSERT, "(dstBufferSize > 0)", (const char *)&queryFormat, "dstBufferSize > 0") )
    __debugbreak();
  v8 = &dstString[dstBufferSize];
  v9 = 0;
  v10 = &dstString[dstBufferSize - 1];
  v11 = dstString;
  *v10 = 0;
  v12 = directive;
  v13 = *v7;
  if ( *v7 )
  {
    while ( 1 )
    {
      if ( v11 >= v10 )
      {
LABEL_35:
        v8 = &dstString[dstBufferSize];
        goto LABEL_36;
      }
      if ( v13 != 91 )
        break;
      if ( v7[1] != 123 )
        goto LABEL_28;
      ++v7;
      v12 = directive;
      v9 = 1;
      memset_0(directive, 0, 0x100ui64);
LABEL_34:
      v13 = *++v7;
      if ( !v13 )
        goto LABEL_35;
    }
    if ( v13 == 125 )
    {
      v14 = v7 + 1;
      if ( v7[1] == 93 )
      {
        v9 = 0;
        ++v7;
        if ( v12 == directive )
        {
          Com_PrintError(13, "Directive empty in string '%s'", v14);
        }
        else
        {
          ProcessStringDirective(localClientNum, directive, result, 0x100ui64, forceNoBacking);
          if ( v11 < dstString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1405, ASSERT_TYPE_ASSERT, "( destPos ) >= ( dstString )", "%s >= %s\n\t%p, %p", "destPos", "dstString", v11, dstString) )
            __debugbreak();
          Core_strcpy_truncate(v11, (unsigned __int64)&dstString[dstBufferSize - (_QWORD)v11], result);
          for ( ; *v11; ++v11 )
            ;
        }
        goto LABEL_34;
      }
    }
LABEL_28:
    if ( v9 )
    {
      if ( v12 >= &v17 )
      {
        if ( v12 == &v17 )
          Com_PrintError(13, "Directive is too long '%s'", directive);
      }
      else
      {
        *v12++ = v13;
      }
    }
    else
    {
      *v11++ = v13;
    }
    goto LABEL_34;
  }
LABEL_36:
  if ( v11 < v8 )
    *v11 = 0;
  if ( v9 )
    Com_PrintError(13, "No end token to match begin token in string '%s'", v7);
}

/*
==============
UI_ReportPlayer
==============
*/
void UI_ReportPlayer(LocalClientNum_t localClientNum, ReportOffense offense)
{
  int ControllerFromClient; 
  unsigned __int64 UniversalId; 
  XUID v6; 
  XUID xuid; 

  XUID::XUID(&v6);
  xuid.m_id = sharedUiInfo.partyMemberXuid.m_id;
  XUID::operator=(&v6, &xuid);
  if ( XUID::IsValid(&v6) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    UniversalId = XUID::GetUniversalId(&v6);
    LiveAntiCheat_ReportPlayer(ControllerFromClient, offense, UniversalId);
    if ( !LUI_CoD_IsLUIKeyCatcherActive(localClientNum) )
      Com_SetErrorMessage("MENU/REPORT_OFFENSIVE_SUBMIT");
  }
}

/*
==============
UI_ShowGamerCard
==============
*/
void UI_ShowGamerCard(int controllerIndex, XUID xuid)
{
  unsigned __int64 PlatformIdFromXuid; 
  unsigned int v4; 
  unsigned int v5; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( XUID::IsValid(&xuida) )
  {
    PlatformIdFromXuid = XUID::GetPlatformIdFromXuid(xuida);
    v4 = XShowGamerCardUI(controllerIndex, PlatformIdFromXuid);
    v5 = v4;
    if ( v4 )
      Com_PrintError(16, "Error %x when trying to show gamercard for XUID %x\n", v4, xuida.m_id);
    if ( v5 == 87 )
      Com_SetErrorMessage("MPUI/CANT_SHOW_GAMERCARD");
  }
}

/*
==============
UI_ShowGamerCardWithPlatformId
==============
*/
void UI_ShowGamerCardWithPlatformId(int controllerIndex, unsigned __int64 platformId)
{
  unsigned int v3; 

  if ( platformId )
  {
    v3 = XShowGamerCardUI(controllerIndex, platformId);
    if ( v3 )
      Com_PrintError(16, "Error %x when trying to show gamercard for platformId %x\n", v3, platformId);
  }
}

/*
==============
UI_StopLocalSoundAliasById
==============
*/
bool UI_StopLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id)
{
  return SND_StopSoundAliasById(id);
}

/*
==============
UI_Text_InsertLocalizationWarnings
==============
*/
void UI_Text_InsertLocalizationWarnings(const char *input, char *output, unsigned __int64 outputSize)
{
  char *v4; 
  const char *v5; 
  char v6; 
  unsigned __int64 v7; 
  bool v8; 
  const char *v9; 
  char v10; 
  const char *v11; 
  size_t v12; 
  __int64 v13; 
  char *v14; 
  char v15; 
  int v16; 
  char v17; 
  unsigned int v18; 
  char *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  signed __int64 v25; 
  char *v26; 
  unsigned __int64 v27; 
  char inputa[2048]; 

  v26 = output;
  v4 = output;
  v5 = input;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2079, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2080, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  if ( v5 == v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2081, ASSERT_TYPE_ASSERT, "(input != output)", (const char *)&queryFormat, "input != output") )
    __debugbreak();
  if ( !outputSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2082, ASSERT_TYPE_ASSERT, "(outputSize > 0)", (const char *)&queryFormat, "outputSize > 0") )
    __debugbreak();
  R_TextValidatePrintable(v5);
  v6 = *v5;
  v7 = outputSize - 1;
  v8 = 0;
  v27 = v7;
  v9 = v5;
  if ( *v5 )
  {
    do
    {
      v10 = v5[1];
      v11 = v5 + 1;
      if ( (unsigned __int8)(v6 - 30) <= 1u || !v10 )
      {
        if ( v5 > v9 )
        {
          v12 = v5 - v9 + 1;
          if ( v10 )
            v12 = v5 - v9;
          if ( v12 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2113, ASSERT_TYPE_ASSERT, "(chunkSize < sizeof( chunk ))", (const char *)&queryFormat, "chunkSize < sizeof( chunk )") )
            __debugbreak();
          memcpy_0(inputa, v9, v12);
          if ( v12 >= 0x800 )
          {
            j___report_rangecheckfailure(v13);
            JUMPOUT(0x14278DF4Di64);
          }
          inputa[v12] = 0;
          v14 = inputa;
          if ( !UI_Text_IsLanguageAgnostic(inputa) && !v8 )
            v14 = j_va("^1UNLOCALIZED(^7%s^1)^7", inputa);
          v15 = 0;
          v16 = 0x7FFFFFFF;
          if ( (int)v7 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 236, ASSERT_TYPE_ASSERT, "(bytesAvailable > 0)", (const char *)&queryFormat, "bytesAvailable > 0") )
            __debugbreak();
          v17 = *v14;
          v18 = v7 - 4;
          v19 = v26;
          if ( *v14 )
          {
            while ( 1 )
            {
              if ( v17 < 0 )
              {
                if ( (v17 & 0xE0) == 0xC0 )
                {
                  if ( (v14[1] & 0x7F | ((unsigned __int8)(v17 & 0x1F) << 6)) < 0x80u )
                    goto LABEL_51;
                  v20 = 2;
                }
                else if ( (v17 & 0xF0) == 0xE0 )
                {
                  v21 = v14[2] & 0x7F | ((v14[1] & 0x7F | ((v17 & 0xF) << 6)) << 6);
                  if ( v21 - 2048 > 0xCFFF && v21 < 0xE000 )
                    goto LABEL_51;
                  v20 = 3;
                }
                else
                {
                  if ( (v17 & 0xF8) != 0xF0 || (v14[3] & 0x7F | ((v14[2] & 0x7F | ((v14[1] & 0x7F | ((unsigned __int8)(v17 & 7) << 6)) << 6)) << 6)) - 0x10000 > 0xFFFFEu )
                    goto LABEL_51;
                  v20 = 4;
                }
              }
              else
              {
                v20 = 1;
              }
              v22 = v18 - v20;
              if ( (int)(v18 - v20) < 0 )
              {
                v15 = 1;
                goto LABEL_51;
              }
              v23 = v20;
              memcpy_0(v19, v14, v20);
              v19 += v23;
              v14 += v23;
              if ( !--v16 )
              {
                if ( *v14 )
                  break;
              }
              v17 = *v14;
              v18 = v22;
              if ( !*v14 )
                goto LABEL_51;
            }
            v24 = 0i64;
            v15 = 1;
            if ( v18 >= 3 )
            {
              *(_WORD *)v19 = -32542;
              v24 = 3i64;
              v19[2] = -90;
            }
            v19 += v24;
          }
LABEL_51:
          *v19 = 0;
          v25 = v19 - v26;
          LODWORD(v7) = v27 - v25;
          v4 = &v26[v25];
          v27 -= v25;
          v26 += v25;
          if ( v15 )
            break;
          v11 = v5 + 1;
        }
        v9 = v11;
        v8 = *v5 == 31;
      }
      v6 = *v11;
      v5 = v11;
    }
    while ( *v11 );
  }
  *v4 = 0;
}

/*
==============
UI_Text_IsLanguageAgnostic
==============
*/
char UI_Text_IsLanguageAgnostic(const char *input)
{
  const char *v1; 
  char v2; 
  int v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  bool IsCodePointAnIcon; 

  v1 = input;
  R_TextValidatePrintable(input);
  v2 = *v1;
  if ( !*v1 )
    return 1;
  while ( 1 )
  {
    v3 = 0;
    v4 = -1;
    if ( v2 >= 0 )
    {
      v4 = (unsigned __int8)v2;
      v3 = 1;
      goto LABEL_25;
    }
    if ( (v2 & 0xE0) != 0xC0 )
    {
      if ( (v2 & 0xF0) == 0xE0 )
      {
        v4 = v1[2] & 0x7F | ((v1[1] & 0x7F | ((v2 & 0xF) << 6)) << 6);
        if ( v4 - 2048 > 0xCFFF && v4 < 0xE000 )
        {
          v6 = 0;
          goto LABEL_12;
        }
        v3 = 3;
      }
      else
      {
        v6 = 0;
        if ( (v2 & 0xF8) != 0xF0 )
          goto LABEL_13;
        v4 = v1[3] & 0x7F | ((v1[2] & 0x7F | ((v1[1] & 0x7F | ((v2 & 7) << 6)) << 6)) << 6);
        if ( v4 - 0x10000 > 0xFFFFE )
        {
LABEL_12:
          v4 = -1;
          goto LABEL_13;
        }
        v3 = 4;
      }
LABEL_25:
      v6 = v3;
      if ( v4 > 0xFFFF )
        v4 = 32;
LABEL_13:
      v5 = v4;
      if ( v6 )
        goto LABEL_16;
      goto LABEL_14;
    }
    v4 = v1[1] & 0x7F | ((v2 & 0x1F) << 6);
    if ( v4 >= 0x80 )
    {
      v3 = 2;
      goto LABEL_25;
    }
    v4 = -1;
    v5 = -1;
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 2061, ASSERT_TYPE_ASSERT, "(bytesUsed > 0)", (const char *)&queryFormat, "bytesUsed > 0") )
      __debugbreak();
LABEL_16:
    IsCodePointAnIcon = FontIcons_IsCodePointAnIcon(v4);
    if ( (unsigned int)(v5 - 48) > 9 && v4 != 32 && !IsCodePointAnIcon )
      return 0;
    v1 += v3;
    v2 = *v1;
    if ( !*v1 )
      return 1;
  }
}

/*
==============
UI_TogglePlayerMute
==============
*/
void UI_TogglePlayerMute(int controllerIndex, XUID xuid)
{
  PartyData *PartyData; 
  int MemberByXUID; 
  __int64 v5; 
  LocalClientNum_t ClientFromController; 
  XUID player; 

  player.m_id = xuid.m_id;
  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
    {
      Com_PrintError(15, "Attempt to mute a player while not in a party/lobby.\n");
      return;
    }
    PartyData = Lobby_GetPartyData();
  }
  if ( XUID::IsValid(&player) )
  {
    MemberByXUID = Party_FindMemberByXUID(PartyData, player);
    v5 = MemberByXUID;
    if ( MemberByXUID < 0 || MemberByXUID == Live_GetOurClientNum(controllerIndex, PartyData) )
    {
      Com_Printf(14, "Attempted to toggle mute on ourself or an unknown client.\n");
    }
    else if ( Party_IsMemberLocalPlayer(PartyData, v5) )
    {
      Com_Printf(14, "Attempted to toggle mute on a local player.\n");
    }
    else if ( PartyData->partyMembers[v5].status == 6 )
    {
      Com_Printf(14, "Attempted to toggle mute on a test client.\n");
    }
    else if ( CL_CanChangePlayerMute(PartyData, v5) )
    {
      CL_TogglePlayerMute(PartyData, v5);
    }
    else
    {
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      LUI_OpenMenu(ClientFromController, "playerUnmutable", 1, 0, 1);
    }
  }
}

/*
==============
UI_TogglePlayerMute
==============
*/
void UI_TogglePlayerMute(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  PartyData *PartyData; 
  int v3; 
  int MemberByXUID; 
  __int64 v5; 
  LocalClientNum_t ClientFromController; 
  XUID player; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  PartyData = &g_partyData;
  player.m_id = sharedUiInfo.partyMemberXuid.m_id;
  v3 = ControllerFromClient;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
    {
      Com_PrintError(15, "Attempt to mute a player while not in a party/lobby.\n");
      return;
    }
    PartyData = Lobby_GetPartyData();
  }
  if ( XUID::IsValid(&player) )
  {
    MemberByXUID = Party_FindMemberByXUID(PartyData, player);
    v5 = MemberByXUID;
    if ( MemberByXUID < 0 || MemberByXUID == Live_GetOurClientNum(v3, PartyData) )
    {
      Com_Printf(14, "Attempted to toggle mute on ourself or an unknown client.\n");
    }
    else if ( Party_IsMemberLocalPlayer(PartyData, v5) )
    {
      Com_Printf(14, "Attempted to toggle mute on a local player.\n");
    }
    else if ( PartyData->partyMembers[v5].status == 6 )
    {
      Com_Printf(14, "Attempted to toggle mute on a test client.\n");
    }
    else if ( CL_CanChangePlayerMute(PartyData, v5) )
    {
      CL_TogglePlayerMute(PartyData, v5);
    }
    else
    {
      ClientFromController = CL_Mgr_GetClientFromController(v3);
      LUI_OpenMenu(ClientFromController, "playerUnmutable", 1, 0, 1);
    }
  }
}

/*
==============
UI_TryFindAlias
==============
*/
bool UI_TryFindAlias(const char *aliasname)
{
  return SND_TryFindAlias(aliasname) != NULL;
}

/*
==============
UI_VerifyString
==============
*/
char UI_VerifyString(const char *str, const wchar_t *strOrig)
{
  char v2; 
  const char *v4; 
  unsigned int v5; 
  int v6; 
  bool v7; 
  const wchar_t *v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  v2 = 0;
  v4 = str;
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1821, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  LOBYTE(v5) = *v4;
  v6 = 0;
  v7 = *v4 < 0;
  if ( !*v4 )
    return 1;
  v8 = strOrig;
  v9 = 0x1E00000042000009i64;
  v10 = 0x20000000005i64;
  do
  {
    if ( v7 )
    {
      if ( (v5 & 0xE0) == 0xC0 )
      {
        v5 = v4[1] & 0x7F | ((v5 & 0x1F) << 6);
        if ( v5 < 0x80 )
          return 0;
        v11 = 2;
      }
      else if ( (v5 & 0xF0) == 0xE0 )
      {
        v5 = v4[2] & 0x7F | ((v4[1] & 0x7F | ((v5 & 0xF) << 6)) << 6);
        if ( v5 - 2048 > 0xCFFF && v5 < 0xE000 )
          return 0;
        v11 = 3;
      }
      else
      {
        if ( (v5 & 0xF8) != 0xF0 )
          return 0;
        v5 = v4[3] & 0x7F | ((v4[2] & 0x7F | ((v4[1] & 0x7F | ((v5 & 7) << 6)) << 6)) << 6);
        if ( v5 - 0x10000 > 0xFFFFE )
          return 0;
        v11 = 4;
      }
    }
    else
    {
      v5 = (unsigned __int8)v5;
      v11 = 1;
    }
    if ( v5 <= 0xFFFF )
    {
      v12 = v5 - 34;
      if ( (unsigned int)v12 <= 0x3C && _bittest64(&v9, v12) )
        return 0;
      v13 = v5 - 123;
      if ( (unsigned int)v13 <= 0x29 )
      {
        if ( _bittest64(&v10, v13) )
          return 0;
      }
    }
    else
    {
      v5 = 32;
    }
    if ( strOrig && v5 == 63 )
    {
      if ( *v8 != 63 )
        return 0;
    }
    else if ( v5 - 32 > 0x5F )
    {
      return 0;
    }
    if ( v2 || !R_IsSpace(v5) )
      v2 = 1;
    ++v6;
    v4 += v11;
    ++v8;
    LOBYTE(v5) = *v4;
    v7 = *v4 < 0;
  }
  while ( *v4 );
  if ( v6 )
    return v2;
  else
    return 1;
}

/*
==============
_DrawWrappedText
==============
*/
void DrawWrappedText(const ScreenPlacement *scrPlace, const char *text, const rectDef_s *rect, GfxFont *font, float scale, const vec4_t *color, int style, int textAlignMode)
{
  signed __int64 v8; 
  void *v16; 
  int v20; 
  const rectDef_s *v22; 
  const FontGlowStyle *glowStyle; 
  bool v27; 
  int v28; 
  int MinHeightForDistanceField; 
  int IsRightToLeft; 
  int v44; 
  int v46; 
  float h; 
  float ha; 
  int horzAlign; 
  int vertAlign; 
  int vertAligna; 
  int vertAlignb; 
  __int64 leftToRight; 
  float leftToRighta; 
  TextLine *outLines; 
  float outLinesa; 
  bool usePost; 
  char colorEscape[2]; 
  float scalea; 
  float w; 
  float v76; 
  float y; 
  float x; 
  int outLineCount; 
  float v80[4]; 
  TextLine v81; 
  char output[1040]; 
  char v90; 

  v16 = alloca(v8);
  __asm
  {
    vmovaps [rsp+3560h+var_80], xmm9
    vmovaps [rsp+3560h+var_90], xmm10
    vmovaps [rsp+3560h+var_A0], xmm11
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  xmm1, dword ptr [r8+0Ch]
  }
  v20 = rect->horzAlign;
  v22 = rect;
  vertAlign = rect->vertAlign;
  __asm
  {
    vmovss  [rsp+3560h+w], xmm0
    vmovss  xmm0, dword ptr [r8]
    vmovss  [rbp+3460h+var_34E0], xmm1
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  [rsp+3560h+x], xmm0
    vmovss  [rsp+3560h+y], xmm1
  }
  ScrPlace_ApplyRect(scrPlace, &x, &y, &w, v80, v20, vertAlign);
  glowStyle = R_Font_GetLegacyFontStyle(style);
  v27 = R_Font_UsePost(style);
  v28 = v22->horzAlign;
  __asm
  {
    vmovss  xmm0, [rbp+3460h+arg_20]
    vmulss  xmm1, xmm0, cs:__real@42400000
  }
  vertAligna = v22->vertAlign;
  usePost = v27;
  __asm { vmovss  [rsp+3560h+scale], xmm1 }
  ScrPlace_ApplyRect(scrPlace, &v76, &v76, &v76, &scalea, v28, vertAligna);
  __asm { vmovss  xmm10, cs:__real@3f000000 }
  if ( glowStyle )
  {
    MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
    __asm { vmovss  xmm4, [rsp+3560h+scale] }
    _ESI = MinHeightForDistanceField;
  }
  else
  {
    __asm
    {
      vmovss  xmm4, [rsp+3560h+scale]
      vaddss  xmm2, xmm4, xmm10
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vcvttss2si esi, xmm3
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vdivss  xmm9, xmm4, xmm0
  }
  IsRightToLeft = Language_IsRightToLeft();
  __asm
  {
    vmovss  xmm1, [rsp+3560h+w]; boxWidth
    vmovss  dword ptr [rsp+3560h+h], xmm9
  }
  R_Font_WordWrap(text, *(float *)&_XMM1, font, _ESI, h, 0, 512, IsRightToLeft == 0, &v81, &outLineCount);
  __asm { vmovss  xmm11, [rsp+3560h+y] }
  v44 = 0;
  *(_WORD *)colorEscape = 0;
  if ( outLineCount > 0 )
  {
    _RBX = &v81;
    __asm
    {
      vmovaps [rsp+3560h+var_50], xmm6
      vmovaps [rsp+3560h+var_60], xmm7
      vmovaps [rsp+3560h+var_70], xmm8
      vmovaps [rsp+3560h+var_B0], xmm12
    }
    v46 = textAlignMode & 3;
    __asm { vxorps  xmm12, xmm12, xmm12 }
    do
    {
      if ( (!_RBX->textLeft || !_RBX->textRight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 717, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
        __debugbreak();
      if ( _RBX->textLeft > _RBX->textRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 718, ASSERT_TYPE_ASSERT, "(textLine->textLeft <= textLine->textRight)", (const char *)&queryFormat, "textLine->textLeft <= textLine->textRight") )
        __debugbreak();
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+10h]
        vmovss  xmm8, [rsp+3560h+w]
        vmovss  xmm6, [rsp+3560h+x]
      }
      if ( (textAlignMode & 3) != 0 )
      {
        if ( v46 == 1 )
        {
          __asm
          {
            vsubss  xmm0, xmm8, xmm7
            vmulss  xmm1, xmm0, xmm10
            vaddss  xmm6, xmm1, xmm6
          }
        }
        else
        {
          if ( v46 != 2 )
          {
            LODWORD(outLines) = 2;
            LODWORD(leftToRight) = textAlignMode & 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 208, ASSERT_TYPE_ASSERT, "( alignX ) == ( 2 )", "%s == %s\n\t%i, %i", "alignX", "ITEM_ALIGN_RIGHT", leftToRight, outLines) )
              __debugbreak();
          }
          __asm
          {
            vsubss  xmm0, xmm8, xmm7
            vaddss  xmm6, xmm0, xmm6
          }
        }
      }
      R_PrepareTextLine(_RBX->textLeft, _RBX->textRight - _RBX->textLeft + 1, output, 1026, 1, colorEscape);
      __asm
      {
        vmovss  dword ptr [rsp+3560h+outLines], xmm12
        vmovss  dword ptr [rsp+3560h+leftToRight], xmm9
        vmovss  [rsp+3560h+vertAlign], xmm9
        vmovss  [rsp+3560h+horzAlign], xmm11
        vmovss  dword ptr [rsp+3560h+h], xmm6
      }
      R_AddCmdDrawText(output, 0x7FFFFFFF, font, _ESI, ha, *(float *)&horzAlign, *(float *)&vertAlignb, leftToRighta, outLinesa, color, glowStyle, usePost);
      __asm { vaddss  xmm11, xmm11, [rsp+3560h+scale] }
      ++v44;
      ++_RBX;
    }
    while ( v44 < outLineCount );
    __asm
    {
      vmovaps xmm12, [rsp+3560h+var_B0]
      vmovaps xmm8, [rsp+3560h+var_70]
      vmovaps xmm7, [rsp+3560h+var_60]
      vmovaps xmm6, [rsp+3560h+var_50]
    }
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
stripSpaces
==============
*/
char *stripSpaces(const char *string)
{
  const char *v1; 
  unsigned __int64 v2; 
  char v3; 
  char *i; 

  v1 = string;
  v2 = -1i64;
  do
    ++v2;
  while ( string[v2] );
  if ( v2 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_shared.cpp", 1876, ASSERT_TYPE_ASSERT, "( ( strlen( string ) < 256 ) )", "( string ) = %s", string) )
    __debugbreak();
  memset_0(finalString, 0, sizeof(finalString));
  v3 = *v1;
  for ( i = finalString; v3; ++v1 )
  {
    if ( v3 != 32 && v3 != 9 )
      *i++ = v3;
    v3 = v1[1];
  }
  return finalString;
}

