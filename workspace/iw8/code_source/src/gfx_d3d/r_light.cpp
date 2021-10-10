/*
==============
R_ChooseVisibleDynamicSpotLights
==============
*/

unsigned int __fastcall R_ChooseVisibleDynamicSpotLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  return ?R_ChooseVisibleDynamicSpotLights@@YAIPEAUGfxBackEndData@@PEAUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_RegisterLightDef
==============
*/

GfxLightDef *__fastcall R_RegisterLightDef(const char *name)
{
  return ?R_RegisterLightDef@@YAPEAUGfxLightDef@@PEBD@Z(name);
}

/*
==============
R_BoxInPlanes
==============
*/

int __fastcall R_BoxInPlanes(const vec4_t (*planes)[6], const Bounds *bounds)
{
  return ?R_BoxInPlanes@@YAHAEAY05$$CBTvec4_t@@PEIBUBounds@@@Z(planes, bounds);
}

/*
==============
R_UseBakedLighting
==============
*/

bool __fastcall R_UseBakedLighting()
{
  return ?R_UseBakedLighting@@YA_NXZ();
}

/*
==============
R_ChooseVisibleDynamicOmniLights
==============
*/

unsigned int __fastcall R_ChooseVisibleDynamicOmniLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  return ?R_ChooseVisibleDynamicOmniLights@@YAIPEAUGfxBackEndData@@PEAUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_CalcSpotLightPlanesAndBoundingBox
==============
*/

void __fastcall R_CalcSpotLightPlanesAndBoundingBox(const GfxLight *light, vec4_t (*planes)[6], Bounds *bounds)
{
  ?R_CalcSpotLightPlanesAndBoundingBox@@YAXPEBUGfxLight@@AEAY05Tvec4_t@@PEAUBounds@@@Z(light, planes, bounds);
}

/*
==============
R_SceneLightIndexToDynLightIndex
==============
*/

unsigned int __fastcall R_SceneLightIndexToDynLightIndex(unsigned int sceneLightIndex)
{
  return ?R_SceneLightIndexToDynLightIndex@@YAII@Z(sceneLightIndex);
}

/*
==============
R_RegisterIESProfile
==============
*/

GfxIESProfile *__fastcall R_RegisterIESProfile(const char *name)
{
  return ?R_RegisterIESProfile@@YAPEAUGfxIESProfile@@PEBD@Z(name);
}

/*
==============
R_GetStaticGeoDynamicLightSurfs
==============
*/

void __fastcall R_GetStaticGeoDynamicLightSurfs(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  ?R_GetStaticGeoDynamicLightSurfs@@YAXPEIAUGfxViewInfo@@I@Z(viewInfo, spotShadowUpdateIndex);
}

/*
==============
R_LightFadeOffsetRuntimeEncoding
==============
*/

void __fastcall R_LightFadeOffsetRuntimeEncoding(vec2_t *fadeOffsetStartEnd, unsigned __int8 type)
{
  ?R_LightFadeOffsetRuntimeEncoding@@YAXAEATvec2_t@@E@Z(fadeOffsetStartEnd, type);
}

/*
==============
R_ShutdownLightDefs
==============
*/

void R_ShutdownLightDefs(void)
{
  ?R_ShutdownLightDefs@@YAXXZ();
}

/*
==============
R_InitLightDefs
==============
*/

void R_InitLightDefs(void)
{
  ?R_InitLightDefs@@YAXXZ();
}

/*
==============
R_SphereInPlanes
==============
*/

int __fastcall R_SphereInPlanes(const vec4_t (*planes)[6], const vec3_t *center, const float radius)
{
  return ?R_SphereInPlanes@@YAHAEAY05$$CBTvec4_t@@AEBTvec3_t@@M@Z(planes, center, radius);
}

/*
==============
R_AllowBspSpotLightShadows
==============
*/
int R_AllowBspSpotLightShadows(int surfIndex, void *bspLightCallbackAsVoid)
{
  if ( r_spotLightShadows->current.enabled )
    return R_BoxInPlanes((const vec4_t (*)[6])((char *)bspLightCallbackAsVoid + 8), &rgp.world->surfaces.surfaceBounds[surfIndex].bounds);
  else
    return 0;
}

/*
==============
R_AllowStaticModelSpotLight
==============
*/
int R_AllowStaticModelSpotLight(int smodelIndex, void *context)
{
  __int64 v2; 

  v2 = smodelIndex;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 697, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( *((_BYTE *)context + 8) || ((0x80000000 >> (v2 & 0x1F)) & *(_DWORD *)(*(_QWORD *)context + 4 * (v2 >> 5))) != 0 )
    return R_BoxInPlanes((const vec4_t (*)[6])((char *)context + 12), &rgp.world->smodels.collectionBounds[v2]);
  else
    return 0;
}

