/*
==============
DynEntCL_DeferredAddRemoveCmd
==============
*/

void __fastcall DynEntCL_DeferredAddRemoveCmd(const void *const cmdInfo)
{
  ?DynEntCL_DeferredAddRemoveCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
DynEntCL_AddEntity
==============
*/

void __fastcall DynEntCL_AddEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool addTransients, const bool addPhysicsImmediately, const bool associateScriptables)
{
  ?DynEntCL_AddEntity@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@_N_N3@Z(localClientNum, dynEntId, basis, addTransients, addPhysicsImmediately, associateScriptables);
}

/*
==============
DynEntCL_DynEntityListAboutToRemove
==============
*/

void __fastcall DynEntCL_DynEntityListAboutToRemove(LocalClientNum_t localClientNum, DynEntityListId listId)
{
  ?DynEntCL_DynEntityListAboutToRemove@@YAXW4LocalClientNum_t@@W4DynEntityListId@@@Z(localClientNum, listId);
}

/*
==============
DynEnt_FreeClientMemory
==============
*/

void DynEnt_FreeClientMemory(void)
{
  ?DynEnt_FreeClientMemory@@YAXXZ();
}

/*
==============
DynEntCl_Shutdown
==============
*/

void __fastcall DynEntCl_Shutdown(LocalClientNum_t localClientNum)
{
  ?DynEntCl_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_AddHiddenEntity
==============
*/

void __fastcall DynEntCL_AddHiddenEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  ?DynEntCL_AddHiddenEntity@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@@Z(localClientNum, dynEntId, basis);
}

/*
==============
DynEntCL_DynEntCanActivate
==============
*/

bool __fastcall DynEntCL_DynEntCanActivate(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  return ?DynEntCL_DynEntCanActivate@@YA_NW4LocalClientNum_t@@IW4DynEntityBasis@@@Z(localClientNum, dynEntId, basis);
}

/*
==============
DynEntCL_RemoveActiveEntitiesInList
==============
*/

void __fastcall DynEntCL_RemoveActiveEntitiesInList(const LocalClientNum_t localClientNum, DynEntityListId listId, const bool clearActiveModel)
{
  ?DynEntCL_RemoveActiveEntitiesInList@@YAXW4LocalClientNum_t@@W4DynEntityListId@@_N@Z(localClientNum, listId, clearActiveModel);
}

/*
==============
DynEntCL_IsImmediateDynEntityListSync
==============
*/

bool __fastcall DynEntCL_IsImmediateDynEntityListSync()
{
  return ?DynEntCL_IsImmediateDynEntityListSync@@YA_NXZ();
}

/*
==============
DynEntCL_Active_Iterator::Init
==============
*/

void __fastcall DynEntCL_Active_Iterator::Init(DynEntCL_Active_Iterator *this, LocalClientNum_t localClientNum, DynEntityBasis filterBasis)
{
  ?Init@DynEntCL_Active_Iterator@@QEAAXW4LocalClientNum_t@@W4DynEntityBasis@@@Z(this, localClientNum, filterBasis);
}

/*
==============
DynEntCL_InitEntitiesInList
==============
*/

void __fastcall DynEntCL_InitEntitiesInList(const LocalClientNum_t localClientNum, DynEntityListId listId, bool addNonSpatial, bool *optionalHasNonSpatialOut)
{
  ?DynEntCL_InitEntitiesInList@@YAXW4LocalClientNum_t@@W4DynEntityListId@@_NPEA_N@Z(localClientNum, listId, addNonSpatial, optionalHasNonSpatialOut);
}

/*
==============
DynEntCL_GetLastCameraPos
==============
*/

const vec3_t *__fastcall DynEntCL_GetLastCameraPos(LocalClientNum_t localClientNum)
{
  return ?DynEntCL_GetLastCameraPos@@YAAEBTvec3_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_AddWorkerCmd
==============
*/

void __fastcall DynEntCL_AddWorkerCmd(LocalClientNum_t localClientNum)
{
  ?DynEntCL_AddWorkerCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCl_InitEntities
==============
*/

void __fastcall DynEntCl_InitEntities(LocalClientNum_t localClientNum)
{
  ?DynEntCl_InitEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_RemoveEntity
==============
*/

void __fastcall DynEntCL_RemoveEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool activate, bool disassociateScriptable)
{
  ?DynEntCL_RemoveEntity@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@_N2@Z(localClientNum, dynEntId, basis, activate, disassociateScriptable);
}

/*
==============
DynEntCL_DynEntityListAdded
==============
*/

void __fastcall DynEntCL_DynEntityListAdded(LocalClientNum_t localClientNum, DynEntityListId listId)
{
  ?DynEntCL_DynEntityListAdded@@YAXW4LocalClientNum_t@@W4DynEntityListId@@@Z(localClientNum, listId);
}

/*
==============
DynEnt_AllocateClientMemory
==============
*/

void __fastcall DynEnt_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  ?DynEnt_AllocateClientMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, maxLocalClients);
}

/*
==============
DynEntCL_Unlock
==============
*/

void __fastcall DynEntCL_Unlock(const DynEntityClient *dynEntClient)
{
  ?DynEntCL_Unlock@@YAXPEBUDynEntityClient@@@Z(dynEntClient);
}

/*
==============
DynEntCL_RemoveAllActiveEntities
==============
*/

void __fastcall DynEntCL_RemoveAllActiveEntities(const LocalClientNum_t localClientNum, const bool clearActiveModel)
{
  ?DynEntCL_RemoveAllActiveEntities@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, clearActiveModel);
}

/*
==============
DynEntCL_WaitForAddWorkerCmds
==============
*/

void DynEntCL_WaitForAddWorkerCmds(void)
{
  ?DynEntCL_WaitForAddWorkerCmds@@YAXXZ();
}

/*
==============
DynEntCL_Active_Iterator::Advance
==============
*/

bool __fastcall DynEntCL_Active_Iterator::Advance(DynEntCL_Active_Iterator *this)
{
  return ?Advance@DynEntCL_Active_Iterator@@QEAA_NXZ(this);
}

/*
==============
DynEntCl_IsZoneVisible
==============
*/

bool __fastcall DynEntCl_IsZoneVisible(LocalClientNum_t localClientNum, const unsigned int transientIndex)
{
  return ?DynEntCl_IsZoneVisible@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, transientIndex);
}

/*
==============
DynEntCl_IsAnyClientInitialized
==============
*/

bool __fastcall DynEntCl_IsAnyClientInitialized()
{
  return ?DynEntCl_IsAnyClientInitialized@@YA_NXZ();
}

/*
==============
DynEntCL_ImmediateDynEntityListSyncBegin
==============
*/

void DynEntCL_ImmediateDynEntityListSyncBegin(void)
{
  ?DynEntCL_ImmediateDynEntityListSyncBegin@@YAXXZ();
}

/*
==============
DynEntCL_Lock
==============
*/

void __fastcall DynEntCL_Lock(const DynEntityClient *dynEntClient)
{
  ?DynEntCL_Lock@@YAXPEBUDynEntityClient@@@Z(dynEntClient);
}

/*
==============
DynEntCL_VerifyClientLists
==============
*/

void __fastcall DynEntCL_VerifyClientLists(const LocalClientNum_t localClientNum)
{
  ?DynEntCL_VerifyClientLists@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCl_IsInitialized
==============
*/

bool __fastcall DynEntCl_IsInitialized(LocalClientNum_t localClientNum)
{
  return ?DynEntCl_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_ImmediateDynEntityListSyncEnd
==============
*/

void DynEntCL_ImmediateDynEntityListSyncEnd(void)
{
  ?DynEntCL_ImmediateDynEntityListSyncEnd@@YAXXZ();
}

/*
==============
DynEntCL_RelinkHiddenDynEntsInList
==============
*/

void __fastcall DynEntCL_RelinkHiddenDynEntsInList(const LocalClientNum_t localClientNum, DynEntityListId listId)
{
  ?DynEntCL_RelinkHiddenDynEntsInList@@YAXW4LocalClientNum_t@@W4DynEntityListId@@@Z(localClientNum, listId);
}

/*
==============
DynEntCL_Active_Iterator::Advance
==============
*/
char DynEntCL_Active_Iterator::Advance(DynEntCL_Active_Iterator *this)
{
  unsigned __int16 m_nextIndex; 
  __int64 m_localClientNum; 
  unsigned __int8 m_curBasis; 
  __int64 v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  bool v8; 
  DynEntityClient *m_curNode; 
  __int64 v10; 
  DynEntityBasis v11; 
  int v12; 
  DynEntityListId v13; 
  const DynEntityDef *Def; 
  unsigned __int16 v15; 
  unsigned __int16 m_curIndex; 
  __int64 v18; 
  __int64 v19; 

  if ( this->m_curBasis >= this->m_curBasisIterLimit )
    return 0;
  while ( 1 )
  {
    m_nextIndex = this->m_nextIndex;
    if ( m_nextIndex != 0xFFFF )
      break;
LABEL_23:
    v10 = ++this->m_curBasis;
    if ( (unsigned int)v10 >= this->m_curBasisIterLimit )
      return 0;
    this->m_nextIndex = g_dynEntNoEvictClientHead[this->m_localClientNum][v10];
    this->m_curIndex = -1;
    this->m_curNode = NULL;
  }
  while ( 1 )
  {
    m_localClientNum = this->m_localClientNum;
    m_curBasis = this->m_curBasis;
    this->m_curIndex = m_nextIndex;
    if ( (unsigned int)m_localClientNum >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( m_curBasis >= 2u )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = m_curBasis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v5 = m_curBasis + 2 * m_localClientNum;
    v6 = g_dynEntClientEntsAllocCount[0][v5];
    if ( m_nextIndex >= v6 )
    {
      LODWORD(v19) = v6;
      LODWORD(v18) = m_nextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    v7 = m_nextIndex;
    v8 = &g_dynEntClientLists[0][v5][v7] == NULL;
    this->m_curNode = &g_dynEntClientLists[0][v5][v7];
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1882, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
      __debugbreak();
    if ( (this->m_curNode->flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1883, ASSERT_TYPE_ASSERT, "(m_curNode->flags & (1 << 5))", (const char *)&queryFormat, "m_curNode->flags & DYNENT_CL_NO_EVICT") )
      __debugbreak();
    m_curNode = this->m_curNode;
    m_nextIndex = m_curNode->clientNext;
    this->m_nextIndex = m_nextIndex;
    if ( (m_curNode->flags & 1) != 0 )
      break;
    if ( m_nextIndex == 0xFFFF )
      goto LABEL_23;
  }
  v11 = this->m_curBasis;
  v12 = m_curNode->dynEntDefId & 0x7FFFF;
  v13 = truncate_cast<enum DynEntityListId,unsigned int>(m_curNode->dynEntDefId >> 19);
  Def = DynEnt_GetDef(v13, v12, v11);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1889, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v15 = Def->clientId[this->m_localClientNum];
  m_curIndex = this->m_curIndex;
  if ( v15 != m_curIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1890, ASSERT_TYPE_ASSERT, "( dynEntDef->clientId[m_localClientNum] ) == ( m_curIndex )", "%s == %s\n\t%u, %u", "dynEntDef->clientId[m_localClientNum]", "m_curIndex", v15, m_curIndex) )
    __debugbreak();
  return 1;
}

/*
==============
DynEntCL_AddEntity
==============
*/
void DynEntCL_AddEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool addTransients, const bool addPhysicsImmediately, const bool associateScriptables)
{
  __int64 v6; 
  unsigned __int16 v10; 
  DynEntityClient *v11; 
  unsigned __int16 v12; 
  DynEntityClient *v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  unsigned __int16 v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  const DynEntityDef *Def; 
  const DynEntityProps *EntityProps; 
  unsigned __int8 NumPosePartsFromDef; 
  unsigned __int8 numParts; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  __int64 v30; 
  int v31; 
  DynEnt_ExtraPosePart *v32; 
  unsigned __int16 v33; 
  DynEntityType type; 
  unsigned int scriptableMapIndex; 
  unsigned int runtimeInstanceCount; 
  int HasShadow; 
  bool v38; 
  unsigned __int8 v41; 
  unsigned __int8 v42; 
  int v43; 
  DynEnt_ExtraPosePart *v44; 
  DynEntityType v45; 
  const DynEntityDef *v46; 
  unsigned __int16 v47; 
  const XModel *activeModel; 
  const PhysicsAsset *physicsAsset; 
  const XModel *v50; 
  const cmodel_t *BrushModel; 
  __int64 addAsHidden; 
  XModel *detailModel; 
  __int64 useInitialPose; 
  __int64 matchPose; 
  DynEntityListId v56; 
  DynEntityListId v57; 
  DynEntityListId v58; 
  unsigned int localId; 
  unsigned int val; 
  const DynEntityProps *v61; 
  volatile int *p_locked; 
  unsigned __int16 v63; 
  bool ShouldResetPoseOnAdd; 
  DynEntityListId associateScriptablesa; 

  v6 = localClientNum;
  Profile_Begin(784);
  localId = dynEntId & 0x7FFFF;
  val = dynEntId >> 19;
  v56 = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
  _RSI = (DynEntityDef *)DynEnt_GetDef(v56, dynEntId & 0x7FFFF, basis);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 485, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v10 = _RSI->clientId[v6];
  v63 = v10;
  ShouldResetPoseOnAdd = DynEntCL_ShouldResetPoseOnAdd((LocalClientNum_t)v6, _RSI);
  v11 = DynEntCL_AddEntity_SetupClient((const LocalClientNum_t)v6, dynEntId, basis, _RSI, v10 == 0xFFFF, 0);
  v12 = _RSI->clientId[v6];
  v13 = v11;
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(addAsHidden) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", addAsHidden, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(detailModel) = 2;
    LODWORD(addAsHidden) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", addAsHidden, detailModel) )
      __debugbreak();
  }
  v14 = (unsigned __int8)basis + 2 * v6;
  v15 = g_dynEntClientEntsAllocCount[0][v14];
  if ( v12 >= v15 )
  {
    LODWORD(detailModel) = v15;
    LODWORD(addAsHidden) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", addAsHidden, detailModel) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v16 = v12;
  if ( &g_dynEntClientLists[0][v14][v16] != v13 )
  {
    if ( (unsigned int)v6 >= 2 )
    {
      LODWORD(detailModel) = 2;
      LODWORD(addAsHidden) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", addAsHidden, detailModel) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(detailModel) = 2;
      LODWORD(addAsHidden) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", addAsHidden, detailModel) )
        __debugbreak();
    }
    v17 = g_dynEntClientEntsAllocCount[0][v14];
    if ( v12 >= v17 )
    {
      LODWORD(detailModel) = v17;
      LODWORD(addAsHidden) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", addAsHidden, detailModel) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 492, ASSERT_TYPE_ASSERT, "( DynEnt_GetClientFromClientId( localClientNum, clientId, basis ) ) == ( dynEntClient )", "%s == %s\n\t%p, %p", "DynEnt_GetClientFromClientId( localClientNum, clientId, basis )", "dynEntClient", &g_dynEntClientLists[0][v14][v16], v13) )
      __debugbreak();
  }
  v18 = dynEntId;
  if ( v13->dynEntDefId != dynEntId )
  {
    LODWORD(matchPose) = dynEntId;
    LODWORD(useInitialPose) = v13->dynEntDefId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 493, ASSERT_TYPE_ASSERT, "( dynEntClient->dynEntDefId ) == ( dynEntId )", "%s == %s\n\t%u, %u", "dynEntClient->dynEntDefId", "dynEntId", useInitialPose, matchPose) )
      __debugbreak();
  }
  v19 = v13->dynEntDefId & 0x7FFFF;
  v57 = truncate_cast<enum DynEntityListId,unsigned int>(v13->dynEntDefId >> 19);
  if ( _RSI != DynEnt_GetDef(v57, v19, basis) )
  {
    v20 = v13->dynEntDefId & 0x7FFFF;
    v58 = truncate_cast<enum DynEntityListId,unsigned int>(v13->dynEntDefId >> 19);
    Def = DynEnt_GetDef(v58, v20, basis);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 494, ASSERT_TYPE_ASSERT, "( dynEntDef ) == ( DynEnt_GetDef( dynEntClient->dynEntDefId, basis ) )", "%s == %s\n\t%p, %p", "dynEntDef", "DynEnt_GetDef( dynEntClient->dynEntDefId, basis )", _RSI, Def) )
      __debugbreak();
  }
  _RBX = DynEnt_GetPoseFromClientId((LocalClientNum_t)v6, v12, basis);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 497, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  p_locked = &v13->locked;
  Sys_WaitInterlockedCompareExchange(&v13->locked, 1, 0);
  EntityProps = DynEnt_GetEntityProps((const DynEntityType)_RSI->type);
  v61 = EntityProps;
  if ( v63 == 0xFFFF )
  {
    *(_DWORD *)&v13->physicsSetupNext = -1;
    *(_QWORD *)&v13->physicsSystemId = -1i64;
    memset_0(_RBX, 0, sizeof(DynEntityPose));
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+10h]
      vmovups xmmword ptr [rbx+3Ch], xmm0
      vmovsd  xmm1, qword ptr [rsi+20h]
      vmovsd  qword ptr [rbx+4Ch], xmm1
    }
    _RBX->pose.origin.v[2] = _RSI->initialPose.origin.v[2];
    NumPosePartsFromDef = DynEnt_GetNumPosePartsFromDef(dynEntId, basis);
    _RBX->numParts = NumPosePartsFromDef;
    if ( NumPosePartsFromDef )
    {
      _RBX->posePart0.origin.v[0] = _RBX->pose.origin.v[0];
      _RBX->posePart0.origin.v[1] = _RBX->pose.origin.v[1];
      _RBX->posePart0.origin.v[2] = _RBX->pose.origin.v[2];
      _RBX->posePart0.quat.v[0] = _RBX->pose.quat.v[0];
      _RBX->posePart0.quat.v[1] = _RBX->pose.quat.v[1];
      _RBX->posePart0.quat.v[2] = _RBX->pose.quat.v[2];
      _RBX->posePart0.quat.v[3] = _RBX->pose.quat.v[3];
      numParts = _RBX->numParts;
      if ( numParts > 1u )
      {
        v28 = numParts - 1;
        if ( g_dynEntPoseExtraPosePartsNextFree[v6] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 528, ASSERT_TYPE_ASSERT, "(g_dynEntPoseExtraPosePartsNextFree[localClientNum] != DYNENT_EXTRA_POSE_PART_INVALID_INDEX)", (const char *)&queryFormat, "g_dynEntPoseExtraPosePartsNextFree[localClientNum] != DYNENT_EXTRA_POSE_PART_INVALID_INDEX") )
          __debugbreak();
        if ( g_dynEntPoseExtraPosePartsNextFree[v6] >= g_dynEntExtraPosePartsAllocCount[v6] )
        {
          LODWORD(detailModel) = g_dynEntExtraPosePartsAllocCount[v6];
          LODWORD(addAsHidden) = g_dynEntPoseExtraPosePartsNextFree[v6];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( g_dynEntPoseExtraPosePartsNextFree[localClientNum] ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "g_dynEntPoseExtraPosePartsNextFree[localClientNum] doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", addAsHidden, detailModel) )
            __debugbreak();
        }
        if ( basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 532, ASSERT_TYPE_ASSERT, "(basis == DYNENT_BASIS_MODEL)", (const char *)&queryFormat, "basis == DYNENT_BASIS_MODEL") )
          __debugbreak();
        if ( v28 > g_dynEntPoseExtraPosePartsStride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 534, ASSERT_TYPE_ASSERT, "(numExtraParts <= g_dynEntPoseExtraPosePartsStride)", (const char *)&queryFormat, "numExtraParts <= g_dynEntPoseExtraPosePartsStride") )
          __debugbreak();
        v29 = 0;
        v30 = g_dynEntPoseExtraPosePartsNextFree[v6];
        _RBX->posePart1FirstIndex = v30;
        for ( g_dynEntPoseExtraPosePartsNextFree[v6] = g_dynEntPoseExtraParts[v6][v30].nextFreeIndex; v29 < v28; v32->posePart.quat.v[3] = _RBX->pose.quat.v[3] )
        {
          v31 = v29++;
          v32 = &g_dynEntPoseExtraParts[v6][_RBX->posePart1FirstIndex + v31];
          v32->posePart.origin.v[0] = _RBX->pose.origin.v[0];
          v32->posePart.origin.v[1] = _RBX->pose.origin.v[1];
          v32->posePart.origin.v[2] = _RBX->pose.origin.v[2];
          v32->nextFreeIndex = LODWORD(_RBX->pose.quat.v[0]);
          v32->posePart.quat.v[1] = _RBX->pose.quat.v[1];
          v32->posePart.quat.v[2] = _RBX->pose.quat.v[2];
        }
      }
      EntityProps = v61;
    }
  }
  else if ( ShouldResetPoseOnAdd )
  {
    v38 = _RBX->numParts == 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+10h]
      vmovups xmmword ptr [rbx+3Ch], xmm0
      vmovsd  xmm1, qword ptr [rsi+20h]
      vmovsd  qword ptr [rbx+4Ch], xmm1
    }
    _RBX->pose.origin.v[2] = _RSI->initialPose.origin.v[2];
    if ( !v38 )
    {
      v41 = 0;
      _RBX->posePart0.origin.v[0] = _RBX->pose.origin.v[0];
      _RBX->posePart0.origin.v[1] = _RBX->pose.origin.v[1];
      _RBX->posePart0.origin.v[2] = _RBX->pose.origin.v[2];
      _RBX->posePart0.quat.v[0] = _RBX->pose.quat.v[0];
      _RBX->posePart0.quat.v[1] = _RBX->pose.quat.v[1];
      _RBX->posePart0.quat.v[2] = _RBX->pose.quat.v[2];
      _RBX->posePart0.quat.v[3] = _RBX->pose.quat.v[3];
      v42 = _RBX->numParts - 1;
      if ( _RBX->numParts != 1 )
      {
        do
        {
          v43 = v41++;
          v44 = &g_dynEntPoseExtraParts[v6][_RBX->posePart1FirstIndex + v43];
          v44->posePart.origin.v[0] = _RBX->pose.origin.v[0];
          v44->posePart.origin.v[1] = _RBX->pose.origin.v[1];
          v44->posePart.origin.v[2] = _RBX->pose.origin.v[2];
          v44->nextFreeIndex = LODWORD(_RBX->pose.quat.v[0]);
          v44->posePart.quat.v[1] = _RBX->pose.quat.v[1];
          v44->posePart.quat.v[2] = _RBX->pose.quat.v[2];
          v44->posePart.quat.v[3] = _RBX->pose.quat.v[3];
        }
        while ( v41 < v42 );
        v18 = dynEntId;
      }
    }
  }
  *(_QWORD *)&_RBX->lastGpuLightGridRequest.lgvFrame = -1i64;
  *(_QWORD *)&_RBX->lastGpuLightGridRequest.lgvNumProbes = 0i64;
  if ( (v13->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 567, ASSERT_TYPE_ASSERT, "(!(dynEntClient->flags & (1 << 0)))", (const char *)&queryFormat, "!(dynEntClient->flags & DYNENT_CL_ACTIVE)") )
    __debugbreak();
  v33 = v63;
  v13->flags = 32;
  if ( v63 == 0xFFFF )
  {
    v13->activeModel = _RSI->baseModel;
    if ( (_RSI->collisionFlags & 2) != 0 )
      v13->flags = 16416;
  }
  *(_QWORD *)&v13->physicsSystemId = -1i64;
  v13->numPhysicsBodies = 0;
  v13->singlePhysicsBody = 0xFFFFFF;
  v13->detailBoundBody = 0xFFFFFF;
  if ( !DynEntDef_IsSpatial(_RSI) )
    _RSI->clientActiveMask |= 1 << v6;
  if ( associateScriptables )
  {
    type = _RSI->type;
    if ( type == DYNENT_TYPE_SCRIPTABLEINST )
    {
      ScriptableCommon_AssertCountsInitialized();
      scriptableMapIndex = _RSI->scriptableMapIndex;
      if ( scriptableMapIndex < g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCl_AssociateDynEntInstance((const LocalClientNum_t)v6, v18, scriptableMapIndex);
        ScriptableCommon_AssertCountsInitialized();
        runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
          __debugbreak();
        HasShadow = ScriptableCl_HasShadow(_RSI->scriptableMapIndex + runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount);
        v33 = v63;
        if ( !HasShadow )
          v13->flags |= 8u;
      }
    }
    else if ( type == DYNENT_TYPE_SCRIPTABLEPHYSICS )
    {
      ScriptableCl_AssociateDynEntPhysics((const LocalClientNum_t)v6, v18, _RSI->scriptableMapIndex, _RSI->scriptableSubIndex);
    }
  }
  if ( EntityProps->linked )
  {
    if ( !_RSI->linkTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 617, ASSERT_TYPE_ASSERT, "(dynEntDef->linkTo)", (const char *)&queryFormat, "dynEntDef->linkTo") )
      __debugbreak();
    v13->flags |= 4u;
  }
  v45 = _RSI->type;
  if ( v45 == DYNENT_TYPE_CLUTTER_NOSHADOW )
  {
    v13->flags |= 8u;
    v45 = _RSI->type;
  }
  if ( v45 == DYNENT_TYPE_LINKED_NOSHADOW )
    v13->flags |= 8u;
  if ( _RSI->distantShadows )
    v13->flags |= 0x200u;
  if ( _RSI->noSpotShadows )
    v13->flags |= 0x400u;
  FX_InitDynEntMarks(v13);
  if ( (v33 == 0xFFFF || (associateScriptablesa = truncate_cast<enum DynEntityListId,unsigned int>(val), v46 = DynEnt_GetDef(associateScriptablesa, localId, basis), !DynEntDef_IsSpatial(v46))) && EntityProps->initInactive || _RSI->transientIndexStored && (_RSI->isTransient = 1, v13->flags |= 0x10u, !addTransients) )
  {
    Profile_EndInternal(NULL);
    DynEntCL_Unlock(v13);
    return;
  }
  v47 = v13->flags | 0x41;
  v13->flags = v47;
  if ( basis )
  {
    if ( basis != DYNENT_BASIS_BRUSH )
    {
      LODWORD(addAsHidden) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 696, ASSERT_TYPE_ASSERT, "( ( basis == DYNENT_BASIS_BRUSH ) )", "( basis ) = %i", addAsHidden) )
        __debugbreak();
    }
    if ( _RSI->isTransient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 697, ASSERT_TYPE_ASSERT, "(!dynEntDef->isTransient)", (const char *)&queryFormat, "!dynEntDef->isTransient") )
      __debugbreak();
    if ( (v13->flags & 2) == 0 )
    {
      BrushModel = CM_GetBrushModel(_RSI->brushModel);
      if ( !BrushModel->physicsAsset )
      {
        LODWORD(detailModel) = _RSI->brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 705, ASSERT_TYPE_ASSERT, "(cmodel->physicsAsset)", "%s\n\tDynEnt: Missing Physics asset for brush %i.", "cmodel->physicsAsset", detailModel) )
          __debugbreak();
      }
      if ( BrushModel->physicsShapeOverrideIdx == 0xFFFF )
      {
        LODWORD(detailModel) = _RSI->brushModel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 706, ASSERT_TYPE_ASSERT, "(cmodel->physicsShapeOverrideIdx != static_cast<ushort>( -1 ))", "%s\n\tDynEnt: No Physics shape override for brush %i.", "cmodel->physicsShapeOverrideIdx != static_cast<ushort>( PHYSICSSHAPE_OVERRIDEID_INVALID )", detailModel) )
          __debugbreak();
      }
      DynEnt_SetupPhysics((LocalClientNum_t)v6, v18, DYNENT_BASIS_BRUSH, NULL, BrushModel->physicsAsset, BrushModel->physicsShapeOverrideIdx, NULL, ShouldResetPoseOnAdd, !ShouldResetPoseOnAdd, addPhysicsImmediately);
    }
    DynEnt_LinkBrush((LocalClientNum_t)v6, v18);
    goto LABEL_124;
  }
  activeModel = v13->activeModel;
  if ( (v47 & 2) == 0 )
  {
    if ( activeModel )
    {
      physicsAsset = activeModel->physicsAsset;
      if ( activeModel->detailCollision )
      {
        v50 = v13->activeModel;
LABEL_106:
        DynEnt_SetupPhysics((LocalClientNum_t)v6, v18, DYNENT_BASIS_MODEL, activeModel, physicsAsset, -1, v50, ShouldResetPoseOnAdd, !ShouldResetPoseOnAdd, addPhysicsImmediately);
        goto LABEL_107;
      }
    }
    else
    {
      physicsAsset = NULL;
    }
    v50 = NULL;
    goto LABEL_106;
  }
