/*
==============
CL_GetLocalClientMigrationState
==============
*/

clientMigState_t __fastcall CL_GetLocalClientMigrationState(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientMigrationState@@YA?AW4clientMigState_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_SetLocalClientMigrationState
==============
*/

void __fastcall CL_SetLocalClientMigrationState(int client, clientMigState_t state)
{
  ?CL_SetLocalClientMigrationState@@YAXHW4clientMigState_t@@@Z(client, state);
}

/*
==============
CL_GetLocalClientMigrationState
==============
*/
__int64 CL_GetLocalClientMigrationState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)clientUIActives[v1].migrationState;
}

/*
==============
CL_SetLocalClientMigrationState
==============
*/
void CL_SetLocalClientMigrationState(int client, clientMigState_t state)
{
  __int64 v2; 
  __int64 v4; 
  __int64 migrationState; 
  const char *v6; 
  double v7; 
  double v8; 
  __int64 v9; 

  v2 = client;
  if ( (unsigned int)client >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", client, 2) )
    __debugbreak();
  if ( (unsigned int)state > CMSTATE_OLDHOSTLEAVING && clientUIActives[v2].migrationState == CMSTATE_INACTIVE )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 268, ASSERT_TYPE_ASSERT, "( ( (state == CMSTATE_INACTIVE) || (state == CMSTATE_OLDHOSTLEAVING) || (clientUIActives[client].migrationState != CMSTATE_INACTIVE) ) )", "( clientUIActives[client].migrationState ) = %i", v9) )
      __debugbreak();
  }
  v4 = v2;
  migrationState = clientUIActives[v2].migrationState;
  if ( (_DWORD)migrationState != state )
  {
    if ( (_DWORD)migrationState )
    {
      v6 = UI_SafeTranslateString(s_stateStrings[migrationState]);
      v7 = (float)((float)(Sys_Milliseconds() - lastProfTime) * 0.001);
      Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [%s]\n", v7, v6);
      if ( state == CMSTATE_INACTIVE )
      {
        v8 = (float)((float)(Sys_Milliseconds() - startTime) * 0.001);
        Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [TOTAL]\n", v8);
      }
      lastProfTime = Sys_Milliseconds();
    }
    else
    {
      lastProfTime = Sys_Milliseconds();
      startTime = Sys_Milliseconds();
    }
  }
  clientUIActives[v4].migrationState = state;
}

