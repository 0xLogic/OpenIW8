/*
==============
CL_AddDebugPolyWithTransform
==============
*/

void __fastcall CL_AddDebugPolyWithTransform(const int pointCount, const vec3_t *points, const tmat43_t<vec3_t> *transform, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration, bool fromServer)
{
  ?CL_AddDebugPolyWithTransform@@YAXHPEBTvec3_t@@AEBT?$tmat43_t@Tvec3_t@@@@AEBTvec4_t@@_N33H3@Z(pointCount, points, transform, color, drawOutline, drawBackFace, depthTest, duration, fromServer);
}

/*
==============
CL_GetDebugStrings
==============
*/

bool __fastcall CL_GetDebugStrings(int fromServer, ClDebugStringInfo **info)
{
  return ?CL_GetDebugStrings@@YA_NHPEAPEAUClDebugStringInfo@@@Z(fromServer, info);
}

/*
==============
CL_UpdateDebugServerData
==============
*/

void CL_UpdateDebugServerData(void)
{
  ?CL_UpdateDebugServerData@@YAXXZ();
}

/*
==============
CL_AddDebugBox
==============
*/

void __fastcall CL_AddDebugBox(const tmat33_t<vec3_t> *axis, const vec3_t *origin, const vec3_t *mins, const vec3_t *maxs, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  ?CL_AddDebugBox@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@11AEBTvec4_t@@HHH@Z(axis, origin, mins, maxs, color, depthTest, duration, fromServer);
}

/*
==============
CL_DebugData_UpdateClient
==============
*/

void CL_DebugData_UpdateClient(void)
{
  ?CL_DebugData_UpdateClient@@YAXXZ();
}

/*
==============
CL_AddDebugString2D
==============
*/

void __fastcall CL_AddDebugString2D(float x, float y, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ?CL_AddDebugString2D@@YAXMMAEBTvec4_t@@MPEBDHH@Z(x, y, color, scale, text, fromServer, duration);
}

/*
==============
CL_FlushDebugServerData
==============
*/

void CL_FlushDebugServerData(void)
{
  ?CL_FlushDebugServerData@@YAXXZ();
}

/*
==============
CL_ShutdownDebugData
==============
*/

void CL_ShutdownDebugData(void)
{
  ?CL_ShutdownDebugData@@YAXXZ();
}

/*
==============
CL_AddDebugStarWithText
==============
*/

void __fastcall CL_AddDebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int depthTest, int duration, int fromServer)
{
  ?CL_AddDebugStarWithText@@YAXAEBTvec3_t@@AEBTvec4_t@@1PEBDMHHH@Z(point, starColor, textColor, string, fontsize, depthTest, duration, fromServer);
}

/*
==============
CL_AddOrientedDebugStarWithText
==============
*/

void __fastcall CL_AddOrientedDebugStarWithText(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, float fontsize, const char *text, int duration, int fromServer)
{
  ?CL_AddOrientedDebugStarWithText@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@MPEBDHH@Z(lineStart, axis, color, fontsize, text, duration, fromServer);
}

/*
==============
CL_AddDebugStarWithSize
==============
*/

void __fastcall CL_AddDebugStarWithSize(const vec3_t *point, const vec4_t *color, int duration, int fromServer, float size)
{
  ?CL_AddDebugStarWithSize@@YAXAEBTvec3_t@@AEBTvec4_t@@HHM@Z(point, color, duration, fromServer, size);
}

/*
==============
CL_AddDebugStringCentered
==============
*/

void __fastcall CL_AddDebugStringCentered(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ?CL_AddDebugStringCentered@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDHH@Z(xyz, color, scale, text, fromServer, duration);
}

/*
==============
CL_AddDebugPoly
==============
*/

void __fastcall CL_AddDebugPoly(const int pointCount, const vec3_t *points, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration, bool fromServer)
{
  ?CL_AddDebugPoly@@YAXHPEBTvec3_t@@AEBTvec4_t@@_N22H2@Z(pointCount, points, color, drawOutline, drawBackFace, depthTest, duration, fromServer);
}

/*
==============
CL_AddDebugStar
==============
*/

void __fastcall CL_AddDebugStar(const vec3_t *point, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  ?CL_AddDebugStar@@YAXAEBTvec3_t@@AEBTvec4_t@@HHH@Z(point, color, depthTest, duration, fromServer);
}

/*
==============
CL_AddDebugString
==============
*/

void __fastcall CL_AddDebugString(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ?CL_AddDebugString@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDHH@Z(xyz, color, scale, text, fromServer, duration);
}

/*
==============
CL_AddDebugLine
==============
*/

void __fastcall CL_AddDebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  ?CL_AddDebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@HHH@Z(start, end, color, depthTest, duration, fromServer);
}

/*
==============
CL_AddOrientedDebugStar
==============
*/

void __fastcall CL_AddOrientedDebugStar(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, float size, int duration, int fromServer)
{
  ?CL_AddOrientedDebugStar@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@MHH@Z(lineStart, axis, color, size, duration, fromServer);
}

