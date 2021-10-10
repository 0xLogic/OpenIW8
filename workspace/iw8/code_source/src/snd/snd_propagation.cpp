/*
==============
SND_DoorPropagationWorker
==============
*/

void __fastcall SND_DoorPropagationWorker(const void *const cmdInfo)
{
  ?SND_DoorPropagationWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_UpdatePropagation
==============
*/

void __fastcall SND_UpdatePropagation(const SndPropagationWorkerCmd *const cmd)
{
  ?SND_UpdatePropagation@@YAXQEBUSndPropagationWorkerCmd@@@Z(cmd);
}

/*
==============
SND_RecalcPropagation
==============
*/

void SND_RecalcPropagation(void)
{
  ?SND_RecalcPropagation@@YAXXZ();
}

/*
==============
SND_UpdateDoorPropagation
==============
*/

void __fastcall SND_UpdateDoorPropagation(const SndDoorPropagationWorkerCmd *const cmd)
{
  ?SND_UpdateDoorPropagation@@YAXQEBUSndDoorPropagationWorkerCmd@@@Z(cmd);
}

/*
==============
SND_PropagationInit
==============
*/

void SND_PropagationInit(void)
{
  ?SND_PropagationInit@@YAXXZ();
}

/*
==============
SND_PropagationWorker
==============
*/

void __fastcall SND_PropagationWorker(const void *const cmdInfo)
{
  ?SND_PropagationWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_DrawPropagationDebug
==============
*/

void __fastcall SND_DrawPropagationDebug(LocalClientNum_t localClientNum)
{
  ?SND_DrawPropagationDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DebugPrintPath
==============
*/
void DebugPrintPath(const SndPropagationPathWorkspace *workSpace, const __int16 pathEnd, const __int16 listener)
{
  __int16 v3; 
  __int16 i; 
  float v7; 
  float v8; 
  const char *v9; 
  const vec4_t *v10; 
  __int64 v11; 
  __int64 v12; 
  const vec4_t *v13; 
  vec3_t outCenter; 

  v3 = -1;
  for ( i = pathEnd; i != -1; i = workSpace->cameFrom[i] )
  {
    v7 = fsqrt(COERCE_FLOAT(COERCE_UNSIGNED_INT64(SND_DistSqToNearestListener(&cm.mapEnts->audioPropNodes[i].position))));
    if ( v7 >= 10.0 )
      v8 = v7 * 0.0017500001;
    else
      v8 = FLOAT_0_050000001;
    v9 = j_va("%d", (unsigned int)i);
    v10 = &colorMagenta;
    if ( listener != i )
      v10 = &colorGreen;
    CL_AddDebugStarWithText(&cm.mapEnts->audioPropNodes[i].position, v10, &colorWhite, v9, v8, 0, 1, 0);
    if ( v3 > -1 )
    {
      v11 = workSpace->cameFromPortal[v3];
      v12 = v3;
      if ( (_DWORD)v11 == -1 )
      {
        v13 = &colorWhite;
      }
      else
      {
        CG_GetTriggerCenter(LOCAL_CLIENT_0, v11, &outCenter);
        if ( g_audioTriggerDisabled[v11] )
        {
          CL_AddDebugStar(&outCenter, &colorRed, 0, 1, 0);
          v13 = &colorLtRed;
        }
        else
        {
          CL_AddDebugStar(&outCenter, &colorYellow, 0, 1, 0);
          v13 = &colorLtCyan;
        }
      }
      CL_AddDebugLine(&cm.mapEnts->audioPropNodes[v12].position, &cm.mapEnts->audioPropNodes[i].position, v13, 0, 1, 0);
    }
    v3 = i;
  }
}

/*
==============
SND_DoorPropagationWorker
==============
*/
void SND_DoorPropagationWorker(const void *const cmdInfo)
{
  if ( SND_Active() )
    SND_UpdateDoorPropagation((const SndDoorPropagationWorkerCmd *const)cmdInfo);
}

/*
==============
SND_DrawPropagationDebug
==============
*/
void SND_DrawPropagationDebug(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int64 v3; 
  bool v4; 
  ScreenPlacement *v5; 
  float v6; 
  float v7; 
  __int16 NodeForPosition; 
  GfxFont *smallDevFont; 
  const char *s; 
  const dvar_t *v11; 
  MapEnts *mapEnts; 
  __int64 v13; 
  AudioPropagationNode *audioPropNodes; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  AudioPropagationNode *v18; 
  unsigned __int16 numEdges; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  AudioPropagationNode *v28; 
  const dvar_t *v29; 
  const vec4_t *v30; 
  __int64 v31; 
  vec3_t *origins; 
  unsigned __int16 v33; 
  float v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  ClientTriggerModel *models; 
  unsigned __int16 hullCount; 
  vec4_t v40; 
  __int64 v41; 
  __int64 v42; 
  ClientTriggerHull *hulls; 
  const dvar_t *v44; 
  __int64 p_halfSize; 
  int v46; 
  int i; 
  signed int firstHull; 
  vec3_t outOrigin; 
  vec3_t mins; 
  vec3_t origin; 
  vec4_t v53; 
  vec3_t outCenter; 
  tmat33_t<vec3_t> axis; 
  __int128 v56; 
  __int128 v57; 

  v3 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 775, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v5 = &scrPlaceViewDisplay[v3];
      goto LABEL_11;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v4 )
      __debugbreak();
  }
  v5 = &scrPlaceFull;
LABEL_11:
  v6 = (float)((float)(v5->virtualViewableMax.v[0] - v5->virtualViewableMin.v[0]) * 0.5) + v5->virtualViewableMin.v[0];
  v7 = v5->virtualViewableMin.v[1];
  SND_GetListenerOrigin((const LocalClientNum_t)v3, &outOrigin);
  NodeForPosition = SND_PropagationFindNodeForPosition(&outOrigin);
  smallDevFont = cls.smallDevFont;
  s = j_va("Current listener node: %d", (unsigned int)NodeForPosition);
  CG_DrawDevString(v5, v6, v7, 0.55000001, 0.55000001, s, &colorGreen, 5, smallDevFont);
  v11 = DCONST_DVARINT_snd_debugPropagation;
  if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer > 1 )
  {
    mapEnts = cm.mapEnts;
    v13 = 0i64;
    v46 = 0;
    if ( cm.mapEnts->numAudioPropNodes )
    {
      v57 = v1;
      v56 = v2;
      do
      {
        audioPropNodes = mapEnts->audioPropNodes;
        v15 = outOrigin.v[1] - audioPropNodes[v13].position.v[1];
        v16 = outOrigin.v[2] - audioPropNodes[v13].position.v[2];
        v17 = DCONST_DVARFLT_snd_debugPropagationCullDist;
        v18 = &audioPropNodes[v13];
        numEdges = v18->numEdges;
        v20 = (__int64)&mapEnts->audioPropEdges[v18->edgeStartIndex];
        v21 = fsqrt((float)((float)(v15 * v15) + (float)((float)(outOrigin.v[0] - v18->position.v[0]) * (float)(outOrigin.v[0] - v18->position.v[0]))) + (float)(v16 * v16));
        if ( !DCONST_DVARFLT_snd_debugPropagationCullDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCullDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v21 < v17->current.value )
        {
          v22 = fsqrt((float)((float)((float)(v18->position.v[1] - outOrigin.v[1]) * (float)(v18->position.v[1] - outOrigin.v[1])) + (float)((float)(v18->position.v[0] - outOrigin.v[0]) * (float)(v18->position.v[0] - outOrigin.v[0]))) + (float)((float)(v18->position.v[2] - outOrigin.v[2]) * (float)(v18->position.v[2] - outOrigin.v[2])));
          v23 = v22 >= 10.0 ? v22 * 0.0017500001 : FLOAT_0_050000001;
          v24 = j_va("%d", (unsigned int)v13);
          CL_AddDebugStarWithText(&v18->position, &colorGreen, &colorWhite, v24, v23, 0, 1, 0);
          v25 = 0i64;
          v26 = numEdges;
          if ( numEdges )
          {
            do
            {
              v27 = *(__int16 *)(v20 + 4 * v25 + 2);
              v28 = &cm.mapEnts->audioPropNodes[*(__int16 *)(v20 + 4 * v25)];
              if ( (_DWORD)v27 == -1 || g_audioTriggerDisabled[v27] )
              {
                v29 = DCONST_DVARBOOL_snd_debugPropagationCull;
                if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v29);
                v30 = &colorWhite;
              }
              else
              {
                v29 = DCONST_DVARBOOL_snd_debugPropagationCull;
                if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v29);
                v30 = &colorLtCyan;
              }
              CL_AddDebugLine(&v18->position, &v28->position, v30, v29->current.color[0], 1, 0);
              ++v25;
            }
            while ( v25 < v26 );
            LODWORD(v13) = v46;
          }
        }
        mapEnts = cm.mapEnts;
        v13 = (unsigned int)(v13 + 1);
        v46 = v13;
      }
      while ( (unsigned int)v13 < cm.mapEnts->numAudioPropNodes );
      LODWORD(v3) = localClientNum;
    }
    v31 = 0i64;
    for ( i = 0; (unsigned int)v31 < mapEnts->clientTrigger.trigger.count; i = v31 )
    {
      origins = mapEnts->clientTrigger.origins;
      v33 = mapEnts->clientTrigger.triggerType[v31];
      if ( (v33 & 0x180) != 0 )
      {
        v34 = outOrigin.v[1] - origins[v31].v[1];
        v35 = outOrigin.v[2] - origins[v31].v[2];
        v36 = DCONST_DVARFLT_snd_debugPropagationCullDist;
        v37 = fsqrt((float)((float)(v34 * v34) + (float)((float)(outOrigin.v[0] - origins[v31].v[0]) * (float)(outOrigin.v[0] - origins[v31].v[0]))) + (float)(v35 * v35));
        if ( !DCONST_DVARFLT_snd_debugPropagationCullDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCullDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        if ( v37 < v36->current.value )
        {
          models = cm.mapEnts->clientTrigger.trigger.models;
          hullCount = models[v31].hullCount;
          firstHull = models[v31].firstHull;
          if ( (v33 & 0x100) != 0 )
          {
            v40 = colorRedHeat;
          }
          else if ( g_audioTriggerDisabled[v31] )
          {
            v40 = colorPurple;
          }
          else
          {
            v40 = colorLtCyan;
          }
          v53 = v40;
          CG_GetTriggerCenter((LocalClientNum_t)v3, v31, &outCenter);
          v41 = hullCount;
          if ( hullCount )
          {
            v42 = firstHull;
            do
            {
              hulls = cm.mapEnts->clientTrigger.trigger.hulls;
              origin.v[0] = origins[v31].v[0] + hulls[v42].triggerSpaceBounds.midPoint.v[0];
              origin.v[1] = hulls[v42].triggerSpaceBounds.midPoint.v[1] + origins[v31].v[1];
              origin.v[2] = hulls[v42].triggerSpaceBounds.midPoint.v[2] + origins[v31].v[2];
              AxisClear(&axis);
              v44 = DCONST_DVARBOOL_snd_debugPropagationCull;
              p_halfSize = (__int64)&hulls[v42].triggerSpaceBounds.halfSize;
              LODWORD(mins.v[0]) = *(_DWORD *)p_halfSize ^ _xmm;
              LODWORD(mins.v[1]) = *(_DWORD *)(p_halfSize + 4) ^ _xmm;
              LODWORD(mins.v[2]) = *(_DWORD *)(p_halfSize + 8) ^ _xmm;
              if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v44);
              CL_AddDebugBox(&axis, &origin, &mins, (const vec3_t *)p_halfSize, &v53, v44->current.color[0], 1, 0);
              ++v42;
              --v41;
            }
            while ( v41 );
            LODWORD(v31) = i;
          }
          CL_AddDebugStar(&outCenter, &v53, 0, 1, 0);
        }
        mapEnts = cm.mapEnts;
      }
      LODWORD(v3) = localClientNum;
      v31 = (unsigned int)(v31 + 1);
    }
  }
}

