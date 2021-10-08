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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm5, xmm4, xmm1
    vmovss  dword ptr [r8], xmm5
    vmovss  dword ptr [r8+4], xmm5
    vmovss  xmm0, dword ptr [rcx+10h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm5
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
    vmovaps xmm6, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+28h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+34h]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+30h]
    vsubss  xmm0, xmm2, dword ptr [rcx]
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+38h]
    vsubss  xmm0, xmm2, dword ptr [rcx+8]
    vmovss  xmm8, cs:__real@ff7fffff
    vmovss  xmm9, cs:__real@7f7fffff
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm7, xmm7, xmm7
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
    vcomiss xmm1, xmm6
    vcomiss xmm1, xmm5
    vmovss  dword ptr [r8+4], xmm1
    vmovaps xmm5, xmm1
    vmovss  xmm0, dword ptr [rcx+40h]
    vsubss  xmm1, xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+3Ch]
    vsubss  xmm0, xmm2, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+44h]
    vsubss  xmm0, xmm2, dword ptr [rcx+14h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm3, xmm4, xmm1
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
    vcomiss xmm1, xmm6
    vcomiss xmm1, xmm5
    vmovss  dword ptr [r8+4], xmm1
    vmovaps xmm5, xmm1
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+48h]
    vsubss  xmm0, xmm2, dword ptr [rcx+18h]
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+50h]
    vsubss  xmm0, xmm2, dword ptr [rcx+20h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm3, xmm4, xmm1
    vcmpltss xmm0, xmm3, xmm7
    vblendvps xmm1, xmm9, xmm8, xmm0
    vcomiss xmm1, xmm6
    vcomiss xmm1, xmm5
    vmovss  dword ptr [r8+4], xmm1
    vmovaps xmm5, xmm1
    vmovss  xmm0, dword ptr [rcx+58h]
    vsubss  xmm1, xmm0, dword ptr [rcx+28h]
    vmulss  xmm3, xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx+54h]
    vsubss  xmm0, xmm2, dword ptr [rcx+24h]
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+5Ch]
    vsubss  xmm0, xmm2, dword ptr [rcx+2Ch]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm3, xmm4, xmm1
    vcmpltss xmm0, xmm3, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vblendvps xmm2, xmm9, xmm8, xmm0
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vcmpltss xmm1, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [r8], xmm1
    vcmpltss xmm1, xmm5, xmm2
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [r8+4], xmm1
  }
}

/*
==============
GetFrustumProjectedInterval<0>
==============
*/
void GetFrustumProjectedInterval<0>(const vec3_t (*frustumVertices)[8], const vec3_t *axis, vec2_t *outInterval)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm5, xmm4, xmm1
    vmovss  dword ptr [r8], xmm5
    vmovss  dword ptr [r8+4], xmm5
    vmovss  xmm0, dword ptr [rcx+10h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+0Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm5
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+28h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+34h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+30h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+38h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+40h]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+3Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+44h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+48h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+50h]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm6
    vcomiss xmm2, xmm5
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm5, xmm2
    vmovss  xmm0, dword ptr [rcx+58h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+54h]
    vmovss  xmm0, dword ptr [rcx+5Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  xmm0, dword ptr [r8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcmpltss xmm1, xmm2, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [r8], xmm1
    vcmpltss xmm1, xmm5, xmm2
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [r8+4], xmm1
  }
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

void __fastcall GetReflectionGridFrustumVertices(const GfxViewParms *viewParams, double farPlaneDist, vec3_t *outVertices)
{
  unsigned int v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _ER10 = 0;
  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  _RDX = viewParams;
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+48h+var_38], xmm8
  }
  v9 = 0;
  __asm { vmovaps xmm8, xmm1 }
  _R8 = (_DWORD *)&outVertices[1].v[2];
  do
  {
    __asm { vmovd   xmm1, r10d }
    *(_QWORD *)(_R8 - 5) = 0i64;
    _EAX = v9 & 1;
    *(_R8 - 3) = 0;
    __asm
    {
      vmovss  xmm4, dword ptr [rdx+130h]
      vmovss  xmm5, dword ptr [rdx+134h]
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm7
      vblendvps xmm1, xmm4, xmm3, xmm2
      vmovss  [rsp+48h+var_44], xmm1
      vmovd   xmm1, r10d
    }
    _EAX = v9 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm5, xmm7
      vblendvps xmm1, xmm5, xmm3, xmm2
      vmovss  [rsp+48h+var_48], xmm1
    }
    if ( (v9 & 4) != 0 )
      __asm { vmovaps xmm6, xmm8 }
    else
      __asm { vmovss  xmm6, dword ptr [rdx+148h] }
    __asm
    {
      vmulss  xmm5, xmm6, [rsp+48h+var_48]
      vmulss  xmm0, xmm6, [rsp+48h+var_44]
      vxorps  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, dword ptr [rdx+118h]
      vmovss  dword ptr [r8-14h], xmm2
      vmulss  xmm3, xmm1, dword ptr [rdx+11Ch]
      vmovss  dword ptr [r8-10h], xmm3
      vmulss  xmm4, xmm1, dword ptr [rdx+120h]
      vmovss  dword ptr [r8-0Ch], xmm4
      vmulss  xmm0, xmm5, dword ptr [rdx+124h]
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [r8-14h], xmm1
      vmulss  xmm0, xmm5, dword ptr [rdx+128h]
      vaddss  xmm2, xmm0, xmm3
      vmovss  dword ptr [r8-10h], xmm2
      vmulss  xmm0, xmm5, dword ptr [rdx+12Ch]
      vaddss  xmm3, xmm0, xmm4
      vmovss  dword ptr [r8-0Ch], xmm3
      vmulss  xmm0, xmm6, dword ptr [rdx+10Ch]
      vaddss  xmm1, xmm0, xmm1
      vmovss  dword ptr [r8-14h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rdx+110h]
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [r8-10h], xmm1
      vmulss  xmm2, xmm6, dword ptr [rdx+114h]
      vaddss  xmm0, xmm2, xmm3
      vmovss  dword ptr [r8-0Ch], xmm0
    }
    *((_QWORD *)_R8 - 1) = 0i64;
    __asm { vmovd   xmm1, r10d }
    *_R8 = 0;
    __asm
    {
      vmovss  xmm4, dword ptr [rdx+130h]
      vmovss  xmm5, dword ptr [rdx+134h]
    }
    _EAX = ((_BYTE)v9 + 1) & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm7
      vblendvps xmm1, xmm4, xmm3, xmm2
      vmovss  [rsp+48h+var_48], xmm1
      vmovd   xmm1, r10d
    }
    _EAX = ((_BYTE)v9 + 1) & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm5, xmm7
      vblendvps xmm1, xmm5, xmm3, xmm2
      vmovss  [rsp+48h+var_44], xmm1
    }
    if ( (((_BYTE)v9 + 1) & 4) != 0 )
      __asm { vmovaps xmm5, xmm8 }
    else
      __asm { vmovss  xmm5, dword ptr [rdx+148h] }
    __asm
    {
      vmulss  xmm4, xmm5, [rsp+48h+var_44]
      vmulss  xmm2, xmm5, [rsp+48h+var_48]
      vxorps  xmm3, xmm2, xmm7
      vmulss  xmm0, xmm3, dword ptr [rdx+118h]
      vaddss  xmm1, xmm0, dword ptr [r8-8]
      vmovss  dword ptr [r8-8], xmm1
      vmulss  xmm2, xmm3, dword ptr [rdx+11Ch]
      vaddss  xmm0, xmm2, dword ptr [r8-4]
      vmovss  dword ptr [r8-4], xmm0
      vmulss  xmm1, xmm3, dword ptr [rdx+120h]
      vaddss  xmm0, xmm1, dword ptr [r8]
      vmovss  dword ptr [r8], xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+124h]
      vaddss  xmm0, xmm1, dword ptr [r8-8]
      vmovss  dword ptr [r8-8], xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+128h]
      vaddss  xmm0, xmm1, dword ptr [r8-4]
      vmovss  dword ptr [r8-4], xmm0
      vmulss  xmm1, xmm4, dword ptr [rdx+12Ch]
      vaddss  xmm0, xmm1, dword ptr [r8]
      vmovss  dword ptr [r8], xmm0
      vmulss  xmm1, xmm5, dword ptr [rdx+10Ch]
      vaddss  xmm0, xmm1, dword ptr [r8-8]
      vmovss  dword ptr [r8-8], xmm0
      vmulss  xmm1, xmm5, dword ptr [rdx+110h]
      vaddss  xmm0, xmm1, dword ptr [r8-4]
      vmovss  dword ptr [r8-4], xmm0
      vmulss  xmm2, xmm5, dword ptr [rdx+114h]
      vaddss  xmm1, xmm2, dword ptr [r8]
      vmovss  dword ptr [r8], xmm1
    }
    _R8 += 6;
    v9 += 2;
  }
  while ( v9 < 8 );
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
  }
}

/*
==============
GetTriangleAxis
==============
*/
void GetTriangleAxis(const vec3_t *a, const vec3_t *b, const vec3_t *c, vec3_t *outAxis)
{
  vec3_t v1; 
  vec3_t v0; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [r8]
    vmovss  dword ptr [rsp+58h+v1], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+58h+v1+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vsubss  xmm0, xmm2, dword ptr [rcx]
    vmovss  dword ptr [rsp+58h+v1+8], xmm1
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+58h+v0], xmm0
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+58h+v0+8], xmm1
    vmovss  dword ptr [rsp+58h+v0+4], xmm2
  }
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
  __m256i v10; 
  __m256i v11; 
  GfxTexture_CreateParams params; 
  __m256i v13; 

  if ( !pixelsPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3715, ASSERT_TYPE_ASSERT, "(pixelsPtr)", (const char *)&queryFormat, "pixelsPtr") )
    __debugbreak();
  v5 = *pixelsPtr;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3718, ASSERT_TYPE_ASSERT, "(pixels)", (const char *)&queryFormat, "pixels") )
    __debugbreak();
  if ( image->pixels != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3719, ASSERT_TYPE_ASSERT, "(image->pixels == pixels)", (const char *)&queryFormat, "image->pixels == pixels") )
    __debugbreak();
  v10.m256i_i32[2] = 1;
  v10.m256i_i32[4] = 0;
  v11.m256i_i64[0] = 0i64;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+108h+var_B8+8], xmm0
  }
  v10.m256i_i32[3] = image->elementCount;
  v10.m256i_i64[0] = 0x10000000100i64;
  v10.m256i_i32[5] = 0x20000;
  v10.m256i_i32[6] = 42;
  __asm
  {
    vmovups ymm0, [rsp+108h+var_D8]
    vmovups ymmword ptr [rsp+108h+var_48], ymm0
  }
  v13.m256i_i32[4] = 6;
  __asm { vmovups ymm0, ymmword ptr [rsp+108h+var_48] }
  v11.m256i_i32[6] = -1;
  __asm
  {
    vmovups ymm1, [rsp+108h+var_B8]
    vmovups ymmword ptr [rsp+108h+params.params.width], ymm0
    vmovups ymmword ptr [rsp+108h+params.params.customAllocFunc], ymm1
  }
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
  const char *v32; 
  GfxCmdBufState *v35; 
  bool v37; 
  __m256i v47; 
  char v48; 
  const char *v51; 
  GfxCmdBufContext result[2]; 
  R_RT_Group v53; 
  void *retaddr; 

  _R11 = &retaddr;
  _R15 = viewInfo;
  _RSI = context;
  if ( r_reflectionProbeDebugMode->current.integer && s_world.draw.reflectionProbeData.reflectionProbeCount )
  {
    state = context->state;
    source = context->source;
    __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
    R_InitCmdBufSourceState(source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_InitCmdBufState(state);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext(result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rdx, xmm0, 1; in
      }
      if ( state != _RDX )
        GfxCmdBufState::Copy(state, _RDX);
    }
    memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
    memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
    memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
    state->data = source->input.data;
    R_BeginViewInternal(source, &_R15->sceneDef, (const GfxViewParms *)_R15, &_R15->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &_R15->sceneViewport);
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+30C0h]
      vmovups ymmword ptr [rbp+190h+result.source], ymm0
    }
    height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+31A0h]
      vmovups ymm1, ymmword ptr [r15+30C0h]
      vmovups xmm6, xmmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups [rsp+290h+var_248+8], ymm0
      vmovups ymmword ptr [rbp+190h+result.source], ymm0
      vmovups [rsp+290h+var_268+8], ymm1
      vmovups [rsp+290h+var_228+8], ymm1
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+190h+result.source]
        vmovups [rsp+290h+var_248+8], ymm0
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rsp+290h+var_268+8]
      vmovd   eax, xmm0
    }
    v48 = 1;
    __asm { vmovups ymmword ptr [rbp+190h+result.source], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
    }
    else
    {
      if ( v47.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rsp+290h+var_268+8]
      vmovups [rbp+190h+var_1F8], ymm0
      vmovups ymm0, [rsp+290h+var_248+8]
      vmovups [rbp+190h+var_178], ymm0
    }
    _RCX = &v53;
    _RAX = &v48;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v32 = v51;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v53.m_vrsRt.m_tracking.m_location = v32;
    __asm { vmovdqa xmmword ptr [rbp+190h+result.source], xmm6 }
    R_SetRenderTargetsInternal(result, &v53, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1873)");
    __asm
    {
      vmovups xmm0, xmm6
      vmovq   r15, xmm0
      vmovups xmmword ptr [rbp+190h+result.source], xmm6
    }
    R_Set3D((GfxCmdBufSourceState *)_R15);
    v35 = result[0].state;
    __asm { vmovaps xmm6, [rsp+290h+var_38+8] }
    if ( (*(_BYTE *)(_R15 + 11668) & 2) != 0 )
    {
      R_GetViewport((const GfxCmdBufSourceState *)_R15, (GfxViewport *)result);
      R_SetViewportAndScissorSeparate(v35, (const GfxViewport *)result, (const GfxViewport *)result);
      R_UpdateViewport((GfxCmdBufSourceState *)_R15, (const GfxViewport *)result);
    }
    if ( v35->vertDeclType != VERTDECL_GENERIC )
      v35->pipelineStateDirty = 1;
    v37 = v35->depthRangeType == GFX_DEPTH_RANGE_SCENE;
    v35->vertDeclType = VERTDECL_GENERIC;
    if ( !v37 )
      R_ChangeDepthRange(v35, GFX_DEPTH_RANGE_SCENE);
    if ( R_BeginMaterial(v35, rgp.reflectionProbeSHDebug, TECHNIQUE_EMISSIVE) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbp+190h+result.source], xmm0
      }
      if ( R_SetupPass(result) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbp+190h+result.source], xmm0
        }
        R_SetupPassStableArgsInternal(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1910)");
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbp+190h+result.source], xmm0
        }
        R_SetupPassPerObjectArgsInternal(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1911)");
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbp+190h+result.source], xmm0
        }
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
      _RAX = RB_GetBackendCmdBufContext(result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rcx, xmm0, 1; out
      }
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

