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
  __int64 v4; 
  MapEnts *mapEnts; 
  vec3_t *origins; 
  float v8; 
  float v9; 
  float v10; 
  ClientEntityLinkToDef *v11; 
  int AnchorEntNum; 
  centity_t *Entity; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int64 v17; 
  vec3_t v18; 
  vec3_t angles; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v22; 
  tmat43_t<vec3_t> v23; 
  tmat43_t<vec3_t> out; 

  v4 = trigIndex;
  mapEnts = cm.mapEnts;
  if ( trigIndex >= cm.mapEnts->clientTrigger.trigger.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 630, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", trigIndex, cm.mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  origins = mapEnts->clientTrigger.origins;
  v8 = origins[v4].v[0];
  v9 = origins[v4].v[1];
  v10 = origins[v4].v[2];
  v18.v[0] = 0.0;
  v18.v[1] = 0.0;
  v18.v[2] = 0.0;
  v11 = mapEnts->clientTrigger.linkTo[v4];
  if ( !v11 || !mapEnts->clientEntAnchors )
    goto LABEL_13;
  if ( v11->anchorIndex >= CM_ClientAnchorCount() )
  {
    LODWORD(v17) = CM_ClientAnchorCount();
    LODWORD(v16) = v11->anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 584, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  AnchorEntNum = CM_GetAnchorEntNum(v11->anchorIndex);
  Entity = CG_GetEntity(localClientNum, AnchorEntNum);
  if ( Entity && (Entity->flags & 1) != 0 )
  {
    v14 = Entity->pose.angles.v[1];
    angles.v[0] = Entity->pose.angles.v[0];
    angles.v[2] = Entity->pose.angles.v[2];
    angles.v[1] = v14;
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    axis.m[3] = outOrigin;
    AnglesToAxis(&v11->angleOffset, (tmat33_t<vec3_t> *)&v22);
    v15 = v11->originOffset.v[1];
    v22.m[3].v[0] = v11->originOffset.v[0];
    v22.m[3].v[2] = v11->originOffset.v[2];
    v22.m[3].v[1] = v15;
    AnglesToAxis(&v18, (tmat33_t<vec3_t> *)&v23);
    v23.m[3].v[0] = v8;
    v23.m[3].v[1] = v9;
    v23.m[3].v[2] = v10;
    MatrixMultiply43(&v22, &axis, &out);
    MatrixMultiply43(&v23, &out, outTransform);
  }
  else
  {
LABEL_13:
    AnglesToAxis(&v18, (tmat33_t<vec3_t> *)outTransform);
    outTransform->m[3].v[2] = v10;
    outTransform->m[3].v[1] = v9;
    outTransform->m[3].v[0] = v8;
  }
}

/*
==============
CG_SetupTriggerTest
==============
*/
bool CG_SetupTriggerTest(const vec3_t *bakedTriggerOrigin, const Bounds *bounds, const vec3_t *relativeOrigin, const vec3_t *angles, TriggerCapsuleTest *capsuleOut, tmat33_t<vec3_t> *axisOut)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  bool result; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 211, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !capsuleOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 212, ASSERT_TYPE_ASSERT, "(capsuleOut)", (const char *)&queryFormat, "capsuleOut") )
    __debugbreak();
  v10 = bounds->halfSize.v[0];
  v11 = bounds->halfSize.v[1];
  if ( v10 != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 213, ASSERT_TYPE_ASSERT, "( bounds->halfSize[0] ) == ( bounds->halfSize[1] )", "%s == %s\n\t%g, %g", "bounds->halfSize[0]", "bounds->halfSize[1]", v10, v11) )
    __debugbreak();
  v12 = bounds->halfSize.v[0];
  v13 = bounds->halfSize.v[2];
  if ( v12 > v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 214, ASSERT_TYPE_ASSERT, "( bounds->halfSize[0] ) <= ( bounds->halfSize[2] )", "%s <= %s\n\t%g, %g", "bounds->halfSize[0]", "bounds->halfSize[2]", v12, v13) )
    __debugbreak();
  capsuleOut->relativeOrigin = *relativeOrigin;
  capsuleOut->triggerSpaceBounds.midPoint.v[0] = bounds->midPoint.v[0] - bakedTriggerOrigin->v[0];
  capsuleOut->triggerSpaceBounds.midPoint.v[1] = bounds->midPoint.v[1] - bakedTriggerOrigin->v[1];
  capsuleOut->triggerSpaceBounds.midPoint.v[2] = bounds->midPoint.v[2] - bakedTriggerOrigin->v[2];
  v14 = bounds->halfSize.v[0];
  capsuleOut->radius = v14;
  v15 = bounds->halfSize.v[2] - v14;
  capsuleOut->halfHeight = v15;
  if ( angles->v[0] == 0.0 && angles->v[1] == 0.0 && angles->v[2] == 0.0 || v15 == 0.0 )
  {
    capsuleOut->triggerSpaceBounds.halfSize.v[0] = v14;
    capsuleOut->triggerSpaceBounds.halfSize.v[1] = capsuleOut->radius;
    result = 0;
    v16 = v14 + v15;
  }
  else
  {
    AnglesToAxis(angles, axisOut);
    capsuleOut->triggerSpaceBounds.halfSize.v[0] = (float)(COERCE_FLOAT(LODWORD(axisOut->m[2].v[0]) & _xmm) * capsuleOut->halfHeight) + capsuleOut->radius;
    capsuleOut->triggerSpaceBounds.halfSize.v[1] = (float)(COERCE_FLOAT(LODWORD(axisOut->m[2].v[1]) & _xmm) * capsuleOut->halfHeight) + capsuleOut->radius;
    v16 = (float)(COERCE_FLOAT(LODWORD(axisOut->m[2].v[2]) & _xmm) * capsuleOut->halfHeight) + capsuleOut->radius;
    result = 1;
  }
  capsuleOut->triggerSpaceBounds.halfSize.v[2] = v16;
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
char CG_TestTriggerTouch_Point(unsigned int tmodelIndex, const vec3_t *origin)
{
  MapEnts *mapEnts; 
  ClientTriggers *p_clientTrigger; 
  __int64 v5; 
  vec3_t *origins; 
  __int64 v7; 
  ClientTriggerModel *models; 
  float v9; 
  float v10; 
  float v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  TriggerSlab *slabs; 

  mapEnts = cm.mapEnts;
  p_clientTrigger = &cm.mapEnts->clientTrigger;
  v5 = tmodelIndex;
  if ( tmodelIndex >= cm.mapEnts->clientTrigger.trigger.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 356, ASSERT_TYPE_ASSERT, "(unsigned)( tmodelIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "tmodelIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", tmodelIndex, cm.mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  origins = mapEnts->clientTrigger.origins;
  v7 = v5;
  models = mapEnts->clientTrigger.trigger.models;
  v9 = origin->v[0] - origins[v5].v[0];
  v10 = origin->v[2] - origins[v5].v[2];
  v11 = origin->v[1] - origins[v5].v[1];
  v12 = 0;
  do
  {
    v13 = (__int64)&p_clientTrigger->trigger.hulls[v12 + models[v7].firstHull];
    if ( !v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 331, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 522, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
        __debugbreak();
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - *(float *)v13) & _xmm) <= *(float *)(v13 + 12) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - *(float *)(v13 + 4)) & _xmm) <= *(float *)(v13 + 16) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - *(float *)(v13 + 8)) & _xmm) <= *(float *)(v13 + 20) )
    {
      v14 = 0;
      if ( !*(_WORD *)(v13 + 24) )
        return 1;
      while ( 1 )
      {
        slabs = p_clientTrigger->trigger.slabs;
        v15 = *(_DWORD *)(v13 + 28);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v11 * slabs[v15 + v14].dir.v[1]) + (float)(v9 * slabs[v15 + v14].dir.v[0])) + (float)(v10 * slabs[v15 + v14].dir.v[2])) - slabs[v15 + v14].midPoint) & _xmm) > slabs[v15 + v14].halfSize )
          break;
        if ( ++v14 >= (unsigned int)*(unsigned __int16 *)(v13 + 24) )
          return 1;
      }
    }
    ++v12;
  }
  while ( v12 != models[v7].hullCount );
  return 0;
}

