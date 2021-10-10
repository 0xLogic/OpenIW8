/*
==============
CL_GamepadResetMenuScrollTime
==============
*/

void __fastcall CL_GamepadResetMenuScrollTime(LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  ?CL_GamepadResetMenuScrollTime@@YAXW4LocalClientNum_t@@HHI@Z(localClientNum, key, down, time);
}

/*
==============
CL_GamepadAxisValue
==============
*/

double __fastcall CL_GamepadAxisValue(LocalClientNum_t localClientNum, int virtualAxis)
{
  double result; 

  *(float *)&result = ?CL_GamepadAxisValue@@YAMW4LocalClientNum_t@@H@Z(localClientNum, virtualAxis);
  return result;
}

/*
==============
CL_ExecuteDebugShortcut
==============
*/

int __fastcall CL_ExecuteDebugShortcut(LocalClientNum_t localClientNum, int key, int down)
{
  return ?CL_ExecuteDebugShortcut@@YAHW4LocalClientNum_t@@HH@Z(localClientNum, key, down);
}

/*
==============
CL_Gamepad_BindAxis
==============
*/

void __fastcall CL_Gamepad_BindAxis(LocalClientNum_t localClientNum, InputContext inputContext, GamepadVirtualAxis vaxisIndex, GamepadPhysicalAxis physAxisMain, int keynumMain, GamepadPhysicalAxis physAxisOther, int keynumOther, GamepadMapping mapType, float thresholdAbs)
{
  ?CL_Gamepad_BindAxis@@YAXW4LocalClientNum_t@@W4InputContext@@W4GamepadVirtualAxis@@W4GamepadPhysicalAxis@@H3HW4GamepadMapping@@M@Z(localClientNum, inputContext, vaxisIndex, physAxisMain, keynumMain, physAxisOther, keynumOther, mapType, thresholdAbs);
}

/*
==============
CL_Gamepad_GetAlternateAxisBinding
==============
*/

GamepadPhysicalAxis __fastcall CL_Gamepad_GetAlternateAxisBinding(LocalClientNum_t localClientNum, const char *command, InputContext currentInputContext)
{
  return ?CL_Gamepad_GetAlternateAxisBinding@@YA?AW4GamepadPhysicalAxis@@W4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, command, currentInputContext);
}

/*
==============
CL_GamepadButtonEvent
==============
*/

void __fastcall CL_GamepadButtonEvent(LocalClientNum_t localClientNum, int controllerIndex, int key, int down, unsigned int time, bool resetInputs)
{
  ?CL_GamepadButtonEvent@@YAXW4LocalClientNum_t@@HHHI_N@Z(localClientNum, controllerIndex, key, down, time, resetInputs);
}

/*
==============
CL_InitGamepadCommands
==============
*/

void CL_InitGamepadCommands(void)
{
  ?CL_InitGamepadCommands@@YAXXZ();
}

/*
==============
CL_GamepadPhysicalAxisValue
==============
*/

double __fastcall CL_GamepadPhysicalAxisValue(LocalClientNum_t localClientNum, GamepadPhysicalAxis physicalAxis)
{
  double result; 

  *(float *)&result = ?CL_GamepadPhysicalAxisValue@@YAMW4LocalClientNum_t@@W4GamepadPhysicalAxis@@@Z(localClientNum, physicalAxis);
  return result;
}

/*
==============
CL_GamepadGetScrollTimerIndexFromKey
==============
*/

GamepadScrollTimers __fastcall CL_GamepadGetScrollTimerIndexFromKey(int key)
{
  return ?CL_GamepadGetScrollTimerIndexFromKey@@YA?AW4GamepadScrollTimers@@H@Z(key);
}

/*
==============
CL_Gamepad_UpdateActiveMappings
==============
*/

void __fastcall CL_Gamepad_UpdateActiveMappings(LocalClientNum_t localClientNum, InputContext newActiveContext)
{
  ?CL_Gamepad_UpdateActiveMappings@@YAXW4LocalClientNum_t@@W4InputContext@@@Z(localClientNum, newActiveContext);
}

/*
==============
CL_GamepadEvent
==============
*/

void __fastcall CL_GamepadEvent(int portIndex, int physicalAxis, int value, int time)
{
  ?CL_GamepadEvent@@YAXHHHH@Z(portIndex, physicalAxis, value, time);
}

/*
==============
CL_CheckForSplitScreenSignin
==============
*/

bool __fastcall CL_CheckForSplitScreenSignin(int portIndex, LocalClientNum_t *outLocalClientNum, bool isEnterButton, bool isCancelButton)
{
  return ?CL_CheckForSplitScreenSignin@@YA_NHAEAW4LocalClientNum_t@@_N1@Z(portIndex, outLocalClientNum, isEnterButton, isCancelButton);
}

/*
==============
CL_GamepadGetPhysicalAxisFromVirtualAxis
==============
*/

int __fastcall CL_GamepadGetPhysicalAxisFromVirtualAxis(LocalClientNum_t localClientNum, int virtualAxis)
{
  return ?CL_GamepadGetPhysicalAxisFromVirtualAxis@@YAHW4LocalClientNum_t@@H@Z(localClientNum, virtualAxis);
}

/*
==============
CL_GamepadButtonEventForPort
==============
*/

void __fastcall CL_GamepadButtonEventForPort(int portIndex, int key, int down, unsigned int time, bool resetInputs)
{
  ?CL_GamepadButtonEventForPort@@YAXHHHI_N@Z(portIndex, key, down, time, resetInputs);
}

/*
==============
CL_InitGamepadAxisBindings
==============
*/

void CL_InitGamepadAxisBindings(void)
{
  ?CL_InitGamepadAxisBindings@@YAXXZ();
}

/*
==============
CL_GamepadRepeatScrollingButtons
==============
*/

