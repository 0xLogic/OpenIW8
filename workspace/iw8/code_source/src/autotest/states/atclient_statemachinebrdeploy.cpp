/*
==============
ATClient_StateMachineBRDeployTransition
==============
*/

bool __fastcall ATClient_StateMachineBRDeployTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineBRDeployTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineBRDeployUpdate
==============
*/

void __fastcall ATClient_StateMachineBRDeployUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineBRDeployUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineBRDeployEnter
==============
*/

void __fastcall ATClient_StateMachineBRDeployEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineBRDeployEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineBRDeployEnter
==============
*/
void ATClient_StateMachineBRDeployEnter(const LocalClientNum_t localClientNum)
{
  const char *v1; 
  __int64 v2; 
  __int64 v3; 
  const char *Gametype; 
  signed __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  const dvar_t *v9; 
  __int128 unsignedInt; 
  const dvar_t *v11; 
  float value; 
  const clientState_t *LocalClientState; 
  unsigned int TimeAsSeconds; 
  int clientIndex; 
  BRDeployClientData *v16; 
  const char *v18; 
  const char *v20; 
  const char *v22; 
  const char *v24; 
  unsigned int pHoldrand; 
  char *data_p[5]; 

  v1 = "br";
  v2 = 0x7FFFFFFFi64;
  v3 = localClientNum;
  Gametype = Party_GetGametype();
  if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = Gametype - "br";
  do
  {
    v6 = v1[v5];
    v7 = v2;
    v8 = *v1++;
    --v2;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrdeploy.cpp", 69, ASSERT_TYPE_ASSERT, "(I_strcmp( Party_GetGametype(), \"br\" ) == 0)", (const char *)&queryFormat, "I_strcmp( Party_GetGametype(), \"br\" ) == 0") )
        __debugbreak();
      break;
    }
  }
  while ( v6 );
  v9 = DVARFLT_ATClient_BRInfilPctMin;
  if ( !DVARFLT_ATClient_BRInfilPctMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfilPctMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  unsignedInt = v9->current.unsignedInt;
  v11 = DVARFLT_ATClient_BRInfilPctMax;
  if ( !DVARFLT_ATClient_BRInfilPctMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfilPctMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  LocalClientState = ATClient_GetLocalClientState((const LocalClientNum_t)v3);
  TimeAsSeconds = Sys_GetTimeAsSeconds();
  pHoldrand = TimeAsSeconds;
  if ( LocalClientState )
    clientIndex = LocalClientState->clientIndex;
  else
    clientIndex = 0;
  pHoldrand = clientIndex + TimeAsSeconds;
  BG_srand(&pHoldrand);
  v16 = &s_brDeployClientData[v3];
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&unsignedInt + 1);
  v16->m_reachedDropPoint = 0;
  *(double *)&_XMM0 = BG_flrand(*(float *)&unsignedInt, value, &pHoldrand);
  v16->m_targetPercentage = *(float *)&_XMM0;
  *(_QWORD *)&v16->m_retryTimer = 0i64;
  v16->m_hasPrevPos = 0;
  *(_QWORD *)v16->m_curPos.v = 0i64;
  v16->m_curPos.v[2] = 0.0;
  *(_QWORD *)v16->m_prevPos.v = 0i64;
  v16->m_prevPos.v[2] = 0.0;
  data_p[0] = (char *)CL_GetConfigString(10);
  Com_Parse((const char **)data_p);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) )
    Com_Parse((const char **)data_p);
  v18 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v18);
  __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
  v20 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v20);
  __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
  v22 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v22);
  __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  v24 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v24);
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  v16->m_minimapMins.v[0] = fminf(*(float *)&_XMM9, *(float *)&_XMM7);
  v16->m_minimapMins.v[1] = fminf(*(float *)&_XMM8, *(float *)&_XMM6);
  v16->m_minimapMins.v[2] = -10.0;
  v16->m_minimapMaxs.v[0] = fmaxf(*(float *)&_XMM9, *(float *)&_XMM7);
  v16->m_minimapMaxs.v[1] = fmaxf(*(float *)&_XMM8, *(float *)&_XMM6);
  v16->m_minimapMaxs.v[2] = 10.0;
}

/*
==============
ATClient_StateMachineBRDeployTransition
==============
*/
char ATClient_StateMachineBRDeployTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int v6; 
  int outResult; 

  v2 = localClientNum;
  *outNewState = -2;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrdeploy.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( s_brDeployClientData[v2].m_retryCount < 3 )
  {
    if ( ATClient_GetOmnvarValueInt32((const LocalClientNum_t)v2, "ui_br_infiled", 0, &outResult) && outResult )
    {
      *outNewState = 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *outNewState = 3;
    return 1;
  }
}

