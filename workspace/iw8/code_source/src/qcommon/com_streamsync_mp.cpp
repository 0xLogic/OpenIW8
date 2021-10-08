/*
==============
Com_StreamSync_GetMaxEntryCount
==============
*/

unsigned int __fastcall Com_StreamSync_GetMaxEntryCount(StreamSyncClientType streamType, const unsigned int serverClientCount, const unsigned int localClientCount)
{
  return ?Com_StreamSync_GetMaxEntryCount@@YAIW4StreamSyncClientType@@II@Z(streamType, serverClientCount, localClientCount);
}

/*
==============
Com_StreamSync_GetModelLimit
==============
*/

unsigned int __fastcall Com_StreamSync_GetModelLimit(const StreamSyncClientType clientStreamType)
{
  return ?Com_StreamSync_GetModelLimit@@YAIW4StreamSyncClientType@@@Z(clientStreamType);
}

/*
==============
Com_StreamSyncEntry_AreEqual
==============
*/

bool __fastcall Com_StreamSyncEntry_AreEqual(const ComStreamSyncEntry *syncEntry1, const ComStreamSyncEntry *syncEntry2, const StreamSyncClientType type)
{
  return ?Com_StreamSyncEntry_AreEqual@@YA_NAEBTComStreamSyncEntry@@0W4StreamSyncClientType@@@Z(syncEntry1, syncEntry2, type);
}

/*
==============
Com_StreamSync_SetEnabled
==============
*/

void __fastcall Com_StreamSync_SetEnabled(const bool enabled)
{
  ?Com_StreamSync_SetEnabled@@YAX_N@Z(enabled);
}

/*
==============
Com_StreamSync_GetStreamTypeForCustomization
==============
*/

StreamSyncClientType __fastcall Com_StreamSync_GetStreamTypeForCustomization(CustomizationModelType customizationType)
{
  return ?Com_StreamSync_GetStreamTypeForCustomization@@YA?AW4StreamSyncClientType@@W4CustomizationModelType@@@Z(customizationType);
}

/*
==============
Com_StreamSync_GetTypeName
==============
*/

const char *__fastcall Com_StreamSync_GetTypeName(const StreamSyncClientType clientStreamType)
{
  return ?Com_StreamSync_GetTypeName@@YAPEBDW4StreamSyncClientType@@@Z(clientStreamType);
}

/*
==============
Com_StreamSync_IsEnabled
==============
*/

bool __fastcall Com_StreamSync_IsEnabled()
{
  return ?Com_StreamSync_IsEnabled@@YA_NXZ();
}

/*
==============
Com_StreamSyncEntry_GetType
==============
*/

ComStreamSyncEntryType __fastcall Com_StreamSyncEntry_GetType(const StreamSyncClientType type)
{
  return ?Com_StreamSyncEntry_GetType@@YA?AW4ComStreamSyncEntryType@@W4StreamSyncClientType@@@Z(type);
}

/*
==============
Com_StreamSync_GetBitCount
==============
*/

unsigned int __fastcall Com_StreamSync_GetBitCount(const StreamSyncClientType clientStreamType)
{
  return ?Com_StreamSync_GetBitCount@@YAIW4StreamSyncClientType@@@Z(clientStreamType);
}

/*
==============
Com_StreamSyncEntry_DebugPrint
==============
*/

void __fastcall Com_StreamSyncEntry_DebugPrint(char *buf, const unsigned int bufSize, const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  ?Com_StreamSyncEntry_DebugPrint@@YAXPEADIAEBTComStreamSyncEntry@@W4StreamSyncClientType@@@Z(buf, bufSize, syncEntry, type);
}

/*
==============
Com_StreamSync_GetMaxWorldEntryCount
==============
*/

unsigned int __fastcall Com_StreamSync_GetMaxWorldEntryCount(StreamSyncWorldType streamType, const unsigned int serverClientCount)
{
  return ?Com_StreamSync_GetMaxWorldEntryCount@@YAIW4StreamSyncWorldType@@I@Z(streamType, serverClientCount);
}

