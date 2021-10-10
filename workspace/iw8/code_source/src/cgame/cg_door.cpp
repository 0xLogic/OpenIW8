/*
==============
CG_Door_UpdateScriptableAngles
==============
*/

void __fastcall CG_Door_UpdateScriptableAngles(const LocalClientNum_t localClientNum)
{
  ?CG_Door_UpdateScriptableAngles@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Door_ScriptableIsDoor
==============
*/

bool __fastcall CG_Door_ScriptableIsDoor(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?CG_Door_ScriptableIsDoor@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
CG_Door_SetCharacterDoorAngle
==============
*/

void __fastcall CG_Door_SetCharacterDoorAngle(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Door_SetCharacterDoorAngle@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Door_PlayerStateToCharacterInfo
==============
*/

void __fastcall CG_Door_PlayerStateToCharacterInfo(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ?CG_Door_PlayerStateToCharacterInfo@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_Door_ResetDoorStates
==============
*/

void __fastcall CG_Door_ResetDoorStates(const LocalClientNum_t localClientNum)
{
  ?CG_Door_ResetDoorStates@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Door_DrawDebug
==============
*/

void __fastcall CG_Door_DrawDebug(const LocalClientNum_t localClientNum)
{
  ?CG_Door_DrawDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Door_SetScriptableAngle
==============
*/

void __fastcall CG_Door_SetScriptableAngle(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, float targetAngle)
{
  ?CG_Door_SetScriptableAngle@@YAXW4LocalClientNum_t@@IM@Z(localClientNum, scriptableIndex, targetAngle);
}

/*
==============
CG_Door_InterpolateDoorState
==============
*/

void __fastcall CG_Door_InterpolateDoorState(const DoorState *const doorState, const DoorState *const nextDoorState, float fraction, DoorState *outState)
{
  ?CG_Door_InterpolateDoorState@@YAXQEBUDoorState@@0MPEAU1@@Z(doorState, nextDoorState, fraction, outState);
}

/*
==============
CG_Door_HandleAudioEvent
==============
*/

void __fastcall CG_Door_HandleAudioEvent(const LocalClientNum_t localClientNum, const unsigned int event, const unsigned int scriptableIndex)
{
  ?CG_Door_HandleAudioEvent@@YAXW4LocalClientNum_t@@II@Z(localClientNum, event, scriptableIndex);
}

/*
==============
CG_Door_InitPMoveData
==============
*/

void __fastcall CG_Door_InitPMoveData(const LocalClientNum_t localClientNum)
{
  ?CG_Door_InitPMoveData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Door_TransitionKillcam
==============
*/

void __fastcall CG_Door_TransitionKillcam(const LocalClientNum_t localClientNum)
{
  ?CG_Door_TransitionKillcam@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Door_GetPMoveData
==============
*/

void __fastcall CG_Door_GetPMoveData(pmove_t *pm)
{
  ?CG_Door_GetPMoveData@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
CG_Door_DrawDebug
==============
*/
void CG_Door_DrawDebug(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  const snapshot_t *snap; 
  float *p_angle; 
  const snapshot_t *v6; 
  __int64 v7; 
  float *v8; 
  const snapshot_t *v9; 
  __int64 v10; 
  CgEntitySystem *v11; 
  const cpose_t *v12; 
  __int64 v13; 
  ScriptableInstanceClientContext *v14; 
  __m128 v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  __int64 fromServer; 
  __int64 v31; 
  __int64 v32; 
  const snapshot_t *v33; 
  const snapshot_t *v34; 
  float *v35; 
  vec3_t end; 
  vec3_t start; 
  char dest[8]; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0;
  snap = LocalClientGlobals->snap;
  v34 = snap;
  if ( snap[1].serverTime > 0 )
  {
    p_angle = &LocalClientGlobals->predictedPlayerState.doorState[0].angle;
    v6 = snap + 33104;
    v7 = 16i64;
    v35 = p_angle;
    v32 = 16i64;
    v33 = snap + 33104;
    do
    {
      v8 = p_angle;
      v9 = v6;
      v10 = 2i64;
      do
      {
        if ( LODWORD(v9->__vftable) != -1 )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v31) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v31) )
              __debugbreak();
          }
          if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v31) = CgEntitySystem::ms_allocatedCount;
            LODWORD(fromServer) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, v31) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v1] )
          {
            LODWORD(v31) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v31) )
              __debugbreak();
          }
          v11 = CgEntitySystem::ms_entitySystemArray[v1];
          if ( v3 >= 0x800 )
          {
            LODWORD(v31) = 2048;
            LODWORD(fromServer) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", fromServer, v31) )
              __debugbreak();
          }
          v12 = (const cpose_t *)((char *)v11 + v7);
          v13 = LODWORD(v9->__vftable);
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)v13 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v31) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(fromServer) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", fromServer, v31) )
              __debugbreak();
          }
          if ( (unsigned int)v1 >= 2 )
          {
            LODWORD(v31) = 2;
            LODWORD(fromServer) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", fromServer, v31) )
              __debugbreak();
          }
          if ( !g_scriptableCl_instanceContexts[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
            __debugbreak();
          v14 = &g_scriptableCl_instanceContexts[v1][v13];
          v15 = (__m128)LODWORD(v14->commonContext.angles.v[1]);
          if ( *((_DWORD *)v8 - 1) == LODWORD(v9->__vftable) )
            v15 = (__m128)*(unsigned int *)v8;
          *(double *)v15.m128_u64 = j___libm_sse2_sincosf_();
          *(_QWORD *)start.v = *(_QWORD *)v14->commonContext.originInitial.v;
          start.v[2] = v14->commonContext.originInitial.v[2] + 50.0;
          start.v[0] = (float)(_mm_shuffle_ps(v15, v15, 1).m128_f32[0] * 20.0) + start.v[0];
          start.v[1] = (float)(v15.m128_f32[0] * 20.0) + start.v[1];
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !v12->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v12->origin.Get_origin, v12);
          FunctionPointer_origin(&v12->origin.origin.origin, &end);
          if ( v12->isPosePrecise )
          {
            _XMM0 = LODWORD(end.v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            _XMM0 = LODWORD(end.v[1]);
            __asm
            {
              vcvtsd2ss xmm2, xmm1, xmm1
              vcvtdq2pd xmm0, xmm0
            }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            _XMM0 = LODWORD(end.v[2]);
            end.v[0] = *(float *)&_XMM2;
            __asm
            {
              vcvtsd2ss xmm2, xmm1, xmm1
              vcvtdq2pd xmm0, xmm0
            }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            end.v[1] = *(float *)&_XMM2;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          }
          else
          {
            *(float *)&_XMM2 = end.v[2];
          }
          end.v[2] = *(float *)&_XMM2 + 40.0;
          if ( LOBYTE(v9->snapFlags) )
          {
            CL_AddDebugLine(&start, &end, &colorRed, 1, 0, 0);
            Com_sprintf(dest, 8ui64, "%d", v3);
            CL_AddDebugString(&start, &colorRed, 0.5, dest, 0, 0);
          }
          else
          {
            CL_AddDebugLine(&start, &end, &colorBlue, 1, 0, 0);
          }
          v7 = v32;
        }
        v9 = (const snapshot_t *)((char *)v9 + 12);
        v8 += 4;
        --v10;
      }
      while ( v10 );
      v7 += 760i64;
      v6 = (const snapshot_t *)((char *)v33 + 408);
      p_angle = v35;
      ++v3;
      v33 = (const snapshot_t *)((char *)v33 + 408);
      v32 = v7;
    }
    while ( (signed int)v3 < v34[1].serverTime );
  }
}

