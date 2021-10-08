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
  __int64 v3; 
  bool IsServerLoadingMap; 
  LocalClientNum_t v5; 
  bool v6; 
  const dvar_t *v7; 
  const char *v8; 
  bool v9; 
  const ScreenPlacement *v10; 
  GfxFont *FontHandle; 
  int v14; 
  const char *v16; 
  const char *v19; 
  float fmt; 
  float y; 
  float v28; 

  v3 = localClientNum;
  IsServerLoadingMap = CL_Main_IsServerLoadingMap();
  v5 = (int)v3;
  if ( !IsServerLoadingMap )
  {
    v6 = 0;
LABEL_5:
    CL_MainMP_SetWaitingOnServerToLoadMap(v5, v6);
    goto LABEL_6;
  }
  if ( !CL_MainMP_IsWaitingOnServerToLoadMap((LocalClientNum_t)v3) )
  {
    SND_StopSounds(SND_STOP_ALL);
    v6 = 1;
    v5 = (int)v3;
    goto LABEL_5;
  }
LABEL_6:
  v7 = DVARBOOL_cg_drawDisconnectPercentage;
  if ( !DVARBOOL_cg_drawDisconnectPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDisconnectPercentage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    CG_DrawDisconnectPercentage((LocalClientNum_t)v3);
  if ( IsServerLoadingMap && g_waitingForServer )
  {
    v8 = (char *)&queryFormat.fmt + 3;
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
    }
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v10 = &scrPlaceViewDisplay[v3];
        goto LABEL_20;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v9 )
        __debugbreak();
    }
    v10 = &scrPlaceFull;
LABEL_20:
    __asm
    {
      vmovss  xmm7, cs:__real@3f000000
      vmovaps xmm2, xmm7; scale
    }
    FontHandle = UI_GetFontHandle(v10, 0, *(float *)&_XMM2);
    v14 = Sys_Milliseconds();
    switch ( (((int)((unsigned __int64)(274877907i64 * v14) >> 32) >> 5 < 0) + (unsigned __int8)((int)((unsigned __int64)(274877907i64 * v14) >> 32) >> 5)) & 3 )
    {
      case 1:
        v8 = ".";
        break;
      case 2:
        v8 = "..";
        break;
      case 3:
        v8 = "...";
        break;
    }
    __asm { vmovaps xmm3, xmm7; scale }
    v16 = UI_SafeTranslateString("CGAME/WAITINGFORSERVERLOAD");
    UI_TextWidth(v16, 0, FontHandle, *(float *)&_XMM3);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    v19 = j_va("%s%s", v16, v8);
    __asm
    {
      vmovss  xmm0, cs:__real@44200000
      vmovss  [rsp+88h+var_48], xmm7
      vsubss  xmm1, xmm0, xmm6
      vmovss  xmm0, cs:__real@43db8000
      vmulss  xmm2, xmm1, xmm7
      vmovss  [rsp+88h+y], xmm0
      vmovss  dword ptr [rsp+88h+fmt], xmm2
    }
    UI_DrawText(v10, v19, 0x7FFFFFFF, FontHandle, fmt, y, 0, 0, v28, &colorWhite, 3);
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm6, [rsp+88h+var_18]
    }
  }
}

