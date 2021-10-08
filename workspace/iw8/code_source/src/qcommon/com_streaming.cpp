/*
==============
Com_Streaming_GetRequestSourceFromMask
==============
*/

AssetStreamingRequestSource __fastcall Com_Streaming_GetRequestSourceFromMask(const unsigned int sourceMask)
{
  return ?Com_Streaming_GetRequestSourceFromMask@@YA?AW4AssetStreamingRequestSource@@I@Z(sourceMask);
}

/*
==============
Com_Streaming_GetPriority
==============
*/

AssetStreamingPriority __fastcall Com_Streaming_GetPriority(const AssetStreamingRequestSource source, const unsigned int sourceOrder, const AssetStreamingRequestFlags flags)
{
  return ?Com_Streaming_GetPriority@@YA?ATAssetStreamingPriority@@W4AssetStreamingRequestSource@@IW4AssetStreamingRequestFlags@@@Z(source, sourceOrder, flags);
}

/*
==============
Com_Streaming_GetPriority
==============
*/
__int64 Com_Streaming_GetPriority(const AssetStreamingRequestSource source, const unsigned int sourceOrder, const AssetStreamingRequestFlags flags)
{
  char v5; 
  __int32 v6; 
  unsigned __int8 v7; 

  v5 = source;
  if ( (unsigned int)source >= ASSET_STREAMING_REQUEST_SOURCE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streaming.cpp", 19, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( ASSET_STREAMING_REQUEST_SOURCE_COUNT )", "source doesn't index ASSET_STREAMING_REQUEST_SOURCE_COUNT\n\t%i not in [0, %i)", source, 8) )
    __debugbreak();
  v6 = ((8 * flags) | v5 & 7) << 8;
  v7 = -1;
  if ( sourceOrder < 0xFF )
    v7 = sourceOrder;
  return (v6 | (unsigned int)v7) << 15;
}

/*
==============
Com_Streaming_GetRequestSourceFromMask
==============
*/
__int64 Com_Streaming_GetRequestSourceFromMask(const unsigned int sourceMask)
{
  unsigned int v1; 
  unsigned int v3; 
  int v4; 

  v1 = 32 - __lzcnt(sourceMask);
  if ( v1 >= 8 )
  {
    v4 = 8;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streaming.cpp", 34, ASSERT_TYPE_ASSERT, "(unsigned)( highestPriority ) < (unsigned)( ASSET_STREAMING_REQUEST_SOURCE_COUNT )", "highestPriority doesn't index ASSET_STREAMING_REQUEST_SOURCE_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return v1;
}