/*
==============
CG_Door_GetPMoveData
==============
*/
void CG_Door_GetPMoveData(pmove_t *pm)
{
  playerState_s *ps; 
  bool *doorAvailable; 
  DoorState *doorState; 
  __int64 v5; 
  char v6; 
  __int64 localClientNum; 
  bool *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 322, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  doorAvailable = pm->doorAvailable;
  doorState = ps->doorState;
  v5 = 2i64;
  do
  {
    if ( doorState->index == -1 )
    {
      *doorAvailable = 0;
      v6 = 0;
    }
    else
    {
      localClientNum = pm->localClientNum;
      if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount )
      {
        LODWORD(v10) = cg_t::ms_allocatedCount;
        LODWORD(v9) = pm->localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[localClientNum] )
      {
        LODWORD(v10) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v10) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v10) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v10) )
          __debugbreak();
      }
      v8 = &doorAvailable[-896i64 - (_QWORD)pm + (_QWORD)cg_t::ms_cgArray[localClientNum]];
      *doorAvailable = v8[26050];
      v6 = v8[26048];
    }
    doorAvailable[2] = v6;
    ++doorState;
    ++doorAvailable;
    --v5;
  }
  while ( v5 );
}

/*
==============
CG_Door_HandleAudioEvent
==============
*/
void CG_Door_HandleAudioEvent(const LocalClientNum_t localClientNum, const unsigned int event, const unsigned int scriptableIndex)
{
  ScriptableContext v6; 
  ScriptablePartDef *PartScriptedDefFromName; 
  float v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int outStateIdx; 

  if ( ScriptableCl_GetInstanceIsInitialized(localClientNum, scriptableIndex) )
  {
    v6 = ScriptableCl_LocalClientToContext(localClientNum);
    PartScriptedDefFromName = ScriptableCl_GetPartScriptedDefFromName(v6, scriptableIndex, (const scr_string_t)scr_const.door);
    v8 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->anglesInitial.v[1];
    switch ( event )
    {
      case 0x90u:
        BG_Door_NearestAngle(PartScriptedDefFromName, v8 + 90.0, v8, &outStateIdx);
        break;
      case 0x91u:
        BG_Door_NearestAngle(PartScriptedDefFromName, v8, v8, &outStateIdx);
        break;
      case 0x8Fu:
        outStateIdx = 9;
        break;
      default:
        v9 = 15;
        if ( event == 142 )
          v9 = 11;
        outStateIdx = v9;
        break;
    }
    if ( outStateIdx >= PartScriptedDefFromName->numStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 401, ASSERT_TYPE_ASSERT, "( stateIndex < partDef->numStates )", "Attempting to play audio for a door state that does not exist.  Do not remove part states from the base door.") )
      __debugbreak();
    v10 = 0;
    v11 = (__int64)&PartScriptedDefFromName->states[outStateIdx];
    if ( *(_DWORD *)(v11 + 12) )
    {
      do
      {
        v12 = 176i64 * v10;
        v13 = *(_QWORD *)(v11 + 16);
        if ( *(_DWORD *)(v12 + v13 + 16) == 13 )
          ScriptableCl_PlaySound(localClientNum, scriptableIndex, (const ScriptableEventSoundDef *)(v12 + v13 + 24));
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v11 + 12) );
    }
  }
}

