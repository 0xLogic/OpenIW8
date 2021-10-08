/*
==============
R_DecalVolume_GetAtlasFormat
==============
*/

GfxPixelFormat __fastcall R_DecalVolume_GetAtlasFormat(unsigned int atlasIndex)
{
  return ?R_DecalVolume_GetAtlasFormat@@YA?AW4GfxPixelFormat@@I@Z(atlasIndex);
}

/*
==============
GetBoolFromString
==============
*/

bool __fastcall GetBoolFromString(const char *str, bool *value)
{
  return ?GetBoolFromString@@YA_NPEBDPEA_N@Z(str, value);
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcp
==============
*/

double __fastcall R_DecalVolumes_CalculateZFeatherRcp(float zFeatherIn, float decalHalfDepth)
{
  double result; 

  *(float *)&result = ?R_DecalVolumes_CalculateZFeatherRcp@@YAMMM@Z(zFeatherIn, decalHalfDepth);
  return result;
}

/*
==============
R_DecalVolumes_PackOpacityParams
==============
*/

void __fastcall R_DecalVolumes_PackOpacityParams(GfxStaticDecalVolumePacked *dst, const vec3_t *blendMapCurve, float zFeather)
{
  ?R_DecalVolumes_PackOpacityParams@@YAXAEAUGfxStaticDecalVolumePacked@@AEBTvec3_t@@M@Z(dst, blendMapCurve, zFeather);
}

/*
==============
R_DecalVolumes_PackMaterialInfo
==============
*/

void __fastcall R_DecalVolumes_PackMaterialInfo(GfxStaticDecalVolumePacked *dst, unsigned int packedMaterialInfo)
{
  ?R_DecalVolumes_PackMaterialInfo@@YAXAEAUGfxStaticDecalVolumePacked@@I@Z(dst, packedMaterialInfo);
}

/*
==============
R_DecalVolumes_PackOBB
==============
*/

void __fastcall R_DecalVolumes_PackOBB(GfxStaticDecalVolumePacked *dst, const GfxDecalVolumeObb *obb)
{
  ?R_DecalVolumes_PackOBB@@YAXAEAUGfxStaticDecalVolumePacked@@AEBUGfxDecalVolumeObb@@@Z(dst, obb);
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcpNormalized
==============
*/

double __fastcall R_DecalVolumes_CalculateZFeatherRcpNormalized(float zFeatherIn01)
{
  double result; 

  *(float *)&result = ?R_DecalVolumes_CalculateZFeatherRcpNormalized@@YAMM@Z(zFeatherIn01);
  return result;
}

/*
==============
R_DecalVolumes_UnpackOBB
==============
*/

void __fastcall R_DecalVolumes_UnpackOBB(GfxDecalVolumeObb *obb, const GfxStaticDecalVolumePacked *packed)
{
  ?R_DecalVolumes_UnpackOBB@@YAXAEAUGfxDecalVolumeObb@@AEBUGfxStaticDecalVolumePacked@@@Z(obb, packed);
}

/*
==============
R_DecalVolumes_PrecalculateBlendMapAdjust
==============
*/

void __fastcall R_DecalVolumes_PrecalculateBlendMapAdjust(float edge0, float edge1, float scale, vec2_t *outOffsetScale)
{
  ?R_DecalVolumes_PrecalculateBlendMapAdjust@@YAXMMMAEATvec2_t@@@Z(edge0, edge1, scale, outOffsetScale);
}

/*
==============
R_DecalVolume_IsValidImage
==============
*/

bool __fastcall R_DecalVolume_IsValidImage(const GfxImage *image, GfxPixelFormat expectedImageFormat, const char *materialName)
{
  return ?R_DecalVolume_IsValidImage@@YA_NPEBUGfxImage@@W4GfxPixelFormat@@PEBD@Z(image, expectedImageFormat, materialName);
}

/*
==============
R_DecalVolume_FindExistingMask
==============
*/

GfxDecalVolumeMask *__fastcall R_DecalVolume_FindExistingMask(const char *name)
{
  return ?R_DecalVolume_FindExistingMask@@YAPEAUGfxDecalVolumeMask@@PEBD@Z(name);
}

/*
==============
R_DecalVolumes_PackUVTransform
==============
*/

void __fastcall R_DecalVolumes_PackUVTransform(GfxStaticDecalVolumePacked *dst, const vec4_t *uvMatrix, const vec2_t *uvOffset)
{
  ?R_DecalVolumes_PackUVTransform@@YAXAEAUGfxStaticDecalVolumePacked@@AEBTvec4_t@@AEBTvec2_t@@@Z(dst, uvMatrix, uvOffset);
}

/*
==============
ImageAtlas_IsConstantColorImage
==============
*/

bool __fastcall ImageAtlas_IsConstantColorImage(const GfxImage *image)
{
  return ?ImageAtlas_IsConstantColorImage@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
R_DecalVolumes_CalculateUVTranform
==============
*/

void __fastcall R_DecalVolumes_CalculateUVTranform(const vec2_t *uvScale, const vec2_t *uvShift, float uvRotateDeg, const vec3_t *_size_min, const vec3_t *size_max, unsigned int textureWidth, unsigned int textureHeight, float texelsPerUnit, bool autoTiling, vec4_t *outUvMatrix, vec2_t *outUvOffset)
{
  ?R_DecalVolumes_CalculateUVTranform@@YAXAEBTvec2_t@@0MAEBTvec3_t@@1IIM_NAEATvec4_t@@AEAT1@@Z(uvScale, uvShift, uvRotateDeg, _size_min, size_max, textureWidth, textureHeight, texelsPerUnit, autoTiling, outUvMatrix, outUvOffset);
}

/*
==============
R_DecalVolume_RegisterMask
==============
*/

GfxDecalVolumeMask *__fastcall R_DecalVolume_RegisterMask(const char *imageName, ImageTrack imageTrack)
{
  return ?R_DecalVolume_RegisterMask@@YAPEAUGfxDecalVolumeMask@@PEBDW4ImageTrack@@@Z(imageName, imageTrack);
}

/*
==============
GetBoolFromString
==============
*/
bool GetBoolFromString(const char *str, bool *value)
{
  bool result; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.cpp", 1126, ASSERT_TYPE_ASSERT, "(str != 0)", (const char *)&queryFormat, "str != NULL") )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.cpp", 1127, ASSERT_TYPE_ASSERT, "(value != 0)", (const char *)&queryFormat, "value != NULL") )
    __debugbreak();
  if ( I_stricmp(str, "0") && I_stricmp(str, "false") && I_stricmp(str, "no") && I_stricmp(str, "f") && I_stricmp(str, "n") )
  {
    if ( I_stricmp(str, "1") && I_stricmp(str, "true") && I_stricmp(str, "yes") && I_stricmp(str, "t") && I_stricmp(str, "y") )
    {
      return 0;
    }
    else
    {
      *value = 1;
      return 1;
    }
  }
  else
  {
    result = 1;
    *value = 0;
  }
  return result;
}

/*
==============
ImageAtlas_IsConstantColorImage
==============
*/
bool ImageAtlas_IsConstantColorImage(const GfxImage *image)
{
  return image->width == 1 && image->height == 1 && (image->flags & 0x40) == 0 && (unsigned int)(image->format - 6) <= 1;
}

/*
==============
R_DecalVolume_FindExistingMask
==============
*/
GfxDecalVolumeMask *R_DecalVolume_FindExistingMask(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_DECAL_VOLUME_MASK, name, 0).decalVolumeMask;
}

