/*
==============
ATClient_RegisterDvars
==============
*/

void ATClient_RegisterDvars(void)
{
  ?ATClient_RegisterDvars@@YAXXZ();
}

/*
==============
ATClient_GetStateName
==============
*/

const char *__fastcall ATClient_GetStateName(const int stateID)
{
  return ?ATClient_GetStateName@@YAPEBDH@Z(stateID);
}

/*
==============
ATClient_Init
==============
*/

void ATClient_Init(void)
{
  ?ATClient_Init@@YAXXZ();
}

/*
==============
ATClient_Update
==============
*/

void __fastcall ATClient_Update(int msec)
{
  ?ATClient_Update@@YAXH@Z(msec);
}

/*
==============
ATClient_GetSMName
==============
*/

const char *__fastcall ATClient_GetSMName(const int smID)
{
  return ?ATClient_GetSMName@@YAPEBDH@Z(smID);
}

/*
==============
ATClient_ErrorCleanup
==============
*/

void __fastcall ATClient_ErrorCleanup(const errorParm_t errorCode)
{
  ?ATClient_ErrorCleanup@@YAXW4errorParm_t@@@Z(errorCode);
}

/*
==============
ATClient_DevHost_SendState
==============
*/
void ATClient_DevHost_SendState()
{
  int v0; 
  int v1; 
  int v2; 
  __int64 v3; 
  unsigned int outTabCount[2]; 
  char buffer[256]; 

  v0 = 0;
  if ( s_initialized )
  {
    v1 = 0;
    *(_QWORD *)outTabCount = 0i64;
    do
      v0 += ATClient_StateMachine::PrintState(&s_autoTestClientSM, (LocalClientNum_t)v1++, outTabCount, &buffer[v0], 256 - v0, 1);
    while ( v1 < 2 );
  }
  v2 = 255;
  if ( v0 < 255 )
    v2 = v0;
  if ( (unsigned __int64)v2 >= 0x100 )
  {
    j___report_rangecheckfailure();
    JUMPOUT(0x14021C589i64);
  }
  buffer[v2] = 0;
  v3 = -1i64;
  do
    ++v3;
  while ( buffer[v3] );
  Com_DevhostSendMessage(12, 1u, v3, buffer);
}

/*
==============
ATClient_ErrorCleanup
==============
*/
void ATClient_ErrorCleanup(const errorParm_t errorCode)
{
  const dvar_t *v1; 
  int v3; 
  int i; 

  v1 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && s_initialized )
  {
    v3 = 0;
    for ( i = 0; i < 2; ++i )
      ATClient_StateMachine::Reset(&s_autoTestClientSM, (LocalClientNum_t)i, errorCode);
    do
      ATClient_StateMachine::Start(&s_autoTestClientSM, (const LocalClientNum_t)v3++, 0);
    while ( v3 < 2 );
  }
}

/*
==============
ATClient_GetSMName
==============
*/
const char *ATClient_GetSMName(const int smID)
{
  __int64 v1; 
  int v4; 

  v1 = smID;
  if ( (unsigned int)smID >= 9 )
  {
    v4 = 9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( smID ) < (unsigned)( ( sizeof( *array_counter( s_atclientSMNames ) ) + 0 ) )", "smID doesn't index ARRAY_COUNT( s_atclientSMNames )\n\t%i not in [0, %i)", smID, v4) )
      __debugbreak();
  }
  return s_atclientSMNames[v1];
}

/*
==============
ATClient_GetStateName
==============
*/
const char *ATClient_GetStateName(const int stateID)
{
  __int64 v1; 
  int v4; 

  v1 = stateID;
  if ( (unsigned int)stateID >= 0x23 )
  {
    v4 = 35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient.cpp", 200, ASSERT_TYPE_ASSERT, "(unsigned)( stateID ) < (unsigned)( ( sizeof( *array_counter( s_atclientStateNames ) ) + 0 ) )", "stateID doesn't index ARRAY_COUNT( s_atclientStateNames )\n\t%i not in [0, %i)", stateID, v4) )
      __debugbreak();
  }
  return s_atclientStateNames[v1];
}

/*
==============
ATClient_Init
==============
*/
void ATClient_Init(void)
{
  const dvar_t *v0; 
  int v1; 
  int i; 

  v0 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled && !s_initialized )
  {
    Cmd_AddCommandInternal("ATClient_PrintState", ATClient_PrintStateCmd, &allocedCmd);
    Cmd_AddCommandInternal("ATClient_DevHost_SendState", ATClient_DevHost_SendState, &stru_1489B0FE8);
    v1 = 0;
    for ( i = 0; i < 2; ++i )
      ATClient_ResetBlackboard((const LocalClientNum_t)i);
    ATClient_StateMachine::Initialize(&s_autoTestClientSM, 2u);
    ATClient_Init_PreLobby();
    ATClient_Init_InGame();
    do
      ATClient_StateMachine::Start(&s_autoTestClientSM, (const LocalClientNum_t)v1++, 0);
    while ( v1 < 2 );
    s_initialized = 1;
  }
}

