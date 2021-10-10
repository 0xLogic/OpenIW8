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
  float stepCounter; 
  float v7; 
  const XAnimTree *Tree; 
  double Time; 
  double v10; 
  double Radius; 
  cpose_t *p_pose; 
  __int64 v13; 
  vec3_t inOrigin; 
  vec3_t outOrigin; 
  __int64 v16; 
  GfxSceneHudOutlineInfo v17; 
  __int64 v18; 
  vec3_t v19; 
  vec2_t v20; 
  vec4_t v21; 
  vec3_t v22; 
  vec2_t rot; 
  vec3_t trans; 
  GfxSceneHudOutlineInfo quat; 
  tmat33_t<vec3_t> axis; 

  v18 = -2i64;
  currentObj = g_mdlprv.model.currentObj;
  if ( g_mdlprv.model.currentObj && !modPrvHideModel->current.enabled )
  {
    stepCounter = g_mdlprv.anim.stepCounter;
    g_mdlprv.anim.stepCounter = g_mdlprv.anim.stepCounter - (float)((float)frametime * 0.001);
    if ( g_mdlprv.anim.stepCounter < 0.0 )
      g_mdlprv.anim.isAnimPlaying = 0;
    if ( modPrvAnimForceLoop->current.enabled )
    {
      CG_ModPrvLoopAnimation();
      currentObj = g_mdlprv.model.currentObj;
    }
    v7 = 0.0;
    if ( currentObj )
    {
      Tree = DObjGetTree(currentObj);
      if ( Tree )
      {
        if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
        {
          Time = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, 1u);
          v7 = *(float *)&Time;
        }
        if ( g_mdlprv.anim.toCurrentIndex >= 0 && v7 >= modPrvAnimCrossBlendTime->current.value && !g_mdlprv.anim.isToAnimPlaying )
        {
          stepCounter = modPrvAnimCrossBlendDuration->current.value;
          XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, 1.0, stepCounter, 1.0, (scr_string_t)0, 1, LINEAR);
          g_mdlprv.anim.isToAnimPlaying = 1;
        }
      }
      if ( g_mdlprv.model.currentObj && DObjGetTree(g_mdlprv.model.currentObj) && modPrvAnimApplyDelta->current.enabled && g_mdlprv.anim.isAnimPlaying )
      {
        rot.v[0] = 0.0;
        rot.v[1] = 0.0;
        v20.v[0] = 0.0;
        v20.v[1] = 0.0;
        trans.v[0] = 0.0;
        trans.v[1] = 0.0;
        trans.v[2] = 0.0;
        v19.v[0] = 0.0;
        v19.v[1] = 0.0;
        v19.v[2] = 0.0;
        if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
          XAnimCalcDelta(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, &rot, &trans, 1);
        if ( g_mdlprv.anim.toCurrentIndex >= 0 )
          XAnimCalcDelta(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, &v20, &v19, 1);
        v20.v[0] = v20.v[0] + rot.v[0];
        v20.v[1] = v20.v[1] + rot.v[1];
        v10 = RotationToYaw(&v20);
        g_mdlprv.anim.deltaYaw = *(float *)&v10;
        LODWORD(v21.v[0]) = modPrvRotationAngles->current.integer;
        v21.v[2] = modPrvRotationAngles->current.vector.v[2];
        v21.v[1] = (float)(*(float *)&v10 + 180.0) + modPrvRotationAngles->current.vector.v[1];
        AnglesToQuat((const vec3_t *)&v21, (vec4_t *)&quat);
        g_mdlprv.model.currentEntity.placement.placement.quat = *(vec4_t *)&quat.color;
        LODWORD(v19.v[0]) = COERCE_UNSIGNED_INT(trans.v[0] + v19.v[0]) ^ _xmm;
        LODWORD(v19.v[1]) = COERCE_UNSIGNED_INT(v19.v[1] + trans.v[1]) ^ _xmm;
        LODWORD(v19.v[2]) = COERCE_UNSIGNED_INT(v19.v[2] + trans.v[2]) ^ _xmm;
        GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        outOrigin.v[0] = outOrigin.v[0] + v19.v[0];
        outOrigin.v[1] = outOrigin.v[1] + v19.v[1];
        stepCounter = outOrigin.v[2];
        outOrigin.v[2] = outOrigin.v[2] + v19.v[2];
        GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
    DObjUpdateClientInfo((DObj *)&v16, stepCounter, a3, 0);
    CG_Pose_ClearPose(&g_mdlprv.model.pose);
    g_mdlprv.model.pose.eType = 29;
    g_mdlprv.model.currentEntity.info.pose = &g_mdlprv.model.pose;
    CG_GetLocalClientGlobals(localClientNum);
    v21 = g_mdlprv.model.currentEntity.placement.placement.quat;
    UnitQuatToAxis(&v21, &axis);
    AxisToAngles(&axis, &g_mdlprv.model.pose.angles);
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &inOrigin);
    CG_SetPoseOrigin(&g_mdlprv.model.pose, &inOrigin);
    if ( modPrvDrawBoneInfo->current.integer > 0 )
      CG_ModPrvDrawBones(localClientNum);
    CG_GetPoseOrigin(g_mdlprv.model.currentEntity.info.pose, &inOrigin);
    v22.v[0] = inOrigin.v[0];
    v22.v[1] = inOrigin.v[1];
    v22.v[2] = inOrigin.v[2] + 4.0;
    memset(&quat, 0, sizeof(quat));
    memset(&v17, 0, sizeof(v17));
    CG_Entity_AddDObjToScene(localClientNum, g_mdlprv.model.currentObj, g_mdlprv.model.currentEntity.info.pose, 0x844u, 0, (shaderOverride_t *)&v17, &quat, &v22, 0.0, 0);
    if ( !g_mdlprv.model.inited )
    {
      g_mdlprv.model.inited = 1;
      Radius = DObjGetRadius(g_mdlprv.model.currentObj);
      *(float *)&quat.color = inOrigin.v[0];
      quat.scopeStencil = inOrigin.v[1];
      *(float *)&quat.drawOccludedPixels = inOrigin.v[2];
      *(float *)&quat.forSpectator = *(float *)&Radius;
      *(float *)&quat.temperatureSet = *(float *)&Radius;
      quat.mapEntLookup = LODWORD(Radius);
      GfxSceneEntity_SetBounds(&g_mdlprv.model.currentEntity.cull, (const Bounds *)&quat);
      FrameModel();
      memset(&quat, 0, 24);
    }
    p_pose = &g_mdlprv.model.clones[0].pose;
    v13 = 10i64;
    do
    {
      if ( *((_QWORD *)&p_pose[-1].moverFx + 15) )
      {
        CG_Pose_ClearPose(p_pose);
        p_pose->eType = 29;
        *((_QWORD *)&p_pose[-1].moverFx + 12) = p_pose;
        v21 = *(vec4_t *)&p_pose[-5].killcamRagdollHandle;
        UnitQuatToAxis(&v21, &axis);
        AxisToAngles(&axis, &p_pose->angles);
        GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)&p_pose[-5].ragdollFlags, &inOrigin);
        CG_SetPoseOrigin(p_pose, &inOrigin);
        CG_GetPoseOrigin(*((const cpose_t **)&p_pose[-1].moverFx + 12), &inOrigin);
        v22.v[0] = inOrigin.v[0];
        v22.v[1] = inOrigin.v[1];
        v22.v[2] = inOrigin.v[2] + 4.0;
        memset(&v17, 0, sizeof(v17));
        memset(&quat, 0, sizeof(quat));
        CG_Entity_AddDObjToScene(localClientNum, *((const DObj **)&p_pose[-1].moverFx + 15), *((const cpose_t **)&p_pose[-1].moverFx + 12), 0x844u, 0, (shaderOverride_t *)&quat, &v17, &v22, 0.0, 0);
      }
      p_pose = (cpose_t *)((char *)p_pose + 2056);
      --v13;
    }
    while ( v13 );
    memset(&inOrigin, 0, sizeof(inOrigin));
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
  _BOOL8 v2; 
  int NumModels; 
  float v4; 
  const char *v5; 
  float v6; 
  int v7; 
  int v8; 
  int v9; 
  const XModel *Model; 
  unsigned int numBones; 
  unsigned int numRootBones; 
  const char *BoneName; 
  int v14; 
  __int64 v15; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  cg_t *LocalClientGlobals; 
  float v23; 
  float v24; 
  float v25; 
  cg_t *v26; 
  __int128 v27; 
  const char *v31; 
  int v32; 
  int v33; 
  int v35; 
  _BOOL8 v36; 
  _BOOL8 v37; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  vec3_t end; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> v42; 

  if ( !g_mdlprv.model.currentObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2304, ASSERT_TYPE_ASSERT, "(g_mdlprv.model.currentObj)", (const char *)&queryFormat, "g_mdlprv.model.currentObj") )
    __debugbreak();
  integer = modPrvDrawBoneInfo->current.integer;
  if ( integer )
  {
    v2 = ((integer - 1) & 0xFFFFFFFD) == 0;
    v36 = v2;
    v37 = (unsigned int)(integer - 2) <= 1;
    NumModels = DObjGetNumModels(g_mdlprv.model.currentObj);
    v35 = NumModels;
    if ( g_mdlprv.viewer.centerRadius >= 10.0 )
      v4 = (float)(g_mdlprv.viewer.centerRadius * 3.5) * 0.00050000002;
    else
      v4 = FLOAT_0_050000001;
    if ( modPrvDrawBoneInfo->current.integer < 4u )
      v5 = NULL;
    else
      v5 = Dvar_EnumToString(modPrvDrawBoneInfo);
    v6 = FLOAT_0_819152;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v33 = 0;
    v32 = 0;
    if ( NumModels > 0 )
    {
      while ( 1 )
      {
        Model = DObjGetModel(g_mdlprv.model.currentObj, v9);
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        numBones = Model->numBones;
        numRootBones = Model->numRootBones;
        if ( numRootBones < numBones )
          break;
LABEL_45:
        if ( ++v9 >= v35 )
          goto LABEL_46;
      }
      while ( 1 )
      {
        BoneName = CG_ModPrvModelGetBoneName(g_mdlprv.model.currentObj, v9, numRootBones);
        CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, numRootBones, &outTagMat, &outOrigin);
        v14 = numRootBones - Model->parentList[numRootBones - Model->numRootBones];
        if ( v14 >= 0 && v14 < Model->numBones )
        {
          CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, v14, &v42, &end);
          CL_AddDebugLine(&outOrigin, &end, &colorWhite, 0, 0, 0);
        }
        if ( modPrvDrawBoneInfo->current.integer < 4u )
        {
LABEL_36:
          if ( (!strncmp(BoneName, "tag_", 4ui64) || !v37) && (strncmp(BoneName, "tag_", 4ui64) || !v2) )
            goto LABEL_43;
        }
        else
        {
          v15 = 0x7FFFFFFFi64;
          v16 = BoneName;
          if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !BoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          do
          {
            v17 = (unsigned __int8)v16[v5 - BoneName];
            v18 = v15;
            v19 = *(unsigned __int8 *)v16++;
            --v15;
            if ( !v18 )
              break;
            if ( v17 != v19 )
            {
              v20 = v17 + 32;
              if ( (unsigned int)(v17 - 65) > 0x19 )
                v20 = v17;
              v17 = v20;
              v21 = v19 + 32;
              if ( (unsigned int)(v19 - 65) > 0x19 )
                v21 = v19;
              if ( v17 != v21 )
              {
                v7 = v33;
                v2 = v36;
                goto LABEL_36;
              }
            }
          }
          while ( v17 );
        }
        CL_AddOrientedDebugStar(&outOrigin, &outTagMat, &colorGreen, v4, 0, 0);
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        v23 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
        v24 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
        v25 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
        v26 = CG_GetLocalClientGlobals(localClientNum);
        RefdefView_GetOrg(&v26->refdef.view, &outOrg);
        v27 = LODWORD(outOrigin.v[1]);
        *(float *)&v27 = fsqrt((float)((float)((float)(outOrigin.v[1] - outOrg.v[1]) * (float)(outOrigin.v[1] - outOrg.v[1])) + (float)((float)(outOrigin.v[0] - outOrg.v[0]) * (float)(outOrigin.v[0] - outOrg.v[0]))) + (float)((float)(outOrigin.v[2] - outOrg.v[2]) * (float)(outOrigin.v[2] - outOrg.v[2])));
        _XMM1 = v27;
        __asm
        {
          vcmpless xmm0, xmm1, xmm14
          vblendvps xmm0, xmm1, xmm13, xmm0
        }
        if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[1] - outOrg.v[1])) * v24) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[0] - outOrg.v[0])) * v23)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[2] - outOrg.v[2])) * v25)) <= v6 )
        {
          v7 = v33;
LABEL_43:
          v8 = v32;
          goto LABEL_44;
        }
        v7 = numRootBones;
        v33 = numRootBones;
        v8 = v9;
        v32 = v9;
        v6 = (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[1] - outOrg.v[1])) * v24) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[0] - outOrg.v[0])) * v23)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[2] - outOrg.v[2])) * v25);
