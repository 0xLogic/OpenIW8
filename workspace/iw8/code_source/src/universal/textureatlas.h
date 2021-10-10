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
  char v9; 
  char v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int v17; 

  v9 = tilesHighPow2Bits;
  v10 = tilesWidePow2Bits;
  if ( tileIndex >= 1 << (tilesWidePow2Bits + tilesHighPow2Bits) )
  {
    v17 = 1 << (tilesWidePow2Bits + tilesHighPow2Bits);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.h", 25, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( 1 << ( tilesWidePow2Bits + tilesHighPow2Bits ) )", "tileIndex doesn't index 1 << ( tilesWidePow2Bits + tilesHighPow2Bits )\n\t%i not in [0, %i)", tileIndex, v17) )
      __debugbreak();
  }
  v11 = (unsigned int)(1 << v10);
  v12 = (float)v11;
  *ds = 1.0 / v12;
  v13 = (float)(unsigned int)(1 << v9);
  *dt = 1.0 / v13;
  v14 = (float)(tileIndex & (v11 - 1));
  *s0 = v14 * *ds;
  v15 = (float)(tileIndex >> v10);
  *t0 = v15 * *dt;
}

