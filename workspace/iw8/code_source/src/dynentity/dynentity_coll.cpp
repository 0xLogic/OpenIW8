/*
==============
DynEnt_ReplacePhysicsForModelSwap
==============
*/

void __fastcall DynEnt_ReplacePhysicsForModelSwap(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const XModel *baseModel, const PhysicsAsset *physicsAsset, const XModel *detailModel)
{
  ?DynEnt_ReplacePhysicsForModelSwap@@YAXW4LocalClientNum_t@@IPEBUXModel@@PEBUPhysicsAsset@@1@Z(localClientNum, dynEntId, baseModel, physicsAsset, detailModel);
}

/*
==============
DynEnt_GetPhysicsDetailInstance
==============
*/

unsigned int __fastcall DynEnt_GetPhysicsDetailInstance(int dynEntId, DynEntityBasis basis, LocalClientNum_t localClientNum)
{
  return ?DynEnt_GetPhysicsDetailInstance@@YAIHW4DynEntityBasis@@W4LocalClientNum_t@@@Z(dynEntId, basis, localClientNum);
}

/*
==============
DynEnt_SetupPhysics
==============
*/

void __fastcall DynEnt_SetupPhysics(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, const XModel *baseModel, const PhysicsAsset *physicsAsset, int physicsShapeOverride, const XModel *detailModel, const bool useInitialPose, const bool matchPose, const bool forceAddImmediate)
{
  ?DynEnt_SetupPhysics@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@PEBUXModel@@PEBUPhysicsAsset@@H2_N44@Z(localClientNum, dynEntId, basis, baseModel, physicsAsset, physicsShapeOverride, detailModel, useInitialPose, matchPose, forceAddImmediate);
}

/*
==============
DynEnt_GetBasisAndDynEntId
==============
*/

void __fastcall DynEnt_GetBasisAndDynEntId(const int refId, const LocalClientNum_t localClientNum, DynEntityBasis *basisOut, unsigned int *dynEntIdOut)
{
  ?DynEnt_GetBasisAndDynEntId@@YAXHW4LocalClientNum_t@@PEAW4DynEntityBasis@@PEAI@Z(refId, localClientNum, basisOut, dynEntIdOut);
}

/*
==============
DynEnt_ShutdownPhysics
==============
*/

void __fastcall DynEnt_ShutdownPhysics(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool activate)
{
  ?DynEnt_ShutdownPhysics@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@_N@Z(localClientNum, dynEntId, basis, activate);
}

/*
==============
DynEnt_GetPhysicsInstance
==============
*/

unsigned int __fastcall DynEnt_GetPhysicsInstance(int dynEntId, DynEntityBasis basis, LocalClientNum_t localClientNum)
{
  return ?DynEnt_GetPhysicsInstance@@YAIHW4DynEntityBasis@@W4LocalClientNum_t@@@Z(dynEntId, basis, localClientNum);
}

/*
==============
DynEnt_GetBasisAndDynEntClientId
==============
*/

void __fastcall DynEnt_GetBasisAndDynEntClientId(const int refId, DynEntityBasis *basisOut, unsigned __int16 *clientIdOut)
{
  ?DynEnt_GetBasisAndDynEntClientId@@YAXHPEAW4DynEntityBasis@@PEAG@Z(refId, basisOut, clientIdOut);
}

/*
==============
DynEnt_AddToPhysicsSetupList
==============
*/
void DynEnt_AddToPhysicsSetupList(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  __int64 v4; 
  signed __int32 CurrentThreadContext; 
  DynEntityClient *ClientFromClientId; 
  __int64 v8; 
  MapEnts *mapEnts; 
  unsigned __int16 v10; 
  DynEntityClient *v11; 
  __int64 v12; 
  signed __int32 v13; 
  __int64 v14; 

  v4 = localClientNum;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v13 = CurrentThreadContext;
  if ( ((unsigned __int8)&s_dynEntCollListOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_dynEntCollListOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_dynEntCollListOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 90, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, currentCtx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, currentCtx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, clientId, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 96, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( ClientFromClientId->physicsSetupPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 97, ASSERT_TYPE_ASSERT, "(dynEntClient->physicsSetupPrev == 0xFFFF)", (const char *)&queryFormat, "dynEntClient->physicsSetupPrev == DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  if ( ClientFromClientId->physicsSetupNext != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 98, ASSERT_TYPE_ASSERT, "(dynEntClient->physicsSetupNext == 0xFFFF)", (const char *)&queryFormat, "dynEntClient->physicsSetupNext == DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v14 = (unsigned __int8)basis;
  v8 = 2 * ((unsigned __int8)basis + 2 * v4 + 212);
  mapEnts = cm.mapEnts;
  v10 = *(_WORD *)((char *)&cm.mapEnts->name + v8);
  if ( v10 != 0xFFFF )
  {
    v11 = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, v10, basis);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 105, ASSERT_TYPE_ASSERT, "(oldHead)", (const char *)&queryFormat, "oldHead") )
      __debugbreak();
    if ( v11->physicsSetupPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 107, ASSERT_TYPE_ASSERT, "(oldHead->physicsSetupPrev == 0xFFFF)", (const char *)&queryFormat, "oldHead->physicsSetupPrev == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    v11->physicsSetupPrev = clientId;
    ClientFromClientId->physicsSetupNext = v10;
    *(_WORD *)((char *)&cm.mapEnts->name + v8) = clientId;
    mapEnts = cm.mapEnts;
  }
  *(_WORD *)((char *)&mapEnts->name + v8) = clientId;
  v12 = v14 + 2 * v4 + 216;
  if ( *((_WORD *)&cm.mapEnts->name + v12) == 0xFFFF )
    *((_WORD *)&cm.mapEnts->name + v12) = clientId;
  if ( ((unsigned __int64)&s_dynEntCollListOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_dynEntCollListOwnership) )
    __debugbreak();
  if ( v13 != _InterlockedCompareExchange(&s_dynEntCollListOwnership, 28, v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 120, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, INVALID_THREAD_CONTEXT, currentCtx ) == currentCtx)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, INVALID_THREAD_CONTEXT, currentCtx ) == currentCtx") )
    __debugbreak();
}

