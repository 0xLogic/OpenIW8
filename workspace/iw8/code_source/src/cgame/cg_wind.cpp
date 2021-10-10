/*
==============
R_CG_Wind_InitGridBuffers
==============
*/

void R_CG_Wind_InitGridBuffers(void)
{
  ?R_CG_Wind_InitGridBuffers@@YAXXZ();
}

/*
==============
RB_CG_Wind_UpdateWindGridBuffers
==============
*/

void RB_CG_Wind_UpdateWindGridBuffers(void)
{
  ?RB_CG_Wind_UpdateWindGridBuffers@@YAXXZ();
}

/*
==============
CG_Wind_InitGridMem
==============
*/

void CG_Wind_InitGridMem(void)
{
  ?CG_Wind_InitGridMem@@YAXXZ();
}

/*
==============
R_CG_Wind_ShutdownGridBuffers
==============
*/

void R_CG_Wind_ShutdownGridBuffers(void)
{
  ?R_CG_Wind_ShutdownGridBuffers@@YAXXZ();
}

/*
==============
CG_Wind_FreeGridMem
==============
*/

void CG_Wind_FreeGridMem(void)
{
  ?CG_Wind_FreeGridMem@@YAXXZ();
}

/*
==============
CG_Wind_SamplePosAgainstInstances
==============
*/

bool __fastcall CG_Wind_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, WindSampleType windSampleType)
{
  return ?CG_Wind_SamplePosAgainstInstances@@YA_NAEBTvec3_t@@AEAT1@IPEAEW4WindSampleType@@@Z(pos, outSample, numInstances, samplers, windSampleType);
}

/*
==============
CG_Wind_GetDefaultParams
==============
*/

void __fastcall CG_Wind_GetDefaultParams(WindParams *outParams)
{
  ?CG_Wind_GetDefaultParams@@YAXPEAUWindParams@@@Z(outParams);
}

/*
==============
CG_Wind_AddVectorField
==============
*/

void __fastcall CG_Wind_AddVectorField(const unsigned __int8 handle)
{
  ?CG_Wind_AddVectorField@@YAXE@Z(handle);
}

/*
==============
RB_CG_Wind_GetWindGridFieldBuffer
==============
*/

GfxWrappedBuffer *__fastcall RB_CG_Wind_GetWindGridFieldBuffer()
{
  return ?RB_CG_Wind_GetWindGridFieldBuffer@@YAPEAUGfxWrappedBuffer@@XZ();
}

/*
==============
CG_Wind_QueryRegion
==============
*/

unsigned int __fastcall CG_Wind_QueryRegion(const vec3_t *worldPos, float radius, ParticleSystemHandle restrictToSystem, unsigned __int8 *outHandles, int maxOutHandles)
{
  return ?CG_Wind_QueryRegion@@YAIAEBTvec3_t@@MW4ParticleSystemHandle@@PEAEH@Z(worldPos, radius, restrictToSystem, outHandles, maxOutHandles);
}

/*
==============
RB_CG_Wind_GetWindGridCountBuffer
==============
*/

GfxWrappedBuffer *__fastcall RB_CG_Wind_GetWindGridCountBuffer()
{
  return ?RB_CG_Wind_GetWindGridCountBuffer@@YAPEAUGfxWrappedBuffer@@XZ();
}

/*
==============
CG_Wind_Sample
==============
*/

bool __fastcall CG_Wind_Sample(const vec3_t *worldPos, vec3_t *outSample, WindSampleType windSampleType)
{
  return ?CG_Wind_Sample@@YA_NAEBTvec3_t@@AEAT1@W4WindSampleType@@@Z(worldPos, outSample, windSampleType);
}

/*
==============
CG_Wind_SampleCapsule
==============
*/

