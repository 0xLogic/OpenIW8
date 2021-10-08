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
  MemoryFile *v12; 
  const dvar_t *v13; 
  char enabled; 
  LocalClientNum_t v15; 
  unsigned __int16 v16; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId v18; 
  unsigned __int16 v19; 
  int v20; 
  unsigned __int64 v21; 
  char *v22; 
  __int64 v23; 
  DynEntityBasis v24; 
  unsigned int v25; 
  DynEntityListId v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  DynEntityList *DynEntityList; 
  bool v32; 
  __int64 v33; 
  char v34; 
  const DynEntityDef *Def; 
  unsigned __int16 v36; 
  DynEntityClient *ClientFromClientId; 
  unsigned int v38; 
  char v39; 
  char v40; 
  const DynEntityDef *v41; 
  const DynEntityDef *v42; 
  __int64 v43; 
  unsigned __int16 v44; 
  __int64 v45; 
  unsigned __int16 v46; 
  unsigned __int8 numParts; 
  unsigned __int8 v49; 
  __int64 v50; 
  DynEnt_ExtraPosePart *v51; 
  unsigned int posePart1FirstIndex; 
  unsigned __int8 v53; 
  unsigned __int8 *p_detailBodyToBoneMap0; 
  unsigned int v55; 
  const char *CString; 
  XAssetHeader v57; 
  unsigned __int16 v58; 
  bool v59; 
  unsigned __int16 flags; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  unsigned __int16 v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  unsigned __int16 v68; 
  char v69; 
  unsigned __int16 v70; 
  unsigned __int16 v71; 
  unsigned __int16 v72; 
  unsigned __int16 v73; 
  unsigned __int16 v74; 
  char v75; 
  bool v76; 
  bool v77; 
  char v78; 
  unsigned int v79; 
  const XModel *activeModel; 
  const PhysicsAsset *physicsAsset; 
  int physicsShapeOverrideIdx; 
  XModelDetailCollision *detailCollision; 
  const XModel *v84; 
  const cmodel_t *BrushModel; 
  unsigned int v86; 
  MemoryFile *v87; 
  __int32 v88; 
  int v89; 
  unsigned int physicsSystemId; 
  const HavokPhysicsWorld *ConstWorld; 
  signed int i; 
  unsigned int v93; 
  hknpBodyId v94; 
  int v95; 
  char v106; 
  hknpWorld *world; 
  hknpWorldWriter_vtbl *v134; 
  hknpWorldWriter *v135; 
  char v136; 
  __int32 v137; 
  int v138; 
  unsigned int physicsSystemDetailId; 
  const HavokPhysicsWorld *v140; 
  signed int v141; 
  unsigned int v142; 
  unsigned int m_serialAndIndex; 
  int v144; 
  Physics_WorldId v155; 
  char *fmt; 
  __int64 associateScriptables; 
  int associateScriptablesa; 
  XModel *detailModel; 
  __int64 useInitialPose; 
  __int64 matchPose; 
  DynEntityBasis v162; 
  unsigned __int16 v163; 
  LocalClientNum_t localClientNum; 
  char v165; 
  __int64 p; 
  DynEntityClient *v167; 
  int v168; 
  char v169; 
  unsigned __int8 v170; 
  bool v171; 
  unsigned __int8 v172; 
  bool v173; 
  char v174; 
  char v175; 
  char v176; 
  char v177[4]; 
  int v178; 
  unsigned int v179; 
  MemoryFile *memFilea; 
  __int64 v181; 
  unsigned int v182; 
  unsigned int v183; 
  int v184; 
  __int64 v185; 
  int v186; 
  int v187; 
  unsigned int v188; 
  int v189; 
  int v190; 
  int v191; 
  __int64 v192; 
  hknpBodyId result; 
  hknpBodyId v194; 
  __int64 v195; 
  char *v196; 
  vec3_t position; 
  hkVector4f hkPosition; 
  int v199[4]; 
  int v200[4]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf hkOrientation; 

  v12 = memFile;
  memFilea = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 239, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v13 = DCONST_DVARBOOL_dynEnt_spatialEnabled;
  if ( !DCONST_DVARBOOL_dynEnt_spatialEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  enabled = v13->current.enabled;
  v165 = enabled;
  MemFile_ReadData(v12, 2ui64, &p);
  v15 = LOCAL_CLIENT_0;
  v16 = p;
  dynEntityListsCount = 0;
  if ( cm.mapEnts )
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
  if ( (_WORD)p != dynEntityListsCount )
  {
    v18 = cm.mapEnts ? cm.mapEnts->dynEntityListsCount : 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 247, ASSERT_TYPE_ASSERT, "( listCount ) == ( DynEnt_GetExpectedDynEntityListCount() )", "%s == %s\n\t%u, %u", "listCount", "DynEnt_GetExpectedDynEntityListCount()", (unsigned __int16)p, (unsigned __int16)v18) )
      __debugbreak();
  }
  v184 = 0;
  if ( v16 )
  {
    __asm
    {
      vmovaps [rsp+220h+var_38+8], xmm6
      vmovaps [rsp+220h+var_48+8], xmm7
      vmovaps [rsp+220h+var_58+8], xmm8
      vmovaps [rsp+220h+var_68+8], xmm9
      vmovaps [rsp+220h+var_78+8], xmm10
      vmovaps [rsp+220h+var_88+8], xmm11
      vmovaps [rsp+220h+var_98+8], xmm12
      vmovaps [rsp+220h+var_A8+8], xmm13
      vmovaps [rsp+220h+var_B8+8], xmm14
      vmovaps [rsp+220h+var_C8+8], xmm15
    }
    v188 = v16;
    while ( 1 )
    {
      MemFile_ReadData(v12, 2ui64, &p);
      v19 = p;
      MemFile_ReadData(v12, 4ui64, &v189);
      v20 = v189;
      if ( v19 >= 0x600u )
      {
        LODWORD(detailModel) = 1536;
        LODWORD(associateScriptables) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v21 = (unsigned __int64)v19 << 6;
      v22 = (char *)g_dynEntityLists + v21;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v21) == DEFAULT_DYNENTITY_LIST_ID )
        v22 = NULL;
      v196 = v22;
      if ( v22 )
        break;
      if ( v20 )
      {
        LODWORD(useInitialPose) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 257, ASSERT_TYPE_ASSERT, "( dynEntTotalCount ) == ( 0 )", "%s == %s\n\t%u, %u", "dynEntTotalCount", "0", useInitialPose, 0i64) )
          __debugbreak();
      }
LABEL_403:
      if ( ++v184 >= v188 )
      {
        enabled = v165;
        __asm
        {
          vmovaps xmm15, [rsp+220h+var_C8+8]
          vmovaps xmm14, [rsp+220h+var_B8+8]
          vmovaps xmm13, [rsp+220h+var_A8+8]
          vmovaps xmm12, [rsp+220h+var_98+8]
          vmovaps xmm11, [rsp+220h+var_88+8]
          vmovaps xmm10, [rsp+220h+var_78+8]
          vmovaps xmm9, [rsp+220h+var_68+8]
          vmovaps xmm8, [rsp+220h+var_58+8]
          vmovaps xmm7, [rsp+220h+var_48+8]
          vmovaps xmm6, [rsp+220h+var_38+8]
        }
        goto LABEL_405;
      }
    }
    if ( *((_DWORD *)v22 + 5) != v20 )
    {
      LODWORD(matchPose) = v20;
      LODWORD(useInitialPose) = *((_DWORD *)v22 + 5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 261, ASSERT_TYPE_ASSERT, "( dynEntityList->dynEntCountTotal ) == ( dynEntTotalCount )", "%s == %s\n\t%u, %u", "dynEntityList->dynEntCountTotal", "dynEntTotalCount", useInitialPose, matchPose) )
        __debugbreak();
    }
    if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 264, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
      __debugbreak();
    v23 = 0i64;
    localClientNum = LOCAL_CLIENT_0;
    v181 = 0i64;
    if ( SLODWORD(cl_maxLocalClients) <= 0 )
      goto LABEL_403;
