/*
==============
ClConfigStringsMP::GetModelString
==============
*/

const char *__fastcall ClConfigStringsMP::GetModelString(ClConfigStringsMP *this, int stringIndex)
{
  return ?GetModelString@ClConfigStringsMP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsMP::ClearStrings
==============
*/

void __fastcall ClConfigStringsMP::ClearStrings(ClConfigStringsMP *this)
{
  ?ClearStrings@ClConfigStringsMP@@QEAAXXZ(this);
}

/*
==============
ClConfigStringsMP::GetClConfigStringsMP
==============
*/

ClConfigStringsMP *__fastcall ClConfigStringsMP::GetClConfigStringsMP()
{
  return ?GetClConfigStringsMP@ClConfigStringsMP@@SAPEAV1@XZ();
}

/*
==============
ClConfigStringsMP::Dump_ConfigStrings_f
==============
*/

void ClConfigStringsMP::Dump_ConfigStrings_f(void)
{
  ?Dump_ConfigStrings_f@ClConfigStringsMP@@SAXXZ();
}

/*
==============
ClConfigStringsMP::AreConfigStringsReady
==============
*/

bool __fastcall ClConfigStringsMP::AreConfigStringsReady(ClConfigStringsMP *this)
{
  return ?AreConfigStringsReady@ClConfigStringsMP@@UEAA_NXZ(this);
}

/*
==============
ClConfigStringsMP::GetConfigStringImpl
==============
*/

const char *__fastcall ClConfigStringsMP::GetConfigStringImpl(ClConfigStringsMP *this, int configStringIndex)
{
  return ?GetConfigStringImpl@ClConfigStringsMP@@MEBAPEBDH@Z(this, configStringIndex);
}

/*
==============
ClConfigStringsMP::GetEffectId
==============
*/

unsigned int __fastcall ClConfigStringsMP::GetEffectId(ClConfigStringsMP *this, const char *string)
{
  return ?GetEffectId@ClConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsMP::GetHintString
==============
*/

const char *__fastcall ClConfigStringsMP::GetHintString(ClConfigStringsMP *this, int stringIndex)
{
  return ?GetHintString@ClConfigStringsMP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsMP::GetLocalizedStringIndex
==============
*/

unsigned int __fastcall ClConfigStringsMP::GetLocalizedStringIndex(ClConfigStringsMP *this, const char *string)
{
  return ?GetLocalizedStringIndex@ClConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsMP::ParseConfigStrings
==============
*/

void __fastcall ClConfigStringsMP::ParseConfigStrings(ClConfigStringsMP *this, LocalClientNum_t localClientNum, msg_t *msg)
{
  ?ParseConfigStrings@ClConfigStringsMP@@QEAAXW4LocalClientNum_t@@PEAUmsg_t@@@Z(this, localClientNum, msg);
}

/*
==============
ClConfigStringsMP::ConfigStringModified
==============
*/

void __fastcall ClConfigStringsMP::ConfigStringModified(ClConfigStringsMP *this, LocalClientNum_t localClientNum, unsigned int index, const char *newString)
{
  ?ConfigStringModified@ClConfigStringsMP@@QEAAXW4LocalClientNum_t@@IPEBD@Z(this, localClientNum, index, newString);
}

/*
==============
ClConfigStringsMP::GetLocalizedString
==============
*/

const char *__fastcall ClConfigStringsMP::GetLocalizedString(ClConfigStringsMP *this, int stringIndex)
{
  return ?GetLocalizedString@ClConfigStringsMP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsMP::GetStickerMaterialIndex
==============
*/

unsigned int __fastcall ClConfigStringsMP::GetStickerMaterialIndex(ClConfigStringsMP *this, const char *string)
{
  return ?GetStickerMaterialIndex@ClConfigStringsMP@@UEAAIPEBD@Z(this, string);
}

/*
==============
ClConfigStringsMP::GetClientTagString
==============
*/

const char *__fastcall ClConfigStringsMP::GetClientTagString(ClConfigStringsMP *this, int stringIndex)
{
  return ?GetClientTagString@ClConfigStringsMP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsMP::UpdateConfigStringData
==============
*/

void __fastcall ClConfigStringsMP::UpdateConfigStringData(ClConfigStringsMP *this, unsigned int index, const char *newString)
{
  ?UpdateConfigStringData@ClConfigStringsMP@@AEAAXIPEBD@Z(this, index, newString);
}

/*
==============
ClConfigStringsMP::ClConfigStringsMP
==============
*/

void __fastcall ClConfigStringsMP::ClConfigStringsMP(ClConfigStringsMP *this)
{
  ??0ClConfigStringsMP@@QEAA@XZ(this);
}

/*
==============
ClConfigStringsMP::DumpConfigStrings
==============
*/

void __fastcall ClConfigStringsMP::DumpConfigStrings(ClConfigStringsMP *this)
{
  ?DumpConfigStrings@ClConfigStringsMP@@AEAAXXZ(this);
}

/*
==============
ClConfigStringsMP::GetStickerMaterialName
==============
*/

const char *__fastcall ClConfigStringsMP::GetStickerMaterialName(ClConfigStringsMP *this, int stringIndex)
{
  return ?GetStickerMaterialName@ClConfigStringsMP@@UEBAPEBDH@Z(this, stringIndex);
}

/*
==============
ClConfigStringsMP::ClConfigStringsMP
==============
*/
void ClConfigStringsMP::ClConfigStringsMP(ClConfigStringsMP *this)
{
  ClConfigStrings::ClConfigStrings(this);
  this->__vftable = (ClConfigStringsMP_vtbl *)&ClConfigStringsMP::`vftable';
}

/*
==============
ClConfigStringsMP::AreConfigStringsReady
==============
*/

bool __fastcall ClConfigStringsMP::AreConfigStringsReady(ClConfigStringsMP *this)
{
  return NetConstStrings_AreStringsLoaded();
}

/*
==============
CL_ConfigStringsMP_GetNcsIndexForString
==============
*/
__int64 CL_ConfigStringsMP_GetNcsIndexForString(const NetConstStringType type, const char *string)
{
  bool IndexPlusOneFromName; 
  unsigned int v5; 
  NetConstStringType v7; 
  unsigned int outIndex; 

  if ( NetConstStrings_IsPrecacheAllowed() )
  {
    v7 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 75, ASSERT_TYPE_ASSERT, "(!NetConstStrings_IsPrecacheAllowed())", "%s\n\tNetConstString type '%i' does not support non-precached access", "!NetConstStrings_IsPrecacheAllowed()", v7) )
      __debugbreak();
  }
  IndexPlusOneFromName = NetConstStrings_GetIndexPlusOneFromName(type, string, &outIndex);
  v5 = 0;
  if ( IndexPlusOneFromName )
    return outIndex;
  return v5;
}

/*
==============
CL_ConfigStringsMP_GetStringForNcsIndex
==============
*/
char *CL_ConfigStringsMP_GetStringForNcsIndex(const NetConstStringType type, const unsigned int index)
{
  bool v4; 
  char *result; 
  NetConstStringType v6; 
  char *outName; 

  if ( NetConstStrings_IsPrecacheAllowed() )
  {
    v6 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 57, ASSERT_TYPE_ASSERT, "(!NetConstStrings_IsPrecacheAllowed())", "%s\n\tNetConstString type '%i' does not support non-precached access", "!NetConstStrings_IsPrecacheAllowed()", v6) )
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
ClConfigStringsMP::ClearStrings
==============
*/
void ClConfigStringsMP::ClearStrings(ClConfigStringsMP *this)
{
  memset_0(&this->m_gameState, 0, sizeof(this->m_gameState));
}

/*
==============
ClConfigStringsMP::ConfigStringModified
==============
*/
void ClConfigStringsMP::ConfigStringModified(ClConfigStringsMP *this, LocalClientNum_t localClientNum, unsigned int index, const char *newString)
{
  unsigned int v8; 

  if ( index == 529 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(index != CS_SYSTEMINFO)", "%s\n\tCannot modify System Info config string!", "index != CS_SYSTEMINFO") )
    __debugbreak();
  ClConfigStringsMP::UpdateConfigStringData(this, index, newString);
  v8 = index - 530;
  if ( v8 )
  {
    if ( v8 == 6 )
      CL_ParseMP_MatchIdChanged(localClientNum);
  }
  else
  {
    CL_ParseMP_ServerIdChanged(localClientNum);
  }
}

/*
==============
ClConfigStringsMP::DumpConfigStrings
==============
*/
void ClConfigStringsMP::DumpConfigStrings(ClConfigStringsMP *this)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  unsigned int v4; 
  int *stringOffsets; 
  __int64 v6; 

  v2 = Cmd_LocalClientNum();
  v3 = v2;
  if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
    __debugbreak();
  if ( clientUIActives[v3].connectionState == CA_ACTIVE )
  {
    v4 = 0;
    stringOffsets = this->m_gameState.stringOffsets;
    do
    {
      v6 = *stringOffsets;
      if ( (_DWORD)v6 )
        Com_Printf(0, "%4i: %s\n", v4, &this->m_gameState.stringData[v6]);
      ++v4;
      ++stringOffsets;
    }
    while ( v4 < 0x2FE );
  }
  else
  {
    Com_Printf(0, "Not connected to a server - cannot print ConfigStrings.\n");
  }
}

/*
==============
ClConfigStringsMP::Dump_ConfigStrings_f
==============
*/
void ClConfigStringsMP::Dump_ConfigStrings_f(void)
{
  ClConfigStrings *ClConfigStrings; 
  LocalClientNum_t v1; 
  __int64 v2; 
  unsigned int v3; 
  int *v4; 
  __int64 v5; 

  if ( (_BYTE)ClConfigStrings::ms_allocatedType == HALF_HALF )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v1 = Cmd_LocalClientNum();
    v2 = v1;
    if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
      __debugbreak();
    if ( clientUIActives[v2].connectionState == CA_ACTIVE )
    {
      v3 = 0;
      v4 = (int *)&ClConfigStrings[1].__vftable + 1;
      do
      {
        v5 = *v4;
        if ( (_DWORD)v5 )
          Com_Printf(0, "%4i: %s\n", v3, (const char *)&ClConfigStrings[384].__vftable + v5 + 4);
        ++v3;
        ++v4;
      }
      while ( v3 < 0x2FE );
    }
    else
    {
      Com_Printf(0, "Not connected to a server - cannot print ConfigStrings.\n");
    }
  }
  else
  {
    Com_Printf(0, "MP is not active - cannot print ConfigStrings\n");
  }
}

/*
==============
ClConfigStringsMP::GetClConfigStringsMP
==============
*/
ClConfigStrings *ClConfigStringsMP::GetClConfigStringsMP()
{
  if ( (_BYTE)ClConfigStrings::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 16, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tClConfigStringsMP accessed when not MP type", "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return ClConfigStrings::GetClConfigStrings();
}

/*
==============
ClConfigStringsMP::GetClientTagString
==============
*/
char *ClConfigStringsMP::GetClientTagString(ClConfigStringsMP *this, int stringIndex)
{
  return CL_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_CLIENT_TAGS, stringIndex);
}

/*
==============
ClConfigStringsMP::GetConfigStringImpl
==============
*/
char *ClConfigStringsMP::GetConfigStringImpl(ClConfigStringsMP *this, int configStringIndex)
{
  __int64 v2; 
  __int64 v4; 
  char *v5; 
  __int64 v6; 
  int v10; 

  v2 = configStringIndex;
  if ( (unsigned int)configStringIndex >= 0x2FE )
  {
    v10 = 766;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( configStringIndex ) < (unsigned)( MAX_CONFIGSTRINGS_MP )", "configStringIndex doesn't index MAX_CONFIGSTRINGS_MP\n\t%i not in [0, %i)", configStringIndex, v10) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_START) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 33, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CONFIG_STRINGS_FROM_GAMESTATE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CONFIG_STRINGS_FROM_GAMESTATE )") )
    __debugbreak();
  if ( this->m_gameState.stringData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 34, ASSERT_TYPE_ASSERT, "(m_gameState.stringData[0] == 0)", "%s\n\tDefault string value is not properly set to empty string for MP client ConfigStrings", "m_gameState.stringData[0] == 0") )
    __debugbreak();
  v4 = (unsigned int)this->m_gameState.stringOffsets[v2];
  if ( (unsigned int)v4 >= 0x243D8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 37, ASSERT_TYPE_ASSERT, "(startLoc < ClGameState::MAX_GAMESTATE_CHARS)", "%s\n\tConfigString from server points to invalid location", "startLoc < ClGameState::MAX_GAMESTATE_CHARS") )
    __debugbreak();
  v5 = &this->m_gameState.stringData[v4];
  v6 = -1i64;
  while ( v5[++v6] != 0 )
    ;
  if ( (unsigned __int64)(v6 + v4 + 1) >= 0x243D8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 40, ASSERT_TYPE_ASSERT, "((strlen(ret) + startLoc + 1) < ClGameState::MAX_GAMESTATE_CHARS)", "%s\n\tConfigString from server points to invalid location", "(strlen(ret) + startLoc + 1) < ClGameState::MAX_GAMESTATE_CHARS") )
    __debugbreak();
  return v5;
}

/*
==============
ClConfigStringsMP::GetEffectId
==============
*/
__int64 ClConfigStringsMP::GetEffectId(ClConfigStringsMP *this, const char *string)
{
  return CL_ConfigStringsMP_GetNcsIndexForString(NETCONSTSTRINGTYPE_VFX, string);
}

/*
==============
ClConfigStringsMP::GetHintString
==============
*/
char *ClConfigStringsMP::GetHintString(ClConfigStringsMP *this, int stringIndex)
{
  return CL_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_HINTSTRING, stringIndex);
}

/*
==============
ClConfigStringsMP::GetLocalizedString
==============
*/
char *ClConfigStringsMP::GetLocalizedString(ClConfigStringsMP *this, int stringIndex)
{
  return CL_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_LOCSTRING, stringIndex);
}

/*
==============
ClConfigStringsMP::GetLocalizedStringIndex
==============
*/
__int64 ClConfigStringsMP::GetLocalizedStringIndex(ClConfigStringsMP *this, const char *string)
{
  return CL_ConfigStringsMP_GetNcsIndexForString(NETCONSTSTRINGTYPE_LOCSTRING, string);
}

/*
==============
ClConfigStringsMP::GetModelString
==============
*/
char *ClConfigStringsMP::GetModelString(ClConfigStringsMP *this, int stringIndex)
{
  const char *(__fastcall *GetConfigStringImpl)(ClConfigStrings *, int); 
  unsigned int v5; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( !NetConstStrings_IsPrecacheAllowed() )
    return CL_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_XMODEL, stringIndex);
  if ( (unsigned int)stringIndex >= 0x100 )
  {
    v9 = 256;
    v7 = stringIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_configstrings_mp.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( BgStaticLimitsMP::MAX_CS_DEV_MODELS )", "stringIndex doesn't index BgStaticLimitsMP::MAX_CS_DEV_MODELS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  GetConfigStringImpl = this->GetConfigStringImpl;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( BgDynamicLimits::ms_data.m_maxConfigStrings <= 0x10 )
  {
    LODWORD(v8) = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
      __debugbreak();
  }
  v5 = stringIndex + 16;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( v5 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v8) )
      __debugbreak();
  }
  return (char *)GetConfigStringImpl(this, v5);
}

/*
==============
ClConfigStringsMP::GetStickerMaterialIndex
==============
*/
__int64 ClConfigStringsMP::GetStickerMaterialIndex(ClConfigStringsMP *this, const char *string)
{
  if ( NetConstStrings_IsPrecacheAllowed() )
    return 0i64;
  else
    return CL_ConfigStringsMP_GetNcsIndexForString(NETCONSTSTRINGTYPE_STICKER, string);
}

/*
==============
ClConfigStringsMP::GetStickerMaterialName
==============
*/
char *ClConfigStringsMP::GetStickerMaterialName(ClConfigStringsMP *this, int stringIndex)
{
  return CL_ConfigStringsMP_GetStringForNcsIndex(NETCONSTSTRINGTYPE_STICKER, stringIndex);
}

/*
==============
ClConfigStringsMP::ParseConfigStrings
==============
*/
void ClConfigStringsMP::ParseConfigStrings(ClConfigStringsMP *this, LocalClientNum_t localClientNum, msg_t *msg)
{
  unsigned int v5; 
  unsigned int Short; 
  __int64 v7; 
  __int64 Bits; 
  char *BigString; 
  char *v10; 
  __int64 v11; 
  __int64 dataCount; 
  size_t v13; 
  unsigned int StringTotalCount; 
  float v15; 
  float v16; 
  char *fmt; 

  memset_0(this->m_gameState.stringOffsets, 0, sizeof(this->m_gameState.stringOffsets));
  this->m_gameState.dataCount = 1;
  v5 = -1;
  Short = MSG_ReadShort(msg);
  if ( Short )
  {
    v7 = Short;
    do
    {
      if ( MSG_ReadBit(msg) )
      {
        ++v5;
      }
      else
      {
        Bits = MSG_ReadBits(msg, 0xAu);
        v5 = Bits;
        if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
          __debugbreak();
      }
      if ( v5 >= 0x2FE )
      {
        Com_PrintError(14, "Config string index %i is out of bounds.\n", v5);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442110D0, 794i64, v5);
      }
      BigString = MSG_ReadBigString(msg);
      v10 = BigString;
      v11 = -1i64;
      do
        ++v11;
      while ( BigString[v11] );
      dataCount = this->m_gameState.dataCount;
      if ( (unsigned __int64)(dataCount + v11 + 1) > 0x243D8 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144210FE8, 795i64);
        LODWORD(dataCount) = this->m_gameState.dataCount;
      }
      v13 = v11 + 1;
      this->m_gameState.stringOffsets[v5] = dataCount;
      memcpy_0(&this->m_gameState.stringData[this->m_gameState.dataCount], v10, v13);
      if ( (v13 > 0x7FFFFFFFFFFFFFFFi64 || v13 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v13, "unsigned", v13) )
        __debugbreak();
      this->m_gameState.dataCount += v13;
      --v7;
    }
    while ( v7 );
  }
  StringTotalCount = NetConstStrings_GetStringTotalCount();
  v15 = (float)StringTotalCount;
  LODWORD(fmt) = Short;
  v16 = (float)(StringTotalCount + Short);
  Com_Printf(16, "^6Client NCS: %.2f%% config string coverage (%i cached, %i received).\n", (float)((float)(v15 * 100.0) / v16), StringTotalCount, fmt);
}

/*
==============
ClConfigStringsMP::UpdateConfigStringData
==============
*/
void ClConfigStringsMP::UpdateConfigStringData(ClConfigStringsMP *this, unsigned int index, const char *newString)
{
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  char v10; 
  char v11; 
  _BYTE *m_ptr; 
  int *stringOffsets; 
  unsigned int v15; 
  __int64 v16; 
  const char *v17; 
  __int64 v18; 
  __int64 dataCount; 
  size_t v20; 
  Mem_LargeLocal v21; 
  _BYTE *v22; 
  __int64 v23; 

  v6 = ((__int64 (__fastcall *)(ClConfigStringsMP *))this->GetConfigStringImpl)(this);
  v7 = 0x7FFFFFFFi64;
  v8 = newString;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !newString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v9 = v6 - (_QWORD)newString;
  do
  {
    v10 = v8[v9];
    v11 = *v8++;
    if ( !v7-- )
      break;
    if ( v10 != v11 )
    {
      Mem_LargeLocal::Mem_LargeLocal(&v21, 0x24FD4ui64, "ClGameState oldGs");
      m_ptr = v21.m_ptr;
      v22 = v21.m_ptr;
      memcpy_0(v21.m_ptr, &this->m_gameState, 0x24FD4ui64);
      stringOffsets = this->m_gameState.stringOffsets;
      memset_0(this->m_gameState.stringOffsets, 0, sizeof(this->m_gameState.stringOffsets));
      this->m_gameState.dataCount = 1;
      v15 = 0;
      v16 = m_ptr - (_BYTE *)this - 8;
      v23 = v16;
      do
      {
        if ( v15 == index )
          v17 = newString;
        else
          v17 = &m_ptr[*(int *)((char *)stringOffsets + v16) + 3068];
        if ( *v17 )
        {
          v18 = -1i64;
          do
            ++v18;
          while ( v17[v18] );
          dataCount = this->m_gameState.dataCount;
          if ( (unsigned __int64)(dataCount + v18 + 1) > 0x243D8 )
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144210FE8, 793i64);
            LODWORD(dataCount) = this->m_gameState.dataCount;
          }
          *stringOffsets = dataCount;
          v20 = v18 + 1;
          memcpy_0(&this->m_gameState.stringData[this->m_gameState.dataCount], v17, v20);
          if ( (v20 > 0x7FFFFFFFFFFFFFFFi64 || v20 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v20, "unsigned", v20) )
            __debugbreak();
          this->m_gameState.dataCount += v20;
          m_ptr = v22;
        }
        ++v15;
        ++stringOffsets;
        v16 = v23;
      }
      while ( v15 < 0x2FE );
      Mem_LargeLocal::~Mem_LargeLocal(&v21);
      return;
    }
  }
  while ( v10 );
}

