/*
==============
R_DrawXModelSkinnedSubdivPatchSurf
==============
*/

void __fastcall R_DrawXModelSkinnedSubdivPatchSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelSkinnedSubdivPatchSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_DrawXModelRigidSubdivSurf
==============
*/

void __fastcall R_DrawXModelRigidSubdivSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelRigidSubdivSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_DrawXModelRigidSurf
==============
*/

void __fastcall R_DrawXModelRigidSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelRigidSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_DrawXModelRigidSubdivPatchSurf
==============
*/

void __fastcall R_DrawXModelRigidSubdivPatchSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelRigidSubdivPatchSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_DrawXModelSkinnedSubdivSurf
==============
*/

void __fastcall R_DrawXModelSkinnedSubdivSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelSkinnedSubdivSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
R_GetModelMotionBlurSurface
==============
*/

const void *__fastcall R_GetModelMotionBlurSurface(const GfxBackEndData *data, const GfxModelSurface *modelSurf)
{
  return ?R_GetModelMotionBlurSurface@@YAPEBXPEBUGfxBackEndData@@PEBUGfxModelSurface@@@Z(data, modelSurf);
}

/*
==============
R_DrawXModelSkinnedSurf
==============
*/

void __fastcall R_DrawXModelSkinnedSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawXModelSkinnedSurf@@YAXPEIAVGfxDrawSurfIter@@UGfxCmdBufContext@@@Z(drawSurfIter, context);
}

/*
==============
IsGfxEntityChanging
==============
*/
bool IsGfxEntityChanging(GfxCmdBufSourceState *commonSource, const GfxEntity *gfxEnt)
{
  return (gfxEnt->renderFlags & 3) != commonSource->renderFlags || commonSource->materialTime != gfxEnt->materialTime || gfxEnt->scriptablePackedColorEmissive.v[0] != commonSource->scriptablePackedColorEmissive.v[0] || gfxEnt->scriptablePackedColorEmissive.v[1] != commonSource->scriptablePackedColorEmissive.v[1] || gfxEnt->scriptablePackedColorEmissive.v[2] != commonSource->scriptablePackedColorEmissive.v[2] || gfxEnt->scriptablePackedColorEmissive.v[3] != commonSource->scriptablePackedColorEmissive.v[3] || (float)(0.55555558 * gfxEnt->scriptableTemperature) == commonSource->scriptableTemperature.v[0] && (float)(0.55555558 * gfxEnt->scriptableTemperatureScale) == commonSource->scriptableTemperature.v[1] || commonSource->eyePupilSize != gfxEnt->eyeSensorPupilSize;
}

/*
==============
R_DrawXModelRigidSubdivPatchSurf
==============
*/
void R_DrawXModelRigidSubdivPatchSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1172, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1173, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1174, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_24_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_VEL:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_25_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_27_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_28_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_29_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_30_0_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID SUBDIV PATCH", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawXModelRigidSubdivSurf
==============
*/
void R_DrawXModelRigidSubdivSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1112, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1113, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1114, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_17_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_VEL:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_18_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_20_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_21_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_22_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_23_0_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID SUBDIV", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawXModelRigidSurf
==============
*/
void R_DrawXModelRigidSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1053, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1054, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1055, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_10_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_VEL:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_11_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_13_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_14_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_15_0_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_16_0_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawXModelSkinnedSubdivPatchSurf
==============
*/
void R_DrawXModelSkinnedSubdivPatchSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1201, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1202, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1203, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_24_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_VEL_SKIN:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_26_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_27_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_28_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_29_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_30_1_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED SUBDIV PATCH", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawXModelSkinnedSubdivSurf
==============
*/
void R_DrawXModelSkinnedSubdivSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1142, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1143, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1144, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_17_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_VEL_SKIN:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_19_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_20_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_21_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_22_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_23_1_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED SUBDIV", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawXModelSkinnedSurf
==============
*/
void R_DrawXModelSkinnedSurf(GfxDrawSurfIter *drawSurfIter, GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v8; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v10[2]; 

  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1082, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1083, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1084, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_10_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_VEL_SKIN:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_12_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_13_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_14_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_15_1_(drawSurfIter, v10);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP_OBJ:
      v10[0] = *context;
      R_DrawXModelSurf_Internal_16_1_(drawSurfIter, v10);
      break;
    default:
      name = technique->name;
      v8 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED", v8, name);
      GfxDrawSurfIter::SkipToNextDrawGroup(drawSurfIter);
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_GetModelMotionBlurSurface
==============
*/
unsigned __int8 *R_GetModelMotionBlurSurface(const GfxBackEndData *data, const GfxModelSurface *modelSurf)
{
  unsigned __int16 motionblurSurf; 
  unsigned int v5; 
  unsigned int v7; 
  int v8; 

  motionblurSurf = modelSurf->base.motionblurSurf;
  if ( motionblurSurf == 0xFFFF )
    return 0i64;
  v5 = 4 * motionblurSurf;
  if ( v5 >= 0x20000 )
  {
    v8 = 0x20000;
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( modelSurf->base.motionblurSurf << 2 ) < (unsigned)( sizeof( data->motionblurSurfsBuffer ) )", "modelSurf->base.motionblurSurf << 2 doesn't index sizeof( data->motionblurSurfsBuffer )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return &data->motionblurSurfsBuffer[4 * modelSurf->base.motionblurSurf];
}

/*
==============
UpdateGfxEntityData
==============
*/
__int64 UpdateGfxEntityData(GfxCmdBufContext *context, unsigned int baseGfxEntIndex, unsigned __int16 baseEntityId, unsigned int *outRenderFlags)
{
  GfxCmdBufSourceState *v5; 
  GfxCmdBufSourceState *v6; 
  __int64 v7; 
  const GfxBackEndData *data; 
  int updated; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  GfxCmdBufContext source; 
  vec2_t temperature; 

  source = *context;
  v5 = context->source;
  v6 = context->source;
  if ( baseGfxEntIndex )
  {
    v7 = baseGfxEntIndex;
    data = source.state->data;
    *outRenderFlags = data->gfxEnts[baseGfxEntIndex].renderFlags & 3;
    temperature.v[0] = 0.55555558 * data->gfxEnts[baseGfxEntIndex].scriptableTemperature;
    temperature.v[1] = 0.55555558 * data->gfxEnts[baseGfxEntIndex].scriptableTemperatureScale;
    updated = R_UpdateMaterialTime(v6, data->gfxEnts[baseGfxEntIndex].materialTime);
    v10 = R_UpdateScriptablePackedColorEmissive(v5, &data->gfxEnts[v7].scriptablePackedColorEmissive) | updated;
    v11 = R_UpdateScriptableTemperature(v5, &temperature) | v10;
    R_UpdateEyeSensorPupilSize(v5, data->gfxEnts[v7].eyeSensorPupilSize);
  }
  else
  {
    *outRenderFlags = 0;
    v12 = R_UpdateMaterialTime(v6, 0.0);
    v13 = R_UpdateScriptablePackedColorEmissive(v5, &SCRIPTABLE_PACKED_COLOR_EMISSIVE_DEFAULT) | v12;
    v11 = R_UpdateScriptableTemperature(v5, &SCRIPTABLE_TEMPERATURE_DEFAULT) | v13;
    R_UpdateEyeSensorPupilSize(v5, 0.0);
  }
  return v11 | (unsigned int)R_UpdateMaterialEntityID(v5, baseEntityId);
}