/*
==============
R_BoxInPlanes
==============
*/
__int64 R_BoxInPlanes(const vec4_t (*planes)[6], const Bounds *bounds)
{
  int v2; 
  vec3_t *i; 

  v2 = 0;
  for ( i = &(*planes)[0].xyz + 1; (float)((float)((float)((float)((float)(bounds->midPoint.v[0] * i[-1].v[0]) - (float)(COERCE_FLOAT(LODWORD(i[-1].v[0]) & _xmm) * bounds->halfSize.v[0])) + i->v[0]) + (float)((float)(bounds->midPoint.v[1] * i[-1].v[1]) - (float)(COERCE_FLOAT(LODWORD(i[-1].v[1]) & _xmm) * bounds->halfSize.v[1]))) + (float)((float)(bounds->midPoint.v[2] * i[-1].v[2]) - (float)(COERCE_FLOAT(LODWORD(i[-1].v[2]) & _xmm) * bounds->halfSize.v[2]))) < 0.0; i = (vec3_t *)((char *)i + 16) )
  {
    if ( (unsigned int)++v2 >= 6 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
R_CalcSpotLightPlanesAndBoundingBox
==============
*/
void R_CalcSpotLightPlanesAndBoundingBox(const GfxLight *light, vec4_t (*planes)[6], Bounds *bounds)
{
  signed __int64 v3; 
  void *v4; 
  float bulbRadius; 
  vec3_t *bulbLengthVec; 
  __int128 v7; 
  float cosHalfFovOuter; 
  __int128 v9; 
  float v11; 
  __int128 v16; 
  float v17; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v24; 
  __int128 v27; 
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
  float radius; 
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
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  int v64; 
  float v65; 
  float v66; 
  __int64 v67; 
  int *v68; 
  float v69; 
  __m128 v71; 
  __m128 v75; 
  __int128 v79; 
  __int128 v87; 
  __m128 v88; 
  __int128 v90; 
  __int128 v94; 
  __m128 v97; 
  __int64 numVerts; 
  float *v108; 
  float v109; 
  __int128 v111; 
  __m128 v115; 
  __m128 v119; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  __int128 v140; 
  GfxLightModel lightModel; 
  __int128 v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  int v150[19]; 

  v4 = alloca(v3);
  bulbRadius = light->bulbRadius;
  bulbLengthVec = &light->bulbLength;
  v7 = *(unsigned __int64 *)light->bulbLength.v;
  cosHalfFovOuter = light->cosHalfFovOuter;
  v9 = v7;
  *(vec3_t *)v137.m128_f32 = light->bulbLength;
  _RDI = bounds;
  v11 = v137.m128_f32[2];
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v137.m128_f32[1] * v137.m128_f32[1])) + (float)(v11 * v11));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v16 = v137.m128_u32[1];
  *(float *)&v7 = (float)((float)(*(float *)&v7 * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + *(float *)&v7;
  *(float *)&v16 = (float)((float)(v137.m128_f32[1] * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + v137.m128_f32[1];
  v17 = (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + v11;
  *(vec3_t *)v139.m128_f32 = light->dir;
  LODWORD(v19) = COERCE_UNSIGNED_INT((float)((float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)light->dir.v, (__m128)*(unsigned __int64 *)light->dir.v, 85).m128_f32[0] * *(float *)&v16) + (float)(COERCE_FLOAT(*(_QWORD *)light->dir.v) * *(float *)&v7)) + (float)(v17 * v139.m128_f32[2])) & _xmm;
  *(float *)&_XMM3 = light->dir.v[1];
  *(float *)&v16 = fsqrt((float)((float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(*(float *)&v7 * *(float *)&v7)) + (float)(v17 * v17)) - (float)(v19 * v19)) * cosHalfFovOuter;
  v20 = light->dir.v[0];
  *(float *)&v16 = (float)(*(float *)&v16 / fsqrt(1.0 - (float)(cosHalfFovOuter * cosHalfFovOuter))) + v19;
  v21 = v16;
  v22 = (float)(v20 * *(float *)&v16) + light->origin.v[0];
  v23 = (float)(*(float *)&v16 * *(float *)&_XMM3) + light->origin.v[1];
  v24 = (float)(*(float *)&v16 * v139.m128_f32[2]) + light->origin.v[2];
  *(float *)&v16 = (float)(*(float *)&v16 + v19) + light->shadowNearPlaneBias;
  _XMM0 = v16;
  v27 = v21;
  *(float *)&v27 = *(float *)&v21 + light->radius;
  _XMM1 = v27;
  __asm
  {
    vmaxss  xmm7, xmm0, xmm11
    vmaxss  xmm5, xmm1, xmm0
  }
  LODWORD(v30) = LODWORD(v20) ^ _xmm;
  LODWORD(v31) = _XMM3 ^ _xmm;
  v135 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * *(float *)&_XMM7) + v22;
  v134 = *(float *)&_XMM7;
  v130 = *(float *)&_XMM5;
  (*planes)[0].v[0] = v20;
  *(_QWORD *)&(*planes)[0].xyz.y = *(_QWORD *)&light->dir.y;
  v128 = (float)(COERCE_FLOAT(_XMM3 ^ _xmm) * *(float *)&_XMM7) + v23;
  (*planes)[0].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v128 * light->dir.v[1]) + (float)(v135 * light->dir.v[0])) + (float)((float)((float)(COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * *(float *)&_XMM7) + v24) * light->dir.v[2])) ^ _xmm);
  v129 = (float)(COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * *(float *)&_XMM7) + v24;
  R_ComputeSpotLightCrossDirs(light, (vec3_t *)&v142);
  *(float *)&_XMM3 = light->cosHalfFovOuter;
  v32 = *(float *)&v142;
  v33 = *((float *)&v142 + 1);
  v133 = fsqrt(1.0 - (float)(*(float *)&_XMM3 * *(float *)&_XMM3));
  v34 = COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * COERCE_FLOAT(LODWORD(v133) ^ _xmm);
  *(float *)&_XMM7 = v30 * COERCE_FLOAT(LODWORD(v133) ^ _xmm);
  *(float *)&v27 = v31 * COERCE_FLOAT(LODWORD(v133) ^ _xmm);
  v35 = (float)(*(float *)&v142 * *(float *)&_XMM3) + *(float *)&_XMM7;
  (*planes)[1].v[0] = v35;
  *(float *)&_XMM1 = (float)(v33 * *(float *)&_XMM3) + *(float *)&v27;
  *(float *)&_XMM0 = *(float *)&_XMM3 * *((float *)&v142 + 2);
  (*planes)[1].v[1] = *(float *)&_XMM1;
  (*planes)[1].v[2] = *(float *)&_XMM0 + v34;
  (*planes)[1].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v23 * *(float *)&_XMM1) + (float)(v22 * v35)) + (float)(v24 * (float)(*(float *)&_XMM0 + v34))) ^ _xmm);
  *(float *)&_XMM3 = light->cosHalfFovOuter;
  v36 = (float)(*(float *)&_XMM3 * *((float *)&v142 + 3)) + *(float *)&_XMM7;
  *(float *)&_XMM1 = (float)(*(float *)&_XMM3 * v143) + *(float *)&v27;
  *(float *)&_XMM3 = (float)(*(float *)&_XMM3 * v144) + v34;
  (*planes)[2].v[1] = *(float *)&_XMM1;
  (*planes)[2].v[0] = v36;
  (*planes)[2].v[2] = *(float *)&_XMM3;
  (*planes)[2].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v23 * *(float *)&_XMM1) + (float)(v36 * v22)) + (float)(*(float *)&_XMM3 * v24)) ^ _xmm);
  LODWORD(_XMM3) = LODWORD(light->cosHalfFovOuter) ^ _xmm;
  v37 = (float)(v32 * *(float *)&_XMM3) + *(float *)&_XMM7;
  v38 = (float)(v33 * *(float *)&_XMM3) + *(float *)&v27;
  *(float *)&_XMM3 = (float)(*(float *)&_XMM3 * *((float *)&v142 + 2)) + v34;
  (*planes)[3].v[1] = v38;
  (*planes)[3].v[0] = v37;
  (*planes)[3].v[2] = *(float *)&_XMM3;
  (*planes)[3].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v37 * v22) + (float)(v23 * v38)) + (float)(*(float *)&_XMM3 * v24)) ^ _xmm);
  LODWORD(_XMM3) = LODWORD(light->cosHalfFovOuter) ^ _xmm;
  v39 = (float)(*(float *)&_XMM3 * *((float *)&v142 + 3)) + *(float *)&_XMM7;
  v40 = (float)(*(float *)&_XMM3 * v143) + *(float *)&v27;
  *(float *)&_XMM3 = (float)(*(float *)&_XMM3 * v144) + v34;
  (*planes)[4].v[1] = v40;
  (*planes)[4].v[2] = *(float *)&_XMM3;
  (*planes)[4].v[0] = v39;
  (*planes)[4].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v39 * v22) + (float)(v23 * v40)) + (float)(*(float *)&_XMM3 * v24)) ^ _xmm);
  v131 = (float)(v31 * v130) + v23;
  v136 = (float)(v30 * v130) + v22;
  (*planes)[5].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v31 * v131) + (float)(v136 * v30)) + (float)(COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * (float)((float)(COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * v130) + v24))) ^ _xmm);
  v132 = (float)(COERCE_FLOAT(v139.m128_i32[2] ^ _xmm) * v130) + v24;
  (*planes)[5].v[0] = v30;
  (*planes)[5].v[1] = v31;
  (*planes)[5].v[2] = COERCE_FLOAT(v139.m128_i32[2] ^ _xmm);
  if ( _RDI )
  {
    v41 = light->cosHalfFovOuter;
    radius = light->radius;
    if ( v41 < 0.5 || radius > 1200.0 )
    {
      R_GenerateSpotLightModel(&light->origin, &light->dir, v41, radius, bulbLengthVec, light->bulbRadius, &lightModel);
      numVerts = lightModel.numVerts;
      *(_QWORD *)_RDI->midPoint.v = 0i64;
      _RDI->midPoint.v[2] = 0.0;
      _RDI->halfSize.v[0] = -3.4028235e38;
      _RDI->halfSize.v[1] = -3.4028235e38;
      _RDI->halfSize.v[2] = -3.4028235e38;
      if ( (_DWORD)numVerts )
      {
        v108 = &lightModel.verts[0].v[2];
        do
        {
          v109 = *(v108 - 2);
          v108 += 3;
          HIDWORD(v142) = 0;
          v139.m128_i32[3] = 0;
          v137.m128_i32[3] = 0;
          v111 = v142;
          *(float *)&v111 = v109;
          _XMM5 = v111;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rax-10h], 10h
            vinsertps xmm5, xmm5, dword ptr [rax-0Ch], 20h ; ' '
          }
          v115 = v139;
          v115.m128_f32[0] = _RDI->midPoint.v[0];
          _XMM4 = v115;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
            vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
          }
          v119 = v137;
          v119.m128_f32[0] = _RDI->halfSize.v[0];
          _XMM3 = v119;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
            vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
          }
          _XMM0 = _mm128_sub_ps(_XMM4, _XMM3);
          _XMM1 = _mm128_add_ps(_XMM4, _XMM3);
          __asm
          {
            vminps  xmm2, xmm0, xmm5
            vmaxps  xmm0, xmm1, xmm5
          }
          v137 = _XMM3;
          _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
          _RDI->midPoint.v[0] = _XMM3.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rdi+4], xmm3, 1
            vextractps dword ptr [rdi+8], xmm3, 2
          }
          v139 = _XMM4;
          _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
          _RDI->halfSize.v[0] = _XMM4.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rdi+10h], xmm4, 1
            vextractps dword ptr [rdi+14h], xmm4, 2
          }
          v142 = _XMM5;
          --numVerts;
        }
        while ( numVerts );
      }
    }
    else
    {
      v43 = v143;
      v44 = v133 / v41;
      v45 = (float)(v133 / v41) * v134;
      v46 = COERCE_FLOAT(LODWORD(v45) ^ _xmm) * *((float *)&v142 + 3);
      v47 = COERCE_FLOAT(LODWORD(v45) ^ _xmm) * v143;
      v48 = (float)(COERCE_FLOAT(LODWORD(v45) ^ _xmm) * v32) + v135;
      v49 = (float)(COERCE_FLOAT(LODWORD(v45) ^ _xmm) * v33) + v128;
      v145 = v46 + v48;
      v146 = v47 + v49;
      v50 = (float)(COERCE_FLOAT(LODWORD(v45) ^ _xmm) * *((float *)&v142 + 2)) + v129;
      v51 = COERCE_FLOAT(LODWORD(v45) ^ _xmm) * v144;
      v147 = v51 + v50;
      v52 = (float)(v32 * v45) + v135;
      v148 = v46 + v52;
      v53 = (float)(v33 * v45) + v128;
      v149 = v47 + v53;
      v54 = (float)(*((float *)&v142 + 2) * v45) + v129;
      *(float *)v150 = v54 + v51;
      *(float *)&v150[1] = (float)(*((float *)&v142 + 3) * v45) + v52;
      *(float *)&v150[2] = v53 + (float)(v143 * v45);
      *(float *)&v150[3] = v54 + (float)(v45 * v144);
      *(float *)&v150[5] = v49 + (float)(v143 * v45);
      v55 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * v144;
      *(float *)&v150[4] = v48 + (float)(*((float *)&v142 + 3) * v45);
      *(float *)&v150[6] = v50 + (float)(v45 * v144);
      v56 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * v143;
      v57 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * v32) + v136;
      v58 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * *((float *)&v142 + 1)) + v131;
      v59 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * *((float *)&v142 + 3);
      v60 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 * v130) ^ _xmm) * *((float *)&v142 + 2)) + v132;
      *(float *)&v150[7] = v57 + v59;
      *(float *)&v150[8] = v58 + v56;
      *(float *)&v150[9] = v60 + v55;
      v61 = (float)((float)(v44 * v130) * *((float *)&v142 + 1)) + v131;
      v62 = (float)(v32 * (float)(v44 * v130)) + v136;
      v63 = (float)(*((float *)&v142 + 2) * (float)(v44 * v130)) + v132;
      *(float *)&v64 = v61 + v56;
      v65 = *((float *)&v142 + 3) * (float)(v44 * v130);
      v150[11] = v64;
      *(float *)&v150[10] = v62 + v59;
      *(float *)&v150[13] = v65 + v62;
      *(float *)&v150[12] = v63 + v55;
      v66 = (float)(v44 * v130) * v144;
      v67 = 4i64;
      *(_QWORD *)_RDI->midPoint.v = 0i64;
      _RDI->midPoint.v[2] = 0.0;
      v68 = v150;
      *(float *)&v150[14] = v61 + (float)(v43 * (float)(v44 * v130));
      *(float *)&v150[16] = v57 + v65;
      *(float *)&v150[15] = v63 + v66;
      *(float *)&v150[18] = v60 + v66;
      *(float *)&v150[17] = v58 + (float)(v43 * (float)(v44 * v130));
      _RDI->halfSize.v[0] = -3.4028235e38;
      _RDI->halfSize.v[1] = -3.4028235e38;
      _RDI->halfSize.v[2] = -3.4028235e38;
      do
      {
        v69 = *((float *)v68 - 5);
        v68 += 6;
        v139.m128_i32[3] = 0;
        v137.m128_i32[3] = 0;
        HIDWORD(v142) = 0;
        v71 = v139;
        v71.m128_f32[0] = v69;
        _XMM5 = v71;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rax-28h], 10h
          vinsertps xmm5, xmm5, dword ptr [rax-24h], 20h ; ' '
        }
        v75 = v137;
        v75.m128_f32[0] = _RDI->midPoint.v[0];
        _XMM4 = v75;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
          vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
        }
        v79 = v142;
        *(float *)&v79 = _RDI->halfSize.v[0];
        _XMM3 = v79;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
        }
        _XMM0 = _mm128_sub_ps(_XMM4, _XMM3);
        _XMM1 = _mm128_add_ps(_XMM4, _XMM3);
        __asm
        {
          vminps  xmm2, xmm0, xmm5
          vmaxps  xmm0, xmm1, xmm5
        }
        v142 = (__int128)_XMM3;
        HIDWORD(v142) = 0;
        _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
        _XMM0.m128_i32[0] = *(v68 - 8);
        v87 = v142;
        _RDI->midPoint.v[0] = _XMM3.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rdi+4], xmm3, 1
          vextractps dword ptr [rdi+8], xmm3, 2
        }
        v88 = _mm128_sub_ps(_XMM3, _XMM2);
        _RDI->halfSize.v[0] = v88.m128_f32[0];
        v138 = _XMM4;
        v138.m128_i32[3] = 0;
        v140 = _XMM5;
        HIDWORD(v140) = 0;
        v90 = v140;
        *(float *)&v90 = _XMM0.m128_f32[0];
        _XMM6 = v90;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rax-1Ch], 10h
          vinsertps xmm6, xmm6, dword ptr [rax-18h], 20h ; ' '
        }
        v94 = v87;
        *(float *)&v94 = v88.m128_f32[0];
        _XMM1 = v94;
        _RDI->halfSize.v[1] = _mm_shuffle_ps(v88, v88, 85).m128_f32[0];
        __asm { vinsertps xmm1, xmm1, xmm4, 10h }
        _RDI->halfSize.v[2] = _mm_shuffle_ps(v88, v88, 170).m128_f32[0];
        v97 = v138;
        v97.m128_f32[0] = _RDI->midPoint.v[0];
        _XMM3 = v97;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
          vinsertps xmm1, xmm1, xmm5, 20h ; ' '
        }
        _XMM0 = _mm128_sub_ps(_XMM3, _XMM1);
        __asm { vminps  xmm2, xmm0, xmm6 }
        v142 = (__int128)_XMM1;
        _XMM1 = _mm128_add_ps(_XMM3, _XMM1);
        __asm { vmaxps  xmm0, xmm1, xmm6 }
        v137 = _XMM3;
        _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
        _RDI->midPoint.v[0] = _XMM3.m128_f32[0];
        _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
        __asm
        {
          vextractps dword ptr [rdi+4], xmm3, 1
          vextractps dword ptr [rdi+8], xmm3, 2
        }
        _RDI->halfSize.v[0] = _XMM4.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rdi+10h], xmm4, 1
          vextractps dword ptr [rdi+14h], xmm4, 2
        }
        v139 = _XMM6;
        --v67;
      }
      while ( v67 );
    }
  }
}

