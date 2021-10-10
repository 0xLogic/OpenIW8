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
  __int64 v7; 
  __int64 v9; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 

  v7 = tilesHigh;
  v9 = tilesWide;
  if ( !tilesWide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 40, ASSERT_TYPE_ASSERT, "(tilesWide > 0)", (const char *)&queryFormat, "tilesWide > 0") )
    __debugbreak();
  if ( !(_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 41, ASSERT_TYPE_ASSERT, "(tilesHigh > 0)", (const char *)&queryFormat, "tilesHigh > 0") )
    __debugbreak();
  if ( tileIndex >= (int)v7 * (int)v9 )
  {
    LODWORD(v15) = tileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( tilesWide * tilesHigh )", "tileIndex doesn't index tilesWide * tilesHigh\n\t%i not in [0, %i)", v15, v7 * v9) )
      __debugbreak();
  }
  v11 = (float)v9;
  *ds = 1.0 / v11;
  v12 = (float)v7;
  *dt = 1.0 / v12;
  v13 = (float)(tileIndex % (unsigned int)v9);
  *s0 = v13 * *ds;
  v14 = (float)(tileIndex / (unsigned int)v9);
  *t0 = v14 * *dt;
}

/*
==============
TextureAtlas_GetCoords_ByIndex_Pow2
==============
*/
void TextureAtlas_GetCoords_ByIndex_Pow2(unsigned int tileIndex, unsigned int tilesWidePow2, unsigned int tilesHighPow2, float *s0, float *ds, float *t0, float *dt)
{
  unsigned int v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 

  if ( !tilesWidePow2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 23, ASSERT_TYPE_ASSERT, "(tilesWidePow2 > 0)", (const char *)&queryFormat, "tilesWidePow2 > 0") )
    __debugbreak();
  if ( !tilesHighPow2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 24, ASSERT_TYPE_ASSERT, "(tilesHighPow2 > 0)", (const char *)&queryFormat, "tilesHighPow2 > 0") )
    __debugbreak();
  if ( ((tilesWidePow2 - 1) & tilesWidePow2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 25, ASSERT_TYPE_ASSERT, "(IsPowerOf2( tilesWidePow2 ))", (const char *)&queryFormat, "IsPowerOf2( tilesWidePow2 )") )
    __debugbreak();
  if ( ((tilesHighPow2 - 1) & tilesHighPow2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 26, ASSERT_TYPE_ASSERT, "(IsPowerOf2( tilesHighPow2 ))", (const char *)&queryFormat, "IsPowerOf2( tilesHighPow2 )") )
    __debugbreak();
  v11 = 1 << tilesWidePow2;
  if ( tileIndex >= (1 << tilesWidePow2) * (1 << tilesHighPow2) )
  {
    LODWORD(v16) = tileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( ( 1 << tilesWidePow2 ) * ( 1 << tilesHighPow2 ) )", "tileIndex doesn't index ( 1 << tilesWidePow2 ) * ( 1 << tilesHighPow2 )\n\t%i not in [0, %i)", v16, v11 * (1 << tilesHighPow2)) )
      __debugbreak();
  }
  v12 = (float)v11;
  *ds = 1.0 / v12;
  v13 = (float)(unsigned int)(1 << tilesHighPow2);
  *dt = 1.0 / v13;
  v14 = (float)(tileIndex & (tilesWidePow2 - 1));
  *s0 = v14 * *ds;
  v15 = (float)(tileIndex / tilesWidePow2);
  *t0 = v15 * *dt;
}

/*
==============
TextureAtlas_GetCoords_ByPercent
==============
*/
void TextureAtlas_GetCoords_ByPercent(float percent, unsigned int tileCount, unsigned int tilesWide, unsigned int tilesHigh, float *s0, float *ds, float *t0, float *dt)
{
  __int64 v8; 
  __int64 v9; 
  unsigned int v11; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 

  v8 = tilesHigh;
  v9 = tilesWide;
  if ( percent < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 54, ASSERT_TYPE_ASSERT, "(percent >= 0.0f)", (const char *)&queryFormat, "percent >= 0.0f") )
    __debugbreak();
  if ( percent < 1.0 )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v11 = (int)*(float *)&_XMM4;
  }
  else
  {
    v11 = tileCount - 1;
  }
  if ( !(_DWORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 40, ASSERT_TYPE_ASSERT, "(tilesWide > 0)", (const char *)&queryFormat, "tilesWide > 0") )
    __debugbreak();
  if ( !(_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 41, ASSERT_TYPE_ASSERT, "(tilesHigh > 0)", (const char *)&queryFormat, "tilesHigh > 0") )
    __debugbreak();
  if ( v11 >= (int)v8 * (int)v9 )
  {
    LODWORD(v18) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( tilesWide * tilesHigh )", "tileIndex doesn't index tilesWide * tilesHigh\n\t%i not in [0, %i)", v18, v8 * v9) )
      __debugbreak();
  }
  v14 = (float)v9;
  *ds = 1.0 / v14;
  v15 = (float)v8;
  *dt = 1.0 / v15;
  v16 = (float)(v11 % (unsigned int)v9);
  *s0 = v16 * *ds;
  v17 = (float)(v11 / (unsigned int)v9);
  *t0 = v17 * *dt;
}

