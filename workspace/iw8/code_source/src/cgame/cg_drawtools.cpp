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

void __fastcall CG_DebugArc(const vec3_t *center, double radius, double angle0, double angle1, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v21; 
  float v29; 
  vec3_t *p_start; 
  __int64 v32; 
  vec3_t *v33; 
  float c; 
  float s[3]; 
  vec3_t start; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vsubss  xmm0, xmm3, xmm2
    vmovaps xmm6, xmm2
    vmovss  xmm2, cs:__real@3d888889
    vmulss  xmm7, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
    vmovaps xmm8, xmm1
    vmovss  xmm9, cs:__real@3c8efa35
  }
  _RBX = &start.v[1];
  v21 = 0;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm2, xmm1, xmm6
      vmulss  xmm0, xmm2, xmm9; radians
    }
    FastSinCos(*(const float *)&_XMM0, s, &c);
    __asm
    {
      vmulss  xmm1, xmm8, [rsp+178h+c]
      vaddss  xmm2, xmm1, dword ptr [rsi]
      vmulss  xmm1, xmm8, [rsp+178h+s]
    }
    v29 = center->v[2];
    ++v21;
    __asm { vmovss  dword ptr [rbx-4], xmm2 }
    _RBX += 3;
    __asm
    {
      vaddss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbx-0Ch], xmm2
    }
    *(_RBX - 2) = v29;
  }
  while ( v21 < 0x10 );
  p_start = &start;
  v32 = 15i64;
  do
  {
    v33 = p_start + 1;
    CL_AddDebugLine(p_start, p_start + 1, color, depthTest, duration, 0);
    p_start = v33;
    --v32;
  }
  while ( v32 );
  _R11 = &v42;
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
CG_DebugAxis
==============
*/

void __fastcall CG_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, double length, int depthTest, int duration)
{
  vec3_t end; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmulss  xmm0, xmm2, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
    vmovaps xmm6, xmm2
  }
  CL_AddDebugLine(pos, &end, &colorRed, depthTest, duration, 0);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm6, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm6, dword ptr [rdi+14h]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
  }
  CL_AddDebugLine(pos, &end, &colorGreen, depthTest, duration, 0);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+18h]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm6, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm6, dword ptr [rdi+20h]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
  }
  CL_AddDebugLine(pos, &end, &colorBlue, depthTest, duration, 0);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
CG_DebugBar
==============
*/

void __fastcall CG_DebugBar(const vec3_t *origin, const vec3_t *dir, double fraction, double width, float height, const vec4_t *color, int depthTest, int duration)
{
  vec3_t v84; 
  vec3_t v85; 
  vec3_t start; 
  vec3_t end; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm8
    vmovaps xmmword ptr [rax-28h], xmm9
    vmovaps xmmword ptr [rax-38h], xmm10
    vmovaps xmmword ptr [rax-48h], xmm11
    vmovaps xmmword ptr [rax-58h], xmm12
    vmovaps xmmword ptr [rax-68h], xmm13
    vmovaps xmmword ptr [rax-78h], xmm14
    vmovaps xmmword ptr [rax-88h], xmm15
    vmovss  xmm14, dword ptr [rdx]
    vmovss  xmm15, dword ptr [rcx]
    vmovss  xmm12, dword ptr [rdx+4]
    vmovss  xmm13, dword ptr [rcx+4]
    vmovss  xmm10, dword ptr [rdx+8]
    vmovss  xmm11, dword ptr [rcx+8]
    vmovss  xmm9, [rbp+37h+arg_20]
    vmulss  xmm8, xmm9, cs:__real@3f000000
    vmulss  xmm4, xmm2, xmm3
    vmulss  xmm5, xmm4, cs:__real@bf000000
    vmulss  xmm0, xmm14, xmm5
    vaddss  xmm1, xmm0, xmm15
    vmovss  dword ptr [rbp+37h+start], xmm1
    vmulss  xmm0, xmm12, xmm5
    vaddss  xmm1, xmm0, xmm13
    vmovss  dword ptr [rbp+37h+start+4], xmm1
    vmovss  [rsp+100h+var_D0], xmm3
    vmulss  xmm3, xmm4, cs:__real@3f000000
    vmulss  xmm0, xmm14, xmm3
    vaddss  xmm1, xmm0, xmm15
    vmulss  xmm2, xmm12, xmm3
    vaddss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rbp+37h+end+4], xmm0
    vmulss  xmm0, xmm10, xmm5
    vmovss  dword ptr [rbp+37h+end], xmm1
    vaddss  xmm1, xmm0, xmm11
    vsubss  xmm2, xmm1, xmm8
    vmulss  xmm0, xmm10, xmm3
    vaddss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rbp+37h+start+8], xmm2
    vsubss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rbp+37h+end+8], xmm2
  }
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 0);
  __asm
  {
    vaddss  xmm1, xmm9, dword ptr [rbp+37h+start+8]
    vaddss  xmm0, xmm9, dword ptr [rbp+37h+end+8]
    vmovss  dword ptr [rbp+37h+start+8], xmm1
    vmovss  dword ptr [rbp+37h+end+8], xmm0
  }
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 0);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+37h+start]
    vmovss  xmm1, dword ptr [rbp+37h+start+4]
    vmovsd  qword ptr [rsp+100h+var_B8], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+start]
    vmovss  dword ptr [rsp+100h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+start+8]
    vsubss  xmm2, xmm0, xmm9
  }
  v85.v[2] = start.v[2];
  __asm
  {
    vmovss  dword ptr [rsp+100h+var_C8+8], xmm2
    vmovss  dword ptr [rsp+100h+var_C8+4], xmm1
  }
  CL_AddDebugLine(&v85, &v84, color, depthTest, duration, 0);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+37h+end]
    vmovss  xmm1, dword ptr [rbp+37h+end+4]
    vmovsd  qword ptr [rsp+100h+var_B8], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+end]
    vmovss  dword ptr [rsp+100h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+end+8]
    vmovss  dword ptr [rsp+100h+var_C8+4], xmm1
  }
  v85.v[2] = end.v[2];
  __asm
  {
    vsubss  xmm2, xmm0, xmm9
    vmovss  dword ptr [rsp+100h+var_C8+8], xmm2
  }
  CL_AddDebugLine(&v85, &v84, color, depthTest, duration, 0);
  __asm
  {
    vmovss  xmm0, [rsp+100h+var_D0]
    vmulss  xmm2, xmm0, cs:__real@bf000000
    vmulss  xmm0, xmm14, xmm2
    vaddss  xmm4, xmm0, xmm15
    vmulss  xmm1, xmm12, xmm2
    vmulss  xmm0, xmm10, xmm2
    vaddss  xmm3, xmm1, xmm13
    vaddss  xmm1, xmm0, xmm11
    vsubss  xmm2, xmm1, xmm8
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rsp+100h+var_C8+8], xmm0
    vmovss  dword ptr [rsp+100h+var_B8], xmm4
    vmovss  dword ptr [rbp+37h+var_B8+4], xmm3
    vmovss  dword ptr [rbp+37h+var_B8+8], xmm2
    vmovss  dword ptr [rsp+100h+var_C8], xmm4
    vmovss  dword ptr [rsp+100h+var_C8+4], xmm3
  }
  CL_AddDebugLine(&v85, &v84, color, depthTest, duration, 0);
  __asm
  {
    vmovss  xmm0, [rsp+100h+var_D0]
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm14, xmm2
    vaddss  xmm4, xmm0, xmm15
    vmulss  xmm1, xmm12, xmm2
    vmulss  xmm0, xmm10, xmm2
    vaddss  xmm3, xmm1, xmm13
    vaddss  xmm1, xmm0, xmm11
    vsubss  xmm2, xmm1, xmm8
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rsp+100h+var_C8+8], xmm0
    vmovss  dword ptr [rsp+100h+var_B8], xmm4
    vmovss  dword ptr [rbp+37h+var_B8+4], xmm3
    vmovss  dword ptr [rbp+37h+var_B8+8], xmm2
    vmovss  dword ptr [rsp+100h+var_C8], xmm4
    vmovss  dword ptr [rsp+100h+var_C8+4], xmm3
  }
  CL_AddDebugLine(&v85, &v84, color, depthTest, duration, 0);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-20h]
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
CG_DebugBox
==============
*/

