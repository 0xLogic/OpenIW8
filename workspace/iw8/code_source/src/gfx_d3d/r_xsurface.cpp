/*
==============
XSurfacePackPosition
==============
*/

PackedPosition __fastcall XSurfacePackPosition(const vec3_t *position, float binormalSign, const Bounds *bounds)
{
  return ?XSurfacePackPosition@@YA?ATPackedPosition@@AEBTvec3_t@@MAEBUBounds@@@Z(position, binormalSign, bounds);
}

/*
==============
XSurfacePackSelfVisibility
==============
*/

PackedSelfVisibility __fastcall XSurfacePackSelfVisibility(const vec4_t *selfVisibility)
{
  return ?XSurfacePackSelfVisibility@@YA?AUPackedSelfVisibility@@AEBTvec4_t@@@Z(selfVisibility);
}

/*
==============
XSurfaceGetModelSkinnedCachedVertDecl
==============
*/

MaterialVertexDeclType __fastcall XSurfaceGetModelSkinnedCachedVertDecl(const XSurface *surface)
{
  return ?XSurfaceGetModelSkinnedCachedVertDecl@@YA?AW4MaterialVertexDeclType@@PEBUXSurface@@@Z(surface);
}

/*
==============
XSurfaceUnpackSelfVisibility
==============
*/

void __fastcall XSurfaceUnpackSelfVisibility(PackedSelfVisibility src, vec4_t *result)
{
  ?XSurfaceUnpackSelfVisibility@@YAXUPackedSelfVisibility@@AEATvec4_t@@@Z(src, result);
}

/*
==============
XSurfaceGetModelSkinnedCachedVertDeclForSurfaceFlags
==============
*/

MaterialVertexDeclType __fastcall XSurfaceGetModelSkinnedCachedVertDeclForSurfaceFlags(unsigned int surfaceFlags, bool isLit)
{
  return ?XSurfaceGetModelSkinnedCachedVertDeclForSurfaceFlags@@YA?AW4MaterialVertexDeclType@@I_N@Z(surfaceFlags, isLit);
}

/*
==============
XSurfaceUnpackNormal
==============
*/

void __fastcall XSurfaceUnpackNormal(const PackedQuatDec3n packedQuat, vec3_t *result)
{
  ?XSurfaceUnpackNormal@@YAXTPackedQuatDec3n@@AEATvec3_t@@@Z(packedQuat, result);
}

/*
==============
XSurfaceGetModelVertDeclForSurfaceFlags
==============
*/

MaterialVertexDeclType __fastcall XSurfaceGetModelVertDeclForSurfaceFlags(unsigned int surfaceFlags, bool isLit)
{
  return ?XSurfaceGetModelVertDeclForSurfaceFlags@@YA?AW4MaterialVertexDeclType@@I_N@Z(surfaceFlags, isLit);
}

/*
==============
XSurfaceUnpackPositionToFloat4
==============
*/

void __fastcall XSurfaceUnpackPositionToFloat4(const PackedPosition packedPosition, const Bounds *bounds, float4 *result)
{
  ?XSurfaceUnpackPositionToFloat4@@YAXTPackedPosition@@AEBUBounds@@AEAUfloat4@@@Z(packedPosition, bounds, result);
}

/*
==============
XSurfaceUnpackPosition
==============
*/

void __fastcall XSurfaceUnpackPosition(const PackedPosition packedPosition, const Bounds *bounds, vec3_t *result)
{
  ?XSurfaceUnpackPosition@@YAXTPackedPosition@@AEBUBounds@@AEATvec3_t@@@Z(packedPosition, bounds, result);
}

/*
==============
XSurfaceGetSubdivVertex1Size
==============
*/

int __fastcall XSurfaceGetSubdivVertex1Size(const XSurface *surf)
{
  return ?XSurfaceGetSubdivVertex1Size@@YAHPEBUXSurface@@@Z(surf);
}

/*
==============
XSurfaceUnpackTangent
==============
*/

