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
void CG_ContextMount_CalcVisibilityMode(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  int integer; 
  double Float_Internal_DebugName; 
  unsigned int EdgeIndex; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  int *v15; 
  int v16; 
  int v17; 
  float *v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v29; 
  float v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  __int64 v35; 
  double v36[2]; 
  vec3_t outOrg; 
  __int64 v38; 
  __int64 v39; 
  vec3_t outEdgePoint; 
  vec3_t outNormal; 
  vec3_t outBelow; 
  vec3_t outParallel; 

  v39 = -2i64;
  v1 = localClientNum;
  v2 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    if ( LocalClientGlobals->predictedPlayerState.mountState.mountFraction > 0.0 )
    {
      v4 = DCONST_DVARINT_mount_tuning_visibility_query_mode;
      if ( !DCONST_DVARINT_mount_tuning_visibility_query_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_mode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      integer = v4->current.integer;
      LODWORD(v38) = integer;
      if ( integer )
      {
        if ( integer == 1 )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_visibility_query_min_distance, "mount_tuning_visibility_query_min_distance");
          LocalClientGlobals->refdef.view.visibilityQueryDistance = *(float *)&Float_Internal_DebugName;
        }
        else
        {
          if ( (unsigned int)(integer - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 537, ASSERT_TYPE_ASSERT, "((mode == ContextMountVisQueryMode::OFFSET) || (mode == ContextMountVisQueryMode::VISIBILITY_OFFSET))", (const char *)&queryFormat, "(mode == ContextMountVisQueryMode::OFFSET) || (mode == ContextMountVisQueryMode::VISIBILITY_OFFSET)") )
            __debugbreak();
          EdgeIndex = EdgeId::GetEdgeIndex(&LocalClientGlobals->predictedPlayerState.mountState.surface.id);
          if ( MapEdgeList_IsLoaded(EdgeIndex) )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "CG_ContextMount_CalcVisibilityMode");
            RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
            Edge_CalculatePoint(&LocalClientGlobals->m_bgHandler, LocalClientGlobals->predictedPlayerState.mountState.surface.id, LocalClientGlobals->predictedPlayerState.mountState.surface.fraction, &outEdgePoint);
            Edge_CalculateVectors(&LocalClientGlobals->m_bgHandler, LocalClientGlobals->predictedPlayerState.mountState.surface.id, LocalClientGlobals->predictedPlayerState.mountState.surface.fraction, LocalClientGlobals->predictedPlayerState.mountState.surface.normalFaceIndex, &outNormal, &outParallel, &outBelow);
            v8 = 0i64;
            v9 = 0i64;
            v10 = 0i64;
            v11 = 0.0;
            v12 = 0.0;
            v13 = 0.0;
            if ( LocalClientGlobals->predictedPlayerState.mountState.surface.type == MOUNT_TYPE_TOP && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces, "mount_tuning_visibility_query_lateral_traces") )
            {
              v14 = v1;
              v15 = &s_mountUmbraResultCount[v1];
              if ( *v15 > 0 )
              {
                if ( *v15 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 562, ASSERT_TYPE_ASSERT, "( s_mountUmbraResultCount[localClientNum] ) == ( 2 )", "%s == %s\n\t%i, %i", "s_mountUmbraResultCount[localClientNum]", "2", *v15, 2) )
                  __debugbreak();
                Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_TRACE_MOUNT_UMBRA);
                v16 = 0;
                v17 = *v15;
                if ( *v15 > 0 )
                {
                  v18 = &s_mountUmbraResults[v14][0].start.v[1];
                  do
                  {
                    if ( *((_DWORD *)v18 - 2) != 2 )
                    {
                      LODWORD(v35) = 2;
                      *(float *)&v34 = *(v18 - 2);
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 569, ASSERT_TYPE_ASSERT, "( result->state ) == ( WORKER_TRACE_FINISHED )", "%s == %s\n\t%i, %i", "result->state", "WORKER_TRACE_FINISHED", v34, v35) )
                        __debugbreak();
                    }
                    if ( !*((_BYTE *)v18 - 31) && !*((_BYTE *)v18 - 32) )
                    {
                      v19 = *(v18 - 24);
                      v20 = v8;
                      *(float *)&v20 = *(float *)&v8 + (float)(v19 * (float)(v18[2] - *(v18 - 1)));
                      v8 = v20;
                      v21 = v9;
                      *(float *)&v21 = *(float *)&v9 + (float)(v19 * (float)(v18[3] - *v18));
                      v9 = v21;
                      v22 = v10;
                      *(float *)&v22 = *(float *)&v10 + (float)(v19 * (float)(v18[4] - v18[1]));
                      v10 = v22;
                    }
                    ++v16;
                    v18 += 32;
                    v17 = *v15;
                  }
                  while ( v16 < *v15 );
                  integer = v38;
                }
                v23 = 1.0 / (float)v17;
                v11 = *(float *)&v8 * v23;
                v12 = *(float *)&v9 * v23;
                v13 = *(float *)&v10 * v23;
              }
            }
            v24 = *(unsigned __int64 *)outOrg.v;
            v36[0] = *(double *)outOrg.v;
            v25 = v11 + outOrg.v[0];
            v26 = v12 + *((float *)v36 + 1);
            v27 = v13 + outOrg.v[2];
            *(double *)&v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_visibility_query_min_distance, "mount_tuning_visibility_query_min_distance");
            v29 = v24;
            *(float *)&v29 = *(float *)&v24 - (float)((float)((float)((float)(v26 - outEdgePoint.v[1]) * outNormal.v[1]) + (float)((float)(v25 - outEdgePoint.v[0]) * outNormal.v[0])) + (float)((float)(v27 - outEdgePoint.v[2]) * outNormal.v[2]));
            _XMM0 = v29;
            __asm { vmaxss  xmm2, xmm0, xmm12 }
            *(float *)&v29 = *(float *)&_XMM2 * outNormal.v[1];
            v31 = *(float *)&_XMM2 * outNormal.v[2];
            v32 = (float)((float)(*(float *)&_XMM2 * outNormal.v[0]) + v25) - outOrg.v[0];
            LocalClientGlobals->refdef.view.visibilityOffset.v[0] = v32;
            *(float *)&v29 = (float)(*(float *)&v29 + v26) - outOrg.v[1];
            LocalClientGlobals->refdef.view.visibilityOffset.v[1] = *(float *)&v29;
            v33 = (float)(v31 + v27) - outOrg.v[2];
            LocalClientGlobals->refdef.view.visibilityOffset.v[2] = v33;
            LocalClientGlobals->refdef.view.visibilityQueryDistance = fsqrt((float)((float)(*(float *)&v29 * *(float *)&v29) + (float)(v32 * v32)) + (float)(v33 * v33));
            LocalClientGlobals->refdef.view.visibilityOffsetApplyToRefPoint = integer == 2;
            memset(v36, 0, 0xCui64);
            memset(&outOrg, 0, sizeof(outOrg));
            Sys_ProfEndNamedEvent();
          }
        }
      }
    }
  }
}

