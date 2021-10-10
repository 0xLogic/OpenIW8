/*
==============
SV_StreamSync_CompleteNotifyCmd
==============
*/

void __fastcall SV_StreamSync_CompleteNotifyCmd(SvClientMP *cl, msg_t *msg)
{
  ?SV_StreamSync_CompleteNotifyCmd@@YAXPEAVSvClientMP@@PEAUmsg_t@@@Z(cl, msg);
}

/*
==============
SV_StreamSync_WriteState
==============
*/

void __fastcall SV_StreamSync_WriteState(MemoryFile *memFile)
{
  ?SV_StreamSync_WriteState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_StreamSync_AddWorldWeaponLoad
==============
*/

void __fastcall SV_StreamSync_AddWorldWeaponLoad(const Weapon *weapons, const unsigned int *weaponSources, const unsigned int weaponCount)
{
  ?SV_StreamSync_AddWorldWeaponLoad@@YAXPEBUWeapon@@PEBII@Z(weapons, weaponSources, weaponCount);
}

/*
==============
SV_StreamSync_ClientHasWorldWeaponsLoaded
==============
*/

int __fastcall SV_StreamSync_ClientHasWorldWeaponsLoaded(const unsigned int clientNum, const Weapon *weapons, const unsigned int weaponCount)
{
  return ?SV_StreamSync_ClientHasWorldWeaponsLoaded@@YAHIPEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
SV_StreamSync_SpawnServer
==============
*/

void __fastcall SV_StreamSync_SpawnServer(const int isMigration, const int isRestart)
{
  ?SV_StreamSync_SpawnServer@@YAXHH@Z(isMigration, isRestart);
}

/*
==============
SV_StreamSync_GetNextPresetCustomization
==============
*/

const ClientCustomizationInfo *__fastcall SV_StreamSync_GetNextPresetCustomization()
{
  return ?SV_StreamSync_GetNextPresetCustomization@@YAPEBUClientCustomizationInfo@@XZ();
}

/*
==============
SV_StreamSync_ClientConnect
==============
*/

void __fastcall SV_StreamSync_ClientConnect(SvClientMP *const cl, const int isReconnectingClient)
{
  ?SV_StreamSync_ClientConnect@@YAXQEAVSvClientMP@@H@Z(cl, isReconnectingClient);
}

/*
==============
SV_StreamSync_AllocateMemory
==============
*/

void __fastcall SV_StreamSync_AllocateMemory(HunkUser *hunkUser, const int maxClients)
{
  ?SV_StreamSync_AllocateMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxClients);
}

/*
==============
SV_StreamSync_ClientHasBodyModelLoaded
==============
*/

int __fastcall SV_StreamSync_ClientHasBodyModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *streamSyncEntry)
{
  return ?SV_StreamSync_ClientHasBodyModelLoaded@@YAHIAEBTComStreamSyncEntry@@@Z(clientNum, streamSyncEntry);
}

/*
==============
SV_StreamSync_RunFrame
==============
*/

void SV_StreamSync_RunFrame(void)
{
  ?SV_StreamSync_RunFrame@@YAXXZ();
}

/*
==============
SV_StreamSync_PopulateClientSnapshot
==============
*/

void __fastcall SV_StreamSync_PopulateClientSnapshot(const unsigned int clientIndex, SvSnapshotStreamSyncData *outSnapshotData)
{
  ?SV_StreamSync_PopulateClientSnapshot@@YAXIAEAUSvSnapshotStreamSyncData@@@Z(clientIndex, outSnapshotData);
}

/*
==============
SV_StreamSync_AddHeadModelLoad
==============
*/

void __fastcall SV_StreamSync_AddHeadModelLoad(const unsigned int *headIndices, const unsigned int *headSources, const unsigned int headCount)
{
  ?SV_StreamSync_AddHeadModelLoad@@YAXPEBI0I@Z(headIndices, headSources, headCount);
}

/*
==============
SV_StreamSync_ClientAddViewWeaponLoad
==============
*/

void __fastcall SV_StreamSync_ClientAddViewWeaponLoad(const unsigned int clientNum, const Weapon *weapons, const unsigned int *weaponSources, const unsigned int weaponCount)
{
  ?SV_StreamSync_ClientAddViewWeaponLoad@@YAXIPEBUWeapon@@PEBII@Z(clientNum, weapons, weaponSources, weaponCount);
}

/*
==============
SV_StreamSync_WriteNoChangeSnapshot
==============
*/

void __fastcall SV_StreamSync_WriteNoChangeSnapshot(msg_t *msg)
{
  ?SV_StreamSync_WriteNoChangeSnapshot@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
SV_StreamSync_ClientAddViewModelLoad
==============
*/

void __fastcall SV_StreamSync_ClientAddViewModelLoad(const unsigned int clientIndex, const ComStreamSyncEntry *entryList, const unsigned int *sourceList, const unsigned int modelCount)
{
  ?SV_StreamSync_ClientAddViewModelLoad@@YAXIPEBTComStreamSyncEntry@@PEBII@Z(clientIndex, entryList, sourceList, modelCount);
}

/*
==============
SV_StreamSync_WriteDeltaSnapshots
==============
*/

void __fastcall SV_StreamSync_WriteDeltaSnapshots(const unsigned int clientIndex, msg_t *msg, const SvSnapshotStreamSyncData *oldData, const SvSnapshotStreamSyncData *newData)
{
  ?SV_StreamSync_WriteDeltaSnapshots@@YAXIPEAUmsg_t@@PEBUSvSnapshotStreamSyncData@@AEBU2@@Z(clientIndex, msg, oldData, newData);
}

/*
==============
SV_StreamSync_ClientHasHeadModelLoaded
==============
*/

int __fastcall SV_StreamSync_ClientHasHeadModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *streamSyncEntry)
{
  return ?SV_StreamSync_ClientHasHeadModelLoaded@@YAHIAEBTComStreamSyncEntry@@@Z(clientNum, streamSyncEntry);
}

/*
==============
SV_StreamSync_ReadState
==============
*/

void __fastcall SV_StreamSync_ReadState(MemoryFile *memFile)
{
  ?SV_StreamSync_ReadState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_Streamsync_Customization_GetNonTransientModelName
==============
*/

const char *__fastcall SV_Streamsync_Customization_GetNonTransientModelName(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  return ?SV_Streamsync_Customization_GetNonTransientModelName@@YAPEBDW4CustomizationModelType@@PEBUClientCustomizationInfo@@@Z(customizationType, customization);
}

/*
==============
SV_StreamSync_ShutdownMemory
==============
*/

void SV_StreamSync_ShutdownMemory(void)
{
  ?SV_StreamSync_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_StreamSync_GetAllocationSize
==============
*/

unsigned int __fastcall SV_StreamSync_GetAllocationSize(const int maxClients)
{
  return ?SV_StreamSync_GetAllocationSize@@YAIH@Z(maxClients);
}

/*
==============
SV_StreamSync_AddBodyModelLoad
==============
*/

void __fastcall SV_StreamSync_AddBodyModelLoad(const unsigned int *bodyIndices, const unsigned int *bodySources, const unsigned int bodyCount)
{
  ?SV_StreamSync_AddBodyModelLoad@@YAXPEBI0I@Z(bodyIndices, bodySources, bodyCount);
}

/*
==============
SV_StreamSync_HasWorldWeaponsLoaded
==============
*/

int __fastcall SV_StreamSync_HasWorldWeaponsLoaded(const Weapon *weapons, const unsigned int weaponCount)
{
  return ?SV_StreamSync_HasWorldWeaponsLoaded@@YAHPEBUWeapon@@I@Z(weapons, weaponCount);
}

/*
==============
SV_StreamSync_ClientHasViewModelLoaded
==============
*/

int __fastcall SV_StreamSync_ClientHasViewModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *modelList, const unsigned int modelCount)
{
  return ?SV_StreamSync_ClientHasViewModelLoaded@@YAHIPEBTComStreamSyncEntry@@I@Z(clientNum, modelList, modelCount);
}

/*
==============
SV_StreamSync_ClientFree
==============
*/

void __fastcall SV_StreamSync_ClientFree(SvClientMP *cl)
{
  ?SV_StreamSync_ClientFree@@YAXPEAVSvClientMP@@@Z(cl);
}

/*
==============
SV_StreamSync_ClientHasViewWeaponsLoaded
==============
*/

int __fastcall SV_StreamSync_ClientHasViewWeaponsLoaded(const unsigned int clientNum, const Weapon *weapons, const unsigned int weaponCount)
{
  return ?SV_StreamSync_ClientHasViewWeaponsLoaded@@YAHIPEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
SV_StreamSync_AddBodyModelLoad
==============
*/
void SV_StreamSync_AddBodyModelLoad(const unsigned int *bodyIndices, const unsigned int *bodySources, const unsigned int bodyCount)
{
  __int64 v3; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v7; 
  ComStreamSyncEntry *p_models; 
  __int64 v9; 
  const unsigned int *v10; 
  signed __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  ComStreamSyncEntry models; 

  v3 = bodyCount;
  if ( !bodyIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1315, ASSERT_TYPE_ASSERT, "( bodyIndices )", (const char *)&queryFormat, "bodyIndices") )
    __debugbreak();
  if ( !bodySources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1316, ASSERT_TYPE_ASSERT, "( bodySources )", (const char *)&queryFormat, "bodySources") )
    __debugbreak();
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_BODY, SvClient::ms_clientCount);
  v7 = MaxWorldEntryCount;
  if ( MaxWorldEntryCount > 0x30 )
  {
    LODWORD(v13) = MaxWorldEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1320, ASSERT_TYPE_ASSERT, "( maxModelCount ) <= ( ( sizeof( *array_counter( modelList ) ) + 0 ) )", "maxModelCount not in [0, ARRAY_COUNT( modelList )]\n\t%u not in [0, %u]", v13, 48) )
      __debugbreak();
  }
  if ( v7 > s_streamSyncListEntryCount )
  {
    LODWORD(v14) = s_streamSyncListEntryCount;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1321, ASSERT_TYPE_ASSERT, "( maxModelCount ) <= ( s_streamSyncListEntryCount )", "maxModelCount not in [0, s_streamSyncListEntryCount]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > v7 )
  {
    LODWORD(v14) = v7;
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1322, ASSERT_TYPE_ASSERT, "( bodyCount ) <= ( maxModelCount )", "bodyCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( BG_Customization_IsEnabled() && (_DWORD)v3 )
  {
    p_models = &models;
    v9 = v3;
    v10 = bodySources;
    v11 = (char *)bodyIndices - (char *)bodySources;
    do
    {
      v12 = *(const unsigned int *)((char *)v10 + v11);
      if ( v12 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v12, "unsigned", *(const unsigned int *)((char *)v10 + v11)) )
        __debugbreak();
      if ( (unsigned __int16)v12 >= Com_StreamSync_GetModelLimit(STREAM_SYNC_CLIENT_TYPE_BODY) )
      {
        LODWORD(v14) = Com_StreamSync_GetModelLimit(STREAM_SYNC_CLIENT_TYPE_BODY);
        LODWORD(v13) = (unsigned __int16)v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1331, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIndex ) < (unsigned)( Com_StreamSync_GetModelLimit( STREAM_SYNC_CLIENT_TYPE_BODY ) )", "bodyIndex doesn't index Com_StreamSync_GetModelLimit( STREAM_SYNC_CLIENT_TYPE_BODY )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1332, ASSERT_TYPE_ASSERT, "(bodySources[itemIndex] != 0)", "%s\n\tShould not be requesting a model without a valid source", "bodySources[itemIndex] != 0") )
        __debugbreak();
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_BODY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
        __debugbreak();
      *(__m256i *)&p_models->singleModelIndex = (__m256i)0;
      *(_OWORD *)&p_models->weapon.attachmentVariationIndices[5] = 0ui64;
      *(double *)&p_models->weapon.attachmentVariationIndices[21] = 0i64;
      *(_DWORD *)&p_models->weapon.weaponCamo = 0;
      p_models->singleModelIndex = truncate_cast<unsigned short,unsigned int>((unsigned __int16)v12);
      ++p_models;
      ++v10;
      --v9;
    }
    while ( v9 );
    if ( bodyCount )
      SV_StreamSync_DataList_UpdateServerList(STREAM_SYNC_WORLD_TYPE_BODY, &models, bodySources, bodyCount);
  }
}

