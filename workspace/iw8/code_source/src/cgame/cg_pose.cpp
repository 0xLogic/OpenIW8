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
    if ( !killcamRagdollHandle )
      killcamRagdollHandle = pose->ragdollHandle;
    Ragdoll_DisablePoseControllerRoot(killcamRagdollHandle, ragdoll_poseController_defaultBlendDuration->current.value);
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
  const DObj *v5; 
  unsigned int RootBoneCount; 
  int v8; 
  __int64 v9; 
  int v10; 
  unsigned int v11; 
  DObjPartBits *v12; 
  DObjAnimMat *RotTransArray; 
  float v15; 
  float v16; 
  float v17; 
  float *v18; 
  double v19; 
  float v20; 
  unsigned int v21; 
  __int64 v22; 
  DObjAnimMat *v23; 
  void (__fastcall *v24)(const vec4_t *, vec3_t *); 
  void (__fastcall *v26)(const vec4_t *, vec3_t *); 
  __int128 v30; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float transWeight; 
  float v58; 
  float v59; 
  float v60; 
  __int128 v61; 
  __int128 v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  double v72; 
  double v73; 
  double v74; 
  __int128 v77; 
  __int128 v80; 
  void (__fastcall *v89)(const vec4_t *, vec3_t *); 
  __int128 v93; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  __int128 v122; 
  __int64 v132; 
  float v133; 
  float v134; 
  vec3_t v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  vec3_t trans; 
  const DObj *v141; 
  __int64 v142; 
  vec4_t quat; 
  DObjAnimMat rotTrans; 
  int v145; 
  int v146; 
  int v147; 
  tmat33_t<vec3_t> axis; 
  int v149[4]; 
  DObjPartBits partBits; 
  __int128 v151; 
  __int64 v152; 
  int v153; 

  v142 = -2i64;
  v5 = obj;
  v141 = obj;
  setPartBits->array[7] &= ~2u;
  RootBoneCount = DObjGetRootBoneCount(obj);
  if ( !RootBoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 873, ASSERT_TYPE_ASSERT, "(rootBoneCount)", (const char *)&queryFormat, "rootBoneCount") )
    __debugbreak();
  v8 = RootBoneCount - 1;
  v9 = (unsigned int)(v8 >> 5);
  v10 = 0;
  v11 = 0;
  if ( v8 >> 5 )
  {
    v12 = setPartBits;
    while ( v12->array[0] == -1 )
    {
      ++v11;
      v12 = (DObjPartBits *)((char *)v12 + 4);
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( ((0xFFFFFFFF >> ((v8 & 0x1F) + 1)) | setPartBits->array[v9]) == -1 )
      goto LABEL_59;
  }
  RotTransArray = DObjGetRotTransArray(v5);
  if ( RotTransArray )
  {
    AnglesToQuat(&pose->angles, &quat);
    partBits = (DObjPartBits)_ymm;
    __asm { vpxor   xmm1, xmm1, xmm1 }
    v151 = _XMM1;
    v152 = 0i64;
    v153 = 0;
    v15 = g_activeRefDef->viewOffset.v[0];
    v137 = v15;
    v16 = g_activeRefDef->viewOffset.v[1];
    v138 = v16;
    v17 = g_activeRefDef->viewOffset.v[2];
    v139 = v17;
    if ( v8 >= 0 )
    {
      v18 = &RotTransArray->trans.v[2];
      v19 = DOUBLE_0_000244140625;
      v20 = FLOAT_4096_0;
      v21 = partBits.array[7];
      while ( 1 )
      {
        v22 = (unsigned int)(v10 >> 5);
        if ( (v21 & setPartBits->array[v22]) == 0 )
          break;
LABEL_58:
        ++v10;
        v21 = __ROR4__(v21, 1);
        partBits.array[7] = v21;
        v18 += 8;
        if ( v10 > v8 )
          goto LABEL_59;
      }
      if ( !DObjSetRotTransIndex(v5, (DObjPartBits *)((char *)&partBits + 4 * (unsigned int)(7 - v22)), v10) )
      {
        rotTrans.quat = quat;
        if ( pose->isPosePrecise )
        {
          if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 464, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          if ( !pose->isPosePrecise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 465, ASSERT_TYPE_ASSERT, "(pose->isPosePrecise != 0)", (const char *)&queryFormat, "pose->isPosePrecise != 0") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
          FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)v149);
          _XMM0 = _mm128_mul_ps((__m128)rotTrans.quat, (__m128)rotTrans.quat);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
          }
          rotTrans.quat = (vec4_t)_mm128_div_ps((__m128)rotTrans.quat, _mm_sqrt_ps(_XMM2));
          rotTrans.transWeight = FLOAT_2_0;
          v43 = *(v18 - 3);
          v133 = quat.v[0] * v43;
          v23 = (DObjAnimMat *)(v18 - 6);
          _XMM2.m128_f32[0] = *(v18 - 6);
          v136 = quat.v[3] * _XMM2.m128_f32[0];
          v44 = *(v18 - 4);
          v45 = quat.v[1];
          v46 = *(v18 - 5);
          v47 = quat.v[2] * v46;
          v48 = quat.v[3] * v46;
          v49 = quat.v[0] * v44;
          v50 = quat.v[1] * v43;
          v51 = quat.v[2] * _XMM2.m128_f32[0];
          v52 = quat.v[3] * v44;
          v53 = quat.v[0] * v46;
          v54 = quat.v[1] * _XMM2.m128_f32[0];
          v55 = quat.v[2] * v43;
          *(v18 - 3) = (float)((float)((float)(quat.v[3] * *(v18 - 3)) - (float)(_XMM2.m128_f32[0] * quat.v[0])) - (float)(quat.v[1] * v46)) - (float)(quat.v[2] * v44);
          *(v18 - 6) = (float)((float)(v136 + v133) + (float)(v45 * v44)) - v47;
          *(v18 - 5) = (float)((float)(v48 - v49) + v50) + v51;
          *(v18 - 4) = (float)((float)(v52 + v53) - v54) + v55;
          *(float *)&v132 = rotTrans.quat.v[0];
          if ( (LODWORD(rotTrans.quat.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v132 = rotTrans.quat.v[1], (LODWORD(rotTrans.quat.v[1]) & 0x7F800000) == 2139095040) || (v56 = rotTrans.quat.v[2], *(float *)&v132 = rotTrans.quat.v[2], (LODWORD(rotTrans.quat.v[2]) & 0x7F800000) == 2139095040) || (*(float *)&v132 = rotTrans.quat.v[3], (LODWORD(rotTrans.quat.v[3]) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v132) )
              __debugbreak();
            v56 = rotTrans.quat.v[2];
          }
          transWeight = rotTrans.transWeight;
          *(float *)&v132 = rotTrans.transWeight;
          if ( (LODWORD(rotTrans.transWeight) & 0x7F800000) == 2139095040 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )", v132) )
              __debugbreak();
            v56 = rotTrans.quat.v[2];
            transWeight = rotTrans.transWeight;
          }
          v58 = transWeight * rotTrans.quat.v[0];
          v59 = rotTrans.quat.v[1] * transWeight;
          v60 = v56 * transWeight;
          v62 = LODWORD(rotTrans.quat.v[1]);
          *(float *)&v62 = rotTrans.quat.v[1] * v58;
          v61 = v62;
          v63 = v56 * v58;
          v64 = rotTrans.quat.v[1] * v59;
          v65 = v56 * v59;
          v66 = rotTrans.quat.v[3] * v59;
          v67 = v56 * v60;
          v69 = LODWORD(FLOAT_1_0);
          *(float *)&v69 = 1.0 - (float)((float)(v56 * v60) + v64);
          v68 = v69;
          axis.m[0].v[0] = *(float *)&v69;
          v71 = v61;
          *(float *)&v71 = *(float *)&v61 + (float)(rotTrans.quat.v[3] * v60);
          v70 = v71;
          axis.m[0].v[1] = *(float *)&v71;
          axis.m[0].v[2] = v63 - v66;
          axis.m[1].v[0] = *(float *)&v61 - (float)(rotTrans.quat.v[3] * v60);
          axis.m[1].v[1] = 1.0 - (float)((float)(v58 * rotTrans.quat.v[0]) + v67);
          axis.m[1].v[2] = v65 + (float)(rotTrans.quat.v[3] * v58);
          axis.m[2].v[0] = v66 + v63;
          axis.m[2].v[1] = v65 - (float)(rotTrans.quat.v[3] * v58);
          axis.m[2].v[2] = 1.0 - (float)((float)(v58 * rotTrans.quat.v[0]) + v64);
          v72 = *(v18 - 1);
          v73 = *(v18 - 2);
          v74 = *v18;
          *((_QWORD *)&v71 + 1) = *((_QWORD *)&v68 + 1);
          *(double *)&v71 = *(float *)&v68 * v73 + axis.m[1].v[0] * v72 + (float)(v66 + v63) * v74;
          _XMM2 = (unsigned int)v149[0];
          __asm { vcvtdq2pd xmm2, xmm2 }
          v19 = DOUBLE_0_000244140625;
          *(double *)&v71 = *(double *)&v71 + *(double *)&_XMM2 * 0.000244140625;
          v77 = v71;
          *((_QWORD *)&v71 + 1) = *((_QWORD *)&v70 + 1);
          _XMM2 = (unsigned int)v149[1];
          __asm { vcvtdq2pd xmm2, xmm2 }
          *(double *)&v71 = *(float *)&v70 * v73 + axis.m[1].v[1] * v72 + axis.m[2].v[1] * v74 + *(double *)&_XMM2 * 0.000244140625;
          v80 = v71;
          _XMM2 = (unsigned int)v149[2];
          __asm { vcvtdq2pd xmm2, xmm2 }
          *((_QWORD *)&v71 + 1) = *((_QWORD *)&v77 + 1);
          *(double *)&v71 = *(double *)&v77 * 4096.0;
          _XMM1 = v71;
          __asm { vcvttsd2si eax, xmm1 }
          v145 = _EAX;
          *((_QWORD *)&v71 + 1) = *((_QWORD *)&v80 + 1);
          *(double *)&v71 = *(double *)&v80 * 4096.0;
          _XMM0 = v71;
          __asm { vcvttsd2si eax, xmm0 }
          v146 = _EAX;
          *((_QWORD *)&v71 + 1) = 0i64;
          *(double *)&v71 = ((float)(v63 - v66) * v73 + axis.m[1].v[2] * v72 + axis.m[2].v[2] * v74 + *(double *)&_XMM2 * 0.000244140625) * 4096.0;
          _XMM1 = v71;
          __asm { vcvttsd2si eax, xmm1 }
          v147 = _EAX;
          *(float *)&_XMM3 = v135.v[2];
        }
        else
        {
          if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          v89 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
          v89(&pose->origin.origin.origin, &trans);
          if ( pose->isPosePrecise )
          {
            _XMM0 = LODWORD(trans.v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v93 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v93 = *(double *)&_XMM0 * v19;
            _XMM1 = v93;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            trans.v[0] = *(float *)&_XMM2;
            _XMM0 = LODWORD(trans.v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v93 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v93 = *(double *)&_XMM0 * v19;
            _XMM1 = v93;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            trans.v[1] = *(float *)&_XMM2;
            _XMM0 = LODWORD(trans.v[2]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v93 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v93 = *(double *)&_XMM0 * v19;
            _XMM1 = v93;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            trans.v[2] = *(float *)&_XMM2;
          }
          DObjSetTrans(&rotTrans, &trans);
          _XMM0 = _mm128_mul_ps((__m128)rotTrans.quat, (__m128)rotTrans.quat);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
          }
          rotTrans.quat = (vec4_t)_mm128_div_ps((__m128)rotTrans.quat, _mm_sqrt_ps(_XMM2));
          rotTrans.transWeight = FLOAT_2_0;
          v106 = *(v18 - 3);
          v136 = quat.v[0] * v106;
          v23 = (DObjAnimMat *)(v18 - 6);
          _XMM2.m128_f32[0] = *(v18 - 6);
          v134 = quat.v[3] * _XMM2.m128_f32[0];
          v107 = *(v18 - 4);
          v108 = quat.v[1];
          v109 = *(v18 - 5);
          v110 = quat.v[2] * v109;
          v111 = quat.v[3] * v109;
          v112 = quat.v[0] * v107;
          v113 = quat.v[1] * v106;
          v114 = quat.v[2] * _XMM2.m128_f32[0];
          v115 = quat.v[3] * v107;
          v116 = quat.v[0] * v109;
          v117 = quat.v[1] * _XMM2.m128_f32[0];
          v118 = quat.v[2] * v106;
          *(v18 - 3) = (float)((float)((float)(quat.v[3] * *(v18 - 3)) - (float)(_XMM2.m128_f32[0] * quat.v[0])) - (float)(quat.v[1] * v109)) - (float)(quat.v[2] * v107);
          *(v18 - 6) = (float)((float)(v134 + v136) + (float)(v108 * v107)) - v110;
          *(v18 - 5) = (float)((float)(v111 - v112) + v113) + v114;
          *(v18 - 4) = (float)((float)(v116 + v115) - v117) + v118;
          LocalConvertQuatToMat(&rotTrans, &axis);
          v135.v[0] = (float)((float)((float)(axis.m[0].v[0] * *(v18 - 2)) + (float)(axis.m[1].v[0] * *(v18 - 1))) + (float)(axis.m[2].v[0] * *v18)) + rotTrans.trans.v[0];
          v135.v[1] = (float)((float)((float)(axis.m[0].v[1] * *(v18 - 2)) + (float)(axis.m[1].v[1] * *(v18 - 1))) + (float)(axis.m[2].v[1] * *v18)) + rotTrans.trans.v[1];
          *(float *)&_XMM3 = (float)((float)((float)(axis.m[0].v[2] * *(v18 - 2)) + (float)(axis.m[1].v[2] * *(v18 - 1))) + (float)(axis.m[2].v[2] * *v18)) + rotTrans.trans.v[2];
          memset(&trans, 0, sizeof(trans));
          v19 = DOUBLE_0_000244140625;
        }
        v17 = v139;
        v16 = v138;
        v15 = v137;
        v20 = FLOAT_4096_0;
        goto LABEL_54;
      }
      v23 = (DObjAnimMat *)(v18 - 6);
      *(vec4_t *)(v18 - 6) = quat;
      if ( pose->isPosePrecise )
      {
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 464, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        if ( !pose->isPosePrecise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 465, ASSERT_TYPE_ASSERT, "(pose->isPosePrecise != 0)", (const char *)&queryFormat, "pose->isPosePrecise != 0") )
          __debugbreak();
        v24 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        v24(&pose->origin.origin.origin, (vec3_t *)&v145);
      }
      else
      {
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        v26 = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        v26(&pose->origin.origin.origin, &v135);
        if ( pose->isPosePrecise )
        {
          _XMM0 = LODWORD(v135.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v30 = *(double *)&_XMM0 * v19;
          _XMM1 = v30;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          v135.v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(v135.v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v30 = *(double *)&_XMM0 * v19;
          _XMM1 = v30;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          v135.v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(v135.v[2]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v30 = *(double *)&_XMM0 * v19;
          _XMM1 = v30;
          __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
          goto LABEL_54;
        }
      }
      *(float *)&_XMM3 = v135.v[2];
LABEL_54:
      if ( pose->isPosePrecise )
      {
        v145 -= (int)(float)(v15 * v20);
        v146 -= (int)(float)(v16 * v20);
        v147 -= (int)(float)(v17 * v20);
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, edi }
        *((_QWORD *)&v122 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v122 = *(double *)&_XMM0 * v19;
        _XMM1 = v122;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v135.v[0] = *(float *)&_XMM2;
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, eax }
        *((_QWORD *)&v122 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v122 = *(double *)&_XMM0 * v19;
        _XMM1 = v122;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v135.v[1] = *(float *)&_XMM2;
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, ecx }
        *((_QWORD *)&v122 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v122 = *(double *)&_XMM0 * v19;
        _XMM1 = v122;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v135.v[2] = *(float *)&_XMM2;
      }
      else
      {
        v135.v[0] = v135.v[0] - v15;
        v135.v[1] = v135.v[1] - v16;
        v135.v[2] = *(float *)&_XMM3 - v17;
      }
      DObjSetTrans(v23, &v135);
      v21 = partBits.array[7];
      v5 = v141;
      goto LABEL_58;
    }
  }
LABEL_59:
  memset(&v135, 0, sizeof(v135));
}

/*
==============
CG_Pose_DoControllers
==============
*/
void CG_Pose_DoControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  unsigned int v6; 
  $8E443F52CA944F49562A945B438F302F *v7; 
  DObjAnimMat *RotTransArray; 
  unsigned __int8 proneType; 
  float v10; 
  float v11; 
  float v12; 
  int physicsId; 
  int v14; 
  LocalClientNum_t v15; 
  LocalClientNum_t LocalClientNumForDobj; 
  DObjPartBits *v17; 
  __int64 v18; 
  vec3_t trans; 
  vec4_t in2; 
  vec4_t in1; 
  DObjPartBits setPartBits; 

  Profile_Begin(430);
  DObjGetSetBones(obj, &setPartBits);
  v6 = 0;
  switch ( pose->eType )
  {
    case 1u:
    case 0x11u:
      if ( pose->player.control )
      {
        if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 42, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
          __debugbreak();
        v7 = &pose->160;
        if ( pose->player.animCtrl == 2 )
          BG_Pose_DoDogControllers((const CEntPlayerInfo *)v7, obj, partBits);
        else
          BG_Pose_DoPlayerControllers((const CEntPlayerInfo *)v7, obj, partBits);
      }
      break;
    case 6u:
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 583, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 584, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
        __debugbreak();
      if ( pose->eType == 6 && pose->scriptMover.doVehicleControllers )
        goto $LN5_122;
      CG_Train_TryDoTrainPoseController(pose, obj, partBits);
      break;
    case 0xBu:
      CG_Pose_DoTurretControllers(pose, obj, partBits);
      break;
    case 0xCu:
    case 0xEu:
$LN5_122:
      CG_Pose_DoVehicleControllers(pose, obj, partBits);
      break;
    case 0x13u:
    case 0x15u:
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 604, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 605, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
        __debugbreak();
      if ( pose->actor.proneType )
      {
        RotTransArray = DObjGetRotTransArray(obj);
        if ( RotTransArray )
        {
          if ( DObjSetRotTransIndex(obj, partBits, 0) )
          {
            proneType = pose->actor.proneType;
            if ( proneType == 2 )
            {
              v10 = 0.0087266462 * pose->actor.pitch;
              in2.v[0] = 0.0;
              in2.v[2] = 0.0;
              FastSinCos(v10, &in2.v[1], &in2.v[3]);
              v11 = 0.0087266462 * pose->actor.roll;
              in1.v[1] = 0.0;
              in1.v[2] = 0.0;
              FastSinCos(v11, in1.v, &in1.v[3]);
              QuatMultiply(&in1, &in2, &RotTransArray->quat);
            }
            else
            {
              if ( proneType != 1 )
              {
                LODWORD(v18) = proneType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 630, ASSERT_TYPE_ASSERT, "( ( pose->actor.proneType == CENT_ACTOR_PRONE_NORMAL ) )", "( pose->actor.proneType ) = %i", v18) )
                  __debugbreak();
              }
              v12 = pose->actor.pitch * 0.0087266462;
              RotTransArray->quat.v[0] = 0.0;
              RotTransArray->quat.v[2] = 0.0;
              FastSinCos(v12, &RotTransArray->quat.v[1], &RotTransArray->quat.v[3]);
            }
            LODWORD(trans.v[2]) = pose->coverWall.coverGrid[2];
            trans.v[0] = 0.0;
            trans.v[1] = 0.0;
            DObjSetTrans(RotTransArray, &trans);
          }
        }
      }
      break;
    case 0x1Bu:
      CG_Pose_DoCoverWallControllers(pose, obj, partBits);
      break;
    default:
      break;
  }
  if ( (pose->ragdollFlags & 1) != 0 )
  {
    Ragdoll_AddPartBits(pose->killcamRagdollHandle, partBits);
    Ragdoll_AddPartBits(pose->ragdollHandle, partBits);
  }
  CG_Pose_DoBaseOriginController(pose, obj, &setPartBits);
  physicsId = pose->physicsId;
  if ( physicsId )
  {
    v14 = physicsId - 1;
    if ( v14 >= 2048 )
    {
      if ( (unsigned int)(v14 - 2117) <= 0x17F )
      {
        LocalClientNumForDobj = CG_ClientModel_GetLocalClientNumForDobj(v14 - 2117, obj);
        CG_ClientModel_Physics_MapPose(LocalClientNumForDobj, v14 - 2117, partBits);
      }
    }
    else
    {
      v15 = CG_Entity_GetLocalClientNumForDobj(v14, obj);
      CG_PhysicsObject_MapPose(pose, obj, partBits, pose->physicsId, v15);
    }
  }
  if ( pose->isMayhem )
  {
    v17 = partBits;
    do
    {
      *(_OWORD *)v17->array = _xmm_ffffffffffffffffffffffffffffffff;
      v17 = (DObjPartBits *)((char *)v17 + 16);
      ++v6;
    }
    while ( v6 < 2 );
    Mayhem_UpdatePose(pose, obj, partBits, pose->mayhemInstanceId);
  }
  Profile_EndInternal(NULL);
}