/*
==============
Com_StreamSyncEntry_AreEqual
==============
*/
bool Com_StreamSyncEntry_AreEqual(const ComStreamSyncEntry *syncEntry1, const ComStreamSyncEntry *syncEntry2, const StreamSyncClientType type)
{
  __int64 v3; 
  ComStreamSyncEntryType v6; 
  __int64 v8; 

  v3 = type;
  if ( (unsigned int)type >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( (1024) )", "type doesn't index STREAM_SYNC_BODY_MODEL_COUNT\n\t%i not in [0, %i)", type, 1024) )
    __debugbreak();
  v6 = S_STREAM_SYNC_ENTRY_TYPES[v3];
  if ( v6 == SINGLEMODEL )
    return syncEntry1->singleModelIndex == syncEntry2->singleModelIndex;
  if ( v6 == WEAPON )
    return memcmp_0(syncEntry1, syncEntry2, 0x3Cui64) == 0;
  SLODWORD(v8) = S_STREAM_SYNC_ENTRY_TYPES[v3];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 491, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown ComStreamSyncModelType : %d", v8) )
    __debugbreak();
  return 0;
}

/*
==============
Com_StreamSyncEntry_DebugPrint
==============
*/
void Com_StreamSyncEntry_DebugPrint(char *buf, const unsigned int bufSize, const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  __int64 v4; 
  unsigned __int64 v6; 
  ComStreamSyncEntryType v8; 
  __int64 v9; 

  v4 = type;
  v6 = bufSize;
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 437, ASSERT_TYPE_ASSERT, "( buf )", (const char *)&queryFormat, "buf") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x400 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( (1024) )", "type doesn't index STREAM_SYNC_BODY_MODEL_COUNT\n\t%i not in [0, %i)", v9, 1024) )
      __debugbreak();
  }
  v8 = S_STREAM_SYNC_ENTRY_TYPES[v4];
  if ( v8 )
  {
    if ( v8 == WEAPON )
    {
      if ( bg_lastParsedWeaponIndex )
        BG_GetWeaponName((const Weapon *)syncEntry, buf, v6);
      else
        Com_sprintf(buf, v6, "weaponIdx=%d", syncEntry->singleModelIndex);
    }
    else
    {
      SLODWORD(v9) = S_STREAM_SYNC_ENTRY_TYPES[v4];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 465, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown ComStreamSyncModelType : %d", v9) )
        __debugbreak();
    }
  }
  else
  {
    Com_sprintf(buf, v6, "%d", syncEntry->singleModelIndex);
  }
}

/*
==============
Com_StreamSyncEntry_GetType
==============
*/
__int64 Com_StreamSyncEntry_GetType(const StreamSyncClientType type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= 0x400 )
  {
    v4 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( (1024) )", "type doesn't index STREAM_SYNC_BODY_MODEL_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return (unsigned int)S_STREAM_SYNC_ENTRY_TYPES[v1];
}

/*
==============
Com_StreamSync_GetBitCount
==============
*/
__int64 Com_StreamSync_GetBitCount(const StreamSyncClientType clientStreamType)
{
  __int64 v1; 
  int v4; 

  v1 = clientStreamType;
  if ( (unsigned int)clientStreamType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( ( sizeof( *array_counter( S_STREAM_SYNC_MODEL_BITS ) ) + 0 ) )", "clientStreamType doesn't index ARRAY_COUNT( S_STREAM_SYNC_MODEL_BITS )\n\t%i not in [0, %i)", clientStreamType, v4) )
      __debugbreak();
  }
  return S_STREAM_SYNC_MODEL_BITS[v1];
}