bool __fastcall CG_Wind_SampleCapsule(const vec3_t *worldPos, const CapsuleBounds *cpBounds, vec3_t *outSample, WindSampleType windSampleType)
{
  return ?CG_Wind_SampleCapsule@@YA_NAEBTvec3_t@@PEBUCapsuleBounds@@AEAT1@W4WindSampleType@@@Z(worldPos, cpBounds, outSample, windSampleType);
}

/*
==============
CG_Wind_RemoveVectorField
==============
*/

void __fastcall CG_Wind_RemoveVectorField(const unsigned __int8 handle)
{
  ?CG_Wind_RemoveVectorField@@YAXE@Z(handle);
}

/*
==============
CG_Wind_Init
==============
*/

void CG_Wind_Init(void)
{
  ?CG_Wind_Init@@YAXXZ();
}

/*
==============
CG_Wind_AddVectorField
==============
*/
void CG_Wind_AddVectorField(const unsigned __int8 handle)
{
  const VectorFieldInstance *Instance; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  bool v12; 
  base_vec2_t<unsigned int> outIterEnd; 
  base_vec2_t<unsigned int> outIterStart; 
  int v15; 
  __int64 v16; 

  Instance = CG_VectorField_GetInstance(handle);
  outIterStart = 0i64;
  outIterEnd = 0i64;
  if ( !Instance->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 417, ASSERT_TYPE_ASSERT, "(vfInstance->inUse)", (const char *)&queryFormat, "vfInstance->inUse") )
    __debugbreak();
  CG_Wind_GetVectorFieldGridCoords(Instance, &outIterStart, &outIterEnd);
  v3 = outIterEnd.v[0];
  v4 = outIterStart.v[0];
  if ( outIterStart.v[0] <= outIterEnd.v[0] )
  {
    v5 = outIterEnd.v[1];
    do
    {
      v6 = outIterStart.v[1];
      if ( outIterStart.v[1] <= v5 )
      {
        do
        {
          if ( v4 < 0x100 && v6 < 0x100 )
          {
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v7 = v6 + (v4 << 8);
            v8 = s_windGridCountData[v7];
            v15 = s_windGridCountData[v7];
            if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v9 = *((_QWORD *)s_windGridFieldData + v7);
            v16 = v9;
            if ( (unsigned int)v8 < 8 )
            {
              v10 = 0i64;
              if ( (_DWORD)v8 )
              {
                while ( *((_BYTE *)&v16 + v10) != handle )
                {
                  v10 = (unsigned int)(v10 + 1);
                  if ( (unsigned int)v10 >= (unsigned int)v8 )
                    goto LABEL_19;
                }
              }
              else
              {
LABEL_19:
                *((_BYTE *)&v16 + v8) = handle;
                v9 = v16;
                LODWORD(v8) = ++v15;
              }
            }
            v11 = v15;
            if ( (unsigned int)v8 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v15, "unsigned", (unsigned int)v8) )
              __debugbreak();
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 102, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v12 = s_windGridFieldData == NULL;
            s_windGridCountData[v7] = v11;
            if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 116, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            *((_QWORD *)s_windGridFieldData + v7) = v9;
          }
          ++v6;
        }
        while ( v6 <= v5 );
        v3 = outIterEnd.v[0];
      }
      ++v4;
    }
    while ( v4 <= v3 );
  }
}

