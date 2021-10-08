/*
==============
R_DrawStaticModelSurf
==============
*/

void __fastcall R_DrawStaticModelSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawStaticModelSurf@@YAXPEIAVGfxSModelSurfIter@@UGfxCmdBufContext@@@Z(smodelSurfIter, context);
}

/*
==============
R_DrawStaticModelSubdivSurf
==============
*/

void __fastcall R_DrawStaticModelSubdivSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawStaticModelSubdivSurf@@YAXPEIAVGfxSModelSurfIter@@UGfxCmdBufContext@@@Z(smodelSurfIter, context);
}

/*
==============
R_DrawStaticModelSubdivPatchSurf
==============
*/

void __fastcall R_DrawStaticModelSubdivPatchSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawStaticModelSubdivPatchSurf@@YAXPEIAVGfxSModelSurfIter@@UGfxCmdBufContext@@@Z(smodelSurfIter, context);
}

/*
==============
R_DrawStaticModelSubdivPatchSurf
==============
*/
void R_DrawStaticModelSubdivPatchSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v13[2]; 

  _RBX = context;
  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 410, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 411, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 412, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_7_(smodelSurfIter, v13);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH_LIT_PROBE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_8_(smodelSurfIter, v13);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH_LIT_LMAP )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_9_(smodelSurfIter, v13);
  }
  else
  {
    name = technique->name;
    v8 = state->material->name;
    ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
    R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "SMODEL SUBDIV PATCH", v8, name);
    GfxSModelSurfIter::SkipToNextDrawGroup(smodelSurfIter);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawStaticModelSubdivSurf
==============
*/
void R_DrawStaticModelSubdivSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v13[2]; 

  _RBX = context;
  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 380, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 381, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 382, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_4_(smodelSurfIter, v13);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_LIT_PROBE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_5_(smodelSurfIter, v13);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_LIT_LMAP )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+68h+var_28], xmm0
    }
    R_DrawStaticModelSurf_Internal_6_(smodelSurfIter, v13);
  }
  else
  {
    name = technique->name;
    v8 = state->material->name;
    ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
    R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "SMODEL SUBDIV", v8, name);
    GfxSModelSurfIter::SkipToNextDrawGroup(smodelSurfIter);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawStaticModelSurf
==============
*/
void R_DrawStaticModelSurf(GfxSModelSurfIter *smodelSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *v4; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  int v12; 
  GfxCmdBufState *v13; 
  const GfxSModelSurf *v16; 
  unsigned __int64 v17; 
  int v18; 
  int v22; 
  GfxCmdBufState *v23; 
  const GfxSModelSurf *current; 
  unsigned __int64 v27; 
  int v28; 
  GfxCmdBufState *state[2]; 
  __int64 v30; 

  v30 = -2i64;
  _RBX = context;
  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 349, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter") )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 350, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 351, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  v4 = _RBX->state;
  technique = v4->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
      vmovq   rbp, xmm0
    }
    v22 = *(_DWORD *)(_RBP + 11656);
    *(_QWORD *)(_RBP + 10528) = 3i64;
    v23 = state[1];
    if ( v22 < 65 )
      R_SetIndicesWithType(state[1], **(ID3D12Resource ***)(_RBP + 9008), DXGI_FORMAT_R32_UINT);
    if ( state[1]->vertDeclType != VERTDECL_PACKED )
      state[1]->pipelineStateDirty = 1;
    v23->vertDeclType = VERTDECL_PACKED;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
    }
    R_SetupPassStableArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(136)");
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
    }
    R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(137)");
    state[0] = (GfxCmdBufState *)0xFFFFFFFFFFFFi64;
    current = smodelSurfIter->current;
    v27 = *(_QWORD *)&smodelSurfIter->current->header & 0xFFFF000000000000ui64;
    do
    {
      if ( (current->header.packed & 0xFFFF000000000000ui64) != v27 || !R_CheckReserveBuffers(v23) )
        break;
      if ( R_GP_IsBatchIndexValid(current->header.fields.gpBatchIndex, *(const GfxBackEndData **)(_RBP + 9728), *(_DWORD *)(_RBP + 11680)) )
      {
        v28 = 0;
        if ( v22 < 65 )
          v28 = 0x40000;
        if ( v22 >= 65 )
          R_DrawIndirectPrimitive(v23, **(ID3D12Resource ***)(_RBP + 9032), v28 + 16 * current->header.fields.gpBatchIndex);
        else
          R_DrawIndexedIndirectPrimitive(v23, **(ID3D12Resource ***)(_RBP + 9032), v28 + 20 * current->header.fields.gpBatchIndex);
      }
      current = (const GfxSModelSurf *)&smodelSurfIter->current->visDataRefs[smodelSurfIter->current->header.fields.visDataRefCountLessOne + 1];
      smodelSurfIter->current = current;
    }
    while ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(smodelSurfIter) );
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_LIT_PROBE )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
    }
    R_DrawStaticModelSurf_Internal_2_(smodelSurfIter, (GfxCmdBufContext *)state);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_LIT_LMAP )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
      vmovq   rbp, xmm0
    }
    v12 = *(_DWORD *)(_RBP + 11656);
    *(_QWORD *)(_RBP + 10528) = 3i64;
    v13 = state[1];
    if ( v12 < 65 )
      R_SetIndicesWithType(state[1], **(ID3D12Resource ***)(_RBP + 9008), DXGI_FORMAT_R32_UINT);
    if ( state[1]->vertDeclType != VERTDECL_PACKED_MLMAP )
      state[1]->pipelineStateDirty = 1;
    v13->vertDeclType = VERTDECL_PACKED_MLMAP;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
    }
    R_SetupPassStableArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(136)");
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+88h+state], xmm0
    }
    R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(137)");
    state[0] = (GfxCmdBufState *)0xFFFFFFFFFFFFi64;
    v16 = smodelSurfIter->current;
    v17 = *(_QWORD *)&smodelSurfIter->current->header & 0xFFFF000000000000ui64;
    do
    {
      if ( (v16->header.packed & 0xFFFF000000000000ui64) != v17 || !R_CheckReserveBuffers(v13) )
        break;
      if ( R_GP_IsBatchIndexValid(v16->header.fields.gpBatchIndex, *(const GfxBackEndData **)(_RBP + 9728), *(_DWORD *)(_RBP + 11680)) )
      {
        v18 = 0;
        if ( v12 < 65 )
          v18 = 0x40000;
        if ( v12 >= 65 )
          R_DrawIndirectPrimitive(v13, **(ID3D12Resource ***)(_RBP + 9032), v18 + 16 * v16->header.fields.gpBatchIndex);
        else
          R_DrawIndexedIndirectPrimitive(v13, **(ID3D12Resource ***)(_RBP + 9032), v18 + 20 * v16->header.fields.gpBatchIndex);
      }
      v16 = (const GfxSModelSurf *)&smodelSurfIter->current->visDataRefs[smodelSurfIter->current->header.fields.visDataRefCountLessOne + 1];
      smodelSurfIter->current = v16;
    }
    while ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(smodelSurfIter) );
  }
  else
  {
    name = technique->name;
    v8 = v4->material->name;
    ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
    R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "SMODEL", v8, name);
    GfxSModelSurfIter::SkipToNextDrawGroup(smodelSurfIter);
  }
  Profile_EndInternal(NULL);
}

