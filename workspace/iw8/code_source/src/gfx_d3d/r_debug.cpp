/*
==============
R_InitDebugXmodelStats
==============
*/

void __fastcall R_InitDebugXmodelStats(const XModel *xmodel, unsigned int type, unsigned int lod, unsigned int count, DebugXModelStats *xmodelStats)
{
  ?R_InitDebugXmodelStats@@YAXPEBUXModel@@IIIPEAUDebugXModelStats@@@Z(xmodel, type, lod, count, xmodelStats);
}

/*
==============
R_AddDebugLineDepthTest
==============
*/

void __fastcall R_AddDebugLineDepthTest(DebugGlobals *debugGlobalsEntry, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ?R_AddDebugLineDepthTest@@YAXPEAUDebugGlobals@@AEBTvec3_t@@1AEBTvec4_t@@@Z(debugGlobalsEntry, start, end, color);
}

/*
==============
R_CopyDebugStrings
==============
*/

void __fastcall R_CopyDebugStrings(trDebugString_t *clStrings, int clStringCnt, trDebugString_t *svStrings, int svStringCnt, int maxStringCount)
{
  ?R_CopyDebugStrings@@YAXPEAUtrDebugString_t@@H0HH@Z(clStrings, clStringCnt, svStrings, svStringCnt, maxStringCount);
}

/*
==============
R_AddDebugFrustum2
==============
*/

void __fastcall R_AddDebugFrustum2(DebugGlobals *debugGlobalsEntry, const tmat44_t<vec4_t> *srcViewMatrix, const vec3_t *viewOrigin, const tmat44_t<vec4_t> *projMatrix)
{
  ?R_AddDebugFrustum2@@YAXPEAUDebugGlobals@@AEBT?$tmat44_t@Tvec4_t@@@@AEBTvec3_t@@1@Z(debugGlobalsEntry, srcViewMatrix, viewOrigin, projMatrix);
}

/*
==============
R_AddXModelToRankingStats
==============
*/

DebugXModelStats *__fastcall R_AddXModelToRankingStats(const XModel *xmodel, unsigned int lod, unsigned int count)
{
  return ?R_AddXModelToRankingStats@@YAPEAUDebugXModelStats@@PEBUXModel@@II@Z(xmodel, lod, count);
}

/*
==============
R_AddDebugFrustumColor
==============
*/

void __fastcall R_AddDebugFrustumColor(DebugGlobals *debugGlobalsEntry, const GfxViewParms *viewParms, const vec4_t *frustumColor, const vec4_t *apexColor)
{
  ?R_AddDebugFrustumColor@@YAXPEAUDebugGlobals@@PEBUGfxViewParms@@AEBTvec4_t@@2@Z(debugGlobalsEntry, viewParms, frustumColor, apexColor);
}

/*
==============
R_AddDebugBoxOriented
==============
*/

void __fastcall R_AddDebugBoxOriented(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color)
{
  ?R_AddDebugBoxOriented@@YAXPEAUDebugGlobals@@AEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@@Z(debugGlobalsEntry, origin, bounds, rotation, color);
}

/*
==============
R_AddPlume
==============
*/

void __fastcall R_AddPlume(const vec3_t *origin, int score, const vec3_t *color, int duration)
{
  ?R_AddPlume@@YAXAEBTvec3_t@@H0H@Z(origin, score, color, duration);
}

/*
==============
R_AddDebugStar
==============
*/

void __fastcall R_AddDebugStar(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, const float size, const vec4_t *color)
{
  ?R_AddDebugStar@@YAXPEAUDebugGlobals@@AEBTvec3_t@@MAEBTvec4_t@@@Z(debugGlobalsEntry, pos, size, color);
}

/*
==============
R_AddDebugString
==============
*/

void __fastcall R_AddDebugString(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const vec4_t *color, float size, const char *string)
{
  ?R_AddDebugString@@YAXPEAUDebugGlobals@@AEBTvec3_t@@AEBTvec4_t@@MPEBD@Z(debugGlobalsEntry, origin, color, size, string);
}

/*
==============
R_InitDebugEntry
==============
*/

void __fastcall R_InitDebugEntry(DebugGlobals *debugGlobalsEntry)
{
  ?R_InitDebugEntry@@YAXPEAUDebugGlobals@@@Z(debugGlobalsEntry);
}

/*
==============
R_ShutdownDebugEntry
==============
*/

void __fastcall R_ShutdownDebugEntry(DebugGlobals *debugGlobalsEntry)
{
  ?R_ShutdownDebugEntry@@YAXPEAUDebugGlobals@@@Z(debugGlobalsEntry);
}

/*
==============
R_InitDebug
==============
*/

void R_InitDebug(void)
{
  ?R_InitDebug@@YAXXZ();
}

/*
==============
R_AddDebugLine
==============
*/

void __fastcall R_AddDebugLine(DebugGlobals *debugGlobalsEntry, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ?R_AddDebugLine@@YAXPEAUDebugGlobals@@AEBTvec3_t@@1AEBTvec4_t@@@Z(debugGlobalsEntry, start, end, color);
}

/*
==============
R_AddDebugCross
==============
*/

void __fastcall R_AddDebugCross(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, const float size, const vec4_t *color)
{
  ?R_AddDebugCross@@YAXPEAUDebugGlobals@@AEBTvec3_t@@MAEBTvec4_t@@@Z(debugGlobalsEntry, pos, size, color);
}

/*
==============
R_TransferDebugGlobals
==============
*/

void __fastcall R_TransferDebugGlobals(DebugGlobals *debugGlobalsEntry)
{
  ?R_TransferDebugGlobals@@YAXPEAUDebugGlobals@@@Z(debugGlobalsEntry);
}

/*
==============
R_AddDebugPyramidOriented
==============
*/

void __fastcall R_AddDebugPyramidOriented(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, float baseHalfSize, float height, const tmat33_t<vec3_t> *rotation, const vec4_t *color, bool depthTest)
{
  ?R_AddDebugPyramidOriented@@YAXPEAUDebugGlobals@@AEBTvec3_t@@MMAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@_N@Z(debugGlobalsEntry, origin, baseHalfSize, height, rotation, color, depthTest);
}

/*
==============
R_AddDebugBox
==============
*/

void __fastcall R_AddDebugBox(DebugGlobals *debugGlobalsEntry, const Bounds *bounds, const vec4_t *color, bool depthTest)
{
  ?R_AddDebugBox@@YAXPEAUDebugGlobals@@PEBUBounds@@AEBTvec4_t@@_N@Z(debugGlobalsEntry, bounds, color, depthTest);
}

/*
==============
R_DebugUniqueColorFromIndex
==============
*/

void __fastcall R_DebugUniqueColorFromIndex(const int index, vec3_t *outColor)
{
  ?R_DebugUniqueColorFromIndex@@YAXHAEATvec3_t@@@Z(index, outColor);
}

/*
==============
R_AddDebugFrustum
==============
*/

void __fastcall R_AddDebugFrustum(DebugGlobals *debugGlobalsEntry, const GfxViewParms *viewParms)
{
  ?R_AddDebugFrustum@@YAXPEAUDebugGlobals@@PEBUGfxViewParms@@@Z(debugGlobalsEntry, viewParms);
}

/*
==============
R_CopyDebugPolys
==============
*/

void __fastcall R_CopyDebugPolys(trDebugPoly_t *clPolys, unsigned int clPolyCnt, vec3_t *clVerts, unsigned int clVertCnt, trDebugPoly_t *svPolys, unsigned int svPolyCnt, vec3_t *svVerts, unsigned int svVertCnt)
{
  ?R_CopyDebugPolys@@YAXPEAUtrDebugPoly_t@@IPEATvec3_t@@I0I1I@Z(clPolys, clPolyCnt, clVerts, clVertCnt, svPolys, svPolyCnt, svVerts, svVertCnt);
}

/*
==============
R_AllocateDebugBuffers
==============
*/

void __fastcall R_AllocateDebugBuffers(int maxStringCount, int maxLineCount, unsigned int maxVertCount, unsigned int maxPolyCount)
{
  ?R_AllocateDebugBuffers@@YAXHHII@Z(maxStringCount, maxLineCount, maxVertCount, maxPolyCount);
}

/*
==============
R_CopyDebugLines
==============
*/

void __fastcall R_CopyDebugLines(trDebugLine_t *clLines, int clLineCnt, trDebugLine_t *svLines, int svLineCnt, int maxLineCount)
{
  ?R_CopyDebugLines@@YAXPEAUtrDebugLine_t@@H0HH@Z(clLines, clLineCnt, svLines, svLineCnt, maxLineCount);
}

/*
==============
R_AddDebugBoxDepthTest
==============
*/

void __fastcall R_AddDebugBoxDepthTest(DebugGlobals *debugGlobalsEntry, const Bounds *bounds, const vec4_t *color)
{
  ?R_AddDebugBoxDepthTest@@YAXPEAUDebugGlobals@@PEBUBounds@@AEBTvec4_t@@@Z(debugGlobalsEntry, bounds, color);
}

/*
==============
R_AddDebugBoxOrientedDepthTest
==============
*/

void __fastcall R_AddDebugBoxOrientedDepthTest(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color)
{
  ?R_AddDebugBoxOrientedDepthTest@@YAXPEAUDebugGlobals@@AEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@@Z(debugGlobalsEntry, origin, bounds, rotation, color);
}

/*
==============
R_AddDebugPoint
==============
*/

