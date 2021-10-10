/*
==============
XAnimLadderClimb_AnimTimeDifference
==============
*/

double __fastcall XAnimLadderClimb_AnimTimeDifference(float targetAnimTime, float currentAnimTime)
{
  double result; 

  *(float *)&result = ?XAnimLadderClimb_AnimTimeDifference@@YAMMM@Z(targetAnimTime, currentAnimTime);
  return result;
}

/*
==============
XAnimLadderClimb_DrawDebug
==============
*/

void __fastcall XAnimLadderClimb_DrawDebug(const DObj *obj, unsigned int animIndex)
{
  ?XAnimLadderClimb_DrawDebug@@YAXPEBUDObj@@I@Z(obj, animIndex);
}

/*
==============
XAnimLadderClimb_GetActiveStopAnim
==============
*/

unsigned int __fastcall XAnimLadderClimb_GetActiveStopAnim(XAnimTree *tree, unsigned int grabsParentIndex)
{
  return ?XAnimLadderClimb_GetActiveStopAnim@@YAIPEAUXAnimTree@@I@Z(tree, grabsParentIndex);
}

/*
==============
XAnimLadderClimb_GetClampedAnchorPos
==============
*/

bool __fastcall XAnimLadderClimb_GetClampedAnchorPos(XAnimLadderClimb *node, XAnimTree *tree, tmat33_t<vec3_t> *ladderAxis, unsigned int climbAnimIndex, float currentAnimTime, vec3_t *inOutAnchorPos)
{
  return ?XAnimLadderClimb_GetClampedAnchorPos@@YA_NPEAUXAnimLadderClimb@@PEAUXAnimTree@@AEAT?$tmat33_t@Tvec3_t@@@@IMPEATvec3_t@@@Z(node, tree, ladderAxis, climbAnimIndex, currentAnimTime, inOutAnchorPos);
}

/*
==============
XAnimLadderClimb_GetStopTimeInfo
==============
*/

void __fastcall XAnimLadderClimb_GetStopTimeInfo(XAnimTree *tree, unsigned int climbAnimIndex, float currentAnimTime, float targetAnimTime, int *outTargetGrabIndex, float *outTargetGrabAnimTime, float *outPrevGrabAnimTime)
{
  ?XAnimLadderClimb_GetStopTimeInfo@@YAXPEAUXAnimTree@@IMMPEAHPEAM2@Z(tree, climbAnimIndex, currentAnimTime, targetAnimTime, outTargetGrabIndex, outTargetGrabAnimTime, outPrevGrabAnimTime);
}

/*
==============
XAnimLadderClimb_Register
==============
*/

void XAnimLadderClimb_Register(void)
{
  ?XAnimLadderClimb_Register@@YAXXZ();
}

/*
==============
XAnimLadderClimb_GetRaiseContactTimeAndAnimTime
==============
*/

void __fastcall XAnimLadderClimb_GetRaiseContactTimeAndAnimTime(const vec3_t *anchorPos, vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance, float ladderSpeed, float *outContactTime, float *outContactAnimTime)
{
  ?XAnimLadderClimb_GetRaiseContactTimeAndAnimTime@@YAXTvec3_t@@AEAT1@AEBT1@MMAEAM3@Z(anchorPos, ladderBottom, ladderTop, handDistance, ladderSpeed, outContactTime, outContactAnimTime);
}

/*
==============
XAnimLadderClimb_Init
==============
*/
void XAnimLadderClimb_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
  *((_QWORD *)nodeData + 2) = 0i64;
  *((_QWORD *)nodeData + 3) = 0i64;
  *((_DWORD *)nodeData + 8) = 0;
  *((_DWORD *)nodeData + 13) = 1094713344;
  *((_DWORD *)nodeData + 20) = 0;
  *((_BYTE *)nodeData + 84) = 0;
  *((_DWORD *)nodeData + 12) = 0;
}

