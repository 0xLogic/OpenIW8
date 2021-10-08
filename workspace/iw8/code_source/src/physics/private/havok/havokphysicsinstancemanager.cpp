/*
==============
HavokPhysicsInstanceManager_IsInstanceInUse
==============
*/

bool __fastcall HavokPhysicsInstanceManager_IsInstanceInUse(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  return ?HavokPhysicsInstanceManager_IsInstanceInUse@@YA_NPEBUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_AddBody
==============
*/

void __fastcall HavokPhysicsInstanceManager_AddBody(HavokPhysicsInstanceManager *manager, unsigned int instanceId, hknpBodyId bodyId)
{
  ?HavokPhysicsInstanceManager_AddBody@@YAXPEAUHavokPhysicsInstanceManager@@IUhknpBodyId@@@Z(manager, instanceId, bodyId);
}

/*
==============
HavokPhysicsInstanceManager_CheckEmpty
==============
*/

void __fastcall HavokPhysicsInstanceManager_CheckEmpty(const char *worldName, Physics_WorldId worldId, HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_CheckEmpty@@YAXPEBDW4Physics_WorldId@@PEAUHavokPhysicsInstanceManager@@@Z(worldName, worldId, manager);
}

/*
==============
HavokPhysicsInstanceManager_DestroyInstance
==============
*/

void __fastcall HavokPhysicsInstanceManager_DestroyInstance(HavokPhysicsInstanceManager *manager, unsigned int id)
{
  ?HavokPhysicsInstanceManager_DestroyInstance@@YAXPEAUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_Shutdown
==============
*/

void __fastcall HavokPhysicsInstanceManager_Shutdown(HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_Shutdown@@YAXPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_IsAddedToWorld
==============
*/

bool __fastcall HavokPhysicsInstanceManager_IsAddedToWorld(const HavokPhysicsInstanceManager *manager, unsigned int instanceId, bool checkPending)
{
  return ?HavokPhysicsInstanceManager_IsAddedToWorld@@YA_NPEBUHavokPhysicsInstanceManager@@I_N@Z(manager, instanceId, checkPending);
}

/*
==============
HavokPhysicsInstanceManager_PropagateAddedFlags
==============
*/

void __fastcall HavokPhysicsInstanceManager_PropagateAddedFlags(HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_PropagateAddedFlags@@YAXPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_Clear
==============
*/

void __fastcall HavokPhysicsInstanceManager_Clear(HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_Clear@@YAXPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_ClearBodies
==============
*/

void __fastcall HavokPhysicsInstanceManager_ClearBodies(HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  ?HavokPhysicsInstanceManager_ClearBodies@@YAXPEAUHavokPhysicsInstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokPhysicsInstanceManager_Load
==============
*/

void __fastcall HavokPhysicsInstanceManager_Load(SaveGame *save, HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_Load@@YAXPEAUSaveGame@@PEAUHavokPhysicsInstanceManager@@@Z(save, manager);
}

/*
==============
HavokPhysicsInstanceManager_ClearConstraints
==============
*/

void __fastcall HavokPhysicsInstanceManager_ClearConstraints(HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  ?HavokPhysicsInstanceManager_ClearConstraints@@YAXPEAUHavokPhysicsInstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokPhysicsInstanceManager_GetDetailModel
==============
*/

const XModel *__fastcall HavokPhysicsInstanceManager_GetDetailModel(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  return ?HavokPhysicsInstanceManager_GetDetailModel@@YAPEBUXModel@@PEBUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_SetAddedToWorld
==============
*/

void __fastcall HavokPhysicsInstanceManager_SetAddedToWorld(Physics_WorldId worldId, HavokPhysicsInstanceManager *manager, unsigned int instanceId, bool added, bool pending)
{
  ?HavokPhysicsInstanceManager_SetAddedToWorld@@YAXW4Physics_WorldId@@PEAUHavokPhysicsInstanceManager@@I_N2@Z(worldId, manager, instanceId, added, pending);
}

/*
==============
HavokPhysicsInstanceManager_SetPhysicsAssetAddendum
==============
*/

void __fastcall HavokPhysicsInstanceManager_SetPhysicsAssetAddendum(HavokPhysicsInstanceManager *manager, unsigned int id, const PhysicsAsset *physicsAsset)
{
  ?HavokPhysicsInstanceManager_SetPhysicsAssetAddendum@@YAXPEAUHavokPhysicsInstanceManager@@IPEBUPhysicsAsset@@@Z(manager, id, physicsAsset);
}

/*
==============
HavokPhysicsInstanceManager_Load
==============
*/

void __fastcall HavokPhysicsInstanceManager_Load(SaveGame *save, HavokPhysicsInstanceManager *manager, unsigned int instanceId, const PhysicsAsset *physicsAsset, const PhysicsAsset *physicsAssetAddendum, const XModel *detailModel, const XModel *xModel)
{
  ?HavokPhysicsInstanceManager_Load@@YAXPEAUSaveGame@@PEAUHavokPhysicsInstanceManager@@IPEBUPhysicsAsset@@2PEBUXModel@@3@Z(save, manager, instanceId, physicsAsset, physicsAssetAddendum, detailModel, xModel);
}

/*
==============
HavokPhysicsInstanceManager_GetPhysicsAssetAddendum
==============
*/

const PhysicsAsset *__fastcall HavokPhysicsInstanceManager_GetPhysicsAssetAddendum(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  return ?HavokPhysicsInstanceManager_GetPhysicsAssetAddendum@@YAPEBUPhysicsAsset@@PEBUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_SetXModel
==============
*/

void __fastcall HavokPhysicsInstanceManager_SetXModel(HavokPhysicsInstanceManager *manager, unsigned int id, const XModel *xModel)
{
  ?HavokPhysicsInstanceManager_SetXModel@@YAXPEAUHavokPhysicsInstanceManager@@IPEBUXModel@@@Z(manager, id, xModel);
}

/*
==============
HavokPhysicsInstanceManager_GetPhysicsAsset
==============
*/

const PhysicsAsset *__fastcall HavokPhysicsInstanceManager_GetPhysicsAsset(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  return ?HavokPhysicsInstanceManager_GetPhysicsAsset@@YAPEBUPhysicsAsset@@PEBUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_AllocateInstance
==============
*/

unsigned int __fastcall HavokPhysicsInstanceManager_AllocateInstance(HavokPhysicsInstanceManager *manager)
{
  return ?HavokPhysicsInstanceManager_AllocateInstance@@YAIPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_Write
==============
*/

void __fastcall HavokPhysicsInstanceManager_Write(MemoryFile *memFile, const HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  ?HavokPhysicsInstanceManager_Write@@YAXPEAUMemoryFile@@PEBUHavokPhysicsInstanceManager@@I@Z(memFile, manager, instanceId);
}

/*
==============
HavokPhysicsInstanceManager_SetDetailModel
==============
*/

void __fastcall HavokPhysicsInstanceManager_SetDetailModel(HavokPhysicsInstanceManager *manager, unsigned int id, const XModel *detailModel)
{
  ?HavokPhysicsInstanceManager_SetDetailModel@@YAXPEAUHavokPhysicsInstanceManager@@IPEBUXModel@@@Z(manager, id, detailModel);
}

/*
==============
HavokPhysicsInstanceManager_Write
==============
*/

void __fastcall HavokPhysicsInstanceManager_Write(MemoryFile *memFile, const HavokPhysicsInstanceManager *manager)
{
  ?HavokPhysicsInstanceManager_Write@@YAXPEAUMemoryFile@@PEBUHavokPhysicsInstanceManager@@@Z(memFile, manager);
}

/*
==============
HavokPhysicsInstanceManager_IsFull
==============
*/

bool __fastcall HavokPhysicsInstanceManager_IsFull(HavokPhysicsInstanceManager *manager)
{
  return ?HavokPhysicsInstanceManager_IsFull@@YA_NPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_Init
==============
*/

void __fastcall HavokPhysicsInstanceManager_Init(HavokPhysicsInstanceManager *manager, unsigned int capacity)
{
  ?HavokPhysicsInstanceManager_Init@@YAXPEAUHavokPhysicsInstanceManager@@I@Z(manager, capacity);
}

/*
==============
HavokPhysicsInstanceManager_GetCapacity
==============
*/

unsigned int __fastcall HavokPhysicsInstanceManager_GetCapacity(HavokPhysicsInstanceManager *manager)
{
  return ?HavokPhysicsInstanceManager_GetCapacity@@YAIPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_SetPhysicsAsset
==============
*/

void __fastcall HavokPhysicsInstanceManager_SetPhysicsAsset(HavokPhysicsInstanceManager *manager, unsigned int id, const PhysicsAsset *physicsAsset)
{
  ?HavokPhysicsInstanceManager_SetPhysicsAsset@@YAXPEAUHavokPhysicsInstanceManager@@IPEBUPhysicsAsset@@@Z(manager, id, physicsAsset);
}

/*
==============
HavokPhysicsInstanceManager_GetXModel
==============
*/

const XModel *__fastcall HavokPhysicsInstanceManager_GetXModel(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  return ?HavokPhysicsInstanceManager_GetXModel@@YAPEBUXModel@@PEBUHavokPhysicsInstanceManager@@I@Z(manager, id);
}

/*
==============
HavokPhysicsInstanceManager_FreeDestroyedInstanceIds
==============
*/

bool __fastcall HavokPhysicsInstanceManager_FreeDestroyedInstanceIds(HavokPhysicsInstanceManager *manager)
{
  return ?HavokPhysicsInstanceManager_FreeDestroyedInstanceIds@@YA_NPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_AddConstraint
==============
*/

void __fastcall HavokPhysicsInstanceManager_AddConstraint(HavokPhysicsInstanceManager *manager, unsigned int instanceId, hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> constraintId)
{
  ?HavokPhysicsInstanceManager_AddConstraint@@YAXPEAUHavokPhysicsInstanceManager@@IU?$hkHandle@I$0HPPPPPPP@UhknpConstraintIdDiscriminant@@@@@Z(manager, instanceId, constraintId);
}

/*
==============
HavokPhysicsInstanceManager_GetPeakInstanceId
==============
*/

unsigned int __fastcall HavokPhysicsInstanceManager_GetPeakInstanceId(HavokPhysicsInstanceManager *manager)
{
  return ?HavokPhysicsInstanceManager_GetPeakInstanceId@@YAIPEAUHavokPhysicsInstanceManager@@@Z(manager);
}

/*
==============
HavokPhysicsInstanceManager_RemoveConstraint
==============
*/

void __fastcall HavokPhysicsInstanceManager_RemoveConstraint(HavokPhysicsInstanceManager *manager, unsigned int instanceId, int index)
{
  ?HavokPhysicsInstanceManager_RemoveConstraint@@YAXPEAUHavokPhysicsInstanceManager@@IH@Z(manager, instanceId, index);
}

/*
==============
HavokPhysicsInstanceManager_AddBody
==============
*/
void HavokPhysicsInstanceManager_AddBody(HavokPhysicsInstanceManager *manager, unsigned int instanceId, hknpBodyId bodyId)
{
  __int64 v3; 
  HavokPhysicsInstance *v6; 
  hkMemoryAllocator *v7; 
  int m_size; 
  __int64 v9; 

  v3 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 686, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 687, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 688, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 689, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
    __debugbreak();
  v6 = &manager->buffer[v3];
  v7 = hkMemHeapAllocator();
  m_size = v6->bodies.m_size;
  if ( m_size == (v6->bodies.m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v7, v6, 4);
    m_size = v6->bodies.m_size;
  }
  v6->bodies.m_data[m_size] = bodyId;
  ++v6->bodies.m_size;
}

/*
==============
HavokPhysicsInstanceManager_AddConstraint
==============
*/
void HavokPhysicsInstanceManager_AddConstraint(HavokPhysicsInstanceManager *manager, unsigned int instanceId, hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> constraintId)
{
  __int64 v3; 
  hkArray<hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>,hkContainerHeapAllocator> *p_constraints; 
  hkMemoryAllocator *v7; 
  int m_size; 
  __int64 v9; 

  v3 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 700, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 701, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 702, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( constraintId.m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 703, ASSERT_TYPE_ASSERT, "(constraintId.isValid())", (const char *)&queryFormat, "constraintId.isValid()") )
    __debugbreak();
  p_constraints = &manager->buffer[v3].constraints;
  v7 = hkMemHeapAllocator();
  m_size = p_constraints->m_size;
  if ( m_size == (p_constraints->m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v7, p_constraints, 4);
    m_size = p_constraints->m_size;
  }
  p_constraints->m_data[m_size] = constraintId;
  ++p_constraints->m_size;
}

/*
==============
HavokPhysicsInstanceManager_AllocateInstance
==============
*/
__int64 HavokPhysicsInstanceManager_AllocateInstance(HavokPhysicsInstanceManager *manager)
{
  volatile int *p_debugEditOwnership; 
  HavokPhysicsInstance *buffer; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 410, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 411, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( manager->freeInstances == -1 )
    HavokPhysicsInstanceManager_FreeDestroyedInstanceIds(manager);
  p_debugEditOwnership = &manager->debugEditOwnership;
  if ( (((_BYTE)manager + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &manager->debugEditOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_debugEditOwnership, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 419, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0") )
    __debugbreak();
  _RSI = manager->freeInstances;
  if ( (_DWORD)_RSI == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 446, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Havok Physics - Not enough instances") )
      __debugbreak();
    if ( (((_BYTE)manager + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &manager->debugEditOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_debugEditOwnership, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 447, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  else
  {
    buffer = manager->buffer;
    manager->freeInstances = manager->buffer[_RSI].nextInstanceId;
    buffer[_RSI].nextInstanceId = -1;
    manager->buffer[_RSI].inUse = 1;
    if ( manager->buffer[_RSI].addedToWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 430, ASSERT_TYPE_ASSERT, "(!manager->buffer[id].addedToWorld)", (const char *)&queryFormat, "!manager->buffer[id].addedToWorld") )
      __debugbreak();
    if ( manager->buffer[_RSI].addToWorldPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 431, ASSERT_TYPE_ASSERT, "(!manager->buffer[id].addToWorldPending)", (const char *)&queryFormat, "!manager->buffer[id].addToWorldPending") )
      __debugbreak();
    if ( --manager->numFreeInstances + ++manager->numAllocatedInstances + manager->numDestroyedInstances != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 436, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
      __debugbreak();
    _EAX = manager->peakInstanceId;
    if ( _EAX == -1 )
    {
      _EAX = _RSI;
    }
    else
    {
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, esi
        vpmaxud xmm1, xmm0, xmm1
        vmovd   eax, xmm1
      }
    }
    manager->peakInstanceId = _EAX;
    if ( (((_BYTE)manager + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &manager->debugEditOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_debugEditOwnership, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 440, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1") )
      __debugbreak();
    return (unsigned int)_RSI;
  }
}

/*
==============
HavokPhysicsInstanceManager_CheckEmpty
==============
*/
void HavokPhysicsInstanceManager_CheckEmpty(const char *worldName, Physics_WorldId worldId, HavokPhysicsInstanceManager *manager)
{
  __int64 i; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  unsigned __int8 RefSubSystem; 
  unsigned __int16 RefId; 
  LocalClientNum_t LocalClientForWorld; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  LocalClientNum_t v15; 
  const XModel *Model; 
  char *fmt; 
  DynEntityBasis basisOut; 
  unsigned int dynEntIdOut; 

  for ( i = 0i64; (unsigned int)i < manager->capacity; i = (unsigned int)(i + 1) )
  {
    if ( manager->buffer[i].bodies.m_size )
    {
      Ref = HavokPhysics_GetRef(worldId, (hknpBodyId)manager->buffer[i].bodies.m_data->m_serialAndIndex);
      RefSystem = Physics_GetRefSystem(Ref);
      RefSubSystem = Physics_GetRefSubSystem(Ref);
      RefId = Physics_GetRefId(Ref);
      switch ( RefSystem )
      {
        case Physics_RefSystem_WorldGeo:
          Com_Printf(20, "Physics world geo instance still remains in world %s.\n", worldName);
          break;
        case Physics_RefSystem_DynEnts:
          LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
          DynEnt_GetBasisAndDynEntId(Ref, LocalClientForWorld, &basisOut, &dynEntIdOut);
          v12 = "Model";
          if ( basisOut )
            v12 = "Brush";
          Com_Printf(20, "Physics dynent %s:%u still remains in world %s.\n", v12, dynEntIdOut, worldName);
          break;
        case Physics_RefSystem_GEntities:
        case Physics_RefSystem_GItems:
          Com_Printf(20, "Physics server entity %u still remains in world %s.\n", RefId, worldName);
          break;
        case Physics_RefSystem_GCharacterProxies:
          v13 = "Detail";
          if ( RefSubSystem )
            v13 = "Collision";
          Com_Printf(20, "Physics server %s character proxy for entity %u still remains in world %s.\n", v13, RefId, worldName);
          break;
        case Physics_RefSystem_CEntities:
          Com_Printf(20, "Physics client entity %u still remains in world %s.\n", RefId, worldName);
          break;
        case Physics_RefSystem_CCharacterProxies:
          v14 = "Detail";
          if ( RefSubSystem )
            v14 = "Collision";
          Com_Printf(20, "Physics client %s character proxy for entity %u still remains in world %s.\n", v14, RefId, worldName);
          break;
        case Physics_RefSystem_Ragdoll:
          Com_Printf(20, "Physics ragdoll %u:%u still remains in world %s.\n", RefSubSystem, RefId, worldName);
          break;
        case Physics_RefSystem_Particles:
          Com_Printf(20, "Physics particle %u:%u still remains in world %s.\n", RefSubSystem, RefId, worldName);
          break;
        case Physics_RefSystem_Scriptable:
          Com_Printf(20, "Physics scriptable %u still remains in world %s.\n", Ref & 0x3FFFFF, worldName);
          break;
        case Physics_RefSystem_CModels:
          v15 = Physics_GetLocalClientForWorld(worldId);
          if ( v15 == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 256, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", "%s\n\tInvalid local client for CG physics query", "localClientNum != LOCAL_CLIENT_INVALID") )
            __debugbreak();
          Model = CG_ClientModel_GetModel(v15, RefId, 0);
          if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 259, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          Com_Printf(20, "Physics client model %u %s still remains in world %s.\n", RefId, Model->name, worldName);
          break;
        case Physics_RefSystem_ClothProxy:
          Com_Printf(20, "Physics Cloth Proxy %u:%u still remains in world %s.\n", RefId, RefSubSystem, worldName);
          break;
        case Physics_RefSystem_LightweightParticles:
          Com_Printf(20, "Lightweight Physics Particle Pipeline %u:%u still remains in world %s.\n", RefId, RefSubSystem, worldName);
          break;
        default:
          LODWORD(fmt) = RefId;
          Com_Printf(20, "Unknown physics body %i:%u:%u still remains in world %s.\n", (unsigned int)RefSystem, RefSubSystem, fmt, worldName);
          break;
      }
    }
  }
}

/*
==============
HavokPhysicsInstanceManager_Clear
==============
*/
void HavokPhysicsInstanceManager_Clear(HavokPhysicsInstanceManager *manager)
{
  __int64 capacity; 
  HavokPhysicsInstance *buffer; 
  unsigned int i; 
  __int64 v5; 
  hkArray<hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>,hkContainerHeapAllocator> *p_constraints; 
  hkMemoryAllocator *v7; 
  int m_capacityAndFlags; 
  HavokPhysicsInstance *v9; 
  hkMemoryAllocator *v10; 
  int v11; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 133, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 134, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( !manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 135, ASSERT_TYPE_ASSERT, "(manager->capacity > 0)", (const char *)&queryFormat, "manager->capacity > 0") )
    __debugbreak();
  capacity = manager->capacity;
  buffer = manager->buffer;
  manager->destroyedInstances = -1;
  manager->freeInstances = 0;
  manager->numFreeInstances = capacity;
  *(_QWORD *)&manager->numAllocatedInstances = 0i64;
  manager->peakInstanceId = -1;
  memset_0(buffer, 0, 80 * capacity);
  for ( i = 0; i < manager->capacity; manager->buffer[v5].addToWorldPending = 0 )
  {
    v5 = i;
    p_constraints = &manager->buffer[v5].constraints;
    v7 = hkMemHeapAllocator();
    m_capacityAndFlags = p_constraints->m_capacityAndFlags;
    p_constraints->m_size = 0;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v7, p_constraints->m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
    p_constraints->m_data = NULL;
    p_constraints->m_capacityAndFlags = 0x80000000;
    v9 = &manager->buffer[v5];
    v10 = hkMemHeapAllocator();
    v11 = v9->bodies.m_capacityAndFlags;
    v9->bodies.m_size = 0;
    if ( v11 >= 0 )
      hkMemoryAllocator::bufFree2(v10, v9->bodies.m_data, 4, v11 & 0x3FFFFFFF);
    v9->bodies.m_data = NULL;
    ++i;
    v9->bodies.m_capacityAndFlags = 0x80000000;
    manager->buffer[v5].nextInstanceId = i;
    manager->buffer[v5].physicsAsset = NULL;
    manager->buffer[v5].physicsAssetAddendum = NULL;
    manager->buffer[v5].detailModel = NULL;
    manager->buffer[v5].xModel = NULL;
    manager->buffer[v5].addedToWorld = 0;
  }
  manager->buffer[i - 1].nextInstanceId = -1;
}

/*
==============
HavokPhysicsInstanceManager_ClearBodies
==============
*/
void HavokPhysicsInstanceManager_ClearBodies(HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  __int64 v2; 
  HavokPhysicsInstance *v4; 
  hkMemoryAllocator *v5; 
  int m_capacityAndFlags; 
  __int64 v7; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 714, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 715, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  v4 = &manager->buffer[v2];
  v5 = hkMemHeapAllocator();
  m_capacityAndFlags = v4->bodies.m_capacityAndFlags;
  v4->bodies.m_size = 0;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v5, v4->bodies.m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  v4->bodies.m_capacityAndFlags = 0x80000000;
  v4->bodies.m_data = NULL;
}

/*
==============
HavokPhysicsInstanceManager_ClearConstraints
==============
*/
void HavokPhysicsInstanceManager_ClearConstraints(HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  __int64 v2; 
  hkArray<hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>,hkContainerHeapAllocator> *p_constraints; 
  hkMemoryAllocator *v5; 
  int m_capacityAndFlags; 
  __int64 v7; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 727, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 728, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 729, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  p_constraints = &manager->buffer[v2].constraints;
  v5 = hkMemHeapAllocator();
  m_capacityAndFlags = p_constraints->m_capacityAndFlags;
  p_constraints->m_size = 0;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v5, p_constraints->m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  p_constraints->m_capacityAndFlags = 0x80000000;
  p_constraints->m_data = NULL;
}

/*
==============
HavokPhysicsInstanceManager_DestroyInstance
==============
*/
void HavokPhysicsInstanceManager_DestroyInstance(HavokPhysicsInstanceManager *manager, unsigned int id)
{
  volatile int *p_debugEditOwnership; 
  __int64 v3; 
  unsigned int v5; 
  __int64 v6; 

  p_debugEditOwnership = &manager->debugEditOwnership;
  v3 = id;
  if ( (((_BYTE)manager + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &manager->debugEditOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_debugEditOwnership, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 456, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0") )
    __debugbreak();
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 459, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 460, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( manager->buffer[v3].bodies.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 464, ASSERT_TYPE_ASSERT, "(manager->buffer[id].bodies.getSize() == 0)", (const char *)&queryFormat, "manager->buffer[id].bodies.getSize() == 0") )
    __debugbreak();
  if ( manager->buffer[v3].constraints.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 465, ASSERT_TYPE_ASSERT, "(manager->buffer[id].constraints.getSize() == 0)", (const char *)&queryFormat, "manager->buffer[id].constraints.getSize() == 0") )
    __debugbreak();
  if ( !manager->buffer[v3].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 468, ASSERT_TYPE_ASSERT, "(manager->buffer[id].inUse)", (const char *)&queryFormat, "manager->buffer[id].inUse") )
    __debugbreak();
  manager->buffer[v3].physicsAsset = NULL;
  manager->buffer[v3].physicsAssetAddendum = NULL;
  manager->buffer[v3].detailModel = NULL;
  manager->buffer[v3].xModel = NULL;
  manager->buffer[v3].inUse = 0;
  manager->buffer[v3].addedToWorld = 0;
  manager->buffer[v3].addToWorldPending = 0;
  if ( manager->destroyedInstances == (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 480, ASSERT_TYPE_ASSERT, "(manager->destroyedInstances != id)", (const char *)&queryFormat, "manager->destroyedInstances != id") )
    __debugbreak();
  manager->buffer[v3].nextInstanceId = manager->destroyedInstances;
  v5 = ++manager->numDestroyedInstances + --manager->numAllocatedInstances + manager->numFreeInstances;
  manager->destroyedInstances = v3;
  if ( v5 != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 487, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
    __debugbreak();
  if ( ((unsigned __int8)p_debugEditOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_debugEditOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_debugEditOwnership, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 489, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
HavokPhysicsInstanceManager_FreeDestroyedInstanceIds
==============
*/
char HavokPhysicsInstanceManager_FreeDestroyedInstanceIds(HavokPhysicsInstanceManager *manager)
{
  volatile int *p_debugEditOwnership; 
  __int64 v3; 
  __int64 destroyedInstances; 
  HavokPhysicsInstance *buffer; 
  __int64 i; 
  __int64 v7; 
  unsigned int v8; 

  p_debugEditOwnership = &manager->debugEditOwnership;
  v3 = ((_BYTE)manager + 52) & 3;
  if ( (((_BYTE)manager + 52) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &manager->debugEditOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_debugEditOwnership, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 496, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 1, 0 ) == 0") )
    __debugbreak();
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 499, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 500, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  destroyedInstances = manager->destroyedInstances;
  if ( (_DWORD)destroyedInstances == -1 )
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_debugEditOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_debugEditOwnership, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 532, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1") )
      __debugbreak();
    return 0;
  }
  else
  {
    buffer = manager->buffer;
    for ( i = destroyedInstances; manager->buffer[destroyedInstances].nextInstanceId != -1; i = destroyedInstances )
    {
      if ( (_DWORD)destroyedInstances == buffer[i].nextInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 511, ASSERT_TYPE_ASSERT, "(id != manager->buffer[id].nextInstanceId)", (const char *)&queryFormat, "id != manager->buffer[id].nextInstanceId") )
        __debugbreak();
      buffer = manager->buffer;
      destroyedInstances = manager->buffer[i].nextInstanceId;
    }
    if ( (_DWORD)destroyedInstances == manager->freeInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 516, ASSERT_TYPE_ASSERT, "(id != manager->freeInstances)", (const char *)&queryFormat, "id != manager->freeInstances") )
      __debugbreak();
    v7 = destroyedInstances;
    manager->buffer[v7].nextInstanceId = manager->freeInstances;
    manager->buffer[v7].inUse = 0;
    manager->freeInstances = manager->destroyedInstances;
    manager->numFreeInstances += manager->numDestroyedInstances;
    v8 = manager->numAllocatedInstances + manager->numFreeInstances;
    manager->destroyedInstances = -1;
    manager->numDestroyedInstances = 0;
    if ( v8 != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 525, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
      __debugbreak();
    if ( ((unsigned __int8)p_debugEditOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_debugEditOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_debugEditOwnership, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 527, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &manager->debugEditOwnership, 0, 1 ) == 1") )
      __debugbreak();
    return 1;
  }
}

/*
==============
HavokPhysicsInstanceManager_GetCapacity
==============
*/
__int64 HavokPhysicsInstanceManager_GetCapacity(HavokPhysicsInstanceManager *manager)
{
  if ( manager )
    return manager->capacity;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 648, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
HavokPhysicsInstanceManager_GetDetailModel
==============
*/
const XModel *HavokPhysicsInstanceManager_GetDetailModel(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  __int64 v2; 
  __int64 v5; 

  v2 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 609, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 610, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 611, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].detailModel;
}

/*
==============
HavokPhysicsInstanceManager_GetPeakInstanceId
==============
*/
__int64 HavokPhysicsInstanceManager_GetPeakInstanceId(HavokPhysicsInstanceManager *manager)
{
  if ( manager )
    return manager->peakInstanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 668, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return MEMORY[0x20];
}

/*
==============
HavokPhysicsInstanceManager_GetPhysicsAsset
==============
*/
const PhysicsAsset *HavokPhysicsInstanceManager_GetPhysicsAsset(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  __int64 v2; 
  __int64 v5; 

  v2 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 556, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 557, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 558, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].physicsAsset;
}

/*
==============
HavokPhysicsInstanceManager_GetPhysicsAssetAddendum
==============
*/
const PhysicsAsset *HavokPhysicsInstanceManager_GetPhysicsAssetAddendum(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  __int64 v2; 
  __int64 v5; 

  v2 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 582, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 583, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 584, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].physicsAssetAddendum;
}

/*
==============
HavokPhysicsInstanceManager_GetXModel
==============
*/
const XModel *HavokPhysicsInstanceManager_GetXModel(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  __int64 v2; 
  __int64 v5; 

  v2 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 635, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 636, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].xModel;
}

/*
==============
HavokPhysicsInstanceManager_Init
==============
*/
void HavokPhysicsInstanceManager_Init(HavokPhysicsInstanceManager *manager, unsigned int capacity)
{
  __int64 v2; 
  hkMemoryRouter *Value; 
  hkMemoryRouter *v5; 
  unsigned int i; 
  __int64 v7; 
  HavokPhysicsInstance *v8; 
  hkArray<hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>,hkContainerHeapAllocator> *p_constraints; 

  v2 = capacity;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 48, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager", -2i64, 0i64, 0x8000000000000000ui64, 0i64, 0x8000000000000000ui64) )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 49, ASSERT_TYPE_ASSERT, "(capacity > 0)", (const char *)&queryFormat, "capacity > 0") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  manager->buffer = (HavokPhysicsInstance *)Value->m_heap->blockAlloc(Value->m_heap, (unsigned int)(80 * v2));
  manager->capacity = v2;
  manager->destroyedInstances = -1;
  manager->freeInstances = 0;
  manager->numFreeInstances = v2;
  *(_QWORD *)&manager->numAllocatedInstances = 0i64;
  manager->peakInstanceId = -1;
  v5 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v5 )
    v5 = hkMemoryRouter::s_fallbackRouter;
  manager->addToWorldPendingList = (int *)v5->m_heap->blockAlloc(v5->m_heap, (unsigned int)(4 * v2));
  manager->numAddToWorldPendingEntries = 0;
  memset_0(manager->buffer, 0, 80 * v2);
  for ( i = 0; i < manager->capacity; manager->buffer[v7].addToWorldPending = 0 )
  {
    v7 = i;
    v8 = &manager->buffer[v7];
    hkMemHeapAllocator();
    v8->bodies.m_size = 0;
    p_constraints = &manager->buffer[v7].constraints;
    hkMemHeapAllocator();
    p_constraints->m_size = 0;
    manager->buffer[v7].nextInstanceId = ++i;
    manager->buffer[v7].physicsAsset = NULL;
    manager->buffer[v7].physicsAssetAddendum = NULL;
    manager->buffer[v7].detailModel = NULL;
    manager->buffer[v7].xModel = NULL;
    manager->buffer[v7].addedToWorld = 0;
  }
  manager->buffer[i - 1].nextInstanceId = -1;
  manager->debugEditOwnership = 0;
  hkMemHeapAllocator();
  hkMemHeapAllocator();
}

/*
==============
HavokPhysicsInstanceManager_IsAddedToWorld
==============
*/
char HavokPhysicsInstanceManager_IsAddedToWorld(const HavokPhysicsInstanceManager *manager, unsigned int instanceId, bool checkPending)
{
  __int64 v3; 
  HavokPhysicsInstance *v6; 
  char result; 
  __int64 v8; 

  v3 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 806, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 807, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 808, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  v6 = &manager->buffer[v3];
  result = v6->addedToWorld;
  if ( checkPending && (result || v6->addToWorldPending) )
    return 1;
  return result;
}

/*
==============
HavokPhysicsInstanceManager_IsFull
==============
*/
bool HavokPhysicsInstanceManager_IsFull(HavokPhysicsInstanceManager *manager)
{
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 658, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return manager->freeInstances == -1;
}

/*
==============
HavokPhysicsInstanceManager_IsInstanceInUse
==============
*/
_BOOL8 HavokPhysicsInstanceManager_IsInstanceInUse(const HavokPhysicsInstanceManager *manager, unsigned int id)
{
  __int64 v2; 
  __int64 v5; 

  v2 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 676, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].inUse;
}

/*
==============
HavokPhysicsInstanceManager_Load
==============
*/
void HavokPhysicsInstanceManager_Load(SaveGame *save, HavokPhysicsInstanceManager *manager)
{
  __int64 v4; 
  MemoryFile *p_memFile; 
  unsigned int p; 
  bool v7; 
  bool v8; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 328, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 329, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 330, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( manager->numAllocatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 333, ASSERT_TYPE_ASSERT, "(manager->numAllocatedInstances == 0)", (const char *)&queryFormat, "manager->numAllocatedInstances == 0") )
    __debugbreak();
  v4 = 0i64;
  p_memFile = &save->memFile;
  for ( manager->numAddToWorldPendingEntries = 0; (unsigned int)v4 < manager->capacity; v4 = (unsigned int)(v4 + 1) )
  {
    MemFile_ReadData(p_memFile, 4ui64, &manager->buffer[v4].nextInstanceId);
    MemFile_ReadData(p_memFile, 1ui64, &p);
    manager->buffer[v4].addedToWorld = p;
    MemFile_ReadData(p_memFile, 1ui64, &v7);
    manager->buffer[v4].addToWorldPending = v7;
    MemFile_ReadData(p_memFile, 1ui64, &v8);
    manager->buffer[v4].inUse = v8;
    if ( manager->buffer[v4].addToWorldPending )
      manager->addToWorldPendingList[manager->numAddToWorldPendingEntries++] = v4;
  }
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->destroyedInstances = p;
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->freeInstances = p;
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->numFreeInstances = p;
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->numAllocatedInstances = p;
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->numDestroyedInstances = p;
  MemFile_ReadData(p_memFile, 4ui64, &p);
  manager->peakInstanceId = p;
}

/*
==============
HavokPhysicsInstanceManager_Load
==============
*/
void HavokPhysicsInstanceManager_Load(SaveGame *save, HavokPhysicsInstanceManager *manager, unsigned int instanceId, const PhysicsAsset *physicsAsset, const PhysicsAsset *physicsAssetAddendum, const XModel *detailModel, const XModel *xModel)
{
  __int64 v7; 
  __int64 v10; 
  __int64 v11; 

  v7 = instanceId;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 374, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 375, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 376, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( (_DWORD)v7 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 377, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v7 >= manager->capacity )
  {
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v11, manager->capacity) )
      __debugbreak();
  }
  v10 = v7;
  manager->buffer[v10].physicsAsset = physicsAsset;
  manager->buffer[v10].physicsAssetAddendum = physicsAssetAddendum;
  manager->buffer[v10].detailModel = detailModel;
  manager->buffer[v10].xModel = xModel;
}

/*
==============
HavokPhysicsInstanceManager_PropagateAddedFlags
==============
*/
void HavokPhysicsInstanceManager_PropagateAddedFlags(HavokPhysicsInstanceManager *manager)
{
  unsigned int i; 
  __int64 v3; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 782, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  for ( i = 0; i < manager->numAddToWorldPendingEntries; ++i )
  {
    v3 = manager->addToWorldPendingList[i];
    if ( manager->buffer[v3].addToWorldPending )
    {
      manager->buffer[v3].addedToWorld = 1;
      manager->buffer[v3].addToWorldPending = 0;
    }
  }
  manager->numAddToWorldPendingEntries = 0;
}

/*
==============
HavokPhysicsInstanceManager_RemoveConstraint
==============
*/
void HavokPhysicsInstanceManager_RemoveConstraint(HavokPhysicsInstanceManager *manager, unsigned int instanceId, int index)
{
  __int64 v3; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  HavokPhysicsInstance *buffer; 
  int v8; 
  __int64 v9; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *v10; 
  __int64 v11; 

  v3 = index;
  v5 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 740, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v5 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 741, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v5 >= manager->capacity )
  {
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 742, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v11, manager->capacity) )
      __debugbreak();
  }
  v6 = v5;
  if ( (int)v3 >= manager->buffer[v6].constraints.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 743, ASSERT_TYPE_ASSERT, "(index < manager->buffer[instanceId].constraints.getSize())", (const char *)&queryFormat, "index < manager->buffer[instanceId].constraints.getSize()") )
    __debugbreak();
  buffer = manager->buffer;
  v8 = 0;
  v9 = 4i64 * (--buffer[v6].constraints.m_size - (int)v3);
  v10 = &buffer[v6].constraints.m_data[v3];
  if ( v9 > 0 )
  {
    do
    {
      v8 += 4;
      v10->m_value = v10[1].m_value;
      ++v10;
    }
    while ( v8 < v9 );
  }
}

/*
==============
HavokPhysicsInstanceManager_SetAddedToWorld
==============
*/
void HavokPhysicsInstanceManager_SetAddedToWorld(Physics_WorldId worldId, HavokPhysicsInstanceManager *manager, unsigned int instanceId, bool added, bool pending)
{
  __int64 v5; 
  __int64 v9; 
  __int64 i; 
  __int64 v11; 
  __int64 v12; 

  v5 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 754, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v5 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 755, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v5 >= manager->capacity )
  {
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 756, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( manager->capacity )", "instanceId doesn't index manager->capacity\n\t%i not in [0, %i)", v12, manager->capacity) )
      __debugbreak();
  }
  v9 = v5;
  manager->buffer[v9].addedToWorld = added;
  manager->buffer[v9].addToWorldPending = pending;
  if ( pending )
  {
    if ( manager->numAddToWorldPendingEntries >= manager->capacity )
    {
      Physics_LockWorld(worldId);
      Physics_AddPendingBodies(worldId);
      for ( i = 0i64; (unsigned int)i < manager->numAddToWorldPendingEntries; i = (unsigned int)(i + 1) )
      {
        v11 = manager->addToWorldPendingList[i];
        if ( manager->buffer[v11].addToWorldPending )
        {
          manager->buffer[v11].addedToWorld = 1;
          manager->buffer[v11].addToWorldPending = 0;
        }
      }
      manager->numAddToWorldPendingEntries = 0;
      Physics_UnlockWorld(worldId);
      if ( manager->numAddToWorldPendingEntries >= manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 771, ASSERT_TYPE_ASSERT, "(manager->numAddToWorldPendingEntries < manager->capacity)", (const char *)&queryFormat, "manager->numAddToWorldPendingEntries < manager->capacity") )
        __debugbreak();
    }
    manager->addToWorldPendingList[manager->numAddToWorldPendingEntries++] = v5;
  }
}

/*
==============
HavokPhysicsInstanceManager_SetDetailModel
==============
*/
void HavokPhysicsInstanceManager_SetDetailModel(HavokPhysicsInstanceManager *manager, unsigned int id, const XModel *detailModel)
{
  __int64 v3; 
  __int64 v6; 

  v3 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 595, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 596, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 597, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !detailModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 598, ASSERT_TYPE_ASSERT, "(detailModel)", (const char *)&queryFormat, "detailModel") )
    __debugbreak();
  manager->buffer[v3].detailModel = detailModel;
}

/*
==============
HavokPhysicsInstanceManager_SetPhysicsAsset
==============
*/
void HavokPhysicsInstanceManager_SetPhysicsAsset(HavokPhysicsInstanceManager *manager, unsigned int id, const PhysicsAsset *physicsAsset)
{
  __int64 v3; 
  __int64 v6; 

  v3 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 542, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 543, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 544, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 545, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  manager->buffer[v3].physicsAsset = physicsAsset;
}

/*
==============
HavokPhysicsInstanceManager_SetPhysicsAssetAddendum
==============
*/
void HavokPhysicsInstanceManager_SetPhysicsAssetAddendum(HavokPhysicsInstanceManager *manager, unsigned int id, const PhysicsAsset *physicsAsset)
{
  __int64 v3; 
  __int64 v6; 

  v3 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 569, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 570, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  manager->buffer[v3].physicsAssetAddendum = physicsAsset;
}

/*
==============
HavokPhysicsInstanceManager_SetXModel
==============
*/
void HavokPhysicsInstanceManager_SetXModel(HavokPhysicsInstanceManager *manager, unsigned int id, const XModel *xModel)
{
  __int64 v3; 
  __int64 v6; 

  v3 = id;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 622, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 623, ASSERT_TYPE_ASSERT, "(id != 0xFFFFFFFF)", (const char *)&queryFormat, "id != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= manager->capacity )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 624, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( manager->capacity )", "id doesn't index manager->capacity\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  manager->buffer[v3].xModel = xModel;
}

/*
==============
HavokPhysicsInstanceManager_Shutdown
==============
*/
void HavokPhysicsInstanceManager_Shutdown(HavokPhysicsInstanceManager *manager)
{
  signed int v2; 
  __int64 v3; 
  __int64 v4; 
  hkArray<hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>,hkContainerHeapAllocator> *p_constraints; 
  hkMemoryAllocator *v6; 
  int m_capacityAndFlags; 
  HavokPhysicsInstance *v8; 
  hkMemoryAllocator *v9; 
  int v10; 
  hkMemoryRouter *Value; 
  hkMemoryRouter *v12; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 102, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 103, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( manager->numAllocatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 104, ASSERT_TYPE_ASSERT, "(manager->numAllocatedInstances == 0)", (const char *)&queryFormat, "manager->numAllocatedInstances == 0") )
    __debugbreak();
  v2 = manager->capacity - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v2;
    do
    {
      p_constraints = &manager->buffer[v4].constraints;
      v6 = hkMemHeapAllocator();
      m_capacityAndFlags = p_constraints->m_capacityAndFlags;
      p_constraints->m_size = 0;
      if ( m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v6, p_constraints->m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
      p_constraints->m_data = NULL;
      p_constraints->m_capacityAndFlags = 0x80000000;
      v8 = &manager->buffer[v4];
      v9 = hkMemHeapAllocator();
      v10 = v8->bodies.m_capacityAndFlags;
      v8->bodies.m_size = 0;
      if ( v10 >= 0 )
        hkMemoryAllocator::bufFree2(v9, v8->bodies.m_data, 4, v10 & 0x3FFFFFFF);
      v8->bodies.m_data = NULL;
      v8->bodies.m_capacityAndFlags = 0x80000000;
      manager->buffer[v4].physicsAsset = NULL;
      manager->buffer[v4].physicsAssetAddendum = NULL;
      manager->buffer[v4].detailModel = NULL;
      manager->buffer[v4--].xModel = NULL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  Value->m_heap->blockFree(Value->m_heap, manager->addToWorldPendingList, 4 * manager->capacity);
  v12 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v12 )
    v12 = hkMemoryRouter::s_fallbackRouter;
  v12->m_heap->blockFree(v12->m_heap, manager->buffer, 80 * manager->capacity);
  manager->buffer = NULL;
  *(_QWORD *)&manager->capacity = 0i64;
  *(_QWORD *)&manager->freeInstances = 0i64;
  *(_QWORD *)&manager->numAllocatedInstances = 0i64;
  *(_QWORD *)&manager->peakInstanceId = 0i64;
  manager->addToWorldPendingList = NULL;
  *(_QWORD *)&manager->numAddToWorldPendingEntries = 0i64;
}

/*
==============
HavokPhysicsInstanceManager_Write
==============
*/
void HavokPhysicsInstanceManager_Write(MemoryFile *memFile, const HavokPhysicsInstanceManager *manager)
{
  __int64 i; 
  unsigned int p; 
  bool addToWorldPending; 
  bool inUse; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 301, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 302, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.cpp", 303, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < manager->capacity; i = (unsigned int)(i + 1) )
  {
    MemFile_WriteData(memFile, 4ui64, &manager->buffer[i].nextInstanceId);
    LOBYTE(p) = manager->buffer[i].addedToWorld;
    MemFile_WriteData(memFile, 1ui64, &p);
    addToWorldPending = manager->buffer[i].addToWorldPending;
    MemFile_WriteData(memFile, 1ui64, &addToWorldPending);
    inUse = manager->buffer[i].inUse;
    MemFile_WriteData(memFile, 1ui64, &inUse);
  }
  p = manager->destroyedInstances;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = manager->freeInstances;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = manager->numFreeInstances;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = manager->numAllocatedInstances;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = manager->numDestroyedInstances;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = manager->peakInstanceId;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
HavokPhysicsInstanceManager_Write
==============
*/
void HavokPhysicsInstanceManager_Write(MemoryFile *memFile, const HavokPhysicsInstanceManager *manager, unsigned int instanceId)
{
  ;
}

