/*
==============
GBallistics::~GBallistics
==============
*/

void __fastcall GBallistics::~GBallistics(GBallistics *this)
{
  ??1GBallistics@@UEAA@XZ(this);
}

/*
==============
GBallistics::FreeMemory<GBallisticsSP>
==============
*/

__int64 GBallistics::FreeMemory<GBallisticsSP>()
{
  return ??$FreeMemory@VGBallisticsSP@@@GBallistics@@SAXXZ();
}

/*
==============
GBallistics::FreeMemory<GBallisticsMP>
==============
*/

__int64 GBallistics::FreeMemory<GBallisticsMP>()
{
  return ??$FreeMemory@VGBallisticsMP@@@GBallistics@@SAXXZ();
}

/*
==============
GBallistics::AllocateMemory<GBallisticsMP>
==============
*/

void __fastcall GBallistics::AllocateMemory<GBallisticsMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGBallisticsMP@@@GBallistics@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GBallistics::GetMemorySize<GBallisticsMP>
==============
*/

unsigned int __fastcall GBallistics::GetMemorySize<GBallisticsMP>()
{
  return ??$GetMemorySize@VGBallisticsMP@@@GBallistics@@SAIXZ();
}

/*
==============
GBallistics::AllocateMemory<GBallisticsSP>
==============
*/

void __fastcall GBallistics::AllocateMemory<GBallisticsSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGBallisticsSP@@@GBallistics@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GBallistics::OnCompactOperation
==============
*/

void __fastcall GBallistics::OnCompactOperation(GBallistics *this, GBallisticInstance *movedBallisticInstance)
{
  ?OnCompactOperation@GBallistics@@MEAAXPEAUGBallisticInstance@@@Z(this, movedBallisticInstance);
}

/*
==============
GBallistics::GetMemorySize<GBallisticsSP>
==============
*/

unsigned int __fastcall GBallistics::GetMemorySize<GBallisticsSP>()
{
  return ??$GetMemorySize@VGBallisticsSP@@@GBallistics@@SAIXZ();
}

/*
==============
GBallistics::AllocateMemory<GBallisticsMP>
==============
*/
void GBallistics::AllocateMemory<GBallisticsMP>(HunkUser *hunkUser)
{
  GBallistics *v2; 

  if ( (_BYTE)GBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 102, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 103, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v2 = (GBallistics *)Mem_HunkUser_AllocInternal(hunkUser, 0x29060ui64, 8ui64, "GBallistics::AllocateMemory");
  v2->m_firstFree = NULL;
  v2->m_lastFree = NULL;
  *(_QWORD *)&v2->m_numSlotsActive = 0i64;
  memset_0(v2->m_ballisticInstances, 0, sizeof(v2->m_ballisticInstances));
  v2->__vftable = (GBallistics_vtbl *)&GBallisticsMP::`vftable';
  GBallistics::ms_gBallisticsSystem = v2;
  LOBYTE(GBallistics::ms_allocatedType) = 2;
}

/*
==============
GBallistics::FreeMemory<GBallisticsMP>
==============
*/
char GBallistics::FreeMemory<GBallisticsMP>()
{
  char v0; 
  GBallistics *v1; 
  GBallistics *v2; 

  v0 = GBallistics::ms_allocatedType;
  if ( (_BYTE)GBallistics::ms_allocatedType )
  {
    if ( (_BYTE)GBallistics::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GBallistics::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GBallistics::ms_gBallisticsSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", (_DWORD)GBallistics::ms_gBallisticsSystem + 122, ASSERT_TYPE_ASSERT, "(ms_gBallisticsSystem != 0)", "%s\n\tGBallistics::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gBallisticsSystem != NULL") )
      __debugbreak();
    v1 = GBallistics::ms_gBallisticsSystem;
  }
  ((void (__fastcall *)(GBallistics *, _QWORD))v1->~BgBallistics<GBallisticInstance>)(v1, 0i64);
  DebugWipe(GBallistics::ms_gBallisticsSystem, 0x29060ui64);
  v2 = NULL;
  GBallistics::ms_gBallisticsSystem = NULL;
LABEL_13:
  LOBYTE(GBallistics::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 134, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GBallistics::GetMemorySize<GBallisticsMP>
==============
*/
__int64 GBallistics::GetMemorySize<GBallisticsMP>()
{
  return 168032i64;
}

/*
==============
GBallistics::~GBallistics
==============
*/
void GBallistics::~GBallistics(GBallistics *this)
{
  this->__vftable = (GBallistics_vtbl *)&BgBallistics<GBallisticInstance>::`vftable';
}

/*
==============
GBallistics::OnCompactOperation
==============
*/
void GBallistics::OnCompactOperation(GBallistics *this, GBallisticInstance *movedBallisticInstance)
{
  ;
}

/*
==============
GBallistics::AllocateMemory<GBallisticsSP>
==============
*/
void GBallistics::AllocateMemory<GBallisticsSP>(HunkUser *hunkUser)
{
  GBallistics *v2; 

  if ( (_BYTE)GBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 102, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 103, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v2 = (GBallistics *)Mem_HunkUser_AllocInternal(hunkUser, 0x29060ui64, 8ui64, "GBallistics::AllocateMemory");
  v2->m_firstFree = NULL;
  v2->m_lastFree = NULL;
  *(_QWORD *)&v2->m_numSlotsActive = 0i64;
  memset_0(v2->m_ballisticInstances, 0, sizeof(v2->m_ballisticInstances));
  v2->__vftable = (GBallistics_vtbl *)&GBallisticsSP::`vftable';
  GBallistics::ms_gBallisticsSystem = v2;
  LOBYTE(GBallistics::ms_allocatedType) = 1;
}

/*
==============
GBallistics::FreeMemory<GBallisticsSP>
==============
*/
char GBallistics::FreeMemory<GBallisticsSP>()
{
  char v0; 
  GBallistics *v1; 
  GBallistics *v2; 

  v0 = GBallistics::ms_allocatedType;
  if ( (_BYTE)GBallistics::ms_allocatedType )
  {
    if ( (_BYTE)GBallistics::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GBallistics::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GBallistics::ms_gBallisticsSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", (_DWORD)GBallistics::ms_gBallisticsSystem + 122, ASSERT_TYPE_ASSERT, "(ms_gBallisticsSystem != 0)", "%s\n\tGBallistics::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gBallisticsSystem != NULL") )
      __debugbreak();
    v1 = GBallistics::ms_gBallisticsSystem;
  }
  ((void (__fastcall *)(GBallistics *, _QWORD))v1->~BgBallistics<GBallisticInstance>)(v1, 0i64);
  DebugWipe(GBallistics::ms_gBallisticsSystem, 0x29060ui64);
  v2 = NULL;
  GBallistics::ms_gBallisticsSystem = NULL;
LABEL_13:
  LOBYTE(GBallistics::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 134, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GBallistics::GetMemorySize<GBallisticsSP>
==============
*/
__int64 GBallistics::GetMemorySize<GBallisticsSP>()
{
  return 168032i64;
}

