/*
==============
CG_DrawSmallDevStringColor
==============
*/

int __fastcall CG_DrawSmallDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  return ?CG_DrawSmallDevStringColor@@YAHPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@H@Z(scrPlace, x, y, s, color, align);
}

/*
==============
CG_DebugStar
==============
*/

void __fastcall CG_DebugStar(const vec3_t *point, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugStar@@YAXAEBTvec3_t@@AEBTvec4_t@@HH@Z(point, color, depthTest, duration);
}

/*
==============
CG_WorldDirToScreenPosReal
==============
*/

bool __fastcall CG_WorldDirToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldDir, const float tanHalfFOVX, const float tanHalfFOVY, vec2_t *outScreenPos)
{
  return ?CG_WorldDirToScreenPosReal@@YA_NW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTvec3_t@@MMAEATvec2_t@@@Z(localClientNum, scrPlace, worldDir, tanHalfFOVX, tanHalfFOVY, outScreenPos);
}

/*
==============
CG_DebugEllipse
==============
*/

void __fastcall CG_DebugEllipse(const vec3_t *center, float radiusA, float radiusB, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugEllipse@@YAXAEBTvec3_t@@MM00AEBTvec4_t@@HH@Z(center, radiusA, radiusB, right, up, color, depthTest, duration);
}

/*
==============
CG_DebugBoxOriented
==============
*/

void __fastcall CG_DebugBoxOriented(const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugBoxOriented@@YAXAEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@HH@Z(origin, bounds, rotation, color, depthTest, duration);
}

/*
==============
CG_DebugStarWithText
==============
*/

void __fastcall CG_DebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int duration)
{
  ?CG_DebugStarWithText@@YAXAEBTvec3_t@@AEBTvec4_t@@1PEBDMH@Z(point, starColor, textColor, string, fontsize, duration);
}

/*
==============
CG_DrawStringExt
==============
*/

void __fastcall CG_DrawStringExt(const ScreenPlacement *scrPlace, float x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  ?CG_DrawStringExt@@YAXPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@HHMH@Z(scrPlace, x, y, string, setColor, forceColor, shadow, charHeight, adjust);
}

/*
==============
CG_DebugArc
==============
*/

void __fastcall CG_DebugArc(const vec3_t *center, float radius, float angle0, float angle1, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugArc@@YAXAEBTvec3_t@@MMMAEBTvec4_t@@HH@Z(center, radius, angle0, angle1, color, depthTest, duration);
}

/*
==============
CG_DebugSemiCircle
==============
*/

void __fastcall CG_DebugSemiCircle(const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugSemiCircle@@YAXAEBTvec3_t@@M00AEBTvec4_t@@HH@Z(center, radius, right, up, color, depthTest, duration);
}

/*
==============
CG_DebugLine
==============
*/

void __fastcall CG_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@HH@Z(start, end, color, depthTest, duration);
}

/*
==============
CG_DebugBar
==============
*/

void __fastcall CG_DebugBar(const vec3_t *origin, const vec3_t *dir, float fraction, float width, float height, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugBar@@YAXTvec3_t@@0MMMTvec4_t@@HH@Z(origin, dir, fraction, width, height, color, depthTest, duration);
}

/*
==============
CG_DebugCapsule
==============
*/

void __fastcall CG_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugCapsule@@YAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
CG_WorldDirToScreenPosVirtualCentered
==============
*/

bool __fastcall CG_WorldDirToScreenPosVirtualCentered(LocalClientNum_t localClientNum, const vec3_t *worldDir, vec2_t *outScreenPos)
{
  return ?CG_WorldDirToScreenPosVirtualCentered@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@AEATvec2_t@@@Z(localClientNum, worldDir, outScreenPos);
}

/*
==============
CG_DrawRotatedPic
==============
*/

void __fastcall CG_DrawRotatedPic(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  ?CG_DrawRotatedPic@@YAXPEBUScreenPlacement@@MMMMHHMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, width, height, horzAlign, vertAlign, angle, color, material);
}

/*
==============
CG_DebugSphericalSector
==============
*/

void __fastcall CG_DebugSphericalSector(const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugSphericalSector@@YAXAEBTvec3_t@@0MMAEBTvec4_t@@HH@Z(origin, direction, radius, length, color, depthTest, duration);
}

/*
==============
CG_DrawRotatedPicPhysical
==============
*/

void __fastcall CG_DrawRotatedPicPhysical(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float angle, const vec4_t *color, Material *material)
{
  ?CG_DrawRotatedPicPhysical@@YAXPEBUScreenPlacement@@MMMMMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, width, height, angle, color, material);
}

/*
==============
CG_Draw2DLine
==============
*/

void __fastcall CG_Draw2DLine(const ScreenPlacement *scrPlace, float p1x, float p1y, float p2x, float p2y, float lineWidth, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?CG_Draw2DLine@@YAXPEBUScreenPlacement@@MMMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, p1x, p1y, p2x, p2y, lineWidth, horzAlign, vertAlign, color, material);
}

/*
==============
CG_DrawTools_FadeAlpha
==============
*/

double __fastcall CG_DrawTools_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec)
{
  double result; 

  *(float *)&result = ?CG_DrawTools_FadeAlpha@@YAMHHHH@Z(timeNow, startMsec, totalMsec, fadeMsec);
  return result;
}

/*
==============
CG_DebugSphere
==============
*/

void __fastcall CG_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugSphere@@YAXAEBTvec3_t@@MAEBTvec4_t@@HH@Z(center, radius, color, depthTest, duration);
}

/*
==============
CG_DebugSphericalSectorFrustum
==============
*/

void __fastcall CG_DebugSphericalSectorFrustum(const vec3_t *origin, const vec3_t *direction, float radiusNear, float radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugSphericalSectorFrustum@@YAXAEBTvec3_t@@0MMMAEBTvec4_t@@HH@Z(origin, direction, radiusNear, radiusFar, length, color, depthTest, duration);
}

/*
==============
CG_DrawVLine
==============
*/

void __fastcall CG_DrawVLine(const ScreenPlacement *scrPlace, float x, float top, float lineWidth, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?CG_DrawVLine@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, top, lineWidth, height, horzAlign, vertAlign, color, material);
}

/*
==============
CG_Draw2DRect
==============
*/

void __fastcall CG_Draw2DRect(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?CG_Draw2DRect@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, width, height, horzAlign, vertAlign, color, material);
}

/*
==============
CG_DrawSmallDevString
==============
*/

int __fastcall CG_DrawSmallDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  return ?CG_DrawSmallDevString@@YAHPEBUScreenPlacement@@MMPEBDMH@Z(scrPlace, x, y, s, alpha, align);
}

/*
==============
CG_DebugAxis
==============
*/

void __fastcall CG_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, int depthTest, int duration)
{
  ?CG_DebugAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@MHH@Z(axes, pos, length, depthTest, duration);
}

/*
==============
CG_WorldPosToScreenPosRealPrecise
==============
*/

bool __fastcall CG_WorldPosToScreenPosRealPrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, vec2_t *outScreenPos)
{
  return ?CG_WorldPosToScreenPosRealPrecise@@YA_NW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTdvec3_t@@AEATvec2_t@@@Z(localClientNum, scrPlace, worldPos, outScreenPos);
}

/*
==============
CG_WorldPosToScreenPosRealForScenePrecise
==============
*/

bool __fastcall CG_WorldPosToScreenPosRealForScenePrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  return ?CG_WorldPosToScreenPosRealForScenePrecise@@YA_NW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTdvec3_t@@HAEATvec2_t@@@Z(localClientNum, scrPlace, worldPos, space, outScreenPos);
}

/*
==============
CG_DebugConeFrustum
==============
*/

void __fastcall CG_DebugConeFrustum(const vec3_t *origin, const vec3_t *direction, float radiusNear, float radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugConeFrustum@@YAXAEBTvec3_t@@0MMMAEBTvec4_t@@HH@Z(origin, direction, radiusNear, radiusFar, length, color, depthTest, duration);
}

/*
==============
CG_DebugCylinder
==============
*/

void __fastcall CG_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugCylinder@@YAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
CG_DebugCone
==============
*/

void __fastcall CG_DebugCone(const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugCone@@YAXAEBTvec3_t@@0MMAEBTvec4_t@@HH@Z(origin, direction, radius, length, color, depthTest, duration);
}

/*
==============
CG_DrawTools_MiniMapChanged
==============
*/

void __fastcall CG_DrawTools_MiniMapChanged(LocalClientNum_t localClientNum)
{
  ?CG_DrawTools_MiniMapChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawRotatedQuadPic
==============
*/

void __fastcall CG_DrawRotatedQuadPic(const ScreenPlacement *scrPlace, float x, float y, const vec2_t *verts, float angle, const vec4_t *color, Material *material)
{
  ?CG_DrawRotatedQuadPic@@YAXPEBUScreenPlacement@@MMPEBTvec2_t@@MAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, verts, angle, color, material);
}

/*
==============
CG_DrawDevString
==============
*/

int __fastcall CG_DrawDevString(const ScreenPlacement *scrPlace, float x, float y, float xScale, float yScale, const char *s, const vec4_t *color, int align, GfxFont *font)
{
  return ?CG_DrawDevString@@YAHPEBUScreenPlacement@@MMMMPEBDAEBTvec4_t@@HPEAUGfxFont@@@Z(scrPlace, x, y, xScale, yScale, s, color, align, font);
}

/*
==============
CG_WorldPosToScreenPosRealForScene
==============
*/

bool __fastcall CG_WorldPosToScreenPosRealForScene(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  return ?CG_WorldPosToScreenPosRealForScene@@YA_NW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTvec3_t@@HAEATvec2_t@@@Z(localClientNum, scrPlace, worldPos, space, outScreenPos);
}

/*
==============
CG_DrawBigDevStringColor
==============
*/

int __fastcall CG_DrawBigDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  return ?CG_DrawBigDevStringColor@@YAHPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@H@Z(scrPlace, x, y, s, color, align);
}

/*
==============
CG_UpdateSSR
==============
*/

void __fastcall CG_UpdateSSR(LocalClientNum_t localClientNum)
{
  ?CG_UpdateSSR@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawBigDevString
==============
*/

int __fastcall CG_DrawBigDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  return ?CG_DrawBigDevString@@YAHPEBUScreenPlacement@@MMPEBDMH@Z(scrPlace, x, y, s, alpha, align);
}

/*
==============
CG_DebugString
==============
*/

void __fastcall CG_DebugString(const vec3_t *point, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ?CG_DebugString@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDHH@Z(point, color, scale, text, fromServer, duration);
}

/*
==============
CG_DrawTools_LaserMaterialChanged
==============
*/

void __fastcall CG_DrawTools_LaserMaterialChanged(LocalClientNum_t localClientNum)
{
  ?CG_DrawTools_LaserMaterialChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DebugCircle
==============
*/

void __fastcall CG_DebugCircle(const vec3_t *center, float radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugCircle@@YAXAEBTvec3_t@@M0AEBTvec4_t@@HH@Z(center, radius, dir, color, depthTest, duration);
}

/*
==============
CG_DrawTools_FadeColor
==============
*/

bool __fastcall CG_DrawTools_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec, vec4_t *outColor)
{
  return ?CG_DrawTools_FadeColor@@YA_NHHHHAEATvec4_t@@@Z(timeNow, startMsec, totalMsec, fadeMsec, outColor);
}