/*
==============
ATClient_Init_InGame
==============
*/
void ATClient_Init_InGame()
{
  const ATClient_State *v0; 
  const ATClient_State *v1; 
  const ATClient_State *v2; 
  const ATClient_State *v3; 
  const ATClient_State *v4; 
  ATClient_State v5; 

  ATClient_State::ATClient_State(&v5, ATClient_StateMachineInGameReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineInGameTransition, &s_autoTestClientInGameSM, 1u, 24);
  ATClient_StateMachine::RegisterState(&s_autoTestClientSM, 1u, v0);
  ATClient_State::~ATClient_State(&v5);
  ATClient_StateMachine::Initialize(&s_autoTestClientInGameSM, 0xFu);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineInGameChooseActionTransition, NULL, 0, 25);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0, v1);
  ATClient_State::~ATClient_State(&v5);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineTeamSelectMenuEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineTeamSelectMenuTransition, NULL, 0, 7);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 1u, v2);
  ATClient_State::~ATClient_State(&v5);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineInGameLoadoutSelectEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachineInGameLoadoutSelectTransition, NULL, 0, 8);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 2u, v3);
  ATClient_State::~ATClient_State(&v5);
  ATClient_Init_InGame_InputAutomatedSystem();
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachinePerfTestReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachinePerfTestEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachinePerfTestExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachinePerfTestUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachinePerfTestTransition, NULL, 0, 21);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0xEu, v4);
  ATClient_State::~ATClient_State(&v5);
}

/*
==============
ATClient_Init_InGame_InputAutomatedSystem
==============
*/
void ATClient_Init_InGame_InputAutomatedSystem()
{
  const ATClient_State *v0; 
  const ATClient_State *v1; 
  const ATClient_State *v2; 
  const ATClient_State *v3; 
  const ATClient_State *v4; 
  const ATClient_State *v5; 
  const ATClient_State *v6; 
  const ATClient_State *v7; 
  const ATClient_State *v8; 
  const ATClient_State *v9; 
  const ATClient_State *v10; 
  ATClient_State v11; 

  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineBRInfilEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachineBRInfilTransition, NULL, 0, 16);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 3u, v0);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineBRDeployEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineBRDeployUpdate, ATClient_StateMachineBRDeployTransition, NULL, 0, 17);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 4u, v1);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineBRSkydiveReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineBRSkydiveEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineBRSkydiveExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineBRSkydiveUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachineBRSkydiveTransition, NULL, 0, 18);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 5u, v2);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineInGameQuitEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineInGameQuitTransition, NULL, 0, 19);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 6u, v3);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineInGameSendInviteEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineInGameSendInviteUpdate, ATClient_StateMachineInGameSendInviteTransition, NULL, 0, 20);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 7u, v4);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineRandomWalkEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineRandomWalkUpdate, ATClient_StateMachineRandomWalkTransition, &s_autoTestClientInGameRandomWalkSM, 1u, 21);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 8u, v5);
  ATClient_State::~ATClient_State(&v11);
  ATClient_Init_InGame_RandomWalk(&s_autoTestClientInGameRandomWalkSM);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineHuntEnemyEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineHuntEnemyUpdate, ATClient_StateMachineHuntEnemyTransition, &s_autoTestClientInGameHuntEnemySM, 1u, 22);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0xAu, v6);
  ATClient_State::~ATClient_State(&v11);
  ATClient_Init_InGame_RandomWalk(&s_autoTestClientInGameHuntEnemySM);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineDriveAroundEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineDriveAroundUpdate, ATClient_StateMachineDriveAroundTransition, &s_autoTestClientInGameDriveAroundSM, 0, 23);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0xBu, v7);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineHuntEnemyVehicleEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineHuntEnemyVehicleUpdate, ATClient_StateMachineHuntEnemyVehicleTransition, NULL, 0, 32);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0xCu, v8);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineInGameSpawnSelectEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineInGameSpawnSelectUpdate, ATClient_StateMachineInGameSpawnSelectTransition, NULL, 0, 9);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 9u, v9);
  ATClient_State::~ATClient_State(&v11);
  ATClient_State::ATClient_State(&v11, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineCaptureObjEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineCaptureObjUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachineCaptureObjTransition, &s_autoTestClientInGameCaptureObjSM, 1u, 33);
  ATClient_StateMachine::RegisterState(&s_autoTestClientInGameSM, 0xDu, v10);
  ATClient_State::~ATClient_State(&v11);
  ATClient_Init_InGame_RandomWalk(&s_autoTestClientInGameCaptureObjSM);
}

