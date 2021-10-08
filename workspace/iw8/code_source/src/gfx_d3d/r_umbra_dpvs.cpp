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
  Bounds bounds; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+48h+bounds.midPoint], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+48h+bounds.midPoint+4], xmm1
    vmovss  xmm1, cs:__real@40800000
    vmovss  dword ptr [rsp+48h+bounds.midPoint+8], xmm0
    vmovss  dword ptr [rsp+48h+bounds.halfSize], xmm1
    vmovss  dword ptr [rsp+48h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rsp+48h+bounds.halfSize+8], xmm1
  }
  R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, (const vec4_t *)color, r_showCullMode->current.integer != 0);
}

/*
==============
DebugUmbraRenderer::addAABB
==============
*/
void DebugUmbraRenderer::addAABB(DebugUmbraRenderer *this, const Umbra::Vector3 *mn, const Umbra::Vector3 *mx, const Umbra::Vector4 *color)
{
  Bounds bounds; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm7, dword ptr [r8]
    vaddss  xmm0, xmm7, dword ptr [rdx]
    vmovss  xmm6, dword ptr [r8+4]
    vmovss  xmm4, dword ptr [r8+8]
    vsubss  xmm2, xmm7, dword ptr [rdx]
    vmulss  xmm0, xmm0, xmm8
    vmovss  dword ptr [rsp+78h+bounds.midPoint], xmm0
    vaddss  xmm0, xmm6, dword ptr [rdx+4]
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm0, xmm4, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+78h+bounds.midPoint+4], xmm1
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rsp+78h+bounds.midPoint+8], xmm1
    vsubss  xmm1, xmm6, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rsp+78h+bounds.halfSize], xmm0
    vsubss  xmm0, xmm4, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rsp+78h+bounds.halfSize+8], xmm1
    vmovss  dword ptr [rsp+78h+bounds.halfSize+4], xmm2
  }
  R_AddDebugBoxDepthTest(&frontEndDataOut->debugGlobals, &bounds, (const vec4_t *)color);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
DebugUmbraRenderer::addQuad
==============
*/
void DebugUmbraRenderer::addQuad(DebugUmbraRenderer *this, const Umbra::Vector3 *x0y0, const Umbra::Vector3 *x0y1, const Umbra::Vector3 *x1y1, const Umbra::Vector3 *x1y0, const Umbra::Vector4 *color)
{
  vec3_t points; 

  _RAX = x1y0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  [rsp+88h+var_24], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+88h+var_20], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+88h+var_30], xmm1
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  [rsp+88h+var_1C], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+88h+var_28], xmm1
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  [rsp+88h+var_2C], xmm0
    vmovss  xmm0, dword ptr [r9]
    vmovss  [rsp+88h+var_38], xmm1
    vmovss  xmm1, dword ptr [r8]
    vmovss  [rsp+88h+var_3C], xmm0
    vmovss  xmm0, dword ptr [r9+8]
    vmovss  dword ptr [rsp+88h+points], xmm1
    vmovss  xmm1, dword ptr [r8+8]
    vmovss  [rsp+88h+var_34], xmm0
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rsp+88h+points+8], xmm1
    vmovss  dword ptr [rsp+88h+points+4], xmm0
  }
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
  __int64 v12; 
  __int64 v13; 
  const DpvsView *DpvsView; 
  GfxWorld *world; 
  int frustumPlaneCount; 
  unsigned int v17; 
  unsigned int v18; 
  int WiewOrgCell; 
  unsigned __int8 *v20; 
  unsigned int *v21; 
  unsigned int v22; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned __int16 v30; 
  DynEntityClient *v31; 
  unsigned int dynEntDefId; 
  unsigned int v33; 
  DynEntityList *DynEntityList; 
  __int64 v35; 
  int v37; 
  int v38; 
  int IsBoxVisible; 
  unsigned int v40; 
  const DpvsView *v41; 
  int v42; 
  int v43; 
  bool v45; 
  const Umbra::OcclusionBuffer *OcclusionBuffer; 
  int v71; 
  bool v78; 
  __int64 v107; 
  __int64 v108; 
  unsigned int v109; 
  int v110; 
  unsigned int v111; 
  unsigned int *v112; 
  __int64 v113; 
  const DpvsView *v114; 
  unsigned __int16 v126; 

  v12 = localClientNum;
  v13 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  world = rgp.world;
  v114 = DpvsView;
  frustumPlaneCount = DpvsView->frustumPlaneCount;
  v17 = rgp.world->dpvsDyn.dynEntClientWordCount[1];
  v18 = (rgp.world->dpvsDyn.dynEntClientCount[1] + 31) >> 5;
  v111 = v18;
  WiewOrgCell = R_Dpvs_GetWiewOrgCell();
  v20 = &world->dpvsDyn.dynEntVisData[1][v13][(unsigned int)(v12 * world->dpvsDyn.dynEntClientCount[0])];
  v21 = &world->dpvsDyn.dynEntCellBits[1][(unsigned int)v12 * v18 + (unsigned __int64)(v17 * WiewOrgCell)];
  v112 = v21;
  if ( (unsigned int)v12 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
    v21 = v112;
  }
  v113 = v12;
  v126 = g_dynEntClientEntsAllocCount[v12][1];
  v22 = 0;
  v109 = 0;
  if ( v18 )
  {
    __asm
    {
      vmovaps [rsp+158h+var_58], xmm6
      vmovaps [rsp+158h+var_68], xmm7
      vmovaps [rsp+158h+var_78], xmm8
      vmovaps [rsp+158h+var_88], xmm9
      vmovaps [rsp+158h+var_98], xmm10
      vmovaps [rsp+158h+var_A8], xmm11
      vmovaps [rsp+158h+var_B8], xmm12
      vmovaps [rsp+158h+var_C8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+158h+var_D8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    while ( 1 )
    {
      v25 = *v21;
      v26 = __lzcnt(*v21);
      if ( v26 >= 0x20 )
        goto LABEL_70;
      v27 = 32 * v22;
      v110 = v27;
      do
      {
        v28 = v27 + v26;
        if ( v27 + v26 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v28, "unsigned", v28) )
          __debugbreak();
        if ( ((0x80000000 >> v26) & v25) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1611, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
          __debugbreak();
        v29 = (unsigned __int16)v28;
        v25 &= ~(0x80000000 >> v26);
        if ( !v20[(unsigned __int16)v28] )
        {
          if ( (unsigned __int16)v28 < v126 )
          {
            if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v108) = 2;
              LODWORD(v107) = localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v107, v108) )
                __debugbreak();
            }
            v30 = g_dynEntClientEntsAllocCount[v113][1];
            if ( (unsigned __int16)v28 >= v30 )
            {
              LODWORD(v108) = v30;
              LODWORD(v107) = (unsigned __int16)v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v107, v108) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[v113][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v31 = &g_dynEntClientLists[v113][1][(unsigned __int16)v28];
            if ( v31 )
            {
              dynEntDefId = v31->dynEntDefId;
              if ( dynEntDefId != -1 )
              {
                v33 = dynEntDefId & 0x7FFFF;
                DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(dynEntDefId >> 19));
                if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                  __debugbreak();
                if ( v33 >= DynEntityList->dynEntCount[1] )
                {
                  LODWORD(v108) = DynEntityList->dynEntCount[1];
                  LODWORD(v107) = v33;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v107, v108) )
                    __debugbreak();
                }
                v35 = (__int64)&DynEntityList->dynEntDefList[1][v33];
                if ( v35 )
                {
                  _RBX = R_GetBrushModel(*(unsigned __int16 *)(v35 + 66));
                  if ( _RBX )
                  {
                    if ( (unsigned int)v13 >= 0x21 )
                    {
                      LODWORD(v108) = 33;
                      LODWORD(v107) = v13;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v107, v108) )
                        __debugbreak();
                    }
                    if ( rg.useCachedSunShadow && (unsigned int)(v13 - 1) <= 2 )
                    {
                      v37 = v13 - rg.firstCachedSunShadowPartition;
                      v38 = -1;
                      if ( v37 == 1 )
                        v38 = 12;
                      if ( v37 == 2 )
                        v38 = 22;
                      if ( v38 == -1 )
                      {
LABEL_46:
                        IsBoxVisible = 1;
                      }
                      else
                      {
                        if ( (unsigned int)v13 <= 1 || !R_Umbra_CullProjectedBounds_SunShadows(&_RBX->writable.bounds, v13) )
                        {
                          v40 = v38;
                          while ( 1 )
                          {
                            v41 = R_GetDpvsView(v40);
                            v42 = v41->frustumPlaneCount;
                            if ( !v42 )
                              break;
                            v43 = 0;
                            _RAX = v41->frustumPlanes;
                            v45 = v42 == 0;
                            if ( v42 <= 0 )
                            {
LABEL_56:
                              if ( s_umbraQueryJobCount[v40] > 0 || R_Umbra_IsBoxVisible(&_RBX->writable.bounds, s_umbraOcclusionBuffer[v40]) )
                                goto LABEL_46;
                            }
                            else
                            {
                              __asm
                              {
                                vmovss  xmm7, dword ptr [rbx+0Ch]
                                vmovss  xmm8, dword ptr [rbx]
                                vmovss  xmm9, dword ptr [rbx+4]
                                vmovss  xmm10, dword ptr [rbx+10h]
                                vmovss  xmm11, dword ptr [rbx+8]
                                vmovss  xmm12, dword ptr [rbx+14h]
                              }
                              while ( 1 )
                              {
                                __asm
                                {
                                  vmovss  xmm1, dword ptr [rax]
                                  vmovss  xmm5, dword ptr [rax+4]
                                  vmovss  xmm6, dword ptr [rax+8]
                                  vandps  xmm0, xmm1, xmm13
                                  vmulss  xmm2, xmm0, xmm7
                                  vmulss  xmm0, xmm8, xmm1
                                  vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                                  vaddss  xmm3, xmm2, xmm1
                                  vmulss  xmm2, xmm9, xmm5
                                  vmulss  xmm1, xmm11, xmm6
                                  vaddss  xmm4, xmm3, xmm2
                                  vandps  xmm5, xmm5, xmm13
                                  vmulss  xmm0, xmm5, xmm10
                                  vaddss  xmm2, xmm4, xmm0
                                  vandps  xmm6, xmm6, xmm13
                                  vaddss  xmm3, xmm2, xmm1
                                  vmulss  xmm0, xmm6, xmm12
                                  vaddss  xmm1, xmm3, xmm0
                                  vcomiss xmm1, xmm14
                                }
                                if ( v45 )
                                  break;
                                ++v43;
                                ++_RAX;
                                v45 = v43 <= (unsigned int)v42;
                                if ( v43 >= v42 )
                                  goto LABEL_56;
                              }
                            }
                            if ( ++v40 - v38 >= 0xA )
                            {
                              IsBoxVisible = 0;
                              goto LABEL_61;
                            }
                          }
                        }
                        IsBoxVisible = 0;
                      }
                    }
                    else
                    {
                      OcclusionBuffer = R_Umbra_GetOcclusionBuffer(v13, viewInfoIndex);
                      IsBoxVisible = R_Umbra_IsBoxVisible(&_RBX->writable.bounds, OcclusionBuffer);
                    }
LABEL_61:
                    if ( IsBoxVisible )
                    {
                      v71 = 0;
                      if ( frustumPlaneCount <= 0 )
                      {
LABEL_66:
                        v20[v29] = 1;
                        goto LABEL_68;
                      }
                      __asm
                      {
                        vmovss  xmm7, dword ptr [rbx+0Ch]
                        vmovss  xmm8, dword ptr [rbx]
                        vmovss  xmm9, dword ptr [rbx+4]
                        vmovss  xmm10, dword ptr [rbx+10h]
                        vmovss  xmm11, dword ptr [rbx+8]
                        vmovss  xmm12, dword ptr [rbx+14h]
                      }
                      v78 = __CFADD__(v114, 28i64) || &v114->frustumPlanes[0].coeffs.xyz + 1 == NULL;
                      _RAX = &v114->frustumPlanes[0].coeffs.xyz + 1;
                      while ( 1 )
                      {
                        __asm
                        {
                          vmovss  xmm1, dword ptr [rax-0Ch]
                          vmovss  xmm5, dword ptr [rax-8]
                          vmovss  xmm6, dword ptr [rax-4]
                          vandps  xmm0, xmm1, xmm13
                          vmulss  xmm2, xmm0, xmm7
                          vmulss  xmm0, xmm8, xmm1
                          vaddss  xmm1, xmm0, dword ptr [rax]
                          vaddss  xmm3, xmm2, xmm1
                          vmulss  xmm2, xmm9, xmm5
                          vmulss  xmm1, xmm11, xmm6
                          vaddss  xmm4, xmm3, xmm2
                          vandps  xmm5, xmm5, xmm13
                          vmulss  xmm0, xmm5, xmm10
                          vaddss  xmm2, xmm4, xmm0
                          vandps  xmm6, xmm6, xmm13
                          vaddss  xmm3, xmm2, xmm1
                          vmulss  xmm0, xmm6, xmm12
                          vaddss  xmm1, xmm3, xmm0
                          vcomiss xmm1, xmm14
                        }
                        if ( v78 )
                          break;
                        ++v71;
                        _RAX = (vec3_t *)((char *)_RAX + 16);
                        v78 = v71 <= (unsigned int)frustumPlaneCount;
                        if ( v71 >= frustumPlaneCount )
                          goto LABEL_66;
                      }
                    }
                  }
                }
              }
            }
          }
          v20[v29] = 2;
        }
