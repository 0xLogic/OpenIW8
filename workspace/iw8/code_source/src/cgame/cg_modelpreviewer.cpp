/*
==============
MdlPrvDrawOverlayGamepad
==============
*/

void __fastcall MdlPrvDrawOverlayGamepad(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?MdlPrvDrawOverlayGamepad@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CG_ModelPreviewerHandleMouseEvents
==============
*/

void __fastcall CG_ModelPreviewerHandleMouseEvents(LocalClientNum_t localClientNum, int dx, int dy)
{
  ?CG_ModelPreviewerHandleMouseEvents@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, dx, dy);
}

/*
==============
CG_ModelPreviewerUpdateView
==============
*/

void __fastcall CG_ModelPreviewerUpdateView(vec3_t *outViewOrigin, tmat33_t<vec3_t> *outViewAxis, vec3_t *outViewAngles, float *zNear)
{
  ?CG_ModelPreviewerUpdateView@@YAXAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@0PEAM@Z(outViewOrigin, outViewAxis, outViewAngles, zNear);
}

/*
==============
CG_ModelPreviewerNeedsVieworgInterpSkipped
==============
*/

bool __fastcall CG_ModelPreviewerNeedsVieworgInterpSkipped(LocalClientNum_t localClientNum)
{
  return ?CG_ModelPreviewerNeedsVieworgInterpSkipped@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ModelPreviewerHandleGamepadEvents
==============
*/

void __fastcall CG_ModelPreviewerHandleGamepadEvents(LocalClientNum_t localClientNum, float forward, float side, float pitch, float yaw)
{
  ?CG_ModelPreviewerHandleGamepadEvents@@YAXW4LocalClientNum_t@@MMMM@Z(localClientNum, forward, side, pitch, yaw);
}

/*
==============
CG_ModelPreviewerHandleKeyEvents
==============
*/

void __fastcall CG_ModelPreviewerHandleKeyEvents(LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  ?CG_ModelPreviewerHandleKeyEvents@@YAXW4LocalClientNum_t@@HHI@Z(localClientNum, key, down, time);
}

/*
==============
CG_ModelPreviewer_RegisterCommonDvars
==============
*/

void CG_ModelPreviewer_RegisterCommonDvars(void)
{
  ?CG_ModelPreviewer_RegisterCommonDvars@@YAXXZ();
}

/*
==============
CG_ModelPreviewerDrawInfo
==============
*/

void __fastcall CG_ModelPreviewerDrawInfo(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?CG_ModelPreviewerDrawInfo@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CG_AddModelPreviewerModel
==============
*/

void __fastcall CG_AddModelPreviewerModel(LocalClientNum_t localClientNum, int frametime)
{
  ?CG_AddModelPreviewerModel@@YAXW4LocalClientNum_t@@H@Z(localClientNum, frametime);
}

/*
==============
CG_ModPrvLoadDObjs
==============
*/

void CG_ModPrvLoadDObjs(void)
{
  ?CG_ModPrvLoadDObjs@@YAXXZ();
}

/*
==============
CG_ModelPreviewerBuildViewPosStr
==============
*/

void __fastcall CG_ModelPreviewerBuildViewPosStr(char *buffer, unsigned int bufferSize)
{
  ?CG_ModelPreviewerBuildViewPosStr@@YAXPEADI@Z(buffer, bufferSize);
}

/*
==============
CG_ModelPreviewerStepAnim
==============
*/

void __fastcall CG_ModelPreviewerStepAnim(float deltaTime)
{
  ?CG_ModelPreviewerStepAnim@@YAXM@Z(deltaTime);
}

/*
==============
CG_ModelPreviewerCreateDevGui
==============
*/

void __fastcall CG_ModelPreviewerCreateDevGui(LocalClientNum_t localClientNum)
{
  ?CG_ModelPreviewerCreateDevGui@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ModelPreviewerEnumerateAssets
==============
*/

void CG_ModelPreviewerEnumerateAssets(void)
{
  ?CG_ModelPreviewerEnumerateAssets@@YAXXZ();
}

/*
==============
CG_ModelPreviewerFrame
==============
*/

void __fastcall CG_ModelPreviewerFrame(const cg_t *cgameGlob)
{
  ?CG_ModelPreviewerFrame@@YAXPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_ModelPreviewerPauseAnim
==============
*/

void CG_ModelPreviewerPauseAnim(void)
{
  ?CG_ModelPreviewerPauseAnim@@YAXXZ();
}

/*
==============
CG_ModPrvSaveDObjs
==============
*/

void CG_ModPrvSaveDObjs(void)
{
  ?CG_ModPrvSaveDObjs@@YAXXZ();
}

/*
==============
CG_ModelPreviewerDestroyDevGui
==============
*/

void CG_ModelPreviewerDestroyDevGui(void)
{
  ?CG_ModelPreviewerDestroyDevGui@@YAXXZ();
}

/*
==============
CG_AddModelPreviewerModel
==============
*/
void CG_AddModelPreviewerModel(LocalClientNum_t localClientNum, int frametime, bool a3)
{
  DObj *currentObj; 
  const XAnimTree *Tree; 
  __int64 v59; 
  float bUseGoalWeight; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v77; 
  GfxSceneHudOutlineInfo v78; 
  __int64 v79; 
  vec3_t v80; 
  vec2_t v81; 
  vec4_t v82; 
  vec3_t v83; 
  vec2_t rot; 
  vec3_t trans; 
  GfxSceneHudOutlineInfo quat; 
  tmat33_t<vec3_t> axis; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  v79 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  currentObj = g_mdlprv.model.currentObj;
  if ( g_mdlprv.model.currentObj && !modPrvHideModel->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm3, xmm0, cs:__real@3a83126f
      vmovss  xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.stepCounter; ModelPreviewer g_mdlprv
      vsubss  xmm2, xmm1, xmm3
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.stepCounter, xmm2; ModelPreviewer g_mdlprv
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm2, xmm6
    }
    if ( g_mdlprv.anim.isAnimPlaying )
      __asm { vmulss  xmm8, xmm3, dword ptr [rax+28h] }
    else
      __asm { vxorps  xmm8, xmm8, xmm8 }
    if ( modPrvAnimForceLoop->current.enabled )
    {
      CG_ModPrvLoopAnimation();
      currentObj = g_mdlprv.model.currentObj;
    }
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( currentObj )
    {
      Tree = DObjGetTree(currentObj);
      if ( Tree )
      {
        if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
        {
          *(double *)&_XMM0 = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, 1u);
          __asm { vmovaps xmm7, xmm0 }
        }
        if ( g_mdlprv.anim.toCurrentIndex >= 0 )
        {
          _RAX = modPrvAnimCrossBlendTime;
          __asm { vcomiss xmm7, dword ptr [rax+28h] }
          if ( !g_mdlprv.anim.isToAnimPlaying )
          {
            _RAX = modPrvAnimCrossBlendDuration;
            __asm
            {
              vmovss  xmm1, dword ptr [rax+28h]
              vmovss  xmm0, cs:__real@3f800000
              vmovss  [rsp+1C0h+var_180], xmm0
              vmovss  [rsp+1C0h+var_188], xmm1
              vmovss  dword ptr [rsp+1C0h+bUseGoalWeight], xmm0
            }
            XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, bUseGoalWeight, v71, v72, (scr_string_t)0, 1, LINEAR);
            g_mdlprv.anim.isToAnimPlaying = 1;
          }
        }
      }
      if ( g_mdlprv.model.currentObj && DObjGetTree(g_mdlprv.model.currentObj) && modPrvAnimApplyDelta->current.enabled && g_mdlprv.anim.isAnimPlaying )
      {
        __asm
        {
          vmovss  dword ptr [rbp+0C0h+rot], xmm6
          vmovss  dword ptr [rbp+0C0h+rot+4], xmm6
          vmovss  dword ptr [rbp+0C0h+var_E8], xmm6
          vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm6
          vmovss  dword ptr [rbp+0C0h+trans], xmm6
          vmovss  dword ptr [rbp+0C0h+trans+4], xmm6
          vmovss  dword ptr [rbp+0C0h+trans+8], xmm6
          vmovss  dword ptr [rbp+0C0h+var_F8], xmm6
          vmovss  dword ptr [rbp+0C0h+var_F8+4], xmm6
          vmovss  dword ptr [rbp+0C0h+var_F8+8], xmm6
        }
        if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
          XAnimCalcDelta(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, &rot, &trans, 1);
        if ( g_mdlprv.anim.toCurrentIndex >= 0 )
          XAnimCalcDelta(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, &v81, &v80, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0C0h+var_E8]
          vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+rot]
          vmovss  dword ptr [rbp+0C0h+var_E8], xmm1
          vmovss  xmm2, dword ptr [rbp+0C0h+var_E8+4]
          vaddss  xmm0, xmm2, dword ptr [rbp+0C0h+rot+4]
          vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm0
        }
        *(double *)&_XMM0 = RotationToYaw(&v81);
        __asm { vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw, xmm0; ModelPreviewer g_mdlprv }
        _RAX = modPrvRotationAngles;
        __asm
        {
          vmovss  xmm1, dword ptr [rax+28h]
          vmovss  dword ptr [rbp+0C0h+var_E0], xmm1
          vmovss  xmm2, dword ptr [rax+30h]
          vmovss  dword ptr [rbp+0C0h+var_E0+8], xmm2
          vaddss  xmm0, xmm0, cs:__real@43340000
          vaddss  xmm0, xmm0, dword ptr [rax+2Ch]
          vmovss  dword ptr [rbp+0C0h+var_E0+4], xmm0
        }
        AnglesToQuat((const vec3_t *)&v82, (vec4_t *)&quat);
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0C0h+quat]
          vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
          vmovss  xmm0, dword ptr [rbp+0C0h+trans]
          vaddss  xmm2, xmm0, dword ptr [rbp+0C0h+var_F8]
          vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm1, xmm2, xmm3
          vmovss  dword ptr [rbp+0C0h+var_F8], xmm1
          vmovss  xmm0, dword ptr [rbp+0C0h+var_F8+4]
          vaddss  xmm2, xmm0, dword ptr [rbp+0C0h+trans+4]
          vxorps  xmm1, xmm2, xmm3
          vmovss  dword ptr [rbp+0C0h+var_F8+4], xmm1
          vmovss  xmm0, dword ptr [rbp+0C0h+var_F8+8]
          vaddss  xmm2, xmm0, dword ptr [rbp+0C0h+trans+8]
          vxorps  xmm1, xmm2, xmm3
          vmovss  dword ptr [rbp+0C0h+var_F8+8], xmm1
        }
        GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
          vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+var_F8]
          vmovss  dword ptr [rsp+1C0h+outOrigin], xmm1
          vmovss  xmm2, dword ptr [rsp+1C0h+outOrigin+4]
          vaddss  xmm0, xmm2, dword ptr [rbp+0C0h+var_F8+4]
          vmovss  dword ptr [rsp+1C0h+outOrigin+4], xmm0
          vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+8]
          vaddss  xmm2, xmm1, dword ptr [rbp+0C0h+var_F8+8]
          vmovss  dword ptr [rsp+1C0h+outOrigin+8], xmm2
        }
        GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
    __asm { vmovaps xmm2, xmm8 }
    DObjUpdateClientInfo((DObj *)&v77, *(float *)&_XMM1, a3, 0);
    CG_Pose_ClearPose(&g_mdlprv.model.pose);
    g_mdlprv.model.pose.eType = 29;
    g_mdlprv.model.currentEntity.info.pose = &g_mdlprv.model.pose;
    CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat; ModelPreviewer g_mdlprv
      vmovups xmmword ptr [rbp+0C0h+var_E0], xmm0
    }
    UnitQuatToAxis(&v82, &axis);
    AxisToAngles(&axis, &g_mdlprv.model.pose.angles);
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &inOrigin);
    CG_SetPoseOrigin(&g_mdlprv.model.pose, &inOrigin);
    if ( modPrvDrawBoneInfo->current.integer > 0 )
      CG_ModPrvDrawBones(localClientNum);
    CG_GetPoseOrigin(g_mdlprv.model.currentEntity.info.pose, &inOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+inOrigin]
      vmovss  [rbp+0C0h+var_D0], xmm0
      vmovss  xmm1, dword ptr [rsp+1C0h+inOrigin+4]
      vmovss  [rbp+0C0h+var_CC], xmm1
      vmovss  xmm7, cs:__real@40800000
      vaddss  xmm1, xmm7, dword ptr [rsp+1C0h+inOrigin+8]
      vmovss  [rbp+0C0h+var_C8], xmm1
      vmovups ymm2, ymmword ptr cs:NULL_HUDOUTLINE_INFO_4.color
      vmovups ymmword ptr [rbp+0C0h+quat], ymm2
    }
    quat.characterEVOffset = NULL_HUDOUTLINE_INFO_4.characterEVOffset;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_3.scrollRateX
      vmovups [rbp+0C0h+var_130], ymm0
    }
    v78.characterEVOffset = NULL_SHADER_OVERRIDE_3.atlasTime;
    __asm { vmovss  [rsp+1C0h+var_180], xmm6 }
    CG_Entity_AddDObjToScene(localClientNum, g_mdlprv.model.currentObj, g_mdlprv.model.currentEntity.info.pose, 0x844u, 0, (shaderOverride_t *)&v78, &quat, &v83, v73, 0);
    if ( !g_mdlprv.model.inited )
    {
      g_mdlprv.model.inited = 1;
      *(double *)&_XMM0 = DObjGetRadius(g_mdlprv.model.currentObj);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+1C0h+inOrigin]
        vmovss  dword ptr [rbp+0C0h+quat], xmm1
        vmovss  xmm2, dword ptr [rsp+1C0h+inOrigin+4]
        vmovss  dword ptr [rbp+0C0h+quat+4], xmm2
        vmovss  xmm1, dword ptr [rsp+1C0h+inOrigin+8]
        vmovss  dword ptr [rbp+0C0h+quat+8], xmm1
        vmovss  dword ptr [rbp+0C0h+quat+0Ch], xmm0
        vmovss  dword ptr [rbp+0C0h+quat+10h], xmm0
        vmovss  dword ptr [rbp+0C0h+quat+14h], xmm0
      }
      GfxSceneEntity_SetBounds(&g_mdlprv.model.currentEntity.cull, (const Bounds *)&quat);
      FrameModel();
      memset(&quat, 0, 24);
    }
    _RDI = &g_mdlprv.model.clones[0].pose;
    v59 = 10i64;
    do
    {
      if ( *((_QWORD *)&_RDI[-1].moverFx + 15) )
      {
        CG_Pose_ClearPose(_RDI);
        _RDI->eType = 29;
        *((_QWORD *)&_RDI[-1].moverFx + 12) = _RDI;
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi-58Ch]
          vmovups xmmword ptr [rbp+0C0h+var_E0], xmm0
        }
        UnitQuatToAxis(&v82, &axis);
        AxisToAngles(&axis, &_RDI->angles);
        GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)&_RDI[-5].ragdollFlags, &inOrigin);
        CG_SetPoseOrigin(_RDI, &inOrigin);
        CG_GetPoseOrigin(*((const cpose_t **)&_RDI[-1].moverFx + 12), &inOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1C0h+inOrigin]
          vmovss  [rbp+0C0h+var_D0], xmm0
          vmovss  xmm1, dword ptr [rsp+1C0h+inOrigin+4]
          vmovss  [rbp+0C0h+var_CC], xmm1
          vaddss  xmm2, xmm7, dword ptr [rsp+1C0h+inOrigin+8]
          vmovss  [rbp+0C0h+var_C8], xmm2
          vmovups ymm1, ymmword ptr cs:NULL_HUDOUTLINE_INFO_4.color
          vmovups [rbp+0C0h+var_130], ymm1
        }
        v78.characterEVOffset = NULL_HUDOUTLINE_INFO_4.characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_3.scrollRateX
          vmovups ymmword ptr [rbp+0C0h+quat], ymm0
        }
        quat.characterEVOffset = NULL_SHADER_OVERRIDE_3.atlasTime;
        __asm { vmovss  [rsp+1C0h+var_180], xmm6 }
        CG_Entity_AddDObjToScene(localClientNum, *((const DObj **)&_RDI[-1].moverFx + 15), *((const cpose_t **)&_RDI[-1].moverFx + 12), 0x844u, 0, (shaderOverride_t *)&quat, &v78, &v83, v74, 0);
      }
      _RDI = (cpose_t *)((char *)_RDI + 2056);
      --v59;
    }
    while ( v59 );
    memset(&inOrigin, 0, sizeof(inOrigin));
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ModPrvAnimRecentAccept
==============
*/
void CG_ModPrvAnimRecentAccept(const dvar_t *dvar, int *currentIndex)
{
  int v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  const dvar_t *v15; 
  __int64 v16; 
  const dvar_t **v17; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2626, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !currentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2627, ASSERT_TYPE_ASSERT, "(currentIndex)", (const char *)&queryFormat, "currentIndex") )
    __debugbreak();
  Dvar_ClearModified(dvar);
  v4 = 0;
  v5 = Dvar_EnumToString(dvar);
  if ( g_mdlprv.system.animCount > 0 )
  {
    v6 = 0i64;
    do
    {
      v7 = 0x7FFFFFFFi64;
      v8 = g_mdlprv.system.animNames[v6];
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = v5 - v8;
      while ( 1 )
      {
        v10 = (unsigned __int8)v8[v9];
        v11 = v7;
        v12 = *(unsigned __int8 *)v8++;
        --v7;
        if ( !v11 )
        {
LABEL_24:
          *currentIndex = v4;
          CG_ModPrvLoadAnimations(v5);
          return;
        }
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            break;
        }
        if ( !v10 )
          goto LABEL_24;
      }
      ++v4;
      ++v6;
    }
    while ( v4 < g_mdlprv.system.animCount );
  }
  if ( dvar != modPrvFromAnimMru && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2644, ASSERT_TYPE_SANITY, "( ( dvar == modPrvFromAnimMru || dvar == modPrvFromAnimMru ) )", "( dvar->name ) = %s", dvar->name) )
    __debugbreak();
  Com_Printf(14, "Model previewer could not load <%s> because it does not exist.\n ", v5);
  v15 = modPrvFromAnimMru;
  if ( !modPrvFromAnimMru && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 433, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  v16 = v15->current.integer + 1i64;
  if ( v16 < 4 )
  {
    v17 = &g_mdlprv.anim.mruNames[v16];
    do
    {
      Dvar_SetString_Internal(*(v17 - 1), (*v17)->current.string);
      ++v17;
    }
    while ( (__int64)v17 < (__int64)g_mdlprv.anim.mruNameTable );
  }
  Dvar_SetString_Internal(g_mdlprv.anim.mruNames[3], (const char *)&queryFormat.fmt + 3);
  UpdateMru(g_mdlprv.anim.mruNames, g_mdlprv.anim.mruNameTable, v15);
  Dvar_UpdateEnumDomain(modPrvToAnimMru, g_mdlprv.anim.mruNameTable);
}

/*
==============
CG_ModPrvCompareString
==============
*/
bool CG_ModPrvCompareString(const char *string1, const char *string2)
{
  return I_stricmp(string1, string2) < 0;
}

