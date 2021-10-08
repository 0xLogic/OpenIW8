/*
==============
CL_InputMP_WritePacket
==============
*/

void __fastcall CL_InputMP_WritePacket(LocalClientNum_t localClientNum)
{
  ?CL_InputMP_WritePacket@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_InputMP_CreateCmd
==============
*/

usercmd_s *__fastcall CL_InputMP_CreateCmd(usercmd_s *result, LocalClientNum_t localClientNum, ButtonSet *outClearButtons)
{
  return ?CL_InputMP_CreateCmd@@YA?AUusercmd_s@@W4LocalClientNum_t@@AEAUButtonSet@@@Z(result, localClientNum, outClearButtons);
}

/*
==============
CL_InputMP_CreateCmd
==============
*/
usercmd_s *CL_InputMP_CreateCmd(usercmd_s *result, LocalClientNum_t localClientNum, ButtonSet *outClearButtons)
{
  __int64 v6; 
  ClActiveClientMP *ClientMP; 
  __int64 v15; 
  __int64 v23; 
  bool v31; 
  __int64 v32; 
  __int64 v38; 
  int ControllerFromClient; 
  const dvar_t *v50; 
  __int64 v54; 
  usercmd_s *v60; 
  float fmt; 
  float fmta; 
  __int64 v64; 
  __int64 v65; 
  float my; 
  float mx; 
  vec3_t oldAngles; 
  __int64 v69; 
  usercmd_s cmd; 
  void *retaddr; 

  _RAX = &retaddr;
  v69 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v6 = localClientNum;
  _R13 = CG_GetLocalClientGlobals(localClientNum);
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v6);
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  LODWORD(oldAngles.v[0]) = LODWORD(ClientMP->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)ClientMP + 428) ^ ClientMP->clviewangles_aab) * ((((_DWORD)ClientMP + 428) ^ ClientMP->clviewangles_aab) + 2));
  LODWORD(oldAngles.v[1]) = LODWORD(ClientMP->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)ClientMP + 432) ^ ClientMP->clviewangles_aab) * ((((_DWORD)ClientMP + 432) ^ ClientMP->clviewangles_aab) + 2));
  LODWORD(oldAngles.v[2]) = ((((_DWORD)ClientMP + 436) ^ ClientMP->clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ ClientMP->clviewangles_aab) + 2)) ^ LODWORD(ClientMP->clViewangles.clViewangles.v[2]);
  CL_InputMP_AdjustViewanglesForKeyboard((LocalClientNum_t)v6);
  memset_0(&cmd, 0, sizeof(cmd));
  cmd.meleeChargeEnt = 2047;
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0B5328h]
    vmovups xmmword ptr [rbp+0D0h+cmd.sightedClientsMask.data], xmm0
    vmovsd  xmm1, qword ptr [r13+0B5338h]
    vmovsd  qword ptr [rbp+0D0h+cmd.sightedClientsMask.data+10h], xmm1
  }
  cmd.sightedClientsMask.data[6] = _R13->sightedEnemyFools.array[6];
  cmd.lightSample = _R13->lightSample;
  CG_ClientNetPerf_GetData((const LocalClientNum_t)v6, &cmd.extrapolationMax, &cmd.interpolationMax);
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v6) )
    __debugbreak();
  if ( (unsigned int)v6 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v65) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v64) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v64, v65) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v6] )
  {
    LODWORD(v65) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v65) )
      __debugbreak();
  }
  CgVehicleSystem::PhysicsUpdateCmdValues(CgVehicleSystem::ms_vehicleSystemArray[v6], &cmd);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1D0h+mx], xmm0
    vmovss  [rsp+1D0h+my], xmm0
  }
  CL_Input_ValidateMouseMovementCalls();
  CL_Input_GetMouseMovement((LocalClientNum_t)v6, &mx, &my);
  if ( CL_InputMP_ProcessFrontendCommand((LocalClientNum_t)v6) )
  {
    CL_InputMP_FrontEndMove((LocalClientNum_t)v6, &cmd);
    CL_InputMP_FinishMove((LocalClientNum_t)v6, &cmd, outClearButtons);
    memset(&oldAngles, 0, sizeof(oldAngles));
    _RDX = result;
    _RCX = &cmd;
    v15 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymm0, ymmword ptr [rcx+20h]
        vmovups ymmword ptr [rdx+20h], ymm0
        vmovups ymm0, ymmword ptr [rcx+40h]
        vmovups ymmword ptr [rdx+40h], ymm0
        vmovups xmm0, xmmword ptr [rcx+60h]
        vmovups xmmword ptr [rdx+60h], xmm0
      }
      _RDX = (usercmd_s *)((char *)_RDX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rcx+70h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      _RCX = (usercmd_s *)((char *)_RCX + 128);
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v6, 8) && !CL_Keys_IsCatcherActive((LocalClientNum_t)v6, 16) )
      goto LABEL_30;
    if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v6, 64) )
      goto LABEL_30;
    __asm
    {
      vmovss  xmm3, [rsp+1D0h+my]; my
      vmovss  xmm2, [rsp+1D0h+mx]; mx
    }
    if ( CL_Input_LocationSelection((const LocalClientNum_t)v6, &cmd, *(float *)&_XMM2, *(float *)&_XMM3, outClearButtons) )
    {
      CL_InputMP_FinishMove((LocalClientNum_t)v6, &cmd, outClearButtons);
      memset(&oldAngles, 0, sizeof(oldAngles));
      _RDX = result;
      _RCX = &cmd;
      v23 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rdx+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rdx+40h], ymm0
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rdx+60h], xmm0
        }
        _RDX = (usercmd_s *)((char *)_RDX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rcx+70h]
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        _RCX = (usercmd_s *)((char *)_RCX + 128);
        --v23;
      }
      while ( v23 );
    }
    else
    {
LABEL_30:
      if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v6, 64) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ClientMP->snap.ps.pm_flags, ACTIVE, 0x1Cu) )
        goto LABEL_49;
      __asm
      {
        vmovss  xmm0, [rsp+1D0h+my]
        vmovss  dword ptr [rsp+1D0h+fmt], xmm0
        vmovss  xmm3, [rsp+1D0h+mx]; mx
      }
      CL_InputMP_RemoteControlMove((LocalClientNum_t)v6, &cmd, outClearButtons, *(float *)&_XMM3, fmt);
      if ( _R13->predictedPlayerState.pm_type == 5 || (v31 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R13->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u)) )
        v31 = 1;
      if ( ClientMP->snap.ps.viewlocked_entNum != 2047 || v31 )
      {
LABEL_49:
        if ( CL_Cameraman_isActive() )
        {
          CL_InputMP_FinishMove((LocalClientNum_t)v6, &cmd, outClearButtons);
          memset(&oldAngles, 0, sizeof(oldAngles));
          _RDX = result;
          _RCX = &cmd;
          v38 = 2i64;
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rcx]
              vmovups ymmword ptr [rdx], ymm0
              vmovups ymm0, ymmword ptr [rcx+20h]
              vmovups ymmword ptr [rdx+20h], ymm0
              vmovups ymm0, ymmword ptr [rcx+40h]
              vmovups ymmword ptr [rdx+40h], ymm0
              vmovups xmm0, xmmword ptr [rcx+60h]
              vmovups xmmword ptr [rdx+60h], xmm0
            }
            _RDX = (usercmd_s *)((char *)_RDX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rcx+70h]
              vmovups xmmword ptr [rdx-10h], xmm1
            }
            _RCX = (usercmd_s *)((char *)_RCX + 128);
            --v38;
          }
          while ( v38 );
        }
        else
        {
          CL_InputMP_CmdButtons((LocalClientNum_t)v6, &cmd, outClearButtons);
          CL_InputMP_KeyMove((LocalClientNum_t)v6, &cmd, outClearButtons);
          CG_LatencyTestMP_Move((LocalClientNum_t)v6, &cmd);
          __asm { vmovss  xmm0, cs:?cls@@3UClStatic@@A.frametime_base; sec }
          *(double *)&_XMM0 = Com_ViewScaleMsec(*(float *)&_XMM0);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovss  xmm1, [rsp+1D0h+my]
            vmovss  dword ptr [rsp+1D0h+fmt], xmm1
            vmovss  xmm3, [rsp+1D0h+mx]; rawMx
            vmovaps xmm2, xmm0; frametime_base
          }
          CL_InputMP_MouseMove((LocalClientNum_t)v6, &cmd, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
          if ( GPad_IsActive(ControllerFromClient) )
            goto LABEL_43;
          v50 = DVARBOOL_ATClient_Enabled;
          if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v50);
          if ( v50->current.enabled )
          {
LABEL_43:
            __asm { vmovaps xmm1, xmm6; frametime_base }
            CL_InputMP_GamepadMove((LocalClientNum_t)v6, *(float *)&_XMM1, &cmd, outClearButtons);
          }
          __asm
          {
            vmovss  dword ptr [r13+65E8h], xmm6
            vmulss  xmm0, xmm6, cs:__real@447a0000
            vcvttss2si eax, xmm0
          }
          ClientMP->cmdInputAccumTimeMs += _EAX;
          CL_InputMP_UpdateAngleWrap(ClientMP, &oldAngles);
          CL_InputMP_UpdateCmdDemoInput((LocalClientNum_t)v6, ClientMP);
          CL_InputMP_FinishMove((LocalClientNum_t)v6, &cmd, outClearButtons);
          memset(&oldAngles, 0, sizeof(oldAngles));
          _RDX = result;
          _RCX = &cmd;
          v54 = 2i64;
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rcx]
              vmovups ymmword ptr [rdx], ymm0
              vmovups ymm0, ymmword ptr [rcx+20h]
              vmovups ymmword ptr [rdx+20h], ymm0
              vmovups ymm0, ymmword ptr [rcx+40h]
              vmovups ymmword ptr [rdx+40h], ymm0
              vmovups xmm0, xmmword ptr [rcx+60h]
              vmovups xmmword ptr [rdx+60h], xmm0
            }
            _RDX = (usercmd_s *)((char *)_RDX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rcx+70h]
              vmovups xmmword ptr [rdx-10h], xmm1
            }
            _RCX = (usercmd_s *)((char *)_RCX + 128);
            --v54;
          }
          while ( v54 );
        }
      }
      else
      {
        CL_InputMP_FinishMove((LocalClientNum_t)v6, &cmd, outClearButtons);
        memset(&oldAngles, 0, sizeof(oldAngles));
        _RDX = result;
        _RCX = &cmd;
        v32 = 2i64;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rcx]
            vmovups ymmword ptr [rdx], ymm0
            vmovups ymm0, ymmword ptr [rcx+20h]
            vmovups ymmword ptr [rdx+20h], ymm0
            vmovups ymm0, ymmword ptr [rcx+40h]
            vmovups ymmword ptr [rdx+40h], ymm0
            vmovups xmm0, xmmword ptr [rcx+60h]
            vmovups xmmword ptr [rdx+60h], xmm0
          }
          _RDX = (usercmd_s *)((char *)_RDX + 128);
          __asm
          {
            vmovups xmm1, xmmword ptr [rcx+70h]
            vmovups xmmword ptr [rdx-10h], xmm1
          }
          _RCX = (usercmd_s *)((char *)_RCX + 128);
          --v32;
        }
        while ( v32 );
      }
    }
  }
  _RDX->buttons = _RCX->buttons;
  v60 = result;
  __asm { vmovaps xmm6, xmmword ptr [rsp+1D0h+var_48+8] }
  return v60;
}

