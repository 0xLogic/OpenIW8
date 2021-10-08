/*
==============
G_LogDebugEntInfo
==============
*/

void __fastcall G_LogDebugEntInfo(gentity_s *ent)
{
  ?G_LogDebugEntInfo@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_DebugLineWithArrow
==============
*/

void __fastcall G_DebugLineWithArrow(const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, int duration)
{
  ?G_DebugLineWithArrow@@YAXAEBTvec3_t@@0AEBTvec4_t@@H@Z(startPos, endPos, color, duration);
}

/*
==============
G_DebugBox
==============
*/

void __fastcall G_DebugBox(const vec3_t *origin, const Bounds *box, float yaw, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugBox@@YAXAEBTvec3_t@@PEBUBounds@@MAEBTvec4_t@@HH@Z(origin, box, yaw, color, depthTest, duration);
}

/*
==============
G_DebugStarWithSize
==============
*/

void __fastcall G_DebugStarWithSize(const vec3_t *point, const vec4_t *color, float size)
{
  ?G_DebugStarWithSize@@YAXAEBTvec3_t@@AEBTvec4_t@@M@Z(point, color, size);
}

/*
==============
G_DebugPlayerAnimScript_Print
==============
*/

void __fastcall G_DebugPlayerAnimScript_Print(int clientNum, const char *msg)
{
  ?G_DebugPlayerAnimScript_Print@@YAXHPEBD@Z(clientNum, msg);
}

/*
==============
G_DebugDrawVolumeModel
==============
*/

void __fastcall G_DebugDrawVolumeModel(const gentity_s *entity, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugDrawVolumeModel@@YAXPEBUgentity_s@@AEBTvec4_t@@HH@Z(entity, color, depthTest, duration);
}

/*
==============
G_DebugString
==============
*/

void __fastcall G_DebugString(const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  ?G_DebugString@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(point, color, scale, text, duration);
}

/*
==============
G_LogDebugEntInfoEnd
==============
*/

void G_LogDebugEntInfoEnd(void)
{
  ?G_LogDebugEntInfoEnd@@YAXXZ();
}

/*
==============
G_LogDebugEntInfoInit
==============
*/

void G_LogDebugEntInfoInit(void)
{
  ?G_LogDebugEntInfoInit@@YAXXZ();
}

/*
==============
G_DebugStarWithTextDuration
==============
*/

void __fastcall G_DebugStarWithTextDuration(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int duration)
{
  ?G_DebugStarWithTextDuration@@YAXAEBTvec3_t@@AEBTvec4_t@@1PEBDMH@Z(point, starColor, textColor, string, fontsize, duration);
}

/*
==============
G_DebugPlane
==============
*/

void __fastcall G_DebugPlane(const vec2_t *normal, float dist, const vec3_t *origin, const vec4_t *color, float size, int depthTest, int duration)
{
  ?G_DebugPlane@@YAXAEBTvec2_t@@MAEBTvec3_t@@AEBTvec4_t@@MHH@Z(normal, dist, origin, color, size, depthTest, duration);
}

/*
==============
G_DebugLogEntitySpawn
==============
*/

void __fastcall G_DebugLogEntitySpawn(const gentity_s *ent)
{
  ?G_DebugLogEntitySpawn@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
G_DebugStarWithText
==============
*/

void __fastcall G_DebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize)
{
  ?G_DebugStarWithText@@YAXAEBTvec3_t@@AEBTvec4_t@@1PEBDM@Z(point, starColor, textColor, string, fontsize);
}

/*
==============
G_DebugStarWithDuration
==============
*/

void __fastcall G_DebugStarWithDuration(const vec3_t *point, const vec4_t *color, int duration)
{
  ?G_DebugStarWithDuration@@YAXAEBTvec3_t@@AEBTvec4_t@@H@Z(point, color, duration);
}

/*
==============
G_DumpUnreferencedEnts
==============
*/

void G_DumpUnreferencedEnts(void)
{
  ?G_DumpUnreferencedEnts@@YAXXZ();
}

/*
==============
G_DrawTriggers
==============
*/

void __fastcall G_DrawTriggers(trigger_draw_type_t drawType)
{
  ?G_DrawTriggers@@YAXW4trigger_draw_type_t@@@Z(drawType);
}

/*
==============
G_Debug_PrintEntityDebugInfoToConsole
==============
*/

void __fastcall G_Debug_PrintEntityDebugInfoToConsole(bool logfileOnly, const int filterClientIndex)
{
  ?G_Debug_PrintEntityDebugInfoToConsole@@YAX_NH@Z(logfileOnly, filterClientIndex);
}

/*
==============
G_DebugBlameForEntCount
==============
*/

const char *__fastcall G_DebugBlameForEntCount(bool snapshotOnly)
{
  return ?G_DebugBlameForEntCount@@YAPEBD_N@Z(snapshotOnly);
}

/*
==============
G_DebugGetEntityModelName
==============
*/

const char *__fastcall G_DebugGetEntityModelName(const gentity_s *const ent)
{
  return ?G_DebugGetEntityModelName@@YAPEBDQEBUgentity_s@@@Z(ent);
}

/*
==============
G_Debug_LogFxInfo
==============
*/

void __fastcall G_Debug_LogFxInfo(const vec3_t *pos, const unsigned int fxId, const scr_string_t tag)
{
  ?G_Debug_LogFxInfo@@YAXAEBTvec3_t@@IW4scr_string_t@@@Z(pos, fxId, tag);
}

/*
==============
G_DebugBoxOriented
==============
*/

void __fastcall G_DebugBoxOriented(const vec3_t *origin, const Bounds *box, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugBoxOriented@@YAXAEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@HH@Z(origin, box, rotation, color, depthTest, duration);
}

/*
==============
G_DebugAxisWithColor
==============
*/

void __fastcall G_DebugAxisWithColor(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, float colorScale, const int depthTest, int duration)
{
  ?G_DebugAxisWithColor@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@MMHH@Z(axes, pos, length, colorScale, depthTest, duration);
}

/*
==============
G_DebugPolyWithTransformAndDuration
==============
*/

void __fastcall G_DebugPolyWithTransformAndDuration(int pointCount, const vec3_t *points, const tmat43_t<vec3_t> *transform, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration)
{
  ?G_DebugPolyWithTransformAndDuration@@YAXHPEBTvec3_t@@AEBT?$tmat43_t@Tvec3_t@@@@AEBTvec4_t@@_N33H@Z(pointCount, points, transform, color, drawOutline, drawBackFace, depthTest, duration);
}

/*
==============
G_LogDebugEntInfoResults
==============
*/

bool __fastcall G_LogDebugEntInfoResults()
{
  return ?G_LogDebugEntInfoResults@@YA_NXZ();
}

/*
==============
G_DebugSphere
==============
*/

void __fastcall G_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugSphere@@YAXAEBTvec3_t@@MAEBTvec4_t@@HH@Z(center, radius, color, depthTest, duration);
}

/*
==============
G_Debug_PrintEntityLineWithMessage
==============
*/

void __fastcall G_Debug_PrintEntityLineWithMessage(int channel, const entityState_t *const entityState, const char *message)
{
  ?G_Debug_PrintEntityLineWithMessage@@YAXHQEBUentityState_t@@PEBD@Z(channel, entityState, message);
}

/*
==============
G_DebugLineWithDuration
==============
*/

void __fastcall G_DebugLineWithDuration(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugLineWithDuration@@YAXAEBTvec3_t@@0AEBTvec4_t@@HH@Z(start, end, color, depthTest, duration);
}

/*
==============
G_DebugLine
==============
*/

void __fastcall G_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest)
{
  ?G_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@H@Z(start, end, color, depthTest);
}

/*
==============
G_DebugArrow
==============
*/

void __fastcall G_DebugArrow(const vec3_t *pos, const vec3_t *angles, const vec4_t *color, int duration)
{
  ?G_DebugArrow@@YAXAEBTvec3_t@@0AEBTvec4_t@@H@Z(pos, angles, color, duration);
}

/*
==============
G_Debug2DRect
==============
*/

void __fastcall G_Debug2DRect(const vec2_t *min, const vec2_t *max, const vec4_t *color, const int depthTest, int duration)
{
  ?G_Debug2DRect@@YAXAEBTvec2_t@@0AEBTvec4_t@@HH@Z(min, max, color, depthTest, duration);
}

/*
==============
G_DebugCircleEx
==============
*/

void __fastcall G_DebugCircleEx(const vec3_t *center, float radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugCircleEx@@YAXAEBTvec3_t@@M0AEBTvec4_t@@HH@Z(center, radius, dir, color, depthTest, duration);
}

/*
==============
G_DrawTriggerGeometry
==============
*/

void __fastcall G_DrawTriggerGeometry(gentity_s *ent, const vec4_t *color, int depthTest, int duration, bool drawSolid, const vec4_t *interiorColor)
{
  ?G_DrawTriggerGeometry@@YAXPEAUgentity_s@@AEBTvec4_t@@HH_N1@Z(ent, color, depthTest, duration, drawSolid, interiorColor);
}

/*
==============
G_DebugStar
==============
*/

void __fastcall G_DebugStar(const vec3_t *point, const vec4_t *color)
{
  ?G_DebugStar@@YAXAEBTvec3_t@@AEBTvec4_t@@@Z(point, color);
}

/*
==============
G_DebugDrawTriggerModel
==============
*/

void __fastcall G_DebugDrawTriggerModel(const gentity_s *entity, const vec4_t *color, int depthTest, int duration, bool drawSolid, const vec4_t *interiorColor)
{
  ?G_DebugDrawTriggerModel@@YAXPEBUgentity_s@@AEBTvec4_t@@HH_N1@Z(entity, color, depthTest, duration, drawSolid, interiorColor);
}

/*
==============
G_DebugCapsule
==============
*/

void __fastcall G_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugCapsule@@YAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
G_LogDebugEntInfoStart
==============
*/

void G_LogDebugEntInfoStart(void)
{
  ?G_LogDebugEntInfoStart@@YAXXZ();
}

/*
==============
G_DebugCircle
==============
*/

void __fastcall G_DebugCircle(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int onGround, int duration)
{
  ?G_DebugCircle@@YAXAEBTvec3_t@@MAEBTvec4_t@@HHH@Z(center, radius, color, depthTest, onGround, duration);
}

/*
==============
G_DebugAxis
==============
*/

void __fastcall G_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
{
  ?G_DebugAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@MHH@Z(axes, pos, length, depthTest, duration);
}

/*
==============
G_DebugPolyWithDuration
==============
*/

void __fastcall G_DebugPolyWithDuration(int pointCount, const vec3_t *points, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration)
{
  ?G_DebugPolyWithDuration@@YAXHPEBTvec3_t@@AEBTvec4_t@@_N22H@Z(pointCount, points, color, drawOutline, drawBackFace, depthTest, duration);
}

/*
==============
G_DebugDrawDenseGrid
==============
*/

void __fastcall G_DebugDrawDenseGrid(const DenseGrid *grid)
{
  ?G_DebugDrawDenseGrid@@YAXAEBVDenseGrid@@@Z(grid);
}

/*
==============
G_IsServerGameSystem
==============
*/

int __fastcall G_IsServerGameSystem(int clientNum)
{
  return ?G_IsServerGameSystem@@YAHH@Z(clientNum);
}

/*
==============
G_DebugCylinder
==============
*/

void __fastcall G_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugCylinder@@YAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
G_Debug_PrintEntityDebugInfoToCSV
==============
*/

void __fastcall G_Debug_PrintEntityDebugInfoToCSV(const char *filenameSuffix, const int filterClientIndex)
{
  ?G_Debug_PrintEntityDebugInfoToCSV@@YAXPEBDH@Z(filenameSuffix, filterClientIndex);
}

/*
==============
G_DebugArc
==============
*/

void __fastcall G_DebugArc(const vec3_t *center, float radius, float angle0, float angle1, const vec4_t *color, int depthTest, int duration)
{
  ?G_DebugArc@@YAXAEBTvec3_t@@MMMAEBTvec4_t@@HH@Z(center, radius, angle0, angle1, color, depthTest, duration);
}

/*
==============
G_DebugInfils
==============
*/

void G_DebugInfils(void)
{
  ?G_DebugInfils@@YAXXZ();
}

/*
==============
G_CompareEntSpawnCallstackRecord
==============
*/
__int64 G_CompareEntSpawnCallstackRecord(const void *a, const void *b)
{
  if ( *(_DWORD *)a >= *(_DWORD *)b )
    return (unsigned int)(*(_DWORD *)a <= *(_DWORD *)b) - 1;
  else
    return 1i64;
}

