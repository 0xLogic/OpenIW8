/*
==============
DynEnt_WriteSaveGame
==============
*/

void __fastcall DynEnt_WriteSaveGame(MemoryFile *memFile)
{
  ?DynEnt_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
DynEnt_ReadSaveGame
==============
*/

void __fastcall DynEnt_ReadSaveGame(MemoryFile *memFile)
{
  ?DynEnt_ReadSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
DynEnt_ReadSaveGame
==============
*/
void DynEnt_ReadSaveGame(MemoryFile *memFile)
{
  __int128 v1; 
  MemoryFile *v2; 
  const dvar_t *v3; 
  char enabled; 
  LocalClientNum_t v5; 
  unsigned __int16 v6; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId v8; 
  unsigned __int16 v9; 
  int v10; 
  unsigned __int64 v11; 
  char *v12; 
  __int64 v13; 
  DynEntityBasis v14; 
  unsigned int v15; 
  DynEntityListId v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  DynEntityList *DynEntityList; 
  bool v22; 
  __int64 v23; 
  char v24; 
  const DynEntityDef *Def; 
  unsigned __int16 v26; 
  DynEntityClient *ClientFromClientId; 
  unsigned int v28; 
  char v29; 
  char v30; 
  const DynEntityDef *v31; 
  const DynEntityDef *v32; 
  __int64 v33; 
  unsigned __int16 v34; 
  __int64 v35; 
  unsigned __int16 v36; 
  DynEntityPose *v37; 
  double Float; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  unsigned __int8 numParts; 
  unsigned __int8 v45; 
  __int64 v46; 
  DynEnt_ExtraPosePart *v47; 
  unsigned int posePart1FirstIndex; 
  unsigned __int8 v49; 
  unsigned __int8 *p_detailBodyToBoneMap0; 
  unsigned int v51; 
  const char *CString; 
  XAssetHeader v53; 
  unsigned __int16 v54; 
  bool v55; 
  unsigned __int16 flags; 
  unsigned __int16 v57; 
  unsigned __int16 v58; 
  unsigned __int16 v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  char v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  unsigned __int16 v68; 
  unsigned __int16 v69; 
  unsigned __int16 v70; 
  char v71; 
  bool v72; 
  bool v73; 
  char v74; 
  unsigned int v75; 
  const XModel *activeModel; 
  const PhysicsAsset *physicsAsset; 
  int physicsShapeOverrideIdx; 
  XModelDetailCollision *detailCollision; 
  const XModel *v80; 
  const cmodel_t *BrushModel; 
  unsigned int v82; 
  MemoryFile *v83; 
  __int32 v84; 
  int v85; 
  unsigned int physicsSystemId; 
  const HavokPhysicsWorld *ConstWorld; 
  signed int i; 
  unsigned int v89; 
  hknpBodyId v90; 
  int v91; 
  float v92; 
  float v93; 
  float v94; 
  __int128 v95; 
  double v96; 
  float v97; 
  double v98; 
  float v99; 
  double v100; 
  float v101; 
  double v102; 
  float v103; 
  double v104; 
  float v105; 
  double v106; 
  float v107; 
  double v108; 
  double v109; 
  double v110; 
  char v111; 
  float v118; 
  int v119; 
  int v120; 
  hknpWorld *world; 
  hknpWorldWriter_vtbl *v122; 
  hknpWorldWriter *v123; 
  char v124; 
  __int32 v125; 
  int v126; 
  unsigned int physicsSystemDetailId; 
  const HavokPhysicsWorld *v128; 
  signed int v129; 
  unsigned int v130; 
  unsigned int m_serialAndIndex; 
  double v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  int v139; 
  Physics_WorldId v140; 
  char *fmt; 
  __int64 associateScriptables; 
  int associateScriptablesa; 
  XModel *detailModel; 
  __int64 useInitialPose; 
  __int64 matchPose; 
  DynEntityBasis v147; 
  unsigned __int16 v148; 
  LocalClientNum_t localClientNum; 
  char v150; 
  __int64 p; 
  DynEntityClient *v152; 
  float v153; 
  char v154; 
  unsigned __int8 v155; 
  bool v156; 
  unsigned __int8 v157; 
  bool v158; 
  char v159; 
  char v160; 
  char v161; 
  char v162[4]; 
  float v163; 
  float v164; 
  MemoryFile *memFilea; 
  __int64 v166; 
  unsigned int v167; 
  unsigned int v168; 
  int v169; 
  __int64 v170; 
  int v171; 
  int v172; 
  unsigned int v173; 
  int v174; 
  int v175; 
  int v176; 
  __int64 v177; 
  hknpBodyId result; 
  hknpBodyId v179; 
  __int64 v180; 
  char *v181; 
  vec3_t position; 
  hkVector4f hkPosition; 
  int v184[4]; 
  int v185[4]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf hkOrientation; 

  v2 = memFile;
  memFilea = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 239, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_dynEnt_spatialEnabled;
  if ( !DCONST_DVARBOOL_dynEnt_spatialEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v150 = enabled;
  MemFile_ReadData(v2, 2ui64, &p);
  v5 = LOCAL_CLIENT_0;
  v6 = p;
  dynEntityListsCount = 0;
  if ( cm.mapEnts )
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
  if ( (_WORD)p != dynEntityListsCount )
  {
    v8 = cm.mapEnts ? cm.mapEnts->dynEntityListsCount : 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 247, ASSERT_TYPE_ASSERT, "( listCount ) == ( DynEnt_GetExpectedDynEntityListCount() )", "%s == %s\n\t%u, %u", "listCount", "DynEnt_GetExpectedDynEntityListCount()", (unsigned __int16)p, (unsigned __int16)v8) )
      __debugbreak();
  }
  v169 = 0;
  if ( v6 )
  {
    v173 = v6;
    while ( 1 )
    {
      MemFile_ReadData(v2, 2ui64, &p);
      v9 = p;
      MemFile_ReadData(v2, 4ui64, &v174);
      v10 = v174;
      if ( v9 >= 0x600u )
      {
        LODWORD(detailModel) = 1536;
        LODWORD(associateScriptables) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v11 = (unsigned __int64)v9 << 6;
      v12 = (char *)g_dynEntityLists + v11;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v11) == DEFAULT_DYNENTITY_LIST_ID )
        v12 = NULL;
      v181 = v12;
      if ( v12 )
        break;
      if ( v10 )
      {
        LODWORD(useInitialPose) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 257, ASSERT_TYPE_ASSERT, "( dynEntTotalCount ) == ( 0 )", "%s == %s\n\t%u, %u", "dynEntTotalCount", "0", useInitialPose, 0i64) )
          __debugbreak();
      }
LABEL_403:
      if ( ++v169 >= v173 )
      {
        enabled = v150;
        goto LABEL_405;
      }
    }
    if ( *((_DWORD *)v12 + 5) != v10 )
    {
      LODWORD(matchPose) = v10;
      LODWORD(useInitialPose) = *((_DWORD *)v12 + 5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 261, ASSERT_TYPE_ASSERT, "( dynEntityList->dynEntCountTotal ) == ( dynEntTotalCount )", "%s == %s\n\t%u, %u", "dynEntityList->dynEntCountTotal", "dynEntTotalCount", useInitialPose, matchPose) )
        __debugbreak();
    }
    if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 264, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
      __debugbreak();
    v13 = 0i64;
    localClientNum = LOCAL_CLIENT_0;
    v166 = 0i64;
    if ( SLODWORD(cl_maxLocalClients) <= 0 )
      goto LABEL_403;