/*
==============
AddDebugStringInternal
==============
*/
void AddDebugStringInternal(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int duration, int is2D, ClDebugStringInfo *info, int isCentered)
{
  const dvar_t *v11; 
  float value; 
  trDebugString_t *v13; 

  if ( is2D && isCentered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 87, ASSERT_TYPE_ASSERT, "(!( is2D && isCentered ))", (const char *)&queryFormat, "!( is2D && isCentered )") )
    __debugbreak();
  if ( info->num < info->max )
  {
    v11 = DVARFLT_cl_debugTextSize;
    if ( !DVARFLT_cl_debugTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_debugTextSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    v13 = &info->strings[info->num];
    v13->xyz.v[0] = xyz->v[0];
    v13->xyz.v[1] = xyz->v[1];
    v13->xyz.v[2] = xyz->v[2];
    Byte4PackVertexColor(color, v13->color.array);
    v13->font = cls.bigDevFont;
    v13->is2D = is2D;
    v13->size = scale * value;
    v13->isCentered = isCentered;
    strncpy(v13->text, text, 0x4Bui64);
    v13->text[75] = 0;
    info->durations[info->num++] = duration;
  }
}

/*
==============
CL_AddDebugBox
==============
*/
void CL_AddDebugBox(const tmat33_t<vec3_t> *axis, const vec3_t *origin, const vec3_t *mins, const vec3_t *maxs, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  unsigned int v8; 
  float *v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const int (*v20)[2]; 
  __int64 v21; 
  vec3_t start[8]; 

  v8 = 0;
  v9 = &start[0].v[2];
  do
  {
    v10 = 0;
    v11 = 1;
    do
    {
      v12 = (int)v10;
      if ( (v11 & v8) != 0 )
        v13 = maxs->v[v12];
      else
        v13 = mins->v[v12];
      ++v10;
      v11 = __ROL4__(v11, 1);
      v9[v12 - 2] = v13;
    }
    while ( v10 < 3 );
    ++v8;
    v14 = *(v9 - 2);
    v15 = *(v9 - 1);
    v16 = (float)(v14 * axis->m[0].v[2]) + origin->v[2];
    v17 = *v9 * axis->m[2].v[2];
    v18 = (float)((float)((float)(v14 * axis->m[0].v[1]) + origin->v[1]) + (float)(v15 * axis->m[1].v[1])) + (float)(*v9 * axis->m[2].v[1]);
    v19 = v15 * axis->m[1].v[2];
    *(v9 - 2) = (float)((float)((float)(v14 * axis->m[0].v[0]) + origin->v[0]) + (float)(v15 * axis->m[1].v[0])) + (float)(*v9 * axis->m[2].v[0]);
    *v9 = (float)(v16 + v19) + v17;
    *(v9 - 1) = v18;
    v9 += 3;
  }
  while ( v8 < 8 );
  v20 = iEdgePairs_1;
  v21 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v20], &start[(*v20)[1]], color, depthTest, duration, fromServer);
    ++v20;
    --v21;
  }
  while ( v21 );
}

/*
==============
CL_AddDebugLine
==============
*/
void CL_AddDebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  ClDebugLineInfo *p_svLines; 
  volatile signed __int32 *p_num; 
  __int64 v12; 
  __int64 v13; 

  if ( cls.rendererStarted && CL_CreateDebugLinesIfNeeded() )
  {
    p_svLines = &cls.debug.svLines;
    if ( !fromServer )
      p_svLines = &cls.debug.clLines;
    p_num = &p_svLines->num;
    if ( p_svLines->num + 1 <= p_svLines->max )
    {
      if ( ((unsigned __int8)p_num & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &p_svLines->num) )
        __debugbreak();
      v12 = _InterlockedExchangeAdd(p_num, 1u);
      v13 = (__int64)&p_svLines->lines[v12];
      *(float *)v13 = start->v[0];
      *(float *)(v13 + 4) = start->v[1];
      *(float *)(v13 + 8) = start->v[2];
      *(float *)(v13 + 12) = end->v[0];
      *(float *)(v13 + 16) = end->v[1];
      *(float *)(v13 + 20) = end->v[2];
      Byte4PackVertexColor(color, (unsigned __int8 *)(v13 + 24));
      *(_DWORD *)(v13 + 28) = depthTest;
      p_svLines->durations[v12] = duration;
    }
  }
}

/*
==============
CL_AddDebugPoly
==============
*/
void CL_AddDebugPoly(const int pointCount, const vec3_t *points, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration, bool fromServer)
{
  __int64 v10; 
  ClDebugPolyInfo *p_svPolys; 
  unsigned int numVerts; 
  __int64 num; 
  __int64 v15; 
  __int64 v16; 

  v10 = pointCount;
  if ( cls.rendererStarted && CL_CreateDebugPolysIfNeeded() )
  {
    p_svPolys = &cls.debug.svPolys;
    if ( !fromServer )
      p_svPolys = &cls.debug.clPolys;
    numVerts = p_svPolys->numVerts;
    if ( numVerts + (unsigned int)v10 <= p_svPolys->maxVerts )
    {
      num = p_svPolys->num;
      if ( (unsigned int)(num + 1) <= p_svPolys->max )
      {
        v15 = (__int64)&p_svPolys->polys[num];
        *(_BYTE *)(v15 + 25) = drawBackFace;
        *(_BYTE *)(v15 + 26) = depthTest;
        *(_DWORD *)(v15 + 16) = numVerts;
        *(_DWORD *)(v15 + 20) = v10;
        *(_BYTE *)(v15 + 24) = drawOutline;
        *(float *)v15 = color->v[0];
        *(float *)(v15 + 4) = color->v[1];
        *(float *)(v15 + 8) = color->v[2];
        *(float *)(v15 + 12) = color->v[3];
        p_svPolys->durations[p_svPolys->num] = duration;
        v16 = p_svPolys->numVerts;
        ++p_svPolys->num;
        memcpy_0(&p_svPolys->verts[v16], points, 12 * v10);
        p_svPolys->numVerts += v10;
      }
    }
  }
}