/*
==============
SV_StreamSync_AddHeadModelLoad
==============
*/
void SV_StreamSync_AddHeadModelLoad(const unsigned int *headIndices, const unsigned int *headSources, const unsigned int headCount)
{
  __int64 v3; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v7; 
  ComStreamSyncEntry *p_models; 
  __int64 v9; 
  const unsigned int *v10; 
  signed __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  ComStreamSyncEntry models; 

  v3 = headCount;
  if ( !headIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1368, ASSERT_TYPE_ASSERT, "( headIndices )", (const char *)&queryFormat, "headIndices") )
    __debugbreak();
  if ( !headSources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1369, ASSERT_TYPE_ASSERT, "( headSources )", (const char *)&queryFormat, "headSources") )
    __debugbreak();
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_HEAD, SvClient::ms_clientCount);
  v7 = MaxWorldEntryCount;
  if ( MaxWorldEntryCount > 0x30 )
  {
    LODWORD(v13) = MaxWorldEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1373, ASSERT_TYPE_ASSERT, "( maxModelCount ) <= ( ( sizeof( *array_counter( modelList ) ) + 0 ) )", "maxModelCount not in [0, ARRAY_COUNT( modelList )]\n\t%u not in [0, %u]", v13, 48) )
      __debugbreak();
  }
  if ( v7 > s_streamSyncListEntryCount )
  {
    LODWORD(v14) = s_streamSyncListEntryCount;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1374, ASSERT_TYPE_ASSERT, "( maxModelCount ) <= ( s_streamSyncListEntryCount )", "maxModelCount not in [0, s_streamSyncListEntryCount]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > v7 )
  {
    LODWORD(v14) = v7;
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "( headCount ) <= ( maxModelCount )", "headCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( BG_Customization_IsEnabled() && (_DWORD)v3 )
  {
    p_models = &models;
    v9 = v3;
    v10 = headSources;
    v11 = (char *)headIndices - (char *)headSources;
    do
    {
      v12 = *(const unsigned int *)((char *)v10 + v11);
      if ( v12 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v12, "unsigned", *(const unsigned int *)((char *)v10 + v11)) )
        __debugbreak();
      if ( (unsigned __int16)v12 >= Com_StreamSync_GetModelLimit(STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL) )
      {
        LODWORD(v14) = Com_StreamSync_GetModelLimit(STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL);
        LODWORD(v13) = (unsigned __int16)v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(unsigned)( headIndex ) < (unsigned)( Com_StreamSync_GetModelLimit( STREAM_SYNC_CLIENT_TYPE_HEAD ) )", "headIndex doesn't index Com_StreamSync_GetModelLimit( STREAM_SYNC_CLIENT_TYPE_HEAD )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1385, ASSERT_TYPE_ASSERT, "(headSources[itemIndex] != 0)", "%s\n\tShould not be requesting a model without a valid source", "headSources[itemIndex] != 0") )
        __debugbreak();
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
        __debugbreak();
      *(__m256i *)&p_models->singleModelIndex = (__m256i)0;
      *(_OWORD *)&p_models->weapon.attachmentVariationIndices[5] = 0ui64;
      *(double *)&p_models->weapon.attachmentVariationIndices[21] = 0i64;
      *(_DWORD *)&p_models->weapon.weaponCamo = 0;
      p_models->singleModelIndex = truncate_cast<unsigned short,unsigned int>((unsigned __int16)v12);
      ++p_models;
      ++v10;
      --v9;
    }
    while ( v9 );
    if ( headCount )
      SV_StreamSync_DataList_UpdateServerList(STREAM_SYNC_WORLD_TYPE_HEAD, &models, headSources, headCount);
  }
}

/*
==============
SV_StreamSync_AddWorldWeaponLoad
==============
*/
void SV_StreamSync_AddWorldWeaponLoad(const Weapon *weapons, const unsigned int *weaponSources, const unsigned int weaponCount)
{
  __int64 v3; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v7; 
  ComStreamSyncEntry *p_models; 
  signed __int64 v9; 
  __int64 v10; 
  __int128 v11; 
  int v12; 
  double v13; 
  __int64 v14; 
  __int64 v15; 
  ComStreamSyncEntry models; 

  v3 = weaponCount;
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1550, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( !weaponSources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1551, ASSERT_TYPE_ASSERT, "( weaponSources )", (const char *)&queryFormat, "weaponSources") )
    __debugbreak();
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, SvClient::ms_clientCount);
  v7 = MaxWorldEntryCount;
  if ( MaxWorldEntryCount > 0x40 )
  {
    LODWORD(v14) = MaxWorldEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1555, ASSERT_TYPE_ASSERT, "( maxModelListCount ) <= ( ( sizeof( *array_counter( weaponList ) ) + 0 ) )", "maxModelListCount not in [0, ARRAY_COUNT( weaponList )]\n\t%u not in [0, %u]", v14, 64) )
      __debugbreak();
  }
  if ( v7 > s_streamSyncListEntryCount )
  {
    LODWORD(v15) = s_streamSyncListEntryCount;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1556, ASSERT_TYPE_ASSERT, "( maxModelListCount ) <= ( s_streamSyncListEntryCount )", "maxModelListCount not in [0, s_streamSyncListEntryCount]\n\t%u not in [0, %u]", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > v7 )
  {
    LODWORD(v15) = v7;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1557, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( maxModelListCount )", "weaponCount not in [0, maxModelListCount]\n\t%u not in [0, %u]", v14, v15) )
      __debugbreak();
  }
  if ( (_DWORD)v3 )
  {
    p_models = &models;
    v9 = (char *)weapons - (char *)&models;
    v10 = v3;
    do
    {
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
        __debugbreak();
      v11 = *(_OWORD *)&p_models->weapon.attachmentVariationIndices[v9 + 5];
      v12 = *(_DWORD *)&p_models->weapon.attachmentVariationIndices[v9 + 29];
      *(__m256i *)&p_models->singleModelIndex = *(__m256i *)((char *)&p_models->singleModelIndex + v9);
      v13 = *(double *)&p_models->weapon.attachmentVariationIndices[v9 + 21];
      *(_OWORD *)&p_models->weapon.attachmentVariationIndices[5] = v11;
      *(double *)&p_models->weapon.attachmentVariationIndices[21] = v13;
      *(_DWORD *)&p_models->weapon.weaponCamo = v12;
      ++p_models;
      --v10;
    }
    while ( v10 );
    SV_StreamSync_DataList_UpdateServerList(STREAM_SYNC_WORLD_TYPE_WEAPON, &models, weaponSources, v3);
  }
}

/*
==============
SV_StreamSync_AllocateMemory
==============
*/
void SV_StreamSync_AllocateMemory(HunkUser *hunkUser, const int maxClients)
{
  __int64 v2; 
  unsigned int v4; 
  int v5; 
  int v6; 
  signed int v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  char *v12; 
  unsigned int v13; 
  SvStreamSyncItem *v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  _QWORD *v19; 
  bool v20; 
  SvStreamSyncItem **p_items; 
  const char *v22; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  char *v32; 
  int v33; 
  SvStreamSyncItem *v34; 
  unsigned int v36; 
  int v37; 
  int v38; 

  v2 = maxClients;
  v4 = 104 * maxClients;
  if ( s_clientSyncData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 745, ASSERT_TYPE_ASSERT, "( s_clientSyncData == nullptr )", (const char *)&queryFormat, "s_clientSyncData == nullptr") )
    __debugbreak();
  s_clientSyncData = (SvStreamSyncClientData *)Mem_HunkUser_AllocInternal(hunkUser, v4, 0x80ui64, "SV_StreamSync_AllocateMemory");
  v5 = 20;
  if ( (int)v2 <= 20 )
    v5 = v2;
  v6 = 2 * v5;
  v7 = v6 + 24;
  v8 = v6 + 8;
  if ( v7 < v8 )
    v7 = v8;
  v9 = 216 * v7;
  v36 = v7;
  v10 = 72 * v7;
  v37 = 72 * v7;
  v11 = 432 * v2 * v7;
  v28 = 216 * v7;
  v29 = v11;
  v32 = (char *)Mem_HunkUser_AllocInternal(hunkUser, v11, 0x80ui64, "SV_StreamSync_AllocateMemory");
  v12 = v32;
  v13 = 0;
  v34 = (SvStreamSyncItem *)Mem_HunkUser_AllocInternal(hunkUser, v9, 0x80ui64, "SV_StreamSync_AllocateMemory");
  v33 = (int)v32;
  v14 = v34;
  v31 = v2;
  if ( (int)v2 > 0 )
  {
    v15 = (int)v32;
    v16 = v10 - (_DWORD)v32;
    v17 = 0i64;
    v30 = 0i64;
    do
    {
      v18 = 0;
      v19 = (SvStreamSyncItem **)((char *)&s_clientSyncData->itemLists[0].items + v17);
      do
      {
        if ( v16 + (int)v12 > v11 )
        {
          LODWORD(v27) = v11;
          LODWORD(v26) = v37 + (_DWORD)v12 - v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 767, ASSERT_TYPE_ASSERT, "( static_cast<uint>( reinterpret_cast<const byte *>( clientSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( clientSyncDataStart ) ) ) <= ( clientSyncListSize * maxClients )", "static_cast<uint>( reinterpret_cast<const byte *>( clientSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( clientSyncDataStart ) ) <= clientSyncListSize * maxClients\n\t%i, %i", v26, v27) )
            __debugbreak();
        }
        *v19 = v12;
        ++v18;
        v12 += 72 * v36;
        v19 += 2;
      }
      while ( v18 < 6 );
      v13 = 0;
      v17 = v30 + 104;
      LODWORD(v32) = (_DWORD)v12;
      v20 = v31-- == 1;
      v30 += 104i64;
    }
    while ( !v20 );
    v14 = v34;
    v10 = v37;
  }
  p_items = &s_serverSyncData.itemLists[0].items;
  v22 = "static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) <= serverSyncListSize\n\t%i, %i";
  v38 = (int)v14;
  v23 = v10 - (_DWORD)v14;
  v24 = (int)v14;
  do
  {
    if ( (int)v14 + v23 > v28 )
    {
      LODWORD(v27) = v28;
      LODWORD(v26) = v10 + (_DWORD)v14 - v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 775, ASSERT_TYPE_ASSERT, "( static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) ) <= ( serverSyncListSize )", "static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) <= serverSyncListSize\n\t%i, %i", v26, v27) )
        __debugbreak();
      v22 = "static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems + syncListEntryCount ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) <= serverSyncListSize\n\t%i, %i";
    }
    *p_items = v14;
    ++v13;
    v14 += v36;
    p_items += 2;
  }
  while ( v13 < 3 );
  if ( (_DWORD)v32 - v33 != v29 )
  {
    LODWORD(v27) = v29;
    LODWORD(v26) = (_DWORD)v32 - v33;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 780, ASSERT_TYPE_ASSERT, "( static_cast<uint>( reinterpret_cast<const byte *>( clientSyncDataItems ) - reinterpret_cast<const byte *>( clientSyncDataStart ) ) ) == ( clientSyncListSize * maxClients )", "static_cast<uint>( reinterpret_cast<const byte *>( clientSyncDataItems ) - reinterpret_cast<const byte *>( clientSyncDataStart ) ) == clientSyncListSize * maxClients\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  v25 = (_DWORD)v14 - v38;
  if ( v25 != v28 )
  {
    LODWORD(v27) = v28;
    LODWORD(v26) = v25;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 781, ASSERT_TYPE_ASSERT, "( static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) ) == ( serverSyncListSize )", "static_cast<uint>( reinterpret_cast<const byte *>( serverSyncDataItems ) - reinterpret_cast<const byte *>( serverSyncDataStart ) ) == serverSyncListSize\n\t%i, %i", v26, v27) )
      __debugbreak();
  }
  s_clientSyncDataCount = maxClients;
  s_streamSyncListEntryCount = v36;
  SV_StreamSync_Reset(v22);
}

/*
==============
SV_StreamSync_ArchiveClientsState
==============
*/
void SV_StreamSync_ArchiveClientsState(MemoryFile *memFile)
{
  int v1; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  __int64 v7; 
  char *v8; 
  char *v9; 
  unsigned int v10; 
  void **v11; 
  void **v12; 
  void **v13; 
  unsigned int i; 
  void *v15; 
  signed int v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  char v19[48]; 

  v1 = SvClient::ms_clientCount;
  v3 = 20;
  v4 = 20;
  v5 = 20;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v4 = SvClient::ms_clientCount;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v5 = SvClient::ms_clientCount;
  if ( (int)(2 * v4 + 24) >= (int)(2 * v5 + 8) )
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v3 = SvClient::ms_clientCount;
    v6 = 2 * v3 + 24;
  }
  else
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v3 = SvClient::ms_clientCount;
    v6 = 2 * v3 + 8;
  }
  if ( v6 != s_streamSyncListEntryCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1665, ASSERT_TYPE_ASSERT, "( syncListEntryCount ) == ( s_streamSyncListEntryCount )", "syncListEntryCount == s_streamSyncListEntryCount\n\t%i, %i", v6, s_streamSyncListEntryCount) )
      __debugbreak();
    v1 = SvClient::ms_clientCount;
  }
  v16 = 0;
  if ( v1 > 0 )
  {
    v7 = 0i64;
    v18 = 72 * v6;
    v17 = 0i64;
    do
    {
      v8 = v19;
      v9 = (char *)s_clientSyncData + v7;
      v10 = 0;
      v11 = (void **)((char *)&s_clientSyncData->itemLists[0].items + v7);
      v12 = v11;
      do
      {
        if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1676, ASSERT_TYPE_ASSERT, "( clientSyncData->itemLists[itemListIndex].items )", (const char *)&queryFormat, "clientSyncData->itemLists[itemListIndex].items") )
          __debugbreak();
        ++v10;
        *(_QWORD *)v8 = *v12;
        v12 += 2;
        v8 += 8;
      }
      while ( v10 < 6 );
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
        __debugbreak();
      memFile->archiveProc(memFile, 104ui64, v9);
      v13 = (void **)v19;
      for ( i = 0; i < 6; ++i )
      {
        v15 = *v13;
        *v11 = *v13;
        if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
          __debugbreak();
        memFile->archiveProc(memFile, v18, v15);
        ++v13;
        v11 += 2;
      }
      v7 = v17 + 104;
      ++v16;
      v17 += 104i64;
    }
    while ( v16 < (int)SvClient::ms_clientCount );
  }
}

/*
==============
SV_StreamSync_ArchiveWorldState
==============
*/
void SV_StreamSync_ArchiveWorldState(MemoryFile *memFile)
{
  unsigned int v1; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  SvStreamSyncItem **p_items; 
  char *v7; 
  unsigned int v8; 
  SvStreamSyncItem **v9; 
  unsigned int v10; 
  void **v11; 
  void *v12; 
  char v13[24]; 

  v1 = 20;
  v3 = 20;
  v4 = 20;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v3 = SvClient::ms_clientCount;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v4 = SvClient::ms_clientCount;
  if ( (int)(2 * v3 + 24) >= (int)(2 * v4 + 8) )
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v1 = SvClient::ms_clientCount;
    v5 = 2 * v1 + 24;
  }
  else
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v1 = SvClient::ms_clientCount;
    v5 = 2 * v1 + 8;
  }
  if ( v5 != s_streamSyncListEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1696, ASSERT_TYPE_ASSERT, "( syncListEntryCount ) == ( s_streamSyncListEntryCount )", "syncListEntryCount == s_streamSyncListEntryCount\n\t%i, %i", v5, s_streamSyncListEntryCount) )
    __debugbreak();
  p_items = &s_serverSyncData.itemLists[0].items;
  v7 = v13;
  v8 = 0;
  v9 = &s_serverSyncData.itemLists[0].items;
  do
  {
    if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1703, ASSERT_TYPE_ASSERT, "( s_serverSyncData.itemLists[itemListIndex].items )", (const char *)&queryFormat, "s_serverSyncData.itemLists[itemListIndex].items") )
      __debugbreak();
    ++v8;
    *(_QWORD *)v7 = *v9;
    v9 += 2;
    v7 += 8;
  }
  while ( v8 < 3 );
  MemFile_ArchiveData(memFile, 4872, &s_serverSyncData);
  v10 = 0;
  v11 = (void **)v13;
  do
  {
    v12 = *v11;
    *p_items = (SvStreamSyncItem *)*v11;
    if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
      __debugbreak();
    memFile->archiveProc(memFile, 72 * v5, v12);
    ++v10;
    ++v11;
    p_items += 2;
  }
  while ( v10 < 3 );
}