/*
==============
CG_Door_InitPMoveData
==============
*/
void CG_Door_InitPMoveData(const LocalClientNum_t localClientNum)
{
  *(_DWORD *)CG_GetLocalClientGlobals(localClientNum)->doorSettle = 16843009;
}

/*
==============
CG_Door_InterpolateDoorState
==============
*/
void CG_Door_InterpolateDoorState(const DoorState *const doorState, const DoorState *const nextDoorState, float fraction, DoorState *outState)
{
  if ( !doorState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 344, ASSERT_TYPE_ASSERT, "(doorState)", (const char *)&queryFormat, "doorState") )
    __debugbreak();
  if ( !nextDoorState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 345, ASSERT_TYPE_ASSERT, "(nextDoorState)", (const char *)&queryFormat, "nextDoorState") )
    __debugbreak();
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 346, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  if ( doorState->moveType && nextDoorState->moveType && doorState->index == nextDoorState->index )
  {
    *outState = *doorState;
    outState->angle = (float)((float)(1.0 - fraction) * doorState->angle) + (float)(fraction * nextDoorState->angle);
  }
  else
  {
    *outState = *doorState;
  }
}

/*
==============
CG_Door_PlayerStateToCharacterInfo
==============
*/
void CG_Door_PlayerStateToCharacterInfo(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  cg_t *v6; 
  characterInfo_t *CharacterInfo; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 416, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  clientNum = ps->clientNum;
  v6 = LocalClientGlobals;
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
  {
    CharacterInfo = CG_GetCharacterInfo(v6, clientNum);
    if ( CharacterInfo )
    {
      if ( CharacterInfo->infoValid )
      {
        CharacterInfo->doorState[0].index = ps->doorState[0].index;
        CharacterInfo->doorState[0].angle = ps->doorState[0].angle;
        CharacterInfo->doorState[0].owner = ps->doorState[0].moveType != DOOR_MOVE_INVALID;
        CharacterInfo->doorState[1].index = ps->doorState[1].index;
        CharacterInfo->doorState[1].angle = ps->doorState[1].angle;
        CharacterInfo->doorState[1].owner = ps->doorState[1].moveType != DOOR_MOVE_INVALID;
      }
    }
  }
}