/*
==============
SND_PropagationFindEdges
==============
*/
void SND_PropagationFindEdges(Physics_WorldId worldId, unsigned int startNodeIndex, AudioPropagationEdge *edgeArray, AudioPropagationNode *audioPropNodes, const unsigned int numAudioPropNodes)
{
  signed __int64 v5; 
  void *v6; 
  unsigned int v7; 
  Physics_WorldId v8; 
  scr_string_t String; 
  scr_string_t v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int *v16; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  AudioPropagationNode *v18; 
  AudioPropagationNode *v19; 
  __int64 v20; 
  int v21; 
  AudioPropagationNode *v22; 
  float v23; 
  float v24; 
  int numEdges; 
  __int64 v26; 
  AudioPropagationEdge *v27; 
  int v28; 
  __int64 v29; 
  AudioPropagationEdge *v30; 
  hkMemoryAllocator *v31; 
  hkMemoryAllocator *v32; 
  __int64 parent; 
  __int64 siblings; 
  int inoutNumIgnoreEntities; 
  Physics_WorldId worldIda; 
  AudioPropagationNode *v38; 
  AudioPropagationEdge *v39; 
  HavokPhysics_CollisionQueryResult *v40; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v42; 
  __int64 v43; 
  vec3_t outIntersectPos; 
  int inoutIgnoreEntities[2048]; 

  v6 = alloca(v5);
  v43 = -2i64;
  v38 = audioPropNodes;
  v39 = edgeArray;
  v7 = startNodeIndex;
  v8 = worldId;
  worldIda = worldId;
  memset_0(inoutIgnoreEntities, 0, sizeof(inoutIgnoreEntities));
  inoutNumIgnoreEntities = 1;
  SND_PropagationIgnoreDynamicDoors(inoutIgnoreEntities, &inoutNumIgnoreEntities);
  String = SL_FindString("bake_shadow_brush");
  v10 = SL_FindString("bake_shadow_single_brush");
  v11 = 0;
  v12 = inoutNumIgnoreEntities;
  if ( level.num_entities > 0 )
  {
    v13 = 0i64;
    v14 = 0i64;
    do
    {
      if ( v11 >= 0x800 )
      {
        LODWORD(siblings) = 2048;
        LODWORD(parent) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", parent, siblings) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v14].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v13] )
      {
        if ( v11 >= 0x800 )
        {
          LODWORD(siblings) = 2048;
          LODWORD(parent) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", parent, siblings) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( String && g_entities[v14].targetname == String || v10 && g_entities[v14].targetname == v10 )
          inoutIgnoreEntities[v12++] = v11;
      }
      ++v11;
      ++v13;
      ++v14;
    }
    while ( (int)v11 < level.num_entities );
    v7 = startNodeIndex;
    v8 = worldIda;
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v42, v12, 0);
  v15 = 0;
  if ( v12 > 0 )
  {
    v16 = inoutIgnoreEntities;
    do
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v42, v15++, *v16++, 1, 1, 0, 1, 1);
    while ( v15 < v12 );
  }
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 2097153;
  extendedData.ignoreBodies = &v42;
  AnyResult = PhysicsQuery_GetAnyResult(v8);
  v40 = AnyResult;
  if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 242, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v18 = v38;
  v19 = &v38[v7];
  v20 = 0i64;
  if ( numAudioPropNodes )
  {
    v21 = 0;
    do
    {
      if ( (_DWORD)v20 != v7 )
      {
        v22 = &v18[v20];
        v23 = v22->position.v[1] - v19->position.v[1];
        v24 = v22->position.v[2] - v19->position.v[2];
        if ( (float)((float)((float)(v23 * v23) + (float)((float)(v22->position.v[0] - v19->position.v[0]) * (float)(v22->position.v[0] - v19->position.v[0]))) + (float)(v24 * v24)) <= 4000000.0 )
        {
          HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
          Physics_Raycast(worldIda, &v19->position, &v22->position, &extendedData, AnyResult);
          if ( !HavokPhysics_CollisionQueryResult::HasHit(AnyResult) && !CG_DoesLineSegmentIntersectTrigger(LOCAL_CLIENT_0, CLIENT_TRIGGER_AUDIO_PROP_OCCLUDER, &v19->position, &v22->position, (unsigned int *)&inoutNumIgnoreEntities, &outIntersectPos) )
          {
            numEdges = v19->numEdges;
            v19->numEdges = numEdges + 1;
            v26 = (int)(numEdges + numAudioPropNodes * startNodeIndex);
            if ( ((unsigned int)v20 > 0x7FFFFFFF || (unsigned int)(v20 + 0x8000) > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v20, "unsigned", (unsigned int)v20) )
              __debugbreak();
            v27 = v39;
            v39[v26].neighbor = v20;
            v27[v26].portalIndex = -1;
            if ( CG_DoesLineSegmentIntersectTrigger(LOCAL_CLIENT_0, CLIENT_TRIGGER_AUDIO_PROP_PORTAL, &v19->position, &v22->position, (unsigned int *)&inoutNumIgnoreEntities, &outIntersectPos) )
              v27[v26].portalIndex = truncate_cast<short,unsigned int>(inoutNumIgnoreEntities);
            v28 = v22->numEdges;
            v22->numEdges = v28 + 1;
            v29 = v21 + v28;
            v7 = startNodeIndex;
            if ( (startNodeIndex > 0x7FFFFFFF || startNodeIndex + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)startNodeIndex, "unsigned", startNodeIndex) )
              __debugbreak();
            v30 = v39;
            v39[v29].neighbor = startNodeIndex;
            v30[v29].portalIndex = v30[v26].portalIndex;
            AnyResult = v40;
            v18 = v38;
            goto LABEL_51;
          }
          v18 = v38;
        }
        v7 = startNodeIndex;
      }
LABEL_51:
      v20 = (unsigned int)(v20 + 1);
      v21 += numAudioPropNodes;
    }
    while ( (unsigned int)v20 < numAudioPropNodes );
  }
  v31 = hkMemHeapAllocator();
  v42.m_ignoreBodies.m_size = 0;
  if ( v42.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v31, v42.m_ignoreBodies.m_data, 4, v42.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v42.m_ignoreBodies.m_data = NULL;
  v42.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v32 = hkMemHeapAllocator();
  v42.m_ignoreEntities.m_size = 0;
  if ( v42.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v32, v42.m_ignoreEntities.m_data, 8, v42.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
SND_PropagationFindNodeForPosition
==============
*/
__int64 SND_PropagationFindNodeForPosition(const vec3_t *position)
{
  MapEnts *mapEnts; 
  unsigned __int16 v4; 
  __int16 v5; 
  unsigned int numAudioPropNodes; 
  unsigned __int16 v7; 
  float v8; 
  __int64 v9; 
  __int64 v10; 
  AudioPropagationNode *audioPropNodes; 
  float v12; 
  __int128 v13; 
  float v14; 

  mapEnts = cm.mapEnts;
  *(float *)&_XMM6 = FLOAT__Inf;
  v4 = -1;
  v5 = 0;
  while ( 1 )
  {
    numAudioPropNodes = mapEnts->numAudioPropNodes;
    v7 = v5;
    v8 = *(float *)&_XMM6;
    if ( numAudioPropNodes > 0x7FFFFFFF || numAudioPropNodes + 0x8000 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)numAudioPropNodes, "unsigned", numAudioPropNodes) )
        __debugbreak();
      mapEnts = cm.mapEnts;
    }
    if ( v5 >= (__int16)numAudioPropNodes )
      break;
    v9 = v5++;
    v10 = v9;
    audioPropNodes = mapEnts->audioPropNodes;
    v12 = audioPropNodes[v10].position.v[0] - position->v[0];
    v13 = LODWORD(audioPropNodes[v10].position.v[1]);
    *(float *)&v13 = audioPropNodes[v10].position.v[1] - position->v[1];
    v14 = audioPropNodes[v10].position.v[2] - position->v[2];
    *(float *)&v13 = (float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v12 * v12)) + (float)(v14 * v14);
    _XMM5 = v13;
    __asm { vminss  xmm6, xmm5, xmm6 }
    if ( v8 <= *(float *)&v13 )
      v7 = v4;
    v4 = v7;
  }
  return v4;
}

