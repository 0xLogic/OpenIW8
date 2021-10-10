/*
==============
RB_CheckTessOverflow
==============
*/

void __fastcall RB_CheckTessOverflow(GfxCmdBufContext *gfxContext, unsigned int vertexCount, unsigned int indexCount)
{
  ?RB_CheckTessOverflow@@YAXUGfxCmdBufContext@@II@Z(gfxContext, vertexCount, indexCount);
}

/*
==============
RB_EndSurfaceIfNeeded
==============
*/

void __fastcall RB_EndSurfaceIfNeeded(GfxCmdBufContext *gfxContext)
{
  ?RB_EndSurfaceIfNeeded@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_EndSurfaceIfNeeded
==============
*/
void RB_EndSurfaceIfNeeded(GfxCmdBufContext *gfxContext)
{
  materialCommands_t *Tess; 
  materialCommands_t *v3; 
  GfxCmdBufContext v4; 

  v4 = *gfxContext;
  Tess = R_GetTess(&v4);
  v3 = Tess;
  if ( Tess->vertexCount )
  {
    v4 = *gfxContext;
    RB_EndTessSurfaceInternal(&v4, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
    }
    v3->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v3->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
}

/*
==============
RB_CheckTessOverflow
==============
*/
void RB_CheckTessOverflow(GfxCmdBufContext *gfxContext, unsigned int vertexCount, unsigned int indexCount)
{
  materialCommands_t *Tess; 
  materialCommands_t *v7; 
  __int64 v8; 
  unsigned int v9; 
  GfxCmdBufContext v10; 

  v10 = *gfxContext;
  Tess = R_GetTess(&v10);
  if ( vertexCount > Tess->maxVertices )
  {
    v9 = vertexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v9) )
      __debugbreak();
  }
  if ( indexCount > Tess->maxIndices )
  {
    LODWORD(v8) = indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v8) )
      __debugbreak();
  }
  v10 = *gfxContext;
  v7 = R_GetTess(&v10);
  if ( v7->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (vertexCount + v7->vertexCount) < indexCount + v7->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
    __debugbreak();
  if ( vertexCount + Tess->vertexCount > Tess->maxVertices || indexCount + Tess->indexCount > Tess->maxIndices )
  {
    v10 = *gfxContext;
    RB_TessOverflowInternal(&v10, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
  }
}