/*
==============
CG_ModPrvDrawBones
==============
*/
void CG_ModPrvDrawBones(const LocalClientNum_t localClientNum)
{
  int integer; 
  _BOOL8 v11; 
  int NumModels; 
  int v14; 
  char v15; 
  const char *v18; 
  int v20; 
  int v21; 
  int v22; 
  const XModel *Model; 
  int numBones; 
  int numRootBones; 
  const char *BoneName; 
  int v29; 
  __int64 v30; 
  const char *v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  cg_t *LocalClientGlobals; 
  char v66; 
  const char *v74; 
  int v78; 
  int v79; 
  int v81; 
  _BOOL8 v82; 
  _BOOL8 v83; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  vec3_t end; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> v88; 

  if ( !g_mdlprv.model.currentObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2304, ASSERT_TYPE_ASSERT, "(g_mdlprv.model.currentObj)", (const char *)&queryFormat, "g_mdlprv.model.currentObj") )
    __debugbreak();
  integer = modPrvDrawBoneInfo->current.integer;
  if ( integer )
  {
    __asm { vmovaps [rsp+198h+var_88], xmm11 }
    v11 = ((integer - 1) & 0xFFFFFFFD) == 0;
    __asm { vmovaps [rsp+198h+var_98], xmm12 }
    v82 = v11;
    v83 = (unsigned int)(integer - 2) <= 1;
    NumModels = DObjGetNumModels(g_mdlprv.model.currentObj);
    __asm
    {
      vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
      vcomiss xmm0, cs:__real@41200000
    }
    v14 = NumModels;
    v81 = NumModels;
    if ( v15 )
    {
      __asm { vmovss  xmm12, cs:__real@3d4ccccd }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@40600000
        vmulss  xmm12, xmm0, cs:__real@3a03126f
      }
    }
    if ( modPrvDrawBoneInfo->current.integer < 4u )
      v18 = NULL;
    else
      v18 = Dvar_EnumToString(modPrvDrawBoneInfo);
    __asm { vmovss  xmm11, cs:__real@3f51b3f2 }
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v79 = 0;
    v78 = 0;
    if ( v14 > 0 )
    {
      __asm
      {
        vmovaps [rsp+198h+var_38], xmm6
        vmovaps [rsp+198h+var_48], xmm7
        vmovaps [rsp+198h+var_58], xmm8
        vmovaps [rsp+198h+var_68], xmm9
        vmovaps [rsp+198h+var_78], xmm10
        vmovaps [rsp+198h+var_A8], xmm13
        vmovss  xmm13, cs:__real@3f800000
        vmovaps [rsp+198h+var_B8], xmm14
        vmovss  xmm14, cs:__real@80000000
      }
      do
      {
        Model = DObjGetModel(g_mdlprv.model.currentObj, v22);
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        numBones = Model->numBones;
        numRootBones = Model->numRootBones;
        if ( numRootBones < (unsigned int)numBones )
        {
          do
          {
            BoneName = CG_ModPrvModelGetBoneName(g_mdlprv.model.currentObj, v22, numRootBones);
            CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, numRootBones, &outTagMat, &outOrigin);
            v29 = numRootBones - Model->parentList[numRootBones - Model->numRootBones];
            if ( v29 >= 0 && v29 < Model->numBones )
            {
              CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, v29, &v88, &end);
              CL_AddDebugLine(&outOrigin, &end, &colorWhite, 0, 0, 0);
            }
            if ( modPrvDrawBoneInfo->current.integer < 4u )
            {
LABEL_37:
              if ( (!strncmp(BoneName, "tag_", 4ui64) || !v83) && (strncmp(BoneName, "tag_", 4ui64) || !v11) )
                goto LABEL_44;
            }
            else
            {
              v30 = 0x7FFFFFFFi64;
              v31 = BoneName;
              if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              if ( !BoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                __debugbreak();
              do
              {
                v32 = (unsigned __int8)v31[v18 - BoneName];
                v33 = v30;
                v34 = *(unsigned __int8 *)v31++;
                --v30;
                if ( !v33 )
                  break;
                if ( v32 != v34 )
                {
                  v35 = v32 + 32;
                  if ( (unsigned int)(v32 - 65) > 0x19 )
                    v35 = v32;
                  v32 = v35;
                  v36 = v34 + 32;
                  if ( (unsigned int)(v34 - 65) > 0x19 )
                    v36 = v34;
                  if ( v32 != v36 )
                  {
                    v20 = v79;
                    v11 = v82;
                    goto LABEL_37;
                  }
                }
              }
              while ( v32 );
            }
            __asm { vmovaps xmm3, xmm12; size }
            CL_AddOrientedDebugStar(&outOrigin, &outTagMat, &colorGreen, *(float *)&_XMM3, 0, 0);
            _RAX = CG_GetLocalClientGlobals(localClientNum);
            __asm
            {
              vmovss  xmm9, dword ptr [rax+6944h]
              vmovss  xmm8, dword ptr [rax+6948h]
              vmovss  xmm10, dword ptr [rax+694Ch]
            }
            LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
            RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+198h+outOrigin]
              vsubss  xmm7, xmm0, dword ptr [rsp+198h+outOrg]
              vmovss  xmm1, dword ptr [rsp+198h+outOrigin+4]
              vsubss  xmm4, xmm1, dword ptr [rsp+198h+outOrg+4]
              vmovss  xmm0, dword ptr [rsp+198h+outOrigin+8]
              vsubss  xmm6, xmm0, dword ptr [rsp+198h+outOrg+8]
              vmulss  xmm2, xmm4, xmm4
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcmpless xmm0, xmm1, xmm14
              vblendvps xmm0, xmm1, xmm13, xmm0
              vdivss  xmm5, xmm13, xmm0
              vmulss  xmm0, xmm5, xmm4
              vmulss  xmm1, xmm5, xmm7
              vmulss  xmm2, xmm1, xmm9
              vmulss  xmm3, xmm0, xmm8
              vmulss  xmm0, xmm5, xmm6
              vmulss  xmm1, xmm0, xmm10
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, xmm11
            }
            if ( v15 | v66 )
            {
              v20 = v79;
LABEL_44:
              v21 = v78;
              goto LABEL_45;
            }
            v20 = numRootBones;
            v79 = numRootBones;
            v21 = v22;
            v78 = v22;
            __asm { vmovaps xmm11, xmm2 }
LABEL_45:
            v11 = v82;
            ++numRootBones;
          }
          while ( numRootBones < numBones );
        }
        ++v22;
      }
      while ( v22 < v81 );
      __asm
      {
        vmovaps xmm14, [rsp+198h+var_B8]
        vmovaps xmm13, [rsp+198h+var_A8]
        vmovaps xmm10, [rsp+198h+var_78]
        vmovaps xmm9, [rsp+198h+var_68]
        vmovaps xmm8, [rsp+198h+var_58]
        vmovaps xmm7, [rsp+198h+var_48]
        vmovaps xmm6, [rsp+198h+var_38]
      }
    }
    v74 = CG_ModPrvModelGetBoneName(g_mdlprv.model.currentObj, v21, v20);
    CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, v20, &outTagMat, &outOrigin);
    __asm { vmovaps xmm2, xmm12; scale }
    CL_AddDebugString(&outOrigin, &colorGreen, *(float *)&_XMM2, v74, 0, 1);
    __asm
    {
      vmovaps xmm12, [rsp+198h+var_98]
      vmovaps xmm11, [rsp+198h+var_88]
    }
  }
}

/*
==============
CG_ModPrvEnumerateAnimations
==============
*/
void CG_ModPrvEnumerateAnimations()
{
  HunkUser *v0; 
  int inData[2]; 
  const char *v2; 

  CG_ModPrvFreeAnimNames();
  g_mdlprv.system.animCount = DB_GetAllXAssetOfType(ASSET_TYPE_XANIMPARTS, NULL, 0x7FFFFFFF);
  if ( g_mdlprv.system.animCount )
  {
    v0 = Mem_HunkUser_Create(0x200000ui64, "CG_ModPrvEnumerateAnimations", TRACK_DEBUG, MEM_ALLOC_FLAG_NONE);
    g_mdlprv.system.animNames = (const char **)Mem_HunkUser_AllocInternal(v0, 8i64 * (g_mdlprv.system.animCount + 2), 8ui64, "CG_ModPrvEnumerateAnimations_FastFile");
    *g_mdlprv.system.animNames++ = (const char *)v0;
    inData[1] = 7;
    inData[0] = 0;
    v2 = "CG_ModPrvEnumerateAnimations";
    DB_EnumXAssets(ASSET_TYPE_XANIMPARTS, CG_ModPrvGetAssetName, inData, 0);
    std::_Sort_unchecked<char const * *,bool (*)(char const *,char const *)>(g_mdlprv.system.animNames, &g_mdlprv.system.animNames[g_mdlprv.system.animCount], g_mdlprv.system.animCount, CG_ModPrvCompareString);
  }
}

/*
==============
CG_ModPrvEnumerateModels
==============
*/
void CG_ModPrvEnumerateModels()
{
  HunkUser *v0; 
  int inData[2]; 
  const char *v2; 

  if ( g_mdlprv.system.modelNames )
  {
    Dvar_UpdateEnumDomain(modPrvLoadModel, g_emptyEnumList);
    Mem_HunkUser_Destroy(*((HunkUser **)g_mdlprv.system.modelNames - 1));
    g_mdlprv.system.modelNames = NULL;
  }
  g_mdlprv.system.modelCount = 0;
  g_mdlprv.system.modelCount = DB_GetAllXAssetOfType(ASSET_TYPE_XMODEL, NULL, 0x7FFFFFFF);
  if ( g_mdlprv.system.modelCount )
  {
    v0 = Mem_HunkUser_Create(0x100000ui64, "CG_ModPrvEnumerateModels", TRACK_DEBUG, MEM_ALLOC_FLAG_NONE);
    g_mdlprv.system.modelNames = (const char **)Mem_HunkUser_AllocInternal(v0, 8i64 * (g_mdlprv.system.modelCount + 2), 8ui64, "CG_ModPrvEnumerateModels_FastFile");
    *g_mdlprv.system.modelNames++ = (const char *)v0;
    inData[1] = 9;
    inData[0] = 0;
    v2 = "CG_ModPrvEnumerateModels";
    DB_EnumXAssets(ASSET_TYPE_XMODEL, CG_ModPrvGetAssetName, inData, 0);
    std::_Sort_unchecked<char const * *,bool (*)(char const *,char const *)>(g_mdlprv.system.modelNames, &g_mdlprv.system.modelNames[g_mdlprv.system.modelCount], g_mdlprv.system.modelCount, CG_ModPrvCompareString);
  }
}

/*
==============
CG_ModPrvFreeAnimNames
==============
*/
__int64 CG_ModPrvFreeAnimNames()
{
  __int64 result; 

  if ( g_mdlprv.system.animNames )
  {
    Dvar_UpdateEnumDomain(modPrvLoadFromAnim, g_emptyEnumList);
    Dvar_UpdateEnumDomain(modPrvLoadToAnim, g_emptyEnumList);
    Mem_HunkUser_Destroy(*((HunkUser **)g_mdlprv.system.animNames - 1));
    result = 0i64;
    g_mdlprv.system.animNames = NULL;
  }
  else
  {
    result = 0i64;
  }
  g_mdlprv.system.animCount = 0;
  return result;
}

/*
==============
CG_ModPrvGetAssetName
==============
*/
void CG_ModPrvGetAssetName(XAssetHeader header, void *data)
{
  int v4; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 775, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v4 = *((_DWORD *)data + 1);
  if ( v4 == 9 )
  {
    if ( !header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    g_mdlprv.system.modelNames[(*(_DWORD *)data)++] = Mem_HunkUser_CopyStringInternal(*((HunkUser **)g_mdlprv.system.modelNames - 1), header.physicsLibrary->name, "CG_ModPrvGetAssetName");
    v4 = *((_DWORD *)data + 1);
  }
  if ( v4 == 7 )
    g_mdlprv.system.animNames[(*(_DWORD *)data)++] = Mem_HunkUser_CopyStringInternal(*((HunkUser **)g_mdlprv.system.animNames - 1), header.physicsLibrary->name, "CG_ModPrvGetAssetName");
}

/*
==============
CG_ModPrvLoadAnimations
==============
*/

void __fastcall CG_ModPrvLoadAnimations(const char *animationFilename, double _XMM1_8)
{
  const XAnimTree *Tree; 
  XAnimTree *v6; 
  XAnim_s *Anims; 
  XAnimOwner v8; 
  XAnimTree *v9; 
  int fromCurrentIndex; 
  XAnimSyncGroupID syncGroup; 
  float syncGroupa; 
  float syncGroupb; 
  float allowAllocs; 
  float allowAllocsa; 
  float v29; 
  float v30; 
  vec3_t origin; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( g_mdlprv.model.currentObj )
  {
    Tree = DObjGetTree(g_mdlprv.model.currentObj);
    v6 = (XAnimTree *)Tree;
    if ( Tree )
    {
      XAnimGetAnims(Tree);
      XAnimFreeTree(v6, NULL);
      DObjSetTree(g_mdlprv.model.currentObj, NULL);
      if ( !g_modPrvHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2394, ASSERT_TYPE_ASSERT, "(g_modPrvHunkUser)", (const char *)&queryFormat, "g_modPrvHunkUser") )
        __debugbreak();
      Mem_HunkUser_Destroy(g_modPrvHunkUser);
      g_modPrvHunkUser = NULL;
    }
    else if ( g_modPrvHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2399, ASSERT_TYPE_ASSERT, "(!g_modPrvHunkUser)", (const char *)&queryFormat, "!g_modPrvHunkUser") )
    {
      __debugbreak();
    }
    g_modPrvHunkUser = Mem_HunkUser_Create(0x100000ui64, "CG_ModPrvLoadAnimations", TRACK_DEBUG, MEM_ALLOC_FLAG_NONE);
    XAnimAcquireMemoryLocks();
    Anims = XAnimCreateAnims("ModelPreviewer", 3, ModPrvAlloc);
    if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2407, ASSERT_TYPE_ASSERT, "(xAnims)", (const char *)&queryFormat, "xAnims") )
      __debugbreak();
    LOBYTE(syncGroup) = 4;
    XAnimBlend(Anims, 0, "root", 1u, 2u, 0, syncGroup, 1);
    if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
      BG_CreateXAnim(Anims, 1u, g_mdlprv.system.animNames[g_mdlprv.anim.fromCurrentIndex], 1);
    if ( g_mdlprv.anim.toCurrentIndex >= 0 )
      BG_CreateXAnim(Anims, 2u, g_mdlprv.system.animNames[g_mdlprv.anim.toCurrentIndex], 1);
    LOBYTE(v8) = 1;
    v9 = XAnimCreateTree(Anims, ModPrvAlloc, v8);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2419, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    XanimReleaseMemoryLocks();
    DObjSetTree(g_mdlprv.model.currentObj, v9);
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
    if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
    {
      if ( g_mdlprv.anim.toCurrentIndex >= 0 && modPrvAnimBlendMode->current.integer == 1 )
      {
        _RAX = modPrvAnimBlendWeight;
        __asm { vmovss  xmm0, dword ptr [rax+28h] }
      }
      else
      {
        __asm { vsubss  xmm0, xmm6, dword ptr [rax+28h] }
      }
      __asm
      {
        vmovss  [rsp+98h+var_58], xmm6
        vmovss  dword ptr [rsp+98h+allowAllocs], xmm6
        vmovss  [rsp+98h+syncGroup], xmm0
      }
      XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, syncGroupa, allowAllocs, v29, (scr_string_t)0, 1, LINEAR);
      g_mdlprv.anim.isFromLooped = XAnimIsLooped(Anims, 1u);
      fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
    }
    if ( g_mdlprv.anim.toCurrentIndex >= 0 )
    {
      if ( fromCurrentIndex >= 0 && modPrvAnimBlendMode->current.integer == 1 )
      {
        __asm
        {
          vmovss  [rsp+98h+var_58], xmm6
          vmovss  dword ptr [rsp+98h+allowAllocs], xmm6
          vmovss  [rsp+98h+syncGroup], xmm6
        }
        XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, syncGroupb, allowAllocsa, v30, (scr_string_t)0, 1, LINEAR);
      }
      g_mdlprv.anim.isToLooped = XAnimIsLooped(Anims, 2u);
    }
    if ( animationFilename )
    {
      PushMruEntry(animationFilename, g_mdlprv.anim.mruNames, g_mdlprv.anim.mruNameTable, modPrvFromAnimMru);
      Dvar_UpdateEnumDomain(modPrvToAnimMru, g_mdlprv.anim.mruNameTable);
    }
    g_mdlprv.anim.isToAnimPlaying = 0;
    g_mdlprv.anim.isAnimPlaying = 1;
    __asm
    {
      vmovss  xmm0, cs:__real@7f7fffff
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.stepCounter, xmm0; ModelPreviewer g_mdlprv
      vxorps  xmm1, xmm1, xmm1
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw, xmm1; ModelPreviewer g_mdlprv
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+98h+origin], xmm1
      vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
      vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+98h+origin+4], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
      vaddss  xmm2, xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+98h+origin+8], xmm2
    }
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    memset(&origin, 0, sizeof(origin));
  }
  _R11 = &v32;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CG_ModPrvLoadDObjs
==============
*/
void CG_ModPrvLoadDObjs(__int64 a1, __int64 a2, __int64 a3, XAnimOwner a4)
{
  DObj **p_obj; 
  __int64 v5; 

  p_obj = &g_mdlprv.model.clones[0].obj;
  v5 = 10i64;
  do
  {
    if ( *p_obj )
    {
      LOBYTE(a4) = 1;
      DObjUnarchive(*p_obj, 0, 0, a4);
    }
    p_obj += 257;
    --v5;
  }
  while ( v5 );
  if ( g_mdlprv.model.currentObj )
  {
    LOBYTE(a4) = 1;
    DObjUnarchive(g_mdlprv.model.currentObj, 0, 0, a4);
  }
}

/*
==============
CG_ModPrvLoadModel
==============
*/

