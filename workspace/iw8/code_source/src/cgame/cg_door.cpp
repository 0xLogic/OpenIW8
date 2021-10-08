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
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  unsigned int v9; 
  const snapshot_t *snap; 
  float *p_angle; 
  const snapshot_t *v12; 
  __int64 v13; 
  const snapshot_t *v21; 
  __int64 v22; 
  CgEntitySystem *v23; 
  const cpose_t *v24; 
  __int64 v25; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 fromServer; 
  __int64 v60; 
  __int64 v61; 
  const snapshot_t *v62; 
  const snapshot_t *v63; 
  float *v64; 
  vec3_t end; 
  vec3_t start; 
  char dest[8]; 

  v7 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = 0;
  snap = LocalClientGlobals->snap;
  v63 = snap;
  if ( snap[1].serverTime > 0 )
  {
    p_angle = &LocalClientGlobals->predictedPlayerState.doorState[0].angle;
    v12 = snap + 33104;
    __asm { vmovaps [rsp+118h+var_38], xmm6 }
    v13 = 16i64;
    __asm
    {
      vmovsd  xmm6, cs:__real@3f30000000000000
      vmovaps [rsp+118h+var_48], xmm7
      vmovss  xmm7, cs:__real@42200000
      vmovaps [rsp+118h+var_58], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vmovaps [rsp+118h+var_68], xmm9
      vmovss  xmm9, cs:__real@41a00000
      vmovaps [rsp+118h+var_78], xmm10
      vmovss  xmm10, cs:__real@3c8efa35
      vmovaps [rsp+118h+var_88], xmm11
      vmovss  xmm11, cs:__real@42480000
    }
    v64 = p_angle;
    v61 = 16i64;
    v62 = snap + 33104;
    do
    {
      _R14 = p_angle;
      v21 = v12;
      v22 = 2i64;
      do
      {
        if ( LODWORD(v21->__vftable) != -1 )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v60) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v60) )
              __debugbreak();
          }
          if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v60) = CgEntitySystem::ms_allocatedCount;
            LODWORD(fromServer) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, v60) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v7] )
          {
            LODWORD(v60) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v60) )
              __debugbreak();
          }
          v23 = CgEntitySystem::ms_entitySystemArray[v7];
          if ( v9 >= 0x800 )
          {
            LODWORD(v60) = 2048;
            LODWORD(fromServer) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", fromServer, v60) )
              __debugbreak();
          }
          v24 = (const cpose_t *)((char *)v23 + v13);
          v25 = LODWORD(v21->__vftable);
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)v25 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v60) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(fromServer) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", fromServer, v60) )
              __debugbreak();
          }
          if ( (unsigned int)v7 >= 2 )
          {
            LODWORD(v60) = 2;
            LODWORD(fromServer) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", fromServer, v60) )
              __debugbreak();
          }
          if ( !g_scriptableCl_instanceContexts[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
            __debugbreak();
          _RBX = &g_scriptableCl_instanceContexts[v7][v25];
          __asm { vmovss  xmm0, dword ptr [rbx+30h] }
          if ( *((_DWORD *)_R14 - 1) == LODWORD(v21->__vftable) )
            __asm { vmovss  xmm0, dword ptr [r14] }
          __asm { vmulss  xmm0, xmm0, xmm10 }
          *(double *)&_XMM0 = j___libm_sse2_sincosf_();
          __asm
          {
            vmovss  xmm2, dword ptr [rbx+8]
            vmovss  dword ptr [rsp+118h+start], xmm2
            vmovss  xmm3, dword ptr [rbx+0Ch]
            vshufps xmm1, xmm0, xmm0, 1
            vmulss  xmm1, xmm1, xmm9
            vmovss  dword ptr [rsp+118h+start+4], xmm3
            vmovss  xmm4, dword ptr [rbx+10h]
            vmulss  xmm0, xmm0, xmm9
            vaddss  xmm2, xmm1, xmm2
            vaddss  xmm1, xmm0, xmm3
            vaddss  xmm0, xmm11, xmm4
            vmovss  dword ptr [rsp+118h+start+8], xmm0
            vmovss  dword ptr [rsp+118h+start], xmm2
            vmovss  dword ptr [rsp+118h+start+4], xmm1
          }
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !v24->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v24->origin.Get_origin, v24);
          FunctionPointer_origin(&v24->origin.origin.origin, &end);
          if ( v24->isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, dword ptr [rsp+118h+end]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vmovd   xmm0, dword ptr [rsp+118h+end+4]
              vcvtsd2ss xmm2, xmm1, xmm1
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vmovd   xmm0, dword ptr [rsp+118h+end+8]
              vmovss  dword ptr [rsp+118h+end], xmm2
              vcvtsd2ss xmm2, xmm1, xmm1
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsp+118h+end+4], xmm2
              vcvtsd2ss xmm2, xmm1, xmm1
            }
          }
          else
          {
            __asm { vmovss  xmm2, dword ptr [rsp+118h+end+8] }
          }
          __asm
          {
            vaddss  xmm0, xmm2, xmm7
            vmovss  dword ptr [rsp+118h+end+8], xmm0
          }
          if ( LOBYTE(v21->snapFlags) )
          {
            CL_AddDebugLine(&start, &end, &colorRed, 1, 0, 0);
            Com_sprintf(dest, 8ui64, "%d", v9);
            __asm { vmovaps xmm2, xmm8; scale }
            CL_AddDebugString(&start, &colorRed, *(float *)&_XMM2, dest, 0, 0);
          }
          else
          {
            CL_AddDebugLine(&start, &end, &colorBlue, 1, 0, 0);
          }
          v13 = v61;
        }
        v21 = (const snapshot_t *)((char *)v21 + 12);
        _R14 += 4;
        --v22;
      }
      while ( v22 );
      v13 += 760i64;
      v12 = (const snapshot_t *)((char *)v62 + 408);
      p_angle = v64;
      ++v9;
      v62 = (const snapshot_t *)((char *)v62 + 408);
      v61 = v13;
    }
    while ( (signed int)v9 < v63[1].serverTime );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_88]
      vmovaps xmm10, [rsp+118h+var_78]
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm7, [rsp+118h+var_48]
      vmovaps xmm6, [rsp+118h+var_38]
    }
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
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int outStateIdx; 

  if ( ScriptableCl_GetInstanceIsInitialized(localClientNum, scriptableIndex) )
  {
    v6 = ScriptableCl_LocalClientToContext(localClientNum);
    PartScriptedDefFromName = ScriptableCl_GetPartScriptedDefFromName(v6, scriptableIndex, (const scr_string_t)scr_const.door);
    _RAX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    __asm { vmovss  xmm0, dword ptr [rax+18h] }
    switch ( event )
    {
      case 0x90u:
        __asm
        {
          vaddss  xmm1, xmm0, cs:__real@42b40000; doorAngle
          vmovaps xmm2, xmm0; initialDoorAngle
        }
        BG_Door_NearestAngle(PartScriptedDefFromName, *(float *)&_XMM1, *(float *)&_XMM2, &outStateIdx);
        break;
      case 0x91u:
        __asm
        {
          vmovaps xmm2, xmm0; initialDoorAngle
          vmovaps xmm1, xmm0; doorAngle
        }
        BG_Door_NearestAngle(PartScriptedDefFromName, *(float *)&_XMM1, *(float *)&_XMM2, &outStateIdx);
        break;
      case 0x8Fu:
        outStateIdx = 9;
        break;
      default:
        v14 = 15;
        if ( event == 142 )
          v14 = 11;
        outStateIdx = v14;
        break;
    }
    if ( outStateIdx >= PartScriptedDefFromName->numStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 401, ASSERT_TYPE_ASSERT, "( stateIndex < partDef->numStates )", "Attempting to play audio for a door state that does not exist.  Do not remove part states from the base door.") )
      __debugbreak();
    v15 = 0;
    v16 = (__int64)&PartScriptedDefFromName->states[outStateIdx];
    if ( *(_DWORD *)(v16 + 12) )
    {
      do
      {
        v17 = 176i64 * v15;
        v18 = *(_QWORD *)(v16 + 16);
        if ( *(_DWORD *)(v17 + v18 + 16) == 13 )
          ScriptableCl_PlaySound(localClientNum, scriptableIndex, (const ScriptableEventSoundDef *)(v17 + v18 + 24));
        ++v15;
      }
      while ( v15 < *(_DWORD *)(v16 + 12) );
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

void __fastcall CG_Door_InterpolateDoorState(const DoorState *const doorState, const DoorState *const nextDoorState, double fraction, DoorState *outState)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outState;
  _RBX = doorState;
  __asm { vmovaps xmm6, xmm2 }
  if ( !doorState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 344, ASSERT_TYPE_ASSERT, "(doorState)", (const char *)&queryFormat, "doorState") )
    __debugbreak();
  if ( !nextDoorState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 345, ASSERT_TYPE_ASSERT, "(nextDoorState)", (const char *)&queryFormat, "nextDoorState") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 346, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  if ( _RBX->moveType && nextDoorState->moveType && _RBX->index == nextDoorState->index )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovss  xmm1, cs:__real@3f800000
      vmovups xmmword ptr [rdi], xmm0
      vmulss  xmm0, xmm6, dword ptr [rsi+4]
      vsubss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm2, dword ptr [rbx+4]
      vaddss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  CgStatic *LocalClientStatics; 
  __int64 v13; 
  __int64 v14; 
  __int64 v16; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(v13) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v13) )
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
    _RBX = CG_GetCharacterInfo(v2, clientNum);
  else
    _RBX = NULL;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  if ( LocalClientStatics )
  {
    _RDX = CgStatic::GetCharacterInfo(LocalClientStatics, v2->clientNum);
    v14 = *(unsigned int *)(v3 + 1020);
    __asm
    {
      vmovsd  xmm1, [rsp+58h+var_18]
      vinsertps xmm1, xmm1, dword ptr [rbp+400h], 10h
      vmovsd  [rsp+58h+var_18], xmm1
      vmovaps xmm2, xmm1
    }
    if ( _RBX )
    {
      __asm
      {
        vmovsd  qword ptr [rbx+91Ch], xmm1
        vmovsd  qword ptr [rbx+934h], xmm1
        vmovsd  qword ptr [rbx+94Ch], xmm1
      }
      *(_DWORD *)&_RBX->prevDoorState[0].owner = 0;
      *(_DWORD *)&_RBX->nextDoorState[0].owner = 0;
      *(_DWORD *)&_RBX->doorState[0].owner = 0;
    }
    if ( _RDX )
    {
      __asm
      {
        vmovsd  qword ptr [rdx+91Ch], xmm2
        vmovsd  qword ptr [rdx+934h], xmm2
        vmovsd  qword ptr [rdx+94Ch], xmm2
      }
      *(_DWORD *)&_RDX->prevDoorState[0].owner = 0;
      *(_DWORD *)&_RDX->nextDoorState[0].owner = 0;
      *(_DWORD *)&_RDX->doorState[0].owner = 0;
    }
    v16 = *(unsigned int *)(v3 + 1036);
    __asm
    {
      vmovsd  xmm1, [rsp+58h+var_18]
      vinsertps xmm2, xmm1, dword ptr [rbp+410h], 10h
    }
    if ( _RBX )
    {
      __asm { vmovsd  qword ptr [rbx+928h], xmm2 }
      *(_DWORD *)&_RBX->prevDoorState[1].owner = 0;
      __asm { vmovsd  qword ptr [rbx+940h], xmm2 }
      *(_DWORD *)&_RBX->nextDoorState[1].owner = 0;
      __asm { vmovsd  qword ptr [rbx+958h], xmm2 }
      *(_DWORD *)&_RBX->doorState[1].owner = 0;
    }
    if ( _RDX )
    {
      __asm { vmovsd  qword ptr [rdx+928h], xmm2 }
      *(_DWORD *)&_RDX->prevDoorState[1].owner = 0;
      __asm { vmovsd  qword ptr [rdx+940h], xmm2 }
      *(_DWORD *)&_RDX->nextDoorState[1].owner = 0;
      __asm { vmovsd  qword ptr [rdx+958h], xmm2 }
      *(_DWORD *)&_RDX->doorState[1].owner = 0;
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
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v10; 
  unsigned int v11; 
  characterInfo_t *v13; 
  characterInfo_t *v14; 
  __int64 v20; 
  int v21; 
  char v22; 
  unsigned int index; 
  int v24; 
  unsigned int v25; 
  bool v41; 
  const dvar_t *v42; 
  char *fmt; 
  double v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 86, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RDI->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_door.cpp", 87, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  if ( _RDI->HasCharacterInfo(_RDI, clientNum) )
  {
    CharacterInfo = CG_GetCharacterInfo(_RDI, clientNum);
    v10 = CharacterInfo;
    if ( CharacterInfo )
    {
      if ( CharacterInfo->infoValid )
      {
        v11 = _RDI->clientNum;
        __asm
        {
          vmovaps [rsp+0B8h+var_38], xmm6
          vmovaps [rsp+0B8h+var_48], xmm7
          vmovaps [rsp+0B8h+var_58], xmm8
          vmovaps [rsp+0B8h+var_68], xmm9
        }
        if ( !_RDI->HasCharacterInfo(_RDI, v11) || (v13 = CG_GetCharacterInfo(_RDI, v11), (v14 = v13) == NULL) || !v13->infoValid )
          v14 = NULL;
        __asm
        {
          vmovss  xmm6, cs:__real@3b360b61
          vmovss  xmm7, cs:__real@3f000000
          vmovss  xmm8, cs:__real@3f800000
          vmovss  xmm9, cs:__real@43b40000
        }
        _RBX = &v10->prevDoorState[0].owner;
        v20 = 2i64;
        while ( 1 )
        {
          if ( cent->nextState.number == _RDI->clientNum && _RBX[48] && !_RDI->inKillCam )
            goto LABEL_60;
          *((_DWORD *)_RBX + 10) = -1;
          _RBX[48] = 0;
          v21 = *((_DWORD *)_RBX - 2);
          if ( v21 == -1 && *((_DWORD *)_RBX + 4) == -1 )
            goto LABEL_60;
          v22 = 0;
          if ( v14 )
          {
            if ( cent->nextState.number != _RDI->clientNum )
            {
              index = v14->doorState[0].index;
              if ( v21 == index || *((_DWORD *)_RBX + 4) == index )
              {
                if ( *_RBX || _RBX[24] )
                  _RDI->doorAvailable[0] = 0;
                _RDI->doorSettle[0] = 0;
              }
            }
            v24 = *((_DWORD *)_RBX - 2);
            if ( (v24 == v14->prevDoorState[0].index || *((_DWORD *)_RBX + 4) == v14->nextDoorState[0].index) && (v14->prevDoorState[0].owner || v14->nextDoorState[0].owner) )
              v22 = 1;
            if ( cent->nextState.number != _RDI->clientNum )
            {
              v25 = v14->doorState[1].index;
              if ( v24 == v25 || *((_DWORD *)_RBX + 4) == v25 )
              {
                if ( *_RBX || _RBX[24] )
                  _RDI->doorAvailable[1] = 0;
                _RDI->doorSettle[1] = 0;
              }
            }
            v21 = *((_DWORD *)_RBX - 2);
            if ( (v21 == v14->prevDoorState[1].index || *((_DWORD *)_RBX + 4) == v14->nextDoorState[1].index) && (v14->prevDoorState[1].owner || v14->nextDoorState[1].owner) )
              v22 = 1;
            if ( v22 && !_RDI->inKillCam )
              goto LABEL_60;
          }
          if ( *((_DWORD *)_RBX + 4) == v21 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+14h]
              vsubss  xmm1, xmm0, dword ptr [rbx-4]
              vmulss  xmm3, xmm1, xmm6
              vaddss  xmm1, xmm3, xmm7
              vxorps  xmm5, xmm5, xmm5
              vroundss xmm2, xmm5, xmm1, 1
              vsubss  xmm0, xmm3, xmm2
              vmulss  xmm2, xmm6, dword ptr [rbx-4]
              vmulss  xmm1, xmm0, xmm8
              vmulss  xmm3, xmm1, dword ptr [rdi+65E0h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm1, xmm4, xmm7
              vroundss xmm2, xmm5, xmm1, 1
              vsubss  xmm0, xmm4, xmm2
              vmulss  xmm1, xmm0, xmm9
              vmovss  dword ptr [rbx+2Ch], xmm1
            }
            *((_DWORD *)_RBX + 10) = *((_DWORD *)_RBX + 4);
            v41 = *_RBX || _RBX[24];
          }
          else
          {
            if ( v21 == -1 )
              goto LABEL_55;
            *((_DWORD *)_RBX + 11) = *((_DWORD *)_RBX - 1);
            *((_DWORD *)_RBX + 10) = *((_DWORD *)_RBX - 2);
            v41 = *_RBX;
          }
          _RBX[48] = v41;
LABEL_55:
          v42 = DCONST_DVARINT_bg_doorSnapshotDebugPrint;
          if ( !DCONST_DVARINT_bg_doorSnapshotDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorSnapshotDebugPrint") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v42);
          if ( v42->current.integer == cent->nextState.clientNum )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+2Ch]
              vmovss  xmm3, dword ptr [rbx+14h]
              vmovss  xmm2, dword ptr [rbx-4]
              vmovss  xmm1, dword ptr [rdi+65E0h]
            }
            LODWORD(v62) = *((_DWORD *)_RBX + 4);
            LODWORD(v61) = *((_DWORD *)_RBX - 2);
            LODWORD(v60) = _RDI->nextSnap->serverTime;
            LODWORD(v59) = _RDI->snap->serverTime;
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm2, xmm2, xmm2
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+0B8h+var_90], xmm0
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovsd  [rsp+0B8h+fmt], xmm1
            }
            Com_Printf(0, "DOOR-CLIENT-Script : Prev: %0.2f  Next: %0.2f  FInterp: %f  Final: %0.2f  PrevSnapT: %d  NextSnapT: %d  PrevIndex: %d  NextIndex: %d \n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v58, v59, v60, v61, v62);
          }
LABEL_60:
          _RBX += 12;
          if ( !--v20 )
          {
            __asm
            {
              vmovaps xmm9, [rsp+0B8h+var_68]
              vmovaps xmm8, [rsp+0B8h+var_58]
              vmovaps xmm7, [rsp+0B8h+var_48]
              vmovaps xmm6, [rsp+0B8h+var_38]
            }
            return;
          }
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

void __fastcall CG_Door_SetScriptableAngle(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, double targetAngle)
{
  __int64 v4; 
  char v11; 
  unsigned int LinkObject; 
  const DynEntityDef *Def; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  DynEntityClient *v16; 
  const dvar_t *v17; 
  cg_t *LocalClientGlobals; 
  __int64 warp; 
  __int64 v23; 
  vec3_t outDoorAngles; 

  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  _R14 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  __asm { vmovaps xmm1, xmm6; targetAngle }
  BG_Door_CalcDoorAngles(&_R14->anglesInitial, *(float *)&_XMM1, &outDoorAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+outDoorAngles+4]
    vucomiss xmm0, dword ptr [r14+30h]
    vmovaps xmm6, [rsp+0A8h+var_48]
  }
  if ( !v11 )
  {
    if ( ScriptableCl_IsLinked((const LocalClientNum_t)v4, scriptableIndex) && ScriptableCl_GetLinkType((const LocalClientNum_t)v4, scriptableIndex) == SCRIPTABLE_LINK_DYNENT )
    {
      LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v4, scriptableIndex);
      Def = DynEnt_GetDef(LinkObject, DYNENT_BASIS_MODEL);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( Def->clientId[v4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v14 = Def->clientId[v4];
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(warp) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", warp, 2) )
          __debugbreak();
      }
      v15 = g_dynEntClientEntsAllocCount[v4][0];
      if ( v14 >= v15 )
      {
        LODWORD(v23) = v15;
        LODWORD(warp) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", warp, v23) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[v4][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v16 = &g_dynEntClientLists[v4][0][v14];
      if ( v16 && v16->activeModel )
        ScriptableCL_SetPose((const LocalClientNum_t)v4, scriptableIndex, _R14, &_R14->originInitial, &outDoorAngles, 1);
    }
    v17 = DCONST_DVARINT_bg_doorAngleDebugPrint;
    if ( !DCONST_DVARINT_bg_doorAngleDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorAngleDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.integer == scriptableIndex )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+0A8h+outDoorAngles+4]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      Com_Printf_NoFilter("DOOR-Set Scriptable %0.3f  Time: %d \n", *(double *)&_XMM1, (unsigned int)LocalClientGlobals->time);
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
  __int64 v13; 
  unsigned int v14; 
  __int16 *v16; 
  __int16 v19; 

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
    v19 = 0;
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
                _RBX = &v10->doorState[0].index;
                v13 = 2i64;
                do
                {
                  v14 = *_RBX;
                  if ( *_RBX - 1 <= 0xFFFFFFFD )
                  {
                    if ( v14 == CharacterInfo->doorState[0].index )
                    {
                      LOBYTE(v19) = 1;
                    }
                    else
                    {
                      if ( v14 == CharacterInfo->doorState[1].index )
                        v7 = 1;
                      HIBYTE(v19) = v7;
                    }
                    __asm { vmovss  xmm2, dword ptr [rbx+4]; targetAngle }
                    CG_Door_SetScriptableAngle(localClientNum, v14, *(float *)&_XMM2);
                  }
                  _RBX += 3;
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
    v16 = &v19;
    _RBX = CharacterInfo->doorState;
    do
    {
      if ( _RBX->index - 1 <= 0xFFFFFFFD && (_RBX->owner || !*(_BYTE *)v16) )
      {
        __asm { vmovss  xmm2, dword ptr [rbx+4]; targetAngle }
        CG_Door_SetScriptableAngle(localClientNum, _RBX->index, *(float *)&_XMM2);
      }
      v16 = (__int16 *)((char *)v16 + 1);
      ++_RBX;
      --v8;
    }
    while ( v8 );
  }
  Sys_ProfEndNamedEvent();
}