LABEL_107:
  if ( activeModel )
    DynEnt_LinkModel((LocalClientNum_t)v6, v18);
LABEL_124:
  if ( !*p_locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 127, ASSERT_TYPE_ASSERT, "(dynEntClient->locked)", (const char *)&queryFormat, "dynEntClient->locked") )
    __debugbreak();
  *p_locked = 0;
  Profile_EndInternal(NULL);
}

/*
==============
DynEntCL_AddEntity_SetupClient
==============
*/
DynEntityClient *DynEntCL_AddEntity_SetupClient(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const DynEntityBasis basis, DynEntityDef *dynEntDef, const bool isFirstTime, const bool addAsHidden)
{
  __int64 v6; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  DynEntityClient *ClientFromClientId; 
  unsigned __int16 v14; 
  DynEntityClient *v15; 
  DynEntityBasis v16; 
  LocalClientNum_t v17; 
  unsigned __int16 v18; 
  unsigned __int16 flags; 

  v6 = localClientNum;
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 337, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  DynEntCL_AddRemoveClient_Lock((const LocalClientNum_t)v6, basis);
  if ( isFirstTime )
  {
    v10 = (unsigned __int8)basis + 2 * v6;
    v11 = g_dynEntNextFreeClient[0][v10];
    if ( v11 == 0xFFFF )
    {
      if ( g_dynEntHiddenClientTail[0][v10] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 365, ASSERT_TYPE_ASSERT, "(g_dynEntHiddenClientTail[localClientNum][basis] != 0xFFFF)", (const char *)&queryFormat, "g_dynEntHiddenClientTail[localClientNum][basis] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v14 = g_dynEntHiddenClientTail[0][v10];
      dynEntDef->clientId[v6] = v14;
      ClientFromClientId = DynEntCL_EvictHiddenEntity_NoLock((const LocalClientNum_t)v6, v14, basis);
    }
    else
    {
      if ( v11 >= g_dynEntClientEntsAllocCount[0][v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 348, ASSERT_TYPE_ASSERT, "(g_dynEntNextFreeClient[localClientNum][basis] < g_dynEntClientEntsAllocCount[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntNextFreeClient[localClientNum][basis] < g_dynEntClientEntsAllocCount[localClientNum][basis]") )
        __debugbreak();
      v12 = g_dynEntNextFreeClient[0][v10];
      dynEntDef->clientId[v6] = v12;
      ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v6, v12, basis);
      if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 353, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( ++g_dynEntNextFreeClient[0][v10] == g_dynEntClientEntsAllocCount[0][v10] )
        g_dynEntNextFreeClient[0][v10] = -1;
    }
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 371, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    Sys_WaitInterlockedCompareExchange(&ClientFromClientId->locked, 1, 0);
    ClientFromClientId->dynEntDefId = dynEntId;
    v15 = ClientFromClientId;
    ClientFromClientId->flags = 0;
    v16 = basis;
    ClientFromClientId->activeModel = NULL;
    v17 = (int)v6;
    v18 = dynEntDef->clientId[v6];
    if ( addAsHidden )
    {
      DynEntCL_AddToHiddenClientList_NoLock((const LocalClientNum_t)v6, basis, v18, ClientFromClientId);
      goto LABEL_38;
    }
LABEL_34:
    DynEntCL_AddToNoEvictClientList_NoLock(v17, v16, v18, v15);
    goto LABEL_38;
  }
  if ( addAsHidden && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 390, ASSERT_TYPE_ASSERT, "(!addAsHidden)", (const char *)&queryFormat, "!addAsHidden") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v6, dynEntDef->clientId[v6], basis);
  if ( ClientFromClientId->dynEntDefId != dynEntId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 393, ASSERT_TYPE_ASSERT, "(dynEntClient->dynEntDefId == dynEntId)", (const char *)&queryFormat, "dynEntClient->dynEntDefId == dynEntId") )
    __debugbreak();
  if ( (ClientFromClientId->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 395, ASSERT_TYPE_ASSERT, "((dynEntClient->flags & (1 << 0)) == 0)", (const char *)&queryFormat, "(dynEntClient->flags & DYNENT_CL_ACTIVE) == 0") )
    __debugbreak();
  Sys_WaitInterlockedCompareExchange(&ClientFromClientId->locked, 1, 0);
  flags = ClientFromClientId->flags;
  if ( (flags & 0x100) != 0 )
  {
    DynEntCL_RemoveFromHiddenClientList_NoLock((const LocalClientNum_t)v6, basis, dynEntDef->clientId[v6], ClientFromClientId);
    v18 = dynEntDef->clientId[v6];
    v15 = ClientFromClientId;
    v16 = basis;
    v17 = (int)v6;
    goto LABEL_34;
  }
  if ( (flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 408, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 5))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_NO_EVICT") )
    __debugbreak();
LABEL_38:
  DynEntCL_Unlock(ClientFromClientId);
  DynEntCL_AddRemoveClient_Unlock((const LocalClientNum_t)v6, basis);
  return ClientFromClientId;
}

/*
==============
DynEntCL_AddHiddenEntity
==============
*/
void DynEntCL_AddHiddenEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  __int64 v3; 
  unsigned int v6; 
  DynEntityListId v7; 
  DynEntityDef *Def; 
  DynEntityClient *v9; 
  DynEntityPose *PoseFromClientId; 
  unsigned __int8 NumPosePartsFromDef; 
  __int64 v12; 
  __int64 addAsHidden; 

  v3 = localClientNum;
  v6 = dynEntId & 0x7FFFF;
  v7 = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
  Def = (DynEntityDef *)DynEnt_GetDef(v7, v6, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 723, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( Def->clientId[v3] != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 724, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] == 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v9 = DynEntCL_AddEntity_SetupClient((const LocalClientNum_t)v3, dynEntId, basis, Def, 1, 1);
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v3, Def->clientId[v3], basis);
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 729, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 730, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  Sys_WaitInterlockedCompareExchange(&v9->locked, 1, 0);
  *(_DWORD *)&v9->physicsSetupNext = -1;
  *(_QWORD *)&v9->physicsSystemId = -1i64;
  v9->numPhysicsBodies = 0;
  v9->singlePhysicsBody = 0xFFFFFF;
  v9->detailBoundBody = 0xFFFFFF;
  memset_0(PoseFromClientId, 0, sizeof(DynEntityPose));
  NumPosePartsFromDef = DynEnt_GetNumPosePartsFromDef(dynEntId, basis);
  PoseFromClientId->numParts = NumPosePartsFromDef;
  if ( NumPosePartsFromDef > 1u )
  {
    if ( g_dynEntPoseExtraPosePartsNextFree[v3] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 750, ASSERT_TYPE_ASSERT, "(g_dynEntPoseExtraPosePartsNextFree[localClientNum] != DYNENT_EXTRA_POSE_PART_INVALID_INDEX)", (const char *)&queryFormat, "g_dynEntPoseExtraPosePartsNextFree[localClientNum] != DYNENT_EXTRA_POSE_PART_INVALID_INDEX") )
      __debugbreak();
    if ( g_dynEntPoseExtraPosePartsNextFree[v3] >= g_dynEntExtraPosePartsAllocCount[v3] )
    {
      LODWORD(addAsHidden) = g_dynEntPoseExtraPosePartsNextFree[v3];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 751, ASSERT_TYPE_ASSERT, "(unsigned)( g_dynEntPoseExtraPosePartsNextFree[localClientNum] ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "g_dynEntPoseExtraPosePartsNextFree[localClientNum] doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", addAsHidden, g_dynEntExtraPosePartsAllocCount[v3]) )
        __debugbreak();
    }
    if ( basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 754, ASSERT_TYPE_ASSERT, "(basis == DYNENT_BASIS_MODEL)", (const char *)&queryFormat, "basis == DYNENT_BASIS_MODEL") )
      __debugbreak();
    if ( PoseFromClientId->numParts - 1 > g_dynEntPoseExtraPosePartsStride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 756, ASSERT_TYPE_ASSERT, "(dynEntPose->numParts-1 <= g_dynEntPoseExtraPosePartsStride)", (const char *)&queryFormat, "dynEntPose->numParts-1 <= g_dynEntPoseExtraPosePartsStride") )
      __debugbreak();
    v12 = g_dynEntPoseExtraPosePartsNextFree[v3];
    PoseFromClientId->posePart1FirstIndex = v12;
    g_dynEntPoseExtraPosePartsNextFree[v3] = g_dynEntPoseExtraParts[v3][v12].nextFreeIndex;
  }
  DynEntCL_Unlock(v9);
}

