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
void R_DecalVolumes_CalculateUVTranform(const vec2_t *uvScale, const vec2_t *uvShift, float uvRotateDeg, const vec3_t *_size_min, const vec3_t *size_max, unsigned int textureWidth, unsigned int textureHeight, float texelsPerUnit, bool autoTiling, vec4_t *outUvMatrix, vec2_t *outUvOffset)
{
  __int128 v11; 
  __int128 v12; 
  float v15; 
  float v16; 
  float v19; 
  float v20; 
  float v21; 
  float v24; 
  float v25; 
  __int128 v27; 
  __int128 v29; 
  float v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  vec2_t v39; 
  float s; 
  float c; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  FastSinCos(uvRotateDeg * 0.017453292, &s, &c);
  v15 = s;
  v16 = c;
  LODWORD(v42) = LODWORD(s) ^ _xmm;
  if ( autoTiling )
  {
    _XMM8 = LODWORD(size_max->v[1]);
    _XMM10 = LODWORD(size_max->v[2]);
    v44 = v11;
    v19 = (float)textureWidth;
    v43 = v12;
    v20 = texelsPerUnit / v19;
    v21 = (float)textureHeight;
    s = uvScale->v[0];
    __asm
    {
      vminss  xmm9, xmm8, xmm12
      vminss  xmm11, xmm10, xmm13
    }
    v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&_XMM9 * v20) * s) ^ _xmm) - 0.5;
    *(float *)&v42 = uvScale->v[1];
    v25 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&_XMM11 * (float)(texelsPerUnit / v21)) * *(float *)&v42) ^ _xmm) - 0.5;
    __asm { vmaxss  xmm0, xmm8, xmm12 }
    v16 = c;
    v27 = _XMM0;
    __asm { vmaxss  xmm2, xmm10, xmm13 }
    *(float *)&v27 = (float)(*(float *)&_XMM0 - *(float *)&_XMM9) * v20;
    v29 = v27;
    LODWORD(v30) = COERCE_UNSIGNED_INT((float)(v25 * v15) + (float)(v24 * c)) ^ _xmm;
    LODWORD(v31) = COERCE_UNSIGNED_INT((float)(v24 * COERCE_FLOAT(LODWORD(v15) ^ _xmm)) + (float)(v25 * c)) ^ _xmm;
    v32 = s;
  }
  else
  {
    v29 = LODWORD(FLOAT_1_0);
    v32 = uvScale->v[0];
    v30 = 0.0;
    v31 = 0.0;
  }
  v33 = v29;
  *(float *)&v33 = *(float *)&v29 * v32;
  v34 = v31 + uvShift->v[1];
  *(float *)&v33 = *(float *)&v33 * v16;
  _XMM5 = v33;
  __asm
  {
    vinsertps xmm5, xmm5, xmm0, 10h
    vinsertps xmm5, xmm5, xmm3, 20h ; ' '
    vinsertps xmm5, xmm5, xmm4, 30h ; '0'
  }
  *(float *)&v42 = v30 + uvShift->v[0];
  *((float *)&v42 + 1) = v34;
  v39 = (vec2_t)v42;
  *outUvMatrix = _XMM5;
  *outUvOffset = v39;
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcp
==============
*/

float __fastcall R_DecalVolumes_CalculateZFeatherRcp(float zFeatherIn, double decalHalfDepth)
{
  double v3; 
  float result; 

  _XMM7 = *(_OWORD *)&decalHalfDepth;
  v3 = I_fclamp(zFeatherIn, 0.0, *(float *)&decalHalfDepth);
  if ( *(float *)&v3 <= 0.0 )
    return FLOAT_N100000_0;
  __asm { vminss  xmm0, xmm7, xmm0 }
  LODWORD(result) = COERCE_UNSIGNED_INT(*(float *)&decalHalfDepth / *(float *)&_XMM0) ^ _xmm;
  return result;
}

/*
==============
R_DecalVolumes_CalculateZFeatherRcpNormalized
==============
*/
float R_DecalVolumes_CalculateZFeatherRcpNormalized(float zFeatherIn01)
{
  if ( zFeatherIn01 <= 0.0 )
    return FLOAT_N100000_0;
  else
    return -1.0 / zFeatherIn01;
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
  vec4_t out; 

  *(double *)dst->obbCenter.v = *(double *)obb->center.v;
  dst->obbCenter.v[2] = obb->center.v[2];
  AxisToQuat(&obb->axes, &out);
  dst->obbQuat = UnitQuatToQuatDec3n(&out, 1.0).packed;
  dst->obbHalfSize = Vec3PackR11G11B10F(&obb->halfSize);
}

