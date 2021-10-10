/*
==============
AimTargetMP_ProcessEntity
==============
*/

void __fastcall AimTargetMP_ProcessEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  ?AimTargetMP_ProcessEntity@@YAXW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
AimTargetMP_StartTargetVisibilityWorkers
==============
*/

void __fastcall AimTargetMP_StartTargetVisibilityWorkers(const LocalClientNum_t localClientNum)
{
  ?AimTargetMP_StartTargetVisibilityWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimTargetMP_FinishProcessingEntities
==============
*/

void __fastcall AimTargetMP_FinishProcessingEntities(const LocalClientNum_t localClientNum)
{
  ?AimTargetMP_FinishProcessingEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimTargetMP_ClearTargetList
==============
*/

void __fastcall AimTargetMP_ClearTargetList(const LocalClientNum_t localClientNum)
{
  ?AimTargetMP_ClearTargetList@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimTargetMP_TraceToEntityCmd
==============
*/

void __fastcall AimTargetMP_TraceToEntityCmd(const void *const cmdData)
{
  ?AimTargetMP_TraceToEntityCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
AimTargetMP_CalcTargetFlags
==============
*/
char AimTargetMP_CalcTargetFlags(const cg_t *const cgameGlob, const centity_t *targetEnt)
{
  __int64 localClientNum; 
  CgStatic *v5; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v7; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v9; 
  unsigned int PlayerIndex; 
  const characterInfo_t *v12; 
  const characterInfo_t *v13; 
  bool v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  LocalClientNum_t v21; 
  float v22; 
  char v23; 
  __int64 v24; 
  __int64 v25; 
  vec3_t outOrigin; 
  __int64 v27; 
  Bounds box; 

  v27 = -2i64;
  Profile_Begin(42);
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( (targetEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(CENextValid( targetEnt ))", (const char *)&queryFormat, "CENextValid( targetEnt )") )
    __debugbreak();
  if ( targetEnt->nextState.number == cgameGlob->predictedPlayerState.clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(targetEnt->nextState.number != cgameGlob->predictedPlayerState.clientNum)", (const char *)&queryFormat, "targetEnt->nextState.number != cgameGlob->predictedPlayerState.clientNum") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", cgameGlob->localClientNum) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v25 = CgStatic::ms_allocatedCount;
    LODWORD(v24) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[localClientNum] )
  {
    LODWORD(v25) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v25) )
      __debugbreak();
  }
  v5 = CgStatic::ms_cgameStaticsArray[localClientNum];
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 267, ASSERT_TYPE_ASSERT, "(!targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD ))", (const char *)&queryFormat, "!targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD )") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(v5, targetEnt->nextState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(targetInfo)", (const char *)&queryFormat, "targetInfo") )
      __debugbreak();
    v7 = CgStatic::GetCharacterInfo(v5, cgameGlob->predictedPlayerState.clientNum);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
      __debugbreak();
    if ( CharacterInfo->infoValid && CharacterInfo->model[0] && Com_GetClientDObj(targetEnt->nextState.number, cgameGlob->localClientNum) && !Com_Teams_OnSameTeam(&cgameGlob->predictedPlayerState, (const team_t)v7->team, &targetEnt->nextState, (const team_t)CharacterInfo->team) && targetEnt->nextState.otherEntityNum != cgameGlob->predictedPlayerState.clientNum )
    {
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0xBu);
      v9 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v25) = 64;
          LODWORD(v24) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v9 & 0x1F)) & CharacterInfo->perks.array[v9 >> 5]) != 0 )
          goto LABEL_42;
      }
      goto LABEL_67;
    }