/*
==============
DynEnt_GetBasisAndDynEntClientId
==============
*/
void DynEnt_GetBasisAndDynEntClientId(const int refId, DynEntityBasis *basisOut, unsigned __int16 *clientIdOut)
{
  if ( !basisOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 678, ASSERT_TYPE_ASSERT, "(basisOut)", (const char *)&queryFormat, "basisOut") )
    __debugbreak();
  if ( !clientIdOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 679, ASSERT_TYPE_ASSERT, "(clientIdOut)", (const char *)&queryFormat, "clientIdOut") )
    __debugbreak();
  *basisOut = Physics_GetRefSubSystem(refId) & 1;
  *clientIdOut = Physics_GetRefId(refId);
}

/*
==============
DynEnt_GetBasisAndDynEntId
==============
*/
void DynEnt_GetBasisAndDynEntId(const int refId, const LocalClientNum_t localClientNum, DynEntityBasis *basisOut, unsigned int *dynEntIdOut)
{
  unsigned __int16 v8; 
  DynEntityClient *ClientFromClientId; 
  unsigned int dynEntDefId; 

  if ( !basisOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 665, ASSERT_TYPE_ASSERT, "(basisOut)", (const char *)&queryFormat, "basisOut") )
    __debugbreak();
  if ( !dynEntIdOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 666, ASSERT_TYPE_ASSERT, "(dynEntIdOut)", (const char *)&queryFormat, "dynEntIdOut") )
    __debugbreak();
  if ( !basisOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 678, ASSERT_TYPE_ASSERT, "(basisOut)", (const char *)&queryFormat, "basisOut") )
    __debugbreak();
  *basisOut = Physics_GetRefSubSystem(refId) & 1;
  v8 = Physics_GetRefId(refId);
  ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, v8, *basisOut);
  if ( ClientFromClientId )
  {
    dynEntDefId = ClientFromClientId->dynEntDefId;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 670, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    dynEntDefId = MEMORY[8];
  }
  *dynEntIdOut = dynEntDefId;
}

/*
==============
DynEnt_GetPhysicsDetailInstance
==============
*/
__int64 DynEnt_GetPhysicsDetailInstance(int dynEntId, DynEntityBasis basis, LocalClientNum_t localClientNum)
{
  DynEntityClient *Client; 

  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 651, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  Client = DynEnt_GetClient(localClientNum, dynEntId, basis);
  if ( Client )
    return Client->physicsSystemDetailId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 655, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  return MEMORY[0x10];
}

/*
==============
DynEnt_GetPhysicsInstance
==============
*/
__int64 DynEnt_GetPhysicsInstance(int dynEntId, DynEntityBasis basis, LocalClientNum_t localClientNum)
{
  DynEntityClient *Client; 

  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 636, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  Client = DynEnt_GetClient(localClientNum, dynEntId, basis);
  if ( Client )
    return Client->physicsSystemId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 640, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  return MEMORY[0xC];
}

