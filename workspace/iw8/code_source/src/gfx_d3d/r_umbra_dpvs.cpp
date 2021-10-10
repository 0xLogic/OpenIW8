/*
==============
Load_UmbraTome
==============
*/

void __fastcall Load_UmbraTome(Umbra::Tome **tome, void *bufferData, unsigned int bufferSize)
{
  ?Load_UmbraTome@@YAXPEAPEAVTome@Umbra@@PEAXI@Z(tome, bufferData, bufferSize);
}

/*
==============
R_Umbra_GetOcclusionImageCameraView
==============
*/

const float *__fastcall R_Umbra_GetOcclusionImageCameraView(const GfxBackEndData *data)
{
  return ?R_Umbra_GetOcclusionImageCameraView@@YAPEBMPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_Umbra_QueryStaticCamera
==============
*/

void __fastcall R_Umbra_QueryStaticCamera(const GfxViewParms *viewParms, const GfxMatrix *viewProjMatrix, unsigned int width, unsigned int height, unsigned int smpFrame, unsigned int frameCount, unsigned int viewInfoIndex, bool requireOcclusionUpdate)
{
  ?R_Umbra_QueryStaticCamera@@YAXPEBUGfxViewParms@@PEBUGfxMatrix@@IIIII_N@Z(viewParms, viewProjMatrix, width, height, smpFrame, frameCount, viewInfoIndex, requireOcclusionUpdate);
}

/*
==============
R_Umbra_Reset
==============
*/

void R_Umbra_Reset(void)
{
  ?R_Umbra_Reset@@YAXXZ();
}

/*
==============
R_Umbra_GetOcclusionBuffer_Internal
==============
*/

Umbra::OcclusionBuffer *__fastcall R_Umbra_GetOcclusionBuffer_Internal(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  return ?R_Umbra_GetOcclusionBuffer_Internal@@YAPEAVOcclusionBuffer@Umbra@@II@Z(sceneViewType, viewInfoIndex);
}

/*
==============
DebugUmbraRenderer::addLine
==============
*/

void __fastcall DebugUmbraRenderer::addLine(DebugUmbraRenderer *this, const Umbra::Vector3 *start, const Umbra::Vector3 *end, const Umbra::Vector4 *color)
{
  ?addLine@DebugUmbraRenderer@@EEAAXAEBVVector3@Umbra@@0AEBVVector4@3@@Z(this, start, end, color);
}

/*
==============
R_Umbra_ShadowQueryMode
==============
*/

UmbraQueryMode __fastcall R_Umbra_ShadowQueryMode()
{
  return ?R_Umbra_ShadowQueryMode@@YA?AW4UmbraQueryMode@@XZ();
}

/*
==============
R_Umbra_CullDynModelEntities
==============
*/

void __fastcall R_Umbra_CullDynModelEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullDynModelEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
DebugUmbraRenderer::addStat
==============
*/

void __fastcall DebugUmbraRenderer::addStat(DebugUmbraRenderer *this, const char *stat, int val)
{
  ?addStat@DebugUmbraRenderer@@EEAAXPEBDH@Z(this, stat, val);
}

/*
==============
R_Umbra_FillOcclusionTexture
==============
*/

void __fastcall R_Umbra_FillOcclusionTexture(GfxImage *image, const Umbra::OcclusionBuffer *occlusion)
{
  ?R_Umbra_FillOcclusionTexture@@YAXPEAUGfxImage@@PEBVOcclusionBuffer@Umbra@@@Z(image, occlusion);
}

/*
==============
R_Umbra_CullDynBrushEntities
==============
*/

void __fastcall R_Umbra_CullDynBrushEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullDynBrushEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
R_Umbra_QueryStaticSunShadows
==============
*/

void __fastcall R_Umbra_QueryStaticSunShadows(const GfxViewInfo *viewInfo, GfxSunShadow *sunShadow)
{
  ?R_Umbra_QueryStaticSunShadows@@YAXPEBUGfxViewInfo@@PEAUGfxSunShadow@@@Z(viewInfo, sunShadow);
}

/*
==============
R_Umbra_QueryStaticVisibilityCmd
==============
*/

void __fastcall R_Umbra_QueryStaticVisibilityCmd(const void *const cmdInfo)
{
  ?R_Umbra_QueryStaticVisibilityCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
DebugUmbraRenderer::addAABB
==============
*/

void __fastcall DebugUmbraRenderer::addAABB(DebugUmbraRenderer *this, const Umbra::Vector3 *mn, const Umbra::Vector3 *mx, const Umbra::Vector4 *color)
{
  ?addAABB@DebugUmbraRenderer@@EEAAXAEBVVector3@Umbra@@0AEBVVector4@3@@Z(this, mn, mx, color);
}

/*
==============
R_Umbra_CullDObjEntities
==============
*/

void __fastcall R_Umbra_CullDObjEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullDObjEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
R_Umbra_GetVisMask
==============
*/

unsigned int *__fastcall R_Umbra_GetVisMask(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  return ?R_Umbra_GetVisMask@@YAPEAIII@Z(sceneViewType, viewInfoIndex);
}

/*
==============
R_Umbra_Init
==============
*/

void R_Umbra_Init(void)
{
  ?R_Umbra_Init@@YAXXZ();
}

/*
==============
R_Umbra_CullParticleSprites
==============
*/

void __fastcall R_Umbra_CullParticleSprites(const void *const cmdInfo)
{
  ?R_Umbra_CullParticleSprites@@YAXQEBX@Z(cmdInfo);
}

/*
==============
R_Umbra_ShutdownOcclusionImages
==============
*/

void R_Umbra_ShutdownOcclusionImages(void)
{
  ?R_Umbra_ShutdownOcclusionImages@@YAXXZ();
}

/*
==============
DebugUmbraRenderer::getTome
==============
*/

const Umbra::Tome *__fastcall DebugUmbraRenderer::getTome(DebugUmbraRenderer *this)
{
  return ?getTome@DebugUmbraRenderer@@EEBAPEBVTome@Umbra@@XZ(this);
}

/*
==============
R_Umbra_CullProjectedBounds
==============
*/

int __fastcall R_Umbra_CullProjectedBounds(const Bounds *bounds, const float thresholdSq)
{
  return ?R_Umbra_CullProjectedBounds@@YAHPEBUBounds@@M@Z(bounds, thresholdSq);
}

/*
==============
R_Umbra_Shutdown
==============
*/

void R_Umbra_Shutdown(void)
{
  ?R_Umbra_Shutdown@@YAXXZ();
}

/*
==============
R_Umbra_SetScriptedGateStates
==============
*/

void __fastcall R_Umbra_SetScriptedGateStates(bitarray<384> *gateStates)
{
  ?R_Umbra_SetScriptedGateStates@@YAXV?$bitarray@$0BIA@@@@Z(gateStates);
}

/*
==============
R_Umbra_CullDObjModelEntities
==============
*/

void __fastcall R_Umbra_CullDObjModelEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullDObjModelEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
R_Umbra_ResolveOcclusion
==============
*/

void __fastcall R_Umbra_ResolveOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *umbraFloatZ0)
{
  ?R_Umbra_ResolveOcclusion@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@@Z(computeState, viewInfo, data, umbraFloatZ0);
}

/*
==============
R_Umbra_ToggleUmbraFrame
==============
*/

void __fastcall R_Umbra_ToggleUmbraFrame(unsigned int smpFrame)
{
  ?R_Umbra_ToggleUmbraFrame@@YAXI@Z(smpFrame);
}

/*
==============
R_Umbra_CullSceneEnts
==============
*/

void __fastcall R_Umbra_CullSceneEnts(const void *const cmdInfo)
{
  ?R_Umbra_CullSceneEnts@@YAXQEBX@Z(cmdInfo);
}

/*
==============
R_Umbra_InitOcclusionImages
==============
*/

void R_Umbra_InitOcclusionImages(void)
{
  ?R_Umbra_InitOcclusionImages@@YAXXZ();
}

/*
==============
R_Umbra_CullProjectedBounds_SunShadows
==============
*/

int __fastcall R_Umbra_CullProjectedBounds_SunShadows(const Bounds *bounds, unsigned int sceneViewType)
{
  return ?R_Umbra_CullProjectedBounds_SunShadows@@YAHPEBUBounds@@I@Z(bounds, sceneViewType);
}

/*
==============
DebugUmbraRenderer::addQuad
==============
*/

void __fastcall DebugUmbraRenderer::addQuad(DebugUmbraRenderer *this, const Umbra::Vector3 *x0y0, const Umbra::Vector3 *x0y1, const Umbra::Vector3 *x1y1, const Umbra::Vector3 *x1y0, const Umbra::Vector4 *color)
{
  ?addQuad@DebugUmbraRenderer@@EEAAXAEBVVector3@Umbra@@000AEBVVector4@3@@Z(this, x0y0, x0y1, x1y1, x1y0, color);
}

/*
==============
R_Umbra_CullSceneBrushEntities
==============
*/

void __fastcall R_Umbra_CullSceneBrushEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullSceneBrushEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
R_Umbra_GetUmbraOcclusionSceneImage
==============
*/

GfxImage *__fastcall R_Umbra_GetUmbraOcclusionSceneImage()
{
  return ?R_Umbra_GetUmbraOcclusionSceneImage@@YAPEAUGfxImage@@XZ();
}

/*
==============
R_Umbra_SetOcclusionBuffer
==============
*/

void __fastcall R_Umbra_SetOcclusionBuffer(Umbra::OcclusionBuffer *occlusionBuffer, unsigned int sceneViewType)
{
  ?R_Umbra_SetOcclusionBuffer@@YAXPEAVOcclusionBuffer@Umbra@@I@Z(occlusionBuffer, sceneViewType);
}

/*
==============
R_Umbra_CullVolumetricEntities
==============
*/

void __fastcall R_Umbra_CullVolumetricEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  ?R_Umbra_CullVolumetricEntities@@YAXW4LocalClientNum_t@@II@Z(localClientNum, viewInfoIndex, sceneViewType);
}

/*
==============
DebugUmbraRenderer::addPoint
==============
*/

void __fastcall DebugUmbraRenderer::addPoint(DebugUmbraRenderer *this, const Umbra::Vector3 *pt, const Umbra::Vector4 *color)
{
  ?addPoint@DebugUmbraRenderer@@EEAAXAEBVVector3@Umbra@@AEBVVector4@3@@Z(this, pt, color);
}

/*
==============
R_Umbra_IsBoxVisible_CachedSunShadows
==============
*/

int __fastcall R_Umbra_IsBoxVisible_CachedSunShadows(const Bounds *bounds, unsigned int sceneViewType, const bool projectedBoundsTest)
{
  return ?R_Umbra_IsBoxVisible_CachedSunShadows@@YAHPEBUBounds@@I_N@Z(bounds, sceneViewType, projectedBoundsTest);
}

/*
==============
DebugUmbraRenderer::addLine
==============
*/
void DebugUmbraRenderer::addLine(DebugUmbraRenderer *this, const Umbra::Vector3 *start, const Umbra::Vector3 *end, const Umbra::Vector4 *color)
{
  R_AddDebugLine(&frontEndDataOut->debugGlobals, (const vec3_t *)start, (const vec3_t *)end, (const vec4_t *)color);
}

/*
==============
DebugUmbraRenderer::addPoint
==============
*/
void DebugUmbraRenderer::addPoint(DebugUmbraRenderer *this, const Umbra::Vector3 *pt, const Umbra::Vector4 *color)
{
  float y; 
  float z; 
  Bounds bounds; 

  y = pt->y;
  bounds.midPoint.v[0] = pt->x;
  z = pt->z;
  bounds.midPoint.v[1] = y;
  bounds.midPoint.v[2] = z;
  bounds.halfSize.v[0] = FLOAT_4_0;
  bounds.halfSize.v[1] = FLOAT_4_0;
  bounds.halfSize.v[2] = FLOAT_4_0;
  R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, (const vec4_t *)color, r_showCullMode->current.integer != 0);
}

/*
==============
DebugUmbraRenderer::addAABB
==============
*/
void DebugUmbraRenderer::addAABB(DebugUmbraRenderer *this, const Umbra::Vector3 *mn, const Umbra::Vector3 *mx, const Umbra::Vector4 *color)
{
  float y; 
  float z; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  Bounds bounds; 

  y = mx->y;
  z = mx->z;
  v6 = mx->x - mn->x;
  bounds.midPoint.v[0] = (float)(mx->x + mn->x) * 0.5;
  v7 = z + mn->z;
  bounds.midPoint.v[1] = (float)(y + mn->y) * 0.5;
  v8 = v7 * 0.5;
  v9 = v6 * 0.5;
  bounds.midPoint.v[2] = v8;
  v10 = (float)(y - mn->y) * 0.5;
  bounds.halfSize.v[0] = v9;
  bounds.halfSize.v[2] = (float)(z - mn->z) * 0.5;
  bounds.halfSize.v[1] = v10;
  R_AddDebugBoxDepthTest(&frontEndDataOut->debugGlobals, &bounds, (const vec4_t *)color);
}

/*
==============
DebugUmbraRenderer::addQuad
==============
*/
void DebugUmbraRenderer::addQuad(DebugUmbraRenderer *this, const Umbra::Vector3 *x0y0, const Umbra::Vector3 *x0y1, const Umbra::Vector3 *x1y1, const Umbra::Vector3 *x1y0, const Umbra::Vector4 *color)
{
  float y; 
  float z; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t points; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float x; 
  float v24; 
  float v25; 

  y = x0y0->y;
  x = x0y0->x;
  z = x0y0->z;
  v24 = y;
  v20 = x1y0->x;
  v8 = x1y0->z;
  v25 = z;
  v9 = x1y0->y;
  v22 = v8;
  v10 = x1y1->y;
  v21 = v9;
  v11 = x1y1->x;
  v18 = v10;
  v12 = x0y1->x;
  v17 = v11;
  v13 = x1y1->z;
  points.v[0] = v12;
  v14 = x0y1->z;
  v19 = v13;
  v15 = x0y1->y;
  points.v[2] = v14;
  points.v[1] = v15;
  R_AddDebugPolygon(&frontEndDataOut->debugGlobals, (const vec4_t *)color, 4u, &points, 0, 1, 0);
}

/*
==============
DebugUmbraRenderer::addStat
==============
*/
void DebugUmbraRenderer::addStat(DebugUmbraRenderer *this, const char *stat, int val)
{
  ;
}

/*
==============
DebugUmbraRenderer::getTome
==============
*/
const Umbra::Tome *DebugUmbraRenderer::getTome(DebugUmbraRenderer *this)
{
  return 0i64;
}

/*
==============
Load_UmbraTome
==============
*/
void Load_UmbraTome(Umbra::Tome **tome, void *bufferData, unsigned int bufferSize)
{
  int ObjectCount; 

  if ( bufferData )
  {
    if ( Umbra::Tome::init((const Umbra::Tome **)tome, (const unsigned __int8 *)bufferData, bufferSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 284, ASSERT_TYPE_ASSERT, "(tomeStatus == Umbra::Tome::STATUS_OK)", (const char *)&queryFormat, "tomeStatus == Umbra::Tome::STATUS_OK") )
      __debugbreak();
    if ( Umbra::Tome::getObjectCount(*tome) > 0x20000 )
    {
      ObjectCount = Umbra::Tome::getObjectCount(*tome);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 285, ASSERT_TYPE_ASSERT, "( ( *static_cast< Umbra::Tome ** >( tome ) )->getObjectCount() ) <= ( ( 128 * 1024 ) )", "%s <= %s\n\t%i, %i", "( *static_cast< Umbra::Tome ** >( tome ) )->getObjectCount()", "MAX_UMBRA_VIS_OBJECTS", ObjectCount, 0x20000) )
        __debugbreak();
    }
  }
  else
  {
    *tome = NULL;
  }
}

/*
==============
R_Umbra_ClearVisMask
==============
*/
void R_Umbra_ClearVisMask(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  __int64 v3; 
  unsigned int *v4; 

  v3 = sceneViewType;
  if ( !R_Umbra_GetVisMask(sceneViewType, viewInfoIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1115, ASSERT_TYPE_ASSERT, "(R_Umbra_GetVisMask( sceneViewType, viewInfoIndex ))", (const char *)&queryFormat, "R_Umbra_GetVisMask( sceneViewType, viewInfoIndex )") )
    __debugbreak();
  if ( !viewInfoIndex || (_DWORD)v3 )
    v4 = s_umbraVisMask[v3];
  else
    v4 = s_umbraVisMaskCameraAlternate;
  memset_0(v4, 0, 0x4004ui64);
}

