/*
==============
XModelGetLodOutDist
==============
*/

double __fastcall XModelGetLodOutDist(const XModel *model)
{
  double result; 

  *(float *)&result = ?XModelGetLodOutDist@@YAMPEBUXModel@@@Z(model);
  return result;
}

/*
==============
XModelSetTestLodLevel
==============
*/

void __fastcall XModelSetTestLodLevel(const unsigned int lodLevel, const TestLodEnableFlags enableFlags)
{
  ?XModelSetTestLodLevel@@YAXIW4TestLodEnableFlags@@@Z(lodLevel, enableFlags);
}

/*
==============
XModelEncodeLightGridVolumeData
==============
*/

unsigned int __fastcall XModelEncodeLightGridVolumeData(float lgvDensity, float lgvThinPush, float lgvThinShrink, int lgvThinStableIn, bool lgvBoostWidth)
{
  return ?XModelEncodeLightGridVolumeData@@YAIMMMH_N@Z(lgvDensity, lgvThinPush, lgvThinShrink, lgvThinStableIn, lgvBoostWidth);
}

/*
==============
XModelSetTestLodLevel
==============
*/

void __fastcall XModelSetTestLodLevel(const unsigned int lodLevel, const TestLodEnableFlags enableFlags, const float dist)
{
  ?XModelSetTestLodLevel@@YAXIW4TestLodEnableFlags@@M@Z(lodLevel, enableFlags, dist);
}

/*
==============
XModelSurfsGetVertCount
==============
*/

unsigned int __fastcall XModelSurfsGetVertCount(const XModelSurfs *const surfs)
{
  return ?XModelSurfsGetVertCount@@YAIQEBUXModelSurfs@@@Z(surfs);
}

/*
==============
XModelGetLgvThinStable
==============
*/

int __fastcall XModelGetLgvThinStable(const XModel *model)
{
  return ?XModelGetLgvThinStable@@YAHPEBUXModel@@@Z(model);
}

/*
==============
XModelSetupForNewSurfaces
==============
*/

void __fastcall XModelSetupForNewSurfaces(XModel *const model)
{
  ?XModelSetupForNewSurfaces@@YAXQEAUXModel@@@Z(model);
}

/*
==============
XModelGetDesiredLodForDist
==============
*/

unsigned int __fastcall XModelGetDesiredLodForDist(const XModel *const model, const float dist, const float cullDist)
{
  return ?XModelGetDesiredLodForDist@@YAIQEBUXModel@@MM@Z(model, dist, cullDist);
}

/*
==============
XModelGetLgvThinShrink
==============
*/

double __fastcall XModelGetLgvThinShrink(const XModel *model)
{
  double result; 

  *(float *)&result = ?XModelGetLgvThinShrink@@YAMPEBUXModel@@@Z(model);
  return result;
}

/*
==============
XModelGetBestUsableLod
==============
*/

unsigned int __fastcall XModelGetBestUsableLod(const XModel *model, unsigned int desiredLod, bool streamTouchNeededLods)
{
  return ?XModelGetBestUsableLod@@YAIPEBUXModel@@I_N@Z(model, desiredLod, streamTouchNeededLods);
}

/*
==============
XModelGetLgvThinData
==============
*/

void __fastcall XModelGetLgvThinData(const XModel *model, float *thinPush, float *thinShrink, int *thinStable)
{
  ?XModelGetLgvThinData@@YAXPEBUXModel@@AEAM1AEAH@Z(model, thinPush, thinShrink, thinStable);
}

/*
==============
XModelRequestLod
==============
*/

void __fastcall XModelRequestLod(const XModel *const model, const unsigned int lod)
{
  ?XModelRequestLod@@YAXQEBUXModel@@I@Z(model, lod);
}

/*
==============
LGVDataGetLgvBoostWidth
==============
*/

bool __fastcall LGVDataGetLgvBoostWidth(const unsigned int dataBits)
{
  return ?LGVDataGetLgvBoostWidth@@YA_NI@Z(dataBits);
}

/*
==============
XModelGetLgvThinPush
==============
*/