void __fastcall CL_GamepadRepeatScrollingButtons(LocalClientNum_t localClientNum, int controllerIndex)
{
  ?CL_GamepadRepeatScrollingButtons@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
Axis_BindC_f
==============
*/
void Axis_BindC_f()
{
  Axis_Bind_Cmd(1);
}

/*
==============
Axis_Bind_Cmd
==============
*/
void Axis_Bind_Cmd(bool withInputContext)
{
  BOOL v1; 
  int v2; 
  const char *v3; 
  int v4; 
  GamepadMapping mapType; 
  const char *v6; 
  int keynumOther; 
  GamepadPhysicalAxis v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int v14; 
  const char **v15; 
  const char *v16; 
  __int64 v17; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  GamepadPhysicalAxis physAxisOther; 
  float v25; 
  const char *v26; 
  GamepadPhysicalAxis v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  float v32; 
  float v33; 
  const char *v34; 
  double v35; 
  LocalClientNum_t v36; 
  GamepadPhysicalAxis v37; 
  InputContext v38; 
  int keynumMain; 
  GamepadVirtualAxis vaxisIndex; 
  char *EndPtr; 

  v1 = withInputContext;
  LODWORD(EndPtr) = Cmd_Argc();
  v2 = (int)EndPtr;
  if ( (int)EndPtr >= v1 + 2 )
  {
    v4 = 2;
    mapType = GPAD_MAP_SQUARED;
    v6 = Cmd_Argv(1);
    keynumOther = -1;
    v37 = Gamepad_StringToPhysicalAxis(v6);
    keynumMain = -1;
    v8 = v37;
    if ( v37 == GPAD_PHYSAXIS_NONE )
    {
      keynumMain = Com_Keys_StringToKeynum(v6);
      if ( keynumMain == -1 )
      {
        Com_Printf(14, "\"%s\" isn't a valid axis or keynum/button for main axis value\n", v6);
        return;
      }
    }
    v38 = BYTE_VALUE;
    if ( v1 )
    {
      v4 = 3;
      v9 = Cmd_Argv(2);
      v38 = CL_InputContext_FromName(v9);
      if ( v38 == (STRUCT_POINTER|FLOAT_POINTER) )
      {
        Com_Printf(14, "\"%s\" isn't a valid input context\n", v9);
        return;
      }
    }
    vaxisIndex = GPAD_VIRTAXIS_NONE;
    if ( v4 < v2 )
    {
      v10 = v4++;
      v11 = Cmd_Argv(v10);
      vaxisIndex = Axis_StringToVirtualAxis(v11);
      if ( vaxisIndex == GPAD_VIRTAXIS_NONE )
      {
        Com_Printf(14, "\"%s\" isn't a valid virtual axis\n", v11);
        return;
      }
    }
    if ( v4 < v2 )
    {
      v12 = v4++;
      v13 = Cmd_Argv(v12);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 236, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      v14 = 0;
      v15 = inputTypeNames;
LABEL_19:
      v16 = *v15;
      v17 = 0x7FFFFFFFi64;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v18 = v13 - v16;
      do
      {
        v19 = (unsigned __int8)v16[v18];
        v20 = v17;
        v21 = *(unsigned __int8 *)v16++;
        --v17;
        if ( !v20 )
          break;
        if ( v19 != v21 )
        {
          v22 = v19 + 32;
          if ( (unsigned int)(v19 - 65) > 0x19 )
            v22 = v19;
          v19 = v22;
          v23 = v21 + 32;
          if ( (unsigned int)(v21 - 65) > 0x19 )
            v23 = v21;
          if ( v19 != v23 )
          {
            ++v14;
            ++v15;
            if ( v14 >= 5 )
            {
              Com_Printf(14, "\"%s\" isn't a valid mapping input type\n", v13);
              return;
            }
            goto LABEL_19;
          }
        }
      }
      while ( v19 );
      mapType = v14;
      v2 = (int)EndPtr;
      v8 = v37;
    }
    if ( v8 == GPAD_PHYSAXIS_NONE )
      physAxisOther = GPAD_PHYSAXIS_NONE;
    else
      physAxisOther = axisSameStickDefault[v8];
    v25 = 0.0;
    if ( v4 < v2 )
    {
      if ( mapType == GPAD_MAP_LINEAR_COMPLEMENT )
      {
        v26 = Cmd_Argv(v4);
        v27 = Gamepad_StringToPhysicalAxis(v26);
        physAxisOther = v27;
        if ( v27 == GPAD_PHYSAXIS_NONE )
        {
          keynumOther = Com_Keys_StringToKeynum(v26);
          if ( keynumOther == -1 )
          {
            v28 = Gamepad_InputTypeName(GPAD_MAP_LINEAR_COMPLEMENT);
            Com_Printf(14, "\"%s\" isn't a valid axis or keynum/button for other axis value when using \"%s\"\n", v26, v28);
            return;
          }
        }
        else if ( v27 == v8 )
        {
          v29 = Gamepad_InputTypeName(GPAD_MAP_LINEAR_COMPLEMENT);
          Com_Printf(14, "Warning, main and other axis for \"%s\" is the same when using \"%s\"", v26, v29);
          return;
        }
      }
      else
      {
        if ( (unsigned int)(mapType - 3) > 1 )
        {
          Com_Printf(14, "Other physical axis or keynum or threshold specified but the map type is not supported");
          return;
        }
        v30 = Cmd_Argv(v4);
        EndPtr = NULL;
        v31 = v30;
        v32 = strtof(v30, &EndPtr);
        v33 = v32;
        if ( EndPtr == v31 )
        {
          v34 = Gamepad_InputTypeName(mapType);
          Com_Printf(14, "Warning, threshold value is not valid \"%s\" when using \"%s\". Using 0.", v31, v34);
          v33 = 0.0;
        }
        else if ( v32 < 0.0 || v32 > 1.0 )
        {
          Com_Printf(14, "Warning, bindaxis threshold value (%s) must be [0,1]. Clamping...", v31);
        }
        v35 = I_fclamp(v33, 0.0, 1.0);
        v25 = *(float *)&v35;
      }
    }
    v36 = Cmd_LocalClientNum();
    CL_Gamepad_BindAxis(v36, v38, vaxisIndex, v8, keynumMain, physAxisOther, keynumOther, mapType, v25);
  }
  else
  {
    v3 = "bindaxisc <physical axis | key> <input context> ";
    if ( !v1 )
      v3 = "bindaxis <physical axis | key> ";
    Com_Printf(14, v3);
    Com_Printf(14, "[virtual axis] [map type] [other physical axis | other key | threshold] : setup pad axis\n");
  }
}

/*
==============
Axis_Bind_f
==============
*/
void Axis_Bind_f()
{
  Axis_Bind_Cmd(0);
}

/*
==============
Axis_StringToVirtualAxis
==============
*/
__int64 Axis_StringToVirtualAxis(const char *axisName)
{
  unsigned int v2; 
  const char **v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !axisName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 224, ASSERT_TYPE_ASSERT, "(axisName)", (const char *)&queryFormat, "axisName") )
    __debugbreak();
  v2 = 0;
  v3 = virtualAxisNames;
  do
  {
    v4 = *v3;
    v5 = 0x7FFFFFFFi64;
    if ( !axisName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(axisName - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return v2;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return v2;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  return 0xFFFFFFFFi64;
}

/*
==============
Axis_Swap
==============
*/
__int64 Axis_Swap(GamepadPhysicalAxis physAxisIndex1, GamepadPhysicalAxis physAxisIndex2)
{
  unsigned __int8 v4; 
  char v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  GamepadVirtualAxisState *virtualAxes; 
  InputContext *p_activeInputContext; 
  __int64 v11; 
  double *v12; 
  GamepadVirtualAxisState *v13; 
  double *v14; 
  GamepadVirtualAxisState *v15; 
  __int128 v16; 
  double v17; 
  __int64 result; 
  __int128 v19; 

  v4 = 0;
  v5 = 0;
  v6 = Cmd_LocalClientNum();
  v7 = 0i64;
  v8 = 0i64;
  virtualAxes = gaGlobs[v6].virtualAxes;
  p_activeInputContext = &gaGlobs[v6].activeInputContext;
  v11 = 15i64;
  do
  {
    v12 = NULL;
    v13 = gaGlobs[v6].virtualAxes;
    if ( virtualAxes != (GamepadVirtualAxisState *)p_activeInputContext )
    {
      while ( v13->mappings[v7].physicalAxisMain != physAxisIndex1 )
      {
        if ( v13->mappings[v7].physicalAxisOther == physAxisIndex1 )
        {
          v12 = (double *)((char *)v13 + v8);
          v5 = 1;
        }
        if ( ++v13 == (GamepadVirtualAxisState *)p_activeInputContext )
          goto LABEL_9;
      }
      v12 = (double *)((char *)v13 + v8);
      v5 = 0;
    }
LABEL_9:
    v14 = NULL;
    v15 = gaGlobs[v6].virtualAxes;
    if ( virtualAxes != (GamepadVirtualAxisState *)p_activeInputContext )
    {
      while ( v15->mappings[v7].physicalAxisMain != physAxisIndex2 )
      {
        if ( v15->mappings[v7].physicalAxisOther == physAxisIndex2 )
        {
          v14 = (double *)((char *)v15 + v8);
          v5 = 1;
        }
        if ( ++v15 == (GamepadVirtualAxisState *)p_activeInputContext )
          goto LABEL_16;
      }
      v14 = (double *)((char *)v15 + v8);
      v5 = 0;
    }
LABEL_16:
    if ( v12 && v14 )
    {
      v16 = *(_OWORD *)v14;
      v17 = v14[2];
      v19 = *(_OWORD *)v14;
      if ( v12 == v14 && v5 )
      {
        *(_DWORD *)v14 = *((_DWORD *)v12 + 1);
        *((_DWORD *)v12 + 1) = v19;
      }
      else
      {
        *(_OWORD *)v14 = *(_OWORD *)v12;
        v14[2] = v12[2];
        *(_OWORD *)v12 = v16;
        v12[2] = v17;
      }
      v4 = 1;
    }
    v8 += 24i64;
    ++v7;
    --v11;
  }
  while ( v11 );
  result = v4;
  gaGlobs[v6].activeInputContext = STRUCT_POINTER|FLOAT_POINTER;
  return result;
}

/*
==============
Axis_Swap_f
==============
*/
void Axis_Swap_f()
{
  const char *v0; 
  GamepadPhysicalAxis v1; 
  const char *v2; 
  GamepadPhysicalAxis v3; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_Argv(1);
    v1 = Gamepad_StringToPhysicalAxis(v0);
    v2 = Cmd_Argv(2);
    v3 = Gamepad_StringToPhysicalAxis(v2);
    Axis_Swap(v1, v3);
  }
  else
  {
    Com_Printf(0, "axis_swap <physAxis> <physAxis> : Swap of physical axis\n");
  }
}

/*
==============
Axis_Unbind_f
==============
*/
void Axis_Unbind_f()
{
  const char *v0; 
  InputContext v1; 
  const char *v2; 
  GamepadVirtualAxis v3; 
  LocalClientNum_t v4; 

  if ( Cmd_Argc() >= 3 )
  {
    v0 = Cmd_Argv(1);
    v1 = CL_InputContext_FromName(v0);
    if ( v1 == (STRUCT_POINTER|FLOAT_POINTER) )
    {
      Com_Printf(14, "\"%s\" isn't a valid input context\n", v0);
    }
    else
    {
      v2 = Cmd_Argv(2);
      v3 = (unsigned int)Axis_StringToVirtualAxis(v2);
      if ( v3 == GPAD_VIRTAXIS_NONE )
      {
        Com_Printf(14, "\"%s\" isn't a valid virtual axis\n", v2);
      }
      else
      {
        v4 = Cmd_LocalClientNum();
        CL_Gamepad_UnbindAxis(v4, v1, v3);
      }
    }
  }
  else
  {
    Com_Printf(14, "unbindaxis <input context> <virtual axis>");
  }
}

/*
==============
Axis_Unbindall_f
==============
*/
void Axis_Unbindall_f()
{
  __int64 v0; 
  int i; 
  __int64 v2; 
  __int64 v3; 
  char *v4; 

  v0 = Cmd_LocalClientNum();
  for ( i = 0; i < 15; ++i )
  {
    v2 = 0i64;
    v3 = 6i64;
    v4 = (char *)&gaGlobs[0].virtualAxes[0].mappings[(unsigned __int8)i].physicalAxisOther + v0 * 2332;
    do
    {
      if ( v2 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 257, ASSERT_TYPE_ASSERT, "(vaxisIndex < GPAD_VIRTAXIS_COUNT)", (const char *)&queryFormat, "vaxisIndex < GPAD_VIRTAXIS_COUNT") )
        __debugbreak();
      if ( (_BYTE)i == 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 260, ASSERT_TYPE_ASSERT, "(inputContext != InputContext::INVALID)", (const char *)&queryFormat, "inputContext != InputContext::INVALID") )
        __debugbreak();
      *(_QWORD *)(v4 - 4) = -1i64;
      *((_DWORD *)v4 + 1) = 222;
      *((_DWORD *)v4 + 2) = -1;
      ++v2;
      *(_QWORD *)(v4 + 12) = 1i64;
      v4 += 384;
      gaGlobs[v0].activeInputContext = STRUCT_POINTER|FLOAT_POINTER;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
CL_CheckForSplitScreenSignin
==============
*/
bool CL_CheckForSplitScreenSignin(int portIndex, LocalClientNum_t *outLocalClientNum, bool isEnterButton, bool isCancelButton)
{
  const dvar_t *v8; 
  ClGameModeApplication *v9; 
  _BOOL8 v10; 
  ClGameModeApplication *ActiveClientApplication; 
  bool v13; 

  if ( !isEnterButton && !isCancelButton || !Com_FrontEnd_IsInFrontEnd() || !LUI_IsTopSignInMenu() )
    return 0;
  v8 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    if ( !isEnterButton || CL_Mgr_IsControllerMappedToClient(portIndex, outLocalClientNum) )
    {
      if ( !isCancelButton || !CL_Mgr_IsControllerMappedToClient(portIndex, outLocalClientNum) )
        return 0;
      v13 = 0;
    }
    else
    {
      if ( !CL_Mgr_CanSignInMorePlayers() )
        return 0;
      v13 = 1;
    }
    return CL_Mgr_HandleSignIn(portIndex, v13);
  }
  else
  {
    if ( !ClGameModeApplication::HasActiveApplicationGameMode() )
      return 0;
    if ( !isEnterButton || CL_Mgr_IsControllerMappedToClient(portIndex, outLocalClientNum) )
    {
      if ( !isCancelButton || !CL_Mgr_IsControllerMappedToClient(portIndex, outLocalClientNum) )
        return 0;
      ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
      return ActiveClientApplication->HandleSplitscreenSignIn(ActiveClientApplication, portIndex, 0);
    }
    else
    {
      v9 = ClGameModeApplication::GetActiveClientApplication();
      LOBYTE(v10) = 1;
      return v9->HandleSplitscreenSignIn(v9, portIndex, v10);
    }
  }
}

/*
==============
CL_ExecuteDebugShortcut
==============
*/
__int64 CL_ExecuteDebugShortcut(LocalClientNum_t localClientNum, int key, int down)
{
  PlayerKeyState *KeyState; 
  unsigned int v7; 
  PlayerKeyState *v8; 
  __int64 v9; 
  const KeyState *v10; 

  KeyState = CL_Keys_GetKeyState(localClientNum);
  v7 = 0;
  v8 = KeyState;
  if ( KeyState->keys[15].down && down )
  {
    switch ( key )
    {
      case 1:
        v9 = 200i64;
        goto LABEL_18;
      case 2:
        v9 = 201i64;
        goto LABEL_18;
      case 3:
        v9 = 202i64;
        goto LABEL_18;
      case 4:
        v9 = 203i64;
        goto LABEL_18;
      case 5:
        v9 = 197i64;
        goto LABEL_18;
      case 6:
        v9 = 199i64;
        goto LABEL_18;
      case 16:
        v9 = 204i64;
        goto LABEL_18;
      case 17:
        v9 = 205i64;
        goto LABEL_18;
      case 18:
        v9 = 196i64;
        goto LABEL_18;
      case 19:
        v9 = 198i64;
        goto LABEL_18;
      case 20:
        v9 = 206i64;
        goto LABEL_18;
      case 21:
        v9 = 207i64;
        goto LABEL_18;
      case 22:
        v9 = 208i64;
        goto LABEL_18;
      case 23:
        v9 = 209i64;
LABEL_18:
        v10 = &v8->keys[v9];
        if ( (PlayerKeyState *)((char *)v8 + v9 * 16) != (PlayerKeyState *)-296i64 && v10->bindingCheat )
        {
          CL_Keys_AddBindingCommand(localClientNum, v10->bindingCheat, v10);
          v7 = 1;
        }
        break;
      default:
        return v7;
    }
  }
  return v7;
}

/*
==============
CL_GamepadAxisValue
==============
*/
float CL_GamepadAxisValue(LocalClientNum_t localClientNum, int virtualAxis)
{
  __int64 v2; 
  __int64 v3; 
  GamepadVirtualAxisMapping *p_activeMapping; 
  __int64 physicalAxisMain; 
  __int128 v7; 
  __int128 v8; 
  int keynumMain; 
  __int128 v10; 
  __int64 physicalAxisOther; 
  float IsKeyDown; 
  int keynumOther; 
  __int128 v14; 

  v2 = virtualAxis;
  v3 = localClientNum;
  if ( (unsigned int)virtualAxis > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 822, ASSERT_TYPE_ASSERT, "( ( virtualAxis >= 0 && virtualAxis < GPAD_VIRTAXIS_COUNT ) )", "( virtualAxis ) = %i", virtualAxis) )
    __debugbreak();
  p_activeMapping = &gaGlobs[v3].virtualAxes[v2].activeMapping;
  if ( DevGui_IsActive() || CL_Pause_IsGamePaused() && CL_Pause_GetPauseReason() == 2048 )
    return 0.0;
  physicalAxisMain = p_activeMapping->physicalAxisMain;
  _XMM9 = 0i64;
  v7 = 0i64;
  if ( (_DWORD)physicalAxisMain == -1 )
  {
    keynumMain = p_activeMapping->keynumMain;
    if ( keynumMain != -1 )
    {
      v10 = 0i64;
      *(float *)&v10 = (float)CL_Keys_IsKeyDown((LocalClientNum_t)v3, keynumMain);
      v7 = v10;
    }
  }
  else
  {
    v8 = 0i64;
    *(float *)&v8 = (float)gaGlobs[v3].axesValues[physicalAxisMain] * 0.000015259022;
    v7 = v8;
  }
  physicalAxisOther = p_activeMapping->physicalAxisOther;
  IsKeyDown = 0.0;
  if ( (_DWORD)physicalAxisOther == -1 )
  {
    keynumOther = p_activeMapping->keynumOther;
    if ( keynumOther != -1 )
      IsKeyDown = (float)CL_Keys_IsKeyDown((LocalClientNum_t)v3, keynumOther);
  }
  else
  {
    IsKeyDown = (float)gaGlobs[v3].axesValues[physicalAxisOther] * 0.000015259022;
  }
  switch ( p_activeMapping->mapType )
  {
    case GPAD_MAP_NONE:
    case GPAD_MAP_COUNT:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 868, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      break;
    case GPAD_MAP_SQUARED:
      *(float *)&v7 = fsqrt((float)(IsKeyDown * IsKeyDown) + (float)(*(float *)&v7 * *(float *)&v7)) * *(float *)&v7;
      break;
    case GPAD_MAP_LINEAR_COMPLEMENT:
      *(float *)&v7 = *(float *)&v7 - IsKeyDown;
      break;
    case GPAD_MAP_SQRT:
      if ( COERCE_FLOAT(v7 & _xmm) > p_activeMapping->thresholdAbs )
      {
        v14 = v7 & (unsigned int)_xmm;
        *(float *)&v14 = fsqrt(COERCE_FLOAT(v7 & _xmm));
        _XMM2 = v14 ^ _xmm;
        __asm
        {
          vcmpless xmm0, xmm9, xmm6
          vblendvps xmm0, xmm2, xmm4, xmm0
        }
        *(float *)&v7 = fsqrt((float)(IsKeyDown * IsKeyDown) + (float)(*(float *)&v7 * *(float *)&v7)) * *(float *)&_XMM0;
      }
      break;
    case GPAD_MAP_CBRT:
      if ( COERCE_FLOAT(v7 & _xmm) > p_activeMapping->thresholdAbs )
        *(float *)&v7 = cbrtf(*(float *)&v7) * fsqrt((float)(IsKeyDown * IsKeyDown) + (float)(*(float *)&v7 * *(float *)&v7));
      break;
    default:
      break;
  }
  if ( COERCE_FLOAT(v7 & _xmm) > 1.00001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 872, ASSERT_TYPE_SANITY, "( ( I_fabs( axisFinalDeflectionValue ) <= 1.00001f ) )", "( axisFinalDeflectionValue ) = %g", *(float *)&v7) )
    __debugbreak();
  return *(float *)&v7;
}

