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
  int v4; 
  int v5; 
  float v6; 
  int v7; 
  int v8; 
  float v9; 
  int v10; 
  const int (*v12)[2]; 
  __int64 v15; 
  vec3_t start; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  int v28; 
  float v29; 
  float v30; 
  int v31; 
  float v32; 
  float v33; 
  int v34; 
  float v35; 
  float v36; 
  int v37; 

  *(float *)&v4 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  *(float *)&v5 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  v6 = bounds->midPoint.v[1];
  *(float *)&v7 = v6 - bounds->halfSize.v[1];
  *(float *)&v8 = v6 + bounds->halfSize.v[1];
  v9 = bounds->midPoint.v[2];
  *(float *)&v10 = v9 - bounds->halfSize.v[2];
  *(float *)&v28 = v9 + bounds->halfSize.v[2];
  v31 = v28;
  v34 = v28;
  v37 = v28;
  start.v[0] = *(float *)&v4;
  start.v[1] = *(float *)&v7;
  start.v[2] = *(float *)&v10;
  v17 = *(float *)&v5;
  v18 = *(float *)&v7;
  v19 = *(float *)&v10;
  v20 = *(float *)&v4;
  v21 = *(float *)&v8;
  v22 = *(float *)&v10;
  v23 = *(float *)&v5;
  v24 = *(float *)&v8;
  v25 = *(float *)&v10;
  v26 = *(float *)&v4;
  v27 = *(float *)&v7;
  v29 = *(float *)&v5;
  v30 = *(float *)&v7;
  v32 = *(float *)&v4;
  v33 = *(float *)&v8;
  v35 = *(float *)&v5;
  v36 = *(float *)&v8;
  v12 = iEdgePairs_7;
  v15 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start + *(_DWORD *)v12, &start + (int)(*v12)[1], color, depthTest);
    ++v12;
    --v15;
  }
  while ( v15 );
}

/*
==============
R_AddDebugBoxDepthTest
==============
*/
void R_AddDebugBoxDepthTest(DebugGlobals *debugGlobalsEntry, const Bounds *bounds, const vec4_t *color)
{
  int v3; 
  int v4; 
  float v5; 
  int v6; 
  int v7; 
  float v8; 
  int v9; 
  const int (*v11)[2]; 
  __int64 v13; 
  vec3_t start; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  int v26; 
  float v27; 
  float v28; 
  int v29; 
  float v30; 
  float v31; 
  int v32; 
  float v33; 
  float v34; 
  int v35; 

  *(float *)&v3 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  *(float *)&v4 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  v5 = bounds->midPoint.v[1];
  *(float *)&v6 = v5 - bounds->halfSize.v[1];
  *(float *)&v7 = v5 + bounds->halfSize.v[1];
  v8 = bounds->midPoint.v[2];
  *(float *)&v9 = v8 - bounds->halfSize.v[2];
  *(float *)&v26 = v8 + bounds->halfSize.v[2];
  v29 = v26;
  v32 = v26;
  v35 = v26;
  start.v[0] = *(float *)&v3;
  start.v[1] = *(float *)&v6;
  start.v[2] = *(float *)&v9;
  v15 = *(float *)&v4;
  v16 = *(float *)&v6;
  v17 = *(float *)&v9;
  v18 = *(float *)&v3;
  v19 = *(float *)&v7;
  v20 = *(float *)&v9;
  v21 = *(float *)&v4;
  v22 = *(float *)&v7;
  v23 = *(float *)&v9;
  v24 = *(float *)&v3;
  v25 = *(float *)&v6;
  v27 = *(float *)&v4;
  v28 = *(float *)&v6;
  v30 = *(float *)&v3;
  v31 = *(float *)&v7;
  v33 = *(float *)&v4;
  v34 = *(float *)&v7;
  v11 = iEdgePairs_8;
  v13 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start + *(_DWORD *)v11, &start + (int)(*v11)[1], color, 1);
    ++v11;
    --v13;
  }
  while ( v13 );
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
  float *v6; 
  unsigned int i; 
  float v15; 
  float v20; 
  float v21; 
  float v26; 
  float v27; 
  float v28; 
  const int (*v29)[2]; 
  __int64 v30; 
  char v32; 
  vec3_t start[8]; 

  v6 = &start[0].v[2];
  for ( i = 0; i < 8; ++i )
  {
    _XMM4 = LODWORD(bounds->halfSize.v[0]);
    _XMM0 = i & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v15 = *(float *)&_XMM1 + bounds->midPoint.v[0];
    _XMM4 = LODWORD(bounds->halfSize.v[1]);
    _XMM0 = i & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v21 = *(float *)&_XMM1 + bounds->midPoint.v[1];
    v20 = v21;
    _XMM4 = LODWORD(bounds->halfSize.v[2]);
    _XMM0 = i & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v26 = *(float *)&_XMM1 + bounds->midPoint.v[2];
    *v6 = v26;
    *(v6 - 2) = v15;
    *(v6 - 1) = v21;
    if ( v6 - 2 == (float *)&v32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v27 = (float)((float)(v15 * rotation->m[0].v[2]) + (float)(v21 * rotation->m[1].v[2])) + (float)(v26 * rotation->m[2].v[2]);
    v28 = (float)((float)((float)(v15 * rotation->m[0].v[1]) + (float)(v20 * rotation->m[1].v[1])) + (float)(v26 * rotation->m[2].v[1])) + origin->v[1];
    *(v6 - 2) = (float)((float)((float)(v20 * rotation->m[1].v[0]) + (float)(v15 * rotation->m[0].v[0])) + (float)(v26 * rotation->m[2].v[0])) + origin->v[0];
    *v6 = v27 + origin->v[2];
    *(v6 - 1) = v28;
    v6 += 3;
  }
  v29 = iEdgePairs_5;
  v30 = 12i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start[*(_DWORD *)v29], &start[(*v29)[1]], color, depthTest);
    ++v29;
    --v30;
  }
  while ( v30 );
}