/*
==============
R_Umbra_CullDObjEntities
==============
*/
void R_Umbra_CullDObjEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v3; 
  const DpvsView *DpvsView; 
  unsigned int sceneEntRenderFlags; 
  unsigned int sceneEntRenderFlagsMask; 
  unsigned int sceneDObjCount; 
  unsigned int v9; 
  _DWORD *v10; 
  __int64 v11; 
  unsigned __int8 **v12; 
  __int64 v13; 
  int planeCount; 
  unsigned int v15; 
  DpvsPlane *planes; 
  __int64 data[3]; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  Bounds outBounds; 

  v22 = -2i64;
  v3 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  planes = DpvsView->frustumPlanes;
  planeCount = DpvsView->frustumPlaneCount;
  sceneEntRenderFlags = DpvsView->sceneEntRenderFlags;
  sceneEntRenderFlagsMask = DpvsView->sceneEntRenderFlagsMask;
  v15 = DpvsView->sceneEntRenderFlagsMask;
  sceneDObjCount = scene.sceneDObjCount;
  v9 = 0;
  if ( scene.sceneDObjCount )
  {
    v10 = (_DWORD *)((char *)scene.sceneDObj + 1388);
    do
    {
      v11 = (*(v10 - 1) >> 10) & 0xFFF;
      if ( (_DWORD)v11 != gfxCfg.entnumNone && (sceneEntRenderFlags & (sceneEntRenderFlagsMask ^ *v10 & 0xFFFFF)) == sceneEntRenderFlags )
      {
        v12 = &scene.dpvs.entVisData[v3];
        v13 = (unsigned int)v11;
        if ( !(*v12)[v11] )
        {
          GfxSceneEntity_GetBounds((const GfxSceneEntityCull *)(v10 - 329), &outBounds);
          if ( ((_DWORD)v3 || (*v10 & 0x40000) == 0) && !R_Umbra_IsBoxVisible(&outBounds, v3, viewInfoIndex, 1) || R_CullBoxDpvs(&outBounds, planes, planeCount) )
          {
            (*v12)[v13] = 2;
          }
          else
          {
            data[0] = (__int64)*v12;
            v20 = v3;
            data[2] = (__int64)planes;
            v18 = planeCount;
            data[1] = (__int64)&scene.sceneDObjVisData[-1424][1424 * v9];
            v19 = -1;
            v21 = viewInfoIndex;
            Sys_AddWorkerCmd(WRKCMD_DPVS_ENTITY, data);
          }
          sceneEntRenderFlagsMask = v15;
        }
      }
      ++v9;
      v10 += 356;
    }
    while ( v9 < sceneDObjCount );
  }
  memset(&outBounds, 0, sizeof(outBounds));
}

/*
==============
R_Umbra_CullDObjModelEntities
==============
*/
void R_Umbra_CullDObjModelEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v4; 
  const DpvsView *DpvsView; 
  unsigned int sceneEntRenderFlags; 
  unsigned int sceneEntRenderFlagsMask; 
  Bounds *p_bounds; 
  __int64 sceneDObjModelCount; 
  __int64 v10; 
  float v11; 
  unsigned __int8 **v12; 
  __int64 v13; 
  DpvsPlane *planes; 
  int planeCount; 

  v4 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  sceneEntRenderFlags = DpvsView->sceneEntRenderFlags;
  sceneEntRenderFlagsMask = DpvsView->sceneEntRenderFlagsMask;
  planes = DpvsView->frustumPlanes;
  planeCount = DpvsView->frustumPlaneCount;
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1456, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead", planes) )
    __debugbreak();
  if ( scene.sceneDObjModelCount )
  {
    p_bounds = &scene.sceneModel[0].bounds;
    sceneDObjModelCount = (unsigned int)scene.sceneDObjModelCount;
    do
    {
      v10 = (LODWORD(p_bounds[3].halfSize.v[1]) >> 10) & 0xFFF;
      if ( (_DWORD)v10 != gfxCfg.entnumNone )
      {
        v11 = p_bounds[3].halfSize.v[2];
        if ( (sceneEntRenderFlags & (sceneEntRenderFlagsMask ^ LODWORD(v11) & 0xFFFFF)) == sceneEntRenderFlags )
        {
          v12 = &scene.dpvs.entVisData[v4];
          v13 = (unsigned int)v10;
          if ( !(*v12)[v10] )
          {
            if ( ((_DWORD)v4 || (LODWORD(v11) & 0x40000) == 0) && !R_Umbra_IsBoxVisible(p_bounds, v4, viewInfoIndex, 1) || R_CullBoxDpvs(p_bounds, planes, planeCount) )
              (*v12)[v13] = 2;
            else
              (*v12)[v13] = 1;
          }
        }
      }
      p_bounds = (Bounds *)((char *)p_bounds + 152);
      --sceneDObjModelCount;
    }
    while ( sceneDObjModelCount );
  }
}

/*
==============
R_Umbra_CullDynBrushEntities
==============
*/
void R_Umbra_CullDynBrushEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v3; 
  __int64 v4; 
  const DpvsView *DpvsView; 
  GfxWorld *world; 
  int frustumPlaneCount; 
  unsigned int v8; 
  unsigned int v9; 
  int WiewOrgCell; 
  unsigned __int8 *v11; 
  unsigned int *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int16 v19; 
  DynEntityClient *v20; 
  unsigned int dynEntDefId; 
  unsigned int v22; 
  DynEntityList *DynEntityList; 
  __int64 v24; 
  GfxBrushModel *BrushModel; 
  int v26; 
  int v27; 
  int IsBoxVisible; 
  unsigned int v29; 
  const DpvsView *v30; 
  int v31; 
  int v32; 
  DpvsPlane *frustumPlanes; 
  const Umbra::OcclusionBuffer *OcclusionBuffer; 
  int v35; 
  float *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  unsigned int *v42; 
  __int64 v43; 
  const DpvsView *v44; 
  unsigned __int16 v47; 

  v3 = localClientNum;
  v4 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  world = rgp.world;
  v44 = DpvsView;
  frustumPlaneCount = DpvsView->frustumPlaneCount;
  v8 = rgp.world->dpvsDyn.dynEntClientWordCount[1];
  v9 = (rgp.world->dpvsDyn.dynEntClientCount[1] + 31) >> 5;
  v41 = v9;
  WiewOrgCell = R_Dpvs_GetWiewOrgCell();
  v11 = &world->dpvsDyn.dynEntVisData[1][v4][(unsigned int)(v3 * world->dpvsDyn.dynEntClientCount[0])];
  v12 = &world->dpvsDyn.dynEntCellBits[1][(unsigned int)v3 * v9 + (unsigned __int64)(v8 * WiewOrgCell)];
  v42 = v12;
  if ( (unsigned int)v3 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v12 = v42;
  }
  v43 = v3;
  v47 = g_dynEntClientEntsAllocCount[v3][1];
  v13 = 0;
  v39 = 0;
  if ( !v9 )
    return;
  do
  {
    v14 = *v12;
    v15 = __lzcnt(*v12);
    if ( v15 >= 0x20 )
      goto LABEL_68;
    v16 = 32 * v13;
    v40 = v16;
    do
    {
      v17 = v16 + v15;
      if ( v16 + v15 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v17, "unsigned", v17) )
        __debugbreak();
      if ( ((0x80000000 >> v15) & v14) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1611, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v18 = (unsigned __int16)v17;
      v14 &= ~(0x80000000 >> v15);
      if ( !v11[(unsigned __int16)v17] )
      {
        if ( (unsigned __int16)v17 < v47 )
        {
          if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v38) = 2;
            LODWORD(v37) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v37, v38) )
              __debugbreak();
          }
          v19 = g_dynEntClientEntsAllocCount[v43][1];
          if ( (unsigned __int16)v17 >= v19 )
          {
            LODWORD(v38) = v19;
            LODWORD(v37) = (unsigned __int16)v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v37, v38) )
              __debugbreak();
          }
          if ( !g_dynEntClientLists[v43][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v20 = &g_dynEntClientLists[v43][1][(unsigned __int16)v17];
          if ( v20 )
          {
            dynEntDefId = v20->dynEntDefId;
            if ( dynEntDefId != -1 )
            {
              v22 = dynEntDefId & 0x7FFFF;
              DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(dynEntDefId >> 19));
              if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                __debugbreak();
              if ( v22 >= DynEntityList->dynEntCount[1] )
              {
                LODWORD(v38) = DynEntityList->dynEntCount[1];
                LODWORD(v37) = v22;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v37, v38) )
                  __debugbreak();
              }
              v24 = (__int64)&DynEntityList->dynEntDefList[1][v22];
              if ( v24 )
              {
                BrushModel = R_GetBrushModel(*(unsigned __int16 *)(v24 + 66));
                if ( BrushModel )
                {
                  if ( (unsigned int)v4 >= 0x21 )
                  {
                    LODWORD(v38) = 33;
                    LODWORD(v37) = v4;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v37, v38) )
                      __debugbreak();
                  }
                  if ( rg.useCachedSunShadow && (unsigned int)(v4 - 1) <= 2 )
                  {
                    v26 = v4 - rg.firstCachedSunShadowPartition;
                    v27 = -1;
                    if ( v26 == 1 )
                      v27 = 12;
                    if ( v26 == 2 )
                      v27 = 22;
                    if ( v27 == -1 )
                    {
LABEL_45:
                      IsBoxVisible = 1;
                    }
                    else
                    {
                      if ( (unsigned int)v4 <= 1 || !R_Umbra_CullProjectedBounds_SunShadows(&BrushModel->writable.bounds, v4) )
                      {
                        v29 = v27;
                        while ( 1 )
                        {
                          v30 = R_GetDpvsView(v29);
                          v31 = v30->frustumPlaneCount;
                          if ( !v31 )
                            break;
                          v32 = 0;
                          frustumPlanes = v30->frustumPlanes;
                          if ( v31 <= 0 )
                          {
LABEL_54:
                            if ( s_umbraQueryJobCount[v29] > 0 || R_Umbra_IsBoxVisible(&BrushModel->writable.bounds, s_umbraOcclusionBuffer[v29]) )
                              goto LABEL_45;
                          }
                          else
                          {
                            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[0]) & _xmm) * BrushModel->writable.bounds.halfSize.v[0]) + (float)((float)(BrushModel->writable.bounds.midPoint.v[0] * frustumPlanes->coeffs.v[0]) + frustumPlanes->coeffs.v[3])) + (float)(BrushModel->writable.bounds.midPoint.v[1] * frustumPlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[1]) & _xmm) * BrushModel->writable.bounds.halfSize.v[1])) + (float)(BrushModel->writable.bounds.midPoint.v[2] * frustumPlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[2]) & _xmm) * BrushModel->writable.bounds.halfSize.v[2])) > 0.0 )
                            {
                              ++v32;
                              ++frustumPlanes;
                              if ( v32 >= v31 )
                                goto LABEL_54;
                            }
                          }
                          if ( ++v29 - v27 >= 0xA )
                          {
                            IsBoxVisible = 0;
                            goto LABEL_59;
                          }
                        }
                      }
                      IsBoxVisible = 0;
                    }
                  }
                  else
                  {
                    OcclusionBuffer = R_Umbra_GetOcclusionBuffer(v4, viewInfoIndex);
                    IsBoxVisible = R_Umbra_IsBoxVisible(&BrushModel->writable.bounds, OcclusionBuffer);
                  }
LABEL_59:
                  if ( IsBoxVisible )
                  {
                    v35 = 0;
                    if ( frustumPlaneCount <= 0 )
                    {
LABEL_64:
                      v11[v18] = 1;
                      goto LABEL_66;
                    }
                    v36 = &v44->frustumPlanes[0].coeffs.v[3];
                    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v36 - 3) & _xmm) * BrushModel->writable.bounds.halfSize.v[0]) + (float)((float)(BrushModel->writable.bounds.midPoint.v[0] * *(v36 - 3)) + *v36)) + (float)(BrushModel->writable.bounds.midPoint.v[1] * *(v36 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v36 - 2) & _xmm) * BrushModel->writable.bounds.halfSize.v[1])) + (float)(BrushModel->writable.bounds.midPoint.v[2] * *(v36 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v36 - 1) & _xmm) * BrushModel->writable.bounds.halfSize.v[2])) > 0.0 )
                    {
                      ++v35;
                      v36 += 4;
                      if ( v35 >= frustumPlaneCount )
                        goto LABEL_64;
                    }
                  }
                }
              }
            }
          }
        }
        v11[v18] = 2;
      }
LABEL_66:
      v16 = v40;
      v15 = __lzcnt(v14);
    }
    while ( v15 < 0x20 );
    v13 = v39;
    v9 = v41;
    v12 = v42;
LABEL_68:
    ++v13;
    ++v12;
    v39 = v13;
    v42 = v12;
  }
  while ( v13 < v9 );
}

/*
==============
R_Umbra_CullDynModelEntities
==============
*/
void R_Umbra_CullDynModelEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v3; 
  __int64 v4; 
  const DpvsView *DpvsView; 
  GfxWorld *world; 
  int frustumPlaneCount; 
  unsigned int v8; 
  unsigned int v9; 
  int WiewOrgCell; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  DynEntityPose *v21; 
  int v22; 
  int v23; 
  int IsBoxVisible; 
  unsigned int v25; 
  const DpvsView *v26; 
  int v27; 
  int v28; 
  DpvsPlane *frustumPlanes; 
  const Umbra::OcclusionBuffer *OcclusionBuffer; 
  int v31; 
  float *v32; 
  __int64 v33; 
  __int64 v34; 
  int v35; 
  unsigned int v36; 
  unsigned __int8 *v37; 
  unsigned int *v38; 
  __int64 v39; 
  const DpvsView *v40; 
  unsigned __int16 v43; 
  unsigned int v44; 

  v3 = localClientNum;
  v4 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  world = rgp.world;
  v40 = DpvsView;
  frustumPlaneCount = DpvsView->frustumPlaneCount;
  v8 = rgp.world->dpvsDyn.dynEntClientWordCount[0];
  v9 = (rgp.world->dpvsDyn.dynEntClientCount[0] + 31) >> 5;
  v36 = v9;
  WiewOrgCell = R_Dpvs_GetWiewOrgCell();
  v37 = &world->dpvsDyn.dynEntVisData[0][v4][(unsigned int)(v3 * world->dpvsDyn.dynEntClientCount[0])];
  v11 = &world->dpvsDyn.dynEntCellBits[0][(unsigned int)v3 * v9 + (unsigned __int64)(v8 * WiewOrgCell)];
  v38 = v11;
  if ( (unsigned int)v3 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v11 = v38;
  }
  v39 = v3;
  v43 = g_dynEntClientEntsAllocCount[v3][0];
  v12 = 0;
  v44 = 0;
  if ( !v9 )
    return;
  do
  {
    v13 = *v11;
    v14 = __lzcnt(*v11);
    if ( v14 >= 0x20 )
      goto LABEL_60;
    v15 = 32 * v12;
    v35 = v15;
    do
    {
      v16 = v15 + v14;
      if ( v15 + v14 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v16, "unsigned", v16) )
        __debugbreak();
      v17 = 0x80000000 >> v14;
      if ( ((0x80000000 >> v14) & v13) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1562, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
        __debugbreak();
      v18 = v37;
      v19 = (unsigned __int16)v16;
      v13 &= ~v17;
      if ( !v37[(unsigned __int16)v16] )
      {
        if ( (unsigned __int16)v16 < v43 )
        {
          if ( (unsigned int)v3 >= 2 )
          {
            LODWORD(v34) = 2;
            LODWORD(v33) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          if ( !g_dynEntPoseLists[v39][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
            __debugbreak();
          v20 = g_dynEntClientEntsAllocCount[v39][0];
          if ( (unsigned __int16)v16 >= v20 )
          {
            LODWORD(v34) = v20;
            LODWORD(v33) = (unsigned __int16)v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          v21 = &g_dynEntPoseLists[v39][0][(unsigned __int16)v16];
          if ( v21 )
          {
            if ( (unsigned int)v4 >= 0x21 )
            {
              LODWORD(v34) = 33;
              LODWORD(v33) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v33, v34) )
                __debugbreak();
            }
            if ( rg.useCachedSunShadow && (unsigned int)(v4 - 1) <= 2 )
            {
              v22 = v4 - rg.firstCachedSunShadowPartition;
              v23 = -1;
              if ( v22 == 1 )
                v23 = 12;
              if ( v22 == 2 )
                v23 = 22;
              if ( v23 == -1 )
              {
                IsBoxVisible = 1;
                goto LABEL_51;
              }
              if ( (unsigned int)v4 > 1 && R_Umbra_CullProjectedBounds_SunShadows(&v21->bounds, v4) )
              {
                IsBoxVisible = 0;
                goto LABEL_51;
              }
              v25 = v23;
              while ( 1 )
              {
                v26 = R_GetDpvsView(v25);
                v27 = v26->frustumPlaneCount;
                if ( !v27 )
                {
LABEL_48:
                  v18 = v37;
                  IsBoxVisible = 0;
                  goto LABEL_51;
                }
                v28 = 0;
                frustumPlanes = v26->frustumPlanes;
                if ( v27 <= 0 )
                {
LABEL_45:
                  if ( s_umbraQueryJobCount[v25] > 0 || R_Umbra_IsBoxVisible(&v21->bounds, s_umbraOcclusionBuffer[v25]) )
                  {
                    v18 = v37;
                    IsBoxVisible = 1;
                    goto LABEL_51;
                  }
                }
                else
                {
                  while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[0]) & _xmm) * v21->bounds.halfSize.v[0]) + (float)((float)(v21->bounds.midPoint.v[0] * frustumPlanes->coeffs.v[0]) + frustumPlanes->coeffs.v[3])) + (float)(v21->bounds.midPoint.v[1] * frustumPlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[1]) & _xmm) * v21->bounds.halfSize.v[1])) + (float)(v21->bounds.midPoint.v[2] * frustumPlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[2]) & _xmm) * v21->bounds.halfSize.v[2])) > 0.0 )
                  {
                    ++v28;
                    ++frustumPlanes;
                    if ( v28 >= v27 )
                      goto LABEL_45;
                  }
                }
                if ( ++v25 - v23 >= 0xA )
                  goto LABEL_48;
              }
            }
            OcclusionBuffer = R_Umbra_GetOcclusionBuffer(v4, viewInfoIndex);
            IsBoxVisible = R_Umbra_IsBoxVisible(&v21->bounds, OcclusionBuffer);