/*
==============
R_ChooseVisibleDynamicOmniLights
==============
*/
__int64 R_ChooseVisibleDynamicOmniLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  GfxBackEndData *v3; 
  int v4; 
  __int64 v5; 
  volatile int v6; 
  float *v7; 
  unsigned int visDynamicOmniLightCount; 
  float v9; 
  float v10; 
  unsigned int dynamicOmniLightLimit; 
  __int64 result; 
  GfxDynamicLight *v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  GfxDynamicLight *lights[64]; 

  v3 = data;
  v4 = 1;
  if ( scene.dynamicOmniLightCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 517, ASSERT_TYPE_SANITY, "( ( scene.dynamicOmniLightCount <= ( 32 * 2 ) ) )", "( scene.dynamicOmniLightCount ) = %i", scene.dynamicOmniLightCount) )
    __debugbreak();
  R_CullDynamicPointLightsInCameraView(viewInfo->viewInfoIndex);
  v5 = 0i64;
  scene.visDynamicOmniLightCount = 0;
  v6 = 0;
  if ( scene.dynamicOmniLightCount > 0 )
  {
    v7 = &scene.dynamicOmniLight[0].bounds.midPoint.v[2];
    do
    {
      if ( (unsigned int)v6 >= 0x40 )
      {
        LODWORD(v16) = 64;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( (v4 & scene.isDynamicOmniLightCulled[(__int64)v6 >> 5]) == 0 )
      {
        visDynamicOmniLightCount = scene.visDynamicOmniLightCount;
        lights[scene.visDynamicOmniLightCount] = (GfxDynamicLight *)(v7 - 64);
        scene.visDynamicOmniLightCount = visDynamicOmniLightCount + 1;
        *(v7 - 2) = *(v7 - 50);
        *(v7 - 1) = *(v7 - 49);
        *v7 = *(v7 - 48);
        v9 = *(v7 - 47);
        v7[1] = v9;
        v7[2] = v9;
        v7[3] = v9;
        v7[4] = *(v7 - 50);
        v7[5] = *(v7 - 49);
        v7[6] = *(v7 - 48);
        v10 = *(v7 - 47);
        v7[7] = v10;
        v7[8] = v10 * v10;
      }
      ++v6;
      v4 = __ROL4__(v4, 1);
      v7 += 76;
    }
    while ( v6 < scene.dynamicOmniLightCount );
    v3 = data;
  }
  dynamicOmniLightLimit = 32 - scene.visDynamicSpotLightCount;
  if ( scene.dynamicOmniLightLimit < (signed int)(32 - scene.visDynamicSpotLightCount) )
    dynamicOmniLightLimit = scene.dynamicOmniLightLimit;
  if ( dynamicOmniLightLimit > 0x20 )
  {
    LODWORD(v15) = dynamicOmniLightLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 543, ASSERT_TYPE_ASSERT, "( ( visibleLimit <= 32 ) )", "( visibleLimit ) = %i", v15) )
      __debugbreak();
  }
  result = scene.visDynamicOmniLightCount;
  if ( scene.visDynamicOmniLightCount > dynamicOmniLightLimit )
  {
    if ( dynamicOmniLightLimit )
      R_MostImportantLights((const GfxDynamicLight **)lights, scene.visDynamicOmniLightCount, dynamicOmniLightLimit);
    result = dynamicOmniLightLimit;
    scene.visDynamicOmniLightCount = dynamicOmniLightLimit;
  }
  if ( (_DWORD)result )
  {
    do
    {
      v13 = lights[v5];
      v14 = R_AddDynamicSceneLight(v3, viewInfo, &v13->lightCommon);
      if ( v14 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
        __debugbreak();
      v5 = (unsigned int)(v5 + 1);
      scene.sceneDynamicLight[v14 - rgp.world->primaryLightCount] = v13;
      result = scene.visDynamicOmniLightCount;
    }
    while ( (unsigned int)v5 < scene.visDynamicOmniLightCount );
  }
  scene.addedDynamicLightCount += result;
  return result;
}

