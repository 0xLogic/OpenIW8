/*
==============
BG_Ladder_IsDualWieldingAllowed
==============
*/

bool __fastcall BG_Ladder_IsDualWieldingAllowed(const playerState_s *ps)
{
  return ?BG_Ladder_IsDualWieldingAllowed@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Ladder_CheckForLadderSlide
==============
*/

void __fastcall PM_Ladder_CheckForLadderSlide(pmove_t *pm, pml_t *pml)
{
  ?PM_Ladder_CheckForLadderSlide@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Ladder_CanClimb
==============
*/

bool __fastcall BG_Ladder_CanClimb(const playerState_s *ps)
{
  return ?BG_Ladder_CanClimb@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Ladder_GetChangeWeapon
==============
*/

bool __fastcall PM_Ladder_GetChangeWeapon(pmove_t *pm, const Weapon **outWeapon)
{
  return ?PM_Ladder_GetChangeWeapon@@YA_NPEAVpmove_t@@PEAPEBUWeapon@@@Z(pm, outWeapon);
}

/*
==============
BG_Ladder_GetDropType
==============
*/

LadderDrop __fastcall BG_Ladder_GetDropType(pmove_t *pm, const Weapon *newWeapon, const Weapon *oldWeapon)
{
  return ?BG_Ladder_GetDropType@@YA?AW4LadderDrop@@PEAVpmove_t@@AEBUWeapon@@1@Z(pm, newWeapon, oldWeapon);
}

/*
==============
PM_Ladder_ResolveCharacterCollision
==============
*/

void __fastcall PM_Ladder_ResolveCharacterCollision(pmove_t *pm, const BgAntiLagEntityInfo *entityInfo, const float ladderWidth)
{
  ?PM_Ladder_ResolveCharacterCollision@@YAXPEAVpmove_t@@PEBUBgAntiLagEntityInfo@@M@Z(pm, entityInfo, ladderWidth);
}

/*
==============
BG_Ladder_FinishLeftWeaponDrop
==============
*/

void __fastcall BG_Ladder_FinishLeftWeaponDrop(pmove_t *pm, pml_t *pml)
{
  ?BG_Ladder_FinishLeftWeaponDrop@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Ladder_GetTargetAnimationTime
==============
*/

double __fastcall BG_Ladder_GetTargetAnimationTime(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  double result; 

  *(float *)&result = ?BG_Ladder_GetTargetAnimationTime@@YAMAEBTvec3_t@@00M@Z(playerAnchorPos, ladderBottom, ladderTop, handDistance);
  return result;
}

/*
==============
PM_Ladder_ClampViewAngles
==============
*/

void __fastcall PM_Ladder_ClampViewAngles(pmove_t *pm, playerState_s *ps, LadderInfo *ladderInfo)
{
  ?PM_Ladder_ClampViewAngles@@YAXPEAVpmove_t@@PEAUplayerState_s@@PEAULadderInfo@@@Z(pm, ps, ladderInfo);
}

/*
==============
PM_Jump_PushOffLadder
==============
*/

void __fastcall PM_Jump_PushOffLadder(const pmove_t *pm, playerState_s *ps, pml_t *pml)
{
  ?PM_Jump_PushOffLadder@@YAXPEBVpmove_t@@PEAUplayerState_s@@PEAUpml_t@@@Z(pm, ps, pml);
}

/*
==============
PM_Ladder_CheckForLadderAim
==============
*/

void __fastcall PM_Ladder_CheckForLadderAim(pmove_t *pm, pml_t *pml)
{
  ?PM_Ladder_CheckForLadderAim@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Ladder_HideCrosshair
==============
*/

bool __fastcall BG_Ladder_HideCrosshair(const playerState_s *ps)
{
  return ?BG_Ladder_HideCrosshair@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Ladder_DropLowersWeapon
==============
*/

bool __fastcall BG_Ladder_DropLowersWeapon(LadderDrop dropType)
{
  return ?BG_Ladder_DropLowersWeapon@@YA_NW4LadderDrop@@@Z(dropType);
}

/*
==============
BG_Ladder_IsActive
==============
*/

bool __fastcall BG_Ladder_IsActive(const playerState_s *const ps)
{
  return ?BG_Ladder_IsActive@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Ladder_GetScrubOffset
==============
*/

double __fastcall BG_Ladder_GetScrubOffset(const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  double result; 

  *(float *)&result = ?BG_Ladder_GetScrubOffset@@YAMAEBTvec3_t@@0M@Z(ladderBottom, ladderTop, handDistance);
  return result;
}

/*
==============
PM_ClearLadderFlag
==============
*/

void __fastcall PM_ClearLadderFlag(const BgWeaponMap *weaponMap, playerState_s *ps)
{
  ?PM_ClearLadderFlag@@YAXPEBVBgWeaponMap@@PEAUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_Ladder_HandleAnimTransition
==============
*/

void __fastcall BG_Ladder_HandleAnimTransition(characterInfo_t *ci, const entityState_t *es)
{
  ?BG_Ladder_HandleAnimTransition@@YAXPEAUcharacterInfo_t@@PEBUentityState_t@@@Z(ci, es);
}

/*
==============
PM_Footstep_LadderMove
==============
*/

void __fastcall PM_Footstep_LadderMove(pmove_t *pm, pml_t *pml)
{
  ?PM_Footstep_LadderMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Ladder_GetAnchorWorldPosition
==============
*/

void __fastcall BG_Ladder_GetAnchorWorldPosition(const vec3_t *entityOrigin, int suitIndex, bool viewModel, vec3_t *outAnchorPos)
{
  ?BG_Ladder_GetAnchorWorldPosition@@YAXAEBTvec3_t@@H_NPEAT1@@Z(entityOrigin, suitIndex, viewModel, outAnchorPos);
}

/*
==============
BG_Ladder_CanAim
==============
*/

bool __fastcall BG_Ladder_CanAim(const Weapon *weapon, const playerState_s *ps, bool isAlternate)
{
  return ?BG_Ladder_CanAim@@YA_NAEBUWeapon@@PEBUplayerState_s@@_N@Z(weapon, ps, isAlternate);
}

/*
==============
BG_Ladder_GetDropStateTimeAnim
==============
*/

bool __fastcall BG_Ladder_GetDropStateTimeAnim(pmove_t *pm, LadderDrop dropType, const Weapon *currentWeapon, PlayerHandIndex hand, int *outWeaponState, int *outWeaponTime, int *outWeaponAnim)
{
  return ?BG_Ladder_GetDropStateTimeAnim@@YA_NPEAVpmove_t@@W4LadderDrop@@AEBUWeapon@@W4PlayerHandIndex@@AEAH44@Z(pm, dropType, currentWeapon, hand, outWeaponState, outWeaponTime, outWeaponAnim);
}

/*
==============
BG_GetLadderInfo
==============
*/

bool __fastcall BG_GetLadderInfo(const vec3_t *origin, const BgHandler *handler, LadderInfo *outLadderInfo, vec3_t *outToCenterTarget, bool printWarning, unsigned int *edgeLadderQueryHint, unsigned int *edgeWidthQueryHint)
{
  return ?BG_GetLadderInfo@@YA_NAEBTvec3_t@@PEBVBgHandler@@PEAULadderInfo@@PEAT1@_NPEAI5@Z(origin, handler, outLadderInfo, outToCenterTarget, printWarning, edgeLadderQueryHint, edgeWidthQueryHint);
}

/*
==============
BG_Ladder_GetTargetAnimationTimeClamped
==============
*/

double __fastcall BG_Ladder_GetTargetAnimationTimeClamped(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  double result; 

  *(float *)&result = ?BG_Ladder_GetTargetAnimationTimeClamped@@YAMAEBTvec3_t@@00M@Z(playerAnchorPos, ladderBottom, ladderTop, handDistance);
  return result;
}

/*
==============
BG_Ladder_CanAim
==============
*/

bool __fastcall BG_Ladder_CanAim(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_Ladder_CanAim@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon
==============
*/

bool __fastcall BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon(const playerState_s *ps, const WeaponSlot currentWeaponSlot, const Weapon *currentWeapon, const Weapon *newWeapon)
{
  return ?BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon@@YA_NPEBUplayerState_s@@W4WeaponSlot@@AEBUWeapon@@2@Z(ps, currentWeaponSlot, currentWeapon, newWeapon);
}

/*
==============
BG_Ladder_GetHandAnimDistance
==============
*/

double __fastcall BG_Ladder_GetHandAnimDistance(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_Ladder_GetHandAnimDistance@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_Ladder_DropSkipsAnim
==============
*/

bool __fastcall BG_Ladder_DropSkipsAnim(LadderDrop dropType)
{
  return ?BG_Ladder_DropSkipsAnim@@YA_NW4LadderDrop@@@Z(dropType);
}

/*
==============
PM_LadderMove
==============
*/

void __fastcall PM_LadderMove(pmove_t *pm, pml_t *pml)
{
  ?PM_LadderMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Ladder_IsHandLadderDropping
==============
*/

bool __fastcall BG_Ladder_IsHandLadderDropping(const LadderDrop ladderDrop, const PlayerHandIndex hand)
{
  return ?BG_Ladder_IsHandLadderDropping@@YA_NW4LadderDrop@@W4PlayerHandIndex@@@Z(ladderDrop, hand);
}

/*
==============
BG_Ladder_MantleDropTime
==============
*/

int __fastcall BG_Ladder_MantleDropTime(const playerState_s *ps)
{
  return ?BG_Ladder_MantleDropTime@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_CheckLadderMove
==============
*/

void __fastcall PM_CheckLadderMove(pmove_t *pm, pml_t *pml)
{
  ?PM_CheckLadderMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_GetLadderInfo
==============
*/
bool BG_GetLadderInfo(const vec3_t *origin, const BgHandler *handler, LadderInfo *outLadderInfo, vec3_t *outToCenterTarget, bool printWarning, unsigned int *edgeLadderQueryHint, unsigned int *edgeWidthQueryHint)
{
  const BgHandler *v17; 
  bool v19; 
  int v21; 
  bool v22; 
  unsigned int v23; 
  EdgeId v26; 
  bool result; 
  int v38; 
  const BgHandler *v39; 
  EdgeId *v40; 
  char v41; 
  char v59; 
  char v60; 
  char v126; 
  char v127; 
  unsigned __int64 v198; 
  __int64 v199; 
  char v200; 
  char *fmt; 
  char *fmta; 
  unsigned __int64 resultPoolSize; 
  unsigned __int64 resultPoolSizea; 
  unsigned __int64 *outResultCount; 
  EdgeId edgeId; 
  unsigned __int64 v240; 
  vec3_t *angles; 
  unsigned int *outHintNodeIndex; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v243; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v244; 
  vec3_t handlera; 
  EdgeOctreeQuerySphere v246; 
  EdgeOctreeQuerySphere v247; 
  vec3_t v248[2]; 
  vec3_t outNormal0; 
  vec3_t outNormal1; 
  vec3_t outLineSegment[2]; 
  vec3_t v252[2]; 
  EdgeId resultIdPool[16]; 
  float resultFractionPool[16]; 

  _R14 = outToCenterTarget;
  _RDI = outLadderInfo;
  outHintNodeIndex = edgeWidthQueryHint;
  v17 = handler;
  *(_QWORD *)handlera.v = handler;
  angles = (vec3_t *)origin;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 169, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 170, ASSERT_TYPE_ASSERT, "(outLadderInfo)", (const char *)&queryFormat, "outLadderInfo") )
    __debugbreak();
  if ( !edgeLadderQueryHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 171, ASSERT_TYPE_ASSERT, "(edgeLadderQueryHint)", (const char *)&queryFormat, "edgeLadderQueryHint") )
    __debugbreak();
  if ( !edgeWidthQueryHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 172, ASSERT_TYPE_ASSERT, "(edgeWidthQueryHint)", (const char *)&queryFormat, "edgeWidthQueryHint") )
    __debugbreak();
  v19 = v17->RequiresScriptMoverLadderChecks((BgHandler *)v17);
  __asm { vmovss  xmm2, cs:?LADDER_LINE_QUERY_DISTANCE@@3MA; radius }
  v21 = 0;
  v240 = 0i64;
  v22 = v19;
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v246, origin, *(float *)&_XMM2);
  v243.m_hint = *edgeLadderQueryHint;
  v243.m_queryShape = &v246;
  v23 = 0;
  v243.m_bucket = LADDER_CENTERLINE;
  if ( v22 )
    v23 = 1;
  v243.m_flags = v23;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v243, v17, resultIdPool, resultFractionPool, NULL, 0x10ui64, &v240, edgeLadderQueryHint);
  *(_QWORD *)_RDI->axis.row2.v = 0i64;
  _R12 = (LadderInfo *)&_RDI->axis.row2;
  _RDI->axis.m[2].v[2] = 1.0;
  _R13 = &_RDI->top;
  *(_QWORD *)_RDI->bottom.v = 0i64;
  _RDI->bottom.v[2] = 0.0;
  *(_QWORD *)_RDI->top.v = 0i64;
  _RDI->top.v[2] = 0.0;
  _RDI->rungDistance = 12.0;
  EdgeId::Clear(&edgeId);
  v26 = edgeId;
  if ( v240 )
    v26 = resultIdPool[0];
  edgeId = v26;
  if ( v240 )
  {
    __asm
    {
      vmovaps [rsp+3D0h+var_50], xmm6
      vmovaps [rsp+3D0h+var_60], xmm7
      vmovaps [rsp+3D0h+var_70], xmm8
      vmovaps [rsp+3D0h+var_80], xmm9
      vmovaps [rsp+3D0h+var_90], xmm10
      vmovaps [rsp+3D0h+var_A0], xmm11
      vmovaps [rsp+3D0h+var_B0], xmm12
      vmovaps [rsp+3D0h+var_C0], xmm13
      vmovss  xmm12, cs:__real@80000000
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm11, cs:__real@3f800000
    }
    if ( v240 > 1 )
    {
      v38 = 0;
      v39 = *(const BgHandler **)handlera.v;
      v40 = resultIdPool;
      do
      {
        edgeId = *v40;
        Edge_GetLineSegment(v39, edgeId, (vec3_t (*)[2])outLineSegment);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2D0h+outLineSegment]
          vsubss  xmm3, xmm0, dword ptr [rbp+2D0h+outLineSegment+0Ch]
          vmovss  xmm1, dword ptr [rbp+2D0h+outLineSegment+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+2D0h+outLineSegment+10h]
          vmovss  xmm0, dword ptr [rbp+2D0h+outLineSegment+8]
          vsubss  xmm4, xmm0, dword ptr [rbp+2D0h+outLineSegment+14h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm3, cs:?LADDER_ALIGNMENT_THRESHOLD@@3MA; float LADDER_ALIGNMENT_THRESHOLD
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm12
          vblendvps xmm0, xmm1, xmm11, xmm0
          vdivss  xmm2, xmm4, xmm0
          vcomiss xmm2, xmm3
        }
        if ( !(v41 | v60) )
          break;
        __asm
        {
          vxorps  xmm0, xmm3, xmm10
          vcomiss xmm2, xmm0
        }
        if ( v41 )
          break;
        ++v38;
        ++v40;
      }
      while ( v38 < v240 );
      v26 = edgeId;
      _R13 = &_RDI->top;
      v17 = *(const BgHandler **)handlera.v;
    }
    Edge_GetLineSegment(v17, v26, (vec3_t (*)[2])v248);
    Edge_CalculateNormals(v17, edgeId, &outNormal0, &outNormal1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2D0h+outNormal0]
      vaddss  xmm5, xmm0, dword ptr [rbp+2D0h+outNormal1]
      vmovss  xmm1, dword ptr [rbp+2D0h+outNormal1+4]
      vaddss  xmm6, xmm1, dword ptr [rbp+2D0h+outNormal0+4]
      vmovss  xmm0, dword ptr [rbp+2D0h+outNormal1+8]
      vaddss  xmm4, xmm0, dword ptr [rbp+2D0h+outNormal0+8]
      vmovss  xmm9, dword ptr [rbp+2D0h+var_1F0+4]
      vmovss  xmm7, dword ptr [rbp+2D0h+var_1F0+0Ch]
      vmovss  xmm8, dword ptr [rbp+2D0h+var_1F0]
      vmovss  xmm13, dword ptr [rbp+2D0h+var_1F0+8]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm2, xmm5
      vmovss  xmm5, dword ptr [rbp+2D0h+var_1F0+14h]
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rdi+8], xmm0
      vmulss  xmm1, xmm2, xmm6
      vmovss  xmm6, dword ptr [rbp+2D0h+var_1F0+10h]
      vmovss  dword ptr [rdi+4], xmm1
      vsubss  xmm0, xmm6, xmm9
      vmovss  dword ptr [r12+4], xmm0
      vmulss  xmm0, xmm0, xmm0
      vsubss  xmm3, xmm5, xmm13
      vmovss  dword ptr [r12+8], xmm3
      vsubss  xmm4, xmm7, xmm8
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [r12], xmm0
      vmulss  xmm1, xmm2, dword ptr [r12+4]
      vmovss  dword ptr [r12+4], xmm1
      vmulss  xmm2, xmm2, dword ptr [r12+8]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
      vmovss  dword ptr [r12+8], xmm2
      vmovss  xmm1, dword ptr [r12]
    }
    if ( v59 )
    {
      __asm
      {
        vxorps  xmm0, xmm1, xmm10
        vmovss  dword ptr [r12], xmm0
        vmovss  xmm1, dword ptr [rdi+1Ch]
        vxorps  xmm2, xmm1, xmm10
        vmovss  dword ptr [r12+4], xmm2
        vmovss  xmm0, dword ptr [rdi+20h]
        vxorps  xmm1, xmm0, xmm10
        vmovss  dword ptr [r12+8], xmm1
        vmovaps xmm1, xmm8
        vmovaps xmm2, xmm13
        vmovaps xmm0, xmm9
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm2, xmm5
        vmovaps xmm0, xmm6
        vmovaps xmm1, xmm7
        vmovaps xmm5, xmm13
        vmovaps xmm6, xmm9
        vmovaps xmm7, xmm8
      }
    }
    __asm
    {
      vmovss  dword ptr [rdi+24h], xmm7
      vmovss  dword ptr [rdi+28h], xmm6
      vmovss  dword ptr [rdi+2Ch], xmm5
      vmovss  dword ptr [r13+0], xmm1
      vmovss  dword ptr [r13+4], xmm0
      vmovss  dword ptr [r13+8], xmm2
      vmovss  xmm1, dword ptr [r13+8]
      vsubss  xmm3, xmm1, dword ptr [rdi+2Ch]
      vcomiss xmm3, cs:?LADDER_ALIGNMENT_THRESHOLD@@3MA; float LADDER_ALIGNMENT_THRESHOLD
      vmovss  xmm9, dword ptr [r13+0]
      vmovss  xmm0, dword ptr [r13+4]
      vsubss  xmm2, xmm9, dword ptr [rdi+24h]
      vsubss  xmm4, xmm0, dword ptr [rdi+28h]
      vmovaps xmm13, [rsp+3D0h+var_C0]
    }
    if ( v59 | v60 )
    {
      if ( _R14 )
      {
        *(_QWORD *)_R14->v = 0i64;
        _R14->v[2] = 0.0;
      }
      result = 0;
    }
    else
    {
      __asm
      {
        vmovss  xmm8, cs:__real@41400000
        vmulss  xmm1, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm7, xmm2, xmm2
        vmovaps xmm0, xmm7; X
        vmovaps xmm1, xmm8; Y
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vcomiss xmm0, cs:__real@34000000
        vmovaps xmm2, xmm0
      }
      if ( !v126 )
      {
        __asm
        {
          vcomiss xmm2, cs:__real@40c00000
          vmulss  xmm0, xmm7, cs:__real@3daaaaab
          vxorps  xmm6, xmm6, xmm6
        }
        if ( v126 )
          __asm { vroundss xmm6, xmm6, xmm0, 1 }
        else
          __asm { vroundss xmm6, xmm6, xmm0, 2 }
        __asm { vcomiss xmm2, xmm11 }
        if ( !(v126 | v127) )
          goto LABEL_43;
        __asm { vcomiss xmm2, cs:__real@41300000 }
        if ( v126 )
        {
LABEL_43:
          if ( printWarning )
          {
            __asm
            {
              vmovss  xmm3, dword ptr [rdi+34h]
              vmovss  xmm4, dword ptr [rdi+38h]
              vmovsd  xmm0, cs:__real@4028000000000000
              vmovsd  [rsp+3D0h+outResultCount], xmm0
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm1, xmm7, xmm7
              vcvtss2sd xmm2, xmm9, xmm9
              vcvtss2sd xmm4, xmm4, xmm4
              vmovsd  [rsp+3D0h+resultPoolSize], xmm1
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovsd  [rsp+3D0h+fmt], xmm4
            }
            Com_PrintWarning(34, "WARNING: player is using a ladder %0.2f %0.2f %0.2f with segment length (%0.2f) that is not a multiple of %0.2f.  Dynamically resizing the ladder. \n", _R8, _R9, fmt, resultPoolSize, outResultCount);
          }
        }
        __asm
        {
          vmulss  xmm2, xmm6, xmm8
          vmulss  xmm0, xmm2, dword ptr [r12]
          vaddss  xmm1, xmm0, dword ptr [rdi+24h]
          vmovss  dword ptr [r13+0], xmm1
          vmulss  xmm0, xmm2, dword ptr [r12+4]
          vaddss  xmm1, xmm0, dword ptr [rdi+28h]
          vmovss  dword ptr [r13+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [r12+8]
          vaddss  xmm1, xmm0, dword ptr [rdi+2Ch]
          vmovss  dword ptr [r13+8], xmm1
        }
      }
      if ( _R14 )
      {
        _RAX = angles;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm1, xmm0, dword ptr [rbp+2D0h+var_1F0]
          vmovss  xmm2, dword ptr [rax+4]
          vsubss  xmm0, xmm2, dword ptr [rbp+2D0h+var_1F0+4]
          vmovss  dword ptr [rbp+2D0h+handler], xmm1
          vmovss  xmm1, dword ptr [rax+8]
          vsubss  xmm2, xmm1, dword ptr [rbp+2D0h+var_1F0+8]
          vmovss  [rbp+2D0h+var_338], xmm2
          vmovss  dword ptr [rbp+2D0h+handler+4], xmm0
        }
        ProjectPointOnPlane(&handlera, _RDI->axis.m, &handlera);
        __asm
        {
          vmovss  xmm5, dword ptr [r12]
          vmovss  xmm8, dword ptr [r12+4]
          vmovss  xmm9, dword ptr [r12+8]
          vmulss  xmm1, xmm5, dword ptr [rbp+2D0h+handler]
          vmulss  xmm0, xmm8, dword ptr [rbp+2D0h+handler+4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, [rbp+2D0h+var_338]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm3, xmm5
          vsubss  xmm2, xmm0, dword ptr [rbp+2D0h+handler]
          vmulss  xmm1, xmm3, xmm8
          vsubss  xmm0, xmm1, dword ptr [rbp+2D0h+handler+4]
          vmovss  dword ptr [r14], xmm2
          vmulss  xmm2, xmm3, xmm9
          vsubss  xmm1, xmm2, [rbp+2D0h+var_338]
          vmovss  dword ptr [r14+8], xmm1
          vmovss  dword ptr [r14+4], xmm0
        }
      }
      _RBX = (LadderInfo *)&_RDI->axis.row1;
      if ( _R12 == (LadderInfo *)&_RDI->axis.row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( _RDI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r12+4]
        vmulss  xmm3, xmm0, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rdi+4]
        vmulss  xmm2, xmm1, dword ptr [r12+8]
        vsubss  xmm6, xmm3, xmm2
        vmovss  dword ptr [rbx], xmm6
        vmovss  xmm0, dword ptr [rdi]
        vmulss  xmm3, xmm0, dword ptr [r12+8]
        vmovss  xmm1, dword ptr [r12]
        vmulss  xmm2, xmm1, dword ptr [rdi+8]
        vsubss  xmm5, xmm3, xmm2
        vmovss  dword ptr [rbx+4], xmm5
        vmovss  xmm0, dword ptr [rdi+4]
        vmulss  xmm3, xmm0, dword ptr [r12]
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm2, xmm1, dword ptr [r12+4]
        vsubss  xmm4, xmm3, xmm2
        vmovss  dword ptr [rbx+8], xmm4
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm12
        vblendvps xmm0, xmm3, xmm11, xmm0
        vdivss  xmm2, xmm11, xmm0
        vmulss  xmm0, xmm2, xmm6
        vmovss  dword ptr [rbx], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm0
      }
      _RDI->width = 15.2496;
      __asm { vmovss  xmm2, cs:?LADDER_WIDTH_QUERY_DISTANCE@@3MA; radius }
      EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v247, _R13, *(float *)&_XMM2);
      v244.m_queryShape = &v247;
      v244.m_flags = 1;
      v244.m_hint = *outHintNodeIndex;
      v244.m_bucket = LADDER_CENTERLINE;
      EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v244, v17, resultIdPool, resultFractionPool, NULL, 0x10ui64, &v240, outHintNodeIndex);
      v198 = v240;
      if ( v240 )
      {
        v199 = 0i64;
        while ( 1 )
        {
          Edge_GetLineSegment(v17, resultIdPool[v199], (vec3_t (*)[2])v252);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+2D0h+var_1A8]
            vsubss  xmm3, xmm0, dword ptr [rbp+2D0h+var_1A8+0Ch]
            vmovss  xmm1, dword ptr [rbp+2D0h+var_1A8+4]
            vsubss  xmm2, xmm1, dword ptr [rbp+2D0h+var_1A8+10h]
            vmovss  xmm0, dword ptr [rbp+2D0h+var_1A8+8]
            vsubss  xmm4, xmm0, dword ptr [rbp+2D0h+var_1A8+14h]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm3, xmm2, xmm1
            vmovss  xmm2, cs:?LADDER_ALIGNMENT_THRESHOLD@@3MA; float LADDER_ALIGNMENT_THRESHOLD
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm3, xmm0
            vsqrtss xmm5, xmm3, xmm3
            vcmpless xmm0, xmm5, xmm12
            vblendvps xmm0, xmm5, xmm11, xmm0
            vdivss  xmm1, xmm4, xmm0
            vcomiss xmm1, xmm2
          }
          if ( v200 | v60 )
          {
            __asm
            {
              vxorps  xmm0, xmm2, xmm10
              vcomiss xmm1, xmm0
            }
            if ( !v200 )
              break;
          }
          v199 = ++v21;
          if ( v21 >= v198 )
            goto LABEL_59;
        }
        __asm { vcomiss xmm3, cs:__real@43688ce1 }
        if ( v200 )
          __asm { vmovss  dword ptr [rdi+3Ch], xmm5 }
      }
      else
      {
LABEL_59:
        if ( printWarning )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+34h]
            vmovss  xmm2, dword ptr [r13+0]
            vmovss  xmm1, dword ptr [rdi+38h]
            vmovsd  xmm0, cs:__real@402e7fcba0000000
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+3D0h+resultPoolSize], xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+3D0h+fmt], xmm1
          }
          Com_PrintWarning(34, "WARNING: Ladder at %0.2f %0.2f %0.2f has no width edge segment.  Using default %0.2f \n", _R8, _R9, fmta, resultPoolSizea);
        }
      }
      result = 1;
    }
    __asm
    {
      vmovaps xmm11, [rsp+3D0h+var_A0]
      vmovaps xmm10, [rsp+3D0h+var_90]
      vmovaps xmm9, [rsp+3D0h+var_80]
      vmovaps xmm8, [rsp+3D0h+var_70]
      vmovaps xmm7, [rsp+3D0h+var_60]
      vmovaps xmm6, [rsp+3D0h+var_50]
      vmovaps xmm12, [rsp+3D0h+var_B0]
    }
  }
  else
  {
    if ( printWarning )
      Com_PrintWarning(34, "WARNING: player using ladder that has no line tagging, have level design use line tagging. See mp_firingrange.\n");
    if ( _R14 )
    {
      *(_QWORD *)_R14->v = 0i64;
      _R14->v[2] = 0.0;
    }
    AnglesToAxis(angles, &_RDI->axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm2
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vxorps  xmm0, xmm1, xmm2
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rdi+8]
      vxorps  xmm0, xmm1, xmm2
      vmovss  dword ptr [rdi+8], xmm0
    }
    return 0;
  }
  return result;
}

