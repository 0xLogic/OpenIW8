/*
==============
StaticModels_Debug_AddTileSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddTileSimulationShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddTileSimulationShapeInstanceCount@@YAXQEBEI@Z(gridId, instanceCount);
}

/*
==============
StaticModels_Debug_AddDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddDetailShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddDetailShapeInstanceCount@@YAXII@Z(staticModelZoneIdx, instanceCount);
}

/*
==============
StaticModels_Debug_Draw
==============
*/

void __fastcall StaticModels_Debug_Draw(const ScreenPlacement *scrPlace)
{
  ?StaticModels_Debug_Draw@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
StaticModels_Debug_AddSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddSimulationShapeInstanceCount@@YAXII@Z(staticModelZoneIdx, instanceCount);
}

/*
==============
StaticModels_Debug_GetNameForShape
==============
*/

const char *__fastcall StaticModels_Debug_GetNameForShape(const hknpShape *shape)
{
  return ?StaticModels_Debug_GetNameForShape@@YAPEBDPEBVhknpShape@@@Z(shape);
}

/*
==============
StaticModels_Debug_ResetTileSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetTileSimulationShapeInstanceCount(const unsigned __int8 *gridId)
{
  ?StaticModels_Debug_ResetTileSimulationShapeInstanceCount@@YAXQEBE@Z(gridId);
}

/*
==============
StaticModels_Debug_ResetTileDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetTileDetailShapeInstanceCount(const unsigned __int8 *gridId)
{
  ?StaticModels_Debug_ResetTileDetailShapeInstanceCount@@YAXQEBE@Z(gridId);
}

/*
==============
StaticModels_Debug_ResetSimulationShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  ?StaticModels_Debug_ResetSimulationShapeInstanceCount@@YAXI@Z(staticModelZoneIdx);
}

/*
==============
StaticModels_Debug_AddTileDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_AddTileDetailShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  ?StaticModels_Debug_AddTileDetailShapeInstanceCount@@YAXQEBEI@Z(gridId, instanceCount);
}

/*
==============
StaticModels_Debug_ResetDetailShapeInstanceCount
==============
*/

void __fastcall StaticModels_Debug_ResetDetailShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  ?StaticModels_Debug_ResetDetailShapeInstanceCount@@YAXI@Z(staticModelZoneIdx);
}

/*
==============
StaticModels_Debug_AddDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_AddDetailShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  __int64 v2; 
  int v5; 

  v2 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeDetailInstances[v2] += instanceCount;
}

/*
==============
StaticModels_Debug_AddSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_AddSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx, const unsigned int instanceCount)
{
  __int64 v2; 
  int v5; 

  v2 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeSimulationInstances[v2] += instanceCount;
}

/*
==============
StaticModels_Debug_AddTileDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_AddTileDetailShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  unsigned __int8 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( *gridId >= 0x20u )
  {
    v9 = 32;
    v7 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = gridId[1];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v5 = gridId[1] + 32i64 * *gridId;
  s_staticModels_Debug_NumTileShapeDetailInstances[0][v5] += instanceCount;
}

/*
==============
StaticModels_Debug_AddTileSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_AddTileSimulationShapeInstanceCount(const unsigned __int8 *gridId, const unsigned int instanceCount)
{
  unsigned __int8 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( *gridId >= 0x20u )
  {
    v9 = 32;
    v7 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = gridId[1];
  if ( v4 >= 0x20u )
  {
    LODWORD(v8) = 32;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v5 = gridId[1] + 32i64 * *gridId;
  s_staticModels_Debug_NumTileShapeSimulationInstances[0][v5] += instanceCount;
}

/*
==============
StaticModels_Debug_Draw
==============
*/
void StaticModels_Debug_Draw(const ScreenPlacement *scrPlace)
{
  const dvar_t *v6; 
  const dvar_t *v10; 
  const dvar_t *v14; 
  char v15; 
  const dvar_t *v19; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  int integer; 
  const char *v27; 
  const dvar_t *v35; 
  const dvar_t *v37; 
  float x; 
  float y; 

  v6 = DVARINT_staticModels_debugDisplayOffsetX;
  __asm
  {
    vmovaps [rsp+90h+var_38+8], xmm6
    vmovaps [rsp+90h+var_48+8], xmm7
  }
  if ( !DVARINT_staticModels_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
  }
  v10 = DVARINT_staticModels_debugDisplayOffsetY;
  __asm
  {
    vaddss  xmm6, xmm0, xmm7
    vmovss  [rbp+57h+x], xmm6
  }
  if ( !DVARINT_staticModels_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
  }
  v14 = DVARBOOL_staticModels_debugArchiveFullDetails;
  v15 = 0;
  __asm
  {
    vaddss  xmm1, xmm0, xmm7
    vmovss  [rbp+57h+y], xmm1
  }
  if ( !DVARBOOL_staticModels_debugArchiveFullDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveFullDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm { vmovss  xmm7, cs:__real@40c00000 }
  if ( v14->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    __asm { vaddss  xmm0, xmm6, xmm7 }
    v15 = 1;
    __asm { vmovss  [rbp+57h+x], xmm0 }
    StaticModels_Debug_Draw_Archive_SectionSummary(scrPlace, &x, &y);
    StaticModels_Debug_Draw_Archive_FullDetails(scrPlace, &x, &y);
LABEL_17:
    __asm
    {
      vmovss  xmm0, [rbp+57h+x]
      vaddss  xmm6, xmm0, cs:__real@c0c00000
      vmovss  [rbp+57h+x], xmm6
    }
    goto LABEL_23;
  }
  v19 = DVARBOOL_staticModels_debugArchiveSectionSummary;
  if ( !DVARBOOL_staticModels_debugArchiveSectionSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveSectionSummary") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    __asm { vaddss  xmm0, xmm6, xmm7 }
    v15 = 1;
    __asm { vmovss  [rbp+57h+x], xmm0 }
    StaticModels_Debug_Draw_Archive_SectionSummary(scrPlace, &x, &y);
    goto LABEL_17;
  }
  v22 = DVARBOOL_staticModels_debugArchiveSummary;
  if ( !DVARBOOL_staticModels_debugArchiveSummary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugArchiveSummary") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    v15 = 1;
  }
LABEL_23:
  v23 = DVARBOOL_staticModels_debugInstances;
  if ( !DVARBOOL_staticModels_debugInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugInstances") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    __asm { vmovaps [rsp+90h+var_58+8], xmm8 }
    if ( !v15 )
    {
      StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
      v15 = 1;
    }
    v24 = DVARINT_staticModels_debugTileIdx;
    __asm { vaddss  xmm8, xmm6, xmm7 }
    if ( !DVARINT_staticModels_debugTileIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugTileIdx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    integer = v24->current.integer;
    v27 = j_va("Each tile has a shape instance budget of %iK for sim and %iK for detail", 8i64, 8i64);
    __asm
    {
      vmovss  xmm2, [rbp+57h+y]; y
      vmovaps xmm1, xmm8; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v27, &colorWhite);
    __asm
    {
      vaddss  xmm0, xmm7, [rbp+57h+y]
      vaddss  xmm1, xmm8, xmm7
      vmovss  [rbp+57h+y], xmm0
      vmovss  [rbp+57h+x], xmm1
    }
    StaticModels_Debug_Draw_InstancesHeatmap(scrPlace, &x, &y, integer);
    __asm { vmovaps xmm8, [rsp+90h+var_58+8] }
    if ( integer < 0 || (unsigned int)integer >= 0x400 )
    {
      StaticModels_Debug_Draw_OverlyExpensiveInstances(scrPlace, &x, &y);
      StaticModels_Debug_Draw_NotRootTransformInstances(scrPlace, &x, &y);
    }
    else
    {
      StaticModels_Debug_Draw_InstancesForTile(scrPlace, &x, &y, integer);
    }
    __asm
    {
      vmovss  xmm0, [rbp+57h+x]
      vsubss  xmm1, xmm0, xmm7
      vsubss  xmm6, xmm1, xmm7
      vmovss  [rbp+57h+x], xmm6
    }
  }
  v35 = DVARBOOL_staticModels_debugMemory;
  if ( !DVARBOOL_staticModels_debugMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled )
  {
    if ( !v15 )
      StaticModels_Debug_Draw_Archive_Summary(scrPlace, &x, &y);
    __asm
    {
      vaddss  xmm0, xmm6, xmm7
      vmovss  [rbp+57h+x], xmm0
    }
    StaticModels_Debug_Draw_Memory(scrPlace, &x, &y);
  }
  v37 = DVARBOOL_staticModels_debugDump;
  __asm
  {
    vmovaps xmm7, [rsp+90h+var_48+8]
    vmovaps xmm6, [rsp+90h+var_38+8]
  }
  if ( !DVARBOOL_staticModels_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_staticModels_debugDump, 0);
}

/*
==============
StaticModels_Debug_DrawString
==============
*/

void __fastcall StaticModels_Debug_DrawString(const ScreenPlacement *scrPlace, double x, double y, const char *string)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  char v16; 
  char v17; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
    vcomiss xmm2, cs:__real@44870000
  }
  v11 = DVARBOOL_staticModels_debugDump;
  if ( !DVARBOOL_staticModels_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_staticModels_debugDisplayOffsetX;
    __asm { vmovaps [rsp+88h+var_28], xmm7 }
    if ( !DVARINT_staticModels_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "staticModels_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, cs:__real@41000000
      vcomiss xmm6, xmm7
    }
    if ( !(v16 | v17) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, cs:__real@c0c00000
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
      while ( !(v16 | v17) );
      __asm { vmovaps xmm8, [rsp+88h+var_38] }
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
    __asm { vmovaps xmm7, [rsp+88h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
StaticModels_Debug_Draw_Archive_FullDetails
==============
*/
void StaticModels_Debug_Draw_Archive_FullDetails(const ScreenPlacement *scrPlace, float *x, float *y)
{
  int v6; 
  const ScreenPlacement *v7; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v10; 
  int v11; 
  int v12; 
  const CollisionTile **v13; 
  __int64 v14; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  int v17; 
  const char *v21; 
  unsigned int v25; 
  StaticModelCollisionModelList *v26; 
  unsigned int v27; 
  __int64 v29; 
  bool IsClipmapZoneLoaded; 
  const char *v33; 
  __int64 v37; 
  StaticModelCollisionModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int numInstances; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v55; 
  const char *v57; 
  vec4_t *setColor; 
  bool (__fastcall *hasCollisionFn)(const int); 
  int staticModelZoneIdx; 
  int v68; 
  unsigned int v69; 
  __int64 v70; 
  vec4_t v73; 
  char zoneName[272]; 

  __asm { vmovaps [rsp+1E8h+var_48], xmm6 }
  _RSI = y;
  _R12 = x;
  v6 = 0;
  v7 = scrPlace;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v10 = staticModelCollisionModelLists->numModels == 0;
      v11 = v6 + 1;
      ++staticModelCollisionModelLists;
      if ( v10 )
        v11 = v6;
      v6 = v11;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v12 = 0;
  v13 = g_staticModels_CollisionTiles;
  v14 = 1024i64;
  do
  {
    if ( *v13 )
    {
      staticModelCollision = (*v13)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v17 = v12 + 1;
        if ( !numModels )
          v17 = v12;
        v12 = v17;
        if ( numModels )
          v12 = v17;
      }
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  v68 = v12;
  __asm { vmovss  xmm6, cs:__real@40c00000 }
  if ( v6 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    v21 = "Zones";
    if ( v6 == 1 )
      v21 = "Zone";
    StaticModels_Debug_DrawString(v7, *(double *)&_XMM1, *(double *)&_XMM2, v21);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm2, dword ptr [r12]
      vaddss  xmm0, xmm2, xmm6
      vmovss  dword ptr [r12], xmm0
    }
    v25 = cm.numStaticModelCollisionModelLists;
    v26 = cm.staticModelCollisionModelLists;
    v69 = cm.numStaticModelCollisionModelLists;
    staticModelZoneIdx = 0;
    if ( cm.numStaticModelCollisionModelLists )
    {
      v27 = 0;
      __asm { vmovaps xmm1, xmm0 }
      do
      {
        v29 = v26->numModels;
        __asm { vmovaps xmm0, xmm1 }
        if ( (_DWORD)v29 )
        {
          IsClipmapZoneLoaded = StaticModels_Debug_IsClipmapZoneLoaded(v27);
          _RCX = &colorRed;
          if ( IsClipmapZoneLoaded )
            _RCX = &colorWhite;
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx]
            vmovups xmmword ptr [rsp+1E8h+var_180], xmm0
          }
          StaticModels_Debug_GetClipmapZoneName(v27, zoneName);
          v33 = j_va((const char *)&queryFormat, zoneName);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi]; y
            vmovss  xmm1, dword ptr [r12]; x
          }
          setColor = &v73;
          StaticModels_Debug_DrawString(v7, *(double *)&_XMM1, *(double *)&_XMM2, v33);
          __asm { vaddss  xmm1, xmm6, dword ptr [rsi] }
          v37 = 0i64;
          __asm
          {
            vmovss  dword ptr [rsi], xmm1
            vaddss  xmm0, xmm6, dword ptr [r12]
            vmovss  dword ptr [r12], xmm0
          }
          v70 = v29;
          do
          {
            models = v26->models;
            physicsAsset = models[v37].physicsAsset;
            numInstances = models[v37].numInstances;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v37].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v45 = SL_ConvertToString(models[v37].name);
            LODWORD(hasCollisionFn) = DetailCollisionShapeCount;
            LODWORD(setColor) = PhysicsAssetBodyCount;
            v46 = (char *)&queryFormat.fmt + 3;
            if ( numInstances != 1 )
              v46 = "s";
            v47 = j_va("%i instance%s of %s (Shape cost per instance: %i:Physics Asset %i:ColLod)", numInstances, v46, v45, setColor, hasCollisionFn);
            _RSI = y;
            __asm { vmovss  xmm1, dword ptr [r12]; x }
            setColor = &v73;
            __asm { vmovss  xmm2, dword ptr [rsi]; y }
            StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v47);
            __asm { vaddss  xmm1, xmm6, dword ptr [rsi] }
            ++v37;
            v10 = v70-- == 1;
            __asm { vmovss  dword ptr [rsi], xmm1 }
          }
          while ( !v10 );
          __asm { vmovss  xmm0, dword ptr [r12] }
          v27 = staticModelZoneIdx;
          v7 = scrPlace;
          v25 = v69;
          __asm
          {
            vsubss  xmm0, xmm0, xmm6
            vmovss  dword ptr [r12], xmm0
            vmovaps xmm1, xmm0
          }
        }
        ++v27;
        ++v26;
        staticModelZoneIdx = v27;
      }
      while ( v27 < v25 );
      v12 = v68;
    }
    __asm
    {
      vsubss  xmm0, xmm0, xmm6
      vmovss  dword ptr [r12], xmm0
    }
  }
  if ( v12 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    v55 = "Tiles";
    if ( v12 == 1 )
      v55 = "Tile";
    StaticModels_Debug_DrawString(v7, *(double *)&_XMM1, *(double *)&_XMM2, v55);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v57 = j_va("Tile Details");
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    StaticModels_Debug_DrawString(v7, *(double *)&_XMM1, *(double *)&_XMM2, v57);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vaddss  xmm0, xmm6, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    StaticModels_Debug_Draw_CollisionTileDetails(v7, _R12, _RSI, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName);
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [r12], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+1E8h+var_48] }
}