/*
==============
Com_StreamSync_GetMaxBodies
==============
*/
__int64 Com_StreamSync_GetMaxBodies(const GameModeType currentGamemode, const unsigned int serverClientCount)
{
  const dvar_t *v3; 
  unsigned int unsignedInt; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  signed int integer; 

  if ( (_BYTE)currentGamemode == LONG )
  {
    v3 = DVARINT_com_maxStreamedBodiesCp;
    if ( !DVARINT_com_maxStreamedBodiesCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedBodiesCp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    unsignedInt = v3->current.unsignedInt;
  }
  else
  {
    if ( (_BYTE)currentGamemode != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
      __debugbreak();
    v5 = DVARINT_com_maxStreamedBodiesMp;
    if ( !DVARINT_com_maxStreamedBodiesMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedBodiesMp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled;
    unsignedInt = v5->current.unsignedInt;
    if ( !DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedModelsForLargePlayerCountEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && serverClientCount > 0x14 )
    {
      v7 = DVARINT_com_maxStreamedBodiesForLargePlayerCounts;
      if ( !DVARINT_com_maxStreamedBodiesForLargePlayerCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedBodiesForLargePlayerCounts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      integer = v7->current.integer;
      if ( (int)unsignedInt < integer )
        integer = unsignedInt;
      unsignedInt = integer;
    }
  }
  if ( unsignedInt > 0x30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 268, ASSERT_TYPE_ASSERT, "( maxBodies ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxBodies", "MAX_BODIES_STREAMED_STATIC", unsignedInt, 48) )
    __debugbreak();
  return unsignedInt;
}

/*
==============
Com_StreamSync_GetMaxEntryCount
==============
*/
__int64 Com_StreamSync_GetMaxEntryCount(StreamSyncClientType streamType, const unsigned int serverClientCount, const unsigned int localClientCount)
{
  unsigned __int8 ActiveGameMode; 
  unsigned int MaxStreamedCharacters; 
  unsigned int MaxHeads; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  const char *v13; 
  unsigned int unsignedInt; 
  int v15; 
  unsigned int v16; 
  const dvar_t *v17; 
  const char *v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int MaxViewWeapons; 
  const dvar_t *v23; 
  const char *v24; 
  unsigned int v25; 
  bool v26; 
  __int64 v28; 
  __int64 v29; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  switch ( streamType )
  {
    case STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL:
      MaxStreamedCharacters = Com_StreamSync_GetMaxStreamedCharacters((const GameModeType)ActiveGameMode, STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL, serverClientCount);
      MaxHeads = Com_StreamSync_GetMaxHeads((const GameModeType)ActiveGameMode, serverClientCount);
      goto LABEL_3;
    case STREAM_SYNC_CLIENT_TYPE_BODY:
      MaxStreamedCharacters = Com_StreamSync_GetMaxStreamedCharacters((const GameModeType)ActiveGameMode, STREAM_SYNC_CLIENT_TYPE_BODY, serverClientCount);
      MaxHeads = Com_StreamSync_GetMaxBodies((const GameModeType)ActiveGameMode, serverClientCount);
LABEL_3:
      v9 = 20;
      if ( MaxStreamedCharacters <= 0x14 )
        v9 = MaxStreamedCharacters;
      v10 = 2 * v9 + 8;
      if ( MaxHeads > v10 )
        MaxHeads = 2 * v9 + 8;
      if ( v10 > MaxHeads )
        v10 = MaxHeads;
      goto LABEL_85;
    case STREAM_SYNC_CLIENT_TYPE_WEAPON:
      v11 = Com_StreamSync_GetMaxStreamedCharacters((const GameModeType)ActiveGameMode, STREAM_SYNC_CLIENT_TYPE_WEAPON, serverClientCount);
      if ( ActiveGameMode == 3 )
      {
        v12 = DVARINT_com_maxStreamedWeaponsCp;
        if ( DVARINT_com_maxStreamedWeaponsCp )
          goto LABEL_21;
        v13 = "com_maxStreamedWeaponsCp";
        goto LABEL_19;
      }
      if ( ActiveGameMode != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 283, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
        __debugbreak();
      v12 = DVARINT_com_maxStreamedWeaponsMp;
      if ( !DVARINT_com_maxStreamedWeaponsMp )
      {
        v13 = "com_maxStreamedWeaponsMp";
LABEL_19:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v13) )
          __debugbreak();
      }
LABEL_21:
      Dvar_CheckFrontendServerThread(v12);
      unsignedInt = v12->current.unsignedInt;
      if ( unsignedInt > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 287, ASSERT_TYPE_ASSERT, "( maxWeapons ) <= ( ( ((2) * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 16 + (8)) ) )", "%s <= %s\n\t%i, %i", "maxWeapons", "MAX_WORLD_WEAPONS_STREAMED_STATIC", v12->current.integer, 64) )
        __debugbreak();
      v15 = 20;
      if ( v11 <= 0x14 )
        v15 = v11;
      v10 = 2 * v15 + 24;
      if ( unsignedInt > v10 )
        unsignedInt = 2 * v15 + 24;
      if ( v10 > unsignedInt )
        v10 = unsignedInt;
      goto LABEL_85;
    case STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL:
      v16 = Com_StreamSync_GetMaxStreamedCharacters((const GameModeType)ActiveGameMode, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, serverClientCount);
      if ( ActiveGameMode == 3 )
      {
        v17 = DVARINT_com_maxStreamedViewArmsCp;
        if ( DVARINT_com_maxStreamedViewArmsCp )
          goto LABEL_41;
        v18 = "com_maxStreamedViewArmsCp";
        goto LABEL_39;
      }
      if ( ActiveGameMode != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 302, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
        __debugbreak();
      v17 = DVARINT_com_maxStreamedViewArmsMp;
      if ( !DVARINT_com_maxStreamedViewArmsMp )
      {
        v18 = "com_maxStreamedViewArmsMp";
LABEL_39:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v18) )
          __debugbreak();
      }
LABEL_41:
      Dvar_CheckFrontendServerThread(v17);
      v19 = v17->current.unsignedInt;
      v20 = 20;
      if ( v19 > 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 306, ASSERT_TYPE_ASSERT, "( maxViewArms ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "%s <= %s\n\t%i, %i", "maxViewArms", "MAX_VIEWARMS_STREAMED_STATIC", v17->current.integer, 20) )
        __debugbreak();
      if ( v16 <= 0x14 )
        v20 = v16;
      if ( v19 > v20 )
        v19 = v20;
      if ( !v19 )
      {
        LODWORD(v28) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 390, ASSERT_TYPE_ASSERT, "( ( maxItemCount >= MIN_VIEW_ARMS_STREAMED ) )", "( maxItemCount ) = %i", v28) )
          __debugbreak();
      }
      v10 = 2 * v20 + 24;
      if ( v10 > v19 )
        v10 = v19;
      goto LABEL_85;
    case STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON:
      v10 = 24;
      if ( (int)localClientCount < 1 )
        localClientCount = 1;
      v21 = 24 / (int)localClientCount;
      if ( v21 < 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 396, ASSERT_TYPE_ASSERT, "( ( maxItemCount >= MIN_VIEW_WEAPONS_STREAMED ) )", "( maxItemCount ) = %i", v21) )
        __debugbreak();
      MaxViewWeapons = Com_StreamSync_GetMaxViewWeapons((const GameModeType)ActiveGameMode, serverClientCount);
      if ( MaxViewWeapons > v21 )
        MaxViewWeapons = v21;
      if ( MaxViewWeapons < 0x18 )
        v10 = MaxViewWeapons;
      goto LABEL_85;
    case STREAM_SYNC_CLIENT_TYPE_CLIENT_MODELS:
      if ( ActiveGameMode == 3 )
      {
        v23 = DVARINT_com_maxStreamedClientModelsCp;
        if ( DVARINT_com_maxStreamedClientModelsCp )
          goto LABEL_74;
        v24 = "com_maxStreamedClientModelsCp";
        goto LABEL_72;
      }
      if ( ActiveGameMode != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 347, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
        __debugbreak();
      v23 = DVARINT_com_maxStreamedClientModelsMp;
      if ( !DVARINT_com_maxStreamedClientModelsMp )
      {
        v24 = "com_maxStreamedClientModelsMp";
LABEL_72:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
          __debugbreak();
      }
LABEL_74:
      Dvar_CheckFrontendServerThread(v23);
      v25 = v23->current.unsignedInt;
      v10 = 32;
      v26 = (int)v25 <= 32;
      if ( v25 > 0x20 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 351, ASSERT_TYPE_ASSERT, "( maxClientModels ) <= ( (32) )", "%s <= %s\n\t%i, %i", "maxClientModels", "MAX_CLIENTMODELS_STREAMED", v25, 32) )
          __debugbreak();
        v26 = (int)v25 <= 32;
      }
      if ( !v26 )
        v25 = 32;
      if ( !v25 )
      {
        LODWORD(v28) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 403, ASSERT_TYPE_ASSERT, "( ( maxItemCount >= MIN_CLIENTMODELS_STREAMED ) )", "( maxItemCount ) = %i", v28) )
          __debugbreak();
      }
      if ( v25 < 0x20 )
        v10 = v25;
