/*
==============
Com_StreamSyncEntry_SetSingleModelIndex
==============
*/

void __fastcall Com_StreamSyncEntry_SetSingleModelIndex(ComStreamSyncEntry *outSyncEntry, const unsigned int modelIndex, const StreamSyncClientType type)
{
  ?Com_StreamSyncEntry_SetSingleModelIndex@@YAXAEATComStreamSyncEntry@@IW4StreamSyncClientType@@@Z(outSyncEntry, modelIndex, type);
}

/*
==============
Com_StreamSyncEntry_GetSingleModelIndex
==============
*/

unsigned int __fastcall Com_StreamSyncEntry_GetSingleModelIndex(const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  return ?Com_StreamSyncEntry_GetSingleModelIndex@@YAIAEBTComStreamSyncEntry@@W4StreamSyncClientType@@@Z(syncEntry, type);
}

/*
==============
Com_StreamSyncEntry_GetWeapon
==============
*/

const Weapon *__fastcall Com_StreamSyncEntry_GetWeapon(const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  return ?Com_StreamSyncEntry_GetWeapon@@YAAEBUWeapon@@AEBTComStreamSyncEntry@@W4StreamSyncClientType@@@Z(syncEntry, type);
}

/*
==============
Com_StreamSyncEntry_SetSingleModelIndex
==============
*/
void Com_StreamSyncEntry_SetSingleModelIndex(ComStreamSyncEntry *outSyncEntry, const unsigned int modelIndex, const StreamSyncClientType type)
{
  if ( Com_StreamSyncEntry_GetType(type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
    __debugbreak();
  *(__m256i *)&outSyncEntry->singleModelIndex = (__m256i)0;
  *(_OWORD *)&outSyncEntry->weapon.attachmentVariationIndices[5] = 0ui64;
  *(double *)&outSyncEntry->weapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&outSyncEntry->weapon.weaponCamo = 0;
  outSyncEntry->singleModelIndex = truncate_cast<unsigned short,unsigned int>(modelIndex);
}

/*
==============
Com_StreamSyncEntry_GetSingleModelIndex
==============
*/
__int64 Com_StreamSyncEntry_GetSingleModelIndex(const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  if ( Com_StreamSyncEntry_GetType(type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
    __debugbreak();
  return syncEntry->singleModelIndex;
}

/*
==============
Com_StreamSyncEntry_GetWeapon
==============
*/
const ComStreamSyncEntry *Com_StreamSyncEntry_GetWeapon(const ComStreamSyncEntry *syncEntry, const StreamSyncClientType type)
{
  if ( Com_StreamSyncEntry_GetType(type) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 122, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
    __debugbreak();
  return syncEntry;
}

