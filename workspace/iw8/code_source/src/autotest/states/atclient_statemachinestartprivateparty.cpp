/*
==============
ATClient_StateMachineStartPrivatePartyUpdate
==============
*/

void __fastcall ATClient_StateMachineStartPrivatePartyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineStartPrivatePartyUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineStartPrivatePartyTransition
==============
*/

bool __fastcall ATClient_StateMachineStartPrivatePartyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineStartPrivatePartyTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineStartPrivatePartyTransition
==============
*/
bool ATClient_StateMachineStartPrivatePartyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool result; 

  *outNewState = -2;
  if ( !Party_IsRunning(&g_partyData) || !g_partyData.inParty )
    return 0;
  if ( CL_DevJoin_IsEnabled() )
  {
    CL_DevJoin_Start();
    result = 1;
    *outNewState = 3;
  }
  else
  {
    *outNewState = 2;
    return 1;
  }
  return result;
}

/*
==============
ATClient_StateMachineStartPrivatePartyUpdate
==============
*/
void ATClient_StateMachineStartPrivatePartyUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  int ControllerFromClient; 

  if ( !Party_IsRunning(&g_partyData) || !g_partyData.inParty )
  {
    s_retryDelayRemaining_0 -= msec;
    if ( s_retryDelayRemaining_0 <= 0 )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      Cbuf_ExecuteBufferInternal(localClientNum, ControllerFromClient, "xstartprivateparty", 0, 0);
      s_retryDelayRemaining_0 = 3000;
    }
  }
}

