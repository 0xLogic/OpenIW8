/*
==============
Postload_GfxDecalVolumeObb
==============
*/

void __fastcall Postload_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  ?Postload_GfxDecalVolumeObb@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_GfxDecalVolumeObbArray
==============
*/

void __fastcall Load_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_GfxDecalVolumeObbArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Postload_GfxDecalVolumeObbArray
==============
*/

void __fastcall Postload_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_GfxDecalVolumeObbArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Preload_GfxDecalVolumeObbStream
==============
*/

void __fastcall Preload_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_GfxDecalVolumeObbStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPostload_GfxDecalVolumeObb
==============
*/

GfxDecalVolumeObb *__fastcall AllocPostload_GfxDecalVolumeObb()
{
  return ?AllocPostload_GfxDecalVolumeObb@@YAPEAUGfxDecalVolumeObb@@XZ();
}

/*
==============
AllocLoad_GfxDecalVolumeObb
==============
*/

GfxDecalVolumeObb *__fastcall AllocLoad_GfxDecalVolumeObb()
{
  return ?AllocLoad_GfxDecalVolumeObb@@YAPEAUGfxDecalVolumeObb@@XZ();
}

/*
==============
Postload_GfxDecalVolumeObbStream
==============
*/

void __fastcall Postload_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Postload_GfxDecalVolumeObbStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
AllocPreload_GfxDecalVolumeObb
==============
*/

GfxDecalVolumeObb *__fastcall AllocPreload_GfxDecalVolumeObb()
{
  return ?AllocPreload_GfxDecalVolumeObb@@YAPEAUGfxDecalVolumeObb@@XZ();
}

/*
==============
Load_GfxDecalVolumeObbStream
==============
*/

void __fastcall Load_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Load_GfxDecalVolumeObbStream@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Mark_GfxDecalVolumeObbArray
==============
*/

int __fastcall Mark_GfxDecalVolumeObbArray(const unsigned __int64 count)
{
  return ?Mark_GfxDecalVolumeObbArray@@YAH_K@Z(count);
}

/*
==============
Preload_GfxDecalVolumeObb
==============
*/

void __fastcall Preload_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  ?Preload_GfxDecalVolumeObb@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Preload_GfxDecalVolumeObbArray
==============
*/

void __fastcall Preload_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  ?Preload_GfxDecalVolumeObbArray@@YAXW4DBStreamStart@@_K@Z(streamStart, count);
}

/*
==============
Mark_GfxDecalVolumeObb
==============
*/

int __fastcall Mark_GfxDecalVolumeObb()
{
  return ?Mark_GfxDecalVolumeObb@@YAHXZ();
}

/*
==============
Load_GfxDecalVolumeObb
==============
*/

void __fastcall Load_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  ?Load_GfxDecalVolumeObb@@YAXW4DBStreamStart@@@Z(streamStart);
}

/*
==============
Load_ProcessStructLayout_GfxDecalVolumeObb
==============
*/

void Load_ProcessStructLayout_GfxDecalVolumeObb(void)
{
  ?Load_ProcessStructLayout_GfxDecalVolumeObb@@YAXXZ();
}

/*
==============
AllocLoad_GfxDecalVolumeObb
==============
*/
GfxDecalVolumeObb *AllocLoad_GfxDecalVolumeObb()
{
  DB_PatchMem_FixStreamAlignment(3ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (GfxDecalVolumeObb *)g_streamPosGlob.pos;
}

/*
==============
AllocPostload_GfxDecalVolumeObb
==============
*/
GfxDecalVolumeObb *AllocPostload_GfxDecalVolumeObb()
{
  DB_PatchMem_FixStreamAlignment(3ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (GfxDecalVolumeObb *)g_streamPosGlob.pos;
}

/*
==============
AllocPreload_GfxDecalVolumeObb
==============
*/
GfxDecalVolumeObb *AllocPreload_GfxDecalVolumeObb()
{
  DB_PatchMem_FixStreamAlignment(3ui64);
  DB_CheckCanIncStreamPos(0i64);
  return (GfxDecalVolumeObb *)g_streamPosGlob.pos;
}

/*
==============
Load_GfxDecalVolumeObb
==============
*/
void Load_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  Load_Stream(streamStart, varGfxDecalVolumeObb, 0x3Cui64);
}

/*
==============
Load_GfxDecalVolumeObbArray
==============
*/
void Load_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  Load_Stream(streamStart, varGfxDecalVolumeObb, 60 * count);
}

/*
==============
Load_GfxDecalVolumeObbStream
==============
*/
void Load_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_decal_volume_db.h", 216, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varGfxDecalVolumeObb;
    do
    {
      Load_Stream(AtStart, pos, 0x3Cui64);
      pos = g_streamPosGlob.pos;
      varGfxDecalVolumeObb = (GfxDecalVolumeObb *)g_streamPosGlob.pos;
      --count;
    }
    while ( count );
  }
}