LABEL_33:
    v24 = DYNENT_BASIS_MODEL;
    v162 = DYNENT_BASIS_MODEL;
    while ( 1 )
    {
      MemFile_ReadData(v12, 4ui64, &v183);
      v25 = v183;
      v195 = (unsigned __int8)v24;
      if ( v183 != *(_DWORD *)&v22[4 * (unsigned __int8)v24 + 12] )
      {
        LODWORD(matchPose) = *(_DWORD *)&v22[4 * (unsigned __int8)v24 + 12];
        LODWORD(useInitialPose) = v183;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 272, ASSERT_TYPE_ASSERT, "( dynEntCount ) == ( dynEntityList->dynEntCount[basis] )", "%s == %s\n\t%u, %u", "dynEntCount", "dynEntityList->dynEntCount[basis]", useInitialPose, matchPose) )
          __debugbreak();
      }
      if ( v25 )
        break;
LABEL_401:
      v162 = ++v24;
      if ( (unsigned __int8)v24 >= DYNENT_BASIS_COUNT )
      {
        v181 = ++v23;
        if ( ++localClientNum >= SLODWORD(cl_maxLocalClients) )
          goto LABEL_403;
        goto LABEL_33;
      }
    }
    v26 = (__int16)p;
    v27 = 0;
    v182 = 0;
    v28 = (unsigned __int16)p << 19;
    v29 = (unsigned __int16)p;
    v186 = v28;
    v192 = 0i64;
    v187 = (unsigned __int16)p;
    while ( 1 )
    {
      if ( (unsigned __int16)v26 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(detailModel) = 1536;
        LODWORD(associateScriptables) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      if ( v27 >= 0x7FFFF )
      {
        LODWORD(detailModel) = 0x7FFFF;
        LODWORD(associateScriptables) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v30 = v27 | v28;
      v179 = v30;
      if ( (unsigned __int8)v24 >= DYNENT_BASIS_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = (unsigned __int8)v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      DynEntityList = DynEnt_GetDynEntityList(v26);
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v27 >= DynEntityList->dynEntCount[(unsigned __int8)v24] )
      {
        LODWORD(detailModel) = DynEntityList->dynEntCount[(unsigned __int8)v24];
        LODWORD(associateScriptables) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v32 = &DynEntityList->dynEntDefList[(unsigned __int8)v24][v192] == NULL;
      v33 = (__int64)&DynEntityList->dynEntDefList[(unsigned __int8)v24][v192];
      v185 = v33;
      if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 290, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( *(_BYTE *)(v33 + 50) == 4 )
        goto LABEL_399;
      MemFile_ReadData(v12, 1ui64, &v169);
      *(_BYTE *)(v33 + 78) = v169;
      if ( *(_WORD *)(v33 + 2 * v23 + 56) != 0xFFFF )
      {
        v34 = *(_BYTE *)(v33 + 51);
        if ( v34 != -1 && v34 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 303, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] == 0xFFFF || !DynEntDef_IsSpatial(dynEntDef))", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID || !DynEntDef_IsSpatial(dynEntDef)") )
          __debugbreak();
      }
      MemFile_ReadData(v12, 2ui64, &v163);
      if ( !v163 )
      {
        if ( *(_BYTE *)(v33 + 51) == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 310, ASSERT_TYPE_ASSERT, "(dynEntDef->priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE)", (const char *)&queryFormat, "dynEntDef->priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE") )
          __debugbreak();
        v168 = v30 & 0x7FFFF;
        LOWORD(v178) = v30 >> 19;
        Def = DynEnt_GetDef((DynEntityListId)v178, v30 & 0x7FFFF, v24);
        if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 344, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        v36 = Def->clientId[v23];
        if ( v36 == 0xFFFF )
          ClientFromClientId = NULL;
        else
          ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, v36, v24);
        if ( *(_BYTE *)(v33 + 51) == 4 )
        {
          if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 314, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
            __debugbreak();
          v38 = v30;
          v39 = localClientNum;
          DynEntCL_RemoveEntity(localClientNum, v38, v24, 0, 1);
          ClientFromClientId = NULL;
          goto LABEL_392;
        }
        if ( ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 320, ASSERT_TYPE_ASSERT, "(dynEntClient == nullptr)", (const char *)&queryFormat, "dynEntClient == nullptr") )
          __debugbreak();
        goto LABEL_391;
      }
      if ( *(_WORD *)(v33 + 2 * v23 + 56) == 0xFFFF )
      {
        v40 = *(_BYTE *)(v33 + 51);
        if ( (v40 == -1 || v40 == 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 328, ASSERT_TYPE_ASSERT, "(DynEntDef_IsSpatial( dynEntDef ))", (const char *)&queryFormat, "DynEntDef_IsSpatial( dynEntDef )") )
          __debugbreak();
        DynEntCL_AddHiddenEntity(localClientNum, v30, v24);
      }
      v168 = v30 & 0x7FFFF;
      LOWORD(v178) = v30 >> 19;
      v41 = DynEnt_GetDef((DynEntityListId)v178, v30 & 0x7FFFF, v24);
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( v41->clientId[v23] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v167 = DynEnt_GetClientFromClientId(localClientNum, v41->clientId[v23], v162);
      ClientFromClientId = v167;
      v168 = v30 & 0x7FFFF;
      LOWORD(v178) = v30 >> 19;
      v42 = DynEnt_GetDef((DynEntityListId)v178, v30 & 0x7FFFF, v162);
      if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v43 = v181;
      if ( v42->clientId[v181] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v44 = v42->clientId[v43];
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      if ( (unsigned __int8)v162 >= DYNENT_BASIS_COUNT )
      {
        LODWORD(detailModel) = 2;
        LODWORD(associateScriptables) = (unsigned __int8)v162;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      v45 = v195 + 2 * v43;
      if ( !g_dynEntPoseLists[0][v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
        __debugbreak();
      v46 = g_dynEntClientEntsAllocCount[0][v45];
      if ( v44 >= v46 )
      {
        LODWORD(detailModel) = v46;
        LODWORD(associateScriptables) = v44;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
          __debugbreak();
      }
      _RSI = &g_dynEntPoseLists[0][v45][v44];
      if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 334, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 335, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
        __debugbreak();
      MemFile_ReadData(v12, 0x1Cui64, &_RSI->pose);
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+24h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+28h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+2Ch], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+30h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+34h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(v12);
      __asm { vmovss  dword ptr [rsi+38h], xmm0 }
      *(_QWORD *)&_RSI->lastGpuLightGridRequest.lgvFrame = -1i64;
      *(_QWORD *)&_RSI->lastGpuLightGridRequest.lgvNumProbes = 0i64;
      MemFile_ReadData(v12, 1ui64, &v170);
      numParts = _RSI->numParts;
      if ( v170 != numParts )
      {
        LODWORD(detailModel) = numParts;
        LODWORD(associateScriptables) = v170;
        LODWORD(fmt) = (unsigned __int8)v162;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14432C570, 6396i64, v30, fmt, associateScriptables, detailModel);
      }
      MemFile_ReadData(v12, 1ui64, &v171);
      v49 = 0;
      _RSI->detailBodyToBoneMapCached = v171;
      if ( _RSI->numParts )
      {
        v50 = v181;
        do
        {
          if ( v49 )
          {
            posePart1FirstIndex = _RSI->posePart1FirstIndex;
            if ( posePart1FirstIndex + v49 - 1 >= g_dynEntExtraPosePartsAllocCount[v50] )
            {
              LODWORD(detailModel) = g_dynEntExtraPosePartsAllocCount[v50];
              LODWORD(associateScriptables) = posePart1FirstIndex + v49 - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                __debugbreak();
            }
            v51 = &g_dynEntPoseExtraParts[v50][v49 - 1 + _RSI->posePart1FirstIndex];
          }
          else
          {
            v51 = (DynEnt_ExtraPosePart *)_RSI;
          }
          if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 354, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          MemFile_ReadData(v12, 0x1Cui64, v51);
          if ( _RSI->detailBodyToBoneMapCached )
          {
            v53 = _RSI->numParts;
            if ( v49 >= v53 )
            {
              LODWORD(detailModel) = v53;
              LODWORD(associateScriptables) = v49;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 277, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                __debugbreak();
            }
            if ( v49 )
            {
              v55 = _RSI->posePart1FirstIndex;
              if ( v55 + v49 - 1 >= g_dynEntExtraPosePartsAllocCount[v50] )
              {
                LODWORD(detailModel) = g_dynEntExtraPosePartsAllocCount[v50];
                LODWORD(associateScriptables) = v55 + v49 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 283, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", associateScriptables, detailModel) )
                  __debugbreak();
              }
              p_detailBodyToBoneMap0 = &g_dynEntPoseExtraDetailBodyToBoneMap[v50][v49 - 1 + _RSI->posePart1FirstIndex];
            }
            else
            {
              p_detailBodyToBoneMap0 = &_RSI->detailBodyToBoneMap0;
            }
            if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 360, ASSERT_TYPE_ASSERT, "(detailToBodyBoneIdx)", (const char *)&queryFormat, "detailToBodyBoneIdx") )
              __debugbreak();
            MemFile_ReadData(v12, 1ui64, &v172);
            *p_detailBodyToBoneMap0 = v172;
          }
          ++v49;
        }
        while ( v49 < _RSI->numParts );
        v30 = v179;
        ClientFromClientId = v167;
        v33 = v185;
      }
      MemFile_ReadData(v12, 1ui64, &v173);
      _RSI->cachedActive = v173;
      MemFile_ReadData(v12, 1ui64, &v174);
      v32 = v174 == 0;
      ClientFromClientId->activeModel = NULL;
      if ( !v32 )
      {
        CString = MemFile_ReadCString(v12);
        v57.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, CString, 0).physicsLibrary;
        if ( !v57.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 373, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        ClientFromClientId->activeModel = v57.model;
      }
      v58 = v163;
      v59 = (v163 & 0x20) != 0;
      if ( (v163 & 0x20) != 0 )
      {
        flags = ClientFromClientId->flags;
        if ( (flags & 0x20) == 0 )
        {
          if ( (flags & 0x100) == 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 381, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 8))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_HIDDEN") )
              __debugbreak();
            v58 = v163;
          }
          if ( (v58 & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 382, ASSERT_TYPE_ASSERT, "((readFlags & (1 << 8)) == 0)", (const char *)&queryFormat, "(readFlags & DYNENT_CL_HIDDEN) == 0") )
            __debugbreak();
          DynEntCL_AddEntity(localClientNum, v30, v162, 1, 1, 0);
          if ( (ClientFromClientId->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 385, ASSERT_TYPE_ASSERT, "((dynEntClient->flags & (1 << 1)) != 0)", (const char *)&queryFormat, "(dynEntClient->flags & DYNENT_CL_PHYSICS_SETUP) != 0") )
            __debugbreak();
          LOBYTE(v58) = v163;
        }
      }
      v61 = ClientFromClientId->flags;
      if ( (((unsigned __int8)v58 ^ (unsigned __int8)v61) & 0x20) != 0 )
      {
        LODWORD(matchPose) = v58 & 0x20;
        LODWORD(useInitialPose) = v61 & 0x20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 387, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 5) ) == ( readFlags & (1 << 5) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_NO_EVICT", "readFlags & DYNENT_CL_NO_EVICT", useInitialPose, matchPose) )
          __debugbreak();
        LOBYTE(v58) = v163;
      }
      v62 = ClientFromClientId->flags;
      if ( (v62 & 0x100) != 0 )
      {
        v63 = v62 | v58 & 4;
        ClientFromClientId->flags = v63;
        v64 = v63 | v163 & 8;
        ClientFromClientId->flags = v64;
        v65 = v64 | v163 & 0x10;
        ClientFromClientId->flags = v65;
        v66 = v65 | v163 & 0x200;
        ClientFromClientId->flags = v66;
        v67 = v66 | v163 & 0x400;
        ClientFromClientId->flags = v67;
        v68 = v67;
        v69 = v67;
      }
      else
      {
        v70 = v62 | v58 & 8;
        ClientFromClientId->flags = v70;
        if ( (((unsigned __int8)v163 ^ (unsigned __int8)v70) & 4) != 0 )
        {
          LODWORD(matchPose) = v163 & 4;
          LODWORD(useInitialPose) = v70 & 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 404, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 2) ) == ( readFlags & (1 << 2) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_LINKEDTOENTITY", "readFlags & DYNENT_CL_LINKEDTOENTITY", useInitialPose, matchPose) )
            __debugbreak();
        }
        v71 = ClientFromClientId->flags;
        if ( (((unsigned __int8)v163 ^ (unsigned __int8)v71) & 0x10) != 0 )
        {
          LODWORD(matchPose) = v163 & 0x10;
          LODWORD(useInitialPose) = v71 & 0x10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 405, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 4) ) == ( readFlags & (1 << 4) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_TRANSIENT", "readFlags & DYNENT_CL_TRANSIENT", useInitialPose, matchPose) )
            __debugbreak();
        }
        v72 = ClientFromClientId->flags;
        if ( ((v163 ^ v72) & 0x200) != 0 )
        {
          LODWORD(matchPose) = v163 & 0x200;
          LODWORD(useInitialPose) = v72 & 0x200;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 406, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 9) ) == ( readFlags & (1 << 9) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_DISTANT_SHADOWS", "readFlags & DYNENT_CL_DISTANT_SHADOWS", useInitialPose, matchPose) )
            __debugbreak();
        }
        v73 = ClientFromClientId->flags;
        if ( ((v163 ^ v73) & 0x400) != 0 )
        {
          LODWORD(matchPose) = v163 & 0x400;
          LODWORD(useInitialPose) = v73 & 0x400;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 407, ASSERT_TYPE_ASSERT, "( dynEntClient->flags & (1 << 10) ) == ( readFlags & (1 << 10) )", "%s == %s\n\t%u, %u", "dynEntClient->flags & DYNENT_CL_NO_SPOTSHADOWS", "readFlags & DYNENT_CL_NO_SPOTSHADOWS", useInitialPose, matchPose) )
            __debugbreak();
        }
        v68 = ClientFromClientId->flags;
        LOBYTE(v67) = ClientFromClientId->flags;
        v69 = v68;
      }
      if ( (((unsigned __int8)v67 ^ (unsigned __int8)v163) & 1) != 0 )
      {
        if ( (v69 & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 415, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 5))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_NO_EVICT") )
          __debugbreak();
        if ( (v163 & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 416, ASSERT_TYPE_ASSERT, "(readFlags & (1 << 5))", (const char *)&queryFormat, "readFlags & DYNENT_CL_NO_EVICT") )
          __debugbreak();
        v74 = ClientFromClientId->flags;
        if ( v59 )
          v68 = v74 | 1;
        else
          v68 = v74 & 0xFFFE;
        ClientFromClientId->flags = v68;
      }
      v75 = (v68 & 2) != 0;
      v76 = (v163 & 2) != 0;
      v77 = (v163 & 0x1000) != 0;
      if ( (v68 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 431, ASSERT_TYPE_ASSERT, "((dynEntClient->flags & (1 << 12)) == 0)", (const char *)&queryFormat, "(dynEntClient->flags & DYNENT_CL_INTERNAL_COLLISION_DISABLED) == 0") )
        __debugbreak();
      v78 = v76 && !v77;
      v32 = v78 == v75;
      v24 = v162;
      if ( v32 )
      {
        v39 = localClientNum;
      }
      else
      {
        if ( v78 )
        {
          if ( v162 )
          {
            if ( v162 != DYNENT_BASIS_BRUSH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 457, ASSERT_TYPE_ASSERT, "(basis == DYNENT_BASIS_BRUSH)", (const char *)&queryFormat, "basis == DYNENT_BASIS_BRUSH") )
              __debugbreak();
            BrushModel = CM_GetBrushModel(*(unsigned __int16 *)(v33 + 66));
            if ( !BrushModel )
            {
              LODWORD(detailModel) = *(unsigned __int16 *)(v33 + 66);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 459, ASSERT_TYPE_ASSERT, "(cmodel)", "%s\n\tDynEnt: missing brush model for dynEnt brush %i.", "cmodel", detailModel) )
                __debugbreak();
            }
            physicsAsset = BrushModel->physicsAsset;
            v15 = LOCAL_CLIENT_0;
            physicsShapeOverrideIdx = BrushModel->physicsShapeOverrideIdx;
            activeModel = NULL;
          }
          else
          {
            activeModel = ClientFromClientId->activeModel;
            v15 = LOCAL_CLIENT_0;
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
                  v84 = ClientFromClientId->activeModel;
LABEL_220:
                  associateScriptablesa = physicsShapeOverrideIdx;
                  v86 = v30;
                  v39 = localClientNum;
                  DynEnt_SetupPhysics(localClientNum, v86, v162, activeModel, physicsAsset, associateScriptablesa, v84, 0, 0, 1);
                  goto LABEL_223;
                }
              }
            }
          }
          v84 = NULL;
          goto LABEL_220;
        }
        v79 = v30;
        v39 = localClientNum;
        DynEnt_ShutdownPhysics(localClientNum, v79, v162, 1);
      }
      v15 = LOCAL_CLIENT_0;
