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
  nav_space_s *MostLikelySpace; 
  vec3_t out; 
  vec3_t outOrigin; 
  Bounds bounds; 
  vec4_t quat; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  if ( !InstanceCollisionContext->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 298, ASSERT_TYPE_ASSERT, "( r_collisionContext.model )", (const char *)&queryFormat, "r_collisionContext.model") )
    __debugbreak();
  _RAX = InstanceCollisionContext->model;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+2Ch]
    vmovups xmmword ptr [rsp+88h+bounds.midPoint], xmm0
    vmovsd  xmm1, qword ptr [rax+3Ch]
    vmovsd  qword ptr [rsp+88h+bounds.halfSize+4], xmm1
  }
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  AnglesToQuat(&InstanceCommonContext->angles, &quat);
  QuatTransform(&quat, &bounds.midPoint, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+out]
    vmovss  xmm1, dword ptr [rsp+88h+out+4]
    vaddss  xmm4, xmm0, dword ptr [rsp+88h+outOrigin]
    vmovss  xmm0, dword ptr [rsp+88h+out+8]
    vaddss  xmm2, xmm0, dword ptr [rsp+88h+outOrigin+8]
    vaddss  xmm3, xmm1, dword ptr [rsp+88h+outOrigin+4]
    vunpcklps xmm1, xmm4, xmm3
    vmovss  dword ptr [rsp+88h+out+8], xmm2
  }
  bounds.midPoint.v[2] = out.v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+88h+out], xmm1
    vmovsd  qword ptr [rsp+88h+bounds.midPoint], xmm1
  }
  MostLikelySpace = Nav_FindMostLikelySpace(&outOrigin, NAV_LAYER_HUMAN, NULL);
  if ( !MostLikelySpace )
    MostLikelySpace = Nav_GetDefaultSpace();
  __asm { vmovss  xmm3, cs:__real@416e6666; penalty }
  return Nav_CreateObstacleByBounds(MostLikelySpace, &bounds, &InstanceCommonContext->angles, *(float *)&_XMM3, 0xFFFFFFFF, 0x2000u);
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
  const char *v9; 
  ScriptableInstanceContext *v10; 
  const char *v11; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  gentity_s *Entity; 
  const char *v23; 
  DObj *ServerDObjForEnt; 
  ScriptableInstanceContext *v25; 
  const char *name; 
  char v28; 
  XAnimTree *Tree; 
  XAnimTree *SmallTree; 
  const char *v31; 
  ScriptableInstanceContext *v32; 
  unsigned int index; 
  bool IsLinkingEnabled; 
  DObj *v38; 
  float fmta; 
  float fmtb; 
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float v46; 
  float v47; 
  float outRate; 
  float outStartTime; 
  const char *AnimTreeDebugName; 
  DObjPartBits partBits; 

  _RBX = animation;
  ScriptableBg_ChooseAnimationStartTimeAndRate(animation, holdrand, &outStartTime, &outRate);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || !_RBX->clientOnlyInMP )
  {
    if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 622, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
      __debugbreak();
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def->animationTreeDef[1] )
    {
      __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
      if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
      {
        Entity = ScriptableSv_GetEntity(scriptableIndex);
        v23 = "<Unknown>";
        ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
        if ( !ServerDObjForEnt )
        {
          v25 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v25->def )
            name = v25->def->name;
          else
            name = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082A10, 194i64, name);
        }
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        v28 = 0;
        Tree = DObjGetTree(ServerDObjForEnt);
        if ( Tree )
        {
          if ( Tree->anims != InstanceCommonContext->def->animationTreeDef[1] )
          {
            v31 = SL_ConvertToString(InstanceCommonContext->def->animationTreeName);
            AnimTreeDebugName = XAnimGetAnimTreeDebugName(Tree->anims);
            v32 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
            if ( v32->def )
              v23 = v32->def->name;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082AF0, 195i64, v23, AnimTreeDebugName, v31);
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
          v28 = 1;
        }
        if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 688, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
          __debugbreak();
        index = _RBX->animationIndex[1].index;
        __asm
        {
          vmovss  xmm0, [rsp+0E8h+outRate]
          vmovss  xmm1, cs:__real@3f800000
        }
        if ( _RBX->overrideAnimation )
        {
          __asm
          {
            vmovss  [rsp+0E8h+var_B8], xmm0
            vmovss  [rsp+0E8h+goalTime], xmm6
            vmovss  dword ptr [rsp+0E8h+fmt], xmm1
          }
          XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, index, fmta, goalTimea, v46, scr_const.scriptable, 0, 0, LINEAR);
        }
        else
        {
          __asm
          {
            vmovss  [rsp+0E8h+var_B8], xmm0
            vmovss  [rsp+0E8h+goalTime], xmm6
            vmovss  dword ptr [rsp+0E8h+fmt], xmm1
          }
          XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, index, fmtb, goalTimeb, v47, scr_const.scriptable, 0, 0, LINEAR, NULL);
        }
        __asm
        {
          vmovss  xmm0, [rsp+0E8h+outStartTime]
          vmovss  dword ptr [rsp+0E8h+fmt], xmm0
        }
        if ( _RBX->startTimeNormalized )
          XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmt);
        else
          XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmt);
        if ( v28 && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
        {
          DObjGetHidePartBits(ServerDObjForEnt, &partBits);
          IsLinkingEnabled = ScriptableSv_IsLinkingEnabled();
          if ( IsLinkingEnabled )
            ScriptableSv_DisableLinking(1);
          G_DObjUpdate(Entity, 0);
          if ( IsLinkingEnabled )
            ScriptableSv_DisableLinking(0);
          v38 = Com_GetServerDObjForEnt(Entity);
          if ( v38 )
            DObjSetHidePartBits(v38, &partBits);
        }
      }
      else if ( _RBX->eventAtEndCount && !_RBX->clientOnlyInMP )
      {
        *(double *)&_XMM0 = XAnimGetLength(InstanceCommonContext->def->animationTreeDef[1], _RBX->animationIndex[1].index);
        eventStreamBufferOffsetServer = _RBX->eventStreamBufferOffsetServer;
        eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
        _RBX = eventStreamBufferOffsetServer;
        __asm { vmovaps xmm6, xmm0 }
        if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
        {
          LODWORD(goalTime) = eventStreamBufferOffsetServer + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 645, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", goalTime, eventStreamBufferSize) )
            __debugbreak();
        }
        __asm { vmulss  xmm2, xmm6, [rsp+0E8h+outRate] }
        _RAX = InstanceCommonContext->eventStreamBuffer;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rbx+rax], xmm2
        }
      }
      __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
    }
    else
    {
      v9 = _RBX->animation->name;
      v10 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v10->def )
        v11 = v10->def->name;
      else
        v11 = "<Unknown>";
      Com_PrintWarning(15, "WARNING: Scriptable %s cannot play anim %s as it's missing an anim tree\n", v11, v9);
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
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  G_PhysicsObject *v12; 
  unsigned int v13; 
  int NumRigidBodys; 
  signed int v62; 
  int v64; 
  unsigned int m_serialAndIndex; 
  __int64 v69; 
  hknpBodyId result; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 

  _RBX = applyAngularForce;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1505, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v12 = G_PhysicsObject_Get(Entity);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1519, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v13 = v12->physicsInstances[0];
    if ( v13 == -1 )
    {
      if ( _RBX->randomRange )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+18h]; max
          vmovss  xmm0, dword ptr [rbx+0Ch]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+1Ch]; max
          vmovss  xmm0, dword ptr [rbx+10h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+20h]; max
          vmovss  xmm0, dword ptr [rbx+14h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+118h+var_48], xmm6
        vmovaps [rsp+118h+var_68], xmm8
        vmovaps [rsp+118h+var_78], xmm9
      }
      if ( !Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v13, 0) )
        Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
      __asm { vmovaps [rsp+118h+var_58], xmm7 }
      _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+2Ch]
        vmovss  dword ptr [rsp+118h+angles], xmm0
        vmovss  xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rsp+118h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rax+34h]
        vmovss  dword ptr [rsp+118h+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      if ( _RBX->randomRange )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+18h]; max
          vmovss  xmm0, dword ptr [rbx+0Ch]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+1Ch]; max
          vmovaps xmm6, xmm0
          vmovss  xmm0, dword ptr [rbx+10h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+20h]; max
          vmovaps xmm7, xmm0
          vmovss  xmm0, dword ptr [rbx+14h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm { vmovaps xmm5, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+0Ch]
          vmovss  xmm7, dword ptr [rbx+10h]
          vmovss  xmm5, dword ptr [rbx+14h]
        }
      }
      if ( _RBX->worldSpace )
      {
        __asm
        {
          vmovaps xmm8, xmm6
          vmovaps xmm9, xmm7
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm5, dword ptr [rsp+118h+axis+18h]
          vmulss  xmm0, xmm5, dword ptr [rsp+118h+axis+1Ch]
          vmulss  xmm3, xmm6, dword ptr [rsp+118h+axis]
          vmulss  xmm2, xmm7, dword ptr [rsp+118h+axis+0Ch]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm6, dword ptr [rsp+118h+axis+4]
          vmulss  xmm2, xmm7, dword ptr [rsp+118h+axis+14h]
          vaddss  xmm8, xmm4, xmm1
          vmulss  xmm1, xmm7, dword ptr [rsp+118h+axis+10h]
          vaddss  xmm4, xmm3, xmm1
          vmulss  xmm3, xmm6, dword ptr [rsp+118h+axis+8]
          vaddss  xmm9, xmm4, xmm0
          vmulss  xmm0, xmm5, dword ptr [rsp+118h+axis+20h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm5, xmm4, xmm0
        }
      }
      __asm
      {
        vmulss  xmm0, xmm8, xmm8
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm6, xmm2, xmm2
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm8, xmm2
        vmovss  dword ptr [rsp+118h+torqueVector], xmm0
        vmulss  xmm0, xmm5, xmm2
        vmulss  xmm1, xmm9, xmm2
        vmovss  dword ptr [rsp+118h+torqueVector+8], xmm0
        vmovss  dword ptr [rsp+118h+torqueVector+4], xmm1
      }
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v13);
      __asm { vmovaps xmm9, [rsp+118h+var_78] }
      v62 = 0;
      __asm { vmovaps xmm8, [rsp+118h+var_68] }
      v64 = NumRigidBodys;
      __asm { vmovaps xmm7, [rsp+118h+var_58] }
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v69) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v69) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v13, v62)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1585, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) )
          {
            __asm { vmovaps xmm3, xmm6; magnitude }
            Physics_ApplyAngularImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &torqueVector, *(float *)&_XMM3);
          }
          ++v62;
        }
        while ( v62 < v64 );
      }
      __asm { vmovaps xmm6, [rsp+118h+var_48] }
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
  bool v15; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v38; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v50; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1602, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  v15 = !applyConstantForce->randomRange;
  scriptableIndex = eventParams->scriptableIndex;
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v15 )
  {
    __asm { vxorps  xmm12, xmm12, xmm12 }
    goto LABEL_12;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm12, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_12:
    __asm { vxorps  xmm11, xmm11, xmm11 }
    goto LABEL_13;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm11, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_13:
    __asm { vxorps  xmm10, xmm10, xmm10 }
    goto LABEL_14;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm10, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_14:
    __asm { vxorps  xmm9, xmm9, xmm9 }
    goto LABEL_15;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm9, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_15:
    __asm { vxorps  xmm8, xmm8, xmm8 }
    goto LABEL_16;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm8, xmm0 }
  if ( applyConstantForce->randomRange )
  {
    __asm
    {
      vmovaps xmm1, xmm7; max
      vxorps  xmm0, xmm0, xmm0; min
    }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    __asm { vmovaps xmm6, xmm0 }
  }
