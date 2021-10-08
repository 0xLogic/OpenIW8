/*
==============
DynEnt_DrawDebugLine
==============
*/

double DynEnt_DrawDebugLine(const ScreenPlacement *scrPlace, float x, float y, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust, const char *name, const char *valuefmt, ...)
{
  double result; 

  *(float *)&result = ?DynEnt_DrawDebugLine@@YAMPEBUScreenPlacement@@MMAEBTvec4_t@@HHMHPEBD2ZZ(scrPlace, x, y, setColor, forceColor, shadow, charHeight, adjust, name, valuefmt);
  return result;
}

/*
==============
DynEnt_DrawDebug
==============
*/

void __fastcall DynEnt_DrawDebug(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?DynEnt_DrawDebug@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
DynEnt_DebugStart
==============
*/

void DynEnt_DebugStart(void)
{
  ?DynEnt_DebugStart@@YAXXZ();
}

/*
==============
DynEnt_DrawDebugString
==============
*/

void __fastcall DynEnt_DrawDebugString(const ScreenPlacement *scrPlace, float x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  ?DynEnt_DrawDebugString@@YAXPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@HHMH@Z(scrPlace, x, y, string, setColor, forceColor, shadow, charHeight, adjust);
}

/*
==============
DynEnt_CreateDevGui
==============
*/

void DynEnt_CreateDevGui(void)
{
  ?DynEnt_CreateDevGui@@YAXXZ();
}

/*
==============
DynEnt_CreateDevGui
==============
*/
void DynEnt_CreateDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = truncate_cast<int,unsigned __int64>(0x13ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
    {
      v2 = v0 + i;
      v3 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_dynent\n", v0 - 1);
    s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v0;
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
}

/*
==============
DynEnt_DebugStart
==============
*/
void DynEnt_DebugStart(void)
{
  s_DynEntityDebugReady = 1;
}

/*
==============
DynEnt_DrawDebug
==============
*/
void DynEnt_DrawDebug(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  signed __int64 v2; 
  void *v12; 
  const ScreenPlacement *v13; 
  const dvar_t *v14; 
  const dvar_t *v19; 
  DynEntityListId *dynEntListIds; 
  int v24; 
  unsigned __int8 v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  int v33; 
  int v34; 
  DynEntityListId v35; 
  DynEntityList *DynEntityList; 
  int v37; 
  int v38; 
  unsigned int v39; 
  __int64 v40; 
  DynEntityListId v41; 
  DynEntityList *v42; 
  DynEntityDef *v43; 
  unsigned __int16 v44; 
  DynEntityClient *v45; 
  int v46; 
  int v47; 
  unsigned __int16 v48; 
  DynEntitySpatialActivationMode priority; 
  unsigned __int16 flags; 
  __int64 type; 
  unsigned __int16 transientIndexStored; 
  bool v53; 
  char v55; 
  const char **v67; 
  __int64 v68; 
  __int64 v69; 
  const char **v80; 
  __int64 v81; 
  __int64 v82; 
  SpatialPartition_PopulationSort_ClientData *v88; 
  __int64 v109; 
  signed int v125; 
  __int64 v126; 
  int v127; 
  bool IsZoneVisible; 
  const char *v129; 
  const dvar_t *v132; 
  const dvar_t *v134; 
  DynEntityListId *v135; 
  DynEntityListId *v136; 
  DynEntityListId v137; 
  unsigned int v138; 
  DynEntityListId v139; 
  DynEntityList *v140; 
  int v141; 
  __int64 v142; 
  __int64 v143; 
  DynEntityList *v144; 
  DynEntityDef *v145; 
  unsigned __int16 v146; 
  DynEntityClient *v147; 
  unsigned __int16 v148; 
  DynEntityPose *v149; 
  const dvar_t *v151; 
  const dvar_t *v152; 
  DynEntityListId *v153; 
  DynEntityListId v154; 
  DynEntityList *v155; 
  int v156; 
  __int64 v157; 
  __int64 v158; 
  DynEntityList *v159; 
  DynEntityDef *v160; 
  unsigned __int16 v161; 
  const DynEntityDef *Def; 
  unsigned __int16 v163; 
  DynEntityClient *v164; 
  const DynEntityDef *v165; 
  unsigned __int16 v166; 
  DynEntityPose *v167; 
  const dvar_t *v169; 
  const char *v170; 
  const char *v171; 
  const dvar_t *v173; 
  unsigned int unsignedInt; 
  __int64 v175; 
  DynEntityList *v176; 
  __int64 v177; 
  unsigned __int16 v178; 
  DynEntityClient *v179; 
  unsigned __int16 v180; 
  DynEntityPose *v181; 
  const char *v189; 
  const char *v197; 
  const char *v201; 
  const char *v205; 
  const char *v209; 
  const char *v213; 
  const char *v217; 
  const char *v221; 
  const char *v225; 
  const char *name; 
  centity_t *AnchorEntity; 
  const dvar_t *v244; 
  const dvar_t *v245; 
  unsigned int v246; 
  __int64 v247; 
  DynEntityList *v248; 
  __int64 v249; 
  unsigned __int16 v250; 
  DynEntityClient *v251; 
  unsigned __int16 v252; 
  DynEntityPose *v253; 
  const cmodel_t *BrushModel; 
  const dvar_t *v255; 
  const char *v273; 
  const char *v277; 
  const char *v281; 
  const char *v285; 
  const char *v289; 
  const char *v293; 
  const char *v297; 
  centity_t *v317; 
  const dvar_t *v318; 
  unsigned int v319; 
  unsigned __int8 v320; 
  DynEntityListId v321; 
  DynEntityListId *v322; 
  DynEntityListId *v323; 
  DynEntityListId v324; 
  DynEntityList *v325; 
  unsigned int v326; 
  __int64 v327; 
  DynEntityList *v328; 
  DynEntityDef *v329; 
  unsigned __int16 v330; 
  unsigned int v337; 
  char *v338; 
  int v339; 
  const char *SPTransientName; 
  bool IsGameSystemTransientLoaded; 
  const vec4_t *v342; 
  const dvar_t *v345; 
  int integer; 
  unsigned int v348; 
  const dvar_t *v349; 
  const dvar_t *v350; 
  const dvar_t *v351; 
  DynEntityListId *v353; 
  DynEntityListId v354; 
  DynEntityListId *v355; 
  DynEntityListId v356; 
  DynEntityList *v357; 
  unsigned int v358; 
  DynEntityListId v359; 
  const DynEntityDef *v360; 
  unsigned __int16 v361; 
  DynEntityClient *ClientFromClientId; 
  DynEntityClient *v363; 
  unsigned int physicsSystemId; 
  unsigned int BodyCount; 
  unsigned int v366; 
  unsigned int m_serialAndIndex; 
  int v368; 
  hknpWorld *world; 
  __int64 v370; 
  unsigned int NumShapes; 
  const char *v372; 
  DynEntityListId *v378; 
  DynEntityListId v381; 
  DynEntityList *v382; 
  unsigned int j; 
  DynEntityListId v384; 
  unsigned int v385; 
  int v386; 
  unsigned int v387; 
  const DynEntityDef *v388; 
  unsigned __int16 v389; 
  DynEntityClient *v390; 
  const char ***v391; 
  const DynEntityDef *v392; 
  unsigned int v394; 
  unsigned int v395; 
  unsigned int v396; 
  unsigned __int8 numParts; 
  unsigned int v398; 
  const vec4_t *v399; 
  const char **v404; 
  const char *v408; 
  DynEntityBasis v410; 
  DynEntityListId v411; 
  DynEntityListId *v412; 
  DynEntityListId *v413; 
  DynEntityListId v414; 
  DynEntityList *v415; 
  unsigned int v416; 
  unsigned int k; 
  DynEntityListId v418; 
  unsigned int v419; 
  int v420; 
  unsigned int v421; 
  const DynEntityDef *v422; 
  unsigned __int16 v423; 
  DynEntityClient *v424; 
  const DynEntityDef *v425; 
  const char *v429; 
  DynEntityBasis v432; 
  DynEntityListId v433; 
  DynEntityListId *v434; 
  DynEntityListId *v435; 
  DynEntityListId v436; 
  DynEntityList *v437; 
  unsigned int v438; 
  unsigned int m; 
  DynEntityListId v440; 
  unsigned int v441; 
  int v442; 
  unsigned int v443; 
  const DynEntityDef *v444; 
  unsigned __int16 v445; 
  const DynEntityDef *v449; 
  const char *v457; 
  const char *v462; 
  DynEntitySpatialPopulationType n; 
  const dvar_t *v464; 
  const dvar_t *v465; 
  const dvar_t *v466; 
  const dvar_t *v467; 
  const dvar_t *v468; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  int shadowb; 
  int shadowc; 
  int shadowd; 
  int shadowe; 
  int shadowf; 
  int shadowg; 
  int shadowh; 
  int shadowi; 
  int shadowj; 
  int shadowk; 
  int shadowl; 
  int shadowm; 
  float charHeight; 
  float charHeighta; 
  float charHeightb; 
  float charHeightc; 
  float charHeightd; 
  float charHeighte; 
  float charHeightf; 
  float charHeightg; 
  float charHeighth; 
  float charHeighti; 
  float charHeightj; 
  float charHeightk; 
  float charHeightl; 
  float charHeightm; 
  float charHeightn; 
  float charHeighto; 
  float charHeightp; 
  float charHeightq; 
  float charHeightr; 
  float charHeights; 
  float charHeightt; 
  float charHeightu; 
  float charHeightv; 
  float charHeightw; 
  float charHeightx; 
  float charHeighty; 
  float charHeightz; 
  float charHeightba; 
  float charHeightbb; 
  float charHeightbc; 
  float charHeightbd; 
  float charHeightbe; 
  float charHeightbf; 
  float charHeightbg; 
  float charHeightbh; 
  float charHeightbi; 
  float charHeightbj; 
  float charHeightbk; 
  float charHeightbl; 
  float charHeightbm; 
  __int64 v540; 
  __int64 v541; 
  __int64 v542; 
  __int64 v543; 
  __int64 v544; 
  __int64 v545; 
  DynEntityListId dynEntityListsCount; 
  int v547; 
  unsigned int v549; 
  signed int v550; 
  signed int v551; 
  int Int_Internal_DebugName; 
  DynEntityListId *v553; 
  hknpBodyId result[2]; 
  unsigned int i; 
  ScreenPlacement *scrPlacea; 
  __int64 v557; 
  vec3_t origin; 
  vec3_t outOrigin; 
  _QWORD position[2]; 
  tmat33_t<vec3_t> axis; 
  __int64 v562; 
  __int64 v563; 
  __int64 v564; 
  __int64 v565; 
  __int64 v566; 
  __int64 v567; 
  __int64 v568; 
  __int64 v569; 
  __int64 v570; 
  __int64 v571; 
  __int64 v572; 
  __int64 v573; 
  __int64 v574; 
  __int64 v575; 
  vec4_t orientation; 
  __int64 v577; 
  int v578; 
  __int64 v579[3]; 
  int v580; 
  char v581[256]; 
  int v582[1540]; 
  int v583[1540]; 
  int v584[1540]; 
  char text[8]; 
  __int64 v586; 
  __int64 v587; 
  __int64 v588; 
  __int64 v589; 
  __int64 v590; 
  __int64 v591; 
  char dest[512]; 
  char v601; 

  v12 = alloca(v2);
  v557 = -2i64;
  __asm
  {
    vmovaps [rsp+64E0h+var_40], xmm6
    vmovaps [rsp+64E0h+var_50], xmm7
    vmovaps [rsp+64E0h+var_60], xmm8
    vmovaps [rsp+64E0h+var_70], xmm9
    vmovaps [rsp+64E0h+var_80], xmm10
    vmovaps [rsp+64E0h+var_90], xmm11
    vmovaps [rsp+64E0h+var_A0], xmm12
    vmovaps [rsp+64E0h+var_B0], xmm13
  }
  v13 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 202, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !s_DynEntityDebugReady )
    goto LABEL_645;
  v14 = DVARINT_dynEnt_debugDisplayOffsetX;
  if ( !DVARINT_dynEnt_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
    vmovss  xmm12, cs:__real@41000000
    vaddss  xmm10, xmm0, xmm12
  }
  v19 = DVARINT_dynEnt_debugDisplayOffsetY;
  if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
    vaddss  xmm8, xmm0, xmm12
  }
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v553 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 217, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    dynEntListIds = NULL;
    v553 = NULL;
  }
  v24 = 0;
  __asm
  {
    vmovss  xmm13, cs:__real@41400000
    vmovss  xmm9, cs:__real@c1400000
  }
  do
  {
    v27 = v24;
    v28 = DVARINT_dynEnt_debugSummary;
    if ( !DVARINT_dynEnt_debugSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSummary") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v547 = ++v24;
    if ( v28->current.integer == v24 )
      goto LABEL_26;
    v29 = DVARINT_dynEnt_debugSummary;
    if ( !DVARINT_dynEnt_debugSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSummary") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.integer == 3 )
    {
LABEL_26:
      position[0] = "Model";
      position[1] = "Brush";
      Com_sprintf(dest, 0x200ui64, "DynEnt %s Summary:", (const char *)position[v27]);
      __asm
      {
        vmovss  [rsp+64E0h+charHeight], xmm12
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm10; x
      }
      DynEnt_DrawDebugString(v13, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeight, 0);
      __asm { vaddss  xmm6, xmm8, xmm12 }
      *(_QWORD *)text = 0i64;
      v586 = 0i64;
      v587 = 0i64;
      v588 = 0i64;
      v589 = 0i64;
      v590 = 0i64;
      v591 = 0i64;
      v569 = 0i64;
      v570 = 0i64;
      v571 = 0i64;
      v572 = 0i64;
      v573 = 0i64;
      v574 = 0i64;
      v575 = 0i64;
      v562 = 0i64;
      v563 = 0i64;
      v564 = 0i64;
      v565 = 0i64;
      v566 = 0i64;
      v567 = 0i64;
      v568 = 0i64;
      memset(&axis, 0, 28);
      memset(v579, 0, sizeof(v579));
      v580 = 0;
      orientation = 0ui64;
      v577 = 0i64;
      v578 = 0;
      memset_0(v584, 0, 0x1804ui64);
      memset_0(v583, 0, 0x1804ui64);
      memset_0(v582, 0, 0x1804ui64);
      v33 = 0;
      *(_QWORD *)&result[0].m_serialAndIndex = dynEntListIds;
      if ( dynEntityListsCount )
      {
        *(_QWORD *)origin.v = (unsigned __int16)dynEntityListsCount;
        v34 = HIDWORD(v591);
        while ( 1 )
        {
          v35 = *dynEntListIds;
          if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadowa) = 1536;
            LODWORD(forceColora) = (unsigned __int16)v35;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          if ( v27 >= 2u )
          {
            LODWORD(shadowa) = 2;
            LODWORD(forceColora) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          DynEntityList = DynEnt_GetDynEntityList(v35);
          v37 = 0;
          if ( DynEntityList )
            v37 = DynEntityList->dynEntCount[v27];
          v38 = v33 + 1;
          if ( v37 <= 0 )
            v38 = v33;
          v33 = v38;
          i = v38;
          v39 = 0;
          *(_QWORD *)outOrigin.v = v37;
          if ( v37 > 0 )
            break;
LABEL_109:
          *(_QWORD *)&result[0].m_serialAndIndex = ++dynEntListIds;
          if ( !--*(_QWORD *)origin.v )
            goto LABEL_110;
        }
        v40 = 0i64;
        while ( 1 )
        {
          v41 = *dynEntListIds;
          if ( v27 >= 2u )
          {
            LODWORD(shadowa) = 2;
            LODWORD(forceColora) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          v42 = DynEnt_GetDynEntityList(v41);
          if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v39 >= v42->dynEntCount[v27] )
          {
            LODWORD(shadowa) = v42->dynEntCount[v27];
            LODWORD(forceColora) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          v43 = &v42->dynEntDefList[v27][v40];
          if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 312, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
            __debugbreak();
          v44 = v43->clientId[0];
          if ( v44 == 0xFFFF )
            break;
          if ( v27 >= 2u )
          {
            LODWORD(shadowa) = 2;
            LODWORD(forceColora) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          v48 = g_dynEntClientEntsAllocCount[0][v27];
          if ( v44 >= v48 )
          {
            LODWORD(shadowa) = v48;
            LODWORD(forceColora) = v44;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColora, shadowa) )
              __debugbreak();
          }
          if ( !g_dynEntClientLists[0][v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v45 = &g_dynEntClientLists[0][v27][v44];
          if ( !v45 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 316, ASSERT_TYPE_ASSERT, "((clientId == 0xFFFF) || dynEntClient)", (const char *)&queryFormat, "(clientId == DYNENT_INVALID_CLIENT_ID) || dynEntClient") )
              __debugbreak();
            goto LABEL_54;
          }
          if ( (v45->flags & 1) == 0 )
            goto LABEL_54;
          v46 = 1;
LABEL_55:
          v47 = v45 && (v45->flags & 0x100) != 0;
          ++*(_DWORD *)text;
          LODWORD(v569) = v46 + v569;
          LODWORD(v562) = v47 + v562;
          priority = v43->priority;
          switch ( priority )
          {
            case DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE:
              LODWORD(v587) = v587 + 1;
              LODWORD(v571) = v46 + v571;
              LODWORD(v564) = v47 + v564;
              break;
            case DYNENT_PRIORITY_NO_SPATIAL_DEACTIVATABLE:
              ++HIDWORD(v587);
              HIDWORD(v571) += v46;
              HIDWORD(v564) += v47;
              break;
            case DYNENT_RADIAL_PRIORITY_LEVEL_HIGH:
              LODWORD(v586) = v586 + 1;
              LODWORD(v570) = v46 + v570;
              LODWORD(v563) = v47 + v563;
              break;
            case DYNENT_PRIORITY_SPARSE_OCCLUDER:
              ++HIDWORD(v586);
              HIDWORD(v570) += v46;
              HIDWORD(v563) += v47;
              break;
          }
          if ( v45 )
          {
            flags = v45->flags;
            if ( (flags & 2) != 0 )
            {
              ++HIDWORD(v588);
              HIDWORD(v572) += v46;
              HIDWORD(v565) += v47;
            }
            if ( (flags & 4) != 0 )
            {
              LODWORD(v589) = v589 + 1;
              LODWORD(v573) = v46 + v573;
              LODWORD(v566) = v47 + v566;
            }
            if ( (flags & 4) != 0 )
            {
              if ( !v43->noPhysics )
              {
                ++HIDWORD(v589);
                HIDWORD(v573) += v46;
                HIDWORD(v566) += v47;
              }
              if ( v43->noPhysics )
              {
                LODWORD(v590) = v590 + 1;
                LODWORD(v574) = v46 + v574;
                LODWORD(v567) = v47 + v567;
              }
            }
            if ( (flags & 8) == 0 )
            {
              LODWORD(v588) = v588 + 1;
              LODWORD(v572) = v46 + v572;
              LODWORD(v565) = v47 + v565;
            }
            if ( (flags & 0x10) != 0 )
            {
              ++*(_DWORD *)&text[4];
              HIDWORD(v569) += v46;
              HIDWORD(v562) += v47;
            }
            if ( (flags & 0x1000) != 0 )
            {
              ++HIDWORD(v590);
              HIDWORD(v574) += v46;
              HIDWORD(v567) += v47;
            }
            if ( (flags & 0x40) != 0 )
            {
              LODWORD(v591) = v591 + 1;
              LODWORD(v575) = v46 + v575;
              LODWORD(v568) = v47 + v568;
            }
            if ( (flags & 0x80u) != 0 )
            {
              ++v34;
              HIDWORD(v575) += v46;
              HIDWORD(v568) += v47;
            }
          }
          type = (unsigned __int8)v43->type;
          ++LODWORD(axis.m[0].v[type]);
          transientIndexStored = v43->transientIndexStored;
          if ( transientIndexStored <= 0x600u )
            ++v582[transientIndexStored];
          *((_DWORD *)v579 + type) += v46;
          if ( transientIndexStored <= 0x600u )
            v584[transientIndexStored] += v46;
          LODWORD(orientation.v[type]) += v47;
          if ( transientIndexStored <= 0x600u )
            v583[transientIndexStored] += v47;
          ++v39;
          ++v40;
          v53 = (*(_QWORD *)outOrigin.v)-- == 1i64;
          dynEntListIds = *(DynEntityListId **)&result[0].m_serialAndIndex;
          if ( v53 )
          {
            HIDWORD(v591) = v34;
            v33 = i;
            goto LABEL_109;
          }
        }
        v45 = NULL;
LABEL_54:
        v46 = 0;
        goto LABEL_55;
      }
LABEL_110:
      __asm { vaddss  xmm7, xmm10, xmm13 }
      LODWORD(v540) = v33;
      v55 = 0;
      __asm
      {
        vmovss  [rsp+64E0h+shadow], xmm12
        vmovaps xmm2, xmm6; y
        vmovd   r8d, xmm6
        vmovaps xmm1, xmm7; x
        vmovd   edx, xmm7
      }
      v13 = scrPlacea;
      DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowb, 0, "Non-empty DynEntityLists", "%-5i", v540);
      __asm
      {
        vaddss  xmm6, xmm6, xmm0
        vmovss  [rsp+64E0h+shadow], xmm12
        vmovaps xmm2, xmm6; y
        vmovd   r8d, xmm6
        vmovaps xmm1, xmm7; x
        vmovd   edx, xmm7
      }
      DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowc, 0, "Flags", (const char *)&queryFormat.fmt + 3);
      __asm
      {
        vaddss  xmm8, xmm6, xmm0
        vaddss  xmm6, xmm7, xmm13
      }
      v67 = DynEntDebugCatgoryNames;
      v68 = 0i64;
      v69 = 14i64;
      do
      {
        LODWORD(v545) = *(_DWORD *)((char *)&v562 + v68);
        LODWORD(v544) = *(_DWORD *)((char *)&v569 + v68);
        LODWORD(v540) = *(_DWORD *)&text[v68];
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm8; y
          vmovd   r8d, xmm2
          vmovaps xmm1, xmm6; x
          vmovd   edx, xmm6
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowd, 0, *v67, "%-5i (active:%i, hidden:%i)", v540, v544, v545);
        __asm { vaddss  xmm8, xmm8, xmm0 }
        v68 += 4i64;
        ++v67;
        --v69;
      }
      while ( v69 );
      __asm
      {
        vaddss  xmm6, xmm6, xmm9
        vmovss  [rsp+64E0h+shadow], xmm12
        vmovaps xmm2, xmm8; y
        vmovd   r8d, xmm2
        vmovaps xmm1, xmm6; x
        vmovd   edx, xmm6
      }
      DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowe, 0, "Types", (const char *)&queryFormat.fmt + 3);
      __asm
      {
        vaddss  xmm8, xmm8, xmm0
        vaddss  xmm6, xmm6, xmm13
      }
      v80 = DynEntTypeNames;
      v81 = 0i64;
      v82 = 7i64;
      do
      {
        *(float *)&v545 = orientation.v[v81];
        LODWORD(v544) = *(_DWORD *)((char *)v579 + v81 * 4);
        *(float *)&v540 = axis.m[0].v[v81];
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm8; y
          vmovd   r8d, xmm2
          vmovaps xmm1, xmm6; x
          vmovd   edx, xmm6
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowf, 0, *v80, "%-5i (active:%i, hidden:%i)", v540, v544, v545);
        __asm { vaddss  xmm8, xmm8, xmm0 }
        ++v81;
        ++v80;
        --v82;
      }
      while ( v82 );
      __asm { vaddss  xmm7, xmm6, xmm9 }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(shadow) = 2;
        LODWORD(forceColor) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      v88 = g_dynEntSpatialSortClientData[localClientNum][0];
      if ( v88 && v88->population )
      {
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm8; y
          vmovd   r8d, xmm2
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowg, 0, "Spatial (common)", (const char *)&queryFormat.fmt + 3);
        __asm
        {
          vaddss  xmm6, xmm8, xmm0
          vaddss  xmm7, xmm7, xmm13
        }
        LODWORD(v544) = v88->sortedPartitionCount;
        LODWORD(v540) = v88->population->partitionCount;
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm6; y
          vmovd   r8d, xmm6
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowh, 0, "Partitions", "%-5i (nearby:%i)", v540, v544);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        LODWORD(v541) = v88->numActivatedForPriority[0];
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm6; y
          vmovd   r8d, xmm6
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowi, 0, "Low Priority Added", "%i", v541);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        LODWORD(v542) = v88->numActivatedForPriority[1];
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm6; y
          vmovd   r8d, xmm6
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowj, 0, "High Priority Added", "%i", v542);
        __asm
        {
          vaddss  xmm8, xmm6, xmm0
          vaddss  xmm7, xmm7, xmm9
        }
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(shadow) = 2;
        LODWORD(forceColor) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      v109 = qword_1490AC4B8[2 * localClientNum];
      if ( v109 && *(_QWORD *)(v109 + 88) )
      {
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm8; y
          vmovd   r8d, xmm2
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowk, 0, "Spatial (sparse occluders)", (const char *)&queryFormat.fmt + 3);
        __asm
        {
          vaddss  xmm6, xmm8, xmm0
          vaddss  xmm7, xmm7, xmm13
        }
        LODWORD(v544) = *(_DWORD *)(v109 + 4);
        LODWORD(v540) = *(_DWORD *)(*(_QWORD *)(v109 + 88) + 40i64);
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm6; y
          vmovd   r8d, xmm6
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowl, 0, "Partitions", "%-5i (nearby:%i)", v540, v544);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        LODWORD(v543) = *(_DWORD *)(v109 + 64);
        __asm
        {
          vmovss  [rsp+64E0h+shadow], xmm12
          vmovaps xmm2, xmm6; y
          vmovd   r8d, xmm6
          vmovaps xmm1, xmm7; x
          vmovd   edx, xmm7
        }
        DynEnt_DrawDebugLine(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, &colorWhite, 0, 1, *(float *)&shadowm, 0, "Added", "%i", v543);
        __asm
        {
          vaddss  xmm8, xmm6, xmm0
          vaddss  xmm7, xmm7, xmm9
        }
      }
      Com_sprintf(dest, 0x200ui64, "Transient zones:               ");
      v125 = 1;
      v126 = 0i64;
      do
      {
        v127 = v582[v126 + 1];
        if ( v127 )
        {
          if ( v55 )
            I_strcat(dest, 0x200ui64, ", ");
          v55 = 1;
          IsZoneVisible = DynEntCl_IsZoneVisible(LOCAL_CLIENT_0, v125);
          v129 = "Unloaded";
          if ( IsZoneVisible )
            v129 = "Loaded";
          LODWORD(shadow) = v127;
          LODWORD(forceColor) = v583[v126 + 1];
          LODWORD(fmt) = v584[v126 + 1];
          Com_sprintf<256>((char (*)[256])v581, "%d %s (%d/%d/%d)", (unsigned int)v125, v129, fmt, forceColor, shadow);
          I_strcat_truncate(dest, 0x200ui64, v581);
        }
        ++v125;
        ++v126;
      }
      while ( v125 < 1536 );
      v24 = v547;
      if ( v55 )
      {
        __asm
        {
          vmovss  [rsp+64E0h+charHeight], xmm12
          vmovaps xmm2, xmm8; y
          vmovaps xmm1, xmm7; x
        }
        DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighta, 0);
        __asm { vaddss  xmm8, xmm8, xmm12 }
      }
      __asm { vaddss  xmm10, xmm7, xmm9 }
    }
    dynEntListIds = v553;
  }
  while ( v24 < 2 );
  v132 = DVARINT_dynEnt_debugWorld;
  if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v132);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( v132->current.integer != 1 )
  {
    v134 = DVARINT_dynEnt_debugWorld;
    if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v134);
    if ( v134->current.integer != 3 )
    {
      v138 = 0;
      goto LABEL_190;
    }
  }
  v135 = v553;
  v136 = v553;
  v137 = dynEntityListsCount;
  v138 = 0;
  if ( dynEntityListsCount )
  {
    *(_QWORD *)origin.v = (unsigned __int16)dynEntityListsCount;
    do
    {
      v139 = *v136;
      if ( *v136 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(shadow) = 1536;
        LODWORD(forceColor) = (unsigned __int16)v139;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      v140 = DynEnt_GetDynEntityList(v139);
      if ( v140 )
        v141 = v140->dynEntCount[0];
      else
        v141 = 0;
      v142 = v141;
      if ( v141 > 0 )
      {
        v143 = 0i64;
        do
        {
          v144 = DynEnt_GetDynEntityList(*v136);
          if ( !v144 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v138 >= v144->dynEntCount[0] )
          {
            LODWORD(shadow) = v144->dynEntCount[0];
            LODWORD(forceColor) = v138;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v145 = &v144->dynEntDefList[0][v143];
          if ( !v145 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 503, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
            __debugbreak();
          v146 = v145->clientId[0];
          if ( v146 != 0xFFFF )
          {
            if ( v146 >= g_dynEntClientEntsAllocCount[0][0] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
              LODWORD(forceColor) = v146;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v147 = &g_dynEntClientLists[0][0][v146];
            if ( !v147 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 509, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            v148 = v145->clientId[0];
            if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
              __debugbreak();
            if ( v148 >= g_dynEntClientEntsAllocCount[0][0] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
              LODWORD(forceColor) = v148;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v149 = &g_dynEntPoseLists[0][0][v148];
            if ( !v149 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 511, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
              __debugbreak();
            if ( (v147->flags & 1) != 0 )
            {
              Com_sprintf(text, 0x40ui64, "Model %i %s", v147->dynEntDefId, typeNames[(unsigned __int8)v145->type]);
              __asm { vmovaps xmm2, xmm6; scale }
              CL_AddDebugString(&v149->pose.origin, &colorWhite, *(float *)&_XMM2, text, 0, 1);
            }
          }
          ++v138;
          ++v143;
          --v142;
        }
        while ( v142 );
      }
      ++v136;
      v53 = (*(_QWORD *)origin.v)-- == 1i64;
      v138 = 0;
    }
    while ( !v53 );
LABEL_190:
    v135 = v553;
    v137 = dynEntityListsCount;
  }
  v151 = DVARINT_dynEnt_debugWorld;
  if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v151);
  if ( v151->current.integer == 2 )
    goto LABEL_199;
  v152 = DVARINT_dynEnt_debugWorld;
  if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v152);
  if ( v152->current.integer == 3 )
  {
LABEL_199:
    v153 = v135;
    if ( v137 )
    {
      *(_QWORD *)origin.v = (unsigned __int16)v137;
      while ( 1 )
      {
        v154 = *v153;
        if ( *v153 >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(shadow) = 1536;
          LODWORD(forceColor) = (unsigned __int16)v154;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v155 = DynEnt_GetDynEntityList(v154);
        if ( v155 )
          v156 = v155->dynEntCount[1];
        else
          v156 = 0;
        v157 = v156;
        if ( v156 > 0 )
        {
          v158 = 0i64;
          do
          {
            v159 = DynEnt_GetDynEntityList(*v153);
            if ( !v159 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            if ( v138 >= v159->dynEntCount[1] )
            {
              LODWORD(shadow) = v159->dynEntCount[1];
              LODWORD(forceColor) = v138;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v160 = &v159->dynEntDefList[1][v158];
            if ( !v160 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 536, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            v161 = v160->clientId[0];
            if ( v161 != 0xFFFF )
            {
              Def = DynEnt_GetDef((DynEntityListId)0, v161, DYNENT_BASIS_BRUSH);
              if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              if ( Def->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                __debugbreak();
              v163 = Def->clientId[0];
              if ( v163 >= g_dynEntClientEntsAllocCount[0][1] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                LODWORD(forceColor) = v163;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( !g_dynEntClientLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                __debugbreak();
              v164 = &g_dynEntClientLists[0][1][v163];
              if ( !v164 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 542, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                __debugbreak();
              v165 = DynEnt_GetDef((DynEntityListId)0, v160->clientId[0], DYNENT_BASIS_BRUSH);
              if ( !v165 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              if ( v165->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                __debugbreak();
              v166 = v165->clientId[0];
              if ( !g_dynEntPoseLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                __debugbreak();
              if ( v166 >= g_dynEntClientEntsAllocCount[0][1] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                LODWORD(forceColor) = v166;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v167 = &g_dynEntPoseLists[0][1][v166];
              if ( !v167 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 544, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                __debugbreak();
              if ( (v164->flags & 1) != 0 )
              {
                Com_sprintf(text, 0x40ui64, "Brush %i %s", v164->dynEntDefId, typeNames[(unsigned __int8)v160->type]);
                __asm { vmovaps xmm2, xmm6; scale }
                CL_AddDebugString(&v167->pose.origin, &colorWhite, *(float *)&_XMM2, text, 0, 1);
              }
            }
            ++v138;
            ++v158;
            --v157;
          }
          while ( v157 );
        }
        ++v153;
        if ( !--*(_QWORD *)origin.v )
          break;
        v138 = 0;
      }
    }
  }
  v169 = DVARINT_dynEnt_debugModelId;
  if ( !DVARINT_dynEnt_debugModelId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugModelId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v169);
  v170 = "Inactive (may fail)";
  v171 = "Not Active";
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( v169->current.integer != -1 )
  {
    v173 = DVARINT_dynEnt_debugModelId;
    if ( !DVARINT_dynEnt_debugModelId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugModelId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v173);
    unsignedInt = v173->current.unsignedInt;
    v175 = unsignedInt & 0x7FFFF;
    v176 = DynEnt_GetDynEntityList((DynEntityListId)(unsignedInt >> 19));
    if ( v176 )
    {
      if ( (unsigned int)v175 < v176->dynEntCount[0] )
      {
        v177 = (__int64)&v176->dynEntDefList[0][v175];
        if ( v177 )
        {
          v178 = *(_WORD *)(v177 + 56);
          if ( v178 != 0xFFFF )
          {
            if ( v178 >= g_dynEntClientEntsAllocCount[0][0] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
              LODWORD(forceColor) = v178;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v179 = &g_dynEntClientLists[0][0][v178];
            if ( !v179 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 569, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            v180 = *(_WORD *)(v177 + 56);
            if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
              __debugbreak();
            if ( v180 >= g_dynEntClientEntsAllocCount[0][0] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
              LODWORD(forceColor) = v180;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v181 = &g_dynEntPoseLists[0][0][v180];
            if ( !v181 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 571, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
              __debugbreak();
            if ( (v179->flags & 1) != 0 )
            {
              Com_sprintf(dest, 0x200ui64, "Model %i", unsignedInt);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm8; y
                vmovaps xmm1, xmm10; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightb, 0);
              __asm
              {
                vaddss  xmm6, xmm8, xmm12
                vaddss  xmm7, xmm10, xmm13
              }
              Com_sprintf(dest, 0x200ui64, "Type: %s", typeNames[*(unsigned __int8 *)(v177 + 50)]);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightc, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v189 = "Inactive (may fail)";
              if ( *(_BYTE *)(v177 + 73) )
                v189 = "Active";
              Com_sprintf(dest, 0x200ui64, "Spawns %s", v189);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightd, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              Com_sprintf(dest, 0x200ui64, "Flags:");
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighte, 0);
              __asm
              {
                vaddss  xmm6, xmm6, xmm12
                vaddss  xmm7, xmm7, xmm13
              }
              v197 = "Not Active";
              if ( (v179->flags & 1) != 0 )
                v197 = "Active";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v197);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightf, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v201 = "Physics Not Setup";
              if ( (v179->flags & 2) != 0 )
                v201 = "Physics Setup";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v201);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightg, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v205 = "Not Linked To Entity";
              if ( (v179->flags & 4) != 0 )
                v205 = "Linked To Entity";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v205);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighth, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v209 = "Shadow Allowed";
              if ( (v179->flags & 8) != 0 )
                v209 = "No Shadow";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v209);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighti, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v213 = "Not Transient";
              if ( (v179->flags & 0x10) != 0 )
                v213 = "Transient";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v213);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightj, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v217 = "Didn't visibly change This frame";
              if ( (v179->flags & 0x40) != 0 )
                v217 = "Visibly changed This Frame";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v217);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightk, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v221 = "Didn't visibly change Last frame";
              if ( SLOBYTE(v179->flags) < 0 )
                v221 = "Visibly changed Last Frame";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v221);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightl, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v225 = "Collision Allowed";
              if ( (v179->flags & 0x1000) != 0 )
                v225 = "Collision Disabled";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v225);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightm, 0);
              __asm
              {
                vaddss  xmm6, xmm6, xmm12
                vaddss  xmm7, xmm7, xmm9
              }
              if ( v179->activeModel )
                name = v179->activeModel->name;
              else
                name = "Unassigned";
              Com_sprintf(dest, 0x200ui64, "Model %s", name);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightn, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              if ( (unsigned __int8)(*(_BYTE *)(v177 + 50) - 3) <= 1u )
              {
                Com_sprintf(dest, 0x200ui64, "Scriptable Map Index %i", *(unsigned int *)(v177 + 60));
                __asm
                {
                  vmovss  [rsp+64E0h+charHeight], xmm12
                  vmovaps xmm2, xmm6; y
                  vmovaps xmm1, xmm7; x
                }
                DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighto, 0);
                __asm { vaddss  xmm6, xmm6, xmm12 }
              }
              Com_sprintf(dest, 0x200ui64, "Physics System Id %i", v179->physicsSystemId);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightp, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              Com_sprintf(dest, 0x200ui64, "Physics System Detail Id %i", v179->physicsSystemDetailId);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightq, 0);
              __asm
              {
                vaddss  xmm8, xmm6, xmm12
                vaddss  xmm10, xmm7, xmm9
              }
              QuatToAxis(&v181->pose.quat, &axis);
              __asm { vmovaps xmm2, xmm13; length }
              CG_DebugAxis(&axis, &v181->pose.origin, *(float *)&_XMM2, 0, 1);
              __asm
              {
                vmovss  dword ptr [rbp+63E0h+origin], xmm11
                vmovss  dword ptr [rbp+63E0h+origin+4], xmm11
                vmovss  dword ptr [rbp+63E0h+origin+8], xmm11
                vxorps  xmm2, xmm2, xmm2; yaw
              }
              CG_DebugBox(&origin, &v181->bounds, *(float *)&_XMM2, &colorWhite, 0, 1);
              if ( (v179->flags & 4) != 0 )
              {
                AnchorEntity = DynEnt_GetAnchorEntity(LOCAL_CLIENT_0, **(_DWORD **)(v177 + 8));
                if ( AnchorEntity )
                {
                  if ( (AnchorEntity->flags & 1) != 0 )
                  {
                    CG_GetPoseOrigin(&AnchorEntity->pose, &outOrigin);
                    CG_DebugLine(&v181->pose.origin, &outOrigin, &colorWhite, 0, 1);
                    memset(&outOrigin, 0, sizeof(outOrigin));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v244 = DVARINT_dynEnt_debugBrushId;
  if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v244);
  if ( v244->current.integer != -1 )
  {
    v245 = DVARINT_dynEnt_debugBrushId;
    if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v245);
    v246 = v245->current.unsignedInt;
    v247 = v246 & 0x7FFFF;
    v248 = DynEnt_GetDynEntityList((DynEntityListId)(v246 >> 19));
    if ( v248 )
    {
      if ( (unsigned int)v247 < v248->dynEntCount[1] )
      {
        v249 = (__int64)&v248->dynEntDefList[1][v247];
        if ( v249 )
        {
          v250 = *(_WORD *)(v249 + 56);
          if ( v250 != 0xFFFF )
          {
            if ( v250 >= g_dynEntClientEntsAllocCount[0][1] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
              LODWORD(forceColor) = v250;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v251 = &g_dynEntClientLists[0][1][v250];
            if ( !v251 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 670, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            v252 = *(_WORD *)(v249 + 56);
            if ( !g_dynEntPoseLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
              __debugbreak();
            if ( v252 >= g_dynEntClientEntsAllocCount[0][1] )
            {
              LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
              LODWORD(forceColor) = v252;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v253 = &g_dynEntPoseLists[0][1][v252];
            if ( !v253 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 672, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
              __debugbreak();
            if ( (v251->flags & 1) != 0 )
            {
              BrushModel = CM_GetBrushModel(*(unsigned __int16 *)(v249 + 66));
              v255 = DVARINT_dynEnt_debugBrushId;
              if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v255);
              Com_sprintf(dest, 0x200ui64, "Brush %i", v255->current.unsignedInt);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm8; y
                vmovaps xmm1, xmm10; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightr, 0);
              __asm
              {
                vaddss  xmm6, xmm8, xmm12
                vaddss  xmm7, xmm10, xmm13
              }
              Com_sprintf(dest, 0x200ui64, "Type: %s", typeNames[*(unsigned __int8 *)(v249 + 50)]);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeights, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              if ( *(_BYTE *)(v249 + 73) )
                v170 = "Active";
              Com_sprintf(dest, 0x200ui64, "Spawns %s", v170);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightt, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              Com_sprintf(dest, 0x200ui64, "Flags:");
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightu, 0);
              __asm
              {
                vaddss  xmm6, xmm6, xmm12
                vaddss  xmm7, xmm7, xmm13
              }
              if ( (v251->flags & 1) != 0 )
                v171 = "Active";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v171);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightv, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v273 = "Physics Not Setup";
              if ( (v251->flags & 2) != 0 )
                v273 = "Physics Setup";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v273);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightw, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v277 = "Not Linked To Entity";
              if ( (v251->flags & 4) != 0 )
                v277 = "Linked To Entity";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v277);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightx, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v281 = "Shadow Allowed";
              if ( (v251->flags & 8) != 0 )
                v281 = "No Shadow";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v281);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeighty, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v285 = "Not Transient";
              if ( (v251->flags & 0x10) != 0 )
                v285 = "Transient";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v285);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightz, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v289 = "Didn't visibly change This frame";
              if ( (v251->flags & 0x40) != 0 )
                v289 = "Visibly changed This Frame";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v289);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightba, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v293 = "Didn't visibly change Last frame";
              if ( SLOBYTE(v251->flags) < 0 )
                v293 = "Visibly changed Last Frame";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v293);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbb, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              v297 = "Collision Allowed";
              if ( (v251->flags & 0x1000) != 0 )
                v297 = "Collision Disabled";
              Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v297);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbc, 0);
              __asm
              {
                vaddss  xmm6, xmm6, xmm12
                vaddss  xmm7, xmm7, xmm9
              }
              Com_sprintf(dest, 0x200ui64, "Brush %i", *(unsigned __int16 *)(v249 + 66));
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbd, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              if ( (unsigned __int8)(*(_BYTE *)(v249 + 50) - 3) <= 1u )
              {
                Com_sprintf(dest, 0x200ui64, "Scriptable Map Index %i", *(unsigned int *)(v249 + 60));
                __asm
                {
                  vmovss  [rsp+64E0h+charHeight], xmm12
                  vmovaps xmm2, xmm6; y
                  vmovaps xmm1, xmm7; x
                }
                DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbe, 0);
                __asm { vaddss  xmm6, xmm6, xmm12 }
              }
              LODWORD(fmta) = BrushModel->physicsShapeOverrideIdx;
              Com_sprintf(dest, 0x200ui64, "Physics %s with shape override %i", BrushModel->physicsAsset->name, fmta);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbf, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              Com_sprintf(dest, 0x200ui64, "Physics System Id %i", v251->physicsSystemId);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbg, 0);
              __asm { vaddss  xmm6, xmm6, xmm12 }
              Com_sprintf(dest, 0x200ui64, "Physics System Detail Id %i", v251->physicsSystemDetailId);
              __asm
              {
                vmovss  [rsp+64E0h+charHeight], xmm12
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
              }
              DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbh, 0);
              __asm
              {
                vaddss  xmm8, xmm6, xmm12
                vaddss  xmm10, xmm7, xmm9
              }
              QuatToAxis(&v253->pose.quat, &axis);
              __asm { vmovaps xmm2, xmm13; length }
              CG_DebugAxis(&axis, &v253->pose.origin, *(float *)&_XMM2, 0, 1);
              __asm
              {
                vmovss  dword ptr [rbp+63E0h+origin], xmm11
                vmovss  dword ptr [rbp+63E0h+origin+4], xmm11
                vmovss  dword ptr [rbp+63E0h+origin+8], xmm11
                vxorps  xmm2, xmm2, xmm2; yaw
              }
              CG_DebugBox(&origin, &v253->bounds, *(float *)&_XMM2, &colorWhite, 0, 1);
              if ( (v251->flags & 4) != 0 )
              {
                v317 = DynEnt_GetAnchorEntity(LOCAL_CLIENT_0, **(_DWORD **)(v249 + 8));
                if ( v317 )
                {
                  if ( (v317->flags & 1) != 0 )
                  {
                    CG_GetPoseOrigin(&v317->pose, &outOrigin);
                    CG_DebugLine(&v253->pose.origin, &outOrigin, &colorWhite, 0, 1);
                    memset(&outOrigin, 0, sizeof(outOrigin));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v318 = DVARBOOL_dynEnt_debugTransients;
  if ( !DVARBOOL_dynEnt_debugTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v318);
  if ( v318->current.enabled )
  {
    memset_0(v581, 0, 0x1800ui64);
    v319 = 0;
    v320 = 0;
    v321 = dynEntityListsCount;
    v322 = v553;
    do
    {
      v323 = v322;
      if ( v321 )
      {
        *(_QWORD *)origin.v = (unsigned __int16)v321;
        do
        {
          v324 = *v323;
          if ( *v323 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v324;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v325 = DynEnt_GetDynEntityList(v324);
          if ( v325 )
          {
            v549 = v325->dynEntCount[v320];
            v326 = 0;
            if ( v549 )
            {
              v327 = 0i64;
              do
              {
                v328 = DynEnt_GetDynEntityList(*v323);
                if ( !v328 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                  __debugbreak();
                if ( v326 >= v328->dynEntCount[v320] )
                {
                  LODWORD(shadow) = v328->dynEntCount[v320];
                  LODWORD(forceColor) = v326;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                    __debugbreak();
                }
                v329 = v328->dynEntDefList[v320];
                if ( (unsigned __int8)(v329[v327].type - 3) > 1u )
                {
                  v330 = v329[v327].transientIndexStored;
                  if ( v330 )
                  {
                    if ( v330 >= 0x600u )
                    {
                      LODWORD(shadow) = 1536;
                      LODWORD(forceColor) = v330;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 801, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->transientIndexStored ) < (unsigned)( ( sizeof( *array_counter( numDynentsPerTransient ) ) + 0 ) )", "dynEntDef->transientIndexStored doesn't index ARRAY_COUNT( numDynentsPerTransient )\n\t%i not in [0, %i)", forceColor, shadow) )
                        __debugbreak();
                    }
                    ++*(_DWORD *)&v581[4 * v329[v327].transientIndexStored];
                  }
                  else
                  {
                    ++v319;
                  }
                }
                ++v326;
                ++v327;
              }
              while ( v326 < v549 );
            }
          }
          ++v323;
          --*(_QWORD *)origin.v;
        }
        while ( *(_QWORD *)origin.v );
        v321 = dynEntityListsCount;
        v322 = v553;
      }
      ++v320;
    }
    while ( v320 < 2u );
    Com_sprintf(dest, 0x200ui64, "Dynent Transient Counts");
    __asm
    {
      vmovss  [rsp+64E0h+charHeight], xmm12
      vmovaps xmm2, xmm8; y
      vmovaps xmm1, xmm10; x
    }
    DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbi, 0);
    __asm
    {
      vaddss  xmm6, xmm8, xmm12
      vaddss  xmm7, xmm10, xmm13
    }
    Com_sprintf(dest, 0x200ui64, "Non Transient: %i", v319);
    __asm
    {
      vmovss  [rsp+64E0h+charHeight], xmm12
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
    }
    DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbj, 0);
    __asm { vaddss  xmm8, xmm6, xmm12 }
    v337 = 0;
    v338 = v581;
    do
    {
      v339 = *(_DWORD *)v338;
      if ( *(_DWORD *)v338 )
      {
        SPTransientName = DB_Transients_GetSPTransientName(v337);
        LODWORD(fmtb) = v339;
        Com_sprintf(dest, 0x200ui64, "Transient %s: %i", SPTransientName, fmtb);
        IsGameSystemTransientLoaded = CL_TransientsSP_IsGameSystemTransientLoaded(v337);
        v342 = &colorRed;
        if ( IsGameSystemTransientLoaded )
          v342 = &colorWhite;
        __asm
        {
          vmovss  [rsp+64E0h+charHeight], xmm12
          vmovaps xmm2, xmm8; y
          vmovaps xmm1, xmm7; x
        }
        DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, v342, 0, 1, charHeightbk, 0);
        __asm { vaddss  xmm8, xmm8, xmm12 }
      }
      ++v337;
      v338 += 4;
    }
    while ( v337 < 0x600 );
    __asm { vaddss  xmm10, xmm7, xmm9 }
  }
  v345 = DVARINT_dynEnt_debugDisplayOffsetY;
  if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v345);
  __asm { vcvttss2si eax, xmm8 }
  integer = v345->current.integer - _EAX + 200;
  v348 = 0;
  if ( integer > 0 )
    integer = 0;
  v349 = DVARINT_dynEnt_debugDisplayOffsetY;
  if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v349);
  if ( v349->current.integer > integer )
    integer = v349->current.integer;
  v350 = DVARINT_dynEnt_debugDisplayOffsetY;
  if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v350);
  if ( v350->current.integer != integer )
    Dvar_SetInt_Internal(DVARINT_dynEnt_debugDisplayOffsetY, integer);
  v351 = DVARBOOL_dynEnt_debugDynentShapes;
  if ( !DVARBOOL_dynEnt_debugDynentShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDynentShapes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v351);
  __asm { vmovss  xmm6, cs:__real@3e99999a }
  v353 = v553;
  v53 = !v351->current.enabled;
  v354 = dynEntityListsCount;
  if ( !v53 )
  {
    v355 = v553;
    *(_QWORD *)origin.v = v553;
    if ( dynEntityListsCount )
    {
      *(_QWORD *)outOrigin.v = (unsigned __int16)dynEntityListsCount;
      do
      {
        v356 = *v355;
        if ( *v355 >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(shadow) = 1536;
          LODWORD(forceColor) = (unsigned __int16)v356;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v357 = DynEnt_GetDynEntityList(v356);
        if ( v357 )
        {
          v550 = v357->dynEntCount[0];
          v358 = 0;
          for ( i = 0; (int)v358 < v550; i = v358 )
          {
            v359 = *v355;
            if ( *v355 >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadow) = 1536;
              LODWORD(forceColor) = (unsigned __int16)v359;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            if ( v358 >= 0x7FFFF )
            {
              LODWORD(shadow) = 0x7FFFF;
              LODWORD(forceColor) = v358;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v360 = DynEnt_GetDef((DynEntityListId)((v358 | ((unsigned __int16)v359 << 19)) >> 19), v358 & 0x7FFFF, DYNENT_BASIS_MODEL);
            if ( !v360 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            v361 = v360->clientId[0];
            if ( v361 != 0xFFFF )
            {
              ClientFromClientId = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v361, DYNENT_BASIS_MODEL);
              v363 = ClientFromClientId;
              if ( ClientFromClientId )
              {
                if ( ClientFromClientId->activeModel )
                {
                  physicsSystemId = ClientFromClientId->physicsSystemId;
                  if ( physicsSystemId != -1 )
                  {
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( !g_physicsClientWorldsCreated )
                    {
                      LODWORD(shadow) = 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shadow) )
                        __debugbreak();
                    }
                    if ( !g_havokPhysicsWorlds[3].world )
                    {
                      LODWORD(shadow) = 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", shadow) )
                        __debugbreak();
                    }
                    BodyCount = HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[3].instanceManager, physicsSystemId);
                    if ( BodyCount )
                    {
                      do
                      {
                        v366 = v363->physicsSystemId;
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( v366 == -1 )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shadow) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shadow) )
                            __debugbreak();
                        }
                        m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v366, v348)->m_serialAndIndex;
                        v368 = m_serialAndIndex & 0xFFFFFF;
                        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 863, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                          __debugbreak();
                        Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, m_serialAndIndex, (vec3_t *)position, &orientation);
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 243, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Num Shapes when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( v368 == 0xFFFFFF )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 245, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Num Shapes with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", shadow) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 246, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Num Shapes in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shadow) )
                            __debugbreak();
                        }
                        if ( v368 == 0xFFFFFF )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 324, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Num Shapes with invalid body id for world %i", "bodyId.isValid()", shadow) )
                            __debugbreak();
                        }
                        world = g_havokPhysicsWorlds[3].world;
                        if ( !g_havokPhysicsWorlds[3].world )
                        {
                          LODWORD(shadow) = 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 328, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", shadow) )
                            __debugbreak();
                        }
                        v370 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
                        NumShapes = HavokPhysics_GetNumShapes(*(const hknpShape **)(v370 + 96));
                        v372 = j_va("%i", NumShapes);
                        __asm { vmovaps xmm2, xmm6; scale }
                        CG_DebugString((const vec3_t *)position, &colorWhite, *(float *)&_XMM2, v372, 0, 1);
                        ++v348;
                      }
                      while ( v348 < BodyCount );
                      v358 = i;
                      v355 = *(DynEntityListId **)origin.v;
                    }
                    v348 = 0;
                  }
                }
              }
            }
            ++v358;
          }
        }
        *(_QWORD *)origin.v = ++v355;
        --*(_QWORD *)outOrigin.v;
      }
      while ( *(_QWORD *)outOrigin.v );
      v354 = dynEntityListsCount;
      v353 = v553;
    }
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugDynentBodyBoneCounts, "dynEnt_debugDynentBodyBoneCounts") )
  {
    Com_sprintf(dest, 0x200ui64, "Dynents with >1 bone or body");
    __asm
    {
      vmovss  [rsp+64E0h+charHeight], xmm12
      vmovaps xmm2, xmm8; y
      vmovaps xmm1, xmm10; x
    }
    DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, charHeightbl, 0);
    __asm
    {
      vaddss  xmm7, xmm8, xmm12
      vaddss  xmm10, xmm10, xmm13
    }
    v378 = v353;
    if ( v354 )
    {
      *(_QWORD *)origin.v = (unsigned __int16)v354;
      __asm
      {
        vmovss  xmm8, cs:__real@40000000
        vmovss  xmm9, cs:__real@40800000
      }
      do
      {
        v381 = *v378;
        if ( *v378 >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(shadow) = 1536;
          LODWORD(forceColor) = (unsigned __int16)v381;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v382 = DynEnt_GetDynEntityList(v381);
        if ( v382 )
        {
          v551 = v382->dynEntCount[0];
          for ( j = 0; (int)j < v551; ++j )
          {
            v384 = *v378;
            if ( *v378 >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadow) = 1536;
              LODWORD(forceColor) = (unsigned __int16)v384;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            if ( j >= 0x7FFFF )
            {
              LODWORD(shadow) = 0x7FFFF;
              LODWORD(forceColor) = j;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v385 = j | ((unsigned __int16)v384 << 19);
            v386 = v385 & 0x7FFFF;
            v387 = v385 >> 19;
            v388 = DynEnt_GetDef((DynEntityListId)v387, v386, DYNENT_BASIS_MODEL);
            if ( !v388 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            v389 = v388->clientId[0];
            if ( v389 != 0xFFFF )
            {
              v390 = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v389, DYNENT_BASIS_MODEL);
              v391 = (const char ***)v390;
              if ( v390 )
              {
                if ( v390->activeModel && v390->physicsSystemId != -1 )
                {
                  v392 = DynEnt_GetDef((DynEntityListId)v387, v386, DYNENT_BASIS_MODEL);
                  if ( !v392 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                    __debugbreak();
                  if ( v392->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                    __debugbreak();
                  _R15 = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v392->clientId[0], DYNENT_BASIS_MODEL);
                  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 907, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                    __debugbreak();
                  v394 = *((_DWORD *)v391 + 3);
                  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                    __debugbreak();
                  if ( v394 == -1 )
                  {
                    LODWORD(shadow) = 3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shadow) )
                      __debugbreak();
                  }
                  if ( !g_physicsClientWorldsCreated )
                  {
                    LODWORD(shadow) = 3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shadow) )
                      __debugbreak();
                  }
                  if ( v394 == -1 )
                  {
                    LODWORD(shadow) = 3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", shadow) )
                      __debugbreak();
                  }
                  if ( !g_havokPhysicsWorlds[3].world )
                  {
                    LODWORD(shadow) = 3;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", shadow) )
                      __debugbreak();
                  }
                  v395 = HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[3].instanceManager, v394);
                  v396 = v395;
                  numParts = *((_BYTE *)*v391 + 20);
                  if ( numParts > _R15->numParts )
                    numParts = _R15->numParts;
                  v398 = numParts;
                  if ( v395 > 1 || numParts > 1u )
                  {
                    LODWORD(forceColor) = numParts;
                    LODWORD(fmtc) = v395;
                    Com_sprintf(dest, 0x200ui64, "Dynent using model %s has %i bodies and %i bones", **v391, fmtc, forceColor);
                    v399 = &colorWhite;
                    if ( v398 > v396 )
                      v399 = &colorRed;
                    __asm
                    {
                      vmovss  [rsp+64E0h+charHeight], xmm12
                      vmovaps xmm2, xmm7; y
                      vmovaps xmm1, xmm10; x
                    }
                    DynEnt_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, v399, 0, 1, charHeightbm, 0);
                    __asm
                    {
                      vaddss  xmm7, xmm7, xmm12
                      vmovss  xmm0, dword ptr [r15+4Ch]
                      vmovss  dword ptr [rbp+63E0h+outOrigin], xmm0
                      vmovss  xmm1, dword ptr [r15+50h]
                      vmovss  dword ptr [rbp+63E0h+outOrigin+4], xmm1
                      vmovss  xmm2, dword ptr [r15+54h]
                      vmovss  dword ptr [rbp+63E0h+outOrigin+8], xmm2
                    }
                    v404 = *v391;
                    __asm
                    {
                      vmulss  xmm1, xmm8, dword ptr [rdx+28h]
                      vaddss  xmm2, xmm1, xmm2
                      vaddss  xmm3, xmm2, xmm9
                      vmovss  dword ptr [rbp+63E0h+outOrigin+8], xmm3
                    }
                    v408 = j_va("%s:%i:%i", *v404, v396, v398);
                    __asm { vmovaps xmm2, xmm6; scale }
                    CG_DebugString(&outOrigin, v399, *(float *)&_XMM2, v408, 0, 1);
                  }
                }
              }
            }
          }
        }
        ++v378;
        --*(_QWORD *)origin.v;
      }
      while ( *(_QWORD *)origin.v );
    }
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugMaxCollisionCacheCount, "dynEnt_debugMaxCollisionCacheCount") )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_dynEnt_debugMaxCollisionCacheCountThreshold, "dynEnt_debugMaxCollisionCacheCountThreshold");
    v410 = DYNENT_BASIS_MODEL;
    v411 = dynEntityListsCount;
    v412 = v553;
    do
    {
      v413 = v412;
      if ( v411 )
      {
        *(_QWORD *)origin.v = (unsigned __int16)v411;
        do
        {
          v414 = *v413;
          if ( *v413 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v414;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v415 = DynEnt_GetDynEntityList(v414);
          if ( v415 )
          {
            v416 = v415->dynEntCount[(unsigned __int8)v410];
            for ( k = 0; k < v416; ++k )
            {
              v418 = *v413;
              if ( *v413 >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(shadow) = 1536;
                LODWORD(forceColor) = (unsigned __int16)v418;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( k >= 0x7FFFF )
              {
                LODWORD(shadow) = 0x7FFFF;
                LODWORD(forceColor) = k;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v419 = k | ((unsigned __int16)v418 << 19);
              v420 = v419 & 0x7FFFF;
              v421 = v419 >> 19;
              v422 = DynEnt_GetDef((DynEntityListId)v421, v420, v410);
              if ( !v422 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              v423 = v422->clientId[0];
              if ( v423 != 0xFFFF )
              {
                v424 = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v423, v410);
                if ( v424 )
                {
                  if ( v424->spawnCollisionCacheCount >= Int_Internal_DebugName )
                  {
                    v425 = DynEnt_GetDef((DynEntityListId)v421, v420, v410);
                    if ( !v425 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                      __debugbreak();
                    if ( v425->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                      __debugbreak();
                    _RDI = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v425->clientId[0], v410);
                    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 960, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                      __debugbreak();
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rdi+4Ch]
                      vmovss  dword ptr [rbp+63E0h+outOrigin], xmm0
                      vmovss  xmm1, dword ptr [rdi+50h]
                      vmovss  dword ptr [rbp+63E0h+outOrigin+4], xmm1
                      vmovss  xmm0, dword ptr [rdi+54h]
                      vmovss  dword ptr [rbp+63E0h+outOrigin+8], xmm0
                    }
                    if ( v424->activeModel )
                      v429 = j_va("%s:%i", v424->activeModel->name, (unsigned int)v424->spawnCollisionCacheCount);
                    else
                      v429 = j_va("%i", (unsigned int)v424->spawnCollisionCacheCount);
                    __asm { vmovaps xmm2, xmm6; scale }
                    CG_DebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, v429, 0, 1);
                  }
                }
              }
            }
          }
          ++v413;
          --*(_QWORD *)origin.v;
        }
        while ( *(_QWORD *)origin.v );
        v411 = dynEntityListsCount;
        v412 = v553;
      }
      ++v410;
    }
    while ( (unsigned __int8)v410 < DYNENT_BASIS_COUNT );
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugSpawnDepth, "dynEnt_debugSpawnDepth") )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_dynEnt_debugSpawnDepthThreshold, "dynEnt_debugSpawnDepthThreshold");
    __asm { vmovaps xmm7, xmm0 }
    v432 = DYNENT_BASIS_MODEL;
    v433 = dynEntityListsCount;
    v434 = v553;
    do
    {
      v435 = v434;
      if ( v433 )
      {
        *(_QWORD *)origin.v = (unsigned __int16)v433;
        do
        {
          v436 = *v435;
          if ( *v435 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v436;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v437 = DynEnt_GetDynEntityList(v436);
          if ( v437 )
          {
            v438 = v437->dynEntCount[(unsigned __int8)v432];
            for ( m = 0; m < v438; ++m )
            {
              v440 = *v435;
              if ( *v435 >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(shadow) = 1536;
                LODWORD(forceColor) = (unsigned __int16)v440;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( m >= 0x7FFFF )
              {
                LODWORD(shadow) = 0x7FFFF;
                LODWORD(forceColor) = m;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v441 = m | ((unsigned __int16)v440 << 19);
              v442 = v441 & 0x7FFFF;
              v443 = v441 >> 19;
              v444 = DynEnt_GetDef((DynEntityListId)v443, v442, v432);
              if ( !v444 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              v445 = v444->clientId[0];
              if ( v445 != 0xFFFF )
              {
                _RAX = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v445, v432);
                _RSI = _RAX;
                if ( _RAX )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+2Ch]
                    vcomiss xmm0, xmm7
                  }
                  v449 = DynEnt_GetDef((DynEntityListId)v443, v442, v432);
                  if ( !v449 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                    __debugbreak();
                  if ( v449->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                    __debugbreak();
                  _RDI = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v449->clientId[0], v432);
                  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 1010, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                    __debugbreak();
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+4Ch]
                    vmovss  dword ptr [rbp+63E0h+outOrigin], xmm0
                    vmovss  xmm1, dword ptr [rdi+50h]
                    vmovss  dword ptr [rbp+63E0h+outOrigin+4], xmm1
                    vmovss  xmm0, dword ptr [rdi+54h]
                    vmovss  dword ptr [rbp+63E0h+outOrigin+8], xmm0
                    vmovss  xmm0, dword ptr [rsi+2Ch]
                  }
                  if ( _RSI->activeModel )
                  {
                    __asm
                    {
                      vcomiss xmm0, xmm11
                      vcvtss2sd xmm2, xmm0, xmm0
                      vmovq   r8, xmm2
                    }
                    v457 = j_va("%s:%.2f", _RSI->activeModel->name, _R8);
                    __asm { vmovaps xmm2, xmm6; scale }
                    CG_DebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, v457, 0, 1);
                  }
                  else
                  {
                    __asm
                    {
                      vcomiss xmm0, xmm11
                      vcvtss2sd xmm1, xmm0, xmm0
                      vmovq   rdx, xmm1
                    }
                    v462 = j_va("%.2f", _RDX);
                    __asm { vmovaps xmm2, xmm6; scale }
                    CG_DebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, v462, 0, 1);
                  }
                }
              }
            }
          }
          ++v435;
          --*(_QWORD *)origin.v;
        }
        while ( *(_QWORD *)origin.v );
        v433 = dynEntityListsCount;
        v434 = v553;
      }
      ++v432;
    }
    while ( (unsigned __int8)v432 < DYNENT_BASIS_COUNT );
  }
  for ( n = DYNENT_SPATIAL_POPULATION_DENSE_TYPE; (unsigned __int8)n < DYNENT_SPATIAL_POPULATION_TYPE_COUNT; ++n )
  {
    v464 = DVARINT_dynEnt_debugSpatialPopulation;
    if ( !DVARINT_dynEnt_debugSpatialPopulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSpatialPopulation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v464);
    if ( v464->current.integer == (unsigned __int8)n + 1 )
      goto LABEL_624;
    v465 = DVARINT_dynEnt_debugSpatialPopulation;
    if ( !DVARINT_dynEnt_debugSpatialPopulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSpatialPopulation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v465);
    if ( v465->current.integer == 3 )
    {
LABEL_624:
      v466 = DVARBOOL_dynEnt_debugDrawSpatialWorld;
      if ( !DVARBOOL_dynEnt_debugDrawSpatialWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialWorld") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v466);
      if ( v466->current.enabled )
        DynEntCL_Spatial_DebugDrawWorld(n);
      v467 = DVARINT_dynEnt_debugDrawSpatialOverlay;
      if ( !DVARINT_dynEnt_debugDrawSpatialOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v467);
      if ( v467->current.integer )
      {
        v468 = DVARINT_dynEnt_debugDrawSpatialOverlay;
        if ( !DVARINT_dynEnt_debugDrawSpatialOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlay") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v468);
        if ( v468->current.integer == 2 )
        {
          __asm { vmovaps xmm1, xmm11 }
        }
        else
        {
          _RBX = DVARFLT_dynEnt_debugDrawSpatialOverlayZoom;
          if ( !DVARFLT_dynEnt_debugDrawSpatialOverlayZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlayZoom") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm { vmovss  xmm1, dword ptr [rbx+28h]; zoomWorldSize }
        }
        DynEntCL_Spatial_DebugDrawOverlay(n, *(float *)&_XMM1);
      }
    }
  }
  Dvar_SetBool_Internal(DVARBOOL_dynEnt_debugDump, 0);
LABEL_645:
  _R11 = &v601;
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
DynEnt_DrawDebugLine
==============
*/

float DynEnt_DrawDebugLine(const ScreenPlacement *scrPlace, double x, double y, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust, const char *name, const char *valuefmt, ...)
{
  const ScreenPlacement *v15; 
  __int64 v18; 
  int v19; 
  const char *v20; 
  char *ap; 
  float v29; 
  char dest[512]; 
  char v31[512]; 
  char v32; 
  void *retaddr; 
  va_list va; 

  va_start(va, valuefmt);
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
  }
  v15 = scrPlace;
  __asm
  {
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm1
  }
  if ( *valuefmt )
  {
    Com_vsprintf_truncate(dest, 0x200ui64, 0x200ui64, valuefmt, va);
    v18 = -1i64;
    do
      ++v18;
    while ( name[v18] );
    v19 = 30 - v18;
    if ( 30 - (int)v18 < 1 )
      v19 = 1;
    LODWORD(ap) = v19;
    Com_sprintf_truncate(v31, 0x200ui64, "%s:%*c %s", name, ap, 32, dest);
    v20 = v31;
    scrPlace = v15;
    __asm
    {
      vmovaps xmm2, xmm8; y
      vmovaps xmm1, xmm7; x
    }
  }
  else
  {
    v20 = name;
  }
  __asm
  {
    vmovss  xmm6, [rsp+4A8h+charHeight]
    vmovss  [rsp+4A8h+var_470], xmm6
  }
  DynEnt_DrawDebugString(scrPlace, *(float *)&x, *(float *)&y, v20, setColor, forceColor, shadow, v29, adjust);
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
DynEnt_DrawDebugString
==============
*/

void __fastcall DynEnt_DrawDebugString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  const dvar_t *v15; 
  const dvar_t *v16; 
  char v20; 
  char v21; 
  float v26; 

  __asm
  {
    vmovss  xmm0, [rsp+88h+charHeight]
    vmovss  [rsp+88h+var_50], xmm0
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, forceColor, shadow, v26, adjust);
  v15 = DVARBOOL_dynEnt_debugDump;
  if ( !DVARBOOL_dynEnt_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    v16 = DVARINT_dynEnt_debugDisplayOffsetX;
    __asm { vmovaps [rsp+88h+var_28], xmm7 }
    if ( !DVARINT_dynEnt_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, cs:__real@41000000
      vcomiss xmm6, xmm7
    }
    if ( !(v20 | v21) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, cs:__real@c1400000
      }
      do
      {
        Com_Printf(14, " ");
        __asm
        {
          vaddss  xmm6, xmm6, xmm8
          vcomiss xmm6, xmm7
        }
      }
      while ( !(v20 | v21) );
      __asm { vmovaps xmm8, [rsp+88h+var_38] }
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
    __asm { vmovaps xmm7, [rsp+88h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

