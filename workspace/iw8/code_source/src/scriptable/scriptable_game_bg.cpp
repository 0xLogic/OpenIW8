/*
==============
ScriptableBg_ExecutePartChange
==============
*/

void __fastcall ScriptableBg_ExecutePartChange(ScriptableEventParams *eventParams, unsigned int newState, bool onTime)
{
  ?ScriptableBg_ExecutePartChange@@YAXPEAUScriptableEventParams@@I_N@Z(eventParams, newState, onTime);
}

/*
==============
ScriptableBg_GetStateFromName
==============
*/

void __fastcall ScriptableBg_GetStateFromName(ScriptablePartDef *partDef, const scr_string_t stateName, unsigned int *stateIdx, ScriptableStateDef **stateDef)
{
  ?ScriptableBg_GetStateFromName@@YAXPEAUScriptablePartDef@@W4scr_string_t@@PEAIPEAPEAUScriptableStateDef@@@Z(partDef, stateName, stateIdx, stateDef);
}

/*
==============
ScriptableBg_GravityArcEncodePayload
==============
*/

unsigned __int16 __fastcall ScriptableBg_GravityArcEncodePayload(const vec3_t *begin, const vec3_t *end)
{
  return ?ScriptableBg_GravityArcEncodePayload@@YAGAEBTvec3_t@@0@Z(begin, end);
}

/*
==============
ScriptableBg_FindAnimations
==============
*/

void __fastcall ScriptableBg_FindAnimations(int animUser)
{
  ?ScriptableBg_FindAnimations@@YAXH@Z(animUser);
}

/*
==============
ScriptableBg_GravityArcCalcData
==============
*/

void __fastcall ScriptableBg_GravityArcCalcData(const ScriptableEventGravityArcDef *const moveDef, unsigned __int16 payload, const vec3_t *originInitial, const vec3_t *anglesInitial, ScriptableGravityArcRuntimeData *arcData)
{
  ?ScriptableBg_GravityArcCalcData@@YAXQEBUScriptableEventGravityArcDef@@GAEBTvec3_t@@1AEAUScriptableGravityArcRuntimeData@@@Z(moveDef, payload, originInitial, anglesInitial, arcData);
}

/*
==============
ScriptableBg_ChooseAnimationStartTimeAndRate
==============
*/

void __fastcall ScriptableBg_ChooseAnimationStartTimeAndRate(const ScriptableEventAnimationDef *animation, unsigned int *holdrand, float *outStartTime, float *outRate)
{
  ?ScriptableBg_ChooseAnimationStartTimeAndRate@@YAXPEBUScriptableEventAnimationDef@@PEAIPEAM2@Z(animation, holdrand, outStartTime, outRate);
}

/*
==============
ScriptableBg_PhysicsSetPose
==============
*/

void __fastcall ScriptableBg_PhysicsSetPose(Physics_WorldId physicsWorld, unsigned int physicsInstance, const vec3_t *origin, const vec4_t *quat, Scriptable_PhysicsSetPoseCmd setcmd)
{
  ?ScriptableBg_PhysicsSetPose@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@W4Scriptable_PhysicsSetPoseCmd@@@Z(physicsWorld, physicsInstance, origin, quat, setcmd);
}

/*
==============
ScriptableBg_GetScriptableDef
==============
*/

const ScriptableDef *__fastcall ScriptableBg_GetScriptableDef(const int eType, const DObj *obj)
{
  return ?ScriptableBg_GetScriptableDef@@YAPEBUScriptableDef@@HPEBUDObj@@@Z(eType, obj);
}

/*
==============
ScriptableBg_ValidateStandaloneDef
==============
*/

bool __fastcall ScriptableBg_ValidateStandaloneDef(const ScriptableDef *def)
{
  return ?ScriptableBg_ValidateStandaloneDef@@YA_NPEBUScriptableDef@@@Z(def);
}

/*
==============
ScriptableBg_EnterState
==============
*/

void __fastcall ScriptableBg_EnterState(ScriptableEventParams *eventParams, bool onTime)
{
  ?ScriptableBg_EnterState@@YAXPEAUScriptableEventParams@@_N@Z(eventParams, onTime);
}

/*
==============
ScriptableBg_LerpVector
==============
*/

bool __fastcall ScriptableBg_LerpVector(const vec3_t *begin, const vec3_t *end, const int beginLerpTime, const int currTime, const float fTotalTimeSec, const float fAccelTimeSec, const float fDecelTimeSec, vec3_t *out_result)
{
  return ?ScriptableBg_LerpVector@@YA_NAEBTvec3_t@@0HHMMMAEAT1@@Z(begin, end, beginLerpTime, currTime, fTotalTimeSec, fAccelTimeSec, fDecelTimeSec, out_result);
}

/*
==============
ScriptableBg_GetPartFromName
==============
*/

void __fastcall ScriptableBg_GetPartFromName(const ScriptableDef *def, const scr_string_t partName, unsigned int *out_partIdx, ScriptablePartDef **out_partDef)
{
  ?ScriptableBg_GetPartFromName@@YAXPEBUScriptableDef@@W4scr_string_t@@PEAIPEAPEAUScriptablePartDef@@@Z(def, partName, out_partIdx, out_partDef);
}

/*
==============
ScriptableBg_LerpCalcEndPoints
==============
*/

void __fastcall ScriptableBg_LerpCalcEndPoints(const vec3_t *originInitial, const vec3_t *anglesInitial, const ScriptableEventMoveDef *const moveDef, vec3_t *out_endOrigin, vec3_t *out_endAngles)
{
  ?ScriptableBg_LerpCalcEndPoints@@YAXAEBTvec3_t@@0QEBUScriptableEventMoveDef@@AEAT1@2@Z(originInitial, anglesInitial, moveDef, out_endOrigin, out_endAngles);
}

/*
==============
ScriptableBg_SetupAntilagCommand
==============
*/