/*
==============
DynEntCL_AddRemoveClient_Lock
==============
*/
void DynEntCL_AddRemoveClient_Lock(const LocalClientNum_t localClientNum, const DynEntityBasis basis)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 135, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 136, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  Sys_WaitInterlockedCompareExchange(&s_dynEntClientAddRemoveLock[v2][(unsigned __int8)basis], 1, 0);
}

/*
==============
DynEntCL_AddRemoveClient_Unlock
==============
*/
void DynEntCL_AddRemoveClient_Unlock(const LocalClientNum_t localClientNum, const DynEntityBasis basis)
{
  __int64 v2; 
  volatile int *v4; 

  v2 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 144, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 145, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  v4 = &s_dynEntClientAddRemoveLock[v2][(unsigned __int8)basis];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 146, ASSERT_TYPE_ASSERT, "(s_dynEntClientAddRemoveLock[localClientNum][basis])", (const char *)&queryFormat, "s_dynEntClientAddRemoveLock[localClientNum][basis]") )
    __debugbreak();
  *v4 = 0;
}

/*
==============
DynEntCL_AddToClientList_NoLock
==============
*/
void DynEntCL_AddToClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client, unsigned __int16 *listHead, unsigned __int16 *listTail)
{
  unsigned __int16 v10; 
  DynEntityClient *ClientFromClientId; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 155, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 156, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 157, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 158, ASSERT_TYPE_ASSERT, "(listHead)", (const char *)&queryFormat, "listHead") )
    __debugbreak();
  if ( !listTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 159, ASSERT_TYPE_ASSERT, "(listTail)", (const char *)&queryFormat, "listTail") )
    __debugbreak();
  v10 = *listHead;
  if ( *listHead != 0xFFFF )
  {
    ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, v10, basis);
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 166, ASSERT_TYPE_ASSERT, "(oldHead)", (const char *)&queryFormat, "oldHead") )
      __debugbreak();
    if ( ClientFromClientId->clientPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 167, ASSERT_TYPE_ASSERT, "(oldHead->clientPrev == 0xFFFF)", (const char *)&queryFormat, "oldHead->clientPrev == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    ClientFromClientId->clientPrev = clientId;
  }
  client->clientNext = v10;
  *listHead = clientId;
  if ( *listTail == 0xFFFF )
    *listTail = clientId;
  client->clientPrev = -1;
}

/*
==============
DynEntCL_AddToHiddenClientList_NoLock
==============
*/
void DynEntCL_AddToHiddenClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int16 *listTail; 
  __int64 v13; 

  v4 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 246, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 247, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 248, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(listTail) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(listTail) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  v8 = (unsigned __int8)basis + 2 * v4;
  v9 = g_dynEntClientEntsAllocCount[0][v8];
  if ( clientId >= v9 )
  {
    LODWORD(v13) = v9;
    LODWORD(listTail) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v10 = clientId;
  if ( &g_dynEntClientLists[0][v8][v10] != client )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    v11 = g_dynEntClientEntsAllocCount[0][v8];
    if ( clientId >= v11 )
    {
      LODWORD(v13) = v11;
      LODWORD(listTail) = clientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 249, ASSERT_TYPE_ASSERT, "( DynEnt_GetClientFromClientId( localClientNum, clientId, basis ) ) == ( client )", "%s == %s\n\t%p, %p", "DynEnt_GetClientFromClientId( localClientNum, clientId, basis )", "client", &g_dynEntClientLists[0][v8][v10], client) )
      __debugbreak();
  }
  if ( (client->flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 251, ASSERT_TYPE_ASSERT, "(!(client->flags & (1 << 8)))", (const char *)&queryFormat, "!(client->flags & DYNENT_CL_HIDDEN)") )
    __debugbreak();
  if ( (client->flags & 0x21) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 252, ASSERT_TYPE_ASSERT, "(!(client->flags & ((1 << 0) | (1 << 5))))", (const char *)&queryFormat, "!(client->flags & (DYNENT_CL_ACTIVE | DYNENT_CL_NO_EVICT))") )
    __debugbreak();
  DynEntCL_AddToClientList_NoLock((const LocalClientNum_t)v4, basis, clientId, client, &g_dynEntHiddenClientHead[0][v8], &g_dynEntHiddenClientTail[0][v8]);
  client->flags |= 0x100u;
}

/*
==============
DynEntCL_AddToNoEvictClientList_NoLock
==============
*/
void DynEntCL_AddToNoEvictClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int16 *listTail; 
  __int64 v13; 

  v4 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 232, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 233, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(listTail) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(listTail) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  v8 = (unsigned __int8)basis + 2 * v4;
  v9 = g_dynEntClientEntsAllocCount[0][v8];
  if ( clientId >= v9 )
  {
    LODWORD(v13) = v9;
    LODWORD(listTail) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v10 = clientId;
  if ( &g_dynEntClientLists[0][v8][v10] != client )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    v11 = g_dynEntClientEntsAllocCount[0][v8];
    if ( clientId >= v11 )
    {
      LODWORD(v13) = v11;
      LODWORD(listTail) = clientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 234, ASSERT_TYPE_ASSERT, "( DynEnt_GetClientFromClientId( localClientNum, clientId, basis ) ) == ( client )", "%s == %s\n\t%p, %p", "DynEnt_GetClientFromClientId( localClientNum, clientId, basis )", "client", &g_dynEntClientLists[0][v8][v10], client) )
      __debugbreak();
  }
  if ( (client->flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 236, ASSERT_TYPE_ASSERT, "(!(client->flags & (1 << 8)))", (const char *)&queryFormat, "!(client->flags & DYNENT_CL_HIDDEN)") )
    __debugbreak();
  if ( (client->flags & 0x21) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 237, ASSERT_TYPE_ASSERT, "(!(client->flags & ((1 << 0) | (1 << 5))))", (const char *)&queryFormat, "!(client->flags & (DYNENT_CL_ACTIVE | DYNENT_CL_NO_EVICT))") )
    __debugbreak();
  DynEntCL_AddToClientList_NoLock((const LocalClientNum_t)v4, basis, clientId, client, &g_dynEntNoEvictClientHead[0][v8], &g_dynEntNoEvictClientTail[0][v8]);
  client->flags |= 0x20u;
}

/*
==============
DynEntCL_AddWorkerCmd
==============
*/
void DynEntCL_AddWorkerCmd(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  __int64 v6; 
  DynEntityListId v7; 
  unsigned __int64 v8; 
  char *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  bitarray<1536> *v14; 
  char v15; 
  bitarray<1536> *v17; 
  unsigned int v18; 
  char v19; 
  const dvar_t *v20; 
  char enabled; 
  char v22; 
  unsigned __int8 v23; 
  SpatialPartition_PopulationSort_ClientData **v24; 
  SpatialPartition_PopulationSort_ClientData *v25; 
  char v26; 
  const dvar_t *v58; 
  bool v60; 
  float v64; 
  float v66; 
  DynEntitySpatialPopulationType i; 
  SpatialPartition_PopulationSort_ClientData *v83; 
  bool updated; 
  unsigned __int8 v86; 
  SpatialPartition_PopulationSort_ClientData **v87; 
  SpatialPartition_PopulationSort_ClientData *v88; 
  WorkerCmdType v89; 
  __int64 v104; 
  __int64 v106; 
  __int64 v107; 
  char v108; 
  char v109; 
  __int64 v110; 
  __int64 v111; 
  bitarray<1536> *v112; 
  vec3_t viewPos; 
  vec3_t lookAtDir; 
  LocalClientNum_t data; 
  char v116; 
  unsigned int v117; 
  char v118[184]; 
  char v119; 
  char v120[196]; 

  v2 = localClientNum;
  v111 = localClientNum;
  v3 = localClientNum;
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
    }
    else
    {
      dynEntityListsCount = 0;
      dynEntListIds = NULL;
    }
    if ( dynEntityListsCount )
    {
      v6 = (unsigned __int16)dynEntityListsCount;
      do
      {
        v7 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v107) = 1536;
          LODWORD(v106) = (unsigned __int16)v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v106, v107) )
            __debugbreak();
        }
        v8 = (unsigned __int64)(unsigned __int16)v7 << 6;
        v9 = (char *)g_dynEntityLists + v8;
        if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v8) == DEFAULT_DYNENTITY_LIST_ID )
          v9 = NULL;
        if ( v9 && *((_WORD *)v9 + 4) == 1537 )
        {
          v10 = *(unsigned __int16 *)dynEntListIds;
          if ( (unsigned int)v10 >= 0x600 )
          {
            LODWORD(v107) = 1536;
            LODWORD(v106) = *(unsigned __int16 *)dynEntListIds;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v106, v107) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v10 & 0x1F)) & s_dynEntListHasDeferredRemove[v3].array[v10 >> 5]) == 0 )
            *((_WORD *)v9 + 4) = 1536;
        }
        ++dynEntListIds;
        --v6;
      }
      while ( v6 );
      v2 = (int)v3;
    }
  }
  v11 = 0;
  v12 = v3;
  v110 = v3;
  _RBX = &s_dynEntListHasDeferredAdd[v3];
  v14 = _RBX;
  while ( !v14->array[0] )
  {
    ++v11;
    v14 = (bitarray<1536> *)((char *)v14 + 4);
    if ( v11 >= 0x30 )
    {
      v15 = 0;
      goto LABEL_26;
    }
  }
  v15 = 1;
LABEL_26:
  _RSI = &s_dynEntListHasDeferredRemove[v12];
  v112 = &s_dynEntListHasDeferredRemove[v12];
  v17 = &s_dynEntListHasDeferredRemove[v12];
  v18 = 0;
  while ( !v17->array[0] )
  {
    ++v18;
    v17 = (bitarray<1536> *)((char *)v17 + 4);
    if ( v18 >= 0x30 )
    {
      v19 = 0;
      goto LABEL_31;
    }
  }
  v19 = 1;
LABEL_31:
  v108 = v19;
  DynEntCL_Spatial_MarkIfMissingCollisionTiles(v2);
  v20 = DCONST_DVARBOOL_dynEnt_spatialEnabled;
  if ( !DCONST_DVARBOOL_dynEnt_spatialEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  enabled = v20->current.enabled;
  v22 = s_dynentSpatialLastEnabled[v3];
  v109 = enabled;
  if ( enabled == v22 )
  {
    __asm { vmovaps [rsp+260h+var_30], xmm6 }
    if ( v2 >= (unsigned int)cg_t::ms_allocatedCount )
    {
      LODWORD(v107) = cg_t::ms_allocatedCount;
      LODWORD(v106) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v106, v107) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[v3] )
    {
      LODWORD(v107) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v107) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v107) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v107) )
        __debugbreak();
    }
    _RAX = cg_t::ms_cgArray[v3];
    if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+699Ch]
        vmovss  dword ptr [rsp+260h+viewPos], xmm0
        vmovss  xmm1, dword ptr [rax+69A0h]
        vmovss  dword ptr [rsp+260h+viewPos+4], xmm1
        vmovss  xmm2, dword ptr [rax+69A4h]
        vmovss  dword ptr [rsp+260h+viewPos+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+59680h]
        vmovss  dword ptr [rsp+260h+viewPos], xmm0
        vmovss  xmm1, dword ptr [rax+59684h]
        vmovss  dword ptr [rsp+260h+viewPos+4], xmm1
        vmovss  xmm0, dword ptr [rax+59688h]
        vmovss  dword ptr [rsp+260h+viewPos+8], xmm0
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rax+6944h]
      vmovss  dword ptr [rsp+260h+lookAtDir], xmm1
      vmovss  xmm2, dword ptr [rax+6948h]
      vmovss  dword ptr [rsp+260h+lookAtDir+4], xmm2
      vmovss  xmm1, dword ptr [rax+694Ch]
      vmovss  xmm2, cs:__real@43340000; max
      vmovss  dword ptr [rbp+160h+lookAtDir+8], xmm1
      vmovss  xmm1, cs:__real@42b40000; min
      vmovss  xmm0, dword ptr [rax+17FF8h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v58 = DVARBOOL_dynEnt_debugFreezeCamera;
    __asm { vmovaps xmm6, xmm0 }
    if ( !DVARBOOL_dynEnt_debugFreezeCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugFreezeCamera") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    v60 = !v58->current.enabled;
    _RCX = 3 * v3;
    _R13 = 0x140000000ui64;
    if ( v60 )
    {
      __asm { vmovsd  xmm0, qword ptr [rsp+260h+viewPos] }
      v66 = viewPos.v[2];
      __asm { vmovsd  qword ptr rva s_dynentLastCameraPos[r13+rcx*4], xmm0 }
      s_dynentLastCameraPos[v3].v[2] = v66;
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr rva s_dynentLastCameraPos[r13+rcx*4] }
      v64 = s_dynentLastCameraPos[v3].v[2];
      __asm { vmovsd  qword ptr [rsp+260h+viewPos], xmm0 }
      viewPos.v[2] = v64;
    }
    if ( v109 )
    {
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1699, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL )") )
        __debugbreak();
      data = v2;
      v116 = 0;
      v117 = DynEnt_MaxSpatialActivatedTotal(v2);
      if ( v19 )
      {
        __asm { vmovups ymm0, ymmword ptr [rsi] }
        v116 |= 0x10u;
        _RAX = v120;
        __asm
        {
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rsi+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rsi+40h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups ymm0, ymmword ptr [rsi+60h]
          vmovups ymmword ptr [rax+60h], ymm0
        }
        _RSI = &_RSI->array[32];
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi]
          vmovups ymmword ptr [rax+80h], ymm0
          vmovups ymm0, ymmword ptr [rsi+20h]
          vmovups ymmword ptr [rax+0A0h], ymm0
        }
        *(_QWORD *)s_dynEntListHasDeferredRemove[v3].array = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[2] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[4] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[6] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[8] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[10] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[12] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[14] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[16] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[18] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[20] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[22] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[24] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[26] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[28] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[30] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[32] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[34] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[36] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[38] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[40] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[42] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[44] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredRemove[v3].array[46] = 0i64;
      }
      if ( v15 )
      {
        __asm { vmovups ymm0, ymmword ptr [rbx] }
        v116 |= 8u;
        _RAX = v118;
        __asm
        {
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rbx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rbx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups ymm0, ymmword ptr [rbx+60h]
          vmovups ymmword ptr [rax+60h], ymm0
          vmovups ymm0, ymmword ptr [rbx+80h]
          vmovups ymmword ptr [rax+80h], ymm0
          vmovups ymm0, ymmword ptr [rbx+0A0h]
          vmovups ymmword ptr [rax+0A0h], ymm0
        }
        *(_QWORD *)s_dynEntListHasDeferredAdd[v3].array = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[2] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[4] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[6] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[8] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[10] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[12] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[14] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[16] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[18] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[20] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[22] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[24] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[26] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[28] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[30] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[32] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[34] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[36] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[38] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[40] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[42] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[44] = 0i64;
        *(_QWORD *)&s_dynEntListHasDeferredAdd[v3].array[46] = 0i64;
      }
      for ( i = DYNENT_SPATIAL_POPULATION_DENSE_TYPE; (unsigned __int8)i < DYNENT_SPATIAL_POPULATION_TYPE_COUNT; ++i )
      {
        if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v107) = 2;
          LODWORD(v106) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v106, v107) )
            __debugbreak();
        }
        v83 = g_dynEntSpatialSortClientData[v3][(unsigned __int8)i];
        if ( !v83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1721, ASSERT_TYPE_ASSERT, "(spatialClientData)", (const char *)&queryFormat, "spatialClientData") )
          __debugbreak();
        DynEnt_AddWorkerCmd_UpdateSpatialClientDataSettings(v83, i);
        Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEntCL_Spatial_SortByDistanceAndView");
        __asm { vmovaps xmm3, xmm6; fovInDegrees }
        DynEntCL_Spatial_SortByDistanceAndView(v83, &viewPos, &lookAtDir, *(const float *)&_XMM3);
        Sys_ProfEndNamedEvent();
        Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEntCL_Spatial_UpdateNeeded");
        updated = DynEntCL_Spatial_UpdateNeeded(v83);
        Sys_ProfEndNamedEvent();
        if ( updated )
          v116 |= 2 << i;
        if ( i == DYNENT_SPATIAL_POPULATION_SPARSE_OCCLUDER_TYPE && DynEntCL_Spatial_CollisionUpdateNeeded(v83) )
          v116 |= 0x20u;
      }
      if ( !v116 )
        goto LABEL_105;
      v86 = 0;
      v87 = g_dynEntSpatialSortClientData[v2];
      do
      {
        if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v107) = 2;
          LODWORD(v106) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v106, v107) )
            __debugbreak();
        }
        v88 = *v87;
        if ( !*v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1750, ASSERT_TYPE_ASSERT, "(spatialClientData)", (const char *)&queryFormat, "spatialClientData") )
          __debugbreak();
        ++v86;
        v88->jobInProgress = 1;
        ++v87;
      }
      while ( v86 < 2u );
      v89 = WRKCMD_ADD_DYNENT_SPATIAL;
    }
    else
    {
      if ( !v15 && !v19 )
        goto LABEL_105;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymm1, ymmword ptr [rbx+80h]
      }
      data = v2;
      _RAX = &v116;
      __asm
      {
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm0, ymmword ptr [rbx+60h]
        vmovups ymmword ptr [rax+60h], ymm0
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymmword ptr [rax+80h], ymm1
        vmovups ymm1, ymmword ptr [rbx+0A0h]
        vmovups ymmword ptr [rax+0A0h], ymm1
      }
      _RAX = &v119;
      __asm
      {
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rsi+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rsi+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm0, ymmword ptr [rsi+60h]
        vmovups ymmword ptr [rax+60h], ymm0
        vmovups ymm0, ymmword ptr [rsi+80h]
        vmovups ymmword ptr [rax+80h], ymm0
        vmovups ymm0, ymmword ptr [rsi+0A0h]
        vmovups ymmword ptr [rax+0A0h], ymm0
      }
      v104 = v3;
      *(_QWORD *)s_dynEntListHasDeferredRemove[v104].array = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[2] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[4] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[6] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[8] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[10] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[12] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[14] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[16] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[18] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[20] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[22] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[24] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[26] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[28] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[30] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[32] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[34] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[36] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[38] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[40] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[42] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[44] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v104].array[46] = 0i64;
      *(_QWORD *)s_dynEntListHasDeferredAdd[v104].array = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[2] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[4] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[6] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[8] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[10] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[12] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[14] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[16] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[18] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[20] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[22] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[24] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[26] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[28] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[30] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[32] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[34] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[36] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[38] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[40] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[42] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[44] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v104].array[46] = 0i64;
      v89 = WRKCMD_DYNENT_DEFERRED_ADD_REMOVE;
    }
    Sys_AddWorkerCmd(v89, &data);
