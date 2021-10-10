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
  __int64 v4; 
  __int64 v6; 
  GfxSModelInstanceData *smodelInstanceData; 
  __int128 v11; 
  __int64 v21; 
  unsigned int instanceCount; 

  v4 = instanceIndex;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 23, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !rgp.world->smodels.smodelInstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 24, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.smodelInstanceData)", (const char *)&queryFormat, "rgp.world->smodels.smodelInstanceData") )
    __debugbreak();
  if ( (unsigned int)v4 >= rgp.world->smodels.instanceCount )
  {
    instanceCount = rgp.world->smodels.instanceCount;
    LODWORD(v21) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "instanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v21, instanceCount) )
      __debugbreak();
  }
  if ( (rgp.world->smodels.instanceFlags[v4] & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 26, ASSERT_TYPE_ASSERT, "(!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED))", (const char *)&queryFormat, "!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED)") )
    __debugbreak();
  v6 = v4;
  _XMM0 = 0i64;
  smodelInstanceData = rgp.world->smodels.smodelInstanceData;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8] }
  *((_QWORD *)&v11 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v11 = *(double *)&_XMM0 * 0.000244140625;
  _XMM0 = v11;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  outPlacement->origin.v[0] = *(float *)&_XMM1;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8+4] }
  *((_QWORD *)&v11 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v11 = *(double *)&_XMM0 * 0.000244140625;
  _XMM1 = v11;
  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
  outPlacement->origin.v[1] = *(float *)&_XMM2;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx+rdi*8+8] }
  *((_QWORD *)&v11 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v11 = *(double *)&_XMM0 * 0.000244140625;
  _XMM1 = v11;
  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
  outPlacement->origin.v[2] = *(float *)&_XMM2;
  Vec4UnpackUnitVecFromUint2(smodelInstanceData[v6].orientation, &outPlacement->quat);
  *outScale = smodelInstanceData[v6].scale;
}

/*
==============
R_StaticModelInstance_GetScale
==============
*/
float R_StaticModelInstance_GetScale(unsigned int instanceIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int instanceCount; 

  v1 = instanceIndex;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 40, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !rgp.world->smodels.smodelInstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 41, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.smodelInstanceData)", (const char *)&queryFormat, "rgp.world->smodels.smodelInstanceData") )
    __debugbreak();
  if ( (unsigned int)v1 >= rgp.world->smodels.instanceCount )
  {
    instanceCount = rgp.world->smodels.instanceCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "instanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v3, instanceCount) )
      __debugbreak();
  }
  if ( (rgp.world->smodels.instanceFlags[v1] & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.cpp", 43, ASSERT_TYPE_ASSERT, "(!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED))", (const char *)&queryFormat, "!(rgp.world->smodels.instanceFlags[instanceIndex] & STATIC_MODEL_INSTANCE_FLAG_GENERATED)") )
    __debugbreak();
  return rgp.world->smodels.smodelInstanceData[v1].scale;
}

