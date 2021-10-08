/*
==============
DB_StreamingInfo_GetCostItemIndex
==============
*/

unsigned int __fastcall DB_StreamingInfo_GetCostItemIndex(const TransientCosts *costs, const StreamingContentSet *contentSet, const StreamingItemContents *contents)
{
  return ?DB_StreamingInfo_GetCostItemIndex@@YAIPEBUTransientCosts@@PEBUStreamingContentSet@@PEBUStreamingItemContents@@@Z(costs, contentSet, contents);
}

/*
==============
DB_StreamingInfo_Create
==============
*/

void __fastcall DB_StreamingInfo_Create(StreamingInfo *outStreamingInfo)
{
  ?DB_StreamingInfo_Create@@YAXAEAUStreamingInfo@@@Z(outStreamingInfo);
}

/*
==============
DB_StreamingInfo_Move
==============
*/

void __fastcall DB_StreamingInfo_Move(StreamingInfo *from, StreamingInfo *to)
{
  ?DB_StreamingInfo_Move@@YAXAEAUStreamingInfo@@0@Z(from, to);
}

/*
==============
DB_StreamingInfo_GetLastGoodAlwaysloadedTotals
==============
*/

void __fastcall DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(AlwaysloadedTotals *outTotals)
{
  ?DB_StreamingInfo_GetLastGoodAlwaysloadedTotals@@YAXAEAUAlwaysloadedTotals@@@Z(outTotals);
}

/*
==============
DB_StreamingInfo_Register
==============
*/

void __fastcall DB_StreamingInfo_Register(const StreamingInfo *streamingInfo, DBTransientsRegisterStage registerStage)
{
  ?DB_StreamingInfo_Register@@YAXAEBUStreamingInfo@@W4DBTransientsRegisterStage@@@Z(streamingInfo, registerStage);
}

/*
==============
DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion
==============
*/

void DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion(void)
{
  ?DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion@@YAXXZ();
}

/*
==============
DB_StreamingInfo_Release
==============
*/

void __fastcall DB_StreamingInfo_Release(StreamingInfo *outStreamingInfo)
{
  ?DB_StreamingInfo_Release@@YAXAEAUStreamingInfo@@@Z(outStreamingInfo);
}

/*
==============
DB_StreamingInfo_Copy
==============
*/