void __fastcall ScriptableBg_SetupAntilagCommand(BgAntiLagLerpMoverCmd *out_cmd, const unsigned int userId, const Bounds *bounds, const unsigned int startTime, const vec3_t *startOrigin, const vec3_t *startAngles, const vec3_t *endOrigin, const vec3_t *endAngles, const ScriptableEventMoveDef *const moveDef)
{
  ?ScriptableBg_SetupAntilagCommand@@YAXAEAUBgAntiLagLerpMoverCmd@@IAEBUBounds@@IAEBTvec3_t@@222QEBUScriptableEventMoveDef@@@Z(out_cmd, userId, bounds, startTime, startOrigin, startAngles, endOrigin, endAngles, moveDef);
}

/*
==============
ScriptableBg_GetScriptableDefFromIndex
==============
*/

const ScriptableDef *__fastcall ScriptableBg_GetScriptableDefFromIndex(const unsigned int scriptableIndex, const ScriptableContext context)
{
  return ?ScriptableBg_GetScriptableDefFromIndex@@YAPEBUScriptableDef@@IW4ScriptableContext@@@Z(scriptableIndex, context);
}

/*
==============
ScriptableBg_PhysicsClearVelocity
==============
*/

void __fastcall ScriptableBg_PhysicsClearVelocity(Physics_WorldId physicsWorld, unsigned int physicsInstance)
{
  ?ScriptableBg_PhysicsClearVelocity@@YAXW4Physics_WorldId@@I@Z(physicsWorld, physicsInstance);
}

/*
==============
ScriptableBg_FindAnimationTrees
==============
*/

void __fastcall ScriptableBg_FindAnimationTrees(int animUser)
{
  ?ScriptableBg_FindAnimationTrees@@YAXH@Z(animUser);
}

/*
==============
ScriptableBg_ChangePartState
==============
*/

void __fastcall ScriptableBg_ChangePartState(ScriptableEventParams *eventParams, unsigned int newState, bool onTime)
{
  ?ScriptableBg_ChangePartState@@YAXPEAUScriptableEventParams@@I_N@Z(eventParams, newState, onTime);
}

/*
==============
ScriptableBg_GravityArcCalcDelta
==============
*/

void __fastcall ScriptableBg_GravityArcCalcDelta(const vec3_t *velocity, const int durationMS, const float gravity, vec3_t *out_result)
{
  ?ScriptableBg_GravityArcCalcDelta@@YAXAEBTvec3_t@@HMAEAT1@@Z(velocity, durationMS, gravity, out_result);
}

/*
==============
ScriptableBg_ExitState
==============
*/

void __fastcall ScriptableBg_ExitState(ScriptableEventParams *eventParams)
{
  ?ScriptableBg_ExitState@@YAXPEAUScriptableEventParams@@@Z(eventParams);
}

/*
==============
ScriptableBg_ChangePartState
==============
*/
void ScriptableBg_ChangePartState(ScriptableEventParams *eventParams, unsigned int newState, bool onTime)
{
  ScriptableEventCallbackTable *callbacks; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 86, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 87, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  callbacks = eventParams->callbacks;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 91, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !callbacks->getStateCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 94, ASSERT_TYPE_ASSERT, "( callbacks->getStateCallback )", (const char *)&queryFormat, "callbacks->getStateCallback") )
    __debugbreak();
  if ( newState != callbacks->getStateCallback(eventParams) )
  {
    if ( !callbacks->shutdownEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 102, ASSERT_TYPE_ASSERT, "( callbacks->shutdownEventsCallback )", (const char *)&queryFormat, "callbacks->shutdownEventsCallback") )
      __debugbreak();
    callbacks->shutdownEventsCallback(eventParams);
    if ( !callbacks->setStateCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 106, ASSERT_TYPE_ASSERT, "( callbacks->setStateCallback )", (const char *)&queryFormat, "callbacks->setStateCallback") )
      __debugbreak();
    callbacks->setStateCallback(eventParams, newState);
    if ( !callbacks->runEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 110, ASSERT_TYPE_ASSERT, "( callbacks->runEventsCallback )", (const char *)&queryFormat, "callbacks->runEventsCallback") )
      __debugbreak();
    callbacks->runEventsCallback(eventParams, onTime);
  }
}

/*
==============
ScriptableBg_ChooseAnimationStartTimeAndRate
==============
*/
void ScriptableBg_ChooseAnimationStartTimeAndRate(const ScriptableEventAnimationDef *animation, unsigned int *holdrand, float *outStartTime, float *outRate)
{
  float startTimeMin; 
  float startTimeMax; 
  double v10; 
  float playbackRateMax; 

  if ( !outStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 322, ASSERT_TYPE_ASSERT, "(outStartTime)", (const char *)&queryFormat, "outStartTime") )
    __debugbreak();
  if ( !outRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 323, ASSERT_TYPE_ASSERT, "(outRate)", (const char *)&queryFormat, "outRate") )
    __debugbreak();
  startTimeMin = animation->startTimeMin;
  startTimeMax = animation->startTimeMax;
  if ( startTimeMax > startTimeMin )
    BG_flrand(animation->startTimeMin, startTimeMax, holdrand);
  *(float *)&v10 = animation->playbackRateMin;
  playbackRateMax = animation->playbackRateMax;
  if ( playbackRateMax > *(float *)&v10 )
    v10 = BG_flrand(*(float *)&v10, playbackRateMax, holdrand);
  *outStartTime = startTimeMin;
  *outRate = *(float *)&v10;
}

/*
==============
ScriptableBg_EnterState
==============
*/
void ScriptableBg_EnterState(ScriptableEventParams *eventParams, bool onTime)
{
  ScriptableEventCallbackTable *callbacks; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 69, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 70, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  callbacks = eventParams->callbacks;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 74, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !callbacks->runEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 77, ASSERT_TYPE_ASSERT, "( callbacks->runEventsCallback )", (const char *)&queryFormat, "callbacks->runEventsCallback") )
    __debugbreak();
  callbacks->runEventsCallback(eventParams, onTime);
}