void __fastcall CG_DebugBox(const vec3_t *origin, const Bounds *bounds, double yaw, const vec4_t *color, int depthTest, int duration)
{
  const int (*v81)[2]; 
  __int64 v82; 
  float s; 
  float c[3]; 
  vec3_t start; 
  char v145; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmulss  xmm0, xmm2, cs:__real@3c8efa35; radians
  }
  _RBX = bounds;
  _RDI = origin;
  FastSinCos(*(const float *)&_XMM0, &s, c);
  __asm
  {
    vmovss  xmm15, [rsp+170h+s]
    vmovss  xmm14, [rsp+170h+c]
    vmovss  xmm5, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rbx]
    vsubss  xmm13, xmm4, dword ptr [rbx+0Ch]
    vaddss  xmm12, xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm9, dword ptr [rbx+8]
    vsubss  xmm8, xmm9, dword ptr [rbx+14h]
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rbx+4]
    vsubss  xmm11, xmm6, dword ptr [rbx+10h]
    vaddss  xmm6, xmm6, dword ptr [rbx+10h]
    vmulss  xmm1, xmm13, xmm15
    vmulss  xmm0, xmm11, xmm14
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm15
    vmulss  xmm2, xmm13, xmm14
    vsubss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm3, dword ptr [rdi+4]
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+170h+start+8], xmm0
    vmovss  dword ptr [rsp+170h+start+4], xmm1
    vmovss  dword ptr [rsp+170h+start], xmm2
    vmulss  xmm0, xmm11, xmm15
    vmulss  xmm1, xmm12, xmm14
    vsubss  xmm4, xmm1, xmm0
    vaddss  xmm0, xmm4, dword ptr [rdi]
    vmovss  [rsp+170h+var_124], xmm0
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovss  [rsp+170h+var_11C], xmm0
    vmulss  xmm1, xmm11, xmm14
    vmulss  xmm2, xmm12, xmm15
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm5, xmm3
    vmovss  [rsp+170h+var_120], xmm1
    vmulss  xmm1, xmm13, xmm14
    vmulss  xmm0, xmm6, xmm15
    vsubss  xmm4, xmm1, xmm0
    vaddss  xmm0, xmm7, xmm4
    vmovss  [rsp+170h+var_118], xmm0
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovss  [rsp+170h+var_110], xmm0
    vmulss  xmm1, xmm6, xmm14
    vmulss  xmm2, xmm13, xmm15
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm5, xmm3
    vmovss  [rsp+170h+var_114], xmm1
    vmulss  xmm1, xmm12, xmm14
    vmulss  xmm0, xmm6, xmm15
    vsubss  xmm4, xmm1, xmm0
    vaddss  xmm0, xmm7, xmm4
    vmovss  [rsp+170h+var_10C], xmm0
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovss  xmm8, dword ptr [rdi+4]
    vmovss  [rsp+170h+var_104], xmm0
    vmulss  xmm1, xmm6, xmm14
    vmulss  xmm2, xmm12, xmm15
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm5, xmm3
    vaddss  xmm5, xmm9, dword ptr [rbx+14h]
    vmovss  xmm9, dword ptr [rdi+8]
    vmovss  [rsp+170h+var_108], xmm1
    vmulss  xmm1, xmm13, xmm14
    vmulss  xmm0, xmm11, xmm15
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm14
    vaddss  xmm0, xmm7, xmm4
    vmulss  xmm2, xmm13, xmm15
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm8, xmm3
    vmovss  [rsp+170h+var_100], xmm0
    vmovss  [rsp+170h+var_FC], xmm1
    vaddss  xmm0, xmm5, xmm9
  }
  v81 = iEdgePairs_2;
  v82 = 12i64;
  __asm
  {
    vmovss  [rsp+170h+var_F8], xmm0
    vmulss  xmm0, xmm11, xmm15
    vmulss  xmm1, xmm12, xmm14
    vsubss  xmm4, xmm1, xmm0
    vaddss  xmm0, xmm7, xmm4
    vmovss  [rsp+170h+var_F4], xmm0
    vmulss  xmm1, xmm12, xmm15
    vmulss  xmm2, xmm11, xmm14
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm8, xmm3
    vmovss  [rbp+70h+var_F0], xmm1
    vaddss  xmm0, xmm5, xmm9
    vmovss  [rbp+70h+var_EC], xmm0
    vmulss  xmm1, xmm13, xmm14
    vmulss  xmm0, xmm6, xmm15
    vsubss  xmm4, xmm1, xmm0
    vaddss  xmm0, xmm7, xmm4
    vmovss  [rbp+70h+var_E8], xmm0
    vmulss  xmm1, xmm6, xmm14
    vmulss  xmm2, xmm13, xmm15
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm8, xmm3
    vmovss  [rbp+70h+var_E4], xmm1
    vaddss  xmm0, xmm5, xmm9
    vmovss  [rbp+70h+var_E0], xmm0
    vmulss  xmm1, xmm12, xmm14
    vmulss  xmm0, xmm6, xmm15
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm14
    vaddss  xmm0, xmm7, xmm4
    vmulss  xmm2, xmm12, xmm15
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rbp+70h+var_DC], xmm0
    vaddss  xmm1, xmm8, xmm3
    vaddss  xmm0, xmm5, xmm9
    vmovss  [rbp+70h+var_D8], xmm1
    vmovss  [rbp+70h+var_D4], xmm0
  }
  do
  {
    CL_AddDebugLine(&start + *(_DWORD *)v81, &start + (int)(*v81)[1], color, depthTest, duration, 0);
    ++v81;
    --v82;
  }
  while ( v82 );
  _R11 = &v145;
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
CG_DebugBoxOriented
==============
*/
void CG_DebugBoxOriented(const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v15; 
  const int (*v65)[2]; 
  __int64 v66; 
  char v73; 
  vec3_t start[8]; 
  char v75; 
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
  _ER13 = 0;
  _R12 = origin;
  _RBX = &start[0].v[2];
  v15 = 0;
  _R15 = bounds;
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r15+0Ch]
      vxorps  xmm3, xmm4, xmm9
      vmovd   xmm1, r13d
    }
    _RBP = _RBX - 2;
    _EAX = v15 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [r15]
      vmovss  xmm4, dword ptr [r15+10h]
      vmovss  dword ptr [rbp+0], xmm0
      vmovd   xmm1, r13d
      vxorps  xmm3, xmm4, xmm9
    }
    _EAX = v15 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [r15+4]
      vmovss  xmm4, dword ptr [r15+14h]
    }
    _EAX = v15 & 4;
    __asm
    {
      vmovss  dword ptr [rbx-4], xmm0
      vmovd   xmm0, eax
      vmovd   xmm1, r13d
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm9
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rbx], xmm0
    }
    if ( _RBX - 2 == (float *)&v73 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm7, dword ptr [rbx-4]
      vmovss  xmm4, dword ptr [rbp+0]
      vmovss  xmm8, dword ptr [rbx]
      vmulss  xmm1, xmm4, dword ptr [rdi]
      vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, dword ptr [rdi+4]
      vmulss  xmm1, xmm8, dword ptr [rdi+18h]
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm2, xmm7, dword ptr [rdi+10h]
      vmulss  xmm1, xmm8, dword ptr [rdi+1Ch]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm2, xmm4, dword ptr [rdi+8]
      vmulss  xmm0, xmm7, dword ptr [rdi+14h]
      vaddss  xmm5, xmm3, xmm1
      vmulss  xmm1, xmm8, dword ptr [rdi+20h]
      vmovss  dword ptr [rbx-4], xmm5
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm0, xmm6, dword ptr [r12]
      vaddss  xmm4, xmm3, xmm1
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  xmm1, dword ptr [rbx-4]
      vaddss  xmm2, xmm1, dword ptr [r12+4]
      vmovss  xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rbx-4], xmm2
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
    _RBX += 3;
    ++v15;
  }
  while ( v15 < 8 );
  v65 = iEdgePairs_3;
  v66 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v65], &start[(*v65)[1]], color, depthTest, duration, 0);
    ++v65;
    --v66;
  }
  while ( v66 );
  _R11 = &v75;
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
CG_DebugCapsule
==============
*/

void __fastcall CG_DebugCapsule(const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
{
  const vec3_t *v29; 
  vec3_t dst; 
  vec3_t cross; 
  vec3_t src; 
  vec3_t up; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm5, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm6, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm7, xmm0, dword ptr [rcx+8]
    vmovaps xmm8, xmm2
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0D8h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
  }
  v29 = end;
  __asm
  {
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0D8h+src+8], xmm0
    vmovss  dword ptr [rsp+0D8h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  Vec3Cross(&src, &dst, &cross);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, dword ptr [rsp+0D8h+src+4]
    vmovss  xmm0, dword ptr [rsp+0D8h+src]
    vxorps  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+0D8h+up], xmm1
    vmovss  xmm1, dword ptr [rsp+0D8h+src+8]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+0D8h+up+8], xmm2
    vmovaps xmm2, xmm8; radius
    vmovss  dword ptr [rsp+0D8h+up+4], xmm0
  }
  CG_DebugCylinder(start, v29, *(float *)&_XMM2, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSemiCircle(start, *(float *)&_XMM1, &dst, &up, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSemiCircle(start, *(float *)&_XMM1, &cross, &up, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSemiCircle(v29, *(float *)&_XMM1, &dst, &src, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSemiCircle(v29, *(float *)&_XMM1, &cross, &src, color, depthTest, duration);
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_DebugCircle
==============
*/

void __fastcall CG_DebugCircle(const vec3_t *center, double radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v45; 
  const vec3_t *v62; 
  char v63; 
  __int64 v64; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t end[16]; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm6, dword ptr [r8+4]
    vmovss  xmm5, dword ptr [r8]
    vmovss  xmm7, dword ptr [r8+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm4, xmm3, xmm3
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovaps xmm8, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+1A8h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+1A8h+src+8], xmm0
    vmovss  dword ptr [rsp+1A8h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+1A8h+src+8]
    vmovss  xmm6, dword ptr [rsp+1A8h+src+4]
    vmovss  xmm5, dword ptr [rsp+1A8h+dst+8]
    vmovss  xmm4, dword ptr [rsp+1A8h+dst+4]
    vmovss  xmm10, cs:__real@3ec90fdb
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm0, xmm2, xmm4
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm1, xmm2, dword ptr [rsp+1A8h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+1A8h+src]
    vmulss  xmm2, xmm4, dword ptr [rsp+1A8h+src]
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+1A8h+dst]
  }
  _RBX = &end[0].v[2];
  __asm { vsubss  xmm6, xmm2, xmm1 }
  v45 = 0;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm10; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmulss  xmm5, xmm8, [rsp+1A8h+s]
      vmulss  xmm4, xmm8, [rsp+1A8h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+1A8h+dst]
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+1A8h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm9, xmm5
      vaddss  xmm3, xmm1, dword ptr [rsi+4]
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+1A8h+dst+8]
      vmulss  xmm0, xmm6, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi+8]
      vaddss  xmm0, xmm3, xmm2
    }
    ++v45;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+1A8h+s], xmm5
      vmovss  [rsp+1A8h+c], xmm4
    }
  }
  while ( v45 < 0x10 );
  v62 = end;
  v63 = 1;
  v64 = 16i64;
  do
  {
    CL_AddDebugLine(v62++, &end[v63++ & 0xF], color, depthTest, duration, 0);
    --v64;
  }
  while ( v64 );
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DebugCone
==============
*/

void __fastcall CG_DebugCone(const vec3_t *origin, const vec3_t *direction, double radius, double length, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v51; 
  const vec3_t *v68; 
  int v69; 
  __int64 v70; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t v81; 
  vec3_t end[16]; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm6, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm7, dword ptr [rdx+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm3
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm2, xmm3, xmm3
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+1B0h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+1B0h+src+8], xmm0
    vmovss  dword ptr [rsp+1B0h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm7, dword ptr [rsp+1B0h+src]
    vmovss  xmm6, dword ptr [rsp+1B0h+src+4]
    vmovss  xmm5, dword ptr [rsp+1B0h+src+8]
    vmulss  xmm2, xmm7, dword ptr [rsp+1B0h+dst+4]
    vmulss  xmm0, xmm7, xmm8
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsp+1B0h+var_158], xmm1
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+1B0h+var_158+4], xmm1
    vmulss  xmm0, xmm5, xmm8
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmulss  xmm0, xmm5, dword ptr [rsp+1B0h+dst+4]
    vmovss  dword ptr [rsp+1B0h+var_158+8], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+1B0h+dst+8]
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsp+1B0h+dst]
    vmulss  xmm0, xmm7, dword ptr [rsp+1B0h+dst+8]
    vmovss  xmm7, cs:__real@3ec90fdb
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+1B0h+dst]
  }
  _RBX = &end[0].v[2];
  __asm { vsubss  xmm6, xmm2, xmm1 }
  v51 = 0;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm7; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmulss  xmm5, xmm9, [rsp+1B0h+s]
      vmulss  xmm4, xmm9, [rsp+1B0h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+1B0h+dst]
      vmulss  xmm0, xmm8, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+1B0h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm10, xmm5
      vaddss  xmm3, xmm1, dword ptr [rsi+4]
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+1B0h+dst+8]
      vmulss  xmm0, xmm6, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi+8]
      vaddss  xmm0, xmm3, xmm2
    }
    ++v51;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+1B0h+s], xmm5
      vmovss  [rsp+1B0h+c], xmm4
    }
  }
  while ( v51 < 0x10 );
  v68 = end;
  v69 = 1;
  v70 = 16i64;
  do
  {
    CL_AddDebugLine(v68, &end[v69 & 0xF], color, depthTest, duration, 0);
    CL_AddDebugLine(v68, &v81, color, depthTest, duration, 0);
    ++v69;
    ++v68;
    --v70;
  }
  while ( v70 );
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DebugConeFrustum
==============
*/

