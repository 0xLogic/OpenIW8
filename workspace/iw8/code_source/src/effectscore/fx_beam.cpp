/*
==============
FX_Beam_SetPlayerLaser
==============
*/

void FX_Beam_SetPlayerLaser(void)
{
  ?FX_Beam_SetPlayerLaser@@YAXXZ();
}

/*
==============
FX_Beam_Begin
==============
*/

void FX_Beam_Begin(void)
{
  ?FX_Beam_Begin@@YAXXZ();
}

/*
==============
FX_Beam_GenerateVerts
==============
*/

void __fastcall FX_Beam_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd)
{
  ?FX_Beam_GenerateVerts@@YAXPEAUGfxCodeSurfGlob@@PEBUFxGenerateVertsCmd@@@Z(codeSurfGlob, cmd);
}

/*
==============
FX_Beam_GetInfo
==============
*/

FxBeamInfo *__fastcall FX_Beam_GetInfo()
{
  return ?FX_Beam_GetInfo@@YAPEAUFxBeamInfo@@XZ();
}

/*
==============
FX_Beam_PlayerLaserExists
==============
*/

int __fastcall FX_Beam_PlayerLaserExists()
{
  return ?FX_Beam_PlayerLaserExists@@YAHXZ();
}

/*
==============
FX_Beam_Add
==============
*/

void __fastcall FX_Beam_Add(FxBeam *beam)
{
  ?FX_Beam_Add@@YAXPEAUFxBeam@@@Z(beam);
}

/*
==============
CreateClipMatrix
==============
*/
void CreateClipMatrix(vector4 *clipMtx, const vec3_t *vieworg, const tmat33_t<vec3_t> *viewaxis, const vec2_t *tanHalfFov)
{
  float4 v4; 
  float4 v11; 
  const vector4 *v14; 
  vector4 M1; 
  vector4 mtx; 

  if ( g_activeRefDef->view.fov.tanHalfFovX <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef->view.tanHalfFovX > 0.0f)", (const char *)&queryFormat, "g_activeRefDef->view.tanHalfFovX > 0.0f") )
    __debugbreak();
  if ( g_activeRefDef->view.fov.tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 118, ASSERT_TYPE_ASSERT, "(g_activeRefDef->view.tanHalfFovY > 0.0f)", (const char *)&queryFormat, "g_activeRefDef->view.tanHalfFovY > 0.0f") )
    __debugbreak();
  Float4x4ForViewer(&mtx, vieworg, viewaxis);
  _XMM2 = 0i64;
  __asm { vinsertps xmm2, xmm2, xmm0, 0 }
  v11.v = (__m128)LODWORD(FLOAT_1_0);
  v11.v.m128_f32[0] = 1.0 / tanHalfFov->v[1];
  _XMM1 = 0i64;
  __asm { vinsertps xmm1, xmm1, xmm0, 10h }
  M1.y = (float4)_XMM1.v;
  M1.x = (float4)_XMM2.v;
  *(__m256i *)M1.z.v.m128_f32 = _ymm;
  Float4x4Mul(&mtx, &M1, v14);
  M1.x = (float4)v11.v;
  M1.y = (float4)_XMM1.v;
  *(__m256i *)clipMtx->x.v.m128_f32 = *(__m256i *)M1.x.v.m128_f32;
  M1.w = (float4)v4.v;
  M1.z = (float4)_XMM2.v;
  *(__m256i *)clipMtx->z.v.m128_f32 = *(__m256i *)M1.z.v.m128_f32;
}

/*
==============
FX_Beam_Add
==============
*/
void FX_Beam_Add(FxBeam *beam)
{
  int v2; 
  __int64 v3; 

  if ( ((unsigned __int8)&g_beamInfo.beamCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_beamInfo.beamCount) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&g_beamInfo.beamCount, 1u);
  if ( v2 < 96 )
  {
    v3 = (__int64)v2 << 7;
    *(__m256i *)(&g_beamInfo.beams[0].type + v3) = *(__m256i *)&beam->type;
    *(__m256i *)((char *)g_beamInfo.beams[0].colors[0].v + v3) = *(__m256i *)beam->colors[0].v;
    *(__m256i *)((char *)g_beamInfo.beams[0].colors[2].v + v3) = *(__m256i *)beam->colors[2].v;
    *(__m256i *)((char *)g_beamInfo.beams[0].colors[4].v + v3) = *(__m256i *)beam->colors[4].v;
  }
  else
  {
    if ( ((unsigned __int64)&g_beamInfo.beamCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_beamInfo.beamCount) )
      __debugbreak();
    _InterlockedDecrement(&g_beamInfo.beamCount);
  }
}

