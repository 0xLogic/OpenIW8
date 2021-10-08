/*
==============
CG_SnapshotSP_GetNextSnap
==============
*/

const CgSnapshotSP *__fastcall CG_SnapshotSP_GetNextSnap(const LocalClientNum_t localClientNum)
{
  return ?CG_SnapshotSP_GetNextSnap@@YAPEBUCgSnapshotSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotSP_ProcessSnapshots
==============
*/

void __fastcall CG_SnapshotSP_ProcessSnapshots(const LocalClientNum_t localClientNum)
{
  ?CG_SnapshotSP_ProcessSnapshots@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotSP_ShutdownEntity
==============
*/

void __fastcall CG_SnapshotSP_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_SnapshotSP_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgSnapshotSP::GetServerPing
==============
*/

int __fastcall CgSnapshotSP::GetServerPing(CgSnapshotSP *this)
{
  return ?GetServerPing@CgSnapshotSP@@UEBAHXZ(this);
}

/*
==============
CG_SnapshotSP_SetNextSnap
==============
*/

void __fastcall CG_SnapshotSP_SetNextSnap(LocalClientNum_t localClientNum)
{
  ?CG_SnapshotSP_SetNextSnap@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSnapshotSP::GetPlayerState
==============
*/

const playerState_s *__fastcall CgSnapshotSP::GetPlayerState(CgSnapshotSP *this, const LocalClientNum_t localClientNum)
{
  return ?GetPlayerState@CgSnapshotSP@@UEBAPEBUplayerState_s@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_SnapshotSP_FreeSnapshots
==============
*/

void CG_SnapshotSP_FreeSnapshots(void)
{
  ?CG_SnapshotSP_FreeSnapshots@@YAXXZ();
}

/*
==============
CG_SnapshotSP_AllocateSnapshots
==============
*/

void __fastcall CG_SnapshotSP_AllocateSnapshots(HunkUser *hunkUser, const int maxLocalClients)
{
  ?CG_SnapshotSP_AllocateSnapshots@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_SnapshotSP_FirstSnapshot
==============
*/

void __fastcall CG_SnapshotSP_FirstSnapshot(LocalClientNum_t localClientNum)
{
  ?CG_SnapshotSP_FirstSnapshot@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotSP_ClearSnapshots
==============
*/

void __fastcall CG_SnapshotSP_ClearSnapshots(const LocalClientNum_t localClientNum)
{
  ?CG_SnapshotSP_ClearSnapshots@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotSP_CreateNextSnap
==============
*/

void __fastcall CG_SnapshotSP_CreateNextSnap(LocalClientNum_t localClientNum, float dtime, int readNext)
{
  ?CG_SnapshotSP_CreateNextSnap@@YAXW4LocalClientNum_t@@MH@Z(localClientNum, dtime, readNext);
}

/*
==============
CG_SnapshotSP_GetPrevSnap
==============
*/

const CgSnapshotSP *__fastcall CG_SnapshotSP_GetPrevSnap(const LocalClientNum_t localClientNum)
{
  return ?CG_SnapshotSP_GetPrevSnap@@YAPEBUCgSnapshotSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotSP_AddPlayerEntityToNextSnap
==============
*/
void CG_SnapshotSP_AddPlayerEntityToNextSnap(LocalClientNum_t localClientNum, playerState_s *const nextPs, int readNext)
{
  int v3; 
  CgGlobalsSP *LocalClientGlobals; 
  playerState_s *ps; 
  int v8; 
  __int64 clientNum; 
  const DObj *ServerDObjForEntnum; 
  const XAnimTree *Tree; 
  const entityState_t *SnapshotEntityState; 
  __int64 v13; 
  DObj *v14; 
  const DObj *v15; 
  unsigned int v16; 
  __int64 v17; 
  const XAnimTree *v18; 
  const entityState_t *v19; 
  playerState_s *v20; 
  __int64 v21; 
  __int64 v22; 

  v3 = readNext;
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 911, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ps = LocalClientGlobals->ps;
  v8 = 0;
  if ( ps )
  {
    clientNum = ps->clientNum;
    if ( (_DWORD)clientNum != LocalClientGlobals->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 918, ASSERT_TYPE_ASSERT, "( entnum ) == ( cgameGlob->clientNum )", "%s == %s\n\t%i, %i", "entnum", "cgameGlob->clientNum", clientNum, LocalClientGlobals->clientNum) )
      __debugbreak();
    v8 = 1;
    if ( Com_ServerDObjDirty(clientNum) )
    {
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(clientNum);
      if ( !ServerDObjForEntnum || (Tree = DObjGetTree(ServerDObjForEntnum), SnapshotEntityState = CG_GetSnapshotEntityState(clientNum), CG_SnapshotSP_DObjCloneToBuffer(localClientNum, SnapshotEntityState, Tree, ANIM_NOTE_NONE)) )
      {
        Com_ServerDObjClean(clientNum);
        s_clientDirty[clientNum >> 5] |= 0x80000000 >> (clientNum & 0x1F);
      }
    }
  }
  if ( nextPs )
  {
    v13 = nextPs->clientNum;
    if ( (_DWORD)v13 != LocalClientGlobals->clientNum )
    {
      LODWORD(v22) = LocalClientGlobals->clientNum;
      LODWORD(v21) = nextPs->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 945, ASSERT_TYPE_ASSERT, "( entnum ) == ( cgameGlob->clientNum )", "%s == %s\n\t%i, %i", "entnum", "cgameGlob->clientNum", v21, v22) )
        __debugbreak();
    }
    v14 = Com_GetServerDObjForEntnum(v13);
    v15 = v14;
    if ( v14 )
    {
      if ( v8 )
      {
        v8 = 0;
        if ( (v14->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 960, ASSERT_TYPE_ASSERT, "(serverObj->flags & 0x01)", (const char *)&queryFormat, "serverObj->flags & DOBJFLAGS_NO_TRANSFER") )
          __debugbreak();
      }
      else
      {
        v16 = 0x80000000 >> (v13 & 0x1F);
        v17 = v13 >> 5;
        if ( (v16 & s_clientDirty[v17]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 965, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum )))", (const char *)&queryFormat, "!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum ))") )
          __debugbreak();
        v18 = DObjGetTree(v15);
        v19 = CG_GetSnapshotEntityState(v13);
        if ( CG_SnapshotSP_DObjCloneToBuffer(localClientNum, v19, v18, ANIM_NOTE_NONE) )
        {
          Com_ServerDObjClean(v13);
          s_clientDirty[v17] |= v16;
        }
        v3 = readNext;
      }
    }
    else
    {
      v8 = 0;
    }
  }
  v20 = LocalClientGlobals->ps;
  if ( v20 && v3 )
  {
    if ( v8 )
      s_centInPrevSnapshot[(unsigned __int64)(unsigned int)v20->clientNum >> 5] |= 0x80000000 >> (v20->clientNum & 0x1F);
  }
}

/*
==============
CG_SnapshotSP_AllocateSnapshots
==============
*/
void CG_SnapshotSP_AllocateSnapshots(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  CgSnapshotSP **v4; 
  __int64 v5; 
  CgSnapshotSP *v6; 
  _QWORD *v7; 

  v2 = (unsigned int)maxLocalClients;
  if ( (unsigned int)maxLocalClients > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2122, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", maxLocalClients, 0i64, 2) )
    __debugbreak();
  if ( (int)v2 > 0 )
  {
    v4 = s_spActiveSnapshots;
    v5 = v2;
    do
    {
      if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2127, ASSERT_TYPE_ASSERT, "(s_spActiveSnapshots[localClientIndex] == 0)", (const char *)&queryFormat, "s_spActiveSnapshots[localClientIndex] == NULL") )
        __debugbreak();
      v6 = (CgSnapshotSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x246B0ui64, 0x80ui64, "CG_SnapshotSP_AllocateSnapshots");
      *v4 = v6;
      v7 = &v6->__vftable;
      memset_0(&v6->snapFlags, 0, 0x12350ui64);
      *v7 = &CgSnapshotSP::`vftable';
      memset_0(v7 + 9324, 0, 0x12350ui64);
      ++v4;
      v7[9323] = &CgSnapshotSP::`vftable';
      --v5;
    }
    while ( v5 );
  }
  if ( s_clientDirty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2141, ASSERT_TYPE_ASSERT, "(s_clientDirty == 0)", (const char *)&queryFormat, "s_clientDirty == NULL") )
    __debugbreak();
  s_clientDirty = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 0x100ui64, 0x80ui64, "CG_SnapshotSP_AllocateSnapshots");
  memset_0(s_clientDirty, 0, 0x100ui64);
  if ( s_centInPrevSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2145, ASSERT_TYPE_ASSERT, "(s_centInPrevSnapshot == 0)", (const char *)&queryFormat, "s_centInPrevSnapshot == NULL") )
    __debugbreak();
  s_centInPrevSnapshot = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 0x100ui64, 0x80ui64, "CG_SnapshotSP_AllocateSnapshots");
  memset_0(s_centInPrevSnapshot, 0, 0x100ui64);
  s_spAllocatedClientCount = v2;
  CG_Snapshot_SetSnapshotType(SNAP_TYPE_SP);
}

/*
==============
CG_SnapshotSP_CheckSnapshot
==============
*/
void CG_SnapshotSP_CheckSnapshot(const char *caller, LocalClientNum_t localClientNum, int transitionState)
{
  __int64 v3; 
  CgSnapshotSP *NextSnap_Internal; 
  __int64 numEntities; 
  unsigned __int16 *entityNums; 
  __int64 v9; 
  const snapshot_t *snap; 
  __int64 v11; 
  unsigned __int16 *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  int v18; 
  char *v19; 
  __int64 v20; 
  __int64 v21; 
  CgSnapshotType SnapshotType; 
  __int64 v23; 
  cg_t *LocalClientGlobals; 
  char v25; 
  char v26; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  memset_0(&v25, 0, 0x800ui64);
  NextSnap_Internal = CG_SnapshotSP_GetNextSnap_Internal((const LocalClientNum_t)v3);
  if ( NextSnap_Internal )
  {
    numEntities = NextSnap_Internal->numEntities;
    if ( numEntities > 0 )
    {
      entityNums = NextSnap_Internal->entityNums;
      do
      {
        v9 = *entityNums++;
        *(&v25 + v9) = 1;
        --numEntities;
      }
      while ( numEntities );
    }
  }
  if ( transitionState )
  {
    if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
    {
      SnapshotType = CG_Snapshot_GetSnapshotType();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 131, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetPrevSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", SnapshotType) )
        __debugbreak();
    }
    snap = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->snap;
    if ( snap )
    {
      v11 = SLODWORD(snap[1].__vftable);
      if ( v11 > 0 )
      {
        v12 = (unsigned __int16 *)&snap[2].__vftable + 2;
        do
        {
          v13 = *v12++;
          *(&v25 + v13) = 1;
          --v11;
        }
        while ( v11 );
      }
    }
  }
  v14 = 1;
  v15 = 1i64;
  v16 = 1i64;
  do
  {
    if ( !*(&v25 + v15) )
    {
      if ( ((0x80000000 >> (v14 & 0x1F)) & s_clientDirty[v16 >> 5]) != 0 )
      {
        LODWORD(v23) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 820, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum )))", "%s\n\t%s: entnum %d", "!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum ))", caller, v23) )
          __debugbreak();
      }
      if ( (unsigned int)v14 > 0x9E4 )
      {
        LODWORD(v21) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v21) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v21) = 2;
        LODWORD(v20) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( (unsigned int)(v14 + 2533 * v3) >= 0x13CA )
      {
        LODWORD(v21) = v14 + 2533 * v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v21) )
          __debugbreak();
      }
      v17 = clientObjMap[2533 * v3 + v15];
      if ( clientObjMap[2533 * v3 + v15] )
      {
        if ( v17 >= (unsigned int)s_objCount )
        {
          LODWORD(v21) = clientObjMap[2533 * v3 + v15];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v21) )
            __debugbreak();
        }
        if ( s_objBuf[v17] )
        {
          LODWORD(v23) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 821, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( entnum, localClientNum ))", "%s\n\t%s: entnum %d", "!Com_GetClientDObj( entnum, localClientNum )", caller, v23) )
            __debugbreak();
        }
      }
    }
    ++v14;
    ++v16;
    ++v15;
  }
  while ( v14 < 2048 );
  v18 = 1;
  if ( LocalClientGlobals->nextSnap || LocalClientGlobals->snap )
  {
    v19 = &v26;
    do
    {
      if ( !*v19 )
      {
        CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
        if ( (unsigned int)v18 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
      }
      ++v18;
      ++v19;
    }
    while ( v18 < 2048 );
  }
}

/*
==============
CG_SnapshotSP_ClearSnapshots
==============
*/
void CG_SnapshotSP_ClearSnapshots(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  CgSnapshotSP *v6; 
  __int64 v8; 
  int v9; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)s_spAllocatedClientCount )
  {
    v9 = s_spAllocatedClientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2103, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( s_spAllocatedClientCount )", "localClientNum doesn't index s_spAllocatedClientCount\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(v8) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2104, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_FreeSnapshots: Trying to free single-player snapshots but the snapshot system has not allocated single-player snaps. Allocated type is:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", v8) )
      __debugbreak();
  }
  v2 = v1;
  v3 = 1i64;
  v4 = 1;
  v5 = 1i64;
  do
  {
    ((void (__fastcall *)(CgSnapshotSP *, _QWORD))s_spActiveSnapshots[v2][v3].~snapshot_t)(&s_spActiveSnapshots[v2][v5], 0i64);
    --v4;
    --v5;
    --v3;
  }
  while ( v4 >= 0 );
  v6 = s_spActiveSnapshots[v2];
  memset_0(&v6->snapFlags, 0, 0x12350ui64);
  v6->__vftable = (CgSnapshotSP_vtbl *)&CgSnapshotSP::`vftable';
  memset_0(&v6[1].snapFlags, 0, 0x12350ui64);
  v6[1].__vftable = (CgSnapshotSP_vtbl *)&CgSnapshotSP::`vftable';
}

