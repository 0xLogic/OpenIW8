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
  kbutton_t *v8; 
  ClActiveClientMP *ClientMP; 
  ClActiveClientMP *v10; 
  ClActiveClientMP *v11; 
  const dvar_t *v12; 
  char v21; 
  char v22; 
  vec3_t clViewangles; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v8 = g_playersKb[localClientNum];
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v10 = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->snap.ps.pm_flags, ACTIVE, 0x10u) && (!(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) || !CL_InputMP_DisableFrontEndMovement(localClientNum)) )
  {
    v11 = ClActiveClientMP::GetClientMP(localClientNum);
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v11->snap.ps.pm_flags, ACTIVE, 0x11u) )
    {
      if ( v8[9].active )
      {
        v12 = DVARFLT_cl_anglespeedkey;
        if ( !DVARFLT_cl_anglespeedkey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anglespeedkey") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebp
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vmulss  xmm9, xmm1, dword ptr [rbx+28h]
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebp
          vmulss  xmm9, xmm0, cs:__real@3a83126f
        }
      }
      ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
      __asm { vxorps  xmm8, xmm8, xmm8 }
      if ( !v8[8].active )
      {
        *(double *)&_XMM0 = CL_GetMaxYawSpeed(localClientNum);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_yawspeed, "cl_yawspeed");
        __asm { vcomiss xmm6, xmm8 }
        if ( !(v21 | v22) )
          __asm { vminss  xmm0, xmm0, xmm6 }
        __asm { vmulss  xmm7, xmm0, xmm9 }
        *(double *)&_XMM0 = CL_Input_KeyState(v8 + 1);
        __asm
        {
          vmulss  xmm2, xmm0, xmm7
          vmovss  xmm1, dword ptr [rsp+0B8h+clViewangles+4]
          vsubss  xmm6, xmm1, xmm2
          vmovss  dword ptr [rsp+0B8h+clViewangles+4], xmm6
        }
        *(double *)&_XMM0 = CL_Input_KeyState(v8);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm1, xmm1, xmm6
          vmovss  dword ptr [rsp+0B8h+clViewangles+4], xmm1
        }
      }
      *(double *)&_XMM0 = CL_GetMaxPitchSpeed(localClientNum);
      __asm { vmovaps xmm6, xmm0 }
      _RDI = DVARFLT_cl_pitchspeed;
      __asm { vcomiss xmm0, xmm8 }
      if ( v21 | v22 )
      {
        if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm1, dword ptr [rdi+28h] }
      }
      else
      {
        if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vminss  xmm1, xmm0, xmm6
        }
      }
      __asm { vmulss  xmm7, xmm1, xmm9 }
      *(double *)&_XMM0 = CL_Input_KeyState(v8 + 4);
      __asm
      {
        vmulss  xmm2, xmm0, xmm7
        vmovss  xmm1, dword ptr [rsp+0B8h+clViewangles]
        vsubss  xmm6, xmm1, xmm2
        vmovss  dword ptr [rsp+0B8h+clViewangles], xmm6
      }
      *(double *)&_XMM0 = CL_Input_KeyState(v8 + 5);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm1, xmm1, xmm6
        vmovss  dword ptr [rsp+0B8h+clViewangles], xmm1
      }
      ClActiveClient_SetCLViewangles(ClientMP, &clViewangles);
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  ClActiveClientMP *v39; 
  int v40; 
  int v41; 
  int v42; 
  const char *v43; 
  int v44; 
  int v45; 
  Online_Loot *v46; 
  lua_State *v47; 
  __int64 v48; 
  __int64 v49; 
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
    LODWORD(v49) = 2;
    LODWORD(v48) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v48, v49) )
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
          _RAX = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+87DCh]
            vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000; inAngleValue
          }
          ClActiveClient_SetCLViewangle(_RAX, 0, *(const float *)&_XMM2);
        }
      }
      return;
    case 117:
    case 118:
      if ( connectionState >= CA_CONNECTED )
      {
        v39 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v4);
        v39->Pause(v39);
      }
      return;
    case 119:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v40 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v40) )
          Cbuf_AddText((LocalClientNum_t)v4, "chatmodepublic\n");
      }
      return;
    case 120:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v41 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v41) )
          Cbuf_AddText((LocalClientNum_t)v4, "chatmodeteam\n");
      }
      return;
    case 121:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_textChatEnabled, "cl_textChatEnabled") )
      {
        v42 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v42) )
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
      if ( createAClassFeatureID != -1 || (StringTable_GetAsset("loot/feature_ids.csv", (const StringTable **)&tablePtr), v43 = StringTable_Lookup(tablePtr, 1, "create_a_class", 0), createAClassFeatureID = atoi(v43), createAClassFeatureID != -1) )
      {
        v44 = -1;
        v45 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        v46 = Online_Loot::GetInstance();
        if ( (Online_Loot::GetItemUnlockQuantity(v46, v45, createAClassFeatureID) || Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch")) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
        {
          if ( (unsigned int)(kb - 147) > 4 )
          {
            if ( (unsigned int)(kb - 240) <= 4 )
            {
              v44 = kb - 235;
              CG_ServerCmd_NotifyServer((const LocalClientNum_t)v4, "class_select", kb - 235);
            }
          }
          else
          {
            CG_ServerCmd_NotifyServer((const LocalClientNum_t)v4, "class_select", kb - 147);
            v44 = kb - 147;
          }
          LUI_BeginEvent((LocalClientNum_t)v4, "lui_fastloadout_keybind_used", LUI_luaVM);
          v47 = LUI_luaVM;
          if ( LUI_luaVM )
          {
            if ( (unsigned int)v44 <= 9 )
            {
              LUI_SetTableInt("index", v44, LUI_luaVM);
              v47 = LUI_luaVM;
            }
            LUI_EndEvent(v47);
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
  int v18; 
  vec3_t *p_cgameKickAngles; 
  bool v27; 
  int v36; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  vec3_t clViewangles; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _R13 = cmd;
  _RBX = ClActiveClientMP::GetClientMP(localClientNum);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+90h]
    vmovups ymmword ptr [r13+24h], ymm0
    vmovups xmm1, xmmword ptr [rax+0B0h]
    vmovups xmmword ptr [r13+44h], xmm1
    vmovsd  xmm0, qword ptr [rax+0C0h]
    vmovsd  qword ptr [r13+54h], xmm0
  }
  *(_DWORD *)&_R13->weapon.weaponCamo = *(_DWORD *)&_RBX->cgameUserCmdWeapon.weaponCamo;
  _RCX = &_R13->offHand;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0CCh]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rax+0ECh]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+0FCh]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&_R13->offHand.weaponCamo = *(_DWORD *)&_RBX->cgameUserCmdOffHand.weaponCamo;
  _R13->isAlternate = _RBX->cgameUserCmdAlternate != 0;
  BG_AssertOffhandIndexOrNone(&_R13->offHand);
  _R13->serverTime = _RBX->serverTime;
  _R13->inputTime = _RBX->cmdInputAccumTimeMs;
  ClActiveClient_GetCLViewangles(_RBX, &clViewangles);
  v18 = 0;
  p_cgameKickAngles = &_RBX->cgameKickAngles;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RBX = &clViewangles;
  _R15 = (char *)p_cgameKickAngles - (char *)&clViewangles;
  __asm
  {
    vmovss  xmm7, cs:__real@3b360b61
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm9, cs:__real@43b40000
    vmovss  xmm10, cs:__real@43340000
  }
  v27 = 1;
  do
  {
    if ( !v27 )
    {
      LODWORD(v45) = 3;
      LODWORD(v43) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v45) )
        __debugbreak();
      LODWORD(v46) = 3;
      LODWORD(v44) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rbx]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmulss  xmm4, xmm1, xmm7
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, xmm9; value
      vmovaps xmm1, xmm10; maxAbsValueSize
    }
    v36 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
    if ( (unsigned int)v18 >= 3 )
    {
      LODWORD(v45) = 3;
      LODWORD(v43) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v45) )
        __debugbreak();
    }
    *(_DWORD *)((char *)_RBX->v + (char *)&_R13->angles - (char *)&clViewangles) = v36;
    ++v18;
    _RBX = (vec3_t *)((char *)_RBX + 4);
    v27 = (unsigned int)v18 < 3;
  }
  while ( v18 < 3 );
  CL_Input_FinishCmdButtons(localClientNum, _R13, outClearButtons);
  memset(&clViewangles, 0, sizeof(clViewangles));
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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