double __fastcall XModelGetLgvThinPush(const XModel *model)
{
  double result; 

  *(float *)&result = ?XModelGetLgvThinPush@@YAMPEBUXModel@@@Z(model);
  return result;
}

/*
==============
XModelHighLod
==============
*/

unsigned int __fastcall XModelHighLod(const XModel *model)
{
  return ?XModelHighLod@@YAIPEBUXModel@@@Z(model);
}

/*
==============
XModelGetBestUsableLodOverrideLowest
==============
*/

unsigned int __fastcall XModelGetBestUsableLodOverrideLowest(const XModel *model, unsigned int desiredLod, unsigned int lowestLod, bool streamTouchNeededLods)
{
  return ?XModelGetBestUsableLodOverrideLowest@@YAIPEBUXModel@@II_N@Z(model, desiredLod, lowestLod, streamTouchNeededLods);
}

/*
==============
XModelHasRigidVertListChildren
==============
*/

bool __fastcall XModelHasRigidVertListChildren(const XModel *const model)
{
  return ?XModelHasRigidVertListChildren@@YA_NQEBUXModel@@@Z(model);
}

/*
==============
LGVDataGetLgvThinShrink
==============
*/

double __fastcall LGVDataGetLgvThinShrink(const unsigned int dataBits)
{
  double result; 

  *(float *)&result = ?LGVDataGetLgvThinShrink@@YAMI@Z(dataBits);
  return result;
}

/*
==============
XModelGetXModelSurfsName
==============
*/

const char *__fastcall XModelGetXModelSurfsName(const XModel *const model, const int lod)
{
  return ?XModelGetXModelSurfsName@@YAPEBDQEBUXModel@@H@Z(model, lod);
}

/*
==============
XModelGetUsableLodForDist
==============
*/

unsigned int __fastcall XModelGetUsableLodForDist(const XModel *const model, const float dist, const float cullDist)
{
  return ?XModelGetUsableLodForDist@@YAIQEBUXModel@@MM@Z(model, dist, cullDist);
}

/*
==============
XModelShouldShowBounds
==============
*/

bool __fastcall XModelShouldShowBounds(const XModel *model)
{
  return ?XModelShouldShowBounds@@YA_NPEBUXModel@@@Z(model);
}

/*
==============
XModelHasMaterialsWithStreamedImages
==============
*/

bool __fastcall XModelHasMaterialsWithStreamedImages(const XModel *model)
{
  return ?XModelHasMaterialsWithStreamedImages@@YA_NPEBUXModel@@@Z(model);
}

/*
==============
XModelGetLgvDensity
==============
*/

double __fastcall XModelGetLgvDensity(const XModel *model)
{
  double result; 

  *(float *)&result = ?XModelGetLgvDensity@@YAMPEBUXModel@@@Z(model);
  return result;
}

/*
==============
XModelGetMaterialLodForDist
==============
*/

double __fastcall XModelGetMaterialLodForDist(float radius, float dist, const MaterialLodSettings *materialLodSettings)
{
  double result; 

  *(float *)&result = ?XModelGetMaterialLodForDist@@YAMMMPEBUMaterialLodSettings@@@Z(radius, dist, materialLodSettings);
  return result;
}

/*
==============
XModelIsSkinned
==============
*/

bool __fastcall XModelIsSkinned(const XModel *const model)
{
  return ?XModelIsSkinned@@YA_NQEBUXModel@@@Z(model);
}

/*
==============
XModelSetTestLodToColLod
==============
*/

void __fastcall XModelSetTestLodToColLod(bool enable)
{
  ?XModelSetTestLodToColLod@@YAX_N@Z(enable);
}

/*
==============
LGVDataGetLgvDensity
==============
*/

double __fastcall LGVDataGetLgvDensity(const unsigned int dataBits)
{
  double result; 

  *(float *)&result = ?LGVDataGetLgvDensity@@YAMI@Z(dataBits);
  return result;
}

/*
==============
LGVDataGetLgvThinPush
==============
*/

double __fastcall LGVDataGetLgvThinPush(const unsigned int dataBits)
{
  double result; 

  *(float *)&result = ?LGVDataGetLgvThinPush@@YAMI@Z(dataBits);
  return result;
}

