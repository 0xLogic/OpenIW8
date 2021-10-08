/*
==============
CG_TriggerLerpTriggers
==============
*/

void __fastcall CG_TriggerLerpTriggers(LocalClientNum_t localClientNum, const unsigned int blendTrigger, const vec3_t *viewPos, unsigned int *trigA, unsigned int *trigB, float *lerpAmount)
{
  ?CG_TriggerLerpTriggers@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@PEAI2PEAM@Z(localClientNum, blendTrigger, viewPos, trigA, trigB, lerpAmount);
}

/*
==============
CG_TriggerTransformPointOnMovingPlatform
==============
*/

void __fastcall CG_TriggerTransformPointOnMovingPlatform(const LocalClientNum_t localClientNum, const unsigned int triggerIndex, const vec3_t *origin, vec3_t *outOffset, tmat33_t<vec3_t> *outAxis)
{
  ?CG_TriggerTransformPointOnMovingPlatform@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@AEAT2@PEAT?$tmat33_t@Tvec3_t@@@@@Z(localClientNum, triggerIndex, origin, outOffset, outAxis);
}

/*
==============
CG_TriggerUpdate
==============
*/

void __fastcall CG_TriggerUpdate(LocalClientNum_t localClientNum)
{
  ?CG_TriggerUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ShutdownClientSideTriggers
==============
*/

void __fastcall CG_ShutdownClientSideTriggers(LocalClientNum_t localClientIndex)
{
  ?CG_ShutdownClientSideTriggers@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_TestTriggerTouch_Point
==============
*/

bool __fastcall CG_TestTriggerTouch_Point(unsigned int tmodelIndex, const vec3_t *origin)
{
  return ?CG_TestTriggerTouch_Point@@YA_NIAEBTvec3_t@@@Z(tmodelIndex, origin);
}

/*
==============
CG_TriggerCalcMovingPlatformPos
==============
*/

void __fastcall CG_TriggerCalcMovingPlatformPos(const LocalClientNum_t localClientNum, const vec3_t *viewPos, const unsigned int triggerIndex, vec3_t *outOffset)
{
  ?CG_TriggerCalcMovingPlatformPos@@YAXW4LocalClientNum_t@@AEBTvec3_t@@IAEAT2@@Z(localClientNum, viewPos, triggerIndex, outOffset);
}

/*
==============
CG_StartClientSideTriggers
==============
*/

void __fastcall CG_StartClientSideTriggers(LocalClientNum_t localClientNum)
{
  ?CG_StartClientSideTriggers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TestTriggerTouch
==============
*/

bool __fastcall CG_TestTriggerTouch(const Bounds *bounds, unsigned int tmodelIndex, const vec3_t *relativeOrigin, const vec3_t *angles)
{
  return ?CG_TestTriggerTouch@@YA_NPEBUBounds@@IAEBTvec3_t@@1@Z(bounds, tmodelIndex, relativeOrigin, angles);
}

/*
==============
DrawBrushPoly
==============
*/
void DrawBrushPoly(int numPoints, const vec3_t *points, const vec4_t *color, const bool drawSolid, const vec4_t *interiorColor)
{
  int v7; 
  const vec3_t *v10; 
  vec3_t end; 
  vec3_t out; 

  v7 = 0;
  if ( numPoints > 0 )
  {
    v10 = points;
    do
    {
      MatrixTransformVector43(v10, &g_debugDrawBrushInfo.transform, &out);
      MatrixTransformVector43(&points[++v7 % numPoints], &g_debugDrawBrushInfo.transform, &end);
      CL_AddDebugLine(&out, &end, color, g_debugDrawBrushInfo.depthTest, g_debugDrawBrushInfo.duration, 1);
      ++v10;
    }
    while ( v7 < numPoints );
  }
  if ( drawSolid )
    CL_AddDebugPolyWithTransform(numPoints, points, &g_debugDrawBrushInfo.transform, interiorColor, 0, 0, g_debugDrawBrushInfo.depthTest != 0, g_debugDrawBrushInfo.duration, 1);
}

/*
==============
CG_GetTriggerTransform
==============
*/
void CG_GetTriggerTransform(LocalClientNum_t localClientNum, unsigned int trigIndex, tmat43_t<vec3_t> *outTransform)
{
  __int64 v9; 
  MapEnts *mapEnts; 
  int AnchorEntNum; 
  __int64 v34; 
  __int64 v35; 
  vec3_t v36; 
  vec3_t angles; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v40; 
  tmat43_t<vec3_t> v41; 
  tmat43_t<vec3_t> out; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = outTransform;
  v9 = trigIndex;
  mapEnts = cm.mapEnts;
  if ( trigIndex >= cm.mapEnts->clientTrigger.trigger.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 630, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", trigIndex, cm.mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  _RAX = mapEnts->clientTrigger.origins;
  _RCX = 3 * v9;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm6, dword ptr [rax+rcx*4]
    vmovss  xmm7, dword ptr [rax+rcx*4+4]
    vmovss  xmm8, dword ptr [rax+rcx*4+8]
    vmovss  dword ptr [rsp+180h+var_140], xmm0
    vmovss  dword ptr [rsp+180h+var_140+4], xmm0
    vmovss  dword ptr [rsp+180h+var_140+8], xmm0
  }
  _RDI = mapEnts->clientTrigger.linkTo[v9];
  if ( !_RDI || !mapEnts->clientEntAnchors )
    goto LABEL_13;
  if ( _RDI->anchorIndex >= CM_ClientAnchorCount() )
  {
    LODWORD(v35) = CM_ClientAnchorCount();
    LODWORD(v34) = _RDI->anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 584, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v34, v35) )
      __debugbreak();
  }
  AnchorEntNum = CM_GetAnchorEntNum(_RDI->anchorIndex);
  _RAX = CG_GetEntity(localClientNum, AnchorEntNum);
  if ( _RAX && (_RAX->flags & 1) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+48h]
      vmovss  xmm1, dword ptr [rax+4Ch]
      vmovss  dword ptr [rsp+180h+angles], xmm0
      vmovss  xmm0, dword ptr [rax+50h]
      vmovss  dword ptr [rsp+180h+angles+8], xmm0
      vmovss  dword ptr [rsp+180h+angles+4], xmm1
    }
    CG_GetPoseOrigin(&_RAX->pose, &outOrigin);
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+180h+outOrigin+4]
      vmovss  [rbp+80h+var_EC], xmm0
      vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
      vmovss  [rbp+80h+var_E4], xmm0
      vmovss  [rbp+80h+var_E8], xmm1
    }
    AnglesToAxis(&_RDI->angleOffset, (tmat33_t<vec3_t> *)&v40);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  [rbp+80h+var_BC], xmm0
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  [rbp+80h+var_B4], xmm0
      vmovss  [rbp+80h+var_B8], xmm1
    }
    AnglesToAxis(&v36, (tmat33_t<vec3_t> *)&v41);
    __asm
    {
      vmovss  [rbp+80h+var_8C], xmm6
      vmovss  [rbp+80h+var_88], xmm7
      vmovss  [rbp+80h+var_84], xmm8
    }
    MatrixMultiply43(&v40, &axis, &out);
    MatrixMultiply43(&v41, &out, _RBX);
  }
  else
  {
LABEL_13:
    AnglesToAxis(&v36, (tmat33_t<vec3_t> *)_RBX);
    __asm
    {
      vmovss  dword ptr [rbx+2Ch], xmm8
      vmovss  dword ptr [rbx+28h], xmm7
      vmovss  dword ptr [rbx+24h], xmm6
    }
  }
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_SetupTriggerTest
==============
*/
bool CG_SetupTriggerTest(const vec3_t *bakedTriggerOrigin, const Bounds *bounds, const vec3_t *relativeOrigin, const vec3_t *angles, TriggerCapsuleTest *capsuleOut, tmat33_t<vec3_t> *axisOut)
{
  bool v10; 
  bool v11; 
  bool v16; 
  bool v21; 
  bool result; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 

  _RSI = angles;
  _RBX = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 211, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  _RDI = capsuleOut;
  v10 = capsuleOut == NULL;
  if ( !capsuleOut )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 212, ASSERT_TYPE_ASSERT, "(capsuleOut)", (const char *)&queryFormat, "capsuleOut");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rbx+10h]
    vucomiss xmm1, xmm0
  }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+68h+var_28], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_30], xmm1
    }
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 213, ASSERT_TYPE_ASSERT, "( bounds->halfSize[0] ) == ( bounds->halfSize[1] )", "%s == %s\n\t%g, %g", "bounds->halfSize[0]", "bounds->halfSize[1]", v47, v49);
    v10 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rbx+14h]
    vcomiss xmm1, xmm0
  }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+68h+var_28], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_30], xmm1
    }
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 214, ASSERT_TYPE_ASSERT, "( bounds->halfSize[0] ) <= ( bounds->halfSize[2] )", "%s <= %s\n\t%g, %g", "bounds->halfSize[0]", "bounds->halfSize[2]", v48, v50);
    v10 = !v21;
    if ( v21 )
      __debugbreak();
  }
  capsuleOut->relativeOrigin = *relativeOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rbp+8]
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rdi+24h], xmm1
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rdi+28h], xmm2
    vucomiss xmm0, dword ptr [rsi]
  }
  if ( v10 )
  {
    __asm { vucomiss xmm0, dword ptr [rsi+4] }
    if ( v10 )
    {
      __asm { vucomiss xmm0, dword ptr [rsi+8] }
      if ( v10 )
        goto LABEL_18;
    }
  }
  __asm { vucomiss xmm2, xmm0 }
  if ( v10 )
  {
LABEL_18:
    __asm { vmovss  dword ptr [rdi+0Ch], xmm1 }
    capsuleOut->triggerSpaceBounds.halfSize.v[1] = capsuleOut->radius;
    result = 0;
    __asm { vaddss  xmm1, xmm1, xmm2 }
  }
  else
  {
    _RBX = axisOut;
    AnglesToAxis(_RSI, axisOut);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm0, xmm3
      vmulss  xmm0, xmm0, dword ptr [rdi+28h]
      vaddss  xmm1, xmm0, dword ptr [rdi+24h]
      vmovss  dword ptr [rdi+0Ch], xmm1
      vmovss  xmm2, dword ptr [rbx+1Ch]
      vandps  xmm2, xmm2, xmm3
      vmulss  xmm0, xmm2, dword ptr [rdi+28h]
      vaddss  xmm1, xmm0, dword ptr [rdi+24h]
      vmovss  dword ptr [rdi+10h], xmm1
      vmovss  xmm2, dword ptr [rbx+20h]
      vandps  xmm2, xmm2, xmm3
      vmulss  xmm0, xmm2, dword ptr [rdi+28h]
      vaddss  xmm1, xmm0, dword ptr [rdi+24h]
    }
    result = 1;
  }
  __asm { vmovss  dword ptr [rdi+14h], xmm1 }
  return result;
}

