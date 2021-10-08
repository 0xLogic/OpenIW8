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
  CgStatic *v12; 
  const characterInfo_t *v13; 
  const characterInfo_t *v14; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v16; 
  char result; 
  unsigned int PlayerIndex; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v20; 
  bool v21; 
  LocalClientNum_t v33; 
  __int64 v65; 
  __int64 v66; 
  vec3_t outOrigin; 
  __int64 v68; 
  Bounds box; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RDI = cgameGlob;
  Profile_Begin(42);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( (targetEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(CENextValid( targetEnt ))", (const char *)&queryFormat, "CENextValid( targetEnt )") )
    __debugbreak();
  if ( targetEnt->nextState.number == _RDI->predictedPlayerState.clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(targetEnt->nextState.number != cgameGlob->predictedPlayerState.clientNum)", (const char *)&queryFormat, "targetEnt->nextState.number != cgameGlob->predictedPlayerState.clientNum") )
    __debugbreak();
  localClientNum = _RDI->localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", _RDI->localClientNum) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v66 = CgStatic::ms_allocatedCount;
    LODWORD(v65) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v65, v66) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[localClientNum] )
  {
    LODWORD(v66) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v66) )
      __debugbreak();
  }
  v12 = CgStatic::ms_cgameStaticsArray[localClientNum];
  if ( !BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    if ( BG_IsVehicleEntity(&targetEnt->nextState) )
    {
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
        goto LABEL_60;
      PlayerIndex = BGVehicles::GetPlayerIndex(&targetEnt->nextState);
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( PlayerIndex >= ComCharacterLimits::ms_gameData.m_characterCount )
        goto LABEL_60;
      CharacterInfo = CgStatic::GetCharacterInfo(v12, _RDI->predictedPlayerState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 331, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
        __debugbreak();
      if ( !CharacterInfo->infoValid )
        goto LABEL_60;
      v20 = CgStatic::GetCharacterInfo(v12, PlayerIndex);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(vehOwnerInfo)", (const char *)&queryFormat, "vehOwnerInfo") )
        __debugbreak();
      if ( !v20->infoValid || Com_Teams_OnSameTeam(&_RDI->predictedPlayerState, (const team_t)CharacterInfo->team, &targetEnt->nextState, (const team_t)v20->team) )
        goto LABEL_60;
      v21 = v20->entityNum == CharacterInfo->entityNum;
      goto LABEL_59;
    }
    if ( targetEnt->nextState.eType != ET_SCRIPTMOVER || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
      {
        v21 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u);
LABEL_59:
        if ( !v21 )
          goto LABEL_67;
LABEL_60:
        Profile_EndInternal(NULL);
        result = 0;
        goto LABEL_74;
      }
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 8u) )
    {
      v21 = Com_GetClientDObj(targetEnt->nextState.number, _RDI->localClientNum) == NULL;
      goto LABEL_59;
    }
LABEL_42:
    Profile_EndInternal(NULL);
    result = 2;
    goto LABEL_74;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 267, ASSERT_TYPE_ASSERT, "(!targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD ))", (const char *)&queryFormat, "!targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD )") )
    __debugbreak();
  v13 = CgStatic::GetCharacterInfo(v12, targetEnt->nextState.clientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(targetInfo)", (const char *)&queryFormat, "targetInfo") )
    __debugbreak();
  v14 = CgStatic::GetCharacterInfo(v12, _RDI->predictedPlayerState.clientNum);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
    __debugbreak();
  if ( !v13->infoValid || !v13->model[0] || !Com_GetClientDObj(targetEnt->nextState.number, _RDI->localClientNum) || Com_Teams_OnSameTeam(&_RDI->predictedPlayerState, (const team_t)v14->team, &targetEnt->nextState, (const team_t)v13->team) || targetEnt->nextState.otherEntityNum == _RDI->predictedPlayerState.clientNum )
    goto LABEL_60;
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0xBu);
  v16 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v66) = 64;
      LODWORD(v65) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v65, v66) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v16 & 0x1F)) & v13->perks.array[v16 >> 5]) != 0 )
      goto LABEL_42;
  }
