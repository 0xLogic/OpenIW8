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
  char v9; 
  bool v10; 
  bool v11; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outRate;
  _RSI = outStartTime;
  _RBX = animation;
  if ( !outStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 322, ASSERT_TYPE_ASSERT, "(outStartTime)", (const char *)&queryFormat, "outStartTime") )
    __debugbreak();
  v9 = 0;
  v10 = _RDI == NULL;
  if ( !_RDI )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 323, ASSERT_TYPE_ASSERT, "(outRate)", (const char *)&queryFormat, "outRate");
    v9 = 0;
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+14h]
    vmovss  xmm1, dword ptr [rbx+18h]; max
    vcomiss xmm1, xmm6
  }
  if ( !v10 )
  {
    __asm { vmovaps xmm0, xmm6; min }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]; min
    vmovss  xmm1, dword ptr [rbx+24h]; max
    vcomiss xmm1, xmm0
  }
  if ( !(v9 | v10) )
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm
  {
    vmovss  dword ptr [rsi], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi], xmm0
  }
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
  const dvar_t *v16; 
  const dvar_t *v19; 
  bool v32; 
  char v34; 
  bool v35; 
  vec3_t forward; 
  char v103; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  _RBX = arcData;
  _RDI = moveDef;
  _R15 = anglesInitial;
  _R13 = originInitial;
  if ( payload )
  {
    v16 = DCONST_DVARFLT_bg_maxLootDropDistanceXY;
    if ( !DCONST_DVARFLT_bg_maxLootDropDistanceXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropDistanceXY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vmovss  xmm6, cs:__real@3b808081
      vmulss  xmm1, xmm6, dword ptr [r14+28h]
    }
    v19 = DCONST_DVARFLT_bg_maxLootDropHeight;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm1, xmm0
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm8, xmm8, xmm1, 1
    }
    if ( !DCONST_DVARFLT_bg_maxLootDropHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm
    {
      vmulss  xmm2, xmm6, dword ptr [rbp+28h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm2, xmm1
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm6, xmm6, xmm0, 1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, cs:__real@42200000
      vmovss  xmm6, cs:__real@42480000
    }
  }
  __asm { vmovss  xmm7, dword ptr [rdi+18h] }
  v32 = Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE);
  v34 = 0;
  v35 = !v32;
  if ( v32 )
  {
    _RSI = DVARFLT_bg_gravity;
    if ( !DVARFLT_bg_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@44480000 }
  }
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [rdi+14h]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+0E8h+var_88], xmm10
    vxorps  xmm9, xmm0, xmm3
    vmulss  xmm0, xmm6, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm7, xmm7
    vsubss  xmm4, xmm2, xmm1
    vxorps  xmm5, xmm5, xmm5
    vcomiss xmm4, xmm5
  }
  if ( v34 | v35 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vxorps  xmm0, xmm7, xmm3
    vsqrtss xmm2, xmm4, xmm4
    vsubss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm2, xmm7
    vdivss  xmm4, xmm10, xmm9
    vmulss  xmm0, xmm2, xmm4
    vmulss  xmm3, xmm1, xmm4
    vmaxss  xmm7, xmm3, xmm0
    vcomiss xmm7, xmm5
  }
  if ( v34 | v35 )
  {
LABEL_24:
    ScriptableBg_GravityArcSetDefaultData(_R13, _R15, arcData);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4]
      vaddss  xmm0, xmm0, dword ptr [rdi+1Ch]; yaw
    }
    YawVectors(*(float *)&_XMM0, &forward, NULL);
    __asm
    {
      vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+forward]
      vmulss  xmm4, xmm8, dword ptr [rsp+0E8h+forward+4]
      vmovss  xmm0, dword ptr [r13+0]
    }
    if ( _RDI->endAtInitialPose )
    {
      __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
      *(_QWORD *)&arcData->endOrigin.y = *(_QWORD *)&_R13->y;
      arcData->endAngles = *_R15;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbx+14h], xmm1
        vmovss  xmm2, dword ptr [rbx+30h]
        vsubss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rbx+18h], xmm0
        vaddss  xmm1, xmm6, dword ptr [rbx+34h]
        vmovss  dword ptr [rbx+1Ch], xmm1
        vmovss  xmm0, dword ptr [rbx+38h]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+20h], xmm1
        vmovss  xmm2, dword ptr [rbx+3Ch]
        vsubss  xmm0, xmm2, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rbx+24h], xmm0
        vmovss  xmm1, dword ptr [rbx+40h]
        vsubss  xmm2, xmm1, dword ptr [rdi+10h]
        vmovss  dword ptr [rbx+28h], xmm2
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rbx+14h], xmm0 }
      *(_QWORD *)&arcData->startOrigin.y = *(_QWORD *)&_R13->y;
      arcData->startAngles = *_R15;
      __asm
      {
        vaddss  xmm0, xmm3, dword ptr [rbx+14h]
        vmovss  dword ptr [rbx+2Ch], xmm0
        vaddss  xmm1, xmm4, dword ptr [rbx+18h]
        vmovss  dword ptr [rbx+30h], xmm1
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vsubss  xmm2, xmm0, xmm6
        vmovss  dword ptr [rbx+34h], xmm2
        vmovss  xmm0, dword ptr [rdi+8]
        vaddss  xmm1, xmm0, dword ptr [rbx+20h]
        vmovss  dword ptr [rbx+38h], xmm1
        vmovss  xmm2, dword ptr [rdi+0Ch]
        vaddss  xmm0, xmm2, dword ptr [rbx+24h]
        vmovss  dword ptr [rbx+3Ch], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vaddss  xmm2, xmm1, dword ptr [rbx+28h]
        vmovss  dword ptr [rbx+40h], xmm2
      }
    }
    if ( _RDI->randomSpin )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@41a00000
        vmulss  xmm0, xmm2, dword ptr [rbx+14h]
        vcvttss2si r8d, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r8d
        vmovss  dword ptr [rbx+20h], xmm0
        vmulss  xmm2, xmm2, dword ptr [rbx+18h]
        vcvttss2si ecx, xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmovss  dword ptr [rbx+24h], xmm0
      }
      arcData->startAngles.v[2] = 0.0;
    }
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@447a0000
      vcvttss2si eax, xmm0
      vdivss  xmm1, xmm10, xmm7
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm1
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  dword ptr [rbx+10h], xmm9
      vmovss  dword ptr [rbx+4], xmm0
    }
    arcData->durationMS = _EAX;
    arcData->velocity.v[2] = _RDI->upwardVelocity;
  }
  __asm { vmovaps xmm10, [rsp+0E8h+var_88] }
  _R11 = &v103;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm9, xmmword ptr [r11-58h]
  }
}