/*
==============
CG_Wind_FreeGridMem
==============
*/
void CG_Wind_FreeGridMem(void)
{
  StreamerMemLoan result; 

  if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 208, ASSERT_TYPE_ASSERT, "(s_windGridCountData)", (const char *)&queryFormat, "s_windGridCountData") )
    __debugbreak();
  if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 209, ASSERT_TYPE_ASSERT, "(s_windGridFieldData)", (const char *)&queryFormat, "s_windGridFieldData") )
    __debugbreak();
  s_windGridCountData = NULL;
  s_windGridFieldData = NULL;
  PMem_Free(&result, "wind grid", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
CG_Wind_GetDefaultParams
==============
*/
void CG_Wind_GetDefaultParams(WindParams *outParams)
{
  const dvar_t *v2; 
  float value; 
  __int128 v4; 
  float v5; 
  __int128 v6; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 

  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 227, ASSERT_TYPE_ASSERT, "(outParams)", (const char *)&queryFormat, "outParams") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 228, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tAccessing networked dvars must be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DVARVEC3_cg_defaultWindDir;
  if ( !DVARVEC3_cg_defaultWindDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  outParams->defaultDir.v[0] = value;
  v4 = LODWORD(v2->current.vector.v[1]);
  outParams->defaultDir.v[1] = *(float *)&v4;
  v5 = v2->current.vector.v[2];
  v6 = v4;
  *(float *)&v6 = fsqrt((float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(value * value)) + (float)(v5 * v5));
  _XMM3 = v6;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  outParams->defaultDir.v[0] = value * (float)(1.0 / *(float *)&_XMM0);
  outParams->defaultDir.v[2] = v5 * (float)(1.0 / *(float *)&_XMM0);
  outParams->defaultDir.v[1] = *(float *)&v4 * (float)(1.0 / *(float *)&_XMM0);
  v10 = DVARFLT_cg_defaultWindStrength;
  if ( !DVARFLT_cg_defaultWindStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  LODWORD(outParams->defaultStrength) = v10->current.integer;
  v11 = DVARFLT_cg_defaultWindAreaScale;
  if ( !DVARFLT_cg_defaultWindAreaScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindAreaScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(outParams->defaultAreaScale) = v11->current.integer;
  v12 = DVARFLT_cg_defaultWindAmplitudeScale;
  if ( !DVARFLT_cg_defaultWindAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  LODWORD(outParams->defaultAmplitudeScale) = v12->current.integer;
  v13 = DVARFLT_cg_defaultWindFrequencyScale;
  if ( !DVARFLT_cg_defaultWindFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  LODWORD(outParams->defaultFrequencyScale) = v13->current.integer;
  v14 = DVARFLT_cg_defaultWindNoiseScale;
  if ( !DVARFLT_cg_defaultWindNoiseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindNoiseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  LODWORD(outParams->defaultNoiseStrength) = v14->current.integer;
}

/*
==============
CG_Wind_GetGridCell
==============
*/
void CG_Wind_GetGridCell(unsigned int x, unsigned int y, WindGridCell *outCell)
{
  __int64 v6; 
  _QWORD *v7; 

  if ( (!s_windGridCountData || x > 0x100 || y > 0x100) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
    __debugbreak();
  v6 = y + (x << 8);
  v7 = s_windGridFieldData;
  outCell->numVecFields = s_windGridCountData[v6];
  if ( !v7 || x > 0x100 || y > 0x100 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
      __debugbreak();
    v7 = s_windGridFieldData;
  }
  outCell->vectorFieldsPacked = v7[v6];
}

/*
==============
CG_Wind_GetVectorFieldGridCoords
==============
*/
void CG_Wind_GetVectorFieldGridCoords(const VectorFieldInstance *vfInstance, base_vec2_t<unsigned int> *outIterStart, base_vec2_t<unsigned int> *outIterEnd)
{
  __int64 v4; 
  __m128 v9; 
  __m128 v12; 
  __m128 v14; 
  __m128 v18; 
  __m128 v22; 
  __m128 v26; 
  __m128 v30; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 

  _RSI = outIterEnd;
  v4 = tls_index;
  _RDI = outIterStart;
  _R14 = vfInstance;
  if ( dword_15132F284 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F284);
    if ( dword_15132F284 == -1 )
    {
      maxWorldClamp.v = (__m128)_xmm;
      j__Init_thread_footer(&dword_15132F284);
    }
  }
  if ( dword_15132F2A4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F2A4);
    if ( dword_15132F2A4 == -1 )
    {
      minWorldClamp.v = (__m128)_xmm;
      j__Init_thread_footer(&dword_15132F2A4);
    }
  }
  __asm { vbroadcastss xmm5, dword ptr [r14+3Ch] }
  v55.m128_i32[3] = 0;
  v9 = v55;
  v9.m128_f32[0] = _R14->vf->worldBounds.mins.v[0];
  _XMM3 = v9;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rax+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rax+18h], 20h ; ' '
  }
  v56 = _XMM3;
  v12 = _mm128_mul_ps(_XMM5, _XMM3);
  v56.m128_i32[3] = 0;
  v14 = v56;
  v14.m128_f32[0] = _R14->vf->worldBounds.maxs.v[0];
  _XMM4 = v14;
  __asm
  {
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm2, 20h ; ' '
  }
  v57 = _XMM4;
  v57.m128_i32[3] = 0;
  v18 = v57;
  v18.m128_f32[0] = _R14->orient.axis.m[0].v[0];
  _XMM15 = v18;
  __asm
  {
    vinsertps xmm15, xmm15, dword ptr [r14+18h], 10h
    vinsertps xmm15, xmm15, dword ptr [r14+1Ch], 20h ; ' '
  }
  v58 = _XMM15;
  v58.m128_i32[3] = 0;
  v22 = v58;
  v22.m128_f32[0] = _R14->orient.axis.m[1].v[0];
  _XMM14 = v22;
  __asm
  {
    vinsertps xmm14, xmm14, dword ptr [r14+24h], 10h
    vinsertps xmm14, xmm14, dword ptr [r14+28h], 20h ; ' '
  }
  v59 = _XMM14;
  v59.m128_i32[3] = 0;
  v26 = v59;
  v26.m128_f32[0] = _R14->orient.axis.m[2].v[0];
  _XMM13 = v26;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [r14+30h], 10h
    vinsertps xmm13, xmm13, dword ptr [r14+34h], 20h ; ' '
  }
  v60 = _XMM13;
  v60.m128_i32[3] = 0;
  v30 = v60;
  v30.m128_f32[0] = _R14->orient.origin.v[0];
  _XMM12 = v30;
  __asm
  {
    vinsertps xmm12, xmm12, dword ptr [r14+0Ch], 10h
    vinsertps xmm12, xmm12, dword ptr [r14+10h], 20h ; ' '
  }
  v33 = _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_XMM5, _XMM4), v12), (__m128)_xmm);
  v34 = _mm128_add_ps(v12, v33);
  v35 = _mm_shuffle_ps(v34, v34, 85);
  v36 = _mm_shuffle_ps(v34, v34, 0);
  v37 = _mm_shuffle_ps(v34, v34, 170);
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vandnps xmm7, xmm0, xmm13
    vandnps xmm5, xmm0, xmm15
    vandnps xmm6, xmm0, xmm14
  }
  v42 = _mm_shuffle_ps(v33, v33, 0);
  v43 = _mm_shuffle_ps(v33, v33, 85);
  v44 = _mm_shuffle_ps(v33, v33, 170);
  v45 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_XMM12, _mm128_mul_ps(_XMM15, v36)), _mm128_mul_ps(_XMM14, v35)), _mm128_mul_ps(_XMM13, v37));
  v46 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v42, _XMM5), _mm128_mul_ps(v43, _XMM6)), _mm128_mul_ps(v44, _XMM7));
  _XMM3 = _mm128_sub_ps(v45, v46);
  __asm { vmaxps  xmm7, xmm3, xmmword ptr cs:minWorldClamp.v }
  _XMM0 = _mm128_add_ps(v45, v46);
  __asm { vminps  xmm6, xmm0, xmmword ptr cs:maxWorldClamp.v }
  if ( dword_15132F264 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F264);
    if ( dword_15132F264 == -1 )
    {
      xmmword_15132F250 = _xmm;
      j__Init_thread_footer(&dword_15132F264);
    }
  }
  _XMM1 = _mm128_add_ps(_mm_shuffle_ps(_XMM7, _XMM6, 68), (__m128)xmmword_15132F250);
  __asm
  {
    vmaxps  xmm1, xmm1, xmm0
    vcvttps2dq xmm2, xmm1
    vpsrld  xmm3, xmm2, 0Ah
    vmovlps qword ptr [rdi], xmm3
    vmovhps qword ptr [rsi], xmm3
  }
}

