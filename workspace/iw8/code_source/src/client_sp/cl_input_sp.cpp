/*
==============
CL_InputSP_WritePacket
==============
*/

void __fastcall CL_InputSP_WritePacket(LocalClientNum_t localClientNum)
{
  ?CL_InputSP_WritePacket@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputSP_ExecBinding
==============
*/

void __fastcall CL_InputSP_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  ?CL_InputSP_ExecBinding@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, kb, key, forceNotify);
}

/*
==============
CL_InputSP_NightVisionUp
==============
*/

void CL_InputSP_NightVisionUp(void)
{
  ?CL_InputSP_NightVisionUp@@YAXXZ();
}

/*
==============
CL_InputSP_RegisterCommands
==============
*/

void CL_InputSP_RegisterCommands(void)
{
  ?CL_InputSP_RegisterCommands@@YAXXZ();
}

/*
==============
CL_InputSP_ClearClientCommandPacket
==============
*/

void __fastcall CL_InputSP_ClearClientCommandPacket(LocalClientNum_t localClientNum)
{
  ?CL_InputSP_ClearClientCommandPacket@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputSP_NightVisionDown
==============
*/

void CL_InputSP_NightVisionDown(void)
{
  ?CL_InputSP_NightVisionDown@@YAXXZ();
}

/*
==============
CL_InputSP_HandleClientInput
==============
*/

void __fastcall CL_InputSP_HandleClientInput(LocalClientNum_t localClientNum)
{
  ?CL_InputSP_HandleClientInput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputSP_MouseMove
==============
*/

void __fastcall CL_InputSP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, float frametime_base, float rawMx, float rawMy)
{
  ?CL_InputSP_MouseMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@MMM@Z(localClientNum, cmd, frametime_base, rawMx, rawMy);
}

/*
==============
CL_InputSP_UnregisterCommands
==============
*/

void CL_InputSP_UnregisterCommands(void)
{
  ?CL_InputSP_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_InputSP_ClearClientThinkPacket
==============
*/

void __fastcall CL_InputSP_ClearClientThinkPacket(LocalClientNum_t localClientNum, const usercmd_s *const cmd)
{
  ?CL_InputSP_ClearClientThinkPacket@@YAXW4LocalClientNum_t@@QEBUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_InputSP_NightVisionDown
==============
*/
void CL_InputSP_NightVisionDown(void)
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyDownCheat(&g_playersKb[v0][34]);
}

/*
==============
CL_InputSP_NightVisionUp
==============
*/
void CL_InputSP_NightVisionUp(void)
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyUpCheat(&g_playersKb[v0][34]);
}

/*
==============
CL_InputSP_AdjustViewanglesForKeyboard
==============
*/
void CL_InputSP_AdjustViewanglesForKeyboard(LocalClientNum_t localClientNum)
{
  kbutton_t *v6; 
  ClActiveClientSP *ClientSP; 
  const dvar_t *v8; 
  vec3_t clViewangles; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  v6 = g_playersKb[localClientNum];
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  if ( v6[9].active )
  {
    v8 = DVARFLT_cl_anglespeedkey;
    if ( !DVARFLT_cl_anglespeedkey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anglespeedkey") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm7, xmm1, dword ptr [rdi+28h]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm7, xmm0, cs:__real@3a83126f
    }
  }
  ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
  if ( !v6[8].active )
  {
    _RDI = DVARFLT_cl_yawspeed;
    if ( !DVARFLT_cl_yawspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_yawspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    *(double *)&_XMM0 = CL_Input_KeyState(v6 + 1);
    __asm
    {
      vmulss  xmm1, xmm7, xmm6
      vmulss  xmm2, xmm0, xmm1
      vmovss  xmm0, dword ptr [rsp+0A8h+clViewangles+4]
      vsubss  xmm8, xmm0, xmm2
      vmovss  dword ptr [rsp+0A8h+clViewangles+4], xmm8
    }
    _RDI = DVARFLT_cl_yawspeed;
    if ( !DVARFLT_cl_yawspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_yawspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    *(double *)&_XMM0 = CL_Input_KeyState(v6);
    __asm
    {
      vmulss  xmm1, xmm7, xmm6
      vmulss  xmm0, xmm0, xmm1
      vaddss  xmm2, xmm8, xmm0
      vmovss  dword ptr [rsp+0A8h+clViewangles+4], xmm2
    }
  }
  _RDI = DVARFLT_cl_pitchspeed;
  if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 4);
  __asm
  {
    vmulss  xmm1, xmm7, xmm6
    vmulss  xmm2, xmm0, xmm1
    vmovss  xmm0, dword ptr [rsp+0A8h+clViewangles]
    vsubss  xmm8, xmm0, xmm2
    vmovss  dword ptr [rsp+0A8h+clViewangles], xmm8
  }
  _RDI = DVARFLT_cl_pitchspeed;
  if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 5);
  __asm
  {
    vmulss  xmm1, xmm7, xmm6
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm2, xmm8, xmm0
    vmovss  dword ptr [rsp+0A8h+clViewangles], xmm2
  }
  ClActiveClient_SetCLViewangles(ClientSP, &clViewangles);
  memset(&clViewangles, 0, sizeof(clViewangles));
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_InputSP_ClearClientCommandPacket
==============
*/
void CL_InputSP_ClearClientCommandPacket(LocalClientNum_t localClientNum)
{
  ClConnectionDataSP *ClientConnectionData; 

  Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
  ClientConnectionData = ClConnectionSP::GetClientConnectionData(localClientNum);
  ClientConnectionData->reliableAcknowledge = ClientConnectionData->reliableSequence;
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
}

/*
==============
CL_InputSP_ClearClientThinkPacket
==============
*/
void CL_InputSP_ClearClientThinkPacket(LocalClientNum_t localClientNum, const usercmd_s *const cmd)
{
  ClActiveClientSP *ClientSP; 
  const dvar_t *v5; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1352, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  ClientSP->cmdNumberAcknowledge = ClActiveClient_GetCmdNumber(ClientSP);
  v5 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer != 2 )
  {
    ClientSP->cmdTimeUsec = 1000i64 * cmd->commandTime;
    ClientSP->cmdTimeMsec = cmd->commandTime;
  }
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
}

/*
==============
CL_InputSP_CmdButtons
==============
*/
void CL_InputSP_CmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v3; 
  ClActiveClientSP *ClientSP; 
  __int64 v7; 
  playerState_s *p_ps; 
  const dvar_t *v9; 

  v3 = localClientNum;
  CL_Input_CmdButtons(localClientNum, cmd, outClearButtons);
  CL_Input_UpdateCmdButton((LocalClientNum_t)v3, &cmd->buttons, 34, 0x10000ui64, outClearButtons);
  ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v3);
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientSP->ps.weapCommon.weapFlags, ACTIVE, 0) )
    cmd->buttons |= 0x10ui64;
  if ( (unsigned int)(ClientSP->ps.pm_type - 2) <= 1 )
    goto LABEL_8;
  if ( ClientSP == (ClActiveClientSP *)-34624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ClientSP->ps.eFlags, ACTIVE, 0xBu) )
LABEL_8:
    CL_Input_UpdateCmdButton((LocalClientNum_t)v3, &cmd->buttons, 12, 0x100ui64, outClearButtons);
  v7 = v3;
  if ( g_playersKb[v3][38].active || g_playersKb[v7][38].wasPressed )
    cmd->buttons |= 0x200ui64;
  if ( g_playersKb[v7][37].active || g_playersKb[v7][37].wasPressed )
    cmd->buttons |= 1ui64;
  p_ps = &ClientSP->ps;
  if ( !p_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_Skydive_IsSkydiving(p_ps) && BG_Ladder_IsDualWieldingAllowed(p_ps) && p_ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT )
  {
    v9 = DVARBOOL_cl_accessibilityAkimboEnabled;
    if ( !DVARBOOL_cl_accessibilityAkimboEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accessibilityAkimboEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && (g_playersKb[v7][37].active || g_playersKb[v7][37].wasPressed) )
      cmd->buttons |= 0x20000ui64;
  }
  g_playersKb[v7][37].wasPressed = 0;
  CL_Input_ValidateCmdButtons((const LocalClientNum_t)v3, cmd);
}