void __fastcall CG_DebugConeFrustum(const vec3_t *origin, const vec3_t *direction, double radiusNear, double radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v56; 
  unsigned int v74; 
  __int64 v92; 
  char v93; 
  __int64 v94; 
  __int64 v95; 
  const vec3_t *v96; 
  float s[2]; 
  __int64 c; 
  vec3_t dst; 
  vec3_t src; 
  vec3_t end[16]; 
  vec3_t start[16]; 
  char v113; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovss  xmm6, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm7, dword ptr [rdx+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm12, xmm2
    vmovaps xmm8, xmm3
    vaddss  xmm3, xmm4, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm2, xmm3, xmm3
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+2A0h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+2A0h+src+8], xmm0
    vmovss  dword ptr [rsp+2A0h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+2A0h+src+4]
    vmovss  xmm7, dword ptr [rsp+2A0h+src+8]
    vmulss  xmm1, xmm6, dword ptr [rsp+2A0h+dst+8]
    vmulss  xmm0, xmm7, dword ptr [rsp+2A0h+dst+4]
    vmovss  xmm5, dword ptr [rsp+2A0h+src]
    vmovss  xmm2, [rbp+1A0h+length]
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsp+2A0h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+2A0h+dst+8]
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+2A0h+dst]
    vmulss  xmm1, xmm5, dword ptr [rsp+2A0h+dst+4]
    vsubss  xmm11, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vaddss  xmm13, xmm0, dword ptr [rsi]
    vmulss  xmm1, xmm6, xmm2
    vaddss  xmm14, xmm1, dword ptr [rsi+4]
    vmovss  xmm6, cs:__real@3ec90fdb
    vmulss  xmm0, xmm7, xmm2
    vaddss  xmm7, xmm0, dword ptr [rsi+8]
  }
  v56 = 0;
  _RBX = &end[0].v[2];
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm6; radians
    }
    FastSinCos(*(const float *)&_XMM0, s, (float *)&c);
    __asm
    {
      vmulss  xmm5, xmm12, [rsp+2A0h+s]
      vmulss  xmm4, xmm12, dword ptr [rsp+2A0h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst]
      vmulss  xmm0, xmm9, xmm5
      vaddss  xmm3, xmm0, xmm13
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm10, xmm5
      vaddss  xmm3, xmm1, xmm14
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst+8]
      vmulss  xmm0, xmm11, xmm5
      vaddss  xmm3, xmm0, xmm7
      vaddss  xmm0, xmm3, xmm2
    }
    ++v56;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+2A0h+s], xmm5
      vmovss  dword ptr [rsp+2A0h+c], xmm4
    }
  }
  while ( v56 < 0x10 );
  v74 = 0;
  _RBX = &start[0].v[2];
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm6; radians
    }
    FastSinCos(*(const float *)&_XMM0, (float *)&c, s);
    __asm
    {
      vmulss  xmm5, xmm8, dword ptr [rsp+2A0h+c]
      vmulss  xmm4, xmm8, [rsp+2A0h+s]
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst]
      vmulss  xmm0, xmm9, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm10, xmm5
      vaddss  xmm3, xmm1, dword ptr [rsi+4]
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+2A0h+dst+8]
      vmulss  xmm0, xmm11, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi+8]
      vaddss  xmm0, xmm3, xmm2
    }
    ++v74;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  dword ptr [rsp+2A0h+c], xmm5
      vmovss  [rsp+2A0h+s], xmm4
    }
  }
  while ( v74 < 0x10 );
  v92 = 0i64;
  v93 = 1;
  c = 16i64;
  do
  {
    v94 = v93 & 0xF;
    v95 = v94;
    CL_AddDebugLine(&end[v92], &end[v94], color, depthTest, duration, 0);
    v96 = &start[v95];
    CL_AddDebugLine(&start[v92], v96, color, depthTest, duration, 0);
    CL_AddDebugLine(&end[v92], v96, color, depthTest, duration, 0);
    ++v93;
    ++v92;
    --c;
  }
  while ( c );
  _R11 = &v113;
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
  }
}

/*
==============
CG_DebugCylinder
==============
*/

void __fastcall CG_DebugCylinder(const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
{
  vec3_t dst; 
  vec3_t cross; 
  vec3_t src; 
  vec3_t enda; 
  vec3_t v102; 
  vec3_t v103; 
  vec3_t v104; 
  vec3_t starta; 
  vec3_t v106; 
  vec3_t v107; 
  vec3_t v108; 
  char v109; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm7, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm6, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm5, xmm0, dword ptr [rcx+8]
    vmovaps xmm8, xmm2
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsp+190h+src], xmm0
    vmulss  xmm0, xmm5, xmm2
  }
  _R14 = end;
  _RBX = start;
  __asm
  {
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+190h+src+8], xmm0
    vmovss  dword ptr [rsp+190h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  Vec3Cross(&src, &dst, &cross);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugCircle(_RBX, *(float *)&_XMM1, &src, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugCircle(_R14, *(float *)&_XMM1, &src, color, depthTest, duration);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rsp+190h+dst]
    vxorps  xmm4, xmm8, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm9, dword ptr [rbx+8]
    vmulss  xmm15, xmm8, dword ptr [rsp+190h+dst+8]
    vmulss  xmm11, xmm8, dword ptr [rsp+190h+cross]
    vmulss  xmm10, xmm8, dword ptr [rsp+190h+cross+4]
    vmulss  xmm14, xmm4, dword ptr [rsp+190h+dst]
    vmulss  xmm12, xmm4, dword ptr [rsp+190h+dst+8]
    vmulss  xmm13, xmm4, dword ptr [rsp+190h+dst+4]
    vmovss  [rsp+190h+var_160], xmm0
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbp+90h+start], xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+190h+dst+4]
    vmulss  xmm8, xmm8, dword ptr [rsp+190h+cross+8]
    vmovss  [rsp+190h+var_15C], xmm0
    vaddss  xmm0, xmm0, xmm5
    vmovss  dword ptr [rbp+90h+start+4], xmm0
    vaddss  xmm0, xmm15, xmm9
    vmovss  dword ptr [rbp+90h+start+8], xmm0
    vaddss  xmm0, xmm14, xmm6
    vmovss  dword ptr [rbp+90h+var_F4], xmm0
    vaddss  xmm0, xmm12, xmm9
    vmovss  dword ptr [rbp+90h+var_F4+8], xmm0
    vaddss  xmm0, xmm11, xmm6
    vmovss  dword ptr [rbp+90h+var_E8], xmm0
    vaddss  xmm0, xmm10, xmm5
    vaddss  xmm1, xmm13, xmm5
    vmovss  dword ptr [rbp+90h+var_E8+4], xmm0
    vaddss  xmm0, xmm8, xmm9
    vmovss  dword ptr [rbp+90h+var_F4+4], xmm1
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14+8]
    vmulss  xmm7, xmm4, dword ptr [rsp+190h+cross]
    vmovss  dword ptr [rbp+90h+var_E8+8], xmm0
    vaddss  xmm0, xmm7, xmm6
    vmulss  xmm6, xmm4, dword ptr [rsp+190h+cross+4]
    vmovss  dword ptr [rbp+90h+var_DC], xmm0
    vaddss  xmm1, xmm6, xmm5
    vmulss  xmm5, xmm4, dword ptr [rsp+190h+cross+8]
    vmovss  xmm4, dword ptr [r14]
    vmovss  dword ptr [rbp+90h+var_DC+4], xmm1
    vaddss  xmm1, xmm4, [rsp+190h+var_160]
    vmovss  dword ptr [rsp+190h+end], xmm1
    vaddss  xmm0, xmm5, xmm9
    vmovss  dword ptr [rbp+90h+var_DC+8], xmm0
    vaddss  xmm0, xmm3, [rsp+190h+var_15C]
    vmovss  dword ptr [rsp+190h+end+4], xmm0
    vaddss  xmm0, xmm14, xmm4
    vmovss  dword ptr [rsp+190h+var_124], xmm0
    vaddss  xmm1, xmm15, xmm2
    vmovss  dword ptr [rsp+190h+end+8], xmm1
    vaddss  xmm0, xmm12, xmm2
    vmovss  dword ptr [rsp+190h+var_124+8], xmm0
    vaddss  xmm1, xmm13, xmm3
    vmovss  dword ptr [rsp+190h+var_124+4], xmm1
    vaddss  xmm0, xmm10, xmm3
    vaddss  xmm1, xmm11, xmm4
    vmovss  dword ptr [rsp+190h+var_118+4], xmm0
    vmovss  dword ptr [rsp+190h+var_118], xmm1
    vaddss  xmm0, xmm7, xmm4
    vaddss  xmm1, xmm8, xmm2
    vmovss  dword ptr [rbp+90h+var_10C], xmm0
    vmovss  dword ptr [rbp+90h+var_118+8], xmm1
    vaddss  xmm0, xmm5, xmm2
    vaddss  xmm1, xmm6, xmm3
    vmovss  dword ptr [rbp+90h+var_10C+8], xmm0
    vmovss  dword ptr [rbp+90h+var_10C+4], xmm1
  }
  CL_AddDebugLine(&starta, &enda, color, depthTest, duration, 0);
  CL_AddDebugLine(&v106, &v102, color, depthTest, duration, 0);
  CL_AddDebugLine(&v107, &v103, color, depthTest, duration, 0);
  CL_AddDebugLine(&v108, &v104, color, depthTest, duration, 0);
  _R11 = &v109;
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
CG_DebugEllipse
==============
*/

void __fastcall CG_DebugEllipse(const vec3_t *center, double radiusA, double radiusB, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v17; 
  const vec3_t *v44; 
  char v45; 
  __int64 v46; 
  float s; 
  float c[3]; 
  vec3_t end[16]; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = &end[0].v[2];
  __asm { vmovss  xmm10, cs:__real@3ec90fdb }
  v17 = 0;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmulss  xmm9, xmm1, xmm2
  }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm10; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, c);
    __asm
    {
      vmulss  xmm1, xmm8, [rsp+178h+s]
      vmulss  xmm0, xmm7, [rsp+178h+c]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vdivss  xmm3, xmm9, xmm0
      vmulss  xmm4, xmm3, [rsp+178h+s]
      vmulss  xmm6, xmm3, [rsp+178h+c]
      vmulss  xmm0, xmm4, dword ptr [r14]
      vaddss  xmm2, xmm0, dword ptr [rbp+0]
      vmulss  xmm1, xmm6, dword ptr [rsi]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm4, dword ptr [r14+4]
      vaddss  xmm2, xmm1, dword ptr [rbp+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm0, xmm6, dword ptr [rsi+4]
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm4, dword ptr [r14+8]
      vaddss  xmm2, xmm0, dword ptr [rbp+8]
      vmovss  dword ptr [rbx-4], xmm1
      vmulss  xmm1, xmm6, dword ptr [rsi+8]
      vaddss  xmm2, xmm2, xmm1
    }
    ++v17;
    __asm { vmovss  dword ptr [rbx], xmm2 }
    _RBX += 3;
  }
  while ( v17 < 0x10 );
  v44 = end;
  v45 = 1;
  v46 = 16i64;
  do
  {
    CL_AddDebugLine(v44++, &end[v45++ & 0xF], color, depthTest, duration, 0);
    --v46;
  }
  while ( v46 );
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DebugEllipsoid
==============
*/

void __fastcall CG_DebugEllipsoid(const vec3_t *center, const vec3_t *right, const vec3_t *up, double radiusA, const float radiusB, const float radiusC, const vec4_t *color, int depthTest, int duration)
{
  vec3_t cross; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps xmm7, xmm3
  }
  Vec3Cross(right, up, &cross);
  __asm
  {
    vmovss  xmm2, [rsp+98h+radiusB]; radiusB
    vmovaps xmm1, xmm7; radiusA
  }
  CG_DebugEllipse(center, *(float *)&_XMM1, *(float *)&_XMM2, right, up, color, depthTest, duration);
  __asm
  {
    vmovss  xmm2, [rsp+98h+radiusB]; radiusB
    vmovss  xmm1, [rsp+98h+radiusC]; radiusA
  }
  CG_DebugEllipse(center, *(float *)&_XMM1, *(float *)&_XMM2, &cross, up, color, depthTest, duration);
  __asm
  {
    vmovss  xmm2, [rsp+98h+radiusC]; radiusB
    vmovaps xmm1, xmm7; radiusA
  }
  CG_DebugEllipse(center, *(float *)&_XMM1, *(float *)&_XMM2, right, &cross, color, depthTest, duration);
  __asm { vmovaps xmm7, [rsp+98h+var_38] }
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