LABEL_16:
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  eventStreamBufferOffsetServer = applyConstantForce->eventStreamBufferOffsetServer;
  v38 = InstanceCommonContext;
  __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
  _RBX = eventStreamBufferOffsetServer;
  eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
  if ( eventStreamBufferOffsetServer + 24 > eventStreamBufferSize )
  {
    LODWORD(v50) = eventStreamBufferOffsetServer + 24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1618, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 6 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v50, eventStreamBufferSize) )
      __debugbreak();
  }
  _RAX = v38->eventStreamBuffer;
  _R11 = &v52;
  __asm
  {
    vmovss  dword ptr [rbx+rax], xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovss  dword ptr [rbx+rax+4], xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rbx+rax+8], xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rbx+rax+0Ch], xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx+rax+10h], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbx+rax+14h], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
}

/*
==============
ScriptableSv_RunStateEventApplyForce
==============
*/
void ScriptableSv_RunStateEventApplyForce(ScriptableEventParams *eventParams, unsigned int *holdrand, const ScriptableEventApplyForceDef *applyForce)
{
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  G_PhysicsObject *v18; 
  unsigned int v19; 
  bool v59; 
  int NumRigidBodys; 
  int v117; 
  signed int v119; 
  unsigned int m_serialAndIndex; 
  float fmt; 
  __int64 v128; 
  hknpBodyId result; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 
  tmat33_t<vec3_t> axis; 

  _RBX = applyForce;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1393, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v18 = G_PhysicsObject_Get(Entity);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1407, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v19 = v18->physicsInstances[0];
    if ( v19 == -1 )
    {
      if ( _RBX->randomRange )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+24h]; max
          vmovss  xmm0, dword ptr [rbx+0Ch]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+28h]; max
          vmovss  xmm0, dword ptr [rbx+10h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+2Ch]; max
          vmovss  xmm0, dword ptr [rbx+14h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+30h]; max
          vmovss  xmm0, dword ptr [rbx+18h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+34h]; max
          vmovss  xmm0, dword ptr [rbx+1Ch]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+38h]; max
          vmovss  xmm0, dword ptr [rbx+20h]; min
        }
        BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+188h+var_48], xmm6
        vmovaps [rsp+188h+var_68], xmm8
        vmovaps [rsp+188h+var_78], xmm9
        vmovaps [rsp+188h+var_88], xmm10
        vmovaps [rsp+188h+var_98], xmm11
        vmovaps [rsp+188h+var_A8], xmm12
        vmovaps [rsp+188h+var_B8], xmm13
        vmovaps [rsp+188h+var_C8], xmm14
        vmovaps [rsp+188h+var_D8], xmm15
      }
      if ( !Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v19, 0) )
        Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
      __asm { vmovaps [rsp+188h+var_58], xmm7 }
      _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+2Ch]
        vmovss  dword ptr [rsp+188h+angles], xmm0
        vmovss  xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rsp+188h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rax+34h]
        vmovss  dword ptr [rsp+188h+angles+8], xmm0
        vmovss  xmm0, dword ptr [rax+28h]
        vmovss  xmm12, dword ptr [rax+20h]
        vmovss  xmm15, dword ptr [rax+24h]
        vmovss  [rsp+188h+result.m_serialAndIndex], xmm0
      }
      AnglesToAxis(&angles, &axis);
      if ( _RBX->randomRange )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+24h]; max
          vmovss  xmm0, dword ptr [rbx+0Ch]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+28h]; max
          vmovaps xmm8, xmm0
          vmovss  xmm0, dword ptr [rbx+10h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+2Ch]; max
          vmovaps xmm9, xmm0
          vmovss  xmm0, dword ptr [rbx+14h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+30h]; max
          vmovaps xmm10, xmm0
          vmovss  xmm0, dword ptr [rbx+18h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+34h]; max
          vmovaps xmm6, xmm0
          vmovss  xmm0, dword ptr [rbx+1Ch]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+38h]; max
          vmovaps xmm7, xmm0
          vmovss  xmm0, dword ptr [rbx+20h]; min
        }
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
        __asm { vmovaps xmm4, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm8, dword ptr [rbx+0Ch]
          vmovss  xmm9, dword ptr [rbx+10h]
          vmovss  xmm10, dword ptr [rbx+14h]
          vmovss  xmm6, dword ptr [rbx+18h]
          vmovss  xmm7, dword ptr [rbx+1Ch]
          vmovss  xmm4, dword ptr [rbx+20h]
        }
      }
      v59 = !_RBX->worldSpace;
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+188h+axis]
        vmovss  xmm5, dword ptr [rsp+188h+axis+0Ch]
        vmovss  xmm11, dword ptr [rsp+188h+axis+18h]
        vmovss  xmm13, dword ptr [rsp+188h+axis+10h]
        vmovss  xmm14, dword ptr [rsp+188h+axis+1Ch]
        vmulss  xmm0, xmm5, xmm9
        vmulss  xmm1, xmm3, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, xmm10
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, xmm12
        vmovss  xmm12, dword ptr [rsp+188h+axis+4]
        vmovss  dword ptr [rsp+188h+position], xmm2
        vmulss  xmm0, xmm13, xmm9
        vmulss  xmm1, xmm12, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm14, xmm10
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, xmm15
        vmovss  xmm15, dword ptr [rsp+188h+axis+14h]
        vmulss  xmm1, xmm15, xmm9
        vmovss  xmm9, dword ptr [rsp+188h+axis+8]
        vmulss  xmm0, xmm9, xmm8
        vmovss  dword ptr [rsp+188h+position+4], xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, dword ptr [rsp+188h+axis+20h]
        vmovaps xmm10, [rsp+188h+var_88]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, [rsp+188h+result.m_serialAndIndex]
        vmovss  dword ptr [rsp+188h+position+8], xmm2
      }
      if ( v59 )
      {
        __asm
        {
          vmulss  xmm1, xmm3, xmm6
          vmulss  xmm0, xmm5, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm11, xmm4
          vaddss  xmm5, xmm2, xmm1
          vmulss  xmm1, xmm14, xmm4
          vmulss  xmm3, xmm12, xmm6
          vmulss  xmm0, xmm13, xmm7
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm8, xmm2, xmm1
          vmulss  xmm1, xmm4, dword ptr [rsp+188h+axis+20h]
          vmulss  xmm3, xmm9, xmm6
          vmulss  xmm0, xmm15, xmm7
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm4, xmm2, xmm1
        }
      }
      else
      {
        __asm
        {
          vmovaps xmm5, xmm6
          vmovaps xmm8, xmm7
        }
      }
      __asm
      {
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm6, xmm2, xmm2
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rsp+188h+normalizedDirection], xmm0
        vmulss  xmm0, xmm2, xmm4
        vmulss  xmm1, xmm2, xmm8
        vmovss  dword ptr [rsp+188h+normalizedDirection+8], xmm0
        vmovss  dword ptr [rsp+188h+normalizedDirection+4], xmm1
      }
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v19);
      __asm
      {
        vmovaps xmm15, [rsp+188h+var_D8]
        vmovaps xmm14, [rsp+188h+var_C8]
      }
      v117 = NumRigidBodys;
      __asm { vmovaps xmm13, [rsp+188h+var_B8] }
      v119 = 0;
      __asm
      {
        vmovaps xmm12, [rsp+188h+var_A8]
        vmovaps xmm11, [rsp+188h+var_98]
        vmovaps xmm9, [rsp+188h+var_78]
        vmovaps xmm8, [rsp+188h+var_68]
        vmovaps xmm7, [rsp+188h+var_58]
      }
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v128) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v128) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v19, v119)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1488, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) )
          {
            __asm { vmovss  dword ptr [rsp+188h+fmt], xmm6 }
            Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &normalizedDirection, fmt);
          }
          ++v119;
        }
        while ( v119 < v117 );
      }
      __asm { vmovaps xmm6, [rsp+188h+var_48] }
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
  int v6; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  XModel *model; 
  const char *v10; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  const char *collmapName; 
  int v14; 
  int clipmapCModelIndex; 
  ScriptableInstanceContext *v16; 
  const char *v17; 
  ScriptableInstanceContext *v18; 
  const char *v19; 
  ScriptableInstanceContext *v20; 
  const char *v21; 
  ScriptableInstanceContext *v22; 
  const char *v23; 
  const cmodel_t *BrushModel; 
  const char *v25; 
  ScriptableInstanceContext *v26; 
  const char *v27; 
  char v28; 
  XModel *v29; 
  bool v30; 
  bool v31; 
  bool v32; 
  bool v33; 
  int v34; 
  XModel *v39; 
  XModel *v40; 
  const PhysicsAsset *physicsAsset; 
  ScriptableInstanceContext *v42; 
  int forceType; 
  XModel *v44; 
  unsigned int v45; 
  ScriptableInstanceContext *v46; 
  Scriptable_Analytics_Zone v47; 
  int NumObstacleBounds; 
  int navObstacleIdx; 
  nav_obstacle_bounds_s *ObstacleBounds; 
  nav_obstacle_bounds_s *v51; 
  unsigned int UniqueObstacleID; 
  nav_space_s *MostLikelySpace; 
  __int64 v56; 
  nav_obstacle_hull_s *m_Hulls; 
  const ScriptableDef *def; 
  char v74; 
  char v76; 
  int ref; 
  int refa; 
  bfx::BoxExtents v79; 
  __m256i v80; 
  Physics_InstantiateShapeOverride shapeOverride; 
  float v82; 
  bfx::ObstacleDat v83; 
  vec3_t out; 
  vec3_t position; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  *(_QWORD *)out.v = eventParams;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 328, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  *(_QWORD *)&v79.m_length = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v6 = 0;
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
  v10 = "<Unknown>";
  v76 = 0;
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
  if ( !collmapName || !*collmapName || (v14 = collision->clipmapCModelIndex, (unsigned int)(v14 + 2) <= 1) || !CM_BrushModelIsValid(v14) || !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
  {
    clipmapCModelIndex = collision->clipmapCModelIndex;
    if ( clipmapCModelIndex == -1 )
    {
      v16 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v16->def )
        v17 = v16->def->name;
      else
        v17 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event that has an invalid index - you may need to recompile the map - check linker output for more information\n", v17);
    }
    else if ( clipmapCModelIndex == -2 )
    {
      v18 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v18->def )
        v19 = v18->def->name;
      else
        v19 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event that has been disabled, probably because you are using mychanges\n", v19);
    }
    else if ( CM_BrushModelIsValid(clipmapCModelIndex) )
    {
      if ( !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
      {
        v22 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        if ( v22->def )
          v23 = v22->def->name;
        else
          v23 = "<Unknown>";
        Com_PrintWarning(29, "Server Scriptable %s is using a collision event with a brush that has no collision\n", v23);
      }
    }
    else
    {
      v20 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v20->def )
        v21 = v20->def->name;
      else
        v21 = "<Unknown>";
      Com_PrintWarning(29, "Server Scriptable %s is using a collision event with an invalid brush index\n", v21);
    }