/*
==============
R_ChooseVisibleDynamicSpotLights
==============
*/
__int64 R_ChooseVisibleDynamicSpotLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  __int64 v4; 
  volatile int i; 
  unsigned int v6; 
  unsigned int visDynamicSpotLightCount; 
  unsigned int dynamicSpotLightLimit; 
  __int64 result; 
  GfxDynamicLight *v10; 
  unsigned int v11; 
  __int64 v12; 
  volatile int dynamicSpotLightCount; 
  __int64 v14; 
  GfxDynamicLight *lights[64]; 

  if ( scene.dynamicSpotLightCount > 64 )
  {
    dynamicSpotLightCount = scene.dynamicSpotLightCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 466, ASSERT_TYPE_SANITY, "( ( scene.dynamicSpotLightCount <= ( 32 * 2 ) ) )", "( scene.dynamicSpotLightCount ) = %i", dynamicSpotLightCount) )
      __debugbreak();
  }
  R_CullDynamicSpotLightInCameraView(viewInfo->viewInfoIndex);
  v4 = 0i64;
  scene.visDynamicSpotLightCount = 0;
  for ( i = 0; i < scene.dynamicSpotLightCount; ++i )
  {
    if ( (unsigned int)i >= 0x40 )
    {
      LODWORD(v14) = 64;
      LODWORD(v12) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v12, v14) )
        __debugbreak();
    }
    v6 = scene.isDynamicSpotLightCulled[(__int64)i >> 5];
    if ( !_bittest((const int *)&v6, i & 0x1F) )
    {
      visDynamicSpotLightCount = scene.visDynamicSpotLightCount;
      lights[scene.visDynamicSpotLightCount] = &scene.dynamicSpotLight[i];
      scene.visDynamicSpotLightCount = visDynamicSpotLightCount + 1;
    }
  }
  dynamicSpotLightLimit = scene.dynamicSpotLightLimit;
  if ( scene.dynamicSpotLightLimit > 0x20u )
  {
    LODWORD(v12) = scene.dynamicSpotLightLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 481, ASSERT_TYPE_ASSERT, "( ( visibleLimit <= 32 ) )", "( visibleLimit ) = %i", v12) )
      __debugbreak();
  }
  result = scene.visDynamicSpotLightCount;
  if ( scene.visDynamicSpotLightCount > dynamicSpotLightLimit )
  {
    if ( dynamicSpotLightLimit )
      R_MostImportantLights((const GfxDynamicLight **)lights, scene.visDynamicSpotLightCount, dynamicSpotLightLimit);
    result = dynamicSpotLightLimit;
    scene.visDynamicSpotLightCount = dynamicSpotLightLimit;
  }
  if ( (_DWORD)result )
  {
    do
    {
      v10 = lights[v4];
      if ( v10->lightCommon.type != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 498, ASSERT_TYPE_ASSERT, "(light->type == 2)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT") )
        __debugbreak();
      v11 = R_AddDynamicSceneLight(data, viewInfo, &v10->lightCommon);
      if ( v11 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
        __debugbreak();
      v4 = (unsigned int)(v4 + 1);
      scene.sceneDynamicLight[v11 - rgp.world->primaryLightCount] = v10;
      result = scene.visDynamicSpotLightCount;
    }
    while ( (unsigned int)v4 < scene.visDynamicSpotLightCount );
  }
  scene.addedDynamicLightCount += result;
  return result;
}