void __fastcall R_AddDebugPoint(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, const float size, const vec4_t *color)
{
  ?R_AddDebugPoint@@YAXPEAUDebugGlobals@@AEBTvec3_t@@MAEBTvec4_t@@@Z(debugGlobalsEntry, pos, size, color);
}

/*
==============
R_AddXSurfaceToXModelStats
==============
*/

void __fastcall R_AddXSurfaceToXModelStats(const XSurface *xsurf, DebugXModelStats *xmodelStats)
{
  ?R_AddXSurfaceToXModelStats@@YAXPEBUXSurface@@PEAUDebugXModelStats@@@Z(xsurf, xmodelStats);
}

/*
==============
R_ResetXModelStats
==============
*/

void R_ResetXModelStats(void)
{
  ?R_ResetXModelStats@@YAXXZ();
}

/*
==============
R_AddDebugPolygon
==============
*/

void __fastcall R_AddDebugPolygon(DebugGlobals *debugGlobalsEntry, const vec4_t *color, const unsigned int pointCount, const vec3_t *points, bool drawOutline, bool drawBackFace, bool depthTest)
{
  ?R_AddDebugPolygon@@YAXPEAUDebugGlobals@@AEBTvec4_t@@IPEBTvec3_t@@_N33@Z(debugGlobalsEntry, color, pointCount, points, drawOutline, drawBackFace, depthTest);
}

/*
==============
R_AddDebugLightProxyViewFrustum
==============
*/

void __fastcall R_AddDebugLightProxyViewFrustum(DebugGlobals *debugGlobalsEntry, const GfxLightViewFrustum *lightViewFrustum, const vec4_t *frustumColor)
{
  ?R_AddDebugLightProxyViewFrustum@@YAXPEAUDebugGlobals@@PEBUGfxLightViewFrustum@@AEBTvec4_t@@@Z(debugGlobalsEntry, lightViewFrustum, frustumColor);
}

/*
==============
R_NeedToAllocateDebugBuffers
==============
*/

bool __fastcall R_NeedToAllocateDebugBuffers(int maxStringCount, int maxLineCount, unsigned int maxVertCount, unsigned int maxPolyCount)
{
  return ?R_NeedToAllocateDebugBuffers@@YA_NHHII@Z(maxStringCount, maxLineCount, maxVertCount, maxPolyCount);
}

/*
==============
R_SortAndPublishXModelStats
==============
*/

void R_SortAndPublishXModelStats(void)
{
  ?R_SortAndPublishXModelStats@@YAXXZ();
}

/*
==============
R_ShutdownDebug
==============
*/

void R_ShutdownDebug(void)
{
  ?R_ShutdownDebug@@YAXXZ();
}

/*
==============
R_AddScaledDebugString
==============
*/

void __fastcall R_AddScaledDebugString(DebugGlobals *debugGlobalsEntry, const GfxCamera *camera, const vec3_t *origin, const vec4_t *color, const char *string)
{
  ?R_AddScaledDebugString@@YAXPEAUDebugGlobals@@PEBUGfxCamera@@AEBTvec3_t@@AEBTvec4_t@@PEBD@Z(debugGlobalsEntry, camera, origin, color, string);
}

/*
==============
R_PrintDebugXModelStats
==============
*/

void __fastcall R_PrintDebugXModelStats(const DebugXModelStats *xmodelStats)
{
  ?R_PrintDebugXModelStats@@YAXPEBUDebugXModelStats@@@Z(xmodelStats);
}

/*
==============
R_AddDebugBox
==============
*/
void R_AddDebugBox(DebugGlobals *debugGlobalsEntry, const Bounds *bounds, const vec4_t *color, bool depthTest)
{
  const int (*v18)[2]; 
  __int64 v21; 
  vec3_t start; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm9, xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm8, xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm3, dword ptr [rdx+4]
    vsubss  xmm6, xmm3, dword ptr [rdx+10h]
    vaddss  xmm1, xmm3, dword ptr [rdx+10h]
    vmovss  xmm5, dword ptr [rdx+8]
    vaddss  xmm0, xmm5, dword ptr [rdx+14h]
    vsubss  xmm2, xmm5, dword ptr [rdx+14h]
    vmovss  [rbp+57h+var_78], xmm0
    vmovss  [rbp+57h+var_6C], xmm0
    vmovss  [rbp+57h+var_60], xmm0
    vmovss  [rbp+57h+var_54], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm9
    vmovss  dword ptr [rbp+57h+start+4], xmm6
    vmovss  dword ptr [rbp+57h+start+8], xmm2
    vmovss  [rbp+57h+var_A4], xmm8
    vmovss  [rbp+57h+var_A0], xmm6
    vmovss  [rbp+57h+var_9C], xmm2
    vmovss  [rbp+57h+var_98], xmm9
    vmovss  [rbp+57h+var_94], xmm1
    vmovss  [rbp+57h+var_90], xmm2
    vmovss  [rbp+57h+var_8C], xmm8
    vmovss  [rbp+57h+var_88], xmm1
    vmovss  [rbp+57h+var_84], xmm2
    vmovss  [rbp+57h+var_80], xmm9
    vmovss  [rbp+57h+var_7C], xmm6
    vmovss  [rbp+57h+var_74], xmm8
    vmovss  [rbp+57h+var_70], xmm6
    vmovss  [rbp+57h+var_68], xmm9
    vmovss  [rbp+57h+var_64], xmm1
    vmovss  [rbp+57h+var_5C], xmm8
    vmovss  [rbp+57h+var_58], xmm1
  }
  v18 = iEdgePairs_7;
  v21 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start + *(_DWORD *)v18, &start + (int)(*v18)[1], color, depthTest);
    ++v18;
    --v21;
  }
  while ( v21 );
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
R_AddDebugBoxDepthTest
==============
*/
void R_AddDebugBoxDepthTest(DebugGlobals *debugGlobalsEntry, const Bounds *bounds, const vec4_t *color)
{
  const int (*v17)[2]; 
  __int64 v19; 
  vec3_t start; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm9, xmm0, dword ptr [rdx+0Ch]
    vaddss  xmm8, xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm3, dword ptr [rdx+4]
    vsubss  xmm6, xmm3, dword ptr [rdx+10h]
    vaddss  xmm1, xmm3, dword ptr [rdx+10h]
    vmovss  xmm5, dword ptr [rdx+8]
    vaddss  xmm0, xmm5, dword ptr [rdx+14h]
    vsubss  xmm2, xmm5, dword ptr [rdx+14h]
    vmovss  [rbp+57h+var_78], xmm0
    vmovss  [rbp+57h+var_6C], xmm0
    vmovss  [rbp+57h+var_60], xmm0
    vmovss  [rbp+57h+var_54], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm9
    vmovss  dword ptr [rbp+57h+start+4], xmm6
    vmovss  dword ptr [rbp+57h+start+8], xmm2
    vmovss  [rbp+57h+var_A4], xmm8
    vmovss  [rbp+57h+var_A0], xmm6
    vmovss  [rbp+57h+var_9C], xmm2
    vmovss  [rbp+57h+var_98], xmm9
    vmovss  [rbp+57h+var_94], xmm1
    vmovss  [rbp+57h+var_90], xmm2
    vmovss  [rbp+57h+var_8C], xmm8
    vmovss  [rbp+57h+var_88], xmm1
    vmovss  [rbp+57h+var_84], xmm2
    vmovss  [rbp+57h+var_80], xmm9
    vmovss  [rbp+57h+var_7C], xmm6
    vmovss  [rbp+57h+var_74], xmm8
    vmovss  [rbp+57h+var_70], xmm6
    vmovss  [rbp+57h+var_68], xmm9
    vmovss  [rbp+57h+var_64], xmm1
    vmovss  [rbp+57h+var_5C], xmm8
    vmovss  [rbp+57h+var_58], xmm1
  }
  v17 = iEdgePairs_8;
  v19 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start + *(_DWORD *)v17, &start + (int)(*v17)[1], color, 1);
    ++v17;
    --v19;
  }
  while ( v19 );
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
R_AddDebugBoxOriented
==============
*/
void R_AddDebugBoxOriented(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color)
{
  R_AddDebugBoxOrientedInternal(debugGlobalsEntry, origin, bounds, rotation, color, 0);
}

/*
==============
R_AddDebugBoxOrientedDepthTest
==============
*/
void R_AddDebugBoxOrientedDepthTest(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color)
{
  R_AddDebugBoxOrientedInternal(debugGlobalsEntry, origin, bounds, rotation, color, 1);
}