/*
==============
CG_ShutdownClientSideTriggers
==============
*/
void CG_ShutdownClientSideTriggers(LocalClientNum_t localClientIndex)
{
  CG_ShutdownClientSideTriggersVision();
  CG_ShutdownClientSideTriggersAudio();
}

/*
==============
CG_StartClientSideTriggers
==============
*/
void CG_StartClientSideTriggers(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  LocalClientNum_t v3; 
  __int64 v4; 
  ClientTriggerBlendNode *v5; 
  unsigned __int16 *triggerType; 
  unsigned __int16 v7; 
  unsigned __int16 *v8; 
  MapEnts *mapEnts; 
  unsigned int count; 

  v1 = 0i64;
  v2 = 0;
  v3 = localClientNum;
  if ( cm.mapEnts->clientTrigger.trigger.count )
  {
    do
    {
      v4 = v2;
      if ( (cm.mapEnts->clientTrigger.triggerType[v4] & 0xC) != 0 )
      {
        if ( cm.mapEnts->clientTrigger.blendLookup[v4] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 56, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientTrigger.blendLookup[triggerIter] != -1)", (const char *)&queryFormat, "cm.mapEnts->clientTrigger.blendLookup[triggerIter] != -1") )
          __debugbreak();
        v5 = &cm.mapEnts->clientTriggerBlend.blendNodes[cm.mapEnts->clientTrigger.blendLookup[v2]];
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 59, ASSERT_TYPE_ASSERT, "(blend)", (const char *)&queryFormat, "blend") )
          __debugbreak();
        triggerType = cm.mapEnts->clientTrigger.triggerType;
        v7 = triggerType[v4];
        if ( (v7 & 0xC) == 0 )
        {
          if ( (v7 & 4) != 0 && ((triggerType[v5->triggerA] & 1) == 0 || (triggerType[v5->triggerB] & 1) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 68, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientTrigger.triggerType[blend->triggerA] & CLIENT_TRIGGER_VISIONSET && cm.mapEnts->clientTrigger.triggerType[blend->triggerB] & CLIENT_TRIGGER_VISIONSET)", (const char *)&queryFormat, "cm.mapEnts->clientTrigger.triggerType[blend->triggerA] & CLIENT_TRIGGER_VISIONSET && cm.mapEnts->clientTrigger.triggerType[blend->triggerB] & CLIENT_TRIGGER_VISIONSET") )
            __debugbreak();
          v8 = cm.mapEnts->clientTrigger.triggerType;
          if ( (v8[v4] & 8) != 0 && ((v8[v5->triggerA] & 2) == 0 || (v8[v5->triggerB] & 2) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 73, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientTrigger.triggerType[blend->triggerA] & CLIENT_TRIGGER_AUDIO && cm.mapEnts->clientTrigger.triggerType[blend->triggerB] & CLIENT_TRIGGER_AUDIO)", (const char *)&queryFormat, "cm.mapEnts->clientTrigger.triggerType[blend->triggerA] & CLIENT_TRIGGER_AUDIO && cm.mapEnts->clientTrigger.triggerType[blend->triggerB] & CLIENT_TRIGGER_AUDIO") )
            __debugbreak();
        }
      }
      ++v2;
    }
    while ( v2 < cm.mapEnts->clientTrigger.trigger.count );
    v3 = localClientNum;
    v1 = 0i64;
  }
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  CG_StartClientSideTriggersAudio(v3, cls.m_activeGameMapName);
  CG_StartClientSideTriggerVision(v3);
  mapEnts = cm.mapEnts;
  count = cm.mapEnts->clientTrigger.trigger.count;
  if ( count <= 0x4000 )
  {
    if ( count )
    {
      do
      {
        if ( (mapEnts->clientTrigger.triggerType[v1] & 1) != 0 )
        {
          CG_StartClientSideTriggersVisionTrigger(v1);
          mapEnts = cm.mapEnts;
        }
        if ( (mapEnts->clientTrigger.triggerType[v1] & 0x42) != 0 )
        {
          CG_StartClientSideTriggersAudioTrigger(v1);
          mapEnts = cm.mapEnts;
        }
        if ( SLOBYTE(mapEnts->clientTrigger.triggerType[v1]) < 0 )
        {
          CG_StartClientSideTriggersAudioPropagationPortal(v1);
          mapEnts = cm.mapEnts;
        }
        if ( (mapEnts->clientTrigger.triggerType[v1] & 0x10) != 0 )
        {
          CG_StartClientSideTriggersNPCZone(v1);
          mapEnts = cm.mapEnts;
        }
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < mapEnts->clientTrigger.trigger.count );
    }
  }
  else
  {
    Com_PrintError(1, "MAX_CLIENT_SIDE_TRIGGERS_PER_LEVEL exceeded - increase size or lower mapEnts clientTrigger count from %d to %d\n", count, 0x4000i64);
  }
}