/*
==============
XAnimLadderClimb_Destroy
==============
*/
void XAnimLadderClimb_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimLadderClimb_Update
==============
*/
void XAnimLadderClimb_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  __int128 v7; 
  XAnimSubTreeID subTreeID; 
  const XAnim_s *SubTreeAnims; 
  unsigned int NumChildren; 
  unsigned int ChildAt; 
  unsigned int v17; 
  XAnimTree *tree; 
  unsigned int v19; 
  const dvar_t *v20; 
  unsigned int v21; 
  bool v22; 
  bool v23; 
  double Time; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v34; 
  __int128 v35; 
  int v36; 
  unsigned int v37; 
  double GoalWeight; 
  float v39; 
  float v40; 
  double ScrubOffset; 
  float v44; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  double v52; 
  float v53; 
  float v55; 
  __int128 v62; 
  double v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  bool v67; 
  XAnimTree *v71; 
  int v72; 
  unsigned int v73; 
  unsigned int v74; 
  double v75; 
  double v76; 
  XModelNameMap *v77; 
  double Weight; 
  const dvar_t *v79; 
  double v85; 
  __int128 v86; 
  __int128 v87; 
  __int128 v89; 
  __int128 v90; 
  __int128 v97; 
  bool v98; 
  double Float_Internal_DebugName; 
  float v102; 
  unsigned int v103; 
  double Length; 
  float v105; 
  double v106; 
  float v107; 
  bool v108; 
  double v109; 
  XModelNameMap *v110; 
  bool v111; 
  unsigned __int8 v112; 
  float rate; 
  int outTargetGrabIndex; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int graftAnimIndex; 
  unsigned int outTargetGrabAnimTime[3]; 
  float v118; 
  vec3_t playerAnchorPos; 
  tmat33_t<vec3_t> axis; 

  subTreeID = animInfo->subTreeID;
  cachedModelNameMap = modelNameMap;
  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, subTreeID);
  NumChildren = XAnimGetNumChildren(obj->tree->anims, animInfo->animIndex);
  _XMM8 = 0i64;
  ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, 0);
  if ( animInfo->state.weight == 0.0 && animInfo->state.goalWeight == 0.0 )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, ladderBlendTime, 1, LINEAR);
    return;
  }
  v17 = XAnimGetGraftAnimIndex(animInfoIndex);
  tree = obj->tree;
  graftAnimIndex = v17;
  XAnimLadderClimb_SetScrubbedNotetracks_r(tree, v17, animInfo);
  v19 = 0;
  if ( NumChildren > 1 )
    v19 = XAnimGetChildAt(obj->tree->anims, animInfo->animIndex, 1u);
  v20 = DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs;
  v21 = v19;
  if ( !DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_climb_enable_grabs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v22 = v20->current.enabled && v21;
  v111 = v22;
  v23 = (unsigned __int16)(obj->entnum - 2049) <= 1u;
  AnglesToAxis((const vec3_t *)nodeData + 3, &axis);
  Time = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
  v25 = *(float *)&Time;
  if ( *((_BYTE *)nodeData + 60) && XAnimLadderClimb_GetClampedAnchorPos((XAnimLadderClimb *)nodeData, obj->tree, &axis, ChildAt, *(float *)&Time, &playerAnchorPos) )
  {
    v112 = 1;
  }
  else
  {
    v26 = *((float *)nodeData + 1);
    playerAnchorPos.v[0] = *(float *)nodeData;
    v7 = *((unsigned int *)nodeData + 2);
    playerAnchorPos.v[2] = *((float *)nodeData + 2);
    playerAnchorPos.v[1] = v26;
    v112 = 0;
  }
  *(double *)&v7 = BG_Ladder_GetTargetAnimationTime(&playerAnchorPos, (const vec3_t *)nodeData + 1, (const vec3_t *)nodeData + 2, *((float *)nodeData + 14));
  v27 = playerAnchorPos.v[0];
  v28 = playerAnchorPos.v[1];
  v29 = playerAnchorPos.v[2];
  v30 = v7;
  if ( v23 )
  {
    v34 = *((float *)nodeData + 12);
  }
  else if ( (float)((float)((float)((float)(playerAnchorPos.v[1] - *((float *)nodeData + 18)) * (float)(playerAnchorPos.v[1] - *((float *)nodeData + 18))) + (float)((float)(playerAnchorPos.v[0] - *((float *)nodeData + 17)) * (float)(playerAnchorPos.v[0] - *((float *)nodeData + 17)))) + (float)((float)(playerAnchorPos.v[2] - *((float *)nodeData + 19)) * (float)(playerAnchorPos.v[2] - *((float *)nodeData + 19)))) <= 0.0 )
  {
    v34 = *((float *)nodeData + 16) * *((float *)nodeData + 12);
  }
  else
  {
    _XMM1 = LODWORD(FLOAT_N1_0);
    __asm
    {
      vcmpless xmm0, xmm8, xmm4
      vblendvps xmm1, xmm1, xmm9, xmm0
    }
    v34 = *(float *)&_XMM1 * *((float *)nodeData + 12);
    *((float *)nodeData + 16) = *(float *)&_XMM1;
    rate = *(float *)&_XMM1;
  }
  *((float *)nodeData + 17) = v27;
  *((float *)nodeData + 18) = v28;
  *((float *)nodeData + 19) = v29;
  XAnimSetAnimRate(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 0.0);
  XAnimLadderClimb_GetStopTimeInfo(obj->tree, ChildAt, v25, *(float *)&v30, &outTargetGrabIndex, (float *)outTargetGrabAnimTime, &rate);
  v35 = outTargetGrabAnimTime[0];
  if ( *((_BYTE *)nodeData + 84) )
  {
    v36 = outTargetGrabIndex;
  }
  else
  {
    if ( (float)((float)((float)(playerAnchorPos.v[1] * playerAnchorPos.v[1]) + (float)(playerAnchorPos.v[0] * playerAnchorPos.v[0])) + (float)(playerAnchorPos.v[2] * playerAnchorPos.v[2])) <= 0.0 )
      return;
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 1.0, ladderBlendTime, 0.0, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
    XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *(float *)&v30);
    v25 = *(float *)&v30;
    if ( v22 )
    {
      XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *(float *)&v35);
      v36 = outTargetGrabIndex;
      if ( ((outTargetGrabIndex - 3) & 0xFFFFFFFB) != 0 )
      {
        v36 = outTargetGrabIndex - (outTargetGrabIndex > 3);
        v37 = XAnimGetChildAt(obj->tree->anims, v21, v36);
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v21, 1.0, ladderBlendTime, 0.0, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v37, 1.0, ladderBlendTime, 0.0, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v37, 1.0);
        v22 = v111;
        v25 = *(float *)&v35;
      }
    }
    else
    {
      v36 = outTargetGrabIndex;
    }
    XAnimLadderClimb_SetScrubbedNotetracks_r(obj->tree, graftAnimIndex, animInfo);
    *((_BYTE *)nodeData + 84) = 1;
  }
  GoalWeight = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
  if ( *(float *)&GoalWeight <= 0.0 )
  {
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 1.0, ladderBlendTime, 0.0, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
    XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *(float *)&v30);
  }
  if ( v112 || COERCE_FLOAT(LODWORD(v34) & _xmm) <= 0.00000011920929 )
  {
    if ( v22 )
    {
      v79 = DCONST_DVARFLT_xanim_ladder_climb_grab_time;
      if ( !DCONST_DVARFLT_xanim_ladder_climb_grab_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_climb_grab_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v79);
      _XMM0 = v112;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_050000001);
      __asm { vblendvps xmm13, xmm1, xmm3, xmm2 }
      LODWORD(_XMM12) = 0;
      v85 = XAnimLadderClimb_AnimTimeDifference(*(float *)&v35, v25);
      if ( COERCE_FLOAT(LODWORD(v85) & _xmm) <= 0.0 || COERCE_FLOAT(v35 & _xmm) >= 1.0 )
      {
        *((_DWORD *)nodeData + 20) = 0;
      }
      else
      {
        if ( *(float *)&v85 > 0.5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 528, ASSERT_TYPE_ASSERT, "(animTimeDifference <= 0.5f)", (const char *)&queryFormat, "animTimeDifference <= 0.5f") )
          __debugbreak();
        v86 = v35;
        *(float *)&v86 = *(float *)&v35 - v25;
        v87 = v86 & (unsigned int)_xmm;
        v89 = v87;
        *(float *)&v89 = *(float *)&v87 / COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v35 - rate) & _xmm);
        _XMM0 = v89;
        __asm { vminss  xmm12, xmm0, xmm9 }
        v90 = v87;
        *(float *)&v87 = *(float *)&v87 / (float)(*(float *)&_XMM12 * *(float *)&_XMM13);
        *(float *)&v90 = *(float *)&v87 * dtime;
        _XMM0 = v90;
        __asm { vminss  xmm3, xmm0, xmm6 }
        _XMM1 = _XMM3 ^ _xmm;
        __asm
        {
          vcmpless xmm0, xmm8, xmm7
          vblendvps xmm0, xmm1, xmm3, xmm0
        }
        v97 = _XMM0;
        *(float *)&v97 = *(float *)&_XMM0 + v25;
        _XMM0 = v97;
        *((float *)nodeData + 20) = *(float *)&v87;
        v98 = COERCE_FLOAT(v97 & _xmm) > 1.0 || *(float *)&v97 < 0.0;
        *(float *)&_XMM0 = fmodf_0(*(float *)&v97, 1.0);
        __asm
        {
          vcmpltss xmm1, xmm0, xmm8
          vblendvps xmm0, xmm0, xmm2, xmm1
        }
        XAnimSetWrappedTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *(float *)&_XMM0, v98);
      }
      if ( ((v36 - 3) & 0xFFFFFFFB) != 0 )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ladder_climb_grab_begin_percent, "xanim_ladder_climb_grab_begin_percent");
        v102 = *(float *)&Float_Internal_DebugName;
        if ( *(float *)&_XMM12 <= *(float *)&Float_Internal_DebugName )
        {
          v103 = XAnimGetChildAt(obj->tree->anims, v21, v36 - (v36 > 3));
          Length = XAnimGetLength(obj->tree->anims, v103);
          v105 = *(float *)&Length / (float)(v102 * *(float *)&_XMM13);
          v106 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v103);
          v107 = *(float *)&v106 + (float)(v105 * dtime);
          v108 = COERCE_FLOAT(LODWORD(v107) & _xmm) > 1.0 || v107 < 0.0;
          v109 = I_fclamp(v107, 0.0, 1.0);
          XAnimSetWrappedTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v103, *(float *)&v109, v108);
          v110 = cachedModelNameMap;
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v21, *(float *)&v109, ladderBlendTime, 0.0, (scr_string_t)0, *(float *)&v109 > 0.0, 0, LINEAR, cachedModelNameMap);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v103, *(float *)&v109, ladderBlendTime, 0.0, (scr_string_t)0, *(float *)&v109 > 0.0, 0, LINEAR, v110);
        }
      }
    }
  }
  else
  {
    v39 = *((float *)nodeData + 14);
    v118 = playerAnchorPos.v[2];
    if ( COERCE_FLOAT(LODWORD(v34) & _xmm) > 0.0 )
    {
      ScrubOffset = BG_Ladder_GetScrubOffset((const vec3_t *)nodeData + 1, (const vec3_t *)nodeData + 2, v39);
      __asm { vcmpltss xmm1, xmm8, xmm13 }
      v44 = *(float *)&ScrubOffset;
      _XMM4 = 0i64;
      __asm
      {
        vroundss xmm4, xmm4, xmm3, 1
        vblendvps xmm1, xmm4, xmm2, xmm1
      }
      v49 = _XMM1;
      *(float *)&v49 = *(float *)&_XMM1 * v39;
      v48 = v49;
      v40 = (float)((float)((float)((float)(*(float *)&_XMM1 * v39) + *((float *)nodeData + 5)) - v44) - v118) / v34;
      *(float *)&v48 = fmodf_0(*(float *)&_XMM1 * v39, v39 * 2.0);
      v50 = v48;
      *(float *)&v50 = *(float *)&v48 / (float)(v39 * 2.0);
      _XMM0 = v50;
      if ( v34 > 0.0 )
      {
        __asm
        {
          vcmpless xmm1, xmm0, xmm8
          vblendvps xmm0, xmm0, xmm9, xmm1; targetAnimTime
        }
      }
    }
    else
    {
      v40 = 0.0;
      LODWORD(_XMM0) = 0;
    }
    v52 = XAnimLadderClimb_AnimTimeDifference(*(float *)&_XMM0, v25);
    v53 = *(float *)&v52;
    XAnimLadderClimb_AnimTimeDifference(*(float *)&v30, v25);
    if ( COERCE_FLOAT(LODWORD(v53) & _xmm) > 0.0 && COERCE_FLOAT(LODWORD(v53) & _xmm) < 1.0 )
    {
      _XMM5 = LODWORD(FLOAT_N1_0);
      v55 = *((float *)nodeData + 20);
      __asm
      {
        vcmpless xmm1, xmm8, xmm13
        vblendvps xmm12, xmm5, xmm9, xmm1
        vcmpless xmm0, xmm8, xmm2
        vblendvps xmm4, xmm5, xmm9, xmm0
        vcmpless xmm0, xmm8, xmm3
        vblendvps xmm1, xmm5, xmm9, xmm0
      }
      rate = *(float *)&_XMM4;
      if ( *(float *)&_XMM4 != *(float *)&_XMM1 )
      {
        *((_DWORD *)nodeData + 20) = 0;
        v55 = 0.0;
      }
      v62 = _XMM4;
      v63 = I_fclamp((float)((float)(*(float *)&_XMM4 * accel) * dtime) + v55, COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(v53 / v40) & _xmm) * *(float *)&_XMM12) & _xmm ^ _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(v53 / v40) & _xmm) * *(float *)&_XMM12) & _xmm));
      *(float *)&v62 = *(float *)&v63 * dtime;
      v64 = v62;
      *((float *)nodeData + 20) = *(float *)&v63;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v63 * dtime) & _xmm) > COERCE_FLOAT(v30 & _xmm) )
      {
        v65 = v30 & (unsigned int)_xmm;
        *(float *)&v65 = COERCE_FLOAT(v30 & _xmm) * *(float *)&_XMM12;
        v64 = v65;
      }
      v66 = v64;
      *(float *)&v66 = *(float *)&v64 + v25;
      v67 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v64 + v25) & _xmm) > 1.0 || *(float *)&v66 < 0.0;
      _XMM0 = v66;
      *(float *)&_XMM0 = fmodf_0(*(float *)&v66, 1.0);
      __asm
      {
        vcmpltss xmm1, xmm0, xmm8
        vblendvps xmm0, xmm0, xmm3, xmm1; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
      XAnimSetWrappedTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *(float *)&_XMM0, v67);
    }
    if ( v111 )
    {
      v71 = obj->tree;
      if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 71, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
        __debugbreak();
      v72 = XAnimGetNumChildren(v71->anims, v21);
      if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 75, ASSERT_TYPE_ASSERT, "(numChildren)", (const char *)&queryFormat, "numChildren") )
        __debugbreak();
      v73 = 0;
      if ( v72 > 0 )
      {
        while ( 1 )
        {
          v74 = XAnimGetChildAt(v71->anims, v21, v73);
          v75 = XAnimGetGoalWeight(v71, 0, XANIM_SUBTREE_DEFAULT, v74);
          if ( *(float *)&v75 > 0.0 )
            break;
          if ( (int)++v73 >= v72 )
            return;
        }
        if ( v74 )
        {
          v76 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v74);
          if ( *(float *)&v76 > 0.0 )
          {
            v77 = cachedModelNameMap;
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v74, 0.0, ladderBlendTime, 0.0, (scr_string_t)0, 0, 0, LINEAR, cachedModelNameMap);
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v21, 0.0, ladderBlendTime, 0.0, (scr_string_t)0, 0, 0, LINEAR, v77);
          }
          Weight = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v74);
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v74, *(float *)&Weight);
        }
      }
    }
  }
}

