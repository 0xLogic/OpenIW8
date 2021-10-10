/*
==============
CL_InputMP_SpecPrevKeyboard
==============
*/

void __fastcall CL_InputMP_SpecPrevKeyboard(const LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_SpecPrevKeyboard@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_GetCommandDelta
==============
*/

bool __fastcall CL_InputMP_GetCommandDelta(const LocalClientNum_t localClientNum, const ClActiveClientMP *const cl, const ClConnectionMP *const clc, unsigned __int8 *outCmdDelta, usercmd_s *outCmd, CmdPredict *outPredict)
{
  return ?CL_InputMP_GetCommandDelta@@YA_NW4LocalClientNum_t@@QEBVClActiveClientMP@@QEBVClConnectionMP@@PEAEPEAUusercmd_s@@PEAUCmdPredict@@@Z(localClientNum, cl, clc, outCmdDelta, outCmd, outPredict);
}

/*
==============
CL_InputMP_IsPlayerUsingBumperPingLayout
==============
*/

bool __fastcall CL_InputMP_IsPlayerUsingBumperPingLayout(const LocalClientNum_t localClientNum)
{
  return ?CL_InputMP_IsPlayerUsingBumperPingLayout@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_ExecuteMarkCommit
==============
*/

void __fastcall CL_InputMP_ExecuteMarkCommit(const LocalClientNum_t localClientNum)
{
  ?CL_InputMP_ExecuteMarkCommit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_UseReload
==============
*/

void __fastcall CL_InputMP_UseReload(LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_UseReload@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_SpecPrev
==============
*/

void __fastcall CL_InputMP_SpecPrev(LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_SpecPrev@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_GetLastInputTimeForAnyLocalPlayer
==============
*/

int __fastcall CL_InputMP_GetLastInputTimeForAnyLocalPlayer()
{
  return ?CL_InputMP_GetLastInputTimeForAnyLocalPlayer@@YAHXZ();
}

/*
==============
CL_InputMP_SpecNextKeyboard
==============
*/

void __fastcall CL_InputMP_SpecNextKeyboard(const LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_SpecNextKeyboard@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_UpdateCmdDemoInput
==============
*/

void __fastcall CL_InputMP_UpdateCmdDemoInput(LocalClientNum_t localClientNum, ClActiveClientMP *cl)
{
  ?CL_InputMP_UpdateCmdDemoInput@@YAXW4LocalClientNum_t@@PEAVClActiveClientMP@@@Z(localClientNum, cl);
}

/*
==============
CL_InputMP_AdjustViewanglesForKeyboard
==============
*/

void __fastcall CL_InputMP_AdjustViewanglesForKeyboard(LocalClientNum_t localClientNum)
{
  ?CL_InputMP_AdjustViewanglesForKeyboard@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_GamepadMove
==============
*/

void __fastcall CL_InputMP_GamepadMove(LocalClientNum_t localClientNum, float frametime_base, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_InputMP_GamepadMove@@YAXW4LocalClientNum_t@@MPEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, frametime_base, cmd, outClearButtons);
}

/*
==============
CL_InputMP_RemoteControlMove
==============
*/

void __fastcall CL_InputMP_RemoteControlMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons, float mx, float my)
{
  ?CL_InputMP_RemoteControlMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@MM@Z(localClientNum, cmd, outClearButtons, mx, my);
}

/*
==============
CL_InputMP_MouseMove
==============
*/

void __fastcall CL_InputMP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, float frametime_base, float rawMx, float rawMy)
{
  ?CL_InputMP_MouseMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@MMM@Z(localClientNum, cmd, frametime_base, rawMx, rawMy);
}

/*
==============
CL_InputMP_IsReadyForUserCommand
==============
*/

bool __fastcall CL_InputMP_IsReadyForUserCommand(LocalClientNum_t localClientNum)
{
  return ?CL_InputMP_IsReadyForUserCommand@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_UpdateAngleWrap
==============
*/

void __fastcall CL_InputMP_UpdateAngleWrap(ClActiveClientMP *cl, const vec3_t *oldAngles)
{
  ?CL_InputMP_UpdateAngleWrap@@YAXPEAVClActiveClientMP@@AEBTvec3_t@@@Z(cl, oldAngles);
}

/*
==============
CL_InputMP_ToggleSpecKeyboard
==============
*/

void __fastcall CL_InputMP_ToggleSpecKeyboard(const LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_ToggleSpecKeyboard@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_ReadyToSendPacket
==============
*/

int __fastcall CL_InputMP_ReadyToSendPacket(LocalClientNum_t localClientNum)
{
  return ?CL_InputMP_ReadyToSendPacket@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_SavePredictedData
==============
*/

void __fastcall CL_InputMP_SavePredictedData(const LocalClientNum_t localClientNum)
{
  ?CL_InputMP_SavePredictedData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_CmdButtons
==============
*/

void __fastcall CL_InputMP_CmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_InputMP_CmdButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_InputMP_ExecuteMark
==============
*/

void __fastcall CL_InputMP_ExecuteMark(const LocalClientNum_t localClientNum, bool nextFrame)
{
  ?CL_InputMP_ExecuteMark@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, nextFrame);
}

/*
==============
CL_InputMP_KeyActive
==============
*/

bool __fastcall CL_InputMP_KeyActive(LocalClientNum_t localClientNum, int kbButton)
{
  return ?CL_InputMP_KeyActive@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, kbButton);
}

/*
==============
CL_InputMP_ToggleSpec
==============
*/

void __fastcall CL_InputMP_ToggleSpec(LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_ToggleSpec@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_ClearButtonsPressed
==============
*/

void __fastcall CL_InputMP_ClearButtonsPressed(const LocalClientNum_t localClientNum, const ButtonSet *clearButtons)
{
  ?CL_InputMP_ClearButtonsPressed@@YAXW4LocalClientNum_t@@AEBUButtonSet@@@Z(localClientNum, clearButtons);
}

/*
==============
CL_InputMP_ExecBinding
==============
*/

void __fastcall CL_InputMP_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  ?CL_InputMP_ExecBinding@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, kb, key, forceNotify);
}

/*
==============
CL_InputMP_SpecNext
==============
*/

void __fastcall CL_InputMP_SpecNext(LocalClientNum_t localClientNum, int key)
{
  ?CL_InputMP_SpecNext@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
CL_InputMP_KeyMove
==============
*/

void __fastcall CL_InputMP_KeyMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_InputMP_KeyMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_InputMP_SetCommandDurationMsg
==============
*/

void __fastcall CL_InputMP_SetCommandDurationMsg(const LocalClientNum_t localClientNum, msg_t *msg)
{
  ?CL_InputMP_SetCommandDurationMsg@@YAXW4LocalClientNum_t@@PEAUmsg_t@@@Z(localClientNum, msg);
}

/*
==============
CL_InputMP_FrontEndMove
==============
*/

void __fastcall CL_InputMP_FrontEndMove(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_InputMP_FrontEndMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_InputMP_ProcessFrontendCommand
==============
*/

bool __fastcall CL_InputMP_ProcessFrontendCommand(LocalClientNum_t localClientNum)
{
  return ?CL_InputMP_ProcessFrontendCommand@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_KeyActiveOrPressed
==============
*/

bool __fastcall CL_InputMP_KeyActiveOrPressed(LocalClientNum_t localClientNum, int kbButton)
{
  return ?CL_InputMP_KeyActiveOrPressed@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, kbButton);
}

/*
==============
CL_InputMP_FinishMove
==============
*/

void __fastcall CL_InputMP_FinishMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_InputMP_FinishMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_InputMP_ExecuteMarkCancel
==============
*/

void __fastcall CL_InputMP_ExecuteMarkCancel(const LocalClientNum_t localClientNum)
{
  ?CL_InputMP_ExecuteMarkCancel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_AdjustViewanglesForKeyboard
==============
*/
void CL_InputMP_AdjustViewanglesForKeyboard(LocalClientNum_t localClientNum)
{
  kbutton_t *v2; 
  ClActiveClientMP *ClientMP; 
  ClActiveClientMP *v4; 
  ClActiveClientMP *v5; 
  int frametime; 
  const dvar_t *v7; 
  float v9; 
  double MaxYawSpeed; 
  float v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  double MaxPitchSpeed; 
  const dvar_t *v17; 
  double v20; 
  float v21; 
  double v22; 
  vec3_t clViewangles; 

  v2 = g_playersKb[localClientNum];
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v4 = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v4->snap.ps.pm_flags, ACTIVE, 0x10u) && (!(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) || !CL_InputMP_DisableFrontEndMovement(localClientNum)) )
  {
    v5 = ClActiveClientMP::GetClientMP(localClientNum);
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v5->snap.ps.pm_flags, ACTIVE, 0x11u) )
    {
      frametime = cls.frametime;
      if ( v2[9].active )
      {
        v7 = DVARFLT_cl_anglespeedkey;
        if ( !DVARFLT_cl_anglespeedkey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anglespeedkey") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        v9 = (float)((float)frametime * 0.001) * v7->current.value;
      }
      else
      {
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        v9 = (float)cls.frametime * 0.001;
      }
      ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
      if ( !v2[8].active )
      {
        MaxYawSpeed = CL_GetMaxYawSpeed(localClientNum);
        v11 = *(float *)&MaxYawSpeed;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_yawspeed, "cl_yawspeed");
        if ( v11 > 0.0 )
          __asm { vminss  xmm0, xmm0, xmm6 }
        v12 = *(float *)&_XMM0 * v9;
        v13 = CL_Input_KeyState(v2 + 1);
        clViewangles.v[1] = clViewangles.v[1] - (float)(*(float *)&v13 * v12);
        v14 = clViewangles.v[1];
        v15 = CL_Input_KeyState(v2);
        clViewangles.v[1] = (float)(*(float *)&v15 * v12) + v14;
      }
      MaxPitchSpeed = CL_GetMaxPitchSpeed(localClientNum);
      v17 = DVARFLT_cl_pitchspeed;
      if ( *(float *)&MaxPitchSpeed <= 0.0 )
      {
        if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        LODWORD(_XMM1) = v17->current.integer;
      }
      else
      {
        if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        _XMM0 = v17->current.unsignedInt;
        __asm { vminss  xmm1, xmm0, xmm6 }
      }
      v20 = CL_Input_KeyState(v2 + 4);
      clViewangles.v[0] = clViewangles.v[0] - (float)(*(float *)&v20 * (float)(*(float *)&_XMM1 * v9));
      v21 = clViewangles.v[0];
      v22 = CL_Input_KeyState(v2 + 5);
      clViewangles.v[0] = (float)(*(float *)&v22 * (float)(*(float *)&_XMM1 * v9)) + v21;
      ClActiveClient_SetCLViewangles(ClientMP, &clViewangles);
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
}

/*
==============
CL_InputMP_CanRunSpecKeyboardCommand
==============
*/
bool CL_InputMP_CanRunSpecKeyboardCommand(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  if ( CL_Input_IsGamepadEnabled(localClientNum) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1352, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return !LocalClientGlobals->inKillCam && (LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33));
}

/*
==============
CL_InputMP_ClearButtonsPressed
==============
*/
void CL_InputMP_ClearButtonsPressed(const LocalClientNum_t localClientNum, const ButtonSet *clearButtons)
{
  CL_Input_ClearButtonsPressed(localClientNum, clearButtons);
  if ( clearButtons->spectatorButton )
    SetSpectatorPersoness(localClientNum, clearButtons->spectatorThirdPersonButton);
}

/*
==============
CL_InputMP_CmdButtons
==============
*/
void CL_InputMP_CmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v3; 
  __int64 v6; 
  int v7; 
  ClActiveClientMP *ClientMP; 
  int pm_type; 
  __int64 v10; 
  ClSnapshot *p_snap; 
  __int64 v12; 
  __int64 v13; 

  v3 = localClientNum;
  CL_Input_CmdButtons(localClientNum, cmd, outClearButtons);
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  v6 = v3;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v13) = 2;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !clientUIActives[v6].frontEndSceneState[0] || CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v3) )
  {
    v7 = 3352;
    if ( !CL_Input_IsGamepadEnabled((LocalClientNum_t)v3) )
      v7 = 3864;
    if ( (~v7 & clientUIActives[v6].keyCatchers) != 0 )
      cmd->buttons |= 0x800000ui64;
  }
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.weapCommon.weapFlags, ACTIVE, 0) )
    cmd->buttons |= 0x10ui64;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v13) = 2;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( clientUIActives[v6].connectionState == CA_ACTIVE )
  {
    pm_type = ClientMP->snap.ps.pm_type;
    if ( ((pm_type - 2) & 0xFFFFFFFC) == 0 && pm_type != 4 )
      CL_Input_UpdateCmdButton((LocalClientNum_t)v3, &cmd->buttons, 12, 0x100ui64, outClearButtons);
  }
  v10 = v3;
  if ( g_playersKb[v3][38].active || g_playersKb[v10][38].wasPressed )
    cmd->buttons |= 0x200ui64;
  if ( g_playersKb[v10][37].active || g_playersKb[v10][37].wasPressed )
    cmd->buttons |= 1ui64;
  p_snap = &ClientMP->snap;
  if ( !p_snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_Skydive_IsSkydiving(&p_snap->ps) && BG_Ladder_IsDualWieldingAllowed(&p_snap->ps) && p_snap->ps.weapCommon.lastWeaponHand == WEAPON_HAND_LEFT && (g_playersKb[v10][37].active || g_playersKb[v10][37].wasPressed) )
    cmd->buttons |= 0x20000ui64;
  g_playersKb[v10][37].wasPressed = 0;
  CL_Input_ValidateCmdButtons((const LocalClientNum_t)v3, cmd);
}