void __fastcall XSurfaceUnpackTangent(const PackedQuatDec3n packedQuat, vec3_t *result)
{
  ?XSurfaceUnpackTangent@@YAXTPackedQuatDec3n@@AEATvec3_t@@@Z(packedQuat, result);
}

/*
==============
XSurfaceShared_PtrFixup
==============
*/

void __fastcall XSurfaceShared_PtrFixup(XSurfaceShared *meshShared)
{
  ?XSurfaceShared_PtrFixup@@YAXPEAUXSurfaceShared@@@Z(meshShared);
}

/*
==============
XSurfaceGetModelVertDecl
==============
*/

MaterialVertexDeclType __fastcall XSurfaceGetModelVertDecl(const XSurface *surface, bool isLit)
{
  return ?XSurfaceGetModelVertDecl@@YA?AW4MaterialVertexDeclType@@PEBUXSurface@@_N@Z(surface, isLit);
}

/*
==============
XSurfaceGetModelSkinnedCachedVertDecl
==============
*/
MaterialVertexDeclType XSurfaceGetModelSkinnedCachedVertDecl(const XSurface *surface)
{
  unsigned __int16 flags; 
  MaterialVertexDeclType result; 

  flags = surface->flags;
  if ( (surface->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 66, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0") )
    __debugbreak();
  if ( (flags & 0x40) != 0 )
  {
    if ( (flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 75, ASSERT_TYPE_ASSERT, "((surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS) == 0)", (const char *)&queryFormat, "(surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS) == 0") )
      __debugbreak();
    if ( (flags & 0x20) != 0 )
    {
      return 8;
    }
    else if ( (flags & 0x80u) == 0 )
    {
      return 5;
    }
    else
    {
      return 6;
    }
  }
  else if ( (flags & 0x20) != 0 )
  {
    return 7;
  }
  else
  {
    result = VERTDECL_PACKED;
    if ( (flags & 0x100) != 0 )
      return 4;
  }
  return result;
}

/*
==============
XSurfaceGetModelSkinnedCachedVertDeclForSurfaceFlags
==============
*/
__int64 XSurfaceGetModelSkinnedCachedVertDeclForSurfaceFlags(unsigned int surfaceFlags, bool isLit)
{
  __int16 v3; 
  __int64 result; 

  v3 = surfaceFlags;
  if ( (surfaceFlags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 66, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0") )
    __debugbreak();
  if ( isLit && (v3 & 0x40) != 0 )
  {
    if ( (v3 & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 75, ASSERT_TYPE_ASSERT, "((surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS) == 0)", (const char *)&queryFormat, "(surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS) == 0") )
      __debugbreak();
    if ( (v3 & 0x20) != 0 )
    {
      return 8i64;
    }
    else if ( (v3 & 0x80u) == 0 )
    {
      return 5i64;
    }
    else
    {
      return 6i64;
    }
  }
  else if ( (v3 & 0x20) != 0 )
  {
    return 7i64;
  }
  else
  {
    result = 4i64;
    if ( (v3 & 0x100) == 0 )
      return 2i64;
  }
  return result;
}

/*
==============
XSurfaceGetModelVertDecl
==============
*/
MaterialVertexDeclType XSurfaceGetModelVertDecl(const XSurface *surface, bool isLit)
{
  unsigned __int16 flags; 
  MaterialVertexDeclType result; 

  flags = surface->flags;
  if ( isLit && (flags & 0x40) != 0 )
  {
    if ( (surface->flags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 29, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0") )
      __debugbreak();
    if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 32, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0") )
      __debugbreak();
    if ( (flags & 0x80u) == 0 )
      return 5;
    else
      return 6;
  }
  else
  {
    result = VERTDECL_PACKED;
    if ( (surface->flags & 0x100) != 0 )
      return 4;
  }
  return result;
}

/*
==============
XSurfaceGetModelVertDeclForSurfaceFlags
==============
*/
__int64 XSurfaceGetModelVertDeclForSurfaceFlags(unsigned int surfaceFlags, bool isLit)
{
  char v2; 
  __int64 result; 

  v2 = surfaceFlags;
  if ( isLit && (surfaceFlags & 0x40) != 0 )
  {
    if ( (surfaceFlags & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 29, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_MAYHEM_CUSTOM_CHANNELS ) == 0") )
      __debugbreak();
    if ( (v2 & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 32, ASSERT_TYPE_ASSERT, "(( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0)", (const char *)&queryFormat, "( surfaceFlags & SURF_FLAG_REACTIVE_MOTION ) == 0") )
      __debugbreak();
    if ( v2 >= 0 )
      return 5i64;
    else
      return 6i64;
  }
  else
  {
    result = 4i64;
    if ( (surfaceFlags & 0x100) == 0 )
      return 2i64;
  }
  return result;
}

/*
==============
XSurfaceGetSubdivVertex1Size
==============
*/
__int64 XSurfaceGetSubdivVertex1Size(const XSurface *surf)
{
  unsigned __int16 flags; 

  flags = surf->flags;
  if ( (surf->flags & 8) != 0 )
  {
LABEL_4:
    if ( (flags & 1) != 0 )
      return 12i64;
    return 8i64;
  }
  if ( (flags & 0x40) != 0 )
  {
    if ( (flags & 0x20) != 0 )
      return 12i64;
    goto LABEL_4;
  }
  if ( (flags & 1) != 0 )
  {
    if ( (flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 161, ASSERT_TYPE_ASSERT, "(( surf->flags & SURF_FLAG_TENSION ) == 0)", (const char *)&queryFormat, "( surf->flags & SURF_FLAG_TENSION ) == 0") )
      __debugbreak();
  }
  else if ( (flags & 0x20) == 0 )
  {
    return 4i64;
  }
  return 8i64;
}

/*
==============
XSurfacePackPosition
==============
*/
PackedPosition XSurfacePackPosition(const vec3_t *position, float binormalSign, const Bounds *bounds)
{
  bool v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8+10h]
    vmaxss  xmm1, xmm0, dword ptr [r8+0Ch]
    vmovss  xmm0, dword ptr [rcx]
    vmaxss  xmm2, xmm1, dword ptr [r8+14h]
    vsubss  xmm1, xmm0, dword ptr [r8]
    vmovss  xmm4, cs:__real@497ffff8
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vdivss  xmm5, xmm6, xmm2
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm0, xmm3, xmm4
    vcvttss2si r9d, xmm0
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm1, xmm0, dword ptr [r8+4]
    vmulss  xmm2, xmm1, xmm5
  }
  if ( _ER9 > 0x1FFFFF )
    _ER9 = 0x1FFFFF;
  __asm
  {
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm0, xmm3, xmm4
    vcvttss2si edx, xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm1, xmm0, dword ptr [r8+8]
    vmulss  xmm2, xmm1, xmm5
  }
  if ( _EDX > 0x1FFFFF )
    _EDX = 0x1FFFFF;
  __asm
  {
    vaddss  xmm3, xmm2, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vmulss  xmm0, xmm3, xmm4
    vcvttss2si ecx, xmm0
  }
  if ( _ECX > 0x1FFFFF )
    _ECX = 0x1FFFFF;
  v29 = _ECX < 0;
  v30 = _ECX;
  v31 = _EDX;
  if ( v29 )
    v30 = 0;
  v32 = (*(_QWORD *)&v30 & 0x1FFFFFi64) << 21;
  if ( _EDX < 0 )
    v31 = 0;
  v33 = *(_QWORD *)&v31 & 0x1FFFFFi64 | v32;
  v34 = _ER9;
  v35 = v33 << 21;
  if ( _ER9 < 0 )
    v34 = 0;
  return (PackedPosition)(*(_QWORD *)&v34 & 0x1FFFFFi64 | v35);
}

/*
==============
XSurfacePackSelfVisibility
==============
*/
__int64 XSurfacePackSelfVisibility(const vec4_t *selfVisibility)
{
  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  _RSI = selfVisibility;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vaddss  xmm1, xmm7, dword ptr [rcx]
    vmovaps [rsp+48h+var_28], xmm8
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm0, xmm1, xmm8; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@43ff8000
    vaddss  xmm1, xmm0, xmm8
    vcvttss2si rbp, xmm1
    vaddss  xmm1, xmm7, dword ptr [rsi+4]
    vmulss  xmm0, xmm1, xmm8; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@43ff8000
    vmovss  xmm0, dword ptr [rsi+8]; val
    vaddss  xmm4, xmm3, xmm8
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vcvttss2si rdi, xmm4
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42fe0000
    vaddss  xmm3, xmm0, xmm8
    vmovss  xmm0, dword ptr [rsi+0Ch]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vcvttss2si rbx, xmm3
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42fe0000
    vmovaps xmm7, [rsp+48h+var_18]
    vaddss  xmm2, xmm1, xmm8
    vmovaps xmm8, [rsp+48h+var_28]
    vcvttss2si rax, xmm2
  }
  return (unsigned int)_RBP | (((unsigned int)_RDI | (((unsigned int)_RBX | ((_DWORD)_RAX << 7)) << 9)) << 9);
}

/*
==============
XSurfaceShared_PtrFixup
==============
*/
void XSurfaceShared_PtrFixup(XSurfaceShared *meshShared)
{
  if ( !meshShared->data.streamedDataHandle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.cpp", 417, ASSERT_TYPE_ASSERT, "(meshShared->data.streamedDataHandle.data)", (const char *)&queryFormat, "meshShared->data.streamedDataHandle.data") )
    __debugbreak();
}

/*
==============
XSurfaceUnpackNormal
==============
*/
void XSurfaceUnpackNormal(const PackedQuatDec3n packedQuat, vec3_t *result)
{
  char v23; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  float binormalSign; 
  vec4_t outQuat; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = result;
  QuatDec3nToUnitQuat(packedQuat, &outQuat, &binormalSign);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+0C8h+outQuat]
    vmovss  xmm7, dword ptr [rsp+0C8h+outQuat+4]
    vmovss  xmm8, dword ptr [rsp+0C8h+outQuat+8]
    vmovss  xmm9, dword ptr [rsp+0C8h+outQuat+0Ch]
    vmovss  xmm10, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm10
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v23 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_80], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0C8h+var_88], xmm2
      vcvtss2sd xmm3, xmm8, xmm8
      vmovsd  [rsp+0C8h+var_90], xmm3
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm0
      vcvtss2sd xmm4, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_A0], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v50, v51, v52, v53, v54) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, cs:__real@40000000
    vmulss  xmm1, xmm7, xmm9
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm2, xmm4
    vmulss  xmm3, xmm7, xmm8
    vmulss  xmm0, xmm6, xmm9
    vmovss  dword ptr [rbx], xmm1
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm4
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm3, xmm6, xmm6
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+4], xmm2
    vmulss  xmm2, xmm1, xmm4
    vsubss  xmm0, xmm10, xmm2
    vmovss  dword ptr [rbx+8], xmm0
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XSurfaceUnpackPosition
==============
*/
void XSurfaceUnpackPosition(const PackedPosition packedPosition, const Bounds *bounds, vec3_t *result)
{
  __asm
  {
    vmovss  xmm1, cs:__real@5f800000
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  xmm2, cs:__real@35000004
    vmulss  xmm3, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [r8], xmm3
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm8, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [r8+4], xmm8
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  xmm5, cs:__real@40000000
    vmovss  xmm4, cs:__real@3f800000
    vmulss  xmm7, xmm0, xmm2
    vmovss  dword ptr [r8+8], xmm7
    vmovss  xmm0, dword ptr [rdx+10h]
    vmaxss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmaxss  xmm6, xmm1, dword ptr [rdx+14h]
    vmulss  xmm0, xmm3, xmm5
    vsubss  xmm0, xmm0, xmm4
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r8], xmm2
    vmulss  xmm0, xmm8, xmm5
    vmovaps xmm8, [rsp+48h+var_38]
    vsubss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdx+4]
    vmulss  xmm0, xmm7, xmm5
    vmovaps xmm7, [rsp+48h+var_28]
    vsubss  xmm1, xmm0, xmm4
    vmulss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [r8+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [r8+8], xmm3
  }
}