/*
==============
SND_PropagationFindPortalLocation
==============
*/
bool SND_PropagationFindPortalLocation(__int16 reverbTrigger, const __int16 listener, const vec3_t *listenerPos, __int16 emitter, vec3_t *outPortalLocation)
{
  vec3_t *v5; 
  const vec3_t *v6; 
  __int16 v7; 
  __int16 v10; 
  __int64 numAudioPropNodes; 
  float *fScore; 
  __int16 *cameFromPortal; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int numValues; 
  MapEnts *mapEnts; 
  __int16 v20; 
  unsigned __int16 v21; 
  __int64 v23; 
  bool v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  int v30; 
  AudioPropagationNode *audioPropNodes; 
  __int64 v32; 
  __int64 numEdges; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  unsigned int v38; 
  AudioPropagationNode *v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  MapEnts *v50; 
  float v51; 
  AudioPropagationNode *v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  const dvar_t *v57; 
  const dvar_t *v59; 
  __int64 v62; 
  SndPropagationPathWorkspace workSpace; 

  v5 = outPortalLocation;
  v6 = listenerPos;
  v7 = listener;
  memset_0(&workSpace.openSet, 0, 0x408ui64);
  v10 = -1;
  numAudioPropNodes = cm.mapEnts->numAudioPropNodes;
  if ( (_DWORD)numAudioPropNodes )
  {
    fScore = workSpace.fScore;
    cameFromPortal = workSpace.cameFromPortal;
    do
    {
      *(cameFromPortal - 4096) = -1;
      ++fScore;
      *cameFromPortal++ = -1;
      *(fScore - 4097) = INFINITY;
      *(fScore - 1) = INFINITY;
      --numAudioPropNodes;
    }
    while ( numAudioPropNodes );
  }
  workSpace.reverbTrigger = reverbTrigger;
  v14 = 0;
  v62 = emitter;
  workSpace.gScore[emitter] = 0.0;
  workSpace.fScore[emitter] = 1.0;
  v15 = 1 << (emitter & 0x1F);
  workSpace.openList[workSpace.openSet.numValues] = emitter;
  v16 = (__int64)emitter >> 5;
  v17 = workSpace.openSet.array[v16];
  if ( (v15 & v17) != 0 )
  {
    numValues = workSpace.openSet.numValues;
  }
  else
  {
    workSpace.openSet.array[v16] = v17 | v15;
    numValues = ++workSpace.openSet.numValues;
  }
  if ( numValues )
  {
    mapEnts = cm.mapEnts;
    while ( 1 )
    {
      v20 = -1;
      v21 = 0;
      *(float *)&_XMM1 = FLOAT__Inf;
      do
      {
        v23 = workSpace.openList[v21];
        _XMM0 = LODWORD(workSpace.fScore[v23]);
        v25 = *(float *)&_XMM1 <= *(float *)&_XMM0;
        __asm { vminss  xmm1, xmm0, xmm1 }
        if ( v25 )
          LOWORD(v23) = v20;
        ++v21;
        v20 = v23;
      }
      while ( v21 < numValues );
      if ( (_WORD)v23 == v7 )
        break;
      v26 = 0;
      while ( workSpace.openList[v26] != (_WORD)v23 )
      {
        if ( ++v26 >= numValues )
          goto LABEL_19;
      }
      workSpace.openList[v26] = workSpace.openList[numValues - 1];
      numValues = workSpace.openSet.numValues;
LABEL_19:
      v27 = 1 << (v23 & 0x1F);
      v28 = (__int64)(__int16)v23 >> 5;
      v29 = workSpace.openSet.array[v28];
      if ( (v27 & v29) != 0 )
      {
        workSpace.openSet.array[v28] = v29 & ~v27;
        numValues = --workSpace.openSet.numValues;
      }
      v30 = *(_DWORD *)&workSpace.openList[2 * v28 - 256];
      if ( (v27 & v30) == 0 )
      {
        *(_DWORD *)&workSpace.openList[2 * v28 - 256] = v30 | v27;
        ++workSpace.closedSet.numValues;
        numValues = workSpace.openSet.numValues;
      }
      audioPropNodes = mapEnts->audioPropNodes;
      v32 = 0i64;
      numEdges = audioPropNodes[v20].numEdges;
      v34 = (__int64)&mapEnts->audioPropEdges[audioPropNodes[v20].edgeStartIndex];
      if ( audioPropNodes[v20].numEdges )
      {
        do
        {
          v35 = *(__int16 *)(v34 + 4 * v32);
          v36 = 1 << (*(_WORD *)(v34 + 4 * v32) & 0x1F);
          v37 = v35 >> 5;
          if ( (v36 & *(_DWORD *)&workSpace.openList[2 * (v35 >> 5) - 256]) == 0 )
          {
            workSpace.openList[numValues] = *(_WORD *)(v34 + 4 * v32);
            v38 = workSpace.openSet.array[v37];
            if ( (v36 & v38) != 0 )
            {
              numValues = workSpace.openSet.numValues;
            }
            else
            {
              workSpace.openSet.array[v37] = v38 | v36;
              numValues = ++workSpace.openSet.numValues;
            }
            mapEnts = cm.mapEnts;
            v39 = cm.mapEnts->audioPropNodes;
            v40 = v39[v35].position.v[1];
            v41 = v40 - v39[v20].position.v[1];
            v42 = v39[v35].position.v[0];
            v43 = v42 - v39[v20].position.v[0];
            v44 = v39[v35].position.v[2];
            v45 = v44 - v39[v20].position.v[2];
            v46 = (float)((float)((float)(v41 * v41) + (float)(v43 * v43)) + (float)(v45 * v45)) + workSpace.gScore[v20];
            if ( v46 < workSpace.gScore[v35] )
            {
              workSpace.cameFromPortal[v35] = *(_WORD *)(v34 + 4 * v32 + 2);
              v47 = v39[v62].position.v[0] - v42;
              v48 = v39[v62].position.v[2];
              v49 = v39[v62].position.v[1] - v40;
              workSpace.cameFrom[v35] = v20;
              workSpace.fScore[v35] = (float)((float)((float)(v49 * v49) + (float)(v47 * v47)) + (float)((float)(v48 - v44) * (float)(v48 - v44))) + v46;
              workSpace.gScore[v35] = v46;
              numValues = workSpace.openSet.numValues;
            }
          }
          ++v32;
        }
        while ( v32 < numEdges );
        v14 = 0;
      }
      v7 = listener;
      v10 = -1;
      if ( !numValues )
      {
        v6 = listenerPos;
        v5 = outPortalLocation;
        goto LABEL_34;
      }
    }
    v59 = DCONST_DVARINT_snd_debugPropagation;
    if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    if ( v59->current.integer == 1 && Sys_IsMainThread() )
      DebugPrintPath(&workSpace, v20, v7);
    return SND_PropagationGetPortalLocation(&workSpace, v20, listenerPos, outPortalLocation);
  }
  else
  {
LABEL_34:
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_PropagationFindClosestPortal");
    v50 = cm.mapEnts;
    v51 = FLOAT_3_4028235e38;
    if ( cm.mapEnts->numAudioPropNodes )
    {
      do
      {
        if ( workSpace.cameFromPortal[v14] != -1 )
        {
          v52 = v50->audioPropNodes;
          v53 = v6->v[0] - v52[v14].position.v[0];
          v54 = v6->v[1] - v52[v14].position.v[1];
          v55 = v6->v[2] - v52[v14].position.v[2];
          v56 = (float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55);
          if ( v56 < v51 )
          {
            v51 = v56;
            if ( v14 > 0x7FFFFFFF || v14 + 0x8000 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v14, "unsigned", v14) )
                __debugbreak();
              v50 = cm.mapEnts;
            }
            v10 = v14;
          }
        }
        ++v14;
      }
      while ( v14 < v50->numAudioPropNodes );
      v7 = listener;
      v5 = outPortalLocation;
    }
    Sys_ProfEndNamedEvent();
    if ( v10 <= -1 )
    {
      return 0;
    }
    else
    {
      v57 = DCONST_DVARINT_snd_debugPropagation;
      if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v57);
      if ( v57->current.integer == 1 && Sys_IsMainThread() )
        DebugPrintPath(&workSpace, v10, v7);
      return SND_PropagationGetPortalLocation(&workSpace, v10, v6, v5);
    }
  }
}