void __fastcall RB_ReflectionProbe_Overlay(GfxCmdBufContext *gfxContext, unsigned int frameIndex, int probeIndexToShow, double _XMM3_8)
{
  bool v14; 
  GfxWorldDraw *v15; 
  GfxReflectionProbeTransientData *v17; 
  GfxImage *p_frameCacheImageOctahedron; 
  GfxImage *blackImageCube; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v31; 
  GfxCmdBufInput *v32; 
  GfxWorldDraw *v41; 
  GfxReflectionProbeTransientData *v42; 
  GfxReflectionProbe *v44; 
  unsigned __int16 v45; 
  GfxImage **reflectionProbeGBufferImages_octahedron; 
  unsigned int *v47; 
  __int64 v50; 
  __int64 v56; 
  __int64 v63; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  GfxImage *p_frameCacheImage; 
  GfxWorldDraw *v94; 
  GfxReflectionProbeTransientData *v95; 
  GfxReflectionProbe *v97; 
  unsigned __int16 probeRelightingIndex; 
  GfxImage **reflectionProbeGBufferImages; 
  unsigned int *p_reflectionProbeIndex; 
  __int64 v106; 
  const GfxImage *v108; 
  __int64 v111; 
  const GfxImage *v114; 
  __int64 v117; 
  const GfxImage *v119; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float v130; 
  __int64 v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  __int64 v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  __int64 v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  __int64 v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  GfxCmdBufContext v160; 
  char v163; 
  void *retaddr; 

  _R11 = &retaddr;
  v14 = rg.useRProbeOctahedron == 0;
  v15 = g_worldDraw;
  _RDI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
  }
  if ( v14 )
  {
    if ( v15->reflectionProbeData.reflectionProbeImages || v15->reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = v15->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
    {
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 624, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId != GfxTextureId::NULLID") )
        __debugbreak();
      p_frameCacheImage = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage;
    }
    else
    {
      p_frameCacheImage = rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage;
    }
    __asm
    {
      vmovss  xmm7, cs:__real@41000000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, esi
      vcvtsi2ss xmm3, xmm3, r10d
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm6, xmm0, cs:__real@3d4ccccd
      vmulss  xmm1, xmm6, cs:__real@40000000
      vsubss  xmm0, xmm0, xmm6
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  [rsp+110h+var_D8], xmm6
      vsubss  xmm10, xmm2, xmm1
      vmovss  dword ptr [rsp+110h+var_E0], xmm6
      vmovaps xmm2, xmm8
      vmovss  dword ptr [rsp+110h+var_E8], xmm7
      vmovss  dword ptr [rsp+110h+fmt], xmm10
      vmovups [rbp+57h+var_B0], xmm0
    }
    R_ReflectionProbe_OverlayCube(&v160, p_frameCacheImage, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v135, v145, v151);
    v94 = g_worldDraw;
    if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
    {
      v95 = g_worldDraw->transientZones[0]->reflectionProbes;
      if ( !v95 || !v95->exclusiveProbeCount )
      {
        __asm { vcvttss2si eax, xmm8 }
        v97 = &g_worldDraw->reflectionProbeData.reflectionProbes[_EAX];
        probeRelightingIndex = v97->probeRelightingIndex;
        if ( probeRelightingIndex != 0xFFFF )
        {
          if ( probeRelightingIndex >= g_worldDraw->reflectionProbeData.probeRelightingCount )
          {
            LODWORD(v146) = g_worldDraw->reflectionProbeData.probeRelightingCount;
            LODWORD(v136) = probeRelightingIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2160, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v136, v146) )
              __debugbreak();
            v94 = g_worldDraw;
          }
          __asm
          {
            vmulss  xmm1, xmm6, cs:__real@40800000
            vmulss  xmm0, xmm6, cs:__real@40400000
          }
          reflectionProbeGBufferImages = v94->reflectionProbeData.reflectionProbeGBufferImages;
          p_reflectionProbeIndex = &v94->reflectionProbeData.probeRelightingData[v97->probeRelightingIndex].reflectionProbeIndex;
          __asm
          {
            vaddss  xmm2, xmm1, xmm7
            vaddss  xmm9, xmm0, xmm7
            vaddss  xmm8, xmm10, xmm2
          }
          v106 = p_reflectionProbeIndex[2];
          if ( (_DWORD)v106 != -1 )
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v108 = reflectionProbeGBufferImages[v106];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E8], xmm6
              vmovaps xmm3, xmm7
              vmovaps xmm2, xmm8
              vmovups [rbp+57h+var_B0], xmm0
              vmovss  dword ptr [rsp+110h+fmt], xmm6
            }
            R_ReflectionProbe_OverlayCubeGBuffer(&v160, v108, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v137);
          }
          v111 = p_reflectionProbeIndex[3];
          __asm { vaddss  xmm7, xmm9, xmm7 }
          if ( (_DWORD)v111 != -1 )
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v114 = reflectionProbeGBufferImages[v111];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E8], xmm6
              vmovaps xmm3, xmm7
              vmovaps xmm2, xmm8
              vmovups [rbp+57h+var_B0], xmm0
              vmovss  dword ptr [rsp+110h+fmt], xmm6
            }
            R_ReflectionProbe_OverlayCubeGBuffer(&v160, v114, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v138);
          }
          v117 = p_reflectionProbeIndex[4];
          if ( (_DWORD)v117 != -1 )
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v119 = reflectionProbeGBufferImages[v117];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E8], xmm6
              vaddss  xmm3, xmm9, xmm7
              vmovaps xmm2, xmm8
              vmovups [rbp+57h+var_B0], xmm0
              vmovss  dword ptr [rsp+110h+fmt], xmm6
            }
            R_ReflectionProbe_OverlayCubeGBuffer(&v160, v119, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v139);
          }
        }
      }
    }
  }
  else
  {
    v14 = v15->reflectionProbeData.reflectionProbeImages == NULL;
    __asm
    {
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [rsp+70h], xmm13
    }
    if ( !v14 || v15->reflectionProbeData.reflectionProbeImages_octahedron || (v17 = v15->transientZones[0]->reflectionProbes) != NULL && v17->exclusiveProbeCount )
    {
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId == NULLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 700, ASSERT_TYPE_ASSERT, "(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID)", (const char *)&queryFormat, "s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId != GfxTextureId::NULLID") )
        __debugbreak();
      p_frameCacheImageOctahedron = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron;
    }
    else
    {
      p_frameCacheImageOctahedron = rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron;
    }
    blackImageCube = rgp.blackImageCube;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm12, xmm12, xmm12
      vcvtsi2ss xmm12, xmm12, esi
    }
    source = _RDI->source;
    __asm
    {
      vxorps  xmm13, xmm13, xmm13
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm8, xmm0, cs:__real@3e19999a
      vsubss  xmm0, xmm0, xmm8
      vmulss  xmm11, xmm0, cs:__real@3f000000
      vcvtsi2ss xmm13, xmm13, edx
    }
    if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[4] = blackImageCube;
    v31 = _RDI->source;
    if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v32 = &v31->input;
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    _RAX = _RDI->source;
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  xmm7, cs:__real@41000000
      vmovss  [rsp+110h+var_C8], xmm9
      vmovss  [rsp+110h+var_D0], xmm9
      vmovss  dword ptr [rax+1064h], xmm13
      vmovss  dword ptr [rax+1068h], xmm12
    }
    _RAX->input.consts[150].v[0] = -1.0;
    _RAX->input.consts[150].v[3] = 1.0;
    v32->codeImages[5] = p_frameCacheImageOctahedron;
    ++_RAX->constVersions[150];
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vmovss  [rsp+110h+var_D8], xmm10
      vmovss  dword ptr [rsp+110h+var_E0], xmm10
      vmovss  dword ptr [rsp+110h+var_E8], xmm8
      vmovaps xmm3, xmm7
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+110h+fmt], xmm8
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_DrawStretchPic(&v160, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v130, v140, v147, v152, v156, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rbp+57h+var_B0], xmm0
    }
    RB_EndTessSurfaceInternal(&v160, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2089)");
    v41 = g_worldDraw;
    if ( !g_worldDraw->reflectionProbeData.reflectionProbeImages && !g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron )
    {
      v42 = g_worldDraw->transientZones[0]->reflectionProbes;
      if ( !v42 || !v42->exclusiveProbeCount )
      {
        __asm { vcvttss2si eax, xmm12 }
        v44 = &g_worldDraw->reflectionProbeData.reflectionProbes[_EAX];
        v45 = v44->probeRelightingIndex;
        if ( v45 != 0xFFFF )
        {
          if ( v45 >= g_worldDraw->reflectionProbeData.probeRelightingCount )
          {
            LODWORD(v141) = g_worldDraw->reflectionProbeData.probeRelightingCount;
            LODWORD(v131) = v45;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2098, ASSERT_TYPE_ASSERT, "(unsigned)( probe.probeRelightingIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.probeRelightingCount )", "probe.probeRelightingIndex doesn't index g_worldDraw->reflectionProbeData.probeRelightingCount\n\t%i not in [0, %i)", v131, v141) )
              __debugbreak();
            v41 = g_worldDraw;
          }
          reflectionProbeGBufferImages_octahedron = v41->reflectionProbeData.reflectionProbeGBufferImages_octahedron;
          v47 = &v41->reflectionProbeData.probeRelightingData[v44->probeRelightingIndex].reflectionProbeIndex;
          __asm
          {
            vaddss  xmm6, xmm8, xmm7
            vaddss  xmm11, xmm11, xmm6
          }
          v50 = v47[2];
          if ( (_DWORD)v50 != -1 )
          {
            _RBX = _RDI->source;
            R_SetCodeImageTextureInternal(_RDI->source, 5u, reflectionProbeGBufferImages_octahedron[v50], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2107)");
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovss  [rsp+110h+var_C8], xmm9
              vmovss  [rsp+110h+var_D0], xmm9
              vmovss  [rsp+110h+var_D8], xmm10
              vmovss  dword ptr [rbx+1064h], xmm13
              vmovss  dword ptr [rbx+1068h], xmm12
            }
            _RBX->input.consts[150].v[0] = -1.0;
            _RBX->input.consts[150].v[3] = 1.0;
            ++_RBX->constVersions[150];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E0], xmm10
              vmovss  dword ptr [rsp+110h+var_E8], xmm8
              vmovaps xmm3, xmm7
              vmovaps xmm2, xmm11
              vmovss  dword ptr [rsp+110h+fmt], xmm8
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_DrawStretchPic(&v160, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v132, v142, v148, v153, v157, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_EndTessSurfaceInternal(&v160, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2110)");
          }
          v56 = v47[3];
          __asm { vaddss  xmm7, xmm6, xmm7 }
          if ( (_DWORD)v56 != -1 )
          {
            _RBX = _RDI->source;
            R_SetCodeImageTextureInternal(_RDI->source, 5u, reflectionProbeGBufferImages_octahedron[v56], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2118)");
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovss  [rsp+110h+var_C8], xmm9
              vmovss  [rsp+110h+var_D0], xmm9
              vmovss  [rsp+110h+var_D8], xmm10
              vmovss  dword ptr [rbx+1064h], xmm13
              vmovss  dword ptr [rbx+1068h], xmm12
            }
            _RBX->input.consts[150].v[0] = -1.0;
            _RBX->input.consts[150].v[3] = 1.0;
            ++_RBX->constVersions[150];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E0], xmm10
              vmovss  dword ptr [rsp+110h+var_E8], xmm8
              vmovaps xmm3, xmm7
              vmovaps xmm2, xmm11
              vmovss  dword ptr [rsp+110h+fmt], xmm8
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_DrawStretchPic(&v160, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v133, v143, v149, v154, v158, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_EndTessSurfaceInternal(&v160, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2121)");
          }
          v63 = v47[4];
          if ( (_DWORD)v63 != -1 )
          {
            _RBX = _RDI->source;
            R_SetCodeImageTextureInternal(_RDI->source, 5u, reflectionProbeGBufferImages_octahedron[v63], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2128)");
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovss  [rsp+110h+var_C8], xmm9
              vmovss  [rsp+110h+var_D0], xmm9
              vmovss  [rsp+110h+var_D8], xmm10
              vmovss  dword ptr [rbx+1064h], xmm13
              vmovss  dword ptr [rbx+1068h], xmm12
            }
            _RBX->input.consts[150].v[0] = -1.0;
            _RBX->input.consts[150].v[3] = 1.0;
            ++_RBX->constVersions[150];
            __asm
            {
              vmovss  dword ptr [rsp+110h+var_E0], xmm10
              vmovss  dword ptr [rsp+110h+var_E8], xmm8
              vaddss  xmm3, xmm6, xmm7
              vmovaps xmm2, xmm11
              vmovss  dword ptr [rsp+110h+fmt], xmm8
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_DrawStretchPic(&v160, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v134, v144, v150, v155, v159, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups [rbp+57h+var_B0], xmm0
            }
            RB_EndTessSurfaceInternal(&v160, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2131)");
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm12, [rsp+110h+var_98+8]
      vmovaps xmm11, xmmword ptr [rsp+110h+var_88+8]
      vmovaps xmm13, xmmword ptr [rsp+70h]
    }
  }
  _R11 = &v163;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
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
  __int64 v30; 
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovss  xmm6, [rsp+88h+size]
  }
  _RBX = vertices;
  _RAX = vertexCount - 1;
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+rax*8]
    vmovss  xmm4, dword ptr [rbx+rax*8+4]
    vmulss  xmm1, xmm5, dword ptr [r8]
    vmulss  xmm0, xmm4, dword ptr [r9]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm0, xmm1, dword ptr [rbp+0]
    vmulss  xmm1, xmm4, dword ptr [r9+4]
    vmovss  dword ptr [rsp+88h+end], xmm0
    vmulss  xmm0, xmm5, dword ptr [r8+4]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [r9+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4]
    vmulss  xmm1, xmm5, dword ptr [r8+8]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsp+88h+end+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+88h+end+8], xmm3
  }
  if ( vertexCount )
  {
    v30 = vertexCount;
    do
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+88h+end]
        vmovss  xmm4, dword ptr [rbx]
        vmovss  xmm5, dword ptr [rbx+4]
        vmulss  xmm1, xmm4, dword ptr [rsi]
        vmovsd  qword ptr [rsp+88h+start], xmm0
        vmulss  xmm0, xmm5, dword ptr [rdi]
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm4, dword ptr [rsi+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbp+0]
        vmulss  xmm1, xmm5, dword ptr [rdi+4]
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm5, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm1, xmm4, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+88h+end], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+4]
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+88h+end+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+8]
      }
      start.v[2] = end.v[2];
      __asm { vmovss  dword ptr [rsp+88h+end+8], xmm3 }
      R_AddDebugLine(debugGlobalsEntry, &start, &end, color);
      ++_RBX;
      --v30;
    }
    while ( v30 );
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
R_AddDebugLocationFinder
==============
*/
void R_AddDebugLocationFinder(DebugGlobals *debugGlobalsEntry, const GfxCamera *const camera, const vec3_t *pos, const vec4_t *color, const char *message)
{
  bool v83; 
  __int64 v126; 
  __int64 v158; 
  char *string; 
  vec3_t v0; 
  vec3_t origin; 
  vec3_t cross; 
  __m256i vertices; 
  char v167; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm12, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm13, xmm0, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm14, xmm0, dword ptr [rdx+8]
    vmulss  xmm0, xmm12, dword ptr [rdx+18h]
    vmulss  xmm1, xmm13, dword ptr [rdx+1Ch]
    vmovss  xmm8, cs:__real@3f800000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rdx+20h]
    vmulss  xmm0, xmm12, dword ptr [rdx+24h]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm13, dword ptr [rdx+28h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rdx+2Ch]
    vmulss  xmm0, xmm12, dword ptr [rdx+0Ch]
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm1, xmm13, dword ptr [rdx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, dword ptr [rdx+14h]
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@00000000
  }
  if ( (unsigned __int64)&v158 != _security_cookie )
  {
    __asm
    {
      vdivss  xmm0, xmm8, xmm3
      vmulss  xmm10, xmm4, xmm0
      vmulss  xmm9, xmm5, xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm3, xmm8, xmm0
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm10, xmm1, cs:__real@41200000
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm9, xmm0, cs:__real@41200000
    }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f4ccccd
    vmulss  xmm2, xmm1, dword ptr [rdx+30h]; max
    vmulss  xmm7, xmm1, dword ptr [rdx+34h]
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm0, xmm10; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm7, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; val
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rbx+24h]
    vmulss  xmm1, xmm11, dword ptr [rbx+18h]
    vmovss  xmm5, cs:__real@44800000
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm3, xmm5
    vaddss  xmm2, xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm11, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rsp+170h+origin], xmm2
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+10h]
    vmulss  xmm2, xmm0, dword ptr [rbx+2Ch]
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm11, dword ptr [rbx+20h]
    vmulss  xmm4, xmm3, xmm5
    vaddss  xmm1, xmm4, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+170h+origin+4], xmm1
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm2, xmm1, dword ptr [rbx+14h]
    vmovups ymm1, cs:__ymm@3f800000bf8000003f8000003f800000bf8000003f800000bf800000bf800000
    vmulss  xmm3, xmm2, xmm5
    vaddss  xmm0, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+170h+origin+8], xmm0
    vmovss  xmm0, cs:__real@41000000
    vmovss  dword ptr [rsp+170h+string], xmm0
    vmovups [rsp+170h+anonymous_0], ymm1
  }
  R_AddDebugFlatLineLoop(debugGlobalsEntry, &origin, &camera->axis.m[1], &camera->axis.m[2], *(const float *)&string, (const vec2_t *)&vertices, 4u, color);
  v83 = message == NULL;
  if ( message )
    R_AddScaledDebugString(debugGlobalsEntry, camera, &origin, color, message);
  __asm { vucomiss xmm10, xmm11 }
  if ( !v83 )
    goto LABEL_8;
  __asm { vucomiss xmm9, xmm6 }
  if ( !v83 )
  {
LABEL_8:
    __asm
    {
      vmulss  xmm1, xmm13, xmm13
      vmulss  xmm0, xmm12, xmm12
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, xmm14
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm9, xmm12, xmm1
      vmulss  xmm10, xmm13, xmm1
      vmulss  xmm11, xmm14, xmm1
      vmovss  dword ptr [rsp+170h+v0], xmm9
      vmovss  dword ptr [rsp+170h+v0+4], xmm10
      vmovss  dword ptr [rsp+170h+v0+8], xmm11
    }
    Vec3Cross(&v0, camera->axis.m, &cross);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+170h+cross]
      vmovss  xmm5, dword ptr [rsp+170h+cross+4]
      vmovss  xmm4, dword ptr [rsp+170h+cross+8]
      vmovss  xmm7, dword ptr [rsp+170h+origin+4]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vmovss  xmm3, dword ptr [rsp+170h+origin]
      vdivss  xmm1, xmm8, xmm0
      vmovups ymm0, cs:__ymm@bf8000003f800000000000003f000000000000003f8000003f80000000000000
      vmovss  xmm8, dword ptr [rsp+170h+origin+8]
      vmovups [rsp+170h+anonymous_0], ymm0
      vmovss  xmm0, cs:__real@bf800000
      vmovss  [rbp+70h+var_D0], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm12, xmm1, xmm6
      vmovss  xmm6, cs:__real@42400000
      vmovss  [rbp+70h+var_CC], xmm0
      vmulss  xmm14, xmm4, xmm1
      vmulss  xmm13, xmm1, xmm5
      vmovups xmm1, cs:__xmm@00000000bf000000bf800000bf800000
      vmulss  xmm0, xmm12, xmm6
      vsubss  xmm0, xmm3, xmm0
      vmovss  dword ptr [rsp+170h+v0], xmm0
      vmovups [rbp+70h+var_E0], xmm1
      vmulss  xmm1, xmm13, xmm6
      vsubss  xmm0, xmm7, xmm1
      vmulss  xmm2, xmm14, xmm6
      vmovss  dword ptr [rsp+170h+v0+4], xmm0
      vsubss  xmm0, xmm8, xmm2
      vmovss  dword ptr [rsp+170h+v0+8], xmm0
    }
    _RBX = &vertices.m256i_i8[4];
    v126 = 7i64;
    while ( 1 )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+170h+v0]
        vmovss  xmm4, dword ptr [rbx-4]
        vmovss  xmm5, dword ptr [rbx]
        vmovsd  qword ptr [rsp+170h+cross], xmm0
        vmulss  xmm0, xmm9, xmm5
        vmulss  xmm1, xmm12, xmm4
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmulss  xmm1, xmm13, xmm4
        vmulss  xmm0, xmm10, xmm5
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+170h+v0], xmm3
        vaddss  xmm3, xmm2, xmm7
        vmulss  xmm1, xmm14, xmm4
        vmulss  xmm0, xmm11, xmm5
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+170h+v0+4], xmm3
        vaddss  xmm3, xmm2, xmm8
      }
      cross.v[2] = v0.v[2];
      __asm { vmovss  dword ptr [rsp+170h+v0+8], xmm3 }
      R_AddDebugLine(debugGlobalsEntry, &cross, &v0, color);
      _RBX += 8;
      if ( !--v126 )
        break;
      __asm
      {
        vmovss  xmm8, dword ptr [rsp+170h+origin+8]
        vmovss  xmm7, dword ptr [rsp+170h+origin+4]
        vmovss  xmm3, dword ptr [rsp+170h+origin]
      }
    }
  }
  _R11 = &v167;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
