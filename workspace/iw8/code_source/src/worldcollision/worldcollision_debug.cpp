/*
==============
WorldCollision_Debug_Draw
==============
*/

void __fastcall WorldCollision_Debug_Draw(const ScreenPlacement *scrPlace)
{
  ?WorldCollision_Debug_Draw@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
WorldCollision_Debug_Draw
==============
*/
void WorldCollision_Debug_Draw(const ScreenPlacement *scrPlace)
{
  const dvar_t *v8; 
  const dvar_t *v13; 
  const dvar_t *v17; 
  __int64 v20; 
  cg_t *LocalClientGlobals; 
  const vec2_t *p_predictedPlayerState; 
  __int16 v23; 
  __int16 v24; 
  bool IsCollisionReadyAt; 
  bool v26; 
  __int64 v27; 
  const char *v28; 
  const char *v29; 
  const vec4_t *v30; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const CollisionTile **v35; 
  __int64 v36; 
  float v38; 
  unsigned int v40; 
  const CollisionTile *v42; 
  unsigned int havokTileShapeDataSize; 
  const char *v44; 
  float v45; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v65; 
  char *fmt; 
  int fmta; 
  hknpShape *memorySize; 
  __int16 gridIdx[2]; 
  float x; 
  vec3_t origin; 
  Bounds bounds; 
  vec4_t color; 
  char dest[256]; 
  char v78[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = DVARINT_worldCollision_debugDisplayOffsetX;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v13 = DVARINT_worldCollision_debugDisplayOffsetY;
  __asm
  {
    vaddss  xmm6, xmm0, xmm7
    vmovss  [rsp+300h+x], xmm6
  }
  if ( !DVARINT_worldCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v17 = DVARBOOL_worldCollision_DebugShowPlayerLoadedStatus;
  __asm
  {
    vaddss  xmm7, xmm0, xmm7
    vmovss  dword ptr [rsp+300h+gridIdx], xmm7
  }
  if ( !DVARBOOL_worldCollision_DebugShowPlayerLoadedStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugShowPlayerLoadedStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  __asm { vmovss  xmm8, cs:__real@40c00000 }
  v20 = 0i64;
  if ( v17->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_predictedPlayerState = (const vec2_t *)&LocalClientGlobals->predictedPlayerState;
    if ( !LocalClientGlobals )
      p_predictedPlayerState = NULL;
    v23 = 0;
    v24 = 1;
    gridIdx[0] = 0;
    gridIdx[1] = 1;
    if ( p_predictedPlayerState )
    {
      IsCollisionReadyAt = WorldCollision_IsCollisionReadyAt(PHYSICS_WORLD_ID_CLIENT_FIRST, p_predictedPlayerState + 6, gridIdx);
      v24 = gridIdx[1];
      v26 = IsCollisionReadyAt;
      v23 = gridIdx[0];
    }
    else
    {
      v26 = 0;
    }
    v27 = (unsigned int)v24;
    v28 = "World Collision Not Loaded at player location Grid %i, %i";
    if ( v26 )
      v28 = "World Collision Loaded at player location: Grid %i, %i";
    v29 = j_va(v28, (unsigned int)v23, v27);
    v30 = &colorRed;
    if ( v26 )
      v30 = &colorWhite;
    __asm
    {
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm6; x
    }
    WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v29, v30);
    __asm
    {
      vaddss  xmm7, xmm7, xmm8
      vmovss  dword ptr [rsp+300h+gridIdx], xmm7
    }
  }
  v33 = DVARBOOL_worldCollision_DebugWorldShapeList;
  if ( !DVARBOOL_worldCollision_DebugWorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugWorldShapeList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.enabled )
  {
    WorldCollision_Debug_DrawShapeList(scrPlace, &x, (float *)gridIdx, g_worldCollision_WorldShapeList, "World", cm.havokWorldShapeDataSize);
    __asm
    {
      vmovss  xmm6, [rsp+300h+x]
      vmovss  xmm7, dword ptr [rsp+300h+gridIdx]
    }
  }
  v34 = DVARBOOL_worldCollision_DebugCollisionTilesShapeLists;
  if ( !DVARBOOL_worldCollision_DebugCollisionTilesShapeLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugCollisionTilesShapeLists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = g_worldCollision_CollisionTiles;
  v36 = 1024i64;
  if ( v34->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+300h+var_68+8], xmm9
      vaddss  xmm9, xmm7, xmm8
    }
    v38 = 0.0;
    __asm
    {
      vmovaps [rsp+300h+var_78+8], xmm10
      vmovss  xmm10, cs:__real@c0c00000
      vmovss  dword ptr [rsp+300h+gridIdx], xmm9
    }
    x = 0.0;
    v40 = 0;
    __asm { vaddss  xmm6, xmm6, xmm8 }
    do
    {
      if ( g_worldCollision_CollisionTileShapes[v20] )
      {
        v42 = g_worldCollision_CollisionTiles[v20];
        if ( v42 )
        {
          havokTileShapeDataSize = v42->havokTileShapeDataSize;
          v44 = j_va("CollisionTile-%i", v40);
          LODWORD(fmt) = havokTileShapeDataSize;
          v45 = x;
          Com_sprintf<256>((char (*)[256])dest, "%i %s Shape List Shapes - %i bytes", x, v44, fmt);
          __asm
          {
            vmovaps xmm2, xmm9; y
            vmovaps xmm1, xmm6; x
          }
          WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite);
          memorySize = g_worldCollision_CollisionTileShapes[v20];
          __asm
          {
            vaddss  xmm0, xmm9, xmm8
            vaddss  xmm1, xmm6, xmm8
          }
          fmta = v42->worldCollisionShapeIdx;
          __asm
          {
            vmovss  dword ptr [rsp+300h+gridIdx], xmm0
            vmovss  [rsp+300h+x], xmm1
          }
          WorldCollision_Debug_DrawShapeListShapeSummary(scrPlace, &x, (float *)gridIdx, g_worldCollision_WorldShapeList, fmta, memorySize);
          __asm
          {
            vaddss  xmm6, xmm10, [rsp+300h+x]
            vmovss  xmm9, dword ptr [rsp+300h+gridIdx]
          }
          LODWORD(v38) = LODWORD(v45) + 1;
          x = v38;
        }
      }
      ++v40;
      ++v20;
    }
    while ( v40 < 0x400 );
    __asm
    {
      vaddss  xmm6, xmm6, xmm10
      vmovss  [rsp+300h+x], xmm6
    }
    Com_sprintf<256>((char (*)[256])v78, "%i Collision Tile Shape Lists", v38);
    __asm
    {
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm6; x
    }
    WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v78, &colorWhite);
    __asm
    {
      vmovaps xmm10, [rsp+300h+var_78+8]
      vmovaps xmm9, [rsp+300h+var_68+8]
    }
  }
  v54 = DVARBOOL_worldCollision_DebugMapEntsShapeList;
  if ( !DVARBOOL_worldCollision_DebugMapEntsShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugMapEntsShapeList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( v54->current.enabled )
    WorldCollision_Debug_DrawShapeList(scrPlace, &x, (float *)gridIdx, g_worldCollision_MapEntsShapeList, "Map-Ents", cm.mapEnts->havokEntsShapeDataSize);
  v55 = DVARBOOL_worldCollision_debugTiles;
  if ( !DVARBOOL_worldCollision_debugTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugTiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
    WorldCollision_Debug_DrawTileMap(scrPlace, &x, (float *)gridIdx);
  v56 = DVARBOOL_worldCollision_debugTilesWorld;
  if ( !DVARBOOL_worldCollision_debugTilesWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugTilesWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.enabled && CG_GetLocalClientGlobals(LOCAL_CLIENT_0) )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@45800000
      vmovss  xmm8, cs:__real@41200000
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      _RBX = *v35;
      if ( *v35 && _RBX->havokTileShapeDataSize && WorldCollision_HasCollisionTileCollision(PHYSICS_WORLD_ID_CLIENT_FIRST, _RBX->gridId[0], _RBX->gridId[1]) )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
          vmovups xmmword ptr [rsp+300h+color], xmm0
          vmovss  xmm1, dword ptr [rbx+10h]
          vmovss  dword ptr [rsp+300h+bounds.midPoint], xmm1
          vmovss  xmm0, dword ptr [rbx+14h]
          vmovaps xmm2, xmm6; yaw
          vmovss  dword ptr [rsp+300h+bounds.midPoint+4], xmm0
          vmovss  dword ptr [rsp+300h+bounds.halfSize], xmm7
          vmovss  dword ptr [rsp+300h+bounds.halfSize+4], xmm7
          vmovss  dword ptr [rsp+300h+bounds.halfSize+8], xmm6
          vmovss  dword ptr [rsp+300h+bounds.midPoint+8], xmm8
          vmovss  dword ptr [rsp+300h+origin], xmm6
          vmovss  dword ptr [rsp+300h+origin+4], xmm6
          vmovss  dword ptr [rsp+300h+origin+8], xmm6
        }
        CG_DebugBox(&origin, &bounds, *(float *)&_XMM2, &color, 0, 0);
      }
      ++v35;
      --v36;
    }
    while ( v36 );
  }
  v65 = DVARBOOL_worldCollision_debugDump;
  __asm
  {
    vmovaps xmm8, [rsp+300h+var_58+8]
    vmovaps xmm7, [rsp+300h+var_48+8]
    vmovaps xmm6, [rsp+300h+var_38+8]
  }
  if ( !DVARBOOL_worldCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  if ( v65->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_worldCollision_debugDump, 0);
}