/*
==============
CL_AddDebugPolyWithTransform
==============
*/
void CL_AddDebugPolyWithTransform(const int pointCount, const vec3_t *points, const tmat43_t<vec3_t> *transform, const vec4_t *color, bool drawOutline, bool drawBackFace, bool depthTest, int duration, bool fromServer)
{
  ClDebugPolyInfo *p_svPolys; 
  unsigned int numVerts; 
  __int64 num; 
  __int64 v16; 
  __int64 v17; 
  vec3_t *verts; 
  vec3_t *v19; 
  __int64 v20; 

  if ( cls.rendererStarted && CL_CreateDebugPolysIfNeeded() )
  {
    p_svPolys = &cls.debug.svPolys;
    if ( !fromServer )
      p_svPolys = &cls.debug.clPolys;
    numVerts = p_svPolys->numVerts;
    if ( numVerts + pointCount <= p_svPolys->maxVerts )
    {
      num = p_svPolys->num;
      if ( (unsigned int)(num + 1) <= p_svPolys->max )
      {
        v16 = (__int64)&p_svPolys->polys[num];
        *(_BYTE *)(v16 + 24) = drawOutline;
        *(_BYTE *)(v16 + 25) = drawBackFace;
        *(_BYTE *)(v16 + 26) = depthTest;
        *(_DWORD *)(v16 + 16) = numVerts;
        *(_DWORD *)(v16 + 20) = pointCount;
        *(float *)v16 = color->v[0];
        *(float *)(v16 + 4) = color->v[1];
        *(float *)(v16 + 8) = color->v[2];
        *(float *)(v16 + 12) = color->v[3];
        p_svPolys->durations[p_svPolys->num] = duration;
        v17 = p_svPolys->numVerts;
        verts = p_svPolys->verts;
        ++p_svPolys->num;
        v19 = &verts[v17];
        if ( pointCount > 0 )
        {
          v20 = (unsigned int)pointCount;
          do
          {
            MatrixTransformVector43(points++, transform, v19++);
            --v20;
          }
          while ( v20 );
          LODWORD(v17) = p_svPolys->numVerts;
        }
        p_svPolys->numVerts = v17 + pointCount;
      }
    }
  }
}

/*
==============
CL_AddDebugStar
==============
*/
void CL_AddDebugStar(const vec3_t *point, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  CL_AddDebugStarWithText(point, color, &MYNULLTEXTCOLOR, NULL, 1.0, depthTest, duration, fromServer);
}

/*
==============
CL_AddDebugStarWithSize
==============
*/
void CL_AddDebugStarWithSize(const vec3_t *point, const vec4_t *color, int duration, int fromServer, float size)
{
  CL_AddDebugStarWithText(point, color, &MYNULLTEXTCOLOR_0, NULL, size, 0, duration, fromServer);
}

/*
==============
CL_AddDebugStarWithText
==============
*/
void CL_AddDebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int depthTest, int duration, int fromServer)
{
  float v8; 
  float v9; 
  float v10; 
  float v14; 
  float v16; 
  vec3_t end; 
  vec3_t start; 

  v8 = point->v[0];
  v9 = point->v[1];
  v10 = point->v[2];
  v14 = point->v[0] - (float)(fontsize * 5.0);
  start.v[0] = point->v[0] + (float)(fontsize * 5.0);
  v16 = start.v[0];
  end.v[0] = v14;
  start.v[1] = v9;
  start.v[2] = v10;
  end.v[1] = v9;
  end.v[2] = v10;
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  start.v[0] = v16 - (float)(fontsize * 5.0);
  end.v[1] = v9 - (float)(fontsize * 5.0);
  end.v[0] = v8;
  start.v[1] = v9 + (float)(fontsize * 5.0);
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  start.v[1] = (float)(v9 + (float)(fontsize * 5.0)) - (float)(fontsize * 5.0);
  end.v[2] = v10 - (float)(fontsize * 5.0);
  end.v[1] = v9;
  start.v[2] = v10 + (float)(fontsize * 5.0);
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  if ( string )
  {
    if ( *string )
      CL_AddDebugString(point, textColor, fontsize, string, fromServer, duration);
  }
}

/*
==============
CL_AddDebugString2D
==============
*/
void CL_AddDebugString2D(float x, float y, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 
  vec3_t xyz; 

  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    xyz.v[0] = x;
    xyz.v[1] = y;
    xyz.v[2] = 0.0;
    AddDebugStringInternal(&xyz, color, scale, text, duration, 1, &info->clStrings, 0);
  }
}

/*
==============
CL_AddDebugString
==============
*/
void CL_AddDebugString(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 

  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    AddDebugStringInternal(xyz, color, scale, text, duration, 0, &info->clStrings, 0);
  }
}

/*
==============
CL_AddDebugStringCentered
==============
*/
void CL_AddDebugStringCentered(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 

  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    AddDebugStringInternal(xyz, color, scale, text, duration, 0, &info->clStrings, 1);
  }
}