/*
==============
CL_InputMP_DisableFrontEndMovement
==============
*/
bool CL_InputMP_DisableFrontEndMovement(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 186, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) != ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) != ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  return !Com_FrontEndScene_FreeCamEnabled();
}

/*
==============
CL_InputMP_ExecBinding
==============
*/
void CL_InputMP_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  connstate_t connectionState; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  __int16 cursorHintBinding; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  bool v18; 
  ClActiveClient *Client; 
  bool mustNotActivatePing; 
  ClActiveClientMP *ClientMP; 
  bool v22; 
  bool v23; 
  __int64 v24; 
  ClActiveClientMP *v25; 
  bool v26; 
  __int64 v27; 
  StanceState stance; 
  ClActiveClientMP *v29; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v32; 
  int EquippedWeaponIndex; 
  __int64 v34; 
  int ControllerFromClient; 
  ClActiveClientMP *v36; 
  ClActiveClientMP *v37; 
  int v38; 
  int v39; 
  int v40; 
  const char *v41; 
  int v42; 
  int v43; 
  Online_Loot *v44; 
  lua_State *v45; 
  __int64 v46; 
  __int64 v47; 
  StringTable *tablePtr; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v8 = v4;
  v9 = v4;
  if ( (clientUIActives[v4].frontEndSceneState[0] || !clientUIActives[v8].cgameInitialized) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1481, ASSERT_TYPE_ASSERT, "(CL_IsGameClientActive( localClientNum ))", (const char *)&queryFormat, "CL_IsGameClientActive( localClientNum )") )
    __debugbreak();
  if ( !CG_IsFullyInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1484, ASSERT_TYPE_ASSERT, "(CG_IsFullyInitialized( localClientNum ))", (const char *)&queryFormat, "CG_IsFullyInitialized( localClientNum )") )
    __debugbreak();
  if ( kb )
    CL_MainMP_CheckNotify((LocalClientNum_t)v4, kb, forceNotify);
  v10 = com_frameTime;
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v47) = 2;
    LODWORD(v46) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  connectionState = clientUIActives[v8].connectionState;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  cursorHintBinding = LocalClientGlobals->predictedPlayerState.cursorHintBinding;
  if ( cursorHintBinding )
  {
    if ( ((cursorHintBinding & 1) == 0 || (unsigned int)(cursorHintBinding - 117) <= 0x83 || cursorHintBinding >= 255) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1499, ASSERT_TYPE_ASSERT, "(Com_Keys_IsUseCmd( ps->cursorHintBinding ))", (const char *)&queryFormat, "Com_Keys_IsUseCmd( ps->cursorHintBinding )") )
      __debugbreak();
    v15 = p_predictedPlayerState->cursorHintBinding;
    if ( v15 == kb && p_predictedPlayerState->cursorHint )
    {
      CL_Input_KeyDown(&g_playersKb[v4][41], key, v10);
    }
    else if ( v15 + 1 == kb )
    {
      CL_Input_KeyUp(&g_playersKb[v4][41], key, v10);
    }
  }
  switch ( kb )
  {
    case 5:
      goto $LN25_74;
    case 7:
      v17 = v4;
      if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v17][52], key, v10);
      CL_Input_KeyDown(&g_playersKb[v17][24], key, v10);
      CL_Input_KeyDown(&g_playersKb[v17][46], key, v10);
      CG_OnOffhandKeyDown((LocalClientNum_t)v4, 0x2000ui64);
      return;
    case 31:
      if ( connectionState < CA_CONNECTED )
        ClientMP = NULL;
      else
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
      v22 = connectionState >= CA_CONNECTED && ClientMP;
      v23 = CL_Input_IgnoreStance((LocalClientNum_t)v4);
      CL_Input_OnStanceDown((const LocalClientNum_t)v4, ClientMP, key, v23, v22);
      v24 = v4;
      if ( CL_Input_CanKeybindTriggerCopyLoadout((const LocalClientNum_t)v4, kb, key, v10) )
        CL_Input_KeyDown(&g_playersKb[v24][55], key, v10);
      if ( CL_Input_CanKeybindTriggerCutParachute((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v24][56], key, v10);
      if ( CL_Input_CanKeybindTriggerSwitchSeat((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v24][50], key, v10);
      return;
    case 32:
      if ( connectionState < CA_CONNECTED )
        v25 = NULL;
      else
        v25 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
      v26 = CL_Input_IgnoreStance((LocalClientNum_t)v4);
      CL_Input_OnStanceUp((const LocalClientNum_t)v4, v25, key, v26, connectionState >= CA_CONNECTED);
      CL_Input_KeyUp(&g_playersKb[v4][55], key, v10);
      CL_Input_KeyUp(&g_playersKb[v4][56], key, v10);
      CL_Input_KeyUp(&g_playersKb[v4][50], key, v10);
      return;
    case 33:
      v27 = v4;
      if ( CL_Input_CanKeybindTriggerSwitchSeat((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v27][50], key, v10);
      if ( !CL_Input_IsGamepadEnabled((LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v27][51], key, v10);
      if ( connectionState < CA_CONNECTED )
        return;
      CL_Input_KeyDown(&g_playersKb[v27][12], key, v10);
      if ( CL_Input_IgnoreStance((LocalClientNum_t)v4) )
        goto LABEL_70;
      if ( BG_GameInterface_IsTakedownPending(p_predictedPlayerState) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 5u) )
        return;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x1Du) )
        goto LABEL_70;
      stance = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4)->stance;
      if ( (unsigned int)(stance - 3) <= 1 )
      {
        CL_SetStance((LocalClientNum_t)v4, CL_STANCE_STAND, 5u);
LABEL_70:
        CL_Input_KeyDown(&g_playersKb[v27][10], key, v10);
        return;
      }
      if ( stance == CL_STANCE_STAND )
        goto LABEL_70;
      CL_SetStance((LocalClientNum_t)v4, CL_STANCE_STAND, 0);
      return;
    case 39:
      if ( connectionState >= CA_CONNECTED )
      {
        v29 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
        v32 = BG_UsingAlternate(p_predictedPlayerState);
        if ( !BG_IsAimDownSight(CurrentWeaponForPlayer, v32) )
          goto LABEL_88;
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
          goto LABEL_87;
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( CurrentWeaponForPlayer->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, p_predictedPlayerState, CurrentWeaponForPlayer), EquippedWeaponIndex >= 0) && (v34 = EquippedWeaponIndex, (playerState_s *)((char *)p_predictedPlayerState + 4 * v34) != (playerState_s *)-1540i64) && p_predictedPlayerState->weapEquippedData[v34].dualWielding )
        {
LABEL_88:
          v29->usingAds = 0;
          CL_Input_KeyDown(&g_playersKb[v9][9], key, v10);
          CL_Input_KeyDown(&g_playersKb[v9][31], key, v10);
        }
        else
        {
LABEL_87:
          v29->usingAds = !v29->usingAds;
        }
      }
      CL_Input_KeyDown(&g_playersKb[v9][38], key, v10);
      return;
    case 76:
      if ( connectionState >= CA_CONNECTED )
      {
        g_playersKb[v4][14].active = 0;
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( !GamerProfile_GetFreeLook(ControllerFromClient) )
        {
          v36 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
          ClActiveClient_SetCLViewangle(v36, 0, COERCE_CONST_FLOAT(LODWORD(v36->snap.ps.delta_angles.v[0]) ^ _xmm));
        }
      }
      return;
    case 117:
    case 118:
      if ( connectionState >= CA_CONNECTED )
      {
        v37 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
        v37->Pause(v37);
      }
      return;
    case 119:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v38 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v38) )
          Cbuf_AddText((LocalClientNum_t)v4, "chatmodepublic\n");
      }
      return;
    case 120:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v39 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v39) )
          Cbuf_AddText((LocalClientNum_t)v4, "chatmodeteam\n");
      }
      return;
    case 121:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v40 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v40) )
          Cbuf_AddText((LocalClientNum_t)v4, "chatmodelastused\n");
      }
      return;
    case 123:
      CG_View_ToggleCenterView((LocalClientNum_t)v4);
      return;
    case 129:
    case 130:
    case 131:
    case 132:
    case 135:
    case 136:
    case 137:
    case 138:
      return;
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
      if ( createAClassFeatureID != -1 || (StringTable_GetAsset("loot/feature_ids.csv", (const StringTable **)&tablePtr), v41 = StringTable_Lookup(tablePtr, 1, "create_a_class", 0), createAClassFeatureID = atoi(v41), createAClassFeatureID != -1) )
      {
        v42 = -1;
        v43 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        v44 = Online_Loot::GetInstance();
        if ( (Online_Loot::GetItemUnlockQuantity(v44, v43, createAClassFeatureID) || Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch")) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
        {
          if ( (unsigned int)(kb - 147) > 4 )
          {
            if ( (unsigned int)(kb - 240) <= 4 )
            {
              v42 = kb - 235;
              CG_ServerCmd_NotifyServer((const LocalClientNum_t)v4, "class_select", kb - 235);
            }
          }
          else
          {
            CG_ServerCmd_NotifyServer((const LocalClientNum_t)v4, "class_select", kb - 147);
            v42 = kb - 147;
          }
          LUI_BeginEvent((LocalClientNum_t)v4, "lui_fastloadout_keybind_used", LUI_luaVM);
          v45 = LUI_luaVM;
          if ( LUI_luaVM )
          {
            if ( (unsigned int)v42 <= 9 )
            {
              LUI_SetTableInt("index", v42, LUI_luaVM);
              v45 = LUI_luaVM;
            }
            LUI_EndEvent(v45);
          }
        }
      }
      return;
    case 251:
      CL_Input_KeyDown(&g_playersKb[v4][65], key, v10);
$LN25_74:
      v16 = v4;
      if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v16][51], key, v10);
      CL_Input_KeyDown(&g_playersKb[v16][23], key, v10);
      CL_Input_KeyDown(&g_playersKb[v16][46], key, v10);
      CG_OnOffhandKeyDown((LocalClientNum_t)v4, 0x1000ui64);
      return;
    case 253:
      if ( !CL_InputMP_IsPlayerUsingBumperPingLayout((const LocalClientNum_t)v4) )
      {
        v18 = !CL_Input_IsGamepadEnabled((LocalClientNum_t)v4);
        CL_InputMP_ExecuteMark((const LocalClientNum_t)v4, v18);
      }
      CL_Input_KeyDown(&g_playersKb[v4][66], key, v10);
      return;
    case 254:
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      mustNotActivatePing = Client->mustNotActivatePing;
      if ( CL_InputMP_IsPlayerUsingBumperPingLayout((const LocalClientNum_t)v4) && !mustNotActivatePing )
        CL_InputMP_ExecuteMark((const LocalClientNum_t)v4, 0);
      Client->mustNotActivatePing = 0;
      CL_Input_KeyUp(&g_playersKb[v4][66], key, v10);
      return;
    default:
      CL_Input_ExecBindingCommon((LocalClientNum_t)v4, kb, key, forceNotify);
      return;
  }
}

