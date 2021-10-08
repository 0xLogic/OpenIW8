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
  XAnimSubTreeID subTreeID; 
  const XAnim_s *SubTreeAnims; 
  unsigned int NumChildren; 
  char v25; 
  unsigned int ChildAt; 
  unsigned int v28; 
  unsigned int v30; 
  XAnimTree *tree; 
  unsigned int v32; 
  const dvar_t *v33; 
  unsigned int v34; 
  bool v35; 
  bool v36; 
  int v66; 
  unsigned int v67; 
  unsigned int v69; 
  XAnimTree *v70; 
  char v85; 
  bool v86; 
  bool v91; 
  bool v106; 
  unsigned int v111; 
  char v114; 
  bool v118; 
  XModelNameMap *v123; 
  BOOL notifyType; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  float curveIDe; 
  float curveIDf; 
  float curveIDg; 
  float curveIDh; 
  float curveIDi; 
  float curveIDj; 
  float curveIDk; 
  float curveIDl; 
  float curveIDm; 
  float inOutAnchorPos; 
  float inOutAnchorPosa; 
  float inOutAnchorPosb; 
  float inOutAnchorPosc; 
  float inOutAnchorPosd; 
  float inOutAnchorPose; 
  float outPrevGrabAnimTime; 
  float outPrevGrabAnimTimea; 
  float outPrevGrabAnimTimeb; 
  float outPrevGrabAnimTimec; 
  float outPrevGrabAnimTimed; 
  float outPrevGrabAnimTimee; 
  bool v162; 
  unsigned __int8 v163; 
  float rate; 
  int outTargetGrabIndex; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int graftAnimIndex; 
  float outTargetGrabAnimTime[3]; 
  vec3_t playerAnchorPos; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+1B0h+var_70], xmm8 }
  subTreeID = animInfo->subTreeID;
  _RSI = (XAnimLadderClimb *)nodeData;
  cachedModelNameMap = modelNameMap;
  _R14 = animInfo;
  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, subTreeID);
  NumChildren = XAnimGetNumChildren(obj->tree->anims, _R14->animIndex);
  ChildAt = XAnimGetChildAt(SubTreeAnims, _R14->animIndex, 0);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm8, dword ptr [r14+3Ch]
  }
  v28 = ChildAt;
  if ( !v25 )
    goto LABEL_4;
  __asm { vucomiss xmm8, dword ptr [r14+38h] }
  if ( !v25 )
  {
LABEL_4:
    __asm
    {
      vmovaps [rsp+1B0h+var_50], xmm6
      vmovaps [rsp+1B0h+var_60], xmm7
      vmovaps [rsp+1B0h+var_80], xmm9
      vmovaps [rsp+1B0h+var_A0], xmm11
      vmovaps [rsp+1B0h+var_D0], xmm14
      vmovaps [rsp+1B0h+var_E0], xmm15
    }
    v30 = XAnimGetGraftAnimIndex(animInfoIndex);
    tree = obj->tree;
    graftAnimIndex = v30;
    XAnimLadderClimb_SetScrubbedNotetracks_r(tree, v30, _R14);
    v32 = 0;
    if ( NumChildren > 1 )
      v32 = XAnimGetChildAt(obj->tree->anims, _R14->animIndex, 1u);
    v33 = DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs;
    v34 = v32;
    if ( !DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_climb_enable_grabs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v35 = v33->current.enabled && v34;
    v162 = v35;
    v36 = (unsigned __int16)(obj->entnum - 2049) <= 1u;
    AnglesToAxis(&_RSI->m_angles, &axis);
    *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28);
    __asm { vmovaps xmm11, xmm0 }
    if ( !_RSI->m_isTorso )
      goto LABEL_16;
    __asm { vmovss  dword ptr [rsp+1B0h+curveID], xmm0 }
    if ( XAnimLadderClimb_GetClampedAnchorPos(_RSI, obj->tree, &axis, v28, curveID, &playerAnchorPos) )
    {
      v163 = 1;
    }
    else
    {
LABEL_16:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+0B0h+playerAnchorPos], xmm0
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rbp+0B0h+playerAnchorPos+8], xmm0
        vmovss  dword ptr [rbp+0B0h+playerAnchorPos+4], xmm1
      }
      v163 = 0;
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+38h]; handDistance
      vmovaps [rsp+1B0h+var_C0], xmm13
    }
    *(double *)&_XMM0 = BG_Ladder_GetTargetAnimationTime(&playerAnchorPos, &_RSI->m_bottom, &_RSI->m_top, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+0B0h+playerAnchorPos]
      vmovss  xmm6, dword ptr [rbp+0B0h+playerAnchorPos+4]
      vmovss  xmm7, dword ptr [rbp+0B0h+playerAnchorPos+8]
      vsubss  xmm2, xmm5, dword ptr [rsi+44h]
      vsubss  xmm1, xmm6, dword ptr [rsi+48h]
      vsubss  xmm4, xmm7, dword ptr [rsi+4Ch]
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmm15, xmm0
    }
    if ( v36 )
    {
      __asm { vmovss  xmm13, dword ptr [rsi+30h] }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm8
        vmovss  xmm1, dword ptr [rsi+40h]
        vmulss  xmm13, xmm1, dword ptr [rsi+30h]
      }
    }
    __asm
    {
      vmovss  dword ptr [rsi+44h], xmm5
      vmovss  dword ptr [rsi+48h], xmm6
      vmovss  dword ptr [rsi+4Ch], xmm7
      vmovss  dword ptr [rsp+1B0h+curveID], xmm8
    }
    XAnimSetAnimRate(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDa);
    __asm
    {
      vmovaps xmm3, xmm15; targetAnimTime
      vmovaps xmm2, xmm11; currentAnimTime
    }
    XAnimLadderClimb_GetStopTimeInfo(obj->tree, v28, *(float *)&_XMM2, *(float *)&_XMM3, &outTargetGrabIndex, outTargetGrabAnimTime, &rate);
    __asm { vmovss  xmm14, [rsp+1B0h+outTargetGrabAnimTime] }
    if ( _RSI->m_initialized )
    {
      v66 = outTargetGrabIndex;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0B0h+playerAnchorPos+4]
        vmovss  xmm1, dword ptr [rbp+0B0h+playerAnchorPos]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rbp+0B0h+playerAnchorPos+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm8
      }
      if ( !_RSI->m_initialized )
      {
LABEL_55:
        __asm
        {
          vmovaps xmm13, [rsp+1B0h+var_C0]
          vmovaps xmm11, [rsp+1B0h+var_A0]
          vmovaps xmm14, [rsp+1B0h+var_D0]
          vmovaps xmm9, [rsp+1B0h+var_80]
          vmovaps xmm7, [rsp+1B0h+var_60]
          vmovaps xmm6, [rsp+1B0h+var_50]
          vmovaps xmm15, [rsp+1B0h+var_E0]
        }
        goto LABEL_56;
      }
      __asm
      {
        vmovss  xmm0, cs:ladderBlendTime
        vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
        vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
        vmovss  dword ptr [rsp+1B0h+curveID], xmm9
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDb, inOutAnchorPos, outPrevGrabAnimTime, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
      __asm { vmovss  dword ptr [rsp+1B0h+curveID], xmm15 }
      XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDc);
      __asm { vmovaps xmm11, xmm15 }
      if ( v35 )
      {
        __asm { vmovss  dword ptr [rsp+1B0h+curveID], xmm14 }
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDd);
        v66 = outTargetGrabIndex;
        if ( ((outTargetGrabIndex - 3) & 0xFFFFFFFB) != 0 )
        {
          v66 = outTargetGrabIndex - (outTargetGrabIndex > 3);
          v67 = XAnimGetChildAt(obj->tree->anims, v34, v66);
          __asm { vmovss  xmm0, cs:ladderBlendTime }
          v69 = v67;
          __asm
          {
            vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
            vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
            vmovss  dword ptr [rsp+1B0h+curveID], xmm9
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v34, curveIDe, inOutAnchorPosa, outPrevGrabAnimTimea, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
          __asm
          {
            vmovss  xmm0, cs:ladderBlendTime
            vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
            vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
            vmovss  dword ptr [rsp+1B0h+curveID], xmm9
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v69, curveIDf, inOutAnchorPosb, outPrevGrabAnimTimeb, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
          __asm { vmovss  dword ptr [rsp+1B0h+curveID], xmm9 }
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v69, curveIDg);
          v35 = v162;
          __asm { vmovaps xmm11, xmm14 }
        }
      }
      else
      {
        v66 = outTargetGrabIndex;
      }
      XAnimLadderClimb_SetScrubbedNotetracks_r(obj->tree, graftAnimIndex, _R14);
      _RSI->m_initialized = 1;
    }
    v70 = obj->tree;
    __asm { vmovaps [rsp+1B0h+var_90], xmm10 }
    *(double *)&_XMM0 = XAnimGetGoalWeight(v70, 0, XANIM_SUBTREE_DEFAULT, v28);
    __asm { vcomiss xmm0, xmm8 }
    if ( v85 | v25 )
    {
      __asm
      {
        vmovss  xmm0, cs:ladderBlendTime
        vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
        vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
        vmovss  dword ptr [rsp+1B0h+curveID], xmm9
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDh, inOutAnchorPosc, outPrevGrabAnimTimec, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
      __asm { vmovss  dword ptr [rsp+1B0h+curveID], xmm15 }
      XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDi);
    }
    __asm
    {
      vmovaps [rsp+1B0h+var_B0], xmm12
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( !v163 )
    {
      __asm
      {
        vandps  xmm1, xmm13, xmm10
        vcomiss xmm1, cs:__real@34000000
      }
    }
    if ( v35 )
    {
      _RBX = DCONST_DVARFLT_xanim_ladder_climb_grab_time;
      if ( !DCONST_DVARFLT_xanim_ladder_climb_grab_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_climb_grab_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm3, dword ptr [rbx+28h] }
      _EAX = 0;
      __asm { vmovd   xmm1, eax }
      _EAX = v163;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3d4ccccd
        vblendvps xmm13, xmm1, xmm3, xmm2
        vmovaps xmm1, xmm11; currentAnimTime
        vmovaps xmm0, xmm14; targetAnimTime
        vxorps  xmm12, xmm12, xmm12
      }
      *(double *)&_XMM0 = XAnimLadderClimb_AnimTimeDifference(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm15, [rbp+0B0h+dtime]
        vandps  xmm6, xmm0, xmm10
        vcomiss xmm6, xmm8
        vmovaps xmm7, xmm0
      }
      if ( v85 | v86 )
        goto LABEL_46;
      __asm { vcomiss xmm6, xmm9 }
      if ( !v85 )
      {
LABEL_46:
        _RSI->m_prevAnimSpeed = 0.0;
      }
      else
      {
        __asm { vcomiss xmm0, cs:__real@3f000000 }
        if ( !(v85 | v86) )
        {
          v91 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 528, ASSERT_TYPE_ASSERT, "(animTimeDifference <= 0.5f)", (const char *)&queryFormat, "animTimeDifference <= 0.5f");
          v85 = 0;
          v86 = !v91;
          if ( v91 )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm0, xmm14, [rsp+1B0h+rate]
          vandps  xmm0, xmm0, xmm10
          vsubss  xmm2, xmm14, xmm11
          vandps  xmm2, xmm2, xmm10
          vdivss  xmm0, xmm2, xmm0
          vminss  xmm12, xmm0, xmm9
          vmulss  xmm1, xmm12, xmm13
          vdivss  xmm2, xmm2, xmm1
          vmulss  xmm0, xmm2, xmm15
          vminss  xmm3, xmm0, xmm6
          vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm8, xmm7
          vblendvps xmm0, xmm1, xmm3, xmm0
          vaddss  xmm0, xmm0, xmm11; X
          vandps  xmm1, xmm0, xmm10
          vcomiss xmm1, xmm9
          vmovss  dword ptr [rsi+50h], xmm2
        }
        if ( !(v85 | v86) )
          goto LABEL_44;
        __asm { vcomiss xmm0, xmm8 }
        if ( v85 )
LABEL_44:
          v106 = 1;
        else
          v106 = 0;
        __asm { vmovaps xmm1, xmm9; Y }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vaddss  xmm2, xmm0, xmm9
          vcmpltss xmm1, xmm0, xmm8
          vblendvps xmm0, xmm0, xmm2, xmm1
          vmovss  dword ptr [rsp+1B0h+curveID], xmm0
        }
        XAnimSetWrappedTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v28, curveIDj, v106);
      }
      if ( ((v66 - 3) & 0xFFFFFFFB) != 0 )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ladder_climb_grab_begin_percent, "xanim_ladder_climb_grab_begin_percent");
        __asm
        {
          vcomiss xmm12, xmm0
          vmovaps xmm6, xmm0
        }
        if ( v85 | v25 )
        {
          v111 = XAnimGetChildAt(obj->tree->anims, v34, v66 - (v66 > 3));
          *(double *)&_XMM0 = XAnimGetLength(obj->tree->anims, v111);
          __asm
          {
            vmulss  xmm1, xmm6, xmm13
            vdivss  xmm6, xmm0, xmm1
          }
          *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v111);
          __asm
          {
            vmulss  xmm1, xmm6, xmm15
            vaddss  xmm0, xmm0, xmm1; val
            vandps  xmm2, xmm0, xmm10
            vcomiss xmm2, xmm9
          }
          if ( !(v114 | v25) )
            goto LABEL_52;
          __asm { vcomiss xmm0, xmm8 }
          if ( v114 )
