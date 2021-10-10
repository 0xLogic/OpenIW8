/*
==============
R_ReflectionProbe_CopyProbesToFrameCache
==============
*/

void __fastcall R_ReflectionProbe_CopyProbesToFrameCache(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?R_ReflectionProbe_CopyProbesToFrameCache@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_ReflectionProbe_GetLightgridOverrideBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ReflectionProbe_GetLightgridOverrideBuffer(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_GetLightgridOverrideBuffer@@YAPEBUGfxWrappedBuffer@@I@Z(frameDataIndex);
}

/*
==============
RB_ReflectionProbe_ProcessView
==============
*/

void __fastcall RB_ReflectionProbe_ProcessView(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_ReflectionProbe_ProcessView@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_ReflectionProbe_IsOctahedronFilteringEnabled
==============
*/

bool __fastcall R_ReflectionProbe_IsOctahedronFilteringEnabled()
{
  return ?R_ReflectionProbe_IsOctahedronFilteringEnabled@@YA_NXZ();
}

/*
==============
R_ReflectionProbe_DebugRenderProbeVolume
==============
*/

void __fastcall R_ReflectionProbe_DebugRenderProbeVolume(DebugGlobals *debugGlobalsEntry, const GfxCamera *camera, const int options, const GfxReflectionProbeInstance *probeInstance, unsigned int frameIndex, unsigned __int16 probeCacheSlot, bool depthTest)
{
  ?R_ReflectionProbe_DebugRenderProbeVolume@@YAXPEAUDebugGlobals@@PEBUGfxCamera@@HPEBUGfxReflectionProbeInstance@@IG_N@Z(debugGlobalsEntry, camera, options, probeInstance, frameIndex, probeCacheSlot, depthTest);
}

/*
==============
R_ReflectionProbe_ShutdownWorldBuffers
==============
*/

void __fastcall R_ReflectionProbe_ShutdownWorldBuffers(GfxWorld *world)
{
  ?R_ReflectionProbe_ShutdownWorldBuffers@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
GfxReflectionProbeLRUCache<85,151>::HashMapFind
==============
*/

GfxReflectionProbeLRUCache<85,151>::HashMapCell *__fastcall GfxReflectionProbeLRUCache<85,151>::HashMapFind(GfxReflectionProbeLRUCache<85,151> *this, unsigned __int16 key)
{
  return ?HashMapFind@?$GfxReflectionProbeLRUCache@$0FF@$0JH@@@QEAAPEAUHashMapCell@1@G@Z(this, key);
}

/*
==============
R_ReflectionProbe_GlobalInit
==============
*/

void R_ReflectionProbe_GlobalInit(void)
{
  ?R_ReflectionProbe_GlobalInit@@YAXXZ();
}

/*
==============
R_ReflectionProbe_DrawSH
==============
*/

void __fastcall R_ReflectionProbe_DrawSH(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?R_ReflectionProbe_DrawSH@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_ReflectionProbe_ShutdownResolutionDependent
==============
*/

void R_ReflectionProbe_ShutdownResolutionDependent(void)
{
  ?R_ReflectionProbe_ShutdownResolutionDependent@@YAXXZ();
}

/*
==============
R_ReflectionProbe_GetInstanceBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ReflectionProbe_GetInstanceBuffer(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_GetInstanceBuffer@@YAPEBUGfxWrappedBuffer@@I@Z(frameDataIndex);
}

/*
==============
R_ReflectionProbeSH_UseOfflineShader
==============
*/

bool __fastcall R_ReflectionProbeSH_UseOfflineShader()
{
  return ?R_ReflectionProbeSH_UseOfflineShader@@YA_NXZ();
}

/*
==============
R_AddTransformedReflectionProbeInstancesToScene
==============
*/

void __fastcall R_AddTransformedReflectionProbeInstancesToScene(const vec3_t *origin, const vec3_t *angles, const unsigned int reflectionProbeIndex)
{
  ?R_AddTransformedReflectionProbeInstancesToScene@@YAXAEBTvec3_t@@0I@Z(origin, angles, reflectionProbeIndex);
}

/*
==============
Load_ImageReflectionProbe
==============
*/

void __fastcall Load_ImageReflectionProbe(unsigned __int8 **pixelsPtr, GfxImageReflectionProbe *image)
{
  ?Load_ImageReflectionProbe@@YAXPEAPEAEPEAUGfxImageReflectionProbe@@@Z(pixelsPtr, image);
}

/*
==============
R_ReflectionProbe_WorldStartup
==============
*/

void __fastcall R_ReflectionProbe_WorldStartup(GfxWorld *world)
{
  ?R_ReflectionProbe_WorldStartup@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_ReflectionProbe_ProcessView
==============
*/

void __fastcall R_ReflectionProbe_ProcessView(const void *const cmd)
{
  ?R_ReflectionProbe_ProcessView@@YAXQEBX@Z(cmd);
}

/*
==============
RB_ReflectionProbe_DrawSH
==============
*/

void __fastcall RB_ReflectionProbe_DrawSH(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?RB_ReflectionProbe_DrawSH@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_ReflectionProbe_GetImagePixelFormat
==============
*/

GfxPixelFormat __fastcall R_ReflectionProbe_GetImagePixelFormat()
{
  return ?R_ReflectionProbe_GetImagePixelFormat@@YA?AW4GfxPixelFormat@@XZ();
}

/*
==============
R_ReflectionProbe_GetRelightableReflectionProbeImage
==============
*/

bool __fastcall R_ReflectionProbe_GetRelightableReflectionProbeImage(const GfxBackEndData *data, unsigned int probeIndex, const GfxImage **outProbeImage)
{
  return ?R_ReflectionProbe_GetRelightableReflectionProbeImage@@YA_NPEBUGfxBackEndData@@IPEAPEBUGfxImage@@@Z(data, probeIndex, outProbeImage);
}

/*
==============
RB_ReflectionProbe_Overlay
==============
*/

void __fastcall RB_ReflectionProbe_Overlay(GfxCmdBufContext *gfxContext, unsigned int frameIndex, int probeIndexToShow)
{
  ?RB_ReflectionProbe_Overlay@@YAXUGfxCmdBufContext@@IH@Z(gfxContext, frameIndex, probeIndexToShow);
}

/*
==============
R_ReflectionProbe_GetProcessViewInstance
==============
*/

GfxReflectionProbeInstance *__fastcall R_ReflectionProbe_GetProcessViewInstance(const ReflectionProbeProcessViewInstanceInfo *processViewInstanceInfo)
{
  return ?R_ReflectionProbe_GetProcessViewInstance@@YAPEAUGfxReflectionProbeInstance@@PEBUReflectionProbeProcessViewInstanceInfo@@@Z(processViewInstanceInfo);
}

/*
==============
R_ReflectionProbe_GetObbBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ReflectionProbe_GetObbBuffer(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_GetObbBuffer@@YAPEBUGfxWrappedBuffer@@I@Z(frameDataIndex);
}

/*
==============
R_ReflectionProbe_ToggleFrame
==============
*/

unsigned int __fastcall R_ReflectionProbe_ToggleFrame()
{
  return ?R_ReflectionProbe_ToggleFrame@@YAIXZ();
}

/*
==============
R_ReflectionProbe_ShowStats
==============
*/

void __fastcall R_ReflectionProbe_ShowStats(const GfxBackEndData *backEndData, const GfxViewParms *viewParms, unsigned int displayWidth, unsigned int displayHeight)
{
  ?R_ReflectionProbe_ShowStats@@YAXPEBUGfxBackEndData@@AEBUGfxViewParms@@II@Z(backEndData, viewParms, displayWidth, displayHeight);
}

/*
==============
R_ReflectionProbe_GetSHBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ReflectionProbe_GetSHBuffer()
{
  return ?R_ReflectionProbe_GetSHBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_AddDebugFlatLineLoop
==============
*/

void __fastcall R_AddDebugFlatLineLoop(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const vec3_t *u, const vec3_t *v, const float size, const vec2_t *vertices, const unsigned int vertexCount, const vec4_t *color)
{
  ?R_AddDebugFlatLineLoop@@YAXPEAUDebugGlobals@@AEBTvec3_t@@11MPEBTvec2_t@@IAEBTvec4_t@@@Z(debugGlobalsEntry, origin, u, v, size, vertices, vertexCount, color);
}

/*
==============
GfxReflectionProbeLRUCache<85,151>::HashMapInsert
==============
*/

GfxReflectionProbeLRUCache<85,151>::HashMapCell *__fastcall GfxReflectionProbeLRUCache<85,151>::HashMapInsert(GfxReflectionProbeLRUCache<85,151> *this, unsigned __int16 key, unsigned __int16 value)
{
  return ?HashMapInsert@?$GfxReflectionProbeLRUCache@$0FF@$0JH@@@QEAAPEAUHashMapCell@1@GG@Z(this, key, value);
}

/*
==============
R_ReflectionProbe_RegisterDvars
==============
*/

void R_ReflectionProbe_RegisterDvars(void)
{
  ?R_ReflectionProbe_RegisterDvars@@YAXXZ();
}

/*
==============
R_ReflectionProbe_IsOctahedronEnabled
==============
*/

int __fastcall R_ReflectionProbe_IsOctahedronEnabled()
{
  return ?R_ReflectionProbe_IsOctahedronEnabled@@YAHXZ();
}

/*
==============
R_ReflectionProbe_IsProbeOctahedronDataPresent
==============
*/

bool __fastcall R_ReflectionProbe_IsProbeOctahedronDataPresent()
{
  return ?R_ReflectionProbe_IsProbeOctahedronDataPresent@@YA_NXZ();
}

/*
==============
R_ReflectionProbe_WorldShutdown
==============
*/

void __fastcall R_ReflectionProbe_WorldShutdown(GfxWorld *world)
{
  ?R_ReflectionProbe_WorldShutdown@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_ReflectionProbe_InitResolutionDependent
==============
*/

void R_ReflectionProbe_InitResolutionDependent(void)
{
  ?R_ReflectionProbe_InitResolutionDependent@@YAXXZ();
}

/*
==============
R_ReflectionProbe_ReleaseTransientData
==============
*/

void __fastcall R_ReflectionProbe_ReleaseTransientData(GfxReflectionProbeTransientData *reflectionProbes)
{
  ?R_ReflectionProbe_ReleaseTransientData@@YAXPEAUGfxReflectionProbeTransientData@@@Z(reflectionProbes);
}

/*
==============
R_ReflectionProbe_IsDebugReflectionEnabled
==============
*/

bool __fastcall R_ReflectionProbe_IsDebugReflectionEnabled()
{
  return ?R_ReflectionProbe_IsDebugReflectionEnabled@@YA_NXZ();
}

/*
==============
R_ReflectionProbe_IsTransientStreamingEnabled
==============
*/

bool __fastcall R_ReflectionProbe_IsTransientStreamingEnabled()
{
  return ?R_ReflectionProbe_IsTransientStreamingEnabled@@YA_NXZ();
}

/*
==============
R_ReflectionProbe_InvalidateCachedImage
==============
*/

void __fastcall R_ReflectionProbe_InvalidateCachedImage(unsigned int probeIndex)
{
  ?R_ReflectionProbe_InvalidateCachedImage@@YAXI@Z(probeIndex);
}

/*
==============
R_ReflectionProbe_GetZBinBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_ReflectionProbe_GetZBinBuffer(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_GetZBinBuffer@@YAPEBUGfxWrappedBuffer@@I@Z(frameDataIndex);
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapErase
==============
*/

void __fastcall GfxReflectionProbeLRUCache<128,211>::HashMapErase(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key)
{
  ?HashMapErase@?$GfxReflectionProbeLRUCache@$0IA@$0ND@@@QEAAXG@Z(this, key);
}

/*
==============
R_ReflectionProbe_UseLightgridOverride
==============
*/

bool __fastcall R_ReflectionProbe_UseLightgridOverride(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_UseLightgridOverride@@YA_NI@Z(frameDataIndex);
}

/*
==============
GetFrustumProjectedInterval<1>
==============
*/

void __fastcall GetFrustumProjectedInterval<1>(const vec3_t (*frustumVertices)[8], const vec3_t *axis, vec2_t *outInterval)
{
  ??$GetFrustumProjectedInterval@$00@@YAXAEAY07$$CBTvec3_t@@AEBT0@AEATvec2_t@@@Z(frustumVertices, axis, outInterval);
}

/*
==============
RB_ReflectionProbe_IsOverlayEnabled
==============
*/

int __fastcall RB_ReflectionProbe_IsOverlayEnabled()
{
  return ?RB_ReflectionProbe_IsOverlayEnabled@@YAHXZ();
}

/*
==============
R_ReflectionProbe_IsFrameCacheEnabled
==============
*/

bool __fastcall R_ReflectionProbe_IsFrameCacheEnabled()
{
  return ?R_ReflectionProbe_IsFrameCacheEnabled@@YA_NXZ();
}

/*
==============
R_ReflectionProbe_GlobalShutdown
==============
*/

void R_ReflectionProbe_GlobalShutdown(void)
{
  ?R_ReflectionProbe_GlobalShutdown@@YAXXZ();
}

/*
==============
R_ReflectionProbe_GetReflectionProbeCount
==============
*/

unsigned int __fastcall R_ReflectionProbe_GetReflectionProbeCount()
{
  return ?R_ReflectionProbe_GetReflectionProbeCount@@YAIXZ();
}

/*
==============
R_ReflectionProbe_DrawSH_Enabled
==============
*/

bool __fastcall R_ReflectionProbe_DrawSH_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_ReflectionProbe_DrawSH_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_ReflectionProbe_GetProbeOctahedronImageArray
==============
*/

const GfxImage *__fastcall R_ReflectionProbe_GetProbeOctahedronImageArray()
{
  return ?R_ReflectionProbe_GetProbeOctahedronImageArray@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_ReflectionProbe_GetProbeImageArray
==============
*/

const GfxImage *__fastcall R_ReflectionProbe_GetProbeImageArray()
{
  return ?R_ReflectionProbe_GetProbeImageArray@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_ReflectionProbe_GetInstance
==============
*/

GfxReflectionProbeInstance *__fastcall R_ReflectionProbe_GetInstance(const bool isWorldInstance, const unsigned int probeInstanceIndex)
{
  return ?R_ReflectionProbe_GetInstance@@YAPEAUGfxReflectionProbeInstance@@_NI@Z(isWorldInstance, probeInstanceIndex);
}

/*
==============
R_ReflectionProbe_AddProbesToDraw
==============
*/

void R_ReflectionProbe_AddProbesToDraw(void)
{
  ?R_ReflectionProbe_AddProbesToDraw@@YAXXZ();
}

/*
==============
R_ReflectionProbe_GetFrustumWords
==============
*/

unsigned int __fastcall R_ReflectionProbe_GetFrustumWords(unsigned int frameDataIndex)
{
  return ?R_ReflectionProbe_GetFrustumWords@@YAII@Z(frameDataIndex);
}

/*
==============
R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded
==============
*/

bool __fastcall R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded(const GfxBackEndData *data, unsigned int probeIndex)
{
  return ?R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded@@YA_NPEBUGfxBackEndData@@I@Z(data, probeIndex);
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapFind
==============
*/

GfxReflectionProbeLRUCache<128,211>::HashMapCell *__fastcall GfxReflectionProbeLRUCache<128,211>::HashMapFind(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key)
{
  return ?HashMapFind@?$GfxReflectionProbeLRUCache@$0IA@$0ND@@@QEAAPEAUHashMapCell@1@G@Z(this, key);
}

/*
==============
R_ExecuteReflectionProbeProcessViewComputeBuffer
==============
*/

void __fastcall R_ExecuteReflectionProbeProcessViewComputeBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedRWBuffer *probeClusterBuffer)
{
  ?R_ExecuteReflectionProbeProcessViewComputeBuffer@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedRWBuffer@@@Z(computeState, viewInfo, data, probeClusterBuffer);
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapInsert
==============
*/

GfxReflectionProbeLRUCache<128,211>::HashMapCell *__fastcall GfxReflectionProbeLRUCache<128,211>::HashMapInsert(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key, unsigned __int16 value)
{
  return ?HashMapInsert@?$GfxReflectionProbeLRUCache@$0IA@$0ND@@@QEAAPEAUHashMapCell@1@GG@Z(this, key, value);
}

/*
==============
R_ReflectionProbe_GetClusterBuffer
==============
*/

const GfxWrappedRWBuffer *__fastcall R_ReflectionProbe_GetClusterBuffer()
{
  return ?R_ReflectionProbe_GetClusterBuffer@@YAPEBUGfxWrappedRWBuffer@@XZ();
}

/*
==============
GetFrustumProjectedInterval<0>
==============
*/

void __fastcall GetFrustumProjectedInterval<0>(const vec3_t (*frustumVertices)[8], const vec3_t *axis, vec2_t *outInterval)
{
  ??$GetFrustumProjectedInterval@$0A@@@YAXAEAY07$$CBTvec3_t@@AEBT0@AEATvec2_t@@@Z(frustumVertices, axis, outInterval);
}

/*
==============
GetFrustumProjectedInterval<1>
==============
*/
void GetFrustumProjectedInterval<1>(const vec3_t (*frustumVertices)[8], const vec3_t *axis, vec2_t *outInterval)
{
  __int128 v3; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v14; 
  __int128 v18; 
  __int128 v22; 

  v3 = LODWORD((*frustumVertices)[0].v[0]);
  *(float *)&v3 = (float)((float)((*frustumVertices)[0].v[0] * axis->v[0]) + (float)(axis->v[1] * (*frustumVertices)[0].v[1])) + (float)((*frustumVertices)[0].v[2] * axis->v[2]);
  _XMM5 = v3;
  outInterval->v[0] = *(float *)&v3;
  outInterval->v[1] = *(float *)&v3;
  v5 = LODWORD((*frustumVertices)[1].v[1]);
  *(float *)&v5 = (float)((float)((*frustumVertices)[1].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[1].v[0])) + (float)((*frustumVertices)[1].v[2] * axis->v[2]);
  v6 = *(float *)&_XMM5;
  if ( *(float *)&v5 < *(float *)&_XMM5 )
  {
    outInterval->v[0] = *(float *)&v5;
    v6 = *(float *)&v5;
  }
  if ( *(float *)&v5 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v5;
    _XMM5 = v5;
  }
  v7 = LODWORD((*frustumVertices)[2].v[1]);
  *(float *)&v7 = (float)((float)((*frustumVertices)[2].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[2].v[0])) + (float)((*frustumVertices)[2].v[2] * axis->v[2]);
  if ( *(float *)&v7 < v6 )
  {
    outInterval->v[0] = *(float *)&v7;
    v6 = *(float *)&v7;
  }
  if ( *(float *)&v7 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v7;
    _XMM5 = v7;
  }
  v8 = LODWORD((*frustumVertices)[3].v[1]);
  *(float *)&v8 = (float)((float)((*frustumVertices)[3].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[3].v[0])) + (float)((*frustumVertices)[3].v[2] * axis->v[2]);
  if ( *(float *)&v8 < v6 )
  {
    outInterval->v[0] = *(float *)&v8;
    v6 = *(float *)&v8;
  }
  if ( *(float *)&v8 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v8;
    _XMM5 = v8;
  }
  v9 = LODWORD((*frustumVertices)[4].v[1]);
  _XMM9 = LODWORD(FLOAT_3_4028235e38);
  *(float *)&v9 = (float)((float)((float)((*frustumVertices)[4].v[1] - (*frustumVertices)[0].v[1]) * axis->v[1]) + (float)((float)((*frustumVertices)[4].v[0] - (*frustumVertices)[0].v[0]) * axis->v[0])) + (float)((float)((*frustumVertices)[4].v[2] - (*frustumVertices)[0].v[2]) * axis->v[2]);
  _XMM3 = v9;
  __asm
  {
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
  }
  if ( *(float *)&_XMM1 < v6 )
  {
    outInterval->v[0] = *(float *)&_XMM1;
    v6 = *(float *)&_XMM1;
  }
  if ( *(float *)&_XMM1 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&_XMM1;
    _XMM5 = _XMM1;
  }
  v14 = LODWORD((*frustumVertices)[5].v[1]);
  *(float *)&v14 = (float)((float)((float)((*frustumVertices)[5].v[1] - (*frustumVertices)[1].v[1]) * axis->v[1]) + (float)((float)((*frustumVertices)[5].v[0] - (*frustumVertices)[1].v[0]) * axis->v[0])) + (float)((float)((*frustumVertices)[5].v[2] - (*frustumVertices)[1].v[2]) * axis->v[2]);
  _XMM3 = v14;
  __asm
  {
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
  }
  if ( *(float *)&_XMM1 < v6 )
  {
    outInterval->v[0] = *(float *)&_XMM1;
    v6 = *(float *)&_XMM1;
  }
  if ( *(float *)&_XMM1 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&_XMM1;
    _XMM5 = _XMM1;
  }
  v18 = LODWORD((*frustumVertices)[6].v[1]);
  *(float *)&v18 = (float)((float)((float)((*frustumVertices)[6].v[1] - (*frustumVertices)[2].v[1]) * axis->v[1]) + (float)((float)((*frustumVertices)[6].v[0] - (*frustumVertices)[2].v[0]) * axis->v[0])) + (float)((float)((*frustumVertices)[6].v[2] - (*frustumVertices)[2].v[2]) * axis->v[2]);
  _XMM3 = v18;
  __asm
  {
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
  }
  if ( *(float *)&_XMM1 < v6 )
    outInterval->v[0] = *(float *)&_XMM1;
  if ( *(float *)&_XMM1 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&_XMM1;
    _XMM5 = _XMM1;
  }
  v22 = LODWORD((*frustumVertices)[7].v[1]);
  *(float *)&v22 = (float)((float)((float)((*frustumVertices)[7].v[1] - (*frustumVertices)[3].v[1]) * axis->v[1]) + (float)((float)((*frustumVertices)[7].v[0] - (*frustumVertices)[3].v[0]) * axis->v[0])) + (float)((float)((*frustumVertices)[7].v[2] - (*frustumVertices)[3].v[2]) * axis->v[2]);
  _XMM3 = v22;
  __asm
  {
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm2, xmm9, xmm8, xmm0
  }
  _XMM0 = LODWORD(outInterval->v[0]);
  __asm
  {
    vcmpltss xmm1, xmm2, xmm6
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  _XMM0 = LODWORD(outInterval->v[1]);
  outInterval->v[0] = *(float *)&_XMM1;
  __asm
  {
    vcmpltss xmm1, xmm5, xmm2
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  outInterval->v[1] = *(float *)&_XMM1;
}

/*
==============
GetFrustumProjectedInterval<0>
==============
*/
void GetFrustumProjectedInterval<0>(const vec3_t (*frustumVertices)[8], const vec3_t *axis, vec2_t *outInterval)
{
  __int128 v3; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 

  v3 = LODWORD((*frustumVertices)[0].v[1]);
  *(float *)&v3 = (float)((float)((*frustumVertices)[0].v[1] * axis->v[1]) + (float)((*frustumVertices)[0].v[0] * axis->v[0])) + (float)((*frustumVertices)[0].v[2] * axis->v[2]);
  _XMM5 = v3;
  outInterval->v[0] = *(float *)&v3;
  outInterval->v[1] = *(float *)&v3;
  v5 = LODWORD((*frustumVertices)[1].v[1]);
  *(float *)&v5 = (float)((float)((*frustumVertices)[1].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[1].v[0])) + (float)((*frustumVertices)[1].v[2] * axis->v[2]);
  v6 = *(float *)&_XMM5;
  if ( *(float *)&v5 < *(float *)&_XMM5 )
  {
    outInterval->v[0] = *(float *)&v5;
    v6 = *(float *)&v5;
  }
  if ( *(float *)&v5 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v5;
    _XMM5 = v5;
  }
  v7 = LODWORD((*frustumVertices)[2].v[1]);
  *(float *)&v7 = (float)((float)((*frustumVertices)[2].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[2].v[0])) + (float)((*frustumVertices)[2].v[2] * axis->v[2]);
  if ( *(float *)&v7 < v6 )
  {
    outInterval->v[0] = *(float *)&v7;
    v6 = *(float *)&v7;
  }
  if ( *(float *)&v7 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v7;
    _XMM5 = v7;
  }
  v8 = LODWORD((*frustumVertices)[3].v[1]);
  *(float *)&v8 = (float)((float)((*frustumVertices)[3].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[3].v[0])) + (float)((*frustumVertices)[3].v[2] * axis->v[2]);
  if ( *(float *)&v8 < v6 )
  {
    outInterval->v[0] = *(float *)&v8;
    v6 = *(float *)&v8;
  }
  if ( *(float *)&v8 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v8;
    _XMM5 = v8;
  }
  v9 = LODWORD((*frustumVertices)[4].v[1]);
  *(float *)&v9 = (float)((float)((*frustumVertices)[4].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[4].v[0])) + (float)((*frustumVertices)[4].v[2] * axis->v[2]);
  if ( *(float *)&v9 < v6 )
  {
    outInterval->v[0] = *(float *)&v9;
    v6 = *(float *)&v9;
  }
  if ( *(float *)&v9 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v9;
    _XMM5 = v9;
  }
  v10 = LODWORD((*frustumVertices)[5].v[1]);
  *(float *)&v10 = (float)((float)((*frustumVertices)[5].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[5].v[0])) + (float)((*frustumVertices)[5].v[2] * axis->v[2]);
  if ( *(float *)&v10 < v6 )
  {
    outInterval->v[0] = *(float *)&v10;
    v6 = *(float *)&v10;
  }
  if ( *(float *)&v10 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v10;
    _XMM5 = v10;
  }
  v11 = LODWORD((*frustumVertices)[6].v[1]);
  *(float *)&v11 = (float)((float)((*frustumVertices)[6].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[6].v[0])) + (float)((*frustumVertices)[6].v[2] * axis->v[2]);
  if ( *(float *)&v11 < v6 )
    outInterval->v[0] = *(float *)&v11;
  if ( *(float *)&v11 > *(float *)&_XMM5 )
  {
    outInterval->v[1] = *(float *)&v11;
    _XMM5 = v11;
  }
  v12 = LODWORD((*frustumVertices)[7].v[1]);
  _XMM0 = LODWORD(outInterval->v[0]);
  *(float *)&v12 = (float)((float)((*frustumVertices)[7].v[1] * axis->v[1]) + (float)(axis->v[0] * (*frustumVertices)[7].v[0])) + (float)((*frustumVertices)[7].v[2] * axis->v[2]);
  _XMM2 = v12;
  __asm
  {
    vcmpltss xmm1, xmm2, xmm6
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  _XMM0 = LODWORD(outInterval->v[1]);
  outInterval->v[0] = *(float *)&_XMM1;
  __asm
  {
    vcmpltss xmm1, xmm5, xmm2
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  outInterval->v[1] = *(float *)&_XMM1;
}

/*
==============
DebugRenderBoxFromVertices
==============
*/
void DebugRenderBoxFromVertices(DebugGlobals *debugGlobalsEntry, const vec3_t (*vertices)[8], const vec4_t *color, bool depthTest)
{
  bool v5; 
  const vec3_t *v7; 

  v5 = !depthTest;
  v7 = &(*vertices)[1];
  if ( v5 )
  {
    R_AddDebugLine(debugGlobalsEntry, (const vec3_t *)vertices, v7, color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[3], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[2], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[2], (const vec3_t *)vertices, color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[4], &(*vertices)[5], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[5], &(*vertices)[7], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[7], &(*vertices)[6], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[6], &(*vertices)[4], color);
    R_AddDebugLine(debugGlobalsEntry, (const vec3_t *)vertices, &(*vertices)[4], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[5], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[7], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[2], &(*vertices)[6], color);
  }
  else
  {
    R_AddDebugLineDepthTest(debugGlobalsEntry, (const vec3_t *)vertices, v7, color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[3], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[2], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[2], (const vec3_t *)vertices, color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[4], &(*vertices)[5], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[5], &(*vertices)[7], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[7], &(*vertices)[6], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[6], &(*vertices)[4], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, (const vec3_t *)vertices, &(*vertices)[4], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[5], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[7], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[2], &(*vertices)[6], color);
  }
}

/*
==============
DebugRenderZQuadFromVertices
==============
*/
void DebugRenderZQuadFromVertices(DebugGlobals *debugGlobalsEntry, const vec3_t (*vertices)[4], const vec4_t *color, bool depthTest)
{
  bool v5; 
  const vec3_t *v7; 

  v5 = !depthTest;
  v7 = &(*vertices)[1];
  if ( v5 )
  {
    R_AddDebugLine(debugGlobalsEntry, (const vec3_t *)vertices, v7, color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[3], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[2], color);
    R_AddDebugLine(debugGlobalsEntry, &(*vertices)[2], (const vec3_t *)vertices, color);
  }
  else
  {
    R_AddDebugLineDepthTest(debugGlobalsEntry, (const vec3_t *)vertices, v7, color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[1], &(*vertices)[3], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[3], &(*vertices)[2], color);
    R_AddDebugLineDepthTest(debugGlobalsEntry, &(*vertices)[2], (const vec3_t *)vertices, color);
  }
}

/*
==============
GetReflectionGridFrustumVertices
==============
*/
void GetReflectionGridFrustumVertices(const GfxViewParms *viewParams, const float farPlaneDist, vec3_t *outVertices)
{
  unsigned int v3; 
  float *v5; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 

  v3 = 0;
  v5 = &outVertices[1].v[2];
  do
  {
    *(_QWORD *)(v5 - 5) = 0i64;
    *(v5 - 3) = 0.0;
    _XMM4 = LODWORD(viewParams->camera.tanHalfFovX);
    _XMM5 = LODWORD(viewParams->camera.tanHalfFovY);
    _XMM0 = v3 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v33 = *(float *)&_XMM1;
    _XMM0 = v3 & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm5, xmm3, xmm2
    }
    v31 = *(float *)&_XMM1;
    if ( (v3 & 4) != 0 )
      v14 = farPlaneDist;
    else
      v14 = viewParams->camera.zPlanes[2];
    LODWORD(v15) = COERCE_UNSIGNED_INT(v14 * v33) ^ _xmm;
    v16 = v15 * viewParams->camera.axis.m[1].v[0];
    *(v5 - 5) = v16;
    v17 = v15 * viewParams->camera.axis.m[1].v[1];
    *(v5 - 4) = v17;
    v18 = v15 * viewParams->camera.axis.m[1].v[2];
    *(v5 - 3) = v18;
    v19 = (float)((float)(v14 * v31) * viewParams->camera.axis.m[2].v[0]) + v16;
    *(v5 - 5) = v19;
    v20 = (float)((float)(v14 * v31) * viewParams->camera.axis.m[2].v[1]) + v17;
    *(v5 - 4) = v20;
    v21 = (float)((float)(v14 * v31) * viewParams->camera.axis.m[2].v[2]) + v18;
    *(v5 - 3) = v21;
    *(v5 - 5) = (float)(v14 * viewParams->camera.axis.m[0].v[0]) + v19;
    *(v5 - 4) = (float)(v14 * viewParams->camera.axis.m[0].v[1]) + v20;
    *(v5 - 3) = (float)(v14 * viewParams->camera.axis.m[0].v[2]) + v21;
    *((_QWORD *)v5 - 1) = 0i64;
    *v5 = 0.0;
    _XMM4 = LODWORD(viewParams->camera.tanHalfFovX);
    _XMM5 = LODWORD(viewParams->camera.tanHalfFovY);
    _XMM0 = ((_BYTE)v3 + 1) & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v32 = *(float *)&_XMM1;
    _XMM0 = ((_BYTE)v3 + 1) & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm5, xmm3, xmm2
    }
    if ( (((_BYTE)v3 + 1) & 4) != 0 )
      v30 = farPlaneDist;
    else
      v30 = viewParams->camera.zPlanes[2];
    *(v5 - 2) = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * v32) ^ _xmm) * viewParams->camera.axis.m[1].v[0]) + *(v5 - 2);
    *(v5 - 1) = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * v32) ^ _xmm) * viewParams->camera.axis.m[1].v[1]) + *(v5 - 1);
    *v5 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * v32) ^ _xmm) * viewParams->camera.axis.m[1].v[2]) + *v5;
    *(v5 - 2) = (float)((float)(v30 * *(float *)&_XMM1) * viewParams->camera.axis.m[2].v[0]) + *(v5 - 2);
    *(v5 - 1) = (float)((float)(v30 * *(float *)&_XMM1) * viewParams->camera.axis.m[2].v[1]) + *(v5 - 1);
    *v5 = (float)((float)(v30 * *(float *)&_XMM1) * viewParams->camera.axis.m[2].v[2]) + *v5;
    *(v5 - 2) = (float)(v30 * viewParams->camera.axis.m[0].v[0]) + *(v5 - 2);
    *(v5 - 1) = (float)(v30 * viewParams->camera.axis.m[0].v[1]) + *(v5 - 1);
    *v5 = (float)(v30 * viewParams->camera.axis.m[0].v[2]) + *v5;
    v5 += 6;
    v3 += 2;
  }
  while ( v3 < 8 );
}

/*
==============
GetTriangleAxis
==============
*/
void GetTriangleAxis(const vec3_t *a, const vec3_t *b, const vec3_t *c, vec3_t *outAxis)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t v1; 
  vec3_t v0; 

  v4 = b->v[1];
  v5 = c->v[0];
  v1.v[0] = b->v[0] - a->v[0];
  v6 = v4 - a->v[1];
  v7 = b->v[2];
  v1.v[1] = v6;
  v8 = v7 - a->v[2];
  v9 = v5 - a->v[0];
  v1.v[2] = v8;
  v10 = c->v[1] - a->v[1];
  v0.v[0] = v9;
  v0.v[2] = c->v[2] - a->v[2];
  v0.v[1] = v10;
  Vec3Cross(&v0, &v1, outAxis);
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapErase
==============
*/
void GfxReflectionProbeLRUCache<128,211>::HashMapErase(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key)
{
  GfxReflectionProbeLRUCache<128,211> *v4; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *hashMapCells; 
  unsigned __int16 i; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  bool v11; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *v12; 

  if ( !this->cacheCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 301, ASSERT_TYPE_ASSERT, "(!CacheEmpty())", (const char *)&queryFormat, "!CacheEmpty()") )
    __debugbreak();
  v4 = (GfxReflectionProbeLRUCache<128,211> *)GfxReflectionProbeLRUCache<128,211>::HashMapFind(this, key);
  if ( v4->listNodes[0].next != key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 303, ASSERT_TYPE_ASSERT, "(cell->key == key)", (const char *)&queryFormat, "cell->key == key") )
    __debugbreak();
  hashMapCells = this->hashMapCells;
  if ( v4 != (GfxReflectionProbeLRUCache<128,211> *)&this->hashMapCells[210] )
    hashMapCells = (GfxReflectionProbeLRUCache<128,211>::HashMapCell *)&v4->listNodes[0].mapProbeIndex;
  for ( i = hashMapCells->key; hashMapCells->key != 0xFFFF; i = hashMapCells->key )
  {
    v7 = &this->hashMapCells[i % 0xD3u];
    v8 = (char *)v4 - (char *)v7;
    if ( v4 < (GfxReflectionProbeLRUCache<128,211> *)v7 )
      v8 += 844i64;
    v9 = v8 >> 2;
    v10 = (char *)hashMapCells - (char *)v7;
    if ( hashMapCells < v7 )
      v10 += 844i64;
    if ( v9 < v10 >> 2 )
    {
      *(GfxReflectionProbeLRUCache<128,211>::HashMapCell *)&v4->listNodes[0].next = *hashMapCells;
      v4 = (GfxReflectionProbeLRUCache<128,211> *)hashMapCells;
    }
    v11 = hashMapCells == &this->hashMapCells[210];
    v12 = hashMapCells + 1;
    hashMapCells = this->hashMapCells;
    if ( !v11 )
      hashMapCells = v12;
  }
  *(_DWORD *)&v4->listNodes[0].next = -1;
  --this->cacheCount;
}

/*
==============
GfxReflectionProbeLRUCache<85,151>::HashMapFind
==============
*/
GfxReflectionProbeLRUCache<85,151>::HashMapCell *GfxReflectionProbeLRUCache<85,151>::HashMapFind(GfxReflectionProbeLRUCache<85,151> *this, unsigned __int16 key)
{
  GfxReflectionProbeLRUCache<85,151>::HashMapCell *hashMapCells; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  GfxReflectionProbeLRUCache<85,151>::HashMapCell *v6; 
  bool v7; 
  __int64 v8; 

  hashMapCells = &this->hashMapCells[key % 0x97u];
  v4 = hashMapCells->key;
  if ( hashMapCells->key != 0xFFFF )
  {
    v5 = hashMapCells->key;
    do
    {
      v4 = v5;
      if ( v5 == key )
        break;
      v6 = hashMapCells + 1;
      v7 = hashMapCells == &this->hashMapCells[150];
      hashMapCells = this->hashMapCells;
      if ( !v7 )
        hashMapCells = v6;
      v4 = hashMapCells->key;
      v5 = hashMapCells->key;
    }
    while ( hashMapCells->key != 0xFFFF );
  }
  v8 = 0i64;
  if ( v4 != 0xFFFF )
    return hashMapCells;
  return (GfxReflectionProbeLRUCache<85,151>::HashMapCell *)v8;
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapFind
==============
*/
GfxReflectionProbeLRUCache<128,211>::HashMapCell *GfxReflectionProbeLRUCache<128,211>::HashMapFind(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key)
{
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *hashMapCells; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *v6; 
  bool v7; 
  __int64 v8; 

  hashMapCells = &this->hashMapCells[key % 0xD3u];
  v4 = hashMapCells->key;
  if ( hashMapCells->key != 0xFFFF )
  {
    v5 = hashMapCells->key;
    do
    {
      v4 = v5;
      if ( v5 == key )
        break;
      v6 = hashMapCells + 1;
      v7 = hashMapCells == &this->hashMapCells[210];
      hashMapCells = this->hashMapCells;
      if ( !v7 )
        hashMapCells = v6;
      v4 = hashMapCells->key;
      v5 = hashMapCells->key;
    }
    while ( hashMapCells->key != 0xFFFF );
  }
  v8 = 0i64;
  if ( v4 != 0xFFFF )
    return hashMapCells;
  return (GfxReflectionProbeLRUCache<128,211>::HashMapCell *)v8;
}

/*
==============
GfxReflectionProbeLRUCache<85,151>::HashMapInsert
==============
*/
GfxReflectionProbeLRUCache<85,151>::HashMapCell *GfxReflectionProbeLRUCache<85,151>::HashMapInsert(GfxReflectionProbeLRUCache<85,151> *this, unsigned __int16 key, unsigned __int16 value)
{
  GfxReflectionProbeLRUCache<85,151>::HashMapCell *result; 
  bool v7; 
  GfxReflectionProbeLRUCache<85,151>::HashMapCell *v8; 

  if ( this->cacheCount == 85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 333, ASSERT_TYPE_ASSERT, "(!CacheFull())", (const char *)&queryFormat, "!CacheFull()") )
    __debugbreak();
  result = &this->hashMapCells[key % 0x97u];
  while ( result->key != 0xFFFF )
  {
    v7 = result == &this->hashMapCells[150];
    v8 = result + 1;
    result = this->hashMapCells;
    if ( !v7 )
      result = v8;
  }
  result->value = value;
  result->key = key;
  ++this->cacheCount;
  return result;
}

/*
==============
GfxReflectionProbeLRUCache<128,211>::HashMapInsert
==============
*/
GfxReflectionProbeLRUCache<128,211>::HashMapCell *GfxReflectionProbeLRUCache<128,211>::HashMapInsert(GfxReflectionProbeLRUCache<128,211> *this, unsigned __int16 key, unsigned __int16 value)
{
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *result; 
  bool v7; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *v8; 

  if ( this->cacheCount == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 333, ASSERT_TYPE_ASSERT, "(!CacheFull())", (const char *)&queryFormat, "!CacheFull()") )
    __debugbreak();
  result = &this->hashMapCells[key % 0xD3u];
  while ( result->key != 0xFFFF )
  {
    v7 = result == &this->hashMapCells[210];
    v8 = result + 1;
    result = this->hashMapCells;
    if ( !v7 )
      result = v8;
  }
  result->value = value;
  result->key = key;
  ++this->cacheCount;
  return result;
}