/*
==============
CG_TestTriggerTouch
==============
*/
bool CG_TestTriggerTouch(const Bounds *bounds, unsigned int tmodelIndex, const vec3_t *relativeOrigin, const vec3_t *angles)
{
  __int64 v4; 
  MapEnts *mapEnts; 
  ClientTriggers *p_clientTrigger; 
  __int64 v10; 
  const ClientTriggerModel *v11; 
  int axisOut; 
  unsigned int count; 
  TriggerCapsuleTest capsuleOut; 
  tmat33_t<vec3_t> axis; 

  v4 = tmodelIndex;
  mapEnts = cm.mapEnts;
  p_clientTrigger = &cm.mapEnts->clientTrigger;
  if ( (unsigned int)v4 >= cm.mapEnts->clientTrigger.trigger.count )
  {
    count = cm.mapEnts->clientTrigger.trigger.count;
    axisOut = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( tmodelIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "tmodelIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", axisOut, count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  v10 = v4;
  v11 = &mapEnts->clientTrigger.trigger.models[v4];
  if ( CG_SetupTriggerTest(&mapEnts->clientTrigger.origins[v10], bounds, relativeOrigin, angles, &capsuleOut, &axis) )
    return CG_TestTriggerTouch_Rotated(&p_clientTrigger->trigger, v11, &axis, &capsuleOut);
  else
    return CG_TestTriggerTouch_Unrotated(&p_clientTrigger->trigger, v11, &capsuleOut);
}

/*
==============
CG_TestTriggerTouch_Point
==============
*/
bool CG_TestTriggerTouch_Point(unsigned int tmodelIndex, const vec3_t *origin)
{
  MapEnts *mapEnts; 
  ClientTriggers *p_clientTrigger; 
  __int64 v10; 
  __int64 v11; 
  ClientTriggerModel *models; 
  int v20; 
  __int64 v21; 
  bool v22; 
  bool v24; 
  unsigned int v31; 
  unsigned int v32; 
  bool v33; 
  bool result; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  mapEnts = cm.mapEnts;
  _RDI = origin;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  p_clientTrigger = &mapEnts->clientTrigger;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v10 = tmodelIndex;
  if ( tmodelIndex >= mapEnts->clientTrigger.trigger.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 356, ASSERT_TYPE_ASSERT, "(unsigned)( tmodelIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "tmodelIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", tmodelIndex, mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  v11 = v10;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
  }
  models = mapEnts->clientTrigger.trigger.models;
  __asm
  {
    vsubss  xmm7, xmm0, dword ptr [rax+rbp*4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm9, xmm0, dword ptr [rax+rbp*4+8]
    vsubss  xmm8, xmm1, dword ptr [rax+rbp*4+4]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v20 = 0;
  do
  {
    v21 = v20 + models[v11].firstHull;
    v22 = __CFADD__(p_clientTrigger->trigger.hulls, v21 * 32) || &p_clientTrigger->trigger.hulls[v21] == NULL;
    _RBX = (__int64)&p_clientTrigger->trigger.hulls[v21];
    if ( !_RBX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 331, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
        __debugbreak();
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 522, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds");
      v22 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm7, dword ptr [rbx]
      vandps  xmm0, xmm0, xmm6
      vcomiss xmm0, dword ptr [rbx+0Ch]
    }
    if ( v22 )
    {
      __asm
      {
        vsubss  xmm0, xmm8, dword ptr [rbx+4]
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, dword ptr [rbx+10h]
      }
      if ( v22 )
      {
        __asm
        {
          vsubss  xmm0, xmm9, dword ptr [rbx+8]
          vandps  xmm0, xmm0, xmm6
          vcomiss xmm0, dword ptr [rbx+14h]
        }
        if ( v22 )
        {
          v31 = *(unsigned __int16 *)(_RBX + 24);
          v32 = 0;
          v33 = v31 == 0;
          if ( !*(_WORD *)(_RBX + 24) )
          {
LABEL_18:
            result = 1;
            goto LABEL_21;
          }
          _R8 = p_clientTrigger->trigger.slabs;
          while ( 1 )
          {
            _RAX = 5i64 * (*(_DWORD *)(_RBX + 28) + v32);
            __asm
            {
              vmulss  xmm1, xmm8, dword ptr [r8+rax*4+4]
              vmulss  xmm0, xmm7, dword ptr [r8+rax*4]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm9, dword ptr [r8+rax*4+8]
              vaddss  xmm0, xmm2, xmm1
              vsubss  xmm2, xmm0, dword ptr [r8+rax*4+0Ch]
              vandps  xmm2, xmm2, xmm6
              vcomiss xmm2, dword ptr [r8+rax*4+10h]
            }
            if ( !v33 )
              break;
            v33 = ++v32 <= v31;
            if ( v32 >= v31 )
              goto LABEL_18;
          }
        }
      }
    }
    ++v20;
  }
  while ( v20 != models[v11].hullCount );
  result = 0;
LABEL_21:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return result;
}

/*
==============
CG_TestTriggerTouch_Rotated
==============
*/
bool CG_TestTriggerTouch_Rotated(const ClientMapTriggers *triggers, const ClientTriggerModel *tmodel, const tmat33_t<vec3_t> *axis, const TriggerCapsuleTest *test)
{
  const ClientTriggerModel *v13; 
  int v16; 
  bool result; 
  char v65; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0D8h+var_88], xmm11
  }
  v13 = tmodel;
  if ( !triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 284, ASSERT_TYPE_ASSERT, "(triggers)", (const char *)&queryFormat, "triggers") )
    __debugbreak();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 285, ASSERT_TYPE_ASSERT, "(tmodel)", (const char *)&queryFormat, "tmodel") )
    __debugbreak();
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 286, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  __asm { vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  v16 = 0;
  do
  {
    _RBX = &triggers->hulls[v16 + v13->firstHull];
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 244, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 245, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0Ch]; halfSize
      vmovss  xmm2, dword ptr [rbx]; midPoint
    }
    if ( CG_TestTriggerTouch_Slab(test, axis->m, *(float *)&_XMM2, *(float *)&_XMM3) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+10h]; halfSize
        vmovss  xmm2, dword ptr [rbx+4]; midPoint
      }
      if ( CG_TestTriggerTouch_Slab(test, &axis->m[1], *(float *)&_XMM2, *(float *)&_XMM3) )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+14h]; halfSize
          vmovss  xmm2, dword ptr [rbx+8]; midPoint
        }
        if ( CG_TestTriggerTouch_Slab(test, &axis->m[2], *(float *)&_XMM2, *(float *)&_XMM3) )
        {
          if ( !_RBX->slabCount )
          {
            result = 1;
            goto LABEL_31;
          }
          _RBP = (char *)&triggers->slabs[_RBX->firstSlab];
          if ( _RBP == &v65 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
            __debugbreak();
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+8]
            vmovss  xmm5, dword ptr [rbp+4]
            vmovss  xmm4, dword ptr [rbp+0]
            vmulss  xmm1, xmm4, dword ptr [r14]
            vmulss  xmm0, xmm5, dword ptr [r14+4]
            vmulss  xmm3, xmm4, dword ptr [r14+0Ch]
            vmovss  xmm9, dword ptr [rbp+10h]
            vmovss  xmm10, dword ptr [rbp+0Ch]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [r14+8]
            vmulss  xmm0, xmm5, dword ptr [r14+10h]
            vaddss  xmm7, xmm2, xmm1
            vmulss  xmm1, xmm6, dword ptr [r14+14h]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm0, xmm4, dword ptr [r14+18h]
            vaddss  xmm8, xmm2, xmm1
            vmulss  xmm2, xmm5, dword ptr [r14+1Ch]
            vmulss  xmm1, xmm6, dword ptr [r14+20h]
            vaddss  xmm3, xmm2, xmm0
            vaddss  xmm6, xmm3, xmm1
          }
          if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 145, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
            __debugbreak();
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rdi+1Ch]
            vmulss  xmm0, xmm7, dword ptr [rdi+18h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rdi+20h]
            vaddss  xmm2, xmm2, xmm1
            vsubss  xmm3, xmm2, xmm10
            vandps  xmm6, xmm6, xmm11
            vmulss  xmm0, xmm6, dword ptr [rdi+28h]
            vaddss  xmm1, xmm0, dword ptr [rdi+24h]
            vaddss  xmm2, xmm1, xmm9
            vandps  xmm3, xmm3, xmm11
            vcomiss xmm3, xmm2
          }
        }
      }
    }
    v13 = tmodel;
    ++v16;
  }
  while ( v16 != tmodel->hullCount );
  result = 0;