/*
==============
CG_ContextMount_CanEmitMountButton
==============
*/
bool CG_ContextMount_CanEmitMountButton(const LocalClientNum_t localClientNum, const unsigned __int64 cmdButtons)
{
  __int16 v2; 
  int MountButton; 
  bool result; 

  v2 = cmdButtons;
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
      result = (v2 & 0x200) != 0i64;
      break;
    case 10:
      result = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0;
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
void CG_ContextMount_DrawHint(const LocalClientNum_t localClientNum, const rectDef_s *const rect, GfxFont *const font, const float scale, const int textStyle)
{
  const dvar_t *v5; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  char *v10; 
  char *v11; 
  const char *v12; 
  const char *v13; 
  int vertAlign; 
  int horzAlign; 
  float y; 
  float v19; 
  bool v20; 
  const ScreenPlacement *v21; 
  char *outCommands; 
  char *outMountPrompt; 
  char dstString[256]; 

  v5 = DCONST_DVARMPBOOL_mount_hint_enable;
  v7 = localClientNum;
  if ( !DCONST_DVARMPBOOL_mount_hint_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_hint_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    if ( LocalClientGlobals->mountHint.reticleIconType )
    {
      if ( LocalClientGlobals->predictedPlayerState.mountState.mountFraction <= 0.0 )
      {
        outCommands = NULL;
        outMountPrompt = NULL;
        if ( CG_ContextMount_GetPromptInfo((const LocalClientNum_t)v7, 0, (const char **)&outCommands, (const char **)&outMountPrompt) )
        {
          v10 = outCommands;
          if ( !outCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 197, ASSERT_TYPE_ASSERT, "(commands != nullptr)", (const char *)&queryFormat, "commands != nullptr") )
            __debugbreak();
          UI_ReplaceDirective((LocalClientNum_t)v7, v10, dstString, 0x100ui64, 0);
          v11 = outMountPrompt;
          if ( !outMountPrompt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 200, ASSERT_TYPE_ASSERT, "(mountPrompt != nullptr)", (const char *)&queryFormat, "mountPrompt != nullptr") )
            __debugbreak();
          v12 = UI_SafeTranslateString(v11);
          v13 = UI_ReplaceConversionString(v12, dstString);
          UI_TextWidth(v13, 0, font, scale);
          vertAlign = rect->vertAlign;
          horzAlign = rect->horzAlign;
          y = rect->y;
          _XMM0 = 0i64;
          __asm { vroundss xmm4, xmm0, xmm2, 1 }
          v19 = rect->x - (float)(int)*(float *)&_XMM4;
          if ( activeScreenPlacementMode )
          {
            if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
            {
              v21 = &scrPlaceViewDisplay[v7];
              goto LABEL_21;
            }
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v20 )
              __debugbreak();
          }
          v21 = &scrPlaceFull;
LABEL_21:
          UI_DrawText(v21, v13, 0x7FFFFFFF, font, v19, y, horzAlign, vertAlign, scale, &colorWhite, textStyle);
        }
      }
    }
  }
}