/*
==============
StaticModels_Debug_Draw_Archive_SectionSummary
==============
*/
void StaticModels_Debug_Draw_Archive_SectionSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  int v4; 
  int v8; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v11; 
  int v12; 
  __int64 v13; 
  const CollisionTile **v14; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  int v17; 
  const char *v21; 
  const char *v28; 

  v4 = 0;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = y;
  _RDI = x;
  v8 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v11 = staticModelCollisionModelLists->numModels == 0;
      v12 = v8 + 1;
      ++staticModelCollisionModelLists;
      if ( v11 )
        v12 = v8;
      v8 = v12;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v13 = 1024i64;
  v14 = g_staticModels_CollisionTiles;
  do
  {
    if ( *v14 )
    {
      staticModelCollision = (*v14)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v17 = v4 + 1;
        if ( !numModels )
          v17 = v4;
        v4 = v17;
        if ( numModels )
          v4 = v17;
      }
    }
    ++v14;
    --v13;
  }
  while ( v13 );
  __asm { vmovss  xmm6, cs:__real@40c00000 }
  if ( v8 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    v21 = "Zones";
    if ( v8 == 1 )
      v21 = "Zone";
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v21);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
    StaticModels_Debug_Draw_ClipmapZoneSummary(scrPlace, _RDI, _RSI, cm.numStaticModelCollisionModelLists, cm.staticModelCollisionModelLists, StaticModels_Debug_IsClipmapZoneLoaded, StaticModels_Debug_GetClipmapZoneName);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi], xmm1
    }
  }
  if ( v4 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    v28 = "Tiles";
    if ( v4 == 1 )
      v28 = "Tile";
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v28);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
    StaticModels_Debug_Draw_CollisionTileSummary(scrPlace, _RDI, _RSI, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
StaticModels_Debug_Draw_Archive_Summary
==============
*/
void StaticModels_Debug_Draw_Archive_Summary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v5; 
  int v6; 
  int v7; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  unsigned int numModels; 
  unsigned int v13; 
  __int64 v14; 
  int v16; 
  int v28; 
  int v29; 
  StaticModelCollisionModel *models; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  int v38; 
  const CollisionTile **v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int v46; 
  int v47; 
  unsigned int v48; 
  int v50; 
  __int64 v57; 
  int v63; 
  int v64; 
  StaticModelCollisionCompressedModel *v65; 
  __int64 v66; 
  unsigned int v67; 
  __int64 v68; 
  const char *v76; 
  unsigned int v82; 
  unsigned int v83; 
  int v84; 
  int v85; 
  __int64 v86; 
  int v90; 

  v5 = 0;
  v6 = 0;
  v82 = 0;
  v7 = 0;
  v90 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      numModels = staticModelCollisionModelLists->numModels;
      v13 = v5 + 1;
      if ( !staticModelCollisionModelLists->numModels )
        v13 = v5;
      v14 = 0i64;
      v83 = v13;
      v84 = numModels + v6;
      v5 = v13;
      if ( numModels >= 8 )
      {
        _RSI = staticModelCollisionModelLists->models;
        v16 = 2;
        do
        {
          _RAX = 5 * v14;
          v14 = (unsigned int)(v14 + 8);
          __asm
          {
            vmovd   xmm0, dword ptr [rsi+rax*8+18h]
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r10*8+18h], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          _RAX = (unsigned int)(v16 + 2);
          v16 += 8;
          _RAX *= 5i64;
          __asm
          {
            vmovd   xmm0, dword ptr [rsi+rax*8+18h]
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r9*8+18h], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( (unsigned int)v14 < (numModels & 0xFFFFFFF8) );
        v7 = v90;
        v5 = v83;
      }
      v28 = 0;
      v29 = 0;
      if ( (unsigned int)v14 < numModels )
      {
        if ( numModels - (unsigned int)v14 >= 2 )
        {
          models = staticModelCollisionModelLists->models;
          v31 = v14;
          v32 = ((numModels - (unsigned int)v14 - 2) >> 1) + 1;
          v33 = v32;
          v14 = (unsigned int)v14 + 2 * v32;
          do
          {
            v28 += models[v31].numInstances;
            v29 += models[v31 + 1].numInstances;
            v31 += 2i64;
            --v33;
          }
          while ( v33 );
        }
        if ( (unsigned int)v14 < numModels )
          v7 += staticModelCollisionModelLists->models[v14].numInstances;
        v7 += v29 + v28;
        v90 = v7;
      }
      v6 = v84;
      ++staticModelCollisionModelLists;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   eax, xmm0
    }
    v82 = v5;
  }
  v38 = 0;
  v39 = g_staticModels_CollisionTiles;
  v40 = 0;
  v41 = 1024i64;
  v42 = 0;
  v86 = 1024i64;
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  do
  {
    if ( *v39 )
    {
      staticModelCollision = (*v39)->staticModelCollision;
      if ( staticModelCollision )
      {
        v46 = staticModelCollision->numModels;
        v47 = v38 + 1;
        if ( !staticModelCollision->numModels )
          v47 = v38;
        v48 = 0;
        v85 = v46 + v40;
        v38 = v47;
        if ( v46 >= 8 )
        {
          _RSI = staticModelCollision->models;
          v50 = 2;
          do
          {
            _RAX = 56i64 * v48;
            v48 += 8;
            __asm
            {
              vmovd   xmm0, dword ptr [rax+rsi+2Ch]
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
              vpaddd  xmm1, xmm0, xmm1
            }
            v57 = (unsigned int)(v50 + 2);
            v50 += 8;
            _RAX = 56 * v57;
            __asm
            {
              vmovd   xmm0, dword ptr [rax+rsi+2Ch]
              vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
              vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
              vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
              vpaddd  xmm2, xmm0, xmm2
            }
          }
          while ( v48 < (v46 & 0xFFFFFFF8) );
          v41 = v86;
        }
        v63 = 0;
        v64 = 0;
        if ( v48 < v46 )
        {
          if ( v46 - v48 >= 2 )
          {
            v65 = staticModelCollision->models;
            v66 = v48;
            v67 = ((v46 - v48 - 2) >> 1) + 1;
            v68 = v67;
            v48 += 2 * v67;
            do
            {
              v63 += v65[v66].numInstances;
              v64 += v65[v66 + 1].numInstances;
              v66 += 2i64;
              --v68;
            }
            while ( v68 );
          }
          if ( v48 < v46 )
            v42 += staticModelCollision->models[v48].numInstances;
          v42 += v64 + v63;
        }
        v40 = v85;
      }
    }
    ++v39;
    v86 = --v41;
  }
  while ( v41 );
  __asm
  {
    vpaddd  xmm1, xmm2, xmm1
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
    vmovd   eax, xmm0
  }
  _RBX = y;
  v76 = j_va("Static Models - %i zone%s with %i instance%s of %i unique model%s - %i tile%s with %i instance%s of %i unique model%s", v82);
  _RAX = x;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [rax]; x
  }
  StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v76);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, cs:__real@40c00000
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
StaticModels_Debug_Draw_ClipmapZoneMemory
==============
*/
void StaticModels_Debug_Draw_ClipmapZoneMemory(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numZones, const StaticModelCollisionModelList *zones, bool (*hasCollisionFn)(const int), void (*zoneNameFn)(const int, char *), const bool drawTotals)
{
  signed __int64 v8; 
  void *v10; 
  unsigned int v11; 
  bool (__fastcall *v13)(const int); 
  const ScreenPlacement *v14; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  StaticModelCollisionModel **p_models; 
  unsigned int v23; 
  bool v24; 
  unsigned int v25; 
  StaticModelCollisionModel *v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 physicsAsset; 
  unsigned int v33; 
  __int64 *v34; 
  unsigned int v35; 
  __int64 *v36; 
  __int64 v37; 
  __int64 detailCollision; 
  unsigned int v39; 
  __int64 *v40; 
  unsigned int v41; 
  __int64 *v42; 
  __int64 v43; 
  unsigned int v44; 
  __int64 *v45; 
  __int64 v46; 
  __int64 *v47; 
  __int64 v48; 
  const char *v49; 
  __int64 *v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 *v56; 
  __int64 v57; 
  __int64 v58; 
  const char *v59; 
  unsigned int v64; 
  __int64 v69[15000]; 
  __int64 v70[15000]; 
  __int64 v71[16312]; 
  __int64 v72[16312]; 
  char v73[272]; 

  v10 = alloca(v8);
  __asm { vmovaps [rsp+7A6D8h+var_48], xmm6 }
  v11 = 0;
  _R12 = x;
  v13 = hasCollisionFn;
  v14 = scrPlace;
  _RBX = y;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v64 = 0;
  v20 = 0;
  __asm { vmovss  xmm6, cs:__real@40c00000 }
  if ( numZones )
  {
    p_models = &zones->models;
    do
    {
      v23 = *((_DWORD *)p_models - 2);
      if ( v23 )
      {
        v24 = v13(v20);
        v25 = *((_DWORD *)p_models + 2);
        _RCX = &colorRed;
        v27 = *p_models;
        v28 = 0i64;
        if ( v24 )
          _RCX = &colorWhite;
        v29 = 0i64;
        v64 += v25;
        v30 = v23;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rsp+7A6D8h+var_7A678], xmm0
        }
        do
        {
          physicsAsset = (__int64)v27->physicsAsset;
          if ( physicsAsset )
          {
            v33 = 0;
            if ( (_DWORD)v28 )
            {
              v34 = v69;
              while ( *v34 != physicsAsset )
              {
                ++v33;
                ++v34;
                if ( v33 >= (unsigned int)v28 )
                  goto LABEL_12;
              }
            }
            else
            {
LABEL_12:
              v69[v28] = physicsAsset;
              v28 = (unsigned int)(v28 + 1);
            }
            v35 = 0;
            if ( v18 )
            {
              v36 = v70;
              while ( *v36 != physicsAsset )
              {
                ++v35;
                ++v36;
                if ( v35 >= v18 )
                  goto LABEL_17;
              }
            }
            else
            {
LABEL_17:
              v37 = v18++;
              v70[v37] = physicsAsset;
            }
          }
          detailCollision = (__int64)v27->detailCollision;
          if ( detailCollision )
          {
            v39 = 0;
            if ( (_DWORD)v29 )
            {
              v40 = v71;
              while ( *v40 != detailCollision )
              {
                ++v39;
                ++v40;
                if ( v39 >= (unsigned int)v29 )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              v71[v29] = detailCollision;
              v29 = (unsigned int)(v29 + 1);
            }
            v41 = 0;
            if ( v19 )
            {
              v42 = v72;
              while ( *v42 != detailCollision )
              {
                ++v41;
                ++v42;
                if ( v41 >= v19 )
                  goto LABEL_28;
              }
            }
            else
            {
LABEL_28:
              v43 = v19++;
              v72[v43] = detailCollision;
            }
          }
          ++v27;
          --v30;
        }
        while ( v30 );
        v44 = 0;
        if ( (_DWORD)v28 )
        {
          v45 = v69;
          do
          {
            v46 = *v45++;
            v44 += *(_DWORD *)(v46 + 16) + 88;
            --v28;
          }
          while ( v28 );
        }
        if ( (_DWORD)v29 )
        {
          v47 = v71;
          do
          {
            v48 = *v47++;
            v44 += *(_DWORD *)(v48 + 8) + 40;
            --v29;
          }
          while ( v29 );
        }
        zoneNameFn(v20, v73);
        v49 = j_va("%s %i bytes of Structure, referencing %i bytes in assets", v73, v25, v44);
        _RBX = y;
        _R12 = x;
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r12]; x
        }
        StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v49);
        __asm { vaddss  xmm1, xmm6, dword ptr [rbx] }
        v13 = hasCollisionFn;
        __asm { vmovss  dword ptr [rbx], xmm1 }
      }
      else
      {
        _RBX = y;
      }
      ++v20;
      p_models += 3;
    }
    while ( v20 < numZones );
    v17 = v64;
    v14 = scrPlace;
  }
  if ( drawTotals )
  {
    if ( v18 )
    {
      v53 = v70;
      v54 = v18;
      do
      {
        v55 = *v53++;
        v11 += *(_DWORD *)(v55 + 16) + 88;
        --v54;
      }
      while ( v54 );
    }
    if ( v19 )
    {
      v56 = v72;
      v57 = v19;
      do
      {
        v58 = *v56++;
        v11 += *(_DWORD *)(v58 + 8) + 40;
        --v57;
      }
      while ( v57 );
    }
    v59 = j_va("Zone Total %i bytes of Structure, referencing %i bytes in assets", v17, v11);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    StaticModels_Debug_DrawString(v14, *(double *)&_XMM1, *(double *)&_XMM2, v59);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+7A6D8h+var_48] }
}