LABEL_44:
        v2 = v36;
        if ( (int)++numRootBones >= (int)numBones )
          goto LABEL_45;
      }
    }
LABEL_46:
    v31 = CG_ModPrvModelGetBoneName(g_mdlprv.model.currentObj, v8, v7);
    CG_DObjGetWorldBoneMatrix(g_mdlprv.model.currentEntity.info.pose, g_mdlprv.model.currentObj, v7, &outTagMat, &outOrigin);
    CL_AddDebugString(&outOrigin, &colorGreen, v4, v31, 0, 1);
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
void CG_ModPrvLoadAnimations(const char *animationFilename)
{
  const XAnimTree *Tree; 
  XAnimTree *v3; 
  XAnim_s *Anims; 
  XAnimOwner v5; 
  XAnimTree *v6; 
  int fromCurrentIndex; 
  float value; 
  XAnimSyncGroupID syncGroup; 
  vec3_t origin; 

  if ( g_mdlprv.model.currentObj )
  {
    Tree = DObjGetTree(g_mdlprv.model.currentObj);
    v3 = (XAnimTree *)Tree;
    if ( Tree )
    {
      XAnimGetAnims(Tree);
      XAnimFreeTree(v3, NULL);
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
    LOBYTE(v5) = 1;
    v6 = XAnimCreateTree(Anims, ModPrvAlloc, v5);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 2419, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    XanimReleaseMemoryLocks();
    DObjSetTree(g_mdlprv.model.currentObj, v6);
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
    if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
    {
      if ( g_mdlprv.anim.toCurrentIndex >= 0 && modPrvAnimBlendMode->current.integer == 1 )
        value = modPrvAnimBlendWeight->current.value;
      else
        value = 1.0 - modPrvAnimBlendWeight->current.value;
      XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, value, 1.0, 1.0, (scr_string_t)0, 1, LINEAR);
      g_mdlprv.anim.isFromLooped = XAnimIsLooped(Anims, 1u);
      fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
    }
    if ( g_mdlprv.anim.toCurrentIndex >= 0 )
    {
      if ( fromCurrentIndex >= 0 && modPrvAnimBlendMode->current.integer == 1 )
        XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, 1.0, 1.0, 1.0, (scr_string_t)0, 1, LINEAR);
      g_mdlprv.anim.isToLooped = XAnimIsLooped(Anims, 2u);
    }
    if ( animationFilename )
    {
      PushMruEntry(animationFilename, g_mdlprv.anim.mruNames, g_mdlprv.anim.mruNameTable, modPrvFromAnimMru);
      Dvar_UpdateEnumDomain(modPrvToAnimMru, g_mdlprv.anim.mruNameTable);
    }
    g_mdlprv.anim.isToAnimPlaying = 0;
    g_mdlprv.anim.isAnimPlaying = 1;
    g_mdlprv.anim.stepCounter = FLOAT_3_4028235e38;
    g_mdlprv.anim.deltaYaw = 0.0;
    origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
    origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
    origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    memset(&origin, 0, sizeof(origin));
  }
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
void CG_ModPrvLoadModel(const cg_t *cgameGlob, const char *modelFilename)
{
  signed __int64 v2; 
  void *v3; 
  const XModel *v6; 
  __int64 unsignedInt; 
  DObj *currentObj; 
  __int64 NumModels; 
  __int64 i; 
  int NumSurfaces; 
  int v14; 
  int v15; 
  int surfaceCount; 
  __int64 v17; 
  __int64 v18; 
  Material *v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  Material *v26; 
  __int64 v27; 
  XAnimOwner outDObjModel; 
  DObjModel *outDObjModela; 
  vec3_t origin; 
  vec3_t outOrg; 
  vec4_t quat; 
  DObjModel dobjModels; 
  __int64 v34[8192]; 
  unsigned __int8 lods[254]; 

  v3 = alloca(v2);
  if ( g_mdlprv.model.currentObj )
  {
    origin = g_mdlprv.model.initialOrigin;
  }
  else
  {
    RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
    origin.v[0] = (float)(g_mdlprv.viewer.centerRadius * cgameGlob->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
    origin.v[1] = (float)(g_mdlprv.viewer.centerRadius * cgameGlob->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
    origin.v[2] = cgameGlob->predictedPlayerState.origin.v[2];
    SetViewerActive(cgameGlob->localClientNum, 1);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  CG_ModPrvUnloadModel();
  LODWORD(g_mdlprv.system.gamePadRStickDeflect) = modPrvRStickDeflectMax->current.integer;
  Dvar_SetFloat_Internal(modPrvRStickDeflectMax, 1.0);
  R_SetIgnorePrecacheErrors(1);
  R_RegisterModel(modelFilename);
  R_SetIgnorePrecacheErrors(0);
  v6 = R_RegisterModel(modelFilename);
  DObjInitModel(v6, (scr_string_t)0, 0, 0, NULL, &dobjModels);
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
  g_mdlprv.model.initialOrigin = origin;
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  Dvar_SetVec3_Internal(modPrvOrigin, 0.0, 0.0, 0.0);
  _XMM0 = 0i64;
  __asm { vroundss xmm5, xmm0, xmm3, 1 }
  g_mdlprv.model.initialYaw = (float)((float)(cgameGlob->refdefViewAngles.v[1] * 0.0027777778) - *(float *)&_XMM5) * 360.0;
  Dvar_SetVec3_Internal(modPrvCenterOffset, 0.0, 0.0, 0.0);
  Dvar_SetVec3_Internal(modPrvRotationAngles, 0.0, g_mdlprv.model.initialYaw, 0.0);
  LODWORD(outOrg.v[0]) = modPrvRotationAngles->current.integer;
  outOrg.v[2] = modPrvRotationAngles->current.vector.v[2];
  outOrg.v[1] = (float)(g_mdlprv.anim.deltaYaw + 180.0) + modPrvRotationAngles->current.vector.v[1];
  AnglesToQuat(&outOrg, &quat);
  g_mdlprv.model.currentEntity.placement.placement.quat = quat;
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
    v14 = 0;
    v15 = 0;
    surfaceCount = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.model.surfaceCount > 0 )
    {
      v17 = 0i64;
      v18 = 0i64;
      do
      {
        v19 = g_mdlprv.mat.surfMatHandles[v18];
        if ( v19 )
        {
          v20 = 0i64;
          if ( v17 <= 0 )
          {
LABEL_29:
            if ( (unsigned int)(v14 + 1) >= 0x82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1817, ASSERT_TYPE_ASSERT, "(uniqueMatCount + 1 < ( sizeof( *array_counter( g_mdlprv.mat.nameTable ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount + 1 < ARRAY_COUNT( g_mdlprv.mat.nameTable )") )
              __debugbreak();
            g_mdlprv.mat.nameTable[v17 + 1] = Material_GetName(v19);
            if ( (unsigned int)v14 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1820, ASSERT_TYPE_ASSERT, "(uniqueMatCount < ( sizeof( *array_counter( uniqueHash ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount < ARRAY_COUNT( uniqueHash )") )
              __debugbreak();
            v34[v17] = (__int64)v19;
            ++v14;
            ++v17;
            surfaceCount = g_mdlprv.model.surfaceCount;
          }
          else
          {
            while ( (Material *)v34[v20] != v19 )
            {
              if ( ++v20 >= v17 )
                goto LABEL_29;
            }
          }
        }
        ++v15;
        ++v18;
      }
      while ( v15 < surfaceCount );
    }
    g_mdlprv.mat.nameTable[v14 + 1] = NULL;
    Dvar_UpdateEnumDomain(modPrvMatSelect, g_mdlprv.mat.nameTable);
    Dvar_UpdateEnumDomain(modPrvMatReplace, g_mdlprv.mat.nameTable);
    g_mdlprv.mat.handleCount = v14;
    g_mdlprv.mat.handleArray = (Material **)Mem_Virtual_Alloc(8i64 * v14, "MODPRV_MaterialHandles", TRACK_DEBUG);
    v21 = 0;
    v22 = 0;
    v23 = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.model.surfaceCount > 0 )
    {
      v24 = 0i64;
      v25 = 0i64;
      do
      {
        v26 = g_mdlprv.mat.surfMatHandles[v25];
        if ( v26 )
        {
          v27 = 0i64;
          if ( v24 <= 0 )
          {
LABEL_43:
            if ( v21 >= g_mdlprv.mat.handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1852, ASSERT_TYPE_ASSERT, "(uniqueMatCount < g_mdlprv.mat.handleCount)", (const char *)&queryFormat, "uniqueMatCount < g_mdlprv.mat.handleCount") )
              __debugbreak();
            g_mdlprv.mat.handleArray[v24] = g_mdlprv.mat.surfMatHandles[v25];
            if ( (unsigned int)v21 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 1855, ASSERT_TYPE_ASSERT, "(uniqueMatCount < ( sizeof( *array_counter( uniqueHash ) ) + 0 ))", (const char *)&queryFormat, "uniqueMatCount < ARRAY_COUNT( uniqueHash )") )
              __debugbreak();
            v34[v24] = (__int64)v26;
            ++v21;
            ++v24;
            v23 = g_mdlprv.model.surfaceCount;
          }
          else
          {
            while ( (Material *)v34[v27] != v26 )
            {
              if ( ++v27 >= v24 )
                goto LABEL_43;
            }
          }
        }
        ++v22;
        ++v25;
      }
      while ( v22 < v23 );
    }
  }
  Dvar_Reset(modPrvMatSelect, DVAR_SOURCE_INTERNAL);
  *(_QWORD *)&g_mdlprv.mat.selectSliderIndex = 0i64;
  g_mdlprv.mat.replaceIndex = -1;
}

/*
==============
CG_ModPrvLoopAnimation
==============
*/
bool CG_ModPrvLoopAnimation()
{
  float v0; 
  float v1; 
  const XAnimTree *Tree; 
  XAnimTree *v3; 
  int fromCurrentIndex; 
  double Time; 
  int toCurrentIndex; 
  double v7; 
  bool result; 
  float value; 
  vec3_t origin; 

  v0 = 0.0;
  v1 = 0.0;
  if ( !g_mdlprv.model.currentObj )
    return 0;
  Tree = DObjGetTree(g_mdlprv.model.currentObj);
  v3 = (XAnimTree *)Tree;
  if ( !Tree || !XAnimGetAnims(Tree) )
    return 0;
  fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
  {
    Time = XAnimGetTime(v3, 0, XANIM_SUBTREE_DEFAULT, 1u);
    v0 = *(float *)&Time;
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  }
  toCurrentIndex = g_mdlprv.anim.toCurrentIndex;
  if ( g_mdlprv.anim.toCurrentIndex >= 0 )
  {
    v7 = XAnimGetTime(v3, 0, XANIM_SUBTREE_DEFAULT, 2u);
    v1 = *(float *)&v7;
    toCurrentIndex = g_mdlprv.anim.toCurrentIndex;
    fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
  }
  if ( fromCurrentIndex >= 0 )
  {
    if ( toCurrentIndex >= 0 )
      goto LABEL_15;
    if ( v0 >= 1.0 )
    {
      if ( !g_mdlprv.anim.isFromLooped )
      {
        XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, 1.0, 1.0, 1.0, (scr_string_t)0, 1, LINEAR);
        origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
        origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
        origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
        GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
        memset(&origin, 0, sizeof(origin));
      }
      return 1;
    }
  }
  if ( toCurrentIndex < 0 )
    return 0;