/*
==============
CL_InputMP_ExecuteMark
==============
*/
void CL_InputMP_ExecuteMark(const LocalClientNum_t localClientNum, bool nextFrame)
{
  const dvar_t *v4; 

  if ( CG_CalloutMarkerPing_SystemActive() )
  {
    v4 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
    if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      CG_CalloutMarkerPing_QueueMarkAction(localClientNum, 0, nextFrame);
    else
      CL_InputMP_ExecuteMarkNotify(localClientNum);
  }
}

/*
==============
CL_InputMP_ExecuteMarkCancel
==============
*/
void CL_InputMP_ExecuteMarkCancel(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
  if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    CG_CalloutMarkerPing_Predicted_Cancel(localClientNum);
}

/*
==============
CL_InputMP_ExecuteMarkCommit
==============
*/
void CL_InputMP_ExecuteMarkCommit(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 

  if ( CG_CalloutMarkerPing_SystemActive() )
  {
    v2 = DCONST_DVARBOOL_calloutmarkerping_use_prediction;
    if ( !DCONST_DVARBOOL_calloutmarkerping_use_prediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_use_prediction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      CG_CalloutMarkerPing_Predicted_Commit(localClientNum);
    else
      CL_InputMP_ExecuteMarkNotify(localClientNum);
  }
}

/*
==============
CL_InputMP_ExecuteMarkNotify
==============
*/
void CL_InputMP_ExecuteMarkNotify(const LocalClientNum_t localClientNum)
{
  int LootPingPopupIndex; 

  if ( CG_CalloutMarkerPing_SystemActive() )
  {
    LootPingPopupIndex = ScriptableCl_GetLootPingPopupIndex(localClientNum);
    if ( LootPingPopupIndex == -1 )
      CG_ServerCmd_NotifyServer(localClientNum, "dpad_mark_location", 1);
    else
      CG_ServerCmd_NotifyServer(localClientNum, "dpad_mark_scriptable", LootPingPopupIndex);
  }
}

/*
==============
CL_InputMP_FinishMove
==============
*/
void CL_InputMP_FinishMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ClActiveClientMP *ClientMP; 
  int v5; 
  vec3_t *p_cgameKickAngles; 
  vec3_t *p_clViewangles; 
  signed __int64 v9; 
  bool v10; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  vec3_t clViewangles; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  cmd->weapon = ClientMP->cgameUserCmdWeapon;
  cmd->offHand = ClientMP->cgameUserCmdOffHand;
  cmd->isAlternate = ClientMP->cgameUserCmdAlternate != 0;
  BG_AssertOffhandIndexOrNone(&cmd->offHand);
  cmd->serverTime = ClientMP->serverTime;
  cmd->inputTime = ClientMP->cmdInputAccumTimeMs;
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  v5 = 0;
  p_cgameKickAngles = &ClientMP->cgameKickAngles;
  _XMM6 = 0i64;
  p_clViewangles = &clViewangles;
  v9 = (char *)p_cgameKickAngles - (char *)&clViewangles;
  v10 = 1;
  do
  {
    if ( !v10 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
      LODWORD(v16) = 3;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    v12 = MSG_PackSignedFloat((float)((float)((float)(*(float *)((char *)p_clViewangles->v + v9) + p_clViewangles->v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0, 180.0, 0x14u);
    if ( (unsigned int)v5 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    *(_DWORD *)((char *)p_clViewangles->v + (char *)&cmd->angles - (char *)&clViewangles) = v12;
    ++v5;
    p_clViewangles = (vec3_t *)((char *)p_clViewangles + 4);
    v10 = (unsigned int)v5 < 3;
  }
  while ( v5 < 3 );
  CL_Input_FinishCmdButtons(localClientNum, cmd, outClearButtons);
  memset(&clViewangles, 0, sizeof(clViewangles));
}

/*
==============
CL_InputMP_FrontEndMove
==============
*/
void CL_InputMP_FrontEndMove(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  cmd->buttons |= 0x800000ui64;
  CL_Input_AddCurrentStanceToCmd(localClientNum, cmd);
}

/*
==============
CL_InputMP_GamepadMove
==============
*/
void CL_InputMP_GamepadMove(LocalClientNum_t localClientNum, float frametime_base, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int128 v4; 
  __int64 v7; 
  ClActiveClientMP *ClientMP; 
  ClActiveClientMP *v9; 
  __int128 v10; 
  double ClientLookInversion; 
  __int128 v13; 
  ClActiveClientMP *v21; 
  float v22; 
  float v23; 
  double v24; 
  double v26; 
  float v27; 
  double v28; 
  float v29; 
  const dvar_t *v30; 
  double v34; 
  int forwardmove; 
  int rightmove; 
  int pitchmove; 
  int yawmove; 
  __int64 v39; 
  const dvar_t *v40; 
  CgWeaponMap *Instance; 
  playerState_s *p_predictedPlayerState; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v45; 
  bool v46; 
  double Button; 
  cg_t *LocalClientGlobals; 
  double v49; 
  double MaxPitchSpeed; 
  double MaxYawSpeed; 
  cg_t *v52; 
  vec3_t outClearButtonsa; 
  int portIndex[2]; 
  __int64 v55; 
  AimOutput output; 
  AimInput input; 

  v55 = -2i64;
  *(_QWORD *)outClearButtonsa.v = outClearButtons;
  v7 = localClientNum;
  if ( !CL_Input_IsGamepadEnabled(localClientNum) )
    return;
  cmd->inputFromGamepad = 1;
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v7);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x10u) || (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v7) && CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v7) )
  {
    g_lastInputTimeForAnyLocalPlayer = com_frameTime;
    return;
  }
  if ( CL_Cameraman_isActive() )
    return;
  v9 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v7);
  portIndex[1] = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
  *(double *)&v4 = CL_GamepadAxisValue((LocalClientNum_t)v7, 3);
  v10 = v4;
  ClientLookInversion = CL_Input_GetClientLookInversion((LocalClientNum_t)v7);
  v13 = v10;
  *(float *)&v13 = *(float *)&v10 * *(float *)&ClientLookInversion;
  _XMM6 = v13;
  _XMM0 = PM_AllowCameraInputForAxis(&v9->snap.ps, 0, *(float *)&v13);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  portIndex[0] = _XMM0;
  *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v7, 2);
  _XMM6 = _XMM0 ^ _xmm;
  _XMM0 = PM_AllowCameraInputForAxis(&v9->snap.ps, 1, COERCE_FLOAT(_XMM0 ^ _xmm));
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  v21 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v7);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v21->snap.ps.pm_flags, ACTIVE, 0x11u) )
  {
    g_lastInputTimeForAnyLocalPlayer = com_frameTime;
    v22 = 0.0;
    v23 = 0.0;
  }
  else
  {
    v22 = *(float *)portIndex;
    v23 = *(float *)&_XMM0;
  }
  v24 = CL_GamepadAxisValue((LocalClientNum_t)v7, 1);
  LODWORD(_XMM6) = LODWORD(v24);
  v26 = CL_GamepadAxisValue((LocalClientNum_t)v7, 4);
  v27 = *(float *)&v26;
  v28 = CL_GamepadAxisValue((LocalClientNum_t)v7, 0);
  v29 = *(float *)&v28;
  if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v7, 1024) )
  {
    if ( CL_GamepadGetPhysicalAxisFromVirtualAxis((LocalClientNum_t)v7, 3) == 1 )
      v22 = 0.0;
    else
      LODWORD(_XMM6) = 0;
    if ( CL_GamepadGetPhysicalAxisFromVirtualAxis((LocalClientNum_t)v7, 2) )
      v29 = 0.0;
    else
      v23 = 0.0;
  }
  v30 = DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection;
  if ( !DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardCancelMinBackwardDeflection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( *(float *)&_XMM6 >= v30->current.value )
  {
    _XMM0 = v9->autoForward;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm6, xmm1, xmm6, xmm2 }
  }
  else
  {
    v9->autoForward = 0;
  }
  if ( v22 != 0.0 || v23 != 0.0 || *(float *)&_XMM6 != 0.0 || v27 != 0.0 || v29 != 0.0 )
    g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  v34 = BG_CmdScale_CalcInputScale(*(float *)&_XMM6, v29);
  forwardmove = (int)(float)((float)(*(float *)&v34 * *(float *)&_XMM6) * 127.0);
  rightmove = (int)(float)((float)(*(float *)&v34 * v29) * 127.0);
  pitchmove = (int)(float)(v22 * 127.0);
  yawmove = (int)(float)(v23 * 127.0);
  if ( !rightmove )
    rightmove = cmd->rightmove;
  cmd->rightmove = CL_Input_ClampInputChar(rightmove);
  if ( !forwardmove )
    forwardmove = cmd->forwardmove;
  cmd->forwardmove = CL_Input_ClampInputChar(forwardmove);
  if ( !pitchmove )
    pitchmove = cmd->pitchmove;
  cmd->pitchmove = CL_Input_ClampInputChar(pitchmove);
  if ( !yawmove )
    yawmove = cmd->yawmove;
  cmd->yawmove = CL_Input_ClampInputChar(yawmove);
  CL_InputMP_ValidateZeroCmds(cmd);
  v39 = v7;
  if ( g_playersKb[v7][32].active || g_playersKb[v39][32].wasPressed )
  {
    cmd->buttons |= 2ui64;
    g_playersKb[v39][32].wasPressed = 0;
  }
  else
  {
    cmd->buttons &= ~2ui64;
  }
  v40 = DVARFLT_cl_analog_attack_threshold;
  if ( !DVARFLT_cl_analog_attack_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_analog_attack_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v27 >= v40->current.value )
    cmd->buttons |= 1ui64;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v7);
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v7)->predictedPlayerState;
  IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(Instance, p_predictedPlayerState);
  if ( IsUsingOffhandGestureWeaponADSSupport )
    OffhandGestureWeapon = BG_GetOffhandGestureWeapon(Instance, p_predictedPlayerState);
  else
    OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
  v45 = OffhandGestureWeapon;
  v46 = BG_UsingAlternate(p_predictedPlayerState) && !IsUsingOffhandGestureWeaponADSSupport;
  if ( (cmd->buttons & 1) != 0 && (BG_IsMeleeOnlyWeapon(v45, v46) && !BG_IsWeaponMeleeOverride(Instance, p_predictedPlayerState, v45) || BG_IsThrowingAxe(v45) && !BG_IsFauxFists(p_predictedPlayerState, v45, v46)) )
    cmd->buttons |= 4ui64;
  if ( (cmd->buttons & 0x200) != 0 && BG_WeaponIsDualWield(v45) && BG_IsMeleeOnlyWeapon(v45, v46) )
    cmd->buttons |= 4ui64;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v9->snap.ps.eFlags, ACTIVE, 0xBu) )
  {
    Button = GPad_GetButton(portIndex[1], GPAD_R_TRIG);
    if ( *(float *)&Button != 0.0 )
      cmd->buttons |= 0x1000000ui64;
  }
  CG_HandleSpecialStateInput((LocalClientNum_t)v7, &cmd->buttons, *(ButtonSet **)outClearButtonsa.v);
  if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v7) )
  {
    if ( CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 525, ASSERT_TYPE_ASSERT, "(!CL_InputMP_DisableFrontEndMovement( localClientNum ))", "%s\n\tShould not proceed with gamepad input when controls are frozen", "!CL_InputMP_DisableFrontEndMovement( localClientNum )") )
      __debugbreak();
    goto LABEL_71;
  }
  if ( CG_ShouldUpdateViewAngles((LocalClientNum_t)v7) )
  {
LABEL_71:
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    v49 = Mantle_SlowInputTurnRate(&LocalClientGlobals->predictedPlayerState, v23);
    v23 = *(float *)&v49;
    ClActiveClient_GetCLViewangles(v9, &outClearButtonsa);
    input.deltaTime = frametime_base;
    input.deltaTimeScaled = (float)cls.frametime * 0.001;
    input.pitch = outClearButtonsa.v[0];
    input.pitchAxis = v22;
    MaxPitchSpeed = CL_GetMaxPitchSpeed((LocalClientNum_t)v7);
    input.pitchMax = *(float *)&MaxPitchSpeed;
    input.yaw = outClearButtonsa.v[1];
    input.yawAxis = v23;
    MaxYawSpeed = CL_GetMaxYawSpeed((LocalClientNum_t)v7);
    input.yawMax = *(float *)&MaxYawSpeed;
    input.forwardAxis = *(float *)&_XMM6;
    input.rightAxis = v29;
    input.buttons = cmd->buttons;
    input.localClientNum = v7;
    input.meleeChargeEnt = cmd->meleeChargeEnt;
    AimAssist_UpdateGamePadInput(&input, &output);
    outClearButtonsa.v[0] = output.pitch;
    outClearButtonsa.v[1] = output.yaw;
    ClActiveClient_SetCLViewangles(v9, &outClearButtonsa);
    BG_SetMeleeChargeCmd(&output, cmd);
    memset(&outClearButtonsa, 0, sizeof(outClearButtonsa));
  }
  if ( CollAvoid_ShouldUpdateMoveCmd((LocalClientNum_t)v7) )
  {
    v52 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    CollAvoid_UpdateMoveCmd((LocalClientNum_t)v7, &v52->predictedPlayerState, frametime_base, cmd);
  }
  CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  CG_ModelPreviewerHandleGamepadEvents((LocalClientNum_t)v7, *(float *)&_XMM6, v29, v22, v23);
  CG_CreateFx_HandleGamepadEvents((LocalClientNum_t)v7, *(float *)&_XMM6, v29, v22, v23);
}