/*
==============
R_ComputeSpotLightCrossDirs
==============
*/
void R_ComputeSpotLightCrossDirs(const GfxLight *light, vec3_t *crossDirs)
{
  vec3_t *p_dir; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  float v8; 
  __int64 v9; 
  float v10; 
  unsigned int v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v17; 
  __int128 v18; 
  __int64 v22; 
  __int64 v23; 

  p_dir = &light->dir;
  LODWORD(v3) = 0;
  v4 = 1;
  v5 = 0i64;
  v6 = 1i64;
  do
  {
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    LODWORD(v8) = LODWORD(p_dir->v[v5]) & _xmm;
    if ( (unsigned int)v4 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v9 = v6;
    LODWORD(v10) = LODWORD(p_dir->v[v6]) & _xmm;
    if ( v8 <= v10 )
      v9 = v5;
    v5 = v9;
    v11 = v4;
    if ( v8 <= v10 )
      v11 = v3;
    ++v4;
    ++v6;
    v3 = (int)v11;
  }
  while ( v4 < 3 );
  *(_QWORD *)crossDirs->v = 0i64;
  crossDirs->v[2] = 0.0;
  if ( v11 >= 3 )
  {
    LODWORD(v23) = 3;
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  crossDirs->v[v3] = 1.0;
  Vec3Cross(p_dir, crossDirs, crossDirs + 1);
  v12 = LODWORD(crossDirs[1].v[0]);
  v13 = v12;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(crossDirs[1].v[1] * crossDirs[1].v[1])) + (float)(crossDirs[1].v[2] * crossDirs[1].v[2]));
  _XMM4 = v13;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  crossDirs[1].v[0] = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM0);
  crossDirs[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * crossDirs[1].v[1];
  crossDirs[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * crossDirs[1].v[2];
  Vec3Cross(crossDirs + 1, p_dir, crossDirs);
  v17 = LODWORD(crossDirs->v[0]);
  v18 = v17;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(crossDirs->v[1] * crossDirs->v[1])) + (float)(crossDirs->v[2] * crossDirs->v[2]));
  _XMM4 = v18;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  crossDirs->v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
  crossDirs->v[1] = (float)(1.0 / *(float *)&_XMM0) * crossDirs->v[1];
  crossDirs->v[2] = (float)(1.0 / *(float *)&_XMM0) * crossDirs->v[2];
}

