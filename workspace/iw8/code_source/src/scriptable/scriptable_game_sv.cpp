/*
==============
ScriptableSv_RunStateEventsFrom
==============
*/

void __fastcall ScriptableSv_RunStateEventsFrom(const unsigned int scriptableIndex, const ScriptablePartDef *part, unsigned int nextEvent, unsigned int *holdrand)
{
  ?ScriptableSv_RunStateEventsFrom@@YAXIPEBUScriptablePartDef@@IPEAI@Z(scriptableIndex, part, nextEvent, holdrand);
}

/*
==============
ScriptableSv_UpdateModel
==============
*/

void __fastcall ScriptableSv_UpdateModel(const unsigned int scriptableIndex, bool link, bool activatePhysics)
{
  ?ScriptableSv_UpdateModel@@YAXI_N0@Z(scriptableIndex, link, activatePhysics);
}

/*
==============
ScriptableSv_SetPose
==============
*/

void __fastcall ScriptableSv_SetPose(const unsigned int scriptableIndex, ScriptableInstanceContext *r_context, const vec3_t *origin, const vec3_t *angles, bool warp)
{
  ?ScriptableSv_SetPose@@YAXIAEAUScriptableInstanceContext@@AEBTvec3_t@@1_N@Z(scriptableIndex, r_context, origin, angles, warp);
}

/*
==============
ScriptableSv_ShutdownActiveEvents
==============
*/

void __fastcall ScriptableSv_ShutdownActiveEvents(ScriptableEventParams *eventParams)
{
  ?ScriptableSv_ShutdownActiveEvents@@YAXPEAUScriptableEventParams@@@Z(eventParams);
}

/*
==============
ScriptableSv_UpdateInstanceEvents
==============
*/

void __fastcall ScriptableSv_UpdateInstanceEvents(const float deltaTime, const unsigned int scriptableIndex)
{
  ?ScriptableSv_UpdateInstanceEvents@@YAXMI@Z(deltaTime, scriptableIndex);
}

/*
==============
ScriptableSv_UpdateNavObstacle
==============
*/

void __fastcall ScriptableSv_UpdateNavObstacle(const unsigned int scriptableIndex)
{
  ?ScriptableSv_UpdateNavObstacle@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_RunNotetrackBehaviors
==============
*/

void __fastcall ScriptableSv_RunNotetrackBehaviors(const unsigned int scriptableIndex, const ScriptablePartDef *partDef, scr_string_t note)
{
  ?ScriptableSv_RunNotetrackBehaviors@@YAXIPEBUScriptablePartDef@@W4scr_string_t@@@Z(scriptableIndex, partDef, note);
}

/*
==============
ScriptableSv_StateEventMoveGetData
==============
*/

Scriptable_EventMove_Data *__fastcall ScriptableSv_StateEventMoveGetData(ScriptableInstanceContext *const context, const ScriptableEventMoveDef *const moveDef)
{
  return ?ScriptableSv_StateEventMoveGetData@@YAPEAUScriptable_EventMove_Data@@QEAUScriptableInstanceContext@@QEBUScriptableEventMoveDef@@@Z(context, moveDef);
}

/*
==============
ScriptableSv_RunActiveEvents
==============
*/

void __fastcall ScriptableSv_RunActiveEvents(ScriptableEventParams *eventParams, unsigned int *holdrand)
{
  ?ScriptableSv_RunActiveEvents@@YAXPEAUScriptableEventParams@@PEAI@Z(eventParams, holdrand);
}

/*
==============
ScriptableSv_CreateModelNavObstacle
==============
*/
unsigned int ScriptableSv_CreateModelNavObstacle(unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  __int128 v5; 
  nav_space_s *MostLikelySpace; 
  vec3_t out; 
  vec3_t outOrigin; 
  Bounds bounds; 
  vec4_t quat; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  if ( !InstanceCollisionContext->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 298, ASSERT_TYPE_ASSERT, "( r_collisionContext.model )", (const char *)&queryFormat, "r_collisionContext.model") )
    __debugbreak();
  bounds = InstanceCollisionContext->model->bounds;
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  AnglesToQuat(&InstanceCommonContext->angles, &quat);
  QuatTransform(&quat, &bounds.midPoint, &out);
  v5 = LODWORD(out.v[0]);
  *(float *)&v5 = out.v[0] + outOrigin.v[0];
  _XMM4 = v5;
  __asm { vunpcklps xmm1, xmm4, xmm3 }
  out.v[2] = out.v[2] + outOrigin.v[2];
  bounds.midPoint.v[2] = out.v[2];
  *(double *)out.v = *(double *)&_XMM1;
  *(double *)bounds.midPoint.v = *(double *)&_XMM1;
  MostLikelySpace = Nav_FindMostLikelySpace(&outOrigin, NAV_LAYER_HUMAN, NULL);
  if ( !MostLikelySpace )
    MostLikelySpace = Nav_GetDefaultSpace();
  return Nav_CreateObstacleByBounds(MostLikelySpace, &bounds, &InstanceCommonContext->angles, 14.9, 0xFFFFFFFF, 0x2000u);
}

/*
==============
ScriptableSv_EnterUsableState
==============
*/
void ScriptableSv_EnterUsableState(const unsigned int scriptableIndex, const unsigned int partId, ScriptableStateDef *stateDef)
{
  unsigned __int8 v4; 
  const ScriptableDef *def; 
  const char *name; 
  GConfigStrings *v8; 
  const char *script_id; 
  const char *hintStringDisabled; 
  const char *hintIcon; 

  v4 = partId;
  if ( partId >= 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2587, ASSERT_TYPE_ASSERT, "( partId < 0xff )", (const char *)&queryFormat, "partId < UCHAR_MAX") )
    __debugbreak();
  if ( !stateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2588, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  if ( scriptableIndex < 0xFDE8 )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v8 = GConfigStrings::ms_gConfigStrings;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2598, ASSERT_TYPE_ASSERT, "( cs )", (const char *)&queryFormat, "cs") )
      __debugbreak();
    if ( !stateDef->data.usable.hintStringIndex )
    {
      script_id = stateDef->data.health.script_id;
      if ( script_id )
      {
        if ( *script_id )
          stateDef->data.usable.hintStringIndex = ((__int64 (__fastcall *)(GConfigStrings *))v8->GetHintStringIndex)(v8);
      }
    }
    if ( !stateDef->data.usable.hintStringDisabledIndex )
    {
      hintStringDisabled = stateDef->data.usable.hintStringDisabled;
      if ( hintStringDisabled )
      {
        if ( *hintStringDisabled )
          stateDef->data.usable.hintStringDisabledIndex = ((__int64 (__fastcall *)(GConfigStrings *))v8->GetHintStringIndex)(v8);
      }
    }
    if ( !stateDef->data.usable.hintIconIndex )
    {
      hintIcon = stateDef->data.usable.hintIcon;
      if ( hintIcon )
      {
        if ( *hintIcon )
          NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_IMAGE, hintIcon, &stateDef->data.usable.hintIconIndex);
      }
    }
    G_PlayerUse_SetObjectUsable(scriptableIndex, USE_CLASS_SCRIPTABLE, v4, 1);
  }
  else
  {
    def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
    if ( def )
      name = def->name;
    else
      name = "<Unknown>";
    Com_PrintError(29, "ScriptableSv UsableState: Usability will not work. Index %i is greater than the limit of %i for '%s'\n", scriptableIndex, 65000i64, name);
  }
}

/*
==============
ScriptableSv_GravityArcCalcData
==============
*/
void ScriptableSv_GravityArcCalcData(const unsigned int scriptableIndex, ScriptableInstanceContextSecure *r_context, const ScriptableEventGravityArcDef *const moveDef, ScriptableGravityArcRuntimeData *arcData)
{
  __int64 StandaloneParentEntityNum; 
  const gentity_s *v9; 
  vec3_t *outWorldAngles; 
  vec3_t v11; 
  vec3_t outWorldOrigin; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2069, ASSERT_TYPE_ASSERT, "(moveDef != nullptr)", (const char *)&queryFormat, "moveDef != nullptr") )
    __debugbreak();
  if ( (*((_BYTE *)r_context + 60) & 0x20) != 0 )
  {
    StandaloneParentEntityNum = ScriptableSv_GetStandaloneParentEntityNum(scriptableIndex);
    if ( G_IsEntityInUse(StandaloneParentEntityNum) )
    {
      if ( (unsigned int)StandaloneParentEntityNum >= 0x800 )
      {
        LODWORD(outWorldAngles) = StandaloneParentEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outWorldAngles, 2048) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v9 = &g_entities[StandaloneParentEntityNum];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2082, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
        __debugbreak();
      ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace(scriptableIndex, v9, &r_context->originInitial, &r_context->anglesInitial, &outWorldOrigin, &v11);
      ScriptableBg_GravityArcCalcData(moveDef, r_context->payload, &outWorldOrigin, &v11, arcData);
    }
    else
    {
      ScriptableBg_GravityArcCalcData(moveDef, r_context->payload, &r_context->originInitial, &r_context->anglesInitial, arcData);
    }
  }
  else
  {
    ScriptableBg_GravityArcCalcData(moveDef, r_context->payload, &r_context->originInitial, &r_context->anglesInitial, arcData);
  }
}

/*
==============
ScriptableSv_RunActiveEvents
==============
*/
void ScriptableSv_RunActiveEvents(ScriptableEventParams *eventParams, unsigned int *holdrand)
{
  unsigned int scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  const ScriptablePartDef *partDef; 
  __int64 v7; 
  __int64 v8; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2634, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2635, ASSERT_TYPE_ASSERT, "( holdrand )", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2641, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= eventParams->partDef->numStates )
  {
    LODWORD(v8) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2642, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( eventParams->partDef->numStates )", "runtime->stateId doesn't index eventParams->partDef->numStates\n\t%i not in [0, %i)", v8, eventParams->partDef->numStates) )
      __debugbreak();
  }
  partDef = eventParams->partDef;
  v7 = (__int64)&partDef->states[PartRuntime->stateId];
  if ( *(_DWORD *)(v7 + 24) == 3 )
    ScriptableSv_EnterUsableState(scriptableIndex, partDef->serverInstanceFlatId, (ScriptableStateDef *)v7);
  ScriptableSv_RunStateEvents(eventParams, holdrand, *(ScriptableEventDef **)(v7 + 16), *(_DWORD *)(v7 + 12));
}

/*
==============
ScriptableSv_RunNotetrackBehaviors
==============
*/
void ScriptableSv_RunNotetrackBehaviors(const unsigned int scriptableIndex, const ScriptablePartDef *partDef, scr_string_t note)
{
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v7; 
  unsigned int i; 
  __int64 v9; 
  ScriptableEventParams outParams; 

  if ( (partDef->flags & 2) != 0 && partDef->numStates )
  {
    PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, partDef);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3380, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
      __debugbreak();
    if ( PartRuntime->stateId >= partDef->numStates )
    {
      LODWORD(v9) = PartRuntime->stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3381, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( partDef->numStates )", "runtime->stateId doesn't index partDef->numStates\n\t%i not in [0, %i)", v9, partDef->numStates) )
        __debugbreak();
    }
    v7 = &partDef->states[PartRuntime->stateId];
    ScriptableSv_InitEventParams(&outParams, scriptableIndex, partDef);
    ScriptableSv_RunNotetrackBehaviors_Internal(v7->base.numEvents, v7->base.events, &outParams, note);
  }
  for ( i = 0; i < partDef->numChildParts; ++i )
    ScriptableSv_RunNotetrackBehaviors(scriptableIndex, &partDef->childParts[i], note);
}

/*
==============
ScriptableSv_RunNotetrackBehaviors_Internal
==============
*/
void ScriptableSv_RunNotetrackBehaviors_Internal(unsigned int numEvents, const ScriptableEventDef *eventDefs, ScriptableEventParams *eventParams, scr_string_t note)
{
  __int64 v4; 
  __int64 scriptableIndex; 
  __int64 v9; 
  bool *p_useTagAngles; 
  int v11; 
  unsigned int RandSeed; 
  unsigned int v13; 
  ScriptableEventDef *v14; 
  __int64 v15; 
  __int64 v16; 
  ScriptableInstanceServerContext *v17; 
  const ScriptableEventDef *v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int holdrand; 

  v4 = numEvents;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3317, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    p_useTagAngles = &eventDefs->data.particleFX.useTagAngles;
    do
    {
      v11 = *((_DWORD *)p_useTagAngles - 13);
      if ( v11 == 2 )
      {
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v21) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v20) = scriptableIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v15 = *((unsigned __int16 *)p_useTagAngles - 2);
        v16 = v15;
        v17 = &g_scriptableSv_instanceContexts[scriptableIndex];
        if ( v15 + 4 > (unsigned __int64)v17->commonContext.eventStreamBufferSize )
        {
          LODWORD(v21) = v17->commonContext.eventStreamBufferSize;
          LODWORD(v20) = v15 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3334, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v20, v21) )
            __debugbreak();
        }
        if ( v17->commonContext.eventStreamBuffer[v16] )
        {
          v18 = *(const ScriptableEventDef **)(p_useTagAngles - 28);
          v19 = *((_DWORD *)p_useTagAngles - 8);
        }
        else
        {
          v18 = *(const ScriptableEventDef **)(p_useTagAngles - 12);
          v19 = *((_DWORD *)p_useTagAngles - 5);
        }
        ScriptableSv_RunNotetrackBehaviors_Internal(v19, v18, eventParams, note);
      }
      else if ( v11 == 6 && note == scr_const.end )
      {
        RandSeed = ScriptableSv_GenerateRandSeed(scriptableIndex);
        v13 = *(_DWORD *)p_useTagAngles;
        v14 = *(ScriptableEventDef **)(p_useTagAngles + 4);
        holdrand = RandSeed;
        ScriptableSv_RunStateEvents(eventParams, &holdrand, v14, v13);
      }
      p_useTagAngles += 176;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