/*
==============
ATClient_Init_InGame_RandomWalk
==============
*/
void ATClient_Init_InGame_RandomWalk(ATClient_StateMachine *stateMachine)
{
  const ATClient_State *v2; 
  const ATClient_State *v3; 
  const ATClient_State *v4; 
  const ATClient_State *v5; 
  const ATClient_State *v6; 
  const ATClient_State *v7; 
  const ATClient_State *v8; 
  ATClient_State v9; 

  ATClient_StateMachine::Initialize(stateMachine, 7u);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineInGameRandomWalkChooseActionTransition, NULL, 0, 15);
  ATClient_StateMachine::RegisterState(stateMachine, 0, v2);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineThrowGrenadeEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineThrowGrenadeTransition, NULL, 0, 10);
  ATClient_StateMachine::RegisterState(stateMachine, 1u, v3);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineShootEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineShootUpdate, ATClient_StateMachineShootTransition, NULL, 0, 11);
  ATClient_StateMachine::RegisterState(stateMachine, 2u, v4);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineHealEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineHealUpdate, ATClient_StateMachineHealTransition, NULL, 0, 12);
  ATClient_StateMachine::RegisterState(stateMachine, 3u, v5);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineAddCalloutMarkerEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineAddCalloutMarkerTransition, NULL, 0, 12);
  ATClient_StateMachine::RegisterState(stateMachine, 4u, v6);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineAimAtEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineAimAtUpdate, ATClient_StateMachineAimAtTransition, NULL, 0, 13);
  ATClient_StateMachine::RegisterState(stateMachine, 5u, v7);
  ATClient_State::~ATClient_State(&v9);
  ATClient_State::ATClient_State(&v9, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineKillstreakEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineKillstreakUpdate, (bool (__fastcall *)(const LocalClientNum_t, unsigned int *))ATClient_StateMachineKillstreakTransition, NULL, 0, 14);
  ATClient_StateMachine::RegisterState(stateMachine, 6u, v8);
  ATClient_State::~ATClient_State(&v9);
}

/*
==============
ATClient_Init_PreLobby
==============
*/
void ATClient_Init_PreLobby()
{
  const ATClient_State *v0; 
  const ATClient_State *v1; 
  const ATClient_State *v2; 
  const ATClient_State *v3; 
  const ATClient_State *v4; 
  ATClient_State v5; 

  ATClient_State::ATClient_State(&v5, ATClient_StateMachinePreLobbyReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachinePreLobbyTransition, &s_autoTestClientPreLobbySM, 1u, 4);
  ATClient_StateMachine::RegisterState(&s_autoTestClientSM, 0, v0);
  ATClient_State::~ATClient_State(&v5);
  ATClient_StateMachine::Initialize(&s_autoTestClientPreLobbySM, 4u);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineWaitForServerConnectionTransition, NULL, 0, 5);
  ATClient_StateMachine::RegisterState(&s_autoTestClientPreLobbySM, 3u, v1);
  ATClient_State::~ATClient_State(&v5);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, ATClient_StateMachineOnlineFencesEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, (void (__fastcall *)(const LocalClientNum_t, const int))ATClient_StateMachineDefaultUpdate, ATClient_StateMachineOnlineFencesTransition, NULL, 0, 1);
  ATClient_StateMachine::RegisterState(&s_autoTestClientPreLobbySM, 0, v2);
  ATClient_State::~ATClient_State(&v5);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineStartPrivatePartyUpdate, ATClient_StateMachineStartPrivatePartyTransition, NULL, 0, 2);
  ATClient_StateMachine::RegisterState(&s_autoTestClientPreLobbySM, 1u, v3);
  ATClient_State::~ATClient_State(&v5);
  ATClient_State::ATClient_State(&v5, (void (__fastcall *)(const LocalClientNum_t, const errorParm_t))ATClient_StateMachineDefaultReset, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultEnter, (void (__fastcall *)(const LocalClientNum_t))ATClient_StateMachineDefaultExit, ATClient_StateMachineStartLobbyUpdate, ATClient_StateMachineStartLobbyTransition, NULL, 0, 3);
  ATClient_StateMachine::RegisterState(&s_autoTestClientPreLobbySM, 2u, v4);
  ATClient_State::~ATClient_State(&v5);
}

/*
==============
ATClient_PrintStateCmd
==============
*/
void ATClient_PrintStateCmd()
{
  int v0; 
  int i; 
  __int64 outTabCount; 

  v0 = 0;
  if ( s_initialized )
  {
    Com_Printf(14, "\n\n---= ATClient State Machine State =---\n\n");
    outTabCount = 0i64;
    for ( i = 0; i < 2; ++i )
      v0 += ATClient_StateMachine::PrintState(&s_autoTestClientSM, (LocalClientNum_t)i, (unsigned int *)&outTabCount, (char *const)v0, -v0, 1);
  }
}