/*
==============
CG_ContextMount_GetPromptInfo
==============
*/
bool CG_ContextMount_GetPromptInfo(const LocalClientNum_t localClientNum, const bool displayInWorldHint, const char **outCommands, const char **outMountPrompt)
{
  bool v8; 
  bool IsToggleAdsEnabled; 
  const dvar_t *v10; 
  bool v11; 
  int MountButton; 
  bool result; 
  const char *v14; 

  if ( !outCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 82, ASSERT_TYPE_ASSERT, "(outCommands)", (const char *)&queryFormat, "outCommands") )
    __debugbreak();
  if ( !outMountPrompt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 83, ASSERT_TYPE_ASSERT, "(outMountPrompt)", (const char *)&queryFormat, "outMountPrompt") )
    __debugbreak();
  v8 = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0;
  IsToggleAdsEnabled = CL_Input_IsToggleAdsEnabled(localClientNum);
  v10 = DCONST_DVARMPBOOL_mount_enable;
  v11 = IsToggleAdsEnabled;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
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
      if ( !v8 && !displayInWorldHint )
        return 0;
      v14 = "[{+melee,+melee_zoom,+melee_breath}]";
      goto LABEL_33;
    case 4:
      if ( !v8 && !displayInWorldHint )
        return 0;
      v14 = "[{+sprint,+sprint_zoom,+breath_sprint}]";
      goto LABEL_33;
    case 5:
      v14 = "[{+smoke}]";
      goto LABEL_33;
    case 6:
      *outCommands = "[{+smoke}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 7:
      if ( v11 && v8 && !displayInWorldHint )
        return 0;
      *outCommands = "[{+speed_throw,+ads_akimbo_accessible}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 8:
      v14 = "[{+mount}]";
      goto LABEL_33;
    case 9:
      *outCommands = "[{+mount}]";
      *outMountPrompt = "PLATFORM/MOUNT_HINT_HOLD";
      return 1;
    case 10:
      if ( !v8 && !displayInWorldHint )
        return 0;
      v14 = "[{+activate}]";
