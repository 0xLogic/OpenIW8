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

double __fastcall CG_PlayerState_CalcPlayerHealth(LocalClientNum_t localClientNum, const playerState_s *ps, double _XMM2_8)
{
  const dvar_t *v5; 

  if ( ps->stats[0] && ps->stats[2] && ps->pm_type != 7 )
  {
    v5 = DVARINT_hud_health_min_fully_healed;
    if ( !DVARINT_hud_health_min_fully_healed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_health_min_fully_healed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+260h]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rbx+258h]
      vminss  xmm1, xmm1, xmm0
      vdivss  xmm0, xmm2, xmm1; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
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
  int v13; 
  cg_t *LocalClientGlobals; 
  cg_t *v17; 
  unsigned int entity; 
  int v19; 
  bool v20; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  int v27; 
  int v28; 
  __int64 v31; 
  int v43; 
  int v79; 
  viewDamage_t *v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  const char *v92; 
  const dvar_t *v93; 
  int v100; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float pitchAngle; 
  float pitchAnglea; 
  float rollAngle; 
  float rollAnglea; 
  vec3_t *damageDir; 
  double v115; 
  char v116; 
  int v118; 
  int v119; 
  float viewKickScale; 
  float viewKickMax; 
  float viewKickMin[2]; 
  const ClActiveClient *v123; 
  __int64 v124; 
  vec3_t forward; 
  vec3_t angles; 
  usercmd_s cmd; 
  char v128; 
  void *retaddr; 

  _RAX = &retaddr;
  v124 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  v13 = yawByte;
  v119 = yawByte;
  if ( (unsigned int)damageType >= (COUNT|DODGE|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( damageType ) < (unsigned)( DamageFeedbackType::COUNT )", "damageType doesn't index DamageFeedbackType::COUNT\n\t%i not in [0, %i)", damageType, 7) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RSI = LocalClientGlobals;
  if ( damageType == 6 )
  {
    v17 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 119, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    memset_0(v17->viewDamage, 0, sizeof(v17->viewDamage));
  }
  else if ( damage )
  {
    entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    v19 = 1;
    v20 = 0;
    if ( !entity || (v20 = entity < 0x7FF, entity == 2047) )
    {
      v116 = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+11E8h]
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm0, xmm6
      }
      if ( v20 )
      {
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vxorpd  xmm0, xmm0, xmm0
          vmovsd  [rsp+250h+var_210], xmm0
          vmovsd  [rsp+250h+damageDir], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 158, ASSERT_TYPE_ASSERT, "( ps->viewKickScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "ps->viewKickScale", "0.0f", *(double *)&damageDir, v115) )
          __debugbreak();
      }
      memset_0(&cmd, 0, sizeof(cmd));
      Client = ClActiveClient::GetClient(localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      v123 = ClActiveClient::GetClient(localClientNum);
      v27 = ClActiveClient_GetCmdNumber(v123);
      v28 = v27;
      v118 = v27;
      if ( CmdNumber > v27 )
      {
        LODWORD(fmt) = v27;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
      }
      if ( CmdNumber <= v28 - 128 || CmdNumber <= 0 )
      {
        memset(&v118, 0, sizeof(v118));
      }
      else
      {
        _RBX = &v123->cmds[CmdNumber & 0x7F];
        memset(&v118, 0, sizeof(v118));
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
          __debugbreak();
        _RCX = &cmd;
        v31 = 2i64;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rbx+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
            vmovups xmm0, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [rcx+20h], xmm0
            vmovups xmm1, xmmword ptr [rbx+30h]
            vmovups xmmword ptr [rcx+30h], xmm1
            vmovups xmm0, xmmword ptr [rbx+40h]
            vmovups xmmword ptr [rcx+40h], xmm0
            vmovups xmm1, xmmword ptr [rbx+50h]
            vmovups xmmword ptr [rcx+50h], xmm1
            vmovups xmm0, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [rcx+60h], xmm0
          }
          _RCX = (usercmd_s *)((char *)_RCX + 128);
          __asm
          {
            vmovups xmm1, xmmword ptr [rbx+70h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          _RBX = (usercmd_s *)((char *)_RBX + 128);
          --v31;
        }
        while ( v31 );
        _RCX->buttons = _RBX->buttons;
      }
      BG_GetDamageViewKickScaleValues(&_RSI->predictedPlayerState, &cmd, &viewKickScale, viewKickMin, &viewKickMax);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r12d
        vmulss  xmm0, xmm0, [rsp+250h+viewKickScale]; val
        vmovss  xmm2, [rsp+250h+viewKickMax]; max
        vmovss  xmm1, [rsp+250h+viewKickMin]; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm7, xmm0, dword ptr [rsi+11E8h] }
      v19 = 1;
      v13 = v119;
    }
    else
    {
      v116 = 1;
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm7, xmm7, xmm7
      }
    }
    v43 = pitchByte;
    if ( v13 == 255 && pitchByte == 255 )
    {
      _RSI->v_dmg_roll = 0.0;
      __asm
      {
        vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rsi+49D7Ch], xmm0
        vmovss  [rsp+250h+rollAngle], xmm6
        vmovss  [rsp+250h+pitchAngle], xmm0
        vmovss  dword ptr [rsp+250h+fmt], xmm6
        vmovss  xmm3, cs:__real@3f800000; pitchRate
        vmovaps xmm2, xmm7; kickAngle
      }
      CG_PlayerState_LogViewKick(localClientNum, damage, *(float *)&_XMM2, *(float *)&_XMM3, fmta, pitchAngle, rollAngle, _RSI->refdef.view.axis.m);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm11, xmm0, cs:__real@3fb4b4b5
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r13d
        vmulss  xmm1, xmm0, cs:__real@3fb4b4b5
        vmovss  dword ptr [rbp+150h+angles], xmm1
        vmovss  dword ptr [rbp+150h+angles+4], xmm11
        vmovss  dword ptr [rbp+150h+angles+8], xmm6
      }
      AngleVectors(&angles, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+150h+forward+4]
        vmulss  xmm1, xmm5, dword ptr [rsi+6954h]
        vmovss  xmm3, dword ptr [rbp+150h+forward]
        vmulss  xmm0, xmm3, dword ptr [rsi+6950h]
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm4, dword ptr [rbp+150h+forward+8]
        vmulss  xmm0, xmm4, dword ptr [rsi+6958h]
        vaddss  xmm6, xmm2, xmm0
        vmulss  xmm1, xmm5, dword ptr [rsi+6948h]
        vmulss  xmm0, xmm3, dword ptr [rsi+6944h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rsi+694Ch]
        vaddss  xmm3, xmm2, xmm1; pitchRate
        vmulss  xmm10, xmm6, xmm7
        vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rsi+49D80h], xmm0
        vmulss  xmm9, xmm3, xmm7
        vmovss  dword ptr [rsi+49D7Ch], xmm9
        vmovss  [rsp+250h+rollAngle], xmm0
        vmovss  [rsp+250h+pitchAngle], xmm9
        vmovss  dword ptr [rsp+250h+fmt], xmm6
        vmovaps xmm2, xmm7; kickAngle
      }
      CG_PlayerState_LogViewKick(localClientNum, damage, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, pitchAnglea, rollAnglea, &forward);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_OFFHAND_END) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        __asm
        {
          vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; min
          vmovaps xmm1, xmm6; max
        }
        *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, dword ptr [rsi+49D80h]
          vmovss  dword ptr [rsi+49D80h], xmm2
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_viewKickRandom, "bg_viewKickRandom");
        __asm
        {
          vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; min
          vmovaps xmm1, xmm6; max
        }
        *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm2, xmm1, dword ptr [rsi+49D7Ch]
          vmovss  dword ptr [rsi+49D7Ch], xmm2
        }
      }
      if ( damageType != 5 )
      {
        v79 = 0;
        v80 = &_RSI->viewDamage[3];
        do
        {
          v81 = v19;
          if ( v80[-2].time >= _RSI->viewDamage[v79].time )
            v81 = v79;
          v82 = v19 + 1;
          if ( v80[-1].time >= _RSI->viewDamage[v81].time )
            v82 = v81;
          v83 = v19 + 2;
          if ( v80->time >= _RSI->viewDamage[v82].time )
            v83 = v82;
          v84 = v19 + 3;
          if ( v80[1].time >= _RSI->viewDamage[v83].time )
            v84 = v83;
          v85 = v19 + 4;
          if ( v80[2].time >= _RSI->viewDamage[v84].time )
            v85 = v84;
          v86 = v19 + 5;
          if ( v80[3].time >= _RSI->viewDamage[v85].time )
            v86 = v85;
          v87 = v19 + 6;
          if ( v80[4].time >= _RSI->viewDamage[v86].time )
            v87 = v86;
          v88 = v19 + 7;
          if ( v80[5].time >= _RSI->viewDamage[v87].time )
            v88 = v87;
          v89 = v19 + 8;
          if ( v80[6].time >= _RSI->viewDamage[v88].time )
            v89 = v88;
          v90 = v19 + 9;
          if ( v80[7].time >= _RSI->viewDamage[v89].time )
            v90 = v89;
          v79 = v19 + 10;
          if ( v80[8].time >= _RSI->viewDamage[v90].time )
            v79 = v90;
          v19 += 11;
          v80 += 11;
        }
        while ( v19 < 12 );
        _RDI = v79;
        _RSI->viewDamage[v79].time = _RSI->snap->serverTime;
        if ( damageType == (COUNT|DODGE) )
        {
          v92 = "cg_hudRicochetDamageIconTime";
          v93 = DVARINT_cg_hudRicochetDamageIconTime;
        }
        else
        {
          v92 = "cg_hudDamageIconTime";
          v93 = DVARINT_cg_hudDamageIconTime;
        }
        _RSI->viewDamage[v79].duration = Dvar_GetInt_Internal_DebugName(v93, v92);
        *(double *)&_XMM0 = I_random();
        __asm
        {
          vsubss  xmm1, xmm0, cs:__real@3f000000
          vmulss  xmm2, xmm1, cs:__real@41a00000
          vaddss  xmm0, xmm2, xmm11; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovss  dword ptr [rsi+rdi*8+49A18h], xmm0 }
        _RSI->viewDamage[_RDI].type = damageType;
        _RSI->viewDamage[_RDI].inVehicle = v116;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+150h+forward]
          vmovss  dword ptr [rsi+rdi*8+49A0Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+150h+forward+4]
          vmovss  dword ptr [rsi+rdi*8+49A10h], xmm1
          vmovss  xmm0, dword ptr [rbp+150h+forward+8]
          vmovss  dword ptr [rsi+rdi*8+49A14h], xmm0
        }
        AxisCopy(&_RSI->refdef.view.axis, &_RSI->viewDamage[_RDI].playerDir);
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&_RSI->refdef.view.axis);
        __asm { vmovss  dword ptr [rsi+rdi*8+49A1Ch], xmm0 }
        v13 = v119;
      }
      v43 = pitchByte;
    }
    _RSI->damageTime = _RSI->snap->serverTime;
    v100 = _RSI->time + 500;
    if ( damageType == COUNT )
      _RSI->v_dmg_stun_time = v100;
    else
      _RSI->v_dmg_time = v100;
    CG_LatencyTestMP_DamageFeedback(localClientNum, v13, v43, damage, damageType);
  }
  _R11 = &v128;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
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