/*
==============
ScriptableBg_ExecutePartChange
==============
*/
void ScriptableBg_ExecutePartChange(ScriptableEventParams *eventParams, unsigned int newState, bool onTime)
{
  ScriptableEventCallbackTable *callbacks; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 119, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 120, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  callbacks = eventParams->callbacks;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 124, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !callbacks->shutdownEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 127, ASSERT_TYPE_ASSERT, "( callbacks->shutdownEventsCallback )", (const char *)&queryFormat, "callbacks->shutdownEventsCallback") )
    __debugbreak();
  callbacks->shutdownEventsCallback(eventParams);
  if ( !callbacks->setStateCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 131, ASSERT_TYPE_ASSERT, "( callbacks->setStateCallback )", (const char *)&queryFormat, "callbacks->setStateCallback") )
    __debugbreak();
  callbacks->setStateCallback(eventParams, newState);
  if ( !callbacks->runEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 135, ASSERT_TYPE_ASSERT, "( callbacks->runEventsCallback )", (const char *)&queryFormat, "callbacks->runEventsCallback") )
    __debugbreak();
  callbacks->runEventsCallback(eventParams, onTime);
}

/*
==============
ScriptableBg_ExitState
==============
*/
void ScriptableBg_ExitState(ScriptableEventParams *eventParams)
{
  ScriptableEventCallbackTable *callbacks; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 52, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 53, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  callbacks = eventParams->callbacks;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 57, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !callbacks->shutdownEventsCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 60, ASSERT_TYPE_ASSERT, "( callbacks->shutdownEventsCallback )", (const char *)&queryFormat, "callbacks->shutdownEventsCallback") )
    __debugbreak();
  callbacks->shutdownEventsCallback(eventParams);
}

/*
==============
ScriptableBg_FindAnimationTrees
==============
*/
void ScriptableBg_FindAnimationTrees(int animUser)
{
  __int64 v1; 
  scrContext_t *v2; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *i; 
  __int64 v4; 
  scr_string_t v5; 
  const char *v6; 
  XAnim_s *anims; 

  v1 = animUser;
  if ( (unsigned int)animUser >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 464, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, 2) )
    __debugbreak();
  v2 = ScriptContext_GetFromAnimUser(v1);
  for ( i = &g_scriptableDefVector; i != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); i = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)i + 8) )
  {
    v4 = *(_QWORD *)i->m_data.m_buffer;
    if ( !*(_QWORD *)i->m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 308, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( (*(_DWORD *)(v4 + 16) & 0x20) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 68);
      if ( v5 )
      {
        v6 = SL_ConvertToString(v5);
        anims = Scr_FindAnimTree(v2, v6).anims;
        if ( !anims )
          Com_PrintWarning(29, "ScriptableBg_FindAnimationTrees: ScriptableDef '%s': Could not find anim tree '%s', animations will not play.\n", *(const char **)v4, v6);
        *(_QWORD *)(v4 + 8 * v1 + 72) = anims;
      }
      else
      {
        Com_PrintWarning(29, "ScriptableBg_FindAnimationTrees: ScriptableDef '%s' has no anim tree - animations will not play\n", *(const char **)v4);
        *(_QWORD *)(v4 + 8 * v1 + 72) = 0i64;
      }
    }
  }
}

/*
==============
ScriptableBg_FindAnimations
==============
*/
void ScriptableBg_FindAnimations(int animUser)
{
  ntl::fixed_vector<ScriptableDef *,1024,0> *i; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  unsigned int j; 
  unsigned int outAtrIndex; 

  if ( (unsigned int)animUser >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 449, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, 2) )
    __debugbreak();
  for ( i = &g_scriptableDefVector; i != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); i = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)i + 8) )
  {
    v3 = *(_QWORD *)i->m_data.m_buffer;
    if ( !*(_QWORD *)i->m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 308, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( (*(_DWORD *)(v3 + 16) & 0x20) != 0 )
    {
      v4 = *(_QWORD *)i->m_data.m_buffer;
      v5 = SL_ConvertToString((scr_string_t)*(_DWORD *)(*(_QWORD *)i->m_data.m_buffer + 68i64));
      v6 = v5;
      if ( v5 )
      {
        if ( NetConstStrings_GetAtrIndex(v5, &outAtrIndex) )
        {
          for ( j = 0; j < *(_DWORD *)(v4 + 20); ++j )
            ScriptableBg_FindAnimationsForPart(animUser, (ScriptablePartDef *const)(*(_QWORD *)(v4 + 24) + 104i64 * j), v6);
        }
        else
        {
          Com_PrintWarning(16, "ScriptableBg_FindAnimationsForScriptableDef: Scriptable '%s' uses an anim tree that is not available '%s'\n", *(const char **)v4, v6);
        }
      }
    }
  }
}

/*
==============
ScriptableBg_FindAnimationsForEvents
==============
*/
void ScriptableBg_FindAnimationsForEvents(int animUser, ScriptableEventDef *const eventDefs, const unsigned int numEvents, const char *animTreeName)
{
  bool *p_useTagAngles; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  ScriptableEventDef *v9; 
  unsigned int v10; 
  unsigned int i; 
  __int64 v12; 
  const char **v13; 

  if ( numEvents )
  {
    p_useTagAngles = &eventDefs->data.particleFX.useTagAngles;
    v6 = numEvents;
    v7 = animUser;
    while ( *((_DWORD *)p_useTagAngles - 13) != 2 )
    {
      switch ( *((_DWORD *)p_useTagAngles - 13) )
      {
        case 6:
          v13 = *(const char ***)(p_useTagAngles - 36);
          if ( v13 )
            Scr_FindAnim(animTreeName, *v13, (scr_anim_t *)&p_useTagAngles[8 * v7 + 20], v7);
          v8 = *(_DWORD *)p_useTagAngles;
          v9 = *(ScriptableEventDef **)(p_useTagAngles + 4);
          goto LABEL_18;
        case 9:
          for ( i = 0; i < *((_DWORD *)p_useTagAngles - 9); ++i )
          {
            v12 = *(_QWORD *)(p_useTagAngles - 28) + 32i64 * i;
            ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(v12 + 24), *(_DWORD *)(v12 + 20), animTreeName);
          }
          break;
        case 0x18:
          v10 = *((_DWORD *)p_useTagAngles - 9);
          goto LABEL_17;
        case 0x19:
          ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(p_useTagAngles - 20), *((_DWORD *)p_useTagAngles - 7), animTreeName);
          v8 = *((_DWORD *)p_useTagAngles - 3);
          v9 = *(ScriptableEventDef **)(p_useTagAngles - 4);
          goto LABEL_18;
      }
LABEL_19:
      p_useTagAngles += 176;
      if ( !--v6 )
        return;
    }
    v10 = *((_DWORD *)p_useTagAngles - 8);
