/*
==============
R_ShouldDrawTransientZone
==============
*/

bool __fastcall R_ShouldDrawTransientZone(const GfxBackEndData *const data, const unsigned int transientIndex)
{
  return ?R_ShouldDrawTransientZone@@YA_NQEBUGfxBackEndData@@I@Z(data, transientIndex);
}

/*
==============
R_ShouldDrawTransientZone
==============
*/
bool R_ShouldDrawTransientZone(const GfxBackEndData *const data, const unsigned int transientIndex)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  return bitarray_base<bitarray<1536>>::testBit(&data->transientVisibility, transientIndex);
}