/*
==============
R_AddDebugBoxOrientedInternal
==============
*/
void R_AddDebugBoxOrientedInternal(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, bool depthTest)
{
  unsigned int v14; 
  const int (*v59)[2]; 
  __int64 v60; 
  char v67; 
  vec3_t start[8]; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  _RBX = &start[0].v[2];
  _ECX = 0;
  v14 = 0;
  _R12 = bounds;
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r12+0Ch]
      vxorps  xmm3, xmm4, xmm9
      vmovd   xmm1, ecx
    }
    _RSI = _RBX - 2;
    _EAX = v14 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm7, xmm1, dword ptr [r12]
      vmovss  xmm4, dword ptr [r12+10h]
      vmovd   xmm1, ecx
      vxorps  xmm3, xmm4, xmm9
    }
    _EAX = v14 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm6, xmm1, dword ptr [r12+4]
      vmovss  xmm4, dword ptr [r12+14h]
    }
    _EAX = v14 & 4;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm9
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm8, xmm1, dword ptr [r12+8]
      vmovss  dword ptr [rbx], xmm8
      vmovss  dword ptr [rsi], xmm7
      vmovss  dword ptr [rbx-4], xmm6
    }
    if ( _RBX - 2 == (float *)&v67 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      _ECX = 0;
    }
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm7, dword ptr [rdi]
      vmulss  xmm3, xmm7, dword ptr [rdi+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rdi+18h]
      vmulss  xmm0, xmm6, dword ptr [rdi+10h]
      vaddss  xmm5, xmm2, xmm1
      vmulss  xmm1, xmm7, dword ptr [rdi+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rdi+1Ch]
      vmulss  xmm0, xmm6, dword ptr [rdi+14h]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm8, dword ptr [rdi+20h]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm0, xmm5, dword ptr [r15]
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm1, xmm4, dword ptr [r15+4]
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm0, xmm3, dword ptr [r15+8]
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    ++v14;
  }
  while ( v14 < 8 );
  v59 = iEdgePairs_5;
  v60 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start[*(_DWORD *)v59], &start[(*v59)[1]], color, depthTest);
    ++v59;
    --v60;
  }
  while ( v60 );
  _R11 = &v69;
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
R_AddDebugCross
==============
*/

void __fastcall R_AddDebugCross(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, double size, const vec4_t *color)
{
  unsigned int v17; 
  trDebugLine_t *lines; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _ER15 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _R14 = pos;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v17 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0C8h+var_88], xmm12
    vmovaps [rsp+0C8h+var_98], xmm13
    vxorps  xmm13, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm12, xmm2
  }
  do
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r14]
      vmovd   xmm1, r15d
    }
    _EAX = v17 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm5, xmm13, xmm12, xmm2
      vmovd   xmm1, r15d
    }
    _EAX = v17 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [r14+8]
      vblendvps xmm4, xmm13, xmm12, xmm2
      vaddss  xmm7, xmm4, xmm1
      vsubss  xmm10, xmm1, xmm4
      vmovss  [rsp+0C8h+var_A8], xmm5
      vaddss  xmm6, xmm5, xmm3
      vaddss  xmm8, xmm12, xmm0
      vsubss  xmm9, xmm3, xmm5
      vsubss  xmm11, xmm0, xmm12
    }
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount + 1 <= debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        _RBX = &lines[debugGlobalsEntry->lineCount];
        __asm
        {
          vmovss  dword ptr [rbx], xmm6
          vmovss  dword ptr [rbx+4], xmm7
          vmovss  dword ptr [rbx+8], xmm8
          vmovss  dword ptr [rbx+0Ch], xmm9
          vmovss  dword ptr [rbx+10h], xmm10
          vmovss  dword ptr [rbx+14h], xmm11
        }
        Byte4PackVertexColor(color, _RBX->color.array);
        _RBX->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    ++v17;
  }
  while ( v17 < 4 );
  _R11 = &v53;
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
}

/*
==============
R_AddDebugFrustum2
==============
*/
void R_AddDebugFrustum2(DebugGlobals *debugGlobalsEntry, const tmat44_t<vec4_t> *srcViewMatrix, const vec3_t *viewOrigin, const tmat44_t<vec4_t> *projMatrix)
{
  R_AddDebugFrustumInternal(debugGlobalsEntry, srcViewMatrix, viewOrigin, projMatrix, &colorMdCyan, &colorMagenta);
}

/*
==============
R_AddDebugFrustum
==============
*/
void R_AddDebugFrustum(DebugGlobals *debugGlobalsEntry, const GfxViewParms *viewParms)
{
  R_AddDebugFrustumInternal(debugGlobalsEntry, &viewParms->viewMatrix.m, &viewParms->camera.origin, &viewParms->projectionMatrix.m, &colorMdCyan, &colorMagenta);
}

/*
==============
R_AddDebugFrustumColor
==============
*/
void R_AddDebugFrustumColor(DebugGlobals *debugGlobalsEntry, const GfxViewParms *viewParms, const vec4_t *frustumColor, const vec4_t *apexColor)
{
  R_AddDebugFrustumInternal(debugGlobalsEntry, &viewParms->viewMatrix.m, &viewParms->camera.origin, &viewParms->projectionMatrix.m, frustumColor, apexColor);
}