/*
==============
CG_DebugBox
==============
*/

void __fastcall CG_DebugBox(const vec3_t *origin, const Bounds *bounds, float yaw, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugBox@@YAXAEBTvec3_t@@PEBUBounds@@MAEBTvec4_t@@HH@Z(origin, bounds, yaw, color, depthTest, duration);
}

/*
==============
CG_DrawTools_ThermalBodyMaterialChanged
==============
*/

void __fastcall CG_DrawTools_ThermalBodyMaterialChanged(LocalClientNum_t localClientNum)
{
  ?CG_DrawTools_ThermalBodyMaterialChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WorldPosToScreenPosReal
==============
*/

bool __fastcall CG_WorldPosToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, vec2_t *outScreenPos)
{
  return ?CG_WorldPosToScreenPosReal@@YA_NW4LocalClientNum_t@@PEBUScreenPlacement@@AEBTvec3_t@@AEATvec2_t@@@Z(localClientNum, scrPlace, worldPos, outScreenPos);
}

/*
==============
CG_Draw2DTri
==============
*/

void __fastcall CG_Draw2DTri(const ScreenPlacement *scrPlace, const vec2_t *p0, const vec2_t *p1, const vec2_t *p2, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?CG_Draw2DTri@@YAXPEBUScreenPlacement@@AEBTvec2_t@@11HHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, p0, p1, p2, horzAlign, vertAlign, color, material);
}

/*
==============
CG_DebugEllipsoid
==============
*/

void __fastcall CG_DebugEllipsoid(const vec3_t *center, const vec3_t *right, const vec3_t *up, const float radiusA, const float radiusB, const float radiusC, const vec4_t *color, int depthTest, int duration)
{
  ?CG_DebugEllipsoid@@YAXAEBTvec3_t@@00MMMAEBTvec4_t@@HH@Z(center, right, up, radiusA, radiusB, radiusC, color, depthTest, duration);
}

/*
==============
CG_DrawRotatedPicWithoutSplitScreenScaling
==============
*/

void __fastcall CG_DrawRotatedPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  ?CG_DrawRotatedPicWithoutSplitScreenScaling@@YAXPEBUScreenPlacement@@MMMMHHMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, width, height, horzAlign, vertAlign, angle, color, material);
}

/*
==============
CG_DebugArc
==============
*/
void CG_DebugArc(const vec3_t *center, float radius, float angle0, float angle1, const vec4_t *color, int depthTest, int duration)
{
  float v8; 
  float v9; 
  float *v10; 
  unsigned int v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t *p_start; 
  __int64 v16; 
  vec3_t *v17; 
  float c; 
  float s[3]; 
  vec3_t start; 

  v8 = angle0;
  v9 = (float)(angle1 - angle0) * 0.06666667;
  if ( v9 < 0.0 )
  {
    v8 = angle0 + -360.0;
    v9 = (float)(angle1 - (float)(angle0 + -360.0)) * 0.06666667;
  }
  v10 = &start.v[1];
  v11 = 0;
  do
  {
    v12 = (float)v11;
    FastSinCos((float)((float)(v12 * v9) + v8) * 0.017453292, s, &c);
    v13 = radius * s[0];
    v14 = center->v[2];
    ++v11;
    *(v10 - 1) = (float)(radius * c) + center->v[0];
    v10 += 3;
    *(v10 - 3) = v13 + center->v[1];
    *(v10 - 2) = v14;
  }
  while ( v11 < 0x10 );
  p_start = &start;
  v16 = 15i64;
  do
  {
    v17 = p_start + 1;
    CL_AddDebugLine(p_start, p_start + 1, color, depthTest, duration, 0);
    p_start = v17;
    --v16;
  }
  while ( v16 );
}

/*
==============
CG_DebugAxis
==============
*/
void CG_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, int depthTest, int duration)
{
  float v5; 
  float v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t end; 

  v5 = length * axes->m[0].v[1];
  end.v[0] = (float)(length * axes->m[0].v[0]) + pos->v[0];
  v6 = length * axes->m[0].v[2];
  end.v[1] = v5 + pos->v[1];
  end.v[2] = v6 + pos->v[2];
  CL_AddDebugLine(pos, &end, &colorRed, depthTest, duration, 0);
  v10 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v11 = length * axes->m[1].v[2];
  end.v[1] = v10 + pos->v[1];
  end.v[2] = v11 + pos->v[2];
  CL_AddDebugLine(pos, &end, &colorGreen, depthTest, duration, 0);
  v12 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v13 = length * axes->m[2].v[2];
  end.v[1] = v12 + pos->v[1];
  end.v[2] = v13 + pos->v[2];
  CL_AddDebugLine(pos, &end, &colorBlue, depthTest, duration, 0);
}

/*
==============
CG_DebugBar
==============
*/
void CG_DebugBar(const vec3_t *origin, const vec3_t *dir, float fraction, float width, float height, const vec4_t *color, int depthTest, int duration)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t v17; 
  vec3_t v18; 
  vec3_t start; 
  vec3_t end; 

  v8 = dir->v[0];
  v9 = origin->v[0];
  v10 = dir->v[1];
  v11 = origin->v[1];
  v12 = dir->v[2];
  v13 = origin->v[2];
  v14 = (float)(fraction * width) * -0.5;
  start.v[0] = (float)(dir->v[0] * v14) + origin->v[0];
  start.v[1] = (float)(v10 * v14) + v11;
  v15 = (float)(fraction * width) * 0.5;
  end.v[1] = (float)(v10 * v15) + v11;
  end.v[0] = (float)(v8 * v15) + v9;
  start.v[2] = (float)((float)(v12 * v14) + v13) - (float)(height * 0.5);
  end.v[2] = (float)((float)(v12 * v15) + v13) - (float)(height * 0.5);
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 0);
  start.v[2] = height + start.v[2];
  end.v[2] = height + end.v[2];
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 0);
  v18 = start;
  v17.v[0] = start.v[0];
  v17.v[2] = start.v[2] - height;
  v17.v[1] = start.v[1];
  CL_AddDebugLine(&v18, &v17, color, depthTest, duration, 0);
  v18 = end;
  v17.v[0] = end.v[0];
  v17.v[1] = end.v[1];
  v17.v[2] = end.v[2] - height;
  CL_AddDebugLine(&v18, &v17, color, depthTest, duration, 0);
  v17.v[2] = (float)((float)((float)(v12 * (float)(width * -0.5)) + v13) - (float)(height * 0.5)) + height;
  v18.v[0] = (float)(v8 * (float)(width * -0.5)) + v9;
  v18.v[1] = (float)(v10 * (float)(width * -0.5)) + v11;
  v18.v[2] = (float)((float)(v12 * (float)(width * -0.5)) + v13) - (float)(height * 0.5);
  v17.v[0] = v18.v[0];
  v17.v[1] = v18.v[1];
  CL_AddDebugLine(&v18, &v17, color, depthTest, duration, 0);
  v17.v[2] = (float)((float)((float)(v12 * (float)(width * 0.5)) + v13) - (float)(height * 0.5)) + height;
  v18.v[0] = (float)(v8 * (float)(width * 0.5)) + v9;
  v18.v[1] = (float)(v10 * (float)(width * 0.5)) + v11;
  v18.v[2] = (float)((float)(v12 * (float)(width * 0.5)) + v13) - (float)(height * 0.5);
  v17.v[0] = v18.v[0];
  v17.v[1] = v18.v[1];
  CL_AddDebugLine(&v18, &v17, color, depthTest, duration, 0);
}

/*
==============
CG_DebugBox
==============
*/
void CG_DebugBox(const vec3_t *origin, const Bounds *bounds, float yaw, const vec4_t *color, int depthTest, int duration)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const int (*v24)[2]; 
  __int64 v25; 
  float s; 
  float c[3]; 
  vec3_t start; 
  float v29; 
  float v30; 
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

  FastSinCos(yaw * 0.017453292, &s, c);
  v9 = origin->v[1];
  v10 = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  v11 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  v12 = bounds->midPoint.v[2];
  v13 = v12 - bounds->halfSize.v[2];
  v14 = origin->v[0];
  v15 = bounds->midPoint.v[1];
  v16 = v15 - bounds->halfSize.v[1];
  v17 = v15 + bounds->halfSize.v[1];
  v18 = (float)((float)(v10 * c[0]) - (float)(v16 * s)) + origin->v[0];
  start.v[2] = v13 + origin->v[2];
  start.v[1] = (float)((float)(v10 * s) + (float)(v16 * c[0])) + v9;
  start.v[0] = v18;
  v29 = (float)((float)(v11 * c[0]) - (float)(v16 * s)) + origin->v[0];
  v31 = v13 + origin->v[2];
  v30 = v9 + (float)((float)(v11 * s) + (float)(v16 * c[0]));
  v32 = v14 + (float)((float)(v10 * c[0]) - (float)(v17 * s));
  v34 = v13 + origin->v[2];
  v33 = v9 + (float)((float)(v10 * s) + (float)(v17 * c[0]));
  v35 = v14 + (float)((float)(v11 * c[0]) - (float)(v17 * s));
  v19 = v13 + origin->v[2];
  v20 = origin->v[1];
  v37 = v19;
  v21 = v9 + (float)((float)(v11 * s) + (float)(v17 * c[0]));
  v22 = v12 + bounds->halfSize.v[2];
  v23 = origin->v[2];
  v36 = v21;
  v38 = v14 + (float)((float)(v10 * c[0]) - (float)(v16 * s));
  v39 = v20 + (float)((float)(v10 * s) + (float)(v16 * c[0]));
  v24 = iEdgePairs_2;
  v25 = 12i64;
  v40 = v22 + v23;
  v41 = v14 + (float)((float)(v11 * c[0]) - (float)(v16 * s));
  v42 = v20 + (float)((float)(v16 * c[0]) + (float)(v11 * s));
  v43 = v22 + v23;
  v44 = v32;
  v45 = v20 + (float)((float)(v10 * s) + (float)(v17 * c[0]));
  v46 = v22 + v23;
  v47 = v35;
  v48 = v20 + (float)((float)(v11 * s) + (float)(v17 * c[0]));
  v49 = v22 + v23;
  do
  {
    CL_AddDebugLine(&start + *(_DWORD *)v24, &start + (int)(*v24)[1], color, depthTest, duration, 0);
    ++v24;
    --v25;
  }
  while ( v25 );
}