/*
==============
StaticModels_Debug_Draw_ClipmapZoneSummary
==============
*/
void StaticModels_Debug_Draw_ClipmapZoneSummary(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numZones, const StaticModelCollisionModelList *zones, bool (*hasCollisionFn)(const int), void (*zoneNameFn)(const int, char *))
{
  bool (__fastcall *v10)(const int); 
  unsigned int v11; 
  const ScreenPlacement *v15; 
  unsigned int numModels; 
  unsigned int numInstances; 
  __int64 v20; 
  int v24; 
  __int64 v36; 
  __int64 v37; 
  StaticModelCollisionModel *models; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int v48; 
  char v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  char *v53; 
  const char *v55; 
  __int64 v61; 
  char v65[272]; 
  void *retaddr; 

  _R11 = &retaddr;
  v10 = hasCollisionFn;
  v11 = 0;
  _RSI = y;
  v15 = scrPlace;
  if ( numZones )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovss  xmm7, cs:__real@40c00000
      vpxor   xmm6, xmm6, xmm6
    }
    do
    {
      numModels = zones->numModels;
      numInstances = 0;
      v20 = 0i64;
      __asm
      {
        vmovdqu xmm1, xmm6
        vmovdqu xmm2, xmm6
      }
      if ( zones->numModels >= 8 )
      {
        _RSI = zones->models;
        v24 = 2;
        do
        {
          _RAX = 5 * v20;
          v20 = (unsigned int)(v20 + 8);
          __asm
          {
            vmovd   xmm0, dword ptr [rsi+rax*8+18h]
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r10*8+18h], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          _RAX = (unsigned int)(v24 + 2);
          v24 += 8;
          _RAX *= 5i64;
          __asm
          {
            vmovd   xmm0, dword ptr [rsi+rax*8+18h]
            vpinsrd xmm0, xmm0, dword ptr [rsi+rdx*8+18h], 1
            vpinsrd xmm0, xmm0, dword ptr [rsi+r8*8+18h], 2
            vpinsrd xmm0, xmm0, dword ptr [rsi+r9*8+18h], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( (unsigned int)v20 < (numModels & 0xFFFFFFF8) );
        _RSI = y;
        v15 = scrPlace;
        v10 = hasCollisionFn;
      }
      v36 = 0i64;
      v37 = 0i64;
      if ( (unsigned int)v20 < numModels )
      {
        if ( numModels - (unsigned int)v20 >= 2 )
        {
          models = zones->models;
          v39 = v20;
          v40 = ((numModels - (unsigned int)v20 - 2) >> 1) + 1;
          v41 = v40;
          v20 = (unsigned int)v20 + 2 * v40;
          do
          {
            v36 = (unsigned int)(models[v39].numInstances + v36);
            v37 = (unsigned int)(models[v39 + 1].numInstances + v37);
            v39 += 2i64;
            --v41;
          }
          while ( v41 );
        }
        if ( (unsigned int)v20 < numModels )
          numInstances = zones->models[v20].numInstances;
        numInstances += v37 + v36;
      }
      __asm
      {
        vpaddd  xmm1, xmm2, xmm1
        vpsrldq xmm0, xmm1, 8
        vpaddd  xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpaddd  xmm0, xmm2, xmm0
        vmovd   eax, xmm0
      }
      v48 = _EAX + numInstances;
      if ( numModels )
      {
        v49 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v10)(v11, v36, v37);
        zoneNameFn(v11, v65);
        v50 = (char *)&queryFormat.fmt + 3;
        if ( numModels != 1 )
          v50 = "s";
        v51 = (char *)&queryFormat.fmt + 3;
        v52 = "Unloaded";
        LODWORD(v61) = numModels;
        if ( v48 != 1 )
          v51 = "s";
        if ( v49 )
          v52 = "Loaded";
        v53 = j_va("%s (%s) has %i instance%s of %i unique model%s", v65, v52, v48, v51, v61, v50);
        __asm { vmovss  xmm2, dword ptr [rsi]; y }
        v55 = v53;
        _RAX = x;
        __asm { vmovss  xmm1, dword ptr [rax]; x }
        StaticModels_Debug_DrawString(v15, *(double *)&_XMM1, *(double *)&_XMM2, v55);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      v10 = hasCollisionFn;
      ++v11;
      ++zones;
    }
    while ( v11 < numZones );
    __asm
    {
      vmovaps xmm7, [rsp+1E8h+var_58]
      vmovaps xmm6, [rsp+1E8h+var_48]
    }
  }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileDetails
==============
*/
void StaticModels_Debug_Draw_CollisionTileDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *))
{
  const CollisionTile **v9; 
  unsigned int v10; 
  void (__fastcall *v11)(const int, char *); 
  bool (__fastcall *v13)(const int); 
  const ScreenPlacement *v15; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 numModels; 
  bool v19; 
  const char *v22; 
  __int64 v27; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int numInstances; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  bool v40; 
  vec4_t *setColor; 
  __int64 v45; 
  unsigned int v46; 
  unsigned int v47; 
  __int64 v48; 
  const CollisionTile **v49; 
  vec4_t v51; 
  char v52[272]; 
  void *retaddr; 

  _R11 = &retaddr;
  v9 = collisionTiles;
  v10 = 0;
  v11 = tileNameFn;
  _R12 = x;
  v13 = hasCollisionFn;
  _R13 = y;
  v15 = scrPlace;
  v47 = numTiles;
  v49 = collisionTiles;
  v46 = 0;
  if ( numTiles )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, cs:__real@40c00000
    }
    do
    {
      if ( *v9 )
      {
        staticModelCollision = (*v9)->staticModelCollision;
        if ( staticModelCollision )
        {
          numModels = staticModelCollision->numModels;
          if ( (_DWORD)numModels )
          {
            v19 = v13(v10);
            _RCX = &colorRed;
            if ( v19 )
              _RCX = &colorWhite;
            __asm
            {
              vmovups xmm0, xmmword ptr [rcx]
              vmovups xmmword ptr [rsp+1D8h+var_178], xmm0
            }
            v11(v10, v52);
            v22 = j_va((const char *)&queryFormat, v52);
            __asm
            {
              vmovss  xmm2, dword ptr [r13+0]; y
              vmovss  xmm1, dword ptr [r12]; x
            }
            setColor = &v51;
            StaticModels_Debug_DrawString(v15, *(double *)&_XMM1, *(double *)&_XMM2, v22);
            __asm
            {
              vaddss  xmm1, xmm6, dword ptr [r13+0]
              vmovss  dword ptr [r13+0], xmm1
              vaddss  xmm0, xmm6, dword ptr [r12]
              vmovss  dword ptr [r12], xmm0
            }
            v27 = 0i64;
            v48 = numModels;
            do
            {
              models = staticModelCollision->models;
              physicsAsset = models[v27].physicsAsset;
              numInstances = models[v27].numInstances;
              if ( physicsAsset )
                PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
              else
                PhysicsAssetBodyCount = 0;
              detailCollision = models[v27].detailCollision;
              if ( detailCollision )
                DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
              else
                DetailCollisionShapeCount = PhysicsAssetBodyCount;
              v34 = SL_ConvertToString(models[v27].name);
              LODWORD(v45) = DetailCollisionShapeCount;
              LODWORD(setColor) = PhysicsAssetBodyCount;
              v35 = (char *)&queryFormat.fmt + 3;
              if ( numInstances != 1 )
                v35 = "s";
              v36 = j_va("%i instance%s of %s (Shape cost per instance: %i:Physics Asset %i:ColLod)", numInstances, v35, v34, setColor, v45);
              v15 = scrPlace;
              __asm
              {
                vmovss  xmm2, dword ptr [r13+0]; y
                vmovss  xmm1, dword ptr [r12]; x
              }
              setColor = &v51;
              StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v36);
              __asm { vaddss  xmm1, xmm6, dword ptr [r13+0] }
              ++v27;
              v40 = v48-- == 1;
              __asm { vmovss  dword ptr [r13+0], xmm1 }
            }
            while ( !v40 );
            __asm { vmovss  xmm0, dword ptr [r12] }
            v10 = v46;
            v9 = v49;
            numTiles = v47;
            v13 = hasCollisionFn;
            v11 = tileNameFn;
            __asm
            {
              vsubss  xmm1, xmm0, xmm6
              vmovss  dword ptr [r12], xmm1
            }
          }
        }
      }
      ++v10;
      ++v9;
      v46 = v10;
      v49 = v9;
    }
    while ( v10 < numTiles );
    __asm { vmovaps xmm6, [rsp+1D8h+var_48] }
  }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileMemory
==============
*/
void StaticModels_Debug_Draw_CollisionTileMemory(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *), const bool drawTotals)
{
  signed __int64 v8; 
  void *v10; 
  unsigned int v12; 
  bool (__fastcall *v14)(const int); 
  const ScreenPlacement *v15; 
  unsigned int v16; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  bool v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v29; 
  unsigned int structureMemoryCost; 
  StaticModelCollisionCompressedModel *models; 
  __int64 physicsAsset; 
  unsigned int v34; 
  __int64 *v35; 
  unsigned int v36; 
  __int64 *v37; 
  __int64 v38; 
  __int64 detailCollision; 
  unsigned int v40; 
  __int64 *v41; 
  unsigned int v42; 
  __int64 *v43; 
  __int64 v44; 
  unsigned int v45; 
  __int64 *v46; 
  __int64 v47; 
  __int64 *v48; 
  __int64 v49; 
  const char *v50; 
  __int64 *v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 *v57; 
  __int64 v58; 
  __int64 v59; 
  const char *v60; 
  unsigned int v65; 
  __int64 v71[15000]; 
  __int64 v72[15000]; 
  __int64 v73[16312]; 
  __int64 v74[16312]; 
  char v75[272]; 

  v10 = alloca(v8);
  __asm { vmovaps [rsp+7A6E8h+var_48], xmm6 }
  v12 = 0;
  _R13 = x;
  v14 = hasCollisionFn;
  v15 = scrPlace;
  v16 = numTiles;
  _RBX = y;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v65 = 0;
  __asm { vmovss  xmm6, cs:__real@40c00000 }
  if ( numTiles )
  {
    while ( 1 )
    {
      if ( *collisionTiles )
      {
        staticModelCollision = (*collisionTiles)->staticModelCollision;
        if ( staticModelCollision )
        {
          numModels = staticModelCollision->numModels;
          if ( staticModelCollision->numModels )
          {
            v25 = !v14(v21);
            v26 = 0i64;
            v27 = 0i64;
            _RCX = &colorRed;
            v29 = numModels;
            if ( !v25 )
              _RCX = &colorWhite;
            __asm
            {
              vmovups xmm0, xmmword ptr [rcx]
              vmovups xmmword ptr [rsp+7A6E8h+var_7A680], xmm0
            }
            structureMemoryCost = staticModelCollision->structureMemoryCost;
            v65 += structureMemoryCost;
            models = staticModelCollision->models;
            do
            {
              physicsAsset = (__int64)models->physicsAsset;
              if ( physicsAsset )
              {
                v34 = 0;
                if ( (_DWORD)v26 )
                {
                  v35 = v71;
                  while ( *v35 != physicsAsset )
                  {
                    ++v34;
                    ++v35;
                    if ( v34 >= (unsigned int)v26 )
                      goto LABEL_13;
                  }
                }
                else
                {
LABEL_13:
                  v71[v26] = physicsAsset;
                  v26 = (unsigned int)(v26 + 1);
                }
                v36 = 0;
                if ( v19 )
                {
                  v37 = v72;
                  while ( *v37 != physicsAsset )
                  {
                    ++v36;
                    ++v37;
                    if ( v36 >= v19 )
                      goto LABEL_18;
                  }
                }
                else
                {
LABEL_18:
                  v38 = v19++;
                  v72[v38] = physicsAsset;
                }
              }
              detailCollision = (__int64)models->detailCollision;
              if ( detailCollision )
              {
                v40 = 0;
                if ( (_DWORD)v27 )
                {
                  v41 = v73;
                  while ( *v41 != detailCollision )
                  {
                    ++v40;
                    ++v41;
                    if ( v40 >= (unsigned int)v27 )
                      goto LABEL_24;
                  }
                }
                else
                {
LABEL_24:
                  v73[v27] = detailCollision;
                  v27 = (unsigned int)(v27 + 1);
                }
                v42 = 0;
                if ( v20 )
                {
                  v43 = v74;
                  while ( *v43 != detailCollision )
                  {
                    ++v42;
                    ++v43;
                    if ( v42 >= v20 )
                      goto LABEL_29;
                  }
                }
                else
                {
LABEL_29:
                  v44 = v20++;
                  v74[v44] = detailCollision;
                }
              }
              ++models;
              --v29;
            }
            while ( v29 );
            v45 = 0;
            if ( (_DWORD)v26 )
            {
              v46 = v71;
              do
              {
                v47 = *v46++;
                v45 += *(_DWORD *)(v47 + 16) + 88;
                --v26;
              }
              while ( v26 );
            }
            if ( (_DWORD)v27 )
            {
              v48 = v73;
              do
              {
                v49 = *v48++;
                v45 += *(_DWORD *)(v49 + 8) + 40;
                --v27;
              }
              while ( v27 );
            }
            tileNameFn(v21, v75);
            v50 = j_va("%s %i bytes of Structure, referencing %i bytes in assets", v75, structureMemoryCost, v45);
            _RBX = y;
            _R13 = x;
            v15 = scrPlace;
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; y
              vmovss  xmm1, dword ptr [r13+0]; x
            }
            StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v50);
            __asm { vaddss  xmm1, xmm6, dword ptr [rbx] }
            v16 = numTiles;
            v14 = hasCollisionFn;
            __asm { vmovss  dword ptr [rbx], xmm1 }
            goto LABEL_40;
          }
          v15 = scrPlace;
        }
      }
      _RBX = y;
LABEL_40:
      ++v21;
      ++collisionTiles;
      if ( v21 >= v16 )
      {
        v18 = v65;
        break;
      }
    }
  }
  if ( drawTotals )
  {
    if ( v19 )
    {
      v54 = v72;
      v55 = v19;
      do
      {
        v56 = *v54++;
        v12 += *(_DWORD *)(v56 + 16) + 88;
        --v55;
      }
      while ( v55 );
    }
    if ( v20 )
    {
      v57 = v74;
      v58 = v20;
      do
      {
        v59 = *v57++;
        v12 += *(_DWORD *)(v59 + 8) + 40;
        --v58;
      }
      while ( v58 );
    }
    v60 = j_va("Tile Total %i bytes of Structure, referencing %i bytes in assets", v18, v12);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    StaticModels_Debug_DrawString(v15, *(double *)&_XMM1, *(double *)&_XMM2, v60);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+7A6E8h+var_48] }
}