LABEL_51:
            if ( IsBoxVisible )
            {
              v31 = 0;
              if ( frustumPlaneCount <= 0 )
              {
LABEL_56:
                v18[v19] = 1;
                goto LABEL_58;
              }
              v32 = &v40->frustumPlanes[0].coeffs.v[3];
              while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v32 - 3) & _xmm) * v21->bounds.halfSize.v[0]) + (float)((float)(v21->bounds.midPoint.v[0] * *(v32 - 3)) + *v32)) + (float)(v21->bounds.midPoint.v[1] * *(v32 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v32 - 2) & _xmm) * v21->bounds.halfSize.v[1])) + (float)(v21->bounds.midPoint.v[2] * *(v32 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v32 - 1) & _xmm) * v21->bounds.halfSize.v[2])) > 0.0 )
              {
                ++v31;
                v32 += 4;
                if ( v31 >= frustumPlaneCount )
                  goto LABEL_56;
              }
            }
          }
        }
        v18[v19] = 2;
      }
LABEL_58:
      LODWORD(v3) = localClientNum;
      v15 = v35;
      v14 = __lzcnt(v13);
    }
    while ( v14 < 0x20 );
    v12 = v44;
    v9 = v36;
    v11 = v38;
LABEL_60:
    ++v12;
    ++v11;
    v44 = v12;
    v38 = v11;
  }
  while ( v12 < v9 );
}

/*
==============
R_Umbra_CullParticleSprites
==============
*/
void R_Umbra_CullParticleSprites(const void *const cmdInfo)
{
  FxSystem *v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  Profile_Begin(203);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Umbra Cull Particle Sprites");
  v2 = *(FxSystem **)cmdInfo;
  v3 = *((int *)cmdInfo + 2);
  if ( (unsigned int)v3 >= 2 )
  {
    v5 = 2;
    v4 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  ParticleManager::UpdateCulling(&g_particleManager[v3], v2);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_Umbra_CullProjectedBounds
==============
*/
_BOOL8 R_Umbra_CullProjectedBounds(const Bounds *bounds, const float thresholdSq)
{
  __int128 v4; 
  __m128 v8; 
  __m128 v14; 
  __int128 v24; 
  __m128 v25; 
  __m128 v26; 

  HIDWORD(v24) = 0;
  v4 = v24;
  *(float *)&v4 = rg.correctedLodParms.origin.v[0];
  _XMM5 = v4;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
  }
  v25 = _XMM5;
  v25.m128_i32[3] = 0;
  v8 = v25;
  v8.m128_f32[0] = bounds->midPoint.v[0];
  _XMM4 = v8;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  _XMM0 = g_negativeZero.v;
  _mm128_sub_ps(_XMM5, _XMM4);
  __asm { vandnps xmm2, xmm0, xmm1 }
  v26 = _XMM4;
  v26.m128_i32[3] = 0;
  v14 = v26;
  v14.m128_f32[0] = bounds->halfSize.v[0];
  _XMM3 = v14;
  __asm
  {
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm8, 20h ; ' '
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm5, xmm0, xmm0
    vmaxss  xmm1, xmm5, cs:__real@3f800000
  }
  return (float)((float)((float)((float)(bounds->halfSize.v[1] * bounds->halfSize.v[1]) + (float)(v14.m128_f32[0] * v14.m128_f32[0])) + (float)(bounds->halfSize.v[2] * bounds->halfSize.v[2])) / (float)((float)(rg.correctedLodParms.invFovScale * rg.correctedLodParms.invFovScale) * *(float *)&_XMM1)) <= thresholdSq;
}

/*
==============
R_Umbra_CullProjectedBounds_SunShadows
==============
*/
_BOOL8 R_Umbra_CullProjectedBounds_SunShadows(const Bounds *bounds, unsigned int sceneViewType)
{
  const dvar_t *v3; 
  __int128 v5; 
  __m128 v9; 
  __m128 v15; 
  __int128 v26; 
  __m128 v27; 
  __m128 v28; 

  if ( sceneViewType - 2 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 547, ASSERT_TYPE_ASSERT, "( ( sceneViewType > SCENE_VIEW_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_SUNSHADOW_LAST ) )", "( sceneViewType ) = %u", sceneViewType) )
    __debugbreak();
  v3 = DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold;
  if ( !DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunShadowProjectedBoundsCullThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  HIDWORD(v26) = 0;
  v5 = v26;
  *(float *)&v5 = rg.correctedLodParms.origin.v[0];
  _XMM5 = v5;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
  }
  v27 = _XMM5;
  v27.m128_i32[3] = 0;
  v9 = v27;
  v9.m128_f32[0] = bounds->midPoint.v[0];
  _XMM4 = v9;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
  }
  _XMM0 = g_negativeZero.v;
  _mm128_sub_ps(_XMM5, _XMM4);
  __asm { vandnps xmm2, xmm0, xmm1 }
  v28 = _XMM4;
  v28.m128_i32[3] = 0;
  v15 = v28;
  v15.m128_f32[0] = bounds->halfSize.v[0];
  _XMM3 = v15;
  __asm
  {
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm8, 20h ; ' '
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm5, xmm0, xmm0
    vmaxss  xmm1, xmm5, cs:__real@3f800000
  }
  return (float)((float)((float)((float)(bounds->halfSize.v[1] * bounds->halfSize.v[1]) + (float)(v15.m128_f32[0] * v15.m128_f32[0])) + (float)(bounds->halfSize.v[2] * bounds->halfSize.v[2])) / (float)((float)(rg.correctedLodParms.invFovScale * rg.correctedLodParms.invFovScale) * *(float *)&_XMM1)) <= (float)(v3->current.value * v3->current.value);
}

/*
==============
R_Umbra_CullSceneBrushEntities
==============
*/
void R_Umbra_CullSceneBrushEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v3; 
  const DpvsView *DpvsView; 
  unsigned int sceneEntRenderFlags; 
  unsigned int sceneEntRenderFlagsMask; 
  unsigned int *p_renderFlags; 
  __int64 sceneBrushCount; 
  __int64 v9; 
  unsigned __int8 **v10; 
  __int64 v11; 
  const Bounds *v12; 
  DpvsPlane *planes; 
  int planeCount; 

  v3 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  sceneEntRenderFlags = DpvsView->sceneEntRenderFlags;
  sceneEntRenderFlagsMask = DpvsView->sceneEntRenderFlagsMask;
  planes = DpvsView->frustumPlanes;
  planeCount = DpvsView->frustumPlaneCount;
  if ( scene.sceneBrushCount )
  {
    p_renderFlags = &scene.sceneBrush[0].renderFlags;
    sceneBrushCount = (unsigned int)scene.sceneBrushCount;
    do
    {
      v9 = *((unsigned __int16 *)p_renderFlags - 36);
      if ( (_DWORD)v9 != gfxCfg.entnumNone && (sceneEntRenderFlags & (sceneEntRenderFlagsMask ^ *p_renderFlags)) == sceneEntRenderFlags )
      {
        v10 = &scene.dpvs.entVisData[v3];
        v11 = *((unsigned __int16 *)p_renderFlags - 36);
        if ( !(*v10)[v9] )
        {
          v12 = (const Bounds *)*((_QWORD *)p_renderFlags - 8);
          if ( ((_DWORD)v3 || (*p_renderFlags & 0x40000) == 0) && !R_Umbra_IsBoxVisible(*((const Bounds **)p_renderFlags - 8), v3, viewInfoIndex, 0) || R_CullBoxDpvs(v12, planes, planeCount) )
            (*v10)[v11] = 2;
          else
            (*v10)[v11] = 1;
        }
      }
      p_renderFlags += 22;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
  }
}

/*
==============
R_Umbra_CullSceneEnts
==============
*/
void R_Umbra_CullSceneEnts(const void *const cmdInfo)
{
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  const DpvsView *DpvsView; 
  unsigned int sceneEntRenderFlags; 
  unsigned int sceneEntRenderFlagsMask; 
  unsigned int sceneDObjCount; 
  unsigned int v9; 
  _DWORD *v10; 
  __int64 v11; 
  unsigned __int8 **v12; 
  __int64 v13; 
  const DpvsView *v14; 
  unsigned int v15; 
  unsigned int v16; 
  Bounds *p_bounds; 
  __int64 sceneDObjModelCount; 
  __int64 v19; 
  float v20; 
  __int64 v21; 
  const DpvsView *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int *p_renderFlags; 
  __int64 sceneBrushCount; 
  __int64 v27; 
  __int64 v28; 
  const Bounds *v29; 
  LocalClientNum_t v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  int frustumPlaneCount; 
  int v35; 
  LocalClientNum_t localClientNum; 
  int planeCount; 
  int planeCounta; 
  char v39; 
  DpvsPlane *planes; 
  DpvsPlane *planesa; 
  DpvsPlane *planesb; 
  __int64 data[3]; 
  int v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  __int64 v48; 
  Bounds outBounds; 

  v48 = -2i64;
  Profile_Begin(202);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Umbra Cull Scene Ents");
  localClientNum = *(_DWORD *)cmdInfo;
  v2 = *((_DWORD *)cmdInfo + 1);
  v3 = *((_DWORD *)cmdInfo + 3);
  v39 = v3;
  v4 = *((unsigned int *)cmdInfo + 2);
  if ( v2 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1692, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", *((_DWORD *)cmdInfo + 1), 6) )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x21 )
  {
    LODWORD(v32) = 33;
    LODWORD(v31) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1693, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  if ( rg.drawXModels )
  {
    if ( (v3 & 1) != 0 )
    {
      DpvsView = R_GetDpvsView(v2, v4);
      planes = DpvsView->frustumPlanes;
      planeCount = DpvsView->frustumPlaneCount;
      sceneEntRenderFlags = DpvsView->sceneEntRenderFlags;
      sceneEntRenderFlagsMask = DpvsView->sceneEntRenderFlagsMask;
      v33 = DpvsView->sceneEntRenderFlagsMask;
      sceneDObjCount = scene.sceneDObjCount;
      v9 = 0;
      if ( scene.sceneDObjCount )
      {
        v10 = (_DWORD *)((char *)scene.sceneDObj + 1388);
        do
        {
          v11 = (*(v10 - 1) >> 10) & 0xFFF;
          if ( (_DWORD)v11 != gfxCfg.entnumNone && (sceneEntRenderFlags & (sceneEntRenderFlagsMask ^ *v10 & 0xFFFFF)) == sceneEntRenderFlags )
          {
            v12 = &scene.dpvs.entVisData[v4];
            v13 = (unsigned int)v11;
            if ( !(*v12)[v11] )
            {
              GfxSceneEntity_GetBounds((const GfxSceneEntityCull *)(v10 - 329), &outBounds);
              if ( ((_DWORD)v4 || (*v10 & 0x40000) == 0) && !R_Umbra_IsBoxVisible(&outBounds, v4, v2, 1) || R_CullBoxDpvs(&outBounds, planes, planeCount) )
              {
                (*v12)[v13] = 2;
              }
              else
              {
                data[0] = (__int64)*v12;
                v46 = v4;
                data[2] = (__int64)planes;
                v44 = planeCount;
                data[1] = (__int64)&scene.sceneDObjVisData[-1424][1424 * v9];
                v45 = -1;
                v47 = v2;
                Sys_AddWorkerCmd(WRKCMD_DPVS_ENTITY, data);
              }
              sceneEntRenderFlagsMask = v33;
            }
          }
          ++v9;
          v10 += 356;
        }
        while ( v9 < sceneDObjCount );
        LOBYTE(v3) = v39;
      }
      memset(&outBounds, 0, sizeof(outBounds));
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = R_GetDpvsView(v2, v4);
      planesa = v14->frustumPlanes;
      frustumPlaneCount = v14->frustumPlaneCount;
      v15 = v14->sceneEntRenderFlags;
      v16 = v14->sceneEntRenderFlagsMask;
      if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1456, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
        __debugbreak();
      if ( scene.sceneDObjModelCount )
      {
        p_bounds = &scene.sceneModel[0].bounds;
        sceneDObjModelCount = (unsigned int)scene.sceneDObjModelCount;
        do
        {
          v19 = (LODWORD(p_bounds[3].halfSize.v[1]) >> 10) & 0xFFF;
          if ( (_DWORD)v19 != gfxCfg.entnumNone )
          {
            v20 = p_bounds[3].halfSize.v[2];
            if ( (v15 & (v16 ^ LODWORD(v20) & 0xFFFFF)) == v15 )
            {
              v21 = (unsigned int)v19;
              if ( !scene.dpvs.entVisData[v4][v19] )
              {
                if ( ((_DWORD)v4 || (LODWORD(v20) & 0x40000) == 0) && !R_Umbra_IsBoxVisible(p_bounds, v4, v2, 1) || R_CullBoxDpvs(p_bounds, planesa, frustumPlaneCount) )
                  scene.dpvs.entVisData[v4][v21] = 2;
                else
                  scene.dpvs.entVisData[v4][v21] = 1;
              }
            }
          }
          p_bounds = (Bounds *)((char *)p_bounds + 152);
          --sceneDObjModelCount;
        }
        while ( sceneDObjModelCount );
        LOBYTE(v3) = v39;
      }
    }
    if ( (v3 & 0x10) != 0 )
      R_Umbra_CullDynModelEntities(localClientNum, v2, v4);
  }
  if ( rg.drawBModels )
  {
    if ( (v3 & 4) != 0 )
    {
      v22 = R_GetDpvsView(v2, v4);
      planesb = v22->frustumPlanes;
      planeCounta = v22->frustumPlaneCount;
      v23 = v22->sceneEntRenderFlags;
      v24 = v22->sceneEntRenderFlagsMask;
      v35 = v22->sceneEntRenderFlagsMask;
      if ( scene.sceneBrushCount )
      {
        p_renderFlags = &scene.sceneBrush[0].renderFlags;
        sceneBrushCount = (unsigned int)scene.sceneBrushCount;
        do
        {
          v27 = *((unsigned __int16 *)p_renderFlags - 36);
          if ( (_DWORD)v27 != gfxCfg.entnumNone && (v23 & (v24 ^ *p_renderFlags)) == v23 )
          {
            v28 = *((unsigned __int16 *)p_renderFlags - 36);
            if ( !scene.dpvs.entVisData[v4][v27] )
            {
              v29 = (const Bounds *)*((_QWORD *)p_renderFlags - 8);
              if ( ((_DWORD)v4 || (*p_renderFlags & 0x40000) == 0) && !R_Umbra_IsBoxVisible(*((const Bounds **)p_renderFlags - 8), v4, v2, 0) || R_CullBoxDpvs(v29, planesb, planeCounta) )
                scene.dpvs.entVisData[v4][v28] = 2;
              else
                scene.dpvs.entVisData[v4][v28] = 1;
              v24 = v35;
            }
          }
          p_renderFlags += 22;
          --sceneBrushCount;
        }
        while ( sceneBrushCount );
        LOBYTE(v3) = v39;
      }
    }
    v30 = localClientNum;
    if ( (v3 & 0x20) != 0 )
      R_Umbra_CullDynBrushEntities(localClientNum, v2, v4);
  }
  else
  {
    v30 = localClientNum;
  }
  if ( (v3 & 8) != 0 )
    R_Umbra_CullVolumetricEntities(v30, v2, v4);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_Umbra_CullVolumetricEntities
==============
*/
void R_Umbra_CullVolumetricEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  Umbra::OcclusionBuffer *OcclusionBuffer; 
  const DpvsView *DpvsView; 
  int frustumPlaneCount; 
  const DpvsPlane *frustumPlanes; 
  unsigned __int8 *sceneVolumetricVisData; 
  __int64 sceneVolumetricCount; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v15; 
  __int128 v19; 
  __int128 v23; 
  __m128 v31; 
  __m128 v33; 
  __m128 v35; 
  float v36; 
  float v37; 
  float v38; 
  Umbra::OcclusionBuffer::VisibilityTestResult v39; 
  __int64 v40; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  Bounds bounds; 

  if ( sceneViewType )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1673, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_CullVolumetricEntites: unsupported umbra view type %d", sceneViewType) )
      __debugbreak();
  }
  else
  {
    OcclusionBuffer = R_Umbra_GetOcclusionBuffer(0, viewInfoIndex);
    DpvsView = R_GetDpvsView(viewInfoIndex, 0);
    frustumPlaneCount = DpvsView->frustumPlaneCount;
    frustumPlanes = DpvsView->frustumPlanes;
    if ( scene.sceneVolumetricCount )
    {
      sceneVolumetricVisData = scene.sceneVolumetricVisData;
      sceneVolumetricCount = scene.sceneVolumetricCount;
      _RDI = &scene.sceneVolumetrics[0].volumetric.obb.xAxis.v[2];
      do
      {
        if ( !*sceneVolumetricVisData )
        {
          v11 = *(_RDI - 2);
          v12 = *(_RDI - 4);
          v13 = *(_RDI - 3);
          HIDWORD(v44) = 0;
          HIDWORD(v45) = 0;
          HIDWORD(v46) = 0;
          v15 = v44;
          *(float *)&v15 = v11;
          _XMM5 = v15;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rdi-4], 10h
            vinsertps xmm5, xmm5, dword ptr [rdi], 20h ; ' '
          }
          v19 = v45;
          *(float *)&v19 = _RDI[1];
          _XMM3 = v19;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rdi+8], 10h
            vinsertps xmm3, xmm3, dword ptr [rdi+0Ch], 20h ; ' '
          }
          v23 = v46;
          *(float *)&v23 = _RDI[4];
          _XMM4 = v23;
          _XMM0 = g_negativeZero.v;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
            vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
            vandnps xmm1, xmm0, xmm5
          }
          v45 = _XMM3;
          __asm { vandnps xmm3, xmm0, xmm3 }
          v46 = _XMM4;
          __asm
          {
            vandnps xmm4, xmm0, xmm4
            vbroadcastss xmm0, dword ptr [rdi+1Ch]
          }
          v31 = _mm128_mul_ps(_XMM0, _XMM1);
          __asm { vbroadcastss xmm1, dword ptr [rdi+20h] }
          v33 = _mm128_mul_ps(_XMM1, _XMM3);
          __asm { vbroadcastss xmm1, dword ptr [rdi+24h] }
          v35 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM4), _mm128_add_ps(v33, v31));
          v44 = _XMM5;
          v36 = *(_RDI - 5);
          v37 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
          v38 = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
          bounds.halfSize.v[1] = v37;
          bounds.halfSize.v[2] = v38;
          bounds.halfSize.v[0] = v35.m128_f32[0];
          bounds.midPoint.v[0] = v36;
          bounds.midPoint.v[1] = v12;
          bounds.midPoint.v[2] = v13;
          if ( OcclusionBuffer )
          {
            mx.x = v36 + v35.m128_f32[0];
            mx.y = v12 + v37;
            mx.z = v13 + v38;
            mn.x = v36 - v35.m128_f32[0];
            mn.y = v12 - v37;
            mn.z = v13 - v38;
            v39 = Umbra::OcclusionBuffer::testAABBVisibility(OcclusionBuffer, &mn, &mx, 0, NULL);
            if ( v39 == HIDDEN )
              goto LABEL_13;
            if ( v39 != VISIBLE && v39 != 3 )
            {
              LODWORD(v40) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v40) )
                __debugbreak();
            }
          }
          if ( R_CullBoxDpvs(&bounds, frustumPlanes, frustumPlaneCount) )
          {
LABEL_13:
            *sceneVolumetricVisData = 2;
            goto LABEL_14;
          }
          *sceneVolumetricVisData = 1;
        }