/*
==============
SND_PropagationGetPortalLocation
==============
*/
char SND_PropagationGetPortalLocation(const SndPropagationPathWorkspace *workSpace, __int16 pathEnd, const vec3_t *listenerPos, vec3_t *outPortalLocation)
{
  __int64 v4; 
  __int16 v6; 
  char v8; 
  __int16 v10; 
  __int64 v11; 
  __int16 v12; 
  float v13; 
  float v14; 
  __int16 v15; 
  __int64 v16; 
  __int16 v17; 
  __int16 reverbTrigger; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  __int128 v43; 
  float v47; 
  vec3_t outCenter; 

  LOWORD(v4) = pathEnd;
  v6 = -1;
  v8 = 0;
  v10 = -1;
  v11 = pathEnd;
  if ( workSpace->cameFrom[pathEnd] == -1 )
    return 0;
  do
  {
    v12 = workSpace->cameFromPortal[v11];
    if ( v12 != -1 )
    {
      if ( g_audioTriggerDisabled[v12] )
        return 0;
      if ( v6 == -1 )
      {
        v6 = workSpace->cameFromPortal[v11];
        v10 = v4;
        v8 = 1;
      }
    }
    v4 = workSpace->cameFrom[v11];
    v11 = v4;
  }
  while ( workSpace->cameFrom[v4] != -1 );
  if ( !v8 || !CG_GetTriggerCenter(LOCAL_CLIENT_0, v6, outPortalLocation) )
    return 0;
  v13 = outPortalLocation->v[1] - listenerPos->v[1];
  v14 = outPortalLocation->v[2] - listenerPos->v[2];
  if ( (float)((float)((float)(v13 * v13) + (float)((float)(outPortalLocation->v[0] - listenerPos->v[0]) * (float)(outPortalLocation->v[0] - listenerPos->v[0]))) + (float)(v14 * v14)) >= 10000.0 )
    return 1;
  v15 = workSpace->cameFrom[v10];
  if ( v15 == -1 || (v16 = v15, v17 = workSpace->cameFrom[v15], v17 == -1) )
  {
LABEL_14:
    reverbTrigger = workSpace->reverbTrigger;
  }
  else
  {
    while ( 1 )
    {
      reverbTrigger = workSpace->cameFromPortal[v16];
      if ( reverbTrigger != -1 )
        break;
      v16 = v17;
      v17 = workSpace->cameFrom[v17];
      if ( v17 == -1 )
        goto LABEL_14;
    }
  }
  if ( !CG_GetTriggerCenter(LOCAL_CLIENT_0, reverbTrigger, &outCenter) )
    return 1;
  v19 = listenerPos->v[1];
  v20 = outCenter.v[1];
  v21 = listenerPos->v[0];
  v22 = listenerPos->v[2];
  v23 = outCenter.v[2];
  if ( (float)((float)((float)((float)(outCenter.v[1] - v19) * (float)(outCenter.v[1] - v19)) + (float)((float)(outCenter.v[0] - v21) * (float)(outCenter.v[0] - v21))) + (float)((float)(outCenter.v[2] - v22) * (float)(outCenter.v[2] - v22))) < 10000.0 )
  {
    outPortalLocation->v[0] = outCenter.v[0];
    outPortalLocation->v[1] = v20;
    outPortalLocation->v[2] = v23;
    return 1;
  }
  v24 = outPortalLocation->v[1];
  v25 = outPortalLocation->v[2];
  v26 = outCenter.v[0] - outPortalLocation->v[0];
  v28 = LODWORD(outCenter.v[1]);
  *(float *)&v28 = outCenter.v[1] - v24;
  v27 = v28;
  v29 = v25 - v22;
  v30 = v24 - v19;
  v32 = LODWORD(outPortalLocation->v[0]);
  *(float *)&v32 = outPortalLocation->v[0] - v21;
  v31 = v32;
  v33 = v27;
  *(float *)&v33 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(v26 * v26)) + (float)((float)(outCenter.v[2] - v25) * (float)(outCenter.v[2] - v25)));
  _XMM1 = v33;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  v37 = (float)(1.0 / *(float *)&_XMM0) * v26;
  v38 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v27;
  v39 = (float)(1.0 / *(float *)&_XMM0) * (float)(outCenter.v[2] - v25);
  v43 = v31;
  v40 = (float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)(v39 * v39);
  v41 = (float)((float)(*(float *)&v31 * v37) + (float)(v38 * v30)) + (float)(v39 * v29);
  LODWORD(v27) = fsqrt((float)((float)(v41 * v41) * 4.0) - (float)((float)((float)((float)((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(v30 * v30)) + (float)(v29 * v29)) - 10000.0) * v40) * 4.0));
  *(float *)&v43 = (float)((float)((float)(v41 * -2.0) - *(float *)&v27) * 0.5) * (float)(1.0 / v40);
  _XMM2 = v43;
  if ( (float)((float)((float)(*(float *)&v27 * 0.5) - v41) * (float)(1.0 / v40)) <= 0.0 && *(float *)&v43 <= 0.0 )
    return 0;
  __asm
  {
    vmaxss  xmm0, xmm2, xmm6
    vminss  xmm3, xmm0, [rsp+0E8h+var_C8]
  }
  v47 = (float)(*(float *)&_XMM3 * v38) + outPortalLocation->v[1];
  outPortalLocation->v[0] = (float)(*(float *)&_XMM3 * v37) + outPortalLocation->v[0];
  outPortalLocation->v[2] = (float)(*(float *)&_XMM3 * v39) + outPortalLocation->v[2];
  outPortalLocation->v[1] = v47;
  return 1;
}