LABEL_15:
  if ( fromCurrentIndex >= 0 || v1 < 1.0 )
  {
    if ( fromCurrentIndex >= 0 && v1 >= 1.0 )
    {
      if ( modPrvAnimBlendMode->current.integer == 1 )
        value = modPrvAnimBlendWeight->current.value;
      else
        value = 1.0 - modPrvAnimBlendWeight->current.value;
      XAnimClearTreeGoalWeights(v3, 0, XANIM_SUBTREE_DEFAULT, 2u, 0.0, 1, g_mdlprv.model.currentObj, LINEAR);
      XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, XANIM_SUBTREE_DEFAULT, 0, value, 1.0, 1.0, (scr_string_t)0, 1, LINEAR);
      g_mdlprv.anim.isToAnimPlaying = 0;
      origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
      origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
      origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
      GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
      result = 1;
      memset(&origin, 0, sizeof(origin));
      return result;
    }
    return 0;
  }
  if ( !g_mdlprv.anim.isToLooped )
  {
    XAnimSetGoalWeightKnobAll(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, XANIM_SUBTREE_DEFAULT, 0, 1.0, 1.0, 1.0, (scr_string_t)0, 1, LINEAR);
    origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
    origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
    origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    memset(&origin, 0, sizeof(origin));
  }
  return 1;
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
void CG_ModPrvModelRecentAccepted(const cg_t *cgameGlob)
{
  int v2; 
  const char *v3; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  __int64 v14; 
  const dvar_t **v15; 

  Dvar_ClearModified(modPrvModelMru);
  v2 = 0;
  v3 = Dvar_EnumToString(modPrvModelMru);
  if ( g_mdlprv.system.modelCount > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = 0x7FFFFFFFi64;
      v6 = g_mdlprv.system.modelNames[v4];
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = v3 - v6;
      while ( 1 )
      {
        v8 = (unsigned __int8)v6[v7];
        v9 = v5;
        v10 = *(unsigned __int8 *)v6++;
        --v5;
        if ( !v9 )
        {
LABEL_18:
          CG_ModPrvLoadModel(cgameGlob, v3);
          g_mdlprv.model.currentIndex = v2;
          return;
        }
        if ( v8 != v10 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v12 = v10;
          if ( v8 != v12 )
            break;
        }
        if ( !v8 )
          goto LABEL_18;
      }
      ++v2;
      ++v4;
    }
    while ( v2 < g_mdlprv.system.modelCount );
  }
  Com_Printf(14, "Model previewer could not load <%s> because it does not exist.\n ", v3);
  v13 = modPrvModelMru;
  if ( !modPrvModelMru && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 433, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  v14 = v13->current.integer + 1i64;
  if ( v14 < 4 )
  {
    v15 = &g_mdlprv.model.mruNames[v14];
    do
    {
      Dvar_SetString_Internal(*(v15 - 1), (*v15)->current.string);
      ++v15;
    }
    while ( (__int64)v15 < (__int64)g_mdlprv.model.mruNameTable );
  }
  Dvar_SetString_Internal(g_mdlprv.model.mruNames[3], (const char *)&queryFormat.fmt + 3);
  UpdateMru(g_mdlprv.model.mruNames, g_mdlprv.model.mruNameTable, v13);
}

/*
==============
CG_ModPrvModelResetRotation
==============
*/
void CG_ModPrvModelResetRotation()
{
  float v0; 
  vec3_t angles; 
  vec4_t quat; 

  Dvar_SetVec3_Internal(modPrvRotationAngles, 0.0, g_mdlprv.model.initialYaw, 0.0);
  v0 = modPrvRotationAngles->current.vector.v[2];
  LODWORD(angles.v[0]) = modPrvRotationAngles->current.integer;
  angles.v[2] = v0;
  angles.v[1] = (float)(g_mdlprv.anim.deltaYaw + 180.0) + modPrvRotationAngles->current.vector.v[1];
  AnglesToQuat(&angles, &quat);
  g_mdlprv.model.currentEntity.placement.placement.quat = quat;
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
    }
    *(_OWORD *)g_mdlprv.model.mruNames = _XMM0;
    *(_OWORD *)&g_mdlprv.model.mruNames[2] = _XMM1;
    *(_OWORD *)&g_mdlprv.anim.mruNames[1] = _XMM0;
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
    Dvar_SetFloat_Internal(modPrvRStickDeflectMax, g_mdlprv.system.gamePadRStickDeflect);
}

/*
==============
CG_ModelPreviewerBuildViewPosStr
==============
*/
void CG_ModelPreviewerBuildViewPosStr(char *buffer, unsigned int bufferSize)
{
  unsigned __int64 v2; 
  vec3_t outOrigin; 
  __int64 v5; 

  v5 = -2i64;
  v2 = bufferSize;
  if ( modPrvCenterOffset )
  {
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    Com_sprintf(buffer, v2, "%.2f %.2f %.2f %.2f %.2f %.2f", (float)(outOrigin.v[0] + modPrvCenterOffset->current.value), (float)(outOrigin.v[1] + modPrvCenterOffset->current.vector.v[1]), (float)(outOrigin.v[2] + modPrvCenterOffset->current.vector.v[2]), g_mdlprv.viewer.centerRadius, g_mdlprv.viewer.vertical, g_mdlprv.viewer.horizontal);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    Com_sprintf(buffer, bufferSize, "#ERROR-NotInGame");
  }
}

/*
==============
CG_ModelPreviewerCreateDevGui
==============
*/

