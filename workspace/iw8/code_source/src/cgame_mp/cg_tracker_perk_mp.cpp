/*
==============
CG_TrackerPerk_OnInitGame
==============
*/

void CG_TrackerPerk_OnInitGame(void)
{
  ?CG_TrackerPerk_OnInitGame@@YAXXZ();
}

/*
==============
CG_TrackerPerk_UpdateEntity
==============
*/

void __fastcall CG_TrackerPerk_UpdateEntity(const LocalClientNum_t localClientNum, int entNum)
{
  ?CG_TrackerPerk_UpdateEntity@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_TrackerPerk_ProcessNoteTrack
==============
*/

void __fastcall CG_TrackerPerk_ProcessNoteTrack(const LocalClientNum_t localClientNum, int entNum, const XAnimNotify *notify)
{
  ?CG_TrackerPerk_ProcessNoteTrack@@YAXW4LocalClientNum_t@@HPEBUXAnimNotify@@@Z(localClientNum, entNum, notify);
}

/*
==============
CG_TrackerPerk_OnEntityShutdown
==============
*/

void __fastcall CG_TrackerPerk_OnEntityShutdown(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_TrackerPerk_OnEntityShutdown@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_TrackerPerk_FindGround
==============
*/
bool CG_TrackerPerk_FindGround(const LocalClientNum_t localClientNum, const int entNum, const bool isInAir, const vec3_t *fxPos, vec3_t *outGroundPos)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  bool result; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outUp; 
  WorldUpReferenceFrame v49; 
  trace_t results; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RDI = outGroundPos;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v49, &LocalClientGlobals->predictedPlayerState, Handler);
  WorldUpReferenceFrame::GetUpVector(&v49, &outUp);
  _RBX = DCONST_DVARFLT_perk_trackerPro_groundtraceDist;
  if ( !DCONST_DVARFLT_perk_trackerPro_groundtraceDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_groundtraceDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, cs:__real@40a00000
    vmulss  xmm0, xmm2, dword ptr [rbp+90h+outUp]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm2, dword ptr [rbp+90h+outUp+4]
    vmovss  dword ptr [rsp+190h+start], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm2, dword ptr [rbp+90h+outUp+8]
    vmulss  xmm2, xmm9, dword ptr [rbp+90h+outUp]
    vmovss  dword ptr [rsp+190h+start+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm0, xmm2, dword ptr [rsi]
    vmovss  dword ptr [rsp+190h+start+8], xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+90h+outUp+4]
    vaddss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+190h+end], xmm0
    vmulss  xmm0, xmm9, dword ptr [rbp+90h+outUp+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+190h+end+8], xmm1
    vmovss  dword ptr [rsp+190h+end+4], xmm2
  }
  if ( !isInAir )
  {
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 4), &results, &start, &end, &bounds_origin, entNum, 0, 66705, 1, NULL, All);
    if ( !results.startsolid )
    {
      __asm
      {
        vmovss  xmm6, [rbp+90h+results.fraction]
        vcomiss xmm6, cs:__real@3f800000
      }
    }
  }
  _RBX = DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir;
  if ( !DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_fxSpawnDistanceFromAnkleInAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm3, dword ptr [rbp+90h+outUp]
    vaddss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm2, xmm3, dword ptr [rbp+90h+outUp+4]
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmulss  xmm2, xmm3, dword ptr [rbp+90h+outUp+8]
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
  result = 0;
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
CG_TrackerPerk_OnEntityShutdown
==============
*/
void CG_TrackerPerk_OnEntityShutdown(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  __int64 number; 
  __int64 v5; 
  int v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  number = cent->nextState.number;
  if ( (int)number >= 0 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)number < (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
      v5 = number + 248 * v2;
      *(_QWORD *)s_footstepTrackingFXInfoList[0][v5].lastFXPlayPos.v = 0i64;
      *(_QWORD *)&s_footstepTrackingFXInfoList[0][v5].lastFXPlayPos.z = 0i64;
      *(_QWORD *)&s_footstepTrackingFXInfoList[0][v5].lastRightFootStepNoteTrackTime = 0i64;
    }
  }
}