/*
==============
CL_InputSP_CreateCmd
==============
*/
usercmd_s *CL_InputSP_CreateCmd(usercmd_s *result, LocalClientNum_t localClientNum, ButtonSet *outClearButtons)
{
  __int64 v7; 
  ClActiveClientSP *ClientSP; 
  cg_t *LocalClientGlobals; 
  __int64 v13; 
  usercmd_s *v19; 
  __int64 v23; 
  __int64 v31; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v37; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v38; 
  bool v39; 
  int i; 
  ClActiveClientSP *v41; 
  __int64 v42; 
  ClActiveClientSP *v43; 
  const dvar_t *v44; 
  int ControllerFromClient; 
  const dvar_t *v56; 
  cg_t *v61; 
  playerState_s *p_predictedPlayerState; 
  char v64; 
  char v65; 
  int v72; 
  __int64 v75; 
  float fmt; 
  float fmta; 
  __int64 my; 
  float mya; 
  __int64 v85; 
  float mx[2]; 
  vec3_t v87; 
  vec3_t clViewangles; 
  __int64 v89; 
  usercmd_s cmd; 
  void *retaddr; 

  _RAX = &retaddr;
  v89 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v7 = localClientNum;
  memset_0(&cmd, 0, sizeof(cmd));
  cmd.meleeChargeEnt = 2047;
  ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
  ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
  *(_DWORD *)&cmd.extrapolationMax = 0;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
    __debugbreak();
  if ( (unsigned int)v7 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v85) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(my) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", my, v85) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v7] )
  {
    LODWORD(v85) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v85) )
      __debugbreak();
  }
  CgVehicleSystem::PhysicsUpdateCmdValues(CgVehicleSystem::ms_vehicleSystemArray[v7], &cmd);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 904, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->transitionSettleIsActive )
    goto LABEL_16;
  if ( LocalClientGlobals->snap == LocalClientGlobals->nextSnap )
  {
    LocalClientGlobals->skipNextFrameInput = 1;
    goto LABEL_16;
  }
  if ( LocalClientGlobals->skipNextFrameInput )
  {
    LocalClientGlobals->skipNextFrameInput = 0;
LABEL_16:
    CL_Input_AddCurrentStanceToCmd((LocalClientNum_t)v7, &cmd);
    CL_InputSP_FinishMove((LocalClientNum_t)v7, &cmd, outClearButtons);
    memset(&clViewangles, 0, sizeof(clViewangles));
    _RDX = result;
    _RAX = &cmd;
    v13 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rdx+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rdx+60h], xmm0
      }
      _RDX = (usercmd_s *)((char *)_RDX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      _RAX = (usercmd_s *)((char *)_RAX + 128);
      --v13;
    }
    while ( v13 );
    goto LABEL_18;
  }
  CL_InputSP_AdjustViewanglesForKeyboard((LocalClientNum_t)v7);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1D0h+mx+4], xmm0
    vmovss  [rsp+1D0h+mx], xmm0
  }
  CL_Input_ValidateMouseMovementCalls();
  CL_Input_GetMouseMovement((LocalClientNum_t)v7, &mx[1], mx);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, ACTIVE, 0x1Cu) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+1D0h+mx]
      vmovss  [rsp+1D0h+my], xmm0
      vmovss  xmm1, [rsp+1D0h+mx+4]
      vmovss  dword ptr [rsp+1D0h+fmt], xmm1
    }
    CL_Input_RemoteControlMove((LocalClientNum_t)v7, &cmd, 1, outClearButtons, fmt, mya);
    if ( ClientSP->ps.viewlocked_entNum == 2047 )
    {
      CL_InputSP_FinishMove((LocalClientNum_t)v7, &cmd, outClearButtons);
      memset(&clViewangles, 0, sizeof(clViewangles));
      _RDX = result;
      _RAX = &cmd;
      v23 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rdx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rdx+40h], ymm0
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rdx+60h], xmm0
        }
        _RDX = (usercmd_s *)((char *)_RDX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        _RAX = (usercmd_s *)((char *)_RAX + 128);
        --v23;
      }
      while ( v23 );
      goto LABEL_18;
    }
  }
  if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v7, 8) || CL_Keys_IsCatcherActive((LocalClientNum_t)v7, 16) )
  {
    __asm
    {
      vmovss  xmm3, [rsp+1D0h+mx]; my
      vmovss  xmm2, [rsp+1D0h+mx+4]; mx
    }
    if ( CL_Input_LocationSelection((const LocalClientNum_t)v7, &cmd, *(float *)&_XMM2, *(float *)&_XMM3, outClearButtons) )
    {
      CL_InputSP_FinishMove((LocalClientNum_t)v7, &cmd, outClearButtons);
      memset(&clViewangles, 0, sizeof(clViewangles));
      _RDX = result;
      _RAX = &cmd;
      v31 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rdx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rdx+40h], ymm0
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rdx+60h], xmm0
        }
        _RDX = (usercmd_s *)((char *)_RDX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        _RAX = (usercmd_s *)((char *)_RAX + 128);
        --v31;
      }
      while ( v31 );
      goto LABEL_18;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
  {
    v37 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    v38 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)((char *)v37 + 369908);
    v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v37 + 48915, GameModeFlagValues::ms_spValue, 0x3Au);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v38, GameModeFlagValues::ms_spValue, 0x3Au) != v39 )
    {
      for ( i = 1; i < 222; ++i )
      {
        if ( CL_Keys_GetActiveBinding((LocalClientNum_t)v7, i) == 31 )
          CL_Input_KeyUp(&g_playersKb[v7][30], i, com_frameTime);
      }
    }
  }
  CL_InputSP_CmdButtons((LocalClientNum_t)v7, &cmd, outClearButtons);
  v41 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
  v42 = v7;
  if ( !CL_InputSP_IgnoreStance((LocalClientNum_t)v7) )
  {
    if ( CL_HasHeldStance((const LocalClientNum_t)v7) )
    {
      CL_Input_AddTempStanceToCmd((LocalClientNum_t)v7, &cmd);
    }
    else
    {
      v43 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      CL_Input_StanceUpdate((const LocalClientNum_t)v7, v43);
      CL_Input_AddCurrentStanceToCmd((LocalClientNum_t)v7, &cmd);
    }
  }
  v44 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.integer == 2 || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v41->ps.pm_flags, ACTIVE, 0x10u) )
  {
    CL_Input_AdjustSpeedForAds((LocalClientNum_t)v7, &cmd);
    CL_Input_AddLateralMoveToCmd((LocalClientNum_t)v7, &cmd);
    CL_Input_AddPitchYawMoveToCmd((LocalClientNum_t)v7, &cmd);
    *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v42][19]);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@42fe0000
      vcvttss2si ebx, xmm0
    }
    *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v42][31]);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42fe0000
      vcvttss2si edi, xmm1
    }
    cmd.upmove = CL_Input_ClampInputChar(_EBX);
    cmd.downmove = CL_Input_ClampInputChar(_EDI);
  }
  __asm { vmovss  xmm0, cs:?cls@@3UClStatic@@A.frametime_base; sec }
  *(double *)&_XMM0 = Com_ViewScaleMsec(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm1, [rsp+1D0h+mx]
    vmovss  dword ptr [rsp+1D0h+fmt], xmm1
    vmovss  xmm3, [rsp+1D0h+mx+4]; rawMx
    vmovaps xmm2, xmm0; frametime_base
  }
  CL_InputSP_MouseMove((LocalClientNum_t)v7, &cmd, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  CL_Input_UpdateMouseWheelSustainState((LocalClientNum_t)v7, *(const float *)&_XMM1);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
  if ( GPad_IsActive(ControllerFromClient) )
    goto LABEL_54;
  v56 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.enabled )
  {
LABEL_54:
    __asm { vmovaps xmm1, xmm6; frametime_base }
    CL_InputSP_GamepadMove((LocalClientNum_t)v7, *(float *)&_XMM1, &cmd);
  }
  else
  {
    cmd.inputFromGamepad = 0;
  }
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  __asm
  {
    vmovss  dword ptr [rax+65E8h], xmm6
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vcvttss2si ecx, xmm0
  }
  ClientSP->cmdInputAccumTimeMs += _ECX;
  cmd.lightSample = _RAX->lightSample;
  v61 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  p_predictedPlayerState = &v61->predictedPlayerState;
  if ( v61 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (p_predictedPlayerState->cursorHintFlags & 0x10) != 0 && p_predictedPlayerState->cursorHintRange == USE_RANGE && p_predictedPlayerState->cursorHint && (cmd.buttons & 0x40000028) != 0 )
    cmd.buttons |= 0x8000000000ui64;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&p_predictedPlayerState->otherFlags, THERMAL_DRAW|0x20) )
  {
    ClActiveClient_GetCLViewangles(ClientSP, &v87);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+1D0h+clViewangles]
      vmovsd  qword ptr [rsp+1D0h+var_188], xmm0
    }
    v87.v[2] = clViewangles.v[2];
    ClActiveClient_SetCLViewangles(ClientSP, &v87);
  }
  ClActiveClient_GetCLViewangles(ClientSP, &v87);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+1D0h+var_188]
    vmovss  xmm1, dword ptr [rsp+1D0h+clViewangles]
    vsubss  xmm0, xmm3, xmm1
    vmovss  xmm2, cs:__real@42b40000
    vcomiss xmm0, xmm2
  }
  if ( v64 | v65 )
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm3
      vcomiss xmm0, xmm2
    }
    if ( v64 | v65 )
      goto LABEL_70;
    __asm { vsubss  xmm0, xmm1, xmm2 }
  }
  else
  {
    __asm { vaddss  xmm0, xmm1, xmm2 }
  }
  __asm { vmovss  dword ptr [rsp+1D0h+var_188], xmm0 }
  ClActiveClient_SetCLViewangles(ClientSP, &v87);