/*
==============
CG_DebugBoxOriented
==============
*/
void CG_DebugBoxOriented(const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  float *v7; 
  unsigned int i; 
  float *v12; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  const int (*v32)[2]; 
  __int64 v33; 
  char v35; 
  vec3_t start[8]; 

  v7 = &start[0].v[2];
  for ( i = 0; i < 8; ++i )
  {
    _XMM4 = LODWORD(bounds->halfSize.v[0]);
    v12 = v7 - 2;
    _XMM0 = i & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(bounds->halfSize.v[1]);
    *(v7 - 2) = *(float *)&_XMM1 + bounds->midPoint.v[0];
    _XMM0 = i & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(bounds->halfSize.v[2]);
    *(v7 - 1) = *(float *)&_XMM1 + bounds->midPoint.v[1];
    _XMM0 = i & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    *v7 = *(float *)&_XMM1 + bounds->midPoint.v[2];
    if ( v7 - 2 == (float *)&v35 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v24 = *(v7 - 1);
    v25 = (float)((float)(*v12 * rotation->m[0].v[0]) + (float)(v24 * rotation->m[1].v[0])) + (float)(*v7 * rotation->m[2].v[0]);
    v26 = *v12 * rotation->m[0].v[2];
    v27 = v24 * rotation->m[1].v[2];
    v28 = *v7 * rotation->m[2].v[2];
    *(v7 - 1) = (float)((float)(v24 * rotation->m[1].v[1]) + (float)(*v12 * rotation->m[0].v[1])) + (float)(*v7 * rotation->m[2].v[1]);
    v29 = v26 + v27;
    v30 = v25 + origin->v[0];
    *v7 = v29 + v28;
    *v12 = v30;
    v31 = origin->v[2];
    *(v7 - 1) = *(v7 - 1) + origin->v[1];
    *v7 = v31 + *v7;
    v7 += 3;
  }
  v32 = iEdgePairs_3;
  v33 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v32], &start[(*v32)[1]], color, depthTest, duration, 0);
    ++v32;
    --v33;
  }
  while ( v33 );
}

/*
==============
CG_DebugCapsule
==============
*/
void CG_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  vec3_t dst; 
  vec3_t cross; 
  vec3_t src; 
  vec3_t up; 

  v6 = end->v[0] - start->v[0];
  v8 = LODWORD(end->v[1]);
  v7 = end->v[1] - start->v[1];
  v9 = end->v[2] - start->v[2];
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  src.v[0] = v6 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  Vec3Cross(&src, &dst, &cross);
  LODWORD(up.v[0]) = LODWORD(src.v[0]) ^ _xmm;
  LODWORD(up.v[2]) = LODWORD(src.v[2]) ^ _xmm;
  LODWORD(up.v[1]) = LODWORD(src.v[1]) ^ _xmm;
  CG_DebugCylinder(start, end, radius, color, depthTest, duration);
  CG_DebugSemiCircle(start, radius, &dst, &up, color, depthTest, duration);
  CG_DebugSemiCircle(start, radius, &cross, &up, color, depthTest, duration);
  CG_DebugSemiCircle(end, radius, &dst, &src, color, depthTest, duration);
  CG_DebugSemiCircle(end, radius, &cross, &src, color, depthTest, duration);
}

/*
==============
CG_DebugCircle
==============
*/
void CG_DebugCircle(const vec3_t *center, float radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  float v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  float v16; 
  float v17; 
  float *v18; 
  float v19; 
  unsigned int v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const vec3_t *v26; 
  char v27; 
  __int64 v28; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t end[16]; 

  v6 = dir->v[1];
  v7 = LODWORD(dir->v[0]);
  v8 = dir->v[2];
  v9 = v7;
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM4 = v9;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  src.v[0] = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v8 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v6 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v16 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v17 = (float)(src.v[2] * dst.v[0]) - (float)(dst.v[2] * src.v[0]);
  v18 = &end[0].v[2];
  v19 = (float)(dst.v[1] * src.v[0]) - (float)(src.v[1] * dst.v[0]);
  v20 = 0;
  do
  {
    v21 = (float)v20;
    FastSinCos(v21 * 0.39269909, &s, &c);
    v22 = radius * s;
    v23 = radius * c;
    v24 = (float)(radius * c) * dst.v[1];
    *(v18 - 2) = (float)((float)(v16 * (float)(radius * s)) + center->v[0]) + (float)((float)(radius * c) * dst.v[0]);
    v25 = (float)((float)(v17 * v22) + center->v[1]) + v24;
    ++v20;
    *v18 = (float)((float)(v19 * v22) + center->v[2]) + (float)(v23 * dst.v[2]);
    *(v18 - 1) = v25;
    v18 += 3;
    s = v22;
    c = v23;
  }
  while ( v20 < 0x10 );
  v26 = end;
  v27 = 1;
  v28 = 16i64;
  do
  {
    CL_AddDebugLine(v26++, &end[v27++ & 0xF], color, depthTest, duration, 0);
    --v28;
  }
  while ( v28 );
}

/*
==============
CG_DebugCone
==============
*/
void CG_DebugCone(const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  float v7; 
  __int128 v8; 
  float v9; 
  __int128 v10; 
  float v16; 
  float v17; 
  float *v18; 
  float v19; 
  unsigned int v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const vec3_t *v26; 
  int v27; 
  __int64 v28; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t v33; 
  vec3_t end[16]; 

  v7 = direction->v[1];
  v8 = LODWORD(direction->v[0]);
  v9 = direction->v[2];
  v10 = v8;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  _XMM2 = v10;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  src.v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v33.v[0] = (float)(src.v[0] * length) + origin->v[0];
  v33.v[1] = (float)(src.v[1] * length) + origin->v[1];
  v33.v[2] = (float)(src.v[2] * length) + origin->v[2];
  v16 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v17 = (float)(src.v[2] * dst.v[0]) - (float)(src.v[0] * dst.v[2]);
  v18 = &end[0].v[2];
  v19 = (float)(src.v[0] * dst.v[1]) - (float)(src.v[1] * dst.v[0]);
  v20 = 0;
  do
  {
    v21 = (float)v20;
    FastSinCos(v21 * 0.39269909, &s, &c);
    v22 = radius * s;
    v23 = radius * c;
    v24 = (float)(radius * c) * dst.v[1];
    *(v18 - 2) = (float)((float)(v16 * (float)(radius * s)) + origin->v[0]) + (float)((float)(radius * c) * dst.v[0]);
    v25 = (float)((float)(v17 * v22) + origin->v[1]) + v24;
    ++v20;
    *v18 = (float)((float)(v19 * v22) + origin->v[2]) + (float)(v23 * dst.v[2]);
    *(v18 - 1) = v25;
    v18 += 3;
    s = v22;
    c = v23;
  }
  while ( v20 < 0x10 );
  v26 = end;
  v27 = 1;
  v28 = 16i64;
  do
  {
    CL_AddDebugLine(v26, &end[v27 & 0xF], color, depthTest, duration, 0);
    CL_AddDebugLine(v26, &v33, color, depthTest, duration, 0);
    ++v27;
    ++v26;
    --v28;
  }
  while ( v28 );
}

/*
==============
CG_DebugConeFrustum
==============
*/
void CG_DebugConeFrustum(const vec3_t *origin, const vec3_t *direction, float radiusNear, float radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  float v8; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  unsigned int v23; 
  float *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  float *v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  __int64 v36; 
  char v37; 
  __int64 v38; 
  __int64 v39; 
  const vec3_t *v40; 
  float s[2]; 
  __int64 c; 
  vec3_t dst; 
  vec3_t src; 
  vec3_t end[16]; 
  vec3_t start[16]; 

  v8 = direction->v[1];
  v9 = LODWORD(direction->v[0]);
  v10 = direction->v[2];
  v11 = v9;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  _XMM2 = v11;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  src.v[0] = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v10 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v8 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v17 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v18 = (float)(src.v[2] * dst.v[0]) - (float)(src.v[0] * dst.v[2]);
  v19 = (float)(src.v[0] * dst.v[1]) - (float)(src.v[1] * dst.v[0]);
  v20 = (float)(src.v[0] * length) + origin->v[0];
  v21 = (float)(src.v[1] * length) + origin->v[1];
  v22 = (float)(src.v[2] * length) + origin->v[2];
  v23 = 0;
  v24 = &end[0].v[2];
  do
  {
    v25 = (float)v23;
    FastSinCos(v25 * 0.39269909, s, (float *)&c);
    v26 = radiusNear * s[0];
    v27 = radiusNear * *(float *)&c;
    v28 = (float)(radiusNear * *(float *)&c) * dst.v[1];
    *(v24 - 2) = (float)((float)(v17 * (float)(radiusNear * s[0])) + v20) + (float)((float)(radiusNear * *(float *)&c) * dst.v[0]);
    ++v23;
    *v24 = (float)((float)(v19 * v26) + v22) + (float)(v27 * dst.v[2]);
    *(v24 - 1) = (float)((float)(v18 * v26) + v21) + v28;
    v24 += 3;
    s[0] = v26;
    *(float *)&c = v27;
  }
  while ( v23 < 0x10 );
  v29 = 0;
  v30 = &start[0].v[2];
  do
  {
    v31 = (float)v29;
    FastSinCos(v31 * 0.39269909, (float *)&c, s);
    v32 = radiusFar * *(float *)&c;
    v33 = radiusFar * s[0];
    v34 = (float)(radiusFar * s[0]) * dst.v[1];
    *(v30 - 2) = (float)((float)(v17 * (float)(radiusFar * *(float *)&c)) + origin->v[0]) + (float)((float)(radiusFar * s[0]) * dst.v[0]);
    v35 = (float)((float)(v18 * v32) + origin->v[1]) + v34;
    ++v29;
    *v30 = (float)((float)(v19 * v32) + origin->v[2]) + (float)(v33 * dst.v[2]);
    *(v30 - 1) = v35;
    v30 += 3;
    *(float *)&c = v32;
    s[0] = v33;
  }
  while ( v29 < 0x10 );
  v36 = 0i64;
  v37 = 1;
  c = 16i64;
  do
  {
    v38 = v37 & 0xF;
    v39 = v38;
    CL_AddDebugLine(&end[v36], &end[v38], color, depthTest, duration, 0);
    v40 = &start[v39];
    CL_AddDebugLine(&start[v36], v40, color, depthTest, duration, 0);
    CL_AddDebugLine(&end[v36], v40, color, depthTest, duration, 0);
    ++v37;
    ++v36;
    --c;
  }
  while ( c );
}