LABEL_60:
    Profile_EndInternal(NULL);
    return 0;
  }
  if ( !BG_IsVehicleEntity(&targetEnt->nextState) )
  {
    if ( targetEnt->nextState.eType != ET_SCRIPTMOVER || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
      {
        v14 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u);
        goto LABEL_59;
      }
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
    {
      v14 = Com_GetClientDObj(targetEnt->nextState.number, cgameGlob->localClientNum) == NULL;
      goto LABEL_59;
    }
LABEL_42:
    Profile_EndInternal(NULL);
    return 2;
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
    goto LABEL_60;
  PlayerIndex = BGVehicles::GetPlayerIndex(&targetEnt->nextState);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( PlayerIndex >= ComCharacterLimits::ms_gameData.m_characterCount )
    goto LABEL_60;
  v12 = CgStatic::GetCharacterInfo(v5, cgameGlob->predictedPlayerState.clientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 331, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
    __debugbreak();
  if ( !v12->infoValid )
    goto LABEL_60;
  v13 = CgStatic::GetCharacterInfo(v5, PlayerIndex);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(vehOwnerInfo)", (const char *)&queryFormat, "vehOwnerInfo") )
    __debugbreak();
  if ( !v13->infoValid || Com_Teams_OnSameTeam(&cgameGlob->predictedPlayerState, (const team_t)v12->team, &targetEnt->nextState, (const team_t)v13->team) )
    goto LABEL_60;
  v14 = v13->entityNum == v12->entityNum;
LABEL_59:
  if ( v14 )
    goto LABEL_60;
LABEL_67:
  CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
  if ( cgameGlob->predictedPlayerState.vehicleState.entity == 2047 )
  {
    v15 = outOrigin.v[0] - cgameGlob->predictedPlayerState.origin.v[0];
    v16 = outOrigin.v[1] - cgameGlob->predictedPlayerState.origin.v[1];
    v17 = outOrigin.v[2] - cgameGlob->predictedPlayerState.origin.v[2];
  }
  else
  {
    v15 = outOrigin.v[0] - cgameGlob->predictedPlayerState.vehicleState.origin.v[0];
    v16 = outOrigin.v[1] - cgameGlob->predictedPlayerState.vehicleState.origin.v[1];
    v17 = outOrigin.v[2] - cgameGlob->predictedPlayerState.vehicleState.origin.v[2];
  }
  v18 = cgameGlob->refdef.view.axis.m[0].v[0];
  v19 = cgameGlob->refdef.view.axis.m[0].v[1];
  v20 = cgameGlob->refdef.view.axis.m[0].v[2];
  v21 = cgameGlob->localClientNum;
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    v22 = FLOAT_10_0;
  }
  else
  {
    AimTargetMP_GetTargetBounds(v21, targetEnt, &box);
    v22 = fsqrt((float)((float)((float)(COERCE_FLOAT(LODWORD(box.midPoint.v[1]) & _xmm) + box.halfSize.v[1]) * (float)(COERCE_FLOAT(LODWORD(box.midPoint.v[1]) & _xmm) + box.halfSize.v[1])) + (float)((float)(COERCE_FLOAT(LODWORD(box.midPoint.v[0]) & _xmm) + box.halfSize.v[0]) * (float)(COERCE_FLOAT(LODWORD(box.midPoint.v[0]) & _xmm) + box.halfSize.v[0]))) + (float)((float)(COERCE_FLOAT(LODWORD(box.midPoint.v[2]) & _xmm) + box.halfSize.v[2]) * (float)(COERCE_FLOAT(LODWORD(box.midPoint.v[2]) & _xmm) + box.halfSize.v[2])));
  }
  Profile_EndInternal(NULL);
  if ( (float)((float)((float)((float)(v15 * v18) + (float)(v16 * v19)) + (float)(v20 * v17)) + v22) >= 0.0 )
    v23 = 3;
  else
    v23 = 0;
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v23;
}

/*
==============
AimTargetMP_ClearTargetList
==============
*/
void AimTargetMP_ClearTargetList(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  AimTargetGlob *Glob; 
  __int64 v3; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 75, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  Glob = AimTarget_GetGlob(v1);
  v3 = v1;
  Glob->targetCount = 0;
  DebugWipe(&s_aimVisMPGlob[v3], 0x80ui64);
  DebugWipe(s_aimVisMPGlob[v3].visibilityTestBones, 0x100ui64);
  DebugWipe(s_aimVisMPGlob[v3].visibleTargets, 0xC00ui64);
  s_aimVisMPGlob[v3].potentiallyVisibleCount = 0;
  s_aimVisMPGlob[v3].visibleTargetCount = 0;
}