LABEL_68:
        v27 = v110;
        v26 = __lzcnt(v25);
      }
      while ( v26 < 0x20 );
      v22 = v109;
      v18 = v111;
      v21 = v112;
LABEL_70:
      ++v22;
      ++v21;
      v109 = v22;
      v112 = v21;
      if ( v22 >= v18 )
      {
        __asm
        {
          vmovaps xmm14, [rsp+158h+var_D8]
          vmovaps xmm13, [rsp+158h+var_C8]
          vmovaps xmm12, [rsp+158h+var_B8]
          vmovaps xmm11, [rsp+158h+var_A8]
          vmovaps xmm10, [rsp+158h+var_98]
          vmovaps xmm9, [rsp+158h+var_88]
          vmovaps xmm8, [rsp+158h+var_78]
          vmovaps xmm7, [rsp+158h+var_68]
          vmovaps xmm6, [rsp+158h+var_58]
        }
        return;
      }
    }
  }
}

/*
==============
R_Umbra_CullDynModelEntities
==============
*/
void R_Umbra_CullDynModelEntities(LocalClientNum_t localClientNum, unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v12; 
  __int64 v13; 
  const DpvsView *DpvsView; 
  GfxWorld *world; 
  int frustumPlaneCount; 
  unsigned int v17; 
  unsigned int v18; 
  int WiewOrgCell; 
  unsigned int *v20; 
  unsigned int v21; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  unsigned __int16 v31; 
  int v33; 
  int v34; 
  int IsBoxVisible; 
  unsigned int v36; 
  const DpvsView *v37; 
  int v38; 
  int v39; 
  bool v41; 
  const Umbra::OcclusionBuffer *OcclusionBuffer; 
  int v67; 
  bool v74; 
  __int64 v103; 
  __int64 v104; 
  int v105; 
  unsigned int v106; 
  unsigned __int8 *v107; 
  unsigned int *v108; 
  __int64 v109; 
  const DpvsView *v110; 
  unsigned __int16 v122; 
  unsigned int v123; 

  v12 = localClientNum;
  v13 = sceneViewType;
  DpvsView = R_GetDpvsView(viewInfoIndex, sceneViewType);
  world = rgp.world;
  v110 = DpvsView;
  frustumPlaneCount = DpvsView->frustumPlaneCount;
  v17 = rgp.world->dpvsDyn.dynEntClientWordCount[0];
  v18 = (rgp.world->dpvsDyn.dynEntClientCount[0] + 31) >> 5;
  v106 = v18;
  WiewOrgCell = R_Dpvs_GetWiewOrgCell();
  v107 = &world->dpvsDyn.dynEntVisData[0][v13][(unsigned int)(v12 * world->dpvsDyn.dynEntClientCount[0])];
  v20 = &world->dpvsDyn.dynEntCellBits[0][(unsigned int)v12 * v18 + (unsigned __int64)(v17 * WiewOrgCell)];
  v108 = v20;
  if ( (unsigned int)v12 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
    v20 = v108;
  }
  v109 = v12;
  v122 = g_dynEntClientEntsAllocCount[v12][0];
  v21 = 0;
  v123 = 0;
  if ( v18 )
  {
    __asm
    {
      vmovaps [rsp+158h+var_58], xmm6
      vmovaps [rsp+158h+var_68], xmm7
      vmovaps [rsp+158h+var_78], xmm8
      vmovaps [rsp+158h+var_88], xmm9
      vmovaps [rsp+158h+var_98], xmm10
      vmovaps [rsp+158h+var_A8], xmm11
      vmovaps [rsp+158h+var_B8], xmm12
      vmovaps [rsp+158h+var_C8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+158h+var_D8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    while ( 1 )
    {
      v24 = *v20;
      v25 = __lzcnt(*v20);
      if ( v25 >= 0x20 )
        goto LABEL_62;
      v26 = 32 * v21;
      v105 = v26;
      do
      {
        v27 = v26 + v25;
        if ( v26 + v25 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v27, "unsigned", v27) )
          __debugbreak();
        v28 = 0x80000000 >> v25;
        if ( ((0x80000000 >> v25) & v24) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1562, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
          __debugbreak();
        v29 = v107;
        v30 = (unsigned __int16)v27;
        v24 &= ~v28;
        if ( !v107[(unsigned __int16)v27] )
        {
          if ( (unsigned __int16)v27 < v122 )
          {
            if ( (unsigned int)v12 >= 2 )
            {
              LODWORD(v104) = 2;
              LODWORD(v103) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v103, v104) )
                __debugbreak();
            }
            if ( !g_dynEntPoseLists[v109][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
              __debugbreak();
            v31 = g_dynEntClientEntsAllocCount[v109][0];
            if ( (unsigned __int16)v27 >= v31 )
            {
              LODWORD(v104) = v31;
              LODWORD(v103) = (unsigned __int16)v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v103, v104) )
                __debugbreak();
            }
            _RBP = &g_dynEntPoseLists[v109][0][(unsigned __int16)v27];
            if ( _RBP )
            {
              if ( (unsigned int)v13 >= 0x21 )
              {
                LODWORD(v104) = 33;
                LODWORD(v103) = v13;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 319, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v103, v104) )
                  __debugbreak();
              }
              if ( rg.useCachedSunShadow && (unsigned int)(v13 - 1) <= 2 )
              {
                v33 = v13 - rg.firstCachedSunShadowPartition;
                v34 = -1;
                if ( v33 == 1 )
                  v34 = 12;
                if ( v33 == 2 )
                  v34 = 22;
                if ( v34 == -1 )
                {
                  IsBoxVisible = 1;
                  goto LABEL_53;
                }
                if ( (unsigned int)v13 > 1 && R_Umbra_CullProjectedBounds_SunShadows(&_RBP->bounds, v13) )
                {
                  IsBoxVisible = 0;
                  goto LABEL_53;
                }
                v36 = v34;
                while ( 1 )
                {
                  v37 = R_GetDpvsView(v36);
                  v38 = v37->frustumPlaneCount;
                  if ( !v38 )
                  {
LABEL_50:
                    v29 = v107;
                    IsBoxVisible = 0;
                    goto LABEL_53;
                  }
                  v39 = 0;
                  _RAX = v37->frustumPlanes;
                  v41 = v38 == 0;
                  if ( v38 <= 0 )
                  {
LABEL_47:
                    if ( s_umbraQueryJobCount[v36] > 0 || R_Umbra_IsBoxVisible(&_RBP->bounds, s_umbraOcclusionBuffer[v36]) )
                    {
                      v29 = v107;
                      IsBoxVisible = 1;
                      goto LABEL_53;
                    }
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm7, dword ptr [rbp+30h]
                      vmovss  xmm8, dword ptr [rbp+24h]
                      vmovss  xmm9, dword ptr [rbp+28h]
                      vmovss  xmm10, dword ptr [rbp+34h]
                      vmovss  xmm11, dword ptr [rbp+2Ch]
                      vmovss  xmm12, dword ptr [rbp+38h]
                    }
                    while ( 1 )
                    {
                      __asm
                      {
                        vmovss  xmm1, dword ptr [rax]
                        vmovss  xmm5, dword ptr [rax+4]
                        vmovss  xmm6, dword ptr [rax+8]
                        vandps  xmm0, xmm1, xmm13
                        vmulss  xmm2, xmm0, xmm7
                        vmulss  xmm0, xmm8, xmm1
                        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                        vaddss  xmm3, xmm2, xmm1
                        vmulss  xmm2, xmm9, xmm5
                        vmulss  xmm1, xmm11, xmm6
                        vaddss  xmm4, xmm3, xmm2
                        vandps  xmm5, xmm5, xmm13
                        vmulss  xmm0, xmm5, xmm10
                        vaddss  xmm2, xmm4, xmm0
                        vandps  xmm6, xmm6, xmm13
                        vaddss  xmm3, xmm2, xmm1
                        vmulss  xmm0, xmm6, xmm12
                        vaddss  xmm1, xmm3, xmm0
                        vcomiss xmm1, xmm14
                      }
                      if ( v41 )
                        break;
                      ++v39;
                      ++_RAX;
                      v41 = v39 <= (unsigned int)v38;
                      if ( v39 >= v38 )
                        goto LABEL_47;
                    }
                  }
                  if ( ++v36 - v34 >= 0xA )
                    goto LABEL_50;
                }
              }
              OcclusionBuffer = R_Umbra_GetOcclusionBuffer(v13, viewInfoIndex);
              IsBoxVisible = R_Umbra_IsBoxVisible(&_RBP->bounds, OcclusionBuffer);
LABEL_53:
              if ( IsBoxVisible )
              {
                v67 = 0;
                if ( frustumPlaneCount <= 0 )
                {
LABEL_58:
                  v29[v30] = 1;
                  goto LABEL_60;
                }
                __asm
                {
                  vmovss  xmm7, dword ptr [rbp+30h]
                  vmovss  xmm8, dword ptr [rbp+24h]
                  vmovss  xmm9, dword ptr [rbp+28h]
                  vmovss  xmm10, dword ptr [rbp+34h]
                  vmovss  xmm11, dword ptr [rbp+2Ch]
                  vmovss  xmm12, dword ptr [rbp+38h]
                }
                v74 = __CFADD__(v110, 28i64) || &v110->frustumPlanes[0].coeffs.xyz + 1 == NULL;
                _RAX = &v110->frustumPlanes[0].coeffs.xyz + 1;
                while ( 1 )
                {
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rax-0Ch]
                    vmovss  xmm5, dword ptr [rax-8]
                    vmovss  xmm6, dword ptr [rax-4]
                    vandps  xmm0, xmm1, xmm13
                    vmulss  xmm2, xmm0, xmm7
                    vmulss  xmm0, xmm8, xmm1
                    vaddss  xmm1, xmm0, dword ptr [rax]
                    vaddss  xmm3, xmm2, xmm1
                    vmulss  xmm2, xmm9, xmm5
                    vmulss  xmm1, xmm11, xmm6
                    vaddss  xmm4, xmm3, xmm2
                    vandps  xmm5, xmm5, xmm13
                    vmulss  xmm0, xmm5, xmm10
                    vaddss  xmm2, xmm4, xmm0
                    vandps  xmm6, xmm6, xmm13
                    vaddss  xmm3, xmm2, xmm1
                    vmulss  xmm0, xmm6, xmm12
                    vaddss  xmm1, xmm3, xmm0
                    vcomiss xmm1, xmm14
                  }
                  if ( v74 )
                    break;
                  ++v67;
                  _RAX = (vec3_t *)((char *)_RAX + 16);
                  v74 = v67 <= (unsigned int)frustumPlaneCount;
                  if ( v67 >= frustumPlaneCount )
                    goto LABEL_58;
                }
              }
            }
          }
          v29[v30] = 2;
        }
LABEL_60:
        LODWORD(v12) = localClientNum;
        v26 = v105;
        v25 = __lzcnt(v24);
      }
      while ( v25 < 0x20 );
      v21 = v123;
      v18 = v106;
      v20 = v108;
LABEL_62:
      ++v21;
      ++v20;
      v123 = v21;
      v108 = v20;
      if ( v21 >= v18 )
      {
        __asm
        {
          vmovaps xmm14, [rsp+158h+var_D8]
          vmovaps xmm13, [rsp+158h+var_C8]
          vmovaps xmm12, [rsp+158h+var_B8]
          vmovaps xmm11, [rsp+158h+var_A8]
          vmovaps xmm10, [rsp+158h+var_98]
          vmovaps xmm9, [rsp+158h+var_88]
          vmovaps xmm8, [rsp+158h+var_78]
          vmovaps xmm7, [rsp+158h+var_68]
          vmovaps xmm6, [rsp+158h+var_58]
        }
        return;
      }
    }
  }
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