/*
==============
SV_StreamSync_ClientAddViewModelLoad
==============
*/
void SV_StreamSync_ClientAddViewModelLoad(const unsigned int clientIndex, const ComStreamSyncEntry *entryList, const unsigned int *sourceList, const unsigned int modelCount)
{
  SvClientMP *CommonClient; 
  unsigned int v9; 
  unsigned int LocalClientCount; 
  unsigned int MaxEntryCount; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 

  if ( clientIndex >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1260, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientIndex, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !entryList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1261, ASSERT_TYPE_ASSERT, "( entryList )", (const char *)&queryFormat, "entryList") )
    __debugbreak();
  if ( !sourceList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1262, ASSERT_TYPE_ASSERT, "( sourceList )", (const char *)&queryFormat, "sourceList") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientIndex);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1266, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v9 = SvClient::ms_clientCount;
  LocalClientCount = SvClientMP::GetLocalClientCount(CommonClient);
  MaxEntryCount = Com_StreamSync_GetMaxEntryCount(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, v9, LocalClientCount);
  v12 = MaxEntryCount;
  if ( MaxEntryCount > 0x14 )
  {
    LODWORD(v14) = 20;
    LODWORD(v13) = MaxEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1271, ASSERT_TYPE_ASSERT, "( maxEntryListCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxEntryListCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( modelCount > v12 )
  {
    LODWORD(v14) = v12;
    LODWORD(v13) = modelCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1272, ASSERT_TYPE_ASSERT, "( modelCount ) <= ( maxEntryListCount )", "modelCount not in [0, maxEntryListCount]\n\t%u not in [0, %u]", v13, v14) )
      __debugbreak();
  }
  if ( BG_Customization_IsEnabled() && SV_StreamSync_DataList_IsClientActive(clientIndex) )
  {
    if ( !entryList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 585, ASSERT_TYPE_ASSERT, "( entryList )", (const char *)&queryFormat, "entryList") )
      __debugbreak();
    if ( !sourceList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 586, ASSERT_TYPE_ASSERT, "( sourceList )", (const char *)&queryFormat, "sourceList") )
      __debugbreak();
    if ( !modelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 587, ASSERT_TYPE_ASSERT, "( modelListCount )", (const char *)&queryFormat, "modelListCount") )
      __debugbreak();
    if ( !BG_Customization_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 588, ASSERT_TYPE_ASSERT, "( BG_Customization_IsEnabled() )", (const char *)&queryFormat, "BG_Customization_IsEnabled()") )
      __debugbreak();
    SV_StreamSync_DataList_UpdateClientList(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, clientIndex, entryList, sourceList, modelCount);
  }
}

/*
==============
SV_StreamSync_ClientAddViewWeaponLoad
==============
*/
void SV_StreamSync_ClientAddViewWeaponLoad(const unsigned int clientNum, const Weapon *weapons, const unsigned int *weaponSources, const unsigned int weaponCount)
{
  __int64 v5; 
  __int64 v7; 
  SvClientMP *CommonClient; 
  unsigned int v9; 
  unsigned int LocalClientCount; 
  unsigned int MaxEntryCount; 
  unsigned int v12; 
  signed __int64 v13; 
  ComStreamSyncEntry *p_entries; 
  __int64 v15; 
  __int128 v16; 
  int v17; 
  double v18; 
  __int64 v19; 
  __int64 v20; 
  ComStreamSyncEntry entries; 

  v5 = weaponCount;
  v7 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1423, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1424, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v7);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1428, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v9 = SvClient::ms_clientCount;
  LocalClientCount = SvClientMP::GetLocalClientCount(CommonClient);
  MaxEntryCount = Com_StreamSync_GetMaxEntryCount(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, v9, LocalClientCount);
  v12 = MaxEntryCount;
  if ( MaxEntryCount > 0x18 )
  {
    LODWORD(v20) = 24;
    LODWORD(v19) = MaxEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1433, ASSERT_TYPE_ASSERT, "( maxEntryListCount ) <= ( (24) )", "maxEntryListCount not in [0, MAX_VIEW_WEAPONS_STREAMED]\n\t%u not in [0, %u]", v19, v20) )
      __debugbreak();
  }
  if ( (unsigned int)v5 > v12 )
  {
    LODWORD(v20) = v12;
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1434, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( maxEntryListCount )", "weaponCount not in [0, maxEntryListCount]\n\t%u not in [0, %u]", v19, v20) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= s_clientSyncDataCount )
  {
    LODWORD(v20) = s_clientSyncDataCount;
    LODWORD(v19) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( s_clientSyncData[v7].active && (_DWORD)v5 )
  {
    v13 = (char *)weapons - (char *)&entries;
    p_entries = &entries;
    v15 = v5;
    do
    {
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
        __debugbreak();
      v16 = *(_OWORD *)&p_entries->weapon.attachmentVariationIndices[v13 + 5];
      v17 = *(_DWORD *)&p_entries->weapon.attachmentVariationIndices[v13 + 29];
      *(__m256i *)&p_entries->singleModelIndex = *(__m256i *)((char *)&p_entries->singleModelIndex + v13);
      v18 = *(double *)&p_entries->weapon.attachmentVariationIndices[v13 + 21];
      *(_OWORD *)&p_entries->weapon.attachmentVariationIndices[5] = v16;
      *(double *)&p_entries->weapon.attachmentVariationIndices[21] = v18;
      *(_DWORD *)&p_entries->weapon.weaponCamo = v17;
      ++p_entries;
      --v15;
    }
    while ( v15 );
    SV_StreamSync_DataList_UpdateClientList(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, v7, &entries, weaponSources, v5);
  }
}

/*
==============
SV_StreamSync_ClientConnect
==============
*/
void SV_StreamSync_ClientConnect(SvClientMP *const cl, const int isReconnectingClient)
{
  unsigned int MpClientIndex; 
  __int64 v5; 
  clientState_t *ClientState; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  const char *Name; 
  StreamSyncWorldType i; 
  char *fmt; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1204, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  v5 = MpClientIndex;
  if ( SvClient::GetCommonClient(MpClientIndex)->state != CS_CONNECTED )
  {
    LODWORD(v16) = (unsigned __int8)SvClient::GetCommonClient(v5)->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1207, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientIndex ) ) == ( SvClientConnectionState::CS_CONNECTED )", "SvClient::GetConnectionState( clientIndex ) == SvClientConnectionState::CS_CONNECTED\n\t%i, %i", v16, 3) )
      __debugbreak();
  }
  if ( Com_StreamSync_IsEnabled() )
  {
    if ( BG_Customization_IsEnabled() )
      BG_Customization_ValidateInitialization();
    ClientState = G_MainMP_GetClientState(v5);
    v7 = ClientState->customization.modelIndex[2];
    v8 = ClientState->customization.modelIndex[0];
    v9 = ClientState->customization.modelIndex[1];
    v10 = SV_Client_GetMpClientIndex(cl);
    LODWORD(v18) = v8;
    LODWORD(v16) = v9;
    LODWORD(fmt) = isReconnectingClient;
    Com_Printf(131087, "SV_StreamSync: ClientConnect: Initializing client %i [%s]. isReconnectingClient = %i, Body = %i, Head = %i, Arms = %d.\n", v10, cl->name, fmt, v16, v18, v7);
    SV_StreamSync_DataList_ClearClientData(v5);
    v11 = s_clientSyncDataCount;
    if ( (unsigned int)v5 >= s_clientSyncDataCount )
    {
      LODWORD(v19) = s_clientSyncDataCount;
      LODWORD(v17) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v17, v19) )
        __debugbreak();
      v11 = s_clientSyncDataCount;
    }
    s_clientSyncData[v5].active = 1;
    if ( (unsigned int)v5 >= v11 )
    {
      LODWORD(v19) = v11;
      LODWORD(v17) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v17, v19) )
        __debugbreak();
    }
    if ( !s_clientSyncData[v5].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 900, ASSERT_TYPE_ASSERT, "( SV_StreamSync_DataList_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "SV_StreamSync_DataList_IsClientActive( clientIndex )") )
      __debugbreak();
    v12 = DCONST_DVARBOOL_sv_streamSync_devVerbose;
    if ( !DCONST_DVARBOOL_sv_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      Name = SV_ClientMP_GetName(v5);
      Com_Printf(131087, "SV_StreamSync: Updating client %d (%s) stream data.\n", (unsigned int)v5, Name);
    }
    for ( i = STREAM_SYNC_WORLD_TYPE_HEAD; (unsigned int)i < STREAM_SYNC_WORLD_TYPE_COUNT; ++i )
      SV_StreamSync_DataList_UpdateClientStreamDataForSyncType(v5, i);
  }
}

/*
==============
SV_StreamSync_ClientFree
==============
*/
void SV_StreamSync_ClientFree(SvClientMP *cl)
{
  unsigned int MpClientIndex; 
  __int64 v3; 
  clientState_t *ClientState; 
  char *fmt; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1232, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  v3 = MpClientIndex;
  if ( SvClient::GetCommonClient(MpClientIndex)->state <= CS_ZOMBIE )
  {
    LODWORD(v6) = (unsigned __int8)SvClient::GetCommonClient(v3)->state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1235, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientIndex ) ) > ( SvClientConnectionState::CS_ZOMBIE )", "SvClient::GetConnectionState( clientIndex ) > SvClientConnectionState::CS_ZOMBIE\n\t%i, %i", v6, 1) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_clientSyncDataCount )
  {
    LODWORD(v8) = s_clientSyncDataCount;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( s_clientSyncData[v3].active )
  {
    ClientState = G_MainMP_GetClientState(v3);
    LODWORD(v8) = ClientState->customization.modelIndex[2];
    LODWORD(v6) = ClientState->customization.modelIndex[1];
    LODWORD(fmt) = ClientState->customization.modelIndex[0];
    Com_Printf(15, "SV_StreamSync: ClientDropped: We removed client %i [%s] customization data (Body %d Head = %d Viewarms = %d).\n", (unsigned int)v3, cl->name, fmt, v6, v8);
    SV_StreamSync_DataList_MarkClientInactive(v3);
    SV_StreamSync_DataList_ClearClientData(v3);
    if ( (unsigned int)v3 >= s_clientSyncDataCount )
    {
      LODWORD(v9) = s_clientSyncDataCount;
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( s_clientSyncData[v3].active )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1249, ASSERT_TYPE_ASSERT, "( !SV_StreamSync_DataList_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "!SV_StreamSync_DataList_IsClientActive( clientIndex )") )
        __debugbreak();
    }
  }
}

/*
==============
SV_StreamSync_ClientHasBodyModelLoaded
==============
*/
int SV_StreamSync_ClientHasBodyModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *streamSyncEntry)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  unsigned int v8; 

  v3 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v8 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1346, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_clientSyncDataCount )
  {
    LODWORD(v7) = s_clientSyncDataCount;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v3].active || SV_ClientMP_IsTestClient(v3) || SV_BotIsBot(v3) )
    return 1;
  else
    return SV_StreamSync_DataList_HasLoadedModelStreamData(v3, STREAM_SYNC_CLIENT_TYPE_BODY, streamSyncEntry);
}

/*
==============
SV_StreamSync_ClientHasHeadModelLoaded
==============
*/
int SV_StreamSync_ClientHasHeadModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *streamSyncEntry)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  unsigned int v8; 

  v3 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v8 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_clientSyncDataCount )
  {
    LODWORD(v7) = s_clientSyncDataCount;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v3].active || SV_ClientMP_IsTestClient(v3) || SV_BotIsBot(v3) )
    return 1;
  else
    return SV_StreamSync_DataList_HasLoadedModelStreamData(v3, STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL, streamSyncEntry);
}

/*
==============
SV_StreamSync_ClientHasViewModelLoaded
==============
*/
int SV_StreamSync_ClientHasViewModelLoaded(const unsigned int clientNum, const ComStreamSyncEntry *modelList, const unsigned int modelCount)
{
  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1288, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !modelList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1289, ASSERT_TYPE_ASSERT, "( modelList )", (const char *)&queryFormat, "modelList") )
    __debugbreak();
  if ( !BG_Customization_IsEnabled() || !SV_StreamSync_DataList_IsClientActive(clientNum) || SV_ClientMP_IsTestClient(clientNum) || SV_BotIsBot(clientNum) )
    return 1;
  else
    return SV_StreamSync_DataList_ViewHands_HasStreamData(clientNum, modelList, modelCount);
}

/*
==============
SV_StreamSync_ClientHasViewWeaponsLoaded
==============
*/
__int64 SV_StreamSync_ClientHasViewWeaponsLoaded(const unsigned int clientNum, const Weapon *weapons, const unsigned int weaponCount)
{
  __int64 v4; 
  unsigned int v6; 
  __int128 v7; 
  int v8; 
  double v9; 
  __int64 v11; 
  __int64 v12; 
  ComStreamSyncEntry streamSyncEntry; 

  v4 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1460, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1461, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( (unsigned int)v4 >= s_clientSyncDataCount )
  {
    LODWORD(v12) = s_clientSyncDataCount;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v4].active )
    return 1i64;
  if ( SV_ClientMP_IsTestClient(v4) )
    return 1i64;
  if ( SV_BotIsBot(v4) )
    return 1i64;
  v6 = 0;
  if ( !weaponCount )
    return 1i64;
  while ( 1 )
  {
    if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
      __debugbreak();
    v7 = *(_OWORD *)&weapons->attachmentVariationIndices[5];
    v8 = *(_DWORD *)&weapons->weaponCamo;
    *(__m256i *)&streamSyncEntry.singleModelIndex = *(__m256i *)&weapons->weaponIdx;
    v9 = *(double *)&weapons->attachmentVariationIndices[21];
    *(_DWORD *)&streamSyncEntry.weapon.weaponCamo = v8;
    *(double *)&streamSyncEntry.weapon.attachmentVariationIndices[21] = v9;
    *(_OWORD *)&streamSyncEntry.weapon.attachmentVariationIndices[5] = v7;
    if ( !SV_StreamSync_DataList_HasLoadedModelStreamData(v4, STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, &streamSyncEntry) )
      break;
    ++v6;
    ++weapons;
    if ( v6 >= weaponCount )
      return 1i64;
  }
  return 0i64;
}

/*
==============
SV_StreamSync_ClientHasWorldWeaponsLoaded
==============
*/
__int64 SV_StreamSync_ClientHasWorldWeaponsLoaded(const unsigned int clientNum, const Weapon *weapons, const unsigned int weaponCount)
{
  __int64 v3; 
  const Weapon *v5; 
  unsigned int v6; 
  __int128 v7; 
  int v8; 
  double v9; 
  __int64 v11; 
  ComStreamSyncEntry streamSyncEntry; 

  v3 = clientNum;
  v5 = weapons;
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1495, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( (unsigned int)v3 >= s_clientSyncDataCount )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v11, s_clientSyncDataCount) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v3].active )
    return 1i64;
  if ( SV_ClientMP_IsTestClient(v3) )
    return 1i64;
  if ( SV_BotIsBot(v3) )
    return 1i64;
  v6 = 0;
  if ( !weaponCount )
    return 1i64;
  while ( 1 )
  {
    if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
      __debugbreak();
    v7 = *(_OWORD *)&v5->attachmentVariationIndices[5];
    v8 = *(_DWORD *)&v5->weaponCamo;
    *(__m256i *)&streamSyncEntry.singleModelIndex = *(__m256i *)&v5->weaponIdx;
    v9 = *(double *)&v5->attachmentVariationIndices[21];
    *(_DWORD *)&streamSyncEntry.weapon.weaponCamo = v8;
    *(double *)&streamSyncEntry.weapon.attachmentVariationIndices[21] = v9;
    *(_OWORD *)&streamSyncEntry.weapon.attachmentVariationIndices[5] = v7;
    if ( !SV_StreamSync_DataList_HasLoadedModelStreamData(v3, STREAM_SYNC_CLIENT_TYPE_WEAPON, &streamSyncEntry) )
      break;
    ++v6;
    ++v5;
    if ( v6 >= weaponCount )
      return 1i64;
  }
  return 0i64;
}

