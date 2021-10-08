/*
==============
ClConfigStringsSP::ClConfigStringsSP
==============
*/

void __fastcall ClConfigStringsSP::ClConfigStringsSP(ClConfigStringsSP *this)
{
  ??0ClConfigStringsSP@@QEAA@XZ(this);
}

/*
==============
ClConfigStringsSP::GetLocalizedString
==============
*/

const char *__fastcall ClConfigStringsSP::GetLocalizedString(ClConfigStringsSP *this, int stringIndex)
{
  return ?GetLocalizedString@ClConfigStringsSP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsSP::GetClientTagString
==============
*/

const char *__fastcall ClConfigStringsSP::GetClientTagString(ClConfigStringsSP *this, int stringIndex)
{
  return ?GetClientTagString@ClConfigStringsSP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsSP::GetStickerMaterialIndex
==============
*/

unsigned int __fastcall ClConfigStringsSP::GetStickerMaterialIndex(ClConfigStringsSP *this, const char *string)
{
  return ?GetStickerMaterialIndex@ClConfigStringsSP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsSP::GetEffectId
==============
*/

unsigned int __fastcall ClConfigStringsSP::GetEffectId(ClConfigStringsSP *this, const char *string)
{
  return ?GetEffectId@ClConfigStringsSP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsSP::ParseConfigStrings
==============
*/

void __fastcall ClConfigStringsSP::ParseConfigStrings(ClConfigStringsSP *this, scr_string_t *configstrings)
{
  ?ParseConfigStrings@ClConfigStringsSP@@QEAAXPEAW4scr_string_t@@@Z(this, configstrings);
}

/*
==============
ClConfigStringsSP::RestartInit
==============
*/

void __fastcall ClConfigStringsSP::RestartInit(ClConfigStringsSP *this)
{
  ?RestartInit@ClConfigStringsSP@@QEAAXXZ(this);
}

/*
==============
ClConfigStringsSP::ClearStrings
==============
*/

void __fastcall ClConfigStringsSP::ClearStrings(ClConfigStringsSP *this)
{
  ?ClearStrings@ClConfigStringsSP@@QEAAXXZ(this);
}

/*
==============
ClConfigStringsSP::ConfigStringModified
==============
*/

void __fastcall ClConfigStringsSP::ConfigStringModified(ClConfigStringsSP *this, LocalClientNum_t localClientNum, int cs, const char *newString)
{
  ?ConfigStringModified@ClConfigStringsSP@@QEAAXW4LocalClientNum_t@@HPEBD@Z(this, localClientNum, cs, newString);
}

/*
==============
ClConfigStringsSP::GetLocalizedStringIndex
==============
*/

unsigned int __fastcall ClConfigStringsSP::GetLocalizedStringIndex(ClConfigStringsSP *this, const char *string)
{
  return ?GetLocalizedStringIndex@ClConfigStringsSP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsSP::GetStickerMaterialName
==============
*/

const char *__fastcall ClConfigStringsSP::GetStickerMaterialName(ClConfigStringsSP *this, int stringIndex)
{
  return ?GetStickerMaterialName@ClConfigStringsSP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsSP::GetClConfigStringsSP
==============
*/

ClConfigStringsSP *__fastcall ClConfigStringsSP::GetClConfigStringsSP()
{
  return ?GetClConfigStringsSP@ClConfigStringsSP@@SAPEAV1@XZ();
}

/*
==============
ClConfigStringsSP::GetHintString
==============
*/

const char *__fastcall ClConfigStringsSP::GetHintString(ClConfigStringsSP *this, int stringIndex)
{
  return ?GetHintString@ClConfigStringsSP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsSP::AreConfigStringsReady
==============
*/

bool __fastcall ClConfigStringsSP::AreConfigStringsReady(ClConfigStringsSP *this)
{
  return ?AreConfigStringsReady@ClConfigStringsSP@@UEAA_NXZ(this);
}

/*
==============
ClConfigStringsSP::GetConfigStringImpl
==============
*/

const char *__fastcall ClConfigStringsSP::GetConfigStringImpl(ClConfigStringsSP *this, int configStringIndex)
{
  return ?GetConfigStringImpl@ClConfigStringsSP@@MEBAPEBDH@Z(this, configStringIndex);
}

/*
==============
ClConfigStringsSP::GetModelString
==============
*/

const char *__fastcall ClConfigStringsSP::GetModelString(ClConfigStringsSP *this, int stringIndex)
{
  return ?GetModelString@ClConfigStringsSP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsSP::FindConfigstringIndex
==============
*/

unsigned int __fastcall ClConfigStringsSP::FindConfigstringIndex(ClConfigStringsSP *this, const char *name, const unsigned int start, const unsigned int max)
{
  return ?FindConfigstringIndex@ClConfigStringsSP@@QEAAIPEBDII@Z(this, name, start, max);
}

/*
==============
ClConfigStringsSP::ClConfigStringsSP
==============
*/
void ClConfigStringsSP::ClConfigStringsSP(ClConfigStringsSP *this)
{
  ClConfigStrings::ClConfigStrings(this);
  this->__vftable = (ClConfigStringsSP_vtbl *)&ClConfigStringsSP::`vftable';
  memset_0(this->m_configstrings, 0, sizeof(this->m_configstrings));
  this->m_configstringsReady = 0;
}

/*
==============
ClConfigStringsSP::AreConfigStringsReady
==============
*/
_BOOL8 ClConfigStringsSP::AreConfigStringsReady(ClConfigStringsSP *this)
{
  return this->m_configstringsReady;
}

/*
==============
ClConfigStringsSP::ClearStrings
==============
*/
void ClConfigStringsSP::ClearStrings(ClConfigStringsSP *this)
{
  scr_string_t *m_configstrings; 
  __int64 v2; 

  this->m_configstringsReady = 0;
  m_configstrings = this->m_configstrings;
  v2 = 6167i64;
  do
  {
    if ( *m_configstrings )
    {
      SL_RemoveRefToString(*m_configstrings);
      *m_configstrings = 0;
    }
    ++m_configstrings;
    --v2;
  }
  while ( v2 );
}

/*
==============
ClConfigStringsSP::ConfigStringModified
==============
*/
void ClConfigStringsSP::ConfigStringModified(ClConfigStringsSP *this, LocalClientNum_t localClientNum, int cs, const char *newString)
{
  scr_string_t *v6; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 

  v6 = &this->m_configstrings[cs];
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 137, ASSERT_TYPE_ASSERT, "(m_configstrings[configStringIndex] != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tModifying SP ConfigString %d which was originally a null value", "m_configstrings[configStringIndex] != NULL_SCR_STRING", cs) )
    __debugbreak();
  v8 = SL_ConvertToString(*v6);
  if ( !v8 )
  {
    LODWORD(v15) = cs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 140, ASSERT_TYPE_ASSERT, "(oldString)", "%s\n\tFailed to get old string for configStringIndex %d", "oldString", v15) )
      __debugbreak();
  }
  v9 = 0x7FFFFFFFi64;
  v10 = newString;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !newString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v11 = v8 - newString;
  do
  {
    v12 = v10[v11];
    v13 = v9;
    v14 = *v10++;
    --v9;
    if ( !v13 )
      break;
    if ( v12 != v14 )
    {
      SL_RemoveRefToString(*v6);
      *v6 = j_SL_GetString_(newString, 0, 20);
      CG_ServerCmdSP_ConfigStringModifiedInternal(localClientNum, cs);
      return;
    }
  }
  while ( v12 );
}

/*
==============
ClConfigStringsSP::FindConfigstringIndex
==============
*/
__int64 ClConfigStringsSP::FindConfigstringIndex(ClConfigStringsSP *this, const char *name, const unsigned int start, const unsigned int max)
{
  scr_string_t v8; 
  unsigned int v9; 
  scr_string_t v10; 
  __int64 v11; 
  scr_string_t v12; 
  __int64 v14; 

  if ( name && *name )
  {
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 119, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    v8 = start >= BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings ? SL_FindString(name) : SL_FindLowercaseString(name);
    v9 = 1;
    v10 = v8;
    if ( max > 1 )
    {
      v11 = start + 1;
      do
      {
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( start >= BgDynamicLimits::ms_data.m_maxConfigStrings )
        {
          LODWORD(v14) = start;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v14) )
            __debugbreak();
        }
        if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
          __debugbreak();
        if ( (unsigned int)v11 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
        {
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v14) )
            __debugbreak();
        }
        v12 = this->m_configstrings[v11];
        if ( v12 == scr_const._ )
          break;
        if ( v12 == v10 )
          return v9;
        ++v9;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( v9 < max );
    }
  }
  return 0i64;
}

/*
==============
ClConfigStringsSP::GetClConfigStringsSP
==============
*/
ClConfigStrings *ClConfigStringsSP::GetClConfigStringsSP()
{
  if ( (_BYTE)ClConfigStrings::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 20, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tClConfigStringsSP accessed when not SP type", "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return ClConfigStrings::GetClConfigStrings();
}

/*
==============
ClConfigStringsSP::GetClientTagString
==============
*/
const char *ClConfigStringsSP::GetClientTagString(ClConfigStringsSP *this, int stringIndex)
{
  int v6; 

  if ( (unsigned int)stringIndex >= 0x40 )
  {
    v6 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_CLIENT_TAGS )", "stringIndex doesn't index BgStaticLimitsSP::CS_MAX_CLIENT_TAGS\n\t%i not in [0, %i)", stringIndex, v6) )
      __debugbreak();
  }
  return this->GetConfigStringImpl(this, (unsigned int)(stringIndex + 3950));
}

/*
==============
ClConfigStringsSP::GetConfigStringImpl
==============
*/
const char *ClConfigStringsSP::GetConfigStringImpl(ClConfigStringsSP *this, int configStringIndex)
{
  __int64 v2; 
  __int64 v6; 
  int v7; 

  v2 = configStringIndex;
  if ( (unsigned int)configStringIndex >= 0x1817 )
  {
    v7 = 6167;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( configStringIndex ) < (unsigned)( MAX_CONFIGSTRINGS_SP )", "configStringIndex doesn't index MAX_CONFIGSTRINGS_SP\n\t%i not in [0, %i)", configStringIndex, v7) )
      __debugbreak();
  }
  if ( !this->m_configstrings[v2] )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 36, ASSERT_TYPE_ASSERT, "(m_configstrings[configStringIndex] != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tGetting SP ConfigString %d which is a null value", "m_configstrings[configStringIndex] != NULL_SCR_STRING", v6) )
      __debugbreak();
  }
  return SL_ConvertToString(this->m_configstrings[v2]);
}

/*
==============
ClConfigStringsSP::GetEffectId
==============
*/
unsigned int ClConfigStringsSP::GetEffectId(ClConfigStringsSP *this, const char *string)
{
  return ClConfigStringsSP::FindConfigstringIndex(this, string, 0xB6Eu, 0x400u);
}

/*
==============
ClConfigStringsSP::GetHintString
==============
*/
const char *ClConfigStringsSP::GetHintString(ClConfigStringsSP *this, int stringIndex)
{
  int v6; 

  if ( (unsigned int)stringIndex >= 0x20 )
  {
    v6 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 50, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_HINT_STRINGS )", "stringIndex doesn't index BgStaticLimitsSP::CS_MAX_HINT_STRINGS\n\t%i not in [0, %i)", stringIndex, v6) )
      __debugbreak();
  }
  return this->GetConfigStringImpl(this, (unsigned int)(stringIndex + 6131));
}

/*
==============
ClConfigStringsSP::GetLocalizedString
==============
*/
const char *ClConfigStringsSP::GetLocalizedString(ClConfigStringsSP *this, int stringIndex)
{
  int v6; 

  if ( (unsigned int)stringIndex >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_LOCALIZED_STRINGS )", "stringIndex doesn't index BgStaticLimitsSP::CS_MAX_LOCALIZED_STRINGS\n\t%i not in [0, %i)", stringIndex, v6) )
      __debugbreak();
  }
  return this->GetConfigStringImpl(this, (unsigned int)(stringIndex + 4083));
}

/*
==============
ClConfigStringsSP::GetLocalizedStringIndex
==============
*/
unsigned int ClConfigStringsSP::GetLocalizedStringIndex(ClConfigStringsSP *this, const char *string)
{
  return ClConfigStringsSP::FindConfigstringIndex(this, string, 0xFF3u, 0x800u);
}

/*
==============
ClConfigStringsSP::GetModelString
==============
*/
const char *ClConfigStringsSP::GetModelString(ClConfigStringsSP *this, int stringIndex)
{
  int v6; 

  if ( (unsigned int)stringIndex >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( BgStaticLimitsSP::CS_MAX_MODELS )", "stringIndex doesn't index BgStaticLimitsSP::CS_MAX_MODELS\n\t%i not in [0, %i)", stringIndex, v6) )
      __debugbreak();
  }
  return this->GetConfigStringImpl(this, (unsigned int)(stringIndex + 16));
}

/*
==============
ClConfigStringsSP::GetStickerMaterialIndex
==============
*/
__int64 ClConfigStringsSP::GetStickerMaterialIndex(ClConfigStringsSP *this, const char *string)
{
  return 0i64;
}

/*
==============
ClConfigStringsSP::GetStickerMaterialName
==============
*/
const char *ClConfigStringsSP::GetStickerMaterialName(ClConfigStringsSP *this, int stringIndex)
{
  return 0i64;
}

/*
==============
ClConfigStringsSP::ParseConfigStrings
==============
*/
void ClConfigStringsSP::ParseConfigStrings(ClConfigStringsSP *this, scr_string_t *configstrings)
{
  __int64 OnlyLocalClientNum; 
  cg_t *v5; 
  unsigned int v6; 
  signed __int64 v7; 
  scr_string_t v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( !clientUIActives[0].isRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 157, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientUIGlobals( CL_GetOnlyLocalClientNum() )->isRunning)", "%s\n\tParsing SP Config Strings when local client is not running (?)", "CL_GetLocalClientUIGlobals( CL_GetOnlyLocalClientNum() )->isRunning") )
    __debugbreak();
  if ( cls.isLoadComplete )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    if ( (unsigned int)OnlyLocalClientNum >= cg_t::ms_allocatedCount )
    {
      LODWORD(v10) = OnlyLocalClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v10, cg_t::ms_allocatedCount) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[OnlyLocalClientNum] )
    {
      LODWORD(v11) = OnlyLocalClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v11) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v11) = OnlyLocalClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v11) )
        __debugbreak();
    }
    v5 = cg_t::ms_cgArray[OnlyLocalClientNum];
    v5->time = com_time;
    v5->oldTime = com_time;
    CL_MainSP_SetAnimFrametime(0);
  }
  if ( !NetConstStrings_AreStringsLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 170, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tThe server should have already initialized the map if we're on a listen server", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  v6 = 0;
  v7 = (char *)this - (char *)configstrings;
  do
  {
    v8 = *configstrings;
    if ( !*configstrings )
    {
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 175, ASSERT_TYPE_ASSERT, "(newScrStr != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tSetting a null string while the game client is active! Index %d", "newScrStr != NULL_SCR_STRING", v11) )
        __debugbreak();
    }
    v9 = *(scr_string_t *)((char *)configstrings + v7 + 8);
    if ( v9 )
    {
      if ( v8 == v9 )
        goto LABEL_49;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
        __debugbreak();
      if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
        __debugbreak();
      if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized )
      {
        LODWORD(v11) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 184, ASSERT_TYPE_ASSERT, "(!CL_IsGameClientActive( CL_GetOnlyLocalClientNum() ))", "%s\n\tOverwriting null string while the game client is active! Index %d", "!CL_IsGameClientActive( CL_GetOnlyLocalClientNum() )", v11) )
          __debugbreak();
      }
    }
    Scr_SetString(&this->m_configstrings[v6], v8);
    if ( cls.isLoadComplete )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
        __debugbreak();
      if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
        __debugbreak();
      CG_ServerCmdSP_ConfigStringModifiedInternal(LOCAL_CLIENT_0, v6);
    }
LABEL_49:
    ++v6;
    ++configstrings;
  }
  while ( v6 < 0x1817 );
  this->m_configstringsReady = 1;
}

/*
==============
ClConfigStringsSP::RestartInit
==============
*/
void ClConfigStringsSP::RestartInit(ClConfigStringsSP *this)
{
  scr_string_t *m_configstrings; 
  __int64 v2; 

  this->m_configstringsReady = 0;
  m_configstrings = this->m_configstrings;
  v2 = 6167i64;
  do
  {
    if ( *m_configstrings )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_configstrings_sp.cpp", 216, ASSERT_TYPE_ASSERT, "(m_configstrings[configStringIndex] == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "m_configstrings[configStringIndex] == NULL_SCR_STRING") )
        __debugbreak();
    }
    *m_configstrings++ = j_SL_GetString_((const char *)&queryFormat.fmt + 3, 0, 20);
    --v2;
  }
  while ( v2 );
}