LABEL_70:
  CL_InputSP_FinishMove((LocalClientNum_t)v7, &cmd, outClearButtons);
  v72 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
  _RAX = GamerProfile_GetProfileSettings(v72);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+0D0h+cmd.rollSensitivity], xmm0
  }
  memset(&v87, 0, sizeof(v87));
  memset(&clViewangles, 0, sizeof(clViewangles));
  _RDX = result;
  _RAX = &cmd;
  v75 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rdx+60h], xmm0
    }
    _RDX = (usercmd_s *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v75;
  }
  while ( v75 );
LABEL_18:
  _RDX->buttons = _RAX->buttons;
  v19 = result;
  __asm { vmovaps xmm6, xmmword ptr [rsp+1D0h+var_48+8] }
  return v19;
}

/*
==============
CL_InputSP_CreateNewCommands
==============
*/
void CL_InputSP_CreateNewCommands(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  ClActiveClientSP *ClientSP; 
  const dvar_t *v4; 
  signed int integer; 
  unsigned __int64 v16; 
  unsigned __int64 cmdAccumTimeUsec; 
  unsigned __int64 cmdTimeUsec; 
  usercmd_s result; 
  ButtonSet outClearButtons; 
  usercmd_s cmd; 

  v1 = localClientNum;
  v2 = 2i64;
  outClearButtons.contextMountButton = 68;
  *(_WORD *)&outClearButtons.locationSelectButton = 0;
  outClearButtons.spectatorThirdPersonButton = 0;
  *(_QWORD *)outClearButtons.array = 0i64;
  outClearButtons.array[2] = 0;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1165, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v1);
  v4 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  frame_msec = com_frameTime - old_com_frameTime;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( (int)frame_msec < integer )
    integer = frame_msec;
  frame_msec = integer;
  old_com_frameTime = com_frameTime;
  _RAX = CL_InputSP_CreateCmd(&result, (LocalClientNum_t)v1, &outClearButtons);
  _RCX = &cmd;
  do
  {
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v2;
  }
  while ( v2 );
  _RCX->buttons = _RAX->buttons;
  if ( !Com_UseConstantUserCommandTime() || CL_Pause_IsGamePaused() )
  {
    CL_Input_CycleWeapon((LocalClientNum_t)v1, &cmd);
    CL_Input_HoldBreathHybridAndVZoomToggle((LocalClientNum_t)v1, &cmd);
    Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
    CL_Input_AddCommand(ClientSP, &cmd);
    CL_Input_ClearButtonsPressed((const LocalClientNum_t)v1, &outClearButtons);
    Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
  }
  else
  {
    v16 = 1000i64 * Com_GetUserCommandConstantMsec();
    *(double *)&_XMM0 = Com_GetTimescaleForSv();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rbx
    }
    if ( (v16 & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
    __asm
    {
      vmovss  xmm2, cs:__real@5f000000
      vmulss  xmm0, xmm0, xmm1
      vcomiss xmm0, xmm2
      vsubss  xmm0, xmm0, xmm2
      vcomiss xmm0, xmm2
      vcvttss2si rbp, xmm0
    }
    if ( ClientSP->cmdAccumTimeUsec >= v16 )
    {
      CL_Input_CycleWeapon((LocalClientNum_t)v1, &cmd);
      CL_Input_HoldBreathHybridAndVZoomToggle((LocalClientNum_t)v1, &cmd);
      Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
      cmdAccumTimeUsec = ClientSP->cmdAccumTimeUsec;
      if ( cmdAccumTimeUsec >= v16 )
      {
        cmdTimeUsec = ClientSP->cmdTimeUsec;
        do
        {
          cmdTimeUsec += _RBP;
          cmdAccumTimeUsec -= v16;
        }
        while ( cmdAccumTimeUsec >= v16 );
        ClientSP->cmdAccumTimeUsec = cmdAccumTimeUsec;
        ClientSP->cmdTimeUsec = cmdTimeUsec;
      }
      if ( CL_Input_AddCommand(ClientSP, &cmd) )
        CL_Input_ClearButtonsPressed((const LocalClientNum_t)v1, &outClearButtons);
      Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
    }
    *(double *)&_XMM0 = Com_GetTimescaleForSv();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( (ClientSP->cmdAccumTimeUsec & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm1
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvttss2si r8d, xmm1; deltaTime
    }
    CL_Input_SetExtrapolationCommand(ClientSP, &cmd, _ER8);
  }
}

/*
==============
CL_InputSP_ExecBinding
==============
*/
void CL_InputSP_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  __int16 cursorHintBinding; 
  int v13; 
  __int64 v14; 
  kbutton_t *v15; 
  ClActiveClientSP *ClientSP; 
  int v17; 
  ClActiveClientSP *v18; 
  int v19; 
  StanceState stance; 
  ClActiveClientSP *v21; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v24; 
  int EquippedWeaponIndex; 
  __int64 v26; 
  int ControllerFromClient; 
  vec3_t clViewangles; 
  int v35; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v8 = v7;
  if ( (clientUIActives[v7].frontEndSceneState[0] || !clientUIActives[v7].cgameInitialized) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1490, ASSERT_TYPE_ASSERT, "(CL_IsGameClientActive( localClientNum ))", (const char *)&queryFormat, "CL_IsGameClientActive( localClientNum )") )
    __debugbreak();
  if ( !CG_IsFullyInitialized((const LocalClientNum_t)v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1491, ASSERT_TYPE_ASSERT, "(CG_IsFullyInitialized( localClientNum ))", (const char *)&queryFormat, "CG_IsFullyInitialized( localClientNum )") )
    __debugbreak();
  if ( kb )
    CL_MainSP_CheckNotify((LocalClientNum_t)v7, kb, forceNotify);
  v9 = com_frameTime;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  cursorHintBinding = LocalClientGlobals->predictedPlayerState.cursorHintBinding;
  if ( cursorHintBinding )
  {
    if ( ((cursorHintBinding & 1) == 0 || (unsigned int)(cursorHintBinding - 117) <= 0x83 || cursorHintBinding >= 255) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1503, ASSERT_TYPE_ASSERT, "(Com_Keys_IsUseCmd( ps->cursorHintBinding ))", (const char *)&queryFormat, "Com_Keys_IsUseCmd( ps->cursorHintBinding )") )
      __debugbreak();
    v13 = p_predictedPlayerState->cursorHintBinding;
    if ( v13 == kb && p_predictedPlayerState->cursorHint )
    {
      CL_Input_KeyDown(&g_playersKb[v7][41], key, v9);
    }
    else if ( v13 + 1 == kb )
    {
      CL_Input_KeyUp(&g_playersKb[v7][41], key, v9);
    }
  }
  switch ( kb )
  {
    case 5:
      goto $LN25_76;
    case 7:
      v14 = v7;
      v15 = &g_playersKb[v7][24];
      goto LABEL_27;
    case 31:
      ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      v17 = CL_InputSP_IgnoreStance((LocalClientNum_t)v7);
      CL_Input_OnStanceDown((const LocalClientNum_t)v7, ClientSP, key, v17 != 0, 1);
      return;
    case 32:
      v18 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      v19 = CL_InputSP_IgnoreStance((LocalClientNum_t)v7);
      CL_Input_OnStanceUp((const LocalClientNum_t)v7, v18, key, v19 != 0, 1);
      return;
    case 33:
      CL_Input_KeyDown(&g_playersKb[v7][12], key, v9);
      if ( CL_InputSP_IgnoreStance((LocalClientNum_t)v7) )
        goto LABEL_37;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 5u) )
        return;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x1Du) )
        goto LABEL_37;
      stance = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7)->stance;
      if ( (unsigned int)(stance - 3) <= 1 )
      {
        CL_SetStance((LocalClientNum_t)v7, CL_STANCE_STAND, 5u);
LABEL_37:
        CL_Input_KeyDown(&g_playersKb[v7][10], key, v9);
        return;
      }
      if ( stance == CL_STANCE_STAND )
        goto LABEL_37;
      CL_SetStance((LocalClientNum_t)v7, CL_STANCE_STAND, 0);
      return;
    case 39:
      v21 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v7);
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_accessibilityAkimboEnabled, "cl_accessibilityAkimboEnabled") )
        goto LABEL_55;
      v24 = BG_UsingAlternate(p_predictedPlayerState);
      if ( !BG_IsAimDownSight(CurrentWeaponForPlayer, v24) )
        goto LABEL_55;
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
        goto LABEL_54;
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !CurrentWeaponForPlayer->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, p_predictedPlayerState, CurrentWeaponForPlayer), EquippedWeaponIndex < 0) || (v26 = EquippedWeaponIndex, (playerState_s *)((char *)p_predictedPlayerState + 4 * v26) == (playerState_s *)-1540i64) || !p_predictedPlayerState->weapEquippedData[v26].dualWielding )
      {
LABEL_54:
        v21->usingAds = !v21->usingAds;
      }
      else
      {
LABEL_55:
        v21->usingAds = 0;
        CL_Input_KeyDown(&g_playersKb[v8][9], key, v9);
        CL_Input_KeyDown(&g_playersKb[v8][31], key, v9);
      }
      CL_Input_KeyDown(&g_playersKb[v8][38], key, v9);
      return;
    case 76:
      g_playersKb[v7][14].active = 0;
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
      if ( !GamerProfile_GetFreeLook(ControllerFromClient) )
      {
        _RDI = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
        ClActiveClient_GetCLViewangles(_RDI, &clViewangles);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+87F4h]
          vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
          vmovss  dword ptr [rsp+88h+clViewangles], xmm1
        }
        ClActiveClient_SetCLViewangles(_RDI, &clViewangles);
        memset(&clViewangles, 0, sizeof(clViewangles));
      }
      return;
    case 118:
      CL_MainSP_TogglePause((LocalClientNum_t)v7);
      return;
    case 123:
      _RAX = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+87F4h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  [rsp+88h+arg_0], xmm1
      }
      LODWORD(_RAX->clViewangles.clViewangles.v[0]) = v35 ^ ((((_DWORD)_RAX + 428) ^ _RAX->clviewangles_aab) * ((((_DWORD)_RAX + 428) ^ _RAX->clviewangles_aab) + 2));
      return;
    case 251:
      CL_Input_KeyDown(&g_playersKb[v7][65], key, v9);