LABEL_105:
    __asm { vmovaps xmm6, [rsp+260h+var_30] }
    return;
  }
  if ( v22 )
  {
    data = v2;
    v117 = DynEnt_MaxSpatialActivatedTotal(v2);
    v23 = 0;
    v24 = g_dynEntSpatialSortClientData[v3];
    do
    {
      if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v107) = 2;
        LODWORD(v106) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v106, v107) )
          __debugbreak();
      }
      v25 = *v24;
      if ( !*v24 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1641, ASSERT_TYPE_ASSERT, "(spatialClientData)", (const char *)&queryFormat, "spatialClientData") )
          __debugbreak();
        v25 = NULL;
      }
      ++v23;
      v25->jobInProgress = 1;
      ++v24;
    }
    while ( v23 < 2u );
    v3 = v111;
    v26 = 1;
    _RSI = v112;
    v116 = 1;
    if ( v108 )
    {
      __asm { vmovups ymm0, ymmword ptr [rsi] }
      v116 = 17;
      _RAX = v120;
      __asm
      {
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rsi+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rsi+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm0, ymmword ptr [rsi+60h]
        vmovups ymmword ptr [rax+60h], ymm0
        vmovups ymm0, ymmword ptr [rsi+80h]
        vmovups ymmword ptr [rax+80h], ymm0
        vmovups ymm0, ymmword ptr [rsi+0A0h]
        vmovups ymmword ptr [rax+0A0h], ymm0
      }
      *(_QWORD *)s_dynEntListHasDeferredRemove[v111].array = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[2] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[4] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[6] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[8] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[10] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[12] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[14] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[16] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[18] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[20] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[22] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[24] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[26] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[28] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[30] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[32] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[34] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[36] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[38] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[40] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[42] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[44] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredRemove[v111].array[46] = 0i64;
      v26 = v116;
    }
    _R13 = 0x140000000ui64;
    if ( v15 )
    {
      _R8 = v110 * 192;
      __asm { vmovups ymm0, ymmword ptr [r8+r13+115DEC20h] }
      v116 = v26 | 8;
      _RDX = &s_dynEntListHasDeferredAdd[v110];
      _RAX = v118;
      __asm
      {
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rdx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rdx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm0, ymmword ptr [rdx+60h]
        vmovups ymmword ptr [rax+60h], ymm0
        vmovups ymm0, ymmword ptr [rdx+80h]
        vmovups ymmword ptr [rax+80h], ymm0
        vmovups ymm0, ymmword ptr [rdx+0A0h]
        vmovups ymmword ptr [rax+0A0h], ymm0
      }
      *(_QWORD *)s_dynEntListHasDeferredAdd[v111].array = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[2] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[4] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[6] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[8] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[10] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[12] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[14] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[16] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[18] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[20] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[22] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[24] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[26] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[28] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[30] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[32] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[34] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[36] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[38] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[40] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[42] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[44] = 0i64;
      *(_QWORD *)&s_dynEntListHasDeferredAdd[v111].array[46] = 0i64;
    }
    Sys_AddWorkerCmd(WRKCMD_ADD_DYNENT_SPATIAL, &data);
    enabled = v109;
  }
  s_dynentSpatialLastEnabled[v3] = enabled;
}

/*
==============
DynEntCL_DeferredAddNoSpatial
==============
*/
void DynEntCL_DeferredAddNoSpatial(LocalClientNum_t localClientNum, const bitarray<1536> *dynEntListAdded)
{
  unsigned int v2; 
  LocalClientNum_t v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  DynEntityBasis i; 
  DynEntityList *DynEntityList; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  DynEntityList *v14; 
  DynEntityDef *v15; 
  DynEntityListId v16; 
  const DynEntityDef *Def; 
  __int64 associateScriptables; 
  __int64 v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  const bitarray<1536> *v24; 
  int v25; 

  v24 = dynEntListAdded;
  v2 = dynEntListAdded->array[0];
  v3 = localClientNum;
  LODWORD(v4) = 0;
  v25 = 0;
  while ( v2 )
  {
LABEL_5:
    v5 = __lzcnt(v2);
    v6 = v5 + 32 * v4;
    if ( v5 >= 0x20 )
    {
      LODWORD(v19) = 32;
      LODWORD(associateScriptables) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", associateScriptables, v19) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v21 = ~(0x80000000 >> v5) & v2;
    if ( v6 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum DynEntityListId __cdecl truncate_cast_impl<enum DynEntityListId,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v6, "unsigned", v6) )
      __debugbreak();
    for ( i = DYNENT_BASIS_MODEL; (unsigned __int8)i < DYNENT_BASIS_COUNT; ++i )
    {
      if ( (unsigned __int16)v6 >= 0x600u )
      {
        LODWORD(v19) = 1536;
        LODWORD(associateScriptables) = (unsigned __int16)v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, v19) )
          __debugbreak();
      }
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v6);
      if ( DynEntityList )
      {
        v9 = 0;
        v10 = DynEntityList->dynEntCount[(unsigned __int8)i];
        if ( v10 )
        {
          v12 = 2i64 * (int)v3 + 56;
          v20 = (unsigned __int16)v6 << 19;
          v13 = 0i64;
          v22 = v12;
          do
          {
            v14 = DynEnt_GetDynEntityList((DynEntityListId)v6);
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            v11 = 4i64 * (unsigned __int8)i + 12;
            if ( v9 >= *(_DWORD *)((char *)&v14->name + v11) )
            {
              LODWORD(v19) = *(_DWORD *)((char *)&v14->name + v11);
              LODWORD(associateScriptables) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", associateScriptables, v19) )
                __debugbreak();
            }
            v15 = &v14->dynEntDefList[(unsigned __int8)i][v13];
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1324, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            if ( *(_WORD *)((char *)&v15->baseModel + v12) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1325, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] == 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID") )
              __debugbreak();
            if ( (unsigned __int16)v6 >= 0x600u )
            {
              LODWORD(v19) = 1536;
              LODWORD(associateScriptables) = (unsigned __int16)v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, v19) )
                __debugbreak();
            }
            if ( v9 >= 0x7FFFF )
            {
              LODWORD(v19) = 0x7FFFF;
              LODWORD(associateScriptables) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", associateScriptables, v19) )
                __debugbreak();
            }
            v16 = truncate_cast<enum DynEntityListId,unsigned int>((v9 | v20) >> 19);
            Def = DynEnt_GetDef(v16, v9 & 0x7FFFF, i);
            if ( !DynEntDef_IsSpatial(Def) )
              DynEntCL_AddEntity(localClientNum, v9 | v20, i, 0, 0, 1);
            v12 = v22;
            ++v9;
            ++v13;
          }
          while ( v9 < v10 );
          v3 = localClientNum;
        }
      }
    }
    LODWORD(v4) = v25;
    v2 = v21;
    dynEntListAdded = v24;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    v25 = v4;
    if ( (unsigned int)v4 >= 0x30 )
      break;
    v2 = dynEntListAdded->array[v4];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
DynEntCL_DeferredAddRemoveCmd
==============
*/
void DynEntCL_DeferredAddRemoveCmd(const void *const cmdInfo)
{
  LocalClientNum_t v1; 
  unsigned int v2; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = *(_DWORD *)cmdInfo;
  v2 = *((_DWORD *)cmdInfo + 49);
  LODWORD(v4) = 0;
  while ( v2 )
  {
LABEL_5:
    v5 = __lzcnt(v2);
    v6 = v5 + 32 * v4;
    if ( v5 >= 0x20 )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v5);
    if ( v6 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum DynEntityListId __cdecl truncate_cast_impl<enum DynEntityListId,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v5 + 32 * v4), "unsigned", v6) )
      __debugbreak();
    DynEntCL_RemoveActiveEntitiesInList(v1, (DynEntityListId)(v5 + 32 * v4), 1);
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x30 )
      break;
    v2 = *((_DWORD *)cmdInfo + v4 + 49);
    if ( v2 )
      goto LABEL_5;
  }
  DynEntCL_DeferredAddNoSpatial(*(LocalClientNum_t *)cmdInfo, (const bitarray<1536> *)((char *)cmdInfo + 4));
}

/*
==============
DynEntCL_DynEntCanActivate
==============
*/
bool DynEntCL_DynEntCanActivate(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  __int64 v3; 
  unsigned int v4; 
  DynEntityListId v6; 
  const DynEntityDef *Def; 
  unsigned __int16 v8; 
  bool ShouldResetPoseOnAdd; 
  DynEntityClient *ClientFromClientId; 
  const vec2_t *p_origin; 
  __int16 *p_gridIdx; 
  DynEntityPose *PoseFromClientId; 
  unsigned int v15; 
  __int16 gridIdx; 

  v3 = localClientNum;
  v4 = dynEntId & 0x7FFFF;
  v15 = dynEntId & 0x7FFFF;
  v6 = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
  Def = DynEnt_GetDef(v6, v4, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 440, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v8 = Def->clientId[v3];
  ShouldResetPoseOnAdd = DynEntCL_ShouldResetPoseOnAdd((LocalClientNum_t)v3, Def);
  if ( v8 == 0xFFFF )
  {
    if ( (Def->collisionFlags & 2) == 0 )
      return 1;
  }
  else
  {
    ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v3, Def->clientId[v3], basis);
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 455, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    if ( (ClientFromClientId->flags & 0x4000) == 0 )
      return 1;
  }
  if ( ShouldResetPoseOnAdd )
  {
    p_origin = (const vec2_t *)&Def->initialPose.origin;
    p_gridIdx = (__int16 *)&v15;
  }
  else
  {
    if ( v8 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 469, ASSERT_TYPE_ASSERT, "(!isFirstTime)", (const char *)&queryFormat, "!isFirstTime") )
      __debugbreak();
    PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v3, Def->clientId[v3], basis);
    if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 471, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
      __debugbreak();
    p_origin = (const vec2_t *)&PoseFromClientId->pose.origin;
    p_gridIdx = &gridIdx;
  }
  return WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * v3 + 3), p_origin, p_gridIdx);
}

/*
==============
DynEntCL_DynEntityListAboutToRemove
==============
*/
void DynEntCL_DynEntityListAboutToRemove(LocalClientNum_t localClientNum, DynEntityListId listId)
{
  int v2; 
  __int64 v4; 
  DynEntityList *DynEntityList; 
  unsigned __int8 v6; 
  SpatialPartition_PopulationSort_ClientData **v7; 
  SpatialPartition_PopulationSort_ClientData *v8; 
  SpatialPartition_PopulationSort_ClientData **v9; 
  unsigned __int8 i; 
  SpatialPartition_PopulationSort_ClientData *v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = s_dynEntsInitialized;
  v4 = localClientNum;
  if ( _bittest(&v2, localClientNum) )
  {
    if ( (unsigned __int16)listId >= DEFAULT_DYNENTITY_LIST_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1487, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", (unsigned __int16)listId, 1536) )
      __debugbreak();
    if ( s_dynEntListImmediateSync || !CL_AnyLocalClientStateActive() )
    {
      DynEntityList = DynEnt_GetDynEntityList(listId);
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1493, ASSERT_TYPE_ASSERT, "(dynEntityList)", (const char *)&queryFormat, "dynEntityList") )
        __debugbreak();
      DynEntityList->index = DYNENTITY_LIST_ID_UNLOADING;
      v6 = 0;
      v7 = g_dynEntSpatialSortClientData[v4];
      do
      {
        if ( (unsigned int)v4 >= 2 )
        {
          LODWORD(v13) = 2;
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v8 = *v7;
        if ( !*v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1502, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
          __debugbreak();
        ++v6;
        v8->jobInProgress = 1;
        ++v7;
      }
      while ( v6 < 2u );
      DynEntCL_Spatial_RemoveDynEntityList((LocalClientNum_t)v4, listId);
      v9 = g_dynEntSpatialSortClientData[v4];
      for ( i = 0; i < 2u; ++i )
      {
        if ( (unsigned int)v4 >= 2 )
        {
          LODWORD(v13) = 2;
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v11 = *v9;
        if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1513, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
          __debugbreak();
        v11->jobInProgress = 0;
        ++v9;
      }
    }
    else
    {
      bitarray_base<bitarray<1536>>::setBit(&s_dynEntListHasDeferredRemove[v4], (unsigned __int16)listId);
    }
  }
}

/*
==============
DynEntCL_DynEntityListAdded
==============
*/
void DynEntCL_DynEntityListAdded(LocalClientNum_t localClientNum, DynEntityListId listId)
{
  int v2; 
  __int64 v4; 
  bool v5; 
  int v6; 
  int v7; 
  bool optionalHasNonSpatialOut; 

  v2 = s_dynEntsInitialized;
  v4 = localClientNum;
  if ( _bittest(&v2, localClientNum) )
  {
    if ( (unsigned __int16)listId >= DEFAULT_DYNENTITY_LIST_ID )
    {
      v7 = 1536;
      v6 = (unsigned __int16)listId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1457, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5 = s_dynEntListImmediateSync || !CL_AnyLocalClientStateActive();
    DynEntCL_InitEntitiesInList((const LocalClientNum_t)v4, listId, v5, &optionalHasNonSpatialOut);
    if ( !s_dynEntListImmediateSync && CL_AnyLocalClientStateActive() && optionalHasNonSpatialOut )
      bitarray_base<bitarray<1536>>::setBit(&s_dynEntListHasDeferredAdd[v4], (unsigned __int16)listId);
    DynEntCL_RelinkHiddenDynEntsInList((const LocalClientNum_t)v4, listId);
  }
}

/*
==============
DynEntCL_EvictHiddenEntity_NoLock
==============
*/
DynEntityClient *DynEntCL_EvictHiddenEntity_NoLock(const LocalClientNum_t localClientNum, const unsigned __int16 clientId, const DynEntityBasis basis)
{
  __int64 v3; 
  DynEntityClient *ClientFromClientId; 
  DynEntityPose *PoseFromClientId; 
  unsigned int dynEntDefId; 
  unsigned int v9; 
  unsigned int v10; 
  DynEntityListId v11; 
  DynEntityList *DynEntityList; 
  __int64 v13; 
  DynEntityListId v14; 
  DynEntityListId v15; 
  unsigned __int64 v16; 
  char *v17; 
  unsigned __int64 v18; 
  char *v19; 
  __int64 v21; 
  __int64 v22; 

  v3 = localClientNum;
  ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, clientId, basis);
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v3, clientId, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 293, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 294, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( (ClientFromClientId->flags & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 295, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 8))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_HIDDEN") )
    __debugbreak();
  Sys_WaitInterlockedCompareExchange(&ClientFromClientId->locked, 1, 0);
  dynEntDefId = ClientFromClientId->dynEntDefId;
  v9 = dynEntDefId >> 19;
  v10 = dynEntDefId & 0x7FFFF;
  v11 = truncate_cast<enum DynEntityListId,unsigned int>(v9);
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v21) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 246, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v21, 2) )
      __debugbreak();
  }
  DynEntityList = DynEnt_GetDynEntityList(v11);
  if ( DynEntityList && v10 < DynEntityList->dynEntCount[(unsigned __int8)basis] && (v13 = (__int64)&DynEntityList->dynEntDefList[(unsigned __int8)basis][v10]) != 0 )
  {
    *(_WORD *)(v13 + 2 * v3 + 56) = -1;
  }
  else
  {
    v14 = truncate_cast<enum DynEntityListId,unsigned int>(ClientFromClientId->dynEntDefId >> 19);
    v15 = v14;
    if ( (unsigned __int16)v14 >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v22) = 1536;
      LODWORD(v21) = (unsigned __int16)v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v16 = (unsigned __int64)(unsigned __int16)v15 << 6;
    v17 = (char *)g_dynEntityLists + v16;
    if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v16) == DEFAULT_DYNENTITY_LIST_ID )
      v17 = NULL;
    if ( v17 )
    {
      if ( (unsigned __int16)v15 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v22) = 1536;
        LODWORD(v21) = (unsigned __int16)v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v18 = (unsigned __int64)(unsigned __int16)v15 << 6;
      v19 = (char *)g_dynEntityLists + v18;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v18) == DEFAULT_DYNENTITY_LIST_ID )
        v19 = NULL;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 312, ASSERT_TYPE_ASSERT, "( DynEnt_GetDynEntityList( listId ) ) == ( nullptr )", "%s == %s\n\t%p, %p", "DynEnt_GetDynEntityList( listId )", "nullptr", v19, NULL) )
        __debugbreak();
    }
  }
  if ( PoseFromClientId->numParts > 1u )
  {
    if ( basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 319, ASSERT_TYPE_ASSERT, "(basis == DYNENT_BASIS_MODEL)", (const char *)&queryFormat, "basis == DYNENT_BASIS_MODEL") )
      __debugbreak();
    if ( PoseFromClientId->posePart1FirstIndex >= g_dynEntExtraPosePartsAllocCount[v3] )
    {
      LODWORD(v22) = g_dynEntExtraPosePartsAllocCount[v3];
      LODWORD(v21) = PoseFromClientId->posePart1FirstIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 320, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntPose->posePart1FirstIndex ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "dynEntPose->posePart1FirstIndex doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    g_dynEntPoseExtraParts[v3][PoseFromClientId->posePart1FirstIndex].nextFreeIndex = g_dynEntPoseExtraPosePartsNextFree[v3];
    g_dynEntPoseExtraPosePartsNextFree[v3] = PoseFromClientId->posePart1FirstIndex;
  }
  DynEntCL_RemoveFromHiddenClientList_NoLock((const LocalClientNum_t)v3, basis, clientId, ClientFromClientId);
  DynEntCL_Unlock(ClientFromClientId);
  return ClientFromClientId;
}