void __fastcall CG_DebugSemiCircle(const vec3_t *center, double radius, const vec3_t *right, const vec3_t *up, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v13; 
  const vec3_t *v31; 
  char v32; 
  __int64 v33; 
  float s; 
  float c[3]; 
  vec3_t end[16]; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = &end[0].v[2];
  __asm { vmovss  xmm7, cs:__real@3ec90fdb }
  v13 = 0;
  __asm { vmovaps xmm6, xmm1 }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm7; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, c);
    __asm
    {
      vmulss  xmm3, xmm6, [rsp+148h+s]
      vmulss  xmm4, xmm6, [rsp+148h+c]
      vmulss  xmm0, xmm3, dword ptr [rsi]
      vaddss  xmm2, xmm0, dword ptr [r14]
      vmulss  xmm1, xmm4, dword ptr [rbp+0]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rsi+4]
      vaddss  xmm2, xmm1, dword ptr [r14+4]
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm0, xmm4, dword ptr [rbp+4]
      vaddss  xmm2, xmm2, xmm0
      vmulss  xmm0, xmm4, dword ptr [rbp+8]
      vmovss  [rsp+148h+s], xmm3
      vaddss  xmm3, xmm1, dword ptr [r14+8]
      vaddss  xmm1, xmm3, xmm0
    }
    ++v13;
    __asm
    {
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rbx-4], xmm2
    }
    _RBX += 3;
    __asm { vmovss  [rsp+148h+c], xmm4 }
  }
  while ( v13 <= 8 );
  v31 = end;
  v32 = 1;
  v33 = 8i64;
  do
  {
    CL_AddDebugLine(v31++, &end[v32++ & 0xF], color, depthTest, duration, 0);
    --v33;
  }
  while ( v33 );
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_DebugSphere
==============
*/

void __fastcall CG_DebugSphere(const vec3_t *center, double radius, const vec4_t *color, int depthTest, int duration)
{
  __m256i v15; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovups ymm0, cs:__ymm@0000000000000000000000003f8000000000000000000000000000003f800000
    vmovss  xmm2, cs:__real@3f800000
    vmovss  [rsp+88h+var_38], xmm2
    vmovaps xmm6, xmm1
    vmovups [rsp+88h+var_58], ymm0
  }
  CG_DebugCircle(center, *(float *)&radius, (const vec3_t *)&v15, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm6; radius }
  CG_DebugCircle(center, *(float *)&_XMM1, (const vec3_t *)((char *)&v15.m256i_u64[1] + 4), color, depthTest, duration);
  __asm { vmovaps xmm1, xmm6; radius }
  CG_DebugCircle(center, *(float *)&_XMM1, (const vec3_t *)&v15.m256i_u64[3], color, depthTest, duration);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
CG_DebugSphericalSector
==============
*/

void __fastcall CG_DebugSphericalSector(const vec3_t *origin, const vec3_t *direction, double radius, double length, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v56; 
  const vec3_t *v94; 
  char v95; 
  __int64 v96; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t v114; 
  vec3_t end[16]; 
  char v116; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm6, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm7, dword ptr [rdx+8]
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm14, cs:__real@80000000
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm13, xmm2
    vmovaps xmm11, xmm3
    vaddss  xmm3, xmm4, xmm1
    vsqrtss xmm2, xmm3, xmm3
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+200h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+200h+src+8], xmm0
    vmovss  dword ptr [rsp+200h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm7, dword ptr [rsp+200h+src]
    vmovss  xmm6, dword ptr [rsp+200h+src+4]
    vmovss  xmm5, dword ptr [rsp+200h+src+8]
    vmulss  xmm2, xmm7, dword ptr [rsp+200h+dst+4]
    vmulss  xmm0, xmm7, xmm11
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rsp+200h+var_1A0], xmm1
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+200h+var_1A0+4], xmm1
    vmulss  xmm0, xmm5, xmm11
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm5, dword ptr [rsp+200h+dst+4]
    vmovss  dword ptr [rsp+200h+var_1A0+8], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+200h+dst+8]
    vsubss  xmm15, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsp+200h+dst]
    vmulss  xmm0, xmm7, dword ptr [rsp+200h+dst+8]
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+200h+dst]
    vsubss  xmm7, xmm2, xmm1
  }
  _RDI = &end[0].v[1];
  __asm
  {
    vmovss  [rsp+200h+var_1C4], xmm7
    vmovss  [rsp+200h+var_1C8], xmm9
  }
  v56 = 0;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, cs:__real@3ec90fdb; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmulss  xmm5, xmm13, [rsp+200h+s]
      vmulss  xmm4, xmm13, [rsp+200h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+200h+dst]
      vmulss  xmm0, xmm15, xmm5
      vaddss  xmm3, xmm0, dword ptr [rbx]
      vaddss  xmm0, xmm3, xmm2
      vsubss  xmm8, xmm0, dword ptr [rsp+200h+var_1A0]
      vmulss  xmm2, xmm4, dword ptr [rsp+200h+dst+4]
      vmulss  xmm0, xmm9, xmm5
      vaddss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm9, [rsp+200h+var_1C8]
      vaddss  xmm0, xmm3, xmm2
      vsubss  xmm6, xmm0, dword ptr [rsp+200h+var_1A0+4]
      vmulss  xmm2, xmm4, dword ptr [rsp+200h+dst+8]
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm3, xmm0, dword ptr [rbx+8]
      vmovss  xmm7, [rsp+200h+var_1C4]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm8, xmm8
      vmovss  [rsp+200h+s], xmm5
      vsubss  xmm5, xmm0, dword ptr [rsp+200h+var_1A0+8]
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm14
      vblendvps xmm0, xmm3, xmm12, xmm0
      vmovss  [rsp+200h+c], xmm4
      vdivss  xmm4, xmm12, xmm0
      vmulss  xmm0, xmm4, xmm8
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, dword ptr [rsp+200h+var_1A0]
      vmovss  dword ptr [rdi-4], xmm2
      vmulss  xmm0, xmm6, xmm4
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, dword ptr [rsp+200h+var_1A0+4]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm2, xmm1, dword ptr [rsp+200h+var_1A0+8]
    }
    ++v56;
    __asm { vmovss  dword ptr [rdi+4], xmm2 }
    _RDI += 3;
  }
  while ( v56 < 0x10 );
  v94 = end;
  v95 = 1;
  v96 = 16i64;
  do
  {
    CL_AddDebugLine(v94, &end[v95 & 0xF], color, depthTest, duration, 0);
    CL_AddDebugLine(v94, &v114, color, depthTest, duration, 0);
    ++v95;
    ++v94;
    --v96;
  }
  while ( v96 );
  _R11 = &v116;
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
CG_DebugSphericalSectorFrustum
==============
*/

void __fastcall CG_DebugSphericalSectorFrustum(const vec3_t *origin, const vec3_t *direction, double radiusNear, double radiusFar, float length, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v56; 
  unsigned int v74; 
  unsigned int v119; 
  char v162; 
  __int64 v163; 
  unsigned int v164; 
  __int64 v165; 
  bool v166; 
  float s[2]; 
  float c[2]; 
  float v180[2]; 
  vec3_t *v181; 
  vec3_t dst; 
  vec3_t src; 
  vec3_t start[16]; 
  vec3_t v185[16]; 
  vec3_t end[16]; 
  char v187; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm6, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm7, dword ptr [rdx+8]
    vmovss  xmm15, cs:__real@3f800000
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm8, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  [rsp+380h+var_340], xmm3
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm15, xmm0
    vdivss  xmm2, xmm15, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+380h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
  }
  v181 = (vec3_t *)origin;
  __asm
  {
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+380h+src+8], xmm0
    vmovss  dword ptr [rsp+380h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+380h+src+4]
    vmovss  xmm7, dword ptr [rsp+380h+src+8]
    vmulss  xmm1, xmm6, dword ptr [rsp+380h+dst+8]
    vmulss  xmm0, xmm7, dword ptr [rsp+380h+dst+4]
    vmovss  xmm5, dword ptr [rsp+380h+src]
    vmovss  xmm14, [rbp+280h+length]
    vmovss  xmm13, cs:__real@3ec90fdb
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsp+380h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+380h+dst+8]
    vsubss  xmm11, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+380h+dst]
    vmulss  xmm1, xmm5, dword ptr [rsp+380h+dst+4]
    vsubss  xmm12, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm14
    vaddss  xmm9, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm7, xmm14
    vaddss  xmm7, xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm6, xmm14
    vaddss  xmm6, xmm1, dword ptr [rsi+4]
  }
  v56 = 0;
  _RBX = &end[0].v[2];
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm13; radians
    }
    FastSinCos(*(const float *)&_XMM0, s, c);
    __asm
    {
      vmulss  xmm5, xmm8, [rsp+380h+s]
      vmulss  xmm4, xmm8, [rsp+380h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+380h+dst]
      vmulss  xmm0, xmm10, xmm5
      vaddss  xmm3, xmm0, xmm9
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+380h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm11, xmm5
      vaddss  xmm3, xmm1, xmm6
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+380h+dst+8]
      vmulss  xmm0, xmm12, xmm5
      vaddss  xmm3, xmm0, xmm7
      vaddss  xmm0, xmm3, xmm2
    }
    ++v56;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+380h+s], xmm5
      vmovss  [rsp+380h+c], xmm4
    }
  }
  while ( v56 < 0x10 );
  v74 = 0;
  _RBX = 0i64;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm13; radians
    }
    FastSinCos(*(const float *)&_XMM0, c, s);
    __asm
    {
      vmovss  xmm1, [rsp+380h+var_340]
      vmulss  xmm2, xmm1, [rsp+380h+c]
      vmulss  xmm7, xmm1, [rsp+380h+s]
      vmovss  xmm8, dword ptr [rbp+rbx+280h+end]
      vmovss  xmm9, dword ptr [rbp+rbx+280h+end+4]
      vmulss  xmm0, xmm11, xmm2
      vaddss  xmm5, xmm0, dword ptr [rsi+4]
      vmulss  xmm0, xmm10, xmm2
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm12, xmm2
      vaddss  xmm6, xmm1, dword ptr [rsi+8]
      vmulss  xmm1, xmm7, dword ptr [rsp+380h+dst+4]
      vmovss  [rsp+380h+c], xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+380h+dst]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm7, dword ptr [rsp+380h+dst+8]
      vaddss  xmm0, xmm1, xmm6
      vsubss  xmm5, xmm2, xmm9
      vsubss  xmm6, xmm4, xmm8
      vmulss  xmm1, xmm5, xmm5
      vmovss  [rsp+380h+s], xmm7
      vmovss  xmm7, dword ptr [rbp+rbx+280h+end+8]
      vsubss  xmm4, xmm0, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
      vdivss  xmm2, xmm15, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm3, xmm0, xmm14
      vmulss  xmm1, xmm4, xmm2
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm2, xmm0, xmm14
      vaddss  xmm0, xmm9, xmm3
      vmulss  xmm4, xmm1, xmm14
      vmovss  dword ptr [rsp+rbx+380h+start+4], xmm0
      vaddss  xmm0, xmm7, xmm4
      vaddss  xmm1, xmm2, xmm8
    }
    ++v74;
    __asm
    {
      vmovss  dword ptr [rsp+rbx+380h+start+8], xmm0
      vmovss  dword ptr [rsp+rbx+380h+start], xmm1
    }
    _RBX += 12i64;
  }
  while ( v74 < 0x10 );
  __asm
  {
    vmovss  xmm3, [rsp+380h+var_340]
    vmulss  xmm15, xmm3, cs:__real@3f000000
  }
  v119 = 0;
  _RBX = 0i64;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm13; radians
    }
    FastSinCos(*(const float *)&_XMM0, v180, c);
    __asm
    {
      vmulss  xmm2, xmm15, [rsp+380h+var_340]
      vmulss  xmm7, xmm15, [rsp+380h+c]
      vmovss  xmm8, dword ptr [rbp+rbx+280h+end]
      vmovss  xmm9, dword ptr [rbp+rbx+280h+end+4]
      vmulss  xmm0, xmm11, xmm2
      vaddss  xmm5, xmm0, dword ptr [rsi+4]
      vmulss  xmm0, xmm10, xmm2
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm12, xmm2
      vaddss  xmm6, xmm1, dword ptr [rsi+8]
      vmulss  xmm1, xmm7, dword ptr [rsp+380h+dst+4]
      vmovss  [rsp+380h+var_340], xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+380h+dst]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm7, dword ptr [rsp+380h+dst+8]
      vaddss  xmm0, xmm1, xmm6
      vsubss  xmm5, xmm2, xmm9
      vsubss  xmm6, xmm4, xmm8
      vmulss  xmm1, xmm5, xmm5
      vmovss  [rsp+380h+c], xmm7
      vmovss  xmm7, dword ptr [rbp+rbx+280h+end+8]
      vsubss  xmm4, xmm0, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm3, xmm0, xmm14
      vmulss  xmm1, xmm2, xmm4
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm2, xmm0, xmm14
      vaddss  xmm0, xmm9, xmm3
      vmulss  xmm4, xmm1, xmm14
      vmovss  dword ptr [rbp+rbx+280h+var_250+4], xmm0
      vaddss  xmm0, xmm7, xmm4
      vaddss  xmm1, xmm2, xmm8
    }
    ++v119;
    __asm
    {
      vmovss  dword ptr [rbp+rbx+280h+var_250+8], xmm0
      vmovss  dword ptr [rbp+rbx+280h+var_250], xmm1
    }
    _RBX += 12i64;
  }
  while ( v119 < 0x10 );
  v162 = 1;
  v163 = 0i64;
  *(_QWORD *)v180 = 1i64;
  *(_QWORD *)c = 16i64;
  do
  {
    v164 = v162 & 0xF;
    v165 = v164;
    CL_AddDebugLine(&end[v163], &end[v164], color, depthTest, duration, 0);
    CL_AddDebugLine(&start[v163], &start[v165], color, depthTest, duration, 0);
    CL_AddDebugLine(&end[v163], &start[v163], color, depthTest, duration, 0);
    CL_AddDebugLine(&start[v163], &v185[v163], color, depthTest, duration, 0);
    CL_AddDebugLine(&v185[v163++], v181, color, depthTest, duration, 0);
    v162 = LOBYTE(v180[0]) + 1;
    v166 = (*(_QWORD *)c)-- == 1i64;
    ++*(_QWORD *)v180;
  }
  while ( !v166 );
  _R11 = &v187;
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
  float v7; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+fontsize]
    vmovss  [rsp+48h+var_28], xmm0
  }
  CL_AddDebugStarWithText(point, starColor, textColor, string, v7, 0, duration, 0);
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

