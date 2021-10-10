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
  float v6; 
  int v7; 
  float v8; 
  int v9; 
  int v10; 
  bool v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 

  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [r8+0Ch]
    vmaxss  xmm2, xmm1, dword ptr [r8+14h]
  }
  v6 = 1.0 / *(float *)&_XMM2;
  v7 = (int)(float)((float)((float)((float)(position->v[0] - bounds->midPoint.v[0]) * (float)(1.0 / *(float *)&_XMM2)) + 1.0) * 1048575.5);
  v8 = (float)(position->v[1] - bounds->midPoint.v[1]) * (float)(1.0 / *(float *)&_XMM2);
  if ( v7 > 0x1FFFFF )
    v7 = 0x1FFFFF;
  v9 = (int)(float)((float)(v8 + 1.0) * 1048575.5);
  if ( v9 > 0x1FFFFF )
    v9 = 0x1FFFFF;
  v10 = (int)(float)((float)((float)((float)(position->v[2] - bounds->midPoint.v[2]) * v6) + 1.0) * 1048575.5);
  if ( v10 > 0x1FFFFF )
    v10 = 0x1FFFFF;
  v11 = v10 < 0;
  v12 = v10;
  v13 = v9;
  if ( v11 )
    v12 = 0;
  v14 = (*(_QWORD *)&v12 & 0x1FFFFFi64) << 21;
  if ( v9 < 0 )
    v13 = 0;
  v15 = *(_QWORD *)&v13 & 0x1FFFFFi64 | v14;
  v16 = v7;
  v17 = v15 << 21;
  if ( v7 < 0 )
    v16 = 0;
  return (PackedPosition)(*(_QWORD *)&v16 & 0x1FFFFFi64 | v17);
}

/*
==============
XSurfacePackSelfVisibility
==============
*/
__int64 XSurfacePackSelfVisibility(const vec4_t *selfVisibility)
{
  double v2; 
  int v3; 
  double v4; 
  int v5; 
  double v6; 
  int v7; 
  double v8; 

  v2 = I_fclamp((float)(selfVisibility->v[0] + 1.0) * 0.5, 0.0, 1.0);
  v3 = (int)(float)((float)(*(float *)&v2 * 511.0) + 0.5);
  v4 = I_fclamp((float)(selfVisibility->v[1] + 1.0) * 0.5, 0.0, 1.0);
  v5 = (int)(float)((float)(*(float *)&v4 * 511.0) + 0.5);
  v6 = I_fclamp(selfVisibility->v[2], 0.0, 1.0);
  v7 = (int)(float)((float)(*(float *)&v6 * 127.0) + 0.5);
  v8 = I_fclamp(selfVisibility->v[3], 0.0, 1.0);
  return v3 | ((v5 | ((v7 | (unsigned int)((int)(float)((float)(*(float *)&v8 * 127.0) + 0.5) << 7)) << 9)) << 9);
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
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float binormalSign; 
  vec4_t outQuat; 

  QuatDec3nToUnitQuat(packedQuat, &outQuat, &binormalSign);
  v3 = outQuat.v[0];
  v4 = outQuat.v[1];
  v5 = outQuat.v[2];
  v6 = outQuat.v[3];
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", outQuat.v[0], outQuat.v[1], outQuat.v[2], outQuat.v[3], fsqrt(v7)) )
    __debugbreak();
  result->v[0] = (float)((float)(v4 * v6) + (float)(v3 * v5)) * 2.0;
  result->v[1] = (float)((float)(v4 * v5) - (float)(v3 * v6)) * 2.0;
  result->v[2] = 1.0 - (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) * 2.0);
}