/*
==============
ScriptableBg_GravityArcCalcDelta
==============
*/

void __fastcall ScriptableBg_GravityArcCalcDelta(const vec3_t *velocity, const int durationMS, double gravity, vec3_t *out_result)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm3, xmm0, cs:__real@3a83126f
    vmulss  xmm1, xmm3, dword ptr [rcx]
    vmovss  dword ptr [r9], xmm1
    vmulss  xmm0, xmm3, dword ptr [rcx+4]
    vmulss  xmm1, xmm2, cs:__real@3f000000
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [r9+4], xmm0
    vaddss  xmm0, xmm2, dword ptr [rcx+8]
    vmulss  xmm3, xmm0, xmm3
    vmovss  dword ptr [r9+8], xmm3
  }
}

/*
==============
ScriptableBg_GravityArcEncodePayload
==============
*/

unsigned __int16 __fastcall ScriptableBg_GravityArcEncodePayload(const vec3_t *begin, const vec3_t *end, double _XMM2_8)
{
  const dvar_t *v8; 
  const dvar_t *v19; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm1, dword ptr [rdx+8]
    vcomiss xmm0, xmm1
  }
  _RBX = end;
  v8 = DCONST_DVARFLT_bg_maxLootDropHeight;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vsubss  xmm6, xmm0, xmm1
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !DCONST_DVARFLT_bg_maxLootDropHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm7, cs:__real@437f0000
    vdivss  xmm0, xmm7, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rdi]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  xmm1, dword ptr [rbx+4]
  }
  v19 = DCONST_DVARFLT_bg_maxLootDropDistanceXY;
  __asm
  {
    vcvttss2si esi, xmm2
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm6, xmm1, xmm1
  }
  if ( !DCONST_DVARFLT_bg_maxLootDropDistanceXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_maxLootDropDistanceXY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm
  {
    vdivss  xmm0, xmm7, dword ptr [rbx+28h]
    vmovaps xmm7, [rsp+68h+var_28]
    vmulss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si eax, xmm2
  }
  return _ESI | ((_WORD)_EAX << 8);
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
  bool v9; 
  bool v17; 
  char v41; 
  tmat33_t<vec3_t> axis; 
  char v51[16]; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = out_endAngles;
  _RSI = moveDef;
  _RDI = anglesInitial;
  _RBP = (char *)&moveDef->originOffset;
  __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
  _R15 = out_endOrigin;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm8, dword ptr [rbp+0]
  }
  if ( !v9 )
    goto LABEL_5;
  __asm { vucomiss xmm8, dword ptr [rbp+4] }
  if ( !v9 )
    goto LABEL_5;
  __asm { vucomiss xmm8, dword ptr [rbp+8] }
  if ( v9 )
  {
    *(_QWORD *)out_endOrigin->v = *(_QWORD *)originInitial->v;
    __asm { vmovss  xmm0, dword ptr [rcx+8] }
  }
  else
  {
LABEL_5:
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
    }
    AnglesToAxis(anglesInitial, &axis);
    v9 = _RBP == v51;
    if ( _RBP == v51 )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out");
      v9 = !v17;
      if ( v17 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+4]
      vmovss  xmm7, dword ptr [rbp+8]
      vmovss  xmm5, dword ptr [rbp+0]
      vmulss  xmm0, xmm6, dword ptr [rsp+0C8h+axis+0Ch]
      vmulss  xmm1, xmm5, dword ptr [rsp+0C8h+axis]
      vmulss  xmm3, xmm5, dword ptr [rsp+0C8h+axis+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rsp+0C8h+axis+18h]
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, dword ptr [r14]
      vmulss  xmm1, xmm6, dword ptr [rsp+0C8h+axis+10h]
      vmulss  xmm2, xmm7, dword ptr [rsp+0C8h+axis+1Ch]
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+0C8h+axis+14h]
      vmulss  xmm4, xmm5, dword ptr [rsp+0C8h+axis+8]
      vmovaps xmm6, [rsp+0C8h+var_38]
      vmovss  dword ptr [r15], xmm0
      vaddss  xmm3, xmm1, dword ptr [r14+4]
      vmulss  xmm1, xmm7, dword ptr [rsp+0C8h+axis+20h]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovss  dword ptr [r15+4], xmm3
      vaddss  xmm3, xmm4, xmm2
      vaddss  xmm2, xmm3, xmm1
      vaddss  xmm0, xmm2, dword ptr [r14+8]
    }
  }
  __asm
  {
    vmovss  dword ptr [r15+8], xmm0
    vmovss  xmm1, dword ptr [rsi+14h]
    vucomiss xmm1, xmm8
  }
  if ( !v9 )
    goto LABEL_13;
  __asm { vucomiss xmm8, dword ptr [rsi+18h] }
  if ( !v9 )
    goto LABEL_13;
  __asm { vucomiss xmm8, dword ptr [rsi+1Ch] }
  if ( v9 )
    v41 = 0;
  else