LABEL_223:
      ClientFromClientId->flags |= v163 & 0x1000;
      ClientFromClientId->flags |= v163 & 0x2000;
      if ( (v163 & 2) != 0 )
      {
        v87 = memFilea;
        MemFile_ReadData(memFilea, 1ui64, &v175);
        if ( !v175 )
        {
          if ( ClientFromClientId->physicsSystemId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 485, ASSERT_TYPE_ASSERT, "(hasPhysicsSystemId || (dynEntClient->physicsSystemId == 0xFFFFFFFF))", (const char *)&queryFormat, "hasPhysicsSystemId || (dynEntClient->physicsSystemId == PHYSICSINSTANCEID_INVALID)") )
            __debugbreak();
          goto LABEL_331;
        }
        v88 = 3 * localClientNum + 3;
        MemFile_ReadData(v87, 4ui64, &v190);
        v89 = v190;
        physicsSystemId = ClientFromClientId->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v88 > 7 )
        {
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v88 - 2) <= 5 )
        {
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
        {
LABEL_246:
          if ( (unsigned int)v88 > 7 )
            goto LABEL_247;
        }
        else
        {
          if ( v88 >= 0 )
          {
            if ( v88 <= 1 )
            {
              LODWORD(detailModel) = v88;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                __debugbreak();
            }
            goto LABEL_246;
          }
LABEL_247:
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", detailModel) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v88);
        if ( !ConstWorld->world )
        {
          LODWORD(detailModel) = v88;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", detailModel) )
            __debugbreak();
        }
        if ( v89 != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, physicsSystemId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 491, ASSERT_TYPE_ASSERT, "(numMainBodies == (int)Physics_GetNumRigidBodys( mainWorldId, dynEntClient->physicsSystemId ))", (const char *)&queryFormat, "numMainBodies == (int)Physics_GetNumRigidBodys( mainWorldId, dynEntClient->physicsSystemId )") )
          __debugbreak();
        v15 = LOCAL_CLIENT_0;
        for ( i = 0; i < v89; ++i )
        {
          v93 = ClientFromClientId->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v88 > 7 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v93 == -1 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v88 - 2) <= 5 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v88 <= 1 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
              __debugbreak();
          }
          v94.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v88, v93, i)->m_serialAndIndex;
          v95 = v94.m_serialAndIndex & 0xFFFFFF;
          if ( (v94.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 496, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm7, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm8, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm9, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm10, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm11, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm12, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm13, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm14, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovaps xmm15, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovss  dword ptr [rsp+220h+var_1B0], xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovss  [rbp+120h+var_19C], xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(v87);
          __asm { vmovss  [rbp+120h+var_1A0], xmm0 }
          MemFile_ReadData(v87, 1ui64, &v176);
          v106 = v176;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v88 > 7 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v95 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", detailModel) )
              __debugbreak();
          }
          __asm { vmovss  [rsp+220h+var_1B8], xmm6 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_412;
          __asm { vmovss  [rsp+220h+var_1B8], xmm7 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_412;
          __asm { vmovss  [rsp+220h+var_1B8], xmm8 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
          {
LABEL_412:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
              __debugbreak();
          }
          __asm { vmovss  [rsp+220h+var_1B8], xmm9 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_413;
          __asm { vmovss  [rsp+220h+var_1B8], xmm10 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_413;
          __asm { vmovss  [rsp+220h+var_1B8], xmm11 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_413;
          __asm { vmovss  [rsp+220h+var_1B8], xmm12 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
          {
LABEL_413:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm2, cs:__real@3d000000
            vmulss  xmm0, xmm6, xmm2
            vmovss  dword ptr [rbp+120h+hkPosition.m_quad], xmm0
            vmulss  xmm0, xmm8, xmm2
            vmulss  xmm1, xmm7, xmm2
            vmovss  dword ptr [rbp+120h+hkPosition.m_quad+8], xmm0
            vmovss  dword ptr [rbp+120h+hkPosition.m_quad+4], xmm1
            vxorps  xmm1, xmm1, xmm1
            vmovss  dword ptr [rbp+120h+hkPosition.m_quad+0Ch], xmm1
            vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
            vmovaps xmm5, xmm9
            vinsertps xmm5, xmm5, xmm10, 10h
            vinsertps xmm5, xmm5, xmm11, 20h ; ' '
            vinsertps xmm5, xmm5, xmm12, 30h ; '0'
            vdpps   xmm0, xmm5, xmm5, 0FFh
            vrsqrtps xmm4, xmm0
            vmovups xmmword ptr [rbp+120h+hkOrientation.m_vec.m_quad], xmm0
            vmulps  xmm0, xmm4, xmm0
            vmulps  xmm2, xmm0, xmm4
            vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
            vsubps  xmm3, xmm1, xmm2
            vmulps  xmm2, xmm3, xmm0
            vmulps  xmm1, xmm2, xmm5
            vmovups xmmword ptr [rbp+120h+hkOrientation.m_vec.m_quad], xmm1
          }
          HavokPhysics_WarpRigidBodyTo((const Physics_WorldId)v88, v94, &hkPosition, &hkOrientation, 0, v106);
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v88 > 7 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v95 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", detailModel) )
              __debugbreak();
          }
          __asm { vmovss  [rsp+220h+var_1B8], xmm13 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_414;
          __asm { vmovss  [rsp+220h+var_1B8], xmm14 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
            goto LABEL_414;
          __asm { vmovss  [rsp+220h+var_1B8], xmm15 }
          if ( ((unsigned int)v167 & 0x7F800000) == 2139095040 )
          {
LABEL_414:
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", detailModel) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rsp+220h+var_1B0]
            vmovss  xmm7, [rbp+120h+var_19C]
            vmovss  xmm8, [rbp+120h+var_1A0]
            vmovss  dword ptr [rsp+220h+var_1B0], xmm6
          }
          if ( (v168 & 0x7F800000) == 2139095040 )
            goto LABEL_415;
          __asm { vmovss  dword ptr [rsp+220h+var_1B0], xmm7 }
          if ( (v168 & 0x7F800000) == 2139095040 )
            goto LABEL_415;
          __asm { vmovss  dword ptr [rsp+220h+var_1B0], xmm8 }
          if ( (v168 & 0x7F800000) == 2139095040 )
          {
LABEL_415:
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", detailModel) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm9, cs:__real@3d000000
            vmulss  xmm0, xmm13, xmm9
            vmovss  [rbp+120h+var_100], xmm0
            vmulss  xmm0, xmm15, xmm9
            vmovss  [rbp+120h+var_F8], xmm0
            vxorps  xmm0, xmm0, xmm0
            vmulss  xmm1, xmm14, xmm9
            vmovss  [rbp+120h+var_F4], xmm0
            vmovss  [rbp+120h+var_104], xmm0
            vmovss  [rbp+120h+var_FC], xmm1
            vmovss  [rbp+120h+var_110], xmm6
            vmovss  [rbp+120h+var_10C], xmm7
            vmovss  [rbp+120h+var_108], xmm8
          }
          if ( (unsigned int)v88 > 7 )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( v95 == 0xFFFFFF )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", detailModel) )
              __debugbreak();
          }
          world = HavokPhysics_GetMutableWorld((Physics_WorldId)v88)->world;
          if ( !world )
          {
            LODWORD(detailModel) = v88;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", detailModel) )
              __debugbreak();
          }
          v134 = world->hknpWorldWriter::__vftable;
          v135 = &world->hknpWorldWriter;
          v15 = LOCAL_CLIENT_0;
          ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))v134->setBodyVelocity)(v135, v94.m_serialAndIndex, v200, v199, 0);
          if ( v106 )
            Physics_ActivateBody((Physics_WorldId)v88, v94.m_serialAndIndex);
          v87 = memFilea;
        }
        v33 = v185;
LABEL_331:
        MemFile_ReadData(v87, 1ui64, v177);
        v136 = v177[0];
        if ( v177[0] != (ClientFromClientId->physicsSystemDetailId != -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 524, ASSERT_TYPE_ASSERT, "(hasPhysicsSystemDetailId == (dynEntClient->physicsSystemDetailId != 0xFFFFFFFF))", (const char *)&queryFormat, "hasPhysicsSystemDetailId == (dynEntClient->physicsSystemDetailId != PHYSICSINSTANCEID_INVALID)") )
          __debugbreak();
        if ( v136 )
        {
          v137 = 3 * localClientNum + 4;
          MemFile_ReadData(v87, 4ui64, &v191);
          v138 = v191;
          physicsSystemDetailId = ClientFromClientId->physicsSystemDetailId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v137 > 7 )
          {
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( physicsSystemDetailId == -1 )
          {
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v137 - 2) <= 5 )
          {
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
              __debugbreak();
          }
          if ( g_physicsServerWorldsCreated )
          {
LABEL_353:
            if ( (unsigned int)v137 > 7 )
              goto LABEL_354;
          }
          else
          {
            if ( v137 >= 0 )
            {
              if ( v137 <= 1 )
              {
                LODWORD(detailModel) = v137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                  __debugbreak();
              }
              goto LABEL_353;
            }
LABEL_354:
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
              __debugbreak();
          }
          if ( physicsSystemDetailId == -1 )
          {
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", detailModel) )
              __debugbreak();
          }
          v140 = HavokPhysics_GetConstWorld((Physics_WorldId)v137);
          if ( !v140->world )
          {
            LODWORD(detailModel) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", detailModel) )
              __debugbreak();
          }
          if ( v138 != HavokPhysicsInstanceManager_GetBodyCount(&v140->instanceManager, physicsSystemDetailId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 529, ASSERT_TYPE_ASSERT, "(numDetailBodies == (int)Physics_GetNumRigidBodys( detailWorldId, dynEntClient->physicsSystemDetailId ))", (const char *)&queryFormat, "numDetailBodies == (int)Physics_GetNumRigidBodys( detailWorldId, dynEntClient->physicsSystemDetailId )") )
            __debugbreak();
          v12 = memFilea;
          v141 = 0;
          if ( v138 > 0 )
          {
            do
            {
              v142 = ClientFromClientId->physicsSystemDetailId;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (unsigned int)v137 > 7 )
              {
                LODWORD(detailModel) = v137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", detailModel) )
                  __debugbreak();
              }
              if ( v142 == -1 )
              {
                LODWORD(detailModel) = v137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModel) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated && (unsigned int)(v137 - 2) <= 5 )
              {
                LODWORD(detailModel) = v137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", detailModel) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated && (unsigned int)v137 <= 1 )
              {
                LODWORD(detailModel) = v137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModel) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v194, (const Physics_WorldId)v137, v142, v141)->m_serialAndIndex;
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 534, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                __debugbreak();
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+position], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+position+4], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+position+8], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+orientationAsQuat], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+orientationAsQuat+4], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+orientationAsQuat+8], xmm0 }
              *(double *)&_XMM0 = MemFile_ReadFloat(v12);
              __asm { vmovss  dword ptr [rbp+120h+orientationAsQuat+0Ch], xmm0 }
              Physics_WarpRigidBodyTo((const Physics_WorldId)v137, m_serialAndIndex, &position, &orientationAsQuat, 0, 1);
              ++v141;
            }
            while ( v141 < v138 );
            v33 = v185;
          }
          v15 = LOCAL_CLIENT_0;
        }
        else
        {
          v12 = memFilea;
        }
        v24 = v162;