/*
==============
AimTargetMP_CompareTargets
==============
*/
bool AimTargetMP_CompareTargets(const AimTarget *targetA, const AimTarget *targetB)
{
  return targetA->worldDistSqr < targetB->worldDistSqr;
}

/*
==============
AimTargetMP_CreateTarget
==============
*/
void AimTargetMP_CreateTarget(LocalClientNum_t localClientNum, const centity_t *targetEnt, const AimTargetFlags flags)
{
  char v3; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  float v7; 
  float v8; 
  float v9; 
  cg_t *v10; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  float v13; 
  AimVisGlob *v14; 
  volatile signed __int32 *p_visibleTargetCount; 
  signed __int32 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  vec3_t outOrigin; 
  __int64 v21; 
  CgTrajectory v22; 
  vec3_t v23; 
  vec3_t outPos; 
  __m256i v25; 
  __int128 v26; 

  v21 = -2i64;
  v3 = flags;
  v5 = localClientNum;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 444, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 )
  {
    v7 = LocalClientGlobals->predictedPlayerState.origin.v[0];
    v8 = LocalClientGlobals->predictedPlayerState.origin.v[1];
    v9 = LocalClientGlobals->predictedPlayerState.origin.v[2];
  }
  else
  {
    v7 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[0];
    v8 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[1];
    v9 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[2];
  }
  AimTargetMP_GetTargetBounds((LocalClientNum_t)v5, targetEnt, (Bounds *)&v25.m256i_u64[1]);
  v25.m256i_i32[0] = targetEnt->nextState.number;
  CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
  *(float *)&v25.m256i_i32[1] = (float)((float)((float)(outOrigin.v[1] - v8) * (float)(outOrigin.v[1] - v8)) + (float)((float)(outOrigin.v[0] - v7) * (float)(outOrigin.v[0] - v7))) + (float)((float)(outOrigin.v[2] - v9) * (float)(outOrigin.v[2] - v9));
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  snap = v10->snap;
  nextSnap = v10->nextSnap;
  v13 = (float)(nextSnap->serverTime - snap->serverTime) * 0.001;
  if ( v13 <= 0.0 )
  {
    *(float *)&v26 = 0.0;
    *((float *)&v26 + 1) = 0.0;
    *((float *)&v26 + 2) = 0.0;
  }
  else
  {
    CgTrajectory::CgTrajectory(&v22, (const LocalClientNum_t)v5, targetEnt, &targetEnt->prevState);
    BgTrajectory::EvaluatePosTrajectory(&v22, snap->serverTime, &outPos);
    v22.m_es = &targetEnt->nextState.lerp;
    BgTrajectory::EvaluatePosTrajectory(&v22, nextSnap->serverTime, &v23);
    *(float *)&v26 = (float)(v23.v[0] - outPos.v[0]) / v13;
    *((float *)&v26 + 1) = (float)(v23.v[1] - outPos.v[1]) / v13;
    *((float *)&v26 + 2) = (float)(v23.v[2] - outPos.v[2]) / v13;
  }
  BYTE12(v26) = v3;
  v14 = &s_aimVisMPGlob[v5];
  p_visibleTargetCount = &v14->visibleTargetCount;
  if ( v14->visibleTargetCount > 64 )
  {
    LODWORD(v18) = *p_visibleTargetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 116, ASSERT_TYPE_ASSERT, "( aimVisGlob->visibleTargetCount ) <= ( 64 )", "aimVisGlob->visibleTargetCount not in [0, AIM_MAX_VISIBILITY_TESTS]\n\t%u not in [0, %u]", v18, 64) )
      __debugbreak();
  }
  if ( (((_BYTE)v14 - 124) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v14->visibleTargetCount) )
    __debugbreak();
  v16 = _InterlockedExchangeAdd(p_visibleTargetCount, 1u);
  if ( (unsigned int)v16 >= 0x40 )
  {
    LODWORD(v19) = 64;
    LODWORD(v18) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( visIndex ) < (unsigned)( 64 )", "visIndex doesn't index AIM_MAX_VISIBILITY_TESTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v17 = v16;
  *(__m256i *)&v14->visibleTargets[v17].entIndex = v25;
  *(_OWORD *)v14->visibleTargets[v17].velocity.v = v26;
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
AimTargetMP_FinishProcessingEntities
==============
*/
void AimTargetMP_FinishProcessingEntities(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  AimVisGlob *v2; 
  AimTarget *v3; 
  AimTarget *visibleTargets; 
  unsigned __int64 v5; 
  AimTargetGlob *Glob; 
  volatile int visibleTargetCount; 

  v1 = localClientNum;
  Profile_Begin(41);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 683, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )", -2i64) )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_TRACE_AIM_TARGET);
  v2 = &s_aimVisMPGlob[v1];
  v3 = &v2->visibleTargets[v2->visibleTargetCount];
  visibleTargets = v2->visibleTargets;
  v5 = (__int64)((unsigned __int128)(48i64 * (int)v2->visibleTargetCount * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
  std::_Sort_unchecked<AimTarget *,bool (*)(AimTarget const &,AimTarget const &)>(visibleTargets, v3, v5 + (v5 >> 63), AimTargetMP_CompareTargets);
  Glob = AimTarget_GetGlob(v1);
  visibleTargetCount = 32;
  if ( s_aimVisMPGlob[v1].visibleTargetCount < 32 )
    visibleTargetCount = s_aimVisMPGlob[v1].visibleTargetCount;
  Glob->clientTargetCount = visibleTargetCount;
  memcpy_0(Glob->clientTargets, visibleTargets, 48i64 * visibleTargetCount);
  s_aimVisMPGlob[v1].visibleTargetCount = 0;
  memset(visibleTargets, 0, 0xC00ui64);
  Profile_EndInternal(NULL);
}

/*
==============
AimTargetMP_GetTargetBounds
==============
*/
void AimTargetMP_GetTargetBounds(LocalClientNum_t localClientNum, const centity_t *targetEnt, Bounds *box)
{
  __int64 v5; 
  scr_string_t aim_highest_bone; 
  const DObj *ClientDObj; 
  int NumModels; 
  int i; 
  const XModel *Model; 
  const char *v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  const DObj *v18; 
  const XModel *FirstModel; 
  __int64 v20; 
  __int64 v21; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  __int64 v24; 
  char dest[1024]; 

  v24 = -2i64;
  v5 = localClientNum;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !box && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(box)", (const char *)&queryFormat, "box") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    aim_highest_bone = scr_const.aim_highest_bone;
    if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, (LocalClientNum_t)v5);
    if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 132, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    if ( !CG_DObjGetWorldTagPos(&targetEnt->pose, ClientDObj, aim_highest_bone, &outPos) )
    {
      dest[0] = 0;
      NumModels = DObjGetNumModels(ClientDObj);
      for ( i = 0; i < NumModels; ++i )
      {
        Model = DObjGetModel(ClientDObj, i);
        if ( i > 0 )
          I_strcat(dest, 0x400ui64, ", ");
        I_strcat(dest, 0x400ui64, Model->name);
      }
      v11 = SL_ConvertToString(aim_highest_bone);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442701A0, 883i64, v11, dest);
    }
    CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
    v12 = outPos.v[2] - outOrigin.v[2];
    *(_QWORD *)box->midPoint.v = 0i64;
    v13 = v12 * 0.5;
    box->midPoint.v[2] = v13;
    box->halfSize.v[0] = 10.0;
    box->halfSize.v[1] = 10.0;
    box->halfSize.v[2] = v13;
    v14 = DCONST_DVARFLT_aim_boundsMinBoxHeight;
    if ( !DCONST_DVARFLT_aim_boundsMinBoxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_boundsMinBoxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = 0.5 * v14->current.value;
    v16 = box->halfSize.v[2];
    if ( v16 < v15 )
    {
      if ( v16 < 0.0 )
      {
        LODWORD(v17) = LODWORD(v16) ^ _xmm;
        box->halfSize.v[2] = v17;
        if ( v17 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 200, ASSERT_TYPE_ASSERT, "(box->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "box->halfSize[2] >= 0.0f") )
          __debugbreak();
      }
      if ( v15 > box->halfSize.v[2] )
        box->halfSize.v[2] = v15;
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    memset(&outPos, 0, sizeof(outPos));
  }
  else if ( BG_IsVehicleEntity(&targetEnt->nextState) )
  {
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v5) )
      __debugbreak();
    if ( (unsigned int)v5 >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v21) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !CgVehicleSystem::ms_vehicleSystemArray[v5] )
    {
      LODWORD(v21) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v21) )
        __debugbreak();
    }
    CgVehicleSystem::GetDObjFirstModelBounds(CgVehicleSystem::ms_vehicleSystemArray[v5], targetEnt, box);
  }
  else if ( targetEnt->nextState.eType != ET_SCRIPTMOVER || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ))", (const char *)&queryFormat, "targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL )") )
      __debugbreak();
    CM_BrushModelBounds(targetEnt->nextState.index.brushModel, box);
  }
  else
  {
    v18 = Com_GetClientDObj(targetEnt->nextState.number, (LocalClientNum_t)v5);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 217, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    FirstModel = DObjGetFirstModel(v18);
    if ( !FirstModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    XModelGetBounds(FirstModel, box);
  }
}