R_AddTransformedReflectionProbeInstancesToScene
==============
*/
void R_AddTransformedReflectionProbeInstancesToScene(const vec3_t *origin, const vec3_t *angles, const unsigned int reflectionProbeIndex)
{
  unsigned int reflectionProbeCount; 
  __int64 v17; 
  GfxReflectionProbe *v18; 
  __int64 v54; 
  unsigned __int16 probeInstanceCount; 
  __int64 v70; 
  GfxReflectionProbeInstance *p_outReflectionProbeInstance; 
  unsigned __int16 probeRelightingIndex; 
  unsigned int v104; 
  vec4_t probeRotation; 
  vec3_t in; 
  vec3_t out; 
  vec4_t quat; 
  vec4_t v109; 
  GfxReflectionProbeInstance reflectionProbeInstance; 
  GfxReflectionProbeInstance outReflectionProbeInstance; 
  void *retaddr; 

  _R11 = &retaddr;
  _R15 = origin;
  reflectionProbeCount = g_worldDraw->reflectionProbeData.reflectionProbeCount;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v17 = reflectionProbeIndex;
  if ( reflectionProbeIndex >= reflectionProbeCount )
  {
    v104 = reflectionProbeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3254, ASSERT_TYPE_ASSERT, "(unsigned)( reflectionProbeIndex ) < (unsigned)( g_worldDraw->reflectionProbeData.reflectionProbeCount )", "reflectionProbeIndex doesn't index g_worldDraw->reflectionProbeData.reflectionProbeCount\n\t%i not in [0, %i)", reflectionProbeIndex, v104) )
      __debugbreak();
  }
  v18 = &g_worldDraw->reflectionProbeData.reflectionProbes[v17];
  AnglesToQuat(&v18->angles, &quat);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+quat]
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [rbp+1A0h+quat+4]
    vmovss  xmm11, dword ptr [rbp+1A0h+quat+0Ch]
    vxorps  xmm12, xmm0, xmm15
    vmovss  xmm0, dword ptr [rbp+1A0h+quat+8]
    vxorps  xmm14, xmm0, xmm15
    vxorps  xmm13, xmm1, xmm15
  }
  AnglesToQuat(angles, &v109);
  __asm
  {
    vmovss  xmm10, dword ptr [rbp+1A0h+var_210+0Ch]
    vmovss  xmm9, dword ptr [rbp+1A0h+var_210]
    vmovss  xmm7, dword ptr [rbp+1A0h+var_210+4]
    vmovss  xmm6, dword ptr [rbp+1A0h+var_210+8]
    vmulss  xmm1, xmm10, xmm12
    vmulss  xmm0, xmm9, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm14
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm13
    vsubss  xmm8, xmm3, xmm0
    vmulss  xmm0, xmm9, xmm14
    vmulss  xmm1, xmm10, xmm13
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm12
    vaddss  xmm5, xmm3, xmm0
    vmulss  xmm0, xmm10, xmm14
    vmulss  xmm1, xmm9, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm9, xmm12
    vmovaps xmm12, [rsp+2A0h+var_A8+8]
  }
  v54 = 0i64;
  __asm
  {
    vmulss  xmm1, xmm10, xmm11
    vmovaps xmm11, [rsp+2A0h+var_98+8]
    vmovaps xmm10, [rsp+2A0h+var_88+8]
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm13
    vmovaps xmm13, [rsp+2A0h+var_B8+8]
    vmulss  xmm0, xmm6, xmm14
    vmovaps xmm14, [rsp+2A0h+var_C8+8]
    vmovss  dword ptr [rsp+2A0h+probeRotation], xmm8
    vxorps  xmm7, xmm8, xmm15
    vsubss  xmm3, xmm2, xmm1
    vsubss  xmm6, xmm3, xmm0
    vmovss  dword ptr [rsp+2A0h+probeRotation+0Ch], xmm6
    vmovss  dword ptr [rsp+2A0h+probeRotation+4], xmm5
    vmovss  dword ptr [rsp+2A0h+probeRotation+8], xmm4
  }
  probeInstanceCount = v18->probeInstanceCount;
  __asm
  {
    vxorps  xmm8, xmm5, xmm15
    vxorps  xmm9, xmm4, xmm15
    vmovaps xmm15, [rsp+2A0h+var_D8+8]
  }
  if ( probeInstanceCount )
  {
    v70 = probeInstanceCount;
    do
    {
      _RBX = &g_worldDraw->reflectionProbeData.reflectionProbeInstances[v18->probeInstances[v54]];
      if ( (_RBX->flags & 0x80u) != 0 && R_RadiantRemoteGetGfxReflectionProbeInstance(_RBX->livePath, &outReflectionProbeInstance) )
      {
        p_outReflectionProbeInstance = &outReflectionProbeInstance;
        if ( outReflectionProbeInstance.probeImageIndex != (_DWORD)v17 )
          p_outReflectionProbeInstance = _RBX;
        _RBX = p_outReflectionProbeInstance;
      }
      if ( _RBX->probeImageIndex != (_DWORD)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3297, ASSERT_TYPE_ASSERT, "(srcReflectionProbeInstance->probeImageIndex == reflectionProbeIndex)", (const char *)&queryFormat, "srcReflectionProbeInstance->probeImageIndex == reflectionProbeIndex") )
        __debugbreak();
      reflectionProbeInstance.livePath = NULL;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+68h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.feather], xmm0
        vmovss  xmm1, dword ptr [rbx+6Ch]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.feather+4], xmm1
        vmovss  xmm0, dword ptr [rbx+70h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.feather+8], xmm0
      }
      reflectionProbeInstance.flags = _RBX->flags & 0x7F;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+64h]
        vmovss  [rbp+1A0h+reflectionProbeInstance.priority], xmm0
      }
      if ( (unsigned int)v17 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v17, "unsigned", v17) )
        __debugbreak();
      reflectionProbeInstance.probeImageIndex = v17;
      reflectionProbeInstance.lodLevel = _RBX->lodLevel;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vsubss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rsp+2A0h+in], xmm1
        vmovss  xmm2, dword ptr [rbx+2Ch]
        vsubss  xmm0, xmm2, dword ptr [rbx+0Ch]
        vmovss  dword ptr [rsp+2A0h+in+4], xmm0
        vmovss  xmm1, dword ptr [rbx+30h]
        vsubss  xmm2, xmm1, dword ptr [rbx+10h]
        vmovss  dword ptr [rsp+2A0h+in+8], xmm2
      }
      QuatTransform(&probeRotation, &in, &out);
      __asm
      {
        vmovss  xmm4, dword ptr [r15]
        vaddss  xmm0, xmm4, dword ptr [rsp+2A0h+out]
        vmovss  xmm3, dword ptr [r15+4]
        vmovss  xmm2, dword ptr [r15+8]
        vaddss  xmm1, xmm3, dword ptr [rsp+2A0h+out+4]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.center], xmm0
        vaddss  xmm0, xmm2, dword ptr [rsp+2A0h+out+8]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.center+8], xmm0
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.center+4], xmm1
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probePosition], xmm4
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probePosition+4], xmm3
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probePosition+8], xmm2
      }
      QuatTransform(&probeRotation, &_RBX->volumeObb.xAxis, &reflectionProbeInstance.volumeObb.xAxis);
      QuatTransform(&probeRotation, &_RBX->volumeObb.yAxis, &reflectionProbeInstance.volumeObb.yAxis);
      QuatTransform(&probeRotation, &_RBX->volumeObb.zAxis, &reflectionProbeInstance.volumeObb.zAxis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+58h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.halfSize], xmm0
        vmovss  xmm1, dword ptr [rbx+5Ch]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.halfSize+4], xmm1
        vmovss  xmm0, dword ptr [rbx+60h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.volumeObb.halfSize+8], xmm0
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probeRotation], xmm7
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probeRotation+4], xmm8
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probeRotation+8], xmm9
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.probeRotation+0Ch], xmm6
        vmovss  xmm0, dword ptr [rbx+74h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionNeg], xmm0
        vmovss  xmm1, dword ptr [rbx+78h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionNeg+4], xmm1
        vmovss  xmm0, dword ptr [rbx+7Ch]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionNeg+8], xmm0
        vmovss  xmm1, dword ptr [rbx+80h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionPos], xmm1
        vmovss  xmm0, dword ptr [rbx+84h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionPos+4], xmm0
        vmovss  xmm1, dword ptr [rbx+88h]
        vmovss  dword ptr [rbp+1A0h+reflectionProbeInstance.expandProjectionPos+8], xmm1
      }
      R_AddReflectionProbeInstanceToScene(&reflectionProbeInstance);
      ++v54;
      --v70;
    }
    while ( v70 );
  }
  probeRelightingIndex = v18->probeRelightingIndex;
  __asm
  {
    vmovaps xmm9, [rsp+2A0h+var_78+8]
    vmovaps xmm8, [rsp+2A0h+var_68+8]
    vmovaps xmm7, [rsp+2A0h+var_58+8]
    vmovaps xmm6, [rsp+2A0h+var_48+8]
  }
  if ( probeRelightingIndex != 0xFFFF )
    R_ReflectionProbeRelighting_SetProbeTransform(probeRelightingIndex, _R15, &probeRotation);
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
void R_ReflectionProbe_AddProbesToDraw()
{
  const dvar_t *v2; 
  GfxBackEndData *v5; 
  GfxReflectionProbeFrameData *v6; 
  unsigned int v7; 
  __int64 probeImageIndex; 
  GfxReflectionProbe *v12; 
  char v14; 
  __int64 v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  base_vec4_t<unsigned int> scriptablePackedColorEmissive; 
  GfxScaledPlacement placement; 
  float v44; 
  void *retaddr; 

  _R11 = &retaddr;
  v2 = scr_debug_reflection;
  if ( scr_debug_reflection->current.integer )
  {
    __asm
    {
      vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
      vmovss  xmm0, cs:__real@3f800000
    }
    v5 = frontEndDataOut;
    scriptablePackedColorEmissive = 0ui64;
    __asm
    {
      vmovss  [rbp+57h+placement.scale], xmm0
      vmovss  [rbp+57h+var_44], xmm0
      vmovups xmmword ptr [rbp+57h+placement.base.quat], xmm1
      vmovups [rbp+57h+var_60], xmm1
    }
    if ( (unsigned int)(scr_debug_reflection->current.integer - 2) <= 1 )
    {
      v6 = &s_gfxReflectionProbeStaticData.bufferArray[frontEndDataOut->reflectionProbeFrameIndex];
      if ( !v6->visibleReflectionProbeCount )
        return;
      v7 = 0;
      __asm
      {
        vmovaps xmmword ptr [r11-38h], xmm6
        vmovss  xmm6, cs:__real@41800000
      }
      do
      {
        _RAX = R_ReflectionProbe_GetInstance(v6->visibleReflectionProbeInstances[v7].isWorldInstance, v6->visibleReflectionProbeInstances[v7].probeInstanceIndex);
        probeImageIndex = _RAX->probeImageIndex;
        __asm { vmovsd  xmm0, qword ptr [rax+8] }
        v12 = &g_worldDraw->reflectionProbeData.reflectionProbes[probeImageIndex];
        __asm { vmovsd  qword ptr [rbp+57h+placement.base.origin], xmm0 }
        placement.base.origin.v[2] = _RAX->probePosition.v[2];
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+8]
          vmovsd  [rbp+57h+var_50], xmm0
        }
        v44 = _RAX->probePosition.v[2];
        R_FilterXModelIntoScene(s_gfxReflectionProbeStaticData.test_sphere_silver, &placement, 0, &scriptablePackedColorEmissive, 0, (LocalClientNum_t)frontEndDataOut->localClientNum);
        if ( scr_debug_reflection_info->current.enabled )
        {
          v14 = 0;
          v15 = 0i64;
          if ( v12->probeInstanceCount )
          {
            while ( v12->probeInstances[v15] )
            {
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= v12->probeInstanceCount )
                goto LABEL_11;
            }
            v14 = 1;
          }
LABEL_11:
          v16 = (char *)&queryFormat.fmt + 3;
          v17 = (char *)&queryFormat.fmt + 3;
          if ( v12->probeRelightingIndex != 0xFFFF )
            v16 = " (Lit)";
          if ( v14 )
            v17 = " (Default)";
          v18 = j_va("%u%s%s", (unsigned __int16)probeImageIndex, v17, v16);
          __asm { vmovaps xmm3, xmm6; size }
          R_AddDebugString(&frontEndDataOut->debugGlobals, &placement.base.origin, &colorBlue, *(float *)&_XMM3, v18);
        }
        ++v7;
      }
      while ( v7 < v6->visibleReflectionProbeCount );
      v2 = scr_debug_reflection;
      v5 = frontEndDataOut;
      __asm { vmovaps xmm6, [rsp+0D0h+var_38+8] }
    }
    if ( ((v2->current.integer - 1) & 0xFFFFFFFD) == 0 )
    {
      _RAX = r_reflectionProbeDebugCameraDistance;
      __asm { vmovss  xmm4, dword ptr [rax+28h] }
      _RCX = (__int64)&v5->viewInfo[v5->viewInfoIndex];
      __asm
      {
        vmovsd  xmm3, qword ptr [rcx+10Ch]
        vmulss  xmm0, xmm3, xmm4
        vaddss  xmm1, xmm0, dword ptr [rcx+100h]
        vmovss  dword ptr [rbp+57h+placement.base.origin], xmm1
        vshufps xmm2, xmm3, xmm3, 55h ; 'U'
        vmulss  xmm0, xmm2, xmm4
        vaddss  xmm1, xmm0, dword ptr [rcx+104h]
        vmulss  xmm0, xmm4, [rbp+57h+var_98]
        vmovss  dword ptr [rbp+57h+placement.base.origin+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rcx+108h]
        vmovss  dword ptr [rbp+57h+placement.base.origin+8], xmm1
        vmovsd  xmm3, qword ptr [rcx+28Ch]
        vmulss  xmm0, xmm3, xmm4
        vaddss  xmm1, xmm0, dword ptr [rcx+280h]
        vmovss  dword ptr [rbp+57h+var_50], xmm1
        vshufps xmm2, xmm3, xmm3, 55h ; 'U'
        vmulss  xmm0, xmm2, xmm4
        vaddss  xmm1, xmm0, dword ptr [rcx+284h]
        vmulss  xmm0, xmm4, [rbp+57h+var_98]
        vmovss  dword ptr [rbp+57h+var_50+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rcx+288h]
        vmovss  [rbp+57h+var_48], xmm1
      }
      R_FilterXModelIntoScene(s_gfxReflectionProbeStaticData.test_sphere_silver, &placement, 0, &scriptablePackedColorEmissive, 0, (LocalClientNum_t)v5->localClientNum);
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
  __int64 v18; 
  const ReflectionProbeProcessViewInstanceInfo *v19; 
  unsigned int v21; 
  int v22; 
  unsigned __int16 probeImageIndex; 
  unsigned __int16 v36; 
  unsigned __int16 probeRelightingIndex; 
  unsigned __int16 v48; 
  const dvar_t *v58; 
  unsigned int **p_writeZBinData; 
  unsigned int *writeZBinData; 
  __int64 v95; 
  __int64 i; 
  unsigned int v97; 
  int v98; 
  int v99; 
  int v101; 
  const ReflectionProbeProcessViewInstanceInfo *v102; 
  GfxViewInfo *viewInfoa; 
  void *retaddr; 

  _R11 = &retaddr;
  v18 = 0i64;
  v19 = visibleProbeInstances;
  v21 = 0;
  *(_QWORD *)&frameData->probeCount = visibleProbeInstanceCount;
  *(_QWORD *)frameData->writeLightgridOverride = 0i64;
  frameData->writeLightgridOverride[2] = 0;
  viewInfoa = (GfxViewInfo *)viewInfo;
  v102 = visibleProbeInstances;
  v97 = 0;
  if ( visibleProbeInstanceCount )
  {
    v22 = 1;
    _R13 = 0i64;
    _R14 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovaps [rsp+138h+var_C8], xmm14
      vmovaps [rsp+138h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3f800000
    }
    v98 = 1;
    do
    {
      _RAX = R_ReflectionProbe_GetInstance(v19->isWorldInstance, v19->probeInstanceIndex);
      _RDI = _RAX;
      if ( (_RAX->flags & 4) != 0 )
      {
        frameData->writeLightgridOverride[v21 >> 5] |= v22;
        ++frameData->lightgridOverrideProbeCount;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rax+8]
        vsubss  xmm1, xmm0, dword ptr [r15+100h]
      }
      _RBP = frameData->writeProbeInstanceData;
      __asm
      {
        vmovss  dword ptr [r14+rbp], xmm1
        vmovss  xmm2, dword ptr [rax+0Ch]
        vsubss  xmm0, xmm2, dword ptr [r15+104h]
        vmovss  dword ptr [r14+rbp+4], xmm0
        vmovss  xmm1, dword ptr [rax+10h]
        vsubss  xmm2, xmm1, dword ptr [r15+108h]
        vmovss  dword ptr [r14+rbp+8], xmm2
      }
      if ( (_RAX->flags & 1) != 0 )
        _RBP[_R14].probePosition.v[0] = NAN;
      probeImageIndex = _RAX->probeImageIndex;
      if ( R_ReflectionProbe_IsFrameCacheEnabled() )
        v36 = remap->visibleInstanceToCacheSlot[0];
      else
        v36 = probeImageIndex;
      v101 = v36;
      __asm { vmovaps xmm3, xmm15 }
      probeRelightingIndex = g_worldDraw->reflectionProbeData.reflectionProbes[probeImageIndex].probeRelightingIndex;
      if ( probeRelightingIndex != 0xFFFF )
      {
        _RAX = g_worldDraw->reflectionProbeData.probeRelightingData;
        _RCX = 32i64 * probeRelightingIndex;
        __asm { vmovss  xmm3, dword ptr [rcx+rax+14h] }
      }
      __asm { vmovss  [rsp+138h+var_100], xmm3 }
      _ECX = 2139095040;
      __asm { vmovd   xmm1, ecx }
      _EAX = v99 & 0x7F800000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm15, xmm2
        vmovaps xmm0, xmm1; f
        vmovss  [rsp+138h+var_100], xmm1
      }
      v48 = HalfFromFloat(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+58h]
        vmovss  xmm1, dword ptr [rdi+5Ch]
        vmulss  xmm12, xmm0, dword ptr [rax+28h]
        vmulss  xmm13, xmm1, dword ptr [rax+2Ch]
        vmovss  xmm0, dword ptr [rdi+60h]
        vmulss  xmm14, xmm0, dword ptr [rax+30h]
      }
      _RBP[_R14].probeImageIndexScale = v101 | (v48 << 16);
      __asm
      {
        vdivss  xmm0, xmm15, dword ptr [rdi+68h]
        vmovss  dword ptr [r14+rbp+10h], xmm0
        vdivss  xmm1, xmm15, dword ptr [rdi+6Ch]
        vmovss  dword ptr [r14+rbp+14h], xmm1
        vdivss  xmm0, xmm15, dword ptr [rdi+70h]
        vmovss  dword ptr [r14+rbp+18h], xmm0
      }
      _RBP[_R14].probeRotation.v[0] = _RDI->probeRotation.v[0];
      _RBP[_R14].probeRotation.v[1] = _RDI->probeRotation.v[1];
      _RBP[_R14].probeRotation.v[2] = _RDI->probeRotation.v[2];
      _RBP[_R14].probeRotation.v[3] = _RDI->probeRotation.v[3];
      v58 = r_reflectionProbeExpandProjectionOverride;
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+74h]
        vmovss  xmm10, dword ptr [rdi+78h]
        vmovss  xmm11, dword ptr [rdi+7Ch]
        vmovss  xmm6, dword ptr [rdi+80h]
        vmovss  xmm7, dword ptr [rdi+84h]
        vmovss  xmm8, dword ptr [rdi+88h]
      }
      if ( !r_reflectionProbeExpandProjectionOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      if ( v58->current.enabled )
      {
        _RSI = r_reflectionProbeExpandProjectionNeg;
        if ( !r_reflectionProbeExpandProjectionNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm
        {
          vmovss  xmm9, dword ptr [rsi+28h]
          vmovss  xmm10, dword ptr [rsi+2Ch]
          vmovss  xmm11, dword ptr [rsi+30h]
        }
        _RSI = r_reflectionProbeExpandProjectionPos;
        if ( !r_reflectionProbeExpandProjectionPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+28h]
          vmovss  xmm7, dword ptr [rsi+2Ch]
          vmovss  xmm8, dword ptr [rsi+30h]
        }
      }
      __asm { vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000 }
      remap = (const GfxReflectionProbeRemapState *)((char *)remap + 2);
      __asm
      {
        vxorps  xmm0, xmm12, xmm3
        vsubss  xmm1, xmm0, xmm9
        vmovss  dword ptr [r14+rbp+2Ch], xmm1
        vxorps  xmm0, xmm13, xmm3
        vsubss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm12, xmm6
        vmovss  dword ptr [r14+rbp+30h], xmm2
        vmovss  dword ptr [r14+rbp+34h], xmm1
        vaddss  xmm2, xmm13, xmm7
        vmovss  dword ptr [r14+rbp+38h], xmm2
        vxorps  xmm0, xmm14, xmm3
        vsubss  xmm1, xmm0, xmm11
        vmovss  dword ptr [r14+rbp+3Ch], xmm1
        vaddss  xmm2, xmm8, xmm14
        vmovss  dword ptr [r14+rbp+40h], xmm2
      }
      ++_R14;
      _RCX = frameData->writeProbeObbData;
      v22 = __ROL4__(v98, 1);
      v21 = ++v97;
      _RCX[_R13].center.v[0] = _RDI->volumeObb.center.v[0];
      _RCX[_R13].center.v[1] = _RDI->volumeObb.center.v[1];
      _RCX[_R13].center.v[2] = _RDI->volumeObb.center.v[2];
      _RCX[_R13].xAxis.v[0] = _RDI->volumeObb.xAxis.v[0];
      _RCX[_R13].xAxis.v[1] = _RDI->volumeObb.xAxis.v[1];
      _RCX[_R13].xAxis.v[2] = _RDI->volumeObb.xAxis.v[2];
      _RCX[_R13].yAxis.v[0] = _RDI->volumeObb.yAxis.v[0];
      _RCX[_R13].yAxis.v[1] = _RDI->volumeObb.yAxis.v[1];
      _RCX[_R13].yAxis.v[2] = _RDI->volumeObb.yAxis.v[2];
      _RCX[_R13].zAxis.v[0] = _RDI->volumeObb.zAxis.v[0];
      _RCX[_R13].zAxis.v[1] = _RDI->volumeObb.zAxis.v[1];
      _RCX[_R13].zAxis.v[2] = _RDI->volumeObb.zAxis.v[2];
      v19 = v102 + 1;
      v98 = v22;
      __asm
      {
        vmovss  dword ptr [rcx+r13+30h], xmm12
        vmovss  dword ptr [rcx+r13+34h], xmm13
        vmovss  dword ptr [rcx+r13+38h], xmm14
      }
      ++_R13;
      ++v102;
    }
    while ( v97 < visibleProbeInstanceCount );
    viewInfo = viewInfoa;
    v18 = 0i64;
    __asm
    {
      vmovaps xmm15, [rsp+138h+var_D8]
      vmovaps xmm14, [rsp+138h+var_C8]
      vmovaps xmm13, [rsp+138h+var_B8]
      vmovaps xmm12, [rsp+138h+var_A8]
      vmovaps xmm11, [rsp+138h+var_98]
      vmovaps xmm10, [rsp+138h+var_88]
      vmovaps xmm9, [rsp+138h+var_78]
      vmovaps xmm8, [rsp+138h+var_68]
      vmovaps xmm7, [rsp+138h+var_58]
      vmovaps xmm6, [rsp+138h+var_48]
    }
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
    v95 = 0x2000i64;
    do
    {
      (*p_writeZBinData)[v18++] = visibleProbeInstanceCount;
      --v95;
    }
    while ( v95 );
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

