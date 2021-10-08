/*
==============
CG_Pose_IsHierarchyFlattened
==============
*/

bool __fastcall CG_Pose_IsHierarchyFlattened(const cpose_t *pose)
{
  return ?CG_Pose_IsHierarchyFlattened@@YA_NPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_ClearRagdollFlags
==============
*/

void __fastcall CG_Pose_ClearRagdollFlags(cpose_t *pose)
{
  ?CG_Pose_ClearRagdollFlags@@YAXPEAUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_CalcDObjPoseForMark
==============
*/

DObjAnimMat *__fastcall CG_Pose_CalcDObjPoseForMark(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  return ?CG_Pose_CalcDObjPoseForMark@@YAPEAUDObjAnimMat@@PEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@@Z(pose, obj, partBits);
}

/*
==============
CG_Pose_IsUsingRagdollOrigin
==============
*/

bool __fastcall CG_Pose_IsUsingRagdollOrigin(const cpose_t *pose)
{
  return ?CG_Pose_IsUsingRagdollOrigin@@YA_NPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_GetActiveRagdollHandle
==============
*/

int __fastcall CG_Pose_GetActiveRagdollHandle(const cpose_t *pose)
{
  return ?CG_Pose_GetActiveRagdollHandle@@YAHPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_IsRagdoll
==============
*/

bool __fastcall CG_Pose_IsRagdoll(const cpose_t *pose)
{
  return ?CG_Pose_IsRagdoll@@YA_NPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_IsKillcamRagdoll
==============
*/

bool __fastcall CG_Pose_IsKillcamRagdoll(const cpose_t *pose)
{
  return ?CG_Pose_IsKillcamRagdoll@@YA_NPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_SetUsingRagdollOrigin
==============
*/

bool __fastcall CG_Pose_SetUsingRagdollOrigin(cpose_t *pose, bool usingRagdollOrigin)
{
  return ?CG_Pose_SetUsingRagdollOrigin@@YA_NPEAUcpose_t@@_N@Z(pose, usingRagdollOrigin);
}

/*
==============
CG_Pose_InitializeRagdoll
==============
*/

void __fastcall CG_Pose_InitializeRagdoll(cpose_t *pose, bool killcamActive, const bool createdOnMovingPlatform)
{
  ?CG_Pose_InitializeRagdoll@@YAXPEAUcpose_t@@_N_N@Z(pose, killcamActive, createdOnMovingPlatform);
}

/*
==============
CG_Pose_ValidateSetEntityPoseOrigin
==============
*/

void __fastcall CG_Pose_ValidateSetEntityPoseOrigin(const cpose_t *pose)
{
  ?CG_Pose_ValidateSetEntityPoseOrigin@@YAXPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_DoControllers
==============
*/

void __fastcall CG_Pose_DoControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  ?CG_Pose_DoControllers@@YAXPEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@@Z(pose, obj, partBits);
}

/*
==============
CG_Pose_StopAnimatedRagdoll
==============
*/

void __fastcall CG_Pose_StopAnimatedRagdoll(cpose_t *pose)
{
  ?CG_Pose_StopAnimatedRagdoll@@YAXPEAUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_DisableAnimatedRagdollRootControl
==============
*/

void __fastcall CG_Pose_DisableAnimatedRagdollRootControl(cpose_t *pose)
{
  ?CG_Pose_DisableAnimatedRagdollRootControl@@YAXPEAUcpose_t@@@Z(pose);
}

/*
==============
CG_Pose_ValidateEntityPoseOrigin
==============
*/

void __fastcall CG_Pose_ValidateEntityPoseOrigin(const DObj *obj, const cpose_t *pose)
{
  ?CG_Pose_ValidateEntityPoseOrigin@@YAXPEBUDObj@@PEBUcpose_t@@@Z(obj, pose);
}

/*
==============
CG_Pose_CalcDObjPose
==============
*/

DObjAnimMat *__fastcall CG_Pose_CalcDObjPose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  return ?CG_Pose_CalcDObjPose@@YAPEAUDObjAnimMat@@PEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@@Z(pose, obj, partBits);
}

/*
==============
CG_ResetPoseZero
==============
*/

void __fastcall CG_ResetPoseZero(cpose_t *pose, const int randValOrigin, const int randValPrevOrigin)
{
  ?CG_ResetPoseZero@@YAXPEAUcpose_t@@HH@Z(pose, randValOrigin, randValPrevOrigin);
}

/*
==============
CG_Pose_CalcDObjPose
==============
*/
DObjAnimMat *CG_Pose_CalcDObjPose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  bool isMayhem; 
  DObjAnimMat *pMatOut; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1169, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1170, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  CG_Pose_ValidateEntityPoseOrigin(obj, pose);
  if ( !CL_Pose_DObjCreateSkelForBones(obj, partBits, &pMatOut) )
  {
    isMayhem = pose->isMayhem;
    if ( !isMayhem )
      DObjCompleteHierarchyBits(obj, partBits);
    CG_Pose_DoControllers(pose, obj, partBits);
    if ( pose->reusePreviousSkelPose )
    {
      DObjApplyPreviousSkelPose(obj);
      pose->reusePreviousSkelPose = 0;
    }
    if ( !isMayhem )
      DObjCalcSkel(obj, partBits);
  }
  return pMatOut;
}

/*
==============
CG_Pose_CalcDObjPoseForMark
==============
*/
DObjAnimMat *CG_Pose_CalcDObjPoseForMark(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  DObjAnimMat *pMatOut; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1204, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1205, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  CG_Pose_ValidateEntityPoseOrigin(obj, pose);
  if ( !CL_Pose_DObjCreateSkelForBones(obj, partBits, &pMatOut) )
  {
    if ( DObjGetTree(obj) )
      return 0i64;
    DObjCompleteHierarchyBits(obj, partBits);
    CG_Pose_DoControllers(pose, obj, partBits);
    DObjCalcSkelNoAnim(obj, partBits);
  }
  return pMatOut;
}

/*
==============
CG_Pose_ClearRagdollFlags
==============
*/
void CG_Pose_ClearRagdollFlags(cpose_t *pose)
{
  pose->ragdollFlags = 0;
}

/*
==============
CG_Pose_DisableAnimatedRagdollRootControl
==============
*/
void CG_Pose_DisableAnimatedRagdollRootControl(cpose_t *pose)
{
  unsigned __int8 ragdollFlags; 
  int killcamRagdollHandle; 

  ragdollFlags = pose->ragdollFlags;
  if ( (ragdollFlags & 1) != 0 )
  {
    killcamRagdollHandle = pose->killcamRagdollHandle;
    _RAX = ragdoll_poseController_defaultBlendDuration;
    if ( !killcamRagdollHandle )
      killcamRagdollHandle = pose->ragdollHandle;
    __asm { vmovss  xmm1, dword ptr [rax+28h]; blendOutTime }
    Ragdoll_DisablePoseControllerRoot(killcamRagdollHandle, *(float *)&_XMM1);
  }
  else
  {
    pose->ragdollFlags = ragdollFlags | 4;
  }
}

/*
==============
CG_Pose_DoBaseOriginController
==============
*/
void CG_Pose_DoBaseOriginController(const cpose_t *pose, const DObj *obj, DObjPartBits *setPartBits)
{
  const DObj *v16; 
  unsigned int RootBoneCount; 
  int v19; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  DObjPartBits *v23; 
  DObjAnimMat *RotTransArray; 
  unsigned int v34; 
  __int64 v35; 
  void (__fastcall *v41)(const vec4_t *, vec3_t *); 
  void (__fastcall *v43)(const vec4_t *, vec3_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  void (__fastcall *v184)(const vec4_t *, vec3_t *); 
  int v304; 
  int v305; 
  int v306; 
  int v307; 
  int v308; 
  vec3_t v310; 
  vec3_t trans; 
  const DObj *v316; 
  __int64 v317; 
  vec4_t quat; 
  DObjAnimMat rotTrans; 
  int v320; 
  int v321; 
  int v322; 
  tmat33_t<vec3_t> axis; 
  int v324[4]; 
  DObjPartBits partBits; 
  __int64 v327; 
  int v328; 
  char v329; 
  void *retaddr; 

  _RAX = &retaddr;
  v317 = -2i64;
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
  v16 = obj;
  v316 = obj;
  setPartBits->array[7] &= ~2u;
  RootBoneCount = DObjGetRootBoneCount(obj);
  if ( !RootBoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 873, ASSERT_TYPE_ASSERT, "(rootBoneCount)", (const char *)&queryFormat, "rootBoneCount") )
    __debugbreak();
  v19 = RootBoneCount - 1;
  v20 = (unsigned int)(v19 >> 5);
  v21 = 0;
  v22 = 0;
  if ( v19 >> 5 )
  {
    v23 = setPartBits;
    while ( v23->array[0] == -1 )
    {
      ++v22;
      v23 = (DObjPartBits *)((char *)v23 + 4);
      if ( v22 >= (unsigned int)v20 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( ((0xFFFFFFFF >> ((v19 & 0x1F) + 1)) | setPartBits->array[v20]) == -1 )
      goto LABEL_59;
  }
  RotTransArray = DObjGetRotTransArray(v16);
  if ( RotTransArray )
  {
    AnglesToQuat(&pose->angles, &quat);
    __asm
    {
      vmovdqu ymm0, cs:__ymm@8000000000000000000000000000000000000000000000000000000000000000
      vmovdqu ymmword ptr [rsp+228h+partBits.baseclass_0.baseclass_0.baseclass_0.array], ymm0
      vpxor   xmm1, xmm1, xmm1
      vmovdqu [rsp+228h+var_100], xmm1
    }
    v327 = 0i64;
    v328 = 0;
    _RCX = g_activeRefDef;
    __asm
    {
      vmovss  xmm7, dword ptr [rcx+7Ch]
      vmovss  [rsp+228h+var_1DC], xmm7
      vmovss  xmm8, dword ptr [rcx+80h]
      vmovss  [rsp+228h+var_1D8], xmm8
      vmovss  xmm9, dword ptr [rcx+84h]
      vmovss  [rsp+228h+var_1D4], xmm9
    }
    if ( v19 >= 0 )
    {
      _RSI = &RotTransArray->trans.v[2];
      __asm
      {
        vmovsd  xmm10, cs:__real@3f30000000000000
        vmovss  xmm6, cs:__real@45800000
      }
      v34 = partBits.array[7];
      while ( 1 )
      {
        v35 = (unsigned int)(v21 >> 5);
        if ( (v34 & setPartBits->array[v35]) == 0 )
          break;
LABEL_58:
        ++v21;
        v34 = __ROR4__(v34, 1);
        partBits.array[7] = v34;
        _RSI += 8;
        if ( v21 > v19 )
          goto LABEL_59;
      }
      if ( !DObjSetRotTransIndex(v16, (DObjPartBits *)((char *)&partBits + 4 * (unsigned int)(7 - v35)), v21) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+228h+quat]
          vmovaps xmmword ptr [rsp+228h+rotTrans.quat], xmm0
        }
        if ( pose->isPosePrecise )
        {
          if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 464, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          if ( !pose->isPosePrecise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 465, ASSERT_TYPE_ASSERT, "(pose->isPosePrecise != 0)", (const char *)&queryFormat, "pose->isPosePrecise != 0") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
          FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)v324);
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+228h+rotTrans.quat]
            vmulps  xmm0, xmm3, xmm3
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vsqrtps xmm0, xmm2
            vdivps  xmm1, xmm3, xmm0
            vmovups xmmword ptr [rsp+228h+rotTrans.quat], xmm1
            vmovss  xmm0, cs:__real@40000000
            vmovss  [rsp+228h+rotTrans.transWeight], xmm0
            vmovss  xmm12, dword ptr [rsi-0Ch]
            vmovss  xmm10, dword ptr [rsp+228h+quat]
            vmulss  xmm0, xmm10, xmm12
            vmovss  [rsp+228h+var_1F8], xmm0
          }
          _R15 = (DObjAnimMat *)(_RSI - 6);
          __asm
          {
            vmovss  xmm2, dword ptr [r15]
            vmovss  xmm0, dword ptr [rsp+228h+quat+0Ch]
            vmulss  xmm1, xmm0, xmm2
            vmovss  [rsp+228h+var_1E0], xmm1
            vmovss  xmm13, dword ptr [rsi-10h]
            vmovss  xmm5, dword ptr [rsp+228h+quat+4]
            vmovss  xmm3, dword ptr [rsi-14h]
            vmovss  xmm4, dword ptr [rsp+228h+quat+8]
            vmulss  xmm6, xmm4, xmm3
            vmulss  xmm14, xmm0, xmm3
            vmulss  xmm7, xmm10, xmm13
            vmulss  xmm8, xmm5, xmm12
            vmulss  xmm9, xmm4, xmm2
            vmulss  xmm15, xmm0, xmm13
            vmulss  xmm10, xmm10, xmm3
            vmulss  xmm11, xmm5, xmm2
            vmulss  xmm12, xmm4, xmm12
            vmulss  xmm1, xmm0, dword ptr [rsi-0Ch]
            vmulss  xmm0, xmm2, dword ptr [rsp+228h+quat]
            vsubss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm3
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm13
            vsubss  xmm2, xmm3, xmm0
            vmovss  dword ptr [rsi-0Ch], xmm2
            vmovss  xmm1, [rsp+228h+var_1E0]
            vaddss  xmm1, xmm1, [rsp+228h+var_1F8]
            vmulss  xmm0, xmm5, xmm13
            vaddss  xmm0, xmm1, xmm0
            vsubss  xmm2, xmm0, xmm6
            vmovss  dword ptr [r15], xmm2
            vsubss  xmm1, xmm14, xmm7
            vaddss  xmm0, xmm1, xmm8
            vaddss  xmm2, xmm0, xmm9
            vmovss  dword ptr [rsi-14h], xmm2
            vaddss  xmm1, xmm15, xmm10
            vsubss  xmm0, xmm1, xmm11
            vaddss  xmm2, xmm0, xmm12
            vmovss  dword ptr [rsi-10h], xmm2
            vmovss  xmm1, dword ptr [rsp+228h+rotTrans.quat]
            vmovss  [rsp+228h+var_1F8], xmm1
          }
          if ( (v304 & 0x7F800000) == 2139095040 )
            goto LABEL_62;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+228h+rotTrans.quat+4]
            vmovss  [rsp+228h+var_1F8], xmm0
          }
          if ( (v305 & 0x7F800000) == 2139095040 )
            goto LABEL_62;
          __asm
          {
            vmovss  xmm10, dword ptr [rsp+228h+rotTrans.quat+8]
            vmovss  [rsp+228h+var_1F8], xmm10
          }
          if ( (v306 & 0x7F800000) == 2139095040 )
            goto LABEL_62;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+228h+rotTrans.quat+0Ch]
            vmovss  [rsp+228h+var_1F8], xmm0
          }
          if ( (v307 & 0x7F800000) == 2139095040 )
          {
LABEL_62:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
              __debugbreak();
            __asm { vmovss  xmm10, dword ptr [rsp+228h+rotTrans.quat+8] }
          }
          __asm
          {
            vmovss  xmm4, [rsp+228h+rotTrans.transWeight]
            vmovss  [rsp+228h+var_1F8], xmm4
          }
          if ( (v308 & 0x7F800000) == 2139095040 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
              __debugbreak();
            __asm
            {
              vmovss  xmm10, dword ptr [rsp+228h+rotTrans.quat+8]
              vmovss  xmm4, [rsp+228h+rotTrans.transWeight]
            }
          }
          __asm
          {
            vmulss  xmm1, xmm4, dword ptr [rsp+228h+rotTrans.quat]
            vmovss  xmm2, dword ptr [rsp+228h+rotTrans.quat+4]
            vmulss  xmm3, xmm2, xmm4
            vmulss  xmm4, xmm10, xmm4
            vmulss  xmm11, xmm1, dword ptr [rsp+228h+rotTrans.quat]
            vmulss  xmm5, xmm2, xmm1
            vmulss  xmm7, xmm10, xmm1
            vmovss  xmm0, dword ptr [rsp+228h+rotTrans.quat+0Ch]
            vmulss  xmm8, xmm0, xmm1
            vmulss  xmm9, xmm2, xmm3
            vmulss  xmm6, xmm10, xmm3
            vmulss  xmm3, xmm0, xmm3
            vmulss  xmm2, xmm10, xmm4
            vmulss  xmm1, xmm0, xmm4
            vaddss  xmm0, xmm2, xmm9
            vmovss  xmm13, cs:__real@3f800000
            vsubss  xmm10, xmm13, xmm0
            vmovss  dword ptr [rsp+228h+axis], xmm10
            vaddss  xmm14, xmm5, xmm1
            vmovss  dword ptr [rsp+228h+axis+4], xmm14
            vsubss  xmm0, xmm7, xmm3
            vmovss  dword ptr [rsp+228h+axis+8], xmm0
            vsubss  xmm4, xmm5, xmm1
            vmovss  dword ptr [rsp+228h+axis+0Ch], xmm4
            vaddss  xmm0, xmm11, xmm2
            vsubss  xmm12, xmm13, xmm0
            vmovss  dword ptr [rsp+228h+axis+10h], xmm12
            vaddss  xmm15, xmm6, xmm8
            vmovss  dword ptr [rsp+228h+axis+14h], xmm15
            vaddss  xmm5, xmm3, xmm7
            vmovss  dword ptr [rsp+228h+axis+18h], xmm5
            vsubss  xmm7, xmm6, xmm8
            vmovss  dword ptr [rsp+228h+axis+1Ch], xmm7
            vaddss  xmm0, xmm11, xmm9
            vsubss  xmm13, xmm13, xmm0
            vmovss  dword ptr [rsp+228h+axis+20h], xmm13
            vmovss  xmm11, dword ptr [rsi-4]
            vcvtss2sd xmm11, xmm11, xmm11
            vmovss  xmm8, dword ptr [rsi-8]
            vcvtss2sd xmm8, xmm8, xmm8
            vmovss  xmm9, dword ptr [rsi]
            vcvtss2sd xmm9, xmm9, xmm9
            vcvtss2sd xmm0, xmm10, xmm10
            vmulsd  xmm3, xmm0, xmm8
            vcvtss2sd xmm1, xmm4, xmm4
            vmulsd  xmm2, xmm1, xmm11
            vaddsd  xmm4, xmm3, xmm2
            vcvtss2sd xmm0, xmm5, xmm5
            vmulsd  xmm1, xmm0, xmm9
            vaddsd  xmm3, xmm4, xmm1
            vmovd   xmm2, [rsp+228h+var_130]
            vcvtdq2pd xmm2, xmm2
            vmovsd  xmm10, cs:__real@3f30000000000000
            vmulsd  xmm0, xmm2, xmm10
            vaddsd  xmm6, xmm3, xmm0
            vcvtss2sd xmm1, xmm14, xmm14
            vmulsd  xmm3, xmm1, xmm8
            vcvtss2sd xmm0, xmm12, xmm12
            vmulsd  xmm2, xmm0, xmm11
            vaddsd  xmm4, xmm3, xmm2
            vcvtss2sd xmm1, xmm7, xmm7
            vmulsd  xmm0, xmm1, xmm9
            vaddsd  xmm3, xmm4, xmm0
            vmovd   xmm2, [rsp+228h+var_12C]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm1, xmm2, xmm10
            vaddsd  xmm5, xmm3, xmm1
            vmovss  xmm0, dword ptr [rsp+228h+axis+8]
            vcvtss2sd xmm0, xmm0, xmm0
            vmulsd  xmm3, xmm0, xmm8
            vcvtss2sd xmm1, xmm15, xmm15
            vmulsd  xmm2, xmm1, xmm11
            vaddsd  xmm4, xmm3, xmm2
            vcvtss2sd xmm0, xmm13, xmm13
            vmulsd  xmm1, xmm0, xmm9
            vaddsd  xmm3, xmm4, xmm1
            vmovd   xmm2, [rsp+228h+var_128]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm0, xmm2, xmm10
            vaddsd  xmm4, xmm3, xmm0
            vmovsd  xmm11, cs:__real@40b0000000000000
            vmulsd  xmm1, xmm6, xmm11
            vcvttsd2si eax, xmm1
          }
          v320 = _EAX;
          __asm
          {
            vmulsd  xmm0, xmm5, xmm11
            vcvttsd2si eax, xmm0
          }
          v321 = _EAX;
          __asm
          {
            vmulsd  xmm1, xmm4, xmm11
            vcvttsd2si eax, xmm1
          }
          v322 = _EAX;
          __asm { vmovss  xmm3, dword ptr [rsp+228h+var_1F0+8] }
        }
        else
        {
          if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          v184 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
          v184(&pose->origin.origin.origin, &trans);
          if ( pose->isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, dword ptr [rsp+228h+trans]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+228h+trans], xmm2
              vmovd   xmm0, dword ptr [rsp+228h+trans+4]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+228h+trans+4], xmm2
              vmovd   xmm0, dword ptr [rsp+228h+trans+8]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm10
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rsp+228h+trans+8], xmm2
            }
          }
          DObjSetTrans(&rotTrans, &trans);
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+228h+rotTrans.quat]
            vmulps  xmm0, xmm3, xmm3
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vsqrtps xmm0, xmm2
            vdivps  xmm1, xmm3, xmm0
            vmovups xmmword ptr [rsp+228h+rotTrans.quat], xmm1
            vmovss  xmm0, cs:__real@40000000
            vmovss  [rsp+228h+rotTrans.transWeight], xmm0
            vmovss  xmm12, dword ptr [rsi-0Ch]
            vmovss  xmm10, dword ptr [rsp+228h+quat]
            vmulss  xmm0, xmm10, xmm12
            vmovss  [rsp+228h+var_1E0], xmm0
          }
          _R15 = (DObjAnimMat *)(_RSI - 6);
          __asm
          {
            vmovss  xmm2, dword ptr [r15]
            vmovss  xmm0, dword ptr [rsp+228h+quat+0Ch]
            vmulss  xmm1, xmm0, xmm2
            vmovss  [rsp+228h+var_1F8], xmm1
            vmovss  xmm13, dword ptr [rsi-10h]
            vmovss  xmm5, dword ptr [rsp+228h+quat+4]
            vmovss  xmm3, dword ptr [rsi-14h]
            vmovss  xmm4, dword ptr [rsp+228h+quat+8]
            vmulss  xmm6, xmm4, xmm3
            vmulss  xmm14, xmm0, xmm3
            vmulss  xmm7, xmm10, xmm13
            vmulss  xmm8, xmm5, xmm12
            vmulss  xmm9, xmm4, xmm2
            vmulss  xmm15, xmm0, xmm13
            vmulss  xmm10, xmm10, xmm3
            vmulss  xmm11, xmm5, xmm2
            vmulss  xmm12, xmm4, xmm12
            vmulss  xmm1, xmm0, dword ptr [rsi-0Ch]
            vmulss  xmm0, xmm2, dword ptr [rsp+228h+quat]
            vsubss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm3
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm13
            vsubss  xmm2, xmm3, xmm0
            vmovss  dword ptr [rsi-0Ch], xmm2
            vmovss  xmm1, [rsp+228h+var_1F8]
            vaddss  xmm1, xmm1, [rsp+228h+var_1E0]
            vmulss  xmm0, xmm5, xmm13
            vaddss  xmm0, xmm1, xmm0
            vsubss  xmm2, xmm0, xmm6
            vmovss  dword ptr [r15], xmm2
            vsubss  xmm1, xmm14, xmm7
            vaddss  xmm0, xmm1, xmm8
            vaddss  xmm2, xmm0, xmm9
            vmovss  dword ptr [rsi-14h], xmm2
            vaddss  xmm1, xmm10, xmm15
            vsubss  xmm0, xmm1, xmm11
            vaddss  xmm2, xmm0, xmm12
            vmovss  dword ptr [rsi-10h], xmm2
          }
          LocalConvertQuatToMat(&rotTrans, &axis);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+228h+axis]
            vmulss  xmm3, xmm0, dword ptr [rsi-8]
            vmovss  xmm1, dword ptr [rsp+228h+axis+0Ch]
            vmulss  xmm2, xmm1, dword ptr [rsi-4]
            vaddss  xmm4, xmm3, xmm2
            vmovss  xmm0, dword ptr [rsp+228h+axis+18h]
            vmulss  xmm1, xmm0, dword ptr [rsi]
            vaddss  xmm2, xmm4, xmm1
            vaddss  xmm3, xmm2, dword ptr [rsp+228h+rotTrans.trans]
            vmovss  dword ptr [rsp+228h+var_1F0], xmm3
            vmovss  xmm0, dword ptr [rsp+228h+axis+4]
            vmulss  xmm4, xmm0, dword ptr [rsi-8]
            vmovss  xmm1, dword ptr [rsp+228h+axis+10h]
            vmulss  xmm2, xmm1, dword ptr [rsi-4]
            vaddss  xmm3, xmm4, xmm2
            vmovss  xmm0, dword ptr [rsp+228h+axis+1Ch]
            vmulss  xmm1, xmm0, dword ptr [rsi]
            vaddss  xmm2, xmm3, xmm1
            vaddss  xmm3, xmm2, dword ptr [rsp+228h+rotTrans.trans+4]
            vmovss  dword ptr [rsp+228h+var_1F0+4], xmm3
            vmovss  xmm0, dword ptr [rsp+228h+axis+8]
            vmulss  xmm4, xmm0, dword ptr [rsi-8]
            vmovss  xmm1, dword ptr [rsp+228h+axis+14h]
            vmulss  xmm2, xmm1, dword ptr [rsi-4]
            vaddss  xmm3, xmm4, xmm2
            vmovss  xmm0, dword ptr [rsp+228h+axis+20h]
            vmulss  xmm1, xmm0, dword ptr [rsi]
            vaddss  xmm2, xmm3, xmm1
            vaddss  xmm3, xmm2, dword ptr [rsp+228h+rotTrans.trans+8]
          }
          memset(&trans, 0, sizeof(trans));
          __asm { vmovsd  xmm10, cs:__real@3f30000000000000 }
        }
        __asm
        {
          vmovss  xmm9, [rsp+228h+var_1D4]
          vmovss  xmm8, [rsp+228h+var_1D8]
          vmovss  xmm7, [rsp+228h+var_1DC]
          vmovss  xmm6, cs:__real@45800000
        }
        goto LABEL_54;
      }
      _R15 = (DObjAnimMat *)(_RSI - 6);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+228h+quat]
        vmovss  dword ptr [r15], xmm0
        vmovss  xmm1, dword ptr [rsp+228h+quat+4]
        vmovss  dword ptr [rsi-14h], xmm1
        vmovss  xmm0, dword ptr [rsp+228h+quat+8]
        vmovss  dword ptr [rsi-10h], xmm0
        vmovss  xmm1, dword ptr [rsp+228h+quat+0Ch]
        vmovss  dword ptr [rsi-0Ch], xmm1
      }
      if ( pose->isPosePrecise )
      {
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 464, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        if ( !pose->isPosePrecise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 465, ASSERT_TYPE_ASSERT, "(pose->isPosePrecise != 0)", (const char *)&queryFormat, "pose->isPosePrecise != 0") )
          __debugbreak();
        v41 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        v41(&pose->origin.origin.origin, (vec3_t *)&v320);
      }
      else
      {
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        v43 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        v43(&pose->origin.origin.origin, &v310);
        if ( pose->isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rsp+228h+var_1F0]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm10
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+228h+var_1F0], xmm2
            vmovd   xmm0, dword ptr [rsp+228h+var_1F0+4]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm10
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+228h+var_1F0+4], xmm2
            vmovd   xmm0, dword ptr [rsp+228h+var_1F0+8]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm10
            vcvtsd2ss xmm3, xmm1, xmm1
          }
          goto LABEL_54;
        }
      }
      __asm { vmovss  xmm3, dword ptr [rsp+228h+var_1F0+8] }