/*
==============
CL_AddOrientedDebugStar
==============
*/
void CL_AddOrientedDebugStar(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, float size, int duration, int fromServer)
{
  float v6; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t end; 
  vec4_t colora; 

  v6 = (float)(size * 25.0) * axis->m[0].v[1];
  end.v[0] = (float)((float)(size * 25.0) * axis->m[0].v[0]) + lineStart->v[0];
  v8 = (float)(size * 25.0) * axis->m[0].v[2];
  end.v[1] = v6 + lineStart->v[1];
  end.v[2] = v8 + lineStart->v[2];
  colora = (vec4_t)_xmm;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  v10 = (float)(size * 25.0) * axis->m[1].v[1];
  end.v[0] = (float)((float)(size * 25.0) * axis->m[1].v[0]) + lineStart->v[0];
  v11 = (float)(size * 25.0) * axis->m[1].v[2];
  end.v[1] = v10 + lineStart->v[1];
  end.v[2] = v11 + lineStart->v[2];
  colora.v[0] = 0.0;
  colora.v[1] = FLOAT_1_0;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  v12 = (float)(size * 25.0) * axis->m[2].v[1];
  end.v[0] = (float)((float)(size * 25.0) * axis->m[2].v[0]) + lineStart->v[0];
  v13 = (float)(size * 25.0) * axis->m[2].v[2];
  end.v[1] = v12 + lineStart->v[1];
  end.v[2] = v13 + lineStart->v[2];
  colora.v[1] = 0.0;
  colora.v[2] = FLOAT_1_0;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
}

/*
==============
CL_AddOrientedDebugStarWithText
==============
*/
void CL_AddOrientedDebugStarWithText(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, float fontsize, const char *text, int duration, int fromServer)
{
  float v7; 
  float v10; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t end; 
  vec4_t colora; 

  v7 = (float)(fontsize * 25.0) * axis->m[0].v[1];
  end.v[0] = (float)((float)(fontsize * 25.0) * axis->m[0].v[0]) + lineStart->v[0];
  v10 = (float)(fontsize * 25.0) * axis->m[0].v[2];
  end.v[1] = v7 + lineStart->v[1];
  end.v[2] = v10 + lineStart->v[2];
  colora = (vec4_t)_xmm;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  v12 = (float)(fontsize * 25.0) * axis->m[1].v[1];
  end.v[0] = (float)((float)(fontsize * 25.0) * axis->m[1].v[0]) + lineStart->v[0];
  v13 = (float)(fontsize * 25.0) * axis->m[1].v[2];
  end.v[1] = v12 + lineStart->v[1];
  end.v[2] = v13 + lineStart->v[2];
  colora.v[0] = 0.0;
  colora.v[1] = FLOAT_1_0;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  v14 = (float)(fontsize * 25.0) * axis->m[2].v[1];
  end.v[0] = (float)((float)(fontsize * 25.0) * axis->m[2].v[0]) + lineStart->v[0];
  v15 = (float)(fontsize * 25.0) * axis->m[2].v[2];
  end.v[1] = v14 + lineStart->v[1];
  end.v[2] = v15 + lineStart->v[2];
  colora.v[1] = 0.0;
  colora.v[2] = FLOAT_1_0;
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  if ( text )
  {
    if ( *text )
      CL_AddDebugString(lineStart, color, fontsize, text, fromServer, duration);
  }
}

/*
==============
CL_CreateDebugLinesIfNeeded
==============
*/
char CL_CreateDebugLinesIfNeeded()
{
  const char *v0; 
  int v1; 
  const char *v2; 
  unsigned __int64 v4; 

  if ( cls.debug.clLines.lines )
  {
    if ( !s_serverCopyCritSecInitialized )
    {
      v0 = "s_serverCopyCritSecInitialized";
      v1 = 176;
      v2 = "(s_serverCopyCritSecInitialized)";
      goto LABEL_18;
    }
    return 1;
  }
  if ( !Sys_IsMainThread() )
  {
    s_debugLineAllocationRequested = 1;
    return 0;
  }
  if ( cls.debug.svLines.lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 187, ASSERT_TYPE_ASSERT, "(0 == cls.debug.svLines.lines)", (const char *)&queryFormat, "NULL == cls.debug.svLines.lines") )
    __debugbreak();
  if ( cls.debug.svLinesBuffer.lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 188, ASSERT_TYPE_ASSERT, "(0 == cls.debug.svLinesBuffer.lines)", (const char *)&queryFormat, "NULL == cls.debug.svLinesBuffer.lines") )
    __debugbreak();
  if ( !s_serverCopyCritSecInitialized )
  {
    s_serverCopyCritSecInitialized = 1;
    InitializeSRWLock((PSRWLOCK)&s_serverCopyCritSec);
    s_serverCopyCritSec.initialized = -1412623820;
    s_serverCopyCritSec.acquireLock = 0;
    s_serverCopyCritSec.writeThreadId = 0;
  }
  cls.debug.clLines.max = 20480;
  cls.debug.svLines.max = 2048;
  cls.debug.svLinesBuffer.max = 2048;
  cls.debug.clLines.num = 0;
  cls.debug.svLines.num = 0;
  cls.debug.svLinesBuffer.num = 0;
  R_DebugAlloc((void **)&cls.debug.clLines.lines, 884736, "Client Debug Lines");
  if ( !cls.debug.clLines.lines )
    return 0;
  v4 = 8i64 * cls.debug.svLines.max;
  cls.debug.clLines.durations = (int *)&cls.debug.clLines.lines[cls.debug.clLines.max];
  cls.debug.svLines.lines = (trDebugLine_t *)&cls.debug.clLines.durations[cls.debug.clLines.max];
  cls.debug.svLines.durations = (int *)&cls.debug.svLines.lines[v4 / 8];
  cls.debug.svLinesBuffer.lines = (trDebugLine_t *)&cls.debug.clLines.durations[cls.debug.svLines.max + (__int64)cls.debug.clLines.max + v4];
  cls.debug.svLinesBuffer.durations = (int *)&cls.debug.svLinesBuffer.lines[cls.debug.svLinesBuffer.max];
  if ( &cls.debug.svLinesBuffer.durations[cls.debug.svLinesBuffer.max] != (int *)&cls.debug.clLines.lines[27648] )
  {
    v0 = "reinterpret_cast<byte *>(cls.debug.svLinesBuffer.durations + cls.debug.svLinesBuffer.max) == reinterpret_cast<byte *>( cls.debug.clLines.lines ) + size";
    v1 = 216;
    v2 = "(reinterpret_cast<byte *>(cls.debug.svLinesBuffer.durations + cls.debug.svLinesBuffer.max) == reinterpret_cast<byte *>( cls.debug.clLines.lines ) + size)";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", v1, ASSERT_TYPE_ASSERT, v2, (const char *)&queryFormat, v0) )
      __debugbreak();
  }
  return 1;
}