LABEL_33:
      *outCommands = v14;
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
  cg_t *LocalClientGlobals; 
  int ControllerFromClient; 
  int mountPullAwayStartTime; 
  bool v7; 
  int v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (cmd->buttons & 0x80000000000000i64) != 0 || (cmd->stateFlags & 8) != 0 || LocalClientGlobals->predictedPlayerState.mountState.mountFraction < 1.0 || !cmd->forwardmove && !cmd->rightmove )
  {
    LocalClientGlobals->mountPullAwayStartTime = 0;
  }
  else
  {
    mountPullAwayStartTime = LocalClientGlobals->mountPullAwayStartTime;
    v7 = mountPullAwayStartTime <= 0;
    if ( !mountPullAwayStartTime )
    {
      mountPullAwayStartTime = LocalClientGlobals->time;
      v7 = mountPullAwayStartTime <= 0;
      LocalClientGlobals->mountPullAwayStartTime = mountPullAwayStartTime;
    }
    if ( !v7 )
    {
      v8 = LocalClientGlobals->time - mountPullAwayStartTime;
      if ( v8 >= GamerProfile_GetMountPullAwayDelayKBM(ControllerFromClient) )
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
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  EdgeId edgeId; 
  CgHandler *Handler; 
  __int128 v7; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  int v16; 
  char v17; 
  const dvar_t *v18; 
  float value; 
  hknpShape *ShapeSphere; 
  char v23; 
  const vec3_t *p_start; 
  float fraction; 
  const dvar_t *v26; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  int skipEntities; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v32; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outNormal1; 
  vec3_t outNormal0; 
  trace_t hit; 

  v32 = -2i64;
  v2 = DCONST_DVARMPBOOL_mount_indicator_inworld;
  if ( !DCONST_DVARMPBOOL_mount_indicator_inworld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_inworld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals->mountHint.type )
    {
      v4 = DCONST_DVARBOOL_mount_indicator_debug;
      if ( !DCONST_DVARBOOL_mount_indicator_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled || !VecNCompareCustomEpsilon(LocalClientGlobals->mountHint.origin.v, LocalClientGlobals->mountHint.lastOriginUsedForRefined.v, 0.001, 3) )
      {
        LocalClientGlobals->mountHint.refinedOrigin.v[0] = LocalClientGlobals->mountHint.origin.v[0];
        LocalClientGlobals->mountHint.refinedOrigin.v[1] = LocalClientGlobals->mountHint.origin.v[1];
        LocalClientGlobals->mountHint.refinedOrigin.v[2] = LocalClientGlobals->mountHint.origin.v[2];
        edgeId = LocalClientGlobals->mountHint.edgeId;
        Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
        Edge_CalculateNormals(Handler, edgeId, &outNormal0, &outNormal1);
        v7 = LODWORD(outNormal1.v[1]);
        *(float *)&v7 = fsqrt((float)((float)((float)(outNormal1.v[1] + outNormal0.v[1]) * (float)(outNormal1.v[1] + outNormal0.v[1])) + (float)((float)(outNormal1.v[0] + outNormal0.v[0]) * (float)(outNormal1.v[0] + outNormal0.v[0]))) + (float)((float)(outNormal1.v[2] + outNormal0.v[2]) * (float)(outNormal1.v[2] + outNormal0.v[2])));
        _XMM1 = v7;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm1, xmm1, xmm11, xmm0
        }
        skipEntities = _XMM1;
        v11 = (float)(outNormal1.v[0] + outNormal0.v[0]) * (float)(1.0 / *(float *)&_XMM1);
        v12 = (float)(outNormal1.v[1] + outNormal0.v[1]) * (float)(1.0 / *(float *)&_XMM1);
        v13 = (float)(outNormal1.v[2] + outNormal0.v[2]) * (float)(1.0 / *(float *)&_XMM1);
        origin = LocalClientGlobals->mountHint.origin;
        v14 = DCONST_DVARFLT_mount_indicator_raylength;
        if ( !DCONST_DVARFLT_mount_indicator_raylength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_raylength") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        LODWORD(v15) = v14->current.integer ^ _xmm;
        end.v[0] = (float)(v11 * v15) + origin.v[0];
        end.v[1] = (float)(v12 * v15) + origin.v[1];
        end.v[2] = (float)(v13 * v15) + origin.v[2];
        HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
        HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
        PhysicsQuery_AddEntityChainToIgnoreList(LocalClientGlobals->clientNum, &ignoreBodies, 1, 1, 0, 1, 1);
        v16 = 3 * LocalClientGlobals->localClientNum + 4;
        v17 = 1;
        v18 = DCONST_DVARFLT_mount_indicator_sphereradius;
        if ( !DCONST_DVARFLT_mount_indicator_sphereradius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_sphereradius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        value = v18->current.value;
        if ( value <= 0.0 )
          goto LABEL_30;
        start.v[0] = (float)(v11 * value) + origin.v[0];
        start.v[1] = (float)(v12 * value) + origin.v[1];
        start.v[2] = (float)(v13 * value) + origin.v[2];
        extendedData.startTolerance = 0.0;
        _XMM0 = LODWORD(FLOAT_0_016000001);
        extendedData.accuracy = FLOAT_0_016000001;
        extendedData.simplifyStart = 0;
        extendedData.collisionBuffer = 0.0;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
        extendedData.phaseSelection = All;
        extendedData.contents = 41969971;
        extendedData.ignoreBodies = &ignoreBodies;
        extendedData.permitOutwardTrace = 0;
        ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, value, NULL, 0);
        if ( !ShapeSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 330, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
          __debugbreak();
        PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v16, ShapeSphere, &start, &end, &quat_identity, &extendedData, (PhysicsQuery_ShapecastHit *)&hit);
        Physics_ReleaseShape((Physics_WorldId)v16, ShapeSphere, 1);
        if ( LOBYTE(hit.fraction) && hit.position.v[0] > 0.0 )
        {
          v23 = 1;
          LocalClientGlobals->mountHint.refinedOrigin.v[0] = hit.position.v[1];
          LocalClientGlobals->mountHint.refinedOrigin.v[1] = hit.position.v[2];
          LocalClientGlobals->mountHint.refinedOrigin.v[2] = hit.normal.v[0];
          v17 = 0;
        }
        else
        {
          v23 = 0;
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mount_indicator_debug, "mount_indicator_debug") )
        {
          p_start = (const vec3_t *)&hit.normal.v[1];
          if ( !v23 )
            p_start = &start;
          CG_DebugSphere(p_start, value, &colorGreen, 1, 0);
        }
        if ( v17 )
        {
LABEL_30:
          skipEntities = LocalClientGlobals->clientNum;
          PhysicsQuery_LegacyMPCGWeaponSimTrace((Physics_WorldId)v16, &hit, &origin, &end, &bounds_origin, &skipEntities, 1, 0, 41969971, 1, NULL, All, 0);
          fraction = hit.fraction;
          if ( hit.fraction < 1.0 )
          {
            LocalClientGlobals->mountHint.refinedOrigin.v[0] = (float)((float)(end.v[0] - origin.v[0]) * hit.fraction) + origin.v[0];
            LocalClientGlobals->mountHint.refinedOrigin.v[1] = (float)((float)(end.v[1] - origin.v[1]) * fraction) + origin.v[1];
            LocalClientGlobals->mountHint.refinedOrigin.v[2] = (float)((float)(end.v[2] - origin.v[2]) * fraction) + origin.v[2];
          }
        }
        LocalClientGlobals->mountHint.lastOriginUsedForRefined.v[0] = LocalClientGlobals->mountHint.origin.v[0];
        LocalClientGlobals->mountHint.lastOriginUsedForRefined.v[1] = LocalClientGlobals->mountHint.origin.v[1];
        LocalClientGlobals->mountHint.lastOriginUsedForRefined.v[2] = LocalClientGlobals->mountHint.origin.v[2];
        v26 = DCONST_DVARBOOL_mount_indicator_debug;
        if ( !DCONST_DVARBOOL_mount_indicator_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled )
          CG_DebugLine(&origin, &end, &colorBlue, 1, 0);
        v27 = hkMemHeapAllocator();
        ignoreBodies.m_ignoreBodies.m_size = 0;
        if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v27, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        ignoreBodies.m_ignoreBodies.m_data = NULL;
        ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v28 = hkMemHeapAllocator();
        ignoreBodies.m_ignoreEntities.m_size = 0;
        if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v28, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      }
    }
  }
}