LABEL_54:
      if ( pose->isPosePrecise )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm6
          vcvttss2si eax, xmm0
          vmulss  xmm1, xmm8, xmm6
          vcvttss2si ecx, xmm1
          vmulss  xmm0, xmm9, xmm6
          vcvttss2si edx, xmm0
        }
        v320 -= _EAX;
        v321 -= _ECX;
        v322 -= _EDX;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, edi
          vmulsd  xmm1, xmm0, xmm10
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+228h+var_1F0], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, eax
          vmulsd  xmm1, xmm0, xmm10
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+228h+var_1F0+4], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, ecx
          vmulsd  xmm1, xmm0, xmm10
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+228h+var_1F0+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+228h+var_1F0]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rsp+228h+var_1F0], xmm1
          vmovss  xmm2, dword ptr [rsp+228h+var_1F0+4]
          vsubss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rsp+228h+var_1F0+4], xmm0
          vsubss  xmm1, xmm3, xmm9
          vmovss  dword ptr [rsp+228h+var_1F0+8], xmm1
        }
      }
      DObjSetTrans(_R15, &v310);
      v34 = partBits.array[7];
      v16 = v316;
      goto LABEL_58;
    }
  }
LABEL_59:
  memset(&v310, 0, sizeof(v310));
  _R11 = &v329;
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
CG_Pose_DoControllers
==============
*/
void CG_Pose_DoControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  unsigned int v8; 
  const CEntPlayerInfo *v9; 
  DObjAnimMat *RotTransArray; 
  unsigned __int8 proneType; 
  int physicsId; 
  int v21; 
  LocalClientNum_t v22; 
  LocalClientNum_t LocalClientNumForDobj; 
  __int64 v27; 
  vec3_t trans; 
  vec4_t in2; 
  vec4_t in1; 
  DObjPartBits setPartBits; 

  __asm { vmovaps [rsp+0E8h+var_38], xmm6 }
  _RDI = pose;
  Profile_Begin(430);
  DObjGetSetBones(obj, &setPartBits);
  v8 = 0;
  switch ( _RDI->eType )
  {
    case 1u:
    case 0x11u:
      if ( _RDI->player.control )
      {
        if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 42, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
          __debugbreak();
        v9 = (const CEntPlayerInfo *)&_RDI->160;
        if ( _RDI->player.animCtrl == 2 )
          BG_Pose_DoDogControllers(v9, obj, partBits);
        else
          BG_Pose_DoPlayerControllers(v9, obj, partBits);
      }
      break;
    case 6u:
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 583, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 584, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
        __debugbreak();
      if ( _RDI->eType == 6 && _RDI->scriptMover.doVehicleControllers )
        goto $LN5_122;
      CG_Train_TryDoTrainPoseController(_RDI, obj, partBits);
      break;
    case 0xBu:
      CG_Pose_DoTurretControllers(_RDI, obj, partBits);
      break;
    case 0xCu:
    case 0xEu:
$LN5_122:
      CG_Pose_DoVehicleControllers(_RDI, obj, partBits);
      break;
    case 0x13u:
    case 0x15u:
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 604, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 605, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
        __debugbreak();
      if ( _RDI->actor.proneType )
      {
        RotTransArray = DObjGetRotTransArray(obj);
        if ( RotTransArray )
        {
          if ( DObjSetRotTransIndex(obj, partBits, 0) )
          {
            proneType = _RDI->actor.proneType;
            __asm
            {
              vmovaps [rsp+0E8h+var_48], xmm7
              vxorps  xmm7, xmm7, xmm7
            }
            if ( proneType == 2 )
            {
              __asm
              {
                vmovss  xmm6, cs:__real@3c0efa35
                vmulss  xmm0, xmm6, dword ptr [rdi+0A0h]; radians
                vmovss  dword ptr [rsp+0E8h+in2], xmm7
                vmovss  dword ptr [rsp+0E8h+in2+8], xmm7
              }
              FastSinCos(*(const float *)&_XMM0, &in2.v[1], &in2.v[3]);
              __asm
              {
                vmulss  xmm0, xmm6, dword ptr [rdi+0A4h]; radians
                vmovss  dword ptr [rsp+0E8h+in1+4], xmm7
                vmovss  dword ptr [rsp+0E8h+in1+8], xmm7
              }
              FastSinCos(*(const float *)&_XMM0, in1.v, &in1.v[3]);
              QuatMultiply(&in1, &in2, &RotTransArray->quat);
            }
            else
            {
              if ( proneType != 1 )
              {
                LODWORD(v27) = proneType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 630, ASSERT_TYPE_ASSERT, "( ( pose->actor.proneType == CENT_ACTOR_PRONE_NORMAL ) )", "( pose->actor.proneType ) = %i", v27) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+0A0h]
                vmulss  xmm0, xmm0, cs:__real@3c0efa35; radians
              }
              RotTransArray->quat.v[0] = 0.0;
              RotTransArray->quat.v[2] = 0.0;
              FastSinCos(*(const float *)&_XMM0, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+0A8h]
              vmovss  dword ptr [rsp+0E8h+trans+8], xmm0
              vmovss  dword ptr [rsp+0E8h+trans], xmm7
              vmovss  dword ptr [rsp+0E8h+trans+4], xmm7
            }
            DObjSetTrans(RotTransArray, &trans);
            __asm { vmovaps xmm7, [rsp+0E8h+var_48] }
          }
        }
      }
      break;
    case 0x1Bu:
      CG_Pose_DoCoverWallControllers(_RDI, obj, partBits);
      break;
    default:
      break;
  }
  if ( (_RDI->ragdollFlags & 1) != 0 )
  {
    Ragdoll_AddPartBits(_RDI->killcamRagdollHandle, partBits);
    Ragdoll_AddPartBits(_RDI->ragdollHandle, partBits);
  }
  CG_Pose_DoBaseOriginController(_RDI, obj, &setPartBits);
  physicsId = _RDI->physicsId;
  if ( physicsId )
  {
    v21 = physicsId - 1;
    if ( v21 >= 2048 )
    {
      if ( (unsigned int)(v21 - 2117) <= 0x17F )
      {
        LocalClientNumForDobj = CG_ClientModel_GetLocalClientNumForDobj(v21 - 2117, obj);
        CG_ClientModel_Physics_MapPose(LocalClientNumForDobj, v21 - 2117, partBits);
      }
    }
    else
    {
      v22 = CG_Entity_GetLocalClientNumForDobj(v21, obj);
      CG_PhysicsObject_MapPose(_RDI, obj, partBits, _RDI->physicsId, v22);
    }
  }
  if ( _RDI->isMayhem )
  {
    _RBX = partBits;
    __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
    do
    {
      __asm { vmovdqu xmmword ptr [rbx], xmm6 }
      _RBX = (DObjPartBits *)((char *)_RBX + 16);
      ++v8;
    }
    while ( v8 < 2 );
    Mayhem_UpdatePose(_RDI, obj, partBits, _RDI->mayhemInstanceId);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
}

