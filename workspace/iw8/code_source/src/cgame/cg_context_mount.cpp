/*
==============
CG_ContextMount_CanEmitMountButton
==============
*/

bool __fastcall CG_ContextMount_CanEmitMountButton(const LocalClientNum_t localClientNum, const unsigned __int64 cmdButtons)
{
  return ?CG_ContextMount_CanEmitMountButton@@YA_NW4LocalClientNum_t@@_K@Z(localClientNum, cmdButtons);
}

/*
==============
CG_ContextMount_DrawHint
==============
*/

void __fastcall CG_ContextMount_DrawHint(const LocalClientNum_t localClientNum, const rectDef_s *const rect, GfxFont *const font, const float scale, const int textStyle)
{
  ?CG_ContextMount_DrawHint@@YAXW4LocalClientNum_t@@QEBUrectDef_s@@QEAUGfxFont@@MH@Z(localClientNum, rect, font, scale, textStyle);
}

/*
==============
CG_ContextMount_UpdateViewAngles
==============
*/

void __fastcall CG_ContextMount_UpdateViewAngles(const playerState_s *const ps, vec3_t *inOutViewAngles)
{
  ?CG_ContextMount_UpdateViewAngles@@YAXQEBUplayerState_s@@AEATvec3_t@@@Z(ps, inOutViewAngles);
}

/*
==============
CG_ContextMount_CalcVisibilityMode
==============
*/

