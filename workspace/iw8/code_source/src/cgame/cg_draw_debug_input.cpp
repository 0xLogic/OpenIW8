/*
==============
CG_DrawDebugInput_IsButtonDown
==============
*/

bool __fastcall CG_DrawDebugInput_IsButtonDown(const DrawDebugInputButton button)
{
  return ?CG_DrawDebugInput_IsButtonDown@@YA_NW4DrawDebugInputButton@@@Z(button);
}

/*
==============
CG_DrawDebugInput_GetAxis
==============
*/

double __fastcall CG_DrawDebugInput_GetAxis(const DrawDebugInputAxis axis)
{
  double result; 

  *(float *)&result = ?CG_DrawDebugInput_GetAxis@@YAMW4DrawDebugInputAxis@@@Z(axis);
  return result;
}

/*
==============
CG_DrawDebugInput_Reset
==============
*/

void __fastcall CG_DrawDebugInput_Reset(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugInput_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugInput_Update
==============
*/

void __fastcall CG_DrawDebugInput_Update(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugInput_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugInput_IsButtonReleased
==============
*/

bool __fastcall CG_DrawDebugInput_IsButtonReleased(const DrawDebugInputButton button)
{
  return ?CG_DrawDebugInput_IsButtonReleased@@YA_NW4DrawDebugInputButton@@@Z(button);
}

/*
==============
CG_DrawDebugInput_IsButtonPressed
==============
*/

bool __fastcall CG_DrawDebugInput_IsButtonPressed(const DrawDebugInputButton button)
{
  return ?CG_DrawDebugInput_IsButtonPressed@@YA_NW4DrawDebugInputButton@@@Z(button);
}

/*
==============
CG_DrawDebugInput_GetAxis
==============
*/
float CG_DrawDebugInput_GetAxis(const DrawDebugInputAxis axis)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = axis;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 165, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 4 )
  {
    v4 = 4;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 166, ASSERT_TYPE_ASSERT, "(unsigned)( axis ) < (unsigned)( DRAW_DEBUG_INPUT_AXIS_COUNT )", "axis doesn't index DRAW_DEBUG_INPUT_AXIS_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_drawDebugInputState.axis[v1];
}

/*
==============
CG_DrawDebugInput_IsButtonDown
==============
*/
_BOOL8 CG_DrawDebugInput_IsButtonDown(const DrawDebugInputButton button)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = button;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 141, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( button ) < (unsigned)( DRAW_DEBUG_INPUT_BUTTON_COUNT )", "button doesn't index DRAW_DEBUG_INPUT_BUTTON_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_drawDebugInputState.buttonDown[v1];
}

/*
==============
CG_DrawDebugInput_IsButtonPressed
==============
*/
bool CG_DrawDebugInput_IsButtonPressed(const DrawDebugInputButton button)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = button;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 149, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 150, ASSERT_TYPE_ASSERT, "(unsigned)( button ) < (unsigned)( DRAW_DEBUG_INPUT_BUTTON_COUNT )", "button doesn't index DRAW_DEBUG_INPUT_BUTTON_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_drawDebugInputState.buttonDown[v1] && !s_drawDebugInputState.prevButtonDown[v1];
}

/*
==============
CG_DrawDebugInput_IsButtonReleased
==============
*/
bool CG_DrawDebugInput_IsButtonReleased(const DrawDebugInputButton button)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = button;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 157, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( button ) < (unsigned)( DRAW_DEBUG_INPUT_BUTTON_COUNT )", "button doesn't index DRAW_DEBUG_INPUT_BUTTON_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return !s_drawDebugInputState.buttonDown[v1] && s_drawDebugInputState.prevButtonDown[v1];
}

/*
==============
CG_DrawDebugInput_Reset
==============
*/
void CG_DrawDebugInput_Reset(const LocalClientNum_t localClientNum)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 129, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    *(_QWORD *)&s_drawDebugInputState.gamePadIndex = 0i64;
    *(_QWORD *)s_drawDebugInputState.axis = 0i64;
    *(_QWORD *)&s_drawDebugInputState.axis[2] = 0i64;
  }
}

/*
==============
CG_DrawDebugInput_Update
==============
*/
void CG_DrawDebugInput_Update(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int64 v3; 
  unsigned __int64 i; 
  double Button; 
  int gamePadIndex; 
  double Stick; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug_input.cpp", 111, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    s_drawDebugInputState.gamePadIndex = ControllerFromClient;
    if ( ControllerFromClient < 0 || !GPad_IsActive(ControllerFromClient) )
      s_drawDebugInputState.gamePadIndex = -1;
    v3 = 0i64;
    for ( i = 0i64; i < 2; ++i )
    {
      s_drawDebugInputState.prevButtonDown[i] = s_drawDebugInputState.buttonDown[i];
      s_drawDebugInputState.buttonDown[i] = 0;
      if ( s_drawDebugInputState.gamePadIndex >= 0 )
      {
        Button = GPad_GetButton(s_drawDebugInputState.gamePadIndex, s_butMapsGamepad[i]);
        s_drawDebugInputState.buttonDown[i] = *(float *)&Button > 0.0;
      }
      s_drawDebugInputState.buttonDown[i] |= CL_Keys_IsKeyDown(LOCAL_CLIENT_0, s_butMapsKey[i]) != 0;
    }
    gamePadIndex = s_drawDebugInputState.gamePadIndex;
    *(_QWORD *)s_drawDebugInputState.axis = 0i64;
    *(_QWORD *)&s_drawDebugInputState.axis[2] = 0i64;
    if ( s_drawDebugInputState.gamePadIndex >= 0 )
    {
      while ( 1 )
      {
        Stick = GPad_GetStick(gamePadIndex, s_axisMapsGamepad[v3]);
        s_drawDebugInputState.axis[v3++] = *(float *)&Stick;
        if ( v3 >= 4 )
          break;
        gamePadIndex = s_drawDebugInputState.gamePadIndex;
      }
    }
  }
}

