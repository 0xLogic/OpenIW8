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
  char v10; 
  unsigned int v13; 
  char v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  unsigned int v59; 
  char v60; 
  unsigned int v62; 
  int v63; 
  __int64 v90; 
  int v92[512]; 

  v10 = log2_count;
  _RSI = data_inoutY;
  _R14 = data_inoutX;
  if ( ((unsigned __int8)data_inoutX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 55, ASSERT_TYPE_ASSERT, "(!((uintptr_t)data_inoutX & 15))", (const char *)&queryFormat, "!((uintptr_t)data_inoutX & 15)") )
    __debugbreak();
  if ( ((unsigned __int8)_RSI & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 56, ASSERT_TYPE_ASSERT, "(!((uintptr_t)data_inoutY & 15))", (const char *)&queryFormat, "!((uintptr_t)data_inoutY & 15)") )
    __debugbreak();
  v13 = 1 << v10;
  if ( ((1 << v10) & 3) != 0 )
  {
    LODWORD(v90) = 1 << v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 60, ASSERT_TYPE_ASSERT, "( ( !(count & 3) ) )", "( count ) = %i", v90) )
      __debugbreak();
  }
  v14 = 8 - v10;
  __asm
  {
    vmovaps [rsp+900h+var_50], xmm6
    vmovaps [rsp+900h+var_60], xmm7
  }
  if ( v13 )
  {
    __asm { vmovaps [rsp+900h+var_70], xmm8 }
    v15 = 2;
    __asm
    {
      vmovaps [rsp+900h+var_80], xmm9
      vmovaps [rsp+900h+var_90], xmm10
    }
    do
    {
      v16 = v15 - 2;
      v17 = v16;
      v18 = v15;
      v19 = (unsigned int)(bitSwap[v16] >> v14);
      v20 = (unsigned int)(bitSwap[v15] >> v14);
      v92[v19] = LODWORD(_R14[v16]);
      v21 = v15 - 1;
      v22 = v15 + 1;
      v15 += 4;
      v23 = (unsigned int)(bitSwap[v21] >> v14);
      v92[v23] = LODWORD(_R14[v21]);
      v92[v20] = LODWORD(_R14[v18]);
      v24 = (unsigned int)(bitSwap[v22] >> v14);
      v92[v24] = LODWORD(_R14[v22]);
      v92[v19 + 256] = LODWORD(_RSI[v17]);
      v92[v23 + 256] = LODWORD(_RSI[v21]);
      v92[v20 + 256] = LODWORD(_RSI[v18]);
      v92[v24 + 256] = LODWORD(_RSI[v22]);
    }
    while ( v15 - 2 < v13 );
    v25 = 3;
    do
    {
      _RAX = v25 - 2;
      _R8 = v25;
      __asm { vmovss  xmm1, [rsp+rax*4+900h+var_8A0] }
      _R9 = _RAX;
      _RAX = v25 - 3;
      __asm
      {
        vmovss  xmm0, [rsp+rax*4+900h+var_8A0]
        vmovss  xmm3, [rbp+r8*4+800h+var_4A0]
        vaddss  xmm8, xmm0, xmm1
        vmovss  xmm2, [rbp+r9*4+800h+var_4A0]
        vsubss  xmm10, xmm0, xmm1
        vmovss  xmm1, [rsp+r8*4+900h+var_8A0]
      }
      _RDX = _RAX;
      _RAX = v25 - 1;
      __asm
      {
        vmovss  xmm0, [rsp+rax*4+900h+var_8A0]
        vaddss  xmm4, xmm0, xmm1
        vsubss  xmm9, xmm0, xmm1
        vmovss  xmm0, [rbp+rax*4+800h+var_4A0]
        vmovss  xmm1, [rbp+rdx*4+800h+var_4A0]
        vaddss  xmm6, xmm1, xmm2
        vsubss  xmm7, xmm1, xmm2
        vsubss  xmm2, xmm0, xmm3
        vaddss  xmm5, xmm0, xmm3
        vaddss  xmm0, xmm4, xmm8
        vmovss  dword ptr [r14+rdx*4], xmm0
        vsubss  xmm0, xmm8, xmm4
        vmovss  dword ptr [r14+rax*4], xmm0
        vsubss  xmm1, xmm10, xmm2
        vmovss  dword ptr [r14+r9*4], xmm1
        vaddss  xmm0, xmm5, xmm6
        vaddss  xmm1, xmm2, xmm10
      }
      v25 += 4;
      __asm
      {
        vmovss  dword ptr [r14+r8*4], xmm1
        vaddss  xmm1, xmm7, xmm9
        vmovss  dword ptr [rsi+rdx*4], xmm0
        vsubss  xmm0, xmm6, xmm5
        vmovss  dword ptr [rsi+rax*4], xmm0
        vmovss  dword ptr [rsi+r9*4], xmm1
        vsubss  xmm1, xmm7, xmm9
        vmovss  dword ptr [rsi+r8*4], xmm1
      }
    }
    while ( v25 - 3 < v13 );
    __asm
    {
      vmovaps xmm10, [rsp+900h+var_90]
      vmovaps xmm9, [rsp+900h+var_80]
      vmovaps xmm8, [rsp+900h+var_70]
    }
  }
  v59 = 4;
  v60 = 5;
  if ( v13 > 4 )
  {
    _RDI = trigTable;
    do
    {
      v62 = 2 * v59;
      if ( v59 )
      {
        v63 = 2;
        do
        {
          _R11 = (unsigned int)(v63 - 2);
          _RAX = (unsigned int)((v63 - 2) << v60);
          _R9 = _RAX;
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+rax*8]
            vinsertps xmm6, xmm6, dword ptr [rdi+r8*8], 10h
            vmovss  xmm7, dword ptr [rdi+r9*8+4]
            vinsertps xmm7, xmm7, dword ptr [rdi+r8*8+4], 10h
            vinsertps xmm7, xmm7, dword ptr [rdi+rdx*8+4], 20h ; ' '
            vinsertps xmm6, xmm6, dword ptr [rdi+rdx*8], 20h ; ' '
            vinsertps xmm6, xmm6, dword ptr [rdi+rax*8], 30h ; '0'
            vinsertps xmm7, xmm7, dword ptr [rdi+rax*8+4], 30h ; '0'
          }
          for ( ; (unsigned int)_R11 < v13; _R11 = v62 + (unsigned int)_R11 )
          {
            __asm { vmovups xmm3, xmmword ptr [r14+r11*4] }
            _RAX = v59 + (unsigned int)_R11;
            __asm
            {
              vmulps  xmm1, xmm6, xmmword ptr [r14+rax*4]
              vmulps  xmm0, xmm7, xmmword ptr [rsi+rax*4]
              vmulps  xmm2, xmm6, xmmword ptr [rsi+rax*4]
              vsubps  xmm5, xmm1, xmm0
              vmulps  xmm0, xmm7, xmmword ptr [r14+rax*4]
              vaddps  xmm4, xmm2, xmm0
              vmovups xmm0, xmmword ptr [rsi+r11*4]
              vsubps  xmm2, xmm0, xmm4
              vsubps  xmm1, xmm3, xmm5
              vaddps  xmm4, xmm4, xmm0
              vaddps  xmm3, xmm5, xmm3
              vmovups xmmword ptr [rsi+rax*4], xmm2
              vmovups xmmword ptr [r14+rax*4], xmm1
              vmovups xmmword ptr [rsi+r11*4], xmm4
              vmovups xmmword ptr [r14+r11*4], xmm3
            }
          }
          v63 += 4;
        }
        while ( v63 - 2 < v59 );
      }
      --v60;
      v59 *= 2;
    }
    while ( v62 < v13 );
  }
  __asm
  {
    vmovaps xmm7, [rsp+900h+var_60]
    vmovaps xmm6, [rsp+900h+var_50]
  }
}