__int64 __fastcall R_Umbra_CullProjectedBounds(const Bounds *bounds, double thresholdSq)
{
  __int64 result; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  xmm6, dword ptr [rcx+10h]
    vmovss  xmm8, dword ptr [rcx+14h]
    vmovaps xmm9, xmm1
  }
  HIDWORD(v48) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
    vmovss  xmm0, dword ptr [rcx]
    vmovups xmmword ptr [rsp], xmm5
  }
  HIDWORD(v49) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vsubps  xmm1, xmm5, xmm4
    vandnps xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rsp], xmm4
  }
  HIDWORD(v50) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm7
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm8, 20h ; ' '
    vsubps  xmm3, xmm2, xmm3
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm5, xmm0, xmm0
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmaxss  xmm1, xmm5, cs:__real@3f800000
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm3, xmm1
    vdivss  xmm0, xmm4, xmm2
    vcomiss xmm0, xmm9
  }
  result = 1i64;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
  return result;
}

/*
==============
R_Umbra_CullProjectedBounds_SunShadows
==============
*/
__int64 R_Umbra_CullProjectedBounds_SunShadows(const Bounds *bounds, unsigned int sceneViewType)
{
  __int64 result; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RDI = bounds;
  if ( sceneViewType - 2 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 547, ASSERT_TYPE_ASSERT, "( ( sceneViewType > SCENE_VIEW_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_SUNSHADOW_LAST ) )", "( sceneViewType ) = %u", sceneViewType) )
    __debugbreak();
  _RBX = DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold;
  if ( !DCONST_DVARFLT_r_sunShadowProjectedBoundsCullThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunShadowProjectedBoundsCullThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vmovss  xmm7, dword ptr [rdi+0Ch]
    vmovss  xmm6, dword ptr [rdi+10h]
    vmovss  xmm8, dword ptr [rdi+14h]
    vmovss  xmm9, dword ptr [rbx+28h]
  }
  HIDWORD(v54) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+40h]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
    vmovss  xmm0, dword ptr [rdi]
    vmovups xmmword ptr [rsp+40h], xmm5
  }
  HIDWORD(v55) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+40h]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vsubps  xmm1, xmm5, xmm4
    vandnps xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rsp+40h], xmm4
  }
  HIDWORD(v56) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+40h]
    vmovss  xmm3, xmm3, xmm7
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm8, 20h ; ' '
    vsubps  xmm3, xmm2, xmm3
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm5, xmm0, xmm0
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm4, xmm2, xmm1
    vmaxss  xmm1, xmm5, cs:__real@3f800000
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm3, xmm1
    vdivss  xmm4, xmm4, xmm2
    vmulss  xmm0, xmm9, xmm9
    vcomiss xmm4, xmm0
  }
  result = 1i64;
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
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
  Umbra::OcclusionBuffer::VisibilityTestResult v51; 
  __int64 v54; 
  Umbra::Vector3 mx; 
  Umbra::Vector3 mn; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  Bounds bounds; 

  if ( !sceneViewType )
  {
    OcclusionBuffer = R_Umbra_GetOcclusionBuffer(0, viewInfoIndex);
    DpvsView = R_GetDpvsView(viewInfoIndex, 0);
    frustumPlaneCount = DpvsView->frustumPlaneCount;
    frustumPlanes = DpvsView->frustumPlanes;
    if ( !scene.sceneVolumetricCount )
      return;
    sceneVolumetricVisData = scene.sceneVolumetricVisData;
    sceneVolumetricCount = scene.sceneVolumetricCount;
    _RDI = &scene.sceneVolumetrics[0].volumetric.obb.xAxis.v[2];
    __asm
    {
      vmovaps [rsp+0F0h+var_48+8], xmm6
      vmovaps [rsp+0F0h+var_58+8], xmm7
    }
    while ( 1 )
    {
      if ( !*sceneVolumetricVisData )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-8]
          vmovss  xmm6, dword ptr [rdi-10h]
          vmovss  xmm7, dword ptr [rdi-0Ch]
        }
        HIDWORD(v57) = 0;
        HIDWORD(v58) = 0;
        HIDWORD(v59) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rbp-49h]
          vmovups xmm3, xmmword ptr [rbp-39h]
          vmovups xmm4, xmmword ptr [rbp-29h]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rdi+4]
          vinsertps xmm5, xmm5, dword ptr [rdi-4], 10h
          vinsertps xmm5, xmm5, dword ptr [rdi], 20h ; ' '
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdi+8], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+0Ch], 20h ; ' '
          vmovss  xmm0, dword ptr [rdi+10h]
          vmovss  xmm4, xmm4, xmm0
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
          vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
          vandnps xmm1, xmm0, xmm5
          vmovups xmmword ptr [rbp-39h], xmm3
          vandnps xmm3, xmm0, xmm3
          vmovups xmmword ptr [rbp-29h], xmm4
          vandnps xmm4, xmm0, xmm4
          vbroadcastss xmm0, dword ptr [rdi+1Ch]
          vmulps  xmm2, xmm0, xmm1
          vbroadcastss xmm1, dword ptr [rdi+20h]
          vmulps  xmm0, xmm1, xmm3
          vbroadcastss xmm1, dword ptr [rdi+24h]
          vaddps  xmm3, xmm0, xmm2
          vmulps  xmm0, xmm1, xmm4
          vaddps  xmm2, xmm0, xmm3
          vmovups xmmword ptr [rbp-49h], xmm5
          vmovss  xmm5, dword ptr [rdi-14h]
          vshufps xmm3, xmm2, xmm2, 55h ; 'U'
          vshufps xmm4, xmm2, xmm2, 0AAh ; 'ª'
          vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm3
          vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm4
          vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm2
          vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm5
          vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm6
          vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm7
        }
        if ( OcclusionBuffer )
        {
          __asm
          {
            vaddss  xmm0, xmm5, xmm2
            vaddss  xmm1, xmm6, xmm3
            vmovss  [rbp+57h+mx.x], xmm0
            vmovss  [rbp+57h+mx.y], xmm1
            vaddss  xmm0, xmm7, xmm4
            vsubss  xmm1, xmm5, xmm2
            vmovss  [rbp+57h+mx.z], xmm0
            vmovss  [rbp+57h+mn.x], xmm1
            vsubss  xmm0, xmm6, xmm3
            vsubss  xmm1, xmm7, xmm4
            vmovss  [rbp+57h+mn.y], xmm0
            vmovss  [rbp+57h+mn.z], xmm1
          }
          v51 = Umbra::OcclusionBuffer::testAABBVisibility(OcclusionBuffer, &mn, &mx, 0, NULL);
          if ( v51 == HIDDEN )
            goto LABEL_13;
          if ( v51 != VISIBLE && v51 != 3 )
          {
            LODWORD(v54) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v54) )
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
      if ( !--sceneVolumetricCount )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0F0h+var_58+8]
          vmovaps xmm6, [rsp+0F0h+var_48+8]
        }
        return;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1673, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_CullVolumetricEntites: unsupported umbra view type %d", sceneViewType) )
    __debugbreak();
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
  Umbra::Tome *v6; 
  __int64 v7; 
  int v8; 
  const unsigned int *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v14; 
  int v15; 
  int ObjectUserIDs; 
  __int64 v17; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int *reflectionProbeVisData; 
  unsigned int v26; 
  unsigned int clutterCollectionCount; 
  GfxClutterCollection *clutterCollections; 
  unsigned int v29; 
  Umbra::OcclusionBuffer *v30; 
  unsigned __int16 *p_smodelCollectionIndex; 
  unsigned __int64 v32; 
  Umbra::OcclusionBuffer::VisibilityTestResult v44; 
  bool v45; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  unsigned int maxBspSurfaceId; 
  unsigned int minBspSurfaceId; 
  unsigned int v53; 
  int v54; 
  unsigned int v56; 
  Umbra::Vector3 mn; 
  Umbra::Vector3 mx; 
  unsigned int ids[4096]; 

  v6 = (Umbra::Tome *)umbraTome;
  v7 = sceneViewType;
  v8 = numObjects;
  *(_QWORD *)&mn.x = umbraTome;
  v9 = objIndexArray;
  *(_QWORD *)&mx.x = occlussionBuffer;
  if ( !umbraTome && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 881, ASSERT_TYPE_ASSERT, "(umbraTome)", (const char *)&queryFormat, "umbraTome") )
    __debugbreak();
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 882, ASSERT_TYPE_ASSERT, "(numObjects >= 0)", (const char *)&queryFormat, "numObjects >= 0") )
    __debugbreak();
  v53 = 0;
  Sys_ProfBeginNamedEvent(0xFF8B4513, "Umbra Fill Vis Buffers");
  LODWORD(v10) = 0;
  v11 = (v8 + 31) >> 5;
  _ER14 = 0;
  v56 = v11;
  v54 = 0;
  if ( v11 )
    _ER14 = *v9;
  minBspSurfaceId = -1;
  maxBspSurfaceId = 0;
  while ( _ER14 )
  {
LABEL_14:
    __asm { tzcnt   ecx, r14d }
    v14 = _ECX + 32 * v10;
    v15 = 1 << _ECX;
    if ( (_ER14 & (1 << _ECX)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 107, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    _ER14 &= ~v15;
    if ( v14 >= v8 )
      goto LABEL_73;
    ObjectUserIDs = Umbra::Tome::getObjectUserIDs(v6, v14, ids, 4096);
    v17 = ObjectUserIDs;
    if ( ObjectUserIDs < 0 || (unsigned __int64)ObjectUserIDs > 0x1000 )
    {
      LODWORD(v50) = 4096;
      LODWORD(v48) = ObjectUserIDs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 902, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numSubObjIDs ) && ( numSubObjIDs ) <= ( ( sizeof( *array_counter( subObjIDs ) ) + 0 ) )", "numSubObjIDs not in [0, ARRAY_COUNT( subObjIDs )]\n\t%i not in [%i, %i]", v48, 0i64, v50) )
        __debugbreak();
    }
    v18 = 0i64;
    v19 = (int)v17 <= 0;
    v20 = v17;
    v9 = objIndexArray;
    if ( !v19 )
    {
      v53 += v20;
      v21 = minBspSurfaceId;
      v22 = maxBspSurfaceId;
      while ( 1 )
      {
        v23 = ids[v18] & 0xFFFFFF;
        v24 = ids[v18] & 0x70000000;
        if ( v24 > 0x40000000 )
        {
          if ( v24 == 1342177280 )
          {
            if ( (unsigned int)v23 > rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount )
            {
              LODWORD(v50) = rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount;
              LODWORD(v49) = ids[v18] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 952, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount)", "%s\n\tUmbra reflection probe (%d) exceeds world reflection probe count (%d).  Was this map compiled with only ents, even though a reflection probe change was made?", "subObjIDIndex <= rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount", v49, v50) )
                __debugbreak();
            }
            if ( (_DWORD)v7 )
              goto LABEL_71;
            reflectionProbeVisData = rgp.world->dpvs.reflectionProbeVisData;
          }
          else
          {
            if ( v24 != 1610612736 )
              goto LABEL_58;
            if ( (unsigned int)v23 > rgp.world->draw.decalVolumeCollectionCount )
            {
              LODWORD(v50) = rgp.world->draw.decalVolumeCollectionCount;
              LODWORD(v49) = ids[v18] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 971, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount)", "%s\n\tUmbra decal (%d) exceeds world decal count (%d).  Was this map compiled with only ents, even though a decal change was made?", "subObjIDIndex <= rgp.world->draw.decalVolumeCollectionCount", v49, v50) )
                __debugbreak();
            }
            if ( (_DWORD)v7 )
              goto LABEL_71;
            reflectionProbeVisData = rgp.world->dpvs.decalVisData;
          }
          goto LABEL_70;
        }
        if ( v24 == 0x40000000 )
          break;
        if ( !v24 )
        {
          if ( rg.drawWorld )
          {
            if ( (unsigned int)v23 >= rgp.world->models->surfaceCount )
            {
              LODWORD(v50) = rgp.world->models->surfaceCount;
              LODWORD(v49) = ids[v18] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 918, ASSERT_TYPE_ASSERT, "(sortedSubObjIDIndex < rgp.world->models[0].surfaceCount)", "%s\n\tUmbra surface ID (%d) exceeds world surface count (%d).  Was this map compiled with only ents, even though a world BSP change was made?", "sortedSubObjIDIndex < rgp.world->models[0].surfaceCount", v49, v50) )
                __debugbreak();
            }
            rgp.world->dpvs.surfaceVisData[v7][(unsigned __int64)(unsigned int)v23 >> 5] |= 0x80000000 >> (v23 & 0x1F);
            if ( v21 > (unsigned int)v23 )
              v21 = v23;
            if ( (unsigned int)v23 > v22 )
              v22 = v23;
          }
          goto LABEL_71;
        }
        if ( v24 == 0x10000000 )
        {
          if ( rg.drawSModels )
          {
            if ( rg.useSortedStaticModelReindex )
              v26 = rgp.world->dpvs.sortedSmodelIndices[v23];
            else
              v26 = ids[v18] & 0xFFFFFF;
            if ( (unsigned int)v23 > rgp.world->smodels.collectionCount )
            {
              LODWORD(v50) = rgp.world->smodels.collectionCount;
              LODWORD(v49) = ids[v18] & 0xFFFFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 938, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->smodels.collectionCount)", "%s\n\tUmbra static model (%d) exceeds world model count (%d).  Was this map compiled with only ents, even though a misc_model change was made?", "subObjIDIndex <= rgp.world->smodels.collectionCount", v49, v50) )
                __debugbreak();
            }
            rgp.world->dpvs.smodelVisData[v7][(unsigned __int64)v26 >> 5] |= 0x80000000 >> (v26 & 0x1F);
          }
          goto LABEL_71;
        }
        if ( v24 != 805306368 )
        {
LABEL_58:
          LODWORD(v48) = ids[v18] & 0x70000000;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled Umbra object type %d", v48) )
            __debugbreak();
          goto LABEL_71;
        }
        if ( (unsigned int)v23 > rgp.world->draw.volumetrics.volumetricCount )
        {
          LODWORD(v50) = rgp.world->draw.volumetrics.volumetricCount;
          LODWORD(v49) = ids[v18] & 0xFFFFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 961, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount)", "%s\n\tUmbra volumetric (%d) exceeds world volumetric count (%d).  Was this map compiled with only ents, even though a volumetric change was made?", "subObjIDIndex <= rgp.world->draw.volumetrics.volumetricCount", v49, v50) )
            __debugbreak();
        }
        if ( !(_DWORD)v7 )
        {
          reflectionProbeVisData = rgp.world->dpvs.volumetricVisData;
LABEL_70:
          reflectionProbeVisData[(unsigned __int64)(unsigned int)v23 >> 5] |= 0x80000000 >> (v23 & 0x1F);
        }