LABEL_13:
    v41 = 1;
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovss  xmm0, dword ptr [rdi]
  }
  if ( v41 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr [rsi+18h]
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rbx+4], xmm2
      vmovss  xmm0, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx], xmm0 }
    out_endAngles->v[1] = _RDI->v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
ScriptableBg_LerpVector
==============
*/
bool ScriptableBg_LerpVector(const vec3_t *begin, const vec3_t *end, const int beginLerpTime, const int currTime, const float fTotalTimeSec, const float fAccelTimeSec, const float fDecelTimeSec, vec3_t *out_result)
{
  bool v20; 
  int v26; 
  bool v28; 
  bool v30; 
  int v57; 
  int v59; 
  bool v60; 
  bool v61; 
  bool v62; 
  bool v75; 
  int v81; 
  int v100; 
  _BYTE v115[24]; 
  __int64 v116; 
  int v117; 
  int atTime; 
  trajectory_t_secure tr; 
  vec3_t result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v20 = (unsigned __int64)v115 == _security_cookie;
  __asm { vmovss  xmm7, [rbp+50h+fTotalTimeSec] }
  _RDI = out_result;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  _R15 = begin;
  v117 = beginLerpTime;
  v26 = beginLerpTime;
  _RBX = end;
  if ( (unsigned __int64)v115 == _security_cookie )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 525, ASSERT_TYPE_ASSERT, "(fTotalTimeSec > 0.0f)", (const char *)&queryFormat, "fTotalTimeSec > 0.0f");
    v20 = !v28;
    if ( v28 )
      __debugbreak();
    v26 = v117;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vucomiss xmm1, dword ptr [r15]
  }
  if ( !v20 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vucomiss xmm0, dword ptr [r15+4]
  }
  if ( !v20 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vucomiss xmm0, dword ptr [r15+8]
  }
  if ( !v20 )
  {
LABEL_9:
    __asm
    {
      vmovaps [rsp+150h+var_68+8], xmm8
      vmovss  xmm8, [rbp+50h+fDecelTimeSec]
      vmovaps [rsp+150h+var_78+8], xmm9
      vmovss  xmm9, [rbp+50h+fAccelTimeSec]
      vcomiss xmm9, xmm6
    }
    if ( v20 )
    {
      __asm { vcomiss xmm8, xmm6 }
      if ( v20 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vmulss  xmm2, xmm0, cs:__real@3a83126f
          vdivss  xmm0, xmm2, xmm7; val
          vmovss  xmm2, cs:__real@3f800000; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vsubss  xmm2, xmm1, dword ptr [r15]
          vmulss  xmm3, xmm2, xmm0
          vaddss  xmm4, xmm3, dword ptr [r15]
          vmovss  dword ptr [rdi], xmm4
          vmovss  xmm1, dword ptr [rbx+4]
          vsubss  xmm2, xmm1, dword ptr [r15+4]
          vmulss  xmm3, xmm2, xmm0
          vaddss  xmm4, xmm3, dword ptr [r15+4]
          vmovss  dword ptr [rdi+4], xmm4
          vmovss  xmm1, dword ptr [rbx+8]
          vmovaps xmm6, xmm0
          vsubss  xmm0, xmm1, dword ptr [r15+8]
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [r15+8]
          vmovss  dword ptr [rdi+8], xmm3
        }
LABEL_38:
        __asm { vmovaps xmm9, [rsp+150h+var_78+8] }
        v30 = 1;
        __asm { vmovaps xmm8, [rsp+150h+var_68+8] }
        goto LABEL_39;
      }
    }
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@447a0000
      vmulss  xmm1, xmm9, cs:__real@447a0000
      vmovaps [rsp+150h+var_88+8], xmm10
      vmovaps [rsp+150h+var_98+8], xmm11
      vmovaps [rsp+150h+var_A8+8], xmm12
      vcvttss2si r14d, xmm0
      vmulss  xmm0, xmm7, cs:__real@c47a0000
      vcvttss2si eax, xmm0
    }
    v57 = v26 - _EAX;
    __asm
    {
      vmovaps [rsp+150h+var_B8+8], xmm13
      vmovaps [rsp+150h+var_C8+8], xmm14
      vmovaps [rsp+150h+var_D8+8], xmm15
      vcvttss2si r13d, xmm1
    }
    atTime = I_clamp(currTime, v26, v26 - _EAX);
    if ( _ER13 < 0 )
    {
      LODWORD(v116) = _ER13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 540, ASSERT_TYPE_ASSERT, "( ( accelLerpTime >= 0 ) )", "( accelLerpTime ) = %i", v116) )
        __debugbreak();
    }
    if ( _ER14 < 0 )
    {
      LODWORD(v116) = _ER14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 541, ASSERT_TYPE_ASSERT, "( ( decelLerpTime >= 0 ) )", "( decelLerpTime ) = %i", v116) )
        __debugbreak();
    }
    v59 = v57 - v117;
    v60 = _ER13 + _ER14 == v57 - v117;
    v61 = _ER13 + _ER14 <= (unsigned int)(v57 - v117);
    if ( _ER13 + _ER14 > v57 - v117 )
    {
      v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 542, ASSERT_TYPE_ASSERT, "((accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime))", (const char *)&queryFormat, "(accelLerpTime + decelLerpTime) <= (endLerpTime - beginLerpTime)");
      v60 = !v62;
      v61 = !v62;
      if ( v62 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm12, xmm0, dword ptr [r15]
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm13, xmm0, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm14, xmm0, dword ptr [r15+8]
      vmulss  xmm1, xmm13, xmm13
      vmulss  xmm0, xmm12, xmm12
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, xmm14
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm15, xmm2, xmm2
      vcomiss xmm15, xmm6
    }
    if ( v61 )
    {
      v75 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 547, ASSERT_TYPE_ASSERT, "(fDist > 0.0f)", (const char *)&queryFormat, "fDist > 0.0f");
      v60 = !v75;
      if ( v75 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm10, cs:__real@40000000
      vmulss  xmm0, xmm7, xmm10
      vsubss  xmm1, xmm0, xmm9
      vsubss  xmm11, xmm1, xmm8
      vucomiss xmm11, xmm6
    }
    if ( v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 550, ASSERT_TYPE_ASSERT, "(fSpeedQuotient)", (const char *)&queryFormat, "fSpeedQuotient") )
      __debugbreak();
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    v81 = atTime;
    __asm
    {
      vmovss  xmm5, dword ptr [r15+4]
      vmovss  xmm4, dword ptr [r15+8]
      vmulss  xmm0, xmm15, xmm10
      vdivss  xmm3, xmm0, xmm11
      vcmpless xmm0, xmm15, cs:__real@80000000
      vblendvps xmm0, xmm15, xmm1, xmm0
      vmovaps xmm15, [rsp+150h+var_D8+8]
    }
    tr.trType = TR_ACCELERATE;
    tr.trTime = v117;
    tr.trDuration = _ER13;
    __asm
    {
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm12, xmm2
      vmovaps xmm12, [rsp+150h+var_A8+8]
      vmulss  xmm1, xmm13, xmm2
      vmovaps xmm13, [rsp+150h+var_B8+8]
      vmulss  xmm6, xmm0, xmm3
      vmulss  xmm0, xmm14, xmm2
      vmovaps xmm14, [rsp+150h+var_C8+8]
      vmovss  xmm2, dword ptr [r15]
      vmulss  xmm11, xmm0, xmm3
      vmulss  xmm10, xmm1, xmm3
      vmovss  dword ptr [rsp+150h+tr.trDelta+8], xmm11
      vmovss  dword ptr [rsp+150h+tr.trBase], xmm2
      vmovss  dword ptr [rsp+150h+tr.trBase+4], xmm5
      vmovss  dword ptr [rsp+150h+tr.trBase+8], xmm4
      vmovss  dword ptr [rsp+150h+tr.trDelta], xmm6
      vmovss  dword ptr [rsp+150h+tr.trDelta+4], xmm10
    }
    if ( atTime - v117 >= _ER13 )
    {
      v100 = v117 + _ER13;
      if ( _ER13 <= 0 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+150h+result], xmm2
          vmovss  dword ptr [rsp+150h+result+4], xmm5
          vmovss  dword ptr [rsp+150h+result+8], xmm4
        }
      }
      else
      {
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v100, &result);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+150h+result+8]
          vmovss  xmm5, dword ptr [rsp+150h+result+4]
          vmovss  xmm2, dword ptr [rsp+150h+result]
        }
        v81 = atTime;
      }
      if ( v57 - v81 > _ER14 )
      {
        tr.trType = TR_LINEAR;
        tr.trTime = v100;
        tr.trDuration = v59 - _ER13 - _ER14;
        __asm
        {
          vmovss  dword ptr [rsp+150h+tr.trBase], xmm2
          vmovss  dword ptr [rsp+150h+tr.trBase+4], xmm5
          vmovss  dword ptr [rsp+150h+tr.trBase+8], xmm4
        }
        BgTrajectory::LegacyEvaluateTrajectory(&tr, v81, out_result);
LABEL_37:
        __asm
        {
          vmovaps xmm10, [rsp+150h+var_88+8]
          vmovaps xmm11, [rsp+150h+var_98+8]
        }
        goto LABEL_38;
      }
      if ( _ER14 <= 0 )
      {
        *out_result = *_RBX;
        goto LABEL_37;
      }
      __asm
      {
        vsubss  xmm0, xmm7, xmm9
        vsubss  xmm3, xmm0, xmm8
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm2, xmm1, xmm2
        vmulss  xmm0, xmm10, xmm3
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsp+150h+tr.trBase], xmm2
        vmulss  xmm2, xmm11, xmm3
        vaddss  xmm0, xmm2, xmm4
      }
      tr.trType = TR_DECELERATE;
      __asm
      {
        vmovss  dword ptr [rsp+150h+tr.trBase+8], xmm0
        vmovss  dword ptr [rsp+150h+tr.trBase+4], xmm1
      }
      tr.trTime = v57 - _ER14;
      tr.trDuration = _ER14;
    }
    BgTrajectory::LegacyEvaluateTrajectory(&tr, v81, out_result);
    goto LABEL_37;
  }
  __asm { vmovss  dword ptr [rdi], xmm1 }
  *(_QWORD *)&out_result->y = *(_QWORD *)&_RBX->y;
  v30 = 0;