/*
==============
CG_TrackerPerk_OnInitGame
==============
*/
void CG_TrackerPerk_OnInitGame(void)
{
  memset_0(s_footstepTrackingFXInfoList, 0, sizeof(s_footstepTrackingFXInfoList));
}

/*
==============
CG_TrackerPerk_ProcessNoteTrack
==============
*/
void CG_TrackerPerk_ProcessNoteTrack(const LocalClientNum_t localClientNum, int entNum, const XAnimNotify *notify)
{
  __int64 v3; 
  __int64 v5; 
  const dvar_t *v6; 
  const char *v7; 
  bool v8; 
  bool v9; 
  int time; 

  v3 = localClientNum;
  v5 = entNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 49, ASSERT_TYPE_ASSERT, "(notify)", (const char *)&queryFormat, "notify") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks;
  if ( !DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_useFootStepNotetracks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && (int)v5 >= 0 && (int)v5 < ComCharacterLimits::GetCharacterMaxCount() )
  {
    v7 = SL_ConvertToString(notify->noteName);
    v8 = !I_stricmp(v7, "footstep_right_large") || !I_stricmp(v7, "footstep_right_small");
    v9 = !I_stricmp(v7, "footstep_left_large") || !I_stricmp(v7, "footstep_left_small");
    if ( v8 || v9 )
    {
      time = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
      if ( v9 )
        s_footstepTrackingFXInfoList[v3][v5].lastLeftFootStepNoteTrackTime = time;
      if ( v8 )
        s_footstepTrackingFXInfoList[v3][v5].lastRightFootStepNoteTrackTime = time;
    }
  }
}

