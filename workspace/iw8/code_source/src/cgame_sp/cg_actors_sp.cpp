/*
==============
CG_ActorsSP_ProcessSpawner
==============
*/

void __fastcall CG_ActorsSP_ProcessSpawner(centity_t *cent)
{
  ?CG_ActorsSP_ProcessSpawner@@YAXPEAUcentity_t@@@Z(cent);
}

/*
==============
CG_ActorsSP_ClearCharacterAnimState
==============
*/

void __fastcall CG_ActorsSP_ClearCharacterAnimState(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_ActorsSP_ClearCharacterAnimState@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_ActorsSP_ProcessActor
==============
*/

void __fastcall CG_ActorsSP_ProcessActor(centity_t *cent, bool isVisible)
{
  ?CG_ActorsSP_ProcessActor@@YAXPEAUcentity_t@@_N@Z(cent, isVisible);
}

/*
==============
CG_ActorsSP_PreControllers
==============
*/

void __fastcall CG_ActorsSP_PreControllers(centity_t *cent)
{
  ?CG_ActorsSP_PreControllers@@YAXPEAUcentity_t@@@Z(cent);
}

/*
==============
CG_ActorsSP_UpdateAnimationLod
==============
*/

void __fastcall CG_ActorsSP_UpdateAnimationLod(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_ActorsSP_UpdateAnimationLod@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ActorsSP_FreeLookAtData
==============
*/

void CG_ActorsSP_FreeLookAtData(void)
{
  ?CG_ActorsSP_FreeLookAtData@@YAXXZ();
}

/*
==============
CG_ActorsSP_ClearCharacterAnimState
==============
*/
void CG_ActorsSP_ClearCharacterAnimState(LocalClientNum_t localClientNum, int entNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->ClearCharacterAnimState(LocalClientGlobals, entNum);
}

/*
==============
CG_ActorsSP_FreeLookAtData
==============
*/
void CG_ActorsSP_FreeLookAtData(void)
{
  memset_0(cg_actorLookAt, 0, sizeof(cg_actorLookAt));
}

/*
==============
CG_ActorsSP_PreControllers
==============
*/
void CG_ActorsSP_PreControllers(centity_t *cent)
{
  LocalClientNum_t OnlyLocalClientNum; 
  actor_prone_info_t *ClientActorProneInfo; 
  int time; 
  cg_t *LocalClientGlobals; 
  double ActorProneFraction; 
  int number; 
  actor_prone_info_lerp_t *ClientActorPrevProneInfo; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ClientActorProneInfo = CG_GetClientActorProneInfo(cent->nextState.number);
  time = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time;
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  if ( ClientActorProneInfo && (BG_ActorIsProne(ClientActorProneInfo, time) || ClientActorProneInfo->bCorpseOrientation || ClientActorProneInfo->orientPitch) )
  {
    ActorProneFraction = BG_GetActorProneFraction(ClientActorProneInfo, time);
    if ( ClientActorProneInfo->bCorpseOrientation )
    {
      number = cent->nextState.number;
      cent->pose.actor.proneType = 2;
      ClientActorPrevProneInfo = CG_GetClientActorPrevProneInfo(number);
      CG_LerpClientActorProneInfo(ClientActorProneInfo, ClientActorPrevProneInfo, LocalClientGlobals->frameInterpolation, *(float *)&ActorProneFraction, &cent->pose.actor.pitch, &cent->pose.actor.roll, &cent->pose.actor.height);
    }
    else
    {
      cent->pose.actor.proneType = 1;
      cent->pose.actor.pitch = *(float *)&ActorProneFraction * ClientActorProneInfo->fTorsoPitch;
      cent->pose.coverWall.coverGrid[2] = 0;
    }
  }
  else
  {
    cent->pose.actor.proneType = 0;
  }
}

/*
==============
CG_ActorsSP_ProcessActor
==============
*/
void CG_ActorsSP_ProcessActor(centity_t *cent, bool isVisible)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v4; 
  DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v7; 
  actor_prone_info_t *ClientActorProneInfo; 
  double ActorProneFraction; 
  actor_prone_info_lerp_t *ClientActorPrevProneInfo; 
  cg_t_vtbl *v11; 
  __int64 number; 
  characterAnimState_t *v13; 
  unsigned __int8 stepMove; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float v19; 
  int ragdollHandle; 
  char v21; 
  int v22; 
  entityType_s eType; 
  unsigned int v24; 
  __m256i *HudOutlineInfo; 
  float v26; 
  bool v27; 
  bool useAlternateColor; 
  double Float_Internal_DebugName; 
  unsigned int v30; 
  bool v31; 
  bool v32; 
  float v33; 
  float *roll; 
  float *height; 
  __int64 v36; 
  __int64 v37; 
  bool isFadeActive[4]; 
  int iCurrentTime; 
  int team[2]; 
  vec3_t outOrigin; 
  unsigned int scriptableIndex[2]; 
  vec3_t v43[2]; 
  GfxSceneHudOutlineInfo v44; 
  CgTrajectory result; 
  __int64 v46; 
  vec3_t actorIndex; 
  vec3_t v48; 
  vec3_t outPos; 

  v46 = -2i64;
  isFadeActive[2] = isVisible;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v4 = OnlyLocalClientNum;
  if ( ScriptableCl_GetIndexForEntity(OnlyLocalClientNum, cent, scriptableIndex) )
  {
    ScriptableCl_UpdatePosition((const LocalClientNum_t)v4, scriptableIndex[0], cent);
    ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v4, scriptableIndex[0], cent->nextState.number);
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
  if ( ClientDObj )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v4, cent->nextState.number) )
      CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v4, ClientDObj);
    v7 = CL_GetOnlyLocalClientNum();
    ClientActorProneInfo = CG_GetClientActorProneInfo(cent->nextState.number);
    iCurrentTime = CG_GetLocalClientGlobals(v7)->time;
    *(_QWORD *)actorIndex.v = CG_GetLocalClientGlobals(v7);
    if ( ClientActorProneInfo && (BG_ActorIsProne(ClientActorProneInfo, iCurrentTime) || ClientActorProneInfo->bCorpseOrientation || ClientActorProneInfo->orientPitch) )
    {
      ActorProneFraction = BG_GetActorProneFraction(ClientActorProneInfo, iCurrentTime);
      if ( ClientActorProneInfo->bCorpseOrientation )
      {
        cent->pose.actor.proneType = 2;
        ClientActorPrevProneInfo = CG_GetClientActorPrevProneInfo(cent->nextState.number);
        CG_LerpClientActorProneInfo(ClientActorProneInfo, ClientActorPrevProneInfo, *(float *)(*(_QWORD *)actorIndex.v + 26080i64), *(float *)&ActorProneFraction, &cent->pose.actor.pitch, &cent->pose.actor.roll, &cent->pose.actor.height);
      }
      else
      {
        cent->pose.actor.proneType = 1;
        cent->pose.actor.pitch = *(float *)&ActorProneFraction * ClientActorProneInfo->fTorsoPitch;
        cent->pose.coverWall.coverGrid[2] = 0;
      }
    }
    else
    {
      cent->pose.actor.proneType = 0;
    }
    v11 = LocalClientGlobals->__vftable;
    number = (unsigned int)cent->nextState.number;
    if ( cent->nextState.eType == ET_ACTOR_CORPSE )
    {
      v11->ClearCharacterAnimState(LocalClientGlobals, number);
    }
    else
    {
      v13 = v11->GetCharacterAnimState(LocalClientGlobals, number);
      if ( v13 )
        BG_AnimationState_MinimalUpdate(&cent->nextState, v13, ClientDObj->tree, NULL, 0);
    }
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    stepMove = cent->nextState.lerp.u.actor.stepMove;
    if ( stepMove )
    {
      LODWORD(v15) = COERCE_UNSIGNED_INT(outOrigin.v[2] - cent->pose.actor.prevZ) & _xmm;
      if ( v15 > 1.0 && v15 < 11.0 )
      {
        v16 = I_fclamp(_mm_cvtepi32_ps((__m128i)stepMove).m128_f32[0] * 0.125, 0.0, 1.0);
        outOrigin.v[2] = (float)((float)(1.0 - (float)((float)((float)(1.0 - *(float *)&v16) * 0.80000001) + (float)(*(float *)&v16 * 0.2))) * cent->pose.actor.prevZ) + (float)((float)((float)((float)(1.0 - *(float *)&v16) * 0.80000001) + (float)(*(float *)&v16 * 0.2)) * outOrigin.v[2]);
        CG_SetPoseOrigin(&cent->pose, &outOrigin);
      }
    }
    cent->pose.actor.prevZ = outOrigin.v[2];
    v43[0] = outOrigin;
    v17 = DCONST_DVARMPBOOL_player_spaceEnabled;
    if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      v18 = DCONST_DVARMPFLT_actor_spaceLightingOffset;
      if ( !DCONST_DVARMPFLT_actor_spaceLightingOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actor_spaceLightingOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = v43[0].v[2] + v18->current.value;
    }
    else
    {
      v19 = v43[0].v[2] + 32.0;
    }
    v43[0].v[2] = v19;
    if ( CG_Pose_IsRagdoll(&cent->pose) && (ragdollHandle = cent->pose.ragdollHandle) != 0 )
    {
      v21 = 1;
      Ragdoll_GetRootOrigin(ragdollHandle, &outOrigin);
      CG_SetPoseOrigin(&cent->pose, &outOrigin);
      Ragdoll_SetAnimationParameters(ClientDObj, cent->pose.ragdollHandle, 1);
    }
    else
    {
      v21 = 0;
    }
    v22 = 0;
    isFadeActive[3] = 0;
    isFadeActive[1] = 0;
    isFadeActive[0] = 0;
    if ( cent->nextState.eType == ET_ACTOR_CORPSE )
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v4, ClientDObj, cent->nextState.number, &isFadeActive[3], &isFadeActive[1], isFadeActive);
    eType = cent->nextState.eType;
    if ( eType == ET_ACTOR_CORPSE || v21 )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x1Du) )
        ClientDObj->flags &= ~0x40u;
      else
        ClientDObj->flags |= 0x40u;
      if ( FX_Dismemberment_ProcessEntity((LocalClientNum_t)v4, ClientDObj, isFadeActive[0]) )
        v22 = 128;
    }
    else if ( eType == ET_ACTOR )
    {
      ClientDObj->flags |= 0x80u;
      FX_Dismemberment_ProcessTimeout((LocalClientNum_t)v4, ClientDObj);
    }
    v24 = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags) | 0x1000 | v22;
    HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo((GfxSceneHudOutlineInfo *)&result, LocalClientGlobals, cent);
    *(__m256i *)&v44.color = *HudOutlineInfo;
    v26 = *(float *)HudOutlineInfo[1].m256i_i32;
    iCurrentTime = LODWORD(v26);
    if ( cent->nextState.eType == ET_ACTOR )
    {
      if ( CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v4) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v4) && CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v4) )
      {
        CG_GetClientActorIndexAndTeam(cent->nextState.number, (int *)&actorIndex, team);
        if ( ((team[0] - 1) & 0xFFFFFFFD) == 0 )
        {
          v44.scopeStencil = FLOAT_1_0;
          v27 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v4, cent);
          useAlternateColor = v44.useAlternateColor;
          if ( v27 )
            useAlternateColor = 1;
          v44.useAlternateColor = useAlternateColor;
        }
      }
      if ( LocalClientGlobals->scopeForceEnemyOutlines && cent->nextState.eType == ET_ACTOR )
      {
        CG_GetClientActorIndexAndTeam(cent->nextState.number, (int *)&actorIndex, team);
        if ( ((team[0] - 1) & 0xFFFFFFFD) == 0 )
        {
          v44.color = CG_Utils_GetHudOutlineColor(LocalClientGlobals->scopeForceEnemyOutlineColorIndex);
          v44.drawOccludedPixels = LocalClientGlobals->scopeForceEnemyOutlinesDisableDepthTest;
          v44.drawNonOccludedPixels = 1;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
          v44.lineWidth = (int)*(float *)&Float_Internal_DebugName;
          v44.renderMode = 0;
        }
      }
      v26 = *(float *)&iCurrentTime;
    }
    else
    {
      v24 &= ~0x400u;
    }
    if ( isFadeActive[2] && !isFadeActive[1] )
    {
      v30 = cent->nextState.number;
      v44.characterEVOffset = v26;
      memset(&result, 0, 36);
      CG_Entity_AddDObjToScene((const LocalClientNum_t)v4, ClientDObj, &cent->pose, v30, v24, (shaderOverride_t *)&result, &v44, v43, 0.0, 0);
    }
    v31 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u);
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v32 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x13u);
    if ( (v31 || v32 || CG_LaserForceOnEnabled()) && cent->nextState.eType != ET_ACTOR_CORPSE )
    {
      CG_GetClientActorIndexAndTeam(cent->nextState.number, (int *)&actorIndex, team);
      CG_LaserAdd((const LocalClientNum_t)v4, cent->nextState.number, (const team_t)team[0]);
    }
    if ( cent->nextState.eType == ET_ACTOR )
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
      {
        LODWORD(v37) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        LODWORD(v36) = 1;
        LODWORD(height) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", height, v36, v37) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(height) = CgCompassSystem::ms_allocatedCount;
        LODWORD(roll) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", roll, height) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v4] )
      {
        LODWORD(height) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", height) )
          __debugbreak();
      }
      CgCompassSystemSP::UpdateActorInfo((CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v4], cent->nextState.number);
      LUIOnEntityElementSpawnerSP::UpdateFiltersForActor((const LocalClientNum_t)v4, cent->nextState.number);
    }
    if ( isFadeActive[2] )
    {
      CgTrajectory::CgTrajectory(&result, (const LocalClientNum_t)v4, cent, &cent->prevState);
      BgTrajectory::EvaluatePosTrajectory(&result, LocalClientGlobals->snap->serverTime, &outPos);
      result.m_es = &cent->nextState.lerp;
      BgTrajectory::EvaluatePosTrajectory(&result, LocalClientGlobals->nextSnap->serverTime, &v48);
      actorIndex.v[0] = v48.v[0] - outPos.v[0];
      actorIndex.v[1] = v48.v[1] - outPos.v[1];
      actorIndex.v[2] = v48.v[2] - outPos.v[2];
      v33 = (float)(LocalClientGlobals->nextSnap->serverTime - LocalClientGlobals->snap->serverTime);
      actorIndex.v[0] = v33 * (float)(v48.v[0] - outPos.v[0]);
      actorIndex.v[1] = v33 * (float)(v48.v[1] - outPos.v[1]);
      actorIndex.v[2] = v33 * (float)(v48.v[2] - outPos.v[2]);
      R_ReactiveMotion_AddEffector_MT(&outOrigin, &actorIndex, cent->nextState.number);
    }
    if ( cent->nextState.eType == ET_ACTOR )
    {
      CG_PlayContinuousFireSounds((const LocalClientNum_t)v4, NULL, cent);
      XAnimBonePhysicsSetDObjMatrix(ClientDObj, &outOrigin, &cent->pose.angles);
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(v43, 0, 0xCui64);
}

