/*
==============
hkPerlinNoise2d::hkPerlinNoise2d
==============
*/

void __fastcall hkPerlinNoise2d::hkPerlinNoise2d(hkPerlinNoise2d *this, int seed, int N)
{
  ??0hkPerlinNoise2d@@QEAA@HH@Z(this, seed, N);
}

/*
==============
hkPerlinNoise2d::hkPerlinNoise2d
==============
*/
void hkPerlinNoise2d::hkPerlinNoise2d(hkPerlinNoise2d *this, int seed, int N)
{
  hkPerlinNoise2d *v4; 
  hkPseudoRandomGenerator v18; 

  v4 = this;
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (hkPerlinNoise2d_vtbl *)&hkPerlinNoise2d::`vftable';
  v18.m_seed = seed + 2;
  v18.m_current = seed + 2;
  __asm
  {
    vbroadcastss xmm1, cs:__real@3c75c28f
    vmovups xmmword ptr [rcx+20h], xmm1
    vbroadcastss xmm1, cs:__real@3f266666
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+170h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+50h], xmm1
  }
  this->m_octaves = 8;
  this->m_N = N;
  *(float *)&_XMM0 = hkPseudoRandomGenerator::getRandReal01(&v18);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@460ca000
    vaddss  xmm2, xmm1, cs:__real@447a0000
    vcvttss2si ecx, xmm2
  }
  v4->m_r1 = _ECX + 10 * seed;
  *(float *)&_XMM0 = hkPseudoRandomGenerator::getRandReal01(&v18);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@495bba00
    vaddss  xmm2, xmm1, cs:__real@47c35000
    vcvttss2si ecx, xmm2
  }
  v4->m_r2 = 1000 * seed + _ECX;
  *(float *)&_XMM0 = hkPseudoRandomGenerator::getRandReal01(&v18);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@4e5693a4
    vaddss  xmm2, xmm1, cs:__real@4cbebc20
    vcvttss2si ecx, xmm2
  }
  v4->m_r3 = 1000000 * seed + _ECX;
}

