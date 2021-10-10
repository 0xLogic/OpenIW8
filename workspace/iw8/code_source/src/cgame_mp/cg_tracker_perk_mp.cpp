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
char CG_TrackerPerk_FindGround(const LocalClientNum_t localClientNum, const int entNum, const bool isInAir, const vec3_t *fxPos, vec3_t *outGroundPos)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  float fraction; 
  float v16; 
  float v17; 
  const dvar_t *v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outUp; 
  WorldUpReferenceFrame v26; 
  trace_t results; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, &LocalClientGlobals->predictedPlayerState, Handler);
  WorldUpReferenceFrame::GetUpVector(&v26, &outUp);
  v11 = DCONST_DVARFLT_perk_trackerPro_groundtraceDist;
  if ( !DCONST_DVARFLT_perk_trackerPro_groundtraceDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_groundtraceDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(v12) = v11->current.integer ^ _xmm;
  start.v[0] = (float)(5.0 * outUp.v[0]) + fxPos->v[0];
  start.v[1] = (float)(5.0 * outUp.v[1]) + fxPos->v[1];
  v13 = (float)(v12 * outUp.v[0]) + fxPos->v[0];
  start.v[2] = (float)(5.0 * outUp.v[2]) + fxPos->v[2];
  v14 = (float)(v12 * outUp.v[1]) + fxPos->v[1];
  end.v[0] = v13;
  end.v[2] = (float)(v12 * outUp.v[2]) + fxPos->v[2];
  end.v[1] = v14;
  if ( isInAir || (PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 4), &results, &start, &end, &bounds_origin, entNum, 0, 66705, 1, NULL, All), results.startsolid) || (fraction = results.fraction, results.fraction >= 1.0) )
  {
    v19 = DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir;
    if ( !DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_fxSpawnDistanceFromAnkleInAir") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    LODWORD(v20) = v19->current.integer ^ _xmm;
    v21 = v20 * outUp.v[1];
    outGroundPos->v[0] = (float)(v20 * outUp.v[0]) + fxPos->v[0];
    v22 = v20 * outUp.v[2];
    outGroundPos->v[1] = v21 + fxPos->v[1];
    outGroundPos->v[2] = v22 + fxPos->v[2];
    return 0;
  }
  else
  {
    v16 = (float)(end.v[1] - start.v[1]) * results.fraction;
    v17 = end.v[2] - start.v[2];
    outGroundPos->v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    outGroundPos->v[1] = v16 + start.v[1];
    outGroundPos->v[2] = (float)(v17 * fraction) + start.v[2];
    return 1;
  }
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
  __int64 v2; 
  __int64 v3; 
  cg_t *v4; 
  int clientNum; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  CgStatic *v8; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  team_t team; 
  const dvar_t *v12; 
  centity_t *v13; 
  float v14; 
  const dvar_t *v15; 
  bool IsCharacterInAir; 
  __int64 v17; 
  int time; 
  bool v19; 
  const char *v20; 
  const dvar_t *v21; 
  double Float_Internal_DebugName; 
  unsigned int v23; 
  unsigned int v24; 
  const DObj *v25; 
  scr_string_t j_ankle_le; 
  const char *v27; 
  bool v28; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v30; 
  bool v31; 
  int v32; 
  bool enabled; 
  unsigned int pm_type; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  FXRegisteredDef *p_fxTrackerProLeftFootShortDurationInAir; 
  FXRegisteredDef *p_fxTrackerProNightLeftFootShortDurationInAir; 
  char *fmt; 
  __int64 fromServer; 
  __int64 duration; 
  bool v42; 
  vec3_t outOrigin; 
  vec3_t outGroundPos; 
  int v45; 
  __int64 v46; 
  vec3_t outPos; 
  vec3_t ci; 
  vec3_t viewOffset; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  vec3_t maxs; 
  vec3_t mins; 
  tmat33_t<vec3_t> axis; 

  v46 = -2i64;
  v2 = entNum;
  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v2 >= cls.maxClients )
  {
    LODWORD(duration) = cls.maxClients;
    LODWORD(fromServer) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( cls.maxClients )", "entNum doesn't index cls.maxClients\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= cg_t::ms_allocatedCount )
  {
    LODWORD(duration) = cg_t::ms_allocatedCount;
    LODWORD(fromServer) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(duration) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", duration) )
      __debugbreak();
  }
  v4 = cg_t::ms_cgArray[v3];
  clientNum = v4->predictedPlayerState.clientNum;
  if ( v4->m_isMLGSpectator )
  {
    m_mlgSpectatorPtr = v4->m_mlgSpectatorPtr;
    if ( !CgMLGSpectator::IsTetheredToPlayer(m_mlgSpectatorPtr, (const LocalClientNum_t)v3) )
      return;
    CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
    clientNum = CgMLGCameraManager::GetFocusedPlayer(CameraManager, (const LocalClientNum_t)v3);
  }
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(duration) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", duration) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&duration = CgStatic::ms_allocatedCount;
    LODWORD(fromServer) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, duration) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v3] )
  {
    LODWORD(duration) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", duration) )
      __debugbreak();
  }
  v8 = CgStatic::ms_cgameStaticsArray[v3];
  CharacterInfo = CgStatic::GetCharacterInfo(v8, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 159, ASSERT_TYPE_ASSERT, "(localPlayerCharInfo)", (const char *)&queryFormat, "localPlayerCharInfo") )
    __debugbreak();
  *(_QWORD *)ci.v = CgStatic::GetCharacterInfo(v8, v2);
  if ( !*(_QWORD *)ci.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v3, v2);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v45 = *(_DWORD *)(*(_QWORD *)ci.v + 12i64);
  team = CharacterInfo->team;
  if ( v4 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( team == TEAM_ZERO || team != v45 )
  {
    v12 = DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers;
    if ( !DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_suppressLinkedPlayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( (!v12->current.enabled || (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF) == 0) && !CG_GameInterface_ShouldSkipTrackerUpdateForEntity((const LocalClientNum_t)v3, v2) )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      viewOffset = v4->refdef.viewOffset;
      if ( v4->m_isMLGSpectator )
      {
        v13 = CG_GetEntity((const LocalClientNum_t)v3, clientNum);
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_tracker_perk_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(localCent)", (const char *)&queryFormat, "localCent") )
          __debugbreak();
        CG_GetPoseOrigin(&v13->pose, &viewOffset);
      }
      v14 = (float)((float)((float)(outOrigin.v[1] - viewOffset.v[1]) * (float)(outOrigin.v[1] - viewOffset.v[1])) + (float)((float)(outOrigin.v[0] - viewOffset.v[0]) * (float)(outOrigin.v[0] - viewOffset.v[0]))) + (float)((float)(outOrigin.v[2] - viewOffset.v[2]) * (float)(outOrigin.v[2] - viewOffset.v[2]));
      v15 = DCONST_DVARFLT_perk_trackerPro_maxDistance;
      if ( !DCONST_DVARFLT_perk_trackerPro_maxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_trackerPro_maxDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v14 > (float)(v15->current.value * v15->current.value) )
        goto LABEL_137;
      IsCharacterInAir = CG_IsCharacterInAir(*(const characterInfo_t **)ci.v, Entity);
      v42 = IsCharacterInAir;
      v17 = v2 + 248 * v3;
      time = v4->time;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks, "perk_trackerPro_useFootStepNotetracks") )
      {
        if ( s_footstepTrackingFXInfoList[v3][v2].lastLeftFootStepNoteTrackTime >= time )
        {
          v19 = 1;
          goto LABEL_68;
        }
        if ( s_footstepTrackingFXInfoList[v3][v2].lastRightFootStepNoteTrackTime >= time )
        {
          v19 = 0;
          goto LABEL_68;
        }
      }
      else if ( !s_footstepTrackingFXInfoList[v3][v2].playedFirstFX || (!IsCharacterInAir ? (v20 = "perk_trackerPro_fxGapDistanceGround", v21 = DCONST_DVARFLT_perk_trackerPro_fxGapDistanceGround) : (v20 = "perk_trackerPro_fxGapDistanceAir", v21 = DCONST_DVARFLT_perk_trackerPro_fxGapDistanceAir), Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v21, v20), (float)((float)((float)((float)(outOrigin.v[0] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[0]) * (float)(outOrigin.v[0] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[0])) + (float)((float)(outOrigin.v[1] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[1]) * (float)(outOrigin.v[1] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[1]))) + (float)((float)(outOrigin.v[2] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[2]) * (float)(outOrigin.v[2] - s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[2]))) >= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName)) )
      {
        v19 = !s_footstepTrackingFXInfoList[v3][v2].lastFootWasLeft;
LABEL_68:
        if ( (unsigned int)v2 > 0x9E4 )
        {
          LODWORD(duration) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", duration) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(duration) = 2;
          LODWORD(fromServer) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", fromServer, duration) )
            __debugbreak();
        }
        v23 = v2 + 2533 * v3;
        if ( v23 >= 0x13CA )
        {
          LODWORD(duration) = v2 + 2533 * v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", duration) )
            __debugbreak();
        }
        v24 = clientObjMap[v23];
        if ( v24 )
        {
          if ( v24 >= (unsigned int)s_objCount )
          {
            LODWORD(duration) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", duration) )
              __debugbreak();
          }
          v25 = (const DObj *)s_objBuf[v24];
        }
        else
        {
          v25 = NULL;
        }
        j_ankle_le = scr_const.j_ankle_le;
        if ( !v19 )
          j_ankle_le = scr_const.j_ankle_ri;
        if ( !CG_DObjGetWorldTagPos(&Entity->pose, v25, j_ankle_le, &outPos) )
        {
          v27 = "j_ankle_ri";
          if ( v19 )
            v27 = "j_ankle_le";
          LODWORD(fmt) = Entity->nextState.eType;
          Com_PrintWarning(16, "Tracker Pro Perk: Could not find tag %s in entity %d with type %d. Using the origin of the entity.\n", v27, (unsigned int)v2, fmt);
          outPos = outOrigin;
        }
        v28 = v42;
        if ( CG_TrackerPerk_FindGround((const LocalClientNum_t)v3, v2, v42, &outPos, &outGroundPos) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_drawInAir, "perk_trackerPro_drawInAir") )
        {
          if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          angles = Entity->pose.angles;
          AnglesToAxis(&angles, &axis);
          PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x38u);
          v30 = (unsigned int)PerkNetworkPriorityIndex;
          if ( PerkNetworkPriorityIndex >= 0 )
          {
            if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
            {
              LODWORD(duration) = 64;
              LODWORD(fromServer) = PerkNetworkPriorityIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, duration) )
                __debugbreak();
            }
            v31 = ((0x80000000 >> (v30 & 0x1F)) & *(_DWORD *)(*(_QWORD *)ci.v + 4 * (v30 >> 5) + 2776)) != 0;
          }
          else
          {
            v31 = 0;
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_perk_trackerPro_debug, "perk_trackerPro_debug") )
          {
            AngleVectors(&angles, &forward, &right, &up);
            v32 = 180;
            if ( v31 )
              v32 = 60;
            outPos = outGroundPos;
            ci.v[0] = (float)(5.0 * forward.v[0]) + outGroundPos.v[0];
            ci.v[1] = (float)(5.0 * forward.v[1]) + outGroundPos.v[1];
            ci.v[2] = (float)(5.0 * forward.v[2]) + outGroundPos.v[2];
            CL_AddDebugLine(&outPos, &ci, &colorRed, 0, v32, 0);
            ci.v[0] = (float)(5.0 * right.v[0]) + outPos.v[0];
            ci.v[1] = (float)(5.0 * right.v[1]) + outPos.v[1];
            ci.v[2] = (float)(5.0 * right.v[2]) + outPos.v[2];
            CL_AddDebugLine(&outPos, &ci, &colorGreen, 0, v32, 0);
            ci.v[0] = (float)(5.0 * up.v[0]) + outPos.v[0];
            ci.v[1] = (float)(5.0 * up.v[1]) + outPos.v[1];
            ci.v[2] = (float)(5.0 * up.v[2]) + outPos.v[2];
            CL_AddDebugLine(&outPos, &ci, &colorBlue, 0, v32, 0);
            mins.v[0] = FLOAT_N2_0;
            mins.v[1] = FLOAT_N2_0;
            mins.v[2] = FLOAT_N2_0;
            maxs.v[0] = FLOAT_2_0;
            maxs.v[1] = FLOAT_2_0;
            maxs.v[2] = FLOAT_2_0;
            CL_AddDebugBox(&axis, &outPos, &mins, &maxs, &colorCyan, 0, v32, 0);
          }
          enabled = 0;
          pm_type = v4[1].predictedPlayerState.pm_type;
          if ( pm_type != -1 )
          {
            Data = CG_Omnvar_GetData((LocalClientNum_t)v3, pm_type);
            Def = BG_Omnvar_GetDef(v4[1].predictedPlayerState.pm_type);
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
            v28 = v42;
          }
          if ( v19 )
          {
            if ( v28 )
            {
              if ( v31 )
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
            else if ( v31 )
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
          else if ( v28 )
          {
            if ( v31 )
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
          else if ( v31 )
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
          FX_PlayOrientedEffectWithMarkEntity((LocalClientNum_t)v3, p_fxTrackerProNightLeftFootShortDurationInAir, v4->time, &outGroundPos, &axis, 1u, 0x7FFu, 0, 0xFEu, MARK_MATERIAL_OVERRIDE_NONE_5);
          s_footstepTrackingFXInfoList[0][v17].lastFootWasLeft = v19;
          s_footstepTrackingFXInfoList[0][v17].playedFirstFX = 1;
          s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[0] = outOrigin.v[0];
          s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[1] = outOrigin.v[1];
          s_footstepTrackingFXInfoList[0][v17].lastFXPlayPos.v[2] = outOrigin.v[2];
        }
        memset(&outGroundPos, 0, sizeof(outGroundPos));
      }
LABEL_137:
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