LABEL_31:
  _R11 = &v67;
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
CG_TestTriggerTouch_Slab
==============
*/

bool __fastcall CG_TestTriggerTouch_Slab(const TriggerCapsuleTest *test, const vec3_t *dir, double midPoint, double halfSize)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = dir;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 145, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+1Ch]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rbx+18h]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm0, xmm5, dword ptr [rbx+20h]
    vandps  xmm5, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm3, xmm3, xmm2
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm5, dword ptr [rbx+28h]
    vsubss  xmm4, xmm1, xmm7
    vaddss  xmm1, xmm0, dword ptr [rbx+24h]
    vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vcomiss xmm4, xmm2
  }
  return 0;
}

/*
==============
CG_TestTriggerTouch_Unrotated
==============
*/
bool CG_TestTriggerTouch_Unrotated(const ClientMapTriggers *triggers, const ClientTriggerModel *tmodel, const TriggerCapsuleTest *test)
{
  int v13; 
  bool result; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  if ( !triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 188, ASSERT_TYPE_ASSERT, "(triggers)", (const char *)&queryFormat, "triggers") )
    __debugbreak();
  if ( !tmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 189, ASSERT_TYPE_ASSERT, "(tmodel)", (const char *)&queryFormat, "tmodel") )
    __debugbreak();
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 190, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  v13 = 0;
  do
  {
    _RBX = &triggers->hulls[v13 + tmodel->firstHull];
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 163, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 164, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 592, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 593, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm2, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vaddss  xmm0, xmm1, dword ptr [rdi+0Ch]
      vandps  xmm2, xmm2, xmm6
      vcomiss xmm2, xmm0
    }
    ++v13;
  }
  while ( v13 != tmodel->hullCount );
  result = 0;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v29;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return result;
}

