/*
==============
LUI_CoD_GameSP_RegisterFunctions
==============
*/

void __fastcall LUI_CoD_GameSP_RegisterFunctions(lua_State *luaVM)
{
  ?LUI_CoD_GameSP_RegisterFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_GameSP_RegisterFunctions
==============
*/
void LUI_CoD_GameSP_RegisterFunctions(lua_State *luaVM)
{
  if ( LUI_CoD_InFrontend() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_sp\\lui_cod_game_sp.cpp", 16, ASSERT_TYPE_ASSERT, "(!LUI_CoD_InFrontend())", (const char *)&queryFormat, "!LUI_CoD_InFrontend()") )
    __debugbreak();
  j_luaL_register(luaVM, "Game", SP_Game_methods);
  j_lua_settop(luaVM, -2);
}

