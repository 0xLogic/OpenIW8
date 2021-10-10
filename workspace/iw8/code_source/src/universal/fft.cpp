/*
==============
FFT_Init
==============
*/

void __fastcall FFT_Init(int *fftBitswap, complex_t *fftTrigTable)
{
  ?FFT_Init@@YAXPEAHPEAUcomplex_t@@@Z(fftBitswap, fftTrigTable);
}

/*
==============
FFT
==============
*/

void __fastcall FFT(float *data_inoutX, float *data_inoutY, unsigned int log2_count, int *bitSwap, complex_t *trigTable)
{
  ?FFT@@YAXPEIAM0IPEIAHPEIAUcomplex_t@@@Z(data_inoutX, data_inoutY, log2_count, bitSwap, trigTable);
}

/*
==============
FFT
==============
*/
void FFT(float *data_inoutX, float *data_inoutY, unsigned int log2_count, int *bitSwap, complex_t *trigTable)
{
  char v5; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int64 v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned int v37; 
  char v38; 
  unsigned int v39; 
  int v40; 
  __int64 v41; 
  __m128 v50; 
  __int64 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __int64 v55; 
  int v57[512]; 

  v5 = log2_count;
  if ( ((unsigned __int8)data_inoutX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 55, ASSERT_TYPE_ASSERT, "(!((uintptr_t)data_inoutX & 15))", (const char *)&queryFormat, "!((uintptr_t)data_inoutX & 15)") )
    __debugbreak();
  if ( ((unsigned __int8)data_inoutY & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 56, ASSERT_TYPE_ASSERT, "(!((uintptr_t)data_inoutY & 15))", (const char *)&queryFormat, "!((uintptr_t)data_inoutY & 15)") )
    __debugbreak();
  v8 = 1 << v5;
  if ( ((1 << v5) & 3) != 0 )
  {
    LODWORD(v55) = 1 << v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 60, ASSERT_TYPE_ASSERT, "( ( !(count & 3) ) )", "( count ) = %i", v55) )
      __debugbreak();
  }
  v9 = 8 - v5;
  if ( v8 )
  {
    v10 = 2;
    do
    {
      v11 = v10 - 2;
      v12 = v11;
      v13 = v10;
      v14 = (unsigned int)(bitSwap[v11] >> v9);
      v15 = (unsigned int)(bitSwap[v10] >> v9);
      v57[v14] = LODWORD(data_inoutX[v11]);
      v16 = v10 - 1;
      v17 = v10 + 1;
      v10 += 4;
      v18 = (unsigned int)(bitSwap[v16] >> v9);
      v57[v18] = LODWORD(data_inoutX[v16]);
      v57[v15] = LODWORD(data_inoutX[v13]);
      v19 = (unsigned int)(bitSwap[v17] >> v9);
      v57[v19] = LODWORD(data_inoutX[v17]);
      v57[v14 + 256] = LODWORD(data_inoutY[v12]);
      v57[v18 + 256] = LODWORD(data_inoutY[v16]);
      v57[v15 + 256] = LODWORD(data_inoutY[v13]);
      v57[v19 + 256] = LODWORD(data_inoutY[v17]);
    }
    while ( v10 - 2 < v8 );
    v20 = 3;
    do
    {
      v21 = v20;
      v22 = *(float *)&v57[v20 - 2];
      v23 = v20 - 2;
      v24 = *(float *)&v57[v20 - 3];
      v25 = *(float *)&v57[v20 + 256];
      v26 = v24 + v22;
      v27 = *(float *)&v57[v23 + 256];
      v28 = v24 - v22;
      v29 = *(float *)&v57[v20];
      v30 = v20 - 3;
      v31 = v20 - 1;
      v32 = *(float *)&v57[v31];
      v33 = v32 + v29;
      v34 = v32 - v29;
      v35 = *(float *)&v57[v31 + 256];
      v36 = *(float *)&v57[v30 + 256];
      data_inoutX[v30] = v33 + v26;
      data_inoutX[v31] = v26 - v33;
      data_inoutX[v23] = v28 - (float)(v35 - v25);
      v20 += 4;
      data_inoutX[v21] = (float)(v35 - v25) + v28;
      data_inoutY[v30] = (float)(v35 + v25) + (float)(v36 + v27);
      data_inoutY[v31] = (float)(v36 + v27) - (float)(v35 + v25);
      data_inoutY[v23] = (float)(v36 - v27) + v34;
      data_inoutY[v21] = (float)(v36 - v27) - v34;
    }
    while ( v20 - 3 < v8 );
  }
  v37 = 4;
  v38 = 5;
  if ( v8 > 4 )
  {
    do
    {
      v39 = 2 * v37;
      if ( v37 )
      {
        v40 = 2;
        do
        {
          v41 = (unsigned int)(v40 - 2);
          _XMM6 = LODWORD(trigTable[(v40 - 2) << v38].real);
          __asm { vinsertps xmm6, xmm6, dword ptr [rdi+r8*8], 10h }
          _XMM7 = LODWORD(trigTable[(v40 - 2) << v38].imag);
          __asm
          {
            vinsertps xmm7, xmm7, dword ptr [rdi+r8*8+4], 10h
            vinsertps xmm7, xmm7, dword ptr [rdi+rdx*8+4], 20h ; ' '
            vinsertps xmm6, xmm6, dword ptr [rdi+rdx*8], 20h ; ' '
            vinsertps xmm6, xmm6, dword ptr [rdi+rax*8], 30h ; '0'
            vinsertps xmm7, xmm7, dword ptr [rdi+rax*8+4], 30h ; '0'
          }
          for ( ; (unsigned int)v41 < v8; v41 = v39 + (unsigned int)v41 )
          {
            v50 = *(__m128 *)&data_inoutX[v41];
            v51 = v37 + (unsigned int)v41;
            v52 = _mm128_sub_ps(_mm128_mul_ps(_XMM6, *(__m128 *)&data_inoutX[v51]), _mm128_mul_ps(_XMM7, *(__m128 *)&data_inoutY[v51]));
            v53 = _mm128_add_ps(_mm128_mul_ps(_XMM6, *(__m128 *)&data_inoutY[v51]), _mm128_mul_ps(_XMM7, *(__m128 *)&data_inoutX[v51]));
            v54 = *(__m128 *)&data_inoutY[v41];
            *(__m128 *)&data_inoutY[v51] = _mm128_sub_ps(v54, v53);
            *(__m128 *)&data_inoutX[v51] = _mm128_sub_ps(v50, v52);
            *(__m128 *)&data_inoutY[v41] = _mm128_add_ps(v53, v54);
            *(__m128 *)&data_inoutX[v41] = _mm128_add_ps(v52, v50);
          }
          v40 += 4;
        }
        while ( v40 - 2 < v37 );
      }
      --v38;
      v37 *= 2;
    }
    while ( v39 < v8 );
  }
}