/*
==============
CG_TriggerCalcMovingPlatformPos
==============
*/
void CG_TriggerCalcMovingPlatformPos(const LocalClientNum_t localClientNum, const vec3_t *viewPos, const unsigned int triggerIndex, vec3_t *outOffset)
{
  __int64 v4; 
  int v9; 

  v4 = triggerIndex;
  if ( triggerIndex >= 0x4000 )
  {
    v9 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", triggerIndex, v9) )
      __debugbreak();
  }
  outOffset->v[0] = viewPos->v[0];
  outOffset->v[1] = viewPos->v[1];
  outOffset->v[2] = viewPos->v[2];
  if ( cm.mapEnts )
  {
    if ( (unsigned int)v4 < cm.mapEnts->clientTrigger.trigger.count )
      CG_TriggerCalcMovingPlatformPosFromAnchor(localClientNum, cm.mapEnts->clientTrigger.linkTo[v4], viewPos, outOffset);
  }
}

/*
==============
CG_TriggerCalcMovingPlatformPosFromAnchor
==============
*/
void CG_TriggerCalcMovingPlatformPosFromAnchor(LocalClientNum_t localClientNum, const ClientEntityLinkToDef *const linkTo, const vec3_t *inPos, vec3_t *outPos)
{
  const vec3_t *v6; 
  unsigned int v11; 
  unsigned int AnchorEntNum; 
  unsigned int v13; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  __int64 v36; 
  int anchorIndex; 
  unsigned int v38; 
  int v39; 
  vec3_t outOrigin; 
  __int64 v41; 
  vec4_t quat; 
  vec3_t out; 

  v41 = -2i64;
  __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
  _RSI = outPos;
  v6 = inPos;
  outPos->v[0] = inPos->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [r9+4], xmm0
    vmovss  xmm1, dword ptr [r8+8]
    vmovss  dword ptr [r9+8], xmm1
  }
  if ( linkTo && cm.mapEnts->clientEntAnchors )
  {
    if ( linkTo->anchorIndex >= CM_ClientAnchorCount() )
    {
      v38 = CM_ClientAnchorCount();
      anchorIndex = linkTo->anchorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", anchorIndex, v38) )
        __debugbreak();
    }
    v11 = linkTo->anchorIndex;
    if ( v11 < CM_ClientAnchorCount() )
    {
      AnchorEntNum = CM_GetAnchorEntNum(v11);
      v13 = AnchorEntNum;
      if ( AnchorEntNum > 0x7FF )
      {
        v39 = 2047;
        LODWORD(v36) = AnchorEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 392, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 ) - 1 )", "entIndex not in [0, MAX_GENTITIES - 1]\n\t%i not in [%i, %i]", v36, 0i64, v39) )
          __debugbreak();
      }
      if ( v13 <= 0x7FE )
      {
        Entity = CG_GetEntity(localClientNum, v13);
        p_pose = &Entity->pose;
        if ( Entity )
        {
          if ( (Entity->flags & 1) != 0 )
          {
            AnglesToQuat(&Entity->pose.angles, &quat);
            __asm
            {
              vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
              vmovss  xmm0, dword ptr [rsp+0B8h+quat]
              vxorps  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsp+0B8h+quat], xmm1
              vmovss  xmm2, dword ptr [rsp+0B8h+quat+4]
              vxorps  xmm0, xmm2, xmm6
              vmovss  dword ptr [rsp+0B8h+quat+4], xmm0
              vmovss  xmm1, dword ptr [rsp+0B8h+quat+8]
              vxorps  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+0B8h+quat+8], xmm2
            }
            CG_GetPoseOrigin(p_pose, &outOrigin);
            VectorRotateQuatAroundPoint(v6, &quat, &outOrigin, &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
              vaddss  xmm4, xmm0, dword ptr [rbx+4]
              vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
              vaddss  xmm3, xmm1, dword ptr [rbx+8]
              vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
              vaddss  xmm2, xmm0, dword ptr [rbx+0Ch]
              vxorps  xmm1, xmm4, xmm6
              vxorps  xmm5, xmm3, xmm6
              vxorps  xmm4, xmm2, xmm6
              vaddss  xmm0, xmm1, dword ptr [rsp+0B8h+out]
              vmovss  dword ptr [rsi], xmm0
              vaddss  xmm2, xmm5, dword ptr [rsp+0B8h+out+4]
              vmovss  dword ptr [rsi+4], xmm2
              vaddss  xmm1, xmm4, dword ptr [rsp+0B8h+out+8]
              vmovss  dword ptr [rsi+8], xmm1
            }
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
}