/*
==============
CG_Wind_Init
==============
*/
void CG_Wind_Init(void)
{
  if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 137, ASSERT_TYPE_ASSERT, "(s_windGridCountData)", (const char *)&queryFormat, "s_windGridCountData") )
    __debugbreak();
  if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 138, ASSERT_TYPE_ASSERT, "(s_windGridFieldData)", (const char *)&queryFormat, "s_windGridFieldData") )
    __debugbreak();
  memset_0(s_windGridCountData, 0, 0x10000ui64);
  memset_0(s_windGridFieldData, 0, 0x80000ui64);
}

/*
==============
CG_Wind_InitGridMem
==============
*/
void CG_Wind_InitGridMem(void)
{
  bool v0; 
  void *v1; 
  void *v2; 
  unsigned __int8 *initialData; 

  if ( s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 148, ASSERT_TYPE_ASSERT, "(s_windGridCountData == nullptr)", (const char *)&queryFormat, "s_windGridCountData == nullptr") )
    __debugbreak();
  if ( s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 149, ASSERT_TYPE_ASSERT, "(s_windGridFieldData == nullptr)", (const char *)&queryFormat, "s_windGridFieldData == nullptr") )
    __debugbreak();
  PMem_BeginAlloc("wind grid", PMEM_STACK_GAME);
  v0 = PMem_AuxAllocationsEnabled();
  if ( v0 )
    PMem_PopAuxAllocations();
  if ( PMem_AuxAllocationsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 159, ASSERT_TYPE_ASSERT, "(!PMem_AuxAllocationsEnabled())", (const char *)&queryFormat, "!PMem_AuxAllocationsEnabled()") )
    __debugbreak();
  s_windGridCountData = (unsigned __int8 *)PMem_Alloc(0x10000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "wind grid count buf");
  v1 = PMem_Alloc(0x80000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "wind grid field buf");
  v2 = v1;
  if ( (void *)(((unsigned __int64)v1 + 7) & 0xFFFFFFFFFFFFFFF8ui64) != v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", v1, 8i64) )
    __debugbreak();
  s_windGridFieldData = v2;
  if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 165, ASSERT_TYPE_ASSERT, "(s_windGridCountData)", (const char *)&queryFormat, "s_windGridCountData") )
    __debugbreak();
  if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 166, ASSERT_TYPE_ASSERT, "(s_windGridFieldData)", (const char *)&queryFormat, "s_windGridFieldData") )
    __debugbreak();
  if ( v0 )
    PMem_PushAuxAllocations();
  initialData = s_windGridCountData;
  memset_0(s_windGridCountData, 0, 0x10000ui64);
  memset_0(s_windGridFieldData, 0, 0x80000ui64);
  R_CreateGfxWrappedBuffer(&s_windGridCountBuffer, GfxWrappedBuffer_Raw, 1, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "s_windGridCountData buffer");
  R_CreateGfxWrappedBuffer(&s_windGridFieldBuffer, GfxWrappedBuffer_Raw, 8, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, s_windGridFieldData, "s_windGridFieldData buffer");
  PMem_EndAlloc("wind grid", PMEM_STACK_GAME);
}