/*
==============
ATClient_RegisterDvars
==============
*/
void ATClient_RegisterDvars(void)
{
  DVARBOOL_ATClient_Enabled = Dvar_RegisterBool("PPQLQTKTP", 0, 4u, "Enable the autotest client system.");
  DVARSTR_ATClient_DeferredUiNav = Dvar_RegisterString("MNOPOLOMOK", (const char *)&queryFormat.fmt + 3, 4u, "ui_nav CFG file for deferred ui_nav_test execution");
  DVARFLT_ATClient_ChanceRandomWalk = Dvar_RegisterFloat("LQOMKQTNRS", 0.0, 0.0, 1.0, 4u, "Percent chance to enter the random walk state.");
  DVARFLT_ATClient_ChanceCaptureObjective = Dvar_RegisterFloat("LTOMOOQPTP", 0.0, 0.0, 1.0, 4u, "Percent chance to select an objective to capture.");
  DVARFLT_ATClient_ChanceHuntEnemy = Dvar_RegisterFloat("PTQMKPTLR", 0.0, 0.0, 1.0, 4u, "Percent chance to enter the hunt enemy state.");
  DVARFLT_ATClient_ChanceDoNothing = Dvar_RegisterFloat("MTKNROMMMM", 0.0, 0.0, 1.0, 4u, "Percent chance to select ATClient NOP.");
  DVARFLT_ATClient_ChanceDriveAround = Dvar_RegisterFloat("LKQKSLNKKR", 0.0, 0.0, 1.0, 4u, "Percent chance to enter the drive around state.");
  DVARFLT_ATClient_ChancePerfTest = Dvar_RegisterFloat("LSMQLNSRLP", 0.0, 0.0, 1.0, 4u, "Percent chance to enter the performance grid walk state.");
  DVARFLT_ATClient_ChanceHuntRandomEnemy = Dvar_RegisterFloat("NSPMMOMSPO", 0.5, 0.0, 1.0, 4u, "Percent chance to select a random enemy to hunt.");
  DVARFLT_ATClient_ChanceHuntClosestEnemy = Dvar_RegisterFloat("LKKNPOSLNM", 0.5, 0.0, 1.0, 4u, "Percent chance to select the closest enemy to hunt.");
  DVARINT_ATClient_HuntEnemyDurationMS = Dvar_RegisterInt("POPMNRL", 20000, 0, 0x7FFFFFFF, 4u, "Max duration (in ms) of the hunt before exiting the state.");
  DVARBOOL_ATClient_SwitchToClosestEnemyOnDamageReceived = Dvar_RegisterBool("LSTRQLLMQL", 1, 4u, "Select the closest enemy as new target when receiving damage.");
  DVARINT_ATClient_HuntEnemyVehicleDurationMS = Dvar_RegisterInt("MOQKMNTLTT", 30000, 0, 0x7FFFFFFF, 4u, "Max duration (in ms) of the hunt before exiting the state.");
  DVARINT_ATClient_DriveAroundDurationMS = Dvar_RegisterInt("LMQPTMOSQP", 20000, 0, 0x7FFFFFFF, 4u, "Max duration (in ms) of the drive before exiting the state.");
  DVARINT_ATClient_EnterVehicleDurationMS = Dvar_RegisterInt("NRNPQQPKLK", 2000, 0, 0x7FFFFFFF, 4u, "Duration of the enter vehicle animation.");
  DVARFLT_ATClient_MaxDistSqToEnterVehicle = Dvar_RegisterFloat("NSQLMORKOT", 17400.0, 0.0, 2147483600.0, 4u, "Maximum distance squared to be from a vehicle before trying to enter it.");
  DVARBOOL_ATClient_Pathing = Dvar_RegisterBool("LPPOLSPPSN", 1, 4u, "Enable navpower and pathing system for ATClients.");
  DVARBOOL_ATClient_AllowPerfTestBehavior = Dvar_RegisterBool("NORLOQLMSS", 1, 4u, "Allow/enable performance probe behaviors/sampling (including teleporting, cooldown periods).");
  DVARFLT_ATClient_PerfClientMinX = Dvar_RegisterFloat("NNPOONQRM", -49000.0, -50000.0, 70000.0, 4u, "ATClient Unique ID - Min X coordinate");
  DVARFLT_ATClient_PerfClientMinY = Dvar_RegisterFloat("MOKSKQNLKP", -53500.0, -55000.0, 70000.0, 4u, "ATClient Unique ID - Min Y coordinate");
  DVARFLT_ATClient_PerfClientMaxX = Dvar_RegisterFloat("LSLSLOLOM", 69500.0, -50000.0, 70000.0, 4u, "ATClient Unique ID - Max X coordinate");
  DVARFLT_ATClient_PerfClientMaxY = Dvar_RegisterFloat("MMPOONNPRP", 65500.0, -55000.0, 70000.0, 4u, "ATClient Unique ID - Max Y coordinate");
  DVARFLT_ATClient_PerfClientMinZ = Dvar_RegisterFloat("LSPRLPMOM", 3800.0, -1000.0, 20000.0, 4u, "ATClient Unique ID - Min Z coordinate");
  DVARFLT_ATClient_PerfClientMaxZ = Dvar_RegisterFloat("NNLPOMPRM", 3800.0, -1000.0, 20000.0, 4u, "ATClient Unique ID - Max Z coordinate");
  DVARFLT_ATClient_PerfClientPaddingXY = Dvar_RegisterFloat("MSPOMNKRNS", 24576.0, 0.0, 24576.0, 4u, "Inward exclusion for out-of-bounds areas (max 3 tiles in)");
  DVARFLT_ATClient_PerfClientPitchMin = Dvar_RegisterFloat("MMQMNMTRKM", 0.0, -90.0, 90.0, 4u, "Min Pitch (degrees) angle for random pitch.");
  DVARFLT_ATClient_PerfClientPitchMax = Dvar_RegisterFloat("MKORTSORRQ", 0.0, -90.0, 90.0, 4u, "Max Pitch (degrees) angle for random pitch.");
  DVARINT_ATClient_PerfMode = Dvar_RegisterInt("NKPTQLQOSK", 0, 0, 3, 4u, "0: QA Reference Set. 1: Random in Bounds. 2: Grid in Bounds. 3: QA+Random.");
  DVARINT_ATClient_PerfModeAngles = Dvar_RegisterInt("TSRTLQLKM", 0, 0, 3, 4u, "0: QA Reference/Random Yaw. . 1: NSWE. 2: NSWE+UD. 3: QA+NSWE+UD.");
  DVARFLT_ATClient_PerfEpsImageMem = Dvar_RegisterFloat("NPKRMRPQTP", 0.5, 0.0, 10.0, 4u, "Permitted epsilon up/down variation at which we log performance.");
  DVARFLT_ATClient_PerfNavGridDeltaX = Dvar_RegisterFloat("MQLTQLSQQ", 1024.0, 0.0, 3.4028235e38, 4u, "Map grid distance to move in X on every sample.");
  DVARFLT_ATClient_PerfNavGridDeltaY = Dvar_RegisterFloat("MNNOPSLMTT", 1024.0, 0.0, 3.4028235e38, 4u, "Map grid distance to move in X on every sample.");
  DVARFLT_ATClient_PerfNavRadiusMax = Dvar_RegisterFloat("OKLNTTNMMQ", 128.0, 0.0, 3.4028235e38, 4u, "Navmesh search radius for random point selection (larger means slower).");
  DVARINT_ATClient_PerfProbeInitialWaitSeconds = Dvar_RegisterInt("MMQMKNLPLL", 20, 0, 0x7FFFFFFF, 4u, "Initial wait w/o sampling at beginning of probe.");
  DVARFLT_ATClient_PerfSampleTeleportHeightAdjustment = Dvar_RegisterFloat("OMLTTMOPOO", 32.0, 0.0, 3.4028235e38, 4u, "Height increment applied on each teleportation.");
  DVARFLT_ATClient_PerfSampleTeleport2dDeviation = Dvar_RegisterFloat("MMTQLTKRQL", 100.0, 0.0, 3.4028235e38, 4u, "Permissible XY deviation on each teleportation.");
  DVARINT_ATClient_PerfSampleTeleportWaitTimeMaxSeconds = Dvar_RegisterInt("SQKLQOSTR", 5, 1, 0x7FFFFFFF, 4u, "Maximum time to wait for teleport to succeed before retry.");
  DVARFLT_ATClient_PerfSampleEpsAtRestSpeed = Dvar_RegisterFloat("MMMSNTMPST", 0.1, 0.0, 3.4028235e38, 4u, "Velocity/speed threshold to determine client is at rest.");
  DVARINT_ATClient_PerfProbeSampleCountMax = Dvar_RegisterInt("NPMRMMPPKK", 0x7FFFFFFF, 0, 0x7FFFFFFF, 4u, "Clamp total number of (non-unique) positions/samples taken during probe/report");
  DVARINT_ATClient_PerfProbeSampleIndexStart = Dvar_RegisterInt("QLOLSQLSL", 0, 0, 0x7FFFFFFF, 4u, "For enumerated (e.g. QA) point sets, skip to this index for probe/report");
  DVARINT_ATClient_PerfProbeTimeMaxSeconds = Dvar_RegisterInt("MKQRSNLOMR", 43200, 0, 0x7FFFFFFF, 4u, "Total duration of probe/report if limited time window needed.");
  DVARINT_ATClient_PerfSampleTimeMaxSeconds = Dvar_RegisterInt("LMOSSSKMKN", 240, 0, 0x7FFFFFFF, 4u, "Clamp time to wait for equilibrium conditions at a given position.");
  DVARINT_ATClient_PerfSampleTimeMinSeconds = Dvar_RegisterInt("OLORLNSNSL", 1, 1, 0x7FFFFFFF, 4u, "Minimum time to wait at a given position before sampling - one second required.");
  DVARINT_ATClient_PerfSampleTimeNoChangeMaxSeconds = Dvar_RegisterInt("LSOKKSMPLM", 20, 1, 0x7FFFFFFF, 4u, "Maximum time to wait at a given position w/o change before ending sampling - one second required.");
  DVARINT_ATClient_MoveToTargetInputDurationMS = Dvar_RegisterInt("LTPQNLNTNT", 200, 0, 1000, 4u, "Input duration (in ms) when walking to a target position.");
  DVARFLT_ATClient_MoveToTargetInputScaleDistanceSq = Dvar_RegisterFloat("LOQQLRKMMQ", 10000.0, 0.0, 3.4028235e38, 4u, "Squared distance to target under which we will scale down the input.");
  DVARFLT_ATClient_MoveToTargetInputScaleAngle = Dvar_RegisterFloat("NQRRPTNTLK", 0.25, 0.0, 3.1415927, 4u, "Angle (in radians) to target under which we will scale down the input.");
  DVARBOOL_ATClient_MoveToTargetGenerateInput = Dvar_RegisterBool("LQPTTTNOTQ", 1, 4u, "Generate inputs to move to the target.");
  DVARFLT_ATClient_MoveToTargetInputRunDistanceSq = Dvar_RegisterFloat("NOPRMQOPQN", 100000.0, 0.0, 3.4028235e38, 4u, "Squared distance to target above which the client will run instead of walk.");
  DVARINT_ATClient_JumpWhenStuckForXMs = Dvar_RegisterInt("NOOLSLPLKR", 1000, 0, 0x7FFFFFFF, 4u, "The ATClient will try to jump/mantle if he's been stuck for X ms.");
  DVARFLT_ATClient_MinDistSqToReachDestination = Dvar_RegisterFloat("LSRPPPLLSM", 1000.0, 0.0, 3.4028235e38, 4u, "The destination is considered reached if within X squared distance.");
  DVARFLT_ATClient_NegligeableMovementSq = Dvar_RegisterFloat("NKQKMRSOOQ", 10.0, 0.0, 3.4028235e38, 4u, "The player is considered immobile if the squared distance travelled during his last move was less than X.");
  DVARINT_ATClient_CaptureObjectiveDurationMS = Dvar_RegisterInt("SKKOPLTRN", 20000, 0, 0x7FFFFFFF, 4u, "Max duration (in ms) when looking for an objective");
  DVARFLT_ATClient_CaptureObjectiveMaxDistanceSq = Dvar_RegisterFloat("MLMLRPPNMS", 100000.0, 0.0, 3.4028235e38, 4u, "Once within this squared distance of the objective, the player will stop moving and defend the position.");
  DVARBOOL_ATClient_CaptureObjectiveUseADS = Dvar_RegisterBool("MMPTQKOPPM", 1, 4u, "ADS when defending position.");
  DVARFLT_ATClient_ChanceCaptureRandomObjective = Dvar_RegisterFloat("PMMSPPOO", 0.5, 0.0, 1.0, 4u, "Percent chance to select a random objective to capture.");
  DVARFLT_ATClient_ChanceCaptureClosestObjective = Dvar_RegisterFloat("OKKNKQMNPK", 0.5, 0.0, 1.0, 4u, "Percent chance to select the closest objective to capture.");
  DVARINT_ATClient_DriveToTargetInputDurationMS = Dvar_RegisterInt("NLSLLLQPTS", 200, 0, 1000, 4u, "Input duration (in ms) when driving to a target position.");
  DVARFLT_ATClient_DriveToTargetInputScaleDistanceSq = Dvar_RegisterFloat("LROQONTKPT", 10000.0, 0.0, 3.4028235e38, 4u, "Squared distance to target under which we will scale down the input.");
  DVARBOOL_ATClient_DriveToTargetGenerateInput = Dvar_RegisterBool("NTNMTLOKP", 1, 4u, "Generate inputs to drive to the target.");
  DVARBOOL_ATClient_AllowOffensiveBehavior = Dvar_RegisterBool("NMKQTSMQNO", 1, 4u, "Allow behaviors like shooting, throwing grenades...");
  DVARFLT_ATClient_ChanceShootAtEnemiesInLoS = Dvar_RegisterFloat("MMOKSLNSOP", 1.0, 0.0, 1.0, 4u, "Percent chance to automatically shoot at enemies in line of sight.");
  DVARFLT_ATClient_ChanceHeal = Dvar_RegisterFloat("MROQNSTNOS", 0.5, 0.0, 1.0, 4u, "Percent chance to enter the heal state when wounded.");
  DVARFLT_ATClient_ChanceRandomThrowGrenade = Dvar_RegisterFloat("PMRQMMNLP", 0.0099999998, 0.0, 1.0, 4u, "Percent chance to enter the throw grenade state.");
  DVARFLT_ATClient_ChanceRandomShoot = Dvar_RegisterFloat("MKRMMKRPNQ", 0.0, 0.0, 1.0, 4u, "Percent chance to randomly enter the shoot state without an enemy in target.");
  DVARINT_ATClient_ShootDistanceSq = Dvar_RegisterInt("NLKKKOOO", 1000000, 0, 0x7FFFFFFF, 4u, "Max engagement distance squared.");
  DVARFLT_ATClient_ShootDotProduct = Dvar_RegisterFloat("MRTRNONOML", 0.97000003, 0.0, 1.0, 4u, "Shoot at enemy if aligned with direction.");
  DVARFLT_ATClient_MeleeDistanceSq = Dvar_RegisterFloat("LOLKQNRKNP", 1000.0, 0.0, 3.4028235e38, 4u, "Melee enemies within this distance squared.");
  DVARFLT_ATClient_ChanceAddCalloutMarker = Dvar_RegisterFloat("NKTSMKTQRP", 0.1, 0.0, 1.0, 4u, "Percent chance to randomly add a callout marker.");
  DVARINT_ATClient_CalloutMarkerCooldown = Dvar_RegisterInt("LKOMLKKRLN", 10000, 0, 0x7FFFFFFF, 4u, "Time in ms before another callout marker can be added by the player.");
  DVARFLT_ATClient_ChanceAimAtEnemy = Dvar_RegisterFloat("LSKPSNLRPS", 0.5, 0.0, 1.0, 4u, "Percent chance to enter the aim at enemy state.");
  DVARFLT_ATClient_ChanceKillstreak = Dvar_RegisterFloat("MMNNLLORTQ", 0.0099999998, 0.0, 1.0, 4u, "Percent chance to call in a random killstreak.");
  DVARFLT_ATClient_ChanceQuitGame = Dvar_RegisterFloat("MLKTOKKRLL", 0.0, 0.0, 1.0, 4u, "Percent chance to quit during a match.");
  DVARFLT_ATClient_ChanceHostQuitGame = Dvar_RegisterFloat("LTLKRNKNRT", 0.0, 0.0, 1.0, 4u, "Percent chance to quit during a match if you're the host.");
  DVARFLT_ATClient_ChanceSendInvite = Dvar_RegisterFloat("NRTKRMRMML", 0.0, 0.0, 1.0, 4u, "Percent chance to send an invite during a match. Use ATClient_FriendToInvite to specify invitee.");
  DVARSTR_ATClient_FriendToInvite = Dvar_RegisterString("NPRLMQRMQM", (const char *)&queryFormat.fmt + 3, 4u, "When ATClient_ChanceSendInvite is non-zero, specify a partial/complete name of player to invite to the match. Empty string will choose a random victim.");
  DVARFLT_ATClient_RandomWalkTimeMinimum = Dvar_RegisterFloat("NSKKOPRRT", 1.0, 0.0, 10.0, 4u, "Minimum time to spend doing this random walk movement.");
  DVARFLT_ATClient_RandomWalkTimeDurationRange = Dvar_RegisterFloat("LKMPSTMQMS", 4.0, 0.0, 30.0, 4u, "Maximum limit for range to be added to minimum time (min + (rand*range)).");
  DVARFLT_ATClient_AimAtTimeMinimum = Dvar_RegisterFloat("NNSQSNQPMT", 1.0, 0.0, 10.0, 4u, "Minimum time to spend aiming at an enemy.");
  DVARFLT_ATClient_AimAtTimeDurationRange = Dvar_RegisterFloat("LQQTPRKKPO", 10.0, 0.0, 30.0, 4u, "Maximum limit for range to be added to minimum time (min + (rand*range)).");
  DVARINT_ATClient_ClassSelect = Dvar_RegisterInt("LSRTSKQQPM", -1, -1, 14, 4u, "The loadout class index to be selected. Random selection if set to -1.");
  DVARINT_ATClient_LoadoutCount = Dvar_RegisterInt("MKOLQNNTSP", 5, 0, 14, 4u, "The number of loadouts to select from.");
  DVARINT_ATClient_TeamSelect = Dvar_RegisterInt("MRNRMNNPKN", 2, 0, 4, 4u, "The team index to be selected. 0 = Axis / 1 = Allies / 2 = Auto / 3 = Spectate / 4 = Caster.");
  DVARINT_ATClient_BRInfil = Dvar_RegisterInt("LTTMOOMSLO", 3, 0, 3, 4u, "Infil team to choose on headless client");
  DVARFLT_ATClient_BRInfilWaitMin = Dvar_RegisterFloat("MLMOTTMPKN", 20.0, 0.0, 100.0, 4u, "Minimum time to wait before deploying");
  DVARFLT_ATClient_BRInfilWaitMax = Dvar_RegisterFloat("LNNSNTPPTN", 60.0, 20.0, 150.0, 4u, "Maximum time to wait before deploying.");
  DVARFLT_ATClient_BRInfilPctMin = Dvar_RegisterFloat("MNQQNLMMMN", 0.2, 0.0, 1.0, 4u, "Minimum percentage of infil length before deploying.");
  DVARFLT_ATClient_BRInfilPctMax = Dvar_RegisterFloat("MKQPTKTSPR", 0.80000001, 0.0, 1.0, 4u, "Maximum percentage of infil length before deploying.");
  DVARBOOL_ATClient_DebugPrint = Dvar_RegisterBool("MQSNTRKKSM", 0, 0, "Enable debug output from the automated client.");
  DVARBOOL_ATClient_DebugPrintTransitions = Dvar_RegisterBool("NLMOQQQRKM", 0, 0, "Print states everytime a transition happen.");
  DVARFLT_ATClient_DebugStateSendRate = Dvar_RegisterFloat("MMLOTOLRRO", 1.0, 0.1, 60.0, 4u, "Time in seconds between automatic state updates to send");
  DVARINT_ATClient_PlaylistId = Dvar_RegisterInt("MSNSLQQKTR", 0, 0, 0x7FFFFFFF, 0, "The playlist id from the playlist file, instead of having to know the mapping");
  DVARINT_ATClient_OnlineFenceDelay = Dvar_RegisterInt("NTOMMMLQQN", 0, 0, 0x7FFFFFFF, 0, "Artificial delay before online fence is passed, used when launching many instances on the same machine (see launch_headless.py)");
}