/*
==============
CG_SnapshotSP_CreateNextSnap
==============
*/

void __fastcall CG_SnapshotSP_CreateNextSnap(LocalClientNum_t localClientNum, double dtime, int readNext)
{
  __int64 v6; 
  CgGlobalsSP *LocalClientGlobals; 
  __int64 v9; 
  CgSnapshotSP *v10; 
  int ControllerFromClient; 
  unsigned int v12; 
  OmnvarData *v13; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  unsigned __int8 flags; 
  bool v17; 
  __int64 v18; 
  CgSnapshotSP *v19; 
  int v20; 
  unsigned __int16 *entityNums; 
  int v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  const DObj *ServerDObjForEntnum; 
  const XAnimTree *Tree; 
  const entityState_t *SnapshotEntityState; 
  int IsScriptableMoverEntityState; 
  scriptAnimNoteType_t v29; 
  int v30; 
  unsigned __int16 *v31; 
  unsigned __int64 v32; 
  DObj *v33; 
  unsigned int v34; 
  unsigned __int64 v35; 
  int v36; 
  DObj *ClientDObjBuffered; 
  char v38; 
  const XAnimTree *v40; 
  const entityState_t *v41; 
  int v42; 
  scriptAnimNoteType_t v43; 
  int v45; 
  unsigned int *v46; 
  unsigned __int16 *v47; 
  unsigned __int64 v48; 
  unsigned int v49; 
  playerState_s *nextPs; 
  CgSnapshotSP *v52; 
  unsigned __int16 *v53; 
  CgSnapshotSP *NextSnap_Internal; 
  CgGlobalsSP *v55; 
  int v56[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  v6 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmm6, xmm1
  }
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v55 = LocalClientGlobals;
  if ( LocalClientGlobals->createdNextSnap )
  {
    if ( readNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1007, ASSERT_TYPE_ASSERT, "(!readNext)", (const char *)&queryFormat, "!readNext") )
      __debugbreak();
    CG_SnapshotSP_SetNextSnap((LocalClientNum_t)v6);
  }
  CG_SnapshotSP_CheckSnapshot("CG_CreateNextSnap(pre)", (LocalClientNum_t)v6, 0);
  if ( LocalClientGlobals->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1015, ASSERT_TYPE_ASSERT, "(!cgameGlob->createdNextSnap)", (const char *)&queryFormat, "!cgameGlob->createdNextSnap") )
    __debugbreak();
  LocalClientGlobals->createdNextSnap = 1;
  v9 = 0i64;
  NextSnap_Internal = CG_SnapshotSP_GetNextSnap_Internal((const LocalClientNum_t)v6);
  v10 = NextSnap_Internal;
  if ( NextSnap_Internal )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
    v12 = 0;
    if ( BG_Omnvar_PerGameCount() )
    {
      do
      {
        v13 = &NextSnap_Internal->gameOmnvars.omnvars[v12];
        Data = CG_Omnvar_GetData((LocalClientNum_t)v6, v12);
        Def = BG_Omnvar_GetDef(v12);
        flags = Def->flags;
        if ( (flags & 8) != 0 )
        {
          if ( (flags & 1) != 0 && v13->timeModified != Data->timeModified && !CG_Omnvar_AreValuesEqual(Def, &NextSnap_Internal->gameOmnvars.omnvars[v12], Data) )
            LUI_NotifyOmnvarChanged(ControllerFromClient, Def, &NextSnap_Internal->gameOmnvars.omnvars[v12], LUI_luaVM);
          *Data = *v13;
        }
        ++v12;
      }
      while ( v12 < BG_Omnvar_PerGameCount() );
      LocalClientGlobals = v55;
      v9 = 0i64;
    }
  }
  LocalClientGlobals->snap = NextSnap_Internal;
  DObjInitTransfer();
  v17 = readNext == 0;
  v18 = 0i64;
  if ( v17 )
  {
    v52 = NULL;
  }
  else
  {
    v19 = s_spActiveSnapshots[v6];
    if ( LocalClientGlobals->snap == v19 )
      v18 = 74584i64;
    v18 += (__int64)v19;
    v52 = (CgSnapshotSP *)v18;
    CL_CGameSP_GetSnapshotCommon((CgSnapshotSP *)v18);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1039, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
  }
  LocalClientGlobals->nextSnap = (const snapshot_t *)v18;
  memset_0(v56, 0, sizeof(v56));
  if ( NextSnap_Internal )
  {
    v20 = 0;
    if ( NextSnap_Internal->numEntities > 0 )
    {
      entityNums = NextSnap_Internal->entityNums;
      do
      {
        v22 = *entityNums;
        v23 = (unsigned __int64)*entityNums >> 5;
        v24 = 0x80000000 >> (*entityNums & 0x1F);
        v56[v23] |= v24;
        if ( Com_ServerDObjDirty(v22) )
        {
          ServerDObjForEntnum = Com_GetServerDObjForEntnum(v22);
          if ( !ServerDObjForEntnum )
            goto LABEL_34;
          Tree = DObjGetTree(ServerDObjForEntnum);
          SnapshotEntityState = CG_GetSnapshotEntityState(v22);
          IsScriptableMoverEntityState = ScriptableCl_IsScriptableMoverEntityState(SnapshotEntityState);
          v29 = ANIM_NOTE_NONE;
          if ( IsScriptableMoverEntityState )
            v29 = ANIM_NOTE_SCRIPTABLE;
          if ( CG_SnapshotSP_DObjCloneToBuffer((const LocalClientNum_t)v6, SnapshotEntityState, Tree, v29) )
          {
LABEL_34:
            Com_ServerDObjClean(v22);
            s_clientDirty[v23] |= v24;
          }
        }
        v10 = NextSnap_Internal;
        ++v20;
        ++entityNums;
      }
      while ( v20 < NextSnap_Internal->numEntities );
      v18 = (__int64)v52;
      v9 = 0i64;
    }
  }
  if ( v18 )
  {
    v30 = 0;
    if ( *(int *)(v18 + 16) > 0 )
    {
      v31 = (unsigned __int16 *)(v18 + 36);
      v53 = (unsigned __int16 *)(v18 + 36);
      do
      {
        v32 = *v31;
        v33 = Com_GetServerDObjForEntnum(*v31);
        v34 = 0x80000000 >> (v32 & 0x1F);
        v35 = (unsigned __int64)(unsigned int)v32 >> 5;
        v36 = v56[v35];
        if ( v33 )
        {
          if ( (v34 & v36) != 0 )
          {
            v56[v35] = v36 & ~v34;
            if ( (v34 & s_clientDirty[v35]) != 0 )
            {
              ClientDObjBuffered = Com_GetClientDObjBuffered(v32, (LocalClientNum_t)v6);
              v38 = 1;
            }
            else
            {
              ClientDObjBuffered = Com_GetClientDObj(v32, (LocalClientNum_t)v6);
              v38 = 0;
            }
            if ( ClientDObjBuffered && (v38 || (v33->flags & 1) == 0) )
            {
              __asm { vmovaps xmm2, xmm6; dtime }
              DObjTransfer(v33, ClientDObjBuffered, *(float *)&_XMM2);
            }
          }
          else
          {
            if ( (v34 & s_clientDirty[v35]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1129, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[indexHigh] & BitShiftMasked( entnum )))", (const char *)&queryFormat, "!(s_clientDirty[indexHigh] & BitShiftMasked( entnum ))") )
              __debugbreak();
            v40 = DObjGetTree(v33);
            v41 = CG_GetSnapshotEntityState(v32);
            v42 = ScriptableCl_IsScriptableMoverEntityState(v41);
            v43 = ANIM_NOTE_NONE;
            if ( v42 )
              v43 = ANIM_NOTE_SCRIPTABLE;
            if ( CG_SnapshotSP_DObjCloneToBuffer((const LocalClientNum_t)v6, v41, v40, v43) )
            {
              Com_ServerDObjClean(v32);
              s_clientDirty[v32 >> 5] |= v34;
            }
          }
        }
        else
        {
          v56[v35] = v36 & ~v34;
        }
        ++v30;
        v31 = ++v53;
      }
      while ( v30 < *(_DWORD *)(v18 + 16) );
      v10 = NextSnap_Internal;
      v9 = 0i64;
    }
  }
  __asm { vmovaps xmm6, [rsp+1A8h+var_48] }
  if ( v10 )
  {
    if ( readNext )
    {
      v45 = 0;
      if ( v10->numEntities > 0 )
      {
        v46 = s_centInPrevSnapshot;
        v47 = v10->entityNums;
        do
        {
          v48 = (unsigned __int64)*v47 >> 5;
          v49 = 0x80000000 >> (*v47 & 0x1F);
          if ( (v49 & v56[v48]) != 0 )
            v46[v48] |= v49;
          ++v45;
          ++v47;
        }
        while ( v45 < v10->numEntities );
      }
    }
  }
  nextPs = v55->nextPs;
  v55->ps = nextPs;
  if ( readNext )
  {
    if ( nextPs == v55->activePs )
      v9 = 21412i64;
    v9 += (__int64)v55->activePs;
    v55->serverLatestCommandSequence = CL_CGameSP_GetSnapshot((LocalClientNum_t)v6, (playerState_s *)v9);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1169, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
      __debugbreak();
  }
  v55->nextPs = (playerState_s *)v9;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    CG_SnapshotSP_AddPlayerEntityToNextSnap((LocalClientNum_t)v6, (playerState_s *const)v9, readNext);
  CG_SnapshotSP_CheckSnapshot("CG_CreateNextSnap(post)", (LocalClientNum_t)v6, 1);
}

/*
==============
CG_SnapshotSP_DObjCloneToBuffer
==============
*/
__int64 CG_SnapshotSP_DObjCloneToBuffer(const LocalClientNum_t localClientNum, const entityState_t *es, const XAnimTree *serverTree, scriptAnimNoteType_t animNote)
{
  __int16 v4; 
  XAnimTree *SmallTree; 
  entityType_s eType; 
  bool v10; 
  CgStatic *LocalClientStatics; 
  const char *v12; 
  XAnim_s *Anims; 
  XAnimOwner v14; 
  DObj *v15; 
  CgEntitySystem *EntitySystem; 
  vec3_t origin; 

  v4 = animNote;
  if ( !serverTree )
  {
LABEL_7:
    SmallTree = NULL;
    goto LABEL_8;
  }
  if ( es->eType == ET_PLAYER && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( es->number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 729, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( 1 )", "es->number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", es->number, 1) )
      __debugbreak();
    goto LABEL_7;
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( CgStatic::GetCharacterInfo(LocalClientStatics, es->number) )
  {
    v12 = serverTree->anims ? serverTree->anims->debugName : "<unknown>";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 739, ASSERT_TYPE_ASSERT, "(ci == nullptr)", "%s\n\tCreating animTree for character entity %d of type %d with tree %s", "ci == nullptr", es->number, es->eType, v12) )
      __debugbreak();
  }
  Anims = XAnimGetAnims(serverTree);
  LOBYTE(v14) = 1;
  SmallTree = Com_XAnimCreateSmallTree(Anims, v14);
  if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 745, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimCloneClientAnimTree(serverTree, SmallTree, v4);
LABEL_8:
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  v10 = ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM;
  v15 = Com_DObjCloneToBuffer(es->number, v10);
  DObjSetTree(v15, SmallTree);
  __asm
  {
    vmovss  xmm0, cs:__real@48000000
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm0
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
  }
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  CgEntitySystem::SetEntityOrigin(EntitySystem, es->number, &origin);
  return 1i64;
}

/*
==============
CG_SnapshotSP_FirstSnapshot
==============
*/