LABEL_14:
        _RDI += 66;
        ++sceneVolumetricVisData;
        --sceneVolumetricCount;
      }
      while ( sceneVolumetricCount );
    }
  }
}

/*
==============
R_Umbra_FillOcclusionTexture
==============
*/
void R_Umbra_FillOcclusionTexture(GfxImage *image, const Umbra::OcclusionBuffer *occlusion)
{
  const GfxTexture *Resident; 
  int Width; 
  int Height; 
  HRESULT v7; 
  const char *v8; 
  void *data; 
  __int64 v10[2]; 

  if ( occlusion )
  {
    Resident = R_Texture_GetResident(image->textureId);
    Width = Umbra::OcclusionBuffer::getWidth((Umbra::OcclusionBuffer *)occlusion);
    Height = Umbra::OcclusionBuffer::getHeight((Umbra::OcclusionBuffer *)occlusion);
    if ( Width != image->width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 374, ASSERT_TYPE_ASSERT, "(occlDesc.width == image->width)", (const char *)&queryFormat, "occlDesc.width == image->width") )
      __debugbreak();
    if ( Height != image->height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 375, ASSERT_TYPE_ASSERT, "(occlDesc.height == image->height)", (const char *)&queryFormat, "occlDesc.height == image->height") )
      __debugbreak();
    v10[0] = 0i64;
    v10[1] = 0i64;
    data = NULL;
    v7 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int64 *, void **))Resident->basemap->m_pFunction[2].Release)(Resident->basemap, 0i64, v10, &data);
    if ( v7 < 0 )
    {
      v8 = R_ErrorDescription(v7);
      Sys_Error((const ObfuscateErrorText)&stru_1443CD3F0, 391i64, v8);
    }
    Umbra::OcclusionBuffer::getBuffer((Umbra::OcclusionBuffer *)occlusion, data, NULL);
    Resident->basemap->m_pFunction[3].QueryInterface(Resident->basemap, NULL, NULL);
  }
}

/*
==============
R_Umbra_FillVisBuffers
==============
*/
__int64 R_Umbra_FillVisBuffers(const Umbra::Tome *umbraTome, const unsigned int *objIndexArray, int numObjects, unsigned int sceneViewType, const Umbra::OcclusionBuffer *occlussionBuffer)
{
  Umbra::Tome *v5; 
  __int64 v6; 
  int v7; 
  const unsigned int *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v13; 
  int v14; 
  int ObjectUserIDs; 
  __int64 v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int *reflectionProbeVisData; 
  unsigned int v25; 
  unsigned int clutterCollectionCount; 
  GfxClutterCollection *clutterCollections; 
  unsigned int v28; 
  Umbra::OcclusionBuffer *v29; 
  unsigned __int16 *p_smodelCollectionIndex; 
  unsigned __int64 v31; 
  Bounds *collectionBounds; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  Umbra::OcclusionBuffer::VisibilityTestResult v39; 
  bool v40; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int maxBspSurfaceId; 
  unsigned int minBspSurfaceId; 
  unsigned int v47; 
  int v48; 
  unsigned int v50; 
  Umbra::Vector3 mn; 
  Umbra::Vector3 mx; 
  unsigned int ids[4096]; 

  v5 = (Umbra::Tome *)umbraTome;
  v6 = sceneViewType;
  v7 = numObjects;
  *(_QWORD *)&mn.x = umbraTome;
  v8 = objIndexArray;
  *(_QWORD *)&mx.x = occlussionBuffer;
  if ( !umbraTome && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 881, ASSERT_TYPE_ASSERT, "(umbraTome)", (const char *)&queryFormat, "umbraTome") )
    __debugbreak();
  if ( v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 882, ASSERT_TYPE_ASSERT, "(numObjects >= 0)", (const char *)&queryFormat, "numObjects >= 0") )
    __debugbreak();
  v47 = 0;
  Sys_ProfBeginNamedEvent(0xFF8B4513, "Umbra Fill Vis Buffers");
  LODWORD(v9) = 0;
  v10 = (v7 + 31) >> 5;
  _ER14 = 0;
  v50 = v10;
  v48 = 0;
  if ( v10 )
    _ER14 = *v8;
  minBspSurfaceId = -1;
  maxBspSurfaceId = 0;
  while ( _ER14 )
  {
LABEL_14:
    __asm { tzcnt   ecx, r14d }
    v13 = _ECX + 32 * v9;
    v14 = 1 << _ECX;
    if ( (_ER14 & (1 << _ECX)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 107, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    _ER14 &= ~v14;
    if ( v13 >= v7 )
      goto LABEL_73;
    ObjectUserIDs = Umbra::Tome::getObjectUserIDs(v5, v13, ids, 4096);
    v16 = ObjectUserIDs;
    if ( ObjectUserIDs < 0 || (unsigned __int64)ObjectUserIDs > 0x1000 )
    {
      LODWORD(v44) = 4096;
      LODWORD(v42) = ObjectUserIDs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 902, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numSubObjIDs ) && ( numSubObjIDs ) <= ( ( sizeof( *array_counter( subObjIDs ) ) + 0 ) )", "numSubObjIDs not in [0, ARRAY_COUNT( subObjIDs )]\n\t%i not in [%i, %i]", v42, 0i64, v44) )
        __debugbreak();
    }
    v17 = 0i64;
    v18 = (int)v16 <= 0;
    v19 = v16;
    v8 = objIndexArray;
    if ( !v18 )
    {
      v47 += v19;
      v20 = minBspSurfaceId;
      v21 = maxBspSurfaceId;
      while ( 1 )
      {
        v22 = ids[v17] & 0xFFFFFF;
        v23 = ids[v17] & 0x70000000;
        if ( v23 > 0x40000000 )
        {
          if ( v23 == 1342177280 )
          {
            if ( (unsigned int)v22 > rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount )
            {
              LODWORD(v44) = rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount;
              LODWORD(v43) = ids[v17] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 952, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount)", "%s\n\tUmbra reflection probe (%d) exceeds world reflection probe count (%d).  Was this map compiled with only ents, even though a reflection probe change was made?", "subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount", v43, v44) )
                __debugbreak();
            }
            if ( (_DWORD)v6 )
              goto LABEL_71;
            reflectionProbeVisData = rgp.world->dpvs.reflectionProbeVisData;
          }
          else
          {
            if ( v23 != 1610612736 )
              goto LABEL_58;
            if ( (unsigned int)v22 > rgp.world->draw.decalVolumeCollectionCount )
            {
              LODWORD(v44) = rgp.world->draw.decalVolumeCollectionCount;
              LODWORD(v43) = ids[v17] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 971, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount)", "%s\n\tUmbra decal (%d) exceeds world decal count (%d).  Was this map compiled with only ents, even though a decal change was made?", "subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount", v43, v44) )
                __debugbreak();
            }
            if ( (_DWORD)v6 )
              goto LABEL_71;
            reflectionProbeVisData = rgp.world->dpvs.decalVisData;
          }
          goto LABEL_70;
        }
        if ( v23 == 0x40000000 )
          break;
        if ( !v23 )
        {
          if ( rg.drawWorld )
          {
            if ( (unsigned int)v22 >= rgp.world->models->surfaceCount )
            {
              LODWORD(v44) = rgp.world->models->surfaceCount;
              LODWORD(v43) = ids[v17] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 918, ASSERT_TYPE_ASSERT, "(sortedSubObjIDIndex < rgp.world->models[0].surfaceCount)", "%s\n\tUmbra surface ID (%d) exceeds world surface count (%d).  Was this map compiled with only ents, even though a world BSP change was made?", "sortedSubObjIDIndex < rgp.world->models[0].surfaceCount", v43, v44) )
                __debugbreak();
            }
            rgp.world->dpvs.surfaceVisData[v6][(unsigned __int64)(unsigned int)v22 >> 5] |= 0x80000000 >> (v22 & 0x1F);
            if ( v20 > (unsigned int)v22 )
              v20 = v22;
            if ( (unsigned int)v22 > v21 )
              v21 = v22;
          }
          goto LABEL_71;
        }
        if ( v23 == 0x10000000 )
        {
          if ( rg.drawSModels )
          {
            if ( rg.useSortedStaticModelReindex )
              v25 = rgp.world->dpvs.sortedSmodelIndices[v22];
            else
              v25 = ids[v17] & 0xFFFFFF;
            if ( (unsigned int)v22 > rgp.world->smodels.collectionCount )
            {
              LODWORD(v44) = rgp.world->smodels.collectionCount;
              LODWORD(v43) = ids[v17] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 938, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->smodels.collectionCount)", "%s\n\tUmbra static model (%d) exceeds world model count (%d).  Was this map compiled with only ents, even though a misc_model change was made?", "subObjIDIndex <= rgp.world->smodels.collectionCount", v43, v44) )
                __debugbreak();
            }
            rgp.world->dpvs.smodelVisData[v6][(unsigned __int64)v25 >> 5] |= 0x80000000 >> (v25 & 0x1F);
          }
          goto LABEL_71;
        }
        if ( v23 != 805306368 )
        {
LABEL_58:
          LODWORD(v42) = ids[v17] & 0x70000000;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled Umbra object type %d", v42) )
            __debugbreak();
          goto LABEL_71;
        }
        if ( (unsigned int)v22 > rgp.world->draw.volumetrics.volumetricCount )
        {
          LODWORD(v44) = rgp.world->draw.volumetrics.volumetricCount;
          LODWORD(v43) = ids[v17] & 0xFFFFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 961, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount)", "%s\n\tUmbra volumetric (%d) exceeds world volumetric count (%d).  Was this map compiled with only ents, even though a volumetric change was made?", "subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount", v43, v44) )
            __debugbreak();
        }
        if ( !(_DWORD)v6 )
        {
          reflectionProbeVisData = rgp.world->dpvs.volumetricVisData;
LABEL_70:
          reflectionProbeVisData[(unsigned __int64)(unsigned int)v22 >> 5] |= 0x80000000 >> (v22 & 0x1F);
        }
LABEL_71:
        if ( ++v17 >= v19 )
        {
          v8 = objIndexArray;
          maxBspSurfaceId = v21;
          LODWORD(v9) = v48;
          minBspSurfaceId = v20;
          v10 = v50;
          goto LABEL_10;
        }
      }
      if ( (unsigned int)v22 > rgp.world->primaryLightCount )
      {
        LODWORD(v44) = rgp.world->primaryLightCount;
        LODWORD(v43) = ids[v17] & 0xFFFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 944, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->primaryLightCount)", "%s\n\tUmbra primary light (%d) exceeds world primary light count (%d).  Was this map compiled with only ents, even though a primary light change was made?", "subObjIDIndex <= rgp.world->primaryLightCount", v43, v44) )
          __debugbreak();
      }
      if ( (_DWORD)v6 )
        goto LABEL_71;
      reflectionProbeVisData = rgp.world->dpvs.primaryLightVisData;
      goto LABEL_70;
    }
LABEL_10:
    v5 = *(Umbra::Tome **)&mn.x;
    v7 = numObjects;
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    v48 = v9;
    if ( (unsigned int)v9 >= v10 )
      break;
    _ER14 = v8[v9];
    if ( _ER14 )
      goto LABEL_14;
  }
LABEL_73:
  R_Umbra_MergeStalticModelCollectionVisibility(v6);
  if ( !(_DWORD)v6 && r_st_clutterEnable->current.enabled )
  {
    clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
    clutterCollections = rgp.world->smodels.clutterCollections;
    R_GP_ClearClutterCollectionVisData(0, clutterCollectionCount);
    v28 = 0;
    if ( clutterCollectionCount )
    {
      v29 = *(Umbra::OcclusionBuffer **)&mx.x;
      p_smodelCollectionIndex = &clutterCollections->smodelCollectionIndex;
      while ( 1 )
      {
        v31 = *p_smodelCollectionIndex;
        collectionBounds = rgp.world->smodels.collectionBounds;
        if ( v29 )
        {
          v33 = collectionBounds[v31].midPoint.v[0];
          v34 = collectionBounds[v31].midPoint.v[1];
          v35 = collectionBounds[v31].midPoint.v[2];
          v36 = v33 - collectionBounds[v31].halfSize.v[0];
          mx.x = v33 + collectionBounds[v31].halfSize.v[0];
          mx.y = v34 + collectionBounds[v31].halfSize.v[1];
          mx.z = v35 + collectionBounds[v31].halfSize.v[2];
          v37 = v34 - collectionBounds[v31].halfSize.v[1];
          mn.x = v36;
          v38 = v35 - collectionBounds[v31].halfSize.v[2];
          mn.y = v37;
          mn.z = v38;
          v39 = Umbra::OcclusionBuffer::testAABBVisibility(v29, &mn, &mx, 0, NULL);
          if ( v39 == HIDDEN )
            goto LABEL_85;
          if ( v39 != VISIBLE && v39 != 3 )
          {
            LODWORD(v42) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v42) )
              __debugbreak();
          }
        }
        if ( !R_ST_ClutterCollectionEnabled(v28) )
        {
LABEL_85:
          v40 = 0;
          goto LABEL_86;
        }
        v40 = 1;
        rgp.world->dpvs.smodelVisData[0][v31 >> 5] |= 0x80000000 >> (v31 & 0x1F);
LABEL_86:
        R_GP_UpdateClutterCollectionVisData(0, v28++, v40);
        p_smodelCollectionIndex += 6;
        if ( v28 >= clutterCollectionCount )
        {
          LODWORD(v6) = sceneViewType;
          break;
        }
      }
    }
  }
  R_Umbra_MergeBspSurfaceAndTransientVisibility(v6, minBspSurfaceId, maxBspSurfaceId);
  Sys_ProfEndNamedEvent();
  return v47;
}

/*
==============
R_Umbra_GetOcclusionBuffer_Internal
==============
*/
Umbra::OcclusionBuffer *R_Umbra_GetOcclusionBuffer_Internal(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  if ( !viewInfoIndex || sceneViewType )
    return s_umbraOcclusionBuffer[sceneViewType];
  else
    return &s_umbraCameraOcclusionBufferAlternate;
}