LABEL_71:
        if ( ++v18 >= v20 )
        {
          v9 = objIndexArray;
          maxBspSurfaceId = v22;
          LODWORD(v10) = v54;
          minBspSurfaceId = v21;
          v11 = v56;
          goto LABEL_10;
        }
      }
      if ( (unsigned int)v23 > rgp.world->primaryLightCount )
      {
        LODWORD(v50) = rgp.world->primaryLightCount;
        LODWORD(v49) = ids[v18] & 0xFFFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 944, ASSERT_TYPE_ASSERT, "(subObjIDIndex <= rgp.world->primaryLightCount)", "%s\n\tUmbra primary light (%d) exceeds world primary light count (%d).  Was this map compiled with only ents, even though a primary light change was made?", "subObjIDIndex <= rgp.world->primaryLightCount", v49, v50) )
          __debugbreak();
      }
      if ( (_DWORD)v7 )
        goto LABEL_71;
      reflectionProbeVisData = rgp.world->dpvs.primaryLightVisData;
      goto LABEL_70;
    }
LABEL_10:
    v6 = *(Umbra::Tome **)&mn.x;
    v8 = numObjects;
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    v54 = v10;
    if ( (unsigned int)v10 >= v11 )
      break;
    _ER14 = v9[v10];
    if ( _ER14 )
      goto LABEL_14;
  }
LABEL_73:
  R_Umbra_MergeStalticModelCollectionVisibility(v7);
  if ( !(_DWORD)v7 && r_st_clutterEnable->current.enabled )
  {
    clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
    clutterCollections = rgp.world->smodels.clutterCollections;
    R_GP_ClearClutterCollectionVisData(0, clutterCollectionCount);
    v29 = 0;
    if ( clutterCollectionCount )
    {
      v30 = *(Umbra::OcclusionBuffer **)&mx.x;
      p_smodelCollectionIndex = &clutterCollections->smodelCollectionIndex;
      __asm { vmovaps [rsp+40E8h+var_48], xmm6 }
      while ( 1 )
      {
        v32 = *p_smodelCollectionIndex;
        _RCX = 3 * v32;
        _RDX = rgp.world->smodels.collectionBounds;
        if ( v30 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rdx+rcx*8]
            vaddss  xmm0, xmm6, dword ptr [rdx+rcx*8+0Ch]
            vmovss  xmm5, dword ptr [rdx+rcx*8+4]
            vmovss  xmm3, dword ptr [rdx+rcx*8+8]
            vsubss  xmm1, xmm6, dword ptr [rdx+rcx*8+0Ch]
            vmovss  [rsp+40E8h+mx.x], xmm0
            vaddss  xmm0, xmm5, dword ptr [rdx+rcx*8+10h]
            vmovss  [rsp+40E8h+mx.y], xmm0
            vaddss  xmm0, xmm3, dword ptr [rdx+rcx*8+14h]
            vmovss  [rsp+40E8h+mx.z], xmm0
            vsubss  xmm0, xmm5, dword ptr [rdx+rcx*8+10h]
            vmovss  [rsp+40E8h+mn.x], xmm1
            vsubss  xmm1, xmm3, dword ptr [rdx+rcx*8+14h]
            vmovss  [rsp+40E8h+mn.y], xmm0
            vmovss  [rsp+40E8h+mn.z], xmm1
          }
          v44 = Umbra::OcclusionBuffer::testAABBVisibility(v30, &mn, &mx, 0, NULL);
          if ( v44 == HIDDEN )
            goto LABEL_85;
          if ( v44 != VISIBLE && v44 != 3 )
          {
            LODWORD(v48) = v44;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(281): unhandled case %d in switch statement", v48) )
              __debugbreak();
          }
        }
        if ( !R_ST_ClutterCollectionEnabled(v29) )
        {
LABEL_85:
          v45 = 0;
          goto LABEL_86;
        }
        v45 = 1;
        rgp.world->dpvs.smodelVisData[0][v32 >> 5] |= 0x80000000 >> (v32 & 0x1F);
LABEL_86:
        R_GP_UpdateClutterCollectionVisData(0, v29++, v45);
        p_smodelCollectionIndex += 6;
        if ( v29 >= clutterCollectionCount )
        {
          LODWORD(v7) = sceneViewType;
          __asm { vmovaps xmm6, [rsp+40E8h+var_48] }
          break;
        }
      }
    }
  }
  R_Umbra_MergeBspSurfaceAndTransientVisibility(v7, minBspSurfaceId, maxBspSurfaceId);
  Sys_ProfEndNamedEvent();
  return v53;
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
  __m256i v5; 
  __m256i v6; 
  Image_SetupParams params; 

  result = s_umbraOcclusionSceneImage;
  if ( !s_umbraOcclusionSceneImage )
  {
    v5.m256i_i32[2] = 1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v6.m256i_i64[0] = 0i64;
    __asm { vmovdqu xmmword ptr [rsp+0A8h+var_68+8], xmm0 }
    *(__int64 *)((char *)&v5.m256i_i64[1] + 4) = 1i64;
    v6.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rsp+0A8h+var_68] }
    v5.m256i_i64[0] = 0x4000000040i64;
    v5.m256i_i32[5] = 4098;
    v5.m256i_i32[6] = 3;
    __asm
    {
      vmovups ymm0, [rsp+0A8h+var_88]
      vmovups ymmword ptr [rsp+0A8h+params.width], ymm0
      vmovups ymmword ptr [rsp+0A8h+params.customAllocFunc], ymm1
    }
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
  int v13; 
  unsigned int v15; 
  unsigned int v17; 
  const DpvsView *DpvsView; 
  int frustumPlaneCount; 
  int v21; 
  bool v23; 
  __int64 result; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  v13 = -1;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  _RBX = bounds;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  v15 = sceneViewType - rg.firstCachedSunShadowPartition;
  __asm
  {
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
  }
  if ( v15 == 1 )
    v13 = 12;
  if ( v15 == 2 )
    v13 = 22;
  if ( v13 == -1 )
  {
LABEL_19:
    result = 1i64;
  }
  else
  {
    if ( !projectedBoundsTest || sceneViewType <= 1 || !R_Umbra_CullProjectedBounds_SunShadows(bounds, sceneViewType) )
    {
      __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v17 = v13;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        DpvsView = R_GetDpvsView(v17);
        frustumPlaneCount = DpvsView->frustumPlaneCount;
        if ( !frustumPlaneCount )
          break;
        v21 = 0;
        _RAX = DpvsView->frustumPlanes;
        v23 = frustumPlaneCount == 0;
        if ( frustumPlaneCount <= 0 )
        {
LABEL_15:
          if ( s_umbraQueryJobCount[v17] > 0 || R_Umbra_IsBoxVisible(_RBX, s_umbraOcclusionBuffer[v17]) )
            goto LABEL_19;
        }
        else
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rbx+0Ch]
            vmovss  xmm9, dword ptr [rbx]
            vmovss  xmm10, dword ptr [rbx+4]
            vmovss  xmm11, dword ptr [rbx+10h]
            vmovss  xmm12, dword ptr [rbx+8]
            vmovss  xmm13, dword ptr [rbx+14h]
          }
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rax]
              vmovss  xmm5, dword ptr [rax+4]
              vmovss  xmm6, dword ptr [rax+8]
              vandps  xmm0, xmm1, xmm7
              vmulss  xmm2, xmm0, xmm8
              vmulss  xmm0, xmm9, xmm1
              vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm10, xmm5
              vmulss  xmm1, xmm12, xmm6
              vaddss  xmm4, xmm3, xmm2
              vandps  xmm5, xmm5, xmm7
              vmulss  xmm0, xmm5, xmm11
              vaddss  xmm2, xmm4, xmm0
              vandps  xmm6, xmm6, xmm7
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm6, xmm13
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, xmm14
            }
            if ( v23 )
              break;
            ++v21;
            ++_RAX;
            v23 = v21 <= (unsigned int)frustumPlaneCount;
            if ( v21 >= frustumPlaneCount )
              goto LABEL_15;
          }
        }
        ++v17;
      }
      while ( v17 - v13 < 0xA );
    }
    result = 0i64;
  }
  __asm { vmovaps xmm14, [rsp+0B8h+var_98] }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return result;
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
void R_Umbra_MergeStalticModelCollectionVisibility(unsigned int sceneViewType)
{
  __int64 v1; 
  GfxWorld *world; 
  unsigned int *collectionVisData; 
  __int64 v4; 
  unsigned int *v5; 
  unsigned __int64 v6; 
  unsigned int collectionVisDataCount; 
  unsigned int smodelVisDataCount; 

  v1 = sceneViewType;
  if ( rgp.world->smodels.collectionVisData && r_smodelsCollectionTransientVisibility->current.enabled )
  {
    Profile_Begin(204);
    world = rgp.world;
    if ( rgp.world->smodels.collectionVisDataCount != rgp.world->dpvs.smodelVisDataCount )
    {
      smodelVisDataCount = rgp.world->dpvs.smodelVisDataCount;
      collectionVisDataCount = rgp.world->smodels.collectionVisDataCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 763, ASSERT_TYPE_ASSERT, "( rgp.world->smodels.collectionVisDataCount ) == ( rgp.world->dpvs.smodelVisDataCount )", "%s == %s\n\t%u, %u", "rgp.world->smodels.collectionVisDataCount", "rgp.world->dpvs.smodelVisDataCount", collectionVisDataCount, smodelVisDataCount) )
        __debugbreak();
      world = rgp.world;
    }
    collectionVisData = world->smodels.collectionVisData;
    v4 = world->smodels.collectionVisDataCount & 0xFFFFFFE0;
    v5 = world->dpvs.smodelVisData[v1];
    v6 = (unsigned __int64)&collectionVisData[v4];
    if ( (unsigned __int64)collectionVisData < v6 )
    {
      _R9 = collectionVisData + 16;
      _RDX = (char *)v5 - (char *)collectionVisData;
      do
      {
        __asm
        {
          vmovups ymm1, ymmword ptr [r9-20h]
          vandps  ymm4, ymm1, ymmword ptr [rdx+r9-20h]
          vmovups ymm1, ymmword ptr [rdx+r9]
          vandps  ymm3, ymm1, ymmword ptr [r9]
          vmovups ymm1, ymmword ptr [r9+20h]
          vandps  ymm2, ymm1, ymmword ptr [rdx+r9+20h]
          vmovups ymm1, ymmword ptr [r9-40h]
          vandps  ymm1, ymm1, ymmword ptr [rdx+r9-40h]
          vmovups ymmword ptr [rdx+r9-40h], ymm1
          vmovups ymmword ptr [rdx+r9-20h], ymm4
          vmovups ymmword ptr [rdx+r9], ymm3
          vmovups ymmword ptr [rdx+r9+20h], ymm2
        }
        _R9 += 32;
      }
      while ( (unsigned __int64)(_R9 - 16) < v6 );
      world = rgp.world;
    }
    if ( (unsigned int)v4 < world->dpvs.smodelVisDataCount )
    {
      do
      {
        v5[v4] &= collectionVisData[v4];
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < rgp.world->dpvs.smodelVisDataCount );
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
R_Umbra_QueryStaticCamera
==============
*/
void R_Umbra_QueryStaticCamera(const GfxViewParms *viewParms, const GfxMatrix *viewProjMatrix, unsigned int width, unsigned int height, unsigned int smpFrame, unsigned int frameCount, unsigned int viewInfoIndex, bool requireOcclusionUpdate)
{
  bool reuseOcclusion; 
  bool v25; 
  int queryMode; 
  float queryDistance; 
  float v51; 
  float v52; 
  float v53; 
  vec3_t lightDir; 
  vec3_t visibilityOrigin; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RSI = viewParms;
  reuseOcclusion = !requireOcclusionUpdate && (((unsigned __int8)viewInfoIndex ^ (unsigned __int8)~(_BYTE)frameCount) & 1) == 0;
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2128, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.cappedLodScale; r_globals_t rg
    vmovss  xmm6, cs:?rg@@3Ur_globals_t@@A.umbraAccurateOcclusionThreshold; r_globals_t rg
  }
  if ( rgp.world->umbraTome )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rcx+0Ch]
      vxorps  xmm0, xmm0, xmm0
      vcmpltss xmm1, xmm6, xmm0
      vblendvps xmm3, xmm6, xmm2, xmm1
      vmulss  xmm0, xmm3, xmm7
      vcomiss xmm0, xmm2
      vmovss  [rsp+128h+var_98], xmm3
    }
  }
  v25 = !_RSI->camera.visibilityOffsetApplyToRefPoint;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.umbraMinObjectContribution; r_globals_t rg
    vmaxss  xmm1, xmm0, cs:?rg@@3Ur_globals_t@@A.umbraWorstCaseMinObjectContribution; r_globals_t rg
    vmulss  xmm3, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbp
  }
  queryMode = r_umbra->current.integer;
  _RAX = r_umbraDistance;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r14
    vmulss  xmm1, xmm2, xmm0
    vmovss  xmm0, dword ptr [rax+28h]
    vmaxss  xmm9, xmm0, dword ptr [rsi+160h]
    vmovss  xmm0, dword ptr [rsi+108h]
    vmovss  xmm2, dword ptr [rsi+104h]
    vaddss  xmm5, xmm2, dword ptr [rsi+158h]
    vdivss  xmm8, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsi+100h]
    vaddss  xmm3, xmm0, dword ptr [rsi+15Ch]
    vaddss  xmm4, xmm1, dword ptr [rsi+154h]
    vmovss  dword ptr [rsp+128h+visibilityOrigin+8], xmm3
    vmovss  dword ptr [rsp+128h+visibilityOrigin], xmm4
    vmovss  dword ptr [rsp+128h+visibilityOrigin+4], xmm5
  }
  if ( v25 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+128h+lightDir], xmm1
      vmovss  dword ptr [rsp+128h+lightDir+4], xmm2
      vmovss  dword ptr [rsp+128h+lightDir+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+128h+lightDir], xmm4
      vmovss  dword ptr [rsp+128h+lightDir+4], xmm5
      vmovss  dword ptr [rsp+128h+lightDir+8], xmm3
      vmovaps xmm1, xmm4
      vmovaps xmm2, xmm5
      vmovaps xmm0, xmm3
    }
  }
  if ( !r_umbraAllowGameVisibilityOffset->current.enabled )
  {
    __asm { vucomiss xmm1, xmm4 }
    if ( r_umbraAllowGameVisibilityOffset->current.enabled )
      goto LABEL_22;
    __asm { vucomiss xmm2, xmm5 }
    if ( r_umbraAllowGameVisibilityOffset->current.enabled )
      goto LABEL_22;
    __asm { vucomiss xmm0, xmm3 }
    if ( r_umbraAllowGameVisibilityOffset->current.enabled )
    {
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2160, ASSERT_TYPE_ASSERT, "(Vec3Compare( origin, visibilityOrigin ))", (const char *)&queryFormat, "Vec3Compare( origin, visibilityOrigin )") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  [rsp+128h+var_E0], xmm8
    vmovss  [rsp+128h+var_E8], xmm6
    vmovss  [rsp+128h+var_F0], xmm7
    vmovss  [rsp+128h+queryDistance], xmm9
  }
  R_Umbra_QueryStaticVisibility(viewProjMatrix, &lightDir, &visibilityOrigin, &lightDir, &lightDir, queryDistance, 0, v51, v52, v53, NULL, 0, (const UmbraQueryMode)queryMode, 0, smpFrame, viewInfoIndex, reuseOcclusion);
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
R_Umbra_QueryStaticSunShadows
==============
*/