ScriptableSv_RunStateEventAddModel
==============
*/
void ScriptableSv_RunStateEventAddModel(ScriptableEventParams *eventParams, const ScriptableEventAddModelDef *addModel)
{
  GUtils *v4; 
  unsigned int scriptableIndex; 
  XModel *model; 
  const char *v7; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  ScriptableInstanceContext *v10; 
  const char *v11; 
  gentity_s *Entity; 
  scrContext_t *v13; 
  ScriptableInstanceContext *v14; 
  const char *v15; 
  const char *v16; 
  entityType_s eType; 
  ScriptableInstanceContext *v18; 
  const char *v19; 
  scr_string_t scrTagName; 
  const char *v21; 
  const char *v22; 
  ScriptableInstanceContext *v23; 
  BOOL fmt; 
  BOOL v25; 

  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v4 = GUtils::ms_gUtils;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1327, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( !addModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1330, ASSERT_TYPE_ASSERT, "( addModel )", (const char *)&queryFormat, "addModel") )
    __debugbreak();
  model = addModel->model;
  v7 = "<Unknown>";
  if ( !model )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<Unknown>";
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440832E0, 209i64, name);
    model = addModel->model;
  }
  if ( v4->IsTransientCustomizationModel(v4, model->name) )
  {
    v10 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v10->def )
      v11 = v10->def->name;
    else
      v11 = "<Unknown>";
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144083330, 208i64, v11);
  }
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    if ( BG_IsRagdollTrajectory(&Entity->s.lerp.pos) )
    {
      v13 = ScriptContext_Server();
      v14 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v14->def )
        v15 = v14->def->name;
      else
        v15 = "<Unknown>";
      v16 = j_va("Scriptable %s tried to add a model, but the entity is in the ragdoll state", v15);
      Scr_Error(COM_ERR_2027, v13, v16);
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || (eType = Entity->s.eType, ((eType - 1) & 0xFFEB) == 0) && eType != ET_ACTOR_CORPSE )
    {
      if ( !Entity->model )
      {
        v18 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v18->def )
          v19 = v18->def->name;
        else
          v19 = "<Unknown>";
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144083410, 210i64, v19);
      }
      scrTagName = addModel->scrTagName;
      if ( !scrTagName )
        scrTagName = scr_const._;
      ScriptableSv_DisableLinking(1);
      v4->EntDetach(v4, Entity, addModel->model->name, scrTagName);
      LOBYTE(v25) = 0;
      LOBYTE(fmt) = 0;
      if ( !v4->EntAttach(v4, Entity, addModel->model->name, scrTagName, fmt, v25) )
      {
        ScriptableSv_DisableLinking(0);
        v21 = SL_ConvertToString(scrTagName);
        v22 = addModel->model->name;
        v23 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v23->def )
          v7 = v23->def->name;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144083480, 211i64, v7, v22, v21);
      }
      ScriptableSv_DisableLinking(0);
    }
  }
}

/*
==============
ScriptableSv_RunStateEventAnimation
==============
*/
void ScriptableSv_RunStateEventAnimation(ScriptableEventParams *eventParams, unsigned int *holdrand, const ScriptableEventAnimationDef *animation)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v7; 
  ScriptableInstanceContext *v8; 
  const char *v9; 
  double Length; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v13; 
  gentity_s *Entity; 
  const char *v15; 
  DObj *ServerDObjForEnt; 
  ScriptableInstanceContext *v17; 
  const char *name; 
  float blendTime; 
  char v20; 
  XAnimTree *Tree; 
  XAnimTree *SmallTree; 
  const char *v23; 
  ScriptableInstanceContext *v24; 
  unsigned int index; 
  bool IsLinkingEnabled; 
  DObj *v27; 
  __int64 goalTime; 
  float outRate; 
  float outStartTime; 
  const char *AnimTreeDebugName; 
  DObjPartBits partBits; 

  ScriptableBg_ChooseAnimationStartTimeAndRate(animation, holdrand, &outStartTime, &outRate);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || !animation->clientOnlyInMP )
  {
    if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 622, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
      __debugbreak();
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def->animationTreeDef[1] )
    {
      if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
      {
        Entity = ScriptableSv_GetEntity(scriptableIndex);
        v15 = "<Unknown>";
        ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
        if ( !ServerDObjForEnt )
        {
          v17 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v17->def )
            name = v17->def->name;
          else
            name = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082A10, 194i64, name);
        }
        blendTime = animation->blendTime;
        v20 = 0;
        Tree = DObjGetTree(ServerDObjForEnt);
        if ( Tree )
        {
          if ( Tree->anims != InstanceCommonContext->def->animationTreeDef[1] )
          {
            v23 = SL_ConvertToString(InstanceCommonContext->def->animationTreeName);
            AnimTreeDebugName = XAnimGetAnimTreeDebugName(Tree->anims);
            v24 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
            if ( v24->def )
              v15 = v24->def->name;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082AF0, 195i64, v15, AnimTreeDebugName, v23);
          }
        }
        else
        {
          if ( Entity->pAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 674, ASSERT_TYPE_ASSERT, "(entity->pAnimTree == 0)", (const char *)&queryFormat, "entity->pAnimTree == NULL") )
            __debugbreak();
          SmallTree = Com_XAnimCreateSmallTree(InstanceCommonContext->def->animationTreeDef[1], MOVEMENT);
          Entity->pAnimTree = SmallTree;
          Tree = SmallTree;
          DObjSetTree(ServerDObjForEnt, SmallTree);
          v20 = 1;
        }
        if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 688, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
        index = animation->animationIndex[1].index;
        if ( animation->overrideAnimation )
          XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, blendTime, outRate, scr_const.scriptable, 0, 0, LINEAR);
        else
          XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, blendTime, outRate, scr_const.scriptable, 0, 0, LINEAR, NULL);
        if ( animation->startTimeNormalized )
          XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, outStartTime);
        else
          XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, outStartTime);
        if ( v20 && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
        {
          DObjGetHidePartBits(ServerDObjForEnt, &partBits);
          IsLinkingEnabled = ScriptableSv_IsLinkingEnabled();
          if ( IsLinkingEnabled )
            ScriptableSv_DisableLinking(1);
          G_DObjUpdate(Entity, 0);
          if ( IsLinkingEnabled )
            ScriptableSv_DisableLinking(0);
          v27 = Com_GetServerDObjForEnt(Entity);
          if ( v27 )
            DObjSetHidePartBits(v27, &partBits);
        }
      }
      else if ( animation->eventAtEndCount && !animation->clientOnlyInMP )
      {
        Length = XAnimGetLength(InstanceCommonContext->def->animationTreeDef[1], animation->animationIndex[1].index);
        eventStreamBufferOffsetServer = animation->eventStreamBufferOffsetServer;
        eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
        v13 = eventStreamBufferOffsetServer;
        if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
        {
          LODWORD(goalTime) = eventStreamBufferOffsetServer + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 645, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", goalTime, eventStreamBufferSize) )
            __debugbreak();
        }
        *(float *)&InstanceCommonContext->eventStreamBuffer[v13] = (float)(*(float *)&Length * outRate) + (float)((float)level.time * 0.001);
      }
    }
    else
    {
      v7 = animation->animation->name;
      v8 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v8->def )
        v9 = v8->def->name;
      else
        v9 = "<Unknown>";
      Com_PrintWarning(15, "WARNING: Scriptable %s cannot play anim %s as it's missing an anim tree\n", v9, v7);
    }
  }
}

/*
==============
ScriptableSv_RunStateEventApplyAngularForce
==============
*/
void ScriptableSv_RunStateEventApplyAngularForce(ScriptableEventParams *eventParams, unsigned int *holdrand, const ScriptableEventApplyAngularForceDef *applyAngularForce)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  G_PhysicsObject *v11; 
  unsigned int v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v22; 
  signed int v25; 
  int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  __int64 v28; 
  hknpBodyId result; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1505, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v11 = G_PhysicsObject_Get(Entity);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1519, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v12 = v11->physicsInstances[0];
    if ( v12 == -1 )
    {
      if ( applyAngularForce->randomRange )
      {
        BG_flrand(applyAngularForce->forceVector.v[0], applyAngularForce->forceVector2.v[0], holdrand);
        BG_flrand(applyAngularForce->forceVector.v[1], applyAngularForce->forceVector2.v[1], holdrand);
        BG_flrand(applyAngularForce->forceVector.v[2], applyAngularForce->forceVector2.v[2], holdrand);
      }
    }
    else
    {
      v34 = v4;
      v33 = v5;
      if ( !Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v12, 0) )
        Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
      v35 = v3;
      angles = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->angles;
      AnglesToAxis(&angles, &axis);
      if ( applyAngularForce->randomRange )
      {
        v13 = LODWORD(applyAngularForce->forceVector.v[0]);
        *(double *)&v13 = BG_flrand(*(float *)&v13, applyAngularForce->forceVector2.v[0], holdrand);
        v14 = v13;
        v15 = LODWORD(applyAngularForce->forceVector.v[1]);
        *(double *)&v15 = BG_flrand(*(float *)&v15, applyAngularForce->forceVector2.v[1], holdrand);
        v16 = v15;
        *(double *)&v15 = BG_flrand(applyAngularForce->forceVector.v[2], applyAngularForce->forceVector2.v[2], holdrand);
        v17 = *(float *)&v15;
      }
      else
      {
        v14 = LODWORD(applyAngularForce->forceVector.v[0]);
        v16 = LODWORD(applyAngularForce->forceVector.v[1]);
        v17 = applyAngularForce->forceVector.v[2];
      }
      if ( applyAngularForce->worldSpace )
      {
        v18 = *(float *)&v14;
        v19 = v16;
      }
      else
      {
        v20 = v14;
        v18 = (float)((float)(*(float *)&v14 * axis.m[0].v[0]) + (float)(*(float *)&v16 * axis.m[1].v[0])) + (float)(v17 * axis.m[2].v[0]);
        *(float *)&v20 = (float)((float)(*(float *)&v14 * axis.m[0].v[1]) + (float)(*(float *)&v16 * axis.m[1].v[1])) + (float)(v17 * axis.m[2].v[1]);
        v19 = v20;
        v17 = (float)((float)(*(float *)&v14 * axis.m[0].v[2]) + (float)(*(float *)&v16 * axis.m[1].v[2])) + (float)(v17 * axis.m[2].v[2]);
      }
      v22 = v19;
      *(float *)&v22 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18)) + (float)(v17 * v17));
      _XMM6 = v22;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
      }
      torqueVector.v[0] = v18 * (float)(1.0 / *(float *)&_XMM0);
      torqueVector.v[2] = v17 * (float)(1.0 / *(float *)&_XMM0);
      torqueVector.v[1] = *(float *)&v19 * (float)(1.0 / *(float *)&_XMM0);
      v25 = 0;
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v12);
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v28) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v12, v25)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1585, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) )
            Physics_ApplyAngularImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &torqueVector, *(float *)&v22);
          ++v25;
        }
        while ( v25 < NumRigidBodys );
      }
    }
  }
}

/*
==============
ScriptableSv_RunStateEventApplyConstantForce
==============
*/
void ScriptableSv_RunStateEventApplyConstantForce(ScriptableEventParams *eventParams, unsigned int *holdrand, const ScriptableEventApplyConstantForceDef *applyConstantForce)
{
  unsigned int scriptableIndex; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v21; 
  __int64 v22; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned __int8 *eventStreamBuffer; 
  __int64 v25; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1602, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  v7 = 0.0;
  if ( !applyConstantForce->randomRange )
  {
    v9 = 0.0;
    goto LABEL_12;
  }
  v8 = BG_flrand(0.0, 1.0, holdrand);
  v9 = *(float *)&v8;
  if ( !applyConstantForce->randomRange )
  {
LABEL_12:
    v11 = 0.0;
    goto LABEL_13;
  }
  v10 = BG_flrand(0.0, 1.0, holdrand);
  v11 = *(float *)&v10;
  if ( !applyConstantForce->randomRange )
  {
LABEL_13:
    v13 = 0.0;
    goto LABEL_14;
  }
  v12 = BG_flrand(0.0, 1.0, holdrand);
  v13 = *(float *)&v12;
  if ( !applyConstantForce->randomRange )
  {
LABEL_14:
    v15 = 0.0;
    goto LABEL_15;
  }
  v14 = BG_flrand(0.0, 1.0, holdrand);
  v15 = *(float *)&v14;
  if ( !applyConstantForce->randomRange )
  {
LABEL_15:
    v17 = 0.0;
    goto LABEL_16;
  }
  v16 = BG_flrand(0.0, 1.0, holdrand);
  v17 = *(float *)&v16;
  if ( applyConstantForce->randomRange )
  {
    v18 = BG_flrand(0.0, 1.0, holdrand);
    v7 = *(float *)&v18;
  }
LABEL_16:
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  eventStreamBufferOffsetServer = applyConstantForce->eventStreamBufferOffsetServer;
  v21 = InstanceCommonContext;
  v22 = eventStreamBufferOffsetServer;
  eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
  if ( eventStreamBufferOffsetServer + 24 > eventStreamBufferSize )
  {
    LODWORD(v25) = eventStreamBufferOffsetServer + 24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1618, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 6 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v25, eventStreamBufferSize) )
      __debugbreak();
  }
  eventStreamBuffer = v21->eventStreamBuffer;
  *(float *)&eventStreamBuffer[v22] = v9;
  *(float *)&eventStreamBuffer[v22 + 4] = v11;
  *(float *)&eventStreamBuffer[v22 + 8] = v13;
  *(float *)&eventStreamBuffer[v22 + 12] = v15;
  *(float *)&eventStreamBuffer[v22 + 16] = v17;
  *(float *)&eventStreamBuffer[v22 + 20] = v7;
}

