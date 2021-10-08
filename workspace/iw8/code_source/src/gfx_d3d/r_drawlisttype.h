/*
==============
R_ForwardToPrepassStencilDrawListType
==============
*/

GfxDrawListType __fastcall R_ForwardToPrepassStencilDrawListType(GfxDrawListType drawListType)
{
  return ?R_ForwardToPrepassStencilDrawListType@@YA?AW4GfxDrawListType@@W41@@Z(drawListType);
}

/*
==============
R_ForwardToPrepassStencilDrawListType
==============
*/
__int64 R_ForwardToPrepassStencilDrawListType(GfxDrawListType drawListType)
{
  unsigned __int32 v2; 
  __int64 v4; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  if ( (unsigned int)(drawListType - 14) > 4 )
  {
    v9 = 18;
    v7 = 14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 251, ASSERT_TYPE_ASSERT, "( DRAWLIST_HUD_OUTLINE_FIRST ) <= ( drawListType ) && ( drawListType ) <= ( DRAWLIST_HUD_OUTLINE_LAST )", "drawListType not in [DRAWLIST_HUD_OUTLINE_FIRST, DRAWLIST_HUD_OUTLINE_LAST]\n\t%i not in [%i, %i]", drawListType, v7, v9) )
      __debugbreak();
  }
  v2 = drawListType + 70;
  if ( v2 - 84 > 4 )
  {
    LODWORD(v8) = 88;
    LODWORD(v6) = 84;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 253, ASSERT_TYPE_ASSERT, "( DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_FIRST ) <= ( prepassStencilDrawList ) && ( prepassStencilDrawList ) <= ( DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_LAST )", "prepassStencilDrawList not in [DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_FIRST, DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_LAST]\n\t%i not in [%i, %i]", v4, v6, v8) )
      __debugbreak();
  }
  return v2;
}