/*
==============
CL_CreateDebugPolysIfNeeded
==============
*/
char CL_CreateDebugPolysIfNeeded()
{
  const char *v0; 
  int v1; 
  const char *v2; 
  __int64 v4; 
  unsigned __int64 v5; 

  if ( cls.debug.clPolys.polys )
  {
    if ( !s_serverCopyCritSecInitialized )
    {
      v0 = "s_serverCopyCritSecInitialized";
      v1 = 404;
      v2 = "(s_serverCopyCritSecInitialized)";
      goto LABEL_24;
    }
    return 1;
  }
  if ( !Sys_IsMainThread() )
  {
    s_debugPolyAllocationRequested = 1;
    return 0;
  }
  if ( cls.debug.svPolys.polys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 415, ASSERT_TYPE_ASSERT, "(nullptr == cls.debug.svPolys.polys)", (const char *)&queryFormat, "nullptr == cls.debug.svPolys.polys") )
    __debugbreak();
  if ( cls.debug.svPolys.verts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 416, ASSERT_TYPE_ASSERT, "(nullptr == cls.debug.svPolys.verts)", (const char *)&queryFormat, "nullptr == cls.debug.svPolys.verts") )
    __debugbreak();
  if ( cls.debug.svPolysBuffer.polys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 417, ASSERT_TYPE_ASSERT, "(nullptr == cls.debug.svPolysBuffer.polys)", (const char *)&queryFormat, "nullptr == cls.debug.svPolysBuffer.polys") )
    __debugbreak();
  if ( cls.debug.svPolysBuffer.verts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 418, ASSERT_TYPE_ASSERT, "(nullptr == cls.debug.svPolysBuffer.verts)", (const char *)&queryFormat, "nullptr == cls.debug.svPolysBuffer.verts") )
    __debugbreak();
  if ( !s_serverCopyCritSecInitialized )
  {
    s_serverCopyCritSecInitialized = 1;
    InitializeSRWLock((PSRWLOCK)&s_serverCopyCritSec);
    s_serverCopyCritSec.initialized = -1412623820;
    s_serverCopyCritSec.acquireLock = 0;
    s_serverCopyCritSec.writeThreadId = 0;
  }
  *(_QWORD *)&cls.debug.clPolys.max = 1024i64;
  *(_QWORD *)&cls.debug.svPolys.max = 1024i64;
  *(_QWORD *)&cls.debug.svPolysBuffer.max = 1024i64;
  *(_QWORD *)&cls.debug.clPolys.maxVerts = 4096i64;
  *(_QWORD *)&cls.debug.svPolys.maxVerts = 4096i64;
  *(_QWORD *)&cls.debug.svPolysBuffer.maxVerts = 4096i64;
  R_DebugAlloc((void **)&cls.debug.clPolys.polys, 245760, "Client Debug Polys");
  if ( !cls.debug.clPolys.polys )
    return 0;
  v4 = 3i64 * cls.debug.clPolys.maxVerts;
  cls.debug.clPolys.durations = (int *)&cls.debug.clPolys.polys[cls.debug.clPolys.max];
  cls.debug.clPolys.verts = (vec3_t *)&cls.debug.clPolys.durations[cls.debug.clPolys.max];
  v5 = 7i64 * cls.debug.svPolys.max;
  cls.debug.svPolys.polys = (trDebugPoly_t *)&cls.debug.clPolys.durations[cls.debug.clPolys.max + v4];
  cls.debug.svPolys.durations = (int *)&cls.debug.svPolys.polys[v5 / 7];
  cls.debug.svPolys.verts = (vec3_t *)&cls.debug.clPolys.durations[cls.debug.svPolys.max + (unsigned __int64)cls.debug.clPolys.max + v4 + v5];
  cls.debug.svPolysBuffer.polys = (trDebugPoly_t *)&cls.debug.svPolys.verts[cls.debug.svPolys.maxVerts];
  cls.debug.svPolysBuffer.durations = (int *)&cls.debug.svPolysBuffer.polys[cls.debug.svPolysBuffer.max];
  cls.debug.svPolysBuffer.verts = (vec3_t *)&cls.debug.svPolysBuffer.durations[cls.debug.svPolysBuffer.max];
  if ( &cls.debug.svPolysBuffer.verts[cls.debug.svPolysBuffer.maxVerts] != (vec3_t *)&cls.debug.clPolys.polys[8777].color.xyz.v[1] )
  {
    v0 = "reinterpret_cast<byte *>( cls.debug.svPolysBuffer.verts + cls.debug.svPolysBuffer.maxVerts ) == ( reinterpret_cast<byte *>( cls.debug.clPolys.polys ) + size )";
    v1 = 456;
    v2 = "(reinterpret_cast<byte *>( cls.debug.svPolysBuffer.verts + cls.debug.svPolysBuffer.maxVerts ) == ( reinterpret_cast<byte *>( cls.debug.clPolys.polys ) + size ))";
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", v1, ASSERT_TYPE_ASSERT, v2, (const char *)&queryFormat, v0) )
      __debugbreak();
  }
  return 1;
}

