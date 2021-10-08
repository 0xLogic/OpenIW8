/*
==============
R_ST_PostLoadVerification
==============
*/

void __fastcall R_ST_PostLoadVerification(const StTerrain *terrain)
{
  ?R_ST_PostLoadVerification@@YAXAEBUStTerrain@@@Z(terrain);
}

/*
==============
R_ST_PostLoadVerification
==============
*/
void R_ST_PostLoadVerification(const StTerrain *terrain)
{
  unsigned int i; 
  StDiskTerrainSurface *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !terrain->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1966, ASSERT_TYPE_ASSERT, "( terrain.surfaceCount )", "Super terrain has no surfaces.") )
    __debugbreak();
  if ( terrain->surfaceCount >= 0x100 )
  {
    v5 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1967, ASSERT_TYPE_ASSERT, "( terrain.surfaceCount < ST_MAX_SURFACES )", "Super terrain exceeds surface limit of %u.", v5) )
      __debugbreak();
  }
  if ( !terrain->surfaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1968, ASSERT_TYPE_ASSERT, "( terrain.surfaces )", "Super terrain has no surface array.") )
    __debugbreak();
  for ( i = 0; i < terrain->surfaceCount; ++i )
  {
    v3 = &terrain->surfaces[i];
    if ( !v3->heightMap )
    {
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1973, ASSERT_TYPE_ASSERT, "( surface.heightMap )", "Super terrain surface %u has no height map.", v4) )
        __debugbreak();
    }
    if ( !v3->cutoutMap )
    {
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1974, ASSERT_TYPE_ASSERT, "( surface.cutoutMap )", "Super terrain surface %u has no cutout map.", v4) )
        __debugbreak();
    }
    if ( !v3->combinedAlbedoMap )
    {
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1975, ASSERT_TYPE_ASSERT, "( surface.combinedAlbedoMap )", "Super terrain surface %u has no combined albedo map.", v4) )
        __debugbreak();
    }
    if ( !v3->combinedNogMap )
    {
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1976, ASSERT_TYPE_ASSERT, "( surface.combinedNogMap )", "Super terrain surface %u has no combined nog map.", v4) )
        __debugbreak();
    }
    if ( !v3->grid.numLevels )
    {
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1977, ASSERT_TYPE_ASSERT, "( surface.grid.numLevels > 0 )", "Super terrain surface %u has no grid levels.", v4) )
        __debugbreak();
    }
    if ( v3->grid.numLevels > 8 )
    {
      LODWORD(v7) = 8;
      LODWORD(v6) = v3->grid.numLevels;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1978, ASSERT_TYPE_ASSERT, "( surface.grid.numLevels <= ST_TREE_MAX_DEPTH )", "Super terrain surface %u exceeds grid level limit %u/%u.", v4, v6, v7) )
        __debugbreak();
    }
    if ( v3->layerCount > 0x20 )
    {
      LODWORD(v7) = 32;
      LODWORD(v6) = v3->layerCount;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1979, ASSERT_TYPE_ASSERT, "( surface.layerCount <= ST_MAX_LAYERS_PER_SURFACE )", "Super terrain surface %u exceeds layer limit %u/%u.", v4, v6, v7) )
        __debugbreak();
    }
    if ( v3->layerMaskMapIdxsCount != v3->layerMaterialsCount )
    {
      LODWORD(v7) = v3->layerMaterialsCount;
      LODWORD(v6) = v3->layerMaskMapIdxsCount;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1980, ASSERT_TYPE_ASSERT, "( surface.layerMaskMapIdxsCount == surface.layerMaterialsCount )", "Super terrain surface %u layer mask and layer material count mismatch %u/%u.", v4, v6, v7) )
        __debugbreak();
    }
    if ( v3->highLODIndexCount > 0x30000 )
    {
      LODWORD(v7) = 196608;
      LODWORD(v6) = v3->highLODIndexCount;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_load_obj.cpp", 1981, ASSERT_TYPE_ASSERT, "( surface.highLODIndexCount <= ST_MAX_TRIANGLES_PER_MESH * 3 )", "Super terrain surface %u high lod index count exceeds limit %u/%u.", v4, v6, v7) )
        __debugbreak();
    }
  }
}

