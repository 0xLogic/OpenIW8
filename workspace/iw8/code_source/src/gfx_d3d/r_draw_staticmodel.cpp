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
  GfxCmdBufContext v10[2]; 

  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 410, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 411, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 412, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_7_(smodelSurfIter, v10);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH_LIT_PROBE )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_8_(smodelSurfIter, v10);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_PATCH_LIT_LMAP )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_9_(smodelSurfIter, v10);
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
  GfxCmdBufContext v10[2]; 

  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 380, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 381, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 382, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_4_(smodelSurfIter, v10);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_LIT_PROBE )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_5_(smodelSurfIter, v10);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_SUBDIV_LIT_LMAP )
  {
    v10[0] = *context;
    R_DrawStaticModelSurf_Internal_6_(smodelSurfIter, v10);
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
  GfxCmdBufContext v10; 
  int v11; 
  GfxCmdBufState *v12; 
  const GfxSModelSurf *v13; 
  unsigned __int64 v14; 
  int v15; 
  GfxCmdBufContext v16; 
  int drawListType; 
  GfxCmdBufState *v18; 
  const GfxSModelSurf *current; 
  unsigned __int64 v20; 
  int v21; 
  GfxCmdBufState *state[2]; 
  __int64 v23; 

  v23 = -2i64;
  Profile_Begin(80);
  if ( !smodelSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 349, ASSERT_TYPE_ASSERT, "(smodelSurfIter)", (const char *)&queryFormat, "smodelSurfIter") )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 350, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp", 351, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  v4 = context->state;
  technique = v4->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL )
  {
    v16 = *context;
    *(GfxCmdBufContext *)state = v16;
    drawListType = v16.source->drawListType;
    v16.source->objectPlacement = (const GfxPlacement *)3;
    v18 = state[1];
    if ( drawListType < 65 )
      R_SetIndicesWithType(state[1], v16.source->input.codeBuffers[6]->buffer, DXGI_FORMAT_R32_UINT);
    if ( state[1]->vertDeclType != VERTDECL_PACKED )
      state[1]->pipelineStateDirty = 1;
    v18->vertDeclType = VERTDECL_PACKED;
    *(GfxCmdBufContext *)state = *context;
    R_SetupPassStableArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(136)");
    *(GfxCmdBufContext *)state = *context;
    R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(137)");
    state[0] = (GfxCmdBufState *)0xFFFFFFFFFFFFi64;
    current = smodelSurfIter->current;
    v20 = *(_QWORD *)&smodelSurfIter->current->header & 0xFFFF000000000000ui64;
    do
    {
      if ( (current->header.packed & 0xFFFF000000000000ui64) != v20 || !R_CheckReserveBuffers(v18) )
        break;
      if ( R_GP_IsBatchIndexValid(current->header.fields.gpBatchIndex, v16.source->input.data, v16.source->passIndex) )
      {
        v21 = 0;
        if ( drawListType < 65 )
          v21 = 0x40000;
        if ( drawListType >= 65 )
          R_DrawIndirectPrimitive(v18, v16.source->input.codeBuffers[9]->buffer, v21 + 16 * current->header.fields.gpBatchIndex);
        else
          R_DrawIndexedIndirectPrimitive(v18, v16.source->input.codeBuffers[9]->buffer, v21 + 20 * current->header.fields.gpBatchIndex);
      }
      current = (const GfxSModelSurf *)&smodelSurfIter->current->visDataRefs[smodelSurfIter->current->header.fields.visDataRefCountLessOne + 1];
      smodelSurfIter->current = current;
    }
    while ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(smodelSurfIter) );
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_LIT_PROBE )
  {
    *(GfxCmdBufContext *)state = *context;
    R_DrawStaticModelSurf_Internal_2_(smodelSurfIter, (GfxCmdBufContext *)state);
  }
  else if ( technique->precompiledIndex == MTL_CONSTANT_LAYOUT_SMODEL_LIT_LMAP )
  {
    v10 = *context;
    *(GfxCmdBufContext *)state = v10;
    v11 = v10.source->drawListType;
    v10.source->objectPlacement = (const GfxPlacement *)3;
    v12 = state[1];
    if ( v11 < 65 )
      R_SetIndicesWithType(state[1], v10.source->input.codeBuffers[6]->buffer, DXGI_FORMAT_R32_UINT);
    if ( state[1]->vertDeclType != VERTDECL_PACKED_MLMAP )
      state[1]->pipelineStateDirty = 1;
    v12->vertDeclType = VERTDECL_PACKED_MLMAP;
    *(GfxCmdBufContext *)state = *context;
    R_SetupPassStableArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(136)");
    *(GfxCmdBufContext *)state = *context;
    R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)state, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_staticmodel.cpp(137)");
    state[0] = (GfxCmdBufState *)0xFFFFFFFFFFFFi64;
    v13 = smodelSurfIter->current;
    v14 = *(_QWORD *)&smodelSurfIter->current->header & 0xFFFF000000000000ui64;
    do
    {
      if ( (v13->header.packed & 0xFFFF000000000000ui64) != v14 || !R_CheckReserveBuffers(v12) )
        break;
      if ( R_GP_IsBatchIndexValid(v13->header.fields.gpBatchIndex, v10.source->input.data, v10.source->passIndex) )
      {
        v15 = 0;
        if ( v11 < 65 )
          v15 = 0x40000;
        if ( v11 >= 65 )
          R_DrawIndirectPrimitive(v12, v10.source->input.codeBuffers[9]->buffer, v15 + 16 * v13->header.fields.gpBatchIndex);
        else
          R_DrawIndexedIndirectPrimitive(v12, v10.source->input.codeBuffers[9]->buffer, v15 + 20 * v13->header.fields.gpBatchIndex);
      }
      v13 = (const GfxSModelSurf *)&smodelSurfIter->current->visDataRefs[smodelSurfIter->current->header.fields.visDataRefCountLessOne + 1];
      smodelSurfIter->current = v13;
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