/*
==============
XSurfaceUnpackPositionToFloat4
==============
*/
void XSurfaceUnpackPositionToFloat4(const PackedPosition packedPosition, const Bounds *bounds, float4 *result)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm8
    vmovss  xmm0, dword ptr [rdx+10h]
    vmaxss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmaxss  xmm8, xmm1, dword ptr [rdx+14h]
    vmovss  xmm4, cs:__real@5f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  xmm5, cs:__real@35000004
    vmulss  xmm0, xmm0, xmm5
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm2, xmm1, dword ptr [rdx]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+38h+var_38], xmm2
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm0, xmm0, xmm5
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm2, xmm1, cs:__real@3f800000
    vmulss  xmm3, xmm2, xmm8
    vaddss  xmm0, xmm3, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+38h+var_38+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm5
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm2, xmm1, cs:__real@3f800000
    vmulss  xmm3, xmm2, xmm8
    vaddss  xmm0, xmm3, dword ptr [rdx+8]
    vmovups xmm2, [rsp+38h+var_38]
    vinsertps xmm2, xmm2, xmm0, 20h ; ' '
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm2, xmm2, xmm1, 30h ; '0'
    vmovups xmmword ptr [r8], xmm2
    vmovaps xmm8, [rsp+38h+var_18]
  }
}