/*
==============
CL_GamepadButtonEvent
==============
*/
void CL_GamepadButtonEvent(LocalClientNum_t localClientNum, int controllerIndex, int key, int down, unsigned int time, bool resetInputs)
{
  __int64 v7; 
  __int64 v9; 
  KeyState *keys; 
  clientUIActive_t *LocalClientUIGlobals; 
  int *v12; 
  int dpadLatestKey; 
  const KeyState *v14; 
  connstate_t LocalClientGameConnectionState; 
  unsigned __int8 repeats; 
  PlayerKeyState *KeyState; 
  PlayerKeyState *v18; 
  bool v19; 
  bool v20; 
  bool IsActive; 
  CmdText *v22; 
  int v23; 
  __int64 cmdsize; 
  int v25; 
  scrContext_t *v26; 
  PlayerKeyState *v27; 
  __int64 v28; 
  const KeyState *v29; 
  char *bindingCheat; 
  PlayerKeyState *v31; 
  unsigned __int8 v32; 
  clientUIActive_t *v33; 
  __int64 v34; 
  __int64 v35; 
  ClActiveClient *Client; 
  int IntSafe; 
  int v38; 
  int v39; 
  unsigned int v40; 
  _BOOL8 v41; 
  int ActiveBinding; 
  bool v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  const char *v48; 
  PlayerKeyState *v49; 
  int v50; 
  int v51; 
  unsigned int v52; 
  const char *v53; 
  const char *v54; 
  ClActiveClient *v55; 
  __int64 virtualKey; 
  __int64 controllerIndexa; 
  __int64 controllerIndexb; 
  int v59; 
  int wasDown; 
  int *p_active; 
  char dest[1024]; 

  v7 = key;
  v9 = localClientNum;
  if ( CL_Pause_IsGamePaused() && CL_Pause_GetPauseReason() == 2048 && !CL_MainMP_GameIsAboutToResume() )
    return;
  if ( !KeyCodes_IsGamepadKey((keyNum_t)v7) )
  {
    CL_Keys_Event((LocalClientNum_t)v9, v7, down != 0, time, 0, controllerIndex);
    return;
  }
  Stream_ImageRecord_InputEvent();
  keys = CL_Keys_GetKeyState((LocalClientNum_t)v9)->keys;
  LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v9);
  p_active = (int *)&LocalClientUIGlobals->active;
  v12 = (int *)&LocalClientUIGlobals->active;
  if ( down && (unsigned int)(v7 - 20) <= 3 )
  {
    dpadLatestKey = LocalClientUIGlobals->dpadLatestKey;
    if ( dpadLatestKey )
    {
      if ( (unsigned int)(dpadLatestKey - 20) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 1089, ASSERT_TYPE_ASSERT, "(IsDPadKey( keyBase ))", (const char *)&queryFormat, "IsDPadKey( keyBase )") )
        __debugbreak();
      if ( (unsigned int)(v7 - 20) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 1090, ASSERT_TYPE_ASSERT, "(IsDPadKey( keyTest ))", (const char *)&queryFormat, "IsDPadKey( keyTest )") )
        __debugbreak();
      if ( ((unsigned int)(dpadLatestKey - 20) <= 1 && (unsigned int)(v7 - 22) <= 1 || (unsigned int)(dpadLatestKey - 22) <= 1 && (unsigned int)(v7 - 20) <= 1) && v12[5] > Sys_Milliseconds() )
        return;
    }
    v12[5] = gpad_dpadDebounceTime->current.integer + Sys_Milliseconds();
    v12[6] = v7;
  }
  v14 = &keys[v7];
  wasDown = v14->down;
  v14->down = down != 0;
  LocalClientGameConnectionState = CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v9);
  if ( time && LocalClientGameConnectionState == CA_DISCONNECTED )
    Online_Telemetry_ResetInputSession((const LocalClientNum_t)v9);
  if ( down )
  {
    repeats = v14->repeats;
    if ( repeats != 0xFF )
      v14->repeats = ++repeats;
    if ( repeats == 1 )
    {
      KeyState = CL_Keys_GetKeyState((LocalClientNum_t)v9);
      ++KeyState->anyKeyDown;
    }
  }
  else
  {
    v14->repeats = 0;
    v18 = CL_Keys_GetKeyState((LocalClientNum_t)v9);
    --v18->anyKeyDown;
    if ( CL_Keys_GetKeyState((LocalClientNum_t)v9)->anyKeyDown < 0 )
      CL_Keys_GetKeyState((LocalClientNum_t)v9)->anyKeyDown = 0;
  }
  v19 = v14->bindingCheat && !I_stricmp(v14->bindingCheat, "devgui") && down && v14->repeats == 1;
  v20 = keys[15].down && keys[14].down;
  IsActive = DevGui_IsActive();
  if ( v19 || v20 )
  {
    if ( IsActive )
    {
      DevGui_Toggle();
      CL_Cameraman_DevGuiChange((LocalClientNum_t)v9, 0);
    }
    else
    {
      v22 = &s_cmd_textArray[v9];
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
        __debugbreak();
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      v23 = strlen_noncrt("devgui\n");
      cmdsize = v22->cmdsize;
      v25 = v23;
      if ( v23 + (int)cmdsize < v22->maxsize )
      {
        memcpy_noncrt(&v22->data[cmdsize], "devgui\n", v23 + 1);
        v22->cmdsize += v25;
        v26 = ScriptContext_Server();
        Scr_MonitorCommand(v26, "devgui\n");
      }
      else
      {
        Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "devgui\n");
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
      CL_Cameraman_DevGuiChange((LocalClientNum_t)v9, 1);
    }
    return;
  }
  if ( IsActive && (unsigned int)(v7 - 14) > 1 )
    return;
  v27 = CL_Keys_GetKeyState((LocalClientNum_t)v9);
  if ( v27->keys[15].down && down )
  {
    switch ( (int)v7 )
    {
      case 1:
        v28 = 200i64;
        break;
      case 2:
        v28 = 201i64;
        break;
      case 3:
        v28 = 202i64;
        break;
      case 4:
        v28 = 203i64;
        break;
      case 5:
        v28 = 197i64;
        break;
      case 6:
        v28 = 199i64;
        break;
      case 16:
        v28 = 204i64;
        break;
      case 17:
        v28 = 205i64;
        break;
      case 18:
        v28 = 196i64;
        break;
      case 19:
        v28 = 198i64;
        break;
      case 20:
        v28 = 206i64;
        break;
      case 21:
        v28 = 207i64;
        break;
      case 22:
        v28 = 208i64;
        break;
      case 23:
        v28 = 209i64;
        break;
      default:
        goto LABEL_72;
    }
    v29 = &v27->keys[v28];
    if ( (PlayerKeyState *)((char *)v27 + v28 * 16) != (PlayerKeyState *)-296i64 )
    {
      bindingCheat = (char *)v29->bindingCheat;
      if ( v29->bindingCheat )
        goto LABEL_132;
    }
  }