void __fastcall CG_PlayerState_LogViewKick(const LocalClientNum_t localClientNum, int damage, double kickAngle, double pitchRate, float rollRate, float pitchAngle, float rollAngle, const vec3_t *damageDir)
{
  const dvar_t *v21; 
  DebugLogQueueManager *Instance; 
  char *fmt; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  char dest[512]; 

  __asm { vmovaps [rsp+378h+var_C8], xmm15 }
  _RSI = damageDir;
  v21 = DVARBOOL_debugViewKickLog;
  __asm
  {
    vmovss  [rsp+378h+var_2E8], xmm3
    vmovaps xmm15, xmm2
  }
  if ( !DVARBOOL_debugViewKickLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugViewKickLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled && localClientNum == LOCAL_CLIENT_0 )
  {
    __asm
    {
      vmovaps [rsp+378h+var_38], xmm6
      vmovaps [rsp+378h+var_48], xmm7
      vmovaps [rsp+378h+var_58], xmm8
      vmovaps [rsp+378h+var_68], xmm9
      vmovaps [rsp+378h+var_78], xmm10
      vmovaps [rsp+378h+var_88], xmm11
      vmovaps [rsp+378h+var_98], xmm12
      vmovaps [rsp+378h+var_A8], xmm13
      vmovaps [rsp+378h+var_B8], xmm14
    }
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm2, cs:__real@42c80000
      vmovss  xmm0, [rsp+378h+rollRate]
      vmovss  xmm12, dword ptr [rsi+8]
      vmovss  xmm6, dword ptr [rax+6958h]
      vmovss  xmm7, dword ptr [rax+6954h]
      vmovss  xmm8, dword ptr [rax+6950h]
      vmovss  xmm9, dword ptr [rax+694Ch]
      vmovss  xmm10, dword ptr [rax+6948h]
      vmovss  xmm11, dword ptr [rax+6944h]
      vmovss  xmm13, dword ptr [rsi+4]
      vmovss  xmm14, dword ptr [rsi]
      vmovss  xmm5, [rsp+378h+rollAngle]
      vmovss  xmm3, [rsp+378h+pitchAngle]
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm0, xmm2, [rsp+378h+var_2E8]
      vcvtss2sd xmm4, xmm1, xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm15, xmm15
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+378h+var_2F0], xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vmovsd  [rsp+378h+var_2F8], xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vmovsd  [rsp+378h+var_300], xmm8
      vcvtss2sd xmm9, xmm9, xmm9
      vmovsd  [rsp+378h+var_308], xmm9
      vcvtss2sd xmm10, xmm10, xmm10
      vmovsd  [rsp+378h+var_310], xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vmovsd  [rsp+378h+var_318], xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vmovsd  [rsp+378h+var_320], xmm12
      vcvtss2sd xmm13, xmm13, xmm13
      vmovsd  [rsp+378h+var_328], xmm13
      vcvtss2sd xmm14, xmm14, xmm14
      vmovsd  [rsp+378h+var_330], xmm14
      vmovsd  [rsp+378h+var_338], xmm4
      vmovsd  [rsp+378h+var_340], xmm5
      vmovsd  [rsp+378h+var_348], xmm1
      vmovsd  [rsp+378h+var_350], xmm3
      vmovsd  [rsp+378h+fmt], xmm2
    }
    Com_sprintf(dest, 0x200ui64, "^7Damage taken: ^5%d ^7Kick Angle: ^5%.1f ^7Pitch Angle: ^5%.1f(%.1f%%) ^7Roll Angle: ^5%.1f(%.1f%%) ^7Damage Dir: ^5[%.1f %.1f %.1f] ^7Player Forward: ^5[%.1f %.1f %.1f] ^7Player Right: ^5[%.1f %.1f %.1f]", (unsigned int)damage, *(double *)&fmt, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77);
    Instance = DebugLogQueueManager::GetInstance();
    DebugLogQueueManager::PushLog(Instance, DEBUG_LOG_CAT_BEGIN, dest);
    __asm
    {
      vmovaps xmm14, [rsp+378h+var_B8]
      vmovaps xmm13, [rsp+378h+var_A8]
      vmovaps xmm12, [rsp+378h+var_98]
      vmovaps xmm11, [rsp+378h+var_88]
      vmovaps xmm10, [rsp+378h+var_78]
      vmovaps xmm9, [rsp+378h+var_68]
      vmovaps xmm8, [rsp+378h+var_58]
      vmovaps xmm7, [rsp+378h+var_48]
      vmovaps xmm6, [rsp+378h+var_38]
    }
  }
  __asm { vmovaps xmm15, [rsp+378h+var_C8] }
}