/*
==============
DynEntCL_GetLastCameraPos
==============
*/
vec3_t *DynEntCL_GetLastCameraPos(LocalClientNum_t localClientNum)
{
  return &s_dynentLastCameraPos[localClientNum];
}

/*
==============
DynEntCL_ImmediateDynEntityListSyncBegin
==============
*/
void DynEntCL_ImmediateDynEntityListSyncBegin(void)
{
  LocalClientNum_t v0; 
  int v1; 
  SpatialPartition_PopulationSort_ClientData *(*v2)[2]; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  _DWORD *v6; 
  char v7; 
  _DWORD *v8; 
  unsigned int i; 
  unsigned __int8 v10; 
  SpatialPartition_PopulationSort_ClientData *(*v11)[2]; 
  SpatialPartition_PopulationSort_ClientData *v12; 
  SpatialPartition_PopulationSort_ClientData *(*v13)[2]; 
  unsigned __int8 j; 
  SpatialPartition_PopulationSort_ClientData *v15; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  __int64 v18; 
  DynEntityListId v19; 
  DynEntityList *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char v25; 
  int v26; 
  SpatialPartition_PopulationSort_ClientData *(*v27)[2]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1340, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_dynEntListImmediateSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1341, ASSERT_TYPE_ASSERT, "(!s_dynEntListImmediateSync)", (const char *)&queryFormat, "!s_dynEntListImmediateSync") )
    __debugbreak();
  if ( s_dynEntsInitialized )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_DYNENT_DEFERRED_ADD_REMOVE);
    Physics_WaitForAllCommandsToFinish();
    v0 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v1 = 1;
      v24 = 0i64;
      v2 = g_dynEntSpatialSortClientData;
      v26 = 1;
      v27 = g_dynEntSpatialSortClientData;
      v3 = 0i64;
      v23 = 0i64;
      v4 = 0i64;
      while ( (v1 & s_dynEntsInitialized) == 0 )
      {
LABEL_45:
        v1 = __ROL4__(v1, 1);
        v4 += 192i64;
        v3 += 192i64;
        v26 = v1;
        ++v2;
        v23 = v4;
        ++v0;
        v24 = v3;
        v27 = v2;
        if ( v0 >= SLODWORD(cl_maxLocalClients) )
          goto LABEL_46;
      }
      v5 = 0;
      v6 = (unsigned int *)((char *)s_dynEntListHasDeferredRemove[0].array + v4);
      while ( !*v6 )
      {
        ++v5;
        ++v6;
        if ( v5 >= 0x30 )
        {
          v7 = 0;
          goto LABEL_16;
        }
      }
      v7 = 1;
LABEL_16:
      v8 = (unsigned int *)((char *)s_dynEntListHasDeferredAdd[0].array + v4);
      for ( i = 0; i < 0x30; ++i )
      {
        if ( *v8 )
        {
          v25 = 1;
          goto LABEL_22;
        }
        ++v8;
      }
      v25 = 0;
      if ( !v7 )
        goto LABEL_45;
LABEL_22:
      v10 = 0;
      v11 = v2;
      do
      {
        if ( (unsigned int)v0 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v22) = 2;
          LODWORD(v21) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v12 = (*v11)[0];
        if ( !(*v11)[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1365, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
          __debugbreak();
        ++v10;
        v12->jobInProgress = 1;
        v11 = (SpatialPartition_PopulationSort_ClientData *(*)[2])((char *)v11 + 8);
      }
      while ( v10 < 2u );
      v3 = v24;
      if ( v7 )
      {
        DynEntCL_Spatial_DeferredRemove(v0, &s_dynEntListHasDeferredRemove[v0]);
        *(_QWORD *)((char *)s_dynEntListHasDeferredRemove[0].array + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[2] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[4] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[6] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[8] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[10] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[12] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[14] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[16] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[18] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[20] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[22] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[24] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[26] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[28] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[30] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[32] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[34] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[36] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[38] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[40] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[42] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[44] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredRemove[0].array[46] + v24) = 0i64;
      }
      v1 = v26;
      if ( v25 )
      {
        DynEntCL_Spatial_DeferredAddNoSpatial(v0, &s_dynEntListHasDeferredAdd[v0]);
        *(_QWORD *)((char *)s_dynEntListHasDeferredAdd[0].array + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[2] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[4] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[6] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[8] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[10] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[12] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[14] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[16] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[18] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[20] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[22] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[24] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[26] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[28] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[30] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[32] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[34] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[36] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[38] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[40] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[42] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[44] + v24) = 0i64;
        *(_QWORD *)((char *)&s_dynEntListHasDeferredAdd[0].array[46] + v24) = 0i64;
      }
      else if ( !v7 )
      {
LABEL_44:
        v4 = v23;
        v2 = v27;
        goto LABEL_45;
      }
      v13 = v27;
      for ( j = 0; j < 2u; ++j )
      {
        if ( (unsigned int)v0 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v22) = 2;
          LODWORD(v21) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v15 = (*v13)[0];
        if ( !(*v13)[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1388, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
          __debugbreak();
        v15->jobInProgress = 0;
        v13 = (SpatialPartition_PopulationSort_ClientData *(*)[2])((char *)v13 + 8);
      }
      v3 = v24;
      v1 = v26;
      goto LABEL_44;
    }
LABEL_46:
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
    }
    else
    {
      dynEntityListsCount = 0;
      dynEntListIds = NULL;
    }
    if ( dynEntityListsCount )
    {
      v18 = (unsigned __int16)dynEntityListsCount;
      do
      {
        v19 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v22) = 1536;
          LODWORD(v21) = (unsigned __int16)v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v20 = &g_dynEntityLists[(unsigned __int64)(unsigned __int16)v19];
        if ( v20->index == DEFAULT_DYNENTITY_LIST_ID )
          v20 = NULL;
        if ( v20 )
        {
          if ( v20->index == DYNENTITY_LIST_ID_UNLOADING )
            v20->index = DEFAULT_DYNENTITY_LIST_ID;
        }
        ++dynEntListIds;
        --v18;
      }
      while ( v18 );
    }
    s_dynEntListImmediateSync = 1;
  }
  else
  {
    s_dynEntListImmediateSync = 1;
  }
}

/*
==============
DynEntCL_ImmediateDynEntityListSyncEnd
==============
*/
void DynEntCL_ImmediateDynEntityListSyncEnd(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1428, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_dynEntListImmediateSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1429, ASSERT_TYPE_ASSERT, "(s_dynEntListImmediateSync)", (const char *)&queryFormat, "s_dynEntListImmediateSync") )
    __debugbreak();
  s_dynEntListImmediateSync = 0;
}

/*
==============
DynEntCL_InitEntitiesInList
==============
*/
void DynEntCL_InitEntitiesInList(const LocalClientNum_t localClientNum, DynEntityListId listId, bool addNonSpatial, bool *optionalHasNonSpatialOut)
{
  LocalClientNum_t v6; 
  DynEntityBasis i; 
  DynEntityList *DynEntityList; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  DynEntityList *v13; 
  DynEntityDef *v14; 
  DynEntityListId v15; 
  const DynEntityDef *Def; 
  bool IsSpatial; 
  bool v18; 
  __int64 associateScriptables; 
  __int64 v20; 
  __int64 v21; 
  int v24; 

  v6 = localClientNum;
  if ( optionalHasNonSpatialOut )
    *optionalHasNonSpatialOut = 0;
  for ( i = DYNENT_BASIS_MODEL; (unsigned __int8)i < DYNENT_BASIS_COUNT; ++i )
  {
    if ( (unsigned __int16)listId >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v20) = 1536;
      LODWORD(associateScriptables) = (unsigned __int16)listId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, v20) )
        __debugbreak();
    }
    DynEntityList = DynEnt_GetDynEntityList(listId);
    if ( DynEntityList )
    {
      v9 = 0;
      v10 = 4i64 * (unsigned __int8)i + 12;
      v11 = *(_DWORD *)((char *)&DynEntityList->name + v10);
      if ( v11 )
      {
        v21 = 2i64 * (int)v6 + 56;
        v24 = (unsigned __int16)listId << 19;
        v12 = 0i64;
        do
        {
          v13 = DynEnt_GetDynEntityList(listId);
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v9 >= *(_DWORD *)((char *)&v13->name + v10) )
          {
            LODWORD(v20) = *(_DWORD *)((char *)&v13->name + v10);
            LODWORD(associateScriptables) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", associateScriptables, v20) )
              __debugbreak();
          }
          v14 = &v13->dynEntDefList[(unsigned __int8)i][v12];
          *(_WORD *)((char *)&v14->baseModel + v21) = -1;
          if ( (unsigned __int16)listId >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(v20) = 1536;
            LODWORD(associateScriptables) = (unsigned __int16)listId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, v20) )
              __debugbreak();
          }
          if ( v9 >= 0x7FFFF )
          {
            LODWORD(v20) = 0x7FFFF;
            LODWORD(associateScriptables) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", associateScriptables, v20) )
              __debugbreak();
          }
          v14->clientActiveMask &= ~(1 << localClientNum);
          v15 = truncate_cast<enum DynEntityListId,unsigned int>((v9 | v24) >> 19);
          Def = DynEnt_GetDef(v15, v9 & 0x7FFFF, i);
          IsSpatial = DynEntDef_IsSpatial(Def);
          v18 = IsSpatial;
          if ( addNonSpatial && !IsSpatial )
            DynEntCL_AddEntity(localClientNum, v9 | v24, i, 0, 0, 1);
          if ( optionalHasNonSpatialOut )
            *optionalHasNonSpatialOut |= !v18;
          v10 = 4i64 * (unsigned __int8)i + 12;
          ++v9;
          ++v12;
        }
        while ( v9 < v11 );
        v6 = localClientNum;
      }
    }
  }
}

/*
==============
DynEntCL_IsImmediateDynEntityListSync
==============
*/
bool DynEntCL_IsImmediateDynEntityListSync()
{
  return s_dynEntListImmediateSync || !CL_AnyLocalClientStateActive();
}

/*
==============
DynEntCL_Lock
==============
*/
void DynEntCL_Lock(const DynEntityClient *dynEntClient)
{
  Sys_WaitInterlockedCompareExchange(&dynEntClient->locked, 1, 0);
}

/*
==============
DynEntCL_RelinkHiddenDynEntsInList
==============
*/
void DynEntCL_RelinkHiddenDynEntsInList(const LocalClientNum_t localClientNum, DynEntityListId listId)
{
  __int64 v3; 
  DynEntityList *DynEntityList; 
  __int64 v5; 
  DynEntityDef **dynEntDefList; 
  unsigned __int8 v7; 
  unsigned int *dynEntCount; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  char *v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  char *v21; 
  __int64 v22; 

  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEntCL_RelinkHiddenDynEntsInList");
  DynEntityList = DynEnt_GetDynEntityList(listId);
  v5 = 4 * v3;
  v22 = 4 * v3;
  dynEntDefList = DynEntityList->dynEntDefList;
  v7 = 0;
  dynEntCount = DynEntityList->dynEntCount;
  v21 = (char *)&g_dynEntPoseLists[0][1] + 16 * v3 - (_QWORD)DynEntityList;
  do
  {
    v9 = *(unsigned __int16 *)((char *)g_dynEntNextFreeClient[0] + v5);
    v10 = 0;
    if ( v9 > *(unsigned __int16 *)((char *)g_dynEntClientEntsAllocCount[0] + v5) )
      v9 = *(unsigned __int16 *)((char *)g_dynEntClientEntsAllocCount[0] + v5);
    if ( v9 )
    {
      v11 = 0i64;
      do
      {
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v19) = 2;
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v12 = *(unsigned __int16 *)((char *)g_dynEntClientEntsAllocCount[0] + v5);
        if ( v10 >= v12 )
        {
          LODWORD(v19) = v12;
          LODWORD(v18) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v13 = v21;
        if ( !*(DynEntityDef **)((char *)dynEntDefList + (_QWORD)v21) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v13 = v21;
        }
        v14 = *(__int64 *)((char *)dynEntDefList + (_QWORD)v13);
        if ( (*(_WORD *)(v11 + v14 + 28) & 0x100) != 0 )
        {
          v15 = *(_DWORD *)(v11 + v14 + 8);
          v16 = v15 >> 19;
          v17 = v15 & 0x7FFFF;
          if ( listId == truncate_cast<enum DynEntityListId,unsigned int>(v16) )
          {
            if ( v17 >= *dynEntCount )
            {
              LODWORD(v19) = *dynEntCount;
              LODWORD(v18) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1287, ASSERT_TYPE_ASSERT, "(unsigned)( curLocalId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "curLocalId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v18, v19) )
                __debugbreak();
            }
            (*dynEntDefList)[v17].clientId[v3] = v10;
          }
          v5 = v22;
        }
        ++v10;
        v11 += 56i64;
      }
      while ( v10 < v9 );
    }
    v5 += 2i64;
    ++v7;
    ++dynEntCount;
    v22 = v5;
    ++dynEntDefList;
  }
  while ( v7 < 2u );
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEntCL_RemoveActiveEntitiesInList
==============
*/
void DynEntCL_RemoveActiveEntitiesInList(const LocalClientNum_t localClientNum, DynEntityListId listId, const bool clearActiveModel)
{
  __int64 v3; 
  DynEntityList *DynEntityList; 
  DynEntityBasis v6; 
  unsigned int *dynEntCount; 
  __int64 v8; 
  DynEntityDef **dynEntDefList; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  unsigned __int16 v16; 
  DynEntityClient *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int *v20; 
  __int64 v22; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 836, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  DynEntityList = DynEnt_GetDynEntityList(listId);
  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 838, ASSERT_TYPE_ASSERT, "(dynEntityList)", (const char *)&queryFormat, "dynEntityList") )
    __debugbreak();
  v6 = DYNENT_BASIS_MODEL;
  dynEntCount = DynEntityList->dynEntCount;
  v8 = 0i64;
  v20 = DynEntityList->dynEntCount;
  v22 = 0i64;
  dynEntDefList = DynEntityList->dynEntDefList;
  do
  {
    v10 = *dynEntCount;
    if ( v10 )
    {
      v11 = v3;
      v12 = 2 * v3 + 56;
      v13 = v10;
      do
      {
        v14 = *(_WORD *)((char *)&(*dynEntDefList)->baseModel + v12);
        if ( v14 != 0xFFFF )
        {
          if ( (unsigned int)v3 >= 2 )
          {
            LODWORD(v19) = 2;
            LODWORD(v18) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v15 = v8 + 2 * v11;
          v16 = g_dynEntClientEntsAllocCount[0][v15];
          if ( v14 >= v16 )
          {
            LODWORD(v19) = v16;
            LODWORD(v18) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          if ( !g_dynEntClientLists[0][v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v17 = &g_dynEntClientLists[0][v15][v14];
          if ( (v17->flags & 0x20) != 0 )
          {
            DynEntCL_RemoveEntity((LocalClientNum_t)v3, v17->dynEntDefId, v6, 0, 1);
            v8 = v22;
            if ( clearActiveModel )
              v17->activeModel = NULL;
          }
          else
          {
            v8 = v22;
          }
          v11 = v3;
        }
        v12 += 80i64;
        --v13;
      }
      while ( v13 );
    }
    ++v8;
    dynEntCount = v20 + 1;
    v22 = v8;
    ++v6;
    ++v20;
    ++dynEntDefList;
  }
  while ( (unsigned __int8)v6 < DYNENT_BASIS_COUNT );
}

/*
==============
DynEntCL_RemoveAllActiveEntities
==============
*/
void DynEntCL_RemoveAllActiveEntities(const LocalClientNum_t localClientNum, const bool clearActiveModel)
{
  DynEntityBasis v3; 
  DynEntityClient **v5; 
  __int64 v6; 
  unsigned __int16 i; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = DYNENT_BASIS_MODEL;
  v5 = g_dynEntClientLists[localClientNum];
  v6 = 2i64 * (int)localClientNum;
  do
  {
    for ( i = g_dynEntNoEvictClientHead[0][v6]; i != 0xFFFF; i = g_dynEntNoEvictClientHead[0][v6] )
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v11) = 2;
        LODWORD(v10) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v8 = g_dynEntClientEntsAllocCount[0][v6];
      if ( i >= v8 )
      {
        LODWORD(v11) = v8;
        LODWORD(v10) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v9 = (__int64)&(*v5)[i];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 817, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (*(_WORD *)(v9 + 28) & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 818, ASSERT_TYPE_ASSERT, "(!(dynEntClient->flags & (1 << 8)))", (const char *)&queryFormat, "!(dynEntClient->flags & DYNENT_CL_HIDDEN)") )
        __debugbreak();
      DynEntCL_RemoveEntity(localClientNum, *(_DWORD *)(v9 + 8), v3, 0, 1);
      if ( clearActiveModel )
        *(_QWORD *)v9 = 0i64;
    }
    ++v3;
    ++v5;
    ++v6;
  }
  while ( (unsigned __int8)v3 < DYNENT_BASIS_COUNT );
}

/*
==============
DynEntCL_RemoveEntity
==============
*/
void DynEntCL_RemoveEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool activate, bool disassociateScriptable)
{
  __int64 v5; 
  DynEntityListId v9; 
  const DynEntityDef *Def; 
  unsigned __int16 v11; 
  DynEntityClient *ClientFromClientId; 
  unsigned int scriptableMapIndex; 

  v5 = localClientNum;
  Profile_Begin(785);
  v9 = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
  Def = DynEnt_GetDef(v9, dynEntId & 0x7FFFF, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 771, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v11 = Def->clientId[v5];
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v5, v11, basis);
  if ( ClientFromClientId->dynEntDefId != dynEntId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 775, ASSERT_TYPE_ASSERT, "(dynEntClient->dynEntDefId == dynEntId)", (const char *)&queryFormat, "dynEntClient->dynEntDefId == dynEntId") )
    __debugbreak();
  if ( disassociateScriptable && Def->type == DYNENT_TYPE_SCRIPTABLEINST )
  {
    ScriptableCommon_AssertCountsInitialized();
    scriptableMapIndex = Def->scriptableMapIndex;
    if ( scriptableMapIndex < g_scriptableWorldCounts.totalInstanceCount )
      ScriptableCl_DisassociateDynEntInstance((const LocalClientNum_t)v5, dynEntId, scriptableMapIndex);
  }
  DynEnt_UnlinkEntity((LocalClientNum_t)v5, dynEntId, basis, 1, activate);
  if ( !DynEntDef_IsSpatial(Def) )
    Def->clientActiveMask &= ~(1 << v5);
  FX_ReleaseDynEntMarks((LocalClientNum_t)v5, ClientFromClientId);
  DynEntCL_AddRemoveClient_Lock((const LocalClientNum_t)v5, basis);
  Sys_WaitInterlockedCompareExchange(&ClientFromClientId->locked, 1, 0);
  DynEntCL_RemoveFromNoEvictClientList_NoLock((const LocalClientNum_t)v5, basis, v11, ClientFromClientId);
  DynEntCL_AddToHiddenClientList_NoLock((const LocalClientNum_t)v5, basis, v11, ClientFromClientId);
  DynEntCL_Unlock(ClientFromClientId);
  DynEntCL_AddRemoveClient_Unlock((const LocalClientNum_t)v5, basis);
  Profile_EndInternal(NULL);
}