LABEL_17:
    ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(p_useTagAngles - 28), v10, animTreeName);
    v9 = *(ScriptableEventDef **)(p_useTagAngles - 12);
    v8 = *((_DWORD *)p_useTagAngles - 5);
LABEL_18:
    ScriptableBg_FindAnimationsForEvents(v7, v9, v8, animTreeName);
    goto LABEL_19;
  }
}

/*
==============
ScriptableBg_FindAnimationsForPart
==============
*/
void ScriptableBg_FindAnimationsForPart(int animUser, ScriptablePartDef *const part, const char *animTreeName)
{
  unsigned int v3; 
  int v6; 
  __int64 v7; 
  ScriptableStateDef *v8; 
  unsigned int numEvents; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  ScriptableEventDef *v13; 
  unsigned int v14; 
  unsigned int i; 
  __int64 v16; 
  const char **v17; 

  v3 = 0;
  v6 = 0;
  v7 = animUser;
  if ( part->numStates )
  {
    while ( 1 )
    {
      v8 = &part->states[v6];
      numEvents = v8->base.numEvents;
      if ( numEvents )
        break;
LABEL_21:
      if ( ++v6 >= part->numStates )
        goto LABEL_22;
    }
    v10 = (__int64)&v8->base.events->data.dlc1 + 44;
    v11 = numEvents;
    while ( *(_DWORD *)(v10 - 52) != 2 )
    {
      switch ( *(_DWORD *)(v10 - 52) )
      {
        case 6:
          v17 = *(const char ***)(v10 - 36);
          if ( v17 )
            Scr_FindAnim(animTreeName, *v17, (scr_anim_t *)(v10 + 8 * v7 + 20), v7);
          v12 = *(_DWORD *)v10;
          v13 = *(ScriptableEventDef **)(v10 + 4);
          goto LABEL_19;
        case 9:
          for ( i = 0; i < *(_DWORD *)(v10 - 36); ++i )
          {
            v16 = *(_QWORD *)(v10 - 28) + 32i64 * i;
            ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(v16 + 24), *(_DWORD *)(v16 + 20), animTreeName);
          }
          break;
        case 0x18:
          v14 = *(_DWORD *)(v10 - 36);
          goto LABEL_18;
        case 0x19:
          ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(v10 - 20), *(_DWORD *)(v10 - 28), animTreeName);
          v12 = *(_DWORD *)(v10 - 12);
          v13 = *(ScriptableEventDef **)(v10 - 4);
          goto LABEL_19;
      }
LABEL_20:
      v10 += 176i64;
      if ( !--v11 )
        goto LABEL_21;
    }
    v14 = *(_DWORD *)(v10 - 32);
LABEL_18:
    ScriptableBg_FindAnimationsForEvents(v7, *(ScriptableEventDef *const *)(v10 - 28), v14, animTreeName);
    v13 = *(ScriptableEventDef **)(v10 - 12);
    v12 = *(_DWORD *)(v10 - 20);
LABEL_19:
    ScriptableBg_FindAnimationsForEvents(v7, v13, v12, animTreeName);
    goto LABEL_20;
  }
LABEL_22:
  if ( part->numChildParts )
  {
    do
      ScriptableBg_FindAnimationsForPart(v7, &part->childParts[v3++], animTreeName);
    while ( v3 < part->numChildParts );
  }
}

/*
==============
ScriptableBg_GetPartFromName
==============
*/
void ScriptableBg_GetPartFromName(const ScriptableDef *def, const scr_string_t partName, unsigned int *out_partIdx, ScriptablePartDef **out_partDef)
{
  unsigned int v8; 
  ScriptablePartDef *v9; 
  unsigned int v10; 
  int v11; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 216, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 217, ASSERT_TYPE_ASSERT, "( partName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !out_partIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 218, ASSERT_TYPE_ASSERT, "( out_partIdx )", (const char *)&queryFormat, "out_partIdx") )
    __debugbreak();
  if ( !out_partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 219, ASSERT_TYPE_ASSERT, "( out_partDef )", (const char *)&queryFormat, "out_partDef") )
    __debugbreak();
  v8 = 0;
  if ( def->numParts )
  {
    while ( 1 )
    {
      v9 = &def->parts[v8];
      if ( v9->scrName == partName )
      {
        *out_partDef = v9;
        goto LABEL_21;
      }
      v10 = 0;
      if ( v9->numChildParts )
        break;
LABEL_18:
      if ( ++v8 >= def->numParts )
        goto LABEL_19;
    }
    while ( !ScriptableBg_GetPartFromName_Internal(&v9->childParts[v10], partName, out_partDef) )
    {
      v10 = v11 + 1;
      if ( v10 >= v9->numChildParts )
        goto LABEL_18;
    }
LABEL_21:
    *out_partIdx = v8;
  }
  else
  {
LABEL_19:
    *out_partIdx = 0;
    *out_partDef = NULL;
  }
}

/*
==============
ScriptableBg_GetPartFromName_Internal
==============
*/
__int64 ScriptableBg_GetPartFromName_Internal(ScriptablePartDef *def, const scr_string_t partName, ScriptablePartDef **partDef)
{
  int v7; 

  if ( def->scrName == partName )
  {
    *partDef = def;
    return 1i64;
  }
  else
  {
    v7 = 0;
    if ( def->numChildParts )
    {
      while ( !ScriptableBg_GetPartFromName_Internal(&def->childParts[v7], partName, partDef) )
      {
        if ( ++v7 >= def->numChildParts )
          return 0i64;
      }
      return 1i64;
    }
    else
    {
      return 0i64;
    }
  }
}