/*
==============
WorldCollision_Debug_DrawShapeList
==============
*/
void WorldCollision_Debug_DrawShapeList(const ScreenPlacement *scrPlace, float *x, float *y, HavokPhysicsShapeList *shapeList, const char *name, unsigned int memorySize)
{
  int NumShapesInShapeList; 
  int v17; 
  char dest[256]; 

  _RSI = y;
  _RDI = x;
  if ( shapeList )
  {
    NumShapesInShapeList = Physics_GetNumShapesInShapeList(shapeList);
    WorldCollision_Debug_DrawSummary(scrPlace, _RDI, _RSI, NumShapesInShapeList, name, memorySize);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm1, xmm0, cs:__real@40c00000
    }
    v17 = 0;
    __asm { vmovss  dword ptr [rdi], xmm1 }
    if ( NumShapesInShapeList > 0 )
    {
      do
        WorldCollision_Debug_DrawShapeListShapeSummary(scrPlace, _RDI, _RSI, shapeList, v17++, NULL);
      while ( v17 < NumShapesInShapeList );
      __asm { vmovss  xmm1, dword ptr [rdi] }
    }
    __asm
    {
      vsubss  xmm0, xmm1, cs:__real@40c00000
      vmovss  dword ptr [rdi], xmm0
    }
  }
  else
  {
    Com_sprintf<256>((char (*)[256])dest, "No %s Shape List", name);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vaddss  xmm1, xmm0, cs:__real@40c00000
      vmovss  dword ptr [rsi], xmm1
    }
  }
}