/*
==============
R_AddDebugFrustumInternal
==============
*/
void R_AddDebugFrustumInternal(DebugGlobals *debugGlobalsEntry, const tmat44_t<vec4_t> *srcViewMatrix, const vec3_t *viewOrigin, const tmat44_t<vec4_t> *projMatrix, const vec4_t *frustumColor, const vec4_t *apexColor)
{
  bool v29; 
  bool v32; 
  bool v38; 
  bool v44; 
  bool v50; 
  bool v56; 
  bool v62; 
  bool v68; 
  vec4_t out; 
  vec4_t v83; 
  vec4_t v84; 
  vec4_t v85; 
  vec4_t v86; 
  vec4_t v87; 
  vec4_t v88; 
  vec4_t v89; 
  vec4_t vec; 
  vec4_t v91; 
  vec4_t v92; 
  vec4_t v93; 
  vec4_t v94; 
  vec4_t v95; 
  vec4_t v96; 
  vec4_t v97; 
  vec4_t v98; 
  vec4_t v99; 
  vec4_t v100; 
  vec4_t v101; 
  vec4_t v102; 
  vec4_t v103; 
  vec4_t v104; 
  vec4_t v105; 
  vec4_t v106; 
  vec4_t v107; 
  tmat44_t<vec4_t> v108; 
  tmat44_t<vec4_t> dst; 
  vec4_t v110; 
  vec4_t v111; 
  vec4_t v112; 
  vec4_t v113; 
  vec4_t v114; 
  vec4_t v115; 
  vec4_t v116; 
  vec4_t v117; 
  vec4_t v118; 
  tmat44_t<vec4_t> mat; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovss  xmm6, cs:__real@3f800000
    vmovups ymmword ptr [rbp+260h+mat], ymm0
    vmovss  xmm0, dword ptr [r8]
    vxorps  xmm0, xmm0, xmm3
    vmovups ymmword ptr [rbp+260h+mat+20h], ymm1
    vmovss  xmm1, dword ptr [r8+4]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbp+260h+vec], xmm0
    vmovss  xmm0, dword ptr [r8+8]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbp+260h+vec+8], xmm1
    vmovss  dword ptr [rbp+260h+vec+4], xmm2
    vmovss  dword ptr [rbp+260h+vec+0Ch], xmm6
  }
  MatrixTransformVector44Aligned(&vec, srcViewMatrix, &mat.m[3]);
  MatrixInverse44Aligned(projMatrix, &dst);
  MatrixInverse44Aligned(&mat, &v108);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000358637bd3f8000003f800000
    vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rbp+260h+var_110], xmm0
    vmovups xmm0, cs:__xmm@3f800000358637bdbf8000003f800000
    vmovups xmmword ptr [rbp+260h+var_100], xmm1
    vmovups xmm1, cs:__xmm@3f8000003f800000bf8000003f800000
    vmovups xmmword ptr [rbp+260h+var_F0], xmm0
    vmovups xmm0, cs:__xmm@3f800000358637bd3f800000bf800000
    vmovups xmmword ptr [rbp+260h+var_E0], xmm1
    vmovups xmm1, cs:__xmm@3f8000003f8000003f800000bf800000
    vmovups xmmword ptr [rbp+260h+var_D0], xmm0
    vmovups xmm0, cs:__xmm@3f800000358637bdbf800000bf800000
    vmovups xmmword ptr [rbp+260h+var_C0], xmm1
    vmovups xmm1, cs:__xmm@3f8000003f800000bf800000bf800000
    vmovups xmmword ptr [rbp+260h+var_B0], xmm0
    vmovups xmmword ptr [rbp+260h+var_A0], xmm1
  }
  MatrixTransformVector44Aligned(&v110, &dst, &out);
  MatrixTransformVector44Aligned(&v111, &dst, &v83);
  MatrixTransformVector44Aligned(&v112, &dst, &v84);
  MatrixTransformVector44Aligned(&v113, &dst, &v85);
  MatrixTransformVector44Aligned(&v114, &dst, &v86);
  MatrixTransformVector44Aligned(&v115, &dst, &v87);
  MatrixTransformVector44Aligned(&v116, &dst, &v88);
  MatrixTransformVector44Aligned(&v117, &dst, &v89);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+360h+out+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm0, xmm7
  }
  if ( v29 )
  {
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v32;
    if ( v32 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rsp+360h+out+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+360h+out+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+360h+out]
    vmulss  xmm2, xmm3, dword ptr [rsp+360h+out+8]
    vmovss  dword ptr [rbp+260h+var_2A0+4], xmm0
    vmovss  xmm0, dword ptr [rsp+360h+var_320+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_2A0], xmm1
    vmovss  dword ptr [rbp+260h+var_2A0+8], xmm2
    vmovss  dword ptr [rbp+260h+var_2A0+0Ch], xmm6
  }
  if ( v29 )
  {
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v38;
    if ( v38 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rsp+360h+var_320+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+360h+var_320+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+360h+var_320]
    vmulss  xmm2, xmm3, dword ptr [rsp+360h+var_320+8]
    vmovss  dword ptr [rbp+260h+var_290+4], xmm0
    vmovss  xmm0, dword ptr [rsp+360h+var_310+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_290], xmm1
    vmovss  dword ptr [rbp+260h+var_290+8], xmm2
    vmovss  dword ptr [rbp+260h+var_290+0Ch], xmm6
  }
  if ( v29 )
  {
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rsp+360h+var_310+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+360h+var_310+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+360h+var_310]
    vmulss  xmm2, xmm3, dword ptr [rsp+360h+var_310+8]
    vmovss  dword ptr [rbp+260h+var_280+4], xmm0
    vmovss  xmm0, dword ptr [rsp+360h+var_300+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_280], xmm1
    vmovss  dword ptr [rbp+260h+var_280+8], xmm2
    vmovss  dword ptr [rbp+260h+var_280+0Ch], xmm6
  }
  if ( v29 )
  {
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v50;
    if ( v50 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rsp+360h+var_300+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+360h+var_300+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+360h+var_300]
    vmulss  xmm2, xmm3, dword ptr [rsp+360h+var_300+8]
    vmovss  dword ptr [rbp+260h+var_270+4], xmm0
    vmovss  xmm0, dword ptr [rsp+360h+var_2F0+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_270], xmm1
    vmovss  dword ptr [rbp+260h+var_270+8], xmm2
    vmovss  dword ptr [rbp+260h+var_270+0Ch], xmm6
  }
  if ( v29 )
  {
    v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v56;
    if ( v56 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rsp+360h+var_2F0+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+360h+var_2F0+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+360h+var_2F0]
    vmulss  xmm2, xmm3, dword ptr [rsp+360h+var_2F0+8]
    vmovss  dword ptr [rbp+260h+var_260+4], xmm0
    vmovss  xmm0, dword ptr [rbp+260h+var_2E0+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_260], xmm1
    vmovss  dword ptr [rbp+260h+var_260+8], xmm2
    vmovss  dword ptr [rbp+260h+var_260+0Ch], xmm6
  }
  if ( v29 )
  {
    v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v62;
    if ( v62 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rbp+260h+var_2E0+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rbp+260h+var_2E0+4]
    vmulss  xmm1, xmm3, dword ptr [rbp+260h+var_2E0]
    vmulss  xmm2, xmm3, dword ptr [rbp+260h+var_2E0+8]
    vmovss  dword ptr [rbp+260h+var_250+4], xmm0
    vmovss  xmm0, dword ptr [rbp+260h+var_2D0+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_250], xmm1
    vmovss  dword ptr [rbp+260h+var_250+8], xmm2
    vmovss  dword ptr [rbp+260h+var_250+0Ch], xmm6
  }
  if ( v29 )
  {
    v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f");
    v29 = !v68;
    if ( v68 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rbp+260h+var_2D0+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rbp+260h+var_2D0+4]
    vmulss  xmm1, xmm3, dword ptr [rbp+260h+var_2D0]
    vmulss  xmm2, xmm3, dword ptr [rbp+260h+var_2D0+8]
    vmovss  dword ptr [rbp+260h+var_240+4], xmm0
    vmovss  xmm0, dword ptr [rbp+260h+var_2C0+0Ch]
    vucomiss xmm0, xmm7
    vmovss  dword ptr [rbp+260h+var_240], xmm1
    vmovss  dword ptr [rbp+260h+var_240+8], xmm2
    vmovss  dword ptr [rbp+260h+var_240+0Ch], xmm6
  }
  if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm3, xmm6, dword ptr [rbp+260h+var_2C0+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rbp+260h+var_2C0+4]
    vmulss  xmm1, xmm3, dword ptr [rbp+260h+var_2C0]
    vmulss  xmm2, xmm3, dword ptr [rbp+260h+var_2C0+8]
    vmovss  dword ptr [rbp+260h+var_230+4], xmm0
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovups xmmword ptr [rbp+260h+var_90], xmm0
    vmovss  dword ptr [rbp+260h+var_230], xmm1
    vmovss  dword ptr [rbp+260h+var_230+8], xmm2
    vmovss  dword ptr [rbp+260h+var_230+0Ch], xmm6
  }
  MatrixTransformVector44Aligned(&v91, &v108, &v105);
  MatrixTransformVector44Aligned(&v92, &v108, &v99);
  MatrixTransformVector44Aligned(&v93, &v108, &v107);
  MatrixTransformVector44Aligned(&v94, &v108, &v100);
  MatrixTransformVector44Aligned(&v95, &v108, &v104);
  MatrixTransformVector44Aligned(&v96, &v108, &v101);
  MatrixTransformVector44Aligned(&v97, &v108, &v106);
  MatrixTransformVector44Aligned(&v98, &v108, &v102);
  MatrixTransformVector44Aligned(&v118, &v108, &v103);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v105, (const vec3_t *)&v99, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v99, (const vec3_t *)&v100, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v100, (const vec3_t *)&v107, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v107, (const vec3_t *)&v105, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v102, (const vec3_t *)&v106, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v106, (const vec3_t *)&v104, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v104, (const vec3_t *)&v101, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v101, (const vec3_t *)&v102, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v105, (const vec3_t *)&v104, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v99, (const vec3_t *)&v101, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v107, (const vec3_t *)&v106, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v100, (const vec3_t *)&v102, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v103, (const vec3_t *)&v99, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v103, (const vec3_t *)&v100, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v103, (const vec3_t *)&v101, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v103, (const vec3_t *)&v102, apexColor, 0);
  _R11 = &v120;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_AddDebugLightProxyViewFrustum
==============
*/
void R_AddDebugLightProxyViewFrustum(DebugGlobals *debugGlobalsEntry, const GfxLightViewFrustum *lightViewFrustum, const vec4_t *frustumColor)
{
  vec3_t *vertices; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int8 *indices; 
  __int64 v9; 
  __int64 v10; 
  const vec3_t *v11; 
  const vec3_t *v12; 
  const vec3_t *v13; 
  unsigned __int8 *v14; 

  vertices = lightViewFrustum->vertices;
  v6 = 0;
  v7 = lightViewFrustum->indexCount / 3u;
  indices = lightViewFrustum->indices;
  v14 = indices;
  if ( v7 )
  {
    do
    {
      v9 = 3 * v6;
      v10 = indices[(unsigned int)(v9 + 2)];
      v11 = &vertices[indices[(unsigned int)(v9 + 1)]];
      v12 = &vertices[indices[v9]];
      R_AddDebugLineInternal(debugGlobalsEntry, v12, v11, frustumColor, 0);
      v13 = &vertices[v10];
      R_AddDebugLineInternal(debugGlobalsEntry, v11, v13, frustumColor, 0);
      R_AddDebugLineInternal(debugGlobalsEntry, v13, v12, frustumColor, 0);
      indices = v14;
      ++v6;
    }
    while ( v6 < v7 );
  }
}

/*
==============
R_AddDebugLine
==============
*/
void R_AddDebugLine(DebugGlobals *debugGlobalsEntry, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  R_AddDebugLineInternal(debugGlobalsEntry, start, end, color, 0);
}

/*
==============
R_AddDebugLineDepthTest
==============
*/
void R_AddDebugLineDepthTest(DebugGlobals *debugGlobalsEntry, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  R_AddDebugLineInternal(debugGlobalsEntry, start, end, color, 1);
}

