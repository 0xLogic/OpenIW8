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
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = outParams;
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 227, ASSERT_TYPE_ASSERT, "(outParams)", (const char *)&queryFormat, "outParams") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 228, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tAccessing networked dvars must be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  _RDI = DVARVEC3_cg_defaultWindDir;
  if ( !DVARVEC3_cg_defaultWindDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx], xmm6
    vmovss  xmm5, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbx+4], xmm5
    vmovss  xmm4, dword ptr [rdi+30h]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  v20 = DVARFLT_cg_defaultWindStrength;
  if ( !DVARFLT_cg_defaultWindStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  LODWORD(_RBX->defaultStrength) = v20->current.integer;
  v21 = DVARFLT_cg_defaultWindAreaScale;
  if ( !DVARFLT_cg_defaultWindAreaScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindAreaScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  LODWORD(_RBX->defaultAreaScale) = v21->current.integer;
  v22 = DVARFLT_cg_defaultWindAmplitudeScale;
  if ( !DVARFLT_cg_defaultWindAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  LODWORD(_RBX->defaultAmplitudeScale) = v22->current.integer;
  v23 = DVARFLT_cg_defaultWindFrequencyScale;
  if ( !DVARFLT_cg_defaultWindFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  LODWORD(_RBX->defaultFrequencyScale) = v23->current.integer;
  v24 = DVARFLT_cg_defaultWindNoiseScale;
  if ( !DVARFLT_cg_defaultWindNoiseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_defaultWindNoiseScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  LODWORD(_RBX->defaultNoiseStrength) = v24->current.integer;
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
  __int64 v15; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  char v111; 
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
    vmovaps xmmword ptr [rsp+100h+var_98+8], xmm12
    vmovaps [rsp+100h+var_A8+8], xmm13
    vmovaps [rsp+100h+var_B8+8], xmm14
    vmovaps [rsp+100h+var_C8+8], xmm15
  }
  _RSI = outIterEnd;
  v15 = tls_index;
  _RDI = outIterStart;
  _R14 = vfInstance;
  if ( dword_15132F284 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F284);
    if ( dword_15132F284 == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@0000000047fe000047fe000047fe0000
        vmovups xmmword ptr cs:maxWorldClamp.v, xmm0
      }
      j__Init_thread_footer(&dword_15132F284);
    }
  }
  if ( dword_15132F2A4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v15) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F2A4);
    if ( dword_15132F2A4 == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@00000000c7fe0000c7fe0000c7fe0000
        vmovups xmmword ptr cs:minWorldClamp.v, xmm0
      }
      j__Init_thread_footer(&dword_15132F2A4);
    }
  }
  _RAX = _R14->vf;
  __asm { vbroadcastss xmm5, dword ptr [r14+3Ch] }
  HIDWORD(v102) = 0;
  __asm
  {
    vmovups xmm3, [rsp+100h+var_E8+8]
    vmovss  xmm0, dword ptr [rax+10h]
    vmovss  xmm1, dword ptr [rax+20h]
    vmovss  xmm2, dword ptr [rax+24h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rax+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rax+18h], 20h ; ' '
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmovups [rsp+100h+var_E8+8], xmm3
    vmulps  xmm3, xmm5, xmm3
  }
  HIDWORD(v103) = 0;
  __asm
  {
    vmovups xmm4, [rsp+100h+var_E8+8]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [r14+14h]
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm2, 20h ; ' '
    vmovups [rsp+100h+var_E8+8], xmm4
  }
  HIDWORD(v104) = 0;
  __asm
  {
    vmovups xmm15, [rsp+100h+var_E8+8]
    vmovss  xmm15, xmm15, xmm0
    vmovss  xmm0, dword ptr [r14+20h]
    vinsertps xmm15, xmm15, dword ptr [r14+18h], 10h
    vinsertps xmm15, xmm15, dword ptr [r14+1Ch], 20h ; ' '
    vmovups [rsp+100h+var_E8+8], xmm15
  }
  HIDWORD(v105) = 0;
  __asm
  {
    vmovups xmm14, [rsp+100h+var_E8+8]
    vmovss  xmm14, xmm14, xmm0
    vmovss  xmm0, dword ptr [r14+2Ch]
    vinsertps xmm14, xmm14, dword ptr [r14+24h], 10h
    vinsertps xmm14, xmm14, dword ptr [r14+28h], 20h ; ' '
    vmovups [rsp+100h+var_E8+8], xmm14
  }
  HIDWORD(v106) = 0;
  __asm
  {
    vmovups xmm13, [rsp+100h+var_E8+8]
    vmovss  xmm13, xmm13, xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vinsertps xmm13, xmm13, dword ptr [r14+30h], 10h
    vinsertps xmm13, xmm13, dword ptr [r14+34h], 20h ; ' '
    vmovups [rsp+100h+var_E8+8], xmm13
  }
  HIDWORD(v107) = 0;
  __asm
  {
    vmovups xmm12, [rsp+100h+var_E8+8]
    vmovss  xmm12, xmm12, xmm0
    vinsertps xmm12, xmm12, dword ptr [r14+0Ch], 10h
    vinsertps xmm12, xmm12, dword ptr [r14+10h], 20h ; ' '
    vmulps  xmm0, xmm5, xmm4
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm4, xmm2, cs:__xmm@3f0000003f0000003f0000003f000000
    vaddps  xmm0, xmm3, xmm4
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vshufps xmm1, xmm0, xmm0, 0
    vshufps xmm8, xmm0, xmm0, 0AAh ; 'ª'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm7, xmm0, xmm13
    vandnps xmm5, xmm0, xmm15
    vandnps xmm6, xmm0, xmm14
    vmulps  xmm0, xmm15, xmm1
    vaddps  xmm2, xmm12, xmm0
    vmulps  xmm1, xmm14, xmm3
    vaddps  xmm3, xmm2, xmm1
    vmulps  xmm0, xmm13, xmm8
    vshufps xmm9, xmm4, xmm4, 0
    vshufps xmm10, xmm4, xmm4, 55h ; 'U'
    vshufps xmm11, xmm4, xmm4, 0AAh ; 'ª'
    vaddps  xmm4, xmm3, xmm0
    vmulps  xmm0, xmm10, xmm6
    vmulps  xmm1, xmm9, xmm5
    vaddps  xmm2, xmm1, xmm0
    vmulps  xmm1, xmm11, xmm7
    vaddps  xmm0, xmm2, xmm1
    vsubps  xmm3, xmm4, xmm0
    vmaxps  xmm7, xmm3, xmmword ptr cs:minWorldClamp.v
    vaddps  xmm0, xmm4, xmm0
    vminps  xmm6, xmm0, xmmword ptr cs:maxWorldClamp.v
  }
  if ( dword_15132F264 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v15) + 1772i64) )
  {
    j__Init_thread_header(&dword_15132F264);
    if ( dword_15132F264 == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@47fe000047fe000047fe000047fe0000
        vmovups cs:xmmword_15132F250, xmm0
      }
      j__Init_thread_footer(&dword_15132F264);
    }
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm6, 44h ; 'D'
    vaddps  xmm1, xmm0, cs:xmmword_15132F250
    vxorps  xmm0, xmm0, xmm0
    vmaxps  xmm1, xmm1, xmm0
    vcvttps2dq xmm2, xmm1
    vpsrld  xmm3, xmm2, 0Ah
    vmovlps qword ptr [rdi], xmm3
    vmovhps qword ptr [rsi], xmm3
  }
  _R11 = &v111;
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
    vmovaps xmm14, [rsp+100h+var_B8+8]
    vmovaps xmm15, [rsp+100h+var_C8+8]
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

