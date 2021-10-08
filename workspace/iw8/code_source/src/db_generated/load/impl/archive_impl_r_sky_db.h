/*
==============
Load_sunflare_t
==============
*/

void __fastcall Load_sunflare_t(const DBStreamStart streamStart)
{
  ?Load_sunflare_t@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Mark_sunflare_tArray
==============
*/

int __fastcall Mark_sunflare_tArray(const unsigned __int64 count)
{
  return ?Mark_sunflare_tArray@@YAH_K@Z(count);
}

/*
==============
Mark_sunflare_t
==============
*/

int __fastcall Mark_sunflare_t()
{
  return ?Mark_sunflare_t@@YAHXZ();
}

/*
==============
Load_sunflare_tArray
==============
*/

void __fastcall Load_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_sunflare_tArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Preload_sunflare_tStream
==============
*/

void __fastcall Preload_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_sunflare_tStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocLoad_sunflare_t
==============
*/

sunflare_t *__fastcall AllocLoad_sunflare_t()
{
  return ?AllocLoad_sunflare_t@@YAPEAUsunflare_t@@XZ();
}

/*
==============
Postload_sunflare_tStream
==============
*/

void __fastcall Postload_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_sunflare_tStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Preload_sunflare_t
==============
*/

void __fastcall Preload_sunflare_t(const DBStreamStart streamStart)
{
  ?Preload_sunflare_t@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_sunflare_tStream
==============
*/

void __fastcall Load_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_sunflare_tStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Preload_sunflare_tArray
==============
*/

void __fastcall Preload_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_sunflare_tArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPreload_sunflare_t
==============
*/

sunflare_t *__fastcall AllocPreload_sunflare_t()
{
  return ?AllocPreload_sunflare_t@@YAPEAUsunflare_t@@XZ();
}

/*
==============
Load_ProcessStructLayout_sunflare_t
==============
*/

void Load_ProcessStructLayout_sunflare_t(void)
{
  ?Load_ProcessStructLayout_sunflare_t@@YAXXZ();
}

/*
==============
Postload_sunflare_t
==============
*/

void __fastcall Postload_sunflare_t(const DBStreamStart streamStart)
{
  ?Postload_sunflare_t@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Postload_sunflare_tArray
==============
*/

void __fastcall Postload_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_sunflare_tArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPostload_sunflare_t
==============
*/

sunflare_t *__fastcall AllocPostload_sunflare_t()
{
  return ?AllocPostload_sunflare_t@@YAPEAUsunflare_t@@XZ();
}

/*
==============
AllocLoad_sunflare_t
==============
*/
sunflare_t *AllocLoad_sunflare_t()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (sunflare_t *)g_streamPosGlob.pos;
}

/*
==============
AllocPostload_sunflare_t
==============
*/
sunflare_t *AllocPostload_sunflare_t()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (sunflare_t *)g_streamPosGlob.pos;
}

/*
==============
AllocPreload_sunflare_t
==============
*/
sunflare_t *AllocPreload_sunflare_t()
{
  DB_PatchMem_FixStreamAlignment(7ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (sunflare_t *)g_streamPosGlob.pos;
}

/*
==============
Load_ProcessStructLayout_sunflare_t
==============
*/
void Load_ProcessStructLayout_sunflare_t(void)
{
  if ( Load_RegisterStructSize("sunflare_t", 0x53550B87u, 0x70ui64, 8ui64) )
  {
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "bool", 0x1F095080u, "hasValidData", 0x82D1B17E, 0i64, 1ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_bool();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "MaterialHandle", 0x2FCF718Du, "spriteMaterial", 0x343F960Cu, 8ui64, 8ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_MaterialHandle();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "MaterialHandle", 0x2FCF718Du, "flareMaterial", 0xC23AFC1F, 0x10ui64, 8ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_MaterialHandle();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "spriteSize", 0xA9B49488, 0x18ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "flareMinSize", 0x841EC313, 0x1Cui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "flareMinDot", 0xBA9D07F5, 0x20ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "flareMaxSize", 0x15DE60F9u, 0x24ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "flareMaxDot", 0x5C919A43u, 0x28ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "flareMaxAlpha", 0x1DC9FB6Eu, 0x2Cui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "flareFadeInTime", 0xFB3E7D44, 0x30ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "flareFadeOutTime", 0xE4D060F5, 0x34ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "blindMinDot", 0x234069CCu, 0x38ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "blindMaxDot", 0x6681A0C6u, 0x3Cui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "blindMaxDarken", 0x7FFE9490u, 0x40ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "blindFadeInTime", 0xBEB3F871, 0x44ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "blindFadeOutTime", 0x4A513F26u, 0x48ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "glareMinDot", 0x406D5E40u, 0x4Cui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "glareMaxDot", 0xC8E073D2, 0x50ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "float", 0x9B987AFE, "glareMaxLighten", 0xB81E5DAE, 0x54ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_float();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "glareFadeInTime", 0x54131455u, 0x58ui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "int", 0x7103F94Bu, "glareFadeOutTime", 0x2EF4B262u, 0x5Cui64, 4ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_int();
    Load_RegisterStructMemberSize("sunflare_t", 0x53550B87u, "vec3_t", 0x375A0610u, "sunFxPosition", 0x334F1AF1u, 0x60ui64, 0xCui64, 0i64, 0, 0);
    Load_ProcessStructLayout_vec3_t();
  }
}

/*
==============
Load_sunflare_t
==============
*/
void Load_sunflare_t(const DBStreamStart streamStart)
{
  Material **v1; 

  Load_Stream(streamStart, varsunflare_t, 0x70ui64);
  v1 = varMaterialHandle;
  varMaterialHandle = &varsunflare_t->spriteMaterial;
  Load_MaterialHandle(NotAtStart);
  varMaterialHandle = &varsunflare_t->flareMaterial;
  Load_MaterialHandle(NotAtStart);
  varMaterialHandle = v1;
}

/*
==============
Load_sunflare_tArray
==============
*/
void Load_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  sunflare_t *i; 
  Material **v4; 

  v2 = count;
  Load_Stream(streamStart, varsunflare_t, 112 * count);
  for ( i = varsunflare_t; v2; --v2 )
  {
    varsunflare_t = i;
    Load_Stream(NotAtStart, i, 0x70ui64);
    v4 = varMaterialHandle;
    varMaterialHandle = &varsunflare_t->spriteMaterial;
    Load_MaterialHandle(NotAtStart);
    varMaterialHandle = &varsunflare_t->flareMaterial;
    Load_MaterialHandle(NotAtStart);
    ++i;
    varMaterialHandle = v4;
  }
}

/*
==============
Load_sunflare_tStream
==============
*/
void Load_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  sunflare_t *pos; 
  Material **v4; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_sky_db.h", 853, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = varsunflare_t;
    do
    {
      Load_Stream(AtStart, pos, 0x70ui64);
      v4 = varMaterialHandle;
      varMaterialHandle = &varsunflare_t->spriteMaterial;
      Load_MaterialHandle(NotAtStart);
      varMaterialHandle = &varsunflare_t->flareMaterial;
      Load_MaterialHandle(NotAtStart);
      pos = (sunflare_t *)g_streamPosGlob.pos;
      varsunflare_t = (sunflare_t *)g_streamPosGlob.pos;
      varMaterialHandle = v4;
      --count;
    }
    while ( count );
  }
}

