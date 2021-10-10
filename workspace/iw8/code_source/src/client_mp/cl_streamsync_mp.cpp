/*
==============
CL_StreamSync_IsRunning
==============
*/

bool __fastcall CL_StreamSync_IsRunning()
{
  return ?CL_StreamSync_IsRunning@@YA_NXZ();
}

/*
==============
CL_StreamSync_Update
==============
*/

void __fastcall CL_StreamSync_Update(const LocalClientNum_t localClientNum)
{
  ?CL_StreamSync_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamSync_Shutdown
==============
*/

void __fastcall CL_StreamSync_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CL_StreamSync_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamSync_ApplyServerLoadRequest
==============
*/

void __fastcall CL_StreamSync_ApplyServerLoadRequest(const LocalClientNum_t localClientNum, const ComSnapshotStreamSync *serverStreamSync)
{
  ?CL_StreamSync_ApplyServerLoadRequest@@YAXW4LocalClientNum_t@@AEBUComSnapshotStreamSync@@@Z(localClientNum, serverStreamSync);
}

/*
==============
CL_StreamSync_Init
==============
*/

void CL_StreamSync_Init(void)
{
  ?CL_StreamSync_Init@@YAXXZ();
}

/*
==============
CL_StreamSync_Shutdown
==============
*/

void CL_StreamSync_Shutdown(void)
{
  ?CL_StreamSync_Shutdown@@YAXXZ();
}

/*
==============
CL_Streamsync_DebugGetClientData
==============
*/

unsigned int __fastcall CL_Streamsync_DebugGetClientData(const LocalClientNum_t localClientNum, const unsigned int rowIndex, ClientCustomizationInfo *outCustomization, unsigned int *outCustomizationLoaded)
{
  return ?CL_Streamsync_DebugGetClientData@@YAIW4LocalClientNum_t@@IPEAUClientCustomizationInfo@@PEAI@Z(localClientNum, rowIndex, outCustomization, outCustomizationLoaded);
}

/*
==============
CL_StreamSync_ClientSetup
==============
*/

void __fastcall CL_StreamSync_ClientSetup(const LocalClientNum_t localClientNum)
{
  ?CL_StreamSync_ClientSetup@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamSync_ParseSnapshot
==============
*/

void __fastcall CL_StreamSync_ParseSnapshot(const LocalClientNum_t localClientNum, msg_t *msg, const ComSnapshotStreamSync *fromSnap, ComSnapshotStreamSync *toSnap)
{
  ?CL_StreamSync_ParseSnapshot@@YAXW4LocalClientNum_t@@PEAUmsg_t@@PEBUComSnapshotStreamSync@@AEAU3@@Z(localClientNum, msg, fromSnap, toSnap);
}

/*
==============
CL_StreamSync_Start
==============
*/

void CL_StreamSync_Start(void)
{
  ?CL_StreamSync_Start@@YAXXZ();
}

/*
==============
CL_StreamSync_ApplyServerLoadRequest
==============
*/
void CL_StreamSync_ApplyServerLoadRequest(const LocalClientNum_t localClientNum, const ComSnapshotStreamSync *serverStreamSync)
{
  __int64 v2; 
  const dvar_t *v4; 
  StreamSyncClientType i; 
  int v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( s_clientsStreamInfo[v2].isActive )
  {
    v4 = DCONST_DVARBOOL_cl_streamSync_devClearOnRequest;
    if ( !DCONST_DVARBOOL_cl_streamSync_devClearOnRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamSync_devClearOnRequest") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      Com_PrintWarning(14, "[%i] CL_StreamSync: StreamSync unload all requested via cl_streamSync_devClearOnRequest.\n", (unsigned int)v2);
      CL_StreamSync_DataList_DevUnload();
    }
    else
    {
      for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
      {
        CL_StreamSync_DataList_CommitNewSyncData((const LocalClientNum_t)v2, serverStreamSync->itemLists, i);
        serverStreamSync = (const ComSnapshotStreamSync *)((char *)serverStreamSync + 3972);
      }
      if ( CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v2) )
        CG_ViewMP_UpdateViewModelsStreamed((const LocalClientNum_t)v2);
    }
  }
}

/*
==============
CL_StreamSync_Clear
==============
*/
void CL_StreamSync_Clear(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  Com_Printf(14, "[%i] CL_StreamSync: Clearing all streaming sync information.\n", (unsigned int)v1);
  DebugWipe(&s_clientsStreamInfo[v1], 0xC018ui64);
  DebugWipe(s_clientsStreamInfo[v1].maxPackageCount, 0x18ui64);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v4) = 2;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v4) )
      __debugbreak();
  }
  s_clientsStreamInfo[v1].isActive = 0;
}

/*
==============
CL_StreamSync_ClientSetup
==============
*/
void CL_StreamSync_ClientSetup(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  StreamSyncClientType v2; 
  __int128 *v3; 
  __int128 v4; 
  double v5; 
  ClStreamSyncData *v6; 
  char *fmt; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  __int128 v17; 
  double v18; 

  v1 = localClientNum;
  if ( Com_StreamSync_IsEnabled() )
  {
    v2 = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL;
    v3 = &v17;
    do
    {
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      *(_DWORD *)v3 = Com_StreamSync_GetMaxEntryCount(v2++, cls.maxClients, cls.m_localClientsActive.activeCount);
      v3 = (__int128 *)((char *)v3 + 4);
    }
    while ( (unsigned int)v2 < STREAM_SYNC_CLIENT_TYPE_COUNT );
    if ( (unsigned int)v1 >= 2 )
    {
      v13 = 2;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v13) )
        __debugbreak();
    }
    if ( !Com_StreamSync_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 124, ASSERT_TYPE_ASSERT, "(Com_StreamSync_IsEnabled())", (const char *)&queryFormat, "Com_StreamSync_IsEnabled()") )
      __debugbreak();
    v16 = HIDWORD(v18);
    v15 = LODWORD(v18);
    LODWORD(v11) = HIDWORD(v17);
    LODWORD(v8) = DWORD2(v17);
    LODWORD(fmt) = DWORD1(v17);
    Com_Printf(14, "[%i] CL_StreamSync: Activating initial sync information. maxPackageCount = %d %d %d %d %d %d.\n", (unsigned int)v1, (unsigned int)v17, fmt, v8, v11, v15, v16);
    if ( BG_Customization_IsEnabled() )
      BG_Customization_ValidateInitialization();
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v14) = 2;
      LODWORD(v10) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v14) )
        __debugbreak();
    }
    v4 = v17;
    v5 = v18;
    s_clientsStreamInfo[v1].isActive = 1;
    v6 = &s_clientsStreamInfo[v1];
    *(_OWORD *)v6->maxPackageCount = v4;
    *(double *)&v6->maxPackageCount[4] = v5;
    memset_0(v6, 0, 0xC018ui64);
  }
  else
  {
    if ( (unsigned int)v1 >= 2 )
    {
      v12 = 2;
      v9 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v12) )
        __debugbreak();
    }
    s_clientsStreamInfo[v1].isActive = 0;
  }
}