/*
==============
ATClient_StateMachineBRDeployUpdate
==============
*/
void ATClient_StateMachineBRDeployUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v2; 
  __int64 v4; 
  const playerState_s *v5; 
  vec3_t *p_m_curPos; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  bool v14; 
  bool v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  float v23; 
  float t; 
  vec3_t v0; 
  vec3_t v1; 
  AutomatedInput_Record records; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrdeploy.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v2;
  if ( s_brDeployClientData[v2].m_reachedDropPoint )
  {
    s_brDeployClientData[v4].m_retryTimer -= msec;
  }
  else
  {
    if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v22 = cl_maxLocalClients;
      LODWORD(v21) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
      __debugbreak();
    if ( !ClActiveClient::ms_activeClients[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
      __debugbreak();
    v5 = ClActiveClient::ms_activeClients[v2]->GetPlayerState(ClActiveClient::ms_activeClients[v2]);
    p_m_curPos = &s_brDeployClientData[v4].m_curPos;
    if ( s_brDeployClientData[v4].m_hasPrevPos )
    {
      s_brDeployClientData[v4].m_prevPos.v[0] = p_m_curPos->v[0];
      s_brDeployClientData[v4].m_prevPos.v[1] = s_brDeployClientData[v4].m_curPos.v[1];
      v7 = v5->origin.v[0];
      p_m_curPos->v[0] = v7;
      v8 = v5->origin.v[1];
      s_brDeployClientData[v4].m_curPos.v[1] = v8;
      v9 = v8 - s_brDeployClientData[v4].m_prevPos.v[1];
      v0.v[0] = v7 - s_brDeployClientData[v4].m_prevPos.v[0];
      v0.v[2] = s_brDeployClientData[v4].m_curPos.v[2] - s_brDeployClientData[v4].m_prevPos.v[2];
      v0.v[1] = v9;
      v1.v[0] = 0.0;
      v1.v[1] = 0.0;
      v1.v[2] = 0.0;
      if ( !VecNCompareCustomEpsilon(v0.v, v1.v, 0.001, 3) )
      {
        v10 = LODWORD(v0.v[1]);
        *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v0.v[0] * v0.v[0])) + (float)(v0.v[2] * v0.v[2]));
        _XMM3 = v10;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm11, xmm0
        }
        LODWORD(v1.v[0]) = COERCE_UNSIGNED_INT(v0.v[0] * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
        LODWORD(v1.v[2]) = COERCE_UNSIGNED_INT(v0.v[2] * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
        v0.v[0] = v0.v[0] * (float)(1.0 / *(float *)&_XMM0);
        v0.v[1] = v0.v[1] * (float)(1.0 / *(float *)&_XMM0);
        v0.v[2] = v0.v[2] * (float)(1.0 / *(float *)&_XMM0);
        LODWORD(v1.v[1]) = LODWORD(v0.v[1]) ^ _xmm;
        v14 = IntersectRayAABB(&s_brDeployClientData[v4].m_curPos, &v0, &s_brDeployClientData[v4].m_minimapMins, &s_brDeployClientData[v4].m_minimapMaxs, &t);
        v15 = IntersectRayAABB(&s_brDeployClientData[v4].m_curPos, &v1, &s_brDeployClientData[v4].m_minimapMins, &s_brDeployClientData[v4].m_minimapMaxs, &v23);
        if ( v14 && v15 )
        {
          v16 = (float)(v23 * v1.v[1]) + s_brDeployClientData[v4].m_curPos.v[1];
          v17 = (float)(v23 * v1.v[0]) + p_m_curPos->v[0];
          v18 = (float)((float)(t * v0.v[1]) + s_brDeployClientData[v4].m_curPos.v[1]) - v16;
          v19 = v16 - s_brDeployClientData[v4].m_curPos.v[1];
          v20 = fsqrt((float)(v18 * v18) + (float)((float)((float)((float)(t * v0.v[0]) + p_m_curPos->v[0]) - v17) * (float)((float)((float)(t * v0.v[0]) + p_m_curPos->v[0]) - v17)));
          if ( v20 > 0.0 && (float)(fsqrt((float)(v19 * v19) + (float)((float)(v17 - p_m_curPos->v[0]) * (float)(v17 - p_m_curPos->v[0]))) * (float)(1.0 / v20)) >= s_brDeployClientData[v4].m_targetPercentage )
            s_brDeployClientData[v4].m_reachedDropPoint = 1;
        }
      }
    }
    else
    {
      s_brDeployClientData[v4].m_hasPrevPos = 1;
      s_brDeployClientData[v4].m_prevPos.v[0] = v5->origin.v[0];
      s_brDeployClientData[v4].m_prevPos.v[1] = v5->origin.v[1];
      p_m_curPos->v[0] = v5->origin.v[0];
      s_brDeployClientData[v4].m_curPos.v[1] = v5->origin.v[1];
    }
  }
  if ( s_brDeployClientData[v4].m_retryTimer <= 0 && s_brDeployClientData[v4].m_reachedDropPoint )
  {
    records.keys.keyBits.array[0] = 0x40000000;
    records.holdTimeSeconds = FLOAT_0_25;
    memset(&records.keys.keyBits.array[1], 0, 40);
    records.deferTimeSeconds = 0.0;
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
    ++s_brDeployClientData[v4].m_retryCount;
    s_brDeployClientData[v4].m_retryTimer = 2500;
  }
}

