/*
==============
TextureAtlas_GetCoords_ByIndex_Pow2Bits
==============
*/

void __fastcall TextureAtlas_GetCoords_ByIndex_Pow2Bits(unsigned int tileIndex, unsigned int tilesWidePow2Bits, unsigned int tilesHighPow2Bits, float *s0, float *ds, float *t0, float *dt)
{
  ?TextureAtlas_GetCoords_ByIndex_Pow2Bits@@YAXIIIAEAM000@Z(tileIndex, tilesWidePow2Bits, tilesHighPow2Bits, s0, ds, t0, dt);
}

/*
==============
TextureAtlas_GetCoords_ByIndex_Pow2Bits
==============
*/
void TextureAtlas_GetCoords_ByIndex_Pow2Bits(unsigned int tileIndex, unsigned int tilesWidePow2Bits, unsigned int tilesHighPow2Bits, float *s0, float *ds, float *t0, float *dt)
{
  int v26; 

  _R14 = s0;
  if ( tileIndex >= 1 << (tilesWidePow2Bits + tilesHighPow2Bits) )
  {
    v26 = 1 << (tilesWidePow2Bits + tilesHighPow2Bits);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.h", 25, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( 1 << ( tilesWidePow2Bits + tilesHighPow2Bits ) )", "tileIndex doesn't index 1 << ( tilesWidePow2Bits + tilesHighPow2Bits )\n\t%i not in [0, %i)", tileIndex, v26) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  _R8 = ds;
  _RDX = dt;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9
    vdivss  xmm0, xmm1, xmm0
    vmovss  dword ptr [r8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdx], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [r14], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = t0;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdx]
    vmovss  dword ptr [rax], xmm1
  }
}