LABEL_67:
  CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+108h+outOrigin+4]
  }
  if ( _RDI->predictedPlayerState.vehicleState.entity == 2047 )
  {
    __asm
    {
      vsubss  xmm6, xmm0, dword ptr [rdi+38h]
      vsubss  xmm7, xmm1, dword ptr [rdi+3Ch]
      vmovss  xmm0, dword ptr [rsp+108h+outOrigin+8]
      vsubss  xmm8, xmm0, dword ptr [rdi+40h]
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm6, xmm0, dword ptr [rdi+134h]
      vsubss  xmm7, xmm1, dword ptr [rdi+138h]
      vmovss  xmm0, dword ptr [rsp+108h+outOrigin+8]
      vsubss  xmm8, xmm0, dword ptr [rdi+13Ch]
    }
  }
  __asm
  {
    vmovss  xmm9, dword ptr [rdi+6944h]
    vmovss  xmm10, dword ptr [rdi+6948h]
    vmovss  xmm11, dword ptr [rdi+694Ch]
  }
  v33 = _RDI->localClientNum;
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    __asm { vmovss  xmm3, cs:__real@41200000 }
  }
  else
  {
    AimTargetMP_GetTargetBounds(v33, targetEnt, &box);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+108h+box.midPoint]
      vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm1, xmm4
      vaddss  xmm5, xmm1, dword ptr [rsp+108h+box.halfSize]
      vmovss  xmm1, dword ptr [rsp+108h+box.midPoint+4]
      vandps  xmm1, xmm1, xmm4
      vaddss  xmm3, xmm1, dword ptr [rsp+108h+box.halfSize+4]
      vmovss  xmm2, dword ptr [rsp+108h+box.midPoint+8]
      vandps  xmm2, xmm2, xmm4
      vaddss  xmm4, xmm2, dword ptr [rsp+108h+box.halfSize+8]
      vmulss  xmm2, xmm3, xmm3
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm3, xmm2, xmm2
    }
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm9
    vmulss  xmm0, xmm7, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm8
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm3, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  Profile_EndInternal(NULL);
  memset(&outOrigin, 0, sizeof(outOrigin));
  result = 3;
LABEL_74:
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
  }
  return v2;
}