/*
==============
CG_TriggerDraw
==============
*/
void CG_TriggerDraw(LocalClientNum_t localClientNum, unsigned int trigIndex, const vec4_t *color, int depthTest)
{
  MapEnts *mapEnts; 
  __int64 v7; 
  const ClientMapTriggers *p_trigger; 
  const ClientTriggerModel *v10; 
  unsigned int count; 

  mapEnts = cm.mapEnts;
  v7 = trigIndex;
  if ( trigIndex >= cm.mapEnts->clientTrigger.trigger.count )
  {
    count = cm.mapEnts->clientTrigger.trigger.count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 659, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", trigIndex, count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  p_trigger = &mapEnts->clientTrigger.trigger;
  v10 = &mapEnts->clientTrigger.trigger.models[v7];
  CG_GetTriggerTransform(localClientNum, v7, (tmat43_t<vec3_t> *)&g_debugDrawBrushInfo_0.duration);
  g_debugDrawBrushInfo_0.depthTest = depthTest;
  CM_ShowClientTriggerModelCollision(p_trigger, v10, color, 0, &colorWhite, DrawBrushPoly_0);
}

/*
==============
CG_TriggerLerpTriggers
==============
*/
void CG_TriggerLerpTriggers(LocalClientNum_t localClientNum, const unsigned int blendTrigger, const vec3_t *viewPos, unsigned int *trigA, unsigned int *trigB, float *lerpAmount)
{
  __int64 v16; 
  MapEnts *mapEnts; 
  __int64 v22; 
  __int64 v54; 
  __int64 v56; 
  int v57; 
  vec3_t outPos; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0F8h+var_88], xmm10
    vmovaps [rsp+0F8h+var_98], xmm11
  }
  _R15 = lerpAmount;
  _RDI = viewPos;
  v16 = blendTrigger;
  if ( blendTrigger >= 0x4000 )
  {
    v57 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", blendTrigger, v57) )
      __debugbreak();
  }
  mapEnts = cm.mapEnts;
  __asm
  {
    vmovss  xmm9, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rdi+4]
    vmovss  xmm11, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0F8h+outPos], xmm9
    vmovss  dword ptr [rsp+0F8h+outPos+4], xmm10
    vmovss  dword ptr [rsp+0F8h+outPos+8], xmm11
  }
  if ( cm.mapEnts && (unsigned int)v16 < cm.mapEnts->clientTrigger.trigger.count )
  {
    CG_TriggerCalcMovingPlatformPosFromAnchor(localClientNum, cm.mapEnts->clientTrigger.linkTo[v16], _RDI, &outPos);
    mapEnts = cm.mapEnts;
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+0F8h+outPos+8]
      vmovss  xmm10, dword ptr [rsp+0F8h+outPos+4]
      vmovss  xmm9, dword ptr [rsp+0F8h+outPos]
    }
  }
  v22 = mapEnts->clientTrigger.blendLookup[v16];
  if ( (unsigned int)v22 >= mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )
  {
    LODWORD(v56) = mapEnts->clientTriggerBlend.numClientTriggerBlendNodes;
    LODWORD(v54) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )", "blendIndex doesn't index cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes\n\t%i not in [0, %i)", v54, v56) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  _RDX = 28 * v22;
  *trigA = mapEnts->clientTriggerBlend.blendNodes[v22].triggerA;
  *trigB = cm.mapEnts->clientTriggerBlend.blendNodes[v22].triggerB;
  _RCX = cm.mapEnts->clientTriggerBlend.blendNodes;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rdx+0Ch]
    vsubss  xmm8, xmm0, dword ptr [rcx+rdx]
    vmovss  xmm1, dword ptr [rcx+rdx+10h]
    vsubss  xmm6, xmm1, dword ptr [rcx+rdx+4]
    vmovss  xmm0, dword ptr [rcx+rdx+14h]
    vsubss  xmm7, xmm0, dword ptr [rcx+rdx+8]
    vsubss  xmm1, xmm10, dword ptr [rcx+rdx+4]
    vsubss  xmm0, xmm9, dword ptr [rcx+rdx]
    vmulss  xmm3, xmm1, xmm6
    vsubss  xmm1, xmm11, dword ptr [rcx+rdx+8]
    vmulss  xmm2, xmm0, xmm8
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm1, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm5, xmm4, xmm0
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vdivss  xmm0, xmm5, xmm2; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [r15], xmm0 }
  if ( *trigA >= 0x4000 )
  {
    LODWORD(v56) = 0x4000;
    LODWORD(v54) = *trigA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( *trigA ) < (unsigned)( (16*1024) )", "*trigA doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v54, v56) )
      __debugbreak();
  }
  if ( *trigA >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v56) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(v54) = *trigA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( *trigA ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "*trigA doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v54, v56) )
      __debugbreak();
  }
  if ( *trigB >= 0x4000 )
  {
    LODWORD(v56) = 0x4000;
    LODWORD(v54) = *trigB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 781, ASSERT_TYPE_ASSERT, "(unsigned)( *trigB ) < (unsigned)( (16*1024) )", "*trigB doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v54, v56) )
      __debugbreak();
  }
  if ( *trigB >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v56) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(v54) = *trigB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( *trigB ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "*trigB doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v54, v56) )
      __debugbreak();
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
CG_TriggerTransformPointOnMovingPlatform
==============
*/
void CG_TriggerTransformPointOnMovingPlatform(const LocalClientNum_t localClientNum, const unsigned int triggerIndex, const vec3_t *origin, vec3_t *outOffset, tmat33_t<vec3_t> *outAxis)
{
  __int64 v11; 
  ClientEntityLinkToDef *v15; 
  unsigned int anchorIndex; 
  unsigned int AnchorEntNum; 
  unsigned int v18; 
  centity_t *Entity; 
  const vec3_t *v20; 
  __int64 v37; 
  __int64 v39; 
  int v40; 
  int v41; 
  vec3_t outOrigin; 
  __int64 v43; 
  vec3_t vOrigin; 
  vec3_t out; 
  vec4_t quat; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RSI = outOffset;
  _R14 = origin;
  v11 = triggerIndex;
  if ( triggerIndex >= 0x4000 )
  {
    v40 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", triggerIndex, v40) )
      __debugbreak();
  }
  _RSI->v[0] = _R14->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
  if ( outAxis )
    AxisClear(outAxis);
  if ( cm.mapEnts )
  {
    if ( (unsigned int)v11 < cm.mapEnts->clientTrigger.trigger.count )
    {
      v15 = cm.mapEnts->clientTrigger.linkTo[v11];
      if ( v15 )
      {
        if ( cm.mapEnts->clientEntAnchors )
        {
          if ( v15->anchorIndex >= CM_ClientAnchorCount() )
          {
            LODWORD(v39) = CM_ClientAnchorCount();
            LODWORD(v37) = v15->anchorIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v37, v39) )
              __debugbreak();
          }
          anchorIndex = v15->anchorIndex;
          if ( anchorIndex < CM_ClientAnchorCount() )
          {
            AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
            v18 = AnchorEntNum;
            if ( AnchorEntNum > 0x7FF )
            {
              v41 = 2047;
              LODWORD(v37) = AnchorEntNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 502, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 )-1 )", "entIndex not in [0, MAX_GENTITIES-1]\n\t%i not in [%i, %i]", v37, 0i64, v41) )
                __debugbreak();
            }
            if ( v18 <= 0x7FE )
            {
              Entity = CG_GetEntity(localClientNum, v18);
              v20 = (const vec3_t *)Entity;
              if ( Entity )
              {
                if ( (Entity->flags & 1) != 0 )
                {
                  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+0F8h+outOrigin]
                    vaddss  xmm6, xmm0, dword ptr [rdi+4]
                    vmovss  xmm1, dword ptr [rsp+0F8h+outOrigin+4]
                    vaddss  xmm7, xmm1, dword ptr [rdi+8]
                    vmovss  xmm2, dword ptr [rsp+0F8h+outOrigin+8]
                    vaddss  xmm8, xmm2, dword ptr [rdi+0Ch]
                    vsubss  xmm0, xmm0, xmm6
                    vmovss  dword ptr [rsp+0F8h+vOrigin], xmm0
                    vsubss  xmm1, xmm1, xmm7
                    vmovss  dword ptr [rsp+0F8h+vOrigin+4], xmm1
                    vsubss  xmm0, xmm2, xmm8
                    vmovss  dword ptr [rsp+0F8h+vOrigin+8], xmm0
                  }
                  AnglesToQuat(v20 + 6, &quat);
                  if ( outAxis )
                    AnglesToAxis(v20 + 6, outAxis);
                  VectorRotateQuatAroundPoint(_R14, &quat, &vOrigin, &out);
                  __asm
                  {
                    vaddss  xmm1, xmm6, dword ptr [rsp+0F8h+out]
                    vmovss  dword ptr [rsi], xmm1
                    vaddss  xmm0, xmm7, dword ptr [rsp+0F8h+out+4]
                    vmovss  dword ptr [rsi+4], xmm0
                    vaddss  xmm2, xmm8, dword ptr [rsp+0F8h+out+8]
                    vmovss  dword ptr [rsi+8], xmm2
                  }
                  memset(&outOrigin, 0, sizeof(outOrigin));
                }
              }
            }
          }
        }
      }
    }
  }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