LABEL_391:
        v39 = localClientNum;
      }
LABEL_392:
      if ( v165 )
      {
        if ( ClientFromClientId && (ClientFromClientId->flags & 0x20) != 0 )
          v144 = *(unsigned __int8 *)(v33 + 48) | (1 << v39);
        else
          v144 = *(unsigned __int8 *)(v33 + 48) & ~(1 << v39);
        *(_BYTE *)(v33 + 48) = v144;
      }
      v23 = v181;
LABEL_399:
      ++v192;
      v27 = v182 + 1;
      v26 = (__int16)p;
      v28 = v186;
      v29 = v187;
      v182 = v27;
      if ( v27 >= v183 )
      {
        v22 = v196;
        goto LABEL_401;
      }
    }
  }
LABEL_405:
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v155 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
    do
    {
      if ( enabled )
        DynEntCL_Spatial_PostLoad(v15);
      Physics_UpdateBroadphase(v155, 1);
      DynEntCL_VerifyClientLists(v15++);
      v155 += 3;
    }
    while ( v15 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
DynEnt_WriteSaveGame
==============
*/
void DynEnt_WriteSaveGame(MemoryFile *memFile)
{
  MemoryFile *v4; 
  char v5; 
  LocalClientNum_t v6; 
  DynEntityListId *dynEntListIds; 
  unsigned int v8; 
  DynEntityListId v11; 
  unsigned __int64 v12; 
  char *v13; 
  int v14; 
  __int64 v15; 
  DynEntityBasis v16; 
  __int64 v17; 
  char *v18; 
  unsigned int v19; 
  DynEntityListId v20; 
  unsigned int v21; 
  DynEntityListId v22; 
  DynEntityList *DynEntityList; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  unsigned int v27; 
  const DynEntityDef *Def; 
  __int64 v29; 
  const DynEntityDef *v30; 
  unsigned __int16 v31; 
  __int64 v32; 
  unsigned __int16 v33; 
  DynEntityPose *v34; 
  unsigned __int16 *p_flags; 
  unsigned __int8 v36; 
  DynEnt_ExtraPosePart *v37; 
  unsigned int posePart1FirstIndex; 
  unsigned __int8 numParts; 
  char *p_detailBodyToBoneMap0; 
  unsigned int v41; 
  const char **v42; 
  unsigned int v43; 
  unsigned int v44; 
  int v45; 
  const HavokPhysicsWorld *ConstWorld; 
  int v47; 
  signed int v48; 
  unsigned int v49; 
  hknpBodyId v50; 
  int v51; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v54; 
  MemoryFile *v58; 
  unsigned int v64; 
  int v65; 
  const HavokPhysicsWorld *v66; 
  signed int v67; 
  signed int i; 
  unsigned int v69; 
  unsigned int m_serialAndIndex; 
  int v71; 
  hknpWorld *v72; 
  const tmat34_t<vec4_t> *v73; 
  __int64 v78; 
  __int64 v79; 
  DynEntityBasis v80; 
  DynEntityListId p; 
  unsigned int v82; 
  char v83[8]; 
  char v84[8]; 
  char v85[8]; 
  char v86[8]; 
  char v87[8]; 
  char v88[8]; 
  char v89[8]; 
  char v90[8]; 
  char v91[8]; 
  __int16 v92[2]; 
  unsigned int v93; 
  int v94; 
  unsigned int v95; 
  DynEntityListId *v96; 
  MemoryFile *memFilea; 
  unsigned int BodyCount; 
  unsigned int v99[4]; 
  __int64 v100; 
  DynEntityClient *ClientFromClientId; 
  char *v102; 
  hknpBodyId v103; 
  hknpBodyId result; 
  unsigned int *v105; 
  int v106; 
  int v109; 
  int v112; 
  int v115[4]; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec4_t out; 
  vec4_t v119; 
  char dest[128]; 

  memFilea = memFile;
  v4 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 38, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( Sys_IsServerThread() )
  {
    v5 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
        __debugbreak();
      v5 = SvGameGlobals::ms_allocatedType;
    }
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    if ( !*(&SvGameGlobals::ms_svGameGlobals[1].m_configstringsCount + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 44, ASSERT_TYPE_ASSERT, "(SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame)", (const char *)&queryFormat, "SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame") )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEnt_WriteSaveGame");
  v6 = LOCAL_CLIENT_0;
  if ( cm.mapEnts )
  {
    p = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v96 = dynEntListIds;
    if ( p && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 52, ASSERT_TYPE_ASSERT, "(listCount == 0 || listId)", (const char *)&queryFormat, "listCount == 0 || listId") )
      __debugbreak();
  }
  else
  {
    p = 0;
    dynEntListIds = NULL;
    v96 = NULL;
  }
  MemFile_WriteData(v4, 2ui64, &p);
  v8 = 0;
  v95 = 0;
  if ( p )
  {
    __asm
    {
      vmovaps [rsp+250h+var_30], xmm6
      vmovaps [rsp+250h+var_40], xmm7
      vmovss  xmm7, cs:__real@42000000
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      MemFile_WriteData(v4, 2ui64, dynEntListIds);
      v11 = *dynEntListIds;
      if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v79) = 1536;
        LODWORD(v78) = (unsigned __int16)v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v78, v79) )
          __debugbreak();
      }
      v12 = (unsigned __int64)(unsigned __int16)v11 << 6;
      v13 = (char *)g_dynEntityLists + v12;
      if ( *(DynEntityListId *)((char *)&g_dynEntityLists[0].index + v12) == DEFAULT_DYNENTITY_LIST_ID )
        v13 = NULL;
      v102 = v13;
      if ( v13 )
        v14 = *((_DWORD *)v13 + 5);
      else
        v14 = 0;
      v94 = v14;
      MemFile_WriteData(v4, 4ui64, &v94);
      if ( v94 )
      {
        Sys_ProfBeginNamedEvent(0xFFFF6347, "Per DynEntityList");
        if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 75, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
          __debugbreak();
        v15 = 0i64;
        v82 = 0;
        v100 = 0i64;
        if ( SLODWORD(cl_maxLocalClients) > 0 )
        {
          while ( 1 )
          {
            Sys_ProfBeginNamedEvent(0xFFFF6347, "Per Client");
            v16 = DYNENT_BASIS_MODEL;
            v80 = DYNENT_BASIS_MODEL;
            do
            {
              v17 = *(unsigned int *)&v13[4 * (unsigned __int8)v16 + 12];
              v18 = &v13[4 * (unsigned __int8)v16 + 12];
              v105 = (unsigned int *)v18;
              Com_sprintf(dest, 0x80ui64, "Per Basis %i", v17);
              Sys_ProfBeginNamedEvent(0xFFFF6347, dest);
              MemFile_WriteData(v4, 4ui64, v18);
              if ( *(_DWORD *)v18 )
              {
                v19 = 0;
                v93 = 0;
                while ( 1 )
                {
                  v20 = *dynEntListIds;
                  if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                  {
                    LODWORD(v79) = 1536;
                    LODWORD(v78) = (unsigned __int16)v20;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v78, v79) )
                      __debugbreak();
                  }
                  if ( v19 >= 0x7FFFF )
                  {
                    LODWORD(v79) = 0x7FFFF;
                    LODWORD(v78) = v19;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v78, v79) )
                      __debugbreak();
                  }
                  v21 = v19 | ((unsigned __int16)v20 << 19);
                  v22 = *v96;
                  if ( (unsigned __int8)v16 >= DYNENT_BASIS_COUNT )
                  {
                    LODWORD(v79) = 2;
                    LODWORD(v78) = (unsigned __int8)v16;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v78, v79) )
                      __debugbreak();
                  }
                  DynEntityList = DynEnt_GetDynEntityList(v22);
                  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                    __debugbreak();
                  v24 = v93;
                  if ( v93 >= DynEntityList->dynEntCount[(unsigned __int8)v16] )
                  {
                    LODWORD(v79) = DynEntityList->dynEntCount[(unsigned __int8)v16];
                    LODWORD(v78) = v93;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v78, v79) )
                      __debugbreak();
                  }
                  v25 = (__int64)&DynEntityList->dynEntDefList[(unsigned __int8)v16][v24];
                  if ( *(_BYTE *)(v25 + 50) == 4 )
                    goto LABEL_274;
                  v83[0] = *(_BYTE *)(v25 + 78);
                  MemFile_WriteData(v4, 1ui64, v83);
                  if ( *(_WORD *)(v25 + 2 * v15 + 56) != 0xFFFF )
                    break;
                  v92[0] = 0;
                  MemFile_WriteData(v4, 2ui64, v92);