$LN25_76:
      v14 = v7;
      v15 = &g_playersKb[v7][23];
LABEL_27:
      CL_Input_KeyDown(v15, key, v9);
      CL_Input_KeyDown(&g_playersKb[v14][46], key, v9);
      return;
    case 253:
      CL_Input_KeyDown(&g_playersKb[v7][66], key, v9);
      return;
    default:
      CL_Input_ExecBindingCommon((LocalClientNum_t)v7, kb, key, forceNotify);
      return;
  }
}

/*
==============
CL_InputSP_FinishMove
==============
*/
void CL_InputSP_FinishMove(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  int v18; 
  base_vec3_t<int> *p_angles; 
  bool v25; 
  int v32; 
  __int64 v39; 
  __int64 v40; 
  vec3_t clViewangles; 
  char v42; 
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
  _RSI = cmd;
  _R15 = ClActiveClientSP::GetClientSP(localClientNum);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+90h]
    vmovups ymmword ptr [rsi+24h], ymm0
    vmovups xmm1, xmmword ptr [rax+0B0h]
    vmovups xmmword ptr [rsi+44h], xmm1
    vmovsd  xmm0, qword ptr [rax+0C0h]
    vmovsd  qword ptr [rsi+54h], xmm0
  }
  *(_DWORD *)&_RSI->weapon.weaponCamo = *(_DWORD *)&_R15->cgameUserCmdWeapon.weaponCamo;
  _RCX = &_RSI->offHand;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0CCh]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rax+0ECh]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+0FCh]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&_RSI->offHand.weaponCamo = *(_DWORD *)&_R15->cgameUserCmdOffHand.weaponCamo;
  _RSI->isAlternate = _R15->cgameUserCmdAlternate != 0;
  BG_AssertOffhandIndexOrNone(&_RSI->offHand);
  _RSI->serverTime = com_time;
  _RSI->inputTime = _R15->cmdInputAccumTimeMs;
  ClActiveClient_GetCLViewangles(_R15, &clViewangles);
  v18 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  p_angles = &_RSI->angles;
  __asm
  {
    vmovss  xmm7, cs:__real@3b360b61
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm9, cs:__real@43b40000
    vmovss  xmm10, cs:__real@43340000
  }
  v25 = 1;
  do
  {
    if ( !v25 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm4, xmm7, dword ptr [r12+rbx]
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, xmm9; value
      vmovaps xmm1, xmm10; maxAbsValueSize
    }
    v32 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
    if ( (unsigned int)v18 >= 3 )
    {
      LODWORD(v40) = 3;
      LODWORD(v39) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    p_angles->v[0] = v32;
    ++v18;
    p_angles = (base_vec3_t<int> *)((char *)p_angles + 4);
    v25 = (unsigned int)v18 < 3;
  }
  while ( v18 < 3 );
  _RSI->gunPitch = _R15->cgameUserCmdGunPitch;
  _RSI->gunYaw = _R15->cgameUserCmdGunYaw;
  _RSI->gunXOfs = _R15->cgameUserCmdGunXOfs;
  _RSI->gunYOfs = _R15->cgameUserCmdGunYOfs;
  _RSI->gunZOfs = _R15->cgameUserCmdGunZOfs;
  CL_Input_FinishCmdButtons(localClientNum, _RSI, outClearButtons);
  memset(&clViewangles, 0, sizeof(clViewangles));
  _R11 = &v42;
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
CL_InputSP_GamepadMove
==============
*/

void __fastcall CL_InputSP_GamepadMove(LocalClientNum_t localClientNum, double frametime_base, usercmd_s *cmd)
{
  __int64 v15; 
  const dvar_t *v16; 
  const dvar_t *v18; 
  int ControllerFromClient; 
  char v26; 
  char v27; 
  int forwardmove; 
  int upmove; 
  int downmove; 
  int pitchmove; 
  int yawmove; 
  bool v74; 
  __int64 v75; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v79; 
  cg_t *LocalClientGlobals; 
  float fmt; 
  float fmta; 
  int v109; 
  int v112; 
  vec3_t clViewangles; 
  __int64 v114; 
  AimOutput output; 
  AimInput input; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  v114 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmm13, xmm1
  }
  v15 = localClientNum;
  if ( CL_Pause_IsGamePaused() )
  {
    v16 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( !v16->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 338, ASSERT_TYPE_ASSERT, "(!CL_Pause_IsGamePaused() || Dvar_GetInt_Internal_DebugName( DVARINT_cl_freemove, \"cl_freemove\" ) != FREEMOVE_NONE)", (const char *)&queryFormat, "!CL_Pause_IsGamePaused() || Dvar_GetInt( cl_freemove ) != FREEMOVE_NONE") )
      __debugbreak();
  }
  if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v15) )
  {
    _R14 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v15);
    v18 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( (v18->current.integer == 2 || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->ps.pm_flags, ACTIVE, 0x10u)) && !DevGui_IsActive() && !CL_Cameraman_isActive() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v15);
      __asm { vxorps  xmm8, xmm8, xmm8 }
      if ( (_R14->ps.linkFlags.m_flags[0] & 1) == 0 || Dvar_GetInt_Internal_DebugName(DVARINT_cl_freemove, "cl_freemove") == 2 )
      {
        *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 3);
        __asm { vmovaps xmm6, xmm0 }
        CL_Input_GetClientLookInversion((LocalClientNum_t)v15);
        __asm { vmulss  xmm7, xmm6, xmm0 }
        *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 2);
        __asm
        {
          vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm6, xmm0, xmm1
          vmovss  xmm0, cs:__real@c2b40000
          vcomiss xmm0, dword ptr [r14+8918h]
        }
        if ( !(v26 | v27) )
          __asm { vxorps  xmm6, xmm6, xmm1 }
      }
      else
      {
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vxorps  xmm6, xmm6, xmm6
        }
      }
      __asm { vmovaps xmm2, xmm7; delta }
      _EAX = PM_AllowCameraInputForAxis(&_R14->ps, 0, *(float *)&_XMM2);
      _ER12 = 0;
      __asm
      {
        vmovd   xmm1, r12d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm8, xmm2
        vmovss  [rsp+160h+var_120], xmm0
        vmovaps xmm2, xmm6; delta
      }
      _EAX = PM_AllowCameraInputForAxis(&_R14->ps, 1, *(float *)&_XMM2);
      __asm
      {
        vmovd   xmm1, r12d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm8, xmm2
        vmovss  [rsp+160h+var_11C], xmm0
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->ps.pm_flags, ACTIVE, 0x11u) )
      {
        __asm { vxorps  xmm10, xmm10, xmm10 }
      }
      else
      {
        __asm
        {
          vmovss  xmm8, [rsp+160h+var_120]
          vmovss  xmm10, [rsp+160h+var_11C]
        }
      }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 1);
      __asm { vmovaps xmm9, xmm0 }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 4);
      __asm { vmovaps xmm12, xmm0 }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v15, 0);
      __asm { vmovaps xmm11, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection, "cl_autoForwardCancelMinBackwardDeflection");
      __asm { vcomiss xmm9, xmm0 }
      if ( v26 )
      {
        _R14->autoForward = 0;
      }
      else
      {
        __asm { vmovd   xmm1, r12d }
        _EAX = _R14->autoForward;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vblendvps xmm0, xmm1, xmm9, xmm2
          vmovaps xmm9, xmm0
          vmovss  [rsp+160h+var_11C], xmm0
        }
      }
      *(double *)&_XMM0 = GPad_GetButton(ControllerFromClient, GPAD_R_TRIG);
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = GPad_GetButton(ControllerFromClient, GPAD_L_TRIG);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovaps xmm1, xmm11; side
        vmovaps xmm0, xmm9; forward
      }
      *(double *)&_XMM0 = BG_CmdScale_CalcInputScale(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, xmm9
        vmovss  xmm4, cs:__real@42fe0000
        vmulss  xmm1, xmm1, xmm4
        vcvttss2si edi, xmm1
        vmulss  xmm2, xmm0, xmm11
        vmulss  xmm3, xmm2, xmm4
        vcvttss2si ecx, xmm3
      }
      v112 = _ECX;
      __asm
      {
        vmulss  xmm1, xmm7, xmm4
        vcvttss2si r15d, xmm1
        vmulss  xmm0, xmm6, xmm4
        vcvttss2si r12d, xmm0
        vmulss  xmm1, xmm8, xmm4
        vcvttss2si r13d, xmm1
        vmulss  xmm0, xmm10, xmm4
        vcvttss2si eax, xmm0
      }
      v109 = _EAX;
      if ( !_ECX )
        _ECX = cmd->rightmove;
      cmd->rightmove = CL_Input_ClampInputChar(_ECX);
      forwardmove = _EDI;
      if ( !_EDI )
        forwardmove = cmd->forwardmove;
      cmd->forwardmove = CL_Input_ClampInputChar(forwardmove);
      upmove = _ER15;
      if ( !_ER15 )
        upmove = cmd->upmove;
      cmd->upmove = CL_Input_ClampInputChar(upmove);
      downmove = _ER12;
      if ( !_ER12 )
        downmove = cmd->downmove;
      cmd->downmove = CL_Input_ClampInputChar(downmove);
      pitchmove = _ER13;
      if ( !_ER13 )
        pitchmove = cmd->pitchmove;
      cmd->pitchmove = CL_Input_ClampInputChar(pitchmove);
      yawmove = v109;
      if ( !v109 )
        yawmove = cmd->yawmove;
      cmd->yawmove = CL_Input_ClampInputChar(yawmove);
      if ( v112 || _EDI || _ER15 || _ER12 || _ER13 || (v74 = v109, v109) )
        v74 = 1;
      cmd->inputFromGamepad = v74;
      v75 = v15;
      CL_Input_GamepadAccessibility((LocalClientNum_t)v15, cmd);
      if ( g_playersKb[v15][32].active || g_playersKb[v75][32].wasPressed )
      {
        cmd->buttons |= 2ui64;
        g_playersKb[v75][32].wasPressed = 0;
      }
      else
      {
        cmd->buttons &= ~2ui64;
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_analog_attack_threshold, "cl_analog_attack_threshold");
      __asm { vcomiss xmm12, xmm0 }
      if ( !v26 )
        cmd->buttons |= 1ui64;
      p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v15)->predictedPlayerState;
      if ( (cmd->buttons & 1) != 0 )
      {
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v15);
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
        v79 = BG_UsingAlternate(p_predictedPlayerState);
        if ( BG_IsMeleeOnlyWeapon(CurrentWeaponForPlayer, v79) && !BG_IsWeaponMeleeOverride(Instance, p_predictedPlayerState, CurrentWeaponForPlayer) )
          cmd->buttons |= 4ui64;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v15);
      __asm { vmovaps xmm1, xmm10; inputDeltaYaw }
      *(double *)&_XMM0 = Mantle_SlowInputTurnRate(&LocalClientGlobals->predictedPlayerState, *(const float *)&_XMM1);
      __asm { vmovaps xmm6, xmm0 }
      ClActiveClient_GetCLViewangles(_R14, &clViewangles);
      __asm
      {
        vmovss  [rsp+160h+input.deltaTime], xmm13
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, cs:?cls@@3UClStatic@@A.frametime; ClStatic cls
        vmulss  xmm2, xmm1, cs:__real@3a83126f
        vmovss  [rsp+160h+input.deltaTimeScaled], xmm2
        vmovss  xmm3, dword ptr [rsp+160h+clViewangles]
        vmovss  [rsp+160h+input.pitch], xmm3
        vmovss  [rsp+160h+input.pitchAxis], xmm8
      }
      *(double *)&_XMM0 = CL_GetMaxPitchSpeed((LocalClientNum_t)v15);
      __asm
      {
        vmovss  [rbp+60h+input.pitchMax], xmm0
        vmovss  xmm0, dword ptr [rsp+160h+clViewangles+4]
        vmovss  [rbp+60h+input.yaw], xmm0
        vmovss  [rbp+60h+input.yawAxis], xmm6
      }
      *(double *)&_XMM0 = CL_GetMaxYawSpeed((LocalClientNum_t)v15);
      __asm
      {
        vmovss  [rbp+60h+input.yawMax], xmm0
        vmovss  [rbp+60h+input.forwardAxis], xmm9
        vmovss  [rbp+60h+input.rightAxis], xmm11
      }
      input.buttons = cmd->buttons;
      input.localClientNum = v15;
      input.meleeChargeEnt = cmd->meleeChargeEnt;
      AimAssist_UpdateGamePadInput(&input, &output);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 508, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
        __debugbreak();
      __asm { vmovaps xmm2, xmm13; frametime_base }
      CL_InputSP_UpdateSpringCam((LocalClientNum_t)v15, cmd, *(float *)&_XMM2, &output.pitch, &output.yaw);
      __asm
      {
        vmovss  xmm0, [rsp+160h+output.pitch]
        vmovss  dword ptr [rsp+160h+clViewangles], xmm0
        vmovss  xmm1, [rsp+160h+output.yaw]
        vmovss  dword ptr [rsp+160h+clViewangles+4], xmm1
      }
      ClActiveClient_SetCLViewangles(_R14, &clViewangles);
      BG_SetMeleeChargeCmd(&output, cmd);
      cmd->scriptedMeleeTarget = output.scriptedMeleeTarget;
      __asm
      {
        vmovss  dword ptr [rsp+160h+fmt], xmm6
        vmovaps xmm3, xmm8; pitch
        vmovaps xmm2, xmm11; side
        vmovaps xmm1, xmm9; forward
      }
      CG_ModelPreviewerHandleGamepadEvents((LocalClientNum_t)v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
      __asm
      {
        vmovss  dword ptr [rsp+160h+fmt], xmm6
        vmovaps xmm3, xmm8; pitch
        vmovaps xmm2, xmm11; side
        vmovaps xmm1, xmm9; forward
      }
      CG_CreateFx_HandleGamepadEvents((LocalClientNum_t)v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
CL_InputSP_HandleClientInput
==============
*/

void __fastcall CL_InputSP_HandleClientInput(LocalClientNum_t localClientNum, double _XMM1_8)
{
  LocalClientNum_t OnlyLocalClientNum; 
  int ControllerFromClient; 
  LocalClientNum_t v18; 
  int v20; 
  float v32; 
  float v33; 

  R_GPU_RecordLatencyEvent(LATENCY_EVENT_CL_INPUT, rg.frontEndFrameCount);
  CG_Utils_UpdateActiveInputContext(localClientNum);
  if ( CL_Input_AllowInput(localClientNum) )
  {
    cls.inputUpdatedPrevFrame = 1;
    IN_Frame();
    CL_Input_AutomatedInput_Frame(localClientNum);
    CL_Input_SequenceUpdate(localClientNum);
    if ( CL_Input_AllowInput(localClientNum) )
      CL_InputSP_CreateNewCommands(localClientNum);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovaps [rsp+68h+var_38], xmm8
    }
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    ClActiveClientSP::GetClientSP(OnlyLocalClientNum);
    *(double *)&_XMM0 = CL_GamepadAxisValue(OnlyLocalClientNum, 3);
    __asm { vmovaps xmm6, xmm0 }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
    GamerProfile_GetInvertedVerticalLookGamepad(ControllerFromClient);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vmulss  xmm8, xmm6, xmm1
    }
    *(double *)&_XMM0 = CL_GamepadAxisValue(OnlyLocalClientNum, 2);
    __asm { vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(OnlyLocalClientNum, 1);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(OnlyLocalClientNum, 0);
    __asm
    {
      vmovaps xmm3, xmm8; pitch
      vmovaps xmm2, xmm0; side
      vmovaps xmm1, xmm6; forward
      vmovss  [rsp+68h+var_48], xmm7
    }
    CG_ModelPreviewerHandleGamepadEvents(OnlyLocalClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v32);
    v18 = CL_GetOnlyLocalClientNum();
    ClActiveClientSP::GetClientSP(v18);
    *(double *)&_XMM0 = CL_GamepadAxisValue(v18, 3);
    __asm { vmovaps xmm6, xmm0 }
    v20 = CL_Mgr_GetControllerFromClient(v18);
    GamerProfile_GetInvertedVerticalLookGamepad(v20);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vmulss  xmm8, xmm6, xmm1
    }
    *(double *)&_XMM0 = CL_GamepadAxisValue(v18, 2);
    __asm { vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(v18, 1);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(v18, 0);
    __asm
    {
      vmovaps xmm3, xmm8; pitch
      vmovaps xmm2, xmm0; side
      vmovaps xmm1, xmm6; forward
      vmovss  [rsp+68h+var_48], xmm7
    }
    CG_CreateFx_HandleGamepadEvents(v18, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v33);
    __asm
    {
      vmovaps xmm8, [rsp+68h+var_38]
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
}

/*
==============
CL_InputSP_IgnoreStance
==============
*/
_BOOL8 CL_InputSP_IgnoreStance(LocalClientNum_t localClientNum)
{
  ClActiveClientSP *ClientSP; 
  const playerState_s *p_ps; 
  __int16 groundRefEnt; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  p_ps = &ClientSP->ps;
  if ( ClientSP == (ClActiveClientSP *)-34624i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2555, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    return 1i64;
  }
  if ( ClientSP == (ClActiveClientSP *)-34624i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = ClientSP->ps.groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( !BG_IsPlayerZeroGWalking(p_ps) )
        return 1i64;
    }
  }
  if ( BG_ContextMount_IsActive(p_ps) )
    return 1i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x20u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ClientSP->ps.eFlags, ACTIVE, 0xBu) && ClientSP->ps.vehicleType == VEH_HELICOPTER && Dvar_GetInt_Internal_DebugName(DVARINT_vehHelicopterControlsAltitude, "vehHelicopterControlsAltitude") == 3;
}

/*
==============
CL_InputSP_MouseMove
==============
*/

void __fastcall CL_InputSP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, double frametime_base, double rawMx, float rawMy)
{
  __int64 v19; 
  __int64 v21; 
  const dvar_t *v23; 
  bool enabled; 
  const dvar_t *v25; 
  int integer; 
  bool v27; 
  bool v29; 
  bool v30; 
  int v32; 
  int v33; 
  __int64 v34; 
  bool v35; 
  int ControllerFromClient; 
  bool FreeLook; 
  bool v38; 
  bool active; 
  char v54; 
  bool v55; 
  float v64; 
  unsigned __int8 v83; 
  __int64 v95; 
  char v101; 
  int v134; 
  char v135; 
  int v136; 
  char v137; 
  float fmt; 
  float fmta; 
  float outMx; 
  float outMy; 
  float v164; 
  __int64 v166; 
  __int64 v167; 
  vec3_t clViewangles; 
  __int64 v171; 
  AimOutput output; 
  AimInput input; 
  char v174; 
  void *retaddr; 

  _RAX = &retaddr;
  v171 = -2i64;
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
    vmovss  [rsp+1C0h+var_144], xmm3
    vmovss  [rsp+1C0h+var_16C], xmm2
  }
  v19 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 551, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( frame_msec )
  {
    _RDI = ClActiveClient::GetClient((const LocalClientNum_t)v19);
    v21 = (__int64)_RDI->GetPlayerState(_RDI);
    v167 = v21;
    __asm
    {
      vmovss  [rsp+1C0h+outMx], xmm6
      vmovss  xmm7, [rbp+0C0h+rawMy]
      vmovss  [rsp+1C0h+outMy], xmm7
    }
    CL_Input_ApplyMouseSensitivity((const LocalClientNum_t)v19, &outMx, &outMy);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) )
      AimAssist_UpdateMouseRaw((LocalClientNum_t)v19, &outMx, &outMy);
    *(_QWORD *)_RDI->mouseViewDelta.v = 0i64;
    _RDI->mouseViewDelta.v[2] = 0.0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v21 + 20), ACTIVE, 0x10u) )
    {
      v23 = DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput;
      if ( !DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulateShellshockedMouseInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      enabled = v23->current.enabled;
      v25 = DCONST_DVARINT_cl_accumulatedInputExpirationTime;
      if ( !DCONST_DVARINT_cl_accumulatedInputExpirationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulatedInputExpirationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      integer = v25->current.integer;
      v27 = enabled && _RDI->accumulatedInputTimer < integer;
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vucomiss xmm8, dword ptr [rdi+1CCh]
      }
      if ( !v27 )
      {
        __asm { vucomiss xmm8, dword ptr [rdi+1C8h] }
        if ( !enabled || _RDI->accumulatedInputTimer >= integer )
          v27 = 0;
      }
      v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v21 + 20), ACTIVE, 0x15u) && BG_GetShellshockParms(*(_DWORD *)(v21 + 4412))->lookControl.affect;
      v30 = v29 && v27;
      if ( !v30 )
      {
        *(_QWORD *)&_RDI->accumulatedMouseDelta.y = 0i64;
        _RDI->accumulatedMouseDelta.v[0] = 0.0;
      }
      if ( AimAssist_IsMeleeLockOnActive((LocalClientNum_t)v19) )
        goto LABEL_84;
      __asm
      {
        vucomiss xmm6, xmm8
        vucomiss xmm7, xmm8
      }
      if ( !v30 )
      {
LABEL_84:
        __asm { vmovss  xmm11, cs:__real@3a83126f }
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxShellshockCatchUpSpeed, "cl_maxShellshockCatchUpSpeed");
        __asm { vmovss  [rsp+1C0h+var_174], xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_shortMovementThreshold, "cl_shortMovementThreshold");
        __asm { vmovaps xmm11, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_longMovementThreshold, "cl_longMovementThreshold");
        __asm
        {
          vmovss  [rsp+1C0h+var_148], xmm0
          vcomiss xmm11, xmm0
        }
        if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 607, ASSERT_TYPE_ASSERT, "(shortMovementThreshold < longMovementThreshold)", (const char *)&queryFormat, "shortMovementThreshold < longMovementThreshold") )
          __debugbreak();
        LOBYTE(v32) = 0;
        v164 = *(float *)&v32;
        v33 = 0;
        LODWORD(v166) = 0;
        v34 = v19;
        *(_QWORD *)clViewangles.v = 1632 * v19;
        v35 = (*(_BYTE *)(v167 + 36) & 1) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v167 + 20), ACTIVE, 0x11u);
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v19);
        FreeLook = GamerProfile_GetFreeLook(ControllerFromClient);
        v38 = g_playersKb[v34][14].active || FreeLook;
        active = g_playersKb[v34][8].active;
        __asm { vmovss  xmm14, cs:__real@3f000000 }
        if ( (active || !v38) && active )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_side, "m_side");
          __asm
          {
            vmulss  xmm1, xmm0, [rsp+1C0h+outMx]
            vaddss  xmm3, xmm1, xmm14
            vxorps  xmm2, xmm2, xmm2
            vmovss  xmm4, xmm2, xmm3
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm1, xmm0, xmm4, 1
            vcvttss2si ecx, xmm1
          }
          cmd->rightmove = CL_Input_ClampInputChar(cmd->rightmove + _ECX);
        }
        if ( !v38 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_forward, "m_forward");
          __asm
          {
            vmulss  xmm1, xmm0, [rsp+1C0h+outMy]
            vaddss  xmm3, xmm1, xmm14
            vxorps  xmm2, xmm2, xmm2
            vmovss  xmm4, xmm2, xmm3
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm1, xmm0, xmm4, 1
            vcvttss2si eax, xmm1
          }
          cmd->forwardmove = CL_Input_ClampInputChar(cmd->forwardmove - _EAX);
        }
        __asm
        {
          vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm12, cs:__real@42fe0000
        }
        v54 = 0;
        v55 = !v35;
        if ( v35 )
          goto LABEL_56;
        *(double *)&_XMM0 = CL_GetMaxYawSpeed((LocalClientNum_t)v19);
        __asm { vmovaps xmm9, xmm0 }
        *(double *)&_XMM0 = CL_GetMaxPitchSpeed((LocalClientNum_t)v19);
        __asm { vmovaps xmm10, xmm0 }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_combinedCameraRotationSpeed, "cl_combinedCameraRotationSpeed") )
          __asm { vucomiss xmm9, xmm10 }
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
          vmulss  xmm15, xmm0, xmm6
          vxorps  xmm13, xmm15, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm13, [rsp+1C0h+outMy]
          vaddss  xmm6, xmm0, dword ptr [rdi+1C8h]
          vmovss  dword ptr [rdi+1C8h], xmm6
        }
        v64 = clViewangles.v[0];
        if ( *(&g_playersKb[0][8].active + *(_QWORD *)clViewangles.v) )
        {
          __asm { vmovss  xmm6, [rsp+1C0h+var_174] }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, [rsp+1C0h+outMx]
            vandps  xmm1, xmm0, xmm7
            vcomiss xmm1, xmm11
          }
          if ( *(&g_playersKb[0][8].active + *(_QWORD *)clViewangles.v) )
          {
            __asm
            {
              vmulss  xmm0, xmm0, dword ptr [rdi+1CCh]
              vcomiss xmm0, xmm8
            }
          }
          __asm { vcomiss xmm11, xmm1 }
          LOBYTE(v64) = 0;
          v164 = v64;
          __asm
          {
            vmovss  dword ptr [rsp+1C0h+fmt], xmm8
            vmovaps xmm2, xmm9; maxAxisSpeed
          }
          *(double *)&_XMM0 = CL_Input_UpdateViewAnglesAxis(_RDI, YAW, *(const float *)&_XMM2, 0, fmt);
          __asm
          {
            vmovaps xmm2, xmm0; deltaYaw
            vmovss  xmm1, dword ptr [rdi+1CCh]
            vandps  xmm1, xmm1, xmm7
            vmovss  xmm6, [rsp+1C0h+var_174]
            vcomiss xmm1, cs:__real@3a83126f
          }
          if ( !v54 )
            __asm { vcomiss xmm9, xmm8 }
          _RDI->accumulatedMouseDelta.v[1] = 0.0;
          __asm
          {
            vmovss  xmm1, [rsp+1C0h+outMx]; mx
            vminss  xmm0, xmm1, xmm12
            vcvttss2si r12d, xmm0
          }
          v33 = -_ER12;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1C0h]
            vsubss  xmm3, xmm0, dword ptr [rax+0B8h]; yaw
            vmovss  xmm0, [rsp+1C0h+var_16C]; deltaTime
          }
          CL_Input_LogMouseInputVelocity(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        }
        v54 = 0;
        v55 = !v38;
        if ( !v38 )
        {
LABEL_56:
          __asm
          {
            vmovss  xmm2, [rsp+1C0h+outMy]
            vmovss  xmm10, cs:__real@80000000
          }
          _ER13 = v166;
          v95 = v167;
          v83 = LOBYTE(v164);
          __asm { vmovss  xmm11, cs:__real@3a83126f }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, [rsp+1C0h+outMy]
            vandps  xmm0, xmm1, xmm7
            vcomiss xmm0, xmm11
            vmulss  xmm0, xmm13, xmm1
            vmulss  xmm1, xmm0, dword ptr [rdi+1C8h]
            vcomiss xmm1, xmm8
            vmovss  xmm0, [rsp+1C0h+outMx]
            vandps  xmm0, xmm0, xmm7
          }
          v83 = LOBYTE(v164);
          __asm
          {
            vcomiss xmm11, xmm0
            vmovss  dword ptr [rsp+1C0h+fmt], xmm8
            vmovaps xmm2, xmm10; maxAxisSpeed
          }
          CL_Input_UpdateViewAnglesAxis(_RDI, PITCH, *(const float *)&_XMM2, 0, fmta);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1C8h]
            vandps  xmm0, xmm0, xmm7
            vmovss  xmm11, cs:__real@3a83126f
            vcomiss xmm0, xmm11
          }
          if ( !v54 )
          {
            v54 = 0;
            v55 = 1;
            __asm { vcomiss xmm10, xmm8 }
          }
          _RDI->accumulatedMouseDelta.v[0] = 0.0;
          __asm
          {
            vmovss  xmm10, cs:__real@80000000
            vcomiss xmm15, xmm10
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmovss  xmm2, [rsp+1C0h+outMy]
            vminss  xmm0, xmm2, xmm12
            vmulss  xmm1, xmm1, xmm0
            vcvttss2si r13d, xmm1
          }
          v95 = v167;
        }
        __asm
        {
          vmovss  xmm0, [rsp+1C0h+outMx]
          vandps  xmm0, xmm0, xmm7
          vmovss  xmm1, [rsp+1C0h+var_148]
          vcomiss xmm0, xmm1
        }
        if ( !(v54 | v55) )
          goto LABEL_65;
        __asm
        {
          vandps  xmm2, xmm2, xmm7
          vcomiss xmm2, xmm1
        }
        if ( v54 | v55 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+1C0h+var_144]
            vucomiss xmm0, xmm8
          }
          if ( !v55 )
            goto LABEL_62;
          __asm
          {
            vmovss  xmm0, [rbp+0C0h+rawMy]
            vucomiss xmm0, xmm8
          }
          if ( v55 )
            v101 = 0;
          else