/*
==============
R_AddDebugCross
==============
*/

void __fastcall R_AddDebugCross(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, double size, const vec4_t *color)
{
  unsigned int v7; 
  float v9; 
  float v15; 
  float v16; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  trDebugLine_t *lines; 
  trDebugLine_t *v23; 

  v7 = 0;
  _XMM13 = *(_OWORD *)&size ^ _xmm;
  v9 = *(float *)&size;
  do
  {
    _XMM0 = v7 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm5, xmm13, xmm12, xmm2
    }
    _XMM0 = v7 & 2;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    v15 = pos->v[1];
    v16 = pos->v[2];
    __asm { vblendvps xmm4, xmm13, xmm12, xmm2 }
    v18 = *(float *)&_XMM4 + v15;
    v19 = v15 - *(float *)&_XMM4;
    v20 = *(float *)&_XMM5 + pos->v[0];
    v21 = pos->v[0] - *(float *)&_XMM5;
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount + 1 <= debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        v23 = &lines[debugGlobalsEntry->lineCount];
        v23->start.v[0] = v20;
        v23->start.v[1] = v18;
        v23->start.v[2] = v9 + v16;
        v23->end.v[0] = v21;
        v23->end.v[1] = v19;
        v23->end.v[2] = v16 - v9;
        Byte4PackVertexColor(color, v23->color.array);
        v23->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    ++v7;
  }
  while ( v7 < 4 );
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
  __m256i v6; 
  float v7; 
  float v8; 
  vec4_t out; 
  vec4_t v12; 
  vec4_t v13; 
  vec4_t v14; 
  vec4_t v15; 
  vec4_t v16; 
  vec4_t v17; 
  vec4_t v18; 
  vec4_t vec; 
  vec4_t v20; 
  vec4_t v21; 
  vec4_t v22; 
  vec4_t v23; 
  vec4_t v24; 
  vec4_t v25; 
  vec4_t v26; 
  vec4_t v27; 
  vec4_t v28; 
  vec4_t v29; 
  vec4_t v30; 
  vec4_t v31; 
  vec4_t v32; 
  vec4_t v33; 
  vec4_t v34; 
  vec4_t v35; 
  vec4_t v36; 
  tmat44_t<vec4_t> v37; 
  tmat44_t<vec4_t> dst; 
  vec4_t v39; 
  vec4_t v40; 
  vec4_t v41; 
  vec4_t v42; 
  vec4_t v43; 
  vec4_t v44; 
  vec4_t v45; 
  vec4_t v46; 
  vec4_t v47; 
  tmat44_t<vec4_t> mat; 

  v6 = *(__m256i *)srcViewMatrix->row2.v;
  *(__m256i *)mat.m[0].v = *(__m256i *)srcViewMatrix->m[0].v;
  LODWORD(v7) = LODWORD(viewOrigin->v[0]) ^ _xmm;
  *(__m256i *)mat.row2.v = v6;
  LODWORD(v8) = LODWORD(viewOrigin->v[1]) ^ _xmm;
  vec.v[0] = v7;
  LODWORD(vec.v[2]) = LODWORD(viewOrigin->v[2]) ^ _xmm;
  vec.v[1] = v8;
  vec.v[3] = FLOAT_1_0;
  MatrixTransformVector44Aligned(&vec, srcViewMatrix, &mat.m[3]);
  MatrixInverse44Aligned(projMatrix, &dst);
  MatrixInverse44Aligned(&mat, &v37);
  v39 = (vec4_t)_xmm;
  v40 = (vec4_t)_xmm;
  v41 = (vec4_t)_xmm;
  v42 = (vec4_t)_xmm;
  v43 = (vec4_t)_xmm;
  v44 = (vec4_t)_xmm;
  v45 = (vec4_t)_xmm;
  v46 = (vec4_t)_xmm;
  MatrixTransformVector44Aligned(&v39, &dst, &out);
  MatrixTransformVector44Aligned(&v40, &dst, &v12);
  MatrixTransformVector44Aligned(&v41, &dst, &v13);
  MatrixTransformVector44Aligned(&v42, &dst, &v14);
  MatrixTransformVector44Aligned(&v43, &dst, &v15);
  MatrixTransformVector44Aligned(&v44, &dst, &v16);
  MatrixTransformVector44Aligned(&v45, &dst, &v17);
  MatrixTransformVector44Aligned(&v46, &dst, &v18);
  if ( out.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v20.v[1] = (float)(1.0 / out.v[3]) * out.v[1];
  v20.v[0] = (float)(1.0 / out.v[3]) * out.v[0];
  v20.v[2] = (float)(1.0 / out.v[3]) * out.v[2];
  v20.v[3] = FLOAT_1_0;
  if ( v12.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v21.v[1] = (float)(1.0 / v12.v[3]) * v12.v[1];
  v21.v[0] = (float)(1.0 / v12.v[3]) * v12.v[0];
  v21.v[2] = (float)(1.0 / v12.v[3]) * v12.v[2];
  v21.v[3] = FLOAT_1_0;
  if ( v13.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v22.v[1] = (float)(1.0 / v13.v[3]) * v13.v[1];
  v22.v[0] = (float)(1.0 / v13.v[3]) * v13.v[0];
  v22.v[2] = (float)(1.0 / v13.v[3]) * v13.v[2];
  v22.v[3] = FLOAT_1_0;
  if ( v14.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v23.v[1] = (float)(1.0 / v14.v[3]) * v14.v[1];
  v23.v[0] = (float)(1.0 / v14.v[3]) * v14.v[0];
  v23.v[2] = (float)(1.0 / v14.v[3]) * v14.v[2];
  v23.v[3] = FLOAT_1_0;
  if ( v15.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v24.v[1] = (float)(1.0 / v15.v[3]) * v15.v[1];
  v24.v[0] = (float)(1.0 / v15.v[3]) * v15.v[0];
  v24.v[2] = (float)(1.0 / v15.v[3]) * v15.v[2];
  v24.v[3] = FLOAT_1_0;
  if ( v16.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v25.v[1] = (float)(1.0 / v16.v[3]) * v16.v[1];
  v25.v[0] = (float)(1.0 / v16.v[3]) * v16.v[0];
  v25.v[2] = (float)(1.0 / v16.v[3]) * v16.v[2];
  v25.v[3] = FLOAT_1_0;
  if ( v17.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v26.v[1] = (float)(1.0 / v17.v[3]) * v17.v[1];
  v26.v[0] = (float)(1.0 / v17.v[3]) * v17.v[0];
  v26.v[2] = (float)(1.0 / v17.v[3]) * v17.v[2];
  v26.v[3] = FLOAT_1_0;
  if ( v18.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 714, ASSERT_TYPE_ASSERT, "(in[3] != 0.0f)", (const char *)&queryFormat, "in[3] != 0.0f") )
    __debugbreak();
  v27.v[1] = (float)(1.0 / v18.v[3]) * v18.v[1];
  v47 = (vec4_t)_xmm;
  v27.v[0] = (float)(1.0 / v18.v[3]) * v18.v[0];
  v27.v[2] = (float)(1.0 / v18.v[3]) * v18.v[2];
  v27.v[3] = FLOAT_1_0;
  MatrixTransformVector44Aligned(&v20, &v37, &v34);
  MatrixTransformVector44Aligned(&v21, &v37, &v28);
  MatrixTransformVector44Aligned(&v22, &v37, &v36);
  MatrixTransformVector44Aligned(&v23, &v37, &v29);
  MatrixTransformVector44Aligned(&v24, &v37, &v33);
  MatrixTransformVector44Aligned(&v25, &v37, &v30);
  MatrixTransformVector44Aligned(&v26, &v37, &v35);
  MatrixTransformVector44Aligned(&v27, &v37, &v31);
  MatrixTransformVector44Aligned(&v47, &v37, &v32);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v34, (const vec3_t *)&v28, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v28, (const vec3_t *)&v29, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v29, (const vec3_t *)&v36, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v36, (const vec3_t *)&v34, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v31, (const vec3_t *)&v35, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v35, (const vec3_t *)&v33, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v33, (const vec3_t *)&v30, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v30, (const vec3_t *)&v31, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v34, (const vec3_t *)&v33, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v28, (const vec3_t *)&v30, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v36, (const vec3_t *)&v35, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v29, (const vec3_t *)&v31, frustumColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v32, (const vec3_t *)&v28, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v32, (const vec3_t *)&v29, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v32, (const vec3_t *)&v30, apexColor, 0);
  R_AddDebugLineInternal(debugGlobalsEntry, (const vec3_t *)&v32, (const vec3_t *)&v31, apexColor, 0);
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
void R_AddDebugPoint(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, const float size, const vec4_t *color)
{
  signed int i; 
  float v8; 
  float v9; 
  trDebugLine_t *lines; 
  float v11; 
  trDebugLine_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  for ( i = 0; (unsigned int)i < 3; ++i )
  {
    v8 = pos->v[1];
    v9 = pos->v[2];
    v16 = pos->v[0];
    v17 = v8;
    v18 = v9;
    v19 = v16;
    v20 = v8;
    v21 = v9;
    *(&v16 + i) = size + *(&v16 + i);
    *(&v19 + i) = *(&v19 + i) - size;
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount < debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        v11 = v17;
        v12 = &lines[debugGlobalsEntry->lineCount];
        v12->start.v[0] = v16;
        v13 = v18;
        v12->start.v[1] = v11;
        v14 = v19;
        v12->start.v[2] = v13;
        v15 = v20;
        v12->end.v[0] = v14;
        v12->end.v[2] = v21;
        v12->end.v[1] = v15;
        Byte4PackVertexColor(color, v12->color.array);
        v12->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
  }
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

void __fastcall R_AddDebugPyramidOriented(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, double baseHalfSize, float height, const tmat33_t<vec3_t> *rotation, const vec4_t *color, bool depthTest)
{
  unsigned int v7; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const int (*v26)[2]; 
  __int64 v27; 
  vec3_t start[5]; 

  v7 = 0;
  _XMM10 = *(_OWORD *)&baseHalfSize;
  v10 = rotation->m[1].v[0];
  v11 = rotation->m[0].v[0];
  v12 = rotation->m[2].v[0];
  v13 = rotation->m[1].v[1];
  v14 = rotation->m[0].v[1];
  v15 = 0i64;
  do
  {
    _XMM0 = v7;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm10, xmm9, xmm2
    }
    v19 = *(float *)&_XMM0 * verts[v15].v[0];
    v20 = *(float *)&_XMM0 * verts[v15].v[2];
    v21 = *(float *)&_XMM0 * verts[v15].v[1];
    v22 = (float)((float)(v19 * v11) + (float)(v21 * v10)) + (float)(v20 * v12);
    v23 = (float)((float)(v19 * v14) + (float)(v21 * v13)) + (float)(v20 * rotation->m[2].v[1]);
    v24 = v20 * rotation->m[2].v[2];
    v25 = (float)(v19 * rotation->m[0].v[2]) + (float)(v21 * rotation->m[1].v[2]);
    start[v15].v[0] = v22 + origin->v[0];
    start[v15].v[1] = v23 + origin->v[1];
    ++v7;
    start[v15++].v[2] = (float)(v25 + v24) + origin->v[2];
  }
  while ( v7 < 5 );
  v26 = iEdgePairs_6;
  v27 = 8i64;
  do
  {
    R_AddDebugLineInternal(debugGlobalsEntry, &start[*(_DWORD *)v26], &start[(*v26)[1]], color, depthTest);
    ++v26;
    --v27;
  }
  while ( v27 );
}

/*
==============
R_AddDebugStar
==============
*/

void __fastcall R_AddDebugStar(DebugGlobals *debugGlobalsEntry, const vec3_t *pos, double size, const vec4_t *color)
{
  signed int i; 
  float v8; 
  float v9; 
  trDebugLine_t *lines; 
  float v11; 
  trDebugLine_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  unsigned int j; 
  float v30; 
  float v31; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  trDebugLine_t *v37; 
  trDebugLine_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 

  for ( i = 0; (unsigned int)i < 3; ++i )
  {
    v8 = pos->v[1];
    v9 = pos->v[2];
    v39 = pos->v[0];
    v40 = v8;
    v41 = v9;
    v42 = v39;
    v43 = v8;
    v44 = v9;
    *(&v39 + i) = *(float *)&size + *(&v39 + i);
    *(&v42 + i) = *(&v42 + i) - *(float *)&size;
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount < debugGlobalsEntry->lineLimit )
    {
      lines = debugGlobalsEntry->lines;
      if ( lines )
      {
        v11 = v40;
        v12 = &lines[debugGlobalsEntry->lineCount];
        v12->start.v[0] = v39;
        v13 = v41;
        v12->start.v[1] = v11;
        v14 = v42;
        v12->start.v[2] = v13;
        v15 = v43;
        v12->end.v[0] = v14;
        v12->end.v[2] = v44;
        v12->end.v[1] = v15;
        Byte4PackVertexColor(color, v12->color.array);
        v12->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
  }
  v17 = *(_OWORD *)&size;
  *(float *)&v17 = *(float *)&size * 0.57735002;
  v16 = *(float *)&size * 0.57735002;
  _XMM13 = v17 ^ _xmm;
  for ( j = 0; j < 4; ++j )
  {
    _XMM0 = j & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm3, xmm13, xmm3, xmm2
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm5, xmm13, xmm12, xmm2
    }
    _XMM0 = j & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm13, xmm2
    }
    _XMM0 = j & 2;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    v30 = pos->v[1];
    v31 = pos->v[2];
    __asm { vblendvps xmm4, xmm3, xmm12, xmm2 }
    v33 = *(float *)&_XMM5 + pos->v[0];
    v34 = pos->v[0] - *(float *)&_XMM5;
    v35 = *(float *)&_XMM4 + v30;
    v36 = v30 - *(float *)&_XMM4;
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    if ( debugGlobalsEntry->lineCount + 1 <= debugGlobalsEntry->lineLimit )
    {
      v37 = debugGlobalsEntry->lines;
      if ( v37 )
      {
        v38 = &v37[debugGlobalsEntry->lineCount];
        v38->start.v[0] = v33;
        v38->start.v[1] = v35;
        v38->start.v[2] = v16 + v31;
        v38->end.v[0] = v34;
        v38->end.v[1] = v36;
        v38->end.v[2] = v31 - v16;
        Byte4PackVertexColor(color, v38->color.array);
        v38->depthTest = 0;
        ++debugGlobalsEntry->lineCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugLines = 1;
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
  }
}

/*
==============
R_AddDebugString
==============
*/
void R_AddDebugString(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const vec4_t *color, float size, const char *string)
{
  __int64 stringCount; 
  trDebugString_t *strings; 
  trDebugString_t *v10; 

  Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
  stringCount = debugGlobalsEntry->stringCount;
  if ( (int)stringCount + 1 <= debugGlobalsEntry->stringLimit )
  {
    strings = debugGlobalsEntry->strings;
    if ( strings )
    {
      v10 = &strings[stringCount];
      v10->xyz.v[0] = origin->v[0];
      v10->xyz.v[1] = origin->v[1];
      v10->xyz.v[2] = origin->v[2];
      Byte4PackVertexColor(color, v10->color.array);
      v10->font = debugGlobalsEntry->font;
      v10->size = size;
      strncpy(v10->text, string, 0x4Bui64);
      v10->text[75] = 0;
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
void R_AddScaledDebugString(DebugGlobals *debugGlobalsEntry, const GfxCamera *camera, const vec3_t *origin, const vec4_t *color, const char *string)
{
  float value; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v14; 
  __int128 v17; 
  __int64 stringCount; 
  trDebugString_t *strings; 
  trDebugString_t *v22; 

  value = r_maxDebugStringDistance->current.value;
  v9 = origin->v[0] - camera->origin.v[0];
  v14 = LODWORD(origin->v[1]);
  *(float *)&v14 = origin->v[1] - camera->origin.v[1];
  v10 = v14;
  v11 = origin->v[2] - camera->origin.v[2];
  v12 = r_debugTextSize->current.value;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v9 * v9)) + (float)(v11 * v11));
  _XMM7 = v14;
  if ( *(float *)&v14 >= r_minDebugStringDistance->current.value && (value == 0.0 || *(float *)&v14 <= value) )
  {
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm6, xmm0
    }
    v17 = v10;
    *(float *)&v17 = (float)((float)((float)((float)((float)(*(float *)&v10 * (float)(1.0 / *(float *)&_XMM0)) * camera->axis.m[0].v[1]) + (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * camera->axis.m[0].v[0])) + (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * camera->axis.m[0].v[2])) - 0.995) * (float)(*(float *)&_XMM7 * r_debugTextScaling->current.value);
    _XMM1 = v17;
    __asm { vmaxss  xmm6, xmm1, xmm6 }
    Sys_EnterCriticalSection(CRITSECT_DEBUG_LINE);
    stringCount = debugGlobalsEntry->stringCount;
    if ( (int)stringCount + 1 <= debugGlobalsEntry->stringLimit )
    {
      strings = debugGlobalsEntry->strings;
      if ( strings )
      {
        v22 = &strings[stringCount];
        v22->xyz.v[0] = origin->v[0];
        v22->xyz.v[1] = origin->v[1];
        v22->xyz.v[2] = origin->v[2];
        Byte4PackVertexColor(color, v22->color.array);
        v22->font = debugGlobalsEntry->font;
        v22->size = *(float *)&_XMM6 * v12;
        strncpy(v22->text, string, 0x4Bui64);
        v22->text[75] = 0;
        ++debugGlobalsEntry->stringCount;
      }
      else
      {
        debugGlobalsEntry->enableDebugString = 1;
      }
      Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_DEBUG_STRING_LIMIT);
      Sys_LeaveCriticalSection(CRITSECT_DEBUG_LINE);
    }
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
void R_DebugUniqueColorFromIndex(const int index, vec3_t *outColor)
{
  float v5; 
  float v6; 
  double v7; 
  double v8; 
  float v9; 
  double v10; 

  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm3, 1 }
  v5 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)index).m128_f32[0] * 0.61803401) - *(float *)&_XMM2) * 6.0;
  v6 = fmodf_0(v5, 6.0);
  v7 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outColor->v[0] = *(float *)&v7;
  *(float *)&v7 = fmodf_0(v5 + 4.0, 6.0);
  v8 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v7 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outColor->v[1] = *(float *)&v8;
  LODWORD(v9) = COERCE_UNSIGNED_INT(fmodf_0(v5 + 2.0, 6.0) - 3.0) & _xmm;
  v10 = I_fclamp(v9 - 1.0, 0.0, 1.0);
  outColor->v[2] = *(float *)&v10;
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
  __int64 v5; 
  int v6; 
  GfxDebugPlume *v7; 

  if ( !debugGlobalsEntry->font )
    debugGlobalsEntry->font = R_RegisterFont("fonts/fira_mono_bold.ttf", 16);
  plumeCount = debugGlobals.plumeCount;
  v3 = 0;
  plumes = debugGlobals.plumes;
  if ( debugGlobals.plumeCount > 0 )
  {
    v5 = 0i64;
    do
    {
      if ( scene.def.time - plumes[v5].startTime < 0 || scene.def.time - plumes[v5].startTime > plumes[v5].duration )
      {
        v6 = plumeCount - 1;
        debugGlobals.plumeCount = v6;
        *(__m256i *)plumes[v5].origin.v = *(__m256i *)plumes[v6].origin.v;
        *(double *)&plumes[v5].startTime = *(double *)&plumes[v6].startTime;
        plumeCount = debugGlobals.plumeCount;
        plumes = debugGlobals.plumes;
      }
      else
      {
        ++v3;
        ++v5;
      }
    }
    while ( v3 < plumeCount );
  }
  if ( plumes )
  {
    v7 = debugGlobalsEntry->plumes;
    if ( !v7 )
    {
      R_DebugAlloc((void **)&debugGlobalsEntry->plumes, 40 * debugGlobals.plumeLimit, "(debugGlobalsEntry->plumes)");
      v7 = debugGlobalsEntry->plumes;
      if ( !v7 )
        return;
      plumeCount = debugGlobals.plumeCount;
      plumes = debugGlobals.plumes;
    }
    memcpy_0(v7, plumes, 40i64 * plumeCount);
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