LABEL_33:
    v14 = DYNENT_BASIS_MODEL;
    v147 = DYNENT_BASIS_MODEL;
    while ( 1 )
    {
      MemFile_ReadData(v2, 4ui64, &v168);
      v15 = v168;
      v180 = (unsigned __int8)v14;
      if ( v168 != *(_DWORD *)&v12[4 * (unsigned __int8)v14 + 12] )
      {
        LODWORD(matchPose) = *(_DWORD *)&v12[4 * (unsigned __int8)v14 + 12];
        LODWORD(useInitialPose) = v168;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 272, ASSERT_TYPE_ASSERT, "( dynEntCount ) == ( dynEntityList->dynEntCount[basis] )", "%s == %s\n\t%u, %u", "dynEntCount", "dynEntityList->dynEntCount[basis]", useInitialPose, matchPose) )
          __debugbreak();
      }
      if ( v15 )
        break;
LABEL_401:
      v147 = ++v14;
      if ( (unsigned __int8)v14 >= DYNENT_BASIS_COUNT )
      {
        v166 = ++v13;
        if ( ++localClientNum >= SLODWORD(cl_maxLocalClients) )
          goto LABEL_403;
        goto LABEL_33;
      }
    }
    v16 = (__int16)p;
    v17 = 0;
    v167 = 0;
    v18 = (unsigned __int16)p << 19;
    v19 = (unsigned __int16)p;
    v171 = v18;
    v177 = 0i64;
    v172 = (unsigned __int16)p;
    while ( 1 )
    {
      if ( (unsigned __int16)v16 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(detailModel) = 1536;
        LODWORD(associateScriptables) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      if ( v17 >= 0x7FFFF )
      {
        LODWORD(detailModel) = 0x7FFFF;
        LODWORD(associateScriptables) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v20 = v17 | v18;
      v164 = *(float *)&v20;
      if ( (unsigned __int8)v14 >= DYNENT_BASIS_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = (unsigned __int8)v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      DynEntityList = DynEnt_GetDynEntityList(v16);
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v17 >= DynEntityList->dynEntCount[(unsigned __int8)v14] )
      {
        LODWORD(detailModel) = DynEntityList->dynEntCount[(unsigned __int8)v14];
        LODWORD(associateScriptables) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v22 = &DynEntityList->dynEntDefList[(unsigned __int8)v14][v177] == NULL;
      v23 = (__int64)&DynEntityList->dynEntDefList[(unsigned __int8)v14][v177];
      v170 = v23;
      if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 290, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( *(_BYTE *)(v23 + 50) == 4 )
        goto LABEL_399;
      MemFile_ReadData(v2, 1ui64, &v154);
      *(_BYTE *)(v23 + 78) = v154;
      if ( *(_WORD *)(v23 + 2 * v13 + 56) != 0xFFFF )
      {
        v24 = *(_BYTE *)(v23 + 51);
        if ( v24 != -1 && v24 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 303, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] == 0xFFFF || !DynEntDef_IsSpatial(dynEntDef))", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID || !DynEntDef_IsSpatial(dynEntDef)") )
          __debugbreak();
      }
      MemFile_ReadData(v2, 2ui64, &v148);
      if ( !v148 )
      {
        if ( *(_BYTE *)(v23 + 51) == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 310, ASSERT_TYPE_ASSERT, "(dynEntDef->priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE)", (const char *)&queryFormat, "dynEntDef->priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE") )
          __debugbreak();
        LODWORD(v153) = v20 & 0x7FFFF;
        LOWORD(v163) = v20 >> 19;
        Def = DynEnt_GetDef(SLOWORD(v163), v20 & 0x7FFFF, v14);
        if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        v26 = Def->clientId[v13];
        if ( v26 == 0xFFFF )
          ClientFromClientId = NULL;
        else
          ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, v26, v14);
        if ( *(_BYTE *)(v23 + 51) == 4 )
        {
          if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 314, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
            __debugbreak();
          v28 = v20;
          v29 = localClientNum;
          DynEntCL_RemoveEntity(localClientNum, v28, v14, 0, 1);
          ClientFromClientId = NULL;
          goto LABEL_392;
        }
        if ( ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 320, ASSERT_TYPE_ASSERT, "(dynEntClient == nullptr)", (const char *)&queryFormat, "dynEntClient == nullptr") )
          __debugbreak();
        goto LABEL_391;
      }
      if ( *(_WORD *)(v23 + 2 * v13 + 56) == 0xFFFF )
      {
        v30 = *(_BYTE *)(v23 + 51);
        if ( (v30 == -1 || v30 == 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 328, ASSERT_TYPE_ASSERT, "(DynEntDef_IsSpatial( dynEntDef ))", (const char *)&queryFormat, "DynEntDef_IsSpatial( dynEntDef )") )
          __debugbreak();
        DynEntCL_AddHiddenEntity(localClientNum, v20, v14);
      }
      LODWORD(v153) = v20 & 0x7FFFF;
      LOWORD(v163) = v20 >> 19;
      v31 = DynEnt_GetDef(SLOWORD(v163), v20 & 0x7FFFF, v14);
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( v31->clientId[v13] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v152 = DynEnt_GetClientFromClientId(localClientNum, v31->clientId[v13], v147);
      ClientFromClientId = v152;
      LODWORD(v153) = v20 & 0x7FFFF;
      LOWORD(v163) = v20 >> 19;
      v32 = DynEnt_GetDef(SLOWORD(v163), v20 & 0x7FFFF, v147);
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v33 = v166;
      if ( v32->clientId[v166] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v34 = v32->clientId[v33];
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      if ( (unsigned __int8)v147 >= DYNENT_BASIS_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = (unsigned __int8)v147;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v35 = v180 + 2 * v33;
      if ( !g_dynEntPoseLists[0][v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
        __debugbreak();
      v36 = g_dynEntClientEntsAllocCount[0][v35];
      if ( v34 >= v36 )
      {
        LODWORD(detailModel) = v36;
        LODWORD(associateScriptables) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v37 = &g_dynEntPoseLists[0][v35][v34];
      if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 334, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 335, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
        __debugbreak();
      MemFile_ReadData(v2, 0x1Cui64, &v37->pose);
      Float = MemFile_ReadFloat(v2);
      v37->bounds.midPoint.v[0] = *(float *)&Float;
      v39 = MemFile_ReadFloat(v2);
      v37->bounds.midPoint.v[1] = *(float *)&v39;
      v40 = MemFile_ReadFloat(v2);
      v37->bounds.midPoint.v[2] = *(float *)&v40;
      v41 = MemFile_ReadFloat(v2);
      v37->bounds.halfSize.v[0] = *(float *)&v41;
      v42 = MemFile_ReadFloat(v2);
      v37->bounds.halfSize.v[1] = *(float *)&v42;
      v43 = MemFile_ReadFloat(v2);
      v37->bounds.halfSize.v[2] = *(float *)&v43;
      *(_QWORD *)&v37->lastGpuLightGridRequest.lgvFrame = -1i64;
      *(_QWORD *)&v37->lastGpuLightGridRequest.lgvNumProbes = 0i64;
      MemFile_ReadData(v2, 1ui64, &v155);
      numParts = v37->numParts;
      if ( v155 != numParts )
      {
        LODWORD(detailModel) = numParts;
        LODWORD(associateScriptables) = v155;
        LODWORD(fmt) = (unsigned __int8)v147;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14432C570, 6396i64, v20, fmt, associateScriptables, detailModel);
      }
      MemFile_ReadData(v2, 1ui64, &v156);
      v45 = 0;
      v37->detailBodyToBoneMapCached = v156;
      if ( v37->numParts )
      {
        v46 = v166;
        do
        {
          if ( v45 )
          {
            posePart1FirstIndex = v37->posePart1FirstIndex;
            if ( posePart1FirstIndex + v45 - 1 >= g_dynEntExtraPosePartsAllocCount[v46] )
            {
              LODWORD(detailModel) = g_dynEntExtraPosePartsAllocCount[v46];
              LODWORD(associateScriptables) = posePart1FirstIndex + v45 - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                __debugbreak();
            }
            v47 = &g_dynEntPoseExtraParts[v46][v45 - 1 + v37->posePart1FirstIndex];
          }
          else
          {
            v47 = (DynEnt_ExtraPosePart *)v37;
          }
          if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 354, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          MemFile_ReadData(v2, 0x1Cui64, v47);
          if ( v37->detailBodyToBoneMapCached )
          {
            v49 = v37->numParts;
            if ( v45 >= v49 )
            {
              LODWORD(detailModel) = v49;
              LODWORD(associateScriptables) = v45;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 277, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                __debugbreak();
            }
            if ( v45 )
            {
              v51 = v37->posePart1FirstIndex;
              if ( v51 + v45 - 1 >= g_dynEntExtraPosePartsAllocCount[v46] )
              {
                LODWORD(detailModel) = g_dynEntExtraPosePartsAllocCount[v46];
                LODWORD(associateScriptables) = v51 + v45 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 283, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                  __debugbreak();
              }
              p_detailBodyToBoneMap0 = &g_dynEntPoseExtraDetailBodyToBoneMap[v46][v45 - 1 + v37->posePart1FirstIndex];
            }
            else
            {
              p_detailBodyToBoneMap0 = &v37->detailBodyToBoneMap0;
            }
            if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 360, ASSERT_TYPE_ASSERT, "(detailToBodyBoneIdx)", (const char *)&queryFormat, "detailToBodyBoneIdx") )
              __debugbreak();
            MemFile_ReadData(v2, 1ui64, &v157);
            *p_detailBodyToBoneMap0 = v157;
          }
          ++v45;
        }
        while ( v45 < v37->numParts );
        v20 = LODWORD(v164);
        ClientFromClientId = v152;
        v23 = v170;
      }
      MemFile_ReadData(v2, 1ui64, &v158);
      v37->cachedActive = v158;
      MemFile_ReadData(v2, 1ui64, &v159);
      v22 = v159 == 0;
      ClientFromClientId->activeModel = NULL;
      if ( !v22 )
      {
        CString = MemFile_ReadCString(v2);
        v53.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, CString, 0).physicsLibrary;
        if ( !v53.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 373, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        ClientFromClientId->activeModel = v53.model;
      }
      v54 = v148;
      v55 = (v148 & 0x20) != 0;
      if ( (v148 & 0x20) != 0 )
      {
        flags = ClientFromClientId->flags;
        if ( (flags & 0x20) == 0 )
        {
          if ( (flags & 0x100) == 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 381, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 8))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_HIDDEN") )
              __debugbreak();
            v54 = v148;
          }
          if ( (v54 & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 382, ASSERT_TYPE_ASSERT, "((readFlags & (1 << 8)) == 0)", (const char *)&queryFormat, "(readFlags & DYNENT_CL_HIDDEN) == 0") )
            __debugbreak();
          DynEntCL_AddEntity(localClientNum, v20, v147, 1, 1, 0);
          if ( (ClientFromClientId->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 385, ASSERT_TYPE_ASSERT, "((dynEntClient->flags & (1 << 1)) != 0)", (const char *)&queryFormat, "(dynEntClient->flags & DYNENT_CL_PHYSICS_SETUP) != 0") )
            __debugbreak();
          LOBYTE(v54) = v148;
        }
      }
      v57 = ClientFromClientId->flags;
      if ( (((unsigned __int8)v54 ^ (unsigned __int8)v57) & 0x20) != 0 )
      {
        LODWORD(matchPose) = v54 & 0x20;
        LODWORD(useInitialPose) = v57 & 0x20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 387, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 5) ) == ( readFlags & (1 << 5) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_NO_EVICT", "readFlags & DYNENT_CL_NO_EVICT", useInitialPose, matchPose) )
          __debugbreak();
        LOBYTE(v54) = v148;
      }
      v58 = ClientFromClientId->flags;
      if ( (v58 & 0x100) != 0 )
      {
        v59 = v58 | v54 & 4;
        ClientFromClientId->flags = v59;
        v60 = v59 | v148 & 8;
        ClientFromClientId->flags = v60;
        v61 = v60 | v148 & 0x10;
        ClientFromClientId->flags = v61;
        v62 = v61 | v148 & 0x200;
        ClientFromClientId->flags = v62;
        v63 = v62 | v148 & 0x400;
        ClientFromClientId->flags = v63;
        v64 = v63;
        v65 = v63;
      }
      else
      {
        v66 = v58 | v54 & 8;
        ClientFromClientId->flags = v66;
        if ( (((unsigned __int8)v148 ^ (unsigned __int8)v66) & 4) != 0 )
        {
          LODWORD(matchPose) = v148 & 4;
          LODWORD(useInitialPose) = v66 & 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 404, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 2) ) == ( readFlags & (1 << 2) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_LINKEDTOENTITY", "readFlags & DYNENT_CL_LINKEDTOENTITY", useInitialPose, matchPose) )
            __debugbreak();
        }
        v67 = ClientFromClientId->flags;
        if ( (((unsigned __int8)v148 ^ (unsigned __int8)v67) & 0x10) != 0 )
        {
          LODWORD(matchPose) = v148 & 0x10;
          LODWORD(useInitialPose) = v67 & 0x10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 405, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 4) ) == ( readFlags & (1 << 4) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_TRANSIENT", "readFlags & DYNENT_CL_TRANSIENT", useInitialPose, matchPose) )
            __debugbreak();
        }
        v68 = ClientFromClientId->flags;
        if ( ((v148 ^ v68) & 0x200) != 0 )
        {
          LODWORD(matchPose) = v148 & 0x200;
          LODWORD(useInitialPose) = v68 & 0x200;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 406, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 9) ) == ( readFlags & (1 << 9) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_DISTANT_SHADOWS", "readFlags & DYNENT_CL_DISTANT_SHADOWS", useInitialPose, matchPose) )
            __debugbreak();
        }
        v69 = ClientFromClientId->flags;
        if ( ((v148 ^ v69) & 0x400) != 0 )
        {
          LODWORD(matchPose) = v148 & 0x400;
          LODWORD(useInitialPose) = v69 & 0x400;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 407, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 10) ) == ( readFlags & (1 << 10) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_NO_SPOTSHADOWS", "readFlags & DYNENT_CL_NO_SPOTSHADOWS", useInitialPose, matchPose) )
            __debugbreak();
        }
        v64 = ClientFromClientId->flags;
        LOBYTE(v63) = ClientFromClientId->flags;
        v65 = v64;
      }
      if ( (((unsigned __int8)v63 ^ (unsigned __int8)v148) & 1) != 0 )
      {
        if ( (v65 & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 415, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 5))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_NO_EVICT") )
          __debugbreak();
        if ( (v148 & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 416, ASSERT_TYPE_ASSERT, "(readFlags & (1 << 5))", (const char *)&queryFormat, "readFlags & DYNENT_CL_NO_EVICT") )
          __debugbreak();
        v70 = ClientFromClientId->flags;
        if ( v55 )
          v64 = v70 | 1;
        else
          v64 = v70 & 0xFFFE;
        ClientFromClientId->flags = v64;
      }
      v71 = (v64 & 2) != 0;
      v72 = (v148 & 2) != 0;
      v73 = (v148 & 0x1000) != 0;
      if ( (v64 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 431, ASSERT_TYPE_ASSERT, "((dynEntClient->flags & (1 << 12)) == 0)", (const char *)&queryFormat, "(dynEntClient->flags & DYNENT_CL_INTERNAL_COLLISION_DISABLED) == 0") )
        __debugbreak();
      v74 = v72 && !v73;
      v22 = v74 == v71;
      v14 = v147;
      if ( v22 )
      {
        v29 = localClientNum;
      }
      else
      {
        if ( v74 )
        {
          if ( v147 )
          {
            if ( v147 != DYNENT_BASIS_BRUSH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 457, ASSERT_TYPE_ASSERT, "(basis == DYNENT_BASIS_BRUSH)", (const char *)&queryFormat, "basis == DYNENT_BASIS_BRUSH") )
              __debugbreak();
            BrushModel = CM_GetBrushModel(*(unsigned __int16 *)(v23 + 66));
            if ( !BrushModel )
            {
              LODWORD(detailModel) = *(unsigned __int16 *)(v23 + 66);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 459, ASSERT_TYPE_ASSERT, "(cmodel)", "%s\n\tDynEnt: missing brush model for dynEnt brush %i.", "cmodel", detailModel) )
                __debugbreak();
            }
            physicsAsset = BrushModel->physicsAsset;
            v5 = LOCAL_CLIENT_0;
            physicsShapeOverrideIdx = BrushModel->physicsShapeOverrideIdx;
            activeModel = NULL;
          }
          else
          {
            activeModel = ClientFromClientId->activeModel;
            v5 = LOCAL_CLIENT_0;
            if ( ClientFromClientId->activeModel )
              physicsAsset = activeModel->physicsAsset;
            else
              physicsAsset = NULL;
            physicsShapeOverrideIdx = -1;
            if ( activeModel )
            {
              detailCollision = activeModel->detailCollision;
              if ( detailCollision )
              {
                if ( detailCollision->physicsLODDataSize )
                {
                  v80 = ClientFromClientId->activeModel;
LABEL_220:
                  associateScriptablesa = physicsShapeOverrideIdx;
                  v82 = v20;
                  v29 = localClientNum;
                  DynEnt_SetupPhysics(localClientNum, v82, v147, activeModel, physicsAsset, associateScriptablesa, v80, 0, 0, 1);
                  goto LABEL_223;
                }
              }
            }
          }
          v80 = NULL;
          goto LABEL_220;
        }
        v75 = v20;
        v29 = localClientNum;
        DynEnt_ShutdownPhysics(localClientNum, v75, v147, 1);
      }
      v5 = LOCAL_CLIENT_0;
