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
  int number; 
  actor_prone_info_lerp_t *ClientActorPrevProneInfo; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ClientActorProneInfo = CG_GetClientActorProneInfo(cent->nextState.number);
  time = CG_GetLocalClientGlobals(OnlyLocalClientNum)->time;
  _R15 = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  if ( ClientActorProneInfo && (BG_ActorIsProne(ClientActorProneInfo, time) || ClientActorProneInfo->bCorpseOrientation || ClientActorProneInfo->orientPitch) )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    *(double *)&_XMM0 = BG_GetActorProneFraction(ClientActorProneInfo, time);
    _RBX = &cent->pose.160;
    __asm { vmovaps xmm6, xmm0 }
    if ( ClientActorProneInfo->bCorpseOrientation )
    {
      number = cent->nextState.number;
      cent->pose.actor.proneType = 2;
      ClientActorPrevProneInfo = CG_GetClientActorPrevProneInfo(number);
      __asm
      {
        vmovss  xmm2, dword ptr [r15+65E0h]; frameInterpolation
        vmovaps xmm3, xmm6; weight
      }
      CG_LerpClientActorProneInfo(ClientActorProneInfo, ClientActorPrevProneInfo, *(float *)&_XMM2, *(float *)&_XMM3, &cent->pose.actor.pitch, &cent->pose.actor.roll, &cent->pose.actor.height);
    }
    else
    {
      cent->pose.actor.proneType = 1;
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rdi+10h]
        vmovss  dword ptr [rbx], xmm0
      }
      cent->pose.coverWall.coverGrid[2] = 0;
    }
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
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