/*
==============
FX_Beam_Begin
==============
*/
void FX_Beam_Begin(void)
{
  g_beamInfo.beamCount = 0;
  g_beamInfo.playerLaserExists = 0;
}

/*
==============
FX_Beam_GenerateVerts
==============
*/

void __fastcall FX_Beam_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd, double a3, double a4)
{
  const FxGenerateVertsCmd *v4; 
  float v5; 
  __int64 beamInfo; 
  unsigned __int8 v7; 
  __m128 v9; 
  char v16; 
  int v21; 
  __int64 v23; 
  __m128 v24; 
  __int64 v25; 
  bool v26; 
  unsigned __int8 *v27; 
  unsigned __int8 v28; 
  __int128 v29; 
  unsigned int v30; 
  int v31; 
  float v32; 
  unsigned __int8 v33; 
  __m128 v35; 
  __int128 v36; 
  __m128 v40; 
  __int64 v43; 
  const vector4 *v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v49; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v60; 
  unsigned __int16 vertIndexOffset; 
  int v62; 
  r_double_index_t *indices; 
  unsigned int vertIndexBase; 
  unsigned int argOffset; 
  r_double_index_t *v66; 
  __int16 v67; 
  __int16 v68; 
  __int16 v69; 
  Material *v70; 
  __m128 v71; 
  __m128 v77; 
  vec4_t *v88; 
  unsigned int v92; 
  __m128 v93; 
  unsigned int v94; 
  int v95; 
  __int64 v96; 
  float v100; 
  __m128 v101; 
  float v102; 
  float v103; 
  unsigned __int64 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v109; 
  double v110; 
  unsigned __int8 *v112; 
  float *v113; 
  float v115; 
  float v116; 
  char *v118; 
  signed __int64 v119; 
  int v120; 
  bool v121; 
  float v122; 
  float v123; 
  float v124; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  __int64 v136; 
  unsigned __int16 v137; 
  r_double_index_t v138; 
  r_double_index_t v139; 
  r_double_index_t v140; 
  unsigned __int8 v141; 
  float v142; 
  int v143; 
  int v144; 
  float v145; 
  unsigned int v146; 
  unsigned int v147; 
  float4 pt0; 
  __int64 v150; 
  float4 pt1; 
  unsigned __int8 *v152; 
  const FxGenerateVertsCmd *v153; 
  __int64 v154; 
  GfxCodeSurfBuffers outBuffers; 
  GfxCodeSurfArgs codeSurfArgs; 
  __m128 v157; 
  __m128 v158; 
  __m128 v159; 
  vector4 clipMtx; 
  __m256i v161; 
  __m256i v162; 
  __m256i v163; 
  __m256i v164; 
  __int128 v165; 
  __m128 v166; 
  __m128 v167; 
  __m128 v168; 

  v153 = cmd;
  v4 = cmd;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 242, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !v4->beamInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 243, ASSERT_TYPE_ASSERT, "(cmd->beamInfo)", (const char *)&queryFormat, "cmd->beamInfo") )
    __debugbreak();
  v5 = v4->camera.axis.m[0].v[0];
  beamInfo = (__int64)v4->beamInfo;
  v166.m128_i32[3] = 0;
  v7 = 0;
  v9 = v166;
  v9.m128_f32[0] = v5;
  _XMM7 = v9;
  _XMM0 = _xmm;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rdi+0A4h], 10h
    vinsertps xmm7, xmm7, dword ptr [rdi+0A8h], 20h ; ' '
    vcvtps2ph xmm6, xmm0, 0
  }
  _XMM0 = 0i64;
  __asm { vcvtps2ph xmm1, xmm0, 0 }
  v16 = 1;
  v154 = beamInfo;
  v159 = _XMM7;
  v166 = _XMM7;
  v146 = _XMM6;
  if ( (_DWORD)_XMM1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 255, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_0_0 == Float4PackFloat16_2( 0.0f, 0.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_0_0 == Float4PackFloat16_2( 0.0f, 0.0f )") )
    __debugbreak();
  _XMM0 = _xmm;
  __asm { vcvtps2ph xmm1, xmm0, 0 }
  if ( (_DWORD)_XMM1 != 15360 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 256, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_1_0 == Float4PackFloat16_2( 1.0f, 0.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_1_0 == Float4PackFloat16_2( 1.0f, 0.0f )") )
    __debugbreak();
  _XMM0 = _xmm;
  __asm { vcvtps2ph xmm1, xmm0, 0 }
  if ( _XMM1.m128_i32[0] != 1006632960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 257, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_0_1 == Float4PackFloat16_2( 0.0f, 1.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_0_1 == Float4PackFloat16_2( 0.0f, 1.0f )") )
    __debugbreak();
  if ( (_DWORD)_XMM6 != 1006648320 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 258, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_1_1 == Float4PackFloat16_2( 1.0f, 1.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_1_1 == Float4PackFloat16_2( 1.0f, 1.0f )") )
    __debugbreak();
  v21 = 96;
  if ( *(int *)(beamInfo + 12288) < 96 )
    v21 = *(_DWORD *)(beamInfo + 12288);
  if ( v21 )
  {
    _XMM11 = LODWORD(FLOAT_1_0);
    v166.m128_u64[0] = v21;
    v23 = 0i64;
    v150 = 0i64;
    v24 = 0i64;
    do
    {
      v25 = v23 << 7;
      v26 = *(_QWORD *)(v25 + beamInfo + 112) == 0i64;
      v27 = (unsigned __int8 *)(v25 + beamInfo);
      v152 = (unsigned __int8 *)(v25 + beamInfo);
      if ( !v26 )
        goto LABEL_109;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 298, ASSERT_TYPE_ASSERT, "(beam->material)", (const char *)&queryFormat, "beam->material") )
        __debugbreak();
      if ( *((_QWORD *)v27 + 14) )
      {
LABEL_109:
        v28 = *v27;
        v29 = *((unsigned int *)v27 + 7);
        v145 = *((float *)v27 + 7);
        if ( *v27 == 1 )
        {
          v142 = *((float *)v27 + 30);
        }
        else
        {
          v142 = *((float *)v27 + 7);
          if ( v28 >= 2u )
          {
            LODWORD(v134) = 2;
            LODWORD(v131) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( beam->type ) < (unsigned)( BEAMTYPE_COUNT )", "beam->type doesn't index BEAMTYPE_COUNT\n\t%i not in [0, %i)", v131, v134) )
              __debugbreak();
          }
        }
        v30 = FX_BEAMS_COLOR_COUNT_TYPES[*v27];
        v147 = v30;
        v31 = v30 - 1;
        if ( v27[2] > (int)(v30 - 1) )
          v31 = v27[2];
        v144 = v31;
        if ( v31 < 0 )
        {
          LODWORD(v131) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 313, ASSERT_TYPE_ASSERT, "( ( segCount >= 0 ) )", "( segCount ) = %i", v131) )
            __debugbreak();
        }
        v32 = *((float *)v27 + 1);
        v167.m128_i32[3] = 0;
        v168.m128_i32[3] = 0;
        v33 = v27[1];
        v35 = v167;
        v35.m128_f32[0] = v32;
        _XMM12 = v35;
        v36 = *((unsigned int *)v27 + 4);
        __asm
        {
          vinsertps xmm12, xmm12, dword ptr [r12+8], 10h
          vinsertps xmm12, xmm12, dword ptr [r12+0Ch], 20h ; ' '
        }
        v40 = v168;
        v40.m128_f32[0] = *(float *)&v36;
        _XMM13 = v40;
        __asm
        {
          vinsertps xmm13, xmm13, dword ptr [r12+14h], 10h
          vinsertps xmm13, xmm13, dword ptr [r12+18h], 20h ; ' '
        }
        v168 = _XMM13;
        v167 = _XMM12;
        if ( v16 || v33 != v7 )
        {
          v141 = v33;
          v7 = v33;
          v43 = 220i64;
          if ( !v33 )
            v43 = 212i64;
          CreateClipMatrix(&clipMtx, &v4->camera.origin, &v4->camera.axis, (const vec2_t *)((char *)v4 + v43));
          Float4x4Inverse(&clipMtx, v44);
          *(_OWORD *)v162.m256i_i8 = *(_OWORD *)&a3;
          *(_OWORD *)v161.m256i_i8 = v36;
          *(_OWORD *)&v162.m256i_u64[2] = *(_OWORD *)&a4;
          *(__m128 *)&v161.m256i_u64[2] = _XMM1;
          v163 = v161;
          v164 = v162;
        }
        else
        {
          v7 = v33;
          v141 = v33;
        }
        v45 = _mm128_add_ps(_XMM12, g_unit.v);
        v46 = _mm128_add_ps(_XMM13, g_unit.v);
        pt0.v = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v45, v45, 255), clipMtx.w.v), _mm128_mul_ps(clipMtx.y.v, _mm_shuffle_ps(v45, v45, 85))), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v45, v45, 170), clipMtx.z.v), _mm128_mul_ps(_mm_shuffle_ps(v45, v45, 0), clipMtx.x.v)));
        *(__m128 *)&a4 = _mm128_mul_ps(clipMtx.y.v, _mm_shuffle_ps(v46, v46, 85));
        _XMM1 = _mm128_mul_ps(_mm_shuffle_ps(v46, v46, 255), clipMtx.w.v);
        *(__m128 *)&a3 = _mm128_add_ps(_mm128_add_ps(_XMM1, *(__m128 *)&a4), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v46, v46, 170), clipMtx.z.v), _mm128_mul_ps(_mm_shuffle_ps(v46, v46, 0), clipMtx.x.v)));
        v16 = 0;
        pt1.v = *(__m128 *)&a3;
        if ( Vec4HomogenousClipBothZ(&pt0, &pt1) )
        {
          _XMM0 = _mm_shuffle_ps(pt0.v, pt0.v, 255);
          __asm { vrcpps  xmm1, xmm0 }
          v49 = _mm128_mul_ps(_XMM1, pt0.v);
          _XMM0 = _mm_shuffle_ps(pt1.v, pt1.v, 255);
          __asm { vrcpps  xmm1, xmm0 }
          v52 = (__m128)(*(_OWORD *)&_mm128_sub_ps(_mm128_mul_ps(_XMM1, pt1.v), v49) & *(_OWORD *)&g_keepXYW.v);
          v53 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v52, v52, 255), *(__m128 *)&v164.m256i_u64[2]), _mm128_mul_ps(_mm_shuffle_ps(v52, v52, 85), *(__m128 *)&v163.m256i_u64[2])), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v52, v52, 170), *(__m128 *)v164.m256i_i8), _mm128_mul_ps(_mm_shuffle_ps(v52, v52, 0), *(__m128 *)v163.m256i_i8))) & *(_OWORD *)&g_keepXYZ.v);
          _XMM0.m128_f32[0] = _mm_shuffle_ps(v53, v53, 85).m128_f32[0];
          v54 = v53;
          v52.m128_f32[0] = _mm_shuffle_ps(v53, v53, 170).m128_f32[0];
          v54.m128_f32[0] = (float)((float)(v53.m128_f32[0] * v53.m128_f32[0]) + (float)(_XMM0.m128_f32[0] * _XMM0.m128_f32[0])) + (float)(v52.m128_f32[0] * v52.m128_f32[0]);
          *(__m128 *)&a4 = v54;
          v54.m128_i32[0] = _mm_shuffle_ps(v53, v53, 255).m128_u32[0];
          _XMM0.m128_f32[0] = v54.m128_f32[0] * v54.m128_f32[0];
          v55 = *(__m128 *)&a4;
          v55.m128_f32[0] = *(float *)&a4 + _XMM0.m128_f32[0];
          _XMM1 = v55;
          *(double *)v55.m128_u64 = (float)(*(float *)&a4 + _XMM0.m128_f32[0]);
          *(__m128 *)&a3 = v55;
          if ( *(double *)v55.m128_u64 >= 0.000002 )
          {
            _XMM0 = _mm128_mul_ps(v53, v53);
            __asm
            {
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm0, xmm1, xmm1
              vrsqrtps xmm1, xmm0
            }
            v60 = _mm128_mul_ps(_XMM1, v53);
            pt1.v = v60;
            if ( !R_ReserveVertCodeSurfBuffers(&outBuffers, codeSurfGlob, 2 * v31 + 4, 2 * (3 * v31 + 3), 2u) )
              return;
            vertIndexOffset = outBuffers.vertIndexOffset;
            v62 = 0;
            indices = outBuffers.indices;
            vertIndexBase = outBuffers.vertIndexBase;
            argOffset = outBuffers.argOffset;
            v137 = outBuffers.vertIndexOffset;
            v138.value[1] = outBuffers.vertIndexOffset + 2;
            v66 = outBuffers.indices + 1;
            *outBuffers.indices = v138;
            v138.value[0] = vertIndexOffset + 1;
            if ( v31 )
            {
              do
              {
                v67 = v62++;
                v68 = vertIndexOffset + 2 * v67;
                v138.value[1] = v68 + 2;
                *v66 = v138;
                v139.value[0] = v68 + 4;
                v139.value[1] = v68 + 1;
                v66[1] = v139;
                v139.value[0] = v68 + 1;
                v138.value[1] = v68 + 4;
                v66[2] = v138;
                v66 += 3;
                v138.value[0] = v68 + 3;
              }
              while ( v62 != v31 );
            }
            v69 = vertIndexOffset + 2 * v31;
            v138.value[1] = v69 + 1;
            *v66 = v138;
            v140.value[0] = v69 + 2;
            v140.value[1] = v69 + 3;
            v66[1] = v140;
            v70 = (Material *)*((_QWORD *)v27 + 14);
            LOBYTE(v69) = v27[1] != 0;
            codeSurfArgs.indexCount = 2 * (3 * v31 + 3);
            codeSurfArgs.material = v70;
            codeSurfArgs.flags = v69;
            codeSurfArgs.vertIndexBase = vertIndexBase;
            codeSurfArgs.indices = indices;
            codeSurfArgs.argOffset = argOffset;
            codeSurfArgs.argCount = 2;
            codeSurfArgs.fxName = "Beam";
            codeSurfArgs.sortOrder = 0;
            R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
            v71 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 210), _mm_shuffle_ps(v60, v60, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), _mm_shuffle_ps(v60, v60, 210)));
            _XMM1 = _mm128_mul_ps(v71, v71);
            __asm
            {
              vinsertps xmm0, xmm1, xmm1, 8
              vhaddps xmm2, xmm0, xmm0
              vhaddps xmm0, xmm2, xmm2
              vrsqrtps xmm1, xmm0
            }
            v157 = _mm128_mul_ps(_XMM1, v71);
            v77 = _mm128_sub_ps(_XMM13, _XMM12);
            _XMM0 = _mm128_mul_ps(v77, v77);
            __asm
            {
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
              vrsqrtps xmm1, xmm0
            }
            _XMM7 = _mm128_mul_ps(_XMM1, v77);
            _XMM0 = _mm128_mul_ps(_XMM12, _XMM7);
            __asm
            {
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
            }
            _mm128_sub_ps((__m128)0i64, _XMM0);
            v88 = R_CodeSurfArgsIter_Begin(codeSurfGlob, argOffset);
            __asm { vblendps xmm0, xmm7, xmm6, 8 }
            *v88 = _XMM0;
            _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(v29 ^ _xmm), (__m128)(v29 ^ _xmm), 0), v60), _XMM12);
            v88[1] = (vec4_t)_mm128_add_ps(_XMM12, g_unit.v);
            _R15 = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
            _R15->xyz.v[0] = _XMM6.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rax+4], xmm6, 1
              vextractps dword ptr [rax+8], xmm6, 2
            }
            _R15->color = (vec4_t)*((_OWORD *)v27 + 2);
            v92 = v146;
            _R15->extraData = v146;
            _R15->normal.packed = 1073643391;
            _R15->tangentBinormalSign.packed = 1065320446;
            _R15->texCoord.packed = 0;
            if ( *v27 )
              v93 = v24;
            else
              v93 = (__m128)*((unsigned int *)v27 + 30);
            if ( v30 < 2 )
            {
              LODWORD(v131) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 426, ASSERT_TYPE_ASSERT, "( ( colorCount >= 2 ) )", "( colorCount ) = %i", v131) )
                __debugbreak();
            }
            if ( v30 > 5 )
            {
              LODWORD(v131) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 427, ASSERT_TYPE_ASSERT, "( ( colorCount <= 5 ) )", "( colorCount ) = %i", v131) )
                __debugbreak();
            }
            v94 = v30 - 2;
            if ( v30 - 2 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 431, ASSERT_TYPE_SANITY, "( colorSegmentCount <= sizeof(FX_BEAMS_COLOR_SEGMENTS) )", (const char *)&queryFormat, "colorSegmentCount <= sizeof(FX_BEAMS_COLOR_SEGMENTS)") )
              __debugbreak();
            v95 = 0;
            v143 = 0;
            LODWORD(v96) = 0;
            _XMM0 = v94;
            __asm
            {
              vpcmpgtq xmm2, xmm0, xmm1
              vblendvps xmm0, xmm11, xmm0, xmm2
            }
            v100 = v24.m128_f32[0];
            v165 = _xmm;
            if ( v144 < 0 )
            {
              v124 = *((float *)&v165 + 3);
              v123 = *((float *)&v165 + 2);
              *(_OWORD *)&a4 = DWORD1(v165);
              *(_OWORD *)&a3 = (unsigned int)v165;
            }
            else
            {
              v101 = v93;
              v102 = *(float *)&_XMM0;
              v103 = 1.0 / (float)v144;
              LOBYTE(v104) = 0;
              v105 = _mm_shuffle_ps(v101, v101, 0);
              pt0.v.m128_u64[0] = 0i64;
              do
              {
                v107 = 0i64;
                v107.m128_f32[0] = (float)v95 * v103;
                v106 = v107;
                _XMM1 = _mm128_mul_ps(v105, FX_BEAMS_wiggle[v104 & 7].v);
                v158 = _mm_shuffle_ps(_XMM1, _XMM1, 85);
                v109 = _mm_shuffle_ps(_XMM1, _XMM1, 0);
                if ( v107.m128_f32[0] >= v24.m128_f32[0] && v107.m128_f32[0] <= 1.0 )
                {
                  v110 = DOUBLE_1_0;
                }
                else
                {
                  v110 = DOUBLE_1_0;
                  __asm { vxorpd  xmm1, xmm1, xmm1 }
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 458, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( alpha ) && ( alpha ) <= ( 1.0f )", "alpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v107.m128_f32[0], *(double *)&_XMM1, DOUBLE_1_0) )
                    __debugbreak();
                }
                while ( v107.m128_f32[0] > v102 )
                {
                  v96 = (unsigned int)(v96 + 1);
                  v100 = v102;
                  if ( v94 <= (unsigned int)v96 )
                    v102 = FLOAT_1_0;
                  else
                    v102 = FX_BEAMS_COLOR_SEGMENTS[v96];
                }
                if ( (unsigned int)v96 >= v30 )
                {
                  LODWORD(v134) = v30;
                  LODWORD(v131) = v96;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 466, ASSERT_TYPE_SANITY, "(unsigned)( colorIndex ) < (unsigned)( colorCount )", "colorIndex doesn't index colorCount\n\t%i not in [0, %i)", v131, v134) )
                    __debugbreak();
                }
                if ( (int)v96 + 1 >= v30 )
                {
                  LODWORD(v134) = v30;
                  LODWORD(v131) = v96 + 1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 467, ASSERT_TYPE_SANITY, "(unsigned)( colorIndex + 1 ) < (unsigned)( colorCount )", "colorIndex + 1 doesn't index colorCount\n\t%i not in [0, %i)", v131, v134) )
                    __debugbreak();
                }
                if ( v102 <= v100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 468, ASSERT_TYPE_SANITY, "( lerpMaxAlpha > lerpMinAlpha )", (const char *)&queryFormat, "lerpMaxAlpha > lerpMinAlpha") )
                  __debugbreak();
                v112 = &v27[16 * (unsigned int)v96 + 32];
                v113 = (float *)&v27[16 * (unsigned int)(v96 + 1) + 32];
                if ( (v100 > v107.m128_f32[0] || v107.m128_f32[0] > v102) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 473, ASSERT_TYPE_SANITY, "( lerpMinAlpha ) <= ( alpha ) && ( alpha ) <= ( lerpMaxAlpha )", "alpha not in [lerpMinAlpha, lerpMaxAlpha]\n\t%g not in [%g, %g]", v107.m128_f32[0], v100, v102) )
                  __debugbreak();
                v107.m128_f32[0] = v107.m128_f32[0] - v100;
                _XMM1 = v107;
                v116 = (float)(v106.m128_f32[0] - v100) / (float)(v102 - v100);
                v115 = v116;
                if ( v116 < 0.0 || v116 > 1.0 )
                {
                  __asm { vxorpd  xmm1, xmm1, xmm1 }
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 478, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerpBlendFact ) && ( lerpBlendFact ) <= ( 1.0f )", "lerpBlendFact not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v116, *(double *)&_XMM1, v110) )
                    __debugbreak();
                }
                v118 = (char *)((char *)&v165 - (char *)v113);
                v119 = v112 - (unsigned __int8 *)v113;
                v120 = 0;
                v121 = 1;
                do
                {
                  if ( !v121 )
                  {
                    LODWORD(v134) = 4;
                    LODWORD(v131) = v120;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v131, v134) )
                      __debugbreak();
                    LODWORD(v135) = 4;
                    LODWORD(v132) = v120;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v132, v135) )
                      __debugbreak();
                    LODWORD(v136) = 4;
                    LODWORD(v133) = v120;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v133, v136) )
                      __debugbreak();
                  }
                  v122 = (float)((float)(*v113 - *(float *)((char *)v113 + v119)) * v115) + *(float *)((char *)v113 + v119);
                  if ( (unsigned int)v120 >= 4 )
                  {
                    LODWORD(v134) = 4;
                    LODWORD(v131) = v120;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v131, v134) )
                      __debugbreak();
                  }
                  *(float *)((char *)v113++ + (_QWORD)v118) = v122;
                  v121 = (unsigned int)++v120 < 4;
                }
                while ( v120 < 4 );
                v123 = *((float *)&v165 + 2);
                v124 = *((float *)&v165 + 3);
                v92 = v146;
                v95 = v143 + 1;
                v30 = v147;
                v104 = pt0.v.m128_u64[0] + 1;
                v27 = v152;
                v125 = (__m128)LODWORD(v142);
                v125.m128_f32[0] = (float)((float)(v142 - v145) * v115) + v145;
                v126 = v157;
                v127 = _mm128_add_ps(_mm128_mul_ps(v158, pt1.v), _mm128_add_ps(_mm128_mul_ps(v157, v109), _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM13, _XMM12), _mm_shuffle_ps(v106, v106, 0)), _XMM12)));
                _XMM2 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(*(_OWORD *)&v125 ^ _xmm), (__m128)(*(_OWORD *)&v125 ^ _xmm), 0), v157), v127);
                _R15[1].xyz.v[0] = _XMM2.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [r15+34h], xmm2, 1
                  vextractps dword ptr [r15+38h], xmm2, 2
                }
                *(_OWORD *)&a3 = (unsigned int)v165;
                _R15[1].color.v[0] = *(float *)&v165;
                v103 = 1.0 / (float)v144;
                _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v125, v125, 0), v126), v127);
                *(_OWORD *)&a4 = DWORD1(v165);
                _R15[1].color.v[1] = *((float *)&v165 + 1);
                _R15[1].color.v[2] = v123;
                _R15[1].color.v[3] = v124;
                _R15[1].extraData = v146;
                v94 = v147 - 2;
                _R15[1].normal.packed = 1073643391;
                _R15[1].tangentBinormalSign.packed = 1065320446;
                _R15[1].texCoord.packed = 1006632960;
                _R15 += 2;
                v143 = v95;
                pt0.v.m128_u64[0] = v104;
                v24 = 0i64;
                _R15->xyz.v[0] = _XMM4.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [r15+4], xmm4, 1
                  vextractps dword ptr [r15+8], xmm4, 2
                }
                _R15->color.v[0] = *(float *)&a3;
                _R15->color.v[1] = *(float *)&a4;
                _R15->color.v[2] = v123;
                _R15->color.v[3] = v124;
                _R15->extraData = v146;
                _R15->normal.packed = 1073643391;
                _R15->tangentBinormalSign.packed = 1065320446;
                _R15->texCoord.packed = 15360;
              }
              while ( v95 <= v144 );
            }
            __asm { vbroadcastss xmm0, [rsp+318h+var_2D0] }
            v7 = v141;
            beamInfo = v154;
            _XMM1 = _mm128_add_ps(_mm128_mul_ps(_XMM0, pt1.v), _XMM13);
            _R15[1].xyz.v[0] = _XMM1.m128_f32[0];
            __asm
            {
              vextractps dword ptr [r15+34h], xmm1, 1
              vextractps dword ptr [r15+38h], xmm1, 2
            }
            _R15[1].color.v[0] = *(float *)&a3;
            _R15[1].color.v[1] = *(float *)&a4;
            _R15[1].color.v[2] = v123;
            _R15[1].color.v[3] = v124;
            _XMM7 = v159;
            _R15[1].extraData = v92;
            v4 = v153;
            _R15[1].normal.packed = 1073643391;
            _R15[1].tangentBinormalSign.packed = 1065320446;
            _R15[1].texCoord.packed = 1006648320;
          }
          v16 = 0;
        }
      }
      v23 = v150 + 1;
      v150 = v23;
    }
    while ( v23 != v166.m128_u64[0] );
  }
}