/*
==============
CG_Pose_DoCoverWallControllers
==============
*/
void CG_Pose_DoCoverWallControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *setPartBits)
{
  int v8; 
  int v9; 
  int v10; 
  DObjPartBits *partBits; 
  vec3_t outLocalPos; 
  vec3_t outAngles; 
  vec3_t outNoise; 

  partBits = setPartBits;
  _R13 = pose;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 819, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose", setPartBits) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 820, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !setPartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 821, ASSERT_TYPE_ASSERT, "(setPartBits)", (const char *)&queryFormat, "setPartBits") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos], xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos+4], xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos+8], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles+4], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles+8], xmm0
  }
  v8 = 0;
  v9 = -4;
  do
  {
    v10 = -6;
    while ( !BG_CoverWall_GetGridPos((const unsigned int *)&_R13->160, v10, 0, v9) )
    {
LABEL_18:
      if ( ++v10 > 6 )
        goto LABEL_21;
    }
    if ( v8 + 1 > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 833, ASSERT_TYPE_ASSERT, "(1 + coverBlockCount <= 255)", (const char *)&queryFormat, "COVERWALL_MODEL_FIRST_CONTROLLER + coverBlockCount <= 255") )
      __debugbreak();
    if ( (unsigned __int8)(v8 + 1) <= 0x7Fu )
    {
      __asm { vmovss  xmm3, dword ptr [r13+0BCh]; sagAnimWeight }
      BG_CoverWall_GridPosToLocalPos(v10, 0, v9, *(float *)&_XMM3, &outLocalPos);
      BG_CoverWall_CalcAnglesForPosition(v10, 0, v9, &outAngles);
      BG_CoverWall_CalcNoiseForPosition(v10, 0, v9, &outNoise);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+outLocalPos]
        vaddss  xmm1, xmm0, dword ptr [rsp+0A8h+outNoise]
        vmovss  xmm2, dword ptr [rsp+0A8h+outLocalPos+4]
        vaddss  xmm0, xmm2, dword ptr [rsp+0A8h+outNoise+4]
        vmovss  dword ptr [rsp+0A8h+outLocalPos], xmm1
        vmovss  xmm1, dword ptr [rsp+0A8h+outLocalPos+8]
        vaddss  xmm2, xmm1, dword ptr [rsp+0A8h+outNoise+8]
        vmovss  dword ptr [rsp+0A8h+outLocalPos+8], xmm2
        vmovss  dword ptr [rsp+0A8h+outLocalPos+4], xmm0
      }
      DObjSetLocalTag(obj, partBits, (unsigned __int8)++v8, &outLocalPos, &outAngles);
      goto LABEL_18;
    }
    Com_PrintWarning(16, "out of cover block bones bailing early\n");
