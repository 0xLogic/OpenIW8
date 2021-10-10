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
void CG_SnapshotSP_CreateNextSnap(LocalClientNum_t localClientNum, float dtime, int readNext)
{
  __int128 v3; 
  __int64 v5; 
  CgGlobalsSP *LocalClientGlobals; 
  __int64 v7; 
  CgSnapshotSP *v8; 
  int ControllerFromClient; 
  unsigned int v10; 
  OmnvarData *v11; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  unsigned __int8 flags; 
  bool v15; 
  __int64 v16; 
  CgSnapshotSP *v17; 
  int v18; 
  unsigned __int16 *entityNums; 
  int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  const DObj *ServerDObjForEntnum; 
  const XAnimTree *Tree; 
  const entityState_t *SnapshotEntityState; 
  int IsScriptableMoverEntityState; 
  scriptAnimNoteType_t v27; 
  int v28; 
  unsigned __int16 *v29; 
  unsigned __int64 v30; 
  DObj *v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  int v34; 
  DObj *ClientDObjBuffered; 
  char v36; 
  const XAnimTree *v37; 
  const entityState_t *v38; 
  int v39; 
  scriptAnimNoteType_t v40; 
  int v41; 
  unsigned int *v42; 
  unsigned __int16 *v43; 
  unsigned __int64 v44; 
  unsigned int v45; 
  playerState_s *nextPs; 
  CgSnapshotSP *v48; 
  unsigned __int16 *v49; 
  CgSnapshotSP *NextSnap_Internal; 
  CgGlobalsSP *v51; 
  int v52[64]; 
  __int128 v53; 

  v5 = localClientNum;
  v53 = v3;
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v51 = LocalClientGlobals;
  if ( LocalClientGlobals->createdNextSnap )
  {
    if ( readNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1007, ASSERT_TYPE_ASSERT, "(!readNext)", (const char *)&queryFormat, "!readNext") )
      __debugbreak();
    CG_SnapshotSP_SetNextSnap((LocalClientNum_t)v5);
  }
  CG_SnapshotSP_CheckSnapshot("CG_CreateNextSnap(pre)", (LocalClientNum_t)v5, 0);
  if ( LocalClientGlobals->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1015, ASSERT_TYPE_ASSERT, "(!cgameGlob->createdNextSnap)", (const char *)&queryFormat, "!cgameGlob->createdNextSnap") )
    __debugbreak();
  LocalClientGlobals->createdNextSnap = 1;
  v7 = 0i64;
  NextSnap_Internal = CG_SnapshotSP_GetNextSnap_Internal((const LocalClientNum_t)v5);
  v8 = NextSnap_Internal;
  if ( NextSnap_Internal )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
    v10 = 0;
    if ( BG_Omnvar_PerGameCount() )
    {
      do
      {
        v11 = &NextSnap_Internal->gameOmnvars.omnvars[v10];
        Data = CG_Omnvar_GetData((LocalClientNum_t)v5, v10);
        Def = BG_Omnvar_GetDef(v10);
        flags = Def->flags;
        if ( (flags & 8) != 0 )
        {
          if ( (flags & 1) != 0 && v11->timeModified != Data->timeModified && !CG_Omnvar_AreValuesEqual(Def, &NextSnap_Internal->gameOmnvars.omnvars[v10], Data) )
            LUI_NotifyOmnvarChanged(ControllerFromClient, Def, &NextSnap_Internal->gameOmnvars.omnvars[v10], LUI_luaVM);
          *Data = *v11;
        }
        ++v10;
      }
      while ( v10 < BG_Omnvar_PerGameCount() );
      LocalClientGlobals = v51;
      v7 = 0i64;
    }
  }
  LocalClientGlobals->snap = NextSnap_Internal;
  DObjInitTransfer();
  v15 = readNext == 0;
  v16 = 0i64;
  if ( v15 )
  {
    v48 = NULL;
  }
  else
  {
    v17 = s_spActiveSnapshots[v5];
    if ( LocalClientGlobals->snap == v17 )
      v16 = 74584i64;
    v16 += (__int64)v17;
    v48 = (CgSnapshotSP *)v16;
    CL_CGameSP_GetSnapshotCommon((CgSnapshotSP *)v16);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1039, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
  }
  LocalClientGlobals->nextSnap = (const snapshot_t *)v16;
  memset_0(v52, 0, sizeof(v52));
  if ( NextSnap_Internal )
  {
    v18 = 0;
    if ( NextSnap_Internal->numEntities > 0 )
    {
      entityNums = NextSnap_Internal->entityNums;
      do
      {
        v20 = *entityNums;
        v21 = (unsigned __int64)*entityNums >> 5;
        v22 = 0x80000000 >> (*entityNums & 0x1F);
        v52[v21] |= v22;
        if ( Com_ServerDObjDirty(v20) )
        {
          ServerDObjForEntnum = Com_GetServerDObjForEntnum(v20);
          if ( !ServerDObjForEntnum )
            goto LABEL_34;
          Tree = DObjGetTree(ServerDObjForEntnum);
          SnapshotEntityState = CG_GetSnapshotEntityState(v20);
          IsScriptableMoverEntityState = ScriptableCl_IsScriptableMoverEntityState(SnapshotEntityState);
          v27 = ANIM_NOTE_NONE;
          if ( IsScriptableMoverEntityState )
            v27 = ANIM_NOTE_SCRIPTABLE;
          if ( CG_SnapshotSP_DObjCloneToBuffer((const LocalClientNum_t)v5, SnapshotEntityState, Tree, v27) )
          {
LABEL_34:
            Com_ServerDObjClean(v20);
            s_clientDirty[v21] |= v22;
          }
        }
        v8 = NextSnap_Internal;
        ++v18;
        ++entityNums;
      }
      while ( v18 < NextSnap_Internal->numEntities );
      v16 = (__int64)v48;
      v7 = 0i64;
    }
  }
  if ( v16 )
  {
    v28 = 0;
    if ( *(int *)(v16 + 16) > 0 )
    {
      v29 = (unsigned __int16 *)(v16 + 36);
      v49 = (unsigned __int16 *)(v16 + 36);
      do
      {
        v30 = *v29;
        v31 = Com_GetServerDObjForEntnum(*v29);
        v32 = 0x80000000 >> (v30 & 0x1F);
        v33 = (unsigned __int64)(unsigned int)v30 >> 5;
        v34 = v52[v33];
        if ( v31 )
        {
          if ( (v32 & v34) != 0 )
          {
            v52[v33] = v34 & ~v32;
            if ( (v32 & s_clientDirty[v33]) != 0 )
            {
              ClientDObjBuffered = Com_GetClientDObjBuffered(v30, (LocalClientNum_t)v5);
              v36 = 1;
            }
            else
            {
              ClientDObjBuffered = Com_GetClientDObj(v30, (LocalClientNum_t)v5);
              v36 = 0;
            }
            if ( ClientDObjBuffered && (v36 || (v31->flags & 1) == 0) )
              DObjTransfer(v31, ClientDObjBuffered, dtime);
          }
          else
          {
            if ( (v32 & s_clientDirty[v33]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1129, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[indexHigh] & BitShiftMasked( entnum )))", (const char *)&queryFormat, "!(s_clientDirty[indexHigh] & BitShiftMasked( entnum ))") )
              __debugbreak();
            v37 = DObjGetTree(v31);
            v38 = CG_GetSnapshotEntityState(v30);
            v39 = ScriptableCl_IsScriptableMoverEntityState(v38);
            v40 = ANIM_NOTE_NONE;
            if ( v39 )
              v40 = ANIM_NOTE_SCRIPTABLE;
            if ( CG_SnapshotSP_DObjCloneToBuffer((const LocalClientNum_t)v5, v38, v37, v40) )
            {
              Com_ServerDObjClean(v30);
              s_clientDirty[v30 >> 5] |= v32;
            }
          }
        }
        else
        {
          v52[v33] = v34 & ~v32;
        }
        ++v28;
        v29 = ++v49;
      }
      while ( v28 < *(_DWORD *)(v16 + 16) );
      v8 = NextSnap_Internal;
      v7 = 0i64;
    }
  }
  if ( v8 )
  {
    if ( readNext )
    {
      v41 = 0;
      if ( v8->numEntities > 0 )
      {
        v42 = s_centInPrevSnapshot;
        v43 = v8->entityNums;
        do
        {
          v44 = (unsigned __int64)*v43 >> 5;
          v45 = 0x80000000 >> (*v43 & 0x1F);
          if ( (v45 & v52[v44]) != 0 )
            v42[v44] |= v45;
          ++v41;
          ++v43;
        }
        while ( v41 < v8->numEntities );
      }
    }
  }
  nextPs = v51->nextPs;
  v51->ps = nextPs;
  if ( readNext )
  {
    if ( nextPs == v51->activePs )
      v7 = 21412i64;
    v7 += (__int64)v51->activePs;
    v51->serverLatestCommandSequence = CL_CGameSP_GetSnapshot((LocalClientNum_t)v5, (playerState_s *)v7);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1169, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
      __debugbreak();
  }
  v51->nextPs = (playerState_s *)v7;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    CG_SnapshotSP_AddPlayerEntityToNextSnap((LocalClientNum_t)v5, (playerState_s *const)v7, readNext);
  CG_SnapshotSP_CheckSnapshot("CG_CreateNextSnap(post)", (LocalClientNum_t)v5, 1);
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
  origin.v[0] = FLOAT_131072_0;
  origin.v[1] = FLOAT_131072_0;
  origin.v[2] = FLOAT_131072_0;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  CgEntitySystem::SetEntityOrigin(EntitySystem, es->number, &origin);
  return 1i64;
}