__int64 __fastcall R_ReflectionProbe_CompareProbeInstancePriority(const void *p0, const void *p1, double _XMM2_8)
{
  unsigned __int8 v3; 
  unsigned __int8 v4; 

  v3 = *((_BYTE *)p0 + 5);
  v4 = *((_BYTE *)p1 + 5);
  if ( v3 >= v4 )
  {
    if ( v3 > v4 )
      return 1i64;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vsubss  xmm1, xmm0, dword ptr [rdx+0Ch]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm1, xmm2
    }
    if ( v3 < v4 )
      return 1i64;
    if ( v3 <= v4 )
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
  GfxReflectionProbeTransientData *v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 i; 
  int v38; 
  unsigned int v39; 
  __int64 v40; 
  GfxReflectionProbeCopyRequest *v41; 
  unsigned int v42; 
  unsigned int dstCacheSlot; 
  GfxImage *v44; 
  const GfxTexture *v45; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  unsigned __int8 levelCount; 
  unsigned int j; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int k; 
  __int64 v53; 
  __int64 v54; 
  GfxWorldDraw *v55; 
  int v56; 
  __int64 flag; 
  __int64 flaga; 
  __int64 dstSlice; 
  __int64 srcX; 
  __int64 srcY; 
  __int64 srcMip; 
  __int64 srcSlice; 
  int v64; 
  int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  GfxTexture *textureDst; 
  GfxTexture *textureDsta; 
  GfxReflectionProbeCopyQueue *v71; 
  ID3D12DeviceChild *resource; 
  const GfxTexture *v73; 
  unsigned int *v74; 
  __int64 v75; 
  unsigned int v76; 
  unsigned __int64 v77; 
  ComputeCmdBufState *statea; 
  GfxReflectionProbeCopyRequest *v79; 
  GfxShaderTextureView *views; 
  GfxShaderTextureRWView *v81; 
  const GfxBackEndData *v82; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v84; 
  GfxShaderBufferRWView *p_rwView; 
  int v86[3]; 
  __int64 v87; 
  int v88; 
  unsigned __int64 v90; 
  __int64 v91[2]; 
  unsigned __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __int128 v97; 
  int dataa; 
  __int64 v99; 
  int v100; 
  __int64 v101; 
  unsigned int v102; 
  int v103; 
  int v104[4]; 
  int v105[192]; 

  v3 = data;
  v82 = data;
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
  v75 = reflectionProbeFrameIndex;
  v77 = 2312 * reflectionProbeFrameIndex;
  R_ReflectionProbe_ReleaseAlias(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[reflectionProbeFrameIndex]);
  p_requestCount = &s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[reflectionProbeFrameIndex].requestCount;
  v8 = *p_requestCount == 0;
  v9 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[reflectionProbeFrameIndex];
  v71 = v9;
  v74 = p_requestCount;
  if ( v8 )
    return;
  if ( rg.useRProbeOctahedron )
  {
    textureDst = (GfxTexture *)R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId);
    v10 = textureDst;
    R_HW_AddResourceTransition(v4, textureDst, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v4);
    v11 = 0i64;
    v64 = 0;
    if ( *p_requestCount )
    {
      do
      {
        v79 = &v9->requests[v11];
        probeImageIndirection = g_worldDraw->reflectionProbeData.reflectionProbes[v79->mapProbeIndex].probeImageIndirection;
        v13 = probeImageIndirection >> 20;
        v14 = HIWORD(probeImageIndirection) & 0xF;
        v66 = probeImageIndirection >> 20;
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
          _R14 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v77 / 0x908];
          if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v77 / 0x908].aliasCount >= 0x60 )
          {
            LODWORD(dstSlice) = 96;
            LODWORD(flag) = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases[v77 / 0x908].aliasCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3532, ASSERT_TYPE_ASSERT, "(unsigned)( aliases.aliasCount ) < (unsigned)( ( sizeof( *array_counter( GfxReflectionProbeCopyImageAlias::srcTextureAlias ) ) + 0 ) )", "aliases.aliasCount doesn't index ARRAY_COUNT( GfxReflectionProbeCopyImageAlias::srcTextureAlias )\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          v91[0] = 0i64;
          v91[1] = 0i64;
          v92 = 0i64;
          v93 = 0i64;
          v94 = 0i64;
          v95 = 0i64;
          v96 = 0i64;
          if ( (v15->flags & 0x40) != 0 )
            ResidentPixels = Stream_AddressSpace_ResolveHandle(&v15->pixels.streamedDataHandle);
          else
            ResidentPixels = (unsigned __int8 *)R_Image_GetResidentPixels(v15);
          v20 = ResidentPixels;
          LODWORD(v91[0]) = 3;
          v92 = (unsigned __int64)v15->width >> 2;
          LODWORD(v93) = v15->height >> 2;
          if ( v15->numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3542, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->numElements == 1 ) )", "( srcProbeImage->name ) = %s", v15->name) )
            __debugbreak();
          WORD2(v93) = 1;
          HIWORD(v93) = v15->levelCount;
          v94 = 0x100000003i64;
          LODWORD(v96) = 0;
          v21 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int8 *, __int64 *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v20, v91, 64i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
          if ( v21 < 0 )
          {
            v22 = R_ErrorDescription(v21);
            Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v22);
          }
          PIXSetDebugName(resource, "ReflectionProbe src aliased texture");
          v23 = resource;
          v86[0] = v94;
          v24 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v88 = HIWORD(v93);
          v87 = 0i64;
          __asm { vmovdqu [rbp+3F0h+var_3D8], xmm0 }
          v86[1] = 4;
          v86[2] = 5768;
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
          v76 = freeSlot;
          m_pFunction = g_dx.d3d12device->m_pFunction;
          v90 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
          m_pFunction[6].QueryInterface(g_dx.d3d12device, (const _GUID *)v23, (void **)v86);
          aliasCount = _R14->aliasCount;
          Resident = NULL;
          *((_QWORD *)&v97 + 1) = freeSlot;
          v31 = 0;
          *(_QWORD *)&v97 = v23;
          _R14->srcTextureAlias[aliasCount] = (ID3D12Resource *)v23;
          __asm { vmovups xmm0, [rbp+3F0h+var_388] }
          v68 = 0;
          _RAX = 2 * (_R14->aliasCount + 48i64);
          __asm { vmovups xmmword ptr [r14+rax*8], xmm0 }
          ++_R14->aliasCount;
        }
        else
        {
          v33 = v3->transientDrawContext.reflectionProbes[(unsigned __int16)v13];
          if ( (unsigned int)v14 >= v33->exclusiveProbeBucketCount )
          {
            LODWORD(dstSlice) = v33->exclusiveProbeBucketCount;
            LODWORD(flag) = HIWORD(probeImageIndirection) & 0xF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3574, ASSERT_TYPE_ASSERT, "(unsigned)( bucketIndex ) < (unsigned)( transientData->exclusiveProbeBucketCount )", "bucketIndex doesn't index transientData->exclusiveProbeBucketCount\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          v34 = v14;
          v31 = (unsigned __int16)probeImageIndirection;
          v68 = (unsigned __int16)probeImageIndirection;
          v35 = (__int64)&v33->exclusiveProbeBuckets[v34];
          if ( (unsigned int)(unsigned __int16)probeImageIndirection >= *(_DWORD *)(v35 + 4) )
          {
            LODWORD(dstSlice) = *(_DWORD *)(v35 + 4);
            LODWORD(flag) = (unsigned __int16)probeImageIndirection;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3576, ASSERT_TYPE_ASSERT, "(unsigned)( bucketProbeIndex ) < (unsigned)( bucket.elementCount )", "bucketProbeIndex doesn't index bucket.elementCount\n\t%i not in [0, %i)", flag, dstSlice) )
              __debugbreak();
          }
          Resident = R_Texture_GetResident((GfxTextureId)*(_DWORD *)(v35 + 8));
        }
        v36 = 0;
        v73 = Resident;
        for ( i = v79->dstCacheSlot; v36 < s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.levelCount; Resident = v73 )
        {
          if ( (_WORD)v66 == 4095 )
          {
            R_SetComputeShader(v4, rgp.copyRawRect2D_int4ComputeShader);
            views = (GfxShaderTextureView *)&v97;
            R_SetComputeTextureViews(v4, 0, 1, (const GfxShaderTextureView *const *)&views);
            v81 = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView[i][v36];
            R_SetComputeTextureRWViews(v4, 0, 1, (const GfxShaderTextureRWView *const *)&v81);
            v100 = 0;
            v38 = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width >> (v36 + 2);
            v39 = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height >> (v36 + 2);
            dataa = v38;
            v99 = v39;
            v101 = 0i64;
            v102 = v36;
            v103 = 0;
            R_UploadAndSetComputeConstants(v4, 0, &dataa, 0x20u, NULL);
            R_Dispatch(v4, (unsigned int)(v38 + 7) >> 3, (v39 + 7) >> 3, 1u);
            v31 = v68;
          }
          else
          {
            R_CopyTextureRect(v4, v10, Resident, 0, 0, v36, i, 0, 0, v36, v31, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width >> v36, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.height >> v36);
          }
          ++v36;
        }
        p_requestCount = v74;
        v9 = v71;
        v3 = v82;
        v11 = (unsigned int)(v64 + 1);
        v64 = v11;
      }
      while ( (unsigned int)v11 < *v74 );