/*
==============
ScriptableBg_GetScriptableDef
==============
*/
ScriptableDef *ScriptableBg_GetScriptableDef(const int eType, const DObj *obj)
{
  ScriptableDef *scriptableMoverDef; 
  const XModel *v3; 

  scriptableMoverDef = NULL;
  if ( obj )
  {
    if ( obj->numModels )
    {
      v3 = *obj->models;
      if ( v3->scriptableMoverDef )
        scriptableMoverDef = v3->scriptableMoverDef;
    }
  }
  if ( ((eType - 2) & 0xFFFFFFEF) == 0 && scriptableMoverDef && scriptableMoverDef->nextScriptableDef )
    return scriptableMoverDef->nextScriptableDef;
  return scriptableMoverDef;
}

/*
==============
ScriptableBg_GetScriptableDefFromIndex
==============
*/
const ScriptableDef *ScriptableBg_GetScriptableDefFromIndex(const unsigned int scriptableIndex, const ScriptableContext context)
{
  __int64 v2; 
  __int64 v4; 
  bool v5; 
  ScriptableInstanceClientContext **v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = scriptableIndex;
  if ( context )
  {
    v4 = ScriptableCl_ContextToLocalClient(context);
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v2, g_scriptableWorldCounts.totalInstanceCount) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v5 = g_scriptableCl_instanceContexts[v4] == NULL;
    v6 = &g_scriptableCl_instanceContexts[v4];
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
      __debugbreak();
    return (*v6)[v2].commonContext.def;
  }
  else
  {
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)v2 >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v7, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    return g_scriptableSv_instanceContexts[v2].commonContext.def;
  }
}