/*
==============
CL_StreamSync_DataList_BuildUpdatedList
==============
*/
_BOOL8 CL_StreamSync_DataList_BuildUpdatedList(const LocalClientNum_t localClientNum, const ComSnapshotStreamSyncList *requestList, const ClStreamSyncList *initialStreamList, const StreamSyncClientType clientSyncType, ClStreamSyncList *updatedStreamList)
{
  const ComSnapshotStreamSyncList *v5; 
  bool v9; 
  unsigned int v10; 
  __int64 v11; 
  char *v12; 
  int v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  CLStreamSyncItemState loadState; 
  __int64 v18; 
  __int64 v19; 
  unsigned int itemCount; 
  unsigned int MaxPackageCount; 
  char buf[512]; 

  v5 = requestList;
  updatedStreamList->itemCount = 0;
  if ( requestList->itemCount > Cl_StreamSync_GetMaxPackageCount(localClientNum, clientSyncType) )
  {
    MaxPackageCount = Cl_StreamSync_GetMaxPackageCount(localClientNum, clientSyncType);
    itemCount = v5->itemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 335, ASSERT_TYPE_ASSERT, "( requestList.itemCount ) <= ( Cl_StreamSync_GetMaxPackageCount( localClientNum, clientSyncType ) )", "%s <= %s\n\t%i, %i", "requestList.itemCount", "Cl_StreamSync_GetMaxPackageCount( localClientNum, clientSyncType )", itemCount, MaxPackageCount) )
      __debugbreak();
  }
  v9 = initialStreamList->itemCount != v5->itemCount;
  v10 = 0;
  if ( v5->itemCount )
  {
    do
    {
      if ( v10 >= 0x40 )
      {
        LODWORD(v19) = 64;
        LODWORD(v18) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( requestItemIndex ) < (unsigned)( ( sizeof( *array_counter( requestList.items ) ) + 0 ) )", "requestItemIndex doesn't index requestList.items\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v11 = (__int64)&v5->items[v10];
      if ( updatedStreamList->itemCount >= 0x40 )
      {
        LODWORD(v19) = 64;
        LODWORD(v18) = updatedStreamList->itemCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( updatedStreamList.itemCount ) < (unsigned)( ( sizeof( *array_counter( updatedStreamList.items ) ) + 0 ) )", "updatedStreamList.itemCount doesn't index ARRAY_COUNT( updatedStreamList.items )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v12 = (char *)updatedStreamList + 128 * (unsigned __int64)updatedStreamList->itemCount;
      *(__m256i *)(v12 + 4) = *(__m256i *)v11;
      *(_OWORD *)(v12 + 36) = *(_OWORD *)(v11 + 32);
      *(double *)(v12 + 52) = *(double *)(v11 + 48);
      *((_DWORD *)v12 + 15) = *(_DWORD *)(v11 + 56);
      v13 = *(unsigned __int8 *)(v11 + 60);
      v14 = 0;
      *((_DWORD *)v12 + 32) = v13;
      if ( initialStreamList->itemCount )
      {
        while ( !Com_StreamSyncEntry_AreEqual(&initialStreamList->items[(unsigned __int64)v14].streamSyncEntry, (const ComStreamSyncEntry *)(v12 + 4), clientSyncType) )
        {
          if ( ++v14 >= initialStreamList->itemCount )
            goto LABEL_14;
        }
        if ( v14 >= 0x40 )
        {
          LODWORD(v19) = 64;
          LODWORD(v18) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 353, ASSERT_TYPE_ASSERT, "(unsigned)( initialListIndex ) < (unsigned)( ( sizeof( *array_counter( initialStreamList.items ) ) + 0 ) )", "initialListIndex doesn't index ARRAY_COUNT( initialStreamList.items )\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( initialStreamList->items[(unsigned __int64)v14].loadState == CLS_ITEM_STATE_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(initialStreamList.items[initialListIndex].loadState != CLS_ITEM_STATE_UNLOADED)", "%s\n\tShould have processed loads on the same frame they were added", "initialStreamList.items[initialListIndex].loadState != CLS_ITEM_STATE_UNLOADED") )
          __debugbreak();
        loadState = initialStreamList->items[(unsigned __int64)v14].loadState;
      }
      else
      {
LABEL_14:
        v15 = DCONST_DVARBOOL_cl_streamSync_devVerbose;
        if ( !DCONST_DVARBOOL_cl_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamSync_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.enabled )
        {
          Com_StreamSyncEntry_DebugPrint(buf, 0x200u, (const ComStreamSyncEntry *)(v12 + 4), clientSyncType);
          LODWORD(v19) = Sys_Milliseconds();
          LODWORD(v18) = *((_DWORD *)v12 + 32);
          Com_Printf(14, "[%i] CL_StreamSync: New load request for model %d::%s{%d} at time %d\n", (unsigned int)localClientNum, (unsigned int)clientSyncType, buf, v18, v19);
        }
        v9 = 1;
        loadState = CLS_ITEM_STATE_UNLOADED;
      }
      v5 = requestList;
      *((_DWORD *)v12 + 31) = loadState;
      ++updatedStreamList->itemCount;
      ++v10;
    }
    while ( v10 < requestList->itemCount );
  }
  return v9;
}