/*
==============
CG_Wind_QueryRegion
==============
*/

__int64 __fastcall CG_Wind_QueryRegion(const vec3_t *worldPos, double radius, ParticleSystemHandle restrictToSystem, unsigned __int8 *outHandles, int maxOutHandles)
{
  __int64 v5; 
  unsigned int v8; 
  float v9; 
  __int128 v11; 
  __int64 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  int v30; 
  const VectorFieldInstance *Instance; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float sizeScale; 
  float *vf; 
  float v41; 
  unsigned int v43; 
  unsigned int v44; 
  __int64 v47; 
  __int64 v48; 
  __int128 v49; 
  __int64 v50[4]; 
  unsigned int v51; 
  __int64 v52; 

  v5 = 0i64;
  v8 = 0;
  v9 = *(float *)&radius;
  if ( !outHandles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 478, ASSERT_TYPE_ASSERT, "(outHandles)", (const char *)&queryFormat, "outHandles") )
    __debugbreak();
  HIDWORD(v49) = 0;
  v11 = v49;
  *(float *)&v11 = worldPos->v[0];
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
  v14 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v15 = _mm_shuffle_ps(*(__m128 *)&radius, *(__m128 *)&radius, 0);
  memset(v50, 0, sizeof(v50));
  v16 = _mm128_sub_ps(_XMM3, v15);
  v17 = _mm128_add_ps(v15, _XMM3);
  if ( dword_15132F264 > *(_DWORD *)(v14 + 1772) )
  {
    j__Init_thread_header(&dword_15132F264);
    if ( dword_15132F264 == -1 )
    {
      xmmword_15132F250 = _xmm;
      j__Init_thread_footer(&dword_15132F264);
    }
  }
  _XMM1 = _mm128_add_ps(_mm_shuffle_ps(v16, v17, 68), (__m128)xmmword_15132F250);
  __asm
  {
    vmaxps  xmm1, xmm1, xmm0
    vcvttps2dq xmm2, xmm1
    vpsrld  xmm3, xmm2, 0Ah
    vmovlps [rsp+130h+var_E0], xmm3
  }
  v22 = v48;
  __asm { vmovhps [rsp+130h+var_E8], xmm3 }
  v23 = v47;
  v44 = v48;
  if ( (unsigned int)v48 <= (unsigned int)v47 )
  {
    v24 = HIDWORD(v47);
    do
    {
      v25 = HIDWORD(v48);
      v43 = HIDWORD(v48);
      if ( HIDWORD(v48) <= v24 )
      {
        do
        {
          if ( v22 < 0x100 && v25 < 0x100 )
          {
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v26 = (v22 << 8) + v25;
            v27 = s_windGridCountData[v26];
            v51 = v27;
            if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v28 = 0i64;
            v52 = *((_QWORD *)s_windGridFieldData + v26);
            if ( v27 )
            {
              do
              {
                v29 = *((unsigned __int8 *)&v52 + v28);
                v30 = *((_DWORD *)v50 + (v29 >> 5));
                if ( ((0x80000000 >> (*((_BYTE *)&v52 + v28) & 0x1F)) & v30) == 0 )
                {
                  Instance = CG_VectorField_GetInstance(v29);
                  if ( restrictToSystem == PARTICLE_SYSTEM_INVALID_HANDLE || Instance->systemOwner == restrictToSystem )
                  {
                    if ( Instance->inUse )
                    {
                      v32 = worldPos->v[0] - Instance->orient.origin.v[0];
                      v33 = worldPos->v[1] - Instance->orient.origin.v[1];
                      v34 = worldPos->v[2] - Instance->orient.origin.v[2];
                      v35 = (float)((float)(v33 * Instance->orient.axis.m[1].v[0]) + (float)(v32 * Instance->orient.axis.m[0].v[0])) + (float)(v34 * Instance->orient.axis.m[2].v[0]);
                      v36 = (float)((float)(v33 * Instance->orient.axis.m[1].v[1]) + (float)(v32 * Instance->orient.axis.m[0].v[1])) + (float)(v34 * Instance->orient.axis.m[2].v[1]);
                      v37 = v34 * Instance->orient.axis.m[2].v[2];
                      v38 = (float)(v33 * Instance->orient.axis.m[1].v[2]) + (float)(v32 * Instance->orient.axis.m[0].v[2]);
                      sizeScale = Instance->sizeScale;
                      vf = (float *)Instance->vf;
                      v41 = v38 + v37;
                      if ( v35 < (float)((float)(sizeScale * vf[7]) + v9) && v36 < (float)((float)(sizeScale * vf[8]) + v9) && v41 < (float)((float)(sizeScale * vf[9]) + v9) && v35 > (float)((float)(sizeScale * vf[4]) - v9) && v36 > (float)((float)(sizeScale * vf[5]) - v9) && v41 > (float)((float)(sizeScale * vf[6]) - v9) )
                      {
                        ++v8;
                        *((_DWORD *)v50 + (v29 >> 5)) = v30 | (0x80000000 >> (v29 & 0x1F));
                        outHandles[v5] = v29;
                        if ( ++v5 >= maxOutHandles )
                          return v8;
                      }
                    }
                    v27 = v51;
                  }
                }
                v28 = (unsigned int)(v28 + 1);
              }
              while ( (unsigned int)v28 < v27 );
              v24 = HIDWORD(v47);
            }
            v22 = v44;
            v25 = v43;
          }
          v43 = ++v25;
        }
        while ( v25 <= v24 );
        v23 = v47;
      }
      v44 = ++v22;
    }
    while ( v22 <= v23 );
  }
  return v8;
}