void __fastcall CG_ContextMount_CalcVisibilityMode(const LocalClientNum_t localClientNum)
{
  ?CG_ContextMount_CalcVisibilityMode@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ContextMount_UmbraOffsetTrace_Init
==============
*/

void CG_ContextMount_UmbraOffsetTrace_Init(void)
{
  ?CG_ContextMount_UmbraOffsetTrace_Init@@YAXXZ();
}

/*
==============
CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM
==============
*/

bool __fastcall CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  return ?CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM@@YA_NW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CG_ContextMount_UpdateHintIcon
==============
*/

void __fastcall CG_ContextMount_UpdateHintIcon(LocalClientNum_t localClientNum)
{
  ?CG_ContextMount_UpdateHintIcon@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ContextMount_UmbraOffsetTrace_StartWorkers
==============
*/

void __fastcall CG_ContextMount_UmbraOffsetTrace_StartWorkers(const LocalClientNum_t localClientNum)
{
  ?CG_ContextMount_UmbraOffsetTrace_StartWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ContextMount_UpdateAdsButtonPressed
==============
*/

void __fastcall CG_ContextMount_UpdateAdsButtonPressed(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CG_ContextMount_UpdateAdsButtonPressed@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CG_ContextMount_TryDrawMountIndicator
==============
*/

void __fastcall CG_ContextMount_TryDrawMountIndicator(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec2_t *drawSize, const vec2_t *spread, const float centerX, const float centerY, const vec4_t *color, float scale, int horzAlign, int vertAlign)
{
  ?CG_ContextMount_TryDrawMountIndicator@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTvec2_t@@2MMAEBTvec4_t@@MHH@Z(localClientNum, scrPlace, drawSize, spread, centerX, centerY, color, scale, horzAlign, vertAlign);
}

/*
==============
CG_ContextMount_CalcVisibilityMode
==============
*/

void __fastcall CG_ContextMount_CalcVisibilityMode(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v12; 
  const dvar_t *v13; 
  char v16; 
  const dvar_t *v17; 
  int integer; 
  unsigned int EdgeIndex; 
  __int64 v28; 
  int *v29; 
  int v30; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86[2]; 
  vec3_t outOrg; 
  __int64 v88; 
  __int64 v89; 
  vec3_t outEdgePoint; 
  vec3_t outNormal; 
  vec3_t outBelow; 
  vec3_t outParallel; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  v89 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  v12 = localClientNum;
  v13 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vcomiss xmm12, dword ptr [rax+4C8h]
    }
    if ( v16 )
    {
      v17 = DCONST_DVARINT_mount_tuning_visibility_query_mode;
      if ( !DCONST_DVARINT_mount_tuning_visibility_query_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_mode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      integer = v17->current.integer;
      LODWORD(v88) = integer;
      if ( integer )
      {
        if ( integer == 1 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_visibility_query_min_distance, "mount_tuning_visibility_query_min_distance");
          __asm { vmovss  dword ptr [rsi+698Ch], xmm0 }
        }
        else
        {
          if ( (unsigned int)(integer - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 537, ASSERT_TYPE_ASSERT, "((mode == ContextMountVisQueryMode::OFFSET) || (mode == ContextMountVisQueryMode::VISIBILITY_OFFSET))", (const char *)&queryFormat, "(mode == ContextMountVisQueryMode::OFFSET) || (mode == ContextMountVisQueryMode::VISIBILITY_OFFSET)") )
            __debugbreak();
          EdgeIndex = EdgeId::GetEdgeIndex(&_RSI->predictedPlayerState.mountState.surface.id);
          if ( MapEdgeList_IsLoaded(EdgeIndex) )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "CG_ContextMount_CalcVisibilityMode");
            RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
            __asm { vmovss  xmm2, dword ptr [rsi+498h]; fraction }
            Edge_CalculatePoint(&_RSI->m_bgHandler, _RSI->predictedPlayerState.mountState.surface.id, *(float *)&_XMM2, &outEdgePoint);
            __asm { vmovss  xmm2, dword ptr [rsi+498h]; fraction }
            Edge_CalculateVectors(&_RSI->m_bgHandler, _RSI->predictedPlayerState.mountState.surface.id, *(float *)&_XMM2, _RSI->predictedPlayerState.mountState.surface.normalFaceIndex, &outNormal, &outParallel, &outBelow);
            __asm
            {
              vxorps  xmm6, xmm6, xmm6
              vxorps  xmm7, xmm7, xmm7
              vxorps  xmm8, xmm8, xmm8
              vxorps  xmm9, xmm9, xmm9
              vxorps  xmm10, xmm10, xmm10
              vxorps  xmm13, xmm13, xmm13
            }
            if ( _RSI->predictedPlayerState.mountState.surface.type == MOUNT_TYPE_TOP && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces, "mount_tuning_visibility_query_lateral_traces") )
            {
              v28 = v12;
              v29 = &s_mountUmbraResultCount[v12];
              if ( *v29 > 0 )
              {
                if ( *v29 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 562, ASSERT_TYPE_ASSERT, "( s_mountUmbraResultCount[localClientNum] ) == ( 2 )", "%s == %s\n\t%i, %i", "s_mountUmbraResultCount[localClientNum]", "2", *v29, 2) )
                  __debugbreak();
                Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_TRACE_MOUNT_UMBRA);
                v30 = 0;
                if ( *v29 > 0 )
                {
                  _RDI = &s_mountUmbraResults[v28][0].start.v[1];
                  do
                  {
                    if ( *((_DWORD *)_RDI - 2) != 2 )
                    {
                      LODWORD(v85) = 2;
                      *(float *)&v84 = *(_RDI - 2);
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 569, ASSERT_TYPE_ASSERT, "( result->state ) == ( WORKER_TRACE_FINISHED )", "%s == %s\n\t%i, %i", "result->state", "WORKER_TRACE_FINISHED", v84, v85) )
                        __debugbreak();
                    }
                    if ( !*((_BYTE *)_RDI - 31) && !*((_BYTE *)_RDI - 32) )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rdi+8]
                        vsubss  xmm2, xmm0, dword ptr [rdi-4]
                        vmovss  xmm1, dword ptr [rdi+0Ch]
                        vsubss  xmm4, xmm1, dword ptr [rdi]
                        vmovss  xmm0, dword ptr [rdi+10h]
                        vsubss  xmm3, xmm0, dword ptr [rdi+4]
                        vmovss  xmm1, dword ptr [rdi-60h]
                        vmulss  xmm2, xmm1, xmm2
                        vmulss  xmm0, xmm1, xmm4
                        vmulss  xmm3, xmm1, xmm3
                        vaddss  xmm6, xmm6, xmm2
                        vaddss  xmm7, xmm7, xmm0
                        vaddss  xmm8, xmm8, xmm3
                      }
                    }
                    ++v30;
                    _RDI += 32;
                  }
                  while ( v30 < *v29 );
                  integer = v88;
                }
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, eax
                  vmovss  xmm0, cs:__real@3f800000
                  vdivss  xmm2, xmm0, xmm1
                  vmulss  xmm9, xmm6, xmm2
                  vmulss  xmm10, xmm7, xmm2
                  vmulss  xmm13, xmm8, xmm2
                }
              }
            }
            __asm
            {
              vmovsd  xmm0, qword ptr [rsp+170h+outOrg]
              vmovsd  qword ptr [rsp+170h+var_120], xmm0
              vaddss  xmm9, xmm9, dword ptr [rsp+170h+outOrg]
              vmovss  [rsp+170h+var_120], xmm9
              vaddss  xmm10, xmm10, [rsp+170h+var_11C]
              vmovss  [rsp+170h+var_11C], xmm10
              vaddss  xmm8, xmm13, dword ptr [rsp+170h+var_118]
              vmovss  dword ptr [rsp+170h+var_118], xmm8
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_visibility_query_min_distance, "mount_tuning_visibility_query_min_distance");
            __asm
            {
              vsubss  xmm3, xmm9, dword ptr [rbp+70h+outEdgePoint]
              vsubss  xmm1, xmm10, dword ptr [rbp+70h+outEdgePoint+4]
              vsubss  xmm4, xmm8, dword ptr [rbp+70h+outEdgePoint+8]
              vmulss  xmm2, xmm1, dword ptr [rbp+70h+outNormal+4]
              vmulss  xmm1, xmm3, dword ptr [rbp+70h+outNormal]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm4, dword ptr [rbp+70h+outNormal+8]
              vaddss  xmm1, xmm3, xmm2
              vsubss  xmm0, xmm0, xmm1
              vmaxss  xmm2, xmm0, xmm12
              vmulss  xmm3, xmm2, dword ptr [rbp+70h+outNormal+4]
              vmulss  xmm4, xmm2, dword ptr [rbp+70h+outNormal+8]
              vmulss  xmm0, xmm2, dword ptr [rbp+70h+outNormal]
              vaddss  xmm1, xmm0, xmm9
              vsubss  xmm5, xmm1, dword ptr [rsp+170h+outOrg]
              vmovss  dword ptr [rsi+6980h], xmm5
              vaddss  xmm0, xmm3, xmm10
              vsubss  xmm2, xmm0, dword ptr [rsp+170h+outOrg+4]
              vmovss  dword ptr [rsi+6984h], xmm2
              vaddss  xmm1, xmm4, xmm8
              vsubss  xmm4, xmm1, dword ptr [rsp+170h+outOrg+8]
              vmovss  dword ptr [rsi+6988h], xmm4
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vmovss  dword ptr [rsi+698Ch], xmm0
            }
            _RSI->refdef.view.visibilityOffsetApplyToRefPoint = integer == 2;
            memset(v86, 0, 0xCui64);
            memset(&outOrg, 0, sizeof(outOrg));
            Sys_ProfEndNamedEvent();
          }
        }
      }
    }
  }
  _R11 = &v94;
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
CG_ContextMount_CanEmitMountButton
==============
*/
bool CG_ContextMount_CanEmitMountButton(const LocalClientNum_t localClientNum, const unsigned __int64 cmdButtons)
{
  __int16 v3; 
  int MountButton; 
  bool result; 
  bool v9; 

  v3 = cmdButtons;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
    MountButton = GamerProfile_GetMountButton(localClientNum);
  else
    MountButton = GamerProfile_GetMountButtonKBM(localClientNum);
  switch ( MountButton )
  {
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      result = 1;
      break;
    case 3:
    case 4:
      result = (v3 & 0x200) != 0i64;
      break;
    case 10:
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rax+738h]
      }
      result = v9;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