void __fastcall R_Umbra_QueryStaticSunShadows(const GfxViewInfo *viewInfo, GfxSunShadow *sunShadow, double _XMM2_8)
{
  GfxSunShadow *v8; 
  UmbraQueryMode Mode; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 sceneViewType; 
  __int64 v19; 
  int integer; 
  UmbraQueryMode queryMode; 
  __int64 v41; 
  int v42; 
  bool v43; 
  __int64 queryDistance; 
  float queryDistancea; 
  __int64 ignoreCameraPosition; 
  float v47; 
  float v48; 
  float v49; 
  int viewInfoIndex; 
  unsigned int v51; 
  unsigned int lastCachedSunShadowPartition; 
  __int64 v53; 
  vec4_t out; 
  vec3_t viewOrigin; 
  vec4_t vec; 

  v8 = sunShadow;
  if ( rg.umbraShadowCasters )
  {
    if ( !viewInfo->useCachedSunShadow )
    {
      v41 = 3i64;
      v42 = 1;
      while ( 2 )
      {
        switch ( v42 )
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
            v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2109, ASSERT_TYPE_ASSERT, "(!R_Umbra_UseForStatics( SCENE_VIEW_SUNSHADOW_FIRST + partition ))", (const char *)&queryFormat, "!R_Umbra_UseForStatics( SCENE_VIEW_SUNSHADOW_FIRST + partition )");
LABEL_36:
            if ( v43 )
              __debugbreak();
$LN14_156:
            ++v42;
            if ( !--v41 )
              return;
            continue;
          default:
            LODWORD(queryDistance) = v42;
            v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", queryDistance);
            goto LABEL_36;
        }
      }
    }
    Mode = R_Umbra_ShadowQueryMode();
    firstCachedSunShadowPartition = v8->firstCachedSunShadowPartition;
    lastCachedSunShadowPartition = v8->lastCachedSunShadowPartition;
    v51 = firstCachedSunShadowPartition;
    v53 = Mode;
    if ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition )
    {
      __asm
      {
        vmovaps [rsp+178h+var_48], xmm6
        vmovaps [rsp+178h+var_58], xmm7
        vmovaps [rsp+178h+var_68], xmm8
        vmovaps [rsp+178h+var_78], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vmovaps [rsp+178h+var_88], xmm10
        vmovss  xmm10, cs:__real@358637bd
        vxorps  xmm8, xmm8, xmm8
      }
      do
      {
        if ( !R_IsCachedSunShadowPartition(v8, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v14 = 0;
        v15 = firstCachedSunShadowPartition - v8->firstCachedSunShadowPartition;
        v16 = (__int64)&v8->partitionCache[v15];
        if ( v8->partitionCache[v15].gfxCachedSunShadowOverlapCount )
        {
          while ( 2 )
          {
            v17 = 864i64 * v14;
            sceneViewType = *(unsigned int *)(v17 + v16 + 32);
            v19 = *(_QWORD *)(v17 + v16 + 16);
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
                if ( v53 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 2090, ASSERT_TYPE_ASSERT, "(queryMode != UmbraQueryMode::R_UMBRAMODE_PORTALS)", (const char *)&queryFormat, "queryMode != UmbraQueryMode::R_UMBRAMODE_PORTALS") )
                  __debugbreak();
                if ( (unsigned int)sceneViewType >= 0x21 )
                {
                  LODWORD(ignoreCameraPosition) = 33;
                  LODWORD(queryDistance) = sceneViewType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 694, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", queryDistance, ignoreCameraPosition) )
                    __debugbreak();
                }
                s_umbraOcclusionBuffer[sceneViewType] = NULL;
                if ( !*(_BYTE *)(v17 + v16 + 44) )
                  goto $LN5_128;
                integer = r_umbraShadows->current.integer;
                if ( !integer )
                  goto LABEL_22;
                if ( integer == 1 )
                {
                  queryMode = R_UMBRAMODE_SCENE_COUNT;
                }
                else
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected Umbra Shadow Query Mode!") )
                    __debugbreak();
LABEL_22:
                  queryMode = R_UMBRAMODE_FRUSTUM_ONLY;
                }
                __asm { vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.umbraShadowAccurateOcclusionThreshold; r_globals_t rg }
                R_SunShadow_GetMapSize();
                R_SunShadow_GetMapSize();
                __asm
                {
                  vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.umbraMinShadowObjectContribution; r_globals_t rg
                  vxorps  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm0, xmm0
                  vcvtsi2ss xmm2, xmm2, rax
                  vdivss  xmm6, xmm1, xmm2
                  vmovups xmm2, cs:__xmm@3f8000003f8000000000000000000000
                  vmovups xmmword ptr [rsp+178h+vec], xmm2
                }
                MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(v19 + 304), &out);
                __asm
                {
                  vdivss  xmm1, xmm9, dword ptr [rsp+178h+out+0Ch]
                  vshufps xmm1, xmm1, xmm1, 0
                  vmulps  xmm2, xmm1, xmmword ptr [rsp+178h+out]
                  vaddss  xmm0, xmm2, dword ptr [r13+170h]
                }
                viewInfoIndex = viewInfo->viewInfoIndex;
                __asm
                {
                  vmovups xmmword ptr [rsp+178h+out], xmm2
                  vmovss  xmm1, dword ptr [rsp+178h+out+4]
                  vaddss  xmm2, xmm1, dword ptr [r13+174h]
                  vmovss  [rsp+178h+var_130], xmm6
                  vmovss  [rsp+178h+var_138], xmm7
                  vmovss  [rsp+178h+var_140], xmm10
                  vmovss  dword ptr [rsp+178h+out], xmm0
                  vmovss  xmm0, dword ptr [rsp+178h+out+8]
                  vaddss  xmm1, xmm0, dword ptr [r13+178h]
                  vmovss  [rsp+178h+queryDistance], xmm8
                  vmovss  dword ptr [rsp+178h+out+4], xmm2
                  vmovss  dword ptr [rsp+178h+out+8], xmm1
                  vmovss  dword ptr [rsp+178h+viewOrigin], xmm8
                  vmovss  dword ptr [rsp+178h+viewOrigin+4], xmm8
                  vmovss  dword ptr [rsp+178h+viewOrigin+8], xmm8
                }
                R_Umbra_QueryStaticVisibility((const GfxMatrix *)(v19 + 240), &viewOrigin, (const vec3_t *)&out, (const vec3_t *)&out, (const vec3_t *)(v19 + 8), queryDistancea, 1, v47, v48, v49, NULL, 0, queryMode, sceneViewType, 2u, viewInfoIndex, 0);
                *(_DWORD *)(v19 + 560) = frontEndDataOut->frameCount;
$LN5_128:
                if ( ++v14 < *(_DWORD *)(v16 + 4) )
                  continue;
                firstCachedSunShadowPartition = v51;
                v8 = sunShadow;
                break;
              default:
                LODWORD(queryDistance) = *(_DWORD *)(v17 + v16 + 32);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", queryDistance) )
                  __debugbreak();
                goto $LN5_128;
            }
            break;
          }
        }
        v51 = ++firstCachedSunShadowPartition;
      }
      while ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition );
      __asm
      {
        vmovaps xmm10, [rsp+178h+var_88]
        vmovaps xmm9, [rsp+178h+var_78]
        vmovaps xmm8, [rsp+178h+var_68]
        vmovaps xmm7, [rsp+178h+var_58]
        vmovaps xmm6, [rsp+178h+var_48]
      }
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
  void *v19; 
  signed int v26; 
  unsigned int v55; 
  unsigned int v56; 
  WorkerCmdType v57; 
  unsigned int v58; 
  UmbraQueryMode v59; 
  Umbra::OcclusionBuffer *v60; 
  __int64 flags; 
  const Umbra::Tome *tome; 
  tmat44_t<vec4_t> out; 
  Umbra::Vector3 position; 
  int v78; 
  __int64 v83; 
  unsigned int v84; 
  unsigned int v85; 
  int v86; 
  int v87; 
  UmbraQueryMode v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  bool v92; 
  Umbra::Vector3 lightDira; 
  tmat44_t<vec4_t> in1; 
  Umbra::CameraTransform camera; 
  Umbra::QueryExt v96; 
  char v98; 

  v19 = alloca(v17);
  __asm { vmovaps [rsp+19390h+var_30], xmm6 }
  _RBX = distanceReferencePoint;
  _RSI = visibilityOrigin;
  _R14 = viewOrigin;
  *(_QWORD *)&lightDira.x = userClipPlanes;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1803, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  if ( !s_umbraQueryJobLimit[sceneViewType][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1804, ASSERT_TYPE_ASSERT, "(s_umbraQueryJobLimit[sceneViewType][0] != 0)", (const char *)&queryFormat, "s_umbraQueryJobLimit[sceneViewType][0] != 0") )
    __debugbreak();
  if ( !s_umbraQueryJobLimit[sceneViewType][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1805, ASSERT_TYPE_ASSERT, "(s_umbraQueryJobLimit[sceneViewType][1] != 0)", (const char *)&queryFormat, "s_umbraQueryJobLimit[sceneViewType][1] != 0") )
    __debugbreak();
  tome = rgp.world->umbraTome;
  _RCX = r_umbraQueryParts;
  __asm { vcvttss2si r8, dword ptr [rcx+28h] }
  if ( (unsigned int)_R8 > s_umbraQueryJobLimit[sceneViewType][0] )
    LODWORD(_R8) = s_umbraQueryJobLimit[sceneViewType][0];
  v86 = _R8;
  __asm { vcvttss2si r9, dword ptr [rcx+2Ch] }
  v26 = 0x10 / (unsigned int)_R8;
  if ( (signed int)s_umbraQueryJobLimit[sceneViewType][1] < (int)_R9 )
    LODWORD(_R9) = s_umbraQueryJobLimit[sceneViewType][1];
  if ( (int)_R9 < v26 )
    v26 = _R9;
  v87 = v26;
  v88 = queryMode;
  v89 = sceneViewType;
  v90 = smpFrame;
  v92 = reuseOcclusion;
  v91 = viewInfoIndex;
  if ( reuseOcclusion )
  {
    v87 = 1;
    v86 = 1;
  }
  __asm
  {
    vmovaps ymm0, cs:__ymm@00000000000000003f800000000000000000000000000000000000003f800000
    vmovups ymmword ptr [rbp+19290h+in1], ymm0
    vmovups xmm0, cs:__xmm@000000003f8000000000000000000000
    vmovups xmmword ptr [rbp+19290h+in1+20h], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm1, xmm6
    vmovss  dword ptr [rbp+19290h+in1+30h], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vxorps  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbp+19290h+in1+34h], xmm2
    vmovss  xmm0, dword ptr [r14+8]
    vxorps  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbp+19290h+in1+38h], xmm1
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [rbp+19290h+in1+3Ch], xmm2
  }
  MatrixMultiply44Aligned(&in1, &viewProjMatrix->m, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+19390h+out+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rsp+19390h+out+8]
    vmovss  dword ptr [rsp+19390h+out+8], xmm1
    vmovss  xmm2, dword ptr [rsp+19390h+out+1Ch]
    vsubss  xmm0, xmm2, dword ptr [rsp+19390h+out+18h]
    vmovss  dword ptr [rsp+19390h+out+18h], xmm0
    vmovss  xmm1, dword ptr [rbp+19290h+out+2Ch]
    vsubss  xmm2, xmm1, dword ptr [rbp+19290h+out+28h]
    vmovss  dword ptr [rbp+19290h+out+28h], xmm2
    vmovss  xmm0, dword ptr [rbp+19290h+out+3Ch]
    vsubss  xmm1, xmm0, dword ptr [rbp+19290h+out+38h]
    vmovss  dword ptr [rbp+19290h+out+38h], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vmovss  [rbp+19290h+position.x], xmm2
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rbp+19290h+position.y], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  [rbp+19290h+position.z], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+19290h+var_192E4], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rbp+19290h+var_192E0], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+19290h+var_192DC], xmm0
  }
  v78 = ignoreCameraPosition;
  __asm
  {
    vmovss  xmm0, [rbp+19290h+arg_28]
    vmovss  [rbp+19290h+var_192D4], xmm0
    vmovss  xmm1, [rbp+19290h+arg_38]
    vmovss  [rbp+19290h+var_192D0], xmm1
    vmovss  xmm0, [rbp+19290h+arg_40]
    vmovss  [rbp+19290h+var_192CC], xmm0
    vmovss  xmm1, [rbp+19290h+arg_48]
    vmovss  [rbp+19290h+var_192C8], xmm1
  }
  v83 = *(_QWORD *)&lightDira.x;
  v55 = 16;
  if ( (int)userClipPlaneCount < 16 )
    v55 = userClipPlaneCount;
  v84 = v55;
  if ( userClipPlaneCount > 0x10 )
    Com_PrintWarning(8, "R_Umbra_QueryStaticVisibility: too many user clip planes (%u > %u)", userClipPlaneCount, 16i64);
  v56 = v86 * v87;
  if ( !reuseOcclusion )
  {
    R_Umbra_ClearVisMask(sceneViewType, viewInfoIndex);
    R_Umbra_UpdateGatesForView(sceneViewType);
  }
  s_umbraQueryJobCount[sceneViewType] = v56;
  if ( sceneViewType )
  {
    if ( sceneViewType - 12 > 0x13 )
    {
      LODWORD(flags) = sceneViewType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1919, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_QueryStaticVisibility: unimplemted worker cmd for scene view %d", flags) )
        __debugbreak();
      v57 = WRKCMD_COUNT;
    }
    else
    {
      v57 = WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS;
    }
  }
  else
  {
    v57 = WRKCMD_UMBRA_QUERY_STATIC_CAMERA;
  }
  v58 = 0;
  v59 = queryMode;
  if ( queryMode != R_UMBRAMODE_PORTALS )
    s_umbraOcclusionBuffer[sceneViewType] = NULL;
  if ( v56 > 1 )
  {
    if ( !viewInfoIndex || sceneViewType )
    {
      v60 = s_umbraOcclusionBuffer[sceneViewType];
      if ( !v60 )
      {
LABEL_40:
        s_umbraOcclusionBufferWriteLock[sceneViewType] = 0;
        goto LABEL_41;
      }
    }
    else
    {
      v60 = &s_umbraCameraOcclusionBufferAlternate;
    }
    if ( !reuseOcclusion )
    {
      Umbra::OcclusionBuffer::clear(v60);
      v59 = queryMode;
    }
    goto LABEL_40;
  }