/*
==============
CL_CreateDebugStringsIfNeeded
==============
*/
char CL_CreateDebugStringsIfNeeded()
{
  const char *v0; 
  int v1; 
  const char *v2; 
  unsigned __int64 v4; 

  if ( cls.debug.clStrings.strings )
  {
    if ( !s_serverCopyCritSecInitialized )
    {
      v0 = "s_serverCopyCritSecInitialized";
      v1 = 33;
      v2 = "(s_serverCopyCritSecInitialized)";
      goto LABEL_18;
    }
    return 1;
  }
  if ( !Sys_IsMainThread() )
  {
    s_debugStringAllocationRequested = 1;
    return 0;
  }
  if ( cls.debug.svStrings.strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 44, ASSERT_TYPE_ASSERT, "(0 == cls.debug.svStrings.strings)", (const char *)&queryFormat, "NULL == cls.debug.svStrings.strings") )
    __debugbreak();
  if ( cls.debug.svStringsBuffer.strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 45, ASSERT_TYPE_ASSERT, "(0 == cls.debug.svStringsBuffer.strings)", (const char *)&queryFormat, "NULL == cls.debug.svStringsBuffer.strings") )
    __debugbreak();
  if ( !s_serverCopyCritSecInitialized )
  {
    s_serverCopyCritSecInitialized = 1;
    InitializeSRWLock((PSRWLOCK)&s_serverCopyCritSec);
    s_serverCopyCritSec.initialized = -1412623820;
    s_serverCopyCritSec.acquireLock = 0;
    s_serverCopyCritSec.writeThreadId = 0;
  }
  *(_QWORD *)&cls.debug.clStrings.max = 1024i64;
  *(_QWORD *)&cls.debug.svStrings.max = 1024i64;
  *(_QWORD *)&cls.debug.svStringsBuffer.max = 1024i64;
  R_DebugAlloc((void **)&cls.debug.clStrings.strings, 356352, "Client Debug Strings");
  if ( !cls.debug.clStrings.strings )
    return 0;
  v4 = 28i64 * cls.debug.svStrings.max;
  cls.debug.clStrings.durations = (int *)&cls.debug.clStrings.strings[cls.debug.clStrings.max];
  cls.debug.svStrings.strings = (trDebugString_t *)&cls.debug.clStrings.durations[cls.debug.clStrings.max];
  cls.debug.svStrings.durations = (int *)&cls.debug.svStrings.strings[v4 / 0x1C];
  cls.debug.svStringsBuffer.strings = (trDebugString_t *)&cls.debug.clStrings.durations[cls.debug.svStrings.max + (__int64)cls.debug.clStrings.max + v4];
  cls.debug.svStringsBuffer.durations = (int *)&cls.debug.svStringsBuffer.strings[cls.debug.svStringsBuffer.max];
  if ( &cls.debug.svStringsBuffer.durations[cls.debug.svStringsBuffer.max] != (int *)&cls.debug.clStrings.strings[3181].text[52] )
  {
    v0 = "reinterpret_cast<byte *>(cls.debug.svStringsBuffer.durations + cls.debug.svStringsBuffer.max) == reinterpret_cast<byte *>(cls.debug.clStrings.strings) + size";
    v1 = 73;
    v2 = "(reinterpret_cast<byte *>(cls.debug.svStringsBuffer.durations + cls.debug.svStringsBuffer.max) == reinterpret_cast<byte *>(cls.debug.clStrings.strings) + size)";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", v1, ASSERT_TYPE_ASSERT, v2, (const char *)&queryFormat, v0) )
      __debugbreak();
  }
  return 1;
}

/*
==============
CL_DebugData_FlushDebugLines
==============
*/
void CL_DebugData_FlushDebugLines(ClDebugLineInfo *info, int fromServer)
{
  volatile int v3; 
  volatile int *p_num; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( info->lines )
  {
    v3 = 0;
    p_num = &info->num;
    if ( info->num > 0 )
    {
      v5 = 0i64;
      v6 = 0i64;
      do
      {
        if ( --info->durations[v5] > 0 )
        {
          ++v3;
          ++v5;
          ++v6;
        }
        else
        {
          if ( ((unsigned __int8)p_num & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_num) )
            __debugbreak();
          v7 = _InterlockedDecrement(p_num);
          info->durations[v5] = info->durations[v7];
          info->lines[v6] = info->lines[v7];
        }
      }
      while ( v3 < *p_num );
    }
  }
}