LABEL_62:
            v101 = 1;
          if ( ((unsigned __int8)v101 & v83) != 0 )
            _RDI->accumulatedInputTimer += frame_msec;
        }
        else
        {
LABEL_65:
          _RDI->accumulatedInputTimer = 0;
        }
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v95 + 20), ACTIVE, 0x11u) )
        {
          _ER13 = 0;
          v33 = 0;
        }
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v95 + 28), TURRET_ACTIVE_PRONE|0x20) )
        {
          __asm
          {
            vmovss  xmm7, cs:__real@40000000
            vmulss  xmm1, xmm7, [rsp+1C0h+outMx]
            vaddss  xmm3, xmm1, xmm14
            vxorps  xmm6, xmm6, xmm6
            vroundss xmm0, xmm6, xmm3, 1
            vcvttss2si ecx, xmm0
          }
          cmd->yawmove = CL_Input_ClampInputChar(cmd->yawmove + _ECX);
          __asm
          {
            vmulss  xmm1, xmm7, [rsp+1C0h+outMy]
            vaddss  xmm3, xmm1, xmm14
            vroundss xmm1, xmm6, xmm3, 1
            vcvttss2si ecx, xmm1
          }
          cmd->pitchmove = CL_Input_ClampInputChar(cmd->pitchmove + _ECX);
        }
        else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v95 + 28), (POtherFlagsSP)36) )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_vehMouseSteerSensitivity, "m_vehMouseSteerSensitivity");
          __asm
          {
            vmulss  xmm1, xmm0, [rsp+1C0h+outMx]
            vminss  xmm2, xmm1, xmm12
            vmovss  xmm7, cs:__real@c2fe0000
            vmaxss  xmm0, xmm2, xmm7
            vaddss  xmm3, xmm0, xmm14
            vxorps  xmm1, xmm1, xmm1
            vmovss  xmm2, xmm1, xmm3
            vxorps  xmm9, xmm9, xmm9
            vroundss xmm0, xmm9, xmm2, 1
            vcvttss2si ecx, xmm0
          }
          cmd->yawmove = -CL_Input_ClampInputChar(cmd->yawmove + _ECX);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_pitch, "m_pitch");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = CL_Input_GetClientLookInversion((LocalClientNum_t)v19);
          __asm
          {
            vmulss  xmm1, xmm0, xmm6
            vcomiss xmm1, xmm10
          }
          if ( v54 | v55 )
          {
            __asm { vmovss  xmm6, [rsp+1C0h+outMy] }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, [rsp+1C0h+outMy]
              vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
            }
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_vehMouseSteerSensitivity, "m_vehMouseSteerSensitivity");
          __asm
          {
            vmulss  xmm1, xmm0, xmm6
            vminss  xmm2, xmm1, xmm12
            vmaxss  xmm3, xmm2, xmm7
            vaddss  xmm4, xmm3, xmm14
            vxorps  xmm0, xmm0, xmm0
            vmovss  xmm1, xmm0, xmm4
            vroundss xmm2, xmm9, xmm1, 1
            vcvttss2si ecx, xmm2
          }
          cmd->pitchmove = CL_Input_ClampInputChar(cmd->pitchmove + _ECX);
        }
        else
        {
          v134 = _ER13 + cmd->pitchmove;
          if ( v134 > 127 )
            v134 = 127;
          v135 = v134;
          if ( v134 < -128 )
            v135 = 0x80;
          cmd->pitchmove = v135;
          v136 = v33 + cmd->yawmove;
          if ( v136 > 127 )
            v136 = 127;
          v137 = v136;
          if ( v136 < -128 )
            v137 = 0x80;
          cmd->yawmove = v137;
        }
      }
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
        vmovss  [rbp+0C0h+input.pitchAxis], xmm8
        vmovss  [rbp+0C0h+input.pitchMax], xmm8
        vmovss  xmm0, dword ptr [rsp+1C0h+clViewangles+4]
        vmovss  [rbp+0C0h+input.yaw], xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovups xmmword ptr [rbp+0C0h+input.yawAxis], xmm1
      }
      input.buttons = cmd->buttons;
      input.localClientNum = v19;
      input.meleeChargeEnt = cmd->meleeChargeEnt;
      AimAssist_UpdateMouseInput(&input, &output);
      __asm
      {
        vmovss  xmm0, [rbp+0C0h+output.pitch]
        vmovss  dword ptr [rsp+1C0h+clViewangles], xmm0
        vmovss  xmm1, [rbp+0C0h+output.yaw]
        vmovss  dword ptr [rsp+1C0h+clViewangles+4], xmm1
      }
      ClActiveClient_SetCLViewangles(_RDI, &clViewangles);
      BG_SetMeleeChargeCmd(&output, cmd);
      cmd->scriptedMeleeTarget = output.scriptedMeleeTarget;
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
  _R11 = &v174;
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
CL_InputSP_RegisterCommands
==============
*/
void CL_InputSP_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_INPUT_CMD_SP, 2u);
}