/*
==============
AimTargetMP_IsTargetVisible
==============
*/
_BOOL8 AimTargetMP_IsTargetVisible(const LocalClientNum_t localClientNum, const centity_t *const cent, const workerTrace_t *const result)
{
  LerpEntityState *p_lerp; 
  bool v7; 
  cg_t *LocalClientGlobals; 
  float v9; 
  float v10; 
  float v11; 
  float fraction; 
  unsigned int Instance; 
  double ClientVisibility; 
  vec3_t outOrigin; 
  __int64 v17; 
  vec3_t outOrg; 
  vec3_t in; 
  vec3_t end; 
  vec3_t out; 

  v17 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 500, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 501, ASSERT_TYPE_ASSERT, "(result != nullptr)", (const char *)&queryFormat, "result != nullptr") )
    __debugbreak();
  Profile_Begin(43);
  if ( Com_GetClientDObj(cent->nextState.number, localClientNum) )
  {
    p_lerp = &cent->nextState.lerp;
  }
  else
  {
    if ( cent->nextState.eType != ET_SCRIPTMOVER )
      goto LABEL_10;
    p_lerp = &cent->nextState.lerp;
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) )
      goto LABEL_10;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v9 = result->end.v[0];
  end.v[0] = v9;
  v10 = result->end.v[1];
  end.v[1] = v10;
  v11 = result->end.v[2];
  end.v[2] = v11;
  if ( 1.0 == result->trace.fraction || Trace_GetEntityHitId(&result->trace) == cent->nextState.number )
  {
LABEL_18:
    ClientVisibility = FX_GetClientVisibility(localClientNum, &outOrg, &end);
    v7 = *(float *)&ClientVisibility >= 0.000099999997;
    goto LABEL_19;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) )
  {
    fraction = result->trace.fraction;
    in.v[0] = (float)((float)(v9 - outOrg.v[0]) * result->trace.fraction) + outOrg.v[0];
    in.v[1] = (float)((float)(v10 - outOrg.v[1]) * fraction) + outOrg.v[1];
    in.v[2] = (float)((float)(v11 - outOrg.v[2]) * fraction) + outOrg.v[2];
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    CM_TransformPoint(&in, &outOrigin, &cent->pose.angles, &out);
    Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * localClientNum + 2), cent->nextState.number, localClientNum);
    if ( !PhysicsQuery_LegacyGetEntityPointContents((Physics_WorldId)(3 * localClientNum + 2), &out, Instance, -1, cent->nextState.index.brushModel) )
    {
      memset(&outOrigin, 0, sizeof(outOrigin));
      v7 = 0;
      goto LABEL_19;
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    goto LABEL_18;
  }