/*
==============
DynEnt_RemoveFromPhysicsSetupList
==============
*/
void DynEnt_RemoveFromPhysicsSetupList(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  __int64 v4; 
  signed __int32 CurrentThreadContext; 
  DynEntityClient *ClientFromClientId; 
  unsigned __int16 physicsSetupPrev; 
  unsigned __int16 physicsSetupNext; 
  __int64 v10; 
  DynEntityClient *v11; 
  __int64 v12; 
  DynEntityClient *v13; 

  v4 = localClientNum;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_dynEntCollListOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_dynEntCollListOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_dynEntCollListOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 132, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, currentCtx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, currentCtx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, clientId, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 137, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  physicsSetupPrev = ClientFromClientId->physicsSetupPrev;
  physicsSetupNext = ClientFromClientId->physicsSetupNext;
  v10 = 2 * ((unsigned __int8)basis + 2 * v4 + 212);
  if ( *(_WORD *)((char *)&cm.mapEnts->name + v10) == clientId )
  {
    if ( physicsSetupPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 145, ASSERT_TYPE_ASSERT, "(prev == 0xFFFF)", (const char *)&queryFormat, "prev == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    *(_WORD *)((char *)&cm.mapEnts->name + v10) = physicsSetupNext;
  }
  else
  {
    if ( physicsSetupPrev == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 152, ASSERT_TYPE_ASSERT, "(prev != 0xFFFF)", (const char *)&queryFormat, "prev != DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    v11 = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, physicsSetupPrev, basis);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 154, ASSERT_TYPE_ASSERT, "(prevClient)", (const char *)&queryFormat, "prevClient") )
      __debugbreak();
    v11->physicsSetupNext = ClientFromClientId->physicsSetupNext;
  }
  ClientFromClientId->physicsSetupNext = -1;
  v12 = 2 * ((unsigned __int8)basis + 2 * v4 + 216);
  if ( *(_WORD *)((char *)&cm.mapEnts->name + v12) == clientId )
  {
    if ( physicsSetupNext != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 163, ASSERT_TYPE_ASSERT, "(next == 0xFFFF)", (const char *)&queryFormat, "next == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    *(_WORD *)((char *)&cm.mapEnts->name + v12) = physicsSetupPrev;
  }
  else
  {
    if ( physicsSetupNext == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 170, ASSERT_TYPE_ASSERT, "(next != 0xFFFF)", (const char *)&queryFormat, "next != DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    v13 = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, physicsSetupNext, basis);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 172, ASSERT_TYPE_ASSERT, "(nextClient)", (const char *)&queryFormat, "nextClient") )
      __debugbreak();
    v13->physicsSetupPrev = ClientFromClientId->physicsSetupPrev;
  }
  ClientFromClientId->physicsSetupPrev = -1;
  if ( ((unsigned __int64)&s_dynEntCollListOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_dynEntCollListOwnership) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange(&s_dynEntCollListOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 179, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, INVALID_THREAD_CONTEXT, currentCtx ) == currentCtx)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_dynEntCollListOwnership, INVALID_THREAD_CONTEXT, currentCtx ) == currentCtx") )
    __debugbreak();
}

/*
==============
DynEnt_ReplacePhysicsForModelSwap
==============
*/
void DynEnt_ReplacePhysicsForModelSwap(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const XModel *baseModel, const PhysicsAsset *physicsAsset, const XModel *detailModel)
{
  __int64 v7; 
  DynEntityDef *Def; 
  unsigned __int16 v9; 
  DynEntityClient *ClientFromClientId; 
  DynEntityPose *initialQuat; 
  unsigned int physicsSystemId; 
  PhysicsAsset *InstanceAsset; 
  const XModel *InstanceDetailModel; 
  bool v15; 
  int v16; 
  unsigned __int8 v17; 
  bool v18; 
  const XModel *v19; 
  const XModel *v20; 
  PhysicsAsset *v21; 
  bool *outMakePhysics; 
  Physics_InstantiationForceType val; 
  char v24[12]; 
  DynEntityDef *dynEntDef; 
  __int64 v26; 
  bool v27; 
  int physicsRef; 
  PhysicsAsset *inOutPhysicsAsset; 

  inOutPhysicsAsset = (PhysicsAsset *)physicsAsset;
  v26 = -2i64;
  v7 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_ReplacePhysicsForModelSwap");
  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 531, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  Def = (DynEntityDef *)DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  dynEntDef = Def;
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 534, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(outMakePhysics) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 535, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( dynEntDef->clientId ) ) + 0 ) )", "localClientNum doesn't index dynEntDef->clientId\n\t%i not in [0, %i)", outMakePhysics, 2) )
      __debugbreak();
  }
  v9 = Def->clientId[v7];
  LOWORD(physicsRef) = v9;
  if ( v9 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 537, ASSERT_TYPE_ASSERT, "(clientId != 0xFFFF)", (const char *)&queryFormat, "clientId != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v7, v9, DYNENT_BASIS_MODEL);
  initialQuat = DynEnt_GetPoseFromClientId((LocalClientNum_t)v7, v9, DYNENT_BASIS_MODEL);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 542, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !initialQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 543, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( (ClientFromClientId->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 546, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 1))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_PHYSICS_SETUP") )
    __debugbreak();
  DynEnt_SetupPhysics_GetInputOverrides((const LocalClientNum_t)v7, Def, ClientFromClientId, (const PhysicsAsset **)&inOutPhysicsAsset, &detailModel, &v27, &val);
  physicsSystemId = ClientFromClientId->physicsSystemId;
  if ( physicsSystemId == -1 && ClientFromClientId->physicsSystemDetailId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 555, ASSERT_TYPE_ASSERT, "(hasExistingPhysics || dynEntClient->physicsSystemDetailId == 0xFFFFFFFF)", (const char *)&queryFormat, "hasExistingPhysics || dynEntClient->physicsSystemDetailId == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  InstanceAsset = NULL;
  *(_DWORD *)&v24[8] = 0;
  InstanceDetailModel = NULL;
  v15 = physicsSystemId == -1;
  v16 = 3 * v7;
  *(_QWORD *)v24 = (unsigned int)(3 * v7);
  if ( !v15 )
  {
    InstanceAsset = (PhysicsAsset *)Physics_GetInstanceAsset((Physics_WorldId)(v16 + 3), ClientFromClientId->physicsSystemId);
    *(_QWORD *)&v24[4] = Physics_GetInstanceXModel((Physics_WorldId)(v16 + 3), ClientFromClientId->physicsSystemId);
    InstanceDetailModel = Physics_GetInstanceDetailModel((Physics_WorldId)(v16 + 4), ClientFromClientId->physicsSystemDetailId);
  }
  v17 = truncate_cast<unsigned char,int>(2 * (unsigned __int8)Def->type);
  physicsRef = Physics_MakeRef(Physics_RefSystem_DynEnts, Physics_RelationshipSystem_None, v17, physicsRef);
  if ( InstanceAsset != inOutPhysicsAsset || ClientFromClientId->physicsForceType != truncate_cast<unsigned char,enum Physics_InstantiationForceType>(val) )
  {
    DynEnt_ShutdownPhysics_PhysicsWorld((const LocalClientNum_t)v7, ClientFromClientId, initialQuat, 1);
    v18 = v27;
    if ( v27 )
      DynEnt_SetupPhysics_PhysicsWorld((const LocalClientNum_t)v7, dynEntDef, ClientFromClientId, initialQuat, baseModel, inOutPhysicsAsset, -1, physicsRef, val, &initialQuat->posePart0.origin, &initialQuat->posePart0.quat, 0, 0);
    else
      ClientFromClientId->flags &= ~0x4000u;
    goto LABEL_36;
  }
  v18 = v27;
  v19 = *(const XModel **)&v24[4];
  if ( v27 && baseModel != *(const XModel **)&v24[4] )
  {
    Physics_SetInstanceXModel((const Physics_WorldId)(v16 + 3), ClientFromClientId->physicsSystemId, baseModel);
LABEL_36:
    v19 = *(const XModel **)&v24[4];
  }
  v20 = detailModel;
  if ( detailModel )
  {
    if ( InstanceDetailModel && Physics_AreDetailModelsInterchangeable(InstanceDetailModel, detailModel) )
    {
      if ( v20 != InstanceDetailModel )
      {
        Physics_SetInstanceDetailModel((const Physics_WorldId)(3 * v7 + 4), ClientFromClientId->physicsSystemDetailId, v20);
        DynEnt_SetupDetailMap((const LocalClientNum_t)v7, (Physics_WorldId)(3 * v7 + 4), ClientFromClientId->physicsSystemDetailId, v20, initialQuat);
        --InstanceDetailModel->physicsUsageCounter.dynEnt;
        ++v20->physicsUsageCounter.dynEnt;
      }
      goto LABEL_50;
    }
    v21 = inOutPhysicsAsset;
    goto LABEL_48;
  }
  v15 = InstanceDetailModel == NULL;
  v21 = inOutPhysicsAsset;
  if ( !v15 || inOutPhysicsAsset != InstanceAsset )
  {
LABEL_48:
    DynEnt_ShutdownPhysics_DetailWorld((const LocalClientNum_t)v7, ClientFromClientId);
    if ( v18 )
      DynEnt_SetupPhysics_DetailWorld((const LocalClientNum_t)v7, dynEntDef, ClientFromClientId, initialQuat, baseModel, v21, -1, v20, physicsRef, &initialQuat->posePart0.origin, &initialQuat->posePart0.quat);
    goto LABEL_50;
  }
  if ( v18 && baseModel != v19 )
    Physics_SetInstanceXModel((const Physics_WorldId)(*(_DWORD *)v24 + 4), ClientFromClientId->physicsSystemDetailId, baseModel);
LABEL_50:
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_SetupDetailMap
==============
*/
void DynEnt_SetupDetailMap(const LocalClientNum_t localClientNum, Physics_WorldId worldId, const unsigned int instanceId, const XModel *detailModel, DynEntityPose *dynEntPose)
{
  __int64 v6; 
  unsigned int NumRigidBodys; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 numParts; 
  unsigned __int8 *p_detailBodyToBoneMap0; 
  unsigned int posePart1FirstIndex; 
  const char *RigidBodyName; 
  scr_string_t String; 
  __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int8 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int8 index[4]; 
  int v26; 
  __int64 v27; 
  hknpBodyId result; 
  char dest[256]; 

  v6 = localClientNum;
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, instanceId);
  v10 = truncate_cast<unsigned char,unsigned int>(NumRigidBodys);
  if ( v10 <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 65, ASSERT_TYPE_ASSERT, "(numBodies > 1)", (const char *)&queryFormat, "numBodies > 1") )
    __debugbreak();
  v11 = 0;
  v26 = v10 - 1;
  if ( v26 > 0 )
  {
    v12 = v6;
    v27 = v6;
    v13 = 0;
    while ( 1 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v24) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, worldId, instanceId, v13)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 71, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 276, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      numParts = dynEntPose->numParts;
      if ( v11 >= numParts )
      {
        LODWORD(v24) = numParts;
        LODWORD(v23) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 277, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( v11 )
      {
        posePart1FirstIndex = dynEntPose->posePart1FirstIndex;
        if ( posePart1FirstIndex + v13 - 1 >= g_dynEntExtraPosePartsAllocCount[v12] )
        {
          LODWORD(v24) = g_dynEntExtraPosePartsAllocCount[v12];
          LODWORD(v23) = posePart1FirstIndex + v13 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 283, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        p_detailBodyToBoneMap0 = &g_dynEntPoseExtraDetailBodyToBoneMap[v27][v13 - 1 + dynEntPose->posePart1FirstIndex];
      }
      else
      {
        p_detailBodyToBoneMap0 = &dynEntPose->detailBodyToBoneMap0;
      }
      if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 73, ASSERT_TYPE_ASSERT, "(detailToBodyBoneIdx)", (const char *)&queryFormat, "detailToBodyBoneIdx") )
        __debugbreak();
      RigidBodyName = Physics_GetRigidBodyName(worldId, m_serialAndIndex);
      if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 31, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      Com_sprintf(dest, 0x100ui64, "%s_lod0", RigidBodyName);
      I_strlwr(dest);
      String = SL_FindString(dest);
      if ( !String )
      {
        v20 = -1i64;
        do
          ++v20;
        while ( dest[v20] );
        v21 = v20 - 5;
        if ( v21 >= 0x100 )
        {
          j___report_rangecheckfailure(dest);
          JUMPOUT(0x141FB9909i64);
        }
        dest[v21] = 0;
        String = SL_FindString(dest);
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 47, ASSERT_TYPE_ASSERT, "(scrName != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tCouldn't generate script string for bone %s when searching model %s", "scrName != NULL_SCR_STRING", dest, detailModel->name) )
          __debugbreak();
      }
      index[0] = 0;
      if ( XModelGetBoneIndex(detailModel, String, 0, index) )
      {
        v22 = index[0];
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 52, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tCouldn't find bone %s(or %s) when searching model %s", "success", RigidBodyName, dest, detailModel->name) )
          __debugbreak();
        v22 = -1;
      }
      *p_detailBodyToBoneMap0 = v22;
      if ( v22 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 75, ASSERT_TYPE_ASSERT, "(*detailToBodyBoneIdx != 255)", (const char *)&queryFormat, "*detailToBodyBoneIdx != NO_BONEINDEX") )
        __debugbreak();
      v13 = ++v11;
      if ( v11 >= v26 )
        break;
      v12 = v27;
    }
  }
  dynEntPose->detailBodyToBoneMapCached = 0;
}