/*
==============
G_Debug2DRect
==============
*/
void G_Debug2DRect(const vec2_t *min, const vec2_t *max, const vec4_t *color, const int depthTest, int duration)
{
  float v14; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v25; 
  vec3_t v26; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rdx]
    vxorps  xmm4, xmm4, xmm4
    vunpcklps xmm0, xmm5, xmm2
    vmovsd  qword ptr [rbp+start], xmm0
    vunpcklps xmm0, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  [rbp+var_48], xmm4
  }
  start.v[2] = v19;
  __asm
  {
    vmovsd  qword ptr [rbp+end], xmm0
    vmovss  [rbp+var_48], xmm4
  }
  v14 = v20;
  __asm
  {
    vunpcklps xmm0, xmm3, xmm2
    vmovss  [rbp+var_48], xmm4
  }
  end.v[2] = v14;
  v17 = v21;
  __asm
  {
    vmovsd  qword ptr [rbp+var_28], xmm0
    vunpcklps xmm0, xmm5, xmm2
    vmovss  [rbp+var_48], xmm4
  }
  v25.v[2] = v17;
  __asm { vmovsd  qword ptr [rbp+var_1C], xmm0 }
  v26.v[2] = v22;
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 1);
  CL_AddDebugLine(&end, &v25, color, depthTest, duration, 1);
  CL_AddDebugLine(&v25, &v26, color, depthTest, duration, 1);
  CL_AddDebugLine(&v26, &start, color, depthTest, duration, 1);
}

/*
==============
G_DebugArc
==============
*/

void __fastcall G_DebugArc(const vec3_t *center, double radius, double angle0, double angle1, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v20; 
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
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vsubss  xmm0, xmm3, xmm2
    vmovaps xmm6, xmm2
    vmovss  xmm2, cs:__real@3d888889
    vmulss  xmm7, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
    vmovaps xmm8, xmm1
    vmovss  xmm9, cs:__real@3c8efa35
  }
  v20 = 0;
  _RBX = &start.v[1];
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
      vmulss  xmm1, xmm8, [rsp+168h+c]
      vaddss  xmm2, xmm1, dword ptr [rsi]
      vmulss  xmm1, xmm8, [rsp+168h+s]
    }
    v29 = center->v[2];
    ++v20;
    __asm { vmovss  dword ptr [rbx-4], xmm2 }
    _RBX += 3;
    __asm
    {
      vaddss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbx-0Ch], xmm2
    }
    *(_RBX - 2) = v29;
  }
  while ( v20 < 0x10 );
  p_start = &start;
  v32 = 15i64;
  do
  {
    v33 = p_start + 1;
    CL_AddDebugLine(p_start, p_start + 1, color, depthTest, duration, 1);
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
G_DebugArrow
==============
*/
void G_DebugArrow(const vec3_t *pos, const vec3_t *angles, const vec4_t *color, int duration)
{
  __int64 v14; 
  _BYTE *v15; 
  __int64 v17; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v22; 
  vec3_t v23; 
  _BYTE v24[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups ymm0, cs:__ymm@3ecccccdbf00000000000000becccccdbf00000000000000000000003f000000
    vmovups xmm1, cs:__xmm@3ecccccd00000000bf00000000000000
    vmovups [rsp+128h+var_88], ymm0
    vmovss  xmm0, cs:__real@bf000000
  }
  _RBP = pos;
  __asm
  {
    vmovups xmmword ptr [r11-68h], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [r11-54h], xmm1
    vmovss  dword ptr [r11-50h], xmm1
    vmovss  dword ptr [r11-58h], xmm0
  }
  AnglesToAxis(angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rbp+4]
  }
  v14 = 0i64;
  v15 = &v24[8];
  __asm
  {
    vmovss  [rsp+128h+var_D4], xmm0
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+128h+var_CC], xmm0
  }
  v17 = 5i64;
  __asm { vmovss  [rsp+128h+var_D0], xmm1 }
  do
  {
    MatrixTransformVector43((const vec3_t *)&v24[v14], &axis, (vec3_t *)((char *)&out + v14));
    v14 += 12i64;
    v15 += 12;
    --v17;
  }
  while ( v17 );
  CL_AddDebugLine(&out, &end, color, 0, duration, 1);
  CL_AddDebugLine(&end, &start, color, 0, duration, 1);
  CL_AddDebugLine(&start, &out, color, 0, duration, 1);
  CL_AddDebugLine(&v22, &v23, color, 0, duration, 1);
  CL_AddDebugLine(&v23, _RBP, color, 0, duration, 1);
  CL_AddDebugLine(_RBP, &v22, color, 0, duration, 1);
}

/*
==============
G_DebugAxis
==============
*/

void __fastcall G_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, double length, const int depthTest, int duration)
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
  CL_AddDebugLine(pos, &end, &colorRed, depthTest, duration, 1);
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
  CL_AddDebugLine(pos, &end, &colorGreen, depthTest, duration, 1);
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
  CL_AddDebugLine(pos, &end, &colorBlue, depthTest, duration, 1);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
G_DebugAxisWithColor
==============
*/

void __fastcall G_DebugAxisWithColor(const tmat33_t<vec3_t> *axes, const vec3_t *pos, double length, double colorScale, const int depthTest, int duration)
{
  char v16; 
  char v17; 
  vec3_t end; 
  vec4_t color; 
  vec4_t v77; 
  vec4_t v78; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
    vmovss  xmm2, cs:__real@40000000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm3; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vcomiss xmm0, xmm5
    vmovss  dword ptr [rbp+47h+color+0Ch], xmm5
    vmovss  dword ptr [rbp+47h+var_40+0Ch], xmm5
    vmovss  dword ptr [rbp+47h+var_30+0Ch], xmm5
    vmovaps xmm4, xmm0
  }
  if ( v16 | v17 )
  {
    __asm
    {
      vmulss  xmm2, xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmulss  xmm1, xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
      vmulss  xmm0, xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
      vmovss  dword ptr [rbp+47h+color+8], xmm0
      vmulss  xmm0, xmm4, dword ptr cs:?colorGreen@@3Tvec4_t@@B+8; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+color], xmm2
      vmulss  xmm2, xmm4, dword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+color+4], xmm1
      vmulss  xmm1, xmm4, dword ptr cs:?colorGreen@@3Tvec4_t@@B+4; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+var_40+8], xmm0
      vmulss  xmm0, xmm4, dword ptr cs:?colorBlue@@3Tvec4_t@@B+8; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_40], xmm2
      vmulss  xmm2, xmm4, dword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_40+4], xmm1
      vmulss  xmm1, xmm4, dword ptr cs:?colorBlue@@3Tvec4_t@@B+4; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_30+8], xmm0
      vmovss  dword ptr [rbp+47h+var_30], xmm2
      vmovss  dword ptr [rbp+47h+var_30+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm4, xmm4, cs:__real@bf800000
      vsubss  xmm0, xmm5, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vsubss  xmm0, xmm5, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
      vmovss  dword ptr [rbp+47h+color], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+color+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorGreen@@3Tvec4_t@@B+4; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+color+8], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorGreen@@3Tvec4_t@@B+8; vec4_t const colorGreen
      vmovss  dword ptr [rbp+47h+var_40], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorGreen@@3Tvec4_t@@B+4; vec4_t const colorGreen
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_40+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorGreen@@3Tvec4_t@@B+8; vec4_t const colorGreen
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorBlue@@3Tvec4_t@@B+4; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_40+8], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
      vmulss  xmm1, xmm0, xmm4
      vsubss  xmm0, xmm5, dword ptr cs:?colorBlue@@3Tvec4_t@@B+8; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_30], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorBlue@@3Tvec4_t@@B+4; vec4_t const colorBlue
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+47h+var_30+4], xmm2
      vaddss  xmm2, xmm1, dword ptr cs:?colorBlue@@3Tvec4_t@@B+8; vec4_t const colorBlue
      vmovss  dword ptr [rbp+47h+var_30+8], xmm2
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm6, dword ptr [r14+4]
    vmovss  dword ptr [rbp+47h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm6, dword ptr [r14+8]
    vmovss  dword ptr [rbp+47h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+47h+end+8], xmm1
  }
  CL_AddDebugLine(pos, &end, &color, depthTest, duration, 1);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm6, dword ptr [r14+10h]
    vmovss  dword ptr [rbp+47h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm6, dword ptr [r14+14h]
    vmovss  dword ptr [rbp+47h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+47h+end+8], xmm1
  }
  CL_AddDebugLine(pos, &end, &v77, depthTest, duration, 1);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14+18h]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm6, dword ptr [r14+1Ch]
    vmovss  dword ptr [rbp+47h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm6, dword ptr [r14+20h]
    vmovss  dword ptr [rbp+47h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+47h+end+8], xmm1
  }
  CL_AddDebugLine(pos, &end, &v78, depthTest, duration, 1);
  _R11 = &vars0;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
G_DebugBlameForEntCount
==============
*/
const char *G_DebugBlameForEntCount(bool snapshotOnly)
{
  G_DumpUnreferencedEnts();
  return G_DebugBlameForEntCount_Internal(snapshotOnly);
}

/*
==============
G_DebugBlameForEntCount_Internal
==============
*/
const char *G_DebugBlameForEntCount_Internal(bool snapshotOnly)
{
  ScriptStackTraceRecord *v2; 
  char *v3; 
  ScriptStackTraceRecord *v4; 
  __int64 v5; 
  int v6; 
  __int16 i; 
  const gentity_s *v8; 
  unsigned int v10; 
  const void **v11; 
  __int64 v12; 
  const char *v13; 
  char *v14; 
  __int64 j; 
  const ScriptStackTraceRecord **k; 
  __int64 bSource; 
  __int64 bPosOnLine; 
  scrContext_t *scrContext; 
  int Base; 
  char v22[32744]; 
  char v23; 
  char msg[1024]; 

  v2 = s_entitySpawnCallstack;
  scrContext = ScriptContext_Server();
  v3 = v22;
  v4 = s_entitySpawnCallstack;
  v5 = 2048i64;
  v6 = 0;
  do
  {
    *(_QWORD *)v3 = v4++;
    *((_DWORD *)v3 - 2) = 0;
    v3 += 16;
    --v5;
  }
  while ( v5 );
  for ( i = 0; i < 2048; ++i )
  {
    if ( (unsigned int)i >= 0x800 )
    {
      LODWORD(bPosOnLine) = 2048;
      LODWORD(bSource) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bSource, bPosOnLine) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      if ( !snapshotOnly )
        goto LABEL_25;
      if ( (unsigned int)i >= 0x800 )
      {
        LODWORD(bPosOnLine) = 2048;
        LODWORD(bSource) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bSource, bPosOnLine) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v8 = &g_entities[i];
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING|0x80) ? SV_SnapshotMP_CanClientsSeeEntity(v8) : SV_SnapshotSP_CanClientSeeEntity(v8) )
      {
LABEL_25:
        v10 = 0;
        v11 = (const void **)v22;
        v12 = 0i64;
        while ( memcmp_0(v2, *v11, 0x68ui64) )
        {
          ++v10;
          ++v12;
          v11 += 2;
          if ( v10 >= 0x800 )
            goto LABEL_30;
        }
        ++*(_DWORD *)&v22[16 * v12];
      }
    }
LABEL_30:
    ++v2;
  }
  qsort(&Base, 0x800ui64, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_CompareEntSpawnCallstackRecord);
  v13 = "entities";
  if ( snapshotOnly )
    v13 = "snapshot entities";
  Com_Printf(15, "==============================================\n");
  Com_Printf(15, "Dumping GSC callstacks that spawned the most %s:\n", v13);
  v14 = &v23;
  for ( j = 2047i64; j >= 0; --j )
  {
    if ( *(int *)v14 > 0 )
    {
      memset_0(msg, 0, sizeof(msg));
      Scr_Scr_GetScriptStackTraceFromRecordForCSV(scrContext, msg, 1024, *((const ScriptStackTraceRecord **)v14 + 1));
      Com_Printf(15, "%d spawned from %s\n", *(unsigned int *)v14, msg);
    }
    v14 -= 16;
  }
  Com_Printf(15, "End of dump\n");
  Com_Printf(15, "==============================================\n");
  for ( k = (const ScriptStackTraceRecord **)v22; ; k += 2 )
  {
    if ( *((int *)k - 2) > 0 )
    {
      memset_0(msg, 0, sizeof(msg));
      Scr_GetScriptStackTraceFromRecord(scrContext, msg, 1024, *k, 1, 1, 1);
      if ( msg[0] )
        break;
    }
    if ( (unsigned int)++v6 >= 0x800 )
      return "unknown";
  }
  return j_va("%d %s from\n%s", *(unsigned int *)&v22[16 * v6], v13, msg);
}