void __fastcall CG_SnapshotSP_FirstSnapshot(LocalClientNum_t localClientNum, double _XMM1_8)
{
  unsigned int v3; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  const snapshot_t *nextSnap; 
  __int64 v8; 
  __int64 v9; 
  int serverTime; 
  __int64 v11; 
  int ServerSnapTime; 

  v3 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = 0i64;
  LocalClientGlobals->firstSnapshot = 1;
  do
  {
    if ( s_clientDirty[v5] )
    {
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1966, ASSERT_TYPE_ASSERT, "( ( !s_clientDirty[i] ) )", "( i ) = %i", v8) )
        __debugbreak();
    }
    ++v3;
    ++v5;
  }
  while ( v3 < 0x40 );
  if ( LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1968, ASSERT_TYPE_ASSERT, "(!cgameGlob->snap)", (const char *)&queryFormat, "!cgameGlob->snap") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1969, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  LUI_CoD_PostRestart(localClientNum);
  __asm { vxorps  xmm1, xmm1, xmm1; dtime }
  CG_SnapshotSP_CreateNextSnap(localClientNum, *(float *)&_XMM1, 1);
  CG_SnapshotSP_SetInitialSnapshot(localClientNum);
  CG_SnapshotSP_SetNextSnap(localClientNum);
  CG_SnapshotSP_ProcessNextSnap(localClientNum);
  AimAssist_Setup(localClientNum, &LocalClientGlobals->predictedPlayerState, 32);
  CG_ViewSP_Init(localClientNum);
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1991, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1992, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    ServerSnapTime = G_MainSP_GetServerSnapTime();
    serverTime = LocalClientGlobals->nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1993, ASSERT_TYPE_ASSERT, "( cgameGlob->nextSnap->serverTime ) == ( G_MainSP_GetServerSnapTime() )", "%s == %s\n\t%i, %i", "cgameGlob->nextSnap->serverTime", "G_MainSP_GetServerSnapTime()", serverTime, ServerSnapTime) )
      __debugbreak();
  }
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2001, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( LocalClientGlobals->time - LocalClientGlobals->snap->serverTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2002, ASSERT_TYPE_ASSERT, "(cgameGlob->time - cgameGlob->snap->serverTime >= 0)", (const char *)&queryFormat, "cgameGlob->time - cgameGlob->snap->serverTime >= 0") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2003, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  nextSnap = LocalClientGlobals->nextSnap;
  if ( nextSnap != LocalClientGlobals->snap && nextSnap->serverTime - LocalClientGlobals->time <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2004, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0)", (const char *)&queryFormat, "cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    LODWORD(v11) = G_MainSP_GetServerSnapTime();
    LODWORD(v9) = LocalClientGlobals->nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2005, ASSERT_TYPE_ASSERT, "( cgameGlob->nextSnap->serverTime ) == ( G_MainSP_GetServerSnapTime() )", "%s == %s\n\t%i, %i", "cgameGlob->nextSnap->serverTime", "G_MainSP_GetServerSnapTime()", v9, v11) )
      __debugbreak();
  }
  LocalClientGlobals->firstSnapshot = 0;
}

/*
==============
CG_SnapshotSP_FreeSnapshots
==============
*/
void CG_SnapshotSP_FreeSnapshots(void)
{
  int v0; 
  void **v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 

  if ( CG_Snapshot_GetSnapshotType() == SNAP_TYPE_MP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2159, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() != CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tTrying to free single-player snapshots but multiplayer snapshots are allocated\n", "CG_Snapshot_GetSnapshotType() != CgSnapshotType::SNAP_TYPE_MP") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() == SNAP_TYPE_SP )
  {
    if ( s_spAllocatedClientCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2163, ASSERT_TYPE_ASSERT, "(s_spAllocatedClientCount > 0)", "%s\n\tCG_SnapshotSP_FreeSnapshots: Trying to free single-player snapshots but no client snapshots have been allocated\n", "s_spAllocatedClientCount > 0") )
      __debugbreak();
    if ( !s_clientDirty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2165, ASSERT_TYPE_ASSERT, "(s_clientDirty)", (const char *)&queryFormat, "s_clientDirty") )
      __debugbreak();
    s_clientDirty = NULL;
    if ( !s_centInPrevSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2168, ASSERT_TYPE_ASSERT, "(s_centInPrevSnapshot)", (const char *)&queryFormat, "s_centInPrevSnapshot") )
      __debugbreak();
    v0 = 0;
    s_centInPrevSnapshot = NULL;
    if ( s_spAllocatedClientCount > 0 )
    {
      v1 = (void **)s_spActiveSnapshots;
      do
      {
        if ( !*v1 )
        {
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2173, ASSERT_TYPE_ASSERT, "(s_spActiveSnapshots[localClientIndex])", "%s\n\tCG_SnapshotSP_FreeSnapshots: Trying to free single-player snapshots but the client's snapshots have not been allocated: Local client is:%d\n", "s_spActiveSnapshots[localClientIndex]", v5) )
            __debugbreak();
        }
        v2 = 74584i64;
        v3 = 1;
        v4 = 74584i64;
        do
        {
          (**(void (__fastcall ***)(char *, _QWORD))((char *)*v1 + v2))((char *)*v1 + v4, 0i64);
          --v3;
          v4 -= 74584i64;
          v2 -= 74584i64;
        }
        while ( v3 >= 0 );
        DebugWipe(*v1, 0x246B0ui64);
        *v1 = NULL;
        ++v0;
        ++v1;
      }
      while ( v0 < s_spAllocatedClientCount );
    }
    s_spAllocatedClientCount = 0;
    CG_Snapshot_SetSnapshotType(SNAP_TYPE_UNKNOWN);
  }
}

/*
==============
CG_SnapshotSP_GetNextSnap
==============
*/
const snapshot_t *CG_SnapshotSP_GetNextSnap(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 143, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap;
}

/*
==============
CG_SnapshotSP_GetNextSnap_Internal
==============
*/
const snapshot_t *CG_SnapshotSP_GetNextSnap_Internal(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 118, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap;
}

/*
==============
CG_SnapshotSP_GetPrevSnap
==============
*/
const snapshot_t *CG_SnapshotSP_GetPrevSnap(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 155, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetPrevSnap: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->snap;
}

/*
==============
CG_SnapshotSP_ProcessNextSnap
==============
*/
void CG_SnapshotSP_ProcessNextSnap(LocalClientNum_t localClientNum)
{
  __int64 v7; 
  __int64 v9; 
  unsigned int i; 
  unsigned int v11; 
  unsigned int j; 
  const dvar_t *v19; 
  const snapshot_t *nextSnap; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  playerState_s *srcPs; 

  v7 = localClientNum;
  _R15 = CG_GetLocalClientGlobals(localClientNum);
  v29 = (int)_R15;
  if ( !_R15->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1856, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  srcPs = _R15->nextPs;
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1859, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  if ( !_R15->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1861, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_R15->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1862, ASSERT_TYPE_ASSERT, "(cgameGlob->ps)", (const char *)&queryFormat, "cgameGlob->ps") )
    __debugbreak();
  v9 = 0i64;
  for ( i = 0; i < 0x800; i += 32 )
  {
    v11 = s_centInPrevSnapshot[v9];
    for ( j = __lzcnt(v11); j < 0x20; j = __lzcnt(v11) )
    {
      if ( ((0x80000000 >> j) & v11) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1878, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v11 &= ~(0x80000000 >> j);
      s_centInPrevSnapshot[v9] = 0;
      R_UnlinkEntity(v7, i + j);
    }
    ++v9;
  }
  SND_AddPhysicsQueryBlock();
  Profile_Begin(672);
  Profile_Begin(673);
  CG_PhysicsCharacterProxy_MatchSnapshot((LocalClientNum_t)v7, _R15->snap->serverTime);
  Profile_EndInternal(NULL);
  Profile_Begin(674);
  CG_PhysicsObject_MatchSnapshot((LocalClientNum_t)v7);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  SND_ReleasePhysicsQueryBlock();
  CL_Main_InvalidateSkeletonCache();
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0E8h+var_38], xmm6
    vmovaps [rsp+0E8h+var_48], xmm7
    vmovaps [rsp+0E8h+var_58], xmm8
    vmovaps [rsp+0E8h+var_68], xmm9
    vmovaps [rsp+0E8h+var_78], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&srcPs->otherFlags, ACTIVE, 0x20u) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r15+38h]
      vmovss  xmm7, dword ptr [r15+3Ch]
      vmovss  xmm8, dword ptr [r15+40h]
      vmovss  xmm9, dword ptr [r15+1E0h]
      vmovss  xmm10, dword ptr [r15+1E4h]
      vmovss  xmm11, dword ptr [r15+1E8h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm10, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm8, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm11, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm7, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm6, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm9, dword ptr [rsp+0E8h+var_98]
    }
  }
  v19 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer )
  {
    if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    BG_CopyPlayerWeapons(CgWeaponMap::ms_instance[v7], &_R15->predictedPlayerState, CgWeaponMap::ms_instance[v7], srcPs);
    memcpy_0(&_R15->predictedPlayerState.hud, &srcPs->hud, sizeof(_R15->predictedPlayerState.hud));
  }
  else
  {
    memcpy_0(&_R15->predictedPlayerState, srcPs, sizeof(_R15->predictedPlayerState));
    _R15->predictedPlayerState.commandTimeInterpolated = _R15->predictedPlayerState.commandTime;
    _R15->predictedPlayerState.serverTimeInterpolated = _R15->predictedPlayerState.serverTime;
    _R15->predictedPlayerState.inputTimeInterpolated = _R15->predictedPlayerState.inputTime;
  }
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&srcPs->otherFlags, ACTIVE, 0x20u) )
  {
    __asm
    {
      vmovss  dword ptr [r15+38h], xmm6
      vmovss  dword ptr [r15+3Ch], xmm7
      vmovss  dword ptr [r15+40h], xmm8
      vmovss  dword ptr [r15+1E0h], xmm9
      vmovss  dword ptr [r15+1E4h], xmm10
      vmovss  dword ptr [r15+1E8h], xmm11
    }
  }
  CG_ServerCmdSP_ExecuteNewServerCommands((LocalClientNum_t)v7, _R15->serverLatestCommandSequence);
  __asm
  {
    vmovaps xmm11, [rsp+0E8h+var_88]
    vmovaps xmm10, [rsp+0E8h+var_78]
    vmovaps xmm9, [rsp+0E8h+var_68]
    vmovaps xmm8, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_48]
    vmovaps xmm6, [rsp+0E8h+var_38]
  }
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(v28) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 118, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", v28) )
      __debugbreak();
  }
  nextSnap = CG_GetLocalClientGlobals((const LocalClientNum_t)v7)->nextSnap;
  if ( nextSnap )
  {
    if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
    {
      LODWORD(v28) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v28, 1, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v28) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v27) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v7] )
    {
      LODWORD(v28) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v28) )
        __debugbreak();
    }
    CgEntitySystem::BuildEntityWorkers(CgEntitySystem::ms_entitySystemArray[v7], nextSnap->serverTime);
  }
  LUIBinding::SnapshotUpdate((LocalClientNum_t)v7);
}

/*
==============
CG_SnapshotSP_ProcessPlayerState
==============
*/
void CG_SnapshotSP_ProcessPlayerState(LocalClientNum_t localClientNum, cg_t *cgameGlob)
{
  playerState_s *ps; 
  playerState_s *nextPs; 
  int eType; 
  int v12; 
  bool v13; 
  EventSequence v15; 
  unsigned int SnapshotEntityUseCount; 
  int number; 
  bool v34; 
  bool v35; 
  int v36; 
  int clientNum_low; 
  EntityEvent v38; 
  EntityEvent v39; 
  EntityEvent v40; 
  EntityEvent v41; 

  ps = cgameGlob->ps;
  nextPs = cgameGlob->nextPs;
  if ( ps )
  {
    cgameGlob->playerTeleported = 0;
    _RBX = CG_GetEntity(localClientNum, ps->clientNum);
    if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1219, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+19Ch]
      vmovups ymm1, ymmword ptr [rbx+1BCh]
    }
    eType = _RBX->nextState.eType;
    __asm
    {
      vmovups ymmword ptr [rbx+120h], ymm0
      vmovups ymm0, ymmword ptr [rbx+1DCh]
      vmovups ymmword ptr [rbx+140h], ymm1
      vmovups xmm1, xmmword ptr [rbx+1FCh]
      vmovups ymmword ptr [rbx+160h], ymm0
      vmovups xmmword ptr [rbx+180h], xmm1
    }
    _RBX->prevEType = truncate_cast<unsigned char,int>(eType);
    _RBX->prevOtherEntityNum = _RBX->nextState.otherEntityNum;
    _RBX->prevPhysicsChildBodyIdx = _RBX->nextState.un.vehicleXModel;
    v12 = *(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF;
    _RBX->flags &= ~1u;
    _RBX->prevLinkParent = v12;
    _RBX->prevUseCount = _RBX->nextUseCount;
  }
  if ( nextPs )
  {
    if ( cgameGlob->m_usingLowLodClientEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1232, ASSERT_TYPE_ASSERT, "(!cgameGlob->UsingLowLodClientEntityEvents())", (const char *)&queryFormat, "!cgameGlob->UsingLowLodClientEntityEvents()") )
      __debugbreak();
    v13 = 1;
    if ( !ps )
    {
      cgameGlob->playerTeleported = 1;
      ps = nextPs;
      v13 = 0;
      cgameGlob->ps = nextPs;
    }
    _RBP = CG_GetEntity(localClientNum, nextPs->clientNum);
    v15.combined = (int)_RBP->nextState.eventSequence;
    v38 = _RBP->nextState.events[0];
    v39 = _RBP->nextState.events[1];
    v40 = _RBP->nextState.events[2];
    v41 = _RBP->nextState.events[3];
    _RAX = CG_GetSnapshotEntityState(nextPs->clientNum);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+190h], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rbp+1A0h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+1B0h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rbp+1C0h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rbp+1D0h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rbp+1E0h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbp+1F0h], xmm0
      vmovups xmm0, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rbp+200h], xmm0
      vmovups xmm1, xmmword ptr [rax+80h]
      vmovups xmmword ptr [rbp+210h], xmm1
      vmovups xmm0, xmmword ptr [rax+90h]
      vmovups xmmword ptr [rbp+220h], xmm0
      vmovups xmm1, xmmword ptr [rax+0A0h]
      vmovups xmmword ptr [rbp+230h], xmm1
      vmovups xmm0, xmmword ptr [rax+0B0h]
      vmovups xmmword ptr [rbp+240h], xmm0
      vmovups xmm1, xmmword ptr [rax+0C0h]
      vmovups xmmword ptr [rbp+250h], xmm1
      vmovups xmm0, xmmword ptr [rax+0D0h]
      vmovups xmmword ptr [rbp+260h], xmm0
      vmovups xmm1, xmmword ptr [rax+0E0h]
      vmovups xmmword ptr [rbp+270h], xmm1
    }
    *(_QWORD *)&_RBP->nextState.partBits.array[6] = *(_QWORD *)&_RAX->partBits.array[6];
    SnapshotEntityUseCount = CG_GetSnapshotEntityUseCount(nextPs->clientNum);
    number = _RBP->nextState.number;
    _RBP->nextUseCount = SnapshotEntityUseCount;
    if ( number != LOWORD(nextPs->clientNum) )
    {
      clientNum_low = LOWORD(nextPs->clientNum);
      v36 = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1254, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( (ushort)nextPs->clientNum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "(ushort)nextPs->clientNum", v36, clientNum_low) )
        __debugbreak();
    }
    _RBP->nextState.eventSequence = v15;
    _RBP->nextState.events[0] = v38;
    _RBP->nextState.events[1] = v39;
    _RBP->nextState.events[2] = v40;
    _RBP->nextState.events[3] = v41;
    if ( (_RBP->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1262, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", (const char *)&queryFormat, "!CENextValid( cent )") )
      __debugbreak();
    _RBP->flags |= 1u;
    v34 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBP->prevState.eFlags, ACTIVE, 2u);
    v35 = v34 != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBP->nextState.lerp.eFlags, ACTIVE, 2u);
    if ( ps == nextPs || v35 )
    {
      memcpy_0(ps, nextPs, sizeof(playerState_s));
      CG_SnapshotSP_ResetEntity(localClientNum, _RBP, v13);
      *(_QWORD *)cgameGlob->predictedError.v = 0i64;
      cgameGlob->predictedError.v[2] = 0.0;
      cgameGlob->oldOrigin.v[0] = ps->origin.v[0];
      cgameGlob->oldOrigin.v[1] = ps->origin.v[1];
      cgameGlob->oldOrigin.v[2] = ps->origin.v[2];
      cgameGlob->playerTeleported = 1;
    }
    CG_Glass_ApplyChanges(localClientNum);
    CL_Input_UpdateCursorHintBinding(localClientNum, nextPs->cursorHint, nextPs->cursorHintBinding);
  }
}