LABEL_39:
  __asm
  {
    vmovaps xmm6, [rsp+150h+var_48+8]
    vmovaps xmm7, [rsp+150h+var_58+8]
  }
  return v30;
}

/*
==============
ScriptableBg_PhysicsClearVelocity
==============
*/
void ScriptableBg_PhysicsClearVelocity(Physics_WorldId physicsWorld, unsigned int physicsInstance)
{
  unsigned int v5; 
  unsigned int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  unsigned int m_serialAndIndex; 
  __int64 v11; 
  hknpBodyId result; 
  vec3_t angVel; 
  vec3_t linVel; 

  if ( physicsWorld == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 816, ASSERT_TYPE_ASSERT, "(physicsWorld != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "physicsWorld != PHYSICS_WORLD_ID_INVALID") )
    __debugbreak();
  if ( physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.cpp", 817, ASSERT_TYPE_ASSERT, "(physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v5 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(physicsWorld, physicsInstance);
  if ( NumRigidBodys )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)physicsWorld > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v11) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
          __debugbreak();
      }
      if ( physicsInstance == -1 )
      {
        LODWORD(v11) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v11) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(physicsWorld - 2) <= 5 )
      {
        LODWORD(v11) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v11) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)physicsWorld <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v11) = physicsWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v11) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, physicsWorld, physicsInstance, v5);
      __asm { vmovss  dword ptr [rsp+0B8h+angVel], xmm6 }
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+angVel+4], xmm6
        vmovss  dword ptr [rsp+0B8h+angVel+8], xmm6
        vmovss  dword ptr [rsp+0B8h+linVel], xmm6
        vmovss  dword ptr [rsp+0B8h+linVel+4], xmm6
        vmovss  dword ptr [rsp+0B8h+linVel+8], xmm6
      }
      Physics_SetRigidBodyLinAngVel(physicsWorld, m_serialAndIndex, &linVel, &angVel);
      ++v5;
    }
    while ( v5 < NumRigidBodys );
    __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
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
  __asm
  {
    vmovss  xmm0, dword ptr [r8+0Ch]
    vaddss  xmm4, xmm0, dword ptr [r8]
  }
  _RBX = out_cmd;
  _R10 = endOrigin;
  __asm
  {
    vmulss  xmm4, xmm4, xmm4
    vmovss  xmm0, dword ptr [r10+4]
    vsubss  xmm2, xmm0, dword ptr [r11+4]
    vmovss  xmm0, dword ptr [r10+8]
    vsubss  xmm3, xmm0, dword ptr [r11+8]
    vmovss  xmm1, dword ptr [r10]
    vsubss  xmm5, xmm1, dword ptr [r11]
  }
  out_cmd->userId = userId;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+4], xmm0
    vmovsd  xmm1, qword ptr [r8+10h]
    vmovsd  qword ptr [rcx+14h], xmm1
  }
  out_cmd->startTime = startTime;
  out_cmd->startOrigin = *startOrigin;
  _RDX = moveDef;
  out_cmd->startAngles = *startAngles;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+20h]
    vmulss  xmm1, xmm0, cs:__real@c47a0000
    vcvttss2si eax, xmm1
  }
  out_cmd->endTime = startTime - _EAX;
  out_cmd->endOrigin = *endOrigin;
  out_cmd->endAngles = *endAngles;
  out_cmd->seconds = moveDef->seconds;
  out_cmd->secondsAccel = moveDef->secondsAccel;
  out_cmd->secondsDecel = moveDef->secondsDecel;
  out_cmd->origin = *startOrigin;
  __asm
  {
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, cs:__real@40000000
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm0, xmm0
    vsqrtss xmm3, xmm2, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rbx+60h], xmm2
    vmovss  xmm0, dword ptr [r8+14h]
    vaddss  xmm1, xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rbx+64h], xmm1
  }
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