void __fastcall CG_ModelPreviewerCreateDevGui(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v3; 
  __int64 v8; 
  int v9; 
  int cmdsize; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned __int8 *v14; 

  v3 = localClientNum;
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&g_mdlprv.system.modelRotCamMode = _XMM0;
    *(_OWORD *)g_mdlprv.model.lodDist = _xmm;
    g_mdlprv.viewer.centerRadius = FLOAT_100_0;
    _XMM0 = LODWORD(FLOAT_N20_0);
    __asm { vpxor   xmm1, xmm1, xmm1 }
    g_mdlprv.viewer.vertical = FLOAT_N20_0;
    g_mdlprv.viewer.horizontal = 0.0;
    g_mdlprv.inited = 1;
    g_mdlprv.system.cachedAllModels = 0;
    g_mdlprv.system.uiModePC = SELECTION_MODE;
    *(_QWORD *)&g_mdlprv.system.uiModeGPad = 0i64;
    *(_OWORD *)&g_mdlprv.system.buttonTimes.camDown = _XMM1;
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
    g_mdlprv.viewer.zNear = r_zPlanes->current.vector.v[2];
    g_mdlprv.viewer.freeModeOrigin.v[2] = 0.0;
    g_mdlprv.viewer.freeModeOrigin.v[1] = 0.0;
    g_mdlprv.viewer.freeModeOrigin.v[0] = 0.0;
    g_mdlprv.viewer.freeModeAngles.v[2] = 0.0;
    g_mdlprv.viewer.freeModeAngles.v[1] = 0.0;
    g_mdlprv.viewer.freeModeAngles.v[0] = 0.0;
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&g_mdlprv.mat.handleArray = _XMM0;
    g_mdlprv.mat.handleCount = -1;
    Dvar_Reset(modPrvMatSelect, DVAR_SOURCE_INTERNAL);
    g_mdlprv.mat.replaceIndex = -1;
    g_mdlprv.mat.prevReplaced = NULL;
    *(_QWORD *)&g_mdlprv.mat.selectSliderIndex = 0i64;
    v8 = v3;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v9 = truncate_cast<int,unsigned __int64>(0x1Bui64);
    cmdsize = s_cmd_superUser_textArray[v8].cmdsize;
    v11 = v9 + 1;
    if ( cmdsize + v9 + 1 <= s_cmd_superUser_textArray[v8].maxsize )
    {
      v12 = cmdsize - 1;
      v13 = cmdsize - 1;
      if ( v12 >= 0 )
      {
        do
        {
          v14 = &s_cmd_superUser_textArray[v8].data[v13--];
          v14[v11] = *v14;
        }
        while ( v13 >= 0 );
      }
      memcpy_0(s_cmd_superUser_textArray[v8].data, "exec devgui_modelpreviewer\n", v11 - 1);
      s_cmd_superUser_textArray[v8].data[v11 - 1] = 10;
      s_cmd_superUser_textArray[v8].cmdsize += v11;
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
void CG_ModelPreviewerFrame(const cg_t *cgameGlob)
{
  __int64 integer; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int v5; 
  XAnimTree *Tree; 
  int fromCurrentIndex; 
  float v8; 
  float value; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int replaceIndex; 
  Material *prevReplaced; 
  int surfaceCount; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  Material **handleArray; 
  vec3_t origin; 
  __int64 v22; 
  vec3_t angles; 
  vec4_t quat; 

  v22 = -2i64;
  if ( !g_mdlprv.inited )
    return;
  if ( modPrvLoadModel->modified )
  {
    Dvar_ClearModified(modPrvLoadModel);
    CG_ModPrvLoadModel(cgameGlob, g_mdlprv.system.modelNames[modPrvLoadModel->current.integer]);
    g_mdlprv.model.currentIndex = modPrvLoadModel->current.integer;
  }
  else if ( g_mdlprv.system.cachedAllModels )
  {
    integer = modPrvLoadModel->latched.integer;
    if ( (_DWORD)integer != g_mdlprv.system.lastLoadModel )
    {
      CG_ModPrvLoadModel(cgameGlob, g_mdlprv.system.modelNames[integer]);
      g_mdlprv.system.lastLoadModel = modPrvLoadModel->latched.integer;
    }
  }
  if ( modPrvModelMru->modified )
    CG_ModPrvModelRecentAccepted(cgameGlob);
  if ( modPrvOrigin->modified )
  {
    Dvar_ClearModified(modPrvOrigin);
    origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
    origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
    origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
    GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
    memset(&origin, 0, sizeof(origin));
  }
  if ( modPrvRotationAngles->modified )
  {
    Dvar_ClearModified(modPrvRotationAngles);
    LODWORD(angles.v[0]) = modPrvRotationAngles->current.integer;
    angles.v[2] = modPrvRotationAngles->current.vector.v[2];
    angles.v[1] = (float)(g_mdlprv.anim.deltaYaw + 180.0) + modPrvRotationAngles->current.vector.v[1];
    AnglesToQuat(&angles, &quat);
    g_mdlprv.model.currentEntity.placement.placement.quat = quat;
  }
  if ( modPrvFromAnimMru->modified )
    CG_ModPrvAnimRecentAccept(modPrvFromAnimMru, &g_mdlprv.anim.fromCurrentIndex);
  if ( modPrvToAnimMru->modified )
    CG_ModPrvAnimRecentAccept(modPrvToAnimMru, &g_mdlprv.anim.toCurrentIndex);
  v3 = modPrvLoadFromAnim;
  if ( modPrvLoadFromAnim->modified )
  {
    Dvar_ClearModified(modPrvLoadFromAnim);
    g_mdlprv.anim.fromCurrentIndex = v3->current.integer;
    CG_ModPrvLoadAnimations(g_mdlprv.system.animNames[v3->current.integer]);
  }
  v4 = modPrvLoadToAnim;
  if ( modPrvLoadToAnim->modified )
  {
    Dvar_ClearModified(modPrvLoadToAnim);
    g_mdlprv.anim.toCurrentIndex = v4->current.integer;
    CG_ModPrvLoadAnimations(g_mdlprv.system.animNames[v4->current.integer]);
  }
  if ( modPrvAnimCrossBlendTime->modified || modPrvAnimCrossBlendDuration->modified )
  {
    Dvar_ClearModified(modPrvAnimCrossBlendTime);
    Dvar_ClearModified(modPrvAnimCrossBlendDuration);
    CG_ModPrvLoadAnimations(NULL);
  }
  v5 = 0;
  if ( modPrvAnimBlendWeight->modified )
  {
    Dvar_ClearModified(modPrvAnimBlendWeight);
    if ( g_mdlprv.model.currentObj )
    {
      Tree = DObjGetTree(g_mdlprv.model.currentObj);
      fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
      if ( g_mdlprv.anim.fromCurrentIndex >= 0 )
      {
        if ( g_mdlprv.anim.toCurrentIndex >= 0 )
          v8 = 1.0 - modPrvAnimBlendWeight->current.value;
        else
          v8 = FLOAT_1_0;
        XAnimClearTreeGoalWeights(Tree, 0, XANIM_SUBTREE_DEFAULT, 1u, 0.0, 1, g_mdlprv.model.currentObj, LINEAR);
        XAnimSetGoalWeight(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 1u, v8, 1.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
        fromCurrentIndex = g_mdlprv.anim.fromCurrentIndex;
      }
      if ( g_mdlprv.anim.toCurrentIndex >= 0 )
      {
        if ( fromCurrentIndex >= 0 )
          value = modPrvAnimBlendWeight->current.value;
        else
          value = FLOAT_1_0;
        XAnimClearTreeGoalWeights(Tree, 0, XANIM_SUBTREE_DEFAULT, 2u, 0.0, 1, g_mdlprv.model.currentObj, LINEAR);
        XAnimSetGoalWeight(g_mdlprv.model.currentObj, 0, XANIM_SUBTREE_DEFAULT, 2u, value, 1.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
      }
    }
  }
  if ( !modPrvMatReplace->modified )
  {
    if ( modPrvMatReplace->latched.integer == g_mdlprv.system.lastMatReplace )
      return;
    g_mdlprv.system.lastMatReplace = modPrvMatReplace->latched.integer;
    if ( !modPrvMatSelect->current.integer )
      return;
    v13 = modPrvMatReplace->latched.integer;
    if ( !v13 )
      return;
    replaceIndex = v13 - 1;
    g_mdlprv.mat.replaceIndex = replaceIndex;
    prevReplaced = g_mdlprv.mat.prevReplaced;
    surfaceCount = g_mdlprv.model.surfaceCount;
    if ( g_mdlprv.mat.prevReplaced )
    {
      v17 = 0;
      if ( g_mdlprv.model.surfaceCount <= 0 )
        goto LABEL_59;
      v18 = 0i64;
      do
      {
        if ( g_mdlprv.mat.surfMatHandles[v18] == prevReplaced )
        {
          R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v17, prevReplaced);
          prevReplaced = g_mdlprv.mat.prevReplaced;
          surfaceCount = g_mdlprv.model.surfaceCount;
        }
        ++v17;
        ++v18;
      }
      while ( v17 < surfaceCount );
      replaceIndex = g_mdlprv.mat.replaceIndex;
    }
    if ( surfaceCount > 0 )
    {
      v19 = 0i64;
      handleArray = g_mdlprv.mat.handleArray;
      do
      {
        if ( g_mdlprv.mat.surfMatHandles[v19] == handleArray[modPrvMatSelect->current.integer - 1] )
        {
          R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v5, handleArray[replaceIndex]);
          replaceIndex = g_mdlprv.mat.replaceIndex;
          handleArray = g_mdlprv.mat.handleArray;
          surfaceCount = g_mdlprv.model.surfaceCount;
        }
        ++v5;
        ++v19;
      }
      while ( v5 < surfaceCount );
      goto LABEL_60;
    }
LABEL_59:
    handleArray = g_mdlprv.mat.handleArray;
LABEL_60:
    g_mdlprv.mat.prevReplaced = handleArray[replaceIndex];
    return;
  }
  Dvar_ClearModified(modPrvMatReplace);
  v10 = g_mdlprv.mat.replaceIndex;
  if ( !modPrvMatSelect->current.integer )
    v10 = -1;
  g_mdlprv.mat.replaceIndex = v10;
  v11 = 0;
  if ( g_mdlprv.model.surfaceCount > 0 )
  {
    v12 = 0i64;
    do
      R_DObjReplaceMaterial(g_mdlprv.model.currentObj, modPrvLod->current.integer, v11++, g_mdlprv.mat.surfMatHandles[v12++]);
    while ( v11 < g_mdlprv.model.surfaceCount );
  }
  g_mdlprv.mat.prevReplaced = NULL;
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
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  float v9; 
  vec3_t angles; 
  vec4_t quat; 

  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type == 4 )
  {
    v5 = key - 101;
    if ( v5 )
    {
      v6 = v5 - 12;
      if ( v6 )
      {
        v7 = v6 - 6;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 2 )
              CG_ModPrvModelResetRotation();
          }
          else
          {
            Dvar_SetVec3_Internal(modPrvRotationAngles, 0.0, modPrvRotationAngles->current.vector.v[1], 0.0);
            v9 = modPrvRotationAngles->current.vector.v[2];
            LODWORD(angles.v[0]) = modPrvRotationAngles->current.integer;
            angles.v[2] = v9;
            angles.v[1] = (float)(g_mdlprv.anim.deltaYaw + 180.0) + modPrvRotationAngles->current.vector.v[1];
            AnglesToQuat(&angles, &quat);
            g_mdlprv.model.currentEntity.placement.placement.quat = quat;
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
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  __int128 v15; 
  const dvar_t *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t origin; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v30; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 4 )
  {
    if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_ALT) )
    {
      v7 = (float)dy;
      v8 = (float)dx;
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        g_mdlprv.viewer.vertical = (float)(v7 * -0.1) + g_mdlprv.viewer.vertical;
        g_mdlprv.viewer.horizontal = (float)(v8 * -0.1) + g_mdlprv.viewer.horizontal;
      }
      if ( CL_Keys_IsKeyDown(localClientNum, 188) )
        CG_ModelPreviewerZoomCamera(v8, v7);
      if ( CL_Keys_IsKeyDown(localClientNum, 189) )
      {
        AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
        v9 = (float)(v8 * g_mdlprv.viewer.centerRadius) * 0.0012000001;
        v10 = (float)(v7 * g_mdlprv.viewer.centerRadius) * 0.0012000001;
        v11 = LODWORD(axis.m[1].v[0]);
        *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]));
        _XMM2 = v11;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm8, xmm0
        }
        axis.m[1].v[0] = axis.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
        axis.m[1].v[1] = axis.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
        axis.m[1].v[2] = axis.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
        v15 = LODWORD(axis.m[2].v[0]);
        *(float *)&v15 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(axis.m[2].v[1] * axis.m[2].v[1])) + (float)(axis.m[2].v[2] * axis.m[2].v[2]));
        _XMM3 = v15;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
        }
        axis.m[2].v[0] = axis.m[2].v[0] * (float)(1.0 / *(float *)&_XMM0);
        axis.m[2].v[1] = axis.m[2].v[1] * (float)(1.0 / *(float *)&_XMM0);
        axis.m[2].v[2] = axis.m[2].v[2] * (float)(1.0 / *(float *)&_XMM0);
        v19 = modPrvCenterOffset;
        v20 = (float)((float)(axis.m[1].v[0] * v9) + modPrvCenterOffset->current.value) + (float)(axis.m[2].v[0] * v10);
        v21 = (float)((float)(axis.m[1].v[1] * v9) + modPrvCenterOffset->current.vector.v[1]) + (float)(axis.m[2].v[1] * v10);
        v22 = (float)((float)(axis.m[1].v[2] * v9) + modPrvCenterOffset->current.vector.v[2]) + (float)(axis.m[2].v[2] * v10);
LABEL_18:
        Dvar_SetVec3_Internal(v19, v20, v21, v22);
      }
    }
    else
    {
      if ( g_mdlprv.system.uiModePC != MOVE_MODE )
      {
        if ( g_mdlprv.system.uiModePC != ROTATE_MODE )
          return;
        if ( CL_Keys_IsKeyDown(localClientNum, 187) )
        {
          origin.v[0] = (float)dy * -0.1;
          origin.v[1] = 0.0;
          origin.v[2] = (float)dx * 0.1;
          AnglesToAxis(&origin, &in2);
          MatrixTranspose(&LocalClientGlobals->refdef.view.axis, &out);
          quat = g_mdlprv.model.currentEntity.placement.placement.quat;
          UnitQuatToAxis(&quat, &axis);
          MatrixMultiply(&axis, &out, &in1);
          MatrixMultiply(&in1, &in2, &v30);
          MatrixMultiply(&v30, &LocalClientGlobals->refdef.view.axis, &axis);
        }
        else
        {
          if ( !CL_Keys_IsKeyDown(localClientNum, 188) )
            return;
          origin.v[0] = 0.0;
          origin.v[1] = (float)dx * 0.30000001;
          origin.v[2] = 0.0;
          AnglesToAxis(&origin, &v30);
          quat = g_mdlprv.model.currentEntity.placement.placement.quat;
          UnitQuatToAxis(&quat, &axis);
          MatrixMultiply(&v30, &axis, &in1);
          AxisCopy(&in1, &axis);
        }
        AxisToQuat(&axis, &quat);
        g_mdlprv.model.currentEntity.placement.placement.quat = quat;
        AxisToAngles(&axis, &origin);
        _XMM1 = 0i64;
        __asm { vroundss xmm2, xmm1, xmm3, 1 }
        v21 = (float)((float)((float)(origin.v[1] * 0.0027777778) + 0.5) - *(float *)&_XMM2) * 360.0;
        v19 = modPrvRotationAngles;
        v20 = origin.v[0];
        v22 = origin.v[2];
        origin.v[1] = v21;
        goto LABEL_18;
      }
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        v23 = (float)dx * -0.1;
        Dvar_SetVec3_Internal(modPrvOrigin, (float)((float)((float)dy * -0.1) * LocalClientGlobals->refdef.view.axis.m[2].v[0]) + (float)((float)(v23 * LocalClientGlobals->refdef.view.axis.m[1].v[0]) + modPrvOrigin->current.value), (float)((float)((float)dy * -0.1) * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + (float)((float)(v23 * LocalClientGlobals->refdef.view.axis.m[1].v[1]) + modPrvOrigin->current.vector.v[1]), (float)((float)((float)dy * -0.1) * LocalClientGlobals->refdef.view.axis.m[2].v[2]) + (float)((float)(v23 * LocalClientGlobals->refdef.view.axis.m[1].v[2]) + modPrvOrigin->current.vector.v[2]));
        origin.v[0] = g_mdlprv.model.initialOrigin.v[0] + modPrvOrigin->current.value;
        origin.v[1] = g_mdlprv.model.initialOrigin.v[1] + modPrvOrigin->current.vector.v[1];
        origin.v[2] = g_mdlprv.model.initialOrigin.v[2] + modPrvOrigin->current.vector.v[2];
        GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
        memset(&origin, 0, sizeof(origin));
      }
    }
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
    g_mdlprv.anim.isAnimPlaying = !g_mdlprv.anim.isAnimPlaying;
    g_mdlprv.anim.stepCounter = FLOAT_3_4028235e38;
  }
}

/*
==============
CG_ModelPreviewerStepAnim
==============
*/