LABEL_21:
    ++v9;
  }
  while ( v9 <= 9 );
}

/*
==============
CG_Pose_DoTurretControllers
==============
*/
void CG_Pose_DoTurretControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  bool v15; 
  bool playerUsing; 
  unsigned __int8 tagIdx_aim_pivot; 
  unsigned int tagIdx_aim; 
  unsigned int tagIdx_flash; 
  unsigned int tagIdx_barrel; 
  vec3_t angles; 
  __int128 v136; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  char v146; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0B8h], xmm15
  }
  v15 = !pose->turret.remoteTurret;
  __asm
  {
    vmovss  xmm15, dword ptr [rcx+0A8h]
    vmovss  xmm12, cs:__real@3b360b61
    vmovss  xmm13, cs:__real@3f000000
    vmovss  xmm11, cs:__real@43b40000
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  _RBX = pose;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( v15 )
  {
    playerUsing = pose->turret.playerUsing;
    if ( playerUsing )
    {
      if ( _RBX->turret.useOnVehicleAngles )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+0A0h]
          vmovss  xmm4, dword ptr [rbx+0A4h]
          vmovss  dword ptr [rsp+1E0h+angles], xmm1
          vmovss  dword ptr [rsp+1E0h+angles+4], xmm4
          vmovss  dword ptr [rsp+1E0h+angles+8], xmm10
        }
      }
      else
      {
        if ( !_RBX->player.control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 718, ASSERT_TYPE_ASSERT, "(pose->turret.viewAngles)", (const char *)&queryFormat, "pose->turret.viewAngles") )
          __debugbreak();
        _RAX = _RBX->player.control;
        __asm
        {
          vmovss  xmm1, dword ptr [rax]
          vmovss  dword ptr [rsp+1E0h+angles], xmm1
          vmovss  xmm4, dword ptr [rax+4]
          vmovss  dword ptr [rsp+1E0h+angles+4], xmm4
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  dword ptr [rsp+1E0h+angles+8], xmm0
        }
      }
      if ( _RBX->turret.worldSpaceTransform )
      {
        AnglesToAxis(&_RBX->angles, &in);
        MatrixTranspose(&in, &out);
        AnglesToAxis(&angles, &in1);
        MatrixMultiply(&in1, &out, &axis);
        AxisToAngles(&axis, (vec3_t *)&v136);
        playerUsing = _RBX->turret.playerUsing;
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+1E0h+var_190]
          vmovss  xmm7, dword ptr [rsp+1E0h+var_190+4]
          vxorps  xmm15, xmm15, xmm15
        }
      }
      else
      {
        __asm { vsubss  xmm0, xmm1, dword ptr [rax] }
        playerUsing = _RBX->turret.playerUsing;
        __asm
        {
          vmulss  xmm3, xmm0, xmm12
          vaddss  xmm1, xmm3, xmm13
          vxorps  xmm5, xmm5, xmm5
          vroundss xmm2, xmm5, xmm1, 1
          vsubss  xmm1, xmm4, dword ptr [rbx+4Ch]
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm4, xmm1, xmm12
          vaddss  xmm2, xmm4, xmm13
          vroundss xmm3, xmm5, xmm2, 1
          vmulss  xmm6, xmm0, xmm11
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm7, xmm0, xmm11
        }
      }
    }
    else
    {
      __asm { vmovss  xmm4, dword ptr [rbx+0A0h] }
      _EAX = _RBX->vehicle.terrainMode.tag_fin_right;
      _EDX = 0;
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+0A4h]
        vmovd   xmm1, edx
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vsubss  xmm3, xmm4, xmm15
        vblendvps xmm6, xmm3, xmm4, xmm2
      }
    }
  }
  else
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 658, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    v15 = !_RBX->turret.playerUsing;
    __asm
    {
      vmovss  [rbp+0E0h+var_15C], xmm10
      vmovss  [rbp+0E0h+var_158], xmm10
      vmovss  [rbp+0E0h+var_154], xmm10
    }
    if ( v15 || _RBX->turret.useOnVehicleAngles )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0A0h]
        vmovss  xmm1, dword ptr [rbx+0A4h]
        vmovss  dword ptr [rsp+1E0h+angles], xmm0
      }
    }
    else
    {
      if ( !_RBX->player.control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 671, ASSERT_TYPE_ASSERT, "(pose->turret.viewAngles)", (const char *)&queryFormat, "pose->turret.viewAngles") )
        __debugbreak();
      _RAX = _RBX->player.control;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  dword ptr [rsp+1E0h+angles], xmm0
        vmovss  xmm1, dword ptr [rax+4]
      }
    }
    __asm
    {
      vmovss  dword ptr [rsp+1E0h+angles+4], xmm1
      vmovss  dword ptr [rsp+1E0h+angles+8], xmm10
    }
    AnglesToAxis(&_RBX->angles, &axis);
    __asm { vmovss  xmm0, dword ptr [rsp+1E0h+axis] }
    HIDWORD(v136) = 0;
    __asm
    {
      vmovups xmm9, [rsp+1E0h+var_190]
      vmovss  xmm9, xmm9, xmm0
      vmovss  xmm0, dword ptr [rsp+1E0h+axis+0Ch]
      vinsertps xmm9, xmm9, dword ptr [rsp+1E0h+axis+4], 10h
      vinsertps xmm9, xmm9, dword ptr [rsp+1E0h+axis+8], 0E0h+var_C0
      vmovups [rsp+1E0h+var_190], xmm9
    }
    HIDWORD(v136) = 0;
    __asm
    {
      vmovups xmm8, [rsp+1E0h+var_190]
      vmovss  xmm8, xmm8, xmm0
      vmovss  xmm0, dword ptr [rsp+1E0h+axis+18h]
      vinsertps xmm8, xmm8, dword ptr [rsp+1E0h+axis+10h], 10h
      vinsertps xmm8, xmm8, dword ptr [rsp+1E0h+axis+14h], 0E0h+var_C0
      vmovups [rsp+1E0h+var_190], xmm8
    }
    HIDWORD(v136) = 0;
    __asm
    {
      vmovups xmm7, [rsp+1E0h+var_190]
      vmovss  xmm7, xmm7, xmm0
      vinsertps xmm7, xmm7, dword ptr [rsp+1E0h+axis+1Ch], 10h
      vinsertps xmm7, xmm7, dword ptr [rbp+0E0h+axis+20h], 0E0h+var_C0
      vmovss  xmm0, [rbp+0E0h+var_15C]
      vmovups [rsp+1E0h+var_190], xmm7
    }
    HIDWORD(v136) = 0;
    __asm
    {
      vmovups xmm3, [rsp+1E0h+var_190]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, [rbp+0E0h+var_158], 10h
      vinsertps xmm3, xmm3, [rbp+0E0h+var_154], 0E0h+var_C0
      vmovups [rsp+1E0h+var_190], xmm3
    }
    AnglesToAxis(&angles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+axis]
      vshufps xmm1, xmm9, xmm8, 44h ; 'D'
    }
    HIDWORD(v136) = 0;
    __asm
    {
      vmovups xmm3, [rsp+1E0h+var_190]
      vmovss  xmm3, xmm3, xmm0
      vshufps xmm0, xmm7, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 44h ; 'D'; float4 const g_one
      vinsertps xmm3, xmm3, dword ptr [rsp+1E0h+axis+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+1E0h+axis+8], 0E0h+var_C0
      vshufps xmm6, xmm1, xmm0, 88h ; 'ˆ'
      vshufps xmm5, xmm1, xmm0, 0DDh ; 'Ý'
      vshufps xmm0, xmm7, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 0EEh ; 'î'; float4 const g_one
      vshufps xmm1, xmm9, xmm8, 0EEh ; 'î'
      vmovaps xmm9, [rsp+1E0h+var_68+8]
      vshufps xmm4, xmm1, xmm0, 88h ; 'ˆ'
      vshufps xmm2, xmm3, xmm3, 0AAh ; 'ª'
      vshufps xmm0, xmm3, xmm3, 55h ; 'U'
      vmovups [rsp+1E0h+var_190], xmm3
      vmulps  xmm1, xmm4, xmm2
      vmulps  xmm0, xmm0, xmm5
      vaddps  xmm2, xmm0, xmm1
      vshufps xmm3, xmm3, xmm3, 0
      vmulps  xmm1, xmm3, xmm6
      vaddps  xmm6, xmm1, xmm2
      vshufps xmm8, xmm6, xmm6, 55h ; 'U'
      vucomiss xmm8, xmm10
      vmovups [rsp+1E0h+var_190], xmm6
      vucomiss xmm6, xmm10
      vmovss  xmm0, dword ptr [rsp+1E0h+var_190+8]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm2, cs:__real@42b40000
      vmovss  xmm0, cs:__real@43870000
    }
    playerUsing = _RBX->turret.playerUsing;
    __asm
    {
      vmovaps xmm8, [rsp+1E0h+var_58+8]
      vcmpless xmm3, xmm10, xmm1
      vblendvps xmm6, xmm0, xmm2, xmm3
      vxorps  xmm7, xmm7, xmm7
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+1E0h+angles], xmm10
    vmovss  dword ptr [rsp+1E0h+angles+4], xmm10
    vmovss  dword ptr [rsp+1E0h+angles+8], xmm10
  }
  if ( !playerUsing || !_RBX->turret.playerViewArms )
  {
    __asm
    {
      vmulss  xmm4, xmm7, xmm12
      vaddss  xmm1, xmm4, xmm13
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vmovss  xmm2, dword ptr [rbx+0E0h]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm11
      vminss  xmm4, xmm1, dword ptr [rbx+0DCh]
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vmaxss  xmm7, xmm4, xmm0
    }
  }
  __asm { vmovaps xmm0, xmm7; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  tagIdx_aim_pivot = _RBX->turret.tagIdx_aim_pivot;
  __asm
  {
    vmovaps xmm7, xmmword ptr [rsp+1E0h+var_48+8]
    vmovss  dword ptr [rsp+1E0h+angles+4], xmm0
  }
  if ( tagIdx_aim_pivot != 0xFF )
  {
    if ( tagIdx_aim_pivot == 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 777, ASSERT_TYPE_ASSERT, "(pose->turret.tagIdx_aim_pivot != 254)", (const char *)&queryFormat, "pose->turret.tagIdx_aim_pivot != UNDEFINED_BONEINDEX") )
      __debugbreak();
    DObjSetLocalTag(obj, partBits, _RBX->turret.tagIdx_aim_pivot, &vec3_origin, &angles);
    __asm { vmovss  dword ptr [rsp+1E0h+angles+4], xmm10 }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_FIRING|0x80) || !_RBX->turret.playerUsing || !_RBX->turret.playerViewArms )
  {
    __asm
    {
      vmulss  xmm4, xmm6, xmm12
      vaddss  xmm1, xmm4, xmm13
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vmovss  xmm2, dword ptr [rbx+0D4h]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm11
      vminss  xmm4, xmm1, dword ptr [rbx+0D8h]
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vmaxss  xmm6, xmm4, xmm0
    }
  }
  __asm { vmovaps xmm0, xmm6; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  tagIdx_aim = _RBX->turret.tagIdx_aim;
  __asm { vmovss  dword ptr [rsp+1E0h+angles], xmm0 }
  DObjSetLocalTag(obj, partBits, tagIdx_aim, &vec3_origin, &angles);
  DObjSetLocalTag(obj, partBits, _RBX->turret.tagIdx_aim_animated, &vec3_origin, &angles);
  tagIdx_flash = _RBX->turret.tagIdx_flash;
  __asm
  {
    vmovss  dword ptr [rsp+1E0h+angles], xmm15
    vmovss  dword ptr [rsp+1E0h+angles+4], xmm10
  }
  DObjSetLocalTag(obj, partBits, tagIdx_flash, &vec3_origin, &angles);
  __asm { vmovss  xmm0, dword ptr [rbx+0B4h] }
  tagIdx_barrel = _RBX->turret.tagIdx_barrel;
  __asm
  {
    vmovss  dword ptr [rsp+1E0h+angles+8], xmm0
    vmovss  dword ptr [rsp+1E0h+angles], xmm10
    vmovss  dword ptr [rsp+1E0h+angles+4], xmm10
  }
  DObjSetLocalTag(obj, partBits, tagIdx_barrel, &vec3_origin, &angles);
  _R11 = &v146;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm15, xmmword ptr [r11-98h]
  }
}