void __fastcall CG_ModPrvLoadModel(const cg_t *cgameGlob, const char *modelFilename, double _XMM2_8, double _XMM3_8)
{
  signed __int64 v4; 
  void *v6; 
  const XModel *v20; 
  __int64 unsignedInt; 
  DObj *currentObj; 
  __int64 NumModels; 
  __int64 i; 
  int NumSurfaces; 
  int v52; 
  int v53; 
  int surfaceCount; 
  __int64 v55; 
  __int64 v56; 
  Material *v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  __int64 v62; 
  __int64 v63; 
  Material *v64; 
  __int64 v65; 
  XAnimOwner outDObjModel; 
  DObjModel *outDObjModela; 
  vec3_t origin; 
  vec3_t outOrg; 
  vec4_t quat; 
  DObjModel dobjModels; 
  __int64 v73[8192]; 
  unsigned __int8 lods[254]; 

  v6 = alloca(v4);
  __asm { vmovaps [rsp+102D0h+var_40], xmm6 }
  _RBX = cgameGlob;
  if ( g_mdlprv.model.currentObj )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rsp+102D0h+origin], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rsp+102D0h+origin+4], xmm1
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rsp+102D0h+origin+8], xmm0
    }
  }
  else
  {
    RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
      vmulss  xmm0, xmm2, dword ptr [rbx+6944h]
      vaddss  xmm1, xmm0, dword ptr [rsp+102D0h+outOrg]
      vmovss  dword ptr [rsp+102D0h+origin], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+6948h]
      vaddss  xmm1, xmm0, dword ptr [rsp+102D0h+outOrg+4]
      vmovss  dword ptr [rsp+102D0h+origin+4], xmm1
      vmovss  xmm2, dword ptr [rbx+40h]
      vmovss  dword ptr [rsp+102D0h+origin+8], xmm2
    }
    SetViewerActive(_RBX->localClientNum, 1);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  CG_ModPrvUnloadModel();
  _RCX = modPrvRStickDeflectMax;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+28h]
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.system.gamePadRStickDeflect, xmm0; ModelPreviewer g_mdlprv
    vmovss  xmm1, cs:__real@3f800000; value
  }
  Dvar_SetFloat_Internal(modPrvRStickDeflectMax, *(float *)&_XMM1);
  R_SetIgnorePrecacheErrors(1);
  R_RegisterModel(modelFilename);
  R_SetIgnorePrecacheErrors(0);
  v20 = R_RegisterModel(modelFilename);
  DObjInitModel(v20, (scr_string_t)0, 0, 0, NULL, &dobjModels);
  if ( !dobjModels.model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1738, ASSERT_TYPE_ASSERT, "(dobjModels[modelCount].model)", (const char *)&queryFormat, "dobjModels[modelCount].model") )
    __debugbreak();
  LOBYTE(outDObjModel) = 1;
  DObjCreate(&dobjModels, 1u, NULL, g_mdlprv.model.objBuf, 0, outDObjModel);
  DObjSetCamoMaterialOverride((DObj *)g_mdlprv.model.objBuf, &dobjModels, 1);
  *((_DWORD *)&g_mdlprv.model.currentEntity + 346) &= 0xFFC00000;
  *((_DWORD *)&g_mdlprv.model.currentEntity + 347) &= 0xFFF00000;
  g_mdlprv.model.currentObj = (DObj *)g_mdlprv.model.objBuf;
  g_mdlprv.model.inited = 0;
  CG_ModPrvModelGetBoneNameList();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+102D0h+origin]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin, xmm0; ModelPreviewer g_mdlprv
    vmovss  xmm1, dword ptr [rsp+102D0h+origin+4]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4, xmm1; ModelPreviewer g_mdlprv
    vmovss  xmm0, dword ptr [rsp+102D0h+origin+8]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8, xmm0; ModelPreviewer g_mdlprv
  }
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178C4h]
    vmulss  xmm6, xmm0, cs:__real@3b360b61
    vaddss  xmm3, xmm6, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm5, xmm0, xmm3, 1
    vsubss  xmm2, xmm6, xmm5
    vmulss  xmm0, xmm2, cs:__real@43b40000
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialYaw, xmm0; ModelPreviewer g_mdlprv
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; z
    vmovss  xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialYaw; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvRotationAngles, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _RAX = modPrvRotationAngles;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rsp+102D0h+outOrg], xmm0
    vmovss  xmm1, dword ptr [rax+30h]
    vmovss  dword ptr [rsp+102D0h+outOrg+8], xmm1
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw; ModelPreviewer g_mdlprv
    vaddss  xmm2, xmm0, cs:__real@43340000
    vaddss  xmm1, xmm2, dword ptr [rax+2Ch]
    vmovss  dword ptr [rsp+102D0h+outOrg+4], xmm1
  }
  AnglesToQuat(&outOrg, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+102D0h+quat]
    vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
  }
  Dvar_Reset(modPrvLod, DVAR_SOURCE_INTERNAL);
  PushMruEntry(modelFilename, g_mdlprv.model.mruNames, g_mdlprv.model.mruNameTable, modPrvModelMru);
  *(_QWORD *)&g_mdlprv.anim.fromCurrentIndex = -1i64;
  Dvar_Reset(modPrvAnimRate, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(modPrvAnimBlendWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(modPrvAnimBlendMode, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(modPrvAnimCrossBlendDuration, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(modPrvAnimCrossBlendTime, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(modPrvAnimForceLoop, DVAR_SOURCE_INTERNAL);
  unsignedInt = modPrvLod->current.unsignedInt;
  currentObj = g_mdlprv.model.currentObj;
  if ( !g_mdlprv.model.currentObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2245, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (unsigned int)unsignedInt >= 6 )
  {
    LODWORD(outDObjModela) = unsignedInt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( NUM_LODS )", "lod doesn't index NUM_LODS\n\t%i not in [0, %i)", outDObjModela, 6) )
      __debugbreak();
  }
  NumModels = DObjGetNumModels(currentObj);
  if ( (unsigned __int64)NumModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2249, ASSERT_TYPE_SANITY, "( modelCount <= ( sizeof( *array_counter( lods ) ) + 0 ) )", (const char *)&queryFormat, "modelCount <= ARRAY_COUNT( lods )") )
    __debugbreak();
  if ( NumModels > 0 )
  {
    for ( i = 0i64; i < NumModels; ++i )
    {
      if ( (unsigned int)unsignedInt > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)unsignedInt, "unsigned", unsignedInt) )
        __debugbreak();
      lods[i] = unsignedInt;
    }
  }
  NumSurfaces = DObjGetNumSurfaces(currentObj, (const unsigned __int8 (*)[254])lods);
  g_mdlprv.model.surfaceCount = NumSurfaces;
  if ( NumSurfaces > 0 )
  {
    g_mdlprv.mat.surfMatHandles = (Material **)Mem_Virtual_Alloc(8i64 * NumSurfaces, "MODPRV_MaterialHandles", TRACK_DEBUG);
    R_DObjGetSurfMaterials(g_mdlprv.model.currentObj, modPrvLod->current.integer, g_mdlprv.mat.surfMatHandles);
    g_mdlprv.mat.nameTable[0] = "<None>";
    v52 = 0;
    v53 = 0;
    surfaceCount = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.model.surfaceCount > 0 )
    {
      v55 = 0i64;
      v56 = 0i64;
      do
      {
        v57 = g_mdlprv.mat.surfMatHandles[v56];
        if ( v57 )
        {
          v58 = 0i64;
          if ( v55 <= 0 )
          {
LABEL_29:
            if ( (unsigned int)(v52 + 1) >= 0x82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1817, ASSERT_TYPE_ASSERT, "(uniqueMatCount + 1 < ( sizeof( *array_counter( g_mdlprv.mat.nameTable ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount + 1 < ARRAY_COUNT( g_mdlprv.mat.nameTable )") )
              __debugbreak();
            g_mdlprv.mat.nameTable[v55 + 1] = Material_GetName(v57);
            if ( (unsigned int)v52 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1820, ASSERT_TYPE_ASSERT, "(uniqueMatCount < ( sizeof( *array_counter( uniqueHash ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount < ARRAY_COUNT( uniqueHash )") )
              __debugbreak();
            v73[v55] = (__int64)v57;
            ++v52;
            ++v55;
            surfaceCount = g_mdlprv.model.surfaceCount;
          }
          else
          {
            while ( (Material *)v73[v58] != v57 )
            {
              if ( ++v58 >= v55 )
                goto LABEL_29;
            }
          }
        }
        ++v53;
        ++v56;
      }
      while ( v53 < surfaceCount );
    }
    g_mdlprv.mat.nameTable[v52 + 1] = NULL;
    Dvar_UpdateEnumDomain(modPrvMatSelect, g_mdlprv.mat.nameTable);
    Dvar_UpdateEnumDomain(modPrvMatReplace, g_mdlprv.mat.nameTable);
    g_mdlprv.mat.handleCount = v52;
    g_mdlprv.mat.handleArray = (Material **)Mem_Virtual_Alloc(8i64 * v52, "MODPRV_MaterialHandles", TRACK_DEBUG);
    v59 = 0;
    v60 = 0;
    v61 = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.model.surfaceCount > 0 )
    {
      v62 = 0i64;
      v63 = 0i64;
      do
      {
        v64 = g_mdlprv.mat.surfMatHandles[v63];
        if ( v64 )
        {
          v65 = 0i64;
          if ( v62 <= 0 )
          {
LABEL_43:
            if ( v59 >= g_mdlprv.mat.handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1852, ASSERT_TYPE_ASSERT, "(uniqueMatCount < g_mdlprv.mat.handleCount)", (const char *)&queryFormat, "uniqueMatCount < g_mdlprv.mat.handleCount") )
              __debugbreak();
            g_mdlprv.mat.handleArray[v62] = g_mdlprv.mat.surfMatHandles[v63];
            if ( (unsigned int)v59 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1855, ASSERT_TYPE_ASSERT, "(uniqueMatCount < ( sizeof( *array_counter( uniqueHash ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount < ARRAY_COUNT( uniqueHash )") )
              __debugbreak();
            v73[v62] = (__int64)v64;
            ++v59;
            ++v62;
            v61 = g_mdlprv.model.surfaceCount;
          }
          else
          {
            while ( (Material *)v73[v65] != v64 )
            {
              if ( ++v65 >= v62 )
                goto LABEL_43;
            }
          }
        }
        ++v60;
        ++v63;
      }
      while ( v60 < v61 );
    }
  }
  Dvar_Reset(modPrvMatSelect, DVAR_SOURCE_INTERNAL);
  *(_QWORD *)&g_mdlprv.mat.selectSliderIndex = 0i64;
  g_mdlprv.mat.replaceIndex = -1;
  __asm { vmovaps xmm6, [rsp+102D0h+var_40] }
}

/*
==============
CG_ModPrvLoopAnimation
==============
*/

bool __fastcall CG_ModPrvLoopAnimation(double _XMM0_8)
{
  const XAnimTree *Tree; 
  XAnimTree *v10; 
  int fromCurrentIndex; 
  int toCurrentIndex; 
  bool result; 
  float rootSubTreeID; 
  float objID; 
  float objIDa; 
  float objIDb; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  vec3_t origin; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !g_mdlprv.model.currentObj )
    goto LABEL_22;
  Tree = DObjGetTree(g_mdlprv.model.currentObj);
  v10 = (XAnimTree *)Tree;
  if ( !Tree || !XAnimGetAnims(Tree) )
    goto LABEL_22;
  fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
  {
    _XMM0_8 = XAnimGetTime(v10, 0, XANIM_SUBTREE_DEFAULT, 1u);
    __asm { vmovaps xmm9, xmm0 }
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  }
  toCurrentIndex = g_mdlprv.anim.toCurrentIndex;
  if ( g_mdlprv.anim.toCurrentIndex >= 0 )
  {
    _XMM0_8 = XAnimGetTime(v10, 0, XANIM_SUBTREE_DEFAULT, 2u);
    __asm { vmovaps xmm7, xmm0 }
    toCurrentIndex = g_mdlprv.anim.toCurrentIndex;
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  }
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( fromCurrentIndex < 0 )
  {
    if ( toCurrentIndex >= 0 )
      goto LABEL_14;
LABEL_22:
    result = 0;
    goto LABEL_23;
  }
  if ( toCurrentIndex < 0 )
  {
    __asm { vcomiss xmm9, xmm6 }
    if ( !g_mdlprv.anim.isFromLooped )
    {
      __asm
      {
        vmovss  [rsp+0C8h+var_88], xmm6
        vmovss  dword ptr [rsp+0C8h+var_90], xmm6
        vmovss  dword ptr [rsp+0C8h+objID], xmm6
      }
      XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, objID, v44, v47, (scr_string_t)0, 1, LINEAR);
      __asm
      {
        vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
        vaddss  xmm1, xmm0, dword ptr [rax+28h]
        vmovss  dword ptr [rsp+0C8h+origin], xmm1
        vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
        vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
        vmovss  dword ptr [rsp+0C8h+origin+4], xmm0
        vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
        vaddss  xmm2, xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rsp+0C8h+origin+8], xmm2
      }
      GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
      memset(&origin, 0, sizeof(origin));
    }
    result = 1;
    goto LABEL_23;
  }
LABEL_14:
  if ( fromCurrentIndex >= 0 )
  {
    __asm { vcomiss xmm7, xmm6 }
    _RAX = modPrvAnimBlendWeight;
    if ( modPrvAnimBlendMode->current.integer == 1 )
      __asm { vmovss  xmm7, dword ptr [rax+28h] }
    else
      __asm { vsubss  xmm7, xmm6, dword ptr [rax+28h] }
    __asm { vmovss  dword ptr [rsp+0C8h+rootSubTreeID], xmm8 }
    XAnimClearTreeGoalWeights(v10, 0, XANIM_SUBTREE_DEFAULT, 2u, rootSubTreeID, 1, g_mdlprv.model.currentObj, LINEAR);
    __asm
    {
      vmovss  [rsp+0C8h+var_88], xmm6
      vmovss  dword ptr [rsp+0C8h+var_90], xmm6
      vmovss  dword ptr [rsp+0C8h+objID], xmm7
    }
    XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, objIDb, v46, v49, (scr_string_t)0, 1, LINEAR);
    g_mdlprv.anim.isToAnimPlaying = 0;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+0C8h+origin], xmm1
      vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
      vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+0C8h+origin+4], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
      vaddss  xmm2, xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+0C8h+origin+8], xmm2
    }
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    result = 1;
    memset(&origin, 0, sizeof(origin));
  }
  else
  {
    __asm { vcomiss xmm7, xmm6 }
    if ( !g_mdlprv.anim.isToLooped )
    {
      __asm
      {
        vmovss  [rsp+0C8h+var_88], xmm6
        vmovss  dword ptr [rsp+0C8h+var_90], xmm6
        vmovss  dword ptr [rsp+0C8h+objID], xmm6
      }
      XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, objIDa, v45, v48, (scr_string_t)0, 1, LINEAR);
      __asm
      {
        vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
        vaddss  xmm1, xmm0, dword ptr [rax+28h]
        vmovss  dword ptr [rsp+0C8h+origin], xmm1
        vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
        vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
        vmovss  dword ptr [rsp+0C8h+origin+4], xmm0
        vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
        vaddss  xmm2, xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rsp+0C8h+origin+8], xmm2
      }
      GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
      memset(&origin, 0, sizeof(origin));
    }
    result = 1;
  }
LABEL_23:
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
CG_ModPrvModelGetBoneName
==============
*/
const char *CG_ModPrvModelGetBoneName(DObj *dobj, int modelIndex, int boneIndex)
{
  __int64 v3; 
  const XModel *Model; 
  const scr_string_t *v7; 

  v3 = boneIndex;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2262, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( modelIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2263, ASSERT_TYPE_ASSERT, "(modelIndex >= 0)", (const char *)&queryFormat, "modelIndex >= 0") )
    __debugbreak();
  if ( ((int)v3 < 0 || (int)v3 >= DObjNumBones(dobj)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2265, ASSERT_TYPE_ASSERT, "(boneIndex >= 0 && boneIndex < DObjNumBones( dobj ))", (const char *)&queryFormat, "boneIndex >= 0 && boneIndex < DObjNumBones( dobj )") )
    __debugbreak();
  if ( (modelIndex < 0 || modelIndex >= DObjGetNumModels(dobj)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2266, ASSERT_TYPE_ASSERT, "(modelIndex >= 0 && modelIndex < DObjGetNumModels( dobj ))", (const char *)&queryFormat, "modelIndex >= 0 && modelIndex < DObjGetNumModels( dobj )") )
    __debugbreak();
  Model = DObjGetModel(dobj, modelIndex);
  v7 = XModelBoneNames(Model);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2269, ASSERT_TYPE_ASSERT, "(boneNames)", (const char *)&queryFormat, "boneNames") )
    __debugbreak();
  return SL_ConvertToString((scr_string_t)v7[v3]);
}

