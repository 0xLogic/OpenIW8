/*
==============
GfxStaticModelLodDistIndexToScale
==============
*/

double __fastcall GfxStaticModelLodDistIndexToScale(const unsigned __int16 lodDistScaleIndex)
{
  double result; 

  *(float *)&result = ?GfxStaticModelLodDistIndexToScale@@YAMG@Z(lodDistScaleIndex);
  return result;
}

/*
==============
GfxStaticModelLodDistIndexToScale
==============
*/
float GfxStaticModelLodDistIndexToScale(const unsigned __int16 lodDistScaleIndex)
{
  int v3; 
  int v4; 

  if ( lodDistScaleIndex >= 0x10u )
  {
    v4 = 16;
    v3 = lodDistScaleIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( lodDistScaleIndex ) < (unsigned)( ( sizeof( *array_counter( g_lodDistIndexToScale ) ) + 0 ) )", "lodDistScaleIndex doesn't index ARRAY_COUNT( g_lodDistIndexToScale )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return g_lodDistIndexToScale[lodDistScaleIndex];
}