CG_ContextMount_DrawHint
==============
*/

void __fastcall CG_ContextMount_DrawHint(const LocalClientNum_t localClientNum, const rectDef_s *const rect, GfxFont *const font, double scale, const int textStyle)
{
  const dvar_t *v10; 
  __int64 v12; 
  char *v17; 
  char *v18; 
  const char *v19; 
  const char *v21; 
  int vertAlign; 
  int horzAlign; 
  bool v36; 
  const ScreenPlacement *v37; 
  float fmt; 
  float y; 
  float v43; 
  char *outCommands; 
  char *outMountPrompt; 
  char dstString[256]; 

  __asm { vmovaps [rsp+1E8h+var_48], xmm6 }
  v10 = DCONST_DVARMPBOOL_mount_hint_enable;
  v12 = localClientNum;
  _RBP = rect;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DCONST_DVARMPBOOL_mount_hint_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_hint_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    if ( _RAX->mountHint.reticleIconType )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rax+4C8h]
      }
      outCommands = NULL;
      outMountPrompt = NULL;
      if ( CG_ContextMount_GetPromptInfo((const LocalClientNum_t)v12, 0, (const char **)&outCommands, (const char **)&outMountPrompt) )
      {
        v17 = outCommands;
        __asm
        {
          vmovaps [rsp+1E8h+var_58], xmm7
          vmovaps [rsp+1E8h+var_68], xmm8
        }
        if ( !outCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 197, ASSERT_TYPE_ASSERT, "(commands != nullptr)", (const char *)&queryFormat, "commands != nullptr") )
          __debugbreak();
        UI_ReplaceDirective((LocalClientNum_t)v12, v17, dstString, 0x100ui64, 0);
        v18 = outMountPrompt;
        if ( !outMountPrompt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 200, ASSERT_TYPE_ASSERT, "(mountPrompt != nullptr)", (const char *)&queryFormat, "mountPrompt != nullptr") )
          __debugbreak();
        v19 = UI_SafeTranslateString(v18);
        __asm { vmovaps xmm3, xmm6; scale }
        v21 = UI_ReplaceConversionString(v19, dstString);
        UI_TextWidth(v21, 0, font, *(float *)&_XMM3);
        vertAlign = _RBP->vertAlign;
        horzAlign = _RBP->horzAlign;
        __asm
        {
          vmovss  xmm8, dword ptr [rbp+4]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm0, xmm0, cs:__real@3f000000
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm4, xmm0, xmm2, 1
          vmovss  xmm0, dword ptr [rbp+0]
          vcvttss2si eax, xmm4
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vsubss  xmm7, xmm0, xmm1
        }
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
          {
            v37 = &scrPlaceViewDisplay[v12];
            goto LABEL_20;
          }
          if ( activeScreenPlacementMode == SCRMODE_INVALID )
            v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
          else
            v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
          if ( v36 )
            __debugbreak();
        }
        v37 = &scrPlaceFull;
LABEL_20:
        __asm
        {
          vmovss  [rsp+1E8h+var_1A8], xmm6
          vmovss  [rsp+1E8h+y], xmm8
          vmovss  dword ptr [rsp+1E8h+fmt], xmm7
        }
        UI_DrawText(v37, v21, 0x7FFFFFFF, font, fmt, y, horzAlign, vertAlign, v43, &colorWhite, textStyle);
        __asm
        {
          vmovaps xmm8, [rsp+1E8h+var_68]
          vmovaps xmm7, [rsp+1E8h+var_58]
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+1E8h+var_48] }
}