/*
==============
XAnimLadderClimb_Read
==============
*/
void XAnimLadderClimb_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 

  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 2) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 17) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 18) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 19) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 5) = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 13) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 14) = *(float *)&v17;
  v18 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 20) = *(float *)&v18;
  v19 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 12) = *(float *)&v19;
}

/*
==============
XAnimLadderClimb_Write
==============
*/
void XAnimLadderClimb_Write(void *nodeData, MemoryFile *memFile)
{
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData);
  MemFile_ArchiveVec3(memFile, (vec3_t *)((char *)nodeData + 68));
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData + 1);
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData + 2);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 13);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 14);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 20);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 12);
}

/*
==============
XAnimLadderClimb_PostParse
==============
*/
char XAnimLadderClimb_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimLadderClimb_PrintDebug
==============
*/
void XAnimLadderClimb_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  unsigned __int64 v10; 
  __int64 v11; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 639, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 640, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 641, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 642, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 643, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 646, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v10 = v6;
  if ( depth > 0 )
  {
    v11 = (unsigned int)depth;
    do
    {
      Com_sprintfPos_truncate(buffer, v10, inoutPos, "  ");
      --v11;
    }
    while ( v11 );
  }
  Com_sprintfPos_truncate(buffer, v10, inoutPos, "   ^5[anchor: %.4f - %.4f - %.4f, speed: %.5f] \n", *(float *)nodeData, *((float *)nodeData + 1), *((float *)nodeData + 2), *((float *)nodeData + 12));
}

