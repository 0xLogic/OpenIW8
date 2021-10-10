/*
==============
GVehicles::PhysicsGetVehiclePhysicsManager
==============
*/

const BgVehiclePhysicsManager *__fastcall GVehicles::PhysicsGetVehiclePhysicsManager(GVehicles *this)
{
  return ?PhysicsGetVehiclePhysicsManager@GVehicles@@UEBAAEBVBgVehiclePhysicsManager@@XZ(this);
}

/*
==============
GVehicles::FreeMemory<GVehiclesMP>
==============
*/

__int64 GVehicles::FreeMemory<GVehiclesMP>()
{
  return ??$FreeMemory@VGVehiclesMP@@@GVehicles@@SAXXZ();
}

/*
==============
GVehicles::AllocateMemory<GVehiclesMP>
==============
*/

void __fastcall GVehicles::AllocateMemory<GVehiclesMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGVehiclesMP@@@GVehicles@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GVehicles::~GVehicles
==============
*/

void __fastcall GVehicles::~GVehicles(GVehicles *this)
{
  ??1GVehicles@@MEAA@XZ(this);
}

/*
==============
GVehicles::GetScriptUser
==============
*/

int __fastcall GVehicles::GetScriptUser(GVehicles *this)
{
  return ?GetScriptUser@GVehicles@@UEAAHXZ(this);
}

/*
==============
GVehicles::PhysicsGetLastStepTime
==============
*/

double __fastcall GVehicles::PhysicsGetLastStepTime(GVehicles *this)
{
  double result; 

  *(float *)&result = ?PhysicsGetLastStepTime@GVehicles@@UEBAMXZ(this);
  return result;
}

/*
==============
GVehicles::GetVehicleSystem
==============
*/

GVehicles *__fastcall GVehicles::GetVehicleSystem()
{
  return ?GetVehicleSystem@GVehicles@@SAPEAV1@XZ();
}

/*
==============
GVehicles::PhysicsGetCollisionSystem
==============
*/

BgVehicleCollisionSystem *__fastcall GVehicles::PhysicsGetCollisionSystem(GVehicles *this)
{
  return ?PhysicsGetCollisionSystem@GVehicles@@UEAAAEAVBgVehicleCollisionSystem@@XZ(this);
}

/*
==============
GVehicles::PhysicsGetEventSystem
==============
*/

const BgVehicleEventSystem *__fastcall GVehicles::PhysicsGetEventSystem(GVehicles *this)
{
  return ?PhysicsGetEventSystem@GVehicles@@UEBAAEBVBgVehicleEventSystem@@XZ(this);
}

/*
==============
GVehicles::GetMemorySize<GVehiclesSP>
==============
*/

unsigned int __fastcall GVehicles::GetMemorySize<GVehiclesSP>()
{
  return ??$GetMemorySize@VGVehiclesSP@@@GVehicles@@SAIXZ();
}

/*
==============
GVehicles::GetMemorySize<GVehiclesMP>
==============
*/

unsigned int __fastcall GVehicles::GetMemorySize<GVehiclesMP>()
{
  return ??$GetMemorySize@VGVehiclesMP@@@GVehicles@@SAIXZ();
}

/*
==============
GVehicles::AllocateMemory<GVehiclesSP>
==============
*/

void __fastcall GVehicles::AllocateMemory<GVehiclesSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGVehiclesSP@@@GVehicles@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GVehicles::PhysicsGetVehiclePhysicsManager
==============
*/

BgVehiclePhysicsManager *__fastcall GVehicles::PhysicsGetVehiclePhysicsManager(GVehicles *this)
{
  return ?PhysicsGetVehiclePhysicsManager@GVehicles@@UEAAAEAVBgVehiclePhysicsManager@@XZ(this);
}

/*
==============
GVehicles::IsClient
==============
*/

bool __fastcall GVehicles::IsClient(GVehicles *this)
{
  return ?IsClient@GVehicles@@UEBA_NXZ(this);
}

/*
==============
GVehicles::PhysicsGetCollisionSystem
==============
*/

const BgVehicleCollisionSystem *__fastcall GVehicles::PhysicsGetCollisionSystem(GVehicles *this)
{
  return ?PhysicsGetCollisionSystem@GVehicles@@UEBAAEBVBgVehicleCollisionSystem@@XZ(this);
}

/*
==============
GVehicles::PhysicsGetEventSystem
==============
*/