/*
==============
XSurfaceUnpackSelfVisibility
==============
*/
void XSurfaceUnpackSelfVisibility(PackedSelfVisibility src, vec4_t *result)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@3c010204
    vmovss  dword ptr [rdx+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3c010204
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rdx+0Ch], xmm1
    vmulss  xmm1, xmm0, cs:__real@3b004020
    vmulss  xmm2, xmm1, cs:__real@40000000
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vmovss  dword ptr [rdx], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3b004020
    vmulss  xmm2, xmm1, cs:__real@40000000
    vsubss  xmm3, xmm2, cs:__real@3f800000
    vmovss  dword ptr [rdx+4], xmm3
  }
}

/*
==============
XSurfaceUnpackTangent
==============
*/
void XSurfaceUnpackTangent(const PackedQuatDec3n packedQuat, vec3_t *result)
{
  char v23; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  float binormalSign; 
  vec4_t outQuat; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = result;
  QuatDec3nToUnitQuat(packedQuat, &outQuat, &binormalSign);
  __asm
  {
    vmovss  xmm8, dword ptr [rsp+0C8h+outQuat]
    vmovss  xmm6, dword ptr [rsp+0C8h+outQuat+4]
    vmovss  xmm7, dword ptr [rsp+0C8h+outQuat+8]
    vmovss  xmm9, dword ptr [rsp+0C8h+outQuat+0Ch]
    vmovss  xmm10, cs:__real@3f800000
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm10
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v23 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_80], xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0C8h+var_88], xmm2
      vcvtss2sd xmm3, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_90], xmm3
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+var_98], xmm0
      vcvtss2sd xmm4, xmm8, xmm8
      vmovsd  [rsp+0C8h+var_A0], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 48, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v50, v51, v52, v53, v54) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, cs:__real@40000000
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm3, xmm2, xmm4
    vsubss  xmm0, xmm10, xmm3
    vmulss  xmm2, xmm8, xmm6
    vmulss  xmm1, xmm9, xmm7
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm4
    vmulss  xmm0, xmm6, xmm9
    vmulss  xmm1, xmm8, xmm7
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+4], xmm2
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rbx+8], xmm2
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

