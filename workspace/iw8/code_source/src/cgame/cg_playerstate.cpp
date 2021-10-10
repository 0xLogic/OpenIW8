/*
==============
CG_PlayerState_ClearExtrapolatedPlayerState
==============
*/

void __fastcall CG_PlayerState_ClearExtrapolatedPlayerState(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerState_ClearExtrapolatedPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerState_ClearTransPlayerState
==============
*/

void __fastcall CG_PlayerState_ClearTransPlayerState(transPlayerState_t *transPs)
{
  ?CG_PlayerState_ClearTransPlayerState@@YAXPEAUtransPlayerState_t@@@Z(transPs);
}

/*
==============
CG_PlayerState_CalcPlayerHealth
==============
*/

double __fastcall CG_PlayerState_CalcPlayerHealth(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?CG_PlayerState_CalcPlayerHealth@@YAMW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
  return result;
}

/*
==============
CG_PlayerState_OnEndAddPacketEntities
==============
*/

void __fastcall CG_PlayerState_OnEndAddPacketEntities(LocalClientNum_t localClientNum)
{
  ?CG_PlayerState_OnEndAddPacketEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerState_ExtractTransPlayerState
==============
*/

void __fastcall CG_PlayerState_ExtractTransPlayerState(const playerState_s *ps, transPlayerState_t *transPs)
{
  ?CG_PlayerState_ExtractTransPlayerState@@YAXPEBUplayerState_s@@PEAUtransPlayerState_t@@@Z(ps, transPs);
}

/*
==============
CG_PlayerState_RestorePredictedPlayerState
==============
*/

void __fastcall CG_PlayerState_RestorePredictedPlayerState(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerState_RestorePredictedPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerState_SetExtrapolatedPlayerState
==============
*/

void __fastcall CG_PlayerState_SetExtrapolatedPlayerState(const LocalClientNum_t localClientNum, const playerState_s *const extrapolatedPlayerState)
{
  ?CG_PlayerState_SetExtrapolatedPlayerState@@YAXW4LocalClientNum_t@@QEBUplayerState_s@@@Z(localClientNum, extrapolatedPlayerState);
}

/*
==============
CG_PlayerState_FindLruDamageSlot
==============
*/

viewDamage_t *__fastcall CG_PlayerState_FindLruDamageSlot(cg_t *cgameGlob)
{
  return ?CG_PlayerState_FindLruDamageSlot@@YAPEAUviewDamage_t@@PEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_PlayerState_SavePredictedPlayerState
==============
*/

void __fastcall CG_PlayerState_SavePredictedPlayerState(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerState_SavePredictedPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerState_DamageFeedback
==============
*/

void __fastcall CG_PlayerState_DamageFeedback(LocalClientNum_t localClientNum, int yawByte, int pitchByte, int damage, DamageFeedbackType damageType)
{
  ?CG_PlayerState_DamageFeedback@@YAXW4LocalClientNum_t@@HHHW4DamageFeedbackType@@@Z(localClientNum, yawByte, pitchByte, damage, damageType);
}

/*
==============
CG_PlayerState_CalcPlayerHealth
==============
*/
double CG_PlayerState_CalcPlayerHealth(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  const dvar_t *v3; 
  __int128 v5; 

  if ( !ps->stats[0] || !ps->stats[2] || ps->pm_type == 7 )
    return 0.0;
  v3 = DVARINT_hud_health_min_fully_healed;
  if ( !DVARINT_hud_health_min_fully_healed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_health_min_fully_healed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v5 = 0i64;
  *(float *)&v5 = (float)v3->current.integer;
  _XMM1 = v5;
  __asm { vminss  xmm1, xmm1, xmm0 }
  return I_fclamp((float)ps->stats[0] / *(float *)&_XMM1, 0.0, 1.0);
}

/*
==============
CG_PlayerState_CalculateEntityTransformInSnap
==============
*/
void CG_PlayerState_CalculateEntityTransformInSnap(const cg_t *const cgameGlob, const centity_t *const ent, bool isNextSnap, tmat43_t<vec3_t> *outTransform)
{
  LerpEntityState *p_prevState; 
  int serverTime; 
  const centity_t *LinkToParent; 
  CgTrajectory v11; 
  vec3_t outAng; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 

  p_prevState = &ent->prevState;
  serverTime = cgameGlob->snap->serverTime;
  if ( isNextSnap )
  {
    p_prevState = &ent->nextState.lerp;
    serverTime = cgameGlob->nextSnap->serverTime;
  }
  if ( !p_prevState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 281, ASSERT_TYPE_ASSERT, "(lerpState)", (const char *)&queryFormat, "lerpState") )
    __debugbreak();
  CgTrajectory::CgTrajectory(&v11, (const LocalClientNum_t)cgameGlob->localClientNum, ent, p_prevState);
  BgTrajectory::EvaluateTrajectories(&v11, serverTime, &axis.m[3], &outAng);
  AnglesToAxis(&outAng, (tmat33_t<vec3_t> *)&axis);
  MatrixIdentity43(&out);
  LinkToParent = CG_Entity_GetLinkToParent(cgameGlob->localClientNum, ent);
  if ( LinkToParent )
    CG_PlayerState_CalculateEntityTransformInSnap(cgameGlob, LinkToParent, isNextSnap, &out);
  MatrixMultiply43(&axis, &out, outTransform);
}

/*
==============
CG_PlayerState_ClearExtrapolatedPlayerState
==============
*/
void CG_PlayerState_ClearExtrapolatedPlayerState(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_PlayerExtrap_ClearSavedPlayerState(&LocalClientGlobals->savedPlayerState);
}

/*
==============
CG_PlayerState_ClearTransPlayerState
==============
*/
void CG_PlayerState_ClearTransPlayerState(transPlayerState_t *transPs)
{
  transPs->otherFlags = 0i64;
  *(_QWORD *)&transPs->damageEvent = 0i64;
  *(_QWORD *)transPs->events = 0i64;
  *(_QWORD *)&transPs->events[2] = 0i64;
  transPs->unpredictableEventSequence = 0;
  *(_QWORD *)transPs->unpredictableEvents = 0i64;
  *(_QWORD *)&transPs->unpredictableEvents[2] = 0i64;
}

/*
==============
CG_PlayerState_DamageFeedback
==============
*/
void CG_PlayerState_DamageFeedback(LocalClientNum_t localClientNum, int yawByte, int pitchByte, int damage, DamageFeedbackType damageType)
{
  int v6; 
  cg_t *LocalClientGlobals; 
  cg_t *v9; 
  cg_t *v10; 
  int entity; 
  int v12; 
  float v13; 
  double v15; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  int v19; 
  int v20; 
  usercmd_s *v21; 
  usercmd_s *p_cmd; 
  __int64 v23; 
  double v24; 
  int v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  double Float_Internal_DebugName; 
  float v31; 
  double v32; 
  double v33; 
  double v34; 
  float v35; 
  double v36; 
  double v37; 
  int v38; 
  viewDamage_t *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  __int64 v50; 
  const char *v51; 
  const dvar_t *v52; 
  double v53; 
  double v54; 
  double v55; 
  int v56; 
  char *fmt; 
  char v58; 
  int v60; 
  int v61; 
  float viewKickScale; 
  float viewKickMax; 
  float viewKickMin[2]; 
  const ClActiveClient *v65; 
  __int64 v66; 
  vec3_t forward; 
  vec3_t angles; 
  usercmd_s cmd; 

  v66 = -2i64;
  v6 = yawByte;
  v61 = yawByte;
  if ( (unsigned int)damageType >= (COUNT|DODGE|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( damageType ) < (unsigned)( DamageFeedbackType::COUNT )", "damageType doesn't index DamageFeedbackType::COUNT\n\t%i not in [0, %i)", damageType, 7) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  if ( damageType == 6 )
  {
    v10 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 119, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    memset_0(v10->viewDamage, 0, sizeof(v10->viewDamage));
  }
  else if ( damage )
  {
    entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    v12 = 1;
    if ( !entity || entity == 2047 )
    {
      v58 = 0;
      _XMM0 = LODWORD(v9->predictedPlayerState.viewKickScale);
      if ( *(float *)&_XMM0 < 0.0 )
      {
        v15 = *(float *)&_XMM0;
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 158, ASSERT_TYPE_ASSERT, "( ps->viewKickScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "ps->viewKickScale", "0.0f", v15, *(double *)&_XMM0) )
          __debugbreak();
      }
      memset_0(&cmd, 0, sizeof(cmd));
      Client = ClActiveClient::GetClient(localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      v65 = ClActiveClient::GetClient(localClientNum);
      v19 = ClActiveClient_GetCmdNumber(v65);
      v20 = v19;
      v60 = v19;
      if ( CmdNumber > v19 )
      {
        LODWORD(fmt) = v19;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
      }
      if ( CmdNumber <= v20 - 128 || CmdNumber <= 0 )
      {
        memset(&v60, 0, sizeof(v60));
      }
      else
      {
        v21 = &v65->cmds[CmdNumber & 0x7F];
        memset(&v60, 0, sizeof(v60));
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
          __debugbreak();
        p_cmd = &cmd;
        v23 = 2i64;
        do
        {
          *(_OWORD *)&p_cmd->buttons = *(_OWORD *)&v21->buttons;
          *(_OWORD *)&p_cmd->commandTime = *(_OWORD *)&v21->commandTime;
          *(_OWORD *)(&p_cmd->angles.xy + 1) = *(_OWORD *)(&v21->angles.xy + 1);
          *(_OWORD *)&p_cmd->weapon.weaponOthers = *(_OWORD *)&v21->weapon.weaponOthers;
          *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v21->weapon.attachmentVariationIndices[1];
          *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v21->weapon.attachmentVariationIndices[17];
          *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&v21->offHand.weaponIdx;
          p_cmd = (usercmd_s *)((char *)p_cmd + 128);
          *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v21->offHand.weaponAttachments[2];
          v21 = (usercmd_s *)((char *)v21 + 128);
          --v23;
        }
        while ( v23 );
        p_cmd->buttons = v21->buttons;
      }
      BG_GetDamageViewKickScaleValues(&v9->predictedPlayerState, &cmd, &viewKickScale, viewKickMin, &viewKickMax);
      v24 = I_fclamp((float)damage * viewKickScale, viewKickMin[0], viewKickMax);
      v13 = *(float *)&v24 * v9->predictedPlayerState.viewKickScale;
      v12 = 1;
      v6 = v61;
    }
    else
    {
      v58 = 1;
      v13 = 0.0;
    }
    v25 = pitchByte;
    if ( v6 == 255 && pitchByte == 255 )
    {
      v9->v_dmg_roll = 0.0;
      v9->v_dmg_pitch = COERCE_FLOAT(LODWORD(v13) ^ _xmm);
      CG_PlayerState_LogViewKick(localClientNum, damage, v13, 1.0, 0.0, COERCE_FLOAT(LODWORD(v13) ^ _xmm), 0.0, v9->refdef.view.axis.m);
    }
    else
    {
      v26 = (float)v6 * 1.4117647;
      angles.v[0] = (float)pitchByte * 1.4117647;
      angles.v[1] = v26;
      angles.v[2] = 0.0;
      AngleVectors(&angles, &forward, NULL, NULL);
      v27 = (float)((float)(forward.v[1] * v9->refdef.view.axis.m[1].v[1]) + (float)(forward.v[0] * v9->refdef.view.axis.m[1].v[0])) + (float)(forward.v[2] * v9->refdef.view.axis.m[1].v[2]);
      v28 = (float)((float)(forward.v[1] * v9->refdef.view.axis.m[0].v[1]) + (float)(forward.v[0] * v9->refdef.view.axis.m[0].v[0])) + (float)(forward.v[2] * v9->refdef.view.axis.m[0].v[2]);
      v29 = v27 * v13;
      v9->v_dmg_roll = COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 * v13) ^ _xmm);
      v9->v_dmg_pitch = v28 * v13;
      CG_PlayerState_LogViewKick(localClientNum, damage, v13, v28, v27, v28 * v13, COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 * v13) ^ _xmm), &forward);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_OFFHAND_END) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        v31 = *(float *)&Float_Internal_DebugName;
        v32 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        v33 = I_flrand(COERCE_FLOAT(LODWORD(v32) ^ _xmm), v31);
        v9->v_dmg_roll = (float)(*(float *)&v33 * (float)(v28 * v13)) + v9->v_dmg_roll;
        v34 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        v35 = *(float *)&v34;
        v36 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        v37 = I_flrand(COERCE_FLOAT(LODWORD(v36) ^ _xmm), v35);
        v9->v_dmg_pitch = (float)(*(float *)&v37 * v29) + v9->v_dmg_pitch;
      }
      if ( damageType != 5 )
      {
        v38 = 0;
        v39 = &v9->viewDamage[3];
        do
        {
          v40 = v12;
          if ( v39[-2].time >= v9->viewDamage[v38].time )
            v40 = v38;
          v41 = v12 + 1;
          if ( v39[-1].time >= v9->viewDamage[v40].time )
            v41 = v40;
          v42 = v12 + 2;
          if ( v39->time >= v9->viewDamage[v41].time )
            v42 = v41;
          v43 = v12 + 3;
          if ( v39[1].time >= v9->viewDamage[v42].time )
            v43 = v42;
          v44 = v12 + 4;
          if ( v39[2].time >= v9->viewDamage[v43].time )
            v44 = v43;
          v45 = v12 + 5;
          if ( v39[3].time >= v9->viewDamage[v44].time )
            v45 = v44;
          v46 = v12 + 6;
          if ( v39[4].time >= v9->viewDamage[v45].time )
            v46 = v45;
          v47 = v12 + 7;
          if ( v39[5].time >= v9->viewDamage[v46].time )
            v47 = v46;
          v48 = v12 + 8;
          if ( v39[6].time >= v9->viewDamage[v47].time )
            v48 = v47;
          v49 = v12 + 9;
          if ( v39[7].time >= v9->viewDamage[v48].time )
            v49 = v48;
          v38 = v12 + 10;
          if ( v39[8].time >= v9->viewDamage[v49].time )
            v38 = v49;
          v12 += 11;
          v39 += 11;
        }
        while ( v12 < 12 );
        v50 = v38;
        v9->viewDamage[v38].time = v9->snap->serverTime;
        if ( damageType == (COUNT|DODGE) )
        {
          v51 = "cg_hudRicochetDamageIconTime";
          v52 = DVARINT_cg_hudRicochetDamageIconTime;
        }
        else
        {
          v51 = "cg_hudDamageIconTime";
          v52 = DVARINT_cg_hudDamageIconTime;
        }
        v9->viewDamage[v38].duration = Dvar_GetInt_Internal_DebugName(v52, v51);
        v53 = I_random();
        v54 = AngleNormalize360((float)((float)(*(float *)&v53 - 0.5) * 20.0) + v26);
        v9->viewDamage[v50].yaw = *(float *)&v54;
        v9->viewDamage[v50].type = damageType;
        v9->viewDamage[v50].inVehicle = v58;
        v9->viewDamage[v50].dir = forward;
        AxisCopy(&v9->refdef.view.axis, &v9->viewDamage[v50].playerDir);
        v55 = vectoyaw((const vec2_t *)&v9->refdef.view.axis);
        v9->viewDamage[v50].playerYaw = *(float *)&v55;
        v6 = v61;
      }
      v25 = pitchByte;
    }
    v9->damageTime = v9->snap->serverTime;
    v56 = v9->time + 500;
    if ( damageType == COUNT )
      v9->v_dmg_stun_time = v56;
    else
      v9->v_dmg_time = v56;
    CG_LatencyTestMP_DamageFeedback(localClientNum, v6, v25, damage, damageType);
  }
}

/*
==============
CG_PlayerState_ExtractTransPlayerState
==============
*/
void CG_PlayerState_ExtractTransPlayerState(const playerState_s *ps, transPlayerState_t *transPs)
{
  transPs->otherFlags = ps->otherFlags;
  transPs->damageEvent = ps->damageEvent;
  transPs->eventSequence = ps->pe.eventSequence;
  transPs->unpredictableEventSequence = ps->unpredictableEventSequence;
  transPs->events[0] = ps->pe.events[0].eventType;
  transPs->unpredictableEvents[0] = ps->unpredictableEvents[0].eventType;
  transPs->events[1] = ps->pe.events[1].eventType;
  transPs->unpredictableEvents[1] = ps->unpredictableEvents[1].eventType;
  transPs->events[2] = ps->pe.events[2].eventType;
  transPs->unpredictableEvents[2] = ps->unpredictableEvents[2].eventType;
  transPs->events[3] = ps->pe.events[3].eventType;
  transPs->unpredictableEvents[3] = ps->unpredictableEvents[3].eventType;
}

/*
==============
CG_PlayerState_FindLruDamageSlot
==============
*/
viewDamage_t *CG_PlayerState_FindLruDamageSlot(cg_t *cgameGlob)
{
  int v1; 
  viewDamage_t *v2; 
  int i; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 

  v1 = 0;
  v2 = &cgameGlob->viewDamage[3];
  for ( i = 1; i < 12; i += 11 )
  {
    v4 = i + 1;
    v5 = i;
    v2 += 11;
    if ( v2[-13].time >= cgameGlob->viewDamage[v1].time )
      v5 = v1;
    v1 = i + 10;
    if ( v2[-12].time >= cgameGlob->viewDamage[v5].time )
      v4 = v5;
    v6 = i + 2;
    if ( v2[-11].time >= cgameGlob->viewDamage[v4].time )
      v6 = v4;
    v7 = i + 3;
    if ( v2[-10].time >= cgameGlob->viewDamage[v6].time )
      v7 = v6;
    v8 = i + 4;
    if ( v2[-9].time >= cgameGlob->viewDamage[v7].time )
      v8 = v7;
    v9 = i + 5;
    if ( v2[-8].time >= cgameGlob->viewDamage[v8].time )
      v9 = v8;
    v10 = i + 6;
    if ( v2[-7].time >= cgameGlob->viewDamage[v9].time )
      v10 = v9;
    v11 = i + 7;
    if ( v2[-6].time >= cgameGlob->viewDamage[v10].time )
      v11 = v10;
    v12 = i + 8;
    if ( v2[-5].time >= cgameGlob->viewDamage[v11].time )
      v12 = v11;
    v13 = i + 9;
    if ( v2[-4].time >= cgameGlob->viewDamage[v12].time )
      v13 = v12;
    if ( v2[-3].time >= cgameGlob->viewDamage[v13].time )
      v1 = v13;
  }
  return &cgameGlob->viewDamage[v1];
}

/*
==============
CG_PlayerState_LogViewKick
==============
*/
void CG_PlayerState_LogViewKick(const LocalClientNum_t localClientNum, int damage, float kickAngle, float pitchRate, float rollRate, float pitchAngle, float rollAngle, const vec3_t *damageDir)
{
  const dvar_t *v10; 
  cg_t *LocalClientGlobals; 
  DebugLogQueueManager *Instance; 
  char dest[512]; 

  v10 = DVARBOOL_debugViewKickLog;
  if ( !DVARBOOL_debugViewKickLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugViewKickLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && localClientNum == LOCAL_CLIENT_0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    Com_sprintf(dest, 0x200ui64, "^7Damage taken: ^5%d ^7Kick Angle: ^5%.1f ^7Pitch Angle: ^5%.1f(%.1f%%) ^7Roll Angle: ^5%.1f(%.1f%%) ^7Damage Dir: ^5[%.1f %.1f %.1f] ^7Player Forward: ^5[%.1f %.1f %.1f] ^7Player Right: ^5[%.1f %.1f %.1f]", (unsigned int)damage, kickAngle, pitchAngle, (float)(100.0 * pitchRate), rollAngle, (float)(rollRate * 100.0), damageDir->v[0], damageDir->v[1], damageDir->v[2], LocalClientGlobals->refdef.view.axis.m[0].v[0], LocalClientGlobals->refdef.view.axis.m[0].v[1], LocalClientGlobals->refdef.view.axis.m[0].v[2], LocalClientGlobals->refdef.view.axis.m[1].v[0], LocalClientGlobals->refdef.view.axis.m[1].v[1], LocalClientGlobals->refdef.view.axis.m[1].v[2]);
    Instance = DebugLogQueueManager::GetInstance();
    DebugLogQueueManager::PushLog(Instance, DEBUG_LOG_CAT_BEGIN, dest);
  }
}

/*
==============
CG_PlayerState_OnEndAddPacketEntities
==============
*/
void CG_PlayerState_OnEndAddPacketEntities(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  snapshot_t *snap; 
  snapshot_t *nextSnap; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  float frameInterpolation; 
  bool v9; 
  int v10; 
  int v11; 
  unsigned __int16 v12; 
  centity_t *Entity; 
  centity_t *RootParent; 
  const centity_t *v15; 
  centity_t *v16; 
  centity_t *v17; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v22; 
  __int64 v32; 
  vec3_t origin; 
  __int64 v34; 
  vec3_t in1; 
  vec3_t out; 
  vec3_t v37; 
  tmat43_t<vec3_t> outTransform; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  v34 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  snap = (snapshot_t *)LocalClientGlobals->snap;
  nextSnap = (snapshot_t *)LocalClientGlobals->nextSnap;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 309, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( nextSnap->serverTime >= snap->serverTime )
  {
    v5 = (__int64)snap->GetPlayerState(snap, (const LocalClientNum_t)localClientNum);
    v6 = (__int64)nextSnap->GetPlayerState(nextSnap, (const LocalClientNum_t)localClientNum);
    v7 = v6;
    frameInterpolation = LocalClientGlobals->frameInterpolation;
    if ( LocalClientGlobals->originInterpolated )
    {
      v9 = BGMovingPlatformPS::IsOnMovingPlatform((BGMovingPlatformPS *)(v6 + 88)) != 0;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v10 = *(_DWORD *)(v7 + 12);
      if ( v10 == 1 || v10 == 8 )
      {
        v12 = *(_WORD *)(v7 + 664);
        if ( v12 >= 0x800u )
        {
          LODWORD(v32) = (__int16)v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( nextPs->linkEnt ) < (unsigned)( ( 2048 ) )", "nextPs->linkEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, 2048) )
            __debugbreak();
        }
        v11 = *(__int16 *)(v7 + 664);
      }
      else
      {
        if ( !v9 )
          return;
        v11 = *(_DWORD *)(v7 + 88);
      }
      Entity = CG_GetEntity(localClientNum, v11);
      RootParent = CG_Entity_GetRootParent(localClientNum, Entity);
      v15 = RootParent;
      if ( RootParent && (RootParent->flags & 1) != 0 )
      {
        if ( v9 && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled, "killswitch_mover_killcam_timespsace_fix_enabled") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
        {
          v16 = CG_GetEntity(localClientNum, *(_DWORD *)(v5 + 88));
          v17 = CG_GetEntity(localClientNum, *(_DWORD *)(v7 + 88));
          v15 = v17;
          if ( v16 && (v16->flags & 1) != 0 && v16->nextState.number != v17->nextState.number )
            in1 = *(vec3_t *)(v7 + 108);
          else
            in1 = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_moverPlayerOffset;
        }
        else
        {
          CG_PlayerState_CalculateEntityTransformInSnap(LocalClientGlobals, v15, 0, &outTransform);
          CG_PlayerState_CalculateEntityTransformInSnap(LocalClientGlobals, v15, 1, &in2);
          MatrixTransposeTransformVector43((const vec3_t *)(v5 + 48), &outTransform, &out);
          MatrixTransposeTransformVector43((const vec3_t *)(v7 + 48), &in2, &v37);
          in1.v[0] = (float)((float)(v37.v[0] - out.v[0]) * frameInterpolation) + out.v[0];
          in1.v[1] = (float)((float)(v37.v[1] - out.v[1]) * frameInterpolation) + out.v[1];
          in1.v[2] = (float)((float)(v37.v[2] - out.v[2]) * frameInterpolation) + out.v[2];
        }
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !v15->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v15->pose.origin.Get_origin, &v15->pose);
        FunctionPointer_origin(&v15->pose.origin.origin.origin, &origin);
        if ( v15->pose.isPosePrecise )
        {
          _XMM0 = LODWORD(origin.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v22 = *(double *)&_XMM0 * 0.000244140625;
          _XMM0 = v22;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          origin.v[0] = *(float *)&_XMM1;
          _XMM2 = LODWORD(origin.v[1]);
          __asm { vcvtdq2pd xmm2, xmm2 }
          *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM2 + 1);
          *(double *)&v22 = *(double *)&_XMM2 * 0.000244140625;
          _XMM0 = v22;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          origin.v[1] = *(float *)&_XMM1;
          _XMM2 = LODWORD(origin.v[2]);
          __asm { vcvtdq2pd xmm2, xmm2 }
          *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM2 + 1);
          *(double *)&v22 = *(double *)&_XMM2 * 0.000244140625;
          _XMM0 = v22;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          origin.v[2] = *(float *)&_XMM1;
        }
        AnglesAndOriginToMatrix43(&v15->pose.angles, &origin, &result);
        MatrixTransformVector43(&in1, &result, &LocalClientGlobals->predictedPlayerState.origin);
        memset(&origin, 0, sizeof(origin));
      }
    }
  }
}

/*
==============
CG_PlayerState_RestorePredictedPlayerState
==============
*/
void CG_PlayerState_RestorePredictedPlayerState(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_PlayerExtrap_RestorePlayerState(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->savedPlayerState);
}

/*
==============
CG_PlayerState_SavePredictedPlayerState
==============
*/
void CG_PlayerState_SavePredictedPlayerState(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_PlayerExtrap_SavePlayerState(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->savedPlayerState);
}

/*
==============
CG_PlayerState_SetExtrapolatedPlayerState
==============
*/
void CG_PlayerState_SetExtrapolatedPlayerState(const LocalClientNum_t localClientNum, const playerState_s *const extrapolatedPlayerState)
{
  cg_t *LocalClientGlobals; 

  if ( !extrapolatedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 421, ASSERT_TYPE_ASSERT, "(extrapolatedPlayerState)", (const char *)&queryFormat, "extrapolatedPlayerState") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_PlayerExtrap_SetPlayerState(&LocalClientGlobals->predictedPlayerState, extrapolatedPlayerState);
}