LABEL_44:
    v76 = 1;
  }
LABEL_45:
  BrushModel = NULL;
  if ( !collision->model )
  {
    if ( !CM_BrushModelIsValid(collision->clipmapCModelIndex) )
    {
      v25 = collision->collmapName;
      v26 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v26->def )
        v27 = v26->def->name;
      else
        v27 = "<Unknown>";
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082570, 192i64, v27, v25);
    }
    BrushModel = CM_GetBrushModel(collision->clipmapCModelIndex);
    if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 396, ASSERT_TYPE_ASSERT, "( clipmapModel )", (const char *)&queryFormat, "clipmapModel") )
      __debugbreak();
  }
  v28 = 0;
  if ( !v76 )
  {
    if ( ref == -1 )
    {
      v28 = 1;
    }
    else
    {
      v29 = collision->model;
      if ( v29 )
      {
        v30 = v29 != InstanceCollisionContext->model;
        v31 = InstanceCollisionContext->clipmapCModelIndex == 0;
      }
      else
      {
        v30 = collision->clipmapCModelIndex != InstanceCollisionContext->clipmapCModelIndex;
        v31 = InstanceCollisionContext->model == NULL;
      }
      v32 = !v31 || v30;
      v33 = collision->canPush != InstanceCollisionContext->canPush || collision->canTouch != InstanceCollisionContext->canTouch;
      if ( collision->neverMoves != InstanceCollisionContext->neverMoves )
        v33 = 1;
      v28 = v33 || v32;
      if ( !v28 )
        return;
    }
  }
  ScriptableSv_DestroyCollision(scriptableIndex);
  if ( !v28 )
    return;
  if ( scriptableIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 437, ASSERT_TYPE_ASSERT, "( scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX )", (const char *)&queryFormat, "scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX") )
    __debugbreak();
  v34 = scriptableIndex & 0x3FFFFF | Physics_MakeRef(Physics_RefSystem_Scriptable, Physics_RelationshipSystem_None, 0, 0);
  _RAX = *(_QWORD *)&v79.m_length;
  refa = v34;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+20h]
    vmovss  dword ptr [rbp+0B0h+position], xmm0
    vmovss  xmm1, dword ptr [rax+24h]
    vmovss  dword ptr [rbp+0B0h+position+4], xmm1
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rbp+0B0h+position+8], xmm0
  }
  AnglesToQuat((const vec3_t *)(*(_QWORD *)&v79.m_length + 44i64), &quat);
  v39 = collision->model;
  shapeOverride.customShape = NULL;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeAddendum = -1;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  if ( v39 )
  {
    if ( !v39->physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 452, ASSERT_TYPE_ASSERT, "(collision->model->physicsAsset)", (const char *)&queryFormat, "collision->model->physicsAsset") )
      __debugbreak();
    v40 = collision->model;
    shapeOverride.shapeOverride = -1;
    physicsAsset = v40->physicsAsset;
    InstanceCollisionContext->clipmapCModelIndex = 0;
    if ( !physicsAsset )
    {
      v42 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v42->def )
        v10 = v42->def->name;
      Com_PrintWarning(29, "Scriptable %s is using a collision event with an xmodel that has no physicsAsset\n", v10);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 475, ASSERT_TYPE_ASSERT, "( physicsAsset )", (const char *)&queryFormat, "physicsAsset") )
        __debugbreak();
    }