/*
==============
G_DebugBox
==============
*/

void __fastcall G_DebugBox(const vec3_t *origin, const Bounds *box, double yaw, const vec4_t *color, int depthTest, int duration)
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
  _RBX = box;
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
  v81 = iEdgePairs;
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
    CL_AddDebugLine(&start + *(_DWORD *)v81, &start + (int)(*v81)[1], color, depthTest, duration, 1);
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
G_DebugBoxOriented
==============
*/
void G_DebugBoxOriented(const vec3_t *origin, const Bounds *box, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
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
  _R12 = origin;
  _ECX = 0;
  _RBX = &start[0].v[2];
  v15 = 0;
  _R15 = box;
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r15+0Ch]
      vxorps  xmm3, xmm4, xmm9
      vmovd   xmm1, ecx
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
      vmovd   xmm1, ecx
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
      vmovd   xmm1, ecx
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm9
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rbx], xmm0
    }
    if ( _RBX - 2 == (float *)&v73 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      _ECX = 0;
    }
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
  v65 = iEdgePairs_0;
  v66 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v65], &start[(*v65)[1]], color, depthTest, duration, 1);
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
G_DebugCapsule
==============
*/

void __fastcall G_DebugCapsule(const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
  }
  G_DebugCylinder(start, end, *(float *)&radius, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm6; radius }
  G_DebugSphere(start, *(float *)&_XMM1, color, depthTest, duration);
  __asm
  {
    vmovaps xmm1, xmm6; radius
    vmovaps xmm6, [rsp+48h+var_18]
  }
  G_DebugSphere(end, *(float *)&_XMM1, color, depthTest, duration);
}

/*
==============
G_DebugCircle
==============
*/

void __fastcall G_DebugCircle(const vec3_t *center, double radius, const vec4_t *color, int depthTest, int onGround, int duration)
{
  vec3_t dir; 

  __asm { vmovaps xmm3, xmm1 }
  if ( onGround )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+58h+dir], xmm0
      vmovss  dword ptr [rsp+58h+dir+4], xmm0
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+58h+dir+8], xmm0
    }
  }
  else
  {
    _RAX = level.clients;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vmovss  xmm2, dword ptr [rcx+4]
      vsubss  xmm1, xmm0, dword ptr [rax+30h]
      vsubss  xmm0, xmm2, dword ptr [rax+34h]
      vmovss  dword ptr [rsp+58h+dir], xmm1
      vmovss  xmm1, dword ptr [rax+1E8h]
      vaddss  xmm2, xmm1, dword ptr [rax+38h]
      vmovss  dword ptr [rsp+58h+dir+4], xmm0
      vmovss  xmm0, dword ptr [rcx+8]
      vsubss  xmm2, xmm0, xmm2
      vmovss  dword ptr [rsp+58h+dir+8], xmm2
    }
  }
  __asm { vmovaps xmm1, xmm3; radius }
  G_DebugCircleEx(center, *(float *)&_XMM1, &dir, color, depthTest, duration);
}

/*
==============
G_DebugCircleEx
==============
*/

void __fastcall G_DebugCircleEx(const vec3_t *center, double radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  unsigned int v44; 
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
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
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
    vmovss  dword ptr [rsp+198h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+198h+src+8], xmm0
    vmovss  dword ptr [rsp+198h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+198h+src+8]
    vmovss  xmm6, dword ptr [rsp+198h+src+4]
    vmovss  xmm5, dword ptr [rsp+198h+dst+8]
    vmovss  xmm4, dword ptr [rsp+198h+dst+4]
    vmovss  xmm10, cs:__real@3ec90fdb
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm0, xmm2, xmm4
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm1, xmm2, dword ptr [rsp+198h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+198h+src]
    vmulss  xmm2, xmm4, dword ptr [rsp+198h+src]
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+198h+dst]
    vsubss  xmm6, xmm2, xmm1
  }
  v44 = 0;
  _RBX = &end[0].v[2];
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
      vmulss  xmm5, xmm8, [rsp+198h+s]
      vmulss  xmm4, xmm8, [rsp+198h+c]
      vmulss  xmm2, xmm4, dword ptr [rsp+198h+dst]
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+198h+dst+4]
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm9, xmm5
      vaddss  xmm3, xmm1, dword ptr [rsi+4]
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+198h+dst+8]
      vmulss  xmm0, xmm6, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi+8]
      vaddss  xmm0, xmm3, xmm2
    }
    ++v44;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx-4], xmm1
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+198h+s], xmm5
      vmovss  [rsp+198h+c], xmm4
    }
  }
  while ( v44 < 0x10 );
  v62 = end;
  v63 = 1;
  v64 = 16i64;
  do
  {
    CL_AddDebugLine(v62++, &end[v63++ & 0xF], color, depthTest, duration, 1);
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
G_DebugCylinder
==============
*/

void __fastcall G_DebugCylinder(const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
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
  G_DebugCircleEx(_RBX, *(float *)&_XMM1, &src, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm8; radius }
  G_DebugCircleEx(_R14, *(float *)&_XMM1, &src, color, depthTest, duration);
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
  CL_AddDebugLine(&starta, &enda, color, depthTest, duration, 1);
  CL_AddDebugLine(&v106, &v102, color, depthTest, duration, 1);
  CL_AddDebugLine(&v107, &v103, color, depthTest, duration, 1);
  CL_AddDebugLine(&v108, &v104, color, depthTest, duration, 1);
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
G_DebugDrawDenseGrid
==============
*/
void G_DebugDrawDenseGrid(const DenseGrid *grid)
{
  char v4; 
  float v10; 
  unsigned int v11; 
  const char *v21; 
  DenseGrid::PageIterator iter; 
  DenseGrid::CellIterator outIter; 
  vec2_t outMin; 
  vec2_t outMax; 
  vec3_t xyz; 
  unsigned int outKeys[32]; 

  if ( DenseGrid::IsInitialized((DenseGrid *)grid) )
  {
    DenseGrid::GetLastAABBQuery((DenseGrid *)grid, &outMin, &outMax);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+140h+outMin]
      vcomiss xmm0, dword ptr [rsp+140h+outMax]
    }
    if ( v4 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outMin+4]
        vcomiss xmm0, dword ptr [rsp+140h+outMax+4]
      }
      if ( v4 )
      {
        G_Debug2DRect(&outMin, &outMax, &colorCyan, 0, 0);
        DenseGrid::FindInAABB((DenseGrid *)grid, &outMin, &outMax, &outIter);
        if ( DenseGrid::CellIterator::Advance(&outIter) )
        {
          __asm
          {
            vmovaps [rsp+140h+var_20], xmm6
            vmovss  xmm6, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vmovaps [rsp+140h+var_30], xmm7
            vmovss  xmm7, cs:__real@3f800000
            vmovss  dword ptr [rsp+140h+xyz+8], xmm0
          }
          v10 = xyz.v[2];
          do
          {
            DenseGrid::GetCellBounds((DenseGrid *)grid, outIter.m_currentCellIndex, &outMin, &outMax);
            G_Debug2DRect(&outMin, &outMax, &colorWhite, 0, 0);
            v11 = 0;
            DenseGrid::PageIterator::Init(&iter, grid, outIter.m_currentCellIndex);
            for ( ; DenseGrid::PageIterator::Advance(&iter); v11 += DenseGrid::PageIterator::GetKeys(&iter, 0x20u, outKeys) )
              ;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+140h+outMax]
              vsubss  xmm1, xmm0, dword ptr [rsp+140h+outMin]
              vmovss  xmm0, dword ptr [rsp+140h+outMax+4]
              vmulss  xmm2, xmm1, xmm6
              vsubss  xmm1, xmm0, dword ptr [rsp+140h+outMin+4]
              vaddss  xmm5, xmm2, dword ptr [rsp+140h+outMin]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rsp+140h+outMin+4]
              vunpcklps xmm0, xmm5, xmm3
            }
            xyz.v[2] = v10;
            __asm { vmovsd  qword ptr [rsp+140h+xyz], xmm0 }
            v21 = j_va("#%d (%d)", outIter.m_currentCellIndex, v11);
            __asm { vmovaps xmm2, xmm7; scale }
            CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v21, 1, 0);
          }
          while ( DenseGrid::CellIterator::Advance(&outIter) );
          __asm
          {
            vmovaps xmm7, [rsp+140h+var_30]
            vmovaps xmm6, [rsp+140h+var_20]
          }
        }
      }
    }
  }
}

/*
==============
G_DebugDrawTriggerModel
==============
*/
void G_DebugDrawTriggerModel(const gentity_s *entity, const vec4_t *color, int depthTest, int duration, bool drawSolid, const vec4_t *interiorColor)
{
  const MapTriggers *v9; 
  const TriggerModel *TriggerModel; 

  _RBX = entity;
  v9 = CM_TriggerSource(entity->s.index.brushModel);
  TriggerModel = CM_GetTriggerModel(_RBX->s.index.brushModel);
  AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&g_debugDrawBrushInfo.transform);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  dword ptr cs:g_debugDrawBrushInfo.transform+24h, xmm0
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  dword ptr cs:g_debugDrawBrushInfo.transform+28h, xmm1
    vmovss  xmm0, dword ptr [rbx+138h]
  }
  g_debugDrawBrushInfo.depthTest = depthTest;
  __asm { vmovss  dword ptr cs:g_debugDrawBrushInfo.transform+2Ch, xmm0 }
  CM_ShowTriggerModelCollision(v9, TriggerModel, &vec3_origin, color, drawSolid, interiorColor, DrawBrushPoly);
}

/*
==============
G_DebugDrawVolumeModel
==============
*/
void G_DebugDrawVolumeModel(const gentity_s *entity, const vec4_t *color, int depthTest, int duration)
{
  if ( entity->r.modelType == 4 )
  {
    G_DebugDrawTriggerModel(entity, color, depthTest, duration, 0, &colorWhite);
  }
  else if ( entity->r.modelType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 792, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_DebugDrawVolumeModel: unsupported volume type") )
  {
    __debugbreak();
  }
}

/*
==============
G_DebugGetEntityModelName
==============
*/
const char *G_DebugGetEntityModelName(const gentity_s *const ent)
{
  DObj *ServerDObjForEnt; 
  const XModel *v3; 

  if ( !ent )
    return "No-Entity";
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    return "No-DObj";
  if ( !ServerDObjForEnt->numModels )
    return "No-Models";
  v3 = *ServerDObjForEnt->models;
  if ( v3 )
    return v3->name;
  else
    return "No-Model-0";
}

/*
==============
G_DebugInfils
==============
*/
void G_DebugInfils()
{
  const dvar_t *v2; 
  __int64 v3; 
  int v4; 
  gentity_s *v7; 
  EntityTagInfo *tagInfo; 
  tmat43_t<vec3_t> parentAxis; 
  tmat33_t<vec3_t> axis; 

  v2 = DCONST_DVARINT_g_debugInfil;
  if ( !DCONST_DVARINT_g_debugInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer >= 0 )
  {
    v3 = 0i64;
    v4 = 0;
    __asm
    {
      vmovaps [rsp+0D8h+var_28], xmm6
      vmovss  xmm6, cs:__real@42480000
      vmovaps [rsp+0D8h+var_38], xmm7
      vmovss  xmm7, cs:__real@42340000
    }
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v4 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v7 = &level.gentities[v3];
      if ( level.gentities[v3].r.isInUse )
      {
        tagInfo = v7->tagInfo;
        if ( tagInfo )
        {
          if ( tagInfo->parent )
          {
            G_CalcTagParentAxis(&level.gentities[v3], &parentAxis);
            __asm { vmovaps xmm2, xmm6; length }
            G_DebugAxis((const tmat33_t<vec3_t> *)&parentAxis, &parentAxis.m[3], *(float *)&_XMM2, 1, 0);
            AnglesToAxis(&v7->r.currentAngles, &axis);
            __asm { vmovaps xmm2, xmm7; length }
            G_DebugAxis(&axis, &v7->r.currentOrigin, *(float *)&_XMM2, 1, 0);
          }
        }
      }
      ++v4;
      ++v3;
    }
    __asm
    {
      vmovaps xmm6, [rsp+0D8h+var_28]
      vmovaps xmm7, [rsp+0D8h+var_38]
    }
  }
}

