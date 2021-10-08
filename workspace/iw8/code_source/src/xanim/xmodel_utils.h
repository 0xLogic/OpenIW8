/*
==============
XModelTotalNumBones
==============
*/

int __fastcall XModelTotalNumBones(const XModel *model)
{
  return ?XModelTotalNumBones@@YAHPEBUXModel@@@Z(model);
}

/*
==============
XModelNumClientOnlyBones
==============
*/

int __fastcall XModelNumClientOnlyBones(const XModel *model)
{
  return ?XModelNumClientOnlyBones@@YAHPEBUXModel@@@Z(model);
}

/*
==============
XModelGetSurfaces
==============
*/

int __fastcall XModelGetSurfaces(const XModel *model, XSurface **surfaces, unsigned int lod)
{
  return ?XModelGetSurfaces@@YAHPEBUXModel@@PEAPEAUXSurface@@I@Z(model, surfaces, lod);
}

/*
==============
XModelGetSurfCount
==============
*/

unsigned int __fastcall XModelGetSurfCount(const XModel *model, unsigned int lod)
{
  return ?XModelGetSurfCount@@YAIPEBUXModel@@I@Z(model, lod);
}

/*
==============
XModelGetSkins
==============
*/

Material *const *__fastcall XModelGetSkins(const XModel *model, unsigned int lod)
{
  return ?XModelGetSkins@@YAPEBQEAUMaterial@@PEBUXModel@@I@Z(model, lod);
}

/*
==============
XModelNumBones
==============
*/

int __fastcall XModelNumBones(const XModel *model)
{
  return ?XModelNumBones@@YAHPEBUXModel@@@Z(model);
}

/*
==============
XModelGetSurface
==============
*/

XSurface *__fastcall XModelGetSurface(const XModel *model, unsigned int lod, int surfIndex)
{
  return ?XModelGetSurface@@YAPEAUXSurface@@PEBUXModel@@IH@Z(model, lod, surfIndex);
}

/*
==============
XModelGetLodInfo
==============
*/

const XModelLodInfo *__fastcall XModelGetLodInfo(const XModel *model, unsigned int lod)
{
  return ?XModelGetLodInfo@@YAPEBUXModelLodInfo@@PEBUXModel@@I@Z(model, lod);
}

/*
==============
XModelGetNumLods
==============
*/

unsigned int __fastcall XModelGetNumLods(const XModel *model)
{
  return ?XModelGetNumLods@@YAIPEBUXModel@@@Z(model);
}

/*
==============
TestLod::TestLod
==============
*/

void __fastcall TestLod::TestLod(TestLod *this)
{
  ??0TestLod@@QEAA@XZ(this);
}

/*
==============
XModelGetBasePose
==============
*/

const DObjAnimMat *__fastcall XModelGetBasePose(const XModel *model)
{
  return ?XModelGetBasePose@@YAPEBUDObjAnimMat@@PEBUXModel@@@Z(model);
}

/*
==============
XModelGetIntegerMaterialLod
==============
*/

unsigned int __fastcall XModelGetIntegerMaterialLod(float lod)
{
  return ?XModelGetIntegerMaterialLod@@YAIM@Z(lod);
}

/*
==============
XModelIsLodUsable
==============
*/

bool __fastcall XModelIsLodUsable(const XModel *const model, const unsigned int lod)
{
  return ?XModelIsLodUsable@@YA_NQEBUXModel@@I@Z(model, lod);
}

/*
==============
XModelGetName
==============
*/

const char *__fastcall XModelGetName(const XModel *model)
{
  return ?XModelGetName@@YAPEBDPEBUXModel@@@Z(model);
}

/*
==============
XModelGetBaseLODDistanceScaled<0>
==============
*/

double __fastcall XModelGetBaseLODDistanceScaled<0>(const XModel *model, const GfxPlacement *placement, float scale, const vec3_t *lodOrigin)
{
  double result; 

  *(float *)&result = ??$XModelGetBaseLODDistanceScaled@$0A@@@YAMPEBUXModel@@PEBUGfxPlacement@@MAEBTvec3_t@@@Z(model, placement, scale, lodOrigin);
  return result;
}

/*
==============
XModelIsDefaultAsset
==============
*/

int __fastcall XModelIsDefaultAsset(const XModel *const model)
{
  return ?XModelIsDefaultAsset@@YAHQEBUXModel@@@Z(model);
}

/*
==============
XModelGetBaseLODDistance<0>
==============
*/

