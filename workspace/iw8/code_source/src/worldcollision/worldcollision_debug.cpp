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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  float integer; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  cg_t *LocalClientGlobals; 
  const vec2_t *p_predictedPlayerState; 
  __int16 v18; 
  __int16 v19; 
  bool IsCollisionReadyAt; 
  bool v21; 
  __int64 v22; 
  const char *v23; 
  const char *v24; 
  const vec4_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const CollisionTile **v28; 
  __int64 v29; 
  float v30; 
  float v31; 
  unsigned int v32; 
  float v33; 
  const CollisionTile *v34; 
  unsigned int havokTileShapeDataSize; 
  const char *v36; 
  float v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  const CollisionTile *v41; 
  const dvar_t *v42; 
  char *fmt; 
  int fmta; 
  hknpShape *memorySize; 
  __int16 gridIdx[2]; 
  float x; 
  vec3_t origin; 
  Bounds bounds; 
  vec4_t color; 
  char dest[256]; 
  char v52[256]; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 

  v6 = DVARINT_worldCollision_debugDisplayOffsetX;
  v57 = v1;
  v56 = v2;
  v55 = v3;
  if ( !DVARINT_worldCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = (float)v6->current.integer;
  v9 = DVARINT_worldCollision_debugDisplayOffsetY;
  v10 = integer + 8.0;
  x = integer + 8.0;
  if ( !DVARINT_worldCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v11 = (float)v9->current.integer;
  v12 = DVARBOOL_worldCollision_DebugShowPlayerLoadedStatus;
  v14 = v11 + 8.0;
  v13 = v14;
  *(float *)gridIdx = v14;
  if ( !DVARBOOL_worldCollision_DebugShowPlayerLoadedStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugShowPlayerLoadedStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v15 = 0i64;
  if ( v12->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_predictedPlayerState = (const vec2_t *)&LocalClientGlobals->predictedPlayerState;
    if ( !LocalClientGlobals )
      p_predictedPlayerState = NULL;
    v18 = 0;
    v19 = 1;
    gridIdx[0] = 0;
    gridIdx[1] = 1;
    if ( p_predictedPlayerState )
    {
      IsCollisionReadyAt = WorldCollision_IsCollisionReadyAt(PHYSICS_WORLD_ID_CLIENT_FIRST, p_predictedPlayerState + 6, gridIdx);
      v19 = gridIdx[1];
      v21 = IsCollisionReadyAt;
      v18 = gridIdx[0];
    }
    else
    {
      v21 = 0;
    }
    v22 = (unsigned int)v19;
    v23 = "World Collision Not Loaded at player location Grid %i, %i";
    if ( v21 )
      v23 = "World Collision Loaded at player location: Grid %i, %i";
    v24 = j_va(v23, (unsigned int)v18, v22);
    v25 = &colorRed;
    if ( v21 )
      v25 = &colorWhite;
    WorldCollision_Debug_DrawString(scrPlace, v10, v14, v24, v25);
    v13 = v14 + 6.0;
    *(float *)gridIdx = v14 + 6.0;
  }
  v26 = DVARBOOL_worldCollision_DebugWorldShapeList;
  if ( !DVARBOOL_worldCollision_DebugWorldShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugWorldShapeList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    WorldCollision_Debug_DrawShapeList(scrPlace, &x, (float *)gridIdx, g_worldCollision_WorldShapeList, "World", cm.havokWorldShapeDataSize);
    v10 = x;
    v13 = *(float *)gridIdx;
  }
  v27 = DVARBOOL_worldCollision_DebugCollisionTilesShapeLists;
  if ( !DVARBOOL_worldCollision_DebugCollisionTilesShapeLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugCollisionTilesShapeLists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = g_worldCollision_CollisionTiles;
  v29 = 1024i64;
  if ( v27->current.enabled )
  {
    v54 = v4;
    v30 = v13 + 6.0;
    v31 = 0.0;
    v53 = v5;
    *(float *)gridIdx = v13 + 6.0;
    x = 0.0;
    v32 = 0;
    v33 = v10 + 6.0;
    do
    {
      if ( g_worldCollision_CollisionTileShapes[v15] )
      {
        v34 = g_worldCollision_CollisionTiles[v15];
        if ( v34 )
        {
          havokTileShapeDataSize = v34->havokTileShapeDataSize;
          v36 = j_va("CollisionTile-%i", v32);
          LODWORD(fmt) = havokTileShapeDataSize;
          v37 = x;
          Com_sprintf<256>((char (*)[256])dest, "%i %s Shape List Shapes - %i bytes", x, v36, fmt);
          WorldCollision_Debug_DrawString(scrPlace, v33, v30, dest, &colorWhite);
          memorySize = g_worldCollision_CollisionTileShapes[v15];
          fmta = v34->worldCollisionShapeIdx;
          *(float *)gridIdx = v30 + 6.0;
          x = v33 + 6.0;
          WorldCollision_Debug_DrawShapeListShapeSummary(scrPlace, &x, (float *)gridIdx, g_worldCollision_WorldShapeList, fmta, memorySize);
          v33 = x + -6.0;
          v30 = *(float *)gridIdx;
          LODWORD(v31) = LODWORD(v37) + 1;
          x = v31;
        }
      }
      ++v32;
      ++v15;
    }
    while ( v32 < 0x400 );
    x = v33 + -6.0;
    Com_sprintf<256>((char (*)[256])v52, "%i Collision Tile Shape Lists", v31);
    WorldCollision_Debug_DrawString(scrPlace, v33 + -6.0, v13, v52, &colorWhite);
  }
  v38 = DVARBOOL_worldCollision_DebugMapEntsShapeList;
  if ( !DVARBOOL_worldCollision_DebugMapEntsShapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_DebugMapEntsShapeList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.enabled )
    WorldCollision_Debug_DrawShapeList(scrPlace, &x, (float *)gridIdx, g_worldCollision_MapEntsShapeList, "Map-Ents", cm.mapEnts->havokEntsShapeDataSize);
  v39 = DVARBOOL_worldCollision_debugTiles;
  if ( !DVARBOOL_worldCollision_debugTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugTiles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( v39->current.enabled )
    WorldCollision_Debug_DrawTileMap(scrPlace, &x, (float *)gridIdx);
  v40 = DVARBOOL_worldCollision_debugTilesWorld;
  if ( !DVARBOOL_worldCollision_debugTilesWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugTilesWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled && CG_GetLocalClientGlobals(LOCAL_CLIENT_0) )
  {
    do
    {
      v41 = *v28;
      if ( *v28 && v41->havokTileShapeDataSize && WorldCollision_HasCollisionTileCollision(PHYSICS_WORLD_ID_CLIENT_FIRST, v41->gridId[0], v41->gridId[1]) )
      {
        color = (vec4_t)_xmm;
        *(_QWORD *)bounds.midPoint.v = *(_QWORD *)v41->origin.v;
        bounds.halfSize.v[0] = FLOAT_4096_0;
        bounds.halfSize.v[1] = FLOAT_4096_0;
        bounds.halfSize.v[2] = 0.0;
        bounds.midPoint.v[2] = FLOAT_10_0;
        origin.v[0] = 0.0;
        origin.v[1] = 0.0;
        origin.v[2] = 0.0;
        CG_DebugBox(&origin, &bounds, 0.0, &color, 0, 0);
      }
      ++v28;
      --v29;
    }
    while ( v29 );
  }
  v42 = DVARBOOL_worldCollision_debugDump;
  if ( !DVARBOOL_worldCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.enabled )
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
  float v11; 
  int v12; 
  char dest[256]; 

  if ( shapeList )
  {
    NumShapesInShapeList = Physics_GetNumShapesInShapeList(shapeList);
    WorldCollision_Debug_DrawSummary(scrPlace, x, y, NumShapesInShapeList, name, memorySize);
    v11 = *x + 6.0;
    v12 = 0;
    *x = v11;
    if ( NumShapesInShapeList > 0 )
    {
      do
        WorldCollision_Debug_DrawShapeListShapeSummary(scrPlace, x, y, shapeList, v12++, NULL);
      while ( v12 < NumShapesInShapeList );
      v11 = *x;
    }
    *x = v11 - 6.0;
  }
  else
  {
    Com_sprintf<256>((char (*)[256])dest, "No %s Shape List", name);
    WorldCollision_Debug_DrawString(scrPlace, *x, *y, dest, &colorWhite);
    *y = *y + 6.0;
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
    WorldCollision_Debug_DrawString(scrPlace, *x, *y, dest, &colorWhite);
  }
  else
  {
    v12 = "Unknown";
    if ( ShapeNameFromShapeList )
      v12 = ShapeNameFromShapeList;
    Com_sprintf<256>((char (*)[256])dest, "%i: NULL Shape - check iwmap errors %s", (unsigned int)shapeIdx, v12);
    WorldCollision_Debug_DrawString(scrPlace, *x, *y, dest, &colorWhite);
  }
  *y = *y + 6.0;
}

/*
==============
WorldCollision_Debug_DrawString
==============
*/

void __fastcall WorldCollision_Debug_DrawString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor)
{
  __int128 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 

  v6 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, 0, 1, 6.0, 0);
  v7 = DVARBOOL_worldCollision_debugDump;
  if ( !DVARBOOL_worldCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARINT_worldCollision_debugDisplayOffsetX;
    if ( !DVARINT_worldCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "worldCollision_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (float)v8->current.integer + 8.0;
    if ( *(float *)&x > v9 )
    {
      do
      {
        Com_Printf(14, " ");
        v10 = v6;
        *(float *)&v10 = *(float *)&v6 + -6.0;
        v6 = v10;
      }
      while ( *(float *)&v10 > v9 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
}

/*
==============
WorldCollision_Debug_DrawSummary
==============
*/
void WorldCollision_Debug_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y, const int shapeCount, const char *name, const unsigned int memorySize)
{
  char dest[256]; 

  Com_sprintf<256>((char (*)[256])dest, "%i %s Shape List Shapes - %i bytes", (unsigned int)shapeCount, name, memorySize);
  WorldCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, dest, &colorWhite);
  *y = *y + 6.0;
}

/*
==============
WorldCollision_Debug_DrawTileMap
==============
*/
void WorldCollision_Debug_DrawTileMap(const ScreenPlacement *scrPlace, float *x, float *y)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  cg_t *LocalClientGlobals; 
  const char *v13; 
  float v14; 
  unsigned int v15; 
  unsigned int i; 
  HavokPhysicsShapeList *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const CollisionTile *v22; 
  signed int worldCollisionShapeIdx; 
  float v24; 
  double v25; 
  double v26; 
  float v27; 
  const CollisionTile *v28; 
  int v29; 
  const char *v30; 
  cg_t *v31; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  vec4_t color; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 

  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  if ( LocalClientGlobals )
  {
    v41 = v3;
    v40 = v4;
    v39 = v5;
    v38 = v6;
    v37 = v7;
    v36 = v8;
    v13 = j_va("World Collision Budget is %iMB per tile.  Numbers below in MB", 7i64);
    WorldCollision_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v13, &colorWhite);
    v14 = *y;
    *y = *y + 6.0;
    UI_FillRect(scrPlace, *x, v14 + 6.0, 384.0, 384.0, 1, 1, &colorBlack);
    if ( LocalClientGlobals->compassMapMaterial )
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, (float)((float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[0]) + 192.0) + *x, (float)(192.0 - (float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[1])) + *y, 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[0], 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[1], 1, 1, 0.0, 0.0, 1.0, 1.0, 0.0, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
    v15 = 0;
    for ( i = 0; i < 0x400; ++i )
    {
      v17 = g_worldCollision_WorldShapeList;
      v18 = (float)(i & 0x1F);
      v19 = (float)(v18 * 12.0) + *x;
      v20 = (float)(31 - (i >> 5));
      v21 = (float)(v20 * 12.0) + *y;
      if ( g_worldCollision_WorldShapeList )
      {
        v22 = g_worldCollision_CollisionTiles[i];
        if ( v22 )
        {
          worldCollisionShapeIdx = v22->worldCollisionShapeIdx;
          if ( worldCollisionShapeIdx < Physics_GetNumVertCountsInShapeList(g_worldCollision_WorldShapeList) )
          {
            if ( Physics_GetShapeVertCountFromShapeList(v17, worldCollisionShapeIdx) )
            {
              color.v[3] = FLOAT_0_30000001;
              WorldCollision_Debug_Draw_GetTileColor(i, &color);
              UI_FillRect(scrPlace, v19 + 0.5, v21 + 0.5, 11.0, 11.0, 1, 1, &color);
            }
          }
        }
      }
    }
    do
    {
      HIDWORD(v26) = 0;
      v24 = (float)(v15 & 0x1F);
      *(float *)&v26 = (float)(v24 * 12.0) + *x;
      v25 = v26;
      *(float *)&v26 = (float)(31 - (v15 >> 5));
      v27 = (float)(*(float *)&v26 * 12.0) + *y;
      v28 = g_worldCollision_CollisionTiles[v15];
      if ( v28 && v28->havokTileShapeDataSize )
      {
        color.v[3] = FLOAT_1_0;
        WorldCollision_Debug_Draw_GetTileColor(v15, &color);
        v30 = j_va("%i", (unsigned int)((v29 + 1023) / 1024 + 1023) >> 10);
        WorldCollision_Debug_DrawString(scrPlace, v25, v27, v30, &color);
      }
      ++v15;
    }
    while ( v15 < 0x400 );
    v31 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &v31->refdef.view;
    if ( v31 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(color.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(color.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    UI_FillRect(scrPlace, (float)((float)((float)((float)(0.00012207031 * color.v[0]) * 12.0) + 192.0) + *x) - 2.0, (float)((float)(192.0 - (float)((float)(0.00012207031 * color.v[1]) * 12.0)) + *y) - 2.0, 4.0, 4.0, 1, 1, &colorBlue);
    *y = *y + 384.0;
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
  int havokTileShapeDataSize; 
  float v4; 

  v2 = g_worldCollision_CollisionTiles[tileIdx];
  if ( v2 )
    havokTileShapeDataSize = v2->havokTileShapeDataSize;
  else
    havokTileShapeDataSize = 0;
  color->v[0] = colorMdGreen.v[0];
  color->v[1] = colorMdGreen.v[1];
  color->v[2] = colorMdGreen.v[2];
  if ( (unsigned int)havokTileShapeDataSize <= 0x700000 )
  {
    v4 = (float)havokTileShapeDataSize;
    if ( v4 <= 6606028.5 )
    {
      if ( v4 > 5505024.0 )
      {
        color->v[0] = colorGreen.v[0];
        color->v[1] = colorGreen.v[1];
        color->v[2] = colorGreen.v[2];
      }
    }
    else
    {
      color->v[0] = colorYellow.v[0];
      color->v[1] = colorYellow.v[1];
      color->v[2] = colorYellow.v[2];
    }
  }
  else
  {
    color->v[0] = colorRed.v[0];
    color->v[1] = colorRed.v[1];
    color->v[2] = colorRed.v[2];
  }
}