/*
==============
CL_InputMP_GetCommandDelta
==============
*/
char CL_InputMP_GetCommandDelta(const LocalClientNum_t localClientNum, const ClActiveClientMP *const cl, const ClConnectionMP *const clc, unsigned __int8 *outCmdDelta, usercmd_s *outCmd, CmdPredict *outPredict)
{
  usercmd_s *v10; 
  int messageAcknowledge; 
  netchan_t *p_netchan; 
  int v13; 
  unsigned int v14; 
  int CmdNumber; 
  int p_cmdNumber; 
  const ClActiveClient *Client; 
  int v18; 
  int v19; 
  usercmd_s *v21; 
  __int64 v22; 
  char *fmt; 
  __int64 v24; 
  ClOutPacketMP outPacket; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1277, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !clc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1278, ASSERT_TYPE_ASSERT, "(clc)", (const char *)&queryFormat, "clc") )
    __debugbreak();
  if ( !outCmdDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1279, ASSERT_TYPE_ASSERT, "(outCmdDelta != nullptr)", (const char *)&queryFormat, "outCmdDelta != nullptr") )
    __debugbreak();
  v10 = outCmd;
  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1280, ASSERT_TYPE_ASSERT, "(outCmd != nullptr)", (const char *)&queryFormat, "outCmd != nullptr") )
    __debugbreak();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 164, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  messageAcknowledge = clc->m_connectionData.messageAcknowledge;
  if ( !messageAcknowledge || (cl->snap.info.snapFlags & 0x200) != 0 )
    return 0;
  p_netchan = &clc->m_connectionData.netchan;
  if ( messageAcknowledge < 0 || messageAcknowledge > p_netchan->outgoingSequence )
  {
    LODWORD(v24) = clc->m_connectionData.messageAcknowledge;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1295, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clcData->messageAcknowledge ) && ( clcData->messageAcknowledge ) <= ( clcData->netchan.outgoingSequence )", "clcData->messageAcknowledge not in [0, clcData->netchan.outgoingSequence]\n\t%i not in [%i, %i]", v24, 0i64, p_netchan->outgoingSequence) )
      __debugbreak();
  }
  v13 = clc->m_connectionData.messageAcknowledge;
  v14 = p_netchan->outgoingSequence - v13;
  if ( v14 > 0xFF )
    return 0;
  if ( !ClConnectionMP::GetPacketBackup((ClConnectionMP *)clc, v13, &outPacket) )
    return 0;
  CmdNumber = ClActiveClient_GetCmdNumber(cl);
  p_cmdNumber = outPacket.p_cmdNumber;
  if ( outPacket.p_cmdNumber > CmdNumber )
    return 0;
  Client = ClActiveClient::GetClient(localClientNum);
  v18 = ClActiveClient_GetCmdNumber(Client);
  v19 = v18;
  LODWORD(outCmd) = v18;
  if ( p_cmdNumber > v18 )
  {
    LODWORD(fmt) = v18;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)p_cmdNumber, fmt);
  }
  if ( p_cmdNumber <= v19 - 128 || p_cmdNumber <= 0 )
  {
    memset(&outCmd, 0, 4ui64);
    return 0;
  }
  v21 = &Client->cmds[p_cmdNumber & 0x7F];
  memset(&outCmd, 0, 4ui64);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
    __debugbreak();
  v22 = 2i64;
  do
  {
    *(_OWORD *)&v10->buttons = *(_OWORD *)&v21->buttons;
    *(_OWORD *)&v10->commandTime = *(_OWORD *)&v21->commandTime;
    *(_OWORD *)(&v10->angles.xy + 1) = *(_OWORD *)(&v21->angles.xy + 1);
    *(_OWORD *)&v10->weapon.weaponOthers = *(_OWORD *)&v21->weapon.weaponOthers;
    *(_OWORD *)&v10->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v21->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v10->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v21->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v10->offHand.weaponIdx = *(_OWORD *)&v21->offHand.weaponIdx;
    v10 = (usercmd_s *)((char *)v10 + 128);
    *(_OWORD *)&v10[-1].sightedClientsMask.data[4] = *(_OWORD *)&v21->offHand.weaponAttachments[2];
    v21 = (usercmd_s *)((char *)v21 + 128);
    --v22;
  }
  while ( v22 );
  v10->buttons = v21->buttons;
  if ( !ClActiveClientMP::GetPredictedData((ClActiveClientMP *)cl, p_cmdNumber, outPredict) )
    return 0;
  *outCmdDelta = v14;
  return 1;
}

