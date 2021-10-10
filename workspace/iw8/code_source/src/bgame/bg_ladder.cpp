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
char BG_GetLadderInfo(const vec3_t *origin, const BgHandler *handler, LadderInfo *outLadderInfo, vec3_t *outToCenterTarget, bool printWarning, unsigned int *edgeLadderQueryHint, unsigned int *edgeWidthQueryHint)
{
  __int128 v7; 
  const BgHandler *v10; 
  bool v12; 
  int v13; 
  bool v14; 
  unsigned int v15; 
  LadderInfo *p_row2; 
  vec3_t *p_top; 
  EdgeId v18; 
  int v20; 
  const BgHandler *v21; 
  EdgeId *v22; 
  __int128 v23; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  LadderInfo *p_row1; 
  float v60; 
  __int128 v61; 
  float v62; 
  unsigned __int64 v66; 
  __int64 v67; 
  float v68; 
  __int128 v70; 
  EdgeId edgeId; 
  unsigned __int64 outResultCount; 
  vec3_t *angles; 
  unsigned int *outHintNodeIndex; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v77; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v78; 
  vec3_t handlera; 
  EdgeOctreeQuerySphere v80; 
  EdgeOctreeQuerySphere v81; 
  vec3_t v82[2]; 
  vec3_t outNormal0; 
  vec3_t outNormal1; 
  vec3_t outLineSegment[2]; 
  vec3_t v86[2]; 
  EdgeId resultIdPool[16]; 
  float resultFractionPool[16]; 
  __int128 v89; 

  outHintNodeIndex = edgeWidthQueryHint;
  v10 = handler;
  *(_QWORD *)handlera.v = handler;
  angles = (vec3_t *)origin;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 169, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !outLadderInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 170, ASSERT_TYPE_ASSERT, "(outLadderInfo)", (const char *)&queryFormat, "outLadderInfo") )
    __debugbreak();
  if ( !edgeLadderQueryHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 171, ASSERT_TYPE_ASSERT, "(edgeLadderQueryHint)", (const char *)&queryFormat, "edgeLadderQueryHint") )
    __debugbreak();
  if ( !edgeWidthQueryHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 172, ASSERT_TYPE_ASSERT, "(edgeWidthQueryHint)", (const char *)&queryFormat, "edgeWidthQueryHint") )
    __debugbreak();
  v12 = v10->RequiresScriptMoverLadderChecks((BgHandler *)v10);
  v13 = 0;
  outResultCount = 0i64;
  v14 = v12;
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v80, origin, LADDER_LINE_QUERY_DISTANCE);
  v77.m_hint = *edgeLadderQueryHint;
  v77.m_queryShape = &v80;
  v15 = 0;
  v77.m_bucket = LADDER_CENTERLINE;
  if ( v14 )
    v15 = 1;
  v77.m_flags = v15;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v77, v10, resultIdPool, resultFractionPool, NULL, 0x10ui64, &outResultCount, edgeLadderQueryHint);
  *(_QWORD *)outLadderInfo->axis.row2.v = 0i64;
  p_row2 = (LadderInfo *)&outLadderInfo->axis.row2;
  outLadderInfo->axis.m[2].v[2] = 1.0;
  p_top = &outLadderInfo->top;
  *(_QWORD *)outLadderInfo->bottom.v = 0i64;
  outLadderInfo->bottom.v[2] = 0.0;
  *(_QWORD *)outLadderInfo->top.v = 0i64;
  outLadderInfo->top.v[2] = 0.0;
  outLadderInfo->rungDistance = 12.0;
  EdgeId::Clear(&edgeId);
  v18 = edgeId;
  if ( outResultCount )
    v18 = resultIdPool[0];
  edgeId = v18;
  if ( outResultCount )
  {
    v89 = v7;
    if ( outResultCount > 1 )
    {
      v20 = 0;
      v21 = *(const BgHandler **)handlera.v;
      v22 = resultIdPool;
      do
      {
        edgeId = *v22;
        Edge_GetLineSegment(v21, edgeId, (vec3_t (*)[2])outLineSegment);
        v23 = LODWORD(outLineSegment[0].v[1]);
        *(float *)&v23 = fsqrt((float)((float)((float)(outLineSegment[0].v[1] - outLineSegment[1].v[1]) * (float)(outLineSegment[0].v[1] - outLineSegment[1].v[1])) + (float)((float)(outLineSegment[0].v[0] - outLineSegment[1].v[0]) * (float)(outLineSegment[0].v[0] - outLineSegment[1].v[0]))) + (float)((float)(outLineSegment[0].v[2] - outLineSegment[1].v[2]) * (float)(outLineSegment[0].v[2] - outLineSegment[1].v[2])));
        _XMM1 = v23;
        __asm
        {
          vcmpless xmm0, xmm1, xmm12
          vblendvps xmm0, xmm1, xmm11, xmm0
        }
        if ( (float)((float)(outLineSegment[0].v[2] - outLineSegment[1].v[2]) / *(float *)&_XMM0) > LADDER_ALIGNMENT_THRESHOLD )
          break;
        if ( (float)((float)(outLineSegment[0].v[2] - outLineSegment[1].v[2]) / *(float *)&_XMM0) < COERCE_FLOAT(LODWORD(LADDER_ALIGNMENT_THRESHOLD) ^ _xmm) )
          break;
        ++v20;
        ++v22;
      }
      while ( v20 < outResultCount );
      v18 = edgeId;
      p_top = &outLadderInfo->top;
      v10 = *(const BgHandler **)handlera.v;
    }
    Edge_GetLineSegment(v10, v18, (vec3_t (*)[2])v82);
    Edge_CalculateNormals(v10, edgeId, &outNormal0, &outNormal1);
    v28 = LODWORD(outNormal1.v[1]);
    v27 = outNormal1.v[1] + outNormal0.v[1];
    v29 = outNormal1.v[2] + outNormal0.v[2];
    v30 = v82[0].v[1];
    v31 = LODWORD(v82[1].v[0]);
    v32 = v82[0].v[0];
    v33 = v82[0].v[2];
    *(float *)&v28 = fsqrt((float)((float)(v27 * v27) + (float)((float)(outNormal0.v[0] + outNormal1.v[0]) * (float)(outNormal0.v[0] + outNormal1.v[0]))) + (float)(v29 * v29));
    _XMM3 = v28;
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    v37 = v82[1].v[2];
    outLadderInfo->axis.m[0].v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(outNormal0.v[0] + outNormal1.v[0]);
    outLadderInfo->axis.m[0].v[2] = (float)(1.0 / *(float *)&_XMM0) * v29;
    v38 = (float)(1.0 / *(float *)&_XMM0) * v27;
    v39 = v82[1].v[1];
    outLadderInfo->axis.m[0].v[1] = v38;
    outLadderInfo->axis.m[2].v[1] = v39 - v30;
    outLadderInfo->axis.m[2].v[2] = v37 - v33;
    v40 = v31;
    *(float *)&v40 = fsqrt((float)((float)((float)(*(float *)&v31 - v32) * (float)(*(float *)&v31 - v32)) + (float)((float)(v39 - v30) * (float)(v39 - v30))) + (float)((float)(v37 - v33) * (float)(v37 - v33)));
    _XMM3 = v40;
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    p_row2->axis.m[0].v[0] = (float)(*(float *)&v31 - v32) * (float)(1.0 / *(float *)&_XMM0);
    outLadderInfo->axis.m[2].v[1] = (float)(1.0 / *(float *)&_XMM0) * outLadderInfo->axis.m[2].v[1];
    *(float *)&v40 = (float)(1.0 / *(float *)&_XMM0) * outLadderInfo->axis.m[2].v[2];
    outLadderInfo->axis.m[2].v[2] = *(float *)&v40;
    if ( *(float *)&v40 >= 0.0 )
    {
      v45 = v37;
      v46 = v39;
      v44 = *(float *)&v31;
      v37 = v33;
      v39 = v30;
      *(float *)&v31 = v32;
    }
    else
    {
      p_row2->axis.m[0].v[0] = COERCE_FLOAT(LODWORD(p_row2->axis.m[0].v[0]) ^ _xmm);
      outLadderInfo->axis.m[2].v[1] = COERCE_FLOAT(LODWORD(outLadderInfo->axis.m[2].v[1]) ^ _xmm);
      outLadderInfo->axis.m[2].v[2] = COERCE_FLOAT(LODWORD(outLadderInfo->axis.m[2].v[2]) ^ _xmm);
      v44 = v32;
      v45 = v33;
      v46 = v30;
    }
    outLadderInfo->bottom.v[0] = *(float *)&v31;
    outLadderInfo->bottom.v[1] = v39;
    outLadderInfo->bottom.v[2] = v37;
    p_top->v[0] = v44;
    p_top->v[1] = v46;
    p_top->v[2] = v45;
    v47 = p_top->v[2] - outLadderInfo->bottom.v[2];
    v48 = p_top->v[0];
    if ( v47 > LADDER_ALIGNMENT_THRESHOLD )
    {
      v49 = p_top->v[1] - outLadderInfo->bottom.v[1];
      v50 = fsqrt((float)((float)((float)(p_top->v[0] - outLadderInfo->bottom.v[0]) * (float)(p_top->v[0] - outLadderInfo->bottom.v[0])) + (float)(v49 * v49)) + (float)(v47 * v47));
      v51 = fmodf_0(v50, 12.0);
      if ( v51 >= 0.00000011920929 )
      {
        _XMM6 = 0i64;
        if ( v51 >= 6.0 )
          __asm { vroundss xmm6, xmm6, xmm0, 2 }
        else
          __asm { vroundss xmm6, xmm6, xmm0, 1 }
        if ( (v51 > 1.0 || v51 < 11.0) && printWarning )
          Com_PrintWarning(34, "WARNING: player is using a ladder %0.2f %0.2f %0.2f with segment length (%0.2f) that is not a multiple of %0.2f.  Dynamically resizing the ladder. \n", v48, outLadderInfo->top.v[1], outLadderInfo->top.v[2], v50, DOUBLE_12_0);
        p_top->v[0] = (float)((float)(*(float *)&_XMM6 * 12.0) * p_row2->axis.m[0].v[0]) + outLadderInfo->bottom.v[0];
        p_top->v[1] = (float)((float)(*(float *)&_XMM6 * 12.0) * outLadderInfo->axis.m[2].v[1]) + outLadderInfo->bottom.v[1];
        p_top->v[2] = (float)((float)(*(float *)&_XMM6 * 12.0) * outLadderInfo->axis.m[2].v[2]) + outLadderInfo->bottom.v[2];
      }
      if ( outToCenterTarget )
      {
        v54 = angles->v[1] - v82[0].v[1];
        handlera.v[0] = angles->v[0] - v82[0].v[0];
        handlera.v[2] = angles->v[2] - v82[0].v[2];
        handlera.v[1] = v54;
        ProjectPointOnPlane(&handlera, outLadderInfo->axis.m, &handlera);
        v55 = outLadderInfo->axis.m[2].v[1];
        v56 = outLadderInfo->axis.m[2].v[2];
        v57 = (float)((float)(p_row2->axis.m[0].v[0] * handlera.v[0]) + (float)(v55 * handlera.v[1])) + (float)(v56 * handlera.v[2]);
        v58 = (float)(v57 * v55) - handlera.v[1];
        outToCenterTarget->v[0] = (float)(v57 * p_row2->axis.m[0].v[0]) - handlera.v[0];
        outToCenterTarget->v[2] = (float)(v57 * v56) - handlera.v[2];
        outToCenterTarget->v[1] = v58;
      }
      p_row1 = (LadderInfo *)&outLadderInfo->axis.row1;
      if ( p_row2 == (LadderInfo *)&outLadderInfo->axis.row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( outLadderInfo == p_row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      v60 = (float)(outLadderInfo->axis.m[2].v[1] * outLadderInfo->axis.m[0].v[2]) - (float)(outLadderInfo->axis.m[0].v[1] * outLadderInfo->axis.m[2].v[2]);
      p_row1->axis.m[0].v[0] = v60;
      v61 = LODWORD(outLadderInfo->axis.m[0].v[0]);
      *(float *)&v61 = (float)(outLadderInfo->axis.m[0].v[0] * outLadderInfo->axis.m[2].v[2]) - (float)(outLadderInfo->axis.m[2].v[0] * outLadderInfo->axis.m[0].v[2]);
      outLadderInfo->axis.m[1].v[1] = *(float *)&v61;
      v62 = (float)(outLadderInfo->axis.m[0].v[1] * outLadderInfo->axis.m[2].v[0]) - (float)(outLadderInfo->axis.m[0].v[0] * outLadderInfo->axis.m[2].v[1]);
      outLadderInfo->axis.m[1].v[2] = v62;
      *(float *)&v61 = fsqrt((float)((float)(*(float *)&v61 * *(float *)&v61) + (float)(v60 * v60)) + (float)(v62 * v62));
      _XMM3 = v61;
      __asm
      {
        vcmpless xmm0, xmm3, xmm12
        vblendvps xmm0, xmm3, xmm11, xmm0
      }
      p_row1->axis.m[0].v[0] = (float)(1.0 / *(float *)&_XMM0) * v60;
      outLadderInfo->axis.m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * outLadderInfo->axis.m[1].v[1];
      outLadderInfo->axis.m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * outLadderInfo->axis.m[1].v[2];
      outLadderInfo->width = 15.2496;
      EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v81, p_top, LADDER_WIDTH_QUERY_DISTANCE);
      v78.m_queryShape = &v81;
      v78.m_flags = 1;
      v78.m_hint = *outHintNodeIndex;
      v78.m_bucket = LADDER_CENTERLINE;
      EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v78, v10, resultIdPool, resultFractionPool, NULL, 0x10ui64, &outResultCount, outHintNodeIndex);
      v66 = outResultCount;
      if ( outResultCount )
      {
        v67 = 0i64;
        while ( 1 )
        {
          Edge_GetLineSegment(v10, resultIdPool[v67], (vec3_t (*)[2])v86);
          v70 = LODWORD(v86[0].v[1]);
          v68 = (float)((float)((float)(v86[0].v[1] - v86[1].v[1]) * (float)(v86[0].v[1] - v86[1].v[1])) + (float)((float)(v86[0].v[0] - v86[1].v[0]) * (float)(v86[0].v[0] - v86[1].v[0]))) + (float)((float)(v86[0].v[2] - v86[1].v[2]) * (float)(v86[0].v[2] - v86[1].v[2]));
          *(float *)&v70 = fsqrt(v68);
          _XMM5 = v70;
          __asm
          {
            vcmpless xmm0, xmm5, xmm12
            vblendvps xmm0, xmm5, xmm11, xmm0
          }
          if ( (float)((float)(v86[0].v[2] - v86[1].v[2]) / *(float *)&_XMM0) <= LADDER_ALIGNMENT_THRESHOLD && (float)((float)(v86[0].v[2] - v86[1].v[2]) / *(float *)&_XMM0) >= COERCE_FLOAT(LODWORD(LADDER_ALIGNMENT_THRESHOLD) ^ _xmm) )
            break;
          v67 = ++v13;
          if ( v13 >= v66 )
            goto LABEL_59;
        }
        if ( v68 < 232.55031 )
          outLadderInfo->width = *(float *)&v70;
      }
      else
      {
LABEL_59:
        if ( printWarning )
          Com_PrintWarning(34, "WARNING: Ladder at %0.2f %0.2f %0.2f has no width edge segment.  Using default %0.2f \n", p_top->v[0], outLadderInfo->top.v[1], outLadderInfo->top.v[2], DOUBLE_15_24960041046143);
      }
      return 1;
    }
    else
    {
      if ( outToCenterTarget )
      {
        *(_QWORD *)outToCenterTarget->v = 0i64;
        outToCenterTarget->v[2] = 0.0;
      }
      return 0;
    }
  }
  else
  {
    if ( printWarning )
      Com_PrintWarning(34, "WARNING: player using ladder that has no line tagging, have level design use line tagging. See mp_firingrange.\n");
    if ( outToCenterTarget )
    {
      *(_QWORD *)outToCenterTarget->v = 0i64;
      outToCenterTarget->v[2] = 0.0;
    }
    AnglesToAxis(angles, &outLadderInfo->axis);
    outLadderInfo->axis.m[0].v[0] = COERCE_FLOAT(LODWORD(outLadderInfo->axis.m[0].v[0]) ^ _xmm);
    outLadderInfo->axis.m[0].v[1] = COERCE_FLOAT(LODWORD(outLadderInfo->axis.m[0].v[1]) ^ _xmm);
    outLadderInfo->axis.m[0].v[2] = COERCE_FLOAT(LODWORD(outLadderInfo->axis.m[0].v[2]) ^ _xmm);
    return 0;
  }
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
  WeaponAnimNumber v6; 
  bool v7; 
  int v8; 
  bool v9; 
  bool v10; 

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
    v6 = WEAP_QUICK_RAISE;
    if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler) )
      v6 = WEAP_RAISE_LADDER_CLIMB;
    v7 = BG_UsingAlternate(ps);
    v8 = BG_LadderAimRaiseTime(ps, CurrentWeaponForPlayer, v7, 0);
  }
  else
  {
    v6 = WEAP_QUICK_RAISE;
    if ( BG_Ladder_CanClimb(ps) )
    {
      if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler) )
        v6 = WEAP_RAISE_LADDER_CLIMB;
      v9 = BG_UsingAlternate(ps);
      v8 = BG_LadderClimbRaiseTime(ps, CurrentWeaponForPlayer, v9, 0);
    }
    else
    {
      v10 = BG_UsingAlternate(ps);
      v8 = BG_LadderAimRaiseTime(ps, CurrentWeaponForPlayer, v10, 0) / 2;
    }
  }
  PM_Weapon_BeginWeaponRaise(pm, pml, v6, v8, 0.0, 0, WEAPON_HAND_LEFT, ps->weapState[1].weaponState);
}