/*
==============
G_DebugLine
==============
*/
void G_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest)
{
  CL_AddDebugLine(start, end, color, depthTest, 0, 1);
}

/*
==============
G_DebugLineWithArrow
==============
*/
void G_DebugLineWithArrow(const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, int duration)
{
  __int64 v35; 
  __int64 *v36; 
  __int64 v38; 
  vec3_t vec; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v47; 
  vec3_t v48; 
  __m256i v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R12 = endPos;
  CL_AddDebugLine(startPos, endPos, color, 0, duration, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vsubss  xmm7, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [r12+4]
    vsubss  xmm6, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [r12+8]
    vsubss  xmm5, xmm0, dword ptr [rbx+8]
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
    vmovss  dword ptr [rsp+160h+vec], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+160h+vec+8], xmm0
    vmovss  dword ptr [rsp+160h+vec+4], xmm1
  }
  vectoangles(&vec, &angles);
  __asm
  {
    vmovups ymm0, cs:__ymm@3ecccccdbf00000000000000becccccdbf00000000000000000000003f000000
    vmovups xmm1, cs:__xmm@3ecccccd00000000bf00000000000000
    vmovups [rbp+60h+var_A0], ymm0
    vmovss  xmm0, cs:__real@bf000000
    vmovups [rbp+60h+var_80], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+60h+var_70], xmm0
    vmovss  [rbp+60h+var_6C], xmm1
    vmovss  [rbp+60h+var_68], xmm1
  }
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  xmm1, dword ptr [r12+4]
  }
  v35 = 0i64;
  v36 = &v49.m256i_i64[1];
  __asm
  {
    vmovss  [rsp+160h+var_EC], xmm0
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rsp+7Ch], xmm0
  }
  v38 = 5i64;
  __asm { vmovss  dword ptr [rsp+78h], xmm1 }
  do
  {
    MatrixTransformVector43((const vec3_t *)&v49.m256i_i8[v35], &axis, (vec3_t *)((char *)&out + v35));
    v35 += 12i64;
    v36 = (__int64 *)((char *)v36 + 12);
    --v38;
  }
  while ( v38 );
  CL_AddDebugLine(&out, &end, color, 0, duration, 1);
  CL_AddDebugLine(&end, &start, color, 0, duration, 1);
  CL_AddDebugLine(&start, &out, color, 0, duration, 1);
  CL_AddDebugLine(&v47, &v48, color, 0, duration, 1);
  CL_AddDebugLine(&v48, _R12, color, 0, duration, 1);
  CL_AddDebugLine(_R12, &v47, color, 0, duration, 1);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+160h+var_48+8]
    vmovaps xmm7, [rsp+160h+var_58+8]
  }
}

/*
==============
G_DebugLineWithDuration
==============
*/
void G_DebugLineWithDuration(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  CL_AddDebugLine(start, end, color, depthTest, duration, 1);
}

/*
==============
G_DebugLogEntitySpawn
==============
*/
void G_DebugLogEntitySpawn(const gentity_s *ent)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  const scrContext_t *v4; 
  __int64 v5; 
  int v6; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
  v3 = (v2 >> 63) + v2;
  if ( (unsigned int)v3 >= 0x800 )
  {
    v6 = 2048;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = ScriptContext_Server();
  Scr_DoScriptStackTraceToRecord(v4, &s_entitySpawnCallstack[(__int16)v3]);
}

/*
==============
G_DebugPlane
==============
*/

void __fastcall G_DebugPlane(const vec2_t *normal, double dist, const vec3_t *origin, const vec4_t *color, float size, int depthTest, int duration)
{
  vec3_t end; 
  vec3_t v75; 
  vec3_t v76; 
  vec3_t start; 
  char v78; 
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
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm11, [rbp+3Fh+size]
    vmovaps xmm8, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm0
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [r8]
    vmulss  xmm10, xmm5, xmm1
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm1, xmm4, dword ptr [r8+4]
    vaddss  xmm1, xmm1, xmm0
    vsubss  xmm2, xmm8, xmm1
    vmulss  xmm8, xmm11, cs:__real@3f000000
    vdivss  xmm4, xmm2, xmm3
    vaddss  xmm3, xmm8, dword ptr [r8+8]
    vxorps  xmm2, xmm4, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm10, xmm4
    vaddss  xmm5, xmm0, dword ptr [r8]
    vmulss  xmm0, xmm10, xmm2
    vmulss  xmm1, xmm9, xmm4
    vaddss  xmm6, xmm1, dword ptr [r8+4]
    vaddss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm9, xmm2
    vaddss  xmm0, xmm2, xmm6
  }
  _RSI = origin;
  __asm
  {
    vmovss  dword ptr [rbp+3Fh+end+4], xmm0
    vmovss  dword ptr [rbp+3Fh+start], xmm5
    vmovss  dword ptr [rbp+3Fh+start+4], xmm6
    vmovss  dword ptr [rbp+3Fh+start+8], xmm3
    vmovss  dword ptr [rsp+0F0h+end], xmm1
    vmovss  dword ptr [rbp+3Fh+end+8], xmm3
  }
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 1);
  __asm
  {
    vxorps  xmm5, xmm9, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm11, cs:__real@bf000000
    vmulss  xmm0, xmm5, xmm8
    vaddss  xmm0, xmm0, dword ptr [rbp+3Fh+start]
    vmovss  dword ptr [rbp+3Fh+var_B0], xmm0
    vmulss  xmm1, xmm10, xmm8
    vaddss  xmm0, xmm1, dword ptr [rbp+3Fh+start+4]
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+3Fh+var_B0+4], xmm0
    vaddss  xmm0, xmm1, dword ptr [rbp+3Fh+start]
    vmulss  xmm2, xmm10, xmm2
    vaddss  xmm1, xmm2, dword ptr [rbp+3Fh+start+4]
    vmovss  dword ptr [rsp+0F0h+end], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+3Fh+var_B0+8], xmm0
    vmovss  dword ptr [rbp+3Fh+end+8], xmm0
    vmovss  dword ptr [rbp+3Fh+end+4], xmm1
  }
  CL_AddDebugLine(&v75, &end, color, depthTest, duration, 1);
  __asm
  {
    vaddss  xmm1, xmm11, dword ptr [rbp+3Fh+var_B0+8]
    vaddss  xmm0, xmm11, dword ptr [rbp+3Fh+end+8]
    vmovss  dword ptr [rbp+3Fh+var_B0+8], xmm1
    vmovss  dword ptr [rbp+3Fh+end+8], xmm0
  }
  CL_AddDebugLine(&v75, &end, color, depthTest, duration, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+3Fh+var_B0]
    vmovss  xmm1, dword ptr [rbp+3Fh+var_B0+4]
    vmovss  dword ptr [rbp+3Fh+var_A0], xmm0
    vmovss  xmm0, dword ptr [rbp+3Fh+var_B0+8]
    vsubss  xmm2, xmm0, xmm11
    vmovss  dword ptr [rbp+3Fh+var_A0+8], xmm2
    vmovss  dword ptr [rbp+3Fh+var_A0+4], xmm1
  }
  CL_AddDebugLine(&v75, &v76, color, depthTest, duration, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F0h+end]
    vmovss  xmm1, dword ptr [rbp+3Fh+end+4]
    vmovss  dword ptr [rbp+3Fh+var_A0], xmm0
    vmovss  xmm0, dword ptr [rbp+3Fh+end+8]
    vsubss  xmm2, xmm0, xmm11
    vmovss  dword ptr [rbp+3Fh+var_A0+8], xmm2
    vmovss  dword ptr [rbp+3Fh+var_A0+4], xmm1
  }
  CL_AddDebugLine(&end, &v76, color, depthTest, duration, 1);
  _R11 = &v78;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
G_DebugPlayerAnimScript_Print
==============
*/
void G_DebugPlayerAnimScript_Print(int clientNum, const char *msg)
{
  const dvar_t *v2; 
  __int64 v5; 
  __int64 v6; 

  v2 = DVARINT_s_debugPlayerAnimScript;
  if ( DVARINT_s_debugPlayerAnimScript )
  {
    Dvar_CheckFrontendServerThread(DVARINT_s_debugPlayerAnimScript);
    if ( clientNum == v2->current.integer )
    {
      v5 = tls_index;
      if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
        __debugbreak();
      v6 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v5) + 272i64);
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      if ( v6 == *(_QWORD *)&GStatic::ms_gameStatics )
      {
        Com_Printf(19, "(%i) ", (unsigned int)level.time);
        Com_Printf(19, (const char *)&queryFormat, msg);
      }
    }
  }
}

/*
==============
G_DebugPolyWithDuration
==============
*/
void G_DebugPolyWithDuration(int pointCount, const vec3_t *points, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration)
{
  CL_AddDebugPoly(pointCount, points, color, drawOutline, drawBackFace, depthTest, duration, 1);
}

/*
==============
G_DebugPolyWithTransformAndDuration
==============
*/
void G_DebugPolyWithTransformAndDuration(int pointCount, const vec3_t *points, const tmat43_t<vec3_t> *transform, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration)
{
  CL_AddDebugPolyWithTransform(pointCount, points, transform, color, drawOutline, drawBackFace, depthTest, duration, 1);
}

/*
==============
G_DebugSphere
==============
*/

void __fastcall G_DebugSphere(const vec3_t *center, double radius, const vec4_t *color, int depthTest, int duration)
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
  G_DebugCircleEx(center, *(float *)&radius, (const vec3_t *)&v15, color, depthTest, duration);
  __asm { vmovaps xmm1, xmm6; radius }
  G_DebugCircleEx(center, *(float *)&_XMM1, (const vec3_t *)((char *)&v15.m256i_u64[1] + 4), color, depthTest, duration);
  __asm { vmovaps xmm1, xmm6; radius }
  G_DebugCircleEx(center, *(float *)&_XMM1, (const vec3_t *)&v15.m256i_u64[3], color, depthTest, duration);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
G_DebugStar
==============
*/
void G_DebugStar(const vec3_t *point, const vec4_t *color)
{
  CL_AddDebugStar(point, color, 0, 20, 1);
}

/*
==============
G_DebugStarWithDuration
==============
*/
void G_DebugStarWithDuration(const vec3_t *point, const vec4_t *color, int duration)
{
  CL_AddDebugStar(point, color, 0, duration, 1);
}

/*
==============
G_DebugStarWithSize
==============
*/

void __fastcall G_DebugStarWithSize(const vec3_t *point, const vec4_t *color, double size)
{
  float v3; 

  __asm { vmovss  [rsp+38h+var_18], xmm2 }
  CL_AddDebugStarWithSize(point, color, 20, 1, v3);
}

/*
==============
G_DebugStarWithText
==============
*/
void G_DebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize)
{
  float v6; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+fontsize]
    vmovss  [rsp+48h+var_28], xmm0
  }
  CL_AddDebugStarWithText(point, starColor, textColor, string, v6, 0, 0, 1);
}

/*
==============
G_DebugStarWithTextDuration
==============
*/
void G_DebugStarWithTextDuration(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int duration)
{
  float v7; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+fontsize]
    vmovss  [rsp+48h+var_28], xmm0
  }
  CL_AddDebugStarWithText(point, starColor, textColor, string, v7, 0, duration, 1);
}

/*
==============
G_DebugString
==============
*/
void G_DebugString(const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  CL_AddDebugString(point, color, scale, text, 1, duration);
}

