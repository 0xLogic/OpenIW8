/*
==============
TextureAtlas_GetCoords_ByIndex
==============
*/

void __fastcall TextureAtlas_GetCoords_ByIndex(unsigned int tileIndex, unsigned int tilesWide, unsigned int tilesHigh, float *s0, float *ds, float *t0, float *dt)
{
  ?TextureAtlas_GetCoords_ByIndex@@YAXIIIAEAM000@Z(tileIndex, tilesWide, tilesHigh, s0, ds, t0, dt);
}

/*
==============
TextureAtlas_GetCoords_ByPercent
==============
*/

void __fastcall TextureAtlas_GetCoords_ByPercent(float percent, unsigned int tileCount, unsigned int tilesWide, unsigned int tilesHigh, float *s0, float *ds, float *t0, float *dt)
{
  ?TextureAtlas_GetCoords_ByPercent@@YAXMIIIAEAM000@Z(percent, tileCount, tilesWide, tilesHigh, s0, ds, t0, dt);
}

/*
==============
TextureAtlas_GetCoords_ByIndex_Pow2
==============
*/

void __fastcall TextureAtlas_GetCoords_ByIndex_Pow2(unsigned int tileIndex, unsigned int tilesWidePow2, unsigned int tilesHighPow2, float *s0, float *ds, float *t0, float *dt)
{
  ?TextureAtlas_GetCoords_ByIndex_Pow2@@YAXIIIAEAM000@Z(tileIndex, tilesWidePow2, tilesHighPow2, s0, ds, t0, dt);
}

/*
==============
TextureAtlas_GetCoords_ByIndex
==============
*/
void TextureAtlas_GetCoords_ByIndex(unsigned int tileIndex, unsigned int tilesWide, unsigned int tilesHigh, float *s0, float *ds, float *t0, float *dt)
{
  __int64 v29; 

  _RBP = s0;
  if ( !tilesWide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 40, ASSERT_TYPE_ASSERT, "(tilesWide > 0)", (const char *)&queryFormat, "tilesWide > 0") )
    __debugbreak();
  if ( !tilesHigh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 41, ASSERT_TYPE_ASSERT, "(tilesHigh > 0)", (const char *)&queryFormat, "tilesHigh > 0") )
    __debugbreak();
  if ( tileIndex >= tilesHigh * tilesWide )
  {
    LODWORD(v29) = tileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( tilesWide * tilesHigh )", "tileIndex doesn't index tilesWide * tilesHigh\n\t%i not in [0, %i)", v29, tilesHigh * tilesWide) )
      __debugbreak();
  }
  _R9 = ds;
  __asm { vmovss  xmm2, cs:__real@3f800000 }
  _R8 = dt;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
    vdivss  xmm0, xmm2, xmm0
    vmovss  dword ptr [r9], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rbx
    vdivss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, dword ptr [r9]
    vmovss  dword ptr [rbp+0], xmm1
  }
  _RAX = t0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [rax], xmm1
  }
}

/*
==============
TextureAtlas_GetCoords_ByIndex_Pow2
==============
*/
void TextureAtlas_GetCoords_ByIndex_Pow2(unsigned int tileIndex, unsigned int tilesWidePow2, unsigned int tilesHighPow2, float *s0, float *ds, float *t0, float *dt)
{
  __int64 v29; 

  _R12 = s0;
  if ( !tilesWidePow2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 23, ASSERT_TYPE_ASSERT, "(tilesWidePow2 > 0)", (const char *)&queryFormat, "tilesWidePow2 > 0") )
    __debugbreak();
  if ( !tilesHighPow2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 24, ASSERT_TYPE_ASSERT, "(tilesHighPow2 > 0)", (const char *)&queryFormat, "tilesHighPow2 > 0") )
    __debugbreak();
  if ( ((tilesWidePow2 - 1) & tilesWidePow2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 25, ASSERT_TYPE_ASSERT, "(IsPowerOf2( tilesWidePow2 ))", (const char *)&queryFormat, "IsPowerOf2( tilesWidePow2 )") )
    __debugbreak();
  if ( ((tilesHighPow2 - 1) & tilesHighPow2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 26, ASSERT_TYPE_ASSERT, "(IsPowerOf2( tilesHighPow2 ))", (const char *)&queryFormat, "IsPowerOf2( tilesHighPow2 )") )
    __debugbreak();
  if ( tileIndex >= (1 << tilesWidePow2) * (1 << tilesHighPow2) )
  {
    LODWORD(v29) = tileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( ( 1 << tilesWidePow2 ) * ( 1 << tilesHighPow2 ) )", "tileIndex doesn't index ( 1 << tilesWidePow2 ) * ( 1 << tilesHighPow2 )\n\t%i not in [0, %i)", v29, (1 << tilesWidePow2) * (1 << tilesHighPow2)) )
      __debugbreak();
  }
  _RCX = ds;
  __asm { vmovss  xmm2, cs:__real@3f800000 }
  _R8 = dt;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm0, xmm2, xmm0
    vmovss  dword ptr [rcx], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, dword ptr [rcx]
  }
  _RAX = t0;
  __asm
  {
    vmovss  dword ptr [r12], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [rax], xmm1
  }
}

/*
==============
TextureAtlas_GetCoords_ByPercent
==============
*/

void __fastcall TextureAtlas_GetCoords_ByPercent(double percent, unsigned int tileCount, unsigned int tilesWide, unsigned int tilesHigh, float *s0, float *ds, float *t0, float *dt)
{
  unsigned int v16; 
  __int64 v35; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm0
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
  }
  v16 = tileCount - 1;
  if ( !tilesWide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 40, ASSERT_TYPE_ASSERT, "(tilesWide > 0)", (const char *)&queryFormat, "tilesWide > 0") )
    __debugbreak();
  if ( !tilesHigh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 41, ASSERT_TYPE_ASSERT, "(tilesHigh > 0)", (const char *)&queryFormat, "tilesHigh > 0") )
    __debugbreak();
  if ( v16 >= tilesHigh * tilesWide )
  {
    LODWORD(v35) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( tilesWide * tilesHigh )", "tileIndex doesn't index tilesWide * tilesHigh\n\t%i not in [0, %i)", v35, tilesHigh * tilesWide) )
      __debugbreak();
  }
  _R9 = ds;
  _R8 = dt;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
    vdivss  xmm1, xmm7, xmm0
    vmovss  dword ptr [r9], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rsi
    vdivss  xmm1, xmm7, xmm0
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [r8], xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  _RAX = s0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, dword ptr [r9]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
  }
  _RAX = t0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [rax], xmm1
  }
}