/*
==============
WorldCollision_Debug_DrawShapeListShapeSummary
==============
*/
void WorldCollision_Debug_DrawShapeListShapeSummary(const ScreenPlacement *scrPlace, float *x, float *y, HavokPhysicsShapeList *shapeList, int shapeIdx, hknpShape *inShape)
{
  hknpShape *ShapeFromShapeList; 
  const char *ShapeNameFromShapeList; 
  const char *v12; 
  unsigned int ContentsFromShapeList; 
  const char *ShapeTypeName; 
  int ShapeVertCountFromShapeList; 
  int ShapeTriCountFromShapeList; 
  int ShapeConvexCountFromShapeList; 
  char dest[256]; 

  ShapeFromShapeList = inShape;
  _RBP = y;
  _R12 = x;
  if ( !inShape )
    ShapeFromShapeList = Physics_GetShapeFromShapeList(shapeList, shapeIdx);
  if ( shapeIdx >= Physics_GetNumShapeNamesInShapeList(shapeList) )
    ShapeNameFromShapeList = "World Entity Main_Tile";
  else
    ShapeNameFromShapeList = Physics_GetShapeNameFromShapeList(shapeList, shapeIdx);
  if ( ShapeFromShapeList )
  {
    ContentsFromShapeList = Physics_GetContentsFromShapeList(shapeList, shapeIdx);
    ShapeTypeName = Physics_GetShapeTypeName(ShapeFromShapeList);
    ShapeVertCountFromShapeList = Physics_GetShapeVertCountFromShapeList(shapeList, shapeIdx);
    ShapeTriCountFromShapeList = Physics_GetShapeTriCountFromShapeList(shapeList, shapeIdx);
    ShapeConvexCountFromShapeList = Physics_GetShapeConvexCountFromShapeList(shapeList, shapeIdx);
    if ( ShapeVertCountFromShapeList <= 0 )
    {
      if ( ShapeConvexCountFromShapeList <= 0 )
        Com_sprintf<256>((char (*)[256])dest, "%i: contents:%8x type:%s %s", (unsigned int)shapeIdx, ContentsFromShapeList, ShapeTypeName, ShapeNameFromShapeList);
      else
        Com_sprintf<256>((char (*)[256])dest, "%i: contents:%8x type:%s convex:%i %s", (unsigned int)shapeIdx, ContentsFromShapeList, ShapeTypeName, ShapeConvexCountFromShapeList, ShapeNameFromShapeList);
    }
    else if ( ShapeConvexCountFromShapeList <= 0 )
    {
      Com_sprintf<256>((char (*)[256])dest, "%i: contents:%8x type:%s verts:%i tris:%i %s", (unsigned int)shapeIdx, ContentsFromShapeList, ShapeTypeName, ShapeVertCountFromShapeList, ShapeTriCountFromShapeList, ShapeNameFromShapeList);
    }
    else
    {
      Com_sprintf<256>((char (*)[256])dest, "%i: contents:%8x type:%s verts:%i tris:%i convex:%i %s", (unsigned int)shapeIdx, ContentsFromShapeList, ShapeTypeName, ShapeVertCountFromShapeList, ShapeTriCountFromShapeList, ShapeConvexCountFromShapeList, ShapeNameFromShapeList);
    }
    __asm { vmovss  xmm2, dword ptr [rbp+0]; y }
    _RAX = x;
    __asm { vmovss  xmm1, dword ptr [rax]; x }
    WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite);
  }
  else
  {
    v12 = "Unknown";
    if ( ShapeNameFromShapeList )
      v12 = ShapeNameFromShapeList;
    Com_sprintf<256>((char (*)[256])dest, "%i: NULL Shape - check iwmap errors %s", (unsigned int)shapeIdx, v12);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    WorldCollision_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vaddss  xmm1, xmm0, cs:__real@40c00000
    vmovss  dword ptr [rbp+0], xmm1
  }
}