LABEL_52:
            v118 = 1;
          else
            v118 = 0;
          __asm
          {
            vmovaps xmm2, xmm9; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  dword ptr [rsp+1B0h+curveID], xmm0
            vmovaps xmm6, xmm0
          }
          XAnimSetWrappedTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v111, curveIDk, v118);
          __asm { vmovss  xmm0, cs:ladderBlendTime }
          v123 = cachedModelNameMap;
          __asm { vcomiss xmm6, xmm8 }
          notifyType = !(v85 | v25);
          __asm
          {
            vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
            vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
            vmovss  dword ptr [rsp+1B0h+curveID], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v34, curveIDl, inOutAnchorPosd, outPrevGrabAnimTimed, (scr_string_t)0, notifyType, 0, LINEAR, cachedModelNameMap);
          __asm
          {
            vmovss  xmm0, cs:ladderBlendTime
            vmovss  dword ptr [rsp+1B0h+outPrevGrabAnimTime], xmm8
            vmovss  dword ptr [rsp+1B0h+inOutAnchorPos], xmm0
            vmovss  dword ptr [rsp+1B0h+curveID], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v111, curveIDm, inOutAnchorPose, outPrevGrabAnimTimee, (scr_string_t)0, notifyType, 0, LINEAR, v123);
        }
      }
    }
    __asm
    {
      vmovaps xmm12, [rsp+1B0h+var_B0]
      vmovaps xmm10, [rsp+1B0h+var_90]
    }
    goto LABEL_55;
  }
  __asm { vmovss  xmm2, cs:ladderBlendTime; blendTime }
  XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