/*
==============
CG_TestTriggerTouch_Rotated
==============
*/
char CG_TestTriggerTouch_Rotated(const ClientMapTriggers *triggers, const ClientTriggerModel *tmodel, const tmat33_t<vec3_t> *axis, const TriggerCapsuleTest *test)
{
  const ClientTriggerModel *v6; 
  int v8; 
  ClientTriggerHull *v9; 
  int v10; 
  TriggerSlab *v11; 
  float v12; 
  float v13; 
  float halfSize; 
  float midPoint; 
  float v16; 
  float v17; 
  float v18; 
  char v21; 

  v6 = tmodel;
  if ( !triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 284, ASSERT_TYPE_ASSERT, "(triggers)", (const char *)&queryFormat, "triggers") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 285, ASSERT_TYPE_ASSERT, "(tmodel)", (const char *)&queryFormat, "tmodel") )
    __debugbreak();
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 286, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  v8 = 0;
  do
  {
    v9 = &triggers->hulls[v8 + v6->firstHull];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 244, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 245, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
      __debugbreak();
    if ( CG_TestTriggerTouch_Slab(test, axis->m, v9->triggerSpaceBounds.midPoint.v[0], v9->triggerSpaceBounds.halfSize.v[0]) && CG_TestTriggerTouch_Slab(test, &axis->m[1], v9->triggerSpaceBounds.midPoint.v[1], v9->triggerSpaceBounds.halfSize.v[1]) && CG_TestTriggerTouch_Slab(test, &axis->m[2], v9->triggerSpaceBounds.midPoint.v[2], v9->triggerSpaceBounds.halfSize.v[2]) )
    {
      v10 = 0;
      if ( !v9->slabCount )
        return 1;
      while ( 1 )
      {
        v11 = &triggers->slabs[v10 + v9->firstSlab];
        if ( v11 == (TriggerSlab *)&v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
          __debugbreak();
        v12 = v11->dir.v[2];
        v13 = v11->dir.v[1];
        halfSize = v11->halfSize;
        midPoint = v11->midPoint;
        v16 = (float)((float)(v11->dir.v[0] * axis->m[0].v[0]) + (float)(v13 * axis->m[0].v[1])) + (float)(v12 * axis->m[0].v[2]);
        v17 = (float)((float)(v11->dir.v[0] * axis->m[1].v[0]) + (float)(v13 * axis->m[1].v[1])) + (float)(v12 * axis->m[1].v[2]);
        v18 = (float)((float)(v13 * axis->m[2].v[1]) + (float)(v11->dir.v[0] * axis->m[2].v[0])) + (float)(v12 * axis->m[2].v[2]);
        if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 145, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
          __debugbreak();
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v17 * test->relativeOrigin.v[1]) + (float)(v16 * test->relativeOrigin.v[0])) + (float)(v18 * test->relativeOrigin.v[2])) - midPoint) & _xmm) >= (float)((float)((float)(COERCE_FLOAT(LODWORD(v18) & _xmm) * test->halfHeight) + test->radius) + halfSize) )
          break;
        if ( ++v10 >= (unsigned int)v9->slabCount )
          return 1;
      }
    }
    v6 = tmodel;
    ++v8;
  }
  while ( v8 != tmodel->hullCount );
  return 0;
}