/*
==============
LGVDataGetLgvBoostWidth
==============
*/
_BOOL8 LGVDataGetLgvBoostWidth(const unsigned int dataBits)
{
  return (dataBits & 0x80000000) != 0;
}

/*
==============
LGVDataGetLgvDensity
==============
*/
float LGVDataGetLgvDensity(const unsigned int dataBits)
{
  return (float)(dataBits & 0xFFF);
}

/*
==============
LGVDataGetLgvThinPush
==============
*/
float LGVDataGetLgvThinPush(const unsigned int dataBits)
{
  return (float)(unsigned __int8)(dataBits >> 12);
}

/*
==============
LGVDataGetLgvThinShrink
==============
*/
float LGVDataGetLgvThinShrink(const unsigned int dataBits)
{
  float v1; 

  v1 = (float)((dataBits >> 20) & 0x1FF);
  return v1 * 0.00390625;
}

/*
==============
XModelEncodeLightGridVolumeData
==============
*/
__int64 XModelEncodeLightGridVolumeData(float lgvDensity, float lgvThinPush, float lgvThinShrink, int lgvThinStableIn, bool lgvBoostWidth)
{
  int v5; 
  int v6; 
  int v7; 
  int v8; 

  if ( lgvThinStableIn > 1 )
    lgvThinStableIn = 1;
  if ( lgvThinStableIn < -1 )
    lgvThinStableIn = -1;
  v5 = lgvBoostWidth << 31;
  v6 = (lgvThinStableIn + 1) << 29;
  if ( lgvDensity > 4095.0 || lgvDensity < 1.0 )
    v7 = 4095;
  else
    v7 = (int)lgvDensity;
  if ( lgvThinPush > 255.0 || lgvThinPush < 0.0 )
    v8 = 255;
  else
    v8 = (int)lgvThinPush;
  if ( lgvThinShrink > 1.0 || lgvThinShrink <= 0.0 )
    return v7 | v6 | v5 | ((v8 | 0x10000u) << 12);
  else
    return v7 | v6 | v5 | ((v8 | (unsigned int)((int)(float)(lgvThinShrink * 256.0) << 8)) << 12);
}

/*
==============
XModelGetBestUsableLod
==============
*/
unsigned int XModelGetBestUsableLod(const XModel *model, unsigned int desiredLod, bool streamTouchNeededLods)
{
  unsigned int NumLods; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 501, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  NumLods = XModelGetNumLods(model);
  return XModelGetBestUsableLod_Internal(model, desiredLod, NumLods, streamTouchNeededLods);
}

/*
==============
XModelGetBestUsableLodOverrideLowest
==============
*/
unsigned int XModelGetBestUsableLodOverrideLowest(const XModel *model, unsigned int desiredLod, unsigned int lowestLod, bool streamTouchNeededLods)
{
  unsigned int NumLods; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 508, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  NumLods = XModelGetNumLods(model);
  if ( NumLods > lowestLod + 1 )
    NumLods = lowestLod + 1;
  return XModelGetBestUsableLod_Internal(model, desiredLod, NumLods, streamTouchNeededLods);
}