/*
==============
G_Debug_EntInfoLine
==============
*/
void G_Debug_EntInfoLine(int entNum, const vec3_t *viewpos, const int filterClientIndex, char *outputString, const unsigned int outputStringSize)
{
  unsigned __int64 v6; 
  gentity_s *GEntity; 
  unsigned __int16 model; 
  XModel *v10; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  unsigned int xmodel; 
  GConfigStrings *ConfigStringSystem; 
  const char *EntityTypeName; 
  scr_string_t classname; 
  const char *v29; 
  scr_string_t script_classname; 
  scr_string_t script_noteworthy; 
  scr_string_t script_linkName; 
  const char *v33; 
  scr_string_t script_linkto; 
  const char *v35; 
  scr_string_t targetname; 
  const char *v37; 
  scr_string_t target; 
  EntityTagInfo *tagInfo; 
  int CanClientSeeEntity; 
  int number; 
  const scrContext_t *v42; 
  __int64 v57; 
  __int64 v58; 
  double v59; 
  __int64 v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *v71; 
  const char *v72; 
  char v74[8]; 
  char dest[512]; 
  char msg[1024]; 

  __asm { vmovaps [rsp+758h+var_48], xmm6 }
  v6 = (unsigned int)filterClientIndex;
  GEntity = G_GetGEntity(entNum);
  _RDI = GEntity;
  if ( (unsigned __int16)(GEntity->s.eType - 8) <= 1u )
  {
    xmodel = GEntity->s.staticState.general.xmodel;
    if ( FX_IsValidFxId(xmodel) )
    {
      ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
      ConfigStringSystem->GetEffectName(ConfigStringSystem, xmodel, dest, 512);
    }
  }
  else
  {
    model = GEntity->model;
    if ( model )
    {
      v10 = G_Utils_GetModel(model);
      Core_strcpy(dest, 0x200ui64, v10->name);
    }
    else if ( _RDI->s.weaponHandle.m_mapEntryId )
    {
      Instance = GWeaponMap::GetInstance();
      Weapon = BgWeaponMap::GetWeapon(Instance, _RDI->s.weaponHandle);
      BG_GetWeaponName(Weapon, dest, 0x200u);
    }
    else
    {
      dest[0] = 0;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+130h]
    vsubss  xmm3, xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rdi+134h]
    vsubss  xmm2, xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rdi+138h]
    vsubss  xmm4, xmm0, dword ptr [rbp+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v71 = GUtils::ms_gUtils->GetDebugTeamName(GUtils::ms_gUtils, _RDI);
  EntityTypeName = BG_GetEntityTypeName((const entityType_s)_RDI->s.eType);
  classname = _RDI->classname;
  v29 = (char *)&queryFormat.fmt + 3;
  v72 = EntityTypeName;
  if ( classname )
    v70 = SL_ConvertToString(classname);
  else
    v70 = (char *)&queryFormat.fmt + 3;
  script_classname = _RDI->script_classname;
  if ( script_classname )
    v69 = SL_ConvertToString(script_classname);
  else
    v69 = (char *)&queryFormat.fmt + 3;
  script_noteworthy = _RDI->script_noteworthy;
  if ( script_noteworthy )
    v68 = SL_ConvertToString(script_noteworthy);
  else
    v68 = (char *)&queryFormat.fmt + 3;
  script_linkName = _RDI->script_linkName;
  if ( script_linkName )
    v33 = SL_ConvertToString(script_linkName);
  else
    v33 = (char *)&queryFormat.fmt + 3;
  script_linkto = _RDI->script_linkto;
  if ( script_linkto )
    v35 = SL_ConvertToString(script_linkto);
  else
    v35 = (char *)&queryFormat.fmt + 3;
  targetname = _RDI->targetname;
  if ( targetname )
    v37 = SL_ConvertToString(targetname);
  else
    v37 = (char *)&queryFormat.fmt + 3;
  target = _RDI->target;
  if ( target )
    v29 = SL_ConvertToString(target);
  tagInfo = _RDI->tagInfo;
  if ( tagInfo )
    Com_sprintf(v74, 5ui64, "%i", (unsigned int)tagInfo->parent->s.number);
  else
    v74[0] = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING|0x80) )
  {
    if ( SV_SnapshotMP_CanClientsSeeEntity(_RDI) )
    {
      if ( (_DWORD)v6 == -1 )
        goto LABEL_51;
      number = _RDI->s.number;
      if ( (unsigned int)v6 >= SvClient::ms_clientCount )
      {
        LODWORD(v57) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 680, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( SvClient::GetClientCount() )", "characterIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v57, SvClient::ms_clientCount) )
          __debugbreak();
        if ( (unsigned int)v6 >= SvClient::ms_clientCount )
        {
          LODWORD(v60) = SvClient::ms_clientCount;
          LODWORD(v58) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 681, ASSERT_TYPE_ASSERT, "(unsigned)( controlClientIndex ) < (unsigned)( SvClient::GetClientCount() )", "controlClientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v58, v60) )
            __debugbreak();
        }
      }
      if ( number == (_DWORD)v6 )
        goto LABEL_51;
      if ( _RDI == (gentity_s *)-1116i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 690, ASSERT_TYPE_ASSERT, "( clientHiddenBits != nullptr )", (const char *)&queryFormat, "clientHiddenBits != nullptr") )
        __debugbreak();
      if ( ((0x80000000 >> (v6 & 0x1F)) & _RDI->clientMask.array[v6 >> 5]) != 0 )
LABEL_51:
        CanClientSeeEntity = 1;
      else
        CanClientSeeEntity = 2;
    }
    else
    {
      CanClientSeeEntity = 0;
    }
  }
  else
  {
    CanClientSeeEntity = SV_SnapshotSP_CanClientSeeEntity(_RDI);
  }
  v42 = ScriptContext_Server();
  memset_0(msg, 0, sizeof(msg));
  Scr_Scr_GetScriptStackTraceFromRecordForCSV(v42, msg, 1024, &s_entitySpawnCallstack[entNum]);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+144h]
    vmovss  xmm1, dword ptr [rdi+140h]
    vmovss  xmm2, dword ptr [rdi+13Ch]
    vmovss  xmm3, dword ptr [rdi+138h]
    vmovss  xmm4, dword ptr [rdi+134h]
    vmovss  xmm5, dword ptr [rdi+130h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+758h+var_6B0], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+758h+var_6B8], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+758h+var_6C0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+758h+var_6C8], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+758h+var_6D0], xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+758h+var_6D8], xmm5
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+758h+var_730], xmm6
  }
  Com_sprintf_truncate(outputString, outputStringSize, "%i,%s,%.0f,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,(%.0f %.0f %.0f),(%.0f %.0f %.0f),%i,%s\n", (unsigned int)entNum, v72, v59, v70, v69, dest, v37, v29, v68, v33, v35, v71, v74, v61, v62, v63, v64, v65, v66, CanClientSeeEntity, msg);
  __asm { vmovaps xmm6, [rsp+758h+var_48] }
}

/*
==============
G_Debug_LogFxInfo
==============
*/
void G_Debug_LogFxInfo(const vec3_t *pos, const unsigned int fxId, const scr_string_t tag)
{
  const dvar_t *v3; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  char v16; 
  GConfigStrings *ConfigStringSystem; 
  const char *v25; 
  const scrContext_t *v38; 
  char *fmt; 
  char *fmta; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  int line; 
  char *filename; 
  char v47[1024]; 

  v3 = DVARINT_fx_dump;
  _RBX = pos;
  if ( DVARINT_fx_dump )
  {
    Dvar_CheckFrontendServerThread(DVARINT_fx_dump);
    if ( v3->current.integer )
    {
      if ( G_IsEntityInUse(0) )
      {
        v7 = DVARINT_fx_dump;
        if ( !DVARINT_fx_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fx_dump") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        integer = v7->current.integer;
        v9 = DVARINT_fx_dump;
        if ( !DVARINT_fx_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fx_dump") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx+4]
          vsubss  xmm3, xmm0, dword ptr [rax+130h]
          vsubss  xmm2, xmm1, dword ptr [rax+134h]
          vmovss  xmm0, dword ptr [rbx+8]
          vsubss  xmm4, xmm0, dword ptr [rax+138h]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm5, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vcomiss xmm5, xmm0
        }
        if ( ((unsigned __int64)(integer * (__int64)v9->current.integer) >> 32 != 0) | v16 )
        {
          ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
          ConfigStringSystem->GetEffectName(ConfigStringSystem, fxId, v47, 1024);
          if ( tag )
          {
            v25 = SL_ConvertToString(tag);
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+8]
              vmovss  xmm1, dword ptr [rbx+4]
              vmovss  xmm2, dword ptr [rbx]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+498h+var_468], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  [rsp+498h+var_470], xmm1
              vmovsd  [rsp+498h+fmt], xmm2
            }
            Com_Printf(7, "PlayFXOnTag: %i \"%s\" (%.2f %.2f %.2f) on tag \"%s\"", fxId, v47, *(double *)&fmt, v41, v43, v25);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+8]
              vmovss  xmm1, dword ptr [rbx+4]
              vmovss  xmm2, dword ptr [rbx]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+498h+var_468], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  [rsp+498h+var_470], xmm1
              vmovsd  [rsp+498h+fmt], xmm2
            }
            Com_Printf(7, "PlayFX: %i \"%s\" (%.2f %.2f %.2f)", fxId, v47, *(double *)&fmta, v42, v44);
          }
          if ( G_Main_IsScriptPlaceRecorded() )
          {
            v38 = ScriptContext_Server();
            Scr_GetLastScriptPlace(v38, &line, (const char **)&filename);
            Com_Printf(7, " at %s:%i", filename, (unsigned int)line);
          }
          Com_Printf(7, "\n");
        }
      }
    }
  }
}

/*
==============
G_Debug_PrintEntityDebugInfoToCSV
==============
*/
void G_Debug_PrintEntityDebugInfoToCSV(const char *filenameSuffix, const int filterClientIndex)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  fileHandle_t *v5; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  char *v16; 
  vec3_t viewpos; 
  char outputString[2048]; 

  v2 = (char *)&queryFormat.fmt + 3;
  if ( *filenameSuffix )
    v2 = "_";
  v16 = j_va("%s%s%s%s", "EntInfo", v2, filenameSuffix, ".csv");
  v3 = v16;
  Com_Printf(15, "Opening file \"%s\" for writing.\n", v16);
  v5 = FS_FOpenTextFileWrite((fileHandle_t *)v16, v4);
  if ( v5 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(15, "Couldn't open file \"%s\" for writing.\n", v16);
  }
  else
  {
    _RDI = DVARVEC3_viewposNow;
    if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsp+898h+viewpos], xmm0
      vmovss  xmm0, dword ptr [rdi+30h]
      vmovss  dword ptr [rsp+898h+viewpos+8], xmm0
      vmovss  dword ptr [rsp+898h+viewpos+4], xmm1
    }
    FS_Write("Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n", 0xAEui64, (fileHandle_t)v5);
    v10 = 0;
    if ( level.num_entities > 0 )
    {
      v11 = 0i64;
      v12 = 0i64;
      do
      {
        if ( v10 >= 0x800 )
        {
          LODWORD(v15) = 2048;
          LODWORD(v14) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v12] )
        {
          G_Debug_EntInfoLine(v10, &viewpos, -1, outputString, 0x800u);
          v13 = -1i64;
          do
            ++v13;
          while ( outputString[v13] );
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 976, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(outputString, v13, (fileHandle_t)v5);
        }
        ++v10;
        ++v12;
        ++v11;
      }
      while ( (int)v10 < level.num_entities );
      v3 = v16;
    }
    FS_FCloseFile((fileHandle_t)v5);
    Com_Printf(15, "Done writing file: %s.\n", v3);
  }
}

/*
==============
G_Debug_PrintEntityDebugInfoToConsole
==============
*/
void G_Debug_PrintEntityDebugInfoToConsole(bool logfileOnly, const int filterClientIndex)
{
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  vec3_t viewpos; 
  char outputString[2048]; 

  _RBX = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsp+898h+viewpos], xmm0
    vmovss  xmm0, dword ptr [rbx+30h]
  }
  v8 = 15;
  __asm { vmovss  dword ptr [rsp+898h+viewpos+4], xmm1 }
  if ( logfileOnly )
    v8 = 6;
  v9 = v8 | 0x20000;
  __asm { vmovss  dword ptr [rsp+898h+viewpos+8], xmm0 }
  Com_Printf(v9, "=====================================================================================\n");
  Com_Printf(v9, "============(entity list begin)\n");
  Com_Printf(v9, "Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n");
  v10 = 0;
  if ( level.num_entities > 0 )
  {
    v11 = 0i64;
    v12 = 0i64;
    do
    {
      if ( v10 >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v11] )
      {
        G_Debug_EntInfoLine(v10, &viewpos, filterClientIndex, outputString, 0x800u);
        Com_Printf(v9, (const char *)&queryFormat, outputString);
      }
      ++v10;
      ++v11;
      ++v12;
    }
    while ( (int)v10 < level.num_entities );
  }
  Com_Printf(v9, "(entity list end)============\n");
  Com_Printf(v9, "=====================================================================================\n");
}