/*
==============
ScriptableSv_RunStateEventApplyForce
==============
*/
void ScriptableSv_RunStateEventApplyForce(ScriptableEventParams *eventParams, unsigned int *holdrand, const ScriptableEventApplyForceDef *applyForce)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  G_PhysicsObject *v17; 
  unsigned int v18; 
  ScriptableInstanceContext *InstanceCommonContext; 
  float v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float v27; 
  double v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  float v32; 
  bool v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v38; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  __int64 v44; 
  hknpBodyId result; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 
  tmat33_t<vec3_t> axis; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1393, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v17 = G_PhysicsObject_Get(Entity);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1407, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v18 = v17->physicsInstances[0];
    if ( v18 == -1 )
    {
      if ( applyForce->randomRange )
      {
        BG_flrand(applyForce->forcePos.v[0], applyForce->forcePos2.v[0], holdrand);
        BG_flrand(applyForce->forcePos.v[1], applyForce->forcePos2.v[1], holdrand);
        BG_flrand(applyForce->forcePos.v[2], applyForce->forcePos2.v[2], holdrand);
        BG_flrand(applyForce->forceVector.v[0], applyForce->forceVector2.v[0], holdrand);
        BG_flrand(applyForce->forceVector.v[1], applyForce->forceVector2.v[1], holdrand);
        BG_flrand(applyForce->forceVector.v[2], applyForce->forceVector2.v[2], holdrand);
      }
    }
    else
    {
      v57 = v4;
      v56 = v5;
      v55 = v6;
      v54 = v7;
      v53 = v8;
      v52 = v9;
      v51 = v10;
      v50 = v11;
      if ( !Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v18, 0) )
        Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
      v58 = v3;
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      angles = InstanceCommonContext->angles;
      v20 = InstanceCommonContext->origin.v[0];
      v21 = InstanceCommonContext->origin.v[1];
      result.m_serialAndIndex = (unsigned int)LODWORD(InstanceCommonContext->origin.z);
      AnglesToAxis(&angles, &axis);
      if ( applyForce->randomRange )
      {
        v22 = BG_flrand(applyForce->forcePos.v[0], applyForce->forcePos2.v[0], holdrand);
        v23 = *(float *)&v22;
        v24 = BG_flrand(applyForce->forcePos.v[1], applyForce->forcePos2.v[1], holdrand);
        v25 = *(float *)&v24;
        v26 = BG_flrand(applyForce->forcePos.v[2], applyForce->forcePos2.v[2], holdrand);
        v27 = *(float *)&v26;
        v28 = BG_flrand(applyForce->forceVector.v[0], applyForce->forceVector2.v[0], holdrand);
        v29 = *(float *)&v28;
        v30 = LODWORD(applyForce->forceVector.v[1]);
        *(double *)&v30 = BG_flrand(*(float *)&v30, applyForce->forceVector2.v[1], holdrand);
        v31 = v30;
        *(double *)&v30 = BG_flrand(applyForce->forceVector.v[2], applyForce->forceVector2.v[2], holdrand);
        v32 = *(float *)&v30;
      }
      else
      {
        v23 = applyForce->forcePos.v[0];
        v25 = applyForce->forcePos.v[1];
        v27 = applyForce->forcePos.v[2];
        v29 = applyForce->forceVector.v[0];
        v31 = LODWORD(applyForce->forceVector.v[1]);
        v32 = applyForce->forceVector.v[2];
      }
      v33 = !applyForce->worldSpace;
      position.v[0] = (float)((float)((float)(axis.m[0].v[0] * v23) + (float)(axis.m[1].v[0] * v25)) + (float)(axis.m[2].v[0] * v27)) + v20;
      position.v[1] = (float)((float)((float)(axis.m[0].v[1] * v23) + (float)(axis.m[1].v[1] * v25)) + (float)(axis.m[2].v[1] * v27)) + v21;
      position.v[2] = (float)((float)((float)(axis.m[1].v[2] * v25) + (float)(axis.m[0].v[2] * v23)) + (float)(v27 * axis.m[2].v[2])) + *(float *)&result.m_serialAndIndex;
      if ( v33 )
      {
        v34 = (float)((float)(axis.m[0].v[0] * v29) + (float)(axis.m[1].v[0] * *(float *)&v31)) + (float)(axis.m[2].v[0] * v32);
        v36 = LODWORD(axis.m[0].v[1]);
        *(float *)&v36 = (float)((float)(axis.m[0].v[1] * v29) + (float)(axis.m[1].v[1] * *(float *)&v31)) + (float)(axis.m[2].v[1] * v32);
        v35 = v36;
        v32 = (float)((float)(axis.m[0].v[2] * v29) + (float)(axis.m[1].v[2] * *(float *)&v31)) + (float)(v32 * axis.m[2].v[2]);
      }
      else
      {
        v34 = v29;
        v35 = v31;
      }
      v38 = v35;
      *(float *)&v38 = fsqrt((float)((float)(*(float *)&v35 * *(float *)&v35) + (float)(v34 * v34)) + (float)(v32 * v32));
      _XMM6 = v38;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
      }
      normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM0) * v34;
      normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM0) * v32;
      normalizedDirection.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v35;
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v18);
      for ( i = 0; i < NumRigidBodys; ++i )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v44) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v44) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v18, i)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1488, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) )
          Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &normalizedDirection, *(float *)&v38);
      }
    }
  }
}

/*
==============
ScriptableSv_RunStateEventCollision
==============
*/
void ScriptableSv_RunStateEventCollision(ScriptableEventParams *eventParams, const ScriptableEventCollisionDef *collision)
{
  unsigned int scriptableIndex; 
  int v5; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  XModel *model; 
  const char *v9; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  const char *collmapName; 
  int v13; 
  int clipmapCModelIndex; 
  ScriptableInstanceContext *v15; 
  const char *v16; 
  ScriptableInstanceContext *v17; 
  const char *v18; 
  ScriptableInstanceContext *v19; 
  const char *v20; 
  ScriptableInstanceContext *v21; 
  const char *v22; 
  const cmodel_t *BrushModel; 
  const char *v24; 
  ScriptableInstanceContext *v25; 
  const char *v26; 
  char v27; 
  XModel *v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  bool v32; 
  XModel *v33; 
  XModel *v34; 
  const PhysicsAsset *physicsAsset; 
  ScriptableInstanceContext *v36; 
  int forceType; 
  XModel *v38; 
  unsigned int v39; 
  ScriptableInstanceContext *v40; 
  Scriptable_Analytics_Zone v41; 
  int NumObstacleBounds; 
  int navObstacleIdx; 
  nav_obstacle_bounds_s *ObstacleBounds; 
  nav_obstacle_bounds_s *v45; 
  unsigned int UniqueObstacleID; 
  nav_space_s *MostLikelySpace; 
  __int64 v48; 
  nav_obstacle_hull_s *m_Hulls; 
  __int128 v51; 
  const ScriptableDef *def; 
  double v54; 
  float v55; 
  double Float_Internal_DebugName; 
  char v57; 
  int ref; 
  int refa; 
  bfx::BoxExtents v60; 
  bfx::ObstacleDat v61; 
  Physics_InstantiateShapeOverride shapeOverride; 
  float v63; 
  bfx::ObstacleDat v64; 
  vec3_t out; 
  vec3_t position; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  *(_QWORD *)out.v = eventParams;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 328, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  *(_QWORD *)&v60.m_length = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v5 = 0;
  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
  ref = InstanceCollisionContext->scriptableCollisionMain;
  if ( (InstanceCollisionContext->scriptableCollisionMain != -1) != (InstanceCollisionContext->scriptableCollisionDetail != -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 335, ASSERT_TYPE_ASSERT, "(hasExistingCollisions == (r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF))", (const char *)&queryFormat, "hasExistingCollisions == (r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID)") )
    __debugbreak();
  if ( !ScriptableSv_HasCollisionSupport(scriptableIndex) )
  {
    if ( scriptableCollisionMain != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 339, ASSERT_TYPE_ASSERT, "(!hasExistingCollisions)", (const char *)&queryFormat, "!hasExistingCollisions") )
      __debugbreak();
    return;
  }
  if ( g_phyicsMapentsSwapped )
    Com_PrintWarning(20, "Mapents has changed - Scriptable collision events disabled on the server to prevent shape indexing errors\n");
  model = collision->model;
  v9 = "<Unknown>";
  v57 = 0;
  if ( model )
  {
    if ( model->physicsAsset )
      goto LABEL_45;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<Unknown>";
    Com_PrintWarning(29, "Server Scriptable %s is using a collision model with no asset\n", name);
    goto LABEL_44;
  }
  collmapName = collision->collmapName;
  if ( !collmapName || !*collmapName || (v13 = collision->clipmapCModelIndex, (unsigned int)(v13 + 2) <= 1) || !CM_BrushModelIsValid(v13) || !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
  {
    clipmapCModelIndex = collision->clipmapCModelIndex;
    if ( clipmapCModelIndex == -1 )
    {
      v15 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v15->def )
        v16 = v15->def->name;
      else
        v16 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event that has an invalid index - you may need to recompile the map - check linker output for more information\n", v16);
    }
    else if ( clipmapCModelIndex == -2 )
    {
      v17 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v17->def )
        v18 = v17->def->name;
      else
        v18 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event that has been disabled, probably because you are using mychanges\n", v18);
    }
    else if ( CM_BrushModelIsValid(clipmapCModelIndex) )
    {
      if ( !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
      {
        v21 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v21->def )
          v22 = v21->def->name;
        else
          v22 = "<Unknown>";
        Com_PrintWarning(29, "Server Scriptable %s is using a collision event with a brush that has no collision\n", v22);
      }
    }
    else
    {
      v19 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v19->def )
        v20 = v19->def->name;
      else
        v20 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event with an invalid brush index\n", v20);
    }
LABEL_44:
    v57 = 1;
  }
LABEL_45:
  BrushModel = NULL;
  if ( !collision->model )
  {
    if ( !CM_BrushModelIsValid(collision->clipmapCModelIndex) )
    {
      v24 = collision->collmapName;
      v25 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v25->def )
        v26 = v25->def->name;
      else
        v26 = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082570, 192i64, v26, v24);
    }
    BrushModel = CM_GetBrushModel(collision->clipmapCModelIndex);
    if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 396, ASSERT_TYPE_ASSERT, "( clipmapModel )", (const char *)&queryFormat, "clipmapModel") )
      __debugbreak();
  }
  v27 = 0;
  if ( !v57 )
  {
    if ( ref == -1 )
    {
      v27 = 1;
    }
    else
    {
      v28 = collision->model;
      if ( v28 )
      {
        v29 = v28 != InstanceCollisionContext->model;
        v30 = InstanceCollisionContext->clipmapCModelIndex == 0;
      }
      else
      {
        v29 = collision->clipmapCModelIndex != InstanceCollisionContext->clipmapCModelIndex;
        v30 = InstanceCollisionContext->model == NULL;
      }
      v31 = !v30 || v29;
      v32 = collision->canPush != InstanceCollisionContext->canPush || collision->canTouch != InstanceCollisionContext->canTouch;
      if ( collision->neverMoves != InstanceCollisionContext->neverMoves )
        v32 = 1;
      v27 = v32 || v31;
      if ( !v27 )
        return;
    }
  }
  ScriptableSv_DestroyCollision(scriptableIndex);
  if ( !v27 )
    return;
  if ( scriptableIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 437, ASSERT_TYPE_ASSERT, "( scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX )", (const char *)&queryFormat, "scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX") )
    __debugbreak();
  refa = scriptableIndex & 0x3FFFFF | Physics_MakeRef(Physics_RefSystem_Scriptable, Physics_RelationshipSystem_None, 0, 0);
  position = *(vec3_t *)(*(_QWORD *)&v60.m_length + 32i64);
  AnglesToQuat((const vec3_t *)(*(_QWORD *)&v60.m_length + 44i64), &quat);
  v33 = collision->model;
  shapeOverride.customShape = NULL;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeAddendum = -1;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  if ( v33 )
  {
    if ( !v33->physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 452, ASSERT_TYPE_ASSERT, "(collision->model->physicsAsset)", (const char *)&queryFormat, "collision->model->physicsAsset") )
      __debugbreak();
    v34 = collision->model;
    shapeOverride.shapeOverride = -1;
    physicsAsset = v34->physicsAsset;
    InstanceCollisionContext->clipmapCModelIndex = 0;
    if ( !physicsAsset )
    {
      v36 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v36->def )
        v9 = v36->def->name;
      Com_PrintWarning(29, "Scriptable %s is using a collision event with an xmodel that has no physicsAsset\n", v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 475, ASSERT_TYPE_ASSERT, "( physicsAsset )", (const char *)&queryFormat, "physicsAsset") )
        __debugbreak();
    }