/*
==============
BG_Ladder_GetAnchorWorldPosition
==============
*/
void BG_Ladder_GetAnchorWorldPosition(const vec3_t *entityOrigin, int suitIndex, bool viewModel, vec3_t *outAnchorPos)
{
  const SuitDef *SuitDef; 
  float v9; 
  float v10; 

  if ( !outAnchorPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1911, ASSERT_TYPE_ASSERT, "(outAnchorPos)", (const char *)&queryFormat, "outAnchorPos") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  outAnchorPos->v[0] = entityOrigin->v[0];
  outAnchorPos->v[1] = entityOrigin->v[1];
  v9 = entityOrigin->v[2];
  outAnchorPos->v[2] = v9;
  if ( viewModel )
    v10 = v9 + SuitDef->ladder_anchorOffset;
  else
    v10 = v9 + SuitDef->ladder_anchorOffsetWM;
  outAnchorPos->v[2] = v10;
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
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( SuitDef )
    return SuitDef->ladder_handDistance;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1903, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  return MEMORY[0x1AC];
}

/*
==============
BG_Ladder_GetScrubOffset
==============
*/
float BG_Ladder_GetScrubOffset(const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  float v3; 
  float v4; 

  v3 = ladderTop->v[1] - ladderBottom->v[1];
  v4 = ladderTop->v[2] - ladderBottom->v[2];
  if ( fmodf_0((float)((float)(v3 * v3) + (float)((float)(ladderTop->v[0] - ladderBottom->v[0]) * (float)(ladderTop->v[0] - ladderBottom->v[0]))) + (float)(v4 * v4), handDistance * handDistance) <= 1.0 )
    return handDistance * 0.5;
  else
    return 0.0;
}