/*
==============
G_Debug_PrintEntityLineWithMessage
==============
*/
void G_Debug_PrintEntityLineWithMessage(int channel, const entityState_t *const entityState, const char *message)
{
  const char *v4; 
  int IsEntityInUse; 
  const char *v7; 
  __int16 number; 
  bool v9; 
  bool CanClientsSeeEntity; 
  gentity_s *GEntity; 
  __int64 ScriptableIndexForEntityNum; 
  unsigned __int16 model; 
  const char *name; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  int v17; 
  const ScriptableDef *def; 
  const char *v19; 
  int v20; 
  const char *v21; 
  unsigned int xmodel; 
  GConfigStrings *ConfigStringSystem; 
  scr_string_t classname; 
  scr_string_t targetname; 
  EntityTagInfo *tagInfo; 
  char *v27; 
  const char *EntityTypeName; 
  char *v29; 
  int v30; 
  __int64 v31; 
  char output[512]; 
  char dest[2048]; 
  __int64 v35[9]; 

  v4 = message;
  IsEntityInUse = G_IsEntityInUse(entityState->number);
  v7 = (char *)&queryFormat.fmt + 3;
  number = 2047;
  v9 = IsEntityInUse != 0;
  CanClientsSeeEntity = 0;
  output[0] = 0;
  if ( !IsEntityInUse )
    goto LABEL_37;
  GEntity = G_GetGEntity(entityState->number);
  if ( !GEntity || GEntity->s.number != entityState->number )
    goto LABEL_37;
  ScriptableIndexForEntityNum = ScriptableSv_GetScriptableIndexForEntityNum(entityState->number);
  if ( (unsigned __int16)(GEntity->s.eType - 8) <= 1u )
  {
    xmodel = GEntity->s.staticState.general.xmodel;
    if ( FX_IsValidFxId(xmodel) )
    {
      ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
      ConfigStringSystem->GetEffectName(ConfigStringSystem, xmodel, output, 512);
    }
    goto LABEL_28;
  }
  model = GEntity->model;
  if ( model )
  {
    name = G_Utils_GetModel(model)->name;
LABEL_25:
    Core_strcpy(output, 0x200ui64, name);
    goto LABEL_28;
  }
  if ( !GEntity->s.weaponHandle.m_mapEntryId )
  {
    if ( entityState->eType == ET_SCRIPTMOVER && (v17 = entityState->lerp.u.anonymous.data[1]) != 0 )
    {
      def = (const ScriptableDef *)G_Utils_GetModel(v17);
      if ( !def )
      {
        v19 = "model";
        v20 = 1255;
        v21 = "( model )";
        goto LABEL_22;
      }
    }
    else
    {
      if ( (_DWORD)ScriptableIndexForEntityNum == -1 )
        goto LABEL_28;
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)ScriptableIndexForEntityNum >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v31) = ScriptableIndexForEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v31, g_scriptableWorldCounts.serverInstanceCount) )
          __debugbreak();
      }
      def = g_scriptableSv_instanceContexts[ScriptableIndexForEntityNum].commonContext.def;
      if ( !def )
      {
        v19 = "scriptableDef";
        v20 = 1261;
        v21 = "( scriptableDef )";
LABEL_22:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", v20, ASSERT_TYPE_ASSERT, v21, (const char *)&queryFormat, v19) )
          __debugbreak();
      }
    }
    name = def->name;
    goto LABEL_25;
  }
  Instance = GWeaponMap::GetInstance();
  Weapon = BgWeaponMap::GetWeapon(Instance, GEntity->s.weaponHandle);
  BG_GetWeaponName(Weapon, output, 0x200u);
LABEL_28:
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING|0x80) )
    CanClientsSeeEntity = SV_SnapshotMP_CanClientsSeeEntity(GEntity);
  else
    CanClientsSeeEntity = SV_SnapshotSP_CanClientSeeEntity(GEntity);
  classname = GEntity->classname;
  if ( classname )
    SL_ConvertToString(classname);
  targetname = GEntity->targetname;
  if ( targetname )
    v7 = SL_ConvertToString(targetname);
  tagInfo = GEntity->tagInfo;
  v4 = message;
  if ( tagInfo )
    number = tagInfo->parent->s.number;
LABEL_37:
  v27 = &dest[Com_sprintf(dest, 0x800ui64, "Entity %d", (unsigned int)entityState->number)];
  EntityTypeName = BG_GetEntityTypeName((const entityType_s)entityState->eType);
  v29 = &v27[Com_sprintf(v27, (char *)v35 - v27, " %s", EntityTypeName)];
  if ( v9 )
  {
    if ( CanClientsSeeEntity )
      goto LABEL_42;
    v30 = Com_sprintf(v29, (char *)v35 - v29, " !CLIENT");
  }
  else
  {
    v30 = Com_sprintf(v29, (char *)v35 - v29, " !INUSE");
  }
  v29 += v30;
LABEL_42:
  if ( output[0] )
    v29 += Com_sprintf(v29, (char *)v35 - v29, ", %s", output);
  if ( v7 && *v7 )
    v29 += Com_sprintf(v29, (char *)v35 - v29, ", targetname %s", v7);
  if ( number != 2047 )
    v29 += Com_sprintf(v29, (char *)v35 - v29, ", link %d", (unsigned int)number);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entityState->lerp.eFlags, ACTIVE, 0x1Eu) )
      Com_sprintf(v29, (char *)v35 - v29, ", NEVERCHANGES");
  }
  Com_Printf(channel, "%s %s\n", dest, v4);
}

/*
==============
G_DrawTriggerGeometry
==============
*/
void G_DrawTriggerGeometry(gentity_s *ent, const vec4_t *color, int depthTest, int duration, bool drawSolid, const vec4_t *interiorColor)
{
  const char *v11; 
  const char *v12; 
  vec3_t start; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 

  _RBX = ent;
  v11 = SL_ConvertToString(ent->classname);
  v12 = v11;
  if ( v11 )
  {
    if ( !strncmp("trigger_radius", v11, 0xEui64) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+134h]
        vmovss  xmm1, dword ptr [rbx+130h]
        vmovss  xmm3, dword ptr [rbx+138h]
        vmovss  xmm2, dword ptr [rbx+10Ch]; radius
        vmovss  dword ptr [rbp+start+4], xmm0
        vmovss  dword ptr [rbp+end+4], xmm0
        vmovss  xmm0, dword ptr [rbx+114h]
        vmovss  dword ptr [rbp+start], xmm1
        vmovss  dword ptr [rbp+end], xmm1
        vmulss  xmm1, xmm0, cs:__real@40000000
        vmovss  dword ptr [rbp+start+8], xmm3
        vaddss  xmm3, xmm1, xmm3
        vmovss  dword ptr [rbp+end+8], xmm3
      }
      G_DebugCylinder(&start, &end, *(float *)&_XMM2, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_rotatable_radius", v12, 0x18ui64) )
    {
      AnglesToAxis(&_RBX->r.currentAngles, &axis);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+130h]
        vmovss  xmm3, dword ptr [rbx+134h]
        vmovss  xmm4, dword ptr [rbx+138h]
        vmovss  xmm0, dword ptr [rbx+114h]
        vmulss  xmm5, xmm0, cs:__real@40000000
        vmulss  xmm1, xmm5, dword ptr [rbp+axis+18h]
        vmovss  dword ptr [rbp+start], xmm2
        vaddss  xmm2, xmm1, xmm2
        vmulss  xmm1, xmm5, dword ptr [rbp+axis+1Ch]
        vmovss  dword ptr [rbp+end], xmm2
        vaddss  xmm2, xmm1, xmm3
        vmulss  xmm1, xmm5, dword ptr [rbp+axis+20h]
        vmovss  dword ptr [rbp+end+4], xmm2
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbp+end+8], xmm2
        vmovss  xmm2, dword ptr [rbx+10Ch]; radius
        vmovss  dword ptr [rbp+start+4], xmm3
        vmovss  dword ptr [rbp+start+8], xmm4
      }
      G_DebugCylinder(&start, &end, *(float *)&_XMM2, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_disk", v12, 0xCui64) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+10Ch]; radius
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+start], xmm0
        vmovss  dword ptr [rbp+start+4], xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rbp+start+8], xmm0
      }
      G_DebugCircleEx(&_RBX->r.currentOrigin, *(float *)&_XMM1, &start, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_", v12, 8ui64) || !strncmp("info_volume", v12, 0xBui64) )
    {
      G_DebugDrawTriggerModel(_RBX, color, depthTest, duration, drawSolid, interiorColor);
    }
  }
}

/*
==============
G_DrawTriggers
==============
*/
void G_DrawTriggers(trigger_draw_type_t drawType)
{
  gentity_s *v15; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v22; 
  scr_string_t v23; 
  const char *string; 
  const dvar_t *v28; 
  bool enabled; 
  int maxclients; 
  __int64 v36; 
  __int64 v41; 
  gentity_s *v42; 
  const dvar_t *v43; 
  char v65; 
  gentity_s *v73; 
  trigger_draw_type_t v74; 
  const dvar_t *v75; 
  bool v76; 
  bool v84; 
  const dvar_t *v85; 
  scrContext_t *v87; 
  float fmt; 
  vec4_t *interiorColor; 
  __int64 v94; 
  bool v95; 
  const char *v101; 
  unsigned int v102; 
  int v103; 
  int v104; 
  vec4_t v105; 
  vec4_t color; 
  vec4_t textColor; 
  char v116; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovups xmm0, cs:__xmm@3f8000003f6666663f6666663f666666
    vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovss  xmm11, cs:__real@3f51b3f2
  }
  v15 = NULL;
  __asm
  {
    vmovups xmmword ptr [rsp+178h+color], xmm0
    vmovups xmmword ptr [rsp+178h+textColor], xmm1
    vxorps  xmm10, xmm10, xmm10
  }
  if ( cg_t::ms_allocatedCount > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v102 = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v103 = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v104 = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v22 = DVARSTR_trigger_drawTargetName;
    v23 = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+6944h]
      vmovss  [rsp+178h+var_12C], xmm0
      vmovss  xmm0, dword ptr [rax+6948h]
      vmovss  [rsp+178h+var_128], xmm0
      vmovss  xmm0, dword ptr [rax+694Ch]
      vmovss  [rsp+178h+var_130], xmm0
    }
    if ( !DVARSTR_trigger_drawTargetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawTargetName") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    string = v22->current.string;
    v101 = string;
    if ( *string )
      v23 = SL_GetString(string, 0);
    v28 = DVARBOOL_trigger_drawSolid;
    if ( !DVARBOOL_trigger_drawSolid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawSolid") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    enabled = v28->current.enabled;
    _RBX = DVARVEC4_trigger_drawSolidColor;
    v95 = enabled;
    if ( !DVARVEC4_trigger_drawSolidColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawSolidColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    maxclients = level.maxclients;
    __asm
    {
      vmovss  dword ptr [rsp+178h+var_108], xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rsp+178h+var_108+4], xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rsp+178h+var_108+8], xmm0
      vmovss  xmm1, dword ptr [rbx+34h]
      vmovss  dword ptr [rsp+178h+var_108+0Ch], xmm1
    }
    if ( level.maxclients < level.num_entities )
    {
      __asm
      {
        vmovaps [rsp+178h+var_38], xmm6
        vmovaps [rsp+178h+var_48], xmm7
      }
      v36 = level.maxclients;
      __asm
      {
        vmovaps [rsp+178h+var_58], xmm8
        vmovaps [rsp+178h+var_68], xmm9
        vmovaps [rsp+178h+var_98], xmm12
        vmovss  xmm12, cs:__real@3f800000
        vmovaps [rsp+178h+var_A8], xmm13
        vmovss  xmm13, [rsp+178h+var_110]
        vmovaps [rsp+178h+var_B8], xmm14
        vmovss  xmm14, [rsp+178h+var_114]
        vmovaps [rsp+178h+var_C8], xmm15
        vmovss  xmm15, [rsp+178h+var_118]
      }
      v41 = level.maxclients;
      while ( 1 )
      {
        if ( (unsigned int)maxclients >= 0x800 )
        {
          LODWORD(v94) = 2048;
          LODWORD(interiorColor) = maxclients;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", interiorColor, v94) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v41].r.isInUse != g_entityIsInUse[v36] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v36] && (v42 = &g_entities[v41], G_IsTriggerModelType(&g_entities[v41])) && (!v23 || v23 == v42->targetname) )
        {
          v43 = DVARINT_trigger_drawDistance;
          _R12 = &v42->r.currentOrigin;
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vmovss  xmm1, dword ptr [r12+4]
            vsubss  xmm6, xmm0, xmm15
            vmovss  xmm0, dword ptr [r12+8]
            vsubss  xmm5, xmm1, xmm14
            vsubss  xmm4, xmm0, xmm13
            vmulss  xmm1, xmm6, xmm6
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm7, xmm2, xmm2
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm12, xmm0
            vdivss  xmm1, xmm12, xmm0
            vmulss  xmm6, xmm1, xmm6
            vmulss  xmm8, xmm1, xmm5
            vmulss  xmm9, xmm1, xmm4
          }
          if ( !DVARINT_trigger_drawDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v43);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
            vcomiss xmm7, xmm0
          }
          if ( v84 | v65 )
          {
            CL_AddDebugStar(&v42->r.currentOrigin, &colorRed, 0, 20, 1);
            __asm
            {
              vmulss  xmm1, xmm6, [rsp+178h+var_12C]
              vmulss  xmm0, xmm8, [rsp+178h+var_128]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm9, [rsp+178h+var_130]
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, xmm11
              vcmpltss xmm0, xmm11, xmm3
              vblendvps xmm1, xmm10, xmm7, xmm0
            }
            v73 = v42;
            if ( v84 | v65 )
              v73 = v15;
            v15 = v73;
            v74 = drawType;
            __asm
            {
              vmaxss  xmm11, xmm3, xmm11
              vmovaps xmm10, xmm1
              vmovss  [rsp+178h+var_124], xmm1
            }
            if ( drawType == TRIGGER_DRAW_ALL )
            {
              v75 = DVARBOOL_trigger_drawDepthTest;
              if ( !DVARBOOL_trigger_drawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDepthTest") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v75);
              v76 = v95;
              G_DrawTriggerGeometry(v42, &color, v75->current.color[0], 0, v95, &v105);
              v74 = drawType;
              goto LABEL_48;
            }
          }
          else
          {
            v74 = drawType;
          }
          v76 = v95;
        }
        else
        {
          v76 = v95;
          v74 = drawType;
        }
LABEL_48:
        ++maxclients;
        ++v36;
        ++v41;
        if ( maxclients >= level.num_entities )
        {
          __asm
          {
            vmovaps xmm15, [rsp+178h+var_C8]
            vmovaps xmm14, [rsp+178h+var_B8]
            vmovaps xmm13, [rsp+178h+var_A8]
            vmovaps xmm12, [rsp+178h+var_98]
            vmovaps xmm9, [rsp+178h+var_68]
            vmovaps xmm8, [rsp+178h+var_58]
            vmovaps xmm7, [rsp+178h+var_48]
          }
          if ( v15 )
          {
            v84 = v74 == TRIGGER_DRAW_NONE;
            if ( v74 == TRIGGER_DRAW_SELECTED )
            {
              v85 = DVARBOOL_trigger_drawDepthTest;
              if ( !DVARBOOL_trigger_drawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDepthTest") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v85);
              G_DrawTriggerGeometry(v15, &color, v85->current.color[0], 0, v76, &v105);
            }
            __asm { vcomiss xmm10, cs:__real@41200000 }
            if ( v84 )
              __asm { vmovss  xmm6, cs:__real@3c8f5c29 }
            else
              __asm { vmulss  xmm6, xmm10, cs:__real@3ae56042 }
            v87 = ScriptContext_Server();
            __asm { vmovss  dword ptr [rsp+178h+fmt], xmm6 }
            Scr_DrawDebugVariablesForEntity(v87, v15->s.number, &v15->r.currentOrigin, &textColor, fmt);
          }
          __asm { vmovaps xmm6, [rsp+178h+var_38] }
          break;
        }
      }
    }
    if ( *v101 )
      SL_RemoveRefToString(v23);
  }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-70h]
    vmovaps xmm11, xmmword ptr [r11-80h]
  }
}

