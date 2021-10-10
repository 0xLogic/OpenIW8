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
  kbutton_t *v1; 
  ClActiveClientSP *ClientSP; 
  int frametime; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  float value; 
  double v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  double v12; 
  const dvar_t *v13; 
  float v14; 
  double v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  double v19; 
  vec3_t clViewangles; 

  v1 = g_playersKb[localClientNum];
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  frametime = cls.frametime;
  if ( v1[9].active )
  {
    v4 = DVARFLT_cl_anglespeedkey;
    if ( !DVARFLT_cl_anglespeedkey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_anglespeedkey") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = (float)((float)frametime * 0.001) * v4->current.value;
  }
  else
  {
    v5 = (float)cls.frametime * 0.001;
  }
  ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
  if ( !v1[8].active )
  {
    v6 = DVARFLT_cl_yawspeed;
    if ( !DVARFLT_cl_yawspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_yawspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    v8 = CL_Input_KeyState(v1 + 1);
    v9 = clViewangles.v[1] - (float)(*(float *)&v8 * (float)(v5 * value));
    clViewangles.v[1] = v9;
    v10 = DVARFLT_cl_yawspeed;
    if ( !DVARFLT_cl_yawspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_yawspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.value;
    v12 = CL_Input_KeyState(v1);
    clViewangles.v[1] = v9 + (float)(*(float *)&v12 * (float)(v5 * v11));
  }
  v13 = DVARFLT_cl_pitchspeed;
  if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  v15 = CL_Input_KeyState(v1 + 4);
  v16 = clViewangles.v[0] - (float)(*(float *)&v15 * (float)(v5 * v14));
  clViewangles.v[0] = v16;
  v17 = DVARFLT_cl_pitchspeed;
  if ( !DVARFLT_cl_pitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_pitchspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value;
  v19 = CL_Input_KeyState(v1 + 5);
  clViewangles.v[0] = v16 + (float)(*(float *)&v19 * (float)(v5 * v18));
  ClActiveClient_SetCLViewangles(ClientSP, &clViewangles);
  memset(&clViewangles, 0, sizeof(clViewangles));
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
  __int64 v4; 
  ClActiveClientSP *ClientSP; 
  cg_t *LocalClientGlobals; 
  usercmd_s *v8; 
  usercmd_s *p_cmd; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v14; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v15; 
  bool v16; 
  int i; 
  ClActiveClientSP *v18; 
  __int64 v19; 
  ClActiveClientSP *v20; 
  const dvar_t *v21; 
  double v22; 
  int v23; 
  double v24; 
  double v25; 
  int ControllerFromClient; 
  const dvar_t *v27; 
  cg_t *v28; 
  cg_t *v29; 
  playerState_s *p_predictedPlayerState; 
  float v31; 
  int v32; 
  __int64 v33; 
  __int64 my; 
  __int64 v35; 
  float mx[2]; 
  vec3_t v37; 
  vec3_t clViewangles; 
  __int64 v39; 
  usercmd_s cmd; 

  v39 = -2i64;
  v4 = localClientNum;
  memset_0(&cmd, 0, sizeof(cmd));
  cmd.meleeChargeEnt = 2047;
  ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v4);
  ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
  *(_DWORD *)&cmd.extrapolationMax = 0;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
    __debugbreak();
  if ( (unsigned int)v4 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v35) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(my) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", my, v35) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v4] )
  {
    LODWORD(v35) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v35) )
      __debugbreak();
  }
  CgVehicleSystem::PhysicsUpdateCmdValues(CgVehicleSystem::ms_vehicleSystemArray[v4], &cmd);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
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
    CL_Input_AddCurrentStanceToCmd((LocalClientNum_t)v4, &cmd);
    CL_InputSP_FinishMove((LocalClientNum_t)v4, &cmd, outClearButtons);
    memset(&clViewangles, 0, sizeof(clViewangles));
    v8 = result;
    p_cmd = &cmd;
    v10 = 2i64;
    do
    {
      *(__m256i *)&v8->buttons = *(__m256i *)&p_cmd->buttons;
      *(__m256i *)(&v8->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
      *(__m256i *)&v8->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
      *(_OWORD *)&v8->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
      v8 = (usercmd_s *)((char *)v8 + 128);
      *(_OWORD *)&v8[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
      p_cmd = (usercmd_s *)((char *)p_cmd + 128);
      --v10;
    }
    while ( v10 );
    goto LABEL_18;
  }
  CL_InputSP_AdjustViewanglesForKeyboard((LocalClientNum_t)v4);
  mx[1] = 0.0;
  mx[0] = 0.0;
  CL_Input_ValidateMouseMovementCalls();
  CL_Input_GetMouseMovement((LocalClientNum_t)v4, &mx[1], mx);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, ACTIVE, 0x1Cu) )
  {
    CL_Input_RemoteControlMove((LocalClientNum_t)v4, &cmd, 1, outClearButtons, mx[1], mx[0]);
    if ( ClientSP->ps.viewlocked_entNum == 2047 )
    {
      CL_InputSP_FinishMove((LocalClientNum_t)v4, &cmd, outClearButtons);
      memset(&clViewangles, 0, sizeof(clViewangles));
      v8 = result;
      p_cmd = &cmd;
      v12 = 2i64;
      do
      {
        *(__m256i *)&v8->buttons = *(__m256i *)&p_cmd->buttons;
        *(__m256i *)(&v8->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
        *(__m256i *)&v8->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
        *(_OWORD *)&v8->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
        v8 = (usercmd_s *)((char *)v8 + 128);
        *(_OWORD *)&v8[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
        p_cmd = (usercmd_s *)((char *)p_cmd + 128);
        --v12;
      }
      while ( v12 );
      goto LABEL_18;
    }
  }
  if ( (CL_Keys_IsCatcherActive((LocalClientNum_t)v4, 8) || CL_Keys_IsCatcherActive((LocalClientNum_t)v4, 16)) && CL_Input_LocationSelection((const LocalClientNum_t)v4, &cmd, mx[1], mx[0], outClearButtons) )
  {
    CL_InputSP_FinishMove((LocalClientNum_t)v4, &cmd, outClearButtons);
    memset(&clViewangles, 0, sizeof(clViewangles));
    v8 = result;
    p_cmd = &cmd;
    v13 = 2i64;
    do
    {
      *(__m256i *)&v8->buttons = *(__m256i *)&p_cmd->buttons;
      *(__m256i *)(&v8->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
      *(__m256i *)&v8->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
      *(_OWORD *)&v8->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
      v8 = (usercmd_s *)((char *)v8 + 128);
      *(_OWORD *)&v8[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
      p_cmd = (usercmd_s *)((char *)p_cmd + 128);
      --v13;
    }
    while ( v13 );
    goto LABEL_18;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
  {
    v14 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    v15 = (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)((char *)v14 + 369908);
    v16 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v14 + 48915, GameModeFlagValues::ms_spValue, 0x3Au);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v15, GameModeFlagValues::ms_spValue, 0x3Au) != v16 )
    {
      for ( i = 1; i < 222; ++i )
      {
        if ( CL_Keys_GetActiveBinding((LocalClientNum_t)v4, i) == 31 )
          CL_Input_KeyUp(&g_playersKb[v4][30], i, com_frameTime);
      }
    }
  }
  CL_InputSP_CmdButtons((LocalClientNum_t)v4, &cmd, outClearButtons);
  v18 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v4);
  v19 = v4;
  if ( !CL_InputSP_IgnoreStance((LocalClientNum_t)v4) )
  {
    if ( CL_HasHeldStance((const LocalClientNum_t)v4) )
    {
      CL_Input_AddTempStanceToCmd((LocalClientNum_t)v4, &cmd);
    }
    else
    {
      v20 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v4);
      CL_Input_StanceUpdate((const LocalClientNum_t)v4, v20);
      CL_Input_AddCurrentStanceToCmd((LocalClientNum_t)v4, &cmd);
    }
  }
  v21 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer == 2 || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v18->ps.pm_flags, ACTIVE, 0x10u) )
  {
    CL_Input_AdjustSpeedForAds((LocalClientNum_t)v4, &cmd);
    CL_Input_AddLateralMoveToCmd((LocalClientNum_t)v4, &cmd);
    CL_Input_AddPitchYawMoveToCmd((LocalClientNum_t)v4, &cmd);
    v22 = CL_Input_KeyState(&g_playersKb[v19][19]);
    v23 = (int)(float)(*(float *)&v22 * 127.0);
    v24 = CL_Input_KeyState(&g_playersKb[v19][31]);
    cmd.upmove = CL_Input_ClampInputChar(v23);
    cmd.downmove = CL_Input_ClampInputChar((int)(float)(*(float *)&v24 * 127.0));
  }
  v25 = Com_ViewScaleMsec(cls.frametime_base);
  CL_InputSP_MouseMove((LocalClientNum_t)v4, &cmd, *(float *)&v25, mx[1], mx[0]);
  CL_Input_UpdateMouseWheelSustainState((LocalClientNum_t)v4, *(const float *)&v25);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  if ( GPad_IsActive(ControllerFromClient) )
    goto LABEL_54;
  v27 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.enabled )