LABEL_76:
    InstanceCollisionContext->canPush = collision->canPush;
    InstanceCollisionContext->canTouch = collision->canTouch;
    InstanceCollisionContext->touchPartId = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)out.v + 16i64) + 16i64);
    InstanceCollisionContext->neverMoves = collision->neverMoves;
    v30 = !collision->neverMoves;
    InstanceCollisionContext->model = collision->model;
    forceType = !v30 + 2;
    InstanceCollisionContext->scriptableCollisionMain = Physics_InstantiateAsset(PHYSICS_WORLD_ID_FIRST, collision->model, physicsAsset, refa, &position, &quat, 1, 1, 1, &shapeOverride, (Physics_InstantiationForceType)forceType, Physics_InstantiationFilterTypeNone, 0);
    v38 = collision->model;
    if ( v38 && v38->detailCollision )
    {
      v39 = Physics_InstantiateDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v38, refa, &position, &quat, 1, 1, 0, 1);
      InstanceCollisionContext->scriptableCollisionDetail = v39;
      if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, v39) != 1 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440827B0, 193i64);
    }
    else
    {
      InstanceCollisionContext->scriptableCollisionDetail = Physics_InstantiateAsset(PHYSICS_WORLD_ID_SERVER_DETAIL, v38, physicsAsset, refa, &position, &quat, 1, 1, 1, &shapeOverride, (Physics_InstantiationForceType)forceType, Physics_InstantiationFilterTypeNone, 0);
    }
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, 624146387);
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, 624146387);
    ScriptableCommon_AssertCountsInitialized();
    v41 = Scriptable_Analytics_Zone_SC_Clipmap_S;
    if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
      v41 = Scriptable_Analytics_Zone_SC_Reserved_S;
    Scriptable_Analytics_AddCollisionInstanceCount(v41, 1);
    if ( collision->aiObstacle )
    {
      if ( BrushModel )
      {
        if ( BrushModel->navObstacleIdx == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 523, ASSERT_TYPE_ASSERT, "( clipmapModel->navObstacleIdx != NAV_INVALID_CMOD_OBS_IDX )", (const char *)&queryFormat, "clipmapModel->navObstacleIdx != NAV_INVALID_CMOD_OBS_IDX") )
          __debugbreak();
        NumObstacleBounds = Nav_GetNumObstacleBounds();
        navObstacleIdx = BrushModel->navObstacleIdx;
        if ( navObstacleIdx < NumObstacleBounds )
        {
          ObstacleBounds = Nav_GetObstacleBounds(navObstacleIdx);
          v45 = ObstacleBounds;
          if ( ObstacleBounds )
          {
            if ( ObstacleBounds->m_NumHulls > 0 )
            {
              UniqueObstacleID = Nav_GetUniqueObstacleID();
              MostLikelySpace = Nav_FindMostLikelySpace(&position, NAV_LAYER_HUMAN, NULL);
              if ( MostLikelySpace || (MostLikelySpace = Nav_GetDefaultSpace()) != NULL )
              {
                v61.m_penaltyMult = FLOAT_15_0;
                *(_QWORD *)&v61.m_layerMask = 0xFFFFFFFFi64;
                v61.m_obstacleBlockageFlags = -8066;
                *(_OWORD *)&v61.m_userData = 0ui64;
                if ( v45->m_NumHulls > 0 )
                {
                  v48 = 0i64;
                  do
                  {
                    m_Hulls = v45->m_Hulls;
                    QuatToAxis(&quat, &axis);
                    MatrixTransformVector(&m_Hulls[v48].m_Offset, &axis, &out);
                    out.v[0] = out.v[0] + position.v[0];
                    out.v[1] = out.v[1] + position.v[1];
                    out.v[2] = out.v[2] + position.v[2];
                    v30 = !m_Hulls[v48].m_bUseBounds;
                    v64 = v61;
                    if ( v30 )
                    {
                      Nav_CreateObstacle(MostLikelySpace, &out, &quat, m_Hulls[v48].m_Boundaries, m_Hulls[v48].m_NumBoundaries, UniqueObstacleID, 0, &v64);
                    }
                    else
                    {
                      v51 = LODWORD(FLOAT_2_0);
                      *(float *)&v51 = 2.0 * m_Hulls[v48].m_BoundsX;
                      _XMM4 = v51;
                      v63 = 2.0 * m_Hulls[v48].m_BoundsZ;
                      v60.m_height = v63;
                      __asm { vunpcklps xmm0, xmm4, xmm3 }
                      *(double *)&v60.m_length = *(double *)&_XMM0;
                      Nav_CreateObstacle(MostLikelySpace, &out, &quat, &v60, UniqueObstacleID, 0, &v64);
                    }
                    ++v5;
                    ++v48;
                  }
                  while ( v5 < v45->m_NumHulls );
                }
                InstanceCollisionContext->navmeshObstacleId = UniqueObstacleID;
              }
            }
          }
        }
      }
      else if ( collision->model )
      {
        def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
        if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 584, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
          __debugbreak();
        if ( (def->flags & 0x180000) != 0 )
        {
          v54 = AngleDelta(*(const float *)(*(_QWORD *)&v60.m_length + 48i64), *(const float *)(*(_QWORD *)&v60.m_length + 24i64));
          LODWORD(v55) = LODWORD(v54) & _xmm;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_doorNavObstacleAngle, "doorNavObstacleAngle");
          if ( v55 >= *(float *)&Float_Internal_DebugName )
            InstanceCollisionContext->navmeshObstacleId = ScriptableSv_CreateModelNavObstacle(scriptableIndex);
        }
      }
    }
    return;
  }
  if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 464, ASSERT_TYPE_ASSERT, "( clipmapModel )", (const char *)&queryFormat, "clipmapModel") )
    __debugbreak();
  shapeOverride.shapeOverride = BrushModel->physicsShapeOverrideIdx;
  physicsAsset = BrushModel->physicsAsset;
  InstanceCollisionContext->clipmapCModelIndex = collision->clipmapCModelIndex;
  if ( physicsAsset )
    goto LABEL_76;
  v40 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( v40->def )
    v9 = v40->def->name;
  Com_PrintWarning(29, "Scriptable %s is using a collision event with a clipmap that has no physicsAsset\n", v9);
}

/*
==============
ScriptableSv_RunStateEventDisablePhysicsSubShape
==============
*/
void ScriptableSv_RunStateEventDisablePhysicsSubShape(ScriptableEventParams *eventParams, const ScriptableEventDisablePhysicsSubShapeDef *disablePhysicsSubShape)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  G_PhysicsObject *v6; 
  unsigned int v7; 
  const char *mutableShapeName; 
  ScriptableInstanceContext *v9; 
  const char *name; 
  const char *v11; 
  ScriptableInstanceContext *v12; 
  const char *v13; 
  unsigned int RigidBodyID; 
  int v15; 
  const char *v16; 
  ScriptableInstanceContext *v17; 
  const char *v18; 
  __int64 v19; 
  unsigned __int16 shapeInstanceId; 
  int bodyIdx; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 823, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 826, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v6 = G_PhysicsObject_Get(InstanceCommonContext->linkedObjectIndex);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 831, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v7 = v6->physicsInstances[0];
  if ( v7 == -1 )
  {
    if ( !disablePhysicsSubShape->allowMissingShape )
    {
      mutableShapeName = disablePhysicsSubShape->mutableShapeName;
      v9 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v9->def )
        name = v9->def->name;
      else
        name = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082D70, 199i64, name, mutableShapeName);
    }
  }
  else
  {
    Physics_DecodeSubShapeKey(PHYSICS_WORLD_ID_FIRST, v7, disablePhysicsSubShape->mutableShapeHash, &bodyIdx, &shapeInstanceId);
    if ( bodyIdx >= 0 )
    {
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v7, bodyIdx);
      if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
      {
        if ( !disablePhysicsSubShape->allowMissingShape )
        {
          v15 = bodyIdx;
          v16 = disablePhysicsSubShape->mutableShapeName;
          v17 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v17->def )
            v18 = v17->def->name;
          else
            v18 = "<Unknown>";
          LODWORD(v19) = v15;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082E70, 201i64, v18, v16, v19);
        }
      }
      else
      {
        Physics_EnableShapeInstance(PHYSICS_WORLD_ID_FIRST, RigidBodyID, shapeInstanceId, 0);
      }
    }
    else if ( !disablePhysicsSubShape->allowMissingShape )
    {
      v11 = disablePhysicsSubShape->mutableShapeName;
      v12 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v12->def )
        v13 = v12->def->name;
      else
        v13 = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082DF0, 200i64, v13, v11);
    }
  }
}

/*
==============
ScriptableSv_RunStateEventExplosion
==============
*/
void ScriptableSv_RunStateEventExplosion(ScriptableEventParams *eventParams, const ScriptableEventExplosionDef *explosion)
{
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  float radius; 
  ScriptableInstanceContext *InstanceCommonContext; 
  bool v8; 
  const ScriptableInstanceContextSecure *v9; 
  const DObj *ServerDObjForEnt; 
  scr_string_t scrTagName; 
  const XModel *ScriptableModel; 
  const char *name; 
  const char *tagName; 
  ScriptableInstanceContext *v15; 
  const char *v16; 
  const char *v17; 
  ScriptableInstanceContext *v18; 
  const char *v19; 
  gentity_s *v20; 
  unsigned int v21; 
  unsigned __int16 number; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  gentity_s *v32; 
  const char **p_szInternalName; 
  GCombat *v34; 
  __int64 v35; 
  vec3_t *impulse; 
  int impulsea; 
  __int64 v38; 
  unsigned __int8 inOutIndex[4]; 
  unsigned int outEntNum; 
  int modelIndex[2]; 
  const ScriptableEventExplosionDef *v42; 
  vec3_t origin; 
  Weapon forceScale; 
  Weapon outTagMat; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  v42 = explosion;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1000, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(impulse) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", impulse, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    radius = explosion->radius;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    v8 = explosion->scrTagName == 0;
    v9 = InstanceCommonContext;
    origin = InstanceCommonContext->origin;
    if ( !v8 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
      if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1025, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
        __debugbreak();
      scrTagName = explosion->scrTagName;
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_25(ServerDObjForEnt, scrTagName, inOutIndex, modelIndex) )
      {
        G_Utils_DObjGetWorldBoneIndexMatrix(Entity, inOutIndex[0], (tmat43_t<vec3_t> *)&outTagMat);
        origin = *(vec3_t *)&outTagMat.attachmentVariationIndices[9];
      }
      else if ( explosion->allowMissingTag )
      {
        if ( !explosion->useRootOnMissingTag )
          return;
      }
      else
      {
        ScriptableModel = BG_XCompositeModel_GetScriptableModel(v9);
        if ( ScriptableModel )
        {
          name = ScriptableModel->name;
          tagName = explosion->tagName;
          v15 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v15->def )
            v16 = v15->def->name;
          else
            v16 = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082BF0, 205i64, v16, tagName, name);
        }
        else
        {
          v17 = explosion->tagName;
          v18 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v18->def )
            v19 = v18->def->name;
          else
            v19 = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082C50, 206i64, v19, v17);
        }
      }
    }
    BG_BuildExplosionDamageRangeInfo_Interpolated(explosion->dmgInner, explosion->dmgOuter, radius, &outDamageRangeInfo);
    *(_QWORD *)modelIndex = ScriptableSv_GetEntity(scriptableIndex);
    v20 = *(gentity_s **)modelIndex;
    if ( ScriptableSv_GetDamageOwner(scriptableIndex, &outEntNum) )
    {
      v21 = outEntNum;
      if ( outEntNum >= 0x800 )
      {
        LODWORD(v38) = 2048;
        LODWORD(impulse) = outEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1073, ASSERT_TYPE_ASSERT, "(unsigned)( damageOwnerEntNum ) < (unsigned)( ( 2048 ) )", "damageOwnerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
        v21 = outEntNum;
      }
      v20 = &g_entities[v21];
    }
    while ( 1 )
    {
      number = v20->r.ownerNum.number;
      if ( !number )
        break;
      v23 = number;
      v24 = number - 1;
      if ( v24 >= 0x800 )
      {
        LODWORD(v38) = 2048;
        LODWORD(impulse) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v25 = v23 - 1;
      if ( g_entities[v25].r.isInUse != g_entityIsInUse[v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v25] )
      {
        LODWORD(v38) = v20->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v38) )
          __debugbreak();
      }
      v26 = v20->r.ownerNum.number;
      if ( !v26 )
        break;
      if ( (unsigned int)v26 - 1 >= 0x7FF )
      {
        LODWORD(v38) = 2047;
        LODWORD(impulse) = v26 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
      }
      v27 = v20->r.ownerNum.number;
      if ( (unsigned int)(v27 - 1) >= 0x800 )
      {
        LODWORD(v38) = 2048;
        LODWORD(impulse) = v27 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v28 = v27 - 1;
      if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v28] )
      {
        LODWORD(v38) = v20->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v38) )
          __debugbreak();
      }
      v29 = v20->r.ownerNum.number;
      if ( &g_entities[v29 - 1] == v20 )
        break;
      if ( (unsigned int)(v29 - 1) >= 0x7FF )
      {
        LODWORD(v38) = 2047;
        LODWORD(impulse) = v29 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
      }
      v30 = v20->r.ownerNum.number;
      if ( (unsigned int)(v30 - 1) >= 0x800 )
      {
        LODWORD(v38) = 2048;
        LODWORD(impulse) = v30 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v38) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v31 = v30 - 1;
      if ( g_entities[v31].r.isInUse != g_entityIsInUse[v31] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v31] )
      {
        LODWORD(v38) = v20->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v38) )
          __debugbreak();
      }
      v20 = &g_entities[v20->r.ownerNum.number - 1];
    }
    v32 = *(gentity_s **)modelIndex;
    *(_DWORD *)&forceScale.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    p_szInternalName = &v42->weapon->szInternalName;
    memset(&forceScale, 0, 48);
    *(double *)&forceScale.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    if ( p_szInternalName && *p_szInternalName )
      forceScale = *G_Weapon_GetWeaponForName(&outTagMat, *p_szInternalName);
    level.bPlayerIgnoreRadiusDamage = level.bPlayerIgnoreRadiusDamageLatched;
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v34 = GCombat::ms_gCombatSystem;
    *(float *)&impulse = FLOAT_1_0;
    ((void (__fastcall *)(GCombat *, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, vec3_t *, _QWORD, gentity_s *, int, Weapon *, _BYTE, _BYTE, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, &origin, v32, v20, &outDamageRangeInfo, impulse, 0i64, v32, 16, &forceScale, 0, 0, 1);
    level.bPlayerIgnoreRadiusDamage = 0;
    LOBYTE(impulsea) = 0;
    ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, Weapon *, int))v34->NotifyRadiusDamage)(v34, &origin, v35, v20, &forceScale, impulsea);
    G_Vehicle_ExplosionEvent(&origin, 0.0, radius * 0.99000001, 0, radius * 0.0099999998, NULL);
  }
}

/*
==============
ScriptableSv_RunStateEventHideShowBone
==============
*/
void ScriptableSv_RunStateEventHideShowBone(ScriptableEventParams *eventParams, const ScriptableEventHideShowBoneDef *hideShowBone)
{
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  const char *v6; 
  DObj *ServerDObjForEnt; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  ScriptableInstanceContext *v10; 
  scr_string_t scrTagName; 
  const ScriptableInstanceContextSecure *v12; 
  const XModel *ScriptableModel; 
  const char *v14; 
  const char *tagName; 
  ScriptableInstanceContext *v16; 
  const char *v17; 
  ScriptableInstanceContext *v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  unsigned __int8 childIndex; 
  unsigned __int8 inOutIndex[3]; 
  int modelIndex; 
  DObjPartBits partBits; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 744, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v6 = "<Unknown>";
    ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
    if ( !ServerDObjForEnt )
    {
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082B80, 196i64, name);
    }
    v10 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    scrTagName = hideShowBone->scrTagName;
    inOutIndex[0] = -2;
    v12 = v10;
    if ( !DObjGetBoneIndexInternal_25(ServerDObjForEnt, scrTagName, inOutIndex, &modelIndex) )
    {
      if ( hideShowBone->allowMissingTag )
        return;
      ScriptableModel = BG_XCompositeModel_GetScriptableModel(v12);
      if ( ScriptableModel )
      {
        v14 = ScriptableModel->name;
        tagName = hideShowBone->tagName;
        v16 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v16->def )
          v6 = v16->def->name;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082BF0, 5817i64, v6, tagName, v14);
      }
      else
      {
        v17 = hideShowBone->tagName;
        v18 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v18->def )
          v6 = v18->def->name;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082C50, 5818i64, v6, v17);
      }
    }
    DObjGetHidePartBits(ServerDObjForEnt, &partBits);
    if ( hideShowBone->hide )
    {
      bitarray_base<bitarray<256>>::setBit(&partBits, inOutIndex[0]);
      if ( hideShowBone->hideShowChildren )
      {
        v19 = inOutIndex[0];
        childIndex = -2;
        if ( DObjGetNextChildBoneIndex(ServerDObjForEnt, inOutIndex[0], &childIndex) )
        {
          do
            partBits.array[(unsigned __int64)childIndex >> 5] |= 0x80000000 >> (childIndex & 0x1F);
          while ( DObjGetNextChildBoneIndex(ServerDObjForEnt, v19, &childIndex) );
        }
      }
    }
    else
    {
      v20 = inOutIndex[0];
      partBits.array[(unsigned __int64)inOutIndex[0] >> 5] &= ~(0x80000000 >> (inOutIndex[0] & 0x1F));
      if ( hideShowBone->hideShowChildren )
      {
        for ( childIndex = -2; DObjGetNextChildBoneIndex(ServerDObjForEnt, v20, &childIndex); partBits.array[(unsigned __int64)childIndex >> 5] &= ~(0x80000000 >> (childIndex & 0x1F)) )
          ;
      }
    }
    DObjSetHidePartBits(ServerDObjForEnt, &partBits);
  }
}