LABEL_76:
    InstanceCollisionContext->canPush = collision->canPush;
    InstanceCollisionContext->canTouch = collision->canTouch;
    InstanceCollisionContext->touchPartId = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)out.v + 16i64) + 16i64);
    InstanceCollisionContext->neverMoves = collision->neverMoves;
    v31 = !collision->neverMoves;
    InstanceCollisionContext->model = collision->model;
    forceType = !v31 + 2;
    InstanceCollisionContext->scriptableCollisionMain = Physics_InstantiateAsset(PHYSICS_WORLD_ID_FIRST, collision->model, physicsAsset, refa, &position, &quat, 1, 1, 1, &shapeOverride, (Physics_InstantiationForceType)forceType, Physics_InstantiationFilterTypeNone, 0);
    v44 = collision->model;
    if ( v44 && v44->detailCollision )
    {
      v45 = Physics_InstantiateDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v44, refa, &position, &quat, 1, 1, 0, 1);
      InstanceCollisionContext->scriptableCollisionDetail = v45;
      if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, v45) != 1 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440827B0, 193i64);
    }
    else
    {
      InstanceCollisionContext->scriptableCollisionDetail = Physics_InstantiateAsset(PHYSICS_WORLD_ID_SERVER_DETAIL, v44, physicsAsset, refa, &position, &quat, 1, 1, 1, &shapeOverride, (Physics_InstantiationForceType)forceType, Physics_InstantiationFilterTypeNone, 0);
    }
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, 624146387);
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, 624146387);
    ScriptableCommon_AssertCountsInitialized();
    v47 = Scriptable_Analytics_Zone_SC_Clipmap_S;
    if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
      v47 = Scriptable_Analytics_Zone_SC_Reserved_S;
    Scriptable_Analytics_AddCollisionInstanceCount(v47, 1);
    if ( collision->aiObstacle )
    {
      __asm { vmovaps [rsp+1B0h+var_40], xmm6 }
      if ( BrushModel )
      {
        if ( BrushModel->navObstacleIdx == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 523, ASSERT_TYPE_ASSERT, "( clipmapModel->navObstacleIdx != NAV_INVALID_CMOD_OBS_IDX )", (const char *)&queryFormat, "clipmapModel->navObstacleIdx != NAV_INVALID_CMOD_OBS_IDX") )
          __debugbreak();
        NumObstacleBounds = Nav_GetNumObstacleBounds();
        navObstacleIdx = BrushModel->navObstacleIdx;
        if ( navObstacleIdx < NumObstacleBounds )
        {
          ObstacleBounds = Nav_GetObstacleBounds(navObstacleIdx);
          v51 = ObstacleBounds;
          if ( ObstacleBounds )
          {
            if ( ObstacleBounds->m_NumHulls > 0 )
            {
              UniqueObstacleID = Nav_GetUniqueObstacleID();
              MostLikelySpace = Nav_FindMostLikelySpace(&position, NAV_LAYER_HUMAN, NULL);
              if ( MostLikelySpace || (MostLikelySpace = Nav_GetDefaultSpace()) != NULL )
              {
                __asm
                {
                  vmovss  xmm0, cs:__real@41700000
                  vmovss  dword ptr [rbp+0B0h+var_120+8], xmm0
                }
                v80.m256i_i64[0] = 0xFFFFFFFFi64;
                v80.m256i_i32[3] = -8066;
                *(_OWORD *)&v80.m256i_u64[2] = 0ui64;
                if ( v51->m_NumHulls > 0 )
                {
                  __asm { vmovss  xmm6, cs:__real@40000000 }
                  v56 = 0i64;
                  do
                  {
                    m_Hulls = v51->m_Hulls;
                    QuatToAxis(&quat, &axis);
                    MatrixTransformVector(&m_Hulls[v56].m_Offset, &axis, &out);
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+0B0h+out]
                      vaddss  xmm1, xmm0, dword ptr [rbp+0B0h+position]
                      vmovss  xmm2, dword ptr [rbp+0B0h+out+4]
                      vaddss  xmm0, xmm2, dword ptr [rbp+0B0h+position+4]
                      vmovss  dword ptr [rbp+0B0h+out], xmm1
                      vmovss  xmm1, dword ptr [rbp+0B0h+out+8]
                      vaddss  xmm2, xmm1, dword ptr [rbp+0B0h+position+8]
                      vmovss  dword ptr [rbp+0B0h+out+4], xmm0
                      vmovups ymm0, [rbp+0B0h+var_120]
                      vmovss  dword ptr [rbp+0B0h+out+8], xmm2
                    }
                    v31 = !m_Hulls[v56].m_bUseBounds;
                    __asm { vmovups [rbp+0B0h+var_C0], ymm0 }
                    if ( v31 )
                    {
                      Nav_CreateObstacle(MostLikelySpace, &out, &quat, m_Hulls[v56].m_Boundaries, m_Hulls[v56].m_NumBoundaries, UniqueObstacleID, 0, &v83);
                    }
                    else
                    {
                      __asm
                      {
                        vmulss  xmm2, xmm6, dword ptr [rbx+rdi+14h]
                        vmulss  xmm4, xmm6, dword ptr [rbx+rdi+0Ch]
                        vmulss  xmm3, xmm6, dword ptr [rbx+rdi+10h]
                        vmovss  [rbp+0B0h+var_C8], xmm2
                      }
                      v79.m_height = v82;
                      __asm
                      {
                        vunpcklps xmm0, xmm4, xmm3
                        vmovsd  [rbp+0B0h+var_130], xmm0
                      }
                      Nav_CreateObstacle(MostLikelySpace, &out, &quat, &v79, UniqueObstacleID, 0, &v83);
                    }
                    ++v6;
                    ++v56;
                  }
                  while ( v6 < v51->m_NumHulls );
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
          _RAX = *(_QWORD *)&v79.m_length;
          __asm
          {
            vmovss  xmm1, dword ptr [rax+18h]; angle2
            vmovss  xmm0, dword ptr [rax+30h]; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm { vandps  xmm6, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_doorNavObstacleAngle, "doorNavObstacleAngle");
          __asm { vcomiss xmm6, xmm0 }
          if ( !v74 )
            InstanceCollisionContext->navmeshObstacleId = ScriptableSv_CreateModelNavObstacle(scriptableIndex);
        }
      }
      __asm { vmovaps xmm6, [rsp+1B0h+var_40] }
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
  v46 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( v46->def )
    v10 = v46->def->name;
  Com_PrintWarning(29, "Scriptable %s is using a collision event with a clipmap that has no physicsAsset\n", v10);
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
  bool v9; 
  const ScriptableInstanceContextSecure *v10; 
  const DObj *ServerDObjForEnt; 
  scr_string_t scrTagName; 
  const XModel *ScriptableModel; 
  const char *name; 
  const char *tagName; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v20; 
  const char *v21; 
  ScriptableInstanceContext *v22; 
  const char *v23; 
  gentity_s *v30; 
  unsigned int v31; 
  unsigned __int16 number; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  unsigned __int16 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  gentity_s *v44; 
  const char **p_szInternalName; 
  GCombat *v50; 
  __int64 v53; 
  float fmt; 
  vec3_t *impulse; 
  int impulsea; 
  __int64 v61; 
  unsigned __int8 inOutIndex[4]; 
  unsigned int outEntNum; 
  int modelIndex[2]; 
  const ScriptableEventExplosionDef *v65; 
  vec3_t origin; 
  float forceScale[8]; 
  int v70; 
  Weapon outTagMat; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  v65 = explosion;
  _R15 = explosion;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1000, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    __asm { vmovaps [rsp+180h+var_40], xmm6 }
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(impulse) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", impulse, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [r15+20h] }
    _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    v9 = _R15->scrTagName == 0;
    v10 = _RAX;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  dword ptr [rbp+80h+origin], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vmovss  dword ptr [rbp+80h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbp+80h+origin+8], xmm0
    }
    if ( !v9 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
      if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1025, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
        __debugbreak();
      scrTagName = _R15->scrTagName;
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_25(ServerDObjForEnt, scrTagName, inOutIndex, modelIndex) )
      {
        G_Utils_DObjGetWorldBoneIndexMatrix(Entity, inOutIndex[0], (tmat43_t<vec3_t> *)&outTagMat);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+outTagMat+24h]
          vmovss  xmm1, dword ptr [rbp+80h+outTagMat+28h]
          vmovss  dword ptr [rbp+80h+origin], xmm0
          vmovss  xmm0, dword ptr [rbp+80h+outTagMat+2Ch]
          vmovss  dword ptr [rbp+80h+origin+8], xmm0
          vmovss  dword ptr [rbp+80h+origin+4], xmm1
        }
      }
      else if ( _R15->allowMissingTag )
      {
        if ( !_R15->useRootOnMissingTag )
        {
LABEL_85:
          __asm { vmovaps xmm6, [rsp+180h+var_40] }
          return;
        }
      }
      else
      {
        ScriptableModel = BG_XCompositeModel_GetScriptableModel(v10);
        if ( ScriptableModel )
        {
          name = ScriptableModel->name;
          tagName = _R15->tagName;
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( InstanceCommonContext->def )
            v20 = InstanceCommonContext->def->name;
          else
            v20 = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082BF0, 205i64, v20, tagName, name);
        }
        else
        {
          v21 = _R15->tagName;
          v22 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v22->def )
            v23 = v22->def->name;
          else
            v23 = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144082C50, 206i64, v23, v21);
        }
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [r15+24h]; outerDamage
      vmovss  xmm0, dword ptr [r15+28h]; innerDamage
      vmovaps xmm2, xmm6; damageRadius
    }
    BG_BuildExplosionDamageRangeInfo_Interpolated(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, &outDamageRangeInfo);
    *(_QWORD *)modelIndex = ScriptableSv_GetEntity(scriptableIndex);
    v30 = *(gentity_s **)modelIndex;
    if ( ScriptableSv_GetDamageOwner(scriptableIndex, &outEntNum) )
    {
      v31 = outEntNum;
      if ( outEntNum >= 0x800 )
      {
        LODWORD(v61) = 2048;
        LODWORD(impulse) = outEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1073, ASSERT_TYPE_ASSERT, "(unsigned)( damageOwnerEntNum ) < (unsigned)( ( 2048 ) )", "damageOwnerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
        v31 = outEntNum;
      }
      v30 = &g_entities[v31];
    }
    while ( 1 )
    {
      number = v30->r.ownerNum.number;
      if ( !number )
        break;
      v33 = number;
      v34 = number - 1;
      if ( v34 >= 0x800 )
      {
        LODWORD(v61) = 2048;
        LODWORD(impulse) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v35 = v33 - 1;
      if ( g_entities[v35].r.isInUse != g_entityIsInUse[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v35] )
      {
        LODWORD(v61) = v30->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v61) )
          __debugbreak();
      }
      v36 = v30->r.ownerNum.number;
      if ( !v36 )
        break;
      if ( (unsigned int)v36 - 1 >= 0x7FF )
      {
        LODWORD(v61) = 2047;
        LODWORD(impulse) = v36 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
      }
      v37 = v30->r.ownerNum.number;
      if ( (unsigned int)(v37 - 1) >= 0x800 )
      {
        LODWORD(v61) = 2048;
        LODWORD(impulse) = v37 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v38 = v37 - 1;
      if ( g_entities[v38].r.isInUse != g_entityIsInUse[v38] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v38] )
      {
        LODWORD(v61) = v30->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v61) )
          __debugbreak();
      }
      v39 = v30->r.ownerNum.number;
      if ( &g_entities[v39 - 1] == v30 )
        break;
      if ( (unsigned int)(v39 - 1) >= 0x7FF )
      {
        LODWORD(v61) = 2047;
        LODWORD(impulse) = v39 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
      }
      v40 = v30->r.ownerNum.number;
      if ( (unsigned int)(v40 - 1) >= 0x800 )
      {
        LODWORD(v61) = 2048;
        LODWORD(impulse) = v40 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", impulse, v61) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v41 = v40 - 1;
      if ( g_entities[v41].r.isInUse != g_entityIsInUse[v41] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v41] )
      {
        LODWORD(v61) = v30->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v61) )
          __debugbreak();
      }
      v30 = &g_entities[v30->r.ownerNum.number - 1];
    }
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    }
    v44 = *(gentity_s **)modelIndex;
    v70 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    p_szInternalName = &v65->weapon->szInternalName;
    __asm
    {
      vmovups ymmword ptr [rbp+80h+forceScale], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovups [rbp+80h+var_C8], xmm1
      vmovsd  [rbp+80h+var_B8], xmm0
    }
    if ( p_szInternalName && *p_szInternalName )
    {
      _RAX = G_Weapon_GetWeaponForName(&outTagMat, *p_szInternalName);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+80h+forceScale], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups [rbp+80h+var_C8], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  [rbp+80h+var_B8], xmm0
      }
      v70 = *(_DWORD *)&_RAX->weaponCamo;
    }
    level.bPlayerIgnoreRadiusDamage = level.bPlayerIgnoreRadiusDamageLatched;
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v50 = GCombat::ms_gCombatSystem;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+180h+impulse], xmm0
    }
    ((void (__fastcall *)(GCombat *, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, vec3_t *, _QWORD, gentity_s *, int, float *, _BYTE, _BYTE, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, &origin, v44, v30, &outDamageRangeInfo, impulse, 0i64, v44, 16, forceScale, 0, 0, 1);
    level.bPlayerIgnoreRadiusDamage = 0;
    LOBYTE(impulsea) = 0;
    __asm { vmovaps xmm2, xmm6 }
    ((void (__fastcall *)(GCombat *, vec3_t *, __int64, gentity_s *, float *, int))v50->NotifyRadiusDamage)(v50, &origin, v53, v30, forceScale, impulsea);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3c23d70a
      vmulss  xmm2, xmm6, cs:__real@3f7d70a4; outerRadius
      vxorps  xmm1, xmm1, xmm1; innerRadius
      vmovss  dword ptr [rsp+180h+fmt], xmm0
    }
    G_Vehicle_ExplosionEvent(&origin, *(float *)&_XMM1, *(float *)&_XMM2, 0, fmt, NULL);
    goto LABEL_85;
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
  Scriptable_EventMove_Data *Data; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  char v15; 
  char v25; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  unsigned int scriptableCollisionDetail; 
  const XModel *ScriptableModel; 
  GAntiLag *v43; 
  vec3_t out_endOrigin; 
  vec3_t out_endAngles; 
  vec4_t quat; 
  BgAntiLagLerpMoverCmd out_cmd; 

  _R14 = moveDef;
  if ( (!eventParams || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1943, ASSERT_TYPE_ASSERT, "( eventParams && moveDef )", (const char *)&queryFormat, "eventParams && moveDef") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  _RBX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  Data = ScriptableSv_StateEventMoveGetData(_RBX, _R14);
  if ( (*((_BYTE *)&_RBX->ScriptableInstanceContextSecure + 60) & 0x20) != 0 )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<Unknown>";
    Com_PrintError(29, "ScriptableSv RunStateEventMove: Scriptable is parented to entity, can't execute moveto. Index %i '%s'\n", scriptableIndex, name);
    Data->startTime = 0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+1A0h+var_40], xmm8
      vmovaps [rsp+1A0h+var_50], xmm9
      vmovaps [rsp+1A0h+var_60], xmm10
      vmovaps [rsp+1A0h+var_70], xmm11
      vmovaps [rsp+1A0h+var_80], xmm12
      vmovaps [rsp+1A0h+var_90], xmm13
    }
    ScriptableBg_LerpCalcEndPoints(&_RBX->originInitial, &_RBX->anglesInitial, _R14, &out_endOrigin, &out_endAngles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endOrigin]
      vmovss  xmm13, dword ptr [rbx+20h]
      vucomiss xmm0, xmm13
      vmovss  xmm9, dword ptr [rbx+24h]
      vmovss  xmm8, dword ptr [rbx+28h]
      vmovss  xmm10, dword ptr [rbx+2Ch]
      vmovss  xmm11, dword ptr [rbx+30h]
      vmovss  xmm12, dword ptr [rbx+34h]
    }
    if ( !v15 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endOrigin+4]
      vucomiss xmm0, xmm9
    }
    if ( !v15 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endOrigin+8]
      vucomiss xmm0, xmm8
    }
    if ( !v15 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endAngles]; angle1
      vmovaps xmm1, xmm10; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( !(v25 | v15) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endAngles+4]; angle1
      vmovaps xmm1, xmm11; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( !(v25 | v15) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+out_endAngles+8]; angle1
      vmovaps xmm1, xmm12; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( v25 | v15 )
    {
      Data->startTime = 0;
      ScriptableSv_SetPose(scriptableIndex, _RBX, &out_endOrigin, &out_endAngles, 1);
    }
    else
    {
LABEL_17:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [r14+20h]
      }
      if ( v15 )
      {
        Data->startTime = 0;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1A0h+out_endOrigin]
          vmovss  dword ptr [rbx+20h], xmm0
          vmovss  xmm1, dword ptr [rsp+1A0h+out_endOrigin+4]
          vmovss  dword ptr [rbx+24h], xmm1
          vmovss  xmm0, dword ptr [rsp+1A0h+out_endOrigin+8]
          vmovss  dword ptr [rbx+28h], xmm0
          vmovss  xmm1, dword ptr [rsp+1A0h+out_endAngles]
          vmovss  dword ptr [rbx+2Ch], xmm1
          vmovss  xmm0, dword ptr [rsp+1A0h+out_endAngles+4]
          vmovss  dword ptr [rbx+30h], xmm0
          vmovss  xmm1, dword ptr [rsp+1A0h+out_endAngles+8]
          vmovss  dword ptr [rbx+34h], xmm1
        }
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
        _R12 = &Data->startAngles;
        _R15 = &Data->startOrigin;
        __asm
        {
          vmovss  dword ptr [r15], xmm13
          vmovss  dword ptr [r15+4], xmm9
          vmovss  dword ptr [r15+8], xmm8
          vmovss  dword ptr [r12], xmm10
          vmovss  dword ptr [r12+4], xmm11
          vmovss  dword ptr [r12+8], xmm12
        }
        if ( ScriptableSv_GetInstanceCollisionContext(scriptableIndex)->canPush )
        {
          ScriptableModel = BG_XCompositeModel_GetScriptableModel(_RBX);
          ScriptableBg_SetupAntilagCommand(&out_cmd, scriptableIndex, &ScriptableModel->bounds, Data->startTime, &Data->startOrigin, &Data->startAngles, &out_endOrigin, &out_endAngles, _R14);
          if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
            __debugbreak();
          v43 = GAntiLag::ms_gAntiLagData;
          if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1995, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
            __debugbreak();
          BgAntiLag::AddLerpMoverCommand(v43, &out_cmd);
        }
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+1A0h+var_60]
      vmovaps xmm9, [rsp+1A0h+var_50]
      vmovaps xmm8, [rsp+1A0h+var_40]
      vmovaps xmm11, [rsp+1A0h+var_70]
      vmovaps xmm12, [rsp+1A0h+var_80]
      vmovaps xmm13, [rsp+1A0h+var_90]
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
  char v12; 
  gentity_s *Entity; 
  const ScriptableDamageEvent *damageEvent; 
  ScriptableInstanceContext *v15; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v17; 
  __int64 v18; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 
  __int64 v25; 
  const ScriptableDef *def; 
  int number; 
  unsigned int v28; 
  gentity_s *v29; 
  __int64 v30; 
  gentity_s *v31; 
  scr_string_t scrName; 
  int v39; 
  int v40; 
  __int64 v41; 
  __int16 v42; 
  int v43; 
  __int128 v44; 

  _RBP = &v44;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  part = partDamage->part;
  _RDI = partDamage;
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
  __asm
  {
    vcvttss2si r14, dword ptr [rdi+0Ch]
    vxorps  xmm6, xmm6, xmm6
  }
  if ( _RDI->destroy )
  {
    LODWORD(_R14) = -1;
  }
  else
  {
    v12 = 0;
    if ( !(_DWORD)_R14 )
      goto LABEL_19;
  }
  v23 = 0;
  Entity = ScriptableSv_GetEntity(scriptableIndex);
  v25 = 0i64;
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  v24 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v21) = v24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1231, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvent.scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "damageEvent.scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v21, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  number = Entity->s.number;
  v28 = v24;
  v29 = Entity;
  LODWORD(v30) = Entity->s.number;
  scrName = part->scrName;
  v31 = Entity;
  damageEvent = eventParams->damageEvent;
  eventParams->damageEvent = (const ScriptableDamageEvent *)&v23;
  __asm
  {
    vmovss  [rbp+40h+var_BC], xmm6
    vmovss  [rbp+40h+var_B8], xmm6
    vmovss  [rbp+40h+var_B4], xmm6
    vmovss  [rsp+140h+anonymous_0], xmm6
    vmovss  [rsp+140h+anonymous_1], xmm6
    vmovss  [rbp+40h+var_C0], xmm6
  }
  v39 = 0;
  v40 = _R14;
  v41 = 0i64;
  v42 = 0;
  v43 = 0;
  ScriptableBg_DamagePart(eventParams, part, 0x41u, _R14);
  eventParams->damageEvent = damageEvent;