/*
==============
BG_Ladder_GetTargetAnimationTime
==============
*/
float BG_Ladder_GetTargetAnimationTime(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  float v4; 
  double ScrubOffset; 

  v4 = playerAnchorPos->v[2] - ladderBottom->v[2];
  ScrubOffset = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, handDistance);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm3, 1 }
  return (float)((float)(*(float *)&ScrubOffset + v4) * (float)(0.5 / handDistance)) - *(float *)&_XMM1;
}

/*
==============
BG_Ladder_GetTargetAnimationTimeClamped
==============
*/
float BG_Ladder_GetTargetAnimationTimeClamped(const vec3_t *playerAnchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance)
{
  double ScrubOffset; 
  float v9; 

  ScrubOffset = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, handDistance);
  _XMM1 = LODWORD(playerAnchorPos->v[2]);
  __asm { vminss  xmm2, xmm1, dword ptr [rdi+8] }
  v9 = (float)(*(float *)&_XMM2 - ladderBottom->v[2]) + *(float *)&ScrubOffset;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm3, 1 }
  return (float)(v9 * (float)(0.5 / handDistance)) - *(float *)&_XMM0;
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
__int64 BG_Ladder_MantleDropTime(const playerState_s *ps)
{
  return (unsigned int)(int)(float)((float)(ps->mantleState.endTime - ps->mantleState.startTime) * LADDER_MANTLE_WEAPON_DROP_PERCENT);
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
  playerState_s *ps; 
  float v5; 
  __int128 v6; 
  bool v10; 
  bool v11; 
  EdgeQueryCache *v12; 
  playerState_s *v13; 
  bool LadderInfo; 
  float yaw; 
  __int128 v20; 
  __int128 v21; 
  bool IsUsingScriptedOffhandWeapon; 
  __int32 v26; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  float v31; 
  bool v32; 
  const SuitDef *SuitDef; 
  float v34; 
  double Float_Internal_DebugName; 
  bool v36; 
  bool v37; 
  bool v38; 
  int v39; 
  float v40; 
  vec3_t forward; 
  Bounds bounds; 
  vec3_t end; 
  vec3_t angles; 
  LadderInfo outLadderInfo; 
  trace_t outResults; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1565, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1565, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (pm->cmd.buttons & 0x800000000000000i64) != 0 || pm->isBot )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_CheckLadderMove");
    v5 = ps->velocity.v[2];
    v6 = LODWORD(ps->velocity.v[0]);
    *(float *)&v6 = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(v5 * v5));
    _XMM3 = v6;
    __asm
    {
      vcmpless xmm0, xmm3, xmm6
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    v10 = (float)(v5 / *(float *)&_XMM0) > s_normalCompare;
    v11 = pm->cmd.serverTime - ps->jumpState.jumpTime > LADDER_RELATCH_TIME;
    v12 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)ps->clientNum);
    if ( pm->ground->walking || v10 && v11 )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x12u);
    if ( BG_IsPlayerZeroG(ps) )
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 6u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x12u);
    }
    else
    {
      if ( ps->pm_time && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu)) )
        goto LABEL_17;
      LadderInfo = 0;
      _XMM0 = pm->ground->walking;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM8 = LODWORD(FLOAT_8_0);
      __asm { vblendvps xmm0, xmm8, xmm2, xmm3 }
      v40 = *(float *)&_XMM0;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && ps->groundEntityNum == 2047 )
      {
        v39 = 1;
        LadderInfo = BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v12->ladderHintNode, &v12->ladderWidthHintNode);
        LODWORD(forward.v[0]) = LODWORD(outLadderInfo.axis.m[0].v[0]) ^ _xmm;
        LODWORD(forward.v[1]) = LODWORD(outLadderInfo.axis.m[0].v[1]) ^ _xmm;
        LODWORD(forward.v[2]) = LODWORD(outLadderInfo.axis.m[0].v[2]) ^ _xmm;
      }
      else
      {
        v39 = 0;
        if ( (ps->mantleState.flags & 0x800) != 0 )
        {
          yaw = ps->mantleState.yaw;
          angles.v[0] = 0.0;
          angles.v[1] = yaw + 180.0;
          angles.v[2] = 0.0;
          AngleVectors(&angles, &forward, NULL, NULL);
        }
        else
        {
          v20 = LODWORD(pml->forward.v[1]);
          v21 = v20;
          *(float *)&v21 = fsqrt((float)(*(float *)&v20 * *(float *)&v20) + (float)(pml->forward.v[0] * pml->forward.v[0]));
          _XMM2 = v21;
          __asm
          {
            vcmpless xmm0, xmm2, xmm6
            vblendvps xmm1, xmm2, xmm10, xmm0
          }
          *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
          forward.v[0] = pml->forward.v[0] * *(float *)&_XMM1;
          forward.v[1] = *(float *)&v20 * *(float *)&_XMM1;
        }
        forward.v[2] = 0.0;
      }
      if ( ps->pm_type < 7 )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
          ps->mantleState.flags = 0;
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x12u) && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_ladder_enabled, "bg_ladder_enabled") && (unsigned int)(ps->weapState[0].weaponState - 26) > 6 && !BG_IsUsingOffhandGestureWeapon(ps) && !BG_CarryObject_IsActive(ps) )
        {
          IsUsingScriptedOffhandWeapon = BG_IsUsingScriptedOffhandWeapon(ps);
          v13 = ps;
          if ( IsUsingScriptedOffhandWeapon )
            goto LABEL_16;
          if ( !BG_NightVisionAnyGestureIsPlaying(pm->weaponMap, ps, pm->cmd.serverTime) )
          {
            v26 = PM_GetEffectiveStance(ps) - 1;
            if ( v26 )
            {
              if ( v26 != 2 )
              {
                v13 = ps;
                if ( pm->cmd.serverTime - ps->jumpState.jumpTime < 300 )
                  goto LABEL_16;
                CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
                v28 = BG_UsingAlternate(ps);
                if ( !BG_IsForceUseWeapon(CurrentWeaponForPlayer, v28) && !BG_GameInterface_LadderDisallowed(ps) )
                {
                  if ( BG_UsingNewPlayerCollision() )
                  {
                    if ( !LadderInfo && !BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v12->ladderHintNode, &v12->ladderWidthHintNode) )
                      goto LABEL_15;
                    LadderInfo = 1;
                  }
                  bounds = *pm->bounds;
                  v29 = DCONST_DVARMPFLT_ladderPullinBoundsScale;
                  if ( !DCONST_DVARMPFLT_ladderPullinBoundsScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderPullinBoundsScale") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v29);
                  bounds.halfSize.v[0] = bounds.halfSize.v[0] * v29->current.value;
                  v30 = DCONST_DVARMPFLT_ladderPullinBoundsScale;
                  if ( !DCONST_DVARMPFLT_ladderPullinBoundsScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderPullinBoundsScale") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v30);
                  bounds.halfSize.v[1] = bounds.halfSize.v[1] * v30->current.value;
                  v31 = (float)((float)(bounds.halfSize.v[2] + bounds.midPoint.v[2]) * 0.5) + 4.0;
                  bounds.midPoint.v[2] = v31;
                  bounds.halfSize.v[2] = v31 - 8.0;
                  if ( (float)(v31 - 8.0) < 0.0 )
                  {
                    bounds.midPoint.v[2] = v31 - (float)(v31 - 8.0);
                    bounds.halfSize.v[2] = 0.0;
                  }
                  if ( bounds.halfSize.v[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 149, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
                    __debugbreak();
                  if ( bounds.halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 150, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
                    __debugbreak();
                  if ( bounds.halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 151, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
                    __debugbreak();
                  end.v[0] = (float)(v40 * forward.v[0]) + ps->origin.v[0];
                  end.v[1] = (float)(v40 * forward.v[1]) + ps->origin.v[1];
                  end.v[2] = (float)(v40 * forward.v[2]) + ps->origin.v[2];
                  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, &bounds, ps->clientNum, pm->tracemask, 0);
                  if ( outResults.fraction >= 1.0 || (outResults.surfaceFlags & 8) == 0 || pm->ground->walking && pm->cmd.forwardmove <= 0 )
                    goto LABEL_96;
                  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !BGMovingPlatforms::IsOnMovingPlatform(ps) )
                    goto LABEL_88;
                  if ( !LadderInfo )
                    BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v12->ladderHintNode, &v12->ladderWidthHintNode);
                  LODWORD(forward.v[0]) = LODWORD(outLadderInfo.axis.m[0].v[0]) ^ _xmm;
                  LODWORD(forward.v[1]) = LODWORD(outLadderInfo.axis.m[0].v[1]) ^ _xmm;
                  LODWORD(forward.v[2]) = LODWORD(outLadderInfo.axis.m[0].v[2]) ^ _xmm;
                  end.v[0] = ps->origin.v[0] - (float)(outLadderInfo.axis.m[0].v[0] * v40);
                  end.v[1] = ps->origin.v[1] - (float)(outLadderInfo.axis.m[0].v[1] * v40);
                  end.v[2] = (float)(COERCE_FLOAT(LODWORD(outLadderInfo.axis.m[0].v[2]) ^ _xmm) * v40) + ps->origin.v[2];
                  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, &bounds, ps->clientNum, pm->tracemask, 0);
                  v32 = outResults.fraction < 1.0 && (outResults.surfaceFlags & 8) != 0;
                  SuitDef = BG_GetSuitDef(ps->suitIndex);
                  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                    __debugbreak();
                  v34 = SuitDef->ladder_anchorOffset + ps->origin.v[2];
                  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_ladderVaultOffset, "ladderVaultOffset");
                  v36 = v32;
                  if ( v34 >= (float)(*(float *)&Float_Internal_DebugName + outLadderInfo.top.v[2]) )
                    v36 = 0;
                  if ( (pm->cmd.buttons & 0x10004000C0i64) != 0 && pm->cmd.serverTime - ps->mantleState.endTime > LADDER_MANTLE_SLIDE_ATTACH_TIME || !v36 )
                  {
LABEL_96:
                    PM_SetLadderMode(pm, ps, LADDER_MODE_INVALID);
                    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && v39 )
                    {
                      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_JUMP, 0, 1, &pml->holdrand);
                      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
                    }
                  }
                  else
                  {
LABEL_88:
                    v37 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
                    v38 = !v37;
                    if ( !v37 )
                      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu);
                    if ( v38 && ps->weapCommon.fWeaponPosFrac > 0.0 )
                    {
                      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 6u);
                      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 9u);
                      PM_ExitAimDownSight(pm);
                    }
                    else if ( (pm->cmd.buttons & 0x200) == 0 )
                    {
                      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 6u);
                    }
                    pm->ground->trace.surfaceFlags = outResults.surfaceFlags;
                    ps->pm_flags.m_flags[0] |= 0x40u;
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
        ps->groundEntityNum = 2047;
        pm->ground->groundPlane = 0;
        PM_SetAlmostGroundPlane(pm, 0);
        pm->ground->walking = 0;
      }
    }