LABEL_72:
  v31 = CL_Keys_GetKeyState((LocalClientNum_t)v9);
  if ( v31->keys[5].down && v31->keys[6].down && v31->keys[18].down && v31->keys[19].down )
    Online_PanicButtonPushed();
  if ( down )
  {
    v32 = v14->repeats;
    v59 = v32;
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(controllerIndexa) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", controllerIndexa, 2) )
        __debugbreak();
      v32 = v59;
    }
    v33 = &clientUIActives[v9];
    if ( (v33->keyCatchers & 0xC40) != 0 )
    {
      v34 = 0i64;
      if ( (int)v7 >= 218 && (int)v7 <= 221 )
        v34 = 1i64;
      v35 = 0i64;
      while ( (_DWORD)v7 != (unsigned __int8)menuScrollButtonList[v35] )
      {
        if ( ++v35 >= 12 )
          goto LABEL_89;
      }
      if ( v32 == 1 )
      {
        v33->nextScrollTime[v34] = time + Dvar_GetIntSafe("SKSNNRNQQ");
      }
      else
      {
        if ( (signed int)time <= v33->nextScrollTime[v34] )
          return;
        IntSafe = Dvar_GetIntSafe("LSNMOLPNPP");
        v38 = Dvar_GetIntSafe("NKLNROKPQO");
        v39 = Dvar_GetIntSafe("NPKOTOKTKR");
        v33->nextScrollTime[v34] = time + I_clamp(IntSafe - v59 * v39, v38, IntSafe);
      }
    }
    else
    {
LABEL_89:
      if ( v32 > 1u )
        return;
    }
    v12 = p_active;
  }
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v9) == CA_ACTIVE )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v9);
    if ( (unsigned int)(v7 - 1) <= 3 )
      Client->m_latencyDeviceState = down;
  }
  if ( Com_FrontEnd_IsInFrontEnd() || CL_IsLocalClientActive((LocalClientNum_t)v9) )
  {
    if ( !CL_Mgr_IsControllerActive(controllerIndex) && GPad_GetControllerMissing() == -1 )
    {
      Com_Printf(14, "Discarding input from controller %i since the mapped client (%i) isn't active\n", (unsigned int)controllerIndex, (unsigned int)v9);
      return;
    }
    if ( !v14->bindingCheat || I_stricmp(v14->bindingCheat, "mainmenu") || !down )
    {
      CL_Cameraman_HandleInput((LocalClientNum_t)v9, v7, down);
      if ( !CL_Cameraman_isActive() )
      {
        if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v9) == CA_ACTIVE )
        {
          v40 = time;
          if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v9, -1) && CG_CreateFx_HandleKeyEvents((LocalClientNum_t)v9, v7, down, v14->repeats, time) )
            return;
        }
        else
        {
          v40 = time;
        }
        if ( !Com_IsGameLocalServerRunning() )
          goto LABEL_164;
        if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
          __debugbreak();
        if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
          __debugbreak();
        LOBYTE(v41) = down > 0;
        if ( !SvPersistentGlobals::ms_svPersistent->HandleDevelopmentKeyEvent(SvPersistentGlobals::ms_svPersistent, v7, v41) )
        {
LABEL_164:
          ActiveBinding = CL_Keys_GetActiveBinding((LocalClientNum_t)v9, v7);
          v43 = LUI_CoD_KeyEvent((LocalClientNum_t)v9, controllerIndex, v7, ActiveBinding, down, v12[1], resetInputs);
          if ( !resetInputs )
            LUI_CoD_UpdateInputType(controllerIndex, GAMEPAD);
          v44 = CL_Keys_GetActiveBinding((LocalClientNum_t)v9, v7);
          if ( !CL_Input_HandleFrontendSceneDebugEvent((LocalClientNum_t)v9, v44, v7, down, wasDown) )
          {
            if ( !down )
            {
              v45 = CL_Keys_GetActiveBinding((LocalClientNum_t)v9, v7);
              if ( wasDown && (v45 & 1) != 0 && (v45 <= 116 || (unsigned int)(v45 - 249) <= 5) )
              {
                v46 = v45 + 1;
                v47 = wasDown;
                goto LABEL_161;
              }
              v48 = v14->bindingCheat;
              if ( !v14->bindingCheat || *v48 != 43 )
                return;
              LODWORD(controllerIndexb) = v40;
              LODWORD(virtualKey) = v7;
              Com_sprintf(dest, 0x400ui64, "-%s %i %i", v48 + 1, virtualKey, controllerIndexb);
              v29 = v14;
              bindingCheat = dest;
LABEL_132:
              CL_Keys_AddBindingCommand((LocalClientNum_t)v9, bindingCheat, v29);
              return;
            }
            if ( v43 || CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v9) == CA_DISCONNECTED )
              return;
            v49 = CL_Keys_GetKeyState((LocalClientNum_t)v9);
            v50 = v12[1];
            if ( (v50 & 0x10) != 0 || (v50 & 8) == 0 || down <= 0 )
            {
              if ( (v12[1] & 0x10) == 0 )
              {
                v49->locSelInputState = LOC_SEL_INPUT_NONE;
                v50 = v12[1];
              }
              if ( (v50 & 0x18) == 0 )
                CL_Keys_GetKeyState((LocalClientNum_t)v9)->overrideLocSelInputState = LOC_SEL_INPUT_NONE;
              v52 = CL_Keys_GetActiveBinding((LocalClientNum_t)v9, v7);
              if ( v52 )
              {
                if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v9) == CA_ACTIVE )
                {
                  v55 = ClActiveClient::GetClient((const LocalClientNum_t)v9);
                  if ( v55->TranslateButton(v55, v7, v52) )
                    return;
                }
                v47 = 0;
                v46 = v52;
LABEL_161:
                CL_Input_ExecBinding((LocalClientNum_t)v9, v46, v7, v47);
                return;
              }
              v53 = v14->bindingCheat;
              if ( v14->bindingCheat )
              {
                if ( *v53 == 43 )
                {
                  LODWORD(controllerIndexb) = v40;
                  LODWORD(virtualKey) = v7;
                  Com_sprintf(dest, 0x400ui64, "%s %i %i", v14->bindingCheat, virtualKey, controllerIndexb);
                  v53 = dest;
                }
                CL_Keys_AddBindingCommand((LocalClientNum_t)v9, v53, v14);
              }
              else if ( (int)v7 >= 200 )
              {
                v54 = Com_Keys_KeynumToString(v7);
                Com_Printf(v52 + 14, "%s is unbound, use controls menu to set.\n", v54);
              }
              if ( !CL_Input_IsGamepadEnabled((LocalClientNum_t)v9) && LUI_BeginEvent((LocalClientNum_t)v9, "input_locked", LUI_luaVM) )
              {
                LUI_SetTableBool("isGamepadLocked", 1, LUI_luaVM);
                LUI_EndEvent(LUI_luaVM);
              }
            }
            else
            {
              v51 = CL_Keys_GetActiveBinding((LocalClientNum_t)v9, v7);
              if ( (unsigned int)(v7 - 2) <= 1 )
              {
                v49->locSelInputState = LOC_SEL_INPUT_CANCEL;
              }
              else if ( (_DWORD)v7 == 1 || v51 == 1 || v51 == 41 )
              {
                v49->locSelInputState = LOC_SEL_INPUT_CONFIRM;
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CL_GamepadButtonEventForPort
==============
*/
void CL_GamepadButtonEventForPort(int portIndex, int key, int down, unsigned int time, bool resetInputs)
{
  const dvar_t *v9; 
  ClGameModeApplication *v10; 
  bool v11; 
  ClGameModeApplication *ActiveClientApplication; 
  bool v13; 
  __int64 v14; 
  int IntSafe; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  LocalClientNum_t outLocalClientNum; 

  if ( !down || (unsigned int)(key - 1) > 1 || !Com_FrontEnd_IsInFrontEnd() || !LUI_IsTopSignInMenu() )
    goto LABEL_25;
  v9 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    if ( key == 1 )
    {
      if ( CL_Mgr_IsControllerMappedToClient(portIndex, &outLocalClientNum) || !CL_Mgr_CanSignInMorePlayers() )
        goto LABEL_25;
      v13 = 1;
    }
    else
    {
      if ( key != 2 || !CL_Mgr_IsControllerMappedToClient(portIndex, &outLocalClientNum) )
        goto LABEL_25;
      v13 = 0;
    }
    v11 = CL_Mgr_HandleSignIn(portIndex, v13);
LABEL_24:
    if ( v11 )
      return;
    goto LABEL_25;
  }
  if ( !ClGameModeApplication::HasActiveApplicationGameMode() )
    goto LABEL_25;
  if ( key != 1 )
  {
    if ( key != 2 || !CL_Mgr_IsControllerMappedToClient(portIndex, &outLocalClientNum) )
      goto LABEL_25;
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    v11 = ActiveClientApplication->HandleSplitscreenSignIn(ActiveClientApplication, portIndex, 0);
    goto LABEL_24;
  }
  if ( !CL_Mgr_IsControllerMappedToClient(portIndex, &outLocalClientNum) )
  {
    v10 = ClGameModeApplication::GetActiveClientApplication();
    v11 = v10->HandleSplitscreenSignIn(v10, portIndex, 1);
    goto LABEL_24;
  }
LABEL_25:
  if ( CL_Mgr_IsControllerActive(portIndex) || GPad_GetControllerMissing() != -1 )
  {
    outLocalClientNum = Com_GetLocalClientNumForEventOnPort(portIndex);
    if ( CL_Keys_IsCatcherActive(outLocalClientNum, 64) || CL_Keys_IsCatcherActive(outLocalClientNum, 1024) || CL_Keys_IsCatcherActive(outLocalClientNum, 2048) )
    {
      v14 = outLocalClientNum;
      if ( down )
      {
        IntSafe = Dvar_GetIntSafe("SKSNNRNQQ");
        v16 = 0i64;
        v17 = IntSafe;
        v18 = 0i64;
        if ( key >= 218 && key <= 221 )
          v18 = 1i64;
        while ( key != (unsigned __int8)menuScrollButtonList[v16] )
        {
          if ( ++v16 >= 12 )
            goto LABEL_41;
        }
        if ( (unsigned int)v14 >= 2 )
        {
          LODWORD(v20) = 2;
          LODWORD(v19) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        clientUIActives[v14].nextScrollTime[v18] = v17 + time;
      }
    }
LABEL_41:
    CL_GamepadButtonEvent(outLocalClientNum, portIndex, key, down, time, resetInputs);
  }
}

/*
==============
CL_GamepadEvent
==============
*/
void CL_GamepadEvent(int portIndex, int physicalAxis, int value, int time)
{
  __int64 v5; 
  __int64 LocalClientNumForEventOnPort; 
  GpadAxesGlob *v9; 

  v5 = physicalAxis;
  if ( CL_Mgr_IsControllerActive(portIndex) )
  {
    LocalClientNumForEventOnPort = Com_GetLocalClientNumForEventOnPort(portIndex);
    v9 = &gaGlobs[LocalClientNumForEventOnPort];
    if ( (unsigned int)v5 > 5 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441F1168, 332i64, (unsigned int)v5);
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)LocalClientNumForEventOnPort) == CA_DISCONNECTED && v9->axesValues[v5] != value )
      Online_Telemetry_ResetInputSession((const LocalClientNum_t)LocalClientNumForEventOnPort);
    CL_GamepadGenerateAPad((LocalClientNum_t)LocalClientNumForEventOnPort, portIndex, v5, time);
    v9->axesValues[v5] = value;
  }
}