LABEL_86:
      reflectionProbeFrameIndex = v75;
    }
  }
  else
  {
    textureDsta = (GfxTexture *)R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.textureId);
    v10 = textureDsta;
    R_HW_AddResourceTransition(v4, textureDsta, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v4);
    v40 = 0i64;
    v65 = 0;
    if ( *p_requestCount )
    {
      do
      {
        v41 = &v9->requests[v40];
        v42 = g_worldDraw->reflectionProbeData.reflectionProbes[v41->mapProbeIndex].probeImageIndirection;
        if ( v42 >> 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3638, ASSERT_TYPE_ASSERT, "(zoneIndex == 0)", (const char *)&queryFormat, "zoneIndex == 0") )
          __debugbreak();
        if ( (v42 & 0xF0000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3639, ASSERT_TYPE_ASSERT, "(bucketIndex == 0)", (const char *)&queryFormat, "bucketIndex == 0") )
          __debugbreak();
        dstCacheSlot = v41->dstCacheSlot;
        v67 = dstCacheSlot;
        v44 = g_worldDraw->reflectionProbeData.reflectionProbeImages[(unsigned __int16)v42];
        v45 = R_Texture_GetResident(v44->textureId);
        v46 = v44->width;
        if ( v46 != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width )
        {
          LODWORD(flaga) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3645, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->width == dstCacheImage->width ) )", "( srcProbeImage->width ) = %u", flaga) )
            __debugbreak();
        }
        v47 = v44->height;
        if ( v47 != s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height )
        {
          LODWORD(flaga) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 3646, ASSERT_TYPE_ASSERT, "( ( srcProbeImage->height == dstCacheImage->height ) )", "( srcProbeImage->height ) = %u", flaga) )
            __debugbreak();
        }
        levelCount = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount;
        for ( j = 0; j < 6; ++j )
        {
          v50 = 0;
          if ( levelCount )
          {
            do
            {
              R_CopyTextureRect(v4, textureDsta, v45, 0, 0, v50, j + 6 * dstCacheSlot, 0, 0, v50, j, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width >> v50, s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.height >> v50);
              levelCount = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount;
              ++v50;
            }
            while ( v50 < s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.levelCount );
            dstCacheSlot = v67;
          }
        }
        p_requestCount = v74;
        v9 = v71;
        v40 = (unsigned int)(v65 + 1);
        v65 = v40;
      }
      while ( (unsigned int)v40 < *v74 );
      v10 = textureDsta;
      goto LABEL_86;
    }
  }
  R_HW_AddResourceTransition(v4, v10, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v51 = *p_requestCount;
  for ( k = 0; k < v51; v9 = (GfxReflectionProbeCopyQueue *)((char *)v9 + 8) )
  {
    v53 = 2 * k++;
    v105[v53] = v9->requests[0].mapProbeIndex;
    v105[(unsigned int)(v53 + 1)] = v9->requests[0].dstCacheSlot;
  }
  v54 = reflectionProbeFrameIndex;
  R_UpdateGfxWrappedBuffer(&s_gfxReflectionProbeStaticData.bufferArray[v54].frameCacheSHCopyIndices, v105, 8 * v51);
  v55 = g_worldDraw;
  R_HW_AddResourceTransition(v4, &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v4);
  R_SetComputeShader(v4, rgp.shCopyIndices);
  p_view = &v55->reflectionProbeData.reflectionProbeSHBuffer.view;
  R_SetComputeViews(v4, 0, 1, (const GfxShaderBufferView *const *)&p_view);
  v84 = &s_gfxReflectionProbeStaticData.bufferArray[v54].frameCacheSHCopyIndices.view;
  R_SetComputeViews(v4, 1, 1, (const GfxShaderBufferView *const *)&v84);
  p_rwView = &s_gfxReflectionProbeStaticData.transientStreaming.frameCacheSHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v4, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v56 = *p_requestCount;
  v104[1] = g_worldDraw->reflectionProbeData.reflectionProbeCount;
  v104[0] = 85;
  v104[2] = v56;
  R_UploadAndSetComputeConstants(v4, 0, v104, 0x10u, NULL);
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
  char v23; 
  char v24; 
  GfxReflectionProbe *v27; 
  char v28; 
  float v29; 
  const dvar_t *v42; 
  const dvar_t *v44; 
  __int64 v171; 
  __int64 v172; 
  __int64 v173; 
  const dvar_t *v175; 
  const char *v176; 
  const vec4_t *v178; 
  const char *v203; 
  const char *v204; 
  const char *v205; 
  const char *v206; 
  unsigned int v207; 
  const char *v224; 
  const vec3_t *p_probePosition; 
  const char *v229; 
  vec3_t *v235; 
  char *fmt; 
  char *fmta; 
  __int64 v240; 
  __int64 v241; 
  __int64 v242; 
  __int64 v243; 
  __int64 v244; 
  bool enabled; 
  bool v246; 
  char v247; 
  bool v248; 
  bool v249; 
  unsigned __int16 probeRelightingIndex; 
  const char *v252; 
  const char *v254; 
  const char *v256; 
  const char *v258; 
  GfxReflectionProbeObb obb; 
  vec4_t color; 
  vec3_t v262[8]; 
  vec3_t outVertices[8]; 
  vec3_t vertices[8]; 

  __asm { vmovaps [rsp+310h+var_40], xmm6 }
  _RDI = probeInstance;
  *(float *)&_XMM0 = R_ReflectionProbe_GetObbDepth(&probeInstance->volumeObb, &camera->origin, camera->axis.m);
  _RBX = r_reflectionProbeVolumeDrawDistance;
  __asm { vmovaps xmm6, xmm0 }
  if ( !r_reflectionProbeVolumeDrawDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v23 )
    goto LABEL_6;
  __asm { vcomiss xmm6, xmm1 }
  if ( v23 | v24 )
  {
LABEL_6:
    v27 = &g_worldDraw->reflectionProbeData.reflectionProbes[_RDI->probeImageIndex];
    v28 = ~_RDI->flags;
    *(_QWORD *)color.v = v27;
    v247 = v28 & 1;
    probeRelightingIndex = v27->probeRelightingIndex;
    R_ReflectionProbe_GetObbVertices(&_RDI->volumeObb, (vec3_t (*)[8])outVertices);
    v29 = _RDI->volumeObb.halfSize.v[2];
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+28h]
      vmovups xmm1, xmmword ptr [rdi+48h]
      vmovups ymmword ptr [rbp+210h+obb.center], ymm0
      vmovsd  xmm0, qword ptr [rdi+58h]
      vmovsd  qword ptr [rbp+210h+obb.halfSize], xmm0
    }
    *(_QWORD *)&obb.halfSize.y = __PAIR64__(LODWORD(v29), HIDWORD(_RT0));
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+210h+obb.halfSize+4]
      vmovups xmmword ptr [rbp+210h+obb.yAxis+8], xmm1
      vmulss  xmm0, xmm0, dword ptr [rax+28h]
      vsubss  xmm1, xmm0, dword ptr [rdi+68h]
      vmulss  xmm0, xmm2, dword ptr [rax+2Ch]
      vmovss  xmm2, dword ptr [rbp+210h+obb.halfSize+8]
      vmovss  dword ptr [rbp+210h+obb.halfSize], xmm1
      vsubss  xmm1, xmm0, dword ptr [rdi+6Ch]
      vmulss  xmm0, xmm2, dword ptr [rax+30h]
      vmovss  dword ptr [rbp+210h+obb.halfSize+4], xmm1
      vsubss  xmm1, xmm0, dword ptr [rdi+70h]
      vmovss  dword ptr [rbp+210h+obb.halfSize+8], xmm1
    }
    R_ReflectionProbe_GetObbVertices(&obb, (vec3_t (*)[8])vertices);
    enabled = 0;
    v246 = 0;
    v249 = 0;
    v248 = 0;
    if ( options >= 2 )
      enabled = r_reflectionProbeVolumeShowFeather->current.enabled;
    if ( options >= 1 )
      v246 = r_reflectionProbeVolumeShowInfo->current.enabled;
    if ( options >= 4 )
    {
      v249 = r_reflectionProbeVolumeShowProbePosition->current.enabled;
      v248 = r_reflectionProbeVolumeShowLinesToProbe->current.enabled;
    }
    v42 = r_reflectionProbeVolumeShowProjectionBoxes;
    if ( !r_reflectionProbeVolumeShowProjectionBoxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+310h+var_50], xmm7
      vmovaps [rsp+310h+var_60], xmm8
      vmovaps [rsp+310h+var_70], xmm9
      vmovaps [rsp+310h+var_80], xmm10
      vmovaps [rsp+310h+var_90], xmm11
    }
    Dvar_CheckFrontendServerThread(v42);
    if ( v42->current.enabled )
    {
      __asm
      {
        vmovaps [rsp+310h+var_A0], xmm12
        vmovaps [rsp+310h+var_B0], xmm13
        vmovaps [rsp+310h+var_C0], xmm14
        vmovaps [rsp+310h+var_D0], xmm15
      }
      R_ReflectionProbe_GetObbVertices(&_RDI->volumeObb, (vec3_t (*)[8])v262);
      __asm { vmovss  xmm0, dword ptr [rdi+7Ch] }
      v44 = r_reflectionProbeExpandProjectionOverride;
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+88h]
        vmovss  xmm7, dword ptr [rdi+74h]
        vmovss  xmm9, dword ptr [rdi+78h]
        vmovss  xmm8, dword ptr [rdi+80h]
        vmovss  dword ptr [rbp+210h+var_278], xmm0
        vmovss  xmm0, dword ptr [rdi+84h]
        vmovss  dword ptr [rbp+210h+var_280], xmm0
        vmovss  dword ptr [rbp+210h+var_270], xmm1
      }
      if ( !r_reflectionProbeExpandProjectionOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      if ( v44->current.enabled )
      {
        _RBX = r_reflectionProbeExpandProjectionNeg;
        if ( !r_reflectionProbeExpandProjectionNeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  xmm7, dword ptr [rbx+28h]
          vmovss  xmm9, dword ptr [rbx+2Ch]
        }
        _RBX = r_reflectionProbeExpandProjectionPos;
        __asm { vmovss  dword ptr [rbp+210h+var_278], xmm0 }
        if ( !r_reflectionProbeExpandProjectionPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vmovss  xmm1, dword ptr [rbx+30h]
          vmovss  xmm8, dword ptr [rbx+28h]
          vmovss  dword ptr [rbp+210h+var_280], xmm0
          vmovss  dword ptr [rbp+210h+var_270], xmm1
        }
      }
      __asm
      {
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm7, dword ptr [rdi+34h]
        vmulss  xmm1, xmm7, dword ptr [rdi+38h]
        vmovss  xmm14, dword ptr [rbp+210h+var_200]
        vmovss  xmm15, dword ptr [rbp+210h+var_200+4]
        vxorps  xmm4, xmm0, xmm6
        vxorps  xmm3, xmm1, xmm6
        vmulss  xmm1, xmm7, dword ptr [rdi+3Ch]
        vxorps  xmm2, xmm1, xmm6
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+18h]
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+20h]
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm1
        vaddss  xmm1, xmm3, dword ptr [rbp+210h+var_200+34h]
        vaddss  xmm0, xmm14, xmm4
        vmovss  dword ptr [rbp+210h+obb.center], xmm0
        vaddss  xmm0, xmm15, xmm3
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+8]
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+1Ch]
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm0
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+30h]
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+38h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+48h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+4Ch]
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+50h]
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm0
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm1
      }
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
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rdi+34h]
        vmulss  xmm3, xmm8, dword ptr [rdi+38h]
        vmulss  xmm2, xmm8, dword ptr [rdi+3Ch]
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+24h]
        vmovss  xmm7, dword ptr [rbp+210h+var_200+0Ch]
        vmovss  xmm10, dword ptr [rbp+210h+var_200+10h]
        vmovss  xmm8, dword ptr [rbp+210h+var_200+14h]
        vmovss  xmm11, dword ptr [rbp+210h+var_200+3Ch]
        vmovss  xmm12, dword ptr [rbp+210h+var_200+40h]
        vmovss  xmm13, dword ptr [rbp+210h+var_200+44h]
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+2Ch]
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm1
        vaddss  xmm0, xmm7, xmm4
        vmovss  dword ptr [rbp+210h+obb.center], xmm0
        vaddss  xmm0, xmm10, xmm3
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm0
        vaddss  xmm0, xmm8, xmm2
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+28h]
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm0
        vaddss  xmm0, xmm11, xmm4
        vaddss  xmm1, xmm12, xmm3
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm0
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+54h]
        vaddss  xmm0, xmm13, xmm2
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+58h]
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+5Ch]
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm0
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm1
      }
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
      __asm
      {
        vmulss  xmm0, xmm9, dword ptr [rdi+40h]
        vxorps  xmm4, xmm0, xmm6
        vmulss  xmm0, xmm9, dword ptr [rdi+44h]
        vxorps  xmm3, xmm0, xmm6
        vmulss  xmm0, xmm9, dword ptr [rdi+48h]
        vmovss  xmm9, dword ptr [rbp+210h+var_200+8]
        vxorps  xmm2, xmm0, xmm6
        vaddss  xmm1, xmm4, xmm14
        vmovss  dword ptr [rbp+210h+obb.center], xmm1
        vaddss  xmm1, xmm3, xmm15
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm1
        vaddss  xmm1, xmm2, xmm9
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm1
        vaddss  xmm0, xmm7, xmm4
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm0
        vaddss  xmm1, xmm3, xmm10
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+30h]
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+34h]
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+38h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm0
        vaddss  xmm0, xmm11, xmm4
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm1
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm0
        vaddss  xmm1, xmm3, xmm12
        vaddss  xmm0, xmm2, xmm13
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm1
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm0
      }
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
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+210h+var_280]
        vmulss  xmm3, xmm1, dword ptr [rdi+44h]
        vmulss  xmm4, xmm1, dword ptr [rdi+40h]
        vmulss  xmm2, xmm1, dword ptr [rdi+48h]
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+18h]
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+24h]
        vmovss  dword ptr [rbp+210h+obb.center], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+1Ch]
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+20h]
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+28h]
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+2Ch]
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm0
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+48h]
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm1
        vaddss  xmm1, xmm3, dword ptr [rbp+210h+var_200+4Ch]
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+50h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+54h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+58h]
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+5Ch]
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm0
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm1
      }
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorGreen, depthTest);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+210h+var_278]
        vmulss  xmm0, xmm2, dword ptr [rdi+4Ch]
        vxorps  xmm4, xmm0, xmm6
        vmulss  xmm0, xmm2, dword ptr [rdi+50h]
        vxorps  xmm3, xmm0, xmm6
        vmulss  xmm0, xmm2, dword ptr [rdi+54h]
        vxorps  xmm2, xmm0, xmm6
        vaddss  xmm1, xmm14, xmm4
        vmovss  dword ptr [rbp+210h+obb.center], xmm1
        vaddss  xmm1, xmm15, xmm3
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm1
        vaddss  xmm1, xmm9, xmm2
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm1
        vaddss  xmm0, xmm7, xmm4
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm0
        vaddss  xmm1, xmm10, xmm3
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+18h]
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+1Ch]
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+20h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm0
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+24h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm1
        vaddss  xmm1, xmm3, dword ptr [rbp+210h+var_200+28h]
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+2Ch]
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm1
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm0
      }
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorBlue, depthTest);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+210h+var_270]
        vmulss  xmm4, xmm1, dword ptr [rdi+4Ch]
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+30h]
        vmulss  xmm3, xmm1, dword ptr [rdi+50h]
        vmulss  xmm2, xmm1, dword ptr [rdi+54h]
        vmovss  dword ptr [rbp+210h+obb.center], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+34h]
        vmovss  dword ptr [rbp+210h+obb.center+4], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+38h]
        vaddss  xmm1, xmm11, xmm4
        vmovss  dword ptr [rbp+210h+obb.center+8], xmm0
        vmovss  dword ptr [rbp+210h+obb.xAxis], xmm1
        vaddss  xmm0, xmm3, xmm12
        vmovss  dword ptr [rbp+210h+obb.xAxis+4], xmm0
        vaddss  xmm0, xmm4, dword ptr [rbp+210h+var_200+48h]
        vaddss  xmm1, xmm13, xmm2
        vmovss  dword ptr [rbp+210h+obb.xAxis+8], xmm1
        vaddss  xmm1, xmm3, dword ptr [rbp+210h+var_200+4Ch]
        vmovss  dword ptr [rbp+210h+obb.yAxis], xmm0
        vaddss  xmm0, xmm2, dword ptr [rbp+210h+var_200+50h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+4], xmm1
        vaddss  xmm1, xmm4, dword ptr [rbp+210h+var_200+54h]
        vmovss  dword ptr [rbp+210h+obb.yAxis+8], xmm0
        vaddss  xmm0, xmm3, dword ptr [rbp+210h+var_200+58h]
        vmovss  dword ptr [rbp+210h+obb.zAxis], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+210h+var_200+5Ch]
        vmovss  dword ptr [rbp+210h+obb.zAxis+4], xmm0
        vmovss  dword ptr [rbp+210h+obb.zAxis+8], xmm1
      }
      DebugRenderZQuadFromVertices(debugGlobalsEntry, (const vec3_t (*)[4])&obb, &colorBlue, depthTest);
      __asm
      {
        vmovaps xmm15, [rsp+310h+var_D0]
        vmovaps xmm14, [rsp+310h+var_C0]
        vmovaps xmm13, [rsp+310h+var_B0]
        vmovaps xmm12, [rsp+310h+var_A0]
      }
    }
    v171 = 8i64;
    if ( enabled )
    {
      DebugRenderBoxFromVertices(debugGlobalsEntry, (const vec3_t (*)[8])vertices, &colorBlue, depthTest);
      v172 = 0i64;
      v173 = 8i64;
      do
      {
        R_AddDebugLine(debugGlobalsEntry, &outVertices[v172], &vertices[v172], &colorBlue);
        ++v172;
        --v173;
      }
      while ( v173 );
      v27 = *(GfxReflectionProbe **)color.v;
    }
    if ( options >= 1 )
    {
      if ( !r_reflectionProbeVolumeHighlightNoProj->current.enabled || v247 )
      {
        if ( !r_reflectionProbeVolumeHighlightRelit->current.enabled || probeRelightingIndex == 0xFFFF )
          __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan }
        else
          __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
      }
      v175 = r_debugShaderLighting;
      __asm { vmovups xmmword ptr [rbp+210h+color], xmm0 }
      if ( !r_debugShaderLighting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v175);
      if ( v175->current.integer == 13 )
        R_DebugUniqueColorFromIndex(_RDI->probeImageIndex, (vec3_t *)&color);
      DebugRenderBoxFromVertices(debugGlobalsEntry, (const vec3_t (*)[8])outVertices, &color, depthTest);
    }
    if ( v246 )
    {
      v176 = (char *)&queryFormat.fmt + 3;
      _RAX = r_reflectionProbeVolumeScale;
      v178 = &colorMagenta;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+28h]
        vmovss  xmm1, dword ptr [rax+2Ch]
        vmulss  xmm10, xmm0, dword ptr [rdi+58h]
        vmovss  xmm0, dword ptr [rax+30h]
        vmulss  xmm6, xmm0, dword ptr [rdi+60h]
        vmulss  xmm11, xmm1, dword ptr [rdi+5Ch]
        vmulss  xmm0, xmm10, dword ptr [rdi+34h]
        vaddss  xmm2, xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm11, dword ptr [rdi+40h]
        vmulss  xmm0, xmm6, dword ptr [rdi+4Ch]
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm0, xmm10, dword ptr [rdi+38h]
        vaddss  xmm2, xmm0, dword ptr [rdi+2Ch]
        vmulss  xmm0, xmm6, dword ptr [rdi+50h]
        vmovss  dword ptr [rbp+210h+color], xmm1
        vmulss  xmm1, xmm11, dword ptr [rdi+44h]
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm0, xmm10, dword ptr [rdi+3Ch]
        vaddss  xmm2, xmm0, dword ptr [rdi+30h]
        vmulss  xmm0, xmm6, dword ptr [rdi+54h]
        vmovss  dword ptr [rbp+210h+color+4], xmm1
        vmulss  xmm1, xmm11, dword ptr [rdi+48h]
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm1, xmm3, xmm0
      }
      v203 = (char *)&queryFormat.fmt + 3;
      if ( probeRelightingIndex != 0xFFFF )
        v203 = " (Lit)";
      v252 = v203;
      v204 = (char *)&queryFormat.fmt + 3;
      if ( !v247 )
        v204 = " (NoProj)";
      v254 = v204;
      v205 = (char *)&queryFormat.fmt + 3;
      if ( (_RDI->flags & 4) != 0 )
        v205 = " (OverrideLG)";
      v206 = (char *)&queryFormat.fmt + 3;
      v256 = v205;
      if ( (_RDI->flags & 2) != 0 )
        v206 = " (Scripted)";
      __asm { vmovss  dword ptr [rbp+210h+color+8], xmm1 }
      v258 = v206;
      if ( R_ReflectionProbe_IsTransientStreamingEnabled() )
      {
        v207 = v27->probeImageIndirection >> 20;
        if ( (unsigned __int16)v207 >= frontEndDataOut->transientDrawContext.zoneCount && (_WORD)v207 != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 1665, ASSERT_TYPE_ASSERT, "(zoneIndex < frontEndDataOut->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex)", (const char *)&queryFormat, "zoneIndex < frontEndDataOut->transientDrawContext.zoneCount || zoneIndex == ReflectionProbeIndirection_SharedZoneIndex") )
          __debugbreak();
        v176 = "(exclusive)";
        if ( (_WORD)v207 == 4095 )
          v176 = "(shared)";
        if ( (_WORD)v207 == 4095 )
          v178 = &colorYellowHeat;
      }
      __asm
      {
        vmovss  xmm2, cs:__real@40000000
        vmovss  xmm7, dword ptr [rdi+70h]
        vmovss  xmm8, dword ptr [rdi+6Ch]
        vmovss  xmm3, dword ptr [rdi+64h]
        vmovss  xmm9, dword ptr [rdi+68h]
        vmulss  xmm0, xmm6, xmm2
        vcvtss2sd xmm6, xmm0, xmm0
        vmovsd  [rsp+310h+var_2C8], xmm6
        vmulss  xmm1, xmm11, xmm2
        vmulss  xmm0, xmm10, xmm2
        vcvtss2sd xmm5, xmm1, xmm1
        vmovsd  [rsp+310h+var_2D0], xmm5
        vcvtss2sd xmm4, xmm0, xmm0
        vmovsd  [rsp+310h+var_2D8], xmm4
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm7, xmm7, xmm7
        vmovsd  [rsp+310h+var_2E0], xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vmovsd  [rsp+310h+var_2E8], xmm8
        vmovq   r9, xmm3
        vmovsd  [rsp+310h+fmt], xmm9
      }
      v224 = j_va("Index:%u(%u) Pri:%.3f Feather:(%.0f,%.0f,%.0f) Vol:(%.0f,%.0f,%.0f) LOD:%u %s%s%s%s%s", _RDI->probeImageIndex, probeCacheSlot, _R9, fmt, v240, v241, v242, v243, v244, _RDI->lodLevel, v252, v254, v256, v258, v176);
      R_AddScaledDebugString(debugGlobalsEntry, camera, (const vec3_t *)&color, &colorCyan, v224);
      p_probePosition = &_RDI->probePosition;
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+64h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      LODWORD(fmta) = _RDI->lodLevel;
      v229 = j_va("Index:%u(%u) Pri:%.3f LOD:%u %s%s%s%s%s", _RDI->probeImageIndex, probeCacheSlot, _R9, fmta, v252, v254, v256, v258, v176);
      R_AddScaledDebugString(debugGlobalsEntry, camera, &_RDI->probePosition, v178, v229);
    }
    else
    {
      p_probePosition = &_RDI->probePosition;
    }
    __asm
    {
      vmovaps xmm11, [rsp+310h+var_90]
      vmovaps xmm10, [rsp+310h+var_80]
      vmovaps xmm9, [rsp+310h+var_70]
      vmovaps xmm8, [rsp+310h+var_60]
      vmovaps xmm7, [rsp+310h+var_50]
    }
    if ( v248 )
    {
      v235 = outVertices;
      do
      {
        R_AddDebugLine(debugGlobalsEntry, p_probePosition, v235++, &colorBlue);
        --v171;
      }
      while ( v171 );
    }
    if ( v249 )
    {
      __asm { vmovss  xmm2, cs:__real@42000000; size }
      R_AddDebugPoint(debugGlobalsEntry, p_probePosition, *(const float *)&_XMM2, &colorRed);
    }
  }
  __asm { vmovaps xmm6, [rsp+310h+var_40] }
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
  _RDI = context;
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+48h+outViewport.x], xmm0
    }
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+48h+outViewport.x], xmm0
      }
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1910)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+48h+outViewport.x], xmm0
      }
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(1911)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+48h+outViewport.x], xmm0
      }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rcx]
    vsubss  xmm0, xmm2, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rcx+8]
    vmovaps [rsp+48h+var_18], xmm7
    vmovaps [rsp+48h+var_28], xmm8
    vmovss  xmm8, dword ptr [r8+4]
    vmulss  xmm3, xmm1, xmm8
    vmovaps [rsp+48h+var_38], xmm9
    vmovss  xmm9, dword ptr [r8]
    vmulss  xmm1, xmm0, xmm9
    vsubss  xmm0, xmm2, dword ptr [rdx+8]
    vmulss  xmm2, xmm8, dword ptr [rcx+1Ch]
    vaddss  xmm4, xmm3, xmm1
    vmovaps [rsp+48h+var_48], xmm10
    vmovss  xmm10, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm10
    vmulss  xmm0, xmm9, dword ptr [rcx+18h]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, dword ptr [rcx+34h]
    vmulss  xmm2, xmm0, dword ptr [rax+2Ch]
    vmulss  xmm0, xmm9, dword ptr [rcx+0Ch]
    vaddss  xmm7, xmm4, xmm1
    vmulss  xmm1, xmm10, dword ptr [rcx+20h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm8, dword ptr [rcx+10h]
    vmulss  xmm5, xmm4, xmm2
    vandps  xmm5, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [rcx+14h]
    vmovss  xmm0, dword ptr [rcx+30h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rax+28h]
    vmulss  xmm0, xmm9, dword ptr [rcx+24h]
    vmovaps xmm9, [rsp+48h+var_38]
    vmulss  xmm1, xmm3, xmm2
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm2, xmm8, dword ptr [rcx+28h]
    vmovaps xmm8, [rsp+48h+var_28]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, dword ptr [rcx+38h]
    vmulss  xmm2, xmm0, dword ptr [rax+30h]
    vaddss  xmm5, xmm5, xmm1
    vmulss  xmm1, xmm10, dword ptr [rcx+2Ch]
    vmovaps xmm10, [rsp+48h+var_48]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm5, xmm1
    vsubss  xmm0, xmm7, xmm0
    vmovaps xmm7, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_ReflectionProbe_GetObbVertices
==============
*/
void R_ReflectionProbe_GetObbVertices(const GfxReflectionProbeObb *obb, vec3_t (*outVertices)[8])
{
  void *retaddr; 

  _R11 = &retaddr;
  _RAX = r_reflectionProbeVolumeScale;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+34h]
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmulss  xmm3, xmm1, dword ptr [rax+2Ch]
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm2, xmm0, dword ptr [rcx+30h]
    vmulss  xmm7, xmm2, dword ptr [rcx+0Ch]
    vmulss  xmm6, xmm2, dword ptr [rcx+14h]
    vmovss  xmm0, dword ptr [rcx+38h]
    vmulss  xmm4, xmm0, dword ptr [rax+30h]
    vmovss  xmm0, dword ptr [rcx]
    vmovaps xmmword ptr [r11-38h], xmm8
    vmulss  xmm8, xmm2, dword ptr [rcx+10h]
    vsubss  xmm2, xmm0, xmm7
    vmovaps xmmword ptr [r11-48h], xmm9
    vmulss  xmm9, xmm3, dword ptr [rcx+18h]
    vxorps  xmm5, xmm9, cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [r11-58h], xmm10
    vmulss  xmm10, xmm3, dword ptr [rcx+1Ch]
    vmovaps xmmword ptr [r11-68h], xmm11
    vmulss  xmm11, xmm3, dword ptr [rcx+20h]
    vmovaps xmmword ptr [r11-78h], xmm12
    vmovaps [rsp+98h+var_88], xmm13
    vmovaps [rsp+98h+var_98], xmm14
    vmulss  xmm13, xmm4, dword ptr [rcx+28h]
    vmulss  xmm14, xmm4, dword ptr [rcx+2Ch]
    vmulss  xmm12, xmm4, dword ptr [rcx+24h]
    vmovss  dword ptr [rdx], xmm2
    vmovss  xmm0, dword ptr [rcx+4]
    vxorps  xmm4, xmm12, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdx+8], xmm1
    vaddss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rdx], xmm3
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, xmm10
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm2, dword ptr [rdx+8]
    vsubss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rdx+8], xmm0
    vaddss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm2, xmm1, xmm13
    vmovss  dword ptr [rdx+4], xmm2
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rdx+8], xmm1
    vaddss  xmm0, xmm7, dword ptr [rcx]
    vmovss  dword ptr [rdx+0Ch], xmm0
    vaddss  xmm1, xmm8, dword ptr [rcx+4]
    vmovss  dword ptr [rdx+10h], xmm1
    vaddss  xmm0, xmm6, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+14h], xmm0
    vaddss  xmm0, xmm5, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rdx+0Ch], xmm0
    vmovss  xmm1, dword ptr [rdx+10h]
    vsubss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rdx+10h], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vsubss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rdx+14h], xmm1
    vaddss  xmm0, xmm4, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rdx+0Ch], xmm0
    vmovss  xmm1, dword ptr [rdx+10h]
    vsubss  xmm2, xmm1, xmm13
    vmovss  dword ptr [rdx+10h], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vsubss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rdx+14h], xmm1
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdx+18h], xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vsubss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rdx+1Ch], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vsubss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rdx+20h], xmm2
    vaddss  xmm0, xmm9, dword ptr [rdx+18h]
    vmovss  dword ptr [rdx+18h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rdx+1Ch]
    vmovss  dword ptr [rdx+1Ch], xmm1
    vaddss  xmm0, xmm11, dword ptr [rdx+20h]
    vmovss  dword ptr [rdx+20h], xmm0
    vaddss  xmm0, xmm4, dword ptr [rdx+18h]
    vmovss  dword ptr [rdx+18h], xmm0
    vmovss  xmm1, dword ptr [rdx+1Ch]
    vsubss  xmm2, xmm1, xmm13
    vmovss  dword ptr [rdx+1Ch], xmm2
    vmovss  xmm0, dword ptr [rdx+20h]
    vsubss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rdx+20h], xmm1
    vaddss  xmm0, xmm7, dword ptr [rcx]
    vmovss  dword ptr [rdx+24h], xmm0
    vaddss  xmm1, xmm8, dword ptr [rcx+4]
    vmovss  dword ptr [rdx+28h], xmm1
    vaddss  xmm0, xmm6, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+2Ch], xmm0
    vaddss  xmm0, xmm9, dword ptr [rdx+24h]
    vmovss  dword ptr [rdx+24h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rdx+28h]
    vmovss  dword ptr [rdx+28h], xmm1
    vaddss  xmm0, xmm11, dword ptr [rdx+2Ch]
    vmovss  dword ptr [rdx+2Ch], xmm0
    vmovss  xmm0, dword ptr [rdx+24h]
    vsubss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdx+24h], xmm1
    vmovss  xmm2, dword ptr [rdx+28h]
    vsubss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  xmm1, dword ptr [rdx+2Ch]
    vsubss  xmm2, xmm1, xmm14
    vmovss  dword ptr [rdx+2Ch], xmm2
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdx+30h], xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vsubss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rdx+34h], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vsubss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rdx+38h], xmm2
    vmovss  xmm0, dword ptr [rdx+30h]
    vsubss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rdx+30h], xmm1
    vmovss  xmm2, dword ptr [rdx+34h]
    vsubss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rdx+34h], xmm0
    vmovss  xmm1, dword ptr [rdx+38h]
    vsubss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rdx+38h], xmm2
    vaddss  xmm0, xmm12, dword ptr [rdx+30h]
    vmovss  dword ptr [rdx+30h], xmm0
    vaddss  xmm1, xmm13, dword ptr [rdx+34h]
    vmovss  dword ptr [rdx+34h], xmm1
    vaddss  xmm0, xmm14, dword ptr [rdx+38h]
    vmovss  dword ptr [rdx+38h], xmm0
    vaddss  xmm0, xmm7, dword ptr [rcx]
    vmovss  dword ptr [rdx+3Ch], xmm0
    vaddss  xmm1, xmm8, dword ptr [rcx+4]
    vmovss  dword ptr [rdx+40h], xmm1
    vaddss  xmm0, xmm6, dword ptr [rcx+8]
    vmovss  dword ptr [rdx+44h], xmm0
    vmovss  xmm0, dword ptr [rdx+3Ch]
    vsubss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rdx+3Ch], xmm1
    vmovss  xmm2, dword ptr [rdx+40h]
    vsubss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rdx+40h], xmm0
    vmovss  xmm1, dword ptr [rdx+44h]
    vsubss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rdx+44h], xmm2
    vaddss  xmm0, xmm12, dword ptr [rdx+3Ch]
    vmovss  dword ptr [rdx+3Ch], xmm0
    vaddss  xmm1, xmm13, dword ptr [rdx+40h]
    vmovss  dword ptr [rdx+40h], xmm1
    vaddss  xmm0, xmm14, dword ptr [rdx+44h]
    vmovss  dword ptr [rdx+44h], xmm0
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdx+48h], xmm1
    vmovss  xmm2, dword ptr [rcx+4]
    vsubss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rdx+4Ch], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vsubss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rdx+50h], xmm2
    vaddss  xmm0, xmm9, dword ptr [rdx+48h]
    vmovss  dword ptr [rdx+48h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rdx+4Ch]
    vmovss  dword ptr [rdx+4Ch], xmm1
    vaddss  xmm0, xmm11, dword ptr [rdx+50h]
    vmovss  dword ptr [rdx+50h], xmm0
    vaddss  xmm0, xmm12, dword ptr [rdx+48h]
    vmovss  dword ptr [rdx+48h], xmm0
    vaddss  xmm1, xmm13, dword ptr [rdx+4Ch]
    vmovss  dword ptr [rdx+4Ch], xmm1
    vaddss  xmm0, xmm14, dword ptr [rdx+50h]
    vmovss  dword ptr [rdx+50h], xmm0
    vaddss  xmm0, xmm7, dword ptr [rcx]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovss  dword ptr [rdx+54h], xmm0
    vaddss  xmm1, xmm8, dword ptr [rcx+4]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovss  dword ptr [rdx+58h], xmm1
    vaddss  xmm0, xmm6, dword ptr [rcx+8]
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovss  dword ptr [rdx+5Ch], xmm0
    vaddss  xmm0, xmm9, dword ptr [rdx+54h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovss  dword ptr [rdx+54h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rdx+58h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovss  dword ptr [rdx+58h], xmm1
    vaddss  xmm0, xmm11, dword ptr [rdx+5Ch]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovss  dword ptr [rdx+5Ch], xmm0
    vaddss  xmm0, xmm12, dword ptr [rdx+54h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovss  dword ptr [rdx+54h], xmm0
    vaddss  xmm1, xmm13, dword ptr [rdx+58h]
    vmovaps xmm13, [rsp+98h+var_88]
    vmovss  dword ptr [rdx+58h], xmm1
    vaddss  xmm0, xmm14, dword ptr [rdx+5Ch]
    vmovaps xmm14, [rsp+98h+var_98]
    vmovss  dword ptr [rdx+5Ch], xmm0
  }
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
  GfxTextureId v18; 
  unsigned int numElements; 
  unsigned int v20; 
  unsigned int maxLevelCount; 
  unsigned int v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  ID3D12Resource *basemap; 
  unsigned int v26; 
  char *v27; 
  unsigned int freeSlot; 
  unsigned int *v29; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  bitarray<6528> *p_reflectionProbeInstanceMask; 
  __int64 v35; 
  _BYTE debugInfo_8[64]; 
  GfxTexture_CreateParams v37; 
  unsigned __int64 v38; 
  Image_SetupParams params; 
  Image_SetupParams v40; 
  unsigned int v41; 
  __int64 v42; 

  if ( world->draw.reflectionProbeData.reflectionProbeArrayImage || world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron )
  {
    p_reflectionProbeInstanceMask = &s_gfxReflectionProbeStaticData.transientStreaming.reflectionProbeInstanceMask;
    v35 = 12i64;
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
      --v35;
    }
    while ( v35 );
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
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+1B0h+var_148+10h], xmm0
      }
      *(_DWORD *)&debugInfo_8[8] = 1;
      *(_QWORD *)&debugInfo_8[12] = 128i64;
      *(_QWORD *)debugInfo_8 = 0x10000000100i64;
      *(_DWORD *)&debugInfo_8[20] = 0x20000;
      *(_DWORD *)&debugInfo_8[24] = 42;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1B0h+debugInfo+8]
        vmovups ymmword ptr [rbp+0B0h+params.width], ymm0
      }
      *(_QWORD *)&debugInfo_8[32] = 0i64;
      *(_DWORD *)&debugInfo_8[56] = -1;
      __asm { vmovups ymm1, [rsp+1B0h+var_148+8] }
      params.maxLevelCount = 6;
      __asm { vmovups ymmword ptr [rbp+0B0h+params.customAllocFunc], ymm1 }
      Image_Setup(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron, &params);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0B0h+params.width]
        vmovups ymm1, ymmword ptr [rbp+0B0h+params.customAllocFunc]
        vmovups ymmword ptr [rbp+0B0h+var_120.params.width], ymm0
      }
      v37.params.format = GFX_PF_R32G32B32A32_UINT;
      v37.params.width /= 4;
      v37.params.height /= 4;
      v37.params.flags |= 0x800000u;
      __asm { vmovups ymmword ptr [rbp+0B0h+var_120.params.customAllocFunc], ymm1 }
      v37.pixels = R_Image_GetResidentPixels(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron);
      v37.name = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.name;
      v18 = R_Texture_Create(&v37);
      numElements = v37.params.numElements;
      v20 = 0;
      s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias = v18;
      v41 = 0;
      if ( v37.params.numElements )
      {
        maxLevelCount = v37.params.maxLevelCount;
        do
        {
          v22 = 0;
          if ( maxLevelCount )
          {
            v23 = 6i64 * v20;
            v42 = v23;
            v24 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
            do
            {
              __asm { vpxor   xmm0, xmm0, xmm0 }
              basemap = R_Texture_GetResident(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAlias)->basemap;
              *(_DWORD *)&debugInfo_8[36] = 0;
              *(_DWORD *)&debugInfo_8[12] = v20;
              *(_DWORD *)&debugInfo_8[16] = 1;
              v26 = v22 + v20 * v37.params.maxLevelCount;
              *(_QWORD *)debugInfo_8 = 0x500000003i64;
              __asm { vmovdqu xmmword ptr [rsp+1B0h+debugInfo+1Ch], xmm0 }
              *(_DWORD *)&debugInfo_8[8] = v22;
              v27 = (char *)s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronAliasRWView + 24 * v23 + 24 * v22;
              while ( 1 )
              {
                if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
                  __debugbreak();
                if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
                  break;
                Sys_Sleep(0);
              }
              freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
              v20 = v41;
              if ( !g_descriptorPools.shaderViewPool.freeSlot )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
                  __debugbreak();
                freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
              }
              v29 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
              g_descriptorPools.shaderViewPool.freeSlot = *v29;
              *v29 = 0;
              ++g_descriptorPools.shaderViewPool.handle.used;
              if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
                __debugbreak();
              _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
              m_pFunction = g_dx.d3d12device->m_pFunction;
              v38 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
              ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, _BYTE *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, debugInfo_8, v38);
              maxLevelCount = v37.params.maxLevelCount;
              ++v22;
              *((_DWORD *)v27 + 5) = v26;
              *((_DWORD *)v27 + 4) = freeSlot;
              v23 = v42;
              *(_QWORD *)v27 = basemap;
              *((_QWORD *)v27 + 1) = 0i64;
            }
            while ( v22 < maxLevelCount );
            numElements = v37.params.numElements;
          }
          v41 = ++v20;
        }
        while ( v20 < numElements );
      }
      memset_0(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases, 0, sizeof(s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedronCopyAliases));
      v12 = rgp.world;
    }
    if ( v12->draw.reflectionProbeData.reflectionProbeImages )
    {
      Image_AllocInPlace(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, "frameCacheImage", IMG_CATEGORY_AUTO_GENERATED, TS_FUNCTION);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+1B0h+var_148+10h], xmm0
      }
      *(_DWORD *)&debugInfo_8[8] = 1;
      *(_QWORD *)&debugInfo_8[12] = 85i64;
      *(_QWORD *)debugInfo_8 = 0x8000000080i64;
      *(_DWORD *)&debugInfo_8[20] = 163840;
      *(_DWORD *)&debugInfo_8[24] = 42;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1B0h+debugInfo+8]
        vmovups ymmword ptr [rbp+0B0h+var_80.width], ymm0
      }
      *(_QWORD *)&debugInfo_8[32] = 0i64;
      *(_DWORD *)&debugInfo_8[56] = -1;
      __asm { vmovups ymm1, [rsp+1B0h+var_148+8] }
      v40.maxLevelCount = 6;
      __asm { vmovups ymmword ptr [rbp+0B0h+var_80.customAllocFunc], ymm1 }
      Image_Setup(&s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage, &v40);
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

