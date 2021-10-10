/*
==============
R_ReserveGlassMeshVerts
==============
*/

bool __fastcall R_ReserveGlassMeshVerts(int vertCount, unsigned __int16 *baseVertex)
{
  return ?R_ReserveGlassMeshVerts@@YA_NHPEAG@Z(vertCount, baseVertex);
}

/*
==============
R_AddGlassSurf
==============
*/

void __fastcall R_AddGlassSurf(Material *material, r_double_index_t *indices, unsigned int indexCount, unsigned int pieceIndex, bool mayHaveMarks)
{
  ?R_AddGlassSurf@@YAXPEAUMaterial@@PEAUr_double_index_t@@II_N@Z(material, indices, indexCount, pieceIndex, mayHaveMarks);
}

/*
==============
R_ReserveGlassMeshIndices
==============
*/

bool __fastcall R_ReserveGlassMeshIndices(int indexCount, r_double_index_t **indicesOut)
{
  return ?R_ReserveGlassMeshIndices@@YA_NHPEAPEAUr_double_index_t@@@Z(indexCount, indicesOut);
}

/*
==============
R_BeginGlassMeshVerts
==============
*/

bool __fastcall R_BeginGlassMeshVerts()
{
  return ?R_BeginGlassMeshVerts@@YA_NXZ();
}

/*
==============
R_EmitGlassSurfs
==============
*/

void __fastcall R_EmitGlassSurfs(GfxGlassSurfList *glassSurfOpaqueList, GfxGlassSurfList *glassSurfTransList, int glassSurfLimit)
{
  ?R_EmitGlassSurfs@@YAXPEAUGfxGlassSurfList@@0H@Z(glassSurfOpaqueList, glassSurfTransList, glassSurfLimit);
}

/*
==============
R_GlassMeshVertIter_End
==============
*/

void __fastcall R_GlassMeshVertIter_End(GfxGlassVertex *vert)
{
  ?R_GlassMeshVertIter_End@@YAXPEAUGfxGlassVertex@@@Z(vert);
}

/*
==============
R_ReturnGlassMeshVerts
==============
*/

void __fastcall R_ReturnGlassMeshVerts(int vertCount)
{
  ?R_ReturnGlassMeshVerts@@YAXH@Z(vertCount);
}

/*
==============
R_GlassMeshVertIter_Next
==============
*/

GfxGlassVertex *__fastcall R_GlassMeshVertIter_Next(GfxGlassVertex *vert)
{
  return ?R_GlassMeshVertIter_Next@@YAPEAUGfxGlassVertex@@PEAU1@@Z(vert);
}

/*
==============
R_GlassMeshVertIter_Begin
==============
*/

GfxGlassVertex *__fastcall R_GlassMeshVertIter_Begin(unsigned __int16 baseVertex)
{
  return ?R_GlassMeshVertIter_Begin@@YAPEAUGfxGlassVertex@@G@Z(baseVertex);
}

/*
==============
R_EndGlassMeshVerts
==============
*/

void R_EndGlassMeshVerts(void)
{
  ?R_EndGlassMeshVerts@@YAXXZ();
}

/*
==============
R_ReturnGlassMeshIndices
==============
*/

void __fastcall R_ReturnGlassMeshIndices(int indexCount)
{
  ?R_ReturnGlassMeshIndices@@YAXH@Z(indexCount);
}

/*
==============
R_AddGlassProbeLighting
==============
*/

unsigned int __fastcall R_AddGlassProbeLighting(const vec3_t *samplingPos)
{
  return ?R_AddGlassProbeLighting@@YAIAEBTvec3_t@@@Z(samplingPos);
}

/*
==============
R_AddGlassProbeLighting
==============
*/
unsigned int R_AddGlassProbeLighting(const vec3_t *samplingPos)
{
  if ( rg.useLightGridVolumes )
    return R_LGV_PrepareVolumeInfo(samplingPos);
  else
    return 0;
}

