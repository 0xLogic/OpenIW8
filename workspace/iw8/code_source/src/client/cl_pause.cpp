/*
==============
CL_Pause_UnpauseGame
==============
*/

void CL_Pause_UnpauseGame(void)
{
  ?CL_Pause_UnpauseGame@@YAXXZ();
}

/*
==============
CL_Pause_UnpauseGameForReason
==============
*/

void __fastcall CL_Pause_UnpauseGameForReason(CLPauseReason pauseReason)
{
  ?CL_Pause_UnpauseGameForReason@@YAXW4CLPauseReason@@@Z(pauseReason);
}

/*
==============
CL_Pause_GetPauseReason
==============
*/

CLPauseReason __fastcall CL_Pause_GetPauseReason()
{
  return ?CL_Pause_GetPauseReason@@YA?AW4CLPauseReason@@XZ();
}

/*
==============
CL_Pause_IsPendingPause
==============
*/

bool __fastcall CL_Pause_IsPendingPause()
{
  return ?CL_Pause_IsPendingPause@@YA_NXZ();
}

/*
==============
CL_Pause_IsPausedForReason
==============
*/

bool __fastcall CL_Pause_IsPausedForReason(CLPauseReason pauseReason)
{
  return ?CL_Pause_IsPausedForReason@@YA_NW4CLPauseReason@@@Z(pauseReason);
}

/*
==============
CL_Pause_IsGamePaused
==============
*/

bool __fastcall CL_Pause_IsGamePaused()
{
  return ?CL_Pause_IsGamePaused@@YA_NXZ();
}

/*
==============
CL_Pause_UpdatePauseState
==============
*/

void CL_Pause_UpdatePauseState(void)
{
  ?CL_Pause_UpdatePauseState@@YAXXZ();
}

/*
==============
CL_Pause_SetPauseReason
==============
*/

void __fastcall CL_Pause_SetPauseReason(CLPauseReason pauseReason)
{
  ?CL_Pause_SetPauseReason@@YAXW4CLPauseReason@@@Z(pauseReason);
}

/*
==============
CL_Pause_GetPauseReason
==============
*/
__int64 CL_Pause_GetPauseReason()
{
  return (unsigned int)cl_pause_reason;
}

/*
==============
CL_Pause_IsGamePaused
==============
*/
_BOOL8 CL_Pause_IsGamePaused()
{
  return isGamePaused;
}

/*
==============
CL_Pause_IsPausedForReason
==============
*/
bool CL_Pause_IsPausedForReason(CLPauseReason pauseReason)
{
  return (pauseReason & cl_pause_reason) != 0;
}

/*
==============
CL_Pause_IsPendingPause
==============
*/
bool CL_Pause_IsPendingPause()
{
  return cl_pause_reason != NONE;
}

/*
==============
CL_Pause_SetPauseReason
==============
*/
void CL_Pause_SetPauseReason(CLPauseReason pauseReason)
{
  cl_pause_reason = pauseReason;
}

/*
==============
CL_Pause_UnpauseGame
==============
*/
void CL_Pause_UnpauseGame(void)
{
  cl_pause_reason = NONE;
  isGamePaused = 0;
  Dvar_SetInt_Internal(cl_paused, 0);
}

/*
==============
CL_Pause_UnpauseGameForReason
==============
*/
void CL_Pause_UnpauseGameForReason(CLPauseReason pauseReason)
{
  cl_pause_reason &= ~pauseReason;
}

/*
==============
CL_Pause_UpdatePauseState
==============
*/
void CL_Pause_UpdatePauseState(void)
{
  isGamePaused = cl_pause_reason != NONE;
  if ( cl_paused )
    isGamePaused = cl_pause_reason || cl_paused->current.integer;
}