/*
==============
CG_Pose_DoCoverWallControllers
==============
*/
void CG_Pose_DoCoverWallControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *setPartBits)
{
  int v6; 
  int v7; 
  int v8; 
  DObjPartBits *partBits; 
  vec3_t outLocalPos; 
  vec3_t outAngles; 
  vec3_t outNoise; 

  partBits = setPartBits;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 819, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose", setPartBits) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 820, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !setPartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 821, ASSERT_TYPE_ASSERT, "(setPartBits)", (const char *)&queryFormat, "setPartBits") )
    __debugbreak();
  outLocalPos.v[0] = 0.0;
  outLocalPos.v[1] = 0.0;
  outLocalPos.v[2] = 0.0;
  outAngles.v[0] = 0.0;
  outAngles.v[1] = 0.0;
  outAngles.v[2] = 0.0;
  v6 = 0;
  v7 = -4;
  do
  {
    v8 = -6;
    while ( !BG_CoverWall_GetGridPos((const unsigned int *)&pose->160, v8, 0, v7) )
    {
LABEL_18:
      if ( ++v8 > 6 )
        goto LABEL_21;
    }
    if ( v6 + 1 > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 833, ASSERT_TYPE_ASSERT, "(1 + coverBlockCount <= 255)", (const char *)&queryFormat, "COVERWALL_MODEL_FIRST_CONTROLLER + coverBlockCount <= 255") )
      __debugbreak();
    if ( (unsigned __int8)(v6 + 1) <= 0x7Fu )
    {
      BG_CoverWall_GridPosToLocalPos(v8, 0, v7, pose->coverWall.sag, &outLocalPos);
      BG_CoverWall_CalcAnglesForPosition(v8, 0, v7, &outAngles);
      BG_CoverWall_CalcNoiseForPosition(v8, 0, v7, &outNoise);
      outLocalPos.v[0] = outLocalPos.v[0] + outNoise.v[0];
      outLocalPos.v[2] = outLocalPos.v[2] + outNoise.v[2];
      outLocalPos.v[1] = outLocalPos.v[1] + outNoise.v[1];
      DObjSetLocalTag(obj, partBits, (unsigned __int8)++v6, &outLocalPos, &outAngles);
      goto LABEL_18;
    }
    Com_PrintWarning(16, "out of cover block bones bailing early\n");
LABEL_21:
    ++v7;
  }
  while ( v7 <= 9 );
}

