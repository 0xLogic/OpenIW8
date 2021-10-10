/*
==============
ATClient_StateMachineInGameChooseActionTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameChooseActionTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameChooseActionTransition
==============
*/
bool ATClient_StateMachineInGameChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool result; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 

  *outNewState = -2;
  if ( LUI_IsMenuOpenAndVisible(localClientNum, "???") )
  {
    *outNewState = 9;
    return 1;
  }
  if ( LUI_IsMenuOpenAndVisible(localClientNum, "LoadoutSelect") )
  {
    *outNewState = 2;
    return 1;
  }
  if ( LUI_IsMenuOpenAndVisible(localClientNum, "TeamSelectMenu") )
  {
    *outNewState = 1;
    return 1;
  }
  if ( ATClient_IsLocalClientInInfil(localClientNum) )
  {
    *outNewState = 3;
    return 1;
  }
  if ( Lobby_AreWeHost() )
  {
    v5 = DVARFLT_ATClient_ChanceHostQuitGame;
    if ( !DVARFLT_ATClient_ChanceHostQuitGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHostQuitGame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    if ( (float)((float)rand() * 0.000030518509) < value )
      goto LABEL_19;
  }
  v7 = DVARFLT_ATClient_ChanceQuitGame;
  if ( !DVARFLT_ATClient_ChanceQuitGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceQuitGame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  if ( (float)((float)rand() * 0.000030518509) < v8 )
  {
LABEL_19:
    *outNewState = 6;
    return 1;
  }
  v9 = DVARFLT_ATClient_ChanceSendInvite;
  if ( !DVARFLT_ATClient_ChanceSendInvite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceSendInvite") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  if ( (float)((float)rand() * 0.000030518509) < v10 )
  {
    *outNewState = 7;
    return 1;
  }
  result = SelectNewActionForGameType(localClientNum, outNewState);
  if ( result )
    return 1;
  return result;
}

/*
==============
SelectNewActionForGameType
==============
*/
char SelectNewActionForGameType(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v3; 
  __int64 v4; 
  double Float_Internal_DebugName; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v22; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v22 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v22) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v4 = ((__int64 (*)(void))ClActiveClient::ms_activeClients[v3]->GetPlayerState)();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v4 + 20), ACTIVE, 0x20u) || *(_DWORD *)(v4 + 12) == 5 )
    return 0;
  if ( ATClient_IsLocalClientInVehicle((const LocalClientNum_t)v3) )
  {
    *outNewState = 12;
    return 1;
  }
  if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && ATClient_IsLocalClientSkydiving((const LocalClientNum_t)v3) )
  {
    *outNewState = 5;
    return 1;
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceHuntEnemy, "ATClient_ChanceHuntEnemy");
  v7 = *(float *)&Float_Internal_DebugName;
  v8 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceRandomWalk, "ATClient_ChanceRandomWalk");
  v9 = *(float *)&v8;
  v10 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceDriveAround, "ATClient_ChanceDriveAround");
  v11 = *(float *)&v10;
  v12 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceCaptureObjective, "ATClient_ChanceCaptureObjective");
  v13 = *(float *)&v12;
  v14 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChancePerfTest, "ATClient_ChancePerfTest");
  v15 = v9 + v7;
  v16 = (float)(v9 + v7) + v11;
  v17 = v16 + v13;
  v18 = (float)(v16 + v13) + *(float *)&v14;
  v19 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceDoNothing, "ATClient_ChanceDoNothing");
  if ( (float)(*(float *)&v19 + v18) <= 0.0 )
    return 0;
  v20 = (float)((float)rand() * (float)(*(float *)&v19 + v18)) * 0.000030518509;
  if ( v20 < v7 )
  {
    *outNewState = 10;
    return 1;
  }
  if ( v20 < v15 )
  {
    *outNewState = 8;
    return 1;
  }
  if ( v20 < v16 )
  {
    *outNewState = 11;
    return 1;
  }
  if ( v20 < v17 )
  {
    *outNewState = 13;
    return 1;
  }
  if ( v20 >= v18 )
    return 0;
  *outNewState = 14;
  return 1;
}