/*
==============
ScriptableSv_RunStateEventModel
==============
*/
void ScriptableSv_RunStateEventModel(ScriptableEventParams *eventParams, const ScriptableEventModelDef *model)
{
  ScriptableDataType dataType; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  bool v7; 
  char v8; 
  const gentity_s *Entity; 
  unsigned int runtimeInstanceCount; 
  DObj *ServerDObjForEnt; 
  const DObj *v12; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 215, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 216, ASSERT_TYPE_ASSERT, "( model )", (const char *)&queryFormat, "model") )
    __debugbreak();
  dataType = model->dataType;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 222, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v7 = InstanceCommonContext->data.compositeModel != model->data.compositeModel;
  if ( *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) >> 7 != model->dynamicSimulation )
    v7 = 1;
  v8 = v7 || ((*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x40) != 0) != model->neverMoves;
  if ( !ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
LABEL_24:
    if ( !v8 )
      return;
    goto LABEL_25;
  }
  Entity = ScriptableSv_GetEntity(scriptableIndex);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(Entity) < runtimeInstanceCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082080, 191i64, InstanceCommonContext->def->name);
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  v12 = ServerDObjForEnt;
  if ( !ServerDObjForEnt || !ServerDObjForEnt->numModels )
    v8 = 1;
  if ( v8 )
    goto LABEL_25;
  if ( dataType != SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
  {
    if ( *ServerDObjForEnt->models != model->data.model )
      v8 = 1;
    goto LABEL_24;
  }
  if ( ServerDObjForEnt->numModels == GetSubmodelCountRecursive(model->data.compositeModel) )
  {
    v8 = !BG_XCompositeModel_AreSubmodelsIdentical(v12, model->data.compositeModel);
    goto LABEL_24;
  }
LABEL_25:
  InstanceCommonContext->dataType = (dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL) + 1;
  InstanceCommonContext->data.compositeModel = model->data.compositeModel;
  *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) ^= (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) ^ (model->neverMoves << 6)) & 0x40;
  *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) = (model->dynamicSimulation << 7) | *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x7F;
  ScriptableSv_UpdateModel(scriptableIndex, 1, model->activatePhysics);
}

/*
==============
ScriptableSv_RunStateEventMove
==============
*/
void ScriptableSv_RunStateEventMove(ScriptableEventParams *eventParams, const ScriptableEventMoveDef *moveDef)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  Scriptable_EventMove_Data *Data; 
  ScriptableInstanceContext *v7; 
  const char *name; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  double v16; 
  double v17; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  unsigned int scriptableCollisionDetail; 
  const XModel *ScriptableModel; 
  GAntiLag *v22; 
  vec3_t out_endOrigin; 
  vec3_t out_endAngles; 
  vec4_t quat; 
  BgAntiLagLerpMoverCmd out_cmd; 

  if ( (!eventParams || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1943, ASSERT_TYPE_ASSERT, "( eventParams && moveDef )", (const char *)&queryFormat, "eventParams && moveDef") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  Data = ScriptableSv_StateEventMoveGetData(InstanceCommonContext, moveDef);
  if ( (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) != 0 )
  {
    v7 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v7->def )
      name = v7->def->name;
    else
      name = "<Unknown>";
    Com_PrintError(29, "ScriptableSv RunStateEventMove: Scriptable is parented to entity, can't execute moveto. Index %i '%s'\n", scriptableIndex, name);
    Data->startTime = 0;
  }
  else
  {
    ScriptableBg_LerpCalcEndPoints(&InstanceCommonContext->originInitial, &InstanceCommonContext->anglesInitial, moveDef, &out_endOrigin, &out_endAngles);
    v9 = InstanceCommonContext->origin.v[0];
    v10 = InstanceCommonContext->origin.v[1];
    v11 = InstanceCommonContext->origin.v[2];
    v12 = InstanceCommonContext->angles.v[0];
    v13 = InstanceCommonContext->angles.v[1];
    v14 = InstanceCommonContext->angles.v[2];
    if ( out_endOrigin.v[0] == v9 && out_endOrigin.v[1] == v10 && out_endOrigin.v[2] == v11 && (v15 = AngleDelta(out_endAngles.v[0], InstanceCommonContext->angles.v[0]), COERCE_FLOAT(LODWORD(v15) & _xmm) <= 0.00000011920929) && (v16 = AngleDelta(out_endAngles.v[1], v13), COERCE_FLOAT(LODWORD(v16) & _xmm) <= 0.00000011920929) && (v17 = AngleDelta(out_endAngles.v[2], v14), COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.00000011920929) )
    {
      Data->startTime = 0;
      ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, &out_endOrigin, &out_endAngles, 1);
    }
    else if ( moveDef->seconds == 0.0 )
    {
      Data->startTime = 0;
      InstanceCommonContext->origin = out_endOrigin;
      InstanceCommonContext->angles = out_endAngles;
      InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
      scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
      scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
      if ( InstanceCollisionContext->scriptableCollisionMain != -1 || scriptableCollisionDetail != -1 )
      {
        AnglesToQuat(&out_endAngles, &quat);
        if ( scriptableCollisionMain != -1 )
          ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, &out_endOrigin, &quat, WARP);
        if ( scriptableCollisionDetail != -1 )
          ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, &out_endOrigin, &quat, WARP);
      }
      ScriptableSv_UpdateNavObstacle(scriptableIndex);
    }
    else
    {
      Data->startTime = level.time;
      Data->startOrigin.v[0] = v9;
      Data->startOrigin.v[1] = v10;
      Data->startOrigin.v[2] = v11;
      Data->startAngles.v[0] = v12;
      Data->startAngles.v[1] = v13;
      Data->startAngles.v[2] = v14;
      if ( ScriptableSv_GetInstanceCollisionContext(scriptableIndex)->canPush )
      {
        ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
        ScriptableBg_SetupAntilagCommand(&out_cmd, scriptableIndex, &ScriptableModel->bounds, Data->startTime, &Data->startOrigin, &Data->startAngles, &out_endOrigin, &out_endAngles, moveDef);
        if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
          __debugbreak();
        v22 = GAntiLag::ms_gAntiLagData;
        if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1995, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
          __debugbreak();
        BgAntiLag::AddLerpMoverCommand(v22, &out_cmd);
      }
    }
  }
}

/*
==============
ScriptableSv_RunStateEventPartDamage
==============
*/
void ScriptableSv_RunStateEventPartDamage(ScriptableEventParams *eventParams, const ScriptableEventPartDamageDef *partDamage)
{
  ScriptablePartDef *part; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  unsigned int amount; 
  gentity_s *Entity; 
  const ScriptableDamageEvent *damageEvent; 
  ScriptableInstanceContext *v11; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v13; 
  __int64 v14; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  const ScriptableDef *def; 
  int number; 
  unsigned int v23; 
  gentity_s *v24; 
  __int64 v25; 
  gentity_s *v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  scr_string_t scrName; 
  int v34; 
  unsigned int v35; 
  __int64 v36; 
  __int16 v37; 
  int v38; 

  part = partDamage->part;
  if ( !part && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1195, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1197, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( (part->flags & 0x100) == 0 )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<Unknown>";
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144083140, 207i64, name);
  }
  amount = (int)partDamage->amount;
  if ( partDamage->destroy )
  {
    amount = -1;
  }
  else if ( !amount )
  {
    goto LABEL_19;
  }
  v18 = 0;
  Entity = ScriptableSv_GetEntity(scriptableIndex);
  v20 = 0i64;
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  v19 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v16) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1231, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvent.scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "damageEvent.scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v16, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  number = Entity->s.number;
  v23 = v19;
  v24 = Entity;
  LODWORD(v25) = Entity->s.number;
  scrName = part->scrName;
  v26 = Entity;
  damageEvent = eventParams->damageEvent;
  eventParams->damageEvent = (const ScriptableDamageEvent *)&v18;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v34 = 0;
  v35 = amount;
  v36 = 0i64;
  v37 = 0;
  v38 = 0;
  ScriptableBg_DamagePart(eventParams, part, 0x41u, amount);
  eventParams->damageEvent = damageEvent;
LABEL_19:
  if ( partDamage->amountDoT > 0.0 )
  {
    if ( partDamage->intervalDoT <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1264, ASSERT_TYPE_ASSERT, "( partDamage->intervalDoT > 0.f )", (const char *)&queryFormat, "partDamage->intervalDoT > 0.f") )
      __debugbreak();
    v11 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    eventStreamBufferOffsetServer = partDamage->eventStreamBufferOffsetServer;
    v13 = v11;
    v14 = eventStreamBufferOffsetServer;
    eventStreamBufferSize = v11->eventStreamBufferSize;
    if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
    {
      LODWORD(v17) = eventStreamBufferSize;
      LODWORD(v16) = eventStreamBufferOffsetServer + 4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1270, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v16, v17) )
        __debugbreak();
    }
    *(float *)&v13->eventStreamBuffer[v14] = partDamage->intervalDoT;
  }
}

/*
==============
ScriptableSv_RunStateEventScriptDamage
==============
*/
void ScriptableSv_RunStateEventScriptDamage(ScriptableEventParams *eventParams, const ScriptableEventScriptDef *script)
{
  const ScriptableDamageEvent *damageEvent; 
  int scriptableIndex; 
  scrContext_t *v5; 
  int mod; 
  int dFlags; 
  const gentity_s *v8; 
  int modelIndex; 
  scr_string_t partName; 
  __int64 inflictorEntNum; 
  const gentity_s *v12; 
  GameScriptData *GameScriptDataCommon; 
  unsigned int v14; 
  int value; 
  int damage; 
  float v17[4]; 
  float v18[4]; 

  damageEvent = eventParams->damageEvent;
  scriptableIndex = eventParams->scriptableIndex;
  if ( damageEvent )
  {
    v5 = ScriptContext_Server();
    mod = damageEvent->mod;
    dFlags = damageEvent->dFlags;
    damage = damageEvent->damage;
    v8 = &g_entities[damageEvent->attackerEntNum];
    modelIndex = damageEvent->modelIndex;
    v17[0] = damageEvent->end.v[0];
    v17[1] = damageEvent->end.v[1];
    v17[2] = damageEvent->end.v[2];
    v18[0] = damageEvent->end.v[0] - damageEvent->start.v[0];
    v18[1] = damageEvent->end.v[1] - damageEvent->start.v[1];
    v18[2] = damageEvent->end.v[2] - damageEvent->start.v[2];
    partName = damageEvent->partName;
    value = modelIndex;
    inflictorEntNum = damageEvent->inflictorEntNum;
    if ( (unsigned int)inflictorEntNum > 0x7FE )
      v12 = NULL;
    else
      v12 = &g_entities[inflictorEntNum];
    if ( partName )
      Scr_AddConstString(v5, partName);
    else
      Scr_AddUndefined(v5);
    Scr_AddInt(v5, value);
    Scr_AddVector(v5, v17);
    Scr_AddVector(v5, v18);
    GScr_Weapon_AddParam(v5, &damageEvent->weapon, damageEvent->isAlternate == 1);
    Scr_AddInt(v5, mod);
    Scr_AddInt(v5, dFlags);
    Scr_AddInt(v5, damage);
    Scr_AddEntityNum(v5, scriptableIndex, ENTITY_CLASS_SCRIPTABLE);
    GScr_AddEntity(v8);
    if ( v12 )
      GScr_AddEntity(v12);
    else
      Scr_AddUndefined(v5);
    Scr_AddInt(v5, script->param);
    Scr_AddConstString(v5, script->scrNotification);
    GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
    if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2284, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    v14 = Scr_ExecThread(v5, GameScriptDataCommon->riotshield_damaged, 0xDu);
    Scr_FreeThread(v5, v14);
  }
}

/*
==============
ScriptableSv_RunStateEventsFrom
==============
*/
void ScriptableSv_RunStateEventsFrom(const unsigned int scriptableIndex, const ScriptablePartDef *part, unsigned int nextEvent, unsigned int *holdrand)
{
  __int64 v4; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v9; 
  __int64 v10; 
  __int64 v11; 
  ScriptableEventParams outParams; 

  v4 = nextEvent;
  ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2576, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= part->numStates )
  {
    LODWORD(v10) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2577, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part->numStates )", "runtime->stateId doesn't index part->numStates\n\t%i not in [0, %i)", v10, part->numStates) )
      __debugbreak();
  }
  v9 = &part->states[PartRuntime->stateId];
  if ( (unsigned int)v4 >= v9->base.numEvents )
  {
    LODWORD(v11) = v9->base.numEvents;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2580, ASSERT_TYPE_ASSERT, "(unsigned)( nextEvent ) < (unsigned)( stateDef->base.numEvents )", "nextEvent doesn't index stateDef->base.numEvents\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  ScriptableSv_RunStateEvents(&outParams, holdrand, &v9->base.events[v4], v9->base.numEvents - v4);
}

/*
==============
ScriptableSv_SetPose
==============
*/
void ScriptableSv_SetPose(const unsigned int scriptableIndex, ScriptableInstanceContext *r_context, const vec3_t *origin, const vec3_t *angles, bool warp)
{
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  unsigned int scriptableCollisionDetail; 
  vec4_t quat; 

  r_context->origin = *origin;
  r_context->angles = *angles;
  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
  scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
  if ( *(_QWORD *)&InstanceCollisionContext->scriptableCollisionMain != -1i64 )
  {
    AnglesToQuat(angles, &quat);
    if ( scriptableCollisionMain != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, origin, &quat, (Scriptable_PhysicsSetPoseCmd)warp);
    if ( scriptableCollisionDetail != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, origin, &quat, WARP);
  }
}