/*
==============
AimTargetMP_CreateTarget
==============
*/
void AimTargetMP_CreateTarget(LocalClientNum_t localClientNum, const centity_t *targetEnt, const AimTargetFlags flags)
{
  char v7; 
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  volatile signed __int32 *p_visibleTargetCount; 
  signed __int32 v46; 
  __int64 v54; 
  __int64 v55; 
  vec3_t outOrigin; 
  __int64 v57; 
  CgTrajectory v58; 
  vec3_t v59; 
  vec3_t outPos; 
  __m256i v61; 
  __int128 v62; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v7 = flags;
  v9 = localClientNum;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 444, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  if ( _RAX->predictedPlayerState.vehicleState.entity == 2047 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rax+38h]
      vmovss  xmm7, dword ptr [rax+3Ch]
      vmovss  xmm8, dword ptr [rax+40h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rax+134h]
      vmovss  xmm7, dword ptr [rax+138h]
      vmovss  xmm8, dword ptr [rax+13Ch]
    }
  }
  AimTargetMP_GetTargetBounds((LocalClientNum_t)v9, targetEnt, (Bounds *)&v61.m256i_u64[1]);
  v61.m256i_i32[0] = targetEnt->nextState.number;
  CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+outOrigin]
    vsubss  xmm3, xmm0, xmm6
    vmovss  xmm1, dword ptr [rsp+130h+outOrigin+4]
    vsubss  xmm2, xmm1, xmm7
    vmovss  xmm0, dword ptr [rsp+130h+outOrigin+8]
    vsubss  xmm4, xmm0, xmm8
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rbp+30h+var_90+4], xmm2
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@3a83126f
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
  }
  if ( nextSnap->serverTime <= (unsigned int)snap->serverTime )
  {
    __asm
    {
      vmovss  dword ptr [rbp+30h+var_70], xmm1
      vmovss  dword ptr [rbp+30h+var_70+4], xmm1
      vmovss  dword ptr [rbp+30h+var_70+8], xmm1
    }
  }
  else
  {
    CgTrajectory::CgTrajectory(&v58, (const LocalClientNum_t)v9, targetEnt, &targetEnt->prevState);
    BgTrajectory::EvaluatePosTrajectory(&v58, snap->serverTime, &outPos);
    v58.m_es = &targetEnt->nextState.lerp;
    BgTrajectory::EvaluatePosTrajectory(&v58, nextSnap->serverTime, &v59);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h+var_B0]
      vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos]
      vdivss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+30h+var_70], xmm2
      vmovss  xmm0, dword ptr [rbp+30h+var_B0+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos+4]
      vdivss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+30h+var_70+4], xmm2
      vmovss  xmm0, dword ptr [rbp+30h+var_B0+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos+8]
      vdivss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+30h+var_70+8], xmm2
    }
  }
  BYTE12(v62) = v7;
  _RSI = &s_aimVisMPGlob[v9];
  p_visibleTargetCount = &_RSI->visibleTargetCount;
  if ( _RSI->visibleTargetCount > 64 )
  {
    LODWORD(v54) = *p_visibleTargetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 116, ASSERT_TYPE_ASSERT, "( aimVisGlob->visibleTargetCount ) <= ( 64 )", "aimVisGlob->visibleTargetCount not in [0, AIM_MAX_VISIBILITY_TESTS]\n\t%u not in [0, %u]", v54, 64) )
      __debugbreak();
  }
  if ( (((_BYTE)_RSI - 124) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &_RSI->visibleTargetCount) )
    __debugbreak();
  v46 = _InterlockedExchangeAdd(p_visibleTargetCount, 1u);
  if ( (unsigned int)v46 >= 0x40 )
  {
    LODWORD(v55) = 64;
    LODWORD(v54) = v46;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( visIndex ) < (unsigned)( 64 )", "visIndex doesn't index AIM_MAX_VISIBILITY_TESTS\n\t%i not in [0, %i)", v54, v55) )
      __debugbreak();
  }
  _RCX = 6i64 * v46;
  __asm
  {
    vmovups ymm0, [rbp+30h+var_90]
    vmovups ymmword ptr [rsi+rcx*8+184h], ymm0
    vmovups xmm1, [rbp+30h+var_70]
    vmovups xmmword ptr [rsi+rcx*8+1A4h], xmm1
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  __int64 v7; 
  scr_string_t aim_highest_bone; 
  const DObj *ClientDObj; 
  int NumModels; 
  int i; 
  const XModel *Model; 
  const char *v13; 
  const dvar_t *v18; 
  char v19; 
  bool v20; 
  bool v25; 
  const DObj *v26; 
  const XModel *FirstModel; 
  __int64 v29; 
  __int64 v30; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  __int64 v33; 
  char dest[1024]; 
  void *retaddr; 

  _RAX = &retaddr;
  v33 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = box;
  v7 = localClientNum;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(box)", (const char *)&queryFormat, "box") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    aim_highest_bone = scr_const.aim_highest_bone;
    if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, (LocalClientNum_t)v7);
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
      v13 = SL_ConvertToString(aim_highest_bone);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442701A0, 883i64, v13, dest);
    }
    CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+4C8h+outPos+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+4C8h+outOrigin+8]
    }
    *(_QWORD *)_RDI->midPoint.v = 0i64;
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmulss  xmm0, xmm1, xmm6
      vmovss  dword ptr [rdi+8], xmm0
    }
    _RDI->halfSize.v[0] = 10.0;
    _RDI->halfSize.v[1] = 10.0;
    __asm { vmovss  dword ptr [rdi+14h], xmm0 }
    v18 = DCONST_DVARFLT_aim_boundsMinBoxHeight;
    if ( !DCONST_DVARFLT_aim_boundsMinBoxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_boundsMinBoxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vmulss  xmm6, xmm6, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rdi+14h]
      vcomiss xmm1, xmm6
    }
    if ( v19 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
      }
      if ( v19 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000
          vmovss  dword ptr [rdi+14h], xmm1
          vcomiss xmm1, xmm0
        }
        if ( v19 )
        {
          v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 200, ASSERT_TYPE_ASSERT, "(box->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "box->halfSize[2] >= 0.0f");
          v19 = 0;
          v20 = !v25;
          if ( v25 )
            __debugbreak();
        }
      }
      __asm { vcomiss xmm6, dword ptr [rdi+14h] }
      if ( !(v19 | v20) )
        __asm { vmovss  dword ptr [rdi+14h], xmm6 }
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    memset(&outPos, 0, sizeof(outPos));
  }
  else if ( BG_IsVehicleEntity(&targetEnt->nextState) )
  {
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
      __debugbreak();
    if ( (unsigned int)v7 >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v30) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v29) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    if ( !CgVehicleSystem::ms_vehicleSystemArray[v7] )
    {
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v30) )
        __debugbreak();
    }
    CgVehicleSystem::GetDObjFirstModelBounds(CgVehicleSystem::ms_vehicleSystemArray[v7], targetEnt, _RDI);
  }
  else if ( targetEnt->nextState.eType != ET_SCRIPTMOVER || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->nextState.lerp.eFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ))", (const char *)&queryFormat, "targetEnt->nextState.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL )") )
      __debugbreak();
    CM_BrushModelBounds(targetEnt->nextState.index.brushModel, _RDI);
  }
  else
  {
    v26 = Com_GetClientDObj(targetEnt->nextState.number, (LocalClientNum_t)v7);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 217, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    FirstModel = DObjGetFirstModel(v26);
    if ( !FirstModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    XModelGetBounds(FirstModel, _RDI);
  }
  __asm { vmovaps xmm6, [rsp+4C8h+var_48] }
}

