/*
==============
Com_LoadWorld
==============
*/

void __fastcall Com_LoadWorld(const char *name)
{
  ?Com_LoadWorld@@YAXPEBD@Z(name);
}

/*
==============
Com_LoadWorld
==============
*/
void Com_LoadWorld(const char *name)
{
  if ( DB_FindXAssetHeader(ASSET_TYPE_COMWORLD, name, 1).comWorld != &comWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_load_obj.cpp", 1791, ASSERT_TYPE_ASSERT, "(header.comWorld == &comWorld)", (const char *)&queryFormat, "header.comWorld == &comWorld") )
    __debugbreak();
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_load_obj.cpp", 1792, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
}

