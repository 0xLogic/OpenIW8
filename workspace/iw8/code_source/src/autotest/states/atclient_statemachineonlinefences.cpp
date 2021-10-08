/*
==============
ATClient_StateMachineOnlineFencesEnter
==============
*/

void __fastcall ATClient_StateMachineOnlineFencesEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineOnlineFencesEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineOnlineFencesTransition
==============
*/

bool __fastcall ATClient_StateMachineOnlineFencesTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineOnlineFencesTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineOnlineFencesEnter
==============
*/
void ATClient_StateMachineOnlineFencesEnter(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int8 ActiveGameMode; 
  int Int_Internal_DebugName; 
  int v4; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  Live_SyncOnlineDataFence_Request(ControllerFromClient, ActiveGameMode, 0);
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ATClient_OnlineFenceDelay, "ATClient_OnlineFenceDelay");
  v4 = Int_Internal_DebugName;
  if ( Int_Internal_DebugName > 0 )
    Com_Printf(16, "Added artificial delay of %i ms to online fences\n", (unsigned int)Int_Internal_DebugName);
  s_timestampBeforeTransitionAllowed = v4 + Sys_Milliseconds();
}

/*
==============
ATClient_StateMachineOnlineFencesTransition
==============
*/
char ATClient_StateMachineOnlineFencesTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  int ControllerFromClient; 
  unsigned __int8 ActiveGameMode; 

  *outNewState = -2;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( (unsigned __int8)Live_SyncOnlineDataFence_GetState(ControllerFromClient, ActiveGameMode) != 3 || Sys_Milliseconds() < s_timestampBeforeTransitionAllowed )
    return 0;
  *outNewState = 1;
  return 1;
}