/*
==============
BG_Ladder_CanAim
==============
*/
char BG_Ladder_CanAim(const Weapon *weapon, const playerState_s *ps, bool isAlternate)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  LadderMode mode; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 798, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 0;
  v7 = DCONST_DVARMPBOOL_ladderEnableWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && BG_IsLadderWeapon(weapon, isAlternate) && BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && (mode = ps->ladderState.mode, (mode & 0xFFFFFFFC) == 0) && mode != LADDER_MODE_CLIMB )
    return 1;
  else
    return 0;
}

/*
==============
BG_Ladder_CanAim
==============
*/
bool BG_Ladder_CanAim(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *ViewmodelWeapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  return BG_Ladder_CanAim(ViewmodelWeapon, ps, 0);
}

/*
==============
BG_Ladder_CanClimb
==============
*/
bool BG_Ladder_CanClimb(const playerState_s *ps)
{
  const dvar_t *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 831, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && ps->ladderState.mode <= (unsigned int)LADDER_MODE_CRESTING;
}

/*
==============
BG_Ladder_DropLowersWeapon
==============
*/
bool BG_Ladder_DropLowersWeapon(LadderDrop dropType)
{
  return dropType != LADDER_DROP_INIT_WEAPON && (unsigned int)(dropType - 11) > 1;
}