/*
==============
StaticModels_Debug_Draw_CollisionTileSummary
==============
*/
void StaticModels_Debug_Draw_CollisionTileSummary(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int numTiles, const CollisionTile **collisionTiles, bool (*hasCollisionFn)(const int), void (*tileNameFn)(const int, char *))
{
  bool (__fastcall *v11)(const int); 
  unsigned int v12; 
  unsigned int v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  unsigned int numInstances; 
  unsigned int v20; 
  int v24; 
  __int64 v31; 
  __int64 v37; 
  __int64 v38; 
  StaticModelCollisionCompressedModel *models; 
  __int64 v40; 
  unsigned int v41; 
  __int64 v42; 
  unsigned int v47; 
  char v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  char *v52; 
  const char *v53; 
  __int64 v57; 
  char v62[272]; 
  void *retaddr; 

  _R11 = &retaddr;
  v11 = hasCollisionFn;
  v12 = 0;
  v13 = numTiles;
  _R15 = y;
  if ( numTiles )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, cs:__real@40c00000
    }
    do
    {
      if ( *collisionTiles )
      {
        staticModelCollision = (*collisionTiles)->staticModelCollision;
        if ( staticModelCollision )
        {
          numModels = staticModelCollision->numModels;
          numInstances = 0;
          v20 = 0;
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vpxor   xmm2, xmm2, xmm2
          }
          if ( staticModelCollision->numModels >= 8 )
          {
            _RSI = staticModelCollision->models;
            v24 = 2;
            do
            {
              _RAX = 56i64 * v20;
              v20 += 8;
              __asm
              {
                vmovd   xmm0, dword ptr [rax+rsi+2Ch]
                vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
                vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
                vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
                vpaddd  xmm1, xmm0, xmm1
              }
              v31 = (unsigned int)(v24 + 2);
              v24 += 8;
              _RAX = 56 * v31;
              __asm
              {
                vmovd   xmm0, dword ptr [rax+rsi+2Ch]
                vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
                vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
                vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
                vpaddd  xmm2, xmm0, xmm2
              }
            }
            while ( v20 < (numModels & 0xFFFFFFF8) );
            v13 = numTiles;
            _R15 = y;
            v11 = hasCollisionFn;
          }
          v37 = 0i64;
          v38 = 0i64;
          if ( v20 < numModels )
          {
            if ( numModels - v20 >= 2 )
            {
              models = staticModelCollision->models;
              v40 = v20;
              v41 = ((numModels - v20 - 2) >> 1) + 1;
              v42 = v41;
              v20 += 2 * v41;
              do
              {
                v37 = (unsigned int)(models[v40].numInstances + v37);
                v38 = (unsigned int)(models[v40 + 1].numInstances + v38);
                v40 += 2i64;
                --v42;
              }
              while ( v42 );
            }
            if ( v20 < numModels )
              numInstances = staticModelCollision->models[v20].numInstances;
            numInstances += v38 + v37;
          }
          __asm
          {
            vpaddd  xmm1, xmm2, xmm1
            vpsrldq xmm0, xmm1, 8
            vpaddd  xmm2, xmm1, xmm0
            vpsrldq xmm0, xmm2, 4
            vpaddd  xmm0, xmm2, xmm0
            vmovd   eax, xmm0
          }
          v47 = _EAX + numInstances;
          if ( numModels )
          {
            v48 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v11)(v12, v37, v38);
            tileNameFn(v12, v62);
            v49 = (char *)&queryFormat.fmt + 3;
            if ( numModels != 1 )
              v49 = "s";
            v50 = (char *)&queryFormat.fmt + 3;
            v51 = "Unloaded";
            LODWORD(v57) = numModels;
            if ( v47 != 1 )
              v50 = "s";
            if ( v48 )
              v51 = "Loaded";
            v52 = j_va("%s (%s) has %i instance%s of %i unique model%s", v62, v51, v47, v50, v57, v49);
            __asm { vmovss  xmm2, dword ptr [r15]; y }
            v53 = v52;
            _RAX = x;
            __asm { vmovss  xmm1, dword ptr [rax]; x }
            StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v53);
            __asm
            {
              vaddss  xmm1, xmm6, dword ptr [r15]
              vmovss  dword ptr [r15], xmm1
            }
          }
        }
      }
      v11 = hasCollisionFn;
      ++v12;
      ++collisionTiles;
    }
    while ( v12 < v13 );
    __asm { vmovaps xmm6, [rsp+1D8h+var_48] }
  }
}

/*
==============
StaticModels_Debug_Draw_GetTileColor
==============
*/
void StaticModels_Debug_Draw_GetTileColor(int tileIdx, vec4_t *color)
{
  const CollisionTile *v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 

  v2 = g_staticModels_CollisionTiles[tileIdx];
  if ( v2 )
  {
    v4 = v2->gridId[1] + 32i64 * v2->gridId[0];
    v5 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v4];
    v3 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v4];
    if ( v5 > v3 )
      v3 = v5;
  }
  else
  {
    v3 = 0;
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B+4; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B+8; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx+8], xmm0
  }
  if ( v3 <= 0x2000 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcomiss xmm0, cs:__real@45e66666
      vcomiss xmm0, cs:__real@45c00000
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
}