/*
==============
CL_InputSP_UnregisterCommands
==============
*/
void CL_InputSP_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_INPUT_CMD_SP, 2u);
}

/*
==============
CL_InputSP_UpdateSpringCam
==============
*/

__int64 __fastcall CL_InputSP_UpdateSpringCam(LocalClientNum_t localClientNum, usercmd_s *cmd, double frametime_base, float *pitch, float *yaw)
{
  ClActiveClientSP *ClientSP; 
  __int64 result; 
  int pm_type; 
  bool IsSpringCamActive; 
  unsigned int v31; 
  bool v63; 
  bool v64; 
  char v73; 
  char v74; 
  __int64 v99; 
  __int64 v100; 
  vec3_t clViewangles; 
  __int64 v102; 
  int v103[4]; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  v102 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
  }
  _R15 = pitch;
  __asm { vmovaps xmm11, xmm2 }
  _R12 = yaw;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 216, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
    __debugbreak();
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  _RSI = ClientSP;
  _RBP = &ClientSP->ps;
  if ( ClientSP->ps.pm_type == 3 )
    goto LABEL_7;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( !BG_IsSpringCamActive(&ClientSP->ps) )
  {
    __asm { vucomiss xmm8, dword ptr [rsi+8734h] }
    _RSI[1].mouseDx[1] = 0;
LABEL_7:
    result = 0i64;
    goto LABEL_47;
  }
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = _RBP->pm_type;
  if ( pm_type != 1 && pm_type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 233, ASSERT_TYPE_ASSERT, "(BG_IsPlayerLinked( ps ))", (const char *)&queryFormat, "BG_IsPlayerLinked( ps )") )
    __debugbreak();
  BG_ClearMeleeChargeCmd(cmd);
  IsSpringCamActive = BG_IsSpringCamActive(_RBP);
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v31 = 0;
  if ( IsSpringCamActive )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+248h]
      vucomiss xmm0, xmm8
      vdivss  xmm0, xmm11, xmm0
      vaddss  xmm0, xmm0, dword ptr [rsi+8734h]
      vmovss  dword ptr [rsi+8734h], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+248h]
      vucomiss xmm1, xmm8
    }
    _RSI[1].mouseDx[1] = 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm
  {
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+8734h], xmm0
    vmulss  xmm1, xmm11, dword ptr [rbp+240h]
    vmulss  xmm12, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3c010204; val
    vmovaps xmm2, xmm10; max
    vmovss  xmm1, cs:__real@bf800000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  [rsp+148h+var_F0], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3c010204; val
    vmovaps xmm2, xmm10; max
    vmovss  xmm1, cs:__real@bf800000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  [rsp+148h+var_EC], xmm0
    vmovss  [rsp+148h+var_E8], xmm8
  }
  ClActiveClient_GetCLViewangles(_RSI, &clViewangles);
  _RBX = &_RBP->viewAngleClampBase;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  _R13 = (char *)((char *)v103 - (char *)&_RBP->viewAngleClampBase);
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm14, cs:__real@3b360b61
    vmovss  xmm15, cs:__real@3f000000
  }
  do
  {
    if ( v31 >= 3 )
    {
      LODWORD(v100) = 3;
      LODWORD(v99) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100) )
        __debugbreak();
      LODWORD(v100) = 3;
      LODWORD(v99) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100) )
        __debugbreak();
    }
    if ( v31 >= 2 )
    {
      LODWORD(v100) = 2;
      LODWORD(v99) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-144h]
      vaddss  xmm1, xmm0, dword ptr [r14+rbx]
      vsubss  xmm2, xmm1, dword ptr [rbx]
      vmulss  xmm4, xmm2, xmm14
      vaddss  xmm3, xmm4, xmm15
      vroundss xmm2, xmm13, xmm3, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm6, xmm0, cs:__real@43b40000
    }
    if ( v31 >= 2 )
    {
      LODWORD(v100) = 2;
      LODWORD(v99) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100) )
        __debugbreak();
    }
    v63 = v31 < 3;
    if ( v31 >= 3 )
    {
      LODWORD(v100) = 3;
      LODWORD(v99) = v31;
      v64 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100);
      v63 = 0;
      if ( v64 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+r13]
      vmulss  xmm3, xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm3, xmm6
      vmulss  xmm2, xmm1, xmm12
      vaddss  xmm7, xmm2, xmm6
      vmulss  xmm0, xmm3, xmm6
      vcomiss xmm0, xmm8
    }
    if ( !v63 )
    {
      __asm
      {
        vandps  xmm3, xmm3, xmm9
        vandps  xmm0, xmm6, xmm9
        vcomiss xmm3, xmm0
      }
      if ( v63 )
      {
        vec2_t::operator[](&_RBP->viewAngleClampRange, v31);
        __asm
        {
          vmulss  xmm0, xmm11, dword ptr [rbp+244h]
          vmulss  xmm2, xmm0, dword ptr [rax]
          vsubss  xmm1, xmm6, xmm7
          vandps  xmm1, xmm1, xmm9
          vcomiss xmm1, xmm2
        }
        if ( !(v73 | v74) )
        {
          __asm { vcomiss xmm6, xmm8 }
          if ( v73 | v74 )
            __asm { vaddss  xmm7, xmm2, xmm6 }
          else
            __asm { vsubss  xmm7, xmm6, xmm2 }
        }
      }
    }
    if ( v31 >= 3 )
    {
      LODWORD(v100) = 3;
      LODWORD(v99) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v99, v100) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vaddss  xmm3, xmm0, dword ptr [r14+rbx]
      vmovss  xmm1, dword ptr [rsi+8734h]
      vsubss  xmm0, xmm10, xmm1
      vmulss  xmm1, xmm1, xmm3
    }
    if ( v31 )
    {
      __asm
      {
        vmulss  xmm2, xmm0, dword ptr [r12]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r12], xmm2
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm2, xmm0, dword ptr [r15]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r15], xmm2
      }
    }
    ++v31;
    _RBX = (vec2_t *)((char *)_RBX + 4);
  }
  while ( (int)v31 < 2 );
  memset(&clViewangles, 0, sizeof(clViewangles));
  result = 1i64;
