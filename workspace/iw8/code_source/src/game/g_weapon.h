/*
==============
GWeapon::GetMemorySize<GWeaponMP>
==============
*/

unsigned int __fastcall GWeapon::GetMemorySize<GWeaponMP>()
{
  return ??$GetMemorySize@VGWeaponMP@@@GWeapon@@SAIXZ();
}

/*
==============
GWeapon::FreeMemory<GWeaponMP>
==============
*/

__int64 GWeapon::FreeMemory<GWeaponMP>()
{
  return ??$FreeMemory@VGWeaponMP@@@GWeapon@@SAXXZ();
}

/*
==============
GWeapon::GetWeaponSystem
==============
*/

GWeapon *__fastcall GWeapon::GetWeaponSystem()
{
  return ?GetWeaponSystem@GWeapon@@SAPEAV1@XZ();
}

/*
==============
GWeapon::~GWeapon
==============
*/

void __fastcall GWeapon::~GWeapon(GWeapon *this)
{
  ??1GWeapon@@UEAA@XZ(this);
}

/*
==============
GWeapon::GetMemorySize<GWeaponSP>
==============
*/

unsigned int __fastcall GWeapon::GetMemorySize<GWeaponSP>()
{
  return ??$GetMemorySize@VGWeaponSP@@@GWeapon@@SAIXZ();
}

/*
==============
GWeapon::AllocateMemory<GWeaponSP>
==============
*/

void __fastcall GWeapon::AllocateMemory<GWeaponSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGWeaponSP@@@GWeapon@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GWeapon::FreeMemory<GWeaponSP>
==============
*/

__int64 GWeapon::FreeMemory<GWeaponSP>()
{
  return ??$FreeMemory@VGWeaponSP@@@GWeapon@@SAXXZ();
}

/*
==============
GWeapon::AllocateMemory<GWeaponMP>
==============
*/

void __fastcall GWeapon::AllocateMemory<GWeaponMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGWeaponMP@@@GWeapon@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GWeapon::AllocateMemory<GWeaponMP>
==============
*/
void GWeapon::AllocateMemory<GWeaponMP>(HunkUser *hunkUser)
{
  GWeapon *v2; 

  if ( (_BYTE)GWeapon::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 92, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 93, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v2 = (GWeapon *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GWeapon::AllocateMemory");
  v2->__vftable = (GWeapon_vtbl *)&GWeaponMP::`vftable';
  GWeapon::ms_gWeaponSystem = v2;
  LOBYTE(GWeapon::ms_allocatedType) = 2;
}

/*
==============
GWeapon::FreeMemory<GWeaponMP>
==============
*/
char GWeapon::FreeMemory<GWeaponMP>()
{
  char v0; 
  GWeapon *v1; 
  GWeapon *v2; 

  v0 = GWeapon::ms_allocatedType;
  if ( (_BYTE)GWeapon::ms_allocatedType )
  {
    if ( (_BYTE)GWeapon::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 108, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GWeapon::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GWeapon::ms_gWeaponSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", (_DWORD)GWeapon::ms_gWeaponSystem + 112, ASSERT_TYPE_ASSERT, "(ms_gWeaponSystem != 0)", "%s\n\tGWeapon::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gWeaponSystem != NULL") )
      __debugbreak();
    v1 = GWeapon::ms_gWeaponSystem;
  }
  ((void (__fastcall *)(GWeapon *, _QWORD))v1->~GWeapon)(v1, 0i64);
  DebugWipe(GWeapon::ms_gWeaponSystem, 8ui64);
  v2 = NULL;
  GWeapon::ms_gWeaponSystem = NULL;
LABEL_13:
  LOBYTE(GWeapon::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 124, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GWeapon::GetMemorySize<GWeaponMP>
==============
*/
__int64 GWeapon::GetMemorySize<GWeaponMP>()
{
  return 8i64;
}

/*
==============
GWeapon::~GWeapon
==============
*/
void GWeapon::~GWeapon(GWeapon *this)
{
  this->__vftable = (GWeapon_vtbl *)&GWeapon::`vftable';
}

/*
==============
GWeapon::GetWeaponSystem
==============
*/
GWeapon *GWeapon::GetWeaponSystem()
{
  GWeapon *result; 

  result = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
      __debugbreak();
    return GWeapon::ms_gWeaponSystem;
  }
  return result;
}

/*
==============
GWeapon::AllocateMemory<GWeaponSP>
==============
*/
void GWeapon::AllocateMemory<GWeaponSP>(HunkUser *hunkUser)
{
  GWeapon *v2; 

  if ( (_BYTE)GWeapon::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 92, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 93, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v2 = (GWeapon *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GWeapon::AllocateMemory");
  v2->__vftable = (GWeapon_vtbl *)&GWeaponSP::`vftable';
  GWeapon::ms_gWeaponSystem = v2;
  LOBYTE(GWeapon::ms_allocatedType) = 1;
}

/*
==============
GWeapon::FreeMemory<GWeaponSP>
==============
*/
char GWeapon::FreeMemory<GWeaponSP>()
{
  char v0; 
  GWeapon *v1; 
  GWeapon *v2; 

  v0 = GWeapon::ms_allocatedType;
  if ( (_BYTE)GWeapon::ms_allocatedType )
  {
    if ( (_BYTE)GWeapon::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 108, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GWeapon::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GWeapon::ms_gWeaponSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", (_DWORD)GWeapon::ms_gWeaponSystem + 112, ASSERT_TYPE_ASSERT, "(ms_gWeaponSystem != 0)", "%s\n\tGWeapon::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gWeaponSystem != NULL") )
      __debugbreak();
    v1 = GWeapon::ms_gWeaponSystem;
  }
  ((void (__fastcall *)(GWeapon *, _QWORD))v1->~GWeapon)(v1, 0i64);
  DebugWipe(GWeapon::ms_gWeaponSystem, 8ui64);
  v2 = NULL;
  GWeapon::ms_gWeaponSystem = NULL;
LABEL_13:
  LOBYTE(GWeapon::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 124, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GWeapon::GetMemorySize<GWeaponSP>
==============
*/
__int64 GWeapon::GetMemorySize<GWeaponSP>()
{
  return 8i64;
}