void __fastcall CG_Draw2DLine(const ScreenPlacement *scrPlace, double p1x, double p1y, double p2x, float p2y, float lineWidth, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  _BYTE v58[32]; 
  vec2_t verts; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vucomiss xmm1, xmm3
    vmovss  xmm7, [rsp+0B8h+p2y]
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
  }
  if ( (unsigned __int64)v58 != _security_cookie )
    goto LABEL_3;
  __asm { vucomiss xmm2, xmm7 }
  if ( (unsigned __int64)v58 != _security_cookie )
  {
LABEL_3:
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm9
      vmovaps [rsp+0B8h+var_68], xmm10
    }
    *(double *)&_XMM0 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, *(float *)&p1x, horzAlign);
    __asm
    {
      vmovaps xmm1, xmm8; x
      vmovaps xmm10, xmm0
    }
    *(double *)&_XMM0 = ScrPlace_ApplyXWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, horzAlign);
    __asm
    {
      vmovaps xmm1, xmm6; y
      vmovaps xmm8, xmm0
    }
    *(double *)&_XMM0 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, vertAlign);
    __asm
    {
      vmovaps xmm1, xmm7; y
      vmovaps xmm9, xmm0
    }
    *(double *)&_XMM0 = ScrPlace_ApplyYWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, vertAlign);
    __asm
    {
      vsubss  xmm5, xmm0, xmm9
      vmovaps xmm7, xmm0
      vmovss  xmm0, [rsp+0B8h+lineWidth]
      vmulss  xmm2, xmm5, xmm5
      vsubss  xmm6, xmm8, xmm10
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vmovss  xmm2, cs:__real@3f800000
      vcmpless xmm1, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm1
      vmulss  xmm3, xmm0, cs:__real@3f000000
      vdivss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm4, xmm5
      vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm5, xmm2, xmm3
      vmulss  xmm0, xmm4, xmm6
      vmulss  xmm2, xmm0, xmm3
      vsubss  xmm0, xmm9, xmm2
      vmovss  dword ptr [rsp+0B8h+verts+4], xmm0
      vsubss  xmm1, xmm10, xmm5
      vmovss  dword ptr [rsp+0B8h+verts], xmm1
      vsubss  xmm0, xmm7, xmm2
      vsubss  xmm1, xmm8, xmm5
      vmovss  [rsp+0B8h+var_8C], xmm0
      vmovss  [rsp+0B8h+var_90], xmm1
      vaddss  xmm0, xmm7, xmm2
      vaddss  xmm1, xmm8, xmm5
      vmovss  [rsp+0B8h+var_84], xmm0
      vmovss  [rsp+0B8h+var_88], xmm1
      vaddss  xmm0, xmm9, xmm2
      vaddss  xmm1, xmm10, xmm5
      vmovss  [rsp+0B8h+var_7C], xmm0
      vmovss  [rsp+0B8h+var_80], xmm1
    }
    R_AddCmdDrawQuadPic(&verts, color, material);
    __asm
    {
      vmovaps xmm10, [rsp+0B8h+var_68]
      vmovaps xmm9, [rsp+0B8h+var_58]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_28]
    vmovaps xmm7, [rsp+0B8h+var_38]
    vmovaps xmm8, [rsp+0B8h+var_48]
  }
}

/*
==============
CG_Draw2DRect
==============
*/

void __fastcall CG_Draw2DRect(const ScreenPlacement *scrPlace, double x, double y, double width, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  vec2_t verts; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&x, horzAlign);
  __asm
  {
    vmovaps xmm1, xmm7; y
    vmovss  dword ptr [rsp+0A8h+verts], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vaddss  xmm6, xmm6, xmm8
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+0A8h+verts+4], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vmovaps xmm1, xmm7; y
    vmovss  [rsp+0A8h+var_80], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0A8h+var_7C], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vaddss  xmm6, xmm7, [rsp+0A8h+height]
    vmovaps xmm1, xmm6; y
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vmovaps xmm1, xmm8; x
    vmovss  [rsp+0A8h+var_74], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vmovaps xmm1, xmm6; y
    vmovss  [rsp+0A8h+var_70], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm { vmovss  [rsp+0A8h+var_6C], xmm0 }
  R_AddCmdDrawQuadPic(&verts, color, material);
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
}

/*
==============
CG_Draw2DTri
==============
*/
void CG_Draw2DTri(const ScreenPlacement *scrPlace, const vec2_t *p0, const vec2_t *p1, const vec2_t *p2, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  vec2_t verts; 

  __asm { vmovss  xmm1, dword ptr [rdx]; x }
  _RBP = p1;
  _R12 = p2;
  _RBX = p0;
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]; y
    vmovss  dword ptr [rsp+88h+verts], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]; x
    vmovss  dword ptr [rsp+88h+verts+4], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+4]; y
    vmovss  [rsp+88h+var_60], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [r12]; x
    vmovss  [rsp+88h+var_5C], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, horzAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [r12+4]; y
    vmovss  [rsp+88h+var_58], xmm0
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, vertAlign);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+88h+verts+4]
    vmovss  [rsp+88h+var_54], xmm0
    vmovss  xmm0, dword ptr [rsp+88h+verts]
    vmovss  [rsp+88h+var_50], xmm0
    vmovss  [rsp+88h+var_4C], xmm1
  }
  R_AddCmdDrawQuadPic(&verts, color, material);
}

/*
==============
CG_DrawBigDevString
==============
*/
int CG_DrawBigDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  float v9; 
  vec4_t color; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; xScale
    vmovss  xmm0, [rsp+78h+alpha]
    vmovss  [rsp+78h+var_58], xmm3
    vmovss  dword ptr [rsp+78h+var_28], xmm3
    vmovss  dword ptr [rsp+78h+var_28+4], xmm3
    vmovss  dword ptr [rsp+78h+var_28+8], xmm3
    vmovss  dword ptr [rsp+78h+var_28+0Ch], xmm0
  }
  return CG_DrawDevString(scrPlace, x, y, *(float *)&_XMM3, v9, s, &color, align, cls.bigDevFont);
}

/*
==============
CG_DrawBigDevStringColor
==============
*/
int CG_DrawBigDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  float v8; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; xScale
    vmovss  [rsp+58h+var_38], xmm3
  }
  return CG_DrawDevString(scrPlace, x, y, *(float *)&_XMM3, v8, s, color, align, cls.bigDevFont);
}

/*
==============
CG_DrawDevString
==============
*/

int __fastcall CG_DrawDevString(const ScreenPlacement *scrPlace, double x, double y, double xScale, float yScale, const char *s, const vec4_t *color, int align, GfxFont *font)
{
  int v22; 
  int v29; 
  int result; 
  float fmt; 
  float ya; 
  float v46; 
  float v47; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_cg_small_dev_string_fontscale;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_small_dev_string_fontscale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vmulss  xmm7, xmm1, [rsp+0A8h+yScale]
  }
  v22 = align & 3;
  __asm { vmulss  xmm8, xmm8, xmm1 }
  if ( v22 != 1 )
  {
    if ( v22 == 2 )
    {
      R_TextWidth(s, 0, font);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vsubss  xmm9, xmm9, xmm1
      }
      goto LABEL_13;
    }
    if ( v22 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 273, ASSERT_TYPE_ASSERT, "((align & CG_ALIGN_X) == CG_ALIGN_LEFT || (align & CG_ALIGN_X) == CG_ALIGN_RIGHT || (align & CG_ALIGN_X) == CG_ALIGN_CENTER)", (const char *)&queryFormat, "(align & CG_ALIGN_X) == CG_ALIGN_LEFT || (align & CG_ALIGN_X) == CG_ALIGN_RIGHT || (align & CG_ALIGN_X) == CG_ALIGN_CENTER") )
      __debugbreak();
  }
  if ( v22 == 3 )
  {
    R_TextWidth(s, 0, font);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, cs:__real@bf000000
      vaddss  xmm9, xmm9, xmm2
    }
  }