/*
==============
BG_Ladder_DropSkipsAnim
==============
*/
bool BG_Ladder_DropSkipsAnim(LadderDrop dropType)
{
  return dropType == LADDER_DROP_NONE || dropType == LADDER_DROP_RELAXED_PISTOL_DEMEANOR;
}

/*
==============
BG_Ladder_FinishLeftWeaponDrop
==============
*/
void BG_Ladder_FinishLeftWeaponDrop(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponAnimNumber v7; 
  bool v8; 
  int v9; 
  bool v10; 
  bool v11; 
  float fmt; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 747, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 748, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 750, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 750, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( BG_Ladder_CanAim(CurrentWeaponForPlayer, ps, 0) )
  {
    v7 = WEAP_QUICK_RAISE;
    if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler) )
      v7 = WEAP_RAISE_LADDER_CLIMB;
    v8 = BG_UsingAlternate(ps);
    v9 = BG_LadderAimRaiseTime(ps, CurrentWeaponForPlayer, v8, 0);
  }
  else
  {
    v7 = WEAP_QUICK_RAISE;
    if ( BG_Ladder_CanClimb(ps) )
    {
      if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler) )
        v7 = WEAP_RAISE_LADDER_CLIMB;
      v10 = BG_UsingAlternate(ps);
      v9 = BG_LadderClimbRaiseTime(ps, CurrentWeaponForPlayer, v10, 0);
    }
    else
    {
      v11 = BG_UsingAlternate(ps);
      v9 = BG_LadderAimRaiseTime(ps, CurrentWeaponForPlayer, v11, 0) / 2;
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+48h+fmt], xmm0
  }
  PM_Weapon_BeginWeaponRaise(pm, pml, v7, v9, fmt, 0, WEAPON_HAND_LEFT, ps->weapState[1].weaponState);
}

/*
==============
BG_Ladder_GetAnchorWorldPosition
==============
*/
void BG_Ladder_GetAnchorWorldPosition(const vec3_t *entityOrigin, int suitIndex, bool viewModel, vec3_t *outAnchorPos)
{
  _RBX = outAnchorPos;
  _RSI = entityOrigin;
  if ( !outAnchorPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1911, ASSERT_TYPE_ASSERT, "(outAnchorPos)", (const char *)&queryFormat, "outAnchorPos") )
    __debugbreak();
  if ( !BG_GetSuitDef(suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _RBX->v[0] = _RSI->v[0];
  _RBX->v[1] = _RSI->v[1];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  if ( viewModel )
    __asm { vaddss  xmm0, xmm0, dword ptr [rdi+1A4h] }
  else
    __asm { vaddss  xmm0, xmm0, dword ptr [rdi+1A8h] }
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
}

/*
==============
BG_Ladder_GetDropStateTimeAnim
==============
*/
char BG_Ladder_GetDropStateTimeAnim(pmove_t *pm, LadderDrop dropType, const Weapon *currentWeapon, PlayerHandIndex hand, int *outWeaponState, int *outWeaponTime, int *outWeaponAnim)
{
  playerState_s *ps; 
  int v12; 
  bool v13; 
  int v14; 
  bool v15; 
  int v16; 
  bool v17; 
  bool v18; 
  bool v19; 
  int v20; 
  bool v21; 
  int v22; 
  int v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v28; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 494, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 494, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  switch ( dropType )
  {
    case LADDER_DROP_NONE:
      return 0;
    case LADDER_DROP_AKIMBO:
    case LADDER_DROP_AIM_RAISE_CHANGE:
      goto $LN52_1;
    case LADDER_DROP_CLIP_EMPTY:
      if ( hand )
      {
        *outWeaponState = 47;
        v12 = 68;
        *outWeaponTime = 0;
      }
      else
      {
        *outWeaponState = 7;
        v12 = 28;
        v13 = BG_UsingAlternate(ps);
        *outWeaponTime = BG_LadderClimbDropTime(ps, currentWeapon, v13, 0);
      }
      break;
    case LADDER_DROP_SLIDE:
      *outWeaponState = 14;
      goto LABEL_46;
    case LADDER_DROP_TOP_VIGNETTE:
      v14 = 7;
      v12 = 28;
      if ( hand )
        v12 = 54;
      if ( hand )
        v14 = 50;
      goto LABEL_16;
    case LADDER_DROP_VAULT:
      *outWeaponState = 50;
      v17 = BG_UsingAlternate(ps);
      *outWeaponTime = BG_LadderVaultTime(ps, currentWeapon, v17, 0);
      v12 = 54;
      break;
    case LADDER_DROP_VAULT_AIM:
      if ( hand )
      {
        *outWeaponState = 50;
        v12 = 54;
        v18 = BG_UsingAlternate(ps);
        *outWeaponTime = BG_LadderVaultTime(ps, currentWeapon, v18, 0);
      }
      else
      {
        *outWeaponState = 0;
        v12 = 0;
        *outWeaponTime = 1;
      }
      break;
    case LADDER_DROP_VAULT_CHANGE:
      if ( hand )
      {
        *outWeaponState = 50;
        v12 = 54;
        v21 = BG_UsingAlternate(ps);
        v20 = BG_LadderVaultTime(ps, currentWeapon, v21, 0);
      }
      else
      {
        *outWeaponState = 7;
        v12 = 28;
        v19 = BG_UsingAlternate(ps);
        v20 = BG_LadderClimbDropTime(ps, currentWeapon, v19, 0);
      }
      *outWeaponTime = v20;
      break;
    case LADDER_DROP_INIT_WEAPON:
      v22 = 46;
      if ( hand )
        v22 = 28;
      v12 = v22;
      v23 = 13;
      if ( hand )
        v23 = 7;
      goto LABEL_29;
    case LADDER_DROP_INIT_CHANGE:
      *outWeaponState = 7;
      v25 = BG_UsingAlternate(ps);
      v16 = BG_QuickDropTime(ps, currentWeapon, v25, 0);
      goto LABEL_47;
    case LADDER_DROP_CLIMB:
      if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_DROP, pm->m_bgHandler) )
      {
        v12 = 41;
        v14 = 12;
      }
      else
      {
        v12 = 28;
        v14 = 7;
      }
LABEL_16:
      *outWeaponState = v14;
      v15 = BG_UsingAlternate(ps);
      v16 = BG_LadderClimbDropTime(ps, currentWeapon, v15, 0);
      goto LABEL_48;
    case LADDER_DROP_WEAPON_CLIMB:
      v12 = 47;
      if ( hand )
        v12 = 41;
      v23 = 6;
      if ( hand )
        v23 = 12;
LABEL_29:
      *outWeaponState = v23;
      v24 = BG_UsingAlternate(ps);
      v16 = BG_LadderClimbDropTime(ps, currentWeapon, v24, 0);
      goto LABEL_48;
    case LADDER_DROP_AIM:
      if ( hand )
        goto LABEL_42;
      *outWeaponState = 0;
      v12 = 0;
      *outWeaponTime = 1;
      break;
    case LADDER_DROP_AIM_CHANGE:
      if ( hand )
        goto LABEL_42;
      goto $LN52_1;
    default:
LABEL_42:
      if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_DROP, pm->m_bgHandler) )
      {
        *outWeaponState = 12;
        v26 = BG_UsingAlternate(ps);
        *outWeaponTime = BG_LadderClimbDropTime(ps, currentWeapon, v26, 0);
        v12 = 41;
      }
      else
      {
$LN52_1:
        *outWeaponState = 7;
LABEL_46:
        v28 = BG_UsingAlternate(ps);
        v16 = BG_LadderClimbDropTime(ps, currentWeapon, v28, 0);
LABEL_47:
        v12 = 28;
LABEL_48:
        *outWeaponTime = v16;
      }
      break;
  }
  *outWeaponAnim = v12;
  return 1;
}

/*
==============
BG_Ladder_GetDropType
==============
*/
__int64 BG_Ladder_GetDropType(pmove_t *pm, const Weapon *newWeapon, const Weapon *oldWeapon)
{
  playerState_s *ps; 
  unsigned int weaponIdx; 
  bool v8; 
  bool v9; 
  BgWeaponMap *weaponMap; 
  int EquippedWeaponIndex; 
  __int64 v12; 
  BOOL dualWielding; 
  __int64 result; 
  unsigned __int64 weaponState; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  __int64 v21; 
  bool v22; 
  __int64 v23; 
  bool v24; 
  WeaponDef *v25; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 398, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 398, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_UsingAlternate(ps);
  weaponIdx = oldWeapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v23) = oldWeapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v23, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v25 = bg_weaponDefs[(unsigned __int16)weaponIdx];
  v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  v9 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u);
  weaponMap = pm->weaponMap;
  v24 = v9;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(ps) )
    goto LABEL_35;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1989, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu) )
    goto LABEL_35;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !oldWeapon->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, oldWeapon), EquippedWeaponIndex < 0) || (v12 = EquippedWeaponIndex, (playerState_s *)((char *)ps + 4 * v12) == (playerState_s *)-1540i64) )
LABEL_35:
    dualWielding = 0;
  else
    dualWielding = ps->weapEquippedData[v12].dualWielding;
  if ( !v8 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u) )
    return 0i64;
  weaponState = ps->weapState[0].weaponState;
  v16 = ps->weapState[1].weaponState;
  if ( v8 && dualWielding && ps->ladderState.mode == LADDER_MODE_CLIMB )
    return 1i64;
  if ( v24 && ps->ladderState.mode == LADDER_MODE_CRESTING && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu) )
    return 4i64;
  if ( ps->ladderState.mode == LADDER_MODE_VAULTING && (!BG_IsLadderWeapon(oldWeapon, 0) || !BG_GetAmmoInClip(ps, oldWeapon, 0, WEAPON_HAND_DEFAULT)) )
    return 5i64;
  v17 = 0x1000000002040i64;
  if ( ps->ladderState.mode == LADDER_MODE_VAULTING && (unsigned int)weaponState <= 0x30 && _bittest64(&v17, weaponState) && !memcmp_0(newWeapon, oldWeapon, 0x3Cui64) )
    return 6i64;
  if ( !v8 && v16 == 49 || (_DWORD)weaponState == 49 )
    return 3i64;
  if ( v8 && v24 && BG_IsLadderWeapon(oldWeapon, 0) && !BG_GetAmmoInClip(ps, oldWeapon, 0, WEAPON_HAND_DEFAULT) )
    return 2i64;
  if ( ps->ladderState.mode == LADDER_MODE_VAULTING )
    return 7i64;
  if ( v8 )
  {
    if ( BG_Demeanor_IsPlaying(ps) && BG_Demeanor_GetTargetState(ps) == DEMEANOR_STATE_RELAXED && BG_Gesture_IsPlaying(ps, ps->serverTime, 1) && v25->ladderWeapon )
      return 15i64;
    if ( !memcmp_0(newWeapon, oldWeapon, 0x3Cui64) && BG_IsLadderWeapon(newWeapon, 0) && BG_GetAmmoInClip(ps, newWeapon, 0, WEAPON_HAND_DEFAULT) )
      return 8i64;
    if ( memcmp_0(newWeapon, oldWeapon, 0x3Cui64) || !BG_IsLadderWeapon(newWeapon, 0) || BG_IsLadderWeapon(newWeapon, 0) && !BG_GetAmmoInClip(ps, newWeapon, 0, WEAPON_HAND_DEFAULT) )
      return 9i64;
    return 10i64;
  }
  if ( (unsigned int)weaponState <= 0x2F )
  {
    v18 = 0x800000003060i64;
    if ( _bittest64(&v18, weaponState) )
    {
      if ( BG_IsLadderWeapon(oldWeapon, 0) && !memcmp_0(newWeapon, oldWeapon, 0x3Cui64) )
      {
        v19 = BG_UsingAlternate(ps);
        if ( BG_GetAmmoInClip(ps, oldWeapon, v19, WEAPON_HAND_DEFAULT) )
          return 11i64;
      }
    }
    if ( (unsigned int)weaponState <= 0x2F )
    {
      v20 = 0x800000001020i64;
      if ( _bittest64(&v20, weaponState) )
        return 10i64;
    }
  }
  if ( (unsigned int)weaponState <= 0x30 && _bittest64(&v17, weaponState) && !memcmp_0(newWeapon, oldWeapon, 0x3Cui64) )
    return 12i64;
  v21 = 0x1000000002041i64;
  if ( (unsigned int)weaponState > 0x30 )
    return 10i64;
  if ( _bittest64(&v21, weaponState) && v16 == 1 && memcmp_0(newWeapon, oldWeapon, 0x3Cui64) )
    return 13i64;
  if ( (unsigned int)weaponState > 0x30 )
    return 10i64;
  if ( !_bittest64(&v21, weaponState) )
    return 10i64;
  v22 = memcmp_0(newWeapon, oldWeapon, 0x3Cui64) == 0;
  result = 14i64;
  if ( v22 )
    return 10i64;
  return result;
}