/*
==============
R_Umbra_GetOcclusionImageCameraView
==============
*/
float *R_Umbra_GetOcclusionImageCameraView(const GfxBackEndData *data)
{
  __int64 v2; 
  unsigned int smpFrame; 
  int v5; 

  if ( data->smpFrame >= 2 )
  {
    v5 = 2;
    smpFrame = data->smpFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 485, ASSERT_TYPE_ASSERT, "(unsigned)( data->smpFrame ) < (unsigned)( 2 )", "data->smpFrame doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", smpFrame, v5) )
      __debugbreak();
  }
  v2 = data->smpFrame;
  if ( s_umbraOcclusionCameraViewValid[v2] )
    return s_umbraOcclusionCameraView[v2];
  else
    return 0i64;
}

/*
==============
R_Umbra_GetUmbraOcclusionSceneImage
==============
*/

GfxImage *__fastcall R_Umbra_GetUmbraOcclusionSceneImage(double _XMM0_8)
{
  GfxImage *result; 
  __m256i v3; 
  __m256i v4; 
  Image_SetupParams params; 

  result = s_umbraOcclusionSceneImage;
  if ( !s_umbraOcclusionSceneImage )
  {
    v3.m256i_i32[2] = 1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v4.m256i_i64[0] = 0i64;
    *(_OWORD *)&v4.m256i_u64[1] = _XMM0;
    *(__int64 *)((char *)&v3.m256i_i64[1] + 4) = 1i64;
    v4.m256i_i32[6] = -1;
    v3.m256i_i64[0] = 0x4000000040i64;
    v3.m256i_i32[5] = 4098;
    v3.m256i_i32[6] = 3;
    *(__m256i *)&params.width = v3;
    *(__m256i *)&params.customAllocFunc = v4;
    s_umbraOcclusionSceneImage = Image_AllocProg(IMAGE_PROG_UMBRA_OCCLUSION_SCENE, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_umbraOcclusionSceneImage, &params);
    return s_umbraOcclusionSceneImage;
  }
  return result;
}

/*
==============
R_Umbra_GetVisMask
==============
*/
unsigned int *R_Umbra_GetVisMask(unsigned int sceneViewType, unsigned int viewInfoIndex)
{
  if ( !viewInfoIndex || sceneViewType )
    return s_umbraVisMask[sceneViewType];
  else
    return s_umbraVisMaskCameraAlternate;
}

/*
==============
R_Umbra_Init
==============
*/
void R_Umbra_Init(void)
{
  float **v0; 
  char *v1; 
  GfxWrappedBuffer *v2; 
  unsigned int i; 

  memset_0(&s_umbraOcclusionBuffer[1], 0, 0x100ui64);
  s_umbraOcclusionBuffer[0] = &s_umbraCameraOcclusionBuffer;
  v0 = s_umbraOcclusionCameraView;
  v1 = (char *)PMem_Alloc(0x8000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_umbraOcclusionCameraView");
  v2 = s_umbraOcclusionCameraViewBuffer;
  for ( i = 0; i < 2; ++i )
  {
    *v0 = (float *)&v1[0x4000 * i];
    R_CreateGfxWrappedBuffer(v2, GfxWrappedBuffer_Structured, 4, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "s_umbraOcclusionCameraViewBuffer");
    ++v0;
    ++v2;
  }
}

/*
==============
R_Umbra_InitOcclusionImages
==============
*/
void R_Umbra_InitOcclusionImages(void)
{
  float **v0; 
  char *v1; 
  GfxWrappedBuffer *v2; 
  unsigned int i; 

  v0 = s_umbraOcclusionCameraView;
  v1 = (char *)PMem_Alloc(0x8000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_umbraOcclusionCameraView");
  v2 = s_umbraOcclusionCameraViewBuffer;
  for ( i = 0; i < 2; ++i )
  {
    *v0 = (float *)&v1[0x4000 * i];
    R_CreateGfxWrappedBuffer(v2, GfxWrappedBuffer_Structured, 4, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "s_umbraOcclusionCameraViewBuffer");
    ++v0;
    ++v2;
  }
}

/*
==============
R_Umbra_InvertVisBuffers
==============
*/
__int64 R_Umbra_InvertVisBuffers(const Umbra::Tome *umbraTome, const unsigned int *objIndexArray, int numObjects, unsigned int sceneViewType)
{
  __int64 v4; 
  const unsigned int *v6; 
  Umbra::Tome *v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  int ObjectUserIDs; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int *reflectionProbeVisData; 
  unsigned int v19; 
  unsigned __int64 v20; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  __int64 v31; 
  unsigned int ids[4096]; 

  v4 = sceneViewType;
  v6 = objIndexArray;
  v7 = (Umbra::Tome *)umbraTome;
  if ( !umbraTome && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1005, ASSERT_TYPE_ASSERT, "(umbraTome)", (const char *)&queryFormat, "umbraTome") )
    __debugbreak();
  v8 = 1;
  v26 = 1;
  v9 = 0;
  Sys_ProfBeginNamedEvent(0xFF8B4513, "Umbra Invert Vis Buffers");
  v10 = 0;
  v25 = 0;
  if ( numObjects > 0 )
  {
    v11 = 0i64;
    v31 = 0i64;
    do
    {
      if ( (v8 & v6[v11 >> 5]) != 0 )
      {
        ObjectUserIDs = Umbra::Tome::getObjectUserIDs(v7, v10, ids, 4096);
        v13 = ObjectUserIDs;
        if ( ObjectUserIDs < 0 || (unsigned __int64)ObjectUserIDs > 0x1000 )
        {
          LODWORD(v24) = 4096;
          LODWORD(v22) = ObjectUserIDs;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1024, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numSubObjIDs ) && ( numSubObjIDs ) <= ( ( sizeof( *array_counter( subObjIDs ) ) + 0 ) )", "numSubObjIDs not in [0, ARRAY_COUNT( subObjIDs )]\n\t%i not in [%i, %i]", v22, 0i64, v24) )
            __debugbreak();
        }
        v14 = 0i64;
        v15 = v13;
        if ( (int)v13 > 0 )
        {
          v27 = v13 + v9;
          while ( 1 )
          {
            v16 = ids[v14] & 0xFFFFFF;
            v17 = ids[v14] & 0x70000000;
            if ( v17 > 0x40000000 )
            {
              if ( v17 == 1342177280 )
              {
                if ( (unsigned int)v16 > rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount )
                {
                  LODWORD(v24) = rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount;
                  LODWORD(v23) = ids[v14] & 0xFFFFFF;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1070, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount)", "%s\n\tUmbra reflection probe (%d) exceeds world reflection probe count (%d).  Was this map compiled with only ents, even though a reflection probe change was made?", "subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount", v23, v24) )
                    __debugbreak();
                }
                if ( (_DWORD)v4 )
                  goto LABEL_56;
                reflectionProbeVisData = rgp.world->dpvs.reflectionProbeVisData;
              }
              else
              {
                if ( v17 != 1610612736 )
                  goto LABEL_43;
                if ( (unsigned int)v16 > rgp.world->draw.decalVolumeCollectionCount )
                {
                  LODWORD(v24) = rgp.world->draw.decalVolumeCollectionCount;
                  LODWORD(v23) = ids[v14] & 0xFFFFFF;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1089, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount)", "%s\n\tUmbra decal (%d) exceeds world decal count (%d).  Was this map compiled with only ents, even though a decal change was made?", "subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount", v23, v24) )
                    __debugbreak();
                }
                if ( (_DWORD)v4 )
                  goto LABEL_56;
                reflectionProbeVisData = rgp.world->dpvs.decalVisData;
              }
              goto LABEL_55;
            }
            if ( v17 == 0x40000000 )
              break;
            if ( !v17 )
            {
              if ( rg.drawWorld )
              {
                v20 = rgp.world->dpvs.sortedSurfIndex[v16];
                if ( (unsigned int)v20 >= rgp.world->models->surfaceCount )
                {
                  LODWORD(v24) = rgp.world->models->surfaceCount;
                  LODWORD(v23) = v20;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1040, ASSERT_TYPE_ASSERT, "(sortedSubObjIDIndex < rgp.world->models[0].surfaceCount)", "%s\n\tUmbra surface ID (%d) exceeds world surface count (%d).  Was this map compiled with only ents, even though a world BSP change was made?", "sortedSubObjIDIndex < rgp.world->models[0].surfaceCount", v23, v24) )
                    __debugbreak();
                }
                rgp.world->dpvs.surfaceVisData[v4][v20 >> 5] ^= 0x80000000 >> (v20 & 0x1F);
              }
              goto LABEL_56;
            }
            if ( v17 == 0x10000000 )
            {
              if ( rg.drawSModels )
              {
                if ( rg.useSortedStaticModelReindex )
                  v19 = rgp.world->dpvs.sortedSmodelIndices[v16];
                else
                  v19 = ids[v14] & 0xFFFFFF;
                if ( (unsigned int)v16 > rgp.world->smodels.collectionCount )
                {
                  LODWORD(v24) = rgp.world->smodels.collectionCount;
                  LODWORD(v23) = ids[v14] & 0xFFFFFF;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1056, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->smodels.collectionCount)", "%s\n\tUmbra static model (%d) exceeds world model count (%d).  Was this map compiled with only ents, even though a misc_model change was made?", "subObjIDIndex <= rgp.world->smodels.collectionCount", v23, v24) )
                    __debugbreak();
                }
                rgp.world->dpvs.smodelVisData[v4][(unsigned __int64)v19 >> 5] ^= 0x80000000 >> (v19 & 0x1F);
              }
              goto LABEL_56;
            }
            if ( v17 != 805306368 )
            {
LABEL_43:
              LODWORD(v22) = ids[v14] & 0x70000000;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled Umbra object type %d", v22) )
                __debugbreak();
              goto LABEL_56;
            }
            if ( (unsigned int)v16 > rgp.world->draw.volumetrics.volumetricCount )
            {
              LODWORD(v24) = rgp.world->draw.volumetrics.volumetricCount;
              LODWORD(v23) = ids[v14] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1079, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount)", "%s\n\tUmbra volumetric (%d) exceeds world volumetric count (%d).  Was this map compiled with only ents, even though a volumetric change was made?", "subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount", v23, v24) )
                __debugbreak();
            }
            if ( !(_DWORD)v4 )
            {
              reflectionProbeVisData = rgp.world->dpvs.volumetricVisData;
LABEL_55:
              reflectionProbeVisData[(unsigned __int64)(unsigned int)v16 >> 5] ^= 0x80000000 >> (v16 & 0x1F);
            }
LABEL_56:
            if ( ++v14 >= v15 )
            {
              v8 = v26;
              v10 = v25;
              v11 = v31;
              v9 = v27;
              goto LABEL_58;
            }
          }
          if ( (unsigned int)v16 > rgp.world->primaryLightCount )
          {
            LODWORD(v24) = rgp.world->primaryLightCount;
            LODWORD(v23) = ids[v14] & 0xFFFFFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1062, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->primaryLightCount)", "%s\n\tUmbra primary light (%d) exceeds world primary light count (%d).  Was this map compiled with only ents, even though a primary light change was made?", "subObjIDIndex <= rgp.world->primaryLightCount", v23, v24) )
              __debugbreak();
          }
          if ( (_DWORD)v4 )
            goto LABEL_56;
          reflectionProbeVisData = rgp.world->dpvs.primaryLightVisData;
          goto LABEL_55;
        }
LABEL_58:
        v6 = objIndexArray;
        v7 = (Umbra::Tome *)umbraTome;
      }
      ++v10;
      v8 = __ROL4__(v8, 1);
      ++v11;
      v25 = v10;
      v31 = v11;
      v26 = v8;
    }
    while ( v10 < numObjects );
  }
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
R_Umbra_IsBoxVisible_CachedSunShadows
==============
*/
__int64 R_Umbra_IsBoxVisible_CachedSunShadows(const Bounds *bounds, unsigned int sceneViewType, const bool projectedBoundsTest)
{
  int v3; 
  unsigned int v5; 
  unsigned int i; 
  const DpvsView *DpvsView; 
  int frustumPlaneCount; 
  int v9; 
  DpvsPlane *frustumPlanes; 

  v3 = -1;
  v5 = sceneViewType - rg.firstCachedSunShadowPartition;
  if ( v5 == 1 )
    v3 = 12;
  if ( v5 == 2 )
    v3 = 22;
  if ( v3 == -1 )
    return 1i64;
  if ( !projectedBoundsTest || sceneViewType <= 1 || !R_Umbra_CullProjectedBounds_SunShadows(bounds, sceneViewType) )
  {
    for ( i = v3; i - v3 < 0xA; ++i )
    {
      DpvsView = R_GetDpvsView(i);
      frustumPlaneCount = DpvsView->frustumPlaneCount;
      if ( !frustumPlaneCount )
        break;
      v9 = 0;
      frustumPlanes = DpvsView->frustumPlanes;
      if ( frustumPlaneCount <= 0 )
      {
LABEL_14:
        if ( s_umbraQueryJobCount[i] > 0 || R_Umbra_IsBoxVisible(bounds, s_umbraOcclusionBuffer[i]) )
          return 1i64;
      }
      else
      {
        while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[0]) & _xmm) * bounds->halfSize.v[0]) + (float)((float)(bounds->midPoint.v[0] * frustumPlanes->coeffs.v[0]) + frustumPlanes->coeffs.v[3])) + (float)(bounds->midPoint.v[1] * frustumPlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[1]) & _xmm) * bounds->halfSize.v[1])) + (float)(bounds->midPoint.v[2] * frustumPlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[2]) & _xmm) * bounds->halfSize.v[2])) > 0.0 )
        {
          ++v9;
          ++frustumPlanes;
          if ( v9 >= frustumPlaneCount )
            goto LABEL_14;
        }
      }
    }
  }
  return 0i64;
}

/*
==============
R_Umbra_MergeBspSurfaceAndTransientVisibility
==============
*/
void R_Umbra_MergeBspSurfaceAndTransientVisibility(unsigned int sceneViewType, unsigned int minBspSurfaceId, unsigned int maxBspSurfaceId)
{
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  GfxWorld *world; 
  __int64 v9; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  GfxBackEndData *v16; 
  __int64 v17; 
  __int64 v18; 

  v5 = sceneViewType;
  if ( rgp.world->draw.transientZoneCount > 1 && minBspSurfaceId <= maxBspSurfaceId && r_umbraMergeBspTransientVisibility->current.enabled )
  {
    Profile_Begin(205);
    v6 = minBspSurfaceId >> 5;
    v7 = ((maxBspSurfaceId - minBspSurfaceId) >> 5) + 1;
    world = rgp.world;
    if ( v7 + (unsigned int)v6 > rgp.world->dpvs.surfaceVisDataCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 858, ASSERT_TYPE_ASSERT, "( minWord + wordCount ) <= ( rgp.world->dpvs.surfaceVisDataCount )", "%s <= %s\n\t%u, %u", "minWord + wordCount", "rgp.world->dpvs.surfaceVisDataCount", v7 + v6, rgp.world->dpvs.surfaceVisDataCount) )
        __debugbreak();
      world = rgp.world;
    }
    v9 = (__int64)&world->surfaces.surfacesTransientZone[(unsigned int)(32 * v6)];
    v10 = &world->dpvs.surfaceVisData[v5][v6];
    v11 = 0i64;
    v12 = *v10;
    while ( v12 )
    {
LABEL_12:
      v13 = __lzcnt(v12);
      v14 = v13 + 32 * (_DWORD)v11;
      if ( v13 >= 0x20 )
      {
        LODWORD(v18) = 32;
        LODWORD(v17) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( (v12 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v12 &= ~(0x80000000 >> v13);
      v15 = *(unsigned __int16 *)(v9 + 2 * v14);
      v16 = frontEndDataOut;
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( (unsigned int)v15 >= 0x600 )
      {
        LODWORD(v18) = 1536;
        LODWORD(v17) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v15 & 0x1F)) & v16->transientVisibility.array[v15 >> 5]) != 0 )
        v10[v11] = v10[v11];
      else
        v10[v11] &= ~(0x80000000 >> (v14 & 0x1F));
    }
    while ( 1 )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v7 )
        break;
      v12 = v10[v11];
      if ( v12 )
        goto LABEL_12;
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
R_Umbra_MergeStalticModelCollectionVisibility
==============
*/
void R_Umbra_MergeStalticModelCollectionVisibility
{
	//Failed decompiling
}