/*
==============
CG_ContextMount_GetPromptInfo
==============
*/
bool CG_ContextMount_GetPromptInfo(const LocalClientNum_t localClientNum, const bool displayInWorldHint, const char **outCommands, const char **outMountPrompt)
{
  char v11; 
  char v12; 
  bool IsToggleAdsEnabled; 
  const dvar_t *v14; 
  bool v15; 
  int MountButton; 
  bool result; 
  const char *v18; 

  if ( !outCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 82, ASSERT_TYPE_ASSERT, "(outCommands)", (const char *)&queryFormat, "outCommands") )
    __debugbreak();
  if ( !outMountPrompt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 83, ASSERT_TYPE_ASSERT, "(outMountPrompt)", (const char *)&queryFormat, "outMountPrompt") )
    __debugbreak();
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rax+738h]
  }
  v12 = v11;
  IsToggleAdsEnabled = CL_Input_IsToggleAdsEnabled(localClientNum);
  v14 = DCONST_DVARMPBOOL_mount_enable;
  v15 = IsToggleAdsEnabled;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.enabled )
    return 0;
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
    MountButton = GamerProfile_GetMountButton(localClientNum);
  else
    MountButton = GamerProfile_GetMountButtonKBM(localClientNum);
  switch ( MountButton )
  {
    case 2:
      *outCommands = "[{+speed_throw,+ads_akimbo_accessible}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_DOUBLE";
      return 1;
    case 3:
      if ( !v12 && !displayInWorldHint )
        return 0;
      v18 = "[{+melee,+melee_zoom,+melee_breath}]";
      goto LABEL_33;
    case 4:
      if ( !v12 && !displayInWorldHint )
        return 0;
      v18 = "[{+sprint,+sprint_zoom,+breath_sprint}]";
      goto LABEL_33;
    case 5:
      v18 = "[{+smoke}]";
      goto LABEL_33;
    case 6:
      *outCommands = "[{+smoke}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 7:
      if ( v15 && v12 && !displayInWorldHint )
        return 0;
      *outCommands = "[{+speed_throw,+ads_akimbo_accessible}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 8:
      v18 = "[{+mount}]";
      goto LABEL_33;
    case 9:
      *outCommands = "[{+mount}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 10:
      if ( !v12 && !displayInWorldHint )
        return 0;
      v18 = "[{+activate}]";
LABEL_33:
      *outCommands = v18;
      *outMountPrompt = "PLATFORM/MOUNT_HINT";
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM
==============
*/
char CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  int ControllerFromClient; 
  int mountPullAwayStartTime; 
  bool v8; 
  int v9; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (cmd->buttons & 0x80000000000000i64) != 0 )
    goto LABEL_11;
  if ( (cmd->stateFlags & 8) != 0 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rdi+4C8h]
  }
  if ( (cmd->stateFlags & 8) != 0 || !cmd->forwardmove && !cmd->rightmove )
  {
LABEL_11:
    _RDI->mountPullAwayStartTime = 0;
  }
  else
  {
    mountPullAwayStartTime = _RDI->mountPullAwayStartTime;
    v8 = mountPullAwayStartTime <= 0;
    if ( !mountPullAwayStartTime )
    {
      mountPullAwayStartTime = _RDI->time;
      v8 = mountPullAwayStartTime <= 0;
      _RDI->mountPullAwayStartTime = mountPullAwayStartTime;
    }
    if ( !v8 )
    {
      v9 = _RDI->time - mountPullAwayStartTime;
      if ( v9 >= GamerProfile_GetMountPullAwayDelayKBM(ControllerFromClient) )
        return 1;
    }
  }
  return 0;
}