LABEL_54:
    CL_InputSP_GamepadMove((LocalClientNum_t)v4, *(float *)&v25, &cmd);
  else
    cmd.inputFromGamepad = 0;
  v28 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  v28->frametimeInputSec = *(float *)&v25;
  ClientSP->cmdInputAccumTimeMs += (int)(float)(*(float *)&v25 * 1000.0);
  cmd.lightSample = v28->lightSample;
  v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  p_predictedPlayerState = &v29->predictedPlayerState;
  if ( v29 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (p_predictedPlayerState->cursorHintFlags & 0x10) != 0 && p_predictedPlayerState->cursorHintRange == USE_RANGE && p_predictedPlayerState->cursorHint && (cmd.buttons & 0x40000028) != 0 )
    cmd.buttons |= 0x8000000000ui64;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&p_predictedPlayerState->otherFlags, THERMAL_DRAW|0x20) )
  {
    ClActiveClient_GetCLViewangles(ClientSP, &v37);
    v37 = clViewangles;
    ClActiveClient_SetCLViewangles(ClientSP, &v37);
  }
  ClActiveClient_GetCLViewangles(ClientSP, &v37);
  if ( (float)(v37.v[0] - clViewangles.v[0]) <= 90.0 )
  {
    if ( (float)(clViewangles.v[0] - v37.v[0]) <= 90.0 )
      goto LABEL_70;
    v31 = clViewangles.v[0] - 90.0;
  }
  else
  {
    v31 = clViewangles.v[0] + 90.0;
  }
  v37.v[0] = v31;
  ClActiveClient_SetCLViewangles(ClientSP, &v37);