LABEL_56:
  __asm { vmovaps xmm8, [rsp+1B0h+var_70] }
}

/*
==============
XAnimLadderClimb_Read
==============
*/
void XAnimLadderClimb_Read(void *nodeData, MemoryFile *memFile)
{
  _RDI = nodeData;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+44h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+48h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+14h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+20h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+34h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+38h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+50h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+30h], xmm0 }
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
  char *fmt; 
  double v21; 
  double v22; 
  double v23; 

  v6 = size;
  _R14 = nodeData;
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
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 646, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
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
  __asm
  {
    vmovss  xmm0, dword ptr [r14+30h]
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  xmm2, dword ptr [r14+4]
    vmovss  xmm3, dword ptr [r14]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+58h+var_20], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+58h+var_28], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+58h+var_30], xmm2
    vmovsd  [rsp+58h+fmt], xmm3
  }
  Com_sprintfPos_truncate(buffer, v10, inoutPos, "   ^5[anchor: %.4f - %.4f - %.4f, speed: %.5f] \n", *(double *)&fmt, v21, v22, v23);
}

/*
==============
XAnimLadderClimb_AnimTimeDifference
==============
*/

float __fastcall XAnimLadderClimb_AnimTimeDifference(double targetAnimTime, double currentAnimTime)
{
  char v2; 
  char v3; 

  __asm
  {
    vcomiss xmm0, xmm1
    vsubss  xmm4, xmm0, xmm1
  }
  if ( v2 | v3 )
  {
    if ( !v2 )
      goto LABEL_3;
    __asm
    {
      vaddss  xmm0, xmm0, cs:__real@3f800000
      vsubss  xmm3, xmm0, xmm1
      vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm2, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm2, xmm2, xmm0
      vblendvps xmm0, xmm4, xmm3, xmm2
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, cs:__real@3f800000
      vsubss  xmm0, xmm0, xmm1
      vandps  xmm3, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm3, xmm1
    }
    if ( !v2 )
LABEL_3:
      __asm { vmovaps xmm0, xmm4 }
  }
  return *(float *)&_XMM0;
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
  unsigned int ChildAt; 
  int v32; 
  const vec4_t *v84; 
  vec3_t *p_start; 
  char v109; 
  char v110; 
  const XAnimParts *Parts; 
  const vec4_t *v162; 
  float fmt; 
  float fmta; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outExtentBottom; 
  vec3_t center; 
  tmat33_t<vec3_t> axis; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 694, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !XAnimIsCustomNodeByName(obj->tree->anims, animIndex, scr_const.xanimLadderClimb) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 695, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeByName( obj->tree->anims, animIndex, scr_const.xanimLadderClimb ))", (const char *)&queryFormat, "XAnimIsCustomNodeByName( obj->tree->anims, animIndex, scr_const.xanimLadderClimb )") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  if ( InfoIndex )
  {
    __asm
    {
      vmovaps [rsp+190h+var_40], xmm6
      vmovaps [rsp+190h+var_50], xmm7
      vmovaps [rsp+190h+var_60], xmm8
      vmovaps [rsp+190h+var_70], xmm9
      vmovaps [rsp+190h+var_80], xmm10
      vmovaps [rsp+190h+var_90], xmm11
      vmovaps [rsp+190h+var_A0], xmm12
      vmovaps [rsp+190h+var_B0], xmm13
      vmovaps [rsp+190h+var_C0], xmm14
    }
    AnimInfo = XAnimGetAnimInfo(InfoIndex);
    _RDI = (const vec3_t *)XAnimGetCustomNodeData(obj->tree->anims, AnimInfo, animIndex);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 708, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    ChildAt = XAnimGetChildAt(obj->tree->anims, animIndex, 0);
    AnglesToAxis(_RDI + 3, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vsubss  xmm8, xmm0, dword ptr [rdi+0Ch]
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  xmm1, dword ptr [rdi+1Ch]
      vmovss  xmm2, dword ptr [rdi+38h]; handDistance
      vsubss  xmm7, xmm0, dword ptr [rdi+14h]
      vsubss  xmm6, xmm1, dword ptr [rdi+10h]
    }
    *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(_RDI + 1, _RDI + 2, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm3, xmm3, xmm2
      vsqrtss xmm9, xmm3, xmm3
      vdivss  xmm1, xmm9, dword ptr [rdi+34h]
      vcvttss2si r15d, xmm1
    }
    v32 = 0;
    __asm { vmovaps xmm12, xmm0 }
    if ( _ER15 >= 0 )
    {
      __asm { vmovss  xmm8, cs:__real@41200000 }
      do
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rdi+0Ch]
          vmulss  xmm4, xmm8, dword ptr [rbp+90h+axis+0Ch]
          vmovss  xmm7, dword ptr [rdi+10h]
          vmulss  xmm3, xmm8, dword ptr [rbp+90h+axis+10h]
          vmulss  xmm2, xmm8, dword ptr [rbp+90h+axis+14h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm1, xmm0, dword ptr [rdi+34h]
          vaddss  xmm6, xmm1, dword ptr [rdi+14h]
          vaddss  xmm0, xmm4, xmm5
          vmovss  dword ptr [rsp+190h+start], xmm0
          vaddss  xmm0, xmm3, xmm7
          vmovss  dword ptr [rsp+190h+start+4], xmm0
          vaddss  xmm0, xmm6, xmm2
          vsubss  xmm1, xmm5, xmm4
          vmovss  dword ptr [rsp+190h+start+8], xmm0
          vmovss  dword ptr [rsp+190h+end], xmm1
          vsubss  xmm0, xmm7, xmm3
          vsubss  xmm1, xmm6, xmm2
          vmovss  dword ptr [rsp+190h+end+4], xmm0
          vmovss  dword ptr [rsp+190h+end+8], xmm1
        }
        CL_AddDebugLine(&start, &end, &colorGreen, 1, 0, 0);
        ++v32;
      }
      while ( v32 <= _ER15 );
    }
    __asm
    {
      vdivss  xmm0, xmm9, dword ptr [rdi+38h]
      vmovss  xmm7, cs:__real@40400000
      vcvttss2si r15d, xmm0
    }
    for ( _EBX = 0; _EBX <= _ER15; ++_EBX )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+38h]
        vmovss  xmm1, dword ptr [rdi+14h]
        vmovss  xmm6, dword ptr [rbp+90h+axis+18h]
        vmovss  xmm8, dword ptr [rbp+90h+axis+1Ch]
        vmovss  xmm10, dword ptr [rbp+90h+axis+20h]
        vsubss  xmm2, xmm1, xmm12
        vmovd   xmm0, ebx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, xmm5
        vmulss  xmm0, xmm6, xmm3
        vaddss  xmm4, xmm0, dword ptr [rdi+0Ch]
        vmulss  xmm0, xmm8, xmm3
        vaddss  xmm9, xmm0, dword ptr [rdi+10h]
        vmulss  xmm0, xmm10, xmm3
        vaddss  xmm11, xmm2, xmm0
        vsubss  xmm2, xmm1, xmm12
        vaddss  xmm0, xmm3, xmm2
        vsubss  xmm2, xmm0, xmm2
        vdivss  xmm1, xmm2, xmm5
        vcvttss2si eax, xmm1
        vmovss  dword ptr [rsp+190h+end], xmm4
        vmovss  dword ptr [rsp+190h+end+4], xmm9
        vmovss  dword ptr [rsp+190h+end+8], xmm11
        vmulss  xmm0, xmm6, xmm5
      }
      if ( (_EAX & 1) != 0 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+0Ch]
          vaddss  xmm2, xmm1, xmm4
          vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+10h]
          vaddss  xmm4, xmm1, xmm9
          vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+14h]
          vaddss  xmm3, xmm1, xmm11
          vaddss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rsp+190h+end], xmm2
          vmulss  xmm2, xmm8, xmm5
          vaddss  xmm0, xmm2, xmm4
          vmovss  dword ptr [rsp+190h+start], xmm1
          vmulss  xmm1, xmm10, xmm5
          vaddss  xmm2, xmm1, xmm3
          vmovss  dword ptr [rsp+190h+start+8], xmm2
          vmovss  dword ptr [rsp+190h+end+4], xmm4
          vmovss  dword ptr [rsp+190h+end+8], xmm3
          vmovss  dword ptr [rsp+190h+start+4], xmm0
        }
        v84 = &colorRed;
        p_start = &start;
      }
      else
      {
        __asm
        {
          vaddss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm8, xmm5
          vaddss  xmm0, xmm2, xmm9
          vmovss  dword ptr [rsp+190h+outExtentBottom], xmm1
          vmulss  xmm1, xmm10, xmm5
          vaddss  xmm2, xmm1, xmm11
          vmovss  dword ptr [rsp+190h+outExtentBottom+8], xmm2
          vmovss  dword ptr [rsp+190h+outExtentBottom+4], xmm0
        }
        v84 = &colorBlue;
        p_start = &outExtentBottom;
      }
      CL_AddDebugLine(&end, p_start, v84, 1, 0, 0);
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0Ch]
      vmovss  dword ptr [rsp+190h+center], xmm3
      vmovss  xmm4, dword ptr [rdi+10h]
      vmovss  dword ptr [rsp+190h+center+4], xmm4
      vmovss  xmm5, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+190h+center+8], xmm5
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  xmm1, dword ptr [rdi+8]
      vsubss  xmm2, xmm0, xmm12
      vsubss  xmm2, xmm1, xmm2
      vdivss  xmm0, xmm2, dword ptr [rdi+38h]
      vcvttss2si eax, xmm0
    }
    if ( (_EAX & 1) != 0 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+0Ch]
        vaddss  xmm2, xmm1, xmm3
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+10h]
        vmovss  dword ptr [rsp+190h+center], xmm2
        vaddss  xmm2, xmm1, xmm4
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+14h]
        vmovss  dword ptr [rsp+190h+center+4], xmm2
        vaddss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rsp+190h+center+8], xmm2
      }
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vmovaps xmm1, xmm8; radius
    }
    CG_DebugSphere(&center, *(float *)&_XMM1, &colorYellow, 1, 0);
    *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcomiss xmm0, xmm9
    }
    if ( !(v109 | v110) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  dword ptr [rsp+190h+fmt], xmm0
      }
      XAnimLadderClimb_GetLadderRaiseLocalExtents(_RDI, _RDI + 1, _RDI + 2, &axis, fmt, &outExtentBottom, &start);
      *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+190h+start]
        vsubss  xmm2, xmm1, dword ptr [rsp+190h+outExtentBottom]
        vmovss  xmm1, dword ptr [rsp+190h+start+4]
        vmulss  xmm3, xmm2, xmm0
        vsubss  xmm2, xmm1, dword ptr [rsp+190h+outExtentBottom+4]
        vaddss  xmm10, xmm3, dword ptr [rsp+190h+outExtentBottom]
        vmovss  xmm1, dword ptr [rsp+190h+start+8]
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm3, xmm3, dword ptr [rsp+190h+outExtentBottom+4]
        vmovaps xmm6, xmm0
        vcomiss xmm6, xmm8
        vsubss  xmm0, xmm1, dword ptr [rsp+190h+outExtentBottom+8]
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm5, xmm2, dword ptr [rsp+190h+outExtentBottom+8]
        vmovss  dword ptr [rsp+190h+end+8], xmm5
        vmovss  dword ptr [rsp+190h+end], xmm10
        vmovss  dword ptr [rsp+190h+end+4], xmm3
      }
      if ( !(v109 | v110) )
      {
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+0Ch]
          vaddss  xmm2, xmm1, xmm10
          vmulss  xmm1, xmm7, dword ptr [rbp+90h+axis+10h]
          vmovss  dword ptr [rsp+190h+end], xmm2
          vaddss  xmm2, xmm1, xmm3
          vmulss  xmm3, xmm7, dword ptr [rbp+90h+axis+14h]
          vmovss  dword ptr [rsp+190h+end+4], xmm2
          vaddss  xmm2, xmm3, xmm5
          vmovss  dword ptr [rsp+190h+end+8], xmm2
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm9
        vmovaps xmm1, xmm8; radius
      }
      CG_DebugSphere(&end, *(float *)&_XMM1, &colorCyan, 1, 0);
    }
    Parts = XAnimGetParts(obj->tree->anims, ChildAt);
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
    __asm { vmovss  [rbp+90h+var_E8], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_mid);
    __asm { vmovss  [rbp+90h+var_E4], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_top);
    __asm { vmovss  [rbp+90h+var_E0], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left);
    __asm { vmovss  [rbp+90h+var_DC], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
    __asm { vmovss  [rbp+90h+var_D8], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_mid);
    __asm { vmovss  [rbp+90h+var_D4], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_top);
    __asm { vmovss  [rbp+90h+var_D0], xmm0 }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right);
    __asm
    {
      vmovss  [rbp+90h+var_CC], xmm0
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+190h+fmt], xmm0
    }
    XAnimLadderClimb_GetLadderRaiseLocalExtents(_RDI, _RDI + 1, _RDI + 2, &axis, fmta, &outExtentBottom, &start);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+190h+start]
      vmovss  xmm9, dword ptr [rsp+190h+outExtentBottom]
      vmovss  xmm10, dword ptr [rsp+190h+outExtentBottom+4]
      vmovss  xmm1, dword ptr [rsp+190h+start+4]
      vmovss  xmm11, dword ptr [rsp+190h+outExtentBottom+8]
      vmovss  xmm8, cs:__real@40a00000
      vsubss  xmm12, xmm0, xmm9
      vmovss  xmm0, dword ptr [rsp+190h+start+8]
      vsubss  xmm14, xmm0, xmm11
    }
    _RBX = 0i64;
    __asm { vsubss  xmm13, xmm1, xmm10 }
    do
    {
      __asm
      {
        vmovss  xmm2, [rbp+rbx*4+90h+var_E8]
        vmulss  xmm4, xmm8, dword ptr [rbp+90h+axis+0Ch]
        vmulss  xmm3, xmm8, dword ptr [rbp+90h+axis+10h]
        vmulss  xmm0, xmm2, xmm12
        vaddss  xmm5, xmm0, xmm9
        vmulss  xmm0, xmm2, xmm14
        vaddss  xmm7, xmm0, xmm11
        vmulss  xmm1, xmm2, xmm13
        vmulss  xmm2, xmm8, dword ptr [rbp+90h+axis+14h]
        vaddss  xmm6, xmm1, xmm10
        vaddss  xmm0, xmm4, xmm5
        vmovss  dword ptr [rsp+190h+start], xmm0
        vaddss  xmm0, xmm3, xmm6
        vmovss  dword ptr [rsp+190h+start+4], xmm0
        vaddss  xmm0, xmm2, xmm7
        vsubss  xmm1, xmm5, xmm4
        vmovss  dword ptr [rsp+190h+start+8], xmm0
        vmovss  dword ptr [rsp+190h+outExtentBottom], xmm1
        vsubss  xmm0, xmm6, xmm3
        vsubss  xmm1, xmm7, xmm2
      }
      v162 = &colorPurple;
      if ( ((_RBX - 3) & 0xFFFFFFFFFFFFFFFBui64) == 0 )
        v162 = &colorWhite;
      __asm
      {
        vmovss  dword ptr [rsp+190h+outExtentBottom+4], xmm0
        vmovss  dword ptr [rsp+190h+outExtentBottom+8], xmm1
      }
      CL_AddDebugLine(&start, &outExtentBottom, v162, 1, 0, 0);
      ++_RBX;
    }
    while ( _RBX < 8 );
    __asm
    {
      vmovaps xmm14, [rsp+190h+var_C0]
      vmovaps xmm13, [rsp+190h+var_B0]
      vmovaps xmm12, [rsp+190h+var_A0]
      vmovaps xmm11, [rsp+190h+var_90]
      vmovaps xmm10, [rsp+190h+var_80]
      vmovaps xmm9, [rsp+190h+var_70]
      vmovaps xmm8, [rsp+190h+var_60]
      vmovaps xmm7, [rsp+190h+var_50]
      vmovaps xmm6, [rsp+190h+var_40]
    }
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
  unsigned int v7; 
  unsigned int ChildAt; 
  char v10; 
  char v11; 
  __int64 result; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 71, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  NumChildren = XAnimGetNumChildren(tree->anims, grabsParentIndex);
  if ( !NumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 75, ASSERT_TYPE_ASSERT, "(numChildren)", (const char *)&queryFormat, "numChildren") )
    __debugbreak();
  v7 = 0;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( NumChildren <= 0 )
  {
LABEL_11:
    result = 0i64;
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    while ( 1 )
    {
      ChildAt = XAnimGetChildAt(tree->anims, grabsParentIndex, v7);
      *(double *)&_XMM0 = XAnimGetGoalWeight(tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt);
      __asm { vcomiss xmm0, xmm6 }
      if ( !(v10 | v11) )
        break;
      if ( (int)++v7 >= NumChildren )
        goto LABEL_11;
    }
    result = ChildAt;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
XAnimLadderClimb_GetClampedAnchorPos
==============
*/
bool XAnimLadderClimb_GetClampedAnchorPos(XAnimLadderClimb *node, XAnimTree *tree, tmat33_t<vec3_t> *ladderAxis, unsigned int climbAnimIndex, float currentAnimTime, vec3_t *inOutAnchorPos)
{
  const XAnimParts *Parts; 
  char v25; 
  char v26; 
  scr_string_t ladder_stop_left_mid; 
  char v73; 
  bool result; 

  _R15 = inOutAnchorPos;
  _RSI = node;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 152, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ladder_climb.cpp", 153, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+108h+var_38], xmm6
    vmovaps [rsp+108h+var_48], xmm7
    vmovaps [rsp+108h+var_58], xmm8
    vmovaps [rsp+108h+var_68], xmm9
    vmovaps [rsp+108h+var_78], xmm10
    vmovaps [rsp+108h+var_88], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps [rsp+108h+var_C8], xmm15
  }
  Parts = XAnimGetParts(tree->anims, climbAnimIndex);
  if ( !_RSI->m_isTorso )
    goto LABEL_15;
  __asm { vmovss  xmm3, dword ptr [rsi+38h]; handDistance }
  *(double *)&_XMM0 = BG_Ladder_GetTargetAnimationTime(&_RSI->m_anchorPos, &_RSI->m_bottom, &_RSI->m_top, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+38h]; handDistance
    vmovaps xmm15, xmm0
  }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(&_RSI->m_bottom, &_RSI->m_top, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm2, dword ptr [r14+1Ch]
    vaddss  xmm14, xmm0, dword ptr [rsi+10h]
    vmulss  xmm1, xmm2, dword ptr [r14+18h]
    vaddss  xmm13, xmm1, dword ptr [rsi+0Ch]
    vmulss  xmm0, xmm2, dword ptr [r14+20h]
    vaddss  xmm2, xmm0, dword ptr [rsi+14h]
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  xmm1, dword ptr [rsi+1Ch]
    vmovss  xmm11, dword ptr [rsi+38h]
    vmovss  xmm9, cs:__real@40000000
    vsubss  xmm6, xmm0, xmm13
    vmovss  xmm0, dword ptr [rsi+20h]
    vsubss  xmm7, xmm0, xmm2
    vsubss  xmm4, xmm1, xmm14
    vmovss  [rsp+108h+var_D8], xmm2
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rsi]
    vaddss  xmm5, xmm3, xmm0
    vsqrtss xmm10, xmm5, xmm5
    vmulss  xmm12, xmm11, xmm9
    vdivss  xmm0, xmm10, xmm12
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm8, xmm8, xmm0, 1
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, xmm14
    vsubss  xmm0, xmm2, xmm13
    vmovss  xmm2, dword ptr [rsi+8]
    vmulss  xmm3, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm0, xmm2, [rsp+108h+var_D8]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm3, xmm4, xmm1
    vmovss  [rsp+108h+var_D4], xmm13
    vmovss  xmm13, cs:__real@3f800000
    vmulss  xmm0, xmm11, xmm8
    vmovss  [rsp+108h+var_D0], xmm14
    vmulss  xmm1, xmm0, xmm9
    vdivss  xmm14, xmm13, xmm10
    vmulss  xmm2, xmm1, xmm14
    vdivss  xmm7, xmm3, xmm5
    vcomiss xmm7, xmm2
  }
  if ( v25 )
    goto LABEL_15;
  __asm
  {
    vmulss  xmm0, xmm12, xmm8
    vaddss  xmm1, xmm0, xmm11
    vcomiss xmm10, xmm1
  }
  if ( v25 | v26 )
  {
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
    ladder_stop_left_mid = scr_const.ladder_stop_left_mid;
  }
  else
  {
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
    ladder_stop_left_mid = scr_const.ladder_stop_right_mid;
  }
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, ladder_stop_left_mid);
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vcomiss xmm15, xmm4
  }
  if ( !(v73 | v26) )
    goto LABEL_14;
  __asm
  {
    vaddss  xmm0, xmm8, xmm13
    vmulss  xmm1, xmm0, dword ptr [rsi+38h]
    vmulss  xmm2, xmm1, xmm9
    vmulss  xmm3, xmm2, xmm14
    vcomiss xmm7, xmm3
  }
  if ( v73 )
  {
LABEL_15:
    result = 0;
  }
  else
  {
LABEL_14:
    __asm
    {
      vaddss  xmm0, xmm4, cs:__real@3a83126f
      vaddss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, dword ptr [rsi+38h]
      vmulss  xmm3, xmm2, xmm9
      vmulss  xmm0, xmm3, dword ptr [r14+18h]
      vaddss  xmm1, xmm0, [rsp+108h+var_D4]
      vmovss  dword ptr [r15], xmm1
      vmulss  xmm0, xmm3, dword ptr [r14+1Ch]
      vaddss  xmm1, xmm0, [rsp+108h+var_D0]
      vmovss  dword ptr [r15+4], xmm1
      vmulss  xmm0, xmm3, dword ptr [r14+20h]
      vaddss  xmm1, xmm0, [rsp+108h+var_D8]
      vmovss  dword ptr [r15+8], xmm1
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm15, [rsp+108h+var_C8]
    vmovaps xmm14, [rsp+108h+var_B8]
    vmovaps xmm13, [rsp+108h+var_A8]
    vmovaps xmm12, [rsp+108h+var_98]
    vmovaps xmm11, [rsp+108h+var_88]
    vmovaps xmm10, [rsp+108h+var_78]
    vmovaps xmm9, [rsp+108h+var_68]
    vmovaps xmm8, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_48]
    vmovaps xmm6, [rsp+108h+var_38]
  }
  return result;
}

