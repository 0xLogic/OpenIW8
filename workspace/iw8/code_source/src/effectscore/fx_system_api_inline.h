/*
==============
FX_GetClientVisibility
==============
*/

double __fastcall FX_GetClientVisibility(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  double result; 

  *(float *)&result = ?FX_GetClientVisibility@@YAMW4LocalClientNum_t@@AEBTvec3_t@@1@Z(localClientNum, start, end);
  return result;
}

/*
==============
FX_GetClientVisibility
==============
*/
float FX_GetClientVisibility(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  FxSystem *System; 
  const FxVisState *visStateBufferRead; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  float v18; 
  volatile int v20; 
  float *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 

  Sys_ProfBeginNamedEvent(0, "fx client vis");
  System = FX_GetSystem(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_FX_VIS);
  visStateBufferRead = System->visStateBufferRead;
  if ( visStateBufferRead && visStateBufferRead->blockerCount )
  {
    Profile_Begin(230);
    v8 = end->v[0] - start->v[0];
    v10 = LODWORD(end->v[1]);
    v9 = end->v[1] - start->v[1];
    v11 = end->v[2] - start->v[2];
    v12 = LODWORD(FLOAT_1_0);
    *(float *)&v10 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v11 * v11));
    _XMM3 = v10;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    v16 = v9 * (float)(1.0 / *(float *)&_XMM0);
    v17 = v11 * (float)(1.0 / *(float *)&_XMM0);
    v30 = v17;
    v29 = v16;
    v18 = v8 * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v10 >= fx_visMinTraceDist->current.value )
    {
      if ( visStateBufferRead->blockerCount > 256 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 71, ASSERT_TYPE_ASSERT, "( visState->blockerCount ) <= ( 256 )", "%s <= %s\n\t%i, %i", "visState->blockerCount", "FX_VIS_BLOCKER_LIMIT", visStateBufferRead->blockerCount, 256) )
          __debugbreak();
        v17 = v30;
      }
      v20 = 0;
      if ( visStateBufferRead->blockerCount > 0 )
      {
        v21 = &visStateBufferRead->blocker[0].origin.v[2];
        do
        {
          v22 = *(v21 - 2);
          v23 = *(v21 - 1);
          v24 = start->v[1];
          v25 = start->v[2];
          v26 = (float)((float)((float)(v22 - start->v[0]) * v18) + (float)((float)(v23 - v24) * v16)) + (float)((float)(*v21 - v25) * v17);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - (float)(*(float *)&_XMM3 * 0.5)) & _xmm) <= (float)(*(float *)&_XMM3 * 0.5) )
          {
            v27 = _mm_cvtepi32_ps((__m128i)*((unsigned __int16 *)v21 + 2)).m128_f32[0];
            if ( (float)((float)((float)((float)((float)((float)(v26 * v29) + v24) - v23) * (float)((float)((float)(v26 * v29) + v24) - v23)) + (float)((float)((float)((float)(v18 * v26) + start->v[0]) - v22) * (float)((float)((float)(v18 * v26) + start->v[0]) - v22))) + (float)((float)((float)((float)(v26 * v30) + v25) - *v21) * (float)((float)((float)(v26 * v30) + v25) - *v21))) < (float)((float)(v27 * v27) * 0.00390625) )
            {
              v28 = v12;
              *(float *)&v28 = *(float *)&v12 * (float)((float)*((unsigned __int16 *)v21 + 3) * 0.000015258789);
              v12 = v28;
            }
          }
          ++v20;
          v16 = v29;
          v17 = v30;
          v21 += 4;
        }
        while ( v20 < visStateBufferRead->blockerCount );
      }
      Profile_EndInternal(NULL);
      Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
      Sys_ProfEndNamedEvent();
      return *(float *)&v12;
    }
    else
    {
      Profile_EndInternal(NULL);
      Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
      Sys_ProfEndNamedEvent();
      return FLOAT_1_0;
    }
  }
  else
  {
    Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
    Sys_ProfEndNamedEvent();
    return FLOAT_1_0;
  }
}