void __fastcall CG_ModelPreviewerStepAnim(double deltaTime)
{
  _XMM3 = *(_OWORD *)&deltaTime;
  if ( g_mdlprv.model.currentObj && (g_mdlprv.anim.fromCurrentIndex >= 0 || g_mdlprv.anim.toCurrentIndex >= 0) )
  {
    __asm
    {
      vcmpltss xmm2, xmm3, xmm1
      vblendvps xmm0, xmm3, xmm0, xmm2
    }
    g_mdlprv.anim.stepCounter = *(float *)&_XMM0;
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
  if ( g_mdlprv.system.uiModeGPad )
  {
    *outViewOrigin = g_mdlprv.viewer.freeModeOrigin;
    *outViewAngles = g_mdlprv.viewer.freeModeAngles;
    AnglesToAxis(outViewAngles, outViewAxis);
  }
  else
  {
    MdlPrvUpdateViewFocused(outViewOrigin, outViewAxis, outViewAngles, zNear);
    g_mdlprv.viewer.freeModeOrigin = *outViewOrigin;
    g_mdlprv.viewer.freeModeAngles = *outViewAngles;
  }
}

/*
==============
CG_ModelPreviewerZoomCamera
==============
*/

void __fastcall CG_ModelPreviewerZoomCamera(double dx, float dy)
{
  __int128 centerRadius_low; 
  __int128 v9; 

  _XMM2 = *(_OWORD *)&dx & _xmm;
  __asm
  {
    vcmpltss xmm4, xmm2, xmm4
    vblendvps xmm2, xmm0, xmm1, xmm4
  }
  centerRadius_low = LODWORD(g_mdlprv.viewer.centerRadius);
  *(float *)&centerRadius_low = g_mdlprv.viewer.centerRadius * 0.0040000002;
  _XMM0 = centerRadius_low;
  __asm { vminss  xmm1, xmm0, cs:__real@40a00000 }
  v9 = LODWORD(g_mdlprv.viewer.centerRadius);
  *(float *)&v9 = g_mdlprv.viewer.centerRadius + (float)((float)(*(float *)&_XMM2 * *(float *)&_XMM1) * -0.30000001);
  _XMM4 = v9;
  __asm
  {
    vcmpltss xmm0, xmm4, xmm1
    vblendvps xmm1, xmm4, xmm1, xmm0
  }
  g_mdlprv.viewer.centerRadius = *(float *)&_XMM1;
  if ( *(float *)&_XMM1 >= g_mdlprv.viewer.zNearChangeLimit )
    g_mdlprv.viewer.zNear = r_zPlanes->current.vector.v[2];
  else
    g_mdlprv.viewer.zNear = FLOAT_0_0099999998;
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
const dvar_t *CG_ModelPreviewer_RegisterDvars()
{
  int v0; 
  __int64 i; 
  int v2; 
  __int64 j; 
  const dvar_t *result; 

  g_mdlprv.model.mruNames[0] = Dvar_FindVarByName("modPrvModelMruName0");
  g_mdlprv.model.mruNames[1] = Dvar_FindVarByName("modPrvModelMruName1");
  g_mdlprv.model.mruNames[2] = Dvar_FindVarByName("modPrvModelMruName2");
  g_mdlprv.model.mruNames[3] = Dvar_FindVarByName("modPrvModelMruName3");
  g_mdlprv.anim.mruNames[0] = Dvar_FindVarByName("modPrvAnimMruName0");
  g_mdlprv.anim.mruNames[1] = Dvar_FindVarByName("modPrvAnimMruName1");
  g_mdlprv.anim.mruNames[2] = Dvar_FindVarByName("modPrvAnimMruName2");
  g_mdlprv.anim.mruNames[3] = Dvar_FindVarByName("modPrvAnimMruName3");
  v0 = 0;
  for ( i = 0i64; i < 4; ++i )
  {
    if ( !g_mdlprv.model.mruNames[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 395, ASSERT_TYPE_ASSERT, "(mruDvars[dvarIndex])", (const char *)&queryFormat, "mruDvars[dvarIndex]") )
      __debugbreak();
    if ( i && !*(_BYTE *)g_mdlprv.model.mruNames[i]->current.integer64 )
      break;
    ++v0;
    g_mdlprv.model.mruNameTable[i] = g_mdlprv.model.mruNames[i]->current.string;
  }
  g_mdlprv.model.mruNameTable[v0] = NULL;
  modPrvModelMru = Dvar_RegisterEnum("modPrvModelMru", g_mdlprv.model.mruNameTable, 0, 0x2020u, "Model previewer most recently used model");
  modPrvLoadModel = Dvar_RegisterEnum("modPrvLoadModel", g_mdlprv.system.modelNames, 0, 0x20u, "Model previewer loaded model");
  Dvar_UpdateEnumDomain(modPrvLoadModel, g_mdlprv.system.modelNames);
  modPrvOrigin = Dvar_RegisterVec3("modPrvOrigin", 0.0, 0.0, 0.0, -1000.0, 1000.0, 0, "Model previewer origin");
  modPrvRotationAngles = Dvar_RegisterVec3("modPrvRotationAngles", 0.0, 0.0, 0.0, -180.0, 180.0, 0, "Model previwer rotation angles");
  modPrvCenterOffset = Dvar_RegisterVec3("modPrvCenterOffset", 0.0, 0.0, 0.0, -1000.0, 1000.0, 0, "Model previewer center offset");
  modPrvLod = Dvar_RegisterEnum("modPrvLod", modPrvLodNames, 0, 0, "Model previewer level of detail");
  modPrvDrawAxis = Dvar_RegisterBool("modPrvDrawAxis", 0, 0, "Draw the model previewer axes");
  modPrvDrawBoneInfo = Dvar_RegisterEnum("modPrvDrawBoneInfo", g_mdlprv.model.boneNameTable, 0, 0, "Draw model previewer bone information");
  v2 = 0;
  for ( j = 0i64; j < 4; ++j )
  {
    if ( !g_mdlprv.anim.mruNames[j] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 395, ASSERT_TYPE_ASSERT, "(mruDvars[dvarIndex])", (const char *)&queryFormat, "mruDvars[dvarIndex]") )
      __debugbreak();
    if ( j && !*(_BYTE *)g_mdlprv.anim.mruNames[j]->current.integer64 )
      break;
    ++v2;
    g_mdlprv.anim.mruNameTable[j] = g_mdlprv.anim.mruNames[j]->current.string;
  }
  g_mdlprv.anim.mruNameTable[v2] = NULL;
  modPrvFromAnimMru = Dvar_RegisterEnum("modPrvFromAnimMru", g_mdlprv.anim.mruNameTable, 0, 0x2020u, "Model previewer most recently used 'from' animation");
  Dvar_UpdateEnumDomain(modPrvFromAnimMru, g_mdlprv.anim.mruNameTable);
  modPrvToAnimMru = Dvar_RegisterEnum("modPrvToAnimMru", g_mdlprv.anim.mruNameTable, 0, 0x2020u, "Model previewer most recently used 'to' animation");
  Dvar_UpdateEnumDomain(modPrvToAnimMru, g_mdlprv.anim.mruNameTable);
  modPrvLoadFromAnim = Dvar_RegisterEnum("modPrvLoadFromAnim", g_mdlprv.system.animNames, 0, 0x20u, "Model previewer loaded 'from' animation");
  Dvar_UpdateEnumDomain(modPrvLoadFromAnim, g_mdlprv.system.animNames);
  modPrvLoadToAnim = Dvar_RegisterEnum("modPrvLoadToAnim", g_mdlprv.system.animNames, 0, 0x20u, "Model previewer loaded 'to' animation");
  Dvar_UpdateEnumDomain(modPrvLoadToAnim, g_mdlprv.system.animNames);
  modPrvAnimForceLoop = Dvar_RegisterBool("modPrvAnimForceLoop", 0, 0, "Model Previewer - Force an animation loop");
  modPrvAnimRate = Dvar_RegisterFloat("modPrvAnimRate", 1.0, 0.1, 2.0, 0, "Model previewer - animation rate");
  modPrvAnimBlendMode = Dvar_RegisterEnum("modPrvAnimBlendMode", modPrvAnimBlendModeNames, 0, 0, "Model previewer animation blending mode");
  modPrvAnimCrossBlendTime = Dvar_RegisterFloat("modPrvAnimCrossBlendTime", 0.99000001, 0.0, 1.0, 0, "Model previewer animation cross blending time");
  modPrvAnimCrossBlendDuration = Dvar_RegisterFloat("modPrvAnimCrossBlendDuration", 0.0, 0.0, 5.0, 0, "Model previewer animation cross blend duration");
  modPrvAnimBlendWeight = Dvar_RegisterFloat("modPrvAnimBlendWeight", 0.5, 0.0, 1.0, 0, "Model previewer animation blend weight");
  modPrvAnimApplyDelta = Dvar_RegisterBool("modPrvAnimApplyDelta", 1, 0, "Model previewer animation apply delta");
  g_mdlprv.mat.nameTable[1] = NULL;
  g_mdlprv.mat.nameTable[0] = "<None>";
  modPrvMatSelect = Dvar_RegisterEnum("modPrvMatSelect", g_mdlprv.mat.nameTable, 0, 0x2020u, "Model previewer material select");
  modPrvMatReplace = Dvar_RegisterEnum("modPrvMatReplace", g_mdlprv.mat.nameTable, 0, 0x2020u, "Model previewer material replace");
  modPrvGamepadControlSpeed = Dvar_RegisterFloat("modPrvGamepadControlSpeed", 1.0, 0.1, 10.0, 0, "Model previewer game pad control speed");
  modPrvRStickDeflectMax = Dvar_RegisterFloat("NOPKLKMSRM", 1.0, 0.0, 1.0, 4u, "Maximum right stick deflection");
  modPrvHideModel = Dvar_RegisterBool("modPrvHideModel", 0, 4u, "Skip drawing the model.");
  result = Dvar_RegisterBool("modPrvDrawDistanceToModel", 1, 4u, "Print viewer's distance to model.");
  modPrvDrawDistanceToModel = result;
  return result;
}

/*
==============
FrameModel
==============
*/
void FrameModel()
{
  const XModel *Model; 
  float v1; 
  float v2; 
  __int128 v3; 
  __int128 v5; 

  Model = DObjGetModel(g_mdlprv.model.currentObj, 0);
  v1 = Model->bounds.halfSize.v[2];
  v2 = Model->bounds.halfSize.v[0];
  v3 = LODWORD(Model->bounds.halfSize.v[1]);
  Dvar_SetVec3_Internal(modPrvCenterOffset, 0.0, 0.0, v1);
  _XMM4 = LODWORD(g_mdlprv.viewer.centerRadius);
  v5 = v3;
  *(float *)&v5 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(v2 * v2)) + (float)(v1 * v1));
  _XMM0 = v5;
  __asm
  {
    vmaxss  xmm3, xmm0, cs:__real@41200000
    vcmpltss xmm0, xmm4, xmm3
    vblendvps xmm0, xmm4, xmm3, xmm0
  }
  g_mdlprv.viewer.centerRadius = *(float *)&_XMM0;
  g_mdlprv.viewer.zNearChangeLimit = *(float *)&_XMM4;
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
void MdlPrvCloneModel(const cg_t *cgGlob)
{
  MdlPrvClone *v2; 
  DObj *obj; 
  int v4; 
  vec3_t v5; 
  vec3_t origin; 
  vec3_t outOrigin; 
  __int64 v8; 
  vec3_t right; 
  vec3_t up; 
  vec3_t forward; 

  v8 = -2i64;
  if ( g_mdlprv.model.cloneNextIdx >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 3849, ASSERT_TYPE_ASSERT, "(g_mdlprv.model.cloneNextIdx < CLONES_COUNT)", (const char *)&queryFormat, "g_mdlprv.model.cloneNextIdx < CLONES_COUNT") )
    __debugbreak();
  v2 = &g_mdlprv.model.clones[g_mdlprv.model.cloneNextIdx];
  obj = v2->obj;
  if ( obj )
  {
    DObjFree(obj);
    v2->obj = NULL;
  }
  DObjGetTree(g_mdlprv.model.currentObj);
  DObjClone(g_mdlprv.model.currentObj, v2->objBuf);
  v2->obj = (DObj *)v2->objBuf;
  DObjSetTree((DObj *)v2->objBuf, NULL);
  GfxSceneEntity_GetLightingOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  GfxSceneEntity_GetPrevPlacementOrigin(&g_mdlprv.model.currentEntity, &v5);
  memcpy_0(v2, &g_mdlprv.model.currentEntity, 0x590ui64);
  GfxSceneEntity_SetLightingOrigin(&v2->ent, &outOrigin);
  GfxSceneEntity_SetPlacementOrigin(&v2->ent, &origin);
  GfxSceneEntity_SetPrevPlacementOrigin(&v2->ent, &v5);
  memset(&v5, 0, sizeof(v5));
  memset(&origin, 0, sizeof(origin));
  memset(&outOrigin, 0, sizeof(outOrigin));
  AngleVectors(&cgGlob->refdefViewAngles, &forward, &right, &up);
  MdlPrvModelOriginOffset(16.0 * right.v[0], 16.0 * right.v[1], 0.0);
  v4 = g_mdlprv.model.cloneNextIdx + 1;
  if ( (unsigned int)(g_mdlprv.model.cloneNextIdx + 1) >= 0xA )
    v4 = 0;
  g_mdlprv.model.cloneNextIdx = v4;
}