/*
==============
Load_ImageReflectionProbe
==============
*/
void Load_ImageReflectionProbe(unsigned __int8 **pixelsPtr, GfxImageReflectionProbe *image)
{
  unsigned __int8 *v5; 
  __m256i v7; 
  __m256i v8; 
  GfxTexture_CreateParams params; 
  __m256i v10; 

  if ( !pixelsPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3715, ASSERT_TYPE_ASSERT, "(pixelsPtr)", (const char *)&queryFormat, "pixelsPtr") )
    __debugbreak();
  v5 = *pixelsPtr;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3718, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  if ( image->pixels != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3719, ASSERT_TYPE_ASSERT, "(image->pixels == pixels)", (const char *)&queryFormat, "image->pixels == pixels") )
    __debugbreak();
  v7.m256i_i32[2] = 1;
  v7.m256i_i32[4] = 0;
  v8.m256i_i64[0] = 0i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v8.m256i_u64[1] = _XMM0;
  v7.m256i_i32[3] = image->elementCount;
  v7.m256i_i64[0] = 0x10000000100i64;
  v7.m256i_i32[5] = 0x20000;
  v7.m256i_i32[6] = 42;
  v10 = v7;
  v10.m256i_i32[4] = 6;
  v8.m256i_i32[6] = -1;
  *(__m256i *)&params.params.width = v10;
  *(__m256i *)&params.params.customAllocFunc = v8;
  params.name = "<raw reflection probe>";
  params.pixels = v5;
  image->textureId = R_Texture_CreateWithTiledPixelsData(&params);
}

/*
==============
RB_ReflectionProbe_DrawSH
==============
*/
void RB_ReflectionProbe_DrawSH(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  __m256i m_mainSceneColorRt; 
  GfxCmdBufContext v11; 
  GfxCmdBufState *v13; 
  bool v14; 
  R_RT_DepthHandle m_mainSceneDepthRt; 
  __m256i v18; 
  R_RT_Group v19; 
  GfxCmdBufContext result[2]; 
  R_RT_Group v21; 

  if ( r_reflectionProbeDebugMode->current.integer && s_world.draw.reflectionProbeData.reflectionProbeCount )
  {
    state = context->state;
    source = context->source;
    R_InitCmdBufSourceState(context->source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_InitCmdBufState(state);
    }
    else
    {
      R_LockGfxImmediateContext();
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
      __asm { vpextrq rdx, xmm0, 1; in }
      if ( state != _RDX )
        GfxCmdBufState::Copy(state, _RDX);
    }
    memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
    memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
    memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
    state->data = source->input.data;
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    *(R_RT_ColorHandle *)&result[0].source = viewInfo->sceneRtInput.m_mainSceneColorRt;
    height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    m_mainSceneColorRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
    v11 = *context;
    m_mainSceneDepthRt = viewInfo->sceneRtInput.m_mainSceneDepthRt;
    *(R_RT_DepthHandle *)&result[0].source = m_mainSceneDepthRt;
    v18 = m_mainSceneColorRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
      m_mainSceneDepthRt = *(R_RT_DepthHandle *)&result[0].source;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    v19.m_colorRtCount = 1;
    *(__m256i *)&result[0].source = m_mainSceneColorRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
    }
    else
    {
      if ( v18.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v19.m_colorRts[0] = (R_RT_ColorHandle)m_mainSceneColorRt;
    v19.m_depthRt = m_mainSceneDepthRt;
    v21 = v19;
    result[0] = v11;
    R_SetRenderTargetsInternal(result, &v21, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1873)");
    result[0] = v11;
    R_Set3D(v11.source);
    v13 = result[0].state;
    if ( (*((_BYTE *)v11.source + 11668) & 2) != 0 )
    {
      R_GetViewport(v11.source, (GfxViewport *)result);
      R_SetViewportAndScissorSeparate(v13, (const GfxViewport *)result, (const GfxViewport *)result);
      R_UpdateViewport(v11.source, (const GfxViewport *)result);
    }
    if ( v13->vertDeclType != VERTDECL_GENERIC )
      v13->pipelineStateDirty = 1;
    v14 = v13->depthRangeType == GFX_DEPTH_RANGE_SCENE;
    v13->vertDeclType = VERTDECL_GENERIC;
    if ( !v14 )
      R_ChangeDepthRange(v13, GFX_DEPTH_RANGE_SCENE);
    if ( R_BeginMaterial(v13, rgp.reflectionProbeSHDebug, TECHNIQUE_EMISSIVE) )
    {
      result[0] = *context;
      if ( R_SetupPass(result) )
      {
        result[0] = *context;
        R_SetupPassStableArgsInternal(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1910)");
        result[0] = *context;
        R_SetupPassPerObjectArgsInternal(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1911)");
        result[0] = *context;
        R_GpuLightGrid_DrawDebugSpheres(result, s_world.draw.reflectionProbeData.reflectionProbeInstanceCount);
      }
    }
    R_ResetRenderTargets(state);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(state);
      R_UnlockIfGfxImmediateContext(state->device);
    }
    else
    {
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
      __asm { vpextrq rcx, xmm0, 1; out }
      if ( state != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, state);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
RB_ReflectionProbe_IsOverlayEnabled
==============
*/
__int64 RB_ReflectionProbe_IsOverlayEnabled()
{
  return r_reflectionProbeShowProbeImage->current.unsignedInt;
}

/*
==============
RB_ReflectionProbe_Overlay
==============
*/
void RB_ReflectionProbe_Overlay(GfxCmdBufContext *gfxContext, unsigned int frameIndex, int probeIndexToShow)
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  GfxImage *p_frameCacheImageOctahedron; 
  int numElements; 
  GfxImage *blackImageCube; 
  float v9; 
  GfxCmdBufSourceState *source; 
  int integer; 
  int levelCount; 
  float renderTargetWidth; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  GfxCmdBufSourceState *v21; 
  GfxCmdBufContext v22; 
  GfxWorldDraw *v23; 
  GfxReflectionProbeTransientData *v24; 
  GfxReflectionProbe *v25; 
  unsigned __int16 probeRelightingIndex; 
  GfxImage **reflectionProbeGBufferImages_octahedron; 
  unsigned int *p_reflectionProbeIndex; 
  float v29; 
  float v30; 
  __int64 v31; 
  GfxCmdBufSourceState *v32; 
  GfxCmdBufContext v33; 
  __int64 v34; 
  GfxCmdBufSourceState *v35; 
  GfxCmdBufContext v36; 
  __int64 v37; 
  GfxCmdBufSourceState *v38; 
  GfxCmdBufContext v39; 
  GfxReflectionProbeTransientData *v40; 
  GfxImage *p_frameCacheImage; 
  int v42; 
  int v43; 
  int v44; 
  float v45; 
  float v46; 
  float v47; 
  GfxWorldDraw *v48; 
  GfxReflectionProbeTransientData *v49; 
  GfxReflectionProbe *v50; 
  unsigned __int16 v51; 
  GfxImage **reflectionProbeGBufferImages; 
  unsigned int *v53; 
  float v54; 
  float v55; 
  __int64 v56; 
  const GfxImage *v57; 
  __int64 v58; 
  const GfxImage *v59; 
  __int64 v60; 
  const GfxImage *v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  GfxCmdBufContext v66; 

  if ( rg.useRProbeOctahedron )
  {
    if ( g_worldDraw->reflectionProbeData.reflectionProbeImages || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
    {
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 700, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID") )
        __debugbreak();
      p_frameCacheImageOctahedron = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron;
    }
    else
    {
      p_frameCacheImageOctahedron = rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron;
    }
    numElements = p_frameCacheImageOctahedron->numElements;
    blackImageCube = rgp.blackImageCube;
    if ( numElements <= probeIndexToShow )
      probeIndexToShow = numElements - 1;
    v9 = (float)probeIndexToShow;
    source = gfxContext->source;
    integer = r_reflectionProbeShowProbeImageMip->current.integer;
    levelCount = p_frameCacheImageOctahedron->levelCount;
    renderTargetWidth = (float)gfxContext->source->renderTargetWidth;
    v14 = renderTargetWidth * 0.15000001;
    if ( levelCount <= integer )
      integer = levelCount - 1;
    v15 = (float)(renderTargetWidth - (float)(renderTargetWidth * 0.15000001)) * 0.5;
    v17 = (float)integer;
    v16 = v17;
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[4] = blackImageCube;
    v19 = gfxContext->source;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v20 = &v19->input;
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v21 = gfxContext->source;
    v22 = *gfxContext;
    v21->input.consts[150].v[1] = v17;
    v21->input.consts[150].v[2] = v9;
    v21->input.consts[150].v[0] = -1.0;
    v21->input.consts[150].v[3] = 1.0;
    v20->codeImages[5] = p_frameCacheImageOctahedron;
    ++v21->constVersions[150];
    v66 = v22;
    RB_DrawStretchPic(&v66, rgp.reflectionProbeDebug, v15, 8.0, v14, v14, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
    v66 = *gfxContext;
    RB_EndTessSurfaceInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2089)");
    v23 = g_worldDraw;
    if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
    {
      v24 = g_worldDraw->transientZones[0]->reflectionProbes;
      if ( !v24 || !v24->exclusiveProbeCount )
      {
        v25 = &g_worldDraw->reflectionProbeData.reflectionProbes[v9];
        probeRelightingIndex = v25->probeRelightingIndex;
        if ( probeRelightingIndex != 0xFFFF )
        {
          if ( probeRelightingIndex >= g_worldDraw->reflectionProbeData.probeRelightingCount )
          {
            LODWORD(v64) = g_worldDraw->reflectionProbeData.probeRelightingCount;
            LODWORD(v62) = probeRelightingIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v62, v64) )
              __debugbreak();
            v23 = g_worldDraw;
          }
          reflectionProbeGBufferImages_octahedron = v23->reflectionProbeData.reflectionProbeGBufferImages_octahedron;
          p_reflectionProbeIndex = &v23->reflectionProbeData.probeRelightingData[v25->probeRelightingIndex].reflectionProbeIndex;
          v29 = v14 + 8.0;
          v30 = v15 + (float)(v14 + 8.0);
          v31 = p_reflectionProbeIndex[2];
          if ( (_DWORD)v31 != -1 )
          {
            v32 = gfxContext->source;
            R_SetCodeImageTextureInternal(gfxContext->source, 5u, reflectionProbeGBufferImages_octahedron[v31], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2107)");
            v33 = *gfxContext;
            v32->input.consts[150].v[1] = v16;
            v32->input.consts[150].v[2] = v9;
            v32->input.consts[150].v[0] = -1.0;
            v32->input.consts[150].v[3] = 1.0;
            ++v32->constVersions[150];
            v66 = v33;
            RB_DrawStretchPic(&v66, rgp.reflectionProbeDebug, v30, 8.0, v14, v14, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            v66 = *gfxContext;
            RB_EndTessSurfaceInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2110)");
          }
          v34 = p_reflectionProbeIndex[3];
          if ( (_DWORD)v34 != -1 )
          {
            v35 = gfxContext->source;
            R_SetCodeImageTextureInternal(gfxContext->source, 5u, reflectionProbeGBufferImages_octahedron[v34], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2118)");
            v36 = *gfxContext;
            v35->input.consts[150].v[1] = v16;
            v35->input.consts[150].v[2] = v9;
            v35->input.consts[150].v[0] = -1.0;
            v35->input.consts[150].v[3] = 1.0;
            ++v35->constVersions[150];
            v66 = v36;
            RB_DrawStretchPic(&v66, rgp.reflectionProbeDebug, v30, v29 + 8.0, v14, v14, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            v66 = *gfxContext;
            RB_EndTessSurfaceInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2121)");
          }
          v37 = p_reflectionProbeIndex[4];
          if ( (_DWORD)v37 != -1 )
          {
            v38 = gfxContext->source;
            R_SetCodeImageTextureInternal(gfxContext->source, 5u, reflectionProbeGBufferImages_octahedron[v37], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2128)");
            v39 = *gfxContext;
            v38->input.consts[150].v[1] = v16;
            v38->input.consts[150].v[2] = v9;
            v38->input.consts[150].v[0] = -1.0;
            v38->input.consts[150].v[3] = 1.0;
            ++v38->constVersions[150];
            v66 = v39;
            RB_DrawStretchPic(&v66, rgp.reflectionProbeDebug, v30, v29 + (float)(v29 + 8.0), v14, v14, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            v66 = *gfxContext;
            RB_EndTessSurfaceInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2131)");
          }
        }
      }
    }
  }
  else
  {
    if ( g_worldDraw->reflectionProbeData.reflectionProbeImages || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (v40 = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && v40->exclusiveProbeCount )
    {
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 624, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID") )
        __debugbreak();
      p_frameCacheImage = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage;
    }
    else
    {
      p_frameCacheImage = rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage;
    }
    v42 = p_frameCacheImage->numElements;
    v43 = p_frameCacheImage->levelCount;
    if ( v42 <= probeIndexToShow )
      probeIndexToShow = v42 - 1;
    v44 = r_reflectionProbeShowProbeImageMip->current.integer;
    if ( v43 <= v44 )
      v44 = v43 - 1;
    v45 = (float)gfxContext->source->renderTargetWidth;
    v46 = v45 * 0.050000001;
    v47 = (float)((float)(v45 - (float)(v45 * 0.050000001)) * 0.5) - (float)((float)(v45 * 0.050000001) * 2.0);
    v66 = *gfxContext;
    R_ReflectionProbe_OverlayCube(&v66, p_frameCacheImage, (float)probeIndexToShow, (float)v44, v47, 8.0, v46, v46);
    v48 = g_worldDraw;
    if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
    {
      v49 = g_worldDraw->transientZones[0]->reflectionProbes;
      if ( !v49 || !v49->exclusiveProbeCount )
      {
        v50 = &g_worldDraw->reflectionProbeData.reflectionProbes[probeIndexToShow];
        v51 = v50->probeRelightingIndex;
        if ( v51 != 0xFFFF )
        {
          if ( v51 >= g_worldDraw->reflectionProbeData.probeRelightingCount )
          {
            LODWORD(v65) = g_worldDraw->reflectionProbeData.probeRelightingCount;
            LODWORD(v63) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2160, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v63, v65) )
              __debugbreak();
            v48 = g_worldDraw;
          }
          reflectionProbeGBufferImages = v48->reflectionProbeData.reflectionProbeGBufferImages;
          v53 = &v48->reflectionProbeData.probeRelightingData[v50->probeRelightingIndex].reflectionProbeIndex;
          v54 = (float)((float)(v45 * 0.050000001) * 3.0) + 8.0;
          v55 = v47 + (float)((float)(v46 * 4.0) + 8.0);
          v56 = v53[2];
          if ( (_DWORD)v56 != -1 )
          {
            v57 = reflectionProbeGBufferImages[v56];
            v66 = *gfxContext;
            R_ReflectionProbe_OverlayCubeGBuffer(&v66, v57, v47 + (float)((float)(v46 * 4.0) + 8.0), 8.0, v46, v46);
          }
          v58 = v53[3];
          if ( (_DWORD)v58 != -1 )
          {
            v59 = reflectionProbeGBufferImages[v58];
            v66 = *gfxContext;
            R_ReflectionProbe_OverlayCubeGBuffer(&v66, v59, v55, v54 + 8.0, v46, v46);
          }
          v60 = v53[4];
          if ( (_DWORD)v60 != -1 )
          {
            v61 = reflectionProbeGBufferImages[v60];
            v66 = *gfxContext;
            R_ReflectionProbe_OverlayCubeGBuffer(&v66, v61, v55, v54 + (float)(v54 + 8.0), v46, v46);
          }
        }
      }
    }
  }
}