/*
==============
CG_SnapshotSP_ProcessSnapshots
==============
*/
void CG_SnapshotSP_ProcessSnapshots(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  const dvar_t *v5; 
  cg_t *v6; 
  int time; 
  const snapshot_t *nextSnap; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int serverTime; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int ServerSnapTime; 

  Sys_ProfBeginNamedEvent(0xFFF4A460, "process snapshots 2");
  Profile_Begin(2);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  g_processEvents = 0;
  v4 = LocalClientGlobals;
  if ( LocalClientGlobals->demoType == HALF )
  {
    v6 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v6->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2017, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
      __debugbreak();
    if ( !v6->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2018, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    time = v6->time;
    if ( time - v6->snap->serverTime < 0 || time - v6->nextSnap->serverTime >= 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3a83126f; dtime
      }
      CG_SnapshotSP_CreateNextSnap(localClientNum, *(float *)&_XMM1, 1);
      CG_SnapshotSP_SetNextSnap(localClientNum);
      CG_SnapshotSP_ProcessNextSnap(localClientNum);
    }
  }
  else
  {
    v5 = DVARBOOL_sv_clientSaveFastCheckOn;
    if ( !DVARBOOL_sv_clientSaveFastCheckOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientSaveFastCheckOn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
      SV_MainSP_CheckForClientSaveGame(1);
    if ( SV_ServerSnapshotPending() )
    {
      SV_WaitServerSnapshot();
      if ( !v4->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2066, ASSERT_TYPE_ASSERT, "(cgameGlob->createdNextSnap)", (const char *)&queryFormat, "cgameGlob->createdNextSnap") )
        __debugbreak();
      CG_SnapshotSP_SetNextSnap(localClientNum);
      CG_SnapshotSP_ProcessNextSnap(localClientNum);
      g_processEvents = 1;
    }
    else if ( v4->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2075, ASSERT_TYPE_ASSERT, "(!cgameGlob->createdNextSnap)", (const char *)&queryFormat, "!cgameGlob->createdNextSnap") )
    {
      __debugbreak();
    }
  }
  CG_Entity_SetFrameInterpolation(localClientNum);
  if ( !v4->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2086, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( v4->time != com_time )
  {
    ServerSnapTime = G_MainSP_GetServerSnapTime();
    v20 = SV_GameSP_LevelTime();
    v18 = com_time;
    serverTime = v4->nextSnap->serverTime;
    v14 = v4->snap->serverTime;
    LODWORD(v12) = v4->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2087, ASSERT_TYPE_ASSERT, "(cgameGlob->time == com_time)", "%s\n\t%d %d %d %d %d %d", "cgameGlob->time == com_time", v12, v14, serverTime, v18, v20, ServerSnapTime) )
      __debugbreak();
  }
  if ( v4->nextSnap->serverTime != SV_GameSP_LevelTime() )
  {
    LODWORD(v21) = G_MainSP_GetServerSnapTime();
    LODWORD(v19) = SV_GameSP_LevelTime();
    LODWORD(v17) = com_time;
    LODWORD(v15) = v4->nextSnap->serverTime;
    LODWORD(v13) = v4->snap->serverTime;
    LODWORD(v12) = v4->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2088, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap->serverTime == SV_GameSP_LevelTime())", "%s\n\t%d %d %d %d %d %d", "cgameGlob->nextSnap->serverTime == SV_GameSP_LevelTime()", v12, v13, v15, v17, v19, v21) )
      __debugbreak();
  }
  if ( v4->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    LODWORD(v21) = G_MainSP_GetServerSnapTime();
    LODWORD(v19) = SV_GameSP_LevelTime();
    LODWORD(v17) = com_time;
    LODWORD(v15) = v4->nextSnap->serverTime;
    LODWORD(v13) = v4->snap->serverTime;
    LODWORD(v12) = v4->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2089, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap->serverTime == G_MainSP_GetServerSnapTime())", "%s\n\t%d %d %d %d %d %d", "cgameGlob->nextSnap->serverTime == G_MainSP_GetServerSnapTime()", v12, v13, v15, v17, v19, v21) )
      __debugbreak();
  }
  if ( v4->time - v4->snap->serverTime < 0 )
  {
    LODWORD(v21) = G_MainSP_GetServerSnapTime();
    LODWORD(v19) = SV_GameSP_LevelTime();
    LODWORD(v17) = com_time;
    LODWORD(v15) = v4->nextSnap->serverTime;
    LODWORD(v13) = v4->snap->serverTime;
    LODWORD(v12) = v4->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2090, ASSERT_TYPE_ASSERT, "(cgameGlob->time - cgameGlob->snap->serverTime >= 0)", "%s\n\t%d %d %d %d %d %d", "cgameGlob->time - cgameGlob->snap->serverTime >= 0", v12, v13, v15, v17, v19, v21) )
      __debugbreak();
  }
  if ( !v4->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2091, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  nextSnap = v4->nextSnap;
  if ( nextSnap != v4->snap && nextSnap->serverTime - v4->time <= 0 )
  {
    LODWORD(v13) = v4->time;
    LODWORD(v12) = nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2092, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0)", "%s\n\tcgameGlob->nextSnap->serverTime is %i, cgameGlob->time is %i\n", "cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0", v12, v13) )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SnapshotSP_ResetEntity
==============
*/
void CG_SnapshotSP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, bool inPrevSnap)
{
  __int16 *p_eType; 
  char v7; 
  __int16 v8; 
  char v9; 
  char v10; 
  bool v11; 
  int i; 
  int time; 
  __int16 eType; 
  const ScriptableDef *scriptable; 
  DObj *ClientDObj; 
  unsigned __int8 lookAtInfoIndex; 
  CgEntitySystem *EntitySystem; 
  __int64 v24; 
  vec3_t outOrigin; 
  __int64 v27; 
  CgTrajectory v28; 
  vec4_t quat; 
  vec3_t origin; 

  v27 = -2i64;
  _RBX = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 392, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 393, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  p_eType = (__int16 *)&_RBX->nextState.eType;
  if ( _RBX->prevUseCount == _RBX->nextUseCount && _RBX->pose.eType == *p_eType )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    CG_SnapshotSP_ShutdownEntity(localClientNum, _RBX);
    CG_Snapshot_ResetEntityCommon(localClientNum, _RBX);
    *(_QWORD *)&_RBX->previousEventSequence.combined = 0i64;
    *(_QWORD *)&_RBX->lightingOrigin.y = 0i64;
    v8 = *p_eType;
    if ( *p_eType == 11 )
    {
      CG_Turret_Reset(_RBX);
    }
    else if ( v8 > 13 )
    {
      if ( v8 <= 15 )
      {
        memset_0(&_RBX->pose.160, 0, sizeof(_RBX->pose.160));
      }
      else if ( v8 == 19 || v8 == 21 )
      {
        _RBX->pose.player.control = NULL;
        *((_QWORD *)&_RBX->pose.moverFx + 1) = 0i64;
        _RBX->pose.coverWall.coverGrid[4] = 0;
        _RBX->pose.actor.lookAtInfoIndex = -1;
      }
    }
  }
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->prevState.eFlags, ACTIVE, 2u);
  v10 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 2u);
  v11 = inPrevSnap && !v7 && v9 != v10;
  AimAssist_ClearEntityReference(localClientNum, _RBX->nextState.number);
  _RBX->pose.cullIn = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+19Ch]
    vmovups ymmword ptr [rbx+120h], ymm0
    vmovups ymm1, ymmword ptr [rbx+1BCh]
    vmovups ymmword ptr [rbx+140h], ymm1
    vmovups ymm0, ymmword ptr [rbx+1DCh]
    vmovups ymmword ptr [rbx+160h], ymm0
    vmovups xmm1, xmmword ptr [rbx+1FCh]
    vmovups xmmword ptr [rbx+180h], xmm1
  }
  _RBX->prevEType = truncate_cast<unsigned char,int>(*p_eType);
  _RBX->prevOtherEntityNum = _RBX->nextState.otherEntityNum;
  _RBX->prevPhysicsChildBodyIdx = _RBX->nextState.un.vehicleXModel;
  _RBX->prevLinkParent = *(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF;
  _RBX->prevUseCount = _RBX->nextUseCount;
  for ( i = 0; i < 2; ++i )
    Tracer_SetDrawCounter(localClientNum, _RBX->nextState.number, (const PlayerHandIndex)i, 0);
  _RBX->eyeSensorPupilSize = 0.0;
  *(_QWORD *)&_RBX->pickupPredictionTime = 0i64;
  *(_WORD *)&_RBX->weaponVisTestCounter = 0;
  _RBX->tree = NULL;
  _RBX->updateDelayedNext = NULL;
  if ( v11 )
    _RBX->flags &= 0xFFF0037D;
  else
    _RBX->flags &= 0xFFF0017D;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  CgTrajectory::CgTrajectory(&v28, localClientNum, _RBX, &_RBX->nextState.lerp);
  CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
  BgTrajectory::EvaluateTrajectories(&v28, time, &outOrigin, &_RBX->pose.angles);
  CG_SetPoseOrigin(&_RBX->pose, &outOrigin);
  _RBX->pose.eType = truncate_cast<unsigned char,int>(*p_eType);
  if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * localClientNum + 2), _RBX->nextState.number, localClientNum) == -1 && CG_Entity_ShouldCreatePhysicsOnInit(localClientNum, _RBX->nextState.number) )
  {
    CG_Entity_DestroyPhysics(localClientNum, _RBX->nextState.number);
    CG_Entity_CreatePhysics(localClientNum, _RBX->nextState.number, 1);
  }
  if ( !CG_Entity_HasCloth(localClientNum, _RBX->nextState.number) && CG_Entity_ShouldCreateClothOnInit(localClientNum, _RBX->nextState.number) )
  {
    CG_Entity_DestroyCloth(localClientNum, _RBX->nextState.number);
    CG_Entity_CreateCloth(localClientNum, _RBX->nextState.number);
  }
  eType = *p_eType;
  if ( *p_eType != 1 )
  {
    CG_Entity_UpdateScriptableDObjBinding(localClientNum, _RBX->nextState.number, 0);
    eType = _RBX->nextState.eType;
  }
  switch ( eType )
  {
    case 1:
      scriptable = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, "SPPlayerScriptableDef", 0).scriptable;
      if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, _RBX->nextState.number, scriptable) == Started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to set scriptable '%s' for player %i. Please bug with a crash dump", scriptable->name, _RBX->nextState.number) )
        __debugbreak();
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        CG_SnapshotSP_ResetPlayerEntity(localClientNum, _RBX);
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, _RBX) )
      {
        AnglesToQuat(&_RBX->pose.angles, &quat);
        CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter(localClientNum, _RBX, &outOrigin, &quat);
      }
      goto LABEL_75;
    case 2:
      goto $LN46_35;
    case 4:
      _RBX->typeData.flightDurationMs = 0;
      goto LABEL_75;
    case 6:
      _RBX->pose.scriptMover.doVehicleControllers = 0;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        CG_Entity_UpdateBModelWorldBounds(localClientNum, _RBX, 1);
      }
      else
      {
        if ( _RBX->nextState.un.scriptMoverType == 1 && Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, _RBX) )
        {
          AnglesToQuat(&_RBX->pose.angles, &quat);
          CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
          CG_PhysicsCharacterProxy_AddCharacter(localClientNum, _RBX, &outOrigin, &quat);
        }
        if ( ScriptableCl_IsScriptableMoverEntityState(&_RBX->nextState) )
          ScriptableCl_AssociateScriptMoverInstance(localClientNum, _RBX);
