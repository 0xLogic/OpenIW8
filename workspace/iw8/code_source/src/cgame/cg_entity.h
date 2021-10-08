/*
==============
CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemSP>
==============
*/

void __fastcall CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateEntitySystemCommon@VCgEntitySystemSP@@@CgEntitySystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgEntitySystem::GetEntity
==============
*/

centity_t *__fastcall CgEntitySystem::GetEntity(CgEntitySystem *this, const int entityIndex)
{
  return ?GetEntity@CgEntitySystem@@QEAAPEAUcentity_t@@H@Z(this, entityIndex);
}

/*
==============
CG_GetEntity
==============
*/

centity_t *__fastcall CG_GetEntity(const LocalClientNum_t localClientNum, const int entityIndex)
{
  return ?CG_GetEntity@@YAPEAUcentity_t@@W4LocalClientNum_t@@H@Z(localClientNum, entityIndex);
}

/*
==============
CgEntitySystem::~CgEntitySystem
==============
*/

void __fastcall CgEntitySystem::~CgEntitySystem(CgEntitySystem *this)
{
  ??1CgEntitySystem@@MEAA@XZ(this);
}

/*
==============
CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemMP>
==============
*/

void __fastcall CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateEntitySystemCommon@VCgEntitySystemMP@@@CgEntitySystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemSP>
==============
*/

void __fastcall CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearEntitySystemCommon@VCgEntitySystemSP@@@CgEntitySystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEntitySystem::GetEntitySystemCommon<CgEntitySystemMP>
==============
*/

CgEntitySystemMP *__fastcall CgEntitySystem::GetEntitySystemCommon<CgEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetEntitySystemCommon@VCgEntitySystemMP@@@CgEntitySystem@@KAPEAVCgEntitySystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEntitySystem::GetEntitySystemCommon<CgEntitySystemSP>
==============
*/

CgEntitySystemSP *__fastcall CgEntitySystem::GetEntitySystemCommon<CgEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetEntitySystemCommon@VCgEntitySystemSP@@@CgEntitySystem@@KAPEAVCgEntitySystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemSP>
==============
*/

__int64 CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemSP>()
{
  return ??$FreeEntitySystemCommon@VCgEntitySystemSP@@@CgEntitySystem@@KAXXZ();
}

/*
==============
CgEntitySystem::GetEntitySystem
==============
*/

CgEntitySystem *__fastcall CgEntitySystem::GetEntitySystem(const LocalClientNum_t localClientNum)
{
  return ?GetEntitySystem@CgEntitySystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemMP>
==============
*/

__int64 CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemMP>()
{
  return ??$FreeEntitySystemCommon@VCgEntitySystemMP@@@CgEntitySystem@@KAXXZ();
}

/*
==============
CgEntitySystem::SetEntityOrigin
==============
*/

void __fastcall CgEntitySystem::SetEntityOrigin(CgEntitySystem *this, const int entityIndex, const vec3_t *origin)
{
  ?SetEntityOrigin@CgEntitySystem@@QEAAXHAEBTvec3_t@@@Z(this, entityIndex, origin);
}

/*
==============
CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemMP>
==============
*/

void __fastcall CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearEntitySystemCommon@VCgEntitySystemMP@@@CgEntitySystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetEntity
==============
*/
centity_t *CG_GetEntity(const LocalClientNum_t localClientNum, const int entityIndex)
{
  __int64 v2; 
  __int64 v3; 
  CgEntitySystem *v4; 
  __int64 v6; 
  __int64 v7; 

  v2 = entityIndex;
  v3 = localClientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v7) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v3] )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v7) )
      __debugbreak();
  }
  v4 = CgEntitySystem::ms_entitySystemArray[v3];
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &v4->m_entities[v2];
}

/*
==============
CgEntitySystem::GetEntitySystem
==============
*/
CgEntitySystem *CgEntitySystem::GetEntitySystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgEntitySystem::ms_entitySystemArray[v1];
}

/*
==============
CgEntitySystem::GetEntity
==============
*/
centity_t *CgEntitySystem::GetEntity(CgEntitySystem *this, const int entityIndex)
{
  __int64 v2; 
  int v6; 

  v2 = entityIndex;
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entityIndex, v6) )
      __debugbreak();
  }
  return &this->m_entities[v2];
}