/*
==============
MdlPrvControlsGamepad
==============
*/
void MdlPrvControlsGamepad(LocalClientNum_t localClientNum, float forward, float side, float pitch, float yaw)
{
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  int v9; 
  __int128 v10; 
  __int64 v15; 
  unsigned __int64 v16; 
  int v17; 
  int cmdsize; 
  int v19; 
  __int64 v20; 
  MdlPrvFreeSpeed freeModeSpeed; 
  __int32 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v30; 
  float v31; 
  __int128 v32; 
  __int128 v36; 
  const XModel *Model; 
  float v41; 
  __int128 v42; 
  __int128 v46; 
  double v50; 
  float v51; 
  vec3_t end; 
  vec3_t outOrigin; 
  Bounds bounds; 
  vec3_t up; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 
  char dest[256]; 

  v7 = localClientNum;
  if ( DevGui_IsActive() )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  v9 = Sys_Milliseconds();
  v10 = 0i64;
  *(float *)&v10 = (float)LocalClientGlobals->frametime * 0.001;
  _XMM2 = v10;
  __asm { vcmpneqss xmm1, xmm2, xmm11 }
  _XMM0 = LODWORD(FLOAT_0_015);
  __asm { vblendvps xmm1, xmm0, xmm2, xmm1 }
  v51 = *(float *)&_XMM1;
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 4 )
  {
    if ( g_mdlprv.system.walkaboutActive && CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[3].id) && v9 - g_mdlprv.system.buttonTimes.walkabout > 250 )
    {
      g_mdlprv.system.buttonTimes.walkabout = v9;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &g_mdlprv.viewer.freeModeOrigin);
      g_mdlprv.viewer.freeModeAngles = LocalClientGlobals->refdefViewAngles;
      g_mdlprv.system.walkaboutActive = 0;
      SetViewerActive((LocalClientNum_t)v7, 1);
    }
    return;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[0].id) && v9 - g_mdlprv.system.buttonTimes.mode > 500 )
  {
    g_mdlprv.system.buttonTimes.mode = v9;
    g_mdlprv.system.uiModeGPad = g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE;
    return;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[1].id) && v9 - g_mdlprv.system.buttonTimes.dropToFloor > 250 )
  {
    g_mdlprv.system.buttonTimes.dropToFloor = v9;
    bounds = DObjGetModel(g_mdlprv.model.currentObj, 0)->bounds;
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    outOrigin.v[2] = outOrigin.v[2] - (float)((float)(bounds.midPoint.v[2] - bounds.halfSize.v[2]) - 5.0);
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &end);
    end.v[2] = end.v[2] + -3000.0;
    *(_OWORD *)bounds.midPoint.v = _xmm;
    bounds.halfSize.v[1] = FLOAT_5_0;
    bounds.halfSize.v[2] = FLOAT_5_0;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v7 + 2), &results, &outOrigin, &end, &bounds, -1, 0, 1, 0, NULL, All);
    if ( !results.allsolid && results.fraction != 1.0 )
      MdlPrvModelOriginOffset(0.0, 0.0, results.fraction * -3000.0);
    return;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[2].id) && v9 - g_mdlprv.system.buttonTimes.walkabout > 250 )
  {
    g_mdlprv.system.buttonTimes.walkabout = v9;
    g_mdlprv.system.walkaboutActive = 1;
    SetViewerActive((LocalClientNum_t)v7, 0);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &end);
    Com_sprintf(dest, 0x100ui64, "setviewpos %f %f %f %f\n", end.v[0], end.v[1], end.v[2], LocalClientGlobals->refdefViewAngles.v[1]);
    v15 = v7;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v16 = -1i64;
    do
      ++v16;
    while ( dest[v16] );
    v17 = truncate_cast<int,unsigned __int64>(v16) + 1;
    cmdsize = s_cmd_textArray[v15].cmdsize;
    if ( cmdsize + v17 <= s_cmd_textArray[v15].maxsize )
    {
      v19 = cmdsize - 1;
      v20 = cmdsize - 1;
      if ( v19 >= 0 )
      {
        do
        {
          s_cmd_textArray[v15].data[v20 + v17] = s_cmd_textArray[v15].data[v20];
          --v20;
        }
        while ( v20 >= 0 );
      }
      memcpy_0(s_cmd_textArray[v15].data, dest, v17 - 1);
      s_cmd_textArray[v15].data[v17 - 1] = 10;
      s_cmd_textArray[v15].cmdsize += v17;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    memset(&end, 0, sizeof(end));
    return;
  }
  if ( g_mdlprv.system.uiModeGPad == MDLPRVMODE_FREE )
  {
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[6].id) && v9 - g_mdlprv.system.buttonTimes.freeSpeed > 250 )
    {
      g_mdlprv.system.buttonTimes.freeSpeed = v9;
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
    v22 = freeModeSpeed - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
        v23 = FLOAT_1000_0;
      else
        v23 = FLOAT_300_0;
    }
    else
    {
      v23 = FLOAT_20_0;
    }
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, 20) || CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[8].id) )
    {
      v24 = v23 * *(float *)&_XMM1;
    }
    else
    {
      if ( !CL_Keys_IsKeyDown((LocalClientNum_t)v7, 21) && !CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[7].id) )
      {
LABEL_47:
        v25 = v23 * v51;
        v26 = (float)(v23 * v51) * side;
        AngleVectors(&LocalClientGlobals->refdefViewAngles, &outOrigin, &end, &up);
        g_mdlprv.viewer.freeModeOrigin.v[0] = (float)((float)(v26 * end.v[0]) + (float)((float)(v25 * forward) * outOrigin.v[0])) + g_mdlprv.viewer.freeModeOrigin.v[0];
        g_mdlprv.viewer.freeModeOrigin.v[1] = (float)((float)(v26 * end.v[1]) + (float)((float)(v25 * forward) * outOrigin.v[1])) + g_mdlprv.viewer.freeModeOrigin.v[1];
        g_mdlprv.viewer.freeModeOrigin.v[2] = (float)((float)(v26 * end.v[2]) + (float)((float)(v25 * forward) * outOrigin.v[2])) + g_mdlprv.viewer.freeModeOrigin.v[2];
        _XMM8 = 0i64;
        __asm { vroundss xmm2, xmm8, xmm1, 1 }
        g_mdlprv.viewer.freeModeAngles.v[1] = (float)((float)((float)((float)((float)(v51 * 90.0) * yaw) + g_mdlprv.viewer.freeModeAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
        __asm { vroundss xmm2, xmm8, xmm3, 1 }
        g_mdlprv.viewer.freeModeAngles.v[0] = (float)((float)((float)((float)((float)(v51 * 90.0) * pitch) + g_mdlprv.viewer.freeModeAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
        if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[5].id) )
        {
          MdlPrvFreePlaceModel(&g_mdlprv.viewer.freeModeOrigin);
        }
        else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[4].id) )
        {
          AngleVectors(&LocalClientGlobals->refdefViewAngles, &end, &bounds.midPoint, &up);
          end.v[0] = g_mdlprv.viewer.centerRadius * end.v[0];
          end.v[1] = g_mdlprv.viewer.centerRadius * end.v[1];
          end.v[2] = g_mdlprv.viewer.centerRadius * end.v[2];
          outOrigin.v[0] = end.v[0] + g_mdlprv.viewer.freeModeOrigin.v[0];
          outOrigin.v[1] = end.v[1] + g_mdlprv.viewer.freeModeOrigin.v[1];
          outOrigin.v[2] = end.v[2] + g_mdlprv.viewer.freeModeOrigin.v[2];
          outOrigin.v[0] = (float)(end.v[0] + g_mdlprv.viewer.freeModeOrigin.v[0]) - modPrvCenterOffset->current.value;
          outOrigin.v[1] = (float)(end.v[1] + g_mdlprv.viewer.freeModeOrigin.v[1]) - modPrvCenterOffset->current.vector.v[1];
          outOrigin.v[2] = (float)(end.v[2] + g_mdlprv.viewer.freeModeOrigin.v[2]) - modPrvCenterOffset->current.vector.v[2];
          g_mdlprv.viewer.horizontal = LocalClientGlobals->refdefViewAngles.v[1];
          LODWORD(g_mdlprv.viewer.vertical) = LODWORD(LocalClientGlobals->refdefViewAngles.v[0]) ^ _xmm;
          Dvar_SetVec3_Internal(modPrvOrigin, 0.0, 0.0, 0.0);
          g_mdlprv.model.initialOrigin = outOrigin;
          GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
        }
        return;
      }
      LODWORD(v24) = COERCE_UNSIGNED_INT(v23 * *(float *)&_XMM1) ^ _xmm;
    }
    MdlPrvFreeMoveVertical(LocalClientGlobals, v24);
    goto LABEL_47;
  }
  if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, 18) && CL_Keys_IsKeyDown((LocalClientNum_t)v7, 19) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_FOCALMOVE;
    Dvar_SetVec3_Internal(modPrvCenterOffset, modPrvCenterOffset->current.value, modPrvCenterOffset->current.vector.v[1], modPrvCenterOffset->current.vector.v[2] - (float)((float)(*(float *)&_XMM1 * 100.0) * pitch));
    v30 = (float)(side * *(float *)&_XMM1) * 200.0;
    v31 = (float)(forward * *(float *)&_XMM1) * 200.0;
    YawVectors(LocalClientGlobals->refdefViewAngles.v[1], &end, &outOrigin);
    v32 = LODWORD(end.v[0]);
    *(float *)&v32 = fsqrt((float)(*(float *)&v32 * *(float *)&v32) + (float)(end.v[1] * end.v[1]));
    _XMM2 = v32;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm7, xmm0
    }
    end.v[0] = (float)(end.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v31;
    end.v[1] = (float)(end.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v31;
    end.v[2] = 0.0;
    v36 = LODWORD(outOrigin.v[0]);
    *(float *)&v36 = fsqrt((float)(*(float *)&v36 * *(float *)&v36) + (float)(outOrigin.v[1] * outOrigin.v[1]));
    _XMM2 = v36;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm7, xmm0
    }
    outOrigin.v[0] = (float)(outOrigin.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v30;
    outOrigin.v[1] = (float)(outOrigin.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v30;
    outOrigin.v[2] = 0.0;
    Dvar_SetVec3_Internal(modPrvCenterOffset, (float)(outOrigin.v[0] + end.v[0]) + modPrvCenterOffset->current.value, (float)(end.v[1] + outOrigin.v[1]) + modPrvCenterOffset->current.vector.v[1], modPrvCenterOffset->current.vector.v[2]);
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[25].id) && g_mdlprv.model.currentIndex >= 0 )
    {
      Model = DObjGetModel(g_mdlprv.model.currentObj, 0);
      Dvar_SetVec3_Internal(modPrvCenterOffset, 0.0, 0.0, Model->bounds.halfSize.v[2]);
    }
  }
  else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[10].id) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_MODELMOVE;
    MdlPrvModelOriginOffset(0.0, 0.0, (float)(*(float *)&_XMM1 * -100.0) * pitch);
    v41 = (float)(forward * *(float *)&_XMM1) * 200.0;
    YawVectors(LocalClientGlobals->refdefViewAngles.v[1], &end, &outOrigin);
    v42 = LODWORD(end.v[0]);
    *(float *)&v42 = fsqrt((float)(*(float *)&v42 * *(float *)&v42) + (float)(end.v[1] * end.v[1]));
    _XMM2 = v42;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    end.v[0] = (float)(end.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v41;
    end.v[1] = (float)(end.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v41;
    end.v[2] = 0.0;
    v46 = LODWORD(outOrigin.v[0]);
    *(float *)&v46 = fsqrt((float)(*(float *)&v46 * *(float *)&v46) + (float)(outOrigin.v[1] * outOrigin.v[1]));
    _XMM2 = v46;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    outOrigin.v[2] = 0.0;
    MdlPrvModelOriginOffset((float)((float)(outOrigin.v[0] * (float)(1.0 / *(float *)&_XMM0)) * (float)((float)(side * *(float *)&_XMM1) * 200.0)) + end.v[0], (float)((float)(outOrigin.v[1] * (float)(1.0 / *(float *)&_XMM0)) * (float)((float)(side * *(float *)&_XMM1) * 200.0)) + end.v[1], 0.0);
  }
  else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[11].id) )
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_MODELROTATE;
    if ( g_mdlprv.system.modelRotCamMode == MROTCAMMODE_TRAVEL )
    {
      g_mdlprv.viewer.horizontal = (float)((float)(*(float *)&_XMM1 * -360.0) * yaw) + g_mdlprv.viewer.horizontal;
      MdlPrvSpinYawOffset((float)(*(float *)&_XMM1 * -360.0) * yaw);
    }
    else
    {
      MdlPrvSpin_(1u, (float)(*(float *)&_XMM1 * -360.0) * yaw);
      MdlPrvSpin_(0, (float)(*(float *)&_XMM1 * -180.0) * forward);
      MdlPrvSpin_(2u, (float)(*(float *)&_XMM1 * -180.0) * side);
    }
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[22].id) )
      CG_ModPrvModelResetRotation();
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[19].id) && v9 - g_mdlprv.system.buttonTimes.mdlRotMode > 250 )
    {
      g_mdlprv.system.buttonTimes.mdlRotMode = v9;
      g_mdlprv.system.modelRotCamMode = g_mdlprv.system.modelRotCamMode == MROTCAMMODE_STATIC;
      *(vec4_t *)bounds.midPoint.v = g_mdlprv.model.currentEntity.placement.placement.quat;
      UnitQuatToAxis((const vec4_t *)&bounds, &axis);
      AxisToAngles(&axis, &end);
      YawToAxis(end.v[1], &axis);
      AxisToQuat(&axis, (vec4_t *)&bounds);
      g_mdlprv.model.currentEntity.placement.placement.quat = *(vec4_t *)bounds.midPoint.v;
    }
  }
  else
  {
    g_mdlprv.system.focusedMode = FOCUSEDMODE_CAMERA;
    if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[13].id) && v9 - g_mdlprv.system.buttonTimes.clone > 250 )
    {
      g_mdlprv.system.buttonTimes.clone = v9;
      MdlPrvCloneModel(LocalClientGlobals);
    }
    else if ( CL_Keys_IsKeyDown((LocalClientNum_t)v7, g_buttons[14].id) && v9 - g_mdlprv.system.buttonTimes.clearClones > 250 )
    {
      g_mdlprv.system.buttonTimes.clearClones = v9;
      MdlPrvCloneClearAll();
    }
    else
    {
      g_mdlprv.viewer.vertical = (float)((float)(*(float *)&_XMM1 * 100.0) * pitch) + g_mdlprv.viewer.vertical;
      g_mdlprv.viewer.horizontal = (float)((float)(*(float *)&_XMM1 * -180.0) * yaw) + g_mdlprv.viewer.horizontal;
      *(_QWORD *)&v50 = (unsigned int)_XMM1;
      *(float *)&v50 = (float)(*(float *)&_XMM1 * 1800.0) * forward;
      CG_ModelPreviewerZoomCamera(v50, 0.0);
    }
  }
}