LABEL_19:
  __asm { vcomiss xmm6, dword ptr [rdi+14h] }
  if ( v12 )
  {
    __asm { vcomiss xmm6, dword ptr [rdi+18h] }
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1264, ASSERT_TYPE_ASSERT, "( partDamage->intervalDoT > 0.f )", (const char *)&queryFormat, "partDamage->intervalDoT > 0.f") )
      __debugbreak();
    v15 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    eventStreamBufferOffsetServer = _RDI->eventStreamBufferOffsetServer;
    v17 = v15;
    v18 = eventStreamBufferOffsetServer;
    eventStreamBufferSize = v15->eventStreamBufferSize;
    if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
    {
      LODWORD(v22) = eventStreamBufferSize;
      LODWORD(v21) = eventStreamBufferOffsetServer + 4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1270, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v21, v22) )
        __debugbreak();
    }
    *(float *)&v17->eventStreamBuffer[v18] = _RDI->intervalDoT;
  }
  __asm { vmovaps xmm6, [rsp+140h+var_48+8] }
}

/*
==============
ScriptableSv_RunStateEventScriptDamage
==============
*/
void ScriptableSv_RunStateEventScriptDamage(ScriptableEventParams *eventParams, const ScriptableEventScriptDef *script)
{
  int scriptableIndex; 
  scrContext_t *v5; 
  int mod; 
  int dFlags; 
  const gentity_s *v9; 
  int modelIndex; 
  scr_string_t partName; 
  __int64 inflictorEntNum; 
  const gentity_s *v21; 
  GameScriptData *GameScriptDataCommon; 
  unsigned int v23; 
  int value; 
  int damage; 
  float v26[4]; 
  float v27[4]; 

  _RDI = eventParams->damageEvent;
  scriptableIndex = eventParams->scriptableIndex;
  if ( _RDI )
  {
    v5 = ScriptContext_Server();
    __asm { vmovss  xmm0, dword ptr [rdi+44h] }
    mod = _RDI->mod;
    dFlags = _RDI->dFlags;
    damage = _RDI->damage;
    v9 = &g_entities[_RDI->attackerEntNum];
    modelIndex = _RDI->modelIndex;
    __asm
    {
      vmovss  [rsp+98h+var_60], xmm0
      vmovss  xmm1, dword ptr [rdi+48h]
      vmovss  [rsp+98h+var_5C], xmm1
      vmovss  xmm0, dword ptr [rdi+4Ch]
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  xmm0, dword ptr [rdi+44h]
      vsubss  xmm1, xmm0, dword ptr [rdi+38h]
      vmovss  [rsp+98h+var_50], xmm1
      vmovss  xmm2, dword ptr [rdi+48h]
      vsubss  xmm0, xmm2, dword ptr [rdi+3Ch]
      vmovss  [rsp+98h+var_4C], xmm0
      vmovss  xmm1, dword ptr [rdi+4Ch]
      vsubss  xmm2, xmm1, dword ptr [rdi+40h]
      vmovss  [rsp+98h+var_48], xmm2
    }
    partName = _RDI->partName;
    value = modelIndex;
    inflictorEntNum = _RDI->inflictorEntNum;
    if ( (unsigned int)inflictorEntNum > 0x7FE )
      v21 = NULL;
    else
      v21 = &g_entities[inflictorEntNum];
    if ( partName )
      Scr_AddConstString(v5, partName);
    else
      Scr_AddUndefined(v5);
    Scr_AddInt(v5, value);
    Scr_AddVector(v5, v26);
    Scr_AddVector(v5, v27);
    GScr_Weapon_AddParam(v5, &_RDI->weapon, _RDI->isAlternate == 1);
    Scr_AddInt(v5, mod);
    Scr_AddInt(v5, dFlags);
    Scr_AddInt(v5, damage);
    Scr_AddEntityNum(v5, scriptableIndex, ENTITY_CLASS_SCRIPTABLE);
    GScr_AddEntity(v9);
    if ( v21 )
      GScr_AddEntity(v21);
    else
      Scr_AddUndefined(v5);
    Scr_AddInt(v5, script->param);
    Scr_AddConstString(v5, script->scrNotification);
    GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
    if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2284, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    v23 = Scr_ExecThread(v5, GameScriptDataCommon->riotshield_damaged, 0xDu);
    Scr_FreeThread(v5, v23);
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

  _RBX = moveDef;
  if ( (!context || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1881, ASSERT_TYPE_ASSERT, "( context && moveDef )", (const char *)&queryFormat, "context && moveDef") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+20h]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1882, ASSERT_TYPE_ASSERT, "( moveDef->seconds > 0.0f )", (const char *)&queryFormat, "moveDef->seconds > 0.0f") )
    __debugbreak();
  eventStreamBufferOffsetServer = _RBX->eventStreamBufferOffsetServer;
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
  __int64 v7; 
  unsigned int scriptableIndex; 
  const gentity_s *Entity; 
  const DObj *ServerDObjForEnt; 
  XAnimTree *Tree; 
  unsigned int v13; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 v16; 
  ScriptableInstanceContext *v17; 
  __int64 v18; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned int v20; 
  ScriptableEventDef *v21; 
  float fmt; 
  float fmta; 
  __int64 curveID; 
  __int64 v26; 
  void *retaddr; 

  if ( numEvents )
  {
    _RAX = &retaddr;
    _RBX = &events->type;
    __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
    v7 = numEvents;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      switch ( *_RBX )
      {
        case Scriptable_EventType_Random:
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(eventParams->scriptableIndex);
          v16 = *((unsigned __int16 *)_RBX + 24);
          v17 = InstanceCommonContext;
          v18 = v16;
          eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
          if ( v16 + 4 > eventStreamBufferSize )
          {
            LODWORD(v26) = eventStreamBufferSize;
            LODWORD(curveID) = v16 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2794, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", curveID, v26) )
              __debugbreak();
          }
          if ( v17->eventStreamBuffer[v18] )
          {
            v20 = *((_DWORD *)_RBX + 5);
            v21 = (ScriptableEventDef *)*((_QWORD *)_RBX + 3);
          }
          else
          {
            v20 = *((_DWORD *)_RBX + 8);
            v21 = (ScriptableEventDef *)*((_QWORD *)_RBX + 5);
          }
          ScriptableSv_StopStateEvents(eventParams, v21, v20);
          break;
        case Scriptable_EventType_Collision:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2658, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          if ( _RBX == (Scriptable_EventType *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2659, ASSERT_TYPE_ASSERT, "( collision )", (const char *)&queryFormat, "collision") )
            __debugbreak();
          if ( *((_BYTE *)_RBX + 35) )
            ScriptableSv_DestroyCollision(eventParams->scriptableIndex);
          break;
        case Scriptable_EventType_Animation:
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) || !*((_BYTE *)_RBX + 27) )
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
                  v13 = *((unsigned __int16 *)_RBX + 40);
                  if ( *((_BYTE *)_RBX + 26) )
                  {
                    __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
                    XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v13, fmt);
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbx+30h]
                      vmovss  dword ptr [rsp+78h+fmt], xmm0
                    }
                    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v13, fmta, LINEAR);
                  }
                }
              }
            }
          }
          break;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableSv_StopStateEventDisablePhysicsSubShape(eventParams, (const ScriptableEventDisablePhysicsSubShapeDef *)(_RBX + 2));
          break;
        case Scriptable_EventType_AddModel:
          ScriptableSv_StopStateEventAddModel(eventParams, (const ScriptableEventAddModelDef *)(_RBX + 2));
          break;
      }
      _RBX += 44;
      --v7;
    }
    while ( v7 );
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
ScriptableSv_UpdateEvent
==============
*/

