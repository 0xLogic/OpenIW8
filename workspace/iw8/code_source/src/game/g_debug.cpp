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
  vec3_t start; 
  vec3_t end; 
  vec3_t v15; 
  vec3_t v16; 

  _XMM5 = LODWORD(min->v[0]);
  _XMM3 = LODWORD(max->v[0]);
  __asm { vunpcklps xmm0, xmm5, xmm2 }
  *(double *)start.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm3, xmm2 }
  start.v[2] = 0.0;
  *(double *)end.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm3, xmm2 }
  end.v[2] = 0.0;
  *(double *)v15.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm5, xmm2 }
  v15.v[2] = 0.0;
  *(double *)v16.v = *(double *)&_XMM0;
  v16.v[2] = 0.0;
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 1);
  CL_AddDebugLine(&end, &v15, color, depthTest, duration, 1);
  CL_AddDebugLine(&v15, &v16, color, depthTest, duration, 1);
  CL_AddDebugLine(&v16, &start, color, depthTest, duration, 1);
}

/*
==============
G_DebugArc
==============
*/
void G_DebugArc(const vec3_t *center, float radius, float angle0, float angle1, const vec4_t *color, int depthTest, int duration)
{
  float v8; 
  float v9; 
  unsigned int v10; 
  float *v11; 
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
  v10 = 0;
  v11 = &start.v[1];
  do
  {
    v12 = (float)v10;
    FastSinCos((float)((float)(v12 * v9) + v8) * 0.017453292, s, &c);
    v13 = radius * s[0];
    v14 = center->v[2];
    ++v10;
    *(v11 - 1) = (float)(radius * c) + center->v[0];
    v11 += 3;
    *(v11 - 3) = v13 + center->v[1];
    *(v11 - 2) = v14;
  }
  while ( v10 < 0x10 );
  p_start = &start;
  v16 = 15i64;
  do
  {
    v17 = p_start + 1;
    CL_AddDebugLine(p_start, p_start + 1, color, depthTest, duration, 1);
    p_start = v17;
    --v16;
  }
  while ( v16 );
}

/*
==============
G_DebugArrow
==============
*/
void G_DebugArrow(const vec3_t *pos, const vec3_t *angles, const vec4_t *color, int duration)
{
  float v7; 
  __int64 v8; 
  __int64 *v9; 
  __int64 v10; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v15; 
  vec3_t v16; 
  __m256i v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 

  v17 = _ymm;
  v18 = _xmm;
  v20 = 0.0;
  v21 = 0.0;
  v19 = FLOAT_N0_5;
  AnglesToAxis(angles, (tmat33_t<vec3_t> *)&axis);
  v7 = pos->v[1];
  v8 = 0i64;
  v9 = &v17.m256i_i64[1];
  axis.m[3].v[0] = pos->v[0];
  axis.m[3].v[2] = pos->v[2];
  v10 = 5i64;
  axis.m[3].v[1] = v7;
  do
  {
    MatrixTransformVector43((const vec3_t *)&v17.m256i_i8[v8], &axis, (vec3_t *)((char *)&out + v8));
    v8 += 12i64;
    v9 = (__int64 *)((char *)v9 + 12);
    --v10;
  }
  while ( v10 );
  CL_AddDebugLine(&out, &end, color, 0, duration, 1);
  CL_AddDebugLine(&end, &start, color, 0, duration, 1);
  CL_AddDebugLine(&start, &out, color, 0, duration, 1);
  CL_AddDebugLine(&v15, &v16, color, 0, duration, 1);
  CL_AddDebugLine(&v16, pos, color, 0, duration, 1);
  CL_AddDebugLine(pos, &v15, color, 0, duration, 1);
}

/*
==============
G_DebugAxis
==============
*/
void G_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
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
  CL_AddDebugLine(pos, &end, &colorRed, depthTest, duration, 1);
  v10 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v11 = length * axes->m[1].v[2];
  end.v[1] = v10 + pos->v[1];
  end.v[2] = v11 + pos->v[2];
  CL_AddDebugLine(pos, &end, &colorGreen, depthTest, duration, 1);
  v12 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v13 = length * axes->m[2].v[2];
  end.v[1] = v12 + pos->v[1];
  end.v[2] = v13 + pos->v[2];
  CL_AddDebugLine(pos, &end, &colorBlue, depthTest, duration, 1);
}

/*
==============
G_DebugAxisWithColor
==============
*/
void G_DebugAxisWithColor(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, float colorScale, const int depthTest, int duration)
{
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t end; 
  vec4_t color; 
  vec4_t v17; 
  vec4_t v18; 

  v8 = I_fclamp(colorScale, 0.0, 2.0);
  color.v[3] = FLOAT_1_0;
  v17.v[3] = FLOAT_1_0;
  v18.v[3] = FLOAT_1_0;
  if ( *(float *)&v8 > 1.0 )
  {
    color.v[0] = (float)((float)(1.0 - 1.0) * (float)(*(float *)&v8 + -1.0)) + 1.0;
    color.v[1] = (float)((float)(1.0 - 0.0) * (float)(*(float *)&v8 + -1.0)) + 0.0;
    color.v[2] = color.v[1];
    v17.v[0] = color.v[1];
    v17.v[1] = color.v[0];
    v17.v[2] = color.v[1];
    v18.v[0] = color.v[1];
    v18.v[1] = color.v[1];
    v18.v[2] = color.v[0];
  }
  else
  {
    color.v[2] = *(float *)&v8 * 0.0;
    color.v[0] = *(float *)&v8 * 1.0;
    color.v[1] = *(float *)&v8 * 0.0;
    v17.v[2] = *(float *)&v8 * 0.0;
    v17.v[0] = *(float *)&v8 * 0.0;
    v17.v[1] = *(float *)&v8 * 1.0;
    v18.v[2] = *(float *)&v8 * 1.0;
    v18.v[0] = *(float *)&v8 * 0.0;
    v18.v[1] = *(float *)&v8 * 0.0;
  }
  v9 = length * axes->m[0].v[1];
  end.v[0] = (float)(length * axes->m[0].v[0]) + pos->v[0];
  v10 = length * axes->m[0].v[2];
  end.v[1] = v9 + pos->v[1];
  end.v[2] = v10 + pos->v[2];
  CL_AddDebugLine(pos, &end, &color, depthTest, duration, 1);
  v11 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v12 = length * axes->m[1].v[2];
  end.v[1] = v11 + pos->v[1];
  end.v[2] = v12 + pos->v[2];
  CL_AddDebugLine(pos, &end, &v17, depthTest, duration, 1);
  v13 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v14 = length * axes->m[2].v[2];
  end.v[1] = v13 + pos->v[1];
  end.v[2] = v14 + pos->v[2];
  CL_AddDebugLine(pos, &end, &v18, depthTest, duration, 1);
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
void G_DebugBox(const vec3_t *origin, const Bounds *box, float yaw, const vec4_t *color, int depthTest, int duration)
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
  v10 = box->midPoint.v[0] - box->halfSize.v[0];
  v11 = box->midPoint.v[0] + box->halfSize.v[0];
  v12 = box->midPoint.v[2];
  v13 = v12 - box->halfSize.v[2];
  v14 = origin->v[0];
  v15 = box->midPoint.v[1];
  v16 = v15 - box->halfSize.v[1];
  v17 = v15 + box->halfSize.v[1];
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
  v22 = v12 + box->halfSize.v[2];
  v23 = origin->v[2];
  v36 = v21;
  v38 = v14 + (float)((float)(v10 * c[0]) - (float)(v16 * s));
  v39 = v20 + (float)((float)(v10 * s) + (float)(v16 * c[0]));
  v24 = iEdgePairs;
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
    CL_AddDebugLine(&start + *(_DWORD *)v24, &start + (int)(*v24)[1], color, depthTest, duration, 1);
    ++v24;
    --v25;
  }
  while ( v25 );
}