/*
==============
CG_SnapshotSP_FirstSnapshot
==============
*/
void CG_SnapshotSP_FirstSnapshot(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  cg_t *LocalClientGlobals; 
  __int64 v4; 
  const snapshot_t *nextSnap; 
  __int64 v6; 
  __int64 v7; 
  int serverTime; 
  __int64 v9; 
  int ServerSnapTime; 

  v2 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = 0i64;
  LocalClientGlobals->firstSnapshot = 1;
  do
  {
    if ( s_clientDirty[v4] )
    {
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1966, ASSERT_TYPE_ASSERT, "( ( !s_clientDirty[i] ) )", "( i ) = %i", v6) )
        __debugbreak();
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 0x40 );
  if ( LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1968, ASSERT_TYPE_ASSERT, "(!cgameGlob->snap)", (const char *)&queryFormat, "!cgameGlob->snap") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1969, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  LUI_CoD_PostRestart(localClientNum);
  CG_SnapshotSP_CreateNextSnap(localClientNum, 0.0, 1);
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
    LODWORD(v9) = G_MainSP_GetServerSnapTime();
    LODWORD(v7) = LocalClientGlobals->nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2005, ASSERT_TYPE_ASSERT, "( cgameGlob->nextSnap->serverTime ) == ( G_MainSP_GetServerSnapTime() )", "%s == %s\n\t%i, %i", "cgameGlob->nextSnap->serverTime", "G_MainSP_GetServerSnapTime()", v7, v9) )
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  __int64 v3; 
  unsigned int i; 
  unsigned int v5; 
  unsigned int j; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  const snapshot_t *nextSnap; 
  __int64 v15; 
  __int64 v16; 
  playerState_s *srcPs; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1856, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  srcPs = LocalClientGlobals->nextPs;
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1859, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1861, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1862, ASSERT_TYPE_ASSERT, "(cgameGlob->ps)", (const char *)&queryFormat, "cgameGlob->ps") )
    __debugbreak();
  v3 = 0i64;
  for ( i = 0; i < 0x800; i += 32 )
  {
    v5 = s_centInPrevSnapshot[v3];
    for ( j = __lzcnt(v5); j < 0x20; j = __lzcnt(v5) )
    {
      if ( ((0x80000000 >> j) & v5) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1878, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v5 &= ~(0x80000000 >> j);
      s_centInPrevSnapshot[v3] = 0;
      R_UnlinkEntity(v1, i + j);
    }
    ++v3;
  }
  SND_AddPhysicsQueryBlock();
  Profile_Begin(672);
  Profile_Begin(673);
  CG_PhysicsCharacterProxy_MatchSnapshot((LocalClientNum_t)v1, LocalClientGlobals->snap->serverTime);
  Profile_EndInternal(NULL);
  Profile_Begin(674);
  CG_PhysicsObject_MatchSnapshot((LocalClientNum_t)v1);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  SND_ReleasePhysicsQueryBlock();
  CL_Main_InvalidateSkeletonCache();
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&srcPs->otherFlags, ACTIVE, 0x20u) )
  {
    v7 = LocalClientGlobals->predictedPlayerState.origin.v[0];
    v8 = LocalClientGlobals->predictedPlayerState.origin.v[1];
    v9 = LocalClientGlobals->predictedPlayerState.origin.v[2];
    v10 = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    v11 = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    v12 = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
  }
  else
  {
    v11 = *(float *)&LocalClientGlobals;
    v9 = *(float *)&LocalClientGlobals;
    v12 = *(float *)&LocalClientGlobals;
    v8 = *(float *)&LocalClientGlobals;
    v7 = *(float *)&LocalClientGlobals;
    v10 = *(float *)&LocalClientGlobals;
  }
  v13 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
  {
    if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    BG_CopyPlayerWeapons(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, CgWeaponMap::ms_instance[v1], srcPs);
    memcpy_0(&LocalClientGlobals->predictedPlayerState.hud, &srcPs->hud, sizeof(LocalClientGlobals->predictedPlayerState.hud));
  }
  else
  {
    memcpy_0(&LocalClientGlobals->predictedPlayerState, srcPs, sizeof(LocalClientGlobals->predictedPlayerState));
    LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = LocalClientGlobals->predictedPlayerState.commandTime;
    LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
    LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
  }
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&srcPs->otherFlags, ACTIVE, 0x20u) )
  {
    LocalClientGlobals->predictedPlayerState.origin.v[0] = v7;
    LocalClientGlobals->predictedPlayerState.origin.v[1] = v8;
    LocalClientGlobals->predictedPlayerState.origin.v[2] = v9;
    LocalClientGlobals->predictedPlayerState.viewangles.v[0] = v10;
    LocalClientGlobals->predictedPlayerState.viewangles.v[1] = v11;
    LocalClientGlobals->predictedPlayerState.viewangles.v[2] = v12;
  }
  CG_ServerCmdSP_ExecuteNewServerCommands((LocalClientNum_t)v1, LocalClientGlobals->serverLatestCommandSequence);
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(v16) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 118, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", v16) )
      __debugbreak();
  }
  nextSnap = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->nextSnap;
  if ( nextSnap )
  {
    if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
    {
      LODWORD(v16) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v16, 1, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v16) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v15) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v1] )
    {
      LODWORD(v16) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v16) )
        __debugbreak();
    }
    CgEntitySystem::BuildEntityWorkers(CgEntitySystem::ms_entitySystemArray[v1], nextSnap->serverTime);
  }
  LUIBinding::SnapshotUpdate((LocalClientNum_t)v1);
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
  centity_t *Entity; 
  __m256i v7; 
  int eType; 
  __m256i v9; 
  LerpEntityStateInfoVolumeGrapple v10; 
  int v11; 
  bool v12; 
  centity_t *v13; 
  EventSequence v14; 
  unsigned int SnapshotEntityUseCount; 
  int number; 
  bool v17; 
  bool v18; 
  EntityEvent v19; 
  EntityEvent v20; 
  EntityEvent v21; 
  EntityEvent v22; 

  ps = cgameGlob->ps;
  nextPs = cgameGlob->nextPs;
  if ( ps )
  {
    cgameGlob->playerTeleported = 0;
    Entity = CG_GetEntity(localClientNum, ps->clientNum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1219, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v7 = *(__m256i *)&Entity->nextState.lerp.pos.trDelta.y;
    eType = Entity->nextState.eType;
    *(__m256i *)Entity->prevState.eFlags.m_flags = *(__m256i *)Entity->nextState.lerp.eFlags.m_flags;
    v9 = *(__m256i *)Entity->nextState.lerp.apos.trDelta.v;
    *(__m256i *)&Entity->prevState.pos.trDelta.y = v7;
    v10 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->nextState.lerp.u.infoVolumeGrapple + 20);
    *(__m256i *)Entity->prevState.apos.trDelta.v = v9;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->prevState.u.infoVolumeGrapple + 20) = v10;
    Entity->prevEType = truncate_cast<unsigned char,int>(eType);
    Entity->prevOtherEntityNum = Entity->nextState.otherEntityNum;
    Entity->prevPhysicsChildBodyIdx = Entity->nextState.un.vehicleXModel;
    v11 = *(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF;
    Entity->flags &= ~1u;
    Entity->prevLinkParent = v11;
    Entity->prevUseCount = Entity->nextUseCount;
  }
  if ( nextPs )
  {
    if ( cgameGlob->m_usingLowLodClientEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1232, ASSERT_TYPE_ASSERT, "(!cgameGlob->UsingLowLodClientEntityEvents())", (const char *)&queryFormat, "!cgameGlob->UsingLowLodClientEntityEvents()") )
      __debugbreak();
    v12 = 1;
    if ( !ps )
    {
      cgameGlob->playerTeleported = 1;
      ps = nextPs;
      v12 = 0;
      cgameGlob->ps = nextPs;
    }
    v13 = CG_GetEntity(localClientNum, nextPs->clientNum);
    v14.combined = (int)v13->nextState.eventSequence;
    v19 = v13->nextState.events[0];
    v20 = v13->nextState.events[1];
    v21 = v13->nextState.events[2];
    v22 = v13->nextState.events[3];
    v13->nextState = *CG_GetSnapshotEntityState(nextPs->clientNum);
    SnapshotEntityUseCount = CG_GetSnapshotEntityUseCount(nextPs->clientNum);
    number = v13->nextState.number;
    v13->nextUseCount = SnapshotEntityUseCount;
    if ( number != LOWORD(nextPs->clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1254, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( (ushort)nextPs->clientNum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "(ushort)nextPs->clientNum", number, LOWORD(nextPs->clientNum)) )
      __debugbreak();
    v13->nextState.eventSequence = v14;
    v13->nextState.events[0] = v19;
    v13->nextState.events[1] = v20;
    v13->nextState.events[2] = v21;
    v13->nextState.events[3] = v22;
    if ( (v13->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1262, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", (const char *)&queryFormat, "!CENextValid( cent )") )
      __debugbreak();
    v13->flags |= 1u;
    v17 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v13->prevState.eFlags, ACTIVE, 2u);
    v18 = v17 != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v13->nextState.lerp.eFlags, ACTIVE, 2u);
    if ( ps == nextPs || v18 )
    {
      memcpy_0(ps, nextPs, sizeof(playerState_s));
      CG_SnapshotSP_ResetEntity(localClientNum, v13, v12);
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
  cg_t *v3; 
  const dvar_t *v4; 
  cg_t *v5; 
  int time; 
  const snapshot_t *nextSnap; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int serverTime; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int ServerSnapTime; 

  Sys_ProfBeginNamedEvent(0xFFF4A460, "process snapshots 2");
  Profile_Begin(2);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  g_processEvents = 0;
  v3 = LocalClientGlobals;
  if ( LocalClientGlobals->demoType == HALF )
  {
    v5 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v5->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2017, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
      __debugbreak();
    if ( !v5->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2018, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    time = v5->time;
    if ( time - v5->snap->serverTime < 0 || time - v5->nextSnap->serverTime >= 0 )
    {
      CG_SnapshotSP_CreateNextSnap(localClientNum, (float)(v5->frametime - v5->animFrametime) * 0.001, 1);
      CG_SnapshotSP_SetNextSnap(localClientNum);
      CG_SnapshotSP_ProcessNextSnap(localClientNum);
    }
  }
  else
  {
    v4 = DVARBOOL_sv_clientSaveFastCheckOn;
    if ( !DVARBOOL_sv_clientSaveFastCheckOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientSaveFastCheckOn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      SV_MainSP_CheckForClientSaveGame(1);
    if ( SV_ServerSnapshotPending() )
    {
      SV_WaitServerSnapshot();
      if ( !v3->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2066, ASSERT_TYPE_ASSERT, "(cgameGlob->createdNextSnap)", (const char *)&queryFormat, "cgameGlob->createdNextSnap") )
        __debugbreak();
      CG_SnapshotSP_SetNextSnap(localClientNum);
      CG_SnapshotSP_ProcessNextSnap(localClientNum);
      g_processEvents = 1;
    }
    else if ( v3->createdNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2075, ASSERT_TYPE_ASSERT, "(!cgameGlob->createdNextSnap)", (const char *)&queryFormat, "!cgameGlob->createdNextSnap") )
    {
      __debugbreak();
    }
  }
  CG_Entity_SetFrameInterpolation(localClientNum);
  if ( !v3->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2086, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( v3->time != com_time )
  {
    ServerSnapTime = G_MainSP_GetServerSnapTime();
    v16 = SV_GameSP_LevelTime();
    v14 = com_time;
    serverTime = v3->nextSnap->serverTime;
    v10 = v3->snap->serverTime;
    LODWORD(v8) = v3->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2087, ASSERT_TYPE_ASSERT, "(cgameGlob->time == com_time)", "%s\n\t%d %d %d %d %d %d", "cgameGlob->time == com_time", v8, v10, serverTime, v14, v16, ServerSnapTime) )
      __debugbreak();
  }
  if ( v3->nextSnap->serverTime != SV_GameSP_LevelTime() )
  {
    LODWORD(v17) = G_MainSP_GetServerSnapTime();
    LODWORD(v15) = SV_GameSP_LevelTime();
    LODWORD(v13) = com_time;
    LODWORD(v11) = v3->nextSnap->serverTime;
    LODWORD(v9) = v3->snap->serverTime;
    LODWORD(v8) = v3->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2088, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap->serverTime == SV_GameSP_LevelTime())", "%s\n\t%d %d %d %d %d %d", "cgameGlob->nextSnap->serverTime == SV_GameSP_LevelTime()", v8, v9, v11, v13, v15, v17) )
      __debugbreak();
  }
  if ( v3->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    LODWORD(v17) = G_MainSP_GetServerSnapTime();
    LODWORD(v15) = SV_GameSP_LevelTime();
    LODWORD(v13) = com_time;
    LODWORD(v11) = v3->nextSnap->serverTime;
    LODWORD(v9) = v3->snap->serverTime;
    LODWORD(v8) = v3->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2089, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap->serverTime == G_MainSP_GetServerSnapTime())", "%s\n\t%d %d %d %d %d %d", "cgameGlob->nextSnap->serverTime == G_MainSP_GetServerSnapTime()", v8, v9, v11, v13, v15, v17) )
      __debugbreak();
  }
  if ( v3->time - v3->snap->serverTime < 0 )
  {
    LODWORD(v17) = G_MainSP_GetServerSnapTime();
    LODWORD(v15) = SV_GameSP_LevelTime();
    LODWORD(v13) = com_time;
    LODWORD(v11) = v3->nextSnap->serverTime;
    LODWORD(v9) = v3->snap->serverTime;
    LODWORD(v8) = v3->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2090, ASSERT_TYPE_ASSERT, "(cgameGlob->time - cgameGlob->snap->serverTime >= 0)", "%s\n\t%d %d %d %d %d %d", "cgameGlob->time - cgameGlob->snap->serverTime >= 0", v8, v9, v11, v13, v15, v17) )
      __debugbreak();
  }
  if ( !v3->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2091, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  nextSnap = v3->nextSnap;
  if ( nextSnap != v3->snap && nextSnap->serverTime - v3->time <= 0 )
  {
    LODWORD(v9) = v3->time;
    LODWORD(v8) = nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 2092, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0)", "%s\n\tcgameGlob->nextSnap->serverTime is %i, cgameGlob->time is %i\n", "cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0", v8, v9) )
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
  entityType_s *p_eType; 
  char v7; 
  __int16 v8; 
  char v9; 
  char v10; 
  bool v11; 
  int i; 
  int time; 
  entityType_s eType; 
  const ScriptableDef *scriptable; 
  DObj *ClientDObj; 
  unsigned __int8 lookAtInfoIndex; 
  CgEntitySystem *EntitySystem; 
  __int64 v19; 
  vec3_t outOrigin; 
  __int64 v22; 
  CgTrajectory v23; 
  vec4_t quat; 
  vec3_t origin; 

  v22 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 392, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 393, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  p_eType = &cent->nextState.eType;
  if ( cent->prevUseCount == cent->nextUseCount && cent->pose.eType == *p_eType )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    CG_SnapshotSP_ShutdownEntity(localClientNum, cent);
    CG_Snapshot_ResetEntityCommon(localClientNum, cent);
    *(_QWORD *)&cent->previousEventSequence.combined = 0i64;
    *(_QWORD *)&cent->lightingOrigin.y = 0i64;
    v8 = *p_eType;
    if ( *p_eType == ET_TURRET )
    {
      CG_Turret_Reset(cent);
    }
    else if ( v8 > 13 )
    {
      if ( v8 <= 15 )
      {
        memset_0(&cent->pose.160, 0, sizeof(cent->pose.160));
      }
      else if ( v8 == 19 || v8 == 21 )
      {
        cent->pose.player.control = NULL;
        *((_QWORD *)&cent->pose.moverFx + 1) = 0i64;
        cent->pose.coverWall.coverGrid[4] = 0;
        cent->pose.actor.lookAtInfoIndex = -1;
      }
    }
  }
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 2u);
  v10 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 2u);
  v11 = inPrevSnap && !v7 && v9 != v10;
  AimAssist_ClearEntityReference(localClientNum, cent->nextState.number);
  cent->pose.cullIn = 0;
  *(__m256i *)cent->prevState.eFlags.m_flags = *(__m256i *)cent->nextState.lerp.eFlags.m_flags;
  *(__m256i *)&cent->prevState.pos.trDelta.y = *(__m256i *)&cent->nextState.lerp.pos.trDelta.y;
  *(__m256i *)cent->prevState.apos.trDelta.v = *(__m256i *)cent->nextState.lerp.apos.trDelta.v;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&cent->prevState.u.infoVolumeGrapple + 20) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&cent->nextState.lerp.u.infoVolumeGrapple + 20);
  cent->prevEType = truncate_cast<unsigned char,int>(*(__int16 *)p_eType);
  cent->prevOtherEntityNum = cent->nextState.otherEntityNum;
  cent->prevPhysicsChildBodyIdx = cent->nextState.un.vehicleXModel;
  cent->prevLinkParent = *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF;
  cent->prevUseCount = cent->nextUseCount;
  for ( i = 0; i < 2; ++i )
    Tracer_SetDrawCounter(localClientNum, cent->nextState.number, (const PlayerHandIndex)i, 0);
  cent->eyeSensorPupilSize = 0.0;
  *(_QWORD *)&cent->pickupPredictionTime = 0i64;
  *(_WORD *)&cent->weaponVisTestCounter = 0;
  cent->tree = NULL;
  cent->updateDelayedNext = NULL;
  if ( v11 )
    cent->flags &= 0xFFF0037D;
  else
    cent->flags &= 0xFFF0017D;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  CgTrajectory::CgTrajectory(&v23, localClientNum, cent, &cent->nextState.lerp);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  BgTrajectory::EvaluateTrajectories(&v23, time, &outOrigin, &cent->pose.angles);
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  cent->pose.eType = truncate_cast<unsigned char,int>(*(__int16 *)p_eType);
  if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * localClientNum + 2), cent->nextState.number, localClientNum) == -1 && CG_Entity_ShouldCreatePhysicsOnInit(localClientNum, cent->nextState.number) )
  {
    CG_Entity_DestroyPhysics(localClientNum, cent->nextState.number);
    CG_Entity_CreatePhysics(localClientNum, cent->nextState.number, 1);
  }
  if ( !CG_Entity_HasCloth(localClientNum, cent->nextState.number) && CG_Entity_ShouldCreateClothOnInit(localClientNum, cent->nextState.number) )
  {
    CG_Entity_DestroyCloth(localClientNum, cent->nextState.number);
    CG_Entity_CreateCloth(localClientNum, cent->nextState.number);
  }
  eType = *p_eType;
  if ( *p_eType != ET_PLAYER )
  {
    CG_Entity_UpdateScriptableDObjBinding(localClientNum, cent->nextState.number, 0);
    eType = cent->nextState.eType;
  }
  switch ( eType )
  {
    case ET_PLAYER:
      scriptable = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, "SPPlayerScriptableDef", 0).scriptable;
      if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, cent->nextState.number, scriptable) == Started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to set scriptable '%s' for player %i. Please bug with a crash dump", scriptable->name, cent->nextState.number) )
        __debugbreak();
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        CG_SnapshotSP_ResetPlayerEntity(localClientNum, cent);
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, cent) )
      {
        AnglesToQuat(&cent->pose.angles, &quat);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter(localClientNum, cent, &outOrigin, &quat);
      }
      goto LABEL_75;
    case ET_PLAYER_CORPSE:
      goto $LN46_35;
    case ET_MISSILE:
      cent->typeData.flightDurationMs = 0;
      goto LABEL_75;
    case ET_SCRIPTMOVER:
      cent->pose.scriptMover.doVehicleControllers = 0;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        CG_Entity_UpdateBModelWorldBounds(localClientNum, cent, 1);
      }
      else
      {
        if ( cent->nextState.un.scriptMoverType == 1 && Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, cent) )
        {
          AnglesToQuat(&cent->pose.angles, &quat);
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          CG_PhysicsCharacterProxy_AddCharacter(localClientNum, cent, &outOrigin, &quat);
        }
        if ( ScriptableCl_IsScriptableMoverEntityState(&cent->nextState) )
          ScriptableCl_AssociateScriptMoverInstance(localClientNum, cent);