/*
==============
CgEntitySystem::GetEntitySystemCommon<CgEntitySystemMP>
==============
*/
CgEntitySystem *CgEntitySystem::GetEntitySystemCommon<CgEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgEntitySystem::ms_entitySystemArray[v1];
}

/*
==============
CgEntitySystem::SetEntityOrigin
==============
*/
void CgEntitySystem::SetEntityOrigin(CgEntitySystem *this, const int entityIndex, const vec3_t *origin)
{
  __int64 v3; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  vec3_t *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  __int64 v23; 

  v3 = entityIndex;
  _RDI = origin;
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    v19 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entityIndex, v19) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v3 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    v17 = 3 * v3 + 389124;
    *((_DWORD *)&this->__vftable + v17) = LODWORD(_RDI->v[0]);
    *((_DWORD *)&this->__vftable + v17 + 1) = LODWORD(_RDI->v[1]);
    *((_DWORD *)&this->m_localClientNum + v17) = LODWORD(_RDI->v[2]);
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi] }
    v7 = s_entity_aab_X;
    v8 = s_entity_aab_Z;
    __asm { vmovss  [rsp+68h+arg_8], xmm0 }
    v9 = s_entity_aab_Y;
    if ( (v20 & 0x7F800000) == 2139095040 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  [rsp+68h+arg_8], xmm0
    }
    if ( (v21 & 0x7F800000) == 2139095040 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+68h+arg_8], xmm0
    }
    if ( (v22 & 0x7F800000) == 2139095040 )
    {
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v12 = &this->m_entityOrigin[v3];
    v13 = (unsigned int)v12 ^ LODWORD(_RDI->v[2]);
    v14 = LODWORD(_RDI->v[0]) ^ (unsigned int)v12 ^ ~v7;
    v15 = v14 ^ (unsigned int)v12 ^ LODWORD(_RDI->v[1]);
    LODWORD(v12->v[0]) = v14;
    v16 = v9 ^ v15;
    LODWORD(v12->v[1]) = v16;
    LODWORD(v12->v[2]) = v8 ^ v16 ^ v13;
    memset(&v23, 0, sizeof(v23));
  }
}

/*
==============
CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemMP>
==============
*/
void CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  _DWORD *v4; 
  int v5; 
  CgEntitySystem **v6; 
  _DWORD *v7; 
  CgEntitySystem *v8; 
  centity_t *v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 312, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v3 > 2 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 313, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v11, 0i64, 2) )
      __debugbreak();
  }
  v4 = Mem_HunkUser_AllocInternal(hunkUser, 2140000 * v3, 8ui64, "CgEntitySystem::AllocateEntitySystemCommon");
  memset_0(v4, 0, 2140000 * v3);
  v5 = 0;
  if ( (int)v3 > 0 )
  {
    v6 = CgEntitySystem::ms_entitySystemArray;
    v7 = v4 + 395268;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 323, ASSERT_TYPE_ASSERT, "(!ms_entitySystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_entitySystemArray[localClientIndex]") )
        __debugbreak();
      v8 = (CgEntitySystem *)(v7 - 395268);
      *(v7 - 395266) = v5;
      *((_QWORD *)v7 - 197634) = &CgEntitySystem::`vftable';
      v9 = (centity_t *)(v7 - 395264);
      v10 = 2048i64;
      do
      {
        centity_t::centity_t(v9++);
        --v10;
      }
      while ( v10 );
      v7[24] = 0;
      memset_0(v7, 0, 0x60ui64);
      ++v5;
      v8->__vftable = (CgEntitySystem_vtbl *)&CgEntitySystemMP::`vftable';
      *v6++ = v8;
      v7 += 535000;
    }
    while ( v5 < (int)v3 );
  }
  CgEntitySystem::ms_allocatedCount = v3;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 2;
  CG_EntityWorkers_CreateRWLock_Physics();
}

/*
==============
CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemMP>
==============
*/
void CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 368, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tCgEntitySystem::ClearEntitySystemCommon: Trying to clear entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 369, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgEntitySystem::ms_entitySystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 72i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x20A760ui64);
  CgEntitySystemMP::CgEntitySystemMP((CgEntitySystemMP *)*v2, (const LocalClientNum_t)v1);
  CgEntitySystem::ResetEntitySystemObufscation((const LocalClientNum_t)v1);
}