/*
==============
CG_Wind_RemoveVectorField
==============
*/
void CG_Wind_RemoveVectorField(const unsigned __int8 handle)
{
  const VectorFieldInstance *Instance; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int8 v18; 
  bool v19; 
  base_vec2_t<unsigned int> outIterEnd; 
  base_vec2_t<unsigned int> outIterStart; 
  unsigned int v22; 
  unsigned __int64 v23; 

  Instance = CG_VectorField_GetInstance(handle);
  outIterStart = 0i64;
  outIterEnd = 0i64;
  CG_Wind_GetVectorFieldGridCoords(Instance, &outIterStart, &outIterEnd);
  v4 = outIterEnd.v[0];
  v5 = outIterStart.v[0];
  if ( outIterStart.v[0] <= outIterEnd.v[0] )
  {
    v6 = outIterEnd.v[1];
    do
    {
      v7 = outIterStart.v[1];
      if ( outIterStart.v[1] <= v6 )
      {
        do
        {
          if ( v5 < 0x100 && v7 < 0x100 )
          {
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v8 = v7 + (v5 << 8);
            v9 = s_windGridCountData[v8];
            v22 = v9;
            if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v10 = *((_QWORD *)s_windGridFieldData + v8);
            v23 = v10;
            if ( v9 )
            {
              _XMM2 = v23;
              _XMM1 = (unsigned int)(char)handle;
              __asm
              {
                vpxor   xmm0, xmm0, xmm0
                vpshufb xmm1, xmm1, xmm0
                vpcmpeqb xmm1, xmm1, xmm2
                vpmovmskb eax, xmm1
                tzcnt   ecx, eax
              }
              if ( _ECX < v9 )
              {
                v22 = --v9;
                _XMM0 = *((unsigned __int64 *)&`Int4RequeueByteXY'::`2'::cShuffles + (_ECX & 7));
                __asm { vpshufb xmm1, xmm2, xmm0 }
                v23 = _XMM1;
                v10 = _XMM1;
              }
            }
            v18 = v22;
            if ( v9 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v22, "unsigned", v9) )
              __debugbreak();
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 102, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v19 = s_windGridFieldData == NULL;
            s_windGridCountData[v8] = v18;
            if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 116, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            *((_QWORD *)s_windGridFieldData + v8) = v10;
          }
          ++v7;
        }
        while ( v7 <= v6 );
        v4 = outIterEnd.v[0];
      }
      ++v5;
    }
    while ( v5 <= v4 );
  }
}