/*
==============
ScriptableBg_GetStateFromName
==============
*/
void ScriptableBg_GetStateFromName(ScriptablePartDef *partDef, const scr_string_t stateName, unsigned int *stateIdx, ScriptableStateDef **stateDef)
{
  unsigned int numStates; 
  unsigned int i; 
  ScriptableStateDef *v10; 
  bool v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  __int64 v15; 
  signed __int64 v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  __int64 v20; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 244, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 245, ASSERT_TYPE_ASSERT, "( stateName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !stateIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 246, ASSERT_TYPE_ASSERT, "( stateIdx )", (const char *)&queryFormat, "stateIdx") )
    __debugbreak();
  if ( !stateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 247, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  numStates = partDef->numStates;
  for ( i = 0; i < numStates; ++i )
  {
    v10 = &partDef->states[i];
    if ( v10->type == Scriptable_StateType_Health )
    {
      v11 = v10->data.health.scrScript_id == stateName;
    }
    else
    {
      if ( v10->type != Scriptable_StateType_Scripted && v10->type != Scriptable_StateType_Usable )
        continue;
      v11 = v10->data.health.validAttackers == stateName;
    }
    if ( v11 )
    {
      *stateIdx = i;
      *stateDef = v10;
      return;
    }
  }
  v12 = SL_ConvertToString(stateName);
  v13 = atoi(v12);
  *stateIdx = v13;
  if ( !v13 )
  {
    v14 = "0";
    v15 = 0x7FFFFFFFi64;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v16 = v12 - "0";
    do
    {
      v17 = v14[v16];
      v18 = v15;
      v19 = *v14++;
      --v15;
      if ( !v18 )
        break;
      if ( v17 != v19 )
        goto LABEL_30;
    }
    while ( v17 );
  }
  v20 = *stateIdx;
  if ( (unsigned int)v20 < partDef->numStates )
  {
    *stateDef = &partDef->states[v20];
  }
  else
  {
LABEL_30:
    *stateIdx = 0;
    *stateDef = NULL;
  }
}

/*
==============
ScriptableBg_GravityArcCalcData
==============
*/
void ScriptableBg_GravityArcCalcData(const ScriptableEventGravityArcDef *const moveDef, unsigned __int16 payload, const vec3_t *originInitial, const vec3_t *anglesInitial, ScriptableGravityArcRuntimeData *arcData)
{
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int128 upwardVelocity_low; 
  const dvar_t *v15; 
  float value; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t forward; 

  if ( payload )
  {
    v8 = DCONST_DVARFLT_bg_maxLootDropDistanceXY;
    if ( !DCONST_DVARFLT_bg_maxLootDropDistanceXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropDistanceXY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = DCONST_DVARFLT_bg_maxLootDropHeight;
    _XMM8 = 0i64;
    __asm { vroundss xmm8, xmm8, xmm1, 1 }
    if ( !DCONST_DVARFLT_bg_maxLootDropHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    _XMM6 = 0i64;
    __asm { vroundss xmm6, xmm6, xmm0, 1 }
  }
  else
  {
    *(float *)&_XMM8 = FLOAT_40_0;
    *(float *)&_XMM6 = FLOAT_50_0;
  }
  upwardVelocity_low = LODWORD(moveDef->upwardVelocity);
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
  {
    v15 = DVARFLT_bg_gravity;
    if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
  }
  else
  {
    value = FLOAT_800_0;
  }
  LODWORD(v17) = COERCE_UNSIGNED_INT(value * moveDef->gravityScale) ^ _xmm;
  v18 = (float)(*(float *)&upwardVelocity_low * *(float *)&upwardVelocity_low) - (float)((float)(*(float *)&_XMM6 * 2.0) * v17);
  if ( v18 <= 0.0 )
    goto LABEL_24;
  v19 = fsqrt(v18);
  v20 = upwardVelocity_low ^ (unsigned int)_xmm;
  *(float *)&v20 = (float)(COERCE_FLOAT(upwardVelocity_low ^ _xmm) - v19) * (float)(1.0 / v17);
  _XMM3 = v20;
  __asm { vmaxss  xmm7, xmm3, xmm0 }
  if ( *(float *)&_XMM7 <= 0.0 )
  {
LABEL_24:
    ScriptableBg_GravityArcSetDefaultData(originInitial, anglesInitial, arcData);
  }
  else
  {
    YawVectors(anglesInitial->v[1] + moveDef->yawOffsetForXYDirection, &forward, NULL);
    v23 = *(float *)&_XMM8 * forward.v[0];
    v25 = *(float *)&_XMM8 * forward.v[1];
    v24 = *(float *)&_XMM8 * forward.v[1];
    v26 = originInitial->v[0];
    if ( moveDef->endAtInitialPose )
    {
      arcData->endOrigin.v[0] = v26;
      *(_QWORD *)&arcData->endOrigin.y = *(_QWORD *)&originInitial->y;
      arcData->endAngles = *anglesInitial;
      arcData->startOrigin.v[0] = arcData->endOrigin.v[0] - v23;
      arcData->startOrigin.v[1] = arcData->endOrigin.v[1] - v25;
      arcData->startOrigin.v[2] = *(float *)&_XMM6 + arcData->endOrigin.v[2];
      arcData->startAngles.v[0] = arcData->endAngles.v[0] - moveDef->angleOffset.v[0];
      arcData->startAngles.v[1] = arcData->endAngles.v[1] - moveDef->angleOffset.v[1];
      arcData->startAngles.v[2] = arcData->endAngles.v[2] - moveDef->angleOffset.v[2];
    }
    else
    {
      arcData->startOrigin.v[0] = v26;
      *(_QWORD *)&arcData->startOrigin.y = *(_QWORD *)&originInitial->y;
      arcData->startAngles = *anglesInitial;
      arcData->endOrigin.v[0] = v23 + arcData->startOrigin.v[0];
      arcData->endOrigin.v[1] = v25 + arcData->startOrigin.v[1];
      arcData->endOrigin.v[2] = arcData->startOrigin.v[2] - *(float *)&_XMM6;
      arcData->endAngles.v[0] = moveDef->angleOffset.v[0] + arcData->startAngles.v[0];
      arcData->endAngles.v[1] = moveDef->angleOffset.v[1] + arcData->startAngles.v[1];
      arcData->endAngles.v[2] = moveDef->angleOffset.v[2] + arcData->startAngles.v[2];
    }
    if ( moveDef->randomSpin )
    {
      arcData->startAngles.v[0] = (float)((int)(float)(20.0 * arcData->startOrigin.v[0]) % 360);
      arcData->startAngles.v[1] = (float)((int)(float)(20.0 * arcData->startOrigin.v[1]) % 360);
      arcData->startAngles.v[2] = 0.0;
    }
    arcData->velocity.v[1] = v24 * (float)(1.0 / *(float *)&_XMM7);
    arcData->gravity = v17;
    arcData->velocity.v[0] = v23 * (float)(1.0 / *(float *)&_XMM7);
    arcData->durationMS = (int)(float)(*(float *)&_XMM7 * 1000.0);
    arcData->velocity.v[2] = moveDef->upwardVelocity;
  }
}

/*
==============
ScriptableBg_GravityArcCalcDelta
==============
*/
void ScriptableBg_GravityArcCalcDelta(const vec3_t *velocity, const int durationMS, const float gravity, vec3_t *out_result)
{
  float v4; 

  v4 = (float)durationMS * 0.001;
  out_result->v[0] = v4 * velocity->v[0];
  out_result->v[1] = v4 * velocity->v[1];
  out_result->v[2] = (float)((float)((float)(gravity * 0.5) * v4) + velocity->v[2]) * v4;
}

/*
==============
ScriptableBg_GravityArcEncodePayload
==============
*/
unsigned __int16 ScriptableBg_GravityArcEncodePayload(const vec3_t *begin, const vec3_t *end)
{
  const dvar_t *v5; 
  float v6; 
  float v9; 
  const dvar_t *v10; 
  int v11; 

  if ( begin->v[2] >= end->v[2] )
  {
    v5 = DCONST_DVARFLT_bg_maxLootDropHeight;
    if ( !DCONST_DVARFLT_bg_maxLootDropHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = end->v[0] - begin->v[0];
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    v9 = end->v[1];
    v10 = DCONST_DVARFLT_bg_maxLootDropDistanceXY;
    v11 = (int)*(float *)&_XMM2;
    fsqrt((float)((float)(v9 - begin->v[1]) * (float)(v9 - begin->v[1])) + (float)(v6 * v6));
    if ( !DCONST_DVARFLT_bg_maxLootDropDistanceXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropDistanceXY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    return v11 | ((unsigned __int16)(int)*(float *)&_XMM2 << 8);
  }
  else
  {
    Com_PrintError(29, "ScriptableBg_GravityArcEncodePayload: begin point is below end point.\n");
    return 0;
  }
}

/*
==============
ScriptableBg_GravityArcSetDefaultData
==============
*/
void ScriptableBg_GravityArcSetDefaultData(const vec3_t *originInitial, const vec3_t *anglesInitial, ScriptableGravityArcRuntimeData *arcData)
{
  Com_PrintError(29, "ScriptableBg_GravityArcSetDefaultData: failed to solve for time with given parameters, so defaulting to no motion.\n");
  arcData->startOrigin = *originInitial;
  arcData->startAngles = *anglesInitial;
  arcData->endOrigin = *originInitial;
  arcData->endAngles = *anglesInitial;
  *(_QWORD *)&arcData->durationMS = 0i64;
  *(_QWORD *)&arcData->velocity.z = 0i64;
  arcData->velocity.v[1] = 0.0;
}

/*
==============
ScriptableBg_LerpCalcEndPoints
==============
*/
void ScriptableBg_LerpCalcEndPoints(const vec3_t *originInitial, const vec3_t *anglesInitial, const ScriptableEventMoveDef *const moveDef, vec3_t *out_endOrigin, vec3_t *out_endAngles)
{
  vec3_t *p_originOffset; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  bool v19; 
  float v20; 
  tmat33_t<vec3_t> axis; 
  char v22; 

  p_originOffset = &moveDef->originOffset;
  if ( moveDef->originOffset.v[0] == 0.0 && moveDef->originOffset.v[1] == 0.0 && moveDef->originOffset.v[2] == 0.0 )
  {
    *(_QWORD *)out_endOrigin->v = *(_QWORD *)originInitial->v;
    v10 = originInitial->v[2];
  }
  else
  {
    AnglesToAxis(anglesInitial, &axis);
    if ( p_originOffset == (vec3_t *)&v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v11 = p_originOffset->v[1];
    v12 = p_originOffset->v[2];
    v13 = (float)((float)(p_originOffset->v[0] * axis.m[0].v[1]) + (float)(v11 * axis.m[1].v[1])) + (float)(v12 * axis.m[2].v[1]);
    v14 = v11 * axis.m[1].v[2];
    v15 = p_originOffset->v[0] * axis.m[0].v[2];
    out_endOrigin->v[0] = (float)((float)((float)(p_originOffset->v[0] * axis.m[0].v[0]) + (float)(v11 * axis.m[1].v[0])) + (float)(v12 * axis.m[2].v[0])) + originInitial->v[0];
    v16 = v13 + originInitial->v[1];
    v17 = v12 * axis.m[2].v[2];
    out_endOrigin->v[1] = v16;
    v10 = (float)((float)(v15 + v14) + v17) + originInitial->v[2];
  }
  out_endOrigin->v[2] = v10;
  v18 = moveDef->angleOffset.v[0];
  v19 = v18 != 0.0 || moveDef->angleOffset.v[1] != 0.0 || moveDef->angleOffset.v[2] != 0.0;
  v20 = anglesInitial->v[0];
  if ( v19 )
  {
    out_endAngles->v[0] = v20 + v18;
    out_endAngles->v[1] = moveDef->angleOffset.v[1] + anglesInitial->v[1];
    out_endAngles->v[2] = moveDef->angleOffset.v[2] + anglesInitial->v[2];
  }
  else
  {
    out_endAngles->v[0] = v20;
    out_endAngles->v[1] = anglesInitial->v[1];
    out_endAngles->v[2] = anglesInitial->v[2];
  }
}

/*
==============
ScriptableBg_LerpVector
==============
*/
char ScriptableBg_LerpVector(const vec3_t *begin, const vec3_t *end, const int beginLerpTime, const int currTime, const float fTotalTimeSec, const float fAccelTimeSec, const float fDecelTimeSec, vec3_t *out_result)
{
  int v10; 
  double v13; 
  int v14; 
  int v15; 
  int v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  int atTime; 
  trajectory_t_secure tr; 
  vec3_t result; 

  v10 = beginLerpTime;
  if ( fTotalTimeSec <= 0.0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 525, ASSERT_TYPE_ASSERT, "(fTotalTimeSec > 0.0f)", (const char *)&queryFormat, "fTotalTimeSec > 0.0f") )
      __debugbreak();
    v10 = beginLerpTime;
  }
  if ( end->v[0] == begin->v[0] && end->v[1] == begin->v[1] && end->v[2] == begin->v[2] )
  {
    *out_result = *end;
    return 0;
  }
  if ( fAccelTimeSec > 0.0 || fDecelTimeSec > 0.0 )
  {
    v14 = (int)(float)(fDecelTimeSec * 1000.0);
    v15 = v10 - (int)(float)(fTotalTimeSec * -1000.0);
    v16 = (int)(float)(fAccelTimeSec * 1000.0);
    atTime = I_clamp(currTime, v10, v15);
    if ( v16 < 0 )
    {
      LODWORD(v34) = (int)(float)(fAccelTimeSec * 1000.0);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 540, ASSERT_TYPE_ASSERT, "( ( accelLerpTime >= 0 ) )", "( accelLerpTime ) = %i", v34) )
        __debugbreak();
    }
    if ( v14 < 0 )
    {
      LODWORD(v34) = (int)(float)(fDecelTimeSec * 1000.0);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 541, ASSERT_TYPE_ASSERT, "( ( decelLerpTime >= 0 ) )", "( decelLerpTime ) = %i", v34) )
        __debugbreak();
    }
    if ( v16 + v14 > v15 - beginLerpTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 542, ASSERT_TYPE_ASSERT, "((accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime))", (const char *)&queryFormat, "(accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime)") )
      __debugbreak();
    v17 = end->v[0] - begin->v[0];
    v19 = LODWORD(end->v[1]);
    v18 = end->v[1] - begin->v[1];
    v20 = end->v[2] - begin->v[2];
    *(float *)&v19 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v20 * v20));
    _XMM15 = v19;
    if ( *(float *)&v19 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 547, ASSERT_TYPE_ASSERT, "(fDist > 0.0f)", (const char *)&queryFormat, "fDist > 0.0f") )
      __debugbreak();
    v22 = (float)((float)(fTotalTimeSec * 2.0) - fAccelTimeSec) - fDecelTimeSec;
    if ( v22 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 550, ASSERT_TYPE_ASSERT, "(fSpeedQuotient)", (const char *)&queryFormat, "fSpeedQuotient") )
      __debugbreak();
    v23 = atTime;
    v24 = begin->v[1];
    v25 = begin->v[2];
    v26 = (float)(*(float *)&_XMM15 * 2.0) / v22;
    __asm
    {
      vcmpless xmm0, xmm15, cs:__real@80000000
      vblendvps xmm0, xmm15, xmm1, xmm0
    }
    tr.trType = TR_ACCELERATE;
    tr.trTime = beginLerpTime;
    tr.trDuration = (int)(float)(fAccelTimeSec * 1000.0);
    v29 = (float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v26;
    v30 = begin->v[0];
    v31 = (float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * v26;
    v32 = (float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * v26;
    tr.trDelta.v[2] = v31;
    tr.trBase.v[0] = v30;
    tr.trBase.v[1] = v24;
    tr.trBase.v[2] = v25;
    tr.trDelta.v[0] = v29;
    tr.trDelta.v[1] = v32;
    if ( atTime - beginLerpTime >= v16 )
    {
      if ( v16 <= 0 )
      {
        result.v[0] = v30;
        result.v[1] = v24;
        result.v[2] = v25;
      }
      else
      {
        BgTrajectory::LegacyEvaluateTrajectory(&tr, beginLerpTime + v16, &result);
        v25 = result.v[2];
        v24 = result.v[1];
        v30 = result.v[0];
        v23 = atTime;
      }
      if ( v15 - v23 > v14 )
      {
        tr.trType = TR_LINEAR;
        tr.trTime = beginLerpTime + v16;
        tr.trDuration = v15 - beginLerpTime - v16 - v14;
        tr.trBase.v[0] = v30;
        tr.trBase.v[1] = v24;
        tr.trBase.v[2] = v25;
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v23, out_result);
        return 1;
      }
      if ( v14 <= 0 )
      {
        *out_result = *end;
        return 1;
      }
      v33 = (float)(fTotalTimeSec - fAccelTimeSec) - fDecelTimeSec;
      tr.trBase.v[0] = (float)(v29 * v33) + v30;
      tr.trType = TR_DECELERATE;
      tr.trBase.v[2] = (float)(v31 * v33) + v25;
      tr.trBase.v[1] = (float)(v32 * v33) + v24;
      tr.trTime = v15 - v14;
      tr.trDuration = (int)(float)(fDecelTimeSec * 1000.0);
    }
    BgTrajectory::LegacyEvaluateTrajectory(&tr, v23, out_result);
    return 1;
  }
  v13 = I_fclamp((float)((float)(currTime - v10) * 0.001) / fTotalTimeSec, 0.0, 1.0);
  out_result->v[0] = (float)((float)(end->v[0] - begin->v[0]) * *(float *)&v13) + begin->v[0];
  out_result->v[1] = (float)((float)(end->v[1] - begin->v[1]) * *(float *)&v13) + begin->v[1];
  out_result->v[2] = (float)((float)(end->v[2] - begin->v[2]) * *(float *)&v13) + begin->v[2];
  return 1;
}