CG_TriggerUpdate
==============
*/

void __fastcall CG_TriggerUpdate(LocalClientNum_t localClientNum)
{
  CG_TriggerUpdateForCameraBounds(localClientNum);
}

/*
==============
CG_TriggerUpdateForCameraBounds
==============
*/
void CG_TriggerUpdateForCameraBounds(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v12; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v26; 
  int v28; 
  MapEnts *mapEnts; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  MapEnts *v36; 
  unsigned __int16 v38; 
  unsigned int v42; 
  unsigned int v43; 
  const dvar_t *v44; 
  const vec4_t *v45; 
  bool v48; 
  __int64 v60; 
  vec3_t *viewPos; 
  __int64 v62; 
  char v63[4464]; 
  char v74; 

  v12 = alloca(v1);
  __asm
  {
    vmovaps [rsp+1298h+var_38], xmm6
    vmovaps [rsp+1298h+var_48], xmm7
    vmovaps [rsp+1298h+var_58], xmm8
    vmovaps [rsp+1298h+var_68], xmm9
    vmovaps [rsp+1298h+var_78], xmm10
    vmovaps [rsp+1298h+var_88], xmm11
    vmovaps [rsp+1298h+var_98], xmm12
    vmovaps [rsp+1298h+var_A8], xmm13
    vmovaps [rsp+1298h+var_B8], xmm14
    vmovaps [rsp+1298h+var_C8], xmm15
  }
  _RBP = (unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4448) = (unsigned __int64)&v60 ^ _security_cookie;
  v14 = cg_t::ms_allocatedCount;
  v15 = 0x4000;
  __asm { vmovss  xmm14, cs:__real@bf800000 }
  v17 = localClientNum;
  v18 = 0x4000;
  *(_DWORD *)_RBP = 0x4000;
  v19 = 0x4000;
  *(_DWORD *)(_RBP + 12) = 0x4000;
  v20 = 0x4000;
  *(_DWORD *)(_RBP + 16) = 0x4000;
  v21 = 0x4000;
  *(_DWORD *)(_RBP + 8) = 0x4000;
  if ( localClientNum >= v14 )
  {
    LODWORD(v62) = v14;
    LODWORD(viewPos) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", viewPos, v62) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v17] )
  {
    LODWORD(v62) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v62) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v62) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v62) )
      __debugbreak();
  }
  _RAX = cg_t::ms_cgArray[v17];
  if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+699Ch]
      vmovss  dword ptr [rbp+18h], xmm0
      vmovss  xmm1, dword ptr [rax+69A0h]
      vmovss  dword ptr [rbp+1Ch], xmm1
      vmovss  xmm2, dword ptr [rax+69A4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+59680h]
      vmovss  dword ptr [rbp+18h], xmm0
      vmovss  xmm1, dword ptr [rax+59684h]
      vmovss  dword ptr [rbp+1Ch], xmm1
      vmovss  xmm2, dword ptr [rax+59688h]
    }
  }
  __asm { vmovss  dword ptr [rbp+4], xmm0 }
  v26 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000;
  __asm { vmovss  dword ptr [rbp+20h], xmm2 }
  if ( v26 == 2139095040 )
    goto LABEL_89;
  __asm { vmovss  dword ptr [rbp+4], xmm1 }
  if ( (*(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000) == 2139095040 )
    goto LABEL_89;
  __asm { vmovss  dword ptr [rbp+4], xmm2 }
  if ( (*(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000) == 2139095040 )
    goto LABEL_89;
  __asm { vmovsd  xmm0, qword ptr [rbp+18h] }
  v28 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  mapEnts = cm.mapEnts;
  __asm
  {
    vmovsd  qword ptr [rbp+50h], xmm0
    vmovss  xmm0, cs:__real@3f800000
  }
  *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = v28;
  __asm
  {
    vmovss  dword ptr [rbp+5Ch], xmm0
    vmovss  dword ptr [rbp+60h], xmm0
    vmovss  dword ptr [rbp+64h], xmm0
  }
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = 0i64;
  *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148) = 0;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = 0i64;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 128), mapEnts->clientTrigger.spatialTree, (const Bounds *)(_RBP + 80));
  if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 128)) )
    goto LABEL_88;
  __asm
  {
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm15, cs:__real@3a83126f
  }
  do
  {
    if ( !*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v33 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) + 20i64);
    v34 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148);
    if ( v34 == v33 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) >= **(unsigned __int8 **)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v35 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) + 4i64 * *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) + 4);
    }
    else
    {
      if ( v34 >= v33 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v34 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148);
      }
      v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) + 8i64) + 4i64 * v34);
    }
    v36 = cm.mapEnts;
    if ( v35 >= cm.mapEnts->clientTrigger.trigger.count )
    {
      LODWORD(v62) = cm.mapEnts->clientTrigger.trigger.count;
      LODWORD(viewPos) = v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 839, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", viewPos, v62) )
        __debugbreak();
      v36 = cm.mapEnts;
    }
    _R14 = v35;
    v38 = v36->clientTrigger.triggerType[v35];
    if ( v35 >= 0x4000 )
    {
      LODWORD(v62) = 0x4000;
      LODWORD(viewPos) = v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", viewPos, v62) )
        __debugbreak();
      v36 = cm.mapEnts;
    }
    *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+18h]
      vmovsd  qword ptr [rbp+40h], xmm0
    }
    if ( v36 && v35 < v36->clientTrigger.trigger.count )
      CG_TriggerCalcMovingPlatformPosFromAnchor((LocalClientNum_t)v17, v36->clientTrigger.linkTo[v35], (const vec3_t *)(_RBP + 24), (vec3_t *)(_RBP + 64));
    if ( CG_TestTriggerTouch_Point(v35, (const vec3_t *)(_RBP + 64)) )
    {
      if ( (v38 & 1) != 0 && v35 < v15 )
        v15 = v35;
      if ( (v38 & 2) != 0 && !g_audioTriggerDisabled[v35] )
      {
        _RAX = cm.mapEnts->clientTrigger.priority;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+r14*4]
          vcomiss xmm0, xmm14
        }
        if ( g_audioTriggerDisabled[v35] )
        {
          __asm { vmovaps xmm14, xmm0 }
          v18 = v35;
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm0, xmm14
            vandps  xmm0, xmm0, xmm13
            vcomiss xmm0, xmm15
          }
        }
        v19 = *(_DWORD *)_RBP;
      }
      if ( (v38 & 8) != 0 )
      {
        if ( !g_audioTriggerDisabled[v35] )
          v19 = v35;
        *(_DWORD *)_RBP = v19;
      }
      v42 = v35;
      v43 = v35;
      if ( (v38 & 0x2000) == 0 )
        v42 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
      *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v42;
      if ( (v38 & 4) == 0 )
        v43 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
      *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v43;
      if ( (v38 & 0x40) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v35;
        *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v42;
        *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v43;
      }
    }
    v44 = DVARBOOL_cg_trigger_draw;
    if ( !DVARBOOL_cg_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_trigger_draw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
    {
      if ( (v38 & 1) != 0 )
      {
        v45 = &colorBlue;
      }
      else if ( (v38 & 2) == 0 || g_audioTriggerDisabled[v35] )
      {
        if ( (v38 & 4) != 0 )
        {
          v45 = &colorLtBlue;
        }
        else if ( (v38 & 8) == 0 || g_audioTriggerDisabled[v35] )
        {
          if ( (v38 & 0x2000) == 0 )
            goto LABEL_86;
          v45 = &colorYellow;
        }
        else
        {
          v45 = &colorLtGreen;
        }
      }
      else
      {
        v45 = &colorGreen;
      }
      CG_TriggerDraw((LocalClientNum_t)v17, v35, v45, 1);
    }
LABEL_86:
    v48 = SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 128));
    v19 = *(_DWORD *)_RBP;
  }
  while ( v48 );
  v21 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v20 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
LABEL_88:
  CG_TriggerUpdateVision((LocalClientNum_t)v17, *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), v15, (const vec3_t *)(_RBP + 24));
  CG_TriggerUpdateAudio((LocalClientNum_t)v17, v19, v18, v20, v21, (const vec3_t *)(_RBP + 24));
LABEL_89:
  _R11 = &v74;
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