/*
==============
Mark_sunflare_t
==============
*/
int Mark_sunflare_t()
{
  Material **v0; 
  int result; 
  int v2; 

  v0 = marMaterialHandle;
  marMaterialHandle = &marsunflare_t->spriteMaterial;
  result = Mark_MaterialHandle();
  if ( result )
  {
    marMaterialHandle = &marsunflare_t->flareMaterial;
    v2 = Mark_MaterialHandle();
    marMaterialHandle = v0;
    return v2 != 0;
  }
  else
  {
    marMaterialHandle = v0;
  }
  return result;
}

/*
==============
Mark_sunflare_tArray
==============
*/
__int64 Mark_sunflare_tArray(const unsigned __int64 count)
{
  sunflare_t *v1; 
  __int64 v2; 
  Material **v4; 

  v1 = marsunflare_t;
  v2 = 0i64;
  if ( !count )
    return 1i64;
  v4 = marMaterialHandle;
  while ( 1 )
  {
    marsunflare_t = v1;
    marMaterialHandle = &v1->spriteMaterial;
    if ( !Mark_MaterialHandle() )
      break;
    marMaterialHandle = &marsunflare_t->flareMaterial;
    if ( !Mark_MaterialHandle() )
      break;
    ++v1;
    marMaterialHandle = v4;
    if ( ++v2 >= count )
      return 1i64;
  }
  marMaterialHandle = v4;
  return 0i64;
}

/*
==============
Postload_sunflare_t
==============
*/
void Postload_sunflare_t(const DBStreamStart streamStart)
{
  Material **v2; 

  if ( streamStart != (varsunflare_t != (sunflare_t *)g_streamPosGlob.pos) )
    DB_PatchMem_ValidatePostloadStream(streamStart, varsunflare_t, 0x70ui64);
  if ( streamStart != NotAtStart )
    DB_IncStreamPos(0x70ui64);
  v2 = varMaterialHandle;
  varMaterialHandle = &varsunflare_t->spriteMaterial;
  Postload_MaterialHandle(NotAtStart);
  varMaterialHandle = &varsunflare_t->flareMaterial;
  Postload_MaterialHandle(NotAtStart);
  varMaterialHandle = v2;
}