/*
==============
CG_ContextMount_TryDrawMountIndicator
==============
*/
void CG_ContextMount_TryDrawMountIndicator(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec2_t *drawSize, const vec2_t *spread, const float centerX, const float centerY, const vec4_t *color, float scale, int horzAlign, int vertAlign)
{
  const dvar_t *v10; 
  cg_t *LocalClientGlobals; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  vec4_t v23; 

  v10 = DCONST_DVARBOOL_mount_indicator_enable;
  if ( !DCONST_DVARBOOL_mount_indicator_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals->mountHint.reticleIconType == MOUNT_ICON_TYPE_UP )
    {
      v16 = FLOAT_1_0;
      v19 = FLOAT_90_0;
      v17 = (float)((float)(centerY - drawSize->v[1]) - spread->v[1]) - 1.0;
    }
    else
    {
      if ( LocalClientGlobals->mountHint.reticleIconType != MOUNT_ICON_TYPE_DOWN )
      {
        if ( LocalClientGlobals->mountHint.reticleIconType == MOUNT_ICON_TYPE_RIGHT )
        {
          v16 = FLOAT_1_0;
          v19 = FLOAT_180_0;
          v17 = centerY;
          v18 = (float)((float)(centerX + drawSize->v[0]) + spread->v[0]) + 1.0;
        }
        else
        {
          if ( LocalClientGlobals->mountHint.reticleIconType != MOUNT_ICON_TYPE_LEFT )
            return;
          v16 = FLOAT_1_0;
          v17 = centerY;
          v18 = (float)((float)(centerX - drawSize->v[0]) - spread->v[0]) - 1.0;
          v19 = 0.0;
        }
        goto LABEL_14;
      }
      v16 = FLOAT_1_0;
      v19 = FLOAT_N90_0;
      v17 = (float)((float)(centerY + drawSize->v[1]) + spread->v[1]) + 1.0;
    }
    v18 = centerX;
LABEL_14:
    v20 = DCONST_DVARFLT_mount_indicator_size;
    if ( !DCONST_DVARFLT_mount_indicator_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_indicator_size") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = scale * v20->current.value;
    v22 = color->v[3];
    v23.v[0] = v16;
    v23.v[1] = v16;
    v23.v[2] = v16;
    v23.v[3] = v22;
    CG_DrawRotatedPic(scrPlace, v18 - (float)(v21 * 0.5), v17 - (float)(v21 * 0.5), v21, v21, horzAlign, vertAlign, v19, &v23, cgMedia.leanReticleHint);
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
  __int64 v1; 
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  unsigned int EdgeIndex; 
  CgHandler *Handler; 
  double v7; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  double v13; 
  double v14; 
  __int128 v15; 
  const dvar_t *v16; 
  __int128 unsignedInt; 
  __int64 v18; 
  __int64 v19; 
  workerTrace_t *v20; 
  __int128 v25; 
  __int64 v28; 
  __int64 v29; 
  vec3_t outOrg; 
  double v31[4]; 
  TraceWorkerCmd cmd; 
  vec3_t outParallel; 
  __int128 v34; 
  double v35; 
  vec3_t outBelow; 
  vec3_t outNormal; 
  MountSurfaceProperties mount; 

  v31[3] = NAN;
  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResultCount ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_mountUmbraResultCount )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  s_mountUmbraResultCount[v1] = 0;
  v2 = DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces;
  if ( !DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_lateral_traces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    v4 = LocalClientGlobals;
    if ( LocalClientGlobals->predictedPlayerState.mountState.mountFraction > 0.0 && LocalClientGlobals->predictedPlayerState.mountState.surface.type == MOUNT_TYPE_TOP && EdgeId::IsValid(&LocalClientGlobals->predictedPlayerState.mountState.surface.id) )
    {
      EdgeIndex = EdgeId::GetEdgeIndex(&v4->predictedPlayerState.mountState.surface.id);
      if ( MapEdgeList_IsLoaded(EdgeIndex) )
      {
        RefdefView_GetOrg(&v4->refdef.view, &outOrg);
        Handler = CgHandler::getHandler((LocalClientNum_t)v1);
        MountSurfaceProperties::Initialize(&mount, Handler, &v4->predictedPlayerState.mountState.surface);
        BG_ContextMount_CalcMountVectors(Handler, &mount, &outNormal, &outParallel, &outBelow);
        v7 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
        *(float *)&v34 = 0.0;
        *((float *)&v34 + 1) = 0.0;
        *((float *)&v34 + 2) = 0.0;
        *((float *)&v34 + 3) = *(float *)&v7;
        *(float *)&v35 = *(float *)&v7;
        *((float *)&v35 + 1) = *(float *)&v7;
        v8 = 0;
        v9 = outOrg.v[2];
        v10 = outOrg.v[2];
        v11 = outOrg.v[1];
        v12 = outOrg.v[0];
        v13 = *(double *)outOrg.v;
        v14 = v35;
        v15 = v34;
        do
        {
          v16 = DCONST_DVARFLT_mount_tuning_visibility_query_min_distance;
          if ( !DCONST_DVARFLT_mount_tuning_visibility_query_min_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_visibility_query_min_distance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          unsignedInt = v16->current.unsignedInt;
          *(float *)&unsignedInt = (float)(v16->current.value * v4->predictedPlayerState.mountState.mountFraction) * 2.0;
          if ( (unsigned int)v1 >= 2 )
          {
            LODWORD(v29) = 2;
            LODWORD(v28) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 681, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResultCount ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_mountUmbraResultCount )\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          v18 = s_mountUmbraResultCount[v1];
          s_mountUmbraResultCount[v1] = v18 + 1;
          if ( (unsigned int)v8 >= 2 )
          {
            LODWORD(v29) = 2;
            LODWORD(v28) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_mountUmbraResults[localClientNum] ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_mountUmbraResults[localClientNum] )\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          v19 = (v18 + 2 * v1) << 7;
          v20 = (workerTrace_t *)((char *)s_mountUmbraResults[0] + v19);
          *(volatile unsigned int *)((char *)&s_mountUmbraResults[0][0].state + v19) = 1;
          _XMM3 = unsignedInt ^ (unsigned int)_xmm;
          _XMM0 = (unsigned int)v8;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm4, xmm3, xmm6, xmm2
          }
          v25 = _XMM4;
          *(float *)&v25 = (float)(*(float *)&_XMM4 * outParallel.v[0]) + v12;
          _XMM7 = v25;
          *(float *)v31 = *(float *)&v25;
          *((float *)v31 + 1) = (float)(*(float *)&_XMM4 * outParallel.v[1]) + v11;
          *(float *)&v31[1] = (float)(*(float *)&_XMM4 * outParallel.v[2]) + v9;
          CG_InitTraceCmd((const LocalClientNum_t)v1, &cmd);
          cmd.localClientNum = v1;
          cmd.phaseSelection = All;
          cmd.results = v20;
          cmd.tracemask = 1;
          cmd.brushmask = 65553;
          *(double *)cmd.start.v = v13;
          cmd.start.v[2] = v10;
          __asm { vunpcklps xmm1, xmm7, xmm6 }
          v31[0] = *(double *)&_XMM1;
          *(double *)cmd.end.v = *(double *)&_XMM1;
          cmd.end.v[2] = *(float *)&v31[1];
          *(_OWORD *)cmd.bounds.midPoint.v = v15;
          *(double *)&cmd.bounds.halfSize.y = v14;
          cmd.boundsCylinder = 0;
          cmd.viewOffset = v4->refdef.viewOffset;
          cmd.skelTimeStamp = 0;
          *(_QWORD *)&cmd.entIndex = -1i64;
          cmd.ps = &v4->predictedPlayerState;
          *(_QWORD *)&cmd.pointTrace.bLocational = 0i64;
          cmd.pointTrace.contentmask = 65553;
          cmd.pointTrace.ignoreEnts[0] = v4->predictedPlayerState.clientNum;
          cmd.pointTrace.ignoreEntCount = 1;
          cmd.pointTrace.priorityMap = NULL;
          *(double *)cmd.pointTrace.extents.start.v = v13;
          cmd.pointTrace.extents.start.v[2] = v10;
          *(double *)cmd.pointTrace.extents.end.v = *(double *)&_XMM1;
          cmd.pointTrace.extents.end.v[2] = *(float *)&v31[1];
          CM_CalcTraceExtents(&cmd.pointTrace.extents);
          Sys_AddWorkerCmd(WRKCMD_TRACE_MOUNT_UMBRA, &cmd);
          memset(v31, 0, 0xCui64);
          ++v8;
        }
        while ( v8 < 2 );
        memset(&outOrg, 0, sizeof(outOrg));
      }
    }
  }
}