/*
==============
DynEntCL_RemoveFromClientList_NoLock
==============
*/
void DynEntCL_RemoveFromClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client, unsigned __int16 *listHead, unsigned __int16 *listTail)
{
  unsigned __int16 clientPrev; 
  unsigned __int16 clientNext; 
  DynEntityClient *ClientFromClientId; 
  DynEntityClient *v13; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 185, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 186, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 187, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 188, ASSERT_TYPE_ASSERT, "(listHead)", (const char *)&queryFormat, "listHead") )
    __debugbreak();
  if ( !listTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 189, ASSERT_TYPE_ASSERT, "(listTail)", (const char *)&queryFormat, "listTail") )
    __debugbreak();
  clientPrev = client->clientPrev;
  clientNext = client->clientNext;
  *(_DWORD *)&client->clientNext = -1;
  if ( *listHead == clientId )
  {
    if ( clientPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 199, ASSERT_TYPE_ASSERT, "(prevId == 0xFFFF)", (const char *)&queryFormat, "prevId == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    *listHead = clientNext;
  }
  else
  {
    if ( clientPrev == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 205, ASSERT_TYPE_ASSERT, "(prevId != 0xFFFF)", (const char *)&queryFormat, "prevId != DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, clientPrev, basis);
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 207, ASSERT_TYPE_ASSERT, "(prevClient)", (const char *)&queryFormat, "prevClient") )
      __debugbreak();
    ClientFromClientId->clientNext = clientNext;
  }
  if ( *listTail == clientId )
  {
    if ( clientNext != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 214, ASSERT_TYPE_ASSERT, "(nextId == 0xFFFF)", (const char *)&queryFormat, "nextId == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    *listTail = clientPrev;
  }
  else
  {
    if ( clientNext == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 220, ASSERT_TYPE_ASSERT, "(nextId != 0xFFFF)", (const char *)&queryFormat, "nextId != DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    v13 = DynEnt_GetClientFromClientId(localClientNum, clientNext, basis);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 222, ASSERT_TYPE_ASSERT, "(nextClient)", (const char *)&queryFormat, "nextClient") )
      __debugbreak();
    v13->clientPrev = clientPrev;
  }
}

/*
==============
DynEntCL_RemoveFromHiddenClientList_NoLock
==============
*/
void DynEntCL_RemoveFromHiddenClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int16 *listTail; 
  __int64 v13; 

  v4 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 276, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 277, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 278, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(listTail) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(listTail) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  v8 = (unsigned __int8)basis + 2 * v4;
  v9 = g_dynEntClientEntsAllocCount[0][v8];
  if ( clientId >= v9 )
  {
    LODWORD(v13) = v9;
    LODWORD(listTail) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v10 = clientId;
  if ( &g_dynEntClientLists[0][v8][v10] != client )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    v11 = g_dynEntClientEntsAllocCount[0][v8];
    if ( clientId >= v11 )
    {
      LODWORD(v13) = v11;
      LODWORD(listTail) = clientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 279, ASSERT_TYPE_ASSERT, "( DynEnt_GetClientFromClientId( localClientNum, clientId, basis ) ) == ( client )", "%s == %s\n\t%p, %p", "DynEnt_GetClientFromClientId( localClientNum, clientId, basis )", "client", &g_dynEntClientLists[0][v8][v10], client) )
      __debugbreak();
  }
  if ( (client->flags & 0x21) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 281, ASSERT_TYPE_ASSERT, "(!(client->flags & ((1 << 0) | (1 << 5))))", (const char *)&queryFormat, "!(client->flags & (DYNENT_CL_ACTIVE | DYNENT_CL_NO_EVICT))") )
    __debugbreak();
  if ( (client->flags & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 282, ASSERT_TYPE_ASSERT, "(client->flags & (1 << 8))", (const char *)&queryFormat, "client->flags & DYNENT_CL_HIDDEN") )
    __debugbreak();
  DynEntCL_RemoveFromClientList_NoLock((const LocalClientNum_t)v4, basis, clientId, client, &g_dynEntHiddenClientHead[0][v8], &g_dynEntHiddenClientTail[0][v8]);
  client->flags &= ~0x100u;
}

/*
==============
DynEntCL_RemoveFromNoEvictClientList_NoLock
==============
*/
void DynEntCL_RemoveFromNoEvictClientList_NoLock(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 clientId, DynEntityClient *client)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  unsigned __int16 *listTail; 
  __int64 v13; 

  v4 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 261, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 262, ASSERT_TYPE_ASSERT, "(basis < DYNENT_BASIS_COUNT)", (const char *)&queryFormat, "basis < DYNENT_BASIS_COUNT") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 263, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(listTail) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(listTail) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  v8 = (unsigned __int8)basis + 2 * v4;
  v9 = g_dynEntClientEntsAllocCount[0][v8];
  if ( clientId >= v9 )
  {
    LODWORD(v13) = v9;
    LODWORD(listTail) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v10 = clientId;
  if ( &g_dynEntClientLists[0][v8][v10] != client )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(listTail) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    v11 = g_dynEntClientEntsAllocCount[0][v8];
    if ( clientId >= v11 )
    {
      LODWORD(v13) = v11;
      LODWORD(listTail) = clientId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", listTail, v13) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 264, ASSERT_TYPE_ASSERT, "( DynEnt_GetClientFromClientId( localClientNum, clientId, basis ) ) == ( client )", "%s == %s\n\t%p, %p", "DynEnt_GetClientFromClientId( localClientNum, clientId, basis )", "client", &g_dynEntClientLists[0][v8][v10], client) )
      __debugbreak();
  }
  if ( (client->flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 266, ASSERT_TYPE_ASSERT, "(!(client->flags & (1 << 8)))", (const char *)&queryFormat, "!(client->flags & DYNENT_CL_HIDDEN)") )
    __debugbreak();
  if ( (client->flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 267, ASSERT_TYPE_ASSERT, "(client->flags & (1 << 5))", (const char *)&queryFormat, "client->flags & DYNENT_CL_NO_EVICT") )
    __debugbreak();
  DynEntCL_RemoveFromClientList_NoLock((const LocalClientNum_t)v4, basis, clientId, client, &g_dynEntNoEvictClientHead[0][v8], &g_dynEntNoEvictClientTail[0][v8]);
  client->flags &= 0xFFDEu;
}

/*
==============
DynEntCL_ShouldResetPoseOnAdd
==============
*/
bool DynEntCL_ShouldResetPoseOnAdd(LocalClientNum_t localClientNum, const DynEntityDef *dynEntDef)
{
  __int64 v2; 
  unsigned __int16 v4; 
  __int16 v5; 
  DynEntityClient *ClientFromClientId; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 424, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v4 = dynEntDef->clientId[v2];
  if ( v4 == 0xFFFF )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v2, v4, dynEntDef->basis);
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 431, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    return ClientFromClientId->flags >> 15;
  }
  return v5;
}

/*
==============
DynEntCL_Unlock
==============
*/
void DynEntCL_Unlock(const DynEntityClient *dynEntClient)
{
  if ( dynEntClient->locked )
  {
    dynEntClient->locked = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 127, ASSERT_TYPE_ASSERT, "(dynEntClient->locked)", (const char *)&queryFormat, "dynEntClient->locked") )
      __debugbreak();
    dynEntClient->locked = 0;
  }
}

/*
==============
DynEntCL_VerifyClientLists
==============
*/
void DynEntCL_VerifyClientLists(const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  DynEntityBasis v5; 
  bitarray<65536> *v7; 
  __int64 v8; 
  bitarray<65536> *v9; 
  __int64 v10; 
  __int64 v12; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  v3 = 2i64 * (int)localClientNum;
  _R14 = &s_hiddenDynEntsDebugList;
  v5 = DYNENT_BASIS_MODEL;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    v7 = &s_noEvictDynEntsDebugList;
    v8 = 128i64;
    do
    {
      *(_QWORD *)v7->array = 0i64;
      *(_QWORD *)&v7->array[2] = 0i64;
      *(_QWORD *)&v7->array[4] = 0i64;
      v7 = (bitarray<65536> *)((char *)v7 + 64);
      *(_QWORD *)&v7[-1].array[2038] = 0i64;
      *(_QWORD *)&v7[-1].array[2040] = 0i64;
      *(_QWORD *)&v7[-1].array[2042] = 0i64;
      *(_QWORD *)&v7[-1].array[2044] = 0i64;
      *(_QWORD *)&v7[-1].array[2046] = 0i64;
      --v8;
    }
    while ( v8 );
    v9 = &s_hiddenDynEntsDebugList;
    v10 = 128i64;
    do
    {
      *(_QWORD *)v9->array = 0i64;
      *(_QWORD *)&v9->array[2] = 0i64;
      *(_QWORD *)&v9->array[4] = 0i64;
      v9 = (bitarray<65536> *)((char *)v9 + 64);
      *(_QWORD *)&v9[-1].array[2038] = 0i64;
      *(_QWORD *)&v9[-1].array[2040] = 0i64;
      *(_QWORD *)&v9[-1].array[2042] = 0i64;
      *(_QWORD *)&v9[-1].array[2044] = 0i64;
      *(_QWORD *)&v9[-1].array[2046] = 0i64;
      --v10;
    }
    while ( v10 );
    DynEntCL_VerifyClientLists_CheckList(localClientNum, v5, g_dynEntNoEvictClientHead[0][v3], g_dynEntNoEvictClientTail[0][v3], &s_noEvictDynEntsDebugList, 0x20u, 0x100u);
    DynEntCL_VerifyClientLists_CheckList(localClientNum, v5, g_dynEntHiddenClientHead[0][v3], g_dynEntHiddenClientTail[0][v3], &s_hiddenDynEntsDebugList, 0x100u, 0x20u);
    _RAX = 0i64;
    v12 = 256i64;
    __asm
    {
      vmovdqu xmm2, xmm6
      vmovdqu xmm3, xmm6
    }
    do
    {
      __asm
      {
        vmovdqu xmm1, xmmword ptr [rax+r14]
        vpand   xmm1, xmm1, xmmword ptr [rax+r15]
      }
      _RAX += 32i64;
      __asm
      {
        vpor    xmm2, xmm1, xmm2
        vmovdqu xmm1, xmmword ptr [rax+r14-10h]
        vpand   xmm1, xmm1, xmmword ptr [rax+r15-10h]
        vpor    xmm3, xmm1, xmm3
      }
      --v12;
    }
    while ( v12 );
    __asm
    {
      vpor    xmm1, xmm2, xmm3
      vpsrldq xmm0, xmm1, 8
      vpor    xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpor    xmm0, xmm2, xmm0
      vmovd   eax, xmm0
    }
    if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1847, ASSERT_TYPE_ASSERT, "(!s_noEvictDynEntsDebugList.testAnyBits( s_hiddenDynEntsDebugList ))", (const char *)&queryFormat, "!s_noEvictDynEntsDebugList.testAnyBits( s_hiddenDynEntsDebugList )") )
      __debugbreak();
    ++v5;
    ++v3;
  }
  while ( (unsigned __int8)v5 < DYNENT_BASIS_COUNT );
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
DynEntCL_VerifyClientLists_CheckList
==============
*/
void DynEntCL_VerifyClientLists_CheckList(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 listHead, const unsigned __int16 listTail, bitarray<65536> *testArray, const unsigned __int16 requiredFlag, const unsigned __int16 invalidFlag)
{
  unsigned __int16 v9; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned __int16 *v13; 
  DynEntityClient **v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int16 *v21; 

  v9 = listHead;
  if ( listHead != 0xFFFF )
  {
    v11 = requiredFlag;
    v12 = (unsigned __int8)basis + 2i64 * (int)localClientNum;
    v13 = &g_dynEntClientEntsAllocCount[0][v12];
    v21 = v13;
    v14 = &g_dynEntClientLists[0][v12];
    do
    {
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v20) = 2;
        LODWORD(v19) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
      {
        LODWORD(v20) = 2;
        LODWORD(v19) = (unsigned __int8)basis;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( v9 >= *v13 )
      {
        LODWORD(v20) = *v13;
        LODWORD(v19) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( !*v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v15 = (__int64)&(*v14)[v9];
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1815, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( v11 != (*(_WORD *)(v15 + 28) & v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1817, ASSERT_TYPE_ASSERT, "((requiredFlag == (client->flags & requiredFlag)))", (const char *)&queryFormat, "(requiredFlag == (client->flags & requiredFlag))") )
        __debugbreak();
      if ( (*(_WORD *)(v15 + 28) & invalidFlag) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1818, ASSERT_TYPE_ASSERT, "((0 == (client->flags & invalidFlag)))", (const char *)&queryFormat, "(0 == (client->flags & invalidFlag))") )
        __debugbreak();
      v16 = 0x80000000 >> (v9 & 0x1F);
      v17 = &testArray->array[(unsigned __int64)v9 >> 5];
      if ( (v16 & *v17) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1820, ASSERT_TYPE_ASSERT, "(!testArray.testBit( currentId ))", (const char *)&queryFormat, "!testArray.testBit( currentId )") )
        __debugbreak();
      *v17 |= v16;
      if ( v9 == listTail && *(_WORD *)(v15 + 36) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1826, ASSERT_TYPE_ASSERT, "(client->clientNext == 0xFFFF)", (const char *)&queryFormat, "client->clientNext == 0xFFFF") )
        __debugbreak();
      v18 = *(_WORD *)(v15 + 36);
      if ( v18 == 0xFFFF )
      {
        if ( v9 != listTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1830, ASSERT_TYPE_ASSERT, "(currentId == listTail)", (const char *)&queryFormat, "currentId == listTail") )
          __debugbreak();
        v18 = *(_WORD *)(v15 + 36);
      }
      v11 = requiredFlag;
      v13 = v21;
      v9 = v18;
    }
    while ( v18 != 0xFFFF );
  }
}

