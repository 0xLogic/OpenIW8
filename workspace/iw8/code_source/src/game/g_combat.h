/*
==============
GCombat::~GCombat
==============
*/

void __fastcall GCombat::~GCombat(GCombat *this)
{
  ??1GCombat@@UEAA@XZ(this);
}

/*
==============
GCombat::AllocateMemory<GCombatMP>
==============
*/

void __fastcall GCombat::AllocateMemory<GCombatMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGCombatMP@@@GCombat@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GCombat::GetCombatSystem
==============
*/

GCombat *__fastcall GCombat::GetCombatSystem()
{
  return ?GetCombatSystem@GCombat@@SAPEAV1@XZ();
}

/*
==============
GCombat::GetMemorySize<GCombatMP>
==============
*/

unsigned int __fastcall GCombat::GetMemorySize<GCombatMP>()
{
  return ??$GetMemorySize@VGCombatMP@@@GCombat@@SAIXZ();
}

/*
==============
GCombat::GetMemorySize<GCombatSP>
==============
*/

unsigned int __fastcall GCombat::GetMemorySize<GCombatSP>()
{
  return ??$GetMemorySize@VGCombatSP@@@GCombat@@SAIXZ();
}

/*
==============
GCombat::FreeMemory<GCombatSP>
==============
*/

__int64 GCombat::FreeMemory<GCombatSP>()
{
  return ??$FreeMemory@VGCombatSP@@@GCombat@@SAXXZ();
}

/*
==============
GCombat::FreeMemory<GCombatMP>
==============
*/

__int64 GCombat::FreeMemory<GCombatMP>()
{
  return ??$FreeMemory@VGCombatMP@@@GCombat@@SAXXZ();
}

/*
==============
GCombat::AllocateMemory<GCombatSP>
==============
*/

void __fastcall GCombat::AllocateMemory<GCombatSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGCombatSP@@@GCombat@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GCombat::~GCombat
==============
*/
void GCombat::~GCombat(GCombat *this)
{
  this->__vftable = (GCombat_vtbl *)&GCombat::`vftable';
}

/*
==============
GCombat::GetCombatSystem
==============
*/
GCombat *GCombat::GetCombatSystem()
{
  GCombat *result; 

  result = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    return GCombat::ms_gCombatSystem;
  }
  return result;
}

/*
==============
GCombat::AllocateMemory<GCombatMP>
==============
*/
void GCombat::AllocateMemory<GCombatMP>(HunkUser *hunkUser)
{
  GCombatMP *v2; 
  GCombat *v3; 

  if ( (_BYTE)GCombat::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 195, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 196, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  v2 = (GCombatMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x107F8ui64, 8ui64, "GCombat::AllocateMemory");
  memset_0(v2, 0, sizeof(GCombatMP));
  GCombatMP::GCombatMP(v2);
  GCombat::ms_gCombatSystem = v3;
  LOBYTE(GCombat::ms_allocatedType) = 2;
}

/*
==============
GCombat::FreeMemory<GCombatMP>
==============
*/
char GCombat::FreeMemory<GCombatMP>()
{
  char v0; 
  GCombat *v1; 
  GCombat *v2; 

  v0 = GCombat::ms_allocatedType;
  if ( (_BYTE)GCombat::ms_allocatedType )
  {
    if ( (_BYTE)GCombat::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 211, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GCombat::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GCombat::ms_gCombatSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 215, ASSERT_TYPE_ASSERT, "(ms_gCombatSystem != 0)", "%s\n\tGCombat::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gCombatSystem != NULL") )
      __debugbreak();
    v1 = GCombat::ms_gCombatSystem;
  }
  ((void (__fastcall *)(GCombat *, _QWORD))v1->~GCombat)(v1, 0i64);
  DebugWipe(GCombat::ms_gCombatSystem, 0x107F8ui64);
  v2 = NULL;
  GCombat::ms_gCombatSystem = NULL;
LABEL_13:
  LOBYTE(GCombat::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 227, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GCombat::GetMemorySize<GCombatMP>
==============
*/
__int64 GCombat::GetMemorySize<GCombatMP>()
{
  return 67576i64;
}

/*
==============
GCombat::AllocateMemory<GCombatSP>
==============
*/
void GCombat::AllocateMemory<GCombatSP>(HunkUser *hunkUser)
{
  GCombatSP *v2; 
  GCombat *v3; 

  if ( (_BYTE)GCombat::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 195, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 196, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  v2 = (GCombatSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x107F8ui64, 8ui64, "GCombat::AllocateMemory");
  memset_0(v2, 0, sizeof(GCombatSP));
  GCombatSP::GCombatSP(v2);
  GCombat::ms_gCombatSystem = v3;
  LOBYTE(GCombat::ms_allocatedType) = 1;
}

/*
==============
GCombat::FreeMemory<GCombatSP>
==============
*/
char GCombat::FreeMemory<GCombatSP>()
{
  char v0; 
  GCombat *v1; 
  GCombat *v2; 

  v0 = GCombat::ms_allocatedType;
  if ( (_BYTE)GCombat::ms_allocatedType )
  {
    if ( (_BYTE)GCombat::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 211, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GCombat::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GCombat::ms_gCombatSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 215, ASSERT_TYPE_ASSERT, "(ms_gCombatSystem != 0)", "%s\n\tGCombat::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gCombatSystem != NULL") )
      __debugbreak();
    v1 = GCombat::ms_gCombatSystem;
  }
  ((void (__fastcall *)(GCombat *, _QWORD))v1->~GCombat)(v1, 0i64);
  DebugWipe(GCombat::ms_gCombatSystem, 0x107F8ui64);
  v2 = NULL;
  GCombat::ms_gCombatSystem = NULL;
LABEL_13:
  LOBYTE(GCombat::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 227, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GCombat::GetMemorySize<GCombatSP>
==============
*/
__int64 GCombat::GetMemorySize<GCombatSP>()
{
  return 67576i64;
}