LABEL_223:
      ClientFromClientId->flags |= v148 & 0x1000;
      ClientFromClientId->flags |= v148 & 0x2000;
      if ( (v148 & 2) != 0 )
      {
        v83 = memFilea;
        MemFile_ReadData(memFilea, 1ui64, &v160);
        if ( !v160 )
        {
          if ( ClientFromClientId->physicsSystemId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 485, ASSERT_TYPE_ASSERT, "(hasPhysicsSystemId || (dynEntClient->physicsSystemId == 0xFFFFFFFF))", (const char *)&queryFormat, "hasPhysicsSystemId || (dynEntClient->physicsSystemId == PHYSICSINSTANCEID_INVALID)") )
            __debugbreak();
          goto LABEL_331;
        }
        v84 = 3 * localClientNum + 3;
        MemFile_ReadData(v83, 4ui64, &v175);
        v85 = v175;
        physicsSystemId = ClientFromClientId->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v84 > 7 )
        {
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v84 - 2) <= 5 )
        {
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
        {
LABEL_246:
          if ( (unsigned int)v84 > 7 )
            goto LABEL_247;
        }
        else
        {
          if ( v84 >= 0 )
          {
            if ( v84 <= 1 )
            {
              LODWORD(detailModel) = v84;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                __debugbreak();
            }
            goto LABEL_246;
          }
LABEL_247:
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", detailModel) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v84);
        if ( !ConstWorld->world )
        {
          LODWORD(detailModel) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", detailModel) )
            __debugbreak();
        }
        if ( v85 != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, physicsSystemId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 491, ASSERT_TYPE_ASSERT, "(numMainBodies == (int)Physics_GetNumRigidBodys( mainWorldId, dynEntClient->physicsSystemId ))", (const char *)&queryFormat, "numMainBodies == (int)Physics_GetNumRigidBodys( mainWorldId, dynEntClient->physicsSystemId )") )
          __debugbreak();
        v5 = LOCAL_CLIENT_0;
        for ( i = 0; i < v85; ++i )
        {
          v89 = ClientFromClientId->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v84 > 7 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v89 == -1 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v84 - 2) <= 5 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v84 <= 1 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
              __debugbreak();
          }
          v90.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v84, v89, i)->m_serialAndIndex;
          v91 = v90.m_serialAndIndex & 0xFFFFFF;
          if ( (v90.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 496, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          *(double *)&v1 = MemFile_ReadFloat(v83);
          v92 = *(float *)&v1;
          *(double *)&v1 = MemFile_ReadFloat(v83);
          v93 = *(float *)&v1;
          *(double *)&v1 = MemFile_ReadFloat(v83);
          v94 = *(float *)&v1;
          *(double *)&v1 = MemFile_ReadFloat(v83);
          v95 = v1;
          v96 = MemFile_ReadFloat(v83);
          v97 = *(float *)&v96;
          v98 = MemFile_ReadFloat(v83);
          v99 = *(float *)&v98;
          v100 = MemFile_ReadFloat(v83);
          v101 = *(float *)&v100;
          v102 = MemFile_ReadFloat(v83);
          v103 = *(float *)&v102;
          v104 = MemFile_ReadFloat(v83);
          v105 = *(float *)&v104;
          v106 = MemFile_ReadFloat(v83);
          v107 = *(float *)&v106;
          v108 = MemFile_ReadFloat(v83);
          v153 = *(float *)&v108;
          v109 = MemFile_ReadFloat(v83);
          v164 = *(float *)&v109;
          v110 = MemFile_ReadFloat(v83);
          v163 = *(float *)&v110;
          MemFile_ReadData(v83, 1ui64, &v161);
          v111 = v161;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v84 > 7 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v91 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", detailModel) )
              __debugbreak();
          }
          *(float *)&v152 = v92;
          if ( (LODWORD(v92) & 0x7F800000) == 2139095040 || (*(float *)&v152 = v93, (LODWORD(v93) & 0x7F800000) == 2139095040) || (*(float *)&v152 = v94, (LODWORD(v94) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
              __debugbreak();
          }
          *(float *)&v152 = *(float *)&v95;
          if ( (v95 & 0x7F800000) == 2139095040 || (*(float *)&v152 = v97, (LODWORD(v97) & 0x7F800000) == 2139095040) || (*(float *)&v152 = v99, (LODWORD(v99) & 0x7F800000) == 2139095040) || (*(float *)&v152 = v101, (LODWORD(v101) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
              __debugbreak();
          }
          hkPosition.m_quad.m128_f32[0] = v92 * 0.03125;
          hkPosition.m_quad.m128_f32[2] = v94 * 0.03125;
          hkPosition.m_quad.m128_f32[1] = v93 * 0.03125;
          hkPosition.m_quad.m128_f32[3] = 0.0;
          _XMM5 = v95;
          __asm
          {
            vinsertps xmm5, xmm5, xmm10, 10h
            vinsertps xmm5, xmm5, xmm11, 20h ; ' '
            vinsertps xmm5, xmm5, xmm12, 30h ; '0'
            vdpps   xmm0, xmm5, xmm5, 0FFh
            vrsqrtps xmm4, xmm0
          }
          hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
          HavokPhysics_WarpRigidBodyTo((const Physics_WorldId)v84, v90, &hkPosition, &hkOrientation, 0, v111);
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v84 > 7 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v91 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", detailModel) )
              __debugbreak();
          }
          *(float *)&v152 = v103;
          if ( (LODWORD(v103) & 0x7F800000) == 2139095040 || (*(float *)&v152 = v105, (LODWORD(v105) & 0x7F800000) == 2139095040) || (*(float *)&v152 = v107, (LODWORD(v107) & 0x7F800000) == 2139095040) )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", detailModel) )
              __debugbreak();
          }
          v118 = v153;
          *(float *)&v119 = v164;
          *(float *)&v120 = v163;
          if ( (LODWORD(v153) & 0x7F800000) == 2139095040 || (v153 = v164, (LODWORD(v164) & 0x7F800000) == 2139095040) || (v153 = v163, (LODWORD(v163) & 0x7F800000) == 2139095040) )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", detailModel) )
              __debugbreak();
          }
          *(float *)v185 = v103 * 0.03125;
          *(float *)&v185[2] = v107 * 0.03125;
          v1 = 0i64;
          *(float *)&v185[3] = 0.0;
          *(float *)&v184[3] = 0.0;
          *(float *)&v185[1] = v105 * 0.03125;
          *(float *)v184 = v118;
          v184[1] = v119;
          v184[2] = v120;
          if ( (unsigned int)v84 > 7 )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v91 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", detailModel) )
              __debugbreak();
          }
          world = HavokPhysics_GetMutableWorld((Physics_WorldId)v84)->world;
          if ( !world )
          {
            LODWORD(detailModel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", detailModel) )
              __debugbreak();
          }
          v122 = world->hknpWorldWriter::__vftable;
          v123 = &world->hknpWorldWriter;
          v5 = LOCAL_CLIENT_0;
          ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))v122->setBodyVelocity)(v123, v90.m_serialAndIndex, v185, v184, 0);
          if ( v111 )
            Physics_ActivateBody((Physics_WorldId)v84, v90.m_serialAndIndex);
          v83 = memFilea;
        }
        v23 = v170;