/*
==============
FX_Beam_GetInfo
==============
*/
FxBeamInfo *FX_Beam_GetInfo()
{
  return &g_beamInfo;
}

/*
==============
FX_Beam_PlayerLaserExists
==============
*/
__int64 FX_Beam_PlayerLaserExists()
{
  return (unsigned int)g_beamInfo.playerLaserExists;
}

/*
==============
FX_Beam_SetPlayerLaser
==============
*/
void FX_Beam_SetPlayerLaser(void)
{
  g_beamInfo.playerLaserExists = 1;
}

/*
==============
Float4x4ForViewer
==============
*/
void Float4x4ForViewer(vector4 *mtx, const vec3_t *origin3, const tmat33_t<vec3_t> *axis3)
{
  __int128 v4; 
  __m128 v8; 
  __m128 v12; 
  __m128 v16; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  float4 v26; 
  __m128 v27; 
  float4 v28; 
  __m128 v; 
  __int128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 

  HIDWORD(v30) = 0;
  v4 = v30;
  *(float *)&v4 = origin3->v[0];
  _XMM9 = v4;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rdx+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rdx+8], 20h ; ' '
  }
  v31 = _XMM9;
  v31.m128_i32[3] = 0;
  v8 = v31;
  v8.m128_f32[0] = axis3->m[0].v[0];
  _XMM7 = v8;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [r8+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r8+8], 20h ; ' '
  }
  v32 = _XMM7;
  v32.m128_i32[3] = 0;
  v12 = v32;
  v12.m128_f32[0] = axis3->m[1].v[0];
  _XMM3 = v12;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r8+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r8+14h], 20h ; ' '
  }
  v33 = _XMM3;
  v33.m128_i32[3] = 0;
  v16 = v33;
  v16.m128_f32[0] = axis3->m[2].v[0];
  _XMM6 = v16;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [r8+1Ch], 10h
    vinsertps xmm6, xmm6, dword ptr [r8+20h], 20h ; ' '
  }
  v19 = (__m128)(*(_OWORD *)&g_one.v & *(_OWORD *)&g_keepW.v);
  v20 = _mm128_sub_ps((__m128)0i64, _XMM3);
  v21 = _mm_shuffle_ps(_XMM7, v20, 68);
  v22 = _mm_shuffle_ps(_XMM7, v20, 238);
  v23 = _mm_shuffle_ps(_XMM6, (__m128)(*(_OWORD *)&g_one.v & *(_OWORD *)&g_keepW.v), 68);
  v24 = _mm_shuffle_ps(v21, v23, 136);
  mtx->x.v = _mm_shuffle_ps(v24, v24, 201);
  v25 = _mm_shuffle_ps(v21, v23, 221);
  v26.v = _mm_shuffle_ps(v25, v25, 201);
  v27 = _mm_shuffle_ps(v22, _mm_shuffle_ps(_XMM6, v19, 238), 136);
  v28.v = _mm_shuffle_ps(v27, v27, 201);
  mtx->z = (float4)v28.v;
  mtx->y = (float4)v26.v;
  v = g_unit.v;
  mtx->w = (float4)g_unit.v;
  mtx->w.v = _mm128_add_ps(_mm128_sub_ps((__m128)0i64, _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 0), mtx->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 85), v26.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 170), v28.v), v)))), g_2xunit.v);
}