LABEL_10:
  v7 = 0;
LABEL_19:
  Profile_EndInternal(NULL);
  return v7;
}

/*
==============
AimTargetMP_ProcessEntity
==============
*/
void AimTargetMP_ProcessEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  AimVisGlob *v6; 
  int v7; 
  scr_string_t aim_vis_bone; 
  LerpEntityState *p_lerp; 
  const DObj *ClientDObj; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 701, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 702, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 703, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 704, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  Profile_Begin(41);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  p_nextState = &cent->nextState;
  if ( cent->nextState.number == LocalClientGlobals->predictedPlayerState.clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 709, ASSERT_TYPE_ASSERT, "(cent->nextState.number != cgameGlob->predictedPlayerState.clientNum)", (const char *)&queryFormat, "cent->nextState.number != cgameGlob->predictedPlayerState.clientNum") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x21u) && (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) > 6 )
  {
    if ( AimTargetMP_CalcTargetFlags(LocalClientGlobals, cent) )
    {
      v6 = &s_aimVisMPGlob[v3];
      if ( v6->potentiallyVisibleCount < 63 )
      {
        v7 = Sys_InterlockedIncrement(&v6->potentiallyVisibleCount) - 1;
        if ( v7 >= 64 )
        {
          Sys_InterlockedDecrement(&v6->potentiallyVisibleCount);
          goto LABEL_47;
        }
        if ( BG_IsCharacterEntity(&cent->nextState) )
        {
          aim_vis_bone = scr_const.aim_vis_bone;
LABEL_46:
          v6->visibilityTestEntities[v7] = p_nextState->number;
          v6->visibilityTestBones[v7] = aim_vis_bone;
          goto LABEL_47;
        }
        if ( cent->nextState.eType == ET_SCRIPTMOVER )
        {
          p_lerp = &cent->nextState.lerp;
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) )
          {
            aim_vis_bone = scr_const.aim_vis_bone;
            ClientDObj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v3);
            if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 749, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
              __debugbreak();
            inOutIndex = -2;
            DObjGetBoneIndexInternal_41(ClientDObj, aim_vis_bone, &inOutIndex, &modelIndex);
            if ( inOutIndex != 0xFF )
              goto LABEL_46;
            goto LABEL_45;
          }
        }
        else
        {
          p_lerp = &cent->nextState.lerp;
        }
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 8u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 760, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::AIM_ASSIST ))", (const char *)&queryFormat, "cent->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::AIM_ASSIST )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) && !BG_IsVehicleEntity(p_nextState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 761, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ) || BG_IsVehicleEntity( &cent->nextState ))", (const char *)&queryFormat, "cent->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ) || BG_IsVehicleEntity( &cent->nextState )") )
          __debugbreak();