/*
==============
RB_ReflectionProbe_ProcessView
==============
*/
void RB_ReflectionProbe_ProcessView(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxReflectionProbeFrameData *v6; 
  __int64 obbCount; 

  R_LockIfGfxImmediateContext(computeState->device);
  R_ProfBeginNamedEvent(computeState, "reflection probe process view");
  v6 = &s_gfxReflectionProbeStaticData.bufferArray[data->reflectionProbeFrameIndex];
  obbCount = v6->probeCount;
  if ( (_DWORD)obbCount )
  {
    R_UpdateGfxWrappedBuffer(&v6->probeInstanceBuffer, v6->writeProbeInstanceData, 68 * obbCount);
    R_UpdateGfxWrappedBuffer(&v6->probeObbBuffer, v6->writeProbeObbData, 60 * obbCount);
    R_UpdateGfxWrappedBuffer(&v6->lightgridOverrideBuffer, v6->writeLightgridOverride, 0xCu);
    R_UpdateGfxWrappedBuffer(&v6->probeZBinBuffer, v6->writeZBinData, 0x8000u);
    if ( r_reflectionProbeUsePrebin->current.enabled )
    {
      R_UpdateGfxWrappedBuffer(&v6->probePrebinBuffer, v6->writePrebinData, 4 * ((unsigned __int64)(obbCount + 31) >> 5) * (viewInfo->frustumGrid.clusterCountY + viewInfo->frustumGrid.clusterCountX + 32));
      R_FrustumGridClustering_ClusterOBBs_Prebinned(computeState, viewInfo, data, &v6->probeObbBuffer, &v6->probePrebinBuffer, &s_gfxReflectionProbeStaticData.probeClusterBuffer, obbCount, 0);
    }
    else
    {
      R_FrustumGridClustering_ClusterOBBs(computeState, viewInfo, data, &v6->probeObbBuffer, &s_gfxReflectionProbeStaticData.probeClusterBuffer, obbCount, 0);
    }
  }
  R_ProfEndNamedEvent(computeState);
  R_ReflectionProbe_CopyProbesToFrameCache(computeState, data);
  R_UnlockIfGfxImmediateContext(computeState->device);
}

/*
==============
R_AddDebugFlatLineLoop
==============
*/
void R_AddDebugFlatLineLoop(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const vec3_t *u, const vec3_t *v, const float size, const vec2_t *vertices, const unsigned int vertexCount, const vec4_t *color)
{
  const vec2_t *v8; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t end; 
  vec3_t start; 

  v8 = vertices;
  v13 = vertexCount - 1;
  v14 = vertices[v13].v[0];
  v15 = vertices[v13].v[1];
  v16 = v15 * v->v[1];
  end.v[0] = (float)((float)((float)(v14 * u->v[0]) + (float)(v15 * v->v[0])) * size) + origin->v[0];
  v17 = (float)((float)(v14 * u->v[2]) + (float)(v15 * v->v[2])) * size;
  end.v[1] = (float)((float)(v16 + (float)(v14 * u->v[1])) * size) + origin->v[1];
  end.v[2] = v17 + origin->v[2];
  if ( vertexCount )
  {
    v18 = vertexCount;
    do
    {
      v19 = v8->v[0];
      v20 = v8->v[1];
      v21 = v8->v[0] * u->v[0];
      *(double *)start.v = *(double *)end.v;
      v22 = v20 * v->v[2];
      v23 = (float)((float)(v20 * v->v[1]) + (float)(v19 * u->v[1])) * size;
      v24 = v19 * u->v[2];
      end.v[0] = (float)((float)(v21 + (float)(v20 * v->v[0])) * size) + origin->v[0];
      end.v[1] = v23 + origin->v[1];
      v25 = (float)((float)(v24 + v22) * size) + origin->v[2];
      start.v[2] = end.v[2];
      end.v[2] = v25;
      R_AddDebugLine(debugGlobalsEntry, &start, &end, color);
      ++v8;
      --v18;
    }
    while ( v18 );
  }
}

/*
==============
R_AddDebugLocationFinder
==============
*/
void R_AddDebugLocationFinder(DebugGlobals *debugGlobalsEntry, const GfxCamera *const camera, const vec3_t *pos, const vec4_t *color, const char *message)
{
  float v5; 
  __int128 v6; 
  float v7; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v14; 
  float v15; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float *v44; 
  __int64 v45; 
  float v46; 
  float v47; 
  vec3_t v0; 
  vec3_t origin; 
  vec3_t cross; 
  __m256i vertices; 
  __int128 v52; 
  float v53; 
  float v54; 

  v5 = pos->v[0] - camera->origin.v[0];
  v10 = LODWORD(pos->v[1]);
  *(float *)&v10 = pos->v[1] - camera->origin.v[1];
  v6 = v10;
  v7 = pos->v[2] - camera->origin.v[2];
  v9 = (float)((float)(*(float *)&v10 * camera->axis.m[1].v[1]) + (float)(v5 * camera->axis.m[1].v[0])) + (float)(v7 * camera->axis.m[1].v[2]);
  *(float *)&v10 = (float)((float)(*(float *)&v10 * camera->axis.m[2].v[1]) + (float)(v5 * camera->axis.m[2].v[0])) + (float)(v7 * camera->axis.m[2].v[2]);
  v11 = (float)((float)(*(float *)&v6 * camera->axis.m[0].v[1]) + (float)(v5 * camera->axis.m[0].v[0])) + (float)(v7 * camera->axis.m[0].v[2]);
  if ( v11 <= 0.0 )
  {
    *(float *)&v10 = fsqrt((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9));
    _XMM2 = v10;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    v14 = (float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * 10.0;
    v15 = (float)((float)((float)((float)(*(float *)&v6 * camera->axis.m[2].v[1]) + (float)(v5 * camera->axis.m[2].v[0])) + (float)(v7 * camera->axis.m[2].v[2])) * (float)(1.0 / *(float *)&_XMM0)) * 10.0;
  }
  else
  {
    v14 = v9 * (float)(1.0 / v11);
    v15 = *(float *)&v10 * (float)(1.0 / v11);
  }
  v19 = 0.80000001 * camera->tanHalfFovY;
  v20 = I_fclamp(v14, COERCE_FLOAT(COERCE_UNSIGNED_INT(0.80000001 * camera->tanHalfFovX) ^ _xmm), 0.80000001 * camera->tanHalfFovX);
  v21 = *(float *)&v20;
  v22 = I_fclamp(v15, COERCE_FLOAT(LODWORD(v19) ^ _xmm), v19);
  v23 = *(float *)&v22 * camera->axis.m[2].v[1];
  v24 = v21 * camera->axis.m[1].v[1];
  origin.v[0] = (float)((float)((float)((float)(*(float *)&v22 * camera->axis.m[2].v[0]) + (float)(v21 * camera->axis.m[1].v[0])) + camera->axis.m[0].v[0]) * 1024.0) + camera->origin.v[0];
  v25 = *(float *)&v22 * camera->axis.m[2].v[2];
  v26 = *(float *)&v22;
  *(float *)&v22 = v21 * camera->axis.m[1].v[2];
  origin.v[1] = (float)((float)((float)(v23 + v24) + camera->axis.m[0].v[1]) * 1024.0) + camera->origin.v[1];
  origin.v[2] = (float)((float)((float)(v25 + *(float *)&v22) + camera->axis.m[0].v[2]) * 1024.0) + camera->origin.v[2];
  vertices = _ymm;
  R_AddDebugFlatLineLoop(debugGlobalsEntry, &origin, &camera->axis.m[1], &camera->axis.m[2], 8.0, (const vec2_t *)&vertices, 4u, color);
  if ( message )
    R_AddScaledDebugString(debugGlobalsEntry, camera, &origin, color, message);
  if ( v14 != v21 || v15 != v26 )
  {
    v27 = v6;
    *(float *)&v27 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v5 * v5)) + (float)(v7 * v7));
    _XMM3 = v27;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v31 = v5 * (float)(1.0 / *(float *)&_XMM0);
    v32 = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
    v33 = v7 * (float)(1.0 / *(float *)&_XMM0);
    v0.v[0] = v31;
    v0.v[1] = v32;
    v0.v[2] = v33;
    Vec3Cross(&v0, camera->axis.m, &cross);
    v34 = origin.v[1];
    v35 = LODWORD(cross.v[0]);
    *(float *)&v35 = fsqrt((float)((float)(*(float *)&v35 * *(float *)&v35) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
    _XMM3 = v35;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v39 = origin.v[0];
    v40 = origin.v[2];
    vertices = _ymm_bf8000003f800000000000003f000000000000003f8000003f80000000000000;
    v53 = FLOAT_N1_0;
    v41 = (float)(1.0 / *(float *)&_XMM0) * cross.v[0];
    v54 = 0.0;
    v42 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v43 = (float)(1.0 / *(float *)&_XMM0) * cross.v[1];
    v0.v[0] = origin.v[0] - (float)(v41 * 48.0);
    v52 = _xmm;
    v0.v[1] = origin.v[1] - (float)(v43 * 48.0);
    v0.v[2] = origin.v[2] - (float)(v42 * 48.0);
    v44 = (float *)&vertices.m256i_i32[1];
    v45 = 7i64;
    while ( 1 )
    {
      v46 = *(v44 - 1);
      v47 = *v44;
      cross = v0;
      v0.v[0] = (float)((float)((float)(v41 * v46) + (float)(v31 * v47)) * 48.0) + v39;
      v0.v[1] = (float)((float)((float)(v43 * v46) + (float)(v32 * v47)) * 48.0) + v34;
      v0.v[2] = (float)((float)((float)(v42 * v46) + (float)(v33 * v47)) * 48.0) + v40;
      R_AddDebugLine(debugGlobalsEntry, &cross, &v0, color);
      v44 += 2;
      if ( !--v45 )
        break;
      v40 = origin.v[2];
      v34 = origin.v[1];
      v39 = origin.v[0];
    }
  }
}

/*
==============
R_AddTransformedReflectionProbeInstancesToScene
==============
*/
void R_AddTransformedReflectionProbeInstancesToScene(const vec3_t *origin, const vec3_t *angles, const unsigned int reflectionProbeIndex)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int reflectionProbeCount; 
  __int64 v12; 
  GfxReflectionProbe *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  unsigned __int16 probeInstanceCount; 
  float v22; 
  float v23; 
  __int64 v24; 
  GfxReflectionProbeInstance *v25; 
  GfxReflectionProbeInstance *p_outReflectionProbeInstance; 
  float v27; 
  float v28; 
  float v29; 
  unsigned __int16 probeRelightingIndex; 
  vec4_t probeRotation; 
  vec3_t in; 
  vec3_t out; 
  vec4_t quat; 
  vec4_t v35; 
  GfxReflectionProbeInstance reflectionProbeInstance; 
  GfxReflectionProbeInstance outReflectionProbeInstance; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 

  reflectionProbeCount = g_worldDraw->reflectionProbeData.reflectionProbeCount;
  v43 = v3;
  v42 = v4;
  v41 = v5;
  v40 = v6;
  v39 = v7;
  v38 = v8;
  v12 = reflectionProbeIndex;
  if ( reflectionProbeIndex >= reflectionProbeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3254, ASSERT_TYPE_ASSERT, "(unsigned)( reflectionProbeIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.reflectionProbeCount )", "reflectionProbeIndex doesn't index g_worldDraw->reflectionProbeData.reflectionProbeCount\n\t%i not in [0, %i)", reflectionProbeIndex, reflectionProbeCount) )
    __debugbreak();
  v13 = &g_worldDraw->reflectionProbeData.reflectionProbes[v12];
  AnglesToQuat(&v13->angles, &quat);
  v14 = quat.v[3];
  LODWORD(v15) = LODWORD(quat.v[0]) ^ _xmm;
  LODWORD(v16) = LODWORD(quat.v[2]) ^ _xmm;
  LODWORD(v17) = LODWORD(quat.v[1]) ^ _xmm;
  AnglesToQuat(angles, &v35);
  v18 = 0i64;
  probeRotation.v[0] = (float)((float)((float)(v35.v[3] * v15) + (float)(v35.v[0] * v14)) + (float)(v35.v[1] * v16)) - (float)(v35.v[2] * v17);
  LODWORD(v19) = LODWORD(probeRotation.v[0]) ^ _xmm;
  v20 = (float)((float)((float)(v35.v[3] * v14) - (float)(v35.v[0] * v15)) - (float)(v35.v[1] * v17)) - (float)(v35.v[2] * v16);
  probeRotation.v[3] = v20;
  probeRotation.v[1] = (float)((float)((float)(v35.v[3] * v17) - (float)(v35.v[0] * v16)) + (float)(v35.v[1] * v14)) + (float)(v35.v[2] * v15);
  probeRotation.v[2] = (float)((float)((float)(v35.v[0] * v17) + (float)(v35.v[3] * v16)) - (float)(v35.v[1] * v15)) + (float)(v35.v[2] * v14);
  probeInstanceCount = v13->probeInstanceCount;
  LODWORD(v22) = LODWORD(probeRotation.v[1]) ^ _xmm;
  LODWORD(v23) = LODWORD(probeRotation.v[2]) ^ _xmm;
  if ( probeInstanceCount )
  {
    v24 = probeInstanceCount;
    do
    {
      v25 = &g_worldDraw->reflectionProbeData.reflectionProbeInstances[v13->probeInstances[v18]];
      if ( (v25->flags & 0x80u) != 0 && R_RadiantRemoteGetGfxReflectionProbeInstance(v25->livePath, &outReflectionProbeInstance) )
      {
        p_outReflectionProbeInstance = &outReflectionProbeInstance;
        if ( outReflectionProbeInstance.probeImageIndex != (_DWORD)v12 )
          p_outReflectionProbeInstance = v25;
        v25 = p_outReflectionProbeInstance;
      }
      if ( v25->probeImageIndex != (_DWORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3297, ASSERT_TYPE_ASSERT, "(srcReflectionProbeInstance->probeImageIndex == reflectionProbeIndex)", (const char *)&queryFormat, "srcReflectionProbeInstance->probeImageIndex == reflectionProbeIndex") )
        __debugbreak();
      reflectionProbeInstance.livePath = NULL;
      reflectionProbeInstance.feather = v25->feather;
      reflectionProbeInstance.flags = v25->flags & 0x7F;
      reflectionProbeInstance.priority = v25->priority;
      if ( (unsigned int)v12 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v12, "unsigned", v12) )
        __debugbreak();
      reflectionProbeInstance.probeImageIndex = v12;
      reflectionProbeInstance.lodLevel = v25->lodLevel;
      in.v[0] = v25->volumeObb.center.v[0] - v25->probePosition.v[0];
      in.v[1] = v25->volumeObb.center.v[1] - v25->probePosition.v[1];
      in.v[2] = v25->volumeObb.center.v[2] - v25->probePosition.v[2];
      QuatTransform(&probeRotation, &in, &out);
      v27 = origin->v[0];
      v28 = origin->v[1];
      v29 = origin->v[2];
      reflectionProbeInstance.volumeObb.center.v[0] = origin->v[0] + out.v[0];
      reflectionProbeInstance.volumeObb.center.v[2] = v29 + out.v[2];
      reflectionProbeInstance.volumeObb.center.v[1] = v28 + out.v[1];
      reflectionProbeInstance.probePosition.v[0] = v27;
      reflectionProbeInstance.probePosition.v[1] = v28;
      reflectionProbeInstance.probePosition.v[2] = v29;
      QuatTransform(&probeRotation, &v25->volumeObb.xAxis, &reflectionProbeInstance.volumeObb.xAxis);
      QuatTransform(&probeRotation, &v25->volumeObb.yAxis, &reflectionProbeInstance.volumeObb.yAxis);
      QuatTransform(&probeRotation, &v25->volumeObb.zAxis, &reflectionProbeInstance.volumeObb.zAxis);
      reflectionProbeInstance.volumeObb.halfSize = v25->volumeObb.halfSize;
      reflectionProbeInstance.probeRotation.v[0] = v19;
      reflectionProbeInstance.probeRotation.v[1] = v22;
      reflectionProbeInstance.probeRotation.v[2] = v23;
      reflectionProbeInstance.probeRotation.v[3] = v20;
      reflectionProbeInstance.expandProjectionNeg = v25->expandProjectionNeg;
      reflectionProbeInstance.expandProjectionPos = v25->expandProjectionPos;
      R_AddReflectionProbeInstanceToScene(&reflectionProbeInstance);
      ++v18;
      --v24;
    }
    while ( v24 );
  }
  probeRelightingIndex = v13->probeRelightingIndex;
  if ( probeRelightingIndex != 0xFFFF )
    R_ReflectionProbeRelighting_SetProbeTransform(probeRelightingIndex, origin, &probeRotation);
}

/*
==============
R_ExecuteReflectionProbeProcessViewComputeBuffer
==============
*/
void R_ExecuteReflectionProbeProcessViewComputeBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedRWBuffer *probeClusterBuffer)
{
  GfxReflectionProbeFrameData *v6; 
  __int64 obbCount; 

  v6 = &s_gfxReflectionProbeStaticData.bufferArray[data->reflectionProbeFrameIndex];
  obbCount = v6->probeCount;
  if ( (_DWORD)obbCount )
  {
    R_UpdateGfxWrappedBuffer(&v6->probeInstanceBuffer, v6->writeProbeInstanceData, 68 * obbCount);
    R_UpdateGfxWrappedBuffer(&v6->probeObbBuffer, v6->writeProbeObbData, 60 * obbCount);
    R_UpdateGfxWrappedBuffer(&v6->lightgridOverrideBuffer, v6->writeLightgridOverride, 0xCu);
    R_UpdateGfxWrappedBuffer(&v6->probeZBinBuffer, v6->writeZBinData, 0x8000u);
    if ( r_reflectionProbeUsePrebin->current.enabled )
    {
      R_UpdateGfxWrappedBuffer(&v6->probePrebinBuffer, v6->writePrebinData, 4 * ((unsigned __int64)(obbCount + 31) >> 5) * (viewInfo->frustumGrid.clusterCountY + viewInfo->frustumGrid.clusterCountX + 32));
      R_FrustumGridClustering_ClusterOBBs_Prebinned(computeState, viewInfo, data, &v6->probeObbBuffer, &v6->probePrebinBuffer, probeClusterBuffer, obbCount, 0);
    }
    else
    {
      R_FrustumGridClustering_ClusterOBBs(computeState, viewInfo, data, &v6->probeObbBuffer, probeClusterBuffer, obbCount, 0);
    }
  }
}

/*
==============
R_ReflectionProbeSH_UseOfflineShader
==============
*/
bool R_ReflectionProbeSH_UseOfflineShader()
{
  return 0;
}

/*
==============
R_ReflectionProbe_AddProbesToDraw
==============
*/
void R_ReflectionProbe_AddProbesToDraw(void)
{
  const dvar_t *v0; 
  GfxBackEndData *v1; 
  GfxReflectionProbeFrameData *v2; 
  unsigned int v3; 
  GfxReflectionProbeInstance *Instance; 
  __int64 probeImageIndex; 
  GfxReflectionProbe *v6; 
  char v7; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  float value; 
  __int64 v13; 
  __m128 v14; 
  __m128 v15; 
  float v16; 
  float v17; 
  base_vec4_t<unsigned int> scriptablePackedColorEmissive; 
  GfxScaledPlacement placement; 
  __int128 v20; 
  vec3_t probePosition; 
  float v22; 

  v0 = scr_debug_reflection;
  if ( scr_debug_reflection->current.integer )
  {
    v1 = frontEndDataOut;
    scriptablePackedColorEmissive = 0ui64;
    placement.scale = FLOAT_1_0;
    v22 = FLOAT_1_0;
    placement.base.quat = (vec4_t)_xmm;
    v20 = _xmm;
    if ( (unsigned int)(scr_debug_reflection->current.integer - 2) <= 1 )
    {
      v2 = &s_gfxReflectionProbeStaticData.bufferArray[frontEndDataOut->reflectionProbeFrameIndex];
      if ( !v2->visibleReflectionProbeCount )
        return;
      v3 = 0;
      do
      {
        Instance = R_ReflectionProbe_GetInstance(v2->visibleReflectionProbeInstances[v3].isWorldInstance, v2->visibleReflectionProbeInstances[v3].probeInstanceIndex);
        probeImageIndex = Instance->probeImageIndex;
        v6 = &g_worldDraw->reflectionProbeData.reflectionProbes[probeImageIndex];
        placement.base.origin = Instance->probePosition;
        probePosition = Instance->probePosition;
        R_FilterXModelIntoScene(s_gfxReflectionProbeStaticData.test_sphere_silver, &placement, 0, &scriptablePackedColorEmissive, 0, (LocalClientNum_t)frontEndDataOut->localClientNum);
        if ( scr_debug_reflection_info->current.enabled )
        {
          v7 = 0;
          v8 = 0i64;
          if ( v6->probeInstanceCount )
          {
            while ( v6->probeInstances[v8] )
            {
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= v6->probeInstanceCount )
                goto LABEL_11;
            }
            v7 = 1;
          }
LABEL_11:
          v9 = (char *)&queryFormat.fmt + 3;
          v10 = (char *)&queryFormat.fmt + 3;
          if ( v6->probeRelightingIndex != 0xFFFF )
            v9 = " (Lit)";
          if ( v7 )
            v10 = " (Default)";
          v11 = j_va("%u%s%s", (unsigned __int16)probeImageIndex, v10, v9);
          R_AddDebugString(&frontEndDataOut->debugGlobals, &placement.base.origin, &colorBlue, 16.0, v11);
        }
        ++v3;
      }
      while ( v3 < v2->visibleReflectionProbeCount );
      v0 = scr_debug_reflection;
      v1 = frontEndDataOut;
    }
    if ( ((v0->current.integer - 1) & 0xFFFFFFFD) == 0 )
    {
      value = r_reflectionProbeDebugCameraDistance->current.value;
      v13 = (__int64)&v1->viewInfo[v1->viewInfoIndex];
      v14 = (__m128)*(unsigned __int64 *)(v13 + 268);
      v17 = *(float *)(v13 + 276);
      placement.base.origin.v[0] = (float)(v14.m128_f32[0] * value) + *(float *)(v13 + 256);
      placement.base.origin.v[1] = (float)(_mm_shuffle_ps(v14, v14, 85).m128_f32[0] * value) + *(float *)(v13 + 260);
      placement.base.origin.v[2] = (float)(value * v17) + *(float *)(v13 + 264);
      v15 = (__m128)*(unsigned __int64 *)(v13 + 652);
      v16 = *(float *)(v13 + 660);
      probePosition.v[0] = (float)(v15.m128_f32[0] * value) + *(float *)(v13 + 640);
      probePosition.v[1] = (float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] * value) + *(float *)(v13 + 644);
      probePosition.v[2] = (float)(value * v16) + *(float *)(v13 + 648);
      R_FilterXModelIntoScene(s_gfxReflectionProbeStaticData.test_sphere_silver, &placement, 0, &scriptablePackedColorEmissive, 0, (LocalClientNum_t)v1->localClientNum);
    }
  }
}