/*
==============
CG_ModPrvModelGetBoneNameList
==============
*/
void CG_ModPrvModelGetBoneNameList()
{
  DObj *currentObj; 
  int v1; 
  int NumModels; 
  unsigned int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  const XModel *Model; 
  int numBones; 
  int v10; 
  const dvar_t *v11; 
  int v12; 

  if ( !g_mdlprv.model.currentObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1568, ASSERT_TYPE_ASSERT, "(g_mdlprv.model.currentObj)", (const char *)&queryFormat, "g_mdlprv.model.currentObj") )
    __debugbreak();
  currentObj = g_mdlprv.model.currentObj;
  if ( !g_mdlprv.model.currentObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2224, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v1 = 0;
  NumModels = DObjGetNumModels(currentObj);
  if ( NumModels > 0 )
  {
    do
    {
      if ( !DObjGetModel(currentObj, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v1;
    }
    while ( v1 < NumModels );
  }
  v3 = 0;
  v4 = 0i64;
  do
  {
    v3 += 4;
    g_mdlprv.model.boneNameTable[v4] = mpDefaultDrawBoneOptions[v4];
    g_mdlprv.model.boneNameTable[v4 + 1] = mpDefaultDrawBoneOptions[v4 + 1];
    g_mdlprv.model.boneNameTable[v4 + 2] = mpDefaultDrawBoneOptions[v4 + 2];
    g_mdlprv.model.boneNameTable[v4 + 3] = mpDefaultDrawBoneOptions[v4 + 3];
    v4 += 4i64;
  }
  while ( v3 < 4 );
  v5 = DObjGetNumModels(g_mdlprv.model.currentObj);
  v12 = v5;
  v6 = 0;
  if ( v5 > 0 )
  {
    v7 = (int)v3;
    do
    {
      Model = DObjGetModel(g_mdlprv.model.currentObj, v6);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = Model->numBones;
      v10 = 0;
      if ( numBones )
      {
        do
        {
          if ( v3 >= 0x103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1581, ASSERT_TYPE_ASSERT, "(stringIndex < ( sizeof( *array_counter( g_mdlprv.model.boneNameTable ) ) + 0 ))", (const char *)&queryFormat, "stringIndex < ARRAY_COUNT( g_mdlprv.model.boneNameTable )") )
            __debugbreak();
          g_mdlprv.model.boneNameTable[v7] = CG_ModPrvModelGetBoneName(g_mdlprv.model.currentObj, v6, v10);
          ++v3;
          ++v7;
          ++v10;
        }
        while ( v10 < numBones );
        v5 = v12;
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  if ( v3 >= 0x103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1586, ASSERT_TYPE_ASSERT, "(stringIndex < ( sizeof( *array_counter( g_mdlprv.model.boneNameTable ) ) + 0 ))", (const char *)&queryFormat, "stringIndex < ARRAY_COUNT( g_mdlprv.model.boneNameTable )") )
    __debugbreak();
  v11 = modPrvDrawBoneInfo;
  g_mdlprv.model.boneNameTable[v3] = NULL;
  Dvar_UpdateEnumDomain(v11, g_mdlprv.model.boneNameTable);
}

/*
==============
CG_ModPrvModelRecentAccepted
==============
*/
void CG_ModPrvModelRecentAccepted(const cg_t *cgameGlob, __int64 a2, double a3, double a4)
{
  int v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  __int64 v17; 
  const dvar_t **v18; 

  Dvar_ClearModified(modPrvModelMru);
  v5 = 0;
  v6 = Dvar_EnumToString(modPrvModelMru);
  if ( g_mdlprv.system.modelCount > 0 )
  {
    v7 = 0i64;
    do
    {
      v8 = 0x7FFFFFFFi64;
      v9 = g_mdlprv.system.modelNames[v7];
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v10 = v6 - v9;
      while ( 1 )
      {
        v11 = (unsigned __int8)v9[v10];
        v12 = v8;
        v13 = *(unsigned __int8 *)v9++;
        --v8;
        if ( !v12 )
        {
LABEL_18:
          CG_ModPrvLoadModel(cgameGlob, v6, a3, a4);
          g_mdlprv.model.currentIndex = v5;
          return;
        }
        if ( v11 != v13 )
        {
          v14 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v14 = v11;
          v11 = v14;
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          if ( v11 != v15 )
            break;
        }
        if ( !v11 )
          goto LABEL_18;
      }
      ++v5;
      ++v7;
    }
    while ( v5 < g_mdlprv.system.modelCount );
  }
  Com_Printf(14, "Model previewer could not load <%s> because it does not exist.\n ", v6);
  v16 = modPrvModelMru;
  if ( !modPrvModelMru && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 433, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  v17 = v16->current.integer + 1i64;
  if ( v17 < 4 )
  {
    v18 = &g_mdlprv.model.mruNames[v17];
    do
    {
      Dvar_SetString_Internal(*(v18 - 1), (*v18)->current.string);
      ++v18;
    }
    while ( (__int64)v18 < (__int64)g_mdlprv.model.mruNameTable );
  }
  Dvar_SetString_Internal(g_mdlprv.model.mruNames[3], (const char *)&queryFormat.fmt + 3);
  UpdateMru(g_mdlprv.model.mruNames, g_mdlprv.model.mruNameTable, v16);
}

/*
==============
CG_ModPrvModelResetRotation
==============
*/

void __fastcall CG_ModPrvModelResetRotation(__int64 a1, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  vec3_t angles; 
  vec4_t quat; 

  __asm
  {
    vmovss  xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialYaw; y
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvRotationAngles, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _RAX = modPrvRotationAngles;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm1, dword ptr [rax+30h]
    vmovss  dword ptr [rsp+58h+angles], xmm0
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw; ModelPreviewer g_mdlprv
    vaddss  xmm2, xmm0, cs:__real@43340000
    vmovss  dword ptr [rsp+58h+angles+8], xmm1
    vaddss  xmm1, xmm2, dword ptr [rax+2Ch]
    vmovss  dword ptr [rsp+58h+angles+4], xmm1
  }
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+58h+quat]
    vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
  }
}

/*
==============
CG_ModPrvSaveDObjs
==============
*/
void CG_ModPrvSaveDObjs(void)
{
  DObj **p_obj; 
  __int64 v1; 

  p_obj = &g_mdlprv.model.clones[0].obj;
  v1 = 10i64;
  do
  {
    if ( *p_obj )
      DObjArchive(*p_obj);
    p_obj += 257;
    --v1;
  }
  while ( v1 );
  if ( g_mdlprv.model.currentObj )
    DObjArchive(g_mdlprv.model.currentObj);
}

/*
==============
CG_ModPrvShutdown
==============
*/

void __fastcall CG_ModPrvShutdown(double _XMM0_8, double _XMM1_8)
{
  DObj **p_obj; 
  __int64 v3; 

  if ( g_mdlprv.inited )
  {
    g_mdlprv.inited = 0;
    if ( g_mdlprv.system.modelNames )
    {
      Dvar_UpdateEnumDomain(modPrvLoadModel, g_emptyEnumList);
      Mem_HunkUser_Destroy(*((HunkUser **)g_mdlprv.system.modelNames - 1));
      g_mdlprv.system.modelNames = NULL;
    }
    g_mdlprv.system.modelCount = 0;
    CG_ModPrvFreeAnimNames();
    p_obj = &g_mdlprv.model.clones[0].obj;
    v3 = 10i64;
    do
    {
      if ( *p_obj )
      {
        DObjFree(*p_obj);
        *p_obj = NULL;
      }
      p_obj += 257;
      --v3;
    }
    while ( v3 );
    _XMM0_8 = CG_ModPrvUnloadModel();
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vpxor   xmm1, xmm1, xmm1
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.mruNames, xmm0; ModelPreviewer g_mdlprv
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.mruNames+10h, xmm1; ModelPreviewer g_mdlprv
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.anim.mruNames+8, xmm0; ModelPreviewer g_mdlprv
    }
    g_mdlprv.anim.mruNames[0] = NULL;
    g_mdlprv.anim.mruNames[3] = NULL;
    modPrvModelMru = Dvar_Deregister(modPrvModelMru);
    modPrvLoadModel = Dvar_Deregister(modPrvLoadModel);
    modPrvOrigin = Dvar_Deregister(modPrvOrigin);
    modPrvRotationAngles = Dvar_Deregister(modPrvRotationAngles);
    modPrvCenterOffset = Dvar_Deregister(modPrvCenterOffset);
    modPrvLod = Dvar_Deregister(modPrvLod);
    modPrvDrawAxis = Dvar_Deregister(modPrvDrawAxis);
    modPrvDrawBoneInfo = Dvar_Deregister(modPrvDrawBoneInfo);
    modPrvFromAnimMru = Dvar_Deregister(modPrvFromAnimMru);
    modPrvToAnimMru = Dvar_Deregister(modPrvToAnimMru);
    modPrvLoadFromAnim = Dvar_Deregister(modPrvLoadFromAnim);
    modPrvLoadToAnim = Dvar_Deregister(modPrvLoadToAnim);
    modPrvAnimForceLoop = Dvar_Deregister(modPrvAnimForceLoop);
    modPrvAnimRate = Dvar_Deregister(modPrvAnimRate);
    modPrvAnimBlendMode = Dvar_Deregister(modPrvAnimBlendMode);
    modPrvAnimCrossBlendTime = Dvar_Deregister(modPrvAnimCrossBlendTime);
    modPrvAnimCrossBlendDuration = Dvar_Deregister(modPrvAnimCrossBlendDuration);
    modPrvAnimBlendWeight = Dvar_Deregister(modPrvAnimBlendWeight);
    modPrvAnimApplyDelta = Dvar_Deregister(modPrvAnimApplyDelta);
    modPrvMatSelect = Dvar_Deregister(modPrvMatSelect);
    modPrvMatReplace = Dvar_Deregister(modPrvMatReplace);
    modPrvGamepadControlSpeed = Dvar_Deregister(modPrvGamepadControlSpeed);
    modPrvRStickDeflectMax = Dvar_Deregister(modPrvRStickDeflectMax);
    modPrvHideModel = Dvar_Deregister(modPrvHideModel);
    modPrvDrawDistanceToModel = Dvar_Deregister(modPrvDrawDistanceToModel);
    if ( g_mdlprv.user )
    {
      Mem_HunkUser_Destroy(g_mdlprv.user);
      g_mdlprv.user = NULL;
    }
  }
}

/*
==============
CG_ModPrvUnloadModel
==============
*/
void CG_ModPrvUnloadModel()
{
  XAnimTree *Tree; 
  const dvar_t *VarByName; 

  if ( g_mdlprv.model.currentObj )
  {
    Tree = DObjGetTree(g_mdlprv.model.currentObj);
    DObjFree(g_mdlprv.model.currentObj);
    g_mdlprv.model.currentObj = NULL;
    g_mdlprv.model.currentIndex = -1;
    if ( Tree )
    {
      XAnimGetAnims(Tree);
      XAnimFreeTree(Tree, NULL);
      if ( !g_modPrvHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1475, ASSERT_TYPE_ASSERT, "(g_modPrvHunkUser)", (const char *)&queryFormat, "g_modPrvHunkUser") )
        __debugbreak();
      Mem_HunkUser_Destroy(g_modPrvHunkUser);
      g_modPrvHunkUser = NULL;
    }
  }
  if ( g_mdlprv.mat.handleArray )
  {
    Mem_Virtual_Free(g_mdlprv.mat.handleArray);
    g_mdlprv.mat.handleArray = NULL;
    g_mdlprv.mat.handleCount = -1;
  }
  if ( g_mdlprv.mat.surfMatHandles )
  {
    Mem_Virtual_Free(g_mdlprv.mat.surfMatHandles);
    g_mdlprv.mat.surfMatHandles = NULL;
  }
  VarByName = Dvar_FindVarByName("QKLNRLQLS");
  if ( VarByName )
    Dvar_Reset(VarByName, DVAR_SOURCE_INTERNAL);
  if ( modPrvRStickDeflectMax )
  {
    __asm { vmovss  xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.system.gamePadRStickDeflect; value }
    Dvar_SetFloat_Internal(modPrvRStickDeflectMax, *(float *)&_XMM1);
  }
}

/*
==============
CG_ModelPreviewerBuildViewPosStr
==============
*/
void CG_ModelPreviewerBuildViewPosStr(char *buffer, unsigned int bufferSize)
{
  unsigned __int64 v3; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  vec3_t outOrigin; 
  __int64 v28; 

  v28 = -2i64;
  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  v3 = bufferSize;
  if ( modPrvCenterOffset )
  {
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
      vaddss  xmm6, xmm0, dword ptr [rax+28h]
      vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
      vaddss  xmm3, xmm1, dword ptr [rax+2Ch]
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
      vaddss  xmm2, xmm0, dword ptr [rax+30h]
      vmovss  xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal; ModelPreviewer g_mdlprv
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm4, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical; ModelPreviewer g_mdlprv
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm5, xmm2, xmm2
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+88h+var_48], xmm1
      vmovsd  [rsp+88h+var_50], xmm4
      vmovsd  [rsp+88h+var_58], xmm0
      vmovsd  [rsp+88h+var_60], xmm5
      vmovsd  [rsp+88h+var_68], xmm2
      vmovq   r9, xmm3
    }
    Com_sprintf(buffer, v3, "%.2f %.2f %.2f %.2f %.2f %.2f", *(double *)&_XMM3, v22, v23, v24, v25, v26);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    Com_sprintf(buffer, bufferSize, "#ERROR-NotInGame");
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
CG_ModelPreviewerCreateDevGui
==============
*/

void __fastcall CG_ModelPreviewerCreateDevGui(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  __int64 v4; 
  __int64 v14; 
  int v15; 
  int cmdsize; 
  int v17; 
  int v18; 
  __int64 v19; 
  unsigned __int8 *v20; 

  v4 = localClientNum;
  if ( !g_mdlprv.inited )
  {
    memset_0(&g_mdlprv, 0, sizeof(g_mdlprv));
    g_mdlprv.user = Mem_HunkUser_Create(0x100000ui64, "CG_ModPrvEnumerateCharacters", TRACK_DEBUG, MEM_ALLOC_FLAG_NONE);
    if ( rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1437, ASSERT_TYPE_ASSERT, "(!rgp.world)", (const char *)&queryFormat, "!rgp.world") )
      __debugbreak();
    CG_ModPrvEnumerateModels();
    CG_ModPrvEnumerateAnimations();
    CG_ModelPreviewer_RegisterDvars();
    Cmd_AddCommandInternal("modPrvResetOrientation", ResetOrientation_f, &stru_151224008);
    Cmd_AddCommandInternal("modPrvExit", ModPrvExit_f, &stru_151224038);
    _RAX = r_zPlanes;
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.system.modelRotCamMode, xmm0; ModelPreviewer g_mdlprv
      vmovdqu xmm0, cs:__xmm@000000280000001e000000140000000a
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.lodDist, xmm0; ModelPreviewer g_mdlprv
      vmovss  xmm0, cs:__real@42c80000
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius, xmm0; ModelPreviewer g_mdlprv
      vmovss  xmm0, cs:__real@c1a00000
      vpxor   xmm1, xmm1, xmm1
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical, xmm0; ModelPreviewer g_mdlprv
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm2; ModelPreviewer g_mdlprv
    }
    g_mdlprv.inited = 1;
    g_mdlprv.system.cachedAllModels = 0;
    g_mdlprv.system.uiModePC = SELECTION_MODE;
    *(_QWORD *)&g_mdlprv.system.uiModeGPad = 0i64;
    __asm { vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.system.buttonTimes.camDown, xmm1; ModelPreviewer g_mdlprv }
    *(_QWORD *)&g_mdlprv.system.buttonTimes.walkabout = 0i64;
    g_mdlprv.system.walkaboutActive = 0;
    g_mdlprv.model.currentIndex = -1;
    g_mdlprv.model.currentObj = NULL;
    g_mdlprv.model.cloneNextIdx = 0;
    g_mdlprv.model.clones[0].obj = NULL;
    g_mdlprv.model.clones[1].obj = NULL;
    g_mdlprv.model.clones[2].obj = NULL;
    g_mdlprv.model.clones[3].obj = NULL;
    g_mdlprv.model.clones[4].obj = NULL;
    g_mdlprv.model.clones[5].obj = NULL;
    g_mdlprv.model.clones[6].obj = NULL;
    g_mdlprv.model.clones[7].obj = NULL;
    g_mdlprv.model.clones[8].obj = NULL;
    g_mdlprv.model.clones[9].obj = NULL;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+30h]
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNear, xmm1; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8, xmm2; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4, xmm2; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin, xmm2; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+8, xmm2; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4, xmm2; ModelPreviewer g_mdlprv
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles, xmm2; ModelPreviewer g_mdlprv
    }
    g_mdlprv.viewer.freeModeSpeed = FREESPEED_NORMAL;
    *(_QWORD *)&g_mdlprv.anim.fromCurrentIndex = -1i64;
    Dvar_Reset(modPrvFromAnimMru, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvToAnimMru, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvLoadFromAnim, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvLoadToAnim, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimRate, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimBlendWeight, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimBlendMode, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimCrossBlendDuration, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimCrossBlendTime, DVAR_SOURCE_INTERNAL);
    Dvar_Reset(modPrvAnimApplyDelta, DVAR_SOURCE_INTERNAL);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.mat.handleArray, xmm0; ModelPreviewer g_mdlprv
    }
    g_mdlprv.mat.handleCount = -1;
    Dvar_Reset(modPrvMatSelect, DVAR_SOURCE_INTERNAL);
    g_mdlprv.mat.replaceIndex = -1;
    g_mdlprv.mat.prevReplaced = NULL;
    *(_QWORD *)&g_mdlprv.mat.selectSliderIndex = 0i64;
    v14 = v4;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v15 = truncate_cast<int,unsigned __int64>(0x1Bui64);
    cmdsize = s_cmd_superUser_textArray[v14].cmdsize;
    v17 = v15 + 1;
    if ( cmdsize + v15 + 1 <= s_cmd_superUser_textArray[v14].maxsize )
    {
      v18 = cmdsize - 1;
      v19 = cmdsize - 1;
      if ( v18 >= 0 )
      {
        do
        {
          v20 = &s_cmd_superUser_textArray[v14].data[v19--];
          v20[v17] = *v20;
        }
        while ( v19 >= 0 );
      }
      memcpy_0(s_cmd_superUser_textArray[v14].data, "exec devgui_modelpreviewer\n", v17 - 1);
      s_cmd_superUser_textArray[v14].data[v17 - 1] = 10;
      s_cmd_superUser_textArray[v14].cmdsize += v17;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
}

/*
==============
CG_ModelPreviewerDestroyDevGui
==============
*/
void CG_ModelPreviewerDestroyDevGui(double a1, double a2)
{
  Cmd_RemoveCommand("modPrvResetOrientation");
  Cmd_RemoveCommand("modPrvExit");
  CG_ModPrvShutdown(a1, a2);
}

/*
==============
CG_ModelPreviewerDrawInfo
==============
*/
void CG_ModelPreviewerDrawInfo(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 3326, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  MdlPrvDrawOverlayGamepad(localClientNum, scrPlace);
}

/*
==============
CG_ModelPreviewerEnumerateAssets
==============
*/
void CG_ModelPreviewerEnumerateAssets(void)
{
  if ( g_mdlprv.inited )
  {
    CG_ModPrvEnumerateModels();
    Dvar_UpdateEnumDomain(modPrvLoadModel, g_mdlprv.system.modelNames);
    CG_ModPrvEnumerateAnimations();
    Dvar_UpdateEnumDomain(modPrvLoadFromAnim, g_mdlprv.system.animNames);
    Dvar_UpdateEnumDomain(modPrvLoadToAnim, g_mdlprv.system.animNames);
  }
}

/*
==============
CG_ModelPreviewerFrame
==============
*/
void CG_ModelPreviewerFrame(const cg_t *cgameGlob, __int64 unsignedInt, double a3, double a4)
{
  __int64 integer; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  int v24; 
  XAnimTree *Tree; 
  int fromCurrentIndex; 
  int v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int replaceIndex; 
  Material *prevReplaced; 
  int surfaceCount; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  Material **handleArray; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  int forceBlendTime; 
  int forceBlendTimea; 
  float objID; 
  float objIDa; 
  vec3_t origin; 
  __int64 v56; 
  vec3_t angles; 
  vec4_t quat; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  v56 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( !g_mdlprv.inited )
    goto LABEL_61;
  if ( modPrvLoadModel->modified )
  {
    Dvar_ClearModified(modPrvLoadModel);
    CG_ModPrvLoadModel(cgameGlob, g_mdlprv.system.modelNames[modPrvLoadModel->current.integer], a3, a4);
    g_mdlprv.model.currentIndex = modPrvLoadModel->current.integer;
  }
  else if ( g_mdlprv.system.cachedAllModels )
  {
    integer = modPrvLoadModel->latched.integer;
    if ( (_DWORD)integer != g_mdlprv.system.lastLoadModel )
    {
      CG_ModPrvLoadModel(cgameGlob, g_mdlprv.system.modelNames[integer], a3, a4);
      unsignedInt = modPrvLoadModel->latched.unsignedInt;
      g_mdlprv.system.lastLoadModel = modPrvLoadModel->latched.integer;
    }
  }
  if ( modPrvModelMru->modified )
    CG_ModPrvModelRecentAccepted(cgameGlob, unsignedInt, a3, a4);
  if ( modPrvOrigin->modified )
  {
    Dvar_ClearModified(modPrvOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+0D8h+origin], xmm1
      vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
      vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+0D8h+origin+4], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
      vaddss  xmm2, xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+0D8h+origin+8], xmm2
    }
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    memset(&origin, 0, sizeof(origin));
  }
  if ( modPrvRotationAngles->modified )
  {
    Dvar_ClearModified(modPrvRotationAngles);
    _RAX = modPrvRotationAngles;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+0D8h+angles], xmm0
      vmovss  xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+0D8h+angles+8], xmm1
      vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw; ModelPreviewer g_mdlprv
      vaddss  xmm2, xmm0, cs:__real@43340000
      vaddss  xmm1, xmm2, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+0D8h+angles+4], xmm1
    }
    AnglesToQuat(&angles, &quat);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0D8h+quat]
      vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
    }
  }
  if ( modPrvFromAnimMru->modified )
    CG_ModPrvAnimRecentAccept(modPrvFromAnimMru, &g_mdlprv.anim.fromCurrentIndex);
  if ( modPrvToAnimMru->modified )
    CG_ModPrvAnimRecentAccept(modPrvToAnimMru, &g_mdlprv.anim.toCurrentIndex);
  v22 = modPrvLoadFromAnim;
  if ( modPrvLoadFromAnim->modified )
  {
    Dvar_ClearModified(modPrvLoadFromAnim);
    g_mdlprv.anim.fromCurrentIndex = v22->current.integer;
    CG_ModPrvLoadAnimations(g_mdlprv.system.animNames[v22->current.integer], *(double *)&_XMM1);
  }
  v23 = modPrvLoadToAnim;
  if ( modPrvLoadToAnim->modified )
  {
    Dvar_ClearModified(modPrvLoadToAnim);
    g_mdlprv.anim.toCurrentIndex = v23->current.integer;
    CG_ModPrvLoadAnimations(g_mdlprv.system.animNames[v23->current.integer], *(double *)&_XMM1);
  }
  if ( modPrvAnimCrossBlendTime->modified || modPrvAnimCrossBlendDuration->modified )
  {
    Dvar_ClearModified(modPrvAnimCrossBlendTime);
    Dvar_ClearModified(modPrvAnimCrossBlendDuration);
    CG_ModPrvLoadAnimations(NULL, *(double *)&_XMM1);
  }
  v24 = 0;
  if ( modPrvAnimBlendWeight->modified )
  {
    Dvar_ClearModified(modPrvAnimBlendWeight);
    if ( g_mdlprv.model.currentObj )
    {
      Tree = DObjGetTree(g_mdlprv.model.currentObj);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm8, xmm8, xmm8
      }
      fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
      if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
      {
        if ( g_mdlprv.anim.toCurrentIndex >= 0 )
          __asm { vsubss  xmm7, xmm6, dword ptr [rax+28h] }
        else
          __asm { vmovaps xmm7, xmm6 }
        __asm { vmovss  [rsp+0D8h+var_B8], xmm8 }
        XAnimClearTreeGoalWeights(Tree, 0, XANIM_SUBTREE_DEFAULT, 1u, v47, 1, g_mdlprv.model.currentObj, LINEAR);
        __asm
        {
          vmovss  dword ptr [rsp+0D8h+objID], xmm6
          vmovss  [rsp+0D8h+forceBlendTime], xmm6
          vmovss  [rsp+0D8h+var_B8], xmm7
        }
        XAnimSetGoalWeight(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, v48, *(float *)&forceBlendTime, objID, (scr_string_t)0, 0, 1, LINEAR, NULL);
        fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
      }
      if ( g_mdlprv.anim.toCurrentIndex >= 0 )
      {
        if ( fromCurrentIndex >= 0 )
        {
          _RAX = modPrvAnimBlendWeight;
          __asm { vmovss  xmm7, dword ptr [rax+28h] }
        }
        else
        {
          __asm { vmovaps xmm7, xmm6 }
        }
        __asm { vmovss  [rsp+0D8h+var_B8], xmm8 }
        XAnimClearTreeGoalWeights(Tree, 0, XANIM_SUBTREE_DEFAULT, 2u, v49, 1, g_mdlprv.model.currentObj, LINEAR);
        __asm
        {
          vmovss  dword ptr [rsp+0D8h+objID], xmm6
          vmovss  [rsp+0D8h+forceBlendTime], xmm6
          vmovss  [rsp+0D8h+var_B8], xmm7
        }
        XAnimSetGoalWeight(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, v50, *(float *)&forceBlendTimea, objIDa, (scr_string_t)0, 0, 1, LINEAR, NULL);
      }
    }
  }
  if ( !modPrvMatReplace->modified )
  {
    if ( modPrvMatReplace->latched.integer == g_mdlprv.system.lastMatReplace )
      goto LABEL_61;
    g_mdlprv.system.lastMatReplace = modPrvMatReplace->latched.integer;
    if ( !modPrvMatSelect->current.integer )
      goto LABEL_61;
    v35 = modPrvMatReplace->latched.integer;
    if ( !v35 )
      goto LABEL_61;
    replaceIndex = v35 - 1;
    g_mdlprv.mat.replaceIndex = replaceIndex;
    prevReplaced = g_mdlprv.mat.prevReplaced;
    surfaceCount = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.mat.prevReplaced )
    {
      v39 = 0;
      if ( g_mdlprv.model.surfaceCount <= 0 )
        goto LABEL_59;
      v40 = 0i64;
      do
      {
        if ( g_mdlprv.mat.surfMatHandles[v40] == prevReplaced )
        {
          R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v39, prevReplaced);
          prevReplaced = g_mdlprv.mat.prevReplaced;
          surfaceCount = g_mdlprv.model.surfaceCount;
        }
        ++v39;
        ++v40;
      }
      while ( v39 < surfaceCount );
      replaceIndex = g_mdlprv.mat.replaceIndex;
    }
    if ( surfaceCount > 0 )
    {
      v41 = 0i64;
      handleArray = g_mdlprv.mat.handleArray;
      do
      {
        if ( g_mdlprv.mat.surfMatHandles[v41] == handleArray[modPrvMatSelect->current.integer - 1] )
        {
          R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v24, handleArray[replaceIndex]);
          replaceIndex = g_mdlprv.mat.replaceIndex;
          handleArray = g_mdlprv.mat.handleArray;
          surfaceCount = g_mdlprv.model.surfaceCount;
        }
        ++v24;
        ++v41;
      }
      while ( v24 < surfaceCount );
      goto LABEL_60;
    }
