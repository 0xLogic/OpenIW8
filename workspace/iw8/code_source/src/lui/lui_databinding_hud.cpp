/*
==============
LUI_DataBinding_HUD_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_HUD_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_HUD_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_HUD_SnapshotUpdate
==============
*/

void __fastcall LUI_DataBinding_HUD_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_HUD_SnapshotUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_HUD_FrameUpdate
==============
*/
void LUI_DataBinding_HUD_FrameUpdate(LocalClientNum_t localClientNum)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_HUD_FrameUpdate");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_FIRING|0x80) )
    LUIBinding::PushFloat(&s_LUI_DataBinding_SubtitleAlpha, localClientNum);
  LUIBinding::PushParamFloat(&s_LUI_DataBinding_ObjectivePingAlpha, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MinimapStyleType, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_MinimapRotationEnabled, localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_DataBinding_HUD_SnapshotUpdate
==============
*/
void LUI_DataBinding_HUD_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  LUIBinding::PushString(&s_LUI_DataBinding_TutorialMessage, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_DrawHUDMap);
}

/*
==============
s_LUI_DataBinding_Get_DrawHUDMap
==============
*/
__int64 s_LUI_DataBinding_Get_DrawHUDMap()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_lui_drawHUDMap;
  if ( !DVARBOOL_lui_drawHUDMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_drawHUDMap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
s_LUI_DataBinding_Get_MinimapRotationEnabled
==============
*/
bool s_LUI_DataBinding_Get_MinimapRotationEnabled(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_GetMinimapRotationEnabled(ControllerFromClient);
}

/*
==============
s_LUI_DataBinding_Get_MinimapStyleType
==============
*/
int s_LUI_DataBinding_Get_MinimapStyleType(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_GetMinimapStyle(ControllerFromClient);
}

/*
==============
s_LUI_DataBinding_Get_ObjectivePingAlpha
==============
*/
float s_LUI_DataBinding_Get_ObjectivePingAlpha(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  float pingAlpha; 

  v2 = param;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = CG_GetLocalClientGlobals(localClientNum);
  CG_CompassGetObjectivePingAlpha(&LocalClientGlobals->predictedPlayerState.objectives[v2], v5->time, &pingAlpha);
  return pingAlpha;
}

/*
==============
s_LUI_DataBinding_Get_SubtitleAlpha
==============
*/
float s_LUI_DataBinding_Get_SubtitleAlpha(LocalClientNum_t localClientNum)
{
  _XMM0 = CL_Pause_IsGamePaused();
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_TutorialMessage
==============
*/
char s_LUI_DataBinding_Get_TutorialMessage(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  ClConfigStrings *ClConfigStrings; 
  const char *v7; 
  const char *v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->predictedPlayerState.tutorialString )
    return 0;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v7 = (const char *)ClConfigStrings->GetLocalizedString(ClConfigStrings, LocalClientGlobals->predictedPlayerState.tutorialString);
  if ( !v7 || !*v7 )
    return 0;
  v8 = SEH_LocalizeTextMessage(v7, "Tutorial Message", LOCMSG_SAFE);
  Core_strcpy(outString, outStringSize, v8);
  return 1;
}