/*
==============
CG_Wind_Sample
==============
*/
bool CG_Wind_Sample(const vec3_t *worldPos, vec3_t *outSample, WindSampleType windSampleType)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int v7; 
  bool result; 
  int v9; 
  float v10; 
  vec3_t outSamplea; 
  WindGridCell outCell; 

  v4 = (unsigned int)windSampleType;
  v5 = (unsigned int)(int)(float)(worldPos->v[0] + 130048.0) >> 10;
  v7 = (unsigned int)(int)(float)(worldPos->v[1] + 130048.0) >> 10;
  if ( v5 >= 0x100 || v7 >= 0x100 )
    return 0;
  CG_Wind_GetGridCell(v5, v7, &outCell);
  if ( outCell.numVecFields )
  {
    v9 = CG_VectorField_SamplePosAgainstInstances(worldPos, &outSamplea, outCell.numVecFields, (unsigned __int8 *)&outCell.8, s_windTypeVFMap[v4]);
    v10 = outSamplea.v[1];
    outSample->v[0] = outSamplea.v[0];
    outSample->v[2] = outSamplea.v[2];
    outSample->v[1] = v10;
    return v9 != 0;
  }
  else
  {
    result = 0;
    *(_QWORD *)outSample->v = 0i64;
    outSample->v[2] = 0.0;
  }
  return result;
}