/*
==============
CL_InputMP_GetLastInputTimeForAnyLocalPlayer
==============
*/
__int64 CL_InputMP_GetLastInputTimeForAnyLocalPlayer()
{
  return (unsigned int)g_lastInputTimeForAnyLocalPlayer;
}

/*
==============
CL_InputMP_IsPlayerUsingBumperPingLayout
==============
*/
bool CL_InputMP_IsPlayerUsingBumperPingLayout(const LocalClientNum_t localClientNum)
{
  const char *CurrentButtonLayout; 
  bool v3; 

  CurrentButtonLayout = GamerProfile_GetCurrentButtonLayout(localClientNum);
  v3 = I_strstr(CurrentButtonLayout, "buttons_br_ping_lb") != NULL;
  return CL_Input_IsGamepadEnabled(localClientNum) && v3;
}

/*
==============
CL_InputMP_IsReadyForUserCommand
==============
*/
bool CL_InputMP_IsReadyForUserCommand(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].connectionState >= CA_PRIMED;
}

/*
==============
CL_InputMP_KeyActive
==============
*/
_BOOL8 CL_InputMP_KeyActive(LocalClientNum_t localClientNum, int kbButton)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = kbButton;
  v3 = localClientNum;
  if ( (unsigned int)kbButton >= 0x44 )
  {
    v6 = 68;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 904, ASSERT_TYPE_ASSERT, "(unsigned)( kbButton ) < (unsigned)( NUM_BUTTONS )", "kbButton doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", kbButton, v6) )
      __debugbreak();
  }
  return g_playersKb[v3][v2].active;
}

/*
==============
CL_InputMP_KeyActiveOrPressed
==============
*/
bool CL_InputMP_KeyActiveOrPressed(LocalClientNum_t localClientNum, int kbButton)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = kbButton;
  v3 = localClientNum;
  if ( (unsigned int)kbButton >= 0x44 )
  {
    v6 = 68;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( kbButton ) < (unsigned)( NUM_BUTTONS )", "kbButton doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", kbButton, v6) )
      __debugbreak();
  }
  return g_playersKb[v3][v2].active || g_playersKb[v3][v2].wasPressed;
}