void __fastcall CL_InputMP_GamepadMove(LocalClientNum_t localClientNum, double frametime_base, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v15; 
  ClActiveClientMP *ClientMP; 
  ClActiveClientMP *v17; 
  ClActiveClientMP *v35; 
  char v42; 
  char v43; 
  __int64 v62; 
  CgWeaponMap *Instance; 
  playerState_s *p_predictedPlayerState; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v68; 
  bool v69; 
  cg_t *v70; 
  cg_t *LocalClientGlobals; 
  float fmt; 
  float fmta; 
  vec3_t outClearButtonsa; 
  int portIndex[2]; 
  __int64 v100; 
  AimOutput output; 
  AimInput input; 
  char v103; 
  void *retaddr; 

  _RAX = &retaddr;
  v100 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  *(_QWORD *)outClearButtonsa.v = outClearButtons;
  __asm { vmovaps xmm12, xmm1 }
  v15 = localClientNum;
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
  {
    cmd->inputFromGamepad = 1;
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v15);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x10u) || (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v15) && CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v15) )
    {
      g_lastInputTimeForAnyLocalPlayer = com_frameTime;
      goto LABEL_76;
    }
    if ( !CL_Cameraman_isActive() )
    {
      v17 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v15);
      portIndex[1] = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v15);
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 3);
      __asm { vmovaps xmm6, xmm0 }
      CL_Input_GetClientLookInversion((LocalClientNum_t)v15);
      __asm
      {
        vmulss  xmm6, xmm6, xmm0
        vmovaps xmm2, xmm6; delta
      }
      _EAX = PM_AllowCameraInputForAxis(&v17->snap.ps, 0, *(float *)&_XMM2);
      _ER14 = 0;
      __asm
      {
        vmovd   xmm1, r14d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vxorps  xmm7, xmm7, xmm7
        vblendvps xmm0, xmm6, xmm7, xmm2
        vmovss  [rsp+170h+portIndex], xmm0
      }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 2);
      __asm
      {
        vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovaps xmm2, xmm6; delta
      }
      _EAX = PM_AllowCameraInputForAxis(&v17->snap.ps, 1, *(float *)&_XMM2);
      __asm
      {
        vmovd   xmm1, r14d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm7, xmm2
        vmovss  dword ptr [rsp+170h+var_130], xmm0
      }
      v35 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v15);
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v35->snap.ps.pm_flags, ACTIVE, 0x11u) )
      {
        g_lastInputTimeForAnyLocalPlayer = com_frameTime;
        __asm
        {
          vxorps  xmm9, xmm9, xmm9
          vxorps  xmm8, xmm8, xmm8
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm9, [rsp+170h+portIndex]
          vmovss  xmm8, dword ptr [rsp+170h+var_130]
        }
      }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 1);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 4);
      __asm { vmovaps xmm11, xmm0 }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 0);
      __asm { vmovaps xmm10, xmm0 }
      if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v15, 1024) )
      {
        if ( CL_GamepadGetPhysicalAxisFromVirtualAxis((LocalClientNum_t)v15, 3) == 1 )
          __asm { vxorps  xmm9, xmm9, xmm9 }
        else
          __asm { vxorps  xmm6, xmm6, xmm6 }
        if ( CL_GamepadGetPhysicalAxisFromVirtualAxis((LocalClientNum_t)v15, 2) )
          __asm { vxorps  xmm10, xmm10, xmm10 }
        else
          __asm { vxorps  xmm8, xmm8, xmm8 }
      }
      _RDI = DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection;
      if ( !DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardCancelMinBackwardDeflection") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v43 )
      {
        v17->autoForward = 0;
      }
      else
      {
        __asm { vmovd   xmm1, r14d }
        _EAX = v17->autoForward;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vblendvps xmm6, xmm1, xmm6, xmm2
        }
      }
      __asm { vucomiss xmm9, xmm7 }
      if ( !v42 )
        goto LABEL_27;
      __asm { vucomiss xmm8, xmm7 }
      if ( !v42 )
        goto LABEL_27;
      __asm { vucomiss xmm6, xmm7 }
      if ( !v42 )
        goto LABEL_27;
      __asm { vucomiss xmm11, xmm7 }
      if ( !v42 )
        goto LABEL_27;
      __asm { vucomiss xmm10, xmm7 }
      if ( !v42 )