/*
==============
SV_StreamSync_CompleteNotifyCmd
==============
*/
void SV_StreamSync_CompleteNotifyCmd(SvClientMP *cl, msg_t *msg)
{
  StreamSyncClientType Byte; 
  StreamSyncClientType v5; 
  ComStreamSyncEntryType Type; 
  Weapon *v7; 
  int v8; 
  unsigned int Long; 
  unsigned int ModelLimit; 
  unsigned int MpClientIndex; 
  unsigned int i; 
  SvClientMP *MpClient; 
  unsigned int fmt; 
  __int64 v15; 
  double v16; 
  __int128 v17; 
  __m256i v18; 
  Weapon result; 
  ComStreamSyncEntry outSyncEntry; 

  if ( msg->readcount == msg->cursize + msg->splitSize )
  {
    Com_PrintError(15, "SV_StreamSync: '%s' msg is already fully read.\n", "SV_StreamSync_CompleteNotifyCmd");
    return;
  }
  Byte = MSG_ReadByte(msg);
  v5 = Byte;
  if ( (unsigned int)Byte >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    Com_PrintError(15, "SV_StreamSync: '%s' msg has invalid customizationType '%d'\n", "SV_StreamSync_CompleteNotifyCmd", (unsigned int)Byte);
    return;
  }
  Type = Com_StreamSyncEntry_GetType(Byte);
  if ( Type )
  {
    if ( Type != WEAPON )
    {
      Com_PrintError(15, "SV_StreamSync: Unknown ComStreamSyncModelType : %d\n", (unsigned int)Type);
      return;
    }
    v7 = MSG_ReadWeapon(&result, msg);
    v8 = *(_DWORD *)&v7->weaponCamo;
    v18 = *(__m256i *)&v7->weaponIdx;
    v17 = *(_OWORD *)&v7->attachmentVariationIndices[5];
    v16 = *(double *)&v7->attachmentVariationIndices[21];
    if ( Com_StreamSyncEntry_GetType(v5) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
      __debugbreak();
    *(__m256i *)&outSyncEntry.singleModelIndex = v18;
    *(double *)&outSyncEntry.weapon.attachmentVariationIndices[21] = v16;
    *(_OWORD *)&outSyncEntry.weapon.attachmentVariationIndices[5] = v17;
    *(_DWORD *)&outSyncEntry.weapon.weaponCamo = v8;
  }
  else
  {
    Long = MSG_ReadLong(msg);
    ModelLimit = Com_StreamSync_GetModelLimit(v5);
    if ( Long >= ModelLimit )
    {
      fmt = ModelLimit;
      Com_PrintError(15, "SV_StreamSync: '%s' msg has invalid modelIndex '%d' vs limit of '%d'.\n", "SV_StreamSync_CompleteNotifyCmd", Long, fmt);
      return;
    }
    Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, Long, v5);
  }
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1157, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( msg ) )", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  if ( SV_StreamSync_DataList_IsClientActive(MpClientIndex) )
  {
    SV_StreamSync_DataList_SetClientLoadedState(MpClientIndex, v5, &outSyncEntry);
    if ( cl->bIsSplitscreenClient )
    {
      for ( i = 0; i < SvClient::ms_clientCount; ++i )
      {
        if ( MpClientIndex != i )
        {
          if ( SV_StreamSync_DataList_IsClientActive(i) )
          {
            MpClient = SV_Client_GetMpClient(i);
            if ( MpClient->bIsSplitscreenClient )
            {
              if ( SV_HaveSameNetworkAddress(MpClientIndex, i) )
              {
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_sv_streamSync_devVerbose, "sv_streamSync_devVerbose") )
                  Com_Printf(15, "SV_StreamSync: Split screen client %i [%s] also marked for having loaded that data.\n", i, MpClient->name);
                SV_StreamSync_DataList_SetClientLoadedState(i, v5, &outSyncEntry);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    LODWORD(v15) = (unsigned __int8)cl->state;
    Com_PrintError(15, "SV_StreamSync: '%s' msg received for a client (%i %s) in an incorrect state '%i'.\n", "SV_StreamSync_CompleteNotifyCmd", MpClientIndex, cl->name, v15);
  }
}

/*
==============
SV_StreamSync_DataList_AddItemForType
==============
*/
__int64 SV_StreamSync_DataList_AddItemForType(const StreamSyncClientType clientStreamType, const ComStreamSyncEntry *streamSyncEntry, const unsigned int source, SvStreamSyncList *itemList, const unsigned int maxItemListCount)
{
  int ItemIndex; 
  unsigned int itemCount; 
  __int64 v11; 
  unsigned __int8 v12; 
  unsigned __int8 *p_source; 
  __int64 v14; 
  SvStreamSyncItem *items; 
  SvStreamSyncItem *v16; 
  __int64 result; 
  __int64 v18; 
  char *fmt; 
  __int64 v20; 
  unsigned int outItemIndex[4]; 
  char buf[512]; 

  if ( !itemList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 251, ASSERT_TYPE_ASSERT, "( itemList )", (const char *)&queryFormat, "itemList") )
    __debugbreak();
  ItemIndex = SV_StreamSync_DataList_FindItemIndex(itemList, streamSyncEntry, outItemIndex, clientStreamType);
  itemCount = itemList->itemCount;
  if ( ItemIndex )
  {
    v11 = outItemIndex[0];
    if ( outItemIndex[0] >= itemCount )
    {
      LODWORD(v20) = outItemIndex[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( itemList->itemCount )", "itemIndex doesn't index itemList->itemCount\n\t%i not in [0, %i)", v20, itemList->itemCount) )
        __debugbreak();
    }
    if ( itemList->items[v11].loadedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 256, ASSERT_TYPE_ASSERT, "(itemList->items[itemIndex].loadedState == STREAM_SYNC_LOAD_STATE_UNLOADED)", "%s\n\tServer list should always be set to unloaded", "itemList->items[itemIndex].loadedState == STREAM_SYNC_LOAD_STATE_UNLOADED") )
      __debugbreak();
    v12 = truncate_cast<unsigned char,unsigned int>(source);
    p_source = &itemList->items[v11].source;
    if ( *p_source > v12 )
      v12 = *p_source;
    *p_source = v12;
  }
  else
  {
    if ( itemCount < maxItemListCount )
    {
      itemList->items[itemList->itemCount].source = truncate_cast<unsigned char,unsigned int>(source);
      v14 = itemList->itemCount;
      items = itemList->items;
      *(__m256i *)&items[v14].streamSyncEntry.singleModelIndex = *(__m256i *)&streamSyncEntry->singleModelIndex;
      *(_OWORD *)&items[v14].streamSyncEntry.weapon.attachmentVariationIndices[5] = *(_OWORD *)&streamSyncEntry->weapon.attachmentVariationIndices[5];
      v16 = &items[v14];
      *(double *)&v16->streamSyncEntry.weapon.attachmentVariationIndices[21] = *(double *)&streamSyncEntry->weapon.attachmentVariationIndices[21];
      *(_DWORD *)&v16->streamSyncEntry.weapon.weaponCamo = *(_DWORD *)&streamSyncEntry->weapon.weaponCamo;
      itemList->items[itemList->itemCount].loadedState = STREAM_SYNC_LOAD_STATE_UNLOADED;
      result = 1i64;
      ++itemList->itemCount;
      return result;
    }
    if ( ((clientStreamType - 2) & 0xFFFFFFFD) != 0 )
    {
      v18 = 0i64;
      if ( itemCount )
      {
        do
        {
          Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &itemList->items[v18].streamSyncEntry, clientStreamType);
          LODWORD(fmt) = itemList->items[v18].loadedState;
          Com_Printf(15, "Client Stream Model %d: (%s) state %d\n", (unsigned int)v18, buf, fmt);
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < itemList->itemCount );
      }
      Com_StreamSyncEntry_DebugPrint(buf, 0x200u, streamSyncEntry, clientStreamType);
      LODWORD(fmt) = clientStreamType;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144107390, 956i64, maxItemListCount, fmt, buf);
    }
  }
  return 0i64;
}

/*
==============
SV_StreamSync_DataList_ClearClientData
==============
*/
void SV_StreamSync_DataList_ClearClientData(const unsigned int clientIndex)
{
  __int64 v1; 
  char *v2; 
  SvStreamSyncClientData *v3; 
  unsigned int v4; 
  unsigned int v5; 
  SvStreamSyncItem **p_items; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  size_t v11; 
  char *v12; 
  SvStreamSyncItem **v13; 
  SvStreamSyncItem *v14; 
  SvStreamSyncItem *v15; 
  SvStreamSyncItem *v16; 
  SvStreamSyncItem *v17; 
  SvStreamSyncItem *v18; 
  SvStreamSyncItem *v19; 
  __int64 v20; 
  __int64 v22; 
  unsigned int v23; 
  char v24; 
  char v25; 

  v1 = clientIndex;
  if ( clientIndex >= s_clientSyncDataCount )
  {
    v23 = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", clientIndex, v23) )
      __debugbreak();
  }
  v2 = &v24;
  v3 = &s_clientSyncData[v1];
  v4 = 0;
  v5 = 0;
  p_items = &v3->itemLists[0].items;
  do
  {
    if ( !*p_items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 100, ASSERT_TYPE_ASSERT, "( clientSyncData->itemLists[itemListIndex].items )", (const char *)&queryFormat, "clientSyncData->itemLists[itemListIndex].items") )
      __debugbreak();
    ++v5;
    *(_QWORD *)v2 = *p_items;
    p_items += 2;
    v2 += 8;
  }
  while ( v5 < 6 );
  memset_0(v3, 0, sizeof(SvStreamSyncClientData));
  v7 = 20;
  v8 = 20;
  v9 = 20;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v8 = SvClient::ms_clientCount;
  if ( (int)SvClient::ms_clientCount <= 20 )
    v9 = SvClient::ms_clientCount;
  if ( (int)(2 * v8 + 24) >= (int)(2 * v9 + 8) )
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v7 = SvClient::ms_clientCount;
    v10 = 2 * v7 + 24;
  }
  else
  {
    if ( (int)SvClient::ms_clientCount <= 20 )
      v7 = SvClient::ms_clientCount;
    v10 = 2 * v7 + 8;
  }
  if ( (_DWORD)v10 != s_streamSyncListEntryCount )
  {
    LODWORD(v22) = s_streamSyncListEntryCount;
    LODWORD(v20) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 107, ASSERT_TYPE_ASSERT, "( syncListEntryCount ) == ( s_streamSyncListEntryCount )", "syncListEntryCount == s_streamSyncListEntryCount\n\t%i, %i", v20, v22) )
      __debugbreak();
  }
  v11 = 72 * v10;
  v12 = &v25;
  v13 = &v3->itemLists[2].items;
  do
  {
    v14 = (SvStreamSyncItem *)*((_QWORD *)v12 - 2);
    *(v13 - 4) = v14;
    memset_0(v14, 0, v11);
    v15 = (SvStreamSyncItem *)*((_QWORD *)v12 - 1);
    *(v13 - 2) = v15;
    memset_0(v15, 0, v11);
    v16 = *(SvStreamSyncItem **)v12;
    *v13 = *(SvStreamSyncItem **)v12;
    memset_0(v16, 0, v11);
    v17 = (SvStreamSyncItem *)*((_QWORD *)v12 + 1);
    v13[2] = v17;
    memset_0(v17, 0, v11);
    v18 = (SvStreamSyncItem *)*((_QWORD *)v12 + 2);
    v13[4] = v18;
    memset_0(v18, 0, v11);
    v19 = (SvStreamSyncItem *)*((_QWORD *)v12 + 3);
    v13[6] = v19;
    memset_0(v19, 0, v11);
    v4 += 6;
    v12 += 48;
    v13 += 12;
  }
  while ( v4 < 6 );
}

/*
==============
SV_StreamSync_DataList_FindItemIndex
==============
*/
__int64 SV_StreamSync_DataList_FindItemIndex(const SvStreamSyncList *syncList, const ComStreamSyncEntry *streamSyncEntry, unsigned int *outItemIndex, const StreamSyncClientType clientStreamType)
{
  unsigned int itemCount; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  if ( !syncList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 225, ASSERT_TYPE_ASSERT, "( syncList )", (const char *)&queryFormat, "syncList") )
    __debugbreak();
  if ( !outItemIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 226, ASSERT_TYPE_ASSERT, "( outItemIndex )", (const char *)&queryFormat, "outItemIndex") )
    __debugbreak();
  itemCount = syncList->itemCount;
  v9 = 0i64;
  if ( syncList->itemCount )
  {
    while ( 1 )
    {
      if ( (unsigned int)v9 >= s_streamSyncListEntryCount )
      {
        LODWORD(v12) = s_streamSyncListEntryCount;
        LODWORD(v11) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( s_streamSyncListEntryCount )", "itemIndex doesn't index s_streamSyncListEntryCount\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( Com_StreamSyncEntry_AreEqual(&syncList->items[v9].streamSyncEntry, streamSyncEntry, clientStreamType) )
        break;
      itemCount = syncList->itemCount;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= syncList->itemCount )
        goto LABEL_13;
    }
    *outItemIndex = v9;
    return 1i64;
  }
  else
  {
LABEL_13:
    *outItemIndex = itemCount;
    return 0i64;
  }
}