/*
==============
DynEnt_SetupPhysics
==============
*/
void DynEnt_SetupPhysics(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, const XModel *baseModel, const PhysicsAsset *physicsAsset, int physicsShapeOverride, const XModel *detailModel, const bool useInitialPose, const bool matchPose, const bool forceAddImmediate)
{
  PhysicsAsset *v12; 
  unsigned __int16 v15; 
  DynEntityClient *ClientFromClientId; 
  unsigned __int8 v30; 
  int physicsRef; 
  bool *outMakePhysics; 
  bool v33; 
  unsigned __int16 v34; 
  LocalClientNum_t localClientNuma; 
  Physics_InstantiationForceType outForceType; 
  PhysicsAsset *inOutPhysicsAsset; 
  XModel *inOutDetailModel; 
  XModel *baseModela; 
  vec3_t initialPos; 
  vec4_t initialQuat; 

  v12 = (PhysicsAsset *)(int)localClientNum;
  inOutPhysicsAsset = (PhysicsAsset *)physicsAsset;
  inOutDetailModel = (XModel *)detailModel;
  baseModela = (XModel *)baseModel;
  localClientNuma = localClientNum;
  Profile_Begin(786);
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)basis, 2) )
    __debugbreak();
  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 369, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  _R15 = DynEnt_GetDef(dynEntId, basis);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 373, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v15 = _R15->clientId[(_QWORD)v12];
  v34 = v15;
  if ( v15 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 375, ASSERT_TYPE_ASSERT, "(clientId != 0xFFFF)", (const char *)&queryFormat, "clientId != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v12, v15, basis);
  _R14 = DynEnt_GetPoseFromClientId((LocalClientNum_t)v12, v15, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 378, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 379, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  DynEnt_SetupPhysics_GetInputOverrides((const LocalClientNum_t)v12, _R15, ClientFromClientId, (const PhysicsAsset **)&inOutPhysicsAsset, (const XModel **)&inOutDetailModel, &v33, &outForceType);
  if ( v33 )
  {
    if ( useInitialPose )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [r15+24h]
        vmovss  xmm4, dword ptr [r15+28h]
        vmovss  xmm3, dword ptr [r15+10h]
        vmovss  xmm2, dword ptr [r15+14h]
        vmovss  xmm1, dword ptr [r15+18h]
        vmovss  xmm0, dword ptr [r15+1Ch]
        vmovaps [rsp+110h+var_50], xmm6
        vmovss  xmm6, dword ptr [r15+20h]
        vmovss  dword ptr [r14+10h], xmm6
        vmovss  dword ptr [r14+14h], xmm5
        vmovss  dword ptr [r14+18h], xmm4
        vmovss  dword ptr [r14], xmm3
        vmovss  dword ptr [r14+4], xmm2
        vmovss  dword ptr [r14+8], xmm1
        vmovss  dword ptr [rbp+3Fh+var_78], xmm6
        vmovaps xmm6, [rsp+110h+var_50]
        vmovss  dword ptr [r14+0Ch], xmm0
        vmovss  dword ptr [rbp+3Fh+var_78+4], xmm5
        vmovss  dword ptr [rbp+3Fh+var_78+8], xmm4
        vmovss  dword ptr [rbp+3Fh+var_68], xmm3
        vmovss  dword ptr [rbp+3Fh+var_68+4], xmm2
        vmovss  dword ptr [rbp+3Fh+var_68+8], xmm1
        vmovss  dword ptr [rbp+3Fh+var_68+0Ch], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+10h]
        vmovss  xmm1, dword ptr [r14+14h]
        vmovss  dword ptr [rbp+3Fh+var_78], xmm0
        vmovss  xmm0, dword ptr [r14+18h]
        vmovss  dword ptr [rbp+3Fh+var_78+4], xmm1
        vmovups xmm1, xmmword ptr [r14]
        vmovss  dword ptr [rbp+3Fh+var_78+8], xmm0
        vmovups xmmword ptr [rbp+3Fh+var_68], xmm1
      }
    }
    v30 = truncate_cast<unsigned char,int>((unsigned __int8)basis | (2 * (unsigned __int8)_R15->type));
    physicsRef = Physics_MakeRef(Physics_RefSystem_DynEnts, Physics_RelationshipSystem_None, v30, v15);
    v12 = inOutPhysicsAsset;
    DynEnt_SetupPhysics_PhysicsWorld(localClientNuma, _R15, ClientFromClientId, _R14, baseModela, inOutPhysicsAsset, physicsShapeOverride, physicsRef, outForceType, &initialPos, &initialQuat, matchPose, forceAddImmediate);
    outMakePhysics = (bool *)v12;
    LODWORD(v12) = localClientNuma;
    DynEnt_SetupPhysics_DetailWorld(localClientNuma, _R15, ClientFromClientId, _R14, baseModela, (const PhysicsAsset *)outMakePhysics, physicsShapeOverride, inOutDetailModel, physicsRef, &initialPos, &initialQuat);
    v15 = v34;
  }
  else
  {
    ClientFromClientId->flags &= ~0x4000u;
  }
  ClientFromClientId->flags |= 2u;
  DynEnt_AddToPhysicsSetupList((LocalClientNum_t)v12, v15, basis);
  Profile_EndInternal(NULL);
}