/*
==============
CL_DebugData_FlushDebugPolys
==============
*/
void CL_DebugData_FlushDebugPolys(ClDebugPolyInfo *info, int fromServer)
{
  unsigned int v3; 
  __int64 v4; 
  trDebugPoly_t *polys; 
  __int64 v6; 
  __int64 firstVert; 
  unsigned int vertCount; 
  unsigned int numVerts; 
  __int64 v10; 
  __int64 v11; 
  vec3_t *verts; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  trDebugPoly_t *v19; 
  unsigned int num; 

  if ( info->polys && info->num )
  {
    v3 = 1;
    do
    {
      v4 = v3 - 1;
      if ( --info->durations[v4] > 0 )
      {
        num = info->num;
        ++v3;
      }
      else
      {
        polys = info->polys;
        v6 = v4;
        firstVert = (int)polys[v6].firstVert;
        vertCount = polys[v6].vertCount;
        numVerts = info->numVerts;
        v10 = vertCount + (unsigned int)firstVert;
        if ( (unsigned int)v10 < numVerts )
        {
          v11 = firstVert;
          do
          {
            verts = info->verts;
            v13 = v10;
            v10 = (unsigned int)(v10 + 1);
            verts[v11++].v[0] = verts[v13].v[0];
            verts[v11 - 1].v[1] = verts[v13].v[1];
            verts[v11 - 1].v[2] = verts[v13].v[2];
            numVerts = info->numVerts;
          }
          while ( (unsigned int)v10 < numVerts );
        }
        v14 = v3;
        info->numVerts = numVerts - vertCount;
        v15 = info->num;
        if ( v3 < v15 )
        {
          v16 = v3 - 1;
          do
          {
            v17 = v14++;
            v18 = (unsigned int)v16;
            info->durations[v16] = info->durations[v17];
            v16 = (unsigned int)(v16 + 1);
            v19 = info->polys;
            v19[v18].color = v19[v17].color;
            *(double *)&v19[v18].firstVert = *(double *)&v19[v17].firstVert;
            *(_DWORD *)&v19[v18].outline = *(_DWORD *)&v19[v17].outline;
            info->polys[v18].firstVert -= vertCount;
            v15 = info->num;
          }
          while ( v14 < v15 );
        }
        num = v15 - 1;
        info->num = v15 - 1;
      }
    }
    while ( v3 - 1 < num );
  }
}

/*
==============
CL_DebugData_FlushDebugStrings
==============
*/
void CL_DebugData_FlushDebugStrings(ClDebugStringInfo *info, int fromServer)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  int *durations; 
  __int64 num; 
  trDebugString_t *strings; 
  __int64 v8; 

  if ( info->strings )
  {
    v2 = 0;
    if ( info->num > 0 )
    {
      v3 = 0i64;
      v4 = 0i64;
      do
      {
        --info->durations[v4];
        durations = info->durations;
        if ( durations[v4] > 0 )
        {
          ++v2;
          ++v4;
          ++v3;
        }
        else
        {
          num = info->num;
          info->num = num - 1;
          durations[v4] = durations[num - 1];
          strings = info->strings;
          v8 = info->num;
          *(__m256i *)&strings[v3].font = *(__m256i *)&strings[v8].font;
          *(__m256i *)&strings[v3].text[4] = *(__m256i *)&strings[v8].text[4];
          *(__m256i *)&strings[v3].text[36] = *(__m256i *)&strings[v8].text[36];
          *(_OWORD *)&strings[v3].text[68] = *(_OWORD *)&strings[v8].text[68];
        }
      }
      while ( v2 < info->num );
    }
  }
}

/*
==============
CL_DebugData_UpdateClient
==============
*/
void CL_DebugData_UpdateClient(void)
{
  int v0; 
  unsigned int v1; 
  unsigned int v2; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 734, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( cls.rendererStarted )
  {
    v0 = cls.debug.clStrings.max + cls.debug.svStringsBuffer.max;
    v1 = cls.debug.clPolys.maxVerts + cls.debug.svPolysBuffer.maxVerts;
    v2 = cls.debug.clPolys.max + cls.debug.svPolysBuffer.max;
    v3 = cls.debug.clLines.max + cls.debug.svLinesBuffer.max;
    if ( cls.debug.clStrings.max + cls.debug.svStringsBuffer.max + cls.debug.clPolys.max + cls.debug.svPolysBuffer.max + cls.debug.clLines.max + cls.debug.svLinesBuffer.max )
    {
      if ( R_NeedToAllocateDebugBuffers(v0, v3, v1, v2) )
        R_AllocateDebugBuffers(v0, v3, v1, v2);
      if ( !s_serverCopyCritSecInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 695, ASSERT_TYPE_ASSERT, "(s_serverCopyCritSecInitialized)", (const char *)&queryFormat, "s_serverCopyCritSecInitialized") )
        __debugbreak();
      Sys_CheckAcquireLock(&s_serverCopyCritSec);
      AcquireSRWLockShared((PSRWLOCK)&s_serverCopyCritSec);
      R_CopyDebugStrings(cls.debug.clStrings.strings, cls.debug.clStrings.num, cls.debug.svStringsBuffer.strings, cls.debug.svStringsBuffer.num, cls.debug.svStringsBuffer.max + cls.debug.clStrings.max);
      R_CopyDebugLines(cls.debug.clLines.lines, cls.debug.clLines.num, cls.debug.svLinesBuffer.lines, cls.debug.svLinesBuffer.num, cls.debug.svLinesBuffer.max + cls.debug.clLines.max);
      R_CopyDebugPolys(cls.debug.clPolys.polys, cls.debug.clPolys.num, cls.debug.clPolys.verts, cls.debug.clPolys.numVerts, cls.debug.svPolysBuffer.polys, cls.debug.svPolysBuffer.num, cls.debug.svPolysBuffer.verts, cls.debug.svPolysBuffer.numVerts);
      ReleaseSRWLockShared((PSRWLOCK)&s_serverCopyCritSec);
      Sys_CheckReleaseLock(&s_serverCopyCritSec);
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 710, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( s_debugStringAllocationRequested )
    {
      CL_CreateDebugStringsIfNeeded();
      s_debugStringAllocationRequested = 0;
    }
    if ( s_debugLineAllocationRequested )
    {
      CL_CreateDebugLinesIfNeeded();
      s_debugLineAllocationRequested = 0;
    }
    if ( s_debugPolyAllocationRequested )
    {
      CL_CreateDebugPolysIfNeeded();
      s_debugPolyAllocationRequested = 0;
    }
    CL_DebugData_FlushDebugStrings(&cls.debug.clStrings, 0);
    CL_DebugData_FlushDebugLines(&cls.debug.clLines, 0);
    CL_DebugData_FlushDebugPolys(&cls.debug.clPolys, 0);
  }
}