/*
==============
R_AddGlassSurf
==============
*/
void R_AddGlassSurf(Material *material, r_double_index_t *indices, unsigned int indexCount, unsigned int pieceIndex, bool mayHaveMarks)
{
  __int64 v5; 
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  __int64 surfCount; 
  GfxGlassSurf *v17; 
  signed __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  GfxSceneGlass v21; 

  v5 = pieceIndex;
  Value = (char *)Sys_GetValue(0);
  v10 = (int *)(Value + 6096);
  if ( (unsigned int)(*((_DWORD *)Value + 1524) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1524) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v10 >= 3 )
  {
    LODWORD(v20) = 3;
    LODWORD(v19) = *v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v10;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = &v10[*v10 + 2];
  v14 = __rdtsc();
  *v13 = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 100, NULL, 0);
  if ( !indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 149, ASSERT_TYPE_ASSERT, "(indexCount)", (const char *)&queryFormat, "indexCount") )
    __debugbreak();
  if ( !g_glassVertGlob.allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 150, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.allowProcess)", (const char *)&queryFormat, "g_glassVertGlob.allowProcess") )
    __debugbreak();
  if ( SLOBYTE(material->surfaceFlags) >= 0 )
  {
    surfCount = g_glassVertGlob.surfCount;
    if ( g_glassVertGlob.surfCount < 0x300 )
    {
      ++g_glassVertGlob.surfCount;
      if ( !material->cameraRegion )
        ++g_glassVertGlob.opaqueSurfCount;
      v17 = &scene.glassSurfs[surfCount];
      v17->materialSortedIndex = material->drawSurf.packed.p1;
      v17->triCount = truncate_cast<unsigned short,unsigned int>(indexCount / 3);
      v18 = ((char *)indices - (char *)g_glassVertGlob.indices) >> 1;
      if ( (v18 < 0 || (unsigned __int64)v18 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v18, "signed", v18) )
        __debugbreak();
      v17->baseIndex = v18;
      if ( mayHaveMarks )
      {
        v21.rendered = 1;
        scene.sceneGlass[v5] = v21;
      }
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_GFX_GLASS_SURF_LIMIT);
    }
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_VFX_INVALID_MATERIAL, material->name, "FUNC_GLASS", "SURF_NODRAW");
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_BeginGlassMeshVerts
==============
*/
bool R_BeginGlassMeshVerts()
{
  GfxBackEndData *v0; 
  bool result; 

  v0 = frontEndDataOut;
  if ( !frontEndDataOut )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", (_DWORD)frontEndDataOut + 37, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    v0 = frontEndDataOut;
  }
  g_glassVertGlob.surfCount = scene.glassSurfCount;
  g_glassVertGlob.opaqueSurfCount = scene.glassOpaqueSurfCount;
  g_glassVertGlob.vertCount = v0->mesh[2].perGlassVertexDataCount;
  g_glassVertGlob.indexCount = v0->mesh[2].indexCount;
  g_glassVertGlob.verts = v0->mesh[2].perGlassVertexData;
  g_glassVertGlob.indices = v0->mesh[2].indices;
  result = 1;
  g_glassVertGlob.allowProcess = 1;
  return result;
}

/*
==============
R_EmitGlassSurfs
==============
*/
void R_EmitGlassSurfs(GfxGlassSurfList *glassSurfOpaqueList, GfxGlassSurfList *glassSurfTransList, int glassSurfLimit)
{
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  GfxGlassSurf *glassSurfs; 
  __int64 v10; 
  GfxGlassSurf *v11; 
  __int64 materialSortedIndex; 
  Material *MaterialAtIndex; 
  double v14; 
  __int64 v15; 
  __int64 v16; 
  int v18; 

  v6 = 0i64;
  v7 = 0i64;
  if ( glassSurfOpaqueList->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 209, ASSERT_TYPE_ASSERT, "(glassSurfOpaqueList->count == 0)", (const char *)&queryFormat, "glassSurfOpaqueList->count == 0") )
    __debugbreak();
  if ( !glassSurfOpaqueList->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 210, ASSERT_TYPE_ASSERT, "(glassSurfOpaqueList->surfs != 0)", (const char *)&queryFormat, "glassSurfOpaqueList->surfs != NULL") )
    __debugbreak();
  if ( glassSurfTransList->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 212, ASSERT_TYPE_ASSERT, "(glassSurfTransList->count == 0)", (const char *)&queryFormat, "glassSurfTransList->count == 0") )
    __debugbreak();
  if ( !glassSurfTransList->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 213, ASSERT_TYPE_ASSERT, "(glassSurfTransList->surfs != 0)", (const char *)&queryFormat, "glassSurfTransList->surfs != NULL") )
    __debugbreak();
  if ( (int)scene.glassSurfCount < glassSurfLimit )
    glassSurfLimit = scene.glassSurfCount;
  v18 = glassSurfLimit;
  v8 = j_va("glass surfs: %d", (unsigned int)glassSurfLimit);
  Sys_ProfBeginNamedEvent(0xFF708090, v8);
  glassSurfs = scene.glassSurfs;
  if ( glassSurfLimit )
  {
    v10 = (unsigned int)glassSurfLimit;
    v11 = scene.glassSurfs;
    do
    {
      materialSortedIndex = v11->materialSortedIndex;
      if ( (unsigned int)materialSortedIndex >= rgp.materialCount )
      {
        LODWORD(v16) = rgp.materialCount;
        LODWORD(v15) = v11->materialSortedIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[materialSortedIndex]);
      v14 = *(double *)glassSurfs;
      if ( MaterialAtIndex->cameraRegion )
      {
        *(double *)&glassSurfTransList->surfs[v7] = v14;
        v7 = (unsigned int)(v7 + 1);
      }
      else
      {
        *(double *)&glassSurfOpaqueList->surfs[v6] = v14;
        v6 = (unsigned int)(v6 + 1);
      }
      ++glassSurfs;
      ++v11;
      --v10;
    }
    while ( v10 );
    glassSurfLimit = v18;
  }
  glassSurfOpaqueList->count = v6;
  glassSurfTransList->count = v7;
  if ( (_DWORD)v6 + (_DWORD)v7 != glassSurfLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 244, ASSERT_TYPE_ASSERT, "(glassSurfOpaqueCount + glassSurfTransCount == glassSurfCount)", (const char *)&queryFormat, "glassSurfOpaqueCount + glassSurfTransCount == glassSurfCount") )
    __debugbreak();
  if ( (unsigned int)v6 > scene.glassOpaqueSurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 245, ASSERT_TYPE_ASSERT, "(glassSurfOpaqueCount <= scene.glassOpaqueSurfCount)", (const char *)&queryFormat, "glassSurfOpaqueCount <= scene.glassOpaqueSurfCount") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  *(_QWORD *)&scene.glassSurfCount = 0i64;
}