/*
==============
XAnimLadderClimb_AnimTimeDifference
==============
*/

float __fastcall XAnimLadderClimb_AnimTimeDifference(double targetAnimTime, float currentAnimTime)
{
  __int128 v3; 
  __int128 v4; 

  v3 = *(_OWORD *)&targetAnimTime;
  *(float *)&v3 = *(float *)&targetAnimTime - currentAnimTime;
  _XMM4 = v3;
  if ( *(float *)&targetAnimTime <= currentAnimTime )
  {
    if ( *(float *)&targetAnimTime >= currentAnimTime )
      goto LABEL_3;
    v4 = *(_OWORD *)&targetAnimTime;
    *(float *)&v4 = (float)(*(float *)&targetAnimTime + 1.0) - currentAnimTime;
    _XMM2 = v4 & _xmm;
    __asm
    {
      vcmpltss xmm2, xmm2, xmm0
      vblendvps xmm0, xmm4, xmm3, xmm2
    }
  }
  else
  {
    *(float *)&targetAnimTime = (float)(*(float *)&targetAnimTime - 1.0) - currentAnimTime;
    if ( COERCE_FLOAT(LODWORD(targetAnimTime) & _xmm) >= COERCE_FLOAT(v3 & _xmm) )
LABEL_3:
      LODWORD(targetAnimTime) = v3;
  }
  return *(float *)&targetAnimTime;
}