/*
==============
SND_PropagationIgnoreDynamicDoors
==============
*/
void SND_PropagationIgnoreDynamicDoors(int *inoutIgnoreEntities, int *inoutNumIgnoreEntities)
{
  int *v2; 
  scr_string_t v4; 
  scr_string_t v5; 
  unsigned int v6; 
  scr_string_t v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  gentity_s *v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  gentity_s *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  scr_string_t v25; 
  scr_string_t String; 

  v2 = inoutIgnoreEntities;
  String = SL_FindString("dynamic_door");
  v4 = String;
  v5 = SL_FindString("lean_dynamic_door");
  v6 = 0;
  v7 = v5;
  v25 = v5;
  if ( level.num_entities > 0 )
  {
    v8 = 0i64;
    v9 = 0i64;
    v23 = v5;
    v22 = 0i64;
    v10 = v5;
    do
    {
      if ( v6 >= 0x800 )
      {
        LODWORD(v21) = 2048;
        LODWORD(v20) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v9) != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        if ( v6 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( (v11 = g_entities, v4) && *(scr_string_t *)((char *)&g_entities->targetname + v9) == v4 || v10 && *(scr_string_t *)((char *)&g_entities->targetname + v9) == v7 )
        {
          v2[(*inoutNumIgnoreEntities)++] = v6;
          v12 = *(scr_string_t *)((char *)&v11->target + v9);
          if ( v12 )
          {
            v13 = 0;
            v14 = 0i64;
            if ( level.num_entities <= 0 )
            {
LABEL_45:
              v2 = inoutIgnoreEntities;
            }
            else
            {
              v15 = 0i64;
              while ( 1 )
              {
                if ( v13 >= 0x800 )
                {
                  LODWORD(v21) = 2048;
                  LODWORD(v20) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                    __debugbreak();
                }
                if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                  __debugbreak();
                if ( g_entities[v15].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                  __debugbreak();
                if ( g_entityIsInUse[v14] )
                {
                  if ( v13 >= 0x800 )
                  {
                    LODWORD(v21) = 2048;
                    LODWORD(v20) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                      __debugbreak();
                  }
                  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                    __debugbreak();
                  v16 = &g_entities[v15];
                  if ( g_entities[v15].targetname == v12 )
                    break;
                }
                ++v13;
                ++v14;
                ++v15;
                if ( (int)v13 >= level.num_entities )
                {
                  v9 = v22;
                  v10 = v23;
                  goto LABEL_45;
                }
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              v17 = (__int64)((unsigned __int128)(((char *)v16 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
              v18 = (v17 >> 63) + v17;
              if ( (unsigned int)v18 >= 0x800 )
              {
                LODWORD(v21) = 2048;
                LODWORD(v20) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                  __debugbreak();
              }
              v2 = inoutIgnoreEntities;
              v10 = v23;
              v19 = (__int16)v18;
              v9 = v22;
              inoutIgnoreEntities[(*inoutNumIgnoreEntities)++] = v19;
            }
            v4 = String;
          }
          v7 = v25;
        }
      }
      v9 += 1456i64;
      ++v6;
      v22 = v9;
      ++v8;
    }
    while ( (int)v6 < level.num_entities );
  }
}

/*
==============
SND_PropagationInit
==============
*/
void SND_PropagationInit(void)
{
  ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v2; 
  unsigned int v3; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  XModel **models; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v14; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *mp_next; 
  unsigned int v16; 
  unsigned __int64 v17; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v20; 
  unsigned __int64 v21; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v22; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v23; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v24; 
  __int64 v25; 
  char *fmt; 
  __int64 v27; 
  unsigned int outTrigger; 
  vec3_t outOrigin; 
  unsigned __int64 v30; 
  _BYTE v31[12]; 
  _QWORD v32[3]; 
  char v33; 
  vec3_t angles; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 

  v32[0] = -2i64;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_PropagationInit");
  s_numscriptableDoors = 0;
  p_m_buckets = (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_portalToDoubleDoorMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_portalToDoubleDoorMap.m_freelist.m_head.mp_next = v2 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v2 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v2->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_portalToDoubleDoorMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_portalToDoubleDoorMap.m_currentNumItems );
  s_portalToDoubleDoorMap.m_currentNumItems = 0i64;
  s_nextDoorToUpdate = 0;
  if ( !CL_TransientsWorldMP_IsActive() )
  {
    v3 = 0;
    ScriptableCommon_AssertCountsInitialized();
    if ( g_scriptableWorldCounts.totalInstanceCount )
    {
      while ( 1 )
      {
        def = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v3)->def;
        if ( !def || (def->flags & 0x180000) == 0 )
          goto LABEL_53;
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v3);
        ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v3, &outOrigin);
        if ( def->numXModels )
        {
          if ( !*def->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 80, ASSERT_TYPE_ASSERT, "(def->models[0])", (const char *)&queryFormat, "def->models[0]") )
            __debugbreak();
          models = def->models;
          LODWORD(v7) = _mm_shuffle_ps(*(__m128 *)(*models)->bounds.midPoint.v, *(__m128 *)(*models)->bounds.midPoint.v, 170).m128_u32[0];
          *(_OWORD *)&v32[1] = *(_OWORD *)(*models)->bounds.midPoint.v;
          v8 = *((float *)&v32[1] + 1);
          v9 = *(float *)&v32[1];
        }
        else
        {
          v9 = outOrigin.v[0];
          v8 = outOrigin.v[1];
          v7 = outOrigin.v[2];
        }
        v10 = InstanceCommonContext->anglesInitial.v[1];
        angles.v[0] = 0.0;
        angles.v[1] = v10;
        angles.v[2] = 0.0;
        AnglesToAxis(&angles, &axis);
        point.v[0] = (float)((float)((float)(v8 * axis.m[1].v[0]) + (float)(v9 * axis.m[0].v[0])) + (float)(v7 * axis.m[2].v[0])) + outOrigin.v[0];
        point.v[1] = (float)((float)((float)(v8 * axis.m[1].v[1]) + (float)(v9 * axis.m[0].v[1])) + (float)(v7 * axis.m[2].v[1])) + outOrigin.v[1];
        point.v[2] = (float)((float)((float)(v8 * axis.m[1].v[2]) + (float)(v9 * axis.m[0].v[2])) + (float)(v7 * axis.m[2].v[2])) + outOrigin.v[2];
        if ( CG_FindAudioPropagationPortalAtPoint(LOCAL_CLIENT_0, &point, &outTrigger) )
          break;
LABEL_52:
        memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_53:
        ++v3;
        ScriptableCommon_AssertCountsInitialized();
        if ( v3 >= g_scriptableWorldCounts.totalInstanceCount )
          goto LABEL_82;
      }
      v11 = s_numscriptableDoors;
      if ( s_numscriptableDoors >= 0x100 )
      {
        Com_PrintError(9, "Exceeded MAX_DOOR_PROPAGATION_PORTALS (%d). Some door portals will not function!\n", 256i64);
        memset(&outOrigin, 0, sizeof(outOrigin));
        goto LABEL_82;
      }
      s_scriptableDoorData[s_numscriptableDoors].scriptableDoorIndex = v3;
      v12 = outTrigger;
      s_scriptableDoorData[v11].portalTrigger = outTrigger;
      s_numscriptableDoors = v11 + 1;
      if ( !s_portalToDoubleDoorMap.m_currentNumItems )
        goto LABEL_33;
      v13 = (unsigned int)v12 - 389 * ((unsigned __int64)(((v12 * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64) + ((unsigned __int64)((unsigned int)v12 - ((v12 * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64)) >> 1)) >> 8);
      if ( v13 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v14 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v13];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v14->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v14->m_listHead.m_sentinel.mp_next == v14 )
      {
LABEL_33:
        v30 = v3 | 0xFFFFFFFF00000000ui64;
        v16 = outTrigger;
        *(_DWORD *)v31 = outTrigger;
        *(_QWORD *)&v31[4] = v30;
        v17 = outTrigger % 0x185ui64;
        if ( v17 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v18 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v17];
        v19 = *v18;
        if ( *v18 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18 )
        {
LABEL_42:
          if ( !s_portalToDoubleDoorMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_portalToDoubleDoorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)s_portalToDoubleDoorMap.m_freelist.m_head.mp_next == &s_portalToDoubleDoorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x100ui64) )
            __debugbreak();
          v20 = s_portalToDoubleDoorMap.m_freelist.m_head.mp_next;
          s_portalToDoubleDoorMap.m_freelist.m_head.mp_next = s_portalToDoubleDoorMap.m_freelist.m_head.mp_next->mp_next;
          v20->mp_next = NULL;
          v20[1].mp_next = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)v31;
          LODWORD(v20[2].mp_next) = *(_DWORD *)&v31[8];
          v20->mp_next = *v18;
          *v18 = v20;
          ++s_portalToDoubleDoorMap.m_currentNumItems;
          v32[1] = v20;
          v33 = 1;
        }
        else
        {
          while ( 1 )
          {
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v19[1].mp_next) == v16 )
              break;
            v19 = v19->mp_next;
            if ( v19 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18 )
              goto LABEL_42;
          }
          v32[1] = 0i64;
          v33 = 0;
          LODWORD(fmt) = 256;
          Com_PrintError(9, "Failed to add propagation portal mapping for scriptable door %d. %lu of %d entries used.\n", v3, s_portalToDoubleDoorMap.m_currentNumItems, fmt);
        }
        goto LABEL_52;
      }
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == outTrigger )
          break;
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)mp_next->m_listHead.m_sentinel.mp_next;
        if ( mp_next == v14 )
          goto LABEL_33;
      }
      v21 = outTrigger % 0x185ui64;
      if ( v21 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v22 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v21];
      v23 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v22->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v22->m_listHead.m_sentinel.mp_next == v22 )
      {
LABEL_64:
        v23 = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v23[1].m_listHead.m_sentinel.mp_next) == outTrigger )
            break;
          v23 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v23->m_listHead.m_sentinel.mp_next;
          if ( v23 == v22 )
            goto LABEL_64;
        }
        if ( v23 )
        {
          v24 = v23;
LABEL_66:
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v25 = (__int64)&v24[2];
          if ( !v24 )
            v25 = 8i64;
          if ( *(_DWORD *)v25 != -1 )
          {
            LODWORD(v27) = outTrigger;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 126, ASSERT_TYPE_ASSERT, "(iter->second.secondDoor == -1)", "%s\n\tMore than two doors linked to propagation portal %d", "iter->second.secondDoor == -1", v27) )
              __debugbreak();
          }
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          *(_DWORD *)v25 = v3;
          goto LABEL_52;
        }
      }
      v24 = NULL;
      goto LABEL_66;
    }
  }