LABEL_70:
  CL_InputSP_FinishMove((LocalClientNum_t)v4, &cmd, outClearButtons);
  v32 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  cmd.rollSensitivity = GamerProfile_GetProfileSettings(v32)->config.viewHorzSensitivity;
  memset(&v37, 0, sizeof(v37));
  memset(&clViewangles, 0, sizeof(clViewangles));
  v8 = result;
  p_cmd = &cmd;
  v33 = 2i64;
  do
  {
    *(__m256i *)&v8->buttons = *(__m256i *)&p_cmd->buttons;
    *(__m256i *)(&v8->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
    *(__m256i *)&v8->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v8->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
    v8 = (usercmd_s *)((char *)v8 + 128);
    *(_OWORD *)&v8[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    --v33;
  }
  while ( v33 );
LABEL_18:
  v8->buttons = p_cmd->buttons;
  return result;
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
  usercmd_s *v6; 
  usercmd_s *p_cmd; 
  __int128 v8; 
  __int64 v9; 
  double TimescaleForSv; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 cmdAccumTimeUsec; 
  unsigned __int64 cmdTimeUsec; 
  double v19; 
  __int64 v20; 
  float v21; 
  float v22; 
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
  v6 = CL_InputSP_CreateCmd(&result, (LocalClientNum_t)v1, &outClearButtons);
  p_cmd = &cmd;
  do
  {
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    v8 = *(_OWORD *)&v6->buttons;
    v6 = (usercmd_s *)((char *)v6 + 128);
    *(_OWORD *)&p_cmd[-1].offHand.attachmentVariationIndices[13] = v8;
    *(_OWORD *)&p_cmd[-1].offHand.weaponCamo = *(_OWORD *)&v6[-1].offHand.weaponCamo;
    *(_OWORD *)p_cmd[-1].remoteControlMove = *(_OWORD *)v6[-1].remoteControlMove;
    *(_OWORD *)p_cmd[-1].vehAngles = *(_OWORD *)v6[-1].vehAngles;
    *(_OWORD *)&p_cmd[-1].vehOrgZ = *(_OWORD *)&v6[-1].vehOrgZ;
    *(_OWORD *)&p_cmd[-1].gunYOfs = *(_OWORD *)&v6[-1].gunYOfs;
    *(_OWORD *)p_cmd[-1].sightedClientsMask.data = *(_OWORD *)v6[-1].sightedClientsMask.data;
    *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v6[-1].sightedClientsMask.data[4];
    --v2;
  }
  while ( v2 );
  p_cmd->buttons = v6->buttons;
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
    v9 = 1000i64 * Com_GetUserCommandConstantMsec();
    TimescaleForSv = Com_GetTimescaleForSv();
    v11 = (float)v9;
    if ( v9 < 0 )
    {
      v12 = (float)v9;
      v11 = v12 + 1.8446744e19;
    }
    v14 = *(float *)&TimescaleForSv * v11;
    v13 = v14;
    v15 = 0i64;
    if ( v14 >= 9.223372e18 )
    {
      v13 = v14 - 9.223372e18;
      if ( (float)(v14 - 9.223372e18) < 9.223372e18 )
        v15 = 0x8000000000000000ui64;
    }
    v16 = v15 + (unsigned int)(int)v13;
    if ( ClientSP->cmdAccumTimeUsec >= v9 )
    {
      CL_Input_CycleWeapon((LocalClientNum_t)v1, &cmd);
      CL_Input_HoldBreathHybridAndVZoomToggle((LocalClientNum_t)v1, &cmd);
      Sys_EnterCriticalSection(CRITSECT_CLIENT_CMD);
      cmdAccumTimeUsec = ClientSP->cmdAccumTimeUsec;
      if ( cmdAccumTimeUsec >= v9 )
      {
        cmdTimeUsec = ClientSP->cmdTimeUsec;
        do
        {
          cmdTimeUsec += v16;
          cmdAccumTimeUsec -= v9;
        }
        while ( cmdAccumTimeUsec >= v9 );
        ClientSP->cmdAccumTimeUsec = cmdAccumTimeUsec;
        ClientSP->cmdTimeUsec = cmdTimeUsec;
      }
      if ( CL_Input_AddCommand(ClientSP, &cmd) )
        CL_Input_ClearButtonsPressed((const LocalClientNum_t)v1, &outClearButtons);
      Sys_LeaveCriticalSection(CRITSECT_CLIENT_CMD);
    }
    v19 = Com_GetTimescaleForSv();
    v20 = ClientSP->cmdAccumTimeUsec;
    v21 = (float)v20;
    if ( v20 < 0 )
    {
      v22 = (float)v20;
      v21 = v22 + 1.8446744e19;
    }
    CL_Input_SetExtrapolationCommand(ClientSP, &cmd, (int)(float)((float)(*(float *)&v19 * v21) * 0.001));
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
  ClActiveClientSP *v28; 
  ClActiveClientSP *v29; 
  vec3_t clViewangles; 

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
        v28 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
        ClActiveClient_GetCLViewangles(v28, &clViewangles);
        LODWORD(clViewangles.v[0]) = LODWORD(v28->ps.delta_angles.v[0]) ^ _xmm;
        ClActiveClient_SetCLViewangles(v28, &clViewangles);
        memset(&clViewangles, 0, sizeof(clViewangles));
      }
      return;
    case 118:
      CL_MainSP_TogglePause((LocalClientNum_t)v7);
      return;
    case 123:
      v29 = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v7);
      LODWORD(v29->clViewangles.clViewangles.v[0]) = LODWORD(v29->ps.delta_angles.v[0]) ^ _xmm ^ ((((_DWORD)v29 + 428) ^ v29->clviewangles_aab) * ((((_DWORD)v29 + 428) ^ v29->clviewangles_aab) + 2));
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
  ClActiveClientSP *ClientSP; 
  int v5; 
  base_vec3_t<int> *p_angles; 
  bool v8; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  vec3_t clViewangles; 

  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  cmd->weapon = ClientSP->cgameUserCmdWeapon;
  cmd->offHand = ClientSP->cgameUserCmdOffHand;
  cmd->isAlternate = ClientSP->cgameUserCmdAlternate != 0;
  BG_AssertOffhandIndexOrNone(&cmd->offHand);
  cmd->serverTime = com_time;
  cmd->inputTime = ClientSP->cmdInputAccumTimeMs;
  ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
  v5 = 0;
  _XMM6 = 0i64;
  p_angles = &cmd->angles;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v12) = 3;
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    v10 = MSG_PackSignedFloat((float)((float)(0.0027777778 * *(float *)((char *)p_angles->v + (char *)&clViewangles - (char *)&cmd->angles)) - *(float *)&_XMM3) * 360.0, 180.0, 0x14u);
    if ( (unsigned int)v5 >= 3 )
    {
      LODWORD(v12) = 3;
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    p_angles->v[0] = v10;
    ++v5;
    p_angles = (base_vec3_t<int> *)((char *)p_angles + 4);
    v8 = (unsigned int)v5 < 3;
  }
  while ( v5 < 3 );
  cmd->gunPitch = ClientSP->cgameUserCmdGunPitch;
  cmd->gunYaw = ClientSP->cgameUserCmdGunYaw;
  cmd->gunXOfs = ClientSP->cgameUserCmdGunXOfs;
  cmd->gunYOfs = ClientSP->cgameUserCmdGunYOfs;
  cmd->gunZOfs = ClientSP->cgameUserCmdGunZOfs;
  CL_Input_FinishCmdButtons(localClientNum, cmd, outClearButtons);
  memset(&clViewangles, 0, sizeof(clViewangles));
}