/*
==============
CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemMP>
==============
*/
void CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgEntitySystem::ms_allocatedType;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    v4 = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 339, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to free entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgEntitySystem::ms_allocatedType;
LABEL_6:
    if ( v0 != 2 )
      goto LABEL_13;
  }
  if ( CgEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEntitySystem::FreeEntitySystemCommon: Trying to free single-player entity system but no entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgEntitySystem::ms_allocatedCount - 1;
  if ( CgEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v2 = (void **)&CgEntitySystem::ms_entitySystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 72i64))(*v2, 0i64);
      DebugWipe(*v2, 0x20A760ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
  }
LABEL_13:
  CgEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 0;
  CG_EntityWorkers_CloseRWLock_Physics();
}

/*
==============
CgEntitySystem::~CgEntitySystem
==============
*/
void CgEntitySystem::~CgEntitySystem(CgEntitySystem *this)
{
  this->__vftable = (CgEntitySystem_vtbl *)&CgEntitySystem::`vftable';
}

/*
==============
CgEntitySystem::GetEntitySystemCommon<CgEntitySystemSP>
==============
*/
CgEntitySystem *CgEntitySystem::GetEntitySystemCommon<CgEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgEntitySystem::ms_entitySystemArray[v1];
}

/*
==============
CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemSP>
==============
*/
void CgEntitySystem::AllocateEntitySystemCommon<CgEntitySystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  _DWORD *v4; 
  int v5; 
  CgEntitySystem **v6; 
  _DWORD *v7; 
  CgEntitySystem *v8; 
  centity_t *v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 312, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgEntitySystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v3 > 2 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 313, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v11, 0i64, 2) )
      __debugbreak();
  }
  v4 = Mem_HunkUser_AllocInternal(hunkUser, 2140000 * v3, 8ui64, "CgEntitySystem::AllocateEntitySystemCommon");
  memset_0(v4, 0, 2140000 * v3);
  v5 = 0;
  if ( (int)v3 > 0 )
  {
    v6 = CgEntitySystem::ms_entitySystemArray;
    v7 = v4 + 395268;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 323, ASSERT_TYPE_ASSERT, "(!ms_entitySystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_entitySystemArray[localClientIndex]") )
        __debugbreak();
      v8 = (CgEntitySystem *)(v7 - 395268);
      *(v7 - 395266) = v5;
      *((_QWORD *)v7 - 197634) = &CgEntitySystem::`vftable';
      v9 = (centity_t *)(v7 - 395264);
      v10 = 2048i64;
      do
      {
        centity_t::centity_t(v9++);
        --v10;
      }
      while ( v10 );
      v7[24] = 0;
      memset_0(v7, 0, 0x60ui64);
      ++v5;
      v8->__vftable = (CgEntitySystem_vtbl *)&CgEntitySystemSP::`vftable';
      *v6++ = v8;
      v7 += 535000;
    }
    while ( v5 < (int)v3 );
  }
  CgEntitySystem::ms_allocatedCount = v3;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 1;
  CG_EntityWorkers_CreateRWLock_Physics();
}

/*
==============
CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemSP>
==============
*/
void CgEntitySystem::FreeEntitySystemCommon<CgEntitySystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgEntitySystem::ms_allocatedType;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
  {
    v4 = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 339, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to free entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgEntitySystem::ms_allocatedType;
LABEL_6:
    if ( v0 != 1 )
      goto LABEL_13;
  }
  if ( CgEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEntitySystem::FreeEntitySystemCommon: Trying to free single-player entity system but no entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgEntitySystem::ms_allocatedCount - 1;
  if ( CgEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v2 = (void **)&CgEntitySystem::ms_entitySystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 72i64))(*v2, 0i64);
      DebugWipe(*v2, 0x20A760ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
  }
LABEL_13:
  CgEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 0;
  CG_EntityWorkers_CloseRWLock_Physics();
}

/*
==============
CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemSP>
==============
*/
void CgEntitySystem::ClearEntitySystemCommon<CgEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
  {
    v6 = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 368, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tCgEntitySystem::ClearEntitySystemCommon: Trying to clear entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 369, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgEntitySystem::ms_entitySystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 72i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x20A760ui64);
  CgEntitySystemSP::CgEntitySystemSP((CgEntitySystemSP *)*v2, (const LocalClientNum_t)v1);
  CgEntitySystem::ResetEntitySystemObufscation((const LocalClientNum_t)v1);
}