/*
==============
FFT_Init
==============
*/
void FFT_Init(int *fftBitswap, complex_t *fftTrigTable)
{
  int *v5; 
  int i; 
  int v8; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v5 = fftBitswap;
  if ( !fftBitswap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 10, ASSERT_TYPE_ASSERT, "(fftBitswap)", (const char *)&queryFormat, "fftBitswap") )
    __debugbreak();
  if ( !fftTrigTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\fft.cpp", 11, ASSERT_TYPE_ASSERT, "(fftTrigTable)", (const char *)&queryFormat, "fftTrigTable") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3cc90fdb }
  for ( i = 0; i < 256; ++i )
  {
    *v5 = 0;
    v8 = 0;
    if ( (i & 1) != 0 )
    {
      v8 = 128;
      *v5 = 128;
    }
    if ( (i & 2) != 0 )
    {
      v8 |= 0x40u;
      *v5 = v8;
    }
    if ( (i & 4) != 0 )
    {
      v8 |= 0x20u;
      *v5 = v8;
    }
    if ( (i & 8) != 0 )
    {
      v8 |= 0x10u;
      *v5 = v8;
    }
    if ( (i & 0x10) != 0 )
    {
      v8 |= 8u;
      *v5 = v8;
    }
    if ( (i & 0x20) != 0 )
    {
      v8 |= 4u;
      *v5 = v8;
    }
    if ( (i & 0x40) != 0 )
    {
      v8 |= 2u;
      *v5 = v8;
    }
    if ( (i & 0x80u) != 0 )
      *v5 = v8 | 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm0, xmm0, xmm6; radians
    }
    FastSinCos(*(const float *)&_XMM0, &fftTrigTable->imag, (float *)fftTrigTable);
    ++fftTrigTable;
    ++v5;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