LABEL_41:
  if ( tome && v59 == R_UMBRAMODE_SCENE_COUNT )
  {
    Umbra::QueryExt::QueryExt(&v96);
    Umbra::Query::init(&v96, tome);
    Umbra::Query::setGateStates(&v96, &s_umbraGateStateVectors[sceneViewType]);
    Umbra::Query::setDebugRenderer(&v96, &s_umbraRender);
    Umbra::CameraTransform::CameraTransform(&camera);
    Umbra::CameraTransform::set(&camera, (const Umbra::Matrix4x4 *)&out, &position, DEPTHRANGE_ZERO_TO_ONE, MF_COLUMN_MAJOR);
    if ( sceneViewType - 12 > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1960, ASSERT_TYPE_ASSERT, "(sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST)", (const char *)&queryFormat, "sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST") )
      __debugbreak();
    _RAX = lightDir;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vxorps  xmm1, xmm0, xmm6
      vmovss  [rbp+19290h+lightDir.x], xmm1
      vmovss  xmm2, dword ptr [rax+4]
      vxorps  xmm0, xmm2, xmm6
      vmovss  [rbp+19290h+lightDir.y], xmm0
      vmovss  xmm1, dword ptr [rax+8]
      vxorps  xmm2, xmm1, xmm6
      vmovss  [rbp+19290h+lightDir.z], xmm2
    }
    Umbra::QueryExt::buildPlaneShadowCuller(&v96, &s_umbraShadowCullersPool[sceneViewType - 12], &camera, &lightDira, NULL, 0, NULL, 0);
    Umbra::Query::~Query(&v96);
  }
  if ( v56 )
  {
    do
    {
      v85 = v58;
      Sys_AddWorkerCmd(v57, &out);
      ++v58;
    }
    while ( v58 < v56 );
  }
  _R11 = &v98;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
