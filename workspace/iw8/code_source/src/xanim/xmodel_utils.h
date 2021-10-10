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
__int64 XModelGetIntegerMaterialLod(float lod)
{
  unsigned int v1; 
  bool v2; 
  bool v3; 
  __int64 v5; 
  int v6; 

  v1 = (int)lod;
  v2 = lod >= 0.0 && lod <= 16777216.0;
  v3 = lod >= 0.0 && lod <= 4294967300.0;
  if ( (!v2 || !v3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v1, lod) )
    __debugbreak();
  if ( v1 > 1 )
  {
    v6 = 1;
    LODWORD(v5) = (int)lod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v5, v6) )
      __debugbreak();
  }
  return v1;
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
  float v3; 
  float v4; 

  v3 = lodOrigin->v[1] - placement->origin.v[1];
  v4 = lodOrigin->v[2] - placement->origin.v[2];
  return fsqrt((float)((float)(v3 * v3) + (float)((float)(lodOrigin->v[0] - placement->origin.v[0]) * (float)(lodOrigin->v[0] - placement->origin.v[0]))) + (float)(v4 * v4));
}

/*
==============
XModelGetBaseLODDistanceScaled<0>
==============
*/
float XModelGetBaseLODDistanceScaled<0>(const XModel *model, const GfxPlacement *placement, float scale, const vec3_t *lodOrigin)
{
  float v4; 
  float v5; 
  float v6; 

  v4 = lodOrigin->v[1] - placement->origin.v[1];
  v5 = lodOrigin->v[2] - placement->origin.v[2];
  v6 = fsqrt((float)((float)(v4 * v4) + (float)((float)(lodOrigin->v[0] - placement->origin.v[0]) * (float)(lodOrigin->v[0] - placement->origin.v[0]))) + (float)(v5 * v5));
  if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  return v6 / scale;
}

/*
==============
XModelGetBaseLODDistanceScaled<1>
==============
*/
float XModelGetBaseLODDistanceScaled<1>(const XModel *model, const GfxPlacement *placement, float scale, const vec3_t *lodOrigin)
{
  float v7; 
  __int128 v8; 
  float v9; 
  vec3_t out; 

  QuatTransform(&placement->quat, &model->bounds.halfSize, &out);
  v7 = lodOrigin->v[0] - (float)((float)(scale * placement->origin.v[0]) + out.v[0]);
  v8 = LODWORD(lodOrigin->v[1]);
  *(float *)&v8 = lodOrigin->v[1] - (float)((float)(scale * placement->origin.v[1]) + out.v[1]);
  v9 = lodOrigin->v[2] - (float)((float)(scale * placement->origin.v[2]) + out.v[2]);
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v9 * v9)) - (float)(scale * model->radius);
  _XMM2 = v8;
  __asm { vmaxss  xmm0, xmm2, xmm1 }
  return *(float *)&_XMM0;
}