/*
==============
CG_ContextMount_RefineMountHintOrigin
==============
*/
void CG_ContextMount_RefineMountHintOrigin(LocalClientNum_t localClientNum)
{
  const dvar_t *v9; 
  const dvar_t *v11; 
  EdgeId edgeId; 
  CgHandler *Handler; 
  int v48; 
  char v53; 
  const dvar_t *v68; 
  hkMemoryAllocator *v69; 
  hkMemoryAllocator *v70; 
  int skipEntities; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v80; 
  vec3_t v81; 
  vec3_t end; 
  vec3_t outNormal1; 
  vec3_t outNormal0; 
  trace_t hit; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v80 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  v9 = DCONST_DVARMPBOOL_mount_indicator_inworld;
  if ( !DCONST_DVARMPBOOL_mount_indicator_inworld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_inworld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    if ( _RDI->mountHint.type )
    {
      v11 = DCONST_DVARBOOL_mount_indicator_debug;
      if ( !DCONST_DVARBOOL_mount_indicator_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
        goto LABEL_11;
      __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
      if ( !VecNCompareCustomEpsilon(_RDI->mountHint.origin.v, _RDI->mountHint.lastOriginUsedForRefined.v, *(float *)&_XMM2, 3) )
      {
LABEL_11:
        _RDI->mountHint.refinedOrigin.v[0] = _RDI->mountHint.origin.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+59F30h]
          vmovss  dword ptr [rdi+59F3Ch], xmm0
          vmovss  xmm1, dword ptr [rdi+59F34h]
          vmovss  dword ptr [rdi+59F40h], xmm1
        }
        edgeId = _RDI->mountHint.edgeId;
        Handler = CgHandler::getHandler(_RDI->localClientNum);
        Edge_CalculateNormals(Handler, edgeId, &outNormal0, &outNormal1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+130h+outNormal1]
          vaddss  xmm6, xmm0, dword ptr [rbp+130h+outNormal0]
          vmovss  xmm1, dword ptr [rbp+130h+outNormal1+4]
          vaddss  xmm5, xmm1, dword ptr [rbp+130h+outNormal0+4]
          vmovss  xmm0, dword ptr [rbp+130h+outNormal1+8]
          vaddss  xmm4, xmm0, dword ptr [rbp+130h+outNormal0+8]
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vmovss  xmm11, cs:__real@3f800000
          vblendvps xmm1, xmm1, xmm11, xmm0
          vmovss  [rsp+230h+skipEntities], xmm1
          vdivss  xmm0, xmm11, xmm1
          vmulss  xmm8, xmm6, xmm0
          vmulss  xmm9, xmm5, xmm0
          vmulss  xmm10, xmm4, xmm0
          vmovss  xmm0, dword ptr [rdi+59F2Ch]
          vmovss  dword ptr [rbp+130h+var_140], xmm0
          vmovss  xmm1, dword ptr [rdi+59F30h]
          vmovss  dword ptr [rbp+130h+var_140+4], xmm1
          vmovss  xmm0, dword ptr [rdi+59F34h]
          vmovss  dword ptr [rbp+130h+var_140+8], xmm0
        }
        _RBX = DCONST_DVARFLT_mount_indicator_raylength;
        if ( !DCONST_DVARFLT_mount_indicator_raylength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_raylength") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm8, xmm3
          vaddss  xmm2, xmm1, dword ptr [rbp+130h+var_140]
          vmovss  dword ptr [rbp+130h+end], xmm2
          vmulss  xmm0, xmm9, xmm3
          vaddss  xmm1, xmm0, dword ptr [rbp+130h+var_140+4]
          vmovss  dword ptr [rbp+130h+end+4], xmm1
          vmulss  xmm2, xmm10, xmm3
          vaddss  xmm0, xmm2, dword ptr [rbp+130h+var_140+8]
          vmovss  dword ptr [rbp+130h+end+8], xmm0
        }
        HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
        HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
        PhysicsQuery_AddEntityChainToIgnoreList(_RDI->clientNum, &ignoreBodies, 1, 1, 0, 1, 1);
        v48 = 3 * _RDI->localClientNum + 4;
        _RBX = DCONST_DVARFLT_mount_indicator_sphereradius;
        if ( !DCONST_DVARFLT_mount_indicator_sphereradius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_sphereradius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+28h]
          vxorps  xmm7, xmm7, xmm7
          vcomiss xmm6, xmm7
        }
        skipEntities = _RDI->clientNum;
        PhysicsQuery_LegacyMPCGWeaponSimTrace((Physics_WorldId)v48, &hit, &v81, &end, &bounds_origin, &skipEntities, 1, 0, 41969971, 1, NULL, All, 0);
        __asm
        {
          vmovss  xmm6, [rbp+130h+hit.fraction]
          vcomiss xmm6, xmm11
        }
        if ( v53 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h+end]
            vsubss  xmm1, xmm0, dword ptr [rbp+130h+var_140]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+130h+var_140]
            vmovss  dword ptr [rdi+59F38h], xmm3
            vmovss  xmm0, dword ptr [rbp+130h+end+4]
            vsubss  xmm1, xmm0, dword ptr [rbp+130h+var_140+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+130h+var_140+4]
            vmovss  dword ptr [rdi+59F3Ch], xmm3
            vmovss  xmm0, dword ptr [rbp+130h+end+8]
            vsubss  xmm1, xmm0, dword ptr [rbp+130h+var_140+8]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+130h+var_140+8]
            vmovss  dword ptr [rdi+59F40h], xmm3
          }
        }
        _RDI->mountHint.lastOriginUsedForRefined.v[0] = _RDI->mountHint.origin.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+59F30h]
          vmovss  dword ptr [rdi+59F50h], xmm0
          vmovss  xmm1, dword ptr [rdi+59F34h]
          vmovss  dword ptr [rdi+59F54h], xmm1
        }
        v68 = DCONST_DVARBOOL_mount_indicator_debug;
        if ( !DCONST_DVARBOOL_mount_indicator_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v68);
        if ( v68->current.enabled )
          CG_DebugLine(&v81, &end, &colorBlue, 1, 0);
        v69 = hkMemHeapAllocator();
        ignoreBodies.m_ignoreBodies.m_size = 0;
        if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v69, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        ignoreBodies.m_ignoreBodies.m_data = NULL;
        ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v70 = hkMemHeapAllocator();
        ignoreBodies.m_ignoreEntities.m_size = 0;
        if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v70, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      }
    }
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_ContextMount_TryDrawMountIndicator
==============
*/
void CG_ContextMount_TryDrawMountIndicator(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec2_t *drawSize, const vec2_t *spread, const float centerX, const float centerY, const vec4_t *color, float scale, int horzAlign, int vertAlign)
{
  const dvar_t *v14; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v34; 
  float fmt; 
  float v48; 
  vec4_t v49; 

  v14 = DCONST_DVARBOOL_mount_indicator_enable;
  if ( !DCONST_DVARBOOL_mount_indicator_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm6
      vmovaps [rsp+0D8h+var_48], xmm7
      vmovaps [rsp+0D8h+var_58], xmm8
      vmovaps [rsp+0D8h+var_68], xmm9
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals->mountHint.reticleIconType == MOUNT_ICON_TYPE_UP )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0D8h+centerY]
        vsubss  xmm1, xmm0, dword ptr [rsi+4]
        vsubss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm6, cs:__real@3f800000
        vmovss  xmm7, cs:__real@42b40000
        vsubss  xmm9, xmm2, xmm6
      }
    }
    else
    {
      if ( LocalClientGlobals->mountHint.reticleIconType != MOUNT_ICON_TYPE_DOWN )
      {
        if ( LocalClientGlobals->mountHint.reticleIconType == MOUNT_ICON_TYPE_RIGHT )
        {
          __asm
          {
            vmovss  xmm0, [rsp+0D8h+centerX]
            vaddss  xmm1, xmm0, dword ptr [rsi]
            vaddss  xmm2, xmm1, dword ptr [rdi]
            vmovss  xmm6, cs:__real@3f800000
            vmovss  xmm7, cs:__real@43340000
            vmovss  xmm9, [rsp+0D8h+centerY]
            vaddss  xmm8, xmm2, xmm6
          }
        }
        else
        {
          if ( LocalClientGlobals->mountHint.reticleIconType != MOUNT_ICON_TYPE_LEFT )
          {
LABEL_18:
            __asm
            {
              vmovaps xmm8, [rsp+0D8h+var_58]
              vmovaps xmm7, [rsp+0D8h+var_48]
              vmovaps xmm6, [rsp+0D8h+var_38]
              vmovaps xmm9, [rsp+0D8h+var_68]
            }
            return;
          }
          __asm
          {
            vmovss  xmm0, [rsp+0D8h+centerX]
            vsubss  xmm1, xmm0, dword ptr [rsi]
            vsubss  xmm2, xmm1, dword ptr [rdi]
            vmovss  xmm6, cs:__real@3f800000
            vmovss  xmm9, [rsp+0D8h+centerY]
            vsubss  xmm8, xmm2, xmm6
            vxorps  xmm7, xmm7, xmm7
          }
        }
LABEL_14:
        v34 = DCONST_DVARFLT_mount_indicator_size;
        if ( !DCONST_DVARFLT_mount_indicator_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_size") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+scale]
          vmulss  xmm3, xmm0, dword ptr [rbx+28h]; width
          vmulss  xmm1, xmm3, cs:__real@3f000000
        }
        _RAX = color;
        __asm
        {
          vsubss  xmm4, xmm8, xmm1
          vsubss  xmm2, xmm9, xmm1; y
          vmovaps xmm1, xmm4; x
          vmovss  xmm0, dword ptr [rax+0Ch]
          vmovss  [rsp+0D8h+var_A0], xmm7
          vmovss  dword ptr [rsp+0D8h+fmt], xmm3
          vmovss  dword ptr [rsp+0D8h+var_88], xmm6
          vmovss  dword ptr [rsp+0D8h+var_88+4], xmm6
          vmovss  dword ptr [rsp+0D8h+var_88+8], xmm6
          vmovss  dword ptr [rsp+0D8h+var_88+0Ch], xmm0
        }
        CG_DrawRotatedPic(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, horzAlign, vertAlign, v48, &v49, cgMedia.leanReticleHint);
        goto LABEL_18;
      }
      __asm
      {
        vmovss  xmm0, [rsp+0D8h+centerY]
        vaddss  xmm1, xmm0, dword ptr [rsi+4]
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm6, cs:__real@3f800000
        vmovss  xmm7, cs:__real@c2b40000
        vaddss  xmm9, xmm2, xmm6
      }
    }
    __asm { vmovss  xmm8, [rsp+0D8h+centerX] }
    goto LABEL_14;
  }
}