/*
==============
Load_ProcessStructLayout_GfxDecalVolumeObb
==============
*/
void Load_ProcessStructLayout_GfxDecalVolumeObb(void)
{
  if ( Load_RegisterStructSize("GfxDecalVolumeObb", 0xC4ADC791, 0x3Cui64, 4ui64) )
  {
    Load_RegisterStructMemberSize("GfxDecalVolumeObb", 0xC4ADC791, "vec3_t", 0x375A0610u, "center", 0x44C1CCA3u, 0i64, 0xCui64, 0i64, 0, 0);
    Load_ProcessStructLayout_vec3_t();
    Load_RegisterStructMemberSize("GfxDecalVolumeObb", 0xC4ADC791, "mat33_t", 0xDFC779C9, "axes", 0xC8A6056F, 0xCui64, 0x24ui64, 0i64, 0, 0);
    Load_ProcessStructLayout_mat33_t();
    Load_RegisterStructMemberSize("GfxDecalVolumeObb", 0xC4ADC791, "vec3_t", 0x375A0610u, "halfSize", 0x2AA6BB88u, 0x30ui64, 0xCui64, 0i64, 0, 0);
    Load_ProcessStructLayout_vec3_t();
  }
}

/*
==============
Mark_GfxDecalVolumeObb
==============
*/
__int64 Mark_GfxDecalVolumeObb()
{
  return 1i64;
}

/*
==============
Mark_GfxDecalVolumeObbArray
==============
*/
__int64 Mark_GfxDecalVolumeObbArray(const unsigned __int64 count)
{
  return 1i64;
}

/*
==============
Postload_GfxDecalVolumeObb
==============
*/
void Postload_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  if ( streamStart != (varGfxDecalVolumeObb != (GfxDecalVolumeObb *)g_streamPosGlob.pos) )
    DB_PatchMem_ValidatePostloadStream(streamStart, varGfxDecalVolumeObb, 0x3Cui64);
  if ( streamStart != NotAtStart )
    DB_IncStreamPos(0x3Cui64);
}

/*
==============
Postload_GfxDecalVolumeObbArray
==============
*/
void Postload_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  Postload_Stream_6(streamStart, varGfxDecalVolumeObb, 60 * count);
}

/*
==============
Postload_GfxDecalVolumeObbStream
==============
*/
void Postload_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  GfxDecalVolumeObb *v3; 
  unsigned __int8 *pos; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_decal_volume_db.h", 339, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    v3 = varGfxDecalVolumeObb;
    pos = g_streamPosGlob.pos;
    do
    {
      if ( v3 != (GfxDecalVolumeObb *)pos )
      {
        DB_PatchMem_ValidatePostloadStream(AtStart, v3, 0x3Cui64);
        pos = g_streamPosGlob.pos;
      }
      if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stream.h", 181, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.pos)", (const char *)&queryFormat, "g_streamPosGlob.pos") )
        __debugbreak();
      DB_CheckCanIncStreamPos(0x3Cui64);
      pos = g_streamPosGlob.pos + 60;
      g_streamPosGlob.pos = pos;
      v3 = (GfxDecalVolumeObb *)pos;
      varGfxDecalVolumeObb = (GfxDecalVolumeObb *)pos;
      --count;
    }
    while ( count );
  }
}

/*
==============
Preload_GfxDecalVolumeObb
==============
*/
void Preload_GfxDecalVolumeObb(const DBStreamStart streamStart)
{
  Load_Stream(streamStart, varGfxDecalVolumeObb, 0x3Cui64);
}

/*
==============
Preload_GfxDecalVolumeObbArray
==============
*/
void Preload_GfxDecalVolumeObbArray(const DBStreamStart streamStart, const unsigned __int64 count)
{
  Load_Stream(streamStart, varGfxDecalVolumeObb, 60 * count);
}

/*
==============
Preload_GfxDecalVolumeObbStream
==============
*/
void Preload_GfxDecalVolumeObbStream(const DBStreamStart streamStart, const unsigned __int64 count)
{
  unsigned __int8 *pos; 

  if ( streamStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\db_generated\\load\\impl\\archive_impl_r_decal_volume_db.h", 461, ASSERT_TYPE_ASSERT, "(streamStart == DBStreamStart::AtStart)", (const char *)&queryFormat, "streamStart == DBStreamStart::AtStart") )
    __debugbreak();
  if ( count )
  {
    pos = (unsigned __int8 *)varGfxDecalVolumeObb;
    do
    {
      Load_Stream(AtStart, pos, 0x3Cui64);
      pos = g_streamPosGlob.pos;
      varGfxDecalVolumeObb = (GfxDecalVolumeObb *)g_streamPosGlob.pos;
      --count;
    }
    while ( count );
  }
}