LABEL_59:
    handleArray = g_mdlprv.mat.handleArray;
LABEL_60:
    g_mdlprv.mat.prevReplaced = handleArray[replaceIndex];
    goto LABEL_61;
  }
  Dvar_ClearModified(modPrvMatReplace);
  v32 = g_mdlprv.mat.replaceIndex;
  if ( !modPrvMatSelect->current.integer )
    v32 = -1;
  g_mdlprv.mat.replaceIndex = v32;
  v33 = 0;
  if ( g_mdlprv.model.surfaceCount > 0 )
  {
    v34 = 0i64;
    do
      R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v33++, g_mdlprv.mat.surfMatHandles[v34++]);
    while ( v33 < g_mdlprv.model.surfaceCount );
  }
  g_mdlprv.mat.prevReplaced = NULL;
LABEL_61:
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ModelPreviewerHandleGamepadEvents
==============
*/

void __fastcall CG_ModelPreviewerHandleGamepadEvents(LocalClientNum_t localClientNum, float forward, float side, float pitch, float yaw)
{
  MdlPrvControlsGamepad(localClientNum, forward, side, pitch, yaw);
}

/*
==============
CG_ModelPreviewerHandleKeyEvents
==============
*/
void CG_ModelPreviewerHandleKeyEvents(LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  vec3_t angles; 
  vec4_t quat; 

  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type == 4 )
  {
    v9 = key - 101;
    if ( v9 )
    {
      v10 = v9 - 12;
      if ( v10 )
      {
        v11 = v10 - 6;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 2 )
              CG_ModPrvModelResetRotation(v7, *(double *)&_XMM1, v8, *(double *)&_XMM3);
          }
          else
          {
            _RCX = modPrvRotationAngles;
            __asm
            {
              vxorps  xmm3, xmm3, xmm3; z
              vxorps  xmm1, xmm1, xmm1; x
              vmovss  xmm2, dword ptr [rcx+2Ch]; y
            }
            Dvar_SetVec3_Internal(modPrvRotationAngles, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
            _RAX = modPrvRotationAngles;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+28h]
              vmovss  xmm1, dword ptr [rax+30h]
              vmovss  dword ptr [rsp+58h+angles], xmm0
              vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw; ModelPreviewer g_mdlprv
              vaddss  xmm2, xmm0, cs:__real@43340000
              vmovss  dword ptr [rsp+58h+angles+8], xmm1
              vaddss  xmm1, xmm2, dword ptr [rax+2Ch]
              vmovss  dword ptr [rsp+58h+angles+4], xmm1
            }
            AnglesToQuat(&angles, &quat);
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+58h+quat]
              vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
            }
          }
        }
        else
        {
          g_mdlprv.system.uiModePC = MOVE_MODE;
        }
      }
      else
      {
        g_mdlprv.system.uiModePC = SELECTION_MODE;
      }
    }
    else
    {
      g_mdlprv.system.uiModePC = ROTATE_MODE;
    }
  }
}

/*
==============
CG_ModelPreviewerHandleMouseEvents
==============
*/
void CG_ModelPreviewerHandleMouseEvents(LocalClientNum_t localClientNum, int dx, int dy)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v61; 
  vec3_t origin; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v132; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 
  char v135; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 4 )
  {
    if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_ALT) )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm6, xmm6, r14d
        vcvtsi2ss xmm7, xmm7, esi
      }
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        __asm
        {
          vmulss  xmm1, xmm6, cs:__real@bdcccccd
          vaddss  xmm1, xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical; ModelPreviewer g_mdlprv
          vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical, xmm1; ModelPreviewer g_mdlprv
          vmulss  xmm2, xmm7, cs:__real@bdcccccd
          vaddss  xmm1, xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal; ModelPreviewer g_mdlprv
          vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm1; ModelPreviewer g_mdlprv
        }
      }
      if ( CL_Keys_IsKeyDown(localClientNum, 188) )
      {
        __asm
        {
          vmovaps xmm1, xmm6; dy
          vmovaps xmm0, xmm7; dx
        }
        CG_ModelPreviewerZoomCamera(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      if ( CL_Keys_IsKeyDown(localClientNum, 189) )
      {
        AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
        __asm
        {
          vmulss  xmm0, xmm7, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
          vmulss  xmm12, xmm0, cs:__real@3a9d4952
          vmulss  xmm0, xmm6, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
          vmulss  xmm13, xmm0, cs:__real@3a9d4952
          vmovss  xmm4, dword ptr [rsp+1C0h+axis+0Ch]
          vmulss  xmm2, xmm4, xmm4
          vmovss  xmm5, dword ptr [rsp+1C0h+axis+10h]
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm0
          vmovss  xmm6, dword ptr [rsp+1C0h+axis+14h]
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm0, xmm3, xmm1
          vsqrtss xmm2, xmm0, xmm0
          vcmpless xmm0, xmm2, cs:__real@80000000
          vmovss  xmm8, cs:__real@3f800000
          vblendvps xmm0, xmm2, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm9, xmm4, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+0Ch], xmm9
          vmulss  xmm10, xmm5, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+10h], xmm10
          vmulss  xmm11, xmm6, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+14h], xmm11
          vmovss  xmm4, dword ptr [rsp+1C0h+axis+18h]
          vmulss  xmm1, xmm4, xmm4
          vmovss  xmm5, dword ptr [rsp+1C0h+axis+1Ch]
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm6, dword ptr [rsp+1C0h+axis+20h]
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm3, xmm4, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+18h], xmm3
          vmulss  xmm4, xmm5, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+1Ch], xmm4
          vmulss  xmm5, xmm6, xmm1
          vmovss  dword ptr [rsp+1C0h+axis+20h], xmm5
        }
        v61 = modPrvCenterOffset;
        __asm
        {
          vmulss  xmm0, xmm9, xmm12
          vaddss  xmm2, xmm0, dword ptr [rcx+28h]
          vmulss  xmm1, xmm3, xmm13
          vaddss  xmm1, xmm2, xmm1
          vmulss  xmm0, xmm10, xmm12
          vaddss  xmm3, xmm0, dword ptr [rcx+2Ch]
          vmulss  xmm2, xmm4, xmm13
          vaddss  xmm2, xmm3, xmm2
          vmulss  xmm0, xmm11, xmm12
          vaddss  xmm4, xmm0, dword ptr [rcx+30h]
          vmulss  xmm3, xmm5, xmm13
          vaddss  xmm3, xmm4, xmm3
        }
LABEL_18:
        Dvar_SetVec3_Internal(v61, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      }
    }
    else if ( g_mdlprv.system.uiModePC == MOVE_MODE )
    {
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm2, xmm0, cs:__real@bdcccccd
          vmulss  xmm0, xmm2, dword ptr [rbx+6950h]
          vaddss  xmm4, xmm0, dword ptr [rcx+28h]
          vmulss  xmm1, xmm2, dword ptr [rbx+6954h]
          vaddss  xmm5, xmm1, dword ptr [rcx+2Ch]
          vmulss  xmm0, xmm2, dword ptr [rbx+6958h]
          vaddss  xmm6, xmm0, dword ptr [rcx+30h]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r14d
          vmulss  xmm3, xmm1, cs:__real@bdcccccd
          vmulss  xmm0, xmm3, dword ptr [rbx+695Ch]
          vaddss  xmm1, xmm0, xmm4; x
          vmulss  xmm2, xmm3, dword ptr [rbx+6960h]
          vaddss  xmm2, xmm2, xmm5; y
          vmulss  xmm0, xmm3, dword ptr [rbx+6964h]
          vaddss  xmm3, xmm0, xmm6; z
        }
        Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        __asm
        {
          vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
          vaddss  xmm1, xmm0, dword ptr [rax+28h]
          vmovss  dword ptr [rsp+1C0h+origin], xmm1
          vmovss  xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
          vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
          vmovss  dword ptr [rsp+1C0h+origin+4], xmm0
          vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
          vaddss  xmm2, xmm1, dword ptr [rax+30h]
          vmovss  dword ptr [rsp+1C0h+origin+8], xmm2
        }
        GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
        memset(&origin, 0, sizeof(origin));
      }
    }
    else if ( g_mdlprv.system.uiModePC == ROTATE_MODE )
    {
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14d
          vmulss  xmm1, xmm0, cs:__real@bdcccccd
          vmovss  dword ptr [rsp+1C0h+origin], xmm1
          vxorps  xmm2, xmm2, xmm2
          vmovss  dword ptr [rsp+1C0h+origin+4], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm1, xmm0, cs:__real@3dcccccd
          vmovss  dword ptr [rsp+1C0h+origin+8], xmm1
        }
        AnglesToAxis(&origin, &in2);
        MatrixTranspose(&LocalClientGlobals->refdef.view.axis, &out);
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat; ModelPreviewer g_mdlprv
          vmovups xmmword ptr [rsp+1C0h+quat], xmm0
        }
        UnitQuatToAxis(&quat, &axis);
        MatrixMultiply(&axis, &out, &in1);
        MatrixMultiply(&in1, &in2, &v132);
        MatrixMultiply(&v132, &LocalClientGlobals->refdef.view.axis, &axis);
      }
      else
      {
        if ( !CL_Keys_IsKeyDown(localClientNum, 188) )
          goto LABEL_19;
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vmovss  dword ptr [rsp+1C0h+origin], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm1, xmm0, cs:__real@3e99999a
          vmovss  dword ptr [rsp+1C0h+origin+4], xmm1
          vmovss  dword ptr [rsp+1C0h+origin+8], xmm2
        }
        AnglesToAxis(&origin, &v132);
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat; ModelPreviewer g_mdlprv
          vmovups xmmword ptr [rsp+1C0h+quat], xmm0
        }
        UnitQuatToAxis(&quat, &axis);
        MatrixMultiply(&v132, &axis, &in1);
        AxisCopy(&in1, &axis);
      }
      AxisToQuat(&axis, &quat);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1C0h+quat]
        vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
      }
      AxisToAngles(&axis, &origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+origin+4]
        vmulss  xmm1, xmm0, cs:__real@3b360b61
        vaddss  xmm5, xmm1, cs:__real@3f000000
        vaddss  xmm3, xmm5, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm2, xmm1, xmm3, 1
        vsubss  xmm0, xmm5, xmm2
        vmulss  xmm2, xmm0, cs:__real@43b40000; y
      }
      v61 = modPrvRotationAngles;
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+1C0h+origin]; x
        vmovss  xmm3, dword ptr [rsp+1C0h+origin+8]; z
        vmovss  dword ptr [rsp+1C0h+origin+4], xmm2
      }
      goto LABEL_18;
    }
  }
LABEL_19:
  _R11 = &v135;
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
  }
}

/*
==============
CG_ModelPreviewerNeedsVieworgInterpSkipped
==============
*/
bool CG_ModelPreviewerNeedsVieworgInterpSkipped(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type == 4;
}

/*
==============
CG_ModelPreviewerPauseAnim
==============
*/
void CG_ModelPreviewerPauseAnim(void)
{
  if ( g_mdlprv.model.currentObj && (g_mdlprv.anim.fromCurrentIndex >= 0 || g_mdlprv.anim.toCurrentIndex >= 0) )
  {
    __asm { vmovss  xmm0, cs:__real@7f7fffff }
    g_mdlprv.anim.isAnimPlaying = !g_mdlprv.anim.isAnimPlaying;
    __asm { vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.stepCounter, xmm0; ModelPreviewer g_mdlprv }
  }
}

/*
==============
CG_ModelPreviewerStepAnim
==============
*/

void __fastcall CG_ModelPreviewerStepAnim(double deltaTime, double _XMM1_8)
{
  __asm { vmovaps xmm3, xmm0 }
  if ( g_mdlprv.model.currentObj && (g_mdlprv.anim.fromCurrentIndex >= 0 || g_mdlprv.anim.toCurrentIndex >= 0) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3d088889
      vxorps  xmm1, xmm1, xmm1
      vcmpltss xmm2, xmm3, xmm1
      vblendvps xmm0, xmm3, xmm0, xmm2
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.anim.stepCounter, xmm0; ModelPreviewer g_mdlprv
    }
    g_mdlprv.anim.isAnimPlaying = 1;
  }
}

/*
==============
CG_ModelPreviewerUpdateView
==============
*/
void CG_ModelPreviewerUpdateView(vec3_t *outViewOrigin, tmat33_t<vec3_t> *outViewAxis, vec3_t *outViewAngles, float *zNear)
{
  _RBX = outViewAngles;
  _RDI = outViewOrigin;
  if ( g_mdlprv.system.uiModeGPad )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rcx], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rcx+4], xmm1
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8; ModelPreviewer g_mdlprv
      vmovss  dword ptr [rcx+8], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles; ModelPreviewer g_mdlprv
      vmovss  dword ptr [r8], xmm1
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4; ModelPreviewer g_mdlprv
      vmovss  dword ptr [r8+4], xmm0
      vmovss  xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+8; ModelPreviewer g_mdlprv
      vmovss  dword ptr [r8+8], xmm1
    }
    AnglesToAxis(outViewAngles, outViewAxis);
  }
  else
  {
    MdlPrvUpdateViewFocused(outViewOrigin, outViewAxis, outViewAngles, zNear);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin, xmm0; ModelPreviewer g_mdlprv
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4, xmm1; ModelPreviewer g_mdlprv
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8, xmm0; ModelPreviewer g_mdlprv
      vmovss  xmm1, dword ptr [rbx]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles, xmm1; ModelPreviewer g_mdlprv
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4, xmm0; ModelPreviewer g_mdlprv
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+8, xmm1; ModelPreviewer g_mdlprv
    }
  }
}

/*
==============
CG_ModelPreviewerZoomCamera
==============
*/

void __fastcall CG_ModelPreviewerZoomCamera(double dx, double dy)
{
  char v2; 

  __asm
  {
    vandps  xmm4, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm2, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm5, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
    vcmpltss xmm4, xmm2, xmm4
    vblendvps xmm2, xmm0, xmm1, xmm4
    vmulss  xmm0, xmm5, cs:__real@3b83126f
    vminss  xmm1, xmm0, cs:__real@40a00000
    vmulss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm3, xmm2, cs:__real@be99999a
    vaddss  xmm4, xmm5, xmm3
    vcmpltss xmm0, xmm4, xmm1
    vblendvps xmm1, xmm4, xmm1, xmm0
    vcomiss xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNearChangeLimit; ModelPreviewer g_mdlprv
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius, xmm1; ModelPreviewer g_mdlprv
  }
  if ( v2 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3c23d70a
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNear, xmm0; ModelPreviewer g_mdlprv
    }
  }
  else
  {
    _RAX = r_zPlanes;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNear, xmm0; ModelPreviewer g_mdlprv
    }
  }
}