/*
==============
R_ReflectionProbe_BuildInstanceDataFromInstanceList
==============
*/
void R_ReflectionProbe_BuildInstanceDataFromInstanceList(const GfxViewInfo *viewInfo, const GfxBackEndData *backEndData, const GfxViewParms *viewParams, const unsigned int visibleProbeInstanceCount, const ReflectionProbeProcessViewInstanceInfo *visibleProbeInstances, GfxReflectionProbeFrameData *frameData, const GfxReflectionProbeRemapState *remap)
{
  __int64 v7; 
  const ReflectionProbeProcessViewInstanceInfo *v8; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  GfxReflectionProbeInstance *Instance; 
  GfxReflectionProbeInstance *v16; 
  GfxReflectionProbeInstanceDescriptor *writeProbeInstanceData; 
  unsigned __int16 probeImageIndex; 
  unsigned __int16 v19; 
  unsigned __int16 probeRelightingIndex; 
  unsigned __int16 v25; 
  float v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  float value; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  GfxOrientedBoundingBox *writeProbeObbData; 
  unsigned int **p_writeZBinData; 
  unsigned int *writeZBinData; 
  __int64 v41; 
  __int64 i; 
  unsigned int v43; 
  int v44; 
  int v45; 
  const ReflectionProbeProcessViewInstanceInfo *v46; 
  GfxViewInfo *viewInfoa; 

  v7 = 0i64;
  v8 = visibleProbeInstances;
  v10 = 0;
  *(_QWORD *)&frameData->probeCount = visibleProbeInstanceCount;
  *(_QWORD *)frameData->writeLightgridOverride = 0i64;
  frameData->writeLightgridOverride[2] = 0;
  viewInfoa = (GfxViewInfo *)viewInfo;
  v46 = visibleProbeInstances;
  v43 = 0;
  if ( visibleProbeInstanceCount )
  {
    v11 = 1;
    v12 = 0i64;
    v13 = 0i64;
    v44 = 1;
    do
    {
      Instance = R_ReflectionProbe_GetInstance(v8->isWorldInstance, v8->probeInstanceIndex);
      v16 = Instance;
      if ( (Instance->flags & 4) != 0 )
      {
        frameData->writeLightgridOverride[v10 >> 5] |= v11;
        ++frameData->lightgridOverrideProbeCount;
      }
      writeProbeInstanceData = frameData->writeProbeInstanceData;
      writeProbeInstanceData[v13].probePosition.v[0] = Instance->probePosition.v[0] - viewParams->camera.origin.v[0];
      writeProbeInstanceData[v13].probePosition.v[1] = Instance->probePosition.v[1] - viewParams->camera.origin.v[1];
      writeProbeInstanceData[v13].probePosition.v[2] = Instance->probePosition.v[2] - viewParams->camera.origin.v[2];
      if ( (Instance->flags & 1) != 0 )
        writeProbeInstanceData[v13].probePosition.v[0] = NAN;
      probeImageIndex = Instance->probeImageIndex;
      if ( R_ReflectionProbe_IsFrameCacheEnabled() )
        v19 = remap->visibleInstanceToCacheSlot[0];
      else
        v19 = probeImageIndex;
      v45 = v19;
      _XMM3 = LODWORD(FLOAT_1_0);
      probeRelightingIndex = g_worldDraw->reflectionProbeData.reflectionProbes[probeImageIndex].probeRelightingIndex;
      if ( probeRelightingIndex != 0xFFFF )
        _XMM3 = LODWORD(g_worldDraw->reflectionProbeData.probeRelightingData[probeRelightingIndex].relightingScale);
      _XMM0 = _XMM3 & 0x7F800000;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm15, xmm2
      }
      v25 = HalfFromFloat(*(float *)&_XMM1);
      v26 = v16->volumeObb.halfSize.v[0] * r_reflectionProbeVolumeScale->current.value;
      v27 = v16->volumeObb.halfSize.v[1] * r_reflectionProbeVolumeScale->current.vector.v[1];
      v28 = v16->volumeObb.halfSize.v[2] * r_reflectionProbeVolumeScale->current.vector.v[2];
      writeProbeInstanceData[v13].probeImageIndexScale = v45 | (v25 << 16);
      writeProbeInstanceData[v13].rcpFeather.v[0] = 1.0 / v16->feather.v[0];
      writeProbeInstanceData[v13].rcpFeather.v[1] = 1.0 / v16->feather.v[1];
      writeProbeInstanceData[v13].rcpFeather.v[2] = 1.0 / v16->feather.v[2];
      writeProbeInstanceData[v13].probeRotation.v[0] = v16->probeRotation.v[0];
      writeProbeInstanceData[v13].probeRotation.v[1] = v16->probeRotation.v[1];
      writeProbeInstanceData[v13].probeRotation.v[2] = v16->probeRotation.v[2];
      writeProbeInstanceData[v13].probeRotation.v[3] = v16->probeRotation.v[3];
      v29 = r_reflectionProbeExpandProjectionOverride;
      value = v16->expandProjectionNeg.v[0];
      v31 = v16->expandProjectionNeg.v[1];
      v32 = v16->expandProjectionNeg.v[2];
      v33 = v16->expandProjectionPos.v[0];
      v34 = v16->expandProjectionPos.v[1];
      v35 = v16->expandProjectionPos.v[2];
      if ( !r_reflectionProbeExpandProjectionOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v29->current.enabled )
      {
        v36 = r_reflectionProbeExpandProjectionNeg;
        if ( !r_reflectionProbeExpandProjectionNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        value = v36->current.value;
        v31 = v36->current.vector.v[1];
        v32 = v36->current.vector.v[2];
        v37 = r_reflectionProbeExpandProjectionPos;
        if ( !r_reflectionProbeExpandProjectionPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v37);
        v33 = v37->current.value;
        v34 = v37->current.vector.v[1];
        v35 = v37->current.vector.v[2];
      }
      remap = (const GfxReflectionProbeRemapState *)((char *)remap + 2);
      writeProbeInstanceData[v13].projectionExtentsX.v[0] = COERCE_FLOAT(LODWORD(v26) ^ _xmm) - value;
      writeProbeInstanceData[v13].projectionExtentsX.v[1] = v26 + v33;
      writeProbeInstanceData[v13].projectionExtentsY.v[0] = COERCE_FLOAT(LODWORD(v27) ^ _xmm) - v31;
      writeProbeInstanceData[v13].projectionExtentsY.v[1] = v27 + v34;
      writeProbeInstanceData[v13].projectionExtentsZ.v[0] = COERCE_FLOAT(LODWORD(v28) ^ _xmm) - v32;
      writeProbeInstanceData[v13++].projectionExtentsZ.v[1] = v35 + v28;
      writeProbeObbData = frameData->writeProbeObbData;
      v11 = __ROL4__(v44, 1);
      v10 = ++v43;
      writeProbeObbData[v12].center.v[0] = v16->volumeObb.center.v[0];
      writeProbeObbData[v12].center.v[1] = v16->volumeObb.center.v[1];
      writeProbeObbData[v12].center.v[2] = v16->volumeObb.center.v[2];
      writeProbeObbData[v12].xAxis.v[0] = v16->volumeObb.xAxis.v[0];
      writeProbeObbData[v12].xAxis.v[1] = v16->volumeObb.xAxis.v[1];
      writeProbeObbData[v12].xAxis.v[2] = v16->volumeObb.xAxis.v[2];
      writeProbeObbData[v12].yAxis.v[0] = v16->volumeObb.yAxis.v[0];
      writeProbeObbData[v12].yAxis.v[1] = v16->volumeObb.yAxis.v[1];
      writeProbeObbData[v12].yAxis.v[2] = v16->volumeObb.yAxis.v[2];
      writeProbeObbData[v12].zAxis.v[0] = v16->volumeObb.zAxis.v[0];
      writeProbeObbData[v12].zAxis.v[1] = v16->volumeObb.zAxis.v[1];
      writeProbeObbData[v12].zAxis.v[2] = v16->volumeObb.zAxis.v[2];
      v8 = v46 + 1;
      v44 = v11;
      writeProbeObbData[v12].halfSize.v[0] = v26;
      writeProbeObbData[v12].halfSize.v[1] = v27;
      writeProbeObbData[v12++].halfSize.v[2] = v28;
      ++v46;
    }
    while ( v43 < visibleProbeInstanceCount );
    viewInfo = viewInfoa;
    v7 = 0i64;
  }
  p_writeZBinData = &frameData->writeZBinData;
  writeZBinData = frameData->writeZBinData;
  if ( r_reflectionProbeUsePrebin->current.enabled )
  {
    R_FrustumGridClustering_PrebinOBBs(viewInfo, frameData->writeProbeObbData, visibleProbeInstanceCount, frameData->writePrebinData, frameData->writeZBinData);
  }
  else if ( writeZBinData > (unsigned int *)p_writeZBinData || writeZBinData + 0x1FFF < (unsigned int *)p_writeZBinData )
  {
    for ( i = 0x2000i64; i; --i )
      *writeZBinData++ = visibleProbeInstanceCount;
  }
  else
  {
    v41 = 0x2000i64;
    do
    {
      (*p_writeZBinData)[v7++] = visibleProbeInstanceCount;
      --v41;
    }
    while ( v41 );
  }
}

/*
==============
R_ReflectionProbe_BuildInstanceListForView
==============
*/
void R_ReflectionProbe_BuildInstanceListForView(const vec3_t (*frustumVertices)[8], const vec3_t (*frustumAxes)[5], const vec3_t *cameraAxis, const GfxBackEndData *backEndData, const unsigned int maxVisibleInstances, unsigned int *outVisibleProbeInstanceCount, ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstances, GfxReflectionProbeRemapState *remap, bitarray<6528> *reflectionVisibleInstances)
{
  const GfxBackEndData *v9; 
  const vec3_t (*v11)[8]; 
  GfxWorldDraw *v12; 
  unsigned int reflectionProbeInstanceCount; 
  __int64 v14; 
  GfxReflectionProbeStats *v15; 
  bitarray<6528> *v16; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  unsigned int v18; 
  unsigned int v19; 
  char *v20; 
  unsigned int *array; 
  unsigned int v22; 
  int v23; 
  bool v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  __int64 v28; 
  GfxReflectionProbeTransientData *v29; 
  unsigned __int16 v30; 
  unsigned __int16 *reflectionProbeInstances; 
  unsigned __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  const dvar_t *v40; 
  __int64 v41; 
  unsigned int reflectionProbeVisDataCount; 
  unsigned int *reflectionProbeVisData; 
  unsigned int v44; 
  GfxWorldReflectionProbeData *v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  __int64 v54; 
  unsigned __int64 v55; 
  unsigned int v56; 
  GfxReflectionProbeInstance *v57; 
  const GfxReflectionProbeObb *p_volumeObb; 
  int v59; 
  bool IsFrustumEdgeVsBoxAxesProjectionDisjoint_1; 
  unsigned int v61; 
  unsigned int v62; 
  GfxReflectionProbe *v63; 
  unsigned __int64 v64; 
  int probeInstanceCount; 
  GfxReflectionProbeTransientData *v66; 
  __int64 v67; 
  unsigned int *iovisibleProbeInstanceCount; 
  ReflectionProbeProcessViewInstanceInfo *v69; 
  GfxReflectionProbeStats *stats; 
  unsigned int reflectionProbeInstanceIndex; 
  unsigned int v72; 
  unsigned int NumOfElements[3]; 
  int v74; 
  unsigned int frameIndex; 
  int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  bitarray<1536> *p_transientVisibility; 
  GfxWorldReflectionProbeData *reflectionProbeData; 
  char *v82; 

  v9 = backEndData;
  v11 = frustumVertices;
  if ( !frustumVertices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2797, ASSERT_TYPE_ASSERT, "(frustumVertices != 0)", (const char *)&queryFormat, "frustumVertices != NULL") )
    __debugbreak();
  if ( !frustumAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2798, ASSERT_TYPE_ASSERT, "(frustumAxes != 0)", (const char *)&queryFormat, "frustumAxes != NULL") )
    __debugbreak();
  if ( !outVisibleProbeInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2799, ASSERT_TYPE_ASSERT, "(outVisibleProbeInstances != 0)", (const char *)&queryFormat, "outVisibleProbeInstances != NULL") )
    __debugbreak();
  if ( !outVisibleProbeInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2800, ASSERT_TYPE_ASSERT, "(outVisibleProbeInstanceCount != 0)", (const char *)&queryFormat, "outVisibleProbeInstanceCount != NULL") )
    __debugbreak();
  if ( !maxVisibleInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2801, ASSERT_TYPE_ASSERT, "(maxVisibleInstances > 0)", (const char *)&queryFormat, "maxVisibleInstances > 0") )
    __debugbreak();
  v12 = g_worldDraw;
  reflectionProbeData = &g_worldDraw->reflectionProbeData;
  reflectionProbeInstanceCount = g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount;
  v78 = reflectionProbeInstanceCount;
  if ( !reflectionProbeInstanceCount )
  {
    *outVisibleProbeInstanceCount = 0;
    return;
  }
  outVisibleProbeInstances->priority = -3.4028235e38;
  *(_WORD *)&outVisibleProbeInstances->isWorldInstance = 513;
  v14 = 12i64;
  outVisibleProbeInstances->probeInstanceDepth = -3.4028235e38;
  outVisibleProbeInstances->probeInstanceIndex = 0;
  reflectionProbeInstanceIndex = 1;
  NumOfElements[0] = 1;
  v72 = 1;
  frameIndex = v9->reflectionProbeFrameIndex;
  v15 = &s_gfxReflectionProbeStaticData.stats[frameIndex];
  *(_QWORD *)&NumOfElements[1] = v15;
  *(_QWORD *)&v15->shouldDrawTransientCount = 0i64;
  *(_QWORD *)&v15->frustumProbeInstanceCount = 0i64;
  *(_QWORD *)v15->perLodCount = 0i64;
  v15->perLodCount[2] = 0;
  v16 = reflectionVisibleInstances;
  do
  {
    *(_QWORD *)v16->array = 0i64;
    *(_QWORD *)&v16->array[2] = 0i64;
    *(_QWORD *)&v16->array[4] = 0i64;
    v16 = (bitarray<6528> *)((char *)v16 + 64);
    *(_QWORD *)&v16[-1].array[194] = 0i64;
    *(_QWORD *)&v16[-1].array[196] = 0i64;
    *(_QWORD *)&v16[-1].array[198] = 0i64;
    *(_QWORD *)&v16[-1].array[200] = 0i64;
    *(_QWORD *)&v16[-1].array[202] = 0i64;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v16->array = 0i64;
  *(_QWORD *)&v16->array[2] = 0i64;
  *(_QWORD *)&v16->array[4] = 0i64;
  *(_QWORD *)&v16->array[6] = 0i64;
  *(_QWORD *)&v16->array[8] = 0i64;
  *(_QWORD *)&v16->array[10] = 0i64;
  if ( g_worldDraw->reflectionProbeData.reflectionProbeImages || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
  {
    v18 = (v9->transientDrawContext.zoneCount + 31) >> 5;
    v79 = v18;
    if ( v18 > 0x30 )
    {
      LODWORD(v67) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2840, ASSERT_TYPE_ASSERT, "( ( numWords <= transientStreaming.transientZones.WORD_COUNT ) )", "( numWords ) = %u", v67) )
        __debugbreak();
    }
    v19 = 0;
    v77 = 0;
    if ( v18 )
    {
      p_transientVisibility = &v9->transientVisibility;
      v20 = (char *)((char *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones - (char *)v9);
      array = v9->transientVisibility.array;
      v82 = (char *)((char *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones - (char *)v9);
      while ( 1 )
      {
        v15->shouldDrawTransientCount = __popcnt(*array);
        v22 = *array;
        v23 = 32 * v19;
        v24 = *array == *(unsigned int *)((char *)array + (_QWORD)v20 - 1481980);
        v25 = *array ^ *(unsigned int *)((char *)array + (_QWORD)v20 - 1481980);
        v74 = 32 * v19;
        if ( v24 )
          goto LABEL_75;
        do
        {
          v26 = __lzcnt(v25);
          if ( v26 >= 0x20 )
          {
            LODWORD(iovisibleProbeInstanceCount) = 32;
            LODWORD(v67) = v26;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v67, iovisibleProbeInstanceCount) )
              __debugbreak();
          }
          v27 = 0x80000000 >> v26;
          v28 = v23 + v26;
          v25 &= ~v27;
          v76 = v25;
          v29 = v9->transientDrawContext.reflectionProbes[v28];
          if ( v29 )
          {
            v30 = v29->reflectionProbeInstanceCount;
            reflectionProbeInstances = v29->reflectionProbeInstances;
            if ( (unsigned int)v28 >= 0x600 )
            {
              LODWORD(iovisibleProbeInstanceCount) = 1536;
              LODWORD(v67) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v67, iovisibleProbeInstanceCount) )
                __debugbreak();
            }
            v32 = (unsigned __int64)(unsigned int)v28 >> 5;
            v33 = 0x80000000 >> (v28 & 0x1F);
            if ( (v33 & s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[v32]) != 0 )
            {
              if ( v30 )
              {
                v34 = v30;
                do
                {
                  v35 = *reflectionProbeInstances;
                  v36 = v35;
                  if ( !*((_BYTE *)&s_gfxReflectionProbeStaticData.stats[-240].shouldDrawTransientCount + v35) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2872, ASSERT_TYPE_ASSERT, "(probeRefCounts[probeInstanceIndex] > 0)", (const char *)&queryFormat, "probeRefCounts[probeInstanceIndex] > 0") )
                    __debugbreak();
                  v35 = (unsigned __int16)v35;
                  if ( (unsigned __int16)v35 >= v12->reflectionProbeData.reflectionProbeInstanceCount )
                  {
                    LODWORD(iovisibleProbeInstanceCount) = v12->reflectionProbeData.reflectionProbeInstanceCount;
                    LODWORD(v67) = v35;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2873, ASSERT_TYPE_ASSERT, "(unsigned)( probeInstanceIndex ) < (unsigned)( reflectionProbeData->reflectionProbeInstanceCount )", "probeInstanceIndex doesn't index reflectionProbeData->reflectionProbeInstanceCount\n\t%i not in [0, %i)", v67, iovisibleProbeInstanceCount) )
                      __debugbreak();
                  }
                  v24 = (*((_BYTE *)&s_gfxReflectionProbeStaticData.stats[-240].shouldDrawTransientCount + v36))-- == 1;
                  if ( v24 )
                  {
                    if ( (unsigned int)v35 >= 0x1980 )
                    {
                      LODWORD(stats) = 6528;
                      LODWORD(v69) = v35;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v69, stats) )
                        __debugbreak();
                    }
                    s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[v35 >> 5] &= ~(0x80000000 >> (v35 & 0x1F));
                  }
                  ++reflectionProbeInstances;
                  --v34;
                }
                while ( v34 );
                goto LABEL_71;
              }
            }
            else
            {
              if ( (unsigned int)v28 >= 0x600 )
              {
                LODWORD(iovisibleProbeInstanceCount) = 1536;
                LODWORD(v67) = v28;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v67, iovisibleProbeInstanceCount) )
                  __debugbreak();
              }
              if ( (v33 & backEndData->transientVisibility.array[v32]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2884, ASSERT_TYPE_ASSERT, "(backEndData->transientVisibility.testBit( transientZoneIndex ))", (const char *)&queryFormat, "backEndData->transientVisibility.testBit( transientZoneIndex )") )
                __debugbreak();
              if ( v30 )
              {
                v37 = v30;
                do
                {
                  v38 = *reflectionProbeInstances;
                  v39 = v38;
                  if ( *((_BYTE *)&s_gfxReflectionProbeStaticData.stats[-240].shouldDrawTransientCount + v38) == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2889, ASSERT_TYPE_ASSERT, "(probeRefCounts[probeInstanceIndex] < 255)", (const char *)&queryFormat, "probeRefCounts[probeInstanceIndex] < 255") )
                    __debugbreak();
                  v38 = (unsigned __int16)v38;
                  if ( (unsigned __int16)v38 >= v12->reflectionProbeData.reflectionProbeInstanceCount )
                  {
                    LODWORD(iovisibleProbeInstanceCount) = v12->reflectionProbeData.reflectionProbeInstanceCount;
                    LODWORD(v67) = v38;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2890, ASSERT_TYPE_ASSERT, "(unsigned)( probeInstanceIndex ) < (unsigned)( reflectionProbeData->reflectionProbeInstanceCount )", "probeInstanceIndex doesn't index reflectionProbeData->reflectionProbeInstanceCount\n\t%i not in [0, %i)", v67, iovisibleProbeInstanceCount) )
                      __debugbreak();
                  }
                  ++*((_BYTE *)&s_gfxReflectionProbeStaticData.stats[-240].shouldDrawTransientCount + v39);
                  if ( (unsigned int)v38 >= 0x1980 )
                  {
                    LODWORD(stats) = 6528;
                    LODWORD(v69) = v38;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v69, stats) )
                      __debugbreak();
                  }
                  ++reflectionProbeInstances;
                  s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[v38 >> 5] |= 0x80000000 >> (v38 & 0x1F);
                  --v37;
                }
                while ( v37 );
LABEL_71:
                v25 = v76;
              }
            }
            v9 = backEndData;
            v23 = v74;
          }
        }
        while ( v25 );
        array = (unsigned int *)p_transientVisibility;
        v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
        v18 = v79;
        v19 = v77;
        v22 = p_transientVisibility->array[0];
        v20 = v82;
LABEL_75:
        ++v19;
        *(unsigned int *)((char *)array++ + (_QWORD)v20 - 1481980) = v22;
        v77 = v19;
        p_transientVisibility = (bitarray<1536> *)array;
        if ( v19 >= v18 )
        {
          v11 = frustumVertices;
          reflectionProbeInstanceCount = v78;
          break;
        }
      }
    }
    s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[0] &= ~0x80000000;
  }
  v40 = r_reflectionProbeUseUmbra;
  if ( !r_reflectionProbeUseUmbra && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
  {
    LODWORD(v41) = 0;
    *rgp.world->dpvs.reflectionProbeVisData &= ~0x80000000;
    reflectionProbeVisDataCount = rgp.world->dpvs.reflectionProbeVisDataCount;
    reflectionProbeVisData = rgp.world->dpvs.reflectionProbeVisData;
    if ( reflectionProbeVisDataCount )
      v44 = *reflectionProbeVisData;
    else
      v44 = 0;
    v45 = reflectionProbeData;
    while ( 1 )
    {
      v46 = v44;
      if ( !v44 )
        break;
LABEL_89:
      v47 = __lzcnt(v46);
      v48 = v47 + 32 * v41;
      if ( v47 >= 0x20 )
      {
        LODWORD(iovisibleProbeInstanceCount) = 32;
        LODWORD(v67) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v67, iovisibleProbeInstanceCount) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v47) & v46) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
        __debugbreak();
      v44 = v46 & ~(0x80000000 >> v47);
      if ( v48 >= 0x1980 )
      {
        LODWORD(iovisibleProbeInstanceCount) = 6528;
        LODWORD(v67) = v47 + 32 * v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v67, iovisibleProbeInstanceCount) )
          __debugbreak();
      }
      v49 = (unsigned __int64)v48 >> 5;
      v50 = 0x80000000 >> (v48 & 0x1F);
      if ( (v50 & s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[v49]) != 0 )
      {
        if ( v48 >= 0x1980 )
        {
          LODWORD(stats) = 6528;
          LODWORD(v69) = v48;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v69, stats) )
            __debugbreak();
        }
        v51 = frameIndex;
        reflectionVisibleInstances->array[v49] |= v50;
        v72 += R_ReflectionProbe_ProcessProbe(v51, 1, v48, v45, cameraAxis, maxVisibleInstances, NumOfElements, outVisibleProbeInstances, *(GfxReflectionProbeStats **)&NumOfElements[1]);
        v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
      }
      else
      {
        v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
        ++*(_DWORD *)(*(_QWORD *)&NumOfElements[1] + 4i64);
      }
    }
    while ( 1 )
    {
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= reflectionProbeVisDataCount )
        break;
      v46 = reflectionProbeVisData[v41];
      if ( v46 )
        goto LABEL_89;
    }
    v52 = NumOfElements[0];
    v12 = (GfxWorldDraw *)reflectionProbeData;
  }
  else if ( reflectionProbeInstanceCount <= 1 )
  {
    v52 = 1;
  }
  else
  {
    v53 = 1;
    v54 = 1i64;
    v55 = 1i64;
    do
    {
      if ( v53 >= 0x1980 )
      {
        LODWORD(iovisibleProbeInstanceCount) = 6528;
        LODWORD(v67) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v67, iovisibleProbeInstanceCount) )
          __debugbreak();
        v53 = reflectionProbeInstanceIndex;
      }
      v56 = 0x80000000 >> (v53 & 0x1F);
      if ( (v56 & s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[v55 >> 5]) != 0 )
      {
        if ( v53 >= 0x1980 )
        {
          LODWORD(stats) = 6528;
          LODWORD(v69) = v53;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v69, stats) )
            __debugbreak();
          v53 = reflectionProbeInstanceIndex;
        }
        reflectionVisibleInstances->array[v55 >> 5] |= v56;
        v57 = v12->reflectionProbeData.reflectionProbeInstances;
        if ( (v57[v54].flags & 2) == 0 )
        {
          p_volumeObb = &v57[v54].volumeObb;
          v59 = 0;
          while ( !R_AreFrustumObbProjectedIntervalsDisjoint_1_(p_volumeObb, v11, &(*frustumAxes)[v59]) )
          {
            if ( (unsigned int)++v59 >= 5 )
            {
              if ( !R_AreFrustumObbProjectedIntervalsDisjoint_1_(p_volumeObb, v11, &p_volumeObb->xAxis) && !R_AreFrustumObbProjectedIntervalsDisjoint_1_(p_volumeObb, v11, &p_volumeObb->yAxis) && !R_AreFrustumObbProjectedIntervalsDisjoint_1_(p_volumeObb, v11, &p_volumeObb->zAxis) && !R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, (const vec3_t *)v11, &(*v11)[4]) && !R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, &(*v11)[1], &(*v11)[5]) )
              {
                if ( R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, &(*v11)[2], &(*v11)[6]) || R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, &(*v11)[3], &(*v11)[7]) || R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, (const vec3_t *)v11, &(*v11)[1]) )
                {
                  v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
                }
                else
                {
                  IsFrustumEdgeVsBoxAxesProjectionDisjoint_1 = R_IsFrustumEdgeVsBoxAxesProjectionDisjoint_1_(p_volumeObb, v11, (const vec3_t *)v11, &(*v11)[2]);
                  v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
                  if ( !IsFrustumEdgeVsBoxAxesProjectionDisjoint_1 )
                    v72 += R_ReflectionProbe_ProcessProbe(frameIndex, 1, reflectionProbeInstanceIndex, &v12->reflectionProbeData, cameraAxis, maxVisibleInstances, NumOfElements, outVisibleProbeInstances, *(GfxReflectionProbeStats **)&NumOfElements[1]);
                }
              }
              break;
            }
          }
          v53 = reflectionProbeInstanceIndex;
        }
      }
      else
      {
        ++v15->maskedOutInstanceCount;
      }
      ++v53;
      ++v55;
      ++v54;
      reflectionProbeInstanceIndex = v53;
    }
    while ( v53 < v78 );
    v52 = NumOfElements[0];
  }
  v61 = 0;
  if ( scene.sceneReflectionProbeInstanceCount )
  {
    do
    {
      if ( !R_ReflectionProbe_IsTransientStreamingEnabled() )
        goto LABEL_149;
      if ( v61 >= scene.sceneReflectionProbeInstanceCount )
      {
        LODWORD(iovisibleProbeInstanceCount) = scene.sceneReflectionProbeInstanceCount;
        LODWORD(v67) = v61;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1309, ASSERT_TYPE_ASSERT, "(unsigned)( probeInstanceIndex ) < (unsigned)( scene.sceneReflectionProbeInstanceCount )", "probeInstanceIndex doesn't index scene.sceneReflectionProbeInstanceCount\n\t%i not in [0, %i)", v67, iovisibleProbeInstanceCount) )
          __debugbreak();
      }
      v62 = 0;
      v63 = &g_worldDraw->reflectionProbeData.reflectionProbes[scene.sceneReflectionProbeInstances[v61].reflectionProbeInstance.probeImageIndex];
      if ( v63->probeInstanceCount )
      {
        do
        {
          v64 = v63->probeInstances[v62];
          if ( (unsigned int)v64 >= 0x1980 )
          {
            LODWORD(iovisibleProbeInstanceCount) = 6528;
            LODWORD(v67) = v63->probeInstances[v62];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v67, iovisibleProbeInstanceCount) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v64 & 0x1F)) & s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask.array[v64 >> 5]) != 0 )
            break;
          ++v62;
        }
        while ( v62 < v63->probeInstanceCount );
      }
      probeInstanceCount = v63->probeInstanceCount;
      v15 = *(GfxReflectionProbeStats **)&NumOfElements[1];
      if ( v62 == probeInstanceCount )
        ++*(_DWORD *)(*(_QWORD *)&NumOfElements[1] + 4i64);
      else
LABEL_149:
        v72 += R_ReflectionProbe_ProcessProbe(frameIndex, 0, v61, &v12->reflectionProbeData, cameraAxis, maxVisibleInstances, NumOfElements, outVisibleProbeInstances, v15);
      ++v61;
    }
    while ( v61 < scene.sceneReflectionProbeInstanceCount );
    v52 = NumOfElements[0];
  }
  if ( v72 > maxVisibleInstances )
    R_WarnOncePerFrame(R_WARN_VISIBLE_REFLECTION_VOLUME_OVERFLOW, v72, maxVisibleInstances);
  v15->frustumRequestedProbeInstanceCount = v72;
  v15->frustumProbeInstanceCount = v52;
  qsort(outVisibleProbeInstances, v52, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)R_ReflectionProbe_CompareProbeInstancePriority);
  *outVisibleProbeInstanceCount = v52;
  if ( *(_OWORD *)&g_worldDraw->reflectionProbeData.reflectionProbeImages != 0i64 || (v66 = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && v66->exclusiveProbeCount )
  {
    if ( rg.useRProbeOctahedron )
      R_ReflectionProbe_UpdateCacheInternal_128_211_(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron, backEndData, v52, outVisibleProbeInstances, remap);
    else
      R_ReflectionProbe_UpdateCacheInternal_85_151_(&s_gfxReflectionProbeStaticData.transientStreaming.frameCache, backEndData, v52, outVisibleProbeInstances, remap);
  }
}

