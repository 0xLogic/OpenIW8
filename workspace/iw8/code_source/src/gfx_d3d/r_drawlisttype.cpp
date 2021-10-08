/*
==============
R_GetDrawListTypeName
==============
*/

const char *__fastcall R_GetDrawListTypeName(GfxDrawListType drawListType)
{
  return ?R_GetDrawListTypeName@@YAPEBDW4GfxDrawListType@@@Z(drawListType);
}

/*
==============
R_GetDrawListTypeName
==============
*/
const char *R_GetDrawListTypeName(GfxDrawListType drawListType)
{
  __int64 v1; 

  v1 = drawListType;
  if ( drawListType == DRAWLIST_BACKEND_COUNT )
    return "UNKNOWN";
  if ( (unsigned int)drawListType >= DRAWLIST_BACKEND_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( ( sizeof( *array_counter( s_drawListTypeNames ) ) + 0 ) )", "drawListType doesn't index ARRAY_COUNT( s_drawListTypeNames )\n\t%i not in [0, %i)", drawListType, 89) )
    __debugbreak();
  return s_drawListTypeNames[v1];
}

