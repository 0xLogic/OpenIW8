/*
==============
CG_DrawDebugSP_DrawFrontendOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawFrontendOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawGameMsgWindows
==============
*/

void __fastcall CgDrawDebugSP::DrawGameMsgWindows(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?DrawGameMsgWindows@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CG_DrawDebugSP_DrawNoGameModeOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawNoGameModeOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawTransientOverlays
==============
*/

void __fastcall CgDrawDebugSP::DrawTransientOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawTransientOverlays@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugSP::PrintStreamingPos
==============
*/

double __fastcall CgDrawDebugSP::PrintStreamingPos(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintStreamingPos@CgDrawDebugSP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CgDrawDebugSP::DrawAnimationOverlays
==============
*/

void __fastcall CgDrawDebugSP::DrawAnimationOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawAnimationOverlays@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugSP::CgDrawDebugSP
==============
*/

void __fastcall CgDrawDebugSP::CgDrawDebugSP(CgDrawDebugSP *this)
{
  ??0CgDrawDebugSP@@QEAA@XZ(this);
}

/*
==============
CG_DrawDebugSP_DrawPSFlags
==============
*/

void __fastcall CG_DrawDebugSP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawPSFlags@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawEntitiesLoD
==============
*/

void __fastcall CgDrawDebugSP::DrawEntitiesLoD(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawEntitiesLoD@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawSaveInfo
==============
*/

void __fastcall CG_DrawDebugSP_DrawSaveInfo(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawSaveInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawDebugOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawClientNetPerf
==============
*/

double __fastcall CgDrawDebugSP::DrawClientNetPerf(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?DrawClientNetPerf@CgDrawDebugSP@@MEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugSP_DrawFullScreenDebugOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawFullScreenDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::PrintUpperRightDebugInfo
==============
*/

void __fastcall CgDrawDebugSP::PrintUpperRightDebugInfo(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?PrintUpperRightDebugInfo@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CgDrawDebugSP::CgDrawDebugSP
==============
*/
void CgDrawDebugSP::CgDrawDebugSP(CgDrawDebugSP *this)
{
  this->__vftable = (CgDrawDebugSP_vtbl *)&CgDrawDebugSP::`vftable';
}

/*
==============
CG_DrawDebugSP_DrawAIAnimTreeRecurse
==============
*/

float __fastcall CG_DrawDebugSP_DrawAIAnimTreeRecurse(const ScreenPlacement *scrPlace, float x, double y, float scale, const DObj *obj, const XAnimTree *tree, unsigned __int16 infoIndex, int depth)
{
  float v10; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  __int64 v13; 
  float v14; 
  float weight; 
  const vec4_t *color; 
  int v20; 
  unsigned int animIndex; 
  unsigned int flags; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  const char *v24; 
  XAnimCurveID curveID; 
  const char *NameFromID; 
  XAnimParts *parts; 
  float frequency; 
  __int128 currentAnimTime_low; 
  float oldTime; 
  __int128 v32; 
  scr_string_t notifyName; 
  GfxFont *font; 
  const char *v37; 
  const char *s; 
  scr_string_t v40; 
  bool HasTime; 
  bool v42; 
  GfxFont *smallDevFont; 
  scr_string_t v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  int v48; 
  XAnimTree *v49; 
  __int128 v50; 
  __int128 v51; 
  char *v52; 
  GfxFont *v53; 
  const char *v54; 
  __int128 v55; 
  unsigned __int16 children; 
  DObj *v57; 
  int v58[2]; 
  const char *AnimDebugName; 
  int destPos[2]; 
  XAnimTree *v61; 
  DObj *v62; 
  float ikWeights[2]; 
  __int64 v64; 
  float animWeights[2]; 
  __int64 v66; 
  char v67[8]; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  char v71[8]; 
  __int64 v72; 
  __int64 v73; 
  __int64 i; 
  char dest[8]; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  char v83[64]; 
  char buffer[512]; 

  v62 = (DObj *)obj;
  v61 = (XAnimTree *)tree;
  v58[0] = 0;
  v10 = *(float *)&y;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  AnimInfo = GetAnimInfo(infoIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 228, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  destPos[0] = 0;
  *(_QWORD *)ikWeights = 0i64;
  v64 = 0i64;
  *(_QWORD *)animWeights = 0i64;
  v66 = 0i64;
  *(_QWORD *)dest = 0i64;
  v76 = 0i64;
  v77 = 0i64;
  v78 = 0i64;
  v79 = 0i64;
  v80 = 0i64;
  v81 = 0i64;
  v82 = 0i64;
  XAnimIKGetWeights(obj, AnimInfo, ikWeights, animWeights);
  v13 = 0i64;
  v14 = 0.0;
  do
  {
    _XMM0 = LODWORD(ikWeights[v13]);
    __asm
    {
      vmaxss  xmm0, xmm0, xmm8
      vminss  xmm6, xmm0, xmm10
    }
    if ( v13 )
      Com_sprintfPos_truncate(dest, 0x40ui64, destPos, ", ");
    Com_sprintfPos_truncate(dest, 0x40ui64, destPos, "%.3f", *(float *)&_XMM6);
    ++v13;
  }
  while ( v13 < 4 );
  if ( AnimInfo->state.weight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 255, ASSERT_TYPE_ASSERT, "(state->weight >= 0)", (const char *)&queryFormat, "state->weight >= 0") )
    __debugbreak();
  weight = AnimInfo->state.weight;
  if ( weight == 0.0 )
  {
    color = &colorMdGrey;
  }
  else if ( weight >= AnimInfo->state.goalWeight )
  {
    color = &colorRedFaded;
    if ( weight <= AnimInfo->state.goalWeight )
      color = &colorWhite;
  }
  else
  {
    color = &colorLtBlue;
  }
  v20 = 0;
  *(_QWORD *)v71 = 0i64;
  v72 = 0i64;
  v73 = 0i64;
  for ( i = 0i64; v20 < depth; ++v20 )
  {
    if ( v20 >= 16 )
      break;
    Com_sprintf(v71, 0x20ui64, "%s  ", v71);
  }
  animIndex = AnimInfo->animIndex;
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 282, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
  *(_QWORD *)v67 = 0i64;
  v68 = 0i64;
  v69 = 0i64;
  v70 = 0i64;
  if ( !AnimInfo->animToModel )
  {
    flags = AnimInfo->animParent.flags;
    if ( (flags & 0x100) != 0 )
    {
      Com_sprintfPos_truncate(v67, 0x20ui64, v58, "(overlay)");
    }
    else if ( (flags & 0x200) != 0 )
    {
      Com_sprintfPos_truncate(v67, 0x20ui64, v58, "(additive mul)");
    }
    else if ( (flags & 0x210) != 0 )
    {
      Com_sprintfPos_truncate(v67, 0x20ui64, v58, "(additive)");
    }
    else if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
    {
      CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
      if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 305, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
        __debugbreak();
      v24 = SL_ConvertToString((scr_string_t)*CustomNodeTypeInfo->name);
      Com_sprintfPos_truncate(v67, 0x20ui64, v58, "(%s)", v24);
    }
  }
  v83[0] = 0;
  curveID = AnimInfo->state.curveID;
  if ( curveID != CURVE_ASSET_END && curveID && AnimInfo->state.goalTime > 0.0 )
  {
    NameFromID = XAnimCurve_GetNameFromID(curveID);
    Com_sprintf_truncate<64>((char (*)[64])v83, ", C: %s", NameFromID);
  }
  if ( AnimInfo->animToModel )
  {
    parts = AnimInfo->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 322, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    frequency = parts->frequency;
    currentAnimTime_low = LODWORD(AnimInfo->state.currentAnimTime);
    oldTime = AnimInfo->state.oldTime;
    v32 = currentAnimTime_low;
    *(float *)&v32 = *(float *)&currentAnimTime_low - oldTime;
    _XMM2 = v32;
    if ( frequency != 0.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm2, xmm8
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v14 = *(float *)&_XMM0 / frequency;
    }
    notifyName = AnimInfo->notifyName;
    font = cls.smallDevFont;
    if ( notifyName )
    {
      v37 = SL_ConvertToString(notifyName);
      s = j_va("%s%s: W %.3f -> %.3f, T %.3f -> %.3f, D %.3f, R %.3f, IK %s, '%s'%s", v71, AnimDebugName, AnimInfo->state.weight, AnimInfo->state.goalWeight, AnimInfo->state.oldTime, AnimInfo->state.currentAnimTime, v14, AnimInfo->state.rate, dest, v37, v83, *(_QWORD *)v58);
    }
    else
    {
      s = j_va("%s%s: W %.3f -> %.3f, T %.3f -> %.3f, D %.3f, R %.3f, IK %s%s", v71, AnimDebugName, AnimInfo->state.weight, AnimInfo->state.goalWeight, oldTime, *(float *)&currentAnimTime_low, v14, AnimInfo->state.rate, dest, v83);
    }
    return v10 + (float)CG_DrawDevString(scrPlace, x, v10, scale, scale, s, color, 5, font);
  }
  else
  {
    v40 = AnimInfo->notifyName;
    HasTime = XAnimHasTime(SubTreeAnims, animIndex);
    v42 = v40 == 0;
    smallDevFont = cls.smallDevFont;
    if ( v42 )
    {
      if ( HasTime )
        v46 = j_va("%s%s: %s W %.3f -> %.3f, T %.3f -> %.3f, R %.3f, IK %s%s", v71, AnimDebugName, v67, AnimInfo->state.weight, AnimInfo->state.goalWeight, AnimInfo->state.oldTime, AnimInfo->state.currentAnimTime, AnimInfo->state.rate, dest, v83);
      else
        v46 = j_va("%s%s: %s W %.3f -> %.3f, IK %s%s", v71, AnimDebugName, v67, AnimInfo->state.weight, AnimInfo->state.goalWeight, dest, v83);
    }
    else
    {
      v44 = AnimInfo->notifyName;
      if ( HasTime )
      {
        v45 = SL_ConvertToString(v44);
        v46 = j_va("%s%s: %s W %.3f -> %.3f, T %.3f -> %.3f, R %.3f, IK %s '%s'%s", v71, AnimDebugName, v67, AnimInfo->state.weight, AnimInfo->state.goalWeight, AnimInfo->state.oldTime, AnimInfo->state.currentAnimTime, AnimInfo->state.rate, dest, v45, v83);
      }
      else
      {
        v47 = SL_ConvertToString(v44);
        v46 = j_va("%s%s: %s W %.3f -> %.3f, IK %s, '%s'%s", v71, AnimDebugName, v67, AnimInfo->state.weight, AnimInfo->state.goalWeight, dest, v47, v83);
      }
    }
    v48 = CG_DrawDevString(scrPlace, x, *(float *)&y, scale, scale, v46, color, 5, smallDevFont);
    v49 = v61;
    destPos[1] = 0;
    v50 = *(_OWORD *)&y;
    *(float *)&v50 = *(float *)&y + (float)v48;
    XAnimCustomNodePrintDebugInfo(v61, SubTreeAnims, AnimInfo, buffer, 512, depth, &destPos[1]);
    v51 = v50;
    if ( destPos[1] > 0 )
    {
      v52 = strtok(buffer, "\n");
      if ( v52 )
      {
        do
        {
          v53 = cls.smallDevFont;
          v54 = j_va((const char *)&queryFormat, v52);
          v55 = v51;
          *(float *)&v55 = *(float *)&v51 + (float)CG_DrawDevString(scrPlace, x, *(float *)&v51, scale, scale, v54, color, 5, v53);
          v51 = v55;
          v52 = strtok(NULL, "\n");
        }
        while ( v52 );
        v49 = v61;
      }
    }
    children = AnimInfo->children;
    if ( children )
    {
      v57 = v62;
      do
      {
        LODWORD(v51) = CG_DrawDebugSP_DrawAIAnimTreeRecurse(scrPlace, x, *(float *)&v51, scale, v57, v49, children, depth + 1);
        children = GetAnimInfo(children)->next;
      }
      while ( children );
    }
    return *(float *)&v51;
  }
}

/*
==============
CG_DrawDebugSP_DrawDebugOverlays
==============
*/
void CG_DrawDebugSP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::DrawDebugOverlays(&v1, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawFrontendOverlays
==============
*/
void CG_DrawDebugSP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::PrintFrontendUpperRightDebugInfo(&v1, localClientNum, 0.0);
}

/*
==============
CG_DrawDebugSP_DrawFullScreenDebugOverlays
==============
*/
void CG_DrawDebugSP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::DrawFullScreenDebugOverlays(&v1, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawNoGameModeOverlays
==============
*/
void CG_DrawDebugSP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::PrintNoGameModeUpperRightDebugInfo(&v1, localClientNum, 0.0);
}

/*
==============
CG_DrawDebugSP_DrawPSFlags
==============
*/
void CG_DrawDebugSP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *predictedPlayerEntity; 
  const playerState_s *p_predictedPlayerState; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v7; 
  __int64 SharedPMFlags; 
  bool v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  bool v13; 
  __int64 v14; 
  __int64 SharedPLFlags; 
  bool v16; 
  __int64 v17; 
  int v18; 
  char outBuffer[2048]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 862, ASSERT_TYPE_ASSERT, "(cgameGlob->predictedPlayerEntity)", (const char *)&queryFormat, "cgameGlob->predictedPlayerEntity") )
    __debugbreak();
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.18000001);
  v7 = UI_GetFontHandle(ActivePlacement, 6, 0.5);
  UI_DrawText(ActivePlacement, "Client View of Flags", 2048, v7, -120.0, 0.0, 2, 1, 0.5, &colorWhite, 3);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPMFlags = CG_DrawDebug_GetSharedPMFlags(&LocalClientGlobals->predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x3Au);
  v10 = 55;
  v11 = 55i64;
  if ( v9 )
    v11 = 50i64;
  v12 = Com_sprintf(&outBuffer[SharedPMFlags], 2048 - (int)SharedPMFlags, "^%cSWIMMING\n", v11) + SharedPMFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v13 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x3Bu);
  v14 = 55i64;
  if ( v13 )
    v14 = 50i64;
  Com_sprintf(&outBuffer[v12], 2048 - v12, "^%cNO_WALK\n", v14);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 30.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 793, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPLFlags = CG_DrawDebug_GetSharedPLFlags(p_predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v16 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 7u);
  v17 = 55i64;
  if ( v16 )
    v17 = 50i64;
  v18 = Com_sprintf(&outBuffer[SharedPLFlags], 2048 - (int)SharedPLFlags, "^%cTURRET_LINK_ANGLES\n", v17) + SharedPLFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 8u) )
    v10 = 50;
  Com_sprintf(&outBuffer[v18], 2048 - v18, "^%cTRACK_VELOCITY\n", v10);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 30.0, 350.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugSP_GetPWFlags(p_predictedPlayerState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 175.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugSP_GetPOFlags(p_predictedPlayerState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 350.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugSP_GetPEFlags(&predictedPlayerEntity->nextState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 550.0, 80.0, 1, 1, 0.18000001, &colorWhite, 3);
}

/*
==============
CG_DrawDebugSP_DrawSaveInfo
==============
*/
void CG_DrawDebugSP_DrawSaveInfo(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int v3; 
  char buffer[2048]; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.25);
  v3 = SaveMemory_WriteInfoToBuffer(buffer, 2048);
  PendingSaveList_WriteInfoToBuffer(&buffer[v3], 2048 - v3);
  UI_DrawText(ActivePlacement, buffer, 2048, FontHandle, 40.0, 20.0, 1, 1, 0.25, &colorWhite, 3);
}

/*
==============
CG_DrawDebugSP_GetPEFlags
==============
*/
__int64 CG_DrawDebugSP_GetPEFlags(const entityState_t *es, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  LerpEntityState *p_lerp; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 

  v3 = bufferSize;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 818, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 819, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "EntityStateFlags\n");
  p_lerp = &es->lerp;
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cNONSOLID\n", v10) + v6;
  v12 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 2u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cTELEPORT_BIT\n", v13) + v11;
  v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cCROUCHING\n", v16) + v14;
  v18 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cPRONE\n", v19) + v17;
  v21 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xCu);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cNODRAW\n", v22) + v20;
  v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cFIRING\n", v25) + v23;
  v27 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 5u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cTURRET_ACTIVE_PRONE\n", v28) + v26;
  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 6u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cTURRET_ACTIVE_DUCK\n", v31) + v29;
  v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 8u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cAIM_ASSIST\n", v34) + v32;
  v36 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 9u);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cLASER_SIGHT\n", v37) + v35;
  v39 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xBu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cVEHICLE_ACTIVE\n", v40) + v38;
  v42 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xEu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cTHERMAL_DRAW\n", v43) + v41;
  v45 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x1Bu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cVEHICLE_TANK\n", v46) + v44;
  v48 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cVEHICLE_VIEWLOCK\n", v49) + v47;
  v51 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x14u);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cDONT_CAST_SHADOWS\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x13u);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cLASER_FORCE_SIGHT\n", v55) + v53;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x15u) )
    v9 = 50;
  return (unsigned int)(v56 + Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cUSE_HERO_LIGHTING\n", v9));
}

/*
==============
CG_DrawDebugSP_GetPOFlags
==============
*/
__int64 CG_DrawDebugSP_GetPOFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  __int64 SharedPOFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 758, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 759, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_otherFlags = &ps->otherFlags;
  SharedPOFlags = CG_DrawDebug_GetSharedPOFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x21u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPOFlags], bufferSize - (int)SharedPOFlags, "^%cBREACHING\n", v10) + SharedPOFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cHUD_HIDDEN\n", v13) + v11;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x23u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cUSE_HINTS_IN_VEHICLE\n", v16) + v14;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x24u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cMOUSE_VEHICLE_STEER\n", v19) + v17;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v21 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x25u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cENABLE_MOUSE_STEER\n", v22) + v20;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x26u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], bufferSize - v23, "^%cSPRING_CAM\n", v25) + v23;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v27 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x28u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], bufferSize - v26, "^%cFORCE_VIEWMODEL_DOF\n", v28) + v26;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x29u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], bufferSize - v29, "^%cQUICK_WEAPON_SWITCH\n", v31) + v29;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v33 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Au);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], bufferSize - v32, "^%cDISABLE_TRIGGERS\n", v34) + v32;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v36 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Bu);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], bufferSize - v35, "^%cLEGS_HIDDEN\n", v37) + v35;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v39 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Cu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], bufferSize - v38, "^%cSHADOW_HIDDEN\n", v40) + v38;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v42 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Du);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], bufferSize - v41, "^%cAUTO_LEVEL_IMMEDIATE\n", v43) + v41;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v45 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Eu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], bufferSize - v44, "^%cCURSOR_HINT_CONTROL_LOCK\n", v46) + v44;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v48 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Fu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], bufferSize - v47, "^%cSCRIPTED_MELEE_ACTIVE\n", v49) + v47;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v51 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x30u);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], bufferSize - v50, "^%cHANDS_OCCUPIED\n", v52) + v50;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v54 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x31u);
  v55 = 55i64;
  if ( v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], bufferSize - v53, "^%cNEXT_BULLET_IS_DRY_FIRE\n", v55) + v53;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x32u) )
    v9 = 50;
  return (unsigned int)(v56 + Com_sprintf(&outBuffer[v56], bufferSize - v56, "^%cUSE_HINTS_ON_TURRET\n", v9));
}

/*
==============
CG_DrawDebugSP_GetPWFlags
==============
*/
__int64 CG_DrawDebugSP_GetPWFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  __int64 SharedPWFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 735, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_weapFlags = &ps->weapCommon.weapFlags;
  SharedPWFlags = CG_DrawDebug_GetSharedPWFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x35u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPWFlags], bufferSize - (int)SharedPWFlags, "^%cFRIENDLY_NOT_USABLE\n", v10) + SharedPWFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x36u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cFORCE_VIEWMODEL_ANIM\n", v13) + v11;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x37u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cDISABLE_EMPTY_CLIP_WEAPON_SWITCH\n", v16) + v14;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x38u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cNAMEPLATE_IS_ENEMY\n", v19) + v17;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x39u) )
    v9 = 50;
  return (unsigned int)(v20 + Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cNAMEPLATE_IS_CIVILIAN\n", v9));
}

/*
==============
CgDrawDebugSP::DrawAnimationOverlays
==============
*/
void CgDrawDebugSP::DrawAnimationOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  const ScreenPlacement *v10; 
  unsigned int AICount; 
  const char *s; 
  int v13; 
  GfxFont *smallDevFont; 
  float v15; 
  unsigned int SentientCount; 
  const char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const ScreenPlacement *v20; 
  const dvar_t *v21; 
  const ScreenPlacement *v22; 
  float v23; 
  double v24; 
  DObj *ClientDObj; 
  const XAnimTree *tree; 
  unsigned __int16 children; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  int integer; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  bool enabled; 
  const dvar_t *v45; 
  float v46; 
  float yPos; 

  yPos = 0.0;
  CG_DrawDebug_DrawScriptedAnims(localClientNum, &yPos);
  v3 = DVARINT_cg_drawBoneVisibility;
  if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer >= 0 )
  {
    v4 = DVARINT_cg_drawBoneVisibility;
    if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    CG_DrawDebug_DrawBoneVisibility(localClientNum, v4->current.integer, &yPos);
  }
  v5 = DVARINT_cg_debugCharacterController;
  if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer >= 0 )
  {
    v6 = DVARINT_cg_debugCharacterController;
    if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    CG_DrawDebug_CharacterController(localClientNum, v6->current.integer, &yPos);
  }
  v7 = DVARBOOL_ai_debugOverlay;
  if ( !DVARBOOL_ai_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    font = cls.smallDevFont;
    v10 = ActivePlacement;
    AICount = G_GetAICount();
    s = j_va("AI: %d", AICount);
    v13 = CG_DrawDevString(v10, 0.0, 0.0, 0.69999999, 0.69999999, s, &colorWhite, 5, font);
    smallDevFont = cls.smallDevFont;
    v15 = (float)v13;
    SentientCount = G_GetSentientCount();
    v17 = j_va("Sentient: %d", SentientCount);
    CG_DrawDevString(v10, 0.0, v15, 0.69999999, 0.69999999, v17, &colorWhite, 5, smallDevFont);
  }
  v18 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer == 7 )
  {
    v19 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer >= 0 )
    {
      v20 = ScrPlace_GetActivePlacement(localClientNum);
      v21 = DVARINT_ai_debugEntIndex;
      v22 = v20;
      v23 = v20->virtualViewableMin.v[0];
      *(_QWORD *)&v24 = LODWORD(v20->virtualViewableMin.v[1]);
      if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      ClientDObj = Com_GetClientDObj(v21->current.integer, localClientNum);
      if ( ClientDObj )
      {
        tree = ClientDObj->tree;
        if ( ClientDObj->tree )
        {
          children = tree->children;
          if ( children )
            CG_DrawDebugSP_DrawAIAnimTreeRecurse(v22, v23, v24, 0.55000001, ClientDObj, tree, children, 0);
        }
      }
    }
LABEL_56:
    yPos = yPos + 200.0;
    goto LABEL_57;
  }
  v28 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.integer == 8 )
  {
    v29 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.integer >= 0 )
    {
      v30 = DVARINT_ai_debugEntIndex;
      if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( Com_GetClientDObj(v30->current.integer, localClientNum) )
      {
        v31 = DVARINT_ai_debugEntIndex;
        if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        v32 = DVARBOOL_cg_drawDebugBonesBind;
        integer = v31->current.integer;
        if ( !DVARBOOL_cg_drawDebugBonesBind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesBind") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        CG_DrawDebug_DrawBones(localClientNum, v32->current.enabled, CG_DEBUG_DRAW_BONES_SHARED_ONLY, NULL, integer);
      }
    }
    goto LABEL_56;
  }
LABEL_57:
  v34 = DVARINT_cg_dumpAnimsToScreen;
  if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.integer >= 0 )
  {
    v35 = DVARINT_cg_dumpAnimsToScreen;
    v36 = yPos;
    if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( CG_DrawDebug_DrawAnims(localClientNum, v35->current.integer, v36) )
      yPos = yPos + 200.0;
  }
  v37 = DVARINT_cg_dumpAnimsToScreen2;
  if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.integer >= 0 )
  {
    v38 = DVARINT_cg_dumpAnimsToScreen2;
    v39 = yPos;
    if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( CG_DrawDebug_DrawAnims(localClientNum, v38->current.integer, v39) )
      yPos = yPos + 200.0;
  }
  v40 = DVARINT_animscript_debug;
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.integer >= 0 )
  {
    v41 = DVARINT_animscript_debug;
    if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    CG_DrawDebug_PlayerAnimScriptInfo_Client(localClientNum, yPos, v41->current.integer, ANIM_SCRIPT_DEBUG_MODE_BOTH);
    yPos = yPos + 200.0;
  }
  v42 = DVARINT_cg_dumpBlendSpaces;
  if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.integer >= 0 )
  {
    v43 = DVARBOOL_cg_dumpblendspaces_coverage;
    if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    enabled = v43->current.enabled;
    v45 = DVARINT_cg_dumpBlendSpaces;
    v46 = yPos;
    if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    CG_DrawDebug_DrawBlendSpaces(localClientNum, v45->current.integer, 10.0, v46, enabled);
  }
}

/*
==============
CgDrawDebugSP::DrawClientNetPerf
==============
*/
float CgDrawDebugSP::DrawClientNetPerf(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  return y;
}

/*
==============
CgDrawDebugSP::DrawEntitiesLoD
==============
*/
void CgDrawDebugSP::DrawEntitiesLoD(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CgDrawDebugSP::DrawGameMsgWindows
==============
*/
void CgDrawDebugSP::DrawGameMsgWindows(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  GfxFont *smallDevFont; 
  __int64 v4; 
  __int64 v5; 
  GfxFont *v6; 
  __int64 vertAlign; 
  GfxFont *font; 
  int fonta; 
  vec4_t color; 

  smallDevFont = cls.smallDevFont;
  v4 = localClientNum;
  color = (vec4_t)_xmm;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    fonta = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, fonta) )
      __debugbreak();
  }
  v5 = v4;
  if ( !clientUIActives[v4].frontEndSceneState[0] && clientUIActives[v5].cgameInitialized )
    Con_DrawGameMessageWindow((LocalClientNum_t)v4, 0, 6, 10, 8, 8, smallDevFont, 0.36000001, &color, 6, 4, MWM_BOTTOMUP_ALIGN_TOP);
  v6 = cls.smallDevFont;
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(font) = 2;
    LODWORD(vertAlign) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", vertAlign, font) )
      __debugbreak();
  }
  if ( !clientUIActives[v5].frontEndSceneState[0] && clientUIActives[v5].cgameInitialized )
    Con_DrawGameMessageWindow((LocalClientNum_t)v4, 1, 0, 180, 9, 8, v6, 0.417, &color, 3, 5, MWM_BOTTOMUP_ALIGN_BOTTOM);
}

/*
==============
CgDrawDebugSP::DrawTransientOverlays
==============
*/
void CgDrawDebugSP::DrawTransientOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  __int128 v2; 
  __int128 v3; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  bool enabled; 
  const dvar_t *v8; 
  __int128 v9; 
  const ScreenPlacement *ActivePlacement; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  GfxFont *FontHandle; 
  TransientSPZoneState ZoneModeByIndex; 
  __int64 v16; 
  const char *SPTransientName; 
  __int128 v18; 
  unsigned int v19; 
  const char *v20; 
  __int128 v21; 
  const char *v22; 
  __int128 v23; 
  const char *ZoneNameFromIndex; 
  bool IsFinishedLoadingByIndex; 
  const char *v26; 
  __int128 v27; 
  const char *v28; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  bool v31; 
  bool v32; 
  vec4_t v33; 
  vec4_t color; 
  char dest[512]; 
  __int128 v36; 
  __int128 v37; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 561, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  v5 = DVARBOOL_cg_drawTransients;
  if ( !DVARBOOL_cg_drawTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return;
  v6 = DVARBOOL_cg_drawLevelTransients;
  v37 = v2;
  v36 = v3;
  if ( !DVARBOOL_cg_drawLevelTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLevelTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  enabled = v6->current.enabled;
  v8 = DVARBOOL_cg_drawCommonTransients;
  v31 = enabled;
  if ( !DVARBOOL_cg_drawCommonTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCommonTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = LODWORD(FLOAT_425_0);
  v32 = v8->current.enabled;
  v33 = (vec4_t)_xmm;
  color = (vec4_t)_xmm;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0;
  FontHandle = UI_GetFontHandle(ActivePlacement, 0, 0.58333331);
  do
  {
    ZoneModeByIndex = CL_TransientsSP_GetZoneModeByIndex(v13);
    v16 = ZoneModeByIndex;
    if ( (unsigned int)ZoneModeByIndex >= 8 )
    {
      LODWORD(vertAlign) = 8;
      LODWORD(horzAlign) = ZoneModeByIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( zoneMode ) < (unsigned)( TransientSPZoneState::COUNT )", "zoneMode doesn't index TransientSPZoneState::COUNT\n\t%i not in [0, %i)", horzAlign, vertAlign) )
        __debugbreak();
    }
    if ( (_DWORD)v16 )
    {
      SPTransientName = DB_Transients_GetSPTransientName(v13);
      if ( (DB_Transients_GetSPTransientZoneFlags(v13) & 0x4000) != 0 )
      {
        if ( !v31 )
        {
          ++v12;
          goto LABEL_27;
        }
      }
      else if ( !v32 )
      {
        ++v11;
        goto LABEL_27;
      }
      if ( (_DWORD)v16 != 4 )
        UI_FillRect(ActivePlacement, -16.5, *(float *)&v9 - 7.0, 7.0, 7.0, 1, 1, &color);
      Com_sprintf(dest, 0x200ui64, "%s : %s", SPTransientName, TRANSIENT_ZONE_NAMES[v16]);
      UI_DrawText(ActivePlacement, dest, 512, FontHandle, -7.5, *(float *)&v9, 1, 1, 0.18000001, &v33, 3);
      v18 = v9;
      *(float *)&v18 = *(float *)&v9 + -7.0;
      v9 = v18;
    }
LABEL_27:
    ++v13;
  }
  while ( v13 < 0x20 );
  v19 = 0;
  if ( v12 )
  {
    v20 = "%zu Level Transients";
    if ( v12 == 1 )
      v20 = "%zu Level Transient";
    Com_sprintf(dest, 0x200ui64, v20, v12);
    UI_DrawText(ActivePlacement, dest, 512, FontHandle, -7.5, *(float *)&v9, 1, 1, 0.18000001, &v33, 3);
    v21 = v9;
    *(float *)&v21 = *(float *)&v9 + -7.0;
    v9 = v21;
  }
  if ( v11 )
  {
    v22 = "%zu Weapon Transients";
    if ( v11 == 1 )
      v22 = "%zu Weapon Transient";
    Com_sprintf(dest, 0x200ui64, v22, v11);
    UI_DrawText(ActivePlacement, dest, 512, FontHandle, -7.5, *(float *)&v9, 1, 1, 0.18000001, &v33, 3);
    v23 = v9;
    *(float *)&v23 = *(float *)&v9 + -7.0;
    v9 = v23;
  }
  do
  {
    if ( DB_Zones_IsValidZoneIndex(v19) && (DB_Zones_GetZoneFlagsFromIndex(v19) & 0x600000) != 0 )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v19);
      IsFinishedLoadingByIndex = DB_Zones_IsFinishedLoadingByIndex(v19);
      v26 = "Loading";
      if ( IsFinishedLoadingByIndex )
        v26 = "Loaded";
      Com_sprintf(dest, 0x200ui64, "%s : Preload : %s", ZoneNameFromIndex, v26);
      UI_DrawText(ActivePlacement, dest, 512, FontHandle, -7.5, *(float *)&v9, 1, 1, 0.18000001, &v33, 3);
      v27 = v9;
      *(float *)&v27 = *(float *)&v9 + -7.0;
      v9 = v27;
    }
    ++v19;
  }
  while ( v19 < 0x7A4 );
  if ( CL_PreloadSP_IsBusy() )
  {
    if ( CL_PreloadSP_IsYieldingForStreaming() )
    {
      v28 = "Yielding Preload (Streamer)";
      goto LABEL_47;
    }
  }
  else if ( CL_TransientsSP_IsYieldingForStreaming() )
  {
    v28 = "Yielding Transients (Streamer)";
LABEL_47:
    UI_DrawText(ActivePlacement, v28, 512, FontHandle, -7.5, *(float *)&v9, 1, 1, 0.18000001, &v33, 3);
  }
}

/*
==============
CgDrawDebugSP::PrintStreamingPos
==============
*/
float CgDrawDebugSP::PrintStreamingPos(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double CornerFarRight; 
  float v8; 
  double CornerLabelWidth; 
  const vec3_t *ManualViewOrigin; 
  const char *text; 
  double v12; 

  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v8 = *(float *)&CornerFarRight;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
  if ( !CL_StreamViews_IsManualViewSet(COUNT|DODGE, localClientNum) )
    return posY;
  ManualViewOrigin = CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, localClientNum);
  text = j_va("PlayerSetStreamOrigin (%.0f %.0f %.0f) \n", ManualViewOrigin->v[0], ManualViewOrigin->v[1], ManualViewOrigin->v[2]);
  v12 = CgDrawDebug::CornerPrint(this, scrPlace, v8, posY, *(float *)&CornerLabelWidth, text, cls.m_activeGameMapName, &colorRed);
  return posY + *(float *)&v12;
}

/*
==============
CgDrawDebugSP::PrintUpperRightDebugInfo
==============
*/
void CgDrawDebugSP::PrintUpperRightDebugInfo(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  float v16; 
  double CornerFarRight; 
  float v18; 
  double CornerLabelWidth; 
  const vec3_t *ManualViewOrigin; 
  const char *text; 
  double v22; 
  double v23; 

  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type != 4 )
  {
    v6 = DVARVEC2_cg_debugInfoCornerOffsetSP;
    if ( !DVARVEC2_cg_debugInfoCornerOffsetSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetSP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, scrPlace, v6->current.vector.v[1]);
    v8 = CgDrawDebug::PrintPerformanceInfo(this, localClientNum, scrPlace, *(float *)&v7);
    v9 = CgDrawDebug::PrintBuildName(this, localClientNum, scrPlace, *(float *)&v8);
    v10 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, scrPlace, *(float *)&v9);
    v11 = CgDrawDebug::PrintScriptableDebugInfo(this, localClientNum, scrPlace, *(float *)&v10);
    v12 = CgDrawDebug::PrintWallRunDebugInfo(this, localClientNum, scrPlace, *(float *)&v11);
    v13 = CgDrawDebug::PrintEventProfile(this, localClientNum, scrPlace, *(float *)&v12);
    v14 = CgDrawDebug::PrintReplayTime(this, localClientNum, scrPlace, *(float *)&v13);
    v15 = CgDrawDebug::PrintViewpos(this, localClientNum, scrPlace, *(float *)&v14);
    v16 = *(float *)&v15;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v18 = *(float *)&CornerFarRight;
    CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
    if ( CL_StreamViews_IsManualViewSet(COUNT|DODGE, localClientNum) )
    {
      ManualViewOrigin = CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, localClientNum);
      text = j_va("PlayerSetStreamOrigin (%.0f %.0f %.0f) \n", ManualViewOrigin->v[0], ManualViewOrigin->v[1], ManualViewOrigin->v[2]);
      v22 = CgDrawDebug::CornerPrint(this, scrPlace, v18, v16, *(float *)&CornerLabelWidth, text, cls.m_activeGameMapName, &colorRed);
      v16 = v16 + *(float *)&v22;
    }
    v23 = CgDrawDebug::PrintSystemTime(this, localClientNum, scrPlace, v16);
    CgDrawDebug::PrintCamAndMovementInfo(this, localClientNum, scrPlace, *(float *)&v23);
  }
}