LABEL_15:
    v13 = ps;
LABEL_16:
    PM_SetLadderMode(pm, v13, LADDER_MODE_INVALID);
LABEL_17:
    Sys_ProfEndNamedEvent();
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
  playerState_s *ps; 
  playerState_s *v4; 
  float v5; 
  float v6; 
  PlayerAnimStrafeStates v7; 
  float v8; 
  const dvar_t *v9; 
  PlayerAnimScriptMoveType v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 857, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 857, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footstep_LadderMove");
    if ( pm->cmd.serverTime - ps->jumpState.jumpTime >= 300 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
      {
        v4 = pm->ps;
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 78, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v5 = v4->velocity.v[0];
        v6 = v4->velocity.v[1];
        v7 = ANIM_STRAFE_NOT;
        if ( fsqrt((float)(v6 * v6) + (float)(v5 * v5)) > COERCE_FLOAT(LODWORD(v4->velocity.v[2]) & _xmm) )
          v7 = BG_DetermineStrafeCondition(pm, v6, v5);
        PM_SetStrafeCondition(pm, v7);
      }
      v8 = ps->velocity.v[2];
      v9 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
      if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        if ( ps->ladderState.mode == LADDER_MODE_SLIDE )
          v10 = ANIM_MT_LADDERSLIDE;
        else
          v10 = ANIM_MT_CLIMBUP;
      }
      else
      {
        v10 = ANIM_MT_CLIMBUP;
        if ( v8 <= 0.0 )
          v10 = ANIM_MT_CLIMBDOWN;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, v10, 0, 0);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