/*
==============
R_AddDebugLineInternal
==============
*/
void R_AddDebugLineInternal(DebugGlobals *debugGlobalsEntry, const vec3_t *start, const vec3_t *end, const vec4_t *color, bool depthTest)
{
  __int64 lineCount; 
  trDebugLine_t *lines; 
  trDebugLine_t *v11; 

  Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
  lineCount = debugGlobalsEntry->lineCount;
  if ( (int)lineCount < debugGlobalsEntry->lineLimit )
  {
    lines = debugGlobalsEntry->lines;
    if ( lines )
    {
      v11 = &lines[lineCount];
      v11->start.v[0] = start->v[0];
      v11->start.v[1] = start->v[1];
      v11->start.v[2] = start->v[2];
      v11->end.v[0] = end->v[0];
      v11->end.v[1] = end->v[1];
      v11->end.v[2] = end->v[2];
      Byte4PackVertexColor(color, v11->color.array);
      v11->depthTest = depthTest;
      ++debugGlobalsEntry->lineCount;
    }
    else
    {
      debugGlobalsEntry->enableDebugLines = 1;
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
}

/*
==============
R_AddDebugPoint
==============
*/

void __fastcall R_AddDebugPoint(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, double size, const vec4_t *color)
{
  unsigned int v5; 
  trDebugLine_t *lines; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v5 = 0;
  __asm { vmovaps xmm6, xmm2 }
  _RBP = pos;
  do
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rbp+8]
      vmovss  [rsp+0A8h+var_68], xmm2
      vmovss  [rsp+0A8h+var_64], xmm1
      vmovss  [rsp+0A8h+var_60], xmm0
      vmovss  [rsp+0A8h+var_58], xmm2
      vmovss  [rsp+0A8h+var_54], xmm1
      vmovss  [rsp+0A8h+var_50], xmm0
    }
    _RBX = (int)v5;
    __asm
    {
      vaddss  xmm0, xmm6, [rsp+rbx*4+0A8h+var_68]
      vmovss  [rsp+rbx*4+0A8h+var_68], xmm0
      vmovss  xmm0, [rsp+rbx*4+0A8h+var_58]
      vsubss  xmm1, xmm0, xmm6
      vmovss  [rsp+rbx*4+0A8h+var_58], xmm1
    }
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount < debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        __asm
        {
          vmovss  xmm0, [rsp+0A8h+var_68]
          vmovss  xmm1, [rsp+0A8h+var_64]
        }
        _RBX = &lines[debugGlobalsEntry->lineCount];
        __asm
        {
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm0, [rsp+0A8h+var_60]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm1, [rsp+0A8h+var_58]
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm0, [rsp+0A8h+var_54]
          vmovss  dword ptr [rbx+0Ch], xmm1
          vmovss  xmm1, [rsp+0A8h+var_50]
          vmovss  dword ptr [rbx+14h], xmm1
          vmovss  dword ptr [rbx+10h], xmm0
        }
        Byte4PackVertexColor(color, _RBX->color.array);
        _RBX->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    ++v5;
  }
  while ( v5 < 3 );
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
R_AddDebugPolygon
==============
*/
void R_AddDebugPolygon(DebugGlobals *debugGlobalsEntry, const vec4_t *color, const unsigned int pointCount, const vec3_t *points, bool drawOutline, bool drawBackFace, bool depthTest)
{
  __int64 v8; 
  unsigned int vertCount; 
  __int64 polyCount; 
  trDebugPoly_t *polys; 
  trDebugPoly_t *v14; 
  char *Value; 
  int *v16; 
  _QWORD *v17; 
  char *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  ThreadContext CurrentThreadContext; 
  __int64 v22; 
  __int64 v23; 

  v8 = pointCount;
  Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
  vertCount = debugGlobalsEntry->vertCount;
  if ( vertCount + (unsigned int)v8 <= debugGlobalsEntry->vertLimit )
  {
    polyCount = debugGlobalsEntry->polyCount;
    if ( (unsigned int)(polyCount + 1) <= debugGlobalsEntry->polyLimit )
    {
      polys = debugGlobalsEntry->polys;
      if ( polys )
      {
        if ( debugGlobalsEntry->verts )
        {
          polys[polyCount].firstVert = vertCount;
          debugGlobalsEntry->polys[debugGlobalsEntry->polyCount].vertCount = v8;
          debugGlobalsEntry->polys[debugGlobalsEntry->polyCount].outline = drawOutline;
          debugGlobalsEntry->polys[debugGlobalsEntry->polyCount].drawBackFace = drawBackFace;
          debugGlobalsEntry->polys[debugGlobalsEntry->polyCount].drawDepthTest = depthTest;
          v14 = &debugGlobalsEntry->polys[debugGlobalsEntry->polyCount];
          v14->color.v[0] = color->v[0];
          v14->color.v[1] = color->v[1];
          v14->color.v[2] = color->v[2];
          v14->color.v[3] = color->v[3];
          ++debugGlobalsEntry->polyCount;
          Value = (char *)Sys_GetValue(0);
          v16 = (int *)(Value + 9376);
          if ( (unsigned int)(*((_DWORD *)Value + 2344) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 2344) + 1, 3) )
            __debugbreak();
          if ( (unsigned int)++*v16 >= 3 )
          {
            LODWORD(v23) = 3;
            LODWORD(v22) = *v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v17 = Value + 2088;
          v18 = Value + 40;
          if ( *v17 < (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
            __debugbreak();
          *v17 += 8i64;
          if ( *v17 >= (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
            __debugbreak();
          *(_QWORD *)*v17 = v16;
          if ( *v17 <= (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
            __debugbreak();
          v19 = *v16;
          v20 = __rdtsc();
          v16[v19 + 2] = v20;
          if ( Sys_HasValidCurrentThreadContext() )
            CurrentThreadContext = Sys_GetCurrentThreadContext();
          else
            CurrentThreadContext = THREAD_CONTEXT_COUNT;
          CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 182, NULL, 0);
          memcpy_0(&debugGlobalsEntry->verts[debugGlobalsEntry->vertCount], points, 12 * v8);
          Profile_EndInternal(NULL);
          debugGlobalsEntry->vertCount += v8;
        }
      }
      else
      {
        debugGlobalsEntry->enableDebugPolys = 1;
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
}

/*
==============
R_AddDebugPyramidOriented
==============
*/

void __fastcall R_AddDebugPyramidOriented(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, double baseHalfSize, double height, const tmat33_t<vec3_t> *rotation, const vec4_t *color, bool depthTest)
{
  const int (*v55)[2]; 
  __int64 v56; 
  vec3_t start[5]; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  _RAX = rotation;
  _ER8 = 0;
  __asm
  {
    vmovaps xmm9, xmm3
    vmovaps xmm10, xmm2
    vmovss  xmm11, dword ptr [rax+0Ch]
    vmovss  xmm12, dword ptr [rax]
    vmovss  xmm13, dword ptr [rax+18h]
    vmovss  xmm14, dword ptr [rax+10h]
    vmovss  xmm15, dword ptr [rax+4]
  }
  _RCX = 0i64;
  _ER10 = 4;
  do
  {
    __asm
    {
      vmovd   xmm0, r8d
      vmovd   xmm1, r10d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm10, xmm9, xmm2
      vmulss  xmm8, xmm0, dword ptr [rcx+r9]
      vmulss  xmm7, xmm0, dword ptr [rcx+r9+8]
      vmulss  xmm6, xmm0, dword ptr [rcx+r9+4]
      vmulss  xmm1, xmm8, xmm12
      vmulss  xmm0, xmm6, xmm11
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm13
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm7, dword ptr [rax+1Ch]
      vmulss  xmm3, xmm8, xmm15
      vmulss  xmm0, xmm6, xmm14
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm3, xmm8, dword ptr [rax+8]
      vmulss  xmm0, xmm6, dword ptr [rax+14h]
      vaddss  xmm5, xmm2, xmm1
      vmulss  xmm1, xmm7, dword ptr [rax+20h]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm0, xmm4, dword ptr [rdx]
      vmovss  dword ptr [rsp+rcx+138h+start], xmm0
      vaddss  xmm0, xmm5, dword ptr [rdx+4]
      vmovss  dword ptr [rsp+rcx+138h+start+4], xmm0
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, dword ptr [rdx+8]
    }
    ++_ER8;
    __asm { vmovss  dword ptr [rsp+rcx+138h+start+8], xmm0 }
    _RCX += 12i64;
  }
  while ( _ER8 < 5 );
  v55 = iEdgePairs_6;
  v56 = 8i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start[*(_DWORD *)v55], &start[(*v55)[1]], color, depthTest);
    ++v55;
    --v56;
  }
  while ( v56 );
  _R11 = &v69;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
R_AddDebugStar
==============
*/

void __fastcall R_AddDebugStar(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, double size, const vec4_t *color)
{
  unsigned int v14; 
  trDebugLine_t *lines; 
  unsigned int i; 
  trDebugLine_t *v67; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
  }
  _ER15 = 0;
  v14 = 0;
  __asm { vmovaps xmm6, xmm2 }
  _RBP = pos;
  do
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rbp+8]
      vmovss  [rsp+118h+var_D0], xmm2
      vmovss  [rsp+118h+var_CC], xmm1
      vmovss  [rsp+118h+var_C8], xmm0
      vmovss  [rsp+118h+var_C0], xmm2
      vmovss  [rsp+118h+var_BC], xmm1
      vmovss  [rsp+118h+var_B8], xmm0
    }
    _RBX = (int)v14;
    __asm
    {
      vaddss  xmm0, xmm6, [rsp+rbx*4+118h+var_D0]
      vmovss  [rsp+rbx*4+118h+var_D0], xmm0
      vmovss  xmm0, [rsp+rbx*4+118h+var_C0]
      vsubss  xmm1, xmm0, xmm6
      vmovss  [rsp+rbx*4+118h+var_C0], xmm1
    }
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount < debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        __asm
        {
          vmovss  xmm0, [rsp+118h+var_D0]
          vmovss  xmm1, [rsp+118h+var_CC]
        }
        _RBX = &lines[debugGlobalsEntry->lineCount];
        __asm
        {
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm0, [rsp+118h+var_C8]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm1, [rsp+118h+var_C0]
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm0, [rsp+118h+var_BC]
          vmovss  dword ptr [rbx+0Ch], xmm1
          vmovss  xmm1, [rsp+118h+var_B8]
          vmovss  dword ptr [rbx+14h], xmm1
          vmovss  dword ptr [rbx+10h], xmm0
        }
        Byte4PackVertexColor(color, _RBX->color.array);
        _RBX->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    ++v14;
  }
  while ( v14 < 3 );
  __asm
  {
    vmulss  xmm12, xmm6, cs:__real@3f13cd36
    vxorps  xmm13, xmm12, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm3, xmm13
  }
  for ( i = 0; i < 4; ++i )
  {
    __asm { vmovd   xmm1, r15d }
    _EAX = i & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm3, xmm13, xmm3, xmm2
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm5, xmm13, xmm12, xmm2
      vmovd   xmm1, r15d
      vmovss  [rsp+118h+var_D8], xmm3
    }
    _EAX = i & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm13, xmm2
      vmovss  [rsp+118h+var_D8], xmm0
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rbp+8]
      vblendvps xmm4, xmm3, xmm12, xmm2
      vmovss  xmm3, dword ptr [rbp+0]
      vmovss  [rsp+118h+var_D4], xmm5
      vaddss  xmm6, xmm5, xmm3
      vsubss  xmm9, xmm3, xmm5
      vmovss  [rsp+118h+var_D4], xmm4
      vaddss  xmm7, xmm4, xmm1
      vaddss  xmm8, xmm12, xmm0
      vsubss  xmm10, xmm1, xmm4
      vsubss  xmm11, xmm0, xmm12
    }
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount + 1 <= debugGlobalsEntry->lineLimit )
    {
      v67 = debugGlobalsEntry->lines;
      if ( v67 )
      {
        _RBX = &v67[debugGlobalsEntry->lineCount];
        __asm
        {
          vmovss  dword ptr [rbx], xmm6
          vmovss  dword ptr [rbx+4], xmm7
          vmovss  dword ptr [rbx+8], xmm8
          vmovss  dword ptr [rbx+0Ch], xmm9
          vmovss  dword ptr [rbx+10h], xmm10
          vmovss  dword ptr [rbx+14h], xmm11
        }
        Byte4PackVertexColor(color, _RBX->color.array);
        _RBX->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    __asm { vmovss  xmm3, [rsp+118h+var_D8] }
  }
  _R11 = &v88;
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
}

/*
==============
R_AddDebugString
==============
*/

void __fastcall R_AddDebugString(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const vec4_t *color, double size, const char *string)
{
  __int64 stringCount; 
  trDebugString_t *strings; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
  stringCount = debugGlobalsEntry->stringCount;
  if ( (int)stringCount + 1 <= debugGlobalsEntry->stringLimit )
  {
    strings = debugGlobalsEntry->strings;
    if ( strings )
    {
      _RBX = &strings[stringCount];
      _RBX->xyz.v[0] = origin->v[0];
      _RBX->xyz.v[1] = origin->v[1];
      _RBX->xyz.v[2] = origin->v[2];
      Byte4PackVertexColor(color, _RBX->color.array);
      _RBX->font = debugGlobalsEntry->font;
      __asm { vmovss  dword ptr [rbx+18h], xmm6 }
      strncpy(_RBX->text, string, 0x4Bui64);
      _RBX->text[75] = 0;
      ++debugGlobalsEntry->stringCount;
    }
    else
    {
      debugGlobalsEntry->enableDebugString = 1;
    }
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_DEBUG_STRING_LIMIT);
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
}

/*
==============
R_AddPlume
==============
*/
void R_AddPlume(const vec3_t *origin, int score, const vec3_t *color, int duration)
{
  GfxDebugPlume *plumes; 
  int plumeCount; 
  __int64 v10; 
  GfxDebugPlume *v11; 
  unsigned __int64 v12; 

  Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
  plumes = debugGlobals.plumes;
  if ( debugGlobals.plumes )
  {
    plumeCount = debugGlobals.plumeCount;
  }
  else
  {
    R_DebugAlloc((void **)&debugGlobals.plumes, 40 * debugGlobals.plumeLimit, "(debugGlobals.plumes)");
    plumes = debugGlobals.plumes;
    plumeCount = 0;
    debugGlobals.plumeCount = 0;
    if ( !debugGlobals.plumes )
      goto LABEL_7;
  }
  if ( plumeCount != debugGlobals.plumeLimit )
  {
    v10 = plumeCount;
    plumes[v10].origin.v[0] = origin->v[0];
    plumes[v10].origin.v[1] = origin->v[1];
    plumes[v10].origin.v[2] = origin->v[2];
    v11 = debugGlobals.plumes;
    v12 = debugGlobals.plumeCount;
    debugGlobals.plumes[v12].color.v[0] = color->v[0];
    v11[v12].color.v[1] = color->v[1];
    v11[v12].color.v[2] = color->v[2];
    debugGlobals.plumes[debugGlobals.plumeCount].score = score;
    debugGlobals.plumes[debugGlobals.plumeCount].startTime = scene.def.time;
    debugGlobals.plumes[debugGlobals.plumeCount++].duration = duration;
  }
LABEL_7:
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
}

/*
==============
R_AddScaledDebugString
==============
*/
void R_AddScaledDebugString(DebugGlobals *debugGlobalsEntry, const GfxCamera *camera, const vec3_t *origin, const vec4_t *color)
{
  char v39; 

  _RAX = r_maxDebugStringDistance;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
    vmovss  xmm4, dword ptr [rax+28h]
    vmovaps [rsp+98h+var_58], xmm9
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm4, xmm0
    vmovaps [rsp+98h+var_68], xmm10
    vmovaps [rsp+98h+var_78], xmm11
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm8, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8+4]
  }
  _RAX = r_debugTextSize;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm9, xmm1, dword ptr [rdx+4]
    vsubss  xmm10, xmm0, dword ptr [rdx+8]
    vmovss  xmm11, dword ptr [rax+28h]
  }
  _RAX = r_minDebugStringDistance;
  __asm
  {
    vmulss  xmm2, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vcomiss xmm7, dword ptr [rax+28h]
    vcomiss xmm7, xmm4
    vmovaps xmm7, [rsp+98h+var_38]
  }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