double __fastcall XModelGetBaseLODDistance<0>(const XModel *model, const GfxPlacement *placement, const vec3_t *lodOrigin)
{
  double result; 

  *(float *)&result = ??$XModelGetBaseLODDistance@$0A@@@YAMPEBUXModel@@PEBUGfxPlacement@@AEBTvec3_t@@@Z(model, placement, lodOrigin);
  return result;
}

/*
==============
XModelGetBaseLODDistanceScaled<1>
==============
*/

double __fastcall XModelGetBaseLODDistanceScaled<1>(const XModel *model, const GfxPlacement *placement, float scale, const vec3_t *lodOrigin)
{
  double result; 

  *(float *)&result = ??$XModelGetBaseLODDistanceScaled@$00@@YAMPEBUXModel@@PEBUGfxPlacement@@MAEBTvec3_t@@@Z(model, placement, scale, lodOrigin);
  return result;
}

/*
==============
XModelNumBones
==============
*/
__int64 XModelNumBones(const XModel *model)
{
  if ( model )
    return model->numBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return MEMORY[0x14];
}

/*
==============
XModelGetLodInfo
==============
*/
XModelLodInfo *XModelGetLodInfo(const XModel *model, unsigned int lod)
{
  __int64 v2; 
  __int64 v5; 

  v2 = lod;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 208, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (unsigned int)v2 >= model->numLods )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 209, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v5, model->numLods) )
      __debugbreak();
  }
  return &model->lodInfo[v2];
}

/*
==============
XModelGetSkins
==============
*/
Material **XModelGetSkins(const XModel *model, unsigned int lod)
{
  const XModelLodInfo *LodInfo; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *v6; 
  unsigned __int16 surfIndex; 
  __int64 v9; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, lod);
  numsurfs = model->numsurfs;
  v6 = LodInfo;
  surfIndex = LodInfo->surfIndex;
  if ( surfIndex >= numsurfs )
  {
    LODWORD(v9) = surfIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v9, numsurfs) )
      __debugbreak();
  }
  return &model->materialHandles[v6->surfIndex];
}

/*
==============
XModelGetSurfaces
==============
*/
__int64 XModelGetSurfaces(const XModel *model, XSurface **surfaces, unsigned int lod)
{
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  XSurface *surfs; 
  __int64 v11; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !surfaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 297, ASSERT_TYPE_ASSERT, "(surfaces)", (const char *)&queryFormat, "surfaces") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, lod);
  if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( LodInfo->numsurfs )
  {
    surfIndex = LodInfo->surfIndex;
    numsurfs = model->numsurfs;
    if ( surfIndex >= numsurfs )
    {
      LODWORD(v11) = surfIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v11, numsurfs) )
        __debugbreak();
    }
    if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
      __debugbreak();
    if ( !LodInfo->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, lod) )
      __debugbreak();
    if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
      __debugbreak();
    surfs = LodInfo->surfs;
  }
  else
  {
    surfs = NULL;
  }
  *surfaces = surfs;
  return LodInfo->numsurfs;
}

/*
==============
XModelGetSurface
==============
*/
XSurface *XModelGetSurface(const XModel *model, unsigned int lod, int surfIndex)
{
  __int64 v3; 
  const XModelLodInfo *LodInfo; 
  __int64 v8; 
  __int64 v9; 

  v3 = surfIndex;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 327, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, lod);
  if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 331, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( (unsigned int)v3 >= LodInfo->numsurfs )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 332, ASSERT_TYPE_ASSERT, "(unsigned)( surfIndex ) < (unsigned)( lodInfo->numsurfs )", "surfIndex doesn't index lodInfo->numsurfs\n\t%i not in [0, %i)", v8, LodInfo->numsurfs) )
      __debugbreak();
  }
  if ( (unsigned int)v3 + LodInfo->surfIndex >= model->numsurfs )
  {
    LODWORD(v9) = model->numsurfs;
    LODWORD(v8) = v3 + LodInfo->surfIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 333, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex + surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex + surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !LodInfo->surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 340, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, lod) )
    __debugbreak();
  if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 341, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
    __debugbreak();
  return &LodInfo->surfs[v3];
}

/*
==============
XModelGetIntegerMaterialLod
==============
*/

__int64 __fastcall XModelGetIntegerMaterialLod(double lod, double _XMM1_8)
{
  double v6; 
  __int64 v7; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vcvttss2si rbx, xmm0
    vcomiss xmm0, cs:__real@4b800000
    vcomiss xmm0, xmm1
    vcomiss xmm0, cs:__real@4f800000
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+58h+var_20], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, v6) )
    __debugbreak();
  if ( (unsigned int)_RBX > 1 )
  {
    LODWORD(v7) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v7, 1) )
      __debugbreak();
  }
  return (unsigned int)_RBX;
}