LABEL_27:
        g_lastInputTimeForAnyLocalPlayer = com_frameTime;
      __asm
      {
        vmovaps xmm1, xmm10; side
        vmovaps xmm0, xmm6; forward
      }
      *(double *)&_XMM0 = BG_CmdScale_CalcInputScale(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vmovss  xmm3, cs:__real@42fe0000
        vmulss  xmm1, xmm1, xmm3
        vcvttss2si edi, xmm1
        vmulss  xmm0, xmm0, xmm10
        vmulss  xmm2, xmm0, xmm3
        vcvttss2si ecx, xmm2
        vmulss  xmm1, xmm9, xmm3
        vcvttss2si r14d, xmm1
        vmulss  xmm0, xmm8, xmm3
        vcvttss2si r15d, xmm0
      }
      if ( !_ECX )
        _ECX = cmd->rightmove;
      cmd->rightmove = CL_Input_ClampInputChar(_ECX);
      if ( !_EDI )
        _EDI = cmd->forwardmove;
      cmd->forwardmove = CL_Input_ClampInputChar(_EDI);
      if ( !_ER14 )
        _ER14 = cmd->pitchmove;
      cmd->pitchmove = CL_Input_ClampInputChar(_ER14);
      if ( !_ER15 )
        _ER15 = cmd->yawmove;
      cmd->yawmove = CL_Input_ClampInputChar(_ER15);
      CL_InputMP_ValidateZeroCmds(cmd);
      v62 = v15;
      if ( g_playersKb[v15][32].active || g_playersKb[v62][32].wasPressed )
      {
        cmd->buttons |= 2ui64;
        g_playersKb[v62][32].wasPressed = 0;
      }
      else
      {
        cmd->buttons &= ~2ui64;
      }
      _RDI = DVARFLT_cl_analog_attack_threshold;
      if ( !DVARFLT_cl_analog_attack_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_analog_attack_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm11, dword ptr [rdi+28h] }
      if ( !v43 )
        cmd->buttons |= 1ui64;
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v15);
      p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v15)->predictedPlayerState;
      IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(Instance, p_predictedPlayerState);
      if ( IsUsingOffhandGestureWeaponADSSupport )
        OffhandGestureWeapon = BG_GetOffhandGestureWeapon(Instance, p_predictedPlayerState);
      else
        OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
      v68 = OffhandGestureWeapon;
      v69 = BG_UsingAlternate(p_predictedPlayerState) && !IsUsingOffhandGestureWeaponADSSupport;
      if ( (cmd->buttons & 1) != 0 && (BG_IsMeleeOnlyWeapon(v68, v69) && !BG_IsWeaponMeleeOverride(Instance, p_predictedPlayerState, v68) || BG_IsThrowingAxe(v68) && !BG_IsFauxFists(p_predictedPlayerState, v68, v69)) )
        cmd->buttons |= 4ui64;
      if ( (cmd->buttons & 0x200) != 0 && BG_WeaponIsDualWield(v68) && BG_IsMeleeOnlyWeapon(v68, v69) )
        cmd->buttons |= 4ui64;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v17->snap.ps.eFlags, ACTIVE, 0xBu) )
      {
        *(double *)&_XMM0 = GPad_GetButton(portIndex[1], GPAD_R_TRIG);
        __asm { vucomiss xmm0, xmm7 }
        if ( !v42 )
          cmd->buttons |= 0x1000000ui64;
      }
      CG_HandleSpecialStateInput((LocalClientNum_t)v15, &cmd->buttons, *(ButtonSet **)outClearButtonsa.v);
      if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v15) )
      {
        if ( CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 525, ASSERT_TYPE_ASSERT, "(!CL_InputMP_DisableFrontEndMovement( localClientNum ))", "%s\n\tShould not proceed with gamepad input when controls are frozen", "!CL_InputMP_DisableFrontEndMovement( localClientNum )") )
          __debugbreak();
      }
      else if ( !CG_ShouldUpdateViewAngles((LocalClientNum_t)v15) )
      {
LABEL_72:
        if ( CollAvoid_ShouldUpdateMoveCmd((LocalClientNum_t)v15) )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v15);
          __asm { vmovaps xmm2, xmm12; deltaTime }
          CollAvoid_UpdateMoveCmd((LocalClientNum_t)v15, &LocalClientGlobals->predictedPlayerState, *(float *)&_XMM2, cmd);
        }
        CG_GetLocalClientGlobals((const LocalClientNum_t)v15);
        __asm
        {
          vmovss  dword ptr [rsp+170h+fmt], xmm8
          vmovaps xmm3, xmm9; pitch
          vmovaps xmm2, xmm10; side
          vmovaps xmm1, xmm6; forward
        }
        CG_ModelPreviewerHandleGamepadEvents((LocalClientNum_t)v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
        __asm
        {
          vmovss  dword ptr [rsp+170h+fmt], xmm8
          vmovaps xmm3, xmm9; pitch
          vmovaps xmm2, xmm10; side
          vmovaps xmm1, xmm6; forward
        }
        CG_CreateFx_HandleGamepadEvents((LocalClientNum_t)v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
        goto LABEL_76;
      }
      v70 = CG_GetLocalClientGlobals((const LocalClientNum_t)v15);
      __asm { vmovaps xmm1, xmm8; inputDeltaYaw }
      *(double *)&_XMM0 = Mantle_SlowInputTurnRate(&v70->predictedPlayerState, *(const float *)&_XMM1);
      __asm { vmovaps xmm8, xmm0 }
      ClActiveClient_GetCLViewangles(v17, &outClearButtonsa);
      __asm
      {
        vmovss  [rsp+170h+input.deltaTime], xmm12
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, cs:?cls@@3UClStatic@@A.frametime; ClStatic cls
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmovss  [rsp+170h+input.deltaTimeScaled], xmm1
        vmovss  xmm2, dword ptr [rsp+170h+outClearButtons]
        vmovss  [rbp+70h+input.pitch], xmm2
        vmovss  [rbp+70h+input.pitchAxis], xmm9
      }
      *(double *)&_XMM0 = CL_GetMaxPitchSpeed((LocalClientNum_t)v15);
      __asm
      {
        vmovss  [rbp+70h+input.pitchMax], xmm0
        vmovss  xmm0, dword ptr [rsp+170h+outClearButtons+4]
        vmovss  [rbp+70h+input.yaw], xmm0
        vmovss  [rbp+70h+input.yawAxis], xmm8
      }
      *(double *)&_XMM0 = CL_GetMaxYawSpeed((LocalClientNum_t)v15);
      __asm
      {
        vmovss  [rbp+70h+input.yawMax], xmm0
        vmovss  [rbp+70h+input.forwardAxis], xmm6
        vmovss  [rbp+70h+input.rightAxis], xmm10
      }
      input.buttons = cmd->buttons;
      input.localClientNum = v15;
      input.meleeChargeEnt = cmd->meleeChargeEnt;
      AimAssist_UpdateGamePadInput(&input, &output);
      __asm
      {
        vmovss  xmm0, [rsp+170h+output.pitch]
        vmovss  dword ptr [rsp+170h+outClearButtons], xmm0
        vmovss  xmm1, [rsp+170h+output.yaw]
        vmovss  dword ptr [rsp+170h+outClearButtons+4], xmm1
      }
      ClActiveClient_SetCLViewangles(v17, &outClearButtonsa);
      BG_SetMeleeChargeCmd(&output, cmd);
      memset(&outClearButtonsa, 0, sizeof(outClearButtonsa));
      goto LABEL_72;
    }
  }