/*
==============
CL_StreamSync_DataList_CommitNewSyncData
==============
*/
void CL_StreamSync_DataList_CommitNewSyncData(const LocalClientNum_t requestingLocalClientNum, const ComSnapshotStreamSyncList *requestList, const StreamSyncClientType clientStreamType)
{
  __int64 v3; 
  StreamSyncClientType v4; 
  int *p_isActive; 
  char v6; 
  __int64 v7; 
  int v8; 
  int *v9; 
  bool v10; 
  bool v11; 
  int v12; 
  bool v13; 
  ClStreamSyncList *ClientStreamList; 
  bool v15; 
  unsigned int itemCount; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  bool v22; 
  bool v23; 
  int *v25; 
  __int64 v26; 
  ClStreamSyncList mem; 

  v3 = requestingLocalClientNum;
  v4 = clientStreamType;
  if ( (unsigned int)requestingLocalClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", requestingLocalClientNum, 2) )
    __debugbreak();
  p_isActive = &s_clientsStreamInfo[0].isActive;
  v26 = v3;
  v25 = &s_clientsStreamInfo[0].isActive;
  if ( !s_clientsStreamInfo[v3].isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 443, ASSERT_TYPE_ASSERT, "(CL_StreamSync_IsClientStreamListActive( requestingLocalClientNum ))", (const char *)&queryFormat, "CL_StreamSync_IsClientStreamListActive( requestingLocalClientNum )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFAEBD7, "CL_StreamSync_DataList_CommitNewSyncData");
  if ( (unsigned int)v4 >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v19) = 6;
    LODWORD(v18) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 447, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "clientStreamType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v22 = 0;
  v6 = 1;
  DebugWipe(&mem, 0x2004ui64);
  v7 = 0i64;
  mem.itemCount = 0;
  v8 = 0;
  v9 = &s_clientsStreamInfo[0].isActive;
  v10 = (unsigned int)(v4 - 3) <= 1;
  v11 = 1;
  v23 = v10;
  do
  {
    if ( !v11 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( *v9 && (unsigned int)(v4 - 3) > 1 && CG_View_IsKillCamView((const LocalClientNum_t)v8) )
      v6 = 0;
    ++v8;
    v9 += 12301;
    v11 = (unsigned int)v8 < 2;
  }
  while ( v8 < 2 );
  v12 = 0;
  v13 = 1;
  do
  {
    if ( !v13 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( *p_isActive && (!v10 || v26 == v7) )
    {
      ClientStreamList = CL_StreamSync_GetClientStreamList((const LocalClientNum_t)v12, v4);
      if ( v6 )
      {
        v15 = CL_StreamSync_DataList_BuildUpdatedList((const LocalClientNum_t)v12, requestList, ClientStreamList, v4, &mem);
        itemCount = mem.itemCount;
        v22 = v15;
        if ( mem.itemCount != requestList->itemCount )
        {
          LODWORD(v21) = requestList->itemCount;
          LODWORD(v20) = mem.itemCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 496, ASSERT_TYPE_ASSERT, "( updatedStreamList.itemCount ) == ( requestList.itemCount )", "%s == %s\n\t%i, %i", "updatedStreamList.itemCount", "requestList.itemCount", v20, v21) )
            __debugbreak();
          itemCount = mem.itemCount;
        }
        if ( v15 )
        {
          CL_StreamSync_DataList_LoadModels((const LocalClientNum_t)v12, v4, &mem);
          v6 = 0;
        }
        else
        {
          if ( itemCount != ClientStreamList->itemCount )
          {
            LODWORD(v21) = ClientStreamList->itemCount;
            LODWORD(v20) = itemCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 504, ASSERT_TYPE_ASSERT, "( updatedStreamList.itemCount ) == ( clientStreamList.itemCount )", "%s == %s\n\t%i, %i", "updatedStreamList.itemCount", "clientStreamList.itemCount", v20, v21) )
              __debugbreak();
          }
          v6 = 0;
        }
      }
      else
      {
        v15 = v22;
      }
      if ( v15 )
        memcpy_0(ClientStreamList, &mem, sizeof(ClStreamSyncList));
      v17 = 0;
      if ( ClientStreamList->itemCount )
      {
        do
        {
          if ( ClientStreamList->items[(unsigned __int64)v17].request.assetCount > 0xD )
          {
            LODWORD(v21) = 13;
            LODWORD(v20) = ClientStreamList->items[(unsigned __int64)v17].request.assetCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 519, ASSERT_TYPE_ASSERT, "( request.assetCount ) <= ( ( sizeof( *array_counter( request.assetIds ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "request.assetCount", "ARRAY_COUNT( request.assetIds )", v20, v21) )
              __debugbreak();
          }
          ++v17;
        }
        while ( v17 < ClientStreamList->itemCount );
        p_isActive = v25;
        v4 = clientStreamType;
        v10 = v23;
      }
    }
    p_isActive += 12301;
    ++v12;
    ++v7;
    v25 = p_isActive;
    v13 = (unsigned int)v12 < 2;
  }
  while ( v12 < 2 );
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 524, ASSERT_TYPE_ASSERT, "(!buildUpdatedList)", "%s\n\tDid not find any client to commit the data to", "!buildUpdatedList") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_StreamSync_DataList_DevUnload
==============
*/
void CL_StreamSync_DataList_DevUnload()
{
  int v0; 
  connstate_t *p_connectionState; 
  bool v2; 
  int *p_isActive; 
  StreamSyncClientType i; 
  __int64 v5; 
  __int64 v6; 
  ComSnapshotStreamSyncList requestList; 

  memset_0(&requestList, 0, sizeof(requestList));
  CL_Streaming_UnloadAll();
  v0 = 0;
  p_connectionState = &clientUIActives[0].connectionState;
  v2 = 1;
  p_isActive = &s_clientsStreamInfo[0].isActive;
  do
  {
    if ( !v2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( *p_isActive )
    {
      for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
        CL_StreamSync_DataList_CommitNewSyncData((const LocalClientNum_t)v0, &requestList, i);
      if ( (unsigned int)v0 >= 2 )
      {
        LODWORD(v6) = 2;
        LODWORD(v5) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        CG_ViewMP_UpdateViewModelsStreamed((const LocalClientNum_t)v0);
    }
    ++v0;
    p_isActive += 12301;
    p_connectionState += 110;
    v2 = (unsigned int)v0 < 2;
  }
  while ( v0 < 2 );
}

/*
==============
CL_StreamSync_DataList_LoadModels
==============
*/
void CL_StreamSync_DataList_LoadModels(const LocalClientNum_t localClientNum, const StreamSyncClientType clientStreamType, ClStreamSyncList *updatedStreamList)
{
  __int64 v6; 
  unsigned int v7; 
  const dvar_t *v8; 
  unsigned int source; 
  int v10; 
  AssetStreamingPriority v11; 
  CustomizationModelType v12; 
  unsigned int assetCount; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  ClStreamingRequest *requests[64]; 
  char buf[520]; 

  v6 = 0i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_StreamSync_DataList_LoadModels");
  if ( updatedStreamList->itemCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 390, ASSERT_TYPE_ASSERT, "( updatedStreamList.itemCount ) <= ( ( sizeof( *array_counter( updatedStreamList.items ) ) + 0 ) )", "updatedStreamList.itemCount not in [0, ARRAY_COUNT( updatedStreamList.items )]\n\t%u not in [0, %u]", updatedStreamList->itemCount, 64) )
    __debugbreak();
  v7 = 0;
  if ( updatedStreamList->itemCount )
  {
    while ( 1 )
    {
      if ( v7 >= 0x40 )
      {
        LODWORD(v15) = 64;
        LODWORD(v14) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( ( sizeof( *array_counter( updatedStreamList.items ) ) + 0 ) )", "listIndex doesn't index ARRAY_COUNT( updatedStreamList.items )\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      v8 = DCONST_DVARBOOL_cl_streamSync_devVerbose;
      if ( !DCONST_DVARBOOL_cl_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamSync_devVerbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &updatedStreamList->items[(unsigned __int64)v7].streamSyncEntry, clientStreamType);
        LODWORD(v14) = updatedStreamList->items[(unsigned __int64)v7].source;
        Com_Printf(14, "[%i] CL_StreamSync: Processing load model request for model %i::%s{%i}\n", (unsigned int)localClientNum, (unsigned int)clientStreamType, buf, v14);
      }
      if ( (ClStreamSyncList *)((char *)updatedStreamList + 128 * (unsigned __int64)v7) == (ClStreamSyncList *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 208, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
        __debugbreak();
      source = updatedStreamList->items[(unsigned __int64)v7].source;
      if ( source )
        v10 = 1 << (source - 1);
      else
        v10 = 0;
      if ( (v10 & 0xFFFFFF88) != 0 )
        Com_PrintWarning(14, "WARNING: CL_StreamSync received unexpected AssetStreamingRequestSource %u.\n", source);
      v11.raw = Com_Streaming_GetPriority((const AssetStreamingRequestSource)source, v7, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT).raw;
      if ( clientStreamType )
      {
        if ( clientStreamType == STREAM_SYNC_CLIENT_TYPE_BODY )
        {
          if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_BODY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
            __debugbreak();
          v12 = CUSTOMIZATION_TYPE_BODY;
        }
        else
        {
          if ( clientStreamType == STREAM_SYNC_CLIENT_TYPE_WEAPON )
          {
            if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 122, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
              __debugbreak();
            CL_Streaming_GetWeaponWorldRequest((const Weapon *)&updatedStreamList->items[(unsigned __int64)v7], v11, &updatedStreamList->items[(unsigned __int64)v7].request);
            goto LABEL_49;
          }
          if ( clientStreamType != STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL )
          {
            if ( clientStreamType == STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON )
            {
              if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 122, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
                __debugbreak();
              CL_Streaming_GetWeaponViewRequest((const Weapon *)&updatedStreamList->items[(unsigned __int64)v7], v11, &updatedStreamList->items[(unsigned __int64)v7].request);
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 282, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Uknown streaming type") )
            {
              __debugbreak();
            }
            goto LABEL_49;
          }
          if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
            __debugbreak();
          v12 = CUSTOMIZATION_TYPE_VIEWHANDS;
        }
      }
      else
      {
        if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
          __debugbreak();
        v12 = CUSTOMIZATION_TYPE_HEAD;
      }
      CL_Streaming_GetCustomizationRequest(v12, updatedStreamList->items[(unsigned __int64)v7].streamSyncEntry.singleModelIndex, v11, &updatedStreamList->items[(unsigned __int64)v7].request);
LABEL_49:
      assetCount = updatedStreamList->items[(unsigned __int64)v7].request.assetCount;
      if ( assetCount )
      {
        if ( assetCount - 1 > 0xC )
        {
          LODWORD(v16) = 13;
          LODWORD(v15) = 1;
          LODWORD(v14) = updatedStreamList->items[(unsigned __int64)v7].request.assetCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 415, ASSERT_TYPE_ASSERT, "( 1 ) <= ( clientItem.request.assetCount ) && ( clientItem.request.assetCount ) <= ( MAX_ASSETS_PER_REQUEST )", "clientItem.request.assetCount not in [1, MAX_ASSETS_PER_REQUEST]\n\t%i not in [%i, %i]", v14, v15, v16) )
            __debugbreak();
        }
        requests[v6] = &updatedStreamList->items[(unsigned __int64)v7].request;
        v6 = (unsigned int)(v6 + 1);
        if ( updatedStreamList->items[(unsigned __int64)v7].loadState == CLS_ITEM_STATE_UNLOADED )
          updatedStreamList->items[(unsigned __int64)v7].loadState = CLS_ITEM_STATE_LOADING;
      }
      else
      {
        Com_PrintWarning(14, "[%i] CL_StreamSync: WARNING: Empty request for models. This is likely ok, and shouldn't happen often.\n", (unsigned int)localClientNum);
        updatedStreamList->items[(unsigned __int64)v7].loadState = CLS_ITEM_STATE_LOADED;
      }
      if ( ++v7 >= updatedStreamList->itemCount )
      {
        if ( (unsigned int)v6 > updatedStreamList->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 427, ASSERT_TYPE_ASSERT, "(numWrittenRequests <= updatedStreamList.itemCount)", (const char *)&queryFormat, "numWrittenRequests <= updatedStreamList.itemCount") )
          __debugbreak();
        if ( (_DWORD)v6 )
          CL_Streaming_AddClientRequestedAssets(localClientNum, (const ClStreamingRequest **)requests, v6, clientStreamType, CL_STREAMING_BUFFER_INPUT_1);
        break;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_StreamSync_GetClientStreamList
==============
*/
ClStreamSyncList *CL_StreamSync_GetClientStreamList(const LocalClientNum_t localClientNum, const StreamSyncClientType clientStreamType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = localClientNum;
  v3 = clientStreamType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v8) = 6;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "clientStreamType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = v2;
  if ( !s_clientsStreamInfo[v4].isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 89, ASSERT_TYPE_ASSERT, "(CL_StreamSync_IsClientStreamListActive( localClientNum ))", (const char *)&queryFormat, "CL_StreamSync_IsClientStreamListActive( localClientNum )") )
    __debugbreak();
  return (ClStreamSyncList *)((char *)s_clientsStreamInfo + 8196 * v3 + v4 * 49204);
}

/*
==============
CL_StreamSync_Init
==============
*/
void CL_StreamSync_Init(void)
{
  int *p_isActive; 
  unsigned int v1; 
  unsigned int *maxPackageCount; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  DebugWipe(s_clientsStreamInfo, 0x18068ui64);
  Cmd_AddCommandInternal("cl_streamSync_devUnload", CL_StreamSync_DataList_DevUnload, &stru_150BEE710);
  p_isActive = &s_clientsStreamInfo[0].isActive;
  v1 = 0;
  maxPackageCount = s_clientsStreamInfo[0].maxPackageCount;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    Com_Printf(14, "[%i] CL_StreamSync: Clearing all streaming sync information.\n", v1);
    DebugWipe(maxPackageCount - 12294, 0xC018ui64);
    DebugWipe(maxPackageCount, 0x18ui64);
    if ( v1 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    *p_isActive = 0;
    ++v1;
    p_isActive += 12301;
    maxPackageCount += 12301;
    v3 = v1 < 2;
  }
  while ( (int)v1 < 2 );
}

/*
==============
CL_StreamSync_IsClientStreamListActive
==============
*/
__int64 CL_StreamSync_IsClientStreamListActive(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)s_clientsStreamInfo[v1].isActive;
}

/*
==============
CL_StreamSync_IsRunning
==============
*/
char CL_StreamSync_IsRunning()
{
  int v0; 
  int *p_isActive; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0;
  p_isActive = &s_clientsStreamInfo[0].isActive;
  v2 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( *p_isActive )
      break;
    ++v0;
    p_isActive += 12301;
    v2 = (unsigned int)v0 < 2;
    if ( v0 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
CL_StreamSync_LoadMonitor_CheckForCompletion
==============
*/
void CL_StreamSync_LoadMonitor_CheckForCompletion(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  StreamSyncClientType i; 
  unsigned int v3; 
  ClStreamSyncList *ClientStreamList; 
  unsigned __int64 v5; 
  const ClStreamingRequest *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_clientsStreamInfo[v1].isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 653, ASSERT_TYPE_ASSERT, "(CL_StreamSync_IsClientStreamListActive( localClientNum ))", (const char *)&queryFormat, "CL_StreamSync_IsClientStreamListActive( localClientNum )") )
    __debugbreak();
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
  {
    v3 = 0;
    ClientStreamList = CL_StreamSync_GetClientStreamList((const LocalClientNum_t)v1, i);
    if ( ClientStreamList->itemCount )
    {
      do
      {
        v5 = (unsigned __int64)v3 << 7;
        v6 = (const ClStreamingRequest *)((char *)ClientStreamList->items + v5);
        if ( *(CLStreamSyncItemState *)((char *)&ClientStreamList->items[0].loadState + v5) == CLS_ITEM_STATE_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 665, ASSERT_TYPE_ASSERT, "(item.loadState != CLS_ITEM_STATE_UNLOADED)", "%s\n\tShould have requested the load on the same frame the request was received", "item.loadState != CLS_ITEM_STATE_UNLOADED") )
          __debugbreak();
        if ( v6[2].priority.raw != 2 )
        {
          if ( v6[1].assetCount - 1 > 0xC )
          {
            LODWORD(v9) = 13;
            LODWORD(v8) = 1;
            LODWORD(v7) = v6[1].assetCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 293, ASSERT_TYPE_ASSERT, "( 1 ) <= ( request.assetCount ) && ( request.assetCount ) <= ( ( sizeof( *array_counter( request.assetIds ) ) + 0 ) )", "request.assetCount not in [1, ARRAY_COUNT( request.assetIds )]\n\t%i not in [%i, %i]", v7, v8, v9) )
              __debugbreak();
          }
          if ( CL_Streaming_IsClientRequestLoaded((const LocalClientNum_t)v1, v6 + 1, i) )
          {
            v6[2].priority.raw = 2;
            if ( BG_Customization_IsEnabled() && i == STREAM_SYNC_CLIENT_TYPE_BODY )
            {
              if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_BODY) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
                  __debugbreak();
              }
              BG_Customization_ValidateModelEquivolence(CUSTOMIZATION_TYPE_BODY, LOWORD(v6->priority.raw));
            }
            CL_StreamSync_LoadMonitor_SendCompletionNotification((const LocalClientNum_t)v1, i, (const ComStreamSyncEntry *)v6);
          }
        }
        ++v3;
      }
      while ( v3 < ClientStreamList->itemCount );
    }
  }
}