LABEL_331:
        MemFile_ReadData(v83, 1ui64, v162);
        v124 = v162[0];
        if ( v162[0] != (ClientFromClientId->physicsSystemDetailId != -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 524, ASSERT_TYPE_ASSERT, "(hasPhysicsSystemDetailId == (dynEntClient->physicsSystemDetailId != 0xFFFFFFFF))", (const char *)&queryFormat, "hasPhysicsSystemDetailId == (dynEntClient->physicsSystemDetailId != PHYSICSINSTANCEID_INVALID)") )
          __debugbreak();
        if ( v124 )
        {
          v125 = 3 * localClientNum + 4;
          MemFile_ReadData(v83, 4ui64, &v176);
          v126 = v176;
          physicsSystemDetailId = ClientFromClientId->physicsSystemDetailId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v125 > 7 )
          {
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( physicsSystemDetailId == -1 )
          {
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v125 - 2) <= 5 )
          {
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
              __debugbreak();
          }
          if ( g_physicsServerWorldsCreated )
          {
LABEL_353:
            if ( (unsigned int)v125 > 7 )
              goto LABEL_354;
          }
          else
          {
            if ( v125 >= 0 )
            {
              if ( v125 <= 1 )
              {
                LODWORD(detailModel) = v125;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                  __debugbreak();
              }
              goto LABEL_353;
            }
LABEL_354:
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( physicsSystemDetailId == -1 )
          {
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          v128 = HavokPhysics_GetConstWorld((Physics_WorldId)v125);
          if ( !v128->world )
          {
            LODWORD(detailModel) = v125;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", detailModel) )
              __debugbreak();
          }
          if ( v126 != HavokPhysicsInstanceManager_GetBodyCount(&v128->instanceManager, physicsSystemDetailId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 529, ASSERT_TYPE_ASSERT, "(numDetailBodies == (int)Physics_GetNumRigidBodys( detailWorldId, dynEntClient->physicsSystemDetailId ))", (const char *)&queryFormat, "numDetailBodies == (int)Physics_GetNumRigidBodys( detailWorldId, dynEntClient->physicsSystemDetailId )") )
            __debugbreak();
          v2 = memFilea;
          v129 = 0;
          if ( v126 > 0 )
          {
            do
            {
              v130 = ClientFromClientId->physicsSystemDetailId;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (unsigned int)v125 > 7 )
              {
                LODWORD(detailModel) = v125;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
                  __debugbreak();
              }
              if ( v130 == -1 )
              {
                LODWORD(detailModel) = v125;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated && (unsigned int)(v125 - 2) <= 5 )
              {
                LODWORD(detailModel) = v125;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated && (unsigned int)v125 <= 1 )
              {
                LODWORD(detailModel) = v125;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v179, (const Physics_WorldId)v125, v130, v129)->m_serialAndIndex;
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 534, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                __debugbreak();
              v132 = MemFile_ReadFloat(v2);
              position.v[0] = *(float *)&v132;
              v133 = MemFile_ReadFloat(v2);
              position.v[1] = *(float *)&v133;
              v134 = MemFile_ReadFloat(v2);
              position.v[2] = *(float *)&v134;
              v135 = MemFile_ReadFloat(v2);
              orientationAsQuat.v[0] = *(float *)&v135;
              v136 = MemFile_ReadFloat(v2);
              orientationAsQuat.v[1] = *(float *)&v136;
              v137 = MemFile_ReadFloat(v2);
              orientationAsQuat.v[2] = *(float *)&v137;
              v138 = MemFile_ReadFloat(v2);
              orientationAsQuat.v[3] = *(float *)&v138;
              Physics_WarpRigidBodyTo((const Physics_WorldId)v125, m_serialAndIndex, &position, &orientationAsQuat, 0, 1);
              ++v129;
            }
            while ( v129 < v126 );
            v23 = v170;
          }
          v5 = LOCAL_CLIENT_0;
        }
        else
        {
          v2 = memFilea;
        }
        v14 = v147;