/*
==============
R_DecalVolume_GetAtlasFormat
==============
*/
__int64 R_DecalVolume_GetAtlasFormat(unsigned int atlasIndex)
{
  __int64 v1; 

  v1 = atlasIndex;
  if ( atlasIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.cpp", 107, ASSERT_TYPE_ASSERT, "(atlasIndex < 4)", (const char *)&queryFormat, "atlasIndex < DECAL_VOLUMES_NUM_ATLASES") )
    __debugbreak();
  return (unsigned int)s_decalVolumes_atlasFormat[v1];
}

/*
==============
R_DecalVolume_IsValidImage
==============
*/
char R_DecalVolume_IsValidImage(const GfxImage *image, GfxPixelFormat expectedImageFormat, const char *materialName)
{
  GfxImageFlags flags; 
  __int64 v8; 
  __int32 v9; 
  __int32 v10; 
  __int32 v11; 
  const char *v12; 
  unsigned __int16 width; 
  unsigned __int16 height; 

  if ( image->numElements != 1 || (flags = image->flags, (flags & 0x38000) != 0) )
  {
    Core_PrintWarning_Unchecked("Image '%s' must be 2d and have one slice. Decal volume material '%s'\n", image->name, materialName);
    return 0;
  }
  else
  {
    if ( (unsigned int)(expectedImageFormat - 44) <= 1 && image->width == 1 && image->height == 1 && (flags & 0x40) == 0 && (unsigned int)(image->format - 6) <= 1 )
      return 1;
    if ( expectedImageFormat == image->format )
    {
      width = image->width;
      if ( width <= 0x800u )
      {
        height = image->height;
        if ( height <= 0x800u && width >= 4u && height >= 4u && ((width - 1) & width) == 0 && ((height - 1) & height) == 0 )
          return 1;
      }
      Core_PrintWarning_Unchecked("Image '%s' has incorrect size. Decal volume material '%s' --must be power-of-two and %dx%d max\n", image->name, materialName, 4096i64, 4096);
      return 0;
    }
    else
    {
      if ( (unsigned int)expectedImageFormat > GFX_PF_BC7_SRGB || (v8 = 0x308400000000i64, !_bittest64(&v8, (unsigned int)expectedImageFormat)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.cpp", 114, ASSERT_TYPE_ASSERT, "(imageFormat == GFX_PF_BC7 || imageFormat == GFX_PF_BC7_SRGB || imageFormat == GFX_PF_BC4 || imageFormat == GFX_PF_BC1_SRGB)", (const char *)&queryFormat, "imageFormat == GFX_PF_BC7 || imageFormat == GFX_PF_BC7_SRGB || imageFormat == GFX_PF_BC4 || imageFormat == GFX_PF_BC1_SRGB") )
          __debugbreak();
      }
      v9 = expectedImageFormat - 34;
      if ( v9 )
      {
        v10 = v9 - 5;
        if ( v10 )
        {
          v11 = v10 - 5;
          if ( v11 )
          {
            if ( v11 == 1 )
              v12 = "BC7_SRGB";
            else
              v12 = "UNKNOWN";
          }
          else
          {
            v12 = "BC7";
          }
        }
        else
        {
          v12 = "BC4";
        }
      }
      else
      {
        v12 = "BC1_SRGB";
      }
      Core_PrintWarning_Unchecked("Decal volume image '%s' has incorrect format. Expected '%s'. Material '%s'. Try mychanges and set 'blendMap' kvp in CWR\n", image->name, v12, materialName);
      return 0;
    }
  }
}

/*
==============
R_DecalVolume_RegisterMask
==============
*/
GfxDecalVolumeMask *R_DecalVolume_RegisterMask(const char *imageName, ImageTrack imageTrack)
{
  return DB_FindXAssetHeader(ASSET_TYPE_DECAL_VOLUME_MASK, imageName, 0).decalVolumeMask;
}

/*
==============
R_DecalVolumes_CalculateUVTranform
==============
*/

void __fastcall R_DecalVolumes_CalculateUVTranform(const vec2_t *uvScale, const vec2_t *uvShift, double uvRotateDeg, const vec3_t *_size_min, const vec3_t *size_max, unsigned int textureWidth, unsigned int textureHeight, float texelsPerUnit, bool autoTiling, vec4_t *outUvMatrix, vec2_t *outUvOffset)
{
  vec2_t v100; 
  float s; 
  float c; 
  __int128 v104; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmulss  xmm0, xmm2, cs:__real@3c8efa35; radians }
  _RSI = outUvMatrix;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBP = _size_min;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  _RBX = uvScale;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps [rsp+0F8h+var_A8], xmm14
    vmovaps [rsp+0F8h+var_B8], xmm15
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm14, [rsp+0F8h+s]
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm8, [rsp+0F8h+c]
    vxorps  xmm0, xmm14, xmm15
    vmovss  dword ptr [rsp+0F8h+var_D0], xmm0
  }
  if ( autoTiling )
  {
    _RAX = size_max;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbp+8]
      vmovaps [rsp+0F8h+var_68], xmm10
      vmovss  xmm8, dword ptr [rax+4]
      vmovss  xmm10, dword ptr [rax+8]
      vmovaps [rsp+0F8h+var_78], xmm11
      vmovaps [rsp+0F8h+var_88], xmm12
      vxorps  xmm12, xmm0, xmm15
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovaps [rsp+0F8h+var_98], xmm13
      vxorps  xmm13, xmm1, xmm15
      vmovss  xmm1, [rsp+0F8h+texelsPerUnit]
      vdivss  xmm6, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm7, xmm1, xmm0
      vmovss  xmm0, dword ptr [rbx]
      vmovss  [rsp+0F8h+s], xmm0
      vminss  xmm9, xmm8, xmm12
      vminss  xmm11, xmm10, xmm13
      vmulss  xmm1, xmm9, xmm6
      vmulss  xmm0, xmm1, xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vxorps  xmm2, xmm0, xmm15
      vsubss  xmm5, xmm2, cs:__real@3f000000
      vmovss  dword ptr [rsp+0F8h+var_D0], xmm1
      vmulss  xmm0, xmm11, xmm7
      vmulss  xmm1, xmm0, xmm1
      vxorps  xmm2, xmm1, xmm15
      vsubss  xmm4, xmm2, cs:__real@3f000000
      vmaxss  xmm0, xmm8, xmm12
      vmovss  xmm8, [rsp+0F8h+c]
      vmovaps xmm12, [rsp+0F8h+var_88]
      vsubss  xmm1, xmm0, xmm9
      vmaxss  xmm2, xmm10, xmm13
      vmovaps xmm13, [rsp+0F8h+var_98]
      vmovaps xmm10, [rsp+0F8h+var_68]
      vsubss  xmm0, xmm2, xmm11
      vmovaps xmm11, [rsp+0F8h+var_78]
      vmulss  xmm7, xmm0, xmm7
      vmulss  xmm6, xmm1, xmm6
      vmulss  xmm1, xmm5, xmm8
      vmulss  xmm3, xmm4, xmm14
      vaddss  xmm0, xmm3, xmm1
      vxorps  xmm3, xmm0, xmm15
      vxorps  xmm9, xmm14, xmm15
      vmulss  xmm2, xmm5, xmm9
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm2, dword ptr [rsp+0F8h+var_D0]
      vxorps  xmm5, xmm0, xmm15
      vmovss  xmm0, [rsp+0F8h+s]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  xmm9, dword ptr [rsp+0F8h+var_D0]
      vmovaps xmm7, xmm6
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm5, xmm5, xmm5
    }
  }
  __asm { vmovaps xmm15, [rsp+0F8h+var_B8] }
  _R11 = &v111;
  __asm
  {
    vmulss  xmm1, xmm6, xmm0
    vaddss  xmm6, xmm5, dword ptr [rdi+4]
    vmulss  xmm2, xmm7, xmm2
    vaddss  xmm7, xmm3, dword ptr [rdi]
    vmulss  xmm5, xmm1, xmm8
    vmulss  xmm0, xmm2, xmm14
    vmovaps xmm14, [rsp+0F8h+var_A8]
    vinsertps xmm5, xmm5, xmm0, 10h
    vmulss  xmm3, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm4, xmm2, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vinsertps xmm5, xmm5, xmm3, 20h ; ' '
    vinsertps xmm5, xmm5, xmm4, 30h ; '0'
    vmovups [rsp+0F8h+var_D0], xmm5
    vmovss  dword ptr [rsp+0F8h+var_D0], xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rsp+0F8h+var_D0+4], xmm6
  }
  v100 = (vec2_t)v104;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovups xmmword ptr [rsi], xmm5
  }
  *outUvOffset = v100;
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcp
==============
*/