LABEL_76:
  _R11 = &v103;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
CL_InputMP_GetCommandDelta
==============
*/
char CL_InputMP_GetCommandDelta(const LocalClientNum_t localClientNum, const ClActiveClientMP *const cl, const ClConnectionMP *const clc, unsigned __int8 *outCmdDelta, usercmd_s *outCmd, CmdPredict *outPredict)
{
  int messageAcknowledge; 
  netchan_t *p_netchan; 
  int v13; 
  unsigned int v14; 
  int CmdNumber; 
  int p_cmdNumber; 
  const ClActiveClient *Client; 
  int v18; 
  int v19; 
  __int64 v22; 
  char *fmt; 
  __int64 v32; 
  ClOutPacketMP outPacket; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1277, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !clc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1278, ASSERT_TYPE_ASSERT, "(clc)", (const char *)&queryFormat, "clc") )
    __debugbreak();
  if ( !outCmdDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1279, ASSERT_TYPE_ASSERT, "(outCmdDelta != nullptr)", (const char *)&queryFormat, "outCmdDelta != nullptr") )
    __debugbreak();
  _RSI = outCmd;
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
    LODWORD(v32) = clc->m_connectionData.messageAcknowledge;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1295, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clcData->messageAcknowledge ) && ( clcData->messageAcknowledge ) <= ( clcData->netchan.outgoingSequence )", "clcData->messageAcknowledge not in [0, clcData->netchan.outgoingSequence]\n\t%i not in [%i, %i]", v32, 0i64, p_netchan->outgoingSequence) )
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
  _RBX = &Client->cmds[p_cmdNumber & 0x7F];
  memset(&outCmd, 0, 4ui64);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
    __debugbreak();
  v22 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsi], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rsi+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rsi+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rsi+30h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rsi+40h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rsi+50h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rsi+60h], xmm0
    }
    _RSI = (usercmd_s *)((char *)_RSI + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rsi-10h], xmm1
    }
    _RBX = (usercmd_s *)((char *)_RBX + 128);
    --v22;
  }
  while ( v22 );
  _RSI->buttons = _RBX->buttons;
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