/*
==============
CL_StreamSync_LoadMonitor_SendCompletionNotification
==============
*/
void CL_StreamSync_LoadMonitor_SendCompletionNotification(const LocalClientNum_t localClientNum, const StreamSyncClientType clientStreamType, const ComStreamSyncEntry *streamSyncEntry)
{
  __int64 v4; 
  __int64 v5; 
  const dvar_t *v6; 
  ComStreamSyncEntryType Type; 
  const Weapon *Weapon; 
  int SingleModelIndex; 
  int cursize; 
  unsigned __int8 *v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  msg_t buf; 
  char v19[512]; 
  unsigned __int8 data[1024]; 

  v4 = clientStreamType;
  v5 = localClientNum;
  if ( Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 572, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    v16 = 2;
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v16) )
      __debugbreak();
  }
  if ( clientUIActives[v5].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 573, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
    LODWORD(v17) = 2;
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v17) )
      __debugbreak();
  }
  if ( !clientUIActives[v5].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v5) >= CA_PRIMED )
  {
    MSG_Init(&buf, data, 1020);
    MSG_WriteByte(&buf, 83i64);
    v6 = DCONST_DVARBOOL_cl_streamSync_devVerbose;
    if ( !DCONST_DVARBOOL_cl_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamSync_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      Com_StreamSyncEntry_DebugPrint(v19, 0x200u, streamSyncEntry, (const StreamSyncClientType)v4);
      LODWORD(fmt) = v4;
      Com_Printf(14, "[%i] CL_StreamSync: Sending '%s' msg command to server for model %i::%s.\n", (unsigned int)v5, "CL_StreamSync_LoadMonitor_SendCompletionNotification", fmt, v19);
    }
    MSG_WriteByte(&buf, v4);
    Type = Com_StreamSyncEntry_GetType((const StreamSyncClientType)v4);
    if ( Type )
    {
      if ( Type == WEAPON )
      {
        Weapon = Com_StreamSyncEntry_GetWeapon(streamSyncEntry, (const StreamSyncClientType)v4);
        MSG_WriteWeapon(&buf, Weapon);
      }
      else
      {
        LODWORD(v13) = Type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 620, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown ComStreamSyncModelType : %d", v13) )
          __debugbreak();
      }
    }
    else
    {
      SingleModelIndex = Com_StreamSyncEntry_GetSingleModelIndex(streamSyncEntry, (const StreamSyncClientType)v4);
      MSG_WriteLong(&buf, SingleModelIndex);
    }
    cursize = buf.cursize;
    v11 = buf.data;
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(v15) = 2;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    if ( !ClConnection::ms_connections[v5] )
    {
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 31, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable binary command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
        __debugbreak();
    }
    if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v5) )
    {
      if ( (unsigned int)v5 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v15 = cl_maxLocalClients;
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      ClConnection::ms_connections[v5]->AddReliableBinaryCommand(ClConnection::ms_connections[v5], v11, cursize);
    }
  }
}