LABEL_82:
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_PropagationWorker
==============
*/
void SND_PropagationWorker(const void *const cmdInfo)
{
  int v2; 
  __int16 NodeForPosition; 
  int v4; 
  __int16 v5; 
  __int16 v6; 
  __int16 v7; 
  __int16 v8; 

  if ( SND_Active() )
  {
    v2 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop kd tree");
    NodeForPosition = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 3);
    g_snd.propagationKdTreeUsec = Sys_Microseconds() - v2;
    Sys_ProfEndNamedEvent();
    v4 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop path time");
    if ( NodeForPosition != -1 )
    {
      if ( *(_BYTE *)cmdInfo )
      {
        ++g_snd.propagationCount;
        v5 = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 1);
        if ( v5 != -1 )
        {
          v6 = truncate_cast<short,unsigned int>(*((_DWORD *)cmdInfo + 1));
          if ( SND_PropagationFindPortalLocation(v6, NodeForPosition, (const vec3_t *)cmdInfo + 3, v5, &g_snd.reverbPortalPropagationOutputA) )
            g_snd.reverbTriggerOutputNumberA = *((_DWORD *)cmdInfo + 1);
          else
            g_snd.reverbTriggerOutputNumberA = 1024;
        }
      }
      if ( *((_BYTE *)cmdInfo + 1) )
      {
        ++g_snd.propagationCount;
        v7 = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 2);
        if ( v7 != -1 )
        {
          v8 = truncate_cast<short,unsigned int>(*((_DWORD *)cmdInfo + 2));
          if ( SND_PropagationFindPortalLocation(v8, NodeForPosition, (const vec3_t *)cmdInfo + 3, v7, &g_snd.reverbPortalPropagationOutputB) )
            g_snd.reverbTriggerOutputNumberB = *((_DWORD *)cmdInfo + 2);
          else
            g_snd.reverbTriggerOutputNumberB = 1024;
        }
      }
    }
    g_snd.propagationPathUsec = Sys_Microseconds() - v4;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SND_RecalcPropagation