/*
==============
CG_ModelPreviewer_RegisterCommonDvars
==============
*/
void CG_ModelPreviewer_RegisterCommonDvars(void)
{
  Dvar_BeginPermanentRegistration();
  Dvar_RegisterString("modPrvModelMruName0", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used model name 0");
  Dvar_RegisterString("modPrvModelMruName1", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used model name 1");
  Dvar_RegisterString("modPrvModelMruName2", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used model name 2");
  Dvar_RegisterString("modPrvModelMruName3", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used model name 3");
  Dvar_RegisterString("modPrvAnimMruName0", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used anim name 0");
  Dvar_RegisterString("modPrvAnimMruName1", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used anim name 1");
  Dvar_RegisterString("modPrvAnimMruName2", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used anim name 2");
  Dvar_RegisterString("modPrvAnimMruName3", (const char *)&queryFormat.fmt + 3, 0, "Model previewer most recently used anim name 3");
  modPrvDisplayToggle = Dvar_RegisterBool("modPrvDisplayToggle", 1, 0, "Show model previewer overlay");
  Dvar_EndPermanentRegistration();
}

/*
==============
CG_ModelPreviewer_RegisterDvars
==============
*/

const dvar_t *__fastcall CG_ModelPreviewer_RegisterDvars(__int64 a1, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  int v6; 
  __int64 i; 
  const dvar_t *v13; 
  int v22; 
  __int64 j; 
  const dvar_t *v34; 
  const dvar_t *result; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float max; 
  float maxa; 
  float maxb; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  g_mdlprv.model.mruNames[0] = Dvar_FindVarByName("modPrvModelMruName0");
  g_mdlprv.model.mruNames[1] = Dvar_FindVarByName("modPrvModelMruName1");
  g_mdlprv.model.mruNames[2] = Dvar_FindVarByName("modPrvModelMruName2");
  g_mdlprv.model.mruNames[3] = Dvar_FindVarByName("modPrvModelMruName3");
  g_mdlprv.anim.mruNames[0] = Dvar_FindVarByName("modPrvAnimMruName0");
  g_mdlprv.anim.mruNames[1] = Dvar_FindVarByName("modPrvAnimMruName1");
  g_mdlprv.anim.mruNames[2] = Dvar_FindVarByName("modPrvAnimMruName2");
  g_mdlprv.anim.mruNames[3] = Dvar_FindVarByName("modPrvAnimMruName3");
  v6 = 0;
  for ( i = 0i64; i < 4; ++i )
  {
    if ( !g_mdlprv.model.mruNames[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 395, ASSERT_TYPE_ASSERT, "(mruDvars[dvarIndex])", (const char *)&queryFormat, "mruDvars[dvarIndex]") )
      __debugbreak();
    if ( i && !*(_BYTE *)g_mdlprv.model.mruNames[i]->current.integer64 )
      break;
    ++v6;
    g_mdlprv.model.mruNameTable[i] = g_mdlprv.model.mruNames[i]->current.string;
  }
  g_mdlprv.model.mruNameTable[v6] = NULL;
  modPrvModelMru = Dvar_RegisterEnum("modPrvModelMru", g_mdlprv.model.mruNameTable, 0, 0x2020u, "Model previewer most recently used model");
  modPrvLoadModel = Dvar_RegisterEnum("modPrvLoadModel", g_mdlprv.system.modelNames, 0, 0x20u, "Model previewer loaded model");
  Dvar_UpdateEnumDomain(modPrvLoadModel, g_mdlprv.system.modelNames);
  __asm
  {
    vmovss  xmm7, cs:__real@447a0000
    vmovss  xmm6, cs:__real@c47a0000
    vmovss  [rsp+78h+max], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  v13 = Dvar_RegisterVec3("modPrvOrigin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, max, 0, "Model previewer origin");
  __asm
  {
    vmovss  xmm1, cs:__real@c3340000
    vmovss  xmm0, cs:__real@43340000
  }
  modPrvOrigin = v13;
  __asm
  {
    vmovss  [rsp+78h+max], xmm0
    vmovss  dword ptr [rsp+78h+fmt], xmm1
    vxorps  xmm1, xmm1, xmm1; x
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
  }
  modPrvRotationAngles = Dvar_RegisterVec3("modPrvRotationAngles", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, maxa, 0, "Model previwer rotation angles");
  __asm
  {
    vmovss  [rsp+78h+max], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  modPrvCenterOffset = Dvar_RegisterVec3("modPrvCenterOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, maxb, 0, "Model previewer center offset");
  modPrvLod = Dvar_RegisterEnum("modPrvLod", modPrvLodNames, 0, 0, "Model previewer level of detail");
  modPrvDrawAxis = Dvar_RegisterBool("modPrvDrawAxis", 0, 0, "Draw the model previewer axes");
  modPrvDrawBoneInfo = Dvar_RegisterEnum("modPrvDrawBoneInfo", g_mdlprv.model.boneNameTable, 0, 0, "Draw model previewer bone information");
  v22 = 0;
  for ( j = 0i64; j < 4; ++j )
  {
    if ( !g_mdlprv.anim.mruNames[j] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 395, ASSERT_TYPE_ASSERT, "(mruDvars[dvarIndex])", (const char *)&queryFormat, "mruDvars[dvarIndex]") )
      __debugbreak();
    if ( j && !*(_BYTE *)g_mdlprv.anim.mruNames[j]->current.integer64 )
      break;
    ++v22;
    g_mdlprv.anim.mruNameTable[j] = g_mdlprv.anim.mruNames[j]->current.string;
  }
  g_mdlprv.anim.mruNameTable[v22] = NULL;
  modPrvFromAnimMru = Dvar_RegisterEnum("modPrvFromAnimMru", g_mdlprv.anim.mruNameTable, 0, 0x2020u, "Model previewer most recently used 'from' animation");
  Dvar_UpdateEnumDomain(modPrvFromAnimMru, g_mdlprv.anim.mruNameTable);
  modPrvToAnimMru = Dvar_RegisterEnum("modPrvToAnimMru", g_mdlprv.anim.mruNameTable, 0, 0x2020u, "Model previewer most recently used 'to' animation");
  Dvar_UpdateEnumDomain(modPrvToAnimMru, g_mdlprv.anim.mruNameTable);
  modPrvLoadFromAnim = Dvar_RegisterEnum("modPrvLoadFromAnim", g_mdlprv.system.animNames, 0, 0x20u, "Model previewer loaded 'from' animation");
  Dvar_UpdateEnumDomain(modPrvLoadFromAnim, g_mdlprv.system.animNames);
  modPrvLoadToAnim = Dvar_RegisterEnum("modPrvLoadToAnim", g_mdlprv.system.animNames, 0, 0x20u, "Model previewer loaded 'to' animation");
  Dvar_UpdateEnumDomain(modPrvLoadToAnim, g_mdlprv.system.animNames);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3dcccccd; min
  }
  modPrvAnimForceLoop = Dvar_RegisterBool("modPrvAnimForceLoop", 0, 0, "Model Previewer - Force an animation loop");
  __asm { vmovaps xmm1, xmm7; value }
  modPrvAnimRate = Dvar_RegisterFloat("modPrvAnimRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Model previewer - animation rate");
  __asm { vmovss  xmm1, cs:__real@3f7d70a4; value }
  modPrvAnimBlendMode = Dvar_RegisterEnum("modPrvAnimBlendMode", modPrvAnimBlendModeNames, 0, 0, "Model previewer animation blending mode");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  modPrvAnimCrossBlendTime = Dvar_RegisterFloat("modPrvAnimCrossBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Model previewer animation cross blending time");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v34 = Dvar_RegisterFloat("modPrvAnimCrossBlendDuration", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Model previewer animation cross blend duration");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  modPrvAnimCrossBlendDuration = v34;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  modPrvAnimBlendWeight = Dvar_RegisterFloat("modPrvAnimBlendWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Model previewer animation blend weight");
  modPrvAnimApplyDelta = Dvar_RegisterBool("modPrvAnimApplyDelta", 1, 0, "Model previewer animation apply delta");
  g_mdlprv.mat.nameTable[1] = NULL;
  g_mdlprv.mat.nameTable[0] = "<None>";
  modPrvMatSelect = Dvar_RegisterEnum("modPrvMatSelect", g_mdlprv.mat.nameTable, 0, 0x2020u, "Model previewer material select");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm2, cs:__real@3dcccccd; min
  }
  modPrvMatReplace = Dvar_RegisterEnum("modPrvMatReplace", g_mdlprv.mat.nameTable, 0, 0x2020u, "Model previewer material replace");
  __asm { vmovaps xmm1, xmm7; value }
  modPrvGamepadControlSpeed = Dvar_RegisterFloat("modPrvGamepadControlSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Model previewer game pad control speed");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  modPrvRStickDeflectMax = Dvar_RegisterFloat("NOPKLKMSRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum right stick deflection");
  modPrvHideModel = Dvar_RegisterBool("modPrvHideModel", 0, 4u, "Skip drawing the model.");
  result = Dvar_RegisterBool("modPrvDrawDistanceToModel", 1, 4u, "Print viewer's distance to model.");
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  modPrvDrawDistanceToModel = result;
  return result;
}

/*
==============
FrameModel
==============
*/

void __fastcall FrameModel(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  _RAX = DObjGetModel(g_mdlprv.model.currentObj, 0);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  xmm8, dword ptr [rax+40h]
    vmovss  xmm7, dword ptr [rax+38h]
    vmovss  xmm6, dword ptr [rax+3Ch]
    vmovaps xmm3, xmm8; z
  }
  Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm4, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vmovaps xmm8, [rsp+58h+var_38]
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmaxss  xmm3, xmm0, cs:__real@41200000
    vcmpltss xmm0, xmm4, xmm3
    vblendvps xmm0, xmm4, xmm3, xmm0
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius, xmm0; ModelPreviewer g_mdlprv
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNearChangeLimit, xmm4; ModelPreviewer g_mdlprv
  }
}

/*
==============
MdlPrvCloneClearAll
==============
*/
void MdlPrvCloneClearAll()
{
  DObj **p_obj; 
  __int64 v1; 

  p_obj = &g_mdlprv.model.clones[0].obj;
  v1 = 10i64;
  do
  {
    if ( *p_obj )
    {
      DObjFree(*p_obj);
      *p_obj = NULL;
    }
    p_obj += 257;
    --v1;
  }
  while ( v1 );
}

/*
==============
MdlPrvCloneModel
==============
*/

void __fastcall MdlPrvCloneModel(const cg_t *cgGlob, __int64 a2, double _XMM2_8)
{
  MdlPrvClone *v4; 
  DObj *obj; 
  int v10; 
  vec3_t v11; 
  vec3_t origin; 
  vec3_t outOrigin; 
  __int64 v14; 
  vec3_t right; 
  vec3_t up; 
  vec3_t forward; 

  v14 = -2i64;
  if ( g_mdlprv.model.cloneNextIdx >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 3849, ASSERT_TYPE_ASSERT, "(g_mdlprv.model.cloneNextIdx < CLONES_COUNT)", (const char *)&queryFormat, "g_mdlprv.model.cloneNextIdx < CLONES_COUNT") )
    __debugbreak();
  v4 = &g_mdlprv.model.clones[g_mdlprv.model.cloneNextIdx];
  obj = v4->obj;
  if ( obj )
  {
    DObjFree(obj);
    v4->obj = NULL;
  }
  DObjGetTree(g_mdlprv.model.currentObj);
  DObjClone(g_mdlprv.model.currentObj, v4->objBuf);
  v4->obj = (DObj *)v4->objBuf;
  DObjSetTree((DObj *)v4->objBuf, NULL);
  GfxSceneEntity_GetLightingOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  GfxSceneEntity_GetPrevPlacementOrigin(&g_mdlprv.model.currentEntity, &v11);
  memcpy_0(v4, &g_mdlprv.model.currentEntity, 0x590ui64);
  GfxSceneEntity_SetLightingOrigin(&v4->ent, &outOrigin);
  GfxSceneEntity_SetPlacementOrigin(&v4->ent, &origin);
  GfxSceneEntity_SetPrevPlacementOrigin(&v4->ent, &v11);
  memset(&v11, 0, sizeof(v11));
  memset(&origin, 0, sizeof(origin));
  memset(&outOrigin, 0, sizeof(outOrigin));
  AngleVectors(&cgGlob->refdefViewAngles, &forward, &right, &up);
  __asm
  {
    vmovss  xmm3, cs:__real@41800000
    vmulss  xmm1, xmm3, dword ptr [rsp+0A8h+right+4]; dy
    vmulss  xmm0, xmm3, dword ptr [rsp+0A8h+right]; dx
    vxorps  xmm2, xmm2, xmm2; dz
  }
  MdlPrvModelOriginOffset(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v10 = g_mdlprv.model.cloneNextIdx + 1;
  if ( (unsigned int)(g_mdlprv.model.cloneNextIdx + 1) >= 0xA )
    v10 = 0;
  g_mdlprv.model.cloneNextIdx = v10;
}

/*
==============
MdlPrvControlsGamepad
==============
*/

void __fastcall MdlPrvControlsGamepad(LocalClientNum_t localClientNum, double forward, double side, double pitch)
{
  __int64 v16; 
  int v18; 
  __int64 v55; 
  unsigned __int64 v56; 
  int v57; 
  int cmdsize; 
  int v59; 
  __int64 v60; 
  MdlPrvFreeSpeed freeModeSpeed; 
  __int32 v62; 
  __int64 v222; 
  __int64 v223; 
  __int64 v227; 
  Bounds *bounds; 
  double skipEntity; 
  double skipChildren; 
  vec3_t end; 
  vec3_t outOrigin; 
  Bounds v252; 
  vec3_t up; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 
  char dest[256]; 
  char v257; 
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
    vmovaps xmm12, xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm7, xmm1
  }
  v16 = localClientNum;
  if ( DevGui_IsActive() )
    goto LABEL_73;
  _R14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
  v18 = Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r14+65E4h]
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vxorps  xmm11, xmm11, xmm11
    vcmpneqss xmm1, xmm2, xmm11
    vmovss  xmm0, cs:__real@3c75c28f
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [rsp+2E0h+var_280], xmm1
  }
  if ( _R14->predictedPlayerState.pm_type != 4 )
  {
    if ( g_mdlprv.system.walkaboutActive && CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[3].id) && v18 - g_mdlprv.system.buttonTimes.walkabout > 250 )
    {
      g_mdlprv.system.buttonTimes.walkabout = v18;
      RefdefView_GetOrg(&_R14->refdef.view, &g_mdlprv.viewer.freeModeOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+178C0h]
        vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles, xmm0; ModelPreviewer g_mdlprv
        vmovss  xmm1, dword ptr [r14+178C4h]
        vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4, xmm1; ModelPreviewer g_mdlprv
        vmovss  xmm0, dword ptr [r14+178C8h]
        vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+8, xmm0; ModelPreviewer g_mdlprv
      }
      g_mdlprv.system.walkaboutActive = 0;
      SetViewerActive((LocalClientNum_t)v16, 1);
    }
    goto LABEL_73;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[0].id) && v18 - g_mdlprv.system.buttonTimes.mode > 500 )
  {
    g_mdlprv.system.buttonTimes.mode = v18;
    g_mdlprv.system.uiModeGPad = g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE;
    goto LABEL_73;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[1].id) && v18 - g_mdlprv.system.buttonTimes.dropToFloor > 250 )
  {
    g_mdlprv.system.buttonTimes.dropToFloor = v18;
    _RAX = DObjGetModel(g_mdlprv.model.currentObj, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+38h]
      vmovss  dword ptr [rbp+1E0h+var_250.halfSize], xmm0
      vmovss  xmm1, dword ptr [rax+3Ch]
      vmovss  dword ptr [rbp+1E0h+var_250.halfSize+4], xmm1
      vmovss  xmm0, dword ptr [rax+40h]
      vmovss  dword ptr [rbp+1E0h+var_250.halfSize+8], xmm0
      vmovss  xmm1, dword ptr [rax+2Ch]
      vmovss  dword ptr [rbp+1E0h+var_250.midPoint], xmm1
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rbp+1E0h+var_250.midPoint+4], xmm0
      vmovss  xmm1, dword ptr [rax+34h]
      vmovss  dword ptr [rbp+1E0h+var_250.midPoint+8], xmm1
    }
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1E0h+var_250.midPoint+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+1E0h+var_250.halfSize+8]
      vmovss  xmm6, cs:__real@40a00000
      vsubss  xmm2, xmm1, xmm6
      vmovss  xmm0, dword ptr [rbp+1E0h+outOrigin+8]
      vsubss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbp+1E0h+outOrigin+8], xmm1
    }
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &end);
    __asm
    {
      vmovss  xmm7, cs:__real@c53b8000
      vaddss  xmm1, xmm7, dword ptr [rsp+2E0h+end+8]
      vmovss  dword ptr [rsp+2E0h+end+8], xmm1
      vmovups xmm2, cs:__xmm@40a00000000000000000000000000000
      vmovups xmmword ptr [rbp+1E0h+var_250.midPoint], xmm2
      vmovss  dword ptr [rbp+1E0h+var_250.halfSize+4], xmm6
      vmovss  dword ptr [rbp+1E0h+var_250.halfSize+8], xmm6
    }
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v16 + 2), &results, &outOrigin, &end, &v252, -1, 0, 1, 0, NULL, All);
    if ( !results.allsolid )
    {
      __asm
      {
        vmovss  xmm0, [rbp+1E0h+results.fraction]
        vucomiss xmm0, cs:__real@3f800000
      }
    }
    goto LABEL_73;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[2].id) && v18 - g_mdlprv.system.buttonTimes.walkabout > 250 )
  {
    g_mdlprv.system.buttonTimes.walkabout = v18;
    g_mdlprv.system.walkaboutActive = 1;
    SetViewerActive((LocalClientNum_t)v16, 0);
    RefdefView_GetOrg(&_R14->refdef.view, &end);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+178C4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rsp+2E0h+end+8]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm2, dword ptr [rsp+2E0h+end+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm3, dword ptr [rsp+2E0h+end]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+2E0h+skipChildren], xmm0
      vmovsd  qword ptr [rsp+2E0h+skipEntity], xmm1
      vmovsd  [rsp+2E0h+bounds], xmm2
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "setviewpos %f %f %f %f\n", *(double *)&_XMM3, *(double *)&bounds, skipEntity, skipChildren);
    v55 = v16;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v56 = -1i64;
    do
      ++v56;
    while ( dest[v56] );
    v57 = truncate_cast<int,unsigned __int64>(v56) + 1;
    cmdsize = s_cmd_textArray[v55].cmdsize;
    if ( cmdsize + v57 <= s_cmd_textArray[v55].maxsize )
    {
      v59 = cmdsize - 1;
      v60 = cmdsize - 1;
      if ( v59 >= 0 )
      {
        do
        {
          s_cmd_textArray[v55].data[v60 + v57] = s_cmd_textArray[v55].data[v60];
          --v60;
        }
        while ( v60 >= 0 );
      }
      memcpy_0(s_cmd_textArray[v55].data, dest, v57 - 1);
      s_cmd_textArray[v55].data[v57 - 1] = 10;
      s_cmd_textArray[v55].cmdsize += v57;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    memset(&end, 0, sizeof(end));
    goto LABEL_73;
  }
  if ( g_mdlprv.system.uiModeGPad == MDLPRVMODE_FREE )
  {
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[6].id) && v18 - g_mdlprv.system.buttonTimes.freeSpeed > 250 )
    {
      g_mdlprv.system.buttonTimes.freeSpeed = v18;
      freeModeSpeed = g_mdlprv.viewer.freeModeSpeed;
      if ( g_mdlprv.viewer.freeModeSpeed )
      {
        if ( g_mdlprv.viewer.freeModeSpeed == FREESPEED_SLOW )
        {
          freeModeSpeed = FREESPEED_NORMAL;
          g_mdlprv.viewer.freeModeSpeed = FREESPEED_NORMAL;
        }
        else if ( g_mdlprv.viewer.freeModeSpeed == FREESPEED_FAST )
        {
          freeModeSpeed = FREESPEED_SLOW;
          g_mdlprv.viewer.freeModeSpeed = FREESPEED_SLOW;
        }
      }
      else
      {
        freeModeSpeed = FREESPEED_FAST;
        g_mdlprv.viewer.freeModeSpeed = FREESPEED_FAST;
      }
    }
    else
    {
      freeModeSpeed = g_mdlprv.viewer.freeModeSpeed;
    }
    v62 = freeModeSpeed - 1;
    if ( v62 )
    {
      if ( v62 == 1 )
        __asm { vmovss  xmm6, cs:__real@447a0000 }
      else
        __asm { vmovss  xmm6, cs:__real@43960000 }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@41a00000 }
    }
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+2E0h+var_280]
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, 20) || CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[8].id) )
    {
      __asm { vmulss  xmm1, xmm6, xmm8; dz }
    }
    else
    {
      if ( !CL_Keys_IsKeyDown((LocalClientNum_t)v16, 21) && !CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[7].id) )
      {
LABEL_46:
        __asm
        {
          vmulss  xmm0, xmm6, xmm8
          vmulss  xmm6, xmm0, xmm10
          vmulss  xmm7, xmm0, xmm7
        }
        AngleVectors(&_R14->refdefViewAngles, &outOrigin, &end, &up);
        __asm
        {
          vmulss  xmm2, xmm6, dword ptr [rsp+2E0h+end]
          vmulss  xmm1, xmm7, dword ptr [rbp+1E0h+outOrigin]
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin; ModelPreviewer g_mdlprv
          vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin, xmm2; ModelPreviewer g_mdlprv
          vmulss  xmm3, xmm6, dword ptr [rsp+2E0h+end+4]
          vmulss  xmm2, xmm7, dword ptr [rbp+1E0h+outOrigin+4]
          vaddss  xmm3, xmm3, xmm2
          vaddss  xmm0, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4; ModelPreviewer g_mdlprv
          vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4, xmm0; ModelPreviewer g_mdlprv
          vmulss  xmm3, xmm6, dword ptr [rsp+2E0h+end+8]
          vmulss  xmm1, xmm7, dword ptr [rbp+1E0h+outOrigin+8]
          vaddss  xmm3, xmm3, xmm1
          vaddss  xmm0, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8; ModelPreviewer g_mdlprv
          vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8, xmm0; ModelPreviewer g_mdlprv
          vmulss  xmm7, xmm8, cs:__real@42b40000
          vmulss  xmm1, xmm7, [rbp+1E0h+yaw]
          vaddss  xmm0, xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4; ModelPreviewer g_mdlprv
          vmulss  xmm3, xmm0, cs:__real@3b360b61
          vxorps  xmm8, xmm8, xmm8
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vroundss xmm2, xmm8, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, cs:__real@43b40000
          vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles+4, xmm0; ModelPreviewer g_mdlprv
          vmulss  xmm1, xmm7, xmm12
          vaddss  xmm2, xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles; ModelPreviewer g_mdlprv
          vmulss  xmm4, xmm2, cs:__real@3b360b61
          vaddss  xmm3, xmm4, cs:__real@3f000000
          vroundss xmm2, xmm8, xmm3, 1
          vsubss  xmm0, xmm4, xmm2
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeAngles, xmm1; ModelPreviewer g_mdlprv
        }
        if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[5].id) )
        {
          MdlPrvFreePlaceModel(&g_mdlprv.viewer.freeModeOrigin);
        }
        else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[4].id) )
        {
          AngleVectors(&_R14->refdefViewAngles, &end, &v252.midPoint, &up);
          __asm
          {
            vmovss  xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
            vmulss  xmm2, xmm1, dword ptr [rsp+2E0h+end]
            vmovss  dword ptr [rsp+2E0h+end], xmm2
            vmulss  xmm3, xmm1, dword ptr [rsp+2E0h+end+4]
            vmovss  dword ptr [rsp+2E0h+end+4], xmm3
            vmulss  xmm4, xmm1, dword ptr [rsp+2E0h+end+8]
            vmovss  dword ptr [rsp+2E0h+end+8], xmm4
            vaddss  xmm2, xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin; ModelPreviewer g_mdlprv
            vmovss  dword ptr [rbp+1E0h+outOrigin], xmm2
            vaddss  xmm3, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4; ModelPreviewer g_mdlprv
            vmovss  dword ptr [rbp+1E0h+outOrigin+4], xmm3
            vaddss  xmm4, xmm4, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8; ModelPreviewer g_mdlprv
            vmovss  dword ptr [rbp+1E0h+outOrigin+8], xmm4
            vsubss  xmm0, xmm2, dword ptr [rax+28h]
            vmovss  dword ptr [rbp+1E0h+outOrigin], xmm0
            vsubss  xmm1, xmm3, dword ptr [rax+2Ch]
            vmovss  dword ptr [rbp+1E0h+outOrigin+4], xmm1
            vsubss  xmm0, xmm4, dword ptr [rax+30h]
            vmovss  dword ptr [rbp+1E0h+outOrigin+8], xmm0
            vmovss  xmm1, dword ptr [r14+178C4h]
            vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm1; ModelPreviewer g_mdlprv
            vmovss  xmm0, dword ptr [r14+178C0h]
            vxorps  xmm2, xmm0, xmm9
            vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical, xmm2; ModelPreviewer g_mdlprv
            vxorps  xmm3, xmm3, xmm3; z
            vxorps  xmm2, xmm2, xmm2; y
            vxorps  xmm1, xmm1, xmm1; x
          }
          Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1E0h+outOrigin]
            vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin, xmm0; ModelPreviewer g_mdlprv
            vmovss  xmm1, dword ptr [rbp+1E0h+outOrigin+4]
            vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4, xmm1; ModelPreviewer g_mdlprv
            vmovss  xmm0, dword ptr [rbp+1E0h+outOrigin+8]
            vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8, xmm0; ModelPreviewer g_mdlprv
          }
          GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        }
        goto LABEL_73;
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm8
        vxorps  xmm1, xmm0, xmm9
      }
    }
    MdlPrvFreeMoveVertical(_R14, *(float *)&_XMM1);
    goto LABEL_46;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, 18) && CL_Keys_IsKeyDown((LocalClientNum_t)v16, 19) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_FOCALMOVE;
    _RCX = modPrvCenterOffset;
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+2E0h+var_280]
      vmulss  xmm0, xmm6, cs:__real@42c80000
      vmulss  xmm4, xmm0, xmm12
      vmovss  xmm3, dword ptr [rcx+30h]
      vsubss  xmm3, xmm3, xmm4; z
      vmovss  xmm2, dword ptr [rcx+2Ch]; y
      vmovss  xmm1, dword ptr [rcx+28h]; x
    }
    Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmulss  xmm0, xmm10, xmm6
      vmulss  xmm9, xmm0, cs:__real@43480000
      vmulss  xmm0, xmm7, xmm6
      vmulss  xmm6, xmm0, cs:__real@43480000
      vmovss  xmm0, dword ptr [r14+178C4h]; yaw
    }
    YawVectors(*(float *)&_XMM0, &end, &outOrigin);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+2E0h+end]
      vmulss  xmm1, xmm3, xmm3
      vmovss  xmm4, dword ptr [rsp+2E0h+end+4]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm7, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm8, xmm0, xmm6
      vmovss  dword ptr [rsp+2E0h+end], xmm8
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm6, xmm1, xmm6
      vmovss  dword ptr [rsp+2E0h+end+4], xmm6
      vmovss  dword ptr [rsp+2E0h+end+8], xmm11
      vmovss  xmm3, dword ptr [rbp+1E0h+outOrigin]
      vmulss  xmm1, xmm3, xmm3
      vmovss  xmm4, dword ptr [rbp+1E0h+outOrigin+4]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbp+1E0h+outOrigin], xmm3
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm2, xmm1, xmm9
      vmovss  dword ptr [rbp+1E0h+outOrigin+4], xmm2
      vmovss  dword ptr [rbp+1E0h+outOrigin+8], xmm11
    }
    _RCX = modPrvCenterOffset;
    __asm
    {
      vaddss  xmm0, xmm3, xmm8
      vaddss  xmm1, xmm0, dword ptr [rcx+28h]; x
      vaddss  xmm2, xmm6, xmm2
      vaddss  xmm2, xmm2, dword ptr [rcx+2Ch]; y
      vmovss  xmm3, dword ptr [rcx+30h]; z
    }
    Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[25].id) && g_mdlprv.model.currentIndex >= 0 )
    {
      _RAX = DObjGetModel(g_mdlprv.model.currentObj, 0);
      __asm
      {
        vmovss  xmm3, dword ptr [rax+40h]; z
        vxorps  xmm2, xmm2, xmm2; y
        vxorps  xmm1, xmm1, xmm1; x
      }
      Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
  }
  else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[10].id) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_MODELMOVE;
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+2E0h+var_280]
      vmulss  xmm0, xmm6, cs:__real@c2c80000
      vmulss  xmm2, xmm0, xmm12; dz
      vxorps  xmm1, xmm1, xmm1; dy
      vxorps  xmm0, xmm0, xmm0; dx
    }
    MdlPrvModelOriginOffset(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm0, xmm10, xmm6
      vmulss  xmm10, xmm0, cs:__real@43480000
      vmulss  xmm0, xmm7, xmm6
      vmulss  xmm6, xmm0, cs:__real@43480000
      vmovss  xmm0, dword ptr [r14+178C4h]; yaw
    }
    YawVectors(*(float *)&_XMM0, &end, &outOrigin);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+2E0h+end]
      vmulss  xmm1, xmm3, xmm3
      vmovss  xmm4, dword ptr [rsp+2E0h+end+4]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm8, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm9, xmm0, xmm6
      vmovss  dword ptr [rsp+2E0h+end], xmm9
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm5, xmm1, xmm6
      vmovss  dword ptr [rsp+2E0h+end+4], xmm5
      vmovss  dword ptr [rsp+2E0h+end+8], xmm11
      vmovss  xmm3, dword ptr [rbp+1E0h+outOrigin]
      vmulss  xmm1, xmm3, xmm3
      vmovss  xmm4, dword ptr [rbp+1E0h+outOrigin+4]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm2, xmm0, xmm10
      vmovss  dword ptr [rbp+1E0h+outOrigin], xmm2
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm0, xmm1, xmm10
      vmovss  dword ptr [rbp+1E0h+outOrigin+4], xmm0
      vmovss  dword ptr [rbp+1E0h+outOrigin+8], xmm11
      vaddss  xmm1, xmm0, xmm5; dy
      vaddss  xmm0, xmm2, xmm9; dx
      vxorps  xmm2, xmm2, xmm2; dz
    }
    MdlPrvModelOriginOffset(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[11].id) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_MODELROTATE;
    if ( g_mdlprv.system.modelRotCamMode == MROTCAMMODE_TRAVEL )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+2E0h+var_280]
        vmulss  xmm0, xmm4, cs:__real@c3b40000
        vmulss  xmm1, xmm0, [rbp+1E0h+yaw]
        vaddss  xmm1, xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal; ModelPreviewer g_mdlprv
        vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm1; ModelPreviewer g_mdlprv
        vmulss  xmm2, xmm4, cs:__real@c3b40000
        vmulss  xmm0, xmm2, [rbp+1E0h+yaw]; deg
      }
      MdlPrvSpinYawOffset(*(float *)&_XMM0);
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+2E0h+var_280]
        vmulss  xmm0, xmm6, cs:__real@c3b40000
        vmulss  xmm1, xmm0, [rbp+1E0h+yaw]; deg
      }
      MdlPrvSpin_(1u, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm6, xmm6, cs:__real@c3340000
        vmulss  xmm1, xmm6, xmm7; deg
      }
      MdlPrvSpin_(0, *(float *)&_XMM1);
      __asm { vmulss  xmm1, xmm6, xmm10; deg }
      MdlPrvSpin_(2u, *(float *)&_XMM1);
    }
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[22].id) )
      CG_ModPrvModelResetRotation(v222, *(double *)&_XMM1, v223, pitch);
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[19].id) && v18 - g_mdlprv.system.buttonTimes.mdlRotMode > 250 )
    {
      g_mdlprv.system.buttonTimes.mdlRotMode = v18;
      g_mdlprv.system.modelRotCamMode = g_mdlprv.system.modelRotCamMode == MROTCAMMODE_STATIC;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat; ModelPreviewer g_mdlprv
        vmovups xmmword ptr [rbp+1E0h+var_250.midPoint], xmm0
      }
      UnitQuatToAxis((const vec4_t *)&v252, &axis);
      AxisToAngles(&axis, &end);
      __asm { vmovss  xmm0, dword ptr [rsp+2E0h+end+4]; yaw }
      YawToAxis(*(float *)&_XMM0, &axis);
      AxisToQuat(&axis, (vec4_t *)&v252);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+1E0h+var_250.midPoint]
        vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
      }
    }
  }
  else
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_CAMERA;
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[13].id) && v18 - g_mdlprv.system.buttonTimes.clone > 250 )
    {
      g_mdlprv.system.buttonTimes.clone = v18;
      MdlPrvCloneModel(_R14, v227, *(double *)&_XMM2);
    }
    else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v16, g_buttons[14].id) && v18 - g_mdlprv.system.buttonTimes.clearClones > 250 )
    {
      g_mdlprv.system.buttonTimes.clearClones = v18;
      MdlPrvCloneClearAll();
    }
    else
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+2E0h+var_280]
        vmulss  xmm0, xmm4, cs:__real@42c80000
        vmulss  xmm2, xmm0, xmm12
        vaddss  xmm2, xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical; ModelPreviewer g_mdlprv
        vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical, xmm2; ModelPreviewer g_mdlprv
        vmulss  xmm0, xmm4, cs:__real@c3340000
        vmulss  xmm3, xmm0, [rbp+1E0h+yaw]
        vaddss  xmm2, xmm3, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal; ModelPreviewer g_mdlprv
        vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm2; ModelPreviewer g_mdlprv
        vmulss  xmm0, xmm4, cs:__real@44e10000
        vmulss  xmm0, xmm0, xmm7; dx
        vxorps  xmm1, xmm1, xmm1; dy
      }
      CG_ModelPreviewerZoomCamera(*(double *)&_XMM0, *(double *)&_XMM1);
    }
  }