/*
==============
CG_Pose_DoTurretControllers
==============
*/
void CG_Pose_DoTurretControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  bool v6; 
  float height; 
  clientControllers_t *v13; 
  float roll; 
  __int128 v16; 
  __int128 v20; 
  __int128 v24; 
  __int128 v28; 
  __m128 v31; 
  __int128 v33; 
  __m128 v34; 
  __m128 v37; 
  __m128 v38; 
  bool playerUsing; 
  __m128 v44; 
  __m128 v45; 
  __int128 v48; 
  __int128 v49; 
  __int128 v52; 
  __m128 v53; 
  clientControllers_t *control; 
  __int128 v55; 
  __int128 v56; 
  __m128 v59; 
  __m128 v60; 
  __int128 v61; 
  __int128 v62; 
  __m128 v63; 
  __m128 v64; 
  __int128 v66; 
  __m128 v67; 
  __int128 v71; 
  __m128 v72; 
  double v77; 
  unsigned __int8 tagIdx_aim_pivot; 
  __int128 v79; 
  double v84; 
  unsigned int tagIdx_aim; 
  unsigned int tagIdx_flash; 
  unsigned int tagIdx_barrel; 
  vec3_t angles; 
  __int128 v89; 
  tmat33_t<vec3_t> axis; 
  float v91; 
  float v92; 
  float v93; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  __int128 v97; 
  _OWORD v98[3]; 

  v6 = !pose->turret.remoteTurret;
  height = pose->actor.height;
  _XMM11 = LODWORD(FLOAT_360_0);
  v98[1] = v3;
  _XMM10 = 0i64;
  if ( v6 )
  {
    playerUsing = pose->turret.playerUsing;
    if ( playerUsing )
    {
      if ( pose->turret.useOnVehicleAngles )
      {
        v52 = pose->coverWall.coverGrid[0];
        v53 = (__m128)pose->coverWall.coverGrid[1];
        LODWORD(angles.v[0]) = pose->coverWall.coverGrid[0];
        angles.v[1] = v53.m128_f32[0];
        angles.v[2] = 0.0;
      }
      else
      {
        if ( !pose->player.control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 718, ASSERT_TYPE_ASSERT, "(pose->turret.viewAngles)", (const char *)&queryFormat, "pose->turret.viewAngles") )
          __debugbreak();
        control = pose->player.control;
        v52 = LODWORD(control->angles[0].v[0]);
        angles.v[0] = control->angles[0].v[0];
        v53 = (__m128)LODWORD(control->angles[0].v[1]);
        *(_QWORD *)&angles.y = *(_QWORD *)&control->angles[0].y;
      }
      if ( pose->turret.worldSpaceTransform )
      {
        AnglesToAxis(&pose->angles, &in);
        MatrixTranspose(&in, &out);
        AnglesToAxis(&angles, &in1);
        MatrixMultiply(&in1, &out, &axis);
        AxisToAngles(&axis, (vec3_t *)&v89);
        playerUsing = pose->turret.playerUsing;
        _XMM6 = (unsigned int)v89;
        _XMM7 = (__m128)DWORD1(v89);
        height = 0.0;
      }
      else
      {
        v55 = v52;
        playerUsing = pose->turret.playerUsing;
        *(float *)&v55 = (float)(*(float *)&v52 - pose->angles.v[0]) * 0.0027777778;
        v56 = v55;
        _XMM5 = 0i64;
        __asm { vroundss xmm2, xmm5, xmm1, 1 }
        v60 = v53;
        v60.m128_f32[0] = v53.m128_f32[0] - pose->angles.v[1];
        v59 = v60;
        v62 = v56;
        *(float *)&v62 = *(float *)&v56 - *(float *)&_XMM2;
        v61 = v62;
        v64 = v59;
        v64.m128_f32[0] = v59.m128_f32[0] * 0.0027777778;
        v63 = v64;
        __asm { vroundss xmm3, xmm5, xmm2, 1 }
        v66 = v61;
        *(float *)&v66 = *(float *)&v61 * 360.0;
        _XMM6 = v66;
        v67 = v63;
        v67.m128_f32[0] = (float)(v63.m128_f32[0] - *(float *)&_XMM3) * 360.0;
        _XMM7 = v67;
      }
    }
    else
    {
      _XMM7 = (__m128)pose->coverWall.coverGrid[1];
      _XMM0 = pose->vehicle.terrainMode.tag_fin_right;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      v71 = pose->coverWall.coverGrid[0];
      *(float *)&v71 = pose->actor.pitch - height;
      _XMM3 = v71;
      __asm { vblendvps xmm6, xmm3, xmm4, xmm2 }
    }
  }
  else
  {
    v98[0] = v4;
    v97 = v5;
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 658, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    v6 = !pose->turret.playerUsing;
    v91 = 0.0;
    v92 = 0.0;
    v93 = 0.0;
    if ( v6 || pose->turret.useOnVehicleAngles )
    {
      roll = pose->actor.roll;
      LODWORD(angles.v[0]) = pose->coverWall.coverGrid[0];
    }
    else
    {
      if ( !pose->player.control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 671, ASSERT_TYPE_ASSERT, "(pose->turret.viewAngles)", (const char *)&queryFormat, "pose->turret.viewAngles") )
        __debugbreak();
      v13 = pose->player.control;
      angles.v[0] = v13->angles[0].v[0];
      roll = v13->angles[0].v[1];
    }
    angles.v[1] = roll;
    angles.v[2] = 0.0;
    AnglesToAxis(&pose->angles, &axis);
    HIDWORD(v89) = 0;
    v16 = v89;
    *(float *)&v16 = axis.m[0].v[0];
    _XMM9 = v16;
    __asm
    {
      vinsertps xmm9, xmm9, dword ptr [rsp+1E0h+axis+4], 10h
      vinsertps xmm9, xmm9, dword ptr [rsp+1E0h+axis+8], 0E0h+var_C0
    }
    v89 = (__int128)_XMM9;
    HIDWORD(v89) = 0;
    v20 = v89;
    *(float *)&v20 = axis.m[1].v[0];
    _XMM8 = v20;
    __asm
    {
      vinsertps xmm8, xmm8, dword ptr [rsp+1E0h+axis+10h], 10h
      vinsertps xmm8, xmm8, dword ptr [rsp+1E0h+axis+14h], 0E0h+var_C0
    }
    v89 = (__int128)_XMM8;
    HIDWORD(v89) = 0;
    v24 = v89;
    *(float *)&v24 = axis.m[2].v[0];
    _XMM7 = v24;
    __asm
    {
      vinsertps xmm7, xmm7, dword ptr [rsp+1E0h+axis+1Ch], 10h
      vinsertps xmm7, xmm7, dword ptr [rbp+0E0h+axis+20h], 0E0h+var_C0
    }
    v89 = (__int128)_XMM7;
    HIDWORD(v89) = 0;
    v28 = v89;
    *(float *)&v28 = v91;
    _XMM3 = v28;
    __asm
    {
      vinsertps xmm3, xmm3, [rbp+0E0h+var_158], 10h
      vinsertps xmm3, xmm3, [rbp+0E0h+var_154], 0E0h+var_C0
    }
    v89 = _XMM3;
    AnglesToAxis(&angles, &axis);
    v31 = _mm_shuffle_ps(_XMM9, _XMM8, 68);
    HIDWORD(v89) = 0;
    v33 = v89;
    *(float *)&v33 = axis.m[0].v[0];
    _XMM3 = v33;
    v34 = _mm_shuffle_ps(_XMM7, g_one.v, 68);
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+1E0h+axis+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+1E0h+axis+8], 0E0h+var_C0
    }
    v37 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 0), _mm_shuffle_ps(v31, v34, 136)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 85), _mm_shuffle_ps(v31, v34, 221)), _mm128_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(_XMM9, _XMM8, 238), _mm_shuffle_ps(_XMM7, g_one.v, 238), 136), _mm_shuffle_ps(_XMM3, _XMM3, 170))));
    v38 = _mm_shuffle_ps(v37, v37, 85);
    v89 = (__int128)v37;
    if ( v38.m128_f32[0] == 0.0 && v37.m128_f32[0] == 0.0 )
    {
      _XMM0 = LODWORD(FLOAT_270_0);
      playerUsing = pose->turret.playerUsing;
      __asm
      {
        vcmpless xmm3, xmm10, xmm1
        vblendvps xmm6, xmm0, xmm2, xmm3
      }
      _XMM7 = 0i64;
    }
    else
    {
      v44 = v38;
      v44.m128_f32[0] = atan2f_0(v38.m128_f32[0], v37.m128_f32[0]);
      v45 = v44;
      v45.m128_f32[0] = v44.m128_f32[0] * 57.295776;
      __asm
      {
        vcmpless xmm0, xmm10, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm0
      }
      v45.m128_f32[0] = v45.m128_f32[0] + *(float *)&_XMM0;
      _XMM7 = v45;
      v48 = DWORD2(v89);
      *(float *)&v48 = atan2f_0(*((float *)&v89 + 2), fsqrt((float)(v37.m128_f32[0] * v37.m128_f32[0]) + (float)(v38.m128_f32[0] * v38.m128_f32[0])));
      v49 = v48;
      *(float *)&v49 = *(float *)&v48 * -57.295776;
      playerUsing = pose->turret.playerUsing;
      __asm
      {
        vcmpless xmm0, xmm10, xmm1
        vblendvps xmm0, xmm11, xmm10, xmm0
      }
      *(float *)&v49 = *(float *)&v49 + *(float *)&_XMM0;
      _XMM6 = v49;
    }
  }
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  if ( !playerUsing || !pose->turret.playerViewArms )
  {
    v72 = _XMM7;
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    v72.m128_f32[0] = (float)((float)(_XMM7.m128_f32[0] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    _XMM1 = v72;
    __asm
    {
      vminss  xmm4, xmm1, dword ptr [rbx+0DCh]
      vmaxss  xmm7, xmm4, xmm0
    }
  }
  v77 = AngleNormalize360(_XMM7.m128_f32[0]);
  tagIdx_aim_pivot = pose->turret.tagIdx_aim_pivot;
  angles.v[1] = *(float *)&v77;
  if ( tagIdx_aim_pivot != 0xFF )
  {
    if ( tagIdx_aim_pivot == 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 777, ASSERT_TYPE_ASSERT, "(pose->turret.tagIdx_aim_pivot != 254)", (const char *)&queryFormat, "pose->turret.tagIdx_aim_pivot != UNDEFINED_BONEINDEX") )
      __debugbreak();
    DObjSetLocalTag(obj, partBits, pose->turret.tagIdx_aim_pivot, &vec3_origin, &angles);
    angles.v[1] = 0.0;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_FIRING|0x80) || !pose->turret.playerUsing || !pose->turret.playerViewArms )
  {
    v79 = _XMM6;
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    *(float *)&v79 = (float)((float)(*(float *)&_XMM6 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    _XMM1 = v79;
    __asm
    {
      vminss  xmm4, xmm1, dword ptr [rbx+0D8h]
      vmaxss  xmm6, xmm4, xmm0
    }
  }
  v84 = AngleNormalize360(*(const float *)&_XMM6);
  tagIdx_aim = pose->turret.tagIdx_aim;
  angles.v[0] = *(float *)&v84;
  DObjSetLocalTag(obj, partBits, tagIdx_aim, &vec3_origin, &angles);
  DObjSetLocalTag(obj, partBits, pose->turret.tagIdx_aim_animated, &vec3_origin, &angles);
  tagIdx_flash = pose->turret.tagIdx_flash;
  angles.v[0] = height;
  angles.v[1] = 0.0;
  DObjSetLocalTag(obj, partBits, tagIdx_flash, &vec3_origin, &angles);
  tagIdx_barrel = pose->turret.tagIdx_barrel;
  LODWORD(angles.v[2]) = pose->coverWall.coverGrid[5];
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  DObjSetLocalTag(obj, partBits, tagIdx_barrel, &vec3_origin, &angles);
}

/*
==============
CG_Pose_DoVehicleControllers
==============
*/
void CG_Pose_DoVehicleControllers(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  const cpose_t *v5; 
  float barrelRoll; 
  unsigned int tag_body; 
  float roll; 
  int barrelPitch; 
  float v10; 
  int yaw; 
  float v12; 
  __int128 v14; 
  __int128 v18; 
  __int128 v22; 
  __int128 v26; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  const XModel *Model; 
  int physicsId; 
  __int64 v34; 
  LocalClientNum_t LocalClientNumForDobj; 
  __int64 v36; 
  unsigned int v37; 
  float v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned __int16 *rotorPosition; 
  __int64 v46; 
  unsigned int v47; 
  __int16 *v48; 
  float v49; 
  int numClientBones; 
  int numBones; 
  __m128 v52; 
  __m128 v53; 
  float v54; 
  int v55; 
  float v56; 
  int v57; 
  float v58; 
  unsigned int v59; 
  __int64 v60; 
  __int64 v61; 
  float v62; 
  __int128 v64; 
  __m128 v67; 
  const DObjAnimMat *v68; 
  __int128 v70; 
  __m128 v73; 
  const DObjAnimMat *v74; 
  __int128 v76; 
  __m128 v79; 
  float v80; 
  int WheelCount; 
  __int64 v82; 
  int v83; 
  float steerYaw; 
  float v85; 
  __int64 v86; 
  __int64 v87; 
  bool v88; 
  __int64 v89; 
  unsigned __int8 v90; 
  float v91; 
  int spinWheelBones; 
  int v93; 
  float *v94; 
  double v95; 
  unsigned int wheelSteeringRatioMaxIndex; 
  float v97; 
  float v98; 
  double v99; 
  bool v100; 
  double v101; 
  unsigned __int8 animCtrl; 
  int v103; 
  unsigned __int16 *tbaAnimIds; 
  CgVehicleSystem *v105; 
  __int64 v106; 
  __int64 v107; 
  unsigned __int8 childIndex[4]; 
  float v109; 
  int boneIndex; 
  CgVehicleSystem *v111; 
  __int128 v112; 
  __int128 v113; 
  vec3_t v114; 
  vec3_t v115; 
  vec3_t v116; 
  vec3_t v117; 
  __m128 v118; 
  vec3_t v119; 
  __int128 v120; 
  __int128 v121; 
  vec3_t angles; 
  vec3_t v123; 
  vec3_t v124; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> v126; 
  tmat33_t<vec3_t> v127; 
  __int128 v128; 

  *(_QWORD *)v114.v = pose;
  v5 = pose;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 105, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 106, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 107, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  barrelRoll = v5->turret.barrelRoll;
  tag_body = v5->vehicle.tag_body;
  roll = (float)v5->vehicle.roll;
  barrelPitch = v5->vehicle.barrelPitch;
  angles.v[0] = (float)v5->vehicle.pitch * 0.0054931641;
  angles.v[2] = roll * 0.0054931641;
  v10 = (float)barrelPitch;
  yaw = v5->vehicle.yaw;
  v124.v[0] = v10 * 0.0054931641;
  v123.v[1] = (float)yaw * 0.0054931641;
  v123.v[0] = 0.0;
  v123.v[2] = 0.0;
  v124.v[1] = 0.0;
  angles.v[1] = 0.0;
  v124.v[2] = barrelRoll;
  DObjSetLocalTag(obj, partBits, tag_body, &vec3_origin, &angles);
  DObjSetLocalTag(obj, partBits, v5->vehicle.tag_turret, &vec3_origin, &v123);
  DObjSetLocalTag(obj, partBits, v5->vehicle.tag_barrel, &vec3_origin, &v124);
  v12 = v5->turret.barrelPitch;
  AnglesToAxis(&v5->angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(v5, &axis.m[3]);
  HIDWORD(v112) = 0;
  v14 = v112;
  *(float *)&v14 = axis.m[0].v[0];
  _XMM11 = v14;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rsp+2B8h+axis+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rsp+2B8h+axis+8], 20h
  }
  v112 = (__int128)_XMM11;
  HIDWORD(v112) = 0;
  v18 = v112;
  *(float *)&v18 = axis.m[1].v[0];
  _XMM12 = v18;
  __asm
  {
    vinsertps xmm12, xmm12, dword ptr [rsp+2B8h+axis+10h], 10h
    vinsertps xmm12, xmm12, dword ptr [rsp+2B8h+axis+14h], 20h
  }
  v112 = (__int128)_XMM12;
  HIDWORD(v112) = 0;
  v22 = v112;
  *(float *)&v22 = axis.m[2].v[0];
  _XMM13 = v22;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [rsp+2B8h+axis+1Ch], 10h
    vinsertps xmm13, xmm13, dword ptr [rsp+2B8h+axis+20h], 20h
  }
  v112 = (__int128)_XMM13;
  HIDWORD(v112) = 0;
  v26 = v112;
  *(float *)&v26 = axis.m[3].v[0];
  _XMM2 = v26;
  __asm
  {
    vinsertps xmm2, xmm2, xmm5, 10h
    vinsertps xmm2, xmm2, xmm6, 20h ; ' '
  }
  v29 = _mm_shuffle_ps(_XMM13, g_one.v, 68);
  v128 = (*(_OWORD *)&g_one.v ^ _XMM2) & *(_OWORD *)&g_keepW.v ^ _XMM2;
  v30 = _mm_shuffle_ps(_XMM11, _XMM12, 68);
  *(__m128 *)v127.m[0].v = _mm_shuffle_ps(v30, v29, 136);
  *(__m128 *)&v127.row1.y = _mm_shuffle_ps(v30, v29, 221);
  *(vec3_t *)&v112 = axis.m[3];
  v31 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM11, _XMM12, 238), _mm_shuffle_ps(_XMM13, g_one.v, 238), 136);
  Model = DObjGetModel(obj, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  *(_QWORD *)v117.v = Model->baseMat;
  if ( !*(_QWORD *)v117.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 147, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  physicsId = v5->physicsId;
  v34 = 0i64;
  v111 = NULL;
  if ( physicsId > 0 )
  {
    LocalClientNumForDobj = CG_Entity_GetLocalClientNumForDobj(physicsId - 1, obj);
    v36 = LocalClientNumForDobj;
    if ( LocalClientNumForDobj != LOCAL_CLIENT_INVALID && LocalClientNumForDobj < cg_maxLocalClients )
    {
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", LocalClientNumForDobj) )
        __debugbreak();
      if ( (unsigned int)v36 >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v107) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v106) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v106, v107) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[v36] )
      {
        LODWORD(v107) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v107) )
          __debugbreak();
      }
      v111 = CgVehicleSystem::ms_vehicleSystemArray[v36];
    }
  }
  if ( v5->vehicle.boneUsage )
  {
    if ( v5->vehicle.boneUsage == 1 )
    {
      if ( v5->turret.useOnVehicleAngles )
      {
        v37 = v5->vehicle.rotorBoneIndex[10];
        v38 = (float)v5->vehicle.gunTrackMode.leftAngles[0];
        v115.v[1] = (float)v5->vehicle.terrainMode.moveDesires[0] * 0.0054931641;
        v115.v[2] = v38 * 0.0054931641;
        v115.v[0] = 0.0;
        if ( v37 < 0xFE && DObjSetRotTransIndex(obj, partBits, v37) )
        {
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v115, v37);
        }
        v39 = v5->vehicle.rotorBoneIndex[11];
        if ( v39 < 0xFE && DObjSetRotTransIndex(obj, partBits, v5->vehicle.rotorBoneIndex[11]) )
        {
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v115, v39);
        }
        v40 = v5->vehicle.wheelBoneIndex[0];
        v114.v[2] = (float)v5->vehicle.terrainMode.angleDesires * 0.0054931641;
        v114.v[0] = 0.0;
        v114.v[1] = 0.0;
        if ( v40 < 0xFE && DObjSetRotTransIndex(obj, partBits, v40) )
        {
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v114, v40);
        }
        v41 = v5->vehicle.wheelBoneIndex[1];
        if ( v41 < 0xFE && DObjSetRotTransIndex(obj, partBits, v5->vehicle.wheelBoneIndex[1]) )
        {
          LODWORD(v114.v[2]) ^= _xmm;
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v114, v41);
        }
        v42 = v5->vehicle.wheelBoneIndex[4];
        v117.v[2] = (float)v5->vehicle.terrainMode.moveDesires[1] * 0.0054931641;
        v117.v[0] = 0.0;
        v117.v[1] = 0.0;
        if ( v42 < 0xFE && DObjSetRotTransIndex(obj, partBits, v42) )
        {
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v117, v42);
        }
        v43 = v5->vehicle.wheelBoneIndex[5];
        if ( v43 < 0xFE && DObjSetRotTransIndex(obj, partBits, v5->vehicle.wheelBoneIndex[5]) )
        {
          *(float *)&v113 = 0.0;
          *((float *)&v113 + 1) = 0.0;
          *((float *)&v113 + 2) = 0.0;
          DObjSetLocalTagInternal(obj, (const vec3_t *)&v113, &v117, v43);
        }
        v44 = v5->vehicle.rotorBoneIndex[0];
        if ( v44 < obj->numBones + (unsigned int)obj->numClientBones )
        {
          rotorPosition = v5->vehicle.rotorPosition;
          v46 = 0i64;
          *(_QWORD *)&v113 = (char *)&v5->moverFx + 60;
          do
          {
            if ( !DObjSetRotTransIndex(obj, partBits, v44) )
              break;
            v116.v[1] = (float)(__int16)*rotorPosition * 0.0054931641;
            v116.v[0] = 0.0;
            v116.v[2] = 0.0;
            *(float *)&v120 = 0.0;
            *((float *)&v120 + 1) = 0.0;
            *((float *)&v120 + 2) = 0.0;
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v120, &v116, v44);
            v47 = v5->vehicle.rotorBladeBoneIndex[v46];
            if ( v47 < obj->numBones + (unsigned int)obj->numClientBones )
            {
              v48 = &v5->vehicle.wheelSpinAngle[v46 + 9];
              do
              {
                if ( !DObjSetRotTransIndex(obj, partBits, v47) )
                  break;
                v49 = (float)*v48;
                *(float *)&v121 = (float)*(v48 - 11) * 0.0054931641;
                *((float *)&v121 + 2) = v49 * 0.0054931641;
                *((float *)&v121 + 1) = 0.0;
                *(float *)&v112 = 0.0;
                *((float *)&v112 + 1) = 0.0;
                *((float *)&v112 + 2) = 0.0;
                DObjSetLocalTagInternal(obj, (const vec3_t *)&v112, (const vec3_t *)&v121, v47);
                ++v46;
                ++v48;
                v47 = v5->vehicle.rotorBladeBoneIndex[v46];
              }
              while ( v47 < obj->numBones + (unsigned int)obj->numClientBones );
              rotorPosition = (unsigned __int16 *)v113;
            }
            numClientBones = obj->numClientBones;
            ++v34;
            numBones = obj->numBones;
            ++rotorPosition;
            ++v46;
            *(_QWORD *)&v113 = rotorPosition;
            v44 = v5->vehicle.rotorBoneIndex[v34];
          }
          while ( v44 < numBones + numClientBones );
        }
      }
      else
      {
        v52 = *(__m128 *)&v127.row1.y;
        v53 = *(__m128 *)v127.m[0].v;
        v54 = (float)v5->vehicle.wheelFraction[1];
        v55 = v5->vehicle.wheelFraction[2];
        *((float *)&v112 + 1) = (float)v5->vehicle.terrainMode.angleDesires * 0.0054931641;
        v56 = (float)v55;
        v57 = v5->vehicle.wheelFraction[3];
        v58 = (float)((float)(v54 * 0.000015259022) * 2.0) - 1.0;
        v109 = (float)((float)(v56 * 0.000015259022) * 2.0) - 1.0;
        *(float *)&boneIndex = (float)((float)((float)v57 * 0.000015259022) * 2.0) - 1.0;
        *(float *)&v112 = 0.0;
        *((float *)&v112 + 2) = 0.0;
        v116.v[0] = v58;
        do
        {
          v59 = v5->vehicle.rotorBoneIndex[v34 + 2];
          v60 = v5->vehicle.rotorBoneIndex[v34 + 1];
          v61 = v5->vehicle.rotorBoneIndex[v34];
          if ( v59 < 0xFE && DObjSetRotTransIndex(obj, partBits, v5->vehicle.rotorBoneIndex[v34 + 2]) )
          {
            v62 = *(float *)(32i64 * v59 + *(_QWORD *)v117.v + 16);
            HIDWORD(v121) = 0;
            v64 = v121;
            *(float *)&v64 = v62;
            _XMM5 = v64;
            __asm
            {
              vinsertps xmm5, xmm5, xmm1, 10h
              vinsertps xmm5, xmm5, xmm2, 20h ; ' '
            }
            v67 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 0), _XMM11), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 85), _XMM12), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 170), _XMM13)));
            v118 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v53, _mm_shuffle_ps(v67, v67, 0)), _mm128_add_ps(_mm128_mul_ps(v52, _mm_shuffle_ps(v67, v67, 85)), _mm128_mul_ps(v31, _mm_shuffle_ps(v67, v67, 170)))), _XMM5);
            v121 = (__int128)_XMM5;
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v118, (const vec3_t *)&v112, v59);
          }
          if ( (unsigned int)v60 < 0xFE && DObjSetRotTransIndex(obj, partBits, v60) )
          {
            HIDWORD(v120) = 0;
            v68 = (const DObjAnimMat *)(*(_QWORD *)v117.v + 32 * v60);
            v115.v[0] = 0.0;
            v115.v[1] = 0.0;
            v115.v[2] = 0.0;
            v70 = v120;
            *(float *)&v70 = v68->trans.v[0];
            _XMM5 = v70;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rcx+14h], 10h
              vinsertps xmm5, xmm5, dword ptr [rcx+18h], 20h ; ' '
            }
            v73 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 0), _XMM11), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 85), _XMM12), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 170), _XMM13)));
            v118 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v53, _mm_shuffle_ps(v73, v73, 0)), _mm128_add_ps(_mm128_mul_ps(v52, _mm_shuffle_ps(v73, v73, 85)), _mm128_mul_ps(v31, _mm_shuffle_ps(v73, v73, 170)))), _XMM5);
            v120 = (__int128)_XMM5;
            LocalConvertQuatToMat(v68, &v126);
            v115.v[0] = (float)((float)((float)((float)(v109 * v126.m[0].v[1]) + (float)(v58 * v126.m[0].v[0])) * (float)v5->vehicle.terrainMode.moveDesires[2]) * 0.0054931641) + v115.v[0];
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v118, &v115, v60);
          }
          if ( (unsigned int)v61 < 0xFE && DObjSetRotTransIndex(obj, partBits, v61) )
          {
            HIDWORD(v113) = 0;
            v74 = (const DObjAnimMat *)(*(_QWORD *)v117.v + 32 * v61);
            v114.v[0] = 0.0;
            v114.v[1] = 0.0;
            v76 = v113;
            *(float *)&v76 = v74->trans.v[0];
            _XMM5 = v76;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rbx+14h], 10h
              vinsertps xmm5, xmm5, dword ptr [rbx+18h], 20h ; ' '
            }
            v79 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 0), _XMM11), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 85), _XMM12), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 170), _XMM13)));
            v118 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v53, _mm_shuffle_ps(v79, v79, 0)), _mm128_add_ps(_mm128_mul_ps(v52, _mm_shuffle_ps(v79, v79, 85)), _mm128_mul_ps(v31, _mm_shuffle_ps(v79, v79, 170)))), _XMM5);
            v114.v[2] = 0.0;
            v113 = (__int128)_XMM5;
            LocalConvertQuatToMat(v74, &v126);
            QuatToAxis(&v74->quat, &v127);
            AxisToAngles(&v127, &v114);
            v80 = (float)v5->vehicle.terrainMode.moveDesires[2] * 0.0054931641;
            *(double *)v79.m128_u64 = I_fclamp((float)((float)(v109 * v126.m[1].v[1]) + (float)(v116.v[0] * v126.m[1].v[0])) + *(float *)&boneIndex, -1.0, 1.0);
            v114.v[2] = v114.v[2] - (float)(v79.m128_f32[0] * v80);
            DObjSetLocalTagInternal(obj, (const vec3_t *)&v118, &v114, v61);
            v58 = v116.v[0];
          }
          v34 += 3i64;
        }
        while ( v34 < 24 );
      }
    }
