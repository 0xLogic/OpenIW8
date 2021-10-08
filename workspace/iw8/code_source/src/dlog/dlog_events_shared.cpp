/*
==============
Dlog_ShouldRecordPerformance
==============
*/

bool __fastcall Dlog_ShouldRecordPerformance(LocalClientNum_t localClientNum)
{
  return ?Dlog_ShouldRecordPerformance@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Dlog_ShouldRecordPerformance
==============
*/
bool Dlog_ShouldRecordPerformance(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v1 = DVARBOOL_dlog_perf_output;
  v2 = localClientNum;
  if ( !DVARBOOL_dlog_perf_output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_perf_output") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled || !CL_Mgr_IsClientActive((LocalClientNum_t)v2) )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = 2;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (int)v2 >= cg_t::ms_allocatedCount || Com_FrontEnd_IsInFrontEnd() || R_Cinematic_IsStartedOrPendingStart() && DVARBOOL_bg_cinematicFullscreen && Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_cinematicFullscreen, "bg_cinematicFullscreen") )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = 2;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState != CA_ACTIVE )
    return 0;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF )
    return 1;
  if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v5 = cl_maxLocalClients;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  return ClActiveClient::ms_activeClients[v2][1].mouseDx[1] != 6 && !CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)v2) && CG_MainMP_GetPostGameState((const LocalClientNum_t)v2) == UI_POST_GAME_INACTIVE;
}