/*
==============
G_DumpUnreferencedEnts
==============
*/
void G_DumpUnreferencedEnts(void)
{
  char *m_ptr; 
  const scrContext_t *v1; 
  int v2; 
  int *v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned __int64 next; 
  unsigned int v11; 
  __int16 v12; 
  __int64 v13; 
  ScriptStackTraceRecord *v14; 
  gentity_s *v15; 
  __int64 v16; 
  const void **v17; 
  char *v18; 
  __int64 v19; 
  const char *v20; 
  const ScriptStackTraceRecord **v21; 
  __int64 v22; 
  const char *v23; 
  int v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  char *Base; 
  Mem_LargeLocal v33; 
  scrContext_t scrContext; 
  vec3_t viewpos; 
  int v36[64]; 
  char msg[1024]; 
  char outputString[2048]; 

  Mem_LargeLocal::Mem_LargeLocal(&v33, 0x8000ui64, "RecordArray records");
  m_ptr = (char *)v33.m_ptr;
  Base = (char *)v33.m_ptr;
  v1 = ScriptContext_Server();
  scrContext_t::scrContext_t(&scrContext, v1);
  v2 = 0;
  v3 = v36;
  v4 = 4i64;
  do
  {
    *(_QWORD *)v3 = 0i64;
    *((_QWORD *)v3 + 1) = 0i64;
    *((_QWORD *)v3 + 2) = 0i64;
    v3 += 16;
    *((_QWORD *)v3 - 5) = 0i64;
    *((_QWORD *)v3 - 4) = 0i64;
    *((_QWORD *)v3 - 3) = 0i64;
    *((_QWORD *)v3 - 2) = 0i64;
    *((_QWORD *)v3 - 1) = 0i64;
    --v4;
  }
  while ( v4 );
  v5 = 1;
  if ( scrContext.m_variableListParentSize > 1 )
  {
    do
    {
      if ( __PAIR16__(BYTE1(scrContext.m_varGlob.objectVariableValue[v5].w.type), scrContext.m_varGlob.objectVariableValue[v5].w.type) == 23 )
      {
        next = scrContext.m_varGlob.objectVariableValue[v5].u.f.next;
        if ( (unsigned int)next >= 0x800 )
        {
          LODWORD(v29) = 2048;
          LODWORD(v28) = scrContext.m_varGlob.objectVariableValue[v5].u.f.next;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
            __debugbreak();
        }
        v36[next >> 5] |= 0x80000000 >> (next & 0x1F);
      }
      ++v5;
    }
    while ( v5 < scrContext.m_variableListParentSize );
    m_ptr = Base;
  }
  _RDI = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+0F32E8h+viewpos], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsp+0F32E8h+viewpos+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+0F32E8h+viewpos+8], xmm0
  }
  v30 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0i64;
  v31 = 0i64;
  v14 = s_entitySpawnCallstack;
  do
  {
    if ( (unsigned int)v12 >= 0x800 )
    {
      LODWORD(v27) = 2048;
      LODWORD(v26) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v12 & 0x1F)) & v36[(unsigned __int64)(unsigned int)v12 >> 5]) == 0 )
    {
      v15 = g_entities;
      if ( G_IsEntityInUse(v12) )
      {
        if ( v14->entryCount && v15[v31].s.eType < ET_EVENTS )
        {
          ++v30;
          G_Debug_EntInfoLine(v12, &viewpos, -1, outputString, 0x800u);
          if ( v30 == 1 )
            Com_Printf(15, "======== dumpUnreferencedEnts raw dump begin\nWARNING: Problem,%s", "Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n");
          Com_Printf(15, "WARNING: Script does not reference ent, %s", outputString);
          v16 = 0i64;
          if ( v13 <= 0 )
          {
LABEL_28:
            if ( v11 >= 0x800 )
            {
              LODWORD(v27) = 2048;
              LODWORD(v26) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 1720, ASSERT_TYPE_ASSERT, "(unsigned)( recordCount ) < (unsigned)( ( sizeof( *array_counter( records ) ) + 0 ) )", "recordCount doesn't index ARRAY_COUNT( records )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            v18 = m_ptr;
            ++v11;
            ++v13;
            m_ptr += 16;
            *((_DWORD *)v18 + 1) = 0;
            *(_DWORD *)v18 = 1;
            *((_QWORD *)v18 + 1) = v14;
          }
          else
          {
            v17 = (const void **)Base;
            while ( memcmp_0(v17[1], v14, 0x68ui64) )
            {
              ++v16;
              v17 += 2;
              if ( v16 >= v13 )
                goto LABEL_28;
            }
            ++*(_DWORD *)v17;
          }
        }
      }
    }
    ++v12;
    ++v31;
    ++v14;
  }
  while ( v12 < 2048 );
  if ( v30 <= 0 )
  {
    Com_Printf(15, "dumpUnreferencedEnts could not find any ents that GSC spawned but forgot - hooray!\n");
  }
  else
  {
    Com_Printf(15, "======== dumpUnreferencedEnts raw dump end\n");
    Com_Printf(15, "======== dumpUnreferencedEnts unique callstacks dump begin\n");
    qsort(Base, (int)v11, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_CompareEntSpawnCallstackRecord);
    v19 = (int)(v11 - 1);
    v20 = "ERROR: ";
    if ( (int)(v11 - 1) >= 0 )
    {
      v21 = (const ScriptStackTraceRecord **)&Base[16 * (v11 - 1)];
      do
      {
        memset_0(msg, 0, sizeof(msg));
        Scr_Scr_GetScriptStackTraceFromRecordForCSV(&scrContext, msg, 1024, v21[1]);
        v22 = *(unsigned int *)v21;
        v23 = "WARNING: ";
        if ( (int)v22 > 1 )
          v23 = "ERROR: ";
        Com_Printf(15, "%s%d unreferenced ents spawned from callstack: %s\n", v23, v22, msg);
        v24 = *(_DWORD *)v21;
        if ( v2 > *(_DWORD *)v21 )
          v24 = v2;
        v2 = v24;
        v21 -= 2;
        --v19;
      }
      while ( v19 >= 0 );
    }
    Com_Printf(15, "======== dumpUnreferencedEnts unique callstacks dump end\n");
    if ( v2 <= 1 )
    {
      v20 = "WARNING: ";
      if ( v2 != 1 )
        v20 = (char *)&queryFormat.fmt + 3;
    }
    LODWORD(fmt) = v2;
    Com_Printf(15, "%sFound total of %d unreferenced ents, including %d from a single callstack\n", v20, (unsigned int)v30, fmt);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v33);
}

/*
==============
G_IsServerGameSystem
==============
*/
__int64 G_IsServerGameSystem(int clientNum)
{
  const dvar_t *v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = DVARINT_s_debugPlayerAnimScript;
  if ( !DVARINT_s_debugPlayerAnimScript )
    return 0i64;
  Dvar_CheckFrontendServerThread(DVARINT_s_debugPlayerAnimScript);
  if ( clientNum != v1->current.integer )
    return 0i64;
  v3 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v4 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 272i64);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  if ( v4 != *(_QWORD *)&GStatic::ms_gameStatics )
    return 0i64;
  Com_Printf(19, "(%i) ", (unsigned int)level.time);
  return 1i64;
}

/*
==============
G_LogDebugEntInfo
==============
*/
void G_LogDebugEntInfo(gentity_s *ent)
{
  int eType; 

  if ( g_startedCounting )
  {
    eType = ent->s.eType;
    if ( eType >= 29 )
      eType = 29;
    ++*((_DWORD *)g_entLogCountWorking + eType);
  }
}

/*
==============
G_LogDebugEntInfoEnd
==============
*/

