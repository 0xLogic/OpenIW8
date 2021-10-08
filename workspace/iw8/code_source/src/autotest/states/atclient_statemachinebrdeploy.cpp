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
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  const char *Gametype; 
  signed __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  const clientState_t *LocalClientState; 
  unsigned int TimeAsSeconds; 
  int clientIndex; 
  const char *v24; 
  const char *v26; 
  const char *v28; 
  const char *v30; 
  unsigned int pHoldrand; 
  char *data_p[5]; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v6 = "br";
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  v7 = 0x7FFFFFFFi64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v8 = localClientNum;
  Gametype = Party_GetGametype();
  if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v10 = Gametype - "br";
  do
  {
    v11 = v6[v10];
    v12 = v7;
    v13 = *v6++;
    --v7;
    if ( !v12 )
      break;
    if ( v11 != v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrdeploy.cpp", 69, ASSERT_TYPE_ASSERT, "(I_strcmp( Party_GetGametype(), \"br\" ) == 0)", (const char *)&queryFormat, "I_strcmp( Party_GetGametype(), \"br\" ) == 0") )
        __debugbreak();
      break;
    }
  }
  while ( v11 );
  _RBX = DVARFLT_ATClient_BRInfilPctMin;
  if ( !DVARFLT_ATClient_BRInfilPctMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfilPctMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ATClient_BRInfilPctMax;
  if ( !DVARFLT_ATClient_BRInfilPctMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfilPctMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  LocalClientState = ATClient_GetLocalClientState((const LocalClientNum_t)v8);
  TimeAsSeconds = Sys_GetTimeAsSeconds();
  pHoldrand = TimeAsSeconds;
  if ( LocalClientState )
    clientIndex = LocalClientState->clientIndex;
  else
    clientIndex = 0;
  pHoldrand = clientIndex + TimeAsSeconds;
  BG_srand(&pHoldrand);
  _RBX = &s_brDeployClientData[v8];
  __asm
  {
    vmovaps xmm1, xmm6; max
    vmovaps xmm0, xmm7; min
  }
  _RBX->m_reachedDropPoint = 0;
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
  __asm { vmovss  dword ptr [rbx+4], xmm0 }
  *(_QWORD *)&_RBX->m_retryTimer = 0i64;
  _RBX->m_hasPrevPos = 0;
  *(_QWORD *)_RBX->m_curPos.v = 0i64;
  _RBX->m_curPos.v[2] = 0.0;
  *(_QWORD *)_RBX->m_prevPos.v = 0i64;
  _RBX->m_prevPos.v[2] = 0.0;
  data_p[0] = (char *)CL_GetConfigString(10);
  Com_Parse((const char **)data_p);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) )
    Com_Parse((const char **)data_p);
  v24 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v24);
  __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
  v26 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v26);
  __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
  v28 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v28);
  __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  v30 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v30);
  __asm
  {
    vcvtsd2ss xmm6, xmm0, xmm0
    vmovaps xmm0, xmm9; X
    vmovaps xmm1, xmm7; Y
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm0
    vmovaps xmm0, xmm8; X
    vmovaps xmm1, xmm6; Y
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx+14h], xmm0
    vmovaps xmm0, xmm9; X
    vmovaps xmm1, xmm7; Y
  }
  _RBX->m_minimapMins.v[2] = -10.0;
  *(float *)&_XMM0 = fmaxf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovaps xmm0, xmm8; X
    vmovaps xmm1, xmm6; Y
  }
  *(float *)&_XMM0 = fmaxf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx+20h], xmm0
  }
  _RBX->m_minimapMaxs.v[2] = 10.0;
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
  __int64 v7; 
  const playerState_s *v12; 
  bool v42; 
  bool v43; 
  __int64 v74; 
  __int64 v75; 
  float v76; 
  float t; 
  vec3_t v0; 
  vec3_t v1; 
  AutomatedInput_Record records; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-58h], xmm10 }
  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrdeploy.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _R14 = v7;
  _R13 = 0x140000000ui64;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( s_brDeployClientData[v7].m_reachedDropPoint )
  {
    s_brDeployClientData[_R14].m_retryTimer -= msec;
  }
  else
  {
    if ( (unsigned int)v7 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&v75 = cl_maxLocalClients;
      LODWORD(v74) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v74, v75) )
        __debugbreak();
    }
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
      __debugbreak();
    if ( !ClActiveClient::ms_activeClients[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
      __debugbreak();
    v12 = ClActiveClient::ms_activeClients[v7]->GetPlayerState(ClActiveClient::ms_activeClients[v7]);
    _R12 = &s_brDeployClientData[_R14].m_curPos;
    _RDX = v12;
    if ( s_brDeployClientData[_R14].m_hasPrevPos )
    {
      s_brDeployClientData[_R14].m_prevPos.v[0] = _R12->v[0];
      s_brDeployClientData[_R14].m_prevPos.v[1] = s_brDeployClientData[_R14].m_curPos.v[1];
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+30h]
        vmovss  dword ptr [r12], xmm0
        vmovss  xmm1, dword ptr [rdx+34h]
        vmovss  dword ptr [r12+4], xmm1
        vsubss  xmm0, xmm0, dword ptr [r14+r13+89B7DE8h]
        vsubss  xmm1, xmm1, dword ptr [r14+r13+89B7DECh]
        vmovss  [rbp+57h+v0], xmm0
        vmovss  xmm0, dword ptr [r14+r13+89B7DE0h]
        vsubss  xmm2, xmm0, dword ptr [r14+r13+89B7DF0h]
        vmovss  [rbp+57h+var_C0], xmm2
        vmovss  xmm2, cs:__real@3a83126f; epsilon
        vmovss  [rbp+57h+var_C4], xmm1
        vmovss  [rbp+57h+v1], xmm10
        vmovss  [rbp+57h+var_B4], xmm10
        vmovss  [rbp+57h+var_B0], xmm10
      }
      if ( !VecNCompareCustomEpsilon(v0.v, v1.v, *(float *)&_XMM2, 3) )
      {
        __asm
        {
          vmovss  xmm4, [rbp+57h+v0]
          vmulss  xmm0, xmm4, xmm4
          vmovaps [rsp+110h+var_38+8], xmm6
          vmovss  xmm6, [rbp+57h+var_C0]
          vmovaps [rsp+110h+var_48+8], xmm7
          vmovss  xmm7, [rbp+57h+var_C4]
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm0, xmm2, xmm1
          vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovaps [rsp+110h+var_68+8], xmm11
          vmovss  xmm11, cs:__real@3f800000
          vblendvps xmm0, xmm3, xmm11, xmm0
          vdivss  xmm1, xmm11, xmm0
          vmulss  xmm5, xmm4, xmm1
          vmulss  xmm3, xmm6, xmm1
          vxorps  xmm0, xmm5, xmm2
          vmulss  xmm4, xmm7, xmm1
          vmovss  [rbp+57h+v1], xmm0
          vxorps  xmm0, xmm3, xmm2
          vxorps  xmm1, xmm4, xmm2
          vmovss  [rbp+57h+var_B0], xmm0
          vmovss  [rbp+57h+v0], xmm5
          vmovss  [rbp+57h+var_C4], xmm4
          vmovss  [rbp+57h+var_C0], xmm3
          vmovss  [rbp+57h+var_B4], xmm1
        }
        v42 = IntersectRayAABB(&s_brDeployClientData[_R14].m_curPos, &v0, &s_brDeployClientData[_R14].m_minimapMins, &s_brDeployClientData[_R14].m_minimapMaxs, &t);
        v43 = IntersectRayAABB(&s_brDeployClientData[_R14].m_curPos, &v1, &s_brDeployClientData[_R14].m_minimapMins, &s_brDeployClientData[_R14].m_minimapMaxs, &v76);
        if ( v42 && v43 )
        {
          __asm
          {
            vmovss  xmm3, [rbp+57h+var_D0]
            vmulss  xmm0, xmm3, [rbp+57h+var_B4]
            vaddss  xmm6, xmm0, dword ptr [r12+4]
            vmulss  xmm1, xmm3, [rbp+57h+v1]
            vaddss  xmm7, xmm1, dword ptr [r12]
            vmovss  xmm4, [rbp+57h+t]
            vmulss  xmm0, xmm4, [rbp+57h+v0]
            vaddss  xmm2, xmm0, dword ptr [r12]
            vmulss  xmm0, xmm4, [rbp+57h+var_C4]
            vsubss  xmm5, xmm2, xmm7
            vaddss  xmm2, xmm0, dword ptr [r12+4]
            vsubss  xmm3, xmm2, xmm6
            vsubss  xmm2, xmm7, dword ptr [r12]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm5, xmm5
            vaddss  xmm1, xmm1, xmm0
            vsubss  xmm0, xmm6, dword ptr [r12+4]
            vsqrtss xmm3, xmm1, xmm1
            vcomiss xmm3, xmm10
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vdivss  xmm0, xmm11, xmm3
            vmulss  xmm1, xmm2, xmm0
            vcomiss xmm1, dword ptr [r14+r13+89B7DB4h]
          }
          s_brDeployClientData[_R14].m_reachedDropPoint = 1;
        }
        __asm
        {
          vmovaps xmm7, [rsp+110h+var_48+8]
          vmovaps xmm6, [rsp+110h+var_38+8]
          vmovaps xmm11, [rsp+110h+var_68+8]
        }
      }
    }
    else
    {
      s_brDeployClientData[_R14].m_hasPrevPos = 1;
      s_brDeployClientData[_R14].m_prevPos.v[0] = v12->origin.v[0];
      s_brDeployClientData[_R14].m_prevPos.v[1] = v12->origin.v[1];
      _R12->v[0] = v12->origin.v[0];
      s_brDeployClientData[_R14].m_curPos.v[1] = v12->origin.v[1];
    }
  }
  if ( s_brDeployClientData[_R14].m_retryTimer <= 0 && s_brDeployClientData[_R14].m_reachedDropPoint )
  {
    __asm { vmovss  xmm0, cs:__real@3e800000 }
    records.keys.keyBits.array[0] = 0x40000000;
    __asm
    {
      vmovss  [rbp+57h+records.holdTimeSeconds], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
    memset(&records.keys.keyBits.array[1], 0, 24);
    __asm
    {
      vmovss  [rbp+57h+records.deferTimeSeconds], xmm10
      vmovups xmmword ptr [rbp+57h+records.moveStick], xmm0
    }
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v7, &records, 1);
    ++s_brDeployClientData[_R14].m_retryCount;
    s_brDeployClientData[_R14].m_retryTimer = 2500;
  }
  __asm { vmovaps xmm10, [rsp+110h+var_58+8] }
}