/*
==============
CG_ContextMount_UmbraOffsetTrace_Init
==============
*/
void CG_ContextMount_UmbraOffsetTrace_Init(void)
{
  int *v0; 
  unsigned int i; 
  unsigned int v2; 
  __int64 v3; 

  v0 = s_mountUmbraResultCount;
  for ( i = 0; i < 2; ++i )
  {
    v2 = 0;
    *v0 = 0;
    do
    {
      v3 = (int)v2++;
      s_mountUmbraResults[0][2i64 * (int)i + v3].state = 0;
    }
    while ( v2 < 2 );
    ++v0;
  }
}

/*
==============
CG_ContextMount_UmbraOffsetTrace_StartWorkers
==============
*/
void CG_ContextMount_UmbraOffsetTrace_StartWorkers(const LocalClientNum_t localClientNum)
{
  __int64 v13; 
  const dvar_t *v14; 
  char v18; 
  unsigned int EdgeIndex; 
  CgHandler *Handler; 
  float v23; 
  __int64 v35; 
  workerTrace_t *v37; 
  __int64 v62; 
  __int64 v64; 
  int v65; 
  vec3_t outOrg; 
  int v67[3]; 
  __int64 v68; 
  TraceWorkerCmd cmd; 
  vec3_t outParallel; 
  vec3_t outBelow; 
  vec3_t outNormal; 
  MountSurfaceProperties mount; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v13 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v65 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResultCount ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_mountUmbraResultCount )\n\t%i not in [0, %i)", localClientNum, v65) )
      __debugbreak();
  }
  s_mountUmbraResultCount[v13] = 0;
  v14 = DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces;
  if ( !DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_lateral_traces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    _RAX = (EdgeId *)CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
    _RSI = _RAX;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rax+4C8h]
    }
    if ( v18 )
    {
      if ( _RAX[145].m_entityIndex == 1 && EdgeId::IsValid(_RAX + 146) )
      {
        EdgeIndex = EdgeId::GetEdgeIndex(_RSI + 146);
        if ( MapEdgeList_IsLoaded(EdgeIndex) )
        {
          RefdefView_GetOrg((const RefdefView *)&_RSI[3366], &outOrg);
          Handler = CgHandler::getHandler((LocalClientNum_t)v13);
          MountSurfaceProperties::Initialize(&mount, Handler, (const MountSurfaceAbbreviatedProperties *)&_RSI[145].m_entityIndex);
          BG_ContextMount_CalcMountVectors(Handler, &mount, &outNormal, &outParallel, &outBelow);
          *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
          __asm
          {
            vmovss  dword ptr [rbp+1E0h+var_140], xmm6
            vmovss  dword ptr [rbp+1E0h+var_140+4], xmm6
            vmovss  dword ptr [rbp+1E0h+var_140+8], xmm6
            vmovss  dword ptr [rbp+1E0h+var_140+0Ch], xmm0
            vmovss  dword ptr [rbp+1E0h+var_130], xmm0
            vmovss  dword ptr [rbp+1E0h+var_130+4], xmm0
          }
          _ER15 = 0;
          __asm { vmovss  xmm10, dword ptr [rsp+2E0h+outOrg+8] }
          v23 = outOrg.v[2];
          __asm
          {
            vmovss  xmm11, dword ptr [rsp+2E0h+outOrg+4]
            vmovss  xmm12, dword ptr [rsp+2E0h+outOrg]
            vmovsd  xmm9, qword ptr [rsp+2E0h+outOrg]
            vmovsd  xmm13, [rbp+1E0h+var_130]
            vmovups xmm14, [rbp+1E0h+var_140]
            vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
            vmovss  xmm8, cs:__real@40000000
          }
          do
          {
            _RDI = DCONST_DVARFLT_mount_tuning_visibility_query_min_distance;
            if ( !DCONST_DVARFLT_mount_tuning_visibility_query_min_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_min_distance") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+28h]
              vmulss  xmm0, xmm0, dword ptr [rsi+4C8h]
              vmulss  xmm6, xmm0, xmm8
            }
            if ( (unsigned int)v13 >= 2 )
            {
              LODWORD(v64) = 2;
              LODWORD(v62) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 681, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResultCount ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_mountUmbraResultCount )\n\t%i not in [0, %i)", v62, v64) )
                __debugbreak();
            }
            v35 = s_mountUmbraResultCount[v13];
            s_mountUmbraResultCount[v13] = v35 + 1;
            if ( (unsigned int)_ER15 >= 2 )
            {
              LODWORD(v64) = 2;
              LODWORD(v62) = _ER15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResults[localClientNum] ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_mountUmbraResults[localClientNum] )\n\t%i not in [0, %i)", v62, v64) )
                __debugbreak();
            }
            _RAX = (v35 + 2 * v13) << 7;
            v37 = (workerTrace_t *)((char *)s_mountUmbraResults[0] + _RAX);
            *(volatile unsigned int *)((char *)&s_mountUmbraResults[0][0].state + _RAX) = 1;
            __asm { vxorps  xmm3, xmm6, xmm15 }
            LODWORD(_RAX) = 0;
            __asm
            {
              vmovd   xmm1, eax
              vmovd   xmm0, r15d
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm3, xmm6, xmm2
              vmulss  xmm1, xmm4, dword ptr [rbp+1E0h+outParallel]
              vaddss  xmm7, xmm1, xmm12
              vmovss  [rsp+2E0h+var_290], xmm7
              vmulss  xmm1, xmm4, dword ptr [rbp+1E0h+outParallel+4]
              vaddss  xmm6, xmm1, xmm11
              vmovss  [rsp+2E0h+var_28C], xmm6
              vmulss  xmm1, xmm4, dword ptr [rbp+1E0h+outParallel+8]
              vaddss  xmm2, xmm1, xmm10
              vmovss  [rsp+2E0h+var_288], xmm2
            }
            CG_InitTraceCmd((const LocalClientNum_t)v13, &cmd);
            cmd.localClientNum = v13;
            cmd.phaseSelection = All;
            cmd.results = v37;
            cmd.tracemask = 1;
            cmd.brushmask = 65553;
            __asm { vmovsd  qword ptr [rsp+2E0h+cmd.start], xmm9 }
            cmd.start.v[2] = v23;
            __asm
            {
              vunpcklps xmm1, xmm7, xmm6
              vmovsd  qword ptr [rsp+2E0h+var_290], xmm1
              vmovsd  qword ptr [rbp+1E0h+cmd.end], xmm1
            }
            LODWORD(cmd.end.v[2]) = v67[2];
            __asm
            {
              vmovups xmmword ptr [rbp+1E0h+cmd.bounds.midPoint], xmm14
              vmovsd  qword ptr [rbp+1E0h+cmd.bounds.halfSize+4], xmm13
            }
            cmd.boundsCylinder = 0;
            __asm
            {
              vmovsd  xmm0, qword ptr [rsi+699Ch]
              vmovsd  qword ptr [rbp+1E0h+cmd.viewOffset], xmm0
            }
            LODWORD(cmd.viewOffset.v[2]) = _RSI[3380].m_entityIndex;
            cmd.skelTimeStamp = 0;
            *(_QWORD *)&cmd.entIndex = -1i64;
            cmd.ps = (const playerState_s *)&_RSI[1];
            *(_QWORD *)&cmd.pointTrace.bLocational = 0i64;
            cmd.pointTrace.contentmask = 65553;
            cmd.pointTrace.ignoreEnts[0] = _RSI[58].m_entityIndex;
            cmd.pointTrace.ignoreEntCount = 1;
            cmd.pointTrace.priorityMap = NULL;
            __asm { vmovsd  qword ptr [rbp+1E0h+cmd.pointTrace.extents.start], xmm9 }
            cmd.pointTrace.extents.start.v[2] = v23;
            __asm { vmovsd  qword ptr [rbp+1E0h+cmd.pointTrace.extents.end], xmm1 }
            LODWORD(cmd.pointTrace.extents.end.v[2]) = v67[2];
            CM_CalcTraceExtents(&cmd.pointTrace.extents);
            Sys_AddWorkerCmd(WRKCMD_TRACE_MOUNT_UMBRA, &cmd);
            memset(v67, 0, sizeof(v67));
            ++_ER15;
          }
          while ( _ER15 < 2 );
          memset(&outOrg, 0, sizeof(outOrg));
        }
      }
    }
  }
  _R11 = &v76;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_ContextMount_UpdateAdsButtonPressed