/*
==============
CG_TestTriggerTouch_Slab
==============
*/
bool CG_TestTriggerTouch_Slab(const TriggerCapsuleTest *test, const vec3_t *dir, float midPoint, float halfSize)
{
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 145, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(dir->v[1] * test->relativeOrigin.v[1]) + (float)(dir->v[0] * test->relativeOrigin.v[0])) + (float)(dir->v[2] * test->relativeOrigin.v[2])) - midPoint) & _xmm) < (float)((float)((float)(COERCE_FLOAT(LODWORD(dir->v[2]) & _xmm) * test->halfHeight) + test->radius) + halfSize);
}

/*
==============
CG_TestTriggerTouch_Unrotated
==============
*/
char CG_TestTriggerTouch_Unrotated(const ClientMapTriggers *triggers, const ClientTriggerModel *tmodel, const TriggerCapsuleTest *test)
{
  int v6; 
  ClientTriggerHull *v7; 
  unsigned __int16 slabCount; 
  int v9; 
  TriggerSlab *slabs; 
  unsigned int i; 
  float v12; 

  if ( !triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 188, ASSERT_TYPE_ASSERT, "(triggers)", (const char *)&queryFormat, "triggers") )
    __debugbreak();
  if ( !tmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 189, ASSERT_TYPE_ASSERT, "(tmodel)", (const char *)&queryFormat, "tmodel") )
    __debugbreak();
  if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 190, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
    __debugbreak();
  v6 = 0;
  do
  {
    v7 = &triggers->hulls[v6 + tmodel->firstHull];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 163, ASSERT_TYPE_ASSERT, "(thull)", (const char *)&queryFormat, "thull") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 164, ASSERT_TYPE_ASSERT, "(test)", (const char *)&queryFormat, "test") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 592, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
      __debugbreak();
    if ( !test && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 593, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
      __debugbreak();
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->triggerSpaceBounds.midPoint.v[0] - test->triggerSpaceBounds.midPoint.v[0]) & _xmm) < (float)(v7->triggerSpaceBounds.halfSize.v[0] + test->triggerSpaceBounds.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->triggerSpaceBounds.midPoint.v[1] - test->triggerSpaceBounds.midPoint.v[1]) & _xmm) < (float)(v7->triggerSpaceBounds.halfSize.v[1] + test->triggerSpaceBounds.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->triggerSpaceBounds.midPoint.v[2] - test->triggerSpaceBounds.midPoint.v[2]) & _xmm) < (float)(v7->triggerSpaceBounds.halfSize.v[2] + test->triggerSpaceBounds.halfSize.v[2]) )
    {
      slabCount = v7->slabCount;
      v9 = 0;
      if ( !slabCount )
        return 1;
      slabs = triggers->slabs;
      for ( i = v7->firstSlab; ; ++i )
      {
        v12 = slabs[i].dir.v[2];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(test->relativeOrigin.v[1] * slabs[i].dir.v[1]) + (float)(test->relativeOrigin.v[0] * slabs[i].dir.v[0])) + (float)(test->relativeOrigin.v[2] * v12)) - slabs[i].midPoint) & _xmm) >= (float)((float)((float)(COERCE_FLOAT(LODWORD(v12) & _xmm) * test->halfHeight) + test->radius) + slabs[i].halfSize) )
          break;
        if ( ++v9 >= (unsigned int)slabCount )
          return 1;
      }
    }
    ++v6;
  }
  while ( v6 != tmodel->hullCount );
  return 0;
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
  unsigned int anchorIndex; 
  unsigned int AnchorEntNum; 
  unsigned int v10; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  float v13; 
  float v14; 
  __int64 v15; 
  unsigned int v16; 
  vec3_t outOrigin; 
  __int64 v18; 
  vec4_t quat; 
  vec3_t out; 

  v18 = -2i64;
  *outPos = *inPos;
  if ( linkTo && cm.mapEnts->clientEntAnchors )
  {
    if ( linkTo->anchorIndex >= CM_ClientAnchorCount() )
    {
      v16 = CM_ClientAnchorCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", linkTo->anchorIndex, v16) )
        __debugbreak();
    }
    anchorIndex = linkTo->anchorIndex;
    if ( anchorIndex < CM_ClientAnchorCount() )
    {
      AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
      v10 = AnchorEntNum;
      if ( AnchorEntNum > 0x7FF )
      {
        LODWORD(v15) = AnchorEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 392, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 ) - 1 )", "entIndex not in [0, MAX_GENTITIES - 1]\n\t%i not in [%i, %i]", v15, 0i64, 2047) )
          __debugbreak();
      }
      if ( v10 <= 0x7FE )
      {
        Entity = CG_GetEntity(localClientNum, v10);
        p_pose = &Entity->pose;
        if ( Entity )
        {
          if ( (Entity->flags & 1) != 0 )
          {
            AnglesToQuat(&Entity->pose.angles, &quat);
            LODWORD(quat.v[0]) ^= _xmm;
            LODWORD(quat.v[1]) ^= _xmm;
            LODWORD(quat.v[2]) ^= _xmm;
            CG_GetPoseOrigin(p_pose, &outOrigin);
            VectorRotateQuatAroundPoint(inPos, &quat, &outOrigin, &out);
            v13 = outOrigin.v[1] + linkTo->originOffset.v[1];
            LODWORD(v14) = COERCE_UNSIGNED_INT(outOrigin.v[2] + linkTo->originOffset.v[2]) ^ _xmm;
            outPos->v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(outOrigin.v[0] + linkTo->originOffset.v[0]) ^ _xmm) + out.v[0];
            outPos->v[1] = COERCE_FLOAT(LODWORD(v13) ^ _xmm) + out.v[1];
            outPos->v[2] = v14 + out.v[2];
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
        }
      }
    }
  }
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
  __int64 v8; 
  MapEnts *mapEnts; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  ClientTriggerBlendNode *blendNodes; 
  float v16; 
  float v17; 
  float v18; 
  double v19; 
  __int64 v20; 
  __int64 v22; 
  int v23; 
  vec3_t outPos; 

  v8 = blendTrigger;
  if ( blendTrigger >= 0x4000 )
  {
    v23 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", blendTrigger, v23) )
      __debugbreak();
  }
  mapEnts = cm.mapEnts;
  v11 = viewPos->v[0];
  v12 = viewPos->v[1];
  v13 = viewPos->v[2];
  outPos.v[0] = viewPos->v[0];
  outPos.v[1] = v12;
  outPos.v[2] = v13;
  if ( cm.mapEnts && (unsigned int)v8 < cm.mapEnts->clientTrigger.trigger.count )
  {
    CG_TriggerCalcMovingPlatformPosFromAnchor(localClientNum, cm.mapEnts->clientTrigger.linkTo[v8], viewPos, &outPos);
    mapEnts = cm.mapEnts;
    v13 = outPos.v[2];
    v12 = outPos.v[1];
    v11 = outPos.v[0];
  }
  v14 = mapEnts->clientTrigger.blendLookup[v8];
  if ( (unsigned int)v14 >= mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )
  {
    LODWORD(v22) = mapEnts->clientTriggerBlend.numClientTriggerBlendNodes;
    LODWORD(v20) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )", "blendIndex doesn't index cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  *trigA = mapEnts->clientTriggerBlend.blendNodes[v14].triggerA;
  *trigB = cm.mapEnts->clientTriggerBlend.blendNodes[v14].triggerB;
  blendNodes = cm.mapEnts->clientTriggerBlend.blendNodes;
  v16 = blendNodes[v14].pointB.v[0] - blendNodes[v14].pointA.v[0];
  v17 = blendNodes[v14].pointB.v[1] - blendNodes[v14].pointA.v[1];
  v18 = blendNodes[v14].pointB.v[2] - blendNodes[v14].pointA.v[2];
  v19 = I_fclamp((float)((float)((float)((float)(v12 - blendNodes[v14].pointA.v[1]) * v17) + (float)((float)(v11 - blendNodes[v14].pointA.v[0]) * v16)) + (float)((float)(v13 - blendNodes[v14].pointA.v[2]) * v18)) / (float)((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)), 0.0, 1.0);
  *lerpAmount = *(float *)&v19;
  if ( *trigA >= 0x4000 )
  {
    LODWORD(v22) = 0x4000;
    LODWORD(v20) = *trigA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( *trigA ) < (unsigned)( (16*1024) )", "*trigA doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  if ( *trigA >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v22) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(v20) = *trigA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( *trigA ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "*trigA doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  if ( *trigB >= 0x4000 )
  {
    LODWORD(v22) = 0x4000;
    LODWORD(v20) = *trigB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 781, ASSERT_TYPE_ASSERT, "(unsigned)( *trigB ) < (unsigned)( (16*1024) )", "*trigB doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  if ( *trigB >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v22) = cm.mapEnts->clientTrigger.trigger.count;
    LODWORD(v20) = *trigB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( *trigB ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "*trigB doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
}

/*
==============
CG_TriggerTransformPointOnMovingPlatform
==============
*/
void CG_TriggerTransformPointOnMovingPlatform(const LocalClientNum_t localClientNum, const unsigned int triggerIndex, const vec3_t *origin, vec3_t *outOffset, tmat33_t<vec3_t> *outAxis)
{
  __int64 v7; 
  ClientEntityLinkToDef *v9; 
  unsigned int anchorIndex; 
  unsigned int AnchorEntNum; 
  unsigned int v12; 
  centity_t *Entity; 
  const vec3_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  __int64 v20; 
  int v21; 
  int v22; 
  vec3_t outOrigin; 
  __int64 v24; 
  vec3_t vOrigin; 
  vec3_t out; 
  vec4_t quat; 

  v24 = -2i64;
  v7 = triggerIndex;
  if ( triggerIndex >= 0x4000 )
  {
    v21 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", triggerIndex, v21) )
      __debugbreak();
  }
  outOffset->v[0] = origin->v[0];
  outOffset->v[1] = origin->v[1];
  outOffset->v[2] = origin->v[2];
  if ( outAxis )
    AxisClear(outAxis);
  if ( cm.mapEnts )
  {
    if ( (unsigned int)v7 < cm.mapEnts->clientTrigger.trigger.count )
    {
      v9 = cm.mapEnts->clientTrigger.linkTo[v7];
      if ( v9 )
      {
        if ( cm.mapEnts->clientEntAnchors )
        {
          if ( v9->anchorIndex >= CM_ClientAnchorCount() )
          {
            LODWORD(v20) = CM_ClientAnchorCount();
            LODWORD(v18) = v9->anchorIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 494, ASSERT_TYPE_ASSERT, "(unsigned)( linkTo->anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "linkTo->anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v18, v20) )
              __debugbreak();
          }
          anchorIndex = v9->anchorIndex;
          if ( anchorIndex < CM_ClientAnchorCount() )
          {
            AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
            v12 = AnchorEntNum;
            if ( AnchorEntNum > 0x7FF )
            {
              v22 = 2047;
              LODWORD(v18) = AnchorEntNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 502, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 )-1 )", "entIndex not in [0, MAX_GENTITIES-1]\n\t%i not in [%i, %i]", v18, 0i64, v22) )
                __debugbreak();
            }
            if ( v12 <= 0x7FE )
            {
              Entity = CG_GetEntity(localClientNum, v12);
              v14 = (const vec3_t *)Entity;
              if ( Entity )
              {
                if ( (Entity->flags & 1) != 0 )
                {
                  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
                  v15 = outOrigin.v[0] + v9->originOffset.v[0];
                  v16 = outOrigin.v[1] + v9->originOffset.v[1];
                  v17 = outOrigin.v[2] + v9->originOffset.v[2];
                  vOrigin.v[0] = outOrigin.v[0] - v15;
                  vOrigin.v[1] = outOrigin.v[1] - v16;
                  vOrigin.v[2] = outOrigin.v[2] - v17;
                  AnglesToQuat(v14 + 6, &quat);
                  if ( outAxis )
                    AnglesToAxis(v14 + 6, outAxis);
                  VectorRotateQuatAroundPoint(origin, &quat, &vOrigin, &out);
                  outOffset->v[0] = v15 + out.v[0];
                  outOffset->v[1] = v16 + out.v[1];
                  outOffset->v[2] = v17 + out.v[2];
                  memset(&outOrigin, 0, sizeof(outOrigin));
                }
              }
            }
          }
        }
      }
    }
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
  void *v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  float v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  cg_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  int v17; 
  MapEnts *mapEnts; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  MapEnts *v22; 
  unsigned __int16 v23; 
  MapEnts *v24; 
  float *priority; 
  float v26; 
  unsigned int v27; 
  unsigned int v28; 
  const dvar_t *v29; 
  const vec4_t *v30; 
  ClientTriggerModel *models; 
  ClientTriggerHull *hulls; 
  float *v; 
  vec3_t *origins; 
  float *v35; 
  bool v36; 
  __int64 v37; 
  vec3_t *viewPos; 
  __int64 v39; 
  char v40[4464]; 

  v2 = alloca(v1);
  v3 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v3 + 4448) = (unsigned __int64)&v37 ^ _security_cookie;
  v4 = cg_t::ms_allocatedCount;
  v5 = 0x4000;
  v6 = FLOAT_N1_0;
  v7 = localClientNum;
  v8 = 0x4000;
  *(_DWORD *)v3 = 0x4000;
  v9 = 0x4000;
  *(_DWORD *)(v3 + 12) = 0x4000;
  v10 = 0x4000;
  *(_DWORD *)(v3 + 16) = 0x4000;
  v11 = 0x4000;
  *(_DWORD *)(v3 + 8) = 0x4000;
  if ( localClientNum >= v4 )
  {
    LODWORD(v39) = v4;
    LODWORD(viewPos) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", viewPos, v39) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v7] )
  {
    LODWORD(v39) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v39) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v39) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v39) )
      __debugbreak();
  }
  v12 = cg_t::ms_cgArray[v7];
  if ( !v12->renderingThirdPerson || v12->playerTeleported )
  {
    v13 = v12->refdef.viewOffset.v[0];
    *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = v13;
    v14 = v12->refdef.viewOffset.v[1];
    *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = v14;
    v15 = v12->refdef.viewOffset.v[2];
  }
  else
  {
    v13 = v12->lastFrameViewPos.v[0];
    *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = v13;
    v14 = v12->lastFrameViewPos.v[1];
    *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) = v14;
    v15 = v12->lastFrameViewPos.v[2];
  }
  *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v13;
  v16 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000;
  *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v15;
  if ( v16 == 2139095040 )
    return;
  *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v14;
  if ( (*(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000) == 2139095040 )
    return;
  *(float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v15;
  if ( (*(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 4) & 0x7F800000) == 2139095040 )
    return;
  v17 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  mapEnts = cm.mapEnts;
  *(double *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = *(double *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = v17;
  *(const float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x64) = FLOAT_1_0;
  *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = 0i64;
  *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148) = 0;
  *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = 0i64;
  *(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(v3 + 128), mapEnts->clientTrigger.spatialTree, (const Bounds *)(v3 + 80));
  if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v3 + 128)) )
    goto LABEL_96;
  do
  {
    if ( !*(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v19 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) + 20i64);
    v20 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148);
    if ( v20 == v19 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) >= **(unsigned __int8 **)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v21 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x158) + 4i64 * *(unsigned int *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) + 4);
    }
    else
    {
      if ( v20 >= v19 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v20 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x148);
      }
      v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) + 8i64) + 4i64 * v20);
    }
    v22 = cm.mapEnts;
    if ( v21 >= cm.mapEnts->clientTrigger.trigger.count )
    {
      LODWORD(v39) = cm.mapEnts->clientTrigger.trigger.count;
      LODWORD(viewPos) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 839, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", viewPos, v39) )
        __debugbreak();
      v22 = cm.mapEnts;
    }
    v23 = v22->clientTrigger.triggerType[v21];
    if ( v21 >= 0x4000 )
    {
      LODWORD(v39) = 0x4000;
      LODWORD(viewPos) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", viewPos, v39) )
        __debugbreak();
      v22 = cm.mapEnts;
    }
    *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    *(double *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = *(double *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    if ( v22 && v21 < v22->clientTrigger.trigger.count )
      CG_TriggerCalcMovingPlatformPosFromAnchor((LocalClientNum_t)v7, v22->clientTrigger.linkTo[v21], (const vec3_t *)(v3 + 24), (vec3_t *)(v3 + 64));
    if ( CG_TestTriggerTouch_Point(v21, (const vec3_t *)(v3 + 64)) )
    {
      if ( (v23 & 1) != 0 && v21 < v5 )
        v5 = v21;
      if ( (v23 & 2) == 0 || g_audioTriggerDisabled[v21] )
        goto LABEL_57;
      v24 = cm.mapEnts;
      priority = cm.mapEnts->clientTrigger.priority;
      v26 = priority[v21];
      if ( v26 <= v6 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - v6) & _xmm) < 0.001 )
        {
          if ( v8 == 0x4000 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger.cpp", 872, ASSERT_TYPE_ASSERT, "(audioTrigger != (16*1024))", (const char *)&queryFormat, "audioTrigger != MAX_CLIENT_TRIGGERS") )
              __debugbreak();
            v24 = cm.mapEnts;
          }
          models = v24->clientTrigger.trigger.models;
          hulls = v24->clientTrigger.trigger.hulls;
          v = hulls[models[v21].firstHull].triggerSpaceBounds.midPoint.v;
          origins = v24->clientTrigger.origins;
          v35 = hulls[models[v8].firstHull].triggerSpaceBounds.midPoint.v;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v8].v[0] + *v35) - (float)(origins[v21].v[0] + *v)) & _xmm) <= (float)(v35[3] - v[3]) )
          {
            v9 = *(_DWORD *)v3;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v8].v[1] + v35[1]) - (float)(origins[v21].v[1] + v[1])) & _xmm) <= (float)(v35[4] - v[4]) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v8].v[2] + v35[2]) - (float)(origins[v21].v[2] + v[2])) & _xmm) <= (float)(v35[5] - v[5]) )
              v8 = v21;
            goto LABEL_57;
          }
        }
      }
      else
      {
        v6 = priority[v21];
        v8 = v21;
      }
      v9 = *(_DWORD *)v3;