/*
==============
R_Umbra_QueryStaticCamera
==============
*/
void R_Umbra_QueryStaticCamera(const GfxViewParms *viewParms, const GfxMatrix *viewProjMatrix, unsigned int width, unsigned int height, unsigned int smpFrame, unsigned int frameCount, unsigned int viewInfoIndex, bool requireOcclusionUpdate)
{
  __int64 v10; 
  __int64 v11; 
  bool reuseOcclusion; 
  float cappedLodScale; 
  Umbra::Tome *umbraTome; 
  bool v18; 
  float v21; 
  int queryMode; 
  float v23; 
  __int128 queryDistance; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec3_t lightDir; 
  vec3_t visibilityOrigin; 

  v10 = height;
  v11 = width;
  reuseOcclusion = !requireOcclusionUpdate && (((unsigned __int8)viewInfoIndex ^ (unsigned __int8)~(_BYTE)frameCount) & 1) == 0;
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2128, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  cappedLodScale = rg.correctedLodParms.cappedLodScale;
  _XMM6 = LODWORD(rg.umbraAccurateOcclusionThreshold);
  umbraTome = rgp.world->umbraTome;
  if ( umbraTome )
  {
    __asm
    {
      vcmpltss xmm1, xmm6, xmm0
      vblendvps xmm3, xmm6, xmm2, xmm1
    }
    if ( (float)(*(float *)&_XMM3 * rg.correctedLodParms.cappedLodScale) < *(float *)&umbraTome[12] )
      *(float *)&_XMM6 = *(float *)&_XMM3 / rg.correctedLodParms.cappedLodScale;
  }
  v18 = !viewParms->camera.visibilityOffsetApplyToRefPoint;
  _XMM0 = LODWORD(rg.umbraMinObjectContribution);
  __asm { vmaxss  xmm1, xmm0, cs:?rg@@3Ur_globals_t@@A.umbraWorstCaseMinObjectContribution; r_globals_t rg }
  v21 = *(float *)&_XMM1 * *(float *)&_XMM1;
  *(float *)&_XMM0 = (float)v10;
  queryMode = r_umbra->current.integer;
  v23 = (float)v11;
  *(float *)&_XMM1 = v23 * *(float *)&_XMM0;
  _XMM0 = r_umbraDistance->current.unsignedInt;
  __asm { vmaxss  xmm9, xmm0, dword ptr [rsi+160h] }
  v26 = viewParms->camera.origin.v[2];
  v27 = viewParms->camera.origin.v[1];
  v28 = v27 + viewParms->camera.visibilityOffset.v[1];
  v29 = v21 / *(float *)&_XMM1;
  v30 = viewParms->camera.origin.v[0];
  v31 = v26 + viewParms->camera.visibilityOffset.v[2];
  v32 = v30 + viewParms->camera.visibilityOffset.v[0];
  visibilityOrigin.v[2] = v31;
  visibilityOrigin.v[0] = v32;
  visibilityOrigin.v[1] = v28;
  if ( v18 )
  {
    lightDir.v[0] = v30;
    lightDir.v[1] = v27;
    lightDir.v[2] = v26;
  }
  else
  {
    lightDir.v[0] = v32;
    lightDir.v[1] = v28;
    lightDir.v[2] = v31;
    v30 = v32;
    v27 = v28;
    v26 = v31;
  }
  if ( !r_umbraAllowGameVisibilityOffset->current.enabled && (v30 != v32 || v27 != v28 || v26 != v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2160, ASSERT_TYPE_ASSERT, "(Vec3Compare( origin, visibilityOrigin ))", (const char *)&queryFormat, "Vec3Compare( origin, visibilityOrigin )") )
    __debugbreak();
  R_Umbra_QueryStaticVisibility(viewProjMatrix, &lightDir, &visibilityOrigin, &lightDir, &lightDir, *(const float *)&queryDistance, 0, cappedLodScale, *(const float *)&_XMM6, v29, NULL, 0, (const UmbraQueryMode)queryMode, 0, smpFrame, viewInfoIndex, reuseOcclusion);
}

/*
==============
R_Umbra_QueryStaticSunShadows
==============
*/
void R_Umbra_QueryStaticSunShadows(const GfxViewInfo *viewInfo, GfxSunShadow *sunShadow)
{
  GfxSunShadow *v2; 
  UmbraQueryMode Mode; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 sceneViewType; 
  __int64 v10; 
  int integer; 
  UmbraQueryMode queryMode; 
  float umbraShadowAccurateOcclusionThreshold; 
  unsigned int v14; 
  float v15; 
  float v16; 
  __m128 v17; 
  vec4_t v18; 
  float v19; 
  __int64 v20; 
  int v21; 
  bool v22; 
  __int64 queryDistance; 
  __int64 ignoreCameraPosition; 
  int viewInfoIndex; 
  unsigned int v26; 
  unsigned int lastCachedSunShadowPartition; 
  __int64 i; 
  vec4_t out; 
  vec3_t viewOrigin; 
  vec4_t vec; 

  v2 = sunShadow;
  if ( rg.umbraShadowCasters )
  {
    if ( !viewInfo->useCachedSunShadow )
    {
      v20 = 3i64;
      v21 = 1;
      while ( 2 )
      {
        switch ( v21 )
        {
          case 0:
            goto $LN313_1;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
            goto $LN14_156;
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
            if ( !rg.umbraShadowCasters )
              goto $LN14_156;
$LN313_1:
            v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2109, ASSERT_TYPE_ASSERT, "(!R_Umbra_UseForStatics( SCENE_VIEW_SUNSHADOW_FIRST + partition ))", (const char *)&queryFormat, "!R_Umbra_UseForStatics( SCENE_VIEW_SUNSHADOW_FIRST + partition )");
LABEL_35:
            if ( v22 )
              __debugbreak();
$LN14_156:
            ++v21;
            if ( !--v20 )
              return;
            continue;
          default:
            LODWORD(queryDistance) = v21;
            v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", queryDistance);
            goto LABEL_35;
        }
      }
    }
    Mode = R_Umbra_ShadowQueryMode();
    firstCachedSunShadowPartition = v2->firstCachedSunShadowPartition;
    lastCachedSunShadowPartition = v2->lastCachedSunShadowPartition;
    v26 = firstCachedSunShadowPartition;
    for ( i = Mode; firstCachedSunShadowPartition <= lastCachedSunShadowPartition; v26 = firstCachedSunShadowPartition )
    {
      if ( !R_IsCachedSunShadowPartition(v2, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v5 = 0;
      v6 = firstCachedSunShadowPartition - v2->firstCachedSunShadowPartition;
      v7 = (__int64)&v2->partitionCache[v6];
      if ( v2->partitionCache[v6].gfxCachedSunShadowOverlapCount )
      {
        while ( 2 )
        {
          v8 = 864i64 * v5;
          sceneViewType = *(unsigned int *)(v8 + v7 + 32);
          v10 = *(_QWORD *)(v8 + v7 + 16);
          switch ( (int)sceneViewType )
          {
            case 0:
              goto $LN312_0;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
              goto $LN5_128;
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
              if ( !rg.umbraShadowCasters )
                goto $LN5_128;
$LN312_0:
              if ( i == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2090, ASSERT_TYPE_ASSERT, "(queryMode != UmbraQueryMode::R_UMBRAMODE_PORTALS)", (const char *)&queryFormat, "queryMode != UmbraQueryMode::R_UMBRAMODE_PORTALS") )
                __debugbreak();
              if ( (unsigned int)sceneViewType >= 0x21 )
              {
                LODWORD(ignoreCameraPosition) = 33;
                LODWORD(queryDistance) = sceneViewType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 694, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", queryDistance, ignoreCameraPosition) )
                  __debugbreak();
              }
              s_umbraOcclusionBuffer[sceneViewType] = NULL;
              if ( !*(_BYTE *)(v8 + v7 + 44) )
                goto $LN5_128;
              integer = r_umbraShadows->current.integer;
              if ( !integer )
                goto LABEL_21;
              if ( integer == 1 )
              {
                queryMode = R_UMBRAMODE_SCENE_COUNT;
              }
              else
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected Umbra Shadow Query Mode!") )
                  __debugbreak();
LABEL_21:
                queryMode = R_UMBRAMODE_FRUSTUM_ONLY;
              }
              umbraShadowAccurateOcclusionThreshold = rg.umbraShadowAccurateOcclusionThreshold;
              v14 = R_SunShadow_GetMapSize() >> 1;
              v15 = (float)(v14 * (R_SunShadow_GetMapSize() >> 1));
              v16 = (float)(rg.umbraMinShadowObjectContribution * rg.umbraMinShadowObjectContribution) / v15;
              vec = (vec4_t)_xmm;
              MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(v10 + 304), &out);
              v17 = (__m128)LODWORD(FLOAT_1_0);
              v17.m128_f32[0] = 1.0 / out.v[3];
              v18 = (vec4_t)_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 0), (__m128)out);
              v19 = v18.v[0] + *(float *)(v10 + 368);
              viewInfoIndex = viewInfo->viewInfoIndex;
              out = v18;
              v18.v[0] = v18.v[1] + *(float *)(v10 + 372);
              out.v[0] = v19;
              v17.m128_f32[0] = out.v[2] + *(float *)(v10 + 376);
              out.v[1] = v18.v[0];
              out.v[2] = v17.m128_f32[0];
              viewOrigin.v[0] = 0.0;
              viewOrigin.v[1] = 0.0;
              viewOrigin.v[2] = 0.0;
              R_Umbra_QueryStaticVisibility((const GfxMatrix *)(v10 + 240), &viewOrigin, (const vec3_t *)&out, (const vec3_t *)&out, (const vec3_t *)(v10 + 8), 0.0, 1, 0.000001, umbraShadowAccurateOcclusionThreshold, v16, NULL, 0, queryMode, sceneViewType, 2u, viewInfoIndex, 0);
              *(_DWORD *)(v10 + 560) = frontEndDataOut->frameCount;
$LN5_128:
              if ( ++v5 < *(_DWORD *)(v7 + 4) )
                continue;
              firstCachedSunShadowPartition = v26;
              v2 = sunShadow;
              break;
            default:
              LODWORD(queryDistance) = *(_DWORD *)(v8 + v7 + 32);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", queryDistance) )
                __debugbreak();
              goto $LN5_128;
          }
          break;
        }
      }
      ++firstCachedSunShadowPartition;
    }
  }
}

/*
==============
R_Umbra_QueryStaticVisibility
==============
*/
void R_Umbra_QueryStaticVisibility(const GfxMatrix *viewProjMatrix, const vec3_t *viewOrigin, const vec3_t *visibilityOrigin, const vec3_t *distanceReferencePoint, const vec3_t *lightDir, const float queryDistance, const int ignoreCameraPosition, const float lodDistanceScale, const float accurateOcclusionThreshold, const float minRelativeContribution, const DpvsPlane *userClipPlanes, const unsigned int userClipPlaneCount, const UmbraQueryMode queryMode, const unsigned int sceneViewType, unsigned int smpFrame, unsigned int viewInfoIndex, bool reuseOcclusion)
{
  signed __int64 v17; 
  void *v18; 
  unsigned int value; 
  int v23; 
  signed int v24; 
  unsigned int v25; 
  unsigned int v26; 
  WorkerCmdType v27; 
  unsigned int v28; 
  UmbraQueryMode v29; 
  Umbra::OcclusionBuffer *v30; 
  __int64 flags; 
  const Umbra::Tome *tome; 
  tmat44_t<vec4_t> out; 
  Umbra::Vector3 position; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int64 v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  int v48; 
  UmbraQueryMode v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  bool v53; 
  Umbra::Vector3 lightDira; 
  tmat44_t<vec4_t> in1; 
  Umbra::CameraTransform camera; 
  Umbra::QueryExt v57; 

  v18 = alloca(v17);
  *(_QWORD *)&lightDira.x = userClipPlanes;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1803, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  if ( !s_umbraQueryJobLimit[sceneViewType][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1804, ASSERT_TYPE_ASSERT, "(s_umbraQueryJobLimit[sceneViewType][0] != 0)", (const char *)&queryFormat, "s_umbraQueryJobLimit[sceneViewType][0] != 0") )
    __debugbreak();
  if ( !s_umbraQueryJobLimit[sceneViewType][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1805, ASSERT_TYPE_ASSERT, "(s_umbraQueryJobLimit[sceneViewType][1] != 0)", (const char *)&queryFormat, "s_umbraQueryJobLimit[sceneViewType][1] != 0") )
    __debugbreak();
  tome = rgp.world->umbraTome;
  value = (int)r_umbraQueryParts->current.value;
  if ( value > s_umbraQueryJobLimit[sceneViewType][0] )
    value = s_umbraQueryJobLimit[sceneViewType][0];
  v47 = value;
  v23 = (int)r_umbraQueryParts->current.vector.v[1];
  v24 = 0x10 / value;
  if ( (signed int)s_umbraQueryJobLimit[sceneViewType][1] < v23 )
    v23 = s_umbraQueryJobLimit[sceneViewType][1];
  if ( v23 < v24 )
    v24 = v23;
  v48 = v24;
  v49 = queryMode;
  v50 = sceneViewType;
  v51 = smpFrame;
  v53 = reuseOcclusion;
  v52 = viewInfoIndex;
  if ( reuseOcclusion )
  {
    v48 = 1;
    v47 = 1;
  }
  *(__m256i *)in1.m[0].v = _ymm;
  in1.row2 = (vec4_t)_xmm;
  LODWORD(in1.m[3].v[0]) = LODWORD(viewOrigin->v[0]) ^ _xmm;
  LODWORD(in1.m[3].v[1]) = LODWORD(viewOrigin->v[1]) ^ _xmm;
  LODWORD(in1.m[3].v[2]) = LODWORD(viewOrigin->v[2]) ^ _xmm;
  in1.m[3].v[3] = FLOAT_1_0;
  MatrixMultiply44Aligned(&in1, &viewProjMatrix->m, &out);
  out.m[0].v[2] = out.m[0].v[3] - out.m[0].v[2];
  out.m[1].v[2] = out.m[1].v[3] - out.m[1].v[2];
  out.m[2].v[2] = out.m[2].v[3] - out.m[2].v[2];
  out.m[3].v[2] = out.m[3].v[3] - out.m[3].v[2];
  position = (Umbra::Vector3)*visibilityOrigin;
  v36 = distanceReferencePoint->v[0];
  v37 = distanceReferencePoint->v[1];
  v38 = distanceReferencePoint->v[2];
  v39 = ignoreCameraPosition;
  v40 = queryDistance;
  v41 = lodDistanceScale;
  v42 = accurateOcclusionThreshold;
  v43 = minRelativeContribution;
  v44 = *(_QWORD *)&lightDira.x;
  v25 = 16;
  if ( (int)userClipPlaneCount < 16 )
    v25 = userClipPlaneCount;
  v45 = v25;
  if ( userClipPlaneCount > 0x10 )
    Com_PrintWarning(8, "R_Umbra_QueryStaticVisibility: too many user clip planes (%u > %u)", userClipPlaneCount, 16i64);
  v26 = v47 * v48;
  if ( !reuseOcclusion )
  {
    R_Umbra_ClearVisMask(sceneViewType, viewInfoIndex);
    R_Umbra_UpdateGatesForView(sceneViewType);
  }
  s_umbraQueryJobCount[sceneViewType] = v26;
  if ( sceneViewType )
  {
    if ( sceneViewType - 12 > 0x13 )
    {
      LODWORD(flags) = sceneViewType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1919, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_QueryStaticVisibility: unimplemted worker cmd for scene view %d", flags) )
        __debugbreak();
      v27 = WRKCMD_COUNT;
    }
    else
    {
      v27 = WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS;
    }
  }
  else
  {
    v27 = WRKCMD_UMBRA_QUERY_STATIC_CAMERA;
  }
  v28 = 0;
  v29 = queryMode;
  if ( queryMode != R_UMBRAMODE_PORTALS )
    s_umbraOcclusionBuffer[sceneViewType] = NULL;
  if ( v26 > 1 )
  {
    if ( !viewInfoIndex || sceneViewType )
    {
      v30 = s_umbraOcclusionBuffer[sceneViewType];
      if ( !v30 )
      {
LABEL_40:
        s_umbraOcclusionBufferWriteLock[sceneViewType] = 0;
        goto LABEL_41;
      }
    }
    else
    {
      v30 = &s_umbraCameraOcclusionBufferAlternate;
    }
    if ( !reuseOcclusion )
    {
      Umbra::OcclusionBuffer::clear(v30);
      v29 = queryMode;
    }
    goto LABEL_40;
  }
LABEL_41:
  if ( tome && v29 == R_UMBRAMODE_SCENE_COUNT )
  {
    Umbra::QueryExt::QueryExt(&v57);
    Umbra::Query::init(&v57, tome);
    Umbra::Query::setGateStates(&v57, &s_umbraGateStateVectors[sceneViewType]);
    Umbra::Query::setDebugRenderer(&v57, &s_umbraRender);
    Umbra::CameraTransform::CameraTransform(&camera);
    Umbra::CameraTransform::set(&camera, (const Umbra::Matrix4x4 *)&out, &position, DEPTHRANGE_ZERO_TO_ONE, MF_COLUMN_MAJOR);
    if ( sceneViewType - 12 > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1960, ASSERT_TYPE_ASSERT, "(sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST)", (const char *)&queryFormat, "sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST") )
      __debugbreak();
    LODWORD(lightDira.x) = LODWORD(lightDir->v[0]) ^ _xmm;
    LODWORD(lightDira.y) = LODWORD(lightDir->v[1]) ^ _xmm;
    LODWORD(lightDira.z) = LODWORD(lightDir->v[2]) ^ _xmm;
    Umbra::QueryExt::buildPlaneShadowCuller(&v57, &s_umbraShadowCullersPool[sceneViewType - 12], &camera, &lightDira, NULL, 0, NULL, 0);
    Umbra::Query::~Query(&v57);
  }
  if ( v26 )
  {
    do
    {
      v46 = v28;
      Sys_AddWorkerCmd(v27, &out);
      ++v28;
    }
    while ( v28 < v26 );
  }
}