/*
==============
ScriptableSv_ShutdownActiveEvents
==============
*/
void ScriptableSv_ShutdownActiveEvents(ScriptableEventParams *eventParams)
{
  unsigned int scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  const ScriptablePartDef *partDef; 
  __int64 v5; 
  unsigned int serverInstanceFlatId; 
  __int64 v7; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2848, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2853, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= eventParams->partDef->numStates )
  {
    LODWORD(v7) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2854, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( eventParams->partDef->numStates )", "runtime->stateId doesn't index eventParams->partDef->numStates\n\t%i not in [0, %i)", v7, eventParams->partDef->numStates) )
      __debugbreak();
  }
  partDef = eventParams->partDef;
  v5 = (__int64)&partDef->states[PartRuntime->stateId];
  if ( *(_DWORD *)(v5 + 24) == 3 )
  {
    serverInstanceFlatId = partDef->serverInstanceFlatId;
    if ( serverInstanceFlatId >= 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2621, ASSERT_TYPE_ASSERT, "( partId < 0xff )", (const char *)&queryFormat, "partId < UCHAR_MAX") )
      __debugbreak();
    if ( scriptableIndex < 0xFDE8 )
      G_PlayerUse_SetObjectUsable(scriptableIndex, USE_CLASS_SCRIPTABLE, serverInstanceFlatId, 0);
  }
  ScriptableSv_StopStateEvents(eventParams, *(ScriptableEventDef **)(v5 + 16), *(_DWORD *)(v5 + 12));
}

/*
==============
ScriptableSv_StateEventGravityArcGetData
==============
*/
unsigned __int8 *ScriptableSv_StateEventGravityArcGetData(ScriptableInstanceContext *const context, const ScriptableEventGravityArcDef *const def)
{
  __int64 eventStreamBufferOffsetServer; 

  if ( (!context || !def) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2057, ASSERT_TYPE_ASSERT, "( context && def )", (const char *)&queryFormat, "context && def") )
    __debugbreak();
  eventStreamBufferOffsetServer = def->eventStreamBufferOffsetServer;
  if ( eventStreamBufferOffsetServer + 4 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2060, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( int ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( int ) <= context->eventStreamBufferSize") )
    __debugbreak();
  return &context->eventStreamBuffer[eventStreamBufferOffsetServer];
}

/*
==============
ScriptableSv_StateEventMoveGetData
==============
*/
Scriptable_EventMove_Data *ScriptableSv_StateEventMoveGetData(ScriptableInstanceContext *const context, const ScriptableEventMoveDef *const moveDef)
{
  __int64 eventStreamBufferOffsetServer; 

  if ( (!context || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1881, ASSERT_TYPE_ASSERT, "( context && moveDef )", (const char *)&queryFormat, "context && moveDef") )
    __debugbreak();
  if ( moveDef->seconds <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1882, ASSERT_TYPE_ASSERT, "( moveDef->seconds > 0.0f )", (const char *)&queryFormat, "moveDef->seconds > 0.0f") )
    __debugbreak();
  eventStreamBufferOffsetServer = moveDef->eventStreamBufferOffsetServer;
  if ( eventStreamBufferOffsetServer + 28 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1885, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventMove_Data ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventMove_Data ) <= context->eventStreamBufferSize") )
    __debugbreak();
  return (Scriptable_EventMove_Data *)&context->eventStreamBuffer[eventStreamBufferOffsetServer];
}

/*
==============
ScriptableSv_StateEventMovePhysicsClearVelocity
==============
*/
void ScriptableSv_StateEventMovePhysicsClearVelocity(const unsigned int scriptableIndex)
{
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionDetail; 

  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  if ( InstanceCollisionContext->scriptableCollisionMain != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain);
  scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
  if ( scriptableCollisionDetail != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_SERVER_DETAIL, scriptableCollisionDetail);
}

/*
==============
ScriptableSv_StopStateEventAddModel
==============
*/
void ScriptableSv_StopStateEventAddModel(ScriptableEventParams *eventParams, const ScriptableEventAddModelDef *addModel)
{
  GUtils *v4; 
  unsigned int scriptableIndex; 
  gentity_s *Entity; 
  entityType_s eType; 
  scrContext_t *v8; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  const char *v11; 
  scr_string_t scrTagName; 
  bool IsLinkingEnabled; 

  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
  {
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    v4 = GUtils::ms_gUtils;
    if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2732, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
      __debugbreak();
    scriptableIndex = eventParams->scriptableIndex;
    if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
    {
      Entity = ScriptableSv_GetEntity(scriptableIndex);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || (eType = Entity->s.eType, ((eType - 1) & 0xFFEB) == 0) && eType != ET_ACTOR_CORPSE )
      {
        if ( BG_IsRagdollTrajectory(&Entity->s.lerp.pos) && g_scriptableSv_shutdownIndex != scriptableIndex )
        {
          v8 = ScriptContext_Server();
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( InstanceCommonContext->def )
            name = InstanceCommonContext->def->name;
          else
            name = "<Unknown>";
          v11 = j_va("Scriptable %s tried to remove a model, but the entity is in the ragdoll state", name);
          Scr_Error(COM_ERR_2028, v8, v11);
        }
        scrTagName = addModel->scrTagName;
        if ( !scrTagName )
          scrTagName = scr_const._;
        IsLinkingEnabled = ScriptableSv_IsLinkingEnabled();
        if ( IsLinkingEnabled )
          ScriptableSv_DisableLinking(1);
        v4->EntDetach(v4, Entity, addModel->model->name, scrTagName);
        if ( IsLinkingEnabled )
          ScriptableSv_DisableLinking(0);
      }
    }
  }
}

/*
==============
ScriptableSv_StopStateEventDisablePhysicsSubShape
==============
*/
void ScriptableSv_StopStateEventDisablePhysicsSubShape(ScriptableEventParams *eventParams, const ScriptableEventDisablePhysicsSubShapeDef *disablePhysicsSubShape)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  G_PhysicsObject *v6; 
  unsigned int v7; 
  const char *mutableShapeName; 
  ScriptableInstanceContext *v9; 
  const char *name; 
  const char *v11; 
  ScriptableInstanceContext *v12; 
  const char *v13; 
  unsigned int RigidBodyID; 
  int v15; 
  const char *v16; 
  ScriptableInstanceContext *v17; 
  const char *v18; 
  __int64 v19; 
  unsigned __int16 shapeInstanceId; 
  int bodyIdx; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 876, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 879, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v6 = G_PhysicsObject_Get(InstanceCommonContext->linkedObjectIndex);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 884, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v7 = v6->physicsInstances[0];
  if ( v7 == -1 )
  {
    if ( !disablePhysicsSubShape->allowMissingShape )
    {
      mutableShapeName = disablePhysicsSubShape->mutableShapeName;
      v9 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v9->def )
        name = v9->def->name;
      else
        name = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082F00, 202i64, name, mutableShapeName);
    }
  }
  else
  {
    Physics_DecodeSubShapeKey(PHYSICS_WORLD_ID_FIRST, v7, disablePhysicsSubShape->mutableShapeHash, &bodyIdx, &shapeInstanceId);
    if ( bodyIdx >= 0 )
    {
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v7, bodyIdx);
      if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
      {
        if ( !disablePhysicsSubShape->allowMissingShape )
        {
          v15 = bodyIdx;
          v16 = disablePhysicsSubShape->mutableShapeName;
          v17 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v17->def )
            v18 = v17->def->name;
          else
            v18 = "<Unknown>";
          LODWORD(v19) = v15;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144083000, 204i64, v18, v16, v19);
        }
      }
      else
      {
        Physics_EnableShapeInstance(PHYSICS_WORLD_ID_FIRST, RigidBodyID, shapeInstanceId, 1);
      }
    }
    else if ( !disablePhysicsSubShape->allowMissingShape )
    {
      v11 = disablePhysicsSubShape->mutableShapeName;
      v12 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v12->def )
        v13 = v12->def->name;
      else
        v13 = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082F80, 203i64, v13, v11);
    }
  }
}

/*
==============
ScriptableSv_StopStateEvents
==============
*/
void ScriptableSv_StopStateEvents(ScriptableEventParams *eventParams, ScriptableEventDef *events, unsigned int numEvents)
{
  Scriptable_EventType *p_type; 
  __int64 v5; 
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  const DObj *ServerDObjForEnt; 
  XAnimTree *Tree; 
  unsigned int v10; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 v12; 
  ScriptableInstanceContext *v13; 
  __int64 v14; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned int v16; 
  ScriptableEventDef *v17; 
  __int64 curveID; 
  __int64 v19; 

  if ( numEvents )
  {
    p_type = &events->type;
    v5 = numEvents;
    do
    {
      switch ( *p_type )
      {
        case Scriptable_EventType_Random:
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(eventParams->scriptableIndex);
          v12 = *((unsigned __int16 *)p_type + 24);
          v13 = InstanceCommonContext;
          v14 = v12;
          eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
          if ( v12 + 4 > eventStreamBufferSize )
          {
            LODWORD(v19) = eventStreamBufferSize;
            LODWORD(curveID) = v12 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2794, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", curveID, v19) )
              __debugbreak();
          }
          if ( v13->eventStreamBuffer[v14] )
          {
            v16 = *((_DWORD *)p_type + 5);
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 3);
          }
          else
          {
            v16 = *((_DWORD *)p_type + 8);
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 5);
          }
          ScriptableSv_StopStateEvents(eventParams, v17, v16);
          break;
        case Scriptable_EventType_Collision:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2658, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          if ( p_type == (Scriptable_EventType *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2659, ASSERT_TYPE_ASSERT, "( collision )", (const char *)&queryFormat, "collision") )
            __debugbreak();
          if ( *((_BYTE *)p_type + 35) )
            ScriptableSv_DestroyCollision(eventParams->scriptableIndex);
          break;
        case Scriptable_EventType_Animation:
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || !*((_BYTE *)p_type + 27) )
          {
            if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2680, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
              __debugbreak();
            scriptableIndex = eventParams->scriptableIndex;
            if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
            {
              Entity = ScriptableSv_GetEntity(scriptableIndex);
              ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
              if ( ServerDObjForEnt )
              {
                Tree = DObjGetTree(ServerDObjForEnt);
                if ( Tree )
                {
                  v10 = *((unsigned __int16 *)p_type + 40);
                  if ( *((_BYTE *)p_type + 26) )
                    XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v10, 0.0);
                  else
                    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v10, *((float *)p_type + 12), LINEAR);
                }
              }
            }
          }
          break;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableSv_StopStateEventDisablePhysicsSubShape(eventParams, (const ScriptableEventDisablePhysicsSubShapeDef *)(p_type + 2));
          break;
        case Scriptable_EventType_AddModel:
          ScriptableSv_StopStateEventAddModel(eventParams, (const ScriptableEventAddModelDef *)(p_type + 2));
          break;
      }
      p_type += 44;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