/*
==============
CL_InputMP_KeyMove
==============
*/
void CL_InputMP_KeyMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ClActiveClientMP *ClientMP; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 295, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !CL_Input_IgnoreStance(localClientNum) )
  {
    if ( CL_HasHeldStance(localClientNum) )
    {
      CL_Input_AddTempStanceToCmd(localClientNum, cmd);
    }
    else
    {
      ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
      CL_Input_StanceUpdate(localClientNum, ClientMP);
      CL_Input_AddCurrentStanceToCmd(localClientNum, cmd);
    }
  }
  CL_Input_AdjustSpeedForAds(localClientNum, cmd);
  CL_Input_GamepadAccessibility(localClientNum, cmd);
  CL_Input_AddLateralMoveToCmd(localClientNum, cmd);
  CL_Input_AddPitchYawMoveToCmd(localClientNum, cmd);
  CL_InputMP_ValidateZeroCmds(cmd);
  if ( !CL_Input_IsGamepadEnabled(localClientNum) )
    CG_HandleSpecialStateInput(localClientNum, &cmd->buttons, outClearButtons);
}

/*
==============
CL_InputMP_MouseMove
==============
*/
void CL_InputMP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, float frametime_base, float rawMx, float rawMy)
{
  usercmd_s *v5; 
  __int64 v6; 
  ClActiveClient *Client; 
  __int64 v8; 
  unsigned int v9; 
  ClActiveClientMP *ClientMP; 
  const dvar_t *v11; 
  bool enabled; 
  const dvar_t *v13; 
  bool v14; 
  char v16; 
  bool v17; 
  bool v18; 
  float v19; 
  double Float_Internal_DebugName; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  ClActiveClientMP *v26; 
  bool v27; 
  int ControllerFromClient; 
  bool FreeLook; 
  bool active; 
  char v31; 
  double MaxYawSpeed; 
  float v37; 
  double MaxPitchSpeed; 
  float v39; 
  bool v40; 
  double v41; 
  double v42; 
  float v43; 
  double ClientLookInversion; 
  float v45; 
  float v46; 
  float v47; 
  __int128 v48; 
  __int128 v49; 
  float v52; 
  float v54; 
  double updated; 
  int v56; 
  int v57; 
  float v58; 
  int v59; 
  bool v60; 
  double v61; 
  bool v62; 
  int v63; 
  bool v64; 
  unsigned int v65; 
  const dvar_t *v66; 
  unsigned int v67; 
  unsigned int v68; 
  int v69; 
  const CameraDef *Def; 
  bool v71; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __int128 v76; 
  __int128 v80; 
  int v84; 
  char v85; 
  int v86; 
  char v87; 
  float outMx; 
  int v89; 
  float outMy; 
  int v91; 
  int v92; 
  float v93; 
  __int64 v94; 
  vec3_t clViewangles; 
  __int64 v96; 
  unsigned __int64 v97; 
  __int64 v98; 
  AimOutput output; 
  AimInput input; 

  v98 = -2i64;
  *(float *)&v94 = rawMx;
  v93 = frametime_base;
  v5 = cmd;
  *(_QWORD *)clViewangles.v = cmd;
  v6 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 607, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( frame_msec )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v6);
    v8 = (__int64)Client->GetPlayerState(Client);
    v96 = v8;
    outMx = rawMx;
    outMy = rawMy;
    CL_Input_ApplyMouseSensitivity((const LocalClientNum_t)v6, &outMx, &outMy);
    v9 = 0;
    *(_QWORD *)Client->mouseViewDelta.v = 0i64;
    Client->mouseViewDelta.v[2] = 0.0;
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v6);
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x10u) && (!(unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v6) || !CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v6)) )
    {
      v11 = DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput;
      if ( !DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulateShellshockedMouseInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      enabled = v11->current.enabled;
      v13 = DCONST_DVARINT_cl_accumulatedInputExpirationTime;
      if ( !DCONST_DVARINT_cl_accumulatedInputExpirationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulatedInputExpirationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = enabled && Client->accumulatedInputTimer < v13->current.integer;
      _XMM9 = 0i64;
      if ( Client->accumulatedMouseDelta.v[1] == 0.0 && Client->accumulatedMouseDelta.v[0] == 0.0 )
        v14 = 0;
      v16 = 1;
      v17 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v8 + 20), ACTIVE, 0x15u) && BG_GetShellshockParms(*(_DWORD *)(v8 + 4412))->lookControl.affect;
      v18 = v17 && v14;
      if ( !v18 )
      {
        *(_QWORD *)&Client->accumulatedMouseDelta.y = 0i64;
        Client->accumulatedMouseDelta.v[0] = 0.0;
      }
      v19 = FLOAT_0_001;
      if ( AimAssist_IsMeleeLockOnActive((LocalClientNum_t)v6) || rawMx == 0.0 && rawMy == 0.0 && !v18 )
        goto LABEL_119;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxShellshockCatchUpSpeed, "cl_maxShellshockCatchUpSpeed");
      v21 = *(float *)&Float_Internal_DebugName;
      v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_shortMovementThreshold, "cl_shortMovementThreshold");
      v23 = *(float *)&v22;
      v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_longMovementThreshold, "cl_longMovementThreshold");
      v25 = *(float *)&v24;
      if ( v23 >= *(float *)&v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 664, ASSERT_TYPE_ASSERT, "(shortMovementThreshold < longMovementThreshold)", (const char *)&queryFormat, "shortMovementThreshold < longMovementThreshold") )
        __debugbreak();
      LOBYTE(v91) = 0;
      g_lastInputTimeForAnyLocalPlayer = com_frameTime;
      v92 = 0;
      v97 = 1632 * v6;
      v26 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v6);
      v27 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v26->snap.ps.pm_flags, ACTIVE, 0x11u);
      LOBYTE(v89) = v27;
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
      FreeLook = GamerProfile_GetFreeLook(ControllerFromClient);
      if ( !g_playersKb[v6][14].active && !FreeLook )
        v16 = 0;
      active = g_playersKb[v6][8].active;
      if ( active || !v16 )
      {
        v31 = 1;
        if ( active )
        {
          Dvar_GetFloat_Internal_DebugName(DVARFLT_m_side, "m_side");
          _XMM0 = 0i64;
          __asm { vroundss xmm1, xmm0, xmm4, 1 }
          v5->rightmove = CL_Input_ClampInputChar(v5->rightmove + (int)*(float *)&_XMM1);
        }
      }
      else
      {
        v31 = 0;
      }
      if ( !v16 )
      {
        Dvar_GetFloat_Internal_DebugName(DVARFLT_m_forward, "m_forward");
        _XMM0 = 0i64;
        __asm { vroundss xmm1, xmm0, xmm4, 1 }
        v5->forwardmove = CL_Input_ClampInputChar(v5->forwardmove - (int)*(float *)&_XMM1);
      }
      if ( !v27 )
      {
        MaxYawSpeed = CL_GetMaxYawSpeed((LocalClientNum_t)v6);
        v37 = *(float *)&MaxYawSpeed;
        MaxPitchSpeed = CL_GetMaxPitchSpeed((LocalClientNum_t)v6);
        v39 = *(float *)&MaxPitchSpeed;
        v40 = Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_combinedCameraRotationSpeed, "cl_combinedCameraRotationSpeed") && v37 == *(float *)&MaxPitchSpeed && v37 > 0.0;
        v41 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_yaw, "m_yaw");
        Client->accumulatedMouseDelta.v[1] = (float)(*(float *)&v41 * outMx) + Client->accumulatedMouseDelta.v[1];
        v42 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_pitch, "m_pitch");
        v43 = *(float *)&v42;
        ClientLookInversion = CL_Input_GetClientLookInversion((LocalClientNum_t)v6);
        v45 = *(float *)&ClientLookInversion * v43;
        LODWORD(v46) = COERCE_UNSIGNED_INT(*(float *)&ClientLookInversion * v43) ^ _xmm;
        v47 = (float)(v46 * outMy) + Client->accumulatedMouseDelta.v[0];
        Client->accumulatedMouseDelta.v[0] = v47;
        if ( v40 && !v31 )
        {
          v48 = LODWORD(Client->accumulatedMouseDelta.v[1]);
          v49 = v48;
          *(float *)&v49 = fsqrt((float)(*(float *)&v48 * *(float *)&v48) + (float)(v47 * v47));
          _XMM2 = v49;
          __asm { vcmpless xmm0, xmm2, cs:__real@80000000 }
          v52 = FLOAT_1_0;
          __asm { vblendvps xmm1, xmm2, xmm13, xmm0 }
          *(float *)&v49 = (float)frame_msec;
          v19 = FLOAT_0_001;
          v54 = (float)(*(float *)&v49 * v37) * 0.001;
          updated = CL_Input_UpdateViewAnglesAxis(Client, YAW, 0.0, v40, COERCE_CONST_FLOAT(COERCE_UNSIGNED_INT((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v48) * v54) & _xmm));
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[1]) & _xmm) < 0.001 )
            Client->accumulatedMouseDelta.v[1] = 0.0;
          v56 = -(int)outMx;
          CL_Input_LogMouseInputVelocity(v93, outMx, *(float *)&updated, Client->mouseViewDelta.v[1] - *(float *)(v96 + 184));
          CL_Input_UpdateViewAnglesAxis(Client, PITCH, 0.0, v40, COERCE_CONST_FLOAT(COERCE_UNSIGNED_INT((float)(v47 * (float)(1.0 / *(float *)&_XMM1)) * v54) & _xmm));
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[0]) & _xmm) < 0.001 )
            Client->accumulatedMouseDelta.v[0] = 0.0;
          v57 = -1;
          if ( v46 > 0.0 )
            v57 = 1;
          v58 = outMy;
          v59 = (int)(float)((float)v57 * outMy);
          goto LABEL_83;
        }
        if ( g_playersKb[v97 / 0x660][8].active )
        {
          LOBYTE(v5) = v91;
        }
        else
        {
          v60 = COERCE_FLOAT(LODWORD(outMx) & _xmm) > v23 && (float)(outMx * Client->accumulatedMouseDelta.v[1]) < 0.0;
          LOBYTE(v5) = v23 > COERCE_FLOAT(LODWORD(outMx) & _xmm);
          v91 = (int)v5;
          v61 = CL_Input_UpdateViewAnglesAxis(Client, YAW, v37, v40, 0.0);
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[1]) & _xmm) < 0.001 || v60 || v37 <= 0.0 || v37 > v21 )
            Client->accumulatedMouseDelta.v[1] = 0.0;
          v92 = -(int)outMx;
          CL_Input_LogMouseInputVelocity(v93, outMx, *(float *)&v61, Client->mouseViewDelta.v[1] - *(float *)(v96 + 184));
        }
        if ( v16 )
        {
          v62 = COERCE_FLOAT(LODWORD(outMy) & _xmm) > v23 && (float)((float)(v46 * outMy) * Client->accumulatedMouseDelta.v[0]) < 0.0;
          if ( v23 > COERCE_FLOAT(LODWORD(outMx) & _xmm) )
            LOBYTE(v5) = 1;
          CL_Input_UpdateViewAnglesAxis(Client, PITCH, v39, v40, 0.0);
          v19 = FLOAT_0_001;
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[0]) & _xmm) < 0.001 || v62 || v39 <= 0.0 || v39 > v21 )
            Client->accumulatedMouseDelta.v[0] = 0.0;
          v63 = -1;
          if ( v45 < -0.0 )
            v63 = 1;
          v58 = outMy;
          v59 = (int)(float)((float)v63 * outMy);
          v52 = FLOAT_1_0;
          v56 = v92;
          goto LABEL_84;
        }
      }
      v58 = outMy;
      v19 = FLOAT_0_001;
      v52 = FLOAT_1_0;
      v56 = v92;
      v59 = 0;