/*
==============
R_ReflectionProbe_CompareProbeInstancePriority
==============
*/
__int64 R_ReflectionProbe_CompareProbeInstancePriority(const void *p0, const void *p1)
{
  unsigned __int8 v2; 
  unsigned __int8 v3; 
  float v4; 

  v2 = *((_BYTE *)p0 + 5);
  v3 = *((_BYTE *)p1 + 5);
  if ( v2 >= v3 )
  {
    if ( v2 > v3 )
      return 1i64;
    v4 = *((float *)p0 + 3) - *((float *)p1 + 3);
    if ( v4 < 0.0 )
      return 1i64;
    if ( v4 <= 0.0 )
    {
      if ( *((_BYTE *)p0 + 4) >= *((_BYTE *)p1 + 4) && *(_DWORD *)p0 >= *(_DWORD *)p1 )
      {
        if ( *(_DWORD *)p0 <= *(_DWORD *)p1 )
          return 0i64;
        return 0xFFFFFFFFi64;
      }
      return 1i64;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
R_ReflectionProbe_CopyProbesToFrameCache
==============
*/
void R_ReflectionProbe_CopyProbesToFrameCache(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  const GfxBackEndData *v3; 
  ComputeCmdBufState *v4; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  __int64 reflectionProbeFrameIndex; 
  unsigned int *p_requestCount; 
  bool v8; 
  GfxReflectionProbeCopyQueue *v9; 
  const GfxTexture *v10; 
  __int64 v11; 
  unsigned int probeImageIndirection; 
  unsigned int v13; 
  __int64 v14; 
  GfxImage *v15; 
  unsigned __int16 width; 
  unsigned __int16 height; 
  GfxReflectionProbeCopyImageAlias *v18; 
  unsigned __int8 *ResidentPixels; 
  unsigned __int8 *v20; 
  HRESULT v21; 
  const char *v22; 
  ID3D12DeviceChild *v23; 
  unsigned __int64 v24; 
  unsigned int freeSlot; 
  unsigned int *v27; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  __int64 aliasCount; 
  const GfxTexture *Resident; 
  unsigned int v31; 
  GfxReflectionProbeTransientData *v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 i; 
  int v37; 
  unsigned int v38; 
  __int64 v39; 
  GfxReflectionProbeCopyRequest *v40; 
  unsigned int v41; 
  unsigned int dstCacheSlot; 
  GfxImage *v43; 
  const GfxTexture *v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  unsigned __int8 levelCount; 
  unsigned int j; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int k; 
  __int64 v52; 
  __int64 v53; 
  GfxWorldDraw *v54; 
  int v55; 
  __int64 flag; 
  __int64 flaga; 
  __int64 dstSlice; 
  __int64 srcX; 
  __int64 srcY; 
  __int64 srcMip; 
  __int64 srcSlice; 
  int v63; 
  int v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  GfxTexture *textureDst; 
  GfxTexture *textureDsta; 
  GfxReflectionProbeCopyQueue *v70; 
  ID3D12DeviceChild *resource; 
  const GfxTexture *v72; 
  unsigned int *v73; 
  __int64 v74; 
  unsigned int v75; 
  unsigned __int64 v76; 
  ComputeCmdBufState *statea; 
  GfxReflectionProbeCopyRequest *v78; 
  GfxShaderTextureView *views; 
  GfxShaderTextureRWView *v80; 
  const GfxBackEndData *v81; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v83; 
  GfxShaderBufferRWView *p_rwView; 
  int v85[3]; 
  __int64 v86; 
  int v87; 
  __int128 v88; 
  unsigned __int64 v89; 
  __int64 v90[2]; 
  unsigned __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int128 v96; 
  int dataa; 
  __int64 v98; 
  int v99; 
  __int64 v100; 
  unsigned int v101; 
  int v102; 
  int v103[4]; 
  int v104[192]; 

  v3 = data;
  v81 = data;
  v4 = state;
  statea = state;
  if ( !g_worldDraw )
    return;
  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return;
  }
  reflectionProbeFrameIndex = data->reflectionProbeFrameIndex;
  v74 = reflectionProbeFrameIndex;
  v76 = 2312 * reflectionProbeFrameIndex;
  R_ReflectionProbe_ReleaseAlias(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[reflectionProbeFrameIndex]);
  p_requestCount = &s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[reflectionProbeFrameIndex].requestCount;
  v8 = *p_requestCount == 0;
  v9 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[reflectionProbeFrameIndex];
  v70 = v9;
  v73 = p_requestCount;
  if ( v8 )
    return;
  if ( rg.useRProbeOctahedron )
  {
    textureDst = (GfxTexture *)R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId);
    v10 = textureDst;
    R_HW_AddResourceTransition(v4, textureDst, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v4);
    v11 = 0i64;
    v63 = 0;
    if ( *p_requestCount )
    {
      do
      {
        v78 = &v9->requests[v11];
        probeImageIndirection = g_worldDraw->reflectionProbeData.reflectionProbes[v78->mapProbeIndex].probeImageIndirection;
        v13 = probeImageIndirection >> 20;
        v14 = HIWORD(probeImageIndirection) & 0xF;
        v65 = probeImageIndirection >> 20;
        if ( probeImageIndirection >> 20 >= v3->transientDrawContext.zoneCount && (_WORD)v13 != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3500, ASSERT_TYPE_ASSERT, "(zoneIndex < data->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex)", (const char *)&queryFormat, "zoneIndex < data->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex") )
          __debugbreak();
        if ( (_WORD)v13 == 4095 )
        {
          if ( (_DWORD)v14 )
          {
            LODWORD(flag) = HIWORD(probeImageIndirection) & 0xF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3510, ASSERT_TYPE_ASSERT, "( ( bucketIndex == 0 ) )", "( bucketIndex ) = %u", flag) )
              __debugbreak();
          }
          if ( (unsigned __int16)probeImageIndirection >= g_worldDraw->reflectionProbeData.sharedReflectionProbeCount )
          {
            LODWORD(dstSlice) = g_worldDraw->reflectionProbeData.sharedReflectionProbeCount;
            LODWORD(flag) = (unsigned __int16)probeImageIndirection;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3511, ASSERT_TYPE_ASSERT, "(unsigned)( bucketProbeIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.sharedReflectionProbeCount )", "bucketProbeIndex doesn't index g_worldDraw->reflectionProbeData.sharedReflectionProbeCount\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          v15 = g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron[(unsigned __int16)probeImageIndirection];
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3513, ASSERT_TYPE_ASSERT, "(srcProbeImage)", (const char *)&queryFormat, "srcProbeImage") )
            __debugbreak();
          width = v15->width;
          height = v15->height;
          if ( width != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width || height != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height )
          {
            LODWORD(srcSlice) = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height;
            LODWORD(srcMip) = height;
            LODWORD(srcY) = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width;
            LODWORD(srcX) = width;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3522, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Reflection probe '%s->%s' has dimension mismatch %u != %u, %u != %u", v15->name, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.name, srcX, srcY, srcMip, srcSlice) )
              __debugbreak();
          }
          v18 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v76 / 0x908];
          if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v76 / 0x908].aliasCount >= 0x60 )
          {
            LODWORD(dstSlice) = 96;
            LODWORD(flag) = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v76 / 0x908].aliasCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3532, ASSERT_TYPE_ASSERT, "(unsigned)( aliases.aliasCount ) < (unsigned)( ( sizeof( *array_counter( GfxReflectionProbeCopyImageAlias::srcTextureAlias ) ) + 0 ) )", "aliases.aliasCount doesn't index ARRAY_COUNT( GfxReflectionProbeCopyImageAlias::srcTextureAlias )\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          v90[0] = 0i64;
          v90[1] = 0i64;
          v91 = 0i64;
          v92 = 0i64;
          v93 = 0i64;
          v94 = 0i64;
          v95 = 0i64;
          if ( (v15->flags & 0x40) != 0 )
            ResidentPixels = Stream_AddressSpace_ResolveHandle(&v15->pixels.streamedDataHandle);
          else
            ResidentPixels = (unsigned __int8 *)R_Image_GetResidentPixels(v15);
          v20 = ResidentPixels;
          LODWORD(v90[0]) = 3;
          v91 = (unsigned __int64)v15->width >> 2;
          LODWORD(v92) = v15->height >> 2;
          if ( v15->numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3542, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->numElements == 1 ) )", "( srcProbeImage->name ) = %s", v15->name) )
            __debugbreak();
          WORD2(v92) = 1;
          HIWORD(v92) = v15->levelCount;
          v93 = 0x100000003i64;
          LODWORD(v95) = 0;
          v21 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int8 *, __int64 *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v20, v90, 64i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
          if ( v21 < 0 )
          {
            v22 = R_ErrorDescription(v21);
            Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v22);
          }
          PIXSetDebugName(resource, "ReflectionProbe src aliased texture");
          v23 = resource;
          v85[0] = v93;
          v24 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v87 = HIWORD(v92);
          v86 = 0i64;
          v88 = _XMM0;
          v85[1] = 4;
          v85[2] = 5768;
          while ( 1 )
          {
            if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
              __debugbreak();
            if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
              break;
            Sys_Sleep(0);
          }
          freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
          v4 = statea;
          v10 = textureDst;
          if ( !g_descriptorPools.shaderViewPool.freeSlot )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
              __debugbreak();
            freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
          }
          v27 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
          g_descriptorPools.shaderViewPool.freeSlot = *v27;
          *v27 = 0;
          ++g_descriptorPools.shaderViewPool.handle.used;
          if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
            __debugbreak();
          _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
          v75 = freeSlot;
          m_pFunction = g_dx.d3d12device->m_pFunction;
          v89 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
          m_pFunction[6].QueryInterface(g_dx.d3d12device, (const _GUID *)v23, (void **)v85);
          aliasCount = v18->aliasCount;
          Resident = NULL;
          *((_QWORD *)&v96 + 1) = freeSlot;
          v31 = 0;
          *(_QWORD *)&v96 = v23;
          v18->srcTextureAlias[aliasCount] = (ID3D12Resource *)v23;
          _XMM0 = v96;
          v67 = 0;
          v18->srcTextureAliasView[v18->aliasCount++] = (GfxShaderTextureView)v96;
        }
        else
        {
          v32 = v3->transientDrawContext.reflectionProbes[(unsigned __int16)v13];
          if ( (unsigned int)v14 >= v32->exclusiveProbeBucketCount )
          {
            LODWORD(dstSlice) = v32->exclusiveProbeBucketCount;
            LODWORD(flag) = HIWORD(probeImageIndirection) & 0xF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3574, ASSERT_TYPE_ASSERT, "(unsigned)( bucketIndex ) < (unsigned)( transientData->exclusiveProbeBucketCount )", "bucketIndex doesn't index transientData->exclusiveProbeBucketCount\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          v33 = v14;
          v31 = (unsigned __int16)probeImageIndirection;
          v67 = (unsigned __int16)probeImageIndirection;
          v34 = (__int64)&v32->exclusiveProbeBuckets[v33];
          if ( (unsigned int)(unsigned __int16)probeImageIndirection >= *(_DWORD *)(v34 + 4) )
          {
            LODWORD(dstSlice) = *(_DWORD *)(v34 + 4);
            LODWORD(flag) = (unsigned __int16)probeImageIndirection;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3576, ASSERT_TYPE_ASSERT, "(unsigned)( bucketProbeIndex ) < (unsigned)( bucket.elementCount )", "bucketProbeIndex doesn't index bucket.elementCount\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          Resident = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(v34 + 8));
        }
        v35 = 0;
        v72 = Resident;
        for ( i = v78->dstCacheSlot; v35 < s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.levelCount; Resident = v72 )
        {
          if ( (_WORD)v65 == 4095 )
          {
            R_SetComputeShader(v4, rgp.copyRawRect2D_int4ComputeShader);
            views = (GfxShaderTextureView *)&v96;
            R_SetComputeTextureViews(v4, 0, 1, (const GfxShaderTextureView *const *)&views);
            v80 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView[i][v35];
            R_SetComputeTextureRWViews(v4, 0, 1, (const GfxShaderTextureRWView *const *)&v80);
            v99 = 0;
            v37 = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width >> (v35 + 2);
            v38 = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height >> (v35 + 2);
            dataa = v37;
            v98 = v38;
            v100 = 0i64;
            v101 = v35;
            v102 = 0;
            R_UploadAndSetComputeConstants(v4, 0, &dataa, 0x20u, NULL);
            R_Dispatch(v4, (unsigned int)(v37 + 7) >> 3, (v38 + 7) >> 3, 1u);
            v31 = v67;
          }
          else
          {
            R_CopyTextureRect(v4, v10, Resident, 0, 0, v35, i, 0, 0, v35, v31, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width >> v35, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height >> v35);
          }
          ++v35;
        }
        p_requestCount = v73;
        v9 = v70;
        v3 = v81;
        v11 = (unsigned int)(v63 + 1);
        v63 = v11;
      }
      while ( (unsigned int)v11 < *v73 );
LABEL_86:
      reflectionProbeFrameIndex = v74;
    }
  }
  else
  {
    textureDsta = (GfxTexture *)R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId);
    v10 = textureDsta;
    R_HW_AddResourceTransition(v4, textureDsta, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v4);
    v39 = 0i64;
    v64 = 0;
    if ( *p_requestCount )
    {
      do
      {
        v40 = &v9->requests[v39];
        v41 = g_worldDraw->reflectionProbeData.reflectionProbes[v40->mapProbeIndex].probeImageIndirection;
        if ( v41 >> 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3638, ASSERT_TYPE_ASSERT, "(zoneIndex == 0)", (const char *)&queryFormat, "zoneIndex == 0") )
          __debugbreak();
        if ( (v41 & 0xF0000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3639, ASSERT_TYPE_ASSERT, "(bucketIndex == 0)", (const char *)&queryFormat, "bucketIndex == 0") )
          __debugbreak();
        dstCacheSlot = v40->dstCacheSlot;
        v66 = dstCacheSlot;
        v43 = g_worldDraw->reflectionProbeData.reflectionProbeImages[(unsigned __int16)v41];
        v44 = R_Texture_GetResident(v43->textureId);
        v45 = v43->width;
        if ( v45 != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width )
        {
          LODWORD(flaga) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3645, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->width == dstCacheImage->width ) )", "( srcProbeImage->width ) = %u", flaga) )
            __debugbreak();
        }
        v46 = v43->height;
        if ( v46 != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height )
        {
          LODWORD(flaga) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3646, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->height == dstCacheImage->height ) )", "( srcProbeImage->height ) = %u", flaga) )
            __debugbreak();
        }
        levelCount = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount;
        for ( j = 0; j < 6; ++j )
        {
          v49 = 0;
          if ( levelCount )
          {
            do
            {
              R_CopyTextureRect(v4, textureDsta, v44, 0, 0, v49, j + 6 * dstCacheSlot, 0, 0, v49, j, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width >> v49, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height >> v49);
              levelCount = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount;
              ++v49;
            }
            while ( v49 < s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount );
            dstCacheSlot = v66;
          }
        }
        p_requestCount = v73;
        v9 = v70;
        v39 = (unsigned int)(v64 + 1);
        v64 = v39;
      }
      while ( (unsigned int)v39 < *v73 );
      v10 = textureDsta;
      goto LABEL_86;
    }
  }
  R_HW_AddResourceTransition(v4, v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v50 = *p_requestCount;
  for ( k = 0; k < v50; v9 = (GfxReflectionProbeCopyQueue *)((char *)v9 + 8) )
  {
    v52 = 2 * k++;
    v104[v52] = v9->requests[0].mapProbeIndex;
    v104[(unsigned int)(v52 + 1)] = v9->requests[0].dstCacheSlot;
  }
  v53 = reflectionProbeFrameIndex;
  R_UpdateGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.bufferArray[v53].frameCacheSHCopyIndices, v104, 8 * v50);
  v54 = g_worldDraw;
  R_HW_AddResourceTransition(v4, &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v4);
  R_SetComputeShader(v4, rgp.shCopyIndices);
  p_view = &v54->reflectionProbeData.reflectionProbeSHBuffer.view;
  R_SetComputeViews(v4, 0, 1, (const GfxShaderBufferView *const *)&p_view);
  v83 = &s_gfxReflectionProbeStaticData.bufferArray[v53].frameCacheSHCopyIndices.view;
  R_SetComputeViews(v4, 1, 1, (const GfxShaderBufferView *const *)&v83);
  p_rwView = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v4, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v55 = *p_requestCount;
  v103[1] = g_worldDraw->reflectionProbeData.reflectionProbeCount;
  v103[0] = 85;
  v103[2] = v55;
  R_UploadAndSetComputeConstants(v4, 0, v103, 0x10u, NULL);
  R_Dispatch(v4, (*p_requestCount + 63) >> 6, 1u, 1u);
  R_HW_AddResourceTransition(v4, &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v4);
}

/*
==============
R_ReflectionProbe_DebugRenderProbeVolume
==============
*/
void R_ReflectionProbe_DebugRenderProbeVolume(DebugGlobals *debugGlobalsEntry, const GfxCamera *camera, const int options, const GfxReflectionProbeInstance *probeInstance, unsigned int frameIndex, unsigned __int16 probeCacheSlot, bool depthTest)
{
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float ObbDepth; 
  const dvar_t *v15; 
  float value; 
  GfxReflectionProbe *v17; 
  char v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  vec4_t v61; 
  const dvar_t *v62; 
  const char *v63; 
  const vec4_t *v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  const char *v73; 
  const char *v74; 
  const char *v75; 
  const char *v76; 
  unsigned int v77; 
  const char *v78; 
  vec3_t *p_probePosition; 
  const char *v80; 
  vec3_t *v81; 
  char *fmt; 
  bool enabled; 
  bool v84; 
  char v85; 
  bool v86; 
  bool v87; 
  unsigned __int16 probeRelightingIndex; 
  float v89; 
  const char *v90; 
  float v91; 
  const char *v92; 
  float v93; 
  const char *v94; 
  const char *v96; 
  GfxReflectionProbeObb obb; 
  vec4_t color; 
  vec3_t v100[8]; 
  vec3_t outVertices[8]; 
  vec3_t vertices[8]; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 

  ObbDepth = R_ReflectionProbe_GetObbDepth(&probeInstance->volumeObb, &camera->origin, camera->axis.m);
  v15 = r_reflectionProbeVolumeDrawDistance;
  if ( !r_reflectionProbeVolumeDrawDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  if ( value < 0.0 || ObbDepth <= value )
  {
    v17 = &g_worldDraw->reflectionProbeData.reflectionProbes[probeInstance->probeImageIndex];
    v18 = ~probeInstance->flags;
    *(_QWORD *)color.v = v17;
    v85 = v18 & 1;
    probeRelightingIndex = v17->probeRelightingIndex;
    R_ReflectionProbe_GetObbVertices(&probeInstance->volumeObb, (vec3_t (*)[8])outVertices);
    v19 = probeInstance->volumeObb.halfSize.v[2];
    v20 = *(_OWORD *)&probeInstance->volumeObb.yAxis.z;
    *(__m256i *)obb.center.v = *(__m256i *)probeInstance->volumeObb.center.v;
    *(_QWORD *)obb.halfSize.v = *(_QWORD *)probeInstance->volumeObb.halfSize.v;
    obb.halfSize.v[2] = v19;
    *(_OWORD *)&obb.yAxis.z = v20;
    v21 = obb.halfSize.v[1] * r_reflectionProbeVolumeScale->current.vector.v[1];
    obb.halfSize.v[0] = (float)(obb.halfSize.v[0] * r_reflectionProbeVolumeScale->current.value) - probeInstance->feather.v[0];
    v22 = v19 * r_reflectionProbeVolumeScale->current.vector.v[2];
    obb.halfSize.v[1] = v21 - probeInstance->feather.v[1];
    obb.halfSize.v[2] = v22 - probeInstance->feather.v[2];
    R_ReflectionProbe_GetObbVertices(&obb, (vec3_t (*)[8])vertices);
    enabled = 0;
    v84 = 0;
    v87 = 0;
    v86 = 0;
    if ( options >= 2 )
      enabled = r_reflectionProbeVolumeShowFeather->current.enabled;
    if ( options >= 1 )
      v84 = r_reflectionProbeVolumeShowInfo->current.enabled;
    if ( options >= 4 )
    {
      v87 = r_reflectionProbeVolumeShowProbePosition->current.enabled;
      v86 = r_reflectionProbeVolumeShowLinesToProbe->current.enabled;
    }
    v23 = r_reflectionProbeVolumeShowProjectionBoxes;
    if ( !r_reflectionProbeVolumeShowProjectionBoxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      v106 = v7;
      v105 = v8;
      v104 = v9;
      v103 = v10;
      R_ReflectionProbe_GetObbVertices(&probeInstance->volumeObb, (vec3_t (*)[8])v100);
      v24 = r_reflectionProbeExpandProjectionOverride;
      v25 = probeInstance->expandProjectionNeg.v[0];
      v26 = probeInstance->expandProjectionNeg.v[1];
      v27 = probeInstance->expandProjectionPos.v[0];
      v91 = probeInstance->expandProjectionNeg.v[2];
      v89 = probeInstance->expandProjectionPos.v[1];
      v93 = probeInstance->expandProjectionPos.v[2];
      if ( !r_reflectionProbeExpandProjectionOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.enabled )
      {
        v28 = r_reflectionProbeExpandProjectionNeg;
        if ( !r_reflectionProbeExpandProjectionNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        v29 = v28->current.vector.v[2];
        v25 = v28->current.value;
        v26 = v28->current.vector.v[1];
        v30 = r_reflectionProbeExpandProjectionPos;
        v91 = v29;
        if ( !r_reflectionProbeExpandProjectionPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        v27 = v30->current.value;
        v89 = v30->current.vector.v[1];
        v93 = v30->current.vector.v[2];
      }
      v31 = v100[0].v[0];
      v32 = v100[0].v[1];
      LODWORD(v33) = COERCE_UNSIGNED_INT(v25 * probeInstance->volumeObb.xAxis.v[0]) ^ _xmm;
      LODWORD(v34) = COERCE_UNSIGNED_INT(v25 * probeInstance->volumeObb.xAxis.v[1]) ^ _xmm;
      LODWORD(v35) = COERCE_UNSIGNED_INT(v25 * probeInstance->volumeObb.xAxis.v[2]) ^ _xmm;
      obb.xAxis.v[0] = v33 + v100[2].v[0];
      obb.xAxis.v[2] = v35 + v100[2].v[2];
      obb.center.v[0] = v100[0].v[0] + v33;
      obb.center.v[1] = v100[0].v[1] + v34;
      obb.center.v[2] = v35 + v100[0].v[2];
      obb.xAxis.v[1] = v34 + v100[2].v[1];
      obb.yAxis.v[0] = v33 + v100[4].v[0];
      obb.yAxis.v[1] = v34 + v100[4].v[1];
      obb.yAxis.v[2] = v35 + v100[4].v[2];
      obb.zAxis.v[0] = v33 + v100[6].v[0];
      obb.zAxis.v[1] = v34 + v100[6].v[1];
      obb.zAxis.v[2] = v35 + v100[6].v[2];
      if ( depthTest )
      {
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorRed);
      }
      else
      {
        R_AddDebugLine(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorRed);
      }
      v36 = v27 * probeInstance->volumeObb.xAxis.v[0];
      v37 = v27 * probeInstance->volumeObb.xAxis.v[1];
      v38 = v27 * probeInstance->volumeObb.xAxis.v[2];
      v39 = v100[1].v[0];
      v40 = v100[1].v[1];
      v41 = v100[1].v[2];
      v42 = v100[5].v[0];
      v43 = v100[5].v[1];
      v44 = v100[5].v[2];
      obb.xAxis.v[0] = v36 + v100[3].v[0];
      obb.xAxis.v[2] = v38 + v100[3].v[2];
      obb.center.v[0] = v100[1].v[0] + v36;
      obb.center.v[1] = v100[1].v[1] + v37;
      obb.center.v[2] = v100[1].v[2] + v38;
      obb.xAxis.v[1] = v37 + v100[3].v[1];
      obb.yAxis.v[0] = v100[5].v[0] + v36;
      obb.yAxis.v[1] = v100[5].v[1] + v37;
      obb.yAxis.v[2] = v100[5].v[2] + v38;
      obb.zAxis.v[0] = v36 + v100[7].v[0];
      obb.zAxis.v[1] = v37 + v100[7].v[1];
      obb.zAxis.v[2] = v38 + v100[7].v[2];
      if ( depthTest )
      {
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorRed);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorRed);
      }
      else
      {
        R_AddDebugLine(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorRed);
        R_AddDebugLine(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorRed);
      }
      LODWORD(v45) = COERCE_UNSIGNED_INT(v26 * probeInstance->volumeObb.yAxis.v[0]) ^ _xmm;
      LODWORD(v46) = COERCE_UNSIGNED_INT(v26 * probeInstance->volumeObb.yAxis.v[1]) ^ _xmm;
      v47 = v26 * probeInstance->volumeObb.yAxis.v[2];
      v48 = v100[0].v[2];
      obb.center.v[0] = v45 + v31;
      obb.center.v[1] = v46 + v32;
      obb.center.v[2] = COERCE_FLOAT(LODWORD(v47) ^ _xmm) + v100[0].v[2];
      obb.xAxis.v[0] = v39 + v45;
      obb.xAxis.v[1] = v46 + v40;
      obb.xAxis.v[2] = COERCE_FLOAT(LODWORD(v47) ^ _xmm) + v41;
      obb.yAxis.v[0] = v45 + v100[4].v[0];
      obb.yAxis.v[1] = v46 + v100[4].v[1];
      obb.yAxis.v[2] = COERCE_FLOAT(LODWORD(v47) ^ _xmm) + v100[4].v[2];
      obb.zAxis.v[0] = v42 + v45;
      obb.zAxis.v[1] = v46 + v43;
      obb.zAxis.v[2] = COERCE_FLOAT(LODWORD(v47) ^ _xmm) + v44;
      if ( depthTest )
      {
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorGreen);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorGreen);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorGreen);
        R_AddDebugLineDepthTest(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorGreen);
      }
      else
      {
        R_AddDebugLine(debugGlobalsEntry, &obb.center, &obb.xAxis, &colorGreen);
        R_AddDebugLine(debugGlobalsEntry, &obb.xAxis, &obb.zAxis, &colorGreen);
        R_AddDebugLine(debugGlobalsEntry, &obb.zAxis, &obb.yAxis, &colorGreen);
        R_AddDebugLine(debugGlobalsEntry, &obb.yAxis, &obb.center, &colorGreen);
      }
      v49 = v89 * probeInstance->volumeObb.yAxis.v[1];
      v50 = v89 * probeInstance->volumeObb.yAxis.v[0];
      v51 = v89 * probeInstance->volumeObb.yAxis.v[2];
      obb.center.v[0] = v50 + v100[2].v[0];
      obb.center.v[1] = v49 + v100[2].v[1];
      obb.center.v[2] = v51 + v100[2].v[2];
      obb.xAxis.v[0] = v50 + v100[3].v[0];
      obb.xAxis.v[1] = v49 + v100[3].v[1];
      obb.xAxis.v[2] = v51 + v100[3].v[2];
      obb.yAxis.v[0] = v50 + v100[6].v[0];
      obb.yAxis.v[1] = v49 + v100[6].v[1];
      obb.yAxis.v[2] = v51 + v100[6].v[2];
      obb.zAxis.v[0] = v50 + v100[7].v[0];
      obb.zAxis.v[1] = v49 + v100[7].v[1];
      obb.zAxis.v[2] = v51 + v100[7].v[2];
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorGreen, depthTest);
      LODWORD(v52) = COERCE_UNSIGNED_INT(v91 * probeInstance->volumeObb.zAxis.v[0]) ^ _xmm;
      LODWORD(v53) = COERCE_UNSIGNED_INT(v91 * probeInstance->volumeObb.zAxis.v[1]) ^ _xmm;
      LODWORD(v54) = COERCE_UNSIGNED_INT(v91 * probeInstance->volumeObb.zAxis.v[2]) ^ _xmm;
      obb.center.v[0] = v31 + v52;
      obb.center.v[1] = v32 + v53;
      obb.center.v[2] = v48 + v54;
      obb.xAxis.v[0] = v39 + v52;
      obb.xAxis.v[1] = v40 + v53;
      obb.xAxis.v[2] = v54 + v41;
      obb.yAxis.v[0] = v52 + v100[2].v[0];
      obb.yAxis.v[1] = v53 + v100[2].v[1];
      obb.yAxis.v[2] = v54 + v100[2].v[2];
      obb.zAxis.v[0] = v52 + v100[3].v[0];
      obb.zAxis.v[1] = v53 + v100[3].v[1];
      obb.zAxis.v[2] = v54 + v100[3].v[2];
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorBlue, depthTest);
      v55 = v93 * probeInstance->volumeObb.zAxis.v[0];
      v56 = v93 * probeInstance->volumeObb.zAxis.v[1];
      v57 = v93 * probeInstance->volumeObb.zAxis.v[2];
      obb.center.v[0] = v55 + v100[4].v[0];
      obb.center.v[1] = v56 + v100[4].v[1];
      obb.center.v[2] = v57 + v100[4].v[2];
      obb.xAxis.v[0] = v42 + v55;
      obb.xAxis.v[1] = v56 + v43;
      obb.xAxis.v[2] = v44 + v57;
      obb.yAxis.v[0] = v55 + v100[6].v[0];
      obb.yAxis.v[1] = v56 + v100[6].v[1];
      obb.yAxis.v[2] = v57 + v100[6].v[2];
      obb.zAxis.v[0] = v55 + v100[7].v[0];
      obb.zAxis.v[1] = v56 + v100[7].v[1];
      obb.zAxis.v[2] = v57 + v100[7].v[2];
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorBlue, depthTest);
    }
    v58 = 8i64;
    if ( enabled )
    {
      DebugRenderBoxFromVertices(debugGlobalsEntry, (const vec3_t (*)[8])vertices, &colorBlue, depthTest);
      v59 = 0i64;
      v60 = 8i64;
      do
      {
        R_AddDebugLine(debugGlobalsEntry, &outVertices[v59], &vertices[v59], &colorBlue);
        ++v59;
        --v60;
      }
      while ( v60 );
      v17 = *(GfxReflectionProbe **)color.v;
    }
    if ( options >= 1 )
    {
      if ( !r_reflectionProbeVolumeHighlightNoProj->current.enabled || v85 )
      {
        if ( !r_reflectionProbeVolumeHighlightRelit->current.enabled || probeRelightingIndex == 0xFFFF )
          v61 = colorCyan;
        else
          v61 = colorRed;
      }
      else
      {
        v61 = colorGreen;
      }
      v62 = r_debugShaderLighting;
      color = v61;
      if ( !r_debugShaderLighting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      if ( v62->current.integer == 13 )
        R_DebugUniqueColorFromIndex(probeInstance->probeImageIndex, (vec3_t *)&color);
      DebugRenderBoxFromVertices(debugGlobalsEntry, (const vec3_t (*)[8])outVertices, &color, depthTest);
    }
    if ( v84 )
    {
      v63 = (char *)&queryFormat.fmt + 3;
      v64 = &colorMagenta;
      v65 = r_reflectionProbeVolumeScale->current.value * probeInstance->volumeObb.halfSize.v[0];
      v66 = r_reflectionProbeVolumeScale->current.vector.v[2] * probeInstance->volumeObb.halfSize.v[2];
      v67 = r_reflectionProbeVolumeScale->current.vector.v[1] * probeInstance->volumeObb.halfSize.v[1];
      v68 = (float)(v65 * probeInstance->volumeObb.xAxis.v[1]) + probeInstance->volumeObb.center.v[1];
      v69 = v66 * probeInstance->volumeObb.zAxis.v[1];
      color.v[0] = (float)((float)((float)(v65 * probeInstance->volumeObb.xAxis.v[0]) + probeInstance->volumeObb.center.v[0]) + (float)(v67 * probeInstance->volumeObb.yAxis.v[0])) + (float)(v66 * probeInstance->volumeObb.zAxis.v[0]);
      v70 = (float)(v68 + (float)(v67 * probeInstance->volumeObb.yAxis.v[1])) + v69;
      v71 = (float)(v65 * probeInstance->volumeObb.xAxis.v[2]) + probeInstance->volumeObb.center.v[2];
      v72 = v66 * probeInstance->volumeObb.zAxis.v[2];
      color.v[1] = v70;
      v73 = (char *)&queryFormat.fmt + 3;
      if ( probeRelightingIndex != 0xFFFF )
        v73 = " (Lit)";
      v90 = v73;
      v74 = (char *)&queryFormat.fmt + 3;
      if ( !v85 )
        v74 = " (NoProj)";
      v92 = v74;
      v75 = (char *)&queryFormat.fmt + 3;
      if ( (probeInstance->flags & 4) != 0 )
        v75 = " (OverrideLG)";
      v76 = (char *)&queryFormat.fmt + 3;
      v94 = v75;
      if ( (probeInstance->flags & 2) != 0 )
        v76 = " (Scripted)";
      color.v[2] = (float)(v71 + (float)(v67 * probeInstance->volumeObb.yAxis.v[2])) + v72;
      v96 = v76;
      if ( R_ReflectionProbe_IsTransientStreamingEnabled() )
      {
        v77 = v17->probeImageIndirection >> 20;
        if ( (unsigned __int16)v77 >= frontEndDataOut->transientDrawContext.zoneCount && (_WORD)v77 != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1665, ASSERT_TYPE_ASSERT, "(zoneIndex < frontEndDataOut->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex)", (const char *)&queryFormat, "zoneIndex < frontEndDataOut->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex") )
          __debugbreak();
        v63 = "(exclusive)";
        if ( (_WORD)v77 == 4095 )
          v63 = "(shared)";
        if ( (_WORD)v77 == 4095 )
          v64 = &colorYellowHeat;
      }
      v78 = j_va("Index:%u(%u) Pri:%.3f Feather:(%.0f,%.0f,%.0f) Vol:(%.0f,%.0f,%.0f) LOD:%u %s%s%s%s%s", probeInstance->probeImageIndex, probeCacheSlot, probeInstance->priority, probeInstance->feather.v[0], probeInstance->feather.v[1], probeInstance->feather.v[2], (float)(v65 * 2.0), (float)(v67 * 2.0), (float)(v66 * 2.0), probeInstance->lodLevel, v90, v92, v94, v96, v63);
      R_AddScaledDebugString(debugGlobalsEntry, camera, (const vec3_t *)&color, &colorCyan, v78);
      p_probePosition = &probeInstance->probePosition;
      LODWORD(fmt) = probeInstance->lodLevel;
      v80 = j_va("Index:%u(%u) Pri:%.3f LOD:%u %s%s%s%s%s", probeInstance->probeImageIndex, probeCacheSlot, probeInstance->priority, fmt, v90, v92, v94, v96, v63);
      R_AddScaledDebugString(debugGlobalsEntry, camera, &probeInstance->probePosition, v64, v80);
    }
    else
    {
      p_probePosition = &probeInstance->probePosition;
    }
    if ( v86 )
    {
      v81 = outVertices;
      do
      {
        R_AddDebugLine(debugGlobalsEntry, p_probePosition, v81++, &colorBlue);
        --v58;
      }
      while ( v58 );
    }
    if ( v87 )
      R_AddDebugPoint(debugGlobalsEntry, p_probePosition, 32.0, &colorRed);
  }
}