LABEL_45:
        aim_vis_bone = 0;
        goto LABEL_46;
      }
    }
  }
LABEL_47:
  Profile_EndInternal(NULL);
}

/*
==============
AimTargetMP_StartTargetVisibilityWorkers
==============
*/
void AimTargetMP_StartTargetVisibilityWorkers(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  AimVisGlob *v3; 
  __int64 v4; 
  CgEntitySystem **v5; 
  scr_string_t *visibilityTestBones; 
  AimVis *v7; 
  __int16 v8; 
  __int64 v9; 
  CgEntitySystem *v10; 
  __int64 v11; 
  scr_string_t v12; 
  int entity; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int v17; 
  const centity_t *TurretEnt; 
  int *ignoreEnts; 
  __int64 ignoreEntCount; 
  __int64 potentiallyVisibleCount; 
  AimVisGlob *v22; 
  vec3_t start; 
  int v24; 
  int number; 
  scr_string_t *v26; 
  cg_t *v27; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v27 = LocalClientGlobals;
  v3 = &s_aimVisMPGlob[v1];
  v22 = v3;
  if ( v3->potentiallyVisibleCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 619, ASSERT_TYPE_ASSERT, "( aimVisGlob->potentiallyVisibleCount ) <= ( 64 )", "aimVisGlob->potentiallyVisibleCount not in [0, AIM_MAX_VISIBILITY_TESTS]\n\t%u not in [0, %u]", v3->potentiallyVisibleCount, 64) )
    __debugbreak();
  potentiallyVisibleCount = v3->potentiallyVisibleCount;
  if ( potentiallyVisibleCount > 0 )
  {
    v4 = 0i64;
    v5 = &CgEntitySystem::ms_entitySystemArray[v1];
    visibilityTestBones = v3->visibilityTestBones;
    v26 = v3->visibilityTestBones;
    v7 = s_aimVisMP[v1];
    do
    {
      v8 = v3->visibilityTestEntities[v4];
      if ( (unsigned __int16)v8 >= 0x800u )
      {
        LODWORD(ignoreEntCount) = 2048;
        LODWORD(ignoreEnts) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( aimVisGlob->visibilityTestEntities[visIndex] ) < (unsigned)( ( 2048 ) )", "aimVisGlob->visibilityTestEntities[visIndex] doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, ignoreEntCount) )
          __debugbreak();
      }
      v9 = v3->visibilityTestEntities[v4];
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(ignoreEntCount) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", ignoreEntCount) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(ignoreEntCount) = CgEntitySystem::ms_allocatedCount;
        LODWORD(ignoreEnts) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", ignoreEnts, ignoreEntCount) )
          __debugbreak();
      }
      if ( !*v5 )
      {
        LODWORD(ignoreEntCount) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", ignoreEntCount) )
          __debugbreak();
      }
      v10 = *v5;
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(ignoreEntCount) = 2048;
        LODWORD(ignoreEnts) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", ignoreEnts, ignoreEntCount) )
          __debugbreak();
      }
      v11 = (__int64)&v10->m_entities[v9];
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v10->m_entities[v9].nextState.lerp.eFlags, ACTIVE, 1u) || v10->m_entities[v9].pose.cullIn == 2 )
      {
        v12 = *visibilityTestBones;
        if ( v12 && !SL_IsValidStringValue_0(v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 644, ASSERT_TYPE_ASSERT, "((visBone == ( static_cast< scr_string_t >( 0 ) )) || SL_IsValidStringValue( visBone ))", (const char *)&queryFormat, "(visBone == NULL_SCR_STRING) || SL_IsValidStringValue( visBone )") )
          __debugbreak();
        v7->targetEnt = (const centity_t *)v11;
        entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
        if ( entity == 2047 )
          entity = LocalClientGlobals->predictedPlayerState.clientNum;
        p_view = &LocalClientGlobals->refdef.view;
        if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        LODWORD(start.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        LODWORD(start.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        LODWORD(start.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
        v24 = entity;
        v17 = 1;
        TurretEnt = CG_Turret_GetTurretEnt((const LocalClientNum_t)v1);
        if ( TurretEnt )
        {
          number = TurretEnt->nextState.number;
          v17 = 2;
        }
        AimTargetMP_StartTraceToEntity((const LocalClientNum_t)v1, &v7->workerTrace, &start, *(__int16 *)(v11 + 400), v12, &v24, v17, 8423683, 0, 0);
        LocalClientGlobals = v27;
        visibilityTestBones = v26;
      }
      memset(&start, 0, sizeof(start));
      ++v4;
      ++v7;
      v26 = ++visibilityTestBones;
      v3 = v22;
      v5 = &CgEntitySystem::ms_entitySystemArray[v1];
    }
    while ( v4 < potentiallyVisibleCount );
  }
}