/*
==============
FFT_Init
==============
*/
void FFT_Init(int *fftBitswap, complex_t *fftTrigTable)
{
  int *v3; 
  int i; 
  int v5; 

  v3 = fftBitswap;
  if ( !fftBitswap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 10, ASSERT_TYPE_ASSERT, "(fftBitswap)", (const char *)&queryFormat, "fftBitswap") )
    __debugbreak();
  if ( !fftTrigTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 11, ASSERT_TYPE_ASSERT, "(fftTrigTable)", (const char *)&queryFormat, "fftTrigTable") )
    __debugbreak();
  for ( i = 0; i < 256; ++i )
  {
    *v3 = 0;
    v5 = 0;
    if ( (i & 1) != 0 )
    {
      v5 = 128;
      *v3 = 128;
    }
    if ( (i & 2) != 0 )
    {
      v5 |= 0x40u;
      *v3 = v5;
    }
    if ( (i & 4) != 0 )
    {
      v5 |= 0x20u;
      *v3 = v5;
    }
    if ( (i & 8) != 0 )
    {
      v5 |= 0x10u;
      *v3 = v5;
    }
    if ( (i & 0x10) != 0 )
    {
      v5 |= 8u;
      *v3 = v5;
    }
    if ( (i & 0x20) != 0 )
    {
      v5 |= 4u;
      *v3 = v5;
    }
    if ( (i & 0x40) != 0 )
    {
      v5 |= 2u;
      *v3 = v5;
    }
    if ( (i & 0x80u) != 0 )
      *v3 = v5 | 1;
    FastSinCos((float)i * 0.024543693, &fftTrigTable->imag, (float *)fftTrigTable);
    ++fftTrigTable;
    ++v3;
  }
}