/*
==============
CL_GamepadGenerateAPad
==============
*/
void CL_GamepadGenerateAPad(LocalClientNum_t localClientNum, int portIndex, int physicalAxis, int time)
{
  int v4; 
  __int64 v5; 
  GamePadStick v9; 
  int v10; 
  StickToCodeMap *v11; 
  int posCode; 
  int v13; 
  StickToCodeMap *v14; 
  StickToCodeMap *v15; 
  int negCode; 
  StickToCodeMap *v17; 
  GamePadStick stick[4]; 
  __int64 v19; 

  v4 = 0;
  v5 = physicalAxis;
  v19 = 0i64;
  *(_OWORD *)stick = _xmm;
  if ( (unsigned int)physicalAxis > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 720, ASSERT_TYPE_ASSERT, "(physicalAxis >= 0 && physicalAxis < GPAD_PHYSAXIS_COUNT)", (const char *)&queryFormat, "physicalAxis >= 0 && physicalAxis < GPAD_PHYSAXIS_COUNT", *(_QWORD *)stick, *(_QWORD *)&stick[2], v19) )
    __debugbreak();
  v9 = stick[v5];
  if ( v9 == GPAD_INVALID )
    return;
  if ( GPad_IsStickPressed(portIndex, v9, GPAD_STICK_POS) )
  {
    v10 = 0;
    v11 = menuScrollAnalogList;
    while ( v11->physicalAxis != (_DWORD)v5 )
    {
      ++v10;
      if ( (__int64)++v11 >= (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_1002 )
        goto LABEL_18;
    }
    posCode = menuScrollAnalogList[v10].posCode;
LABEL_17:
    CL_GamepadButtonEvent(localClientNum, portIndex, posCode, 1, time, 0);
    goto LABEL_18;
  }
  if ( GPad_IsStickPressed(portIndex, v9, GPAD_STICK_NEG) )
  {
    v13 = 0;
    v14 = menuScrollAnalogList;
    while ( v14->physicalAxis != (_DWORD)v5 )
    {
      ++v13;
      if ( (__int64)++v14 >= (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_1002 )
        goto LABEL_18;
    }
    posCode = menuScrollAnalogList[v13].negCode;
    goto LABEL_17;
  }
LABEL_18:
  if ( GPad_IsStickReleased(portIndex, v9, GPAD_STICK_POS) )
  {
    v15 = menuScrollAnalogList;
    while ( v15->physicalAxis != (_DWORD)v5 )
    {
      ++v4;
      if ( (__int64)++v15 >= (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_1002 )
        return;
    }
    negCode = menuScrollAnalogList[v4].posCode;
  }
  else
  {
    if ( !GPad_IsStickReleased(portIndex, v9, GPAD_STICK_NEG) )
      return;
    v17 = menuScrollAnalogList;
    while ( v17->physicalAxis != (_DWORD)v5 )
    {
      ++v4;
      if ( (__int64)++v17 >= (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_1002 )
        return;
    }
    negCode = menuScrollAnalogList[v4].negCode;
  }
  CL_GamepadButtonEvent(localClientNum, portIndex, negCode, 0, time, 0);
}

/*
==============
CL_GamepadGetPhysicalAxisFromVirtualAxis
==============
*/
__int64 CL_GamepadGetPhysicalAxisFromVirtualAxis(LocalClientNum_t localClientNum, int virtualAxis)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = virtualAxis;
  v3 = localClientNum;
  if ( (unsigned int)virtualAxis >= 6 )
  {
    v6 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( virtualAxis ) < (unsigned)( GPAD_VIRTAXIS_COUNT )", "virtualAxis doesn't index GPAD_VIRTAXIS_COUNT\n\t%i not in [0, %i)", virtualAxis, v6) )
      __debugbreak();
  }
  return (unsigned int)gaGlobs[v3].virtualAxes[v2].activeMapping.physicalAxisMain;
}

/*
==============
CL_GamepadGetScrollTimerIndexFromKey
==============
*/
_BOOL8 CL_GamepadGetScrollTimerIndexFromKey(int key)
{
  return (unsigned int)(key - 218) <= 3;
}

/*
==============
CL_GamepadPhysicalAxisValue
==============
*/
float CL_GamepadPhysicalAxisValue(LocalClientNum_t localClientNum, GamepadPhysicalAxis physicalAxis)
{
  __int64 v2; 
  __int64 v3; 
  float v5; 

  v2 = physicalAxis;
  v3 = localClientNum;
  if ( DevGui_IsActive() )
    return 0.0;
  if ( (_DWORD)v2 == -1 )
    v5 = 0.0;
  else
    v5 = (float)gaGlobs[v3].axesValues[v2] * 0.000015259022;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) > 1.00001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 791, ASSERT_TYPE_SANITY, "( ( I_fabs( axisDeflection ) <= 1.00001f ) )", "( axisDeflection ) = %g", v5) )
    __debugbreak();
  return v5;
}