/*
==============
R_ReflectionProbe_DrawSH
==============
*/
void R_ReflectionProbe_DrawSH(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  bool v5; 
  GfxViewport outViewport; 

  source = context->source;
  state = context->state;
  R_Set3D(context->source);
  if ( (*((_BYTE *)source + 11668) & 2) != 0 )
  {
    R_GetViewport(source, &outViewport);
    R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
    R_UpdateViewport(source, &outViewport);
  }
  if ( state->vertDeclType != VERTDECL_GENERIC )
    state->pipelineStateDirty = 1;
  v5 = state->depthRangeType == GFX_DEPTH_RANGE_SCENE;
  state->vertDeclType = VERTDECL_GENERIC;
  if ( !v5 )
    R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
  if ( R_BeginMaterial(state, rgp.reflectionProbeSHDebug, TECHNIQUE_EMISSIVE) )
  {
    outViewport = (GfxViewport)*context;
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      outViewport = (GfxViewport)*context;
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1910)");
      outViewport = (GfxViewport)*context;
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1911)");
      outViewport = (GfxViewport)*context;
      R_GpuLightGrid_DrawDebugSpheres((GfxCmdBufContext *)&outViewport, s_world.draw.reflectionProbeData.reflectionProbeInstanceCount);
    }
  }
}

/*
==============
R_ReflectionProbe_DrawSH_Enabled
==============
*/
bool R_ReflectionProbe_DrawSH_Enabled(const GfxViewInfo *viewInfo)
{
  return r_reflectionProbeDebugMode->current.integer && s_world.draw.reflectionProbeData.reflectionProbeCount;
}

/*
==============
R_ReflectionProbe_GetClusterBuffer
==============
*/
GfxWrappedRWBuffer *R_ReflectionProbe_GetClusterBuffer()
{
  return &s_gfxReflectionProbeStaticData.probeClusterBuffer;
}

/*
==============
R_ReflectionProbe_GetFrustumWords
==============
*/
unsigned __int64 R_ReflectionProbe_GetFrustumWords(unsigned int frameDataIndex)
{
  return ((unsigned __int64)s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].probeCount + 31) >> 5;
}

/*
==============
R_ReflectionProbe_GetImagePixelFormat
==============
*/
__int64 R_ReflectionProbe_GetImagePixelFormat()
{
  return (unsigned int)g_R_RT_renderTargetFmts[3];
}

/*
==============
R_ReflectionProbe_GetInstance
==============
*/
GfxSceneReflectionProbeInstance *R_ReflectionProbe_GetInstance(const bool isWorldInstance, const unsigned int probeInstanceIndex)
{
  __int64 v2; 

  v2 = probeInstanceIndex;
  if ( isWorldInstance )
  {
    if ( probeInstanceIndex >= g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1305, ASSERT_TYPE_ASSERT, "(unsigned)( probeInstanceIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount )", "probeInstanceIndex doesn't index g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount\n\t%i not in [0, %i)", probeInstanceIndex, g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount) )
      __debugbreak();
    return (GfxSceneReflectionProbeInstance *)&g_worldDraw->reflectionProbeData.reflectionProbeInstances[v2];
  }
  else
  {
    if ( probeInstanceIndex >= scene.sceneReflectionProbeInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1309, ASSERT_TYPE_ASSERT, "(unsigned)( probeInstanceIndex ) < (unsigned)( scene.sceneReflectionProbeInstanceCount )", "probeInstanceIndex doesn't index scene.sceneReflectionProbeInstanceCount\n\t%i not in [0, %i)", probeInstanceIndex, scene.sceneReflectionProbeInstanceCount) )
      __debugbreak();
    return &scene.sceneReflectionProbeInstances[v2];
  }
}

/*
==============
R_ReflectionProbe_GetInstanceBuffer
==============
*/
GfxWrappedBuffer *R_ReflectionProbe_GetInstanceBuffer(unsigned int frameDataIndex)
{
  return &s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].probeInstanceBuffer;
}

/*
==============
R_ReflectionProbe_GetLightgridOverrideBuffer
==============
*/
GfxWrappedBuffer *R_ReflectionProbe_GetLightgridOverrideBuffer(unsigned int frameDataIndex)
{
  return &s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].lightgridOverrideBuffer;
}

/*
==============
R_ReflectionProbe_GetObbBuffer
==============
*/
GfxWrappedBuffer *R_ReflectionProbe_GetObbBuffer(unsigned int frameDataIndex)
{
  return &s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].probeObbBuffer;
}

/*
==============
R_ReflectionProbe_GetObbDepth
==============
*/
float R_ReflectionProbe_GetObbDepth(const GfxReflectionProbeObb *r_obb, const vec3_t *cameraPos, const vec3_t *cameraAxis)
{
  float v3; 
  float v4; 

  v3 = cameraAxis->v[1];
  v4 = cameraAxis->v[2];
  return (float)((float)((float)((float)(r_obb->center.v[1] - cameraPos->v[1]) * v3) + (float)((float)(r_obb->center.v[0] - cameraPos->v[0]) * cameraAxis->v[0])) + (float)((float)(r_obb->center.v[2] - cameraPos->v[2]) * v4)) - (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v3 * r_obb->yAxis.v[1]) + (float)(cameraAxis->v[0] * r_obb->yAxis.v[0])) + (float)(v4 * r_obb->yAxis.v[2])) * (float)(r_obb->halfSize.v[1] * r_reflectionProbeVolumeScale->current.vector.v[1])) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v3 * r_obb->xAxis.v[1]) + (float)(cameraAxis->v[0] * r_obb->xAxis.v[0])) + (float)(v4 * r_obb->xAxis.v[2])) * (float)(r_obb->halfSize.v[0] * r_reflectionProbeVolumeScale->current.value)) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v3 * r_obb->zAxis.v[1]) + (float)(cameraAxis->v[0] * r_obb->zAxis.v[0])) + (float)(v4 * r_obb->zAxis.v[2])) * (float)(r_obb->halfSize.v[2] * r_reflectionProbeVolumeScale->current.vector.v[2])) & _xmm));
}

/*
==============
R_ReflectionProbe_GetObbVertices
==============
*/
void R_ReflectionProbe_GetObbVertices(const GfxReflectionProbeObb *obb, vec3_t (*outVertices)[8])
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  v2 = obb->halfSize.v[1] * r_reflectionProbeVolumeScale->current.vector.v[1];
  v3 = r_reflectionProbeVolumeScale->current.value * obb->halfSize.v[0];
  v4 = v3 * obb->xAxis.v[0];
  v5 = v3 * obb->xAxis.v[2];
  v6 = obb->halfSize.v[2] * r_reflectionProbeVolumeScale->current.vector.v[2];
  v7 = v3 * obb->xAxis.v[1];
  v8 = obb->center.v[0] - v4;
  v9 = v2 * obb->yAxis.v[0];
  v10 = v2 * obb->yAxis.v[1];
  v11 = v2 * obb->yAxis.v[2];
  v12 = v6 * obb->zAxis.v[1];
  v13 = v6 * obb->zAxis.v[2];
  v14 = v6 * obb->zAxis.v[0];
  (*outVertices)[0].v[0] = v8;
  (*outVertices)[0].v[1] = obb->center.v[1] - v7;
  (*outVertices)[0].v[2] = obb->center.v[2] - v5;
  (*outVertices)[0].v[0] = v8 + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
  (*outVertices)[0].v[1] = (*outVertices)[0].v[1] - v10;
  (*outVertices)[0].v[2] = (*outVertices)[0].v[2] - v11;
  (*outVertices)[0].v[0] = (float)(v8 + COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + COERCE_FLOAT(LODWORD(v14) ^ _xmm);
  (*outVertices)[0].v[1] = (*outVertices)[0].v[1] - v12;
  (*outVertices)[0].v[2] = (*outVertices)[0].v[2] - v13;
  (*outVertices)[1].v[0] = v4 + obb->center.v[0];
  (*outVertices)[1].v[1] = v7 + obb->center.v[1];
  (*outVertices)[1].v[2] = v5 + obb->center.v[2];
  (*outVertices)[1].v[0] = COERCE_FLOAT(LODWORD(v9) ^ _xmm) + (*outVertices)[1].v[0];
  (*outVertices)[1].v[1] = (*outVertices)[1].v[1] - v10;
  (*outVertices)[1].v[2] = (*outVertices)[1].v[2] - v11;
  (*outVertices)[1].v[0] = COERCE_FLOAT(LODWORD(v14) ^ _xmm) + (*outVertices)[1].v[0];
  (*outVertices)[1].v[1] = (*outVertices)[1].v[1] - v12;
  (*outVertices)[1].v[2] = (*outVertices)[1].v[2] - v13;
  (*outVertices)[2].v[0] = obb->center.v[0] - v4;
  (*outVertices)[2].v[1] = obb->center.v[1] - v7;
  (*outVertices)[2].v[2] = obb->center.v[2] - v5;
  (*outVertices)[2].v[0] = v9 + (*outVertices)[2].v[0];
  (*outVertices)[2].v[1] = v10 + (*outVertices)[2].v[1];
  (*outVertices)[2].v[2] = v11 + (*outVertices)[2].v[2];
  (*outVertices)[2].v[0] = COERCE_FLOAT(LODWORD(v14) ^ _xmm) + (*outVertices)[2].v[0];
  (*outVertices)[2].v[1] = (*outVertices)[2].v[1] - v12;
  (*outVertices)[2].v[2] = (*outVertices)[2].v[2] - v13;
  (*outVertices)[3].v[0] = v4 + obb->center.v[0];
  (*outVertices)[3].v[1] = v7 + obb->center.v[1];
  (*outVertices)[3].v[2] = v5 + obb->center.v[2];
  (*outVertices)[3].v[0] = v9 + (*outVertices)[3].v[0];
  (*outVertices)[3].v[1] = v10 + (*outVertices)[3].v[1];
  (*outVertices)[3].v[2] = v11 + (*outVertices)[3].v[2];
  (*outVertices)[3].v[0] = (*outVertices)[3].v[0] - v14;
  (*outVertices)[3].v[1] = (*outVertices)[3].v[1] - v12;
  (*outVertices)[3].v[2] = (*outVertices)[3].v[2] - v13;
  (*outVertices)[4].v[0] = obb->center.v[0] - v4;
  (*outVertices)[4].v[1] = obb->center.v[1] - v7;
  (*outVertices)[4].v[2] = obb->center.v[2] - v5;
  (*outVertices)[4].v[0] = (*outVertices)[4].v[0] - v9;
  (*outVertices)[4].v[1] = (*outVertices)[4].v[1] - v10;
  (*outVertices)[4].v[2] = (*outVertices)[4].v[2] - v11;
  (*outVertices)[4].v[0] = v14 + (*outVertices)[4].v[0];
  (*outVertices)[4].v[1] = v12 + (*outVertices)[4].v[1];
  (*outVertices)[4].v[2] = v13 + (*outVertices)[4].v[2];
  (*outVertices)[5].v[0] = v4 + obb->center.v[0];
  (*outVertices)[5].v[1] = v7 + obb->center.v[1];
  (*outVertices)[5].v[2] = v5 + obb->center.v[2];
  (*outVertices)[5].v[0] = (*outVertices)[5].v[0] - v9;
  (*outVertices)[5].v[1] = (*outVertices)[5].v[1] - v10;
  (*outVertices)[5].v[2] = (*outVertices)[5].v[2] - v11;
  (*outVertices)[5].v[0] = v14 + (*outVertices)[5].v[0];
  (*outVertices)[5].v[1] = v12 + (*outVertices)[5].v[1];
  (*outVertices)[5].v[2] = v13 + (*outVertices)[5].v[2];
  (*outVertices)[6].v[0] = obb->center.v[0] - v4;
  (*outVertices)[6].v[1] = obb->center.v[1] - v7;
  (*outVertices)[6].v[2] = obb->center.v[2] - v5;
  (*outVertices)[6].v[0] = v9 + (*outVertices)[6].v[0];
  (*outVertices)[6].v[1] = v10 + (*outVertices)[6].v[1];
  (*outVertices)[6].v[2] = v11 + (*outVertices)[6].v[2];
  (*outVertices)[6].v[0] = v14 + (*outVertices)[6].v[0];
  (*outVertices)[6].v[1] = v12 + (*outVertices)[6].v[1];
  (*outVertices)[6].v[2] = v13 + (*outVertices)[6].v[2];
  (*outVertices)[7].v[0] = v4 + obb->center.v[0];
  (*outVertices)[7].v[1] = v7 + obb->center.v[1];
  (*outVertices)[7].v[2] = v5 + obb->center.v[2];
  (*outVertices)[7].v[0] = v9 + (*outVertices)[7].v[0];
  (*outVertices)[7].v[1] = v10 + (*outVertices)[7].v[1];
  (*outVertices)[7].v[2] = v11 + (*outVertices)[7].v[2];
  (*outVertices)[7].v[0] = v14 + (*outVertices)[7].v[0];
  (*outVertices)[7].v[1] = v12 + (*outVertices)[7].v[1];
  (*outVertices)[7].v[2] = v13 + (*outVertices)[7].v[2];
}

/*
==============
R_ReflectionProbe_GetProbeImageArray
==============
*/
GfxImage *R_ReflectionProbe_GetProbeImageArray()
{
  GfxReflectionProbeTransientData *reflectionProbes; 

  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage;
  }
  if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 624, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID") )
    __debugbreak();
  return &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage;
}

/*
==============
R_ReflectionProbe_GetProbeOctahedronImageArray
==============
*/
GfxImage *R_ReflectionProbe_GetProbeOctahedronImageArray()
{
  GfxReflectionProbeTransientData *reflectionProbes; 

  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron;
  }
  if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 700, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID") )
    __debugbreak();
  return &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron;
}

/*
==============
R_ReflectionProbe_GetProcessViewInstance
==============
*/
GfxReflectionProbeInstance *R_ReflectionProbe_GetProcessViewInstance(const ReflectionProbeProcessViewInstanceInfo *processViewInstanceInfo)
{
  return R_ReflectionProbe_GetInstance(processViewInstanceInfo->isWorldInstance, processViewInstanceInfo->probeInstanceIndex);
}

/*
==============
R_ReflectionProbe_GetReflectionProbeCount
==============
*/
__int64 R_ReflectionProbe_GetReflectionProbeCount()
{
  GfxReflectionProbeTransientData *reflectionProbes; 

  if ( g_worldDraw->reflectionProbeData.reflectionProbeImages )
    return 85i64;
  if ( g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
    return 85i64;
  reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
  if ( reflectionProbes && reflectionProbes->exclusiveProbeCount )
    return 85i64;
  else
    return rgp.world->draw.reflectionProbeData.reflectionProbeCount;
}

/*
==============
R_ReflectionProbe_GetRelightableReflectionProbeImage
==============
*/
char R_ReflectionProbe_GetRelightableReflectionProbeImage(const GfxBackEndData *data, unsigned int probeIndex, const GfxImage **outProbeImage)
{
  const GfxImage **v3; 
  __int64 v5; 
  __int64 v6; 
  GfxReflectionProbe *v7; 
  __int64 v8; 
  GfxReflectionProbeRelightingData *v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned int probeImageIndirection; 
  int v13; 
  unsigned int v14; 
  GfxWorldDraw *v15; 
  __int64 v16; 
  GfxImage *v18; 
  unsigned __int16 v19; 
  unsigned __int16 height; 
  const char *v21; 
  int v22; 
  GfxImage *v23; 
  unsigned __int16 width; 
  __int64 v25; 
  __int64 v26; 
  __int64 v28; 

  v3 = outProbeImage;
  v5 = probeIndex;
  if ( !R_ReflectionProbe_IsTransientStreamingEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3376, ASSERT_TYPE_ASSERT, "(R_ReflectionProbe_IsTransientStreamingEnabled())", (const char *)&queryFormat, "R_ReflectionProbe_IsTransientStreamingEnabled()") )
    __debugbreak();
  v6 = v5;
  v28 = v5;
  v7 = &g_worldDraw->reflectionProbeData.reflectionProbes[v5];
  if ( v7->probeRelightingIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3379, ASSERT_TYPE_ASSERT, "(probe.probeRelightingIndex != 0xffff)", (const char *)&queryFormat, "probe.probeRelightingIndex != REFLECTION_PROBE_INVALID_RELIGHTING_INDEX_RUNTIME") )
    __debugbreak();
  if ( v7->probeRelightingIndex >= g_worldDraw->reflectionProbeData.probeRelightingCount )
  {
    LODWORD(v25) = v7->probeRelightingIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3380, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v25, g_worldDraw->reflectionProbeData.probeRelightingCount) )
      __debugbreak();
  }
  v8 = 0i64;
  v9 = &g_worldDraw->reflectionProbeData.probeRelightingData[v7->probeRelightingIndex];
  if ( v9->zoneCount )
  {
    do
    {
      v10 = v9->zones[v8];
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( bitarray_base<bitarray<1536>>::testBit(&data->transientVisibility, v10) )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < v9->zoneCount );
    v6 = v28;
    v3 = outProbeImage;
  }
  if ( (_DWORD)v8 == v9->zoneCount )
    return 0;
  if ( !rg.useRProbeOctahedron )
  {
    v23 = g_worldDraw->reflectionProbeData.reflectionProbeImages[v6];
    *v3 = v23;
    width = v23->width;
    if ( width != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width )
    {
      LODWORD(v25) = width;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3426, ASSERT_TYPE_ASSERT, "( ( probeImage->width == s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width ) )", "( probeImage->width ) = %u", v25) )
        __debugbreak();
    }
    height = v23->height;
    if ( height == s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height )
      return 1;
    v21 = "( ( probeImage->height == s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height ) )";
    v22 = 3427;
    goto LABEL_43;
  }
  probeImageIndirection = v7->probeImageIndirection;
  v11 = probeImageIndirection;
  v13 = HIWORD(probeImageIndirection) & 0xF;
  v14 = probeImageIndirection >> 20;
  if ( (_WORD)v14 != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3407, ASSERT_TYPE_ASSERT, "( probeZoneIndex ) == ( ReflectionProbeIndirection_SharedZoneIndex )", "%s == %s\n\t%u, %u", "probeZoneIndex", "ReflectionProbeIndirection_SharedZoneIndex", (unsigned __int16)v14, 4095) )
    __debugbreak();
  if ( v13 )
  {
    LODWORD(v25) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3408, ASSERT_TYPE_ASSERT, "( ( bucketIndex == 0 ) )", "( bucketIndex ) = %u", v25) )
      __debugbreak();
  }
  if ( v11 >= g_worldDraw->reflectionProbeData.sharedReflectionProbeCount )
  {
    LODWORD(v26) = g_worldDraw->reflectionProbeData.sharedReflectionProbeCount;
    LODWORD(v25) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3409, ASSERT_TYPE_ASSERT, "(unsigned)( bucketProbeIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.sharedReflectionProbeCount )", "bucketProbeIndex doesn't index g_worldDraw->reflectionProbeData.sharedReflectionProbeCount\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v15 = g_worldDraw;
  if ( (_WORD)v14 == 4095 )
  {
    v16 = v11;
    if ( R_Texture_IsStreamedId(g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron[v16]->textureId) && !Stream_CheckImage(v15->reflectionProbeData.reflectionProbeImages_octahedron[v16], MIP0) )
    {
      R_WarnOncePerFrame(R_WARN_REFLECTION_PROBE_FALLBACK_TEXTURE);
      return 0;
    }
  }
  v18 = g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron[v11];
  *v3 = v18;
  v19 = v18->width;
  if ( v19 != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width )
  {
    LODWORD(v25) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3418, ASSERT_TYPE_ASSERT, "( ( probeImage->width == s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width ) )", "( probeImage->width ) = %u", v25) )
      __debugbreak();
  }
  height = v18->height;
  if ( height != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height )
  {
    v21 = "( ( probeImage->height == s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height ) )";
    v22 = 3419;
LABEL_43:
    LODWORD(v25) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", v22, ASSERT_TYPE_ASSERT, v21, "( probeImage->height ) = %u", v25) )
      __debugbreak();
  }
  return 1;
}

