/*
==============
Turret_PlaceSentry_Internal
==============
*/

int __fastcall Turret_PlaceSentry_Internal(const turret_handler handler, const LocalClientNum_t clientNum, const int moverEntNum, const vec3_t *moverOrigin, const vec3_t *viewOrigin, const float viewHeightStand, const vec3_t *viewAngles, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  return ?Turret_PlaceSentry_Internal@@YAHW4turret_handler@@W4LocalClientNum_t@@HAEBTvec3_t@@2M2AEAT3@3PEAHM@Z(handler, clientNum, moverEntNum, moverOrigin, viewOrigin, viewHeightStand, viewAngles, outOrigin, outAngles, placeEnt, radius);
}

/*
==============
Turret_PlaceSentry_Server
==============
*/

int __fastcall Turret_PlaceSentry_Server(const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  return ?Turret_PlaceSentry_Server@@YAHPEBUplayerState_s@@AEATvec3_t@@1PEAHM@Z(ps, outOrigin, outAngles, placeEnt, radius);
}

/*
==============
Turret_PlaceSentry_Client
==============
*/

void __fastcall Turret_PlaceSentry_Client(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *outOrigin, vec3_t *outAngles, float radius)
{
  ?Turret_PlaceSentry_Client@@YAXW4LocalClientNum_t@@PEBUentityState_t@@AEATvec3_t@@2M@Z(localClientNum, es, outOrigin, outAngles, radius);
}

/*
==============
GetTurretWorldId
==============
*/

Physics_WorldId __fastcall GetTurretWorldId(const turret_handler handler, const LocalClientNum_t clientNum)
{
  return ?GetTurretWorldId@@YA?AW4Physics_WorldId@@W4turret_handler@@W4LocalClientNum_t@@@Z(handler, clientNum);
}

/*
==============
GetTurretWorldId
==============
*/
__int64 GetTurretWorldId(const turret_handler handler, const LocalClientNum_t clientNum)
{
  if ( handler == TURRET_HANDLER_CLIENT )
    return (unsigned int)(3 * clientNum + 2);
  if ( handler == TURRET_HANDLER_SERVER )
    return 0i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
Turret_PlaceSentry_Client
==============
*/
void Turret_PlaceSentry_Client(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *outOrigin, vec3_t *outAngles, float radius)
{
  __int64 v6; 
  unsigned int m_mapEntryId; 
  cg_t *LocalClientGlobals; 
  const SuitDef *SuitDef; 
  int v10; 
  CgStatic *v11; 
  centity_t *Entity; 
  entityType_s eType; 
  __int64 number; 
  cg_t *v15; 
  const characterInfo_t *CharacterInfo; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v21; 
  float ProneViewHeight; 
  __int64 viewHeightStand; 
  vec3_t *viewAngles; 
  vec3_t viewOrigin; 
  vec3_t moverOrigin; 
  vec3_t *v36; 
  vec3_t *v37; 
  __int64 v38; 
  vec3_t playerAngles; 

  v38 = -2i64;
  v36 = outAngles;
  v37 = outOrigin;
  *(_QWORD *)playerAngles.v = es;
  v6 = localClientNum;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 380, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  m_mapEntryId = es->staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId != 2047 )
  {
    if ( (unsigned int)v6 >= LODWORD(cl_maxLocalClients) )
    {
      LODWORD(viewHeightStand) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", viewHeightStand, cl_maxLocalClients) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 389, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( m_mapEntryId >= ComCharacterLimits::ms_gameData.m_clientCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(viewAngles) = ComCharacterLimits::ms_gameData.m_clientCount;
      LODWORD(viewHeightStand) = m_mapEntryId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 392, ASSERT_TYPE_ASSERT, "(unsigned)( carrierEntNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "carrierEntNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
        __debugbreak();
    }
    SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 395, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( LocalClientGlobals->renderingThirdPerson )
      goto LABEL_29;
    if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v6], &LocalClientGlobals->predictedPlayerState) )