/*
==============
CG_TrackerPerk_UpdateEntity
==============
*/
void CG_TrackerPerk_UpdateEntity(const LocalClientNum_t localClientNum, int entNum)
{
  __int64 v4; 
  __int64 v5; 
  int clientNum; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  CgStatic *v10; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  const dvar_t *v14; 
  centity_t *Entity; 
  char v31; 
  char v32; 
  bool IsCharacterInAir; 
  int time; 
  bool v36; 
  const char *v37; 
  const dvar_t *v38; 
  unsigned int v51; 
  unsigned int v52; 
  const DObj *v53; 
  scr_string_t j_ankle_le; 
  const char *v55; 
  bool v57; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v62; 
  bool v63; 
  int v64; 
  bool enabled; 
  unsigned int pm_type; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  FXRegisteredDef *p_fxTrackerProLeftFootShortDurationInAir; 
  FXRegisteredDef *p_fxTrackerProNightLeftFootShortDurationInAir; 
  char *fmt; 
  __int64 fromServer; 
  __int64 duration; 
  bool v101; 
  vec3_t outOrigin; 
  vec3_t outGroundPos; 
  int v104; 
  __int64 v105; 
  vec3_t outPos; 
  vec3_t ci; 
  vec3_t v108; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  vec3_t maxs; 
  vec3_t mins; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  v105 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v4 = entNum;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v4 >= cls.maxClients )
  {
    LODWORD(duration) = cls.maxClients;
    LODWORD(fromServer) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( cls.maxClients )", "entNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= cg_t::ms_allocatedCount )
  {
    LODWORD(duration) = cg_t::ms_allocatedCount;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(duration) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", duration) )
      __debugbreak();
  }
  _R15 = cg_t::ms_cgArray[v5];
  clientNum = _R15->predictedPlayerState.clientNum;
  if ( _R15->m_isMLGSpectator )
  {
    m_mlgSpectatorPtr = _R15->m_mlgSpectatorPtr;
    if ( !CgMLGSpectator::IsTetheredToPlayer(m_mlgSpectatorPtr, (const LocalClientNum_t)v5) )
      goto LABEL_138;
    CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
    clientNum = CgMLGCameraManager::GetFocusedPlayer(CameraManager, (const LocalClientNum_t)v5);
  }
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(duration) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", duration) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&duration = CgStatic::ms_allocatedCount;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v5] )
  {
    LODWORD(duration) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", duration) )
      __debugbreak();
  }
  v10 = CgStatic::ms_cgameStaticsArray[v5];
  CharacterInfo = CgStatic::GetCharacterInfo(v10, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 159, ASSERT_TYPE_ASSERT, "(localPlayerCharInfo)", (const char *)&queryFormat, "localPlayerCharInfo") )
    __debugbreak();
  *(_QWORD *)ci.v = CgStatic::GetCharacterInfo(v10, v4);
  if ( !*(_QWORD *)ci.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  _RDI = CG_GetEntity((const LocalClientNum_t)v5, v4);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v104 = *(_DWORD *)(*(_QWORD *)ci.v + 12i64);
  team = CharacterInfo->team;
  if ( _R15 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( _RDI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( team == TEAM_ZERO || team != v104 )
  {
    v14 = DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers;
    if ( !DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_suppressLinkedPlayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( (!v14->current.enabled || (*(_DWORD *)&_RDI->nextState.clientLinkInfo & 0x7FF) == 0) && !CG_GameInterface_ShouldSkipTrackerUpdateForEntity((const LocalClientNum_t)v5, v4) )
    {
      CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
      __asm
      {
        vmovsd  xmm0, qword ptr [r15+699Ch]
        vmovsd  qword ptr [rbp+90h+var_E8], xmm0
      }
      v108.v[2] = _R15->refdef.viewOffset.v[2];
      if ( _R15->m_isMLGSpectator )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v5, clientNum);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(localCent)", (const char *)&queryFormat, "localCent") )
          __debugbreak();
        CG_GetPoseOrigin(&Entity->pose, &v108);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
        vsubss  xmm3, xmm0, dword ptr [rbp+90h+var_E8]
        vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+90h+var_E8+4]
        vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+90h+var_E8+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm6, xmm3, xmm0
      }
      _RSI = DCONST_DVARFLT_perk_trackerPro_maxDistance;
      if ( !DCONST_DVARFLT_perk_trackerPro_maxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_maxDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm6, xmm1
      }
      if ( !(v31 | v32) )
        goto LABEL_137;
      IsCharacterInAir = CG_IsCharacterInAir(*(const characterInfo_t **)ci.v, _RDI);
      v101 = IsCharacterInAir;
      _RSI = v4 + 248 * v5;
      time = _R15->time;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks, "perk_trackerPro_useFootStepNotetracks") )
      {
        if ( s_footstepTrackingFXInfoList[v5][v4].lastLeftFootStepNoteTrackTime >= time )
        {
          v36 = 1;
          goto LABEL_68;
        }
        if ( s_footstepTrackingFXInfoList[v5][v4].lastRightFootStepNoteTrackTime >= time )
        {
          v36 = 0;
          goto LABEL_68;
        }
      }
      else
      {
        if ( !s_footstepTrackingFXInfoList[v5][v4].playedFirstFX )
          goto LABEL_67;
        if ( IsCharacterInAir )
        {
          v37 = "perk_trackerPro_fxGapDistanceAir";
          v38 = DCONST_DVARFLT_perk_trackerPro_fxGapDistanceAir;
        }
        else
        {
          v37 = "perk_trackerPro_fxGapDistanceGround";
          v38 = DCONST_DVARFLT_perk_trackerPro_fxGapDistanceGround;
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v38, v37);
        __asm
        {
          vmulss  xmm5, xmm0, xmm0
          vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
          vsubss  xmm2, xmm0, dword ptr rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos[r12+rsi*8]; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
          vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4]
          vsubss  xmm3, xmm1, dword ptr (rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos+4)[r12+rsi*8]; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
          vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
          vsubss  xmm4, xmm0, dword ptr (rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos+8)[r12+rsi*8]; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm5
        }
        if ( !v31 )
        {
LABEL_67:
          v36 = !s_footstepTrackingFXInfoList[v5][v4].lastFootWasLeft;
LABEL_68:
          if ( (unsigned int)v4 > 0x9E4 )
          {
            LODWORD(duration) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", duration) )
              __debugbreak();
          }
          if ( (unsigned int)v5 >= 2 )
          {
            LODWORD(duration) = 2;
            LODWORD(fromServer) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", fromServer, duration) )
              __debugbreak();
          }
          v51 = v4 + 2533 * v5;
          if ( v51 >= 0x13CA )
          {
            LODWORD(duration) = v4 + 2533 * v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", duration) )
              __debugbreak();
          }
          v52 = clientObjMap[v51];
          if ( v52 )
          {
            if ( v52 >= (unsigned int)s_objCount )
            {
              LODWORD(duration) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", duration) )
                __debugbreak();
            }
            v53 = (const DObj *)s_objBuf[v52];
          }
          else
          {
            v53 = NULL;
          }
          j_ankle_le = scr_const.j_ankle_le;
          if ( !v36 )
            j_ankle_le = scr_const.j_ankle_ri;
          if ( !CG_DObjGetWorldTagPos(&_RDI->pose, v53, j_ankle_le, &outPos) )
          {
            v55 = "j_ankle_ri";
            if ( v36 )
              v55 = "j_ankle_le";
            LODWORD(fmt) = _RDI->nextState.eType;
            Com_PrintWarning(16, "Tracker Pro Perk: Could not find tag %s in entity %d with type %d. Using the origin of the entity.\n", v55, (unsigned int)v4, fmt);
            __asm
            {
              vmovsd  xmm0, qword ptr [rsp+190h+outOrigin]
              vmovsd  qword ptr [rbp+90h+outPos], xmm0
            }
            outPos.v[2] = outOrigin.v[2];
          }
          v57 = v101;
          if ( CG_TrackerPerk_FindGround((const LocalClientNum_t)v5, v4, v101, &outPos, &outGroundPos) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_drawInAir, "perk_trackerPro_drawInAir") )
          {
            if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+48h]
              vmovss  dword ptr [rbp+90h+angles], xmm0
              vmovss  xmm1, dword ptr [rdi+4Ch]
              vmovss  dword ptr [rbp+90h+angles+4], xmm1
              vmovss  xmm0, dword ptr [rdi+50h]
              vmovss  dword ptr [rbp+90h+angles+8], xmm0
            }
            AnglesToAxis(&angles, &axis);
            PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x38u);
            v62 = (unsigned int)PerkNetworkPriorityIndex;
            if ( PerkNetworkPriorityIndex >= 0 )
            {
              if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
              {
                LODWORD(duration) = 64;
                LODWORD(fromServer) = PerkNetworkPriorityIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, duration) )
                  __debugbreak();
              }
              v63 = ((0x80000000 >> (v62 & 0x1F)) & *(_DWORD *)(*(_QWORD *)ci.v + 4 * (v62 >> 5) + 2776)) != 0;
            }
            else
            {
              v63 = 0;
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_debug, "perk_trackerPro_debug") )
            {
              AngleVectors(&angles, &forward, &right, &up);
              v64 = 180;
              if ( v63 )
                v64 = 60;
              __asm
              {
                vmovsd  xmm0, qword ptr [rsp+190h+outGroundPos]
                vmovsd  qword ptr [rbp+90h+outPos], xmm0
              }
              outPos.v[2] = outGroundPos.v[2];
              __asm
              {
                vmovss  xmm6, cs:__real@40a00000
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+forward]
                vaddss  xmm2, xmm1, dword ptr [rsp+190h+outGroundPos]
                vmovss  dword ptr [rbp+90h+ci], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+forward+4]
                vaddss  xmm2, xmm1, dword ptr [rsp+190h+outGroundPos+4]
                vmovss  dword ptr [rbp+90h+ci+4], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+forward+8]
                vaddss  xmm2, xmm1, dword ptr [rsp+190h+outGroundPos+8]
                vmovss  [rbp+90h+var_F0], xmm2
              }
              CL_AddDebugLine(&outPos, &ci, &colorRed, 0, v64, 0);
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+right]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos]
                vmovss  dword ptr [rbp+90h+ci], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+right+4]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos+4]
                vmovss  dword ptr [rbp+90h+ci+4], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+right+8]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos+8]
                vmovss  [rbp+90h+var_F0], xmm2
              }
              CL_AddDebugLine(&outPos, &ci, &colorGreen, 0, v64, 0);
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+up]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos]
                vmovss  dword ptr [rbp+90h+ci], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+up+4]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos+4]
                vmovss  dword ptr [rbp+90h+ci+4], xmm2
                vmulss  xmm1, xmm6, dword ptr [rbp+90h+up+8]
                vaddss  xmm2, xmm1, dword ptr [rbp+90h+outPos+8]
                vmovss  [rbp+90h+var_F0], xmm2
              }
              CL_AddDebugLine(&outPos, &ci, &colorBlue, 0, v64, 0);
              __asm
              {
                vmovss  xmm0, cs:__real@c0000000
                vmovss  dword ptr [rbp+90h+mins], xmm0
                vmovss  dword ptr [rbp+90h+mins+4], xmm0
                vmovss  dword ptr [rbp+90h+mins+8], xmm0
                vmovss  xmm1, cs:__real@40000000
                vmovss  dword ptr [rbp+90h+maxs], xmm1
                vmovss  dword ptr [rbp+90h+maxs+4], xmm1
                vmovss  dword ptr [rbp+90h+maxs+8], xmm1
              }
              CL_AddDebugBox(&axis, &outPos, &mins, &maxs, &colorCyan, 0, v64, 0);
            }
            enabled = 0;
            pm_type = _R15[1].predictedPlayerState.pm_type;
            if ( pm_type != -1 )
            {
              Data = CG_Omnvar_GetData((LocalClientNum_t)v5, pm_type);
              Def = BG_Omnvar_GetDef(_R15[1].predictedPlayerState.pm_type);
              if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
                __debugbreak();
              if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
                __debugbreak();
              if ( Def->type == OMNVAR_TYPE_BOOL )
                goto LABEL_115;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
                __debugbreak();
              if ( Def->type )
                enabled = 0;
              else
LABEL_115:
                enabled = Data->current.enabled;
              v57 = v101;
            }
            if ( v36 )
            {
              if ( v57 )
              {
                if ( v63 )
                {
                  p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProLeftFootShortDurationInAir;
                  p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightLeftFootShortDurationInAir;
                }
                else
                {
                  p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightLeftFootNormalDurationInAir;
                  p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProLeftFootNormalDurationInAir;
                }
              }
              else if ( v63 )
              {
                p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProLeftFootShortDurationOnGround;
                p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightLeftFootShortDurationOnGround;
              }
              else
              {
                p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightLeftFootNormalDurationOnGround;
                p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProLeftFootNormalDurationOnGround;
              }
            }
            else if ( v57 )
            {
              if ( v63 )
              {
                p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProRightFootShortDurationInAir;
                p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightRightFootShortDurationInAir;
              }
              else
              {
                p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightRightFootNormalDurationInAir;
                p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProRightFootNormalDurationInAir;
              }
            }
            else if ( v63 )
            {
              p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProRightFootShortDurationOnGround;
              p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightRightFootShortDurationOnGround;
            }
            else
            {
              p_fxTrackerProNightLeftFootShortDurationInAir = &cgMedia.fxTrackerProNightRightFootNormalDurationOnGround;
              p_fxTrackerProLeftFootShortDurationInAir = &cgMedia.fxTrackerProRightFootNormalDurationOnGround;
            }
            if ( !enabled )
              p_fxTrackerProNightLeftFootShortDurationInAir = p_fxTrackerProLeftFootShortDurationInAir;
            FX_PlayOrientedEffectWithMarkEntity((LocalClientNum_t)v5, p_fxTrackerProNightLeftFootShortDurationInAir, _R15->time, &outGroundPos, &axis, 1u, 0x7FFu, 0, 0xFEu, MARK_MATERIAL_OVERRIDE_NONE_5);
            _RAX = 0x140000000ui64;
            s_footstepTrackingFXInfoList[0][_RSI].lastFootWasLeft = v36;
            s_footstepTrackingFXInfoList[0][_RSI].playedFirstFX = 1;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
              vmovss  dword ptr rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos[rax+rsi*8], xmm0; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
              vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4]
              vmovss  dword ptr (rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos+4)[rax+rsi*8], xmm1; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
              vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
              vmovss  dword ptr (rva ?s_footstepTrackingFXInfoList@@3PAY0PI@UFootStepTrackingFXInfo@@A.lastFXPlayPos+8)[rax+rsi*8], xmm0; FootStepTrackingFXInfo (near * s_footstepTrackingFXInfoList)[248]
            }
          }
          memset(&outGroundPos, 0, sizeof(outGroundPos));
        }
      }
LABEL_137:
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
LABEL_138:
  __asm { vmovaps xmm6, [rsp+190h+var_40] }
}