/*
==============
SV_StreamSync_DataList_GetClientSyncList
==============
*/
SvStreamSyncList *SV_StreamSync_DataList_GetClientSyncList(const unsigned int clientIndex, const StreamSyncClientType streamType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  unsigned int v9; 

  v2 = streamType;
  v3 = clientIndex;
  if ( clientIndex >= s_clientSyncDataCount )
  {
    v9 = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", clientIndex, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 6 )
  {
    LODWORD(v8) = 6;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( ( sizeof( *array_counter( s_clientSyncData[clientIndex].itemLists ) ) + 0 ) )", "streamType doesn't index ARRAY_COUNT( s_clientSyncData[clientIndex].itemLists )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = v3;
  if ( !s_clientSyncData[v4].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(s_clientSyncData[clientIndex].active)", "%s\n\tAttempting to access the data of an inactive client", "s_clientSyncData[clientIndex].active") )
    __debugbreak();
  return (SvStreamSyncList *)((char *)s_clientSyncData + 16 * v2 + v4 * 104);
}

/*
==============
SV_StreamSync_DataList_HasLoadedModelStreamData
==============
*/
__int64 SV_StreamSync_DataList_HasLoadedModelStreamData(const unsigned int clientIndex, const StreamSyncClientType clientStreamType, const ComStreamSyncEntry *streamSyncEntry)
{
  unsigned int v5; 
  SvStreamSyncList *ClientSyncList; 
  int v7; 
  __int64 v8; 

  v5 = 0;
  ClientSyncList = SV_StreamSync_DataList_GetClientSyncList(clientIndex, clientStreamType);
  v7 = 0;
  if ( !ClientSyncList->itemCount )
    return 0i64;
  while ( 1 )
  {
    v8 = (__int64)&ClientSyncList->items[v7];
    if ( Com_StreamSyncEntry_AreEqual((const ComStreamSyncEntry *)v8, streamSyncEntry, clientStreamType) )
      break;
    if ( ++v7 >= ClientSyncList->itemCount )
      return 0i64;
  }
  if ( !*(_DWORD *)(v8 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED)", "%s\n\tClient list data should not be unloaded", "streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED") )
    __debugbreak();
  LOBYTE(v5) = *(_DWORD *)(v8 + 64) == 2;
  return v5;
}

/*
==============
SV_StreamSync_DataList_IsClientActive
==============
*/
__int64 SV_StreamSync_DataList_IsClientActive(const unsigned int clientIndex)
{
  __int64 v1; 
  unsigned int v4; 

  v1 = clientIndex;
  if ( clientIndex >= s_clientSyncDataCount )
  {
    v4 = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_clientSyncData[v1].active;
}

/*
==============
SV_StreamSync_DataList_KeepExtraPackages
==============
*/
bool SV_StreamSync_DataList_KeepExtraPackages()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_sv_streamSync_devForceUnload;
  if ( !DCONST_DVARBOOL_sv_streamSync_devForceUnload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devForceUnload") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return !v0->current.enabled;
}

/*
==============
SV_StreamSync_DataList_MarkClientInactive
==============
*/
void SV_StreamSync_DataList_MarkClientInactive(const unsigned int clientIndex)
{
  __int64 v1; 
  unsigned int v3; 

  v1 = clientIndex;
  if ( clientIndex >= s_clientSyncDataCount )
  {
    v3 = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", clientIndex, v3) )
      __debugbreak();
  }
  s_clientSyncData[v1].active = 0;
}

/*
==============
SV_StreamSync_DataList_SetClientLoadedState
==============
*/
void SV_StreamSync_DataList_SetClientLoadedState(const unsigned int clientIndex, const StreamSyncClientType clientStreamType, const ComStreamSyncEntry *streamModel)
{
  SvStreamSyncList *ClientSyncList; 
  __int64 v7; 
  int v8; 
  const dvar_t *v9; 
  char *fmt; 
  __int64 v11; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int outItemIndex[4]; 
  char buf[512]; 

  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v14 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 615, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientIndex, v14) )
      __debugbreak();
  }
  if ( (unsigned int)clientStreamType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v13) = 6;
    LODWORD(v11) = clientStreamType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "clientStreamType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  ClientSyncList = SV_StreamSync_DataList_GetClientSyncList(clientIndex, clientStreamType);
  if ( (unsigned int)SV_StreamSync_DataList_FindItemIndex(ClientSyncList, streamModel, outItemIndex, clientStreamType) )
  {
    v7 = (__int64)&ClientSyncList->items[outItemIndex[0]];
    v8 = *(_DWORD *)(v7 + 64);
    if ( v8 == 2 )
    {
      if ( !SV_Client_GetMpClient(clientIndex)->bIsSplitscreenClient )
      {
        Com_StreamSyncEntry_DebugPrint(buf, 0x200u, streamModel, clientStreamType);
        LODWORD(fmt) = clientIndex;
        Com_PrintWarning(15, "SV_StreamSync: Duplicate completion notification for model '%s' of type '%d'' for client '%d'\n", buf, (unsigned int)clientStreamType, fmt);
        *(_DWORD *)(v7 + 64) = 2;
        return;
      }
    }
    else
    {
      if ( !v8 )
      {
        Com_StreamSyncEntry_DebugPrint(buf, 0x200u, streamModel, clientStreamType);
        LODWORD(fmt) = clientIndex;
        Com_PrintError(15, "SV_StreamSync: Unexpected completion notification for model '%s' of type '%d'' for client '%d'\n", buf, (unsigned int)clientStreamType, fmt);
        *(_DWORD *)(v7 + 64) = 2;
        return;
      }
      v9 = DCONST_DVARBOOL_sv_streamSync_devVerbose;
      if ( !DCONST_DVARBOOL_sv_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devVerbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        Com_StreamSyncEntry_DebugPrint(buf, 0x200u, streamModel, clientStreamType);
        LODWORD(v11) = Sys_Milliseconds() - *(_DWORD *)(v7 + 68);
        Com_Printf(15, "SV_StreamSync: Received completion notification for client %d: %d::%s (%u ms)\n", clientIndex, (unsigned int)clientStreamType, buf, v11);
      }
    }
    *(_DWORD *)(v7 + 64) = 2;
  }
  else if ( (unsigned int)clientStreamType < STREAM_SYNC_CLIENT_TYPE_WEAPON )
  {
    Com_StreamSyncEntry_DebugPrint(buf, 0x200u, streamModel, clientStreamType);
    LODWORD(fmt) = clientIndex;
    Com_PrintError(15, "SV_StreamSync: Could not find customization model '%s' of type '%d' for client '%d'\n", buf, (unsigned int)clientStreamType, fmt);
  }
}

/*
==============
SV_StreamSync_DataList_UpdateClientList
==============
*/
void SV_StreamSync_DataList_UpdateClientList(const StreamSyncClientType clientStreamType, const unsigned int clientIndex, const ComStreamSyncEntry *entries, const unsigned int *sources, const unsigned int entryCount)
{
  __int64 v5; 
  const ComStreamSyncEntry *v7; 
  SvClientMP *CommonClient; 
  SvStreamSyncList *ClientSyncList; 
  unsigned int v11; 
  unsigned int LocalClientCount; 
  unsigned int MaxEntryCount; 
  unsigned int v14; 
  unsigned int itemCount; 
  __int64 v16; 
  const dvar_t *v17; 
  SvStreamSyncItem *items; 
  SvStreamSyncLoadState *p_loadedState; 
  __int64 v20; 
  __int64 v21; 
  SvStreamSyncList *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  const dvar_t *v27; 
  int v28; 
  const char *Name; 
  unsigned int *addingPackage; 
  unsigned int *addingPackagea; 
  unsigned int *removingPackage; 
  unsigned int *removingPackagea; 
  unsigned int *updatingPackage; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  SvStreamSyncList itemList; 
  SvStreamSyncList *existingItemList; 
  char v40; 

  v5 = clientIndex;
  v7 = entries;
  if ( !entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 487, ASSERT_TYPE_ASSERT, "( entries )", (const char *)&queryFormat, "entries") )
    __debugbreak();
  if ( !sources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 488, ASSERT_TYPE_ASSERT, "( sources )", (const char *)&queryFormat, "sources") )
    __debugbreak();
  if ( (unsigned int)v5 >= s_clientSyncDataCount )
  {
    LODWORD(addingPackage) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", addingPackage, s_clientSyncDataCount) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v5].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 489, ASSERT_TYPE_ASSERT, "( SV_StreamSync_DataList_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "SV_StreamSync_DataList_IsClientActive( clientIndex )") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v5);
  ClientSyncList = SV_StreamSync_DataList_GetClientSyncList(v5, clientStreamType);
  v11 = SvClient::ms_clientCount;
  existingItemList = ClientSyncList;
  LocalClientCount = SvClientMP::GetLocalClientCount(CommonClient);
  MaxEntryCount = Com_StreamSync_GetMaxEntryCount(clientStreamType, v11, LocalClientCount);
  v14 = MaxEntryCount;
  if ( entryCount > MaxEntryCount )
  {
    LODWORD(removingPackage) = MaxEntryCount;
    LODWORD(addingPackage) = entryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 497, ASSERT_TYPE_ASSERT, "( entryCount ) <= ( maxEntryListCount )", "entryCount not in [0, maxEntryListCount]\n\t%u not in [0, %u]", addingPackage, removingPackage) )
      __debugbreak();
  }
  if ( v14 > s_streamSyncListEntryCount )
  {
    LODWORD(removingPackage) = s_streamSyncListEntryCount;
    LODWORD(addingPackage) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 498, ASSERT_TYPE_ASSERT, "( maxEntryListCount ) <= ( s_streamSyncListEntryCount )", "maxEntryListCount <= s_streamSyncListEntryCount\n\t%i, %i", addingPackage, removingPackage) )
      __debugbreak();
  }
  itemCount = 0;
  itemList.itemCount = 0;
  itemList.items = (SvStreamSyncItem *)&v40;
  if ( entryCount )
  {
    v16 = entryCount;
    do
    {
      SV_StreamSync_DataList_AddItemForType(clientStreamType, v7++, *sources++, &itemList, v14);
      --v16;
    }
    while ( v16 );
    itemCount = itemList.itemCount;
  }
  if ( itemCount > v14 )
  {
    LODWORD(removingPackage) = v14;
    LODWORD(addingPackage) = itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 509, ASSERT_TYPE_ASSERT, "( initialModelCount ) <= ( maxEntryListCount )", "initialModelCount not in [0, maxEntryListCount]\n\t%u not in [0, %u]", addingPackage, removingPackage) )
      __debugbreak();
  }
  v17 = DCONST_DVARBOOL_sv_streamSync_devForceUnload;
  if ( !DCONST_DVARBOOL_sv_streamSync_devForceUnload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devForceUnload") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  SV_StreamSync_DataList_UpdateExistingListItems(clientStreamType, &itemList, existingItemList, v14, !v17->current.enabled, &v36, &v37, &v35);
  items = itemList.items;
  if ( itemCount )
  {
    p_loadedState = &itemList.items->loadedState;
    v20 = itemCount;
    do
    {
      if ( *p_loadedState == STREAM_SYNC_LOAD_STATE_UNLOADED )
      {
        *p_loadedState = STREAM_SYNC_LOAD_STATE_LOADING;
        *((_DWORD *)p_loadedState + 1) = Sys_Milliseconds();
      }
      p_loadedState += 18;
      --v20;
    }
    while ( v20 );
  }
  v21 = itemList.itemCount;
  v22 = existingItemList;
  v23 = s_streamSyncListEntryCount;
  existingItemList->itemCount = itemList.itemCount;
  if ( (unsigned int)v21 > v23 )
  {
    LODWORD(removingPackagea) = v23;
    LODWORD(addingPackagea) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 519, ASSERT_TYPE_ASSERT, "( buildSyncList.itemCount ) <= ( s_streamSyncListEntryCount )", "buildSyncList.itemCount <= s_streamSyncListEntryCount\n\t%i, %i", addingPackagea, removingPackagea) )
      __debugbreak();
  }
  memcpy_0(v22->items, items, 72 * v21);
  v24 = v37;
  v25 = v35;
  v26 = v36;
  if ( v37 || v36 || v35 )
  {
    v27 = DCONST_DVARBOOL_sv_streamSync_devVerbose;
    if ( !DCONST_DVARBOOL_sv_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      v28 = Sys_Milliseconds();
      Name = SV_ClientMP_GetName(v5);
      LODWORD(updatingPackage) = v26;
      LODWORD(removingPackagea) = entryCount;
      LODWORD(addingPackagea) = v28;
      Com_Printf(15, "SV_StreamSync: Updated list %d for client %d (%s) at time %u. %i Packages. Add %i Remove %i Update %i\n", (unsigned int)clientStreamType, (unsigned int)v5, Name, addingPackagea, removingPackagea, updatingPackage, v24, v25);
      SV_StreamSync_DumpClientStreamSyncList(v5, clientStreamType, v22);
    }
  }
}

/*
==============
SV_StreamSync_DataList_UpdateClientStreamDataForSyncType
==============
*/
void SV_StreamSync_DataList_UpdateClientStreamDataForSyncType(const unsigned int clientIndex, const StreamSyncWorldType worldStreamSyncType)
{
  __int64 v2; 
  __int64 v3; 
  SvStreamSyncList *v4; 
  SvStreamSyncList *ClientSyncList; 
  __int64 itemCount; 
  SvStreamSyncList *v7; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v9; 
  bool v10; 
  SvStreamSyncItem *items; 
  SvStreamSyncLoadState *p_loadedState; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int *addingPackage; 
  unsigned int *addingPackagea; 
  unsigned int *removingPackage; 
  int removingPackageb; 
  unsigned int *removingPackagea; 
  SvStreamSyncList mergedSyncList; 
  unsigned int updatingPackage; 
  unsigned int v23; 
  unsigned int v24; 
  char v25[4608]; 

  v2 = worldStreamSyncType;
  v3 = clientIndex;
  if ( (unsigned int)worldStreamSyncType >= STREAM_SYNC_WORLD_TYPE_COUNT )
  {
    removingPackageb = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( worldStreamSyncType ) < (unsigned)( StreamSyncWorldType::STREAM_SYNC_WORLD_TYPE_COUNT )", "worldStreamSyncType doesn't index StreamSyncWorldType::STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", worldStreamSyncType, removingPackageb) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_clientSyncDataCount )
  {
    LODWORD(removingPackage) = s_clientSyncDataCount;
    LODWORD(addingPackage) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", addingPackage, removingPackage) )
      __debugbreak();
  }
  if ( !s_clientSyncData[v3].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 424, ASSERT_TYPE_ASSERT, "( SV_StreamSync_DataList_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "SV_StreamSync_DataList_IsClientActive( clientIndex )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(removingPackage) = 3;
    LODWORD(addingPackage) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( worldStreamType ) < (unsigned)( ( sizeof( *array_counter( s_serverSyncData.itemLists ) ) + 0 ) )", "worldStreamType doesn't index ARRAY_COUNT( s_serverSyncData.itemLists )\n\t%i not in [0, %i)", addingPackage, removingPackage) )
      __debugbreak();
  }
  v4 = &s_serverSyncData.itemLists[v2];
  ClientSyncList = SV_StreamSync_DataList_GetClientSyncList(v3, (const StreamSyncClientType)v2);
  itemCount = v4->itemCount;
  mergedSyncList.itemCount = itemCount;
  v7 = ClientSyncList;
  mergedSyncList.items = (SvStreamSyncItem *)v25;
  if ( (unsigned int)itemCount > 0x40 )
  {
    LODWORD(removingPackage) = 64;
    LODWORD(addingPackage) = itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 435, ASSERT_TYPE_ASSERT, "( gameItemList->itemCount ) <= ( ( sizeof( *array_counter( mergedSyncListItems ) ) + 0 ) )", "gameItemList->itemCount <= ARRAY_COUNT( mergedSyncListItems )\n\t%i, %i", addingPackage, removingPackage) )
      __debugbreak();
  }
  memcpy_0(v25, v4->items, 72i64 * v4->itemCount);
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount((StreamSyncWorldType)v2, SvClient::ms_clientCount);
  v9 = MaxWorldEntryCount;
  if ( (unsigned int)itemCount > MaxWorldEntryCount )
  {
    LODWORD(removingPackage) = MaxWorldEntryCount;
    LODWORD(addingPackage) = itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 440, ASSERT_TYPE_ASSERT, "( mergedListInitialSize ) <= ( mergedListMaxSize )", "mergedListInitialSize not in [0, mergedListMaxSize]\n\t%u not in [0, %u]", addingPackage, removingPackage) )
      __debugbreak();
  }
  v10 = SV_StreamSync_DataList_KeepExtraPackages();
  SV_StreamSync_DataList_UpdateExistingListItems((const StreamSyncClientType)v2, &mergedSyncList, v7, v9, v10, &v24, &v23, &updatingPackage);
  items = mergedSyncList.items;
  if ( (_DWORD)itemCount )
  {
    p_loadedState = &mergedSyncList.items->loadedState;
    do
    {
      if ( *p_loadedState == STREAM_SYNC_LOAD_STATE_UNLOADED )
      {
        *p_loadedState = STREAM_SYNC_LOAD_STATE_LOADING;
        *((_DWORD *)p_loadedState + 1) = Sys_Milliseconds();
      }
      p_loadedState += 18;
      --itemCount;
    }
    while ( itemCount );
  }
  v13 = mergedSyncList.itemCount;
  v14 = s_streamSyncListEntryCount;
  v7->itemCount = mergedSyncList.itemCount;
  if ( (unsigned int)v13 > v14 )
  {
    LODWORD(removingPackagea) = v14;
    LODWORD(addingPackagea) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 453, ASSERT_TYPE_ASSERT, "( mergedSyncList.itemCount ) <= ( s_streamSyncListEntryCount )", "mergedSyncList.itemCount <= s_streamSyncListEntryCount\n\t%i, %i", addingPackagea, removingPackagea) )
      __debugbreak();
  }
  memcpy_0(v7->items, items, 72 * v13);
}