/*
==============
ATClient_ResetAutoSendTime
==============
*/
void ATClient_ResetAutoSendTime(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 

  v1 = DVARFLT_ATClient_DebugStateSendRate;
  v2 = localClientNum;
  if ( !DVARFLT_ATClient_DebugStateSendRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DebugStateSendRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  s_debugSendTimeRemaining[v2] = (int)(float)(v1->current.value * 1000.0);
}

/*
==============
ATClient_SendState
==============
*/
void ATClient_SendState(LocalClientNum_t localClientNum)
{
  int v1; 
  __int64 v2; 
  int i; 
  int v4; 
  CmdText *v5; 
  int v6; 
  __int64 cmdsize; 
  int v8; 
  scrContext_t *v9; 
  unsigned int outTabCount[2]; 
  char dest[160]; 
  char buffer[128]; 

  v1 = 0;
  v2 = localClientNum;
  if ( s_initialized )
  {
    *(_QWORD *)outTabCount = 0i64;
    for ( i = 0; i < 2; ++i )
      v1 += ATClient_StateMachine::PrintState(&s_autoTestClientSM, (LocalClientNum_t)i, outTabCount, &buffer[v1], 128 - v1, 0);
  }
  v4 = 127;
  if ( v1 < 127 )
    v4 = v1;
  if ( (unsigned __int64)v4 >= 0x80 )
  {
    j___report_rangecheckfailure();
    JUMPOUT(0x14021F2C3i64);
  }
  buffer[v4] = 0;
  Com_sprintf(dest, 0xA0ui64, "ATClientState \"%s\"\n", buffer);
  v5 = &s_cmd_textArray[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v6 = strlen_noncrt(dest);
  cmdsize = v5->cmdsize;
  v8 = v6;
  if ( (int)cmdsize + v6 < v5->maxsize )
  {
    memcpy_noncrt(&v5->data[cmdsize], dest, v6 + 1);
    v5->cmdsize += v8;
    v9 = ScriptContext_Server();
    Scr_MonitorCommand(v9, dest);
  }
  else
  {
    Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", dest);
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
ATClient_Update
==============
*/
void ATClient_Update(int msec)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  int i; 
  int j; 
  const dvar_t *v6; 
  int integer; 
  int *v8; 
  int k; 
  const dvar_t *v10; 
  int v11; 
  int m; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  __int64 outTabCount; 

  v1 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = DVARBOOL_ATClient_Enabled;
    if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      if ( !s_initialized )
      {
        Cmd_AddCommandInternal("ATClient_PrintState", ATClient_PrintStateCmd, &allocedCmd);
        Cmd_AddCommandInternal("ATClient_DevHost_SendState", ATClient_DevHost_SendState, &stru_1489B0FE8);
        for ( i = 0; i < 2; ++i )
          ATClient_ResetBlackboard((const LocalClientNum_t)i);
        ATClient_StateMachine::Initialize(&s_autoTestClientSM, 2u);
        ATClient_Init_PreLobby();
        ATClient_Init_InGame();
        for ( j = 0; j < 2; ++j )
          ATClient_StateMachine::Start(&s_autoTestClientSM, (const LocalClientNum_t)j, 0);
        s_initialized = 1;
      }
    }
    else if ( !s_initialized )
    {
      return;
    }
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v6 = DVARINT_ATClient_PlaylistId;
      if ( !DVARINT_ATClient_PlaylistId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PlaylistId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      integer = v6->current.integer;
      if ( !Com_FrontEnd_IsInFrontEnd() || integer )
      {
        v8 = s_debugSendTimeRemaining;
        for ( k = 0; k < 2; ++k )
        {
          if ( CL_Mgr_IsClientActive((LocalClientNum_t)k) && ATClient_StateMachine::Update(&s_autoTestClientSM, (LocalClientNum_t)k, msec) )
          {
            v10 = DVARBOOL_ATClient_DebugPrintTransitions;
            if ( !DVARBOOL_ATClient_DebugPrintTransitions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DebugPrintTransitions") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v10);
            if ( v10->current.enabled )
            {
              v11 = 0;
              if ( s_initialized )
              {
                Com_Printf(14, "\n\n---= ATClient State Machine State =---\n\n");
                outTabCount = 0i64;
                for ( m = 0; m < 2; ++m )
                  v11 += ATClient_StateMachine::PrintState(&s_autoTestClientSM, (LocalClientNum_t)m, (unsigned int *)&outTabCount, (char *const)v11, -v11, 1);
              }
            }
            v13 = DVARBOOL_ATClient_RemoteDebug;
            if ( !DVARBOOL_ATClient_RemoteDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_RemoteDebug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v13);
            if ( v13->current.enabled )
            {
              ATClient_SendState((LocalClientNum_t)k);
              ATClient_ResetAutoSendTime((LocalClientNum_t)k);
            }
            if ( ATClient_DevHost_ShouldSendStates() )
              ATClient_DevHost_SendState();
            v14 = DVARBOOL_ATClient_RemoteDebug;
            if ( !DVARBOOL_ATClient_RemoteDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_RemoteDebug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v14);
            if ( v14->current.enabled )
            {
              *v8 -= msec;
              if ( *v8 <= 0 )
              {
                ATClient_SendState((LocalClientNum_t)k);
                ATClient_ResetAutoSendTime((LocalClientNum_t)k);
              }
            }
          }
          ++v8;
        }
      }
    }
  }
}