/*
==============
BG_Ladder_GetHandAnimDistance
==============
*/
float BG_Ladder_GetHandAnimDistance(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_GetSuitDef(ps->suitIndex);
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm { vmovss  xmm0, dword ptr [rax+1ACh] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1903, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+1ACh] }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Ladder_GetScrubOffset
==============
*/

float __fastcall BG_Ladder_GetScrubOffset(const vec3_t *ladderBottom, const vec3_t *ladderTop, double handDistance)
{
  char v17; 
  char v18; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm4, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm3, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm5, xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm0, xmm4, xmm0; X
    vmovaps [rsp+38h+var_18], xmm6
    vmulss  xmm1, xmm2, xmm2; Y
    vmovaps xmm6, xmm2
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( v17 | v18 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3f000000
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Ladder_GetTargetAnimationTime
==============
*/

float __fastcall BG_Ladder_GetTargetAnimationTime(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, double handDistance)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovaps [rsp+48h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rdx+8]
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm2, xmm3; handDistance
    vmovaps xmm7, xmm3
  }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vdivss  xmm2, xmm1, xmm7
    vmovaps xmm7, [rsp+48h+var_28]
    vaddss  xmm4, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmulss  xmm3, xmm4, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm3, 1
    vsubss  xmm0, xmm3, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Ladder_GetTargetAnimationTimeClamped
==============
*/

float __fastcall BG_Ladder_GetTargetAnimationTimeClamped(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, double handDistance)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = playerAnchorPos;
  __asm
  {
    vmovaps xmm2, xmm3; handDistance
    vmovaps xmm6, xmm3
  }
  BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+8]
    vminss  xmm2, xmm1, dword ptr [rdi+8]
    vsubss  xmm4, xmm2, dword ptr [rsi+8]
    vaddss  xmm5, xmm4, xmm0
    vmovss  xmm0, cs:__real@3f000000
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm3, xmm5, xmm1
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm3, 1
    vsubss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Ladder_HandleAnimTransition
==============
*/
void BG_Ladder_HandleAnimTransition(characterInfo_t *ci, const entityState_t *es)
{
  bool IsPlayingLadderAnims; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1844, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1845, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() && !ci->usingAnimState )
  {
    IsPlayingLadderAnims = BG_IsPlayingLadderAnims(ci);
    if ( ci->usingLadder != IsPlayingLadderAnims )
    {
      ci->usingLadder = IsPlayingLadderAnims;
      ci->dobjDirty = 1;
    }
  }
}

/*
==============
BG_Ladder_HideCrosshair
==============
*/
bool BG_Ladder_HideCrosshair(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 844, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && ps->weapState[0].weaponState != 48;
}

/*
==============
BG_Ladder_IsActive
==============
*/
bool BG_Ladder_IsActive(const playerState_s *const ps)
{
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
}

/*
==============
BG_Ladder_IsDualWieldingAllowed
==============
*/
bool BG_Ladder_IsDualWieldingAllowed(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1989, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu);
}

/*
==============
BG_Ladder_IsHandLadderDropping
==============
*/
__int64 BG_Ladder_IsHandLadderDropping(const LadderDrop ladderDrop, const PlayerHandIndex hand)
{
  bool v4; 
  __int64 result; 
  int v7; 

  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 2008, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", hand, v7) )
      __debugbreak();
  }
  v4 = 0;
  switch ( ladderDrop )
  {
    case LADDER_DROP_NONE:
    case LADDER_DROP_RELAXED_PISTOL_DEMEANOR:
      result = 0i64;
      break;
    case LADDER_DROP_AKIMBO:
    case LADDER_DROP_SLIDE:
    case LADDER_DROP_VAULT:
    case LADDER_DROP_VAULT_CHANGE:
    case LADDER_DROP_INIT_CHANGE:
    case LADDER_DROP_CLIMB:
    case LADDER_DROP_AIM_RAISE_CHANGE:
      result = 1i64;
      break;
    case LADDER_DROP_CLIP_EMPTY:
    case LADDER_DROP_TOP_VIGNETTE:
      result = hand == WEAPON_HAND_DEFAULT;
      break;
    case LADDER_DROP_VAULT_AIM:
    case LADDER_DROP_INIT_WEAPON:
    case LADDER_DROP_WEAPON_CLIMB:
    case LADDER_DROP_AIM:
    case LADDER_DROP_AIM_CHANGE:
      v4 = hand == WEAPON_HAND_LEFT;
      goto LABEL_9;
    default:
LABEL_9:
      result = v4;
      break;
  }
  return result;
}

/*
==============
BG_Ladder_MantleDropTime
==============
*/
int BG_Ladder_MantleDropTime(const playerState_s *ps)
{
  int result; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:?LADDER_MANTLE_WEAPON_DROP_PERCENT@@3MA; float LADDER_MANTLE_WEAPON_DROP_PERCENT
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon
==============
*/
bool BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon(const playerState_s *ps, const WeaponSlot currentWeaponSlot, const Weapon *currentWeapon, const Weapon *newWeapon)
{
  const dvar_t *v8; 
  bool IsLadderWeapon; 
  bool v10; 
  bool result; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)currentWeaponSlot >= WEAPON_SLOT_NUM )
  {
    LODWORD(v12) = currentWeaponSlot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1870, ASSERT_TYPE_ASSERT, "(unsigned)( currentWeaponSlot ) < (unsigned)( WEAPON_SLOT_NUM )", "currentWeaponSlot doesn't index WEAPON_SLOT_NUM\n\t%i not in [0, %i)", v12, 6) )
      __debugbreak();
  }
  v8 = DVARBOOL_ladderEnableKillstreakEarlyoutDropping;
  if ( !DVARBOOL_ladderEnableKillstreakEarlyoutDropping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableKillstreakEarlyoutDropping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  result = 0;
  if ( v8->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    IsLadderWeapon = BG_IsLadderWeapon(newWeapon, 0);
    v10 = BG_IsLadderWeapon(currentWeapon, 0);
    if ( !IsLadderWeapon && !v10 && currentWeaponSlot != WEAPON_SLOT_PRIMARY )
      return 1;
  }
  return result;
}

