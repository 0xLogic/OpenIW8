/*
==============
SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/

void __fastcall SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsMP>(HunkUser *hunkUser)
{
  ??$AllocateSvGameGlobalsMemoryCommon@VSvGameGlobalsMP@@@SvGameGlobals@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/

__int64 SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsMP>()
{
  return ??$ClearSvGameGlobalsMemoryCommon@VSvGameGlobalsMP@@@SvGameGlobals@@KAXXZ();
}

/*
==============
SvGameGlobals::GetSvGameGlobalsCommon
==============
*/

SvGameGlobals *__fastcall SvGameGlobals::GetSvGameGlobalsCommon()
{
  return ?GetSvGameGlobalsCommon@SvGameGlobals@@SAPEAV1@XZ();
}

/*
==============
SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/

__int64 SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsSP>()
{
  return ??$ClearSvGameGlobalsMemoryCommon@VSvGameGlobalsSP@@@SvGameGlobals@@KAXXZ();
}

/*
==============
SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/

__int64 SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsMP>()
{
  return ??$FreeSvGameGlobalsMemoryCommon@VSvGameGlobalsMP@@@SvGameGlobals@@KAXXZ();
}

/*
==============
SV_GentityNum
==============
*/

gentity_s *__fastcall SV_GentityNum(int num)
{
  return ?SV_GentityNum@@YAPEAUgentity_s@@H@Z(num);
}

/*
==============
SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsSP>
==============
*/

unsigned int __fastcall SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsSP>()
{
  return ??$GetSvGameGlobalsMemorySizeCommon@VSvGameGlobalsSP@@@SvGameGlobals@@KAIXZ();
}

/*
==============
SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/

void __fastcall SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsSP>(HunkUser *hunkUser)
{
  ??$AllocateSvGameGlobalsMemoryCommon@VSvGameGlobalsSP@@@SvGameGlobals@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/

__int64 SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsSP>()
{
  return ??$FreeSvGameGlobalsMemoryCommon@VSvGameGlobalsSP@@@SvGameGlobals@@KAXXZ();
}

/*
==============
SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsMP>
==============
*/

unsigned int __fastcall SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsMP>()
{
  return ??$GetSvGameGlobalsMemorySizeCommon@VSvGameGlobalsMP@@@SvGameGlobals@@KAIXZ();
}

/*
==============
SV_GentityNum
==============
*/
gentity_s *SV_GentityNum(int num)
{
  __int64 v1; 

  v1 = num;
  if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
    __debugbreak();
  return &SvGameGlobals::ms_svGameGlobals->gentities[v1];
}

/*
==============
SvGameGlobals::GetSvGameGlobalsCommon
==============
*/
SvGameGlobals *SvGameGlobals::GetSvGameGlobalsCommon()
{
  SvGameGlobals *result; 

  if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  result = SvGameGlobals::ms_svGameGlobals;
  if ( !SvGameGlobals::ms_svGameGlobals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    return SvGameGlobals::ms_svGameGlobals;
  }
  return result;
}