/*
==============
R_ReflectionProbe_GetSHBuffer
==============
*/
GfxWrappedRWBuffer *R_ReflectionProbe_GetSHBuffer()
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  BspVersion bspVersion; 

  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return &rgp.world->draw.reflectionProbeData.reflectionProbeSHBuffer;
  }
  if ( s_world.bspVersion < (unsigned int)BSP_VERSION_NORMALIZED_REFLECTION_PROBE )
  {
    bspVersion = s_world.bspVersion;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 643, ASSERT_TYPE_ASSERT, "( ( s_world.bspVersion >= BSP_VERSION_NORMALIZED_REFLECTION_PROBE ) )", "( s_world.bspVersion ) = %u", bspVersion) )
      __debugbreak();
  }
  return &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer;
}

/*
==============
R_ReflectionProbe_GetZBinBuffer
==============
*/
GfxWrappedBuffer *R_ReflectionProbe_GetZBinBuffer(unsigned int frameDataIndex)
{
  return &s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].probeZBinBuffer;
}

/*
==============
R_ReflectionProbe_GlobalInit
==============
*/
void R_ReflectionProbe_GlobalInit(void)
{
  unsigned int VoxelSizeX; 
  unsigned int FrustumWidth; 
  unsigned __int64 v2; 
  unsigned int VoxelSizeY; 
  unsigned int FrustumHeight; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int **p_writePrebinData; 
  unsigned int v8; 
  int v9; 

  VoxelSizeX = R_VOL_GetVoxelSizeX(NULL);
  FrustumWidth = R_VOL_GetFrustumWidth(NULL);
  if ( !(4 * VoxelSizeX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v2 = (VoxelSizeX * FrustumWidth + (unsigned __int64)(4 * VoxelSizeX) - 1) / (4 * VoxelSizeX);
  VoxelSizeY = R_VOL_GetVoxelSizeY(NULL);
  FrustumHeight = R_VOL_GetFrustumHeight(NULL);
  if ( !(4 * VoxelSizeY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v5 = 2i64;
  v6 = (VoxelSizeY * FrustumHeight + (unsigned __int64)(4 * VoxelSizeY) - 1) / (4 * VoxelSizeY);
  p_writePrebinData = &s_gfxReflectionProbeStaticData.bufferArray[0].writePrebinData;
  v9 = v6;
  v8 = 3 * (v6 + v2 + 32);
  do
  {
    *(p_writePrebinData - 3) = (unsigned int *)PMem_Alloc(0x1980ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "probes instance write");
    *(p_writePrebinData - 2) = (unsigned int *)PMem_Alloc(0x1680ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "probes obb write");
    *p_writePrebinData = (unsigned int *)PMem_Alloc(4i64 * v8, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "probes prebin write");
    *(p_writePrebinData - 1) = (unsigned int *)PMem_Alloc(0x8000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "probes zbin write");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_writePrebinData + 3), GfxWrappedBuffer_Structured, 68, 0x60u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "refprobes instance buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_writePrebinData + 7), GfxWrappedBuffer_Structured, 60, 0x60u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "refprobes obb buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_writePrebinData + 11), GfxWrappedBuffer_Structured, 4, 3u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "refprobes lightgrid override buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_writePrebinData + 15), GfxWrappedBuffer_Structured, 4, v8, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "refprobes cluster prebin buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_writePrebinData + 19), GfxWrappedBuffer_Structured, 4, 0x2000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "probe zbin buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)p_writePrebinData + 6, GfxWrappedBuffer_Structured, 8, 0x60u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frameCacheShCopyIndices");
    p_writePrebinData += 224;
    --v5;
  }
  while ( v5 );
  R_CreateGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.probeClusterBuffer, GfxWrappedBuffer_Structured, 4, 96 * v2 * v9, GFX_DATA_FORMAT_R32_UINT, 0x49u, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, NULL, NULL, "probe masks cluster buffer");
}

/*
==============
R_ReflectionProbe_GlobalShutdown
==============
*/
void R_ReflectionProbe_GlobalShutdown(void)
{
  GfxWrappedBuffer *p_probeObbBuffer; 
  __int64 v1; 

  p_probeObbBuffer = &s_gfxReflectionProbeStaticData.bufferArray[0].probeObbBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(p_probeObbBuffer - 1);
    R_ShutdownGfxWrappedBuffer(p_probeObbBuffer);
    R_ShutdownGfxWrappedBuffer(p_probeObbBuffer + 1);
    R_ShutdownGfxWrappedBuffer(p_probeObbBuffer + 2);
    R_ShutdownGfxWrappedBuffer(p_probeObbBuffer + 3);
    R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)((char *)p_probeObbBuffer + 136));
    p_probeObbBuffer += 56;
    --v1;
  }
  while ( v1 );
  R_ShutdownGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.probeClusterBuffer);
}

/*
==============
R_ReflectionProbe_InitResolutionDependent
==============
*/
void R_ReflectionProbe_InitResolutionDependent(void)
{
  ;
}

/*
==============
R_ReflectionProbe_InitTransientStreaming
==============
*/
void R_ReflectionProbe_InitTransientStreaming(GfxWorld *world)
{
  unsigned __int16 *p_cacheSlotIndex; 
  __int64 v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned __int16 *v7; 
  __int64 v8; 
  unsigned __int16 v9; 
  bitarray<6528> *v10; 
  __int64 v11; 
  GfxWorld *v12; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  GfxTextureId v14; 
  unsigned int numElements; 
  unsigned int v16; 
  unsigned int maxLevelCount; 
  unsigned int v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  ID3D12Resource *basemap; 
  unsigned int v22; 
  char *v23; 
  unsigned int freeSlot; 
  unsigned int *v25; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  bitarray<6528> *p_reflectionProbeInstanceMask; 
  __int64 v29; 
  _BYTE debugInfo_8[64]; 
  GfxTexture_CreateParams v31; 
  unsigned __int64 v32; 
  Image_SetupParams params; 
  Image_SetupParams v34; 
  unsigned int v35; 
  __int64 v36; 

  if ( world->draw.reflectionProbeData.reflectionProbeArrayImage || world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron )
  {
    p_reflectionProbeInstanceMask = &s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask;
    v29 = 12i64;
    do
    {
      *(_QWORD *)p_reflectionProbeInstanceMask->array = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask->array[2] = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask->array[4] = -1i64;
      p_reflectionProbeInstanceMask = (bitarray<6528> *)((char *)p_reflectionProbeInstanceMask + 64);
      *(_QWORD *)&p_reflectionProbeInstanceMask[-1].array[194] = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask[-1].array[196] = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask[-1].array[198] = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask[-1].array[200] = -1i64;
      *(_QWORD *)&p_reflectionProbeInstanceMask[-1].array[202] = -1i64;
      --v29;
    }
    while ( v29 );
    *(_QWORD *)p_reflectionProbeInstanceMask->array = -1i64;
    *(_QWORD *)&p_reflectionProbeInstanceMask->array[2] = -1i64;
    *(_QWORD *)&p_reflectionProbeInstanceMask->array[4] = -1i64;
    *(_QWORD *)&p_reflectionProbeInstanceMask->array[6] = -1i64;
    *(_QWORD *)&p_reflectionProbeInstanceMask->array[8] = -1i64;
    *(_QWORD *)&p_reflectionProbeInstanceMask->array[10] = -1i64;
  }
  else
  {
    p_cacheSlotIndex = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[1].cacheSlotIndex;
    v3 = 128i64;
    v4 = 0;
    do
    {
      v5 = v4 + 2;
      *(p_cacheSlotIndex - 2) = v4;
      *p_cacheSlotIndex = v4++;
      *(p_cacheSlotIndex - 3) = v5;
      *(p_cacheSlotIndex - 1) = -1;
      p_cacheSlotIndex += 4;
      --v3;
    }
    while ( v3 );
    s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[0] = (GfxReflectionProbeLRUCache<128,211>::ListNode)-65535i64;
    *(_DWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[129].next = 8454143;
    *(_DWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[129].mapProbeIndex = -1;
    memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.hashMapCells, 0xFFFF, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.hashMapCells));
    v6 = 0;
    s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.cacheCount = 0;
    v7 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCache.listNodes[1].cacheSlotIndex;
    v8 = 85i64;
    do
    {
      v9 = v6 + 2;
      *(v7 - 2) = v6;
      *v7 = v6++;
      *(v7 - 3) = v9;
      *(v7 - 1) = -1;
      v7 += 4;
      --v8;
    }
    while ( v8 );
    s_gfxReflectionProbeStaticData.transientStreaming.frameCache.listNodes[0] = (GfxReflectionProbeLRUCache<85,151>::ListNode)-65535i64;
    *(_DWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.frameCache.listNodes[86].next = 5636095;
    *(_DWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.frameCache.listNodes[86].mapProbeIndex = -1;
    memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCache.hashMapCells, 0xFFFF, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCache.hashMapCells));
    s_gfxReflectionProbeStaticData.transientStreaming.frameCache.cacheCount = 0;
    memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue));
    v10 = &s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask;
    v11 = 12i64;
    do
    {
      *(_QWORD *)v10->array = 0i64;
      *(_QWORD *)&v10->array[2] = 0i64;
      *(_QWORD *)&v10->array[4] = 0i64;
      v10 = (bitarray<6528> *)((char *)v10 + 64);
      *(_QWORD *)&v10[-1].array[194] = 0i64;
      *(_QWORD *)&v10[-1].array[196] = 0i64;
      *(_QWORD *)&v10[-1].array[198] = 0i64;
      *(_QWORD *)&v10[-1].array[200] = 0i64;
      *(_QWORD *)&v10[-1].array[202] = 0i64;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)v10->array = 0i64;
    *(_QWORD *)&v10->array[2] = 0i64;
    *(_QWORD *)&v10->array[4] = 0i64;
    *(_QWORD *)&v10->array[6] = 0i64;
    *(_QWORD *)&v10->array[8] = 0i64;
    *(_QWORD *)&v10->array[10] = 0i64;
    *(_QWORD *)s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[2] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[4] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[6] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[8] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[10] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[12] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[14] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[16] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[18] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[20] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[22] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[24] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[26] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[28] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[30] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[32] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[34] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[36] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[38] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[40] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[42] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[44] = 0i64;
    *(_QWORD *)&s_gfxReflectionProbeStaticData.transientStreaming.transientZones.array[46] = 0i64;
    PMem_BeginAlloc("frameCacheImage", PMEM_STACK_GAME);
    v12 = rgp.world;
    if ( rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
    {
      Image_AllocInPlace(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron, "frameCacheImageOctahedron", IMG_CATEGORY_AUTO_GENERATED, TS_FUNCTION);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&debugInfo_8[40] = _XMM0;
      *(_DWORD *)&debugInfo_8[8] = 1;
      *(_QWORD *)&debugInfo_8[12] = 128i64;
      *(_QWORD *)debugInfo_8 = 0x10000000100i64;
      *(_DWORD *)&debugInfo_8[20] = 0x20000;
      *(_DWORD *)&debugInfo_8[24] = 42;
      *(__m256i *)&params.width = *(__m256i *)debugInfo_8;
      *(_QWORD *)&debugInfo_8[32] = 0i64;
      *(_DWORD *)&debugInfo_8[56] = -1;
      params.maxLevelCount = 6;
      *(__m256i *)&params.customAllocFunc = *(__m256i *)&debugInfo_8[32];
      Image_Setup(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron, &params);
      v31.params = params;
      v31.params.format = GFX_PF_R32G32B32A32_UINT;
      v31.params.width = params.width / 4;
      v31.params.height = params.height / 4;
      v31.params.flags = params.flags | 0x800000;
      v31.pixels = R_Image_GetResidentPixels(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron);
      v31.name = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.name;
      v14 = R_Texture_Create(&v31);
      numElements = v31.params.numElements;
      v16 = 0;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias = v14;
      v35 = 0;
      if ( v31.params.numElements )
      {
        maxLevelCount = v31.params.maxLevelCount;
        do
        {
          v18 = 0;
          if ( maxLevelCount )
          {
            v19 = 6i64 * v16;
            v36 = v19;
            v20 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
            do
            {
              __asm { vpxor   xmm0, xmm0, xmm0 }
              basemap = R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias)->basemap;
              *(_DWORD *)&debugInfo_8[36] = 0;
              *(_DWORD *)&debugInfo_8[12] = v16;
              *(_DWORD *)&debugInfo_8[16] = 1;
              v22 = v18 + v16 * v31.params.maxLevelCount;
              *(_QWORD *)debugInfo_8 = 0x500000003i64;
              *(_OWORD *)&debugInfo_8[20] = _XMM0;
              *(_DWORD *)&debugInfo_8[8] = v18;
              v23 = (char *)s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView + 24 * v19 + 24 * v18;
              while ( 1 )
              {
                if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
                  __debugbreak();
                if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
                  break;
                Sys_Sleep(0);
              }
              freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
              v16 = v35;
              if ( !g_descriptorPools.shaderViewPool.freeSlot )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
                  __debugbreak();
                freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
              }
              v25 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
              g_descriptorPools.shaderViewPool.freeSlot = *v25;
              *v25 = 0;
              ++g_descriptorPools.shaderViewPool.handle.used;
              if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
                __debugbreak();
              _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
              m_pFunction = g_dx.d3d12device->m_pFunction;
              v32 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
              ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, _BYTE *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, debugInfo_8, v32);
              maxLevelCount = v31.params.maxLevelCount;
              ++v18;
              *((_DWORD *)v23 + 5) = v22;
              *((_DWORD *)v23 + 4) = freeSlot;
              v19 = v36;
              *(_QWORD *)v23 = basemap;
              *((_QWORD *)v23 + 1) = 0i64;
            }
            while ( v18 < maxLevelCount );
            numElements = v31.params.numElements;
          }
          v35 = ++v16;
        }
        while ( v16 < numElements );
      }
      memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases));
      v12 = rgp.world;
    }
    if ( v12->draw.reflectionProbeData.reflectionProbeImages )
    {
      Image_AllocInPlace(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, "frameCacheImage", IMG_CATEGORY_AUTO_GENERATED, TS_FUNCTION);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&debugInfo_8[40] = _XMM0;
      *(_DWORD *)&debugInfo_8[8] = 1;
      *(_QWORD *)&debugInfo_8[12] = 85i64;
      *(_QWORD *)debugInfo_8 = 0x8000000080i64;
      *(_DWORD *)&debugInfo_8[20] = 163840;
      *(_DWORD *)&debugInfo_8[24] = 42;
      *(__m256i *)&v34.width = *(__m256i *)debugInfo_8;
      *(_QWORD *)&debugInfo_8[32] = 0i64;
      *(_DWORD *)&debugInfo_8[56] = -1;
      v34.maxLevelCount = 6;
      *(__m256i *)&v34.customAllocFunc = *(__m256i *)&debugInfo_8[32];
      Image_Setup(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, &v34);
    }
    R_CreateGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer, GfxWrappedBuffer_Structured, 36, 0x154u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frameCacheSHBuffer");
    memset_0(s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceRefCount, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceRefCount));
    PMem_EndAlloc("frameCacheImage", PMEM_STACK_GAME);
  }
}

/*
==============
R_ReflectionProbe_InvalidateCachedImage
==============
*/
void R_ReflectionProbe_InvalidateCachedImage(unsigned int probeIndex)
{
  unsigned __int16 v1; 
  unsigned __int16 v2; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *hashMapCells; 
  unsigned __int16 key; 
  unsigned __int16 v5; 
  GfxReflectionProbeLRUCache<128,211>::HashMapCell *v6; 
  __int64 value; 
  unsigned __int16 *v8; 
  unsigned __int16 v9; 

  v1 = truncate_cast<unsigned short,unsigned int>(probeIndex);
  v2 = v1;
  if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.cacheCount )
  {
    hashMapCells = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.hashMapCells[v1 % 0xD3u];
    key = hashMapCells->key;
    if ( hashMapCells->key != 0xFFFF )
    {
      v5 = hashMapCells->key;
      do
      {
        key = v5;
        if ( v5 == v2 )
          break;
        if ( hashMapCells == &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.hashMapCells[210] )
          hashMapCells = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.hashMapCells;
        else
          ++hashMapCells;
        key = hashMapCells->key;
        v5 = hashMapCells->key;
      }
      while ( hashMapCells->key != 0xFFFF );
    }
    v6 = NULL;
    if ( key != 0xFFFF )
      v6 = hashMapCells;
    if ( v6 )
    {
      value = v6->value;
      v8 = (unsigned __int16 *)&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[value];
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[value].prev].next = *v8;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[*v8].prev = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[value].prev;
      v9 = truncate_cast<unsigned short,__int64>(value);
      *v8 = 129;
      v8[1] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[129].prev;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[129].prev].next = v9;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron.listNodes[129].prev = v9;
      GfxReflectionProbeLRUCache<128,211>::HashMapErase(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheOctahedron, v2);
    }
  }
}

/*
==============
R_ReflectionProbe_IsDebugReflectionEnabled
==============
*/
bool R_ReflectionProbe_IsDebugReflectionEnabled()
{
  return scr_debug_reflection->current.integer != 0;
}

/*
==============
R_ReflectionProbe_IsFrameCacheEnabled
==============
*/
bool R_ReflectionProbe_IsFrameCacheEnabled()
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  bool result; 

  result = 1;
  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return 0;
  }
  return result;
}

/*
==============
R_ReflectionProbe_IsOctahedronEnabled
==============
*/
_BOOL8 R_ReflectionProbe_IsOctahedronEnabled()
{
  GfxReflectionProbeTransientData *reflectionProbes; 

  return rgp.world && (rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron || rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount) && (r_reflectionProbeOctahedron->current.integer || !rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage && !rgp.world->draw.reflectionProbeData.reflectionProbeImages);
}

/*
==============
R_ReflectionProbe_IsOctahedronFilteringEnabled
==============
*/
bool R_ReflectionProbe_IsOctahedronFilteringEnabled()
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  bool result; 

  result = 0;
  if ( rgp.world )
  {
    if ( rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron )
      return 1;
    if ( rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron )
      return 1;
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( reflectionProbes )
    {
      if ( reflectionProbes->exclusiveProbeCount )
        return 1;
    }
  }
  return result;
}

/*
==============
R_ReflectionProbe_IsProbeOctahedronDataPresent
==============
*/
bool R_ReflectionProbe_IsProbeOctahedronDataPresent()
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  bool result; 

  result = 0;
  if ( rgp.world )
  {
    if ( rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron )
      return 1;
    if ( rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron )
      return 1;
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( reflectionProbes )
    {
      if ( reflectionProbes->exclusiveProbeCount )
        return 1;
    }
  }
  return result;
}

/*
==============
R_ReflectionProbe_IsProbeStreamedIn
==============
*/
char R_ReflectionProbe_IsProbeStreamedIn(const GfxWorldReflectionProbeData *reflectionProbeData, unsigned __int16 zoneIndex, unsigned __int16 bucketProbeIndex)
{
  __int64 v4; 

  if ( zoneIndex != 4095 )
    return 1;
  v4 = bucketProbeIndex;
  if ( !R_Texture_IsStreamedId(reflectionProbeData->reflectionProbeImages_octahedron[v4]->textureId) || Stream_CheckImage(reflectionProbeData->reflectionProbeImages_octahedron[v4], MIP0) )
    return 1;
  R_WarnOncePerFrame(R_WARN_REFLECTION_PROBE_FALLBACK_TEXTURE);
  return 0;
}

/*
==============
R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded
==============
*/
bool R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded(const GfxBackEndData *data, unsigned int probeIndex)
{
  GfxReflectionProbe *v3; 
  __int64 probeRelightingIndex; 
  __int64 v5; 
  GfxReflectionProbeRelightingData *v6; 
  unsigned __int16 v7; 
  __int64 v9; 

  v3 = &g_worldDraw->reflectionProbeData.reflectionProbes[probeIndex];
  if ( v3->probeRelightingIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3355, ASSERT_TYPE_ASSERT, "(probe.probeRelightingIndex != 0xffff)", (const char *)&queryFormat, "probe.probeRelightingIndex != REFLECTION_PROBE_INVALID_RELIGHTING_INDEX_RUNTIME") )
    __debugbreak();
  if ( v3->probeRelightingIndex >= g_worldDraw->reflectionProbeData.probeRelightingCount )
  {
    LODWORD(v9) = v3->probeRelightingIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3356, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v9, g_worldDraw->reflectionProbeData.probeRelightingCount) )
      __debugbreak();
  }
  probeRelightingIndex = v3->probeRelightingIndex;
  v5 = 0i64;
  v6 = &g_worldDraw->reflectionProbeData.probeRelightingData[probeRelightingIndex];
  if ( v6->zoneCount )
  {
    do
    {
      v7 = v6->zones[v5];
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( bitarray_base<bitarray<1536>>::testBit(&data->transientVisibility, v7) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v6->zoneCount );
  }
  return (_DWORD)v5 != v6->zoneCount;
}

/*
==============
R_ReflectionProbe_IsTransientStreamingEnabled
==============
*/
bool R_ReflectionProbe_IsTransientStreamingEnabled()
{
  GfxReflectionProbeTransientData *reflectionProbes; 
  bool result; 

  result = 1;
  if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
  {
    reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes;
    if ( !reflectionProbes || !reflectionProbes->exclusiveProbeCount )
      return 0;
  }
  return result;
}

/*
==============
R_ReflectionProbe_OverlayCube
==============
*/
void R_ReflectionProbe_OverlayCube(GfxCmdBufContext *gfxContext, const GfxImage *cubeMap, float probeIndex, float mipIndex, float x, float y, float w, float h)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v12; 
  GfxImage *blackImage; 
  GfxCmdBufInput *v14; 
  GfxCmdBufContext v16; 
  GfxCmdBufContext v18; 

  source = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = cubeMap;
  v12 = gfxContext->source;
  blackImage = rgp.blackImage;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v14 = &v12->input;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16 = *gfxContext;
  v14->codeImages[5] = blackImage;
  v18 = v16;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 2.0, x + w, y, w, h);
  v18 = *gfxContext;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 1.0, x, y + h, w, h);
  v18 = *gfxContext;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 4.0, x + w, y + h, w, h);
  v18 = *gfxContext;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 0.0, (float)(w * 2.0) + x, y + h, w, h);
  v18 = *gfxContext;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 5.0, (float)(w * 3.0) + x, y + h, w, h);
  v18 = *gfxContext;
  R_ReflectionProbe_OverlayCubeFace(&v18, probeIndex, mipIndex, 3.0, x + w, (float)(h * 2.0) + y, w, h);
}

