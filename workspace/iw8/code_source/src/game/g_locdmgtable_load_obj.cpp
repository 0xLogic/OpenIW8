/*
==============
LocDmgTable_Register
==============
*/

LocDmgTable *__fastcall LocDmgTable_Register(const char *name)
{
  return ?LocDmgTable_Register@@YAPEAULocDmgTable@@PEBD@Z(name);
}

/*
==============
LocDmgTable_Register
==============
*/
LocDmgTable *LocDmgTable_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_locdmgtable_load_obj.cpp", 182, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_locdmgtable_load_obj.cpp", 169, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_LOCDMGTABLE, name, 1).locDmgTable;
}