R_AddXModelToRankingStats
==============
*/
DebugXModelStats *R_AddXModelToRankingStats(const XModel *xmodel, unsigned int lod, unsigned int count)
{
  unsigned int v3; 
  unsigned int v5; 
  DebugXModelStats *v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  const ObfuscateErrorText *v9; 
  const XModel *v10; 
  unsigned int v11; 
  __int64 v12; 
  const char *name; 
  DebugXModelStats *v14; 
  const char *v15; 
  __int64 v16; 
  signed __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  __int64 v21; 
  unsigned int SurfCount; 

  v3 = count;
  if ( rg.showXModelRankingStopUpdate )
    return 0i64;
  SurfCount = XModelGetSurfCount(xmodel, lod);
  v5 = SurfCount;
  v6 = NULL;
  v7 = (unsigned __int64)&s_xmodelStatsCountLock & 3;
  do
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_xmodelStatsCountLock) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&s_xmodelStatsCountLock, 1, 0) );
  v8 = lod;
  v9 = &queryFormat;
  v10 = xmodel;
  v11 = 0;
  if ( s_xmodelStatsCount )
  {
    do
    {
      v12 = v11;
      if ( v8 == s_xmodelStats[v12].lod )
      {
        name = v10->name;
        v14 = &s_xmodelStats[v12];
        v15 = s_xmodelStats[v12].name;
        v16 = 0x7FFFFFFFi64;
        if ( !v15 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v9 = &queryFormat;
        }
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v17 = v15 - name;
        while ( 1 )
        {
          v18 = name[v17];
          v19 = v16;
          v20 = *name++;
          --v16;
          if ( !v19 )
          {
LABEL_21:
            v3 = count;
            v6 = v14;
            v5 = SurfCount;
            v6->numInstances += count;
            v6->numSurfs = SurfCount;
            *(_QWORD *)&v6->numTris = 0i64;
            goto LABEL_25;
          }
          if ( v18 != v20 )
            break;
          if ( !v18 )
            goto LABEL_21;
        }
        v8 = lod;
        v10 = xmodel;
        v9 = &queryFormat;
      }
      ++v11;
    }
    while ( v11 < s_xmodelStatsCount );
    v3 = count;
    v5 = SurfCount;
  }
LABEL_25:
  if ( s_xmodelStatsCount < 0x4000 )
  {
    if ( !v6 )
    {
      v21 = (int)s_xmodelStatsCount++;
      v6 = &s_xmodelStats[v21];
      v6->name = NULL;
      *(_QWORD *)&v6->type = 0i64;
      *(_QWORD *)&v6->numSurfs = 0i64;
      *(_QWORD *)&v6->numVerts = 0i64;
      v6->name = xmodel->name;
      v6->lod = lod;
      v6->numSurfs = v5;
      v6->numInstances = v3;
    }
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_XMODEL_RANKING_STATS_LIMIT, 0x4000i64, v9);
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_xmodelStatsCountLock) )
    __debugbreak();
  if ( _InterlockedExchange(&s_xmodelStatsCountLock, 0) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug.cpp", 969, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_xmodelStatsCountLock, 0 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_xmodelStatsCountLock, 0 ) == 1") )
    __debugbreak();
  return v6;
}

/*
==============
R_AddXSurfaceToXModelStats
==============
*/
void R_AddXSurfaceToXModelStats(const XSurface *xsurf, DebugXModelStats *xmodelStats)
{
  if ( !rg.showXModelRankingStopUpdate )
  {
    xmodelStats->numTris += xsurf->triCount;
    xmodelStats->numVerts += xsurf->vertCount;
  }
}

/*
==============
R_AllocateDebugBuffers
==============
*/
void R_AllocateDebugBuffers(int maxStringCount, int maxLineCount, unsigned int maxVertCount, unsigned int maxPolyCount)
{
  GfxBackEndData *v4; 

  v4 = frontEndDataOut;
  if ( !frontEndDataOut->debugGlobals.externStrings && maxStringCount > 0 )
    R_DebugAlloc((void **)&frontEndDataOut->debugGlobals.externStrings, 112 * maxStringCount, "R_CopyDebugStrings");
  if ( !v4->debugGlobals.externLines && maxLineCount > 0 )
    R_DebugAlloc((void **)&v4->debugGlobals.externLines, 32 * maxLineCount, "R_CopyDebugLines");
  if ( !v4->debugGlobals.externVerts && maxVertCount )
    R_DebugAlloc((void **)&v4->debugGlobals.externVerts, 12 * maxVertCount, "R_CopyDebugPolys");
  if ( !v4->debugGlobals.externPolys )
  {
    if ( maxPolyCount )
      R_DebugAlloc((void **)&v4->debugGlobals.externPolys, 28 * maxPolyCount, "R_CopyDebugPolys");
  }
}