/*
==============
WorldCollision_Debug_DrawString
==============
*/

void __fastcall WorldCollision_Debug_DrawString(const ScreenPlacement *scrPlace, double x, double y, const char *string)
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
  v11 = DVARBOOL_worldCollision_debugDump;
  if ( !DVARBOOL_worldCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_worldCollision_debugDisplayOffsetX;
    __asm { vmovaps [rsp+88h+var_28], xmm7 }
    if ( !DVARINT_worldCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetX") )
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
WorldCollision_Debug_DrawSummary
==============
*/
void WorldCollision_Debug_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y, const int shapeCount, const char *name, const unsigned int memorySize)
{
  char dest[256]; 

  _RSI = y;
  _RDI = x;
  Com_sprintf<256>((char (*)[256])dest, "%i %s Shape List Shapes - %i bytes", (unsigned int)shapeCount, name, memorySize);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  WorldCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, dest);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, cs:__real@40c00000
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
WorldCollision_Debug_DrawTileMap
==============
*/
void WorldCollision_Debug_DrawTileMap(const ScreenPlacement *scrPlace, float *x, float *y)
{
  cg_t *LocalClientGlobals; 
  const char *v16; 
  unsigned int v40; 
  unsigned int i; 
  HavokPhysicsShapeList *v42; 
  const CollisionTile *v50; 
  signed int worldCollisionShapeIdx; 
  const CollisionTile *v65; 
  int v66; 
  const char *v67; 
  cg_t *v70; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  float color; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  vec4_t v102; 

  _R14 = y;
  _R15 = x;
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  if ( LocalClientGlobals )
  {
    __asm
    {
      vmovaps [rsp+168h+var_48], xmm6
      vmovaps [rsp+168h+var_58], xmm7
      vmovaps [rsp+168h+var_68], xmm8
      vmovaps [rsp+168h+var_78], xmm9
      vmovaps [rsp+168h+var_88], xmm10
      vmovaps [rsp+168h+var_98], xmm11
      vmovaps [rsp+168h+var_A8], xmm12
      vmovaps [rsp+168h+var_B8], xmm13
      vmovaps [rsp+168h+var_C8], xmm14
    }
    v16 = j_va("World Collision Budget is %iMB per tile.  Numbers below in MB", 7i64);
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [r15]; x
    }
    WorldCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v16);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vaddss  xmm2, xmm0, cs:__real@40c00000; y
      vmovss  xmm13, cs:__real@43c00000
      vmovss  dword ptr [r14], xmm2
      vmovss  xmm1, dword ptr [r15]; x
      vmovaps xmm3, xmm13; width
      vmovss  dword ptr [rsp+168h+setColor], xmm13
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
        vaddss  xmm1, xmm1, dword ptr [r15]; x
        vsubss  xmm0, xmm14, xmm0
        vaddss  xmm2, xmm0, dword ptr [r14]; y
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+168h+var_110], xmm0
        vmovss  [rsp+168h+var_118], xmm12
        vmovss  [rsp+168h+var_120], xmm12
        vmovss  [rsp+168h+var_128], xmm0
        vmovss  dword ptr [rsp+168h+color], xmm0
        vmovaps xmm3, xmm5; w
        vmovss  dword ptr [rsp+168h+setColor], xmm4
      }
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, 1, 1, color, v98, v99, v100, v101, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
    }
    __asm
    {
      vmovss  xmm6, cs:__real@41400000
      vmovss  xmm11, cs:__real@3e99999a
      vmovss  xmm7, cs:__real@3f000000
      vmovss  xmm8, cs:__real@41300000
    }
    v40 = 0;
    for ( i = 0; i < 0x400; ++i )
    {
      v42 = g_worldCollision_WorldShapeList;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm9, xmm1, dword ptr [r15]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm10, xmm1, dword ptr [r14]
      }
      if ( g_worldCollision_WorldShapeList )
      {
        v50 = g_worldCollision_CollisionTiles[i];
        if ( v50 )
        {
          worldCollisionShapeIdx = v50->worldCollisionShapeIdx;
          if ( worldCollisionShapeIdx < Physics_GetNumVertCountsInShapeList(g_worldCollision_WorldShapeList) )
          {
            if ( Physics_GetShapeVertCountFromShapeList(v42, worldCollisionShapeIdx) )
            {
              __asm { vmovss  dword ptr [rsp+168h+var_E8+0Ch], xmm11 }
              WorldCollision_Debug_Draw_GetTileColor(i, &v102);
              __asm
              {
                vaddss  xmm2, xmm10, xmm7; y
                vaddss  xmm1, xmm9, xmm7; x
                vmovaps xmm3, xmm8; width
                vmovss  dword ptr [rsp+168h+setColor], xmm8
              }
              UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, 1, 1, &v102);
            }
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+168h+var_98]
      vmovaps xmm10, [rsp+168h+var_88]
      vmovaps xmm9, [rsp+168h+var_78]
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm1, dword ptr [r15]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm8, xmm1, dword ptr [r14]
      }
      v65 = g_worldCollision_CollisionTiles[v40];
      if ( v65 && v65->havokTileShapeDataSize )
      {
        __asm { vmovss  dword ptr [rsp+168h+var_E8+0Ch], xmm12 }
        WorldCollision_Debug_Draw_GetTileColor(v40, &v102);
        v67 = j_va("%i", (unsigned int)((v66 + 1023) / 1024 + 1023) >> 10);
        __asm
        {
          vmovaps xmm2, xmm8; y
          vmovaps xmm1, xmm7; x
        }
        WorldCollision_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v67);
      }
      ++v40;
    }
    while ( v40 < 0x400 );
    v70 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovaps xmm12, [rsp+168h+var_A8]
      vmovaps xmm8, [rsp+168h+var_68]
      vmovaps xmm7, [rsp+168h+var_58]
    }
    p_view = &v70->refdef.view;
    if ( v70 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    __asm { vmovss  xmm3, cs:__real@39000000 }
    LODWORD(v102.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(v102.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rsp+168h+var_E8+4]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm0, xmm14, xmm2
      vaddss  xmm1, xmm0, dword ptr [r14]
      vsubss  xmm2, xmm1, cs:__real@40000000; y
      vmulss  xmm1, xmm3, dword ptr [rsp+168h+var_E8]
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm4, xmm3, xmm14
      vaddss  xmm0, xmm4, dword ptr [r15]
      vmovss  xmm3, cs:__real@40800000; width
      vsubss  xmm1, xmm0, cs:__real@40000000; x
      vmovss  dword ptr [rsp+168h+setColor], xmm3
    }
    UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, 1, 1, &colorBlue);
    __asm
    {
      vaddss  xmm1, xmm13, dword ptr [r14]
      vmovaps xmm14, [rsp+168h+var_C8]
      vmovaps xmm13, [rsp+168h+var_B8]
      vmovaps xmm6, [rsp+168h+var_48]
      vmovss  dword ptr [r14], xmm1
    }
  }
}

/*
==============
WorldCollision_Debug_Draw_GetTileColor
==============
*/
void WorldCollision_Debug_Draw_GetTileColor(int tileIdx, vec4_t *color)
{
  const CollisionTile *v2; 
  unsigned int havokTileShapeDataSize; 

  v2 = g_worldCollision_CollisionTiles[tileIdx];
  if ( v2 )
    havokTileShapeDataSize = v2->havokTileShapeDataSize;
  else
    havokTileShapeDataSize = 0;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B+4; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:?colorMdGreen@@3Tvec4_t@@B+8; vec4_t const colorMdGreen
    vmovss  dword ptr [rdx+8], xmm0
  }
  if ( havokTileShapeDataSize <= 0x700000 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm0, cs:__real@4ac99999
      vcomiss xmm0, cs:__real@4aa80000
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