/*
==============
R_Umbra_QueryStaticVisibilityCmd
==============
*/
void R_Umbra_QueryStaticVisibilityCmd(const void *const cmdInfo)
{
  signed __int64 v1; 
  void *v2; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  float v10; 
  unsigned int v11; 
  Umbra::OcclusionBuffer *v12; 
  int v13; 
  Umbra::OcclusionBuffer *v14; 
  const char *ThreadContextName; 
  unsigned int *v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  int v20; 
  int v21; 
  float v22; 
  float v23; 
  float v24; 
  Umbra::Query::ErrorCode v25; 
  unsigned int *v26; 
  __int64 v27; 
  __int64 v28; 
  Umbra::OcclusionBuffer *v29; 
  volatile int *v30; 
  unsigned int v31; 
  volatile signed __int32 *v32; 
  int ObjectCount; 
  const unsigned int *v34; 
  const unsigned int *v35; 
  int v36; 
  float *v37; 
  int Height; 
  Umbra::OcclusionBuffer::ErrorCode Buffer; 
  Umbra::ObjectDistanceParams *objDist; 
  __int64 threadId; 
  __int64 numThreads; 
  __int64 v43; 
  char v44; 
  unsigned int viewInfoIndex; 
  Umbra::OcclusionBuffer *other_; 
  Umbra::OcclusionBuffer *occlussionBuffer; 
  int xSplits; 
  Umbra::Tome *tome; 
  unsigned __int64 v50; 
  Umbra::OcclusionBuffer::BufferDesc desc; 
  Umbra::IndexList out; 
  Umbra::ObjectDistanceParams inObjDistanceParams; 
  Umbra::Visibility params; 
  Umbra::CameraTransform src; 
  Umbra::QueryExt v56; 

  v2 = alloca(v1);
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v5 = CurrentThreadContext;
  v50 = CurrentThreadContext;
  if ( (unsigned __int64)(int)CurrentThreadContext >= THREAD_CONTEXT_TRACE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1188, ASSERT_TYPE_ASSERT, "(threadContext < ( sizeof( *array_counter( s_umbraThreadJobActive ) ) + 0 ))", (const char *)&queryFormat, "threadContext < ARRAY_COUNT( s_umbraThreadJobActive )") )
    __debugbreak();
  if ( s_umbraThreadJobActive[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1189, ASSERT_TYPE_ASSERT, "(!s_umbraThreadJobActive[threadContext])", (const char *)&queryFormat, "!s_umbraThreadJobActive[threadContext]") )
    __debugbreak();
  s_umbraThreadJobActive[v5] = 1;
  Profile_Begin(201);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Umbra Query Static Visibility");
  v6 = *((_DWORD *)cmdInfo + 31);
  v7 = *((_DWORD *)cmdInfo + 32) * *((_DWORD *)cmdInfo + 33);
  v8 = *((_DWORD *)cmdInfo + 34);
  v9 = *((unsigned int *)cmdInfo + 35);
  v10 = *((float *)cmdInfo + 23);
  v44 = *((_BYTE *)cmdInfo + 152);
  v11 = *((_DWORD *)cmdInfo + 37);
  viewInfoIndex = v11;
  tome = rgp.world->umbraTome;
  if ( v6 >= v7 )
  {
    LODWORD(objDist) = *((_DWORD *)cmdInfo + 31);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1208, ASSERT_TYPE_ASSERT, "(unsigned)( jobIdx ) < (unsigned)( numJobs )", "jobIdx doesn't index numJobs\n\t%i not in [0, %i)", objDist, *((_DWORD *)cmdInfo + 32) * *((_DWORD *)cmdInfo + 33)) )
      __debugbreak();
  }
  if ( v6 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1209, ASSERT_TYPE_ASSERT, "( jobIdx ) <= ( 16 )", "%s <= %s\n\t%i, %i", "jobIdx", "UMBRA_MAX_QUERY_JOBS", v6, 16) )
    __debugbreak();
  if ( (unsigned int)v9 >= 0x21 )
  {
    LODWORD(threadId) = 33;
    LODWORD(objDist) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1210, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", objDist, threadId) )
      __debugbreak();
  }
  if ( v8 == 1 )
  {
    if ( !v11 || (_DWORD)v9 )
      v12 = s_umbraOcclusionBuffer[v9];
    else
      v12 = &s_umbraCameraOcclusionBufferAlternate;
  }
  else
  {
    v12 = NULL;
  }
  occlussionBuffer = v12;
  other_ = v12;
  Umbra::QueryExt::QueryExt(&v56);
  Umbra::Visibility::Visibility(&params);
  Umbra::CameraTransform::CameraTransform(&src);
  v13 = 0;
  Umbra::ObjectDistanceParams::ObjectDistanceParams(&inObjDistanceParams);
  if ( occlussionBuffer && v7 > 1 )
  {
    if ( v5 >= 8 )
    {
      ThreadContextName = Sys_GetThreadContextName((ThreadContext)v5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_GetThreadLocalOcclusionBuffer: Thread context %s has no local occlusion buffer for umbra query jobs.\n", ThreadContextName) )
        __debugbreak();
      v14 = NULL;
      other_ = NULL;
      Umbra::OcclusionBuffer::clear(NULL);
    }
    else
    {
      v14 = &s_umbraThreadLocalOcclusionBuffers[v5];
      other_ = v14;
      Umbra::OcclusionBuffer::clear(v14);
    }
  }
  else
  {
    v14 = other_;
  }
  Umbra::IndexList::IndexList(&out);
  if ( tome && !v44 )
  {
    Umbra::Query::init(&v56, tome);
    Umbra::Query::setGateStates(&v56, &s_umbraGateStateVectors[v9]);
    Umbra::Query::setDebugRenderer(&v56, &s_umbraRender);
    if ( !viewInfoIndex || (_DWORD)v9 )
      v16 = s_umbraVisMask[v9];
    else
      v16 = s_umbraVisMaskCameraAlternate;
    Umbra::Visibility::setOutputObjectMask(&params, v16);
    if ( v14 )
      Umbra::Visibility::setOutputBuffer(&params, v14);
    Umbra::CameraTransform::set(&src, (const Umbra::Matrix4x4 *)cmdInfo, (const Umbra::Vector3 *)((char *)cmdInfo + 64), DEPTHRANGE_ZERO_TO_ONE, MF_COLUMN_MAJOR);
    if ( *((_DWORD *)cmdInfo + 30) )
    {
      if ( !*((_QWORD *)cmdInfo + 14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1255, ASSERT_TYPE_ASSERT, "(cmd->userClipPlanes)", (const char *)&queryFormat, "cmd->userClipPlanes") )
        __debugbreak();
      Umbra::CameraTransform::setUserClipPlanes(&src, *((const Umbra::Vector4 **)cmdInfo + 14), *((_DWORD *)cmdInfo + 30));
    }
    xSplits = *((_DWORD *)cmdInfo + 32);
    v17 = 0;
    if ( (_DWORD)v9 == r_umbraDebugView->current.integer )
    {
      v18 = DCONST_DVARBOOL_r_draw_frustum;
      if ( !DCONST_DVARBOOL_r_draw_frustum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_draw_frustum") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = (v18->current.enabled ? 0x200 : 0) | 0x10;
      if ( !r_umbraShowViewCells->current.enabled )
        v19 = v18->current.enabled ? 0x200 : 0;
      v20 = v19 | 0x20;
      if ( !r_umbraShowPortals->current.enabled )
        v20 = v19;
      v21 = v20 | 0x40;
      if ( !r_umbraShowVisibilityLines->current.enabled )
        v21 = v20;
      v17 = v21 | 0x80;
      if ( !r_umbraShowObjectBounds->current.enabled )
        v17 = v21;
      if ( r_umbraShowVisibleVolume->current.enabled )
        v17 |= 0x100u;
    }
    v13 = v17 | 2;
    if ( !*((_DWORD *)cmdInfo + 22) )
      v13 = v17;
    v22 = *((float *)cmdInfo + 25);
    v23 = *((float *)cmdInfo + 26);
    if ( v23 >= 0.0 && v23 <= 1.0 )
      Umbra::ObjectDistanceParams::setMinRelativeContribution(&inObjDistanceParams, v23);
    v24 = *((float *)cmdInfo + 24);
    if ( v24 > 0.0 )
      Umbra::ObjectDistanceParams::setDistanceScale(&inObjDistanceParams, v24);
    if ( *((float *)cmdInfo + 16) == *((float *)cmdInfo + 19) && *((float *)cmdInfo + 17) == *((float *)cmdInfo + 20) && *((float *)cmdInfo + 18) == *((float *)cmdInfo + 21) || (Umbra::ObjectDistanceParams::setReferencePoint(&inObjDistanceParams, (const Umbra::Vector3 *)((char *)cmdInfo + 76)), v22 == 3.4028235e38) || v8 != 1 )
    {
      if ( !v8 )
      {
        v25 = Umbra::Query::queryFrustumVisibility(&v56, v13, &params, &src, v10, &inObjDistanceParams, v6, v7);
        goto LABEL_84;
      }
      if ( v8 != 1 )
      {
        if ( v8 == 2 )
        {
          if ( (unsigned int)(v9 - 12) > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1315, ASSERT_TYPE_ASSERT, "(sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST)", (const char *)&queryFormat, "sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST") )
            __debugbreak();
          if ( !viewInfoIndex || (_DWORD)v9 )
            v26 = s_umbraVisMask[v9];
          else
            v26 = s_umbraVisMaskCameraAlternate;
          Umbra::IndexList::setPtr(&out, (int *)v26);
          Umbra::IndexList::setCapacity(&out, 4097);
          Umbra::IndexList::setSize(&out, 0);
          v25 = Umbra::QueryExt::queryStaticShadowCasters(&v56, &s_umbraShadowCullersPool[(unsigned int)(v9 - 12)], &out, &inObjDistanceParams, v6, v7, NULL);
        }
        else
        {
          v25 = ERROR_EMPTY_BUFFER|ERROR_INVALID_STRIDE;
        }
        goto LABEL_84;
      }
    }
    else
    {
      Com_PrintWarning(8, "R_Umbra_QueryStaticVisibilityCmd: query requires base level geo - forcing accurateOcclusionThreshold to FLT_MAX");
      v22 = FLOAT_3_4028235e38;
    }
    v25 = Umbra::Query::queryPortalVisibility(&v56, v13, &params, &src, v10, v22, &inObjDistanceParams, v6, v7, xSplits);
LABEL_84:
    if ( v25 )
    {
      switch ( v25 )
      {
        case ERROR_INVALID_STRIDE:
          R_WarnOncePerFrame(R_WARN_UMBRA_OUT_OF_MEMORY);
          break;
        case ERROR_EMPTY_BUFFER:
          R_WarnOncePerFrame(R_WARN_UMBRA_OUTSIDE_SCENE);
          break;
        case ERROR_EMPTY_BUFFER|ERROR_INVALID_STRIDE:
          R_WarnOncePerFrame(R_WARN_UMBRA_UNSUPPORTED_OPERATION);
          break;
        default:
          LODWORD(objDist) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 644, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown Umbra Failure %d", objDist) )
            __debugbreak();
          break;
      }
    }
  }
  Sys_ProfEndNamedEvent();
  if ( !other_ || v7 <= 1 || v44 )
  {
    v31 = viewInfoIndex;
  }
  else
  {
    if ( !viewInfoIndex || (_DWORD)v9 )
    {
      v28 = v9;
      v29 = s_umbraOcclusionBuffer[v9];
      if ( (unsigned int)v9 >= 0x21 )
      {
        LODWORD(threadId) = 33;
        LODWORD(objDist) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 653, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", objDist, threadId) )
          __debugbreak();
      }
    }
    else
    {
      v28 = 0i64;
      v29 = &s_umbraCameraOcclusionBufferAlternate;
    }
    Sys_ProfBeginNamedEvent(0xFFFFB6C1, "Umbra Merge Occlusion Buffers");
    v30 = &s_umbraOcclusionBufferWriteLock[v28];
    while ( 1 )
    {
      if ( !*v30 )
      {
        if ( ((unsigned __int8)v30 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v30) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(v30, 1, 0) )
          break;
      }
      Sys_Sleep(0);
    }
    v31 = viewInfoIndex;
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 665, ASSERT_TYPE_ASSERT, "(mergedOcclusionBuffer)", (const char *)&queryFormat, "mergedOcclusionBuffer") )
      __debugbreak();
    Umbra::OcclusionBuffer::combine(v29, other_);
    *v30 = 0;
    Sys_ProfEndNamedEvent();
  }
  v32 = &s_umbraQueryJobCount[v9];
  if ( ((unsigned __int8)v32 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_umbraQueryJobCount[v9]) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v32, 0xFFFFFFFF) == 1 && tome )
  {
    ObjectCount = Umbra::Tome::getObjectCount(tome);
    if ( !v31 || (_DWORD)v9 )
    {
      v35 = s_umbraVisMask[v9];
      v34 = s_umbraVisMaskCameraAlternate;
    }
    else
    {
      v34 = s_umbraVisMaskCameraAlternate;
      v35 = s_umbraVisMaskCameraAlternate;
    }
    R_Umbra_FillVisBuffers(tome, v35, ObjectCount, v9, occlussionBuffer);
    if ( r_umbraInvertStaticVisibility->current.enabled )
    {
      if ( v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1353, ASSERT_TYPE_ASSERT, "(!reuseOcclusion)", (const char *)&queryFormat, "!reuseOcclusion") )
        __debugbreak();
      R_Umbra_ClearVisMask(v9, viewInfoIndex);
      Umbra::Query::queryFrustumVisibility(&v56, v13, &params, &src, 0.0, &inObjDistanceParams, 0, 1);
      v36 = Umbra::Tome::getObjectCount(tome);
      if ( !viewInfoIndex || (_DWORD)v9 )
        v34 = s_umbraVisMask[v9];
      R_Umbra_InvertVisBuffers(tome, v34, v36, v9);
    }
    else if ( !(_DWORD)v9 && occlussionBuffer && (rg.gpuCullOcclusionUmbra || rg.gpuCullTriOcclusionUmbra) && !r_lockPvs->current.enabled )
    {
      if ( s_umbraOcclusionCameraViewValid[*((unsigned int *)cmdInfo + 36)] )
      {
        LODWORD(objDist) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1378, ASSERT_TYPE_ASSERT, "( ( !s_umbraOcclusionCameraViewValid[cmd->smpFrame] ) )", "( sceneViewType ) = %u", objDist) )
          __debugbreak();
      }
      v37 = s_umbraOcclusionCameraView[*((unsigned int *)cmdInfo + 36)];
      Profile_Begin(206);
      desc.width = Umbra::OcclusionBuffer::getWidth(occlussionBuffer);
      Height = Umbra::OcclusionBuffer::getHeight(occlussionBuffer);
      desc.height = Height;
      if ( desc.width != 64 )
      {
        LODWORD(v43) = 64;
        LODWORD(numThreads) = desc.width;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 439, ASSERT_TYPE_ASSERT, "( bufferDesc.width ) == ( 64 )", "%s == %s\n\t%u, %u", "bufferDesc.width", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", numThreads, v43) )
          __debugbreak();
        Height = desc.height;
      }
      if ( Height != 64 )
      {
        LODWORD(v43) = 64;
        LODWORD(numThreads) = Height;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 440, ASSERT_TYPE_ASSERT, "( bufferDesc.height ) == ( 64 )", "%s == %s\n\t%u, %u", "bufferDesc.height", "UMBRA_OCCLUSION_SCENE_IMAGE_HEIGHT", numThreads, v43) )
          __debugbreak();
      }
      desc.format = FORMAT_NDC_FLOAT;
      desc.stride = 4 * desc.width;
      Buffer = Umbra::OcclusionBuffer::getBuffer(occlussionBuffer, v37, &desc);
      if ( Buffer )
      {
        LODWORD(numThreads) = Buffer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 446, ASSERT_TYPE_ASSERT, "( errCode ) == ( Umbra::OcclusionBuffer::ERROR_OK )", "%s == %s\n\t%i, %i", "errCode", "Umbra::OcclusionBuffer::ERROR_OK", numThreads, 0i64) )
          __debugbreak();
      }
      Profile_EndInternal(NULL);
      s_umbraOcclusionCameraViewValid[*((unsigned int *)cmdInfo + 36)] = 1;
    }
  }
  if ( !s_umbraThreadJobActive[v50] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1387, ASSERT_TYPE_ASSERT, "(s_umbraThreadJobActive[threadContext])", (const char *)&queryFormat, "s_umbraThreadJobActive[threadContext]") )
    __debugbreak();
  if ( v50 >= 8 )
  {
    j___report_rangecheckfailure(v27);
    JUMPOUT(0x1421EA4F6i64);
  }
  s_umbraThreadJobActive[v50] = 0;
  Umbra::Query::~Query(&v56);
  Profile_EndInternal(NULL);
}