/*
==============
CL_FlushDebugServerData
==============
*/
void CL_FlushDebugServerData(void)
{
  if ( cls.rendererStarted )
  {
    CL_DebugData_FlushDebugStrings(&cls.debug.svStrings, 1);
    CL_DebugData_FlushDebugLines(&cls.debug.svLines, 1);
    CL_DebugData_FlushDebugPolys(&cls.debug.svPolys, 1);
  }
}

/*
==============
CL_GetDebugStrings
==============
*/
char CL_GetDebugStrings(int fromServer, ClDebugStringInfo **info)
{
  ClDebugInfo *p_svStrings; 

  if ( !cls.rendererStarted || !CL_CreateDebugStringsIfNeeded() )
    return 0;
  p_svStrings = (ClDebugInfo *)&cls.debug.svStrings;
  if ( !fromServer )
    p_svStrings = &cls.debug;
  *info = &p_svStrings->clStrings;
  return 1;
}

/*
==============
CL_ShutdownDebugData
==============
*/

void __fastcall CL_ShutdownDebugData(double _XMM0_8, double _XMM1_8)
{
  __int64 v8; 
  volatile int acquireLock; 

  R_DebugFree((void **)&cls.debug.clLines.lines);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_OWORD *)&cls.debug.svLines.lines = _XMM0;
  *(_OWORD *)&cls.debug.svLinesBuffer.lines = _XMM1;
  cls.debug.clLines.durations = NULL;
  R_DebugFree((void **)&cls.debug.clStrings.strings);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  cls.debug.clStrings.durations = NULL;
  *(_OWORD *)&cls.debug.svStrings.strings = _XMM0;
  *(_OWORD *)&cls.debug.svStringsBuffer.strings = _XMM1;
  R_DebugFree((void **)&cls.debug.clPolys.polys);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  cls.debug.clPolys.durations = NULL;
  cls.debug.clPolys.verts = NULL;
  cls.debug.svPolys.verts = NULL;
  *(_OWORD *)&cls.debug.svPolys.polys = _XMM0;
  *(_OWORD *)&cls.debug.svPolysBuffer.polys = _XMM1;
  cls.debug.svPolysBuffer.verts = NULL;
  memset_0(&cls.debug, 0, sizeof(cls.debug));
  R_ShutdownDebug();
  R_DebugFreeAll();
  if ( s_serverCopyCritSecInitialized )
  {
    s_serverCopyCritSecInitialized = 0;
    s_serverCopyCritSec.initialized = 0;
    if ( s_serverCopyCritSec.acquireLock )
    {
      acquireLock = s_serverCopyCritSec.acquireLock;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
        __debugbreak();
    }
    if ( s_serverCopyCritSec.writeThreadId )
    {
      LODWORD(v8) = s_serverCopyCritSec.writeThreadId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v8, 0i64) )
        __debugbreak();
    }
  }
  s_debugLineAllocationRequested = 0;
  s_debugStringAllocationRequested = 0;
  s_debugPolyAllocationRequested = 0;
}

/*
==============
CL_UpdateDebugServerData
==============
*/
void CL_UpdateDebugServerData(void)
{
  int v0; 

  if ( cls.rendererStarted && cls.debug.svStrings.max + cls.debug.svLines.max + cls.debug.svPolys.max )
  {
    if ( !s_serverCopyCritSecInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 783, ASSERT_TYPE_ASSERT, "(s_serverCopyCritSecInitialized)", (const char *)&queryFormat, "s_serverCopyCritSecInitialized") )
      __debugbreak();
    Sys_CheckAcquireLock(&s_serverCopyCritSec);
    AcquireSRWLockExclusive((PSRWLOCK)&s_serverCopyCritSec);
    s_serverCopyCritSec.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_serverCopyCritSec.writeThreadId )
    {
      v0 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
        __debugbreak();
    }
    cls.debug.svStringsBuffer.num = cls.debug.svStrings.num;
    memcpy_0(cls.debug.svStringsBuffer.strings, cls.debug.svStrings.strings, (unsigned int)(112 * cls.debug.svStrings.num));
    cls.debug.svLinesBuffer.num = cls.debug.svLines.num;
    memcpy_0(cls.debug.svLinesBuffer.lines, cls.debug.svLines.lines, (unsigned int)(32 * cls.debug.svLines.num));
    cls.debug.svPolysBuffer.num = cls.debug.svPolys.num;
    memcpy_0(cls.debug.svPolysBuffer.polys, cls.debug.svPolys.polys, 28 * cls.debug.svPolys.num);
    cls.debug.svPolysBuffer.numVerts = cls.debug.svPolys.numVerts;
    memcpy_0(cls.debug.svPolysBuffer.verts, cls.debug.svPolys.verts, 12 * cls.debug.svPolys.numVerts);
    s_serverCopyCritSec.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_serverCopyCritSec);
    Sys_CheckReleaseLock(&s_serverCopyCritSec);
  }
}