void __fastcall ScriptableSv_UpdateEvent(double deltaTime, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, unsigned int *holdrand, ScriptableSvUpdateRequest *outRequest)
{
  char v16; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  bool v21; 
  bool v22; 
  unsigned int v27; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int v33; 
  const ScriptableEventDef *v34; 
  ScriptableEventDef *v36; 
  bool v39; 
  __int64 v40; 
  unsigned __int64 v41; 
  bool v43; 
  bool v44; 
  bool v45; 
  char v49; 
  ScriptableEventDef *eventsB; 
  ScriptableInstanceContext *v60; 
  __int64 v61; 
  ScriptableInstanceContext *v62; 
  unsigned __int64 v64; 
  bool v65; 
  bool v66; 
  bool v67; 
  __int64 v75; 
  unsigned int *v76; 
  unsigned int v77[2]; 
  ScriptableEventParams outParams; 
  int v79; 
  unsigned int v80; 
  __int64 v81; 
  const ScriptableDef *def; 
  int v83; 
  unsigned int v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  int flags; 
  int v95; 
  int v96; 
  __int64 v97; 
  __int16 v98; 
  int v99; 

  __asm { vmovaps [rsp+190h+var_50], xmm6 }
  _RDI = event;
  __asm { vmovaps xmm6, xmm0 }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  switch ( event->type )
  {
    case Scriptable_EventType_Wait:
      eventStreamBufferOffsetServer = event->data.wait.eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      _RDI = eventStreamBufferOffsetServer;
      v21 = eventStreamBufferOffsetServer + 4 <= eventStreamBufferSize;
      if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
      {
        v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2915, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", eventStreamBufferOffsetServer + 4, eventStreamBufferSize);
        v21 = !v22;
        if ( v22 )
          __debugbreak();
      }
      _RAX = InstanceCommonContext->eventStreamBuffer;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, dword ptr [rdi+rax]
        vcomiss xmm0, xmm1
      }
      if ( !v21 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm6
          vcomiss xmm0, xmm1
          vmovss  dword ptr [rdi+rax], xmm0
        }
        if ( v21 )
        {
          *(_DWORD *)&_RAX[_RDI] = 0;
          v27 = eventIdx + 1;
          ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
          PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
          if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2576, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
            __debugbreak();
          if ( PartRuntime->stateId >= part->numStates )
          {
            LODWORD(v76) = part->numStates;
            LODWORD(v75) = PartRuntime->stateId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2577, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part->numStates )", "runtime->stateId doesn't index part->numStates\n\t%i not in [0, %i)", v75, v76) )
              __debugbreak();
          }
          v29 = &part->states[PartRuntime->stateId];
          if ( v27 >= v29->base.numEvents )
          {
            LODWORD(v76) = v29->base.numEvents;
            LODWORD(v75) = eventIdx + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2580, ASSERT_TYPE_ASSERT, "(unsigned)( nextEvent ) < (unsigned)( stateDef->base.numEvents )", "nextEvent doesn't index stateDef->base.numEvents\n\t%i not in [0, %i)", v75, v76) )
              __debugbreak();
          }
          ScriptableSv_RunStateEvents(&outParams, holdrand, &v29->base.events[v27], v29->base.numEvents - v27);
        }
        *outRequest = (ScriptableSvUpdateRequest)257;
      }
      goto $LN82_3;
    case Scriptable_EventType_Random:
      v30 = event->data.random.eventStreamBufferOffsetServer;
      v31 = InstanceCommonContext->eventStreamBufferSize;
      v77[0] = event->data.random.eventStreamBufferOffsetServer;
      if ( v30 + 4 > v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2950, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v30 + 4, v31) )
        __debugbreak();
      eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
      v33 = 0;
      if ( eventStreamBuffer[v77[0]] )
      {
        if ( event->data.stateChange.stateIdx )
        {
          while ( 1 )
          {
            v34 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v33);
            if ( (v34->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableSv_UpdateEvent(*(const float *)&_XMM0, scriptableIndex, part, state, v34, v33, holdrand, outRequest);
              if ( outRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v33 >= event->data.stateChange.stateIdx )
              goto $LN82_3;
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
          v36 = &event->data.random.eventsB[v33];
          if ( (v36->base.flags & 0x200) != 0 )
          {
            __asm { vmovaps xmm0, xmm6; deltaTime }
            ScriptableSv_UpdateEvent(*(const float *)&_XMM0, scriptableIndex, part, state, v36, v33, holdrand, outRequest);
            if ( outRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v33 >= event->data.random.eventBCount )
            goto $LN82_3;
        }
        if ( !outRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2984, ASSERT_TYPE_ASSERT, "( outRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
          goto LABEL_29;
      }
$LN82_3:
      __asm { vmovaps xmm6, [rsp+190h+var_50] }
      return;
    case Scriptable_EventType_Animation:
      if ( event == (const ScriptableEventDef *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2869, ASSERT_TYPE_ASSERT, "( animation )", (const char *)&queryFormat, "animation") )
        __debugbreak();
      if ( !ScriptableSv_GetInstanceHasEntity(scriptableIndex) && !event->data.anonymous.buffer[11] && event->data.animation.eventAtEndCount )
      {
        v60 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        v61 = event->data.animation.eventStreamBufferOffsetServer;
        v62 = v60;
        _R12 = v61;
        v64 = v60->eventStreamBufferSize;
        v65 = v61 + 4 < v64;
        v66 = v61 + 4 <= v64;
        if ( v61 + 4 > v64 )
        {
          LODWORD(v75) = v61 + 4;
          v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2882, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v75, v64);
          v65 = 0;
          v66 = !v67;
          if ( v67 )
            __debugbreak();
        }
        _RAX = v62->eventStreamBuffer;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm2, dword ptr [r12+rax]
          vcomiss xmm2, xmm0
        }
        if ( v66 )
          goto LABEL_63;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vcomiss xmm1, xmm2
        }
        if ( v65 )
          goto LABEL_63;
        *(_DWORD *)&_RAX[_R12] = 0;
        v77[0] = ScriptableSv_GenerateRandSeed(scriptableIndex);
        ScriptableSv_InitEventParams(&outParams, scriptableIndex, part);
        ScriptableSv_RunStateEvents(&outParams, v77, event->data.animation.eventsAtEnd, event->data.animation.eventAtEndCount);
      }
      goto $LN82_3;
    case Scriptable_EventType_PartDamage:
      __asm
      {
        vmovaps [rsp+190h+var_60], xmm7; jumptable 00000001414E89C6 case 19
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm7, dword ptr [rdi+2Ch]
      }
      if ( !v16 )
      {
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2996, ASSERT_TYPE_ASSERT, "( event->data.partDamage.amountDoT > 0.f )", (const char *)&queryFormat, "event->data.partDamage.amountDoT > 0.f");
        v16 = 0;
        if ( v39 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, dword ptr [rdi+30h] }
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2997, ASSERT_TYPE_ASSERT, "( event->data.partDamage.intervalDoT > 0.f )", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0.f") )
        __debugbreak();
      v40 = event->data.partDamage.eventStreamBufferOffsetServer;
      v41 = InstanceCommonContext->eventStreamBufferSize;
      _R15 = v40;
      v43 = v40 + 4 < v41;
      v44 = v40 + 4 <= v41;
      if ( v40 + 4 > v41 )
      {
        LODWORD(v75) = v40 + 4;
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3001, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v75, v41);
        v43 = 0;
        v44 = !v45;
        if ( v45 )
          __debugbreak();
      }
      _R12 = InstanceCommonContext->eventStreamBuffer;
      __asm { vcomiss xmm7, dword ptr [r15+r12] }
      if ( v43 )
      {
        outRequest->eventUpdateRequired = 1;
        __asm
        {
          vmovss  xmm0, dword ptr [r15+r12]
          vsubss  xmm1, xmm0, xmm6
          vcomiss xmm1, xmm7
          vmovss  dword ptr [r15+r12], xmm1
        }
        if ( v44 )
        {
          v49 = 0;
          do
          {
            __asm { vcomiss xmm7, dword ptr [rdi+30h] }
            if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3018, ASSERT_TYPE_ASSERT, "( event->data.partDamage.intervalDoT > 0 )", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [r15+r12]
              vaddss  xmm1, xmm0, dword ptr [rdi+30h]
              vmovss  dword ptr [r15+r12], xmm1
            }
            eventsB = event->data.random.eventsB;
            if ( !eventsB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3025, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
              __debugbreak();
            ScriptableSv_InitEventParams(&outParams, scriptableIndex, (const ScriptablePartDef *)eventsB);
            *(_QWORD *)v77 = ScriptableSv_GetEntity(scriptableIndex);
            v79 = 0;
            v81 = 0i64;
            def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
            v80 = scriptableIndex;
            ScriptableCommon_AssertCountsInitialized();
            if ( v80 >= g_scriptableWorldCounts.serverInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(v76) = g_scriptableWorldCounts.serverInstanceCount;
              LODWORD(v75) = v80;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 3047, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvent.scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "damageEvent.scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v75, v76) )
                __debugbreak();
            }
            __asm { vcvttss2si r9, dword ptr [rdi+2Ch]; damage }
            v83 = (__int16)**(_WORD **)v77;
            v84 = v80;
            v85 = *(_QWORD *)v77;
            v86 = (__int16)**(_WORD **)v77;
            v87 = *(_QWORD *)v77;
            __asm
            {
              vmovss  [rbp+90h+var_DC], xmm7
              vmovss  [rbp+90h+var_D8], xmm7
              vmovss  [rbp+90h+var_D4], xmm7
              vmovss  [rbp+90h+var_E8], xmm7
              vmovss  [rbp+90h+var_E4], xmm7
              vmovss  [rbp+90h+var_E0], xmm7
            }
            flags = eventsB->base.flags;
            __asm { vcvttss2si eax, dword ptr [rdi+2Ch] }
            v96 = _EAX;
            outParams.damageEvent = (const ScriptableDamageEvent *)&v79;
            v95 = 0;
            v97 = 0i64;
            v98 = 0;
            v99 = 0;
            ScriptableBg_DamagePart(&outParams, (const ScriptablePartDef *)eventsB, 0x41u, _R9);
            __asm { vcomiss xmm7, dword ptr [r15+r12] }
          }
          while ( !v49 );
        }
      }
      __asm { vmovaps xmm7, [rsp+190h+var_60] }
      goto $LN82_3;
    case Scriptable_EventType_ApplyConstantForce:
      __asm { vmovaps xmm2, xmm6; deltaTime }
      if ( ScriptableSv_UpdateEventApplyConstantForce(scriptableIndex, (const ScriptableEventApplyConstantForceDef *)&event->data, *(float *)&_XMM2) )
LABEL_63:
        outRequest->eventUpdateRequired = 1;
      goto $LN82_3;
    case Scriptable_EventType_ApplyConstantAngularForce:
      __asm { vmovaps xmm2, xmm6; deltaTime }
      if ( ScriptableSv_UpdateEventApplyConstantAngularForce(scriptableIndex, (const ScriptableEventApplyConstantAngularForceDef *)&event->data, *(float *)&_XMM2) )
        outRequest->eventUpdateRequired = 1;
      goto $LN82_3;
    case Scriptable_EventType_Move:
      __asm { vmovaps xmm2, xmm6; deltaTime }
      ScriptableSv_UpdateStateEventMove(scriptableIndex, (const ScriptableEventMoveDef *const)&event->data, *(float *)&_XMM2, outRequest);
      goto $LN82_3;
    case Scriptable_EventType_GravityArc:
      __asm { vmovaps xmm3, xmm6; deltaTime }
      ScriptableSv_UpdateStateEventGravityArc(scriptableIndex, (const ScriptableEventGravityArcDef *const)&event->data, part, *(float *)&_XMM3, outRequest);
      goto $LN82_3;
    default:
      goto $LN82_3;
  }
}

/*
==============
ScriptableSv_UpdateEventApplyConstantAngularForce
==============
*/