/*
==============
AimTargetMP_IsTargetVisible
==============
*/
_BOOL8 AimTargetMP_IsTargetVisible(const LocalClientNum_t localClientNum, const centity_t *const cent, const workerTrace_t *const result)
{
  LerpEntityState *p_lerp; 
  bool v11; 
  cg_t *LocalClientGlobals; 
  char v17; 
  unsigned int Instance; 
  char v28; 
  _BOOL8 v29; 
  vec3_t outOrigin; 
  __int64 v35; 
  vec3_t outOrg; 
  vec3_t in; 
  vec3_t end; 
  vec3_t out; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  v35 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RDI = result;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 500, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 501, ASSERT_TYPE_ASSERT, "(result != nullptr)", (const char *)&queryFormat, "result != nullptr") )
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
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+68h]
    vmovss  dword ptr [rsp+0E8h+end], xmm6
    vmovss  xmm7, dword ptr [rdi+6Ch]
    vmovss  dword ptr [rsp+0E8h+end+4], xmm7
    vmovss  xmm8, dword ptr [rdi+70h]
    vmovss  dword ptr [rsp+0E8h+end+8], xmm8
    vmovss  xmm0, cs:__real@3f800000
    vucomiss xmm0, dword ptr [rdi]
  }
  if ( v17 || Trace_GetEntityHitId(&_RDI->trace) == cent->nextState.number )
  {
LABEL_18:
    *(double *)&_XMM0 = FX_GetClientVisibility(localClientNum, &outOrg, &end);
    __asm { vcomiss xmm0, cs:__real@38d1b717 }
    v11 = !v28;
    goto LABEL_19;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 1u) )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rdi]
      vsubss  xmm0, xmm6, dword ptr [rsp+0E8h+outOrg]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+outOrg]
      vmovss  dword ptr [rsp+0E8h+in], xmm2
      vsubss  xmm0, xmm7, dword ptr [rsp+0E8h+outOrg+4]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+outOrg+4]
      vmovss  dword ptr [rsp+0E8h+in+4], xmm2
      vsubss  xmm0, xmm8, dword ptr [rsp+0E8h+outOrg+8]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+outOrg+8]
      vmovss  dword ptr [rsp+0E8h+in+8], xmm2
    }
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    CM_TransformPoint(&in, &outOrigin, &cent->pose.angles, &out);
    Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * localClientNum + 2), cent->nextState.number, localClientNum);
    if ( !PhysicsQuery_LegacyGetEntityPointContents((Physics_WorldId)(3 * localClientNum + 2), &out, Instance, -1, cent->nextState.index.brushModel) )
    {
      memset(&outOrigin, 0, sizeof(outOrigin));
      v11 = 0;
      goto LABEL_19;
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    goto LABEL_18;
  }