/*
==============
XAnimLadderClimb_DrawDebug
==============
*/
void XAnimLadderClimb_DrawDebug(const DObj *obj, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  const vec3_t *CustomNodeData; 
  unsigned int ChildAt; 
  float v8; 
  float v9; 
  float v10; 
  double ScrubOffset; 
  float v12; 
  int v13; 
  int i; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  int j; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const vec4_t *v26; 
  vec3_t *p_start; 
  float v28; 
  float v29; 
  float v30; 
  double GoalWeight; 
  double Time; 
  const XAnimParts *Parts; 
  double NotetrackTimeFromParts; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  const vec4_t *v52; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outExtentBottom; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 
  int v58[8]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 694, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !XAnimIsCustomNodeByName(obj->tree->anims, animIndex, scr_const.xanimLadderClimb) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 695, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeByName( obj->tree->anims, animIndex, scr_const.xanimLadderClimb ))", (const char *)&queryFormat, "XAnimIsCustomNodeByName( obj->tree->anims, animIndex, scr_const.xanimLadderClimb )") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = XAnimGetAnimInfo(InfoIndex);
    CustomNodeData = (const vec3_t *)XAnimGetCustomNodeData(obj->tree->anims, AnimInfo, animIndex);
    if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 708, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    ChildAt = XAnimGetChildAt(obj->tree->anims, animIndex, 0);
    AnglesToAxis(CustomNodeData + 3, &axis);
    v8 = CustomNodeData[2].v[0] - CustomNodeData[1].v[0];
    v9 = CustomNodeData[2].v[2] - CustomNodeData[1].v[2];
    v10 = CustomNodeData[2].v[1] - CustomNodeData[1].v[1];
    ScrubOffset = BG_Ladder_GetScrubOffset(CustomNodeData + 1, CustomNodeData + 2, CustomNodeData[4].v[2]);
    v12 = fsqrt((float)((float)(v10 * v10) + (float)(v8 * v8)) + (float)(v9 * v9));
    v13 = (int)(float)(v12 / CustomNodeData[4].v[1]);
    for ( i = 0; i <= v13; ++i )
    {
      v15 = CustomNodeData[1].v[0];
      v16 = CustomNodeData[1].v[1];
      v17 = (float)((float)i * CustomNodeData[4].v[1]) + CustomNodeData[1].v[2];
      start.v[0] = (float)(10.0 * axis.m[1].v[0]) + v15;
      start.v[1] = (float)(10.0 * axis.m[1].v[1]) + v16;
      start.v[2] = v17 + (float)(10.0 * axis.m[1].v[2]);
      end.v[0] = v15 - (float)(10.0 * axis.m[1].v[0]);
      end.v[1] = v16 - (float)(10.0 * axis.m[1].v[1]);
      end.v[2] = v17 - (float)(10.0 * axis.m[1].v[2]);
      CL_AddDebugLine(&start, &end, &colorGreen, 1, 0, 0);
    }
    v18 = (int)(float)(v12 / CustomNodeData[4].v[2]);
    for ( j = 0; j <= v18; ++j )
    {
      v20 = CustomNodeData[4].v[2];
      v21 = CustomNodeData[1].v[2] - *(float *)&ScrubOffset;
      v22 = _mm_cvtepi32_ps((__m128i)(unsigned int)j).m128_f32[0] * v20;
      v23 = (float)(axis.m[2].v[0] * v22) + CustomNodeData[1].v[0];
      v24 = (float)(axis.m[2].v[1] * v22) + CustomNodeData[1].v[1];
      v25 = v21 + (float)(axis.m[2].v[2] * v22);
      end.v[0] = v23;
      end.v[1] = v24;
      end.v[2] = v25;
      if ( ((int)(float)((float)((float)(v22 + v21) - v21) / v20) & 1) != 0 )
      {
        end.v[0] = (float)(3.0 * axis.m[1].v[0]) + v23;
        start.v[0] = (float)(axis.m[2].v[0] * v20) + end.v[0];
        start.v[2] = (float)(axis.m[2].v[2] * v20) + (float)((float)(3.0 * axis.m[1].v[2]) + v25);
        end.v[1] = (float)(3.0 * axis.m[1].v[1]) + v24;
        end.v[2] = (float)(3.0 * axis.m[1].v[2]) + v25;
        start.v[1] = (float)(axis.m[2].v[1] * v20) + end.v[1];
        v26 = &colorRed;
        p_start = &start;
      }
      else
      {
        outExtentBottom.v[0] = (float)(axis.m[2].v[0] * v20) + v23;
        outExtentBottom.v[2] = (float)(axis.m[2].v[2] * v20) + v25;
        outExtentBottom.v[1] = (float)(axis.m[2].v[1] * v20) + v24;
        v26 = &colorBlue;
        p_start = &outExtentBottom;
      }
      CL_AddDebugLine(&end, p_start, v26, 1, 0, 0);
    }
    v28 = CustomNodeData[1].v[0];
    center.v[0] = v28;
    v29 = CustomNodeData[1].v[1];
    center.v[1] = v29;
    v30 = CustomNodeData->v[2];
    center.v[2] = v30;
    if ( ((int)(float)((float)(CustomNodeData->v[2] - (float)(CustomNodeData[1].v[2] - *(float *)&ScrubOffset)) / CustomNodeData[4].v[2]) & 1) != 0 )
    {
      center.v[0] = (float)(3.0 * axis.m[1].v[0]) + v28;
      center.v[1] = (float)(3.0 * axis.m[1].v[1]) + v29;
      center.v[2] = (float)(3.0 * axis.m[1].v[2]) + v30;
    }
    CG_DebugSphere(&center, 0.5, &colorYellow, 1, 0);
    GoalWeight = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
    if ( *(float *)&GoalWeight > 0.0 )
    {
      XAnimLadderClimb_GetLadderRaiseLocalExtents(CustomNodeData, CustomNodeData + 1, CustomNodeData + 2, &axis, CustomNodeData[4].v[2], &outExtentBottom, &start);
      Time = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
      end.v[2] = (float)((float)(start.v[2] - outExtentBottom.v[2]) * *(float *)&Time) + outExtentBottom.v[2];
      end.v[0] = (float)((float)(start.v[0] - outExtentBottom.v[0]) * *(float *)&Time) + outExtentBottom.v[0];
      end.v[1] = (float)((float)(start.v[1] - outExtentBottom.v[1]) * *(float *)&Time) + outExtentBottom.v[1];
      if ( *(float *)&Time > 0.5 )
      {
        end.v[0] = (float)(3.0 * axis.m[1].v[0]) + (float)((float)((float)(start.v[0] - outExtentBottom.v[0]) * *(float *)&Time) + outExtentBottom.v[0]);
        end.v[1] = (float)(3.0 * axis.m[1].v[1]) + (float)((float)((float)(start.v[1] - outExtentBottom.v[1]) * *(float *)&Time) + outExtentBottom.v[1]);
        end.v[2] = (float)(3.0 * axis.m[1].v[2]) + (float)((float)((float)(start.v[2] - outExtentBottom.v[2]) * *(float *)&Time) + outExtentBottom.v[2]);
      }
      if ( COERCE_FLOAT(LODWORD(CustomNodeData[4].v[0]) & _xmm) <= 0.0 )
        CG_DebugSphere(&end, 0.5, &colorCyan, 1, 0);
      else
        CG_DebugSphere(&end, 0.5, &colorGreen, 1, 0);
    }
    Parts = XAnimGetParts(obj->tree->anims, ChildAt);
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
    v58[0] = SLODWORD(NotetrackTimeFromParts);
    v35 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_mid);
    v58[1] = SLODWORD(v35);
    v36 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_top);
    v58[2] = SLODWORD(v36);
    v37 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left);
    v58[3] = SLODWORD(v37);
    v38 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
    v58[4] = SLODWORD(v38);
    v39 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_mid);
    v58[5] = SLODWORD(v39);
    v40 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_top);
    v58[6] = SLODWORD(v40);
    v41 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right);
    v58[7] = SLODWORD(v41);
    XAnimLadderClimb_GetLadderRaiseLocalExtents(CustomNodeData, CustomNodeData + 1, CustomNodeData + 2, &axis, CustomNodeData[4].v[2], &outExtentBottom, &start);
    v42 = outExtentBottom.v[0];
    v43 = outExtentBottom.v[1];
    v44 = outExtentBottom.v[2];
    v45 = start.v[0] - outExtentBottom.v[0];
    v46 = start.v[2] - outExtentBottom.v[2];
    v47 = 0i64;
    v48 = start.v[1] - outExtentBottom.v[1];
    do
    {
      v49 = *(float *)&v58[v47];
      v50 = (float)(v49 * v45) + v42;
      v51 = (float)(v49 * v46) + v44;
      start.v[0] = (float)(5.0 * axis.m[1].v[0]) + v50;
      start.v[1] = (float)(5.0 * axis.m[1].v[1]) + (float)((float)(v49 * v48) + v43);
      start.v[2] = (float)(5.0 * axis.m[1].v[2]) + v51;
      outExtentBottom.v[0] = v50 - (float)(5.0 * axis.m[1].v[0]);
      v52 = &colorPurple;
      if ( ((v47 - 3) & 0xFFFFFFFFFFFFFFFBui64) == 0 )
        v52 = &colorWhite;
      outExtentBottom.v[1] = (float)((float)(v49 * v48) + v43) - (float)(5.0 * axis.m[1].v[1]);
      outExtentBottom.v[2] = v51 - (float)(5.0 * axis.m[1].v[2]);
      CL_AddDebugLine(&start, &outExtentBottom, v52, 1, 0, 0);
      ++v47;
    }
    while ( v47 < 8 );
  }
}