/*
==============
PM_CheckLadderMove
==============
*/
void PM_CheckLadderMove(pmove_t *pm, pml_t *pml)
{
  char v25; 
  bool v26; 
  bool v27; 
  EdgeQueryCache *v28; 
  playerState_s *v29; 
  bool IsUsingScriptedOffhandWeapon; 
  __int32 v66; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v68; 
  const dvar_t *v72; 
  const dvar_t *v75; 
  char v76; 
  bool v86; 
  bool v88; 
  bool v113; 
  bool v118; 
  bool v119; 
  bool v120; 
  int v121; 
  vec3_t forward; 
  Bounds bounds; 
  vec3_t end; 
  vec3_t angles; 
  LadderInfo outLadderInfo; 
  trace_t outResults; 
  char v130; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R12 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1565, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1565, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (pm->cmd.buttons & 0x800000000000000i64) != 0 || pm->isBot )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_CheckLadderMove");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+40h]
      vmovss  xmm0, dword ptr [rdi+3Ch]
      vmovss  xmm4, dword ptr [rdi+44h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vmovss  xmm6, cs:__real@80000000
      vcmpless xmm0, xmm3, xmm6
      vmovss  xmm10, cs:__real@3f800000
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm1, xmm4, xmm0
      vcomiss xmm1, cs:s_normalCompare
    }
    v26 = !(v76 | v25);
    v27 = pm->cmd.serverTime - _RDI->jumpState.jumpTime > LADDER_RELATCH_TIME;
    v28 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)_RDI->clientNum);
    if ( pm->ground->walking || v26 && v27 )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x12u);
    if ( BG_IsPlayerZeroG(_RDI) )
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 6u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x12u);
    }
    else
    {
      if ( _RDI->pm_time && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0xCu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0xDu)) )
        goto LABEL_17;
      _ER15 = 0;
      __asm { vmovd   xmm1, r15d }
      _EAX = pm->ground->walking;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm2, cs:__real@41f00000
        vmovss  xmm8, cs:__real@41000000
        vblendvps xmm0, xmm8, xmm2, xmm3
        vmovss  [rsp+200h+var_1AC], xmm0
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm7, xmm7, xmm7
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) && _RDI->groundEntityNum == 2047 )
      {
        v121 = 1;
        LOBYTE(_ER15) = BG_GetLadderInfo(&_RDI->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v28->ladderHintNode, &v28->ladderWidthHintNode);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+100h+outLadderInfo.axis]
          vxorps  xmm1, xmm0, xmm9
          vmovss  dword ptr [rsp+200h+forward], xmm1
          vmovss  xmm2, dword ptr [rbp+100h+outLadderInfo.axis+4]
          vxorps  xmm0, xmm2, xmm9
          vmovss  dword ptr [rsp+200h+forward+4], xmm0
          vmovss  xmm1, dword ptr [rbp+100h+outLadderInfo.axis+8]
          vxorps  xmm2, xmm1, xmm9
          vmovss  dword ptr [rsp+200h+forward+8], xmm2
        }
      }
      else
      {
        v121 = 0;
        if ( (_RDI->mantleState.flags & 0x800) != 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+37Ch]
            vaddss  xmm1, xmm0, cs:__real@43340000
            vmovss  dword ptr [rbp+100h+angles], xmm7
            vmovss  dword ptr [rbp+100h+angles+4], xmm1
            vmovss  dword ptr [rbp+100h+angles+8], xmm7
          }
          AngleVectors(&angles, &forward, NULL, NULL);
        }
        else
        {
          __asm
          {
            vmovss  xmm3, dword ptr [r12]
            vmovss  xmm4, dword ptr [r12+4]
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm6
            vblendvps xmm1, xmm2, xmm10, xmm0
            vdivss  xmm1, xmm10, xmm1
            vmulss  xmm0, xmm3, xmm1
            vmovss  dword ptr [rsp+200h+forward], xmm0
            vmulss  xmm1, xmm4, xmm1
            vmovss  dword ptr [rsp+200h+forward+4], xmm1
          }
        }
        __asm { vmovss  dword ptr [rsp+200h+forward+8], xmm7 }
      }
      if ( _RDI->pm_type < 7 )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) )
          _RDI->mantleState.flags = 0;
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x12u) && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_ladder_enabled, "bg_ladder_enabled") && (unsigned int)(_RDI->weapState[0].weaponState - 26) > 6 && !BG_IsUsingOffhandGestureWeapon(_RDI) && !BG_CarryObject_IsActive(_RDI) )
        {
          IsUsingScriptedOffhandWeapon = BG_IsUsingScriptedOffhandWeapon(_RDI);
          v29 = _RDI;
          if ( IsUsingScriptedOffhandWeapon )
            goto LABEL_16;
          if ( !BG_NightVisionAnyGestureIsPlaying(pm->weaponMap, _RDI, pm->cmd.serverTime) )
          {
            v66 = PM_GetEffectiveStance(_RDI) - 1;
            if ( v66 )
            {
              if ( v66 != 2 )
              {
                v29 = _RDI;
                if ( pm->cmd.serverTime - _RDI->jumpState.jumpTime < 300 )
                  goto LABEL_16;
                CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
                v68 = BG_UsingAlternate(_RDI);
                if ( !BG_IsForceUseWeapon(CurrentWeaponForPlayer, v68) && !BG_GameInterface_LadderDisallowed(_RDI) )
                {
                  if ( BG_UsingNewPlayerCollision() )
                  {
                    if ( !(_BYTE)_ER15 && !BG_GetLadderInfo(&_RDI->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v28->ladderHintNode, &v28->ladderWidthHintNode) )
                      goto LABEL_15;
                    LOBYTE(_ER15) = 1;
                  }
                  _RAX = pm->bounds;
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rax]
                    vmovups xmmword ptr [rbp+100h+bounds.midPoint], xmm0
                    vmovsd  xmm1, qword ptr [rax+10h]
                    vmovsd  qword ptr [rbp+100h+bounds.halfSize+4], xmm1
                  }
                  v72 = DCONST_DVARMPFLT_ladderPullinBoundsScale;
                  if ( !DCONST_DVARMPFLT_ladderPullinBoundsScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderPullinBoundsScale") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v72);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize]
                    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
                    vmovss  dword ptr [rbp+100h+bounds.halfSize], xmm1
                  }
                  v75 = DCONST_DVARMPFLT_ladderPullinBoundsScale;
                  if ( !DCONST_DVARMPFLT_ladderPullinBoundsScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderPullinBoundsScale") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v75);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize+4]
                    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
                    vmovss  dword ptr [rbp+100h+bounds.halfSize+4], xmm1
                    vmovss  xmm2, dword ptr [rbp+100h+bounds.halfSize+8]
                    vaddss  xmm0, xmm2, dword ptr [rbp+100h+bounds.midPoint+8]
                    vmulss  xmm1, xmm0, cs:__real@3f000000
                    vaddss  xmm3, xmm1, cs:__real@40800000
                    vmovss  dword ptr [rbp+100h+bounds.midPoint+8], xmm3
                    vsubss  xmm0, xmm3, xmm8
                    vmovss  dword ptr [rbp+100h+bounds.halfSize+8], xmm0
                    vcomiss xmm0, xmm7
                  }
                  if ( v76 )
                  {
                    __asm
                    {
                      vsubss  xmm0, xmm3, xmm0
                      vmovss  dword ptr [rbp+100h+bounds.midPoint+8], xmm0
                      vmovss  dword ptr [rbp+100h+bounds.halfSize+8], xmm7
                    }
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize]
                    vcomiss xmm0, xmm7
                  }
                  if ( v76 )
                  {
                    v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 149, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f");
                    v76 = 0;
                    if ( v86 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize+4]
                    vcomiss xmm0, xmm7
                  }
                  if ( v76 )
                  {
                    v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 150, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f");
                    v76 = 0;
                    if ( v88 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+100h+bounds.halfSize+8]
                    vcomiss xmm0, xmm7
                  }
                  if ( v76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 151, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
                    __debugbreak();
                  __asm
                  {
                    vmovss  xmm6, [rsp+200h+var_1AC]
                    vmulss  xmm1, xmm6, dword ptr [rsp+200h+forward]
                    vaddss  xmm2, xmm1, dword ptr [rdi+30h]
                    vmovss  dword ptr [rbp+100h+end], xmm2
                    vmulss  xmm1, xmm6, dword ptr [rsp+200h+forward+4]
                    vaddss  xmm2, xmm1, dword ptr [rdi+34h]
                    vmovss  dword ptr [rbp+100h+end+4], xmm2
                    vmulss  xmm1, xmm6, dword ptr [rsp+200h+forward+8]
                    vaddss  xmm2, xmm1, dword ptr [rdi+38h]
                    vmovss  dword ptr [rbp+100h+end+8], xmm2
                  }
                  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &_RDI->origin, &end, &bounds, _RDI->clientNum, pm->tracemask, 0);
                  __asm
                  {
                    vmovss  xmm0, [rbp+100h+outResults.fraction]
                    vcomiss xmm0, xmm10
                  }
                  if ( !v76 || (outResults.surfaceFlags & 8) == 0 || pm->ground->walking && pm->cmd.forwardmove <= 0 )
                    goto LABEL_95;
                  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) && !BGMovingPlatforms::IsOnMovingPlatform(_RDI) )
                    goto LABEL_88;
                  if ( !(_BYTE)_ER15 )
                    BG_GetLadderInfo(&_RDI->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v28->ladderHintNode, &v28->ladderWidthHintNode);
                  __asm
                  {
                    vmovss  xmm2, dword ptr [rbp+100h+outLadderInfo.axis]
                    vxorps  xmm0, xmm2, xmm9
                    vmovss  dword ptr [rsp+200h+forward], xmm0
                    vmovss  xmm3, dword ptr [rbp+100h+outLadderInfo.axis+4]
                    vxorps  xmm1, xmm3, xmm9
                    vmovss  dword ptr [rsp+200h+forward+4], xmm1
                    vmovss  xmm0, dword ptr [rbp+100h+outLadderInfo.axis+8]
                    vxorps  xmm4, xmm0, xmm9
                    vmovss  dword ptr [rsp+200h+forward+8], xmm4
                    vmulss  xmm1, xmm2, xmm6
                    vmovss  xmm0, dword ptr [rdi+30h]
                    vsubss  xmm1, xmm0, xmm1
                    vmovss  dword ptr [rbp+100h+end], xmm1
                    vmulss  xmm2, xmm3, xmm6
                    vmovss  xmm0, dword ptr [rdi+34h]
                    vsubss  xmm1, xmm0, xmm2
                    vmovss  dword ptr [rbp+100h+end+4], xmm1
                    vmulss  xmm2, xmm4, xmm6
                    vaddss  xmm0, xmm2, dword ptr [rdi+38h]
                    vmovss  dword ptr [rbp+100h+end+8], xmm0
                  }
                  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &_RDI->origin, &end, &bounds, _RDI->clientNum, pm->tracemask, 0);
                  __asm
                  {
                    vmovss  xmm0, [rbp+100h+outResults.fraction]
                    vcomiss xmm0, xmm10
                  }
                  v113 = v76 && (outResults.surfaceFlags & 8) != 0;
                  _R15 = BG_GetSuitDef(_RDI->suitIndex);
                  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                    __debugbreak();
                  __asm
                  {
                    vmovss  xmm0, dword ptr [r15+1A4h]
                    vaddss  xmm6, xmm0, dword ptr [rdi+38h]
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_ladderVaultOffset, "ladderVaultOffset");
                  __asm { vaddss  xmm1, xmm0, dword ptr [rbp+100h+outLadderInfo.top+8] }
                  v118 = v113;
                  __asm { vcomiss xmm6, xmm1 }
                  if ( !v76 )
                    v118 = 0;
                  if ( ((pm->cmd.buttons & 0x10004000C0i64) == 0 || pm->cmd.serverTime - _RDI->mantleState.endTime <= LADDER_MANTLE_SLIDE_ATTACH_TIME) && v118 )
                  {
LABEL_88:
                    v119 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u);
                    v120 = !v119;
                    if ( !v119 )
                      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu);
                    if ( v120 )
                      __asm { vcomiss xmm7, dword ptr [rdi+730h] }
                    if ( (pm->cmd.buttons & 0x200) == 0 )
                      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 6u);
                    pm->ground->trace.surfaceFlags = outResults.surfaceFlags;
                    _RDI->pm_flags.m_flags[0] |= 0x40u;
                  }
                  else
                  {
LABEL_95:
                    PM_SetLadderMode(pm, _RDI, LADDER_MODE_INVALID);
                    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && v121 )
                    {
                      BG_AnimScriptEvent(pm->m_bgHandler, _RDI, ANIM_ET_JUMP, 0, 1, &pml->holdrand);
                      BG_AnimScriptAnimation(pm->m_bgHandler, _RDI, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
                    }
                  }
                  goto LABEL_17;
                }
              }
            }
          }
        }
      }
      else
      {
        _RDI->groundEntityNum = 2047;
        pm->ground->groundPlane = 0;
        PM_SetAlmostGroundPlane(pm, 0);
        pm->ground->walking = 0;
      }
    }
LABEL_15:
    v29 = _RDI;
LABEL_16:
    PM_SetLadderMode(pm, v29, LADDER_MODE_INVALID);
LABEL_17:
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v130;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_ClearLadderFlag
==============
*/
void PM_ClearLadderFlag(const BgWeaponMap *weaponMap, playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1827, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1828, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    ps->pm_flags.m_flags[0] |= 0x40000u;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 6u);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 6u);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    BG_UpdateLastWeaponHand(weaponMap, ps, CurrentWeaponForPlayer);
  }
}

/*
==============
PM_Footstep_LadderMove
==============
*/
void PM_Footstep_LadderMove(pmove_t *pm, pml_t *pml)
{
  bool v7; 
  bool v8; 
  PlayerAnimStrafeStates v16; 
  const dvar_t *v18; 
  PlayerAnimScriptMoveType v19; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 857, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 857, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footstep_LadderMove");
    if ( pm->cmd.serverTime - _RDI->jumpState.jumpTime >= 300 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
      {
        _RSI = pm->ps;
        v7 = _RSI == NULL;
        if ( !_RSI )
        {
          v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 78, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
          v7 = !v8;
          if ( v8 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+3Ch]; rightMove
          vmovss  xmm1, dword ptr [rsi+40h]; forwardMove
          vmulss  xmm3, xmm1, xmm1
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm3, xmm3, xmm0
          vsqrtss xmm5, xmm3, xmm3
          vmovss  xmm4, dword ptr [rsi+44h]
          vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
        v16 = ANIM_STRAFE_NOT;
        __asm { vcomiss xmm5, xmm4 }
        if ( !v7 )
          v16 = BG_DetermineStrafeCondition(pm, *(const float *)&_XMM1, *(const float *)&_XMM2);
        PM_SetStrafeCondition(pm, v16);
      }
      __asm { vmovss  xmm6, dword ptr [rdi+44h] }
      v18 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
      if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.enabled )
      {
        if ( _RDI->ladderState.mode == LADDER_MODE_SLIDE )
          v19 = ANIM_MT_LADDERSLIDE;
        else
          v19 = ANIM_MT_CLIMBUP;
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        v19 = ANIM_MT_CLIMBUP;
        if ( !v18->current.enabled )
          v19 = ANIM_MT_CLIMBDOWN;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, _RDI, AISTATE_COMBAT, v19, 0, 0);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      Sys_ProfEndNamedEvent();
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
PM_Jump_PushOffLadder
==============
*/
void PM_Jump_PushOffLadder(const pmove_t *pm, playerState_s *ps, pml_t *pml)
{
  EdgeQueryCache *v16; 
  const dvar_t *v64; 
  const dvar_t *v87; 
  BgWeaponMap *weaponMap; 
  vec3_t vec; 
  vec3_t outMove; 
  LadderInfo outLadderInfo; 
  char v123; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  _R15 = pml;
  _RSI = ps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1497, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1498, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1499, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 6u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1500, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::LADDER ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::LADDER )") )
    __debugbreak();
  v16 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)_RSI->clientNum);
  BG_GetLadderInfo(&_RSI->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v16->ladderHintNode, &v16->ladderWidthHintNode);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RSI->velocity);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; height
    vmovaps xmm12, xmm0
    vxorps  xmm11, xmm11, xmm11
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RSI->velocity);
  BG_GetNormalizedMovementCmd(&pm->cmd, &outMove);
  __asm
  {
    vmovss  xmm1, dword ptr [r15]
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  xmm7, dword ptr [rsp+160h+outMove]
    vmovss  dword ptr [rsp+160h+vec], xmm1
    vmovss  xmm1, dword ptr [r15+8]
    vmovss  dword ptr [rsp+160h+vec+8], xmm1
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+160h+vec+4], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+160h+vec]
    vmovss  xmm6, dword ptr [rsp+160h+vec+4]
    vmovss  xmm5, dword ptr [rsp+160h+vec+8]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm3, xmm4, xmm1
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm0, xmm5, xmm1
    vmulss  xmm5, xmm7, xmm2
    vmulss  xmm6, xmm7, xmm3
    vmovss  dword ptr [rsp+160h+vec+4], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+160h+outLadderInfo.axis]
    vmovss  dword ptr [rsp+160h+vec], xmm3
    vmulss  xmm3, xmm5, dword ptr [rsp+160h+outLadderInfo.axis+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rbp+60h+outLadderInfo.axis+10h]
    vmulss  xmm7, xmm7, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsp+160h+outLadderInfo.axis+8]
    vaddss  xmm2, xmm4, xmm1
    vxorps  xmm10, xmm2, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm6, dword ptr [rsp+160h+outLadderInfo.axis+0Ch]
    vmulss  xmm1, xmm7, dword ptr [rbp+60h+outLadderInfo.axis+14h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm6, xmm2, dword ptr [rsp+160h+outMove+4]
    vmovss  dword ptr [rsp+160h+vec+8], xmm0
    vmulss  xmm0, xmm10, xmm12
    vmulss  xmm3, xmm0, cs:?LADDER_JUMP_UP_SCALE@@3MA; float LADDER_JUMP_UP_SCALE
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+outLadderInfo.axis+18h]
    vaddss  xmm2, xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+outLadderInfo.axis+1Ch]
    vmovss  dword ptr [rsi+3Ch], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+40h]
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+outLadderInfo.axis+20h]
    vmovss  dword ptr [rsi+40h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+44h]
    vmovss  dword ptr [rsi+44h], xmm2
  }
  v64 = DCONST_DVARMPFLT_ladderJumpRightScale;
  if ( !DCONST_DVARMPFLT_ladderJumpRightScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderJumpRightScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  __asm
  {
    vmulss  xmm0, xmm6, xmm12
    vmulss  xmm3, xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm3, dword ptr [rsp+160h+outLadderInfo.axis+0Ch]
    vaddss  xmm2, xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+outLadderInfo.axis+10h]
    vmovss  dword ptr [rsi+3Ch], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+40h]
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+outLadderInfo.axis+14h]
    vmovss  dword ptr [rsi+40h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+44h]
    vmulss  xmm3, xmm6, xmm6
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm7, xmm1, xmm1
    vcmpless xmm1, xmm7, cs:__real@80000000
    vblendvps xmm1, xmm7, xmm9, xmm1
    vmovss  dword ptr [rsi+44h], xmm2
    vdivss  xmm2, xmm9, xmm1
    vmulss  xmm1, xmm2, xmm10; X
    vmulss  xmm0, xmm2, xmm6; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@3e22f983
    vmovaps xmm0, xmm7; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vaddss  xmm2, xmm6, cs:__real@3f000000 }
  v87 = DCONST_DVARMPFLT_ladderJumpBackVelocity;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm4, xmm2, xmm3, 1
    vmovaps xmm5, xmm0
    vsubss  xmm1, xmm6, xmm4
    vmulss  xmm2, xmm1, cs:__real@43b40000
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm1, xmm2, cs:__real@42b40000
    vmaxss  xmm2, xmm1, xmm11
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm2, cs:__real@3c360b61
    vmulss  xmm3, xmm0, xmm5
    vsubss  xmm1, xmm9, xmm5
    vmulss  xmm0, xmm1, cs:__real@3f000000
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !DCONST_DVARMPFLT_ladderJumpBackVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderJumpBackVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v87);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rbx+28h]
    vmulss  xmm1, xmm3, dword ptr [rsp+160h+outLadderInfo.axis]
    vaddss  xmm2, xmm1, dword ptr [rsi+3Ch]
    vmulss  xmm1, xmm3, dword ptr [rsp+160h+outLadderInfo.axis+4]
  }
  weaponMap = pm->weaponMap;
  __asm
  {
    vmovss  dword ptr [rsi+3Ch], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+40h]
    vmulss  xmm1, xmm3, dword ptr [rsp+160h+outLadderInfo.axis+8]
    vmovss  dword ptr [rsi+40h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+44h]
    vmovss  dword ptr [rsi+44h], xmm2
  }
  PM_ClearLadderFlag(weaponMap, _RSI);
  _R11 = &v123;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