bool __fastcall ScriptableSv_UpdateEventApplyConstantAngularForce(const unsigned int scriptableIndex, const ScriptableEventApplyConstantAngularForceDef *applyConstantAngularForce, double deltaTime)
{
  bool result; 
  const gentity_s *Entity; 
  G_PhysicsObject *v15; 
  unsigned int v16; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  int NumRigidBodys; 
  signed int v72; 
  int v74; 
  unsigned int RigidBodyID; 
  __int64 v81; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+128h+var_98], xmm12
    vmovaps xmm12, xmm2
  }
  result = ScriptableSv_GetInstanceHasEntity(scriptableIndex);
  if ( result )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v15 = G_PhysicsObject_Get(Entity);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1783, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v16 = v15->physicsInstances[0];
    if ( v16 != -1 && Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v16, 0) )
    {
      __asm
      {
        vmovaps [rsp+128h+var_38], xmm6
        vmovaps [rsp+128h+var_48], xmm7
        vmovaps [rsp+128h+var_58], xmm8
        vmovaps [rsp+128h+var_68], xmm9
        vmovaps [rsp+128h+var_78], xmm10
        vmovaps [rsp+128h+var_88], xmm11
      }
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      eventStreamBufferOffsetServer = applyConstantAngularForce->eventStreamBufferOffsetServer;
      _RBX = InstanceCommonContext;
      _RDI = eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      if ( eventStreamBufferOffsetServer + 12 > eventStreamBufferSize )
      {
        LODWORD(v81) = eventStreamBufferOffsetServer + 12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1802, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 3 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v81, eventStreamBufferSize) )
          __debugbreak();
      }
      _RAX = _RBX->eventStreamBuffer;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vmovss  xmm6, dword ptr [rdi+rax]
        vmovss  xmm7, dword ptr [rdi+rax+4]
        vmovss  xmm8, dword ptr [rdi+rax+8]
        vmovss  dword ptr [rsp+128h+angles], xmm0
        vmovss  xmm1, dword ptr [rbx+30h]
        vmovss  dword ptr [rsp+128h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rbx+34h]
        vmovss  dword ptr [rsp+128h+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      __asm
      {
        vmovss  xmm11, cs:__real@3f800000
        vsubss  xmm0, xmm11, xmm6
        vmulss  xmm1, xmm0, dword ptr [rbp+0Ch]
        vmulss  xmm0, xmm6, dword ptr [rbp+18h]
        vaddss  xmm9, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbp+1Ch]
        vsubss  xmm1, xmm11, xmm7
        vmulss  xmm2, xmm1, dword ptr [rbp+10h]
        vsubss  xmm1, xmm11, xmm8
        vaddss  xmm10, xmm2, xmm0
        vmulss  xmm0, xmm8, dword ptr [rbp+20h]
        vmulss  xmm2, xmm1, dword ptr [rbp+14h]
        vmovaps xmm8, [rsp+128h+var_58]
        vaddss  xmm5, xmm2, xmm0
      }
      if ( applyConstantAngularForce->worldSpace )
      {
        __asm
        {
          vmovaps xmm6, xmm9
          vmovaps xmm7, xmm10
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm5, dword ptr [rsp+128h+axis+18h]
          vmulss  xmm0, xmm5, dword ptr [rsp+128h+axis+1Ch]
          vmulss  xmm3, xmm10, dword ptr [rsp+128h+axis+0Ch]
          vmulss  xmm2, xmm9, dword ptr [rsp+128h+axis]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm10, dword ptr [rsp+128h+axis+10h]
          vmulss  xmm2, xmm9, dword ptr [rsp+128h+axis+8]
          vaddss  xmm6, xmm4, xmm1
          vmulss  xmm1, xmm9, dword ptr [rsp+128h+axis+4]
          vaddss  xmm4, xmm3, xmm1
          vmulss  xmm3, xmm10, dword ptr [rsp+128h+axis+14h]
          vaddss  xmm7, xmm4, xmm0
          vmulss  xmm0, xmm5, dword ptr [rsp+128h+axis+20h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm5, xmm4, xmm0
        }
      }
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
        vdivss  xmm2, xmm11, xmm0
        vmulss  xmm0, xmm2, xmm6
        vmovss  dword ptr [rsp+128h+torqueVector], xmm0
        vmulss  xmm0, xmm2, xmm5
        vmulss  xmm1, xmm7, xmm2
        vmovss  dword ptr [rsp+128h+torqueVector+8], xmm0
        vmovss  dword ptr [rsp+128h+torqueVector+4], xmm1
        vmulss  xmm6, xmm12, xmm3
      }
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v16);
      __asm { vmovaps xmm11, [rsp+128h+var_88] }
      v72 = 0;
      __asm { vmovaps xmm10, [rsp+128h+var_78] }
      v74 = NumRigidBodys;
      __asm
      {
        vmovaps xmm9, [rsp+128h+var_68]
        vmovaps xmm7, [rsp+128h+var_48]
      }
      if ( NumRigidBodys > 0 )
      {
        do
        {
          RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v16, v72);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1849, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
          {
            __asm { vmovaps xmm3, xmm6; magnitude }
            Physics_ApplyAngularImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &torqueVector, *(float *)&_XMM3);
          }
          ++v72;
        }
        while ( v72 < v74 );
      }
      __asm { vmovaps xmm6, [rsp+128h+var_38] }
    }
    result = 1;
  }
  __asm { vmovaps xmm12, [rsp+128h+var_98] }
  return result;
}

/*
==============
ScriptableSv_UpdateEventApplyConstantForce
==============
*/

bool __fastcall ScriptableSv_UpdateEventApplyConstantForce(const unsigned int scriptableIndex, const ScriptableEventApplyConstantForceDef *applyConstantForce, double deltaTime)
{
  bool result; 
  const gentity_s *Entity; 
  G_PhysicsObject *v17; 
  unsigned int v18; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int64 eventStreamBufferSize; 
  bool v37; 
  int NumRigidBodys; 
  signed int v116; 
  int v118; 
  unsigned int RigidBodyID; 
  float fmt; 
  __int64 v128; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 

  __asm { vmovss  [rsp+178h+var_138], xmm2 }
  result = ScriptableSv_GetInstanceHasEntity(scriptableIndex);
  if ( result )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    v17 = G_PhysicsObject_Get(Entity);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1672, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v18 = v17->physicsInstances[0];
    if ( v18 != -1 && Physics_IsInstanceInWorld(PHYSICS_WORLD_ID_FIRST, v18, 0) )
    {
      __asm
      {
        vmovaps [rsp+178h+var_38], xmm6
        vmovaps [rsp+178h+var_48], xmm7
        vmovaps [rsp+178h+var_58], xmm8
        vmovaps [rsp+178h+var_68], xmm9
        vmovaps [rsp+178h+var_78], xmm10
        vmovaps [rsp+178h+var_88], xmm11
        vmovaps [rsp+178h+var_98], xmm12
        vmovaps [rsp+178h+var_A8], xmm13
        vmovaps [rsp+178h+var_B8], xmm14
        vmovaps [rsp+178h+var_C8], xmm15
      }
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      eventStreamBufferOffsetServer = applyConstantForce->eventStreamBufferOffsetServer;
      _RBX = InstanceCommonContext;
      _RDI = eventStreamBufferOffsetServer;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      if ( eventStreamBufferOffsetServer + 24 > eventStreamBufferSize )
      {
        LODWORD(v128) = eventStreamBufferOffsetServer + 24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1691, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 6 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v128, eventStreamBufferSize) )
          __debugbreak();
      }
      _RAX = _RBX->eventStreamBuffer;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vmovss  xmm6, dword ptr [rdi+rax]
        vmovss  xmm7, dword ptr [rdi+rax+4]
        vmovss  xmm8, dword ptr [rdi+rax+8]
        vmovss  xmm9, dword ptr [rdi+rax+0Ch]
        vmovss  xmm10, dword ptr [rdi+rax+10h]
        vmovss  xmm11, dword ptr [rdi+rax+14h]
        vmovss  dword ptr [rsp+178h+angles], xmm0
        vmovss  xmm1, dword ptr [rbx+30h]
        vmovss  dword ptr [rsp+178h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rbx+34h]
        vmovss  dword ptr [rsp+178h+angles+8], xmm0
        vmovss  xmm12, dword ptr [rbx+20h]
        vmovss  xmm13, dword ptr [rbx+24h]
        vmovss  xmm14, dword ptr [rbx+28h]
      }
      AnglesToAxis(&angles, &axis);
      v37 = !applyConstantForce->worldSpace;
      __asm
      {
        vmovss  xmm15, cs:__real@3f800000
        vsubss  xmm0, xmm15, xmm6
        vmulss  xmm1, xmm0, dword ptr [rbp+0Ch]
        vmulss  xmm0, xmm6, dword ptr [rbp+24h]
        vaddss  xmm5, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbp+28h]
        vsubss  xmm1, xmm15, xmm7
        vmulss  xmm2, xmm1, dword ptr [rbp+10h]
        vaddss  xmm4, xmm2, xmm0
        vmulss  xmm0, xmm8, dword ptr [rbp+2Ch]
        vsubss  xmm1, xmm15, xmm8
        vmulss  xmm2, xmm1, dword ptr [rbp+14h]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm9, dword ptr [rbp+30h]
        vsubss  xmm1, xmm15, xmm9
        vmulss  xmm2, xmm1, dword ptr [rbp+18h]
        vmovss  xmm9, dword ptr [rsp+178h+axis]
        vaddss  xmm7, xmm2, xmm0
        vmulss  xmm0, xmm10, dword ptr [rbp+34h]
        vsubss  xmm1, xmm15, xmm10
        vmulss  xmm2, xmm1, dword ptr [rbp+1Ch]
        vmovss  xmm10, dword ptr [rsp+178h+axis+0Ch]
        vaddss  xmm8, xmm2, xmm0
        vmulss  xmm0, xmm11, dword ptr [rbp+38h]
        vsubss  xmm1, xmm15, xmm11
        vmulss  xmm2, xmm1, dword ptr [rbp+20h]
        vmovss  xmm11, dword ptr [rsp+178h+axis+18h]
        vaddss  xmm6, xmm2, xmm0
        vmulss  xmm0, xmm10, xmm4
        vmulss  xmm1, xmm9, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, xmm3
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, xmm12
        vmulss  xmm0, xmm4, dword ptr [rsp+178h+axis+10h]
        vmovss  xmm12, dword ptr [rsp+178h+axis+4]
        vmovss  dword ptr [rsp+178h+position], xmm2
        vmulss  xmm1, xmm12, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsp+178h+axis+1Ch]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, xmm13
        vmulss  xmm0, xmm4, dword ptr [rsp+178h+axis+14h]
        vmovss  xmm13, dword ptr [rsp+178h+axis+8]
        vmulss  xmm1, xmm13, xmm5
        vmovss  dword ptr [rsp+178h+position+4], xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsp+178h+axis+20h]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, xmm14
        vmovaps xmm14, [rsp+178h+var_B8]
        vmovss  dword ptr [rsp+178h+position+8], xmm2
      }
      if ( v37 )
      {
        __asm
        {
          vmulss  xmm3, xmm8, dword ptr [rsp+178h+axis+10h]
          vmulss  xmm1, xmm10, xmm8
          vmulss  xmm0, xmm9, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm11, xmm6
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm1, xmm6, dword ptr [rsp+178h+axis+1Ch]
          vmulss  xmm0, xmm12, xmm7
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm3, xmm8, dword ptr [rsp+178h+axis+14h]
          vaddss  xmm5, xmm2, xmm1
          vmulss  xmm1, xmm6, dword ptr [rsp+178h+axis+20h]
          vmulss  xmm0, xmm13, xmm7
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm6, xmm2, xmm1
        }
      }
      else
      {
        __asm
        {
          vmovaps xmm4, xmm7
          vmovaps xmm5, xmm8
        }
      }
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm15, xmm0
        vdivss  xmm2, xmm15, xmm0
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsp+178h+normalizedDirection], xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm6, xmm3, [rsp+178h+var_138]
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rsp+178h+normalizedDirection+8], xmm0
        vmovss  dword ptr [rsp+178h+normalizedDirection+4], xmm1
      }
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v18);
      __asm { vmovaps xmm15, [rsp+178h+var_C8] }
      v116 = 0;
      __asm { vmovaps xmm13, [rsp+178h+var_A8] }
      v118 = NumRigidBodys;
      __asm
      {
        vmovaps xmm12, [rsp+178h+var_98]
        vmovaps xmm11, [rsp+178h+var_88]
        vmovaps xmm10, [rsp+178h+var_78]
        vmovaps xmm9, [rsp+178h+var_68]
        vmovaps xmm8, [rsp+178h+var_58]
        vmovaps xmm7, [rsp+178h+var_48]
      }
      if ( NumRigidBodys > 0 )
      {
        do
        {
          RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v18, v116);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1753, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
          {
            __asm { vmovss  dword ptr [rsp+178h+fmt], xmm6 }
            Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &normalizedDirection, fmt);
          }
          ++v116;
        }
        while ( v116 < v118 );
      }
      __asm { vmovaps xmm6, [rsp+178h+var_38] }
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