/*
==============
CG_ContextMount_UpdateAdsButtonPressed
==============
*/
void CG_ContextMount_UpdateAdsButtonPressed(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( CL_Input_IsGamepadEnabled(localClientNum) || LocalClientGlobals->predictedPlayerState.mountState.mountFraction < 1.0 )
  {
    LocalClientGlobals->mountAdsButtonPressed = 0;
  }
  else if ( (cmd->buttons & 0x200) != 0 )
  {
    LocalClientGlobals->mountAdsButtonPressed = 1;
  }
}

/*
==============
CG_ContextMount_UpdateHintIcon
==============
*/
void CG_ContextMount_UpdateHintIcon(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ContextMountType type; 
  cg_t *LocalClientGlobals; 
  int commandTime; 
  const dvar_t *v5; 
  int v6; 
  char v7; 
  BgWeaponMap *v8; 
  CgHandler *Handler; 
  ClActiveClient *Client; 
  const Weapon *Weapon; 
  float v12; 
  float v13; 
  MountSurfaceDetailedProperties *outMountProperties; 
  __int64 v15; 
  EdgeId id; 
  ContextMountIconType outIconType; 
  BgWeaponMap *weaponMap; 
  vec3_t outMountPoint; 
  MountSurfaceDetailedProperties v20; 
  WorldUpReferenceFrame v21; 
  MountFailureResult outResults; 
  MountPlayerProperties outPlayerProperties; 

  v1 = localClientNum;
  type = MOUNT_TYPE_NONE;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  id = 0i64;
  commandTime = LocalClientGlobals->predictedPlayerState.commandTime;
  CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  CL_Input_IsToggleAdsEnabled((const LocalClientNum_t)v1);
  v5 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    goto LABEL_16;
  v6 = CL_Input_IsGamepadEnabled((LocalClientNum_t)v1) ? GamerProfile_GetMountButton(v1) : GamerProfile_GetMountButtonKBM(v1);
  switch ( v6 )
  {
    case 2:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_DOUBLE";
      v7 = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 8:
    case 10:
      id = (EdgeId)"PLATFORM/MOUNT_HINT";
      v7 = 1;
      break;
    case 6:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v7 = 1;
      break;
    case 7:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v7 = 1;
      break;
    case 9:
      id = (EdgeId)"PLATFORM/MOUNT_HINT_HOLD";
      v7 = 1;
      break;
    default:
      v7 = 0;
      break;
  }
  if ( v7 )
  {
    if ( LocalClientGlobals->mountHint.commandTime != commandTime && !BG_ContextMount_IsActive(&LocalClientGlobals->predictedPlayerState) )
    {
      if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      weaponMap = CgWeaponMap::ms_instance[v1];
      v8 = weaponMap;
      outIconType = MOUNT_ICON_TYPE_NONE;
      outMountPoint.v[0] = 0.0;
      outMountPoint.v[1] = 0.0;
      outMountPoint.v[2] = 0.0;
      Handler = CgHandler::getHandler((LocalClientNum_t)v1);
      EdgeId::Clear(&id);
      MountFailureResult::MountFailureResult(&outResults);
      if ( BG_ContextMount_IsValidMountState(v8, &LocalClientGlobals->predictedPlayerState, &outResults) )
      {
        Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v21, &LocalClientGlobals->predictedPlayerState, Handler);
        Weapon = BG_ContextMount_GetWeapon(weaponMap, &LocalClientGlobals->predictedPlayerState, &Client->cgameUserCmdWeapon);
        MountPlayerProperties::MountPlayerProperties(&outPlayerProperties);
        MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&v20);
        if ( BG_ContextMount_FindMountEdge(Handler, &LocalClientGlobals->predictedPlayerState, &v21.m_axis, Weapon, &outPlayerProperties, &v20) )
        {
          BG_ContextMount_CalcMountPoint(Handler, &v20.mount, &outMountPoint);
          type = v20.mount.type;
          id = v20.mount.id;
          BG_ContextMount_CalcIconType(&LocalClientGlobals->predictedPlayerState, weaponMap, Handler, (const ContextMountType)v20.mount.type, &outMountPoint, &outIconType);
        }
      }
      v12 = outMountPoint.v[0];
      v13 = outMountPoint.v[1];
      LocalClientGlobals->mountHint.reticleIconType = outIconType;
      LocalClientGlobals->mountHint.edgeId = id;
      LocalClientGlobals->mountHint.type = type;
      LocalClientGlobals->mountHint.origin.v[0] = v12;
      LocalClientGlobals->mountHint.origin.v[2] = outMountPoint.v[2];
      LocalClientGlobals->mountHint.origin.v[1] = v13;
      LocalClientGlobals->mountHint.commandTime = commandTime;
    }
    if ( LocalClientGlobals->mountHint.type >= (unsigned int)COUNT_MOUNT_TYPE )
    {
      LODWORD(v15) = 4;
      LODWORD(outMountProperties) = LocalClientGlobals->mountHint.type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 444, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->mountHint.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "cgameGlob->mountHint.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outMountProperties, v15) )
        __debugbreak();
    }
    if ( LocalClientGlobals->mountHint.reticleIconType >= (unsigned int)COUNT_MOUNT_ICON_TYPE )
    {
      LODWORD(v15) = 5;
      LODWORD(outMountProperties) = LocalClientGlobals->mountHint.reticleIconType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 445, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->mountHint.reticleIconType ) < (unsigned)( COUNT_MOUNT_ICON_TYPE )", "cgameGlob->mountHint.reticleIconType doesn't index COUNT_MOUNT_ICON_TYPE\n\t%i not in [0, %i)", outMountProperties, v15) )
        __debugbreak();
    }
    CG_ContextMount_RefineMountHintOrigin((LocalClientNum_t)v1);
  }
  else
  {
LABEL_16:
    *(_QWORD *)&LocalClientGlobals->mountHint.type = 0i64;
    LocalClientGlobals->mountHint.commandTime = commandTime;
  }
}

/*
==============
CG_ContextMount_UpdateViewAngles
==============
*/
void CG_ContextMount_UpdateViewAngles(const playerState_s *const ps, vec3_t *inOutViewAngles)
{
  const dvar_t *v4; 
  __int128 unsignedInt; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_context_mount.cpp", 212, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->mountState.mountFraction > 0.000001 && (unsigned int)(ps->mountState.surface.type - 2) <= 1 )
  {
    v4 = DCONST_DVARFLT_mount_side_view_roll;
    if ( !DCONST_DVARFLT_mount_side_view_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_view_roll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    unsignedInt = v4->current.unsignedInt;
    *(float *)&unsignedInt = v4->current.value * ps->mountState.mountFraction;
    _XMM4 = unsignedInt;
    _XMM0 = (unsigned int)ps->mountState.surface.type;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    inOutViewAngles->v[2] = *(float *)&_XMM1 + inOutViewAngles->v[2];
  }
}