/*
==============
CG_Wind_SampleCapsule
==============
*/
bool CG_Wind_SampleCapsule(const vec3_t *worldPos, const CapsuleBounds *cpBounds, vec3_t *outSample, WindSampleType windSampleType)
{
  unsigned int v4; 
  unsigned int v6; 
  __int64 v8; 
  bool result; 
  int v10; 
  float v11; 
  vec3_t outSamplea; 
  WindGridCell outCell; 

  v4 = (unsigned int)(int)(float)(worldPos->v[1] + 130048.0) >> 10;
  v6 = (unsigned int)(int)(float)(worldPos->v[0] + 130048.0) >> 10;
  v8 = (unsigned int)windSampleType;
  if ( v6 >= 0x100 || v4 >= 0x100 )
    return 0;
  CG_Wind_GetGridCell(v6, v4, &outCell);
  if ( outCell.numVecFields )
  {
    v10 = CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(cpBounds, &outSamplea, outCell.numVecFields, (const unsigned __int8 *const)&outCell.8, s_windTypeVFMap[v8]);
    v11 = outSamplea.v[1];
    outSample->v[0] = outSamplea.v[0];
    outSample->v[2] = outSamplea.v[2];
    outSample->v[1] = v11;
    return v10 != 0;
  }
  else
  {
    result = 0;
    *(_QWORD *)outSample->v = 0i64;
    outSample->v[2] = 0.0;
  }
  return result;
}

/*
==============
CG_Wind_SamplePosAgainstInstances
==============
*/
bool CG_Wind_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, WindSampleType windSampleType)
{
  return CG_VectorField_SamplePosAgainstInstances(pos, outSample, numInstances, samplers, s_windTypeVFMap[windSampleType]) != 0;
}

/*
==============
RB_CG_Wind_GetWindGridCountBuffer
==============
*/
GfxWrappedBuffer *RB_CG_Wind_GetWindGridCountBuffer()
{
  return &s_windGridCountBuffer;
}

/*
==============
RB_CG_Wind_GetWindGridFieldBuffer
==============
*/
GfxWrappedBuffer *RB_CG_Wind_GetWindGridFieldBuffer()
{
  return &s_windGridFieldBuffer;
}

/*
==============
RB_CG_Wind_UpdateWindGridBuffers
==============
*/
void RB_CG_Wind_UpdateWindGridBuffers(void)
{
  ;
}

/*
==============
R_CG_Wind_InitGridBuffers
==============
*/
void R_CG_Wind_InitGridBuffers(void)
{
  ;
}

/*
==============
R_CG_Wind_ShutdownGridBuffers
==============
*/
void R_CG_Wind_ShutdownGridBuffers(void)
{
  ;
}