/*
==============
XModelIsDefaultAsset
==============
*/
__int64 XModelIsDefaultAsset(const XModel *const model)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return model->flags & 0x8000;
}

/*
==============
XModelGetName
==============
*/
const char *XModelGetName(const XModel *model)
{
  if ( model )
    return model->name;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return (const char *)MEMORY[0];
}

/*
==============
XModelGetSurfCount
==============
*/
__int64 XModelGetSurfCount(const XModel *model, unsigned int lod)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return XModelGetLodInfo(model, lod)->numsurfs;
}

/*
==============
XModelGetBasePose
==============
*/
DObjAnimMat *XModelGetBasePose(const XModel *model)
{
  if ( model )
    return model->baseMat;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return (DObjAnimMat *)MEMORY[0xC0];
}

/*
==============
XModelNumClientOnlyBones
==============
*/
__int64 XModelNumClientOnlyBones(const XModel *model)
{
  if ( model )
    return model->numClientBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return MEMORY[0x16];
}

/*
==============
XModelTotalNumBones
==============
*/
__int64 XModelTotalNumBones(const XModel *model)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 151, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return model->numBones + (unsigned int)model->numClientBones;
}

/*
==============
XModelIsLodUsable
==============
*/
bool XModelIsLodUsable(const XModel *const model, const unsigned int lod)
{
  const XModelLodInfo *LodInfo; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, lod);
  return LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging);
}

/*
==============
TestLod::TestLod
==============
*/
void TestLod::TestLod(TestLod *this)
{
  *(_WORD *)&this->enableFlags = 0;
  this->distance = -1.0;
}

/*
==============
XModelGetNumLods
==============
*/
__int64 XModelGetNumLods(const XModel *model)
{
  unsigned __int8 numLods; 
  __int64 v4; 
  __int64 v5; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 183, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 184, ASSERT_TYPE_ASSERT, "( model->numLods ) > ( 0 )", "%s > %s\n\t%i, %i", "model->numLods", "0", 0, 0i64) )
    __debugbreak();
  numLods = model->numLods;
  if ( numLods > 6u )
  {
    LODWORD(v5) = 6;
    LODWORD(v4) = numLods;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 185, ASSERT_TYPE_ASSERT, "( model->numLods ) <= ( ( sizeof( *array_counter( model->lodInfo ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "model->numLods", "ARRAY_COUNT( model->lodInfo )", v4, v5) )
      __debugbreak();
  }
  return model->numLods;
}

/*
==============
XModelGetBaseLODDistance<0>
==============
*/
float XModelGetBaseLODDistance<0>(const XModel *model, const GfxPlacement *placement, const vec3_t *lodOrigin)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm3, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+18h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
XModelGetBaseLODDistanceScaled<0>
==============
*/

float __fastcall XModelGetBaseLODDistanceScaled<0>(const XModel *model, const GfxPlacement *placement, double scale, const vec3_t *lodOrigin)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm5, xmm0, dword ptr [rdx+10h]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm3, xmm1, dword ptr [rdx+14h]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+18h]
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm4
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm6, xmm1
    vaddss  xmm2, xmm2, xmm0
    vmovaps [rsp+58h+var_28], xmm7
    vsqrtss xmm7, xmm2, xmm2
    vdivss  xmm0, xmm7, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
XModelGetBaseLODDistanceScaled<1>
==============
*/

float __fastcall XModelGetBaseLODDistanceScaled<1>(const XModel *model, const GfxPlacement *placement, double scale, const vec3_t *lodOrigin)
{
  vec3_t out; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = lodOrigin;
  __asm { vmovaps xmm6, xmm2 }
  QuatTransform(&placement->quat, &model->bounds.halfSize, &out);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+10h]
    vaddss  xmm3, xmm0, dword ptr [rsp+58h+out]
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm6, dword ptr [rbx+14h]
    vaddss  xmm2, xmm0, dword ptr [rsp+58h+out+4]
    vmulss  xmm0, xmm6, dword ptr [rbx+18h]
    vsubss  xmm5, xmm1, xmm3
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm3, xmm1, xmm2
    vaddss  xmm2, xmm0, dword ptr [rsp+58h+out+8]
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm4, xmm1, xmm2
    vmulss  xmm3, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsi+28h]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vsubss  xmm2, xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm0, xmm2, xmm1
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