/*
==============
DynEnt_SetupPhysics_DetailWorld
==============
*/
void DynEnt_SetupPhysics_DetailWorld(const LocalClientNum_t localClientNum, const DynEntityDef *const dynEntDef, DynEntityClient *const dynEntClient, DynEntityPose *const dynEntPose, const XModel *baseModel, const PhysicsAsset *physicsAsset, int physicsShapeOverride, const XModel *detailModel, int physicsRef, const vec3_t *initialPos, const vec4_t *initialQuat)
{
  __int32 v15; 
  unsigned int v16; 
  unsigned int NumRigidBodys; 
  __int64 forQueryOnly; 
  Physics_InstantiateShapeOverride shapeOverride; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_SetupPhysics_DetailWorld");
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 337, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 338, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 339, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 340, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  if ( dynEntClient->physicsSystemDetailId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 341, ASSERT_TYPE_ASSERT, "(dynEntClient->physicsSystemDetailId == 0xFFFFFFFF)", (const char *)&queryFormat, "dynEntClient->physicsSystemDetailId == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( detailModel )
  {
    ++detailModel->physicsUsageCounter.dynEnt;
    v15 = 3 * localClientNum + 4;
    v16 = Physics_InstantiateDetailModel((Physics_WorldId)v15, detailModel, physicsRef, initialPos, initialQuat, 1, !dynEntDef->spawnActive, 0, 0);
    dynEntClient->physicsSystemDetailId = v16;
    DynEnt_SetupDetailMap(localClientNum, (Physics_WorldId)v15, v16, detailModel, dynEntPose);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v15, dynEntClient->physicsSystemDetailId);
    if ( !NumRigidBodys )
    {
      LODWORD(forQueryOnly) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 348, ASSERT_TYPE_ASSERT, "( numDetailBodies ) > ( 0 )", "%s > %s\n\t%u, %u", "numDetailBodies", "0", forQueryOnly, 0i64) )
        __debugbreak();
    }
    dynEntClient->detailBoundBody = Physics_GetRigidBodyID((const Physics_WorldId)v15, dynEntClient->physicsSystemDetailId, NumRigidBodys - 1);
  }
  else
  {
    shapeOverride.customShape = NULL;
    shapeOverride.physicsAssetAddendum = NULL;
    shapeOverride.shapeAddendum = -1;
    shapeOverride.massProperties = NULL;
    *(_WORD *)&shapeOverride.overrideMass = 0;
    shapeOverride.overrideTensor = 0;
    shapeOverride.shapeOverride = physicsShapeOverride;
    dynEntClient->physicsSystemDetailId = Physics_InstantiateAsset((Physics_WorldId)(3 * localClientNum + 4), baseModel, physicsAsset, physicsRef, initialPos, initialQuat, 1, 0, !dynEntDef->spawnActive, &shapeOverride, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeNone, 0);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_SetupPhysics_GetInputOverrides
==============
*/
void DynEnt_SetupPhysics_GetInputOverrides(const LocalClientNum_t localClientNum, const DynEntityDef *const dynEntDef, const DynEntityClient *const dynEntClient, const PhysicsAsset **inOutPhysicsAsset, const XModel **inOutDetailModel, bool *outMakePhysics, Physics_InstantiationForceType *outForceType)
{
  unsigned int runtimeInstanceCount; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 186, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 187, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !outMakePhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 188, ASSERT_TYPE_ASSERT, "(outMakePhysics)", (const char *)&queryFormat, "outMakePhysics") )
    __debugbreak();
  if ( !outForceType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 189, ASSERT_TYPE_ASSERT, "(outForceType)", (const char *)&queryFormat, "outForceType") )
    __debugbreak();
  if ( (dynEntClient->flags & 0x1000) != 0 )
  {
    *inOutPhysicsAsset = NULL;
    *inOutDetailModel = NULL;
  }
  *outForceType = Physics_InstantiationForceTypeNone;
  *outForceType = (dynEntClient->flags & 4) != 0;
  if ( !*inOutPhysicsAsset || dynEntDef->noPhysics )
    goto LABEL_20;
  *outMakePhysics = 1;
  if ( dynEntDef->type != DYNENT_TYPE_SCRIPTABLEINST )
    return;
  ScriptableCommon_AssertCountsInitialized();
  if ( dynEntDef->scriptableMapIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    Com_PrintWarning(14, "DynEnt_SetupPhysics: Called on a dynent for which the scriptable is not initialized (%u)\n", dynEntClient->dynEntDefId);
LABEL_20:
    *outMakePhysics = 0;
    return;
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( dynEntDef->scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(v13) = dynEntDef->scriptableMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "dynEntDef->scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v13, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
      __debugbreak();
  }
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  v12 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount + dynEntDef->scriptableMapIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( v12 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v14) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v13) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !ScriptableCl_HasCollisionSupport(localClientNum, v12) )
    goto LABEL_20;
  if ( !*outMakePhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 227, ASSERT_TYPE_ASSERT, "(*outMakePhysics)", (const char *)&queryFormat, "*outMakePhysics") )
    __debugbreak();
  if ( ScriptableCl_CanCurrentModelMove(localClientNum, v12) )
  {
    if ( !ScriptableCl_CanCurrentModelDynamicallySimulate(localClientNum, v12) )
      *outForceType = Physics_InstantiationForceTypeKeyframed;
  }
  else
  {
    *outForceType = Physics_InstantiationForceTypeStatic;
  }
}