void __fastcall R_ReflectionProbe_OverlayCube(GfxCmdBufContext *gfxContext, const GfxImage *cubeMap, double probeIndex, double mipIndex, float x, float y, float w, float h)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v23; 
  GfxImage *blackImage; 
  GfxCmdBufInput *v25; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  GfxCmdBufContext v95[9]; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0E8h+var_88], xmm14
    vmovaps [rsp+0E8h+var_98], xmm15
    vmovaps xmm15, xmm2
    vmovaps xmm14, xmm3
  }
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = cubeMap;
  v23 = _RBX->source;
  blackImage = rgp.blackImage;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v25 = &v23->input;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovss  xmm12, [rsp+0E8h+arg_30]
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm11, [rsp+0E8h+arg_38]
    vmovss  xmm8, [rsp+0E8h+arg_20]
    vmovss  xmm10, [rsp+0E8h+arg_28]
    vmovss  xmm3, cs:__real@40000000
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovss  [rsp+0E8h+var_B8], xmm12
    vaddss  xmm13, xmm8, xmm12
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm10
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm15
  }
  v25->codeImages[5] = blackImage;
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+fmt], xmm13
    vmovups [rsp+0E8h+var_A8], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v77, v83, v89);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm3, cs:__real@3f800000
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovss  [rsp+0E8h+var_B8], xmm12
    vaddss  xmm7, xmm10, xmm11
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm15
    vmovss  dword ptr [rsp+0E8h+fmt], xmm8
    vmovups [rsp+0E8h+var_A8], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v78, v84, v90);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm3, cs:__real@40800000
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovss  [rsp+0E8h+var_B8], xmm12
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm15
    vmovss  dword ptr [rsp+0E8h+fmt], xmm13
    vmovups [rsp+0E8h+var_A8], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v79, v85, v91);
  __asm
  {
    vmulss  xmm1, xmm12, cs:__real@40000000
    vmovups xmm0, xmmword ptr [rbx]
    vaddss  xmm2, xmm1, xmm8
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovss  [rsp+0E8h+var_B8], xmm12
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
    vmovss  dword ptr [rsp+0E8h+fmt], xmm2
    vmovaps xmm2, xmm14
    vxorps  xmm3, xmm3, xmm3
    vmovaps xmm1, xmm15
    vmovups [rsp+0E8h+var_A8], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v80, v86, v92);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmulss  xmm1, xmm12, cs:__real@40400000
    vmovss  xmm3, cs:__real@40a00000
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovups [rsp+0E8h+var_A8], xmm0
    vaddss  xmm0, xmm1, xmm8
    vmovss  [rsp+0E8h+var_B8], xmm12
    vmovaps xmm1, xmm15
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
    vmovaps xmm2, xmm14
    vmovss  dword ptr [rsp+0E8h+fmt], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v81, v87, v93);
  __asm
  {
    vmulss  xmm1, xmm11, cs:__real@40000000
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm3, cs:__real@40400000
    vaddss  xmm2, xmm1, xmm10
    vmovss  [rsp+0E8h+var_B0], xmm11
    vmovss  [rsp+0E8h+var_B8], xmm12
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm2
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm15
    vmovss  dword ptr [rsp+0E8h+fmt], xmm13
    vmovups [rsp+0E8h+var_A8], xmm0
  }
  R_ReflectionProbe_OverlayCubeFace(v95, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v82, v88, v94);
  _R11 = &v96;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
}

