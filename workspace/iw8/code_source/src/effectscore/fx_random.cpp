/*
==============
FX_RandomDir
==============
*/

void __fastcall FX_RandomDir(int seed, vec3_t *dir)
{
  ?FX_RandomDir@@YAXHAEATvec3_t@@@Z(seed, dir);
}

/*
==============
FX_InitRandom
==============
*/

void FX_InitRandom(void)
{
  ?FX_InitRandom@@YAXXZ();
}

/*
==============
FX_InitRandom
==============
*/
void FX_InitRandom(void)
{
  ;
}

/*
==============
FX_RandomDir
==============
*/
void FX_RandomDir(int seed, vec3_t *dir)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float c; 
  float s; 

  v3 = seed;
  v5 = (float)(fx_randomTable[seed + 10] * 2.0) - 1.0;
  v4 = v5;
  if ( (v5 < -1.0 || v5 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_random.cpp", 2162, ASSERT_TYPE_ASSERT, "( ( height >= -1.0f && height <= 1.0f ) )", "( height ) = %g", v5) )
    __debugbreak();
  v6 = fsqrt(1.0 - (float)(v5 * v5));
  FastSinCos(fx_randomTable[v3 + 9] * 6.2831855, &s, &c);
  v7 = s * v6;
  v8 = c * v6;
  v9 = (float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v5 * v5);
  dir->v[0] = c * v6;
  dir->v[1] = v7;
  dir->v[2] = v4;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_random.cpp", 2172, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", "(%g, %g, %g) len %g", v8, v7, v4, fsqrt(v9)) )
    __debugbreak();
}

