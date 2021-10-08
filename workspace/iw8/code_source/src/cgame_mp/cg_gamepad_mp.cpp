/*
==============
SetSpectatorPersoness
==============
*/

void __fastcall SetSpectatorPersoness(LocalClientNum_t localClientNum, int thirdPerson)
{
  ?SetSpectatorPersoness@@YAXW4LocalClientNum_t@@H@Z(localClientNum, thirdPerson);
}

/*
==============
CG_TranslateGamepadButton
==============
*/

bool __fastcall CG_TranslateGamepadButton(LocalClientNum_t localClientNum, int button, int cmd)
{
  return ?CG_TranslateGamepadButton@@YA_NW4LocalClientNum_t@@HH@Z(localClientNum, button, cmd);
}

/*
==============
CG_HandleSpecialStateInput
==============
*/

void __fastcall CG_HandleSpecialStateInput(LocalClientNum_t localClientNum, unsigned __int64 *buttons, ButtonSet *outClearButtons)
{
  ?CG_HandleSpecialStateInput@@YAXW4LocalClientNum_t@@PEA_KAEAUButtonSet@@@Z(localClientNum, buttons, outClearButtons);
}

/*
==============
CG_ShouldUpdateViewAngles
==============
*/

bool __fastcall CG_ShouldUpdateViewAngles(LocalClientNum_t localClientNum)
{
  return ?CG_ShouldUpdateViewAngles@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GamepadCheckStartAndBack
==============
*/
char CG_GamepadCheckStartAndBack(LocalClientNum_t localClientNum, int button, int cmd)
{
  if ( button == 14 )
  {
    if ( cmd )
    {
LABEL_3:
      CL_Input_ExecBinding(localClientNum, cmd, button, 0);
      return 1;
    }
  }
  else if ( button == 15 && cmd )
  {
    goto LABEL_3;
  }
  return 0;
}

/*
==============
CG_HandleSpecialStateInput
==============
*/
void CG_HandleSpecialStateInput(LocalClientNum_t localClientNum, unsigned __int64 *buttons, ButtonSet *outClearButtons)
{
  __int64 v4; 
  CgGlobalsMP *LocalClientGlobals; 
  int pm_type; 
  __int64 clientNum; 
  CgStatic *v9; 
  cg_t *v10; 
  const characterInfo_t *CharacterInfo; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v4 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->clientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
    __debugbreak();
  if ( (unsigned int)v4 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v15 = CgStatic::ms_allocatedCount;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v4] )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v15) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v4];
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v10->IsMP(v10) )
  {
    if ( (unsigned int)clientNum >= v10[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v15) = v10[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(v14) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v10[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v10, clientNum);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 228, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
    goto LABEL_34;
  v12 = (__int64)v9->GetClientInfo(v9, clientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 233, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !*(_BYTE *)(v12 + 144) )
  {
LABEL_34:
    if ( pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) )
    {
      CG_HandleSpectatorInput((LocalClientNum_t)v4, buttons, outClearButtons);
    }
    else if ( LocalClientGlobals->spectatingThirdPerson )
    {
      *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue((const LocalClientNum_t)v4);
      __asm { vmovaps xmm1, xmm0; fov }
      CG_View_SetFovDvarValue((const LocalClientNum_t)v4, *(const float *)&_XMM1);
      LocalClientGlobals->spectatingThirdPerson = 0;
    }
  }
}

/*
==============
CG_HandleSpectatorInput
==============
*/
void CG_HandleSpectatorInput(LocalClientNum_t localClientNum, unsigned __int64 *buttons, ButtonSet *outClearButtons)
{
  cg_t *LocalClientGlobals; 
  bool v9; 
  int spectatingThirdPerson; 
  const dvar_t *v11; 
  char v12; 
  bool v13; 
  const dvar_t *v14; 
  bool enabled; 
  bool v16; 
  bool v17; 
  bool v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  bool v21; 
  char v23; 
  bool v29; 
  int spectatingHelmetCam; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  char v33; 
  char v34; 
  char v35; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 102, ASSERT_TYPE_ASSERT, "((cgameGlob->predictedPlayerState.pm_type == PM_SPECTATOR) || cgameGlob->predictedPlayerState.otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE ))", (const char *)&queryFormat, "(cgameGlob->predictedPlayerState.pm_type == PM_SPECTATOR) || cgameGlob->predictedPlayerState.otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE )") )
      __debugbreak();
  }
  *buttons &= ~0x1000000000000ui64;
  v9 = CL_InputMP_KeyActiveOrPressed(localClientNum, 16);
  spectatingThirdPerson = LocalClientGlobals->spectatingThirdPerson;
  spectatingHelmetCam = LocalClientGlobals->spectatingHelmetCam;
  if ( !v9 || (v33 = 1, CL_IsRenderingSplitScreen()) )
    v33 = 0;
  if ( spectatingThirdPerson != 1 || (v34 = 1, CL_IsRenderingSplitScreen()) )
    v34 = 0;
  if ( LocalClientGlobals->inKillCam )
  {
    if ( CL_InputMP_KeyActiveOrPressed(localClientNum, 16) )
      CL_Input_UpdateCmdButton(localClientNum, buttons, 16, 0i64, outClearButtons);
    v33 = 0;
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    goto LABEL_24;
  v11 = DVARBOOL_camera_allow3rdspectate;
  if ( !DVARBOOL_camera_allow3rdspectate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_allow3rdspectate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
LABEL_24:
    v12 = 0;
  else
    v12 = 1;
  p_otherFlags = &LocalClientGlobals->predictedPlayerState.otherFlags;
  v35 = v12;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v13 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x24u);
  v14 = DCONST_DVARBOOL_helmetCamFollowEnabled;
  v29 = v13;
  if ( !DCONST_DVARBOOL_helmetCamFollowEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "helmetCamFollowEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  enabled = v14->current.enabled;
  v16 = !CG_Utils_IsActionCamActive(localClientNum) && !LocalClientGlobals->renderingThirdPerson;
  v17 = v34 && v12;
  v18 = spectatingHelmetCam == 1 && enabled;
  if ( v33 )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(p_otherFlags, (POtherFlagsMP)33) )
    {
      if ( enabled && v16 )
      {
        v17 = 0;
        v18 = 1;
      }
      else if ( !v35 || LocalClientGlobals->renderingThirdPerson )
      {
        v18 = 0;
        if ( v29 )
        {
          CL_Input_UpdateCmdButton(localClientNum, buttons, 16, 0x1000000000000ui64, outClearButtons);
        }
        else
        {
          v17 = 0;
          CG_PlayerStateMP_ResetSpectatorViewAngles(localClientNum);
        }
      }
      else
      {
        v17 = 1;
        v18 = 0;
      }
    }
    else
    {
      v17 = 0;
      v18 = 0;
      CL_Input_UpdateCmdButton(localClientNum, buttons, 16, 0x2000000000000ui64, outClearButtons);
    }
  }
  CL_Input_UpdateCmdButton(localClientNum, buttons, 16, 0i64, outClearButtons);
  outClearButtons->spectatorButton = 1;
  v19 = DVARBOOL_camera_thirdPerson;
  if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled || !v17 || v18 )
    goto LABEL_66;
  v20 = DVARBOOL_camera_allow3rdspectate;
  if ( !DVARBOOL_camera_allow3rdspectate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_allow3rdspectate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( !v20->current.enabled )
LABEL_66:
    v21 = 0;
  else
    v21 = 1;
  outClearButtons->spectatorThirdPersonButton = v21;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(p_otherFlags, (POtherFlagsMP)33) )
  {
    *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CG_View_GetFovDvarValue(localClientNum);
    __asm { vucomiss xmm0, xmm6 }
    if ( !v23 )
    {
      __asm { vmovaps xmm1, xmm6; fov }
      CG_View_SetFovDvarValue(localClientNum, *(const float *)&_XMM1);
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  LocalClientGlobals->spectatingHelmetCam = v18;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(p_otherFlags, (POtherFlagsMP)33) )
  {
    CL_Input_UpdateCmdButton(localClientNum, buttons, 18, 0x4000000000000ui64, outClearButtons);
    CL_Input_UpdateCmdButton(localClientNum, buttons, 17, 0x2000000000000ui64, outClearButtons);
    if ( LocalClientGlobals->renderingThirdPerson && !LocalClientGlobals->predictedPlayerState.deltaTime )
    {
      _RDI = DCONST_DVARFLT_spectatorMaxPitch3p;
      if ( !DCONST_DVARFLT_spectatorMaxPitch3p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "spectatorMaxPitch3p") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+28h]; max
        vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000; min
      }
      CL_ClampViewAngle(localClientNum, 0, *(const float *)&_XMM2, *(const float *)&_XMM3);
    }
  }
  else
  {
    CL_Input_UpdateCmdButton(localClientNum, buttons, 18, 0i64, outClearButtons);
    CL_Input_UpdateCmdButton(localClientNum, buttons, 17, 0i64, outClearButtons);
  }
}