PM_Jump_PushOffLadder
==============
*/
void PM_Jump_PushOffLadder(const pmove_t *pm, playerState_s *ps, pml_t *pml)
{
  EdgeQueryCache *v6; 
  double UpContribution; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 v31; 
  double v32; 
  const dvar_t *v33; 
  __int128 v37; 
  float v39; 
  float v40; 
  BgWeaponMap *weaponMap; 
  float v42; 
  vec3_t vec; 
  vec3_t outMove; 
  LadderInfo outLadderInfo; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1497, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1498, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1499, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1500, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::LADDER ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::LADDER )") )
    __debugbreak();
  v6 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)ps->clientNum);
  BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v6->ladderHintNode, &v6->ladderWidthHintNode);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity);
  v8 = *(float *)&UpContribution;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &ps->velocity);
  BG_GetNormalizedMovementCmd(&pm->cmd, &outMove);
  *(float *)&UpContribution = pml->forward.v[1];
  v9 = LODWORD(outMove.v[0]);
  vec.v[0] = pml->forward.v[0];
  vec.v[2] = pml->forward.v[2];
  vec.v[1] = *(float *)&UpContribution;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v10 = LODWORD(vec.v[1]);
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  *(float *)&_XMM3 = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v14 = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM0 = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v15 = v9;
  v16 = *(float *)&v9 * *(float *)&_XMM3;
  vec.v[1] = v14;
  vec.v[0] = *(float *)&_XMM3;
  v17 = (float)((float)(*(float *)&v9 * v14) * outLadderInfo.axis.m[0].v[1]) + (float)((float)(*(float *)&v9 * *(float *)&_XMM3) * outLadderInfo.axis.m[0].v[0]);
  *(float *)&v15 = (float)(*(float *)&v9 * v14) * outLadderInfo.axis.m[1].v[1];
  *(float *)&v9 = *(float *)&v9 * *(float *)&_XMM0;
  LODWORD(v18) = COERCE_UNSIGNED_INT(v17 + (float)(*(float *)&v9 * outLadderInfo.axis.m[0].v[2])) ^ _xmm;
  *(float *)&v15 = (float)((float)(*(float *)&v15 + (float)(v16 * outLadderInfo.axis.m[1].v[0])) + (float)(*(float *)&v9 * outLadderInfo.axis.m[1].v[2])) + outMove.v[1];
  v19 = v15;
  vec.v[2] = *(float *)&_XMM0;
  *(float *)&v15 = (float)(v18 * v8) * LADDER_JUMP_UP_SCALE;
  v20 = *(float *)&v15 * outLadderInfo.axis.m[2].v[1];
  ps->velocity.v[0] = (float)(*(float *)&v15 * outLadderInfo.axis.m[2].v[0]) + ps->velocity.v[0];
  *(float *)&v15 = *(float *)&v15 * outLadderInfo.axis.m[2].v[2];
  ps->velocity.v[1] = v20 + ps->velocity.v[1];
  ps->velocity.v[2] = *(float *)&v15 + ps->velocity.v[2];
  v21 = DCONST_DVARMPFLT_ladderJumpRightScale;
  if ( !DCONST_DVARMPFLT_ladderJumpRightScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderJumpRightScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = (float)(*(float *)&v19 * v8) * v21->current.value;
  v23 = v22 * outLadderInfo.axis.m[1].v[1];
  ps->velocity.v[0] = (float)(v22 * outLadderInfo.axis.m[1].v[0]) + ps->velocity.v[0];
  v24 = v23 + ps->velocity.v[1];
  v25 = v22 * outLadderInfo.axis.m[1].v[2];
  ps->velocity.v[1] = v24;
  v26 = v25 + ps->velocity.v[2];
  v27 = v19;
  *(float *)&v27 = fsqrt((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18));
  _XMM7 = v27;
  __asm
  {
    vcmpless xmm1, xmm7, cs:__real@80000000
    vblendvps xmm1, xmm7, xmm9, xmm1
  }
  ps->velocity.v[2] = v26;
  v31 = LODWORD(FLOAT_1_0);
  *(float *)&v31 = atan2f_0((float)(1.0 / *(float *)&_XMM1) * *(float *)&v19, (float)(1.0 / *(float *)&_XMM1) * v18) * 0.15915494;
  v32 = I_fclamp(*(float *)&_XMM7, 0.0, 1.0);
  v33 = DCONST_DVARMPFLT_ladderJumpBackVelocity;
  _XMM2 = 0i64;
  __asm { vroundss xmm4, xmm2, xmm3, 1 }
  *(float *)&v31 = (float)(*(float *)&v31 - *(float *)&_XMM4) * 360.0;
  v37 = v31 & _xmm;
  *(float *)&v37 = *(float *)&v37 - 90.0;
  _XMM1 = v37;
  __asm { vmaxss  xmm2, xmm1, xmm11 }
  if ( !DCONST_DVARMPFLT_ladderJumpBackVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderJumpBackVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  v39 = (float)((float)((float)(COERCE_FLOAT(_XMM2 & _xmm) * 0.011111111) * *(float *)&v32) + (float)((float)(1.0 - *(float *)&v32) * 0.5)) * v33->current.value;
  v40 = v39 * outLadderInfo.axis.m[0].v[1];
  weaponMap = pm->weaponMap;
  ps->velocity.v[0] = (float)(v39 * outLadderInfo.axis.m[0].v[0]) + ps->velocity.v[0];
  v42 = v39 * outLadderInfo.axis.m[0].v[2];
  ps->velocity.v[1] = v40 + ps->velocity.v[1];
  ps->velocity.v[2] = v42 + ps->velocity.v[2];
  PM_ClearLadderFlag(weaponMap, ps);
}

/*
==============
PM_LadderMove
==============
*/
void PM_LadderMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  bool v9; 
  EdgeQueryCache *v10; 
  __int128 v11; 
  __int128 v12; 
  bool v16; 
  vec3_t *p_right; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  unsigned __int128 v25; 
  float v26; 
  unsigned __int128 v27; 
  double v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const char *v34; 
  float v35; 
  char forwardmove; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  char v39; 
  char rightmove; 
  float v41; 
  bool v42; 
  const dvar_t *v43; 
  float v44; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  __int128 v49; 
  float v53; 
  float v54; 
  float v55; 
  const dvar_t *v58; 
  const dvar_t *v59; 
  const char *v60; 
  float v61; 
  LadderMode mode; 
  __int128 v63; 
  float v67; 
  float v68; 
  __int128 v70; 
  __int128 v73; 
  __int128 v74; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  int v82; 
  float v83; 
  const SuitDef *SuitDef; 
  float v88; 
  bool v89; 
  const dvar_t *v90; 
  char v91; 
  LadderMode v92; 
  unsigned __int64 weaponState; 
  __int64 v94; 
  const dvar_t *v95; 
  playerState_s *v96; 
  float v97; 
  float v98; 
  float v99; 
  double Float_Internal_DebugName; 
  float v101; 
  float v102; 
  vec3_t inOutWishVel; 
  vec3_t relativePoint; 
  LadderInfo outLadderInfo; 
  vec3_t outToCenterTarget; 
  vec3_t wishdir; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_LadderMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1226, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1226, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  value = FLOAT_0_2;
  v102 = FLOAT_0_2;
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END|0x80) )
  {
    v6 = DCONST_DVARFLT_fastSideLadderScale;
    if ( !DCONST_DVARFLT_fastSideLadderScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastSideLadderScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    v102 = value;
  }
  if ( !Jump_Check(pm, pml) )
  {
    if ( PM_UseLegacyMouseLadderMove() )
    {
      v7 = (float)(pml->forward.v[2] * 2.5) + 0.625;
      I_fclamp(v7, -1.0, 1.0);
      v8 = v7;
    }
    else
    {
      v8 = FLOAT_1_0;
    }
    v9 = ps->ladderState.mode == LADDER_MODE_INVALID;
    v10 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)ps->clientNum);
    BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, &outToCenterTarget, v9, &v10->ladderHintNode, &v10->ladderWidthHintNode);
    pml->ladderWidth = outLadderInfo.width;
    pml->forward.v[2] = 0.0;
    v11 = LODWORD(pml->forward.v[0]);
    v12 = v11;
    *(float *)&v12 = fsqrt((float)(*(float *)&v11 * *(float *)&v11) + (float)(pml->forward.v[1] * pml->forward.v[1]));
    _XMM2 = v12;
    __asm
    {
      vcmpless xmm0, xmm2, xmm10
      vblendvps xmm1, xmm2, xmm7, xmm0
    }
    pml->forward.v[0] = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM1);
    pml->forward.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[1];
    pml->forward.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[2];
    v16 = PM_UseLegacyMouseLadderMove();
    _XMM8 = 0i64;
    p_right = &pml->right;
    pml->right.v[2] = 0.0;
    if ( v16 )
    {
      v19 = pml->right.v[1];
      v20 = LODWORD(p_right->v[0]);
      v21 = v20;
      *(float *)&v21 = fsqrt((float)(*(float *)&v20 * *(float *)&v20) + (float)(v19 * v19));
      _XMM2 = v21;
      __asm
      {
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm1, xmm2, xmm7, xmm0
      }
      *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
      relativePoint.v[0] = *(float *)&v20 * *(float *)&_XMM1;
      relativePoint.v[1] = v19 * *(float *)&_XMM1;
      relativePoint.v[2] = 0.0;
      ProjectPointOnPlane(&relativePoint, outLadderInfo.axis.m, &pml->right);
    }
    else
    {
      v25 = LODWORD(outLadderInfo.axis.m[0].v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
      v26 = outLadderInfo.axis.m[0].v[1];
      pml->right.v[1] = *(float *)&v25;
      v27 = v25;
      *(float *)&v27 = fsqrt((float)(*(float *)&v25 * *(float *)&v25) + (float)(v26 * v26));
      _XMM2 = v27;
      __asm
      {
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm1, xmm2, xmm7, xmm0
      }
      p_right->v[0] = v26 * (float)(1.0 / *(float *)&_XMM1);
      pml->right.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[1];
      pml->right.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[2];
      p_right->v[0] = COERCE_FLOAT(LODWORD(p_right->v[0]) ^ _xmm);
      pml->right.v[1] = COERCE_FLOAT(LODWORD(pml->right.v[1]) ^ _xmm);
      pml->right.v[2] = COERCE_FLOAT(LODWORD(pml->right.v[2]) ^ _xmm);
    }
    v31 = PM_CmdScale(ps, &pm->cmd);
    v101 = *(float *)&v31;
    inOutWishVel.v[0] = 0.0;
    inOutWishVel.v[1] = 0.0;
    inOutWishVel.v[2] = 0.0;
    v32 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      v33 = DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale;
      if ( DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale )
        goto LABEL_30;
      v34 = "player_ladderEnhancedVerticalSpeedScale";
    }
    else
    {
      v33 = DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale;
      if ( DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale )
        goto LABEL_30;
      v34 = "player_ladderVerticalSpeedScale";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v34) )
      __debugbreak();