/*
==============
XAnimLadderClimb_GetLadderRaiseLocalExtents
==============
*/
void XAnimLadderClimb_GetLadderRaiseLocalExtents(const vec3_t *anchorPos, const vec3_t *ladderBottom, const vec3_t *ladderTop, tmat33_t<vec3_t> *ladderAxis, float ladderRungDistance, vec3_t *outExtentBottom, vec3_t *outExtentTop)
{
  char v24; 
  char v25; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, [rsp+38h+ladderRungDistance]
  }
  _RBX = anchorPos;
  __asm { vmovaps xmm2, xmm6; handDistance }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rdi+8]
  }
  _RDX = outExtentBottom;
  _RCX = outExtentTop;
  __asm
  {
    vmovaps xmm3, xmm0
    vaddss  xmm5, xmm2, xmm0
  }
  *outExtentBottom = *ladderBottom;
  *outExtentTop = *ladderBottom;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdx+8], xmm1
    vmovss  xmm2, dword ptr [rcx+8]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm5, xmm0
    vsubss  xmm4, xmm2, xmm3
    vmovss  dword ptr [rcx+8], xmm4
  }
  if ( v24 | v25 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi+18h]
      vaddss  xmm3, xmm0, dword ptr [rcx]
      vmulss  xmm2, xmm6, cs:__real@c0000000
      vmovss  dword ptr [rcx], xmm3
      vmulss  xmm0, xmm6, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rcx+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [rsi+20h]
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rcx+8], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+18h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdx], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rdx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+20h]
      vaddss  xmm1, xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [rdx+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm4, xmm6, cs:__real@40000000
      vxorps  xmm1, xmm1, xmm1
      vdivss  xmm0, xmm5, xmm4
      vroundss xmm1, xmm1, xmm0, 1
      vmulss  xmm0, xmm1, xmm6
      vmulss  xmm3, xmm0, cs:__real@40000000
      vmulss  xmm1, xmm3, dword ptr [rsi+18h]
      vaddss  xmm2, xmm1, dword ptr [rdx]
      vmovss  dword ptr [rdx], xmm2
      vmulss  xmm0, xmm3, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rdx+4]
      vmovss  dword ptr [rdx+4], xmm1
      vmulss  xmm0, xmm3, dword ptr [rsi+20h]
      vaddss  xmm1, xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rdx+8], xmm1
      vmulss  xmm0, xmm4, dword ptr [rsi+18h]
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rcx], xmm1
      vmulss  xmm0, xmm4, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rdx+4]
      vmovss  dword ptr [rcx+4], xmm1
      vmulss  xmm0, xmm4, dword ptr [rsi+20h]
      vaddss  xmm1, xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rcx+8], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
