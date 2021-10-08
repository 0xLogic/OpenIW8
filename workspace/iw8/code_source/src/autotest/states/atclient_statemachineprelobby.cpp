/*
==============
ATClient_StateMachinePreLobbyReset
==============
*/

void __fastcall ATClient_StateMachinePreLobbyReset(const LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ?ATClient_StateMachinePreLobbyReset@@YAXW4LocalClientNum_t@@W4errorParm_t@@@Z(localClientNum, errorcode);
}

/*
==============
ATClient_StateMachinePreLobbyTransition
==============
*/

bool __fastcall ATClient_StateMachinePreLobbyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachinePreLobbyTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachinePreLobbyReset
==============
*/
void ATClient_StateMachinePreLobbyReset(const LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ;
}

/*
==============
ATClient_StateMachinePreLobbyTransition
==============
*/
char ATClient_StateMachinePreLobbyTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  v2 = localClientNum;
  *outNewState = -2;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
    LODWORD(v10) = 2;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v10) )
      __debugbreak();
  }
  if ( clientUIActives[v2].frontEndSceneState[0] )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState != CA_ACTIVE )
    return 0;
  *outNewState = 1;
  return 1;
}