/*
==============
R_ReflectionProbe_OverlayCubeFace
==============
*/

void __fastcall R_ReflectionProbe_OverlayCubeFace(GfxCmdBufContext *gfxContext, double probeIndex, double mipIndex, double faceIndex, float x, float y, float w, float h)
{
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  GfxCmdBufContext v24; 

  _RAX = gfxContext->source;
  _RBX = gfxContext;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovss  dword ptr [rax+1068h], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rax+1060h], xmm3
    vmovss  xmm3, [rsp+78h+arg_28]
    vmovss  dword ptr [rax+1064h], xmm2
    vmovss  xmm2, [rsp+78h+arg_20]
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  xmm0, [rsp+78h+arg_38]
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  xmm1, [rsp+78h+arg_30]
  }
  _RAX->input.consts[150].v[3] = 1.0;
  ++_RAX->constVersions[150];
  __asm
  {
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm1
  }
  RB_DrawStretchPic(&v24, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, v18, v19, v20, v21, v22, v23, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
  }
  RB_EndTessSurfaceInternal(&v24, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
}

/*
==============
R_ReflectionProbe_OverlayCubeGBuffer
==============
*/

void __fastcall R_ReflectionProbe_OverlayCubeGBuffer(GfxCmdBufContext *gfxContext, const GfxImage *gbuffer, double x, double y, float w, float h)
{
  GfxCmdBufSourceState *source; 
  GfxImage *blackImageCube; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v22; 
  GfxCmdBufInput *v23; 
  GfxCmdBufSourceState *v24; 
  GfxCmdBufSourceState *v34; 
  GfxCmdBufSourceState *v40; 
  GfxCmdBufSourceState *v45; 
  GfxCmdBufSourceState *v51; 
  GfxCmdBufSourceState *v57; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  GfxCmdBufContext v108[9]; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  blackImageCube = rgp.blackImageCube;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rsp+70h], xmm14
    vmovaps xmm14, xmm3
    vmovaps xmm13, xmm2
  }
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = blackImageCube;
  v22 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v23 = &v22->input;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v24 = _RBX->source;
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm11, [rbp+47h+arg_20]
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  xmm8, [rbp+47h+arg_28]
    vmovss  [rsp+110h+var_C8], xmm10
  }
  v23->codeImages[5] = gbuffer;
  __asm { vmovss  [rsp+110h+var_D0], xmm10 }
  v24->input.consts[150].v[0] = -1.0;
  v24->input.consts[150].v[1] = 0.0;
  v24->input.consts[150].v[2] = 2.0;
  v24->input.consts[150].v[3] = 1.0;
  ++v24->constVersions[150];
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vaddss  xmm12, xmm13, xmm11
    vmovss  [rsp+110h+var_E8], xmm8
    vmovaps xmm3, xmm14
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v78, v84, v90, v96, v102, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v34 = _RBX->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+110h+var_C8], xmm10
    vmovss  [rsp+110h+var_D0], xmm10
  }
  v34->input.consts[150].v[0] = -1.0;
  v34->input.consts[150].v[1] = 0.0;
  v34->input.consts[150].v[2] = 1.0;
  v34->input.consts[150].v[3] = 1.0;
  ++v34->constVersions[150];
  __asm
  {
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vaddss  xmm7, xmm14, xmm8
    vmovss  [rsp+110h+var_E8], xmm8
    vmovaps xmm3, xmm7
    vmovaps xmm2, xmm13
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v79, v85, v91, v97, v103, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v40 = _RBX->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+110h+var_C8], xmm10
    vmovss  [rsp+110h+var_D0], xmm10
  }
  v40->input.consts[150].v[0] = -1.0;
  v40->input.consts[150].v[1] = 0.0;
  v40->input.consts[150].v[2] = 4.0;
  v40->input.consts[150].v[3] = 1.0;
  ++v40->constVersions[150];
  __asm
  {
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vmovss  [rsp+110h+var_E8], xmm8
    vmovaps xmm3, xmm7
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v80, v86, v92, v98, v104, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v45 = _RBX->source;
  __asm
  {
    vmulss  xmm1, xmm11, cs:__real@40000000
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+110h+var_C8], xmm10
    vmovss  [rsp+110h+var_D0], xmm10
  }
  v45->input.consts[150].v[0] = -1.0;
  *(_QWORD *)&v45->input.consts[150].xyz.y = 0i64;
  v45->input.consts[150].v[3] = 1.0;
  ++v45->constVersions[150];
  __asm
  {
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vmovss  [rsp+110h+var_E8], xmm8
    vaddss  xmm2, xmm1, xmm13
    vmovaps xmm3, xmm7
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v81, v87, v93, v99, v105, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v51 = _RBX->source;
  __asm
  {
    vmulss  xmm1, xmm11, cs:__real@40400000
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+110h+var_C8], xmm10
    vmovss  [rsp+110h+var_D0], xmm10
  }
  v51->input.consts[150].v[0] = -1.0;
  v51->input.consts[150].v[1] = 0.0;
  v51->input.consts[150].v[2] = 5.0;
  v51->input.consts[150].v[3] = 1.0;
  ++v51->constVersions[150];
  __asm
  {
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vmovss  [rsp+110h+var_E8], xmm8
    vaddss  xmm2, xmm1, xmm13
    vmovaps xmm3, xmm7
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v82, v88, v94, v100, v106, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  v57 = _RBX->source;
  __asm
  {
    vmulss  xmm1, xmm8, cs:__real@40000000
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+110h+var_C8], xmm10
    vmovss  [rsp+110h+var_D0], xmm10
  }
  v57->input.consts[150].v[0] = -1.0;
  v57->input.consts[150].v[1] = 0.0;
  v57->input.consts[150].v[2] = 3.0;
  v57->input.consts[150].v[3] = 1.0;
  ++v57->constVersions[150];
  __asm
  {
    vmovss  [rsp+110h+var_D8], xmm9
    vmovss  [rsp+110h+var_E0], xmm9
    vmovss  [rsp+110h+var_E8], xmm8
    vaddss  xmm3, xmm1, xmm14
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+110h+fmt], xmm11
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_DrawStretchPic(v108, rgp.reflectionProbeDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v83, v89, v95, v101, v107, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+47h+var_B0], xmm0
  }
  RB_EndTessSurfaceInternal(v108, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp(2025)");
  _R11 = &v109;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
}

