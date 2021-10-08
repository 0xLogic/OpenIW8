/*
==============
Byte4PackVertexColor
==============
*/

void __fastcall Byte4PackVertexColor(const vec4_t *from, unsigned __int8 *to)
{
  ?Byte4PackVertexColor@@YAXAEBTvec4_t@@QEAE@Z(from, to);
}

/*
==============
Byte4PackVertexColor
==============
*/
void Byte4PackVertexColor(const vec4_t *from, unsigned __int8 *to)
{
  unsigned __int8 v10; 
  unsigned __int8 v15; 
  unsigned __int8 v20; 
  unsigned __int8 v26; 

  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmulss  xmm1, xmm5, dword ptr [rcx]
    vmovss  xmm4, cs:__real@3f000000
    vmovaps [rsp+18h+var_18], xmm6
    vaddss  xmm2, xmm1, xmm4
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si r8d, xmm3
  }
  if ( _ER8 > 255 )
    _ER8 = 255;
  v10 = _ER8;
  if ( _ER8 < 0 )
    v10 = 0;
  *to = v10;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [rcx+4]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v15 = _ECX;
  if ( _ECX < 0 )
    v15 = 0;
  to[1] = v15;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [r9+8]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v20 = _ECX;
  if ( _ECX < 0 )
    v20 = 0;
  to[2] = v20;
  __asm
  {
    vmulss  xmm1, xmm5, dword ptr [r9+0Ch]
    vaddss  xmm3, xmm1, xmm4
    vroundss xmm1, xmm6, xmm3, 1
    vmovaps xmm6, [rsp+18h+var_18]
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v26 = _ECX;
  if ( _ECX < 0 )
    v26 = 0;
  to[3] = v26;
}

