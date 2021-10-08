/*
==============
R_DecalVolumes_GetPriority
==============
*/

DecalVolumePriority __fastcall R_DecalVolumes_GetPriority(const GfxImage *image)
{
  return ?R_DecalVolumes_GetPriority@@YA?AW4DecalVolumePriority@@PEBUGfxImage@@@Z(image);
}

/*
==============
R_DecalVolumes_ImageLog2
==============
*/

unsigned __int8 __fastcall R_DecalVolumes_ImageLog2(unsigned __int16 width, unsigned __int16 height)
{
  return ?R_DecalVolumes_ImageLog2@@YAEGG@Z(width, height);
}

/*
==============
R_DecalVolumes_GetPriority
==============
*/
__int64 R_DecalVolumes_GetPriority(const GfxImage *image)
{
  unsigned __int8 v1; 
  int v3; 

  v1 = image->decalAtlasIndex >> 5;
  if ( v1 > 3u )
  {
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 193, ASSERT_TYPE_ASSERT, "(priority >= 0 && priority <= 3)", "%s\n\tPriority out of range %s %u\n", "priority >= DECAL_VOLUME_PRIORITY_FRIST && priority <= DECAL_VOLUME_PRIORITY_LAST", image->name, v3) )
      __debugbreak();
  }
  return v1;
}

/*
==============
R_DecalVolumes_ImageLog2
==============
*/
__int64 R_DecalVolumes_ImageLog2(unsigned __int16 width, unsigned __int16 height)
{
  unsigned int v2; 
  unsigned __int8 v3; 

  if ( width > height )
    height = width;
  v2 = height;
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v3 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(v2));
  if ( v3 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
    __debugbreak();
  return v3;
}

