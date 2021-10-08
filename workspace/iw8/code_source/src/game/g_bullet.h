/*
==============
GBullet::FreeMemory<GBulletMP>
==============
*/

__int64 GBullet::FreeMemory<GBulletMP>()
{
  return ??$FreeMemory@VGBulletMP@@@GBullet@@SAXXZ();
}

/*
==============
GAssistTarget::~GAssistTarget
==============
*/

void __fastcall GAssistTarget::~GAssistTarget(GAssistTarget *this)
{
  ??1GAssistTarget@@UEAA@XZ(this);
}

/*
==============
GBullet::GetMemorySize<GBulletMP>
==============
*/

unsigned int __fastcall GBullet::GetMemorySize<GBulletMP>()
{
  return ??$GetMemorySize@VGBulletMP@@@GBullet@@SAIXZ();
}

/*
==============
GAssistTarget::GAssistTarget
==============
*/

void __fastcall GAssistTarget::GAssistTarget(GAssistTarget *this)
{
  ??0GAssistTarget@@QEAA@XZ(this);
}

/*
==============
GBullet::GetBulletSystem
==============
*/

GBullet *__fastcall GBullet::GetBulletSystem()
{
  return ?GetBulletSystem@GBullet@@SAPEAV1@XZ();
}

/*
==============
GBullet::AllocateMemory<GBulletMP>
==============
*/

void __fastcall GBullet::AllocateMemory<GBulletMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGBulletMP@@@GBullet@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GBullet::GetMemorySize<GBulletSP>
==============
*/

unsigned int __fastcall GBullet::GetMemorySize<GBulletSP>()
{
  return ??$GetMemorySize@VGBulletSP@@@GBullet@@SAIXZ();
}

/*
==============
GBullet::AllocateMemory<GBulletSP>
==============
*/

void __fastcall GBullet::AllocateMemory<GBulletSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGBulletSP@@@GBullet@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GBullet::~GBullet
==============
*/

void __fastcall GBullet::~GBullet(GBullet *this)
{
  ??1GBullet@@UEAA@XZ(this);
}

/*
==============
GBullet::FreeMemory<GBulletSP>
==============
*/

__int64 GBullet::FreeMemory<GBulletSP>()
{
  return ??$FreeMemory@VGBulletSP@@@GBullet@@SAXXZ();
}

/*
==============
GAssistTarget::GAssistTarget
==============
*/
void GAssistTarget::GAssistTarget(GAssistTarget *this)
{
  ConeTargetInfo::ConeTargetInfo(this);
  this->m_target = NULL;
  this->__vftable = (GAssistTarget_vtbl *)&GAssistTarget::`vftable';
}

/*
==============
GAssistTarget::~GAssistTarget
==============
*/
void GAssistTarget::~GAssistTarget(GAssistTarget *this)
{
  this->__vftable = (GAssistTarget_vtbl *)&GAssistTarget::`vftable';
  ConeTargetInfo::~ConeTargetInfo(this);
}

/*
==============
GBullet::~GBullet
==============
*/
void GBullet::~GBullet(GBullet *this)
{
  this->__vftable = (GBullet_vtbl *)&GBullet::`vftable';
}

/*
==============
GBullet::GetBulletSystem
==============
*/
GBullet *GBullet::GetBulletSystem()
{
  GBullet *result; 

  result = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    return GBullet::ms_gBulletSystem;
  }
  return result;
}

/*
==============
GBullet::AllocateMemory<GBulletMP>
==============
*/
void GBullet::AllocateMemory<GBulletMP>(HunkUser *hunkUser)
{
  GBullet *v2; 

  if ( (_BYTE)GBullet::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 206, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 207, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v2 = (GBullet *)Mem_HunkUser_AllocInternal(hunkUser, 0x13C8ui64, 8ui64, "GBullet::AllocateMemory");
  memset_0(v2, 0, sizeof(GBullet));
  GBullet::GBullet(v2);
  v2->m_reduceSpreadShotCount = 0;
  v2->__vftable = (GBullet_vtbl *)&GBulletMP::`vftable';
  GBullet::ms_gBulletSystem = v2;
  LOBYTE(GBullet::ms_allocatedType) = 2;
}

/*
==============
GBullet::FreeMemory<GBulletMP>
==============
*/
char GBullet::FreeMemory<GBulletMP>()
{
  char v0; 
  GBullet *v1; 
  GBullet *v2; 

  v0 = GBullet::ms_allocatedType;
  if ( (_BYTE)GBullet::ms_allocatedType )
  {
    if ( (_BYTE)GBullet::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 222, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GBullet::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GBullet::ms_gBulletSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 226, ASSERT_TYPE_ASSERT, "(ms_gBulletSystem != 0)", "%s\n\tGBullet::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gBulletSystem != NULL") )
      __debugbreak();
    v1 = GBullet::ms_gBulletSystem;
  }
  ((void (__fastcall *)(GBullet *, _QWORD))v1->~GBullet)(v1, 0i64);
  DebugWipe(GBullet::ms_gBulletSystem, 0x13C8ui64);
  v2 = NULL;
  GBullet::ms_gBulletSystem = NULL;
LABEL_13:
  LOBYTE(GBullet::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 238, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GBullet::GetMemorySize<GBulletMP>
==============
*/
__int64 GBullet::GetMemorySize<GBulletMP>()
{
  return 5064i64;
}

/*
==============
GBullet::AllocateMemory<GBulletSP>
==============
*/
void GBullet::AllocateMemory<GBulletSP>(HunkUser *hunkUser)
{
  GBullet *v2; 

  if ( (_BYTE)GBullet::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 206, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 207, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v2 = (GBullet *)Mem_HunkUser_AllocInternal(hunkUser, 0x13C8ui64, 8ui64, "GBullet::AllocateMemory");
  memset_0(v2, 0, sizeof(GBullet));
  GBullet::GBullet(v2);
  v2->m_reduceSpreadShotCount = 1;
  v2->__vftable = (GBullet_vtbl *)&GBulletSP::`vftable';
  GBullet::ms_gBulletSystem = v2;
  LOBYTE(GBullet::ms_allocatedType) = 1;
}

/*
==============
GBullet::FreeMemory<GBulletSP>
==============
*/
char GBullet::FreeMemory<GBulletSP>()
{
  char v0; 
  GBullet *v1; 
  GBullet *v2; 

  v0 = GBullet::ms_allocatedType;
  if ( (_BYTE)GBullet::ms_allocatedType )
  {
    if ( (_BYTE)GBullet::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 222, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GBullet::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GBullet::ms_gBulletSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 226, ASSERT_TYPE_ASSERT, "(ms_gBulletSystem != 0)", "%s\n\tGBullet::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gBulletSystem != NULL") )
      __debugbreak();
    v1 = GBullet::ms_gBulletSystem;
  }
  ((void (__fastcall *)(GBullet *, _QWORD))v1->~GBullet)(v1, 0i64);
  DebugWipe(GBullet::ms_gBulletSystem, 0x13C8ui64);
  v2 = NULL;
  GBullet::ms_gBulletSystem = NULL;
LABEL_13:
  LOBYTE(GBullet::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 238, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GBullet::GetMemorySize<GBulletSP>
==============
*/
__int64 GBullet::GetMemorySize<GBulletSP>()
{
  return 5064i64;
}