/*
==============
CL_GamepadRepeatScrollingButtons
==============
*/
void CL_GamepadRepeatScrollingButtons(LocalClientNum_t localClientNum, int controllerIndex)
{
  __int64 i; 
  unsigned int time; 

  for ( i = 0i64; i < 12; ++i )
  {
    if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)menuScrollButtonList[i]) )
    {
      time = Sys_Milliseconds();
      CL_GamepadButtonEvent(localClientNum, controllerIndex, (unsigned __int8)menuScrollButtonList[i], 1, time, 0);
    }
  }
}

/*
==============
CL_GamepadResetMenuScrollTime
==============
*/
void CL_GamepadResetMenuScrollTime(LocalClientNum_t localClientNum, int key, int down, unsigned int time)
{
  __int64 v4; 
  int IntSafe; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  if ( down )
  {
    v4 = localClientNum;
    IntSafe = Dvar_GetIntSafe("SKSNNRNQQ");
    v8 = 0i64;
    v9 = IntSafe;
    v10 = 0i64;
    if ( key >= 218 && key <= 221 )
      v10 = 1i64;
    while ( key != (unsigned __int8)menuScrollButtonList[v8] )
    {
      if ( ++v8 >= 12 )
        return;
    }
    if ( (unsigned int)v4 >= 2 )
    {
      v12 = 2;
      v11 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    clientUIActives[v4].nextScrollTime[v10] = v9 + time;
  }
}

/*
==============
CL_Gamepad_BindAxis
==============
*/
void CL_Gamepad_BindAxis(LocalClientNum_t localClientNum, InputContext inputContext, GamepadVirtualAxis vaxisIndex, GamepadPhysicalAxis physAxisMain, int keynumMain, GamepadPhysicalAxis physAxisOther, int keynumOther, GamepadMapping mapType, float thresholdAbs)
{
  __int64 v9; 
  __int64 v10; 
  GamepadVirtualAxisMapping *v13; 

  v9 = vaxisIndex;
  v10 = localClientNum;
  if ( vaxisIndex >= GPAD_VIRTAXIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 257, ASSERT_TYPE_ASSERT, "(vaxisIndex < GPAD_VIRTAXIS_COUNT)", (const char *)&queryFormat, "vaxisIndex < GPAD_VIRTAXIS_COUNT") )
    __debugbreak();
  if ( physAxisMain != GPAD_PHYSAXIS_NONE && keynumMain != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 258, ASSERT_TYPE_ASSERT, "(physAxisMain == GPAD_PHYSAXIS_NONE || keynumMain == -1)", (const char *)&queryFormat, "physAxisMain == GPAD_PHYSAXIS_NONE || keynumMain == -1") )
    __debugbreak();
  if ( mapType >= GPAD_MAP_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 259, ASSERT_TYPE_ASSERT, "(mapType < GPAD_MAP_COUNT)", (const char *)&queryFormat, "mapType < GPAD_MAP_COUNT") )
    __debugbreak();
  if ( inputContext == (STRUCT_POINTER|FLOAT_POINTER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 260, ASSERT_TYPE_ASSERT, "(inputContext != InputContext::INVALID)", (const char *)&queryFormat, "inputContext != InputContext::INVALID") )
    __debugbreak();
  v13 = &gaGlobs[v10].virtualAxes[v9].mappings[(unsigned __int8)inputContext];
  v13->physicalAxisOther = physAxisOther;
  v13->keynumOther = keynumOther;
  v13->physicalAxisMain = physAxisMain;
  v13->keynumMain = keynumMain;
  v13->mapType = mapType;
  v13->thresholdAbs = thresholdAbs;
  gaGlobs[v10].activeInputContext = STRUCT_POINTER|FLOAT_POINTER;
}