LABEL_75:
        R_MDAO_ResetEntityOcclusionState(&_RBX->pose);
        R_EntityMoved(localClientNum, _RBX->nextState.number);
        __asm
        {
          vmovss  xmm0, cs:__real@48000000
          vmovss  dword ptr [rsp+0E8h+origin], xmm0
          vmovss  dword ptr [rsp+0E8h+origin+4], xmm0
          vmovss  dword ptr [rsp+0E8h+origin+8], xmm0
        }
        EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
        CgEntitySystem::SetEntityOrigin(EntitySystem, _RBX->nextState.number, &origin);
        CG_GameInterface_SnapshotSP_ResetEntity(localClientNum, _RBX, inPrevSnap);
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
      return;
    case 11:
      *(_DWORD *)((char *)&_RBX->pose.moverFx + 29) = -16843010;
      _RBX->pose.turret.tagIdx_barrel = -2;
      *(unsigned __int16 *)((char *)_RBX->pose.vehicle.wheelFraction + 1) = 256;
      _RBX->pose.player.control = NULL;
      ClientDObj = Com_GetClientDObj(_RBX->nextState.number, localClientNum);
      if ( ClientDObj )
        CG_EntitySP_TurretPreControllers(localClientNum, ClientDObj, _RBX);
      goto LABEL_75;
    case 14:
      CG_Vehicle_ResetEntity(localClientNum, _RBX, v11);
      goto LABEL_75;
    case 15:
      CG_Vehicle_ClearBoneControllers(localClientNum, _RBX);
      goto LABEL_75;
    case 19:
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, _RBX) )
      {
        AnglesToQuat(&_RBX->pose.angles, &quat);
        CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter(localClientNum, _RBX, &outOrigin, &quat);
      }
      goto $LN41_37;
    case 21:
$LN41_37:
      *((_WORD *)&_RBX->pose.moverFx + 9) = -258;
      lookAtInfoIndex = _RBX->pose.actor.lookAtInfoIndex;
      if ( lookAtInfoIndex != 0xFF )
      {
        if ( lookAtInfoIndex >= 0x26u )
        {
          LODWORD(v24) = lookAtInfoIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( cent->pose.actor.lookAtInfoIndex ) < (unsigned)( (32 + 6) )", "cent->pose.actor.lookAtInfoIndex doesn't index MAX_LOOK_AT_INFO\n\t%i not in [0, %i)", v24, 38) )
            __debugbreak();
        }
        cg_actorLookAt[_RBX->pose.actor.lookAtInfoIndex].lookAtState = 0;
      }
      _RBX->pose.actor.lookAtInfoIndex = -1;
      _RBX->pose.coverWall.coverGrid[3] = -8388609;
      CG_ActorsSP_ClearCharacterAnimState(localClientNum, _RBX->nextState.number);
      CG_ActorsSP_PreControllers(_RBX);
$LN46_35:
      _RBX->typeData.flightDurationMs = 2047;
      goto LABEL_75;
    case 22:
      CG_PhysicsObject_ResetPhysicsChild(localClientNum, _RBX);
      goto LABEL_75;
    case 23:
      CG_BeamEntity_Reset(localClientNum, _RBX);
      goto LABEL_75;
    case 24:
      CG_ClientCharacter_ResetEntity(localClientNum, _RBX);
      goto LABEL_75;
    case 25:
      CG_RagdollConstraintEntity_Reset(localClientNum, _RBX);
      goto LABEL_75;
    case 26:
      CG_PhysicsVolume_Reset(localClientNum, _RBX);
      goto LABEL_75;
    case 27:
      CG_CoverWall_ResetEntity(localClientNum, _RBX);
      goto LABEL_75;
    case 28:
      *(_QWORD *)_RBX->nextState.lerp.u.actor.threatSight = 0i64;
      _RBX->nextState.lerp.u.anonymous.data[3] = 0;
      goto LABEL_75;
    default:
      goto LABEL_75;
  }
}

/*
==============
CG_SnapshotSP_ResetPlayerEntity
==============
*/
void CG_SnapshotSP_ResetPlayerEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  __int16 number; 
  DObj *ClientDObj; 
  XAnimTree *pXAnimTree; 
  __int64 v11; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  playerState_s *p_predictedPlayerState; 
  unsigned int suitIndex; 
  unsigned int AnimsetIndexBySuit; 
  unsigned int Animset; 
  XAnimOwner v22; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 forceBlendTime; 
  int forceBlendTimea; 
  int forceBlendTimeb; 
  float objID; 
  float objIDa; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 324, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  number = cent->nextState.number;
  if ( number )
  {
    LODWORD(forceBlendTime) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 326, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( 1 )", "cent->nextState.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", forceBlendTime, 1) )
      __debugbreak();
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 327, ASSERT_TYPE_ASSERT, "(ci != 0)", (const char *)&queryFormat, "ci != NULL") )
    __debugbreak();
  if ( !CharacterInfo->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 328, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    pXAnimTree = CharacterInfo->pXAnimTree;
    if ( !pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 335, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    if ( !DObjGetTree(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 337, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
      __debugbreak();
    if ( DObjGetTree(ClientDObj) != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 338, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ) == pAnimTree)", (const char *)&queryFormat, "DObjGetTree( obj ) == pAnimTree") )
      __debugbreak();
    v11 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 341, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    if ( pXAnimTree )
    {
      __asm
      {
        vmovaps [rsp+0A8h+var_48], xmm7
        vxorps  xmm7, xmm7, xmm7
        vmovss  dword ptr [rsp+0A8h+fmt], xmm7
      }
      XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, fmt, 1, ClientDObj, LINEAR);
      if ( !PlayerASM_IsEnabled() )
      {
        __asm
        {
          vmovaps [rsp+0A8h+var_38], xmm6
          vmovss  xmm6, cs:__real@3f800000
          vmovss  dword ptr [rsp+0A8h+objID], xmm6
          vmovss  [rsp+0A8h+forceBlendTime], xmm7
          vmovss  dword ptr [rsp+0A8h+fmt], xmm7
        }
        XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v11 + 40), fmta, *(float *)&forceBlendTimea, objID, (scr_string_t)0, 0, 0, LINEAR, NULL);
        __asm
        {
          vmovss  dword ptr [rsp+0A8h+objID], xmm6
          vmovss  [rsp+0A8h+forceBlendTime], xmm7
          vmovss  dword ptr [rsp+0A8h+fmt], xmm6
        }
        XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v11 + 42), fmtb, *(float *)&forceBlendTimeb, objIDa, (scr_string_t)0, 0, 0, LINEAR, NULL);
        __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
      }
      __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
    }
    memset_0(&CharacterInfo->legs, 0, sizeof(CharacterInfo->legs));
    CharacterInfo->legs.yawAngle = CharacterInfo->playerAngles.v[1];
    CharacterInfo->legs.pitchAngle = 0.0;
    memset_0(&CharacterInfo->torso, 0, sizeof(CharacterInfo->torso));
    CharacterInfo->torso.yawAngle = CharacterInfo->playerAngles.v[1];
    CharacterInfo->torso.pitchAngle = CharacterInfo->playerAngles.v[0];
    CharacterInfo->stanceTransitionTime = *(_DWORD *)(v11 + 19528);
  }
  if ( !CharacterInfo->usingAnimState && PlayerASM_IsEnabled() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    clientNum = cent->nextState.clientNum;
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x22u) )
      goto LABEL_58;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      goto LABEL_58;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
LABEL_58:
      if ( clientNum == p_predictedPlayerState->clientNum )
      {
        suitIndex = CharacterInfo->suitIndex;
        if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
        {
          AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(suitIndex);
          if ( ((cent->nextState.animInfo.animData >> 1) & 3) != AnimsetIndexBySuit )
            cent->nextState.animInfo.animData = cent->nextState.animInfo.animData & 0x80000001 | (2 * (AnimsetIndexBySuit & 3));
        }
      }
    }
    Animset = BG_PlayerASM_GetAnimset(&cent->nextState);
    LOBYTE(v22) = 1;
    BG_PlayersASM_ResetAnimTree(Animset, CG_MainSP_AllocXAnimClient, v22, CharacterInfo);
  }
}

/*
==============
CG_SnapshotSP_SetInitialSnapshot
==============
*/
void CG_SnapshotSP_SetInitialSnapshot(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v4; 
  const snapshot_t *NextSnap_Internal; 
  const snapshot_t *v7; 
  int serverTime; 
  int v9; 
  unsigned __int16 *v10; 
  __int64 v11; 
  CgEntitySystem *EntitySystem; 
  int v13; 
  unsigned __int16 *v14; 
  __int64 v15; 
  CgHandler *Handler; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v26; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v4 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 666, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( LocalClientGlobals->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 668, ASSERT_TYPE_ASSERT, "(!cgameGlob->ps)", (const char *)&queryFormat, "!cgameGlob->ps") )
    __debugbreak();
  if ( LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 669, ASSERT_TYPE_ASSERT, "(!cgameGlob->snap)", (const char *)&queryFormat, "!cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 670, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  NextSnap_Internal = CG_SnapshotSP_GetNextSnap_Internal(localClientNum);
  _R13 = LocalClientGlobals->nextPs;
  v7 = NextSnap_Internal;
  *(_QWORD *)vec.v = _R13;
  if ( localClientNum != _R13->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 675, ASSERT_TYPE_ASSERT, "( static_cast<int>( localClientNum ) ) == ( ps->clientNum )", "%s == %s\n\t%i, %i", "static_cast<int>( localClientNum )", "ps->clientNum", localClientNum, _R13->clientNum) )
    __debugbreak();
  LocalClientGlobals->clientNum = _R13->clientNum;
  serverTime = v7->serverTime;
  LocalClientGlobals->time = serverTime;
  LocalClientGlobals->oldTime = serverTime;
  *(_DWORD *)(v4 + 19528) = serverTime;
  if ( LODWORD(v7[1].__vftable) > 0x800 )
  {
    LODWORD(v23) = 2048;
    LODWORD(v21) = v7[1].__vftable;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 683, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numEntities ) && ( snap->numEntities ) <= ( 2048 )", "snap->numEntities not in [0, CL_MAX_ENTITIES_IN_SNAPSHOT_SP]\n\t%i not in [%i, %i]", v21, 0i64, v23) )
      __debugbreak();
  }
  v9 = 0;
  if ( SLODWORD(v7[1].__vftable) > 0 )
  {
    v10 = (unsigned __int16 *)&v7[2].__vftable + 2;
    do
    {
      v11 = *v10;
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)v11 >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      ++v9;
      ++v10;
      EntitySystem->m_entities[v11].prevUseCount = CG_GetSnapshotEntityUseCount(v11);
    }
    while ( v9 < SLODWORD(v7[1].__vftable) );
    _R13 = *(const playerState_s **)vec.v;
  }
  if ( HIDWORD(v7[1].__vftable) > 0x500 )
  {
    LODWORD(v23) = 1280;
    LODWORD(v21) = HIDWORD(v7[1].__vftable);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 694, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numFxEntities ) && ( snap->numFxEntities ) <= ( 1280 )", "snap->numFxEntities not in [0, FX_ENTITY_MAX]\n\t%i not in [%i, %i]", v21, 0i64, v23) )
      __debugbreak();
  }
  v13 = 0;
  if ( SHIDWORD(v7[1].__vftable) > 0 )
  {
    v14 = (unsigned __int16 *)&v7[258].__vftable + 2;
    do
    {
      v15 = *v14;
      if ( (unsigned int)v15 >= 0x500 )
      {
        LODWORD(v22) = 1280;
        LODWORD(v21) = *v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      ++v13;
      ++v14;
      cg_fxEntitiesArray[v15].prevUsageCount = CG_FXEntitiesGetSnapshotFXEnt(v15)->flags & 0xF;
    }
    while ( v13 < SHIDWORD(v7[1].__vftable) );
  }
  if ( v7[1].serverTime > 0x400u )
  {
    LODWORD(v23) = 1024;
    LODWORD(v21) = v7[1].serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 707, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numSounds ) && ( snap->numSounds ) <= ( 1024 )", "snap->numSounds not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", v21, 0i64, v23) )
      __debugbreak();
  }
  if ( SLODWORD(v7[2].__vftable) < 0 )
    goto LABEL_51;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( SLODWORD(v7[2].__vftable) > BgWeaponMap::ms_runtimeSize )
  {
LABEL_51:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v23) = BgWeaponMap::ms_runtimeSize;
    LODWORD(v21) = v7[2].__vftable;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 708, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numWeapons ) && ( snap->numWeapons ) <= ( BgWeaponMap::GetRuntimeSize() )", "snap->numWeapons not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v21, 0i64, v23) )
      __debugbreak();
  }
  R_InitSceneData(localClientNum);
  *(_QWORD *)s_centInPrevSnapshot = 0i64;
  LocalClientGlobals->loaded = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+30h]
    vmovss  xmm1, dword ptr [r13+34h]
    vmovss  dword ptr [rsp+0E8h+vec], xmm0
    vmovss  xmm0, dword ptr [r13+38h]
    vmovss  dword ptr [rsp+0E8h+vec+8], xmm0
    vmovss  dword ptr [rsp+0E8h+vec+4], xmm1
  }
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, _R13, Handler);
  __asm { vmovss  xmm1, dword ptr [r13+1E8h]; height }
  WorldUpReferenceFrame::AddUpContribution(&v26, *(float *)&_XMM1, &vec);
  AnglesToAxis(&_R13->viewangles, &axis);
  SND_SetListener(localClientNum, _R13->clientNum, &vec, &axis, &_R13->velocity);
}