/*
==============
R_EndGlassMeshVerts
==============
*/
void R_EndGlassMeshVerts(void)
{
  unsigned int indexCount; 
  GfxBackEndData *v1; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 55, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  indexCount = g_glassVertGlob.indexCount;
  scene.glassSurfCount = g_glassVertGlob.surfCount;
  scene.glassOpaqueSurfCount = g_glassVertGlob.opaqueSurfCount;
  frontEndDataOut->mesh[2].perGlassVertexDataCount = g_glassVertGlob.vertCount;
  v1 = frontEndDataOut;
  if ( indexCount > frontEndDataOut->mesh[2].totalIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  v1->mesh[2].indexCount = indexCount;
  g_glassVertGlob.allowProcess = 0;
}

/*
==============
R_GlassMeshVertIter_Begin
==============
*/
GfxGlassVertex *R_GlassMeshVertIter_Begin(unsigned __int16 baseVertex)
{
  if ( !g_glassVertGlob.allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 87, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.allowProcess)", (const char *)&queryFormat, "g_glassVertGlob.allowProcess") )
    __debugbreak();
  return &g_glassVertGlob.verts[baseVertex];
}

/*
==============
R_GlassMeshVertIter_End
==============
*/
void R_GlassMeshVertIter_End(GfxGlassVertex *vert)
{
  ;
}

/*
==============
R_GlassMeshVertIter_Next
==============
*/
GfxGlassVertex *R_GlassMeshVertIter_Next(GfxGlassVertex *vert)
{
  return vert + 1;
}

/*
==============
R_ReserveGlassMeshIndices
==============
*/
bool R_ReserveGlassMeshIndices(int indexCount, r_double_index_t **indicesOut)
{
  bool result; 
  __int64 v5; 

  if ( !g_glassVertGlob.allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 69, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.allowProcess)", (const char *)&queryFormat, "g_glassVertGlob.allowProcess") )
    __debugbreak();
  if ( g_glassVertGlob.indexCount + indexCount <= 0x4800 )
  {
    v5 = g_glassVertGlob.indexCount;
    g_glassVertGlob.indexCount += indexCount;
    result = 1;
    *indicesOut = (r_double_index_t *)&g_glassVertGlob.indices[v5];
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_GLASS_INDS);
    return 0;
  }
  return result;
}

/*
==============
R_ReserveGlassMeshVerts
==============
*/
char R_ReserveGlassMeshVerts(int vertCount, unsigned __int16 *baseVertex)
{
  unsigned __int16 v5; 

  if ( !g_glassVertGlob.allowProcess && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 108, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.allowProcess)", (const char *)&queryFormat, "g_glassVertGlob.allowProcess") )
    __debugbreak();
  if ( g_glassVertGlob.vertCount + vertCount <= 0x2100 )
  {
    v5 = truncate_cast<unsigned short,unsigned int>(g_glassVertGlob.vertCount);
    g_glassVertGlob.vertCount += vertCount;
    *baseVertex = v5;
    return 1;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_GLASS_VERTS);
    return 0;
  }
}

/*
==============
R_ReturnGlassMeshIndices
==============
*/
void R_ReturnGlassMeshIndices(int indexCount)
{
  if ( indexCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 125, ASSERT_TYPE_ASSERT, "( ( indexCount >= 0 ) )", "( indexCount ) = %i", indexCount) )
    __debugbreak();
  if ( g_glassVertGlob.indexCount >= indexCount )
  {
    g_glassVertGlob.indexCount -= indexCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 126, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.indexCount >= (uint)indexCount)", (const char *)&queryFormat, "g_glassVertGlob.indexCount >= (uint)indexCount") )
      __debugbreak();
    g_glassVertGlob.indexCount -= indexCount;
  }
}

/*
==============
R_ReturnGlassMeshVerts
==============
*/
void R_ReturnGlassMeshVerts(int vertCount)
{
  if ( vertCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 134, ASSERT_TYPE_ASSERT, "( ( vertCount >= 0 ) )", "( vertCount ) = %i", vertCount) )
    __debugbreak();
  if ( g_glassVertGlob.vertCount >= vertCount )
  {
    g_glassVertGlob.vertCount -= vertCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurf.cpp", 135, ASSERT_TYPE_ASSERT, "(g_glassVertGlob.vertCount >= (uint)vertCount)", (const char *)&queryFormat, "g_glassVertGlob.vertCount >= (uint)vertCount") )
      __debugbreak();
    g_glassVertGlob.vertCount -= vertCount;
  }
}