/*
==============
StaticModels_Debug_Draw_InstancesForTile
==============
*/
void StaticModels_Debug_Draw_InstancesForTile(const ScreenPlacement *scrPlace, float *x, float *y, int tileIdx)
{
  const ScreenPlacement *v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 numModels; 
  unsigned int v18; 
  int v20; 
  __int64 v29; 
  int v41; 
  int v42; 
  StaticModelCollisionCompressedModel *models; 
  __int64 v44; 
  unsigned int v45; 
  __int64 v46; 
  const char *v53; 
  const char *v58; 
  __int64 v64; 
  StaticModelCollisionCompressedModel *v67; 
  const char *v68; 
  const PhysicsAsset *physicsAsset; 
  unsigned int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  unsigned int DetailCollisionShapeCount; 
  char v73; 
  char v74; 
  bool v76; 
  const XModelDetailCollision *v78; 
  bool v80; 
  unsigned int v82; 
  bool v83; 
  const char *v85; 
  const char *v87; 
  const char *v88; 
  bool v93; 
  __int64 v98; 
  unsigned int numInstances; 
  __int64 v102; 
  const char *v103; 
  vec3_t bodyPosition; 
  vec3_t shapePosition; 
  vec4_t bodyOrientationAsQuat; 
  vec4_t shapeOrientationAsQuat; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = y;
  _R13 = x;
  v13 = scrPlace;
  _R14 = g_staticModels_CollisionTiles[tileIdx];
  if ( _R14 )
  {
    staticModelCollision = _R14->staticModelCollision;
    if ( staticModelCollision )
    {
      _EBX = 0;
      numModels = staticModelCollision->numModels;
      __asm { vmovaps xmmword ptr [r11-78h], xmm8 }
      v18 = 0;
      if ( (unsigned int)numModels >= 8 )
      {
        _RSI = staticModelCollision->models;
        v20 = 2;
        __asm
        {
          vpxor   xmm1, xmm1, xmm1
          vpxor   xmm2, xmm2, xmm2
        }
        do
        {
          _RAX = 56i64 * v18;
          v18 += 8;
          __asm
          {
            vmovd   xmm0, dword ptr [rax+rsi+2Ch]
            vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
            vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
            vpinsrd xmm0, xmm0, dword ptr [r10+rsi+2Ch], 3
            vpaddd  xmm1, xmm0, xmm1
          }
          v29 = (unsigned int)(v20 + 2);
          v20 += 8;
          _RAX = 56 * v29;
          __asm
          {
            vmovd   xmm0, dword ptr [rax+rsi+2Ch]
            vpinsrd xmm0, xmm0, dword ptr [rdx+rsi+2Ch], 1
            vpinsrd xmm0, xmm0, dword ptr [r8+rsi+2Ch], 2
            vpinsrd xmm0, xmm0, dword ptr [r9+rsi+2Ch], 3
            vpaddd  xmm2, xmm0, xmm2
          }
        }
        while ( v18 < ((unsigned int)numModels & 0xFFFFFFF8) );
        _RBP = y;
        v13 = scrPlace;
        __asm
        {
          vpaddd  xmm1, xmm2, xmm1
          vpsrldq xmm0, xmm1, 8
          vpaddd  xmm2, xmm1, xmm0
          vpsrldq xmm0, xmm2, 4
          vpaddd  xmm0, xmm2, xmm0
          vmovd   ebx, xmm0
        }
      }
      v41 = 0;
      v42 = 0;
      if ( v18 < (unsigned int)numModels )
      {
        if ( (unsigned int)numModels - v18 >= 2 )
        {
          models = staticModelCollision->models;
          v44 = v18;
          v45 = (((unsigned int)numModels - v18 - 2) >> 1) + 1;
          v46 = v45;
          v18 += 2 * v45;
          do
          {
            v41 += models[v44].numInstances;
            v42 += models[v44 + 1].numInstances;
            v44 += 2i64;
            --v46;
          }
          while ( v46 );
        }
        if ( v18 < (unsigned int)numModels )
          _EBX += staticModelCollision->models[v18].numInstances;
        _EBX += v42 + v41;
      }
      __asm
      {
        vmovss  xmm3, dword ptr [r14+14h]
        vmovss  xmm2, dword ptr [r14+10h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v53 = j_va("Tile %i at position %.2f, %.2f has %i instances of %i models", (unsigned int)tileIdx, _R8, _R9, _EBX, numModels);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      StaticModels_Debug_DrawString(v13, *(double *)&_XMM1, *(double *)&_XMM2, v53);
      __asm
      {
        vmovss  xmm8, cs:__real@40c00000
        vaddss  xmm0, xmm8, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm0
      }
      v58 = j_va("We list models that generate more than one shape instance or don't have origin as their collision root transform in red - these should be fixed");
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      StaticModels_Debug_DrawString(v13, *(double *)&_XMM1, *(double *)&_XMM2, v58);
      __asm
      {
        vaddss  xmm1, xmm8, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
        vmovss  xmm2, dword ptr [r13+0]
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [r13+0], xmm0
      }
      if ( (_DWORD)numModels )
      {
        __asm { vmovaps [rsp+138h+var_58], xmm6 }
        v64 = 0i64;
        __asm
        {
          vmovss  xmm6, cs:__real@3dcccccd
          vmovaps [rsp+138h+var_68], xmm7
          vmovss  xmm7, cs:__real@3a83126f
        }
        v102 = numModels;
        do
        {
          v67 = staticModelCollision->models;
          numInstances = v67[v64].numInstances;
          v68 = SL_ConvertToString(v67[v64].name);
          physicsAsset = v67[v64].physicsAsset;
          v103 = v68;
          if ( physicsAsset )
            PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
          else
            PhysicsAssetBodyCount = 0;
          detailCollision = v67[v64].detailCollision;
          if ( detailCollision )
            DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
          else
            DetailCollisionShapeCount = PhysicsAssetBodyCount;
          v73 = 1;
          v74 = 1;
          if ( PhysicsAssetBodyCount )
          {
            Physics_GetPhysicsAssetBodyTransform(v67[v64].physicsAsset, 0, &bodyPosition, &bodyOrientationAsQuat);
            __asm { vmovaps xmm2, xmm6; epsilon }
            v76 = VecNCompareCustomEpsilon(bodyPosition.v, vec3_origin.v, *(float *)&_XMM2, 3);
            __asm { vmovaps xmm2, xmm7; epsilon }
            v73 = VecNCompareCustomEpsilon(bodyOrientationAsQuat.v, quat_identity.v, *(float *)&_XMM2, 4) && v76;
          }
          v78 = v67[v64].detailCollision;
          if ( v78 && DetailCollisionShapeCount )
          {
            Physics_GetDetailCollisionShapeTransform(v78, 0, &shapePosition, &shapeOrientationAsQuat);
            __asm { vmovaps xmm2, xmm6; epsilon }
            v80 = VecNCompareCustomEpsilon(shapePosition.v, vec3_origin.v, *(float *)&_XMM2, 3);
            __asm { vmovaps xmm2, xmm7; epsilon }
            v74 = VecNCompareCustomEpsilon(shapeOrientationAsQuat.v, quat_identity.v, *(float *)&_XMM2, 4) && v80;
          }
          v82 = DetailCollisionShapeCount;
          if ( PhysicsAssetBodyCount > DetailCollisionShapeCount )
            v82 = PhysicsAssetBodyCount;
          v83 = v82 > 1 || !v73 || !v74;
          _RAX = &colorWhite;
          if ( v83 )
            _RAX = &colorRed;
          v85 = "isn't";
          if ( v74 )
            v85 = "is";
          __asm { vmovups xmm0, xmmword ptr [rax] }
          v87 = "isn't";
          if ( v73 )
            v87 = "is";
          LODWORD(v98) = DetailCollisionShapeCount;
          __asm { vmovups xmmword ptr [rsp+138h+var_90], xmm0 }
          v88 = j_va("%i instances of %s, using %i physics asset shape instances (root: %s origin) and %i detail shape instances (root: %s origin)", numInstances, v103, PhysicsAssetBodyCount, v87, v98, v85);
          _RBX = y;
          __asm
          {
            vmovss  xmm1, dword ptr [r13+0]; x
            vmovss  xmm2, dword ptr [rbx]; y
          }
          StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v88);
          __asm { vaddss  xmm1, xmm8, dword ptr [rbx] }
          ++v64;
          v93 = v102-- == 1;
          __asm { vmovss  dword ptr [rbx], xmm1 }
        }
        while ( !v93 );
        __asm
        {
          vmovss  xmm0, dword ptr [r13+0]
          vmovaps xmm7, [rsp+138h+var_68]
          vmovaps xmm6, [rsp+138h+var_58]
        }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm8
        vmovaps xmm8, [rsp+138h+var_78]
        vmovss  dword ptr [r13+0], xmm0
      }
    }
  }
}

/*
==============
StaticModels_Debug_Draw_InstancesHeatmap
==============
*/
void StaticModels_Debug_Draw_InstancesHeatmap(const ScreenPlacement *scrPlace, float *x, float *y, int selectedTileIdx)
{
  cg_t *LocalClientGlobals; 
  unsigned int i; 
  const CollisionTile *v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v57; 
  const CollisionTile *v67; 
  __int64 v68; 
  unsigned int v69; 
  int v70; 
  const char *v72; 
  cg_t *v75; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  float setColord; 
  float color; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  vec4_t v108; 

  _RBP = y;
  _R14 = x;
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  if ( LocalClientGlobals )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovaps [rsp+178h+var_48], xmm6
      vmovaps [rsp+178h+var_58], xmm7
      vmovaps [rsp+178h+var_68], xmm8
      vmovaps [rsp+178h+var_78], xmm9
      vmovaps [rsp+178h+var_88], xmm10
      vmovaps [rsp+178h+var_98], xmm11
      vmovaps [rsp+178h+var_A8], xmm12
      vmovaps [rsp+178h+var_B8], xmm13
      vmovss  xmm13, cs:__real@43c00000
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+178h+setColor], xmm13
      vmovaps [rsp+178h+var_C8], xmm14
    }
    UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, 1, 1, &colorBlack);
    __asm
    {
      vmovss  xmm14, cs:__real@43400000
      vmovss  xmm12, cs:__real@3f800000
    }
    if ( LocalClientGlobals->compassMapMaterial )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3ac00000
        vmulss  xmm0, xmm3, dword ptr [rbx+4A018h]
        vmulss  xmm4, xmm3, dword ptr [rbx+4A024h]
        vmulss  xmm5, xmm3, dword ptr [rbx+4A020h]
        vaddss  xmm1, xmm0, xmm14
        vmulss  xmm0, xmm3, dword ptr [rbx+4A01Ch]
        vaddss  xmm1, xmm1, dword ptr [r14]; x
        vsubss  xmm0, xmm14, xmm0
        vaddss  xmm2, xmm0, dword ptr [rbp+0]; y
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+178h+var_120], xmm0
        vmovss  [rsp+178h+var_128], xmm12
        vmovss  [rsp+178h+var_130], xmm12
        vmovss  [rsp+178h+var_138], xmm0
        vmovss  dword ptr [rsp+178h+color], xmm0
        vmovaps xmm3, xmm5; w
        vmovss  dword ptr [rsp+178h+setColor], xmm4
      }
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, 1, 1, color, v104, v105, v106, v107, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
    }
    __asm
    {
      vmovss  xmm6, cs:__real@41400000
      vmovss  xmm11, cs:__real@3e99999a
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm10, cs:__real@41300000
    }
    for ( i = 0; i < 0x400; ++i )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm1, dword ptr [r14]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm8, xmm1, dword ptr [rbp+0]
      }
      v47 = g_staticModels_CollisionTiles[i];
      if ( v47 )
      {
        v48 = v47->gridId[1] + 32i64 * v47->gridId[0];
        v49 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v48];
        if ( s_staticModels_Debug_NumTileShapeSimulationInstances[0][v48] > v49 )
          v49 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v48];
        if ( v49 )
          goto LABEL_10;
      }
      if ( i == selectedTileIdx )
      {
LABEL_10:
        __asm { vmovss  dword ptr [rsp+178h+var_F8+0Ch], xmm11 }
        StaticModels_Debug_Draw_GetTileColor(i, &v108);
        if ( i == selectedTileIdx )
        {
          __asm
          {
            vmovaps xmm3, xmm6; width
            vmovaps xmm2, xmm8; y
            vmovaps xmm1, xmm7; x
            vmovss  dword ptr [rsp+178h+setColor], xmm6
          }
          UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, 1, 1, &colorWhite);
        }
        __asm
        {
          vaddss  xmm2, xmm8, xmm9; y
          vaddss  xmm1, xmm7, xmm9; x
          vmovaps xmm3, xmm10; width
          vmovss  dword ptr [rsp+178h+setColor], xmm10
        }
        UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, 1, 1, &v108);
      }
    }
    __asm { vmovaps xmm11, [rsp+178h+var_98] }
    v57 = 0;
    __asm
    {
      vmovaps xmm10, [rsp+178h+var_88]
      vmovaps xmm9, [rsp+178h+var_78]
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm1, dword ptr [r14]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm8, xmm1, dword ptr [rbp+0]
      }
      v67 = g_staticModels_CollisionTiles[v57];
      if ( v67 )
      {
        v68 = v67->gridId[1] + 32i64 * v67->gridId[0];
        v69 = s_staticModels_Debug_NumTileShapeDetailInstances[0][v68];
        if ( s_staticModels_Debug_NumTileShapeSimulationInstances[0][v68] > v69 )
          v69 = s_staticModels_Debug_NumTileShapeSimulationInstances[0][v68];
        if ( v69 )
          goto LABEL_20;
      }
      if ( v57 == selectedTileIdx )
      {
LABEL_20:
        __asm { vmovss  dword ptr [rsp+178h+var_F8+0Ch], xmm12 }
        StaticModels_Debug_Draw_GetTileColor(v57, &v108);
        _RAX = &v108;
        if ( v57 == selectedTileIdx )
          _RAX = &colorWhite;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsp+178h+var_E8], xmm0
        }
        v72 = j_va("%iK", (unsigned int)(v70 + 1023) >> 10);
        __asm
        {
          vmovaps xmm2, xmm8; y
          vmovaps xmm1, xmm7; x
        }
        StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v72);
      }
      ++v57;
    }
    while ( v57 < 0x400 );
    v75 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovaps xmm12, [rsp+178h+var_A8]
      vmovaps xmm8, [rsp+178h+var_68]
      vmovaps xmm7, [rsp+178h+var_58]
    }
    p_view = &v75->refdef.view;
    if ( v75 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    __asm { vmovss  xmm3, cs:__real@39000000 }
    LODWORD(v108.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(v108.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rsp+178h+var_F8+4]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm0, xmm14, xmm2
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vsubss  xmm2, xmm1, cs:__real@40000000; y
      vmulss  xmm1, xmm3, dword ptr [rsp+178h+var_F8]
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm4, xmm3, xmm14
      vaddss  xmm0, xmm4, dword ptr [r14]
      vmovss  xmm3, cs:__real@40800000; width
      vsubss  xmm1, xmm0, cs:__real@40000000; x
      vmovss  dword ptr [rsp+178h+setColor], xmm3
    }
    UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColord, 1, 1, &colorBlue);
    __asm
    {
      vaddss  xmm1, xmm13, dword ptr [rbp+0]
      vmovaps xmm14, [rsp+178h+var_C8]
      vmovaps xmm13, [rsp+178h+var_B8]
      vmovaps xmm6, [rsp+178h+var_48]
      vmovss  dword ptr [rbp+0], xmm1
    }
  }
}