/*
==============
XAnimLadderClimb_GetActiveStopAnim
==============
*/
__int64 XAnimLadderClimb_GetActiveStopAnim(XAnimTree *tree, unsigned int grabsParentIndex)
{
  int NumChildren; 
  unsigned int v5; 
  unsigned int ChildAt; 
  double GoalWeight; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 71, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  NumChildren = XAnimGetNumChildren(tree->anims, grabsParentIndex);
  if ( !NumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 75, ASSERT_TYPE_ASSERT, "(numChildren)", (const char *)&queryFormat, "numChildren") )
    __debugbreak();
  v5 = 0;
  if ( NumChildren <= 0 )
    return 0i64;
  while ( 1 )
  {
    ChildAt = XAnimGetChildAt(tree->anims, grabsParentIndex, v5);
    GoalWeight = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
    if ( *(float *)&GoalWeight > 0.0 )
      break;
    if ( (int)++v5 >= NumChildren )
      return 0i64;
  }
  return ChildAt;
}

/*
==============
XAnimLadderClimb_GetClampedAnchorPos
==============
*/
char XAnimLadderClimb_GetClampedAnchorPos(XAnimLadderClimb *node, XAnimTree *tree, tmat33_t<vec3_t> *ladderAxis, unsigned int climbAnimIndex, float currentAnimTime, vec3_t *inOutAnchorPos)
{
  const XAnimParts *Parts; 
  double TargetAnimationTime; 
  float v12; 
  double ScrubOffset; 
  float v14; 
  float v15; 
  float m_handDistance; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v24; 
  double NotetrackTimeFromParts; 
  scr_string_t ladder_stop_left_mid; 
  float v27; 
  double v28; 
  float v29; 
  float v30; 
  float v32; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 152, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 153, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  Parts = XAnimGetParts(tree->anims, climbAnimIndex);
  if ( !node->m_isTorso )
    return 0;
  TargetAnimationTime = BG_Ladder_GetTargetAnimationTime(&node->m_anchorPos, &node->m_bottom, &node->m_top, node->m_handDistance);
  v12 = *(float *)&TargetAnimationTime;
  ScrubOffset = BG_Ladder_GetScrubOffset(&node->m_bottom, &node->m_top, node->m_handDistance);
  v14 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * ladderAxis->m[2].v[1]) + node->m_bottom.v[1];
  v15 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * ladderAxis->m[2].v[0]) + node->m_bottom.v[0];
  m_handDistance = node->m_handDistance;
  v17 = node->m_top.v[0] - v15;
  v18 = node->m_top.v[2] - (float)((float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * ladderAxis->m[2].v[2]) + node->m_bottom.v[2]);
  v19 = node->m_top.v[1] - v14;
  v32 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * ladderAxis->m[2].v[2]) + node->m_bottom.v[2];
  v20 = (float)((float)(v19 * v19) + (float)(v17 * v17)) + (float)(v18 * v18);
  v21 = fsqrt(v20);
  _XMM8 = 0i64;
  __asm { vroundss xmm8, xmm8, xmm0, 1 }
  v24 = (float)((float)((float)((float)(node->m_anchorPos.v[1] - v14) * v19) + (float)((float)(node->m_anchorPos.v[0] - v15) * v17)) + (float)((float)(node->m_anchorPos.v[2] - v32) * v18)) / v20;
  if ( v24 < (float)((float)((float)(m_handDistance * *(float *)&_XMM8) * 2.0) * (float)(1.0 / v21)) )
    return 0;
  if ( v21 <= (float)((float)((float)(m_handDistance * 2.0) * *(float *)&_XMM8) + m_handDistance) )
  {
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
    ladder_stop_left_mid = scr_const.ladder_stop_left_mid;
  }
  else
  {
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
    ladder_stop_left_mid = scr_const.ladder_stop_right_mid;
  }
  v27 = *(float *)&NotetrackTimeFromParts;
  v28 = XAnimGetNotetrackTimeFromParts(Parts, ladder_stop_left_mid);
  v29 = (float)(*(float *)&v28 + v27) * 0.5;
  if ( v12 <= v29 && v24 < (float)((float)((float)((float)(*(float *)&_XMM8 + 1.0) * node->m_handDistance) * 2.0) * (float)(1.0 / v21)) )
    return 0;
  v30 = (float)((float)((float)(v29 + 0.001) + *(float *)&_XMM8) * node->m_handDistance) * 2.0;
  inOutAnchorPos->v[0] = (float)(v30 * ladderAxis->m[2].v[0]) + v15;
  inOutAnchorPos->v[1] = (float)(v30 * ladderAxis->m[2].v[1]) + v14;
  inOutAnchorPos->v[2] = (float)(v30 * ladderAxis->m[2].v[2]) + v32;
  return 1;
}