LABEL_30:
    Dvar_CheckFrontendServerThread(v33);
    v35 = v33->current.value;
    forwardmove = pm->cmd.forwardmove;
    if ( forwardmove )
      inOutWishVel.v[2] = (float)((float)(v35 * v8) * *(float *)&v31) * (float)forwardmove;
    v37 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( !v37->current.enabled )
      goto LABEL_41;
    v38 = DCONST_DVARMPBOOL_ladderEnableStrafe;
    if ( !DCONST_DVARMPBOOL_ladderEnableStrafe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableStrafe") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( v38->current.enabled )
LABEL_41:
      v39 = 1;
    else
      v39 = 0;
    rightmove = pm->cmd.rightmove;
    if ( rightmove && v39 )
    {
      v41 = (float)(*(float *)&v31 * value) * _mm_cvtepi32_ps((__m128i)(unsigned int)rightmove).m128_f32[0];
      inOutWishVel.v[0] = (float)(v41 * p_right->v[0]) + inOutWishVel.v[0];
      inOutWishVel.v[1] = (float)(v41 * pml->right.v[1]) + inOutWishVel.v[1];
      inOutWishVel.v[2] = (float)(v41 * pml->right.v[2]) + inOutWishVel.v[2];
    }
    v42 = (pm->cmd.buttons & 0x4000000000i64) != 0;
    if ( (pm->cmd.buttons & 0x4000000000i64) != 0 )
    {
      v43 = DCONST_DVARMPFLT_ladderCrouchSlideSpeed;
      if ( !DCONST_DVARMPFLT_ladderCrouchSlideSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderCrouchSlideSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      LODWORD(v44) = v43->current.integer ^ _xmm;
      if ( v44 >= ps->velocity.v[2] )
      {
        v45 = DCONST_DVARMPFLT_ladderCrouchSlideAccel;
        if ( !DCONST_DVARMPFLT_ladderCrouchSlideAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderCrouchSlideAccel") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        v44 = ps->velocity.v[2] - (float)(v45->current.value * pml->frametime);
      }
      inOutWishVel.v[2] = v44;
    }
    BG_GetNormalizedMovementCmd(&pm->cmd, &relativePoint);
    v46 = relativePoint.v[0];
    if ( v42 )
      goto LABEL_62;
    v47 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled && !v39 )
LABEL_62:
      v48 = FLOAT_1_0;
    else
      LODWORD(v48) = LODWORD(v46) & _xmm;
    v49 = LODWORD(outToCenterTarget.v[0]);
    *(float *)&v49 = fsqrt((float)((float)(*(float *)&v49 * *(float *)&v49) + (float)(outToCenterTarget.v[1] * outToCenterTarget.v[1])) + (float)(outToCenterTarget.v[2] * outToCenterTarget.v[2]));
    _XMM3 = v49;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    v53 = outToCenterTarget.v[0] * (float)(1.0 / *(float *)&_XMM1);
    v54 = outToCenterTarget.v[1] * (float)(1.0 / *(float *)&_XMM1);
    v55 = outToCenterTarget.v[2] * (float)(1.0 / *(float *)&_XMM1);
    *(float *)&v49 = *(float *)&v49 / LADDER_MAGNETISM_SCALE_DIST;
    _XMM0 = v49;
    __asm { vminss  xmm12, xmm0, xmm7 }
    v58 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( !v58->current.enabled || v39 )
    {
      v59 = DCONST_DVARMPFLT_ladderMagnetismSpeed;
      if ( DCONST_DVARMPFLT_ladderMagnetismSpeed )
        goto LABEL_74;
      v60 = "ladderMagnetismSpeed";
    }
    else
    {
      v59 = DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed;
      if ( DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed )
        goto LABEL_74;
      v60 = "ladderMagnetismEnhancedSpeed";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v60) )
      __debugbreak();
LABEL_74:
    Dvar_CheckFrontendServerThread(v59);
    v61 = (float)(v59->current.value * *(float *)&_XMM12) * v48;
    inOutWishVel.v[0] = (float)(v61 * v53) + inOutWishVel.v[0];
    inOutWishVel.v[1] = (float)(v61 * v54) + inOutWishVel.v[1];
    inOutWishVel.v[2] = (float)(v61 * v55) + inOutWishVel.v[2];
    if ( ps->weapCommon.fWeaponPosFrac <= 0.0 )
    {
      mode = LADDER_MODE_INVALID;
    }
    else
    {
      mode = LADDER_MODE_INVALID;
      if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 6u) )
      {
        inOutWishVel.v[0] = 0.0;
        inOutWishVel.v[1] = 0.0;
        inOutWishVel.v[2] = 0.0;
        *(_QWORD *)ps->velocity.v = 0i64;
        ps->velocity.v[2] = 0.0;
      }
    }
    BGMovingPlatformClient::AdjustWishVelocityForLadder(pm->movingPlatforms, pm, pml, &pml->right, v35, v8, v101, v102, &inOutWishVel, outLadderInfo.axis.m);
    v63 = LODWORD(inOutWishVel.v[1]);
    *(float *)&v63 = fsqrt((float)((float)(*(float *)&v63 * *(float *)&v63) + (float)(inOutWishVel.v[0] * inOutWishVel.v[0])) + (float)(inOutWishVel.v[2] * inOutWishVel.v[2]));
    _XMM3 = v63;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    wishdir.v[0] = inOutWishVel.v[0] * (float)(1.0 / *(float *)&_XMM1);
    wishdir.v[1] = inOutWishVel.v[1] * (float)(1.0 / *(float *)&_XMM1);
    wishdir.v[2] = inOutWishVel.v[2] * (float)(1.0 / *(float *)&_XMM1);
    PM_Accelerate(pm, pml, &wishdir, *(float *)&v63, 9.0);
    if ( !pm->cmd.forwardmove && !v42 )
    {
      v67 = ps->velocity.v[2];
      v68 = (float)ps->gravity * pml->frametime;
      if ( v67 <= 0.0 )
      {
        v70 = LODWORD(ps->velocity.v[2]);
        *(float *)&v70 = v67 + v68;
        _XMM2 = v70;
        __asm
        {
          vcmpltss xmm0, xmm8, xmm2
          vblendvps xmm0, xmm2, xmm8, xmm0
        }
        ps->velocity.v[2] = *(float *)&_XMM0;
      }
      else
      {
        ps->velocity.v[2] = v67 - v68;
        if ( (float)(v67 - v68) < 0.0 )
          ps->velocity.v[2] = 0.0;
      }
    }
    if ( pm->cmd.rightmove || v42 )
    {
      v82 = _xmm;
    }
    else
    {
      v73 = LODWORD(pml->right.v[1]);
      v74 = v73;
      *(float *)&v74 = fsqrt((float)(*(float *)&v73 * *(float *)&v73) + (float)(p_right->v[0] * p_right->v[0]));
      _XMM2 = v74;
      __asm
      {
        vcmpless xmm0, xmm2, xmm9
        vblendvps xmm1, xmm2, xmm7, xmm0
      }
      v78 = p_right->v[0] * (float)(1.0 / *(float *)&_XMM1);
      v79 = *(float *)&v73 * (float)(1.0 / *(float *)&_XMM1);
      v80 = ps->velocity.v[0];
      v81 = (float)(v79 * ps->velocity.v[1]) + (float)(v80 * v78);
      v82 = _xmm;
      if ( v81 != 0.0 )
      {
        v83 = (float)(COERCE_FLOAT(LODWORD(v81) ^ _xmm) * v78) + v80;
        ps->velocity.v[0] = v83;
        ps->velocity.v[1] = (float)(COERCE_FLOAT(LODWORD(v81) ^ _xmm) * v79) + ps->velocity.v[1];
        *(float *)&_XMM1 = (float)(v81 * pml->frametime) * LADDER_FRICTION;
        if ( COERCE_FLOAT(LODWORD(v81) & _xmm) > COERCE_FLOAT(_XMM1 & _xmm) )
        {
          if ( COERCE_FLOAT(_XMM1 & _xmm) < 1.0 )
          {
            if ( COERCE_FLOAT(LODWORD(v81) & _xmm) < 1.0 )
            {
              *(float *)&_XMM1 = v81;
            }
            else
            {
              __asm { vcmpless xmm0, xmm8, xmm1 }
              _XMM1 = LODWORD(FLOAT_N1_0);
              __asm { vblendvps xmm1, xmm1, xmm7, xmm0 }
            }
          }
          ps->velocity.v[0] = (float)((float)(v81 - *(float *)&_XMM1) * v78) + v83;
          ps->velocity.v[1] = (float)((float)(v81 - *(float *)&_XMM1) * v79) + ps->velocity.v[1];
        }
      }
    }
    if ( !pm->ground->walking && (float)((float)((float)((float)(ps->origin.v[1] - outLadderInfo.bottom.v[1]) * outLadderInfo.axis.m[0].v[1]) + (float)((float)(ps->origin.v[0] - outLadderInfo.bottom.v[0]) * outLadderInfo.axis.m[0].v[0])) + (float)((float)(ps->origin.v[2] - outLadderInfo.bottom.v[2]) * outLadderInfo.axis.m[0].v[2])) > (float)(pm->bounds->halfSize.v[0] + 0.15000001) )
    {
      ps->velocity.v[0] = ps->velocity.v[0] - (float)(outLadderInfo.axis.m[0].v[0] * 50.0);
      ps->velocity.v[1] = ps->velocity.v[1] - (float)(50.0 * outLadderInfo.axis.m[0].v[1]);
      ps->velocity.v[2] = ps->velocity.v[2] - (float)(50.0 * outLadderInfo.axis.m[0].v[2]);
    }
    PM_UpdatePlayerCollision(pm, pml, 0, 1, 1, 1);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_UpdateMovementDir(pm, pml, 0);
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1914, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v88 = SuitDef->ladder_anchorOffset + ps->origin.v[2];
    v89 = (float)((float)((float)(outLadderInfo.axis.m[2].v[1] * ps->velocity.v[1]) + (float)(outLadderInfo.axis.m[2].v[0] * ps->velocity.v[0])) + (float)(outLadderInfo.axis.m[2].v[2] * ps->velocity.v[2])) > 0.0;
    v90 = DVARBOOL_killswitch_ladder_akimbo_cresting_fix_enabled;
    if ( !DVARBOOL_killswitch_ladder_akimbo_cresting_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_ladder_akimbo_cresting_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v90);
    if ( !v90->current.enabled || ps->ladderState.mode )
    {
      v91 = 1;
      mode = ps->ladderState.mode;
    }
    else
    {
      v91 = 0;
    }
    if ( pm->ground->walking && mode == LADDER_MODE_SLIDE )
    {
      v92 = LADDER_MODE_INVALID;
    }
    else if ( v42 && (mode == LADDER_MODE_SLIDE || (weaponState = ps->weapState[1].weaponState, (unsigned int)weaponState <= 0x2F) && (v94 = 0x800000001020i64, _bittest64(&v94, weaponState))) )
    {
      if ( ps->weapCommon.fWeaponPosFrac > 0.0 )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 9u);
        PM_ExitAimDownSight(pm);
      }
      v92 = LADDER_MODE_SLIDE;
    }
    else
    {
      v95 = DCONST_DVARMPFLT_ladderVaultOffset;
      if ( !DCONST_DVARMPFLT_ladderVaultOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderVaultOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      if ( v88 >= (float)(outLadderInfo.top.v[2] + v95->current.value) && v89 )
      {
        if ( ps->ladderState.mode != LADDER_MODE_VAULTING )
        {
          PM_SetLadderMode(pm, ps, LADDER_MODE_VAULTING);
          v96 = pm->ps;
          v97 = (float)(COERCE_FLOAT(LODWORD(LADDER_VAULT_NUDGE_DIST) ^ v82) * outLadderInfo.axis.m[0].v[0]) + v96->origin.v[0];
          v98 = (float)(COERCE_FLOAT(LODWORD(LADDER_VAULT_NUDGE_DIST) ^ v82) * outLadderInfo.axis.m[0].v[1]) + v96->origin.v[1];
          v99 = (float)(COERCE_FLOAT(LODWORD(LADDER_VAULT_NUDGE_DIST) ^ v82) * outLadderInfo.axis.m[0].v[2]) + (float)(outLadderInfo.top.v[2] + 0.00000011920929);
          pm->m_stepHeight = v99 - ps->origin.v[2];
          pm->m_flags |= 0x100u;
          ps->origin.v[0] = v97;
          ps->origin.v[1] = v98;
          ps->origin.v[2] = v99;
        }
        goto LABEL_132;
      }
      if ( v91 && (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_ladderCresting, "ladderCresting"), v88 >= (float)(outLadderInfo.top.v[2] - *(float *)&Float_Internal_DebugName)) )
      {
        v92 = LADDER_MODE_CRESTING;
      }
      else
      {
        v92 = LADDER_MODE_CLIMB;
        if ( COERCE_FLOAT(LODWORD(ps->velocity.v[2]) & _xmm) <= 0.00000011920929 )
          v92 = LADDER_MODE_STATIONARY;
      }
    }
    PM_SetLadderMode(pm, ps, v92);
