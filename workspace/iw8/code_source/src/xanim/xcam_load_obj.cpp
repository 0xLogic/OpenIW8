/*
==============
XCam_Register
==============
*/

XCam *__fastcall XCam_Register(const char *name)
{
  return ?XCam_Register@@YAPEAUXCam@@PEBD@Z(name);
}

/*
==============
XCam_Register
==============
*/
XCam *XCam_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xcam_load_obj.cpp", 706, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xcam_load_obj.cpp", 693, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_XCAM, name, 1).xcam;
}