/*
==============
XSurfaceUnpackPosition
==============
*/
void XSurfaceUnpackPosition(const PackedPosition packedPosition, const Bounds *bounds, vec3_t *result)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  v3 = (float)(packedPosition.packedDWords[0] & 0x1FFFFF);
  v4 = v3 * 0.00000047683739;
  result->v[0] = v3 * 0.00000047683739;
  v5 = (float)((*(_QWORD *)&packedPosition >> 21) & 0x1FFFFFi64);
  v6 = v5 * 0.00000047683739;
  result->v[1] = v5 * 0.00000047683739;
  v7 = (float)((*(_QWORD *)&packedPosition >> 42) & 0x1FFFFFi64);
  result->v[2] = v7 * 0.00000047683739;
  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmaxss  xmm6, xmm1, dword ptr [rdx+14h]
  }
  result->v[0] = (float)((float)((float)(v4 * 2.0) - 1.0) * *(float *)&_XMM6) + bounds->midPoint.v[0];
  result->v[1] = (float)((float)((float)(v6 * 2.0) - 1.0) * *(float *)&_XMM6) + bounds->midPoint.v[1];
  result->v[2] = (float)((float)((float)((float)(v7 * 0.00000047683739) * 2.0) - 1.0) * *(float *)&_XMM6) + bounds->midPoint.v[2];
}

/*
==============
XSurfaceUnpackPositionToFloat4
==============
*/
void XSurfaceUnpackPositionToFloat4(const PackedPosition packedPosition, const Bounds *bounds, float4 *result)
{
  __int128 v9; 

  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmaxss  xmm8, xmm1, dword ptr [rdx+14h]
  }
  *(float *)&_XMM0 = (float)(packedPosition.packedDWords[0] & 0x1FFFFF);
  *(float *)&v9 = (float)((float)((float)((float)(*(float *)&_XMM0 * 0.00000047683739) * 2.0) - 1.0) * *(float *)&_XMM8) + bounds->midPoint.v[0];
  *(float *)&_XMM0 = (float)((*(_QWORD *)&packedPosition >> 21) & 0x1FFFFFi64);
  *((float *)&v9 + 1) = (float)((float)((float)((float)(*(float *)&_XMM0 * 0.00000047683739) * 2.0) - 1.0) * *(float *)&_XMM8) + bounds->midPoint.v[1];
  _XMM2 = v9;
  __asm
  {
    vinsertps xmm2, xmm2, xmm0, 20h ; ' '
    vinsertps xmm2, xmm2, xmm1, 30h ; '0'
  }
  *result = (float4)_XMM2.v;
}

/*
==============
XSurfaceUnpackSelfVisibility
==============
*/
void XSurfaceUnpackSelfVisibility(PackedSelfVisibility src, vec4_t *result)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  v2 = (float)((src.packed >> 18) & 0x7F);
  result->v[2] = v2 * 0.0078740157;
  v3 = (float)(src.packed >> 25);
  v4 = v3 * 0.0078740157;
  v5 = (float)(src.packed & 0x1FF);
  result->v[3] = v4;
  result->v[0] = (float)((float)(v5 * 0.0019569471) * 2.0) - 1.0;
  v6 = (float)((src.packed >> 9) & 0x1FF);
  result->v[1] = (float)((float)(v6 * 0.0019569471) * 2.0) - 1.0;
}

/*
==============
XSurfaceUnpackTangent
==============
*/
void XSurfaceUnpackTangent(const PackedQuatDec3n packedQuat, vec3_t *result)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float binormalSign; 
  vec4_t outQuat; 

  QuatDec3nToUnitQuat(packedQuat, &outQuat, &binormalSign);
  v3 = outQuat.v[0];
  v4 = outQuat.v[1];
  v5 = outQuat.v[2];
  v6 = outQuat.v[3];
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 48, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", outQuat.v[0], outQuat.v[1], outQuat.v[2], outQuat.v[3], fsqrt(v7)) )
    __debugbreak();
  result->v[0] = 1.0 - (float)((float)((float)(v4 * v4) + (float)(v5 * v5)) * 2.0);
  result->v[1] = (float)((float)(v3 * v4) + (float)(v6 * v5)) * 2.0;
  result->v[2] = (float)((float)(v3 * v5) - (float)(v4 * v6)) * 2.0;
}