LABEL_29:
      v10 = 1;
    else
      v10 = 0;
    if ( m_mapEntryId == LocalClientGlobals->predictedPlayerState.clientNum && !v10 )
    {
      *(_QWORD *)viewOrigin.v = *(_QWORD *)LocalClientGlobals->predictedPlayerState.origin.v;
      viewOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2] + LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
      playerAngles = LocalClientGlobals->predictedPlayerState.viewangles;
      moverOrigin = LocalClientGlobals->predictedPlayerState.origin;
LABEL_74:
      CG_EntityWorkers_AcquireReadLock_Physics(BASE);
      Turret_PlaceSentry_Internal(TURRET_HANDLER_CLIENT, (const LocalClientNum_t)v6, m_mapEntryId, &moverOrigin, &viewOrigin, (float)SuitDef->viewheight_stand, &playerAngles, v37, v36, NULL, radius);
      CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
      goto LABEL_78;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING|0x80) )
    {
      if ( !(_BYTE)CgStatic::ms_allocatedType )
      {
        LODWORD(viewAngles) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", viewAngles) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&viewAngles = CgStatic::ms_allocatedCount;
        LODWORD(viewHeightStand) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v6] )
      {
        LODWORD(viewAngles) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", viewAngles) )
          __debugbreak();
      }
      v11 = CgStatic::ms_cgameStaticsArray[v6];
      Entity = CG_GetEntity((const LocalClientNum_t)v6, m_mapEntryId);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 416, ASSERT_TYPE_SANITY, "( carrierEnt )", (const char *)&queryFormat, "carrierEnt") )
        __debugbreak();
      if ( (Entity->flags & 1) == 0 )
        goto LABEL_75;
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = Entity->nextState.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
        goto LABEL_75;
      number = Entity->nextState.number;
      v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v11->m_localClientNum);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v15->IsMP(v15) )
      {
        if ( (unsigned int)number >= v15[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(viewAngles) = v15[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(viewHeightStand) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v15[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v15, number);
      }
      if ( !CharacterInfo || !CharacterInfo->infoValid )
      {
LABEL_75:
        Com_Printf(17, "Sentry [%d] is being carried but the client info [%d] is invalid! If there was a client disconnect then script should ensure that this doesn't happen - otherwise this is OK for one frame.\n", (unsigned int)(__int16)**(_WORD **)playerAngles.v, m_mapEntryId);
        goto LABEL_78;
      }
      playerAngles = CharacterInfo->playerAngles;
      if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
      FunctionPointer_origin(&Entity->pose.origin.origin.origin, &moverOrigin);
      if ( Entity->pose.isPosePrecise )
      {
        _XMM0 = LODWORD(moverOrigin.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v21 = *(double *)&_XMM0 * 0.000244140625;
        _XMM0 = v21;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        moverOrigin.v[0] = *(float *)&_XMM1;
        _XMM2 = LODWORD(moverOrigin.v[1]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v21 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v21;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        moverOrigin.v[1] = *(float *)&_XMM1;
        _XMM2 = LODWORD(moverOrigin.v[2]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v21 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v21;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        moverOrigin.v[2] = *(float *)&_XMM1;
      }
      viewOrigin = moverOrigin;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        ProneViewHeight = (float)BG_Suit_GetProneViewHeight(SuitDef);
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
      {
        ProneViewHeight = (float)SuitDef->viewheight_crouch;
      }
      else
      {
        ProneViewHeight = (float)SuitDef->viewheight_stand;
      }
      viewOrigin.v[2] = ProneViewHeight + viewOrigin.v[2];
      goto LABEL_74;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 450, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Shouldn't get here without running online CoOp at this point!") )
      __debugbreak();
  }
LABEL_78:
  memset(&viewOrigin, 0, sizeof(viewOrigin));
  memset(&moverOrigin, 0, sizeof(moverOrigin));
}

/*
==============
Turret_PlaceSentry_Internal
==============
*/
__int64 Turret_PlaceSentry_Internal(const turret_handler handler, const LocalClientNum_t clientNum, const int moverEntNum, const vec3_t *moverOrigin, const vec3_t *viewOrigin, const float viewHeightStand, const vec3_t *viewAngles, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  const vec3_t *v12; 
  float value; 
  const dvar_t *v15; 
  __int32 v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  bool v27; 
  float fraction; 
  float v29; 
  float v30; 
  double Float_Internal_DebugName; 
  __int64 v32; 
  entityType_s eType; 
  float v35; 
  float v36; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  vec3_t v41; 
  vec3_t origin; 
  vec3_t forward; 
  vec3_t end; 
  Bounds bounds; 
  tmat33_t<vec3_t> v1; 
  vec3_t angles; 
  trace_t results; 
  trace_t trace; 

  v12 = viewAngles;
  if ( (unsigned int)moverEntNum >= level.maxclients )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( moverEntNum ) < (unsigned)( level.maxclients )", "moverEntNum doesn't index level.maxclients\n\t%i not in [0, %i)", moverEntNum, level.maxclients) )
      __debugbreak();
    v12 = viewAngles;
  }
  if ( placeEnt )
    *placeEnt = 2047;
  value = radius;
  *(_QWORD *)outAngles->v = 0i64;
  *(_QWORD *)&outAngles->y = LODWORD(v12->v[1]);
  if ( radius < 0.0 )
  {
    v15 = DVARFLT_sentry_placement_trace_radius;
    if ( !DVARFLT_sentry_placement_trace_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
  }
  if ( handler )
  {
    if ( handler == TURRET_HANDLER_SERVER )
    {
      v16 = 0;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
        __debugbreak();
      v16 = -1;
    }
  }
  else
  {
    v16 = 3 * clientNum + 2;
  }
  v17 = DVARFLT_sentry_placement_trace_dist;
  if ( !DVARFLT_sentry_placement_trace_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value;
  v19 = DVARFLT_sentry_placement_trace_radius_canon_safety;
  if ( !DVARFLT_sentry_placement_trace_radius_canon_safety && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_radius_canon_safety") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v18 + v19->current.value;
  v21 = DVARFLT_sentry_placement_trace_pitch;
  if ( !DVARFLT_sentry_placement_trace_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  LODWORD(angles.v[0]) = v21->current.integer;
  angles.v[1] = viewAngles->v[1];
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  v22 = DVARBOOL_sentry_placement_debug;
  v23 = (float)(v20 * forward.v[0]) + moverOrigin->v[0];
  v24 = (float)(v20 * forward.v[1]) + moverOrigin->v[1];
  v25 = (float)(viewHeightStand + moverOrigin->v[2]) + (float)(v20 * forward.v[2]);
  v41.v[2] = v25 - viewHeightStand;
  *(_OWORD *)bounds.midPoint.v = 0i64;
  origin.v[0] = v23;
  origin.v[1] = v24;
  origin.v[2] = v25;
  v41.v[0] = v23;
  v41.v[1] = v24;
  end.v[0] = (float)(value * forward.v[0]) + v23;
  end.v[1] = (float)(value * forward.v[1]) + v24;
  end.v[2] = v25;
  bounds.halfSize.v[1] = 0.0;
  bounds.halfSize.v[2] = 0.0;
  if ( !DVARBOOL_sentry_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
    G_DebugLine(viewOrigin, &end, &colorBlue, 0);
  PhysicsQuery_LegacyTrace((Physics_WorldId)v16, &results, viewOrigin, &end, &bounds, moverEntNum, 1, 33636369, 0, NULL, All);
  if ( *(_WORD *)&results.allsolid || Trace_GetEntityHitId(&results) != 2047 )
  {
    v35 = origin.v[0];
    v36 = origin.v[1];
    outOrigin->v[2] = moverOrigin->v[2];
    outOrigin->v[0] = v35;
    outOrigin->v[1] = v36;
    return 0i64;
  }
  v26 = DVARBOOL_sentry_placement_debug;
  bounds.halfSize.v[0] = value;
  bounds.halfSize.v[1] = value;
  bounds.halfSize.v[2] = value;
  if ( !DVARBOOL_sentry_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    G_DebugLine(&origin, &v41, &colorBlue, 0);
    G_DebugBox(&origin, &bounds, viewAngles->v[1], &colorYellow, 0, 0);
    G_DebugBox(&v41, &bounds, viewAngles->v[1], &colorGreen, 0, 0);
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)v16, &results, &origin, &v41, &bounds, moverEntNum, 1, 33636369, 0, NULL, All);
  v27 = !results.startsolid;
  fraction = results.fraction;
  v29 = v41.v[1];
  outOrigin->v[0] = (float)((float)(v41.v[0] - origin.v[0]) * results.fraction) + origin.v[0];
  v30 = (float)(v41.v[2] - origin.v[2]) * fraction;
  outOrigin->v[1] = (float)((float)(v29 - origin.v[1]) * fraction) + origin.v[1];
  outOrigin->v[2] = v30 + origin.v[2];
  if ( !v27 || results.allsolid || (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_sentry_placement_trace_min_normal, "sentry_placement_trace_min_normal"), results.normal.v[2] < *(float *)&Float_Internal_DebugName) )
  {
    outOrigin->v[2] = moverOrigin->v[2];
    return 0i64;
  }
  outOrigin->v[2] = outOrigin->v[2] - value;
  LOWORD(v32) = Trace_GetEntityHitId(&results);
  if ( (unsigned __int16)v32 >= 0x800u )
  {
    LODWORD(skipChildren) = 2048;
    LODWORD(skipEntity) = (unsigned __int16)v32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 306, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ( 2048 ) )", "hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
      __debugbreak();
  }
  if ( (_WORD)v32 != 2046 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING|0x80) )
    {
      if ( (_WORD)v32 == 2047 )
        return 0i64;
      v32 = (unsigned __int16)v32;
      if ( (unsigned int)handler >= TURRET_HANDLER_COUNT )
      {
        LODWORD(skipChildren) = 2;
        LODWORD(skipEntity) = handler;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( handler ) < (unsigned)( TURRET_HANDLER_COUNT )", "handler doesn't index TURRET_HANDLER_COUNT\n\t%i not in [0, %i)", skipEntity, skipChildren) )
          __debugbreak();
      }
      if ( (unsigned int)v32 >= 0x800 )
      {
        LODWORD(skipChildren) = 2048;
        LODWORD(skipEntity) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
          __debugbreak();
      }
      if ( handler == TURRET_HANDLER_SERVER )
      {
        eType = g_entities[v32].s.eType;
      }
      else
      {
        if ( handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 93, ASSERT_TYPE_ASSERT, "(handler == TURRET_HANDLER_CLIENT)", (const char *)&queryFormat, "handler == TURRET_HANDLER_CLIENT") )
          __debugbreak();
        if ( clientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 94, ASSERT_TYPE_ASSERT, "(clientNum != -1)", (const char *)&queryFormat, "clientNum != CLIENTNUM_NONE") )
          __debugbreak();
        if ( (unsigned int)clientNum >= LODWORD(cl_maxLocalClients) )
        {
          *(float *)&skipChildren = cl_maxLocalClients;
          LODWORD(skipEntity) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (cl_maxLocalClients) )", "clientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
        eType = CG_GetEntity(clientNum, v32)->nextState.eType;
      }
      if ( eType != ET_SCRIPTMOVER )
        return 0i64;
      goto LABEL_75;
    }
    if ( !placeEnt )
      return 0i64;
    LODWORD(v32) = (unsigned __int16)v32;
    if ( !BGMovingPlatforms::IsMovingPlatform((unsigned __int16)v32) )
      return 0i64;
    goto LABEL_74;
  }
  if ( placeEnt )
  {
    v41.v[2] = v41.v[2] + -20.0;
    PhysicsQuery_LegacyTrace((Physics_WorldId)v16, &trace, &origin, &v41, &bounds_origin, moverEntNum, 1, 33636369, 0, NULL, All);
    LODWORD(v32) = Trace_GetEntityHitId(&trace);
    if ( BGMovingPlatforms::IsMovingPlatform(v32) )
LABEL_74:
      *placeEnt = v32;
  }
LABEL_75:
  if ( !Trace_GetGlassHitId(&results) )
  {
    v1.m[0] = forward;
    v1.m[2] = results.normal;
    Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
    Vec3Cross(&v1.m[1], &v1.m[2], v1.m);
    AxisToAngles(&v1, outAngles);
    if ( Turret_PlaceSentry_UpdateFooting(handler, clientNum, moverEntNum, &results, outOrigin, &v1) )
    {
      AxisToAngles(&v1, outAngles);
      return 1i64;
    }
  }
  return 0i64;
}

/*
==============
Turret_PlaceSentry_Server
==============
*/
int Turret_PlaceSentry_Server(const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  float v9; 
  int suitIndex; 
  const SuitDef *SuitDef; 
  vec3_t viewOrigin; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 474, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = ps->origin.v[1];
  suitIndex = ps->suitIndex;
  viewOrigin.v[0] = ps->origin.v[0];
  viewOrigin.v[2] = ps->viewHeightCurrent + ps->origin.v[2];
  viewOrigin.v[1] = v9;
  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 481, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  return Turret_PlaceSentry_Internal(TURRET_HANDLER_SERVER, LOCAL_CLIENT_INVALID, ps->clientNum, &ps->origin, &viewOrigin, (float)SuitDef->viewheight_stand, &ps->viewangles, outOrigin, outAngles, placeEnt, radius);
}

/*
==============
Turret_PlaceSentry_UpdateFooting
==============
*/
__int64 Turret_PlaceSentry_UpdateFooting(const turret_handler handler, LocalClientNum_t localClientNum, const int moverEntNum, trace_t *trace, vec3_t *outOrigin, tmat33_t<vec3_t> *outAxis)
{
  vec3_t *v9; 
  const dvar_t *v10; 
  float value; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  unsigned int v30; 
  unsigned __int64 v31; 
  float *v32; 
  const dvar_t *v33; 
  float v34; 
  float v35; 
  const vec3_t *v36; 
  __int64 v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  const vec4_t *v41; 
  const dvar_t *v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v61; 
  __int128 v64; 
  __m128 v67; 
  vec3_t *v68; 
  vec3_t *v69; 
  __int128 v70; 
  float v75; 
  unsigned int v76; 
  float v77; 
  Physics_WorldId worldId; 
  unsigned int v79; 
  int skipEntity[2]; 
  vec3_t *v0; 
  vec3_t *v1; 
  vec3_t cross; 
  vec3_t end; 
  __m128 v85; 
  float v86; 
  float v87; 
  __m128 v88; 
  float v89; 
  float v90; 
  __m128 v91; 
  float v92; 
  float v93; 

  *(_QWORD *)cross.v = outOrigin;
  v1 = (vec3_t *)outAxis;
  skipEntity[0] = moverEntNum;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 123, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( ((LODWORD(outOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 124, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outOrigin )[0] ) && !IS_NAN( ( outOrigin )[1] ) && !IS_NAN( ( outOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outOrigin )[0] ) && !IS_NAN( ( outOrigin )[1] ) && !IS_NAN( ( outOrigin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outAxis->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 125, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[0] )[0] ) && !IS_NAN( ( outAxis[0] )[1] ) && !IS_NAN( ( outAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[0] )[0] ) && !IS_NAN( ( outAxis[0] )[1] ) && !IS_NAN( ( outAxis[0] )[2] )") )
    __debugbreak();
  v75 = outAxis->m[1].v[0];
  v0 = &outAxis->m[1];
  if ( ((LODWORD(v75) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 126, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[1] )[0] ) && !IS_NAN( ( outAxis[1] )[1] ) && !IS_NAN( ( outAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[1] )[0] ) && !IS_NAN( ( outAxis[1] )[1] ) && !IS_NAN( ( outAxis[1] )[2] )") )
    __debugbreak();
  v9 = &outAxis->m[2];
  if ( ((LODWORD(outAxis->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAxis->m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 127, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[2] )[0] ) && !IS_NAN( ( outAxis[2] )[1] ) && !IS_NAN( ( outAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[2] )[0] ) && !IS_NAN( ( outAxis[2] )[1] ) && !IS_NAN( ( outAxis[2] )[2] )") )
    __debugbreak();
  v10 = DVARVEC3_sentry_placement_feet_offset;
  if ( !DVARVEC3_sentry_placement_feet_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  value = v10->current.value;
  v12 = v10->current.vector.v[2];
  v13 = v10->current.vector.v[1];
  v14 = outAxis->m[0].v[0];
  v15 = outAxis->m[0].v[1];
  v16 = outAxis->m[0].v[2];
  v17 = (float)((float)((float)(value * outAxis->m[0].v[0]) + outOrigin->v[0]) + (float)(v13 * outAxis->m[1].v[0])) + (float)(v12 * v9->v[0]);
  v18 = (float)((float)((float)(value * v15) + outOrigin->v[1]) + (float)(v13 * outAxis->m[1].v[1])) + (float)(v12 * outAxis->m[2].v[1]);
  v19 = v12 * outAxis->m[2].v[2];
  v20 = (float)((float)(value * v16) + outOrigin->v[2]) + (float)(v13 * outAxis->m[1].v[2]);
  v77 = v12;
  v21 = v20 + v19;
  v22 = (float)((float)(value * -2.0) * v14) + v17;
  v88.m128_f32[1] = v18;
  v23 = (float)((float)(value * -2.0) * v15) + v18;
  v24 = (float)((float)(v13 * -2.0) * outAxis->m[1].v[1]) + v23;
  v25 = 0;
  v79 = 0;
  v88.m128_f32[0] = v17;
  v26 = (float)((float)(value * -2.0) * v16) + v21;
  v27 = (float)(v13 * -2.0) * outAxis->m[1].v[0];
  v88.m128_f32[2] = v21;
  v28 = (float)(v13 * -2.0) * outAxis->m[1].v[2];
  v88.m128_f32[3] = v22;
  v89 = v23;
  v91.m128_f32[3] = (float)((float)(value * 2.0) * v14) + (float)(v27 + v22);
  v93 = (float)((float)(value * 2.0) * v16) + (float)(v28 + v26);
  v90 = v26;
  v91.m128_f32[0] = v27 + v22;
  v91.m128_f32[1] = v24;
  v91.m128_f32[2] = v28 + v26;
  v92 = (float)((float)(value * 2.0) * v15) + v24;
  if ( handler )
  {
    if ( handler == TURRET_HANDLER_SERVER )
    {
      worldId = PHYSICS_WORLD_ID_FIRST;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
        __debugbreak();
      worldId = PHYSICS_WORLD_ID_INVALID;
    }
  }
  else
  {
    worldId = 3 * localClientNum + 2;
  }
  v29 = v77;
  v30 = 0;
  v76 = 0;
  v31 = 0i64;
  v32 = &v88.m128_f32[2];
  do
  {
    v33 = DVARFLT_sentry_placement_feet_trace_dist_z;
    if ( !DVARFLT_sentry_placement_feet_trace_dist_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_trace_dist_z") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    LODWORD(v34) = v33->current.integer ^ _xmm;
    end.v[0] = (float)(v34 * v9->v[0]) + *(v32 - 2);
    v35 = v34 * outAxis->m[2].v[2];
    v36 = (const vec3_t *)((char *)&v88 + 12 * v30);
    end.v[1] = (float)(v34 * outAxis->m[2].v[1]) + *(v32 - 1);
    end.v[2] = v35 + *v32;
    PhysicsQuery_LegacyTrace(worldId, trace, v36, &end, &bounds_origin, skipEntity[0], 1, 33636369, 0, NULL, All);
    if ( trace->hitType == TRACE_HITTYPE_BEGIN || Trace_GetGlassHitId(trace) )
    {
      ++v79;
      if ( v31 >= 4 )
      {
        j___report_rangecheckfailure(v37);
        JUMPOUT(0x14199BADDi64);
      }
      v42 = DVARBOOL_sentry_placement_debug;
      *((_BYTE *)&v77 + v31) = 0;
      v85.m128_i32[v31] = 0;
      if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      if ( v42->current.enabled )
      {
        v41 = &colorRed;
        goto LABEL_54;
      }
    }
    else
    {
      v38 = DVARFLT_sentry_placement_feet_trace_dist_z;
      *((_BYTE *)&v77 + v31) = 1;
      if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_trace_dist_z") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      v39 = v38->current.value * trace->fraction;
      v40 = DVARBOOL_sentry_placement_debug;
      v85.m128_f32[v31] = v39 - v29;
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.enabled )
      {
        v41 = &colorGreen;
LABEL_54:
        G_DebugLine(v36, &end, v41, 0);
      }
    }
    v43 = v9->v[0];
    LODWORD(v44) = v85.m128_i32[v31] ^ _xmm;
    v45 = v44 * outAxis->m[2].v[1];
    *(v32 - 2) = (float)(v9->v[0] * v44) + *(v32 - 2);
    v46 = v44 * outAxis->m[2].v[2];
    *(v32 - 1) = v45 + *(v32 - 1);
    v30 = v76 + 1;
    ++v31;
    *v32 = v46 + *v32;
    v32 += 3;
    v76 = v30;
  }
  while ( v30 < 4 );
  _XMM3 = v85.m128_u32[2];
  _XMM5 = v85.m128_u32[3];
  _XMM0 = LOBYTE(v77);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = v85.m128_u32[0];
  __asm { vblendvps xmm7, xmm0, xmm3, xmm2 }
  _XMM0 = BYTE1(v77);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = v85.m128_u32[1];
  __asm { vblendvps xmm6, xmm0, xmm5, xmm2 }
  _XMM0 = BYTE2(v77);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm4, xmm3, xmm7, xmm2
  }
  _XMM0 = HIBYTE(v77);
  v61 = *(_QWORD *)cross.v;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm3, xmm5, xmm6, xmm2
  }
  v64 = _XMM7;
  *(float *)&v64 = (float)(*(float *)&_XMM7 + *(float *)&_XMM4) * 0.5;
  _XMM2 = v64;
  __asm { vmaxss  xmm2, xmm2, xmm1 }
  v85.m128_f32[3] = *(float *)&_XMM3;
  **(float **)cross.v = (float)(v43 * COERCE_FLOAT(_XMM2 ^ _xmm)) + **(float **)cross.v;
  *(float *)(v61 + 4) = (float)(COERCE_FLOAT(_XMM2 ^ _xmm) * outAxis->m[2].v[1]) + *(float *)(v61 + 4);
  v67 = _mm128_sub_ps(v88, v91);
  *(float *)(v61 + 8) = (float)(COERCE_FLOAT(_XMM2 ^ _xmm) * outAxis->m[2].v[2]) + *(float *)(v61 + 8);
  v85 = v67;
  v87 = v90 - v93;
  v86 = v89 - v92;
  Vec3Cross((const vec3_t *)&v85, (const vec3_t *)&v85.m128_u32[3], &cross);
  v68 = v0;
  v69 = v1;
  v70 = LODWORD(cross.v[0]);
  *(float *)&v70 = fsqrt((float)((float)(*(float *)&v70 * *(float *)&v70) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v70;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  *(float *)&_XMM3 = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v70 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v9->v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  outAxis->m[2].v[1] = *(float *)&_XMM3;
  outAxis->m[2].v[2] = *(float *)&v70;
  Vec3Cross(v9, v69, v68);
  Vec3Cross(v0, v9, v1);
  LOBYTE(v25) = v79 <= 1;
  return v25;
}