/*
==============
CL_InputMP_CreateNewCommands
==============
*/

void __fastcall CL_InputMP_CreateNewCommands(LocalClientNum_t localClientNum, double _XMM1_8)
{
  ClActiveClientMP *ClientMP; 
  __int64 v7; 
  int UserCommandConstantMsec; 
  int svCmdMaxDurationMsec; 
  unsigned int v16; 
  char CmdNumber; 
  unsigned __int64 v18; 
  unsigned __int64 cmdAccumTimeUsec; 
  unsigned __int64 cmdTimeUsec; 
  char v33[4]; 
  usercmd_s result; 
  ButtonSet outClearButtons; 
  usercmd_s cmd; 

  outClearButtons.contextMountButton = 68;
  *(_QWORD *)outClearButtons.array = 0i64;
  outClearButtons.array[2] = 0;
  *(_WORD *)&outClearButtons.locationSelectButton = 0;
  outClearButtons.spectatorThirdPersonButton = 0;
  if ( CL_InputMP_IsReadyForUserCommand(localClientNum) )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    if ( CL_GetLocalClientMigrationState(localClientNum) == CMSTATE_INACTIVE || CL_GetLocalClientMigrationState(localClientNum) == CMSTATE_NEWHOSTCONNECT )
    {
      _RAX = CL_InputMP_CreateCmd(&result, localClientNum, &outClearButtons);
      _RCX = &cmd;
      v7 = 2i64;
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
        --v7;
      }
      while ( v7 );
      _RCX->buttons = _RAX->buttons;
    }
    else
    {
      memset_0(&cmd, 0, sizeof(cmd));
      BG_ClearMeleeChargeCmd(&cmd);
    }
    if ( Com_UseConstantUserCommandTime() )
    {
      UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
      svCmdMaxDurationMsec = ClientMP->svCmdMaxDurationMsec;
      v16 = UserCommandConstantMsec;
      if ( svCmdMaxDurationMsec < UserCommandConstantMsec )
        v16 = ClientMP->svCmdMaxDurationMsec;
      if ( svCmdMaxDurationMsec > v16 )
      {
        CmdNumber = ClActiveClient_GetCmdNumber(ClientMP);
        if ( ((cmd.buttons ^ ClientMP->cmds[CmdNumber & 0x7F].buttons) & 0x1000010004003CDi64) == 0 )
          v16 = svCmdMaxDurationMsec;
        memset(v33, 0, sizeof(v33));
      }
      v18 = 1000i64 * v16;
      *(double *)&_XMM0 = Com_GetTimescaleForSv();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rdi
      }
      if ( (v18 & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
      __asm
      {
        vmovss  xmm2, cs:__real@5f000000
        vmulss  xmm0, xmm0, xmm1
        vcomiss xmm0, xmm2
        vsubss  xmm0, xmm0, xmm2
        vcomiss xmm0, xmm2
        vcvttss2si rsi, xmm0
      }
      if ( ClientMP->cmdAccumTimeUsec >= v18 )
      {
        CL_Input_CycleWeapon(localClientNum, &cmd);
        CL_Input_HoldBreathHybridAndVZoomToggle(localClientNum, &cmd);
        cmdAccumTimeUsec = ClientMP->cmdAccumTimeUsec;
        if ( cmdAccumTimeUsec >= v18 )
        {
          cmdTimeUsec = ClientMP->cmdTimeUsec;
          do
          {
            cmdTimeUsec += _RSI;
            cmdAccumTimeUsec -= v18;
          }
          while ( cmdAccumTimeUsec >= v18 );
          ClientMP->cmdAccumTimeUsec = cmdAccumTimeUsec;
          ClientMP->cmdTimeUsec = cmdTimeUsec;
        }
        if ( CL_Input_AddCommand(ClientMP, &cmd) )
          CL_InputMP_ClearButtonsPressed(localClientNum, &outClearButtons);
      }
      *(double *)&_XMM0 = Com_GetTimescaleForSv();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
      }
      if ( (ClientMP->cmdAccumTimeUsec & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
      __asm
      {
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcvttss2si r8d, xmm1; deltaTime
      }
      CL_Input_SetExtrapolationCommand(ClientMP, &cmd, _ER8);
    }
    else
    {
      CL_Input_CycleWeapon(localClientNum, &cmd);
      CL_Input_HoldBreathHybridAndVZoomToggle(localClientNum, &cmd);
      CL_Input_AddCommand(ClientMP, &cmd);
      CL_InputMP_ClearButtonsPressed(localClientNum, &outClearButtons);
    }
  }
}