/*
==============
CL_InputSP_GamepadMove
==============
*/
void CL_InputSP_GamepadMove(LocalClientNum_t localClientNum, float frametime_base, usercmd_s *cmd)
{
  __int128 v3; 
  __int64 v6; 
  const dvar_t *v7; 
  ClActiveClientSP *ClientSP; 
  const dvar_t *v9; 
  int ControllerFromClient; 
  float v11; 
  __int128 v14; 
  __int128 v15; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  float v26; 
  double v27; 
  float v28; 
  double Float_Internal_DebugName; 
  double Button; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  int v39; 
  int rightmove; 
  int v41; 
  int v42; 
  int v43; 
  int forwardmove; 
  int upmove; 
  int downmove; 
  int pitchmove; 
  int yawmove; 
  char v49; 
  __int64 v50; 
  double v51; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v55; 
  cg_t *LocalClientGlobals; 
  double v57; 
  float v58; 
  double MaxPitchSpeed; 
  double MaxYawSpeed; 
  float v61; 
  int v62; 
  int v63; 
  vec3_t clViewangles; 
  __int64 v65; 
  AimOutput output; 
  AimInput input; 

  v65 = -2i64;
  v6 = localClientNum;
  if ( CL_Pause_IsGamePaused() )
  {
    v7 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 338, ASSERT_TYPE_ASSERT, "(!CL_Pause_IsGamePaused() || Dvar_GetInt_Internal_DebugName( DVARINT_cl_freemove, \"cl_freemove\" ) != FREEMOVE_NONE)", (const char *)&queryFormat, "!CL_Pause_IsGamePaused() || Dvar_GetInt( cl_freemove ) != FREEMOVE_NONE") )
      __debugbreak();
  }
  if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v6) )
  {
    ClientSP = ClActiveClientSP::GetClientSP((const LocalClientNum_t)v6);
    v9 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( (v9->current.integer == 2 || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, ACTIVE, 0x10u)) && !DevGui_IsActive() && !CL_Cameraman_isActive() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
      v11 = 0.0;
      if ( (ClientSP->ps.linkFlags.m_flags[0] & 1) == 0 || Dvar_GetInt_Internal_DebugName(DVARINT_cl_freemove, "cl_freemove") == 2 )
      {
        *(double *)&v3 = CL_GamepadAxisValue((LocalClientNum_t)v6, 3);
        v14 = v3;
        *(double *)&v3 = CL_Input_GetClientLookInversion((LocalClientNum_t)v6);
        v15 = v14;
        *(float *)&v15 = *(float *)&v14 * *(float *)&v3;
        _XMM7 = v15;
        *(double *)&v3 = CL_GamepadAxisValue((LocalClientNum_t)v6, 2);
        _XMM6 = v3 ^ (unsigned int)_xmm;
        if ( ClientSP->ps.viewangles.v[0] < -90.0 )
          _XMM6 = v3;
      }
      else
      {
        _XMM7 = 0i64;
        _XMM6 = 0i64;
      }
      _XMM0 = PM_AllowCameraInputForAxis(&ClientSP->ps, 0, *(float *)&_XMM7);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm8, xmm2
      }
      v61 = *(float *)&_XMM0;
      _XMM0 = PM_AllowCameraInputForAxis(&ClientSP->ps, 1, *(float *)&_XMM6);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm8, xmm2
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientSP->ps.pm_flags, ACTIVE, 0x11u) )
      {
        v22 = 0.0;
      }
      else
      {
        v11 = v61;
        v22 = *(float *)&_XMM0;
      }
      v23 = CL_GamepadAxisValue((LocalClientNum_t)v6, 1);
      v24 = *(float *)&v23;
      v25 = CL_GamepadAxisValue((LocalClientNum_t)v6, 4);
      v26 = *(float *)&v25;
      v27 = CL_GamepadAxisValue((LocalClientNum_t)v6, 0);
      v28 = *(float *)&v27;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_autoForwardCancelMinBackwardDeflection, "cl_autoForwardCancelMinBackwardDeflection");
      if ( v24 >= *(float *)&Float_Internal_DebugName )
      {
        _XMM0 = ClientSP->autoForward;
        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_1_0);
        __asm { vblendvps xmm0, xmm1, xmm9, xmm2 }
        v24 = *(float *)&_XMM0;
      }
      else
      {
        ClientSP->autoForward = 0;
      }
      Button = GPad_GetButton(ControllerFromClient, GPAD_R_TRIG);
      v35 = *(float *)&Button;
      v36 = GPad_GetButton(ControllerFromClient, GPAD_L_TRIG);
      v37 = *(float *)&v36;
      v38 = BG_CmdScale_CalcInputScale(v24, v28);
      v39 = (int)(float)((float)(*(float *)&v38 * v24) * 127.0);
      rightmove = (int)(float)((float)(*(float *)&v38 * v28) * 127.0);
      v63 = rightmove;
      v41 = (int)(float)(v35 * 127.0);
      v42 = (int)(float)(v37 * 127.0);
      v43 = (int)(float)(v11 * 127.0);
      v62 = (int)(float)(v22 * 127.0);
      if ( !rightmove )
        rightmove = cmd->rightmove;
      cmd->rightmove = CL_Input_ClampInputChar(rightmove);
      forwardmove = (int)(float)((float)(*(float *)&v38 * v24) * 127.0);
      if ( !v39 )
        forwardmove = cmd->forwardmove;
      cmd->forwardmove = CL_Input_ClampInputChar(forwardmove);
      upmove = (int)(float)(v35 * 127.0);
      if ( !v41 )
        upmove = cmd->upmove;
      cmd->upmove = CL_Input_ClampInputChar(upmove);
      downmove = (int)(float)(v37 * 127.0);
      if ( !v42 )
        downmove = cmd->downmove;
      cmd->downmove = CL_Input_ClampInputChar(downmove);
      pitchmove = (int)(float)(v11 * 127.0);
      if ( !v43 )
        pitchmove = cmd->pitchmove;
      cmd->pitchmove = CL_Input_ClampInputChar(pitchmove);
      yawmove = (int)(float)(v22 * 127.0);
      if ( !v62 )
        yawmove = cmd->yawmove;
      cmd->yawmove = CL_Input_ClampInputChar(yawmove);
      if ( v63 || v39 || v41 || v42 || v43 || (v49 = (int)(float)(v22 * 127.0), v62) )
        v49 = 1;
      cmd->inputFromGamepad = v49;
      v50 = v6;
      CL_Input_GamepadAccessibility((LocalClientNum_t)v6, cmd);
      if ( g_playersKb[v6][32].active || g_playersKb[v50][32].wasPressed )
      {
        cmd->buttons |= 2ui64;
        g_playersKb[v50][32].wasPressed = 0;
      }
      else
      {
        cmd->buttons &= ~2ui64;
      }
      v51 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_analog_attack_threshold, "cl_analog_attack_threshold");
      if ( v26 >= *(float *)&v51 )
        cmd->buttons |= 1ui64;
      p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v6)->predictedPlayerState;
      if ( (cmd->buttons & 1) != 0 )
      {
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v6);
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
        v55 = BG_UsingAlternate(p_predictedPlayerState);
        if ( BG_IsMeleeOnlyWeapon(CurrentWeaponForPlayer, v55) && !BG_IsWeaponMeleeOverride(Instance, p_predictedPlayerState, CurrentWeaponForPlayer) )
          cmd->buttons |= 4ui64;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
      v57 = Mantle_SlowInputTurnRate(&LocalClientGlobals->predictedPlayerState, v22);
      v58 = *(float *)&v57;
      ClActiveClient_GetCLViewangles(ClientSP, &clViewangles);
      input.deltaTime = frametime_base;
      input.deltaTimeScaled = (float)cls.frametime * 0.001;
      input.pitch = clViewangles.v[0];
      input.pitchAxis = v11;
      MaxPitchSpeed = CL_GetMaxPitchSpeed((LocalClientNum_t)v6);
      input.pitchMax = *(float *)&MaxPitchSpeed;
      input.yaw = clViewangles.v[1];
      input.yawAxis = v58;
      MaxYawSpeed = CL_GetMaxYawSpeed((LocalClientNum_t)v6);
      input.yawMax = *(float *)&MaxYawSpeed;
      input.forwardAxis = v24;
      input.rightAxis = v28;
      input.buttons = cmd->buttons;
      input.localClientNum = v6;
      input.meleeChargeEnt = cmd->meleeChargeEnt;
      AimAssist_UpdateGamePadInput(&input, &output);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 508, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
        __debugbreak();
      CL_InputSP_UpdateSpringCam((LocalClientNum_t)v6, cmd, frametime_base, &output.pitch, &output.yaw);
      clViewangles.v[0] = output.pitch;
      clViewangles.v[1] = output.yaw;
      ClActiveClient_SetCLViewangles(ClientSP, &clViewangles);
      BG_SetMeleeChargeCmd(&output, cmd);
      cmd->scriptedMeleeTarget = output.scriptedMeleeTarget;
      CG_ModelPreviewerHandleGamepadEvents((LocalClientNum_t)v6, v24, v28, v11, v58);
      CG_CreateFx_HandleGamepadEvents((LocalClientNum_t)v6, v24, v28, v11, v58);
      memset(&clViewangles, 0, sizeof(clViewangles));
    }
  }
}