/*
==============
SV_StreamSync_DataList_UpdateExistingListItems
==============
*/
void SV_StreamSync_DataList_UpdateExistingListItems(const StreamSyncClientType clientStreamType, SvStreamSyncList *mergedSyncList, const SvStreamSyncList *existingItemList, const unsigned int maxMergedListCount, const bool keepExtraPackages, unsigned int *addingPackage, unsigned int *removingPackage, unsigned int *updatingPackage)
{
  const SvStreamSyncList *v8; 
  unsigned int itemCount; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  SvStreamSyncItem *items; 
  __int64 v16; 
  SvStreamSyncItem *v17; 
  unsigned int v18; 
  unsigned int v19; 
  bool v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  SvStreamSyncItem *v25; 
  __int64 v26; 
  __int64 v27; 

  v8 = existingItemList;
  if ( !mergedSyncList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 334, ASSERT_TYPE_ASSERT, "( mergedSyncList )", (const char *)&queryFormat, "mergedSyncList") )
    __debugbreak();
  if ( !addingPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 335, ASSERT_TYPE_ASSERT, "( addingPackage )", (const char *)&queryFormat, "addingPackage") )
    __debugbreak();
  if ( !removingPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 336, ASSERT_TYPE_ASSERT, "( removingPackage )", (const char *)&queryFormat, "removingPackage") )
    __debugbreak();
  if ( !updatingPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 337, ASSERT_TYPE_ASSERT, "( updatingPackage )", (const char *)&queryFormat, "updatingPackage") )
    __debugbreak();
  itemCount = mergedSyncList->itemCount;
  v12 = 0;
  v13 = 0;
  v14 = 0i64;
  if ( v8->itemCount )
  {
    do
    {
      items = v8->items;
      v16 = 0i64;
      v17 = &items[v14];
      v18 = mergedSyncList->itemCount;
      v19 = mergedSyncList->itemCount;
      if ( mergedSyncList->itemCount )
      {
        while ( 1 )
        {
          if ( (unsigned int)v16 >= s_streamSyncListEntryCount )
          {
            LODWORD(v27) = s_streamSyncListEntryCount;
            LODWORD(v26) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( s_streamSyncListEntryCount )", "itemIndex doesn't index s_streamSyncListEntryCount\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v20 = Com_StreamSyncEntry_AreEqual(&mergedSyncList->items[v16].streamSyncEntry, &v17->streamSyncEntry, clientStreamType);
          v18 = mergedSyncList->itemCount;
          if ( v20 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= v18 )
          {
            v19 = mergedSyncList->itemCount;
            goto LABEL_21;
          }
        }
        v22 = 1;
        v21 = mergedSyncList->itemCount;
      }
      else
      {
LABEL_21:
        v21 = v18;
        LODWORD(v16) = v18;
        v18 = v19;
        v22 = 0;
      }
      if ( v22 )
      {
        if ( (unsigned int)v16 >= v21 )
        {
          LODWORD(v27) = v21;
          LODWORD(v26) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 351, ASSERT_TYPE_ASSERT, "(unsigned)( mergedListItemIndex ) < (unsigned)( mergedSyncList->itemCount )", "mergedListItemIndex doesn't index mergedSyncList->itemCount\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( mergedSyncList->items[(unsigned int)v16].loadedState )
        {
          LODWORD(v26) = mergedSyncList->items[(unsigned int)v16].loadedState;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 352, ASSERT_TYPE_ASSERT, "( mergedSyncList->items[mergedListItemIndex].loadedState ) == ( STREAM_SYNC_LOAD_STATE_UNLOADED )", "mergedSyncList->items[mergedListItemIndex].loadedState == STREAM_SYNC_LOAD_STATE_UNLOADED\n\t%i, %i", v26, 0i64) )
            __debugbreak();
        }
        if ( !Com_StreamSyncEntry_AreEqual(&mergedSyncList->items[(unsigned int)v16].streamSyncEntry, &v17->streamSyncEntry, clientStreamType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 353, ASSERT_TYPE_ASSERT, "( Com_StreamSyncEntry_AreEqual( mergedSyncList->items[mergedListItemIndex].streamSyncEntry, existingItem->streamSyncEntry, clientStreamType ) )", (const char *)&queryFormat, "Com_StreamSyncEntry_AreEqual( mergedSyncList->items[mergedListItemIndex].streamSyncEntry, existingItem->streamSyncEntry, clientStreamType )") )
          __debugbreak();
        if ( !itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 354, ASSERT_TYPE_ASSERT, "( addingNewItem > 0 )", (const char *)&queryFormat, "addingNewItem > 0") )
          __debugbreak();
        --itemCount;
        v23 = (unsigned int)v16;
        mergedSyncList->items[v23].loadedState = v17->loadedState;
        mergedSyncList->items[v23].loadStartTime = v17->loadStartTime;
        if ( mergedSyncList->items[v23].source != v17->source && v17->loadedState != STREAM_SYNC_LOAD_STATE_LOADED )
          ++v13;
      }
      else if ( v21 < maxMergedListCount && keepExtraPackages )
      {
        if ( v18 >= s_streamSyncListEntryCount )
        {
          LODWORD(v27) = s_streamSyncListEntryCount;
          LODWORD(v26) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 376, ASSERT_TYPE_ASSERT, "(unsigned)( mergedSyncList->itemCount ) < (unsigned)( s_streamSyncListEntryCount )", "mergedSyncList->itemCount doesn't index s_streamSyncListEntryCount\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v24 = mergedSyncList->itemCount;
        v25 = mergedSyncList->items;
        *(__m256i *)&v25[v24].streamSyncEntry.singleModelIndex = *(__m256i *)&v17->streamSyncEntry.singleModelIndex;
        *(__m256i *)&v25[v24].streamSyncEntry.weapon.attachmentVariationIndices[5] = *(__m256i *)&v17->streamSyncEntry.weapon.attachmentVariationIndices[5];
        *(double *)&v25[v24].loadedState = *(double *)&v17->loadedState;
        ++mergedSyncList->itemCount;
      }
      else
      {
        ++v12;
      }
      v8 = existingItemList;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < existingItemList->itemCount );
  }
  *addingPackage = itemCount;
  *removingPackage = v12;
  *updatingPackage = v13;
}

/*
==============
SV_StreamSync_DataList_UpdateServerList
==============
*/
void SV_StreamSync_DataList_UpdateServerList(const StreamSyncWorldType worldStreamType, const ComStreamSyncEntry *models, const unsigned int *sources, const unsigned int modelCount)
{
  __int64 v4; 
  __int64 v6; 
  const ComStreamSyncEntry *v7; 
  void **v8; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v10; 
  __int64 v11; 
  __int64 itemCount; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  const dvar_t *v17; 
  unsigned int v18; 
  char *fmt; 
  unsigned int *addingPackage; 
  unsigned int *addingPackagea; 
  unsigned int *addingPackageb; 
  unsigned int *removingPackage; 
  unsigned int *removingPackagea; 
  unsigned int *removingPackageb; 
  unsigned int *updatingPackage; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  SvStreamSyncList itemList; 
  char v31; 

  v4 = modelCount;
  v6 = worldStreamType;
  v7 = models;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( models )", (const char *)&queryFormat, "models") )
    __debugbreak();
  if ( !sources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 541, ASSERT_TYPE_ASSERT, "( sources )", (const char *)&queryFormat, "sources") )
    __debugbreak();
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(addingPackage) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 542, ASSERT_TYPE_ASSERT, "(unsigned)( worldStreamType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "worldStreamType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", addingPackage, 3) )
      __debugbreak();
    LODWORD(removingPackagea) = 3;
    LODWORD(addingPackagea) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( worldStreamType ) < (unsigned)( ( sizeof( *array_counter( s_serverSyncData.itemLists ) ) + 0 ) )", "worldStreamType doesn't index ARRAY_COUNT( s_serverSyncData.itemLists )\n\t%i not in [0, %i)", addingPackagea, removingPackagea) )
      __debugbreak();
  }
  v8 = (void **)&s_serverSyncData.itemLists[v6];
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount((StreamSyncWorldType)v6, SvClient::ms_clientCount);
  v10 = MaxWorldEntryCount;
  if ( (unsigned int)v4 > MaxWorldEntryCount )
  {
    LODWORD(removingPackage) = MaxWorldEntryCount;
    LODWORD(addingPackage) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 550, ASSERT_TYPE_ASSERT, "( modelCount ) <= ( maxEntryListCount )", "modelCount not in [0, maxEntryListCount]\n\t%u not in [0, %u]", addingPackage, removingPackage) )
      __debugbreak();
  }
  if ( v10 > s_streamSyncListEntryCount )
  {
    LODWORD(removingPackage) = s_streamSyncListEntryCount;
    LODWORD(addingPackage) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 551, ASSERT_TYPE_ASSERT, "( maxEntryListCount ) <= ( s_streamSyncListEntryCount )", "maxEntryListCount <= s_streamSyncListEntryCount\n\t%i, %i", addingPackage, removingPackage) )
      __debugbreak();
  }
  itemList.itemCount = 0;
  itemList.items = (SvStreamSyncItem *)&v31;
  if ( (_DWORD)v4 )
  {
    v11 = v4;
    do
    {
      SV_StreamSync_DataList_AddItemForType((const StreamSyncClientType)v6, v7++, *sources++, &itemList, v10);
      --v11;
    }
    while ( v11 );
  }
  SV_StreamSync_DataList_UpdateExistingListItems((const StreamSyncClientType)v6, &itemList, (const SvStreamSyncList *)&s_serverSyncData.packagesChanged[4 * v6 - 12], v10, 0, &v28, &v29, &v27);
  itemCount = itemList.itemCount;
  v13 = s_streamSyncListEntryCount;
  *(_DWORD *)v8 = itemList.itemCount;
  if ( (unsigned int)itemCount > v13 )
  {
    LODWORD(removingPackageb) = v13;
    LODWORD(addingPackageb) = itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 565, ASSERT_TYPE_ASSERT, "( buildSyncList.itemCount ) <= ( s_streamSyncListEntryCount )", "buildSyncList.itemCount <= s_streamSyncListEntryCount\n\t%i, %i", addingPackageb, removingPackageb) )
      __debugbreak();
  }
  memcpy_0(v8[1], itemList.items, 72 * itemCount);
  v14 = v29;
  v15 = v27;
  v16 = v28;
  if ( v29 || v27 || v28 )
  {
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(removingPackageb) = 3;
      LODWORD(addingPackageb) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( worldStreamType ) < (unsigned)( ( sizeof( *array_counter( s_serverSyncData.packagesChanged ) ) + 0 ) )", "worldStreamType doesn't index ARRAY_COUNT( s_serverSyncData.packagesChanged )\n\t%i not in [0, %i)", addingPackageb, removingPackageb) )
        __debugbreak();
    }
    v17 = DCONST_DVARBOOL_sv_streamSync_devVerbose;
    ++s_serverSyncData.packagesChanged[v6];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      v18 = Sys_Milliseconds();
      LODWORD(updatingPackage) = v15;
      LODWORD(removingPackageb) = v14;
      LODWORD(addingPackageb) = v16;
      LODWORD(fmt) = v4;
      Com_Printf(15, "SV_StreamSync: Updated server list %d at time %u. %i Packages. Add %i Remove %i Update %i\n", (unsigned int)v6, v18, fmt, addingPackageb, removingPackageb, updatingPackage);
      SV_StreamSync_DumpServerStreamSyncList((const StreamSyncClientType)v6, (const SvStreamSyncList *const)&s_serverSyncData.packagesChanged[4 * v6 - 12]);
    }
  }
}