LABEL_132:
    PM_Ladder_ClampViewAngles(pm, ps, &outLadderInfo);
    goto LABEL_133;
  }
  PM_AirMove(pm, pml);
LABEL_133:
  Sys_ProfEndNamedEvent();
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
  playerState_s *ps; 
  int weaponState; 
  const Weapon *CurrentWeaponForPlayer; 
  bool CanAim; 
  playerState_s *v8; 
  int v9; 
  bool v10; 
  bool IsLadderWeapon; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 985, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 986, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 988, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 988, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = ps->weapState[0].weaponState;
  if ( ps->ladderState.mode == LADDER_MODE_SLIDE )
  {
    if ( weaponState == 49 )
      goto LABEL_18;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x10u) )
    {
      PM_StartWeaponAnim(ps, WEAP_LADDER_SLIDE, WEAPON_HAND_LEFT);
      PM_StartWeaponAnim(ps, WEAP_LADDER_SLIDE, WEAPON_HAND_DEFAULT);
      ps->weapState[0].weaponState = 49;
      ps->weapState[1].weaponState = 49;
      return;
    }
  }
  if ( weaponState != 49 )
    return;
LABEL_18:
  if ( ps->ladderState.mode != LADDER_MODE_SLIDE )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( (float)((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) <= 0.00000011920929 || pm->cmd.forwardmove || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      CanAim = BG_Ladder_CanAim(CurrentWeaponForPlayer, ps, 0);
      v8 = ps;
      if ( CanAim )
      {
        ps->weapState[1].weaponState = 47;
        ps->weapState[0].weaponState = 0;
        v9 = 1;
      }
      else
      {
        if ( !BG_Ladder_CanClimb(ps) )
          return;
        ps->weapState[0].weaponState = 47;
        ps->weapState[1].weaponState = 47;
        v10 = BG_UsingAlternate(ps);
        IsLadderWeapon = BG_IsLadderWeapon(CurrentWeaponForPlayer, v10);
        v8 = ps;
        v9 = IsLadderWeapon + 68;
      }
      PM_StartWeaponAnim(v8, (WeaponAnimNumber)v9, WEAPON_HAND_DEFAULT);
      PM_StartWeaponAnim(ps, WEAP_LADDER_CLIMB, WEAPON_HAND_LEFT);
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
  bool v9; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  const char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  double v27; 
  const dvar_t *v28; 
  float v29; 
  float integer; 
  const dvar_t *v31; 
  float v32; 
  const dvar_t *v33; 
  float modeStartTime; 
  double v35; 
  float v36; 
  float v37; 
  double v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  const dvar_t *v43; 
  float v44; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  const dvar_t *v49; 
  bool v50; 
  const dvar_t *v51; 
  float v52; 
  const dvar_t *v53; 
  float v54; 
  const dvar_t *v55; 
  float v56; 
  const dvar_t *v57; 
  float v58; 
  const dvar_t *v59; 
  float v60; 
  float v61; 
  const dvar_t *v62; 
  float v63; 
  vec3_t worldAnglesCenter; 
  viewClampState clamp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 904, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 905, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, ps);
  IsLadderWeapon = BG_IsLadderWeapon(BestLadderWeapon, 0);
  mode = ps->ladderState.mode;
  v9 = IsLadderWeapon;
  if ( (unsigned int)(mode - 2) <= 1 && IsLadderWeapon )
  {
    v10 = DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_base_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v12 = DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_max_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value;
    v14 = DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_down_slope_begin_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.value;
    v16 = DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw )
    {
      v17 = "bg_ladder_aim_pitch_down_slope_end_yaw";
      goto LABEL_31;
    }
  }
  else
  {
    v18 = DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_base_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    value = v18->current.value;
    v19 = DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_max_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v13 = v19->current.value;
    v20 = DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_down_slope_begin_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v15 = v20->current.value;
    v16 = DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw )
    {
      v17 = "bg_ladder_climb_pitch_down_slope_end_yaw";
LABEL_31:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v17) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v16);
  v21 = v16->current.value;
  v22 = vectoyaw((const vec2_t *)ladderInfo);
  v23 = *(float *)&v22 + 180.0;
  v24 = AngleNormalize360(*(float *)&v22 + 180.0);
  v25 = v23;
  v26 = AngleDelta(*(const float *)&v24, ps->viewangles.v[1]);
  v27 = ApplyLinearMap(COERCE_FLOAT(LODWORD(v26) & _xmm) - v15, v15, v21);
  v28 = DCONST_DVARINT_bg_ladder_clamp_interp_accel_time;
  v29 = (float)(*(float *)&v27 * (float)(value - v13)) + v13;
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_accel_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_accel_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  integer = (float)v28->current.integer;
  v31 = DCONST_DVARINT_bg_ladder_clamp_interp_decel_time;
  clamp.accelTime = integer * 0.001;
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_decel_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_decel_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v32 = (float)v31->current.integer;
  v33 = DCONST_DVARINT_bg_ladder_clamp_interp_total_time;
  clamp.decelTime = v32 * 0.001;
  if ( !DCONST_DVARINT_bg_ladder_clamp_interp_total_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_clamp_interp_total_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  clamp.totalTime = (float)v33->current.integer * 0.001;
  modeStartTime = (float)ps->ladderState.modeStartTime;
  clamp.min.start.v[0] = ps->ladderState.startViewAngles.v[0];
  clamp.startTime = modeStartTime * 0.001;
  v35 = AngleDelta(ps->ladderState.startViewAngles.v[1], v25);
  v36 = ps->ladderState.startViewAngles.v[0];
  v37 = *(float *)&v35 + v25;
  *(float *)&v35 = ps->ladderState.startViewAngles.v[1];
  clamp.min.start.v[1] = v37;
  clamp.max.start.v[0] = v36;
  v38 = AngleDelta(*(const float *)&v35, v25);
  clamp.max.start.v[1] = *(float *)&v38 + v25;
  clamp.resistMin.start.v[0] = 0.0;
  clamp.resistMin.start.v[1] = 0.0;
  clamp.resistMax.start.v[0] = 0.0;
  clamp.resistMax.start.v[1] = 0.0;
  if ( mode == LADDER_MODE_STATIONARY && v9 )
  {
    v39 = DCONST_DVARFLT_bg_ladder_aim_yaw_cap;
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v25 - v39->current.value;
    v41 = DCONST_DVARFLT_bg_ladder_aim_yaw_cap;
    clamp.min.goal.v[1] = v40;
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = v25 + v41->current.value;
    v43 = DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp;
    clamp.max.goal.v[1] = v42;
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v44 = v43->current.value;
    v45 = DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp;
    clamp.resistMin.goal.v[1] = v44;
    if ( !DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    v46 = v45->current.value;
    v47 = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    clamp.resistMax.goal.v[1] = v46;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    v48 = v47->current.value;
    v49 = DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp;
    clamp.resistMin.goal.v[0] = v48;
    if ( !DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp )
    {
      v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_aim_pitch_soft_angle_clamp");
      goto LABEL_78;
    }
  }
  else
  {
    v51 = DCONST_DVARFLT_bg_ladder_climb_yaw_cap;
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    v52 = v25 - v51->current.value;
    v53 = DCONST_DVARFLT_bg_ladder_climb_yaw_cap;
    clamp.min.goal.v[1] = v52;
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_cap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v25 + v53->current.value;
    v55 = DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp;
    clamp.max.goal.v[1] = v54;
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v56 = v55->current.value;
    v57 = DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp;
    clamp.resistMin.goal.v[1] = v56;
    if ( !DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_yaw_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    v58 = v57->current.value;
    v59 = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    clamp.resistMax.goal.v[1] = v58;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    v60 = v59->current.value;
    v49 = DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp;
    clamp.resistMin.goal.v[0] = v60;
    if ( !DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp )
    {
      v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_climb_pitch_soft_angle_clamp");
LABEL_78:
      if ( v50 )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v49);
  v61 = v49->current.value;
  v62 = DCONST_DVARFLT_bg_ladder_pitch_up_cap;
  clamp.resistMax.goal.v[0] = v61;
  if ( !DCONST_DVARFLT_bg_ladder_pitch_up_cap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_pitch_up_cap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  LODWORD(clamp.min.goal.v[0]) = v62->current.integer ^ _xmm;
  v63 = (float)pm->cmd.serverTime * 0.001;
  clamp.max.goal.v[0] = v29;
  worldAnglesCenter.v[0] = 0.0;
  worldAnglesCenter.v[1] = 0.0;
  worldAnglesCenter.v[2] = 0.0;
  BG_UpdateViewAngleClamp(v63, &worldAnglesCenter, &clamp, ps);
}

/*
==============
PM_Ladder_GetChangeWeapon
==============
*/
char PM_Ladder_GetChangeWeapon(pmove_t *pm, const Weapon **outWeapon)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *RequestedWeapon; 
  const dvar_t *v7; 
  const Weapon *BestLadderWeapon; 
  unsigned __int64 weaponState; 
  unsigned __int64 v11; 
  const Weapon *v12; 
  bool v13; 
  bool v14; 
  __int64 v15; 
  bool v16; 
  char v17; 
  __int64 v18; 
  bool v19; 
  char v20; 
  char v21; 
  const Weapon *Buf2; 

  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1128, ASSERT_TYPE_ASSERT, "(outWeapon)", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1130, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1130, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  v7 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  Buf2 = RequestedWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, ps);
    weaponState = ps->weapState[1].weaponState;
    v11 = ps->weapState[0].weaponState;
    v12 = BestLadderWeapon;
    v14 = 0;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !BG_HasLadderHand(ps) )
    {
      v13 = BG_UsingAlternate(ps);
      if ( !BG_IsLadderWeapon(CurrentWeaponForPlayer, v13) || ps->weapCommon.fWeaponPosFrac <= 0.0 )
        v14 = 1;
    }
    v16 = 0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && BG_HasLadderHand(ps) )
    {
      if ( (unsigned int)weaponState > 0x32 || (v15 = 0x4000000001F82i64, !_bittest64(&v15, weaponState)) )
        v16 = 1;
    }
    v17 = v14 || v16;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && BG_HasLadderHand(ps) && (_DWORD)v11 == 1 || (unsigned int)v11 <= 0x30 && (v18 = 0x1000000012040i64, _bittest64(&v18, v11)) && !BG_GetAmmoInClip(ps, CurrentWeaponForPlayer, 0, WEAPON_HAND_DEFAULT) && ps->ladderState.mode != LADDER_MODE_SLIDE )
      v17 = 1;
    v19 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && memcmp_0(CurrentWeaponForPlayer, Buf2, 0x3Cui64) && BG_HasLadderHand(ps) && (_DWORD)weaponState != 50;
    if ( ps->ladderState.mode == LADDER_MODE_VAULTING )
      v19 = 1;
    v20 = v19 | v17;
    if ( BG_HasLadderHand(ps) && !memcmp_0(CurrentWeaponForPlayer, Buf2, 0x3Cui64) && ((unsigned int)(weaponState - 7) <= 5 || (_DWORD)weaponState == 50 || (unsigned int)(v11 - 7) <= 5 || (_DWORD)v11 == 50) )
      v20 = 0;
    v21 = 0;
    if ( (_DWORD)v11 != 44 )
      v21 = v20;
    if ( v21 )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || ps->ladderState.mode == LADDER_MODE_VAULTING )
        v12 = Buf2;
    }
    else
    {
      v12 = CurrentWeaponForPlayer;
    }
    *outWeapon = v12;
    return v21;
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
void PM_Ladder_ResolveCharacterCollision(pmove_t *pm, const BgAntiLagEntityInfo *entityInfo, const float ladderWidth)
{
  playerState_s *ps; 
  WorldUpReferenceFramePM *p_refFrame; 
  double UpContribution; 
  float v8; 
  double v9; 
  double RightContribution; 
  vec3_t vec; 
  vec3_t outOrigin; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1198, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1198, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !entityInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 1200, ASSERT_TYPE_ASSERT, "(entityInfo)", (const char *)&queryFormat, "entityInfo") )
    __debugbreak();
  BgAntiLagEntity_GetOrigin(entityInfo, &outOrigin);
  vec.v[0] = outOrigin.v[0] - ps->origin.v[0];
  vec.v[1] = outOrigin.v[1] - ps->origin.v[1];
  p_refFrame = &pm->refFrame;
  vec.v[2] = outOrigin.v[2] - ps->origin.v[2];
  UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
  v8 = *(float *)&UpContribution;
  v9 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &vec);
  if ( (float)(*(float *)&v9 * v8) >= 0.0 )
  {
    RightContribution = WorldUpReferenceFrame::GetRightContribution(p_refFrame, &vec);
    if ( COERCE_FLOAT(LODWORD(RightContribution) & _xmm) <= ladderWidth )
      WorldUpReferenceFrame::SetUpContribution(p_refFrame, 0.0, &ps->velocity);
  }
}