LABEL_83:
      LOBYTE(v5) = v91;
LABEL_84:
      if ( COERCE_FLOAT(LODWORD(outMx) & _xmm) > v25 || COERCE_FLOAT(LODWORD(v58) & _xmm) > v25 )
      {
        Client->accumulatedInputTimer = 0;
      }
      else
      {
        v64 = *(float *)&v94 != 0.0 || rawMy != 0.0;
        if ( (v64 & (unsigned __int8)v5) != 0 )
          Client->accumulatedInputTimer += frame_msec;
      }
      v65 = 0;
      if ( !(_BYTE)v89 )
        v65 = v59;
      if ( !(_BYTE)v89 )
        v9 = v56;
      v66 = DVARBOOL_scaledOrbitKbmControlsEnabled;
      if ( !DVARBOOL_scaledOrbitKbmControlsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledOrbitKbmControlsEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      v67 = v9;
      v68 = v65;
      if ( v66->current.enabled )
      {
        v69 = CG_Camera_Active_Get((LocalClientNum_t)v6);
        Def = BG_Camera_GetDef(v69);
        v71 = v69 && v69 < 256 && (unsigned int)(v69 - 1) < 0xFA && Def->profile == CAMERAPROFILE_ORBIT;
        v67 = v9;
        if ( !CL_Input_IsGamepadEnabled((LocalClientNum_t)v6) && v71 )
        {
          v73 = _mm_cvtepi32_ps((__m128i)v65);
          v73.m128_f32[0] = v73.m128_f32[0] * 0.0078740157;
          v72 = v73;
          v75 = _mm_cvtepi32_ps((__m128i)v9);
          v75.m128_f32[0] = v75.m128_f32[0] * 0.0078740157;
          v74 = v75;
          v76 = *(_OWORD *)&v72 & (unsigned int)_xmm;
          *(float *)&v76 = COERCE_FLOAT(v72.m128_i32[0] & _xmm) + v52;
          log10f_0(*(float *)&v76);
          _XMM2 = v76 ^ _xmm;
          __asm
          {
            vcmpless xmm1, xmm9, xmm6
            vblendvps xmm7, xmm2, xmm0, xmm1
          }
          v80 = *(_OWORD *)&v74 & (unsigned int)_xmm;
          *(float *)&v80 = COERCE_FLOAT(v74.m128_i32[0] & _xmm) + v52;
          log10f_0(*(float *)&v80);
          _XMM2 = v80 ^ _xmm;
          __asm
          {
            vcmpless xmm1, xmm9, xmm8
            vblendvps xmm6, xmm2, xmm0, xmm1
          }
          v68 = CL_Input_AxisValueToChar(*(float *)&_XMM7);
          v67 = CL_Input_AxisValueToChar(*(float *)&_XMM6);
        }
      }
      v5 = *(usercmd_s **)clViewangles.v;
      v84 = v68 + *(char *)(*(_QWORD *)clViewangles.v + 158i64);
      if ( v84 > 127 )
        v84 = 127;
      v85 = v84;
      if ( v84 < -128 )
        v85 = 0x80;
      *(_BYTE *)(*(_QWORD *)clViewangles.v + 158i64) = v85;
      v86 = v67 + v5->yawmove;
      if ( v86 > 127 )
        v86 = 127;
      v87 = v86;
      if ( v86 < -128 )
        v87 = 0x80;
      v5->yawmove = v87;
LABEL_119:
      CL_InputMP_ValidateZeroCmds(v5);
      ClActiveClient_GetCLViewangles(Client, &clViewangles);
      input.deltaTime = v93;
      input.deltaTimeScaled = (float)cls.frametime * v19;
      input.pitch = clViewangles.v[0];
      input.pitchAxis = 0.0;
      input.pitchMax = 0.0;
      input.yaw = clViewangles.v[1];
      *(_OWORD *)&input.yawAxis = 0i64;
      input.buttons = v5->buttons;
      input.localClientNum = v6;
      input.meleeChargeEnt = v5->meleeChargeEnt;
      AimAssist_UpdateMouseInput(&input, &output);
      clViewangles.v[0] = output.pitch;
      clViewangles.v[1] = output.yaw;
      ClActiveClient_SetCLViewangles(Client, &clViewangles);
      BG_SetMeleeChargeCmd(&output, v5);
      memset(&clViewangles, 0, sizeof(clViewangles));
      return;
    }
    g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  }
}

/*
==============
CL_InputMP_ProcessFrontendCommand
==============
*/
bool CL_InputMP_ProcessFrontendCommand(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].frontEndSceneState[0] && CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v1);
}

/*
==============
CL_InputMP_ReadyToSendPacket
==============
*/
__int64 CL_InputMP_ReadyToSendPacket(LocalClientNum_t localClientNum)
{
  connstate_t LocalClientAnyConnectionState; 
  ClConnectionMP *ClientConnectionMP; 
  const ClConnectionDataMP *ConnectionDataMP; 
  int connectLastSendTime; 
  unsigned int v6; 
  bool v8; 
  int Int_Internal_DebugName; 
  ClActiveClientMP *ClientMP; 
  int CmdNumber; 
  int v12; 
  ClOutPacketMP outPacket; 

  if ( CL_Demo_IsPlayingAny(localClientNum) )
    return 0i64;
  LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState(localClientNum);
  if ( CL_GetLocalClientMigrationState(localClientNum) == CMSTATE_LIMBO )
    return 0i64;
  if ( CL_CGameMP_IsServerSavingReplay(localClientNum) )
    return 0i64;
  if ( Com_IsLocalServerRestarting() )
    return 0i64;
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
  ConnectionDataMP = ClConnectionMP::GetConnectionDataMP(ClientConnectionMP);
  if ( !NetConnection::IsConnected(&ConnectionDataMP->serverConnection) )
    return 0i64;
  if ( (unsigned int)(LocalClientAnyConnectionState - 8) <= 1 )
  {
    v6 = 0;
  }
  else
  {
    connectLastSendTime = ConnectionDataMP->connectLastSendTime;
    v6 = 1;
    if ( cls.realtime < connectLastSendTime + 1000 )
    {
      if ( connectLastSendTime == -99999 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1195, ASSERT_TYPE_ASSERT, "( clcData->connectLastSendTime ) != ( (-99999) )", "%s != %s\n\t%i, %i", "clcData->connectLastSendTime", "SEND_PACKET_IMMEDIATELY", -99999, -99999) )
        __debugbreak();
      return 0i64;
    }
  }
  if ( LocalClientAnyConnectionState == CA_SENDINGSTATS )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1200, ASSERT_TYPE_ASSERT, "(connstate != CA_SENDINGSTATS)", "%s\n\tThe retry timeout should prevent us from sending game packets in sendingStats", "connstate != CA_SENDINGSTATS");
  }
  else
  {
    if ( LocalClientAnyConnectionState != CA_STARTING )
      goto LABEL_19;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1202, ASSERT_TYPE_ASSERT, "(connstate != CA_STARTING)", "%s\n\tThe retry timeout should prevent us from sending game packets in starting", "connstate != CA_STARTING");
  }
  if ( v8 )
    __debugbreak();