__int64 __fastcall CG_Wind_QueryRegion(const vec3_t *worldPos, double radius, ParticleSystemHandle restrictToSystem, unsigned __int8 *outHandles)
{
  __int64 v18; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  __int64 result; 
  unsigned int v75; 
  unsigned int v76; 
  __int64 v78; 
  __int64 v79; 
  __int128 v80; 
  __int64 v81[4]; 
  unsigned int v82; 
  __int64 v83; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = worldPos;
  __asm { vmovaps xmm7, xmm1 }
  if ( !outHandles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 478, ASSERT_TYPE_ASSERT, "(outHandles)", (const char *)&queryFormat, "outHandles") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx] }
  HIDWORD(v80) = 0;
  __asm
  {
    vmovups xmm3, [rsp+130h+var_D8+8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
  v18 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  __asm
  {
    vmovaps xmm4, xmm7
    vshufps xmm4, xmm4, xmm4, 0
  }
  memset(v81, 0, sizeof(v81));
  __asm
  {
    vsubps  xmm6, xmm3, xmm4
    vaddps  xmm8, xmm4, xmm3
  }
  if ( dword_15132F264 > *(_DWORD *)(v18 + 1772) )
  {
    j__Init_thread_header(&dword_15132F264);
    if ( dword_15132F264 == -1 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@47fe000047fe000047fe000047fe0000
        vmovups cs:xmmword_15132F250, xmm0
      }
      j__Init_thread_footer(&dword_15132F264);
    }
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm8, 44h ; 'D'
    vaddps  xmm1, xmm0, cs:xmmword_15132F250
    vxorps  xmm0, xmm0, xmm0
    vmaxps  xmm1, xmm1, xmm0
    vcvttps2dq xmm2, xmm1
    vpsrld  xmm3, xmm2, 0Ah
    vmovlps [rsp+130h+var_E0], xmm3
  }
  v29 = v79;
  __asm { vmovhps [rsp+130h+var_E8], xmm3 }
  v30 = v78;
  __asm
  {
    vmovaps xmmword ptr [rsp+130h+var_78+8], xmm9
    vmovaps [rsp+130h+var_88+8], xmm10
  }
  v76 = v79;
  if ( (unsigned int)v79 <= (unsigned int)v78 )
  {
    v31 = HIDWORD(v78);
    do
    {
      v32 = HIDWORD(v79);
      v75 = HIDWORD(v79);
      if ( HIDWORD(v79) <= v31 )
      {
        do
        {
          if ( v29 < 0x100 && v32 < 0x100 )
          {
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v33 = (v29 << 8) + v32;
            v34 = s_windGridCountData[v33];
            v82 = v34;
            if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v35 = 0i64;
            v83 = *((_QWORD *)s_windGridFieldData + v33);
            if ( v34 )
            {
              do
              {
                if ( ((0x80000000 >> (*((_BYTE *)&v83 + v35) & 0x1F)) & *((_DWORD *)v81 + ((unsigned __int64)*((unsigned __int8 *)&v83 + v35) >> 5))) == 0 )
                {
                  _RAX = CG_VectorField_GetInstance(*((_BYTE *)&v83 + v35));
                  if ( restrictToSystem == PARTICLE_SYSTEM_INVALID_HANDLE || _RAX->systemOwner == restrictToSystem )
                  {
                    if ( _RAX->inUse )
                    {
                      _RCX = worldPos;
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rcx]
                        vsubss  xmm6, xmm0, dword ptr [rax+8]
                        vmovss  xmm1, dword ptr [rcx+4]
                        vsubss  xmm4, xmm1, dword ptr [rax+0Ch]
                        vmulss  xmm1, xmm4, dword ptr [rax+20h]
                        vmulss  xmm3, xmm4, dword ptr [rax+24h]
                        vmovss  xmm0, dword ptr [rcx+8]
                        vsubss  xmm5, xmm0, dword ptr [rax+10h]
                        vmulss  xmm0, xmm6, dword ptr [rax+14h]
                        vaddss  xmm2, xmm1, xmm0
                        vmulss  xmm1, xmm5, dword ptr [rax+2Ch]
                        vmulss  xmm0, xmm6, dword ptr [rax+18h]
                        vaddss  xmm9, xmm2, xmm1
                        vmulss  xmm1, xmm5, dword ptr [rax+30h]
                        vaddss  xmm2, xmm3, xmm0
                        vmulss  xmm3, xmm4, dword ptr [rax+28h]
                        vmulss  xmm0, xmm6, dword ptr [rax+1Ch]
                        vaddss  xmm8, xmm2, xmm1
                        vmulss  xmm1, xmm5, dword ptr [rax+34h]
                        vaddss  xmm2, xmm3, xmm0
                        vmovss  xmm0, dword ptr [rax+3Ch]
                        vaddss  xmm3, xmm2, xmm1
                        vmulss  xmm2, xmm0, dword ptr [rax+20h]
                        vmulss  xmm4, xmm0, dword ptr [rax+24h]
                        vmulss  xmm5, xmm0, dword ptr [rax+10h]
                        vmulss  xmm6, xmm0, dword ptr [rax+14h]
                        vmulss  xmm10, xmm0, dword ptr [rax+18h]
                        vmulss  xmm0, xmm0, dword ptr [rax+1Ch]
                        vaddss  xmm1, xmm0, xmm7
                        vcomiss xmm9, xmm1
                      }
                    }
                    v34 = v82;
                  }
                }
                v35 = (unsigned int)(v35 + 1);
              }
              while ( (unsigned int)v35 < v34 );
              v31 = HIDWORD(v78);
            }
            v29 = v76;
            v32 = v75;
          }
          v75 = ++v32;
        }
        while ( v32 <= v31 );
        v30 = v78;
      }
      v76 = ++v29;
    }
    while ( v29 <= v30 );
  }
  __asm { vmovaps xmm10, [rsp+130h+var_88+8] }
  result = 0i64;
  __asm { vmovaps xmm9, xmmword ptr [rsp+130h+var_78+8] }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int8 v21; 
  bool v22; 
  base_vec2_t<unsigned int> outIterEnd; 
  base_vec2_t<unsigned int> outIterStart; 
  unsigned int v25; 
  __int64 v26; 

  Instance = CG_VectorField_GetInstance(handle);
  outIterStart = 0i64;
  outIterEnd = 0i64;
  CG_Wind_GetVectorFieldGridCoords(Instance, &outIterStart, &outIterEnd);
  v4 = outIterEnd.v[0];
  v5 = outIterStart.v[0];
  if ( outIterStart.v[0] <= outIterEnd.v[0] )
  {
    _RBP = &`Int4RequeueByteXY'::`2'::cShuffles;
    v7 = outIterEnd.v[1];
    do
    {
      v8 = outIterStart.v[1];
      if ( outIterStart.v[1] <= v7 )
      {
        do
        {
          if ( v5 < 0x100 && v8 < 0x100 )
          {
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 95, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v9 = v8 + (v5 << 8);
            v10 = s_windGridCountData[v9];
            v25 = v10;
            if ( !s_windGridFieldData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 109, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v11 = *((_QWORD *)s_windGridFieldData + v9);
            v26 = v11;
            if ( v10 )
            {
              __asm { vmovq   xmm2, [rsp+0A8h+var_40] }
              _EAX = (char)handle;
              __asm
              {
                vmovd   xmm1, eax
                vpxor   xmm0, xmm0, xmm0
                vpshufb xmm1, xmm1, xmm0
                vpcmpeqb xmm1, xmm1, xmm2
                vpmovmskb eax, xmm1
                tzcnt   ecx, eax
              }
              if ( _ECX < v10 )
              {
                _RAX = _ECX & 7;
                v25 = --v10;
                __asm
                {
                  vmovq   xmm0, qword ptr [rbp+rax*8+0]
                  vpshufb xmm1, xmm2, xmm0
                  vmovq   [rsp+0A8h+var_40], xmm1
                }
                v11 = v26;
              }
            }
            v21 = v25;
            if ( v10 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v25, "unsigned", v10) )
              __debugbreak();
            if ( !s_windGridCountData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 102, ASSERT_TYPE_ASSERT, "(s_windGridCountData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridCountData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            v22 = s_windGridFieldData == NULL;
            s_windGridCountData[v9] = v21;
            if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wind.cpp", 116, ASSERT_TYPE_ASSERT, "(s_windGridFieldData && (x <= 256U) && (y <= 256U))", (const char *)&queryFormat, "s_windGridFieldData && (x <= WIND_GRID_DIM) && (y <= WIND_GRID_DIM)") )
              __debugbreak();
            _RBP = &`Int4RequeueByteXY'::`2'::cShuffles;
            *((_QWORD *)s_windGridFieldData + v9) = v11;
          }
          ++v8;
        }
        while ( v8 <= v7 );
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
  __int64 v6; 
  unsigned int v8; 
  unsigned int v12; 
  bool result; 
  int v14; 
  vec3_t outSamplea; 
  WindGridCell outCell; 

  __asm
  {
    vmovss  xmm1, cs:__real@47fe0000
    vaddss  xmm0, xmm1, dword ptr [rcx]
  }
  v6 = (unsigned int)windSampleType;
  __asm { vcvttss2si rcx, xmm0 }
  v8 = (unsigned int)_RCX >> 10;
  _RBX = outSample;
  __asm
  {
    vaddss  xmm1, xmm1, dword ptr [rdi+4]
    vcvttss2si rax, xmm1
  }
  v12 = (unsigned int)_RAX >> 10;
  if ( v8 >= 0x100 || v12 >= 0x100 )
    return 0;
  CG_Wind_GetGridCell(v8, v12, &outCell);
  if ( outCell.numVecFields )
  {
    v14 = CG_VectorField_SamplePosAgainstInstances(worldPos, &outSamplea, outCell.numVecFields, (unsigned __int8 *)&outCell.8, s_windTypeVFMap[v6]);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+outSample]
      vmovss  xmm1, dword ptr [rsp+78h+outSample+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+78h+outSample+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    return v14 != 0;
  }
  else
  {
    result = 0;
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
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
  unsigned int v9; 
  unsigned int v11; 
  __int64 v13; 
  bool result; 
  int v15; 
  vec3_t outSamplea; 
  WindGridCell outCell; 

  __asm
  {
    vmovss  xmm1, cs:__real@47fe0000
    vaddss  xmm0, xmm1, dword ptr [rcx]
    vaddss  xmm1, xmm1, dword ptr [rcx+4]
    vcvttss2si rax, xmm1
    vcvttss2si r10, xmm0
  }
  v9 = (unsigned int)_RAX >> 10;
  _RBX = outSample;
  v11 = (unsigned int)_R10 >> 10;
  v13 = (unsigned int)windSampleType;
  if ( v11 >= 0x100 || v9 >= 0x100 )
    return 0;
  CG_Wind_GetGridCell(v11, v9, &outCell);
  if ( outCell.numVecFields )
  {
    v15 = CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(cpBounds, &outSamplea, outCell.numVecFields, (const unsigned __int8 *const)&outCell.8, s_windTypeVFMap[v13]);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+outSample]
      vmovss  xmm1, dword ptr [rsp+78h+outSample+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+78h+outSample+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    return v15 != 0;
  }
  else
  {
    result = 0;
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
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

