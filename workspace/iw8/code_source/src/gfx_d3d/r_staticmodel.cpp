/*
==============
R_IsStaticModelProbeLit
==============
*/

bool __fastcall R_IsStaticModelProbeLit(const GfxStaticModel *smodel)
{
  return ?R_IsStaticModelProbeLit@@YA_NPEBUGfxStaticModel@@@Z(smodel);
}

/*
==============
R_StaticModelInstance_GetPlacement
==============
*/

void __fastcall R_StaticModelInstance_GetPlacement(unsigned int instanceIndex, GfxPlacement *outPlacement, float *outScale)
{
  ?R_StaticModelInstance_GetPlacement@@YAXIAEAUGfxPlacement@@AEAM@Z(instanceIndex, outPlacement, outScale);
}

/*
==============
R_StaticModelInstance_GetScale
==============
*/

double __fastcall R_StaticModelInstance_GetScale(unsigned int instanceIndex)
{
  double result; 

  *(float *)&result = ?R_StaticModelInstance_GetScale@@YAMI@Z(instanceIndex);
  return result;
}

/*
==============
R_IsStaticModelProbeLit
==============
*/
__int64 R_IsStaticModelProbeLit(const GfxStaticModel *smodel)
{
  StaticModelFlags flags; 
  unsigned __int8 v3; 

  if ( !smodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 13, ASSERT_TYPE_ASSERT, "(smodel)", (const char *)&queryFormat, "smodel") )
    __debugbreak();
  flags = smodel->flags;
  v3 = flags & 1;
  if ( (flags & 1) != 0 && (flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 16, ASSERT_TYPE_ASSERT, "( !isProbeLit || ( smodel->flags & STATIC_MODEL_FLAG_LIGHTMAP_LIGHTING ) == 0 )", "Light probe info overlaps with lightmap info on model %s.  You might need to recompile the map.", smodel->model->name) )
    __debugbreak();
  return v3;
}

/*
==============
R_StaticModelInstance_GetPlacement
==============
*/
void R_StaticModelInstance_GetPlacement(unsigned int instanceIndex, GfxPlacement *outPlacement, float *outScale)
{
  __int64 v5; 
  __int64 v7; 
  GfxSModelInstanceData *smodelInstanceData; 
  __int64 v22; 
  unsigned int instanceCount; 

  v5 = instanceIndex;
  _RSI = outPlacement;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 23, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !rgp.world->smodels.smodelInstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 24, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.smodelInstanceData)", (const char *)&queryFormat, "rgp.world->smodels.smodelInstanceData") )
    __debugbreak();
  if ( (unsigned int)v5 >= rgp.world->smodels.instanceCount )
  {
    instanceCount = rgp.world->smodels.instanceCount;
    LODWORD(v22) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "instanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v22, instanceCount) )
      __debugbreak();
  }
  if ( (rgp.world->smodels.instanceFlags[v5] & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 26, ASSERT_TYPE_ASSERT, "(!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED))", (const char *)&queryFormat, "!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED)") )
    __debugbreak();
  v7 = v5;
  __asm
  {
    vmovsd  xmm3, cs:__real@3f30000000000000
    vxorps  xmm0, xmm0, xmm0
  }
  smodelInstanceData = rgp.world->smodels.smodelInstanceData;
  __asm
  {
    vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8]
    vmulsd  xmm0, xmm0, xmm3
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rsi+10h], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8+4]
    vmulsd  xmm1, xmm0, xmm3
    vcvtsd2ss xmm2, xmm1, xmm1
    vmovss  dword ptr [rsi+14h], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8+8]
    vmulsd  xmm1, xmm0, xmm3
    vcvtsd2ss xmm2, xmm1, xmm1
    vmovss  dword ptr [rsi+18h], xmm2
  }
  Vec4UnpackUnitVecFromUint2(smodelInstanceData[v7].orientation, &_RSI->quat);
  *outScale = smodelInstanceData[v7].scale;
}

/*
==============
R_StaticModelInstance_GetScale
==============
*/
float R_StaticModelInstance_GetScale(unsigned int instanceIndex)
{
  __int64 v1; 
  __int64 v6; 
  unsigned int instanceCount; 

  v1 = instanceIndex;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 40, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !rgp.world->smodels.smodelInstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 41, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.smodelInstanceData)", (const char *)&queryFormat, "rgp.world->smodels.smodelInstanceData") )
    __debugbreak();
  if ( (unsigned int)v1 >= rgp.world->smodels.instanceCount )
  {
    instanceCount = rgp.world->smodels.instanceCount;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "instanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v6, instanceCount) )
      __debugbreak();
  }
  if ( (rgp.world->smodels.instanceFlags[v1] & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 43, ASSERT_TYPE_ASSERT, "(!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED))", (const char *)&queryFormat, "!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED)") )
    __debugbreak();
  _RDX = 3 * v1;
  _RCX = rgp.world->smodels.smodelInstanceData;
  __asm { vmovss  xmm0, dword ptr [rcx+rdx*8+14h] }
  return *(float *)&_XMM0;
}