/*
==============
Vec4HomogenousClipBothZ
==============
*/
bool Vec4HomogenousClipBothZ(float4 *pt0, float4 *pt1)
{
  _XMM1 = _mm128_mul_ps((__m128)_xmm, pt0->v);
  __asm { vhaddps xmm2, xmm1, xmm1 }
  _XMM1 = _mm128_mul_ps((__m128)_xmm, pt1->v);
  __asm
  {
    vhaddps xmm4, xmm2, xmm2
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_XMM4, _XMM0);
  __asm
  {
    vrcpps  xmm1, xmm2
    vcmpltps xmm5, xmm0, xmm7
    vcmpltps xmm6, xmm4, xmm7
  }
  _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(pt1->v, pt0->v), _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), _XMM4)), pt0->v);
  __asm { vblendvps xmm2, xmm4, xmm1, xmm0 }
  _XMM1 = pt1->v;
  __asm { vblendvps xmm3, xmm1, xmm4, xmm0 }
  _XMM1 = pt0->v;
  __asm { vblendvps xmm1, xmm1, xmm2, xmm0 }
  *pt0 = (float4)_XMM1.v;
  __asm { vblendvps xmm1, xmm3, xmm2, xmm0 }
  *pt1 = (float4)_XMM1.v;
  if ( ((unsigned int)_XMM6 & (unsigned int)_XMM5) != 0 )
    return 0;
  _XMM1 = _mm128_mul_ps((__m128)_xmm, pt0->v);
  __asm { vhaddps xmm2, xmm1, xmm1 }
  _XMM1 = _mm128_mul_ps((__m128)_xmm, pt1->v);
  __asm
  {
    vhaddps xmm3, xmm2, xmm2
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_XMM3, _XMM0);
  __asm
  {
    vrcpps  xmm1, xmm2
    vcmpltps xmm5, xmm0, xmm7
    vcmpltps xmm6, xmm3, xmm7
  }
  _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(pt1->v, pt0->v), _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), _XMM3)), pt0->v);
  __asm { vblendvps xmm2, xmm4, xmm1, xmm0 }
  _XMM1 = pt1->v;
  __asm { vblendvps xmm3, xmm1, xmm4, xmm0 }
  _XMM1 = pt0->v;
  __asm { vblendvps xmm1, xmm1, xmm2, xmm0 }
  *pt0 = (float4)_XMM1.v;
  __asm { vblendvps xmm1, xmm3, xmm2, xmm0 }
  *pt1 = (float4)_XMM1.v;
  return ((unsigned int)_XMM6 & (unsigned int)_XMM5) == 0;
}