void __fastcall CL_InputMP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, double frametime_base, double rawMx, float rawMy)
{
  usercmd_s *v18; 
  __int64 v19; 
  __int64 v21; 
  ClActiveClientMP *ClientMP; 
  const dvar_t *v25; 
  bool enabled; 
  const dvar_t *v27; 
  int integer; 
  bool v29; 
  char v31; 
  bool v32; 
  bool v33; 
  ClActiveClientMP *v38; 
  bool v39; 
  int ControllerFromClient; 
  bool FreeLook; 
  bool active; 
  char v56; 
  bool v57; 
  int v94; 
  char v102; 
  const dvar_t *v104; 
  int v105; 
  int v106; 
  int v107; 
  const CameraDef *Def; 
  bool v109; 
  int v128; 
  char v129; 
  int v130; 
  char v131; 
  float fmt; 
  float fmta; 
  float outMx; 
  int v155; 
  float outMy; 
  int v157; 
  int v158; 
  vec3_t clViewangles; 
  __int64 v162; 
  unsigned __int64 v163; 
  __int64 v164; 
  AimOutput output; 
  AimInput input; 
  char v167; 
  void *retaddr; 

  _RAX = &retaddr;
  v164 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
    vmovaps xmm6, xmm3
    vmovss  dword ptr [rsp+1C0h+var_168], xmm3
    vmovss  [rsp+1C0h+var_16C], xmm2
  }
  v18 = cmd;
  *(_QWORD *)clViewangles.v = cmd;
  v19 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 607, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( frame_msec )
  {
    _RDI = ClActiveClient::GetClient((const LocalClientNum_t)v19);
    v21 = (__int64)_RDI->GetPlayerState(_RDI);
    v162 = v21;
    __asm
    {
      vmovss  [rsp+1C0h+outMx], xmm6
      vmovss  xmm7, [rbp+0C0h+rawMy]
      vmovss  [rsp+1C0h+outMy], xmm7
    }
    CL_Input_ApplyMouseSensitivity((const LocalClientNum_t)v19, &outMx, &outMy);
    _EBX = 0;
    *(_QWORD *)_RDI->mouseViewDelta.v = 0i64;
    _RDI->mouseViewDelta.v[2] = 0.0;
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v19);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x10u) || (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v19) && CL_InputMP_DisableFrontEndMovement((LocalClientNum_t)v19) )
    {
      g_lastInputTimeForAnyLocalPlayer = com_frameTime;
    }
    else
    {
      v25 = DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput;
      if ( !DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulateShellshockedMouseInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      enabled = v25->current.enabled;
      v27 = DCONST_DVARINT_cl_accumulatedInputExpirationTime;
      if ( !DCONST_DVARINT_cl_accumulatedInputExpirationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulatedInputExpirationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      integer = v27->current.integer;
      v29 = enabled && _RDI->accumulatedInputTimer < integer;
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vucomiss xmm9, dword ptr [rdi+1CCh]
      }
      if ( !v29 )
      {
        __asm { vucomiss xmm9, dword ptr [rdi+1C8h] }
        if ( !enabled || _RDI->accumulatedInputTimer >= integer )
          v29 = 0;
      }
      v31 = 1;
      v32 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v21 + 20), ACTIVE, 0x15u) && BG_GetShellshockParms(*(_DWORD *)(v21 + 4412))->lookControl.affect;
      v33 = v32 && v29;
      if ( !v33 )
      {
        *(_QWORD *)&_RDI->accumulatedMouseDelta.y = 0i64;
        _RDI->accumulatedMouseDelta.v[0] = 0.0;
      }
      __asm { vmovss  xmm11, cs:__real@3a83126f }
      if ( !AimAssist_IsMeleeLockOnActive((LocalClientNum_t)v19) )
      {
        __asm
        {
          vucomiss xmm6, xmm9
          vucomiss xmm7, xmm9
        }
        if ( v33 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxShellshockCatchUpSpeed, "cl_maxShellshockCatchUpSpeed");
          __asm { vmovaps xmm15, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_shortMovementThreshold, "cl_shortMovementThreshold");
          __asm { vmovaps xmm11, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_longMovementThreshold, "cl_longMovementThreshold");
          __asm
          {
            vmovaps xmm14, xmm0
            vcomiss xmm11, xmm0
          }
          if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 664, ASSERT_TYPE_ASSERT, "(shortMovementThreshold < longMovementThreshold)", (const char *)&queryFormat, "shortMovementThreshold < longMovementThreshold") )
            __debugbreak();
          LOBYTE(v157) = 0;
          g_lastInputTimeForAnyLocalPlayer = com_frameTime;
          v158 = 0;
          v163 = 1632 * v19;
          v38 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v19);
          v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v38->snap.ps.pm_flags, ACTIVE, 0x11u);
          LOBYTE(v155) = v39;
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v19);
          FreeLook = GamerProfile_GetFreeLook(ControllerFromClient);
          if ( !g_playersKb[v19][14].active && !FreeLook )
            v31 = 0;
          active = g_playersKb[v19][8].active;
          __asm { vmovss  xmm6, cs:__real@3f000000 }
          if ( (active || !v31) && active )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_side, "m_side");
            __asm
            {
              vmulss  xmm1, xmm0, [rsp+1C0h+outMx]
              vaddss  xmm3, xmm1, xmm6
              vxorps  xmm2, xmm2, xmm2
              vmovss  xmm4, xmm2, xmm3
              vxorps  xmm0, xmm0, xmm0
              vroundss xmm1, xmm0, xmm4, 1
              vcvttss2si ecx, xmm1
            }
            v18->rightmove = CL_Input_ClampInputChar(v18->rightmove + _ECX);
          }
          if ( !v31 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_forward, "m_forward");
            __asm
            {
              vmulss  xmm1, xmm0, [rsp+1C0h+outMy]
              vaddss  xmm3, xmm1, xmm6
              vxorps  xmm2, xmm2, xmm2
              vmovss  xmm4, xmm2, xmm3
              vxorps  xmm0, xmm0, xmm0
              vroundss xmm1, xmm0, xmm4, 1
              vcvttss2si eax, xmm1
            }
            v18->forwardmove = CL_Input_ClampInputChar(v18->forwardmove - _EAX);
          }
          __asm { vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
          v56 = 0;
          v57 = !v39;
          if ( v39 )
            goto LABEL_51;
          *(double *)&_XMM0 = CL_GetMaxYawSpeed((LocalClientNum_t)v19);
          __asm { vmovaps xmm7, xmm0 }
          *(double *)&_XMM0 = CL_GetMaxPitchSpeed((LocalClientNum_t)v19);
          __asm { vmovaps xmm8, xmm0 }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_combinedCameraRotationSpeed, "cl_combinedCameraRotationSpeed") )
            __asm { vucomiss xmm7, xmm8 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_yaw, "m_yaw");
          __asm
          {
            vmulss  xmm1, xmm0, [rsp+1C0h+outMx]
            vaddss  xmm1, xmm1, dword ptr [rdi+1CCh]
            vmovss  dword ptr [rdi+1CCh], xmm1
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_pitch, "m_pitch");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = CL_Input_GetClientLookInversion((LocalClientNum_t)v19);
          __asm
          {
            vmulss  xmm13, xmm0, xmm6
            vxorps  xmm12, xmm13, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm0, xmm12, [rsp+1C0h+outMy]
            vaddss  xmm6, xmm0, dword ptr [rdi+1C8h]
            vmovss  dword ptr [rdi+1C8h], xmm6
          }
          if ( g_playersKb[v163 / 0x660][8].active )
          {
            LOBYTE(v18) = v157;
          }
          else
          {
            __asm
            {
              vmovss  xmm0, [rsp+1C0h+outMx]
              vandps  xmm1, xmm0, xmm10
              vcomiss xmm1, xmm11
            }
            if ( g_playersKb[v163 / 0x660][8].active )
            {
              __asm
              {
                vmulss  xmm0, xmm0, dword ptr [rdi+1CCh]
                vcomiss xmm0, xmm9
              }
            }
            __asm { vcomiss xmm11, xmm1 }
            LOBYTE(v18) = 0;
            v157 = (int)v18;
            __asm
            {
              vmovss  dword ptr [rsp+1C0h+fmt], xmm9
              vmovaps xmm2, xmm7; maxAxisSpeed
            }
            *(double *)&_XMM0 = CL_Input_UpdateViewAnglesAxis(_RDI, YAW, *(const float *)&_XMM2, 0, fmt);
            __asm
            {
              vmovaps xmm2, xmm0; deltaYaw
              vmovss  xmm1, dword ptr [rdi+1CCh]
              vandps  xmm1, xmm1, xmm10
              vcomiss xmm1, cs:__real@3a83126f
            }
            if ( !v56 )
              __asm { vcomiss xmm7, xmm9 }
            _RDI->accumulatedMouseDelta.v[1] = 0.0;
            __asm
            {
              vmovss  xmm1, [rsp+1C0h+outMx]; mx
              vcvttss2si eax, xmm1
            }
            v158 = -_EAX;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+1C0h]
              vsubss  xmm3, xmm0, dword ptr [rax+0B8h]; yaw
              vmovss  xmm0, [rsp+1C0h+var_16C]; deltaTime
            }
            CL_Input_LogMouseInputVelocity(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
          }
          v56 = 0;
          v57 = v31 == 0;
          if ( !v31 )
          {
LABEL_51:
            __asm
            {
              vmovss  xmm1, [rsp+1C0h+outMy]
              vmovss  xmm11, cs:__real@3a83126f
              vmovss  xmm13, cs:__real@3f800000
            }
            v94 = v158;
            _ECX = 0;
            LOBYTE(v18) = v157;
          }
          else
          {
            __asm
            {
              vmovss  xmm1, [rsp+1C0h+outMy]
              vandps  xmm0, xmm1, xmm10
              vcomiss xmm0, xmm11
              vmulss  xmm0, xmm12, xmm1
              vmulss  xmm1, xmm0, dword ptr [rdi+1C8h]
              vcomiss xmm1, xmm9
              vmovss  xmm0, [rsp+1C0h+outMx]
              vandps  xmm0, xmm0, xmm10
              vcomiss xmm11, xmm0
              vmovss  dword ptr [rsp+1C0h+fmt], xmm9
              vmovaps xmm2, xmm8; maxAxisSpeed
            }
            CL_Input_UpdateViewAnglesAxis(_RDI, PITCH, *(const float *)&_XMM2, 0, fmta);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+1C8h]
              vandps  xmm0, xmm0, xmm10
              vmovss  xmm11, cs:__real@3a83126f
              vcomiss xmm0, xmm11
            }
            if ( !v56 )
            {
              v56 = 0;
              v57 = 1;
              __asm { vcomiss xmm8, xmm9 }
            }
            _RDI->accumulatedMouseDelta.v[0] = 0.0;
            __asm
            {
              vcomiss xmm13, cs:__real@80000000
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmovss  xmm1, [rsp+1C0h+outMy]
              vmulss  xmm0, xmm0, xmm1
              vcvttss2si ecx, xmm0
              vmovss  xmm13, cs:__real@3f800000
            }
            v94 = v158;
          }
          __asm
          {
            vmovss  xmm0, [rsp+1C0h+outMx]
            vandps  xmm0, xmm0, xmm10
            vcomiss xmm0, xmm14
          }
          if ( !(v56 | v57) )
            goto LABEL_60;
          __asm
          {
            vandps  xmm1, xmm1, xmm10
            vcomiss xmm1, xmm14
          }
          if ( v56 | v57 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1C0h+var_168]
              vucomiss xmm0, xmm9
            }
            if ( !v57 )
              goto LABEL_57;
            __asm
            {
              vmovss  xmm0, [rbp+0C0h+rawMy]
              vucomiss xmm0, xmm9
            }
            if ( v57 )
              v102 = 0;
            else
