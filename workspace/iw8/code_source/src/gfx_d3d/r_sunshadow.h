/*
==============
R_IsCachedSunShadowPartition
==============
*/

bool __fastcall R_IsCachedSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  return ?R_IsCachedSunShadowPartition@@YA_NPEBUGfxSunShadow@@I@Z(sunShadow, partitionIndex);
}

/*
==============
R_GetCachedDrawListIndexForSunShadowPartition
==============
*/

GfxDrawListType __fastcall R_GetCachedDrawListIndexForSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  return ?R_GetCachedDrawListIndexForSunShadowPartition@@YA?AW4GfxDrawListType@@PEBUGfxSunShadow@@I@Z(sunShadow, partitionIndex);
}

/*
==============
R_GetSunShadowPartitionCache
==============
*/

const GfxSunShadowPartitionCache *__fastcall R_GetSunShadowPartitionCache(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  return ?R_GetSunShadowPartitionCache@@YAPEBUGfxSunShadowPartitionCache@@PEBUGfxSunShadow@@I@Z(sunShadow, partitionIndex);
}

/*
==============
R_GetCachedSceneViewTypeForSunShadowPartition
==============
*/

GfxSceneViewType __fastcall R_GetCachedSceneViewTypeForSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  return ?R_GetCachedSceneViewTypeForSunShadowPartition@@YA?AW4GfxSceneViewType@@PEBUGfxSunShadow@@I@Z(sunShadow, partitionIndex);
}

/*
==============
R_IsCachedSunShadowPartition
==============
*/
bool R_IsCachedSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  return sunShadow->firstCachedSunShadowPartition <= partitionIndex && partitionIndex <= sunShadow->lastCachedSunShadowPartition;
}

/*
==============
R_GetSunShadowPartitionCache
==============
*/
GfxSunShadowPartitionCache *R_GetSunShadowPartitionCache(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  return &sunShadow->partitionCache[partitionIndex - sunShadow->firstCachedSunShadowPartition];
}

/*
==============
R_GetCachedSceneViewTypeForSunShadowPartition
==============
*/
__int64 R_GetCachedSceneViewTypeForSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 368, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  return 10 * (partitionIndex - sunShadow->firstCachedSunShadowPartition) + 12;
}

/*
==============
R_GetCachedDrawListIndexForSunShadowPartition
==============
*/
__int64 R_GetCachedDrawListIndexForSunShadowPartition(const GfxSunShadow *sunShadow, unsigned int partitionIndex)
{
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  return 10 * (partitionIndex - sunShadow->firstCachedSunShadowPartition) + 45;
}