/*
==============
StaticModels_Debug_Draw_Memory
==============
*/
void StaticModels_Debug_Draw_Memory(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v4; 
  unsigned int v8; 
  StaticModelCollisionModelList *staticModelCollisionModelLists; 
  __int64 numStaticModelCollisionModelLists; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  const CollisionTile **v14; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int numModels; 
  unsigned int v17; 
  const char *v21; 
  const char *v28; 
  const char *v30; 

  v4 = 0;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBP = y;
  _RSI = x;
  v8 = 0;
  if ( cm.numStaticModelCollisionModelLists )
  {
    staticModelCollisionModelLists = cm.staticModelCollisionModelLists;
    numStaticModelCollisionModelLists = cm.numStaticModelCollisionModelLists;
    do
    {
      v11 = staticModelCollisionModelLists->numModels == 0;
      v12 = v8 + 1;
      ++staticModelCollisionModelLists;
      if ( v11 )
        v12 = v8;
      v8 = v12;
      --numStaticModelCollisionModelLists;
    }
    while ( numStaticModelCollisionModelLists );
  }
  v13 = 1024i64;
  v14 = g_staticModels_CollisionTiles;
  do
  {
    if ( *v14 )
    {
      staticModelCollision = (*v14)->staticModelCollision;
      if ( staticModelCollision )
      {
        numModels = staticModelCollision->numModels;
        v17 = v4 + 1;
        if ( !numModels )
          v17 = v4;
        v4 = v17;
        if ( numModels )
          v4 = v17;
      }
    }
    ++v14;
    --v13;
  }
  while ( v13 );
  __asm { vmovss  xmm6, cs:__real@40c00000 }
  if ( v8 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    v21 = "Zones";
    if ( v8 == 1 )
      v21 = "Zone";
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v21);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    StaticModels_Debug_Draw_ClipmapZoneMemory(scrPlace, _RSI, _RBP, cm.numStaticModelCollisionModelLists, cm.staticModelCollisionModelLists, StaticModels_Debug_IsClipmapZoneLoaded, StaticModels_Debug_GetClipmapZoneName, v8 > 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsi], xmm1
    }
  }
  if ( v4 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    v28 = "Tiles";
    if ( v4 == 1 )
      v28 = "Tile";
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v28);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
    }
    v30 = j_va("Tile Details");
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v30);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    StaticModels_Debug_Draw_CollisionTileMemory(scrPlace, _RSI, _RBP, 0x400u, g_staticModels_CollisionTiles, StaticModels_Debug_IsCollisionTileLoaded, StaticModels_Debug_GetCollisionTileName, v4 > 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsi], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
StaticModels_Debug_Draw_NotRootTransformInstances
==============
*/
void StaticModels_Debug_Draw_NotRootTransformInstances(const ScreenPlacement *scrPlace, float *x, float *y)
{
  signed __int64 v3; 
  void *v6; 
  __int64 v7; 
  unsigned int v8; 
  const CollisionTile **v11; 
  __int64 v12; 
  const CollisionTile *v13; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v15; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  int DetailCollisionShapeCount; 
  char v21; 
  char v22; 
  bool v24; 
  const XModelDetailCollision *v26; 
  bool v28; 
  int v30; 
  __int64 v31; 
  const char *v32; 
  const char *v39; 
  __int64 v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  __int64 numModels; 
  const CollisionTile **v59; 
  __int64 v60; 
  StaticModelCollisionCompressedModelList *v61; 
  vec3_t bodyPosition; 
  vec3_t shapePosition; 
  vec4_t bodyOrientationAsQuat; 
  vec4_t shapeOrientationAsQuat; 
  int v69[24576]; 
  scr_string_t stringValue[24576]; 
  char v71[24576]; 
  char v72[24576]; 
  char v75; 

  v6 = alloca(v3);
  __asm
  {
    vmovaps [rsp+3C118h+var_48], xmm6
    vmovaps [rsp+3C118h+var_58], xmm7
  }
  v7 = 0i64;
  v8 = 0;
  memset_0(stringValue, 0, sizeof(stringValue));
  memset_0(v69, 0, sizeof(v69));
  memset_0(v72, 0, sizeof(v72));
  memset_0(v71, 0, sizeof(v71));
  __asm
  {
    vmovss  xmm6, cs:__real@3dcccccd
    vmovss  xmm7, cs:__real@3a83126f
  }
  v11 = g_staticModels_CollisionTiles;
  v12 = 1024i64;
  v59 = g_staticModels_CollisionTiles;
  v60 = 1024i64;
  do
  {
    v13 = *v11;
    if ( v13 )
    {
      staticModelCollision = v13->staticModelCollision;
      v61 = staticModelCollision;
      if ( staticModelCollision )
      {
        if ( staticModelCollision->numModels )
        {
          v15 = 0i64;
          numModels = staticModelCollision->numModels;
          do
          {
            models = staticModelCollision->models;
            physicsAsset = models[v15].physicsAsset;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v15].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v21 = 1;
            v22 = 1;
            if ( PhysicsAssetBodyCount )
            {
              Physics_GetPhysicsAssetBodyTransform(models[v15].physicsAsset, 0, &bodyPosition, &bodyOrientationAsQuat);
              __asm { vmovaps xmm2, xmm6; epsilon }
              v24 = VecNCompareCustomEpsilon(bodyPosition.v, vec3_origin.v, *(float *)&_XMM2, 3);
              __asm { vmovaps xmm2, xmm7; epsilon }
              v21 = VecNCompareCustomEpsilon(bodyOrientationAsQuat.v, quat_identity.v, *(float *)&_XMM2, 4) && v24;
            }
            v26 = models[v15].detailCollision;
            if ( v26 && DetailCollisionShapeCount )
            {
              Physics_GetDetailCollisionShapeTransform(v26, 0, &shapePosition, &shapeOrientationAsQuat);
              __asm { vmovaps xmm2, xmm6; epsilon }
              v28 = VecNCompareCustomEpsilon(shapePosition.v, vec3_origin.v, *(float *)&_XMM2, 3);
              __asm { vmovaps xmm2, xmm7; epsilon }
              v22 = VecNCompareCustomEpsilon(shapeOrientationAsQuat.v, quat_identity.v, *(float *)&_XMM2, 4) && v28;
            }
            if ( !v21 || !v22 )
            {
              v30 = 0;
              if ( v8 )
              {
                while ( stringValue[v30] != models[v15].name )
                {
                  if ( ++v30 >= v8 )
                    goto LABEL_22;
                }
                v69[v30] += models[v15].numInstances;
              }
              else
              {
LABEL_22:
                if ( v8 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 1469, ASSERT_TYPE_ASSERT, "(numBadModels < (24064 + 512))", (const char *)&queryFormat, "numBadModels < XMODEL_POOL_SIZE") )
                  __debugbreak();
                v31 = v8++;
                stringValue[v31] = models[v15].name;
                v69[v31] = models[v15].numInstances;
                v72[v31] = v21 ^ 1;
                v71[v31] = v22 ^ 1;
              }
            }
            staticModelCollision = v61;
            ++v15;
            --numModels;
          }
          while ( numModels );
          v12 = v60;
        }
      }
    }
    v11 = v59 + 1;
    --v12;
    ++v59;
    v60 = v12;
  }
  while ( v12 );
  if ( v8 )
  {
    v32 = j_va("%i static models have collision data at offset transforms", v8);
    _RSI = y;
    _RBP = x;
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v32);
    __asm
    {
      vmovss  xmm6, cs:__real@40c00000
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    v39 = j_va("Assets flagged as bad normally have their root pivot not at the origin in Max/Maya.");
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v39);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm2, dword ptr [rbp+0]
      vaddss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbp+0], xmm0
    }
    v45 = v8;
    do
    {
      v46 = SL_ConvertToString(stringValue[v7]);
      v47 = "Good";
      v48 = "Good";
      if ( v71[v7] )
        v47 = "Bad";
      if ( v72[v7] )
        v48 = "Bad";
      v49 = j_va("%i instances of %s, where physics asset is %s and detail collision is %s", (unsigned int)v69[v7], v46, v48, v47);
      __asm
      {
        vmovss  xmm2, dword ptr [rsi]; y
        vmovss  xmm1, dword ptr [rbp+0]; x
      }
      StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v49);
      ++v7;
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm1
      }
      --v45;
    }
    while ( v45 );
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vsubss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
StaticModels_Debug_Draw_OverlyExpensiveInstances
==============
*/
void StaticModels_Debug_Draw_OverlyExpensiveInstances(const ScreenPlacement *scrPlace, float *x, float *y)
{
  __int64 v4; 
  __int64 v5; 
  const CollisionTile **v6; 
  __int64 v7; 
  const CollisionTile *v8; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  __int64 v10; 
  __int64 numModels; 
  StaticModelCollisionCompressedModel *models; 
  const PhysicsAsset *physicsAsset; 
  unsigned int PhysicsAssetBodyCount; 
  const XModelDetailCollision *detailCollision; 
  unsigned int DetailCollisionShapeCount; 
  unsigned int v17; 
  int v18; 
  const char *v19; 
  const char *v26; 
  const char *v30; 
  const char *v36; 
  const char *v37; 
  char *fmt; 
  const CollisionTile **v45; 
  __int64 v46; 
  int v50[24576]; 
  scr_string_t stringValue[24576]; 
  int v52[24576]; 
  int v53[24576]; 

  v4 = 0i64;
  v5 = 0i64;
  memset_0(stringValue, 0, sizeof(stringValue));
  memset_0(v50, 0, sizeof(v50));
  memset_0(v53, 0, sizeof(v53));
  memset_0(v52, 0, sizeof(v52));
  v6 = g_staticModels_CollisionTiles;
  v7 = 1024i64;
  v45 = g_staticModels_CollisionTiles;
  v46 = 1024i64;
  do
  {
    v8 = *v6;
    if ( v8 )
    {
      staticModelCollision = v8->staticModelCollision;
      if ( staticModelCollision )
      {
        if ( staticModelCollision->numModels )
        {
          v10 = 0i64;
          numModels = staticModelCollision->numModels;
          do
          {
            models = staticModelCollision->models;
            physicsAsset = models[v10].physicsAsset;
            if ( physicsAsset )
              PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(physicsAsset);
            else
              PhysicsAssetBodyCount = 0;
            detailCollision = models[v10].detailCollision;
            if ( detailCollision )
              DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(detailCollision);
            else
              DetailCollisionShapeCount = PhysicsAssetBodyCount;
            v17 = DetailCollisionShapeCount;
            if ( PhysicsAssetBodyCount > DetailCollisionShapeCount )
              v17 = PhysicsAssetBodyCount;
            if ( v17 > 1 )
            {
              v18 = 0;
              if ( (_DWORD)v5 )
              {
                while ( stringValue[v18] != models[v10].name )
                {
                  if ( ++v18 >= (unsigned int)v5 )
                    goto LABEL_18;
                }
                v50[v18] += models[v10].numInstances;
              }
              else
              {
LABEL_18:
                if ( (unsigned int)v5 >= 0x6000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 1334, ASSERT_TYPE_ASSERT, "(numBadModels < (24064 + 512))", (const char *)&queryFormat, "numBadModels < XMODEL_POOL_SIZE") )
                  __debugbreak();
                stringValue[v5] = models[v10].name;
                v50[v5] = models[v10].numInstances;
                v53[v5] = PhysicsAssetBodyCount;
                v52[v5] = DetailCollisionShapeCount;
                v5 = (unsigned int)(v5 + 1);
              }
            }
            ++v10;
            --numModels;
          }
          while ( numModels );
          v7 = v46;
        }
      }
    }
    v6 = v45 + 1;
    --v7;
    ++v45;
    v46 = v7;
  }
  while ( v7 );
  if ( (_DWORD)v5 )
  {
    __asm { vmovaps [rsp+600B8h+var_48], xmm6 }
    v19 = j_va("%i static models are creating more shape instances than they need to", (unsigned int)v5);
    _RDI = y;
    _RSI = x;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v19);
    __asm
    {
      vmovss  xmm6, cs:__real@40c00000
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
    v26 = j_va("Physics Asset counts above 1 indicate that there is >1 rigid body and this was not intended to be a static model.");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v26);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
    v30 = j_va("XModel Detail collision counts above 1 indicate that this model was intended to be animated.");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    fmt = (char *)&colorRed;
    StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v30);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi]
      vaddss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rsi], xmm0
    }
    do
    {
      v36 = SL_ConvertToString(stringValue[v4]);
      LODWORD(fmt) = v52[v4];
      v37 = j_va("%i instances of %s, using %i physics asset shape instances and %i detail shape instances", (unsigned int)v50[v4], v36, (unsigned int)v53[v4], fmt);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [rsi]; x
      }
      fmt = (char *)&colorRed;
      StaticModels_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v37);
      ++v4;
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      --v5;
    }
    while ( v5 );
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm0, xmm0, xmm6
      vmovaps xmm6, [rsp+600B8h+var_48]
      vmovss  dword ptr [rsi], xmm0
    }
  }
}

/*
==============
StaticModels_Debug_GetClipmapZoneName
==============
*/
void StaticModels_Debug_GetClipmapZoneName(const int staticModelZoneIdx, char *zoneName, __int64 a3, __int64 a4, __int64 a5)
{
  const char *WorldTransientName; 

  if ( !staticModelZoneIdx )
    Com_sprintf(zoneName, 0x104ui64, "Main");
  WorldTransientName = DB_Transients_GetWorldTransientName(staticModelZoneIdx);
  Com_sprintf(zoneName, 0x104ui64, (const char *)&queryFormat, WorldTransientName, a5);
}