/*
==============
XModelGetBestUsableLod_Internal
==============
*/
__int64 XModelGetBestUsableLod_Internal(const XModel *model, unsigned int desiredLod, unsigned int lodCountOverride, bool streamTouchNeededLods)
{
  __int64 v4; 
  unsigned int NumLods; 
  unsigned int v9; 
  XModelLodInfo *lodInfo; 
  const XModelSurfs *modelSurfsStaging; 
  unsigned int v13; 
  int v14; 
  const XModelLodInfo *v15; 
  int v16; 
  const XModelLodInfo *v17; 
  const XModelSurfs **p_modelSurfsStaging; 

  v4 = desiredLod;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 405, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (_DWORD)v4 != 6 && (unsigned int)v4 >= lodCountOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 406, ASSERT_TYPE_ASSERT, "(desiredLod == XMODEL_LOD_CULLED_OUT || desiredLod < lodCountOverride)", (const char *)&queryFormat, "desiredLod == XMODEL_LOD_CULLED_OUT || desiredLod < lodCountOverride") )
    __debugbreak();
  NumLods = XModelGetNumLods(model);
  v9 = NumLods;
  if ( lodCountOverride > NumLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 409, ASSERT_TYPE_ASSERT, "( lodCountOverride ) <= ( lodCount )", "%s <= %s\n\t%u, %u", "lodCountOverride", "lodCount", lodCountOverride, NumLods) )
    __debugbreak();
  lodInfo = model->lodInfo;
  if ( (_DWORD)v4 == 6 )
  {
    modelSurfsStaging = lodInfo[(unsigned __int64)(v9 - 1)].modelSurfsStaging;
    if ( modelSurfsStaging )
    {
      if ( streamTouchNeededLods )
        Stream_RequestMesh(modelSurfsStaging);
    }
    return 6i64;
  }
  if ( !XModelIsLodUsable(model, v4) )
  {
    p_modelSurfsStaging = (const XModelSurfs **)&lodInfo[v4].modelSurfsStaging;
    if ( *p_modelSurfsStaging && streamTouchNeededLods )
      Stream_RequestMesh(*p_modelSurfsStaging);
    v13 = v4 - 1;
    v14 = XModelHighLod(model);
    if ( (int)v4 - 1 < v14 )
    {
LABEL_30:
      v13 = v4 + 1;
      v16 = 16;
      if ( (int)v4 + 1 >= lodCountOverride )
        return 6i64;
      while ( 1 )
      {
        if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        v17 = XModelGetLodInfo(model, v13);
        if ( v17->surfs )
        {
          if ( Stream_MeshIsSafeToUse(v17->modelSurfsStaging) )
            break;
        }
        ++v13;
        v16 *= 2;
        if ( v13 >= lodCountOverride )
          return 6i64;
      }
      if ( streamTouchNeededLods )
      {
        Stream_BoostMesh(*p_modelSurfsStaging, v16);
        Stream_UsedMesh(lodInfo[(unsigned __int64)v13].modelSurfsStaging);
        return v13;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        v15 = XModelGetLodInfo(model, v13);
        if ( v15->surfs )
        {
          if ( Stream_MeshIsSafeToUse(v15->modelSurfsStaging) )
            break;
        }
        if ( (int)--v13 < v14 )
          goto LABEL_30;
      }
      if ( streamTouchNeededLods )
        Stream_UsedMesh(lodInfo[(__int64)(int)v13].modelSurfsStaging);
    }
    return v13;
  }
  if ( streamTouchNeededLods )
    Stream_UsedMesh(lodInfo[v4].modelSurfsStaging);
  return (unsigned int)v4;
}

/*
==============
XModelGetDesiredLodForDist
==============
*/

unsigned int __fastcall XModelGetDesiredLodForDist(const XModel *const model, const float dist, const float cullDist)
{
  return XModelGetDesiredLodForDistInternal_1_(model, dist, cullDist);
}

/*
==============
XModelGetLgvDensity
==============
*/
float XModelGetLgvDensity(const XModel *model)
{
  return (float)(model->lgvData & 0xFFF);
}

/*
==============
XModelGetLgvThinData
==============
*/
void XModelGetLgvThinData(const XModel *model, float *thinPush, float *thinShrink, int *thinStable)
{
  unsigned int lgvData; 
  float v5; 
  float v6; 

  lgvData = model->lgvData;
  v5 = (float)(unsigned __int8)(lgvData >> 12);
  *thinPush = v5;
  v6 = (float)((lgvData >> 20) & 0x1FF);
  *thinShrink = v6 * 0.00390625;
  *thinStable = ((model->lgvData >> 29) & 3) - 1;
}

/*
==============
XModelGetLgvThinPush
==============
*/
float XModelGetLgvThinPush(const XModel *model)
{
  return (float)(unsigned __int8)(model->lgvData >> 12);
}

/*
==============
XModelGetLgvThinShrink
==============
*/
float XModelGetLgvThinShrink(const XModel *model)
{
  float v1; 

  v1 = (float)((model->lgvData >> 20) & 0x1FF);
  return v1 * 0.00390625;
}