/*
==============
CL_InputMP_WritePacket
==============
*/
void CL_InputMP_WritePacket(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  ClConnectionMP *ClientConnectionMP; 
  ClActiveClientMP *ClientMP; 
  CmdPredict *p_outCmdPredict; 
  int v5; 
  int serverMessageConsecutiveValid; 
  int PacketBackupCount; 
  unsigned __int8 v8; 
  int v9; 
  CircularEntryBuffer<128,131072,int,0> *p_clientReliableCommands; 
  __int64 v11; 
  int size; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  int CmdNumber; 
  const dvar_t *v16; 
  int messageAcknowledge; 
  int p_cmdNumber; 
  const dvar_t *v19; 
  bool v20; 
  const dvar_t *v21; 
  bool v22; 
  ClConnectionMP *v23; 
  int v24; 
  int serverCommandSequence; 
  unsigned int offset; 
  unsigned __int16 v27; 
  __int64 v28; 
  const char *v29; 
  int v30; 
  const char *v31; 
  int v32; 
  unsigned int v33; 
  const dvar_t *v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned __int8 *v37; 
  __int64 v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned __int8 *v44; 
  __int64 v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  const dvar_t *v76; 
  int ControllerFromClient; 
  const char *UsernameForLocalClient; 
  unsigned int v79; 
  int v80; 
  usercmd_s *v81; 
  const dvar_t *v82; 
  int v83; 
  unsigned int v84; 
  unsigned __int8 *v85; 
  __int64 v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned __int8 *v92; 
  __int64 v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  unsigned int v108; 
  unsigned int v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int v113; 
  unsigned int v114; 
  unsigned int v115; 
  unsigned int v116; 
  unsigned int v117; 
  unsigned int v118; 
  unsigned int v119; 
  unsigned int v120; 
  unsigned int v121; 
  unsigned int v122; 
  CmdPredict *v123; 
  bool v124; 
  int cursize; 
  int v128; 
  int realtime; 
  ClOutPacketMP *v130; 
  int reliableSent; 
  int v132; 
  int v133; 
  int reliableSequence; 
  const dvar_t *v135; 
  const char *String; 
  int v137; 
  char *fmt; 
  CmdPredict *outPredict; 
  CmdPredict *outPredicta; 
  __int64 v141; 
  __int64 v142; 
  __int64 v143; 
  unsigned __int8 outCmdDelta[4]; 
  LocalClientNum_t clientNum; 
  int outCurSize[2]; 
  unsigned __int8 *outBuf; 
  ClActiveClientMP *v148; 
  ClConnectionMP *v149; 
  msg_t buf; 
  unsigned __int8 *v151; 
  CmdPredict *v152; 
  usercmd_s *from; 
  __int64 v154; 
  ClOutPacketMP outPacket; 
  __int64 v156; 
  usercmd_s outCmd; 
  CmdPredict v158; 
  CmdPredict outCmdPredict; 
  unsigned __int8 v160[8]; 
  __int16 v161; 
  unsigned __int8 to[2470]; 
  unsigned __int8 data[2480]; 

  v156 = -2i64;
  v1 = localClientNum;
  clientNum = localClientNum;
  if ( CL_Demo_IsPlayingAny(localClientNum) || CL_GetLocalClientAnyConnectionState(v1) == CA_SENDINGSTATS )
    return;
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(v1);
  v149 = ClientConnectionMP;
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 157, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(v1);
  v148 = ClientMP;
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 453, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v152 = &v158;
  p_outCmdPredict = &outCmdPredict;
  if ( !CL_InputMP_GetCommandDelta(v1, ClientMP, ClientConnectionMP, outCmdDelta, &outCmd, &v158) )
  {
    memset_0(&outCmd, 0, sizeof(outCmd));
    BG_ClearMeleeChargeCmd(&outCmd);
    memset(&v158, 0, sizeof(v158));
    outCmdDelta[0] = 0;
  }
  from = &outCmd;
  v5 = 0;
  outCurSize[1] = 0;
  memset(&buf, 0, sizeof(buf));
  MSG_Init(&buf, data, 2474);
  MSG_WriteByte(&buf, ClientMP->serverId);
  if ( ClientConnectionMP->m_connectionData.serverMessageSequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 481, ASSERT_TYPE_ASSERT, "( clcData->serverMessageSequence ) >= ( 0 )", "%s >= %s\n\t%i, %i", "clcData->serverMessageSequence", "0", ClientConnectionMP->m_connectionData.serverMessageSequence, 0i64) )
    __debugbreak();
  if ( ClientConnectionMP->m_connectionData.serverMessageConsecutiveValid < 0 )
  {
    LODWORD(v142) = ClientConnectionMP->m_connectionData.serverMessageConsecutiveValid;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 482, ASSERT_TYPE_ASSERT, "( clcData->serverMessageConsecutiveValid ) >= ( 0 )", "%s >= %s\n\t%i, %i", "clcData->serverMessageConsecutiveValid", "0", v142, 0i64) )
      __debugbreak();
  }
  MSG_WriteLong(&buf, ClientConnectionMP->m_connectionData.serverMessageSequence);
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v142) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v142, 0i64) )
      __debugbreak();
  }
  if ( ClientConnectionMP->m_packetBackupCount > 255 )
  {
    LODWORD(v143) = 255;
    LODWORD(v142) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 491, ASSERT_TYPE_ASSERT, "( clc->GetPacketBackupCount() ) <= ( 0xffui8 )", "%s <= %s\n\t%i, %i", "clc->GetPacketBackupCount()", "UINT8_MAX", v142, v143) )
      __debugbreak();
  }
  serverMessageConsecutiveValid = ClientConnectionMP->m_connectionData.serverMessageConsecutiveValid;
  PacketBackupCount = ClConnectionMP::GetPacketBackupCount(ClientConnectionMP);
  if ( PacketBackupCount < serverMessageConsecutiveValid )
    serverMessageConsecutiveValid = PacketBackupCount;
  v8 = truncate_cast<unsigned char,int>(serverMessageConsecutiveValid);
  MSG_WriteByte(&buf, v8);
  MSG_WriteLong(&buf, ClientConnectionMP->m_connectionData.serverCommandSequence);
  if ( buf.cursize != 10 )
  {
    LODWORD(v143) = 10;
    LODWORD(v142) = buf.cursize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 498, ASSERT_TYPE_ASSERT, "( buf.cursize ) == ( 10 )", "%s == %s\n\t%i, %i", "buf.cursize", "CL_ENCODE_START", v142, v143) )
      __debugbreak();
  }
  v9 = ClientConnectionMP->m_connectionData.reliableAcknowledge + 1;
  if ( v9 <= ClientConnectionMP->m_connectionData.reliableSequence )
  {
    p_clientReliableCommands = &ClientConnectionMP->m_connectionData.clientReliableCommands;
    do
    {
      v11 = v9 & 0x7F;
      if ( CircularEntryBuffer<128,131072,int,0>::GetData(p_clientReliableCommands, v9 & 0x7F, (const unsigned __int8 **)&outBuf) )
      {
        MSG_WriteBits(&buf, 2i64, 3u);
        MSG_WriteLong(&buf, v9);
        if ( ClientConnectionMP->m_connectionData.clientReliableCommands.m_entries[v11].type == 1 )
        {
          size = p_clientReliableCommands->m_entries[v11].size;
          CircularEntryBuffer<128,131072,int,0>::GetData(p_clientReliableCommands, v9 & 0x7F, (const unsigned __int8 **)&v151);
          v13 = v151;
          if ( *v151 != 89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 519, ASSERT_TYPE_ASSERT, "(commandData[0] == 'Y')", (const char *)&queryFormat, "commandData[0] == SVSCMD_BINARY_COMMAND") )
            __debugbreak();
          MSG_WriteData(&buf, v13, size);
          ClientConnectionMP = v149;
        }
        else
        {
          v14 = outBuf;
          if ( *outBuf == 89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 525, ASSERT_TYPE_ASSERT, "(reliableCmd[0] != 'Y')", (const char *)&queryFormat, "reliableCmd[0] != SVSCMD_BINARY_COMMAND") )
            __debugbreak();
          MSG_WriteString(&buf, (const char *)v14);
        }
      }
      else if ( !ClientConnectionMP->m_connectionData.reliableOverflow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 532, ASSERT_TYPE_ASSERT, "(clcData->reliableOverflow)", "%s\n\tShould only fail to get command data when overflow is detected", "clcData->reliableOverflow") )
      {
        __debugbreak();
      }
      ++v9;
    }
    while ( v9 <= ClientConnectionMP->m_connectionData.reliableSequence );
    p_outCmdPredict = &outCmdPredict;
    v5 = outCurSize[1];
    ClientMP = v148;
    v1 = clientNum;
  }
  CmdNumber = ClActiveClient_GetCmdNumber(ClientMP);
  outCurSize[1] = CmdNumber;
  if ( CL_InputMP_IsReadyForUserCommand(v1) )
  {
    if ( ClientConnectionMP->m_connectionData.netchan.outgoingSequence <= 0 )
    {
      p_cmdNumber = 0;
    }
    else
    {
      v16 = DVARINT_cl_packetdup;
      if ( !DVARINT_cl_packetdup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_packetdup") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      messageAcknowledge = ClientConnectionMP->m_connectionData.netchan.outgoingSequence - v16->current.integer - 1;
      if ( ClientConnectionMP->m_connectionData.messageAcknowledge > messageAcknowledge )
        messageAcknowledge = ClientConnectionMP->m_connectionData.messageAcknowledge;
      if ( ClConnectionMP::GetPacketBackup(ClientConnectionMP, messageAcknowledge, &outPacket) )
      {
        p_cmdNumber = outPacket.p_cmdNumber;
      }
      else
      {
        p_cmdNumber = CmdNumber - 32;
        if ( CmdNumber - 32 < 0 )
          p_cmdNumber = 0;
      }
    }
    v5 = CmdNumber - p_cmdNumber;
    if ( CmdNumber - p_cmdNumber > 32 )
    {
      v5 = 32;
      Com_Printf(14, "MAX_PACKET_USERCMDS\n");
      goto LABEL_61;
    }
    if ( v5 >= 1 )
    {
LABEL_61:
      v19 = DVARBOOL_cl_showSend;
      if ( !DVARBOOL_cl_showSend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showSend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
        Com_Printf(14, "(%i)", (unsigned int)v5);
      if ( !CL_Demo_IsPlayingAny(v1) )
        MSG_UserCmd_EnableWriteData();
      v20 = ClientMP->snap.state == BOOL_VALUE && ClientConnectionMP->m_connectionData.serverMessageSequence == ClientMP->snap.messageNum;
      v21 = DVARBOOL_cl_nodelta;
      if ( !DVARBOOL_cl_nodelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_nodelta") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v22 = 0;
      if ( !v21->current.enabled )
        v22 = v20;
      MSG_WriteBits(&buf, !v22, 3u);
      MSG_WriteByte(&buf, outCmdDelta[0]);
      MSG_WriteByte(&buf, v5);
      MSG_WriteLong(&buf, ClientMP->svCmdCurrentErrorUsec / 1000);
      v23 = v149;
      v24 = v149->m_connectionData.checksumFeed ^ ClientConnectionMP->m_connectionData.serverMessageSequence;
      serverCommandSequence = v149->m_connectionData.serverCommandSequence;
      LODWORD(v148) = serverCommandSequence & 0x1FF;
      offset = v149->m_connectionData.serverReliableCommands.m_entries[serverCommandSequence & 0x1FF].offset;
      if ( v149->m_connectionData.serverReliableCommands.m_bufferNextIndex - offset <= 0x20000 && (v27 = v149->m_connectionData.serverReliableCommands.m_entries[(unsigned int)v148].size) != 0 )
      {
        v28 = offset & 0x1FFFF;
        if ( (unsigned int)v28 + v27 > 0x20000 )
        {
          LODWORD(v143) = 0x20000;
          LODWORD(v142) = v28 + v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v142, v143) )
            __debugbreak();
        }
        v29 = (const char *)&v23->m_connectionData.serverReliableCommands.m_buffer[v28];
      }
      else
      {
        outBuf = NULL;
        if ( serverCommandSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 629, ASSERT_TYPE_ASSERT, "(clcData->serverCommandSequence == 0)", "%s\n\tThis should only happen before we start receiving sequences from the server", "clcData->serverCommandSequence == 0") )
          __debugbreak();
        v29 = (char *)&queryFormat.fmt + 3;
      }
      v30 = 0;
      if ( *v29 )
      {
        v31 = v29;
        do
        {
          if ( v31 - v29 >= 32 )
            break;
          v32 = *(unsigned __int8 *)v31++;
          v30 = v32 ^ (16777619 * v30);
        }
        while ( *v31 );
      }
      v33 = v30 ^ v24;
      LODWORD(v151) = v33;
      v34 = DVARBOOL_cl_debugMessageKey;
      outBuf = (unsigned __int8 *)DVARBOOL_cl_debugMessageKey;
      if ( !DVARBOOL_cl_debugMessageKey )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_debugMessageKey") )
          __debugbreak();
        v34 = (const dvar_t *)outBuf;
      }
      Dvar_CheckFrontendServerThread(v34);
      if ( outBuf[40] )
      {
        v35 = -1i64;
        do
          ++v35;
        while ( v29[v35] );
        LODWORD(v143) = v35;
        LODWORD(v141) = (_DWORD)v148;
        LODWORD(outPredict) = v30;
        LODWORD(fmt) = v149->m_connectionData.serverMessageSequence;
        Com_Printf(14, "key:%i, checksumFeed:%i, messageAcknowledge:%i, reliableCmdHash:%u, servercommand(%i):'%s', len:%i\n", v33, (unsigned int)v149->m_connectionData.checksumFeed, fmt, outPredict, v141, v29, v143);
      }
      v36 = -1;
      v37 = (unsigned __int8 *)&outCmd.buttons + 2;
      v38 = 44i64;
      do
      {
        v39 = (v36 >> 8) ^ g_crc32Table[*(v37 - 2) ^ (unsigned __int64)(unsigned __int8)v36];
        v40 = (v39 >> 8) ^ g_crc32Table[*(v37 - 1) ^ (unsigned __int64)(unsigned __int8)v39];
        v41 = (v40 >> 8) ^ g_crc32Table[*v37 ^ (unsigned __int64)(unsigned __int8)v40];
        v42 = (v41 >> 8) ^ g_crc32Table[v37[1] ^ (unsigned __int64)(unsigned __int8)v41];
        v43 = (v42 >> 8) ^ g_crc32Table[v37[2] ^ (unsigned __int64)(unsigned __int8)v42];
        v36 = (v43 >> 8) ^ g_crc32Table[v37[3] ^ (unsigned __int64)(unsigned __int8)v43];
        v37 += 6;
        --v38;
      }
      while ( v38 );
      v44 = (unsigned __int8 *)&v158.origin.x + 2;
      v45 = 2i64;
      do
      {
        v46 = (v36 >> 8) ^ g_crc32Table[(unsigned __int8)v36 ^ (unsigned __int64)*(v44 - 2)];
        v47 = (v46 >> 8) ^ g_crc32Table[(unsigned __int8)v46 ^ (unsigned __int64)*(v44 - 1)];
        v48 = (v47 >> 8) ^ g_crc32Table[*v44 ^ (unsigned __int64)(unsigned __int8)v47];
        v49 = (v48 >> 8) ^ g_crc32Table[(unsigned __int8)v48 ^ (unsigned __int64)v44[1]];
        v50 = (v49 >> 8) ^ g_crc32Table[(unsigned __int8)v49 ^ (unsigned __int64)v44[2]];
        v51 = (v50 >> 8) ^ g_crc32Table[(unsigned __int8)v50 ^ (unsigned __int64)v44[3]];
        v52 = (v51 >> 8) ^ g_crc32Table[(unsigned __int8)v51 ^ (unsigned __int64)v44[4]];
        v53 = (v52 >> 8) ^ g_crc32Table[(unsigned __int8)v52 ^ (unsigned __int64)v44[5]];
        v54 = (v53 >> 8) ^ g_crc32Table[(unsigned __int8)v53 ^ (unsigned __int64)v44[6]];
        v55 = (v54 >> 8) ^ g_crc32Table[(unsigned __int8)v54 ^ (unsigned __int64)v44[7]];
        v56 = (v55 >> 8) ^ g_crc32Table[(unsigned __int8)v55 ^ (unsigned __int64)v44[8]];
        v57 = (v56 >> 8) ^ g_crc32Table[(unsigned __int8)v56 ^ (unsigned __int64)v44[9]];
        v58 = (v57 >> 8) ^ g_crc32Table[(unsigned __int8)v57 ^ (unsigned __int64)v44[10]];
        v59 = (v58 >> 8) ^ g_crc32Table[(unsigned __int8)v58 ^ (unsigned __int64)v44[11]];
        v60 = (v59 >> 8) ^ g_crc32Table[(unsigned __int8)v59 ^ (unsigned __int64)v44[12]];
        v61 = (v60 >> 8) ^ g_crc32Table[(unsigned __int8)v60 ^ (unsigned __int64)v44[13]];
        v62 = (v61 >> 8) ^ g_crc32Table[(unsigned __int8)v61 ^ (unsigned __int64)v44[14]];
        v63 = (v62 >> 8) ^ g_crc32Table[(unsigned __int8)v62 ^ (unsigned __int64)v44[15]];
        v64 = (v63 >> 8) ^ g_crc32Table[(unsigned __int8)v63 ^ (unsigned __int64)v44[16]];
        v65 = (v64 >> 8) ^ g_crc32Table[(unsigned __int8)v64 ^ (unsigned __int64)v44[17]];
        v66 = (v65 >> 8) ^ g_crc32Table[(unsigned __int8)v65 ^ (unsigned __int64)v44[18]];
        v67 = (v66 >> 8) ^ g_crc32Table[(unsigned __int8)v66 ^ (unsigned __int64)v44[19]];
        v68 = (v67 >> 8) ^ g_crc32Table[(unsigned __int8)v67 ^ (unsigned __int64)v44[20]];
        v69 = (v68 >> 8) ^ g_crc32Table[(unsigned __int8)v68 ^ (unsigned __int64)v44[21]];
        v70 = (v69 >> 8) ^ g_crc32Table[(unsigned __int8)v69 ^ (unsigned __int64)v44[22]];
        v71 = (v70 >> 8) ^ g_crc32Table[(unsigned __int8)v70 ^ (unsigned __int64)v44[23]];
        v72 = (v71 >> 8) ^ g_crc32Table[(unsigned __int8)v71 ^ (unsigned __int64)v44[24]];
        v73 = (v72 >> 8) ^ g_crc32Table[(unsigned __int8)v72 ^ (unsigned __int64)v44[25]];
        v74 = (v73 >> 8) ^ g_crc32Table[(unsigned __int8)v73 ^ (unsigned __int64)v44[26]];
        v36 = (v74 >> 8) ^ g_crc32Table[(unsigned __int8)v74 ^ (unsigned __int64)v44[27]];
        v44 += 30;
        --v45;
      }
      while ( v45 );
      v75 = ~v36;
      MSG_WriteLong(&buf, v75);
      v76 = DVARBOOL_cl_usercmd_print;
      if ( !DVARBOOL_cl_usercmd_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_usercmd_print") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v76);
      if ( v76->current.enabled )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
        UsernameForLocalClient = CL_GetUsernameForLocalClient(ControllerFromClient);
        LODWORD(v141) = v75;
        LODWORD(outPredict) = outCmd.commandTime;
        LODWORD(fmt) = v149->m_connectionData.netchan.outgoingSequence;
        Com_Printf(16, "CL[%s] -- writing %d commands in packet %d from command time %d with baseline %d\n", UsernameForLocalClient, (unsigned int)v5, fmt, outPredict, v141);
      }
      v79 = 1;
      v80 = ~v5;
      LODWORD(v148) = ~v5;
      outBuf = (unsigned __int8 *)(unsigned int)v5;
      do
      {
        v154 = (__int64)ClientMP + 264 * (((unsigned __int8)v80 + (unsigned __int8)v79 + (unsigned __int8)CmdNumber + 1) & 0x7F);
        v81 = (usercmd_s *)(v154 + 472);
        ClActiveClientMP::GetPredictedData(ClientMP, v80 + v79 + CmdNumber + 1, p_outCmdPredict);
        v82 = DVARBOOL_cl_usercmd_print;
        if ( !DVARBOOL_cl_usercmd_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_usercmd_print") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v82);
        if ( v82->current.enabled )
        {
          v83 = CL_Mgr_GetControllerFromClient(clientNum);
          *(_QWORD *)&outPacket.p_packetSeq = CL_GetUsernameForLocalClient(v83);
          v84 = -1;
          v85 = (unsigned __int8 *)&v81->buttons + 2;
          v86 = 44i64;
          do
          {
            v87 = (v84 >> 8) ^ g_crc32Table[(unsigned __int8)v84 ^ (unsigned __int64)*(v85 - 2)];
            v88 = (v87 >> 8) ^ g_crc32Table[(unsigned __int8)v87 ^ (unsigned __int64)*(v85 - 1)];
            v89 = (v88 >> 8) ^ g_crc32Table[*v85 ^ (unsigned __int64)(unsigned __int8)v88];
            v90 = (v89 >> 8) ^ g_crc32Table[(unsigned __int8)v89 ^ (unsigned __int64)v85[1]];
            v91 = (v90 >> 8) ^ g_crc32Table[(unsigned __int8)v90 ^ (unsigned __int64)v85[2]];
            v84 = (v91 >> 8) ^ g_crc32Table[(unsigned __int8)v91 ^ (unsigned __int64)v85[3]];
            v85 += 6;
            --v86;
          }
          while ( v86 );
          v92 = (unsigned __int8 *)&p_outCmdPredict->origin.x + 2;
          v93 = 2i64;
          CmdNumber = outCurSize[1];
          do
          {
            v94 = (v84 >> 8) ^ g_crc32Table[*(v92 - 2) ^ (unsigned __int64)(unsigned __int8)v84];
            v95 = (v94 >> 8) ^ g_crc32Table[*(v92 - 1) ^ (unsigned __int64)(unsigned __int8)v94];
            v96 = (v95 >> 8) ^ g_crc32Table[*v92 ^ (unsigned __int64)(unsigned __int8)v95];
            v97 = (v96 >> 8) ^ g_crc32Table[v92[1] ^ (unsigned __int64)(unsigned __int8)v96];
            v98 = (v97 >> 8) ^ g_crc32Table[v92[2] ^ (unsigned __int64)(unsigned __int8)v97];
            v99 = (v98 >> 8) ^ g_crc32Table[v92[3] ^ (unsigned __int64)(unsigned __int8)v98];
            v100 = (v99 >> 8) ^ g_crc32Table[v92[4] ^ (unsigned __int64)(unsigned __int8)v99];
            v101 = (v100 >> 8) ^ g_crc32Table[v92[5] ^ (unsigned __int64)(unsigned __int8)v100];
            v102 = (v101 >> 8) ^ g_crc32Table[v92[6] ^ (unsigned __int64)(unsigned __int8)v101];
            v103 = (v102 >> 8) ^ g_crc32Table[v92[7] ^ (unsigned __int64)(unsigned __int8)v102];
            v104 = (v103 >> 8) ^ g_crc32Table[v92[8] ^ (unsigned __int64)(unsigned __int8)v103];
            v105 = (v104 >> 8) ^ g_crc32Table[v92[9] ^ (unsigned __int64)(unsigned __int8)v104];
            v106 = (v105 >> 8) ^ g_crc32Table[v92[10] ^ (unsigned __int64)(unsigned __int8)v105];
            v107 = (v106 >> 8) ^ g_crc32Table[v92[11] ^ (unsigned __int64)(unsigned __int8)v106];
            v108 = (v107 >> 8) ^ g_crc32Table[v92[12] ^ (unsigned __int64)(unsigned __int8)v107];
            v109 = (v108 >> 8) ^ g_crc32Table[v92[13] ^ (unsigned __int64)(unsigned __int8)v108];
            v110 = (v109 >> 8) ^ g_crc32Table[v92[14] ^ (unsigned __int64)(unsigned __int8)v109];
            v111 = (v110 >> 8) ^ g_crc32Table[v92[15] ^ (unsigned __int64)(unsigned __int8)v110];
            v112 = (v111 >> 8) ^ g_crc32Table[v92[16] ^ (unsigned __int64)(unsigned __int8)v111];
            v113 = (v112 >> 8) ^ g_crc32Table[v92[17] ^ (unsigned __int64)(unsigned __int8)v112];
            v114 = (v113 >> 8) ^ g_crc32Table[v92[18] ^ (unsigned __int64)(unsigned __int8)v113];
            v115 = (v114 >> 8) ^ g_crc32Table[v92[19] ^ (unsigned __int64)(unsigned __int8)v114];
            v116 = (v115 >> 8) ^ g_crc32Table[v92[20] ^ (unsigned __int64)(unsigned __int8)v115];
            v117 = (v116 >> 8) ^ g_crc32Table[v92[21] ^ (unsigned __int64)(unsigned __int8)v116];
            v118 = (v117 >> 8) ^ g_crc32Table[v92[22] ^ (unsigned __int64)(unsigned __int8)v117];
            v119 = (v118 >> 8) ^ g_crc32Table[v92[23] ^ (unsigned __int64)(unsigned __int8)v118];
            v120 = (v119 >> 8) ^ g_crc32Table[v92[24] ^ (unsigned __int64)(unsigned __int8)v119];
            v121 = (v120 >> 8) ^ g_crc32Table[v92[25] ^ (unsigned __int64)(unsigned __int8)v120];
            v122 = (v121 >> 8) ^ g_crc32Table[v92[26] ^ (unsigned __int64)(unsigned __int8)v121];
            v84 = (v122 >> 8) ^ g_crc32Table[v92[27] ^ (unsigned __int64)(unsigned __int8)v122];
            v92 += 30;
            --v93;
          }
          while ( v93 );
          LODWORD(v141) = ~v84;
          LODWORD(outPredict) = *(_DWORD *)(v154 + 488);
          LODWORD(fmt) = v5;
          Com_Printf(16, "CL[%s] -- writing command[%d/%d] for time %d with checksum %d\n", *(const char **)&outPacket.p_packetSeq, v79, fmt, outPredict, v141);
        }
        MSG_UserCmd_WriteCommandFields(&buf, (int)v151, from, v81);
        MSG_UserCmd_WritePredictedFields(&buf, (int)v151, v152, p_outCmdPredict);
        v123 = v152;
        v152 = p_outCmdPredict;
        p_outCmdPredict = v123;
        from = v81;
        ++v79;
        v124 = outBuf-- == (unsigned __int8 *)1;
        v80 = (int)v148;
      }
      while ( !v124 );
      MSG_UserCmd_DisableWriteData();
      v1 = clientNum;
      ClientConnectionMP = v149;
    }
  }
  MSG_WriteBits(&buf, 3i64, 3u);
  ClNetperfTelemetry::TrackUsercmd(&ClientConnectionMP->m_connectionData.netperfTelemetry, v5, buf.cursize, buf.overflowed == 0);
  if ( buf.overflowed )
  {
    if ( !Com_ErrorEntered() )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442152E0, 885i64);
  }
  else
  {
    cursize = buf.cursize;
    if ( buf.cursize < 10 )
    {
      LODWORD(v143) = 10;
      LODWORD(v142) = buf.cursize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 724, ASSERT_TYPE_ASSERT, "( buf.cursize ) >= ( 10 )", "%s >= %s\n\t%i, %i", "buf.cursize", "CL_ENCODE_START", v142, v143) )
        __debugbreak();
      cursize = buf.cursize;
    }
    _RDX = buf.data;
    __asm
    {
      vmovsd  xmm0, qword ptr [rdx]
      vmovsd  qword ptr [rbp+1510h+var_1390], xmm0
    }
    v161 = *((_WORD *)buf.data + 4);
    if ( MSG_WriteBitsCompress(0, (const unsigned __int8 *)buf.data + 10, to, cursize - 10, 2464, outCurSize) )
    {
      v128 = outCurSize[0] + 10;
      outCurSize[0] = v128;
      if ( v128 < 10 || (unsigned int)v128 > 0x9AA )
      {
        LODWORD(v142) = 2474;
        LODWORD(v141) = 10;
        LODWORD(outPredicta) = v128;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 752, ASSERT_TYPE_ASSERT, "( 10 ) <= ( compressedSize ) && ( compressedSize ) <= ( sizeof( compressedBuf ) )", "compressedSize not in [CL_ENCODE_START, sizeof( compressedBuf )]\n\t%i not in [%i, %i]", outPredicta, v141, v142) )
          __debugbreak();
      }
      realtime = cls.realtime;
      v130 = &ClientConnectionMP->m_packetBackupData[ClientConnectionMP->m_connectionData.netchan.outgoingSequence % ClientConnectionMP->m_packetBackupCount];
      v130->p_packetSeq = ClientConnectionMP->m_connectionData.netchan.outgoingSequence;
      v130->p_realtime = realtime;
      v130->p_commandTime = 0;
      v130->p_cmdNumber = CmdNumber;
      reliableSent = ClientConnectionMP->m_connectionData.reliableSent;
      if ( ClientConnectionMP->m_connectionData.reliableAcknowledge > reliableSent || reliableSent > ClientConnectionMP->m_connectionData.reliableSequence )
      {
        LODWORD(v142) = ClientConnectionMP->m_connectionData.reliableSequence;
        LODWORD(v141) = ClientConnectionMP->m_connectionData.reliableAcknowledge;
        LODWORD(outPredicta) = ClientConnectionMP->m_connectionData.reliableSent;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_input_mp_inline.h", 764, ASSERT_TYPE_ASSERT, "( clcData->reliableAcknowledge ) <= ( clcData->reliableSent ) && ( clcData->reliableSent ) <= ( clcData->reliableSequence )", "clcData->reliableSent not in [clcData->reliableAcknowledge, clcData->reliableSequence]\n\t%i not in [%i, %i]", outPredicta, v141, v142) )
          __debugbreak();
      }
      v132 = ClientConnectionMP->m_connectionData.reliableSent;
      v133 = v132 + 1;
      reliableSequence = ClientConnectionMP->m_connectionData.reliableSequence;
      if ( v132 < reliableSequence )
      {
        do
        {
          ClientConnectionMP->m_connectionData.serverReliableCommandPacket[v133++ & 0x7F] = ClientConnectionMP->m_connectionData.netchan.outgoingSequence;
          reliableSequence = ClientConnectionMP->m_connectionData.reliableSequence;
        }
        while ( v133 <= reliableSequence );
      }
      ClientConnectionMP->m_connectionData.reliableSent = reliableSequence;
      ClientConnectionMP->m_connectionData.connectLastSendTime = cls.realtime;
      v135 = DVARBOOL_cl_showSend;
      if ( !DVARBOOL_cl_showSend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showSend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v135);
      if ( v135->current.enabled )
      {
        String = NetConnection::GetString(&ClientConnectionMP->m_connectionData.serverConnection);
        Com_Printf(14, "%i to %s\n", (unsigned int)outCurSize[0], String);
      }
      v137 = CL_Netchan_Transmit(&ClientConnectionMP->m_connectionData.netchan, v160, outCurSize[0]);
      if ( v137 < 0 )
        CL_MainMP_TransmissionError(v1, v137);
    }
    else if ( !Com_ErrorEntered() )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144215350, 886i64);
    }
  }
  memset(&outCurSize[1], 0, sizeof(int));
}