/*
==============
CG_Pose_DoVehicleControllers
==============
*/
void CG_Pose_DoVehicleControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  unsigned int tag_body; 
  const XModel *Model; 
  int physicsId; 
  __int64 v73; 
  LocalClientNum_t LocalClientNumForDobj; 
  __int64 v75; 
  int boneUsage; 
  unsigned int v78; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v89; 
  unsigned int v91; 
  unsigned int v95; 
  unsigned int v96; 
  $CB1B1702A042DB8855766B7314535336 *v97; 
  __int64 v98; 
  unsigned int v101; 
  __int64 v102; 
  int numClientBones; 
  int numBones; 
  unsigned int v132; 
  __int64 v133; 
  __int64 v134; 
  int WheelCount; 
  __int64 v231; 
  int v232; 
  __int64 v239; 
  __int64 v240; 
  bool v241; 
  __int64 v242; 
  unsigned __int8 v243; 
  int spinWheelBones; 
  int v247; 
  unsigned int wheelSteeringRatioMaxIndex; 
  bool v268; 
  bool v269; 
  unsigned int v270; 
  unsigned __int8 animCtrl; 
  int v286; 
  unsigned __int16 *tbaAnimIds; 
  CgVehicleSystem *v288; 
  __int64 v300; 
  __int64 v301; 
  unsigned __int8 childIndex[4]; 
  int v303; 
  int boneIndex; 
  CgVehicleSystem *v305; 
  __int128 v306; 
  __int128 v307; 
  vec3_t v308; 
  vec3_t v309; 
  vec3_t v310; 
  vec3_t v311; 
  __int128 v312; 
  vec3_t v313; 
  __int128 v314; 
  __int128 v315; 
  vec3_t angles; 
  vec3_t v317; 
  vec3_t v318; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> v320; 
  tmat33_t<vec3_t> v321; 
  char v325; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  *(_QWORD *)v308.v = pose;
  _RSI = pose;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 105, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 106, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 107, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3bb40000
    vmovss  xmm2, dword ptr [rsi+0B4h]
  }
  tag_body = _RSI->vehicle.tag_body;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm8
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rsp+2B8h+angles], xmm0
    vmulss  xmm0, xmm1, xmm8
    vmovss  dword ptr [rsp+2B8h+angles+8], xmm0
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm8
    vmovss  dword ptr [rsp+2B8h+var_198], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rsp+2B8h+var_1A8+4], xmm1
    vmovss  dword ptr [rsp+2B8h+var_1A8], xmm7
    vmovss  dword ptr [rsp+2B8h+var_1A8+8], xmm7
    vmovss  dword ptr [rsp+2B8h+var_198+4], xmm7
    vmovss  dword ptr [rsp+2B8h+angles+4], xmm7
    vmovss  dword ptr [rsp+2B8h+var_198+8], xmm2
  }
  DObjSetLocalTag(obj, partBits, tag_body, &vec3_origin, &angles);
  DObjSetLocalTag(obj, partBits, _RSI->vehicle.tag_turret, &vec3_origin, &v317);
  DObjSetLocalTag(obj, partBits, _RSI->vehicle.tag_barrel, &vec3_origin, &v318);
  __asm { vmovss  xmm15, dword ptr [rsi+0B0h] }
  AnglesToAxis(&_RSI->angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(_RSI, &axis.m[3]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+2B8h+axis]
    vmovss  xmm4, dword ptr [rsp+2B8h+outOrigin]
    vmovss  xmm5, dword ptr [rsp+2B8h+outOrigin+4]
    vmovss  xmm6, dword ptr [rsp+2B8h+outOrigin+8]
  }
  HIDWORD(v306) = 0;
  __asm
  {
    vmovups xmm11, [rsp+2B8h+var_258]
    vmovss  xmm11, xmm11, xmm0
    vmovss  xmm0, dword ptr [rsp+2B8h+axis+0Ch]
    vinsertps xmm11, xmm11, dword ptr [rsp+2B8h+axis+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rsp+2B8h+axis+8], 20h
    vmovups [rsp+2B8h+var_258], xmm11
  }
  HIDWORD(v306) = 0;
  __asm
  {
    vmovups xmm12, [rsp+2B8h+var_258]
    vmovss  xmm12, xmm12, xmm0
    vinsertps xmm12, xmm12, dword ptr [rsp+2B8h+axis+10h], 10h
    vinsertps xmm12, xmm12, dword ptr [rsp+2B8h+axis+14h], 20h
    vmovss  xmm0, dword ptr [rsp+2B8h+axis+18h]
    vmovups [rsp+2B8h+var_258], xmm12
  }
  HIDWORD(v306) = 0;
  __asm
  {
    vmovups xmm13, [rsp+2B8h+var_258]
    vmovss  xmm13, xmm13, xmm0
    vinsertps xmm13, xmm13, dword ptr [rsp+2B8h+axis+1Ch], 10h
    vinsertps xmm13, xmm13, dword ptr [rsp+2B8h+axis+20h], 20h
    vmovups [rsp+2B8h+var_258], xmm13
    vmovups xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  HIDWORD(v306) = 0;
  __asm
  {
    vmovups xmm2, [rsp+2B8h+var_258]
    vmovss  xmm2, xmm2, xmm4
    vinsertps xmm2, xmm2, xmm5, 10h
    vinsertps xmm2, xmm2, xmm6, 20h ; ' '
    vmovups [rsp+2B8h+var_258], xmm2
    vxorps  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vxorps  xmm2, xmm1, xmm2
    vshufps xmm1, xmm13, xmm3, 44h ; 'D'
    vmovups [rsp+2B8h+var_F8], xmm2
    vshufps xmm2, xmm11, xmm12, 44h ; 'D'
    vshufps xmm0, xmm2, xmm1, 88h ; 'ˆ'
    vshufps xmm1, xmm2, xmm1, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+2B8h+var_128], xmm0
    vmovups xmmword ptr [rsp+2B8h+var_128+10h], xmm1
    vmovups ymm1, ymmword ptr [rsp+2B8h+var_128]
    vshufps xmm2, xmm11, xmm12, 0EEh ; 'î'
    vshufps xmm0, xmm13, xmm3, 0EEh ; 'î'
    vmovups ymmword ptr [rsp+2B8h+var_128], ymm1
    vmovss  dword ptr [rsp+2B8h+var_258], xmm4
    vmovss  dword ptr [rsp+2B8h+var_258+4], xmm5
    vmovss  dword ptr [rsp+2B8h+var_258+8], xmm6
    vshufps xmm14, xmm2, xmm0, 88h ; 'ˆ'
  }
  Model = DObjGetModel(obj, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  *(_QWORD *)v311.v = Model->baseMat;
  if ( !*(_QWORD *)v311.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 147, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  physicsId = _RSI->physicsId;
  v73 = 0i64;
  v305 = NULL;
  if ( physicsId > 0 )
  {
    LocalClientNumForDobj = CG_Entity_GetLocalClientNumForDobj(physicsId - 1, obj);
    v75 = LocalClientNumForDobj;
    if ( LocalClientNumForDobj != LOCAL_CLIENT_INVALID && LocalClientNumForDobj < cg_maxLocalClients )
    {
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", LocalClientNumForDobj) )
        __debugbreak();
      if ( (unsigned int)v75 >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v301) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v300) = v75;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v300, v301) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[v75] )
      {
        LODWORD(v301) = v75;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v301) )
          __debugbreak();
      }
      v305 = CgVehicleSystem::ms_vehicleSystemArray[v75];
    }
  }
  boneUsage = _RSI->vehicle.boneUsage;
  __asm
  {
    vmovaps [rsp+2B8h+var_78], xmm9
    vmovaps [rsp+2B8h+var_88], xmm10
  }
  if ( boneUsage )
  {
    if ( boneUsage == 1 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( _RSI->turret.useOnVehicleAngles )
      {
        v78 = _RSI->vehicle.rotorBoneIndex[10];
        __asm
        {
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rsp+2B8h+var_228+4], xmm1
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsp+2B8h+var_228+8], xmm1
          vmovss  dword ptr [rsp+2B8h+var_228], xmm7
        }
        if ( v78 < 0xFE && DObjSetRotTransIndex(obj, partBits, v78) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v309, v78);
        }
        v84 = _RSI->vehicle.rotorBoneIndex[11];
        if ( v84 < 0xFE && DObjSetRotTransIndex(obj, partBits, _RSI->vehicle.rotorBoneIndex[11]) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v309, v84);
        }
        v85 = _RSI->vehicle.wheelBoneIndex[0];
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsp+2B8h+var_238+8], xmm1
          vmovss  dword ptr [rsp+2B8h+var_238], xmm7
          vmovss  dword ptr [rsp+2B8h+var_238+4], xmm7
        }
        if ( v85 < 0xFE && DObjSetRotTransIndex(obj, partBits, v85) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v308, v85);
        }
        v89 = _RSI->vehicle.wheelBoneIndex[1];
        if ( v89 < 0xFE && DObjSetRotTransIndex(obj, partBits, _RSI->vehicle.wheelBoneIndex[1]) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+2B8h+var_238+8]
            vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
            vmovss  dword ptr [rsp+2B8h+var_238+8], xmm1
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v308, v89);
        }
        v91 = _RSI->vehicle.wheelBoneIndex[4];
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsp+2B8h+var_208+8], xmm1
          vmovss  dword ptr [rsp+2B8h+var_208], xmm7
          vmovss  dword ptr [rsp+2B8h+var_208+4], xmm7
        }
        if ( v91 < 0xFE && DObjSetRotTransIndex(obj, partBits, v91) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v311, v91);
        }
        v95 = _RSI->vehicle.wheelBoneIndex[5];
        if ( v95 < 0xFE && DObjSetRotTransIndex(obj, partBits, _RSI->vehicle.wheelBoneIndex[5]) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B8h+var_248], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+4], xmm7
            vmovss  dword ptr [rsp+2B8h+var_248+8], xmm7
          }
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v307, &v311, v95);
        }
        v96 = _RSI->vehicle.rotorBoneIndex[0];
        if ( v96 < obj->numBones + (unsigned int)obj->numClientBones )
        {
          v97 = &_RSI->vehicle.60;
          v98 = 0i64;
          *(_QWORD *)&v307 = (char *)&_RSI->moverFx + 60;
          do
          {
            if ( !DObjSetRotTransIndex(obj, partBits, v96) )
              break;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm8
              vmovss  dword ptr [rsp+2B8h+var_218+4], xmm1
              vmovss  dword ptr [rsp+2B8h+var_218], xmm7
              vmovss  dword ptr [rsp+2B8h+var_218+8], xmm7
              vmovss  dword ptr [rsp+2B8h+var_1D8], xmm7
              vmovss  dword ptr [rsp+2B8h+var_1D8+4], xmm7
              vmovss  dword ptr [rsp+2B8h+var_1D8+8], xmm7
            }
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v314, &v310, v96);
            v101 = _RSI->vehicle.rotorBladeBoneIndex[v98];
            if ( v101 < obj->numBones + (unsigned int)obj->numClientBones )
            {
              v102 = (__int64)&_RSI->moverFx + 2 * v98 + 86;
              do
              {
                if ( !DObjSetRotTransIndex(obj, partBits, v101) )
                  break;
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm8
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmovss  dword ptr [rsp+2B8h+var_1C8], xmm1
                  vmulss  xmm1, xmm0, xmm8
                  vmovss  dword ptr [rsp+2B8h+var_1C8+8], xmm1
                  vmovss  dword ptr [rsp+2B8h+var_1C8+4], xmm7
                  vmovss  dword ptr [rsp+2B8h+var_258], xmm7
                  vmovss  dword ptr [rsp+2B8h+var_258+4], xmm7
                  vmovss  dword ptr [rsp+2B8h+var_258+8], xmm7
                }
                DObjSetLocalTagInternal(obj, (const vec3_t *)&v306, (const vec3_t *)&v315, v101);
                ++v98;
                v102 += 2i64;
                v101 = _RSI->vehicle.rotorBladeBoneIndex[v98];
              }
              while ( v101 < obj->numBones + (unsigned int)obj->numClientBones );
              v97 = ($CB1B1702A042DB8855766B7314535336 *)v307;
            }
            numClientBones = obj->numClientBones;
            ++v73;
            numBones = obj->numBones;
            v97 = ($CB1B1702A042DB8855766B7314535336 *)((char *)v97 + 2);
            ++v98;
            *(_QWORD *)&v307 = v97;
            v96 = _RSI->vehicle.rotorBoneIndex[v73];
          }
          while ( v96 < numBones + numClientBones );
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, cs:__real@37800080
          vmovss  xmm3, cs:__real@40000000
          vmovss  xmm15, cs:__real@3f800000
          vmovups xmm9, xmmword ptr [rsp+2B8h+var_128+10h]
          vmovups xmm10, xmmword ptr [rsp+2B8h+var_128]
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rsp+2B8h+var_258+4], xmm1
          vmulss  xmm1, xmm0, xmm4
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm1, xmm3
          vmulss  xmm1, xmm0, xmm4
          vsubss  xmm6, xmm2, xmm15
          vmulss  xmm2, xmm1, xmm3
          vsubss  xmm0, xmm2, xmm15
          vmovss  [rsp+2B8h+var_274], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm3
          vsubss  xmm0, xmm2, xmm15
          vmovss  [rsp+2B8h+boneIndex], xmm0
          vmovss  dword ptr [rsp+2B8h+var_258], xmm7
          vmovss  dword ptr [rsp+2B8h+var_258+8], xmm7
          vmovss  dword ptr [rsp+2B8h+var_218], xmm6
        }
        do
        {
          v132 = _RSI->vehicle.rotorBoneIndex[v73 + 2];
          v133 = _RSI->vehicle.rotorBoneIndex[v73 + 1];
          v134 = _RSI->vehicle.rotorBoneIndex[v73];
          if ( v132 < 0xFE && DObjSetRotTransIndex(obj, partBits, _RSI->vehicle.rotorBoneIndex[v73 + 2]) )
          {
            _RCX = *(_QWORD *)v311.v;
            _RAX = 32i64 * v132;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+rcx+10h]
              vmovss  xmm1, dword ptr [rax+rcx+14h]
              vmovss  xmm2, dword ptr [rax+rcx+18h]
            }
            HIDWORD(v315) = 0;
            __asm
            {
              vmovups xmm5, [rsp+2B8h+var_1C8]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, xmm1, 10h
              vinsertps xmm5, xmm5, xmm2, 20h ; ' '
              vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
              vmulps  xmm1, xmm0, xmm13
              vshufps xmm2, xmm5, xmm5, 55h ; 'U'
              vmulps  xmm0, xmm2, xmm12
              vaddps  xmm2, xmm0, xmm1
              vshufps xmm3, xmm5, xmm5, 0
              vmulps  xmm1, xmm3, xmm11
              vaddps  xmm0, xmm1, xmm2
              vshufps xmm3, xmm0, xmm0, 0AAh ; 'ª'
              vshufps xmm2, xmm0, xmm0, 55h ; 'U'
              vshufps xmm4, xmm0, xmm0, 0
              vmulps  xmm1, xmm14, xmm3
              vmulps  xmm0, xmm9, xmm2
              vaddps  xmm2, xmm0, xmm1
              vmulps  xmm1, xmm10, xmm4
              vaddps  xmm0, xmm1, xmm2
              vsubps  xmm0, xmm0, xmm5
              vmovaps [rsp+2B8h+var_1F8], xmm0
              vmovups [rsp+2B8h+var_1C8], xmm5
            }
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v312, (const vec3_t *)&v306, v132);
          }
          if ( (unsigned int)v133 < 0xFE && DObjSetRotTransIndex(obj, partBits, v133) )
          {
            HIDWORD(v314) = 0;
            __asm { vmovups xmm5, [rsp+2B8h+var_1D8] }
            _RCX = (const DObjAnimMat *)(*(_QWORD *)v311.v + 32 * v133);
            __asm
            {
              vmovss  dword ptr [rsp+2B8h+var_228], xmm7
              vmovss  dword ptr [rsp+2B8h+var_228+4], xmm7
              vmovss  dword ptr [rsp+2B8h+var_228+8], xmm7
              vmovss  xmm0, dword ptr [rcx+10h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [rcx+14h], 10h
              vinsertps xmm5, xmm5, dword ptr [rcx+18h], 20h ; ' '
              vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
              vmulps  xmm1, xmm0, xmm13
              vshufps xmm2, xmm5, xmm5, 55h ; 'U'
              vmulps  xmm0, xmm2, xmm12
              vaddps  xmm2, xmm0, xmm1
              vshufps xmm3, xmm5, xmm5, 0
              vmulps  xmm1, xmm3, xmm11
              vaddps  xmm0, xmm1, xmm2
              vshufps xmm3, xmm0, xmm0, 0AAh ; 'ª'
              vshufps xmm2, xmm0, xmm0, 55h ; 'U'
              vshufps xmm4, xmm0, xmm0, 0
              vmulps  xmm1, xmm14, xmm3
              vmulps  xmm0, xmm9, xmm2
              vaddps  xmm2, xmm0, xmm1
              vmulps  xmm1, xmm10, xmm4
              vaddps  xmm0, xmm1, xmm2
              vsubps  xmm0, xmm0, xmm5
              vmovaps [rsp+2B8h+var_1F8], xmm0
              vmovups [rsp+2B8h+var_1D8], xmm5
            }
            LocalConvertQuatToMat(_RCX, &v320);
            __asm
            {
              vmovss  xmm0, [rsp+2B8h+var_274]
              vmulss  xmm1, xmm0, dword ptr [rsp+2B8h+var_158+4]
              vmulss  xmm0, xmm6, dword ptr [rsp+2B8h+var_158]
              vaddss  xmm2, xmm1, xmm0
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vmulss  xmm0, xmm2, xmm1
              vmulss  xmm3, xmm0, xmm8
              vaddss  xmm1, xmm3, dword ptr [rsp+2B8h+var_228]
              vmovss  dword ptr [rsp+2B8h+var_228], xmm1
            }
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v312, &v309, v133);
          }
          if ( (unsigned int)v134 < 0xFE && DObjSetRotTransIndex(obj, partBits, v134) )
          {
            HIDWORD(v307) = 0;
            __asm { vmovups xmm5, [rsp+2B8h+var_248] }
            _RBX = (const DObjAnimMat *)(*(_QWORD *)v311.v + 32 * v134);
            __asm
            {
              vmovss  dword ptr [rsp+2B8h+var_238], xmm7
              vmovss  dword ptr [rsp+2B8h+var_238+4], xmm7
              vmovss  xmm0, dword ptr [rbx+10h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [rbx+14h], 10h
              vinsertps xmm5, xmm5, dword ptr [rbx+18h], 20h ; ' '
              vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
              vmulps  xmm1, xmm0, xmm13
              vshufps xmm2, xmm5, xmm5, 55h ; 'U'
              vmulps  xmm0, xmm2, xmm12
              vaddps  xmm2, xmm0, xmm1
              vshufps xmm3, xmm5, xmm5, 0
              vmulps  xmm1, xmm3, xmm11
              vaddps  xmm0, xmm1, xmm2
              vshufps xmm3, xmm0, xmm0, 0AAh ; 'ª'
              vshufps xmm2, xmm0, xmm0, 55h ; 'U'
              vshufps xmm4, xmm0, xmm0, 0
              vmulps  xmm1, xmm14, xmm3
              vmulps  xmm0, xmm9, xmm2
              vaddps  xmm2, xmm0, xmm1
              vmulps  xmm1, xmm10, xmm4
              vaddps  xmm0, xmm1, xmm2
              vsubps  xmm0, xmm0, xmm5
              vmovaps [rsp+2B8h+var_1F8], xmm0
              vmovss  dword ptr [rsp+2B8h+var_238+8], xmm7
              vmovups [rsp+2B8h+var_248], xmm5
            }
            LocalConvertQuatToMat(_RBX, &v320);
            QuatToAxis(&_RBX->quat, &v321);
            AxisToAngles(&v321, &v308);
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+2B8h+var_218]
              vmulss  xmm1, xmm1, dword ptr [rsp+2B8h+var_158+0Ch]
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm6, xmm0, xmm8
              vmovss  xmm0, [rsp+2B8h+var_274]
              vmulss  xmm2, xmm0, dword ptr [rsp+2B8h+var_158+10h]
              vaddss  xmm0, xmm2, xmm1
              vaddss  xmm0, xmm0, [rsp+2B8h+boneIndex]; val
              vmovss  xmm1, cs:__real@bf800000; min
              vmovaps xmm2, xmm15; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+2B8h+var_238+8]
              vmulss  xmm2, xmm0, xmm6
              vsubss  xmm2, xmm1, xmm2
              vmovss  dword ptr [rsp+2B8h+var_238+8], xmm2
            }
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v312, &v308, v134);
            __asm { vmovss  xmm6, dword ptr [rsp+2B8h+var_218] }
          }
          v73 += 3i64;
        }
        while ( v73 < 24 );
      }
    }
