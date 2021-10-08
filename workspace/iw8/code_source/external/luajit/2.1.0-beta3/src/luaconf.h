/*
==============
my_lua_assert
==============
*/
void my_lua_assert(const int expr, const char *filename, int line, const char *exprText)
{
  if ( !expr )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert(filename, line, exprText) )
      __debugbreak();
  }
}