BgVehicleEventSystem *__fastcall GVehicles::PhysicsGetEventSystem(GVehicles *this)
{
  return ?PhysicsGetEventSystem@GVehicles@@UEAAAEAVBgVehicleEventSystem@@XZ(this);
}

/*
==============
GVehicles::FreeMemory<GVehiclesSP>
==============
*/

__int64 GVehicles::FreeMemory<GVehiclesSP>()
{
  return ??$FreeMemory@VGVehiclesSP@@@GVehicles@@SAXXZ();
}

/*
==============
GVehicles::GetVehicleSystem
==============
*/
GVehicles *GVehicles::GetVehicleSystem()
{
  GVehicles *result; 

  result = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    return GVehicles::ms_gVehiclesSystem;
  }
  return result;
}

/*
==============
GVehicles::AllocateMemory<GVehiclesMP>
==============
*/
void GVehicles::AllocateMemory<GVehiclesMP>(HunkUser *hunkUser)
{
  GVehicles *v2; 

  if ( (_BYTE)GVehicles::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 592, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 593, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  v2 = (GVehicles *)Mem_HunkUser_AllocInternal(hunkUser, 0x109638ui64, 8ui64, "GVehicles::AllocateMemory");
  memset_0(&v2->m_vehiclePhysicsManager, 0, 0x109630ui64);
  v2->__vftable = (GVehicles_vtbl *)&GVehicles::`vftable';
  BgVehicleEventSystem::BgVehicleEventSystem(&v2->m_vehicleEventSystem);
  v2->m_vehicleEventSystem.__vftable = (GVehicleEventSystem_vtbl *)&GVehicleEventSystem::`vftable';
  GVehicleSuspendManager::GVehicleSuspendManager(&v2->m_suspendManager);
  v2->m_vehicleCollisionSystem.__vftable = (GVehicleCollisionSystem_vtbl *)&GVehicleCollisionSystem::`vftable';
  v2->m_scriptableDamageInfo.m_cursor = 0;
  v2->__vftable = (GVehicles_vtbl *)&GVehiclesMP::`vftable';
  GVehicles::ms_gVehiclesSystem = v2;
  GVehicles::PhysicsInit(v2);
  LOBYTE(GVehicles::ms_allocatedType) = 2;
}

/*
==============
GVehicles::FreeMemory<GVehiclesMP>
==============
*/
char GVehicles::FreeMemory<GVehiclesMP>()
{
  char v0; 
  GVehicles *v1; 

  v0 = GVehicles::ms_allocatedType;
  if ( (_BYTE)GVehicles::ms_allocatedType )
  {
    if ( (_BYTE)GVehicles::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 610, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GVehicles::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v1 = GVehicles::ms_gVehiclesSystem;
    goto LABEL_12;
  }
LABEL_7:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 614, ASSERT_TYPE_ASSERT, "(ms_gVehiclesSystem != 0)", "%s\n\tGVehicles::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gVehiclesSystem != NULL") )
    __debugbreak();
  GVehicles::PhysicsShutdown(GVehicles::ms_gVehiclesSystem);
  ((void (__fastcall *)(GVehicles *, _QWORD))GVehicles::ms_gVehiclesSystem->~GVehicles)(GVehicles::ms_gVehiclesSystem, 0i64);
  DebugWipe(GVehicles::ms_gVehiclesSystem, 0x109638ui64);
  v1 = NULL;
  GVehicles::ms_gVehiclesSystem = NULL;
LABEL_12:
  LOBYTE(GVehicles::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 627, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GVehicles::GetMemorySize<GVehiclesMP>
==============
*/
__int64 GVehicles::GetMemorySize<GVehiclesMP>()
{
  return 1087032i64;
}

/*
==============
GVehicles::~GVehicles
==============
*/
void GVehicles::~GVehicles(GVehicles *this)
{
  this->__vftable = (GVehicles_vtbl *)&GVehicles::`vftable';
}

/*
==============
GVehicles::GetScriptUser
==============
*/
__int64 GVehicles::GetScriptUser(GVehicles *this)
{
  return 1i64;
}

/*
==============
GVehicles::IsClient
==============
*/
bool GVehicles::IsClient(GVehicles *this)
{
  return 0;
}

/*
==============
GVehicles::PhysicsGetCollisionSystem
==============
*/
GVehicleCollisionSystem *GVehicles::PhysicsGetCollisionSystem(GVehicles *this)
{
  return &this->m_vehicleCollisionSystem;
}

/*
==============
GVehicles::PhysicsGetCollisionSystem
==============
*/
GVehicleCollisionSystem *GVehicles::PhysicsGetCollisionSystem(GVehicles *this)
{
  return &this->m_vehicleCollisionSystem;
}

/*
==============
GVehicles::PhysicsGetEventSystem
==============
*/
GVehicleEventSystem *GVehicles::PhysicsGetEventSystem(GVehicles *this)
{
  return &this->m_vehicleEventSystem;
}

/*
==============
GVehicles::PhysicsGetEventSystem
==============
*/
GVehicleEventSystem *GVehicles::PhysicsGetEventSystem(GVehicles *this)
{
  return &this->m_vehicleEventSystem;
}

/*
==============
GVehicles::PhysicsGetLastStepTime
==============
*/
float GVehicles::PhysicsGetLastStepTime(GVehicles *this)
{
  return this->m_lastPhysicsStepTime;
}

/*
==============
GVehicles::PhysicsGetVehiclePhysicsManager
==============
*/
BgVehiclePhysicsManager *GVehicles::PhysicsGetVehiclePhysicsManager(GVehicles *this)
{
  return &this->m_vehiclePhysicsManager;
}

/*
==============
GVehicles::PhysicsGetVehiclePhysicsManager
==============
*/
BgVehiclePhysicsManager *GVehicles::PhysicsGetVehiclePhysicsManager(GVehicles *this)
{
  return &this->m_vehiclePhysicsManager;
}

/*
==============
GVehicles::AllocateMemory<GVehiclesSP>
==============
*/
void GVehicles::AllocateMemory<GVehiclesSP>(HunkUser *hunkUser)
{
  GVehicles *v2; 

  if ( (_BYTE)GVehicles::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 592, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 593, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  v2 = (GVehicles *)Mem_HunkUser_AllocInternal(hunkUser, 0x109638ui64, 8ui64, "GVehicles::AllocateMemory");
  memset_0(&v2->m_vehiclePhysicsManager, 0, 0x109630ui64);
  v2->__vftable = (GVehicles_vtbl *)&GVehicles::`vftable';
  BgVehicleEventSystem::BgVehicleEventSystem(&v2->m_vehicleEventSystem);
  v2->m_vehicleEventSystem.__vftable = (GVehicleEventSystem_vtbl *)&GVehicleEventSystem::`vftable';
  GVehicleSuspendManager::GVehicleSuspendManager(&v2->m_suspendManager);
  v2->m_vehicleCollisionSystem.__vftable = (GVehicleCollisionSystem_vtbl *)&GVehicleCollisionSystem::`vftable';
  v2->m_scriptableDamageInfo.m_cursor = 0;
  v2->__vftable = (GVehicles_vtbl *)&GVehiclesSP::`vftable';
  GVehicles::ms_gVehiclesSystem = v2;
  GVehicles::PhysicsInit(v2);
  LOBYTE(GVehicles::ms_allocatedType) = 1;
}

/*
==============
GVehicles::FreeMemory<GVehiclesSP>
==============
*/
char GVehicles::FreeMemory<GVehiclesSP>()
{
  char v0; 
  GVehicles *v1; 

  v0 = GVehicles::ms_allocatedType;
  if ( (_BYTE)GVehicles::ms_allocatedType )
  {
    if ( (_BYTE)GVehicles::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 610, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GVehicles::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v1 = GVehicles::ms_gVehiclesSystem;
    goto LABEL_12;
  }
LABEL_7:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 614, ASSERT_TYPE_ASSERT, "(ms_gVehiclesSystem != 0)", "%s\n\tGVehicles::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gVehiclesSystem != NULL") )
    __debugbreak();
  GVehicles::PhysicsShutdown(GVehicles::ms_gVehiclesSystem);
  ((void (__fastcall *)(GVehicles *, _QWORD))GVehicles::ms_gVehiclesSystem->~GVehicles)(GVehicles::ms_gVehiclesSystem, 0i64);
  DebugWipe(GVehicles::ms_gVehiclesSystem, 0x109638ui64);
  v1 = NULL;
  GVehicles::ms_gVehiclesSystem = NULL;
LABEL_12:
  LOBYTE(GVehicles::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 627, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GVehicles::GetMemorySize<GVehiclesSP>
==============
*/
__int64 GVehicles::GetMemorySize<GVehiclesSP>()
{
  return 1087032i64;
}