/*
==============
CL_InputSP_HandleClientInput
==============
*/
void CL_InputSP_HandleClientInput(LocalClientNum_t localClientNum)
{
  LocalClientNum_t OnlyLocalClientNum; 
  double v3; 
  int ControllerFromClient; 
  bool InvertedVerticalLookGamepad; 
  int v6; 
  int v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  LocalClientNum_t v14; 
  double v15; 
  int v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 

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
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    ClActiveClientSP::GetClientSP(OnlyLocalClientNum);
    v3 = CL_GamepadAxisValue(OnlyLocalClientNum, 3);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
    InvertedVerticalLookGamepad = GamerProfile_GetInvertedVerticalLookGamepad(ControllerFromClient);
    v6 = -1;
    v7 = -1;
    if ( InvertedVerticalLookGamepad )
      v7 = 1;
    v8 = *(float *)&v3 * (float)v7;
    v9 = CL_GamepadAxisValue(OnlyLocalClientNum, 2);
    LODWORD(v10) = LODWORD(v9) ^ _xmm;
    v11 = CL_GamepadAxisValue(OnlyLocalClientNum, 1);
    v12 = *(float *)&v11;
    v13 = CL_GamepadAxisValue(OnlyLocalClientNum, 0);
    CG_ModelPreviewerHandleGamepadEvents(OnlyLocalClientNum, v12, *(float *)&v13, v8, v10);
    v14 = CL_GetOnlyLocalClientNum();
    ClActiveClientSP::GetClientSP(v14);
    v15 = CL_GamepadAxisValue(v14, 3);
    v16 = CL_Mgr_GetControllerFromClient(v14);
    if ( GamerProfile_GetInvertedVerticalLookGamepad(v16) )
      v6 = 1;
    v17 = *(float *)&v15 * (float)v6;
    v18 = CL_GamepadAxisValue(v14, 2);
    LODWORD(v19) = LODWORD(v18) ^ _xmm;
    v20 = CL_GamepadAxisValue(v14, 1);
    v21 = *(float *)&v20;
    v22 = CL_GamepadAxisValue(v14, 0);
    CG_CreateFx_HandleGamepadEvents(v14, v21, *(float *)&v22, v17, v19);
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
void CL_InputSP_MouseMove(LocalClientNum_t localClientNum, usercmd_s *cmd, float frametime_base, float rawMx, float rawMy)
{
  __int64 v7; 
  ClActiveClient *Client; 
  __int64 v9; 
  const dvar_t *v10; 
  bool enabled; 
  const dvar_t *v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  double Float_Internal_DebugName; 
  double v17; 
  float v18; 
  int v19; 
  double v20; 
  int v21; 
  __int64 v22; 
  bool v23; 
  int ControllerFromClient; 
  bool FreeLook; 
  bool v26; 
  bool active; 
  double MaxYawSpeed; 
  float v31; 
  double MaxPitchSpeed; 
  float v33; 
  bool v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  __int128 v38; 
  float v39; 
  __int128 v40; 
  float v41; 
  float v43; 
  float v46; 
  float v47; 
  float v48; 
  double updated; 
  __int64 v52; 
  int v53; 
  int v56; 
  float v57; 
  bool v58; 
  double v59; 
  float v60; 
  float v61; 
  bool v64; 
  char v65; 
  float v66; 
  int v67; 
  __int128 v69; 
  bool v70; 
  __int128 v75; 
  float v79; 
  float v81; 
  __int128 v83; 
  int v87; 
  char v88; 
  int v89; 
  char v90; 
  char v91; 
  float outMx; 
  float outMy; 
  float v94; 
  float v95; 
  float v96; 
  __int64 v97; 
  __int64 v98; 
  vec3_t clViewangles; 
  float v100; 
  float v101; 
  __int64 v102; 
  AimOutput output; 
  AimInput input; 

  v102 = -2i64;
  v101 = rawMx;
  v96 = frametime_base;
  v7 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 551, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( frame_msec )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v7);
    v9 = (__int64)Client->GetPlayerState(Client);
    v98 = v9;
    outMx = rawMx;
    outMy = rawMy;
    CL_Input_ApplyMouseSensitivity((const LocalClientNum_t)v7, &outMx, &outMy);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) )
      AimAssist_UpdateMouseRaw((LocalClientNum_t)v7, &outMx, &outMy);
    *(_QWORD *)Client->mouseViewDelta.v = 0i64;
    Client->mouseViewDelta.v[2] = 0.0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v9 + 20), ACTIVE, 0x10u) )
    {
      v10 = DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput;
      if ( !DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulateShellshockedMouseInput") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      enabled = v10->current.enabled;
      v12 = DCONST_DVARINT_cl_accumulatedInputExpirationTime;
      if ( !DCONST_DVARINT_cl_accumulatedInputExpirationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_accumulatedInputExpirationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = enabled && Client->accumulatedInputTimer < v12->current.integer;
      if ( Client->accumulatedMouseDelta.v[1] == 0.0 && Client->accumulatedMouseDelta.v[0] == 0.0 )
        v13 = 0;
      v14 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v9 + 20), ACTIVE, 0x15u) && BG_GetShellshockParms(*(_DWORD *)(v9 + 4412))->lookControl.affect;
      v15 = v14 && v13;
      if ( !v15 )
      {
        *(_QWORD *)&Client->accumulatedMouseDelta.y = 0i64;
        Client->accumulatedMouseDelta.v[0] = 0.0;
      }
      if ( AimAssist_IsMeleeLockOnActive((LocalClientNum_t)v7) || rawMx == 0.0 && rawMy == 0.0 && !v15 )
      {
        v66 = FLOAT_0_001;
LABEL_117:
        ClActiveClient_GetCLViewangles(Client, &clViewangles);
        input.deltaTime = v96;
        input.deltaTimeScaled = (float)cls.frametime * v66;
        input.pitch = clViewangles.v[0];
        input.pitchAxis = 0.0;
        input.pitchMax = 0.0;
        input.yaw = clViewangles.v[1];
        *(_OWORD *)&input.yawAxis = 0i64;
        input.buttons = cmd->buttons;
        input.localClientNum = v7;
        input.meleeChargeEnt = cmd->meleeChargeEnt;
        AimAssist_UpdateMouseInput(&input, &output);
        clViewangles.v[0] = output.pitch;
        clViewangles.v[1] = output.yaw;
        ClActiveClient_SetCLViewangles(Client, &clViewangles);
        BG_SetMeleeChargeCmd(&output, cmd);
        cmd->scriptedMeleeTarget = output.scriptedMeleeTarget;
        memset(&clViewangles, 0, sizeof(clViewangles));
        return;
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxShellshockCatchUpSpeed, "cl_maxShellshockCatchUpSpeed");
      v94 = *(float *)&Float_Internal_DebugName;
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_shortMovementThreshold, "cl_shortMovementThreshold");
      v18 = *(float *)&v17;
      v20 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_longMovementThreshold, "cl_longMovementThreshold");
      v100 = *(float *)&v20;
      if ( v18 >= *(float *)&v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 607, ASSERT_TYPE_ASSERT, "(shortMovementThreshold < longMovementThreshold)", (const char *)&queryFormat, "shortMovementThreshold < longMovementThreshold") )
        __debugbreak();
      LOBYTE(v19) = 0;
      v95 = *(float *)&v19;
      v21 = 0;
      LODWORD(v97) = 0;
      v22 = v7;
      *(_QWORD *)clViewangles.v = 1632 * v7;
      v23 = (*(_BYTE *)(v98 + 36) & 1) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v98 + 20), ACTIVE, 0x11u);
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
      FreeLook = GamerProfile_GetFreeLook(ControllerFromClient);
      v26 = g_playersKb[v22][14].active || FreeLook;
      active = g_playersKb[v22][8].active;
      if ( active || !v26 )
      {
        v91 = 1;
        if ( active )
        {
          Dvar_GetFloat_Internal_DebugName(DVARFLT_m_side, "m_side");
          _XMM0 = 0i64;
          __asm { vroundss xmm1, xmm0, xmm4, 1 }
          cmd->rightmove = CL_Input_ClampInputChar(cmd->rightmove + (int)*(float *)&_XMM1);
        }
      }
      else
      {
        v91 = 0;
      }
      if ( !v26 )
      {
        Dvar_GetFloat_Internal_DebugName(DVARFLT_m_forward, "m_forward");
        _XMM0 = 0i64;
        __asm { vroundss xmm1, xmm0, xmm4, 1 }
        cmd->forwardmove = CL_Input_ClampInputChar(cmd->forwardmove - (int)*(float *)&_XMM1);
      }
      if ( !v23 )
      {
        MaxYawSpeed = CL_GetMaxYawSpeed((LocalClientNum_t)v7);
        v31 = *(float *)&MaxYawSpeed;
        MaxPitchSpeed = CL_GetMaxPitchSpeed((LocalClientNum_t)v7);
        v33 = *(float *)&MaxPitchSpeed;
        v34 = Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_combinedCameraRotationSpeed, "cl_combinedCameraRotationSpeed") && v31 == *(float *)&MaxPitchSpeed && v31 > 0.0;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_yaw, "m_yaw");
        Client->accumulatedMouseDelta.v[1] = (float)(*(float *)&_XMM0 * outMx) + Client->accumulatedMouseDelta.v[1];
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_pitch, "m_pitch");
        v35 = *(float *)&_XMM0;
        *(double *)&_XMM0 = CL_Input_GetClientLookInversion((LocalClientNum_t)v7);
        v37 = _XMM0;
        *(float *)&v37 = *(float *)&_XMM0 * v35;
        v36 = *(float *)&_XMM0 * v35;
        v38 = v37 ^ _xmm;
        v40 = v38;
        *(float *)&v40 = (float)(*(float *)&v38 * outMy) + Client->accumulatedMouseDelta.v[0];
        v39 = *(float *)&v40;
        Client->accumulatedMouseDelta.v[0] = *(float *)&v40;
        if ( v34 && !v91 )
        {
          v41 = Client->accumulatedMouseDelta.v[1];
          *(float *)&v40 = fsqrt((float)(*(float *)&v40 * *(float *)&v40) + (float)(v41 * v41));
          _XMM2 = v40;
          v43 = FLOAT_N0_0;
          __asm
          {
            vcmpless xmm0, xmm2, xmm10
            vblendvps xmm1, xmm2, xmm3, xmm0
          }
          v46 = (float)frame_msec;
          v47 = (float)(v46 * v31) * 0.001;
          v48 = (float)(v39 * (float)(1.0 / *(float *)&_XMM1)) * v47;
          updated = CL_Input_UpdateViewAnglesAxis(Client, YAW, 0.0, v34, COERCE_CONST_FLOAT(COERCE_UNSIGNED_INT((float)((float)(1.0 / *(float *)&_XMM1) * v41) * v47) & _xmm));
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[1]) & _xmm) < 0.001 )
            Client->accumulatedMouseDelta.v[1] = 0.0;
          _XMM1 = LODWORD(outMx);
          __asm { vminss  xmm2, xmm1, xmm12 }
          v21 = -(int)*(float *)&_XMM2;
          v52 = v98;
          CL_Input_LogMouseInputVelocity(v96, outMx, *(float *)&updated, Client->mouseViewDelta.v[1] - *(float *)(v98 + 184));
          CL_Input_UpdateViewAnglesAxis(Client, PITCH, 0.0, v34, COERCE_CONST_FLOAT(LODWORD(v48) & _xmm));
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[0]) & _xmm) < 0.001 )
            Client->accumulatedMouseDelta.v[0] = 0.0;
          v53 = -1;
          if ( *(float *)&v38 > 0.0 )
            v53 = 1;
          _XMM2 = LODWORD(outMy);
          __asm { vminss  xmm0, xmm2, xmm12 }
          v56 = (int)(float)((float)v53 * *(float *)&_XMM0);
          goto LABEL_88;
        }
        v57 = clViewangles.v[0];
        if ( *(&g_playersKb[0][8].active + *(_QWORD *)clViewangles.v) )
        {
          v61 = v94;
        }
        else
        {
          v58 = COERCE_FLOAT(LODWORD(outMx) & _xmm) > v18 && (float)(outMx * Client->accumulatedMouseDelta.v[1]) < 0.0;
          LOBYTE(v57) = v18 > COERCE_FLOAT(LODWORD(outMx) & _xmm);
          v95 = v57;
          v59 = CL_Input_UpdateViewAnglesAxis(Client, YAW, v31, v34, 0.0);
          v60 = *(float *)&v59;
          v61 = v94;
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[1]) & _xmm) < 0.001 || v58 || v31 <= 0.0 || v31 > v94 )
            Client->accumulatedMouseDelta.v[1] = 0.0;
          _XMM1 = LODWORD(outMx);
          __asm { vminss  xmm0, xmm1, xmm12 }
          v21 = -(int)*(float *)&_XMM0;
          CL_Input_LogMouseInputVelocity(v96, outMx, v60, Client->mouseViewDelta.v[1] - *(float *)(v98 + 184));
        }
        if ( v26 )
        {
          v64 = COERCE_FLOAT(LODWORD(outMy) & _xmm) > v18 && (float)((float)(*(float *)&v38 * outMy) * Client->accumulatedMouseDelta.v[0]) < 0.0;
          v65 = LOBYTE(v95);
          if ( v18 > COERCE_FLOAT(LODWORD(outMx) & _xmm) )
            v65 = 1;
          CL_Input_UpdateViewAnglesAxis(Client, PITCH, v33, v34, 0.0);
          v66 = FLOAT_0_001;
          if ( COERCE_FLOAT(LODWORD(Client->accumulatedMouseDelta.v[0]) & _xmm) < 0.001 || v64 || v33 <= 0.0 || v33 > v61 )
            Client->accumulatedMouseDelta.v[0] = 0.0;
          v67 = -1;
          v43 = FLOAT_N0_0;
          if ( v36 < -0.0 )
            v67 = 1;
          _XMM2 = LODWORD(outMy);
          __asm { vminss  xmm0, xmm2, xmm12 }
          v56 = (int)(float)((float)v67 * *(float *)&_XMM0);
          v52 = v98;
          goto LABEL_89;
        }
      }
      *(float *)&_XMM2 = outMy;
      v43 = FLOAT_N0_0;
      v56 = v97;
      v52 = v98;
