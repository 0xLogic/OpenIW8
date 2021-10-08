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
  __int64 v3; 
  __int64 v5; 
  __int64 migrationState; 
  const char *v7; 
  __int64 v18; 

  v3 = client;
  if ( (unsigned int)client >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", client, 2) )
    __debugbreak();
  if ( (unsigned int)state > CMSTATE_OLDHOSTLEAVING && clientUIActives[v3].migrationState == CMSTATE_INACTIVE )
  {
    LODWORD(v18) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 268, ASSERT_TYPE_ASSERT, "( ( (state == CMSTATE_INACTIVE) || (state == CMSTATE_OLDHOSTLEAVING) || (clientUIActives[client].migrationState != CMSTATE_INACTIVE) ) )", "( clientUIActives[client].migrationState ) = %i", v18) )
      __debugbreak();
  }
  v5 = v3;
  migrationState = clientUIActives[v3].migrationState;
  if ( (_DWORD)migrationState != state )
  {
    if ( (_DWORD)migrationState )
    {
      v7 = UI_SafeTranslateString(s_stateStrings[migrationState]);
      Sys_Milliseconds();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3a83126f
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [%s]\n", *(double *)&_XMM2, v7);
      if ( state == CMSTATE_INACTIVE )
      {
        Sys_Milliseconds();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vcvtss2sd xmm2, xmm1, xmm1
          vmovq   r8, xmm2
        }
        Com_Printf(25, "^6[MIGRATION PROFILE] - %.2f seconds [TOTAL]\n", *(double *)&_XMM2);
      }
      lastProfTime = Sys_Milliseconds();
    }
    else
    {
      lastProfTime = Sys_Milliseconds();
      startTime = Sys_Milliseconds();
    }
  }
  clientUIActives[v5].migrationState = state;
}

