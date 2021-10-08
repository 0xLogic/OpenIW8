/*
==============
ATClient_StateMachineKillstreakUpdate
==============
*/

void __fastcall ATClient_StateMachineKillstreakUpdate(LocalClientNum_t localClientNum, int msec)
{
  ?ATClient_StateMachineKillstreakUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineKillstreakEnter
==============
*/

void __fastcall ATClient_StateMachineKillstreakEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineKillstreakEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineKillstreakTransition
==============
*/

bool __fastcall ATClient_StateMachineKillstreakTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineKillstreakTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineKillstreakEnter
==============
*/
void ATClient_StateMachineKillstreakEnter(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  cg_t *v3; 
  int v4; 
  int v5; 
  const Killstreak *v6; 
  __int64 v7; 
  const char *v8; 
  int ControllerFromClient; 
  int duration; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int *v17; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinecallinkillstreak.cpp", 306, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v15) )
      __debugbreak();
    LODWORD(v16) = 2;
    LODWORD(v13) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v16) )
      __debugbreak();
  }
  if ( (int)v1 < cg_t::ms_allocatedCount )
  {
    v2 = Sys_Milliseconds();
    s_killstreakIndex[v1] = -1;
    v17 = &s_previousKillstreakEndTime[v1];
    if ( *v17 <= v2 )
    {
      if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
      {
        LODWORD(v14) = cg_t::ms_allocatedCount;
        LODWORD(v11) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v11, v14) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[v1] )
      {
        LODWORD(v14) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v14) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v14) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v14) )
          __debugbreak();
      }
      v3 = cg_t::ms_cgArray[v1];
      if ( v3->predictedPlayerState.pm_type != 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v3->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
      {
        v4 = I_irand(0, 16);
        v5 = 0;
        v6 = &s_killstreaks[v4];
        if ( v6->numCommands > 0 )
        {
          v7 = 0i64;
          do
          {
            v8 = v6->commands[v7];
            ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
            Cmd_ExecuteSingleCommand_Internal((LocalClientNum_t)v1, ControllerFromClient, v8, 0);
            ++v5;
            ++v7;
          }
          while ( v5 < v6->numCommands );
        }
        CL_Input_AddAutomatedSequence((LocalClientNum_t)v1, v6->records, v6->numRecords);
        duration = v6->duration;
        s_killstreakIndex[v1] = v4;
        *v17 = v2 + duration;
      }
    }
  }
}

/*
==============
ATClient_StateMachineKillstreakTransition
==============
*/
char ATClient_StateMachineKillstreakTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_killstreakIndex[localClientNum] != -1 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineKillstreakUpdate
==============
*/
void ATClient_StateMachineKillstreakUpdate(LocalClientNum_t localClientNum, int msec)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( !CL_Input_AutomatedSequenceRunning(localClientNum) )
    s_killstreakIndex[v2] = -1;
}