/*
==============
R_ReflectionProbe_OverlayCubeFace
==============
*/
void R_ReflectionProbe_OverlayCubeFace(GfxCmdBufContext *gfxContext, float probeIndex, float mipIndex, float faceIndex, float x, float y, float w, float h)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 

  source = gfxContext->source;
  v10 = *gfxContext;
  source->input.consts[150].v[2] = probeIndex;
  source->input.consts[150].v[0] = faceIndex;
  source->input.consts[150].v[1] = mipIndex;
  v11 = v10;
  source->input.consts[150].v[3] = 1.0;
  ++source->constVersions[150];
  RB_DrawStretchPic(&v11, rgp.reflectionProbeDebug, x, y, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v11 = *gfxContext;
  RB_EndTessSurfaceInternal(&v11, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
}

/*
==============
R_ReflectionProbe_OverlayCubeGBuffer
==============
*/
void R_ReflectionProbe_OverlayCubeGBuffer(GfxCmdBufContext *gfxContext, const GfxImage *gbuffer, float x, float y, float w, float h)
{
  GfxCmdBufSourceState *source; 
  GfxImage *blackImageCube; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v11; 
  GfxCmdBufInput *v12; 
  GfxCmdBufSourceState *v13; 
  GfxCmdBufContext v15; 
  GfxCmdBufSourceState *v17; 
  GfxCmdBufContext v18; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufContext v20; 
  GfxCmdBufSourceState *v21; 
  GfxCmdBufContext v22; 
  GfxCmdBufSourceState *v23; 
  GfxCmdBufContext v24; 
  GfxCmdBufSourceState *v25; 
  GfxCmdBufContext v26; 
  GfxCmdBufContext v27[9]; 

  source = gfxContext->source;
  blackImageCube = rgp.blackImageCube;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = blackImageCube;
  v11 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v12 = &v11->input;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v13 = gfxContext->source;
  v15 = *gfxContext;
  v12->codeImages[5] = gbuffer;
  v13->input.consts[150].v[0] = -1.0;
  v13->input.consts[150].v[1] = 0.0;
  v13->input.consts[150].v[2] = 2.0;
  v13->input.consts[150].v[3] = 1.0;
  ++v13->constVersions[150];
  v27[0] = v15;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, x + w, y, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v17 = gfxContext->source;
  v18 = *gfxContext;
  v17->input.consts[150].v[0] = -1.0;
  v17->input.consts[150].v[1] = 0.0;
  v17->input.consts[150].v[2] = 1.0;
  v17->input.consts[150].v[3] = 1.0;
  ++v17->constVersions[150];
  v27[0] = v18;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, x, y + h, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v19 = gfxContext->source;
  v20 = *gfxContext;
  v19->input.consts[150].v[0] = -1.0;
  v19->input.consts[150].v[1] = 0.0;
  v19->input.consts[150].v[2] = 4.0;
  v19->input.consts[150].v[3] = 1.0;
  ++v19->constVersions[150];
  v27[0] = v20;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, x + w, y + h, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v21 = gfxContext->source;
  v22 = *gfxContext;
  v21->input.consts[150].v[0] = -1.0;
  *(_QWORD *)&v21->input.consts[150].xyz.y = 0i64;
  v21->input.consts[150].v[3] = 1.0;
  ++v21->constVersions[150];
  v27[0] = v22;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, (float)(w * 2.0) + x, y + h, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v23 = gfxContext->source;
  v24 = *gfxContext;
  v23->input.consts[150].v[0] = -1.0;
  v23->input.consts[150].v[1] = 0.0;
  v23->input.consts[150].v[2] = 5.0;
  v23->input.consts[150].v[3] = 1.0;
  ++v23->constVersions[150];
  v27[0] = v24;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, (float)(w * 3.0) + x, y + h, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v25 = gfxContext->source;
  v26 = *gfxContext;
  v25->input.consts[150].v[0] = -1.0;
  v25->input.consts[150].v[1] = 0.0;
  v25->input.consts[150].v[2] = 3.0;
  v25->input.consts[150].v[3] = 1.0;
  ++v25->constVersions[150];
  v27[0] = v26;
  RB_DrawStretchPic(v27, rgp.reflectionProbeDebug, x + w, (float)(h * 2.0) + y, w, h, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v27[0] = *gfxContext;
  RB_EndTessSurfaceInternal(v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
}

/*
==============
R_ReflectionProbe_ProcessProbe
==============
*/
__int64 R_ReflectionProbe_ProcessProbe(unsigned int frameIndex, const bool isWorldInstance, const unsigned int reflectionProbeInstanceIndex, const GfxWorldReflectionProbeData *reflectionProbeData, const vec3_t *cameraAxis, const unsigned int maxVisibleInstances, unsigned int *iovisibleProbeInstanceCount, ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstances, GfxReflectionProbeStats *stats)
{
  GfxReflectionProbeInstance *Instance; 
  GfxReflectionProbeInstance *v13; 
  int integer; 
  float ObbDepth; 
  __int64 v16; 
  unsigned __int8 lodLevel; 
  int v18; 
  float *p_probeInstanceDepth; 
  unsigned __int8 v20; 
  __int64 v21; 
  int v23; 
  int v24; 
  vec3_t cameraPos; 

  Instance = R_ReflectionProbe_GetInstance(isWorldInstance, reflectionProbeInstanceIndex);
  v13 = Instance;
  if ( (Instance->flags & 0x80u) != 0 )
    return 0i64;
  if ( (float)(r_reflectionProbeVolumeScale->current.value * Instance->volumeObb.halfSize.v[0]) <= 0.0 )
    return 0i64;
  integer = r_reflectionProbeLODMask->current.integer;
  if ( !_bittest(&integer, Instance->lodLevel) || !R_ReflectionProbe_IsProbeStreamedIn(reflectionProbeData, g_worldDraw->reflectionProbeData.reflectionProbes[Instance->probeImageIndex].probeImageIndirection >> 20, g_worldDraw->reflectionProbeData.reflectionProbes[Instance->probeImageIndex].probeImageIndirection) )
    return 0i64;
  cameraPos.v[0] = 0.0;
  cameraPos.v[1] = 0.0;
  cameraPos.v[2] = 0.0;
  ObbDepth = R_ReflectionProbe_GetObbDepth(&v13->volumeObb, &cameraPos, cameraAxis);
  v16 = (int)*iovisibleProbeInstanceCount;
  lodLevel = v13->lodLevel;
  if ( (int)v16 >= 2 )
  {
    v18 = v16 - 1;
    p_probeInstanceDepth = &outVisibleProbeInstances[v16 - 1].probeInstanceDepth;
    do
    {
      v20 = *((_BYTE *)p_probeInstanceDepth - 3);
      if ( v20 >= lodLevel && (v20 != lodLevel || ObbDepth >= *p_probeInstanceDepth) )
        break;
      if ( (int)v16 < (int)maxVisibleInstances )
        outVisibleProbeInstances[(int)v16] = outVisibleProbeInstances[v18];
      LODWORD(v16) = v16 - 1;
      --v18;
      p_probeInstanceDepth -= 4;
    }
    while ( (int)v16 >= 2 );
  }
  if ( (int)v16 < (int)maxVisibleInstances )
  {
    v21 = (int)v16;
    outVisibleProbeInstances[v21].probeInstanceDepth = ObbDepth;
    outVisibleProbeInstances[v21].probeInstanceIndex = reflectionProbeInstanceIndex;
    outVisibleProbeInstances[v21].levelOfDetail = lodLevel;
    outVisibleProbeInstances[v21].isWorldInstance = isWorldInstance;
    outVisibleProbeInstances[v21].priority = v13->priority;
  }
  if ( *iovisibleProbeInstanceCount < maxVisibleInstances )
    ++*iovisibleProbeInstanceCount;
  if ( lodLevel >= 3u )
  {
    v24 = 3;
    v23 = lodLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2736, ASSERT_TYPE_ASSERT, "(unsigned)( lodLevel ) < (unsigned)( ( sizeof( *array_counter( GfxReflectionProbeStats::perLodCount ) ) + 0 ) )", "lodLevel doesn't index ARRAY_COUNT( GfxReflectionProbeStats::perLodCount )\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  ++stats->perLodCount[lodLevel];
  return 1i64;
}

/*
==============
R_ReflectionProbe_ProcessView
==============
*/
void R_ReflectionProbe_ProcessView(const void *const cmd)
{
  char *Value; 
  unsigned int *v3; 
  unsigned int v4; 
  _QWORD *v5; 
  char *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  ThreadContext CurrentThreadContext; 
  const GfxViewInfo *v10; 
  const GfxBackEndData *v11; 
  float v12; 
  GfxReflectionProbeFrameData *v13; 
  int integer; 
  float v15; 
  bool v16; 
  bool v17; 
  float v18; 
  GfxReflectionProbeTransientData *v19; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  int v21; 
  unsigned int v22; 
  DebugGlobals *p_debugGlobals; 
  __int64 v24; 
  int i; 
  GfxReflectionProbeInstance *Instance; 
  unsigned __int64 probeInstanceIndex; 
  const GfxReflectionProbeInstance *v28; 
  unsigned __int16 v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  DebugGlobals *v33; 
  unsigned int v34; 
  char v35; 
  GfxReflectionProbeInstance *v36; 
  GfxReflectionProbeInstance *reflectionProbeInstances; 
  const dvar_t *v38; 
  unsigned int *outVisibleProbeInstanceCount; 
  unsigned int *outVisibleProbeInstanceCounta; 
  ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstances; 
  ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstancesa; 
  GfxReflectionProbeRemapState *remap; 
  __int64 v44; 
  unsigned int visibleProbeInstanceCount[2]; 
  const GfxViewInfo *v46; 
  GfxReflectionProbeFrameData *v47; 
  vec3_t cameraAxis; 
  GfxReflectionProbeRemapState v49; 
  bitarray<6528> reflectionVisibleInstances; 
  vec3_t outAxis[5]; 
  ReflectionProbeProcessViewInstanceInfo visibleProbeInstances[96]; 
  vec3_t outVertices[10]; 

  Value = (char *)Sys_GetValue(0);
  v3 = (unsigned int *)(Value + 11976);
  if ( (unsigned int)(*((_DWORD *)Value + 2994) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 2994) + 1, 3) )
    __debugbreak();
  v4 = *v3 + 1;
  *v3 = v4;
  if ( v4 >= 3 )
  {
    LODWORD(outVisibleProbeInstances) = 3;
    LODWORD(outVisibleProbeInstanceCount) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outVisibleProbeInstanceCount, outVisibleProbeInstances) )
      __debugbreak();
  }
  v5 = Value + 2088;
  v6 = Value + 40;
  if ( *v5 < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v5 += 8i64;
  if ( *v5 >= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v5 = v3;
  if ( *v5 <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v7 = (int)*v3;
  v8 = __rdtsc();
  v3[v7 + 2] = v8;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 247, NULL, 0);
  v10 = *(const GfxViewInfo **)cmd;
  v11 = (const GfxBackEndData *)*((_QWORD *)cmd + 1);
  v46 = v10;
  v12 = v10->viewParmsSet.frames[0].viewParms.camera.zPlanes[2] + 10000.0;
  v13 = &s_gfxReflectionProbeStaticData.bufferArray[v11->reflectionProbeFrameIndex];
  v47 = v13;
  GetReflectionGridFrustumVertices((const GfxViewParms *)v10, v12, outVertices);
  GetTriangleAxis(outVertices, &outVertices[2], &outVertices[3], outAxis);
  GetTriangleAxis(&outVertices[1], &outVertices[3], &outVertices[7], &outAxis[1]);
  GetTriangleAxis(&outVertices[2], &outVertices[6], &outVertices[7], &outAxis[2]);
  GetTriangleAxis(&outVertices[1], &outVertices[5], &outVertices[4], &outAxis[3]);
  GetTriangleAxis(outVertices, &outVertices[4], &outVertices[6], &outAxis[4]);
  integer = 96;
  v15 = v10->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  v16 = r_reflectionProbeMaxPerView->current.integer < 0x60u;
  cameraAxis.v[0] = v10->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  if ( v16 )
    integer = r_reflectionProbeMaxPerView->current.integer;
  v17 = g_worldDraw->reflectionProbeData.reflectionProbeImages == NULL;
  v18 = v10->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  cameraAxis.v[1] = v15;
  cameraAxis.v[2] = v18;
  if ( !v17 || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (v19 = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && v19->exclusiveProbeCount )
  {
    if ( rgp.world && (rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron || rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount) && (r_reflectionProbeOctahedron->current.integer || !rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage && !rgp.world->draw.reflectionProbeData.reflectionProbeImages) )
      v21 = 128;
    else
      v21 = 85;
    if ( integer < v21 )
      v21 = integer;
    integer = v21;
  }
  visibleProbeInstanceCount[1] = 0;
  R_ReflectionProbe_BuildInstanceListForView((const vec3_t (*)[8])outVertices, (const vec3_t (*)[5])outAxis, &cameraAxis, v11, integer, &visibleProbeInstanceCount[1], visibleProbeInstances, &v49, &reflectionVisibleInstances);
  v22 = visibleProbeInstanceCount[1];
  R_ReflectionProbe_BuildInstanceDataFromInstanceList(v10, v11, (const GfxViewParms *)v10, visibleProbeInstanceCount[1], visibleProbeInstances, v13, &v49);
  R_ReflectionProbeRelighting_UpdateProbeRadiometricScale(v11);
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  *(_QWORD *)cameraAxis.v = &frontEndDataOut->debugGlobals;
  LOBYTE(visibleProbeInstanceCount[0]) = r_reflectionProbeDebugDepthTest->current.enabled;
  if ( r_reflectionProbeShowVolumes && r_reflectionProbeShowVolumes->current.integer > 0 )
  {
    v24 = 0i64;
    for ( i = r_reflectionProbeShowVolumeLODSelect->current.integer; (unsigned int)v24 < v22; v24 = (unsigned int)(v24 + 1) )
    {
      Instance = R_ReflectionProbe_GetInstance(visibleProbeInstances[(unsigned int)v24].isWorldInstance, visibleProbeInstances[(unsigned int)v24].probeInstanceIndex);
      probeInstanceIndex = visibleProbeInstances[(unsigned int)v24].probeInstanceIndex;
      v28 = Instance;
      if ( (unsigned int)probeInstanceIndex >= 0x1980 )
      {
        LODWORD(v44) = 6528;
        LODWORD(remap) = visibleProbeInstances[(unsigned int)v24].probeInstanceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", remap, v44) )
          __debugbreak();
      }
      reflectionVisibleInstances.array[probeInstanceIndex >> 5] &= ~(0x80000000 >> (probeInstanceIndex & 0x1F));
      if ( i == -1 || v28->lodLevel == i )
      {
        if ( R_ReflectionProbe_IsTransientStreamingEnabled() )
          v29 = v49.visibleInstanceToCacheSlot[v24];
        else
          v29 = 0;
        R_ReflectionProbe_DebugRenderProbeVolume(*(DebugGlobals **)cameraAxis.v, &v10->viewParmsSet.frames[0].viewParms.camera, r_reflectionProbeShowVolumes->current.integer, v28, v11->reflectionProbeFrameIndex, v29, visibleProbeInstanceCount[0]);
      }
    }
    v30 = reflectionVisibleInstances.array[0];
    LODWORD(v31) = 0;
    v32 = visibleProbeInstanceCount[1];
    v33 = *(DebugGlobals **)cameraAxis.v;
    while ( 1 )
    {
      if ( v30 )
      {
LABEL_55:
        v34 = __lzcnt(v30);
        v32 = v34 + 32 * v31;
        if ( v34 >= 0x20 )
        {
          LODWORD(outVisibleProbeInstancesa) = 32;
          LODWORD(outVisibleProbeInstanceCounta) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outVisibleProbeInstanceCounta, outVisibleProbeInstancesa) )
            __debugbreak();
        }
        if ( (v30 & (0x80000000 >> v34)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v30 &= ~(0x80000000 >> v34);
        v35 = 1;
      }
      else
      {
        while ( 1 )
        {
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= 0xCC )
            break;
          v30 = reflectionVisibleInstances.array[v31];
          if ( v30 )
            goto LABEL_55;
        }
        v35 = 0;
      }
      if ( !v35 )
        break;
      v36 = &g_worldDraw->reflectionProbeData.reflectionProbeInstances[v32];
      if ( i == -1 || v36->lodLevel == i )
      {
        R_ReflectionProbe_GetObbVertices(&v36->volumeObb, (vec3_t (*)[8])outVertices);
        DebugRenderBoxFromVertices(v33, (const vec3_t (*)[8])outVertices, &colorOrangeHeat, visibleProbeInstanceCount[0]);
      }
    }
    v22 = visibleProbeInstanceCount[1];
    p_debugGlobals = *(DebugGlobals **)cameraAxis.v;
    v10 = v46;
    v13 = v47;
  }
  if ( r_reflectionProbeShowDefaultProbe && r_reflectionProbeShowDefaultProbe->current.enabled && g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount )
  {
    reflectionProbeInstances = g_worldDraw->reflectionProbeData.reflectionProbeInstances;
    Com_sprintf((char *)outVertices, 0x80ui64, "Default Probe(%.0f, %.0f, %.0f)", reflectionProbeInstances->probePosition.v[0], reflectionProbeInstances->probePosition.v[1], reflectionProbeInstances->probePosition.v[2]);
    R_AddDebugLocationFinder(p_debugGlobals, &v10->viewParmsSet.frames[0].viewParms.camera, &reflectionProbeInstances->probePosition, &colorYellowHeat, (const char *)outVertices);
    R_AddDebugStar(p_debugGlobals, &reflectionProbeInstances->probePosition, 16.0, &colorYellowHeat);
  }
  v38 = scr_debug_reflection;
  v13->visibleReflectionProbeCount = 0;
  if ( (unsigned int)(v38->current.integer - 2) <= 1 && v22 )
  {
    v13->visibleReflectionProbeCount = v22;
    memcpy_0(v13->visibleReflectionProbeInstances, visibleProbeInstances, 16i64 * v22);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_ReflectionProbe_RegisterDvars
==============
*/
void R_ReflectionProbe_RegisterDvars(void)
{
  r_reflectionProbeIrradianceMin = Dvar_RegisterFloat("MLSRLRMOLL", 0.000099999997, 0.0, 1.0, 0, "The minimum Irradiance allowed in reflection probe normalization.\n");
  r_reflectionProbeDebugMode = Dvar_RegisterEnum("QQSNSLKQR", reflectionProbeDebugModeNames, 0, 0, "Reflection probe debug mode.");
  r_reflectionProbeShowVolumes = Dvar_RegisterInt("NSTOLRNSPN", 0, 0, 4, 0, "Show the reflection probe volumes (1) show feather (2) show additional information (3)");
  r_reflectionProbeDebugDepthTest = Dvar_RegisterBool("NMLOTSNNLT", 0, 0, "Controls depth test of debug draws");
  r_reflectionProbeVolumeScale = Dvar_RegisterVec3("MTTMTTNQP", 1.0, 1.0, 1.0, 0.0, 2.0, 0.0, 0, "Debug volume scale for helping diagnose incorrectly placed or sized volumes");
  scr_debug_reflection = Dvar_RegisterInt("scr_debug_reflection", 0, 0, 3, 0, "Show the reflection probes");
  scr_debug_reflection_info = Dvar_RegisterBool("scr_debug_reflection_info", 0, 0, "Show the reflection probes info");
  r_reflectionProbeDebugCameraDistance = Dvar_RegisterFloat("MQPRQRNNSQ", 100.0, 40.0, 1500.0, 0, "Distance of debug probe from camera");
  r_reflectionProbeVolumeDrawDistance = Dvar_RegisterFloat("NTSNQNKRKM", -1.0, -1.0, 100000.0, 0, "Draw distance for reflection probe volumes. -1.0 for no far clip");
  r_reflectionProbeVolumeShowProjectionBoxes = Dvar_RegisterBool("NLRKNOLRPM", 0, 0, "Show reflection probe volume projection boxes");
  r_reflectionProbeVolumeShowFeather = Dvar_RegisterBool("MTMKROMRRP", 1, 0, "Show reflection probe volume feather");
  r_reflectionProbeVolumeShowInfo = Dvar_RegisterBool("NKKQNQNNOS", 1, 0, "Show reflection probe volume info text");
  r_reflectionProbeVolumeShowLinesToProbe = Dvar_RegisterBool("OMRQPQNTOQ", 1, 0, "Show reflection probe volume lines to probes");
  r_reflectionProbeVolumeShowProbePosition = Dvar_RegisterBool("MORNTOKMTN", 1, 0, "Show reflection probe volume probe positions");
  r_reflectionProbeVolumeHighlightNoProj = Dvar_RegisterBool("MQSPSNKPLP", 1, 0, "Color volumes with no projection green");
  r_reflectionProbeVolumeHighlightRelit = Dvar_RegisterBool("OKOLOKSLTP", 1, 0, "Color volumes with relightable probes red");
  r_reflectionProbeExpandProjectionOverride = Dvar_RegisterBool("MKKKONQNOM", 0, 0, "Override the expandProjectionPos and expandProjectionNeg reflection_volume KVPs");
  r_reflectionProbeExpandProjectionNeg = Dvar_RegisterVec3("OKMPSLMQNO", 0.0, 0.0, 0.0, -128000.0, 128000.0, 0, "Value to override reflection_volume expandProjectionNeg with when r_reflectionProbeExpandProjectionOverride is 1");
  r_reflectionProbeExpandProjectionPos = Dvar_RegisterVec3("OKPPNPNNPO", 0.0, 0.0, 0.0, -128000.0, 128000.0, 0, "Value to override reflection_volume expandProjectionPos with when r_reflectionProbeExpandProjectionOverride is 1");
  r_reflectionProbeShowDefaultProbe = Dvar_RegisterBool("NPORTSOQPP", 0, 0, "Show debug to locate the default probe");
  r_reflectionProbeAllowLightgridOverride = Dvar_RegisterBool("NSKMLTMOQM", 1, 0, "Allow overridelightgrid reflection probe volumes to override lightgrid");
  r_reflectionProbeShowProbeImage = Dvar_RegisterInt("OKSLNRNMMN", -1, -1, 255, 0, "Show reflection probe image array slice.");
  r_reflectionProbeShowProbeImageMip = Dvar_RegisterInt("MSMOROSRP", 0, 0, 16, 0, "Show reflection probe image array mip.");
  r_reflectionProbeShowVolumeLODSelect = Dvar_RegisterInt("MRPKMLRKSP", -1, -1, 2, 0, "Show reflection probe image array mip.");
  r_reflectionProbeLODMask = Dvar_RegisterEnum("MNKSSKMTNK", reflectionProbeLODMaskNames, 7, 0, "Can be used to mask out certain probe LODS for debugging");
  r_reflectionProbeMaxPerView = Dvar_RegisterInt("MOMQKTMTPP", 96, 1, 96, 0, "Max allowed reflection probes per view");
  r_reflectionProbeShowStats = Dvar_RegisterBool("MOKSTOTPTP", 0, 0, "Show stats");
  r_reflectionProbeUseUmbra = Dvar_RegisterBool("NOSTPQTNQR", 1, 0, "Use Umbra for culling reflection probe volumes (only frustum cull when false)");
  r_reflectionProbeUsePrebin = Dvar_RegisterBool("MOLQOKOQLQ", 1, 0, "Use prebin pass to accelerate clustering");
  R_ReflectionProbeRelighting_RegisterDvars();
  r_reflectionProbeOctahedron = Dvar_RegisterInt("MMLSMTQOSM", 0, 0, 2, 0, "Enables reflection probe octahedron");
  r_reflectionProbeOctahedronLodBias = Dvar_RegisterInt("MOPNSOLRM", 0, -8, 8, 0, "Texture sample lod bias");
}

/*
==============
R_ReflectionProbe_ReleaseAlias
==============
*/
void R_ReflectionProbe_ReleaseAlias(GfxReflectionProbeCopyImageAlias *aliases)
{
  unsigned int v2; 
  ID3D12Resource *v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = 0;
  if ( aliases->aliasCount )
  {
    do
    {
      R_ReleaseShaderTextureView(&aliases->srcTextureAliasView[v2]);
      v3 = aliases->srcTextureAlias[v2];
      aliases->srcTextureAlias[v2] = NULL;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
        __debugbreak();
      v4 = v3->m_pFunction->Release(v3);
      if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v4 )
      {
        LODWORD(v6) = v4;
        LODWORD(v5) = 748;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", v5, "aliases.srcTextureAlias[iAlias]", v6) )
          __debugbreak();
      }
      ++v2;
    }
    while ( v2 < aliases->aliasCount );
    aliases->aliasCount = 0;
  }
  else
  {
    aliases->aliasCount = 0;
  }
}

/*
==============
R_ReflectionProbe_ReleaseTransientData
==============
*/
void R_ReflectionProbe_ReleaseTransientData(GfxReflectionProbeTransientData *reflectionProbes)
{
  unsigned int i; 
  __int64 v3; 

  if ( reflectionProbes )
  {
    for ( i = 0; i < reflectionProbes->exclusiveProbeBucketCount; reflectionProbes->exclusiveProbeBuckets[v3].textureId = NULLID )
    {
      v3 = i;
      R_Texture_Destroy(reflectionProbes->exclusiveProbeBuckets[v3].textureId);
      ++i;
    }
  }
}

/*
==============
R_ReflectionProbe_ShowStats
==============
*/
void R_ReflectionProbe_ShowStats(const GfxBackEndData *backEndData, const GfxViewParms *viewParms, unsigned int displayWidth, unsigned int displayHeight)
{
  __int64 v5; 
  __int64 reflectionProbeFrameIndex; 
  GfxWorldDraw *v7; 
  unsigned int CardMemoryAmount; 
  __int64 v9; 
  __int128 v11; 
  float x; 
  GfxImage *reflectionProbeArrayImage; 
  GfxReflectionProbeStats *v14; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  GfxPixelFormat format; 
  int v18; 
  int v19; 
  GfxFont *v20; 
  unsigned int v21; 
  __m256i v22; 
  __m256i v23; 
  Image_SetupParams params; 
  char _Buffer[1024]; 

  v5 = displayWidth;
  if ( r_reflectionProbeShowStats->current.enabled )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_REFLECTION_PROBE_BUFFER);
    reflectionProbeFrameIndex = backEndData->reflectionProbeFrameIndex;
    v7 = g_worldDraw;
    CardMemoryAmount = 0;
    v9 = reflectionProbeFrameIndex;
    v11 = 0i64;
    *(float *)&v11 = (float)v5;
    _XMM0 = v11;
    x = *(float *)&v11 * 0.25;
    reflectionProbeArrayImage = g_worldDraw->reflectionProbeData.reflectionProbeArrayImage;
    v14 = &s_gfxReflectionProbeStaticData.stats[reflectionProbeFrameIndex];
    if ( g_worldDraw->reflectionProbeData.reflectionProbeImages || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v23.m256i_u64[1] = _XMM0;
      v23.m256i_i64[0] = 0i64;
      v23.m256i_i32[6] = -1;
      *(__m256i *)&params.customAllocFunc = v23;
      v22.m256i_i32[2] = 1;
      *(__int64 *)((char *)&v22.m256i_i64[1] + 4) = 1i64;
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId )
      {
        v22.m256i_i32[0] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width;
        v22.m256i_i32[1] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width;
        v22.m256i_i32[5] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.flags | 0x8000;
        format = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.format;
      }
      else
      {
        v22.m256i_i32[0] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width;
        v22.m256i_i32[1] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width;
        v22.m256i_i32[5] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.flags | 0x8000;
        format = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.format;
      }
      v22.m256i_i32[6] = format;
      *(__m256i *)&params.width = v22;
      CardMemoryAmount = Image_GetCardMemoryAmount(&params);
    }
    v18 = 256;
    v21 = (CardMemoryAmount * s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[v9].requestCount) >> 10;
    if ( !reflectionProbeArrayImage )
      v18 = 6528;
    v19 = 255;
    if ( !reflectionProbeArrayImage )
      v19 = 6527;
    j_snprintf(_Buffer, 0x400ui64, "Reflection probe:\nMap probe count: %u / %u\nMap probe instance count: %u / %u\nShould draw transient count: %u\nMasked out probe instance count: %u\nFrustum probe instance count: %u (%u) / %u\nFrustum probe instance count LOD 0: %u\nFrustum probe instance count LOD 1: %u\nFrustum probe instance count LOD 2: %u\nNum probes updated in cache: %u / %zu, %u [kB]\n", v7->reflectionProbeData.reflectionProbeCount, v19, v7->reflectionProbeData.reflectionProbeInstanceCount, v18, v14->shouldDrawTransientCount, v14->maskedOutInstanceCount, v14->frustumProbeInstanceCount, v14->frustumRequestedProbeInstanceCount, 96, v14->perLodCount[0], v14->perLodCount[1], v14->perLodCount[2], s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[v9].requestCount, 0x60ui64, v21);
    v20 = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
    R_AddCmdDrawText(_Buffer, 0x7FFFFFFF, v20, 16, x, 40.0, 1.0, 1.0, 0.0, &colorOrange);
  }
}

/*
==============
R_ReflectionProbe_ShutdownResolutionDependent
==============
*/
void R_ReflectionProbe_ShutdownResolutionDependent(void)
{
  ;
}

/*
==============
R_ReflectionProbe_ShutdownWorldBuffers
==============
*/
void R_ReflectionProbe_ShutdownWorldBuffers(GfxWorld *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1074, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( world->draw.reflectionProbeData.reflectionProbeCount )
    R_ShutdownGfxWrappedBuffer(&world->draw.reflectionProbeData.reflectionProbeSHBuffer);
}

/*
==============
R_ReflectionProbe_ToggleFrame
==============
*/
__int64 R_ReflectionProbe_ToggleFrame()
{
  __int64 result; 

  result = (LOBYTE(s_gfxReflectionProbeStaticData.backendFrameIndex) - 1) & 1;
  s_gfxReflectionProbeStaticData.backendFrameIndex = (LOBYTE(s_gfxReflectionProbeStaticData.backendFrameIndex) - 1) & 1;
  return result;
}

/*
==============
R_ReflectionProbe_UseLightgridOverride
==============
*/
bool R_ReflectionProbe_UseLightgridOverride(unsigned int frameDataIndex)
{
  return s_gfxReflectionProbeStaticData.bufferArray[frameDataIndex].lightgridOverrideProbeCount != 0;
}

/*
==============
R_ReflectionProbe_WorldShutdown
==============
*/
void R_ReflectionProbe_WorldShutdown(GfxWorld *world)
{
  unsigned __int16 numElements; 
  __int64 levelCount; 
  unsigned int i; 
  __int64 v4; 
  GfxShaderTextureRWView *v5; 
  GfxReflectionProbeCopyImageAlias *frameCacheImageOctahedronCopyAliases; 
  __int64 v7; 
  StreamerMemLoan result; 

  if ( !world->draw.reflectionProbeData.reflectionProbeArrayImage && !world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron )
  {
    if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId )
    {
      numElements = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.numElements;
      levelCount = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.levelCount;
      for ( i = 0; i < numElements; ++i )
      {
        if ( (_DWORD)levelCount )
        {
          v4 = levelCount;
          v5 = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView[i];
          do
          {
            R_ReleaseShaderTextureRWView(v5++);
            --v4;
          }
          while ( v4 );
          numElements = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.numElements;
        }
      }
      memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView));
      R_Texture_UnAlias(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias);
      frameCacheImageOctahedronCopyAliases = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases;
      v7 = 2i64;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias = NULLID;
      do
      {
        R_ReflectionProbe_ReleaseAlias(frameCacheImageOctahedronCopyAliases++);
        --v7;
      }
      while ( v7 );
      memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases));
      Image_Release(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron);
      memset_0(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron));
    }
    if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId )
    {
      Image_Release(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage);
      memset_0(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage));
    }
    R_ShutdownGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer);
    memset_0(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage));
    PMem_Free(&result, "frameCacheImage", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  s_gfxReflectionProbeStaticData.test_sphere_silver = NULL;
  s_gfxReflectionProbeStaticData.bufferArray[0].visibleReflectionProbeCount = 0;
  s_gfxReflectionProbeStaticData.bufferArray[1].visibleReflectionProbeCount = 0;
}

/*
==============
R_ReflectionProbe_WorldStartup
==============
*/
void R_ReflectionProbe_WorldStartup(GfxWorld *world)
{
  R_ReflectionProbe_InitTransientStreaming(world);
  s_gfxReflectionProbeStaticData.test_sphere_silver = R_RegisterModel("test_sphere_silver");
  s_gfxReflectionProbeStaticData.bufferArray[0].visibleReflectionProbeCount = 0;
  s_gfxReflectionProbeStaticData.bufferArray[1].visibleReflectionProbeCount = 0;
}