XAnimLadderClimb_GetRaiseContactTimeAndAnimTime
==============
*/

void __fastcall XAnimLadderClimb_GetRaiseContactTimeAndAnimTime(const vec3_t *anchorPos, vec3_t *ladderBottom, const vec3_t *ladderTop, double handDistance, float ladderSpeed, float *outContactTime, float *outContactAnimTime)
{
  char v37; 
  char v38; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
  }
  _RDI = anchorPos;
  __asm
  {
    vmovss  xmm9, [rsp+78h+arg_20]
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vmovaps [rsp+78h+var_58], xmm10
    vmovaps xmm10, xmm3
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm2, xmm10; handDistance
    vmovaps [rsp+78h+var_28], xmm7
  }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(ladderBottom, ladderTop, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+8]
    vsubss  xmm1, xmm7, dword ptr [rbx+8]
  }
  _RAX = outContactTime;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vdivss  xmm3, xmm2, xmm10
    vmovaps xmm6, xmm0
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm3, 1
    vaddss  xmm2, xmm4, cs:__real@3f800000
    vcmpltss xmm1, xmm8, xmm9
    vblendvps xmm1, xmm4, xmm2, xmm1
    vmulss  xmm0, xmm1, xmm10; X
    vaddss  xmm2, xmm0, dword ptr [rbx+8]
    vsubss  xmm3, xmm2, xmm6
    vmulss  xmm6, xmm10, cs:__real@40000000
    vsubss  xmm1, xmm3, xmm7
    vdivss  xmm4, xmm1, xmm9
    vmovaps xmm1, xmm6; Y
    vmovss  dword ptr [rax], xmm4
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vcomiss xmm9, xmm8 }
  _RAX = outContactAnimTime;
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovss  dword ptr [rax], xmm1
  }
  if ( !(v37 | v38) )
  {
    __asm { vcomiss xmm1, xmm8 }
    if ( v37 | v38 )
      *outContactAnimTime = 1.0;
  }
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
  }
}