/*
==============
CG_DebugCylinder
==============
*/
void CG_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
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
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  vec3_t dst; 
  vec3_t cross; 
  vec3_t src; 
  vec3_t enda; 
  vec3_t v39; 
  vec3_t v40; 
  vec3_t v41; 
  vec3_t starta; 
  vec3_t v43; 
  vec3_t v44; 
  vec3_t v45; 

  v6 = end->v[0] - start->v[0];
  v8 = LODWORD(end->v[1]);
  v7 = end->v[1] - start->v[1];
  v9 = end->v[2] - start->v[2];
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  src.v[0] = v6 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  Vec3Cross(&src, &dst, &cross);
  CG_DebugCircle(start, radius, &src, color, depthTest, duration);
  CG_DebugCircle(end, radius, &src, color, depthTest, duration);
  LODWORD(v16) = LODWORD(radius) ^ _xmm;
  v17 = start->v[0];
  v18 = start->v[1];
  v19 = start->v[2];
  v20 = radius * dst.v[2];
  v21 = radius * cross.v[0];
  v22 = radius * cross.v[1];
  v23 = COERCE_FLOAT(LODWORD(radius) ^ _xmm) * dst.v[0];
  v24 = COERCE_FLOAT(LODWORD(radius) ^ _xmm) * dst.v[2];
  v25 = COERCE_FLOAT(LODWORD(radius) ^ _xmm) * dst.v[1];
  v33 = radius * dst.v[0];
  starta.v[0] = (float)(radius * dst.v[0]) + start->v[0];
  v26 = radius * cross.v[2];
  v34 = radius * dst.v[1];
  starta.v[1] = (float)(radius * dst.v[1]) + v18;
  starta.v[2] = (float)(radius * dst.v[2]) + v19;
  v43.v[0] = v23 + v17;
  v43.v[2] = v24 + v19;
  v44.v[0] = (float)(radius * cross.v[0]) + v17;
  v44.v[1] = (float)(radius * cross.v[1]) + v18;
  v43.v[1] = v25 + v18;
  v27 = end->v[1];
  v28 = end->v[2];
  v29 = v16 * cross.v[0];
  v44.v[2] = v26 + v19;
  *(float *)&_XMM0 = (float)(v16 * cross.v[0]) + v17;
  v30 = v16 * cross.v[1];
  v45.v[0] = *(float *)&_XMM0;
  v31 = (float)(v16 * cross.v[1]) + v18;
  *(float *)&v8 = v16 * cross.v[2];
  v32 = end->v[0];
  v45.v[1] = v31;
  enda.v[0] = v32 + v33;
  v45.v[2] = *(float *)&v8 + v19;
  enda.v[1] = v27 + v34;
  v39.v[0] = v23 + v32;
  enda.v[2] = v20 + v28;
  v39.v[2] = v24 + v28;
  v39.v[1] = v25 + v27;
  v40.v[1] = v22 + v27;
  v40.v[0] = v21 + v32;
  v41.v[0] = v29 + v32;
  v40.v[2] = v26 + v28;
  v41.v[2] = *(float *)&v8 + v28;
  v41.v[1] = v30 + v27;
  CL_AddDebugLine(&starta, &enda, color, depthTest, duration, 0);
  CL_AddDebugLine(&v43, &v39, color, depthTest, duration, 0);
  CL_AddDebugLine(&v44, &v40, color, depthTest, duration, 0);
  CL_AddDebugLine(&v45, &v41, color, depthTest, duration, 0);
}

/*
==============
CG_DebugEllipse
==============
*/
void CG_DebugEllipse(const vec3_t *center, float radiusA, float radiusB, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  float *v8; 
  unsigned int v9; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const vec3_t *v22; 
  char v23; 
  __int64 v24; 
  float s; 
  float c[3]; 
  vec3_t end[16]; 

  v8 = &end[0].v[2];
  v9 = 0;
  v14 = radiusA * radiusB;
  do
  {
    v15 = (float)v9;
    FastSinCos(v15 * 0.39269909, &s, c);
    v16 = v14 / fsqrt((float)((float)(radiusB * c[0]) * (float)(radiusB * c[0])) + (float)((float)(radiusA * s) * (float)(radiusA * s)));
    v17 = v16 * s;
    v18 = v16 * c[0];
    v19 = (float)((float)(v16 * s) * up->v[1]) + center->v[1];
    *(v8 - 2) = (float)((float)((float)(v16 * s) * up->v[0]) + center->v[0]) + (float)((float)(v16 * c[0]) * right->v[0]);
    v20 = v19 + (float)(v18 * right->v[1]);
    v21 = (float)(v17 * up->v[2]) + center->v[2];
    *(v8 - 1) = v20;
    ++v9;
    *v8 = v21 + (float)(v18 * right->v[2]);
    v8 += 3;
  }
  while ( v9 < 0x10 );
  v22 = end;
  v23 = 1;
  v24 = 16i64;
  do
  {
    CL_AddDebugLine(v22++, &end[v23++ & 0xF], color, depthTest, duration, 0);
    --v24;
  }
  while ( v24 );
}

/*
==============
CG_DebugEllipsoid
==============
*/
void CG_DebugEllipsoid(const vec3_t *center, const vec3_t *right, const vec3_t *up, const float radiusA, const float radiusB, const float radiusC, const vec4_t *color, int depthTest, int duration)
{
  vec3_t cross; 

  Vec3Cross(right, up, &cross);
  CG_DebugEllipse(center, radiusA, radiusB, right, up, color, depthTest, duration);
  CG_DebugEllipse(center, radiusC, radiusB, &cross, up, color, depthTest, duration);
  CG_DebugEllipse(center, radiusA, radiusC, right, &cross, color, depthTest, duration);
}

/*
==============
CG_DebugLine
==============
*/
void CG_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  CL_AddDebugLine(start, end, color, depthTest, duration, 0);
}

/*
==============
CG_DebugSemiCircle
==============
*/
void CG_DebugSemiCircle(const vec3_t *center, float radius, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  float *v7; 
  unsigned int v9; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const vec3_t *v20; 
  char v21; 
  __int64 v22; 
  float s; 
  float c[3]; 
  vec3_t end[16]; 

  v7 = &end[0].v[2];
  v9 = 0;
  do
  {
    v13 = (float)v9;
    FastSinCos(v13 * 0.39269909, &s, c);
    v14 = radius * s;
    v15 = radius * c[0];
    v16 = (float)((float)(radius * s) * up->v[1]) + center->v[1];
    v17 = (float)(radius * s) * up->v[2];
    *(v7 - 2) = (float)((float)((float)(radius * s) * up->v[0]) + center->v[0]) + (float)((float)(radius * c[0]) * right->v[0]);
    v18 = v16 + (float)(v15 * right->v[1]);
    v19 = v15 * right->v[2];
    s = v14;
    ++v9;
    *v7 = (float)(v17 + center->v[2]) + v19;
    *(v7 - 1) = v18;
    v7 += 3;
    c[0] = v15;
  }
  while ( v9 <= 8 );
  v20 = end;
  v21 = 1;
  v22 = 8i64;
  do
  {
    CL_AddDebugLine(v20++, &end[v21++ & 0xF], color, depthTest, duration, 0);
    --v22;
  }
  while ( v22 );
}

/*
==============
CG_DebugSphere
==============
*/
void CG_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  __m256i v8; 
  float v9; 

  v9 = FLOAT_1_0;
  v8 = _ymm;
  CG_DebugCircle(center, radius, (const vec3_t *)&v8, color, depthTest, duration);
  CG_DebugCircle(center, radius, (const vec3_t *)((char *)&v8.m256i_u64[1] + 4), color, depthTest, duration);
  CG_DebugCircle(center, radius, (const vec3_t *)&v8.m256i_u64[3], color, depthTest, duration);
}

/*
==============
CG_DebugSphericalSector
==============
*/
void CG_DebugSphericalSector(const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  float v7; 
  __int128 v8; 
  float v9; 
  __int128 v10; 
  __int128 v17; 
  __int128 v18; 
  int v19; 
  int v20; 
  float *v21; 
  unsigned int i; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  const vec3_t *v33; 
  char v34; 
  __int64 v35; 
  float s; 
  float c; 
  int v38; 
  int v39; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t v42; 
  vec3_t end[16]; 

  v7 = direction->v[1];
  v8 = LODWORD(direction->v[0]);
  v9 = direction->v[2];
  v10 = v8;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  _XMM2 = v10;
  __asm
  {
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm12, xmm0
  }
  src.v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v42.v[0] = (float)(src.v[0] * length) + origin->v[0];
  v42.v[1] = (float)(src.v[1] * length) + origin->v[1];
  v42.v[2] = (float)(src.v[2] * length) + origin->v[2];
  v17 = LODWORD(src.v[1]);
  *(float *)&v17 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v18 = v17;
  *(float *)&v19 = (float)(src.v[2] * dst.v[0]) - (float)(src.v[0] * dst.v[2]);
  *(float *)&v20 = (float)(src.v[0] * dst.v[1]) - (float)(src.v[1] * dst.v[0]);
  v21 = &end[0].v[1];
  v39 = v20;
  v38 = v19;
  for ( i = 0; i < 0x10; ++i )
  {
    v23 = (float)i;
    FastSinCos(v23 * 0.39269909, &s, &c);
    v24 = v18;
    *(float *)&v24 = (float)((float)((float)(*(float *)&v18 * (float)(radius * s)) + origin->v[0]) + (float)((float)(radius * c) * dst.v[0])) - v42.v[0];
    v25 = v24;
    *(float *)&v24 = (float)(*(float *)&v19 * (float)(radius * s)) + origin->v[1];
    v19 = v38;
    v26 = (float)(*(float *)&v24 + (float)((float)(radius * c) * dst.v[1])) - v42.v[1];
    *(float *)&v24 = (float)(*(float *)&v20 * (float)(radius * s)) + origin->v[2];
    v20 = v39;
    v27 = *(float *)&v24 + (float)((float)(radius * c) * dst.v[2]);
    v28 = v25;
    s = radius * s;
    v29 = v27 - v42.v[2];
    *(float *)&v28 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v26 * v26)) + (float)(v29 * v29));
    _XMM3 = v28;
    __asm
    {
      vcmpless xmm0, xmm3, xmm14
      vblendvps xmm0, xmm3, xmm12, xmm0
    }
    c = radius * c;
    *(v21 - 1) = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v25) * length) + v42.v[0];
    *v21 = (float)((float)(v26 * (float)(1.0 / *(float *)&_XMM0)) * length) + v42.v[1];
    v21[1] = (float)((float)(v29 * (float)(1.0 / *(float *)&_XMM0)) * length) + v42.v[2];
    v21 += 3;
  }
  v33 = end;
  v34 = 1;
  v35 = 16i64;
  do
  {
    CL_AddDebugLine(v33, &end[v34 & 0xF], color, depthTest, duration, 0);
    CL_AddDebugLine(v33, &v42, color, depthTest, duration, 0);
    ++v34;
    ++v33;
    --v35;
  }
  while ( v35 );
}