/*
==============
G_DebugBoxOriented
==============
*/
void G_DebugBoxOriented(const vec3_t *origin, const Bounds *box, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
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
    _XMM4 = LODWORD(box->halfSize.v[0]);
    v12 = v7 - 2;
    _XMM0 = i & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(box->halfSize.v[1]);
    *(v7 - 2) = *(float *)&_XMM1 + box->midPoint.v[0];
    _XMM0 = i & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(box->halfSize.v[2]);
    *(v7 - 1) = *(float *)&_XMM1 + box->midPoint.v[1];
    _XMM0 = i & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    *v7 = *(float *)&_XMM1 + box->midPoint.v[2];
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
  v32 = iEdgePairs_0;
  v33 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v32], &start[(*v32)[1]], color, depthTest, duration, 1);
    ++v32;
    --v33;
  }
  while ( v33 );
}

/*
==============
G_DebugCapsule
==============
*/
void G_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  G_DebugCylinder(start, end, radius, color, depthTest, duration);
  G_DebugSphere(start, radius, color, depthTest, duration);
  G_DebugSphere(end, radius, color, depthTest, duration);
}

/*
==============
G_DebugCircle
==============
*/
void G_DebugCircle(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int onGround, int duration)
{
  float v6; 
  float v7; 
  vec3_t dir; 

  if ( onGround )
  {
    dir.v[0] = 0.0;
    dir.v[1] = 0.0;
    dir.v[2] = FLOAT_1_0;
  }
  else
  {
    v6 = center->v[1] - level.clients->ps.origin.v[1];
    dir.v[0] = center->v[0] - level.clients->ps.origin.v[0];
    v7 = level.clients->ps.viewHeightCurrent + level.clients->ps.origin.v[2];
    dir.v[1] = v6;
    dir.v[2] = center->v[2] - v7;
  }
  G_DebugCircleEx(center, radius, &dir, color, depthTest, duration);
}

/*
==============
G_DebugCircleEx
==============
*/
void G_DebugCircleEx(const vec3_t *center, float radius, const vec3_t *dir, const vec4_t *color, int depthTest, int duration)
{
  float v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  float *v20; 
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
  v18 = (float)(dst.v[1] * src.v[0]) - (float)(src.v[1] * dst.v[0]);
  v19 = 0;
  v20 = &end[0].v[2];
  do
  {
    v21 = (float)v19;
    FastSinCos(v21 * 0.39269909, &s, &c);
    v22 = radius * s;
    v23 = radius * c;
    v24 = (float)(radius * c) * dst.v[1];
    *(v20 - 2) = (float)((float)(v16 * (float)(radius * s)) + center->v[0]) + (float)((float)(radius * c) * dst.v[0]);
    v25 = (float)((float)(v17 * v22) + center->v[1]) + v24;
    ++v19;
    *v20 = (float)((float)(v18 * v22) + center->v[2]) + (float)(v23 * dst.v[2]);
    *(v20 - 1) = v25;
    v20 += 3;
    s = v22;
    c = v23;
  }
  while ( v19 < 0x10 );
  v26 = end;
  v27 = 1;
  v28 = 16i64;
  do
  {
    CL_AddDebugLine(v26++, &end[v27++ & 0xF], color, depthTest, duration, 1);
    --v28;
  }
  while ( v28 );
}

/*
==============
G_DebugCylinder
==============
*/
void G_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
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
  G_DebugCircleEx(start, radius, &src, color, depthTest, duration);
  G_DebugCircleEx(end, radius, &src, color, depthTest, duration);
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
  CL_AddDebugLine(&starta, &enda, color, depthTest, duration, 1);
  CL_AddDebugLine(&v43, &v39, color, depthTest, duration, 1);
  CL_AddDebugLine(&v44, &v40, color, depthTest, duration, 1);
  CL_AddDebugLine(&v45, &v41, color, depthTest, duration, 1);
}