/*
==============
XAnimLadderClimb_GetStopTimeInfo
==============
*/

void __fastcall XAnimLadderClimb_GetStopTimeInfo(XAnimTree *tree, unsigned int climbAnimIndex, double currentAnimTime, double targetAnimTime, int *outTargetGrabIndex, float *outTargetGrabAnimTime, float *outPrevGrabAnimTime)
{
  XAnim_s *anims; 
  const XAnimParts *Parts; 
  char v30; 
  char v31; 
  int v34; 
  int v150[7]; 
  char v156; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
  }
  anims = tree->anims;
  _RSI = outTargetGrabAnimTime;
  _RDI = outPrevGrabAnimTime;
  __asm
  {
    vmovss  [rsp+108h+var_E4], xmm2
    vmovaps xmm6, xmm3
  }
  Parts = XAnimGetParts(anims, climbAnimIndex);
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_low);
  __asm
  {
    vmovss  [rsp+108h+var_E0], xmm0
    vmovaps xmm14, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_mid);
  __asm
  {
    vmovss  [rsp+108h+var_DC], xmm0
    vmovaps xmm10, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left_top);
  __asm
  {
    vmovss  [rsp+108h+var_D8], xmm0
    vmovaps xmm11, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_left);
  __asm
  {
    vmovss  [rsp+108h+var_D4], xmm0
    vmovaps xmm12, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_low);
  __asm
  {
    vmovss  [rsp+108h+var_D0], xmm0
    vmovaps xmm13, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_mid);
  __asm
  {
    vmovss  [rsp+108h+var_CC], xmm0
    vmovaps xmm15, xmm0
  }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right_top);
  __asm { vmovss  [rsp+108h+var_C8], xmm0 }
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, scr_const.ladder_stop_right);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
    vmovss  [rsp+108h+var_C4], xmm0
  }
  v34 = 7;
  __asm
  {
    vmovaps xmm5, xmm0
    vsubss  xmm4, xmm0, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm0, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm4, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm4, xmm4, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm1, xmm0, xmm7
      vsubss  xmm1, xmm1, xmm6
      vandps  xmm2, xmm1, xmm3
      vandps  xmm0, xmm4, xmm3
      vcomiss xmm2, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm4, xmm1 }
  }
  __asm
  {
    vcomiss xmm14, xmm6
    vsubss  xmm8, xmm14, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm14, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm14, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v30 )
  {
    __asm { vcomiss xmm14, xmm9 }
    if ( !v30 )
    {
      v30 = 0;
      v31 = 1;
      v34 = 0;
      __asm
      {
        vmovaps xmm5, xmm14
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vcomiss xmm10, xmm6
    vsubss  xmm8, xmm10, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm10, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm10, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v30 )
  {
    __asm { vcomiss xmm10, xmm9 }
    if ( !v30 )
    {
      v34 = 1;
      __asm
      {
        vmovaps xmm5, xmm10
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vcomiss xmm11, xmm6
    vsubss  xmm8, xmm11, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm11, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm11, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v30 )
  {
    __asm { vcomiss xmm11, xmm9 }
    if ( !v30 )
    {
      v34 = 2;
      __asm
      {
        vmovaps xmm5, xmm11
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vcomiss xmm12, xmm6
    vsubss  xmm8, xmm12, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm12, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm12, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v30 )
  {
    __asm { vcomiss xmm12, xmm9 }
    if ( !v30 )
    {
      v34 = 3;
      __asm
      {
        vmovaps xmm5, xmm12
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vcomiss xmm13, xmm6
    vsubss  xmm8, xmm13, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm13, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm13, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v30 )
  {
    __asm { vcomiss xmm13, xmm9 }
    if ( !v30 )
    {
      v34 = 4;
      __asm
      {
        vmovaps xmm5, xmm13
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vcomiss xmm15, xmm6
    vsubss  xmm8, xmm15, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm15, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm15, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm8, xmm3
      vcomiss xmm1, xmm0
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm1, xmm8, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v30 )
  {
    __asm { vcomiss xmm15, xmm9 }
    if ( !v30 )
    {
      v34 = 5;
      __asm
      {
        vmovaps xmm5, xmm15
        vmovaps xmm4, xmm8
      }
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+108h+var_C8]
    vcomiss xmm0, xmm6
    vsubss  xmm8, xmm0, xmm6
  }
  if ( v30 | v31 )
  {
    if ( v30 )
    {
      __asm
      {
        vaddss  xmm0, xmm0, xmm7
        vsubss  xmm2, xmm0, xmm6
        vandps  xmm0, xmm8, xmm3
        vandps  xmm1, xmm2, xmm3
        vcmpltss xmm1, xmm1, xmm0
        vmovss  xmm0, [rsp+108h+var_C8]
        vblendvps xmm8, xmm8, xmm2, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vsubss  xmm2, xmm0, xmm6
      vandps  xmm0, xmm8, xmm3
      vandps  xmm1, xmm2, xmm3
      vcomiss xmm1, xmm0
      vmovss  xmm0, [rsp+108h+var_C8]
    }
    if ( v30 )
      __asm { vmovaps xmm8, xmm2 }
  }
  __asm
  {
    vandps  xmm8, xmm8, xmm3
    vandps  xmm4, xmm4, xmm3
    vcomiss xmm8, xmm4
  }
  if ( v30 )
  {
    __asm { vcomiss xmm0, xmm9 }
    if ( !v30 )
    {
      v34 = 6;
      __asm { vmovaps xmm5, xmm0 }
    }
  }
  if ( outPrevGrabAnimTime )
  {
    __asm
    {
      vmovss  xmm1, [rsp+108h+var_E4]
      vcomiss xmm5, xmm1
      vsubss  xmm4, xmm5, xmm1
      vsubss  xmm0, xmm5, xmm7
      vsubss  xmm2, xmm0, xmm1
      vandps  xmm1, xmm2, xmm3
      vandps  xmm0, xmm4, xmm3
      vcomiss xmm1, xmm0
      vcomiss xmm4, xmm9
    }
    if ( v34 <= 0 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_C4]
        vmovss  dword ptr [rdi], xmm0
      }
    }
    else
    {
      *(_DWORD *)outPrevGrabAnimTime = v150[v34];
    }
  }
  if ( outTargetGrabIndex )
    *outTargetGrabIndex = v34;
  if ( outTargetGrabAnimTime )
    __asm { vmovss  dword ptr [rsi], xmm5 }
  _R11 = &v156;
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
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
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