/*
==============
CL_StreamSync_ParseSnapshot
==============
*/
void CL_StreamSync_ParseSnapshot(const LocalClientNum_t localClientNum, msg_t *msg, const ComSnapshotStreamSync *fromSnap, ComSnapshotStreamSync *toSnap)
{
  StreamSyncClientType v8; 
  ComSnapshotStreamSync *v9; 
  const dvar_t *v10; 
  __int64 v11; 
  const ComSnapshotStreamSyncList *v12; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 793, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  DebugWipe(toSnap, 0x5D18ui64);
  v8 = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL;
  v9 = toSnap;
  do
  {
    if ( MSG_ReadBit(msg) )
    {
      v10 = DCONST_DVARBOOL_cl_streamSync_devVerbose;
      if ( !DCONST_DVARBOOL_cl_streamSync_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamSync_devVerbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        Com_Printf(14, "[%i] CL_StreamSync: Parse new Sync Data for type %d\n", (unsigned int)localClientNum, (unsigned int)v8);
      v11 = (unsigned int)v8;
      v12 = &fromSnap->itemLists[v11];
      if ( !fromSnap )
        v12 = NULL;
      Cl_StreamSync_DataList_ParseRequiredData(localClientNum, msg, v12, &toSnap->itemLists[v11], v8);
    }
    else if ( fromSnap )
    {
      memcpy_0(&toSnap->itemLists[v8], &fromSnap->itemLists[v8], sizeof(toSnap->itemLists[v8]));
    }
    else
    {
      v9->itemLists[0].itemCount = 0;
    }
    ++v8;
    v9 = (ComSnapshotStreamSync *)((char *)v9 + 3972);
  }
  while ( (unsigned int)v8 < STREAM_SYNC_CLIENT_TYPE_COUNT );
}

/*
==============
CL_StreamSync_Shutdown
==============
*/

void __fastcall CL_StreamSync_Shutdown(const LocalClientNum_t localClientNum)
{
  CL_StreamSync_Clear(localClientNum);
}

/*
==============
CL_StreamSync_Shutdown
==============
*/
void CL_StreamSync_Shutdown(void)
{
  Cmd_RemoveCommand("cl_streamSync_devUnload");
}

/*
==============
CL_StreamSync_Start
==============
*/
void CL_StreamSync_Start(void)
{
  StreamSyncWorldType i; 
  unsigned int MaxWorldEntryCount; 
  int j; 
  StreamSyncClientType k; 
  unsigned int MaxEntryCount; 
  bool IsLocalClientActive; 
  unsigned int v6; 
  unsigned int v7; 
  bool v8; 
  unsigned int v9; 

  if ( CL_UIStreaming_IsRunningTransients() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 923, ASSERT_TYPE_ASSERT, "(!CL_UIStreaming_IsRunningTransients())", (const char *)&queryFormat, "!CL_UIStreaming_IsRunningTransients()") )
    __debugbreak();
  for ( i = STREAM_SYNC_WORLD_TYPE_HEAD; (unsigned int)i < STREAM_SYNC_WORLD_TYPE_COUNT; ++i )
  {
    MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(i, cls.maxClients);
    CL_Streaming_SetMaxWorldRequestCount(i, MaxWorldEntryCount);
  }
  for ( j = 0; j < 2; ++j )
  {
    for ( k = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)k <= STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON; ++k )
    {
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      MaxEntryCount = Com_StreamSync_GetMaxEntryCount(k, cls.maxClients, cls.m_localClientsActive.activeCount);
      IsLocalClientActive = CL_IsLocalClientActive((LocalClientNum_t)j);
      v6 = 0;
      if ( IsLocalClientActive )
        v6 = MaxEntryCount;
      CL_Streaming_SetMaxClientRequestCount((const LocalClientNum_t)j, k, v6);
    }
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    v7 = Com_StreamSync_GetMaxEntryCount(STREAM_SYNC_CLIENT_TYPE_CLIENT_MODELS, cls.maxClients, cls.m_localClientsActive.activeCount);
    v8 = CL_IsLocalClientActive((LocalClientNum_t)j);
    v9 = 0;
    if ( v8 )
      v9 = v7;
    CL_Streaming_SetMaxClientRequestCount((const LocalClientNum_t)j, STREAM_SYNC_CLIENT_TYPE_CLIENT_MODELS, v9);
  }
}