/*
==============
CG_SnapshotSP_SetNextSnap
==============
*/
void CG_SnapshotSP_SetNextSnap(LocalClientNum_t localClientNum)
{
  DObj *v1; 
  int v2; 
  const dvar_t *v3; 
  const ScriptablePartWorldState *SnapshotScriptablePartWorld; 
  unsigned int SnapshotScriptableActiveRpInstanceCount; 
  const ScriptableReplicatedInstance *SnapshotScriptableActiveRpInstances; 
  ClientFxEntity *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  CgEntitySystem *EntitySystem; 
  unsigned int v14; 
  unsigned int v15; 
  DObj *v16; 
  int brushModel; 
  bool v18; 
  unsigned int numModels; 
  signed __int64 v20; 
  __int64 *v21; 
  __int64 v22; 
  __int64 *v23; 
  XAnimTree *Tree; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  LocalClientNum_t v28; 
  unsigned int v29; 
  cg_t *v30; 
  characterInfo_t *v31; 
  XAnimTree *v32; 
  char v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  int v37; 
  __int64 v38; 
  __int64 *v39; 
  _QWORD *v40; 
  __int64 v41; 
  bool v42; 
  int v43; 
  DObj *v44; 
  const snapshot_t *snap; 
  _WORD *v46; 
  unsigned int v47; 
  unsigned int *v48; 
  unsigned __int64 v49; 
  unsigned int v50; 
  __int16 eType; 
  int flags; 
  clientLinkInfo_t clientLinkInfo; 
  int v60; 
  int v61; 
  int v62; 
  unsigned int v63; 
  int v64; 
  _WORD *v65; 
  unsigned int v66; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  CgStatic *LocalClientStatics; 
  __int64 v71; 
  int v72; 
  unsigned __int16 *v73; 
  const WeaponMapEntry *SnapshotWeaponEntry; 
  unsigned __int16 *v75; 
  unsigned __int64 v76; 
  CgEntitySystem *v77; 
  unsigned int v95; 
  int v96; 
  int HasEntityTypeEvolved; 
  __int16 v98; 
  bool v99; 
  bool v100; 
  bool v101; 
  bool v102; 
  const dvar_t *v103; 
  __int64 entCount; 
  __int64 v105; 
  int v106; 
  unsigned __int16 *v107; 
  unsigned __int64 v108; 
  unsigned int v112; 
  int v113; 
  int v114; 
  unsigned __int16 *v115; 
  int v116; 
  serverSoundInfo_s *SnapshotSoundInfo; 
  clientSoundInfo_s *ClientSoundInfo; 
  int v122; 
  __int64 v123; 
  __int64 v124; 
  CgEntitySystem *v125; 
  centity_t *v126; 
  unsigned int v127; 
  const DObj *v128; 
  XAnimTree *v129; 
  ClientFxEntity *v130; 
  int v131; 
  __int64 v132; 
  CgGlobalsSP *v133; 
  CgStatic *v134; 
  characterInfo_t *v135; 
  unsigned int v136; 
  cg_t *v137; 
  playerState_s *ps; 
  bool v139; 
  bool v140; 
  bool v141; 
  int ControllerFromClient; 
  OmnvarData *v143; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  unsigned __int8 v146; 
  __int64 brushIndex; 
  __int64 forceTransferMarks; 
  __int64 v149; 
  __int64 v150; 
  CgGlobalsSP *cgameGlob; 
  unsigned int v153; 
  ClientFxEntity *fxEnt; 
  int v155; 
  unsigned int v156; 
  int v157; 
  unsigned int v158; 
  __int64 v159; 
  CgWeaponMap *v160; 
  CgPredictedEntitySystem *System; 
  CgEntitySystem *v162; 
  FxMarkDObjUpdateContext context; 
  XAnimBonePhysicsStateBuffer outStateBuffer; 
  __int64 v165[254]; 

  v1 = (DObj *)(int)localClientNum;
  cgameGlob = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[(_QWORD)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v160 = CgWeaponMap::ms_instance[(_QWORD)v1];
  if ( !cgameGlob->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1344, ASSERT_TYPE_ASSERT, "(cgameGlob->createdNextSnap)", (const char *)&queryFormat, "cgameGlob->createdNextSnap") )
    __debugbreak();
  v2 = 0;
  cgameGlob->createdNextSnap = 0;
  SND_AddPhysicsQueryBlock();
  DObjTransferAll();
  CG_SnapshotSP_CheckSnapshot("CG_SetNextSnap-pre", (LocalClientNum_t)v1, 1);
  v3 = DVARBOOL_cg_entityWorkers;
  if ( !DVARBOOL_cg_entityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ENTITY_BUCKET);
  SnapshotScriptablePartWorld = SV_GetSnapshotScriptablePartWorld();
  SnapshotScriptableActiveRpInstanceCount = SV_GetSnapshotScriptableActiveRpInstanceCount();
  SnapshotScriptableActiveRpInstances = SV_GetSnapshotScriptableActiveRpInstances();
  ScriptableCl_SetWorldStateSP((const LocalClientNum_t)v1, SnapshotScriptableActiveRpInstances, SnapshotScriptableActiveRpInstanceCount, SnapshotScriptablePartWorld);
  fxEnt = NULL;
  v7 = NULL;
  v8 = 0;
  v158 = s_clientDirty[(__int64)cgameGlob->clientNum >> 5] & (0x80000000 >> (cgameGlob->clientNum & 0x1F));
  v153 = 0;
  do
  {
    v9 = s_clientDirty[(_QWORD)v7];
    v10 = __lzcnt(v9);
    if ( v10 >= 0x20 )
      goto LABEL_167;
    v11 = 32 * v8;
    v157 = 32 * v8;
    v155 = 2533 * (_DWORD)v1;
    do
    {
      v12 = v11 + v10;
      if ( ((0x80000000 >> v10) & v9) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1386, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v156 = ~(0x80000000 >> v10) & v9;
      s_clientDirty[(_QWORD)v7] = 0;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( v12 >= 0x800 )
      {
        LODWORD(forceTransferMarks) = 2048;
        LODWORD(brushIndex) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      v159 = (int)v12;
      if ( v12 > 0x9E4 )
      {
        LODWORD(forceTransferMarks) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", forceTransferMarks) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(forceTransferMarks) = 2;
        LODWORD(brushIndex) = (_DWORD)v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      v14 = v12 + v155;
      if ( v12 + v155 >= 0x13CA )
      {
        LODWORD(forceTransferMarks) = v12 + v155;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", forceTransferMarks) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( clientObjMap[v14] )
      {
        if ( v15 >= (unsigned int)s_objCount )
        {
          LODWORD(forceTransferMarks) = clientObjMap[v14];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", forceTransferMarks) )
            __debugbreak();
        }
        v16 = (DObj *)s_objBuf[v15];
      }
      else
      {
        v16 = NULL;
      }
      if ( (EntitySystem->m_entities[v159].flags & 1) != 0 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntitySystem->m_entities[v159].nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        brushModel = EntitySystem->m_entities[v159].nextState.index.brushModel;
        v18 = 1;
        if ( (brushModel < 0 || (unsigned int)brushModel > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)brushModel, "signed", brushModel) )
          __debugbreak();
        numModels = 0;
      }
      else
      {
        v18 = 0;
        numModels = 0;
        LOWORD(brushModel) = 0;
      }
      FX_MarkEntUpdateBegin(&context, v16, v18, brushModel);
      v162 = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( v12 >= 0x800 )
      {
        LODWORD(forceTransferMarks) = 2048;
        LODWORD(brushIndex) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      memset_0(&outStateBuffer, 0, sizeof(outStateBuffer));
      if ( v16 )
      {
        XAnimBonePhysicsSaveState(v16, &outStateBuffer);
        numModels = v16->numModels;
        if ( v16->numModels )
        {
          v20 = (char *)v16->models - (char *)v165;
          v21 = v165;
          v22 = v16->numModels;
          do
          {
            v23 = *(__int64 **)((char *)v21++ + v20);
            *(v21 - 1) = *v23;
            --v22;
          }
          while ( v22 );
        }
        Tree = DObjGetTree(v16);
        Com_SafeClientDObjFree(v12, localClientNum);
        if ( v12 == cgameGlob->clientNum && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          if ( v162->m_entities[v159].nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1423, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
            __debugbreak();
          if ( !(_BYTE)CgStatic::ms_allocatedType )
          {
            LODWORD(forceTransferMarks) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", forceTransferMarks) )
              __debugbreak();
          }
          if ( (unsigned int)localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
          {
            *(float *)&forceTransferMarks = CgStatic::ms_allocatedCount;
            LODWORD(brushIndex) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
              __debugbreak();
          }
          if ( !CgStatic::ms_cgameStaticsArray[localClientNum] )
          {
            LODWORD(forceTransferMarks) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", forceTransferMarks) )
              __debugbreak();
          }
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[localClientNum]->m_localClientNum);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
          {
            if ( v12 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
            {
              LODWORD(forceTransferMarks) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
              LODWORD(brushIndex) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
                __debugbreak();
            }
            CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v12);
          }
          else
          {
            CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v12);
          }
          pXAnimTree = CharacterInfo->pXAnimTree;
          if ( pXAnimTree != Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1427, ASSERT_TYPE_ASSERT, "( ci->pXAnimTree ) == ( tree )", "%s == %s\n\t%p, %p", "ci->pXAnimTree", "tree", pXAnimTree, Tree) )
            __debugbreak();
        }
        else if ( Tree )
        {
          Com_XAnimFreeSmallTree(Tree);
        }
      }
      Com_DObjCloneFromBuffer(v12);
      if ( v12 > 0x9E4 )
      {
        LODWORD(forceTransferMarks) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", forceTransferMarks) )
          __debugbreak();
      }
      v28 = localClientNum;
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(forceTransferMarks) = 2;
        LODWORD(brushIndex) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      if ( v14 >= 0x13CA )
      {
        LODWORD(forceTransferMarks) = v12 + v155;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", forceTransferMarks) )
          __debugbreak();
      }
      v29 = clientObjMap[v14];
      if ( clientObjMap[v14] )
      {
        if ( v29 >= (unsigned int)s_objCount )
        {
          LODWORD(forceTransferMarks) = clientObjMap[v14];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", forceTransferMarks) )
            __debugbreak();
        }
        v1 = (DObj *)s_objBuf[v29];
        v2 = 0;
      }
      else
      {
        v2 = 0;
        v1 = NULL;
      }
      if ( v12 == cgameGlob->clientNum )
      {
        if ( !v1 )
          goto LABEL_120;
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          if ( !(_BYTE)CgStatic::ms_allocatedType )
          {
            LODWORD(forceTransferMarks) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", forceTransferMarks) )
              __debugbreak();
          }
          if ( (unsigned int)localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
          {
            *(float *)&forceTransferMarks = CgStatic::ms_allocatedCount;
            LODWORD(brushIndex) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
              __debugbreak();
          }
          if ( !CgStatic::ms_cgameStaticsArray[localClientNum] )
          {
            LODWORD(forceTransferMarks) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", forceTransferMarks) )
              __debugbreak();
          }
          v30 = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[localClientNum]->m_localClientNum);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( v30->IsMP(v30) )
          {
            if ( v12 >= v30[1].predictedPlayerState.rxvOmnvars[64].timeModified )
            {
              LODWORD(forceTransferMarks) = v30[1].predictedPlayerState.rxvOmnvars[64].timeModified;
              LODWORD(brushIndex) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
                __debugbreak();
            }
            v31 = (characterInfo_t *)(*(_QWORD *)&v30[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v12);
          }
          else
          {
            v31 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v30, v12);
          }
          if ( DObjGetTree(v1) )
          {
            v32 = DObjGetTree(v1);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1449, ASSERT_TYPE_ASSERT, "( ( DObjGetTree( obj ) == 0 ) )", "( DObjGetTree( obj ) ) = %p", v32) )
              __debugbreak();
          }
          DObjSetTree(v1, v31->pXAnimTree);
          v28 = localClientNum;
        }
      }
      if ( v1 )
        goto LABEL_122;
LABEL_120:
      if ( !numModels )
      {
LABEL_122:
        v33 = 0;
        goto LABEL_123;
      }
      v33 = 1;
LABEL_123:
      v34 = v1 && !numModels;
      if ( v33 || v34 )
      {
        v35 = 1;
        v36 = v33 || v34;
      }
      else
      {
        v35 = 0;
        v36 = 0;
      }
      if ( v1 )
      {
        v37 = v1->numModels;
        if ( v37 == numModels )
        {
          if ( numModels )
          {
            v38 = numModels;
            v39 = v165;
            do
            {
              v40 = *(_QWORD **)((char *)v39 + (char *)v1->models - (char *)v165);
              v41 = *v39++;
              if ( *v40 != v41 )
                v36 = 1;
              --v38;
            }
            while ( v38 );
          }
        }
        else
        {
          v36 = 1;
        }
        if ( (_BYTE)v37 && numModels )
          v35 = **(_QWORD **)v1->models != v165[0];
      }
      if ( v36 )
      {
        if ( v35 && v12 && ScriptableCl_IsReservedScriptableEntity(v28, v12) )
          ScriptableCl_UnbindEntityReservedDef(v28, v12);
        CG_Entity_DestroyPhysics(v28, v12);
        if ( v1 && CG_Entity_ShouldCreatePhysicsOnInit(v28, v12) )
          CG_Entity_CreatePhysics(v28, v12, 1);
        CG_Entity_DestroyCloth(v28, v12);
        if ( v1 && CG_Entity_ShouldCreateClothOnInit(v28, v12) )
          CG_Entity_CreateCloth(v28, v12);
      }
      if ( v12 )
        CG_Entity_UpdateScriptableDObjBinding(v28, v12, v35);
      XAnimBonePhysicsRestoreState(v1, &outStateBuffer);
      FX_Dismemberment_DObjUpdate(v28, v1);
      v42 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v162->m_entities[v159].nextState.lerp.eFlags, ACTIVE, 1u);
      if ( v42 )
      {
        v43 = v162->m_entities[v159].nextState.index.brushModel;
        if ( (v43 < 0 || (unsigned int)v43 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v43, "signed", v43) )
          __debugbreak();
      }
      else
      {
        LOWORD(v43) = 0;
      }
      v44 = v1;
      LODWORD(v1) = localClientNum;
      FX_MarkEntUpdateEnd(&context, localClientNum, v12, v44, v42, v43, v162->m_entities[v159].nextState.eType == ET_COVERWALL);
      v162->m_entities[v159].flags &= ~0x2000u;
      v9 = v156;
      v11 = v157;
      v7 = fxEnt;
      v10 = __lzcnt(v156);
    }
    while ( v10 < 0x20 );
    v8 = v153;
LABEL_167:
    ++v8;
    v7 = (ClientFxEntity *)((char *)v7 + 1);
    v153 = v8;
    fxEnt = v7;
  }
  while ( v8 < 0x40 );
  memset_0(v165, 0, 0x100ui64);
  memset_0(&outStateBuffer, 0, 0xA0ui64);
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(forceTransferMarks) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 131, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetPrevSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", forceTransferMarks) )
      __debugbreak();
  }
  snap = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->snap;
  if ( snap )
  {
    if ( SLODWORD(snap[1].__vftable) > 0 )
    {
      v46 = (_WORD *)&snap[2].__vftable + 2;
      do
      {
        v47 = (unsigned __int16)*v46;
        v48 = s_clientDirty;
        v49 = (unsigned __int16)*v46;
        v50 = 0x80000000 >> (*v46 & 0x1F);
        *((_DWORD *)v165 + (v49 >> 5)) |= v50;
        if ( (v50 & v48[v49 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1547, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum )))", (const char *)&queryFormat, "!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum ))") )
          __debugbreak();
        _RDI = CgEntitySystem::GetEntitySystem(localClientNum);
        if ( v47 >= 0x800 )
        {
          LODWORD(forceTransferMarks) = 2048;
          LODWORD(brushIndex) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        _RBX = v49;
        if ( _RDI->m_entities[_RBX].prevUseCount != _RDI->m_entities[_RBX].nextUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1550, ASSERT_TYPE_ASSERT, "(cent->prevUseCount == cent->nextUseCount)", "%s\n\tShould match since CG_ResetEntity was called previously", "cent->prevUseCount == cent->nextUseCount") )
          __debugbreak();
        if ( (_RDI->m_entities[_RBX].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1551, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( _RDI->m_entities[_RBX].nextState.number != v47 )
        {
          LODWORD(v150) = v47;
          LODWORD(v149) = _RDI->m_entities[_RBX].nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1552, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( entnum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "entnum", v149, v150) )
            __debugbreak();
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+rdi+1ACh]
          vmovups ymm1, ymmword ptr [rbx+rdi+1CCh]
        }
        eType = _RDI->m_entities[_RBX].nextState.eType;
        __asm
        {
          vmovups ymmword ptr [rbx+rdi+130h], ymm0
          vmovups ymm0, ymmword ptr [rbx+rdi+1ECh]
          vmovups ymmword ptr [rbx+rdi+150h], ymm1
          vmovups xmm1, xmmword ptr [rbx+rdi+20Ch]
          vmovups ymmword ptr [rbx+rdi+170h], ymm0
          vmovups xmmword ptr [rbx+rdi+190h], xmm1
        }
        if ( (eType < 0 || (unsigned __int16)eType > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)eType, "signed", eType) )
          __debugbreak();
        flags = _RDI->m_entities[_RBX].flags;
        clientLinkInfo = _RDI->m_entities[_RBX].nextState.clientLinkInfo;
        _RDI->m_entities[_RBX].prevOtherEntityNum = _RDI->m_entities[_RBX].nextState.otherEntityNum;
        v60 = *(_WORD *)&clientLinkInfo & 0x7FF;
        _RDI->m_entities[_RBX].prevPhysicsChildBodyIdx = _RDI->m_entities[_RBX].nextState.un.vehicleXModel;
        v61 = flags;
        v62 = flags | 0x10000;
        _RDI->m_entities[_RBX].prevLinkParent = v60;
        v63 = v61 & 0xFFFEFFFF;
        _RDI->m_entities[_RBX].prevEType = eType;
        if ( !v60 )
          v62 = v63;
        _RDI->m_entities[_RBX].flags = v62 & 0xFFFFFFFE;
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 680, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
          __debugbreak();
        _RDI->m_entities[_RBX].flags &= 0xFFFF3FFF;
        ++v2;
        ++v46;
      }
      while ( v2 < SLODWORD(snap[1].__vftable) );
    }
    v2 = 0;
    v64 = 0;
    if ( SHIDWORD(snap[1].__vftable) > 0 )
    {
      v65 = (_WORD *)&snap[258].__vftable + 2;
      do
      {
        v66 = (unsigned __int16)*v65;
        v67 = (unsigned __int16)*v65;
        *(&outStateBuffer.numModels + (v67 >> 5)) |= 0x80000000 >> (*v65 & 0x1F);
        if ( v66 >= 0x500 )
        {
          LODWORD(forceTransferMarks) = 1280;
          LODWORD(brushIndex) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        v68 = v67;
        if ( cg_fxEntitiesArray[v68].prevUsageCount != (cg_fxEntitiesArray[v68].info.flags & 0xF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1582, ASSERT_TYPE_ASSERT, "(fxEnt->prevUsageCount == FXEntity_GetUsageCounter( &fxEnt->info ))", (const char *)&queryFormat, "fxEnt->prevUsageCount == FXEntity_GetUsageCounter( &fxEnt->info )") )
          __debugbreak();
        cg_fxEntitiesArray[v68].info.flags &= ~0x10u;
        ++v64;
        ++v65;
      }
      while ( v64 < SHIDWORD(snap[1].__vftable) );
    }
    LODWORD(v1) = localClientNum;
  }
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(forceTransferMarks) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 118, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", forceTransferMarks) )
      __debugbreak();
  }
  _R13 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->nextSnap;
  if ( _R13 )
  {
    if ( !snap )
    {
      snap = _R13;
      cgameGlob->snap = _R13;
    }
    CG_Entity_SetFrameInterpolation((LocalClientNum_t)v1);
    G_MainSP_ReadClientMessages();
    if ( _R13->serverTime != G_MainSP_GetServerSnapTime() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1603, ASSERT_TYPE_ASSERT, "(nextSnap->serverTime == G_MainSP_GetServerSnapTime())", (const char *)&queryFormat, "nextSnap->serverTime == G_MainSP_GetServerSnapTime()") )
      __debugbreak();
    if ( cgameGlob->ps && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
      v71 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
      if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1609, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      *(_DWORD *)(v71 + 19536) = snap->serverTime;
      *(_DWORD *)(v71 + 19532) = snap->GetPlayerState(snap, (const LocalClientNum_t)v1)->deltaTime;
    }
    if ( !v160->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 220, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    memset_0(v160->m_entries, 0, 62i64 * BgWeaponMap::ms_runtimeSize);
    v72 = 0;
    if ( SLODWORD(_R13[2].__vftable) > 0 )
    {
      v73 = (unsigned __int16 *)&_R13[562].__vftable + 2;
      do
      {
        SnapshotWeaponEntry = CG_GetSnapshotWeaponEntry(*v73);
        CgWeaponMap::SetWeaponEntry(v160, SnapshotWeaponEntry);
        ++v72;
        ++v73;
      }
      while ( v72 < SLODWORD(_R13[2].__vftable) );
    }
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v1);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1625, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::PostSnapshotInit(System);
    cgameGlob->scriptedAnimDebug.entCount = 0;
    if ( SLODWORD(_R13[1].__vftable) > 0 )
    {
      v75 = (unsigned __int16 *)&_R13[2].__vftable + 2;
      do
      {
        v76 = *v75;
        v77 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
        if ( (unsigned int)v76 >= 0x800 )
        {
          LODWORD(forceTransferMarks) = 2048;
          LODWORD(brushIndex) = v76;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        _RDI = (__int64)&v77->m_entities[(int)v76];
        if ( (*(_BYTE *)(_RDI + 648) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1637, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", (const char *)&queryFormat, "!CENextValid( cent )") )
          __debugbreak();
        *(_DWORD *)(_RDI + 648) |= 1u;
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 680, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
          __debugbreak();
        *(_DWORD *)(_RDI + 648) &= 0xFFFF3FFF;
        _RAX = CG_GetSnapshotEntityState(v76);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rdi+190h], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rdi+1A0h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rdi+1B0h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rdi+1C0h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rdi+1D0h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rdi+1E0h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rdi+1F0h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rdi+200h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rdi+210h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rdi+220h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rdi+230h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rdi+240h], xmm1
          vmovups xmm0, xmmword ptr [rax+0C0h]
          vmovups xmmword ptr [rdi+250h], xmm0
          vmovups xmm1, xmmword ptr [rax+0D0h]
          vmovups xmmword ptr [rdi+260h], xmm1
          vmovups xmm0, xmmword ptr [rax+0E0h]
          vmovups xmmword ptr [rdi+270h], xmm0
        }
        *(_QWORD *)(_RDI + 640) = *(_QWORD *)&_RAX->partBits.array[6];
        *(_DWORD *)(_RDI + 736) = CG_GetSnapshotEntityUseCount(v76);
        v95 = 0x80000000 >> (v76 & 0x1F);
        v96 = v95 & *((_DWORD *)v165 + (v76 >> 5));
        if ( v96 )
        {
          *((_DWORD *)v165 + (v76 >> 5)) &= ~v95;
          HasEntityTypeEvolved = CG_GameInterface_HasEntityTypeEvolved((const centity_t *)_RDI);
          v98 = *(_WORD *)(_RDI + 408);
          if ( HasEntityTypeEvolved )
            goto LABEL_382;
          if ( v98 == 15 )
          {
            HasEntityTypeEvolved = 0;
            v99 = *(_BYTE *)_RDI == 14;
          }
          else
          {
            if ( v98 != 21 )
              goto LABEL_259;
            v99 = *(_BYTE *)_RDI == 19;
          }
          LOBYTE(HasEntityTypeEvolved) = v99;
          if ( HasEntityTypeEvolved )
          {
LABEL_382:
            if ( (v98 < 0 || (unsigned __int16)v98 > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v98, "signed", v98) )
              __debugbreak();
            *(_BYTE *)_RDI = v98;
          }
        }
LABEL_259:
        v100 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(_RDI + 288), ACTIVE, 2u);
        v101 = v100 != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(_RDI + 412), ACTIVE, 2u);
        v102 = v96 == 0;
        if ( !v96 )
          goto LABEL_263;
        if ( v101 || *(_DWORD *)(_RDI + 740) != *(_DWORD *)(_RDI + 736) )
        {
          v102 = v96 == 0;
LABEL_263:
          LODWORD(v1) = localClientNum;
          CG_SnapshotSP_ResetEntity(localClientNum, (centity_t *)_RDI, !v102);
          goto LABEL_265;
        }
        LODWORD(v1) = localClientNum;