LABEL_47:
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, [rsp+148h+var_D8]
  }
  return result;
}

/*
==============
CL_InputSP_WritePacket
==============
*/
void CL_InputSP_WritePacket(LocalClientNum_t localClientNum)
{
  ClConnectionDataSP *ClientConnectionData; 
  int v3; 
  int reliableAcknowledge; 
  int v5; 
  __int64 v6; 
  unsigned int offset; 
  unsigned __int16 size; 
  __int64 v9; 
  ClActiveClientSP *ClientSP; 
  int v11; 
  int v12; 
  char v13; 
  __int64 v14; 
  usercmd_s *v15; 
  const dvar_t *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int CmdNumber; 
  char dest[1024]; 

  Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
  ClientConnectionData = ClConnectionSP::GetClientConnectionData(localClientNum);
  v3 = 0;
  while ( 1 )
  {
    if ( ClientConnectionData->reliableAcknowledge > ClientConnectionData->reliableSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1258, ASSERT_TYPE_ASSERT, "(clcData->reliableAcknowledge <= clcData->reliableSequence)", (const char *)&queryFormat, "clcData->reliableAcknowledge <= clcData->reliableSequence") )
      __debugbreak();
    reliableAcknowledge = ClientConnectionData->reliableAcknowledge;
    if ( reliableAcknowledge == ClientConnectionData->reliableSequence )
      break;
    v5 = reliableAcknowledge + 1;
    ClientConnectionData->reliableAcknowledge = v5;
    v6 = v5 & 0x7F;
    offset = ClientConnectionData->clientReliableCommands.m_entries[v6].offset;
    if ( ClientConnectionData->clientReliableCommands.m_bufferNextIndex - offset <= 0x20000 && (size = ClientConnectionData->clientReliableCommands.m_entries[v6].size) != 0 )
    {
      v9 = offset & 0x1FFFF;
      if ( (unsigned int)v9 + size > 0x20000 )
      {
        LODWORD(v20) = 0x20000;
        LODWORD(v19) = v9 + size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v19, v20) )
          __debugbreak();
      }
      Core_strcpy(dest, 0x400ui64, (const char *)&ClientConnectionData->clientReliableCommands.m_buffer[v9]);
      Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
      SV_DemoSP_RecordClientCommand(localClientNum, dest);
      SV_ClientSP_ExecuteCommand(localClientNum, dest);
      Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
    }
    else if ( !ClientConnectionData->reliableOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1286, ASSERT_TYPE_ASSERT, "(clcData->reliableOverflow)", "%s\n\tShould only fail to get command data when overflow is detected", "clcData->reliableOverflow") )
    {
      __debugbreak();
    }
  }
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(ClientSP);
  v11 = CmdNumber - ClientSP->cmdNumberAcknowledge;
  v12 = CmdNumber;
  if ( v11 > 32 )
  {
    v11 = 32;
    Com_Printf(14, "MAX_PACKET_USERCMDS\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
  if ( v11 > 0 )
  {
    v13 = CmdNumber - v11 + 1;
    do
    {
      v14 = v13 & 0x7F;
      v15 = &ClientSP->cmds[v14];
      if ( ClientSP->cmds[v14].forwardmove == (char)0x80 )
      {
        LODWORD(v19) = 127;
        LODWORD(v18) = -127;
        LODWORD(v17) = -128;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1309, ASSERT_TYPE_ASSERT, "( -127 ) <= ( cmd->forwardmove ) && ( cmd->forwardmove ) <= ( 127 )", "cmd->forwardmove not in [-127, 127]\n\t%i not in [%i, %i]", v17, v18, v19) )
          __debugbreak();
      }
      if ( v15->rightmove == (char)0x80 )
      {
        LODWORD(v19) = 127;
        LODWORD(v18) = -127;
        LODWORD(v17) = -128;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 1310, ASSERT_TYPE_ASSERT, "( -127 ) <= ( cmd->rightmove ) && ( cmd->rightmove ) <= ( 127 )", "cmd->rightmove not in [-127, 127]\n\t%i not in [%i, %i]", v17, v18, v19) )
          __debugbreak();
      }
      v16 = DVARINT_cl_freemove;
      if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.integer )
      {
        SV_DemoSP_RecordClientThink(localClientNum, v15);
        SV_ClientSP_Think(localClientNum, v15, v3 < v11 - 1);
      }
      ++v3;
      ++v13;
    }
    while ( v3 < v11 );
    v12 = CmdNumber;
  }
  Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
  ClientSP->cmdNumberAcknowledge = v12;
  Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
}

