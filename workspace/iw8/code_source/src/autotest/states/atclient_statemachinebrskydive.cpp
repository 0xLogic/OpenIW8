/*
==============
ATClient_StateMachineBRSkydiveTransition
==============
*/

bool __fastcall ATClient_StateMachineBRSkydiveTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineBRSkydiveTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineBRSkydiveEnter
==============
*/

void __fastcall ATClient_StateMachineBRSkydiveEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineBRSkydiveEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineBRSkydiveReset
==============
*/

void __fastcall ATClient_StateMachineBRSkydiveReset(LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ?ATClient_StateMachineBRSkydiveReset@@YAXW4LocalClientNum_t@@W4errorParm_t@@@Z(localClientNum, errorcode);
}

/*
==============
ATClient_StateMachineBRSkydiveUpdate
==============
*/

void __fastcall ATClient_StateMachineBRSkydiveUpdate(LocalClientNum_t localClientNum, int msec)
{
  ?ATClient_StateMachineBRSkydiveUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineBRSkydiveExit
==============
*/

void __fastcall ATClient_StateMachineBRSkydiveExit(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineBRSkydiveExit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineBRSkydiveEnter
==============
*/
void ATClient_StateMachineBRSkydiveEnter(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  __int64 integer64; 
  const char *v4; 
  __int64 v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  const clientState_t *LocalClientState; 
  unsigned int TimeAsSeconds; 
  int clientIndex; 
  double v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int pHoldrand; 

  v1 = DVARSTR_ui_gametype;
  v2 = localClientNum;
  if ( !DVARSTR_ui_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_gametype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer64 = v1->current.integer64;
  v4 = "br";
  v5 = 0x7FFFFFFFi64;
  if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v6 = integer64 - (_QWORD)"br";
  do
  {
    v7 = v4[v6];
    v8 = v5;
    v9 = *v4++;
    --v5;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrskydive.cpp", 37, ASSERT_TYPE_ASSERT, "(I_strcmp( Dvar_GetString_Internal_DebugName( DVARSTR_ui_gametype, \"ui_gametype\" ), \"br\" ) == 0)", (const char *)&queryFormat, "I_strcmp( Dvar_GetString( ui_gametype ), \"br\" ) == 0") )
        __debugbreak();
      break;
    }
  }
  while ( v7 );
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrskydive.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  LocalClientState = ATClient_GetLocalClientState((const LocalClientNum_t)v2);
  TimeAsSeconds = Sys_GetTimeAsSeconds();
  pHoldrand = TimeAsSeconds;
  if ( LocalClientState )
    clientIndex = LocalClientState->clientIndex;
  else
    clientIndex = 0;
  pHoldrand = clientIndex + TimeAsSeconds;
  BG_srand(&pHoldrand);
  v13 = BG_flrand(-180.0, 180.0, &pHoldrand);
  s_brSkydiveClientData[v2].m_yaw = *(float *)&v13;
  s_brSkydiveClientData[v2].m_fwd = 0.0;
}

/*
==============
ATClient_StateMachineBRSkydiveExit
==============
*/
void ATClient_StateMachineBRSkydiveExit(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
ATClient_StateMachineBRSkydiveReset
==============
*/
void ATClient_StateMachineBRSkydiveReset(LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ;
}

/*
==============
ATClient_StateMachineBRSkydiveTransition
==============
*/
char ATClient_StateMachineBRSkydiveTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v3; 
  bool v4; 
  ClActiveClient **v5; 
  const playerState_s *v6; 
  char result; 
  float v9; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v9 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  v4 = ClActiveClient::ms_activeClients[v3] == NULL;
  v5 = &ClActiveClient::ms_activeClients[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v6 = (*v5)->GetPlayerState(*v5);
  if ( BG_Skydive_IsSkydiving(v6) )
  {
    result = 0;
    *outNewState = -2;
  }
  else
  {
    *outNewState = 0;
    return 1;
  }
  return result;
}

/*
==============
ATClient_StateMachineBRSkydiveUpdate
==============
*/
void ATClient_StateMachineBRSkydiveUpdate(LocalClientNum_t localClientNum, int msec)
{
  __int64 v2; 
  vec3_t *PlayerAngles; 
  float v7; 
  double v8; 
  AutomatedInput_Record records; 
  vec3_t result; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrskydive.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  PlayerAngles = ATClient_GetPlayerAngles(&result, (const LocalClientNum_t)v2);
  _XMM6 = 0i64;
  __asm
  {
    vroundss xmm2, xmm6, xmm1, 1
    vroundss xmm3, xmm6, xmm2, 1
  }
  v7 = cosf_0((float)((float)((float)((float)((float)((float)(s_brSkydiveClientData[v2].m_yaw - PlayerAngles->v[1]) * 0.0027777778) - *(float *)&_XMM2) * 1.0) - 0.25) - *(float *)&_XMM3) * 6.2831855);
  v8 = I_fclamp(v7 * -20.0, -0.89999998, 0.89999998);
  memset(&records.keys, 0, sizeof(records.keys));
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = FLOAT_0_0099999998;
  records.moveStick.v[0] = 0.0;
  records.moveStick.v[1] = 0.0;
  records.lookStick.v[0] = 0.0;
  records.lookStick.v[1] = *(float *)&v8;
  CL_Input_AddAutomatedSequence((LocalClientNum_t)v2, &records, 1);
}