LABEL_391:
        v29 = localClientNum;
      }
LABEL_392:
      if ( v150 )
      {
        if ( ClientFromClientId && (ClientFromClientId->flags & 0x20) != 0 )
          v139 = *(unsigned __int8 *)(v23 + 48) | (1 << v29);
        else
          v139 = *(unsigned __int8 *)(v23 + 48) & ~(1 << v29);
        *(_BYTE *)(v23 + 48) = v139;
      }
      v13 = v166;
LABEL_399:
      ++v177;
      v17 = v167 + 1;
      v16 = (__int16)p;
      v18 = v171;
      v19 = v172;
      v167 = v17;
      if ( v17 >= v168 )
      {
        v12 = v181;
        goto LABEL_401;
      }
    }
  }
LABEL_405:
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v140 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
    do
    {
      if ( enabled )
        DynEntCL_Spatial_PostLoad(v5);
      Physics_UpdateBroadphase(v140, 1);
      DynEntCL_VerifyClientLists(v5++);
      v140 += 3;
    }
    while ( v5 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
DynEnt_WriteSaveGame
==============
*/
void DynEnt_WriteSaveGame(MemoryFile *memFile)
{
  MemoryFile *v1; 
  char v2; 
  LocalClientNum_t v3; 
  DynEntityListId *dynEntListIds; 
  unsigned int v5; 
  DynEntityListId v6; 
  unsigned __int64 v7; 
  char *v8; 
  int v9; 
  __int64 v10; 
  DynEntityBasis v11; 
  __int64 v12; 
  char *v13; 
  unsigned int v14; 
  DynEntityListId v15; 
  unsigned int v16; 
  DynEntityListId v17; 
  DynEntityList *DynEntityList; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  const DynEntityDef *Def; 
  __int64 v24; 
  const DynEntityDef *v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  unsigned __int16 v28; 
  DynEntityPose *v29; 
  unsigned __int16 *p_flags; 
  unsigned __int8 v31; 
  DynEnt_ExtraPosePart *v32; 
  unsigned int posePart1FirstIndex; 
  unsigned __int8 numParts; 
  char *p_detailBodyToBoneMap0; 
  unsigned int v36; 
  const char **v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  const HavokPhysicsWorld *ConstWorld; 
  int v42; 
  signed int v43; 
  unsigned int v44; 
  hknpBodyId v45; 
  int v46; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v48; 
  MemoryFile *v49; 
  unsigned int v50; 
  int v51; 
  const HavokPhysicsWorld *v52; 
  signed int v53; 
  signed int i; 
  unsigned int v55; 
  unsigned int m_serialAndIndex; 
  int v57; 
  hknpWorld *v58; 
  const tmat34_t<vec4_t> *v59; 
  __int64 v60; 
  __int64 v61; 
  DynEntityBasis v62; 
  DynEntityListId p; 
  unsigned int v64; 
  char v65[8]; 
  char v66[8]; 
  char v67[8]; 
  char v68[8]; 
  char v69[8]; 
  char v70[8]; 
  char v71[8]; 
  char v72[8]; 
  char v73[8]; 
  __int16 v74[2]; 
  unsigned int v75; 
  int v76; 
  unsigned int v77; 
  DynEntityListId *v78; 
  MemoryFile *memFilea; 
  unsigned int BodyCount; 
  unsigned int v81[4]; 
  __int64 v82; 
  DynEntityClient *ClientFromClientId; 
  char *v84; 
  hknpBodyId v85; 
  hknpBodyId result; 
  unsigned int *v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  int v97[4]; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec4_t out; 
  vec4_t v101; 
  char dest[128]; 

  memFilea = memFile;
  v1 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 38, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( Sys_IsServerThread() )
  {
    v2 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
        __debugbreak();
      v2 = SvGameGlobals::ms_allocatedType;
    }
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    if ( !*(&SvGameGlobals::ms_svGameGlobals[1].m_configstringsCount + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 44, ASSERT_TYPE_ASSERT, "(SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame)", (const char *)&queryFormat, "SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame") )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEnt_WriteSaveGame");
  v3 = LOCAL_CLIENT_0;
  if ( cm.mapEnts )
  {
    p = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v78 = dynEntListIds;
    if ( p && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 52, ASSERT_TYPE_ASSERT, "(listCount == 0 || listId)", (const char *)&queryFormat, "listCount == 0 || listId") )
      __debugbreak();
  }
  else
  {
    p = 0;
    dynEntListIds = NULL;
    v78 = NULL;
  }
  MemFile_WriteData(v1, 2ui64, &p);
  v5 = 0;
  v77 = 0;
  if ( p )
  {
    do
    {
      MemFile_WriteData(v1, 2ui64, dynEntListIds);
      v6 = *dynEntListIds;
      if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v61) = 1536;
        LODWORD(v60) = (unsigned __int16)v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v60, v61) )
          __debugbreak();
      }
      v7 = (unsigned __int64)(unsigned __int16)v6 << 6;
      v8 = (char *)g_dynEntityLists + v7;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v7) == DEFAULT_DYNENTITY_LIST_ID )
        v8 = NULL;
      v84 = v8;
      if ( v8 )
        v9 = *((_DWORD *)v8 + 5);
      else
        v9 = 0;
      v76 = v9;
      MemFile_WriteData(v1, 4ui64, &v76);
      if ( v76 )
      {
        Sys_ProfBeginNamedEvent(0xFFFF6347, "Per DynEntityList");
        if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 75, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
          __debugbreak();
        v10 = 0i64;
        v64 = 0;
        v82 = 0i64;
        if ( SLODWORD(cl_maxLocalClients) > 0 )
        {
          while ( 1 )
          {
            Sys_ProfBeginNamedEvent(0xFFFF6347, "Per Client");
            v11 = DYNENT_BASIS_MODEL;
            v62 = DYNENT_BASIS_MODEL;
            do
            {
              v12 = *(unsigned int *)&v8[4 * (unsigned __int8)v11 + 12];
              v13 = &v8[4 * (unsigned __int8)v11 + 12];
              v87 = (unsigned int *)v13;
              Com_sprintf(dest, 0x80ui64, "Per Basis %i", v12);
              Sys_ProfBeginNamedEvent(0xFFFF6347, dest);
              MemFile_WriteData(v1, 4ui64, v13);
              if ( *(_DWORD *)v13 )
              {
                v14 = 0;
                v75 = 0;
                while ( 1 )
                {
                  v15 = *dynEntListIds;
                  if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                  {
                    LODWORD(v61) = 1536;
                    LODWORD(v60) = (unsigned __int16)v15;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v60, v61) )
                      __debugbreak();
                  }
                  if ( v14 >= 0x7FFFF )
                  {
                    LODWORD(v61) = 0x7FFFF;
                    LODWORD(v60) = v14;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v60, v61) )
                      __debugbreak();
                  }
                  v16 = v14 | ((unsigned __int16)v15 << 19);
                  v17 = *v78;
                  if ( (unsigned __int8)v11 >= DYNENT_BASIS_COUNT )
                  {
                    LODWORD(v61) = 2;
                    LODWORD(v60) = (unsigned __int8)v11;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v60, v61) )
                      __debugbreak();
                  }
                  DynEntityList = DynEnt_GetDynEntityList(v17);
                  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                    __debugbreak();
                  v19 = v75;
                  if ( v75 >= DynEntityList->dynEntCount[(unsigned __int8)v11] )
                  {
                    LODWORD(v61) = DynEntityList->dynEntCount[(unsigned __int8)v11];
                    LODWORD(v60) = v75;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v60, v61) )
                      __debugbreak();
                  }
                  v20 = (__int64)&DynEntityList->dynEntDefList[(unsigned __int8)v11][v19];
                  if ( *(_BYTE *)(v20 + 50) == 4 )
                    goto LABEL_273;
                  v65[0] = *(_BYTE *)(v20 + 78);
                  MemFile_WriteData(v1, 1ui64, v65);
                  if ( *(_WORD *)(v20 + 2 * v10 + 56) != 0xFFFF )
                    break;
                  v74[0] = 0;
                  MemFile_WriteData(v1, 2ui64, v74);
