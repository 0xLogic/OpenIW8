/*
==============
FX_LoadWorld
==============
*/

FxWorld *__fastcall FX_LoadWorld(const char *name)
{
  return ?FX_LoadWorld@@YAPEAUFxWorld@@PEBD@Z(name);
}

/*
==============
FX_LoadWorld
==============
*/
FxWorld *FX_LoadWorld(const char *name)
{
  if ( DB_FindXAssetHeader(ASSET_TYPE_FXWORLD, name, 1).fxWorld != &fxWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_world.cpp", 741, ASSERT_TYPE_ASSERT, "(header.fxWorld == &fxWorld)", (const char *)&queryFormat, "header.fxWorld == &fxWorld") )
    __debugbreak();
  return &fxWorld;
}