/*
==============
G_DebugDrawDenseGrid
==============
*/
void G_DebugDrawDenseGrid(const DenseGrid *grid)
{
  unsigned int v2; 
  __int128 v3; 
  const char *v6; 
  DenseGrid::PageIterator iter; 
  DenseGrid::CellIterator outIter; 
  vec2_t outMin; 
  vec2_t outMax; 
  vec3_t xyz; 
  unsigned int outKeys[32]; 

  if ( DenseGrid::IsInitialized((DenseGrid *)grid) )
  {
    DenseGrid::GetLastAABBQuery((DenseGrid *)grid, &outMin, &outMax);
    if ( outMin.v[0] < outMax.v[0] && outMin.v[1] < outMax.v[1] )
    {
      G_Debug2DRect(&outMin, &outMax, &colorCyan, 0, 0);
      DenseGrid::FindInAABB((DenseGrid *)grid, &outMin, &outMax, &outIter);
      if ( DenseGrid::CellIterator::Advance(&outIter) )
      {
        xyz.v[2] = 0.0;
        do
        {
          DenseGrid::GetCellBounds((DenseGrid *)grid, outIter.m_currentCellIndex, &outMin, &outMax);
          G_Debug2DRect(&outMin, &outMax, &colorWhite, 0, 0);
          v2 = 0;
          DenseGrid::PageIterator::Init(&iter, grid, outIter.m_currentCellIndex);
          for ( ; DenseGrid::PageIterator::Advance(&iter); v2 += DenseGrid::PageIterator::GetKeys(&iter, 0x20u, outKeys) )
            ;
          v3 = LODWORD(outMax.v[0]);
          *(float *)&v3 = (float)((float)(outMax.v[0] - outMin.v[0]) * 0.5) + outMin.v[0];
          _XMM5 = v3;
          __asm { vunpcklps xmm0, xmm5, xmm3 }
          xyz.v[2] = 0.0;
          *(double *)xyz.v = *(double *)&_XMM0;
          v6 = j_va("#%d (%d)", outIter.m_currentCellIndex, v2);
          CL_AddDebugString(&xyz, &colorWhite, 1.0, v6, 1, 0);
        }
        while ( DenseGrid::CellIterator::Advance(&outIter) );
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
  float v11; 

  v9 = CM_TriggerSource(entity->s.index.brushModel);
  TriggerModel = CM_GetTriggerModel(entity->s.index.brushModel);
  AnglesToAxis(&entity->r.currentAngles, (tmat33_t<vec3_t> *)&g_debugDrawBrushInfo.transform);
  *(_QWORD *)g_debugDrawBrushInfo.transform.row3.v = *(_QWORD *)entity->r.currentOrigin.v;
  v11 = entity->r.currentOrigin.v[2];
  g_debugDrawBrushInfo.depthTest = depthTest;
  g_debugDrawBrushInfo.transform.m[3].v[2] = v11;
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
void G_DebugInfils(void)
{
  const dvar_t *v0; 
  __int64 v1; 
  int i; 
  gentity_s *v3; 
  EntityTagInfo *tagInfo; 
  tmat43_t<vec3_t> parentAxis; 
  tmat33_t<vec3_t> axis; 

  v0 = DCONST_DVARINT_g_debugInfil;
  if ( !DCONST_DVARINT_g_debugInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer >= 0 )
  {
    v1 = 0i64;
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v3 = &level.gentities[v1];
      if ( level.gentities[v1].r.isInUse )
      {
        tagInfo = v3->tagInfo;
        if ( tagInfo )
        {
          if ( tagInfo->parent )
          {
            G_CalcTagParentAxis(&level.gentities[v1], &parentAxis);
            G_DebugAxis((const tmat33_t<vec3_t> *)&parentAxis, &parentAxis.m[3], 50.0, 1, 0);
            AnglesToAxis(&v3->r.currentAngles, &axis);
            G_DebugAxis(&axis, &v3->r.currentOrigin, 45.0, 1, 0);
          }
        }
      }
      ++v1;
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
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v15; 
  __int64 v16; 
  __int64 *v17; 
  __int64 v18; 
  vec3_t vec; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v25; 
  vec3_t v26; 
  __m256i v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v31; 

  CL_AddDebugLine(startPos, endPos, color, 0, duration, 1);
  v8 = endPos->v[0] - startPos->v[0];
  v10 = LODWORD(endPos->v[1]);
  v9 = endPos->v[1] - startPos->v[1];
  v11 = endPos->v[2] - startPos->v[2];
  *(float *)&v10 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v11 * v11));
  _XMM4 = v10;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  vec.v[0] = v8 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = v11 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v9 * (float)(1.0 / *(float *)&_XMM0);
  vectoangles(&vec, &angles);
  v27 = _ymm;
  v28 = _xmm;
  v29 = FLOAT_N0_5;
  v30 = 0.0;
  v31 = 0.0;
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  v15 = endPos->v[1];
  v16 = 0i64;
  v17 = &v27.m256i_i64[1];
  axis.m[3].v[0] = endPos->v[0];
  axis.m[3].v[2] = endPos->v[2];
  v18 = 5i64;
  axis.m[3].v[1] = v15;
  do
  {
    MatrixTransformVector43((const vec3_t *)&v27.m256i_i8[v16], &axis, (vec3_t *)((char *)&out + v16));
    v16 += 12i64;
    v17 = (__int64 *)((char *)v17 + 12);
    --v18;
  }
  while ( v18 );
  CL_AddDebugLine(&out, &end, color, 0, duration, 1);
  CL_AddDebugLine(&end, &start, color, 0, duration, 1);
  CL_AddDebugLine(&start, &out, color, 0, duration, 1);
  CL_AddDebugLine(&v25, &v26, color, 0, duration, 1);
  CL_AddDebugLine(&v26, endPos, color, 0, duration, 1);
  CL_AddDebugLine(endPos, &v25, color, 0, duration, 1);
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
void G_DebugPlane(const vec2_t *normal, float dist, const vec3_t *origin, const vec4_t *color, float size, int depthTest, int duration)
{
  __int128 v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t end; 
  vec3_t v18; 
  vec3_t v19; 
  vec3_t start; 

  v7 = LODWORD(normal->v[1]);
  v8 = v7;
  *(float *)&v8 = fsqrt((float)(*(float *)&v7 * *(float *)&v7) + (float)(normal->v[0] * normal->v[0]));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v12 = normal->v[0] * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v8 = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v7 = (float)(dist - (float)((float)(*(float *)&v7 * origin->v[1]) + (float)(normal->v[0] * origin->v[0]))) / *(float *)&_XMM3;
  *(float *)&_XMM3 = (float)(size * 0.5) + origin->v[2];
  v13 = (float)(v12 * *(float *)&v7) + origin->v[0];
  v14 = (float)(*(float *)&v8 * *(float *)&v7) + origin->v[1];
  end.v[1] = (float)(*(float *)&v8 * COERCE_FLOAT(v7 ^ _xmm)) + v14;
  start.v[0] = v13;
  start.v[1] = v14;
  start.v[2] = *(float *)&_XMM3;
  end.v[0] = (float)(v12 * COERCE_FLOAT(v7 ^ _xmm)) + v13;
  end.v[2] = *(float *)&_XMM3;
  CL_AddDebugLine(&start, &end, color, depthTest, duration, 1);
  v18.v[0] = (float)(COERCE_FLOAT(v8 ^ _xmm) * (float)(size * 0.5)) + start.v[0];
  v18.v[1] = (float)(v12 * (float)(size * 0.5)) + start.v[1];
  end.v[0] = (float)(COERCE_FLOAT(v8 ^ _xmm) * (float)(size * -0.5)) + start.v[0];
  v18.v[2] = origin->v[2];
  end.v[2] = v18.v[2];
  end.v[1] = (float)(v12 * (float)(size * -0.5)) + start.v[1];
  CL_AddDebugLine(&v18, &end, color, depthTest, duration, 1);
  v18.v[2] = size + v18.v[2];
  end.v[2] = size + end.v[2];
  CL_AddDebugLine(&v18, &end, color, depthTest, duration, 1);
  v19.v[0] = v18.v[0];
  v19.v[2] = v18.v[2] - size;
  v19.v[1] = v18.v[1];
  CL_AddDebugLine(&v18, &v19, color, depthTest, duration, 1);
  v19.v[0] = end.v[0];
  v19.v[2] = end.v[2] - size;
  v19.v[1] = end.v[1];
  CL_AddDebugLine(&end, &v19, color, depthTest, duration, 1);
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
void G_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  __m256i v8; 
  float v9; 

  v9 = FLOAT_1_0;
  v8 = _ymm;
  G_DebugCircleEx(center, radius, (const vec3_t *)&v8, color, depthTest, duration);
  G_DebugCircleEx(center, radius, (const vec3_t *)((char *)&v8.m256i_u64[1] + 4), color, depthTest, duration);
  G_DebugCircleEx(center, radius, (const vec3_t *)&v8.m256i_u64[3], color, depthTest, duration);
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
void G_DebugStarWithSize(const vec3_t *point, const vec4_t *color, float size)
{
  CL_AddDebugStarWithSize(point, color, 20, 1, size);
}

/*
==============
G_DebugStarWithText
==============
*/
void G_DebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize)
{
  CL_AddDebugStarWithText(point, starColor, textColor, string, fontsize, 0, 0, 1);
}

/*
==============
G_DebugStarWithTextDuration
==============
*/
void G_DebugStarWithTextDuration(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int duration)
{
  CL_AddDebugStarWithText(point, starColor, textColor, string, fontsize, 0, duration, 1);
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
  gentity_s *v8; 
  unsigned __int16 model; 
  XModel *v10; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  unsigned int xmodel; 
  GConfigStrings *ConfigStringSystem; 
  float v15; 
  float v16; 
  float v17; 
  const char *EntityTypeName; 
  scr_string_t classname; 
  const char *v20; 
  scr_string_t script_classname; 
  scr_string_t script_noteworthy; 
  scr_string_t script_linkName; 
  const char *v24; 
  scr_string_t script_linkto; 
  const char *v26; 
  scr_string_t targetname; 
  const char *v28; 
  scr_string_t target; 
  EntityTagInfo *tagInfo; 
  int CanClientSeeEntity; 
  int number; 
  const scrContext_t *v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  char v44[8]; 
  char dest[512]; 
  char msg[1024]; 

  v6 = (unsigned int)filterClientIndex;
  GEntity = G_GetGEntity(entNum);
  v8 = GEntity;
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
    else if ( v8->s.weaponHandle.m_mapEntryId )
    {
      Instance = GWeaponMap::GetInstance();
      Weapon = BgWeaponMap::GetWeapon(Instance, v8->s.weaponHandle);
      BG_GetWeaponName(Weapon, dest, 0x200u);
    }
    else
    {
      dest[0] = 0;
    }
  }
  v15 = v8->r.currentOrigin.v[1] - viewpos->v[1];
  v16 = v8->r.currentOrigin.v[2] - viewpos->v[2];
  v17 = fsqrt((float)((float)(v15 * v15) + (float)((float)(v8->r.currentOrigin.v[0] - viewpos->v[0]) * (float)(v8->r.currentOrigin.v[0] - viewpos->v[0]))) + (float)(v16 * v16));
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v41 = GUtils::ms_gUtils->GetDebugTeamName(GUtils::ms_gUtils, v8);
  EntityTypeName = BG_GetEntityTypeName((const entityType_s)v8->s.eType);
  classname = v8->classname;
  v20 = (char *)&queryFormat.fmt + 3;
  v42 = EntityTypeName;
  if ( classname )
    v40 = SL_ConvertToString(classname);
  else
    v40 = (char *)&queryFormat.fmt + 3;
  script_classname = v8->script_classname;
  if ( script_classname )
    v39 = SL_ConvertToString(script_classname);
  else
    v39 = (char *)&queryFormat.fmt + 3;
  script_noteworthy = v8->script_noteworthy;
  if ( script_noteworthy )
    v38 = SL_ConvertToString(script_noteworthy);
  else
    v38 = (char *)&queryFormat.fmt + 3;
  script_linkName = v8->script_linkName;
  if ( script_linkName )
    v24 = SL_ConvertToString(script_linkName);
  else
    v24 = (char *)&queryFormat.fmt + 3;
  script_linkto = v8->script_linkto;
  if ( script_linkto )
    v26 = SL_ConvertToString(script_linkto);
  else
    v26 = (char *)&queryFormat.fmt + 3;
  targetname = v8->targetname;
  if ( targetname )
    v28 = SL_ConvertToString(targetname);
  else
    v28 = (char *)&queryFormat.fmt + 3;
  target = v8->target;
  if ( target )
    v20 = SL_ConvertToString(target);
  tagInfo = v8->tagInfo;
  if ( tagInfo )
    Com_sprintf(v44, 5ui64, "%i", (unsigned int)tagInfo->parent->s.number);
  else
    v44[0] = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING|0x80) )
  {
    if ( SV_SnapshotMP_CanClientsSeeEntity(v8) )
    {
      if ( (_DWORD)v6 == -1 )
        goto LABEL_51;
      number = v8->s.number;
      if ( (unsigned int)v6 >= SvClient::ms_clientCount )
      {
        LODWORD(v34) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 680, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( SvClient::GetClientCount() )", "characterIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v34, SvClient::ms_clientCount) )
          __debugbreak();
        if ( (unsigned int)v6 >= SvClient::ms_clientCount )
        {
          LODWORD(v36) = SvClient::ms_clientCount;
          LODWORD(v35) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 681, ASSERT_TYPE_ASSERT, "(unsigned)( controlClientIndex ) < (unsigned)( SvClient::GetClientCount() )", "controlClientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
      }
      if ( number == (_DWORD)v6 )
        goto LABEL_51;
      if ( v8 == (gentity_s *)-1116i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 690, ASSERT_TYPE_ASSERT, "( clientHiddenBits != nullptr )", (const char *)&queryFormat, "clientHiddenBits != nullptr") )
        __debugbreak();
      if ( ((0x80000000 >> (v6 & 0x1F)) & v8->clientMask.array[v6 >> 5]) != 0 )
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
    CanClientSeeEntity = SV_SnapshotSP_CanClientSeeEntity(v8);
  }
  v33 = ScriptContext_Server();
  memset_0(msg, 0, sizeof(msg));
  Scr_Scr_GetScriptStackTraceFromRecordForCSV(v33, msg, 1024, &s_entitySpawnCallstack[entNum]);
  Com_sprintf_truncate(outputString, outputStringSize, "%i,%s,%.0f,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,(%.0f %.0f %.0f),(%.0f %.0f %.0f),%i,%s\n", (unsigned int)entNum, v42, v17, v40, v39, dest, v28, v20, v38, v24, v26, v41, v44, v8->r.currentOrigin.v[0], v8->r.currentOrigin.v[1], v8->r.currentOrigin.v[2], v8->r.currentAngles.v[0], v8->r.currentAngles.v[1], v8->r.currentAngles.v[2], CanClientSeeEntity, msg);
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
  float v10; 
  float v11; 
  GConfigStrings *ConfigStringSystem; 
  const char *v13; 
  const scrContext_t *v14; 
  int line; 
  char *filename; 
  char v17[1024]; 

  v3 = DVARINT_fx_dump;
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
        v10 = pos->v[1] - g_entities->r.currentOrigin.v[1];
        v11 = pos->v[2] - g_entities->r.currentOrigin.v[2];
        if ( (float)((float)((float)(v10 * v10) + (float)((float)(pos->v[0] - g_entities->r.currentOrigin.v[0]) * (float)(pos->v[0] - g_entities->r.currentOrigin.v[0]))) + (float)(v11 * v11)) <= (float)(integer * v9->current.integer) )
        {
          ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
          ConfigStringSystem->GetEffectName(ConfigStringSystem, fxId, v17, 1024);
          if ( tag )
          {
            v13 = SL_ConvertToString(tag);
            Com_Printf(7, "PlayFXOnTag: %i \"%s\" (%.2f %.2f %.2f) on tag \"%s\"", fxId, v17, pos->v[0], pos->v[1], pos->v[2], v13);
          }
          else
          {
            Com_Printf(7, "PlayFX: %i \"%s\" (%.2f %.2f %.2f)", fxId, v17, pos->v[0], pos->v[1], pos->v[2]);
          }
          if ( G_Main_IsScriptPlaceRecorded() )
          {
            v14 = ScriptContext_Server();
            Scr_GetLastScriptPlace(v14, &line, (const char **)&filename);
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
  const dvar_t *v6; 
  float v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  vec3_t viewpos; 
  char outputString[2048]; 

  v2 = (char *)&queryFormat.fmt + 3;
  if ( *filenameSuffix )
    v2 = "_";
  v14 = j_va("%s%s%s%s", "EntInfo", v2, filenameSuffix, ".csv");
  v3 = v14;
  Com_Printf(15, "Opening file \"%s\" for writing.\n", v14);
  v5 = FS_FOpenTextFileWrite((fileHandle_t *)v14, v4);
  if ( v5 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(15, "Couldn't open file \"%s\" for writing.\n", v14);
  }
  else
  {
    v6 = DVARVEC3_viewposNow;
    if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.vector.v[1];
    LODWORD(viewpos.v[0]) = v6->current.integer;
    viewpos.v[2] = v6->current.vector.v[2];
    viewpos.v[1] = v7;
    FS_Write("Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n", 0xAEui64, (fileHandle_t)v5);
    v8 = 0;
    if ( level.num_entities > 0 )
    {
      v9 = 0i64;
      v10 = 0i64;
      do
      {
        if ( v8 >= 0x800 )
        {
          LODWORD(v13) = 2048;
          LODWORD(v12) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v9].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v10] )
        {
          G_Debug_EntInfoLine(v8, &viewpos, -1, outputString, 0x800u);
          v11 = -1i64;
          do
            ++v11;
          while ( outputString[v11] );
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 976, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(outputString, v11, (fileHandle_t)v5);
        }
        ++v8;
        ++v10;
        ++v9;
      }
      while ( (int)v8 < level.num_entities );
      v3 = v14;
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
  const dvar_t *v2; 
  float v5; 
  float v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t viewpos; 
  char outputString[2048]; 

  v2 = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v5 = v2->current.vector.v[1];
  LODWORD(viewpos.v[0]) = v2->current.integer;
  v6 = v2->current.vector.v[2];
  v7 = 15;
  viewpos.v[1] = v5;
  if ( logfileOnly )
    v7 = 6;
  v8 = v7 | 0x20000;
  viewpos.v[2] = v6;
  Com_Printf(v8, "=====================================================================================\n");
  Com_Printf(v8, "============(entity list begin)\n");
  Com_Printf(v8, "Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n");
  v9 = 0;
  if ( level.num_entities > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      if ( v9 >= 0x800 )
      {
        LODWORD(v13) = 2048;
        LODWORD(v12) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v10] )
      {
        G_Debug_EntInfoLine(v9, &viewpos, filterClientIndex, outputString, 0x800u);
        Com_Printf(v8, (const char *)&queryFormat, outputString);
      }
      ++v9;
      ++v10;
      ++v11;
    }
    while ( (int)v9 < level.num_entities );
  }
  Com_Printf(v8, "(entity list end)============\n");
  Com_Printf(v8, "=====================================================================================\n");
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
  const char *v10; 
  const char *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t start; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 

  v10 = SL_ConvertToString(ent->classname);
  v11 = v10;
  if ( v10 )
  {
    if ( !strncmp("trigger_radius", v10, 0xEui64) )
    {
      v12 = ent->r.currentOrigin.v[0];
      v13 = ent->r.currentOrigin.v[2];
      v14 = ent->r.box.halfSize.v[0];
      start.v[1] = ent->r.currentOrigin.v[1];
      end.v[1] = start.v[1];
      v15 = ent->r.box.halfSize.v[2];
      start.v[0] = v12;
      end.v[0] = v12;
      start.v[2] = v13;
      end.v[2] = (float)(v15 * 2.0) + v13;
      G_DebugCylinder(&start, &end, v14, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_rotatable_radius", v11, 0x18ui64) )
    {
      AnglesToAxis(&ent->r.currentAngles, &axis);
      v16 = ent->r.currentOrigin.v[1];
      v17 = ent->r.currentOrigin.v[2];
      v18 = ent->r.box.halfSize.v[2];
      start.v[0] = ent->r.currentOrigin.v[0];
      end.v[0] = (float)((float)(v18 * 2.0) * axis.m[2].v[0]) + start.v[0];
      end.v[1] = (float)((float)(v18 * 2.0) * axis.m[2].v[1]) + v16;
      end.v[2] = (float)((float)(v18 * 2.0) * axis.m[2].v[2]) + v17;
      v19 = ent->r.box.halfSize.v[0];
      start.v[1] = v16;
      start.v[2] = v17;
      G_DebugCylinder(&start, &end, v19, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_disk", v11, 0xCui64) )
    {
      v20 = ent->r.box.halfSize.v[0];
      start.v[0] = 0.0;
      start.v[1] = 0.0;
      start.v[2] = FLOAT_1_0;
      G_DebugCircleEx(&ent->r.currentOrigin, v20, &start, color, depthTest, duration);
    }
    else if ( !strncmp("trigger_", v11, 8ui64) || !strncmp("info_volume", v11, 0xBui64) )
    {
      G_DebugDrawTriggerModel(ent, color, depthTest, duration, drawSolid, interiorColor);
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  gentity_s *v9; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  cg_t *v15; 
  const dvar_t *v16; 
  scr_string_t v17; 
  const char *string; 
  const dvar_t *v19; 
  bool enabled; 
  const dvar_t *v21; 
  int maxclients; 
  __int64 v23; 
  __int64 v24; 
  gentity_s *v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  __int128 v34; 
  float v35; 
  float v36; 
  gentity_s *v40; 
  trigger_draw_type_t v41; 
  const dvar_t *v42; 
  bool v43; 
  const dvar_t *v44; 
  float v45; 
  scrContext_t *v46; 
  vec4_t *interiorColor; 
  __int64 v48; 
  bool v49; 
  float v51; 
  float v52; 
  float v53; 
  const char *v54; 
  float v55; 
  float v56; 
  float v57; 
  vec4_t vector; 
  vec4_t color; 
  vec4_t textColor; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 

  _XMM11 = LODWORD(FLOAT_0_819152);
  v9 = NULL;
  color = (vec4_t)_xmm;
  textColor = (vec4_t)_xmm;
  _XMM10 = 0i64;
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
    LODWORD(v55) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(v56) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(v57) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    v15 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v16 = DVARSTR_trigger_drawTargetName;
    v17 = 0;
    v52 = v15->refdef.view.axis.m[0].v[0];
    v53 = v15->refdef.view.axis.m[0].v[1];
    v51 = v15->refdef.view.axis.m[0].v[2];
    if ( !DVARSTR_trigger_drawTargetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawTargetName") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    string = v16->current.string;
    v54 = string;
    if ( *string )
      v17 = SL_GetString(string, 0);
    v19 = DVARBOOL_trigger_drawSolid;
    if ( !DVARBOOL_trigger_drawSolid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawSolid") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    enabled = v19->current.enabled;
    v21 = DVARVEC4_trigger_drawSolidColor;
    v49 = enabled;
    if ( !DVARVEC4_trigger_drawSolidColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawSolidColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    maxclients = level.maxclients;
    vector = v21->current.vector;
    if ( level.maxclients < level.num_entities )
    {
      v67 = v1;
      v23 = level.maxclients;
      v66 = v2;
      v65 = v3;
      v64 = v4;
      v63 = v5;
      v62 = v6;
      v61 = v7;
      v24 = level.maxclients;
      while ( 1 )
      {
        if ( (unsigned int)maxclients >= 0x800 )
        {
          LODWORD(v48) = 2048;
          LODWORD(interiorColor) = maxclients;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", interiorColor, v48) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v24].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v23] && (v25 = &g_entities[v24], G_IsTriggerModelType(&g_entities[v24])) && (!v17 || v17 == v25->targetname) )
        {
          v26 = DVARINT_trigger_drawDistance;
          v27 = v25->r.currentOrigin.v[0] - v55;
          v29 = LODWORD(v25->r.currentOrigin.v[1]);
          v28 = v25->r.currentOrigin.v[1] - v56;
          v30 = v25->r.currentOrigin.v[2] - v57;
          *(float *)&v29 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v30 * v30));
          _XMM7 = v29;
          __asm
          {
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm12, xmm0
          }
          v34 = LODWORD(FLOAT_1_0);
          *(float *)&v34 = (float)(1.0 / *(float *)&_XMM0) * v27;
          v35 = (float)(1.0 / *(float *)&_XMM0) * v28;
          v36 = (float)(1.0 / *(float *)&_XMM0) * v30;
          if ( !DVARINT_trigger_drawDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v26);
          if ( *(float *)&_XMM7 > (float)v26->current.integer )
          {
            v41 = drawType;
          }
          else
          {
            CL_AddDebugStar(&v25->r.currentOrigin, &colorRed, 0, 20, 1);
            *(float *)&v34 = (float)((float)(*(float *)&v34 * v52) + (float)(v35 * v53)) + (float)(v36 * v51);
            _XMM3 = v34;
            __asm
            {
              vcmpltss xmm0, xmm11, xmm3
              vblendvps xmm1, xmm10, xmm7, xmm0
            }
            v40 = v25;
            if ( *(float *)&v34 <= *(float *)&_XMM11 )
              v40 = v9;
            v9 = v40;
            v41 = drawType;
            __asm { vmaxss  xmm11, xmm3, xmm11 }
            _XMM10 = _XMM1;
            if ( drawType == TRIGGER_DRAW_ALL )
            {
              v42 = DVARBOOL_trigger_drawDepthTest;
              if ( !DVARBOOL_trigger_drawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDepthTest") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v42);
              v43 = v49;
              G_DrawTriggerGeometry(v25, &color, v42->current.color[0], 0, v49, &vector);
              v41 = drawType;
              goto LABEL_48;
            }
          }
          v43 = v49;
        }
        else
        {
          v43 = v49;
          v41 = drawType;
        }
LABEL_48:
        ++maxclients;
        ++v23;
        ++v24;
        if ( maxclients >= level.num_entities )
        {
          if ( v9 )
          {
            if ( v41 == TRIGGER_DRAW_SELECTED )
            {
              v44 = DVARBOOL_trigger_drawDepthTest;
              if ( !DVARBOOL_trigger_drawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_drawDepthTest") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v44);
              G_DrawTriggerGeometry(v9, &color, v44->current.color[0], 0, v43, &vector);
            }
            if ( *(float *)&_XMM10 >= 10.0 )
              v45 = *(float *)&_XMM10 * 0.0017500001;
            else
              v45 = FLOAT_0_0175;
            v46 = ScriptContext_Server();
            Scr_DrawDebugVariablesForEntity(v46, v9->s.number, &v9->r.currentOrigin, &textColor, v45);
          }
          break;
        }
      }
    }
    if ( *v54 )
      SL_RemoveRefToString(v17);
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
  const dvar_t *v7; 
  unsigned int v8; 
  __int16 v9; 
  __int64 v10; 
  ScriptStackTraceRecord *v11; 
  gentity_s *v12; 
  __int64 v13; 
  const void **v14; 
  char *v15; 
  __int64 v16; 
  const char *v17; 
  const ScriptStackTraceRecord **v18; 
  __int64 v19; 
  const char *v20; 
  int v21; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  char *Base; 
  Mem_LargeLocal v30; 
  scrContext_t scrContext; 
  vec3_t viewpos; 
  int v33[64]; 
  char msg[1024]; 
  char outputString[2048]; 

  Mem_LargeLocal::Mem_LargeLocal(&v30, 0x8000ui64, "RecordArray records");
  m_ptr = (char *)v30.m_ptr;
  Base = (char *)v30.m_ptr;
  v1 = ScriptContext_Server();
  scrContext_t::scrContext_t(&scrContext, v1);
  v2 = 0;
  v3 = v33;
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
          LODWORD(v26) = 2048;
          LODWORD(v25) = scrContext.m_varGlob.objectVariableValue[v5].u.f.next;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
            __debugbreak();
        }
        v33[next >> 5] |= 0x80000000 >> (next & 0x1F);
      }
      ++v5;
    }
    while ( v5 < scrContext.m_variableListParentSize );
    m_ptr = Base;
  }
  v7 = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  viewpos = *(vec3_t *)&v7->current.string;
  v27 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0i64;
  v28 = 0i64;
  v11 = s_entitySpawnCallstack;
  do
  {
    if ( (unsigned int)v9 >= 0x800 )
    {
      LODWORD(v24) = 2048;
      LODWORD(v23) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v24) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v9 & 0x1F)) & v33[(unsigned __int64)(unsigned int)v9 >> 5]) == 0 )
    {
      v12 = g_entities;
      if ( G_IsEntityInUse(v9) )
      {
        if ( v11->entryCount && v12[v28].s.eType < ET_EVENTS )
        {
          ++v27;
          G_Debug_EntInfoLine(v9, &viewpos, -1, outputString, 0x800u);
          if ( v27 == 1 )
            Com_Printf(15, "======== dumpUnreferencedEnts raw dump begin\nWARNING: Problem,%s", "Number,Type,Distance,Classname,CodeClassname,Asset,Targetname,Target,ScriptNoteworthy,ScriptLinkname,ScriptLinkTo,Team,ParentNum,Origin,Angles,SentToClient(s),SpawnCallstack\n");
          Com_Printf(15, "WARNING: Script does not reference ent, %s", outputString);
          v13 = 0i64;
          if ( v10 <= 0 )
          {
LABEL_28:
            if ( v8 >= 0x800 )
            {
              LODWORD(v24) = 2048;
              LODWORD(v23) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_debug.cpp", 1720, ASSERT_TYPE_ASSERT, "(unsigned)( recordCount ) < (unsigned)( ( sizeof( *array_counter( records ) ) + 0 ) )", "recordCount doesn't index ARRAY_COUNT( records )\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            v15 = m_ptr;
            ++v8;
            ++v10;
            m_ptr += 16;
            *((_DWORD *)v15 + 1) = 0;
            *(_DWORD *)v15 = 1;
            *((_QWORD *)v15 + 1) = v11;
          }
          else
          {
            v14 = (const void **)Base;
            while ( memcmp_0(v14[1], v11, 0x68ui64) )
            {
              ++v13;
              v14 += 2;
              if ( v13 >= v10 )
                goto LABEL_28;
            }
            ++*(_DWORD *)v14;
          }
        }
      }
    }
    ++v9;
    ++v28;
    ++v11;
  }
  while ( v9 < 2048 );
  if ( v27 <= 0 )
  {
    Com_Printf(15, "dumpUnreferencedEnts could not find any ents that GSC spawned but forgot - hooray!\n");
  }
  else
  {
    Com_Printf(15, "======== dumpUnreferencedEnts raw dump end\n");
    Com_Printf(15, "======== dumpUnreferencedEnts unique callstacks dump begin\n");
    qsort(Base, (int)v8, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_CompareEntSpawnCallstackRecord);
    v16 = (int)(v8 - 1);
    v17 = "ERROR: ";
    if ( (int)(v8 - 1) >= 0 )
    {
      v18 = (const ScriptStackTraceRecord **)&Base[16 * (v8 - 1)];
      do
      {
        memset_0(msg, 0, sizeof(msg));
        Scr_Scr_GetScriptStackTraceFromRecordForCSV(&scrContext, msg, 1024, v18[1]);
        v19 = *(unsigned int *)v18;
        v20 = "WARNING: ";
        if ( (int)v19 > 1 )
          v20 = "ERROR: ";
        Com_Printf(15, "%s%d unreferenced ents spawned from callstack: %s\n", v20, v19, msg);
        v21 = *(_DWORD *)v18;
        if ( v2 > *(_DWORD *)v18 )
          v21 = v2;
        v2 = v21;
        v18 -= 2;
        --v16;
      }
      while ( v16 >= 0 );
    }
    Com_Printf(15, "======== dumpUnreferencedEnts unique callstacks dump end\n");
    if ( v2 <= 1 )
    {
      v17 = "WARNING: ";
      if ( v2 != 1 )
        v17 = (char *)&queryFormat.fmt + 3;
    }
    LODWORD(fmt) = v2;
    Com_Printf(15, "%sFound total of %d unreferenced ents, including %d from a single callstack\n", v17, (unsigned int)v27, fmt);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v30);
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
  int v13; 
  __int64 v14; 
  int v15; 
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
  int v37; 
  bool v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int *v48; 

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
    }
    v13 = _XMM0 + v4;
    v14 = 24i64;
    v3[30] = v13;
    do
      v13 += v3[v14++];
    while ( v14 <= 28 );
    v3[30] = v13;
    v15 = g_entLogHighPrivate[0];
    if ( g_entLogHighPrivate[0] < *v3 )
      v15 = *v3;
    g_entLogHighPrivate[0] = v15;
    v16 = g_entLogHighPrivate[1];
    if ( g_entLogHighPrivate[1] < v3[1] )
      v16 = v3[1];
    g_entLogHighPrivate[1] = v16;
    v17 = g_entLogHighPrivate[2];
    if ( g_entLogHighPrivate[2] < v3[2] )
      v17 = v3[2];
    g_entLogHighPrivate[2] = v17;
    v18 = g_entLogHighPrivate[3];
    if ( g_entLogHighPrivate[3] < v3[3] )
      v18 = v3[3];
    g_entLogHighPrivate[3] = v18;
    v19 = g_entLogHighPrivate[4];
    if ( g_entLogHighPrivate[4] < v3[4] )
      v19 = v3[4];
    g_entLogHighPrivate[4] = v19;
    v20 = g_entLogHighPrivate[5];
    if ( g_entLogHighPrivate[5] < v3[5] )
      v20 = v3[5];
    g_entLogHighPrivate[5] = v20;
    v21 = g_entLogHighPrivate[6];
    if ( g_entLogHighPrivate[6] < v3[6] )
      v21 = v3[6];
    g_entLogHighPrivate[6] = v21;
    v22 = g_entLogHighPrivate[7];
    if ( g_entLogHighPrivate[7] < v3[7] )
      v22 = v3[7];
    g_entLogHighPrivate[7] = v22;
    v23 = g_entLogHighPrivate[8];
    if ( g_entLogHighPrivate[8] < v3[8] )
      v23 = v3[8];
    g_entLogHighPrivate[8] = v23;
    v24 = g_entLogHighPrivate[9];
    if ( g_entLogHighPrivate[9] < v3[9] )
      v24 = v3[9];
    g_entLogHighPrivate[9] = v24;
    v25 = g_entLogHighPrivate[10];
    if ( g_entLogHighPrivate[10] < v3[10] )
      v25 = v3[10];
    g_entLogHighPrivate[10] = v25;
    v26 = g_entLogHighPrivate[11];
    if ( g_entLogHighPrivate[11] < v3[11] )
      v26 = v3[11];
    g_entLogHighPrivate[11] = v26;
    v27 = g_entLogHighPrivate[12];
    if ( g_entLogHighPrivate[12] < v3[12] )
      v27 = v3[12];
    g_entLogHighPrivate[12] = v27;
    v28 = g_entLogHighPrivate[13];
    if ( g_entLogHighPrivate[13] < v3[13] )
      v28 = v3[13];
    g_entLogHighPrivate[13] = v28;
    v29 = g_entLogHighPrivate[14];
    if ( g_entLogHighPrivate[14] < v3[14] )
      v29 = v3[14];
    g_entLogHighPrivate[14] = v29;
    v30 = g_entLogHighPrivate[15];
    if ( g_entLogHighPrivate[15] < v3[15] )
      v30 = v3[15];
    g_entLogHighPrivate[15] = v30;
    v31 = g_entLogHighPrivate[16];
    if ( g_entLogHighPrivate[16] < v3[16] )
      v31 = v3[16];
    g_entLogHighPrivate[16] = v31;
    v32 = g_entLogHighPrivate[17];
    if ( g_entLogHighPrivate[17] < v3[17] )
      v32 = v3[17];
    g_entLogHighPrivate[17] = v32;
    v33 = g_entLogHighPrivate[18];
    if ( g_entLogHighPrivate[18] < v3[18] )
      v33 = v3[18];
    g_entLogHighPrivate[18] = v33;
    v34 = g_entLogHighPrivate[19];
    if ( g_entLogHighPrivate[19] < v3[19] )
      v34 = v3[19];
    g_entLogHighPrivate[19] = v34;
    v35 = g_entLogHighPrivate[20];
    if ( g_entLogHighPrivate[20] < v3[20] )
      v35 = v3[20];
    g_entLogHighPrivate[20] = v35;
    v36 = g_entLogHighPrivate[21];
    if ( g_entLogHighPrivate[21] < v3[21] )
      v36 = v3[21];
    g_entLogHighPrivate[21] = v36;
    v37 = g_entLogHighPrivate[22];
    v38 = g_entLogHighPrivate[22] < v3[22];
    g_entLogCountStable = v3;
    if ( v38 )
      v37 = v3[22];
    g_entLogHighPrivate[22] = v37;
    v39 = g_entLogHighPrivate[23];
    v38 = g_entLogHighPrivate[23] < v3[23];
    g_startedCounting = 0;
    if ( v38 )
      v39 = v3[23];
    g_entLogHighPrivate[23] = v39;
    v40 = g_entLogHighPrivate[24];
    if ( g_entLogHighPrivate[24] < v3[24] )
      v40 = v3[24];
    g_entLogHighPrivate[24] = v40;
    v41 = g_entLogHighPrivate[25];
    if ( g_entLogHighPrivate[25] < v3[25] )
      v41 = v3[25];
    g_entLogHighPrivate[25] = v41;
    v42 = g_entLogHighPrivate[26];
    if ( g_entLogHighPrivate[26] < v3[26] )
      v42 = v3[26];
    g_entLogHighPrivate[26] = v42;
    v43 = g_entLogHighPrivate[27];
    if ( g_entLogHighPrivate[27] < v3[27] )
      v43 = v3[27];
    g_entLogHighPrivate[27] = v43;
    v44 = g_entLogHighPrivate[28];
    if ( g_entLogHighPrivate[28] < v3[28] )
      v44 = v3[28];
    g_entLogHighPrivate[28] = v44;
    v45 = g_entLogHighPrivate[29];
    if ( g_entLogHighPrivate[29] < v3[29] )
      v45 = v3[29];
    g_entLogHighPrivate[29] = v45;
    v46 = g_entLogHighPrivate[30];
    if ( g_entLogHighPrivate[30] < v3[30] )
      v46 = v3[30];
    g_entLogHighPrivate[30] = v46;
    v47 = g_entLogHighPrivate[31];
    if ( g_entLogHighPrivate[31] < v3[31] )
      v47 = v3[31];
    g_entLogHighPrivate[31] = v47;
    v48 = g_entLogCountA;
    *(__m256i *)g_entLogHighPublic = *(__m256i *)g_entLogHighPrivate;
    *(__m256i *)&g_entLogHighPublic[8] = *(__m256i *)&g_entLogHighPrivate[8];
    if ( v3 == g_entLogCountA )
      v48 = g_entLogCountB;
    g_entLogCountWorking = v48;
    *(__m256i *)&g_entLogHighPublic[16] = *(__m256i *)&g_entLogHighPrivate[16];
    *(__m256i *)&g_entLogHighPublic[24] = *(__m256i *)&g_entLogHighPrivate[24];
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
char G_LogDebugEntInfoResults()
{
  int *v0; 
  const char **v2; 
  int v3; 
  __int64 v4; 
  int *p_countHighest; 
  const char *v6; 
  int v7; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  const char *v12; 
  int v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  const char *v18; 
  int v19; 
  int v20; 
  float v21; 
  float v22; 
  float v23; 
  const char *v24; 
  int v25; 
  int v26; 
  float v27; 
  float v28; 
  float v29; 

  v0 = g_entLogCountStable;
  if ( !g_entLogCountStable )
    return 0;
  v2 = &g_gEntityTypeNames[2];
  v3 = 0;
  v4 = 0i64;
  p_countHighest = &g_debugEntInfoSummary[1].countHighest;
  do
  {
    if ( v3 > 28 )
    {
      if ( v3 == 29 )
      {
        v6 = "ET_EVENTS";
      }
      else if ( v3 == 30 )
      {
        v6 = "Total Standard Ents";
      }
      else
      {
        v6 = "FX-Entities";
      }
    }
    else
    {
      v6 = *(v2 - 2);
    }
    v7 = g_entLogHighPublic[v4];
    *(_QWORD *)(p_countHighest - 11) = v6;
    *(p_countHighest - 9) = v0[v4];
    v8 = g_entLogCountLimits[v4];
    *(p_countHighest - 8) = v7;
    *(p_countHighest - 7) = v8;
    v9 = (float)v8;
    if ( v8 )
      v10 = (float)v0[v4] / v9;
    else
      v10 = 0.0;
    *((float *)p_countHighest - 6) = v10;
    if ( v8 )
      v11 = (float)v7 / v9;
    else
      v11 = 0.0;
    *((float *)p_countHighest - 5) = v11;
    if ( v3 >= 28 )
    {
      if ( v3 == 28 )
      {
        v12 = "ET_EVENTS";
      }
      else if ( v3 == 29 )
      {
        v12 = "Total Standard Ents";
      }
      else
      {
        v12 = "FX-Entities";
        if ( v3 != 30 )
          v12 = "UNKNOWN";
      }
    }
    else
    {
      v12 = *(v2 - 1);
    }
    v13 = g_entLogHighPublic[v4 + 1];
    *(_QWORD *)(p_countHighest - 3) = v12;
    *(p_countHighest - 1) = v0[v4 + 1];
    v14 = g_entLogCountLimits[v4 + 1];
    *p_countHighest = v13;
    p_countHighest[1] = v14;
    v15 = (float)v14;
    if ( v14 )
      v16 = (float)v0[v4 + 1] / v15;
    else
      v16 = 0.0;
    *((float *)p_countHighest + 2) = v16;
    if ( v14 )
      v17 = (float)v13 / v15;
    else
      v17 = 0.0;
    *((float *)p_countHighest + 3) = v17;
    if ( v3 + 2 > 28 )
    {
      if ( v3 == 27 )
      {
        v18 = "ET_EVENTS";
      }
      else if ( v3 == 28 )
      {
        v18 = "Total Standard Ents";
      }
      else
      {
        v18 = "FX-Entities";
        if ( v3 != 29 )
          v18 = "UNKNOWN";
      }
    }
    else
    {
      v18 = *v2;
    }
    v19 = g_entLogHighPublic[v4 + 2];
    *(_QWORD *)(p_countHighest + 5) = v18;
    p_countHighest[7] = v0[v4 + 2];
    v20 = g_entLogCountLimits[v4 + 2];
    p_countHighest[8] = v19;
    p_countHighest[9] = v20;
    v21 = (float)v20;
    if ( v20 )
      v22 = (float)v0[v4 + 2] / v21;
    else
      v22 = 0.0;
    *((float *)p_countHighest + 10) = v22;
    if ( v20 )
      v23 = (float)v19 / v21;
    else
      v23 = 0.0;
    *((float *)p_countHighest + 11) = v23;
    if ( v3 + 3 > 28 )
    {
      if ( v3 == 26 )
      {
        v24 = "ET_EVENTS";
      }
      else if ( v3 == 27 )
      {
        v24 = "Total Standard Ents";
      }
      else
      {
        v24 = "FX-Entities";
        if ( v3 != 28 )
          v24 = "UNKNOWN";
      }
    }
    else
    {
      v24 = v2[1];
    }
    v25 = g_entLogHighPublic[v4 + 3];
    *(_QWORD *)(p_countHighest + 13) = v24;
    p_countHighest[15] = v0[v4 + 3];
    v26 = g_entLogCountLimits[v4 + 3];
    p_countHighest[16] = v25;
    p_countHighest[17] = v26;
    v27 = (float)v26;
    if ( v26 )
      v28 = (float)v0[v4 + 3] / v27;
    else
      v28 = 0.0;
    *((float *)p_countHighest + 18) = v28;
    if ( v26 )
      v29 = (float)v25 / v27;
    else
      v29 = 0.0;
    *((float *)p_countHighest + 19) = v29;
    p_countHighest += 32;
    v3 += 4;
    v2 += 4;
    v4 += 4i64;
  }
  while ( v3 < 32 );
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

