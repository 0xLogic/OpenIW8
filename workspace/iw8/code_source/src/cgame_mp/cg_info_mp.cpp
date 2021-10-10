/*
==============
CG_DrawInformation
==============
*/

void __fastcall CG_DrawInformation(LocalClientNum_t localClientNum)
{
  ?CG_DrawInformation@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawInformation
==============
*/
void CG_DrawInformation(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool IsServerLoadingMap; 
  LocalClientNum_t v3; 
  bool v4; 
  const dvar_t *v5; 
  const char *v6; 
  bool v7; 
  const ScreenPlacement *v8; 
  GfxFont *FontHandle; 
  int v10; 
  const char *v11; 
  float v12; 
  const char *v13; 

  v1 = localClientNum;
  IsServerLoadingMap = CL_Main_IsServerLoadingMap();
  v3 = (int)v1;
  if ( !IsServerLoadingMap )
  {
    v4 = 0;
LABEL_5:
    CL_MainMP_SetWaitingOnServerToLoadMap(v3, v4);
    goto LABEL_6;
  }
  if ( !CL_MainMP_IsWaitingOnServerToLoadMap((LocalClientNum_t)v1) )
  {
    SND_StopSounds(SND_STOP_ALL);
    v4 = 1;
    v3 = (int)v1;
    goto LABEL_5;
  }
LABEL_6:
  v5 = DVARBOOL_cg_drawDisconnectPercentage;
  if ( !DVARBOOL_cg_drawDisconnectPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDisconnectPercentage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    CG_DrawDisconnectPercentage((LocalClientNum_t)v1);
  if ( IsServerLoadingMap && g_waitingForServer )
  {
    v6 = (char *)&queryFormat.fmt + 3;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v8 = &scrPlaceViewDisplay[v1];
        goto LABEL_20;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v7 )
        __debugbreak();
    }
    v8 = &scrPlaceFull;
LABEL_20:
    FontHandle = UI_GetFontHandle(v8, 0, 0.5);
    v10 = Sys_Milliseconds();
    switch ( (((int)((unsigned __int64)(274877907i64 * v10) >> 32) >> 5 < 0) + (unsigned __int8)((int)((unsigned __int64)(274877907i64 * v10) >> 32) >> 5)) & 3 )
    {
      case 1:
        v6 = ".";
        break;
      case 2:
        v6 = "..";
        break;
      case 3:
        v6 = "...";
        break;
    }
    v11 = UI_SafeTranslateString("CGAME/WAITINGFORSERVERLOAD");
    v12 = (float)UI_TextWidth(v11, 0, FontHandle, 0.5);
    v13 = j_va("%s%s", v11, v6);
    UI_DrawText(v8, v13, 0x7FFFFFFF, FontHandle, (float)(640.0 - v12) * 0.5, 439.0, 0, 0, 0.5, &colorWhite, 3);
  }
}

