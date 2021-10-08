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

void __fastcall AddDebugStringInternal(const vec3_t *xyz, const vec4_t *color, double scale, const char *text, int duration, int is2D, ClDebugStringInfo *info, int isCentered)
{
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  if ( is2D && isCentered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugdata.cpp", 87, ASSERT_TYPE_ASSERT, "(!( is2D && isCentered ))", (const char *)&queryFormat, "!( is2D && isCentered )") )
    __debugbreak();
  if ( info->num < info->max )
  {
    _RBX = DVARFLT_cl_debugTextSize;
    __asm { vmovaps [rsp+78h+var_28], xmm6 }
    if ( !DVARFLT_cl_debugTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_debugTextSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    _RBX = &info->strings[info->num];
    _RBX->xyz.v[0] = xyz->v[0];
    _RBX->xyz.v[1] = xyz->v[1];
    _RBX->xyz.v[2] = xyz->v[2];
    Byte4PackVertexColor(color, _RBX->color.array);
    __asm { vmulss  xmm0, xmm7, xmm6 }
    _RBX->font = cls.bigDevFont;
    _RBX->is2D = is2D;
    __asm { vmovss  dword ptr [rbx+18h], xmm0 }
    _RBX->isCentered = isCentered;
    strncpy(_RBX->text, text, 0x4Bui64);
    __asm { vmovaps xmm6, [rsp+78h+var_28] }
    _RBX->text[75] = 0;
    info->durations[info->num++] = duration;
  }
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
}

/*
==============
CL_AddDebugBox
==============
*/
void CL_AddDebugBox(const tmat33_t<vec3_t> *axis, const vec3_t *origin, const vec3_t *mins, const vec3_t *maxs, const vec4_t *color, int depthTest, int duration, int fromServer)
{
  unsigned int v14; 
  unsigned int v16; 
  int v17; 
  const int (*v41)[2]; 
  __int64 v42; 
  vec3_t start[8]; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _R15 = maxs;
  _R12 = mins;
  v14 = 0;
  _RBP = &start[0].v[2];
  do
  {
    v16 = 0;
    v17 = 1;
    do
    {
      _RDI = 4i64 * (int)v16;
      if ( (v17 & v14) != 0 )
        __asm { vmovss  xmm6, dword ptr [rdi+r15] }
      else
        __asm { vmovss  xmm6, dword ptr [rdi+r12] }
      ++v16;
      v17 = __ROL4__(v17, 1);
      __asm { vmovss  dword ptr [rdi+rbp-8], xmm6 }
    }
    while ( v16 < 3 );
    ++v14;
    __asm
    {
      vmovss  xmm6, dword ptr [rbp-8]
      vmovss  xmm7, dword ptr [rbp-4]
      vmovss  xmm8, dword ptr [rbp+0]
      vmulss  xmm0, xmm6, dword ptr [r13+0]
      vmulss  xmm1, xmm7, dword ptr [r13+0Ch]
      vaddss  xmm2, xmm0, dword ptr [rax]
      vmulss  xmm0, xmm8, dword ptr [r13+18h]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [r13+4]
      vaddss  xmm2, xmm1, dword ptr [rax+4]
      vmulss  xmm1, xmm8, dword ptr [r13+1Ch]
      vaddss  xmm5, xmm3, xmm0
      vmulss  xmm0, xmm7, dword ptr [r13+10h]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm6, dword ptr [r13+8]
      vaddss  xmm2, xmm0, dword ptr [rax+8]
      vmulss  xmm0, xmm8, dword ptr [r13+20h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm7, dword ptr [r13+14h]
      vmovss  dword ptr [rbp-8], xmm5
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm3, xmm2, xmm0
      vmovss  dword ptr [rbp+0], xmm3
      vmovss  dword ptr [rbp-4], xmm4
    }
    _RBP += 3;
  }
  while ( v14 < 8 );
  v41 = iEdgePairs_1;
  v42 = 12i64;
  do
  {
    CL_AddDebugLine(&start[*(_DWORD *)v41], &start[(*v41)[1]], color, depthTest, duration, fromServer);
    ++v41;
    --v42;
  }
  while ( v42 );
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  float v6; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+48h+var_28], xmm0
  }
  CL_AddDebugStarWithText(point, color, &MYNULLTEXTCOLOR, NULL, v6, depthTest, duration, fromServer);
}

/*
==============
CL_AddDebugStarWithSize
==============
*/
void CL_AddDebugStarWithSize(const vec3_t *point, const vec4_t *color, int duration, int fromServer, float size)
{
  float v6; 

  __asm
  {
    vmovss  xmm0, [rsp+48h+size]
    vmovss  [rsp+48h+var_28], xmm0
  }
  CL_AddDebugStarWithText(point, color, &MYNULLTEXTCOLOR_0, NULL, v6, 0, duration, fromServer);
}

/*
==============
CL_AddDebugStarWithText
==============
*/
void CL_AddDebugStarWithText(const vec3_t *point, const vec4_t *starColor, const vec4_t *textColor, const char *string, float fontsize, int depthTest, int duration, int fromServer)
{
  const vec3_t *v24; 
  vec3_t end; 
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
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovss  xmm7, dword ptr [rcx]
    vmovss  xmm8, dword ptr [rcx+4]
    vmovss  xmm9, dword ptr [rcx+8]
    vmovss  xmm11, [rsp+0D8h+fontsize]
    vmulss  xmm10, xmm11, cs:__real@40a00000
    vsubss  xmm0, xmm7, xmm10
  }
  v24 = point;
  __asm
  {
    vaddss  xmm6, xmm7, xmm10
    vmovss  dword ptr [rsp+0D8h+start], xmm6
    vmovss  dword ptr [rsp+0D8h+end], xmm0
    vmovss  dword ptr [rsp+0D8h+start+4], xmm8
    vmovss  dword ptr [rsp+0D8h+start+8], xmm9
    vmovss  dword ptr [rsp+0D8h+end+4], xmm8
    vmovss  dword ptr [rsp+0D8h+end+8], xmm9
  }
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  __asm
  {
    vsubss  xmm0, xmm6, xmm10
    vmovss  dword ptr [rsp+0D8h+start], xmm0
    vsubss  xmm0, xmm8, xmm10
    vaddss  xmm6, xmm8, xmm10
    vmovss  dword ptr [rsp+0D8h+end+4], xmm0
    vmovss  dword ptr [rsp+0D8h+end], xmm7
    vmovss  dword ptr [rsp+0D8h+start+4], xmm6
  }
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  __asm
  {
    vsubss  xmm0, xmm6, xmm10
    vmovss  dword ptr [rsp+0D8h+start+4], xmm0
    vsubss  xmm0, xmm9, xmm10
    vaddss  xmm1, xmm9, xmm10
    vmovss  dword ptr [rsp+0D8h+end+8], xmm0
    vmovss  dword ptr [rsp+0D8h+end+4], xmm8
    vmovss  dword ptr [rsp+0D8h+start+8], xmm1
  }
  CL_AddDebugLine(&start, &end, starColor, depthTest, duration, fromServer);
  if ( string && *string )
  {
    __asm { vmovaps xmm2, xmm11; scale }
    CL_AddDebugString(v24, textColor, *(float *)&_XMM2, string, fromServer, duration);
  }
  _R11 = &v42;
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
CL_AddDebugString2D
==============
*/

void __fastcall CL_AddDebugString2D(double x, double y, const vec4_t *color, double scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 
  vec3_t xyz; 
  char v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm1
    vmovaps xmm8, xmm0
  }
  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm2, xmm6; scale
      vmovss  dword ptr [rsp+98h+xyz], xmm8
      vmovss  dword ptr [rsp+98h+xyz+4], xmm7
      vmovss  dword ptr [rsp+98h+xyz+8], xmm0
    }
    AddDebugStringInternal(&xyz, color, *(double *)&_XMM2, text, duration, 1, &info->clStrings, 0);
  }
  _R11 = &v24;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_AddDebugString