/*
==============
XModelGetLgvThinStable
==============
*/
__int64 XModelGetLgvThinStable(const XModel *model)
{
  return ((model->lgvData >> 29) & 3) - 1;
}

/*
==============
XModelGetLodOutDist
==============
*/
float XModelGetLodOutDist(const XModel *model)
{
  signed int v2; 

  v2 = XModelGetNumLods(model) - 1;
  if ( s_testLods[v2].distanceFlags && s_testLods[v2].distanceFlags == USE_CUSTOM_DISTANCE )
    return s_testLods[v2].distance;
  else
    return model->lodInfo[(__int64)v2].dist;
}

/*
==============
XModelGetMaterialLodForDist
==============
*/

float __fastcall XModelGetMaterialLodForDist(double radius, float dist, const MaterialLodSettings *materialLodSettings)
{
  float v4; 
  __int128 v5; 
  float v6; 

  if ( materialLodSettings->m_lodOverride >= 0 )
    return (float)materialLodSettings->m_lodOverride;
  v4 = materialLodSettings->m_lodThresholds[0];
  v5 = *(_OWORD *)&radius;
  *(float *)&v5 = (float)((float)(*(float *)&radius / (float)(dist + 0.001)) * 2.1186731) * materialLodSettings->m_invFovScale;
  if ( v4 == -0.0 )
    v6 = FLOAT_1_0;
  else
    v6 = -1.0 / v4;
  *(float *)&v5 = (float)((float)(*(float *)&v5 - v4) * v6) + 1.0;
  _XMM3 = v5;
  __asm
  {
    vmaxss  xmm4, xmm3, xmm2
    vmaxss  xmm1, xmm4, xmm0
    vminss  xmm0, xmm1, xmm5
  }
  return *(float *)&_XMM0;
}

/*
==============
XModelGetUsableLodForDist
==============
*/
__int64 XModelGetUsableLodForDist(const XModel *const model, const float dist, const float cullDist)
{
  unsigned int DesiredLodForDistInternal_1; 
  unsigned int NumLods; 

  DesiredLodForDistInternal_1 = XModelGetDesiredLodForDistInternal_1_(model, dist, cullDist);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 501, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  NumLods = XModelGetNumLods(model);
  return XModelGetBestUsableLod_Internal(model, DesiredLodForDistInternal_1, NumLods, 1);
}

/*
==============
XModelGetXModelSurfsName
==============
*/
const char *XModelGetXModelSurfsName(const XModel *const model, const int lod)
{
  const XModelLodInfo *LodInfo; 
  XModelSurfs *modelSurfsStaging; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 32, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, lod);
  if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 34, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
    __debugbreak();
  if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 39, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
    __debugbreak();
  modelSurfsStaging = LodInfo->modelSurfsStaging;
  if ( !LodInfo->modelSurfsStaging->name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 40, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging->name)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging->name") )
      __debugbreak();
    modelSurfsStaging = LodInfo->modelSurfsStaging;
  }
  return modelSurfsStaging->name;
}