LABEL_88:
      v65 = LOBYTE(v95);
      v66 = FLOAT_0_001;
LABEL_89:
      v69 = LODWORD(outMx) & (unsigned __int128)(unsigned int)_xmm;
      if ( *(float *)&v69 > v100 || COERCE_FLOAT(_XMM2 & _xmm) > v100 )
      {
        Client->accumulatedInputTimer = 0;
      }
      else
      {
        v69 = LODWORD(v101);
        v70 = 1;
        if ( v101 == 0.0 )
        {
          v69 = LODWORD(rawMy);
          if ( rawMy == 0.0 )
            v70 = 0;
        }
        if ( (v70 & (unsigned __int8)v65) != 0 )
          Client->accumulatedInputTimer += frame_msec;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v52 + 20), ACTIVE, 0x11u) )
      {
        v56 = 0;
        v21 = 0;
      }
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v52 + 28), TURRET_ACTIVE_PRONE|0x20) )
      {
        _XMM6 = 0i64;
        __asm { vroundss xmm0, xmm6, xmm3, 1 }
        cmd->yawmove = CL_Input_ClampInputChar(cmd->yawmove + (int)*(float *)&_XMM0);
        __asm { vroundss xmm1, xmm6, xmm3, 1 }
        cmd->pitchmove = CL_Input_ClampInputChar(cmd->pitchmove + (int)*(float *)&_XMM1);
      }
      else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v52 + 28), (POtherFlagsSP)36) )
      {
        *(double *)&v69 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_vehMouseSteerSensitivity, "m_vehMouseSteerSensitivity");
        v75 = v69;
        *(float *)&v75 = *(float *)&v69 * outMx;
        _XMM1 = v75;
        __asm
        {
          vminss  xmm2, xmm1, xmm12
          vmaxss  xmm0, xmm2, xmm7
        }
        _XMM9 = 0i64;
        __asm { vroundss xmm0, xmm9, xmm2, 1 }
        cmd->yawmove = -CL_Input_ClampInputChar(cmd->yawmove + (int)*(float *)&_XMM0);
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_pitch, "m_pitch");
        v79 = *(float *)&_XMM0;
        *(double *)&_XMM0 = CL_Input_GetClientLookInversion((LocalClientNum_t)v7);
        if ( (float)(*(float *)&_XMM0 * v79) <= v43 )
        {
          v81 = outMy;
        }
        else
        {
          _XMM0 = LODWORD(outMy);
          LODWORD(v81) = LODWORD(outMy) ^ _xmm;
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_m_vehMouseSteerSensitivity, "m_vehMouseSteerSensitivity");
        v83 = _XMM0;
        *(float *)&v83 = *(float *)&_XMM0 * v81;
        _XMM1 = v83;
        __asm
        {
          vminss  xmm2, xmm1, xmm12
          vmaxss  xmm3, xmm2, xmm7
          vroundss xmm2, xmm9, xmm1, 1
        }
        cmd->pitchmove = CL_Input_ClampInputChar(cmd->pitchmove + (int)*(float *)&_XMM2);
      }
      else
      {
        v87 = v56 + cmd->pitchmove;
        if ( v87 > 127 )
          v87 = 127;
        v88 = v87;
        if ( v87 < -128 )
          v88 = 0x80;
        cmd->pitchmove = v88;
        v89 = v21 + cmd->yawmove;
        if ( v89 > 127 )
          v89 = 127;
        v90 = v89;
        if ( v89 < -128 )
          v90 = 0x80;
        cmd->yawmove = v90;
      }
      goto LABEL_117;
    }
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
__int64 CL_InputSP_UpdateSpringCam(LocalClientNum_t localClientNum, usercmd_s *cmd, float frametime_base, float *pitch, float *yaw)
{
  ClActiveClientSP *ClientSP; 
  const ClActiveClient *v10; 
  const playerState_s *p_ps; 
  int pm_type; 
  unsigned int v14; 
  float springCamBlendTime; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  double v21; 
  float *p_viewAngleClampBase; 
  char *v24; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  __int64 v35; 
  vec3_t clViewangles; 
  __int64 v37; 
  int v38[4]; 

  v37 = -2i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 216, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
    __debugbreak();
  ClientSP = ClActiveClientSP::GetClientSP(localClientNum);
  v10 = ClientSP;
  p_ps = &ClientSP->ps;
  if ( ClientSP->ps.pm_type == 3 )
    return 0i64;
  if ( !BG_IsSpringCamActive(&ClientSP->ps) && (*(float *)&v10[1].mouseDx[1] == 0.0 || p_ps->springCamBlendTime == 0.0) )
  {
    v10[1].mouseDx[1] = 0;
    return 0i64;
  }
  if ( !p_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = p_ps->pm_type;
  if ( pm_type != 1 && pm_type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_input_sp.cpp", 233, ASSERT_TYPE_ASSERT, "(BG_IsPlayerLinked( ps ))", (const char *)&queryFormat, "BG_IsPlayerLinked( ps )") )
    __debugbreak();
  BG_ClearMeleeChargeCmd(cmd);
  v14 = 0;
  if ( BG_IsSpringCamActive(p_ps) )
  {
    springCamBlendTime = p_ps->springCamBlendTime;
    if ( springCamBlendTime == 0.0 )
    {
      v10[1].mouseDx[1] = 1065353216;
      v16 = FLOAT_1_0;
      goto LABEL_25;
    }
    v16 = (float)(frametime_base / springCamBlendTime) + *(float *)&v10[1].mouseDx[1];
  }
  else
  {
    v17 = p_ps->springCamBlendTime;
    if ( v17 == 0.0 )
    {
      v10[1].mouseDx[1] = 0;
      v16 = 0.0;
      goto LABEL_25;
    }
    v16 = *(float *)&v10[1].mouseDx[1] - (float)(frametime_base / v17);
  }
  *(float *)&v10[1].mouseDx[1] = v16;
LABEL_25:
  v18 = I_fclamp(v16, 0.0, 1.0);
  v10[1].mouseDx[1] = SLODWORD(v18);
  v19 = (float)(frametime_base * p_ps->springCamLerpSpeed) * *(float *)&v18;
  v20 = I_fclamp((float)cmd->pitchmove * 0.0078740157, -1.0, 1.0);
  v38[0] = SLODWORD(v20);
  v21 = I_fclamp((float)cmd->yawmove * 0.0078740157, -1.0, 1.0);
  v38[1] = SLODWORD(v21);
  *(float *)&v38[2] = 0.0;
  ClActiveClient_GetCLViewangles(v10, &clViewangles);
  p_viewAngleClampBase = (float *)&p_ps->viewAngleClampBase;
  _XMM13 = 0i64;
  v24 = (char *)((char *)&clViewangles - (char *)&p_ps->viewAngleClampBase);
  do
  {
    if ( v14 >= 3 )
    {
      LODWORD(v35) = 3;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
      LODWORD(v35) = 3;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( v14 >= 2 )
    {
      LODWORD(v35) = 2;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    __asm { vroundss xmm2, xmm13, xmm3, 1 }
    v27 = (float)((float)((float)((float)(*(p_viewAngleClampBase - 81) + *(float *)((char *)p_viewAngleClampBase + (_QWORD)v24)) - *p_viewAngleClampBase) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    v26 = v27;
    if ( v14 >= 2 )
    {
      LODWORD(v35) = 2;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( v14 >= 3 )
    {
      LODWORD(v35) = 3;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    v28 = *(float *)((char *)p_viewAngleClampBase + (char *)v38 - (char *)&p_ps->viewAngleClampBase) * p_viewAngleClampBase[2];
    v29 = (float)((float)(v28 - v27) * v19) + v27;
    if ( (float)(v28 * v27) >= 0.0 && COERCE_FLOAT(LODWORD(v28) & _xmm) < COERCE_FLOAT(LODWORD(v27) & _xmm) )
    {
      v30 = (float)(frametime_base * p_ps->springCamReleaseLerpSpeed) * *vec2_t::operator[](&p_ps->viewAngleClampRange, v14);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - v29) & _xmm) > v30 )
      {
        if ( v26 <= 0.0 )
          v29 = v30 + v26;
        else
          v29 = v26 - v30;
      }
    }
    if ( v14 >= 3 )
    {
      LODWORD(v35) = 3;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    v31 = *(float *)&v10[1].mouseDx[1];
    v32 = 1.0 - v31;
    v33 = v31 * (float)((float)(v29 - v26) + *(float *)((char *)p_viewAngleClampBase + (_QWORD)v24));
    if ( v14 )
      *yaw = (float)(v32 * *yaw) + v33;
    else
      *pitch = (float)(v32 * *pitch) + v33;
    ++v14;
    ++p_viewAngleClampBase;
  }
  while ( (int)v14 < 2 );
  memset(&clViewangles, 0, sizeof(clViewangles));
  return 1i64;
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