/*
==============
Postload_sunflare_tArray
==============
*/
void Postload_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  sunflare_t *i; 
  sunflare_t *v4; 
  Material **v5; 

  v2 = count;
  Postload_Stream_14(streamStart, varsunflare_t, 112 * count);
  for ( i = varsunflare_t; v2; --v2 )
  {
    v4 = i;
    varsunflare_t = i;
    if ( i == (sunflare_t *)g_streamPosGlob.pos )
    {
      DB_PatchMem_ValidatePostloadStream(NotAtStart, i, 0x70ui64);
      v4 = varsunflare_t;
    }
    v5 = varMaterialHandle;
    varMaterialHandle = &v4->spriteMaterial;
    Postload_MaterialHandle(NotAtStart);
    varMaterialHandle = &varsunflare_t->flareMaterial;
    Postload_MaterialHandle(NotAtStart);
    ++i;
    varMaterialHandle = v5;
  }
}

/*
==============
Postload_sunflare_tStream
==============
*/
void Postload_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  sunflare_t *v3; 
  unsigned __int8 *pos; 
  Material **v5; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_sky_db.h", 1413, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    v3 = varsunflare_t;
    pos = g_streamPosGlob.pos;
    do
    {
      if ( v3 != (sunflare_t *)pos )
      {
        DB_PatchMem_ValidatePostloadStream(AtStart, v3, 0x70ui64);
        pos = g_streamPosGlob.pos;
      }
      if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
        __debugbreak();
      DB_CheckCanIncStreamPos(0x70ui64);
      v5 = varMaterialHandle;
      g_streamPosGlob.pos += 112;
      varMaterialHandle = &varsunflare_t->spriteMaterial;
      Postload_MaterialHandle(NotAtStart);
      varMaterialHandle = &varsunflare_t->flareMaterial;
      Postload_MaterialHandle(NotAtStart);
      pos = g_streamPosGlob.pos;
      varsunflare_t = (sunflare_t *)g_streamPosGlob.pos;
      v3 = (sunflare_t *)g_streamPosGlob.pos;
      varMaterialHandle = v5;
      --count;
    }
    while ( count );
  }
}

/*
==============
Preload_sunflare_t
==============
*/
void Preload_sunflare_t(const DBStreamStart streamStart)
{
  Material **v1; 

  Load_Stream(streamStart, varsunflare_t, 0x70ui64);
  v1 = varMaterialHandle;
  varMaterialHandle = &varsunflare_t->spriteMaterial;
  Preload_MaterialHandle(NotAtStart);
  varMaterialHandle = &varsunflare_t->flareMaterial;
  Preload_MaterialHandle(NotAtStart);
  varMaterialHandle = v1;
}

/*
==============
Preload_sunflare_tArray
==============
*/
void Preload_sunflare_tArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int64 v2; 
  sunflare_t *i; 
  Material **v4; 

  v2 = count;
  Load_Stream(streamStart, varsunflare_t, 112 * count);
  for ( i = varsunflare_t; v2; --v2 )
  {
    varsunflare_t = i;
    Load_Stream(NotAtStart, i, 0x70ui64);
    v4 = varMaterialHandle;
    varMaterialHandle = &varsunflare_t->spriteMaterial;
    Preload_MaterialHandle(NotAtStart);
    varMaterialHandle = &varsunflare_t->flareMaterial;
    Preload_MaterialHandle(NotAtStart);
    ++i;
    varMaterialHandle = v4;
  }
}

/*
==============
Preload_sunflare_tStream
==============
*/
void Preload_sunflare_tStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  sunflare_t *pos; 
  Material **v4; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_sky_db.h", 1972, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = varsunflare_t;
    do
    {
      Load_Stream(AtStart, pos, 0x70ui64);
      v4 = varMaterialHandle;
      varMaterialHandle = &varsunflare_t->spriteMaterial;
      Preload_MaterialHandle(NotAtStart);
      varMaterialHandle = &varsunflare_t->flareMaterial;
      Preload_MaterialHandle(NotAtStart);
      pos = (sunflare_t *)g_streamPosGlob.pos;
      varsunflare_t = (sunflare_t *)g_streamPosGlob.pos;
      varMaterialHandle = v4;
      --count;
    }
    while ( count );
  }
}

