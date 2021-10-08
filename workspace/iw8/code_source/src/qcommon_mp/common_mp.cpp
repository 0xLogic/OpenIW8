/*
==============
Com_MP_SetShouldLocalServerPause
==============
*/

void __fastcall Com_MP_SetShouldLocalServerPause(bool value)
{
  ?Com_MP_SetShouldLocalServerPause@@YAX_N@Z(value);
}

/*
==============
Com_MP_UnregisterDvars
==============
*/

void Com_MP_UnregisterDvars(void)
{
  ?Com_MP_UnregisterDvars@@YAXXZ();
}

/*
==============
Com_MP_RegisterDvars
==============
*/

void Com_MP_RegisterDvars(void)
{
  ?Com_MP_RegisterDvars@@YAXXZ();
}

/*
==============
Com_MP_GetShouldClientPause
==============
*/

bool __fastcall Com_MP_GetShouldClientPause()
{
  return ?Com_MP_GetShouldClientPause@@YA_NXZ();
}

/*
==============
Com_MP_SetLocalServerPause
==============
*/

void __fastcall Com_MP_SetLocalServerPause(bool value)
{
  ?Com_MP_SetLocalServerPause@@YAX_N@Z(value);
}

/*
==============
Com_MP_GetIsLocalServerPaused
==============
*/

bool __fastcall Com_MP_GetIsLocalServerPaused()
{
  return ?Com_MP_GetIsLocalServerPaused@@YA_NXZ();
}

/*
==============
Com_MP_GetIsLocalServerPaused
==============
*/
bool Com_MP_GetIsLocalServerPaused()
{
  return endgame_called && !endgame_called->current.integer && allow_local_host_pause && allow_local_host_pause->current.integer && s_pauseServer && Com_IsGameLocalServerRunning();
}

/*
==============
Com_MP_GetShouldClientPause
==============
*/
bool Com_MP_GetShouldClientPause()
{
  return endgame_called && !endgame_called->current.integer && CL_Pause_IsGamePaused();
}

/*
==============
Com_MP_RegisterDvars
==============
*/
void Com_MP_RegisterDvars(void)
{
  cl_paused = Dvar_RegisterInt("RKLNRNMMN", 0, 0, 1, 0, "[MP] Pause the client");
  sv_paused = Dvar_RegisterInt("OLSRQKSONR", 0, 0, 2, 0x2000u, "[MP] Pause the server");
  endgame_called = Dvar_RegisterInt("NOOMQPMKTM", 0, 0, 2, 0, "[MP] Has endgame been called.");
  allow_local_host_pause = Dvar_RegisterInt("LNNPLTMRSO", 1, 0, 2, 0, "[MP] Allow pausing the local server");
  com_maxfps = Dvar_RegisterInt("OMKRTPPKKQ", 60, 0, 1000, 0, "[MP] Cap frames per second");
}

/*
==============
Com_MP_SetLocalServerPause
==============
*/
void Com_MP_SetLocalServerPause(bool value)
{
  ;
}

/*
==============
Com_MP_SetShouldLocalServerPause
==============
*/
void Com_MP_SetShouldLocalServerPause(bool value)
{
  bool v2; 

  s_pauseServer = 0;
  if ( endgame_called && !endgame_called->current.integer && allow_local_host_pause )
  {
    v2 = 0;
    if ( allow_local_host_pause->current.integer )
      v2 = value;
    s_pauseServer = v2;
  }
}

/*
==============
Com_MP_UnregisterDvars
==============
*/
void Com_MP_UnregisterDvars(void)
{
  cl_paused = Dvar_Deregister(cl_paused);
  sv_paused = Dvar_Deregister(sv_paused);
  endgame_called = Dvar_Deregister(endgame_called);
  allow_local_host_pause = Dvar_Deregister(allow_local_host_pause);
  com_maxfps = Dvar_Deregister(com_maxfps);
}