/*
==============
CG_DebugSphericalSectorFrustum
==============
*/
void CG_DebugSphericalSectorFrustum(const vec3_t *origin, const vec3_t *direction, float radiusNear, float radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  float v8; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  unsigned int v23; 
  float *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  __int64 v30; 
  float v31; 
  __int128 v32; 
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
  __int128 v46; 
  __int128 v47; 
  unsigned int v48; 
  __int64 v49; 
  float v50; 
  __int128 v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  char v65; 
  __int64 v66; 
  unsigned int v67; 
  __int64 v68; 
  bool v69; 
  float s[2]; 
  float c[2]; 
  float v72[2]; 
  vec3_t *v73; 
  vec3_t dst; 
  vec3_t src; 
  vec3_t start[16]; 
  vec3_t v77[16]; 
  vec3_t end[16]; 

  v8 = direction->v[1];
  v9 = LODWORD(direction->v[0]);
  v10 = direction->v[2];
  v11 = v9;
  v72[0] = radiusFar;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm15, xmm0
  }
  src.v[0] = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  v73 = (vec3_t *)origin;
  src.v[2] = v10 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v8 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v17 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v18 = (float)(src.v[2] * dst.v[0]) - (float)(src.v[0] * dst.v[2]);
  v19 = (float)(src.v[0] * dst.v[1]) - (float)(src.v[1] * dst.v[0]);
  v20 = (float)(src.v[0] * length) + origin->v[0];
  v21 = (float)(src.v[2] * length) + origin->v[2];
  v22 = (float)(src.v[1] * length) + origin->v[1];
  v23 = 0;
  v24 = &end[0].v[2];
  do
  {
    v25 = (float)v23;
    FastSinCos(v25 * 0.39269909, s, c);
    v26 = radiusNear * s[0];
    v27 = radiusNear * c[0];
    v28 = (float)(radiusNear * c[0]) * dst.v[1];
    *(v24 - 2) = (float)((float)(v17 * (float)(radiusNear * s[0])) + v20) + (float)((float)(radiusNear * c[0]) * dst.v[0]);
    ++v23;
    *v24 = (float)((float)(v19 * v26) + v21) + (float)(v27 * dst.v[2]);
    *(v24 - 1) = (float)((float)(v18 * v26) + v22) + v28;
    v24 += 3;
    s[0] = v26;
    c[0] = v27;
  }
  while ( v23 < 0x10 );
  v29 = 0;
  v30 = 0i64;
  do
  {
    v31 = (float)v29;
    FastSinCos(v31 * 0.39269909, c, s);
    v32 = LODWORD(v72[0]);
    v33 = end[v30].v[0];
    v34 = end[v30].v[1];
    v35 = (float)(v18 * (float)(v72[0] * c[0])) + origin->v[1];
    v36 = (float)(v17 * (float)(v72[0] * c[0])) + origin->v[0];
    v37 = (float)(v19 * (float)(v72[0] * c[0])) + origin->v[2];
    c[0] = v72[0] * c[0];
    v38 = (float)((float)(v72[0] * s[0]) * dst.v[2]) + v37;
    v39 = (float)((float)((float)(v72[0] * s[0]) * dst.v[1]) + v35) - v34;
    v40 = (float)(v36 + (float)((float)(v72[0] * s[0]) * dst.v[0])) - v33;
    s[0] = v72[0] * s[0];
    v41 = end[v30].v[2];
    v42 = v38 - v41;
    *(float *)&v32 = fsqrt((float)((float)(v39 * v39) + (float)(v40 * v40)) + (float)(v42 * v42));
    _XMM3 = v32;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
    }
    start[v30].v[1] = v34 + (float)((float)(v39 * (float)(1.0 / *(float *)&_XMM0)) * length);
    ++v29;
    start[v30].v[2] = v41 + (float)((float)(v42 * (float)(1.0 / *(float *)&_XMM0)) * length);
    start[v30++].v[0] = (float)((float)(v40 * (float)(1.0 / *(float *)&_XMM0)) * length) + v33;
  }
  while ( v29 < 0x10 );
  v47 = LODWORD(v72[0]);
  *(float *)&v47 = v72[0] * 0.5;
  v46 = v47;
  v48 = 0;
  v49 = 0i64;
  do
  {
    v50 = (float)v48;
    FastSinCos(v50 * 0.39269909, v72, c);
    v51 = v46;
    v52 = end[v49].v[0];
    v53 = end[v49].v[1];
    v54 = (float)(v18 * (float)(*(float *)&v46 * v72[0])) + origin->v[1];
    v55 = (float)(v17 * (float)(*(float *)&v46 * v72[0])) + origin->v[0];
    v56 = (float)(v19 * (float)(*(float *)&v46 * v72[0])) + origin->v[2];
    v72[0] = *(float *)&v46 * v72[0];
    v57 = (float)((float)(*(float *)&v46 * c[0]) * dst.v[2]) + v56;
    v58 = (float)((float)((float)(*(float *)&v46 * c[0]) * dst.v[1]) + v54) - v53;
    v59 = (float)(v55 + (float)((float)(*(float *)&v46 * c[0]) * dst.v[0])) - v52;
    c[0] = *(float *)&v46 * c[0];
    v60 = end[v49].v[2];
    v61 = v57 - v60;
    *(float *)&v51 = fsqrt((float)((float)(v58 * v58) + (float)(v59 * v59)) + (float)(v61 * v61));
    _XMM3 = v51;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v77[v49].v[1] = v53 + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v58) * length);
    ++v48;
    v77[v49].v[2] = v60 + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v61) * length);
    v77[v49++].v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v59) * length) + v52;
  }
  while ( v48 < 0x10 );
  v65 = 1;
  v66 = 0i64;
  *(_QWORD *)v72 = 1i64;
  *(_QWORD *)c = 16i64;
  do
  {
    v67 = v65 & 0xF;
    v68 = v67;
    CL_AddDebugLine(&end[v66], &end[v67], color, depthTest, duration, 0);
    CL_AddDebugLine(&start[v66], &start[v68], color, depthTest, duration, 0);
    CL_AddDebugLine(&end[v66], &start[v66], color, depthTest, duration, 0);
    CL_AddDebugLine(&start[v66], &v77[v66], color, depthTest, duration, 0);
    CL_AddDebugLine(&v77[v66++], v73, color, depthTest, duration, 0);
    v65 = LOBYTE(v72[0]) + 1;
    v69 = (*(_QWORD *)c)-- == 1i64;
    ++*(_QWORD *)v72;
  }
  while ( !v69 );
}

/*
==============
CG_DebugStar
==============
*/
void CG_DebugStar(const vec3_t *point, const vec4_t *color, int depthTest, int duration)
{
  CL_AddDebugStar(point, color, depthTest, duration, 0);
}

/*
==============
CG_DebugStarWithText
==============
*/
void CG_DebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int duration)
{
  CL_AddDebugStarWithText(point, starColor, textColor, string, fontsize, 0, duration, 0);
}

/*
==============
CG_DebugString
==============
*/

void __fastcall CG_DebugString(const vec3_t *point, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  CL_AddDebugString(point, color, scale, text, fromServer, duration);
}

/*
==============
CG_Draw2DLine
==============
*/
void CG_Draw2DLine(const ScreenPlacement *scrPlace, float p1x, float p1y, float p2x, float p2y, float lineWidth, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  __int128 v10; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  vec2_t verts; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 

  if ( p1x != p2x || p1y != p2y )
  {
    *(double *)&v10 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, p1x, horzAlign);
    v12 = *(float *)&v10;
    *(double *)&v10 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, p2x, horzAlign);
    v13 = *(float *)&v10;
    *(double *)&v10 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, p1y, vertAlign);
    v14 = *(float *)&v10;
    *(double *)&v10 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, p2y, vertAlign);
    v15 = v10;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v10 - v14) * (float)(*(float *)&v10 - v14)) + (float)((float)(v13 - v12) * (float)(v13 - v12)));
    _XMM3 = v15;
    __asm
    {
      vcmpless xmm1, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm1
    }
    v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * (float)(*(float *)&v10 - v14)) ^ _xmm) * (float)(lineWidth * 0.5);
    v20 = (float)((float)(1.0 / *(float *)&_XMM1) * (float)(v13 - v12)) * (float)(lineWidth * 0.5);
    verts.v[1] = v14 - v20;
    verts.v[0] = v12 - v19;
    v23 = *(float *)&v10 - v20;
    v22 = v13 - v19;
    v25 = *(float *)&v10 + v20;
    v24 = v13 + v19;
    v27 = v14 + v20;
    v26 = v12 + v19;
    R_AddCmdDrawQuadPic(&verts, color, material);
  }
}

/*
==============
CG_Draw2DRect
==============
*/
void CG_Draw2DRect(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  vec2_t verts; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  v10 = ScrPlace_ApplyX(scrPlace, x, horzAlign);
  verts.v[0] = *(float *)&v10;
  v11 = ScrPlace_ApplyY(scrPlace, y, vertAlign);
  verts.v[1] = *(float *)&v11;
  v12 = ScrPlace_ApplyX(scrPlace, width + x, horzAlign);
  v19 = SLODWORD(v12);
  v13 = ScrPlace_ApplyY(scrPlace, y, vertAlign);
  v20 = SLODWORD(v13);
  v14 = ScrPlace_ApplyX(scrPlace, width + x, horzAlign);
  v21 = SLODWORD(v14);
  v15 = ScrPlace_ApplyY(scrPlace, y + height, vertAlign);
  v22 = SLODWORD(v15);
  v16 = ScrPlace_ApplyX(scrPlace, x, horzAlign);
  v23 = SLODWORD(v16);
  v17 = ScrPlace_ApplyY(scrPlace, y + height, vertAlign);
  v24 = SLODWORD(v17);
  R_AddCmdDrawQuadPic(&verts, color, material);
}

/*
==============
CG_Draw2DTri
==============
*/
void CG_Draw2DTri(const ScreenPlacement *scrPlace, const vec2_t *p0, const vec2_t *p1, const vec2_t *p2, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  vec2_t verts; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  vec2_t v28; 

  v12 = ScrPlace_ApplyX(scrPlace, p0->v[0], horzAlign);
  v13 = p0->v[1];
  verts.v[0] = *(float *)&v12;
  v14 = ScrPlace_ApplyY(scrPlace, v13, vertAlign);
  v15 = p1->v[0];
  verts.v[1] = *(float *)&v14;
  v16 = ScrPlace_ApplyX(scrPlace, v15, horzAlign);
  v17 = p1->v[1];
  v24 = SLODWORD(v16);
  v18 = ScrPlace_ApplyY(scrPlace, v17, vertAlign);
  v19 = p2->v[0];
  v25 = SLODWORD(v18);
  v20 = ScrPlace_ApplyX(scrPlace, v19, horzAlign);
  v21 = p2->v[1];
  v26 = SLODWORD(v20);
  v22 = ScrPlace_ApplyY(scrPlace, v21, vertAlign);
  v27 = SLODWORD(v22);
  v28 = verts;
  R_AddCmdDrawQuadPic(&verts, color, material);
}

/*
==============
CG_DrawBigDevString
==============
*/
int CG_DrawBigDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  vec4_t color; 

  color.v[0] = FLOAT_1_0;
  color.v[1] = FLOAT_1_0;
  color.v[2] = FLOAT_1_0;
  color.v[3] = alpha;
  return CG_DrawDevString(scrPlace, x, y, 1.0, 1.0, s, &color, align, cls.bigDevFont);
}

/*
==============
CG_DrawBigDevStringColor
==============
*/
int CG_DrawBigDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  return CG_DrawDevString(scrPlace, x, y, 1.0, 1.0, s, color, align, cls.bigDevFont);
}