/*
==============
XModelHasAnyDefaultSurfsOrStreamedSurfs
==============
*/
char XModelHasAnyDefaultSurfsOrStreamedSurfs(const XModel *const model)
{
  unsigned int numLods; 
  unsigned int v3; 
  unsigned __int64 v4; 
  __int64 *v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 50, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LOBYTE(numLods) = model->numLods;
  v3 = 0;
  if ( !(_BYTE)numLods )
    return BYTE2(model->flags) & 1;
  while ( 1 )
  {
    if ( v3 >= (unsigned __int8)numLods )
    {
      LODWORD(v9) = (unsigned __int8)numLods;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 209, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v4 = (unsigned __int64)v3 << 6;
    v5 = (__int64 *)((char *)model->lodInfo + v4);
    if ( (const XModel *const)((char *)model + v4) == (const XModel *const)-224i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", v4 + (_DWORD)model + 280, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
      __debugbreak();
    v6 = *v5;
    if ( v6 )
    {
      if ( !*(_QWORD *)(v6 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
        __debugbreak();
      if ( (*(_BYTE *)(*(_QWORD *)(v6 + 48) + 12i64) & 1) != 0 )
        break;
    }
    numLods = model->numLods;
    if ( ++v3 >= numLods )
      return BYTE2(model->flags) & 1;
  }
  return 1;
}

/*
==============
XModelHasMaterialsWithStreamedImages
==============
*/
bool XModelHasMaterialsWithStreamedImages(const XModel *model)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 227, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return (model->flags & 0x2000000) != 0;
}

/*
==============
XModelHasRigidVertListChildren
==============
*/
_BOOL8 XModelHasRigidVertListChildren(const XModel *const model)
{
  bool v2; 
  bool HasRigidVertListChildrenInternalSurfs; 
  bool v4; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 187, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v2 = (model->flags & 0x80000) != 0;
  HasRigidVertListChildrenInternalSurfs = XModelHasRigidVertListChildrenInternalSurfs(model);
  if ( !XModelHasAnyDefaultSurfsOrStreamedSurfs(model) )
  {
    if ( HasRigidVertListChildrenInternalSurfs )
    {
      if ( v2 )
        return v2;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 202, ASSERT_TYPE_ASSERT, "( ( flaggedHasRigidVertList ) )", "( model->name ) = %s", model->name);
    }
    else
    {
      if ( !v2 )
        return v2;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 206, ASSERT_TYPE_ASSERT, "( ( !flaggedHasRigidVertList ) )", "( model->name ) = %s", model->name);
    }
    if ( v4 )
      __debugbreak();
  }
  return v2;
}

/*
==============
XModelHasRigidVertListChildrenInternalSurfs
==============
*/
char XModelHasRigidVertListChildrenInternalSurfs(const XModel *const model)
{
  unsigned int v2; 
  const XModelLodInfo *LodInfo; 
  const XModelLodInfo *v4; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v7; 
  XSurface *surfs; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 *p_rigidVertListCount; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 157, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v2 = 0;
  if ( !model->numLods )
    return 0;
  while ( 1 )
  {
    LodInfo = XModelGetLodInfo(model, v2);
    if ( LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
    {
      v4 = XModelGetLodInfo(model, v2);
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      if ( v4->numsurfs )
      {
        surfIndex = v4->surfIndex;
        numsurfs = model->numsurfs;
        if ( surfIndex >= numsurfs )
        {
          LODWORD(v14) = numsurfs;
          LODWORD(v13) = surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( v4->numsurfs + (unsigned int)v4->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
          __debugbreak();
        if ( !v4->surfs )
        {
          LODWORD(v15) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v15) )
            __debugbreak();
        }
        if ( !v4->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
          __debugbreak();
        v7 = v4->numsurfs;
        surfs = v4->surfs;
      }
      else
      {
        v7 = 0;
        surfs = NULL;
      }
      v9 = v7;
      if ( surfs )
      {
        v10 = 0;
        if ( v9 )
          break;
      }
    }
LABEL_30:
    if ( (int)++v2 >= model->numLods )
      return 0;
  }
  p_rigidVertListCount = &surfs->rigidVertListCount;
  while ( *p_rigidVertListCount <= 1u )
  {
    ++v10;
    p_rigidVertListCount += 192;
    if ( v10 >= v9 )
      goto LABEL_30;
  }
  return 1;
}

/*
==============
XModelHighLod
==============
*/
__int64 XModelHighLod(const XModel *model)
{
  const dvar_t *v1; 
  unsigned int flags; 
  unsigned int unsignedInt; 
  unsigned int v5; 

  v1 = DVARINT_stream_modelLodLimit;
  if ( !DVARINT_stream_modelLodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_modelLodLimit") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v1->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v1->name) )
      __debugbreak();
  }
  unsignedInt = v1->current.unsignedInt;
  v5 = model->numLods - 1;
  if ( v5 > unsignedInt )
    v5 = unsignedInt;
  if ( v5 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 146, ASSERT_TYPE_ASSERT, "(highestLod < NUM_LODS)", (const char *)&queryFormat, "highestLod < NUM_LODS") )
    __debugbreak();
  return v5;
}

/*
==============
XModelIsSkinned
==============
*/
_BOOL8 XModelIsSkinned(const XModel *const model)
{
  bool v2; 
  bool IsSkinnedInternalSurfs; 
  bool v4; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 103, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v2 = (model->flags & 0x40000) != 0;
  IsSkinnedInternalSurfs = XModelIsSkinnedInternalSurfs(model);
  if ( !XModelHasAnyDefaultSurfsOrStreamedSurfs(model) )
  {
    if ( IsSkinnedInternalSurfs )
    {
      if ( v2 )
        return v2;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 118, ASSERT_TYPE_ASSERT, "( ( flaggedIsSkinned ) )", "( model->name ) = %s", model->name);
    }
    else
    {
      if ( !v2 )
        return v2;
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 122, ASSERT_TYPE_ASSERT, "( ( !flaggedIsSkinned ) )", "( model->name ) = %s", model->name);
    }
    if ( v4 )
      __debugbreak();
  }
  return v2;
}