/*
==============
DynEntCL_WaitForAddWorkerCmds
==============
*/
void DynEntCL_WaitForAddWorkerCmds(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFA500, "DynEntCL_WaitForAddWorkerCmds");
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_DYNENT_DEFERRED_ADD_REMOVE);
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEntCl_InitEntities
==============
*/
void DynEntCl_InitEntities(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int16 v9; 
  bool v10; 
  unsigned __int8 v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  unsigned __int8 dynEntMaxPosePartCount; 
  int v16; 
  signed int dynEntsWithExtraPosePartsCount; 
  __int64 v18; 
  MapEnts *mapEnts; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  MapEnts *v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  int v29; 
  signed int v30; 
  int v31; 
  int v32; 
  signed int v33; 
  unsigned int v34; 
  int i; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int v43; 
  __int64 v44; 
  MapEnts *v45; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  __int64 v48; 
  DynEntityListId v49; 
  unsigned __int64 v50; 
  char *v51; 
  __int16 v52; 
  bool *v53; 
  const dvar_t *v54; 
  unsigned int j; 
  DynEntityBasis v56; 
  __int64 v59; 
  bitarray<65536> *v60; 
  __int64 v61; 
  bitarray<65536> *v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 requiredFlag; 
  __int64 invalidFlag; 
  __int64 v84; 
  __int64 v85; 
  unsigned int v88; 
  unsigned int v89; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  v2 = localClientNum;
  if ( !DynEnt_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1003, ASSERT_TYPE_ASSERT, "(DynEnt_IsInitialized())", "%s\n\tTrying to init DynEntity client data when DynEnt system has not been initialized\n", "DynEnt_IsInitialized()") )
    __debugbreak();
  if ( (int)v2 >= s_dynEntsClientsAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1004, ASSERT_TYPE_ASSERT, "(localClientNum < s_dynEntsClientsAllocated)", "%s\n\tTrying to init DynEntity client data for client num (%u) that has not been allocated (%u) .\n", "localClientNum < s_dynEntsClientsAllocated", v2, s_dynEntsClientsAllocated) )
    __debugbreak();
  v3 = s_dynEntsInitialized;
  if ( _bittest(&v3, v2) )
  {
    LODWORD(invalidFlag) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1005, ASSERT_TYPE_ASSERT, "(!DynEntCl_IsInitialized(localClientNum))", "%s\n\tTrying to init DynEntity client data for client that has already been initialized (%u)\n", "!DynEntCl_IsInitialized(localClientNum)", invalidFlag) )
      __debugbreak();
  }
  v4 = 2i64;
  v5 = 2 * v2;
  v6 = 2i64;
  v7 = v2;
  v8 = 0xFFFFi64;
  do
  {
    *(_WORD *)((char *)&cm.mapEnts->dynEntListIds + ++v5 * 2 + 6) = -1;
    cm.mapEnts->dynEntPhysicsSetupHead[1][v5 + 1] = -1;
    v9 = -1;
    v10 = *(_WORD *)((char *)&g_dynEntClientLists[1][1] + v5 * 2 + 6) == 0;
    *(_WORD *)((char *)&s_dynEntClientAddRemoveLock[1][1] + v5 * 2 + 2) = -1;
    if ( !v10 )
      v9 = 0;
    g_dynEntNoEvictClientHead[1][v5 + 1] = -1;
    g_dynEntHiddenClientTail[1][v5 + 1] = v9;
    g_dynEntNoEvictClientTail[1][v5 + 1] = -1;
    g_dynEntHiddenClientHead[1][v5 + 1] = -1;
    --v6;
  }
  while ( v6 );
  v11 = 0;
  v12 = (char *)&word_1515DE9B8[2 * v2];
  v13 = 440i64;
  if ( g_usedDebugZone )
  {
    do
    {
      if ( cm.mapEnts )
        v14 = *(_WORD *)((char *)&cm.mapEnts->name + v13);
      else
        v14 = 0;
      if ( *(_WORD *)&v12[v13] < v14 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144326EB0, 5693i64, v8);
        v12 = (char *)&word_1515DE9B8[2 * v2];
      }
      ++v11;
      v13 += 2i64;
    }
    while ( v11 < 2u );
    if ( cm.mapEnts )
    {
      dynEntMaxPosePartCount = cm.mapEnts->dynEntMaxPosePartCount;
      if ( dynEntMaxPosePartCount <= 1u )
        v16 = 0;
      else
        v16 = dynEntMaxPosePartCount - 1;
      if ( g_dynEntPoseExtraPosePartsStride < v16 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144326F30, 5694i64, v8);
      dynEntsWithExtraPosePartsCount = g_dynEntClientEntsAllocCount[v2][0];
      if ( (signed int)cm.mapEnts->dynEntsWithExtraPosePartsCount < dynEntsWithExtraPosePartsCount )
        dynEntsWithExtraPosePartsCount = cm.mapEnts->dynEntsWithExtraPosePartsCount;
      if ( g_dynEntExtraPosePartsAllocCount[v2] < (unsigned int)g_dynEntPoseExtraPosePartsStride * dynEntsWithExtraPosePartsCount )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144326F30, 5695i64, v8);
    }
  }
  else
  {
    v18 = 400i64;
    do
    {
      mapEnts = cm.mapEnts;
      v88 = s_dynEntsClientsAllocated;
      if ( cm.mapEnts && s_dynEntsClientsAllocated )
      {
        v20 = *(unsigned __int16 *)((char *)&cm.mapEnts->name + v13);
        if ( v20 > *(_DWORD *)((char *)&cm.mapEnts->name + v18) )
        {
          LODWORD(v85) = *(_DWORD *)((char *)&cm.mapEnts->name + v18);
          LODWORD(v84) = *(unsigned __int16 *)((char *)&cm.mapEnts->name + v13);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 363, ASSERT_TYPE_ASSERT, "( noSpatialCount ) <= ( mapEnts->dynEntCount[basis] )", "%s <= %s\n\t%u, %u", "noSpatialCount", "mapEnts->dynEntCount[basis]", v84, v85) )
            __debugbreak();
        }
        v21 = *(_DWORD *)((char *)&mapEnts->name + v18) - v20 + 10;
        if ( v21 > mapEnts->dynEntMaxClientHistoryCount / v88 )
          v21 = mapEnts->dynEntMaxClientHistoryCount / v88;
        v22 = truncate_cast<unsigned short,unsigned int>(v21);
        v23 = truncate_cast<unsigned short,int>(v20 + v22);
        v12 = (char *)&word_1515DE9B8[2 * v2];
      }
      else
      {
        v23 = 0;
      }
      if ( *(_WORD *)&v12[v13] != v23 )
      {
        v24 = cm.mapEnts;
        v89 = s_dynEntsClientsAllocated;
        if ( cm.mapEnts && s_dynEntsClientsAllocated )
        {
          v25 = *(unsigned __int16 *)((char *)&cm.mapEnts->name + v13);
          if ( v25 > *(_DWORD *)((char *)&cm.mapEnts->name + v18) )
          {
            LODWORD(v85) = *(_DWORD *)((char *)&cm.mapEnts->name + v18);
            LODWORD(v84) = *(unsigned __int16 *)((char *)&cm.mapEnts->name + v13);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 363, ASSERT_TYPE_ASSERT, "( noSpatialCount ) <= ( mapEnts->dynEntCount[basis] )", "%s <= %s\n\t%u, %u", "noSpatialCount", "mapEnts->dynEntCount[basis]", v84, v85) )
              __debugbreak();
          }
          v26 = *(_DWORD *)((char *)&v24->name + v18) - v25 + 10;
          if ( v26 > v24->dynEntMaxClientHistoryCount / v89 )
            v26 = v24->dynEntMaxClientHistoryCount / v89;
          v27 = truncate_cast<unsigned short,unsigned int>(v26);
          v28 = truncate_cast<unsigned short,int>(v25 + v27);
        }
        else
        {
          v28 = 0;
        }
        LODWORD(v85) = v28;
        LODWORD(v84) = word_1515DE9B8[2 * v2 + (unsigned __int64)v13 / 2];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1068, ASSERT_TYPE_ASSERT, "( g_dynEntClientEntsAllocCount[localClientNum][basis] ) == ( DynEnt_GetClientDataCount( basis, s_dynEntsClientsAllocated, true ) )", "%s == %s\n\t%u, %u", "g_dynEntClientEntsAllocCount[localClientNum][basis]", "DynEnt_GetClientDataCount( basis, s_dynEntsClientsAllocated, true )", v84, v85) )
          __debugbreak();
        v12 = (char *)&word_1515DE9B8[2 * v2];
      }
      ++v11;
      v18 += 4i64;
      v13 += 2i64;
    }
    while ( v11 < 2u );
    LODWORD(v2) = localClientNum;
    if ( cm.mapEnts )
    {
      v29 = cm.mapEnts->dynEntMaxPosePartCount;
      if ( (unsigned int)(v29 + 2) <= 0xA )
        LOBYTE(v29) = v29 + 2;
      v30 = cm.mapEnts->dynEntsWithExtraPosePartsCount + 10;
      if ( (unsigned __int8)v29 <= 1u )
        v31 = 0;
      else
        v31 = (unsigned __int8)v29 - 1;
      if ( g_dynEntPoseExtraPosePartsStride != v31 )
      {
        v32 = (unsigned __int8)v29 <= 1u ? 0 : (unsigned __int8)v29 - 1;
        LODWORD(v85) = v32;
        LODWORD(v84) = g_dynEntPoseExtraPosePartsStride;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1075, ASSERT_TYPE_ASSERT, "( g_dynEntPoseExtraPosePartsStride ) == ( (maxPosePartCount > 1) ? (maxPosePartCount - 1) : 0 )", "%s == %s\n\t%u, %u", "g_dynEntPoseExtraPosePartsStride", "(maxPosePartCount > 1) ? (maxPosePartCount - 1) : 0", v84, v85) )
          __debugbreak();
      }
      v33 = g_dynEntClientEntsAllocCount[localClientNum][0];
      v7 = localClientNum;
      if ( v30 < v33 )
        v33 = v30;
      if ( g_dynEntExtraPosePartsAllocCount[localClientNum] != v33 * g_dynEntPoseExtraPosePartsStride )
      {
        LODWORD(v85) = v33 * g_dynEntPoseExtraPosePartsStride;
        LODWORD(v84) = g_dynEntExtraPosePartsAllocCount[localClientNum];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1078, ASSERT_TYPE_ASSERT, "( g_dynEntExtraPosePartsAllocCount[localClientNum] ) == ( extraPartsCount )", "%s == %s\n\t%u, %u", "g_dynEntExtraPosePartsAllocCount[localClientNum]", "extraPartsCount", v84, v85) )
          __debugbreak();
      }
    }
    else
    {
      v7 = localClientNum;
    }
  }
  memset_0(g_dynentTransientZoneStates[v7], 0, sizeof(bool[1536]));
  memset_0(g_dynentTransientZoneHasData[v7], 0, sizeof(bool[1536]));
  if ( g_dynEntExtraPosePartsAllocCount[v7] )
  {
    if ( !g_dynEntPoseExtraPosePartsStride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1089, ASSERT_TYPE_ASSERT, "(g_dynEntPoseExtraPosePartsStride > 0)", (const char *)&queryFormat, "g_dynEntPoseExtraPosePartsStride > 0") )
      __debugbreak();
    if ( g_dynEntExtraPosePartsAllocCount[v7] % g_dynEntPoseExtraPosePartsStride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1090, ASSERT_TYPE_ASSERT, "(g_dynEntExtraPosePartsAllocCount[localClientNum] % g_dynEntPoseExtraPosePartsStride == 0)", (const char *)&queryFormat, "g_dynEntExtraPosePartsAllocCount[localClientNum] % g_dynEntPoseExtraPosePartsStride == 0") )
      __debugbreak();
    v34 = g_dynEntExtraPosePartsAllocCount[v7];
    i = g_dynEntPoseExtraPosePartsStride;
    v36 = 0;
    v37 = 1;
    v38 = v34 / g_dynEntPoseExtraPosePartsStride;
    if ( v38 > 1 )
    {
      do
      {
        if ( v36 != i * (v37 - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1096, ASSERT_TYPE_ASSERT, "(extraPoseId == (extraPoseNextBlock - 1)*g_dynEntPoseExtraPosePartsStride)", (const char *)&queryFormat, "extraPoseId == (extraPoseNextBlock - 1)*g_dynEntPoseExtraPosePartsStride") )
          __debugbreak();
        v39 = v36++;
        g_dynEntPoseExtraParts[v7][v39].nextFreeIndex = v37 * g_dynEntPoseExtraPosePartsStride;
        v40 = 1;
        for ( i = g_dynEntPoseExtraPosePartsStride; v40 < g_dynEntPoseExtraPosePartsStride; i = g_dynEntPoseExtraPosePartsStride )
        {
          ++v40;
          v41 = v36++;
          g_dynEntPoseExtraParts[v7][v41].nextFreeIndex = -1;
        }
        ++v37;
      }
      while ( v37 < v38 );
      v34 = g_dynEntExtraPosePartsAllocCount[v7];
      v4 = 2i64;
      LODWORD(v2) = localClientNum;
    }
    if ( v36 < v34 )
    {
      do
      {
        v42 = v36++;
        g_dynEntPoseExtraParts[v7][v42].nextFreeIndex = -1;
      }
      while ( v36 < g_dynEntExtraPosePartsAllocCount[v7] );
    }
    v43 = 0;
  }
  else
  {
    v43 = -1;
  }
  g_dynEntPoseExtraPosePartsNextFree[v7] = v43;
  v44 = v7;
  v45 = cm.mapEnts;
  *(_QWORD *)s_dynEntListHasDeferredAdd[v44].array = 0i64;
  *(_QWORD *)s_dynEntListHasDeferredRemove[v44].array = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[2] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[2] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[4] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[4] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[6] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[6] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[8] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[8] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[10] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[10] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[12] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[12] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[14] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[14] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[16] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[16] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[18] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[18] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[20] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[20] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[22] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[22] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[24] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[24] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[26] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[26] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[28] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[28] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[30] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[30] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[32] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[32] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[34] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[34] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[36] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[36] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[38] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[38] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[40] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[40] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[42] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[42] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[44] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[44] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredAdd[v44].array[46] = 0i64;
  *(_QWORD *)&s_dynEntListHasDeferredRemove[v44].array[46] = 0i64;
  if ( v45 )
  {
    dynEntityListsCount = v45->dynEntityListsCount;
    dynEntListIds = v45->dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1122, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    dynEntListIds = NULL;
  }
  if ( dynEntityListsCount )
  {
    v48 = (unsigned __int16)dynEntityListsCount;
    do
    {
      v49 = *dynEntListIds;
      if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(invalidFlag) = 1536;
        LODWORD(requiredFlag) = (unsigned __int16)v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", requiredFlag, invalidFlag) )
          __debugbreak();
      }
      v50 = (unsigned __int64)(unsigned __int16)v49 << 6;
      v51 = (char *)g_dynEntityLists + v50;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v50) == DEFAULT_DYNENTITY_LIST_ID )
        v51 = NULL;
      if ( v51 )
      {
        v52 = *((_WORD *)v51 + 4);
        if ( v52 == 1537 )
        {
          *((_WORD *)v51 + 4) = 1536;
        }
        else
        {
          if ( v52 != *dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1138, ASSERT_TYPE_ASSERT, "(dynEntityList->index == *listId)", (const char *)&queryFormat, "dynEntityList->index == *listId") )
            __debugbreak();
          DynEntCL_InitEntitiesInList((const LocalClientNum_t)v2, *dynEntListIds, 1, NULL);
        }
      }
      ++dynEntListIds;
      --v48;
    }
    while ( v48 );
    v4 = 2i64;
  }
  DynEntCL_Spatial_Init((LocalClientNum_t)v2);
  v53 = s_dynentSpatialLastEnabled;
  do
  {
    v54 = DCONST_DVARBOOL_dynEnt_spatialEnabled;
    if ( !DCONST_DVARBOOL_dynEnt_spatialEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    *v53++ = v54->current.enabled;
    --v4;
  }
  while ( v4 );
  DynEnt_Streaming_Init((const LocalClientNum_t)v2);
  s_dynEntsInitialized |= 1 << v2;
  if ( CL_TransientsSP_AreGameSystemsInitialized() )
  {
    for ( j = 0; j < 0x20; ++j )
    {
      if ( CL_TransientsSP_IsGameSystemTransientLoaded(j) )
        DynEnt_TransientsLoaded(j);
    }
  }
  v56 = DYNENT_BASIS_MODEL;
  _R14 = &s_hiddenDynEntsDebugList;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  v59 = 0i64;
  do
  {
    v60 = &s_noEvictDynEntsDebugList;
    v61 = 128i64;
    do
    {
      *(_QWORD *)v60->array = 0i64;
      *(_QWORD *)&v60->array[2] = 0i64;
      *(_QWORD *)&v60->array[4] = 0i64;
      v60 = (bitarray<65536> *)((char *)v60 + 64);
      *(_QWORD *)&v60[-1].array[2038] = 0i64;
      *(_QWORD *)&v60[-1].array[2040] = 0i64;
      *(_QWORD *)&v60[-1].array[2042] = 0i64;
      *(_QWORD *)&v60[-1].array[2044] = 0i64;
      *(_QWORD *)&v60[-1].array[2046] = 0i64;
      --v61;
    }
    while ( v61 );
    v62 = &s_hiddenDynEntsDebugList;
    v63 = 128i64;
    do
    {
      *(_QWORD *)v62->array = 0i64;
      *(_QWORD *)&v62->array[2] = 0i64;
      *(_QWORD *)&v62->array[4] = 0i64;
      v62 = (bitarray<65536> *)((char *)v62 + 64);
      *(_QWORD *)&v62[-1].array[2038] = 0i64;
      *(_QWORD *)&v62[-1].array[2040] = 0i64;
      *(_QWORD *)&v62[-1].array[2042] = 0i64;
      *(_QWORD *)&v62[-1].array[2044] = 0i64;
      *(_QWORD *)&v62[-1].array[2046] = 0i64;
      --v63;
    }
    while ( v63 );
    v64 = v59 + 2i64 * (int)v2;
    DynEntCL_VerifyClientLists_CheckList((const LocalClientNum_t)v2, v56, g_dynEntNoEvictClientHead[0][v64], g_dynEntNoEvictClientTail[0][v64], &s_noEvictDynEntsDebugList, 0x20u, 0x100u);
    DynEntCL_VerifyClientLists_CheckList((const LocalClientNum_t)v2, v56, g_dynEntHiddenClientHead[0][v64], g_dynEntHiddenClientTail[0][v64], &s_hiddenDynEntsDebugList, 0x100u, 0x20u);
    v65 = 256i64;
    _RAX = 0i64;
    __asm
    {
      vmovdqu xmm2, xmm6
      vmovdqu xmm3, xmm6
    }
    do
    {
      __asm
      {
        vmovdqu xmm1, xmmword ptr [rax+r14]
        vpand   xmm1, xmm1, xmmword ptr [rax+rdx]
      }
      _RAX += 32i64;
      __asm
      {
        vpor    xmm2, xmm1, xmm2
        vmovdqu xmm1, xmmword ptr [rax+r14-10h]
        vpand   xmm1, xmm1, xmmword ptr [rax+rdx-10h]
        vpor    xmm3, xmm1, xmm3
      }
      --v65;
    }
    while ( v65 );
    __asm
    {
      vpor    xmm1, xmm3, xmm2
      vpsrldq xmm0, xmm1, 8
      vpor    xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpor    xmm0, xmm2, xmm0
      vmovd   eax, xmm0
    }
    if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1847, ASSERT_TYPE_ASSERT, "(!s_noEvictDynEntsDebugList.testAnyBits( s_hiddenDynEntsDebugList ))", (const char *)&queryFormat, "!s_noEvictDynEntsDebugList.testAnyBits( s_hiddenDynEntsDebugList )") )
      __debugbreak();
    ++v56;
    ++v59;
  }
  while ( (unsigned __int8)v56 < DYNENT_BASIS_COUNT );
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
DynEntCl_IsAnyClientInitialized
==============
*/
bool DynEntCl_IsAnyClientInitialized()
{
  return s_dynEntsInitialized != 0;
}

