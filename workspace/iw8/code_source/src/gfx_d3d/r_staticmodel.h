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
  int v6; 
  int v7; 

  if ( lodDistScaleIndex >= 0x10u )
  {
    v7 = 16;
    v6 = lodDistScaleIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_staticmodel.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( lodDistScaleIndex ) < (unsigned)( ( sizeof( *array_counter( g_lodDistIndexToScale ) ) + 0 ) )", "lodDistScaleIndex doesn't index ARRAY_COUNT( g_lodDistIndexToScale )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  _RAX = lodDistScaleIndex;
  _RCX = g_lodDistIndexToScale;
  __asm { vmovss  xmm0, dword ptr [rcx+rax*4] }
  return *(float *)&_XMM0;
}