void __fastcall ScriptableSv_UpdateInstanceEvents(double deltaTime, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  unsigned int v6; 
  const ScriptablePartDef *v7; 
  const dvar_t *v9; 
  ScriptableSvUpdateRequest outRequest; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
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
  v6 = 0;
  outRequest = 0;
  if ( !def->numParts )
    goto LABEL_14;
  do
  {
    v7 = &def->parts[v6];
    if ( (v7->flags & 0x202) == 514 )
    {
      __asm { vmovaps xmm0, xmm6; deltaTime }
      ScriptableSv_UpdatePart(*(const float *)&_XMM0, scriptableIndex, v7, &outRequest);
    }
    ++v6;
  }
  while ( v6 < def->numParts );
  if ( !outRequest.eventUpdateRequired )
  {
LABEL_14:
    v9 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
    if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      Com_Printf(29, "ScriptableSv_UpdateInstance: Event Update no longer required for instance %i (%s)\n", scriptableIndex, def->name);
    ScriptableSv_RemoveFromEventUpdateList(scriptableIndex);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  const ScriptableDef *def; 
  unsigned int navmeshObstacleId; 
  int flags; 
  char v13; 

  _RBP = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
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
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+18h]; angle2
        vmovss  xmm0, dword ptr [rbp+30h]; angle1
        vmovaps [rsp+58h+var_18], xmm6
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      _RBX = DCONST_DVARFLT_doorNavObstacleAngle;
      __asm { vandps  xmm6, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      if ( !DCONST_DVARFLT_doorNavObstacleAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "doorNavObstacleAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vcomiss xmm6, dword ptr [rbx+28h]
        vmovaps xmm6, [rsp+58h+var_18]
      }
      if ( !v13 )
        InstanceCollisionContext->navmeshObstacleId = ScriptableSv_CreateModelNavObstacle(scriptableIndex);
    }
  }
}

/*
==============
ScriptableSv_UpdatePart
==============
*/

void __fastcall ScriptableSv_UpdatePart(double deltaTime, const unsigned int scriptableIndex, const ScriptablePartDef *part, ScriptableSvUpdateRequest *outRequest)
{
  unsigned int v5; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 stateId; 
  ScriptableStateDef *v12; 
  unsigned int RandSeed; 
  unsigned int v14; 
  const ScriptableEventDef *v15; 
  ScriptablePartDef *v17; 
  __int64 eventIdx; 
  unsigned int holdrand; 

  v5 = 0;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm0
  }
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
    v12 = &part->states[stateId];
    if ( (v12->base.flags & 0x200) != 0 )
    {
      RandSeed = ScriptableSv_GenerateRandSeed(scriptableIndex);
      outRequest->stopUpdatingEventsForState = 0;
      v14 = 0;
      holdrand = RandSeed;
      if ( v12->base.numEvents )
      {
        while ( 1 )
        {
          v15 = &v12->base.events[v14];
          if ( (v15->base.flags & 0x200) != 0 )
          {
            __asm { vmovaps xmm0, xmm6; deltaTime }
            ScriptableSv_UpdateEvent(*(double *)&_XMM0, scriptableIndex, part, v12, v15, v14, &holdrand, outRequest);
            if ( outRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v14 >= v12->base.numEvents )
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
      v17 = &part->childParts[v5];
      if ( (v17->flags & 0x202) == 514 )
      {
        __asm { vmovaps xmm0, xmm6; deltaTime }
        ScriptableSv_UpdatePart(*(const float *)&_XMM0, scriptableIndex, v17, outRequest);
      }
      ++v5;
    }
    while ( v5 < part->numChildParts );
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
ScriptableSv_UpdateStateEventGravityArc
==============
*/
void ScriptableSv_UpdateStateEventGravityArc(const unsigned int scriptableIndex, const ScriptableEventGravityArcDef *const moveDef, const ScriptablePartDef *part, float deltaTime, ScriptableSvUpdateRequest *outRequest)
{
  unsigned __int8 *Data; 
  int v14; 
  ScriptableCollisionServerContext *v15; 
  unsigned int v16; 
  ScriptableCollisionServerContext *v23; 
  unsigned int v24; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int16 stateId; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int *p_scriptableCollisionMain; 
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
  _RBX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableSv_GravityArcCalcData(scriptableIndex, _RBX, moveDef, &arcData);
  Data = ScriptableSv_StateEventGravityArcGetData(_RBX, moveDef);
  v14 = *(_DWORD *)Data;
  if ( level.time <= *(_DWORD *)Data + arcData.durationMS )
  {
    __asm
    {
      vmovss  xmm2, [rbp+50h+arcData.gravity]; gravity
      vmovaps [rsp+150h+var_40], xmm6
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, edx
      vcvtsi2ss xmm0, xmm0, eax
      vmovaps [rsp+150h+var_50], xmm7
      vdivss  xmm7, xmm1, xmm0
    }
    ScriptableBg_GravityArcCalcDelta(&arcData.velocity, level.time - v14, *(const float *)&_XMM2, &out_result);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+50h+arcData.startOrigin]
      vaddss  xmm6, xmm0, dword ptr [rbp+50h+out_result]
      vmovss  xmm1, dword ptr [rbp+50h+arcData.startOrigin+4]
      vaddss  xmm0, xmm1, dword ptr [rbp+50h+out_result+4]
      vmovss  xmm2, dword ptr [rbp+50h+arcData.startOrigin+8]
      vaddss  xmm1, xmm2, dword ptr [rbp+50h+out_result+8]
      vmovss  dword ptr [rsp+150h+origin+4], xmm0
      vmovss  xmm0, dword ptr [rbp+50h+arcData.endAngles]
      vmovss  dword ptr [rsp+150h+origin+8], xmm1
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+arcData.startAngles]
      vmovss  xmm0, dword ptr [rbp+50h+arcData.endAngles+4]
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+arcData.startAngles+4]
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+arcData.startAngles]
      vmovss  xmm0, dword ptr [rbp+50h+arcData.endAngles+8]
      vmovss  dword ptr [rsp+150h+angles], xmm3
      vmovss  dword ptr [rsp+150h+origin], xmm6
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm1, xmm0, dword ptr [rbp+50h+arcData.startAngles+8]
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+arcData.startAngles+4]
      vmovss  dword ptr [rsp+150h+angles+4], xmm3
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rbp+50h+arcData.startAngles+8]
      vmovss  dword ptr [rsp+150h+angles+8], xmm3
      vmovss  dword ptr [rbx+20h], xmm6
      vmovss  xmm0, dword ptr [rsp+150h+origin+4]
      vmovss  dword ptr [rbx+24h], xmm0
      vmovss  xmm1, dword ptr [rsp+150h+origin+8]
      vmovss  dword ptr [rbx+28h], xmm1
      vmovss  xmm0, dword ptr [rsp+150h+angles]
      vmovss  dword ptr [rbx+2Ch], xmm0
      vmovss  xmm1, dword ptr [rsp+150h+angles+4]
      vmovss  dword ptr [rbx+30h], xmm1
      vmovss  xmm0, dword ptr [rsp+150h+angles+8]
      vmovss  dword ptr [rbx+34h], xmm0
    }
    InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
    __asm { vmovaps xmm7, [rsp+150h+var_50] }
    p_scriptableCollisionMain = &InstanceCollisionContext->scriptableCollisionMain;
    __asm { vmovaps xmm6, [rsp+150h+var_40] }
    scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
    scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
    if ( InstanceCollisionContext->scriptableCollisionMain != -1 || scriptableCollisionDetail != -1 )
    {
      AnglesToQuat(&angles, &quat);
      if ( scriptableCollisionMain != -1 )
        ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, *p_scriptableCollisionMain, &origin, &quat, KEYFRAME);
      if ( scriptableCollisionDetail != -1 )
        ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, p_scriptableCollisionMain[1], &origin, &quat, WARP);
    }
    *((_BYTE *)&_RBX->ScriptableInstanceContextSecure + 61) |= 2u;
    goto LABEL_28;
  }
  v15 = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  if ( v15->scriptableCollisionMain != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_FIRST, v15->scriptableCollisionMain);
  v16 = v15->scriptableCollisionDetail;
  if ( v16 != -1 )
    ScriptableBg_PhysicsClearVelocity(PHYSICS_WORLD_ID_SERVER_DETAIL, v16);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+50h+arcData.endOrigin]
    vmovss  dword ptr [rbx+20h], xmm0
    vmovss  xmm1, dword ptr [rbp+50h+arcData.endOrigin+4]
    vmovss  dword ptr [rbx+24h], xmm1
    vmovss  xmm0, dword ptr [rbp+50h+arcData.endOrigin+8]
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  xmm1, dword ptr [rbp+50h+arcData.endAngles]
    vmovss  dword ptr [rbx+2Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+50h+arcData.endAngles+4]
    vmovss  dword ptr [rbx+30h], xmm0
    vmovss  xmm1, dword ptr [rbp+50h+arcData.endAngles+8]
    vmovss  dword ptr [rbx+34h], xmm1
  }
  v23 = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  v24 = v23->scriptableCollisionDetail;
  holdrand = v23->scriptableCollisionMain;
  if ( __PAIR64__(v24, holdrand) != -1i64 )
  {
    AnglesToQuat(&arcData.endAngles, &quat);
    if ( holdrand != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, v23->scriptableCollisionMain, &arcData.endOrigin, &quat, WARP);
    if ( v24 != -1 )
      ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, v23->scriptableCollisionDetail, &arcData.endOrigin, &quat, WARP);
  }
  *((_BYTE *)&_RBX->ScriptableInstanceContextSecure + 61) &= ~2u;
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

  _RDI = moveDef;
  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2009, ASSERT_TYPE_ASSERT, "( moveDef )", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( ScriptableSv_StateEventMoveGetData(InstanceCommonContext, _RDI)->startTime )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+20h]
    }
  }
}

