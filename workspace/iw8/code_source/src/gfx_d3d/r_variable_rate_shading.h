/*
==============
R_VRSGetPixelsToSamplesUint
==============
*/

base_vec4_t<unsigned int> *__fastcall R_VRSGetPixelsToSamplesUint(base_vec4_t<unsigned int> *result, unsigned int frameCount, bool isOrdered)
{
  return ?R_VRSGetPixelsToSamplesUint@@YA?AT?$base_vec4_t@I@@I_N@Z(result, frameCount, isOrdered);
}

/*
==============
R_VRSGetPixelPositionForSample
==============
*/

base_vec2_t<int> __fastcall R_VRSGetPixelPositionForSample(unsigned int frameCount, unsigned int sampleIndex, bool isOrdered)
{
  return ?R_VRSGetPixelPositionForSample@@YA?AT?$base_vec2_t@H@@II_N@Z(frameCount, sampleIndex, isOrdered);
}

/*
==============
R_VRSGetPixelsToSamplesUint
==============
*/
base_vec4_t<unsigned int> *R_VRSGetPixelsToSamplesUint(base_vec4_t<unsigned int> *result, unsigned int frameCount, bool isOrdered)
{
  unsigned int v3; 
  __int64 v4; 
  char v5; 
  __int64 unsignedInt; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  v3 = 0;
  v4 = 0i64;
  v5 = frameCount;
  do
  {
    unsignedInt = v5 & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v12) = 4;
      LODWORD(v11) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v8 = s_VRSPixelToSampleOrdered_3[unsignedInt][v4];
    v9 = (int)v3;
    ++v4;
    ++v3;
    result->v[v9] = v8;
  }
  while ( v3 < 4 );
  return result;
}

/*
==============
R_VRSGetPixelPositionForSample
==============
*/
base_vec2_t<int> R_VRSGetPixelPositionForSample(unsigned int frameCount, unsigned int sampleIndex, bool isOrdered)
{
  __int64 unsignedInt; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  unsignedInt = frameCount & 3;
  v4 = sampleIndex;
  if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
    unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
  if ( sampleIndex >= 4 )
  {
    v10 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( 4 )", "sampleIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", sampleIndex, v10) )
      __debugbreak();
  }
  if ( (unsigned int)unsignedInt >= 4 )
  {
    LODWORD(v9) = 4;
    LODWORD(v7) = unsignedInt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 63, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v5 = s_VRSSampleToPixelOrdered_0[unsignedInt][v4];
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v9) = 4;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 88, ASSERT_TYPE_ASSERT, "(unsigned)( pixelPositionIndex ) < (unsigned)( 4 )", "pixelPositionIndex doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return s_VRSSamplePosition_0[v5];
}