/*
==============
CG_DrawDevString
==============
*/
__int64 CG_DrawDevString(const ScreenPlacement *scrPlace, float x, float y, float xScale, float yScale, const char *s, const vec4_t *color, int align, GfxFont *font)
{
  const dvar_t *v9; 
  float v12; 
  float value; 
  float v14; 
  int v15; 
  float v16; 
  int v17; 
  int v18; 
  int v19; 

  v9 = DCONST_DVARFLT_cg_small_dev_string_fontscale;
  v12 = y;
  if ( !DCONST_DVARFLT_cg_small_dev_string_fontscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_small_dev_string_fontscale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v14 = value * yScale;
  v15 = align & 3;
  v16 = xScale * value;
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      x = x - (float)((float)R_TextWidth(s, 0, font) * v16);
      goto LABEL_13;
    }
    if ( v15 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 273, ASSERT_TYPE_ASSERT, "((align & CG_ALIGN_X) == CG_ALIGN_LEFT || (align & CG_ALIGN_X) == CG_ALIGN_RIGHT || (align & CG_ALIGN_X) == CG_ALIGN_CENTER)", (const char *)&queryFormat, "(align & CG_ALIGN_X) == CG_ALIGN_LEFT || (align & CG_ALIGN_X) == CG_ALIGN_RIGHT || (align & CG_ALIGN_X) == CG_ALIGN_CENTER") )
      __debugbreak();
  }
  if ( v15 == 3 )
    x = x + (float)((float)((float)R_TextWidth(s, 0, font) * v16) * -0.5);
LABEL_13:
  v17 = align & 0xC;
  if ( (((v17 - 4) & 0xFFFFFFF3) != 0 || v17 == 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 285, ASSERT_TYPE_ASSERT, "((align & CG_ALIGN_Y) == CG_ALIGN_TOP || (align & CG_ALIGN_Y) == CG_ALIGN_BOTTOM || (align & CG_ALIGN_Y) == CG_ALIGN_MIDDLE)", (const char *)&queryFormat, "(align & CG_ALIGN_Y) == CG_ALIGN_TOP || (align & CG_ALIGN_Y) == CG_ALIGN_BOTTOM || (align & CG_ALIGN_Y) == CG_ALIGN_MIDDLE") )
    __debugbreak();
  v18 = R_TextHeight(font);
  v19 = v18;
  if ( v17 == 4 )
  {
    v12 = y + (float)((float)v18 * v14);
  }
  else if ( v17 == 12 )
  {
    v12 = y + (float)((float)((float)v18 * v14) * 0.5);
  }
  CL_DrawText(scrPlace, s, 0x7FFFFFFF, font, x, v12, 1, 1, v16, v14, color, 7);
  return (unsigned int)(int)(float)((float)v19 * v14);
}

/*
==============
CG_DrawRotatedPic
==============
*/
void CG_DrawRotatedPic(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  float xa; 
  float ya; 
  float w; 

  w = width;
  ya = y;
  xa = x;
  ScrPlace_ApplyRect(scrPlace, &xa, &ya, &w, &height, horzAlign, vertAlign);
  CG_DrawRotatedPicPhysical(scrPlace, xa, ya, w, height, angle, color, material);
}

/*
==============
CG_DrawRotatedPicPhysical
==============
*/
void CG_DrawRotatedPicPhysical(const ScreenPlacement *scrPlace, float x, float y, float width, float height, float angle, const vec4_t *color, Material *material)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float c; 
  float s; 
  float t1; 
  float s1; 
  float t0; 
  float s0; 
  vec2_t verts; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 

  FastSinCos(angle * 0.017453292, &s, &c);
  v9 = scrPlace->scaleVirtualToReal.v[0];
  v10 = scrPlace->scaleVirtualToReal.v[1];
  v11 = (float)((float)(width * 0.5) * (float)(1.0 / cg_hudSplitscreenScale)) * scrPlace->scaleRealToVirtual.v[0];
  v12 = v11 * c;
  v13 = (float)((float)(0.5 * height) * (float)(1.0 / cg_hudSplitscreenScale)) * scrPlace->scaleRealToVirtual.v[1];
  v14 = (float)((float)((float)(1.0 / cg_hudSplitscreenScale) * x) * scrPlace->scaleRealToVirtual.v[0]) + v11;
  v15 = v11 * s;
  v16 = (float)((float)((float)(1.0 / cg_hudSplitscreenScale) * y) * scrPlace->scaleRealToVirtual.v[1]) + v13;
  v17 = v14 - v12;
  verts.v[0] = (float)((float)((float)(v14 - v12) - COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 * s) ^ _xmm)) * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[0];
  v18 = v14 + v12;
  verts.v[1] = (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 * c) ^ _xmm) + (float)(v16 - v15)) * cg_hudSplitscreenScale) * v10;
  v26 = (float)((float)(v18 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 * s) ^ _xmm)) * cg_hudSplitscreenScale) * v9;
  v27 = (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 * c) ^ _xmm) + (float)(v16 + v15)) * cg_hudSplitscreenScale) * v10;
  v28 = (float)((float)(v18 - (float)(v13 * s)) * cg_hudSplitscreenScale) * v9;
  v29 = (float)((float)((float)(v13 * c) + (float)(v16 + v15)) * cg_hudSplitscreenScale) * v10;
  v30 = (float)((float)(v17 - (float)(v13 * s)) * cg_hudSplitscreenScale) * v9;
  v31 = (float)((float)((float)(v13 * c) + (float)(v16 - v15)) * cg_hudSplitscreenScale) * v10;
  Material_GetDefault2DTextureCoordsForAtlasing(material, &s0, &s1, &t0, &t1);
  R_AddCmdDrawQuadPicST(&verts, s0, t0, s1, t1, color, material);
}

/*
==============
CG_DrawRotatedPicWithoutSplitScreenScaling
==============
*/
void CG_DrawRotatedPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  float xa; 
  float ya; 
  float w; 

  w = width;
  ya = y;
  xa = x;
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, &xa, &ya, &w, &height, horzAlign, vertAlign);
  CG_DrawRotatedPicPhysical(scrPlace, xa, ya, w, height, angle, color, material);
}

/*
==============
CG_DrawRotatedQuadPic
==============
*/
void CG_DrawRotatedQuadPic(const ScreenPlacement *scrPlace, float x, float y, const vec2_t *verts, float angle, const vec4_t *color, Material *material)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
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
  float c; 
  float s; 
  float t1; 
  float s1; 
  float t0; 
  float s0; 
  vec2_t vertsa; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 

  FastSinCos(angle * 0.017453292, &s, &c);
  v9 = scrPlace->scaleRealToVirtual.v[0];
  v10 = scrPlace->scaleRealToVirtual.v[1];
  v11 = scrPlace->scaleVirtualToReal.v[0];
  v12 = scrPlace->scaleVirtualToReal.v[1];
  v13 = (float)((float)(1.0 / cg_hudSplitscreenScale) * x) * v9;
  v14 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts->v[0]) * v9;
  v15 = (float)((float)(1.0 / cg_hudSplitscreenScale) * y) * v10;
  v16 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts->v[1]) * v10;
  vertsa.v[0] = (float)((float)((float)((float)(v14 * c) + v13) - (float)(s * v16)) * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[0];
  v17 = (float)((float)((float)((float)(v14 * s) + v15) + (float)(c * v16)) * cg_hudSplitscreenScale) * v12;
  v18 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts[1].v[0]) * v9;
  v19 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts[1].v[1]) * v10;
  vertsa.v[1] = v17;
  v20 = (float)((float)((float)((float)(v18 * c) + v13) - (float)(v19 * s)) * cg_hudSplitscreenScale) * v11;
  v21 = (float)((float)((float)(v18 * s) + v15) + (float)(v19 * c)) * cg_hudSplitscreenScale;
  v22 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts[2].v[0]) * v9;
  v33 = v20;
  v23 = (float)((float)(1.0 / cg_hudSplitscreenScale) * verts[2].v[1]) * v10;
  v34 = v21 * v12;
  v24 = (float)(1.0 / cg_hudSplitscreenScale) * verts[3].v[0];
  v35 = (float)((float)((float)((float)(v22 * c) + v13) - (float)(v23 * s)) * cg_hudSplitscreenScale) * v11;
  v25 = (float)(1.0 / cg_hudSplitscreenScale) * verts[3].v[1];
  v36 = (float)((float)((float)((float)(v22 * s) + v15) + (float)(v23 * c)) * cg_hudSplitscreenScale) * v12;
  v37 = (float)((float)((float)((float)((float)(v24 * v9) * c) + v13) - (float)((float)(v25 * v10) * s)) * cg_hudSplitscreenScale) * v11;
  v38 = (float)((float)((float)((float)((float)(v24 * v9) * s) + v15) + (float)((float)(v25 * v10) * c)) * cg_hudSplitscreenScale) * v12;
  Material_GetDefault2DTextureCoordsForAtlasing(material, &s0, &s1, &t0, &t1);
  R_AddCmdDrawQuadPicST(&vertsa, s0, t0, s1, t1, color, material);
}

/*
==============
CG_DrawSmallDevString
==============
*/
int CG_DrawSmallDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  vec4_t color; 

  color.v[0] = FLOAT_1_0;
  color.v[1] = FLOAT_1_0;
  color.v[2] = FLOAT_1_0;
  color.v[3] = alpha;
  return CG_DrawDevString(scrPlace, x, y, 1.0, 1.0, s, &color, align, cls.smallDevFont);
}

/*
==============
CG_DrawSmallDevStringColor
==============
*/
int CG_DrawSmallDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  return CG_DrawDevString(scrPlace, x, y, 1.0, 1.0, s, color, align, cls.smallDevFont);
}

/*
==============
CG_DrawStringExt
==============
*/
void CG_DrawStringExt(const ScreenPlacement *scrPlace, float x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight)
{
  GfxFont *smallDevFont; 
  bool v10; 
  float v11[6]; 
  float v12; 
  float v13; 

  v12 = x;
  smallDevFont = cls.smallDevFont;
  v13 = y + charHeight;
  charHeight = charHeight / (float)cls.smallDevFont->pixelHeight;
  v11[0] = FLOAT_1_0;
  ScrPlace_ApplyRect(scrPlace, &v12, &v13, v11, &charHeight, 1, 1);
  v10 = shadow != 0;
  shadow = -shadow;
  CL_DrawTextPhysical(string, 0x7FFFFFFF, smallDevFont, v12, v13, charHeight, charHeight, setColor, v10 ? 3 : 0);
}

/*
==============
CG_DrawTools_FadeAlpha
==============
*/
float CG_DrawTools_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec)
{
  int v4; 

  if ( fadeMsec <= 0 )
    return FLOAT_1_0;
  v4 = startMsec - timeNow + totalMsec;
  if ( v4 >= fadeMsec )
    return FLOAT_1_0;
  else
    return (float)v4 / (float)fadeMsec;
}

/*
==============
CG_DrawTools_FadeColor
==============
*/
char CG_DrawTools_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec, vec4_t *outColor)
{
  int v5; 
  int v6; 
  float v7; 

  if ( !startMsec )
    return 0;
  v5 = timeNow - startMsec;
  if ( v5 >= totalMsec )
    return 0;
  if ( fadeMsec <= 0 || (v6 = totalMsec - v5, v6 >= fadeMsec) )
    v7 = FLOAT_1_0;
  else
    v7 = (float)v6 / (float)fadeMsec;
  outColor->v[3] = v7;
  outColor->v[2] = 1.0;
  outColor->v[1] = 1.0;
  outColor->v[0] = 1.0;
  return 1;
}