/*
==============
AimTargetMP_StartTraceToEntity
==============
*/
void AimTargetMP_StartTraceToEntity(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, int entIndex, scr_string_t tagName, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels)
{
  float v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  const centity_t *Entity; 
  const cg_t *LocalClientGlobals; 
  unsigned __int8 v20; 
  TraceWorkerCmd cmd; 

  if ( ((unsigned __int8)workerResults & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 569, ASSERT_TYPE_ASSERT, "(((uintptr_t)workerResults & 127) == 0)", (const char *)&queryFormat, "((uintptr_t)workerResults & 127) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 570, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( ignoreEntCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 571, ASSERT_TYPE_ASSERT, "(ignoreEntCount <= 8)", (const char *)&queryFormat, "ignoreEntCount <= MAX_WORKER_IGNORE_ENTS") )
    __debugbreak();
  if ( workerResults->state == 1 )
    CG_WaitWorkerTrace(workerResults);
  CG_InitTraceCmd(localClientNum, &cmd);
  v14 = start->v[0];
  v15 = start->v[1];
  v16 = start->v[2];
  cmd.brushmask = contentMask;
  cmd.pointTrace.contentmask = contentMask;
  cmd.tracemask = (2 * staticModels) | 0x11;
  cmd.tagName = tagName;
  cmd.pointTrace.bLocational = locational;
  cmd.start.v[0] = v14;
  cmd.start.v[1] = v15;
  cmd.start.v[2] = v16;
  cmd.entIndex = entIndex;
  cmd.pointTrace.bCalcDObjPose = 0;
  memcpy_0(cmd.pointTrace.ignoreEnts, ignoreEnts, 4i64 * ignoreEntCount);
  cmd.results = workerResults;
  cmd.bounds = bounds_origin;
  cmd.pointTrace.extents.start.v[0] = v14;
  cmd.pointTrace.extents.start.v[1] = v15;
  cmd.pointTrace.extents.start.v[2] = v16;
  cmd.pointTrace.ignoreEntCount = ignoreEntCount;
  cmd.pointTrace.priorityMap = NULL;
  workerResults->state = 1;
  v17 = DCONST_DVARBOOL_aim_target_trace_async;
  if ( !DCONST_DVARBOOL_aim_target_trace_async && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_target_trace_async") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_TRACE_AIM_TARGET, &cmd);
  }
  else
  {
    PhysicsQuery_TraceCmd(&cmd);
    Entity = CG_GetEntity((const LocalClientNum_t)cmd.localClientNum, cmd.entIndex);
    if ( AimTargetMP_IsTargetVisible((const LocalClientNum_t)cmd.localClientNum, Entity, cmd.results) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)cmd.localClientNum);
      v20 = AimTargetMP_CalcTargetFlags(LocalClientGlobals, Entity);
      AimTargetMP_CreateTarget(cmd.localClientNum, Entity, (const AimTargetFlags)v20);
    }
  }
}

/*
==============
AimTargetMP_TraceToEntityCmd
==============
*/
void AimTargetMP_TraceToEntityCmd(const void *const cmdData)
{
  const centity_t *Entity; 
  const cg_t *LocalClientGlobals; 
  unsigned __int8 v4; 

  PhysicsQuery_TraceCmd(cmdData);
  Entity = CG_GetEntity((const LocalClientNum_t)*((_DWORD *)cmdData + 19), *((_DWORD *)cmdData + 64));
  if ( AimTargetMP_IsTargetVisible((const LocalClientNum_t)*((_DWORD *)cmdData + 19), Entity, *(const workerTrace_t *const *)cmdData) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)*((_DWORD *)cmdData + 19));
    v4 = AimTargetMP_CalcTargetFlags(LocalClientGlobals, Entity);
    AimTargetMP_CreateTarget(*((LocalClientNum_t *)cmdData + 19), Entity, (const AimTargetFlags)v4);
  }
}