/*
==============
R_CopyDebugLines
==============
*/
void R_CopyDebugLines(trDebugLine_t *clLines, int clLineCnt, trDebugLine_t *svLines, int svLineCnt)
{
  GfxBackEndData *v4; 
  __int64 v7; 
  trDebugLine_t *externLines; 

  v4 = frontEndDataOut;
  v7 = clLineCnt;
  externLines = frontEndDataOut->debugGlobals.externLines;
  if ( externLines )
  {
    if ( clLines )
    {
      memcpy_0(frontEndDataOut->debugGlobals.externLines, clLines, (unsigned int)(32 * clLineCnt));
      externLines += v7;
    }
    if ( svLines )
      memcpy_0(externLines, svLines, (unsigned int)(32 * svLineCnt));
    v4->debugGlobals.externLineCount = v7 + svLineCnt;
  }
}

/*
==============
R_CopyDebugPolys
==============
*/
void R_CopyDebugPolys(trDebugPoly_t *clPolys, unsigned int clPolyCnt, vec3_t *clVerts, unsigned int clVertCnt, trDebugPoly_t *svPolys, unsigned int svPolyCnt, vec3_t *svVerts, unsigned int svVertCnt)
{
  GfxBackEndData *v8; 
  __int64 v10; 
  __int64 v11; 
  trDebugPoly_t *externPolys; 
  vec3_t *externVerts; 

  v8 = frontEndDataOut;
  v10 = clVertCnt;
  v11 = clPolyCnt;
  externPolys = frontEndDataOut->debugGlobals.externPolys;
  if ( externPolys && frontEndDataOut->debugGlobals.externVerts )
  {
    if ( clPolys )
    {
      memcpy_0(externPolys, clPolys, 28 * clPolyCnt);
      externPolys += v11;
    }
    if ( svPolys )
      memcpy_0(externPolys, svPolys, 28 * svPolyCnt);
    externVerts = v8->debugGlobals.externVerts;
    v8->debugGlobals.externPolyCount = v11 + svPolyCnt;
    if ( clVerts )
    {
      memcpy_0(externVerts, clVerts, (unsigned int)(12 * v10));
      externVerts += v10;
    }
    if ( svVerts )
      memcpy_0(externVerts, svVerts, 12 * svVertCnt);
    v8->debugGlobals.externVertCount = v10 + svVertCnt;
  }
}

/*
==============
R_CopyDebugStrings
==============
*/
void R_CopyDebugStrings(trDebugString_t *clStrings, int clStringCnt, trDebugString_t *svStrings, int svStringCnt)
{
  GfxBackEndData *v4; 
  __int64 v7; 
  trDebugString_t *externStrings; 

  v4 = frontEndDataOut;
  v7 = clStringCnt;
  externStrings = frontEndDataOut->debugGlobals.externStrings;
  if ( externStrings )
  {
    if ( clStrings )
    {
      memcpy_0(frontEndDataOut->debugGlobals.externStrings, clStrings, (unsigned int)(112 * clStringCnt));
      externStrings += v7;
    }
    if ( svStrings )
      memcpy_0(externStrings, svStrings, (unsigned int)(112 * svStringCnt));
    v4->debugGlobals.externStringCount = v7 + svStringCnt;
  }
}

/*
==============
R_DebugUniqueColorFromIndex
==============
*/

void __fastcall R_DebugUniqueColorFromIndex(const int index, vec3_t *outColor, double _XMM2_8)
{
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm3, xmm0, cs:__real@3f1e377a
    vxorps  xmm2, xmm2, xmm2
    vmovaps [rsp+58h+var_18], xmm7
  }
  _RBX = outColor;
  __asm
  {
    vroundss xmm2, xmm2, xmm3, 1
    vsubss  xmm0, xmm3, xmm2
    vmovaps [rsp+58h+var_28], xmm9
    vmovaps [rsp+58h+var_38], xmm10
    vmovss  xmm10, cs:__real@40c00000
    vmulss  xmm9, xmm0, xmm10
    vmovaps xmm0, xmm9; X
    vmovaps xmm1, xmm10; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@40400000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm0, xmm1, xmm7; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm9, cs:__real@40800000; X
    vmovaps xmm1, xmm10; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm3, xmm0, cs:__real@40400000
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm3, xmm7; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm0, xmm9, cs:__real@40000000; X
    vmovaps xmm1, xmm10; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm3, xmm0, cs:__real@40400000
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm3, xmm7; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+58h+var_18]
    vmovaps xmm9, [rsp+58h+var_28]
    vmovaps xmm10, [rsp+58h+var_38]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
R_InitDebug
==============
*/
void R_InitDebug(void)
{
  memset_0(&debugGlobals, 0, sizeof(debugGlobals));
  debugGlobals.vertLimit = 0x8000;
  debugGlobals.polyLimit = 0x4000;
  debugGlobals.stringLimit = 4096;
  debugGlobals.lineLimit = 0x4000;
  debugGlobals.plumeLimit = 4096;
}

/*
==============
R_InitDebugEntry
==============
*/
void R_InitDebugEntry(DebugGlobals *debugGlobalsEntry)
{
  memset_0(debugGlobalsEntry, 0, sizeof(DebugGlobals));
  debugGlobalsEntry->vertLimit = 0x8000;
  debugGlobalsEntry->polyLimit = 0x4000;
  debugGlobalsEntry->stringLimit = 4096;
  debugGlobalsEntry->lineLimit = 0x4000;
  debugGlobalsEntry->plumeLimit = 4096;
}

/*
==============
R_InitDebugXmodelStats
==============
*/
void R_InitDebugXmodelStats(const XModel *xmodel, unsigned int type, unsigned int lod, unsigned int count, DebugXModelStats *xmodelStats)
{
  unsigned int SurfCount; 
  const char *name; 

  SurfCount = XModelGetSurfCount(xmodel, lod);
  name = xmodel->name;
  xmodelStats->lod = lod;
  xmodelStats->numInstances = count;
  xmodelStats->name = name;
  xmodelStats->type = type;
  xmodelStats->numSurfs = SurfCount;
}

/*
==============
R_NeedToAllocateDebugBuffers
==============
*/
bool R_NeedToAllocateDebugBuffers(int maxStringCount, int maxLineCount, unsigned int maxVertCount, unsigned int maxPolyCount)
{
  return !frontEndDataOut->debugGlobals.externStrings && maxStringCount > 0 || !frontEndDataOut->debugGlobals.externLines && maxLineCount > 0 || !frontEndDataOut->debugGlobals.externVerts && maxVertCount || !frontEndDataOut->debugGlobals.externPolys && maxPolyCount;
}

/*
==============
R_PrintDebugXModelStats
==============
*/
void R_PrintDebugXModelStats(const DebugXModelStats *xmodelStats)
{
  const char *v2; 
  char *fmt; 
  __int64 v4; 
  unsigned int numTris; 
  unsigned int numVerts; 
  __int64 v7[3]; 

  if ( ((unsigned __int8)&rg.showXModelRemoteConsoleCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &rg.showXModelRemoteConsoleCount) )
    __debugbreak();
  if ( _InterlockedIncrement(&rg.showXModelRemoteConsoleCount) == 1 )
  {
    v7[0] = (__int64)"none";
    v7[1] = (__int64)"skip dynamic models";
    v7[2] = (__int64)"skip static models";
    Com_Printf(8, "==== xmodel stats at frame(%d) filter : %s ====\n", frontEndDataOut->frameCount, (const char *)v7[rg.showXModelRankingFilterMode]);
    Com_Printf(8, "model, type, lod, numSurfs, numTris, numVerts\n");
    rg.showXModelRemoteConsoleHeader = 1;
  }
  while ( !rg.showXModelRemoteConsoleHeader )
    ;
  v2 = "static";
  if ( xmodelStats->type )
    v2 = "dynamic";
  numVerts = xmodelStats->numVerts;
  numTris = xmodelStats->numTris;
  LODWORD(v4) = xmodelStats->numSurfs;
  LODWORD(fmt) = xmodelStats->lod;
  Com_Printf(8, "%s, %s, %d, %d, %d, %d\n", xmodelStats->name, v2, fmt, v4, numTris, numVerts);
}

/*
==============
R_ResetXModelStats
==============
*/
void R_ResetXModelStats(void)
{
  unsigned __int64 v0; 
  unsigned int v1; 

  v0 = (unsigned __int64)&s_xmodelStatsCountLock & 3;
  do
  {
    if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_xmodelStatsCountLock) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&s_xmodelStatsCountLock, 1, 0) );
  v1 = s_xmodelStatsCount;
  if ( !rg.showXModelRankingStopUpdate )
    v1 = 0;
  s_xmodelStatsCount = v1;
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_xmodelStatsCountLock) )
    __debugbreak();
  if ( _InterlockedExchange(&s_xmodelStatsCountLock, 0) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug.cpp", 873, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_xmodelStatsCountLock, 0 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_xmodelStatsCountLock, 0 ) == 1") )
    __debugbreak();
}