/*
==============
R_GetBspSpotLightSurfs
==============
*/
void R_GetBspSpotLightSurfs(const GfxLight *light, const vec4_t *planes, const R_CollInfo *collInfo, const unsigned int dynLightIndex, GfxDrawList *drawListShadow, GfxDrawListType drawlistyType)
{
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  unsigned int surfArraySize; 
  GfxSurface **surfLists; 
  GfxBspSurfListOut out; 
  __int64 callbackContext; 
  __m256i v16; 
  __m256i v17; 
  __m256i v18; 
  char v19; 

  if ( !drawListShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 663, ASSERT_TYPE_ASSERT, "(drawListShadow)", (const char *)&queryFormat, "drawListShadow") )
    __debugbreak();
  v9 = *(__m256i *)planes->v;
  v10 = *(__m256i *)planes[2].v;
  surfLists = (GfxSurface **)&v19;
  callbackContext = 0i64;
  v16 = v9;
  v11 = *(__m256i *)planes[4].v;
  v17 = v10;
  v18 = v11;
  if ( R_SphereSurfaces(collInfo, allowSurf, &callbackContext, &surfLists, 0x800u, &surfArraySize, 1u) )
    R_WarnOncePerFrame(R_WARN_BSPSURF_SPOT_LIGHT_LIMIT, 2048i64, light->origin.v[0], light->origin.v[1], light->origin.v[2]);
  if ( surfArraySize )
  {
    out.drawlistType = drawlistyType;
    *(_QWORD *)&out.missingTransient = 0i64;
    out.bspSurfList = &drawListShadow->bspSurfList;
    R_GetSortedBspSurfListIndirect(surfLists, surfArraySize, &out);
  }
}

