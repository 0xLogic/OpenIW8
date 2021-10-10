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
  hkPseudoRandomGenerator v7; 

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (hkPerlinNoise2d_vtbl *)&hkPerlinNoise2d::`vftable';
  v7.m_seed = seed + 2;
  v7.m_current = seed + 2;
  __asm { vbroadcastss xmm1, cs:__real@3c75c28f }
  this->m_frequency = (hkSimdFloat32)_XMM1.m_real;
  __asm { vbroadcastss xmm1, cs:__real@3f266666 }
  this->m_persistence = (hkSimdFloat32)_XMM1.m_real;
  this->m_amplitude.m_real = g_vectorfConstants[6];
  this->m_coverage.m_real = g_vectorfConstants[23];
  this->m_octaves = 8;
  this->m_N = N;
  this->m_r1 = (int)(float)((float)(hkPseudoRandomGenerator::getRandReal01(&v7) * 9000.0) + 1000.0) + 10 * seed;
  this->m_r2 = 1000 * seed + (int)(float)((float)(hkPseudoRandomGenerator::getRandReal01(&v7) * 900000.0) + 100000.0);
  this->m_r3 = 1000000 * seed + (int)(float)((float)(hkPseudoRandomGenerator::getRandReal01(&v7) * 900000000.0) + 100000000.0);
}

