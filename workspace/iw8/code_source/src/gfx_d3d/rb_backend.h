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
  materialCommands_t *v4; 
  GfxCmdBufContext v6; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _RDI = gfxContext;
  __asm { vmovups xmmword ptr [rsp+48h+var_18.source], xmm0 }
  Tess = R_GetTess(&v6);
  v4 = Tess;
  if ( Tess->vertexCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_EndTessSurfaceInternal(&v6, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
    }
    v4->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v4->primStatsTarget = GFX_PRIM_STATS_INVALID;
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
  materialCommands_t *v9; 
  __int64 v11; 
  unsigned int v12; 
  GfxCmdBufContext v13; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _RBP = gfxContext;
  __asm { vmovups xmmword ptr [rsp+48h+var_18.source], xmm0 }
  Tess = R_GetTess(&v13);
  if ( vertexCount > Tess->maxVertices )
  {
    v12 = vertexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v12) )
      __debugbreak();
  }
  if ( indexCount > Tess->maxIndices )
  {
    LODWORD(v11) = indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v11) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
  }
  v9 = R_GetTess(&v13);
  if ( v9->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * (vertexCount + v9->vertexCount) < indexCount + v9->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
    __debugbreak();
  if ( vertexCount + Tess->vertexCount > Tess->maxVertices || indexCount + Tess->indexCount > Tess->maxIndices )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_TessOverflowInternal(&v13, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
  }
}