/*
==============
PM_SetLadderMode
==============
*/
void PM_SetLadderMode(pmove_t *const pm, playerState_s *ps, LadderMode mode)
{
  LadderMode v6; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v9; 
  entity_event_t v10; 
  float v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 108, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ladder.cpp", 109, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = ps->ladderState.mode;
  if ( v6 != mode )
  {
    if ( mode == LADDER_MODE_SLIDE )
    {
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      v9 = PM_GroundSurfaceType(pm);
      v10 = EV_LADDER_START_SLIDE;
    }
    else
    {
      if ( v6 != LADDER_MODE_SLIDE || mode == LADDER_MODE_INVALID )
        goto LABEL_14;
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      v9 = PM_GroundSurfaceType(pm);
      v10 = EV_LADDER_STOP_SLIDE;
    }
    BG_AddPredictableEventToPlayerstate(v10, v9, serverTime, weaponMap, ps);
LABEL_14:
    ps->ladderState.modeStartTime = pm->cmd.serverTime;
    ps->ladderState.mode = mode;
    ps->ladderState.startViewAngles.v[0] = ps->viewangles.v[0];
    ps->ladderState.startViewAngles.v[1] = ps->viewangles.v[1];
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v13 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0];
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    ps->ladderState.startViewAngles.v[0] = (float)((float)(v13 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm0, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    ps->ladderState.startViewAngles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( mode == LADDER_MODE_INVALID )
      PM_ClearLadderFlag(pm->weaponMap, ps);
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

