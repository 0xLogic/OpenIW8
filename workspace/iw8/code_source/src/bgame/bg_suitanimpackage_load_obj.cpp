/*
==============
SuitAnimPackage_Register
==============
*/

SuitAnimPackage *__fastcall SuitAnimPackage_Register(const char *name)
{
  return ?SuitAnimPackage_Register@@YAPEAUSuitAnimPackage@@PEBD@Z(name);
}

/*
==============
SuitAnimPackage_Register
==============
*/
SuitAnimPackage *SuitAnimPackage_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suitanimpackage_load_obj.cpp", 733, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suitanimpackage_load_obj.cpp", 720, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SUITANIMPACKAGE, name, 1).suitAnimPackage;
}