/*
==============
CG_PlayerState_OnEndAddPacketEntities
==============
*/
void CG_PlayerState_OnEndAddPacketEntities(LocalClientNum_t localClientNum)
{
  snapshot_t *snap; 
  snapshot_t *nextSnap; 
  __int64 v7; 
  __int64 v8; 
  bool v11; 
  int v12; 
  int v13; 
  unsigned __int16 v14; 
  centity_t *Entity; 
  centity_t *RootParent; 
  const centity_t *v17; 
  centity_t *v18; 
  centity_t *v19; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v54; 
  vec3_t origin; 
  __int64 v56; 
  vec3_t in1; 
  vec3_t out; 
  vec3_t v59; 
  tmat43_t<vec3_t> outTransform; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v56 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  snap = (snapshot_t *)_RSI->snap;
  nextSnap = (snapshot_t *)_RSI->nextSnap;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 309, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( nextSnap->serverTime >= snap->serverTime )
  {
    v7 = (__int64)snap->GetPlayerState(snap, (const LocalClientNum_t)localClientNum);
    v8 = (__int64)nextSnap->GetPlayerState(nextSnap, (const LocalClientNum_t)localClientNum);
    _RBX = v8;
    __asm { vmovss  xmm6, dword ptr [rsi+65E0h] }
    if ( _RSI->originInterpolated )
    {
      v11 = BGMovingPlatformPS::IsOnMovingPlatform((BGMovingPlatformPS *)(v8 + 88)) != 0;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v12 = *(_DWORD *)(_RBX + 12);
      if ( v12 == 1 || v12 == 8 )
      {
        v14 = *(_WORD *)(_RBX + 664);
        if ( v14 >= 0x800u )
        {
          LODWORD(v54) = (__int16)v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_playerstate.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( nextPs->linkEnt ) < (unsigned)( ( 2048 ) )", "nextPs->linkEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v54, 2048) )
            __debugbreak();
        }
        v13 = *(__int16 *)(_RBX + 664);
      }
      else
      {
        if ( !v11 )
          goto LABEL_37;
        v13 = *(_DWORD *)(_RBX + 88);
      }
      Entity = CG_GetEntity(localClientNum, v13);
      RootParent = CG_Entity_GetRootParent(localClientNum, Entity);
      v17 = RootParent;
      if ( RootParent && (RootParent->flags & 1) != 0 )
      {
        if ( v11 && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled, "killswitch_mover_killcam_timespsace_fix_enabled") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
        {
          v18 = CG_GetEntity(localClientNum, *(_DWORD *)(v7 + 88));
          v19 = CG_GetEntity(localClientNum, *(_DWORD *)(_RBX + 88));
          v17 = v19;
          if ( v18 && (v18->flags & 1) != 0 && v18->nextState.number != v19->nextState.number )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+6Ch]
              vmovss  dword ptr [rsp+150h+in1], xmm0
              vmovss  xmm1, dword ptr [rbx+70h]
              vmovss  dword ptr [rsp+150h+in1+4], xmm1
              vmovss  xmm0, dword ptr [rbx+74h]
              vmovss  dword ptr [rsp+150h+in1+8], xmm0
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+74h]
              vmovss  dword ptr [rsp+150h+in1], xmm0
              vmovss  xmm1, dword ptr [rsi+78h]
              vmovss  dword ptr [rsp+150h+in1+4], xmm1
              vmovss  xmm0, dword ptr [rsi+7Ch]
              vmovss  dword ptr [rsp+150h+in1+8], xmm0
            }
          }
        }
        else
        {
          CG_PlayerState_CalculateEntityTransformInSnap(_RSI, v17, 0, &outTransform);
          CG_PlayerState_CalculateEntityTransformInSnap(_RSI, v17, 1, &in2);
          MatrixTransposeTransformVector43((const vec3_t *)(v7 + 48), &outTransform, &out);
          MatrixTransposeTransformVector43((const vec3_t *)(_RBX + 48), &in2, &v59);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+150h+var_D8]
            vsubss  xmm1, xmm0, dword ptr [rsp+150h+out]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsp+150h+out]
            vmovss  dword ptr [rsp+150h+in1], xmm3
            vmovss  xmm0, dword ptr [rsp+150h+var_D8+4]
            vsubss  xmm1, xmm0, dword ptr [rsp+150h+out+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsp+150h+out+4]
            vmovss  dword ptr [rsp+150h+in1+4], xmm3
            vmovss  xmm0, dword ptr [rbp+50h+var_D8+8]
            vsubss  xmm1, xmm0, dword ptr [rsp+150h+out+8]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rsp+150h+out+8]
            vmovss  dword ptr [rsp+150h+in1+8], xmm3
          }
        }
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !v17->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v17->pose.origin.Get_origin, &v17->pose);
        FunctionPointer_origin(&v17->pose.origin.origin.origin, &origin);
        if ( v17->pose.isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rsp+150h+origin]
            vcvtdq2pd xmm0, xmm0
            vmovsd  xmm3, cs:__real@3f30000000000000
            vmulsd  xmm0, xmm0, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+150h+origin], xmm1
            vmovd   xmm2, dword ptr [rsp+150h+origin+4]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm0, xmm2, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+150h+origin+4], xmm1
            vmovd   xmm2, dword ptr [rsp+150h+origin+8]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm0, xmm2, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+150h+origin+8], xmm1
          }
        }
        AnglesAndOriginToMatrix43(&v17->pose.angles, &origin, &result);
        MatrixTransformVector43(&in1, &result, &_RSI->predictedPlayerState.origin);
        memset(&origin, 0, sizeof(origin));
      }
    }
  }
LABEL_37:
  _R11 = &v63;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