/*
==============
CG_Door_ResetDoorStates
==============
*/
void CG_Door_ResetDoorStates(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  __int64 v3; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *v7; 
  __int64 v12; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(v12) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v12) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !v2->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 28, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  v3 = (__int64)v2->nextSnap->GetPlayerState(v2->nextSnap, (unsigned int)v1);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 30, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  clientNum = v2->clientNum;
  if ( v2->HasCharacterInfo(v2, clientNum) )
    CharacterInfo = CG_GetCharacterInfo(v2, clientNum);
  else
    CharacterInfo = NULL;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  if ( LocalClientStatics )
  {
    v7 = CgStatic::GetCharacterInfo(LocalClientStatics, v2->clientNum);
    _XMM1 = *(unsigned int *)(v3 + 1020);
    __asm { vinsertps xmm1, xmm1, dword ptr [rbp+400h], 10h }
    if ( CharacterInfo )
    {
      *(double *)&CharacterInfo->prevDoorState[0].index = *(double *)&_XMM1;
      *(double *)&CharacterInfo->nextDoorState[0].index = *(double *)&_XMM1;
      *(double *)&CharacterInfo->doorState[0].index = *(double *)&_XMM1;
      *(_DWORD *)&CharacterInfo->prevDoorState[0].owner = 0;
      *(_DWORD *)&CharacterInfo->nextDoorState[0].owner = 0;
      *(_DWORD *)&CharacterInfo->doorState[0].owner = 0;
    }
    if ( v7 )
    {
      *(double *)&v7->prevDoorState[0].index = *(double *)&_XMM1;
      *(double *)&v7->nextDoorState[0].index = *(double *)&_XMM1;
      *(double *)&v7->doorState[0].index = *(double *)&_XMM1;
      *(_DWORD *)&v7->prevDoorState[0].owner = 0;
      *(_DWORD *)&v7->nextDoorState[0].owner = 0;
      *(_DWORD *)&v7->doorState[0].owner = 0;
    }
    _XMM1 = *(unsigned int *)(v3 + 1036);
    __asm { vinsertps xmm2, xmm1, dword ptr [rbp+410h], 10h }
    if ( CharacterInfo )
    {
      *(double *)&CharacterInfo->prevDoorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&CharacterInfo->prevDoorState[1].owner = 0;
      *(double *)&CharacterInfo->nextDoorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&CharacterInfo->nextDoorState[1].owner = 0;
      *(double *)&CharacterInfo->doorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&CharacterInfo->doorState[1].owner = 0;
    }
    if ( v7 )
    {
      *(double *)&v7->prevDoorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&v7->prevDoorState[1].owner = 0;
      *(double *)&v7->nextDoorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&v7->nextDoorState[1].owner = 0;
      *(double *)&v7->doorState[1].index = *(double *)&_XMM2;
      *(_DWORD *)&v7->doorState[1].owner = 0;
    }
  }
}