LABEL_274:
                  v19 = v93 + 1;
                  v15 = v100;
                  dynEntListIds = v96;
                  v93 = v19;
                  if ( v19 >= *v105 )
                    goto LABEL_275;
                }
                v26 = v21 & 0x7FFFF;
                v27 = v21 >> 19;
                LODWORD(ClientFromClientId) = v26;
                Def = DynEnt_GetDef((DynEntityListId)v27, v26, v16);
                if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( Def->clientId[v15] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                ClientFromClientId = DynEnt_GetClientFromClientId(v6, Def->clientId[v15], v16);
                v29 = (__int64)ClientFromClientId;
                v30 = DynEnt_GetDef((DynEntityListId)v27, v26, v16);
                if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                  __debugbreak();
                if ( v30->clientId[v15] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
                  __debugbreak();
                v31 = v30->clientId[v15];
                if ( v82 >= 2 )
                {
                  LODWORD(v79) = 2;
                  LODWORD(v78) = v82;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v78, v79) )
                    __debugbreak();
                }
                if ( (unsigned __int8)v16 >= DYNENT_BASIS_COUNT )
                {
                  LODWORD(v79) = 2;
                  LODWORD(v78) = (unsigned __int8)v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v78, v79) )
                    __debugbreak();
                }
                v32 = (unsigned __int8)v16 + 2 * v15;
                if ( !g_dynEntPoseLists[0][v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                  __debugbreak();
                v33 = g_dynEntClientEntsAllocCount[0][v32];
                if ( v31 >= v33 )
                {
                  LODWORD(v79) = v33;
                  LODWORD(v78) = v31;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v78, v79) )
                    __debugbreak();
                }
                v34 = &g_dynEntPoseLists[0][v32][v31];
                if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 118, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                  __debugbreak();
                if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 119, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
                  __debugbreak();
                p_flags = (unsigned __int16 *)(v29 + 28);
                if ( !*(_WORD *)(v29 + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 120, ASSERT_TYPE_ASSERT, "(dynEntClient->flags != 0)", (const char *)&queryFormat, "dynEntClient->flags != 0") )
                  __debugbreak();
                MemFile_WriteData(v4, 2ui64, (const void *)(v29 + 28));
                MemFile_WriteData(v4, 0x1Cui64, &v34->pose);
                MemFile_WriteData(v4, 0xCui64, &v34->bounds);
                MemFile_WriteData(v4, 0xCui64, &v34->bounds.halfSize);
                v84[0] = v34->numParts;
                MemFile_WriteData(v4, 1ui64, v84);
                v85[0] = v34->detailBodyToBoneMapCached;
                MemFile_WriteData(v4, 1ui64, v85);
                v36 = 0;
                if ( v34->numParts )
                {
                  do
                  {
                    if ( v36 )
                    {
                      posePart1FirstIndex = v34->posePart1FirstIndex;
                      if ( posePart1FirstIndex + v36 - 1 >= g_dynEntExtraPosePartsAllocCount[v15] )
                      {
                        LODWORD(v79) = g_dynEntExtraPosePartsAllocCount[v15];
                        LODWORD(v78) = posePart1FirstIndex + v36 - 1;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v78, v79) )
                          __debugbreak();
                      }
                      v37 = &g_dynEntPoseExtraParts[v15][v36 - 1 + v34->posePart1FirstIndex];
                    }
                    else
                    {
                      v37 = (DynEnt_ExtraPosePart *)v34;
                    }
                    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 135, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
                      __debugbreak();
                    MemFile_WriteData(v4, 0x1Cui64, v37);
                    if ( v34->detailBodyToBoneMapCached )
                    {
                      numParts = v34->numParts;
                      if ( v36 >= numParts )
                      {
                        LODWORD(v79) = numParts;
                        LODWORD(v78) = v36;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v78, v79) )
                          __debugbreak();
                      }
                      if ( v36 )
                      {
                        v41 = v34->posePart1FirstIndex;
                        if ( v41 + v36 - 1 >= g_dynEntExtraPosePartsAllocCount[v15] )
                        {
                          LODWORD(v79) = g_dynEntExtraPosePartsAllocCount[v15];
                          LODWORD(v78) = v41 + v36 - 1;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 267, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v78, v79) )
                            __debugbreak();
                        }
                        p_detailBodyToBoneMap0 = (char *)&g_dynEntPoseExtraDetailBodyToBoneMap[v15][v36 - 1 + v34->posePart1FirstIndex];
                      }
                      else
                      {
                        p_detailBodyToBoneMap0 = (char *)&v34->detailBodyToBoneMap0;
                      }
                      if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 141, ASSERT_TYPE_ASSERT, "(detailToBodyBoneIdx)", (const char *)&queryFormat, "detailToBodyBoneIdx") )
                        __debugbreak();
                      v86[0] = *p_detailBodyToBoneMap0;
                      MemFile_WriteData(v4, 1ui64, v86);
                    }
                    ++v36;
                  }
                  while ( v36 < v34->numParts );
                  v29 = (__int64)ClientFromClientId;
                  p_flags = &ClientFromClientId->flags;
                }
                v87[0] = v34->cachedActive;
                MemFile_WriteData(v4, 1ui64, v87);
                v42 = *(const char ***)v29;
                v88[0] = *(_QWORD *)v29 != 0i64;
                MemFile_WriteData(v4, 1ui64, v88);
                if ( v42 )
                  MemFile_WriteCString(v4, *v42);
                if ( (*(_BYTE *)p_flags & 2) != 0 )
                {
                  v89[0] = *(_DWORD *)(v29 + 12) != -1;
                  MemFile_WriteData(v4, 1ui64, v89);
                  v43 = *(_DWORD *)(v29 + 12);
                  v44 = v82;
                  if ( v43 != -1 )
                  {
                    v45 = 3 * v82 + 3;
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v45 > 7 )
                    {
                      LODWORD(v79) = 3 * v44 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                        __debugbreak();
                    }
                    if ( !g_physicsClientWorldsCreated && 3 * v44 + 1 <= 5 )
                    {
                      LODWORD(v79) = 3 * v44 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                        __debugbreak();
                    }
                    if ( g_physicsServerWorldsCreated )
                    {
LABEL_138:
                      if ( (unsigned int)v45 > 7 )
                        goto LABEL_139;
                    }
                    else
                    {
                      if ( v45 >= 0 )
                      {
                        if ( v45 <= 1 )
                        {
                          LODWORD(v79) = 3 * v44 + 3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                            __debugbreak();
                        }
                        goto LABEL_138;
                      }
LABEL_139:
                      LODWORD(v79) = 3 * v44 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                        __debugbreak();
                    }
                    ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v45);
                    if ( !ConstWorld->world )
                    {
                      LODWORD(v79) = 3 * v44 + 3;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v79) )
                        __debugbreak();
                    }
                    BodyCount = HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v43);
                    v47 = BodyCount;
                    MemFile_WriteData(memFilea, 4ui64, &BodyCount);
                    v48 = 0;
                    if ( v47 <= 0 )
                    {
                      v4 = memFilea;
                    }
                    else
                    {
                      do
                      {
                        v49 = *(_DWORD *)(v29 + 12);
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v45 > 7 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                            __debugbreak();
                        }
                        if ( v49 == -1 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v79) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated && (unsigned int)(v45 - 2) <= 5 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                            __debugbreak();
                        }
                        if ( !g_physicsServerWorldsCreated && (unsigned int)v45 <= 1 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                            __debugbreak();
                        }
                        v50.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v45, v49, v48)->m_serialAndIndex;
                        v51 = v50.m_serialAndIndex & 0xFFFFFF;
                        if ( (v50.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 168, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                          __debugbreak();
                        __asm
                        {
                          vxorps  xmm0, xmm0, xmm0
                          vmovups xmmword ptr [rbp+150h+out], xmm0
                          vmovss  [rbp+150h+var_150], xmm6
                          vmovss  [rbp+150h+var_14C], xmm6
                          vmovss  [rbp+150h+var_148], xmm6
                        }
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v45 > 7 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                            __debugbreak();
                        }
                        if ( v51 == 0xFFFFFF )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v79) )
                            __debugbreak();
                        }
                        if ( !g_physicsClientWorldsCreated && (unsigned int)(v45 - 2) <= 5 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                            __debugbreak();
                        }
                        if ( !g_physicsServerWorldsCreated && (unsigned int)v45 <= 1 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                            __debugbreak();
                        }
                        if ( (unsigned int)v45 > 7 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                            __debugbreak();
                        }
                        if ( v51 == 0xFFFFFF )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v79) )
                            __debugbreak();
                        }
                        world = HavokPhysics_GetConstWorld((Physics_WorldId)v45)->world;
                        if ( !world )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v79) )
                            __debugbreak();
                        }
                        v54 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v50.m_serialAndIndex);
                        __asm
                        {
                          vmulss  xmm1, xmm7, dword ptr [rax+30h]
                          vmovss  [rbp+150h+var_150], xmm1
                          vmulss  xmm0, xmm7, dword ptr [rax+34h]
                          vmovss  [rbp+150h+var_14C], xmm0
                          vmulss  xmm2, xmm7, dword ptr [rax+38h]
                          vmovss  [rbp+150h+var_148], xmm2
                        }
                        Axis34ToQuat(v54, &out);
                        v58 = memFilea;
                        MemFile_WriteData(memFilea, 0xCui64, &v106);
                        MemFile_WriteData(v58, 0x10ui64, &out);
                        __asm
                        {
                          vmovss  [rbp+150h+var_140], xmm6
                          vmovss  [rbp+150h+var_13C], xmm6
                          vmovss  [rbp+150h+var_138], xmm6
                          vmovss  [rbp+150h+var_130], xmm6
                          vmovss  [rbp+150h+var_12C], xmm6
                          vmovss  [rbp+150h+var_128], xmm6
                        }
                        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
                          __debugbreak();
                        if ( (unsigned int)v45 > 7 )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                            __debugbreak();
                        }
                        if ( v51 == 0xFFFFFF )
                        {
                          LODWORD(v79) = v45;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v79) )
                            __debugbreak();
                        }
                        HavokPhysics_GetRigidBodyLinAngVel((const Physics_WorldId)v45, v50, &linVel, &angVel);
                        __asm
                        {
                          vmulss  xmm0, xmm7, dword ptr [rbp+150h+linVel.m_quad+4]
                          vmulss  xmm1, xmm7, dword ptr [rbp+150h+linVel.m_quad]
                          vmulss  xmm2, xmm7, dword ptr [rbp+150h+linVel.m_quad+8]
                          vmovss  [rbp+150h+var_13C], xmm0
                          vmovss  xmm0, dword ptr [rbp+150h+angVel.m_quad]
                          vmovss  [rbp+150h+var_130], xmm0
                          vmovss  xmm0, dword ptr [rbp+150h+angVel.m_quad+8]
                          vmovss  [rbp+150h+var_140], xmm1
                          vmovss  xmm1, dword ptr [rbp+150h+angVel.m_quad+4]
                          vmovss  [rbp+150h+var_128], xmm0
                          vmovss  [rbp+150h+var_138], xmm2
                          vmovss  [rbp+150h+var_12C], xmm1
                        }
                        MemFile_WriteData(v58, 0xCui64, &v109);
                        MemFile_WriteData(v58, 0xCui64, &v112);
                        v90[0] = Physics_IsRigidBodyActive((Physics_WorldId)v45, v50.m_serialAndIndex);
                        MemFile_WriteData(v58, 1ui64, v90);
                        ++v48;
                      }
                      while ( v48 < v47 );
                      v44 = v82;
                      v4 = v58;
                    }
                  }
                  v91[0] = *(_DWORD *)(v29 + 16) != -1;
                  MemFile_WriteData(v4, 1ui64, v91);
                  v64 = *(_DWORD *)(v29 + 16);
                  if ( v64 != -1 )
                  {
                    v65 = 3 * v44 + 4;
                    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
                      __debugbreak();
                    if ( (unsigned int)v65 > 7 )
                    {
                      LODWORD(v79) = 3 * v44 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                        __debugbreak();
                    }
                    if ( !g_physicsClientWorldsCreated && 3 * v44 + 2 <= 5 )
                    {
                      LODWORD(v79) = 3 * v44 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                        __debugbreak();
                    }
                    if ( g_physicsServerWorldsCreated )
                    {
LABEL_219:
                      if ( (unsigned int)v65 > 7 )
                        goto LABEL_220;
                    }
                    else
                    {
                      if ( v65 >= 0 )
                      {
                        if ( v65 <= 1 )
                        {
                          LODWORD(v79) = 3 * v44 + 4;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                            __debugbreak();
                        }
                        goto LABEL_219;
                      }
LABEL_220:
                      LODWORD(v79) = 3 * v44 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                        __debugbreak();
                    }
                    v66 = HavokPhysics_GetConstWorld((Physics_WorldId)v65);
                    if ( !v66->world )
                    {
                      LODWORD(v79) = 3 * v44 + 4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v79) )
                        __debugbreak();
                    }
                    v99[0] = HavokPhysicsInstanceManager_GetBodyCount(&v66->instanceManager, v64);
                    v67 = v99[0];
                    MemFile_WriteData(v4, 4ui64, v99);
                    for ( i = 0; i < v67; ++i )
                    {
                      v69 = *(_DWORD *)(v29 + 16);
                      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                        __debugbreak();
                      if ( (unsigned int)v65 > 7 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                          __debugbreak();
                      }
                      if ( v69 == -1 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v79) )
                          __debugbreak();
                      }
                      if ( !g_physicsClientWorldsCreated && (unsigned int)(v65 - 2) <= 5 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                          __debugbreak();
                      }
                      if ( !g_physicsServerWorldsCreated && (unsigned int)v65 <= 1 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                          __debugbreak();
                      }
                      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v103, (const Physics_WorldId)v65, v69, i)->m_serialAndIndex;
                      v71 = m_serialAndIndex & 0xFFFFFF;
                      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_archive.cpp", 205, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                        __debugbreak();
                      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
                        __debugbreak();
                      if ( (unsigned int)v65 > 7 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                          __debugbreak();
                      }
                      if ( v71 == 0xFFFFFF )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v79) )
                          __debugbreak();
                      }
                      if ( !g_physicsClientWorldsCreated && (unsigned int)(v65 - 2) <= 5 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v79) )
                          __debugbreak();
                      }
                      if ( !g_physicsServerWorldsCreated && (unsigned int)v65 <= 1 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v79) )
                          __debugbreak();
                      }
                      if ( (unsigned int)v65 > 7 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v79) )
                          __debugbreak();
                      }
                      if ( v71 == 0xFFFFFF )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v79) )
                          __debugbreak();
                      }
                      v72 = HavokPhysics_GetConstWorld((Physics_WorldId)v65)->world;
                      if ( !v72 )
                      {
                        LODWORD(v79) = v65;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v79) )
                          __debugbreak();
                      }
                      v73 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v72->getBodyTransform)(&v72->hknpWorldReader, m_serialAndIndex);
                      __asm
                      {
                        vmulss  xmm1, xmm7, dword ptr [rax+30h]
                        vmovss  [rbp+150h+var_120], xmm1
                        vmulss  xmm0, xmm7, dword ptr [rax+34h]
                        vmovss  [rbp+150h+var_11C], xmm0
                        vmulss  xmm2, xmm7, dword ptr [rax+38h]
                        vmovss  [rbp+150h+var_118], xmm2
                      }
                      Axis34ToQuat(v73, &v119);
                      MemFile_WriteData(v4, 0xCui64, v115);
                      MemFile_WriteData(v4, 0x10ui64, &v119);
                    }
                  }
                }
                v6 = v82;
                v16 = v80;
                goto LABEL_274;
              }
LABEL_275:
              Sys_ProfEndNamedEvent();
              v13 = v102;
              v80 = ++v16;
            }
            while ( (unsigned __int8)v16 < DYNENT_BASIS_COUNT );
            Sys_ProfEndNamedEvent();
            ++v6;
            ++v15;
            v82 = v6;
            v100 = v15;
            if ( v6 >= SLODWORD(cl_maxLocalClients) )
            {
              v8 = v95;
              break;
            }
          }
        }
        Sys_ProfEndNamedEvent();
        v6 = LOCAL_CLIENT_0;
      }
      ++v8;
      ++dynEntListIds;
      v95 = v8;
      v96 = dynEntListIds;
    }
    while ( v8 < (unsigned __int16)p );
    __asm
    {
      vmovaps xmm7, [rsp+250h+var_40]
      vmovaps xmm6, [rsp+250h+var_30]
    }
  }
  Sys_ProfEndNamedEvent();
}