==============
*/
void CG_ContextMount_UpdateAdsButtonPressed(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
  {
    _RDI->mountAdsButtonPressed = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vcomiss xmm0, dword ptr [rdi+4C8h]
    }
    if ( (cmd->buttons & 0x200) != 0 )
      _RDI->mountAdsButtonPressed = 1;
  }
}

/*
==============
CG_ContextMount_UpdateHintIcon
==============
*/
void CG_ContextMount_UpdateHintIcon(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  ContextMountType type; 
  int commandTime; 
  const dvar_t *v6; 
  int v7; 
  char v8; 
  BgWeaponMap *v9; 
  CgHandler *Handler; 
  ClActiveClient *Client; 
  const Weapon *Weapon; 
  MountSurfaceDetailedProperties *outMountProperties; 
  __int64 v18; 
  EdgeId id; 
  ContextMountIconType outIconType; 
  BgWeaponMap *weaponMap; 
  vec3_t outMountPoint; 
  MountSurfaceDetailedProperties v23; 
  WorldUpReferenceFrame v24; 
  MountFailureResult outResults; 
  MountPlayerProperties outPlayerProperties; 

  v2 = localClientNum;
  type = MOUNT_TYPE_NONE;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  id = 0i64;
  commandTime = _RDI->predictedPlayerState.commandTime;
  CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  CL_Input_IsToggleAdsEnabled((const LocalClientNum_t)v2);
  v6 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    goto LABEL_16;
  v7 = CL_Input_IsGamepadEnabled((LocalClientNum_t)v2) ? GamerProfile_GetMountButton(v2) : GamerProfile_GetMountButtonKBM(v2);
  switch ( v7 )
  {
    case 2:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_DOUBLE";
      v8 = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 8:
    case 10:
      id = (EdgeId)"PLATFORM/MOUNT_HINT";
      v8 = 1;
      break;
    case 6:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v8 = 1;
      break;
    case 7:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v8 = 1;
      break;
    case 9:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v8 = 1;
      break;
    default:
      v8 = 0;
      break;
  }
  if ( v8 )
  {
    if ( _RDI->mountHint.commandTime != commandTime && !BG_ContextMount_IsActive(&_RDI->predictedPlayerState) )
    {
      if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      weaponMap = CgWeaponMap::ms_instance[v2];
      v9 = weaponMap;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      outIconType = MOUNT_ICON_TYPE_NONE;
      __asm
      {
        vmovss  dword ptr [rsp+270h+outMountPoint], xmm0
        vmovss  dword ptr [rsp+270h+outMountPoint+4], xmm0
        vmovss  dword ptr [rsp+270h+outMountPoint+8], xmm0
      }
      Handler = CgHandler::getHandler((LocalClientNum_t)v2);
      EdgeId::Clear(&id);
      MountFailureResult::MountFailureResult(&outResults);
      if ( BG_ContextMount_IsValidMountState(v9, &_RDI->predictedPlayerState, &outResults) )
      {
        Client = ClActiveClient::GetClient((const LocalClientNum_t)v2);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v24, &_RDI->predictedPlayerState, Handler);
        Weapon = BG_ContextMount_GetWeapon(weaponMap, &_RDI->predictedPlayerState, &Client->cgameUserCmdWeapon);
        MountPlayerProperties::MountPlayerProperties(&outPlayerProperties);
        MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&v23);
        if ( BG_ContextMount_FindMountEdge(Handler, &_RDI->predictedPlayerState, &v24.m_axis, Weapon, &outPlayerProperties, &v23) )
        {
          BG_ContextMount_CalcMountPoint(Handler, &v23.mount, &outMountPoint);
          type = v23.mount.type;
          id = v23.mount.id;
          BG_ContextMount_CalcIconType(&_RDI->predictedPlayerState, weaponMap, Handler, (const ContextMountType)v23.mount.type, &outMountPoint, &outIconType);
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+270h+outMountPoint]
        vmovss  xmm1, dword ptr [rsp+270h+outMountPoint+4]
      }
      _RDI->mountHint.reticleIconType = outIconType;
      _RDI->mountHint.edgeId = id;
      _RDI->mountHint.type = type;
      __asm
      {
        vmovss  dword ptr [rdi+59F2Ch], xmm0
        vmovss  xmm0, dword ptr [rsp+270h+outMountPoint+8]
        vmovss  dword ptr [rdi+59F34h], xmm0
        vmovss  dword ptr [rdi+59F30h], xmm1
      }
      _RDI->mountHint.commandTime = commandTime;
    }
    if ( _RDI->mountHint.type >= (unsigned int)COUNT_MOUNT_TYPE )
    {
      LODWORD(v18) = 4;
      LODWORD(outMountProperties) = _RDI->mountHint.type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->mountHint.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "cgameGlob->mountHint.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outMountProperties, v18) )
        __debugbreak();
    }
    if ( _RDI->mountHint.reticleIconType >= (unsigned int)COUNT_MOUNT_ICON_TYPE )
    {
      LODWORD(v18) = 5;
      LODWORD(outMountProperties) = _RDI->mountHint.reticleIconType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 445, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->mountHint.reticleIconType ) < (unsigned)( COUNT_MOUNT_ICON_TYPE )", "cgameGlob->mountHint.reticleIconType doesn't index COUNT_MOUNT_ICON_TYPE\n\t%i not in [0, %i)", outMountProperties, v18) )
        __debugbreak();
    }
    CG_ContextMount_RefineMountHintOrigin((LocalClientNum_t)v2);
  }
  else
  {
LABEL_16:
    *(_QWORD *)&_RDI->mountHint.type = 0i64;
    _RDI->mountHint.commandTime = commandTime;
  }
}

/*
==============
CG_ContextMount_UpdateViewAngles
==============
*/
void CG_ContextMount_UpdateViewAngles(const playerState_s *const ps, vec3_t *inOutViewAngles)
{
  bool v4; 
  bool v5; 

  _RSI = inOutViewAngles;
  _RBX = ps;
  v4 = ps == NULL;
  if ( !ps )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 212, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4C0h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !v4 && (unsigned int)(_RBX->mountState.surface.type - 2) <= 1 )
  {
    _RDI = DCONST_DVARFLT_mount_side_view_roll;
    if ( !DCONST_DVARFLT_mount_side_view_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_view_roll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm4, xmm0, dword ptr [rbx+4C0h]
      vmovd   xmm0, dword ptr [rbx+484h]
      vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
    }
    _EAX = 2;
    __asm
    {
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
}

