/*
==============
CG_RegisterSurfaceEffects
==============
*/

SurfaceFxTable *__fastcall CG_RegisterSurfaceEffects(const char *mapname)
{
  return ?CG_RegisterSurfaceEffects@@YAPEAUSurfaceFxTable@@PEBD@Z(mapname);
}

/*
==============
CG_RegisterImpactEffects
==============
*/

FxImpactTable *__fastcall CG_RegisterImpactEffects(const char *filename)
{
  return ?CG_RegisterImpactEffects@@YAPEAUFxImpactTable@@PEBD@Z(filename);
}

/*
==============
CG_RegisterImpactEffects
==============
*/
FxImpactTable *CG_RegisterImpactEffects(const char *filename)
{
  return DB_FindXAssetHeader(ASSET_TYPE_IMPACT_FX, filename, 0).impactFx;
}

/*
==============
CG_RegisterSurfaceEffects
==============
*/
SurfaceFxTable *CG_RegisterSurfaceEffects(const char *mapname)
{
  return DB_FindXAssetHeader(ASSET_TYPE_SURFACE_FX, "void", 0).surfaceFx;
}