/*
==============
XAnimLadderClimb_GetLadderRaiseLocalExtents
==============
*/
void XAnimLadderClimb_GetLadderRaiseLocalExtents(const vec3_t *anchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, tmat33_t<vec3_t> *ladderAxis, float ladderRungDistance, vec3_t *outExtentBottom, vec3_t *outExtentTop)
{
  double ScrubOffset; 
  float v11; 
  float v12; 
  float v15; 
  float v16; 
  float v17; 

  ScrubOffset = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, ladderRungDistance);
  v11 = (float)(anchorPos->v[2] - ladderBottom->v[2]) + *(float *)&ScrubOffset;
  *outExtentBottom = *ladderBottom;
  *outExtentTop = *ladderBottom;
  outExtentBottom->v[2] = outExtentBottom->v[2] - *(float *)&ScrubOffset;
  v12 = outExtentTop->v[2] - *(float *)&ScrubOffset;
  outExtentTop->v[2] = v12;
  if ( v11 <= 0.0 )
  {
    v17 = (float)(ladderRungDistance * ladderAxis->m[2].v[0]) + outExtentTop->v[0];
    outExtentTop->v[0] = v17;
    outExtentTop->v[1] = (float)(ladderRungDistance * ladderAxis->m[2].v[1]) + outExtentTop->v[1];
    outExtentTop->v[2] = (float)(ladderRungDistance * ladderAxis->m[2].v[2]) + v12;
    outExtentBottom->v[0] = (float)((float)(ladderRungDistance * -2.0) * ladderAxis->m[2].v[0]) + v17;
    outExtentBottom->v[1] = (float)((float)(ladderRungDistance * -2.0) * ladderAxis->m[2].v[1]) + outExtentTop->v[1];
    outExtentBottom->v[2] = (float)((float)(ladderRungDistance * -2.0) * ladderAxis->m[2].v[2]) + outExtentTop->v[2];
  }
  else
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    v15 = (float)(*(float *)&_XMM1 * ladderRungDistance) * 2.0;
    v16 = (float)(v15 * ladderAxis->m[2].v[0]) + outExtentBottom->v[0];
    outExtentBottom->v[0] = v16;
    outExtentBottom->v[1] = (float)(v15 * ladderAxis->m[2].v[1]) + outExtentBottom->v[1];
    outExtentBottom->v[2] = (float)(v15 * ladderAxis->m[2].v[2]) + outExtentBottom->v[2];
    outExtentTop->v[0] = (float)((float)(ladderRungDistance * 2.0) * ladderAxis->m[2].v[0]) + v16;
    outExtentTop->v[1] = (float)((float)(ladderRungDistance * 2.0) * ladderAxis->m[2].v[1]) + outExtentBottom->v[1];
    outExtentTop->v[2] = (float)((float)(ladderRungDistance * 2.0) * ladderAxis->m[2].v[2]) + outExtentBottom->v[2];
  }
}

/*
==============
XAnimLadderClimb_GetRaiseContactTimeAndAnimTime
==============
*/
void XAnimLadderClimb_GetRaiseContactTimeAndAnimTime(const vec3_t *anchorPos, vec3_t *ladderBottom, const vec3_t *ladderTop, float handDistance, float ladderSpeed, float *outContactTime, float *outContactAnimTime)
{
  double ScrubOffset; 
  float v15; 

  _XMM8 = 0i64;
  if ( COERCE_FLOAT(LODWORD(ladderSpeed) & _xmm) > 0.0 )
  {
    ScrubOffset = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, handDistance);
    _XMM4 = 0i64;
    __asm
    {
      vroundss xmm4, xmm4, xmm3, 1
      vcmpltss xmm1, xmm8, xmm9
      vblendvps xmm1, xmm4, xmm2, xmm1
    }
    *outContactTime = (float)((float)((float)((float)(*(float *)&_XMM1 * handDistance) + ladderBottom->v[2]) - *(float *)&ScrubOffset) - anchorPos->v[2]) / ladderSpeed;
    v15 = fmodf_0(*(float *)&_XMM1 * handDistance, handDistance * 2.0) / (float)(handDistance * 2.0);
    *outContactAnimTime = v15;
    if ( ladderSpeed > 0.0 && v15 <= 0.0 )
      *outContactAnimTime = 1.0;
  }
  else
  {
    *outContactTime = 0.0;
    *outContactAnimTime = 0.0;
  }
}