/*
==============
XModelIsSkinnedInternalSurfs
==============
*/
char XModelIsSkinnedInternalSurfs(const XModel *const model)
{
  unsigned int v2; 
  const XModelLodInfo *LodInfo; 
  const XModelLodInfo *v4; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v7; 
  XSurface *surfs; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 73, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v2 = 0;
  if ( !model->numLods )
    return 0;
  while ( 1 )
  {
    LodInfo = XModelGetLodInfo(model, v2);
    if ( LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
    {
      v4 = XModelGetLodInfo(model, v2);
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
        __debugbreak();
      if ( v4->numsurfs )
      {
        surfIndex = v4->surfIndex;
        numsurfs = model->numsurfs;
        if ( surfIndex >= numsurfs )
        {
          LODWORD(v13) = numsurfs;
          LODWORD(v12) = surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( v4->numsurfs + (unsigned int)v4->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
          __debugbreak();
        if ( !v4->surfs )
        {
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v14) )
            __debugbreak();
        }
        if ( !v4->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
          __debugbreak();
        v7 = v4->numsurfs;
        surfs = v4->surfs;
      }
      else
      {
        v7 = 0;
        surfs = NULL;
      }
      v9 = v7;
      if ( surfs )
      {
        v10 = 0;
        if ( v9 )
          break;
      }
    }
LABEL_29:
    if ( (int)++v2 >= model->numLods )
      return 0;
  }
  while ( (surfs->flags & 2) == 0 )
  {
    ++v10;
    ++surfs;
    if ( v10 >= v9 )
      goto LABEL_29;
  }
  return 1;
}

/*
==============
XModelRequestLod
==============
*/
void XModelRequestLod(const XModel *const model, const unsigned int lod)
{
  XModelSurfs *modelSurfsStaging; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 392, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  modelSurfsStaging = XModelGetLodInfo(model, lod)->modelSurfsStaging;
  if ( modelSurfsStaging )
    Stream_RequestMesh(modelSurfsStaging);
}

/*
==============
XModelSetTestLodLevel
==============
*/
void XModelSetTestLodLevel(const unsigned int lodLevel, const TestLodEnableFlags enableFlags)
{
  __int64 v2; 
  int v5; 

  v2 = lodLevel;
  if ( lodLevel >= 6 )
  {
    v5 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 554, ASSERT_TYPE_ASSERT, "(unsigned)( lodLevel ) < (unsigned)( NUM_LODS )", "lodLevel doesn't index NUM_LODS\n\t%i not in [0, %i)", lodLevel, v5) )
      __debugbreak();
  }
  s_testLods[v2].enableFlags = enableFlags;
}

/*
==============
XModelSetTestLodLevel
==============
*/
void XModelSetTestLodLevel(const unsigned int lodLevel, const TestLodEnableFlags enableFlags, const float dist)
{
  __int64 v4; 
  int v6; 

  v4 = lodLevel;
  if ( lodLevel >= 6 )
  {
    v6 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 564, ASSERT_TYPE_ASSERT, "(unsigned)( lodLevel ) < (unsigned)( NUM_LODS )", "lodLevel doesn't index NUM_LODS\n\t%i not in [0, %i)", lodLevel, v6) )
      __debugbreak();
  }
  s_testLods[v4].enableFlags = enableFlags;
  s_testLods[v4].distanceFlags = dist > -1.0;
  s_testLods[v4].distance = dist;
}