LABEL_10:
  v11 = 0;
LABEL_19:
  Profile_EndInternal(NULL);
  v29 = v11;
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return v29;
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
  const dvar_t *v23; 
  const centity_t *Entity; 
  const cg_t *LocalClientGlobals; 
  unsigned __int8 v26; 
  TraceWorkerCmd cmd; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RSI = start;
  if ( ((unsigned __int8)workerResults & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 569, ASSERT_TYPE_ASSERT, "(((uintptr_t)workerResults & 127) == 0)", (const char *)&queryFormat, "((uintptr_t)workerResults & 127) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 570, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( ignoreEntCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_mp.cpp", 571, ASSERT_TYPE_ASSERT, "(ignoreEntCount <= 8)", (const char *)&queryFormat, "ignoreEntCount <= MAX_WORKER_IGNORE_ENTS") )
    __debugbreak();
  if ( workerResults->state == 1 )
    CG_WaitWorkerTrace(workerResults);
  CG_InitTraceCmd(localClientNum, &cmd);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi]
    vmovss  xmm7, dword ptr [rsi+4]
    vmovss  xmm6, dword ptr [rsi+8]
  }
  cmd.brushmask = contentMask;
  cmd.pointTrace.contentmask = contentMask;
  cmd.tracemask = (2 * staticModels) | 0x11;
  cmd.tagName = tagName;
  cmd.pointTrace.bLocational = locational;
  __asm
  {
    vmovss  dword ptr [rsp+1D0h+cmd.start], xmm8
    vmovss  dword ptr [rsp+1D0h+cmd.start+4], xmm7
    vmovss  dword ptr [rsp+1D0h+cmd.start+8], xmm6
  }
  cmd.entIndex = entIndex;
  cmd.pointTrace.bCalcDObjPose = 0;
  memcpy_0(cmd.pointTrace.ignoreEnts, ignoreEnts, 4i64 * ignoreEntCount);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
    vmovsd  xmm1, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
  }
  cmd.results = workerResults;
  __asm
  {
    vmovups xmmword ptr [rsp+1D0h+cmd.bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+1D0h+cmd.bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+0D0h+cmd.pointTrace.extents.start], xmm8
    vmovss  dword ptr [rbp+0D0h+cmd.pointTrace.extents.start+4], xmm7
    vmovss  dword ptr [rbp+0D0h+cmd.pointTrace.extents.start+8], xmm6
  }
  cmd.pointTrace.ignoreEntCount = ignoreEntCount;
  cmd.pointTrace.priorityMap = NULL;
  workerResults->state = 1;
  v23 = DCONST_DVARBOOL_aim_target_trace_async;
  if ( !DCONST_DVARBOOL_aim_target_trace_async && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_target_trace_async") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
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
      v26 = AimTargetMP_CalcTargetFlags(LocalClientGlobals, Entity);
      AimTargetMP_CreateTarget(cmd.localClientNum, Entity, (const AimTargetFlags)v26);
    }
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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

