/*
==============
CgVehicleSystem::GetClientFromIndex
==============
*/

const VehicleClient *__fastcall CgVehicleSystem::GetClientFromIndex(CgVehicleSystem *this, const int vehIndex)
{
  return ?GetClientFromIndex@CgVehicleSystem@@QEBAPEBUVehicleClient@@H@Z(this, vehIndex);
}

/*
==============
CgVehicleSystem::PhysicsGetLastStepTime
==============
*/

double __fastcall CgVehicleSystem::PhysicsGetLastStepTime(CgVehicleSystem *this)
{
  double result; 

  *(float *)&result = ?PhysicsGetLastStepTime@CgVehicleSystem@@UEBAMXZ(this);
  return result;
}

/*
==============
CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemSP>
==============
*/

void __fastcall CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateVehicleSystemCommon@VCgVehicleSystemSP@@@CgVehicleSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgVehicleSystem::~CgVehicleSystem
==============
*/

void __fastcall CgVehicleSystem::~CgVehicleSystem(CgVehicleSystem *this)
{
  ??1CgVehicleSystem@@MEAA@XZ(this);
}

/*
==============
CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemSP>
==============
*/

__int64 CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemSP>()
{
  return ??$FreeVehicleSystemCommon@VCgVehicleSystemSP@@@CgVehicleSystem@@KAXXZ();
}

/*
==============
CgVehicleSystem::GetVehicleSystem
==============
*/