/*
==============
CG_Door_ScriptableIsDoor
==============
*/
bool CG_Door_ScriptableIsDoor(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const dvar_t *v2; 
  const ScriptableDef *def; 

  v2 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && (def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def) != NULL && (def->flags & 0x180000) != 0;
}

/*
==============
CG_Door_SetCharacterDoorAngle
==============
*/
void CG_Door_SetCharacterDoorAngle(const LocalClientNum_t localClientNum, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v6; 
  unsigned int v7; 
  characterInfo_t *v8; 
  characterInfo_t *v9; 
  bool *p_owner; 
  __int64 i; 
  int v12; 
  char v13; 
  unsigned int index; 
  int v15; 
  unsigned int v16; 
  float v19; 
  bool v21; 
  const dvar_t *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 86, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 87, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
  {
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
    v6 = CharacterInfo;
    if ( CharacterInfo )
    {
      if ( CharacterInfo->infoValid )
      {
        v7 = LocalClientGlobals->clientNum;
        if ( !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v7) || (v8 = CG_GetCharacterInfo(LocalClientGlobals, v7), (v9 = v8) == NULL) || !v8->infoValid )
          v9 = NULL;
        p_owner = &v6->prevDoorState[0].owner;
        for ( i = 2i64; i; --i )
        {
          if ( cent->nextState.number == LocalClientGlobals->clientNum && p_owner[48] && !LocalClientGlobals->inKillCam )
            goto LABEL_60;
          *((_DWORD *)p_owner + 10) = -1;
          p_owner[48] = 0;
          v12 = *((_DWORD *)p_owner - 2);
          if ( v12 == -1 && *((_DWORD *)p_owner + 4) == -1 )
            goto LABEL_60;
          v13 = 0;
          if ( v9 )
          {
            if ( cent->nextState.number != LocalClientGlobals->clientNum )
            {
              index = v9->doorState[0].index;
              if ( v12 == index || *((_DWORD *)p_owner + 4) == index )
              {
                if ( *p_owner || p_owner[24] )
                  LocalClientGlobals->doorAvailable[0] = 0;
                LocalClientGlobals->doorSettle[0] = 0;
              }
            }
            v15 = *((_DWORD *)p_owner - 2);
            if ( (v15 == v9->prevDoorState[0].index || *((_DWORD *)p_owner + 4) == v9->nextDoorState[0].index) && (v9->prevDoorState[0].owner || v9->nextDoorState[0].owner) )
              v13 = 1;
            if ( cent->nextState.number != LocalClientGlobals->clientNum )
            {
              v16 = v9->doorState[1].index;
              if ( v15 == v16 || *((_DWORD *)p_owner + 4) == v16 )
              {
                if ( *p_owner || p_owner[24] )
                  LocalClientGlobals->doorAvailable[1] = 0;
                LocalClientGlobals->doorSettle[1] = 0;
              }
            }
            v12 = *((_DWORD *)p_owner - 2);
            if ( (v12 == v9->prevDoorState[1].index || *((_DWORD *)p_owner + 4) == v9->nextDoorState[1].index) && (v9->prevDoorState[1].owner || v9->nextDoorState[1].owner) )
              v13 = 1;
            if ( v13 && !LocalClientGlobals->inKillCam )
              goto LABEL_60;
          }
          if ( *((_DWORD *)p_owner + 4) == v12 )
          {
            _XMM5 = 0i64;
            __asm { vroundss xmm2, xmm5, xmm1, 1 }
            v19 = (float)((float)((float)((float)((float)(*((float *)p_owner + 5) - *((float *)p_owner - 1)) * 0.0027777778) - *(float *)&_XMM2) * 1.0) * LocalClientGlobals->frameInterpolation) + (float)(0.0027777778 * *((float *)p_owner - 1));
            __asm { vroundss xmm2, xmm5, xmm1, 1 }
            *((float *)p_owner + 11) = (float)(v19 - *(float *)&_XMM2) * 360.0;
            *((_DWORD *)p_owner + 10) = *((_DWORD *)p_owner + 4);
            v21 = *p_owner || p_owner[24];
          }
          else
          {
            if ( v12 == -1 )
              goto LABEL_55;
            *((_DWORD *)p_owner + 11) = *((_DWORD *)p_owner - 1);
            *((_DWORD *)p_owner + 10) = *((_DWORD *)p_owner - 2);
            v21 = *p_owner;
          }
          p_owner[48] = v21;
LABEL_55:
          v22 = DCONST_DVARINT_bg_doorSnapshotDebugPrint;
          if ( !DCONST_DVARINT_bg_doorSnapshotDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorSnapshotDebugPrint") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          if ( v22->current.integer == cent->nextState.clientNum )
          {
            LODWORD(v26) = *((_DWORD *)p_owner + 4);
            LODWORD(v25) = *((_DWORD *)p_owner - 2);
            LODWORD(v24) = LocalClientGlobals->nextSnap->serverTime;
            LODWORD(v23) = LocalClientGlobals->snap->serverTime;
            Com_Printf(0, "DOOR-CLIENT-Script : Prev: %0.2f  Next: %0.2f  FInterp: %f  Final: %0.2f  PrevSnapT: %d  NextSnapT: %d  PrevIndex: %d  NextIndex: %d \n", *((float *)p_owner - 1), *((float *)p_owner + 5), LocalClientGlobals->frameInterpolation, *((float *)p_owner + 11), v23, v24, v25, v26);
          }
LABEL_60:
          p_owner += 12;
        }
      }
    }
  }
}

