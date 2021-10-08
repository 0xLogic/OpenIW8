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
  _BYTE v8[32]; 
  __int128 v9; 
  __int64 v10; 

  _RBX = outSyncEntry;
  if ( Com_StreamSyncEntry_GetType(type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
    __debugbreak();
  memset(v8, 0, sizeof(v8));
  __asm
  {
    vmovups ymm0, [rsp+78h+var_48]
    vmovups ymmword ptr [rbx], ymm0
  }
  v9 = 0ui64;
  __asm
  {
    vmovups xmm1, [rsp+78h+var_28]
    vmovups xmmword ptr [rbx+20h], xmm1
  }
  v10 = 0i64;
  __asm
  {
    vmovsd  xmm0, [rsp+78h+var_18]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weapon.weaponCamo = 0;
  _RBX->singleModelIndex = truncate_cast<unsigned short,unsigned int>(modelIndex);
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