/*
==============
SV_StreamSync_DataList_ViewHands_HasStreamData
==============
*/
__int64 SV_StreamSync_DataList_ViewHands_HasStreamData(const unsigned int clientIndex, const ComStreamSyncEntry *modelList, const unsigned int modelListCount)
{
  __int64 v3; 
  const ComStreamSyncEntry *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  SvStreamSyncList *v9; 
  const ComStreamSyncEntry *v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  v3 = clientIndex;
  v5 = modelList;
  if ( !modelList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 598, ASSERT_TYPE_ASSERT, "( modelList )", (const char *)&queryFormat, "modelList") )
    __debugbreak();
  if ( !BG_Customization_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 599, ASSERT_TYPE_ASSERT, "( BG_Customization_IsEnabled() )", (const char *)&queryFormat, "BG_Customization_IsEnabled()") )
    __debugbreak();
  v6 = 0;
  if ( !modelListCount )
    return 1i64;
  v7 = v3;
  while ( 1 )
  {
    if ( (unsigned int)v3 >= s_clientSyncDataCount )
    {
      LODWORD(v14) = s_clientSyncDataCount;
      LODWORD(v13) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !s_clientSyncData[v7].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(s_clientSyncData[clientIndex].active)", "%s\n\tAttempting to access the data of an inactive client", "s_clientSyncData[clientIndex].active") )
      __debugbreak();
    v8 = 0i64;
    v9 = &s_clientSyncData[v7].itemLists[3];
    if ( !v9->itemCount )
      break;
    v10 = &v5[v6];
    while ( 1 )
    {
      v11 = (__int64)&v9->items[v8];
      if ( Com_StreamSyncEntry_AreEqual((const ComStreamSyncEntry *)v11, v10, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v9->itemCount )
        return 0i64;
    }
    if ( !*(_DWORD *)(v11 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED)", "%s\n\tClient list data should not be unloaded", "streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED") )
      __debugbreak();
    if ( *(_DWORD *)(v11 + 64) != 2 )
      break;
    if ( ++v6 >= modelListCount )
      return 1i64;
    v5 = modelList;
  }
  return 0i64;
}

/*
==============
SV_StreamSync_DebugDumpLists
==============
*/
void SV_StreamSync_DebugDumpLists()
{
  unsigned int v0; 
  const StreamSyncClientType *v1; 
  SvStreamSyncGlobalData *v2; 
  unsigned int i; 
  __int64 v4; 
  SvStreamSyncClientData *v5; 
  StreamSyncClientType v6; 
  __int64 v7; 
  __int64 v8; 

  Com_Printf(15, "SV_StreamSync: Dumping all active lists ---------------- \n");
  v0 = 0;
  v1 = WORLDTYPETOCLIENTENUM;
  v2 = &s_serverSyncData;
  do
  {
    SV_StreamSync_DumpServerStreamSyncList(*v1, v2->itemLists);
    ++v0;
    v2 = (SvStreamSyncGlobalData *)((char *)v2 + 16);
    ++v1;
  }
  while ( v0 < 3 );
  for ( i = 0; i < SvClient::ms_clientCount; ++i )
  {
    if ( i >= s_clientSyncDataCount )
    {
      LODWORD(v8) = s_clientSyncDataCount;
      LODWORD(v7) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v4 = 104i64 * i;
    v5 = s_clientSyncData;
    if ( *(unsigned int *)((char *)&s_clientSyncData->itemLists[6].itemCount + v4) )
    {
      v6 = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL;
      while ( 1 )
      {
        SV_StreamSync_DumpClientStreamSyncList(i, v6++, (const SvStreamSyncList *const)((char *)v5->itemLists + v4));
        v4 += 16i64;
        if ( (unsigned int)v6 >= STREAM_SYNC_CLIENT_TYPE_COUNT )
          break;
        v5 = s_clientSyncData;
      }
    }
    else
    {
      Com_Printf(15, "-- CL %d: Inactive\n", i);
    }
  }
}

/*
==============
SV_StreamSync_DumpClientStreamSyncList
==============
*/
void SV_StreamSync_DumpClientStreamSyncList(const unsigned int clientIndex, const StreamSyncClientType clientStreamType, const SvStreamSyncList *const streamSyncList)
{
  __int64 i; 
  SvStreamSyncItem *v7; 
  __int64 v8; 
  char buf[512]; 

  for ( i = 0i64; (unsigned int)i < streamSyncList->itemCount; i = (unsigned int)(i + 1) )
  {
    v7 = &streamSyncList->items[i];
    Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &v7->streamSyncEntry, clientStreamType);
    LODWORD(v8) = v7->loadedState;
    Com_Printf(15, "-- CL %d: %d::%s (loaded %d)\n", clientIndex, (unsigned int)clientStreamType, buf, v8);
  }
}

/*
==============
SV_StreamSync_DumpServerStreamSyncList
==============
*/
void SV_StreamSync_DumpServerStreamSyncList(const StreamSyncClientType clientStreamType, const SvStreamSyncList *const streamSyncList)
{
  __int64 i; 
  char buf[512]; 

  for ( i = 0i64; (unsigned int)i < streamSyncList->itemCount; i = (unsigned int)(i + 1) )
  {
    Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &streamSyncList->items[i].streamSyncEntry, clientStreamType);
    Com_Printf(15, "-- SV: %d::%s\n", (unsigned int)clientStreamType, buf);
  }
}

/*
==============
SV_StreamSync_GetAllocationSize
==============
*/
__int64 SV_StreamSync_GetAllocationSize(const int maxClients)
{
  int v1; 
  int v2; 

  v1 = 20;
  v2 = 8;
  if ( maxClients <= 20 )
    v1 = maxClients;
  if ( 2 * v1 + 24 >= 2 * v1 + 8 )
    v2 = 24;
  return ((216 * (2 * v1 + v2) + 127) & 0xFFFFFF80) + ((104 * maxClients + 127) & 0xFFFFFF80) + ((6 * maxClients * 72 * (2 * v1 + v2) + 127) & 0xFFFFFF80);
}

/*
==============
SV_StreamSync_GetNextPresetCustomization
==============
*/
ClientCustomizationInfo *SV_StreamSync_GetNextPresetCustomization()
{
  unsigned int v0; 

  if ( !s_serverSyncData.presetCustomizationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 834, ASSERT_TYPE_ASSERT, "( s_serverSyncData.presetCustomizationCount > 0 )", (const char *)&queryFormat, "s_serverSyncData.presetCustomizationCount > 0") )
    __debugbreak();
  v0 = s_serverSyncData.presetCustomizationIndex % s_serverSyncData.presetCustomizationCount;
  ++s_serverSyncData.presetCustomizationIndex;
  return &s_serverSyncData.presetCustomizationInfo[v0];
}

/*
==============
SV_StreamSync_HasWorldWeaponsLoaded
==============
*/
__int64 SV_StreamSync_HasWorldWeaponsLoaded(const Weapon *weapons, const unsigned int weaponCount)
{
  const Weapon *v2; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  const Weapon *v7; 
  int v8; 
  __int128 v9; 
  double v10; 
  SvStreamSyncClientData *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  ComStreamSyncEntry syncEntry2; 

  v2 = weapons;
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1529, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v4 = 0;
  v17 = SvClient::ms_clientCount;
  if ( SvClient::ms_clientCount )
  {
    v5 = 32i64;
    do
    {
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1495, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
        __debugbreak();
      if ( v4 >= s_clientSyncDataCount )
      {
        LODWORD(v16) = s_clientSyncDataCount;
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( *(unsigned int *)((char *)&s_clientSyncData->itemLists[4].itemCount + v5) )
      {
        if ( !SV_ClientMP_IsTestClient(v4) && !SV_BotIsBot(v4) )
        {
          v6 = 0;
          if ( weaponCount )
          {
            v7 = v2;
            do
            {
              if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
                __debugbreak();
              v8 = *(_DWORD *)&v7->weaponCamo;
              v9 = *(_OWORD *)&v7->attachmentVariationIndices[5];
              *(__m256i *)&syncEntry2.singleModelIndex = *(__m256i *)&v7->weaponIdx;
              v10 = *(double *)&v7->attachmentVariationIndices[21];
              *(_DWORD *)&syncEntry2.weapon.weaponCamo = v8;
              *(double *)&syncEntry2.weapon.attachmentVariationIndices[21] = v10;
              *(_OWORD *)&syncEntry2.weapon.attachmentVariationIndices[5] = v9;
              if ( v4 >= s_clientSyncDataCount )
              {
                LODWORD(v16) = s_clientSyncDataCount;
                LODWORD(v15) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v15, v16) )
                  __debugbreak();
              }
              if ( !*(unsigned int *)((char *)&s_clientSyncData->itemLists[4].itemCount + v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(s_clientSyncData[clientIndex].active)", "%s\n\tAttempting to access the data of an inactive client", "s_clientSyncData[clientIndex].active") )
                __debugbreak();
              v11 = s_clientSyncData;
              v12 = 0i64;
              if ( !*(unsigned int *)((char *)&s_clientSyncData->itemLists[0].itemCount + v5) )
                return 0i64;
              while ( 1 )
              {
                v13 = (__int64)&(*(SvStreamSyncItem **)((char *)&v11->itemLists[0].items + v5))[v12];
                if ( Com_StreamSyncEntry_AreEqual((const ComStreamSyncEntry *)v13, &syncEntry2, STREAM_SYNC_CLIENT_TYPE_WEAPON) )
                  break;
                v12 = (unsigned int)(v12 + 1);
                if ( (unsigned int)v12 >= *(unsigned int *)((char *)&v11->itemLists[0].itemCount + v5) )
                  return 0i64;
              }
              if ( !*(_DWORD *)(v13 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED)", "%s\n\tClient list data should not be unloaded", "streamSyncPackage->loadedState != STREAM_SYNC_LOAD_STATE_UNLOADED") )
                __debugbreak();
              if ( *(_DWORD *)(v13 + 64) != 2 )
                return 0i64;
              ++v6;
              ++v7;
            }
            while ( v6 < weaponCount );
            v2 = weapons;
          }
        }
      }
      ++v4;
      v5 += 104i64;
    }
    while ( v4 < v17 );
  }
  return 1i64;
}

/*
==============
SV_StreamSync_PopulateClientSnapshot
==============
*/
void SV_StreamSync_PopulateClientSnapshot(const unsigned int clientIndex, SvSnapshotStreamSyncData *outSnapshotData)
{
  __int64 v3; 
  StreamSyncClientType i; 
  SvStreamSyncList *ClientSyncList; 
  unsigned int itemCount; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  SvStreamSyncItem *items; 
  ComSnapshotStreamSyncItem *v12; 
  __int64 v13; 
  __int64 v15; 
  unsigned int v16; 

  v3 = clientIndex;
  if ( clientIndex >= s_clientSyncDataCount )
  {
    v16 = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", clientIndex, v16) )
      __debugbreak();
  }
  if ( s_clientSyncData[v3].active )
  {
    for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
    {
      if ( !outSnapshotData->streamSyncLists[0].items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 954, ASSERT_TYPE_ASSERT, "( outList.items != nullptr )", (const char *)&queryFormat, "outList.items != nullptr") )
        __debugbreak();
      ClientSyncList = SV_StreamSync_DataList_GetClientSyncList(v3, i);
      if ( ClientSyncList->itemCount > SvClientMP::ms_streamSyncItemCount )
      {
        LODWORD(v15) = SvClientMP::ms_streamSyncItemCount;
        LODWORD(v13) = ClientSyncList->itemCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 957, ASSERT_TYPE_ASSERT, "( clientItemList->itemCount ) <= ( SvClientMP::GetStreamSyncItemCount() )", "clientItemList->itemCount <= SvClientMP::GetStreamSyncItemCount()\n\t%i, %i", v13, v15) )
          __debugbreak();
      }
      itemCount = ClientSyncList->itemCount;
      v7 = 0;
      outSnapshotData->streamSyncLists[0].itemCount = ClientSyncList->itemCount;
      if ( itemCount )
      {
        do
        {
          v8 = v7++;
          v9 = v8;
          v10 = v8;
          outSnapshotData->streamSyncLists[0].items[v9].source = ClientSyncList->items[v8].source;
          items = ClientSyncList->items;
          v12 = &outSnapshotData->streamSyncLists[0].items[v9];
          *(__m256i *)&v12->entry.singleModelIndex = *(__m256i *)&items[v10].streamSyncEntry.singleModelIndex;
          *(_OWORD *)&v12->entry.weapon.attachmentVariationIndices[5] = *(_OWORD *)&items[v10].streamSyncEntry.weapon.attachmentVariationIndices[5];
          *(double *)&v12->entry.weapon.attachmentVariationIndices[21] = *(double *)&items[v10].streamSyncEntry.weapon.attachmentVariationIndices[21];
          *(_DWORD *)&v12->entry.weapon.weaponCamo = *(_DWORD *)&items[v10].streamSyncEntry.weapon.weaponCamo;
        }
        while ( v7 < outSnapshotData->streamSyncLists[0].itemCount );
      }
      outSnapshotData = (SvSnapshotStreamSyncData *)((char *)outSnapshotData + 16);
    }
  }
  else
  {
    outSnapshotData->streamSyncLists[0].itemCount = 0;
    outSnapshotData->streamSyncLists[1].itemCount = 0;
    outSnapshotData->streamSyncLists[2].itemCount = 0;
    outSnapshotData->streamSyncLists[3].itemCount = 0;
    outSnapshotData->streamSyncLists[4].itemCount = 0;
    outSnapshotData->streamSyncLists[5].itemCount = 0;
  }
}

/*
==============
SV_StreamSync_ReadState
==============
*/
void SV_StreamSync_ReadState(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1732, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Com_Printf(15, "SV_StreamSync: State load.\n");
  SV_StreamSync_ArchiveClientsState(memFile);
  SV_StreamSync_ArchiveWorldState(memFile);
  SV_StreamSync_DebugDumpLists();
}

/*
==============
SV_StreamSync_Reset
==============
*/
void SV_StreamSync_Reset()
{
  __int64 v0; 
  int v1; 
  void **p_items; 
  int v3; 
  __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  void **v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v0 = SvClient::ms_clientCount;
  if ( !s_clientSyncData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 682, ASSERT_TYPE_ASSERT, "( s_clientSyncData )", (const char *)&queryFormat, "s_clientSyncData") )
    __debugbreak();
  if ( s_clientSyncDataCount != (_DWORD)v0 )
  {
    LODWORD(v12) = s_clientSyncDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 683, ASSERT_TYPE_ASSERT, "( s_clientSyncDataCount ) == ( clientMaxCount )", "s_clientSyncDataCount == clientMaxCount\n\t%i, %i", v12, v0) )
      __debugbreak();
  }
  DebugWipe(s_serverSyncData.packagesChanged, 0xCui64);
  DebugWipe(s_serverSyncData.presetCustomizationInfo, 0x12C0ui64);
  v1 = 20;
  p_items = (void **)&s_serverSyncData.itemLists[0].items;
  v3 = 8;
  if ( (unsigned int)v0 <= 0x14 )
    v1 = v0;
  v4 = 3i64;
  if ( 2 * v1 + 24 >= (unsigned int)(2 * v1 + 8) )
    v3 = 24;
  v5 = (unsigned int)(72 * (2 * v1 + v3));
  do
  {
    DebugWipe(*p_items, v5);
    p_items += 2;
    --v4;
  }
  while ( v4 );
  if ( (_DWORD)v0 )
  {
    v6 = 0i64;
    v7 = v0;
    do
    {
      v8 = 6i64;
      v9 = (void **)&s_clientSyncData[v6].itemLists[0].items;
      do
      {
        DebugWipe(*v9, v5);
        v9 += 2;
        --v8;
      }
      while ( v8 );
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  s_serverSyncData.itemLists[0].itemCount = 0;
  v10 = 0;
  s_serverSyncData.itemLists[1].itemCount = 0;
  s_serverSyncData.itemLists[2].itemCount = 0;
  if ( (_DWORD)v0 )
  {
    v11 = 0i64;
    do
    {
      if ( v10 >= s_clientSyncDataCount )
      {
        LODWORD(v13) = s_clientSyncDataCount;
        LODWORD(v12) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      ++v10;
      s_clientSyncData[v11++].active = 0;
    }
    while ( v10 < (unsigned int)v0 );
  }
}

/*
==============
SV_StreamSync_RunFrame
==============
*/
void SV_StreamSync_RunFrame(void)
{
  StreamSyncWorldType i; 
  unsigned int j; 
  __int64 v2; 
  __int64 v3; 

  if ( Com_StreamSync_IsEnabled() )
  {
    for ( i = STREAM_SYNC_WORLD_TYPE_HEAD; (unsigned int)i < STREAM_SYNC_WORLD_TYPE_COUNT; ++i )
    {
      if ( s_serverSyncData.packagesChanged[i] )
      {
        s_serverSyncData.packagesChanged[i] = 0;
        for ( j = 0; j < SvClient::ms_clientCount; ++j )
        {
          if ( j >= s_clientSyncDataCount )
          {
            LODWORD(v3) = s_clientSyncDataCount;
            LODWORD(v2) = j;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v2, v3) )
              __debugbreak();
          }
          if ( s_clientSyncData[j].active )
            SV_StreamSync_DataList_UpdateClientStreamDataForSyncType(j, i);
        }
      }
    }
  }
}