/*
==============
R_GetStaticGeoDynamicLightSurfs
==============
*/
void R_GetStaticGeoDynamicLightSurfs(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  __int64 v2; 
  __int64 sceneLightIndex; 
  GfxLight *v5; 
  __int64 v6; 
  const GfxDynamicLight *v7; 
  float v8; 
  vec4_t *planes; 
  float v10; 
  __m256i v11; 
  unsigned int v12; 
  unsigned int *callbackContext; 
  bool enabled; 
  __m256i v15; 
  __m256i v16; 
  __m256i v17; 
  R_CollInfo collInfo; 
  unsigned __int16 smodelList[1024]; 

  v2 = spotShadowUpdateIndex;
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 748, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 749, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 750, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->sceneLightCount <= rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 751, ASSERT_TYPE_ASSERT, "(frontEndDataOut->sceneLightCount > rgp.world->primaryLightCount)", (const char *)&queryFormat, "frontEndDataOut->sceneLightCount > rgp.world->primaryLightCount") )
    __debugbreak();
  sceneLightIndex = frontEndDataOut->spotShadowUpdates[v2].sceneLightIndex;
  if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 754, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
    __debugbreak();
  v5 = &frontEndDataOut->sceneLights[sceneLightIndex];
  if ( (unsigned __int8)(v5->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 757, ASSERT_TYPE_ASSERT, "(light->type == 3 || light->type == 2)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_OMNI || light->type == GFX_LIGHT_TYPE_SPOT") )
    __debugbreak();
  if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
    __debugbreak();
  v6 = (unsigned int)(sceneLightIndex - rgp.world->primaryLightCount);
  v7 = scene.sceneDynamicLight[v6];
  v8 = v7->bounds.halfSize.v[2];
  planes = v7->planes;
  v10 = (float)(v7->bounds.halfSize.v[0] * v7->bounds.halfSize.v[0]) + (float)(v7->bounds.halfSize.v[1] * v7->bounds.halfSize.v[1]);
  *(_QWORD *)collInfo.sphere.origin.v = *(_QWORD *)v7->bounds.midPoint.v;
  collInfo.sphere.origin.v[2] = v7->bounds.midPoint.v[2];
  collInfo.sphere.radiusSq = v10 + (float)(v8 * v8);
  collInfo.sphere.radius = fsqrt(collInfo.sphere.radiusSq);
  *(__m256i *)collInfo.planes[0].v = *(__m256i *)v7->planes[0].v;
  *(__m256i *)collInfo.planes[2].v = *(__m256i *)v7->planes[2].v;
  v11 = *(__m256i *)v7->planes[4].v;
  collInfo.planeCount = 6;
  *(__m256i *)collInfo.planes[4].v = v11;
  R_SetupSphereStaticGeo(&collInfo, &frontEndDataOut->transientDrawContext);
  R_GetBspSpotLightSurfs(v5, planes, &collInfo, v6, &viewInfo->drawList[(int)v2 + 29], (GfxDrawListType)(v2 + 29));
  callbackContext = rgp.world->dpvs.smodelVisData[0];
  enabled = sm_dynlightAllSModels->current.enabled;
  v15 = *(__m256i *)planes->v;
  v16 = *(__m256i *)planes[2].v;
  v17 = *(__m256i *)planes[4].v;
  v12 = R_SphereStaticModels(&collInfo, R_AllowStaticModelSpotLight, &callbackContext, smodelList, 0x400u);
  if ( v12 == 1024 )
    R_WarnOncePerFrame(R_WARN_DLIGHT_SMODEL_LIMIT, 1024i64);
  R_AddAllStaticModelSurfacesDynLight(viewInfo, sceneLightIndex, smodelList, v12, &viewInfo->drawList[(int)v2 + 29], v2);
}

/*
==============
R_InitLightDefs
==============
*/
void R_InitLightDefs(void)
{
  rgp.dlightDef = DB_FindXAssetHeader(ASSET_TYPE_LIGHT_DEF, "light_dynamic", 1).lightDef;
}

/*
==============
R_LightFadeOffsetRuntimeEncoding
==============
*/
void R_LightFadeOffsetRuntimeEncoding(vec2_t *fadeOffsetStartEnd, unsigned __int8 type)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  v4 = fadeOffsetStartEnd->v[0];
  v5 = fadeOffsetStartEnd->v[1];
  if ( type == 3 )
  {
    v4 = v4 * v4;
    v5 = v5 * v5;
    fadeOffsetStartEnd->v[0] = v4;
    fadeOffsetStartEnd->v[1] = v5;
  }
  v6 = 0.0;
  v8 = v5 - v4;
  v7 = v5 - v4;
  if ( v4 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 241, ASSERT_TYPE_ASSERT, "(fadeOffsetStartEnd[0] >= 0.0f)", (const char *)&queryFormat, "fadeOffsetStartEnd[0] >= 0.0f") )
    __debugbreak();
  if ( v8 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 242, ASSERT_TYPE_ASSERT, "(endMinusStart >= 0.0f)", (const char *)&queryFormat, "endMinusStart >= 0.0f") )
    __debugbreak();
  v9 = FLOAT_1_0;
  if ( v8 > 0.001 )
  {
    v6 = 1.0 / v7;
    LODWORD(v9) = COERCE_UNSIGNED_INT((float)(1.0 / v7) * fadeOffsetStartEnd->v[0]) ^ _xmm;
  }
  fadeOffsetStartEnd->v[1] = v9;
  fadeOffsetStartEnd->v[0] = v6;
  if ( type == 3 )
    fadeOffsetStartEnd->v[1] = COERCE_FLOAT(LODWORD(v9) ^ _xmm);
}

