/*
==============
Stream_HintImageAtDistance
==============
*/

void __fastcall Stream_HintImageAtDistance(const GfxImage *const image, const StreamMiniDistance distance)
{
  ?Stream_HintImageAtDistance@@YAXQEBUGfxImage@@UStreamMiniDistance@@@Z(image, distance);
}

/*
==============
Stream_HintImageAtDistance
==============
*/
void Stream_HintImageAtDistance(const GfxImage *const image, const StreamMiniDistance distance)
{
  unsigned int GfxImageIndex; 
  unsigned __int64 v5; 
  StreamFrontendGlob *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( Sys_InCriticalSection(CRITSECT_STREAM_FRONTEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.cpp", 16, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_FRONTEND_UPDATE )") )
    __debugbreak();
  if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.cpp", 18, ASSERT_TYPE_ASSERT, "( ( streamFrontendGlob != nullptr ) )", "( streamFrontendGlob ) = %p", NULL) )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.cpp", 19, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.cpp", 20, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v5 = GfxImageIndex;
  if ( GfxImageIndex >= 0x14000 )
  {
    LODWORD(v7) = GfxImageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v7, 81920) )
      __debugbreak();
  }
  v6 = streamFrontendGlob;
  if ( (unsigned int)v5 >= 0x14000 )
  {
    LODWORD(v9) = 81920;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.h", 31, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "index doesn't index mDistances\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
    LODWORD(v10) = 81920;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_hint.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mValueSet.BIT_COUNT )", "index doesn't index mValueSet.BIT_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( distance.mValue < v6->imageDistanceHint.mDistances[v5].mValue )
    v6->imageDistanceHint.mDistances[v5] = distance;
  if ( (unsigned int)v5 >= 0x14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, 81920) )
    __debugbreak();
  v6->imageDistanceHint.mValueSet.array[v5 >> 5] |= 0x80000000 >> (v5 & 0x1F);
}