/*
==============
R_Umbra_Reset
==============
*/
void R_Umbra_Reset(void)
{
  memset_0(&s_umbraOcclusionBuffer[1], 0, 0x100ui64);
  s_umbraOcclusionBuffer[0] = &s_umbraCameraOcclusionBuffer;
}

/*
==============
R_Umbra_ResolveOcclusion
==============
*/
void R_Umbra_ResolveOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *umbraFloatZ0)
{
  __int64 smpFrame; 
  float *v9; 
  R_RT_Handle v10; 
  unsigned __int16 m_surfaceID; 
  bool v13; 
  __int16 v14; 
  unsigned __int16 v15; 
  bool v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  unsigned __int16 v20; 
  bool v22; 
  __int16 v23; 
  unsigned __int16 v24; 
  bool v26; 
  R_RT_Handle v27; 
  R_RT_Handle v28; 
  unsigned __int16 v29; 
  bool v31; 
  __int16 v32; 
  unsigned __int16 v33; 
  bool v35; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  unsigned __int16 v38; 
  bool v40; 
  __int16 v41; 
  unsigned __int16 v42; 
  bool v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  unsigned __int16 v47; 
  bool v49; 
  __int16 v50; 
  unsigned __int16 v51; 
  bool v53; 
  R_RT_Handle v54; 
  R_RT_Handle v55; 
  unsigned __int16 v56; 
  bool v58; 
  __int16 v59; 
  unsigned __int16 v60; 
  bool v61; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v63; 
  const R_RT_Surface *v64; 
  const R_RT_Surface *v65; 
  const R_RT_Surface *v66; 
  const R_RT_Surface *v67; 
  const R_RT_Surface *v68; 
  __int64 v69; 
  int width; 
  __int64 v71; 
  ID3D12Resource *buffers[2]; 
  R_RT_Handle v73; 
  R_RT_Handle v74; 
  R_RT_Handle v75; 
  R_RT_Handle v76; 
  R_RT_Handle v77; 
  R_RT_Handle v78; 
  R_RT_Handle v79; 
  R_RT_Handle v80; 

  if ( data->smpFrame >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 485, ASSERT_TYPE_ASSERT, "(unsigned)( data->smpFrame ) < (unsigned)( 2 )", "data->smpFrame doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", data->smpFrame, 2) )
    __debugbreak();
  smpFrame = data->smpFrame;
  if ( s_umbraOcclusionCameraViewValid[smpFrame] )
  {
    v9 = s_umbraOcclusionCameraView[smpFrame];
    if ( v9 )
    {
      R_UpdateGfxWrappedBuffer(&s_umbraOcclusionCameraViewBuffer[smpFrame], v9, 0x4000u);
      buffers[0] = computeState->data->globalSceneConstantBuffer->buffer;
      R_SetComputeConstantBuffers(computeState, 7, 1, buffers);
      if ( R_RT_Handle::GetSurface(&umbraFloatZ0->R_RT_Handle)->m_image.m_base.width != 64 )
      {
        width = R_RT_Handle::GetSurface(&umbraFloatZ0->R_RT_Handle)->m_image.m_base.width;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 502, ASSERT_TYPE_ASSERT, "( umbraFloatZ0.GetWidth() ) == ( 64 )", "%s == %s\n\t%u, %u", "umbraFloatZ0.GetWidth()", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", width, 64) )
          __debugbreak();
      }
      if ( R_RT_Handle::GetSurface(&umbraFloatZ0->R_RT_Handle)->m_image.m_base.height != 64 )
      {
        LODWORD(v71) = 64;
        LODWORD(v69) = R_RT_Handle::GetSurface(&umbraFloatZ0->R_RT_Handle)->m_image.m_base.height;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 503, ASSERT_TYPE_ASSERT, "( umbraFloatZ0.GetHeight() ) == ( 64 )", "%s == %s\n\t%u, %u", "umbraFloatZ0.GetHeight()", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", v69, v71) )
          __debugbreak();
      }
      v79 = umbraFloatZ0->R_RT_Handle;
      v10 = *R_RT_GetViewInternal(&v74, &v79, 0, 1);
      m_surfaceID = _XMM0;
      v79 = v10;
      v73 = v10;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          m_surfaceID = v73.m_surfaceID;
          v10 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          m_surfaceID = v73.m_surfaceID;
          v10 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v10 = v79;
          if ( v13 )
            __debugbreak();
        }
      }
      v80 = v10;
      v14 = m_surfaceID & 0x7FFF;
      if ( v14 )
      {
        v15 = v14 | 0x8000;
        v79.m_surfaceID = v15;
      }
      else
      {
        v15 = 0;
        v79.m_surfaceID = 0;
      }
      _XMM0 = *(_OWORD *)&v73.m_tracking.m_allocCounter;
      v79.m_tracking = v73.m_tracking;
      if ( v15 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_30;
        v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_30;
        v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v17 )
        __debugbreak();
LABEL_30:
      v18 = umbraFloatZ0->R_RT_Handle;
      v75 = v79;
      v79 = v18;
      v19 = *R_RT_GetViewInternal(&v74, &v79, 0, 2);
      v20 = _XMM0;
      v79 = v19;
      v73 = v19;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v20 = v73.m_surfaceID;
          v19 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v20 = v73.m_surfaceID;
          v19 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v19 = v79;
          if ( v22 )
            __debugbreak();
        }
      }
      v80 = v19;
      v23 = v20 & 0x7FFF;
      if ( v23 )
        v24 = v23 | 0x8000;
      else
        v24 = 0;
      v79.m_surfaceID = v24;
      _XMM0 = *(_OWORD *)&v73.m_tracking.m_allocCounter;
      v79.m_tracking = v73.m_tracking;
      if ( v24 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_48;
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_48;
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v26 )
        __debugbreak();
LABEL_48:
      v27 = umbraFloatZ0->R_RT_Handle;
      v76 = v79;
      v79 = v27;
      v28 = *R_RT_GetViewInternal(&v74, &v79, 0, 3);
      v29 = _XMM0;
      v79 = v28;
      v73 = v28;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v29 = v73.m_surfaceID;
          v28 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v29 = v73.m_surfaceID;
          v28 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v28 = v79;
          if ( v31 )
            __debugbreak();
        }
      }
      v80 = v28;
      v32 = v29 & 0x7FFF;
      if ( v32 )
      {
        v33 = v32 | 0x8000;
        v79.m_surfaceID = v33;
      }
      else
      {
        v33 = 0;
        v79.m_surfaceID = 0;
      }
      _XMM0 = *(_OWORD *)&v73.m_tracking.m_allocCounter;
      v79.m_tracking = v73.m_tracking;
      if ( v33 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_66;
        v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_66;
        v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v35 )
        __debugbreak();
LABEL_66:
      v36 = umbraFloatZ0->R_RT_Handle;
      v77 = v79;
      v79 = v36;
      v37 = *R_RT_GetViewInternal(&v74, &v79, 0, 4);
      v38 = _XMM0;
      v79 = v37;
      v73 = v37;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v38 = v73.m_surfaceID;
          v37 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v38 = v73.m_surfaceID;
          v37 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v37 = v79;
          if ( v40 )
            __debugbreak();
        }
      }
      v80 = v37;
      v41 = v38 & 0x7FFF;
      if ( v41 )
      {
        v42 = v41 | 0x8000;
        v79.m_surfaceID = v42;
      }
      else
      {
        v42 = 0;
        v79.m_surfaceID = 0;
      }
      _XMM0 = *(_OWORD *)&v73.m_tracking.m_allocCounter;
      v79.m_tracking = v73.m_tracking;
      if ( v42 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_84;
        v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_84;
        v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v44 )
        __debugbreak();
LABEL_84:
      v45 = umbraFloatZ0->R_RT_Handle;
      v80 = v79;
      v79 = v45;
      v46 = *R_RT_GetViewInternal(&v74, &v79, 0, 5);
      v47 = _XMM0;
      v79 = v46;
      v73 = v46;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v47 = v73.m_surfaceID;
          v46 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v47 = v73.m_surfaceID;
          v46 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v46 = v79;
          if ( v49 )
            __debugbreak();
        }
      }
      v79 = v46;
      v50 = v47 & 0x7FFF;
      if ( v50 )
      {
        v51 = v50 | 0x8000;
        v79.m_surfaceID = v51;
      }
      else
      {
        v51 = 0;
        v79.m_surfaceID = 0;
      }
      _XMM0 = *(_OWORD *)&v73.m_tracking.m_allocCounter;
      v79.m_tracking = v73.m_tracking;
      if ( v51 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_102;
        v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_102;
        v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v53 )
        __debugbreak();
LABEL_102:
      v54 = umbraFloatZ0->R_RT_Handle;
      v74 = v79;
      v79 = v54;
      v55 = *R_RT_GetViewInternal(&v78, &v79, 0, 6);
      v56 = _XMM0;
      v79 = v55;
      v73 = v55;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v73);
        if ( (R_RT_Handle::GetSurface(&v73)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v56 = v73.m_surfaceID;
          v55 = v73;
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v73.m_tracking.m_allocCounter;
          v56 = v73.m_surfaceID;
          v55 = v73;
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v55 = v79;
          if ( v58 )
            __debugbreak();
        }
      }
      v79 = v55;
      v59 = v56 & 0x7FFF;
      if ( v59 )
      {
        v60 = v59 | 0x8000;
        v79.m_surfaceID = v60;
      }
      else
      {
        v60 = 0;
        v79.m_surfaceID = 0;
      }
      v79.m_tracking = v73.m_tracking;
      if ( v60 )
      {
        R_RT_Handle::GetSurface(&v79);
        if ( (R_RT_Handle::GetSurface(&v79)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_118:
          if ( v61 )
            __debugbreak();
        }
      }
      else if ( (_DWORD)_RSI )
      {
        v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        goto LABEL_118;
      }
      R_SetComputeShader(computeState, rgp.resolveUmbraOcclusion);
      buffers[0] = (ID3D12Resource *)(&s_umbraOcclusionCameraViewBuffer[0].view + 2 * data->smpFrame);
      R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)buffers);
      Surface = R_RT_Handle::GetSurface(&umbraFloatZ0->R_RT_Handle);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)buffers);
      v63 = R_RT_Handle::GetSurface(&v75);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v63->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)buffers);
      v64 = R_RT_Handle::GetSurface(&v76);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v64->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)buffers);
      v65 = R_RT_Handle::GetSurface(&v77);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v65->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 3, 1, (const GfxTexture *const *)buffers);
      v66 = R_RT_Handle::GetSurface(&v80);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v66->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 4, 1, (const GfxTexture *const *)buffers);
      v67 = R_RT_Handle::GetSurface(&v74);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v67->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 5, 1, (const GfxTexture *const *)buffers);
      v68 = R_RT_Handle::GetSurface(&v79);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v68->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 6, 1, (const GfxTexture *const *)buffers);
      R_Dispatch(computeState, 1u, 1u, 1u);
    }
  }
}

/*
==============
R_Umbra_SetOcclusionBuffer
==============
*/
void R_Umbra_SetOcclusionBuffer(Umbra::OcclusionBuffer *occlusionBuffer, unsigned int sceneViewType)
{
  __int64 v2; 
  int v5; 

  v2 = sceneViewType;
  if ( sceneViewType >= 0x21 )
  {
    v5 = 33;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 694, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, v5) )
      __debugbreak();
  }
  s_umbraOcclusionBuffer[v2] = occlusionBuffer;
}

/*
==============
R_Umbra_SetScriptedGateStates
==============
*/
void R_Umbra_SetScriptedGateStates(bitarray<384> *gateStates)
{
  __int128 v1; 

  v1 = *(_OWORD *)&gateStates->array[8];
  *(__m256i *)s_umbraScriptedGateStates.array = *(__m256i *)gateStates->array;
  *(_OWORD *)&s_umbraScriptedGateStates.array[8] = v1;
}

/*
==============
R_Umbra_ShadowQueryMode
==============
*/
__int64 R_Umbra_ShadowQueryMode()
{
  int integer; 

  integer = r_umbraShadows->current.integer;
  if ( !integer )
    return 0i64;
  if ( integer != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected Umbra Shadow Query Mode!") )
      __debugbreak();
    return 0i64;
  }
  return 2i64;
}

/*
==============
R_Umbra_Shutdown
==============
*/
void R_Umbra_Shutdown(void)
{
  unsigned int v0; 
  unsigned __int64 v1; 
  __int64 v2; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(&s_umbraOcclusionCameraViewBuffer[v0]);
    if ( v1 >= 2 )
    {
      j___report_rangecheckfailure(v2);
      JUMPOUT(0x1421EBA71i64);
    }
    s_umbraOcclusionCameraViewValid[v1] = 0;
    ++v0;
    ++v1;
  }
  while ( v0 < 2 );
  if ( s_umbraOcclusionSceneImage )
  {
    Image_Release(s_umbraOcclusionSceneImage);
    s_umbraOcclusionSceneImage = NULL;
  }
  memset_0(s_umbraOcclusionBuffer, 0, 0x108ui64);
}

/*
==============
R_Umbra_ShutdownOcclusionImages
==============
*/
void R_Umbra_ShutdownOcclusionImages(void)
{
  unsigned int v0; 
  unsigned __int64 v1; 
  __int64 v2; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(&s_umbraOcclusionCameraViewBuffer[v0]);
    if ( v1 >= 2 )
    {
      j___report_rangecheckfailure(v2);
      JUMPOUT(0x1421EBB02i64);
    }
    s_umbraOcclusionCameraViewValid[v1] = 0;
    ++v0;
    ++v1;
  }
  while ( v0 < 2 );
}

/*
==============
R_Umbra_ToggleUmbraFrame
==============
*/
void R_Umbra_ToggleUmbraFrame(__int64 smpFrame)
{
  if ( (unsigned int)smpFrame >= 2ui64 )
  {
    j___report_rangecheckfailure(smpFrame);
    JUMPOUT(0x1421EBB41i64);
  }
  s_umbraOcclusionCameraViewValid[(unsigned int)smpFrame] = 0;
}

/*
==============
R_Umbra_UpdateGatesForView
==============
*/
void R_Umbra_UpdateGatesForView(unsigned int sceneViewType)
{
  __int64 v1; 
  Umbra::GateStateVector *v2; 
  void **v3; 
  unsigned int i; 
  __int64 v5; 
  UmbraGate *umbraGates; 
  float closeDistance; 
  __int128 v9; 
  float v10; 
  __m128 v14; 
  float v15; 
  __m128 v19; 
  __int128 v30; 
  __int64 v32; 
  __int64 v33; 
  Umbra::GateStateVector v34[2]; 
  __m128 v35; 
  __m128 v36; 

  v1 = sceneViewType;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1766, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  v2 = &s_umbraGateStateVectors[v1];
  Umbra::GateStateVector::GateStateVector(v34, s_umbraGateStates[v1], 0x30ui64, 1);
  v2->m_data = *v3;
  if ( !(_DWORD)v1 )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1774, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    for ( i = 0; i < rgp.world->numUmbraGates; ++i )
    {
      if ( i >= 0x180 )
      {
        LODWORD(v33) = 384;
        LODWORD(v32) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (i & 0x1F)) & s_umbraScriptedGateStates.array[(unsigned __int64)i >> 5]) != 0 )
      {
        v5 = i;
        umbraGates = rgp.world->umbraGates;
        closeDistance = umbraGates[v5].closeDistance;
        if ( closeDistance <= 0.0 )
          continue;
        HIDWORD(v34[1].m_data) = 0;
        v9 = *(_OWORD *)&v34[0].m_data;
        *(float *)&v9 = rg.correctedLodParms.origin.v[0];
        _XMM5 = v9;
        v10 = umbraGates[v5].bounds.midPoint.v[0];
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
          vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
        }
        v35.m128_i32[3] = 0;
        v14 = v35;
        v14.m128_f32[0] = v10;
        _XMM4 = v14;
        v15 = umbraGates[v5].bounds.halfSize.v[0];
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rcx+r8+8], 10h
          vinsertps xmm4, xmm4, dword ptr [rcx+r8+0Ch], 20h ; ' '
        }
        v36.m128_i32[3] = 0;
        v19 = v36;
        v19.m128_f32[0] = v15;
        _XMM3 = v19;
        __asm { vinsertps xmm3, xmm3, dword ptr [rcx+r8+14h], 10h }
        _XMM0 = g_negativeZero.v;
        __asm { vinsertps xmm3, xmm3, dword ptr [rcx+r8+18h], 20h ; ' ' }
        _mm128_sub_ps(_XMM5, _XMM4);
        __asm { vandnps xmm2, xmm0, xmm1 }
        v36 = _XMM3;
        _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
        __asm { vmaxps  xmm1, xmm3, xmm0 }
        _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
        __asm
        {
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm1, xmm0, xmm0
        }
        v30 = _XMM1;
        *(float *)&v30 = fsqrt(*(float *)&_XMM1);
        _XMM0 = v30;
        __asm { vmaxss  xmm1, xmm0, xmm8 }
        *(__m128 *)&v34[0].m_data = _XMM5;
        v35 = _XMM4;
        if ( closeDistance > (float)(*(float *)&_XMM1 * rg.correctedLodParms.cappedLodScale) )
          continue;
      }
      Umbra::GateStateVector::setState(v2, i, 0);
    }
  }
}