/*
==============
DynEnt_SetupPhysics_PhysicsWorld
==============
*/
void DynEnt_SetupPhysics_PhysicsWorld(const LocalClientNum_t localClientNum, const DynEntityDef *const dynEntDef, DynEntityClient *const dynEntClient, DynEntityPose *const dynEntPose, const XModel *baseModel, const PhysicsAsset *physicsAsset, int physicsShapeOverride, int physicsRef, const Physics_InstantiationForceType forceType, const vec3_t *initialPos, const vec4_t *initialQuat, hknpBodyId matchPose, const bool forceAddImmediate)
{
  const dvar_t *v18; 
  bool tryStartDeactivated; 
  __int32 v20; 
  unsigned int NumRigidBodys; 
  unsigned int v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  unsigned __int8 v25; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  DynEntityPose *v28; 
  unsigned int posePart1FirstIndex; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  hknpBodyId *RigidBodyID; 
  char v34; 
  unsigned int v35; 
  unsigned int v36; 
  const char *v37; 
  const char *v38; 
  unsigned int v39; 
  hknpBodyId *v40; 
  __int64 ignoreSystems; 
  __int64 add; 
  __int64 v43; 
  Physics_InstantiateShapeOverride shapeOverride; 
  char physicsShapeOverridea; 

  _R13 = dynEntClient;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_SetupPhysics_PhysicsWorld");
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 250, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 251, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 252, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 253, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  if ( _R13->physicsSystemId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 256, ASSERT_TYPE_ASSERT, "(dynEntClient->physicsSystemId == 0xFFFFFFFF)", (const char *)&queryFormat, "dynEntClient->physicsSystemId == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  shapeOverride.customShape = NULL;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeAddendum = -1;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  shapeOverride.shapeOverride = physicsShapeOverride;
  if ( physicsAsset->containsDynamicBodies && ((forceType - 1) & 0xFFFFFFFD) != 0 )
  {
    physicsShapeOverridea = 1;
    _R13->flags |= 0x4000u;
  }
  else
  {
    physicsShapeOverridea = 0;
    _R13->flags &= ~0x4000u;
  }
  v18 = DVARBOOL_dynEnt_debugSpawnDepth;
  if ( !DVARBOOL_dynEnt_debugSpawnDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSpawnDepth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    if ( forceType )
    {
      _R13->spawnPenetrationDepth = 0.0;
    }
    else
    {
      *(double *)&_XMM0 = Physics_GetInstantiatiationPenetrationDepthForAsset((Physics_WorldId)(3 * localClientNum + 3), physicsAsset, initialPos, initialQuat, &shapeOverride, 0);
      __asm { vmovss  dword ptr [r13+2Ch], xmm0 }
    }
  }
  tryStartDeactivated = !dynEntPose->cachedActive && !dynEntDef->spawnActive;
  v20 = 3 * localClientNum + 3;
  _R13->physicsSystemId = Physics_InstantiateAsset((Physics_WorldId)v20, baseModel, physicsAsset, physicsRef, initialPos, initialQuat, 1, forceAddImmediate, tryStartDeactivated, &shapeOverride, forceType, Physics_InstantiationFilterTypeNone, 0);
  ++physicsAsset->usageCounter.dynEnt;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v20, _R13->physicsSystemId);
  _R13->numPhysicsBodies = truncate_cast<unsigned char,unsigned int>(NumRigidBodys);
  _R13->singlePhysicsBody = Physics_GetRigidBodyID((const Physics_WorldId)v20, _R13->physicsSystemId, 0);
  _R13->physicsForceType = truncate_cast<unsigned char,enum Physics_InstantiationForceType>(forceType);
  v22 = Physics_GetNumRigidBodys((const Physics_WorldId)v20, _R13->physicsSystemId);
  v23 = truncate_cast<unsigned char,unsigned int>(v22);
  v24 = v23;
  if ( LOBYTE(matchPose.m_serialAndIndex) )
  {
    v25 = 0;
    if ( v23 )
    {
      do
      {
        physicsSystemId = _R13->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v20 > 7 )
        {
          LODWORD(add) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(add) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
        {
          LODWORD(add) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
        {
          LODWORD(add) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&matchPose, (const Physics_WorldId)v20, physicsSystemId, v25)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 298, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( v25 < dynEntPose->numParts )
        {
          if ( v25 )
          {
            posePart1FirstIndex = dynEntPose->posePart1FirstIndex;
            if ( posePart1FirstIndex + v25 - 1 >= g_dynEntExtraPosePartsAllocCount[localClientNum] )
            {
              LODWORD(add) = g_dynEntExtraPosePartsAllocCount[localClientNum];
              LODWORD(ignoreSystems) = posePart1FirstIndex + v25 - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", ignoreSystems, add) )
                __debugbreak();
            }
            v28 = (DynEntityPose *)&g_dynEntPoseExtraParts[localClientNum][dynEntPose->posePart1FirstIndex - 1 + v25];
          }
          else
          {
            v28 = dynEntPose;
          }
          if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 302, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          Physics_WarpRigidBodyTo((const Physics_WorldId)v20, m_serialAndIndex, &v28->posePart0.origin, &v28->posePart0.quat, 0, 0);
        }
        ++v25;
      }
      while ( v25 < v24 );
    }
  }
  v30 = 0;
  v31 = 0;
  if ( v24 )
  {
    do
    {
      v32 = _R13->physicsSystemId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v32 == -1 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&matchPose, (const Physics_WorldId)v20, v32, v31);
      PhysicsSVFX_RegisterBody((Physics_WorldId)v20, RigidBodyID->m_serialAndIndex, localClientNum);
      ++v31;
    }
    while ( v31 < v24 );
    v30 = 0;
  }
  v34 = 0;
  if ( v24 )
  {
    do
    {
      v35 = _R13->physicsSystemId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
          __debugbreak();
      }
      if ( v35 == -1 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
      {
        LODWORD(add) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
          __debugbreak();
      }
      v36 = HavokPhysics_GetRigidBodyID(&matchPose, (const Physics_WorldId)v20, v35, v30)->m_serialAndIndex;
      Physics_GetRigidBodyContents((const Physics_WorldId)v20, v36);
      v34 |= Physics_IsRigidBodyDynamic((Physics_WorldId)v20, v36);
      ++v30;
    }
    while ( v30 < v24 );
  }
  if ( v34 != physicsShapeOverridea )
  {
    v37 = "didn't find any";
    if ( v34 )
      v37 = "found some";
    v38 = "not have";
    if ( physicsShapeOverridea )
      v38 = "have";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 325, ASSERT_TYPE_ASSERT, "(foundDynamicRigidBody == hasDynamicBodies)", "%s\n\tDynent trying to use physicsasset %s expected to %s dynamic bodies, but %s.", "foundDynamicRigidBody == hasDynamicBodies", physicsAsset->name, v38, v37) )
      __debugbreak();
  }
  if ( (_R13->flags & 4) != 0 )
  {
    v39 = _R13->physicsSystemId;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v20 > 7 )
    {
      LODWORD(add) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", add) )
        __debugbreak();
    }
    if ( v39 == -1 )
    {
      LODWORD(add) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", add) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
    {
      LODWORD(add) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", add) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
    {
      LODWORD(add) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", add) )
        __debugbreak();
    }
    v40 = HavokPhysics_GetRigidBodyID(&matchPose, (const Physics_WorldId)v20, v39, 0);
    if ( !Physics_IsRigidBodyKeyframed((Physics_WorldId)v20, v40->m_serialAndIndex) )
    {
      LODWORD(v43) = _R13->dynEntDefId;
      LODWORD(add) = (unsigned __int8)dynEntDef->basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 328, ASSERT_TYPE_ASSERT, "(((dynEntClient->flags & (1 << 2)) == 0) || Physics_IsRigidBodyKeyframed( Physics_GetClientAuthoritativeWorldId( localClientNum ), Physics_GetRigidBodyID( Physics_GetClientAuthoritativeWorldId( localClientNum ), dynEntClient->physicsSystemId, 0 ) ))", "%s\n\tLinked DynEnt %i %i using physics asset %s where the first body is not keyframed", "((dynEntClient->flags & DYNENT_CL_LINKEDTOENTITY) == 0) || Physics_IsRigidBodyKeyframed( DYNENT_PHYSICS_WORLD( localClientNum ), Physics_GetRigidBodyID( DYNENT_PHYSICS_WORLD( localClientNum ), dynEntClient->physicsSystemId, 0 ) )", add, v43, physicsAsset->name) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_ShutdownPhysics
==============
*/
void DynEnt_ShutdownPhysics(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool activate)
{
  __int64 v4; 
  const DynEntityDef *Def; 
  unsigned __int16 v9; 
  DynEntityClient *ClientFromClientId; 
  DynEntityPose *PoseFromClientId; 
  __int64 v12; 

  v4 = localClientNum;
  Profile_Begin(787);
  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 497, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v12) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  Def = DynEnt_GetDef(dynEntId, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 501, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v9 = Def->clientId[v4];
  if ( v9 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 503, ASSERT_TYPE_ASSERT, "(clientId != 0xFFFF)", (const char *)&queryFormat, "clientId != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v4, v9, basis);
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v4, v9, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 506, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 507, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  DynEnt_ShutdownPhysics_PhysicsWorld((const LocalClientNum_t)v4, ClientFromClientId, PoseFromClientId, activate);
  DynEnt_ShutdownPhysics_DetailWorld((const LocalClientNum_t)v4, ClientFromClientId);
  DynEnt_RemoveFromPhysicsSetupList((LocalClientNum_t)v4, v9, basis);
  ClientFromClientId->flags &= ~2u;
  Profile_EndInternal(NULL);
}

/*
==============
DynEnt_ShutdownPhysics_DetailWorld
==============
*/
void DynEnt_ShutdownPhysics_DetailWorld(const LocalClientNum_t localClientNum, DynEntityClient *const dynEntClient)
{
  __int32 v4; 
  const XModel *InstanceDetailModel; 

  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 468, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient", -2i64) )
    __debugbreak();
  if ( dynEntClient->physicsSystemDetailId != -1 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_ShutdownPhysics_DetailWorld");
    v4 = 3 * localClientNum + 4;
    InstanceDetailModel = Physics_GetInstanceDetailModel((Physics_WorldId)v4, dynEntClient->physicsSystemDetailId);
    if ( InstanceDetailModel )
      --InstanceDetailModel->physicsUsageCounter.dynEnt;
    Physics_DestroyInstance((Physics_WorldId)v4, dynEntClient->physicsSystemDetailId, 0);
    dynEntClient->physicsSystemDetailId = -1;
    dynEntClient->detailBoundBody = 0xFFFFFF;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DynEnt_ShutdownPhysics_PhysicsWorld
==============
*/
void DynEnt_ShutdownPhysics_PhysicsWorld(const LocalClientNum_t localClientNum, DynEntityClient *const dynEntClient, DynEntityPose *const dynEntPose, const bool activate)
{
  char v4; 
  __int32 v8; 
  int NumRigidBodys; 
  signed int v10; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  const PhysicsAsset *InstanceAsset; 
  __int64 v14; 
  hknpBodyId result; 
  bool v16; 

  v16 = activate;
  v4 = activate;
  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 429, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 430, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( dynEntClient->physicsSystemId != -1 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_ShutdownPhysics_PhysicsWorld");
    v8 = 3 * localClientNum + 3;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, dynEntClient->physicsSystemId);
    dynEntPose->cachedActive = 0;
    v10 = 0;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        physicsSystemId = dynEntClient->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v14) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(v14) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v14) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum + 1) <= 5 )
        {
          LODWORD(v14) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v14) = 3 * localClientNum + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, physicsSystemId, v10)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 445, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        PhysicsSVFX_UnregisterBody((Physics_WorldId)v8, m_serialAndIndex, localClientNum);
        dynEntPose->cachedActive |= Physics_IsRigidBodyActive((Physics_WorldId)v8, m_serialAndIndex);
        ++v10;
      }
      while ( v10 < NumRigidBodys );
      v4 = v16;
    }
    InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v8, dynEntClient->physicsSystemId);
    if ( !InstanceAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_coll.cpp", 455, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
      __debugbreak();
    --InstanceAsset->usageCounter.dynEnt;
    Physics_DestroyInstance((Physics_WorldId)v8, dynEntClient->physicsSystemId, v4);
    dynEntClient->physicsSystemId = -1;
    *(_WORD *)&dynEntClient->numPhysicsBodies = 0;
    dynEntClient->singlePhysicsBody = 0xFFFFFF;
    Sys_ProfEndNamedEvent();
  }
}