float __fastcall R_DecalVolumes_CalculateZFeatherRcp(double zFeatherIn, double decalHalfDepth)
{
  char v8; 
  char v9; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm2, xmm1; max
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  zFeatherIn = I_fclamp(*(float *)&zFeatherIn, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vcomiss xmm0, xmm6 }
  if ( v8 | v9 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@c7c35000
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  else
  {
    __asm
    {
      vminss  xmm0, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcpNormalized
==============
*/

float __fastcall R_DecalVolumes_CalculateZFeatherRcpNormalized(double zFeatherIn01, double _XMM1_8)
{
  char v2; 
  char v3; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v2 | v3 )
  {
    __asm { vmovss  xmm0, cs:__real@c7c35000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@bf800000
      vdivss  xmm0, xmm1, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
R_DecalVolumes_PackMaterialInfo
==============
*/
void R_DecalVolumes_PackMaterialInfo(GfxStaticDecalVolumePacked *dst, unsigned int packedMaterialInfo)
{
  dst->packedMaterialInfo = packedMaterialInfo;
}

/*
==============
R_DecalVolumes_PackOBB
==============
*/
void R_DecalVolumes_PackOBB(GfxStaticDecalVolumePacked *dst, const GfxDecalVolumeObb *obb)
{
  PackedQuatDec3n *v3; 
  const GfxDecalVolumeObb *v4; 
  vec4_t out; 

  __asm
  {
    vmovsd  xmm0, qword ptr [rdx]
    vmovsd  qword ptr [rcx], xmm0
  }
  v3 = (PackedQuatDec3n *)dst;
  dst->obbCenter.v[2] = obb->center.v[2];
  v4 = obb;
  AxisToQuat(&obb->axes, &out);
  __asm { vmovss  xmm1, cs:__real@3f800000; binormalSign }
  v3[3].packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
  v3[4].packed = Vec3PackR11G11B10F(&v4->halfSize);
}

/*
==============
R_DecalVolumes_PackOpacityParams
==============
*/

void __fastcall R_DecalVolumes_PackOpacityParams(GfxStaticDecalVolumePacked *dst, const vec3_t *blendMapCurve, double zFeather)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@437f0000
    vmulss  xmm0, xmm6, dword ptr [rdx]; val
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcvttss2si rsi, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcvttss2si rdi, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+8]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcvttss2si rbx, xmm0
    vmulss  xmm0, xmm7, xmm6; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vcvttss2si rax, xmm0
  }
  dst->opacityParams = _RSI | (((unsigned int)_RDI | (((unsigned int)_RBX | ((_DWORD)_RAX << 8)) << 8)) << 8);
}

/*
==============
R_DecalVolumes_PackUVTransform
==============
*/
void R_DecalVolumes_PackUVTransform(GfxStaticDecalVolumePacked *dst, const vec4_t *uvMatrix, const vec2_t *uvOffset)
{
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, dword ptr [rdx], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  dst->uvMatrixAndOffset[0] = v16;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx+8], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+0Ch], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  dst->uvMatrixAndOffset[1] = v17;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [r8], 0
    vinsertps xmm0, xmm0, dword ptr [r8+4], 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+arg_0], xmm0
  }
  dst->uvMatrixAndOffset[2] = v18;
}