LABEL_57:
              v102 = 1;
            if ( ((unsigned __int8)v102 & (unsigned __int8)v18) != 0 )
              _RDI->accumulatedInputTimer += frame_msec;
          }
          else
          {
LABEL_60:
            _RDI->accumulatedInputTimer = 0;
          }
          _ESI = 0;
          if ( !(_BYTE)v155 )
            _ESI = _ECX;
          if ( !(_BYTE)v155 )
            _EBX = v94;
          v104 = DVARBOOL_scaledOrbitKbmControlsEnabled;
          if ( !DVARBOOL_scaledOrbitKbmControlsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledOrbitKbmControlsEnabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v104);
          v105 = _EBX;
          v106 = _ESI;
          if ( v104->current.enabled )
          {
            v107 = CG_Camera_Active_Get((LocalClientNum_t)v19);
            Def = BG_Camera_GetDef(v107);
            v109 = v107 && v107 < 256 && (unsigned int)(v107 - 1) < 0xFA && Def->profile == CAMERAPROFILE_ORBIT;
            v105 = _EBX;
            if ( !CL_Input_IsGamepadEnabled((LocalClientNum_t)v19) && v109 )
            {
              __asm
              {
                vmovd   xmm0, esi
                vcvtdq2ps xmm0, xmm0
                vmulss  xmm6, xmm0, cs:__real@3c010204
                vmovd   xmm0, ebx
                vcvtdq2ps xmm0, xmm0
                vmulss  xmm8, xmm0, cs:__real@3c010204
                vandps  xmm2, xmm6, xmm10
                vaddss  xmm0, xmm2, xmm13; X
              }
              *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
              __asm
              {
                vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
                vcmpless xmm1, xmm9, xmm6
                vblendvps xmm7, xmm2, xmm0, xmm1
                vandps  xmm0, xmm8, xmm10
                vaddss  xmm0, xmm0, xmm13; X
              }
              *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
              __asm
              {
                vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
                vcmpless xmm1, xmm9, xmm8
                vblendvps xmm6, xmm2, xmm0, xmm1
                vmovaps xmm0, xmm7; v
              }
              v106 = CL_Input_AxisValueToChar(*(float *)&_XMM0);
              __asm { vmovaps xmm0, xmm6; v }
              v105 = CL_Input_AxisValueToChar(*(float *)&_XMM0);
            }
          }
          v18 = *(usercmd_s **)clViewangles.v;
          v128 = v106 + *(char *)(*(_QWORD *)clViewangles.v + 158i64);
          if ( v128 > 127 )
            v128 = 127;
          v129 = v128;
          if ( v128 < -128 )
            v129 = 0x80;
          *(_BYTE *)(*(_QWORD *)clViewangles.v + 158i64) = v129;
          v130 = v105 + v18->yawmove;
          if ( v130 > 127 )
            v130 = 127;
          v131 = v130;
          if ( v130 < -128 )
            v131 = 0x80;
          v18->yawmove = v131;
        }
      }
      CL_InputMP_ValidateZeroCmds(v18);
      ClActiveClient_GetCLViewangles(_RDI, &clViewangles);
      __asm
      {
        vmovss  xmm0, [rsp+1C0h+var_16C]
        vmovss  [rbp+0C0h+input.deltaTime], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, cs:?cls@@3UClStatic@@A.frametime; ClStatic cls
        vmulss  xmm1, xmm0, xmm11
        vmovss  [rbp+0C0h+input.deltaTimeScaled], xmm1
        vmovss  xmm2, dword ptr [rsp+1C0h+clViewangles]
        vmovss  [rbp+0C0h+input.pitch], xmm2
        vmovss  [rbp+0C0h+input.pitchAxis], xmm9
        vmovss  [rbp+0C0h+input.pitchMax], xmm9
        vmovss  xmm0, dword ptr [rsp+1C0h+clViewangles+4]
        vmovss  [rbp+0C0h+input.yaw], xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovups xmmword ptr [rbp+0C0h+input.yawAxis], xmm1
      }
      input.buttons = v18->buttons;
      input.localClientNum = v19;
      input.meleeChargeEnt = v18->meleeChargeEnt;
      AimAssist_UpdateMouseInput(&input, &output);
      __asm
      {
        vmovss  xmm0, [rbp+0C0h+output.pitch]
        vmovss  dword ptr [rsp+1C0h+clViewangles], xmm0
        vmovss  xmm1, [rbp+0C0h+output.yaw]
        vmovss  dword ptr [rsp+1C0h+clViewangles+4], xmm1
      }
      ClActiveClient_SetCLViewangles(_RDI, &clViewangles);
      BG_SetMeleeChargeCmd(&output, v18);
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
  _R11 = &v167;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
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