LABEL_265:
        if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
        {
          LODWORD(v150) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
          LODWORD(v149) = 1;
          LODWORD(forceTransferMarks) = (_DWORD)v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", forceTransferMarks, v149, v150) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
        {
          LODWORD(forceTransferMarks) = CgVehicleSystem::ms_allocatedCount;
          LODWORD(brushIndex) = (_DWORD)v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        if ( !CgVehicleSystem::ms_vehicleSystemArray[(int)v1] )
        {
          LODWORD(forceTransferMarks) = (_DWORD)v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", forceTransferMarks) )
            __debugbreak();
        }
        CgVehicleSystemSP::UpdateVehicleDef((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[(int)v1], (centity_t *)_RDI);
        CgPredictedEntitySystem::EvalSnapshotEnt(System, (centity_t *)_RDI);
        v103 = DVARBOOL_cg_dumpScriptedAnims;
        if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v103);
        if ( v103->current.enabled )
        {
          entCount = cgameGlob->scriptedAnimDebug.entCount;
          if ( (int)entCount < 10 && *(_WORD *)(_RDI + 408) == 6 && (*(_DWORD *)(_RDI + 496) & 0x40) != 0 )
          {
            cgameGlob->scriptedAnimDebug.entityNums[entCount] = *(__int16 *)(_RDI + 400);
            ++cgameGlob->scriptedAnimDebug.entCount;
          }
        }
        ++v2;
        ++v75;
      }
      while ( v2 < SLODWORD(_R13[1].__vftable) );
    }
    v105 = 0i64;
    v106 = 0;
    if ( SHIDWORD(_R13[1].__vftable) > 0 )
    {
      v107 = (unsigned __int16 *)&_R13[258].__vftable + 2;
      do
      {
        v108 = *v107;
        if ( (unsigned int)v108 >= 0x500 )
        {
          LODWORD(forceTransferMarks) = 1280;
          LODWORD(brushIndex) = *v107;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        _RBX = &cg_fxEntitiesArray[(int)v108];
        if ( (_RBX->info.flags & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1688, ASSERT_TYPE_ASSERT, "(!FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "!FXEntity_IsValid( &fxEnt->info )") )
          __debugbreak();
        _RAX = CG_FXEntitiesGetSnapshotFXEnt(v108);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx], ymm0
        }
        *(_DWORD *)&_RBX->info.fxId = *(_DWORD *)&_RAX->fxId;
        if ( (_RBX->info.flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1691, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "FXEntity_IsValid( &fxEnt->info )") )
          __debugbreak();
        v112 = 0x80000000 >> (v108 & 0x1F);
        v113 = *(&outStateBuffer.numModels + (v108 >> 5));
        if ( (v113 & v112) == 0 || (*(&outStateBuffer.numModels + (v108 >> 5)) = v113 & ~v112, _RBX->prevUsageCount != (_RBX->info.flags & 0xF)) )
          CG_FXEntitiesResetEnt(_RBX);
        ++v106;
        ++v107;
      }
      while ( v106 < SHIDWORD(_R13[1].__vftable) );
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1703, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
      __debugbreak();
    if ( _R13[1].serverTime > 0x400u )
    {
      LODWORD(v149) = 1024;
      LODWORD(brushIndex) = _R13[1].serverTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1706, ASSERT_TYPE_ASSERT, "( 0 ) <= ( nextSnap->numSounds ) && ( nextSnap->numSounds ) <= ( 1024 )", "nextSnap->numSounds not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", brushIndex, 0i64, v149) )
        __debugbreak();
    }
    v114 = 0;
    if ( _R13[1].serverTime > 0 )
    {
      v115 = (unsigned __int16 *)&_R13[434].__vftable + 2;
      do
      {
        v116 = *v115;
        SnapshotSoundInfo = CG_GetSnapshotSoundInfo(v116);
        ClientSoundInfo = CL_GetClientSoundInfo(v116);
        ++v115;
        ++v114;
        ClientSoundInfo->soundOrigin.v[0] = SnapshotSoundInfo->soundOrigin.v[0];
        ClientSoundInfo->soundOrigin.v[1] = SnapshotSoundInfo->soundOrigin.v[1];
        ClientSoundInfo->soundOrigin.v[2] = SnapshotSoundInfo->soundOrigin.v[2];
        ClientSoundInfo->soundAngles = SnapshotSoundInfo->soundAngles;
        ClientSoundInfo->loopSound = SnapshotSoundInfo->loopSound;
        ClientSoundInfo->soundNum = v116;
      }
      while ( v114 < _R13[1].serverTime );
    }
    _RAX = cgameGlob;
    __asm
    {
      vmovups ymm0, ymmword ptr [r13+12324h]
      vmovups ymmword ptr [rax+0B53C4h], ymm0
      vmovups xmm1, xmmword ptr [r13+12344h]
      vmovups xmmword ptr [rax+0B53E4h], xmm1
    }
  }
  else
  {
    v105 = 0i64;
  }
  v122 = 0;
  v123 = 0i64;
  v124 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v122 & 0x1F)) & *((_DWORD *)v165 + (v105 >> 5))) != 0 )
    {
      v125 = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)v122 >= 0x800 )
      {
        LODWORD(forceTransferMarks) = 2048;
        LODWORD(brushIndex) = v122;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      v126 = &v125->m_entities[v124];
      if ( v126->nextState.number != v122 )
      {
        LODWORD(v150) = v122;
        LODWORD(v149) = v126->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1737, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( entnum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "entnum", v149, v150) )
          __debugbreak();
      }
      FX_Dismemberment_Clear(localClientNum, v122);
      CG_SnapshotSP_ShutdownEntity(localClientNum, v126);
      R_EntityMoved(localClientNum, v122);
      FX_MarkEntDetachAll(localClientNum, v122);
      CG_Entity_DestroyPhysics(localClientNum, v122);
      CG_Entity_DestroyCloth(localClientNum, v122);
      if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, v126->nextState.number) )
        ScriptableCl_UnbindEntityReservedDef(localClientNum, v126->nextState.number);
      if ( (unsigned int)v122 > 0x9E4 )
      {
        LODWORD(forceTransferMarks) = v122;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", forceTransferMarks) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(forceTransferMarks) = 2;
        LODWORD(brushIndex) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      if ( (unsigned int)(v122 + 2533 * localClientNum) >= 0x13CA )
      {
        LODWORD(forceTransferMarks) = v122 + 2533 * localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", forceTransferMarks) )
          __debugbreak();
      }
      v127 = clientObjMap[2533 * localClientNum + v123];
      if ( clientObjMap[2533 * localClientNum + v123] )
      {
        if ( v127 >= (unsigned int)s_objCount )
        {
          LODWORD(forceTransferMarks) = clientObjMap[2533 * localClientNum + v123];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", forceTransferMarks) )
            __debugbreak();
        }
        v128 = (const DObj *)s_objBuf[v127];
        if ( v128 )
        {
          v129 = DObjGetTree(v128);
          Com_SafeClientDObjFree(v122, localClientNum);
          if ( v129 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && v122 == cgameGlob->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1772, ASSERT_TYPE_ASSERT, "(entnum != cgameGlob->clientNum)", (const char *)&queryFormat, "entnum != cgameGlob->clientNum") )
              __debugbreak();
            Com_XAnimFreeSmallTree(v129);
          }
        }
      }
    }
    ++v122;
    ++v105;
    ++v123;
    ++v124;
  }
  while ( v122 < 2048 );
  v130 = cg_fxEntitiesArray;
  v131 = 0;
  v132 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v131 & 0x1F)) & *(&outStateBuffer.numModels + (v132 >> 5))) != 0 )
    {
      if ( (unsigned int)v131 >= 0x500 )
      {
        LODWORD(forceTransferMarks) = 1280;
        LODWORD(brushIndex) = v131;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      CG_FXEntitiesShutdownEnt(v130);
    }
    ++v131;
    ++v132;
    ++v130;
  }
  while ( v131 < 1280 );
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1191, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v133 = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v134 = CgStatic::GetLocalClientStatics(localClientNum);
  v135 = CgStatic::GetCharacterInfo(v134, v133->clientNum);
  v136 = 0;
  v137 = cgameGlob;
  v135->entityNum = v133->clientNum;
  v135->infoValid = 1;
  v135->nextValid = 1;
  v135->dobjDirty = v158 != 0;
  v135->perks = v133->predictedPlayerState.perks;
  ps = cgameGlob->ps;
  v139 = ps && cgameGlob->nextPs;
  v140 = !ps && cgameGlob->nextPs;
  v141 = ScriptableCl_ObjectiveChanged(localClientNum);
  if ( (v139 && memcmp_0(cgameGlob->ps->objectives, cgameGlob->nextPs->objectives, 0x1580ui64) || v140 || v141) && LUI_BeginEvent(localClientNum, "objectives_update", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  ScriptableCl_ObjectiveChangedClear(localClientNum);
  if ( (v139 && memcmp_0(cgameGlob->ps->targetMarkerGroups, cgameGlob->nextPs->targetMarkerGroups, 0xB0ui64) || v140) && LUI_BeginEvent(localClientNum, "target_markers_update", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  if ( _R13 )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( BG_Omnvar_PerGameCount() )
    {
      do
      {
        v143 = (OmnvarData *)((char *)&_R13[690].__vftable + 8 * v136 + 4);
        Data = CG_Omnvar_GetData(localClientNum, v136);
        Def = BG_Omnvar_GetDef(v136);
        v146 = Def->flags;
        if ( (v146 & 8) == 0 )
        {
          if ( (v146 & 1) != 0 && v143->timeModified != Data->timeModified && !CG_Omnvar_AreValuesEqual(Def, (const OmnvarData *const)((char *)&_R13[690].__vftable + 8 * v136 + 4), Data) )
            LUI_NotifyOmnvarChanged(ControllerFromClient, Def, (const OmnvarData *)((char *)&_R13[690].__vftable + 8 * v136 + 4), LUI_luaVM);
          *Data = *v143;
        }
        ++v136;
      }
      while ( v136 < BG_Omnvar_PerGameCount() );
    }
    v137 = cgameGlob;
  }
  CG_Omnvar_UpdatePmoveValues(localClientNum);
  CG_SnapshotSP_ProcessPlayerState(localClientNum, v137);
  SND_ReleasePhysicsQueryBlock();
  CG_SnapshotSP_CheckSnapshot("CG_SetNextSnap-post", localClientNum, 0);
  ScriptableCl_ProcessErrors();
}

/*
==============
CG_SnapshotSP_ShutdownEntity
==============
*/
void CG_SnapshotSP_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  CgPredictedEntitySystem *System; 
  unsigned __int8 eType; 
  unsigned __int8 lookAtInfoIndex; 
  trajectory_t_secure *p_pos; 
  int ragdollHandle; 
  int v11; 
  DObj *ClientDObj; 
  __int64 v13; 
  __int64 v14; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 167, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(LOCAL_CLIENT_0);
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v13) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v13, 2048) )
      __debugbreak();
  }
  if ( cent != &EntitySystem->m_entities[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 168, ASSERT_TYPE_ASSERT, "(cent == CG_GetEntity( CL_GetOnlyLocalClientNum(), cent->nextState.number ))", (const char *)&queryFormat, "cent == CG_GetEntity( CL_GetOnlyLocalClientNum(), cent->nextState.number )") )
    __debugbreak();
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v2);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 175, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::DisassociateFromPredictedEntity(System, cent);
  CG_Snapshot_ShutdownEntityCommon((LocalClientNum_t)v2, cent);
  eType = cent->pose.eType;
  if ( cent->pose.eType == 19 )
  {
    lookAtInfoIndex = cent->pose.actor.lookAtInfoIndex;
    if ( lookAtInfoIndex != 0xFF )
      cg_actorLookAt[lookAtInfoIndex].lookAtState = 0;
    CG_ActorsSP_ClearCharacterAnimState((LocalClientNum_t)v2, cent->nextState.number);
  }
  else if ( eType == 24 )
  {
    CG_ClientCharacter_ShutdownEntity((const LocalClientNum_t)v2, cent);
  }
  else if ( eType == 27 )
  {
    CG_CoverWall_ShutdownEntity((const LocalClientNum_t)v2, cent);
  }
  CG_LocalEntity_FreeOwnerEntity((const LocalClientNum_t)v2, cent->nextState.number);
  if ( CG_Pose_IsRagdoll(&cent->pose) )
    goto LABEL_32;
  p_pos = &cent->prevState.pos;
  if ( cent == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(p_pos->trType - 23) <= 5 )
  {
LABEL_32:
    ragdollHandle = cent->pose.ragdollHandle;
    if ( ragdollHandle )
      Ragdoll_Release(ragdollHandle);
    CG_Pose_ClearRagdollFlags(&cent->pose);
    v11 = cent->nextState.number;
    p_pos = &cent->prevState.pos;
    cent->prevState.pos.trType = TR_STATIONARY;
    cent->pose.ragdollHandle = 0;
    cent->prevState.apos.trType = TR_STATIONARY;
    ClientDObj = Com_GetClientDObj(v11, (LocalClientNum_t)v2);
    if ( ClientDObj )
      Ragdoll_SetAnimationParameters(ClientDObj, 0, 0);
  }
  CG_SndKillAutoSimEnt(cent, 1);
  CG_Entity_DestroyPhysics((const LocalClientNum_t)v2, cent->nextState.number);
  CG_Entity_DestroyCloth((const LocalClientNum_t)v2, cent->nextState.number);
  if ( ScriptableCl_IsReservedScriptableEntity((const LocalClientNum_t)v2, cent->nextState.number) )
    ScriptableCl_UnbindEntityReservedDef((const LocalClientNum_t)v2, cent->nextState.number);
  if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH )
  {
    p_pos->trType = TR_STATIONARY;
    cent->prevState.apos.trType = TR_STATIONARY;
  }
  if ( ((cent->pose.eType - 12) & 0xFD) == 0 )
  {
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
    {
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v14) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !CgVehicleSystem::ms_vehicleSystemArray[v2] )
    {
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v14) )
        __debugbreak();
    }
    CgVehicleSystem::DeleteVehicle(CgVehicleSystem::ms_vehicleSystemArray[v2], cent->nextState.number);
  }
  cent->pose.eType = 0;
  *(_QWORD *)&cent->clientSoundState.playedBeamFireSound = 0i64;
  cent->clientSoundState.stopFireSoundAlias.name = NULL;
}

/*
==============
CgSnapshotSP::GetPlayerState
==============
*/
playerState_s *CgSnapshotSP::GetPlayerState(CgSnapshotSP *this, const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap == this )
    return LocalClientGlobals->nextPs;
  else
    return LocalClientGlobals->ps;
}

/*
==============
CgSnapshotSP::GetServerPing
==============
*/
__int64 CgSnapshotSP::GetServerPing(CgSnapshotSP *this)
{
  return 50i64;
}