/*
==============
DynEntCl_IsInitialized
==============
*/
unsigned __int8 DynEntCl_IsInitialized(LocalClientNum_t localClientNum)
{
  int v1; 

  v1 = s_dynEntsInitialized;
  return _bittest(&v1, localClientNum);
}

/*
==============
DynEntCl_IsZoneVisible
==============
*/
bool DynEntCl_IsZoneVisible(LocalClientNum_t localClientNum, const unsigned int transientIndex)
{
  if ( !transientIndex )
    return 1;
  if ( !CL_TransientsSP_AreGameSystemsInitialized() )
    return CL_TransientsWorld_GetVisibility(localClientNum, transientIndex);
  if ( transientIndex < 0x20 )
    return CL_TransientsSP_IsGameSystemTransientLoaded(transientIndex);
  return 0;
}

/*
==============
DynEntCl_Shutdown
==============
*/
void DynEntCl_Shutdown(LocalClientNum_t localClientNum)
{
  int v1; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  __int64 v5; 
  DynEntityListId v6; 
  DynEntityList *v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = s_dynEntsInitialized;
  if ( _bittest(&v1, localClientNum) )
  {
    s_dynEntsInitialized &= ~(1 << localClientNum);
    DynEntCL_RemoveAllActiveEntities(localClientNum, 1);
    DynEntCL_Spatial_Shutdown(localClientNum);
    if ( !s_dynEntsInitialized )
    {
      if ( cm.mapEnts )
      {
        dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
        dynEntListIds = cm.mapEnts->dynEntListIds;
      }
      else
      {
        dynEntityListsCount = 0;
        dynEntListIds = NULL;
      }
      if ( dynEntityListsCount )
      {
        v5 = (unsigned __int16)dynEntityListsCount;
        do
        {
          v6 = *dynEntListIds;
          if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(v9) = 1536;
            LODWORD(v8) = (unsigned __int16)v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v8, v9) )
              __debugbreak();
          }
          v7 = &g_dynEntityLists[(unsigned __int64)(unsigned __int16)v6];
          if ( v7->index == DEFAULT_DYNENTITY_LIST_ID )
            v7 = NULL;
          if ( v7 )
          {
            if ( v7->index == DYNENTITY_LIST_ID_UNLOADING )
              v7->index = DEFAULT_DYNENTITY_LIST_ID;
          }
          ++dynEntListIds;
          --v5;
        }
        while ( v5 );
      }
    }
  }
}

/*
==============
DynEnt_AddWorkerCmd_UpdateSpatialClientDataSettings
==============
*/
void DynEnt_AddWorkerCmd_UpdateSpatialClientDataSettings(SpatialPartition_PopulationSort_ClientData *spatialClientData, DynEntitySpatialPopulationType populationIndex)
{
  int activeCount; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  __int64 v17; 
  __int64 v18; 

  if ( !spatialClientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1561, ASSERT_TYPE_ASSERT, "(spatialClientData)", (const char *)&queryFormat, "spatialClientData") )
    __debugbreak();
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  activeCount = cls.m_localClientsActive.activeCount;
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1563, ASSERT_TYPE_ASSERT, "( localClientActiveCount ) > ( 0 )", "%s > %s\n\t%i, %i", "localClientActiveCount", "0", cls.m_localClientsActive.activeCount, 0i64) )
    __debugbreak();
  if ( populationIndex )
  {
    if ( populationIndex == DYNENT_SPATIAL_POPULATION_SPARSE_OCCLUDER_TYPE )
    {
      if ( spatialClientData->priorityCount != 1 )
      {
        LODWORD(v18) = 1;
        LODWORD(v17) = spatialClientData->priorityCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1577, ASSERT_TYPE_ASSERT, "( spatialClientData->priorityCount ) == ( 1 )", "%s == %s\n\t%u, %u", "spatialClientData->priorityCount", "1", v17, v18) )
          __debugbreak();
      }
      v5 = DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame;
      if ( !DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxAddSparseOccluderPerFrame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      spatialClientData->settings.maxAddPerUpdate = v5->current.integer / activeCount;
      v6 = DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame;
      if ( !DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxRemoveSparseOccluderPerFrame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      spatialClientData->settings.maxRemovePerUpdate = v6->current.integer / activeCount;
      v7 = DVARINT_dynEnt_spatialMaxOccluderEnts;
      if ( !DVARINT_dynEnt_spatialMaxOccluderEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxOccluderEnts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      v8 = v7->current.integer / activeCount;
      spatialClientData->settings.maxActivatedTotal = v8;
      spatialClientData->settings.maxActivatedForPriority[0] = v8;
      v9 = DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder;
      if ( !DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxDistanceSparseOccluder") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      LODWORD(spatialClientData->settings.maxDistanceForPriority[0]) = v9->current.integer;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1585, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown dynEnt population type") )
    {
      __debugbreak();
    }
  }
  else
  {
    if ( spatialClientData->priorityCount != 2 )
    {
      LODWORD(v18) = 2;
      LODWORD(v17) = spatialClientData->priorityCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1567, ASSERT_TYPE_ASSERT, "( spatialClientData->priorityCount ) == ( 2 )", "%s == %s\n\t%u, %u", "spatialClientData->priorityCount", "2", v17, v18) )
        __debugbreak();
    }
    v10 = DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame;
    if ( !DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxAddPerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    spatialClientData->settings.maxAddPerUpdate = v10->current.integer / activeCount;
    v11 = DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame;
    if ( !DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxRemovePerFrame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    spatialClientData->settings.maxRemovePerUpdate = v11->current.integer / activeCount;
    v12 = DVARINT_dynEnt_spatialMaxEnts;
    if ( !DVARINT_dynEnt_spatialMaxEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxEnts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    spatialClientData->settings.maxActivatedTotal = v12->current.integer / activeCount;
    v13 = DVARINT_dynEnt_spatialMaxEntsLowPrio;
    if ( !DVARINT_dynEnt_spatialMaxEntsLowPrio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxEntsLowPrio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    spatialClientData->settings.maxActivatedForPriority[0] = v13->current.integer / activeCount;
    v14 = DVARINT_dynEnt_spatialMaxEntsHighPrio;
    if ( !DVARINT_dynEnt_spatialMaxEntsHighPrio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxEntsHighPrio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    spatialClientData->settings.maxActivatedForPriority[1] = v14->current.integer / activeCount;
    v15 = DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio;
    if ( !DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxDistanceLowPrio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    LODWORD(spatialClientData->settings.maxDistanceForPriority[0]) = v15->current.integer;
    v16 = DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio;
    if ( !DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialMaxDistanceHighPrio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    LODWORD(spatialClientData->settings.maxDistanceForPriority[1]) = v16->current.integer;
  }
}

/*
==============
DynEnt_AllocateClientMemory
==============
*/
void DynEnt_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  __int64 v2; 
  unsigned __int8 v3; 
  unsigned __int16 *v4; 
  __int64 v5; 
  MapEnts *mapEnts; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  signed int v11; 
  unsigned __int8 v12; 
  signed int v13; 
  unsigned int *v14; 
  __int64 v15; 
  signed __int64 v16; 
  unsigned __int16 *v17; 
  __int64 v18; 
  char *v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int64 v22; 
  DynEntityPose *v23; 
  unsigned __int16 v24; 
  int dynEntMaxPosePartCount; 
  unsigned __int64 v26; 
  DynEntityClient *v27; 
  DynEnt_ExtraPosePart *v28; 
  void *v29; 
  __int64 v30; 
  unsigned int v31; 
  bool v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int size; 
  __int64 v36; 
  unsigned int *v37; 
  __int64 v38; 
  unsigned __int16 v41; 

  v2 = maxLocalClients;
  if ( s_dynEntsClientsAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 907, ASSERT_TYPE_ASSERT, "( s_dynEntsClientsAllocated ) == ( 0 )", "%s == %s\n\t%u, %u", "s_dynEntsClientsAllocated", "0", s_dynEntsClientsAllocated, 0i64) )
    __debugbreak();
  if ( (unsigned int)v2 > 2 )
  {
    LODWORD(v34) = 2;
    LODWORD(v33) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 908, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( 2 )", "%s <= %s\n\t%u, %u", "maxLocalClients", "STATIC_MAX_LOCAL_CLIENTS", v33, v34) )
      __debugbreak();
  }
  v3 = 0;
  s_dynEntsClientsAllocated = v2;
  v4 = &v41;
  v5 = 400i64;
  do
  {
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts && (_DWORD)v2 )
    {
      v7 = *(unsigned __int16 *)((char *)v4 + 440i64 - (_QWORD)&v41 + (unsigned __int64)cm.mapEnts);
      if ( v7 > *(_DWORD *)((char *)&cm.mapEnts->name + v5) )
      {
        LODWORD(v34) = *(_DWORD *)((char *)&cm.mapEnts->name + v5);
        LODWORD(v33) = *(unsigned __int16 *)((char *)v4 + 440i64 - (_QWORD)&v41 + (unsigned __int64)cm.mapEnts);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 363, ASSERT_TYPE_ASSERT, "( noSpatialCount ) <= ( mapEnts->dynEntCount[basis] )", "%s <= %s\n\t%u, %u", "noSpatialCount", "mapEnts->dynEntCount[basis]", v33, v34) )
          __debugbreak();
      }
      v8 = *(_DWORD *)((char *)&mapEnts->name + v5) - v7 + 10;
      if ( v8 > mapEnts->dynEntMaxClientHistoryCount / (unsigned int)v2 )
        v8 = mapEnts->dynEntMaxClientHistoryCount / (unsigned int)v2;
      v9 = truncate_cast<unsigned short,unsigned int>(v8);
      v10 = truncate_cast<unsigned short,int>(v7 + v9);
    }
    else
    {
      v10 = 0;
    }
    *v4++ = v10;
    ++v3;
    v5 += 4i64;
  }
  while ( v3 < 2u );
  if ( !cm.mapEnts )
  {
    v11 = 0;
LABEL_20:
    v12 = 0;
    goto LABEL_21;
  }
  dynEntMaxPosePartCount = cm.mapEnts->dynEntMaxPosePartCount;
  if ( (unsigned int)(dynEntMaxPosePartCount + 2) <= 0xA )
    LOBYTE(dynEntMaxPosePartCount) = dynEntMaxPosePartCount + 2;
  v11 = cm.mapEnts->dynEntsWithExtraPosePartsCount + 10;
  if ( (unsigned __int8)dynEntMaxPosePartCount <= 1u )
    goto LABEL_20;
  v12 = dynEntMaxPosePartCount - 1;
LABEL_21:
  v13 = v41;
  g_dynEntPoseExtraPosePartsStride = v12;
  if ( v11 < v41 )
    v13 = v11;
  size = v13 * v12;
  if ( (_DWORD)v2 )
  {
    v14 = g_dynEntExtraPosePartsAllocCount;
    v38 = v2;
    v15 = 0i64;
    v37 = g_dynEntExtraPosePartsAllocCount;
    v36 = 0i64;
    v16 = (char *)g_dynEntClientEntsAllocCount - (char *)g_dynEntExtraPosePartsAllocCount - (_QWORD)&v41;
    do
    {
      v17 = &v41;
      v18 = 2i64;
      v19 = (char *)v14 + v16;
      do
      {
        v20 = *v17;
        if ( *v17 )
        {
          v21 = *v17;
          if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
            __debugbreak();
          v22 = 112i64 * v20;
          v23 = (DynEntityPose *)Mem_HunkUser_AllocInternal(hunkUser, v22, 4ui64, "DynEnt_AllocBuf");
          memset_0(v23, 0, v22);
          v24 = v21;
          g_dynEntPoseLists[0][v15] = v23;
          if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
          {
            __debugbreak();
            v24 = *v17;
          }
          v26 = 56i64 * v21;
          v27 = (DynEntityClient *)Mem_HunkUser_AllocInternal(hunkUser, v26, 8ui64, "DynEnt_AllocBuf");
          memset_0(v27, 0, v26);
        }
        else
        {
          v24 = 0;
          g_dynEntPoseLists[0][v15] = NULL;
          v27 = NULL;
        }
        g_dynEntClientLists[0][v15++] = v27;
        *(_WORD *)&v19[(_QWORD)v17++] = v24;
        --v18;
      }
      while ( v18 );
      if ( size )
      {
        if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
          __debugbreak();
        v28 = (DynEnt_ExtraPosePart *)Mem_HunkUser_AllocInternal(hunkUser, 28i64 * size, 4ui64, "DynEnt_AllocBuf");
        memset_0(v28, 0, 28i64 * size);
        *(DynEnt_ExtraPosePart **)((char *)g_dynEntPoseExtraParts + v36) = v28;
        if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
          __debugbreak();
        v29 = Mem_HunkUser_AllocInternal(hunkUser, size, 1ui64, "DynEnt_AllocBuf");
        memset_0(v29, 0, size);
        v30 = v36;
        v31 = size;
      }
      else
      {
        v30 = v36;
        v31 = 0;
        v29 = NULL;
        *(DynEnt_ExtraPosePart **)((char *)g_dynEntPoseExtraParts + v36) = NULL;
      }
      *(unsigned __int8 **)((char *)g_dynEntPoseExtraDetailBodyToBoneMap + v30) = (unsigned __int8 *)v29;
      v36 = v30 + 8;
      *v37 = v31;
      v14 = v37 + 1;
      v32 = v38-- == 1;
      v16 = (char *)g_dynEntClientEntsAllocCount - (char *)g_dynEntExtraPosePartsAllocCount - (_QWORD)&v41;
      ++v37;
    }
    while ( !v32 );
    LODWORD(v2) = maxLocalClients;
  }
  DynEnt_Linking_AllocateClientMemory(hunkUser, v2);
  DynEntCL_Spatial_AllocateClientMemory(hunkUser, v2);
}

/*
==============
DynEnt_FreeClientMemory
==============
*/
void DynEnt_FreeClientMemory(void)
{
  DynEntCL_Spatial_FreeClientMemory();
  DynEnt_Linking_FreeClientMemory();
  s_dynEntsClientsAllocated = 0;
  *(_OWORD *)&g_dynEntPoseLists[0][0] = 0ui64;
  *(_OWORD *)&g_dynEntPoseLists[1][0] = 0ui64;
  *(_OWORD *)&g_dynEntClientLists[0][0] = 0ui64;
  *(_OWORD *)&g_dynEntClientLists[1][0] = 0ui64;
  g_dynEntPoseExtraParts[0] = NULL;
  g_dynEntPoseExtraParts[1] = NULL;
  g_dynEntPoseExtraDetailBodyToBoneMap[0] = NULL;
  g_dynEntPoseExtraDetailBodyToBoneMap[1] = NULL;
  g_dynEntPoseExtraPosePartsStride = 0;
  *(_QWORD *)&g_dynEntClientEntsAllocCount[0][0] = 0i64;
  *(_QWORD *)g_dynEntExtraPosePartsAllocCount = 0i64;
}

/*
==============
DynEnt_MaxSpatialActivatedTotal
==============
*/
__int64 DynEnt_MaxSpatialActivatedTotal(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int8 v2; 
  unsigned __int16 *v3; 
  int v4; 
  __int64 v5; 
  unsigned __int16 v6; 
  int v7; 
  int v10; 
  __int64 v11; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)s_dynEntsClientsAllocated )
  {
    v10 = s_dynEntsClientsAllocated;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1544, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( s_dynEntsClientsAllocated )", "localClientNum doesn't index s_dynEntsClientsAllocated\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  v2 = 0;
  v3 = g_dynEntClientEntsAllocCount[v1 - 110];
  v4 = 0;
  v5 = 220i64;
  do
  {
    if ( cm.mapEnts )
      v6 = *(_WORD *)((char *)&cm.mapEnts->name + v5 * 2);
    else
      v6 = 0;
    v7 = v3[v5] - v6;
    if ( v7 < 0 )
    {
      LODWORD(v11) = v3[v5] - v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1549, ASSERT_TYPE_ASSERT, "( allocatedMinusNoSpatial ) >= ( 0 )", "%s >= %s\n\t%i, %i", "allocatedMinusNoSpatial", "0", v11, 0i64) )
        __debugbreak();
    }
    if ( v7 <= v4 )
      v7 = v4;
    ++v2;
    ++v5;
    v4 = v7;
  }
  while ( v2 < 2u );
  return (unsigned int)v7;
}

/*
==============
DynEntCL_Active_Iterator::Init
==============
*/
void DynEntCL_Active_Iterator::Init(DynEntCL_Active_Iterator *this, LocalClientNum_t localClientNum, DynEntityBasis filterBasis)
{
  unsigned int v5; 
  unsigned int v6; 

  this->m_localClientNum = localClientNum;
  if ( filterBasis == DYNENT_BASIS_COUNT )
  {
    v5 = 2;
    v6 = 0;
  }
  else
  {
    if ( (unsigned __int8)filterBasis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.cpp", 1863, ASSERT_TYPE_ASSERT, "(unsigned)( filterBasis ) < (unsigned)( DYNENT_BASIS_COUNT )", "filterBasis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)filterBasis, 2) )
      __debugbreak();
    v6 = (unsigned __int8)filterBasis;
    v5 = (unsigned __int8)filterBasis + 1;
  }
  this->m_curBasis = v6;
  this->m_curBasisIterLimit = v5;
  this->m_nextIndex = g_dynEntNoEvictClientHead[this->m_localClientNum][this->m_curBasis];
  this->m_curIndex = -1;
  this->m_curNode = NULL;
}