/*
==============
MdlPrvDrawOverlayGamepad
==============
*/
void MdlPrvDrawOverlayGamepad(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  cg_t *LocalClientGlobals; 
  const char *v4; 
  float v5; 
  ButtonNames v6; 
  const char *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const char *v12; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  int v17; 
  int v18; 
  float v19; 
  float v20; 
  const char *v21; 
  float v22; 
  int v23; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v26; 

  v26 = -2i64;
  if ( g_mdlprv.model.currentIndex >= 0 && modPrvDisplayToggle->current.enabled )
  {
    if ( modPrvDrawDistanceToModel->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      v4 = j_va("Distance to Model: %.0f", fsqrt((float)((float)((float)(outOrg.v[1] - outOrigin.v[1]) * (float)(outOrg.v[1] - outOrigin.v[1])) + (float)((float)(outOrg.v[0] - outOrigin.v[0]) * (float)(outOrg.v[0] - outOrigin.v[0]))) + (float)((float)(outOrg.v[2] - outOrigin.v[2]) * (float)(outOrg.v[2] - outOrigin.v[2]))));
      CG_DrawSmallDevStringColor(scrPlace, 500.0, 400.0, v4, &colorWhiteFaded, 7);
      memset(&outOrg, 0, sizeof(outOrg));
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    if ( g_mdlprv.system.walkaboutActive )
    {
      CG_DrawSmallDevStringColor(scrPlace, 300.0, 0.0, "Walkabout Mode", &colorRed, 7);
      v5 = FLOAT_20_0;
      v6 = BTN_WALKABOUT_EXIT;
LABEL_28:
      MdlPrvPrintHelpLine(scrPlace, v6, v5);
      return;
    }
    v7 = "Freelook Mode";
    if ( g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE )
      v7 = "Focused Mode";
    v8 = (float)CG_DrawSmallDevStringColor(scrPlace, 300.0, 0.0, v7, &colorRed, 7) * 0.75;
    v9 = (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_MODESWITCH, 20.0) * 0.75) + 20.0;
    v10 = v9 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_DROPMDL, v9) * 0.75);
    v11 = v10 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_WALKABOUT_ENTER, v10) * 0.75);
    if ( g_mdlprv.system.uiModeGPad != MDLPRVMODE_FREE )
    {
      v18 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEMOV, v11);
      v19 = (float)(v11 + (float)((float)v18 * 0.75)) + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEROT, v11 + (float)((float)v18 * 0.75)) * 0.75);
      v20 = v19 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_TOGGLEFOCALMOVE, v19) * 0.75);
      v16 = v20;
      if ( g_mdlprv.system.focusedMode == FOCUSEDMODE_MODELMOVE )
      {
        CG_DrawSmallDevStringColor(scrPlace, 300.0, v8, "Model Move", &colorWhiteFaded, 7);
        v17 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MMOV_2D, v20);
        v6 = BTN_FOCUS_MMOV_UPDOWN;
      }
      else if ( g_mdlprv.system.focusedMode == FOCUSEDMODE_MODELROTATE )
      {
        v21 = "Model Rotate";
        if ( g_mdlprv.system.modelRotCamMode )
          v21 = "Model Rotate (with camera)";
        CG_DrawSmallDevStringColor(scrPlace, 300.0, v8, v21, &colorWhiteFaded, 7);
        v22 = v20 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_TOGGLECAM, v20) * 0.75);
        v16 = v22;
        if ( g_mdlprv.system.modelRotCamMode == MROTCAMMODE_STATIC )
          v16 = v22 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_PITCHROLL, v22) * 0.75);
        v17 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_MROT_YAW, v16);
        v6 = BTN_FOCUS_MROT_RESET;
      }
      else if ( g_mdlprv.system.focusedMode )
      {
        CG_DrawSmallDevStringColor(scrPlace, 300.0, v8, "Focus Move", &colorWhiteFaded, 7);
        v16 = v20 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_FOCALMOVE_2D, v20) * 0.75);
        v17 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_FOCALMOVE_UPDOWN, v16);
        v6 = BTN_FOCUS_FOCALMOVE_RESET;
      }
      else
      {
        v23 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_DEFAULT_CLONEMODEL, v20);
        v16 = (float)(v20 + (float)((float)v23 * 0.75)) + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_DEFAULT_CLEARCLONES, v20 + (float)((float)v23 * 0.75)) * 0.75);
        v17 = MdlPrvPrintHelpLine(scrPlace, BTN_FOCUS_DEFAULT_ZOOM, v16);
        v6 = BTN_FOCUS_DEFAULT_ORBIT;
      }
      goto LABEL_27;
    }
    if ( g_mdlprv.viewer.freeModeSpeed == FREESPEED_SLOW )
    {
      v12 = "Move Slow";
    }
    else
    {
      if ( g_mdlprv.viewer.freeModeSpeed != FREESPEED_FAST )
      {
LABEL_15:
        v13 = MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DROPFRONT, v11);
        v14 = (float)(v11 + (float)((float)v13 * 0.75)) + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DROPPOS, v11 + (float)((float)v13 * 0.75)) * 0.75);
        v15 = v14 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FREE_TOGGLEMOVESPEED, v14) * 0.75);
        v16 = v15 + (float)((float)MdlPrvPrintHelpLine(scrPlace, BTN_FREE_UP, v15) * 0.75);
        v17 = MdlPrvPrintHelpLine(scrPlace, BTN_FREE_DOWN, v16);
        v6 = BTN_FREE_UPDOWN;
LABEL_27:
        v5 = v16 + (float)((float)v17 * 0.75);
        goto LABEL_28;
      }
      v12 = "Move Fast";
    }
    CG_DrawSmallDevStringColor(scrPlace, 315.0, v8, v12, &colorWhiteFaded, 7);
    goto LABEL_15;
  }
}

/*
==============
MdlPrvFreeMoveVertical
==============
*/
void MdlPrvFreeMoveVertical(const cg_t *cgGlob, float dz)
{
  vec3_t up; 
  vec3_t right; 
  vec3_t forward; 

  AngleVectors(&cgGlob->refdefViewAngles, &forward, &right, &up);
  g_mdlprv.viewer.freeModeOrigin.v[0] = (float)(dz * up.v[0]) + g_mdlprv.viewer.freeModeOrigin.v[0];
  g_mdlprv.viewer.freeModeOrigin.v[1] = (float)(dz * up.v[1]) + g_mdlprv.viewer.freeModeOrigin.v[1];
  g_mdlprv.viewer.freeModeOrigin.v[2] = (float)(dz * up.v[2]) + g_mdlprv.viewer.freeModeOrigin.v[2];
}

/*
==============
MdlPrvFreePlaceModel
==============
*/
void MdlPrvFreePlaceModel(const vec3_t *pos)
{
  Dvar_SetVec3_Internal(modPrvOrigin, 0.0, 0.0, 0.0);
  g_mdlprv.model.initialOrigin = *pos;
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, pos);
}