R_Umbra_QueryStaticVisibilityCmd
==============
*/
void R_Umbra_QueryStaticVisibilityCmd(const void *const cmdInfo)
{
  signed __int64 v1; 
  void *v6; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v15; 
  Umbra::OcclusionBuffer *v16; 
  int v17; 
  Umbra::OcclusionBuffer *v18; 
  const char *ThreadContextName; 
  unsigned int *v21; 
  int v22; 
  const dvar_t *v23; 
  int v24; 
  int v25; 
  int v26; 
  char v27; 
  bool v28; 
  Umbra::Query::ErrorCode v37; 
  unsigned int *v38; 
  __int64 v39; 
  __int64 v40; 
  Umbra::OcclusionBuffer *v41; 
  volatile int *v42; 
  unsigned int v43; 
  volatile signed __int32 *v44; 
  int ObjectCount; 
  const unsigned int *v46; 
  const unsigned int *v47; 
  int v48; 
  float *v49; 
  int Height; 
  Umbra::OcclusionBuffer::ErrorCode Buffer; 
  float fmt; 
  float fmta; 
  float fmtb; 
  Umbra::ObjectDistanceParams *objDist; 
  float objDista; 
  __int64 threadId; 
  __int64 numThreads; 
  __int64 v64; 
  char v65; 
  unsigned int viewInfoIndex; 
  Umbra::OcclusionBuffer *other_; 
  Umbra::OcclusionBuffer *occlussionBuffer; 
  int xSplits; 
  Umbra::Tome *tome; 
  unsigned __int64 v71; 
  Umbra::OcclusionBuffer::BufferDesc desc; 
  Umbra::IndexList out; 
  Umbra::ObjectDistanceParams inObjDistanceParams; 
  Umbra::Visibility params; 
  Umbra::CameraTransform src; 
  Umbra::QueryExt v77; 
  char v82; 

  v6 = alloca(v1);
  __asm
  {
    vmovaps [rsp+193F0h+var_30], xmm6
    vmovaps [rsp+193F0h+var_40], xmm7
    vmovaps [rsp+193F0h+var_50], xmm8
    vmovaps [rsp+193F0h+var_60], xmm9
  }
  _RSI = (unsigned int *)cmdInfo;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v9 = CurrentThreadContext;
  v71 = CurrentThreadContext;
  if ( (unsigned __int64)(int)CurrentThreadContext >= THREAD_CONTEXT_TRACE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1188, ASSERT_TYPE_ASSERT, "(threadContext < ( sizeof( *array_counter( s_umbraThreadJobActive ) ) + 0 ))", (const char *)&queryFormat, "threadContext < ARRAY_COUNT( s_umbraThreadJobActive )") )
    __debugbreak();
  if ( s_umbraThreadJobActive[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1189, ASSERT_TYPE_ASSERT, "(!s_umbraThreadJobActive[threadContext])", (const char *)&queryFormat, "!s_umbraThreadJobActive[threadContext]") )
    __debugbreak();
  s_umbraThreadJobActive[v9] = 1;
  Profile_Begin(201);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Umbra Query Static Visibility");
  v10 = _RSI[31];
  v11 = _RSI[32] * _RSI[33];
  v12 = _RSI[34];
  v13 = _RSI[35];
  __asm { vmovss  xmm8, dword ptr [rsi+5Ch] }
  v65 = *((_BYTE *)_RSI + 152);
  v15 = _RSI[37];
  viewInfoIndex = v15;
  tome = rgp.world->umbraTome;
  if ( v10 >= v11 )
  {
    LODWORD(objDist) = _RSI[31];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1208, ASSERT_TYPE_ASSERT, "(unsigned)( jobIdx ) < (unsigned)( numJobs )", "jobIdx doesn't index numJobs\n\t%i not in [0, %i)", objDist, _RSI[32] * _RSI[33]) )
      __debugbreak();
  }
  if ( v10 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1209, ASSERT_TYPE_ASSERT, "( jobIdx ) <= ( 16 )", "%s <= %s\n\t%i, %i", "jobIdx", "UMBRA_MAX_QUERY_JOBS", v10, 16) )
    __debugbreak();
  if ( (unsigned int)v13 >= 0x21 )
  {
    LODWORD(threadId) = 33;
    LODWORD(objDist) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1210, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", objDist, threadId) )
      __debugbreak();
  }
  if ( v12 == 1 )
  {
    if ( !v15 || (_DWORD)v13 )
      v16 = s_umbraOcclusionBuffer[v13];
    else
      v16 = &s_umbraCameraOcclusionBufferAlternate;
  }
  else
  {
    v16 = NULL;
  }
  occlussionBuffer = v16;
  other_ = v16;
  Umbra::QueryExt::QueryExt(&v77);
  Umbra::Visibility::Visibility(&params);
  Umbra::CameraTransform::CameraTransform(&src);
  v17 = 0;
  Umbra::ObjectDistanceParams::ObjectDistanceParams(&inObjDistanceParams);
  if ( occlussionBuffer && v11 > 1 )
  {
    if ( v9 >= 8 )
    {
      ThreadContextName = Sys_GetThreadContextName((ThreadContext)v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_Umbra_GetThreadLocalOcclusionBuffer: Thread context %s has no local occlusion buffer for umbra query jobs.\n", ThreadContextName) )
        __debugbreak();
      v18 = NULL;
      other_ = NULL;
      Umbra::OcclusionBuffer::clear(NULL);
    }
    else
    {
      v18 = &s_umbraThreadLocalOcclusionBuffers[v9];
      other_ = v18;
      Umbra::OcclusionBuffer::clear(v18);
    }
  }
  else
  {
    v18 = other_;
  }
  Umbra::IndexList::IndexList(&out);
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( tome && !v65 )
  {
    Umbra::Query::init(&v77, tome);
    Umbra::Query::setGateStates(&v77, &s_umbraGateStateVectors[v13]);
    Umbra::Query::setDebugRenderer(&v77, &s_umbraRender);
    if ( !viewInfoIndex || (_DWORD)v13 )
      v21 = s_umbraVisMask[v13];
    else
      v21 = s_umbraVisMaskCameraAlternate;
    Umbra::Visibility::setOutputObjectMask(&params, v21);
    if ( v18 )
      Umbra::Visibility::setOutputBuffer(&params, v18);
    Umbra::CameraTransform::set(&src, (const Umbra::Matrix4x4 *)_RSI, (const Umbra::Vector3 *)(_RSI + 16), DEPTHRANGE_ZERO_TO_ONE, MF_COLUMN_MAJOR);
    if ( _RSI[30] )
    {
      if ( !*((_QWORD *)_RSI + 14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1255, ASSERT_TYPE_ASSERT, "(cmd->userClipPlanes)", (const char *)&queryFormat, "cmd->userClipPlanes") )
        __debugbreak();
      Umbra::CameraTransform::setUserClipPlanes(&src, *((const Umbra::Vector4 **)_RSI + 14), _RSI[30]);
    }
    xSplits = _RSI[32];
    v22 = 0;
    if ( (_DWORD)v13 == r_umbraDebugView->current.integer )
    {
      v23 = DCONST_DVARBOOL_r_draw_frustum;
      if ( !DCONST_DVARBOOL_r_draw_frustum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_draw_frustum") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v24 = (v23->current.enabled ? 0x200 : 0) | 0x10;
      if ( !r_umbraShowViewCells->current.enabled )
        v24 = v23->current.enabled ? 0x200 : 0;
      v25 = v24 | 0x20;
      if ( !r_umbraShowPortals->current.enabled )
        v25 = v24;
      v26 = v25 | 0x40;
      if ( !r_umbraShowVisibilityLines->current.enabled )
        v26 = v25;
      v22 = v26 | 0x80;
      if ( !r_umbraShowObjectBounds->current.enabled )
        v22 = v26;
      if ( r_umbraShowVisibleVolume->current.enabled )
        v22 |= 0x100u;
    }
    v17 = v22 | 2;
    v27 = 0;
    v28 = _RSI[22] == 0;
    if ( !_RSI[22] )
      v17 = v22;
    __asm
    {
      vmovss  xmm7, dword ptr [rsi+64h]
      vmovss  xmm1, dword ptr [rsi+68h]; contribution
      vcomiss xmm1, xmm9
      vcomiss xmm1, cs:__real@3f800000
    }
    if ( !_RSI[22] )
      Umbra::ObjectDistanceParams::setMinRelativeContribution(&inObjDistanceParams, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+60h]; scale
      vcomiss xmm1, xmm9
    }
    if ( !(v27 | v28) )
      Umbra::ObjectDistanceParams::setDistanceScale(&inObjDistanceParams, *(float *)&_XMM1);
    _RDX = (const Umbra::Vector3 *)(_RSI + 19);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+40h]
      vucomiss xmm0, dword ptr [rdx]
    }
    if ( v28 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+44h]
        vucomiss xmm0, dword ptr [rdx+4]
      }
      if ( v28 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+48h]
          vucomiss xmm0, dword ptr [rdx+8]
        }
        if ( v28 )
          goto LABEL_69;
      }
    }
    Umbra::ObjectDistanceParams::setReferencePoint(&inObjDistanceParams, _RDX);
    __asm
    {
      vmovss  xmm6, cs:__real@7f7fffff
      vucomiss xmm7, xmm6
    }
    if ( v28 || v12 != 1 )
    {
LABEL_69:
      if ( !v12 )
      {
        __asm { vmovss  dword ptr [rsp+193F0h+fmt], xmm8 }
        v37 = Umbra::Query::queryFrustumVisibility(&v77, v17, &params, &src, fmt, &inObjDistanceParams, v10, v11);
        goto LABEL_83;
      }
      if ( v12 != 1 )
      {
        if ( v12 == 2 )
        {
          if ( (unsigned int)(v13 - 12) > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1315, ASSERT_TYPE_ASSERT, "(sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST)", (const char *)&queryFormat, "sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST") )
            __debugbreak();
          if ( !viewInfoIndex || (_DWORD)v13 )
            v38 = s_umbraVisMask[v13];
          else
            v38 = s_umbraVisMaskCameraAlternate;
          Umbra::IndexList::setPtr(&out, (int *)v38);
          Umbra::IndexList::setCapacity(&out, 4097);
          Umbra::IndexList::setSize(&out, 0);
          v37 = Umbra::QueryExt::queryStaticShadowCasters(&v77, &s_umbraShadowCullersPool[(unsigned int)(v13 - 12)], &out, &inObjDistanceParams, v10, v11, NULL);
        }
        else
        {
          v37 = ERROR_EMPTY_BUFFER|ERROR_INVALID_STRIDE;
        }
        goto LABEL_83;
      }
    }
    else
    {
      Com_PrintWarning(8, "R_Umbra_QueryStaticVisibilityCmd: query requires base level geo - forcing accurateOcclusionThreshold to FLT_MAX");
      __asm { vmovaps xmm7, xmm6 }
    }
    __asm
    {
      vmovss  dword ptr [rsp+193F0h+objDist], xmm7
      vmovss  dword ptr [rsp+193F0h+fmt], xmm8
    }
    v37 = Umbra::Query::queryPortalVisibility(&v77, v17, &params, &src, fmta, objDista, &inObjDistanceParams, v10, v11, xSplits);
LABEL_83:
    if ( v37 )
    {
      switch ( v37 )
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
          LODWORD(objDist) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 644, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown Umbra Failure %d", objDist) )
            __debugbreak();
          break;
      }
    }
  }
  Sys_ProfEndNamedEvent();
  if ( !other_ || v11 <= 1 || v65 )
  {
    v43 = viewInfoIndex;
  }
  else
  {
    if ( !viewInfoIndex || (_DWORD)v13 )
    {
      v40 = v13;
      v41 = s_umbraOcclusionBuffer[v13];
      if ( (unsigned int)v13 >= 0x21 )
      {
        LODWORD(threadId) = 33;
        LODWORD(objDist) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 653, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", objDist, threadId) )
          __debugbreak();
      }
    }
    else
    {
      v40 = 0i64;
      v41 = &s_umbraCameraOcclusionBufferAlternate;
    }
    Sys_ProfBeginNamedEvent(0xFFFFB6C1, "Umbra Merge Occlusion Buffers");
    v42 = &s_umbraOcclusionBufferWriteLock[v40];
    while ( 1 )
    {
      if ( !*v42 )
      {
        if ( ((unsigned __int8)v42 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v42) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(v42, 1, 0) )
          break;
      }
      Sys_Sleep(0);
    }
    v43 = viewInfoIndex;
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 665, ASSERT_TYPE_ASSERT, "(mergedOcclusionBuffer)", (const char *)&queryFormat, "mergedOcclusionBuffer") )
      __debugbreak();
    Umbra::OcclusionBuffer::combine(v41, other_);
    *v42 = 0;
    Sys_ProfEndNamedEvent();
  }
  v44 = &s_umbraQueryJobCount[v13];
  if ( ((unsigned __int8)v44 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_umbraQueryJobCount[v13]) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v44, 0xFFFFFFFF) == 1 && tome )
  {
    ObjectCount = Umbra::Tome::getObjectCount(tome);
    if ( !v43 || (_DWORD)v13 )
    {
      v47 = s_umbraVisMask[v13];
      v46 = s_umbraVisMaskCameraAlternate;
    }
    else
    {
      v46 = s_umbraVisMaskCameraAlternate;
      v47 = s_umbraVisMaskCameraAlternate;
    }
    R_Umbra_FillVisBuffers(tome, v47, ObjectCount, v13, occlussionBuffer);
    if ( r_umbraInvertStaticVisibility->current.enabled )
    {
      if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1353, ASSERT_TYPE_ASSERT, "(!reuseOcclusion)", (const char *)&queryFormat, "!reuseOcclusion") )
        __debugbreak();
      R_Umbra_ClearVisMask(v13, viewInfoIndex);
      __asm { vmovss  dword ptr [rsp+193F0h+fmt], xmm9 }
      Umbra::Query::queryFrustumVisibility(&v77, v17, &params, &src, fmtb, &inObjDistanceParams, 0, 1);
      v48 = Umbra::Tome::getObjectCount(tome);
      if ( !viewInfoIndex || (_DWORD)v13 )
        v46 = s_umbraVisMask[v13];
      R_Umbra_InvertVisBuffers(tome, v46, v48, v13);
    }
    else if ( !(_DWORD)v13 && occlussionBuffer && (rg.gpuCullOcclusionUmbra || rg.gpuCullTriOcclusionUmbra) && !r_lockPvs->current.enabled )
    {
      if ( s_umbraOcclusionCameraViewValid[_RSI[36]] )
      {
        LODWORD(objDist) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1378, ASSERT_TYPE_ASSERT, "( ( !s_umbraOcclusionCameraViewValid[cmd->smpFrame] ) )", "( sceneViewType ) = %u", objDist) )
          __debugbreak();
      }
      v49 = s_umbraOcclusionCameraView[_RSI[36]];
      Profile_Begin(206);
      desc.width = Umbra::OcclusionBuffer::getWidth(occlussionBuffer);
      Height = Umbra::OcclusionBuffer::getHeight(occlussionBuffer);
      desc.height = Height;
      if ( desc.width != 64 )
      {
        LODWORD(v64) = 64;
        LODWORD(numThreads) = desc.width;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 439, ASSERT_TYPE_ASSERT, "( bufferDesc.width ) == ( 64 )", "%s == %s\n\t%u, %u", "bufferDesc.width", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", numThreads, v64) )
          __debugbreak();
        Height = desc.height;
      }
      if ( Height != 64 )
      {
        LODWORD(v64) = 64;
        LODWORD(numThreads) = Height;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 440, ASSERT_TYPE_ASSERT, "( bufferDesc.height ) == ( 64 )", "%s == %s\n\t%u, %u", "bufferDesc.height", "UMBRA_OCCLUSION_SCENE_IMAGE_HEIGHT", numThreads, v64) )
          __debugbreak();
      }
      desc.format = FORMAT_NDC_FLOAT;
      desc.stride = 4 * desc.width;
      Buffer = Umbra::OcclusionBuffer::getBuffer(occlussionBuffer, v49, &desc);
      if ( Buffer )
      {
        LODWORD(numThreads) = Buffer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 446, ASSERT_TYPE_ASSERT, "( errCode ) == ( Umbra::OcclusionBuffer::ERROR_OK )", "%s == %s\n\t%i, %i", "errCode", "Umbra::OcclusionBuffer::ERROR_OK", numThreads, 0i64) )
          __debugbreak();
      }
      Profile_EndInternal(NULL);
      s_umbraOcclusionCameraViewValid[_RSI[36]] = 1;
    }
  }
  if ( !s_umbraThreadJobActive[v71] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1387, ASSERT_TYPE_ASSERT, "(s_umbraThreadJobActive[threadContext])", (const char *)&queryFormat, "s_umbraThreadJobActive[threadContext]") )
    __debugbreak();
  if ( v71 >= 8 )
  {
    j___report_rangecheckfailure(v39);
    JUMPOUT(0x1421EA4F6i64);
  }
  s_umbraThreadJobActive[v71] = 0;
  Umbra::Query::~Query(&v77);
  Profile_EndInternal(NULL);
  _R11 = &v82;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  bool v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  bool v21; 
  bool v28; 
  __int16 v29; 
  unsigned __int16 v30; 
  bool v34; 
  bool v41; 
  __int16 v42; 
  unsigned __int16 v43; 
  bool v47; 
  bool v54; 
  __int16 v55; 
  unsigned __int16 v56; 
  bool v60; 
  bool v67; 
  __int16 v68; 
  unsigned __int16 v69; 
  bool v73; 
  bool v80; 
  __int16 v81; 
  unsigned __int16 v82; 
  bool v86; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v89; 
  const R_RT_Surface *v90; 
  const R_RT_Surface *v91; 
  const R_RT_Surface *v92; 
  const R_RT_Surface *v93; 
  const R_RT_Surface *v94; 
  __int64 v95; 
  int width; 
  __int64 v97; 
  ID3D12Resource *buffers[2]; 
  R_RT_Handle v99; 
  R_RT_Handle v100; 
  R_RT_Handle v101; 
  R_RT_Handle v102; 
  R_RT_Handle v103; 
  R_RT_Handle v104; 
  R_RT_Handle v105; 
  R_RT_Handle v106; 

  _RDI = (R_RT_ColorHandle *)umbraFloatZ0;
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
      if ( R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width != 64 )
      {
        width = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 502, ASSERT_TYPE_ASSERT, "( umbraFloatZ0.GetWidth() ) == ( 64 )", "%s == %s\n\t%u, %u", "umbraFloatZ0.GetWidth()", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", width, 64) )
          __debugbreak();
      }
      if ( R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height != 64 )
      {
        LODWORD(v97) = 64;
        LODWORD(v95) = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 503, ASSERT_TYPE_ASSERT, "( umbraFloatZ0.GetHeight() ) == ( 64 )", "%s == %s\n\t%u, %u", "umbraFloatZ0.GetHeight()", "UMBRA_OCCLUSION_SCENE_IMAGE_WIDTH", v95, v97) )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      _RAX = R_RT_GetViewInternal(&v100, &v105, 0, 1);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v15 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_60.m_surfaceID], ymm0 }
      v16 = _EBX & 0x7FFF;
      if ( v16 )
      {
        v17 = v16 | 0x8000;
        v105.m_surfaceID = v17;
      }
      else
      {
        v17 = 0;
        v105.m_surfaceID = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v17 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_30;
        v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_30;
        v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v21 )
        __debugbreak();