LABEL_73:
  _R11 = &v257;
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
MdlPrvDrawOverlayGamepad
==============
*/

void __fastcall MdlPrvDrawOverlayGamepad(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 
  const char *v24; 
  ButtonNames v29; 
  const char *v32; 
  const char *v52; 
  const char *v94; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v127; 
  char v128; 
  void *retaddr; 

  _RAX = &retaddr;
  v127 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  if ( g_mdlprv.model.currentIndex >= 0 && modPrvDisplayToggle->current.enabled )
  {
    if ( modPrvDrawDistanceToModel->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+outOrg]
        vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+outOrigin]
        vmovss  xmm1, dword ptr [rsp+0A8h+outOrg+4]
        vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+outOrigin+4]
        vmovss  xmm0, dword ptr [rsp+0A8h+outOrg+8]
        vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+outOrigin+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v24 = j_va("Distance to Model: %.0f", _RDX);
      __asm
      {
        vmovss  xmm2, cs:__real@43c80000; y
        vmovss  xmm1, cs:__real@43fa0000; x
      }
      CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2_8, v24, &colorWhiteFaded, 7);
      memset(&outOrg, 0, sizeof(outOrg));
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    __asm { vxorps  xmm2, xmm2, xmm2; y }
    if ( g_mdlprv.system.walkaboutActive )
    {
      __asm { vmovss  xmm1, cs:__real@43960000; x }
      CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Walkabout Mode", &colorRed, 7);
      __asm { vmovss  xmm2, cs:__real@41a00000 }
      v29 = BTN_WALKABOUT_EXIT;
LABEL_28:
      MdlPrvPrintHelpLine(scrPlace, v29, *(float *)&_XMM2);
      goto LABEL_29;
    }
    __asm
    {
      vmovss  xmm8, cs:__real@43960000
      vmovaps xmm1, xmm8; x
    }
    v32 = "Freelook Mode";
    if ( g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE )
      v32 = "Focused Mode";
    CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v32, &colorRed, 7);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm7, cs:__real@3f400000
      vmulss  xmm9, xmm0, xmm7
      vmovss  xmm2, cs:__real@41a00000; vPos
    }
    MdlPrvPrintHelpLine(scrPlace, BTN_MODESWITCH, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm6, xmm1, cs:__real@41a00000
      vmovaps xmm2, xmm6; vPos
    }
    MdlPrvPrintHelpLine(scrPlace, BTN_DROPMDL, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm6, xmm6, xmm1
      vmovaps xmm2, xmm6; vPos
    }
    MdlPrvPrintHelpLine(scrPlace, BTN_WALKABOUT_ENTER, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm6, xmm6, xmm1
    }
    if ( g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE )
    {
      __asm { vmovaps xmm2, xmm6; vPos }
      MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEMOV, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm6, xmm6, xmm1
        vmovaps xmm2, xmm6; vPos
      }
      MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEROT, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm6, xmm6, xmm1
        vmovaps xmm2, xmm6; vPos
      }
      MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEFOCALMOVE, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, xmm7
        vaddss  xmm6, xmm6, xmm2
      }
      if ( g_mdlprv.system.focusedMode == FOCUSEDMODE_MODELMOVE )
      {
        __asm
        {
          vmovaps xmm2, xmm9; y
          vmovaps xmm1, xmm8; x
        }
        CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Model Move", &colorWhiteFaded, 7);
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MMOV_2D, *(float *)&_XMM2);
        v29 = BTN_FOCUS_MMOV_UPDOWN;
      }
      else if ( g_mdlprv.system.focusedMode == FOCUSEDMODE_MODELROTATE )
      {
        __asm
        {
          vmovaps xmm2, xmm9; y
          vmovaps xmm1, xmm8; x
        }
        v94 = "Model Rotate";
        if ( g_mdlprv.system.modelRotCamMode )
          v94 = "Model Rotate (with camera)";
        CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v94, &colorWhiteFaded, 7);
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_TOGGLECAM, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
        }
        if ( g_mdlprv.system.modelRotCamMode == MROTCAMMODE_STATIC )
        {
          __asm { vmovaps xmm2, xmm6; vPos }
          MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_PITCHROLL, *(float *)&_XMM2);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm7
            vaddss  xmm6, xmm6, xmm1
          }
        }
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_YAW, *(float *)&_XMM2);
        v29 = BTN_FOCUS_MROT_RESET;
      }
      else if ( g_mdlprv.system.focusedMode )
      {
        __asm
        {
          vmovaps xmm2, xmm9; y
          vmovaps xmm1, xmm8; x
        }
        CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Focus Move", &colorWhiteFaded, 7);
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_FOCALMOVE_2D, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_FOCALMOVE_UPDOWN, *(float *)&_XMM2);
        v29 = BTN_FOCUS_FOCALMOVE_RESET;
      }
      else
      {
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, (ButtonNames)(LOBYTE(g_mdlprv.system.focusedMode) + 13), *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_DEFAULT_CLEARCLONES, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_DEFAULT_ZOOM, *(float *)&_XMM2);
        v29 = BTN_FOCUS_DEFAULT_ORBIT;
      }
      goto LABEL_27;
    }
    if ( g_mdlprv.viewer.freeModeSpeed == FREESPEED_SLOW )
    {
      v52 = "Move Slow";
    }
    else
    {
      if ( g_mdlprv.viewer.freeModeSpeed != FREESPEED_FAST )
      {
LABEL_15:
        __asm { vmovaps xmm2, xmm6; vPos }
        MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DROPFRONT, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DROPPOS, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FREE_TOGGLEMOVESPEED, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FREE_UP, *(float *)&_XMM2);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
          vmovaps xmm2, xmm6; vPos
        }
        MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DOWN, *(float *)&_XMM2);
        v29 = BTN_FREE_UPDOWN;
LABEL_27:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm2, xmm6, xmm1; vPos
        }
        goto LABEL_28;
      }
      v52 = "Move Fast";
    }
    __asm
    {
      vmovaps xmm2, xmm9; y
      vmovss  xmm1, cs:__real@439d8000; x
    }
    CG_DrawSmallDevStringColor(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v52, &colorWhiteFaded, 7);
    goto LABEL_15;
  }
LABEL_29:
  _R11 = &v128;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
MdlPrvFreeMoveVertical
==============
*/

void __fastcall MdlPrvFreeMoveVertical(const cg_t *cgGlob, double dz)
{
  vec3_t up; 
  vec3_t right; 
  vec3_t forward; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  AngleVectors(&cgGlob->refdefViewAngles, &forward, &right, &up);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rsp+78h+up]
    vaddss  xmm3, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin; ModelPreviewer g_mdlprv
    vmulss  xmm2, xmm6, dword ptr [rsp+78h+up+4]
    vaddss  xmm2, xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin, xmm3; ModelPreviewer g_mdlprv
    vmulss  xmm3, xmm6, dword ptr [rsp+78h+up+8]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+4, xmm2; ModelPreviewer g_mdlprv
    vaddss  xmm2, xmm3, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.freeModeOrigin+8, xmm2; ModelPreviewer g_mdlprv
    vmovaps xmm6, [rsp+78h+var_18]
  }
}

/*
==============
MdlPrvFreePlaceModel
==============
*/

void __fastcall MdlPrvFreePlaceModel(const vec3_t *pos, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  _RBX = pos;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin, xmm0; ModelPreviewer g_mdlprv
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4, xmm1; ModelPreviewer g_mdlprv
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8, xmm0; ModelPreviewer g_mdlprv
  }
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, _RBX);
}

/*
==============
MdlPrvModelOriginOffset
==============
*/