LABEL_122:
    if ( v305 )
      CgVehicleAnimSystem::DoPose(&v305->m_vehicleAnimSystem, obj, _RSI, partBits);
    goto LABEL_124;
  }
  WheelCount = BGVehicles::GetWheelCount(NULL);
  v231 = 2i64;
  v232 = WheelCount;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
  }
  v303 = WheelCount;
  *(_QWORD *)v309.v = WheelCount + 4;
  __asm { vmulss  xmm11, xmm0, xmm8 }
  if ( WheelCount + 4 > 0 )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@37800080
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm12, cs:__real@41200000
    }
    *(_QWORD *)v310.v = WheelCount;
    *(_QWORD *)&v307 = &_RSI->moverFx + 3;
    v239 = WheelCount;
    v240 = 0i64;
    while ( 1 )
    {
      v241 = (int)v73 < v232;
      v242 = v240 - v239;
      if ( (int)v73 < v232 )
        v242 = v240;
      if ( (int)v73 >= v232 )
        v243 = _RSI->vehicle.otherWheelBoneIndex[v242];
      else
        v243 = _RSI->vehicle.wheelBoneIndex[v240];
      if ( v243 >= 0xFEu )
        goto LABEL_111;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, xmm8
      }
      if ( (int)v73 >= v232 )
        spinWheelBones = 2;
      else
        spinWheelBones = _RSI->vehicle.spinWheelBones;
      if ( !spinWheelBones )
        goto LABEL_92;
      v247 = spinWheelBones - 1;
      if ( !v247 )
        break;
      if ( v247 == 1 )
        __asm { vmovss  dword ptr [rsp+2B8h+var_1E8], xmm6 }