LABEL_13:
  v29 = align & 0xC;
  if ( (((v29 - 4) & 0xFFFFFFF3) != 0 || v29 == 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawtools.cpp", 285, ASSERT_TYPE_ASSERT, "((align & CG_ALIGN_Y) == CG_ALIGN_TOP || (align & CG_ALIGN_Y) == CG_ALIGN_BOTTOM || (align & CG_ALIGN_Y) == CG_ALIGN_MIDDLE)", (const char *)&queryFormat, "(align & CG_ALIGN_Y) == CG_ALIGN_TOP || (align & CG_ALIGN_Y) == CG_ALIGN_BOTTOM || (align & CG_ALIGN_Y) == CG_ALIGN_MIDDLE") )
    __debugbreak();
  R_TextHeight(font);
  if ( v29 == 4 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm6, xmm6, xmm1
    }
  }
  else if ( v29 == 12 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, cs:__real@3f000000
      vaddss  xmm6, xmm6, xmm2
    }
  }
  __asm
  {
    vmovss  [rsp+0A8h+var_60], xmm7
    vmovss  [rsp+0A8h+var_68], xmm8
    vmovss  [rsp+0A8h+y], xmm6
    vmovss  dword ptr [rsp+0A8h+fmt], xmm9
  }
  CL_DrawText(scrPlace, s, 0x7FFFFFFF, font, fmt, ya, 1, 1, v46, v47, color, 7);
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
CG_DrawRotatedPic
==============
*/

void __fastcall CG_DrawRotatedPic(const ScreenPlacement *scrPlace, double x, double y, double width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  float h; 
  float v17; 
  float xa; 
  float ya; 
  float w; 

  __asm
  {
    vmovss  [rsp+w], xmm3
    vmovss  [rsp+y], xmm2
    vmovss  [rsp+x], xmm1
  }
  ScrPlace_ApplyRect(scrPlace, &xa, &ya, &w, &height, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm1, [rsp+48h+height]
    vmovss  xmm0, [rsp+48h+angle]
    vmovss  xmm3, [rsp+48h+w]; width
    vmovss  xmm2, [rsp+48h+y]; y
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  dword ptr [rsp+48h+h], xmm1
    vmovss  xmm1, [rsp+48h+x]; x
  }
  CG_DrawRotatedPicPhysical(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, v17, color, material);
}

/*
==============
CG_DrawRotatedPicPhysical
==============
*/

void __fastcall CG_DrawRotatedPicPhysical(const ScreenPlacement *scrPlace, double x, double y, double width, float height, float angle, const vec4_t *color, Material *material)
{
  float t1; 
  float c; 
  float s; 
  float v95; 
  float s1; 
  float t0; 
  float s0; 
  vec2_t verts; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovss  xmm0, [rsp+128h+angle]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
    vmovaps xmm7, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = scrPlace;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm12, dword ptr [rbx]
    vmovss  xmm14, dword ptr [rbx+4]
    vmovss  xmm2, cs:__real@3f000000
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm6, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm7, xmm1, dword ptr [rbx+10h]
    vmulss  xmm1, xmm2, [rsp+128h+height]
    vmulss  xmm4, xmm7, [rsp+128h+c]
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm5, xmm2, dword ptr [rbx+14h]
    vmulss  xmm13, xmm5, [rsp+128h+s]
    vmulss  xmm15, xmm5, [rsp+128h+c]
    vmulss  xmm0, xmm6, xmm8
    vmulss  xmm1, xmm0, dword ptr [rbx+10h]
    vaddss  xmm8, xmm1, xmm7
    vmulss  xmm7, xmm7, [rsp+128h+s]
    vmulss  xmm2, xmm6, xmm9
    vmulss  xmm0, xmm2, dword ptr [rbx+14h]
    vxorps  xmm6, xmm13, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm10, xmm0, xmm5
    vxorps  xmm5, xmm15, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm11, xmm8, xmm4
    vsubss  xmm0, xmm11, xmm6
    vmulss  xmm1, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm2, xmm1, xmm12
    vmovss  dword ptr [rsp+128h+verts], xmm2
    vaddss  xmm4, xmm8, xmm4
    vaddss  xmm3, xmm10, xmm7
    vsubss  xmm9, xmm10, xmm7
    vaddss  xmm0, xmm5, xmm9
    vmulss  xmm1, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm2, xmm1, xmm14
    vmovss  dword ptr [rsp+128h+verts+4], xmm2
    vsubss  xmm0, xmm4, xmm6
    vmovss  xmm6, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm12
    vmovss  [rsp+128h+var_C8], xmm2
    vaddss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm14
    vmovss  [rsp+128h+var_C4], xmm2
    vsubss  xmm0, xmm4, xmm13
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm12
    vmovss  [rsp+128h+var_C0], xmm2
    vaddss  xmm0, xmm15, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm14
    vsubss  xmm0, xmm11, xmm13
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+128h+var_BC], xmm2
    vmulss  xmm2, xmm1, xmm12
    vaddss  xmm0, xmm15, xmm9
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+128h+var_B8], xmm2
    vmulss  xmm2, xmm1, xmm14
    vmovss  [rsp+128h+var_B4], xmm2
  }
  Material_GetDefault2DTextureCoordsForAtlasing(material, &s0, &s1, &t0, &v95);
  __asm
  {
    vmovss  xmm0, [rsp+128h+var_E0]
    vmovss  xmm3, [rsp+128h+s1]; s1
    vmovss  xmm2, [rsp+128h+t0]; t0
    vmovss  xmm1, [rsp+128h+s0]; s0
    vmovss  dword ptr [rsp+128h+t1], xmm0
  }
  R_AddCmdDrawQuadPicST(&verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, t1, color, material);
  _R11 = &v106;
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
CG_DrawRotatedPicWithoutSplitScreenScaling
==============
*/

void __fastcall CG_DrawRotatedPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, double x, double y, double width, float height, int horzAlign, int vertAlign, float angle, const vec4_t *color, Material *material)
{
  float h; 
  float v17; 
  float xa; 
  float ya; 
  float w; 

  __asm
  {
    vmovss  [rsp+w], xmm3
    vmovss  [rsp+y], xmm2
    vmovss  [rsp+x], xmm1
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, &xa, &ya, &w, &height, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm1, [rsp+48h+height]
    vmovss  xmm0, [rsp+48h+angle]
    vmovss  xmm3, [rsp+48h+w]; width
    vmovss  xmm2, [rsp+48h+y]; y
    vmovss  [rsp+48h+var_20], xmm0
    vmovss  dword ptr [rsp+48h+h], xmm1
    vmovss  xmm1, [rsp+48h+x]; x
  }
  CG_DrawRotatedPicPhysical(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, v17, color, material);
}

/*
==============
CG_DrawRotatedQuadPic
==============
*/

void __fastcall CG_DrawRotatedQuadPic(const ScreenPlacement *scrPlace, double x, double y, const vec2_t *verts, float angle, const vec4_t *color, Material *material)
{
  float t1; 
  float c; 
  float s; 
  float v118; 
  float s1; 
  float t0; 
  float s0; 
  vec2_t vertsa; 
  char v129; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovss  xmm0, [rsp+128h+angle]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  _RBX = scrPlace;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm14, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmovss  xmm10, dword ptr [rbx+10h]
    vmovss  xmm11, dword ptr [rbx+14h]
    vmovss  xmm13, dword ptr [rbx]
    vmovss  xmm15, dword ptr [rbx+4]
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm8, xmm0, xmm14
    vmulss  xmm0, xmm8, xmm6
    vmovss  xmm6, [rsp+128h+s]
    vmulss  xmm9, xmm0, xmm10
    vmulss  xmm0, xmm8, dword ptr [rdi]
    vmulss  xmm5, xmm0, xmm10
    vmulss  xmm1, xmm8, xmm7
    vmovss  xmm7, [rsp+128h+c]
    vmulss  xmm12, xmm1, xmm11
    vmulss  xmm1, xmm8, dword ptr [rdi+4]
    vmulss  xmm4, xmm1, xmm11
    vmulss  xmm0, xmm5, xmm7
    vaddss  xmm2, xmm0, xmm9
    vmulss  xmm1, xmm6, xmm4
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm14
    vmulss  xmm3, xmm2, xmm13
    vmulss  xmm0, xmm5, xmm6
    vaddss  xmm2, xmm0, xmm12
    vmovss  dword ptr [rsp+128h+verts], xmm3
    vmulss  xmm1, xmm7, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm8, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm3, xmm0, xmm15
    vmulss  xmm0, xmm8, dword ptr [rdi+8]
    vmulss  xmm5, xmm0, xmm10
    vmulss  xmm4, xmm1, xmm11
    vmulss  xmm0, xmm5, xmm7
    vaddss  xmm2, xmm0, xmm9
    vmovss  dword ptr [rsp+128h+verts+4], xmm3
    vmulss  xmm1, xmm4, xmm6
    vsubss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm3, xmm0, xmm13
    vmulss  xmm1, xmm5, xmm6
    vaddss  xmm2, xmm1, xmm12
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm8, dword ptr [rdi+10h]
    vmulss  xmm1, xmm2, xmm14
    vmulss  xmm5, xmm0, xmm10
    vmovss  [rsp+128h+var_C8], xmm3
    vmulss  xmm3, xmm1, xmm15
    vmulss  xmm1, xmm8, dword ptr [rdi+14h]
    vmulss  xmm4, xmm1, xmm11
    vmulss  xmm0, xmm5, xmm7
    vaddss  xmm2, xmm0, xmm9
    vmulss  xmm1, xmm4, xmm6
    vsubss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm1, xmm5, xmm6
    vaddss  xmm2, xmm1, xmm12
    vmovss  [rsp+128h+var_C4], xmm3
    vmulss  xmm3, xmm0, xmm13
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm8, dword ptr [rdi+18h]
    vmulss  xmm1, xmm2, xmm14
    vmovss  [rsp+128h+var_C0], xmm3
    vmulss  xmm3, xmm1, xmm15
    vmulss  xmm1, xmm8, dword ptr [rdi+1Ch]
    vmovss  [rsp+128h+var_BC], xmm3
    vmulss  xmm5, xmm0, xmm10
    vmulss  xmm4, xmm1, xmm11
    vmulss  xmm0, xmm5, xmm7
    vaddss  xmm2, xmm0, xmm9
    vmulss  xmm1, xmm4, xmm6
    vsubss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm3, xmm0, xmm13
    vmulss  xmm1, xmm5, xmm6
    vaddss  xmm2, xmm1, xmm12
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm1, xmm2, xmm14
    vmovss  [rsp+128h+var_B8], xmm3
    vmulss  xmm3, xmm1, xmm15
    vmovss  [rsp+128h+var_B4], xmm3
  }
  Material_GetDefault2DTextureCoordsForAtlasing(material, &s0, &s1, &t0, &v118);
  __asm
  {
    vmovss  xmm0, [rsp+128h+var_E0]
    vmovss  xmm3, [rsp+128h+s1]; s1
    vmovss  xmm2, [rsp+128h+t0]; t0
    vmovss  xmm1, [rsp+128h+s0]; s0
    vmovss  dword ptr [rsp+128h+t1], xmm0
  }
  R_AddCmdDrawQuadPicST(&vertsa, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, t1, color, material);
  _R11 = &v129;
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
CG_DrawSmallDevString
==============
*/
int CG_DrawSmallDevString(const ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align)
{
  float v9; 
  vec4_t color; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; xScale
    vmovss  xmm0, [rsp+78h+alpha]
    vmovss  [rsp+78h+var_58], xmm3
    vmovss  dword ptr [rsp+78h+var_28], xmm3
    vmovss  dword ptr [rsp+78h+var_28+4], xmm3
    vmovss  dword ptr [rsp+78h+var_28+8], xmm3
    vmovss  dword ptr [rsp+78h+var_28+0Ch], xmm0
  }
  return CG_DrawDevString(scrPlace, x, y, *(float *)&_XMM3, v9, s, &color, align, cls.smallDevFont);
}

