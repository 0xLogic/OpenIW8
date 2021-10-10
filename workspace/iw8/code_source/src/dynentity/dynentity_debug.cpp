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
  void *v3; 
  const ScreenPlacement *v4; 
  const dvar_t *v5; 
  __int128 v6; 
  __int128 v7; 
  const dvar_t *v8; 
  __int128 v9; 
  __int128 v10; 
  DynEntityListId *dynEntListIds; 
  int v12; 
  unsigned __int8 v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  __int128 v16; 
  __int128 v17; 
  int v18; 
  int v19; 
  DynEntityListId v20; 
  DynEntityList *DynEntityList; 
  int v22; 
  int v23; 
  unsigned int v24; 
  __int64 v25; 
  DynEntityListId v26; 
  DynEntityList *v27; 
  DynEntityDef *v28; 
  unsigned __int16 v29; 
  DynEntityClient *v30; 
  int v31; 
  int v32; 
  unsigned __int16 v33; 
  DynEntitySpatialActivationMode priority; 
  unsigned __int16 flags; 
  __int64 type; 
  unsigned __int16 transientIndexStored; 
  bool v38; 
  __int128 v39; 
  __int128 v40; 
  char v41; 
  double v42; 
  __int128 v43; 
  double v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  const char **v48; 
  __int64 v49; 
  __int64 v50; 
  double v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  double v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  const char **v59; 
  __int64 v60; 
  __int64 v61; 
  double v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  SpatialPartition_PopulationSort_ClientData *v66; 
  double v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  double v72; 
  __int128 v73; 
  double v74; 
  double v75; 
  __int128 v76; 
  __int64 v77; 
  double v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  double v83; 
  __int128 v84; 
  double v85; 
  __int128 v86; 
  signed int v87; 
  __int64 v88; 
  int v89; 
  bool IsZoneVisible; 
  const char *v91; 
  __int128 v92; 
  __int128 v93; 
  const dvar_t *v94; 
  const dvar_t *v95; 
  DynEntityListId *v96; 
  DynEntityListId *v97; 
  DynEntityListId v98; 
  unsigned int v99; 
  DynEntityListId v100; 
  DynEntityList *v101; 
  int v102; 
  __int64 v103; 
  __int64 v104; 
  DynEntityList *v105; 
  DynEntityDef *v106; 
  unsigned __int16 v107; 
  DynEntityClient *v108; 
  unsigned __int16 v109; 
  DynEntityPose *v110; 
  const dvar_t *v111; 
  const dvar_t *v112; 
  DynEntityListId *v113; 
  DynEntityListId v114; 
  DynEntityList *v115; 
  int v116; 
  __int64 v117; 
  __int64 v118; 
  DynEntityList *v119; 
  DynEntityDef *v120; 
  unsigned __int16 v121; 
  const DynEntityDef *Def; 
  unsigned __int16 v123; 
  DynEntityClient *v124; 
  const DynEntityDef *v125; 
  unsigned __int16 v126; 
  DynEntityPose *v127; 
  const dvar_t *v128; 
  const char *v129; 
  const char *v130; 
  const dvar_t *v131; 
  unsigned int unsignedInt; 
  __int64 v133; 
  DynEntityList *v134; 
  __int64 v135; 
  unsigned __int16 v136; 
  DynEntityClient *v137; 
  unsigned __int16 v138; 
  DynEntityPose *v139; 
  float v140; 
  __int128 v141; 
  const char *v142; 
  __int128 v143; 
  float v144; 
  float v145; 
  const char *v146; 
  __int128 v147; 
  const char *v148; 
  float v149; 
  const char *v150; 
  float v151; 
  const char *v152; 
  float v153; 
  const char *v154; 
  float v155; 
  const char *v156; 
  float v157; 
  const char *v158; 
  const char *v159; 
  __int128 v160; 
  float v161; 
  float v162; 
  const char *name; 
  __int128 v164; 
  __int128 v165; 
  __int128 v166; 
  centity_t *AnchorEntity; 
  const dvar_t *v168; 
  const dvar_t *v169; 
  unsigned int v170; 
  __int64 v171; 
  DynEntityList *v172; 
  __int64 v173; 
  unsigned __int16 v174; 
  DynEntityClient *v175; 
  unsigned __int16 v176; 
  DynEntityPose *v177; 
  const cmodel_t *BrushModel; 
  const dvar_t *v179; 
  float v180; 
  __int128 v181; 
  __int128 v182; 
  float v183; 
  float v184; 
  __int128 v185; 
  const char *v186; 
  float v187; 
  const char *v188; 
  float v189; 
  const char *v190; 
  float v191; 
  const char *v192; 
  float v193; 
  const char *v194; 
  float v195; 
  const char *v196; 
  const char *v197; 
  float v198; 
  __int128 v199; 
  __int128 v200; 
  centity_t *v201; 
  const dvar_t *v202; 
  unsigned int v203; 
  unsigned __int8 v204; 
  DynEntityListId v205; 
  DynEntityListId *v206; 
  DynEntityListId *v207; 
  DynEntityListId v208; 
  DynEntityList *v209; 
  unsigned int v210; 
  __int64 v211; 
  DynEntityList *v212; 
  DynEntityDef *v213; 
  unsigned __int16 v214; 
  __int128 v215; 
  float v216; 
  unsigned int v217; 
  char *v218; 
  int v219; 
  const char *SPTransientName; 
  bool IsGameSystemTransientLoaded; 
  const vec4_t *v222; 
  __int128 v223; 
  const dvar_t *v224; 
  int integer; 
  unsigned int v226; 
  const dvar_t *v227; 
  const dvar_t *v228; 
  const dvar_t *v229; 
  DynEntityListId *v230; 
  DynEntityListId v231; 
  DynEntityListId *v232; 
  DynEntityListId v233; 
  DynEntityList *v234; 
  unsigned int v235; 
  DynEntityListId v236; 
  const DynEntityDef *v237; 
  unsigned __int16 v238; 
  DynEntityClient *ClientFromClientId; 
  DynEntityClient *v240; 
  unsigned int physicsSystemId; 
  unsigned int BodyCount; 
  unsigned int v243; 
  unsigned int m_serialAndIndex; 
  int v245; 
  hknpWorld *world; 
  __int64 v247; 
  unsigned int NumShapes; 
  const char *v249; 
  __int128 v250; 
  __int128 v251; 
  float v252; 
  DynEntityListId *v253; 
  DynEntityListId v254; 
  DynEntityList *v255; 
  unsigned int j; 
  DynEntityListId v257; 
  unsigned int v258; 
  int v259; 
  unsigned int v260; 
  const DynEntityDef *v261; 
  unsigned __int16 v262; 
  DynEntityClient *v263; 
  const char ***v264; 
  const DynEntityDef *v265; 
  DynEntityPose *PoseFromClientId; 
  unsigned int v267; 
  unsigned int v268; 
  unsigned int v269; 
  unsigned __int8 numParts; 
  unsigned int v271; 
  const vec4_t *v272; 
  __int128 v273; 
  const char **v274; 
  const char *v275; 
  DynEntityBasis v276; 
  DynEntityListId v277; 
  DynEntityListId *v278; 
  DynEntityListId *v279; 
  DynEntityListId v280; 
  DynEntityList *v281; 
  unsigned int v282; 
  unsigned int k; 
  DynEntityListId v284; 
  unsigned int v285; 
  int v286; 
  unsigned int v287; 
  const DynEntityDef *v288; 
  unsigned __int16 v289; 
  DynEntityClient *v290; 
  const DynEntityDef *v291; 
  DynEntityPose *v292; 
  const char *v293; 
  double Float_Internal_DebugName; 
  float v295; 
  DynEntityBasis v296; 
  DynEntityListId v297; 
  DynEntityListId *v298; 
  DynEntityListId *v299; 
  DynEntityListId v300; 
  DynEntityList *v301; 
  unsigned int v302; 
  unsigned int v303; 
  DynEntityListId v304; 
  unsigned int v305; 
  int v306; 
  unsigned int v307; 
  const DynEntityDef *v308; 
  unsigned __int16 v309; 
  DynEntityClient *v310; 
  DynEntityClient *v311; 
  float spawnPenetrationDepth; 
  const DynEntityDef *v313; 
  DynEntityPose *v314; 
  float v315; 
  const char *v316; 
  const char *v317; 
  const char *v318; 
  const vec4_t *v319; 
  DynEntitySpatialPopulationType m; 
  const dvar_t *v321; 
  const dvar_t *v322; 
  const dvar_t *v323; 
  const dvar_t *v324; 
  const dvar_t *v325; 
  float value; 
  const dvar_t *v327; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  __int64 v336; 
  __int64 v337; 
  __int64 v338; 
  __int64 v339; 
  __int64 v340; 
  __int64 v341; 
  DynEntityListId dynEntityListsCount; 
  int v343; 
  unsigned int v345; 
  signed int v346; 
  signed int v347; 
  int Int_Internal_DebugName; 
  DynEntityListId *v349; 
  hknpBodyId result[2]; 
  unsigned int i; 
  ScreenPlacement *scrPlacea; 
  __int64 v353; 
  vec3_t origin; 
  vec3_t outOrigin; 
  _QWORD position[2]; 
  tmat33_t<vec3_t> axis; 
  __int64 v358; 
  __int64 v359; 
  __int64 v360; 
  __int64 v361; 
  __int64 v362; 
  __int64 v363; 
  __int64 v364; 
  __int64 v365; 
  __int64 v366; 
  __int64 v367; 
  __int64 v368; 
  __int64 v369; 
  __int64 v370; 
  __int64 v371; 
  vec4_t orientation; 
  __int64 v373; 
  int v374; 
  __int64 v375[3]; 
  int v376; 
  char v377[256]; 
  int v378[1540]; 
  int v379[1540]; 
  int v380[1540]; 
  char text[8]; 
  __int64 v382; 
  __int64 v383; 
  __int64 v384; 
  __int64 v385; 
  __int64 v386; 
  __int64 v387; 
  char dest[512]; 

  v3 = alloca(v2);
  v353 = -2i64;
  v4 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 202, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( s_DynEntityDebugReady )
  {
    v5 = DVARINT_dynEnt_debugDisplayOffsetX;
    if ( !DVARINT_dynEnt_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = 0i64;
    *(float *)&v6 = (float)v5->current.integer + 8.0;
    v7 = v6;
    v8 = DVARINT_dynEnt_debugDisplayOffsetY;
    if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = 0i64;
    *(float *)&v9 = (float)v8->current.integer + 8.0;
    v10 = v9;
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
      v349 = dynEntListIds;
      if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 217, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
        __debugbreak();
    }
    else
    {
      dynEntityListsCount = 0;
      dynEntListIds = NULL;
      v349 = NULL;
    }
    v12 = 0;
    do
    {
      v13 = v12;
      v14 = DVARINT_dynEnt_debugSummary;
      if ( !DVARINT_dynEnt_debugSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSummary") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v343 = ++v12;
      if ( v14->current.integer == v12 )
        goto LABEL_26;
      v15 = DVARINT_dynEnt_debugSummary;
      if ( !DVARINT_dynEnt_debugSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSummary") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.integer == 3 )
      {
LABEL_26:
        position[0] = "Model";
        position[1] = "Brush";
        Com_sprintf(dest, 0x200ui64, "DynEnt %s Summary:", (const char *)position[v13]);
        DynEnt_DrawDebugString(v4, *(float *)&v7, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
        v17 = v10;
        *(float *)&v17 = *(float *)&v10 + 8.0;
        v16 = v17;
        *(_QWORD *)text = 0i64;
        v382 = 0i64;
        v383 = 0i64;
        v384 = 0i64;
        v385 = 0i64;
        v386 = 0i64;
        v387 = 0i64;
        v365 = 0i64;
        v366 = 0i64;
        v367 = 0i64;
        v368 = 0i64;
        v369 = 0i64;
        v370 = 0i64;
        v371 = 0i64;
        v358 = 0i64;
        v359 = 0i64;
        v360 = 0i64;
        v361 = 0i64;
        v362 = 0i64;
        v363 = 0i64;
        v364 = 0i64;
        memset(&axis, 0, 28);
        memset(v375, 0, sizeof(v375));
        v376 = 0;
        orientation = 0ui64;
        v373 = 0i64;
        v374 = 0;
        memset_0(v380, 0, 0x1804ui64);
        memset_0(v379, 0, 0x1804ui64);
        memset_0(v378, 0, 0x1804ui64);
        v18 = 0;
        *(_QWORD *)&result[0].m_serialAndIndex = dynEntListIds;
        if ( dynEntityListsCount )
        {
          *(_QWORD *)origin.v = (unsigned __int16)dynEntityListsCount;
          v19 = HIDWORD(v387);
          while ( 1 )
          {
            v20 = *dynEntListIds;
            if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadowa) = 1536;
              LODWORD(forceColora) = (unsigned __int16)v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            if ( v13 >= 2u )
            {
              LODWORD(shadowa) = 2;
              LODWORD(forceColora) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            DynEntityList = DynEnt_GetDynEntityList(v20);
            v22 = 0;
            if ( DynEntityList )
              v22 = DynEntityList->dynEntCount[v13];
            v23 = v18 + 1;
            if ( v22 <= 0 )
              v23 = v18;
            v18 = v23;
            i = v23;
            v24 = 0;
            *(_QWORD *)outOrigin.v = v22;
            if ( v22 > 0 )
              break;
LABEL_109:
            *(_QWORD *)&result[0].m_serialAndIndex = ++dynEntListIds;
            if ( !--*(_QWORD *)origin.v )
              goto LABEL_110;
          }
          v25 = 0i64;
          while ( 1 )
          {
            v26 = *dynEntListIds;
            if ( v13 >= 2u )
            {
              LODWORD(shadowa) = 2;
              LODWORD(forceColora) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            v27 = DynEnt_GetDynEntityList(v26);
            if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            if ( v24 >= v27->dynEntCount[v13] )
            {
              LODWORD(shadowa) = v27->dynEntCount[v13];
              LODWORD(forceColora) = v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            v28 = &v27->dynEntDefList[v13][v25];
            if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 312, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            v29 = v28->clientId[0];
            if ( v29 == 0xFFFF )
              break;
            if ( v13 >= 2u )
            {
              LODWORD(shadowa) = 2;
              LODWORD(forceColora) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            v33 = g_dynEntClientEntsAllocCount[0][v13];
            if ( v29 >= v33 )
            {
              LODWORD(shadowa) = v33;
              LODWORD(forceColora) = v29;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColora, shadowa) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v30 = &g_dynEntClientLists[0][v13][v29];
            if ( !v30 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 316, ASSERT_TYPE_ASSERT, "((clientId == 0xFFFF) || dynEntClient)", (const char *)&queryFormat, "(clientId == DYNENT_INVALID_CLIENT_ID) || dynEntClient") )
                __debugbreak();
              goto LABEL_54;
            }
            if ( (v30->flags & 1) == 0 )
              goto LABEL_54;
            v31 = 1;
LABEL_55:
            v32 = v30 && (v30->flags & 0x100) != 0;
            ++*(_DWORD *)text;
            LODWORD(v365) = v31 + v365;
            LODWORD(v358) = v32 + v358;
            priority = v28->priority;
            switch ( priority )
            {
              case DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE:
                LODWORD(v383) = v383 + 1;
                LODWORD(v367) = v31 + v367;
                LODWORD(v360) = v32 + v360;
                break;
              case DYNENT_PRIORITY_NO_SPATIAL_DEACTIVATABLE:
                ++HIDWORD(v383);
                HIDWORD(v367) += v31;
                HIDWORD(v360) += v32;
                break;
              case DYNENT_RADIAL_PRIORITY_LEVEL_HIGH:
                LODWORD(v382) = v382 + 1;
                LODWORD(v366) = v31 + v366;
                LODWORD(v359) = v32 + v359;
                break;
              case DYNENT_PRIORITY_SPARSE_OCCLUDER:
                ++HIDWORD(v382);
                HIDWORD(v366) += v31;
                HIDWORD(v359) += v32;
                break;
            }
            if ( v30 )
            {
              flags = v30->flags;
              if ( (flags & 2) != 0 )
              {
                ++HIDWORD(v384);
                HIDWORD(v368) += v31;
                HIDWORD(v361) += v32;
              }
              if ( (flags & 4) != 0 )
              {
                LODWORD(v385) = v385 + 1;
                LODWORD(v369) = v31 + v369;
                LODWORD(v362) = v32 + v362;
              }
              if ( (flags & 4) != 0 )
              {
                if ( !v28->noPhysics )
                {
                  ++HIDWORD(v385);
                  HIDWORD(v369) += v31;
                  HIDWORD(v362) += v32;
                }
                if ( v28->noPhysics )
                {
                  LODWORD(v386) = v386 + 1;
                  LODWORD(v370) = v31 + v370;
                  LODWORD(v363) = v32 + v363;
                }
              }
              if ( (flags & 8) == 0 )
              {
                LODWORD(v384) = v384 + 1;
                LODWORD(v368) = v31 + v368;
                LODWORD(v361) = v32 + v361;
              }
              if ( (flags & 0x10) != 0 )
              {
                ++*(_DWORD *)&text[4];
                HIDWORD(v365) += v31;
                HIDWORD(v358) += v32;
              }
              if ( (flags & 0x1000) != 0 )
              {
                ++HIDWORD(v386);
                HIDWORD(v370) += v31;
                HIDWORD(v363) += v32;
              }
              if ( (flags & 0x40) != 0 )
              {
                LODWORD(v387) = v387 + 1;
                LODWORD(v371) = v31 + v371;
                LODWORD(v364) = v32 + v364;
              }
              if ( (flags & 0x80u) != 0 )
              {
                ++v19;
                HIDWORD(v371) += v31;
                HIDWORD(v364) += v32;
              }
            }
            type = (unsigned __int8)v28->type;
            ++LODWORD(axis.m[0].v[type]);
            transientIndexStored = v28->transientIndexStored;
            if ( transientIndexStored <= 0x600u )
              ++v378[transientIndexStored];
            *((_DWORD *)v375 + type) += v31;
            if ( transientIndexStored <= 0x600u )
              v380[transientIndexStored] += v31;
            LODWORD(orientation.v[type]) += v32;
            if ( transientIndexStored <= 0x600u )
              v379[transientIndexStored] += v32;
            ++v24;
            ++v25;
            v38 = (*(_QWORD *)outOrigin.v)-- == 1i64;
            dynEntListIds = *(DynEntityListId **)&result[0].m_serialAndIndex;
            if ( v38 )
            {
              HIDWORD(v387) = v19;
              v18 = i;
              goto LABEL_109;
            }
          }
          v30 = NULL;
LABEL_54:
          v31 = 0;
          goto LABEL_55;
        }
LABEL_110:
        v40 = v7;
        *(float *)&v40 = *(float *)&v7 + 12.0;
        v39 = v40;
        LODWORD(v336) = v18;
        v41 = 0;
        v4 = scrPlacea;
        v42 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v7 + 12.0, *(float *)&v16, &colorWhite, 0, 1, 8.0, 0, "Non-empty DynEntityLists", "%-5i", v336);
        v43 = v16;
        *(float *)&v43 = *(float *)&v16 + *(float *)&v42;
        v44 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v39, *(float *)&v16 + *(float *)&v42, &colorWhite, 0, 1, 8.0, 0, "Flags", (const char *)&queryFormat.fmt + 3);
        *(float *)&v43 = *(float *)&v43 + *(float *)&v44;
        v45 = v43;
        v47 = v39;
        *(float *)&v47 = *(float *)&v39 + 12.0;
        v46 = v47;
        v48 = DynEntDebugCatgoryNames;
        v49 = 0i64;
        v50 = 14i64;
        do
        {
          LODWORD(v341) = *(_DWORD *)((char *)&v358 + v49);
          LODWORD(v340) = *(_DWORD *)((char *)&v365 + v49);
          LODWORD(v336) = *(_DWORD *)&text[v49];
          v51 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v46, *(float *)&v45, &colorWhite, 0, 1, 8.0, 0, *v48, "%-5i (active:%i, hidden:%i)", v336, v340, v341);
          v52 = v45;
          *(float *)&v52 = *(float *)&v45 + *(float *)&v51;
          v45 = v52;
          v49 += 4i64;
          ++v48;
          --v50;
        }
        while ( v50 );
        v54 = v46;
        *(float *)&v54 = *(float *)&v46 + -12.0;
        v53 = v54;
        v55 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v54, *(float *)&v45, &colorWhite, 0, 1, 8.0, 0, "Types", (const char *)&queryFormat.fmt + 3);
        v56 = v45;
        *(float *)&v56 = *(float *)&v45 + *(float *)&v55;
        v10 = v56;
        v58 = v53;
        *(float *)&v58 = *(float *)&v53 + 12.0;
        v57 = v58;
        v59 = DynEntTypeNames;
        v60 = 0i64;
        v61 = 7i64;
        do
        {
          *(float *)&v341 = orientation.v[v60];
          LODWORD(v340) = *(_DWORD *)((char *)v375 + v60 * 4);
          *(float *)&v336 = axis.m[0].v[v60];
          v62 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v57, *(float *)&v10, &colorWhite, 0, 1, 8.0, 0, *v59, "%-5i (active:%i, hidden:%i)", v336, v340, v341);
          v63 = v10;
          *(float *)&v63 = *(float *)&v10 + *(float *)&v62;
          v10 = v63;
          ++v60;
          ++v59;
          --v61;
        }
        while ( v61 );
        v65 = v57;
        *(float *)&v65 = *(float *)&v57 + -12.0;
        v64 = v65;
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(shadow) = 2;
          LODWORD(forceColor) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v66 = g_dynEntSpatialSortClientData[localClientNum][0];
        if ( v66 && v66->population )
        {
          v67 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v65, *(float *)&v10, &colorWhite, 0, 1, 8.0, 0, "Spatial (common)", (const char *)&queryFormat.fmt + 3);
          v69 = v10;
          *(float *)&v69 = *(float *)&v10 + *(float *)&v67;
          v68 = v69;
          v71 = v64;
          *(float *)&v71 = *(float *)&v64 + 12.0;
          v70 = v71;
          LODWORD(v340) = v66->sortedPartitionCount;
          LODWORD(v336) = v66->population->partitionCount;
          v72 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v71, *(float *)&v68, &colorWhite, 0, 1, 8.0, 0, "Partitions", "%-5i (nearby:%i)", v336, v340);
          v73 = v68;
          *(float *)&v73 = *(float *)&v68 + *(float *)&v72;
          LODWORD(v337) = v66->numActivatedForPriority[0];
          v74 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v70, *(float *)&v68 + *(float *)&v72, &colorWhite, 0, 1, 8.0, 0, "Low Priority Added", "%i", v337);
          *(float *)&v73 = *(float *)&v73 + *(float *)&v74;
          LODWORD(v338) = v66->numActivatedForPriority[1];
          v75 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v70, *(float *)&v73, &colorWhite, 0, 1, 8.0, 0, "High Priority Added", "%i", v338);
          *(float *)&v73 = *(float *)&v73 + *(float *)&v75;
          v10 = v73;
          v76 = v70;
          *(float *)&v76 = *(float *)&v70 + -12.0;
          v64 = v76;
        }
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(shadow) = 2;
          LODWORD(forceColor) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v77 = qword_1490AC4B8[2 * localClientNum];
        if ( v77 && *(_QWORD *)(v77 + 88) )
        {
          v78 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v64, *(float *)&v10, &colorWhite, 0, 1, 8.0, 0, "Spatial (sparse occluders)", (const char *)&queryFormat.fmt + 3);
          v80 = v10;
          *(float *)&v80 = *(float *)&v10 + *(float *)&v78;
          v79 = v80;
          v82 = v64;
          *(float *)&v82 = *(float *)&v64 + 12.0;
          v81 = v82;
          LODWORD(v340) = *(_DWORD *)(v77 + 4);
          LODWORD(v336) = *(_DWORD *)(*(_QWORD *)(v77 + 88) + 40i64);
          v83 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v82, *(float *)&v79, &colorWhite, 0, 1, 8.0, 0, "Partitions", "%-5i (nearby:%i)", v336, v340);
          v84 = v79;
          *(float *)&v84 = *(float *)&v79 + *(float *)&v83;
          LODWORD(v339) = *(_DWORD *)(v77 + 64);
          v85 = DynEnt_DrawDebugLine(scrPlacea, *(float *)&v81, *(float *)&v79 + *(float *)&v83, &colorWhite, 0, 1, 8.0, 0, "Added", "%i", v339);
          *(float *)&v84 = *(float *)&v84 + *(float *)&v85;
          v10 = v84;
          v86 = v81;
          *(float *)&v86 = *(float *)&v81 + -12.0;
          v64 = v86;
        }
        Com_sprintf(dest, 0x200ui64, "Transient zones:               ");
        v87 = 1;
        v88 = 0i64;
        do
        {
          v89 = v378[v88 + 1];
          if ( v89 )
          {
            if ( v41 )
              I_strcat(dest, 0x200ui64, ", ");
            v41 = 1;
            IsZoneVisible = DynEntCl_IsZoneVisible(LOCAL_CLIENT_0, v87);
            v91 = "Unloaded";
            if ( IsZoneVisible )
              v91 = "Loaded";
            LODWORD(shadow) = v89;
            LODWORD(forceColor) = v379[v88 + 1];
            LODWORD(fmt) = v380[v88 + 1];
            Com_sprintf<256>((char (*)[256])v377, "%d %s (%d/%d/%d)", (unsigned int)v87, v91, fmt, forceColor, shadow);
            I_strcat_truncate(dest, 0x200ui64, v377);
          }
          ++v87;
          ++v88;
        }
        while ( v87 < 1536 );
        v12 = v343;
        if ( v41 )
        {
          DynEnt_DrawDebugString(scrPlacea, *(float *)&v64, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
          v92 = v10;
          *(float *)&v92 = *(float *)&v10 + 8.0;
          v10 = v92;
        }
        v93 = v64;
        *(float *)&v93 = *(float *)&v64 + -12.0;
        v7 = v93;
      }
      dynEntListIds = v349;
    }
    while ( v12 < 2 );
    v94 = DVARINT_dynEnt_debugWorld;
    if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v94);
    if ( v94->current.integer != 1 )
    {
      v95 = DVARINT_dynEnt_debugWorld;
      if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      if ( v95->current.integer != 3 )
      {
        v99 = 0;
        goto LABEL_190;
      }
    }
    v96 = v349;
    v97 = v349;
    v98 = dynEntityListsCount;
    v99 = 0;
    if ( dynEntityListsCount )
    {
      *(_QWORD *)origin.v = (unsigned __int16)dynEntityListsCount;
      do
      {
        v100 = *v97;
        if ( *v97 >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(shadow) = 1536;
          LODWORD(forceColor) = (unsigned __int16)v100;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v101 = DynEnt_GetDynEntityList(v100);
        if ( v101 )
          v102 = v101->dynEntCount[0];
        else
          v102 = 0;
        v103 = v102;
        if ( v102 > 0 )
        {
          v104 = 0i64;
          do
          {
            v105 = DynEnt_GetDynEntityList(*v97);
            if ( !v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            if ( v99 >= v105->dynEntCount[0] )
            {
              LODWORD(shadow) = v105->dynEntCount[0];
              LODWORD(forceColor) = v99;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v106 = &v105->dynEntDefList[0][v104];
            if ( !v106 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 503, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            v107 = v106->clientId[0];
            if ( v107 != 0xFFFF )
            {
              if ( v107 >= g_dynEntClientEntsAllocCount[0][0] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
                LODWORD(forceColor) = v107;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                __debugbreak();
              v108 = &g_dynEntClientLists[0][0][v107];
              if ( !v108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 509, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                __debugbreak();
              v109 = v106->clientId[0];
              if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                __debugbreak();
              if ( v109 >= g_dynEntClientEntsAllocCount[0][0] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
                LODWORD(forceColor) = v109;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v110 = &g_dynEntPoseLists[0][0][v109];
              if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 511, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                __debugbreak();
              if ( (v108->flags & 1) != 0 )
              {
                Com_sprintf(text, 0x40ui64, "Model %i %s", v108->dynEntDefId, typeNames[(unsigned __int8)v106->type]);
                CL_AddDebugString(&v110->pose.origin, &colorWhite, 1.0, text, 0, 1);
              }
            }
            ++v99;
            ++v104;
            --v103;
          }
          while ( v103 );
        }
        ++v97;
        v38 = (*(_QWORD *)origin.v)-- == 1i64;
        v99 = 0;
      }
      while ( !v38 );
LABEL_190:
      v96 = v349;
      v98 = dynEntityListsCount;
    }
    v111 = DVARINT_dynEnt_debugWorld;
    if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v111);
    if ( v111->current.integer == 2 )
      goto LABEL_199;
    v112 = DVARINT_dynEnt_debugWorld;
    if ( !DVARINT_dynEnt_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v112);
    if ( v112->current.integer == 3 )
    {
LABEL_199:
      v113 = v96;
      if ( v98 )
      {
        *(_QWORD *)origin.v = (unsigned __int16)v98;
        while ( 1 )
        {
          v114 = *v113;
          if ( *v113 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v114;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v115 = DynEnt_GetDynEntityList(v114);
          if ( v115 )
            v116 = v115->dynEntCount[1];
          else
            v116 = 0;
          v117 = v116;
          if ( v116 > 0 )
          {
            v118 = 0i64;
            do
            {
              v119 = DynEnt_GetDynEntityList(*v113);
              if ( !v119 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                __debugbreak();
              if ( v99 >= v119->dynEntCount[1] )
              {
                LODWORD(shadow) = v119->dynEntCount[1];
                LODWORD(forceColor) = v99;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v120 = &v119->dynEntDefList[1][v118];
              if ( !v120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 536, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              v121 = v120->clientId[0];
              if ( v121 != 0xFFFF )
              {
                Def = DynEnt_GetDef((DynEntityListId)0, v121, DYNENT_BASIS_BRUSH);
                if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( Def->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                v123 = Def->clientId[0];
                if ( v123 >= g_dynEntClientEntsAllocCount[0][1] )
                {
                  LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                  LODWORD(forceColor) = v123;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                    __debugbreak();
                }
                if ( !g_dynEntClientLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                  __debugbreak();
                v124 = &g_dynEntClientLists[0][1][v123];
                if ( !v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 542, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                  __debugbreak();
                v125 = DynEnt_GetDef((DynEntityListId)0, v120->clientId[0], DYNENT_BASIS_BRUSH);
                if ( !v125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( v125->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                v126 = v125->clientId[0];
                if ( !g_dynEntPoseLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                  __debugbreak();
                if ( v126 >= g_dynEntClientEntsAllocCount[0][1] )
                {
                  LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                  LODWORD(forceColor) = v126;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                    __debugbreak();
                }
                v127 = &g_dynEntPoseLists[0][1][v126];
                if ( !v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 544, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                  __debugbreak();
                if ( (v124->flags & 1) != 0 )
                {
                  Com_sprintf(text, 0x40ui64, "Brush %i %s", v124->dynEntDefId, typeNames[(unsigned __int8)v120->type]);
                  CL_AddDebugString(&v127->pose.origin, &colorWhite, 1.0, text, 0, 1);
                }
              }
              ++v99;
              ++v118;
              --v117;
            }
            while ( v117 );
          }
          ++v113;
          if ( !--*(_QWORD *)origin.v )
            break;
          v99 = 0;
        }
      }
    }
    v128 = DVARINT_dynEnt_debugModelId;
    if ( !DVARINT_dynEnt_debugModelId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugModelId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v128);
    v129 = "Inactive (may fail)";
    v130 = "Not Active";
    if ( v128->current.integer != -1 )
    {
      v131 = DVARINT_dynEnt_debugModelId;
      if ( !DVARINT_dynEnt_debugModelId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugModelId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v131);
      unsignedInt = v131->current.unsignedInt;
      v133 = unsignedInt & 0x7FFFF;
      v134 = DynEnt_GetDynEntityList((DynEntityListId)(unsignedInt >> 19));
      if ( v134 )
      {
        if ( (unsigned int)v133 < v134->dynEntCount[0] )
        {
          v135 = (__int64)&v134->dynEntDefList[0][v133];
          if ( v135 )
          {
            v136 = *(_WORD *)(v135 + 56);
            if ( v136 != 0xFFFF )
            {
              if ( v136 >= g_dynEntClientEntsAllocCount[0][0] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
                LODWORD(forceColor) = v136;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                __debugbreak();
              v137 = &g_dynEntClientLists[0][0][v136];
              if ( !v137 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 569, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                __debugbreak();
              v138 = *(_WORD *)(v135 + 56);
              if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                __debugbreak();
              if ( v138 >= g_dynEntClientEntsAllocCount[0][0] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][0];
                LODWORD(forceColor) = v138;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v139 = &g_dynEntPoseLists[0][0][v138];
              if ( !v139 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 571, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                __debugbreak();
              if ( (v137->flags & 1) != 0 )
              {
                Com_sprintf(dest, 0x200ui64, "Model %i", unsignedInt);
                DynEnt_DrawDebugString(scrPlacea, *(float *)&v7, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
                v141 = v10;
                v140 = *(float *)&v7 + 12.0;
                Com_sprintf(dest, 0x200ui64, "Type: %s", typeNames[*(unsigned __int8 *)(v135 + 50)]);
                DynEnt_DrawDebugString(scrPlacea, *(float *)&v7 + 12.0, *(float *)&v10 + 8.0, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v141 = (float)(*(float *)&v10 + 8.0) + 8.0;
                v142 = "Inactive (may fail)";
                if ( *(_BYTE *)(v135 + 73) )
                  v142 = "Active";
                Com_sprintf(dest, 0x200ui64, "Spawns %s", v142);
                DynEnt_DrawDebugString(scrPlacea, v140, *(float *)&v141, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v141 = *(float *)&v141 + 8.0;
                Com_sprintf(dest, 0x200ui64, "Flags:");
                DynEnt_DrawDebugString(scrPlacea, v140, *(float *)&v141, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v141 = *(float *)&v141 + 8.0;
                v143 = v141;
                v145 = v140 + 12.0;
                v144 = v140 + 12.0;
                v146 = "Not Active";
                if ( (v137->flags & 1) != 0 )
                  v146 = "Active";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v146);
                DynEnt_DrawDebugString(scrPlacea, v145, *(float *)&v143, dest, &colorWhite, 0, 1, 8.0, 0);
                v147 = v143;
                *(float *)&v147 = *(float *)&v143 + 8.0;
                v148 = "Physics Not Setup";
                if ( (v137->flags & 2) != 0 )
                  v148 = "Physics Setup";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v148);
                DynEnt_DrawDebugString(scrPlacea, v144, *(float *)&v147, dest, &colorWhite, 0, 1, 8.0, 0);
                v149 = *(float *)&v147 + 8.0;
                v150 = "Not Linked To Entity";
                if ( (v137->flags & 4) != 0 )
                  v150 = "Linked To Entity";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v150);
                DynEnt_DrawDebugString(scrPlacea, v144, v149, dest, &colorWhite, 0, 1, 8.0, 0);
                v151 = v149 + 8.0;
                v152 = "Shadow Allowed";
                if ( (v137->flags & 8) != 0 )
                  v152 = "No Shadow";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v152);
                DynEnt_DrawDebugString(scrPlacea, v144, v151, dest, &colorWhite, 0, 1, 8.0, 0);
                v153 = v151 + 8.0;
                v154 = "Not Transient";
                if ( (v137->flags & 0x10) != 0 )
                  v154 = "Transient";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v154);
                DynEnt_DrawDebugString(scrPlacea, v144, v153, dest, &colorWhite, 0, 1, 8.0, 0);
                v155 = v153 + 8.0;
                v156 = "Didn't visibly change This frame";
                if ( (v137->flags & 0x40) != 0 )
                  v156 = "Visibly changed This Frame";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v156);
                DynEnt_DrawDebugString(scrPlacea, v144, v155, dest, &colorWhite, 0, 1, 8.0, 0);
                v157 = v155 + 8.0;
                v158 = "Didn't visibly change Last frame";
                if ( SLOBYTE(v137->flags) < 0 )
                  v158 = "Visibly changed Last Frame";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v158);
                DynEnt_DrawDebugString(scrPlacea, v144, v157, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v147 = v157 + 8.0;
                v159 = "Collision Allowed";
                if ( (v137->flags & 0x1000) != 0 )
                  v159 = "Collision Disabled";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v159);
                DynEnt_DrawDebugString(scrPlacea, v144, *(float *)&v147, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v147 = *(float *)&v147 + 8.0;
                v160 = v147;
                v162 = v144 + -12.0;
                v161 = v144 + -12.0;
                if ( v137->activeModel )
                  name = v137->activeModel->name;
                else
                  name = "Unassigned";
                Com_sprintf(dest, 0x200ui64, "Model %s", name);
                DynEnt_DrawDebugString(scrPlacea, v162, *(float *)&v160, dest, &colorWhite, 0, 1, 8.0, 0);
                v165 = v160;
                *(float *)&v165 = *(float *)&v160 + 8.0;
                v164 = v165;
                if ( (unsigned __int8)(*(_BYTE *)(v135 + 50) - 3) <= 1u )
                {
                  Com_sprintf(dest, 0x200ui64, "Scriptable Map Index %i", *(unsigned int *)(v135 + 60));
                  DynEnt_DrawDebugString(scrPlacea, v161, *(float *)&v165, dest, &colorWhite, 0, 1, 8.0, 0);
                  *(float *)&v165 = *(float *)&v165 + 8.0;
                  v164 = v165;
                }
                Com_sprintf(dest, 0x200ui64, "Physics System Id %i", v137->physicsSystemId);
                DynEnt_DrawDebugString(scrPlacea, v161, *(float *)&v164, dest, &colorWhite, 0, 1, 8.0, 0);
                v166 = v164;
                Com_sprintf(dest, 0x200ui64, "Physics System Detail Id %i", v137->physicsSystemDetailId);
                DynEnt_DrawDebugString(scrPlacea, v161, *(float *)&v164 + 8.0, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v166 = (float)(*(float *)&v164 + 8.0) + 8.0;
                v10 = v166;
                *(float *)&v7 = v161 + -12.0;
                QuatToAxis(&v139->pose.quat, &axis);
                CG_DebugAxis(&axis, &v139->pose.origin, 12.0, 0, 1);
                origin.v[0] = 0.0;
                origin.v[1] = 0.0;
                origin.v[2] = 0.0;
                CG_DebugBox(&origin, &v139->bounds, 0.0, &colorWhite, 0, 1);
                if ( (v137->flags & 4) != 0 )
                {
                  AnchorEntity = DynEnt_GetAnchorEntity(LOCAL_CLIENT_0, **(_DWORD **)(v135 + 8));
                  if ( AnchorEntity )
                  {
                    if ( (AnchorEntity->flags & 1) != 0 )
                    {
                      CG_GetPoseOrigin(&AnchorEntity->pose, &outOrigin);
                      CG_DebugLine(&v139->pose.origin, &outOrigin, &colorWhite, 0, 1);
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
    v168 = DVARINT_dynEnt_debugBrushId;
    if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v168);
    if ( v168->current.integer != -1 )
    {
      v169 = DVARINT_dynEnt_debugBrushId;
      if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v169);
      v170 = v169->current.unsignedInt;
      v171 = v170 & 0x7FFFF;
      v172 = DynEnt_GetDynEntityList((DynEntityListId)(v170 >> 19));
      if ( v172 )
      {
        if ( (unsigned int)v171 < v172->dynEntCount[1] )
        {
          v173 = (__int64)&v172->dynEntDefList[1][v171];
          if ( v173 )
          {
            v174 = *(_WORD *)(v173 + 56);
            if ( v174 != 0xFFFF )
            {
              if ( v174 >= g_dynEntClientEntsAllocCount[0][1] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                LODWORD(forceColor) = v174;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( !g_dynEntClientLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                __debugbreak();
              v175 = &g_dynEntClientLists[0][1][v174];
              if ( !v175 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 670, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                __debugbreak();
              v176 = *(_WORD *)(v173 + 56);
              if ( !g_dynEntPoseLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                __debugbreak();
              if ( v176 >= g_dynEntClientEntsAllocCount[0][1] )
              {
                LODWORD(shadow) = g_dynEntClientEntsAllocCount[0][1];
                LODWORD(forceColor) = v176;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v177 = &g_dynEntPoseLists[0][1][v176];
              if ( !v177 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 672, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                __debugbreak();
              if ( (v175->flags & 1) != 0 )
              {
                BrushModel = CM_GetBrushModel(*(unsigned __int16 *)(v173 + 66));
                v179 = DVARINT_dynEnt_debugBrushId;
                if ( !DVARINT_dynEnt_debugBrushId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugBrushId") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v179);
                Com_sprintf(dest, 0x200ui64, "Brush %i", v179->current.unsignedInt);
                DynEnt_DrawDebugString(scrPlacea, *(float *)&v7, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
                v181 = v10;
                v180 = *(float *)&v7 + 12.0;
                Com_sprintf(dest, 0x200ui64, "Type: %s", typeNames[*(unsigned __int8 *)(v173 + 50)]);
                DynEnt_DrawDebugString(scrPlacea, *(float *)&v7 + 12.0, *(float *)&v10 + 8.0, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v181 = (float)(*(float *)&v10 + 8.0) + 8.0;
                if ( *(_BYTE *)(v173 + 73) )
                  v129 = "Active";
                Com_sprintf(dest, 0x200ui64, "Spawns %s", v129);
                DynEnt_DrawDebugString(scrPlacea, v180, *(float *)&v181, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v181 = *(float *)&v181 + 8.0;
                Com_sprintf(dest, 0x200ui64, "Flags:");
                DynEnt_DrawDebugString(scrPlacea, v180, *(float *)&v181, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v181 = *(float *)&v181 + 8.0;
                v182 = v181;
                v184 = v180 + 12.0;
                v183 = v180 + 12.0;
                if ( (v175->flags & 1) != 0 )
                  v130 = "Active";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v130);
                DynEnt_DrawDebugString(scrPlacea, v184, *(float *)&v182, dest, &colorWhite, 0, 1, 8.0, 0);
                v185 = v182;
                *(float *)&v185 = *(float *)&v182 + 8.0;
                v186 = "Physics Not Setup";
                if ( (v175->flags & 2) != 0 )
                  v186 = "Physics Setup";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v186);
                DynEnt_DrawDebugString(scrPlacea, v183, *(float *)&v185, dest, &colorWhite, 0, 1, 8.0, 0);
                v187 = *(float *)&v185 + 8.0;
                v188 = "Not Linked To Entity";
                if ( (v175->flags & 4) != 0 )
                  v188 = "Linked To Entity";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v188);
                DynEnt_DrawDebugString(scrPlacea, v183, v187, dest, &colorWhite, 0, 1, 8.0, 0);
                v189 = v187 + 8.0;
                v190 = "Shadow Allowed";
                if ( (v175->flags & 8) != 0 )
                  v190 = "No Shadow";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v190);
                DynEnt_DrawDebugString(scrPlacea, v183, v189, dest, &colorWhite, 0, 1, 8.0, 0);
                v191 = v189 + 8.0;
                v192 = "Not Transient";
                if ( (v175->flags & 0x10) != 0 )
                  v192 = "Transient";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v192);
                DynEnt_DrawDebugString(scrPlacea, v183, v191, dest, &colorWhite, 0, 1, 8.0, 0);
                v193 = v191 + 8.0;
                v194 = "Didn't visibly change This frame";
                if ( (v175->flags & 0x40) != 0 )
                  v194 = "Visibly changed This Frame";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v194);
                DynEnt_DrawDebugString(scrPlacea, v183, v193, dest, &colorWhite, 0, 1, 8.0, 0);
                v195 = v193 + 8.0;
                v196 = "Didn't visibly change Last frame";
                if ( SLOBYTE(v175->flags) < 0 )
                  v196 = "Visibly changed Last Frame";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v196);
                DynEnt_DrawDebugString(scrPlacea, v183, v195, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v185 = v195 + 8.0;
                v197 = "Collision Allowed";
                if ( (v175->flags & 0x1000) != 0 )
                  v197 = "Collision Disabled";
                Com_sprintf(dest, 0x200ui64, (const char *)&queryFormat, v197);
                DynEnt_DrawDebugString(scrPlacea, v183, *(float *)&v185, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v185 = *(float *)&v185 + 8.0;
                v198 = v183 + -12.0;
                Com_sprintf(dest, 0x200ui64, "Brush %i", *(unsigned __int16 *)(v173 + 66));
                DynEnt_DrawDebugString(scrPlacea, v198, *(float *)&v185, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v185 = *(float *)&v185 + 8.0;
                v199 = v185;
                if ( (unsigned __int8)(*(_BYTE *)(v173 + 50) - 3) <= 1u )
                {
                  Com_sprintf(dest, 0x200ui64, "Scriptable Map Index %i", *(unsigned int *)(v173 + 60));
                  DynEnt_DrawDebugString(scrPlacea, v198, *(float *)&v185, dest, &colorWhite, 0, 1, 8.0, 0);
                  *(float *)&v185 = *(float *)&v185 + 8.0;
                  v199 = v185;
                }
                LODWORD(fmta) = BrushModel->physicsShapeOverrideIdx;
                Com_sprintf(dest, 0x200ui64, "Physics %s with shape override %i", BrushModel->physicsAsset->name, fmta);
                DynEnt_DrawDebugString(scrPlacea, v198, *(float *)&v199, dest, &colorWhite, 0, 1, 8.0, 0);
                v200 = v199;
                Com_sprintf(dest, 0x200ui64, "Physics System Id %i", v175->physicsSystemId);
                DynEnt_DrawDebugString(scrPlacea, v198, *(float *)&v199 + 8.0, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v200 = (float)(*(float *)&v199 + 8.0) + 8.0;
                Com_sprintf(dest, 0x200ui64, "Physics System Detail Id %i", v175->physicsSystemDetailId);
                DynEnt_DrawDebugString(scrPlacea, v198, *(float *)&v200, dest, &colorWhite, 0, 1, 8.0, 0);
                *(float *)&v200 = *(float *)&v200 + 8.0;
                v10 = v200;
                *(float *)&v7 = v198 + -12.0;
                QuatToAxis(&v177->pose.quat, &axis);
                CG_DebugAxis(&axis, &v177->pose.origin, 12.0, 0, 1);
                origin.v[0] = 0.0;
                origin.v[1] = 0.0;
                origin.v[2] = 0.0;
                CG_DebugBox(&origin, &v177->bounds, 0.0, &colorWhite, 0, 1);
                if ( (v175->flags & 4) != 0 )
                {
                  v201 = DynEnt_GetAnchorEntity(LOCAL_CLIENT_0, **(_DWORD **)(v173 + 8));
                  if ( v201 )
                  {
                    if ( (v201->flags & 1) != 0 )
                    {
                      CG_GetPoseOrigin(&v201->pose, &outOrigin);
                      CG_DebugLine(&v177->pose.origin, &outOrigin, &colorWhite, 0, 1);
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
    v202 = DVARBOOL_dynEnt_debugTransients;
    if ( !DVARBOOL_dynEnt_debugTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugTransients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v202);
    if ( v202->current.enabled )
    {
      memset_0(v377, 0, 0x1800ui64);
      v203 = 0;
      v204 = 0;
      v205 = dynEntityListsCount;
      v206 = v349;
      do
      {
        v207 = v206;
        if ( v205 )
        {
          *(_QWORD *)origin.v = (unsigned __int16)v205;
          do
          {
            v208 = *v207;
            if ( *v207 >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadow) = 1536;
              LODWORD(forceColor) = (unsigned __int16)v208;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v209 = DynEnt_GetDynEntityList(v208);
            if ( v209 )
            {
              v345 = v209->dynEntCount[v204];
              v210 = 0;
              if ( v345 )
              {
                v211 = 0i64;
                do
                {
                  v212 = DynEnt_GetDynEntityList(*v207);
                  if ( !v212 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                    __debugbreak();
                  if ( v210 >= v212->dynEntCount[v204] )
                  {
                    LODWORD(shadow) = v212->dynEntCount[v204];
                    LODWORD(forceColor) = v210;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                      __debugbreak();
                  }
                  v213 = v212->dynEntDefList[v204];
                  if ( (unsigned __int8)(v213[v211].type - 3) > 1u )
                  {
                    v214 = v213[v211].transientIndexStored;
                    if ( v214 )
                    {
                      if ( v214 >= 0x600u )
                      {
                        LODWORD(shadow) = 1536;
                        LODWORD(forceColor) = v214;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 801, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->transientIndexStored ) < (unsigned)( ( sizeof( *array_counter( numDynentsPerTransient ) ) + 0 ) )", "dynEntDef->transientIndexStored doesn't index ARRAY_COUNT( numDynentsPerTransient )\n\t%i not in [0, %i)", forceColor, shadow) )
                          __debugbreak();
                      }
                      ++*(_DWORD *)&v377[4 * v213[v211].transientIndexStored];
                    }
                    else
                    {
                      ++v203;
                    }
                  }
                  ++v210;
                  ++v211;
                }
                while ( v210 < v345 );
              }
            }
            ++v207;
            --*(_QWORD *)origin.v;
          }
          while ( *(_QWORD *)origin.v );
          v205 = dynEntityListsCount;
          v206 = v349;
        }
        ++v204;
      }
      while ( v204 < 2u );
      Com_sprintf(dest, 0x200ui64, "Dynent Transient Counts");
      DynEnt_DrawDebugString(scrPlacea, *(float *)&v7, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
      v215 = v10;
      v216 = *(float *)&v7 + 12.0;
      Com_sprintf(dest, 0x200ui64, "Non Transient: %i", v203);
      DynEnt_DrawDebugString(scrPlacea, *(float *)&v7 + 12.0, *(float *)&v10 + 8.0, dest, &colorWhite, 0, 1, 8.0, 0);
      *(float *)&v215 = (float)(*(float *)&v10 + 8.0) + 8.0;
      v10 = v215;
      v217 = 0;
      v218 = v377;
      do
      {
        v219 = *(_DWORD *)v218;
        if ( *(_DWORD *)v218 )
        {
          SPTransientName = DB_Transients_GetSPTransientName(v217);
          LODWORD(fmtb) = v219;
          Com_sprintf(dest, 0x200ui64, "Transient %s: %i", SPTransientName, fmtb);
          IsGameSystemTransientLoaded = CL_TransientsSP_IsGameSystemTransientLoaded(v217);
          v222 = &colorRed;
          if ( IsGameSystemTransientLoaded )
            v222 = &colorWhite;
          DynEnt_DrawDebugString(scrPlacea, v216, *(float *)&v10, dest, v222, 0, 1, 8.0, 0);
          v223 = v10;
          *(float *)&v223 = *(float *)&v10 + 8.0;
          v10 = v223;
        }
        ++v217;
        v218 += 4;
      }
      while ( v217 < 0x600 );
      *(float *)&v7 = v216 + -12.0;
    }
    v224 = DVARINT_dynEnt_debugDisplayOffsetY;
    if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v224);
    integer = v224->current.integer - (int)*(float *)&v10 + 200;
    v226 = 0;
    if ( integer > 0 )
      integer = 0;
    v227 = DVARINT_dynEnt_debugDisplayOffsetY;
    if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v227);
    if ( v227->current.integer > integer )
      integer = v227->current.integer;
    v228 = DVARINT_dynEnt_debugDisplayOffsetY;
    if ( !DVARINT_dynEnt_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v228);
    if ( v228->current.integer != integer )
      Dvar_SetInt_Internal(DVARINT_dynEnt_debugDisplayOffsetY, integer);
    v229 = DVARBOOL_dynEnt_debugDynentShapes;
    if ( !DVARBOOL_dynEnt_debugDynentShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDynentShapes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v229);
    v230 = v349;
    v38 = !v229->current.enabled;
    v231 = dynEntityListsCount;
    if ( !v38 )
    {
      v232 = v349;
      *(_QWORD *)origin.v = v349;
      if ( dynEntityListsCount )
      {
        *(_QWORD *)outOrigin.v = (unsigned __int16)dynEntityListsCount;
        do
        {
          v233 = *v232;
          if ( *v232 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v233;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v234 = DynEnt_GetDynEntityList(v233);
          if ( v234 )
          {
            v346 = v234->dynEntCount[0];
            v235 = 0;
            for ( i = 0; (int)v235 < v346; i = v235 )
            {
              v236 = *v232;
              if ( *v232 >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(shadow) = 1536;
                LODWORD(forceColor) = (unsigned __int16)v236;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              if ( v235 >= 0x7FFFF )
              {
                LODWORD(shadow) = 0x7FFFF;
                LODWORD(forceColor) = v235;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v237 = DynEnt_GetDef((DynEntityListId)((v235 | ((unsigned __int16)v236 << 19)) >> 19), v235 & 0x7FFFF, DYNENT_BASIS_MODEL);
              if ( !v237 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              v238 = v237->clientId[0];
              if ( v238 != 0xFFFF )
              {
                ClientFromClientId = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v238, DYNENT_BASIS_MODEL);
                v240 = ClientFromClientId;
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
                          v243 = v240->physicsSystemId;
                          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                            __debugbreak();
                          if ( v243 == -1 )
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
                          m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v243, v226)->m_serialAndIndex;
                          v245 = m_serialAndIndex & 0xFFFFFF;
                          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 863, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                            __debugbreak();
                          Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, m_serialAndIndex, (vec3_t *)position, &orientation);
                          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 243, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Num Shapes when system is not initialized", "g_physicsInitialized") )
                            __debugbreak();
                          if ( v245 == 0xFFFFFF )
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
                          if ( v245 == 0xFFFFFF )
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
                          v247 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
                          NumShapes = HavokPhysics_GetNumShapes(*(const hknpShape **)(v247 + 96));
                          v249 = j_va("%i", NumShapes);
                          CG_DebugString((const vec3_t *)position, &colorWhite, 0.30000001, v249, 0, 1);
                          ++v226;
                        }
                        while ( v226 < BodyCount );
                        v235 = i;
                        v232 = *(DynEntityListId **)origin.v;
                      }
                      v226 = 0;
                    }
                  }
                }
              }
              ++v235;
            }
          }
          *(_QWORD *)origin.v = ++v232;
          --*(_QWORD *)outOrigin.v;
        }
        while ( *(_QWORD *)outOrigin.v );
        v231 = dynEntityListsCount;
        v230 = v349;
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugDynentBodyBoneCounts, "dynEnt_debugDynentBodyBoneCounts") )
    {
      Com_sprintf(dest, 0x200ui64, "Dynents with >1 bone or body");
      DynEnt_DrawDebugString(scrPlacea, *(float *)&v7, *(float *)&v10, dest, &colorWhite, 0, 1, 8.0, 0);
      v251 = v10;
      *(float *)&v251 = *(float *)&v10 + 8.0;
      v250 = v251;
      v252 = *(float *)&v7 + 12.0;
      v253 = v230;
      if ( v231 )
      {
        *(_QWORD *)origin.v = (unsigned __int16)v231;
        do
        {
          v254 = *v253;
          if ( *v253 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(shadow) = 1536;
            LODWORD(forceColor) = (unsigned __int16)v254;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          v255 = DynEnt_GetDynEntityList(v254);
          if ( v255 )
          {
            v347 = v255->dynEntCount[0];
            for ( j = 0; (int)j < v347; ++j )
            {
              v257 = *v253;
              if ( *v253 >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(shadow) = 1536;
                LODWORD(forceColor) = (unsigned __int16)v257;
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
              v258 = j | ((unsigned __int16)v257 << 19);
              v259 = v258 & 0x7FFFF;
              v260 = v258 >> 19;
              v261 = DynEnt_GetDef((DynEntityListId)v260, v259, DYNENT_BASIS_MODEL);
              if ( !v261 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                __debugbreak();
              v262 = v261->clientId[0];
              if ( v262 != 0xFFFF )
              {
                v263 = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v262, DYNENT_BASIS_MODEL);
                v264 = (const char ***)v263;
                if ( v263 )
                {
                  if ( v263->activeModel && v263->physicsSystemId != -1 )
                  {
                    v265 = DynEnt_GetDef((DynEntityListId)v260, v259, DYNENT_BASIS_MODEL);
                    if ( !v265 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                      __debugbreak();
                    if ( v265->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                      __debugbreak();
                    PoseFromClientId = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v265->clientId[0], DYNENT_BASIS_MODEL);
                    if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 907, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                      __debugbreak();
                    v267 = *((_DWORD *)v264 + 3);
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( v267 == -1 )
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
                    if ( v267 == -1 )
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
                    v268 = HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[3].instanceManager, v267);
                    v269 = v268;
                    numParts = *((_BYTE *)*v264 + 20);
                    if ( numParts > PoseFromClientId->numParts )
                      numParts = PoseFromClientId->numParts;
                    v271 = numParts;
                    if ( v268 > 1 || numParts > 1u )
                    {
                      LODWORD(forceColor) = numParts;
                      LODWORD(fmtc) = v268;
                      Com_sprintf(dest, 0x200ui64, "Dynent using model %s has %i bodies and %i bones", **v264, fmtc, forceColor);
                      v272 = &colorWhite;
                      if ( v271 > v269 )
                        v272 = &colorRed;
                      DynEnt_DrawDebugString(scrPlacea, v252, *(float *)&v250, dest, v272, 0, 1, 8.0, 0);
                      v273 = v250;
                      *(float *)&v273 = *(float *)&v250 + 8.0;
                      v250 = v273;
                      outOrigin = PoseFromClientId->pose.origin;
                      v274 = *v264;
                      outOrigin.v[2] = (float)((float)(2.0 * *((float *)*v264 + 10)) + outOrigin.v[2]) + 4.0;
                      v275 = j_va("%s:%i:%i", *v274, v269, v271);
                      CG_DebugString(&outOrigin, v272, 0.30000001, v275, 0, 1);
                    }
                  }
                }
              }
            }
          }
          ++v253;
          --*(_QWORD *)origin.v;
        }
        while ( *(_QWORD *)origin.v );
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugMaxCollisionCacheCount, "dynEnt_debugMaxCollisionCacheCount") )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_dynEnt_debugMaxCollisionCacheCountThreshold, "dynEnt_debugMaxCollisionCacheCountThreshold");
      v276 = DYNENT_BASIS_MODEL;
      v277 = dynEntityListsCount;
      v278 = v349;
      do
      {
        v279 = v278;
        if ( v277 )
        {
          *(_QWORD *)origin.v = (unsigned __int16)v277;
          do
          {
            v280 = *v279;
            if ( *v279 >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadow) = 1536;
              LODWORD(forceColor) = (unsigned __int16)v280;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v281 = DynEnt_GetDynEntityList(v280);
            if ( v281 )
            {
              v282 = v281->dynEntCount[(unsigned __int8)v276];
              for ( k = 0; k < v282; ++k )
              {
                v284 = *v279;
                if ( *v279 >= DEFAULT_DYNENTITY_LIST_ID )
                {
                  LODWORD(shadow) = 1536;
                  LODWORD(forceColor) = (unsigned __int16)v284;
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
                v285 = k | ((unsigned __int16)v284 << 19);
                v286 = v285 & 0x7FFFF;
                v287 = v285 >> 19;
                v288 = DynEnt_GetDef((DynEntityListId)v287, v286, v276);
                if ( !v288 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                v289 = v288->clientId[0];
                if ( v289 != 0xFFFF )
                {
                  v290 = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v289, v276);
                  if ( v290 )
                  {
                    if ( v290->spawnCollisionCacheCount >= Int_Internal_DebugName )
                    {
                      v291 = DynEnt_GetDef((DynEntityListId)v287, v286, v276);
                      if ( !v291 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                        __debugbreak();
                      if ( v291->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                        __debugbreak();
                      v292 = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v291->clientId[0], v276);
                      if ( !v292 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 960, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                        __debugbreak();
                      outOrigin = v292->pose.origin;
                      if ( v290->activeModel )
                        v293 = j_va("%s:%i", v290->activeModel->name, (unsigned int)v290->spawnCollisionCacheCount);
                      else
                        v293 = j_va("%i", (unsigned int)v290->spawnCollisionCacheCount);
                      CG_DebugString(&outOrigin, &colorWhite, 0.30000001, v293, 0, 1);
                    }
                  }
                }
              }
            }
            ++v279;
            --*(_QWORD *)origin.v;
          }
          while ( *(_QWORD *)origin.v );
          v277 = dynEntityListsCount;
          v278 = v349;
        }
        ++v276;
      }
      while ( (unsigned __int8)v276 < DYNENT_BASIS_COUNT );
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dynEnt_debugSpawnDepth, "dynEnt_debugSpawnDepth") )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_dynEnt_debugSpawnDepthThreshold, "dynEnt_debugSpawnDepthThreshold");
      v295 = *(float *)&Float_Internal_DebugName;
      v296 = DYNENT_BASIS_MODEL;
      v297 = dynEntityListsCount;
      v298 = v349;
      do
      {
        v299 = v298;
        if ( v297 )
        {
          *(_QWORD *)origin.v = (unsigned __int16)v297;
          do
          {
            v300 = *v299;
            if ( *v299 >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(shadow) = 1536;
              LODWORD(forceColor) = (unsigned __int16)v300;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v301 = DynEnt_GetDynEntityList(v300);
            if ( v301 )
            {
              v302 = v301->dynEntCount[(unsigned __int8)v296];
              v303 = 0;
              if ( v302 )
              {
                while ( 1 )
                {
                  v304 = *v299;
                  if ( *v299 >= DEFAULT_DYNENTITY_LIST_ID )
                  {
                    LODWORD(shadow) = 1536;
                    LODWORD(forceColor) = (unsigned __int16)v304;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", forceColor, shadow) )
                      __debugbreak();
                  }
                  if ( v303 >= 0x7FFFF )
                  {
                    LODWORD(shadow) = 0x7FFFF;
                    LODWORD(forceColor) = v303;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", forceColor, shadow) )
                      __debugbreak();
                  }
                  v305 = v303 | ((unsigned __int16)v304 << 19);
                  v306 = v305 & 0x7FFFF;
                  v307 = v305 >> 19;
                  v308 = DynEnt_GetDef((DynEntityListId)v307, v306, v296);
                  if ( !v308 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                    __debugbreak();
                  v309 = v308->clientId[0];
                  if ( v309 == 0xFFFF )
                    goto LABEL_619;
                  v310 = DynEnt_GetClientFromClientId(LOCAL_CLIENT_0, v309, v296);
                  v311 = v310;
                  if ( !v310 )
                    goto LABEL_619;
                  spawnPenetrationDepth = v310->spawnPenetrationDepth;
                  if ( spawnPenetrationDepth < v295 && spawnPenetrationDepth >= 0.0 )
                    goto LABEL_619;
                  v313 = DynEnt_GetDef((DynEntityListId)v307, v306, v296);
                  if ( !v313 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                    __debugbreak();
                  if ( v313->clientId[0] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                    __debugbreak();
                  v314 = DynEnt_GetPoseFromClientId(LOCAL_CLIENT_0, v313->clientId[0], v296);
                  if ( !v314 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_debug.cpp", 1010, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                    __debugbreak();
                  outOrigin = v314->pose.origin;
                  v315 = v311->spawnPenetrationDepth;
                  if ( !v311->activeModel )
                    break;
                  v316 = v311->activeModel->name;
                  if ( v315 < 0.0 )
                  {
                    v317 = j_va("%s is a mesh", v316);
                    goto LABEL_616;
                  }
                  v318 = j_va("%s:%.2f", v316, v315);
                  CG_DebugString(&outOrigin, &colorWhite, 0.30000001, v318, 0, 1);
LABEL_619:
                  if ( ++v303 >= v302 )
                    goto LABEL_620;
                }
                if ( v315 >= 0.0 )
                {
                  v317 = j_va("%.2f", v315);
                  v319 = &colorWhite;
                }
                else
                {
                  v317 = "mesh";
LABEL_616:
                  v319 = &colorRed;
                }
                CG_DebugString(&outOrigin, v319, 0.30000001, v317, 0, 1);
                goto LABEL_619;
              }
            }
LABEL_620:
            ++v299;
            --*(_QWORD *)origin.v;
          }
          while ( *(_QWORD *)origin.v );
          v297 = dynEntityListsCount;
          v298 = v349;
        }
        ++v296;
      }
      while ( (unsigned __int8)v296 < DYNENT_BASIS_COUNT );
    }
    for ( m = DYNENT_SPATIAL_POPULATION_DENSE_TYPE; (unsigned __int8)m < DYNENT_SPATIAL_POPULATION_TYPE_COUNT; ++m )
    {
      v321 = DVARINT_dynEnt_debugSpatialPopulation;
      if ( !DVARINT_dynEnt_debugSpatialPopulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSpatialPopulation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v321);
      if ( v321->current.integer == (unsigned __int8)m + 1 )
        goto LABEL_632;
      v322 = DVARINT_dynEnt_debugSpatialPopulation;
      if ( !DVARINT_dynEnt_debugSpatialPopulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugSpatialPopulation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v322);
      if ( v322->current.integer == 3 )
      {
LABEL_632:
        v323 = DVARBOOL_dynEnt_debugDrawSpatialWorld;
        if ( !DVARBOOL_dynEnt_debugDrawSpatialWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialWorld") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v323);
        if ( v323->current.enabled )
          DynEntCL_Spatial_DebugDrawWorld(m);
        v324 = DVARINT_dynEnt_debugDrawSpatialOverlay;
        if ( !DVARINT_dynEnt_debugDrawSpatialOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlay") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v324);
        if ( v324->current.integer )
        {
          v325 = DVARINT_dynEnt_debugDrawSpatialOverlay;
          if ( !DVARINT_dynEnt_debugDrawSpatialOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlay") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v325);
          if ( v325->current.integer == 2 )
          {
            value = 0.0;
          }
          else
          {
            v327 = DVARFLT_dynEnt_debugDrawSpatialOverlayZoom;
            if ( !DVARFLT_dynEnt_debugDrawSpatialOverlayZoom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDrawSpatialOverlayZoom") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v327);
            value = v327->current.value;
          }
          DynEntCL_Spatial_DebugDrawOverlay(m, value);
        }
      }
    }
    Dvar_SetBool_Internal(DVARBOOL_dynEnt_debugDump, 0);
  }
}

/*
==============
DynEnt_DrawDebugLine
==============
*/
float DynEnt_DrawDebugLine(const ScreenPlacement *scrPlace, float x, float y, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust, const char *name, const char *valuefmt, ...)
{
  const ScreenPlacement *v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  char *ap; 
  char dest[512]; 
  char v18[512]; 
  va_list va; 

  va_start(va, valuefmt);
  v11 = scrPlace;
  if ( *valuefmt )
  {
    Com_vsprintf_truncate(dest, 0x200ui64, 0x200ui64, valuefmt, va);
    v12 = -1i64;
    do
      ++v12;
    while ( name[v12] );
    v13 = 30 - v12;
    if ( 30 - (int)v12 < 1 )
      v13 = 1;
    LODWORD(ap) = v13;
    Com_sprintf_truncate(v18, 0x200ui64, "%s:%*c %s", name, ap, 32, dest);
    v14 = v18;
    scrPlace = v11;
  }
  else
  {
    v14 = name;
  }
  DynEnt_DrawDebugString(scrPlace, x, y, v14, setColor, forceColor, shadow, charHeight, adjust);
  return charHeight;
}

/*
==============
DynEnt_DrawDebugString
==============
*/

void __fastcall DynEnt_DrawDebugString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  __int128 v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  __int128 v14; 

  v10 = *(_OWORD *)&x;
  CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, forceColor, shadow, charHeight, adjust);
  v11 = DVARBOOL_dynEnt_debugDump;
  if ( !DVARBOOL_dynEnt_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_dynEnt_debugDisplayOffsetX;
    if ( !DVARINT_dynEnt_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = (float)v12->current.integer + 8.0;
    if ( *(float *)&x > v13 )
    {
      do
      {
        Com_Printf(14, " ");
        v14 = v10;
        *(float *)&v14 = *(float *)&v10 + -12.0;
        v10 = v14;
      }
      while ( *(float *)&v14 > v13 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
}