/*
==============
CG_Door_SetScriptableAngle
==============
*/
void CG_Door_SetScriptableAngle(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, float targetAngle)
{
  __int128 v3; 
  __int64 v4; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int LinkObject; 
  const DynEntityDef *Def; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  DynEntityClient *v11; 
  const dvar_t *v12; 
  cg_t *LocalClientGlobals; 
  __int64 warp; 
  __int64 v15; 
  vec3_t outDoorAngles; 
  __int128 v17; 

  v4 = localClientNum;
  v17 = v3;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  BG_Door_CalcDoorAngles(&InstanceCommonContext->anglesInitial, targetAngle, &outDoorAngles);
  if ( outDoorAngles.v[1] != InstanceCommonContext->angles.v[1] )
  {
    if ( ScriptableCl_IsLinked((const LocalClientNum_t)v4, scriptableIndex) && ScriptableCl_GetLinkType((const LocalClientNum_t)v4, scriptableIndex) == SCRIPTABLE_LINK_DYNENT )
    {
      LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v4, scriptableIndex);
      Def = DynEnt_GetDef(LinkObject, DYNENT_BASIS_MODEL);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( Def->clientId[v4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v9 = Def->clientId[v4];
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(warp) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", warp, 2) )
          __debugbreak();
      }
      v10 = g_dynEntClientEntsAllocCount[v4][0];
      if ( v9 >= v10 )
      {
        LODWORD(v15) = v10;
        LODWORD(warp) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", warp, v15) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[v4][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v11 = &g_dynEntClientLists[v4][0][v9];
      if ( v11 && v11->activeModel )
        ScriptableCL_SetPose((const LocalClientNum_t)v4, scriptableIndex, InstanceCommonContext, &InstanceCommonContext->originInitial, &outDoorAngles, 1);
    }
    v12 = DCONST_DVARINT_bg_doorAngleDebugPrint;
    if ( !DCONST_DVARINT_bg_doorAngleDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorAngleDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == scriptableIndex )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      Com_Printf_NoFilter("DOOR-Set Scriptable %0.3f  Time: %d \n", outDoorAngles.v[1], (unsigned int)LocalClientGlobals->time);
    }
  }
}