/*
==============
CG_DrawTools_LaserMaterialChanged
==============
*/
void CG_DrawTools_LaserMaterialChanged(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  char *data_p; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 485, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_CUSTOMIZED_LASER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_CUSTOMIZED_LASER )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  data_p = (char *)CL_GetConfigString(12);
  v3 = Com_Parse((const char **)&data_p);
  v4 = "gfx_laser_hdr";
  if ( *v3 )
    v4 = v3;
  LocalClientGlobals->laserMaterial = Material_RegisterHandle(v4, IMAGE_TRACK_FX);
  v5 = Com_Parse((const char **)&data_p);
  v6 = "gfx_laser_light";
  if ( *v5 )
    v6 = v5;
  LocalClientGlobals->laserLightMaterial = Material_RegisterHandle(v6, IMAGE_TRACK_FX);
  if ( !LocalClientGlobals->laserMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 511, ASSERT_TYPE_ASSERT, "(cgameGlob->laserMaterial)", (const char *)&queryFormat, "cgameGlob->laserMaterial") )
    __debugbreak();
  if ( !LocalClientGlobals->laserLightMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 512, ASSERT_TYPE_ASSERT, "(cgameGlob->laserLightMaterial)", (const char *)&queryFormat, "cgameGlob->laserLightMaterial") )
    __debugbreak();
}

/*
==============
CG_DrawTools_MiniMapChanged
==============
*/
void CG_DrawTools_MiniMapChanged(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *ConfigString; 
  const char *v6; 
  const char *v7; 
  const Material *v8; 
  const char *v9; 
  const char *v11; 
  const char *v13; 
  const char *v15; 
  const char *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  char *data_p[2]; 
  char dest[64]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ConfigString = CL_GetConfigString(9);
  *(double *)&_XMM0 = atof(ConfigString);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM1 + 1);
  LocalClientGlobals->compassNorthYaw = *(float *)&_XMM1;
  FastSinCos(*(float *)&_XMM1 * 0.017453292, (float *)&LocalClientGlobals->compassNorth + 1, (float *)&LocalClientGlobals->compassNorth);
  data_p[0] = (char *)CL_GetConfigString(10);
  v6 = Com_Parse((const char **)data_p);
  LocalClientGlobals->compassMapTDMDMaterial = NULL;
  v7 = v6;
  if ( *v6 )
  {
    if ( TopDownMapData_HasData() )
    {
      Com_sprintf(dest, 0x40ui64, "%s_tdmd", v7);
      v8 = Material_RegisterHandle(dest, IMAGE_TRACK_HUD);
      if ( !Material_IsDefault(v8) )
        LocalClientGlobals->compassMapTDMDMaterial = (Material *)v8;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) )
  {
    if ( LocalClientGlobals->m_isMLGSpectator )
    {
      Com_Parse((const char **)data_p);
      LocalClientGlobals->compassMapMaterial = Material_RegisterHandle(v7, IMAGE_TRACK_HUD);
    }
    else
    {
      LocalClientGlobals->compassMapMaterial = Material_RegisterHandle(v7, IMAGE_TRACK_HUD);
      Com_Parse((const char **)data_p);
    }
  }
  v9 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v9);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  LocalClientGlobals->compassMapUpperLeft.v[0] = *(float *)&_XMM1;
  v11 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v11);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  LocalClientGlobals->compassMapUpperLeft.v[1] = *(float *)&_XMM1;
  v13 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v13);
  __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  v15 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v15);
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  v17 = Com_Parse((const char **)data_p);
  LocalClientGlobals->compassMapTiles = atoi(v17);
  v18 = LocalClientGlobals->compassNorth.v[1];
  v19 = *(float *)&_XMM7 - LocalClientGlobals->compassMapUpperLeft.v[0];
  v20 = *(float *)&_XMM6 - LocalClientGlobals->compassMapUpperLeft.v[1];
  v21 = LocalClientGlobals->compassNorth.v[0];
  LocalClientGlobals->compassMapWorldSize.v[0] = (float)(v19 * v18) - (float)(v20 * v21);
  LODWORD(v22) = COERCE_UNSIGNED_INT((float)(v20 * v18) + (float)(v19 * v21)) ^ _xmm;
  LocalClientGlobals->compassMapWorldSize.v[1] = v22;
  if ( LocalClientGlobals->compassMapWorldSize.v[0] == 0.0 )
    LocalClientGlobals->compassMapWorldSize.v[0] = 1000.0;
  if ( v22 == 0.0 )
    LocalClientGlobals->compassMapWorldSize.v[1] = 1000.0;
}

/*
==============
CG_DrawTools_ThermalBodyMaterialChanged
==============
*/
void CG_DrawTools_ThermalBodyMaterialChanged(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *v2; 
  char *data_p; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  data_p = (char *)CL_GetConfigString(11);
  v2 = Com_Parse((const char **)&data_p);
  if ( *v2 )
    LocalClientGlobals->thermalBodyMaterial = Material_RegisterHandle(v2, IMAGE_TRACK_MODEL);
  else
    LocalClientGlobals->thermalBodyMaterial = NULL;
}

/*
==============
CG_DrawVLine
==============
*/
void CG_DrawVLine(const ScreenPlacement *scrPlace, float x, float top, float lineWidth, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  const vec4_t *v9; 
  Material *v10; 
  float v11; 
  float v12; 
  float v13; 
  vec2_t verts; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  v9 = color;
  v10 = material;
  v13 = x;
  v12 = top;
  v11 = lineWidth;
  ScrPlace_ApplyRect(scrPlace, &v13, &v12, &v11, &height, horzAlign, vertAlign);
  verts.v[0] = (float)(0.5 * v11) + v13;
  v15 = verts.v[0];
  v17 = v13 - (float)(0.5 * v11);
  v19 = v17;
  verts.v[1] = (float)((float)(0.5 * height) + v12) - (float)(0.5 * height);
  v16 = (float)((float)(0.5 * height) + v12) + (float)(0.5 * height);
  v18 = v16;
  v20 = verts.v[1];
  R_AddCmdDrawQuadPic(&verts, v9, v10);
}

/*
==============
CG_UpdateSSR
==============
*/
void CG_UpdateSSR(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int128 v2; 
  __int64 v5; 

  if ( cg_t::ms_allocatedType )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v2 = 0i64;
    *(float *)&v2 = (float)((float)((float)LocalClientGlobals->frametime * 0.001) / r_ssrFadeInDuration->current.value) + LocalClientGlobals->ssr.fade;
    _XMM0 = v2;
    __asm { vminss  xmm2, xmm0, cs:__real@3f800000 }
    LocalClientGlobals->ssr.fade = *(float *)&_XMM2;
    LocalClientGlobals->refdef.ssrFade = *(float *)&_XMM2;
    LocalClientGlobals->refdef.ssrSourceDisplayViewport.width = 0;
    memset(&v5, 0, sizeof(v5));
  }
}

