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

void __fastcall Glass_PackVertex(const vec2_t *expanded, FxGlassVertex *vert, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmulss  xmm1, xmm0, cs:__real@42000000
    vaddss  xmm0, xmm1, cs:__real@3f000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm0, 1
  }
  _RBX = expanded;
  __asm { vcvttss2si ecx, xmm3; val }
  vert->x = truncate_cast<short,int>(_ECX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm0, cs:__real@42000000
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vcvttss2si ecx, xmm0; val
  }
  vert->y = truncate_cast<short,int>(_ECX);
}