PM_LadderMove
==============
*/
void PM_LadderMove(pmove_t *pm, pml_t *pml)
{
  bool v26; 
  __int64 v27; 
  bool v42; 
  const dvar_t *v75; 
  const char *v77; 
  const dvar_t *v84; 
  const dvar_t *v85; 
  char v86; 
  bool v98; 
  const dvar_t *v108; 
  const dvar_t *v128; 
  const char *v130; 
  unsigned int mode; 
  BgGroundState *ground; 
  bool v186; 
  bool v213; 
  bool v214; 
  bool v225; 
  const dvar_t *v226; 
  char v227; 
  LadderMode v228; 
  bool v229; 
  unsigned __int64 weaponState; 
  __int64 v231; 
  const dvar_t *v232; 
  char v246; 
  bool v247; 
  float fmt; 
  float fmta; 
  float edgeLadderQueryHint; 
  float edgeWidthQueryHint; 
  float v267; 
  vec3_t inOutWishVel; 
  vec3_t relativePoint; 
  LadderInfo outLadderInfo; 
  vec3_t outToCenterTarget; 
  vec3_t wishdir; 
  char v278; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R14 = pml;
  _RSI = pm;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_LadderMove");
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1226, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = _RSI->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1226, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, cs:__real@3e4ccccd
    vmovss  dword ptr [rsp+1E0h+var_188], xmm9
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END|0x80) )
  {
    _RBX = DCONST_DVARFLT_fastSideLadderScale;
    if ( !DCONST_DVARFLT_fastSideLadderScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastSideLadderScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+1E0h+var_188], xmm9
    }
  }
  if ( !Jump_Check(_RSI, _R14) )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( PM_UseLegacyMouseLadderMove() )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8]
        vmulss  xmm1, xmm0, cs:__real@40200000
        vaddss  xmm0, xmm1, cs:__real@3f200000; val
        vmovaps xmm2, xmm7; max
        vmovss  xmm1, cs:__real@bf800000; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm15, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm15, xmm7 }
    }
    v26 = _RDI->ladderState.mode == LADDER_MODE_INVALID;
    v27 = (__int64)_RSI->m_bgHandler->GetEdgeQueryCache(_RSI->m_bgHandler, (unsigned int)_RDI->clientNum);
    BG_GetLadderInfo(&_RDI->origin, _RSI->m_bgHandler, &outLadderInfo, &outToCenterTarget, v26, (unsigned int *)(v27 + 8), (unsigned int *)(v27 + 16));
    __asm
    {
      vmovss  xmm0, [rbp+0E0h+outLadderInfo.width]
      vmovss  dword ptr [r14+2ACh], xmm0
    }
    _R14->forward.v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmovss  xmm10, cs:__real@80000000
      vcmpless xmm0, xmm2, xmm10
      vblendvps xmm1, xmm2, xmm7, xmm0
      vmovss  [rsp+1E0h+var_190], xmm1
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [r14], xmm0
      vmulss  xmm1, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [r14+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [r14+8], xmm0
    }
    v42 = PM_UseLegacyMouseLadderMove();
    __asm
    {
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm8, xmm8, xmm8
    }
    _R15 = &_R14->right;
    _R14->right.v[2] = 0.0;
    if ( v42 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r15+4]
        vmovss  xmm3, dword ptr [r15]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm1, xmm2, xmm7, xmm0
        vmovss  [rsp+1E0h+var_190], xmm1
        vdivss  xmm1, xmm7, xmm1
        vmulss  xmm0, xmm3, xmm1
        vmovss  dword ptr [rsp+1E0h+relativePoint], xmm0
        vmulss  xmm1, xmm4, xmm1
        vmovss  dword ptr [rsp+1E0h+relativePoint+4], xmm1
        vmovss  dword ptr [rbp+0E0h+relativePoint+8], xmm8
      }
      ProjectPointOnPlane(&relativePoint, outLadderInfo.axis.m, &_R14->right);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+outLadderInfo.axis]
        vxorps  xmm1, xmm0, xmm11
        vmovss  xmm3, dword ptr [rbp+0E0h+outLadderInfo.axis+4]
        vmovss  dword ptr [r15+4], xmm1
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm1, xmm2, xmm7, xmm0
        vmovss  [rsp+1E0h+var_190], xmm1
        vdivss  xmm2, xmm7, xmm1
        vmulss  xmm0, xmm3, xmm2
        vmovss  dword ptr [r15], xmm0
        vmulss  xmm1, xmm2, dword ptr [r15+4]
        vmovss  dword ptr [r15+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [r15+8]
        vmovss  dword ptr [r15+8], xmm0
        vmovss  xmm0, dword ptr [r15]
        vxorps  xmm1, xmm0, xmm11
        vmovss  dword ptr [r15], xmm1
        vmovss  xmm2, dword ptr [r15+4]
        vxorps  xmm0, xmm2, xmm11
        vmovss  dword ptr [r15+4], xmm0
        vmovss  xmm1, dword ptr [r15+8]
        vxorps  xmm2, xmm1, xmm11
        vmovss  dword ptr [r15+8], xmm2
      }
    }
    *(double *)&_XMM0 = PM_CmdScale(_RDI, &_RSI->cmd);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  [rsp+1E0h+var_190], xmm0
      vmovss  dword ptr [rsp+1E0h+var_178], xmm8
      vmovss  dword ptr [rsp+1E0h+var_178+4], xmm8
      vmovss  dword ptr [rsp+1E0h+var_178+8], xmm8
    }
    v75 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v75);
    if ( v75->current.enabled )
    {
      _RBX = DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale;
      if ( DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale )
        goto LABEL_30;
      v77 = "player_ladderEnhancedVerticalSpeedScale";
    }
    else
    {
      _RBX = DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale;
      if ( DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale )
        goto LABEL_30;
      v77 = "player_ladderVerticalSpeedScale";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v77) )
      __debugbreak();
LABEL_30:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm14, dword ptr [rbx+28h] }
    if ( _RSI->cmd.forwardmove )
    {
      __asm
      {
        vmulss  xmm0, xmm14, xmm15
        vmulss  xmm2, xmm0, xmm6
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rsp+1E0h+var_178+8], xmm0
      }
    }
    v84 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v84);
    if ( !v84->current.enabled )
      goto LABEL_41;
    v85 = DCONST_DVARMPBOOL_ladderEnableStrafe;
    if ( !DCONST_DVARMPBOOL_ladderEnableStrafe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableStrafe") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v85);
    if ( v85->current.enabled )
LABEL_41:
      v86 = 1;
    else
      v86 = 0;
    LOBYTE(_EAX) = _RSI->cmd.rightmove;
    if ( (_BYTE)_EAX && v86 )
    {
      __asm { vmulss  xmm1, xmm6, xmm9 }
      _EAX = (char)_EAX;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm1, xmm0
        vmulss  xmm2, xmm3, dword ptr [r15]
        vaddss  xmm0, xmm2, dword ptr [rsp+1E0h+var_178]
        vmovss  dword ptr [rsp+1E0h+var_178], xmm0
        vmulss  xmm1, xmm3, dword ptr [r15+4]
        vaddss  xmm1, xmm1, dword ptr [rsp+1E0h+var_178+4]
        vmovss  dword ptr [rsp+1E0h+var_178+4], xmm1
        vmulss  xmm2, xmm3, dword ptr [r15+8]
        vaddss  xmm1, xmm2, dword ptr [rsp+1E0h+var_178+8]
        vmovss  dword ptr [rsp+1E0h+var_178+8], xmm1
      }
    }
    v98 = (_RSI->cmd.buttons & 0x4000000000i64) != 0;
    if ( (_RSI->cmd.buttons & 0x4000000000i64) != 0 )
    {
      _RBX = DCONST_DVARMPFLT_ladderCrouchSlideSpeed;
      if ( !DCONST_DVARMPFLT_ladderCrouchSlideSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderCrouchSlideSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vxorps  xmm1, xmm0, xmm11
        vcomiss xmm1, dword ptr [rdi+44h]
      }
      if ( !v229 )
      {
        _RBX = DCONST_DVARMPFLT_ladderCrouchSlideAccel;
        if ( !DCONST_DVARMPFLT_ladderCrouchSlideAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderCrouchSlideAccel") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmulss  xmm1, xmm0, dword ptr [r14+24h]
          vmovss  xmm0, dword ptr [rdi+44h]
          vsubss  xmm1, xmm0, xmm1
        }
      }
      __asm { vmovss  dword ptr [rsp+1E0h+var_178+8], xmm1 }
    }
    BG_GetNormalizedMovementCmd(&_RSI->cmd, &relativePoint);
    __asm
    {
      vmovss  xmm9, dword ptr [rsp+1E0h+relativePoint]
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( v98 )
      goto LABEL_62;
    v108 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v108);
    if ( v108->current.enabled && !v86 )
LABEL_62:
      __asm { vmovaps xmm9, xmm7 }
    else
      __asm { vandps  xmm9, xmm9, xmm13 }
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+0E0h+outToCenterTarget]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm5, dword ptr [rbp+0E0h+outToCenterTarget+4]
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm4, dword ptr [rbp+0E0h+outToCenterTarget+8]
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm7, xmm0
      vdivss  xmm0, xmm7, xmm1
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm10, xmm5, xmm0
      vmulss  xmm11, xmm4, xmm0
      vdivss  xmm0, xmm3, cs:?LADDER_MAGNETISM_SCALE_DIST@@3MA; float LADDER_MAGNETISM_SCALE_DIST
      vminss  xmm12, xmm0, xmm7
    }
    v128 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v128);
    if ( !v128->current.enabled || v86 )
    {
      _RBX = DCONST_DVARMPFLT_ladderMagnetismSpeed;
      if ( DCONST_DVARMPFLT_ladderMagnetismSpeed )
        goto LABEL_74;
      v130 = "ladderMagnetismSpeed";
    }
    else
    {
      _RBX = DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed;
      if ( DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed )
        goto LABEL_74;
      v130 = "ladderMagnetismEnhancedSpeed";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v130) )
      __debugbreak();