/*
==============
R_MostImportantLights
==============
*/
void R_MostImportantLights(const GfxDynamicLight **lights, int lightCount, int keepCount)
{
  int v4; 
  const GfxDynamicLight *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  const GfxDynamicLight *v13; 
  __int64 v15; 
  const GfxDynamicLight *v16; 
  const GfxDynamicLight *v18; 
  const GfxDynamicLight *v19; 
  int v20; 
  int v21; 

  v4 = lightCount;
  v21 = keepCount;
  v20 = lightCount;
  if ( lightCount <= keepCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 391, ASSERT_TYPE_ASSERT, "(lightCount > keepCount)", (const char *)&queryFormat, "lightCount > keepCount") )
    __debugbreak();
  if ( keepCount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 392, ASSERT_TYPE_ASSERT, "(keepCount >= 1)", (const char *)&queryFormat, "keepCount >= 1") )
    __debugbreak();
  while ( 1 )
  {
    v6 = *lights;
    v7 = 0;
    v8 = v4;
    v9 = v4;
    v10 = 0i64;
    while ( 1 )
    {
      if ( v9 < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 405, ASSERT_TYPE_SANITY, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      do
      {
        v11 = v7;
        v12 = v10;
        ++v7;
        if ( ++v10 >= v9 )
          break;
        v13 = lights[v10];
      }
      while ( v13->lightCommon.type == v6->lightCommon.type ? (float)((float)((float)((float)((float)(rg.viewOrg.v[1] - v6->lightCommon.origin.v[1]) * (float)(rg.viewOrg.v[1] - v6->lightCommon.origin.v[1])) + (float)((float)(rg.viewOrg.v[0] - v6->lightCommon.origin.v[0]) * (float)(rg.viewOrg.v[0] - v6->lightCommon.origin.v[0]))) + (float)((float)(rg.viewOrg.v[2] - v6->lightCommon.origin.v[2]) * (float)(rg.viewOrg.v[2] - v6->lightCommon.origin.v[2]))) * (float)(v13->lightCommon.radius * v13->lightCommon.radius)) >= (float)((float)((float)((float)((float)(rg.viewOrg.v[1] - v13->lightCommon.origin.v[1]) * (float)(rg.viewOrg.v[1] - v13->lightCommon.origin.v[1])) + (float)((float)(rg.viewOrg.v[0] - v13->lightCommon.origin.v[0]) * (float)(rg.viewOrg.v[0] - v13->lightCommon.origin.v[0]))) + (float)((float)(rg.viewOrg.v[2] - v13->lightCommon.origin.v[2]) * (float)(rg.viewOrg.v[2] - v13->lightCommon.origin.v[2]))) * (float)(v6->lightCommon.radius * v6->lightCommon.radius)) : v13->lightCommon.type == 2 );
      if ( v12 >= v9 )
        break;
      do
      {
        --v8;
        v15 = v9--;
        if ( v15 <= v10 )
          break;
        v16 = lights[v9];
      }
      while ( v6->lightCommon.type == v16->lightCommon.type ? (float)((float)((float)((float)((float)(rg.viewOrg.v[1] - v16->lightCommon.origin.v[1]) * (float)(rg.viewOrg.v[1] - v16->lightCommon.origin.v[1])) + (float)((float)(rg.viewOrg.v[0] - v16->lightCommon.origin.v[0]) * (float)(rg.viewOrg.v[0] - v16->lightCommon.origin.v[0]))) + (float)((float)(rg.viewOrg.v[2] - v16->lightCommon.origin.v[2]) * (float)(rg.viewOrg.v[2] - v16->lightCommon.origin.v[2]))) * (float)(v6->lightCommon.radius * v6->lightCommon.radius)) >= (float)((float)((float)((float)((float)(rg.viewOrg.v[1] - v6->lightCommon.origin.v[1]) * (float)(rg.viewOrg.v[1] - v6->lightCommon.origin.v[1])) + (float)((float)(rg.viewOrg.v[0] - v6->lightCommon.origin.v[0]) * (float)(rg.viewOrg.v[0] - v6->lightCommon.origin.v[0]))) + (float)((float)(rg.viewOrg.v[2] - v6->lightCommon.origin.v[2]) * (float)(rg.viewOrg.v[2] - v6->lightCommon.origin.v[2]))) * (float)(v16->lightCommon.radius * v16->lightCommon.radius)) : v6->lightCommon.type == 2 );
      if ( v12 >= v9 )
        break;
      v18 = lights[v10];
      lights[v10] = lights[v9];
      lights[v9] = v18;
    }
    if ( v7 != v8 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 427, ASSERT_TYPE_SANITY, "( bot == top + 1 )", (const char *)&queryFormat, "bot == top + 1") )
      __debugbreak();
    if ( v7 == v20 )
    {
      v19 = *lights;
      v7 = v11;
      *lights = lights[v8];
      lights[v8] = v19;
    }
    if ( v7 == v21 )
      break;
    if ( v20 <= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 443, ASSERT_TYPE_SANITY, "( lightCount > bot )", (const char *)&queryFormat, "lightCount > bot") )
      __debugbreak();
    if ( v7 >= v21 )
    {
      v4 = v7;
      v20 = v7;
    }
    else
    {
      v4 = v20 - v7;
      v20 -= v7;
      v21 -= v7;
      lights += v7;
    }
  }
}

/*
==============
R_RegisterIESProfile
==============
*/
GfxIESProfile *R_RegisterIESProfile(const char *name)
{
  return 0i64;
}

/*
==============
R_RegisterLightDef
==============
*/
GfxLightDef *R_RegisterLightDef(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_LIGHT_DEF, name, 1).lightDef;
}

/*
==============
R_SceneLightIndexToDynLightIndex
==============
*/
__int64 R_SceneLightIndexToDynLightIndex(unsigned int sceneLightIndex)
{
  if ( sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
    __debugbreak();
  return sceneLightIndex - rgp.world->primaryLightCount;
}

/*
==============
R_ShutdownLightDefs
==============
*/
void R_ShutdownLightDefs(void)
{
  ;
}

/*
==============
R_SphereInPlanes
==============
*/
__int64 R_SphereInPlanes(const vec4_t (*planes)[6], const vec3_t *center, const float radius)
{
  int v3; 
  float *i; 

  v3 = 0;
  for ( i = &(*planes)[0].v[2]; (float)((float)((float)((float)((float)(center->v[1] * *(i - 1)) + (float)(center->v[0] * *(i - 2))) + (float)(center->v[2] * *i)) + i[1]) - radius) <= 0.0; i += 4 )
  {
    if ( (unsigned int)++v3 >= 6 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
R_UseBakedLighting
==============
*/
bool R_UseBakedLighting()
{
  if ( !rgp.world )
    return 0;
  return rgp.world->voxelTreeCount && R_GpuLightGrid_DataAvailable(rgp.world);
}