/*
==============
SV_StreamSync_ShutdownMemory
==============
*/
void SV_StreamSync_ShutdownMemory(void)
{
  SvStreamSyncItem **p_items; 
  unsigned int v1; 

  p_items = &s_serverSyncData.itemLists[1].items;
  s_clientSyncData = NULL;
  v1 = 0;
  do
  {
    v1 += 3;
    *(p_items - 2) = NULL;
    *p_items = NULL;
    p_items[2] = NULL;
    p_items += 6;
  }
  while ( v1 < 3 );
  s_clientSyncDataCount = 0;
  s_streamSyncListEntryCount = 0;
}

/*
==============
SV_StreamSync_SpawnServer
==============
*/
void SV_StreamSync_SpawnServer(const int isMigration, const int isRestart)
{
  unsigned int v2; 
  SvStreamSyncItem **p_items; 
  char *v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  size_t v11; 
  SvStreamSyncItem **v12; 
  void **v13; 
  SvStreamSyncItem *v14; 
  SvStreamSyncItem *v15; 
  void *v16; 
  const dvar_t *v17; 
  unsigned int PresetTestClientCustomization; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  char v22; 
  char v23; 

  if ( isMigration )
  {
    SV_StreamSync_Reset();
  }
  else
  {
    v2 = 0;
    if ( !isRestart )
    {
      p_items = &s_serverSyncData.itemLists[0].items;
      v4 = &v22;
      v5 = 0;
      do
      {
        if ( !*p_items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 153, ASSERT_TYPE_ASSERT, "( s_serverSyncData.itemLists[itemListIndex].items )", (const char *)&queryFormat, "s_serverSyncData.itemLists[itemListIndex].items") )
          __debugbreak();
        ++v5;
        *(_QWORD *)v4 = *p_items;
        p_items += 2;
        v4 += 8;
      }
      while ( v5 < 3 );
      memset_0(&s_serverSyncData, 0, sizeof(s_serverSyncData));
      v6 = 20;
      v7 = 20;
      v8 = 20;
      if ( (int)SvClient::ms_clientCount <= 20 )
        v7 = SvClient::ms_clientCount;
      if ( (int)SvClient::ms_clientCount <= 20 )
        v8 = SvClient::ms_clientCount;
      if ( (int)(2 * v7 + 24) >= (int)(2 * v8 + 8) )
      {
        if ( (int)SvClient::ms_clientCount <= 20 )
          v6 = SvClient::ms_clientCount;
        v9 = 2 * v6 + 24;
      }
      else
      {
        if ( (int)SvClient::ms_clientCount <= 20 )
          v6 = SvClient::ms_clientCount;
        v9 = 2 * v6 + 8;
      }
      if ( (_DWORD)v9 != s_streamSyncListEntryCount )
      {
        LODWORD(v20) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 160, ASSERT_TYPE_ASSERT, "( syncListEntryCount ) == ( s_streamSyncListEntryCount )", "syncListEntryCount == s_streamSyncListEntryCount\n\t%i, %i", v20, s_streamSyncListEntryCount) )
          __debugbreak();
      }
      v10 = 0;
      v11 = 72 * v9;
      v12 = &s_serverSyncData.itemLists[2].items;
      v13 = (void **)&v23;
      do
      {
        v14 = (SvStreamSyncItem *)*(v13 - 2);
        *(v12 - 4) = v14;
        memset_0(v14, 0, v11);
        v15 = (SvStreamSyncItem *)*(v13 - 1);
        *(v12 - 2) = v15;
        memset_0(v15, 0, v11);
        v16 = *v13;
        *v12 = (SvStreamSyncItem *)*v13;
        memset_0(v16, 0, v11);
        v10 += 3;
        v13 += 3;
        v12 += 6;
      }
      while ( v10 < 3 );
      if ( !BG_Customization_IsEnabled() || !Com_StreamSync_IsEnabled() )
        goto LABEL_35;
      v17 = DCONST_DVARBOOL_sv_streamSync_devDisablePresets;
      if ( !DCONST_DVARBOOL_sv_streamSync_devDisablePresets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devDisablePresets") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( !v17->current.enabled )
      {
        PresetTestClientCustomization = SV_ClientMP_GeneratePresetTestClientCustomization(s_serverSyncData.presetCustomizationInfo, 0xC8u);
        v19 = PresetTestClientCustomization;
        if ( PresetTestClientCustomization != 200 )
        {
          LODWORD(v21) = 200;
          LODWORD(v20) = PresetTestClientCustomization;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 824, ASSERT_TYPE_ASSERT, "( generatedCount ) == ( presetArraySize )", "generatedCount == presetArraySize\n\t%i, %i", v20, v21) )
            __debugbreak();
        }
        s_serverSyncData.presetCustomizationCount = v19;
      }
      else
      {
LABEL_35:
        BG_Customization_SetDefaultCustomization(s_serverSyncData.presetCustomizationInfo);
        s_serverSyncData.presetCustomizationCount = 1;
      }
      if ( s_serverSyncData.presetCustomizationIndex )
      {
        LODWORD(v20) = s_serverSyncData.presetCustomizationIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 828, ASSERT_TYPE_ASSERT, "( s_serverSyncData.presetCustomizationIndex ) == ( 0 )", "s_serverSyncData.presetCustomizationIndex == 0\n\t%i, %i", v20, 0i64) )
          __debugbreak();
      }
    }
    if ( SvClient::ms_clientCount )
    {
      do
      {
        if ( SvClient::GetCommonClient(v2)->state > CS_ZOMBIE )
        {
          if ( v2 >= s_clientSyncDataCount )
          {
            LODWORD(v21) = s_clientSyncDataCount;
            LODWORD(v20) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( s_clientSyncData[v2].active )
          {
            Com_Printf(15, "SV_StreamSync: SpawnServer - Client %i is active, marking as loading in.\n", v2);
          }
          else if ( Com_StreamSync_IsEnabled() )
          {
            Com_PrintWarning(15, "SV_StreamSync: SpawnServer - Client %i is inactive but streaming is enabled.\n", v2);
          }
        }
        else
        {
          SV_StreamSync_DataList_ClearClientData(v2);
          if ( v2 >= s_clientSyncDataCount )
          {
            LODWORD(v21) = s_clientSyncDataCount;
            LODWORD(v20) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( s_clientSyncDataCount )", "clientIndex doesn't index s_clientSyncDataCount\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( s_clientSyncData[v2].active )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 870, ASSERT_TYPE_ASSERT, "( !SV_StreamSync_DataList_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "!SV_StreamSync_DataList_IsClientActive( clientIndex )") )
              __debugbreak();
          }
          Com_Printf(15, "SV_StreamSync: SpawnServer - Client %i is not active, clearing.\n", v2);
        }
        ++v2;
      }
      while ( v2 < SvClient::ms_clientCount );
    }
  }
}

/*
==============
SV_StreamSync_WriteDeltaSnapshots
==============
*/
void SV_StreamSync_WriteDeltaSnapshots(const unsigned int clientIndex, msg_t *msg, const SvSnapshotStreamSyncData *oldData, const SvSnapshotStreamSyncData *newData)
{
  StreamSyncClientType i; 
  const SvSnapshotStreamSyncList *v9; 
  const SvSnapshotStreamSyncList *v10; 
  bool v11; 
  const char *Name; 
  __int64 v13; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1069, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
  {
    if ( oldData )
      v9 = &oldData->streamSyncLists[i];
    else
      v9 = NULL;
    v10 = &newData->streamSyncLists[i];
    if ( v9 )
    {
      if ( v9->itemCount == v10->itemCount )
      {
        if ( !v9->items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 993, ASSERT_TYPE_ASSERT, "( oldList->items != nullptr )", (const char *)&queryFormat, "oldList->items != nullptr") )
          __debugbreak();
        if ( !v10->items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 994, ASSERT_TYPE_ASSERT, "( newList.items != nullptr )", (const char *)&queryFormat, "newList.items != nullptr") )
          __debugbreak();
        v11 = memcmp_0(v9->items, v10->items, 62i64 * v10->itemCount) != 0;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v11 = 1;
    }
    MSG_WriteBool(msg, v11);
    if ( v11 )
      SV_StreamSync_WriteSyncList(clientIndex, msg, i, v9, v10);
    if ( msg->overflowed )
    {
      Name = SV_ClientMP_GetName(clientIndex);
      LODWORD(v13) = clientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1086, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( msg ) )", "SV_StreamSync: Too much snapshot data written for client %i (%s)", v13, Name) )
        __debugbreak();
    }
  }
}

/*
==============
SV_StreamSync_WriteNoChangeSnapshot
==============
*/
void SV_StreamSync_WriteNoChangeSnapshot(msg_t *msg)
{
  __int64 v2; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1093, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v2 = 6i64;
  do
  {
    MSG_WriteBit0(msg);
    --v2;
  }
  while ( v2 );
}

/*
==============
SV_StreamSync_WriteState
==============
*/
void SV_StreamSync_WriteState(MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1719, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Com_Printf(15, "SV_StreamSync: State save.\n");
  SV_StreamSync_ArchiveClientsState(memFile);
  SV_StreamSync_ArchiveWorldState(memFile);
  SV_StreamSync_DebugDumpLists();
}

/*
==============
SV_StreamSync_WriteSyncList
==============
*/
void SV_StreamSync_WriteSyncList(const unsigned int clientIndex, msg_t *msg, const StreamSyncClientType clientStreamType, const SvSnapshotStreamSyncList *oldList, const SvSnapshotStreamSyncList *newList)
{
  unsigned int v9; 
  __int64 v10; 
  ComSnapshotStreamSyncItem *v11; 
  ComSnapshotStreamSyncItem *v12; 
  bool v13; 
  unsigned int v14; 
  const char *Name; 
  int v16; 
  const char *v17; 
  unsigned int v18; 
  const char *v19; 
  const dvar_t *v20; 
  char *fmt; 
  __int64 v22; 
  const char *v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int itemCount; 
  ComStreamSyncEntryType Type; 
  unsigned int width; 
  char buf[512]; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  width = Com_StreamSync_GetBitCount(clientStreamType);
  v9 = 0;
  Type = Com_StreamSyncEntry_GetType(clientStreamType);
  if ( oldList )
    itemCount = oldList->itemCount;
  else
    itemCount = 0;
  MSG_WriteBits(msg, newList->itemCount, 6u);
  if ( newList->itemCount )
  {
    while ( 1 )
    {
      v10 = v9;
      v11 = &newList->items[v10];
      if ( v9 >= itemCount )
        break;
      if ( !oldList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1017, ASSERT_TYPE_ASSERT, "( oldList != nullptr )", (const char *)&queryFormat, "oldList != nullptr") )
        __debugbreak();
      v12 = &oldList->items[v10];
      if ( v12->source != v11->source || !Com_StreamSyncEntry_AreEqual(&v12->entry, &v11->entry, clientStreamType) )
        break;
      MSG_WriteBit0(msg);
LABEL_36:
      if ( ++v9 >= newList->itemCount )
        return;
    }
    MSG_WriteBit1(msg);
    MSG_WriteBits(msg, v11->source, 3u);
    if ( Type )
    {
      if ( Type != WEAPON )
      {
        LODWORD(v22) = Type;
        v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1049, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown ComStreamSyncModelType : %d", v22);
        goto LABEL_29;
      }
      if ( Com_StreamSyncEntry_GetType(clientStreamType) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 122, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
        __debugbreak();
      MSG_WriteWeapon(msg, (const Weapon *)v11);
      if ( !msg->overflowed )
        goto LABEL_31;
      v14 = newList->itemCount;
      Name = SV_ClientMP_GetName(clientIndex);
      LODWORD(v25) = v14;
      v16 = 1043;
      LODWORD(v24) = v9;
      v23 = Name;
      v17 = "Too much data written in client %i (%s) update command. Writing weapon %i of %i.";
    }
    else
    {
      if ( Com_StreamSyncEntry_GetType(clientStreamType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
        __debugbreak();
      MSG_WriteBits(msg, v11->entry.singleModelIndex, width);
      if ( !msg->overflowed )
        goto LABEL_31;
      v18 = newList->itemCount;
      v19 = SV_ClientMP_GetName(clientIndex);
      LODWORD(v25) = v18;
      v16 = 1034;
      LODWORD(v24) = v9;
      v23 = v19;
      v17 = "Too much data written in client %i (%s) update command. Writing model %i of %i.";
    }
    LODWORD(v22) = clientIndex;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", v16, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( msg ) )", v17, v22, v23, v24, v25);
LABEL_29:
    if ( v13 )
      __debugbreak();
LABEL_31:
    v20 = DCONST_DVARBOOL_sv_streamSync_devVerbose;
    if ( !DCONST_DVARBOOL_sv_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_streamSync_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &v11->entry, clientStreamType);
      LODWORD(v24) = v11->source;
      LODWORD(v22) = newList->itemCount;
      LODWORD(fmt) = v9;
      Com_Printf(15, "SV_StreamSync: WriteRequiredData [CL %i] : (%i::%i/%i) %s {%i}\n", clientIndex, (unsigned int)clientStreamType, fmt, v22, buf, v24);
    }
    goto LABEL_36;
  }
}

/*
==============
SV_Streamsync_Customization_GetNonTransientModelName
==============
*/
const char *SV_Streamsync_Customization_GetNonTransientModelName(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  const char *DefaultModelNameForCustomization; 

  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_streamsync_mp.cpp", 1576, ASSERT_TYPE_ASSERT, "( customization )", (const char *)&queryFormat, "customization") )
    __debugbreak();
  DefaultModelNameForCustomization = BG_Customization_GetDefaultModelNameForCustomization(customizationType, customization);
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && SV_TransientsMP_IsTransientModel(DefaultModelNameForCustomization) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14410A210, 957i64, DefaultModelNameForCustomization);
  return DefaultModelNameForCustomization;
}

