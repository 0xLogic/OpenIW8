/*
==============
Glass_PackVertex
==============
*/

void __fastcall Glass_PackVertex(const vec2_t *expanded, FxGlassVertex *vert)
{
  ?Glass_PackVertex@@YAXAEBTvec2_t@@PEAUFxGlassVertex@@@Z(expanded, vert);
}

/*
==============
Glass_PackVertex
==============
*/
void Glass_PackVertex(const vec2_t *expanded, FxGlassVertex *vert)
{
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm0, 1 }
  vert->x = truncate_cast<short,int>((int)*(float *)&_XMM3);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  vert->y = truncate_cast<short,int>((int)*(float *)&_XMM0);
}