==============
*/
void SND_RecalcPropagation(void)
{
  AudioPropagationEdge *v0; 
  unsigned int numAudioPropNodes; 
  AudioPropagationNode *audioPropNodes; 
  unsigned int v3; 
  unsigned __int16 *p_numEdges; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int *p_edgeStartIndex; 
  unsigned int v8; 
  int v9; 

  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 362, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  v0 = edgeMem;
  if ( !edgeMem )
  {
    v0 = (AudioPropagationEdge *)SD_Alloc("sd_dev_propagation", 0x4000000u, (int)edgeMem + 16);
    edgeMem = v0;
  }
  cm.mapEnts->numAudioPropEdges = 0x1000000;
  cm.mapEnts->audioPropEdges = v0;
  numAudioPropNodes = cm.mapEnts->numAudioPropNodes;
  audioPropNodes = cm.mapEnts->audioPropNodes;
  Com_Printf(9, "Sound Propagation Processing...\n");
  Com_Printf(9, "\tprocessing %d nodes.\n", numAudioPropNodes);
  v3 = 0;
  if ( numAudioPropNodes )
  {
    p_numEdges = &audioPropNodes->numEdges;
    v5 = numAudioPropNodes;
    do
    {
      *p_numEdges = 0;
      p_numEdges += 10;
      --v5;
    }
    while ( v5 );
  }
  v6 = 0;
  if ( numAudioPropNodes )
  {
    p_edgeStartIndex = &audioPropNodes->edgeStartIndex;
    v8 = 0;
    do
    {
      SND_PropagationFindEdges(PHYSICS_WORLD_ID_CLIENT_FIRST, v6, v0, audioPropNodes, numAudioPropNodes);
      v9 = *((unsigned __int16 *)p_edgeStartIndex - 2);
      ++v6;
      *p_edgeStartIndex = v8;
      p_edgeStartIndex += 5;
      v3 += v9;
      v8 += numAudioPropNodes;
    }
    while ( v6 < numAudioPropNodes );
  }
  Com_Printf(9, "\tfound %d edges.\n", v3);
}

