/*
==============
FootstepVFX_Register
==============
*/

FootstepVFX *__fastcall FootstepVFX_Register(const char *name)
{
  return ?FootstepVFX_Register@@YAPEAUFootstepVFX@@PEBD@Z(name);
}

/*
==============
FootstepVFX_Register
==============
*/
FootstepVFX *FootstepVFX_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_footstepvfx_load_obj.cpp", 233, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_footstepvfx_load_obj.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_FOOTSTEP_VFX, name, 1).footstepVFX;
}