LABEL_75:
        R_MDAO_ResetEntityOcclusionState(&cent->pose);
        R_EntityMoved(localClientNum, cent->nextState.number);
        origin.v[0] = FLOAT_131072_0;
        origin.v[1] = FLOAT_131072_0;
        origin.v[2] = FLOAT_131072_0;
        EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
        CgEntitySystem::SetEntityOrigin(EntitySystem, cent->nextState.number, &origin);
        CG_GameInterface_SnapshotSP_ResetEntity(localClientNum, cent, inPrevSnap);
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
      return;
    case ET_TURRET:
      *(_DWORD *)((char *)&cent->pose.moverFx + 29) = -16843010;
      cent->pose.turret.tagIdx_barrel = -2;
      *(unsigned __int16 *)((char *)cent->pose.vehicle.wheelFraction + 1) = 256;
      cent->pose.player.control = NULL;
      ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
      if ( ClientDObj )
        CG_EntitySP_TurretPreControllers(localClientNum, ClientDObj, cent);
      goto LABEL_75;
    case ET_VEHICLE:
      CG_Vehicle_ResetEntity(localClientNum, cent, v11);
      goto LABEL_75;
    case ET_VEHICLE_CORPSE:
      CG_Vehicle_ClearBoneControllers(localClientNum, cent);
      goto LABEL_75;
    case ET_ACTOR:
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered(localClientNum, cent) )
      {
        AnglesToQuat(&cent->pose.angles, &quat);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter(localClientNum, cent, &outOrigin, &quat);
      }
      goto $LN41_37;
    case ET_ACTOR_CORPSE:
$LN41_37:
      *((_WORD *)&cent->pose.moverFx + 9) = -258;
      lookAtInfoIndex = cent->pose.actor.lookAtInfoIndex;
      if ( lookAtInfoIndex != 0xFF )
      {
        if ( lookAtInfoIndex >= 0x26u )
        {
          LODWORD(v19) = lookAtInfoIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( cent->pose.actor.lookAtInfoIndex ) < (unsigned)( (32 + 6) )", "cent->pose.actor.lookAtInfoIndex doesn't index MAX_LOOK_AT_INFO\n\t%i not in [0, %i)", v19, 38) )
            __debugbreak();
        }
        cg_actorLookAt[cent->pose.actor.lookAtInfoIndex].lookAtState = 0;
      }
      cent->pose.actor.lookAtInfoIndex = -1;
      cent->pose.coverWall.coverGrid[3] = -8388609;
      CG_ActorsSP_ClearCharacterAnimState(localClientNum, cent->nextState.number);
      CG_ActorsSP_PreControllers(cent);
$LN46_35:
      cent->typeData.flightDurationMs = 2047;
      goto LABEL_75;
    case ET_PHYSICS_CHILD:
      CG_PhysicsObject_ResetPhysicsChild(localClientNum, cent);
      goto LABEL_75;
    case ET_BEAM:
      CG_BeamEntity_Reset(localClientNum, cent);
      goto LABEL_75;
    case ET_CLIENT_CHARACTER:
      CG_ClientCharacter_ResetEntity(localClientNum, cent);
      goto LABEL_75;
    case ET_RAGDOLL_CONSTRAINT:
      CG_RagdollConstraintEntity_Reset(localClientNum, cent);
      goto LABEL_75;
    case ET_PHYSICS_VOLUME:
      CG_PhysicsVolume_Reset(localClientNum, cent);
      goto LABEL_75;
    case ET_COVERWALL:
      CG_CoverWall_ResetEntity(localClientNum, cent);
      goto LABEL_75;
    case ET_INFO_VOLUME_GRAPPLE:
      *(_QWORD *)cent->nextState.lerp.u.actor.threatSight = 0i64;
      cent->nextState.lerp.u.anonymous.data[3] = 0;
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
  DObj *objID; 
  XAnimTree *pXAnimTree; 
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  playerState_s *p_predictedPlayerState; 
  unsigned int suitIndex; 
  unsigned int AnimsetIndexBySuit; 
  unsigned int Animset; 
  XAnimOwner v16; 
  __int64 forceBlendTime; 

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
  objID = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( objID )
  {
    pXAnimTree = CharacterInfo->pXAnimTree;
    if ( !pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 335, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    if ( !DObjGetTree(objID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 337, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
      __debugbreak();
    if ( DObjGetTree(objID) != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 338, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ) == pAnimTree)", (const char *)&queryFormat, "DObjGetTree( obj ) == pAnimTree") )
      __debugbreak();
    v9 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 341, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    if ( pXAnimTree )
    {
      XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, 0.0, 1, objID, LINEAR);
      if ( !PlayerASM_IsEnabled() )
      {
        XAnimSetCompleteGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v9 + 40), 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        XAnimSetCompleteGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v9 + 42), 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
    }
    memset_0(&CharacterInfo->legs, 0, sizeof(CharacterInfo->legs));
    CharacterInfo->legs.yawAngle = CharacterInfo->playerAngles.v[1];
    CharacterInfo->legs.pitchAngle = 0.0;
    memset_0(&CharacterInfo->torso, 0, sizeof(CharacterInfo->torso));
    CharacterInfo->torso.yawAngle = CharacterInfo->playerAngles.v[1];
    CharacterInfo->torso.pitchAngle = CharacterInfo->playerAngles.v[0];
    CharacterInfo->stanceTransitionTime = *(_DWORD *)(v9 + 19528);
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
      goto LABEL_57;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
      goto LABEL_57;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
LABEL_57:
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
    LOBYTE(v16) = 1;
    BG_PlayersASM_ResetAnimTree(Animset, CG_MainSP_AllocXAnimClient, v16, CharacterInfo);
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
  const playerState_s *nextPs; 
  const snapshot_t *v7; 
  int serverTime; 
  int v9; 
  unsigned __int16 *v10; 
  __int64 v11; 
  CgEntitySystem *EntitySystem; 
  int v13; 
  unsigned __int16 *v14; 
  __int64 v15; 
  float v16; 
  CgHandler *Handler; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v23; 

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
  nextPs = LocalClientGlobals->nextPs;
  v7 = NextSnap_Internal;
  *(_QWORD *)vec.v = nextPs;
  if ( localClientNum != nextPs->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 675, ASSERT_TYPE_ASSERT, "( static_cast<int>( localClientNum ) ) == ( ps->clientNum )", "%s == %s\n\t%i, %i", "static_cast<int>( localClientNum )", "ps->clientNum", localClientNum, nextPs->clientNum) )
    __debugbreak();
  LocalClientGlobals->clientNum = nextPs->clientNum;
  serverTime = v7->serverTime;
  LocalClientGlobals->time = serverTime;
  LocalClientGlobals->oldTime = serverTime;
  *(_DWORD *)(v4 + 19528) = serverTime;
  if ( LODWORD(v7[1].__vftable) > 0x800 )
  {
    LODWORD(v20) = 2048;
    LODWORD(v18) = v7[1].__vftable;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 683, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numEntities ) && ( snap->numEntities ) <= ( 2048 )", "snap->numEntities not in [0, CL_MAX_ENTITIES_IN_SNAPSHOT_SP]\n\t%i not in [%i, %i]", v18, 0i64, v20) )
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
        LODWORD(v19) = 2048;
        LODWORD(v18) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      ++v9;
      ++v10;
      EntitySystem->m_entities[v11].prevUseCount = CG_GetSnapshotEntityUseCount(v11);
    }
    while ( v9 < SLODWORD(v7[1].__vftable) );
    nextPs = *(const playerState_s **)vec.v;
  }
  if ( HIDWORD(v7[1].__vftable) > 0x500 )
  {
    LODWORD(v20) = 1280;
    LODWORD(v18) = HIDWORD(v7[1].__vftable);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 694, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numFxEntities ) && ( snap->numFxEntities ) <= ( 1280 )", "snap->numFxEntities not in [0, FX_ENTITY_MAX]\n\t%i not in [%i, %i]", v18, 0i64, v20) )
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
        LODWORD(v19) = 1280;
        LODWORD(v18) = *v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v18, v19) )
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
    LODWORD(v20) = 1024;
    LODWORD(v18) = v7[1].serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 707, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numSounds ) && ( snap->numSounds ) <= ( 1024 )", "snap->numSounds not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", v18, 0i64, v20) )
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
    LODWORD(v20) = BgWeaponMap::ms_runtimeSize;
    LODWORD(v18) = v7[2].__vftable;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 708, ASSERT_TYPE_ASSERT, "( 0 ) <= ( snap->numWeapons ) && ( snap->numWeapons ) <= ( BgWeaponMap::GetRuntimeSize() )", "snap->numWeapons not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v18, 0i64, v20) )
      __debugbreak();
  }
  R_InitSceneData(localClientNum);
  *(_QWORD *)s_centInPrevSnapshot = 0i64;
  LocalClientGlobals->loaded = 1;
  v16 = nextPs->origin.v[1];
  vec.v[0] = nextPs->origin.v[0];
  vec.v[2] = nextPs->origin.v[2];
  vec.v[1] = v16;
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, nextPs, Handler);
  WorldUpReferenceFrame::AddUpContribution(&v23, nextPs->viewHeightCurrent, &vec);
  AnglesToAxis(&nextPs->viewangles, &axis);
  SND_SetListener(localClientNum, nextPs->clientNum, &vec, &axis, &nextPs->velocity);
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
  CgEntitySystem *v51; 
  __int64 v52; 
  __m256i v53; 
  __int16 eType; 
  __m256i v55; 
  LerpEntityStateInfoVolumeGrapple v56; 
  int flags; 
  clientLinkInfo_t clientLinkInfo; 
  int v59; 
  int v60; 
  int v61; 
  unsigned int v62; 
  int v63; 
  _WORD *v64; 
  unsigned int v65; 
  unsigned __int64 v66; 
  unsigned __int64 v67; 
  const snapshot_t *nextSnap; 
  CgStatic *LocalClientStatics; 
  __int64 v70; 
  int v71; 
  unsigned __int16 *v72; 
  const WeaponMapEntry *SnapshotWeaponEntry; 
  unsigned __int16 *v74; 
  unsigned __int64 v75; 
  CgEntitySystem *v76; 
  __int64 v77; 
  unsigned int v78; 
  int v79; 
  int HasEntityTypeEvolved; 
  __int16 v81; 
  bool v82; 
  bool v83; 
  bool v84; 
  bool v85; 
  const dvar_t *v86; 
  __int64 entCount; 
  __int64 v88; 
  int v89; 
  unsigned __int16 *v90; 
  unsigned __int64 v91; 
  ClientFxEntity *v92; 
  unsigned int v93; 
  int v94; 
  int v95; 
  unsigned __int16 *v96; 
  int v97; 
  serverSoundInfo_s *SnapshotSoundInfo; 
  clientSoundInfo_s *ClientSoundInfo; 
  int v100; 
  __int64 v101; 
  __int64 v102; 
  CgEntitySystem *v103; 
  centity_t *v104; 
  unsigned int v105; 
  const DObj *v106; 
  XAnimTree *v107; 
  ClientFxEntity *v108; 
  int v109; 
  __int64 v110; 
  CgGlobalsSP *v111; 
  CgStatic *v112; 
  characterInfo_t *v113; 
  unsigned int v114; 
  cg_t *v115; 
  playerState_s *ps; 
  bool v117; 
  bool v118; 
  bool v119; 
  int ControllerFromClient; 
  OmnvarData *v121; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  unsigned __int8 v124; 
  __int64 brushIndex; 
  __int64 forceTransferMarks; 
  __int64 v127; 
  __int64 v128; 
  CgGlobalsSP *cgameGlob; 
  unsigned int v131; 
  ClientFxEntity *fxEnt; 
  int v133; 
  unsigned int v134; 
  int v135; 
  unsigned int v136; 
  __int64 v137; 
  CgWeaponMap *v138; 
  CgPredictedEntitySystem *System; 
  CgEntitySystem *v140; 
  FxMarkDObjUpdateContext context; 
  XAnimBonePhysicsStateBuffer outStateBuffer; 
  __int64 v143[254]; 

  v1 = (DObj *)(int)localClientNum;
  cgameGlob = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[(_QWORD)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v138 = CgWeaponMap::ms_instance[(_QWORD)v1];
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
  v136 = s_clientDirty[(__int64)cgameGlob->clientNum >> 5] & (0x80000000 >> (cgameGlob->clientNum & 0x1F));
  v131 = 0;
  do
  {
    v9 = s_clientDirty[(_QWORD)v7];
    v10 = __lzcnt(v9);
    if ( v10 >= 0x20 )
      goto LABEL_167;
    v11 = 32 * v8;
    v135 = 32 * v8;
    v133 = 2533 * (_DWORD)v1;
    do
    {
      v12 = v11 + v10;
      if ( ((0x80000000 >> v10) & v9) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1386, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v134 = ~(0x80000000 >> v10) & v9;
      s_clientDirty[(_QWORD)v7] = 0;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( v12 >= 0x800 )
      {
        LODWORD(forceTransferMarks) = 2048;
        LODWORD(brushIndex) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      v137 = (int)v12;
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
      v14 = v12 + v133;
      if ( v12 + v133 >= 0x13CA )
      {
        LODWORD(forceTransferMarks) = v12 + v133;
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
      if ( (EntitySystem->m_entities[v137].flags & 1) != 0 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntitySystem->m_entities[v137].nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        brushModel = EntitySystem->m_entities[v137].nextState.index.brushModel;
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
      v140 = CgEntitySystem::GetEntitySystem(localClientNum);
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
          v20 = (char *)v16->models - (char *)v143;
          v21 = v143;
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
          if ( v140->m_entities[v137].nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1423, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
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
        LODWORD(forceTransferMarks) = v12 + v133;
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
            v39 = v143;
            do
            {
              v40 = *(_QWORD **)((char *)v39 + (char *)v1->models - (char *)v143);
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
          v35 = **(_QWORD **)v1->models != v143[0];
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
      v42 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v140->m_entities[v137].nextState.lerp.eFlags, ACTIVE, 1u);
      if ( v42 )
      {
        v43 = v140->m_entities[v137].nextState.index.brushModel;
        if ( (v43 < 0 || (unsigned int)v43 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v43, "signed", v43) )
          __debugbreak();
      }
      else
      {
        LOWORD(v43) = 0;
      }
      v44 = v1;
      LODWORD(v1) = localClientNum;
      FX_MarkEntUpdateEnd(&context, localClientNum, v12, v44, v42, v43, v140->m_entities[v137].nextState.eType == ET_COVERWALL);
      v140->m_entities[v137].flags &= ~0x2000u;
      v9 = v134;
      v11 = v135;
      v7 = fxEnt;
      v10 = __lzcnt(v134);
    }
    while ( v10 < 0x20 );
    v8 = v131;
LABEL_167:
    ++v8;
    v7 = (ClientFxEntity *)((char *)v7 + 1);
    v131 = v8;
    fxEnt = v7;
  }
  while ( v8 < 0x40 );
  memset_0(v143, 0, 0x100ui64);
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
        *((_DWORD *)v143 + (v49 >> 5)) |= v50;
        if ( (v50 & v48[v49 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1547, ASSERT_TYPE_ASSERT, "(!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum )))", (const char *)&queryFormat, "!(s_clientDirty[entnum >> 5] & BitShiftMasked( entnum ))") )
          __debugbreak();
        v51 = CgEntitySystem::GetEntitySystem(localClientNum);
        if ( v47 >= 0x800 )
        {
          LODWORD(forceTransferMarks) = 2048;
          LODWORD(brushIndex) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        v52 = v49;
        if ( v51->m_entities[v52].prevUseCount != v51->m_entities[v52].nextUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1550, ASSERT_TYPE_ASSERT, "(cent->prevUseCount == cent->nextUseCount)", "%s\n\tShould match since CG_ResetEntity was called previously", "cent->prevUseCount == cent->nextUseCount") )
          __debugbreak();
        if ( (v51->m_entities[v52].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1551, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( v51->m_entities[v52].nextState.number != v47 )
        {
          LODWORD(v128) = v47;
          LODWORD(v127) = v51->m_entities[v52].nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1552, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( entnum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "entnum", v127, v128) )
            __debugbreak();
        }
        v53 = *(__m256i *)&v51->m_entities[v52].nextState.lerp.pos.trDelta.y;
        eType = v51->m_entities[v52].nextState.eType;
        *(__m256i *)v51->m_entities[v52].prevState.eFlags.m_flags = *(__m256i *)v51->m_entities[v52].nextState.lerp.eFlags.m_flags;
        v55 = *(__m256i *)v51->m_entities[v52].nextState.lerp.apos.trDelta.v;
        *(__m256i *)&v51->m_entities[v52].prevState.pos.trDelta.y = v53;
        v56 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&v51->m_entities[v52].nextState.lerp.u.infoVolumeGrapple + 20);
        *(__m256i *)v51->m_entities[v52].prevState.apos.trDelta.v = v55;
        *(LerpEntityStateInfoVolumeGrapple *)((char *)&v51->m_entities[v52].prevState.u.infoVolumeGrapple + 20) = v56;
        if ( (eType < 0 || (unsigned __int16)eType > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)eType, "signed", eType) )
          __debugbreak();
        flags = v51->m_entities[v52].flags;
        clientLinkInfo = v51->m_entities[v52].nextState.clientLinkInfo;
        v51->m_entities[v52].prevOtherEntityNum = v51->m_entities[v52].nextState.otherEntityNum;
        v59 = *(_WORD *)&clientLinkInfo & 0x7FF;
        v51->m_entities[v52].prevPhysicsChildBodyIdx = v51->m_entities[v52].nextState.un.vehicleXModel;
        v60 = flags;
        v61 = flags | 0x10000;
        v51->m_entities[v52].prevLinkParent = v59;
        v62 = v60 & 0xFFFEFFFF;
        v51->m_entities[v52].prevEType = eType;
        if ( !v59 )
          v61 = v62;
        v51->m_entities[v52].flags = v61 & 0xFFFFFFFE;
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 680, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
          __debugbreak();
        v51->m_entities[v52].flags &= 0xFFFF3FFF;
        ++v2;
        ++v46;
      }
      while ( v2 < SLODWORD(snap[1].__vftable) );
    }
    v2 = 0;
    v63 = 0;
    if ( SHIDWORD(snap[1].__vftable) > 0 )
    {
      v64 = (_WORD *)&snap[258].__vftable + 2;
      do
      {
        v65 = (unsigned __int16)*v64;
        v66 = (unsigned __int16)*v64;
        *(&outStateBuffer.numModels + (v66 >> 5)) |= 0x80000000 >> (*v64 & 0x1F);
        if ( v65 >= 0x500 )
        {
          LODWORD(forceTransferMarks) = 1280;
          LODWORD(brushIndex) = v65;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        v67 = v66;
        if ( cg_fxEntitiesArray[v67].prevUsageCount != (cg_fxEntitiesArray[v67].info.flags & 0xF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1582, ASSERT_TYPE_ASSERT, "(fxEnt->prevUsageCount == FXEntity_GetUsageCounter( &fxEnt->info ))", (const char *)&queryFormat, "fxEnt->prevUsageCount == FXEntity_GetUsageCounter( &fxEnt->info )") )
          __debugbreak();
        cg_fxEntitiesArray[v67].info.flags &= ~0x10u;
        ++v63;
        ++v64;
      }
      while ( v63 < SHIDWORD(snap[1].__vftable) );
    }
    LODWORD(v1) = localClientNum;
  }
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    LODWORD(forceTransferMarks) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 118, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotSP_GetNextSnap_Internal: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", forceTransferMarks) )
      __debugbreak();
  }
  nextSnap = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->nextSnap;
  if ( nextSnap )
  {
    if ( !snap )
    {
      snap = nextSnap;
      cgameGlob->snap = nextSnap;
    }
    CG_Entity_SetFrameInterpolation((LocalClientNum_t)v1);
    G_MainSP_ReadClientMessages();
    if ( nextSnap->serverTime != G_MainSP_GetServerSnapTime() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1603, ASSERT_TYPE_ASSERT, "(nextSnap->serverTime == G_MainSP_GetServerSnapTime())", (const char *)&queryFormat, "nextSnap->serverTime == G_MainSP_GetServerSnapTime()") )
      __debugbreak();
    if ( cgameGlob->ps && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
      v70 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
      if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1609, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      *(_DWORD *)(v70 + 19536) = snap->serverTime;
      *(_DWORD *)(v70 + 19532) = snap->GetPlayerState(snap, (const LocalClientNum_t)v1)->deltaTime;
    }
    if ( !v138->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 220, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    memset_0(v138->m_entries, 0, 62i64 * BgWeaponMap::ms_runtimeSize);
    v71 = 0;
    if ( SLODWORD(nextSnap[2].__vftable) > 0 )
    {
      v72 = (unsigned __int16 *)&nextSnap[562].__vftable + 2;
      do
      {
        SnapshotWeaponEntry = CG_GetSnapshotWeaponEntry(*v72);
        CgWeaponMap::SetWeaponEntry(v138, SnapshotWeaponEntry);
        ++v71;
        ++v72;
      }
      while ( v71 < SLODWORD(nextSnap[2].__vftable) );
    }
    System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v1);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1625, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
      __debugbreak();
    CgPredictedEntitySystem::PostSnapshotInit(System);
    cgameGlob->scriptedAnimDebug.entCount = 0;
    if ( SLODWORD(nextSnap[1].__vftable) > 0 )
    {
      v74 = (unsigned __int16 *)&nextSnap[2].__vftable + 2;
      do
      {
        v75 = *v74;
        v76 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
        if ( (unsigned int)v75 >= 0x800 )
        {
          LODWORD(forceTransferMarks) = 2048;
          LODWORD(brushIndex) = v75;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        v77 = (__int64)&v76->m_entities[(int)v75];
        if ( (*(_BYTE *)(v77 + 648) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1637, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", (const char *)&queryFormat, "!CENextValid( cent )") )
          __debugbreak();
        *(_DWORD *)(v77 + 648) |= 1u;
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 680, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
          __debugbreak();
        *(_DWORD *)(v77 + 648) &= 0xFFFF3FFF;
        *(entityState_t *)(v77 + 400) = *CG_GetSnapshotEntityState(v75);
        *(_DWORD *)(v77 + 736) = CG_GetSnapshotEntityUseCount(v75);
        v78 = 0x80000000 >> (v75 & 0x1F);
        v79 = v78 & *((_DWORD *)v143 + (v75 >> 5));
        if ( v79 )
        {
          *((_DWORD *)v143 + (v75 >> 5)) &= ~v78;
          HasEntityTypeEvolved = CG_GameInterface_HasEntityTypeEvolved((const centity_t *)v77);
          v81 = *(_WORD *)(v77 + 408);
          if ( HasEntityTypeEvolved )
            goto LABEL_382;
          if ( v81 == 15 )
          {
            HasEntityTypeEvolved = 0;
            v82 = *(_BYTE *)v77 == 14;
          }
          else
          {
            if ( v81 != 21 )
              goto LABEL_259;
            v82 = *(_BYTE *)v77 == 19;
          }
          LOBYTE(HasEntityTypeEvolved) = v82;
          if ( HasEntityTypeEvolved )
          {
LABEL_382:
            if ( (v81 < 0 || (unsigned __int16)v81 > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v81, "signed", v81) )
              __debugbreak();
            *(_BYTE *)v77 = v81;
          }
        }
LABEL_259:
        v83 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v77 + 288), ACTIVE, 2u);
        v84 = v83 != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v77 + 412), ACTIVE, 2u);
        v85 = v79 == 0;
        if ( !v79 )
          goto LABEL_263;
        if ( v84 || *(_DWORD *)(v77 + 740) != *(_DWORD *)(v77 + 736) )
        {
          v85 = v79 == 0;
LABEL_263:
          LODWORD(v1) = localClientNum;
          CG_SnapshotSP_ResetEntity(localClientNum, (centity_t *)v77, !v85);
          goto LABEL_265;
        }
        LODWORD(v1) = localClientNum;
LABEL_265:
        if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
        {
          LODWORD(v128) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
          LODWORD(v127) = 1;
          LODWORD(forceTransferMarks) = (_DWORD)v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", forceTransferMarks, v127, v128) )
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
        CgVehicleSystemSP::UpdateVehicleDef((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[(int)v1], (centity_t *)v77);
        CgPredictedEntitySystem::EvalSnapshotEnt(System, (centity_t *)v77);
        v86 = DVARBOOL_cg_dumpScriptedAnims;
        if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v86);
        if ( v86->current.enabled )
        {
          entCount = cgameGlob->scriptedAnimDebug.entCount;
          if ( (int)entCount < 10 && *(_WORD *)(v77 + 408) == 6 && (*(_DWORD *)(v77 + 496) & 0x40) != 0 )
          {
            cgameGlob->scriptedAnimDebug.entityNums[entCount] = *(__int16 *)(v77 + 400);
            ++cgameGlob->scriptedAnimDebug.entCount;
          }
        }
        ++v2;
        ++v74;
      }
      while ( v2 < SLODWORD(nextSnap[1].__vftable) );
    }
    v88 = 0i64;
    v89 = 0;
    if ( SHIDWORD(nextSnap[1].__vftable) > 0 )
    {
      v90 = (unsigned __int16 *)&nextSnap[258].__vftable + 2;
      do
      {
        v91 = *v90;
        if ( (unsigned int)v91 >= 0x500 )
        {
          LODWORD(forceTransferMarks) = 1280;
          LODWORD(brushIndex) = *v90;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
            __debugbreak();
        }
        v92 = &cg_fxEntitiesArray[(int)v91];
        if ( (v92->info.flags & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1688, ASSERT_TYPE_ASSERT, "(!FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "!FXEntity_IsValid( &fxEnt->info )") )
          __debugbreak();
        v92->info = *CG_FXEntitiesGetSnapshotFXEnt(v91);
        if ( (v92->info.flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1691, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "FXEntity_IsValid( &fxEnt->info )") )
          __debugbreak();
        v93 = 0x80000000 >> (v91 & 0x1F);
        v94 = *(&outStateBuffer.numModels + (v91 >> 5));
        if ( (v94 & v93) == 0 || (*(&outStateBuffer.numModels + (v91 >> 5)) = v94 & ~v93, v92->prevUsageCount != (v92->info.flags & 0xF)) )
          CG_FXEntitiesResetEnt(v92);
        ++v89;
        ++v90;
      }
      while ( v89 < SHIDWORD(nextSnap[1].__vftable) );
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1703, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
      __debugbreak();
    if ( nextSnap[1].serverTime > 0x400u )
    {
      LODWORD(v127) = 1024;
      LODWORD(brushIndex) = nextSnap[1].serverTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1706, ASSERT_TYPE_ASSERT, "( 0 ) <= ( nextSnap->numSounds ) && ( nextSnap->numSounds ) <= ( 1024 )", "nextSnap->numSounds not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", brushIndex, 0i64, v127) )
        __debugbreak();
    }
    v95 = 0;
    if ( nextSnap[1].serverTime > 0 )
    {
      v96 = (unsigned __int16 *)&nextSnap[434].__vftable + 2;
      do
      {
        v97 = *v96;
        SnapshotSoundInfo = CG_GetSnapshotSoundInfo(v97);
        ClientSoundInfo = CL_GetClientSoundInfo(v97);
        ++v96;
        ++v95;
        ClientSoundInfo->soundOrigin.v[0] = SnapshotSoundInfo->soundOrigin.v[0];
        ClientSoundInfo->soundOrigin.v[1] = SnapshotSoundInfo->soundOrigin.v[1];
        ClientSoundInfo->soundOrigin.v[2] = SnapshotSoundInfo->soundOrigin.v[2];
        ClientSoundInfo->soundAngles = SnapshotSoundInfo->soundAngles;
        ClientSoundInfo->loopSound = SnapshotSoundInfo->loopSound;
        ClientSoundInfo->soundNum = v97;
      }
      while ( v95 < nextSnap[1].serverTime );
    }
    *(__m256i *)cgameGlob->umbraGateStates.array = *(__m256i *)((char *)&nextSnap[4658].__vftable + 4);
    *(snapshot_t *)&cgameGlob->umbraGateStates.array[8] = *(const snapshot_t *)((char *)nextSnap + 74564);
  }
  else
  {
    v88 = 0i64;
  }
  v100 = 0;
  v101 = 0i64;
  v102 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v100 & 0x1F)) & *((_DWORD *)v143 + (v88 >> 5))) != 0 )
    {
      v103 = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)v100 >= 0x800 )
      {
        LODWORD(forceTransferMarks) = 2048;
        LODWORD(brushIndex) = v100;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      v104 = &v103->m_entities[v102];
      if ( v104->nextState.number != v100 )
      {
        LODWORD(v128) = v100;
        LODWORD(v127) = v104->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1737, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( entnum )", "%s == %s\n\t%i, %i", "cent->nextState.number", "entnum", v127, v128) )
          __debugbreak();
      }
      FX_Dismemberment_Clear(localClientNum, v100);
      CG_SnapshotSP_ShutdownEntity(localClientNum, v104);
      R_EntityMoved(localClientNum, v100);
      FX_MarkEntDetachAll(localClientNum, v100);
      CG_Entity_DestroyPhysics(localClientNum, v100);
      CG_Entity_DestroyCloth(localClientNum, v100);
      if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, v104->nextState.number) )
        ScriptableCl_UnbindEntityReservedDef(localClientNum, v104->nextState.number);
      if ( (unsigned int)v100 > 0x9E4 )
      {
        LODWORD(forceTransferMarks) = v100;
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
      if ( (unsigned int)(v100 + 2533 * localClientNum) >= 0x13CA )
      {
        LODWORD(forceTransferMarks) = v100 + 2533 * localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", forceTransferMarks) )
          __debugbreak();
      }
      v105 = clientObjMap[2533 * localClientNum + v101];
      if ( clientObjMap[2533 * localClientNum + v101] )
      {
        if ( v105 >= (unsigned int)s_objCount )
        {
          LODWORD(forceTransferMarks) = clientObjMap[2533 * localClientNum + v101];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", forceTransferMarks) )
            __debugbreak();
        }
        v106 = (const DObj *)s_objBuf[v105];
        if ( v106 )
        {
          v107 = DObjGetTree(v106);
          Com_SafeClientDObjFree(v100, localClientNum);
          if ( v107 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && v100 == cgameGlob->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1772, ASSERT_TYPE_ASSERT, "(entnum != cgameGlob->clientNum)", (const char *)&queryFormat, "entnum != cgameGlob->clientNum") )
              __debugbreak();
            Com_XAnimFreeSmallTree(v107);
          }
        }
      }
    }
    ++v100;
    ++v88;
    ++v101;
    ++v102;
  }
  while ( v100 < 2048 );
  v108 = cg_fxEntitiesArray;
  v109 = 0;
  v110 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v109 & 0x1F)) & *(&outStateBuffer.numModels + (v110 >> 5))) != 0 )
    {
      if ( (unsigned int)v109 >= 0x500 )
      {
        LODWORD(forceTransferMarks) = 1280;
        LODWORD(brushIndex) = v109;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", brushIndex, forceTransferMarks) )
          __debugbreak();
      }
      CG_FXEntitiesShutdownEnt(v108);
    }
    ++v109;
    ++v110;
    ++v108;
  }
  while ( v109 < 1280 );
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_snapshot_sp.cpp", 1191, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v111 = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v112 = CgStatic::GetLocalClientStatics(localClientNum);
  v113 = CgStatic::GetCharacterInfo(v112, v111->clientNum);
  v114 = 0;
  v115 = cgameGlob;
  v113->entityNum = v111->clientNum;
  v113->infoValid = 1;
  v113->nextValid = 1;
  v113->dobjDirty = v136 != 0;
  v113->perks = v111->predictedPlayerState.perks;
  ps = cgameGlob->ps;
  v117 = ps && cgameGlob->nextPs;
  v118 = !ps && cgameGlob->nextPs;
  v119 = ScriptableCl_ObjectiveChanged(localClientNum);
  if ( (v117 && memcmp_0(cgameGlob->ps->objectives, cgameGlob->nextPs->objectives, 0x1580ui64) || v118 || v119) && LUI_BeginEvent(localClientNum, "objectives_update", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  ScriptableCl_ObjectiveChangedClear(localClientNum);
  if ( (v117 && memcmp_0(cgameGlob->ps->targetMarkerGroups, cgameGlob->nextPs->targetMarkerGroups, 0xB0ui64) || v118) && LUI_BeginEvent(localClientNum, "target_markers_update", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  if ( nextSnap )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( BG_Omnvar_PerGameCount() )
    {
      do
      {
        v121 = (OmnvarData *)((char *)&nextSnap[690].__vftable + 8 * v114 + 4);
        Data = CG_Omnvar_GetData(localClientNum, v114);
        Def = BG_Omnvar_GetDef(v114);
        v124 = Def->flags;
        if ( (v124 & 8) == 0 )
        {
          if ( (v124 & 1) != 0 && v121->timeModified != Data->timeModified && !CG_Omnvar_AreValuesEqual(Def, (const OmnvarData *const)((char *)&nextSnap[690].__vftable + 8 * v114 + 4), Data) )
            LUI_NotifyOmnvarChanged(ControllerFromClient, Def, (const OmnvarData *)((char *)&nextSnap[690].__vftable + 8 * v114 + 4), LUI_luaVM);
          *Data = *v121;
        }
        ++v114;
      }
      while ( v114 < BG_Omnvar_PerGameCount() );
    }
    v115 = cgameGlob;
  }
  CG_Omnvar_UpdatePmoveValues(localClientNum);
  CG_SnapshotSP_ProcessPlayerState(localClientNum, v115);
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