/*
==============
R_DecalVolumes_PackOpacityParams
==============
*/
void R_DecalVolumes_PackOpacityParams(GfxStaticDecalVolumePacked *dst, const vec3_t *blendMapCurve, float zFeather)
{
  const vec3_t *v3; 
  double v5; 
  int v6; 
  double v7; 
  int v8; 
  double v9; 
  double v10; 

  v3 = blendMapCurve;
  v5 = I_fclamp(255.0 * blendMapCurve->v[0], 0.0, 255.0);
  v6 = (int)*(float *)&v5;
  v7 = I_fclamp(255.0 * v3->v[1], 0.0, 255.0);
  v8 = (int)*(float *)&v7;
  v9 = I_fclamp(255.0 * v3->v[2], 0.0, 255.0);
  LODWORD(v3) = (int)*(float *)&v9;
  v10 = I_fclamp(zFeather * 255.0, 0.0, 255.0);
  dst->opacityParams = v6 | ((v8 | (((unsigned int)v3 | ((int)*(float *)&v10 << 8)) << 8)) << 8);
}

/*
==============
R_DecalVolumes_PackUVTransform
==============
*/
void R_DecalVolumes_PackUVTransform(GfxStaticDecalVolumePacked *dst, const vec4_t *uvMatrix, const vec2_t *uvOffset)
{
  unsigned int v7; 
  unsigned int v12; 

  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+4], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v7 = _XMM0;
  _XMM0 = 0i64;
  dst->uvMatrixAndOffset[0] = v7;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdx+8], 0
    vinsertps xmm0, xmm0, dword ptr [rdx+0Ch], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v12 = _XMM0;
  _XMM0 = 0i64;
  dst->uvMatrixAndOffset[1] = v12;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [r8], 0
    vinsertps xmm0, xmm0, dword ptr [r8+4], 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  dst->uvMatrixAndOffset[2] = _XMM0;
}

/*
==============
R_DecalVolumes_PrecalculateBlendMapAdjust
==============
*/
void R_DecalVolumes_PrecalculateBlendMapAdjust(float edge0, float edge1, float scale, vec2_t *outOffsetScale)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec2_t v9; 

  v5 = edge0;
  v6 = scale;
  v7 = edge1;
  if ( edge0 >= edge1 || scale <= 0.0 )
  {
    v5 = 0.0;
    v7 = FLOAT_1_0;
    v6 = FLOAT_1_0;
    Core_PrintWarning_Unchecked("Invalid volume decal operation: blendmapAdjustEdge1 must be greater than blendMapAdjustEdge0 and blendMapAdjustScale should be greater than zero\n");
  }
  v8 = 1.0 / (float)(v7 - v5);
  v9.v[0] = v8 * v6;
  LODWORD(v9.v[1]) = COERCE_UNSIGNED_INT((float)(v5 * v6) * v8) ^ _xmm;
  *outOffsetScale = v9;
}

/*
==============
R_DecalVolumes_UnpackOBB
==============
*/
void R_DecalVolumes_UnpackOBB(GfxDecalVolumeObb *obb, const GfxStaticDecalVolumePacked *packed)
{
  unsigned int obbQuat; 
  unsigned int v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  *(double *)obb->center.v = *(double *)packed->obbCenter.v;
  obb->center.v[2] = packed->obbCenter.v[2];
  obbQuat = packed->obbQuat;
  v5 = obbQuat >> 30;
  v6 = (float)(obbQuat & 0x3FF);
  v7 = (float)(v6 * 0.001382418) - 0.70710677;
  v8 = (float)((obbQuat >> 10) & 0x3FF);
  v9 = (float)(v8 * 0.001382418) - 0.70710677;
  v10 = (float)((obbQuat >> 20) & 0x1FF);
  v11 = (float)((float)(v9 * v9) + (float)(v7 * v7)) + (float)((float)((float)(v10 * 0.0027675412) - 0.70710677) * (float)((float)(v10 * 0.0027675412) - 0.70710677));
  if ( v11 <= 1.0 )
    v12 = fsqrt(1.0 - v11);
  else
    v12 = 0.0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      quat.v[1] = v12;
      quat.v[2] = v9;
      quat.v[3] = (float)(v10 * 0.0027675412) - 0.70710677;
    }
    else
    {
      quat.v[1] = v9;
      if ( v5 == 2 )
      {
        quat.v[2] = v12;
        quat.v[3] = (float)(v10 * 0.0027675412) - 0.70710677;
      }
      else
      {
        quat.v[2] = (float)(v10 * 0.0027675412) - 0.70710677;
        quat.v[3] = v12;
      }
    }
    quat.v[0] = v7;
  }
  else
  {
    quat.v[0] = v12;
    quat.v[1] = v7;
    quat.v[2] = v9;
    quat.v[3] = (float)(v10 * 0.0027675412) - 0.70710677;
  }
  QuatToAxis(&quat, &axis);
  v13 = axis.m[0].v[2];
  *(double *)obb->axes.m[0].v = *(double *)axis.m[0].v;
  v14 = *(double *)axis.row1.v;
  obb->axes.m[0].v[2] = v13;
  v15 = axis.m[1].v[2];
  *(double *)obb->axes.row1.v = v14;
  v16 = *(double *)axis.row2.v;
  obb->axes.m[1].v[2] = v15;
  v17 = axis.m[2].v[2];
  *(double *)obb->axes.row2.v = v16;
  obb->axes.m[2].v[2] = v17;
  Vec3UnpackR11G11B10F(packed->obbHalfSize, &obb->halfSize);
}

