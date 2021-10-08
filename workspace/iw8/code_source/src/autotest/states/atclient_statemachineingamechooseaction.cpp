/*
==============
ATClient_StateMachineInGameChooseActionTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameChooseActionTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameChooseActionTransition
==============
*/
bool ATClient_StateMachineInGameChooseActionTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  bool result; 
  char v12; 

  *outNewState = -2;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( LUI_IsMenuOpenAndVisible(localClientNum, "???") )
  {
    *outNewState = 9;
  }
  else if ( LUI_IsMenuOpenAndVisible(localClientNum, "LoadoutSelect") )
  {
    *outNewState = 2;
  }
  else if ( LUI_IsMenuOpenAndVisible(localClientNum, "TeamSelectMenu") )
  {
    *outNewState = 1;
  }
  else if ( ATClient_IsLocalClientInInfil(localClientNum) )
  {
    *outNewState = 3;
  }
  else
  {
    if ( Lobby_AreWeHost() )
    {
      _RSI = DVARFLT_ATClient_ChanceHostQuitGame;
      if ( !DVARFLT_ATClient_ChanceHostQuitGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceHostQuitGame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@38000100
        vcomiss xmm1, xmm6
      }
      if ( v12 )
        goto LABEL_20;
    }
    _RSI = DVARFLT_ATClient_ChanceQuitGame;
    if ( !DVARFLT_ATClient_ChanceQuitGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceQuitGame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@38000100
      vcomiss xmm1, xmm6
    }
    if ( v12 )
    {
LABEL_20:
      *outNewState = 6;
    }
    else
    {
      _RSI = DVARFLT_ATClient_ChanceSendInvite;
      if ( !DVARFLT_ATClient_ChanceSendInvite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_ChanceSendInvite") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@38000100
        vcomiss xmm1, xmm6
      }
      if ( v12 )
      {
        *outNewState = 7;
      }
      else
      {
        result = SelectNewActionForGameType(localClientNum, outNewState);
        if ( !result )
          goto LABEL_4;
      }
    }
  }
  result = 1;
LABEL_4:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
SelectNewActionForGameType
==============
*/
bool SelectNewActionForGameType(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v11; 
  __int64 v12; 
  bool result; 
  char v24; 
  char v25; 
  float v37; 

  v11 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v37 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v37) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovaps [rsp+0A8h+var_28], xmm7
    vmovaps [rsp+0A8h+var_38], xmm8
    vmovaps [rsp+0A8h+var_48], xmm9
    vmovaps [rsp+0A8h+var_58], xmm10
    vmovaps [rsp+0A8h+var_68], xmm11
  }
  v12 = ((__int64 (*)(void))ClActiveClient::ms_activeClients[v11]->GetPlayerState)();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v12 + 20), ACTIVE, 0x20u) || *(_DWORD *)(v12 + 12) == 5 )
    goto LABEL_28;
  if ( !ATClient_IsLocalClientInVehicle((const LocalClientNum_t)v11) )
  {
    if ( (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE && ATClient_IsLocalClientSkydiving((const LocalClientNum_t)v11) )
    {
      *outNewState = 5;
      result = 1;
      goto LABEL_29;
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceHuntEnemy, "ATClient_ChanceHuntEnemy");
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceRandomWalk, "ATClient_ChanceRandomWalk");
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceDriveAround, "ATClient_ChanceDriveAround");
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceCaptureObjective, "ATClient_ChanceCaptureObjective");
    __asm { vmovaps xmm6, xmm0 }
    Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChancePerfTest, "ATClient_ChancePerfTest");
    __asm
    {
      vaddss  xmm9, xmm8, xmm10
      vaddss  xmm8, xmm9, xmm7
      vaddss  xmm7, xmm8, xmm6
      vaddss  xmm6, xmm7, xmm0
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ATClient_ChanceDoNothing, "ATClient_ChanceDoNothing");
    __asm
    {
      vaddss  xmm11, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm11, xmm1
    }
    if ( !(v25 | v24) )
    {
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vmulss  xmm2, xmm1, cs:__real@38000100
        vcomiss xmm2, xmm10
      }
      if ( v25 )
      {
        *outNewState = 10;
        result = 1;
        goto LABEL_29;
      }
      __asm { vcomiss xmm2, xmm9 }
      if ( v25 )
      {
        *outNewState = 8;
        result = 1;
        goto LABEL_29;
      }
      __asm { vcomiss xmm2, xmm8 }
      if ( v25 )
      {
        *outNewState = 11;
        result = 1;
        goto LABEL_29;
      }
      __asm { vcomiss xmm2, xmm7 }
      if ( v25 )
      {
        *outNewState = 13;
        result = 1;
        goto LABEL_29;
      }
      __asm { vcomiss xmm2, xmm6 }
      if ( v25 )
      {
        *outNewState = 14;
        result = 1;
        goto LABEL_29;
      }
    }
LABEL_28:
    result = 0;
    goto LABEL_29;
  }
  *outNewState = 12;
  result = 1;
LABEL_29:
  __asm
  {
    vmovaps xmm11, [rsp+0A8h+var_68]
    vmovaps xmm10, [rsp+0A8h+var_58]
    vmovaps xmm9, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmovaps xmm6, [rsp+0A8h+var_18]
  }
  return result;
}