LABEL_122:
    if ( v111 )
      CgVehicleAnimSystem::DoPose(&v111->m_vehicleAnimSystem, obj, v5, partBits);
    return;
  }
  WheelCount = BGVehicles::GetWheelCount(NULL);
  v82 = 2i64;
  v83 = WheelCount;
  steerYaw = (float)v5->vehicle.steerYaw;
  v109 = *(float *)&WheelCount;
  *(_QWORD *)v115.v = WheelCount + 4;
  v85 = steerYaw * 0.0054931641;
  if ( WheelCount + 4 > 0 )
  {
    *(_QWORD *)v116.v = WheelCount;
    *(_QWORD *)&v113 = &v5->moverFx + 3;
    v86 = WheelCount;
    v87 = 0i64;
    while ( 1 )
    {
      v88 = (int)v34 < v83;
      v89 = v87 - v86;
      if ( (int)v34 < v83 )
        v89 = v87;
      if ( (int)v34 >= v83 )
        v90 = v5->vehicle.otherWheelBoneIndex[v89];
      else
        v90 = v5->vehicle.wheelBoneIndex[v87];
      if ( v90 >= 0xFEu )
        goto LABEL_111;
      v91 = (float)v5->vehicle.wheelSpinAngle[v89] * 0.0054931641;
      if ( (int)v34 >= v83 )
        spinWheelBones = 2;
      else
        spinWheelBones = v5->vehicle.spinWheelBones;
      if ( !spinWheelBones )
        goto LABEL_92;
      v93 = spinWheelBones - 1;
      if ( !v93 )
        break;
      if ( v93 == 1 )
        v119.v[0] = (float)v5->vehicle.wheelSpinAngle[v89] * 0.0054931641;
LABEL_93:
      boneIndex = v90;
      if ( DObjSetRotTransIndex(obj, partBits, v90) )
      {
        v94 = (float *)(*(_QWORD *)v117.v + 32i64 * v90);
        if ( v88 )
          v95 = I_fclamp(1.0 - (float)((float)*(unsigned __int16 *)v113 * 0.000015259022), 0.0, 1.0);
        else
          LODWORD(v95) = 0;
        wheelSteeringRatioMaxIndex = v5->vehicle.wheelSteeringRatioMaxIndex;
        v118.m128_f32[0] = (float)((float)(*(float *)&v95 * v12) * 0.0) + v94[4];
        v118.m128_f32[1] = (float)((float)(*(float *)&v95 * v12) * 0.0) + v94[5];
        v118.m128_f32[2] = (float)((float)(*(float *)&v95 * v12) * 1.0) + v94[6];
        v118.m128_f32[0] = v118.m128_f32[0] - v94[4];
        v118.m128_f32[1] = v118.m128_f32[1] - v94[5];
        v118.m128_f32[2] = v118.m128_f32[2] - v94[6];
        if ( (unsigned int)v34 <= wheelSteeringRatioMaxIndex )
        {
          if ( (unsigned int)v34 >> 1 )
          {
            v97 = (float)v5->vehicle.wheelSteeringRatioDecay * 0.000015259022;
            if ( (unsigned int)v34 >> 1 != 1 )
            {
              v98 = (float)((unsigned int)v34 >> 1);
              v99 = I_fclamp(v97, 0.0, 1.0);
              v97 = powf_0(v98, *(float *)&v99);
            }
          }
          else
          {
            v97 = FLOAT_1_0;
          }
        }
        else
        {
          v97 = 0.0;
        }
        v100 = (float)(v97 * v85) < 0.0;
        v119.v[1] = v97 * v85;
        if ( (float)(v97 * v85) <= 0.0 )
        {
LABEL_106:
          if ( v100 && !(_DWORD)v34 )
            goto LABEL_108;
        }
        else
        {
          if ( (_DWORD)v34 != 1 )
          {
            v100 = (float)(v97 * v85) < 0.0;
            goto LABEL_106;
          }
LABEL_108:
          v101 = I_fclamp((float)v5->vehicle.steerYawAckermannRatio * 0.0054931641, 1.0, 10.0);
          v119.v[1] = v119.v[1] / *(float *)&v101;
        }
        v119.v[2] = 0.0;
        DObjSetLocalTagInternal(obj, (const vec3_t *)&v118, &v119, boneIndex);
      }
      v86 = *(_QWORD *)v116.v;
      v83 = LODWORD(v109);
LABEL_111:
      *(_QWORD *)&v113 = v113 + 2;
      LODWORD(v34) = v34 + 1;
      if ( ++v87 >= *(__int64 *)v115.v )
      {
        v82 = 2i64;
        goto LABEL_113;
      }
    }
    childIndex[0] = v90;
    if ( DObjGetNextChildBoneIndex(obj, v90, childIndex) && v90 != childIndex[0] && v91 != 0.0 && DObjSetRotTransIndex(obj, partBits, childIndex[0]) )
    {
      *(float *)&v112 = v91;
      *((float *)&v112 + 1) = 0.0;
      *((float *)&v112 + 2) = 0.0;
      DObjSetLocalTagInternal(obj, &vec3_origin, (const vec3_t *)&v112, childIndex[0]);
    }
LABEL_92:
    v119.v[0] = 0.0;
    goto LABEL_93;
  }