/*
==============
SND_UpdateDoorPropagation
==============
*/
void SND_UpdateDoorPropagation(const SndDoorPropagationWorkerCmd *const cmd)
{
  unsigned int v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 scriptableDoorIndex; 
  unsigned __int64 portalTrigger; 
  ScriptableInstanceClientContext *v6; 
  double v7; 
  char v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *mp_next; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v11; 
  __int64 v12; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  double v14; 
  __int64 v15; 
  __int64 v16; 

  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_UpdateDoorPropagation");
  v1 = 20;
  if ( (int)s_numscriptableDoors < 20 )
    v1 = s_numscriptableDoors;
  if ( v1 )
  {
    v2 = s_nextDoorToUpdate;
    v3 = v1;
    while ( 1 )
    {
      scriptableDoorIndex = s_scriptableDoorData[v2].scriptableDoorIndex;
      portalTrigger = s_scriptableDoorData[v2].portalTrigger;
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)scriptableDoorIndex >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v16) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v15) = scriptableDoorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v6 = &g_scriptableCl_instanceContexts[0][scriptableDoorIndex];
      v7 = AngleDelta(v6->commonContext.angles.v[1], v6->commonContext.anglesInitial.v[1]);
      LODWORD(v7) &= _xmm;
      v8 = *(float *)&v7 < 0.0099999998;
      if ( *(float *)&v7 >= 0.0099999998 )
        goto LABEL_46;
      if ( portalTrigger % 0x185 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v9 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[portalTrigger % 0x185];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v9->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v9->m_listHead.m_sentinel.mp_next == v9 )
        break;
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)portalTrigger )
          break;
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)mp_next->m_listHead.m_sentinel.mp_next;
        if ( mp_next == v9 )
          goto LABEL_21;
      }
      if ( !mp_next )
        goto LABEL_22;
      v11 = mp_next;
LABEL_23:
      if ( mp_next )
      {
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v12 = (__int64)&v11[1].m_listHead.m_sentinel.mp_next + 4;
        if ( !v11 )
          v12 = 4i64;
        if ( *(_DWORD *)v12 == (_DWORD)scriptableDoorIndex )
        {
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v12 = (__int64)&v11[2];
          if ( !v11 )
            v12 = 8i64;
        }
        else if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        {
          __debugbreak();
        }
        if ( *(_DWORD *)v12 == -1 )
        {
          if ( (v6->commonContext.def->flags & 0x100000) != 0 )
            Com_PrintWarning(9, "Scriptable double door %d has no associated second door.\n", (unsigned int)scriptableDoorIndex);
        }
        else
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, *(_DWORD *)v12);
          v14 = AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
          v8 &= COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.0099999998;
        }
      }
      else
      {
        Com_PrintWarning(9, "Scriptable door %d has no associated propagation portal mapping.\n", (unsigned int)scriptableDoorIndex);
      }
LABEL_46:
      CG_EnableAudioTriggerByIndex(portalTrigger, v8 != 1);
      v2 = (s_nextDoorToUpdate + 1) % s_numscriptableDoors;
      s_nextDoorToUpdate = v2;
      if ( !--v3 )
        goto LABEL_47;
    }
LABEL_21:
    mp_next = NULL;
LABEL_22:
    v11 = NULL;
    goto LABEL_23;
  }
LABEL_47:
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_UpdatePropagation
==============
*/
void SND_UpdatePropagation(const SndPropagationWorkerCmd *const cmd)
{
  int v2; 
  __int16 NodeForPosition; 
  int v4; 
  __int16 v5; 
  __int16 v6; 
  __int16 v7; 
  __int16 v8; 

  v2 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop kd tree");
  NodeForPosition = SND_PropagationFindNodeForPosition(&cmd->reverbListenerOrigin);
  g_snd.propagationKdTreeUsec = Sys_Microseconds() - v2;
  Sys_ProfEndNamedEvent();
  v4 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop path time");
  if ( NodeForPosition != -1 )
  {
    if ( cmd->runPropagationForReverbA )
    {
      ++g_snd.propagationCount;
      v5 = SND_PropagationFindNodeForPosition(&cmd->reverbTriggerPropagationInputA);
      if ( v5 != -1 )
      {
        v6 = truncate_cast<short,unsigned int>(cmd->reverbTriggerInputNumberA);
        if ( SND_PropagationFindPortalLocation(v6, NodeForPosition, &cmd->reverbListenerOrigin, v5, &g_snd.reverbPortalPropagationOutputA) )
          g_snd.reverbTriggerOutputNumberA = cmd->reverbTriggerInputNumberA;
        else
          g_snd.reverbTriggerOutputNumberA = 1024;
      }
    }
    if ( cmd->runPropagationForReverbB )
    {
      ++g_snd.propagationCount;
      v7 = SND_PropagationFindNodeForPosition(&cmd->reverbTriggerPropagationInputB);
      if ( v7 != -1 )
      {
        v8 = truncate_cast<short,unsigned int>(cmd->reverbTriggerInputNumberB);
        if ( SND_PropagationFindPortalLocation(v8, NodeForPosition, &cmd->reverbListenerOrigin, v7, &g_snd.reverbPortalPropagationOutputB) )
          g_snd.reverbTriggerOutputNumberB = cmd->reverbTriggerInputNumberB;
        else
          g_snd.reverbTriggerOutputNumberB = 1024;
      }
    }
  }
  g_snd.propagationPathUsec = Sys_Microseconds() - v4;
  Sys_ProfEndNamedEvent();
}