LABEL_57:
      if ( (v23 & 8) != 0 )
      {
        if ( !g_audioTriggerDisabled[v21] )
          v9 = v21;
        *(_DWORD *)v3 = v9;
      }
      v27 = v21;
      v28 = v21;
      if ( (v23 & 0x2000) == 0 )
        v27 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
      *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v27;
      if ( (v23 & 4) == 0 )
        v28 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
      *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v28;
      if ( (v23 & 0x40) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v21;
        *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v27;
        *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v28;
      }
    }
    v29 = DVARBOOL_cg_trigger_draw;
    if ( !DVARBOOL_cg_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_trigger_draw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      if ( (v23 & 1) != 0 )
      {
        v30 = &colorBlue;
      }
      else if ( (v23 & 2) == 0 || g_audioTriggerDisabled[v21] )
      {
        if ( (v23 & 4) != 0 )
        {
          v30 = &colorLtBlue;
        }
        else if ( (v23 & 8) == 0 || g_audioTriggerDisabled[v21] )
        {
          if ( (v23 & 0x2000) == 0 )
            goto LABEL_94;
          v30 = &colorYellow;
        }
        else
        {
          v30 = &colorLtGreen;
        }
      }
      else
      {
        v30 = &colorGreen;
      }
      CG_TriggerDraw((LocalClientNum_t)v7, v21, v30, 1);
    }
LABEL_94:
    v36 = SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v3 + 128));
    v9 = *(_DWORD *)v3;
  }
  while ( v36 );
  v11 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v10 = *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
LABEL_96:
  CG_TriggerUpdateVision((LocalClientNum_t)v7, *(_DWORD *)(((unsigned __int64)v40 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), v5, (const vec3_t *)(v3 + 24));
  CG_TriggerUpdateAudio((LocalClientNum_t)v7, v9, v8, v10, v11, (const vec3_t *)(v3 + 24));
}