void __fastcall CG_ActorsSP_ProcessActor(centity_t *cent, bool isVisible, double _XMM2_8)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v9; 
  DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v12; 
  actor_prone_info_t *ClientActorProneInfo; 
  actor_prone_info_lerp_t *ClientActorPrevProneInfo; 
  cg_t_vtbl *v19; 
  __int64 number; 
  characterAnimState_t *v21; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  int ragdollHandle; 
  char v34; 
  int v35; 
  entityType_s eType; 
  unsigned int v37; 
  float characterEVOffset; 
  bool v41; 
  bool useAlternateColor; 
  unsigned int v44; 
  bool v47; 
  bool v48; 
  float *roll; 
  float *height; 
  __int64 v65; 
  __int64 v66; 
  float v67; 
  bool isFadeActive[4]; 
  int iCurrentTime; 
  int team[2]; 
  vec3_t outOrigin; 
  unsigned int scriptableIndex[2]; 
  vec3_t v73[2]; 
  GfxSceneHudOutlineInfo v74; 
  CgTrajectory result; 
  __int64 v76; 
  vec3_t actorIndex; 
  vec3_t v78; 
  vec3_t outPos; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  v76 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  isFadeActive[2] = isVisible;
  _RBX = cent;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v9 = OnlyLocalClientNum;
  if ( ScriptableCl_GetIndexForEntity(OnlyLocalClientNum, _RBX, scriptableIndex) )
  {
    ScriptableCl_UpdatePosition((const LocalClientNum_t)v9, scriptableIndex[0], _RBX);
    ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v9, scriptableIndex[0], _RBX->nextState.number);
  }
  ClientDObj = Com_GetClientDObj(_RBX->nextState.number, (LocalClientNum_t)v9);
  if ( ClientDObj )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
    if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v9, _RBX->nextState.number) )
      CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v9, ClientDObj);
    v12 = CL_GetOnlyLocalClientNum();
    ClientActorProneInfo = CG_GetClientActorProneInfo(_RBX->nextState.number);
    iCurrentTime = CG_GetLocalClientGlobals(v12)->time;
    *(_QWORD *)actorIndex.v = CG_GetLocalClientGlobals(v12);
    if ( ClientActorProneInfo && (BG_ActorIsProne(ClientActorProneInfo, iCurrentTime) || ClientActorProneInfo->bCorpseOrientation || ClientActorProneInfo->orientPitch) )
    {
      *(double *)&_XMM0 = BG_GetActorProneFraction(ClientActorProneInfo, iCurrentTime);
      __asm { vmovaps xmm6, xmm0 }
      if ( ClientActorProneInfo->bCorpseOrientation )
      {
        _RBX->pose.actor.proneType = 2;
        ClientActorPrevProneInfo = CG_GetClientActorPrevProneInfo(_RBX->nextState.number);
        __asm { vmovaps xmm3, xmm6; weight }
        _RCX = *(_QWORD *)actorIndex.v;
        __asm { vmovss  xmm2, dword ptr [rcx+65E0h]; frameInterpolation }
        CG_LerpClientActorProneInfo(ClientActorProneInfo, ClientActorPrevProneInfo, *(float *)&_XMM2_8, *(float *)&_XMM3, &_RBX->pose.actor.pitch, &_RBX->pose.actor.roll, &_RBX->pose.actor.height);
      }
      else
      {
        _RBX->pose.actor.proneType = 1;
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [r12+10h]
          vmovss  dword ptr [rbx+0A0h], xmm0
        }
        _RBX->pose.coverWall.coverGrid[2] = 0;
      }
    }
    else
    {
      _RBX->pose.actor.proneType = 0;
    }
    v19 = LocalClientGlobals->__vftable;
    number = (unsigned int)_RBX->nextState.number;
    if ( _RBX->nextState.eType == ET_ACTOR_CORPSE )
    {
      v19->ClearCharacterAnimState(LocalClientGlobals, number);
    }
    else
    {
      v21 = v19->GetCharacterAnimState(LocalClientGlobals, number);
      if ( v21 )
        BG_AnimationState_MinimalUpdate(&_RBX->nextState, v21, ClientDObj->tree, NULL, 0);
    }
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  xmm6, cs:__real@3f800000
    }
    if ( _RBX->nextState.lerp.u.actor.stepMove )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+170h+outOrigin+8]
        vsubss  xmm1, xmm0, dword ptr [rbx+0ACh]
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, xmm6
        vcomiss xmm1, cs:__real@41300000
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+170h+outOrigin+8]
      vmovss  dword ptr [rbx+0ACh], xmm0
      vmovsd  xmm1, qword ptr [rsp+170h+outOrigin]
      vmovsd  [rsp+170h+var_F8], xmm1
    }
    v73[0].v[2] = outOrigin.v[2];
    v29 = DCONST_DVARMPBOOL_player_spaceEnabled;
    if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      v30 = DCONST_DVARMPFLT_actor_spaceLightingOffset;
      if ( !DCONST_DVARMPFLT_actor_spaceLightingOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actor_spaceLightingOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      __asm
      {
        vmovss  xmm0, [rbp+70h+var_F0]
        vaddss  xmm1, xmm0, dword ptr [rdi+28h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rbp+70h+var_F0]
        vaddss  xmm1, xmm0, cs:__real@42000000
      }
    }
    __asm { vmovss  [rbp+70h+var_F0], xmm1 }
    if ( CG_Pose_IsRagdoll(&_RBX->pose) && (ragdollHandle = _RBX->pose.ragdollHandle) != 0 )
    {
      v34 = 1;
      Ragdoll_GetRootOrigin(ragdollHandle, &outOrigin);
      CG_SetPoseOrigin(&_RBX->pose, &outOrigin);
      Ragdoll_SetAnimationParameters(ClientDObj, _RBX->pose.ragdollHandle, 1);
    }
    else
    {
      v34 = 0;
    }
    v35 = 0;
    isFadeActive[3] = 0;
    isFadeActive[1] = 0;
    isFadeActive[0] = 0;
    if ( _RBX->nextState.eType == ET_ACTOR_CORPSE )
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v9, ClientDObj, _RBX->nextState.number, &isFadeActive[3], &isFadeActive[1], isFadeActive);
    eType = _RBX->nextState.eType;
    if ( eType == ET_ACTOR_CORPSE || v34 )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x1Du) )
        ClientDObj->flags &= ~0x40u;
      else
        ClientDObj->flags |= 0x40u;
      if ( FX_Dismemberment_ProcessEntity((LocalClientNum_t)v9, ClientDObj, isFadeActive[0]) )
        v35 = 128;
    }
    else if ( eType == ET_ACTOR )
    {
      ClientDObj->flags |= 0x80u;
      FX_Dismemberment_ProcessTimeout((LocalClientNum_t)v9, ClientDObj);
    }
    v37 = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, _RBX, &_RBX->nextState.lerp.eFlags) | 0x1000 | v35;
    _RAX = CG_Entity_GetHudOutlineInfo((GfxSceneHudOutlineInfo *)&result, LocalClientGlobals, _RBX);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+70h+var_E0], ymm0
    }
    characterEVOffset = _RAX->characterEVOffset;
    iCurrentTime = LODWORD(characterEVOffset);
    if ( _RBX->nextState.eType == ET_ACTOR )
    {
      if ( CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v9) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v9) && CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v9) )
      {
        CG_GetClientActorIndexAndTeam(_RBX->nextState.number, (int *)&actorIndex, team);
        if ( ((team[0] - 1) & 0xFFFFFFFD) == 0 )
        {
          __asm { vmovss  dword ptr [rbp+70h+var_E0+4], xmm6 }
          v41 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v9, _RBX);
          useAlternateColor = v74.useAlternateColor;
          if ( v41 )
            useAlternateColor = 1;
          v74.useAlternateColor = useAlternateColor;
        }
      }
      if ( LocalClientGlobals->scopeForceEnemyOutlines && _RBX->nextState.eType == ET_ACTOR )
      {
        CG_GetClientActorIndexAndTeam(_RBX->nextState.number, (int *)&actorIndex, team);
        if ( ((team[0] - 1) & 0xFFFFFFFD) == 0 )
        {
          v74.color = CG_Utils_GetHudOutlineColor(LocalClientGlobals->scopeForceEnemyOutlineColorIndex);
          v74.drawOccludedPixels = LocalClientGlobals->scopeForceEnemyOutlinesDisableDepthTest;
          v74.drawNonOccludedPixels = 1;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
          __asm { vcvttss2si eax, xmm0 }
          v74.lineWidth = _EAX;
          v74.renderMode = 0;
        }
      }
      characterEVOffset = *(float *)&iCurrentTime;
    }
    else
    {
      v37 &= ~0x400u;
    }
    if ( isFadeActive[2] && !isFadeActive[1] )
    {
      v44 = _RBX->nextState.number;
      __asm
      {
        vmovups ymm0, [rbp+70h+var_E0]
        vmovups [rbp+70h+var_E0], ymm0
      }
      v74.characterEVOffset = characterEVOffset;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_11.scrollRateX
        vmovups ymmword ptr [rbp+70h+result.color], ymm0
      }
      result.m_localClientNum = LODWORD(NULL_SHADER_OVERRIDE_11.atlasTime);
      __asm { vmovss  dword ptr [rsp+170h+var_130], xmm7 }
      CG_Entity_AddDObjToScene((const LocalClientNum_t)v9, ClientDObj, &_RBX->pose, v44, v37, (shaderOverride_t *)&result, &v74, v73, v67, 0);
    }
    v47 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 9u);
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v48 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 0x13u);
    if ( (v47 || v48 || CG_LaserForceOnEnabled()) && _RBX->nextState.eType != ET_ACTOR_CORPSE )
    {
      CG_GetClientActorIndexAndTeam(_RBX->nextState.number, (int *)&actorIndex, team);
      CG_LaserAdd((const LocalClientNum_t)v9, _RBX->nextState.number, (const team_t)team[0]);
    }
    if ( _RBX->nextState.eType == ET_ACTOR )
    {
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
      {
        LODWORD(v66) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        LODWORD(v65) = 1;
        LODWORD(height) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", height, v65, v66) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(height) = CgCompassSystem::ms_allocatedCount;
        LODWORD(roll) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", roll, height) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v9] )
      {
        LODWORD(height) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", height) )
          __debugbreak();
      }
      CgCompassSystemSP::UpdateActorInfo((CgCompassSystemSP *)CgCompassSystem::ms_compassSystemArray[v9], _RBX->nextState.number);
      LUIOnEntityElementSpawnerSP::UpdateFiltersForActor((const LocalClientNum_t)v9, _RBX->nextState.number);
    }
    if ( isFadeActive[2] )
    {
      CgTrajectory::CgTrajectory(&result, (const LocalClientNum_t)v9, _RBX, &_RBX->prevState);
      BgTrajectory::EvaluatePosTrajectory(&result, LocalClientGlobals->snap->serverTime, &outPos);
      result.m_es = &_RBX->nextState.lerp;
      BgTrajectory::EvaluatePosTrajectory(&result, LocalClientGlobals->nextSnap->serverTime, &v78);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+70h+var_68]
        vsubss  xmm5, xmm0, dword ptr [rbp+70h+outPos]
        vmovss  [rbp+70h+actorIndex], xmm5
        vmovss  xmm1, dword ptr [rbp+70h+var_68+4]
        vsubss  xmm4, xmm1, dword ptr [rbp+70h+outPos+4]
        vmovss  [rbp+70h+actorIndex+4], xmm4
        vmovss  xmm0, dword ptr [rbp+70h+var_68+8]
        vsubss  xmm3, xmm0, dword ptr [rbp+70h+outPos+8]
        vmovss  [rbp+70h+var_70], xmm3
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, edx
        vmulss  xmm0, xmm2, xmm5
        vmovss  [rbp+70h+actorIndex], xmm0
        vmulss  xmm1, xmm2, xmm4
        vmovss  [rbp+70h+actorIndex+4], xmm1
        vmulss  xmm0, xmm2, xmm3
        vmovss  [rbp+70h+var_70], xmm0
      }
      R_ReactiveMotion_AddEffector_MT(&outOrigin, &actorIndex, _RBX->nextState.number);
    }
    if ( _RBX->nextState.eType == ET_ACTOR )
    {
      CG_PlayContinuousFireSounds((const LocalClientNum_t)v9, NULL, _RBX);
      XAnimBonePhysicsSetDObjMatrix(ClientDObj, &outOrigin, &_RBX->pose.angles);
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(v73, 0, 0xCui64);
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ActorsSP_ProcessSpawner
==============
*/

void __fastcall CG_ActorsSP_ProcessSpawner(centity_t *cent, __int64 a2, double _XMM2_8)
{
  vec3_t outOrigin; 
  __int64 v8; 
  Bounds bounds; 

  v8 = -2i64;
  __asm
  {
    vmovups xmm0, cs:__xmm@41800000421000000000000000000000
    vmovups xmmword ptr [rsp+78h+bounds.midPoint], xmm0
    vmovss  xmm1, cs:__real@41800000
    vmovss  dword ptr [rsp+78h+bounds.halfSize+4], xmm1
    vmovss  xmm0, cs:__real@42100000
    vmovss  dword ptr [rsp+78h+bounds.halfSize+8], xmm0
  }
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm { vxorps  xmm2, xmm2, xmm2; yaw }
  CG_DebugBox(&outOrigin, &bounds, *(float *)&_XMM2, &colorRed, 1, 0);
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

void __fastcall CG_LerpClientActorProneInfo(actor_prone_info_t *proneInfo, actor_prone_info_lerp_t *prevProneInfo, double frameInterpolation, double weight, float *pitch, float *roll, float *height)
{
  bool v19; 
  bool v20; 
  double v45; 
  double v46; 
  double v47; 
  char v51; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !proneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(proneInfo)", (const char *)&queryFormat, "proneInfo") )
    __debugbreak();
  if ( !prevProneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(prevProneInfo)", (const char *)&queryFormat, "prevProneInfo") )
    __debugbreak();
  _R14 = pitch;
  if ( !pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 80, ASSERT_TYPE_ASSERT, "(pitch)", (const char *)&queryFormat, "pitch") )
    __debugbreak();
  _RBP = roll;
  if ( !roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 81, ASSERT_TYPE_ASSERT, "(roll)", (const char *)&queryFormat, "roll") )
    __debugbreak();
  _RDI = height;
  v19 = height == NULL;
  if ( !height )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 82, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height");
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, xmm8
  }
  if ( !v19 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+88h+var_50], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_58], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+88h+var_60], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_actors_sp.cpp", 84, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frameInterpolation ) && ( frameInterpolation ) <= ( 1.0f )", "frameInterpolation not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v45, v46, v47) )
      __debugbreak();
  }
  if ( prevProneInfo->iProneTime == proneInfo->iProneTime )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+10h]
      vsubss  xmm3, xmm8, xmm6
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
      vmovss  dword ptr [r14], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsi+0Ch]
      vmulss  xmm0, xmm6, dword ptr [rbx+14h]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
      vmovss  dword ptr [rbp+0], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsi+4]
      vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rbx+10h]
      vmovss  dword ptr [r14], xmm0
      vmulss  xmm1, xmm7, dword ptr [rbx+14h]
      vmovss  dword ptr [rbp+0], xmm1
      vmulss  xmm2, xmm7, dword ptr [rbx+0Ch]
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm2
    vmovaps xmm6, [rsp+88h+var_28]
  }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
}