/*
==============
XAnimLadderClimb_GetStopTimeInfo
==============
*/
void XAnimLadderClimb_GetStopTimeInfo(XAnimTree *tree, unsigned int climbAnimIndex, float currentAnimTime, float targetAnimTime, int *outTargetGrabIndex, float *outTargetGrabAnimTime, float *outPrevGrabAnimTime)
{
  __int128 v7; 
  XAnim_s *anims; 
  const XAnimParts *Parts; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  int v16; 
  __int128 v17; 
  __int128 v19; 
  __int128 v20; 
  __int128 v24; 
  __int128 v25; 
  __int128 v29; 
  __int128 v30; 
  __int128 v34; 
  __int128 v35; 
  __int128 v39; 
  __int128 v40; 
  __int128 v44; 
  __int128 v45; 
  __int128 v49; 
  __int128 v50; 
  __int128 v53; 
  __int128 v55; 
  __int128 v56; 
  __int128 v60; 
  __int128 v61; 
  int v64[2]; 
  int v65[5]; 
  float v66; 
  float v67; 

  anims = tree->anims;
  *(float *)v64 = currentAnimTime;
  Parts = XAnimGetParts(anims, climbAnimIndex);
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
  v64[1] = v7;
  v10 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_mid);
  v65[0] = v7;
  v11 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_top);
  v65[1] = v7;
  v12 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left);
  v65[2] = v7;
  v13 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
  v65[3] = v7;
  v14 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_mid);
  v65[4] = v7;
  v15 = v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_top);
  v66 = *(float *)&v7;
  *(double *)&v7 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right);
  v67 = *(float *)&v7;
  v16 = 7;
  v17 = v7;
  v19 = v7;
  *(float *)&v19 = *(float *)&v7 - targetAnimTime;
  _XMM4 = v19;
  if ( *(float *)&v7 <= targetAnimTime )
  {
    if ( *(float *)&v7 < targetAnimTime )
    {
      v20 = v7;
      *(float *)&v20 = (float)(*(float *)&v7 + 1.0) - targetAnimTime;
      _XMM1 = v20 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm4, xmm4, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v7 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v19 & _xmm) )
  {
    *(float *)&_XMM4 = (float)(*(float *)&v7 - 1.0) - targetAnimTime;
  }
  v24 = v10;
  *(float *)&v24 = *(float *)&v10 - targetAnimTime;
  _XMM8 = v24;
  if ( *(float *)&v10 <= targetAnimTime )
  {
    if ( *(float *)&v10 < targetAnimTime )
    {
      v25 = v10;
      *(float *)&v25 = (float)(*(float *)&v10 + 1.0) - targetAnimTime;
      _XMM1 = v25 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v10 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v24 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v10 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v10 >= 0.0 )
  {
    v16 = 0;
    v17 = v10;
    LODWORD(_XMM4) = _XMM8;
  }
  v29 = v11;
  *(float *)&v29 = *(float *)&v11 - targetAnimTime;
  _XMM8 = v29;
  if ( *(float *)&v11 <= targetAnimTime )
  {
    if ( *(float *)&v11 < targetAnimTime )
    {
      v30 = v11;
      *(float *)&v30 = (float)(*(float *)&v11 + 1.0) - targetAnimTime;
      _XMM1 = v30 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v11 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v29 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v11 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v11 >= 0.0 )
  {
    v16 = 1;
    v17 = v11;
    LODWORD(_XMM4) = _XMM8;
  }
  v34 = v12;
  *(float *)&v34 = *(float *)&v12 - targetAnimTime;
  _XMM8 = v34;
  if ( *(float *)&v12 <= targetAnimTime )
  {
    if ( *(float *)&v12 < targetAnimTime )
    {
      v35 = v12;
      *(float *)&v35 = (float)(*(float *)&v12 + 1.0) - targetAnimTime;
      _XMM1 = v35 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v12 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v34 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v12 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v12 >= 0.0 )
  {
    v16 = 2;
    v17 = v12;
    LODWORD(_XMM4) = _XMM8;
  }
  v39 = v13;
  *(float *)&v39 = *(float *)&v13 - targetAnimTime;
  _XMM8 = v39;
  if ( *(float *)&v13 <= targetAnimTime )
  {
    if ( *(float *)&v13 < targetAnimTime )
    {
      v40 = v13;
      *(float *)&v40 = (float)(*(float *)&v13 + 1.0) - targetAnimTime;
      _XMM1 = v40 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v13 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v39 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v13 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v13 >= 0.0 )
  {
    v16 = 3;
    v17 = v13;
    LODWORD(_XMM4) = _XMM8;
  }
  v44 = v14;
  *(float *)&v44 = *(float *)&v14 - targetAnimTime;
  _XMM8 = v44;
  if ( *(float *)&v14 <= targetAnimTime )
  {
    if ( *(float *)&v14 < targetAnimTime )
    {
      v45 = v14;
      *(float *)&v45 = (float)(*(float *)&v14 + 1.0) - targetAnimTime;
      _XMM1 = v45 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v14 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v44 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v14 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v14 >= 0.0 )
  {
    v16 = 4;
    v17 = v14;
    LODWORD(_XMM4) = _XMM8;
  }
  v49 = v15;
  *(float *)&v49 = *(float *)&v15 - targetAnimTime;
  _XMM8 = v49;
  if ( *(float *)&v15 <= targetAnimTime )
  {
    if ( *(float *)&v15 < targetAnimTime )
    {
      v50 = v15;
      *(float *)&v50 = (float)(*(float *)&v15 + 1.0) - targetAnimTime;
      _XMM1 = v50 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v15 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v49 & _xmm) )
  {
    *(float *)&_XMM8 = (float)(*(float *)&v15 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v15 >= 0.0 )
  {
    v16 = 5;
    v17 = v15;
    LODWORD(_XMM4) = _XMM8;
  }
  v53 = LODWORD(v66);
  v55 = LODWORD(v66);
  *(float *)&v55 = v66 - targetAnimTime;
  _XMM8 = v55;
  if ( v66 <= targetAnimTime )
  {
    if ( v66 < targetAnimTime )
    {
      v56 = LODWORD(v66);
      *(float *)&v56 = (float)(v66 + 1.0) - targetAnimTime;
      _XMM1 = v56 & (unsigned int)_xmm;
      __asm { vcmpltss xmm1, xmm1, xmm0 }
      v53 = LODWORD(v66);
      __asm { vblendvps xmm8, xmm8, xmm2, xmm1 }
    }
  }
  else
  {
    v53 = LODWORD(v66);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v66 - 1.0) - targetAnimTime) & _xmm) < COERCE_FLOAT(v55 & _xmm) )
      *(float *)&_XMM8 = (float)(v66 - 1.0) - targetAnimTime;
  }
  if ( COERCE_FLOAT(_XMM8 & _xmm) < COERCE_FLOAT(_XMM4 & _xmm) && *(float *)&v53 >= 0.0 )
  {
    v16 = 6;
    v17 = v53;
  }
  if ( outPrevGrabAnimTime )
  {
    v60 = v17;
    *(float *)&v60 = *(float *)&v17 - *(float *)v64;
    _XMM4 = v60;
    if ( *(float *)&v17 <= *(float *)v64 )
    {
      if ( *(float *)&v17 < *(float *)v64 )
      {
        v61 = v17;
        *(float *)&v61 = (float)(*(float *)&v17 + 1.0) - *(float *)v64;
        _XMM1 = v61 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm1, xmm0
          vblendvps xmm4, xmm4, xmm2, xmm1
        }
      }
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v17 - 1.0) - *(float *)v64) & _xmm) < COERCE_FLOAT(v60 & _xmm) )
    {
      *(float *)&_XMM4 = (float)(*(float *)&v17 - 1.0) - *(float *)v64;
    }
    if ( *(float *)&_XMM4 < 0.0 )
    {
      if ( v16 >= 7 )
        *outPrevGrabAnimTime = *(float *)&v10;
      else
        *(_DWORD *)outPrevGrabAnimTime = v65[v16];
    }
    else if ( v16 <= 0 )
    {
      *outPrevGrabAnimTime = v67;
    }
    else
    {
      *(_DWORD *)outPrevGrabAnimTime = v64[v16];
    }
  }
  if ( outTargetGrabIndex )
    *outTargetGrabIndex = v16;
  if ( outTargetGrabAnimTime )
    *outTargetGrabAnimTime = *(float *)&v17;
}

/*
==============
XAnimLadderClimb_Register
==============
*/
void XAnimLadderClimb_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimLadderClimb>::ms_typeInfo);
}

/*
==============
XAnimLadderClimb_SetScrubbedNotetracks_r
==============
*/
void XAnimLadderClimb_SetScrubbedNotetracks_r(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimInfo *info)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 i; 
  unsigned __int8 *v8; 
  __int64 v9; 
  const XAnim_s *v10; 
  __int64 v11; 
  __int64 v12; 

  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 287, ASSERT_TYPE_ASSERT, "( anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !graftAnimIndex && XAnimIsGraftNode(SubTreeAnims, info->animIndex) )
    graftAnimIndex = info->animIndex;
  for ( i = info->children; i; i = *((_WORD *)v8 + 5) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v9 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v9 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v12) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v11) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v11, v12) )
          __debugbreak();
      }
      v8 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v9];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v12) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v11) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v8 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 297, ASSERT_TYPE_ASSERT, "( childInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "childInfo", "nullptr", NULL, NULL) )
      __debugbreak();
    v10 = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)v8 + 8));
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 300, ASSERT_TYPE_ASSERT, "( childAnims ) != ( nullptr )", "%s != %s\n\t%p, %p", "childAnims", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( XAnimIsLeafNode(v10, *((unsigned __int16 *)v8 + 3)) )
      v8[77] |= 0x10u;
    else
      XAnimLadderClimb_SetScrubbedNotetracks_r(tree, graftAnimIndex, (const XAnimInfo *)v8);
  }
}