/*
==============
CL_StreamSync_Update
==============
*/
void CL_StreamSync_Update(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int v3; 

  v1 = localClientNum;
  if ( Com_StreamSync_IsEnabled() && (unsigned int)CL_StreamSync_IsClientStreamListActive((const LocalClientNum_t)v1) )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      v3 = 2;
      v2 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    if ( clientUIActives[v1].frontEndSceneState[0] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 951, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShould not use StreamSync in the front-end server", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
    }
    CL_StreamSync_LoadMonitor_CheckForCompletion((const LocalClientNum_t)v1);
  }
}

/*
==============
CL_Streamsync_DebugGetClientData
==============
*/
__int64 CL_Streamsync_DebugGetClientData(const LocalClientNum_t localClientNum, const unsigned int rowIndex, ClientCustomizationInfo *outCustomization, unsigned int *outCustomizationLoaded)
{
  __int64 v4; 
  __int64 v5; 
  ClientCustomizationInfo *v7; 
  CustomizationModelType v9; 
  unsigned int v10; 
  char *v11; 
  StreamSyncClientType StreamTypeForCustomization; 
  ClStreamSyncList *ClientStreamList; 
  BOOL v14; 
  __int64 v15; 

  v4 = localClientNum;
  v5 = rowIndex;
  v7 = outCustomization;
  if ( !outCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 970, ASSERT_TYPE_ASSERT, "(outCustomization)", (const char *)&queryFormat, "outCustomization") )
    __debugbreak();
  if ( !outCustomizationLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 971, ASSERT_TYPE_ASSERT, "(outCustomizationLoaded)", (const char *)&queryFormat, "outCustomizationLoaded") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  if ( !s_clientsStreamInfo[v4].isActive )
    return 0i64;
  v9 = CUSTOMIZATION_TYPE_HEAD;
  v10 = 0;
  v11 = (char *)((char *)outCustomizationLoaded - (char *)v7);
  do
  {
    StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(v9);
    ClientStreamList = CL_StreamSync_GetClientStreamList((const LocalClientNum_t)v4, StreamTypeForCustomization);
    if ( (unsigned int)v5 >= ClientStreamList->itemCount )
    {
      v7->modelIndex[0] = 0xFFFF;
      v14 = 0;
    }
    else
    {
      ++v10;
      if ( Com_StreamSyncEntry_GetType(StreamTypeForCustomization) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 104, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
          __debugbreak();
      }
      v7->modelIndex[0] = ClientStreamList->items[v5].streamSyncEntry.singleModelIndex;
      v14 = ClientStreamList->items[v5].loadState == CLS_ITEM_STATE_LOADED;
    }
    *(unsigned int *)((char *)v7->modelIndex + (_QWORD)v11) = v14;
    ++v9;
    v7 = (ClientCustomizationInfo *)((char *)v7 + 4);
  }
  while ( (unsigned int)v9 < CUSTOMIZATION_TYPE_COUNT );
  return v10;
}