ScriptableSv_UpdateEvent
==============
*/
void ScriptableSv_UpdateEvent(const float deltaTime, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, unsigned int *holdrand, ScriptableSvUpdateRequest *outRequest)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v15; 
  unsigned __int8 *eventStreamBuffer; 
  float v17; 
  unsigned int v18; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  const ScriptableEventDef *v25; 
  ScriptableEventDef *v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned __int8 *v30; 
  float v31; 
  ScriptableEventDef *eventsB; 
  unsigned int startTimeMin; 
  ScriptableInstanceContext *v34; 
  __int64 v35; 
  ScriptableInstanceContext *v36; 
  __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int8 *v39; 
  float v40; 
  __int64 v41; 
  unsigned int *v42; 
  unsigned int v43[2]; 
  ScriptableEventParams outParams; 
  int v45; 
  unsigned int v46; 
  __int64 v47; 
  const ScriptableDef *def; 
  int v49; 
  unsigned int v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  int flags; 
  int v61; 
  int v62; 
  __int64 v63; 
  __int16 v64; 
  int v65; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  switch ( event->type )
  {
    case Scriptable_EventType_Wait:
      eventStreamBufferOffsetServer = event->data.wait.eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      v15 = eventStreamBufferOffsetServer;
      if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2915, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", eventStreamBufferOffsetServer + 4, eventStreamBufferSize) )
        __debugbreak();
      eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
      v17 = *(float *)&eventStreamBuffer[v15];
      if ( v17 > 0.0 )
      {
        *(float *)&eventStreamBuffer[v15] = v17 - deltaTime;
        if ( (float)(v17 - deltaTime) <= 0.0 )
        {
          *(_DWORD *)&eventStreamBuffer[v15] = 0;
          v18 = eventIdx + 1;
          ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
          PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
          if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2576, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
            __debugbreak();
          if ( PartRuntime->stateId >= part->numStates )
          {
            LODWORD(v42) = part->numStates;
            LODWORD(v41) = PartRuntime->stateId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2577, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part->numStates )", "runtime->stateId doesn't index part->numStates\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          v20 = &part->states[PartRuntime->stateId];
          if ( v18 >= v20->base.numEvents )
          {
            LODWORD(v42) = v20->base.numEvents;
            LODWORD(v41) = eventIdx + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2580, ASSERT_TYPE_ASSERT, "(unsigned)( nextEvent ) < (unsigned)( stateDef->base.numEvents )", "nextEvent doesn't index stateDef->base.numEvents\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          ScriptableSv_RunStateEvents(&outParams, holdrand, &v20->base.events[v18], v20->base.numEvents - v18);
        }
        *outRequest = (ScriptableSvUpdateRequest)257;
      }
      return;
    case Scriptable_EventType_Random:
      v21 = event->data.random.eventStreamBufferOffsetServer;
      v22 = InstanceCommonContext->eventStreamBufferSize;
      v43[0] = event->data.random.eventStreamBufferOffsetServer;
      if ( v21 + 4 > v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2950, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v21 + 4, v22) )
        __debugbreak();
      v23 = InstanceCommonContext->eventStreamBuffer;
      v24 = 0;
      if ( v23[v43[0]] )
      {
        if ( event->data.stateChange.stateIdx )
        {
          while ( 1 )
          {
            v25 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v24);
            if ( (v25->base.flags & 0x200) != 0 )
            {
              ScriptableSv_UpdateEvent(deltaTime, scriptableIndex, part, state, v25, v24, holdrand, outRequest);
              if ( outRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v24 >= event->data.stateChange.stateIdx )
              return;
          }
          if ( !outRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2967, ASSERT_TYPE_ASSERT, "( outRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
LABEL_29:
            __debugbreak();
        }
      }
      else if ( event->data.random.eventBCount )
      {
        while ( 1 )
        {
          v26 = &event->data.random.eventsB[v24];
          if ( (v26->base.flags & 0x200) != 0 )
          {
            ScriptableSv_UpdateEvent(deltaTime, scriptableIndex, part, state, v26, v24, holdrand, outRequest);
            if ( outRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v24 >= event->data.random.eventBCount )
            return;
        }
        if ( !outRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2984, ASSERT_TYPE_ASSERT, "( outRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
          goto LABEL_29;
      }
      return;
    case Scriptable_EventType_Animation:
      if ( event == (const ScriptableEventDef *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2869, ASSERT_TYPE_ASSERT, "( animation )", (const char *)&queryFormat, "animation") )
        __debugbreak();
      if ( !ScriptableSv_GetInstanceHasEntity(scriptableIndex) && !event->data.anonymous.buffer[11] && event->data.animation.eventAtEndCount )
      {
        v34 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        v35 = event->data.animation.eventStreamBufferOffsetServer;
        v36 = v34;
        v37 = v35;
        v38 = v34->eventStreamBufferSize;
        if ( v35 + 4 > v38 )
        {
          LODWORD(v41) = v35 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2882, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v41, v38) )
            __debugbreak();
        }
        v39 = v36->eventStreamBuffer;
        v40 = *(float *)&v39[v37];
        if ( v40 <= 0.0 || (float)((float)level.time * 0.001) < v40 )
          goto LABEL_61;
        *(_DWORD *)&v39[v37] = 0;
        v43[0] = ScriptableSv_GenerateRandSeed(scriptableIndex);
        ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
        ScriptableSv_RunStateEvents(&outParams, v43, event->data.animation.eventsAtEnd, event->data.animation.eventAtEndCount);
      }
      return;
    case Scriptable_EventType_PartDamage:
      if ( event->data.animation.startTimeMin <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2996, ASSERT_TYPE_ASSERT, "( event->data.partDamage.amountDoT > 0.f )", (const char *)&queryFormat, "event->data.partDamage.amountDoT > 0.f") )
        __debugbreak();
      if ( event->data.animation.startTimeMax <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2997, ASSERT_TYPE_ASSERT, "( event->data.partDamage.intervalDoT > 0.f )", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0.f") )
        __debugbreak();
      v27 = event->data.partDamage.eventStreamBufferOffsetServer;
      v28 = InstanceCommonContext->eventStreamBufferSize;
      v29 = v27;
      if ( v27 + 4 > v28 )
      {
        LODWORD(v41) = v27 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3001, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v41, v28) )
          __debugbreak();
      }
      v30 = InstanceCommonContext->eventStreamBuffer;
      if ( *(float *)&v30[v29] > 0.0 )
      {
        outRequest->eventUpdateRequired = 1;
        v31 = *(float *)&v30[v29];
        *(float *)&v30[v29] = v31 - deltaTime;
        while ( *(float *)&v30[v29] <= 0.0 )
        {
          if ( event->data.animation.startTimeMax <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3018, ASSERT_TYPE_ASSERT, "( event->data.partDamage.intervalDoT > 0 )", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0") )
            __debugbreak();
          *(float *)&v30[v29] = *(float *)&v30[v29] + event->data.animation.startTimeMax;
          eventsB = event->data.random.eventsB;
          if ( !eventsB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3025, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
            __debugbreak();
          ScriptableSv_InitEventParams(&outParams, scriptableIndex, (const ScriptablePartDef *)eventsB);
          *(_QWORD *)v43 = ScriptableSv_GetEntity(scriptableIndex);
          v45 = 0;
          v47 = 0i64;
          def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
          v46 = scriptableIndex;
          ScriptableCommon_AssertCountsInitialized();
          if ( v46 >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v42) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(v41) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3047, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvent.scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "damageEvent.scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          startTimeMin = (int)event->data.animation.startTimeMin;
          v49 = (__int16)**(_WORD **)v43;
          v50 = v46;
          v51 = *(_QWORD *)v43;
          v52 = (__int16)**(_WORD **)v43;
          v53 = *(_QWORD *)v43;
          v57 = 0.0;
          v58 = 0.0;
          v59 = 0.0;
          v54 = 0.0;
          v55 = 0.0;
          v56 = 0.0;
          flags = eventsB->base.flags;
          v62 = (int)event->data.animation.startTimeMin;
          outParams.damageEvent = (const ScriptableDamageEvent *)&v45;
          v61 = 0;
          v63 = 0i64;
          v64 = 0;
          v65 = 0;
          ScriptableBg_DamagePart(&outParams, (const ScriptablePartDef *)eventsB, 0x41u, startTimeMin);
        }
      }
      return;
    case Scriptable_EventType_ApplyConstantForce:
      if ( ScriptableSv_UpdateEventApplyConstantForce(scriptableIndex, (const ScriptableEventApplyConstantForceDef *)&event->data, deltaTime) )
LABEL_61:
        outRequest->eventUpdateRequired = 1;
      return;
    case Scriptable_EventType_ApplyConstantAngularForce:
      if ( ScriptableSv_UpdateEventApplyConstantAngularForce(scriptableIndex, (const ScriptableEventApplyConstantAngularForceDef *)&event->data, deltaTime) )
        outRequest->eventUpdateRequired = 1;
      return;
    case Scriptable_EventType_Move:
      ScriptableSv_UpdateStateEventMove(scriptableIndex, (const ScriptableEventMoveDef *const)&event->data, deltaTime, outRequest);
      return;
    case Scriptable_EventType_GravityArc:
      ScriptableSv_UpdateStateEventGravityArc(scriptableIndex, (const ScriptableEventGravityArcDef *const)&event->data, part, deltaTime, outRequest);
      return;
    default:
      return;
  }
}

/*
==============
ScriptableSv_UpdateEventApplyConstantAngularForce
==============
*/
bool ScriptableSv_UpdateEventApplyConstantAngularForce(const unsigned int scriptableIndex, const ScriptableEventApplyConstantAngularForceDef *applyConstantAngularForce, float deltaTime)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  bool result; 
  const gentity_s *Entity; 
  G_PhysicsObject *v12; 
  unsigned int v13; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v16; 
  __int64 v17; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned __int8 *eventStreamBuffer; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  __int128 v31; 
  signed int v34; 
  int NumRigidBodys; 
  unsigned int RigidBodyID; 
  __int64 v37; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 

  result = ScriptableSv_GetInstanceHasEntity(scriptableIndex);
  if ( result )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v12 = G_PhysicsObject_Get(Entity);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1783, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v13 = v12->physicsInstances[0];
    if ( v13 != -1 && Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v13, 0) )
    {
      v45 = v3;
      v44 = v4;
      v43 = v5;
      v42 = v6;
      v41 = v7;
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      eventStreamBufferOffsetServer = applyConstantAngularForce->eventStreamBufferOffsetServer;
      v16 = InstanceCommonContext;
      v17 = eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      if ( eventStreamBufferOffsetServer + 12 > eventStreamBufferSize )
      {
        LODWORD(v37) = eventStreamBufferOffsetServer + 12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1802, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 3 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v37, eventStreamBufferSize) )
          __debugbreak();
      }
      eventStreamBuffer = v16->eventStreamBuffer;
      v20 = *(float *)&eventStreamBuffer[v17];
      v21 = *(float *)&eventStreamBuffer[v17 + 4];
      v22 = *(float *)&eventStreamBuffer[v17 + 8];
      angles = v16->angles;
      AnglesToAxis(&angles, &axis);
      v23 = LODWORD(FLOAT_1_0);
      *(float *)&v23 = (float)((float)(1.0 - v20) * applyConstantAngularForce->forceVector.v[0]) + (float)(v20 * applyConstantAngularForce->forceVector2.v[0]);
      v24 = v23;
      v26 = LODWORD(FLOAT_1_0);
      *(float *)&v26 = (float)((float)(1.0 - v21) * applyConstantAngularForce->forceVector.v[1]) + (float)(v21 * applyConstantAngularForce->forceVector2.v[1]);
      v25 = *(float *)&v26;
      v27 = (float)((float)(1.0 - v22) * applyConstantAngularForce->forceVector.v[2]) + (float)(v22 * applyConstantAngularForce->forceVector2.v[2]);
      if ( applyConstantAngularForce->worldSpace )
      {
        v28 = v24;
        v29 = (float)((float)(1.0 - v21) * applyConstantAngularForce->forceVector.v[1]) + (float)(v21 * applyConstantAngularForce->forceVector2.v[1]);
      }
      else
      {
        *(float *)&v26 = (float)((float)(*(float *)&v26 * axis.m[1].v[0]) + (float)(*(float *)&v24 * axis.m[0].v[0])) + (float)(v27 * axis.m[2].v[0]);
        v28 = v26;
        v29 = (float)((float)(v25 * axis.m[1].v[1]) + (float)(*(float *)&v24 * axis.m[0].v[1])) + (float)(v27 * axis.m[2].v[1]);
        v27 = (float)((float)(v25 * axis.m[1].v[2]) + (float)(*(float *)&v24 * axis.m[0].v[2])) + (float)(v27 * axis.m[2].v[2]);
      }
      v31 = v28;
      *(float *)&v31 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v29 * v29)) + (float)(v27 * v27));
      _XMM3 = v31;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
      }
      torqueVector.v[0] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v28;
      torqueVector.v[2] = (float)(1.0 / *(float *)&_XMM0) * v27;
      torqueVector.v[1] = v29 * (float)(1.0 / *(float *)&_XMM0);
      v34 = 0;
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v13);
      if ( NumRigidBodys > 0 )
      {
        do
        {
          RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v13, v34);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1849, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
            Physics_ApplyAngularImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &torqueVector, deltaTime * *(float *)&v31);
          ++v34;
        }
        while ( v34 < NumRigidBodys );
      }
    }
    return 1;
  }
  return result;
}

/*
==============
ScriptableSv_UpdateEventApplyConstantForce
==============
*/
bool ScriptableSv_UpdateEventApplyConstantForce(const unsigned int scriptableIndex, const ScriptableEventApplyConstantForceDef *applyConstantForce, float deltaTime)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  bool result; 
  const gentity_s *Entity; 
  G_PhysicsObject *v16; 
  unsigned int v17; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v20; 
  __int64 v21; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned __int8 *eventStreamBuffer; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  bool v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  __int128 v44; 
  signed int v47; 
  int NumRigidBodys; 
  unsigned int RigidBodyID; 
  __int64 v50; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 

  result = ScriptableSv_GetInstanceHasEntity(scriptableIndex);
  if ( result )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v16 = G_PhysicsObject_Get(Entity);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1672, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v17 = v16->physicsInstances[0];
    if ( v17 != -1 && Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v17, 0) )
    {
      v63 = v3;
      v62 = v4;
      v61 = v5;
      v60 = v6;
      v59 = v7;
      v58 = v8;
      v57 = v9;
      v56 = v10;
      v55 = v11;
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      eventStreamBufferOffsetServer = applyConstantForce->eventStreamBufferOffsetServer;
      v20 = InstanceCommonContext;
      v21 = eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      if ( eventStreamBufferOffsetServer + 24 > eventStreamBufferSize )
      {
        LODWORD(v50) = eventStreamBufferOffsetServer + 24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1691, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 6 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v50, eventStreamBufferSize) )
          __debugbreak();
      }
      eventStreamBuffer = v20->eventStreamBuffer;
      v24 = *(float *)&eventStreamBuffer[v21];
      v25 = *(float *)&eventStreamBuffer[v21 + 4];
      v26 = *(float *)&eventStreamBuffer[v21 + 8];
      v27 = *(float *)&eventStreamBuffer[v21 + 12];
      v28 = *(float *)&eventStreamBuffer[v21 + 16];
      v29 = *(float *)&eventStreamBuffer[v21 + 20];
      angles = v20->angles;
      v30 = v20->origin.v[0];
      v31 = v20->origin.v[1];
      v32 = v20->origin.v[2];
      AnglesToAxis(&angles, &axis);
      v33 = !applyConstantForce->worldSpace;
      v34 = (float)((float)(1.0 - v24) * applyConstantForce->forcePos.v[0]) + (float)(v24 * applyConstantForce->forcePos2.v[0]);
      v35 = (float)((float)(1.0 - v25) * applyConstantForce->forcePos.v[1]) + (float)(v25 * applyConstantForce->forcePos2.v[1]);
      v36 = (float)((float)(1.0 - v26) * applyConstantForce->forcePos.v[2]) + (float)(v26 * applyConstantForce->forcePos2.v[2]);
      v37 = (float)((float)(1.0 - v27) * applyConstantForce->forceVector.v[0]) + (float)(v27 * applyConstantForce->forceVector2.v[0]);
      v39 = LODWORD(FLOAT_1_0);
      *(float *)&v39 = (float)((float)(1.0 - v28) * applyConstantForce->forceVector.v[1]) + (float)(v28 * applyConstantForce->forceVector2.v[1]);
      v38 = *(float *)&v39;
      v40 = (float)((float)(1.0 - v29) * applyConstantForce->forceVector.v[2]) + (float)(v29 * applyConstantForce->forceVector2.v[2]);
      position.v[0] = (float)((float)((float)(axis.m[0].v[0] * v34) + (float)(axis.m[1].v[0] * v35)) + (float)(axis.m[2].v[0] * v36)) + v30;
      position.v[1] = (float)((float)((float)(axis.m[0].v[1] * v34) + (float)(v35 * axis.m[1].v[1])) + (float)(v36 * axis.m[2].v[1])) + v31;
      position.v[2] = (float)((float)((float)(axis.m[0].v[2] * v34) + (float)(v35 * axis.m[1].v[2])) + (float)(v36 * axis.m[2].v[2])) + v32;
      if ( v33 )
      {
        v41 = (float)((float)(axis.m[1].v[0] * *(float *)&v39) + (float)(axis.m[0].v[0] * v37)) + (float)(axis.m[2].v[0] * v40);
        *(float *)&v39 = (float)((float)(*(float *)&v39 * axis.m[1].v[1]) + (float)(axis.m[0].v[1] * v37)) + (float)(v40 * axis.m[2].v[1]);
        v42 = v39;
        v40 = (float)((float)(v38 * axis.m[1].v[2]) + (float)(axis.m[0].v[2] * v37)) + (float)(v40 * axis.m[2].v[2]);
      }
      else
      {
        v41 = v37;
        v42 = v39;
      }
      v44 = v42;
      *(float *)&v44 = fsqrt((float)((float)(*(float *)&v42 * *(float *)&v42) + (float)(v41 * v41)) + (float)(v40 * v40));
      _XMM3 = v44;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm15, xmm0
      }
      normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM0) * v41;
      normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM0) * v40;
      normalizedDirection.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v42;
      v47 = 0;
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v17);
      if ( NumRigidBodys > 0 )
      {
        do
        {
          RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v17, v47);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1753, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
            Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &normalizedDirection, *(float *)&v44 * deltaTime);
          ++v47;
        }
        while ( v47 < NumRigidBodys );
      }
    }
    return 1;
  }
  return result;
}