CgVehicleSystem *__fastcall CgVehicleSystem::GetVehicleSystem(const LocalClientNum_t localClientNum)
{
  return ?GetVehicleSystem@CgVehicleSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::PhysicsGetVehiclePhysicsManager
==============
*/

const BgVehiclePhysicsManager *__fastcall CgVehicleSystem::PhysicsGetVehiclePhysicsManager(CgVehicleSystem *this)
{
  return ?PhysicsGetVehiclePhysicsManager@CgVehicleSystem@@UEBAAEBVBgVehiclePhysicsManager@@XZ(this);
}

/*
==============
CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemSP>
==============
*/

void __fastcall CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearVehicleSystemCommon@VCgVehicleSystemSP@@@CgVehicleSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::IsClient
==============
*/

bool __fastcall CgVehicleSystem::IsClient(CgVehicleSystem *this)
{
  return ?IsClient@CgVehicleSystem@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystem::IsVehicleSystemAllocated
==============
*/

bool __fastcall CgVehicleSystem::IsVehicleSystemAllocated(const LocalClientNum_t localClientNum)
{
  return ?IsVehicleSystemAllocated@CgVehicleSystem@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::PhysicsGetEventSystem
==============
*/

BgVehicleEventSystem *__fastcall CgVehicleSystem::PhysicsGetEventSystem(CgVehicleSystem *this)
{
  return ?PhysicsGetEventSystem@CgVehicleSystem@@UEAAAEAVBgVehicleEventSystem@@XZ(this);
}

/*
==============
CgVehicleSystem::PhysicsGetEventSystem
==============
*/

const BgVehicleEventSystem *__fastcall CgVehicleSystem::PhysicsGetEventSystem(CgVehicleSystem *this)
{
  return ?PhysicsGetEventSystem@CgVehicleSystem@@UEBAAEBVBgVehicleEventSystem@@XZ(this);
}

/*
==============
CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemMP>
==============
*/

CgVehicleSystemMP *__fastcall CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetVehicleSystemCommon@VCgVehicleSystemMP@@@CgVehicleSystem@@KAPEAVCgVehicleSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::PhysicsGetVehiclePhysicsManager
==============
*/

BgVehiclePhysicsManager *__fastcall CgVehicleSystem::PhysicsGetVehiclePhysicsManager(CgVehicleSystem *this)
{
  return ?PhysicsGetVehiclePhysicsManager@CgVehicleSystem@@UEAAAEAVBgVehiclePhysicsManager@@XZ(this);
}

/*
==============
CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemMP>
==============
*/

void __fastcall CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearVehicleSystemCommon@VCgVehicleSystemMP@@@CgVehicleSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemMP>
==============
*/

void __fastcall CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateVehicleSystemCommon@VCgVehicleSystemMP@@@CgVehicleSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemSP>
==============
*/

CgVehicleSystemSP *__fastcall CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetVehicleSystemCommon@VCgVehicleSystemSP@@@CgVehicleSystem@@KAPEAVCgVehicleSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemMP>
==============
*/

__int64 CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemMP>()
{
  return ??$FreeVehicleSystemCommon@VCgVehicleSystemMP@@@CgVehicleSystem@@KAXXZ();
}

/*
==============
CgVehicleSystem::GetVehicleSystem
==============
*/
CgVehicleSystem *CgVehicleSystem::GetVehicleSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgVehicleSystem::ms_vehicleSystemArray[v1];
}

/*
==============
CgVehicleSystem::IsVehicleSystemAllocated
==============
*/
bool CgVehicleSystem::IsVehicleSystemAllocated(const LocalClientNum_t localClientNum)
{
  return localClientNum >= LOCAL_CLIENT_0 && localClientNum < CgVehicleSystem::ms_allocatedCount && CgVehicleSystem::ms_vehicleSystemArray[localClientNum];
}

/*
==============
CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemMP>
==============
*/
CgVehicleSystem *CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgVehicleSystem::ms_vehicleSystemArray[v1];
}

/*
==============
CgVehicleSystem::GetClientFromIndex
==============
*/
VehicleClient *CgVehicleSystem::GetClientFromIndex(CgVehicleSystem *this, const int vehIndex)
{
  __int64 v2; 
  int v6; 

  v2 = vehIndex;
  if ( (unsigned int)vehIndex >= 0x80 )
  {
    v6 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 509, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", vehIndex, v6) )
      __debugbreak();
  }
  return &this->m_vehicleClients[v2];
}

/*
==============
CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemMP>
==============
*/
void CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgVehicleSystemMP *v5; 
  CgVehicleSystem **v6; 
  CgVehicleSystem *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 430, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the vehicle system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 431, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgVehicleSystemMP *)Mem_HunkUser_AllocInternal(hunkUser, 1157400 * v3, 8ui64, "CgVehicleSystem::AllocateVehicleSystemCommon");
  memset_0(v5, 0, 1157400 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgVehicleSystem::ms_vehicleSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 441, ASSERT_TYPE_ASSERT, "(!ms_vehicleSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_vehicleSystemArray[localClientIndex]") )
        __debugbreak();
      CgVehicleSystemMP::CgVehicleSystemMP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 2;
  CgVehicleSystem::ms_allocatedCount = v3;
}

/*
==============
CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemMP>
==============
*/
void CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 482, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tCgVehicleSystem::ClearVehicleSystemCommon: Trying to clear vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 536i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x11A918ui64);
  CgVehicleSystemMP::CgVehicleSystemMP((CgVehicleSystemMP *)*v2, (const LocalClientNum_t)v1);
  CgVehicleSystem::TreadBoneAnimReset();
}