/*
==============
CL_Gamepad_GetAlternateAxisBinding
==============
*/
__int64 CL_Gamepad_GetAlternateAxisBinding(LocalClientNum_t localClientNum, const char *command, InputContext currentInputContext)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  char v7; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  char v17; 
  bool v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v4 = localClientNum;
  LOBYTE(v5) = currentInputContext;
  v6 = -1;
  v7 = 1;
  if ( !strcmp_0(command, "+forward") )
  {
    LODWORD(v8) = 1;
  }
  else
  {
    v8 = 0i64;
    v9 = 0i64;
    while ( 1 )
    {
      v10 = command[v9++];
      if ( v10 != aBack_2[v9 - 1] )
        break;
      if ( v9 == 6 )
      {
        LODWORD(v8) = 1;
        v7 = 0;
        goto LABEL_29;
      }
    }
    if ( strcmp_0(command, "+moveright") )
    {
      if ( !strcmp_0(command, "+moveleft") )
      {
        v7 = 0;
      }
      else
      {
        v11 = 0i64;
        while ( 1 )
        {
          v12 = command[v11++];
          if ( v12 != aLookup_1[v11 - 1] )
            break;
          if ( v11 == 8 )
          {
            LODWORD(v8) = 3;
            goto LABEL_29;
          }
        }
        if ( !strcmp_0(command, "+lookdown") )
        {
          LODWORD(v8) = 3;
          v7 = 0;
        }
        else
        {
          v13 = 0i64;
          while ( 1 )
          {
            v14 = command[v13++];
            if ( v14 != aRight_4[v13 - 1] )
              break;
            if ( v13 == 7 )
            {
              LODWORD(v8) = 2;
              goto LABEL_29;
            }
          }
          v15 = 0i64;
          while ( 1 )
          {
            v16 = command[v15++];
            if ( v16 != aLeft_3[v15 - 1] )
              break;
            if ( v15 == 6 )
            {
              LODWORD(v8) = 2;
              v7 = 0;
              goto LABEL_29;
            }
          }
          while ( 1 )
          {
            v17 = command[v8++];
            v18 = v17 == aAttack[v8 - 1];
            if ( v17 != aAttack[v8 - 1] )
              break;
            if ( v8 == 8 )
            {
              v18 = v17 == aAttack[7];
              break;
            }
          }
          LODWORD(v8) = -1;
          if ( v18 )
            LODWORD(v8) = 4;
        }
      }
    }
  }
LABEL_29:
  if ( (_BYTE)v5 != 15 || (LOBYTE(v5) = gaGlobs[v4].activeInputContext, (_BYTE)v5 != 15) )
  {
    v5 = (unsigned __int8)v5;
    if ( (unsigned __int8)v5 >= 0xFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 1633, ASSERT_TYPE_ASSERT, "(unsigned)( inputContextIndex ) < (unsigned)( INPUT_CONTEXT_COUNT )", "inputContextIndex doesn't index INPUT_CONTEXT_COUNT\n\t%i not in [0, %i)", v5, 15) )
      __debugbreak();
    if ( !(_DWORD)v8 )
    {
      v19 = 2332 * v4 + 24 * v5;
      if ( v7 )
        v6 = *(GamepadPhysicalAxis *)((char *)&gaGlobs[0].virtualAxes[0].mappings[0].physicalAxisMain + v19);
      else
        v6 = *(GamepadPhysicalAxis *)((char *)&gaGlobs[0].virtualAxes[0].mappings[0].physicalAxisOther + v19);
    }
    switch ( (_DWORD)v8 )
    {
      case 1:
        v20 = 2332 * v4 + 24 * v5;
        if ( v7 )
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[1].mappings[0].physicalAxisMain + v20);
        else
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[1].mappings[0].physicalAxisOther + v20);
      case 2:
        v21 = 2332 * v4 + 24 * v5;
        if ( v7 )
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[2].mappings[0].physicalAxisMain + v21);
        else
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[2].mappings[0].physicalAxisOther + v21);
      case 3:
        v22 = 2332 * v4 + 24 * v5;
        if ( v7 )
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[3].mappings[0].physicalAxisMain + v22);
        else
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[3].mappings[0].physicalAxisOther + v22);
      case 4:
        v23 = 2332 * v4 + 24 * v5;
        if ( v7 )
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[4].mappings[0].physicalAxisMain + v23);
        else
          return *(unsigned int *)((char *)&gaGlobs[0].virtualAxes[4].mappings[0].physicalAxisOther + v23);
    }
  }
  return v6;
}

/*
==============
CL_Gamepad_UnbindAxis
==============
*/
void CL_Gamepad_UnbindAxis(LocalClientNum_t localClientNum, const InputContext inputContext, GamepadVirtualAxis virtAxis)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 

  v3 = virtAxis;
  v4 = localClientNum;
  if ( virtAxis >= GPAD_VIRTAXIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 257, ASSERT_TYPE_ASSERT, "(vaxisIndex < GPAD_VIRTAXIS_COUNT)", (const char *)&queryFormat, "vaxisIndex < GPAD_VIRTAXIS_COUNT") )
    __debugbreak();
  if ( inputContext == (STRUCT_POINTER|FLOAT_POINTER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 260, ASSERT_TYPE_ASSERT, "(inputContext != InputContext::INVALID)", (const char *)&queryFormat, "inputContext != InputContext::INVALID") )
    __debugbreak();
  v6 = 2332 * v4 + 24 * ((unsigned __int8)inputContext + 16 * v3);
  *(_QWORD *)((char *)&gaGlobs[0].virtualAxes[0].mappings[0].physicalAxisMain + v6) = -1i64;
  *(_QWORD *)((char *)&gaGlobs[0].virtualAxes[0].mappings[0].keynumMain + v6) = -1i64;
  *(_QWORD *)((char *)&gaGlobs[0].virtualAxes[0].mappings[0].mapType + v6) = 1i64;
  gaGlobs[v4].activeInputContext = STRUCT_POINTER|FLOAT_POINTER;
}

/*
==============
CL_Gamepad_UpdateActiveMappings
==============
*/
void CL_Gamepad_UpdateActiveMappings(LocalClientNum_t localClientNum, InputContext newActiveContext)
{
  __int64 v2; 
  GamepadVirtualAxisState *virtualAxes; 
  InputContext *p_activeInputContext; 
  __int64 Inherited; 
  GamepadVirtualAxisMapping *p_activeMapping; 
  __int64 v8; 
  double v10; 
  __int128 v12; 
  InputContext v13[16]; 

  v2 = localClientNum;
  if ( gaGlobs[v2].activeInputContext != newActiveContext )
  {
    virtualAxes = gaGlobs[v2].virtualAxes;
    p_activeInputContext = &gaGlobs[v2].activeInputContext;
    Inherited = CL_InputContext_GetInherited(newActiveContext, (InputContext (*)[15])v13);
    if ( virtualAxes != (GamepadVirtualAxisState *)p_activeInputContext )
    {
      p_activeMapping = &gaGlobs[v2].virtualAxes[0].activeMapping;
      do
      {
        v8 = 0i64;
        *(_QWORD *)&v12 = -1i64;
        *((_QWORD *)&v12 + 1) = -1i64;
        if ( Inherited <= 0 )
        {
          *(_QWORD *)&v10 = 3i64;
          _XMM0 = v12;
        }
        else
        {
          do
          {
            _XMM0 = *(_OWORD *)&virtualAxes->mappings[(unsigned __int8)v13[v8]].physicalAxisMain;
            v10 = *(double *)&virtualAxes->mappings[(unsigned __int8)v13[v8]].mapType;
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX != 222 )
              break;
            ++v8;
          }
          while ( v8 < Inherited );
        }
        *(_OWORD *)&p_activeMapping->physicalAxisMain = _XMM0;
        *(double *)&p_activeMapping->mapType = v10;
        p_activeMapping += 16;
        ++virtualAxes;
      }
      while ( virtualAxes != (GamepadVirtualAxisState *)p_activeInputContext );
    }
    gaGlobs[v2].activeInputContext = newActiveContext;
  }
}

/*
==============
CL_InitGamepadAxisBindings
==============
*/
void CL_InitGamepadAxisBindings(void)
{
  GpadAxesGlob *v0; 
  __int64 v1; 
  GpadAxesGlob *v2; 

  v0 = gaGlobs;
  do
  {
    v1 = 6i64;
    if ( v0 > (GpadAxesGlob *)v0->virtualAxes )
      v1 = 0i64;
    if ( v0 <= (GpadAxesGlob *)v0->virtualAxes )
    {
      v2 = v0;
      while ( v1 )
      {
        v2->axesValues[0] = 0;
        v2 = (GpadAxesGlob *)((char *)v2 + 4);
        --v1;
      }
    }
    ++v0;
  }
  while ( v0 != (GpadAxesGlob *)&unk_150AC1BE8 );
}