/*
==============
ScriptableSv_UpdateInstanceEvents
==============
*/
void ScriptableSv_UpdateInstanceEvents(const float deltaTime, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  unsigned int v4; 
  const ScriptablePartDef *v5; 
  const dvar_t *v6; 
  ScriptableSvUpdateRequest outRequest; 

  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3182, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3183, ASSERT_TYPE_ASSERT, "( ScriptableDef_RequiresUpdate( def ) )", (const char *)&queryFormat, "ScriptableDef_RequiresUpdate( def )") )
    __debugbreak();
  v4 = 0;
  outRequest = 0;
  if ( !def->numParts )
    goto LABEL_14;
  do
  {
    v5 = &def->parts[v4];
    if ( (v5->flags & 0x202) == 514 )
      ScriptableSv_UpdatePart(deltaTime, scriptableIndex, v5, &outRequest);
    ++v4;
  }
  while ( v4 < def->numParts );
  if ( !outRequest.eventUpdateRequired )
  {
LABEL_14:
    v6 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
    if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      Com_Printf(29, "ScriptableSv_UpdateInstance: Event Update no longer required for instance %i (%s)\n", scriptableIndex, def->name);
    ScriptableSv_RemoveFromEventUpdateList(scriptableIndex);
  }
}

/*
==============
ScriptableSv_UpdateModel
==============
*/
void ScriptableSv_UpdateModel(const unsigned int scriptableIndex, bool link, bool activatePhysics)
{
  gentity_s *Entity; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char **p_name; 
  const char *v9; 
  const ScriptableDef *def; 
  XAnim_s *v11; 
  G_PhysicsObject *v12; 
  unsigned int v13; 
  unsigned int NumRigidBodys; 
  unsigned int i; 
  unsigned int RigidBodyID; 
  const DObj *ServerDObjForEnt; 
  Bounds *p_box; 

  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( *((char *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) >= 0 )
    {
      if ( Entity->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )
      {
        Entity->s.lerp.pos.trType = TR_STATIONARY;
        Entity->s.lerp.apos.trType = TR_STATIONARY;
      }
    }
    else
    {
      Entity->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
      Entity->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    {
      G_XCompositeModel_Clear(Entity->s.eType, Entity);
      p_name = &InstanceCommonContext->data.compositeModel->name;
      if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
      {
        if ( p_name )
          G_Utils_SetCompositeModel(Entity, Entity->s.eType, *p_name);
        else
          G_Utils_SetCompositeModel(Entity, Entity->s.eType, (const char *)&queryFormat.fmt + 3);
      }
      else
      {
        if ( p_name )
          v9 = *p_name;
        else
          v9 = (char *)&queryFormat.fmt + 3;
        G_Utils_SetModel(Entity, v9);
      }
    }
    def = InstanceCommonContext->def;
    if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 308, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( (def->flags & 0x20) != 0 && !Entity->pAnimTree )
    {
      v11 = InstanceCommonContext->def->animationTreeDef[1];
      if ( v11 )
        Entity->pAnimTree = Com_XAnimCreateSmallTree(v11, MOVEMENT);
    }
    G_DObjUpdate(Entity, 0);
    if ( activatePhysics )
    {
      v12 = G_PhysicsObject_Get(Entity);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3273, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
        __debugbreak();
      v13 = v12->physicsInstances[0];
      if ( v13 != -1 )
      {
        NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v13);
        for ( i = 0; i < NumRigidBodys; ++i )
        {
          RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v13, i);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3286, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          Physics_ActivateBody(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
        }
      }
    }
    ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
    p_box = &Entity->r.box;
    if ( ServerDObjForEnt )
    {
      DObjGetBounds(ServerDObjForEnt, p_box);
    }
    else
    {
      *(_QWORD *)p_box->midPoint.v = 0i64;
      Entity->r.box.midPoint.v[2] = 0.0;
      *(_QWORD *)Entity->r.box.halfSize.v = 0i64;
      Entity->r.box.halfSize.v[2] = 0.0;
    }
    if ( link )
      SV_LinkEntity(Entity);
  }
}

/*
==============
ScriptableSv_UpdateNavObstacle
==============
*/
void ScriptableSv_UpdateNavObstacle(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  const ScriptableDef *def; 
  unsigned int navmeshObstacleId; 
  int flags; 
  double v7; 
  const dvar_t *v8; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3405, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  navmeshObstacleId = InstanceCollisionContext->navmeshObstacleId;
  if ( navmeshObstacleId )
  {
    Nav_DestroyObstacleByID(navmeshObstacleId);
  }
  else if ( (def->flags & 0x180000) == 0 )
  {
    return;
  }
  if ( InstanceCollisionContext->model )
  {
    flags = def->flags;
    if ( (flags & 0x80000) != 0 || (flags & 0x100000) != 0 )
    {
      v7 = AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
      v8 = DCONST_DVARFLT_doorNavObstacleAngle;
      if ( !DCONST_DVARFLT_doorNavObstacleAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "doorNavObstacleAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( COERCE_FLOAT(LODWORD(v7) & _xmm) >= v8->current.value )
        InstanceCollisionContext->navmeshObstacleId = ScriptableSv_CreateModelNavObstacle(scriptableIndex);
    }
  }
}

/*
==============
ScriptableSv_UpdatePart
==============
*/
void ScriptableSv_UpdatePart(const float deltaTime, const unsigned int scriptableIndex, const ScriptablePartDef *part, ScriptableSvUpdateRequest *outRequest)
{
  unsigned int v4; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 stateId; 
  ScriptableStateDef *v10; 
  unsigned int RandSeed; 
  unsigned int v12; 
  const ScriptableEventDef *v13; 
  ScriptablePartDef *v14; 
  __int64 eventIdx; 
  unsigned int holdrand; 

  v4 = 0;
  if ( part->numStates )
  {
    PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3148, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
      __debugbreak();
    stateId = PartRuntime->stateId;
    if ( (unsigned int)stateId >= part->numStates )
    {
      LODWORD(eventIdx) = stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3152, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( part.numStates )", "stateIdx doesn't index part.numStates\n\t%i not in [0, %i)", eventIdx, part->numStates) )
        __debugbreak();
    }
    v10 = &part->states[stateId];
    if ( (v10->base.flags & 0x200) != 0 )
    {
      RandSeed = ScriptableSv_GenerateRandSeed(scriptableIndex);
      outRequest->stopUpdatingEventsForState = 0;
      v12 = 0;
      holdrand = RandSeed;
      if ( v10->base.numEvents )
      {
        while ( 1 )
        {
          v13 = &v10->base.events[v12];
          if ( (v13->base.flags & 0x200) != 0 )
          {
            ScriptableSv_UpdateEvent(deltaTime, scriptableIndex, part, v10, v13, v12, &holdrand, outRequest);
            if ( outRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v12 >= v10->base.numEvents )
            goto LABEL_17;
        }
        if ( !outRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3133, ASSERT_TYPE_ASSERT, "( outRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
          __debugbreak();
      }
    }
  }
LABEL_17:
  if ( part->numChildParts )
  {
    do
    {
      v14 = &part->childParts[v4];
      if ( (v14->flags & 0x202) == 514 )
        ScriptableSv_UpdatePart(deltaTime, scriptableIndex, v14, outRequest);
      ++v4;
    }
    while ( v4 < part->numChildParts );
  }
}

/*
==============
ScriptableSv_UpdateStateEventGravityArc
==============
*/
void ScriptableSv_UpdateStateEventGravityArc(const unsigned int scriptableIndex, const ScriptableEventGravityArcDef *const moveDef, const ScriptablePartDef *part, float deltaTime, ScriptableSvUpdateRequest *outRequest)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  unsigned __int8 *Data; 
  int v10; 
  ScriptableCollisionServerContext *v11; 
  unsigned int v12; 
  ScriptableCollisionServerContext *v13; 
  unsigned int v14; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int16 stateId; 
  float v17; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  unsigned int scriptableCollisionDetail; 
  unsigned int holdrand; 
  ScriptableEventParams outParams; 
  vec3_t angles; 
  vec3_t origin; 
  vec4_t quat; 
  vec3_t out_result; 
  ScriptableGravityArcRuntimeData arcData; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2117, ASSERT_TYPE_ASSERT, "( moveDef )", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableSv_GravityArcCalcData(scriptableIndex, InstanceCommonContext, moveDef, &arcData);
  Data = ScriptableSv_StateEventGravityArcGetData(InstanceCommonContext, moveDef);
  v10 = *(_DWORD *)Data;
  if ( level.time <= *(_DWORD *)Data + arcData.durationMS )
  {
    v17 = (float)(level.time - v10) / (float)arcData.durationMS;
    ScriptableBg_GravityArcCalcDelta(&arcData.velocity, level.time - v10, arcData.gravity, &out_result);
    origin.v[1] = arcData.startOrigin.v[1] + out_result.v[1];
    origin.v[2] = arcData.startOrigin.v[2] + out_result.v[2];
    angles.v[0] = (float)((float)(arcData.endAngles.v[0] - arcData.startAngles.v[0]) * v17) + arcData.startAngles.v[0];
    origin.v[0] = arcData.startOrigin.v[0] + out_result.v[0];
    angles.v[1] = (float)((float)(arcData.endAngles.v[1] - arcData.startAngles.v[1]) * v17) + arcData.startAngles.v[1];
    angles.v[2] = (float)((float)(arcData.endAngles.v[2] - arcData.startAngles.v[2]) * v17) + arcData.startAngles.v[2];
    InstanceCommonContext->origin.v[0] = arcData.startOrigin.v[0] + out_result.v[0];
    InstanceCommonContext->origin.v[1] = origin.v[1];
    InstanceCommonContext->origin.v[2] = origin.v[2];
    InstanceCommonContext->angles = angles;
    InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
    scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
    scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
    if ( InstanceCollisionContext->scriptableCollisionMain != -1 || scriptableCollisionDetail != -1 )
    {
      AnglesToQuat(&angles, &quat);
      if ( scriptableCollisionMain != -1 )
        ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, &origin, &quat, KEYFRAME);
      if ( scriptableCollisionDetail != -1 )
        ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, &origin, &quat, WARP);
    }
    *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 61) |= 2u;
    goto LABEL_28;
  }
  v11 = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  if ( v11->scriptableCollisionMain != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_FIRST, v11->scriptableCollisionMain);
  v12 = v11->scriptableCollisionDetail;
  if ( v12 != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_SERVER_DETAIL, v12);
  InstanceCommonContext->origin = arcData.endOrigin;
  InstanceCommonContext->angles = arcData.endAngles;
  v13 = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  v14 = v13->scriptableCollisionDetail;
  holdrand = v13->scriptableCollisionMain;
  if ( __PAIR64__(v14, holdrand) != -1i64 )
  {
    AnglesToQuat(&arcData.endAngles, &quat);
    if ( holdrand != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, v13->scriptableCollisionMain, &arcData.endOrigin, &quat, WARP);
    if ( v14 != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, v13->scriptableCollisionDetail, &arcData.endOrigin, &quat, WARP);
  }
  *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 61) &= ~2u;
  if ( moveDef->eventAtEndCount )
  {
    PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2136, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
      __debugbreak();
    stateId = PartRuntime->stateId;
    holdrand = ScriptableSv_GenerateRandSeed(scriptableIndex);
    ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
    ScriptableSv_RunStateEvents(&outParams, &holdrand, moveDef->eventsAtEnd, moveDef->eventAtEndCount);
    if ( PartRuntime->stateId != stateId && (part->flags & 0x200) != 0 )
LABEL_28:
      outRequest->eventUpdateRequired = 1;
  }
}

/*
==============
ScriptableSv_UpdateStateEventMove
==============
*/
void ScriptableSv_UpdateStateEventMove(const unsigned int scriptableIndex, const ScriptableEventMoveDef *const moveDef, float deltaTime, ScriptableSvUpdateRequest *outRequest)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  Scriptable_EventMove_Data *Data; 
  ScriptableInstanceContext *v9; 
  const char *name; 
  float seconds; 
  int time; 
  vec3_t out_endOrigin; 
  vec3_t out_endAngles; 
  vec3_t angles; 
  vec3_t origin; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2009, ASSERT_TYPE_ASSERT, "( moveDef )", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  Data = ScriptableSv_StateEventMoveGetData(InstanceCommonContext, moveDef);
  if ( Data->startTime && moveDef->seconds > 0.0 )
  {
    if ( (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) != 0 )
    {
      v9 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v9->def )
        name = v9->def->name;
      else
        name = "<Unknown>";
      Com_PrintError(29, "ScriptableSv UpdateStateEventMove: Scriptable is parented to entity, can't execute moveto. Index %i '%s'\n", scriptableIndex, name);
      Data->startTime = 0;
    }
    else
    {
      ScriptableBg_LerpCalcEndPoints(&InstanceCommonContext->originInitial, &InstanceCommonContext->anglesInitial, moveDef, &out_endOrigin, &out_endAngles);
      seconds = moveDef->seconds;
      time = level.time;
      if ( level.time < Data->startTime - (int)(float)(seconds * -1000.0) )
      {
        ScriptableBg_LerpVector(&Data->startOrigin, &out_endOrigin, Data->startTime, level.time, seconds, moveDef->secondsAccel, moveDef->secondsDecel, &origin);
        ScriptableBg_LerpVector(&Data->startAngles, &out_endAngles, Data->startTime, time, moveDef->seconds, moveDef->secondsAccel, moveDef->secondsDecel, &angles);
        ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, &origin, &angles, 0);
        outRequest->eventUpdateRequired = 1;
      }
      else
      {
        ScriptableSv_StateEventMovePhysicsClearVelocity(scriptableIndex);
        ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, &out_endOrigin, &out_endAngles, 1);
        ScriptableSv_UpdateNavObstacle(scriptableIndex);
        Data->startTime = 0;
      }
    }
  }
}