/*
==============
R_ShutdownDebug
==============
*/
void R_ShutdownDebug(void)
{
  R_DebugFree((void **)&debugGlobals.polys);
  R_DebugFree((void **)&debugGlobals.verts);
  R_DebugFree((void **)&debugGlobals.externPolys);
  R_DebugFree((void **)&debugGlobals.externVerts);
  R_DebugFree((void **)&debugGlobals.strings);
  R_DebugFree((void **)&debugGlobals.externStrings);
  R_DebugFree((void **)&debugGlobals.lines);
  R_DebugFree((void **)&debugGlobals.externLines);
  R_DebugFree((void **)&debugGlobals.plumes);
}

/*
==============
R_ShutdownDebugEntry
==============
*/
void R_ShutdownDebugEntry(DebugGlobals *debugGlobalsEntry)
{
  R_DebugFree((void **)&debugGlobalsEntry->polys);
  R_DebugFree((void **)&debugGlobalsEntry->verts);
  R_DebugFree((void **)&debugGlobalsEntry->externPolys);
  R_DebugFree((void **)&debugGlobalsEntry->externVerts);
  R_DebugFree((void **)&debugGlobalsEntry->strings);
  R_DebugFree((void **)&debugGlobalsEntry->externStrings);
  R_DebugFree((void **)&debugGlobalsEntry->lines);
  R_DebugFree((void **)&debugGlobalsEntry->externLines);
  R_DebugFree((void **)&debugGlobalsEntry->plumes);
}

/*
==============
R_SortAndPublishXModelStats
==============
*/
void R_SortAndPublishXModelStats(void)
{
  trStatistics_t *stats; 
  unsigned int v1; 
  int v2; 
  AlgoCompareVal (__fastcall *v3)(const DebugXModelStats *, const DebugXModelStats *); 
  int showXModelRankingOffset; 
  unsigned int v5; 
  unsigned int v6; 
  AlgoCompareVal (__fastcall *compareFunc)(const DebugXModelStats *, const DebugXModelStats *); 
  int v8; 

  if ( !rg.showXModelRanking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug.cpp", 1053, ASSERT_TYPE_ASSERT, "(rg.showXModelRanking)", (const char *)&queryFormat, "rg.showXModelRanking") )
    __debugbreak();
  if ( rg.showXModelRanking >= 8u )
  {
    v8 = 8;
    LODWORD(compareFunc) = rg.showXModelRanking;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_debug.cpp", 1055, ASSERT_TYPE_ASSERT, "(unsigned)( rg.showXModelRanking ) < (unsigned)( ( sizeof( *array_counter( cmpFuncPtrs ) ) + 0 ) )", "rg.showXModelRanking doesn't index ARRAY_COUNT( cmpFuncPtrs )\n\t%i not in [0, %i)", compareFunc, v8) )
      __debugbreak();
  }
  stats = rg.stats;
  if ( rg.stats )
  {
    v1 = s_xmodelStatsCount;
    if ( s_xmodelStatsCount )
    {
      if ( !rg.showXModelRankingStopUpdate )
      {
        v2 = s_xmodelStatsCount - 1;
        v3 = cmpFuncPtrs[rg.showXModelRanking];
        if ( (int)(s_xmodelStatsCount - 1) > 0 )
        {
          Algo_MergeSort<DebugXModelStats,8193,enum AlgoCompareVal (*)(DebugXModelStats const &,DebugXModelStats const &)>(s_xmodelStats, (DebugXModelStats (*)[8193])s_xmodelStatsScratch, 0, v2 / 2, v3);
          Algo_MergeSort<DebugXModelStats,8193,enum AlgoCompareVal (*)(DebugXModelStats const &,DebugXModelStats const &)>(s_xmodelStats, (DebugXModelStats (*)[8193])s_xmodelStatsScratch, v2 / 2 + 1, v2, v3);
          Algo_Merge<DebugXModelStats,8193,enum AlgoCompareVal (*)(DebugXModelStats const &,DebugXModelStats const &)>(s_xmodelStats, (DebugXModelStats (*)[8193])s_xmodelStatsScratch, 0, v2 / 2, v2, v3);
          stats = rg.stats;
          v1 = s_xmodelStatsCount;
        }
      }
      showXModelRankingOffset = v1;
      v5 = 40;
      if ( v1 > rg.showXModelRankingOffset )
        showXModelRankingOffset = rg.showXModelRankingOffset;
      v6 = v1 - showXModelRankingOffset;
      if ( v6 < 0x28 )
        v5 = v6;
      stats->numXModelStats = v5;
      memcpy_0(rg.stats->rankedXModelStats, &s_xmodelStats[showXModelRankingOffset], 32i64 * v5);
    }
  }
}

/*
==============
R_TransferDebugGlobals
==============
*/
void R_TransferDebugGlobals(DebugGlobals *debugGlobalsEntry)
{
  int plumeCount; 
  int v3; 
  GfxDebugPlume *plumes; 

  if ( !debugGlobalsEntry->font )
    debugGlobalsEntry->font = R_RegisterFont("fonts/fira_mono_bold.ttf", 16);
  plumeCount = debugGlobals.plumeCount;
  v3 = 0;
  _R9 = debugGlobals.plumes;
  if ( debugGlobals.plumeCount > 0 )
  {
    _R8 = 0i64;
    do
    {
      if ( scene.def.time - _R9[_R8].startTime < 0 || scene.def.time - _R9[_R8].startTime > _R9[_R8].duration )
      {
        debugGlobals.plumeCount = plumeCount - 1;
        _RCX = 5i64 * (plumeCount - 1);
        __asm
        {
          vmovups ymm0, ymmword ptr [r9+rcx*8]
          vmovups ymmword ptr [r8+r9], ymm0
          vmovsd  xmm1, qword ptr [r9+rcx*8+20h]
          vmovsd  qword ptr [r8+r9+20h], xmm1
        }
        plumeCount = debugGlobals.plumeCount;
        _R9 = debugGlobals.plumes;
      }
      else
      {
        ++v3;
        ++_R8;
      }
    }
    while ( v3 < plumeCount );
  }
  if ( _R9 )
  {
    plumes = debugGlobalsEntry->plumes;
    if ( !plumes )
    {
      R_DebugAlloc((void **)&debugGlobalsEntry->plumes, 40 * debugGlobals.plumeLimit, "(debugGlobalsEntry->plumes)");
      plumes = debugGlobalsEntry->plumes;
      if ( !plumes )
        return;
      plumeCount = debugGlobals.plumeCount;
      _R9 = debugGlobals.plumes;
    }
    memcpy_0(plumes, _R9, 40i64 * plumeCount);
    plumeCount = debugGlobals.plumeCount;
  }
  debugGlobalsEntry->plumeCount = plumeCount;
}

/*
==============
R_XModelStatsInstancesCmpFunc
==============
*/
__int64 R_XModelStatsInstancesCmpFunc(const DebugXModelStats *a, const DebugXModelStats *b)
{
  unsigned int numInstances; 
  unsigned int v3; 

  numInstances = b->numInstances;
  v3 = a->numInstances;
  if ( numInstances <= v3 )
    return (unsigned int)-(v3 != numInstances);
  else
    return 1i64;
}

/*
==============
R_XModelStatsNameCmpFunc
==============
*/
__int64 R_XModelStatsNameCmpFunc(const DebugXModelStats *a, const DebugXModelStats *b)
{
  int v4; 
  unsigned int lod; 
  unsigned int v6; 
  __int64 result; 

  v4 = I_strcmp(a->name, b->name);
  if ( v4 )
  {
    result = 1i64;
    if ( v4 < 0 )
      return 0xFFFFFFFFi64;
  }
  else
  {
    lod = a->lod;
    v6 = b->lod;
    if ( lod <= v6 )
      return (unsigned int)-(v6 != lod);
    else
      return 1i64;
  }
  return result;
}

/*
==============
R_XModelStatsSurfCmpFunc
==============
*/
__int64 R_XModelStatsSurfCmpFunc(const DebugXModelStats *a, const DebugXModelStats *b)
{
  unsigned int numSurfs; 
  unsigned int v3; 

  numSurfs = b->numSurfs;
  v3 = a->numSurfs;
  if ( numSurfs <= v3 )
    return (unsigned int)-(v3 != numSurfs);
  else
    return 1i64;
}

/*
==============
R_XModelStatsTrisCmpFunc
==============
*/
__int64 R_XModelStatsTrisCmpFunc(const DebugXModelStats *a, const DebugXModelStats *b)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int numTris; 
  unsigned int v6; 

  if ( rg.showXModelRanking == 7 )
  {
    v2 = b->numTris * b->numInstances;
    v3 = a->numTris * a->numInstances;
    if ( v2 <= v3 )
      return (unsigned int)-(v3 != v2);
    return 1i64;
  }
  numTris = b->numTris;
  v6 = a->numTris;
  if ( numTris > v6 )
    return 1i64;
  return (unsigned int)-(v6 != numTris);
}

/*
==============
R_XModelStatsVertCmpFunc
==============
*/
__int64 R_XModelStatsVertCmpFunc(const DebugXModelStats *a, const DebugXModelStats *b)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int numVerts; 
  unsigned int v6; 

  if ( rg.showXModelRanking == 6 )
  {
    v2 = b->numVerts * b->numInstances;
    v3 = a->numVerts * a->numInstances;
    if ( v2 <= v3 )
      return (unsigned int)-(v3 != v2);
    return 1i64;
  }
  numVerts = b->numVerts;
  v6 = a->numVerts;
  if ( numVerts > v6 )
    return 1i64;
  return (unsigned int)-(v6 != numVerts);
}