/*
==============
XModelSetTestLodToColLod
==============
*/
void XModelSetTestLodToColLod(bool enable)
{
  if ( g_testLodToColLod != enable )
  {
    g_testLodToColLod = enable;
    if ( enable )
    {
      Dvar_SetInt_Internal(r_showCull, 0);
      Dvar_SetBool_Internal(r_showCullXModels, 1);
      Dvar_SetBool_Internal(r_showCullSModels, 1);
    }
    else
    {
      Dvar_SetInt_Internal(r_showCull, 33);
      Dvar_SetBool_Internal(r_showCullXModels, 0);
      Dvar_SetBool_Internal(r_showCullSModels, 0);
    }
  }
}

/*
==============
XModelSetupForNewSurfaces
==============
*/
void XModelSetupForNewSurfaces(XModel *const model)
{
  int v2; 
  signed int v3; 
  unsigned __int16 *p_numsurfs; 
  __int64 v5; 
  const XModelLodInfo *LodInfo; 
  unsigned int i; 
  _BYTE *v8; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  model->flags &= 0xFFF3FFFF;
  v2 = 0;
  v3 = 0;
  if ( model->numLods )
  {
    p_numsurfs = &model->lodInfo[0].numsurfs;
    do
    {
      if ( *p_numsurfs )
      {
        DB_ValidateRegistryState();
        v5 = *(_QWORD *)(p_numsurfs - 10);
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 263, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
          __debugbreak();
        LodInfo = XModelGetLodInfo(model, v3);
        if ( LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
        {
          *p_numsurfs = *(_WORD *)(v5 + 56);
          *(__m256i *)(p_numsurfs + 2) = *(__m256i *)(v5 + 60);
          if ( (v2 < 0 || (unsigned int)v2 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v2, "signed", v2) )
            __debugbreak();
          p_numsurfs[1] = v2;
          for ( i = 0; i < *(unsigned __int16 *)(v5 + 56); ++i )
          {
            v8 = (_BYTE *)(*(_QWORD *)(v5 + 8) + 192i64 * i);
            if ( (*v8 & 2) != 0 )
              model->flags |= 0x40000u;
            if ( v8[8] > 1u )
              model->flags |= 0x80000u;
          }
        }
        v2 += *p_numsurfs;
      }
      ++v3;
      p_numsurfs += 32;
    }
    while ( v3 < model->numLods );
  }
  model->numsurfs = truncate_cast<unsigned short,int>(v2);
}

/*
==============
XModelShouldShowBounds
==============
*/
bool XModelShouldShowBounds(const XModel *model)
{
  return !g_testLodToColLod || (unsigned __int8)(model->collLod - 6) <= 1u;
}

/*
==============
XModelSurfsGetVertCount
==============
*/
__int64 XModelSurfsGetVertCount(const XModelSurfs *const surfs)
{
  int vertCount; 
  unsigned __int64 numsurfs; 
  int v4; 
  int v5; 
  __int64 v6; 
  char *p_vertCount; 
  unsigned __int64 v8; 
  int v9; 

  vertCount = 0;
  if ( !surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.cpp", 632, ASSERT_TYPE_ASSERT, "(surfs)", (const char *)&queryFormat, "surfs") )
    __debugbreak();
  numsurfs = surfs->numsurfs;
  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  if ( numsurfs >= 2 )
  {
    p_vertCount = (char *)&surfs->surfs[1].vertCount;
    v8 = ((numsurfs - 2) >> 1) + 1;
    v6 = 2 * v8;
    do
    {
      v9 = *((unsigned __int16 *)p_vertCount - 96);
      p_vertCount += 384;
      v4 += v9;
      v5 += *((unsigned __int16 *)p_vertCount - 192);
      --v8;
    }
    while ( v8 );
  }
  if ( v6 < (__int64)numsurfs )
    vertCount = surfs->surfs[v6].vertCount;
  return (unsigned int)(vertCount + v5 + v4);
}