void __fastcall G_LogDebugEntInfoEnd(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  int *v3; 
  int v4; 
  __int64 v5; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v38; 
  int v40; 
  bool v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int *v51; 

  if ( g_startedCounting )
  {
    v3 = (int *)g_entLogCountWorking;
    if ( !g_entLogCountWorking )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 1096, ASSERT_TYPE_ASSERT, "(g_entLogCountWorking)", (const char *)&queryFormat, "g_entLogCountWorking") )
        __debugbreak();
      v3 = (int *)g_entLogCountWorking;
    }
    v4 = v3[30];
    v3[31] = g_fxEntsCount;
    v5 = 0i64;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      __asm
      {
        vpaddd  xmm1, xmm1, xmmword ptr [rax+rcx*4]
        vpaddd  xmm2, xmm2, xmmword ptr [rax+rcx*4+10h]
      }
      v5 += 8i64;
    }
    while ( v5 <= 23 );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   ecx, xmm0
    }
    v14 = _ECX + v4;
    v15 = 24i64;
    v3[30] = v14;
    do
      v14 += v3[v15++];
    while ( v15 <= 28 );
    v3[30] = v14;
    v16 = g_entLogHighPrivate[0];
    if ( g_entLogHighPrivate[0] < *v3 )
      v16 = *v3;
    g_entLogHighPrivate[0] = v16;
    v17 = g_entLogHighPrivate[1];
    if ( g_entLogHighPrivate[1] < v3[1] )
      v17 = v3[1];
    g_entLogHighPrivate[1] = v17;
    v18 = g_entLogHighPrivate[2];
    if ( g_entLogHighPrivate[2] < v3[2] )
      v18 = v3[2];
    g_entLogHighPrivate[2] = v18;
    v19 = g_entLogHighPrivate[3];
    if ( g_entLogHighPrivate[3] < v3[3] )
      v19 = v3[3];
    g_entLogHighPrivate[3] = v19;
    v20 = g_entLogHighPrivate[4];
    if ( g_entLogHighPrivate[4] < v3[4] )
      v20 = v3[4];
    g_entLogHighPrivate[4] = v20;
    v21 = g_entLogHighPrivate[5];
    if ( g_entLogHighPrivate[5] < v3[5] )
      v21 = v3[5];
    g_entLogHighPrivate[5] = v21;
    v22 = g_entLogHighPrivate[6];
    if ( g_entLogHighPrivate[6] < v3[6] )
      v22 = v3[6];
    g_entLogHighPrivate[6] = v22;
    v23 = g_entLogHighPrivate[7];
    if ( g_entLogHighPrivate[7] < v3[7] )
      v23 = v3[7];
    g_entLogHighPrivate[7] = v23;
    v24 = g_entLogHighPrivate[8];
    if ( g_entLogHighPrivate[8] < v3[8] )
      v24 = v3[8];
    g_entLogHighPrivate[8] = v24;
    v25 = g_entLogHighPrivate[9];
    if ( g_entLogHighPrivate[9] < v3[9] )
      v25 = v3[9];
    g_entLogHighPrivate[9] = v25;
    v26 = g_entLogHighPrivate[10];
    if ( g_entLogHighPrivate[10] < v3[10] )
      v26 = v3[10];
    g_entLogHighPrivate[10] = v26;
    v27 = g_entLogHighPrivate[11];
    if ( g_entLogHighPrivate[11] < v3[11] )
      v27 = v3[11];
    g_entLogHighPrivate[11] = v27;
    v28 = g_entLogHighPrivate[12];
    if ( g_entLogHighPrivate[12] < v3[12] )
      v28 = v3[12];
    g_entLogHighPrivate[12] = v28;
    v29 = g_entLogHighPrivate[13];
    if ( g_entLogHighPrivate[13] < v3[13] )
      v29 = v3[13];
    g_entLogHighPrivate[13] = v29;
    v30 = g_entLogHighPrivate[14];
    if ( g_entLogHighPrivate[14] < v3[14] )
      v30 = v3[14];
    g_entLogHighPrivate[14] = v30;
    v31 = g_entLogHighPrivate[15];
    if ( g_entLogHighPrivate[15] < v3[15] )
      v31 = v3[15];
    g_entLogHighPrivate[15] = v31;
    v32 = g_entLogHighPrivate[16];
    if ( g_entLogHighPrivate[16] < v3[16] )
      v32 = v3[16];
    g_entLogHighPrivate[16] = v32;
    v33 = g_entLogHighPrivate[17];
    if ( g_entLogHighPrivate[17] < v3[17] )
      v33 = v3[17];
    g_entLogHighPrivate[17] = v33;
    v34 = g_entLogHighPrivate[18];
    if ( g_entLogHighPrivate[18] < v3[18] )
      v34 = v3[18];
    g_entLogHighPrivate[18] = v34;
    v35 = g_entLogHighPrivate[19];
    if ( g_entLogHighPrivate[19] < v3[19] )
      v35 = v3[19];
    g_entLogHighPrivate[19] = v35;
    v36 = g_entLogHighPrivate[20];
    __asm { vmovups ymm0, ymmword ptr cs:g_entLogHighPrivate }
    if ( g_entLogHighPrivate[20] < v3[20] )
      v36 = v3[20];
    g_entLogHighPrivate[20] = v36;
    v38 = g_entLogHighPrivate[21];
    __asm { vmovups ymm1, ymmword ptr cs:g_entLogHighPrivate+20h }
    if ( g_entLogHighPrivate[21] < v3[21] )
      v38 = v3[21];
    g_entLogHighPrivate[21] = v38;
    v40 = g_entLogHighPrivate[22];
    v41 = g_entLogHighPrivate[22] < v3[22];
    g_entLogCountStable = v3;
    if ( v41 )
      v40 = v3[22];
    g_entLogHighPrivate[22] = v40;
    v42 = g_entLogHighPrivate[23];
    v41 = g_entLogHighPrivate[23] < v3[23];
    g_startedCounting = 0;
    if ( v41 )
      v42 = v3[23];
    g_entLogHighPrivate[23] = v42;
    v43 = g_entLogHighPrivate[24];
    if ( g_entLogHighPrivate[24] < v3[24] )
      v43 = v3[24];
    g_entLogHighPrivate[24] = v43;
    v44 = g_entLogHighPrivate[25];
    if ( g_entLogHighPrivate[25] < v3[25] )
      v44 = v3[25];
    g_entLogHighPrivate[25] = v44;
    v45 = g_entLogHighPrivate[26];
    if ( g_entLogHighPrivate[26] < v3[26] )
      v45 = v3[26];
    g_entLogHighPrivate[26] = v45;
    v46 = g_entLogHighPrivate[27];
    if ( g_entLogHighPrivate[27] < v3[27] )
      v46 = v3[27];
    g_entLogHighPrivate[27] = v46;
    v47 = g_entLogHighPrivate[28];
    if ( g_entLogHighPrivate[28] < v3[28] )
      v47 = v3[28];
    g_entLogHighPrivate[28] = v47;
    v48 = g_entLogHighPrivate[29];
    if ( g_entLogHighPrivate[29] < v3[29] )
      v48 = v3[29];
    g_entLogHighPrivate[29] = v48;
    v49 = g_entLogHighPrivate[30];
    if ( g_entLogHighPrivate[30] < v3[30] )
      v49 = v3[30];
    g_entLogHighPrivate[30] = v49;
    v50 = g_entLogHighPrivate[31];
    if ( g_entLogHighPrivate[31] < v3[31] )
      v50 = v3[31];
    g_entLogHighPrivate[31] = v50;
    v51 = g_entLogCountA;
    __asm
    {
      vmovups ymmword ptr cs:g_entLogHighPublic, ymm0
      vmovups ymm0, ymmword ptr cs:g_entLogHighPrivate+40h
      vmovups ymmword ptr cs:g_entLogHighPublic+20h, ymm1
      vmovups ymm1, ymmword ptr cs:g_entLogHighPrivate+60h
    }
    if ( v3 == g_entLogCountA )
      v51 = g_entLogCountB;
    g_entLogCountWorking = v51;
    __asm
    {
      vmovups ymmword ptr cs:g_entLogHighPublic+40h, ymm0
      vmovups ymmword ptr cs:g_entLogHighPublic+60h, ymm1
    }
  }
}

/*
==============
G_LogDebugEntInfoInit
==============
*/
void G_LogDebugEntInfoInit(void)
{
  int *v0; 
  __int64 i; 

  g_entLogCountStable = NULL;
  g_entLogCountWorking = g_entLogCountA;
  memset_0(g_entLogHighPrivate, 0, sizeof(g_entLogHighPrivate));
  v0 = g_entLogCountLimits;
  for ( i = 29i64; i; --i )
    *v0++ = 2048;
  g_entLogCountLimits[29] = 2048;
  g_entLogCountLimits[30] = 2048;
  g_entLogCountLimits[31] = Com_GameMode_SupportsFeature(WEAPON_DETONATING) ? 0x500 : 0;
}

/*
==============
G_LogDebugEntInfoResults
==============
*/

char __fastcall G_LogDebugEntInfoResults(double _XMM0_8, double _XMM1_8, double _XMM2_8)
{
  int *v3; 
  const char **v5; 
  int v6; 
  __int64 v7; 
  const char *v9; 
  int v10; 
  int v11; 
  const char *v18; 
  int v19; 
  int v20; 
  const char *v27; 
  int v28; 
  int v29; 
  const char *v36; 
  int v37; 
  int v38; 

  v3 = g_entLogCountStable;
  if ( !g_entLogCountStable )
    return 0;
  v5 = &g_gEntityTypeNames[2];
  v6 = 0;
  v7 = 0i64;
  _RDX = &g_debugEntInfoSummary[1].countHighest;
  do
  {
    if ( v6 > 28 )
    {
      if ( v6 == 29 )
      {
        v9 = "ET_EVENTS";
      }
      else if ( v6 == 30 )
      {
        v9 = "Total Standard Ents";
      }
      else
      {
        v9 = "FX-Entities";
      }
    }
    else
    {
      v9 = *(v5 - 2);
    }
    v10 = g_entLogHighPublic[v7];
    *(_QWORD *)(_RDX - 11) = v9;
    *(_RDX - 9) = v3[v7];
    v11 = g_entLogCountLimits[v7];
    *(_RDX - 8) = v10;
    *(_RDX - 7) = v11;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
    }
    if ( v11 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r8+r11]
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx-18h], xmm2 }
    if ( v11 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9d
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx-14h], xmm2 }
    if ( v6 >= 28 )
    {
      if ( v6 == 28 )
      {
        v18 = "ET_EVENTS";
      }
      else if ( v6 == 29 )
      {
        v18 = "Total Standard Ents";
      }
      else
      {
        v18 = "FX-Entities";
        if ( v6 != 30 )
          v18 = "UNKNOWN";
      }
    }
    else
    {
      v18 = *(v5 - 1);
    }
    v19 = g_entLogHighPublic[v7 + 1];
    *(_QWORD *)(_RDX - 3) = v18;
    *(_RDX - 1) = v3[v7 + 1];
    v20 = g_entLogCountLimits[v7 + 1];
    *_RDX = v19;
    _RDX[1] = v20;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
    }
    if ( v20 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r11+r8+4]
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+8], xmm2 }
    if ( v20 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9d
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+0Ch], xmm2 }
    if ( v6 + 2 > 28 )
    {
      if ( v6 == 27 )
      {
        v27 = "ET_EVENTS";
      }
      else if ( v6 == 28 )
      {
        v27 = "Total Standard Ents";
      }
      else
      {
        v27 = "FX-Entities";
        if ( v6 != 29 )
          v27 = "UNKNOWN";
      }
    }
    else
    {
      v27 = *v5;
    }
    v28 = g_entLogHighPublic[v7 + 2];
    *(_QWORD *)(_RDX + 5) = v27;
    _RDX[7] = v3[v7 + 2];
    v29 = g_entLogCountLimits[v7 + 2];
    _RDX[8] = v28;
    _RDX[9] = v29;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
    }
    if ( v29 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r11+r8+8]
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+28h], xmm2 }
    if ( v29 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9d
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+2Ch], xmm2 }
    if ( v6 + 3 > 28 )
    {
      if ( v6 == 26 )
      {
        v36 = "ET_EVENTS";
      }
      else if ( v6 == 27 )
      {
        v36 = "Total Standard Ents";
      }
      else
      {
        v36 = "FX-Entities";
        if ( v6 != 28 )
          v36 = "UNKNOWN";
      }
    }
    else
    {
      v36 = v5[1];
    }
    v37 = g_entLogHighPublic[v7 + 3];
    *(_QWORD *)(_RDX + 13) = v36;
    _RDX[15] = v3[v7 + 3];
    v38 = g_entLogCountLimits[v7 + 3];
    _RDX[16] = v37;
    _RDX[17] = v38;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
    }
    if ( v38 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r11+r8+0Ch]
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+48h], xmm2 }
    if ( v38 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9d
        vdivss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    __asm { vmovss  dword ptr [rdx+4Ch], xmm2 }
    _RDX += 32;
    v6 += 4;
    v5 += 4;
    v7 += 4i64;
  }
  while ( v6 < 32 );
  return 1;
}

/*
==============
G_LogDebugEntInfoStart
==============
*/
void G_LogDebugEntInfoStart(void)
{
  const dvar_t *v0; 

  v0 = DVARINT_debugOverlay;
  if ( DVARINT_debugOverlay )
  {
    Dvar_CheckFrontendServerThread(DVARINT_debugOverlay);
    if ( v0->current.integer == 3 )
    {
      if ( !g_entLogCountWorking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 1082, ASSERT_TYPE_ASSERT, "(g_entLogCountWorking)", (const char *)&queryFormat, "g_entLogCountWorking") )
        __debugbreak();
      memset_0(g_entLogCountWorking, 0, 0x80ui64);
      g_startedCounting = 1;
    }
  }
}