LABEL_74:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm0, xmm0, xmm12
      vmulss  xmm4, xmm0, xmm9
      vmulss  xmm2, xmm4, xmm6
      vaddss  xmm0, xmm2, dword ptr [rsp+1E0h+var_178]
      vmovss  dword ptr [rsp+1E0h+var_178], xmm0
      vmulss  xmm3, xmm4, xmm10
      vaddss  xmm0, xmm3, dword ptr [rsp+1E0h+var_178+4]
      vmovss  dword ptr [rsp+1E0h+var_178+4], xmm0
      vmulss  xmm2, xmm4, xmm11
      vaddss  xmm0, xmm2, dword ptr [rsp+1E0h+var_178+8]
      vmovss  dword ptr [rsp+1E0h+var_178+8], xmm0
      vcomiss xmm8, dword ptr [rdi+730h]
    }
    if ( v229 )
    {
      mode = 0;
      if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 6u) )
      {
        __asm
        {
          vmovss  dword ptr [rsp+1E0h+var_178], xmm8
          vmovss  dword ptr [rsp+1E0h+var_178+4], xmm8
          vmovss  dword ptr [rsp+1E0h+var_178+8], xmm8
        }
        *(_QWORD *)_RDI->velocity.v = 0i64;
        _RDI->velocity.v[2] = 0.0;
      }
    }
    else
    {
      mode = 0;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+var_188]
      vmovss  dword ptr [rsp+1E0h+var_1A8], xmm0
      vmovss  xmm0, [rsp+1E0h+var_190]
      vmovss  dword ptr [rsp+1E0h+edgeWidthQueryHint], xmm0
      vmovss  dword ptr [rsp+1E0h+edgeLadderQueryHint], xmm15
      vmovss  dword ptr [rsp+1E0h+fmt], xmm14
    }
    BGMovingPlatformClient::AdjustWishVelocityForLadder(_RSI->movingPlatforms, _RSI, _R14, &_R14->right, fmt, edgeLadderQueryHint, edgeWidthQueryHint, v267, &inOutWishVel, outLadderInfo.axis.m);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+1E0h+var_178+4]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm4, dword ptr [rsp+1E0h+var_178]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rsp+1E0h+var_178+8]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0; wishspeed
      vmovss  xmm9, cs:__real@80000000
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+0E0h+wishdir], xmm0
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+0E0h+wishdir+4], xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+0E0h+wishdir+8], xmm0
      vmovss  xmm1, cs:__real@41100000
      vmovss  dword ptr [rsp+1E0h+fmt], xmm1
    }
    PM_Accelerate(_RSI, _R14, &wishdir, *(float *)&_XMM3, fmta);
    if ( !_RSI->cmd.forwardmove && !v98 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+44h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, dword ptr [r14+24h]
        vcomiss xmm2, xmm8
        vaddss  xmm2, xmm2, xmm1
        vcmpltss xmm0, xmm8, xmm2
        vblendvps xmm0, xmm2, xmm8, xmm0
        vmovss  dword ptr [rdi+44h], xmm0
      }
    }
    if ( _RSI->cmd.rightmove || v98 )
    {
      __asm { vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000 }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r15]
        vmovss  xmm4, dword ptr [r15+4]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm9
        vblendvps xmm1, xmm2, xmm7, xmm0
        vdivss  xmm0, xmm7, xmm1
        vmulss  xmm5, xmm3, xmm0
        vmulss  xmm4, xmm4, xmm0
        vmovss  xmm3, dword ptr [rdi+3Ch]
        vmulss  xmm1, xmm4, dword ptr [rdi+40h]
        vmulss  xmm0, xmm3, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vucomiss xmm2, xmm8
      }
    }
    ground = _RSI->ground;
    _R15 = &_RDI->origin;
    v186 = !ground->walking;
    if ( !ground->walking )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm4, xmm0, dword ptr [rbp+0E0h+outLadderInfo.bottom]
        vmovss  xmm1, dword ptr [r15+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+0E0h+outLadderInfo.bottom+4]
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm3, xmm0, dword ptr [rbp+0E0h+outLadderInfo.bottom+8]
        vmulss  xmm1, xmm2, dword ptr [rbp+0E0h+outLadderInfo.axis+4]
        vmovss  xmm5, dword ptr [rbp+0E0h+outLadderInfo.axis]
        vmulss  xmm0, xmm4, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rbp+0E0h+outLadderInfo.axis+8]
        vaddss  xmm3, xmm2, xmm1
      }
      _RAX = _RSI->bounds;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0Ch]
        vaddss  xmm1, xmm0, cs:__real@3e19999a
        vcomiss xmm3, xmm1
      }
      if ( !v186 )
      {
        __asm
        {
          vmovss  xmm4, cs:__real@42480000
          vmulss  xmm1, xmm5, xmm4
          vmovss  xmm0, dword ptr [rdi+3Ch]
          vsubss  xmm1, xmm0, xmm1
          vmovss  dword ptr [rdi+3Ch], xmm1
          vmulss  xmm3, xmm4, dword ptr [rbp+0E0h+outLadderInfo.axis+4]
          vmovss  xmm0, dword ptr [rdi+40h]
          vsubss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rdi+40h], xmm1
          vmulss  xmm3, xmm4, dword ptr [rbp+0E0h+outLadderInfo.axis+8]
          vmovss  xmm0, dword ptr [rdi+44h]
          vsubss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rdi+44h], xmm1
        }
      }
    }
    PM_UpdatePlayerCollision(_RSI, _R14, 0, 1, 1, 1);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_UpdateMovementDir(_RSI, _R14, 0);
    _RBX = BG_GetSuitDef(_RDI->suitIndex);
    v213 = _RBX == NULL;
    if ( !_RBX )
    {
      v214 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
      v213 = !v214;
      if ( v214 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1A4h]
      vaddss  xmm6, xmm0, dword ptr [r15+8]
      vmovss  xmm0, dword ptr [rbp+0E0h+outLadderInfo.axis+1Ch]
      vmulss  xmm3, xmm0, dword ptr [rdi+40h]
      vmovss  xmm1, dword ptr [rbp+0E0h+outLadderInfo.axis+18h]
      vmulss  xmm2, xmm1, dword ptr [rdi+3Ch]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, dword ptr [rbp+0E0h+outLadderInfo.axis+20h]
      vmulss  xmm1, xmm0, dword ptr [rdi+44h]
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm8
    }
    v225 = !v213;
    v226 = DVARBOOL_killswitch_ladder_akimbo_cresting_fix_enabled;
    if ( !DVARBOOL_killswitch_ladder_akimbo_cresting_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_ladder_akimbo_cresting_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v226);
    if ( !v226->current.enabled || _RDI->ladderState.mode )
    {
      v227 = 1;
      mode = _RDI->ladderState.mode;
    }
    else
    {
      v227 = 0;
    }
    if ( _RSI->ground->walking && mode == 5 )
    {
      v228 = LADDER_MODE_INVALID;
    }
    else if ( v98 && ((v229 = mode < 5, mode == 5) || (weaponState = _RDI->weapState[1].weaponState, (unsigned int)weaponState <= 0x2F) && (v231 = 0x800000001020i64, v229 = _bittest64(&v231, weaponState))) )
    {
      __asm { vcomiss xmm8, dword ptr [rdi+730h] }
      if ( v229 )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 9u);
        PM_ExitAimDownSight(_RSI);
      }
      v228 = LADDER_MODE_SLIDE;
    }
    else
    {
      v232 = DCONST_DVARMPFLT_ladderVaultOffset;
      if ( !DCONST_DVARMPFLT_ladderVaultOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderVaultOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v232);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0E0h+outLadderInfo.top+8]
        vaddss  xmm1, xmm0, dword ptr [rbx+28h]
        vcomiss xmm6, xmm1
      }
      if ( !v229 && v225 )
      {
        if ( _RDI->ladderState.mode != LADDER_MODE_VAULTING )
        {
          PM_SetLadderMode(_RSI, _RDI, LADDER_MODE_VAULTING);
          __asm
          {
            vmovss  xmm0, cs:?LADDER_VAULT_NUDGE_DIST@@3MA; float LADDER_VAULT_NUDGE_DIST
            vxorps  xmm2, xmm0, xmm9
            vmulss  xmm1, xmm2, dword ptr [rbp+0E0h+outLadderInfo.axis]
            vaddss  xmm5, xmm1, dword ptr [rax+30h]
            vmulss  xmm0, xmm2, dword ptr [rbp+0E0h+outLadderInfo.axis+4]
            vaddss  xmm4, xmm0, dword ptr [rax+34h]
            vmulss  xmm2, xmm2, dword ptr [rbp+0E0h+outLadderInfo.axis+8]
            vmovss  xmm1, dword ptr [rbp+0E0h+outLadderInfo.top+8]
            vaddss  xmm0, xmm1, cs:__real@34000000
            vaddss  xmm3, xmm2, xmm0
            vsubss  xmm2, xmm3, dword ptr [rdi+38h]
            vmovss  dword ptr [rsi+384h], xmm2
          }
          _RSI->m_flags |= 0x100u;
          __asm
          {
            vmovss  dword ptr [rdi+30h], xmm5
            vmovss  dword ptr [rdi+34h], xmm4
            vmovss  dword ptr [rdi+38h], xmm3
          }
        }
        goto LABEL_123;
      }
      v246 = 0;
      v247 = v227 == 0;
      if ( !v227 )
        goto LABEL_120;
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_ladderCresting, "ladderCresting");
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+0E0h+outLadderInfo.top+8]
        vsubss  xmm0, xmm1, xmm0
        vcomiss xmm6, xmm0
      }
      if ( v246 )
      {
LABEL_120:
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+44h]
          vandps  xmm0, xmm0, xmm13
          vcomiss xmm0, cs:__real@34000000
        }
        v228 = LADDER_MODE_CLIMB;
        if ( v246 | v247 )
          v228 = LADDER_MODE_STATIONARY;
      }
      else
      {
        v228 = LADDER_MODE_CRESTING;
      }
    }
    PM_SetLadderMode(_RSI, _RDI, v228);
LABEL_123:
    PM_Ladder_ClampViewAngles(_RSI, _RDI, &outLadderInfo);
    goto LABEL_124;
  }
  PM_AirMove(_RSI, _R14);
LABEL_124:
  Sys_ProfEndNamedEvent();
  _R11 = &v278;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
PM_Ladder_CheckForLadderAim
==============
*/
void PM_Ladder_CheckForLadderAim(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  int weaponState; 
  int weaponTime; 
  const Weapon *v8; 
  bool v9; 
  int v10; 
  bool v11; 
  bool v12; 
  int v13; 
  bool v14; 
  bool v15; 
  int v16; 
  bool v17; 
  int v18; 
  bool v19; 
  int v20; 
  bool v21; 
  bool v22; 
  int v23; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1048, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1050, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1050, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  weaponState = ps->weapState[0].weaponState;
  weaponTime = ps->weapState[0].weaponTime;
  v8 = CurrentWeaponForPlayer;
  v9 = BG_UsingAlternate(ps);
  v10 = BG_LadderAimRaiseInterruptTime(ps, v8, v9, 0);
  v11 = BG_UsingAlternate(ps);
  v23 = BG_LadderAimDropInterruptTime(ps, v8, v11, 0);
  v12 = BG_UsingAlternate(ps);
  v13 = BG_LadderAimADSRaiseTime(ps, v8, v12, 0);
  v14 = weaponState == 6 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) && weaponTime > v13;
  if ( ps->ladderState.mode == LADDER_MODE_CLIMB && (weaponState == 48 || weaponState == 6 && ps->weapState[0].weaponTime <= v10) )
  {
    v15 = BG_UsingAlternate(ps);
    v16 = BG_LadderAimDropTime(ps, v8, v15, 0);
    ps->weapState[0].weaponState = 13;
    ps->weapState[0].weaponTime = v16;
    PM_StartWeaponAnim(ps, WEAP_DROP_LADDER_AIM, WEAPON_HAND_DEFAULT);
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROP_LADDER_AIM, 0, 0, &pml->holdrand);
  }
  else if ( BG_Ladder_CanAim(v8, ps, 0) && (weaponState == 47 || weaponState == 13 && ps->weapState[0].weaponTime <= v23) || v14 )
  {
    v17 = BG_UsingAlternate(ps);
    v18 = BG_LadderAimRaiseTime(ps, v8, v17, 0);
    ps->weapState[0].weaponState = 6;
    ps->weapState[0].weaponTime = v18;
    PM_StartWeaponAnim(ps, WEAP_RAISE_LADDER_AIM, WEAPON_HAND_DEFAULT);
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISE_LADDER_AIM, 0, 0, &pml->holdrand);
  }
  else if ( weaponState == 13 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    v19 = BG_UsingAlternate(ps);
    v20 = BG_LadderAimRaiseTime(ps, v8, v19, 0);
    ps->weapState[0].weaponState = 6;
    ps->weapState[0].weaponTime = v20;
    PM_StartWeaponAnim(ps, WEAP_RAISE_LADDER_AIM, WEAPON_HAND_DEFAULT);
  }
  if ( ps->weapState[0].weaponTime <= 0 )
  {
    if ( weaponState == 6 )
    {
      ps->weapState[0].weaponState = 48;
      PM_StartWeaponAnim(ps, WEAP_IDLE, WEAPON_HAND_DEFAULT);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_AIM, 0, 0, &pml->holdrand);
    }
    else if ( weaponState == 13 )
    {
      if ( BG_Ladder_CanAim(v8, ps, 0) )
      {
        ps->weapState[0].weaponState = 6;
        v21 = BG_UsingAlternate(ps);
        ps->weapState[0].weaponTime = BG_LadderAimRaiseTime(ps, v8, v21, 0);
        PM_StartWeaponAnim(ps, WEAP_RAISE_LADDER_AIM, WEAPON_HAND_DEFAULT);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISE_LADDER, 0, 0, &pml->holdrand);
      }
      else if ( BG_Ladder_CanClimb(ps) )
      {
        ps->weapState[0].weaponState = 47;
        PM_StartWeaponAnim(ps, WEAP_LADDER_CLIMB_WEAPON, WEAPON_HAND_DEFAULT);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_CLIMB, 0, 0, &pml->holdrand);
      }
      else
      {
        ps->weapState[0].weaponState = 6;
        v22 = BG_UsingAlternate(ps);
        ps->weapState[0].weaponTime = BG_LadderAimRaiseTime(ps, v8, v22, 0);
        PM_StartWeaponAnim(ps, WEAP_RAISE_LADDER_AIM, WEAPON_HAND_DEFAULT);
      }
    }
  }
}

/*
==============
PM_Ladder_CheckForLadderSlide
==============
*/
void PM_Ladder_CheckForLadderSlide(pmove_t *pm, pml_t *pml)
{
  int weaponState; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v15; 
  char v16; 
  char v17; 
  bool CanAim; 
  playerState_s *v19; 
  int v20; 
  bool v21; 
  bool IsLadderWeapon; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 985, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 986, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 988, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 988, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = _RBX->weapState[0].weaponState;
  if ( _RBX->ladderState.mode == LADDER_MODE_SLIDE )
  {
    if ( weaponState == 49 )
      goto LABEL_18;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0x10u) )
    {
      PM_StartWeaponAnim(_RBX, WEAP_LADDER_SLIDE, WEAPON_HAND_LEFT);
      PM_StartWeaponAnim(_RBX, WEAP_LADDER_SLIDE, WEAPON_HAND_DEFAULT);
      _RBX->weapState[0].weaponState = 49;
      _RBX->weapState[1].weaponState = 49;
      return;
    }
  }
  if ( weaponState != 49 )
    return;