/*
==============
CG_DrawSmallDevStringColor
==============
*/
int CG_DrawSmallDevStringColor(const ScreenPlacement *scrPlace, float x, float y, const char *s, const vec4_t *color, int align)
{
  float v8; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; xScale
    vmovss  [rsp+58h+var_38], xmm3
  }
  return CG_DrawDevString(scrPlace, x, y, *(float *)&_XMM3, v8, s, color, align, cls.smallDevFont);
}

/*
==============
CG_DrawStringExt
==============
*/

void __fastcall CG_DrawStringExt(const ScreenPlacement *scrPlace, double x, double y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight)
{
  GfxFont *smallDevFont; 
  bool v18; 
  float v21; 
  int horzAlign; 
  int vertAlign; 
  float v24[6]; 
  void *retaddr; 
  int v26; 
  int v27; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  [rsp+arg_8], xmm1
    vmovss  xmm3, [rsp+68h+arg_38]
  }
  smallDevFont = cls.smallDevFont;
  __asm
  {
    vaddss  xmm0, xmm2, xmm3
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [r11+18h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+8]
    vdivss  xmm0, xmm3, xmm1
    vmovss  dword ptr [r11+40h], xmm0
    vmovss  [rsp+68h+var_18], xmm2
  }
  ScrPlace_ApplyRect(scrPlace, (float *)&v26, (float *)&v27, v24, &charHeight, 1, 1);
  __asm { vmovss  xmm0, [rsp+68h+arg_38] }
  v18 = shadow != 0;
  shadow = -shadow;
  __asm
  {
    vmovss  xmm3, [rsp+68h+arg_8]; x
    vmovss  [rsp+68h+vertAlign], xmm0
    vmovss  [rsp+68h+horzAlign], xmm0
    vmovss  xmm0, [rsp+68h+arg_10]
    vmovss  [rsp+68h+var_48], xmm0
  }
  CL_DrawTextPhysical(string, 0x7FFFFFFF, smallDevFont, *(float *)&_XMM3, v21, *(float *)&horzAlign, *(float *)&vertAlign, setColor, v18 ? 3 : 0);
}

/*
==============
CG_DrawTools_FadeAlpha
==============
*/
float CG_DrawTools_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec)
{
  if ( fadeMsec <= 0 || startMsec - timeNow + totalMsec >= fadeMsec )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, r9d
      vdivss  xmm0, xmm1, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawTools_FadeColor
==============
*/
char CG_DrawTools_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec, vec4_t *outColor)
{
  int v7; 

  if ( !startMsec )
    return 0;
  v7 = timeNow - startMsec;
  if ( v7 >= totalMsec )
    return 0;
  if ( fadeMsec <= 0 || totalMsec - v7 >= fadeMsec )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, r8d
      vcvtsi2ss xmm0, xmm0, r9d
      vdivss  xmm2, xmm1, xmm0
    }
  }
  _RAX = outColor;
  __asm { vmovss  dword ptr [rax+0Ch], xmm2 }
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
  const char *ConfigString; 
  const char *v9; 
  const char *v10; 
  const Material *v11; 
  const char *v12; 
  const char *v14; 
  const char *v16; 
  const char *v18; 
  const char *v20; 
  char v21; 
  char *data_p[2]; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  ConfigString = CL_GetConfigString(9);
  *(double *)&_XMM0 = atof(ConfigString);
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
    vmovss  dword ptr [rbx+49FFCh], xmm1
  }
  FastSinCos(*(const float *)&_XMM0, (float *)&_RBX->compassNorth + 1, (float *)&_RBX->compassNorth);
  data_p[0] = (char *)CL_GetConfigString(10);
  v9 = Com_Parse((const char **)data_p);
  _RBX->compassMapTDMDMaterial = NULL;
  v10 = v9;
  if ( *v9 )
  {
    if ( TopDownMapData_HasData() )
    {
      Com_sprintf(dest, 0x40ui64, "%s_tdmd", v10);
      v11 = Material_RegisterHandle(dest, IMAGE_TRACK_HUD);
      if ( !Material_IsDefault(v11) )
        _RBX->compassMapTDMDMaterial = (Material *)v11;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) )
  {
    if ( _RBX->m_isMLGSpectator )
    {
      Com_Parse((const char **)data_p);
      _RBX->compassMapMaterial = Material_RegisterHandle(v10, IMAGE_TRACK_HUD);
    }
    else
    {
      _RBX->compassMapMaterial = Material_RegisterHandle(v10, IMAGE_TRACK_HUD);
      Com_Parse((const char **)data_p);
    }
  }
  v12 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v12);
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+4A018h], xmm1
  }
  v14 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v14);
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+4A01Ch], xmm1
  }
  v16 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v16);
  __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  v18 = Com_Parse((const char **)data_p);
  *(double *)&_XMM0 = atof(v18);
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  v20 = Com_Parse((const char **)data_p);
  _RBX->compassMapTiles = atoi(v20);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4A004h]
    vsubss  xmm3, xmm7, dword ptr [rbx+4A018h]
    vsubss  xmm2, xmm6, dword ptr [rbx+4A01Ch]
    vmovss  xmm5, dword ptr [rbx+4A000h]
    vmovaps xmm7, [rsp+0B8h+var_38]
    vmovaps xmm6, [rsp+0B8h+var_28]
    vmulss  xmm1, xmm3, xmm4
    vmulss  xmm0, xmm2, xmm5
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+4A020h], xmm1
    vmulss  xmm0, xmm3, xmm5
    vmulss  xmm2, xmm2, xmm4
    vaddss  xmm1, xmm2, xmm0
    vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx+4A024h], xmm4
    vucomiss xmm0, dword ptr [rbx+4A020h]
  }
  if ( v21 )
    _RBX->compassMapWorldSize.v[0] = 1000.0;
  __asm { vucomiss xmm4, xmm0 }
  if ( v21 )
    _RBX->compassMapWorldSize.v[1] = 1000.0;
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

void __fastcall CG_DrawVLine(const ScreenPlacement *scrPlace, double x, double top, double lineWidth, float height, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  const vec4_t *v9; 
  Material *v10; 
  int v20; 
  int v21; 
  int v22; 
  vec2_t verts; 

  v9 = color;
  v10 = material;
  __asm
  {
    vmovss  [rsp+98h+var_48], xmm1
    vmovss  [rsp+98h+var_50], xmm2
    vmovss  [rsp+98h+var_58], xmm3
  }
  ScrPlace_ApplyRect(scrPlace, (float *)&v22, (float *)&v21, (float *)&v20, &height, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vmulss  xmm4, xmm2, [rsp+98h+height]
    vmulss  xmm5, xmm2, [rsp+98h+var_58]
    vmovss  xmm2, [rsp+98h+var_48]
    vaddss  xmm1, xmm4, [rsp+98h+var_50]
    vaddss  xmm0, xmm5, xmm2
    vsubss  xmm3, xmm1, xmm4
    vaddss  xmm1, xmm1, xmm4
    vmovss  dword ptr [rsp+98h+verts], xmm0
    vmovss  [rsp+98h+var_38], xmm0
    vsubss  xmm0, xmm2, xmm5
    vmovss  [rsp+98h+var_30], xmm0
    vmovss  [rsp+98h+var_28], xmm0
    vmovss  dword ptr [rsp+98h+verts+4], xmm3
    vmovss  [rsp+98h+var_34], xmm1
    vmovss  [rsp+98h+var_2C], xmm1
    vmovss  [rsp+98h+var_24], xmm3
  }
  R_AddCmdDrawQuadPic(&verts, v9, v10);
}

/*
==============
CG_UpdateSSR
==============
*/
void CG_UpdateSSR(LocalClientNum_t localClientNum)
{
  __int64 v9; 

  if ( cg_t::ms_allocatedType )
  {
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vdivss  xmm1, xmm1, dword ptr [rcx+28h]
      vaddss  xmm0, xmm1, dword ptr [rax+5A4ACh]
      vminss  xmm2, xmm0, cs:__real@3f800000
      vmovss  dword ptr [rax+5A4ACh], xmm2
      vmovss  dword ptr [rax+6C50h], xmm2
    }
    _RAX->refdef.ssrSourceDisplayViewport.width = 0;
    memset(&v9, 0, sizeof(v9));
  }
}

/*
==============
CG_WorldDirToScreenPosReal
==============
*/

bool __fastcall CG_WorldDirToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldDir, double tanHalfFOVX, const float tanHalfFOVY, vec2_t *outScreenPos)
{
  bool v16; 
  bool v17; 
  bool result; 
  char v67[16]; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = outScreenPos;
  _RBP = (char *)worldDir;
  __asm { vmovaps xmm9, xmm3 }
  _RDI = scrPlace;
  CG_GetLocalClientGlobals(localClientNum);
  v16 = _RBP <= v67;
  if ( _RBP == v67 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+8]
    vmovss  xmm5, dword ptr [rbp+4]
    vmovss  xmm4, dword ptr [rbp+0]
    vmulss  xmm1, xmm5, dword ptr [rsi+6948h]
    vmulss  xmm0, xmm4, dword ptr [rsi+6944h]
    vmulss  xmm3, xmm4, dword ptr [rsi+6950h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsi+694Ch]
    vmulss  xmm0, xmm5, dword ptr [rsi+6954h]
    vaddss  xmm10, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsi+6958h]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsi+6960h]
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [rsi+695Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsi+6964h]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm10, xmm8
    vaddss  xmm6, xmm2, xmm1
  }
  if ( v16 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm4, xmm6, xmm3
      vmovss  xmm6, cs:__real@80000000
    }
    result = 0;
    __asm
    {
      vucomiss xmm7, xmm6
      vxorps  xmm5, xmm7, xmm3
      vmovss  dword ptr [rbx], xmm5
      vmovss  dword ptr [rbx+4], xmm4
      vmovss  xmm0, dword ptr [rdi+20h]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm2, dword ptr [rdi+24h]
      vmulss  xmm1, xmm2, cs:__real@40000000
      vxorps  xmm3, xmm2, xmm3
      vcmpless xmm0, xmm8, xmm4
      vblendvps xmm0, xmm3, xmm1, xmm0
      vmovss  dword ptr [rbx+4], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, cs:__real@3f800000
      vdivss  xmm2, xmm4, xmm10
      vdivss  xmm0, xmm7, xmm9
      vmulss  xmm1, xmm0, xmm2
      vsubss  xmm1, xmm4, xmm1
      vmulss  xmm0, xmm1, dword ptr [rdi+20h]
      vdivss  xmm1, xmm6, [rsp+0A8h+tanHalfFOVY]
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmulss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbx], xmm0
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm0, dword ptr [rdi+24h]
    }
    result = 1;
    __asm
    {
      vmulss  xmm2, xmm1, cs:__real@3f000000
      vmovss  dword ptr [rbx+4], xmm2
    }
  }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
