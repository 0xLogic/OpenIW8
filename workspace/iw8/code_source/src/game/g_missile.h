/*
==============
GMissile::GetMemorySize<GMissileMP>
==============
*/

unsigned int __fastcall GMissile::GetMemorySize<GMissileMP>()
{
  return ??$GetMemorySize@VGMissileMP@@@GMissile@@SAIXZ();
}

/*
==============
GMissile::AllocateMemory<GMissileSP>
==============
*/

void __fastcall GMissile::AllocateMemory<GMissileSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGMissileSP@@@GMissile@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GMissile::AllocateMemory<GMissileMP>
==============
*/

void __fastcall GMissile::AllocateMemory<GMissileMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGMissileMP@@@GMissile@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GMissile::GetMissileSystem
==============
*/

GMissile *__fastcall GMissile::GetMissileSystem()
{
  return ?GetMissileSystem@GMissile@@SAPEAV1@XZ();
}

/*
==============
GMissile::FreeMemory<GMissileMP>
==============
*/

__int64 GMissile::FreeMemory<GMissileMP>()
{
  return ??$FreeMemory@VGMissileMP@@@GMissile@@SAXXZ();
}

/*
==============
GMissile::FreeMemory<GMissileSP>
==============
*/

__int64 GMissile::FreeMemory<GMissileSP>()
{
  return ??$FreeMemory@VGMissileSP@@@GMissile@@SAXXZ();
}

/*
==============
GMissile::~GMissile
==============
*/

void __fastcall GMissile::~GMissile(GMissile *this)
{
  ??1GMissile@@UEAA@XZ(this);
}

/*
==============
GMissile::IsEntityValid
==============
*/

bool __fastcall GMissile::IsEntityValid(GMissile *this, const int entNum)
{
  return ?IsEntityValid@GMissile@@MEBA_NH@Z(this, entNum);
}

/*
==============
GMissile::GetMemorySize<GMissileSP>
==============
*/

unsigned int __fastcall GMissile::GetMemorySize<GMissileSP>()
{
  return ??$GetMemorySize@VGMissileSP@@@GMissile@@SAIXZ();
}

/*
==============
GMissile::GetMissileSystem
==============
*/
GMissile *GMissile::GetMissileSystem()
{
  GMissile *result; 

  result = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
      __debugbreak();
    return GMissile::ms_gMissileSystem;
  }
  return result;
}

/*
==============
GMissile::~GMissile
==============
*/
void GMissile::~GMissile(GMissile *this)
{
  this->__vftable = (GMissile_vtbl *)&BgMissile::`vftable';
}

/*
==============
GMissile::IsEntityValid
==============
*/
bool GMissile::IsEntityValid(GMissile *this, const int entNum)
{
  return G_IsEntityInUse(entNum) != 0;
}

/*
==============
GMissile::AllocateMemory<GMissileMP>
==============
*/
void GMissile::AllocateMemory<GMissileMP>(HunkUser *hunkUser)
{
  GMissileMP *v2; 
  GMissile *v3; 

  if ( (_BYTE)GMissile::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 275, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 276, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v2 = (GMissileMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GMissile::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v2->m_javelinOffsetRight = 0i64;
  GMissileMP::GMissileMP(v2);
  GMissile::ms_gMissileSystem = v3;
  LOBYTE(GMissile::ms_allocatedType) = 2;
  BgMissile::SRand(v3, 0x89ABCDEF);
}

/*
==============
GMissile::FreeMemory<GMissileMP>
==============
*/
char GMissile::FreeMemory<GMissileMP>()
{
  char v0; 
  GMissile *v1; 
  GMissile *v2; 

  v0 = GMissile::ms_allocatedType;
  if ( (_BYTE)GMissile::ms_allocatedType )
  {
    if ( (_BYTE)GMissile::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 293, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GMissile::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GMissile::ms_gMissileSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_gMissileSystem != 0)", "%s\n\tGMissile::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gMissileSystem != NULL") )
      __debugbreak();
    v1 = GMissile::ms_gMissileSystem;
  }
  ((void (__fastcall *)(GMissile *, _QWORD))v1->~BgMissile)(v1, 0i64);
  DebugWipe(GMissile::ms_gMissileSystem, 0x18ui64);
  v2 = NULL;
  GMissile::ms_gMissileSystem = NULL;
LABEL_13:
  LOBYTE(GMissile::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 309, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GMissile::GetMemorySize<GMissileMP>
==============
*/
__int64 GMissile::GetMemorySize<GMissileMP>()
{
  return 24i64;
}

/*
==============
GMissile::AllocateMemory<GMissileSP>
==============
*/
void GMissile::AllocateMemory<GMissileSP>(HunkUser *hunkUser)
{
  GMissileSP *v2; 
  GMissile *v3; 

  if ( (_BYTE)GMissile::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 275, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 276, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v2 = (GMissileSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GMissile::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v2->m_javelinOffsetRight = 0i64;
  GMissileSP::GMissileSP(v2);
  GMissile::ms_gMissileSystem = v3;
  LOBYTE(GMissile::ms_allocatedType) = 1;
  BgMissile::SRand(v3, 0x89ABCDEF);
}

/*
==============
GMissile::FreeMemory<GMissileSP>
==============
*/
char GMissile::FreeMemory<GMissileSP>()
{
  char v0; 
  GMissile *v1; 
  GMissile *v2; 

  v0 = GMissile::ms_allocatedType;
  if ( (_BYTE)GMissile::ms_allocatedType )
  {
    if ( (_BYTE)GMissile::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 293, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GMissile::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GMissile::ms_gMissileSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_gMissileSystem != 0)", "%s\n\tGMissile::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gMissileSystem != NULL") )
      __debugbreak();
    v1 = GMissile::ms_gMissileSystem;
  }
  ((void (__fastcall *)(GMissile *, _QWORD))v1->~BgMissile)(v1, 0i64);
  DebugWipe(GMissile::ms_gMissileSystem, 0x18ui64);
  v2 = NULL;
  GMissile::ms_gMissileSystem = NULL;
LABEL_13:
  LOBYTE(GMissile::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 309, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GMissile::GetMemorySize<GMissileSP>
==============
*/
__int64 GMissile::GetMemorySize<GMissileSP>()
{
  return 24i64;
}

