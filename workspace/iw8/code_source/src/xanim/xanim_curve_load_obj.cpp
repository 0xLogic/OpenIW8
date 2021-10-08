/*
==============
XAnimCurve_Register
==============
*/

XAnimCurve *__fastcall XAnimCurve_Register(const char *name)
{
  return ?XAnimCurve_Register@@YAPEAUXAnimCurve@@PEBD@Z(name);
}

/*
==============
XAnimCurve_Register
==============
*/
XAnimCurve *XAnimCurve_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve_load_obj.cpp", 216, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve_load_obj.cpp", 203, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_XANIMCURVE, name, 1).xanimCurve;
}