CG_WorldDirToScreenPosRealPrecise
==============
*/

bool __fastcall CG_WorldDirToScreenPosRealPrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldDir, double tanHalfFOVX, const float tanHalfFOVY, vec2_t *outScreenPos)
{
  bool v20; 
  bool result; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = outScreenPos;
  _RBX = worldDir;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = scrPlace;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm3
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovsd  xmm7, qword ptr [rbx+10h]
    vmovsd  xmm5, qword ptr [rbx]
    vmovsd  xmm6, qword ptr [rbx+8]
  }
  v20 = __CFADD__(_RAX, 26912i64) || &_RAX->refdef == NULL;
  _RAX = (cg_t *)((char *)_RAX + 26912);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+24h]
    vmovss  xmm1, dword ptr [rax+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm3, xmm0, xmm5
    vmovss  xmm0, dword ptr [rax+2Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, xmm6
    vmulsd  xmm1, xmm0, xmm7
    vmovss  xmm0, dword ptr [rax+34h]
    vaddsd  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rax+30h]
    vaddsd  xmm9, xmm4, xmm1
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm2, xmm2
    vmulsd  xmm3, xmm2, xmm5
    vmovss  xmm2, dword ptr [rax+38h]
    vaddsd  xmm4, xmm3, xmm1
    vmovss  xmm1, dword ptr [rax+3Ch]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm3, xmm1, xmm5
    vmovss  xmm1, dword ptr [rax+44h]
    vcvtss2sd xmm2, xmm2, xmm2
    vmulsd  xmm0, xmm2, xmm7
    vaddsd  xmm8, xmm4, xmm0
    vmovss  xmm0, dword ptr [rax+40h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmulsd  xmm2, xmm0, xmm6
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm0, xmm1, xmm7
    vaddsd  xmm4, xmm3, xmm2
    vaddsd  xmm7, xmm4, xmm0
    vxorpd  xmm0, xmm0, xmm0
    vcomisd xmm9, xmm0
  }
  if ( v20 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vcvtsd2ss xmm0, xmm8, xmm8
      vcvtsd2ss xmm1, xmm7, xmm7
      vxorps  xmm0, xmm0, xmm3
      vmovss  dword ptr [rdi], xmm0
      vxorps  xmm4, xmm1, xmm3
      vmovss  dword ptr [rdi+4], xmm4
      vmovss  xmm6, dword ptr [rdi]
      vxorps  xmm5, xmm5, xmm5
    }
    result = 0;
    __asm
    {
      vucomiss xmm6, xmm5
      vmovss  xmm0, dword ptr [rsi+20h]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vcmpless xmm0, xmm5, dword ptr [rdi+4]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rsi+24h]
      vmulss  xmm1, xmm2, cs:__real@40000000
      vxorps  xmm3, xmm2, xmm3
      vblendvps xmm0, xmm3, xmm1, xmm0
      vmovss  dword ptr [rdi+4], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm6, cs:__real@3ff0000000000000
      vcvtss2sd xmm0, xmm10, xmm10
      vdivsd  xmm1, xmm8, xmm0
      vmovss  xmm0, dword ptr [rsi+20h]
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vdivsd  xmm5, xmm6, xmm9
      vmulsd  xmm2, xmm1, xmm5
      vcvtss2sd xmm1, xmm0, xmm0
      vmovss  xmm0, [rsp+78h+tanHalfFOVY]
      vsubsd  xmm3, xmm6, xmm2
      vmulsd  xmm2, xmm3, xmm1
      vcvtsd2ss xmm3, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vdivsd  xmm1, xmm7, xmm0
      vmovss  dword ptr [rdi], xmm3
      vmovss  xmm0, dword ptr [rsi+24h]
      vmulsd  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vsubsd  xmm3, xmm6, xmm2
      vcvtss2sd xmm2, xmm1, xmm1
      vmulsd  xmm3, xmm3, xmm2
      vcvtsd2ss xmm0, xmm3, xmm3
      vmovss  dword ptr [rdi+4], xmm0
    }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v99;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+78h+var_28]
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
  bool v7; 
  const ScreenPlacement *v8; 
  bool result; 
  float fmt; 

  v3 = localClientNum;
  _RBP = outScreenPos;
  _RSI = CG_GetLocalClientGlobals(localClientNum);
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+6934h]
    vmovss  xmm3, dword ptr [rsi+6930h]; tanHalfFOVX
    vmovss  dword ptr [rsp+38h+fmt], xmm0
  }
  result = CG_WorldDirToScreenPosReal((LocalClientNum_t)v3, v8, worldDir, *(const float *)&_XMM3, fmt, _RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm2, dword ptr [rbx+20h]
    vsubss  xmm4, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rbp+0], xmm4
    vmulss  xmm2, xmm2, dword ptr [rbx+24h]
    vsubss  xmm3, xmm1, xmm2
    vmovss  dword ptr [rbp+4], xmm3
    vmulss  xmm0, xmm4, dword ptr [rbx+10h]
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+14h]
    vmovss  dword ptr [rbp+4], xmm1
  }
  return result;
}

/*
==============
CG_WorldPosToScreenPosReal
==============
*/
_BOOL8 CG_WorldPosToScreenPosReal(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, vec2_t *outScreenPos)
{
  bool v31; 
  _BOOL8 result; 
  float v34; 
  vec3_t outOrg; 
  __int64 v36; 
  vec3_t worldDir; 

  v36 = -2i64;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _RDI = worldPos;
  _RBX = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(_RBX, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+outOrg]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+0A8h+outOrg+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm6, xmm0, dword ptr [rsp+0A8h+outOrg+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm2, xmm0
    vdivss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir+4], xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir+8], xmm0
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0A8h+var_88], xmm0
    vmovss  xmm3, dword ptr [rbx]; tanHalfFOVX
  }
  v31 = CG_WorldDirToScreenPosReal(localClientNum, scrPlace, &worldDir, *(const float *)&_XMM3, v34, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  result = v31;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
CG_WorldPosToScreenPosRealForScene
==============
*/
_BOOL8 CG_WorldPosToScreenPosRealForScene(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  bool v32; 
  _BOOL8 result; 
  float v35; 
  vec3_t outOrg; 
  __int64 v37; 
  vec3_t worldDir; 

  v37 = -2i64;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _RDI = worldPos;
  _RSI = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(_RSI, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+outOrg]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+0A8h+outOrg+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm6, xmm0, dword ptr [rsp+0A8h+outOrg+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm2, xmm0
    vdivss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir+4], xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+0A8h+worldDir+8], xmm0
  }
  if ( space == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+40h]
      vmovss  xmm3, dword ptr [rsi+3Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  xmm3, dword ptr [rsi]; tanHalfFOVX
    }
  }
  __asm { vmovss  [rsp+0A8h+var_88], xmm0 }
  v32 = CG_WorldDirToScreenPosReal(localClientNum, scrPlace, &worldDir, *(const float *)&_XMM3, v35, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  result = v32;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
CG_WorldPosToScreenPosRealForScenePrecise
==============
*/
_BOOL8 CG_WorldPosToScreenPosRealForScenePrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, const int space, vec2_t *outScreenPos)
{
  bool v41; 
  _BOOL8 result; 
  float v45; 
  vec3_t outOrg; 
  __int64 v47; 
  dvec3_t worldDir; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = worldPos;
  _RSI = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(_RSI, &outOrg);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+outOrg]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  xmm0, qword ptr [rdi]
    vsubsd  xmm7, xmm0, xmm1
    vmovss  xmm2, dword ptr [rsp+0B8h+outOrg+4]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  xmm1, qword ptr [rdi+8]
    vsubsd  xmm6, xmm1, xmm2
    vmovss  xmm3, dword ptr [rsp+0B8h+outOrg+8]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  xmm0, qword ptr [rdi+10h]
    vsubsd  xmm5, xmm0, xmm3
    vmulsd  xmm2, xmm6, xmm6
    vmulsd  xmm1, xmm7, xmm7
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm5, xmm5
    vaddsd  xmm2, xmm3, xmm0
    vsqrtsd xmm4, xmm2, xmm2
    vxorpd  xmm1, xmm1, xmm1
    vcmpeqsd xmm0, xmm4, xmm1
    vmovsd  xmm2, cs:__real@3ff0000000000000
    vblendvpd xmm1, xmm4, xmm2, xmm0
    vdivsd  xmm2, xmm2, xmm1
    vmulsd  xmm0, xmm7, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir], xmm0
    vmulsd  xmm1, xmm6, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir+8], xmm1
    vmulsd  xmm0, xmm5, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir+10h], xmm0
  }
  if ( space == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+40h]
      vmovss  xmm3, dword ptr [rsi+3Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  xmm3, dword ptr [rsi]; tanHalfFOVX
    }
  }
  __asm { vmovss  [rsp+0B8h+var_98], xmm0 }
  v41 = CG_WorldDirToScreenPosRealPrecise(localClientNum, scrPlace, &worldDir, *(double *)&_XMM3, v45, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  result = v41;
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
  return result;
}

/*
==============
CG_WorldPosToScreenPosRealPrecise
==============
*/
_BOOL8 CG_WorldPosToScreenPosRealPrecise(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const dvec3_t *worldPos, vec2_t *outScreenPos)
{
  bool v39; 
  _BOOL8 result; 
  float v43; 
  vec3_t outOrg; 
  __int64 v45; 
  dvec3_t worldDir; 

  v45 = -2i64;
  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
  }
  _RDI = worldPos;
  _RBX = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  RefdefView_GetOrg(_RBX, &outOrg);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+outOrg]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  xmm0, qword ptr [rdi]
    vsubsd  xmm7, xmm0, xmm1
    vmovss  xmm2, dword ptr [rsp+0B8h+outOrg+4]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  xmm1, qword ptr [rdi+8]
    vsubsd  xmm6, xmm1, xmm2
    vmovss  xmm3, dword ptr [rsp+0B8h+outOrg+8]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  xmm0, qword ptr [rdi+10h]
    vsubsd  xmm5, xmm0, xmm3
    vmulsd  xmm2, xmm6, xmm6
    vmulsd  xmm1, xmm7, xmm7
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm5, xmm5
    vaddsd  xmm2, xmm3, xmm0
    vsqrtsd xmm4, xmm2, xmm2
    vxorpd  xmm1, xmm1, xmm1
    vcmpeqsd xmm0, xmm4, xmm1
    vmovsd  xmm2, cs:__real@3ff0000000000000
    vblendvpd xmm1, xmm4, xmm2, xmm0
    vdivsd  xmm2, xmm2, xmm1
    vmulsd  xmm0, xmm7, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir], xmm0
    vmulsd  xmm1, xmm6, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir+8], xmm1
    vmulsd  xmm0, xmm5, xmm2
    vmovsd  qword ptr [rsp+0B8h+worldDir+10h], xmm0
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+var_98], xmm0
    vmovss  xmm3, dword ptr [rbx]; tanHalfFOVX
  }
  v39 = CG_WorldDirToScreenPosRealPrecise(localClientNum, scrPlace, &worldDir, *(double *)&_XMM3, v43, outScreenPos);
  memset(&outOrg, 0, sizeof(outOrg));
  result = v39;
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
  return result;
}