/*
==============
SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/
void SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsMP>(HunkUser *hunkUser)
{
  SvGameGlobalsMP *v2; 
  SvGameGlobals *v3; 
  int v4; 

  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    v4 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 114, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating SvGameGlobals when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", v4) )
      __debugbreak();
  }
  if ( SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 115, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals == nullptr)", "%s\n\tCreating SvGameGlobals when singleton already exists", "ms_svGameGlobals == nullptr") )
    __debugbreak();
  v2 = (SvGameGlobalsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x82A8ui64, 0x80ui64, "SvGameGlobals::AllocateSvGameGlobalsMemoryCommon");
  memset_0(v2, 0, sizeof(SvGameGlobalsMP));
  SvGameGlobalsMP::SvGameGlobalsMP(v2);
  SvGameGlobals::ms_svGameGlobals = v3;
  LOBYTE(SvGameGlobals::ms_allocatedType) = 2;
}

/*
==============
SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/
void SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsMP>()
{
  char v0; 
  SvGameGlobals *v1; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( !(_BYTE)SvGameGlobals::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 152, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
LABEL_6:
    if ( v0 != 2 )
      return;
  }
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 156, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tClearSvGameGlobalsMemoryCommon: Trying to clear server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  memset_0(SvGameGlobals::ms_svGameGlobals, 0, 0x82A8ui64);
  SvGameGlobalsMP::SvGameGlobalsMP((SvGameGlobalsMP *)SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::ms_svGameGlobals = v1;
}

/*
==============
SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsMP>
==============
*/
char SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsMP>()
{
  char v0; 
  SvGameGlobals *v1; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    if ( (_BYTE)SvGameGlobals::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v1 = SvGameGlobals::ms_svGameGlobals;
    goto LABEL_12;
  }
LABEL_7:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 134, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tFreeSvGameGlobalsMemoryCommon: Trying to free server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  DebugWipe(SvGameGlobals::ms_svGameGlobals, 0x82A8ui64);
  v1 = NULL;
  SvGameGlobals::ms_svGameGlobals = NULL;
LABEL_12:
  LOBYTE(SvGameGlobals::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 145, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals == 0 )", (const char *)&queryFormat, "ms_svGameGlobals == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsMP>
==============
*/
__int64 SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsMP>()
{
  return 33448i64;
}

/*
==============
SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/
void SvGameGlobals::AllocateSvGameGlobalsMemoryCommon<SvGameGlobalsSP>(HunkUser *hunkUser)
{
  SvGameGlobalsSP *v2; 
  SvGameGlobals *v3; 
  int v4; 

  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    v4 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 114, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating SvGameGlobals when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", v4) )
      __debugbreak();
  }
  if ( SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 115, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals == nullptr)", "%s\n\tCreating SvGameGlobals when singleton already exists", "ms_svGameGlobals == nullptr") )
    __debugbreak();
  v2 = (SvGameGlobalsSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x61C8ui64, 0x80ui64, "SvGameGlobals::AllocateSvGameGlobalsMemoryCommon");
  memset_0(v2, 0, sizeof(SvGameGlobalsSP));
  SvGameGlobalsSP::SvGameGlobalsSP(v2);
  SvGameGlobals::ms_svGameGlobals = v3;
  LOBYTE(SvGameGlobals::ms_allocatedType) = 1;
}

/*
==============
SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/
void SvGameGlobals::ClearSvGameGlobalsMemoryCommon<SvGameGlobalsSP>()
{
  char v0; 
  SvGameGlobals *v1; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( !(_BYTE)SvGameGlobals::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 152, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
LABEL_6:
    if ( v0 != 1 )
      return;
  }
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 156, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tClearSvGameGlobalsMemoryCommon: Trying to clear server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  memset_0(SvGameGlobals::ms_svGameGlobals, 0, 0x61C8ui64);
  SvGameGlobalsSP::SvGameGlobalsSP((SvGameGlobalsSP *)SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::ms_svGameGlobals = v1;
}

/*
==============
SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsSP>
==============
*/
char SvGameGlobals::FreeSvGameGlobalsMemoryCommon<SvGameGlobalsSP>()
{
  char v0; 
  SvGameGlobals *v1; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    if ( (_BYTE)SvGameGlobals::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v1 = SvGameGlobals::ms_svGameGlobals;
    goto LABEL_12;
  }
LABEL_7:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 134, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tFreeSvGameGlobalsMemoryCommon: Trying to free server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  DebugWipe(SvGameGlobals::ms_svGameGlobals, 0x61C8ui64);
  v1 = NULL;
  SvGameGlobals::ms_svGameGlobals = NULL;
LABEL_12:
  LOBYTE(SvGameGlobals::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 145, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals == 0 )", (const char *)&queryFormat, "ms_svGameGlobals == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsSP>
==============
*/
__int64 SvGameGlobals::GetSvGameGlobalsMemorySizeCommon<SvGameGlobalsSP>()
{
  return 25032i64;
}

