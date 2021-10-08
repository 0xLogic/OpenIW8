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
  unsigned int v2; 
  unsigned int v4; 

  v2 = gfxEnt->renderFlags & 3;
  if ( v2 != commonSource->renderFlags )
    return 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2D28h]
    vucomiss xmm0, dword ptr [rdx+4]
  }
  if ( v2 != commonSource->renderFlags )
    return 1;
  if ( gfxEnt->scriptablePackedColorEmissive.v[0] != commonSource->scriptablePackedColorEmissive.v[0] )
    return 1;
  if ( gfxEnt->scriptablePackedColorEmissive.v[1] != commonSource->scriptablePackedColorEmissive.v[1] )
    return 1;
  if ( gfxEnt->scriptablePackedColorEmissive.v[2] != commonSource->scriptablePackedColorEmissive.v[2] )
    return 1;
  v4 = commonSource->scriptablePackedColorEmissive.v[3];
  if ( gfxEnt->scriptablePackedColorEmissive.v[3] != v4 )
    return 1;
  __asm
  {
    vmovss  xmm1, cs:__real@3f0e38e4
    vmulss  xmm2, xmm1, dword ptr [rdx+1Ch]
    vmulss  xmm1, xmm1, dword ptr [rdx+18h]
    vucomiss xmm1, dword ptr [rcx+2D3Ch]
  }
  if ( gfxEnt->scriptablePackedColorEmissive.v[3] == v4 )
  {
    __asm { vucomiss xmm2, dword ptr [rcx+2D40h] }
    if ( gfxEnt->scriptablePackedColorEmissive.v[3] == v4 )
      return 1;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2D98h]
    vucomiss xmm0, dword ptr [rdx+20h]
  }
  return gfxEnt->scriptablePackedColorEmissive.v[3] != v4;
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1172, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1173, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1174, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 24
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_24_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_VEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 25
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_25_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 27
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_27_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 28
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_28_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 29
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_29_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295746 case 30
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_30_0_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID SUBDIV PATCH", v14, name);
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1112, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1113, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1114, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 17
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_17_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_VEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 18
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_18_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 20
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_20_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 21
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_21_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 22
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_22_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422959E6 case 23
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_23_0_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID SUBDIV", v14, name);
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1053, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1054, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1055, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 10
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_10_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_VEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 11
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_11_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 13
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_13_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 14
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_14_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 15
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_15_0_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295C86 case 16
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_16_0_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL RIGID", v14, name);
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1201, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1202, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1203, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 24
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_24_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_VEL_SKIN:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 26
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_26_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 27
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_27_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 28
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_28_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 29
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_29_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_PATCH_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142295F26 case 30
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_30_1_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED SUBDIV PATCH", v14, name);
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1142, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1143, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1144, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 17
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_17_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_VEL_SKIN:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 19
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_19_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 20
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_20_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 21
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_21_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 22
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_22_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_SUBDIV_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 00000001422961C6 case 23
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_23_1_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED SUBDIV", v14, name);
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
  const char *v14; 
  const char *ConstantLayoutName; 
  GfxCmdBufContext v16[2]; 

  _RBX = context;
  Profile_Begin(86);
  if ( !drawSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1082, ASSERT_TYPE_ASSERT, "(drawSurfIter)", (const char *)&queryFormat, "drawSurfIter", -2i64) )
    __debugbreak();
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1083, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_xmodel.cpp", 1084, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_XMODEL:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 10
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_10_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_VEL_SKIN:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 12
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_12_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 13
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_13_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 14
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_14_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_PROBE_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 15
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_15_1_(drawSurfIter, v16);
      break;
    case MTL_CONSTANT_LAYOUT_XMODEL_LIT_LMAP_OBJ:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 0000000142296466 case 16
        vmovups [rsp+68h+var_28], xmm0
      }
      R_DrawXModelSurf_Internal_16_1_(drawSurfIter, v16);
      break;
    default:
      name = technique->name;
      v14 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "XMODEL SKINNED", v14, name);
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
  int updated; 
  int v14; 
  int v15; 
  int v17; 
  int v19; 
  int v20; 
  __int128 source; 
  vec2_t temperature; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+68h+source], xmm0
  }
  if ( baseGfxEntIndex )
  {
    __asm { vmovss  xmm2, cs:__real@3f0e38e4 }
    _RDI = 9i64 * baseGfxEntIndex;
    _RBX = *(_QWORD *)(*((_QWORD *)&source + 1) + 2504i64);
    *outRenderFlags = *(_DWORD *)(_RBX + 36i64 * baseGfxEntIndex + 5181440) & 3;
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rbx+rdi*4+4F1018h]
      vmovss  dword ptr [rsp+68h+temperature], xmm0
      vmulss  xmm2, xmm2, dword ptr [rbx+rdi*4+4F101Ch]
      vmovss  dword ptr [rsp+68h+temperature+4], xmm2
      vmovss  xmm1, dword ptr [rbx+rdi*4+4F1004h]; materialTime
    }
    updated = R_UpdateMaterialTime((GfxCmdBufSourceState *)source, *(float *)&_XMM1);
    v14 = R_UpdateScriptablePackedColorEmissive((GfxCmdBufSourceState *)source, (const base_vec4_t<unsigned int> *)(_RBX + 4 * _RDI + 5181448)) | updated;
    v15 = R_UpdateScriptableTemperature((GfxCmdBufSourceState *)source, &temperature);
    __asm { vmovss  xmm1, dword ptr [rbx+rdi*4+4F1020h]; eyePupilSize }
    v17 = v15 | v14;
    R_UpdateEyeSensorPupilSize((GfxCmdBufSourceState *)source, *(float *)&_XMM1);
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1; materialTime }
    *outRenderFlags = 0;
    v19 = R_UpdateMaterialTime((GfxCmdBufSourceState *)source, *(float *)&_XMM1);
    v20 = R_UpdateScriptablePackedColorEmissive((GfxCmdBufSourceState *)source, &SCRIPTABLE_PACKED_COLOR_EMISSIVE_DEFAULT) | v19;
    v17 = R_UpdateScriptableTemperature((GfxCmdBufSourceState *)source, &SCRIPTABLE_TEMPERATURE_DEFAULT) | v20;
    __asm { vxorps  xmm1, xmm1, xmm1; eyePupilSize }
    R_UpdateEyeSensorPupilSize((GfxCmdBufSourceState *)source, *(float *)&_XMM1);
  }
  return v17 | (unsigned int)R_UpdateMaterialEntityID((GfxCmdBufSourceState *)source, baseEntityId);
}