LABEL_273:
                  v14 = v75 + 1;
                  v10 = v82;
                  dynEntListIds = v78;
                  v75 = v14;
                  if ( v14 >= *v87 )
                    goto LABEL_274;
                }
                v21 = v16 & 0x7FFFF;
                v22 = v16 >> 19;
                LODWORD(ClientFromClientId) = v21;
                Def = DynEnt_GetDef((DynEntityListId)v22, v21, v11);
                if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( Def->clientId[v10] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                ClientFromClientId = DynEnt_GetClientFromClientId(v3, Def->clientId[v10], v11);
                v24 = (__int64)ClientFromClientId;
                v25 = DynEnt_GetDef((DynEntityListId)v22, v21, v11);
                if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( v25->clientId[v10] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                v26 = v25->clientId[v10];
                if ( v64 >= 2 )
                {
                  LODWORD(v61) = 2;
                  LODWORD(v60) = v64;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v60, v61) )
                    __debugbreak();
                }
                if ( (unsigned __int8)v11 >= DYNENT_BASIS_COUNT )
                {
                  LODWORD(v61) = 2;
                  LODWORD(v60) = (unsigned __int8)v11;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v60, v61) )
                    __debugbreak();
                }
                v27 = (unsigned __int8)v11 + 2 * v10;
                if ( !g_dynEntPoseLists[0][v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                  __debugbreak();
                v28 = g_dynEntClientEntsAllocCount[0][v27];
                if ( v26 >= v28 )
                {
                  LODWORD(v61) = v28;
                  LODWORD(v60) = v26;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v60, v61) )
                    __debugbreak();
                }
                v29 = &g_dynEntPoseLists[0][v27][v26];
                if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 118, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                  __debugbreak();
                if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 119, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                  __debugbreak();
                p_flags = (unsigned __int16 *)(v24 + 28);
                if ( !*(_WORD *)(v24 + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 120, ASSERT_TYPE_ASSERT, "(dynEntClient->flags != 0)", (const char *)&queryFormat, "dynEntClient->flags != 0") )
                  __debugbreak();
                MemFile_WriteData(v1, 2ui64, (const void *)(v24 + 28));
                MemFile_WriteData(v1, 0x1Cui64, &v29->pose);
                MemFile_WriteData(v1, 0xCui64, &v29->bounds);
                MemFile_WriteData(v1, 0xCui64, &v29->bounds.halfSize);
                v66[0] = v29->numParts;
                MemFile_WriteData(v1, 1ui64, v66);
                v67[0] = v29->detailBodyToBoneMapCached;
                MemFile_WriteData(v1, 1ui64, v67);
                v31 = 0;
                if ( v29->numParts )
                {
                  do
                  {
                    if ( v31 )
                    {
                      posePart1FirstIndex = v29->posePart1FirstIndex;
                      if ( posePart1FirstIndex + v31 - 1 >= g_dynEntExtraPosePartsAllocCount[v10] )
                      {
                        LODWORD(v61) = g_dynEntExtraPosePartsAllocCount[v10];
                        LODWORD(v60) = posePart1FirstIndex + v31 - 1;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v60, v61) )
                          __debugbreak();
                      }
                      v32 = &g_dynEntPoseExtraParts[v10][v31 - 1 + v29->posePart1FirstIndex];
                    }
                    else
                    {
                      v32 = (DynEnt_ExtraPosePart *)v29;
                    }
                    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 135, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
                      __debugbreak();
                    MemFile_WriteData(v1, 0x1Cui64, v32);
                    if ( v29->detailBodyToBoneMapCached )
                    {
                      numParts = v29->numParts;
                      if ( v31 >= numParts )
                      {
                        LODWORD(v61) = numParts;
                        LODWORD(v60) = v31;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v60, v61) )
                          __debugbreak();
                      }
                      if ( v31 )
                      {
                        v36 = v29->posePart1FirstIndex;
                        if ( v36 + v31 - 1 >= g_dynEntExtraPosePartsAllocCount[v10] )
                        {
                          LODWORD(v61) = g_dynEntExtraPosePartsAllocCount[v10];
                          LODWORD(v60) = v36 + v31 - 1;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 267, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v60, v61) )
                            __debugbreak();
                        }
                        p_detailBodyToBoneMap0 = (char *)&g_dynEntPoseExtraDetailBodyToBoneMap[v10][v31 - 1 + v29->posePart1FirstIndex];
                      }
                      else
                      {
                        p_detailBodyToBoneMap0 = (char *)&v29->detailBodyToBoneMap0;
                      }
                      if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 141, ASSERT_TYPE_ASSERT, "(detailToBodyBoneIdx)", (const char *)&queryFormat, "detailToBodyBoneIdx") )
                        __debugbreak();
                      v68[0] = *p_detailBodyToBoneMap0;
                      MemFile_WriteData(v1, 1ui64, v68);
                    }
                    ++v31;
                  }
                  while ( v31 < v29->numParts );
                  v24 = (__int64)ClientFromClientId;
                  p_flags = &ClientFromClientId->flags;
                }
                v69[0] = v29->cachedActive;
                MemFile_WriteData(v1, 1ui64, v69);
                v37 = *(const char ***)v24;
                v70[0] = *(_QWORD *)v24 != 0i64;
                MemFile_WriteData(v1, 1ui64, v70);
                if ( v37 )
                  MemFile_WriteCString(v1, *v37);
                if ( (*(_BYTE *)p_flags & 2) != 0 )
                {
                  v71[0] = *(_DWORD *)(v24 + 12) != -1;
                  MemFile_WriteData(v1, 1ui64, v71);
                  v38 = *(_DWORD *)(v24 + 12);
                  v39 = v64;
                  if ( v38 != -1 )
                  {
                    v40 = 3 * v64 + 3;
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v40 > 7 )
                    {
                      LODWORD(v61) = 3 * v39 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                        __debugbreak();
                    }
                    if ( !g_physicsClientWorldsCreated && 3 * v39 + 1 <= 5 )
                    {
                      LODWORD(v61) = 3 * v39 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                        __debugbreak();
                    }
                    if ( g_physicsServerWorldsCreated )
                    {
LABEL_137:
                      if ( (unsigned int)v40 > 7 )
                        goto LABEL_138;
                    }
                    else
                    {
                      if ( v40 >= 0 )
                      {
                        if ( v40 <= 1 )
                        {
                          LODWORD(v61) = 3 * v39 + 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                            __debugbreak();
                        }
                        goto LABEL_137;
                      }
LABEL_138:
                      LODWORD(v61) = 3 * v39 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                        __debugbreak();
                    }
                    ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v40);
                    if ( !ConstWorld->world )
                    {
                      LODWORD(v61) = 3 * v39 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v61) )
                        __debugbreak();
                    }
                    BodyCount = HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v38);
                    v42 = BodyCount;
                    MemFile_WriteData(memFilea, 4ui64, &BodyCount);
                    v43 = 0;
                    if ( v42 <= 0 )
                    {
                      v1 = memFilea;
                    }
                    else
                    {
                      do
                      {
                        v44 = *(_DWORD *)(v24 + 12);
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v40 > 7 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                            __debugbreak();
                        }
                        if ( v44 == -1 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v61) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated && (unsigned int)(v40 - 2) <= 5 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                            __debugbreak();
                        }
                        if ( !g_physicsServerWorldsCreated && (unsigned int)v40 <= 1 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                            __debugbreak();
                        }
                        v45.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v40, v44, v43)->m_serialAndIndex;
                        v46 = v45.m_serialAndIndex & 0xFFFFFF;
                        if ( (v45.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 168, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                          __debugbreak();
                        out = 0i64;
                        v88 = 0.0;
                        v89 = 0.0;
                        v90 = 0.0;
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v40 > 7 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                            __debugbreak();
                        }
                        if ( v46 == 0xFFFFFF )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v61) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated && (unsigned int)(v40 - 2) <= 5 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                            __debugbreak();
                        }
                        if ( !g_physicsServerWorldsCreated && (unsigned int)v40 <= 1 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                            __debugbreak();
                        }
                        if ( (unsigned int)v40 > 7 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                            __debugbreak();
                        }
                        if ( v46 == 0xFFFFFF )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v61) )
                            __debugbreak();
                        }
                        world = HavokPhysics_GetConstWorld((Physics_WorldId)v40)->world;
                        if ( !world )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v61) )
                            __debugbreak();
                        }
                        v48 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v45.m_serialAndIndex);
                        v88 = 32.0 * v48[1].m[0].v[0];
                        v89 = 32.0 * v48[1].m[0].v[1];
                        v90 = 32.0 * v48[1].m[0].v[2];
                        Axis34ToQuat(v48, &out);
                        v49 = memFilea;
                        MemFile_WriteData(memFilea, 0xCui64, &v88);
                        MemFile_WriteData(v49, 0x10ui64, &out);
                        v91 = 0.0;
                        v92 = 0.0;
                        v93 = 0.0;
                        v94 = 0.0;
                        v95 = 0.0;
                        v96 = 0.0;
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v40 > 7 )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                            __debugbreak();
                        }
                        if ( v46 == 0xFFFFFF )
                        {
                          LODWORD(v61) = v40;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v61) )
                            __debugbreak();
                        }
                        HavokPhysics_GetRigidBodyLinAngVel((const Physics_WorldId)v40, v45, &linVel, &angVel);
                        v92 = 32.0 * linVel.m_quad.m128_f32[1];
                        v94 = angVel.m_quad.m128_f32[0];
                        v91 = 32.0 * linVel.m_quad.m128_f32[0];
                        v96 = angVel.m_quad.m128_f32[2];
                        v93 = 32.0 * linVel.m_quad.m128_f32[2];
                        v95 = angVel.m_quad.m128_f32[1];
                        MemFile_WriteData(v49, 0xCui64, &v91);
                        MemFile_WriteData(v49, 0xCui64, &v94);
                        v72[0] = Physics_IsRigidBodyActive((Physics_WorldId)v40, v45.m_serialAndIndex);
                        MemFile_WriteData(v49, 1ui64, v72);
                        ++v43;
                      }
                      while ( v43 < v42 );
                      v39 = v64;
                      v1 = v49;
                    }
                  }
                  v73[0] = *(_DWORD *)(v24 + 16) != -1;
                  MemFile_WriteData(v1, 1ui64, v73);
                  v50 = *(_DWORD *)(v24 + 16);
                  if ( v50 != -1 )
                  {
                    v51 = 3 * v39 + 4;
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v51 > 7 )
                    {
                      LODWORD(v61) = 3 * v39 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                        __debugbreak();
                    }
                    if ( !g_physicsClientWorldsCreated && 3 * v39 + 2 <= 5 )
                    {
                      LODWORD(v61) = 3 * v39 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                        __debugbreak();
                    }
                    if ( g_physicsServerWorldsCreated )
                    {
LABEL_218:
                      if ( (unsigned int)v51 > 7 )
                        goto LABEL_219;
                    }
                    else
                    {
                      if ( v51 >= 0 )
                      {
                        if ( v51 <= 1 )
                        {
                          LODWORD(v61) = 3 * v39 + 4;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                            __debugbreak();
                        }
                        goto LABEL_218;
                      }
LABEL_219:
                      LODWORD(v61) = 3 * v39 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                        __debugbreak();
                    }
                    v52 = HavokPhysics_GetConstWorld((Physics_WorldId)v51);
                    if ( !v52->world )
                    {
                      LODWORD(v61) = 3 * v39 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v61) )
                        __debugbreak();
                    }
                    v81[0] = HavokPhysicsInstanceManager_GetBodyCount(&v52->instanceManager, v50);
                    v53 = v81[0];
                    MemFile_WriteData(v1, 4ui64, v81);
                    for ( i = 0; i < v53; ++i )
                    {
                      v55 = *(_DWORD *)(v24 + 16);
                      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                        __debugbreak();
                      if ( (unsigned int)v51 > 7 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                          __debugbreak();
                      }
                      if ( v55 == -1 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v61) )
                          __debugbreak();
                      }
                      if ( !g_physicsClientWorldsCreated && (unsigned int)(v51 - 2) <= 5 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                          __debugbreak();
                      }
                      if ( !g_physicsServerWorldsCreated && (unsigned int)v51 <= 1 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                          __debugbreak();
                      }
                      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v85, (const Physics_WorldId)v51, v55, i)->m_serialAndIndex;
                      v57 = m_serialAndIndex & 0xFFFFFF;
                      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 205, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                        __debugbreak();
                      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
                        __debugbreak();
                      if ( (unsigned int)v51 > 7 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                          __debugbreak();
                      }
                      if ( v57 == 0xFFFFFF )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v61) )
                          __debugbreak();
                      }
                      if ( !g_physicsClientWorldsCreated && (unsigned int)(v51 - 2) <= 5 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v61) )
                          __debugbreak();
                      }
                      if ( !g_physicsServerWorldsCreated && (unsigned int)v51 <= 1 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v61) )
                          __debugbreak();
                      }
                      if ( (unsigned int)v51 > 7 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v61) )
                          __debugbreak();
                      }
                      if ( v57 == 0xFFFFFF )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v61) )
                          __debugbreak();
                      }
                      v58 = HavokPhysics_GetConstWorld((Physics_WorldId)v51)->world;
                      if ( !v58 )
                      {
                        LODWORD(v61) = v51;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v61) )
                          __debugbreak();
                      }
                      v59 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v58->getBodyTransform)(&v58->hknpWorldReader, m_serialAndIndex);
                      *(float *)v97 = 32.0 * v59[1].m[0].v[0];
                      *(float *)&v97[1] = 32.0 * v59[1].m[0].v[1];
                      *(float *)&v97[2] = 32.0 * v59[1].m[0].v[2];
                      Axis34ToQuat(v59, &v101);
                      MemFile_WriteData(v1, 0xCui64, v97);
                      MemFile_WriteData(v1, 0x10ui64, &v101);
                    }
                  }
                }
                v3 = v64;
                v11 = v62;
                goto LABEL_273;
              }
LABEL_274:
              Sys_ProfEndNamedEvent();
              v8 = v84;
              v62 = ++v11;
            }
            while ( (unsigned __int8)v11 < DYNENT_BASIS_COUNT );
            Sys_ProfEndNamedEvent();
            ++v3;
            ++v10;
            v64 = v3;
            v82 = v10;
            if ( v3 >= SLODWORD(cl_maxLocalClients) )
            {
              v5 = v77;
              break;
            }
          }
        }
        Sys_ProfEndNamedEvent();
        v3 = LOCAL_CLIENT_0;
      }
      ++v5;
      ++dynEntListIds;
      v77 = v5;
      v78 = dynEntListIds;
    }
    while ( v5 < (unsigned __int16)p );
  }
  Sys_ProfEndNamedEvent();
}