LABEL_113:
  animCtrl = v5->player.animCtrl;
  if ( animCtrl < 0xFEu && DObjSetRotTransIndex(obj, partBits, animCtrl) )
  {
    v103 = v5->player.animCtrl;
    *(float *)&v112 = v85;
    *((float *)&v112 + 1) = 0.0;
    *((float *)&v112 + 2) = 0.0;
    DObjSetLocalTagInternal(obj, &vec3_origin, (const vec3_t *)&v112, v103);
  }
  if ( v111 )
  {
    tbaAnimIds = v5->vehicle.treadAnimInfo.tbaAnimIds;
    v105 = v111;
    do
    {
      if ( *tbaAnimIds )
        CgVehicleSystem::TreadBoneAnimDoPose(v105, *tbaAnimIds, &axis, obj, partBits);
      ++tbaAnimIds;
      --v82;
    }
    while ( v82 );
    v5 = *(const cpose_t **)v114.v;
    goto LABEL_122;
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
  __int64 v7; 
  Ragdoll *v8; 
  unsigned __int8 ragdollFlags; 
  int v10; 
  int v11; 

  killcamRagdollHandle = pose->killcamRagdollHandle;
  if ( !killcamRagdollHandle )
    killcamRagdollHandle = pose->ragdollHandle;
  if ( killcamRagdollHandle )
  {
    if ( (unsigned int)(killcamRagdollHandle - 1) >= 0x40 )
    {
      v11 = 64;
      v10 = killcamRagdollHandle - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v7 = killcamRagdollHandle;
    v8 = &g_ragdollBodies[v7 - 1];
    if ( &g_ragdollBodies[v7] == (Ragdoll *)14116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.cpp", 1262, ASSERT_TYPE_ASSERT, "(ragdoll != 0)", (const char *)&queryFormat, "ragdoll != NULL") )
      __debugbreak();
    Ragdoll_ResetAllContactsWithMovers(v8);
    v8->createdOnMovingPlatform = createdOnMovingPlatform;
    ragdollFlags = pose->ragdollFlags | 1;
    pose->ragdollFlags = ragdollFlags;
    if ( killcamActive )
    {
      ragdollFlags |= 8u;
      pose->ragdollFlags = ragdollFlags;
    }
    if ( (ragdollFlags & 2) != 0 )
    {
      Ragdoll_DisablePoseController(killcamRagdollHandle, 0.0);
      ragdollFlags = pose->ragdollFlags;
    }
    if ( (ragdollFlags & 4) != 0 )
      Ragdoll_DisablePoseControllerRoot(killcamRagdollHandle, 0.0);
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
    if ( !killcamRagdollHandle )
      killcamRagdollHandle = pose->ragdollHandle;
    Ragdoll_DisablePoseController(killcamRagdollHandle, ragdoll_poseController_defaultBlendDuration->current.value);
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