/*
==============
CG_ActorsSP_ProcessSpawner
==============
*/
void CG_ActorsSP_ProcessSpawner(centity_t *cent)
{
  vec3_t outOrigin; 
  __int64 v2; 
  Bounds bounds; 

  v2 = -2i64;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  bounds.halfSize.v[1] = FLOAT_16_0;
  bounds.halfSize.v[2] = FLOAT_36_0;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_DebugBox(&outOrigin, &bounds, 0.0, &colorRed, 1, 0);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_ActorsSP_UpdateAnimationLod
==============
*/
void CG_ActorsSP_UpdateAnimationLod(LocalClientNum_t localClientNum, const centity_t *cent)
{
  int number; 
  const DObj *ClientDObj; 
  const DObj *v6; 
  const XAnimTree *Tree; 
  const XAnimTree *v8; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 439, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 440, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  number = cent->nextState.number;
  if ( cent->pose.cullIn == 2 )
  {
    CG_Entity_UpdateAnimationLod(localClientNum, number);
  }
  else
  {
    ClientDObj = Com_GetClientDObj(number, localClientNum);
    v6 = ClientDObj;
    if ( ClientDObj )
    {
      Tree = DObjGetTree(ClientDObj);
      v8 = Tree;
      if ( Tree )
      {
        if ( XAnimTreeHasLods(Tree) )
        {
          if ( !v8->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 458, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
            __debugbreak();
          XAnimSetClientLod(v6, v8->anims->numLods);
        }
      }
    }
  }
}

/*
==============
CG_LerpClientActorProneInfo
==============
*/
void CG_LerpClientActorProneInfo(actor_prone_info_t *proneInfo, actor_prone_info_lerp_t *prevProneInfo, float frameInterpolation, float weight, float *pitch, float *roll, float *height)
{
  float v11; 

  if ( !proneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(proneInfo)", (const char *)&queryFormat, "proneInfo") )
    __debugbreak();
  if ( !prevProneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(prevProneInfo)", (const char *)&queryFormat, "prevProneInfo") )
    __debugbreak();
  if ( !pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 80, ASSERT_TYPE_ASSERT, "(pitch)", (const char *)&queryFormat, "pitch") )
    __debugbreak();
  if ( !roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 81, ASSERT_TYPE_ASSERT, "(roll)", (const char *)&queryFormat, "roll") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 82, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  if ( frameInterpolation < 0.0 || frameInterpolation > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 84, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frameInterpolation ) && ( frameInterpolation ) <= ( 1.0f )", "frameInterpolation not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", frameInterpolation, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( prevProneInfo->iProneTime == proneInfo->iProneTime )
  {
    *pitch = (float)((float)((float)(1.0 - frameInterpolation) * prevProneInfo->fBodyPitch) + (float)(frameInterpolation * proneInfo->fTorsoPitch)) * weight;
    *roll = (float)((float)((float)(1.0 - frameInterpolation) * prevProneInfo->fBodyRoll) + (float)(frameInterpolation * proneInfo->fWaistPitch)) * weight;
    v11 = (float)((float)((float)(1.0 - frameInterpolation) * prevProneInfo->fBodyHeight) + (float)(frameInterpolation * proneInfo->fBodyHeight)) * weight;
  }
  else
  {
    *pitch = weight * proneInfo->fTorsoPitch;
    *roll = weight * proneInfo->fWaistPitch;
    v11 = weight * proneInfo->fBodyHeight;
  }
  *height = v11;
}