LABEL_30:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymm1, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_100.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm1
      }
      _RAX = R_RT_GetViewInternal(&v100, &v105, 0, 2);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v28 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_60.m_surfaceID], ymm0 }
      v29 = _EBX & 0x7FFF;
      if ( v29 )
        v30 = v29 | 0x8000;
      else
        v30 = 0;
      v105.m_surfaceID = v30;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v30 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_48;
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_48;
        v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v34 )
        __debugbreak();
LABEL_48:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymm1, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_E0.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm1
      }
      _RAX = R_RT_GetViewInternal(&v100, &v105, 0, 3);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v41 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_60.m_surfaceID], ymm0 }
      v42 = _EBX & 0x7FFF;
      if ( v42 )
      {
        v43 = v42 | 0x8000;
        v105.m_surfaceID = v43;
      }
      else
      {
        v43 = 0;
        v105.m_surfaceID = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v43 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_66;
        v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_66;
        v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v47 )
        __debugbreak();
LABEL_66:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymm1, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_C0.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm1
      }
      _RAX = R_RT_GetViewInternal(&v100, &v105, 0, 4);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v54 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_60.m_surfaceID], ymm0 }
      v55 = _EBX & 0x7FFF;
      if ( v55 )
      {
        v56 = v55 | 0x8000;
        v105.m_surfaceID = v56;
      }
      else
      {
        v56 = 0;
        v105.m_surfaceID = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v56 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_84;
        v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_84;
        v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v60 )
        __debugbreak();
LABEL_84:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymm1, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_60.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm1
      }
      _RAX = R_RT_GetViewInternal(&v100, &v105, 0, 5);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v67 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0 }
      v68 = _EBX & 0x7FFF;
      if ( v68 )
      {
        v69 = v68 | 0x8000;
        v105.m_surfaceID = v69;
      }
      else
      {
        v69 = 0;
        v105.m_surfaceID = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v69 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_102;
        v73 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
      }
      else
      {
        if ( !(_DWORD)_RSI )
          goto LABEL_102;
        v73 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      }
      if ( v73 )
        __debugbreak();
LABEL_102:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymm1, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm1
      }
      _RAX = R_RT_GetViewInternal(&v104, &v105, 0, 6);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   ebx, xmm0
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+1A0h+var_140.m_surfaceID], ymm0
      }
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v99);
        if ( (R_RT_Handle::GetSurface(&v99)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          LODWORD(_RSI) = v99.m_tracking.m_allocCounter;
          LOWORD(_EBX) = v99.m_surfaceID;
          __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_140.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rsi, xmm0, 2 }
        if ( (_DWORD)_RSI )
        {
          v80 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID] }
          if ( v80 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0 }
      v81 = _EBX & 0x7FFF;
      if ( v81 )
      {
        v82 = v81 | 0x8000;
        v105.m_surfaceID = v82;
      }
      else
      {
        v82 = 0;
        v105.m_surfaceID = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+var_140.m_tracking.m_allocCounter]
        vmovsd  xmm1, [rsp+1A0h+var_140.m_tracking.m_location]
        vmovups xmmword ptr [rbp+0A0h+var_80.m_tracking.m_allocCounter], xmm0
        vmovsd  [rbp+0A0h+var_80.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      if ( v82 )
      {
        R_RT_Handle::GetSurface(&v105);
        if ( (R_RT_Handle::GetSurface(&v105)->m_rtFlagsInternal & 0x18) != 0 )
        {
          v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
LABEL_118:
          if ( v86 )
            __debugbreak();
        }
      }
      else if ( (_DWORD)_RSI )
      {
        v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        goto LABEL_118;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0A0h+var_80.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_80.m_surfaceID], ymm0
      }
      R_SetComputeShader(computeState, rgp.resolveUmbraOcclusion);
      buffers[0] = (ID3D12Resource *)(&s_umbraOcclusionCameraViewBuffer[0].view + 2 * data->smpFrame);
      R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)buffers);
      Surface = R_RT_Handle::GetSurface(_RDI);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)buffers);
      v89 = R_RT_Handle::GetSurface(&v101);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v89->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)buffers);
      v90 = R_RT_Handle::GetSurface(&v102);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v90->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)buffers);
      v91 = R_RT_Handle::GetSurface(&v103);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v91->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 3, 1, (const GfxTexture *const *)buffers);
      v92 = R_RT_Handle::GetSurface(&v106);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v92->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 4, 1, (const GfxTexture *const *)buffers);
      v93 = R_RT_Handle::GetSurface(&v100);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v93->m_image.m_base.textureId);
      R_SetComputeRWTextures(computeState, 5, 1, (const GfxTexture *const *)buffers);
      v94 = R_RT_Handle::GetSurface(&v105);
      buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v94->m_image.m_base.textureId);
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups xmm1, xmmword ptr [rcx+20h]
    vmovups ymmword ptr cs:s_umbraScriptedGateStates.array, ymm0
    vmovups xmmword ptr cs:s_umbraScriptedGateStates.array+20h, xmm1
  }
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
  __int64 v4; 
  Umbra::GateStateVector *v5; 
  void **v6; 
  unsigned int v7; 
  __int64 v43; 
  __int64 v44; 
  Umbra::GateStateVector v45[2]; 
  __int128 v46; 
  __int128 v47; 

  v4 = sceneViewType;
  if ( sceneViewType >= 0x21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1766, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
    __debugbreak();
  v5 = &s_umbraGateStateVectors[v4];
  Umbra::GateStateVector::GateStateVector(v45, s_umbraGateStates[v4], 0x30ui64, 1);
  v5->m_data = *v6;
  if ( !(_DWORD)v4 )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.cpp", 1774, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    v7 = 0;
    if ( rgp.world->numUmbraGates )
    {
      __asm
      {
        vmovaps [rsp+0B8h+var_28], xmm7
        vmovaps [rsp+0B8h+var_38], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+0B8h+var_18], xmm6
        vxorps  xmm7, xmm7, xmm7
      }
      while ( 1 )
      {
        if ( v7 >= 0x180 )
        {
          LODWORD(v44) = 384;
          LODWORD(v43) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v43, v44) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v7 & 0x1F)) & s_umbraScriptedGateStates.array[(unsigned __int64)v7 >> 5]) == 0 )
          goto LABEL_16;
        _R8 = 32i64 * v7;
        _RCX = rgp.world->umbraGates;
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+r8+1Ch]
          vcomiss xmm6, xmm7
        }
        if ( !__CFSHL__(v7, 5) && _R8 != 0 )
          break;
LABEL_17:
        if ( ++v7 >= rgp.world->numUmbraGates )
        {
          __asm
          {
            vmovaps xmm8, [rsp+0B8h+var_38]
            vmovaps xmm7, [rsp+0B8h+var_28]
            vmovaps xmm6, [rsp+0B8h+var_18]
          }
          return;
        }
      }
      __asm { vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg }
      HIDWORD(v45[1].m_data) = 0;
      __asm
      {
        vmovups xmm5, xmmword ptr [rsp+0B8h+var_78.m_data]
        vmovss  xmm5, xmm5, xmm0
        vmovss  xmm0, dword ptr [rcx+r8+4]
        vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
        vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
      }
      HIDWORD(v46) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+50h]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [rcx+r8+10h]
        vinsertps xmm4, xmm4, dword ptr [rcx+r8+8], 10h
        vinsertps xmm4, xmm4, dword ptr [rcx+r8+0Ch], 20h ; ' '
      }
      HIDWORD(v47) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rcx+r8+14h], 10h
        vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vinsertps xmm3, xmm3, dword ptr [rcx+r8+18h], 20h ; ' '
        vsubps  xmm1, xmm5, xmm4
        vandnps xmm2, xmm0, xmm1
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsp+60h], xmm3
        vsubps  xmm3, xmm2, xmm3
        vmaxps  xmm1, xmm3, xmm0
        vmulps  xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vsqrtss xmm0, xmm1, xmm1
        vmaxss  xmm1, xmm0, xmm8
        vmulss  xmm2, xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.cappedLodScale; r_globals_t rg
        vcomiss xmm6, xmm2
        vmovups xmmword ptr [rsp+0B8h+var_78.m_data], xmm5
        vmovups xmmword ptr [rsp+50h], xmm4
      }
LABEL_16:
      Umbra::GateStateVector::setState(v5, v7, 0);
      goto LABEL_17;
    }
  }
}