/*
==============
CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemMP>
==============
*/
void CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgVehicleSystem::ms_allocatedType;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgVehicleSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 455, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to free vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgVehicleSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgVehicleSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 459, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgVehicleSystem::FreeVehicleSystemCommon: Trying to free single-player vehicle system but no vehicle system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgVehicleSystem::ms_allocatedCount - 1;
  if ( CgVehicleSystem::ms_allocatedCount - 1 < 0 )
  {
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 536i64))(*v2, 0i64);
      DebugWipe(*v2, 0x11A918ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgVehicleSystem::~CgVehicleSystem
==============
*/
void CgVehicleSystem::~CgVehicleSystem(CgVehicleSystem *this)
{
  this->__vftable = (CgVehicleSystem_vtbl *)&CgVehicleSystem::`vftable';
}

/*
==============
CgVehicleSystem::IsClient
==============
*/
char CgVehicleSystem::IsClient(CgVehicleSystem *this)
{
  return 1;
}

/*
==============
CgVehicleSystem::PhysicsGetEventSystem
==============
*/
CgVehicleEventSystem *CgVehicleSystem::PhysicsGetEventSystem(CgVehicleSystem *this)
{
  return &this->m_vehicleEventSystem;
}

/*
==============
CgVehicleSystem::PhysicsGetEventSystem
==============
*/
CgVehicleEventSystem *CgVehicleSystem::PhysicsGetEventSystem(CgVehicleSystem *this)
{
  return &this->m_vehicleEventSystem;
}

/*
==============
CgVehicleSystem::PhysicsGetLastStepTime
==============
*/
float CgVehicleSystem::PhysicsGetLastStepTime(CgVehicleSystem *this)
{
  return this->m_lastPhysicsStepTime;
}

/*
==============
CgVehicleSystem::PhysicsGetVehiclePhysicsManager
==============
*/
BgVehiclePhysicsManager *CgVehicleSystem::PhysicsGetVehiclePhysicsManager(CgVehicleSystem *this)
{
  return &this->m_vehiclePhysicsManager;
}

/*
==============
CgVehicleSystem::PhysicsGetVehiclePhysicsManager
==============
*/
BgVehiclePhysicsManager *CgVehicleSystem::PhysicsGetVehiclePhysicsManager(CgVehicleSystem *this)
{
  return &this->m_vehiclePhysicsManager;
}

/*
==============
CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemSP>
==============
*/
CgVehicleSystem *CgVehicleSystem::GetVehicleSystemCommon<CgVehicleSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgVehicleSystem::ms_vehicleSystemArray[v1];
}

/*
==============
CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemSP>
==============
*/
void CgVehicleSystem::AllocateVehicleSystemCommon<CgVehicleSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgVehicleSystemSP *v5; 
  CgVehicleSystem **v6; 
  CgVehicleSystem *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 430, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the vehicle system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 431, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgVehicleSystemSP *)Mem_HunkUser_AllocInternal(hunkUser, 1152280 * v3, 8ui64, "CgVehicleSystem::AllocateVehicleSystemCommon");
  memset_0(v5, 0, 1152280 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgVehicleSystem::ms_vehicleSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 441, ASSERT_TYPE_ASSERT, "(!ms_vehicleSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_vehicleSystemArray[localClientIndex]") )
        __debugbreak();
      CgVehicleSystemSP::CgVehicleSystemSP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 1;
  CgVehicleSystem::ms_allocatedCount = v3;
}

/*
==============
CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemSP>
==============
*/
void CgVehicleSystem::FreeVehicleSystemCommon<CgVehicleSystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgVehicleSystem::ms_allocatedType;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgVehicleSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 455, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to free vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgVehicleSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgVehicleSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 459, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgVehicleSystem::FreeVehicleSystemCommon: Trying to free single-player vehicle system but no vehicle system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgVehicleSystem::ms_allocatedCount - 1;
  if ( CgVehicleSystem::ms_allocatedCount - 1 < 0 )
  {
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 536i64))(*v2, 0i64);
      DebugWipe(*v2, 0x119518ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgVehicleSystem::ms_allocatedCount = 0;
    LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemSP>
==============
*/
void CgVehicleSystem::ClearVehicleSystemCommon<CgVehicleSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    v6 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 482, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tCgVehicleSystem::ClearVehicleSystemCommon: Trying to clear vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 536i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x119518ui64);
  CgVehicleSystemSP::CgVehicleSystemSP((CgVehicleSystemSP *)*v2, (const LocalClientNum_t)v1);
  CgVehicleSystem::TreadBoneAnimReset();
}

