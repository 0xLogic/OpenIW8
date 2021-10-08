/*
==============
SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>
==============
*/

void __fastcall SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>(HunkUser *hunkUser)
{
  ??$AllocateServerPersistentGlobalsMemoryCommon@VSvPersistentGlobalsMP@@@SvPersistentGlobals@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsSP>
==============
*/

unsigned int __fastcall SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsSP>()
{
  return ??$GetServerPersistentGlobalsMemorySizeCommon@VSvPersistentGlobalsSP@@@SvPersistentGlobals@@KAIXZ();
}

/*
==============
SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsMP>
==============
*/

unsigned int __fastcall SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsMP>()
{
  return ??$GetServerPersistentGlobalsMemorySizeCommon@VSvPersistentGlobalsMP@@@SvPersistentGlobals@@KAIXZ();
}

/*
==============
SvPersistentGlobals::~SvPersistentGlobals
==============
*/

void __fastcall SvPersistentGlobals::~SvPersistentGlobals(SvPersistentGlobals *this)
{
  ??1SvPersistentGlobals@@UEAA@XZ(this);
}

/*
==============
SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>
==============
*/

void __fastcall SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>(HunkUser *hunkUser)
{
  ??$AllocateServerPersistentGlobalsMemoryCommon@VSvPersistentGlobalsSP@@@SvPersistentGlobals@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>
==============
*/

__int64 SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>()
{
  return ??$FreeServerPersistentGlobalsMemoryCommon@VSvPersistentGlobalsMP@@@SvPersistentGlobals@@KAXXZ();
}

/*
==============
SvPersistentGlobals::GetPersistentGlobalsCommon
==============
*/

SvPersistentGlobals *__fastcall SvPersistentGlobals::GetPersistentGlobalsCommon()
{
  return ?GetPersistentGlobalsCommon@SvPersistentGlobals@@SAPEAV1@XZ();
}

/*
==============
SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>
==============
*/

__int64 SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>()
{
  return ??$FreeServerPersistentGlobalsMemoryCommon@VSvPersistentGlobalsSP@@@SvPersistentGlobals@@KAXXZ();
}

/*
==============
SvPersistentGlobals::GetPersistentGlobalsCommon
==============
*/
SvPersistentGlobals *SvPersistentGlobals::GetPersistentGlobalsCommon()
{
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  return SvPersistentGlobals::ms_svPersistent;
}

/*
==============
SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>
==============
*/
void SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>(HunkUser *hunkUser)
{
  SvPersistentGlobals *v2; 

  if ( BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 106, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 107, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
    __debugbreak();
  v2 = (SvPersistentGlobals *)Mem_HunkUser_AllocInternal(hunkUser, 0xF3C8ui64, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  memset_0(v2, 0, 0xF3C8ui64);
  v2->__vftable = (SvPersistentGlobals_vtbl *)&SvPersistentGlobalsMP::`vftable';
  SvPersistentGlobals::ms_svPersistent = v2;
  v2->m_skelMemSize = 901120;
  SvPersistentGlobals::ms_svPersistent->m_skelMemory = (char *)Mem_HunkUser_AllocInternal(hunkUser, SvPersistentGlobals::ms_svPersistent->m_skelMemSize, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  BYTE1(SvGameGlobals::ms_allocatedType) = 2;
}

/*
==============
SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>
==============
*/
char SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsMP>()
{
  char v0; 
  SvPersistentGlobals *v1; 
  SvPersistentGlobals *v2; 

  v0 = BYTE1(SvGameGlobals::ms_allocatedType);
  if ( BYTE1(SvGameGlobals::ms_allocatedType) )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) == 2 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 126, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(SvGameGlobals::ms_allocatedType);
  }
  if ( v0 != 2 )
  {
    v2 = SvPersistentGlobals::ms_svPersistent;
    goto LABEL_13;
  }
LABEL_7:
  v1 = SvPersistentGlobals::ms_svPersistent;
  if ( !SvPersistentGlobals::ms_svPersistent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 130, ASSERT_TYPE_ASSERT, "(ms_svPersistent != 0)", "%s\n\tFreeServerPersistentGlobalsMemoryCommon: Trying to free server static memory but none have been allocated\n", "ms_svPersistent != NULL") )
      __debugbreak();
    v1 = SvPersistentGlobals::ms_svPersistent;
  }
  ((void (__fastcall *)(SvPersistentGlobals *, _QWORD))v1->~SvPersistentGlobals)(v1, 0i64);
  DebugWipe(SvPersistentGlobals::ms_svPersistent, 0xF3C8ui64);
  v2 = NULL;
  SvPersistentGlobals::ms_svPersistent = NULL;
LABEL_13:
  BYTE1(SvGameGlobals::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 142, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsMP>
==============
*/
__int64 SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsMP>()
{
  return 963584i64;
}

/*
==============
SvPersistentGlobals::~SvPersistentGlobals
==============
*/
void SvPersistentGlobals::~SvPersistentGlobals(SvPersistentGlobals *this)
{
  this->__vftable = (SvPersistentGlobals_vtbl *)&SvPersistentGlobals::`vftable';
}

/*
==============
SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>
==============
*/
void SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>(HunkUser *hunkUser)
{
  char *v2; 

  if ( BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 106, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 107, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
    __debugbreak();
  v2 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0x20ui64, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  *((_QWORD *)v2 + 1) = 0i64;
  *(_QWORD *)(v2 + 20) = 0i64;
  *((_DWORD *)v2 + 7) = 0;
  *(_QWORD *)v2 = &SvPersistentGlobalsSP::`vftable';
  SvPersistentGlobals::ms_svPersistent = (SvPersistentGlobals *)v2;
  *((_DWORD *)v2 + 4) = 0x80000;
  SvPersistentGlobals::ms_svPersistent->m_skelMemory = (char *)Mem_HunkUser_AllocInternal(hunkUser, SvPersistentGlobals::ms_svPersistent->m_skelMemSize, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  BYTE1(SvGameGlobals::ms_allocatedType) = 1;
}

/*
==============
SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>
==============
*/
char SvPersistentGlobals::FreeServerPersistentGlobalsMemoryCommon<SvPersistentGlobalsSP>()
{
  char v0; 
  SvPersistentGlobals *v1; 
  SvPersistentGlobals *v2; 

  v0 = BYTE1(SvGameGlobals::ms_allocatedType);
  if ( BYTE1(SvGameGlobals::ms_allocatedType) )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) == 1 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 126, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(SvGameGlobals::ms_allocatedType);
  }
  if ( v0 != 1 )
  {
    v2 = SvPersistentGlobals::ms_svPersistent;
    goto LABEL_13;
  }
LABEL_7:
  v1 = SvPersistentGlobals::ms_svPersistent;
  if ( !SvPersistentGlobals::ms_svPersistent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 130, ASSERT_TYPE_ASSERT, "(ms_svPersistent != 0)", "%s\n\tFreeServerPersistentGlobalsMemoryCommon: Trying to free server static memory but none have been allocated\n", "ms_svPersistent != NULL") )
      __debugbreak();
    v1 = SvPersistentGlobals::ms_svPersistent;
  }
  ((void (__fastcall *)(SvPersistentGlobals *, _QWORD))v1->~SvPersistentGlobals)(v1, 0i64);
  DebugWipe(SvPersistentGlobals::ms_svPersistent, 0x20ui64);
  v2 = NULL;
  SvPersistentGlobals::ms_svPersistent = NULL;
LABEL_13:
  BYTE1(SvGameGlobals::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 142, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsSP>
==============
*/
__int64 SvPersistentGlobals::GetServerPersistentGlobalsMemorySizeCommon<SvPersistentGlobalsSP>()
{
  return 524416i64;
}