==============
*/

void __fastcall CL_AddDebugString(const vec3_t *xyz, const vec4_t *color, double scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    __asm { vmovaps xmm2, xmm6; scale }
    AddDebugStringInternal(xyz, color, *(double *)&_XMM2, text, duration, 0, &info->clStrings, 0);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CL_AddDebugStringCentered
==============
*/

void __fastcall CL_AddDebugStringCentered(const vec3_t *xyz, const vec4_t *color, double scale, const char *text, int fromServer, int duration)
{
  ClDebugInfo *info; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( cls.rendererStarted && CL_CreateDebugStringsIfNeeded() )
  {
    info = (ClDebugInfo *)&cls.debug.svStrings;
    if ( !fromServer )
      info = &cls.debug;
    __asm { vmovaps xmm2, xmm6; scale }
    AddDebugStringInternal(xyz, color, *(double *)&_XMM2, text, duration, 0, &info->clStrings, 1);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CL_AddOrientedDebugStar
==============
*/

void __fastcall CL_AddOrientedDebugStar(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, double size, int duration, int fromServer)
{
  vec3_t end; 
  vec4_t colora; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmulss  xmm8, xmm3, cs:__real@41c80000
    vmulss  xmm0, xmm8, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm8, dword ptr [rdx+4]
    vmovups xmm2, cs:__xmm@3f80000000000000000000003f800000
    vmovss  dword ptr [rsp+98h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm8, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+98h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+98h+end+8], xmm1
    vmovups xmmword ptr [rsp+98h+color], xmm2
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rsi+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm8, dword ptr [rsi+10h]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr [rsp+98h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm8, dword ptr [rsi+14h]
    vmovss  dword ptr [rsp+98h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rsp+98h+end+8], xmm1
    vmovss  dword ptr [rsp+98h+color], xmm7
    vmovss  dword ptr [rsp+98h+color+4], xmm6
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rsi+18h]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm8, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rsp+98h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm8, dword ptr [rsi+20h]
    vmovss  dword ptr [rsp+98h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+98h+end+8], xmm1
    vmovss  dword ptr [rsp+98h+color+4], xmm7
    vmovss  dword ptr [rsp+98h+color+8], xmm6
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_AddOrientedDebugStarWithText
==============
*/

void __fastcall CL_AddOrientedDebugStarWithText(const vec3_t *lineStart, const tmat33_t<vec3_t> *axis, const vec4_t *color, double fontsize, const char *text, int duration, int fromServer)
{
  vec3_t end; 
  vec4_t colora; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmulss  xmm8, xmm3, cs:__real@41c80000
    vmulss  xmm0, xmm8, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm8, dword ptr [rdx+4]
    vmovups xmm2, cs:__xmm@3f80000000000000000000003f800000
    vmovss  dword ptr [rsp+0B8h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+4]
    vmulss  xmm0, xmm8, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+0B8h+end+8], xmm1
    vmovaps xmm9, xmm3
    vmovups xmmword ptr [rsp+0B8h+color], xmm2
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm8, dword ptr [rbx+10h]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr [rsp+0B8h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm8, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rsp+0B8h+end+8], xmm1
    vmovss  dword ptr [rsp+0B8h+color], xmm7
    vmovss  dword ptr [rsp+0B8h+color+4], xmm6
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx+18h]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm8, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rsp+0B8h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm8, dword ptr [rbx+20h]
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+0B8h+end+8], xmm1
    vmovss  dword ptr [rsp+0B8h+color+4], xmm7
    vmovss  dword ptr [rsp+0B8h+color+8], xmm6
  }
  CL_AddDebugLine(lineStart, &end, &colora, 0, duration, fromServer);
  if ( text && *text )
  {
    __asm { vmovaps xmm2, xmm9; scale }
    CL_AddDebugString(lineStart, color, *(float *)&_XMM2, text, fromServer, duration);
  }
  _R11 = &v45;
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

  if ( info->lines )
  {
    v3 = 0;
    p_num = &info->num;
    if ( info->num > 0 )
    {
      v5 = 0i64;
      _R14 = 0i64;
      do
      {
        if ( --info->durations[v5] > 0 )
        {
          ++v3;
          ++v5;
          _R14 += 32i64;
        }
        else
        {
          if ( ((unsigned __int8)p_num & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_num) )
            __debugbreak();
          _RDX = _InterlockedDecrement(p_num);
          info->durations[v5] = info->durations[_RDX];
          _RAX = info->lines;
          _RDX *= 32i64;
          __asm
          {
            vmovups ymm0, ymmword ptr [rdx+rax]
            vmovups ymmword ptr [r14+rax], ymm0
          }
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
            _R9 = (unsigned int)v16;
            info->durations[v16] = info->durations[v17];
            v16 = (unsigned int)(v16 + 1);
            _RCX = info->polys;
            _RAX = 28 * v17;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax+rcx]
              vmovups xmmword ptr [r9+rcx], xmm0
              vmovsd  xmm1, qword ptr [rax+rcx+10h]
              vmovsd  qword ptr [r9+rcx+10h], xmm1
            }
            *(_DWORD *)&_RCX[_R9].outline = *(_DWORD *)&_RCX[v17].outline;
            info->polys[_R9].firstVert -= vertCount;
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
  __int64 v4; 
  int *durations; 
  __int64 num; 

  if ( info->strings )
  {
    v2 = 0;
    if ( info->num > 0 )
    {
      _R11 = 0i64;
      v4 = 0i64;
      do
      {
        --info->durations[v4];
        durations = info->durations;
        if ( durations[v4] > 0 )
        {
          ++v2;
          ++v4;
          _R11 += 112i64;
        }
        else
        {
          num = info->num;
          info->num = num - 1;
          durations[v4] = durations[num - 1];
          _R8 = info->strings;
          _RDX = 112i64 * info->num;
          __asm
          {
            vmovups ymm0, ymmword ptr [rdx+r8]
            vmovups ymmword ptr [r11+r8], ymm0
            vmovups ymm1, ymmword ptr [rdx+r8+20h]
            vmovups ymmword ptr [r11+r8+20h], ymm1
            vmovups ymm0, ymmword ptr [rdx+r8+40h]
            vmovups ymmword ptr [r11+r8+40h], ymm0
            vmovups xmm1, xmmword ptr [rdx+r8+60h]
            vmovups xmmword ptr [r11+r8+60h], xmm1
          }
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
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svLines.lines, xmm0; ClStatic cls
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svLinesBuffer.lines, xmm1; ClStatic cls
  }
  cls.debug.clLines.durations = NULL;
  R_DebugFree((void **)&cls.debug.clStrings.strings);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  cls.debug.clStrings.durations = NULL;
  __asm
  {
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svStrings.strings, xmm0; ClStatic cls
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svStringsBuffer.strings, xmm1; ClStatic cls
  }
  R_DebugFree((void **)&cls.debug.clPolys.polys);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  cls.debug.clPolys.durations = NULL;
  cls.debug.clPolys.verts = NULL;
  cls.debug.svPolys.verts = NULL;
  __asm
  {
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svPolys.polys, xmm0; ClStatic cls
    vmovdqu xmmword ptr cs:?cls@@3UClStatic@@A.debug.svPolysBuffer.polys, xmm1; ClStatic cls
  }
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