/*
==============
ScriptableBg_PhysicsClearVelocity
==============
*/
void ScriptableBg_PhysicsClearVelocity(Physics_WorldId physicsWorld, unsigned int physicsInstance)
{
  unsigned int v4; 
  unsigned int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  unsigned int m_serialAndIndex; 
  __int64 v8; 
  hknpBodyId result; 
  vec3_t angVel; 
  vec3_t linVel; 

  if ( physicsWorld == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 816, ASSERT_TYPE_ASSERT, "(physicsWorld != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "physicsWorld != PHYSICS_WORLD_ID_INVALID") )
    __debugbreak();
  if ( physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 817, ASSERT_TYPE_ASSERT, "(physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v4 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(physicsWorld, physicsInstance);
  if ( NumRigidBodys )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)physicsWorld > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v8) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
          __debugbreak();
      }
      if ( physicsInstance == -1 )
      {
        LODWORD(v8) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(physicsWorld - 2) <= 5 )
      {
        LODWORD(v8) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)physicsWorld <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v8) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, physicsWorld, physicsInstance, v4);
      angVel.v[0] = 0.0;
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      angVel.v[1] = 0.0;
      angVel.v[2] = 0.0;
      linVel.v[0] = 0.0;
      linVel.v[1] = 0.0;
      linVel.v[2] = 0.0;
      Physics_SetRigidBodyLinAngVel(physicsWorld, m_serialAndIndex, &linVel, &angVel);
      ++v4;
    }
    while ( v4 < NumRigidBodys );
  }
}

