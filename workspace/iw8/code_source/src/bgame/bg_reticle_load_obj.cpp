/*
==============
Reticle_Register
==============
*/

ReticleDef *__fastcall Reticle_Register(const char *name)
{
  return ?Reticle_Register@@YAPEAUReticleDef@@PEBD@Z(name);
}

/*
==============
Reticle_Register
==============
*/
ReticleDef *Reticle_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_reticle_load_obj.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_reticle_load_obj.cpp", 171, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_RETICLE, name, 1).reticleDef;
}