/*
==============
StaticModels_Debug_GetCollisionTileName
==============
*/
void StaticModels_Debug_GetCollisionTileName(const int tileIdx, char *tileName)
{
  const CollisionTile *v4; 
  char *fmt; 
  __int64 v6; 
  unsigned int index; 

  v4 = g_staticModels_CollisionTiles[tileIdx];
  if ( v4->index != tileIdx )
  {
    index = v4->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 355, ASSERT_TYPE_ASSERT, "( collisionTile->index ) == ( static_cast<uint>(tileIdx) )", "%s == %s\n\t%u, %u", "collisionTile->index", "static_cast<uint>(tileIdx)", index, tileIdx) )
      __debugbreak();
  }
  LODWORD(v6) = v4->gridId[1];
  LODWORD(fmt) = v4->gridId[0];
  Com_sprintf(tileName, 0x104ui64, "Tile %i at Grid %i,%i", (unsigned int)tileIdx, fmt, v6);
}

/*
==============
StaticModels_Debug_GetNameForShape
==============
*/
const char *StaticModels_Debug_GetNameForShape(const hknpShape *shape)
{
  const char *NameForShape_Internal; 

  DB_LockTableForRead();
  NameForShape_Internal = StaticModels_Debug_GetNameForShape_Internal(shape);
  DB_UnlockTableForRead();
  return NameForShape_Internal;
}

/*
==============
StaticModels_Debug_GetNameForShape_Internal
==============
*/
const char *StaticModels_Debug_GetNameForShape_Internal(const hknpShape *shape)
{
  __int64 v1; 
  StaticModelCollisionModelList *v3; 
  int ZoneIndexFromWorldTransientIndex; 
  unsigned int v5; 
  __int64 v6; 
  StaticModelCollisionModel *v7; 
  const PhysicsAsset *v8; 
  int v9; 
  unsigned int v10; 
  const hknpShape *v11; 
  const XModelDetailCollision *modelDetailCollision; 
  bool IsXAssetTransient; 
  int v14; 
  unsigned int v15; 
  const hknpShape *v16; 
  unsigned int v17; 
  const CollisionTile **v18; 
  const CollisionTile *v19; 
  StaticModelCollisionCompressedModelList *staticModelCollision; 
  unsigned int v21; 
  __int64 v22; 
  StaticModelCollisionCompressedModel *v23; 
  const PhysicsAsset *physicsAsset; 
  int v25; 
  unsigned int PhysicsAssetBodyCount; 
  const hknpShape *PhysicsAssetShape; 
  const XModelDetailCollision *detailCollision; 
  int v29; 
  unsigned int DetailCollisionShapeCount; 
  const hknpShape *DetailCollisionShape; 
  int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int numModels; 
  StaticModelCollisionModelList *v37; 
  const CollisionTile **i; 

  v1 = 0i64;
  if ( !cm.numStaticModelCollisionModelLists )
  {
LABEL_26:
    v17 = 0;
    v18 = g_staticModels_CollisionTiles;
    v34 = 0;
    for ( i = g_staticModels_CollisionTiles; ; ++i )
    {
      v19 = *v18;
      if ( v19 )
      {
        staticModelCollision = v19->staticModelCollision;
        if ( staticModelCollision )
        {
          if ( StaticModels_HasCollisionTileShapeData(v19->gridId[0], v19->gridId[1]) )
          {
            v21 = 0;
            numModels = staticModelCollision->numModels;
            if ( staticModelCollision->numModels )
              break;
          }
        }
      }
LABEL_44:
      ++v17;
      v18 = i + 1;
      v34 = v17;
      if ( v17 >= 0x400 )
        return 0i64;
    }
    v22 = 0i64;
    while ( 1 )
    {
      v23 = &staticModelCollision->models[v22];
      physicsAsset = v23->physicsAsset;
      if ( physicsAsset )
      {
        v25 = 0;
        PhysicsAssetBodyCount = Physics_GetPhysicsAssetBodyCount(v23->physicsAsset);
        if ( PhysicsAssetBodyCount )
          break;
      }
LABEL_37:
      detailCollision = v23->detailCollision;
      if ( detailCollision )
      {
        v29 = 0;
        DetailCollisionShapeCount = Physics_GetDetailCollisionShapeCount(v23->detailCollision);
        if ( DetailCollisionShapeCount )
        {
          do
          {
            DetailCollisionShape = Physics_GetDetailCollisionShape(detailCollision, v29);
            if ( DetailCollisionShape == shape || Physics_IsChildOfShape(DetailCollisionShape, shape) )
              return SL_ConvertToString(v23->name);
          }
          while ( ++v29 < DetailCollisionShapeCount );
        }
      }
      ++v21;
      ++v22;
      if ( v21 >= numModels )
      {
        v17 = v34;
        goto LABEL_44;
      }
    }
    while ( 1 )
    {
      PhysicsAssetShape = Physics_GetPhysicsAssetShape(physicsAsset, v25);
      if ( PhysicsAssetShape == shape || Physics_IsChildOfShape(PhysicsAssetShape, shape) )
        return SL_ConvertToString(v23->name);
      if ( ++v25 >= PhysicsAssetBodyCount )
        goto LABEL_37;
    }
  }
  while ( 1 )
  {
    if ( StaticModels_HasClipmapZoneShapeData(v1) )
    {
      v3 = &cm.staticModelCollisionModelLists[v1];
      v37 = v3;
      ZoneIndexFromWorldTransientIndex = DB_Zones_GetZoneIndexFromWorldTransientIndex(v1);
      v33 = ZoneIndexFromWorldTransientIndex;
      v5 = 0;
      v35 = v3->numModels;
      if ( v3->numModels )
        break;
    }
LABEL_25:
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= cm.numStaticModelCollisionModelLists )
      goto LABEL_26;
  }
  v6 = 0i64;
  while ( 1 )
  {
    v7 = &v3->models[v6];
    v8 = v7->physicsAsset;
    if ( !v8 )
      goto LABEL_14;
    if ( DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, v8->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 158, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name ))", (const char *)&queryFormat, "!DB_IsXAssetTransientNonLocking( ASSET_TYPE_PHYSICSASSET, physicsAsset->name )") )
      __debugbreak();
    v9 = 0;
    v10 = Physics_GetPhysicsAssetBodyCount(v8);
    if ( v10 )
      break;
LABEL_13:
    ZoneIndexFromWorldTransientIndex = v33;
LABEL_14:
    modelDetailCollision = v7->detailCollision;
    if ( modelDetailCollision )
    {
      IsXAssetTransient = DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name);
      modelDetailCollision = v7->detailCollision;
    }
    else
    {
      IsXAssetTransient = 0;
    }
    if ( IsXAssetTransient )
      modelDetailCollision = DB_GetXAssetHeaderZoneSpecificNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, modelDetailCollision->name, ZoneIndexFromWorldTransientIndex).modelDetailCollision;
    if ( modelDetailCollision )
    {
      v14 = 0;
      v15 = Physics_GetDetailCollisionShapeCount(modelDetailCollision);
      if ( v15 )
      {
        do
        {
          v16 = Physics_GetDetailCollisionShape(modelDetailCollision, v14);
          if ( v16 == shape || Physics_IsChildOfShape(v16, shape) )
            return SL_ConvertToString(v7->name);
        }
        while ( ++v14 < v15 );
      }
    }
    v3 = v37;
    ++v5;
    ZoneIndexFromWorldTransientIndex = v33;
    ++v6;
    if ( v5 >= v35 )
      goto LABEL_25;
  }
  while ( 1 )
  {
    v11 = Physics_GetPhysicsAssetShape(v8, v9);
    if ( v11 == shape || Physics_IsChildOfShape(v11, shape) )
      return SL_ConvertToString(v7->name);
    if ( ++v9 >= v10 )
      goto LABEL_13;
  }
}

/*
==============
StaticModels_Debug_IsClipmapZoneLoaded
==============
*/
bool StaticModels_Debug_IsClipmapZoneLoaded(const int staticModelZoneIdx)
{
  bool HasClipmapZoneCollision; 
  bool result; 

  HasClipmapZoneCollision = StaticModels_HasClipmapZoneCollision(PHYSICS_WORLD_ID_CLIENT_FIRST, staticModelZoneIdx);
  result = StaticModels_HasClipmapZoneCollision(PHYSICS_WORLD_ID_CLIENT0_DETAIL, staticModelZoneIdx);
  if ( HasClipmapZoneCollision || result )
    return 1;
  return result;
}

/*
==============
StaticModels_Debug_IsCollisionTileLoaded
==============
*/
char StaticModels_Debug_IsCollisionTileLoaded(const int tileIdx)
{
  unsigned int index; 

  if ( g_staticModels_CollisionTiles[tileIdx]->index != tileIdx )
  {
    index = g_staticModels_CollisionTiles[tileIdx]->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 346, ASSERT_TYPE_ASSERT, "( collisionTile->index ) == ( static_cast<uint>(tileIdx) )", "%s == %s\n\t%u, %u", "collisionTile->index", "static_cast<uint>(tileIdx)", index, tileIdx) )
      __debugbreak();
  }
  return 1;
}

/*
==============
StaticModels_Debug_ResetDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetDetailShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  int v3; 

  v1 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v3 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v3) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeDetailInstances[v1] = 0;
}

/*
==============
StaticModels_Debug_ResetSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetSimulationShapeInstanceCount(const unsigned int staticModelZoneIdx)
{
  __int64 v1; 
  int v3; 

  v1 = staticModelZoneIdx;
  if ( staticModelZoneIdx >= 0x20 )
  {
    v3 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( staticModelZoneIdx ) < (unsigned)( STATICMODELS_MAX_ZONES )", "staticModelZoneIdx doesn't index STATICMODELS_MAX_ZONES\n\t%i not in [0, %i)", staticModelZoneIdx, v3) )
      __debugbreak();
  }
  s_staticModels_Debug_NumShapeSimulationInstances[v1] = 0;
}

/*
==============
StaticModels_Debug_ResetTileDetailShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetTileDetailShapeInstanceCount(const unsigned __int8 *gridId)
{
  unsigned __int8 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  if ( *gridId >= 0x20u )
  {
    v6 = 32;
    v4 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = gridId[1];
  if ( v2 >= 0x20u )
  {
    LODWORD(v5) = 32;
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumTileShapeDetailInstances[*gridId][gridId[1]] = 0;
}

/*
==============
StaticModels_Debug_ResetTileSimulationShapeInstanceCount
==============
*/
void StaticModels_Debug_ResetTileSimulationShapeInstanceCount(const unsigned __int8 *gridId)
{
  unsigned __int8 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  if ( *gridId >= 0x20u )
  {
    v6 = 32;
    v4 = *gridId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[0] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[0] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = gridId[1];
  if ( v2 >= 0x20u )
  {
    LODWORD(v5) = 32;
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_debug.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( gridId[1] ) < (unsigned)( COLLISION_TILE_MAX_RESOLUTION )", "gridId[1] doesn't index COLLISION_TILE_MAX_RESOLUTION\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  s_staticModels_Debug_NumTileShapeSimulationInstances[*gridId][gridId[1]] = 0;
}