LABEL_19:
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_cg_usercmdBursting, "cg_usercmdBursting");
  if ( Int_Internal_DebugName > 0 )
  {
    if ( ++s_burstCount % Int_Internal_DebugName )
      return 0i64;
  }
  if ( NetConnection::IsLoopback(&ConnectionDataMP->serverConnection) || ConnectionDataMP->netchan.outgoingSequence <= 0 )
    return 1i64;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1233, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( ConnectionDataMP->netchan.outgoingSequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1235, ASSERT_TYPE_ASSERT, "( clcData->netchan.outgoingSequence ) > ( 0 )", "%s > %s\n\t%i, %i", "clcData->netchan.outgoingSequence", "0", ConnectionDataMP->netchan.outgoingSequence, 0i64) )
    __debugbreak();
  if ( !ClConnectionMP::GetPacketBackup(ClientConnectionMP, ConnectionDataMP->netchan.outgoingSequence - 1, &outPacket) )
    return 1i64;
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_cl_maxpackets, "cl_maxpackets") )
  {
    v12 = cls.realtime - outPacket.p_realtime;
    return v12 >= 1000 / Dvar_GetInt_Internal_DebugName(DVARINT_cl_maxpackets, "cl_maxpackets");
  }
  CmdNumber = ClActiveClient_GetCmdNumber(ClientMP);
  if ( CmdNumber <= outPacket.p_cmdNumber && ConnectionDataMP->reliableSequence <= ConnectionDataMP->reliableAcknowledge )
    return v6;
  return 1i64;
}

/*
==============
CL_InputMP_RemoteControlMove
==============
*/
void CL_InputMP_RemoteControlMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons, float mx, float my)
{
  CL_Input_RemoteControlMove(localClientNum, cmd, 0, outClearButtons, mx, my);
}

/*
==============
CL_InputMP_SavePredictedData
==============
*/
void CL_InputMP_SavePredictedData(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClActiveClientMP::SavePredictedData(ClientMP);
}

/*
==============
CL_InputMP_SetCommandDurationMsg
==============
*/
void CL_InputMP_SetCommandDurationMsg(const LocalClientNum_t localClientNum, msg_t *msg)
{
  ClActiveClientMP *ClientMP; 
  int Byte; 
  int UserCommandConstantMsec; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1861, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  Byte = MSG_ReadByte(msg);
  UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
  if ( Byte > UserCommandConstantMsec )
    UserCommandConstantMsec = Byte;
  ClientMP->svCmdMaxDurationMsec = UserCommandConstantMsec;
}

/*
==============
CL_InputMP_SpecNext
==============
*/
void CL_InputMP_SpecNext(LocalClientNum_t localClientNum, int key)
{
  kbutton_t *v3; 

  v3 = &g_playersKb[localClientNum][17];
  CL_Input_KeyDown(v3, key, 0);
  CL_Input_KeyUp(v3, key, 0);
}

/*
==============
CL_InputMP_SpecNextKeyboard
==============
*/
void CL_InputMP_SpecNextKeyboard(const LocalClientNum_t localClientNum, int key)
{
  __int64 v2; 
  kbutton_t *v4; 

  v2 = localClientNum;
  if ( CL_InputMP_CanRunSpecKeyboardCommand(localClientNum) )
  {
    v4 = &g_playersKb[v2][17];
    CL_Input_KeyDown(v4, key, 0);
    CL_Input_KeyUp(v4, key, 0);
  }
}

/*
==============
CL_InputMP_SpecPrev
==============
*/
void CL_InputMP_SpecPrev(LocalClientNum_t localClientNum, int key)
{
  kbutton_t *v3; 

  v3 = &g_playersKb[localClientNum][18];
  CL_Input_KeyDown(v3, key, 0);
  CL_Input_KeyUp(v3, key, 0);
}

/*
==============
CL_InputMP_SpecPrevKeyboard
==============
*/
void CL_InputMP_SpecPrevKeyboard(const LocalClientNum_t localClientNum, int key)
{
  __int64 v2; 
  kbutton_t *v4; 

  v2 = localClientNum;
  if ( CL_InputMP_CanRunSpecKeyboardCommand(localClientNum) )
  {
    v4 = &g_playersKb[v2][18];
    CL_Input_KeyDown(v4, key, 0);
    CL_Input_KeyUp(v4, key, 0);
  }
}

/*
==============
CL_InputMP_ToggleSpec
==============
*/
void CL_InputMP_ToggleSpec(LocalClientNum_t localClientNum, int key)
{
  kbutton_t *v3; 

  v3 = &g_playersKb[localClientNum][16];
  CL_Input_KeyDown(v3, key, 0);
  CL_Input_KeyUp(v3, key, 0);
}

/*
==============
CL_InputMP_ToggleSpecKeyboard
==============
*/
void CL_InputMP_ToggleSpecKeyboard(const LocalClientNum_t localClientNum, int key)
{
  __int64 v2; 
  kbutton_t *v4; 

  v2 = localClientNum;
  if ( CL_InputMP_CanRunSpecKeyboardCommand(localClientNum) )
  {
    v4 = &g_playersKb[v2][16];
    CL_Input_KeyDown(v4, key, 0);
    CL_Input_KeyUp(v4, key, 0);
  }
}

/*
==============
CL_InputMP_UpdateAngleWrap
==============
*/
void CL_InputMP_UpdateAngleWrap(ClActiveClientMP *cl, const vec3_t *oldAngles)
{
  float v4; 
  float v5; 
  float v6; 

  if ( !cl )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1061, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 283, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
  }
  v4 = oldAngles->v[0];
  LODWORD(v5) = LODWORD(cl->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) * ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) + 2));
  if ( (float)(v5 - oldAngles->v[0]) <= 90.0 )
  {
    if ( (float)(v4 - v5) <= 90.0 )
      return;
    v6 = v4 - 90.0;
  }
  else
  {
    v6 = v4 + 90.0;
  }
  LODWORD(cl->clViewangles.clViewangles.v[0]) = LODWORD(v6) ^ ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) * ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) + 2));
}

/*
==============
CL_InputMP_UpdateCmdDemoInput
==============
*/
void CL_InputMP_UpdateCmdDemoInput(LocalClientNum_t localClientNum, ClActiveClientMP *cl)
{
  ;
}

/*
==============
CL_InputMP_UseReload
==============
*/
void CL_InputMP_UseReload(LocalClientNum_t localClientNum, int key)
{
  __int64 v2; 
  kbutton_t *v4; 

  v2 = localClientNum;
  CL_MainMP_CheckNotify(localClientNum, 11, 0);
  v4 = &g_playersKb[v2][28];
  CL_Input_KeyDown(v4, key, 0);
  CL_Input_KeyUp(v4, key, 0);
}

/*
==============
CL_InputMP_ValidateZeroCmds
==============
*/
void CL_InputMP_ValidateZeroCmds(const usercmd_s *cmd)
{
  if ( (cmd->upmove || cmd->downmove) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 280, ASSERT_TYPE_ASSERT, "((cmd->upmove == 0) && (cmd->downmove == 0))", "%s\n\tMP does not use upmove or downmmove", "(cmd->upmove == 0) && (cmd->downmove == 0)") )
    __debugbreak();
  if ( (cmd->gunPitch != 0.0 || cmd->gunYaw != 0.0 || cmd->gunXOfs != 0.0 || cmd->gunYOfs != 0.0 || cmd->gunZOfs != 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 281, ASSERT_TYPE_ASSERT, "((cmd->gunPitch == 0.0f) && (cmd->gunYaw == 0.0f) && (cmd->gunXOfs == 0.0f) && (cmd->gunYOfs == 0.0f) && (cmd->gunZOfs == 0.0f))", "%s\n\tMP does not support those ADS fields", "(cmd->gunPitch == 0.0f) && (cmd->gunYaw == 0.0f) && (cmd->gunXOfs == 0.0f) && (cmd->gunYOfs == 0.0f) && (cmd->gunZOfs == 0.0f)") )
    __debugbreak();
  if ( cmd->rollSensitivity != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 285, ASSERT_TYPE_ASSERT, "((cmd->rollSensitivity == 0))", "%s\n\tMP does not use rollSensitivity in usercmd.", "(cmd->rollSensitivity == 0)") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE )") )
    __debugbreak();
  if ( cmd->scriptedMeleeTarget )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 288, ASSERT_TYPE_ASSERT, "((cmd->scriptedMeleeTarget == 0))", "%s\n\tMP does not use the scripted_melee system.", "(cmd->scriptedMeleeTarget == 0)") )
      __debugbreak();
  }
}