LABEL_18:
  if ( _RBX->ladderState.mode != LADDER_MODE_SLIDE )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rbx+40h]
      vmovss  xmm3, dword ptr [rbx+44h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@34000000
    }
    v15 = CurrentWeaponForPlayer;
    if ( v16 | v17 || pm->cmd.forwardmove || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) )
    {
      CanAim = BG_Ladder_CanAim(v15, _RBX, 0);
      v19 = _RBX;
      if ( CanAim )
      {
        _RBX->weapState[1].weaponState = 47;
        _RBX->weapState[0].weaponState = 0;
        v20 = 1;
      }
      else
      {
        if ( !BG_Ladder_CanClimb(_RBX) )
          return;
        _RBX->weapState[0].weaponState = 47;
        _RBX->weapState[1].weaponState = 47;
        v21 = BG_UsingAlternate(_RBX);
        IsLadderWeapon = BG_IsLadderWeapon(v15, v21);
        v19 = _RBX;
        v20 = IsLadderWeapon + 68;
      }
      PM_StartWeaponAnim(v19, (WeaponAnimNumber)v20, WEAPON_HAND_DEFAULT);
      PM_StartWeaponAnim(_RBX, WEAP_LADDER_CLIMB, WEAPON_HAND_LEFT);
    }
  }
}

/*
==============
PM_Ladder_ClampViewAngles
==============
*/
void PM_Ladder_ClampViewAngles(pmove_t *pm, playerState_s *ps, LadderInfo *ladderInfo)
{
  const Weapon *BestLadderWeapon; 
  bool IsLadderWeapon; 
  LadderMode mode; 
  bool v16; 
  const char *v24; 
  const dvar_t *v37; 
  const dvar_t *v44; 
  const dvar_t *v48; 
  const dvar_t *v65; 
  const dvar_t *v67; 
  bool v76; 
  const dvar_t *v77; 
  const dvar_t *v79; 
  vec3_t worldAnglesCenter; 
  viewClampState clamp; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R15 = ps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 904, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 905, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, _R15);
  IsLadderWeapon = BG_IsLadderWeapon(BestLadderWeapon, 0);
  mode = _R15->ladderState.mode;
  v16 = IsLadderWeapon;
  if ( (unsigned int)(mode - 2) <= 1 && IsLadderWeapon )
  {
    _RSI = DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_base_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm10, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_max_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm9, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_slope_begin_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw )
    {
      v24 = "bg_ladder_aim_pitch_down_slope_end_yaw";
      goto LABEL_31;
    }
  }
  else
  {
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_base_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm10, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_max_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm9, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_slope_begin_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw )
    {
      v24 = "bg_ladder_climb_pitch_down_slope_end_yaw";
LABEL_31:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm7, dword ptr [rsi+28h] }
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)ladderInfo);
  __asm { vaddss  xmm0, xmm0, cs:__real@43340000; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [r15+1DCh]; angle2
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, xmm8; value
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = ApplyLinearMap(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v37 = DCONST_DVARINT_bg_ladder_clamp_interp_accel_time;
  __asm
  {
    vsubss  xmm1, xmm10, xmm9
    vmulss  xmm2, xmm0, xmm1
    vaddss  xmm9, xmm2, xmm9
  }
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_accel_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_accel_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  __asm
  {
    vmovss  xmm8, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
  }
  v44 = DCONST_DVARINT_bg_ladder_clamp_interp_decel_time;
  __asm
  {
    vmulss  xmm0, xmm0, xmm8
    vmovss  [rbp+60h+clamp.accelTime], xmm0
  }
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_decel_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_decel_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
  }
  v48 = DCONST_DVARINT_bg_ladder_clamp_interp_total_time;
  __asm
  {
    vmulss  xmm1, xmm0, xmm8
    vmovss  [rbp+60h+clamp.decelTime], xmm1
  }
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_total_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_total_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, xmm8
    vmovss  [rbp+60h+clamp.totalTime], xmm1
    vmovss  xmm1, dword ptr [r15+3ECh]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [r15+3E8h]
    vmulss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rsp+160h+clamp.min.start], xmm1
    vmovss  [rbp+60h+clamp.startTime], xmm0
    vmovss  xmm0, dword ptr [r15+3F0h]; angle1
    vmovaps xmm1, xmm6; angle2
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm2, dword ptr [r15+3ECh]
    vaddss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [r15+3F0h]; angle1
    vmovss  dword ptr [rsp+160h+clamp.min.start+4], xmm1
    vmovaps xmm1, xmm6; angle2
    vmovss  dword ptr [rsp+160h+clamp.max.start], xmm2
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rsp+160h+clamp.max.start+4], xmm1
    vmovss  dword ptr [rbp+60h+clamp.resistMin.start], xmm7
    vmovss  dword ptr [rbp+60h+clamp.resistMin.start+4], xmm7
    vmovss  dword ptr [rbp+60h+clamp.resistMax.start], xmm7
    vmovss  dword ptr [rbp+60h+clamp.resistMax.start+4], xmm7
  }
  if ( mode == LADDER_MODE_STATIONARY && v16 )
  {
    v65 = DCONST_DVARFLT_bg_ladder_aim_yaw_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    __asm { vsubss  xmm0, xmm6, dword ptr [rsi+28h] }
    v67 = DCONST_DVARFLT_bg_ladder_aim_yaw_cap;
    __asm { vmovss  dword ptr [rsp+160h+clamp.min.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v67);
    __asm { vaddss  xmm0, xmm6, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.max.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMin.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMax.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMin.goal], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp )
    {
      v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_soft_angle_clamp");
      goto LABEL_78;
    }
  }
  else
  {
    v77 = DCONST_DVARFLT_bg_ladder_climb_yaw_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v77);
    __asm { vsubss  xmm0, xmm6, dword ptr [rsi+28h] }
    v79 = DCONST_DVARFLT_bg_ladder_climb_yaw_cap;
    __asm { vmovss  dword ptr [rsp+160h+clamp.min.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v79);
    __asm { vaddss  xmm0, xmm6, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.max.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMin.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMax.goal+4], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    __asm { vmovss  dword ptr [rbp+60h+clamp.resistMin.goal], xmm0 }
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp )
    {
      v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp");
LABEL_78:
      if ( v76 )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm0, dword ptr [rsi+28h] }
  _RSI = DCONST_DVARFLT_bg_ladder_pitch_up_cap;
  __asm { vmovss  dword ptr [rbp+60h+clamp.resistMax.goal], xmm0 }
  if ( !DCONST_DVARFLT_bg_ladder_pitch_up_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_pitch_up_cap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+160h+clamp.min.goal], xmm1
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+1Ch]
    vmulss  xmm0, xmm0, xmm8; currentTime
    vmovss  dword ptr [rbp+60h+clamp.max.goal], xmm9
    vmovss  dword ptr [rsp+160h+worldAnglesCenter], xmm7
    vmovss  dword ptr [rsp+160h+worldAnglesCenter+4], xmm7
    vmovss  dword ptr [rsp+160h+worldAnglesCenter+8], xmm7
  }
  BG_UpdateViewAngleClamp(*(const float *)&_XMM0, &worldAnglesCenter, &clamp, _R15);
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_Ladder_GetChangeWeapon
==============
*/
char PM_Ladder_GetChangeWeapon(pmove_t *pm, const Weapon **outWeapon)
{
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *RequestedWeapon; 
  const dvar_t *v8; 
  const Weapon *BestLadderWeapon; 
  unsigned __int64 weaponState; 
  unsigned __int64 v12; 
  const Weapon *v13; 
  bool v14; 
  char v16; 
  __int64 v17; 
  bool v18; 
  char v19; 
  __int64 v20; 
  bool v21; 
  char v22; 
  char v23; 
  const Weapon *Buf2; 

  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1128, ASSERT_TYPE_ASSERT, "(outWeapon)", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1130, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1130, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RBX);
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  v8 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  Buf2 = RequestedWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, _RBX);
    weaponState = _RBX->weapState[1].weaponState;
    v12 = _RBX->weapState[0].weaponState;
    v13 = BestLadderWeapon;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) || BG_HasLadderHand(_RBX) )
    {
      v16 = 0;
    }
    else
    {
      v14 = BG_UsingAlternate(_RBX);
      if ( BG_IsLadderWeapon(CurrentWeaponForPlayer, v14) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm0, dword ptr [rbx+730h]
        }
      }
      v16 = 1;
    }
    v18 = 0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) && BG_HasLadderHand(_RBX) )
    {
      if ( (unsigned int)weaponState > 0x32 || (v17 = 0x4000000001F82i64, !_bittest64(&v17, weaponState)) )
        v18 = 1;
    }
    v19 = v16 | v18;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) && BG_HasLadderHand(_RBX) && (_DWORD)v12 == 1 || (unsigned int)v12 <= 0x30 && (v20 = 0x1000000012040i64, _bittest64(&v20, v12)) && !BG_GetAmmoInClip(_RBX, CurrentWeaponForPlayer, 0, WEAPON_HAND_DEFAULT) && _RBX->ladderState.mode != LADDER_MODE_SLIDE )
      v19 = 1;
    v21 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) && memcmp_0(CurrentWeaponForPlayer, Buf2, 0x3Cui64) && BG_HasLadderHand(_RBX) && (_DWORD)weaponState != 50;
    if ( _RBX->ladderState.mode == LADDER_MODE_VAULTING )
      v21 = 1;
    v22 = v21 | v19;
    if ( BG_HasLadderHand(_RBX) && !memcmp_0(CurrentWeaponForPlayer, Buf2, 0x3Cui64) && ((unsigned int)(weaponState - 7) <= 5 || (_DWORD)weaponState == 50 || (unsigned int)(v12 - 7) <= 5 || (_DWORD)v12 == 50) )
      v22 = 0;
    v23 = 0;
    if ( (_DWORD)v12 != 44 )
      v23 = v22;
    if ( v23 )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) || _RBX->ladderState.mode == LADDER_MODE_VAULTING )
        v13 = Buf2;
    }
    else
    {
      v13 = CurrentWeaponForPlayer;
    }
    *outWeapon = v13;
    return v23;
  }
  else
  {
    *outWeapon = &NULL_WEAPON;
    return CurrentWeaponForPlayer->weaponIdx != 0;
  }
}

/*
==============
PM_Ladder_ResolveCharacterCollision
==============
*/

void __fastcall PM_Ladder_ResolveCharacterCollision(pmove_t *pm, const BgAntiLagEntityInfo *entityInfo, double ladderWidth)
{
  playerState_s *ps; 
  WorldUpReferenceFramePM *p_refFrame; 
  char v19; 
  char v21; 
  vec3_t vec; 
  vec3_t outOrigin; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1198, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1198, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !entityInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1200, ASSERT_TYPE_ASSERT, "(entityInfo)", (const char *)&queryFormat, "entityInfo") )
    __debugbreak();
  BgAntiLagEntity_GetOrigin(entityInfo, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
    vsubss  xmm1, xmm0, dword ptr [rdi+30h]
    vmovss  xmm2, dword ptr [rsp+88h+outOrigin+4]
    vmovss  dword ptr [rsp+88h+vec], xmm1
    vsubss  xmm0, xmm2, dword ptr [rdi+34h]
    vmovss  xmm1, dword ptr [rsp+88h+outOrigin+8]
    vmovss  dword ptr [rsp+88h+vec+4], xmm0
    vsubss  xmm2, xmm1, dword ptr [rdi+38h]
  }
  p_refFrame = &pm->refFrame;
  __asm { vmovss  dword ptr [rsp+88h+vec+8], xmm2 }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &vec);
  __asm
  {
    vmulss  xmm2, xmm0, xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
  }
  if ( !v19 )
  {
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(p_refFrame, &vec);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, xmm7
    }
    if ( v19 | v21 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; height }
      WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &ps->velocity);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
PM_SetLadderMode
==============
*/
void PM_SetLadderMode(pmove_t *const pm, playerState_s *ps, LadderMode mode)
{
  LadderMode v8; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v11; 
  entity_event_t v12; 

  _RBP = ps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 108, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 109, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = _RBP->ladderState.mode;
  if ( v8 != mode )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm7
      vmovaps [rsp+58h+var_28], xmm8
    }
    if ( mode == LADDER_MODE_SLIDE )
    {
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      v11 = PM_GroundSurfaceType(pm);
      v12 = EV_LADDER_START_SLIDE;
    }
    else
    {
      if ( v8 != LADDER_MODE_SLIDE || mode == LADDER_MODE_INVALID )
        goto LABEL_14;
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      v11 = PM_GroundSurfaceType(pm);
      v12 = EV_LADDER_STOP_SLIDE;
    }
    BG_AddPredictableEventToPlayerstate(v12, v11, serverTime, weaponMap, _RBP);
LABEL_14:
    _RBP->ladderState.modeStartTime = pm->cmd.serverTime;
    _RBP->ladderState.mode = mode;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1D8h]
      vmovss  xmm7, cs:__real@3f000000
      vmovss  dword ptr [rbp+3ECh], xmm0
    }
    _RBP->ladderState.startViewAngles.v[1] = _RBP->viewangles.v[1];
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@43360b61
      vaddss  xmm1, xmm0, xmm7
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, cs:__real@37800000
      vaddss  xmm1, xmm3, xmm7
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rbp+3ECh], xmm0
      vmovss  xmm1, dword ptr [rbp+3F0h]
      vmulss  xmm0, xmm1, cs:__real@43360b61
      vaddss  xmm3, xmm0, xmm7
      vroundss xmm0, xmm8, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vmovaps xmm7, [rsp+58h+var_18]
      vroundss xmm3, xmm8, xmm2, 1
      vmovaps xmm8, [rsp+58h+var_28]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmovss  dword ptr [rbp+3F0h], xmm0
    }
    if ( mode == LADDER_MODE_INVALID )
      PM_ClearLadderFlag(pm->weaponMap, _RBP);
  }
}

/*
==============
PM_UseLegacyMouseLadderMove
==============
*/
char PM_UseLegacyMouseLadderMove()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPBOOL_useLegacyPCLadderControls;
  if ( !DCONST_DVARMPBOOL_useLegacyPCLadderControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useLegacyPCLadderControls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 159, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Legacy PC controls no longer supported. If you want this feature, pass the request through the usercmd_t.") )
    __debugbreak();
  return 1;
}