/*
==============
CG_WorldDirToScreenPosReal
==============
*/
bool CG_WorldDirToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldDir, const float tanHalfFOVX, const float tanHalfFOVY, vec2_t *outScreenPos)
{
  cg_t *LocalClientGlobals; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v15; 
  float v16; 
  bool result; 
  float v18; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v30; 
  char v31; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( worldDir == (const vec3_t *)&v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v9 = worldDir->v[2];
  v10 = worldDir->v[1];
  v11 = LODWORD(worldDir->v[0]);
  v12 = (float)((float)(v10 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)(worldDir->v[0] * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)(v9 * LocalClientGlobals->refdef.view.axis.m[0].v[2]);
  *(float *)&v11 = (float)((float)(worldDir->v[0] * LocalClientGlobals->refdef.view.axis.m[1].v[0]) + (float)(v10 * LocalClientGlobals->refdef.view.axis.m[1].v[1])) + (float)(v9 * LocalClientGlobals->refdef.view.axis.m[1].v[2]);
  _XMM7 = v11;
  _XMM8 = 0i64;
  v15 = (float)((float)(worldDir->v[0] * LocalClientGlobals->refdef.view.axis.m[2].v[0]) + (float)(v10 * LocalClientGlobals->refdef.view.axis.m[2].v[1])) + (float)(v9 * LocalClientGlobals->refdef.view.axis.m[2].v[2]);
  if ( v12 > 0.0 )
  {
    outScreenPos->v[0] = (float)((float)(1.0 - (float)((float)(*(float *)&_XMM7 / tanHalfFOVX) * (float)(1.0 / v12))) * scrPlace->realViewportSize.v[0]) * 0.5;
    v25 = (float)(1.0 - (float)((float)(v15 / tanHalfFOVY) * (float)(1.0 / v12))) * scrPlace->realViewportSize.v[1];
    result = 1;
  }
  else
  {
    LODWORD(v16) = LODWORD(v15) ^ _xmm;
    result = 0;
    LODWORD(v18) = _XMM7 ^ _xmm;
    outScreenPos->v[0] = COERCE_FLOAT(_XMM7 ^ _xmm);
    outScreenPos->v[1] = COERCE_FLOAT(LODWORD(v15) ^ _xmm);
    if ( *(float *)&_XMM7 == -0.0 )
    {
      outScreenPos->v[0] = scrPlace->realViewportSize.v[0] * 0.5;
      _XMM3 = LODWORD(scrPlace->realViewportSize.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm8, xmm4
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      outScreenPos->v[1] = *(float *)&_XMM0;
      return result;
    }
    if ( v16 != 0.0 )
    {
      LODWORD(v26) = LODWORD(v16) & _xmm;
      outScreenPos->v[1] = v26;
      v27 = LODWORD(scrPlace->realViewportSize.v[0]);
      *(float *)&v27 = scrPlace->realViewportSize.v[0] / v18;
      _XMM2 = v27 & (unsigned int)_xmm;
      __asm { vmaxss  xmm2, xmm2, xmm0 }
      outScreenPos->v[0] = v18 * *(float *)&_XMM2;
      v30 = v26 * *(float *)&_XMM2;
      outScreenPos->v[1] = v30;
      outScreenPos->v[0] = (float)(0.5 * scrPlace->realViewportSize.v[0]) + (float)(v18 * *(float *)&_XMM2);
      outScreenPos->v[1] = (float)(0.5 * scrPlace->realViewportSize.v[1]) + v30;
      return result;
    }
    _XMM2 = LODWORD(scrPlace->realViewportSize.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm7, xmm6
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    outScreenPos->v[0] = *(float *)&_XMM0;
    v25 = scrPlace->realViewportSize.v[1];
  }
  outScreenPos->v[1] = v25 * 0.5;
  return result;
}

/*
==============
CG_WorldDirToScreenPosRealPrecise
==============
*/
char CG_WorldDirToScreenPosRealPrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldDir, const float tanHalfFOVX, const float tanHalfFOVY, vec2_t *outScreenPos)
{
  float *LocalClientGlobals; 
  double z; 
  double y; 
  double v11; 
  double v15; 
  float v19; 
  float v20; 
  char result; 
  float v29; 
  __int128 v30; 
  float v33; 

  LocalClientGlobals = (float *)CG_GetLocalClientGlobals(localClientNum);
  z = worldDir->z;
  y = worldDir->y;
  LocalClientGlobals += 6728;
  v11 = LocalClientGlobals[9] * worldDir->x + LocalClientGlobals[10] * y + LocalClientGlobals[11] * z;
  _XMM8 = COERCE_UNSIGNED_INT64(LocalClientGlobals[12] * worldDir->x + LocalClientGlobals[13] * y + LocalClientGlobals[14] * z);
  _XMM0 = COERCE_UNSIGNED_INT64(LocalClientGlobals[17] * z);
  v15 = LocalClientGlobals[15] * worldDir->x + LocalClientGlobals[16] * y + *(double *)&_XMM0;
  _XMM7 = *(unsigned __int64 *)&v15;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( v11 > *(double *)&_XMM0 )
  {
    _XMM2 = COERCE_UNSIGNED_INT64((1.0 - *(double *)&_XMM8 / tanHalfFOVX * (1.0 / v11)) * (float)(scrPlace->realViewportSize.v[0] * 0.5));
    __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
    outScreenPos->v[0] = *(float *)&_XMM3;
    _XMM3 = COERCE_UNSIGNED_INT64((1.0 - v15 / tanHalfFOVY * (1.0 / v11)) * (float)(scrPlace->realViewportSize.v[1] * 0.5));
    __asm { vcvtsd2ss xmm0, xmm3, xmm3 }
    outScreenPos->v[1] = *(float *)&_XMM0;
    return 1;
  }
  else
  {
    __asm
    {
      vcvtsd2ss xmm0, xmm8, xmm8
      vcvtsd2ss xmm1, xmm7, xmm7
    }
    outScreenPos->v[0] = COERCE_FLOAT(_XMM0 ^ _xmm);
    LODWORD(v19) = _XMM1 ^ _xmm;
    outScreenPos->v[1] = COERCE_FLOAT(_XMM1 ^ _xmm);
    v20 = outScreenPos->v[0];
    _XMM5 = 0i64;
    result = 0;
    if ( outScreenPos->v[0] == 0.0 )
    {
      __asm { vcmpless xmm0, xmm5, dword ptr [rdi+4] }
      outScreenPos->v[0] = scrPlace->realViewportSize.v[0] * 0.5;
      _XMM3 = LODWORD(scrPlace->realViewportSize.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm { vblendvps xmm0, xmm3, xmm1, xmm0 }
      outScreenPos->v[1] = *(float *)&_XMM0;
    }
    else if ( v19 == 0.0 )
    {
      _XMM2 = LODWORD(scrPlace->realViewportSize.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm5, xmm6
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      outScreenPos->v[0] = *(float *)&_XMM0;
      outScreenPos->v[1] = scrPlace->realViewportSize.v[1] * 0.5;
    }
    else
    {
      LODWORD(v29) = LODWORD(v19) & _xmm;
      outScreenPos->v[1] = v29;
      v30 = LODWORD(scrPlace->realViewportSize.v[1]);
      *(float *)&v30 = scrPlace->realViewportSize.v[1] / v29;
      _XMM2 = v30 & (unsigned int)_xmm;
      __asm { vmaxss  xmm2, xmm2, xmm0 }
      outScreenPos->v[0] = v20 * *(float *)&_XMM2;
      v33 = v29 * *(float *)&_XMM2;
      outScreenPos->v[1] = v33;
      outScreenPos->v[0] = (float)(0.5 * scrPlace->realViewportSize.v[0]) + (float)(v20 * *(float *)&_XMM2);
      outScreenPos->v[1] = (float)(0.5 * scrPlace->realViewportSize.v[1]) + v33;
    }
  }
  return result;
}

/*
==============
CG_WorldDirToScreenPosVirtualCentered
==============
*/
bool CG_WorldDirToScreenPosVirtualCentered(LocalClientNum_t localClientNum, const vec3_t *worldDir, vec2_t *outScreenPos)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  bool v7; 
  ScreenPlacement *v8; 
  bool result; 
  float v10; 
  float v11; 
  float v12; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v8 = &scrPlaceViewDisplay[v3];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v7 )
      __debugbreak();
  }
  v8 = &scrPlaceFull;
LABEL_8:
  result = CG_WorldDirToScreenPosReal((LocalClientNum_t)v3, v8, worldDir, LocalClientGlobals->refdef.view.fov.tanHalfFovX, LocalClientGlobals->refdef.view.fov.tanHalfFovY, outScreenPos);
  v10 = outScreenPos->v[0] - (float)(0.5 * v8->realViewportSize.v[0]);
  v11 = outScreenPos->v[1];
  outScreenPos->v[0] = v10;
  v12 = v11 - (float)(0.5 * v8->realViewportSize.v[1]);
  outScreenPos->v[1] = v12;
  outScreenPos->v[0] = v10 * v8->scaleRealToVirtual.v[0];
  outScreenPos->v[1] = v12 * v8->scaleRealToVirtual.v[1];
  return result;
}

/*
==============
CG_WorldPosToScreenPosReal
==============
*/
_BOOL8 CG_WorldPosToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, vec2_t *outScreenPos)
{
  RefdefView *p_view; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  bool v16; 
  vec3_t outOrg; 
  __int64 v19; 
  vec3_t worldDir; 

  v19 = -2i64;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v9 = worldPos->v[0] - outOrg.v[0];
  v11 = LODWORD(worldPos->v[1]);
  v10 = worldPos->v[1] - outOrg.v[1];
  v12 = worldPos->v[2] - outOrg.v[2];
  *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12));
  _XMM1 = v11;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  worldDir.v[0] = v9 * (float)(1.0 / *(float *)&_XMM1);
  worldDir.v[1] = v10 * (float)(1.0 / *(float *)&_XMM1);
  worldDir.v[2] = v12 * (float)(1.0 / *(float *)&_XMM1);
  v16 = CG_WorldDirToScreenPosReal(localClientNum, scrPlace, &worldDir, p_view->fov.tanHalfFovX, p_view->fov.tanHalfFovY, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  return v16;
}

/*
==============
CG_WorldPosToScreenPosRealForScene
==============
*/
_BOOL8 CG_WorldPosToScreenPosRealForScene(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  RefdefView *p_view; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  bool v19; 
  vec3_t outOrg; 
  __int64 v22; 
  vec3_t worldDir; 

  v22 = -2i64;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v10 = worldPos->v[0] - outOrg.v[0];
  v12 = LODWORD(worldPos->v[1]);
  v11 = worldPos->v[1] - outOrg.v[1];
  v13 = worldPos->v[2] - outOrg.v[2];
  *(float *)&v12 = fsqrt((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v13 * v13));
  _XMM1 = v12;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  worldDir.v[0] = v10 * (float)(1.0 / *(float *)&_XMM1);
  worldDir.v[1] = v11 * (float)(1.0 / *(float *)&_XMM1);
  worldDir.v[2] = v13 * (float)(1.0 / *(float *)&_XMM1);
  if ( space == 1 )
  {
    tanHalfFovY = p_view->depthHackFov.tanHalfFovY;
    tanHalfFovX = p_view->depthHackFov.tanHalfFovX;
  }
  else
  {
    tanHalfFovY = p_view->fov.tanHalfFovY;
    tanHalfFovX = p_view->fov.tanHalfFovX;
  }
  v19 = CG_WorldDirToScreenPosReal(localClientNum, scrPlace, &worldDir, tanHalfFovX, tanHalfFovY, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  return v19;
}

/*
==============
CG_WorldPosToScreenPosRealForScenePrecise
==============
*/
__int64 CG_WorldPosToScreenPosRealForScenePrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  RefdefView *p_view; 
  long double v10; 
  long double v11; 
  long double v12; 
  __int128 v14; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  unsigned __int8 v22; 
  vec3_t outOrg; 
  __int64 v25; 
  dvec3_t worldDir; 

  v25 = -2i64;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v10 = worldPos->x - outOrg.v[0];
  v11 = worldPos->y - outOrg.v[1];
  v12 = worldPos->z - outOrg.v[2];
  _XMM1 = COERCE_UNSIGNED_INT64(v10 * v10);
  *((_QWORD *)&v14 + 1) = 0i64;
  *(double *)&v14 = v11 * v11 + *(double *)&_XMM1 + v12 * v12;
  _XMM2 = v14;
  __asm
  {
    vsqrtsd xmm4, xmm2, xmm2
    vxorpd  xmm1, xmm1, xmm1
    vcmpeqsd xmm0, xmm4, xmm1
    vblendvpd xmm1, xmm4, xmm2, xmm0
  }
  worldDir.x = v10 * (1.0 / *(double *)&_XMM1);
  worldDir.y = v11 * (1.0 / *(double *)&_XMM1);
  worldDir.z = v12 * (1.0 / *(double *)&_XMM1);
  if ( space == 1 )
  {
    tanHalfFovY = p_view->depthHackFov.tanHalfFovY;
    tanHalfFovX = p_view->depthHackFov.tanHalfFovX;
  }
  else
  {
    tanHalfFovY = p_view->fov.tanHalfFovY;
    tanHalfFovX = p_view->fov.tanHalfFovX;
  }
  v22 = CG_WorldDirToScreenPosRealPrecise(localClientNum, scrPlace, &worldDir, tanHalfFovX, tanHalfFovY, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  return v22;
}

/*
==============
CG_WorldPosToScreenPosRealPrecise
==============
*/
__int64 CG_WorldPosToScreenPosRealPrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, vec2_t *outScreenPos)
{
  RefdefView *p_view; 
  long double v9; 
  long double v10; 
  long double v11; 
  __int128 v13; 
  unsigned __int8 v19; 
  vec3_t outOrg; 
  __int64 v22; 
  dvec3_t worldDir; 

  v22 = -2i64;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(p_view, &outOrg);
  v9 = worldPos->x - outOrg.v[0];
  v10 = worldPos->y - outOrg.v[1];
  v11 = worldPos->z - outOrg.v[2];
  _XMM1 = COERCE_UNSIGNED_INT64(v9 * v9);
  *((_QWORD *)&v13 + 1) = 0i64;
  *(double *)&v13 = v10 * v10 + *(double *)&_XMM1 + v11 * v11;
  _XMM2 = v13;
  __asm
  {
    vsqrtsd xmm4, xmm2, xmm2
    vxorpd  xmm1, xmm1, xmm1
    vcmpeqsd xmm0, xmm4, xmm1
    vblendvpd xmm1, xmm4, xmm2, xmm0
  }
  worldDir.x = v9 * (1.0 / *(double *)&_XMM1);
  worldDir.y = v10 * (1.0 / *(double *)&_XMM1);
  worldDir.z = v11 * (1.0 / *(double *)&_XMM1);
  v19 = CG_WorldDirToScreenPosRealPrecise(localClientNum, scrPlace, &worldDir, p_view->fov.tanHalfFovX, p_view->fov.tanHalfFovY, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  return v19;
}