/*
==============
ScriptableBg_PhysicsSetPose
==============
*/
void ScriptableBg_PhysicsSetPose(Physics_WorldId physicsWorld, unsigned int physicsInstance, const vec3_t *origin, const vec4_t *quat, Scriptable_PhysicsSetPoseCmd setcmd)
{
  if ( physicsWorld == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 800, ASSERT_TYPE_ASSERT, "(physicsWorld != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "physicsWorld != PHYSICS_WORLD_ID_INVALID") )
    __debugbreak();
  if ( physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 801, ASSERT_TYPE_ASSERT, "(physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( setcmd == WARP )
    Physics_WarpInstanceTo(physicsWorld, physicsInstance, origin, quat, 1);
  else
    Physics_AddDeferredKeyframeInstance(physicsWorld, physicsInstance, origin, quat);
}

/*
==============
ScriptableBg_SetupAntilagCommand
==============
*/
void ScriptableBg_SetupAntilagCommand(BgAntiLagLerpMoverCmd *out_cmd, const unsigned int userId, const Bounds *bounds, const unsigned int startTime, const vec3_t *startOrigin, const vec3_t *startAngles, const vec3_t *endOrigin, const vec3_t *endAngles, const ScriptableEventMoveDef *const moveDef)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v9 = (float)(bounds->halfSize.v[0] + bounds->midPoint.v[0]) * (float)(bounds->halfSize.v[0] + bounds->midPoint.v[0]);
  v10 = endOrigin->v[1] - startOrigin->v[1];
  v11 = endOrigin->v[2] - startOrigin->v[2];
  v12 = endOrigin->v[0] - startOrigin->v[0];
  out_cmd->userId = userId;
  out_cmd->bounds = *bounds;
  out_cmd->startTime = startTime;
  out_cmd->startOrigin = *startOrigin;
  out_cmd->startAngles = *startAngles;
  out_cmd->endTime = startTime - (int)(float)(moveDef->seconds * -1000.0);
  out_cmd->endOrigin = *endOrigin;
  out_cmd->endAngles = *endAngles;
  out_cmd->seconds = moveDef->seconds;
  out_cmd->secondsAccel = moveDef->secondsAccel;
  out_cmd->secondsDecel = moveDef->secondsDecel;
  out_cmd->origin = *startOrigin;
  out_cmd->radius = fsqrt((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v11 * v11)) + fsqrt(v9 * 2.0);
  out_cmd->height = bounds->halfSize.v[2] + bounds->midPoint.v[2];
}

/*
==============
ScriptableBg_ValidateStandaloneDef
==============
*/
char ScriptableBg_ValidateStandaloneDef(const ScriptableDef *def)
{
  int flags; 

  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 830, ASSERT_TYPE_ASSERT, "(def != nullptr)", (const char *)&queryFormat, "def != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  flags = def->flags;
  if ( (flags & 2) != 0 )
  {
    if ( (flags & 0x2000) != 0 )
    {
      if ( (flags & 0x800) != 0 )
      {
        Com_PrintError(29, "ScriptableBg_ValidateStandaloneDef: %s requires a character.\n", def->name);
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      Com_PrintError(29, "ScriptableBg_ValidateStandaloneDef: %s requires an entity.\n", def->name);
      return 0;
    }
  }
  else
  {
    Com_PrintError(29, "ScriptableBg_ValidateStandaloneDef: %s does not have a server instance.\n", def->name);
    return 0;
  }
}