/*
==============
CL_InitGamepadCommands
==============
*/
void CL_InitGamepadCommands(void)
{
  Cmd_AddCommandInternal("bindaxis", Axis_Bind_f, &Axis_Bind_f_VAR);
  Cmd_AddCommandInternal("bindaxisc", Axis_BindC_f, &Axis_BindC_f_VAR);
  Cmd_AddCommandInternal("unbindaxis", Axis_Unbind_f, &Axis_Unbind_f_VAR);
  Cmd_AddCommandInternal("unbindallaxis", Axis_Unbindall_f, &Axis_Unbindall_f_VAR);
  Cmd_AddCommandInternal("axis_swap", Axis_Swap_f, &Axis_Swap_f_VAR);
  Cmd_AddCommandInternal("input_swap", Input_Swap_f, &Input_Swap_f_VAR);
}

/*
==============
ConvertTriggerAxisToKeyBinding
==============
*/
void ConvertTriggerAxisToKeyBinding(GamepadPhysicalAxis physAxis)
{
  LocalClientNum_t v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  GamepadVirtualAxisState *v6; 
  GamepadVirtualAxisState *v7; 
  GamepadVirtualAxisState *v8; 
  GamepadVirtualAxisState *v9; 
  GamepadVirtualAxisState *virtualAxes; 
  GamepadVirtualAxisState *v11; 
  _DWORD *v12; 
  char v13; 
  GamepadVirtualAxis v14; 
  int v15; 
  GamepadVirtualAxisState *v16; 
  GamepadVirtualAxisState *v17; 
  GamepadVirtualAxisState *v18; 
  GamepadVirtualAxisState *v19; 
  GamepadVirtualAxisState *v20; 

  if ( (unsigned int)(physAxis - 4) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 495, ASSERT_TYPE_ASSERT, "(physAxis == GPAD_PHYSAXIS_LTRIGGER || physAxis == GPAD_PHYSAXIS_RTRIGGER)", (const char *)&queryFormat, "physAxis == GPAD_PHYSAXIS_LTRIGGER || physAxis == GPAD_PHYSAXIS_RTRIGGER") )
    __debugbreak();
  v2 = Cmd_LocalClientNum();
  v3 = 0;
  v4 = v2;
  v5 = 0i64;
  v6 = &gaGlobs[v4].virtualAxes[1];
  v7 = &gaGlobs[v4].virtualAxes[2];
  v18 = v6;
  v8 = &gaGlobs[v4].virtualAxes[3];
  v19 = v7;
  v9 = &gaGlobs[v4].virtualAxes[4];
  v20 = v8;
  virtualAxes = gaGlobs[v4].virtualAxes;
  v16 = v9;
  v11 = &gaGlobs[v4].virtualAxes[5];
  v17 = v11;
  do
  {
    v12 = NULL;
    v13 = 0;
    v14 = GPAD_VIRTAXIS_NONE;
    if ( virtualAxes->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( virtualAxes->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_9;
    }
    v14 = GPAD_VIRTAXIS_SIDE;
    v12 = (_DWORD *)((char *)virtualAxes + v5 * 24);
LABEL_9:
    if ( v6->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( v6->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_13;
    }
    v14 = GPAD_VIRTAXIS_FORWARD;
    v12 = (_DWORD *)((char *)v6 + v5 * 24);
LABEL_13:
    if ( v7->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( v7->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_17;
    }
    v14 = GPAD_VIRTAXIS_YAW;
    v12 = (_DWORD *)((char *)v7 + v5 * 24);
LABEL_17:
    if ( v8->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( v8->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_21;
    }
    v14 = GPAD_VIRTAXIS_PITCH;
    v12 = (_DWORD *)((char *)v8 + v5 * 24);
LABEL_21:
    if ( v9->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( v9->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_25;
    }
    v14 = GPAD_VIRTAXIS_ATTACK;
    v12 = (_DWORD *)((char *)v9 + v5 * 24);
LABEL_25:
    if ( v11->mappings[v5].physicalAxisMain == physAxis )
    {
      v13 = 1;
    }
    else if ( v11->mappings[v5].physicalAxisOther != physAxis )
    {
      goto LABEL_29;
    }
    v14 = GPAD_VIRTAXIS_VERTICAL;
    v12 = (_DWORD *)((char *)v11 + v5 * 24);
LABEL_29:
    if ( !v12 )
      goto LABEL_47;
    if ( v13 )
    {
      if ( v12[1] == -1 )
        goto LABEL_32;
      *v12 = -1;
    }
    else
    {
      if ( *v12 == -1 )
      {
LABEL_32:
        CL_Gamepad_UnbindAxis(v2, (const InputContext)v3, v14);
        goto LABEL_36;
      }
      v12[1] = -1;
    }
LABEL_36:
    if ( v14 == GPAD_VIRTAXIS_FORWARD )
    {
      v15 = 49;
      if ( v13 )
        v15 = 47;
    }
    else if ( v14 )
    {
      if ( v14 != GPAD_VIRTAXIS_ATTACK )
        goto LABEL_47;
      v15 = 1;
    }
    else
    {
      v15 = 51;
      if ( v13 )
        v15 = 53;
    }
    CL_Keys_SetBinding(v2, (physAxis != GPAD_PHYSAXIS_LTRIGGER) + 18, (InputContext)v3, v15);
LABEL_47:
    v6 = v18;
    ++v3;
    v7 = v19;
    ++v5;
    v8 = v20;
    v9 = v16;
    v11 = v17;
  }
  while ( v3 < 15 );
}

/*
==============
Gamepad_InputTypeName
==============
*/
const char *Gamepad_InputTypeName(GamepadMapping mapType)
{
  __int64 v1; 

  v1 = mapType;
  if ( (unsigned int)mapType > GPAD_MAP_CBRT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 249, ASSERT_TYPE_ASSERT, "( ( mapType >= 0 && mapType < GPAD_MAP_COUNT ) )", "( mapType ) = %i", mapType) )
    __debugbreak();
  return inputTypeNames[v1];
}

/*
==============
Gamepad_StringToPhysicalAxis
==============
*/
__int64 Gamepad_StringToPhysicalAxis(const char *axisName)
{
  unsigned int v2; 
  const char **v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !axisName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_gamepad.cpp", 212, ASSERT_TYPE_ASSERT, "(axisName)", (const char *)&queryFormat, "axisName") )
    __debugbreak();
  v2 = 0;
  v3 = physicalAxisNames;
  do
  {
    v4 = *v3;
    v5 = 0x7FFFFFFFi64;
    if ( !axisName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(axisName - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return v2;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return v2;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 6 );
  return 0xFFFFFFFFi64;
}

/*
==============
Input_Swap_f
==============
*/
void Input_Swap_f()
{
  __int64 v0; 
  const char *v1; 
  const char *v2; 
  char v3; 
  GamepadPhysicalAxis v4; 
  GamepadPhysicalAxis v5; 
  int v6; 
  int v7; 
  int *v8; 
  GamepadPhysicalAxis v9; 
  int v10; 
  int v11; 

  if ( Cmd_Argc() != 3 )
  {
    Com_Printf(0, "input_swap <axis> <axis> / <key> <key> : Swap of physical keys/axis. It also swaps trigger axis as keys ( BUTTON_RTRIG and BUTTON_LTRIG )\n");
    return;
  }
  v0 = 2i64;
  v1 = Cmd_Argv(1);
  v2 = Cmd_Argv(2);
  v3 = 0;
  v4 = (unsigned int)Gamepad_StringToPhysicalAxis(v1);
  v5 = (unsigned int)Gamepad_StringToPhysicalAxis(v2);
  v10 = Com_Keys_StringToKeynum(v1);
  v6 = v10;
  v11 = Com_Keys_StringToKeynum(v2);
  v7 = v11;
  if ( v6 == 19 )
  {
    v4 = GPAD_PHYSAXIS_RTRIGGER;
  }
  else if ( v6 == 18 )
  {
    v4 = GPAD_PHYSAXIS_LTRIGGER;
  }
  if ( v11 == 19 )
  {
    v5 = GPAD_PHYSAXIS_RTRIGGER;
  }
  else if ( v11 == 18 )
  {
    v5 = GPAD_PHYSAXIS_LTRIGGER;
  }
  if ( v4 != GPAD_PHYSAXIS_NONE && v5 != GPAD_PHYSAXIS_NONE )
    v3 = Axis_Swap(v4, v5);
  if ( v6 == -1 || v7 == -1 )
  {
    Com_Printf(0, "ERROR: invalid usage of input_swap <axis> <axis> / <key> <key> : Swap of physical keys/axis. It also swaps trigger axis as keys ( BUTTON_RTRIG and BUTTON_LTRIG )\n");
  }
  else
  {
    if ( !v3 )
    {
      v8 = &v10;
      while ( *v8 != 19 )
      {
        if ( *v8 == 18 )
        {
          v9 = GPAD_PHYSAXIS_LTRIGGER;
          goto LABEL_22;
        }
LABEL_23:
        ++v8;
        if ( !--v0 )
          goto LABEL_24;
      }
      v9 = GPAD_PHYSAXIS_RTRIGGER;
LABEL_22:
      ConvertTriggerAxisToKeyBinding(v9);
      goto LABEL_23;
    }
LABEL_24:
    CL_Keys_CopyBind(v6, v7, 1);
  }
}