LABEL_93:
      boneIndex = v243;
      if ( DObjSetRotTransIndex(obj, partBits, v243) )
      {
        if ( v241 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovaps xmm2, xmm9; max
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm10
            vsubss  xmm0, xmm9, xmm1; val
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        }
        else
        {
          __asm { vmovaps xmm0, xmm7 }
        }
        wheelSteeringRatioMaxIndex = _RSI->vehicle.wheelSteeringRatioMaxIndex;
        __asm
        {
          vmulss  xmm2, xmm0, xmm15
          vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm4, xmm1, dword ptr [rbx+10h]
          vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
          vmovss  dword ptr [rsp+2B8h+var_1F8], xmm4
          vaddss  xmm3, xmm1, dword ptr [rbx+14h]
          vmulss  xmm1, xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vmovss  dword ptr [rsp+2B8h+var_1F8+4], xmm3
          vaddss  xmm2, xmm1, dword ptr [rbx+18h]
          vmovss  dword ptr [rsp+2B8h+var_1F8+8], xmm2
          vsubss  xmm0, xmm4, dword ptr [rbx+10h]
          vmovss  dword ptr [rsp+2B8h+var_1F8], xmm0
          vsubss  xmm1, xmm3, dword ptr [rbx+14h]
          vmovss  dword ptr [rsp+2B8h+var_1F8+4], xmm1
          vsubss  xmm0, xmm2, dword ptr [rbx+18h]
          vmovss  dword ptr [rsp+2B8h+var_1F8+8], xmm0
        }
        v268 = (unsigned int)v73 < wheelSteeringRatioMaxIndex;
        v269 = (_DWORD)v73 == wheelSteeringRatioMaxIndex;
        if ( (unsigned int)v73 <= wheelSteeringRatioMaxIndex )
        {
          v268 = v73 & 1;
          v269 = (unsigned int)v73 >> 1 == 0;
          v270 = (unsigned int)v73 >> 1;
          if ( (unsigned int)v73 >> 1 )
          {
            __asm { vxorps  xmm0, xmm0, xmm0 }
            v268 = v270 == 0;
            v269 = v270 == 1;
            __asm
            {
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm0, xmm0, xmm10; val
            }
            if ( v270 != 1 )
            {
              __asm
              {
                vxorps  xmm6, xmm6, xmm6
                vmovaps xmm2, xmm9; max
                vmovaps xmm1, xmm7; min
                vcvtsi2ss xmm6, xmm6, rax
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovaps xmm1, xmm0; Y
                vmovaps xmm0, xmm6; X
              }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            }
          }
          else
          {
            __asm { vmovaps xmm0, xmm9 }
          }
        }
        else
        {
          __asm { vmovaps xmm0, xmm7 }
        }
        __asm
        {
          vmulss  xmm1, xmm0, xmm11
          vcomiss xmm1, xmm7
          vmovss  dword ptr [rsp+2B8h+var_1E8+4], xmm1
        }
        if ( v268 || v269 )
        {
LABEL_106:
          if ( v268 && !(_DWORD)v73 )
            goto LABEL_108;
        }
        else
        {
          v268 = (_DWORD)v73 == 0;
          if ( (_DWORD)v73 != 1 )
          {
            __asm { vcomiss xmm1, xmm7 }
            goto LABEL_106;
          }
LABEL_108:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, xmm8; val
            vmovaps xmm2, xmm12; max
            vmovaps xmm1, xmm9; min
          }
          I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+2B8h+var_1E8+4]
            vdivss  xmm0, xmm1, xmm0
            vmovss  dword ptr [rsp+2B8h+var_1E8+4], xmm0
          }
        }
        __asm { vmovss  dword ptr [rsp+2B8h+var_1E8+8], xmm7 }
        DObjSetLocalTagInternal(obj, (const vec3_t *)&v312, &v313, boneIndex);
      }
      v239 = *(_QWORD *)v310.v;
      v232 = v303;