/*
==============
MdlPrvModelOriginOffset
==============
*/
void MdlPrvModelOriginOffset(float dx, float dy, float dz)
{
  vec3_t outOrigin; 

  g_mdlprv.model.initialOrigin.v[0] = dx + g_mdlprv.model.initialOrigin.v[0];
  g_mdlprv.model.initialOrigin.v[1] = dy + g_mdlprv.model.initialOrigin.v[1];
  g_mdlprv.model.initialOrigin.v[2] = dz + g_mdlprv.model.initialOrigin.v[2];
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  outOrigin.v[0] = dx + outOrigin.v[0];
  outOrigin.v[1] = dy + outOrigin.v[1];
  outOrigin.v[2] = dz + outOrigin.v[2];
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
MdlPrvPrintHelpLine
==============
*/
int MdlPrvPrintHelpLine(const ScreenPlacement *scrPlace, ButtonNames idx, float vPos)
{
  __int64 v4; 

  v4 = idx;
  CG_DrawDevString(scrPlace, 0.0, vPos, 0.80000001, 0.80000001, g_buttons[idx].name, &g_buttons[idx].nameColor, 5, cls.smallDevFont);
  return CG_DrawDevString(scrPlace, 50.0, vPos, 0.80000001, 0.80000001, g_buttons[v4].desc, &colorWhiteFaded, 5, cls.smallDevFont);
}

/*
==============
MdlPrvSpinYawOffset
==============
*/
void MdlPrvSpinYawOffset(float deg)
{
  float value; 
  __int128 v2; 
  float v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t origin; 
  vec3_t angles; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 

  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  MdlPrvSpin_(1u, deg);
  LODWORD(angles.v[1]) = LODWORD(deg) ^ _xmm;
  AnglesToAxis(&angles, &axis);
  value = modPrvCenterOffset->current.value;
  v2 = LODWORD(modPrvCenterOffset->current.vector.v[1]);
  v3 = modPrvCenterOffset->current.vector.v[2];
  GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
  v4 = value + outOrigin.v[0];
  v5 = v3 + outOrigin.v[2];
  v6 = v2;
  *(float *)&v6 = fsqrt((float)((float)(*(float *)&v2 * *(float *)&v2) + (float)(value * value)) + (float)(v3 * v3));
  _XMM10 = v6;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  v10 = *(float *)&v2 * (float)(1.0 / *(float *)&_XMM0);
  v11 = value * (float)(1.0 / *(float *)&_XMM0);
  v12 = v3 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM0 = (float)(v3 + outOrigin.v[2]) - (float)((float)((float)((float)(v10 * axis.m[2].v[1]) + (float)(v11 * axis.m[2].v[0])) + (float)(v12 * axis.m[2].v[2])) * *(float *)&v6);
  origin.v[0] = v4 - (float)((float)((float)((float)(v10 * axis.m[0].v[1]) + (float)(v11 * axis.m[0].v[0])) + (float)(v12 * axis.m[0].v[2])) * *(float *)&v6);
  origin.v[1] = (float)(*(float *)&v2 + outOrigin.v[1]) - (float)((float)((float)((float)(v10 * axis.m[1].v[1]) + (float)(v11 * axis.m[1].v[0])) + (float)(v12 * axis.m[1].v[2])) * *(float *)&v6);
  v13 = v4 - origin.v[0];
  *(float *)&v2 = (float)(*(float *)&v2 + outOrigin.v[1]) - origin.v[1];
  origin.v[2] = *(float *)&_XMM0;
  Dvar_SetVec3_Internal(modPrvOrigin, 0.0, 0.0, 0.0);
  g_mdlprv.model.initialOrigin.v[0] = origin.v[0];
  g_mdlprv.model.initialOrigin.v[2] = *(float *)&_XMM0;
  g_mdlprv.model.initialOrigin.v[1] = origin.v[1];
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &origin);
  Dvar_SetVec3_Internal(modPrvCenterOffset, v13, *(float *)&v2, v5 - *(float *)&_XMM0);
}

/*
==============
MdlPrvSpin_
==============
*/
void MdlPrvSpin_(unsigned int yprIdx, float deg)
{
  __int64 v2; 
  int v8; 
  vec3_t angles; 
  vec4_t quat; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v2 = (int)yprIdx;
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  if ( yprIdx >= 3 )
  {
    v8 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", yprIdx, v8) )
      __debugbreak();
  }
  angles.v[v2] = deg;
  AnglesToAxis(&angles, &axis);
  quat = g_mdlprv.model.currentEntity.placement.placement.quat;
  UnitQuatToAxis(&quat, &in2);
  MatrixMultiply(&axis, &in2, &out);
  AxisCopy(&out, &in2);
  AxisToQuat(&in2, &quat);
  g_mdlprv.model.currentEntity.placement.placement.quat = quat;
  AxisToAngles(&in2, &angles);
  _XMM9 = 0i64;
  __asm
  {
    vroundss xmm2, xmm9, xmm1, 1
    vroundss xmm3, xmm9, xmm2, 1
    vroundss xmm5, xmm9, xmm4, 1
  }
  Dvar_SetVec3_Internal(modPrvRotationAngles, (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM3) * 360.0, (float)((float)((float)(0.0027777778 * angles.v[1]) + 0.5) - *(float *)&_XMM2) * 360.0, (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM5) * 360.0);
}

/*
==============
MdlPrvUpdateViewFocused
==============
*/
void MdlPrvUpdateViewFocused(vec3_t *outViewOrigin, tmat33_t<vec3_t> *outViewAxis, vec3_t *outViewAngles, float *zNear)
{
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  float *v10; 
  float v11; 
  float v12; 
  float v13; 
  int v14; 
  float *v15; 
  float *v16; 
  bool v17; 
  int v18; 
  __int64 v19; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec4_t color; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v27; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v30; 
  tmat44_t<vec4_t> v31; 
  tmat44_t<vec4_t> in1; 

  *(_QWORD *)outOrigin.v = zNear;
  if ( !zNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_modelpreviewer.cpp", 4186, ASSERT_TYPE_ASSERT, "(zNear)", (const char *)&queryFormat, "zNear") )
    __debugbreak();
  MatrixIdentity44(&out);
  MatrixIdentity44(&in2);
  MatrixIdentity44(&v30);
  MatrixRotationY(&mat, g_mdlprv.viewer.vertical);
  MatrixRotationZ(&v27, COERCE_FLOAT(LODWORD(g_mdlprv.viewer.horizontal) ^ _xmm));
  v7 = 0;
  v8 = 0i64;
  v9 = 0i64;
  do
  {
    if ( v7 >= 4 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v7 >= 3 )
    {
      LODWORD(v22) = 3;
      LODWORD(v21) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    in2.m[v9].v[0] = mat.m[v8].v[0];
    in2.m[v9].v[1] = mat.m[v8].v[1];
    in2.m[v9].v[2] = mat.m[v8].v[2];
    if ( v7 >= 4 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v7 >= 3 )
    {
      LODWORD(v22) = 3;
      LODWORD(v21) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v30.m[v9].v[0] = v27.m[v8].v[0];
    v30.m[v9].v[1] = v27.m[v8].v[1];
    v30.m[v9].v[2] = v27.m[v8].v[2];
    ++v7;
    ++v9;
    ++v8;
  }
  while ( (int)v7 < 3 );
  LODWORD(out.m[3].v[0]) = LODWORD(g_mdlprv.viewer.centerRadius) ^ _xmm;
  out.m[3].v[1] = 0.0;
  out.m[3].v[2] = 0.0;
  MatrixMultiply44Aligned(&out, &in2, &in1);
  MatrixMultiply44Aligned(&in1, &v30, &v31);
  v10 = *(float **)outOrigin.v;
  if ( modPrvAnimApplyDelta->current.enabled && g_mdlprv.anim.isAnimPlaying )
  {
    v11 = g_mdlprv.model.initialOrigin.v[0] + modPrvCenterOffset->current.value;
    start.v[0] = v11;
    v12 = g_mdlprv.model.initialOrigin.v[1] + modPrvCenterOffset->current.vector.v[1];
    start.v[1] = v12;
    v13 = g_mdlprv.model.initialOrigin.v[2] + modPrvCenterOffset->current.vector.v[2];
    start.v[2] = v13;
  }
  else
  {
    GfxSceneEntity_GetPlacementOrigin(&g_mdlprv.model.currentEntity, &outOrigin);
    v11 = outOrigin.v[0] + modPrvCenterOffset->current.value;
    start.v[0] = v11;
    v12 = outOrigin.v[1] + modPrvCenterOffset->current.vector.v[1];
    start.v[1] = v12;
    v13 = outOrigin.v[2] + modPrvCenterOffset->current.vector.v[2];
    start.v[2] = v13;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  outViewOrigin->v[0] = v11 + v31.m[3].v[0];
  outViewOrigin->v[1] = v12 + v31.m[3].v[1];
  outViewOrigin->v[2] = v13 + v31.m[3].v[2];
  v14 = 0;
  v15 = &outViewAxis->m[0].v[2];
  v16 = &v31.m[0].v[2];
  v17 = 1;
  do
  {
    if ( !v17 )
    {
      LODWORD(v22) = 3;
      LODWORD(v21) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( (unsigned int)v14 >= 4 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    *(v15 - 2) = *(v16 - 2);
    *(v15 - 1) = *(v16 - 1);
    *v15 = *v16;
    ++v14;
    v15 += 3;
    v16 += 4;
    v17 = (unsigned int)v14 < 3;
  }
  while ( v14 < 3 );
  AxisToAngles(outViewAxis, outViewAngles);
  if ( modPrvDrawAxis->current.enabled || g_mdlprv.system.focusedMode == FOCUSEDMODE_FOCALMOVE )
  {
    v18 = 0;
    v19 = 0i64;
    do
    {
      color = 0i64;
      if ( (unsigned int)v18 >= 4 )
      {
        LODWORD(v22) = 4;
        LODWORD(v21) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      color.v[v19] = 1.0;
      outOrigin.v[0] = 0.0;
      outOrigin.v[1] = 0.0;
      outOrigin.v[2] = 0.0;
      v20 = 0.1 * g_mdlprv.viewer.centerRadius;
      if ( (unsigned int)v18 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      outOrigin.v[v19] = v20;
      outOrigin.v[0] = outOrigin.v[0] + start.v[0];
      outOrigin.v[1] = outOrigin.v[1] + start.v[1];
      outOrigin.v[2] = outOrigin.v[2] + start.v[2];
      CG_DebugLine(&start, &outOrigin, &color, 1, 0);
      ++v18;
      ++v19;
    }
    while ( v18 < 3 );
  }
  *v10 = g_mdlprv.viewer.zNear;
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
void ResetOrientation_f()
{
  float v0; 
  vec3_t angles; 
  vec4_t quat; 

  g_mdlprv.viewer.centerRadius = FLOAT_100_0;
  g_mdlprv.viewer.horizontal = 0.0;
  g_mdlprv.viewer.vertical = FLOAT_N20_0;
  Dvar_SetVec3_Internal(modPrvCenterOffset, 0.0, 0.0, 0.0);
  GfxSceneEntity_SetPlacementOrigin(&g_mdlprv.model.currentEntity, &g_mdlprv.model.initialOrigin);
  Dvar_SetVec3_Internal(modPrvOrigin, 0.0, 0.0, 0.0);
  Dvar_SetVec3_Internal(modPrvRotationAngles, 0.0, g_mdlprv.model.initialYaw, 0.0);
  v0 = modPrvRotationAngles->current.vector.v[2];
  LODWORD(angles.v[0]) = modPrvRotationAngles->current.integer;
  angles.v[2] = v0;
  angles.v[1] = (float)(g_mdlprv.anim.deltaYaw + 180.0) + modPrvRotationAngles->current.vector.v[1];
  AnglesToQuat(&angles, &quat);
  g_mdlprv.model.currentEntity.placement.placement.quat = quat;
  if ( g_mdlprv.model.currentIndex >= 0 )
    FrameModel();
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

