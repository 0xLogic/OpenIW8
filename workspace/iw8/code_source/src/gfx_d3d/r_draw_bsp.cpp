/*
==============
R_DrawBModelSurf
==============
*/

void __fastcall R_DrawBModelSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawBModelSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_DrawBspSurf
==============
*/

void __fastcall R_DrawBspSurf(GfxBspSurfIter *bspSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawBspSurf@@YAXPEIAVGfxBspSurfIter@@UGfxCmdBufContext@@@Z(bspSurfIter, context);
}

/*
==============
R_InitBspDrawConstBuffers
==============
*/

void R_InitBspDrawConstBuffers(void)
{
  ?R_InitBspDrawConstBuffers@@YAXXZ();
}

/*
==============
R_DrawIndirectBspTris
==============
*/

void __fastcall R_DrawIndirectBspTris(GfxCmdBufContext *context, GfxTessellationMode tessellationMode, int indirectArgsOffset)
{
  ?R_DrawIndirectBspTris@@YAXUGfxCmdBufContext@@W4GfxTessellationMode@@H@Z(context, tessellationMode, indirectArgsOffset);
}

/*
==============
R_DrawIndirectArgsOffset
==============
*/

int __fastcall R_DrawIndirectArgsOffset(GfxTessellationMode tessellationMode, int indirectArgsOffset)
{
  return ?R_DrawIndirectArgsOffset@@YAHW4GfxTessellationMode@@H@Z(tessellationMode, indirectArgsOffset);
}

/*
==============
R_ShutdownBspDrawConstBuffers
==============
*/

void R_ShutdownBspDrawConstBuffers(void)
{
  ?R_ShutdownBspDrawConstBuffers@@YAXXZ();
}

/*
==============
R_DrawBModelSurf
==============
*/
void R_DrawBModelSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v17; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v19[2]; 

  _RBX = context;
  Profile_Begin(85);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 814, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 815, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 816, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_BMODEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 39
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_39_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_AUX:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 40
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_40_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_AUX_QUERY:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 41
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_41_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_VEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 42
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_42_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 43
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_43_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 44
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_44_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_TESS_QUERY:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 45
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_45_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_TESS_VEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 46
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_46_(drawSurfIter, v19);
      break;
    case MTL_CONSTANT_LAYOUT_BMODEL_TESS_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E526 case 47
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBModelSurf_Internal_47_(drawSurfIter, v19);
      break;
    default:
      name = technique->name;
      v17 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "BMODEL", v17, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawBspSurf
==============
*/
void R_DrawBspSurf(GfxBspSurfIter *bspSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v15; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v17[2]; 

  _RBX = context;
  Profile_Begin(79);
  if ( !bspSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 526, ASSERT_TYPE_ASSERT, "(bspSurfIter)", (const char *)&queryFormat, "bspSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 527, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 528, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_WORLD:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 32
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_32_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_AUX:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 33
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_33_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_AUX_QUERY:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 34
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_34_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 35
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_35_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 36
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_36_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_TESS_QUERY:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 37
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_37_(bspSurfIter, v17);
      break;
    case MTL_CONSTANT_LAYOUT_WORLD_TESS_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014224E846 case 38
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawBspSurf_Internal_38_(bspSurfIter, v17);
      break;
    default:
      name = technique->name;
      v15 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "WORLD", v15, name);
      GfxBspSurfIter::SkipToNextDrawGroup(bspSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawBspTris
==============
*/
void R_DrawBspTris(GfxCmdBufContext *context, unsigned int vertexCount, unsigned int triCount, unsigned int baseIndex)
{
  __int64 viewStatsTarget; 
  int endSwapFrame; 
  GfxCmdBufState *state; 
  GfxDrawPrimArgs args; 

  viewStatsTarget = context->source->viewStatsTarget;
  endSwapFrame = context->source->input.data->endSwapFrame;
  args.vertexCount = vertexCount;
  args.primCount = triCount;
  args.baseIndex = baseIndex;
  args.vertIndexBase = 0;
  args.trackFrameIndex = endSwapFrame;
  if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
    __debugbreak();
  state = context->state;
  args.viewStatsTarget = viewStatsTarget;
  *(_WORD *)&args.primStatsTarget = 0;
  R_DrawIndexedPrimitive(state, &args);
}

/*
==============
R_DrawIndirectArgsOffset
==============
*/
__int64 R_DrawIndirectArgsOffset(GfxTessellationMode tessellationMode, int indirectArgsOffset)
{
  int v4; 

  if ( !R_SurfHasTessFactors(tessellationMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 186, ASSERT_TYPE_ASSERT, "(R_SurfHasTessFactors( tessellationMode ))", (const char *)&queryFormat, "R_SurfHasTessFactors( tessellationMode )") )
    __debugbreak();
  v4 = 16 * (indirectArgsOffset + 3074) + 8;
  if ( tessellationMode != TESSELLATION_NO_TESS_BUCKET )
    v4 = 16 * (indirectArgsOffset + 3074);
  return (unsigned int)(4 * v4);
}

/*
==============
R_DrawIndirectBspTris
==============
*/
void R_DrawIndirectBspTris(GfxCmdBufContext *context, GfxTessellationMode tessellationMode, int indirectArgsOffset)
{
  int v6; 

  if ( !R_SurfHasTessFactors(tessellationMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_bsp.cpp", 186, ASSERT_TYPE_ASSERT, "(R_SurfHasTessFactors( tessellationMode ))", (const char *)&queryFormat, "R_SurfHasTessFactors( tessellationMode )") )
    __debugbreak();
  v6 = 16 * (indirectArgsOffset + 3074) + 8;
  if ( tessellationMode != TESSELLATION_NO_TESS_BUCKET )
    v6 = 16 * (indirectArgsOffset + 3074);
  R_DrawIndexedIndirectPrimitive(context->state, context->state->data->tessFactorsBuffer->wrappedBuffer.buffer, 4 * v6);
}

/*
==============
R_InitBspDrawConstBuffers
==============
*/
void R_InitBspDrawConstBuffers(void)
{
  ;
}

/*
==============
R_SetBspPatchConstantBuffer
==============
*/
void R_SetBspPatchConstantBuffer(GfxCmdBufContext *context, int indirectArgsOffset)
{
  GfxCmdBufState *state; 
  unsigned int bufferSize; 
  GfxConstantBufferDesc cbuff; 
  GfxConstantBufferDesc result; 

  state = context->state;
  _RAX = R_AllocateConstantBufferBegin(&result, state, CBUFFER_BSP_PATCH, 4u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rax, xmm0
    vmovups xmmword ptr [rsp+48h+cbuff.bufferData], xmm0
  }
  *_RAX = 16 * (indirectArgsOffset + 3074);
  R_AllocateConstantBufferEnd(state, &cbuff);
  bufferSize = cbuff.bufferSize;
  state->constants[2][5].bufferData = cbuff.bufferData;
  state->constants[2][5].bufferSize = bufferSize;
  state->constantsDirty[2] |= 0x20u;
}

/*
==============
R_ShutdownBspDrawConstBuffers
==============
*/
void R_ShutdownBspDrawConstBuffers(void)
{
  ;
}