LABEL_111:
      *(_QWORD *)&v307 = v307 + 2;
      LODWORD(v73) = v73 + 1;
      if ( ++v240 >= *(__int64 *)v309.v )
      {
        v231 = 2i64;
        goto LABEL_113;
      }
    }
    childIndex[0] = v243;
    if ( DObjGetNextChildBoneIndex(obj, v243, childIndex) )
    {
      if ( v243 != childIndex[0] )
      {
        __asm { vucomiss xmm6, xmm7 }
        if ( v243 != childIndex[0] )
        {
          if ( DObjSetRotTransIndex(obj, partBits, childIndex[0]) )
          {
            __asm
            {
              vmovss  dword ptr [rsp+2B8h+var_258], xmm6
              vmovss  dword ptr [rsp+2B8h+var_258+4], xmm7
              vmovss  dword ptr [rsp+2B8h+var_258+8], xmm7
            }
            DObjSetLocalTagInternal(obj, &vec3_origin, (const vec3_t *)&v306, childIndex[0]);
          }
        }
      }
    }
LABEL_92:
    __asm { vmovss  dword ptr [rsp+2B8h+var_1E8], xmm7 }
    goto LABEL_93;
  }
LABEL_113:
  animCtrl = _RSI->player.animCtrl;
  if ( animCtrl < 0xFEu && DObjSetRotTransIndex(obj, partBits, animCtrl) )
  {
    v286 = _RSI->player.animCtrl;
    __asm
    {
      vmovss  dword ptr [rsp+2B8h+var_258], xmm11
      vmovss  dword ptr [rsp+2B8h+var_258+4], xmm7
      vmovss  dword ptr [rsp+2B8h+var_258+8], xmm7
    }
    DObjSetLocalTagInternal(obj, &vec3_origin, (const vec3_t *)&v306, v286);
  }
  if ( v305 )
  {
    tbaAnimIds = _RSI->vehicle.treadAnimInfo.tbaAnimIds;
    v288 = v305;
    do
    {
      if ( *tbaAnimIds )
        CgVehicleSystem::TreadBoneAnimDoPose(v288, *tbaAnimIds, &axis, obj, partBits);
      ++tbaAnimIds;
      --v231;
    }
    while ( v231 );
    _RSI = *(const cpose_t **)v308.v;
    goto LABEL_122;
  }
LABEL_124:
  __asm
  {
    vmovaps xmm10, [rsp+2B8h+var_88]
    vmovaps xmm9, [rsp+2B8h+var_78]
  }
  _R11 = &v325;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CG_Pose_GetActiveRagdollHandle
==============
*/
__int64 CG_Pose_GetActiveRagdollHandle(const cpose_t *pose)
{
  __int64 result; 

  result = (unsigned int)pose->killcamRagdollHandle;
  if ( !(_DWORD)result )
    return (unsigned int)pose->ragdollHandle;
  return result;
}

/*
==============
CG_Pose_InitializeRagdoll
==============
*/
void CG_Pose_InitializeRagdoll(cpose_t *pose, bool killcamActive, const bool createdOnMovingPlatform)
{
  int killcamRagdollHandle; 
  __int64 v8; 
  Ragdoll *v9; 
  unsigned __int8 ragdollFlags; 
  int v12; 
  int v13; 

  killcamRagdollHandle = pose->killcamRagdollHandle;
  if ( !killcamRagdollHandle )
    killcamRagdollHandle = pose->ragdollHandle;
  if ( killcamRagdollHandle )
  {
    if ( (unsigned int)(killcamRagdollHandle - 1) >= 0x40 )
    {
      v13 = 64;
      v12 = killcamRagdollHandle - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v8 = killcamRagdollHandle;
    v9 = &g_ragdollBodies[v8 - 1];
    if ( &g_ragdollBodies[v8] == (Ragdoll *)14116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1262, ASSERT_TYPE_ASSERT, "(ragdoll != 0)", (const char *)&queryFormat, "ragdoll != NULL") )
      __debugbreak();
    Ragdoll_ResetAllContactsWithMovers(v9);
    v9->createdOnMovingPlatform = createdOnMovingPlatform;
    ragdollFlags = pose->ragdollFlags | 1;
    pose->ragdollFlags = ragdollFlags;
    if ( killcamActive )
    {
      ragdollFlags |= 8u;
      pose->ragdollFlags = ragdollFlags;
    }
    if ( (ragdollFlags & 2) != 0 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; blendOutTime }
      Ragdoll_DisablePoseController(killcamRagdollHandle, *(float *)&_XMM1);
      ragdollFlags = pose->ragdollFlags;
    }
    if ( (ragdollFlags & 4) != 0 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; blendOutTime }
      Ragdoll_DisablePoseControllerRoot(killcamRagdollHandle, *(float *)&_XMM1);
    }
  }
}

/*
==============
CG_Pose_IsHierarchyFlattened
==============
*/
_BOOL8 CG_Pose_IsHierarchyFlattened(const cpose_t *pose)
{
  return pose->isMayhem;
}

/*
==============
CG_Pose_IsKillcamRagdoll
==============
*/
bool CG_Pose_IsKillcamRagdoll(const cpose_t *pose)
{
  return (pose->ragdollFlags & 9) == 9;
}

/*
==============
CG_Pose_IsRagdoll
==============
*/
bool CG_Pose_IsRagdoll(const cpose_t *pose)
{
  return pose->ragdollFlags & 1;
}

/*
==============
CG_Pose_IsUsingRagdollOrigin
==============
*/
bool CG_Pose_IsUsingRagdollOrigin(const cpose_t *pose)
{
  return (pose->ragdollFlags & 0x10) != 0;
}

/*
==============
CG_Pose_SetUsingRagdollOrigin
==============
*/
bool CG_Pose_SetUsingRagdollOrigin(cpose_t *pose, bool usingRagdollOrigin)
{
  unsigned __int8 ragdollFlags; 
  unsigned __int8 v3; 

  ragdollFlags = pose->ragdollFlags;
  v3 = ragdollFlags | 0x10;
  if ( !usingRagdollOrigin )
    v3 = ragdollFlags & 0xEF;
  pose->ragdollFlags = v3;
  return usingRagdollOrigin ^ ((ragdollFlags & 0x10) != 0);
}

/*
==============
CG_Pose_StopAnimatedRagdoll
==============
*/
void CG_Pose_StopAnimatedRagdoll(cpose_t *pose)
{
  unsigned __int8 ragdollFlags; 
  int killcamRagdollHandle; 

  ragdollFlags = pose->ragdollFlags;
  if ( (ragdollFlags & 1) != 0 )
  {
    killcamRagdollHandle = pose->killcamRagdollHandle;
    _RAX = ragdoll_poseController_defaultBlendDuration;
    if ( !killcamRagdollHandle )
      killcamRagdollHandle = pose->ragdollHandle;
    __asm { vmovss  xmm1, dword ptr [rax+28h]; blendOutTime }
    Ragdoll_DisablePoseController(killcamRagdollHandle, *(float *)&_XMM1);
  }
  else
  {
    pose->ragdollFlags = ragdollFlags | 2;
  }
}

/*
==============
CG_Pose_ValidateEntityPoseOrigin
==============
*/
void CG_Pose_ValidateEntityPoseOrigin(const DObj *obj, const cpose_t *pose)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  __int64 v6; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1135, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1137, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1139, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( pose->isEntityPose )
  {
    if ( pose->entOriginSet )
    {
      v4 = DVARBOOL_cg_pose_entityFixup;
      if ( !DVARBOOL_cg_pose_entityFixup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_pose_entityFixup") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled && pose->hasStaleEntityPose )
      {
        if ( obj->skel.partBits.animCalculated )
          DObjSkelReset(obj);
        pose->hasStaleEntityPose = 0;
      }
    }
    else
    {
      v5 = DVARBOOL_cg_pose_assertOnStaleAccess;
      if ( !DVARBOOL_cg_pose_assertOnStaleAccess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_pose_assertOnStaleAccess") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
        LODWORD(v6) = obj->entnum - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1159, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Accessing pose before the entity origin is set for entity: %d", v6) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_Pose_ValidateSetEntityPoseOrigin
==============
*/
void CG_Pose_ValidateSetEntityPoseOrigin(const cpose_t *pose)
{
  const dvar_t *v2; 
  __int64 z_low; 
  unsigned int v4; 
  char *v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1103, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->isEntityPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1104, ASSERT_TYPE_ASSERT, "(pose->isEntityPose)", (const char *)&queryFormat, "pose->isEntityPose") )
    __debugbreak();
  v2 = DVARBOOL_cg_pose_assertOnStaleAccess;
  if ( !DVARBOOL_cg_pose_assertOnStaleAccess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_pose_assertOnStaleAccess") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1110, ASSERT_TYPE_ASSERT, "( cl_maxLocalClients <= 1 )", "cg_pose_assertOnStaleAccess dvar can not be used in split screen mode!") )
      __debugbreak();
    if ( !cg_t::ms_allocatedCount )
    {
      LODWORD(v7) = cg_t::ms_allocatedCount;
      LODWORD(v6) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[0] )
    {
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v7) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v7) )
        __debugbreak();
    }
    if ( &cg_t::ms_cgArray[0]->firstPersonLegsPose != pose )
    {
      z_low = SLOWORD(pose[1].prevOrigin.prevOrigin.xyz.z);
      if ( (unsigned int)z_low > 0x9E4 )
      {
        LODWORD(v7) = SLOWORD(pose[1].prevOrigin.prevOrigin.xyz.z);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v7) )
          __debugbreak();
      }
      if ( (unsigned int)z_low >= 0x13CA )
      {
        LODWORD(v7) = z_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v7) )
          __debugbreak();
      }
      v4 = clientObjMap[z_low];
      if ( v4 )
      {
        if ( v4 >= (unsigned int)s_objCount )
        {
          LODWORD(v7) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v7) )
            __debugbreak();
        }
        v5 = s_objBuf[v4];
        if ( v5 && (v5[292] & 1) != 0 )
        {
          LODWORD(v6) = SLOWORD(pose[1].prevOrigin.prevOrigin.xyz.z);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1128, ASSERT_TYPE_ASSERT, "( !(obj->validation & 0x01) )", "entity pose origin is set after the dobj is submitted to the rendered for entity %d", v6) )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
CG_ResetPoseZero
==============
*/
void CG_ResetPoseZero(cpose_t *pose, const int randValOrigin, const int randValPrevOrigin)
{
  SetObfuscatedFunction(randValOrigin, (unsigned __int64)&pose->origin.Get_origin, (unsigned __int64)&pose->origin, &pose->origin.Set_origin, &pose->origin.Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
  CG_SetPoseOrigin(pose, &vec3_origin);
  SetObfuscatedFunction(randValPrevOrigin, (unsigned __int64)&pose->prevOrigin.Get_prevOrigin, (unsigned __int64)&pose->prevOrigin, &pose->prevOrigin.Set_prevOrigin, &pose->prevOrigin.Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
  CG_SetPrevPoseOrigin(pose, &vec3_origin);
}