LABEL_85:
      if ( v10 > 0x40 )
      {
        LODWORD(v29) = 64;
        LODWORD(v28) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 413, ASSERT_TYPE_ASSERT, "( maxItemCount ) <= ( STREAM_SYNC_STATIC_MAX_ITEM_COUNT )", "maxItemCount not in [0, STREAM_SYNC_STATIC_MAX_ITEM_COUNT]\n\t%u not in [0, %u]", v28, v29) )
          __debugbreak();
      }
      return v10;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 408, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled type") )
        __debugbreak();
      return 0i64;
  }
}

/*
==============
Com_StreamSync_GetMaxHeads
==============
*/
__int64 Com_StreamSync_GetMaxHeads(const GameModeType currentGamemode, const unsigned int serverClientCount)
{
  const dvar_t *v3; 
  unsigned int unsignedInt; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  signed int integer; 

  if ( (_BYTE)currentGamemode == LONG )
  {
    v3 = DVARINT_com_maxStreamedHeadsCp;
    if ( !DVARINT_com_maxStreamedHeadsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedHeadsCp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    unsignedInt = v3->current.unsignedInt;
  }
  else
  {
    if ( (_BYTE)currentGamemode != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
      __debugbreak();
    v5 = DVARINT_com_maxStreamedHeadsMp;
    if ( !DVARINT_com_maxStreamedHeadsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedHeadsMp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled;
    unsignedInt = v5->current.unsignedInt;
    if ( !DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedModelsForLargePlayerCountEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && serverClientCount > 0x14 )
    {
      v7 = DVARINT_com_maxStreamedHeadsForLargePlayerCounts;
      if ( !DVARINT_com_maxStreamedHeadsForLargePlayerCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedHeadsForLargePlayerCounts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      integer = v7->current.integer;
      if ( (int)unsignedInt < integer )
        integer = unsignedInt;
      unsignedInt = integer;
    }
  }
  if ( unsignedInt > 0x30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 242, ASSERT_TYPE_ASSERT, "( maxHeads ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxHeads", "MAX_HEADS_STREAMED_STATIC", unsignedInt, 48) )
    __debugbreak();
  return unsignedInt;
}

/*
==============
Com_StreamSync_GetMaxStreamedCharacters
==============
*/
__int64 Com_StreamSync_GetMaxStreamedCharacters(const GameModeType currentGamemode, const StreamSyncClientType streamSyncType, const unsigned int serverClientCount)
{
  unsigned __int8 v5; 
  __int32 v6; 
  __int32 v7; 
  int MaxStreamedClients; 
  const dvar_t *v9; 
  const char *v10; 
  unsigned int unsignedInt; 
  __int64 result; 

  v5 = currentGamemode;
  if ( (unsigned int)streamSyncType >= STREAM_SYNC_CLIENT_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( streamSyncType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "streamSyncType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", streamSyncType, 6) )
    __debugbreak();
  if ( streamSyncType == STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL )
    goto LABEL_25;
  v6 = streamSyncType - 1;
  if ( !v6 )
    goto LABEL_25;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 209, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled StreamSyncClientType for Com_StreamSync_GetMaxStreamedCharacters") )
        __debugbreak();
      MaxStreamedClients = 0;
      goto LABEL_26;
    }
LABEL_25:
    MaxStreamedClients = Com_StreamSync_GetMaxStreamedClients((const GameModeType)v5, serverClientCount);
    goto LABEL_26;
  }
  if ( v5 != 3 )
  {
    if ( v5 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
      __debugbreak();
    v9 = DVARINT_com_maxStreamedAgentsMp;
    if ( DVARINT_com_maxStreamedAgentsMp )
      goto LABEL_21;
    v10 = "com_maxStreamedAgentsMp";
    goto LABEL_19;
  }
  v9 = DVARINT_com_maxStreamedAgentsCp;
  if ( !DVARINT_com_maxStreamedAgentsCp )
  {
    v10 = "com_maxStreamedAgentsCp";
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
      __debugbreak();
  }
LABEL_21:
  Dvar_CheckFrontendServerThread(v9);
  unsignedInt = v9->current.unsignedInt;
  if ( unsignedInt > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 172, ASSERT_TYPE_ASSERT, "( maxStreamedAgents ) <= ( (8) )", "%s <= %s\n\t%i, %i", "maxStreamedAgents", "MAX_STREAMED_WORLD_AGENTS_STATIC", unsignedInt, 8) )
    __debugbreak();
  MaxStreamedClients = unsignedInt + Com_StreamSync_GetMaxStreamedClients((const GameModeType)v5, serverClientCount);
LABEL_26:
  result = 20i64;
  if ( MaxStreamedClients < 20 )
    return (unsigned int)MaxStreamedClients;
  return result;
}

/*
==============
Com_StreamSync_GetMaxStreamedClients
==============
*/
__int64 Com_StreamSync_GetMaxStreamedClients(const GameModeType currentGamemode, const unsigned int serverClientCount)
{
  const dvar_t *v3; 
  const char *v4; 

  if ( (_BYTE)currentGamemode == LONG )
  {
    v3 = DVARINT_com_maxStreamedClientsCp;
    if ( DVARINT_com_maxStreamedClientsCp )
      goto LABEL_11;
    v4 = "com_maxStreamedClientsCp";
    goto LABEL_9;
  }
  if ( (_BYTE)currentGamemode != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
    __debugbreak();
  v3 = DVARINT_com_maxStreamedClientsMp;
  if ( !DVARINT_com_maxStreamedClientsMp )
  {
    v4 = "com_maxStreamedClientsMp";
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
      __debugbreak();
  }
LABEL_11:
  Dvar_CheckFrontendServerThread(v3);
  if ( serverClientCount > v3->current.integer )
    serverClientCount = v3->current.unsignedInt;
  if ( serverClientCount > 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 152, ASSERT_TYPE_ASSERT, "( maxStreamedClients ) <= ( (20) )", "%s <= %s\n\t%i, %i", "maxStreamedClients", "MAX_STREAMED_WORLD_CLIENTS_STATIC", serverClientCount, 20) )
    __debugbreak();
  return serverClientCount;
}

/*
==============
Com_StreamSync_GetMaxViewWeapons
==============
*/
__int64 Com_StreamSync_GetMaxViewWeapons(const GameModeType currentGamemode, const unsigned int serverClientCount)
{
  const dvar_t *v3; 
  unsigned int unsignedInt; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  signed int integer; 

  if ( (_BYTE)currentGamemode == LONG )
  {
    v3 = DVARINT_com_maxStreamedViewWeaponsCp;
    if ( !DVARINT_com_maxStreamedViewWeaponsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewWeaponsCp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    unsignedInt = v3->current.unsignedInt;
  }
  else
  {
    if ( (_BYTE)currentGamemode != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 321, ASSERT_TYPE_ASSERT, "(currentGamemode == GameModeType::MP)", (const char *)&queryFormat, "currentGamemode == GameModeType::MP") )
      __debugbreak();
    v5 = DVARINT_com_maxStreamedViewWeaponsMp;
    if ( !DVARINT_com_maxStreamedViewWeaponsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewWeaponsMp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled;
    unsignedInt = v5->current.unsignedInt;
    if ( !DVARBOOL_com_maxStreamedModelsForLargePlayerCountEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedModelsForLargePlayerCountEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && serverClientCount > 0x14 )
    {
      v7 = DVARINT_com_maxStreamedViewWeaponsForLargePlayerCounts;
      if ( !DVARINT_com_maxStreamedViewWeaponsForLargePlayerCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewWeaponsForLargePlayerCounts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      integer = v7->current.integer;
      if ( (int)unsignedInt < integer )
        integer = unsignedInt;
      unsignedInt = integer;
    }
  }
  if ( unsignedInt > 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 332, ASSERT_TYPE_ASSERT, "( maxViewWeapons ) <= ( (24) )", "%s <= %s\n\t%i, %i", "maxViewWeapons", "MAX_VIEW_WEAPONS_STREAMED", unsignedInt, 24) )
    __debugbreak();
  return unsignedInt;
}

/*
==============
Com_StreamSync_GetMaxWorldEntryCount
==============
*/
unsigned int Com_StreamSync_GetMaxWorldEntryCount(StreamSyncWorldType streamType, const unsigned int serverClientCount)
{
  return Com_StreamSync_GetMaxEntryCount((StreamSyncClientType)streamType, serverClientCount, 0);
}

/*
==============
Com_StreamSync_GetModelLimit
==============
*/
__int64 Com_StreamSync_GetModelLimit(const StreamSyncClientType clientStreamType)
{
  __int64 v1; 
  int v4; 

  v1 = clientStreamType;
  if ( (unsigned int)clientStreamType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( ( sizeof( *array_counter( S_STREAM_SYNC_MODEL_BITS ) ) + 0 ) )", "clientStreamType doesn't index ARRAY_COUNT( S_STREAM_SYNC_MODEL_BITS )\n\t%i not in [0, %i)", clientStreamType, v4) )
      __debugbreak();
  }
  return S_STREAM_SYNC_MODEL_LIMIT[v1];
}

/*
==============
Com_StreamSync_GetStreamTypeForCustomization
==============
*/
__int64 Com_StreamSync_GetStreamTypeForCustomization(CustomizationModelType customizationType)
{
  __int32 v1; 

  if ( customizationType == CUSTOMIZATION_TYPE_HEAD )
    return 0i64;
  v1 = customizationType - 1;
  if ( !v1 )
    return 1i64;
  if ( v1 != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 131, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled customization type") )
      __debugbreak();
    return 1i64;
  }
  return 3i64;
}

/*
==============
Com_StreamSync_GetTypeName
==============
*/
const char *Com_StreamSync_GetTypeName(const StreamSyncClientType clientStreamType)
{
  __int64 v1; 
  int v4; 

  v1 = clientStreamType;
  if ( (unsigned int)clientStreamType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( ( sizeof( *array_counter( S_STREAM_SYNC_MODEL_BITS ) ) + 0 ) )", "clientStreamType doesn't index ARRAY_COUNT( S_STREAM_SYNC_MODEL_BITS )\n\t%i not in [0, %i)", clientStreamType, v4) )
      __debugbreak();
  }
  return S_STREAM_SYNC_TYPE_NAMES[v1];
}

/*
==============
Com_StreamSync_IsEnabled
==============
*/
_BOOL8 Com_StreamSync_IsEnabled()
{
  const dvar_t *v0; 
  _BOOL8 result; 

  v0 = DCONST_DVARBOOL_com_streamSyncEnabled;
  if ( !DCONST_DVARBOOL_com_streamSyncEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_streamSyncEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  result = s_streamSyncEnabled;
  if ( !v0->current.enabled )
    return 0i64;
  return result;
}

/*
==============
Com_StreamSync_SetEnabled
==============
*/
void Com_StreamSync_SetEnabled(const bool enabled)
{
  s_streamSyncEnabled = enabled;
}