/*
==============
R_DecalVolumes_PrecalculateBlendMapAdjust
==============
*/

void __fastcall R_DecalVolumes_PrecalculateBlendMapAdjust(double edge0, double edge1, double scale, vec2_t *outOffsetScale)
{
  vec2_t v31; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm0
    vcomiss xmm7, xmm1
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm6, xmm2
    vmovaps xmm9, xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm7, xmm7, xmm7
    vmovaps xmm9, xmm8
    vmovaps xmm6, xmm8
  }
  Core_PrintWarning_Unchecked("Invalid volume decal operation: blendmapAdjustEdge1 must be greater than blendMapAdjustEdge0 and blendMapAdjustScale should be greater than zero\n");
  __asm
  {
    vsubss  xmm0, xmm9, xmm7
    vmovaps xmm9, [rsp+68h+var_48]
    vdivss  xmm2, xmm8, xmm0
    vmovaps xmm8, [rsp+68h+var_38]
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm1, xmm7, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rsp+68h+arg_18], xmm0
    vmulss  xmm2, xmm1, xmm2
    vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+68h+arg_18+4], xmm0
  }
  *outOffsetScale = v31;
}

/*
==============
R_DecalVolumes_UnpackOBB
==============
*/
void R_DecalVolumes_UnpackOBB(GfxDecalVolumeObb *obb, const GfxStaticDecalVolumePacked *packed)
{
  const GfxStaticDecalVolumePacked *v6; 
  unsigned int obbQuat; 
  unsigned int v9; 
  float v30; 
  float v32; 
  float v34; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+70h+var_10], xmm6
    vmovsd  xmm0, qword ptr [rdx]
    vmovss  xmm3, cs:__real@3f3504f3
    vmovsd  qword ptr [rcx], xmm0
  }
  _RBX = obb;
  obb->center.v[2] = packed->obbCenter.v[2];
  v6 = packed;
  obbQuat = packed->obbQuat;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v9 = obbQuat >> 30;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3ab53240
    vxorps  xmm0, xmm0, xmm0
    vsubss  xmm4, xmm1, xmm3
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3ab53240
    vsubss  xmm5, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vmulss  xmm2, xmm5, xmm5
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3b355fa3
    vsubss  xmm6, xmm1, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm2, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm3, xmm1
    vcomiss xmm0, xmm2
  }
  if ( ((obbQuat >> 10) & 0x3FF) != 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm0
      vsqrtss xmm0, xmm0, xmm0
    }
  }
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      __asm
      {
        vmovss  dword ptr [rbp+quat+4], xmm0
        vmovss  dword ptr [rbp+quat+8], xmm5
        vmovss  dword ptr [rbp+quat+0Ch], xmm6
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rbp+quat+4], xmm5 }
      if ( v9 == 2 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+quat+8], xmm0
          vmovss  dword ptr [rbp+quat+0Ch], xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+quat+8], xmm6
          vmovss  dword ptr [rbp+quat+0Ch], xmm0
        }
      }
    }
    __asm { vmovss  dword ptr [rbp+quat], xmm4 }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbp+quat], xmm0
      vmovss  dword ptr [rbp+quat+4], xmm4
      vmovss  dword ptr [rbp+quat+8], xmm5
      vmovss  dword ptr [rbp+quat+0Ch], xmm6
    }
  }
  QuatToAxis(&quat, &axis);
  __asm { vmovsd  xmm0, qword ptr [rbp+axis] }
  v30 = axis.m[0].v[2];
  __asm
  {
    vmovsd  qword ptr [rbx+0Ch], xmm0
    vmovsd  xmm0, qword ptr [rbp+axis+0Ch]
  }
  _RBX->axes.m[0].v[2] = v30;
  v32 = axis.m[1].v[2];
  __asm
  {
    vmovsd  qword ptr [rbx+18h], xmm0
    vmovsd  xmm0, qword ptr [rbp+axis+18h]
  }
  _RBX->axes.m[1].v[2] = v32;
  v34 = axis.m[2].v[2];
  __asm { vmovsd  qword ptr [rbx+24h], xmm0 }
  _RBX->axes.m[2].v[2] = v34;
  Vec3UnpackR11G11B10F(v6->obbHalfSize, &_RBX->halfSize);
  __asm { vmovaps xmm6, [rsp+70h+var_10] }
}