/*
==============
CG_ShouldUpdateViewAngles
==============
*/
bool CG_ShouldUpdateViewAngles(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_otherFlags = &LocalClientGlobals->predictedPlayerState.otherFlags;
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) )
    return !CL_Keys_IsCatcherActive(localClientNum, -3073);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Bu) )
    return !CL_Keys_IsCatcherActive(localClientNum, -3073);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x24u) )
    return !CL_Keys_IsCatcherActive(localClientNum, -3073);
  CG_PlayerStateMP_ResetSpectatorViewAngles(localClientNum);
  return 0;
}

/*
==============
CG_TranslateGamepadButton
==============
*/
char CG_TranslateGamepadButton(LocalClientNum_t localClientNum, int button, int cmd)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  cg_t *v8; 
  int ControllerFromClient; 
  int v10; 
  int v11; 
  __int64 v12; 

  v3 = localClientNum;
  if ( !button && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 369, ASSERT_TYPE_ASSERT, "(button)", (const char *)&queryFormat, "button") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 370, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v3].frontEndSceneState[0] || !clientUIActives[v3].cgameInitialized )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( LocalClientGlobals->inKillCam )
  {
    if ( button == 3 )
    {
      CL_InputMP_UseReload((LocalClientNum_t)v3, 3);
      return 1;
    }
    if ( button == 14 )
    {
      if ( cmd )
      {
LABEL_17:
        CL_Input_ExecBinding((LocalClientNum_t)v3, cmd, button, 0);
        return 1;
      }
    }
    else if ( button == 15 && cmd )
    {
      goto LABEL_17;
    }
    return 0;
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) )
    return 0;
  v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 312, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
    __debugbreak();
  if ( v8->predictedPlayerState.pm_type != 5 )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v8->predictedPlayerState.otherFlags, ACTIVE, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_gamepad_mp.cpp", 313, ASSERT_TYPE_ASSERT, "((cgameGlob->predictedPlayerState.pm_type == PM_SPECTATOR) || cgameGlob->predictedPlayerState.otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE ))", (const char *)&queryFormat, "(cgameGlob->predictedPlayerState.pm_type == PM_SPECTATOR) || cgameGlob->predictedPlayerState.otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE )") )
      __debugbreak();
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
  v10 = 6;
  v11 = 5;
  if ( CG_IsPlayerUsingButtonLayoutBumperPing(ControllerFromClient) )
  {
    v10 = 23;
    v11 = 22;
  }
  if ( v11 == button )
  {
    CL_InputMP_SpecPrev((LocalClientNum_t)v3, button);
    return 1;
  }
  else if ( v10 == button )
  {
    CL_InputMP_SpecNext((LocalClientNum_t)v3, button);
    return 1;
  }
  else if ( button == 4 )
  {
    CL_InputMP_ToggleSpec((LocalClientNum_t)v3, 4);
    return 1;
  }
  else
  {
    return CG_GamepadCheckStartAndBack((LocalClientNum_t)v3, button, cmd);
  }
}

/*
==============
SetSpectatorPersoness
==============
*/
void SetSpectatorPersoness(LocalClientNum_t localClientNum, int thirdPerson)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v6; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( thirdPerson != LocalClientGlobals->spectatingThirdPerson )
  {
    v6 = DVARBOOL_xblive_competitionmatch;
    if ( !DVARBOOL_xblive_competitionmatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_competitionmatch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled || LocalClientGlobals->m_isMLGSpectator )
    {
      LocalClientGlobals->spectatingThirdPerson = thirdPerson;
      if ( !thirdPerson || LocalClientGlobals->m_isMLGSpectator )
      {
        *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
        __asm { vmovaps xmm1, xmm0; fov }
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@42200000 }
      }
      CG_View_SetFovDvarValue(localClientNum, *(const float *)&_XMM1);
    }
  }
}