void __fastcall DB_StreamingInfo_Copy(const StreamingInfo *from, StreamingInfo *to, const char *toNewAssetName)
{
  ?DB_StreamingInfo_Copy@@YAXAEBUStreamingInfo@@AEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
DB_StreamingInfo_CalcUIntsForImageFlags
==============
*/

unsigned int __fastcall DB_StreamingInfo_CalcUIntsForImageFlags(const unsigned int count)
{
  return ?DB_StreamingInfo_CalcUIntsForImageFlags@@YAII@Z(count);
}

/*
==============
DB_StreamingInfo_ForEachAlwaysloaded
==============
*/

bool __fastcall DB_StreamingInfo_ForEachAlwaysloaded(bool (__fastcall *callback)(const StreamingInfo *, AlwaysloadedTotalsGather *))
{
  return ?DB_StreamingInfo_ForEachAlwaysloaded@@YA_NP6A_NAEBUStreamingInfo@@AEAUAlwaysloadedTotalsGather@@@Z@Z(callback);
}

/*
==============
DB_ProcessStreamingInfoAtIndex
==============
*/
bool DB_ProcessStreamingInfoAtIndex(const unsigned int index, const StreamingInfo *const pool, AlwaysloadedTotals *totals, bool (*callback)(const StreamingInfo *, AlwaysloadedTotalsGather *))
{
  __int64 v4; 
  const StreamingInfo *v8; 
  unsigned __int16 v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  unsigned int ZoneFlagsFromIndex; 
  __int64 v14; 
  bool result; 
  __int64 v16; 
  __int64 v17; 
  int ZoneIndexFromName; 
  __int64 v19[2]; 

  v4 = index;
  if ( !pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 283, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 284, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x940 )
  {
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( STREAMING_INFO_POOL_SIZE )", "index doesn't index STREAMING_INFO_POOL_SIZE\n\t%i not in [0, %i)", v16, 2368) )
      __debugbreak();
  }
  v8 = &pool[v4];
  if ( (unsigned int)v4 >= 0x940 )
  {
    LODWORD(v17) = 2368;
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_streamingInfoZoneIndices ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_streamingInfoZoneIndices )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v9 = s_streamingInfoZoneIndices[v4];
  if ( v9 == 0xFFFF )
  {
    v10 = "zoneIndex != INVALID_ZONE_INDEX";
    v11 = 291;
    v12 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    if ( v9 )
      goto LABEL_19;
    v10 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v11 = 292;
    v12 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", v11, ASSERT_TYPE_ASSERT, v12, (const char *)&queryFormat, v10) )
    __debugbreak();
LABEL_19:
  if ( DB_Zones_GetZoneIndexFromName(v8->name) != v9 )
  {
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(v8->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 293, ASSERT_TYPE_ASSERT, "( DB_Zones_GetZoneIndexFromName( stmInfo.name ) ) == ( zoneIndex )", "%s == %s\n\t%u, %u", "DB_Zones_GetZoneIndexFromName( stmInfo.name )", "zoneIndex", ZoneIndexFromName, v9) )
      __debugbreak();
  }
  if ( !DB_ShouldProcessAlwaysloadedFlags(v9) )
    return 1;
  ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v9);
  if ( !ZoneFlagsFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 300, ASSERT_TYPE_ASSERT, "(zoneFlags)", (const char *)&queryFormat, "zoneFlags") )
    __debugbreak();
  if ( ((ZoneFlagsFromIndex - 1) & ZoneFlagsFromIndex) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 301, ASSERT_TYPE_ASSERT, "(IsPowerOf2( zoneFlags ))", (const char *)&queryFormat, "IsPowerOf2( zoneFlags )") )
    __debugbreak();
  v14 = 31 - __lzcnt(ZoneFlagsFromIndex);
  if ( (unsigned int)v14 >= 0x20 )
  {
    LODWORD(v17) = 32;
    LODWORD(v16) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( zoneFlagIndex ) < (unsigned)( ( sizeof( *array_counter( totals.flagTotals ) ) + 0 ) )", "zoneFlagIndex doesn't index ARRAY_COUNT( totals.flagTotals )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v19[0] = (__int64)&totals->flagTotals[v14];
  if ( v9 >= 0x7A4u )
  {
    LODWORD(v17) = 1956;
    LODWORD(v16) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( ( sizeof( *array_counter( totals.zoneTotals ) ) + 0 ) )", "zoneIndex doesn't index ARRAY_COUNT( totals.zoneTotals )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v19[1] = (__int64)&totals->zoneTotals[v9];
  result = callback(v8, (AlwaysloadedTotalsGather *)v19);
  if ( result )
    return 1;
  return result;
}

/*
==============
DB_StreamingInfo_CalcUIntsForImageFlags
==============
*/
__int64 DB_StreamingInfo_CalcUIntsForImageFlags(const unsigned int count)
{
  return (4 * count + 31) >> 5;
}

/*
==============
DB_StreamingInfo_Copy
==============
*/
void DB_StreamingInfo_Copy(const StreamingInfo *from, StreamingInfo *to, const char *toNewAssetName)
{
  unsigned int StreamingInfoIndex; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  unsigned __int16 v25; 
  __int64 v26; 
  __int64 v27; 

  _RSI = from;
  if ( !toNewAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 230, ASSERT_TYPE_ASSERT, "(toNewAssetName)", (const char *)&queryFormat, "toNewAssetName") )
    __debugbreak();
  StreamingInfoIndex = DB_GetStreamingInfoIndex(_RSI);
  v6 = StreamingInfoIndex;
  if ( StreamingInfoIndex >= 0x940 )
  {
    LODWORD(v26) = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, 2368) )
      __debugbreak();
  }
  v7 = 0x80000000 >> (v6 & 0x1F);
  v8 = v6 >> 5;
  if ( (v7 & s_streamingInfoValidEntries.array[v8]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 234, ASSERT_TYPE_ASSERT, "(!s_streamingInfoValidEntries.testBit( fromIndex ))", (const char *)&queryFormat, "!s_streamingInfoValidEntries.testBit( fromIndex )") )
    __debugbreak();
  v9 = DB_GetStreamingInfoIndex(to);
  v10 = v9;
  if ( v9 >= 0x940 )
  {
    LODWORD(v27) = 2368;
    LODWORD(v26) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  v11 = 0x80000000 >> (v10 & 0x1F);
  v12 = v10 >> 5;
  if ( (v11 & s_streamingInfoValidEntries.array[v12]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 238, ASSERT_TYPE_ASSERT, "(!s_streamingInfoValidEntries.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoValidEntries.testBit( toIndex )") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x940 )
  {
    LODWORD(v27) = 2368;
    LODWORD(v26) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  if ( (v7 & s_streamingInfoTransientLoaded.array[v8]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 240, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( fromIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x940 )
  {
    LODWORD(v27) = 2368;
    LODWORD(v26) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  if ( (v11 & s_streamingInfoTransientLoaded.array[v12]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 241, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( toIndex )") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x940 )
  {
    LODWORD(v27) = 2368;
    LODWORD(v26) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  if ( (v7 & s_streamingInfoTransientRegistered.array[v8]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 242, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( fromIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x940 )
  {
    LODWORD(v27) = 2368;
    LODWORD(v26) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  if ( (v11 & s_streamingInfoTransientRegistered.array[v12]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 243, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( toIndex )") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  _RDX = to;
  __asm
  {
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [rsi+10h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [rsi+30h]
    vmovups xmmword ptr [rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [rsi+40h]
    vmovups xmmword ptr [rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [rsi+50h]
    vmovups xmmword ptr [rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [rsi+60h]
    vmovups xmmword ptr [rdx+60h], xmm0
    vmovups xmm0, xmmword ptr [rsi+70h]
    vmovups xmmword ptr [rdx+70h], xmm0
    vmovups xmm1, xmmword ptr [rsi+80h]
    vmovups xmmword ptr [rdx+80h], xmm1
    vmovups xmm0, xmmword ptr [rsi+90h]
    vmovups xmmword ptr [rdx+90h], xmm0
    vmovups xmm1, xmmword ptr [rsi+0A0h]
    vmovups xmmword ptr [rdx+0A0h], xmm1
  }
  to->transientInfo = _RSI->transientInfo;
  to->name = toNewAssetName;
  v25 = s_streamingInfoZoneIndices[v6];
  if ( v25 != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 248, ASSERT_TYPE_ASSERT, "( s_streamingInfoZoneIndices[fromIndex] ) == ( INVALID_ZONE_INDEX )", "%s == %s\n\t%u, %u", "s_streamingInfoZoneIndices[fromIndex]", "INVALID_ZONE_INDEX", v25, 0xFFFF) )
    __debugbreak();
  s_streamingInfoZoneIndices[v10] = -1;
}

/*
==============
DB_StreamingInfo_Create
==============
*/
void DB_StreamingInfo_Create(StreamingInfo *outStreamingInfo)
{
  unsigned int StreamingInfoIndex; 
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned __int64 v5; 
  int ZoneIndexFromName; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  StreamingInfoIndex = DB_GetStreamingInfoIndex(outStreamingInfo);
  v3 = StreamingInfoIndex;
  if ( StreamingInfoIndex >= 0x940 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", StreamingInfoIndex, 2368) )
    __debugbreak();
  v4 = 0x80000000 >> (v3 & 0x1F);
  v5 = v3 >> 5;
  if ( (v4 & s_streamingInfoValidEntries.array[v5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 188, ASSERT_TYPE_ASSERT, "(!s_streamingInfoValidEntries.testBit( entryIndex ))", (const char *)&queryFormat, "!s_streamingInfoValidEntries.testBit( entryIndex )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x940 )
  {
    LODWORD(v8) = 2368;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( (v4 & s_streamingInfoTransientLoaded.array[v5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 190, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( entryIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( entryIndex )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x940 )
  {
    LODWORD(v8) = 2368;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( (v4 & s_streamingInfoTransientRegistered.array[v5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 191, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( entryIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( entryIndex )") )
    __debugbreak();
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(outStreamingInfo->name);
  if ( !ZoneIndexFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 194, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( (ZoneIndexFromName < 0 || (unsigned int)ZoneIndexFromName > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)ZoneIndexFromName, "signed", ZoneIndexFromName) )
    __debugbreak();
  s_streamingInfoZoneIndices[v3] = ZoneIndexFromName;
  if ( ZoneIndexFromName != 0xFFFF )
  {
    if ( (unsigned int)v3 >= 0x940 )
    {
      LODWORD(v10) = 2368;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v10) )
        __debugbreak();
    }
    s_streamingInfoValidEntries.array[v5] |= v4;
  }
}

/*
==============
DB_StreamingInfo_ForEachAlwaysloaded
==============
*/
char DB_StreamingInfo_ForEachAlwaysloaded(bool (*callback)(const StreamingInfo *, AlwaysloadedTotalsGather *))
{
  unsigned int v1; 
  unsigned int PoolSize; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int16 *v11; 
  __int64 v13; 
  __int64 v22; 
  unsigned int images; 
  unsigned int v24; 
  unsigned int modelSurfs; 
  unsigned int v26; 
  __int64 v28; 
  __int64 v29; 
  SortStreamingInfo v30; 
  StreamingInfo *pool; 
  AlwaysloadedTotals totals; 
  unsigned __int16 _Last[2368]; 

  v1 = 0;
  memset_0(&totals, 0, sizeof(totals));
  pool = (StreamingInfo *)DB_GetStreamingPoolBase();
  if ( !pool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 329, ASSERT_TYPE_ASSERT, "(pool)", (const char *)&queryFormat, "pool") )
    __debugbreak();
  if ( DB_GetPoolSize(ASSET_TYPE_STREAMING_INFO) < 0x940 )
  {
    PoolSize = DB_GetPoolSize(ASSET_TYPE_STREAMING_INFO);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 331, ASSERT_TYPE_ASSERT, "( s_streamingInfoValidEntries.size() ) <= ( DB_GetPoolSize( ASSET_TYPE_STREAMING_INFO ) )", "%s <= %s\n\t%llu, %llu", "s_streamingInfoValidEntries.size()", "DB_GetPoolSize( ASSET_TYPE_STREAMING_INFO )", 2368i64, PoolSize) )
      __debugbreak();
  }
  v3 = s_streamingInfoValidEntries.array[0];
  LODWORD(v4) = 0;
  while ( 1 )
  {
    _R14 = 0x140000000ui64;
    if ( !v3 )
      break;
LABEL_11:
    v6 = __lzcnt(v3);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v29) = 32;
      LODWORD(v28) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( (v3 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v3 &= ~(0x80000000 >> v6);
    if ( v1 >= 0x940 )
    {
      LODWORD(v29) = 2368;
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( sortedInfoSize ) < (unsigned)( ( sizeof( *array_counter( sortedInfo ) ) + 0 ) )", "sortedInfoSize doesn't index ARRAY_COUNT( sortedInfo )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( v7 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v6 + 32 * v4), "unsigned", v7) )
      __debugbreak();
    v8 = v1++;
    _Last[v8] = v7;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x4A )
      break;
    v3 = s_streamingInfoValidEntries.array[v4];
    if ( v3 )
      goto LABEL_11;
  }
  std::_Sort_unchecked<unsigned short *,SortStreamingInfo>(_Last, &_Last[v1], v1, v30);
  v9 = 0i64;
  v10 = 0;
  if ( v1 )
  {
    v11 = _Last;
    while ( DB_ProcessStreamingInfoAtIndex(*v11, pool, &totals, callback) )
    {
      ++v10;
      ++v11;
      if ( v10 >= v1 )
        goto LABEL_28;
    }
    return 0;
  }
  else
  {
LABEL_28:
    Sys_LockWrite(&s_lastAlwaysloadedTotalsLock);
    memcpy_0(&s_lastAlwaysloadedTotalLoadReq, &totals, sizeof(s_lastAlwaysloadedTotalLoadReq));
    _RAX = 0i64;
    v13 = 2i64;
    do
    {
      __asm
      {
        vmovdqu xmm1, xmmword ptr [rsp+rax+50C8h+totals.flagTotals]
        vpminud xmm1, xmm1, xmmword ptr [rax+r14+8DAA720h]
        vmovdqu xmmword ptr [rax+r14+8DAA720h], xmm1
        vmovdqu xmm1, xmmword ptr [rsp+rax+50C8h+totals.flagTotals+10h]
        vpminud xmm1, xmm1, xmmword ptr [rax+r14+8DAA730h]
        vmovdqu xmmword ptr [rax+r14+8DAA730h], xmm1
        vmovdqu xmm1, xmmword ptr [rsp+rax+50C8h+totals.flagTotals+20h]
        vpminud xmm1, xmm1, xmmword ptr [rax+r14+8DAA740h]
        vmovdqu xmmword ptr [rax+r14+8DAA740h], xmm1
        vmovdqu xmm1, xmmword ptr [rsp+rax+50C8h+totals.flagTotals+30h]
        vpminud xmm1, xmm1, xmmword ptr [rax+r14+8DAA750h]
        vmovdqu xmmword ptr [rax+r14+8DAA750h], xmm1
      }
      _RAX += 64i64;
      --v13;
    }
    while ( v13 );
    v22 = 1956i64;
    do
    {
      images = s_lastAlwaysloadedTotalLastGood.zoneTotals[v9 / 8].images;
      v24 = totals.zoneTotals[v9 / 8].images;
      modelSurfs = totals.zoneTotals[v9 / 8].modelSurfs;
      v9 += 8i64;
      if ( v24 > images )
        v24 = images;
      v26 = s_lastAlwaysloadedTotalLastGood.flagTotals[v9 / 4 + 31];
      s_lastAlwaysloadedTotalLastGood.zoneTotals[v9 / 8 - 1].images = v24;
      if ( modelSurfs > v26 )
        modelSurfs = v26;
      s_lastAlwaysloadedTotalLastGood.flagTotals[v9 / 4 + 31] = modelSurfs;
      --v22;
    }
    while ( v22 );
    Sys_UnlockWrite(&s_lastAlwaysloadedTotalsLock);
    return 1;
  }
}

/*
==============
DB_StreamingInfo_GetCostItemIndex
==============
*/
__int64 DB_StreamingInfo_GetCostItemIndex(const TransientCosts *costs, const StreamingContentSet *contentSet, const StreamingItemContents *contents)
{
  signed __int64 v6; 
  __int64 v8; 

  if ( !contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 61, ASSERT_TYPE_ASSERT, "(contents)", (const char *)&queryFormat, "contents") )
    __debugbreak();
  if ( !contentSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 62, ASSERT_TYPE_ASSERT, "(contentSet)", (const char *)&queryFormat, "contentSet") )
    __debugbreak();
  if ( !costs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 63, ASSERT_TYPE_ASSERT, "(costs)", (const char *)&queryFormat, "costs") )
    __debugbreak();
  if ( !contentSet->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 64, ASSERT_TYPE_ASSERT, "(contentSet->contents)", (const char *)&queryFormat, "contentSet->contents") )
    __debugbreak();
  if ( !contentSet->contentCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 65, ASSERT_TYPE_ASSERT, "(contentSet->contentCounts)", (const char *)&queryFormat, "contentSet->contentCounts") )
    __debugbreak();
  v6 = contents - contentSet->contents;
  if ( (unsigned int)v6 >= costs->transientCostCount )
  {
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( costs->transientCostCount )", "index doesn't index costs->transientCostCount\n\t%i not in [0, %i)", v8, costs->transientCostCount) )
      __debugbreak();
  }
  return contentSet->contentCounts[v6];
}

/*
==============
DB_StreamingInfo_GetLastGoodAlwaysloadedTotals
==============
*/
void DB_StreamingInfo_GetLastGoodAlwaysloadedTotals(AlwaysloadedTotals *outTotals)
{
  volatile int readCount; 

  if ( s_lastAlwaysloadedTotalsLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_lastAlwaysloadedTotalsLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_lastAlwaysloadedTotalsLock) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_lastAlwaysloadedTotalsLock);
  while ( s_lastAlwaysloadedTotalsLock.writeCount )
    Sys_Sleep(0);
  memcpy_0(outTotals, &s_lastAlwaysloadedTotalLastGood, sizeof(AlwaysloadedTotals));
  if ( s_lastAlwaysloadedTotalsLock.readCount <= 0 )
  {
    readCount = s_lastAlwaysloadedTotalsLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_lastAlwaysloadedTotalsLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_lastAlwaysloadedTotalsLock) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_lastAlwaysloadedTotalsLock);
}

/*
==============
DB_StreamingInfo_Move
==============
*/
void DB_StreamingInfo_Move(StreamingInfo *from, StreamingInfo *to)
{
  unsigned __int64 StreamingInfoIndex; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  int v30; 

  _RBX = to;
  _RDI = from;
  StreamingInfoIndex = DB_GetStreamingInfoIndex(from);
  v5 = DB_GetStreamingInfoIndex(_RBX);
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    v26 = 2368;
    v24 = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v26) )
      __debugbreak();
  }
  v6 = 0x80000000 >> (StreamingInfoIndex & 0x1F);
  v7 = StreamingInfoIndex >> 5;
  if ( (v6 & s_streamingInfoTransientLoaded.array[v7]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 209, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( fromIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x940 )
  {
    LODWORD(v25) = 2368;
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v25) )
      __debugbreak();
  }
  v8 = 0x80000000 >> (v5 & 0x1F);
  v9 = v5 >> 5;
  if ( (v8 & s_streamingInfoTransientLoaded.array[v9]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 210, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( toIndex )") )
    __debugbreak();
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    LODWORD(v25) = 2368;
    LODWORD(v23) = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v25) )
      __debugbreak();
  }
  if ( (v6 & s_streamingInfoTransientRegistered.array[v7]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 211, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( fromIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( fromIndex )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x940 )
  {
    LODWORD(v25) = 2368;
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v25) )
      __debugbreak();
  }
  if ( (v8 & s_streamingInfoTransientRegistered.array[v9]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 212, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( toIndex )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x940 )
  {
    LODWORD(v25) = 2368;
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v23, v25) )
      __debugbreak();
  }
  if ( (v8 & s_streamingInfoValidEntries.array[v9]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 214, ASSERT_TYPE_ASSERT, "(!s_streamingInfoValidEntries.testBit( toIndex ))", (const char *)&queryFormat, "!s_streamingInfoValidEntries.testBit( toIndex )") )
    __debugbreak();
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    v30 = 2368;
    v28 = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v30) )
      __debugbreak();
  }
  s_streamingInfoValidEntries.array[v7] &= ~v6;
  v10 = StreamingInfoIndex;
  v11 = s_streamingInfoZoneIndices[StreamingInfoIndex];
  if ( (_WORD)v11 != 0xFFFF )
  {
    if ( (unsigned int)v5 >= 0x940 )
    {
      LODWORD(v29) = 2368;
      LODWORD(v27) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v29) )
        __debugbreak();
    }
    s_streamingInfoValidEntries.array[v9] |= v8;
    v11 = s_streamingInfoZoneIndices[v10];
  }
  s_streamingInfoZoneIndices[v5] = v11;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmm1, xmmword ptr [rdi+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+20h], xmm0
    vmovups xmm1, xmmword ptr [rdi+30h]
    vmovups xmmword ptr [rbx+30h], xmm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbx+40h], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovups xmmword ptr [rbx+50h], xmm1
    vmovups xmm0, xmmword ptr [rdi+60h]
    vmovups xmmword ptr [rbx+60h], xmm0
    vmovups xmm0, xmmword ptr [rdi+70h]
    vmovups xmmword ptr [rbx+70h], xmm0
    vmovups xmm1, xmmword ptr [rdi+80h]
    vmovups xmmword ptr [rbx+80h], xmm1
    vmovups xmm0, xmmword ptr [rdi+90h]
    vmovups xmmword ptr [rbx+90h], xmm0
    vmovups xmm1, xmmword ptr [rdi+0A0h]
    vmovups xmmword ptr [rbx+0A0h], xmm1
  }
  _RBX->transientInfo = _RDI->transientInfo;
  if ( v10 >= 2368 )
  {
    j___report_rangecheckfailure(v11);
    JUMPOUT(0x14049636Fi64);
  }
  s_streamingInfoZoneIndices[v10] = 0;
}

/*
==============
DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion
==============
*/
void DB_StreamingInfo_OnSuccessfulAlwaysloadedCompletion(void)
{
  Sys_LockWrite(&s_lastAlwaysloadedTotalsLock);
  memcpy_0(&s_lastAlwaysloadedTotalLastGood, &s_lastAlwaysloadedTotalLoadReq, sizeof(s_lastAlwaysloadedTotalLastGood));
  Sys_UnlockWrite(&s_lastAlwaysloadedTotalsLock);
}

/*
==============
DB_StreamingInfo_Register
==============
*/
void DB_StreamingInfo_Register(const StreamingInfo *streamingInfo, DBTransientsRegisterStage registerStage)
{
  char v2; 
  unsigned int StreamingInfoIndex; 
  TransientInfo *transientInfo; 
  unsigned __int64 v6; 
  bool v7; 
  int v8; 
  char v9; 
  char v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  v2 = registerStage;
  StreamingInfoIndex = DB_GetStreamingInfoIndex(streamingInfo);
  transientInfo = streamingInfo->transientInfo;
  v6 = StreamingInfoIndex;
  v7 = transientInfo && transientInfo->transientFileCount;
  if ( transientInfo && transientInfo->transientFileCount )
  {
    v8 = 0;
    while ( !DB_TransientFileType_IsSP((const TransientFileType)transientInfo->transientFiles[v8].type) )
    {
      transientInfo = streamingInfo->transientInfo;
      if ( ++v8 >= transientInfo->transientFileCount )
      {
        v9 = 1;
        goto LABEL_12;
      }
    }
  }
  v9 = 0;
LABEL_12:
  switch ( v2 )
  {
    case 0:
      v10 = 1;
LABEL_22:
      if ( (unsigned int)v6 >= 0x940 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, 2368) )
        __debugbreak();
      v11 = 0x80000000 >> (v6 & 0x1F);
      if ( (v11 & s_streamingInfoTransientLoaded.array[v6 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 130, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientLoaded.testBit( entryIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientLoaded.testBit( entryIndex )") )
        __debugbreak();
      if ( v7 )
      {
        if ( (unsigned int)v6 >= 0x940 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, 2368) )
          __debugbreak();
        s_streamingInfoTransientLoaded.array[v6 >> 5] |= v11;
        DB_LoadStreamingInfoTransientList(streamingInfo);
      }
      goto LABEL_33;
    case 1:
      v10 = 0;
      break;
    case 2:
      v9 ^= 1u;
      v10 = 1;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 124, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected register stage") )
        __debugbreak();
      return;
  }
  if ( v9 )
    goto LABEL_22;
LABEL_33:
  if ( v10 )
  {
    if ( (unsigned int)v6 >= 0x940 )
    {
      LODWORD(v14) = 2368;
      LODWORD(v13) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v13, v14) )
        __debugbreak();
    }
    v12 = 0x80000000 >> (v6 & 0x1F);
    if ( (v12 & s_streamingInfoTransientRegistered.array[v6 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 142, ASSERT_TYPE_ASSERT, "(!s_streamingInfoTransientRegistered.testBit( entryIndex ))", (const char *)&queryFormat, "!s_streamingInfoTransientRegistered.testBit( entryIndex )") )
      __debugbreak();
    if ( v7 )
    {
      if ( (unsigned int)v6 >= 0x940 )
      {
        LODWORD(v16) = 2368;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v15, v16) )
          __debugbreak();
      }
      s_streamingInfoTransientRegistered.array[v6 >> 5] |= v12;
      DB_Transients_RegisterZones(streamingInfo->name, streamingInfo->transientInfo);
    }
  }
}

/*
==============
DB_StreamingInfo_Release
==============
*/
void DB_StreamingInfo_Release(StreamingInfo *outStreamingInfo)
{
  unsigned __int64 StreamingInfoIndex; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 

  StreamingInfoIndex = DB_GetStreamingInfoIndex(outStreamingInfo);
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    v12 = 2368;
    v10 = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v12) )
      __debugbreak();
  }
  v3 = StreamingInfoIndex & 0x1F;
  v4 = 0x80000000 >> v3;
  v5 = ~(0x80000000 >> v3);
  v6 = StreamingInfoIndex >> 5;
  s_streamingInfoValidEntries.array[v6] &= v5;
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    LODWORD(v8) = 2368;
    LODWORD(v7) = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( (v4 & s_streamingInfoTransientLoaded.array[v6]) != 0 )
  {
    if ( (unsigned int)StreamingInfoIndex >= 0x940 )
    {
      LODWORD(v11) = 2368;
      LODWORD(v9) = StreamingInfoIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v11) )
        __debugbreak();
    }
    s_streamingInfoTransientLoaded.array[v6] &= v5;
    if ( !outStreamingInfo->transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 164, ASSERT_TYPE_ASSERT, "(outStreamingInfo.transientInfo != nullptr)", (const char *)&queryFormat, "outStreamingInfo.transientInfo != nullptr") )
      __debugbreak();
    if ( !outStreamingInfo->transientInfo->transientFileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 165, ASSERT_TYPE_ASSERT, "(outStreamingInfo.transientInfo->transientFileCount)", (const char *)&queryFormat, "outStreamingInfo.transientInfo->transientFileCount") )
      __debugbreak();
    DB_UnloadStreamingInfoTransientList(outStreamingInfo);
  }
  if ( (unsigned int)StreamingInfoIndex >= 0x940 )
  {
    LODWORD(v8) = 2368;
    LODWORD(v7) = StreamingInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( (v4 & s_streamingInfoTransientRegistered.array[v6]) != 0 )
  {
    if ( (unsigned int)StreamingInfoIndex >= 0x940 )
    {
      LODWORD(v11) = 2368;
      LODWORD(v9) = StreamingInfoIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v11) )
        __debugbreak();
    }
    s_streamingInfoTransientRegistered.array[v6] &= v5;
    if ( !outStreamingInfo->transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 174, ASSERT_TYPE_ASSERT, "(outStreamingInfo.transientInfo != nullptr)", (const char *)&queryFormat, "outStreamingInfo.transientInfo != nullptr") )
      __debugbreak();
    if ( !outStreamingInfo->transientInfo->transientFileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_streaming_info_db.cpp", 175, ASSERT_TYPE_ASSERT, "(outStreamingInfo.transientInfo->transientFileCount)", (const char *)&queryFormat, "outStreamingInfo.transientInfo->transientFileCount") )
      __debugbreak();
    DB_Transients_UnregisterZones(outStreamingInfo->transientInfo);
  }
  if ( 2 * StreamingInfoIndex >= 0x1280 )
  {
    j___report_rangecheckfailure(v3);
    JUMPOUT(0x140496C6Ci64);
  }
  s_streamingInfoZoneIndices[StreamingInfoIndex] = 0;
}