void __fastcall MdlPrvModelOriginOffset(double dx, double dy, double dz)
{
  vec3_t outOrigin; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
    vaddss  xmm4, xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin, xmm4; ModelPreviewer g_mdlprv
    vaddss  xmm3, xmm1, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4, xmm3; ModelPreviewer g_mdlprv
    vaddss  xmm5, xmm2, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8, xmm5; ModelPreviewer g_mdlprv
  }
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rsp+78h+outOrigin]
    vmovss  dword ptr [rsp+78h+outOrigin], xmm1
    vaddss  xmm0, xmm7, dword ptr [rsp+78h+outOrigin+4]
    vmovss  dword ptr [rsp+78h+outOrigin+4], xmm0
    vaddss  xmm2, xmm8, dword ptr [rsp+78h+outOrigin+8]
    vmovss  dword ptr [rsp+78h+outOrigin+8], xmm2
  }
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
MdlPrvPrintHelpLine
==============
*/

int __fastcall MdlPrvPrintHelpLine(const ScreenPlacement *scrPlace, ButtonNames idx, double vPos)
{
  __int64 v8; 
  int result; 
  float v18; 
  float v19; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f4ccccd
    vmovaps [rsp+78h+var_28], xmm7
  }
  v8 = idx;
  __asm
  {
    vmovaps xmm3, xmm6; xScale
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+78h+var_58], xmm6
    vmovaps xmm7, xmm2
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&vPos, *(float *)&_XMM3, v18, g_buttons[idx].name, &g_buttons[idx].nameColor, 5, cls.smallDevFont);
  __asm
  {
    vmovss  xmm1, cs:__real@42480000; x
    vmovaps xmm3, xmm6; xScale
    vmovaps xmm2, xmm7; y
    vmovss  [rsp+78h+var_58], xmm6
  }
  result = CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v19, g_buttons[v8].desc, &colorWhiteFaded, 5, cls.smallDevFont);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return result;
}

/*
==============
MdlPrvSpinYawOffset
==============
*/

void __fastcall MdlPrvSpinYawOffset(double deg)
{
  vec3_t origin; 
  vec3_t angles; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  __int64 v83; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v83;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vxorps  xmm14, xmm14, xmm14
    vmovaps xmm1, xmm0; deg
    vmovss  dword ptr [rsp+110h+angles], xmm14
    vmovss  dword ptr [rsp+110h+angles+4], xmm14
    vmovss  dword ptr [rsp+110h+angles+8], xmm14
    vmovaps xmm6, xmm0
  }
  MdlPrvSpin_(1u, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+110h+angles+4], xmm0
  }
  AnglesToAxis(&angles, &axis);
  _RAX = modPrvCenterOffset;
  __asm
  {
    vmovss  xmm8, dword ptr [rax+28h]
    vmovss  xmm7, dword ptr [rax+2Ch]
    vmovss  xmm6, dword ptr [rax+30h]
  }
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  __asm
  {
    vaddss  xmm13, xmm8, dword ptr [rsp+110h+outOrigin]
    vaddss  xmm12, xmm7, dword ptr [rsp+110h+outOrigin+4]
    vaddss  xmm11, xmm6, dword ptr [rsp+110h+outOrigin+8]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm5, xmm7, xmm1
    vmulss  xmm3, xmm5, dword ptr [rsp+110h+axis+4]
    vmulss  xmm8, xmm8, xmm1
    vmulss  xmm2, xmm8, dword ptr [rsp+110h+axis]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm9, xmm6, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+110h+axis+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+110h+axis+14h]
    vmulss  xmm3, xmm2, xmm10
    vmulss  xmm2, xmm8, dword ptr [rsp+110h+axis+0Ch]
    vsubss  xmm7, xmm13, xmm3
    vmulss  xmm3, xmm5, dword ptr [rsp+110h+axis+10h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm4, xmm5, dword ptr [rsp+110h+axis+1Ch]
    vmulss  xmm3, xmm2, xmm10
    vmulss  xmm2, xmm9, dword ptr [rsp+110h+axis+20h]
    vsubss  xmm6, xmm12, xmm3
    vmulss  xmm3, xmm8, dword ptr [rsp+110h+axis+18h]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vmulss  xmm4, xmm3, xmm10
    vsubss  xmm0, xmm11, xmm4
    vmovss  dword ptr [rsp+110h+origin], xmm7
    vmovss  dword ptr [rsp+110h+origin+4], xmm6
    vsubss  xmm8, xmm13, xmm7
    vsubss  xmm7, xmm12, xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+110h+origin+8], xmm0
    vsubss  xmm6, xmm11, xmm0
  }
  Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+110h+origin]
    vmovss  xmm4, dword ptr [rsp+110h+origin+4]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin, xmm0; ModelPreviewer g_mdlprv
    vmovss  xmm0, dword ptr [rsp+110h+origin+8]
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8, xmm0; ModelPreviewer g_mdlprv
    vmovss  dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4, xmm4; ModelPreviewer g_mdlprv
  }
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  __asm
  {
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm8; x
  }
  Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _R11 = &vars0;
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
  }
}

/*
==============
MdlPrvSpin_
==============
*/

void __fastcall MdlPrvSpin_(unsigned int yprIdx, double deg)
{
  int v38; 
  vec3_t angles; 
  vec4_t quat; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  __int64 v44; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v44;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vxorps  xmm0, xmm0, xmm0
  }
  _RBX = (int)yprIdx;
  __asm
  {
    vmovss  dword ptr [rsp+110h+angles], xmm0
    vmovss  dword ptr [rsp+110h+angles+4], xmm0
    vmovss  dword ptr [rsp+110h+angles+8], xmm0
    vmovaps xmm6, xmm1
  }
  if ( yprIdx >= 3 )
  {
    v38 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", yprIdx, v38) )
      __debugbreak();
  }
  __asm { vmovss  dword ptr [rsp+rbx*4+110h+angles], xmm6 }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat; ModelPreviewer g_mdlprv
    vmovups xmmword ptr [rsp+110h+quat], xmm0
  }
  UnitQuatToAxis(&quat, &in2);
  MatrixMultiply(&axis, &in2, &out);
  AxisCopy(&out, &in2);
  AxisToQuat(&in2, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+110h+quat]
    vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
  }
  AxisToAngles(&in2, &angles);
  __asm
  {
    vmovss  xmm5, cs:__real@3f000000
    vmovss  xmm6, cs:__real@3b360b61
    vmulss  xmm4, xmm6, dword ptr [rsp+110h+angles]
    vmulss  xmm1, xmm6, dword ptr [rsp+110h+angles+4]
    vmulss  xmm6, xmm6, dword ptr [rsp+110h+angles+8]
    vaddss  xmm3, xmm1, xmm5
    vaddss  xmm1, xmm3, xmm5
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm8, xmm0, cs:__real@43b40000
    vaddss  xmm2, xmm4, xmm5
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm1, xmm1, cs:__real@43b40000; x
    vaddss  xmm4, xmm6, xmm5
    vroundss xmm5, xmm9, xmm4, 1
    vsubss  xmm3, xmm6, xmm5
    vmulss  xmm3, xmm3, cs:__real@43b40000; z
    vmovaps xmm2, xmm8; y
    vmovss  dword ptr [rsp+110h+angles+8], xmm3
    vmovss  dword ptr [rsp+110h+angles+4], xmm8
    vmovss  dword ptr [rsp+110h+angles], xmm1
  }
  Dvar_SetVec3_Internal(modPrvRotationAngles, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
MdlPrvUpdateViewFocused
==============
*/
void MdlPrvUpdateViewFocused(vec3_t *outViewOrigin, tmat33_t<vec3_t> *outViewAxis, vec3_t *outViewAngles, float *zNear)
{
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  int v34; 
  float *v35; 
  float *v36; 
  bool v37; 
  int v38; 
  __int64 v53; 
  __int64 v54; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec4_t color; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v59; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v62; 
  tmat44_t<vec4_t> v63; 
  tmat44_t<vec4_t> in1; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  *(_QWORD *)outOrigin.v = zNear;
  _R14 = outViewOrigin;
  if ( !zNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 4186, ASSERT_TYPE_ASSERT, "(zNear)", (const char *)&queryFormat, "zNear") )
    __debugbreak();
  MatrixIdentity44(&out);
  MatrixIdentity44(&in2);
  MatrixIdentity44(&v62);
  __asm { vmovss  xmm1, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical; degrees }
  MatrixRotationY(&mat, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal; ModelPreviewer g_mdlprv
    vxorps  xmm1, xmm0, xmm6; degrees
  }
  MatrixRotationZ(&v59, *(float *)&_XMM1);
  v15 = 0;
  v16 = 0i64;
  v17 = 0i64;
  do
  {
    if ( v15 >= 4 )
    {
      LODWORD(v54) = 4;
      LODWORD(v53) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( v15 >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(v53) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    in2.m[v17].v[0] = mat.m[v16].v[0];
    in2.m[v17].v[1] = mat.m[v16].v[1];
    in2.m[v17].v[2] = mat.m[v16].v[2];
    if ( v15 >= 4 )
    {
      LODWORD(v54) = 4;
      LODWORD(v53) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( v15 >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(v53) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    v62.m[v17].v[0] = v59.m[v16].v[0];
    v62.m[v17].v[1] = v59.m[v16].v[1];
    v62.m[v17].v[2] = v59.m[v16].v[2];
    ++v15;
    ++v17;
    ++v16;
  }
  while ( (int)v15 < 3 );
  __asm
  {
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
    vxorps  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbp+190h+out+30h], xmm1
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+190h+out+34h], xmm6
    vmovss  dword ptr [rbp+190h+out+38h], xmm6
  }
  MatrixMultiply44Aligned(&out, &in2, &in1);
  MatrixMultiply44Aligned(&in1, &v62, &v63);
  _R13 = *(_QWORD *)outOrigin.v;
  if ( modPrvAnimApplyDelta->current.enabled && g_mdlprv.anim.isAnimPlaying )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin; ModelPreviewer g_mdlprv
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+290h+start], xmm1
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+4; ModelPreviewer g_mdlprv
      vaddss  xmm3, xmm0, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+290h+start+4], xmm3
      vmovss  xmm0, dword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialOrigin+8; ModelPreviewer g_mdlprv
      vaddss  xmm4, xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+290h+start+8], xmm4
    }
  }
  else
  {
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+290h+outOrigin]
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+290h+start], xmm1
      vmovss  xmm0, dword ptr [rsp+290h+outOrigin+4]
      vaddss  xmm3, xmm0, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+290h+start+4], xmm3
      vmovss  xmm0, dword ptr [rsp+290h+outOrigin+8]
      vaddss  xmm4, xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+290h+start+8], xmm4
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  __asm
  {
    vaddss  xmm1, xmm1, dword ptr [rbp+190h+var_100+30h]
    vmovss  dword ptr [r14], xmm1
    vaddss  xmm0, xmm3, dword ptr [rbp+190h+var_100+34h]
    vmovss  dword ptr [r14+4], xmm0
    vaddss  xmm2, xmm4, dword ptr [rbp+190h+var_100+38h]
    vmovss  dword ptr [r14+8], xmm2
  }
  v34 = 0;
  v35 = &outViewAxis->m[0].v[2];
  v36 = &v63.m[0].v[2];
  v37 = 1;
  do
  {
    if ( !v37 )
    {
      LODWORD(v54) = 3;
      LODWORD(v53) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( (unsigned int)v34 >= 4 )
    {
      LODWORD(v54) = 4;
      LODWORD(v53) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    *(v35 - 2) = *(v36 - 2);
    *(v35 - 1) = *(v36 - 1);
    *v35 = *v36;
    ++v34;
    v35 += 3;
    v36 += 4;
    v37 = (unsigned int)v34 < 3;
  }
  while ( v34 < 3 );
  AxisToAngles(outViewAxis, outViewAngles);
  if ( modPrvDrawAxis->current.enabled || g_mdlprv.system.focusedMode == FOCUSEDMODE_FOCALMOVE )
  {
    v38 = 0;
    _RBX = 0i64;
    __asm { vmovss  xmm8, cs:__real@3dcccccd }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsp+290h+color], xmm0
      }
      if ( (unsigned int)v38 >= 4 )
      {
        LODWORD(v54) = 4;
        LODWORD(v53) = v38;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      color.v[_RBX] = 1.0;
      __asm
      {
        vmovss  dword ptr [rsp+290h+outOrigin], xmm6
        vmovss  dword ptr [rsp+290h+outOrigin+4], xmm6
        vmovss  dword ptr [rsp+290h+outOrigin+8], xmm6
        vmulss  xmm7, xmm8, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius; ModelPreviewer g_mdlprv
      }
      if ( (unsigned int)v38 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v53) = v38;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rsp+rbx+290h+outOrigin], xmm7
        vmovss  xmm0, dword ptr [rsp+290h+outOrigin]
        vaddss  xmm1, xmm0, dword ptr [rsp+290h+start]
        vmovss  dword ptr [rsp+290h+outOrigin], xmm1
        vmovss  xmm2, dword ptr [rsp+290h+outOrigin+4]
        vaddss  xmm0, xmm2, dword ptr [rsp+290h+start+4]
        vmovss  dword ptr [rsp+290h+outOrigin+4], xmm0
        vmovss  xmm1, dword ptr [rsp+290h+outOrigin+8]
        vaddss  xmm2, xmm1, dword ptr [rsp+290h+start+8]
        vmovss  dword ptr [rsp+290h+outOrigin+8], xmm2
      }
      CG_DebugLine(&start, &outOrigin, &color, 1, 0);
      ++v38;
      ++_RBX;
    }
    while ( v38 < 3 );
  }
  __asm
  {
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.zNear; ModelPreviewer g_mdlprv
    vmovss  dword ptr [r13+0], xmm0
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
ModPrvAlloc
==============
*/
void *ModPrvAlloc(unsigned __int64 size)
{
  if ( !g_modPrvHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 688, ASSERT_TYPE_ASSERT, "(g_modPrvHunkUser)", (const char *)&queryFormat, "g_modPrvHunkUser") )
    __debugbreak();
  return Mem_HunkUser_AllocInternal(g_modPrvHunkUser, size, 4ui64, "ModPrvAlloc");
}

/*
==============
ModPrvExit_f
==============
*/
void ModPrvExit_f()
{
  DObj **p_obj; 
  __int64 v1; 
  int v2; 
  LocalClientNum_t ClientFromController; 

  p_obj = &g_mdlprv.model.clones[0].obj;
  v1 = 10i64;
  do
  {
    if ( *p_obj )
    {
      DObjFree(*p_obj);
      *p_obj = NULL;
    }
    p_obj += 257;
    --v1;
  }
  while ( v1 );
  v2 = Cmd_LocalControllerIndex();
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  SetViewerActive(ClientFromController, 0);
  g_mdlprv.system.walkaboutActive = 0;
  CG_ModPrvUnloadModel();
  DevGui_Toggle();
  DevGui_Reset();
}

/*
==============
PushMruEntry
==============
*/
void PushMruEntry(const char *entry, const dvar_t **mruDvars, const char **stringTable, const dvar_t *dvar)
{
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 integer64; 
  char *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 i; 
  char dest[256]; 

  Core_strcpy(dest, 0x100ui64, entry);
  v6 = 0;
  v7 = 0i64;
LABEL_2:
  v8 = 0x7FFFFFFFi64;
  integer64 = mruDvars[v7]->current.integer64;
  if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v10 = &dest[-integer64];
  do
  {
    v11 = (unsigned __int8)v10[integer64];
    v12 = v8;
    v13 = *(unsigned __int8 *)integer64++;
    --v8;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      v14 = v11 + 32;
      if ( (unsigned int)(v11 - 65) > 0x19 )
        v14 = v11;
      v11 = v14;
      v15 = v13 + 32;
      if ( (unsigned int)(v13 - 65) > 0x19 )
        v15 = v13;
      if ( v11 != v15 )
      {
        ++v6;
        if ( ++v7 < 3 )
          goto LABEL_2;
        break;
      }
    }
  }
  while ( v11 );
  for ( i = v6; i; --i )
    Dvar_SetString_Internal(mruDvars[i], mruDvars[i - 1]->current.string);
  Dvar_SetString_Internal(*mruDvars, dest);
  UpdateMru(mruDvars, stringTable, dvar);
}

/*
==============
ResetOrientation_f
==============
*/

void __fastcall ResetOrientation_f(__int64 a1, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  __int64 v23; 
  vec3_t angles; 
  vec4_t quat; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm1, cs:__real@42c80000
    vmovss  xmm0, cs:__real@c1a00000
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.centerRadius, xmm1; ModelPreviewer g_mdlprv
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm1, xmm1, xmm1; x
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.horizontal, xmm6; ModelPreviewer g_mdlprv
    vmovss  cs:?g_mdlprv@@3UModelPreviewer@@A.viewer.vertical, xmm0; ModelPreviewer g_mdlprv
  }
  Dvar_SetVec3_Internal(modPrvCenterOffset, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &g_mdlprv.model.initialOrigin);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:?g_mdlprv@@3UModelPreviewer@@A.model.initialYaw; y
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm1, xmm1, xmm1; x
  }
  Dvar_SetVec3_Internal(modPrvRotationAngles, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _RAX = modPrvRotationAngles;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm1, dword ptr [rax+30h]
    vmovss  dword ptr [rsp+68h+angles], xmm0
    vmovss  xmm0, cs:?g_mdlprv@@3UModelPreviewer@@A.anim.deltaYaw; ModelPreviewer g_mdlprv
    vaddss  xmm2, xmm0, cs:__real@43340000
    vmovss  dword ptr [rsp+68h+angles+8], xmm1
    vaddss  xmm1, xmm2, dword ptr [rax+2Ch]
    vmovss  dword ptr [rsp+68h+angles+4], xmm1
  }
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+quat]
    vmovups xmmword ptr cs:?g_mdlprv@@3UModelPreviewer@@A.model.currentEntity.placement.placement.quat, xmm0; ModelPreviewer g_mdlprv
  }
  if ( g_mdlprv.model.currentIndex >= 0 )
    FrameModel(v23, *(double *)&_XMM1, *(double *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
SetViewerActive
==============
*/
void SetViewerActive(LocalClientNum_t localClientNum, bool active)
{
  __int64 v2; 
  ClConnection **v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = &ClConnection::ms_connections[v2];
  if ( !*v4 )
  {
    if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
      __debugbreak();
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
      __debugbreak();
  }
  if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v2) )
  {
    if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v7 = cl_maxLocalClients;
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
      __debugbreak();
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v5 = "mpoff";
    if ( active )
      v5 = "mpon";
    (*v4)->AddReliableCommand(*v4, v5);
  }
}

/*
==============
UpdateMru
==============
*/
void UpdateMru(const dvar_t **mruDvars, const char **stringTable, const dvar_t *dvar)
{
  const dvar_t **v5; 
  int v6; 
  __int64 v7; 
  char *v8; 

  v5 = mruDvars;
  if ( !mruDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 390, ASSERT_TYPE_ASSERT, "(mruDvars)", (const char *)&queryFormat, "mruDvars") )
    __debugbreak();
  if ( !stringTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 391, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v6 = 0;
  v7 = 0i64;
  v8 = (char *)((char *)stringTable - (char *)v5);
  do
  {
    if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 395, ASSERT_TYPE_ASSERT, "(mruDvars[dvarIndex])", (const char *)&queryFormat, "mruDvars[dvarIndex]") )
      __debugbreak();
    if ( v7 && !*(_BYTE *)(*v5)->current.integer64 )
      break;
    ++v6;
    ++v7;
    *(const dvar_t **)((char *)v5 + (_QWORD)v8) = (const dvar_t *)(*v5)->current.integer64;
    ++v5;
  }
  while ( v7 < 4 );
  stringTable[v6] = NULL;
  if ( dvar )
    Dvar_UpdateEnumDomain(dvar, stringTable);
}