/*
==============
Cl_StreamSync_DataList_ParseRequiredData
==============
*/
__int64 Cl_StreamSync_DataList_ParseRequiredData(const LocalClientNum_t localClientNum, msg_t *msg, const ComSnapshotStreamSyncList *fromList, ComSnapshotStreamSyncList *newList, const StreamSyncClientType clientStreamType)
{
  double v5; 
  unsigned int Bits; 
  unsigned int v11; 
  signed __int64 v12; 
  ComSnapshotStreamSyncItem *items; 
  __int64 v14; 
  unsigned __int8 v15; 
  ComStreamSyncEntryType Type; 
  Weapon *v17; 
  __m256i v18; 
  int v19; 
  unsigned int BitCount; 
  unsigned int ModelLimit; 
  __int64 v22; 
  char *fmt; 
  __int64 v25; 
  __int64 v26; 
  unsigned int itemCount; 
  double v28; 
  signed __int64 v29; 
  __int128 v30; 
  Weapon result; 
  char buf[512]; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 693, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  Bits = MSG_ReadBits(msg, 6u);
  if ( msg->overflowed || Bits > Cl_StreamSync_GetMaxPackageCount(localClientNum, clientStreamType) )
  {
    LODWORD(v25) = Cl_StreamSync_GetMaxPackageCount(localClientNum, clientStreamType);
    LODWORD(fmt) = Bits;
    Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, readCount is invalid (%i) (%i > %i)\n", (unsigned int)localClientNum, (unsigned int)clientStreamType, fmt, v25);
    MSG_Discard(msg);
    return 0i64;
  }
  v11 = 0;
  if ( fromList )
    itemCount = fromList->itemCount;
  else
    itemCount = 0;
  if ( Bits > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 706, ASSERT_TYPE_ASSERT, "( readCount ) <= ( ( sizeof( *array_counter( newList.items ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "readCount", "ARRAY_COUNT( newList.items )", Bits, 64) )
    __debugbreak();
  newList->itemCount = Bits;
  if ( !Bits )
    return 1i64;
  v12 = (char *)fromList - (char *)newList;
  items = newList->items;
  v29 = v12;
  while ( 1 )
  {
    if ( !MSG_ReadBit(msg) )
    {
      if ( v11 >= itemCount )
      {
        MSG_Discard(msg);
        LODWORD(fmt) = itemCount;
        Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, out of range copy index (%u >= %u)\n", (unsigned int)localClientNum, v11, fmt);
        return 0i64;
      }
      *(__m256i *)&items->entry.singleModelIndex = *(__m256i *)((char *)&items->entry.singleModelIndex + v12);
      *(_OWORD *)&items->entry.weapon.attachmentVariationIndices[5] = *(_OWORD *)&items->entry.weapon.attachmentVariationIndices[v12 + 5];
      v5 = *(double *)&items->entry.weapon.attachmentVariationIndices[v12 + 21];
      *(double *)&items->entry.weapon.attachmentVariationIndices[21] = v5;
      *(_DWORD *)&items->entry.weapon.weaponCamo = *(_DWORD *)&items->entry.weapon.attachmentVariationIndices[v12 + 29];
      *(_WORD *)&items->source = *(_WORD *)(&items->source + v12);
      goto LABEL_40;
    }
    v14 = MSG_ReadBits(msg, 3u);
    v15 = v14;
    if ( (v14 < 0 || (unsigned __int64)v14 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v14, "signed", v14) )
      __debugbreak();
    items->source = v15;
    Type = Com_StreamSyncEntry_GetType(clientStreamType);
    if ( Type )
    {
      if ( Type != WEAPON )
      {
        LODWORD(fmt) = Type;
        Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, syncModelType is invalid (%i, %i)\n", (unsigned int)localClientNum, (unsigned int)clientStreamType, fmt);
        return 0i64;
      }
      v17 = MSG_ReadWeapon(&result, msg);
      v18 = *(__m256i *)&v17->weaponIdx;
      v19 = *(_DWORD *)&v17->weaponCamo;
      v30 = *(_OWORD *)&v17->attachmentVariationIndices[5];
      v28 = *(double *)&v17->attachmentVariationIndices[21];
      if ( !LOWORD(v5) )
      {
        Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, weapon is invalid (%i)\n", (unsigned int)localClientNum, (unsigned int)clientStreamType);
        return 0i64;
      }
      if ( Com_StreamSyncEntry_GetType(clientStreamType) != WEAPON && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 130, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::WEAPON") )
        __debugbreak();
      *(__m256i *)&items->entry.singleModelIndex = v18;
      LOWORD(v5) = LOWORD(v28);
      *(_OWORD *)&items->entry.weapon.attachmentVariationIndices[5] = v30;
      *(double *)&items->entry.weapon.attachmentVariationIndices[21] = v28;
      *(_DWORD *)&items->entry.weapon.weaponCamo = v19;
      goto LABEL_37;
    }
    BitCount = Com_StreamSync_GetBitCount(clientStreamType);
    ModelLimit = Com_StreamSync_GetModelLimit(clientStreamType);
    v22 = MSG_ReadBits(msg, BitCount);
    if ( (v22 < 0 || (unsigned __int64)v22 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v22, "signed", v22) )
      __debugbreak();
    if ( (unsigned int)v22 > ModelLimit )
      break;
    if ( Com_StreamSyncEntry_GetType(clientStreamType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
      __debugbreak();
    *(__m256i *)&items->entry.singleModelIndex = (__m256i)0;
    *(_OWORD *)&items->entry.weapon.attachmentVariationIndices[5] = 0ui64;
    LOWORD(v5) = 0;
    *(double *)&items->entry.weapon.attachmentVariationIndices[21] = 0i64;
    *(_DWORD *)&items->entry.weapon.weaponCamo = 0;
    v12 = v29;
    items->entry.singleModelIndex = truncate_cast<unsigned short,unsigned int>(v22);
LABEL_37:
    if ( msg->overflowed )
    {
      Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, overflowed\n", (unsigned int)localClientNum);
      return 0i64;
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cl_streamSync_devVerbose, "cl_streamSync_devVerbose") )
    {
      Com_StreamSyncEntry_DebugPrint(buf, 0x200u, &items->entry, clientStreamType);
      LODWORD(v26) = items->source;
      LODWORD(fmt) = Bits;
      Com_Printf(15, "CL_StreamSync: ParseRequiredData: (%i::%i/%i) %s {%i}\n", (unsigned int)clientStreamType, v11, fmt, buf, v26);
    }
LABEL_40:
    ++v11;
    ++items;
    if ( v11 >= Bits )
      return 1i64;
  }
  LODWORD(v25) = ModelLimit;
  LODWORD(fmt) = v22;
  Com_PrintError(14, "[%i] CL_StreamSync: Error parsing data, model index is invalid (%i::%i > %i)\n", (unsigned int)localClientNum, (unsigned int)clientStreamType, fmt, v25);
  return 0i64;
}

/*
==============
Cl_StreamSync_GetMaxPackageCount
==============
*/
__int64 Cl_StreamSync_GetMaxPackageCount(const LocalClientNum_t localClientNum, const StreamSyncClientType clientStreamType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = clientStreamType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v7) = 6;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "clientStreamType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_streamsync_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( s_clientsStreamInfo[v2].isActive )
    return s_clientsStreamInfo[v2].maxPackageCount[v3];
  else
    return 64i64;
}

