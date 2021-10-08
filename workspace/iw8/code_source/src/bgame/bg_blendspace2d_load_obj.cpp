/*
==============
BlendSpace2D_Register
==============
*/

BlendSpace2DDef *__fastcall BlendSpace2D_Register(const char *name)
{
  return ?BlendSpace2D_Register@@YAPEAUBlendSpace2DDef@@PEBD@Z(name);
}

/*
==============
BlendSpace2D_Register
==============
*/
BlendSpace2DDef *BlendSpace2D_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d_load_obj.cpp", 349, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d_load_obj.cpp", 336, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_BLENDSPACE2D, name, 1).blendSpace2DDef;
}