/*
==============
CG_Door_TransitionKillcam
==============
*/
void CG_Door_TransitionKillcam(const LocalClientNum_t localClientNum)
{
  const snapshot_t *nextSnap; 
  int v3; 
  CgStatic *LocalClientStatics; 
  int *p_serverTime; 
  int v6; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 

  nextSnap = CG_GetLocalClientGlobals(localClientNum)->nextSnap;
  v3 = 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( nextSnap[1].serverTime > 0 )
  {
    p_serverTime = &nextSnap[33084].serverTime;
    do
    {
      v6 = *p_serverTime;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, v6);
      ++v3;
      p_serverTime += 102;
      CharacterInfo->prevDoorState[0].index = -1;
      CharacterInfo->doorState[0].index = -1;
      CharacterInfo->prevDoorState[1].index = -1;
      CharacterInfo->doorState[1].index = -1;
    }
    while ( v3 < nextSnap[1].serverTime );
  }
}

/*
==============
CG_Door_UpdateScriptableAngles
==============
*/
void CG_Door_UpdateScriptableAngles(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  int v5; 
  characterInfo_t *CharacterInfo; 
  char v7; 
  __int64 v8; 
  characterInfo_t *v9; 
  characterInfo_t *v10; 
  centity_t *Entity; 
  DoorClientState *doorState; 
  __int64 v13; 
  unsigned int index; 
  __int16 *v15; 
  DoorClientState *v16; 
  __int16 v17; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Door_UpdateScriptableAngles");
  v2 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    clientNum = LocalClientGlobals->clientNum;
    v5 = 0;
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
    else
      CharacterInfo = NULL;
    v17 = 0;
    v7 = 0;
    v8 = 2i64;
    if ( cls.maxClients > 0 )
    {
      do
      {
        if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) )
        {
          v9 = CG_GetCharacterInfo(LocalClientGlobals, v5);
          v10 = v9;
          if ( v9 )
          {
            if ( v9->infoValid && v5 != LocalClientGlobals->clientNum )
            {
              Entity = CG_GetEntity(localClientNum, v5);
              if ( Entity && (Entity->flags & 1) != 0 )
              {
                doorState = v10->doorState;
                v13 = 2i64;
                do
                {
                  index = doorState->index;
                  if ( doorState->index - 1 <= 0xFFFFFFFD )
                  {
                    if ( index == CharacterInfo->doorState[0].index )
                    {
                      LOBYTE(v17) = 1;
                    }
                    else
                    {
                      if ( index == CharacterInfo->doorState[1].index )
                        v7 = 1;
                      HIBYTE(v17) = v7;
                    }
                    CG_Door_SetScriptableAngle(localClientNum, index, doorState->angle);
                  }
                  ++doorState;
                  --v13;
                }
                while ( v13 );
                v8 = 2i64;
              }
              else
              {
                v10->prevDoorState[0].index = -1;
                v10->doorState[0].index = -1;
                v10->prevDoorState[1].index = -1;
                v10->doorState[1].index = -1;
              }
            }
          }
        }
        ++v5;
      }
      while ( v5 < cls.maxClients );
    }
    v15 = &v17;
    v16 = CharacterInfo->doorState;
    do
    {
      if ( v16->index - 1 <= 0xFFFFFFFD && (v16->owner || !*(_BYTE *)v15) )
        CG_Door_SetScriptableAngle(localClientNum, v16->index, v16->angle);
      v15 = (__int16 *)((char *)v15 + 1);
      ++v16;
      --v8;
    }
    while ( v8 );
  }
  Sys_ProfEndNamedEvent();
}