void __fastcall CL_InputMP_RemoteControlMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons, double mx, float my)
{
  float v6; 
  float v7; 

  __asm
  {
    vmovss  xmm0, [rsp+38h+my]
    vmovss  [rsp+38h+var_10], xmm0
    vmovss  [rsp+38h+var_18], xmm3
  }
  CL_Input_RemoteControlMove(localClientNum, cmd, 0, outClearButtons, v6, v7);
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
  unsigned int v6; 
  int v11; 
  int v12; 

  _RDI = oldAngles;
  if ( !cl )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 1061, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 283, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  xmm2, cs:__real@42b40000
  }
  v6 = ((_DWORD)cl + 428) ^ cl->clviewangles_aab;
  v11 = LODWORD(cl->clViewangles.clViewangles.v[0]) ^ (v6 * (v6 + 2));
  __asm
  {
    vmovss  xmm3, [rsp+38h+arg_0]
    vsubss  xmm0, xmm3, xmm1
    vcomiss xmm0, xmm2
  }
  if ( v11 )
  {
    __asm { vaddss  xmm0, xmm1, xmm2 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm3
      vcomiss xmm0, xmm2
    }
    if ( LODWORD(cl->clViewangles.clViewangles.v[0]) == v6 * (v6 + 2) )
      return;
    __asm { vsubss  xmm0, xmm1, xmm2 }
  }
  __asm { vmovss  [rsp+38h+arg_0], xmm0 }
  LODWORD(cl->clViewangles.clViewangles.v[0]) = v12 ^ ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) * ((((_DWORD)cl + 428) ^ cl->clviewangles_aab) + 2));
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
  bool v3; 
  bool v4; 
  bool v6; 

  _RBX = cmd;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( cmd->upmove || (v3 = cmd->downmove == 0, cmd->downmove) )
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 280, ASSERT_TYPE_ASSERT, "((cmd->upmove == 0) && (cmd->downmove == 0))", "%s\n\tMP does not use upmove or downmmove", "(cmd->upmove == 0) && (cmd->downmove == 0)");
    v3 = !v4;
    if ( v4 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+0CCh]
  }
  if ( !v3 )
    goto LABEL_24;
  __asm { vucomiss xmm6, dword ptr [rbx+0D0h] }
  if ( !v3 )
    goto LABEL_24;
  __asm { vucomiss xmm6, dword ptr [rbx+0D4h] }
  if ( !v3 )
    goto LABEL_24;
  __asm { vucomiss xmm6, dword ptr [rbx+0D8h] }
  if ( !v3 )
    goto LABEL_24;
  __asm { vucomiss xmm6, dword ptr [rbx+0DCh] }
  if ( !v3 )
  {
LABEL_24:
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 281, ASSERT_TYPE_ASSERT, "((cmd->gunPitch == 0.0f) && (cmd->gunYaw == 0.0f) && (cmd->gunXOfs == 0.0f) && (cmd->gunYOfs == 0.0f) && (cmd->gunZOfs == 0.0f))", "%s\n\tMP does not support those ADS fields", "(cmd->gunPitch == 0.0f) && (cmd->gunYaw == 0.0f) && (cmd->gunXOfs == 0.0f) && (cmd->gunYOfs == 0.0f) && (cmd->gunZOfs == 0.0f)");
    v3 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, dword ptr [rbx+0E0h] }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 285, ASSERT_TYPE_ASSERT, "((cmd->rollSensitivity == 0))", "%s\n\tMP does not use rollSensitivity in usercmd.", "(cmd->rollSensitivity == 0)") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE )") )
    __debugbreak();
  if ( _RBX->scriptedMeleeTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp.cpp", 288, ASSERT_TYPE_ASSERT, "((cmd->scriptedMeleeTarget == 0))", "%s\n\tMP does not use the scripted_melee system.", "(cmd->scriptedMeleeTarget == 0)") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