/*
==============
R_ReflectionProbe_ProcessProbe
==============
*/
__int64 R_ReflectionProbe_ProcessProbe(unsigned int frameIndex, const bool isWorldInstance, const unsigned int reflectionProbeInstanceIndex, const GfxWorldReflectionProbeData *reflectionProbeData, const vec3_t *cameraAxis, const unsigned int maxVisibleInstances, unsigned int *iovisibleProbeInstanceCount, ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstances, GfxReflectionProbeStats *stats)
{
  GfxReflectionProbeInstance *Instance; 
  GfxReflectionProbeInstance *v15; 
  int integer; 
  __int64 v21; 
  unsigned __int8 lodLevel; 
  int v24; 
  unsigned __int8 v26; 
  __int64 result; 
  int v33; 
  int v34; 
  vec3_t cameraPos; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  _RDI = outVisibleProbeInstances;
  Instance = R_ReflectionProbe_GetInstance(isWorldInstance, reflectionProbeInstanceIndex);
  v15 = Instance;
  if ( (Instance->flags & 0x80u) != 0 )
    goto LABEL_21;
  _RCX = r_reflectionProbeVolumeScale;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rcx+28h]
    vmulss  xmm1, xmm0, dword ptr [rax+58h]
    vcomiss xmm1, xmm6
  }
  if ( !Instance->flags )
    goto LABEL_21;
  integer = r_reflectionProbeLODMask->current.integer;
  if ( _bittest(&integer, Instance->lodLevel) && R_ReflectionProbe_IsProbeStreamedIn(reflectionProbeData, g_worldDraw->reflectionProbeData.reflectionProbes[Instance->probeImageIndex].probeImageIndirection >> 20, g_worldDraw->reflectionProbeData.reflectionProbes[Instance->probeImageIndex].probeImageIndirection) )
  {
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+cameraPos], xmm6
      vmovss  dword ptr [rsp+0A8h+cameraPos+4], xmm6
      vmovss  dword ptr [rsp+0A8h+cameraPos+8], xmm6
    }
    *(float *)&_XMM0 = R_ReflectionProbe_GetObbDepth(&v15->volumeObb, &cameraPos, cameraAxis);
    v21 = (int)*iovisibleProbeInstanceCount;
    lodLevel = v15->lodLevel;
    __asm { vmovaps xmm1, xmm0 }
    if ( (int)v21 >= 2 )
    {
      v24 = v21 - 1;
      _R8 = &outVisibleProbeInstances[v21 - 1].probeInstanceDepth;
      do
      {
        v26 = *((_BYTE *)_R8 - 3);
        if ( v26 >= lodLevel )
        {
          if ( v26 != lodLevel )
            break;
          __asm { vcomiss xmm1, dword ptr [r8] }
          if ( v26 >= lodLevel )
            break;
        }
        if ( (int)v21 < (int)maxVisibleInstances )
        {
          _RAX = &outVisibleProbeInstances[v24];
          _RCX = 2i64 * (int)v21;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rdi+rcx*8], xmm0
          }
        }
        LODWORD(v21) = v21 - 1;
        --v24;
        _R8 -= 4;
      }
      while ( (int)v21 >= 2 );
    }
    if ( (int)v21 < (int)maxVisibleInstances )
    {
      _RCX = (int)v21;
      __asm { vmovss  dword ptr [rdi+rcx*8+8], xmm1 }
      outVisibleProbeInstances[_RCX].probeInstanceIndex = reflectionProbeInstanceIndex;
      outVisibleProbeInstances[_RCX].levelOfDetail = lodLevel;
      outVisibleProbeInstances[_RCX].isWorldInstance = isWorldInstance;
      outVisibleProbeInstances[_RCX].priority = v15->priority;
    }
    if ( *iovisibleProbeInstanceCount < maxVisibleInstances )
      ++*iovisibleProbeInstanceCount;
    if ( lodLevel >= 3u )
    {
      v34 = 3;
      v33 = lodLevel;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe.cpp", 2736, ASSERT_TYPE_ASSERT, "(unsigned)( lodLevel ) < (unsigned)( ( sizeof( *array_counter( GfxReflectionProbeStats::perLodCount ) ) + 0 ) )", "lodLevel doesn't index ARRAY_COUNT( GfxReflectionProbeStats::perLodCount )\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    ++stats->perLodCount[lodLevel];
    result = 1i64;
  }
  else
  {
LABEL_21:
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  return result;
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
  const GfxBackEndData *v11; 
  GfxReflectionProbeFrameData *v14; 
  int integer; 
  bool v18; 
  bool v19; 
  GfxReflectionProbeTransientData *v21; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  int v23; 
  unsigned int v24; 
  DebugGlobals *p_debugGlobals; 
  __int64 v26; 
  int i; 
  GfxReflectionProbeInstance *Instance; 
  unsigned __int64 probeInstanceIndex; 
  const GfxReflectionProbeInstance *v30; 
  unsigned __int16 v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int v34; 
  DebugGlobals *v35; 
  unsigned int v36; 
  char v37; 
  GfxReflectionProbeInstance *v38; 
  const dvar_t *v48; 
  char *fmt; 
  unsigned int *outVisibleProbeInstanceCount; 
  unsigned int *outVisibleProbeInstanceCounta; 
  unsigned int *outVisibleProbeInstanceCountb; 
  ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstances; 
  ReflectionProbeProcessViewInstanceInfo *outVisibleProbeInstancesa; 
  GfxReflectionProbeRemapState *remap; 
  __int64 v56; 
  unsigned int visibleProbeInstanceCount[2]; 
  const GfxViewInfo *v58; 
  GfxReflectionProbeFrameData *v59; 
  vec3_t cameraAxis; 
  GfxReflectionProbeRemapState v61; 
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
  _RSI = *(const GfxViewInfo **)cmd;
  v11 = (const GfxBackEndData *)*((_QWORD *)cmd + 1);
  v58 = _RSI;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+148h]
    vaddss  xmm1, xmm0, cs:__real@461c4000; farPlaneDist
  }
  v14 = &s_gfxReflectionProbeStaticData.bufferArray[v11->reflectionProbeFrameIndex];
  v59 = v14;
  GetReflectionGridFrustumVertices((const GfxViewParms *)_RSI, *(double *)&_XMM1, outVertices);
  GetTriangleAxis(outVertices, &outVertices[2], &outVertices[3], outAxis);
  GetTriangleAxis(&outVertices[1], &outVertices[3], &outVertices[7], &outAxis[1]);
  GetTriangleAxis(&outVertices[2], &outVertices[6], &outVertices[7], &outAxis[2]);
  GetTriangleAxis(&outVertices[1], &outVertices[5], &outVertices[4], &outAxis[3]);
  GetTriangleAxis(outVertices, &outVertices[4], &outVertices[6], &outAxis[4]);
  integer = 96;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10Ch]
    vmovss  xmm1, dword ptr [rsi+110h]
  }
  v18 = r_reflectionProbeMaxPerView->current.integer < 0x60u;
  __asm { vmovss  dword ptr [rsp+0B60h+cameraAxis], xmm0 }
  if ( v18 )
    integer = r_reflectionProbeMaxPerView->current.integer;
  v19 = g_worldDraw->reflectionProbeData.reflectionProbeImages == NULL;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+114h]
    vmovss  dword ptr [rsp+0B60h+cameraAxis+4], xmm1
    vmovss  dword ptr [rsp+0B60h+cameraAxis+8], xmm0
  }
  if ( !v19 || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (v21 = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && v21->exclusiveProbeCount )
  {
    if ( rgp.world && (rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage_octahedron || rgp.world->draw.reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount) && (r_reflectionProbeOctahedron->current.integer || !rgp.world->draw.reflectionProbeData.reflectionProbeArrayImage && !rgp.world->draw.reflectionProbeData.reflectionProbeImages) )
      v23 = 128;
    else
      v23 = 85;
    if ( integer < v23 )
      v23 = integer;
    integer = v23;
  }
  visibleProbeInstanceCount[1] = 0;
  R_ReflectionProbe_BuildInstanceListForView((const vec3_t (*)[8])outVertices, (const vec3_t (*)[5])outAxis, &cameraAxis, v11, integer, &visibleProbeInstanceCount[1], visibleProbeInstances, &v61, &reflectionVisibleInstances);
  v24 = visibleProbeInstanceCount[1];
  R_ReflectionProbe_BuildInstanceDataFromInstanceList(_RSI, v11, (const GfxViewParms *)_RSI, visibleProbeInstanceCount[1], visibleProbeInstances, v14, &v61);
  R_ReflectionProbeRelighting_UpdateProbeRadiometricScale(v11);
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  *(_QWORD *)cameraAxis.v = &frontEndDataOut->debugGlobals;
  LOBYTE(visibleProbeInstanceCount[0]) = r_reflectionProbeDebugDepthTest->current.enabled;
  if ( r_reflectionProbeShowVolumes && r_reflectionProbeShowVolumes->current.integer > 0 )
  {
    v26 = 0i64;
    for ( i = r_reflectionProbeShowVolumeLODSelect->current.integer; (unsigned int)v26 < v24; v26 = (unsigned int)(v26 + 1) )
    {
      Instance = R_ReflectionProbe_GetInstance(visibleProbeInstances[(unsigned int)v26].isWorldInstance, visibleProbeInstances[(unsigned int)v26].probeInstanceIndex);
      probeInstanceIndex = visibleProbeInstances[(unsigned int)v26].probeInstanceIndex;
      v30 = Instance;
      if ( (unsigned int)probeInstanceIndex >= 0x1980 )
      {
        LODWORD(v56) = 6528;
        LODWORD(remap) = visibleProbeInstances[(unsigned int)v26].probeInstanceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", remap, v56) )
          __debugbreak();
      }
      reflectionVisibleInstances.array[probeInstanceIndex >> 5] &= ~(0x80000000 >> (probeInstanceIndex & 0x1F));
      if ( i == -1 || v30->lodLevel == i )
      {
        if ( R_ReflectionProbe_IsTransientStreamingEnabled() )
          v31 = v61.visibleInstanceToCacheSlot[v26];
        else
          v31 = 0;
        R_ReflectionProbe_DebugRenderProbeVolume(*(DebugGlobals **)cameraAxis.v, &_RSI->viewParmsSet.frames[0].viewParms.camera, r_reflectionProbeShowVolumes->current.integer, v30, v11->reflectionProbeFrameIndex, v31, visibleProbeInstanceCount[0]);
      }
    }
    v32 = reflectionVisibleInstances.array[0];
    LODWORD(v33) = 0;
    v34 = visibleProbeInstanceCount[1];
    v35 = *(DebugGlobals **)cameraAxis.v;
    while ( 1 )
    {
      if ( v32 )
      {
LABEL_55:
        v36 = __lzcnt(v32);
        v34 = v36 + 32 * v33;
        if ( v36 >= 0x20 )
        {
          LODWORD(outVisibleProbeInstancesa) = 32;
          LODWORD(outVisibleProbeInstanceCounta) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outVisibleProbeInstanceCounta, outVisibleProbeInstancesa) )
            __debugbreak();
        }
        if ( (v32 & (0x80000000 >> v36)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v32 &= ~(0x80000000 >> v36);
        v37 = 1;
      }
      else
      {
        while ( 1 )
        {
          v33 = (unsigned int)(v33 + 1);
          if ( (unsigned int)v33 >= 0xCC )
            break;
          v32 = reflectionVisibleInstances.array[v33];
          if ( v32 )
            goto LABEL_55;
        }
        v37 = 0;
      }
      if ( !v37 )
        break;
      v38 = &g_worldDraw->reflectionProbeData.reflectionProbeInstances[v34];
      if ( i == -1 || v38->lodLevel == i )
      {
        R_ReflectionProbe_GetObbVertices(&v38->volumeObb, (vec3_t (*)[8])outVertices);
        DebugRenderBoxFromVertices(v35, (const vec3_t (*)[8])outVertices, &colorOrangeHeat, visibleProbeInstanceCount[0]);
      }
    }
    v24 = visibleProbeInstanceCount[1];
    p_debugGlobals = *(DebugGlobals **)cameraAxis.v;
    _RSI = v58;
    v14 = v59;
  }
  if ( r_reflectionProbeShowDefaultProbe && r_reflectionProbeShowDefaultProbe->current.enabled && g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount )
  {
    _RBX = g_worldDraw->reflectionProbeData.reflectionProbeInstances;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  xmm3, dword ptr [rbx+8]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0B60h+outVisibleProbeInstanceCount], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+0B60h+fmt], xmm1
    }
    Com_sprintf((char *)outVertices, 0x80ui64, "Default Probe(%.0f, %.0f, %.0f)", *(double *)&_XMM3, *(double *)&fmt, *(double *)&outVisibleProbeInstanceCountb);
    R_AddDebugLocationFinder(p_debugGlobals, &_RSI->viewParmsSet.frames[0].viewParms.camera, &_RBX->probePosition, &colorYellowHeat, (const char *)outVertices);
    __asm { vmovss  xmm2, cs:__real@41800000; size }
    R_AddDebugStar(p_debugGlobals, &_RBX->probePosition, *(const float *)&_XMM2, &colorYellowHeat);
  }
  v48 = scr_debug_reflection;
  v14->visibleReflectionProbeCount = 0;
  if ( (unsigned int)(v48->current.integer - 2) <= 1 && v24 )
  {
    v14->visibleReflectionProbeCount = v24;
    memcpy_0(v14->visibleReflectionProbeInstances, visibleProbeInstances, 16i64 * v24);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_ReflectionProbe_RegisterDvars
==============
*/

void __fastcall R_ReflectionProbe_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v18; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float v39; 

  __asm
  {
    vmovss  xmm1, cs:__real@38d1b717; value
    vmovaps [rsp+88h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps xmm3, xmm6; max
    vmovaps [rsp+88h+var_38], xmm8
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm8, xmm8, xmm8
  }
  r_reflectionProbeIrradianceMin = Dvar_RegisterFloat("MLSRLRMOLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The minimum Irradiance allowed in reflection probe normalization.\n");
  r_reflectionProbeDebugMode = Dvar_RegisterEnum("QQSNSLKQR", reflectionProbeDebugModeNames, 0, 0, "Reflection probe debug mode.");
  r_reflectionProbeShowVolumes = Dvar_RegisterInt("NSTOLRNSPN", 0, 0, 4, 0, "Show the reflection probe volumes (1) show feather (2) show additional information (3)");
  __asm { vmovss  xmm0, cs:__real@40000000 }
  r_reflectionProbeDebugDepthTest = Dvar_RegisterBool("NMLOTSNNLT", 0, 0, "Controls depth test of debug draws");
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm8
    vmovss  dword ptr [rsp+88h+description], xmm0
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+88h+flags], xmm8
  }
  r_reflectionProbeVolumeScale = Dvar_RegisterVec3("MTTMTTNQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, v39, 0, "Debug volume scale for helping diagnose incorrectly placed or sized volumes");
  scr_debug_reflection = Dvar_RegisterInt("scr_debug_reflection", 0, 0, 3, 0, "Show the reflection probes");
  __asm
  {
    vmovss  xmm3, cs:__real@44bb8000; max
    vmovss  xmm2, cs:__real@42200000; min
    vmovss  xmm1, cs:__real@42c80000; value
  }
  scr_debug_reflection_info = Dvar_RegisterBool("scr_debug_reflection_info", 0, 0, "Show the reflection probes info");
  v18 = Dvar_RegisterFloat("MQPRQRNNSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance of debug probe from camera");
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; value
    vmovss  xmm3, cs:__real@47c35000; max
  }
  r_reflectionProbeDebugCameraDistance = v18;
  __asm { vmovaps xmm2, xmm1; min }
  r_reflectionProbeVolumeDrawDistance = Dvar_RegisterFloat("NTSNQNKRKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Draw distance for reflection probe volumes. -1.0 for no far clip");
  r_reflectionProbeVolumeShowProjectionBoxes = Dvar_RegisterBool("NLRKNOLRPM", 0, 0, "Show reflection probe volume projection boxes");
  r_reflectionProbeVolumeShowFeather = Dvar_RegisterBool("MTMKROMRRP", 1, 0, "Show reflection probe volume feather");
  r_reflectionProbeVolumeShowInfo = Dvar_RegisterBool("NKKQNQNNOS", 1, 0, "Show reflection probe volume info text");
  r_reflectionProbeVolumeShowLinesToProbe = Dvar_RegisterBool("OMRQPQNTOQ", 1, 0, "Show reflection probe volume lines to probes");
  r_reflectionProbeVolumeShowProbePosition = Dvar_RegisterBool("MORNTOKMTN", 1, 0, "Show reflection probe volume probe positions");
  r_reflectionProbeVolumeHighlightNoProj = Dvar_RegisterBool("MQSPSNKPLP", 1, 0, "Color volumes with no projection green");
  r_reflectionProbeVolumeHighlightRelit = Dvar_RegisterBool("OKOLOKSLTP", 1, 0, "Color volumes with relightable probes red");
  __asm
  {
    vmovss  xmm7, cs:__real@47fa0000
    vmovss  xmm6, cs:__real@c7fa0000
  }
  r_reflectionProbeExpandProjectionOverride = Dvar_RegisterBool("MKKKONQNOM", 0, 0, "Override the expandProjectionPos and expandProjectionNeg reflection_volume KVPs");
  __asm
  {
    vmovss  dword ptr [rsp+88h+description], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+88h+flags], xmm6
  }
  r_reflectionProbeExpandProjectionNeg = Dvar_RegisterVec3("OKMPSLMQNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, 0, "Value to override reflection_volume expandProjectionNeg with when r_reflectionProbeExpandProjectionOverride is 1");
  __asm
  {
    vmovss  dword ptr [rsp+88h+description], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+88h+flags], xmm6
  }
  r_reflectionProbeExpandProjectionPos = Dvar_RegisterVec3("OKPPNPNNPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptionb, 0, "Value to override reflection_volume expandProjectionPos with when r_reflectionProbeExpandProjectionOverride is 1");
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
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
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
  __int64 reflectionProbeFrameIndex; 
  GfxWorldDraw *v9; 
  unsigned int CardMemoryAmount; 
  __int64 v11; 
  GfxImage *reflectionProbeArrayImage; 
  GfxReflectionProbeStats *v16; 
  GfxReflectionProbeTransientData *reflectionProbes; 
  GfxPixelFormat format; 
  int v21; 
  int v22; 
  GfxFont *v23; 
  float x; 
  float y; 
  float xScale; 
  float yScale; 
  float rotation; 
  unsigned int v33; 
  __m256i v34; 
  __m256i v35; 
  Image_SetupParams params; 
  char _Buffer[1024]; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( r_reflectionProbeShowStats->current.enabled )
  {
    __asm { vmovaps xmmword ptr [r11-28h], xmm6 }
    Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_REFLECTION_PROBE_BUFFER);
    reflectionProbeFrameIndex = backEndData->reflectionProbeFrameIndex;
    v9 = g_worldDraw;
    CardMemoryAmount = 0;
    v11 = reflectionProbeFrameIndex;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rsi
      vmulss  xmm6, xmm0, cs:__real@3e800000
    }
    reflectionProbeArrayImage = g_worldDraw->reflectionProbeData.reflectionProbeArrayImage;
    v16 = &s_gfxReflectionProbeStaticData.stats[reflectionProbeFrameIndex];
    if ( g_worldDraw->reflectionProbeData.reflectionProbeImages || g_worldDraw->reflectionProbeData.reflectionProbeImages_octahedron || (reflectionProbes = g_worldDraw->transientZones[0]->reflectionProbes) != NULL && reflectionProbes->exclusiveProbeCount )
    {
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+430h+var_490+8], xmm0
      }
      v35.m256i_i64[0] = 0i64;
      v35.m256i_i32[6] = -1;
      __asm
      {
        vmovups ymm1, [rbp+430h+var_490]
        vmovups ymmword ptr [rbp+430h+params.customAllocFunc], ymm1
      }
      v34.m256i_i32[2] = 1;
      *(__int64 *)((char *)&v34.m256i_i64[1] + 4) = 1i64;
      if ( s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.textureId )
      {
        v34.m256i_i32[0] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width;
        v34.m256i_i32[1] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.width;
        v34.m256i_i32[5] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.flags | 0x8000;
        format = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImageOctahedron.format;
      }
      else
      {
        v34.m256i_i32[0] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width;
        v34.m256i_i32[1] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.width;
        v34.m256i_i32[5] = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.flags | 0x8000;
        format = s_gfxReflectionProbeStaticData.transientStreaming.frameCacheImage.format;
      }
      v34.m256i_i32[6] = format;
      __asm
      {
        vmovups ymm0, [rbp+430h+var_4B0]
        vmovups ymmword ptr [rbp+430h+params.width], ymm0
      }
      CardMemoryAmount = Image_GetCardMemoryAmount(&params);
    }
    v21 = 256;
    v33 = (CardMemoryAmount * s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[v11].requestCount) >> 10;
    if ( !reflectionProbeArrayImage )
      v21 = 6528;
    v22 = 255;
    if ( !reflectionProbeArrayImage )
      v22 = 6527;
    j_snprintf(_Buffer, 0x400ui64, "Reflection probe:\nMap probe count: %u / %u\nMap probe instance count: %u / %u\nShould draw transient count: %u\nMasked out probe instance count: %u\nFrustum probe instance count: %u (%u) / %u\nFrustum probe instance count LOD 0: %u\nFrustum probe instance count LOD 1: %u\nFrustum probe instance count LOD 2: %u\nNum probes updated in cache: %u / %zu, %u [kB]\n", v9->reflectionProbeData.reflectionProbeCount, v22, v9->reflectionProbeData.reflectionProbeInstanceCount, v21, v16->shouldDrawTransientCount, v16->maskedOutInstanceCount, v16->frustumProbeInstanceCount, v16->frustumRequestedProbeInstanceCount, 96, v16->perLodCount[0], v16->perLodCount[1], v16->perLodCount[2], s_gfxReflectionProbeStaticData.transientStreaming.frameCopyQueue[v11].requestCount, 0x60ui64, v33);
    v23 = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+540h+rotation], xmm0
      vmovss  xmm0, cs:__real@42200000
      vmovss  [rsp+540h+yScale], xmm1
      vmovss  [rsp+540h+xScale], xmm1
      vmovss  [rsp+540h+y], xmm0
      vmovss  [rsp+540h+x], xmm6
    }
    R_AddCmdDrawText(_Buffer, 0x7FFFFFFF, v23, 16, x, y, xScale, yScale, rotation, &colorOrange);
    __asm { vmovaps xmm6, xmmword ptr [rsp+540h+var_28+8] }
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

