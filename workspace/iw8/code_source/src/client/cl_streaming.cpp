/*
==============
CL_Streaming_UnloadBodies
==============
*/

void __fastcall CL_Streaming_UnloadBodies()
{
  ?CL_Streaming_UnloadBodies@@YAXXZ();
}

/*
==============
CL_Streaming_Reset
==============
*/

void CL_Streaming_Reset(void)
{
  ?CL_Streaming_Reset@@YAXXZ();
}

/*
==============
CL_Streaming_AddWorldRequestedAssets
==============
*/

void __fastcall CL_Streaming_AddWorldRequestedAssets(const ClStreamingRequest **requests, const unsigned int requestCount, const StreamSyncWorldType requestType, const ClStreamingBufferNum bufferNum)
{
  ?CL_Streaming_AddWorldRequestedAssets@@YAXQEAPEBUClStreamingRequest@@IW4StreamSyncWorldType@@W4ClStreamingBufferNum@@@Z(requests, requestCount, requestType, bufferNum);
}

/*
==============
CL_Streaming_Images_HintImagesInCache
==============
*/

void __fastcall CL_Streaming_Images_HintImagesInCache(const LocalClientNum_t localClientNum, const ClStreamingImageUser user, const StreamMiniDistance hintDistance)
{
  ?CL_Streaming_Images_HintImagesInCache@@YAXW4LocalClientNum_t@@W4ClStreamingImageUser@@UStreamMiniDistance@@@Z(localClientNum, user, hintDistance);
}

/*
==============
CL_Streaming_GetRequestBuffer
==============
*/

ClStreamingRequestBuffer *__fastcall CL_Streaming_GetRequestBuffer(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType, const ClStreamingBufferNum bufferNum)
{
  return ?CL_Streaming_GetRequestBuffer@@YAAEAUClStreamingRequestBuffer@@W4LocalClientNum_t@@W4StreamSyncClientType@@W4ClStreamingBufferNum@@@Z(localClientNum, requestType, bufferNum);
}

/*
==============
CL_Streaming_UnloadViewArms
==============
*/

void __fastcall CL_Streaming_UnloadViewArms()
{
  ?CL_Streaming_UnloadViewArms@@YAXXZ();
}

/*
==============
CL_Streaming_GetWorldWeaponRequestLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetWorldWeaponRequestLimit(const LocalClientNum_t localClientNum)
{
  return ?CL_Streaming_GetWorldWeaponRequestLimit@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_GetWorldRequestModelsLoading
==============
*/

unsigned int __fastcall CL_Streaming_GetWorldRequestModelsLoading(const StreamSyncWorldType requestType)
{
  return ?CL_Streaming_GetWorldRequestModelsLoading@@YAIW4StreamSyncWorldType@@@Z(requestType);
}

/*
==============
CL_Streaming_Shutdown
==============
*/

void CL_Streaming_Shutdown(void)
{
  ?CL_Streaming_Shutdown@@YAXXZ();
}

/*
==============
CL_Streaming_InitLimits
==============
*/

void CL_Streaming_InitLimits(void)
{
  ?CL_Streaming_InitLimits@@YAXXZ();
}

/*
==============
CL_Streaming_OnLevelLoad
==============
*/

void CL_Streaming_OnLevelLoad(void)
{
  ?CL_Streaming_OnLevelLoad@@YAXXZ();
}

/*
==============
CL_Streaming_AnyWorldRequestsLoadedThisFrame
==============
*/

bool __fastcall CL_Streaming_AnyWorldRequestsLoadedThisFrame(const StreamSyncWorldType requestType)
{
  return ?CL_Streaming_AnyWorldRequestsLoadedThisFrame@@YA_NW4StreamSyncWorldType@@@Z(requestType);
}

/*
==============
CL_Streaming_AnyClientRequestsLoadedThisFrame
==============
*/

bool __fastcall CL_Streaming_AnyClientRequestsLoadedThisFrame(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  return ?CL_Streaming_AnyClientRequestsLoadedThisFrame@@YA_NW4LocalClientNum_t@@W4StreamSyncClientType@@@Z(localClientNum, requestType);
}

/*
==============
CL_Streaming_GetWeaponWorldRequest
==============
*/

void __fastcall CL_Streaming_GetWeaponWorldRequest(const Weapon *weapon, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  ?CL_Streaming_GetWeaponWorldRequest@@YAXAEBUWeapon@@TAssetStreamingPriority@@PEAUClStreamingRequest@@@Z(weapon, priority, outRequest);
}

/*
==============
CL_Streaming_OnLevelUnload
==============
*/

void CL_Streaming_OnLevelUnload(void)
{
  ?CL_Streaming_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_Streaming_GetWeaponViewModels
==============
*/

void __fastcall CL_Streaming_GetWeaponViewModels(const Weapon *weapon, ClStreamingModelList *outModelList)
{
  ?CL_Streaming_GetWeaponViewModels@@YAXAEBUWeapon@@PEAUClStreamingModelList@@@Z(weapon, outModelList);
}

/*
==============
CL_Streaming_GetPendingRequestedAssets
==============
*/

void __fastcall CL_Streaming_GetPendingRequestedAssets(unsigned int *outModelCount, unsigned int *outImageCount)
{
  ?CL_Streaming_GetPendingRequestedAssets@@YAXAEAI0@Z(outModelCount, outImageCount);
}

/*
==============
CL_Streaming_IsClientRequestLoaded
==============
*/

bool __fastcall CL_Streaming_IsClientRequestLoaded(const LocalClientNum_t localClientNum, const ClStreamingRequest *request, const StreamSyncClientType requestType)
{
  return ?CL_Streaming_IsClientRequestLoaded@@YA_NW4LocalClientNum_t@@PEBUClStreamingRequest@@W4StreamSyncClientType@@@Z(localClientNum, request, requestType);
}

/*
==============
CL_Streaming_UnloadHeads
==============
*/

void __fastcall CL_Streaming_UnloadHeads()
{
  ?CL_Streaming_UnloadHeads@@YAXXZ();
}

/*
==============
CL_Streaming_UnloadViewWeapons
==============
*/

void __fastcall CL_Streaming_UnloadViewWeapons()
{
  ?CL_Streaming_UnloadViewWeapons@@YAXXZ();
}

/*
==============
CL_Streaming_IsWorldRequestLoaded
==============
*/

bool __fastcall CL_Streaming_IsWorldRequestLoaded(const ClStreamingRequest *request, const StreamSyncWorldType requestType)
{
  return ?CL_Streaming_IsWorldRequestLoaded@@YA_NPEBUClStreamingRequest@@W4StreamSyncWorldType@@@Z(request, requestType);
}

/*
==============
CL_Streaming_GetLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetLimit(const LocalClientNum_t localClientNum, const StreamSyncClientType streamSyncType)
{
  return ?CL_Streaming_GetLimit@@YAIW4LocalClientNum_t@@W4StreamSyncClientType@@@Z(localClientNum, streamSyncType);
}

/*
==============
CL_Streaming_GetWeaponViewRequest
==============
*/

void __fastcall CL_Streaming_GetWeaponViewRequest(const Weapon *weapon, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  ?CL_Streaming_GetWeaponViewRequest@@YAXAEBUWeapon@@TAssetStreamingPriority@@PEAUClStreamingRequest@@@Z(weapon, priority, outRequest);
}

/*
==============
CL_Streaming_SetMaxClientRequestCount
==============
*/

void __fastcall CL_Streaming_SetMaxClientRequestCount(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType, const unsigned int maxRequestCount)
{
  ?CL_Streaming_SetMaxClientRequestCount@@YAXW4LocalClientNum_t@@W4StreamSyncClientType@@I@Z(localClientNum, requestType, maxRequestCount);
}

/*
==============
CL_Streaming_ReportLimits
==============
*/

void CL_Streaming_ReportLimits(void)
{
  ?CL_Streaming_ReportLimits@@YAXXZ();
}

/*
==============
CL_Streaming_CancelLoadingRequests
==============
*/

void __fastcall CL_Streaming_CancelLoadingRequests(const LocalClientNum_t localClientNum)
{
  ?CL_Streaming_CancelLoadingRequests@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_GetViewArmsRequestLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetViewArmsRequestLimit(const LocalClientNum_t localClientNum)
{
  return ?CL_Streaming_GetViewArmsRequestLimit@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_GetClientRequestModelsLoading
==============
*/

unsigned int __fastcall CL_Streaming_GetClientRequestModelsLoading(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  return ?CL_Streaming_GetClientRequestModelsLoading@@YAIW4LocalClientNum_t@@W4StreamSyncClientType@@@Z(localClientNum, requestType);
}

/*
==============
CL_Streaming_GetCustomizationRequest
==============
*/

void __fastcall CL_Streaming_GetCustomizationRequest(const CustomizationModelType customizationType, const unsigned int modelIndex, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  ?CL_Streaming_GetCustomizationRequest@@YAXW4CustomizationModelType@@ITAssetStreamingPriority@@PEAUClStreamingRequest@@@Z(customizationType, modelIndex, priority, outRequest);
}

/*
==============
CL_Streaming_SetMaxWorldRequestCount
==============
*/

void __fastcall CL_Streaming_SetMaxWorldRequestCount(const StreamSyncWorldType requestType, const unsigned int maxRequestCount)
{
  ?CL_Streaming_SetMaxWorldRequestCount@@YAXW4StreamSyncWorldType@@I@Z(requestType, maxRequestCount);
}

/*
==============
CL_Streaming_Images_ClearImages
==============
*/

void __fastcall CL_Streaming_Images_ClearImages(const LocalClientNum_t localClientNum, const ClStreamingImageUser user)
{
  ?CL_Streaming_Images_ClearImages@@YAXW4LocalClientNum_t@@W4ClStreamingImageUser@@@Z(localClientNum, user);
}

/*
==============
CL_Streaming_GetSingleModelRequest
==============
*/

void __fastcall CL_Streaming_GetSingleModelRequest(const char *const modelName, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  ?CL_Streaming_GetSingleModelRequest@@YAXQEBDTAssetStreamingPriority@@PEAUClStreamingRequest@@@Z(modelName, priority, outRequest);
}

/*
==============
CL_Streaming_IsWeaponWorldRequestLoaded
==============
*/

bool __fastcall CL_Streaming_IsWeaponWorldRequestLoaded(const Weapon *weapon)
{
  return ?CL_Streaming_IsWeaponWorldRequestLoaded@@YA_NAEBUWeapon@@@Z(weapon);
}

/*
==============
CL_Streaming_UnloadAll
==============
*/

void __fastcall CL_Streaming_UnloadAll()
{
  ?CL_Streaming_UnloadAll@@YAXXZ();
}

/*
==============
CL_Streaming_Images_AddImage
==============
*/

void __fastcall CL_Streaming_Images_AddImage(const LocalClientNum_t localClientNum, const ClStreamingImageUser user, const unsigned int imageIndex)
{
  ?CL_Streaming_Images_AddImage@@YAXW4LocalClientNum_t@@W4ClStreamingImageUser@@I@Z(localClientNum, user, imageIndex);
}

/*
==============
CL_Streaming_CancelAllLoadingRequests
==============
*/

void CL_Streaming_CancelAllLoadingRequests(void)
{
  ?CL_Streaming_CancelAllLoadingRequests@@YAXXZ();
}

/*
==============
CL_Streaming_GetHeadRequestLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetHeadRequestLimit(const LocalClientNum_t localClientNum)
{
  return ?CL_Streaming_GetHeadRequestLimit@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_DrawOverlay
==============
*/

void __fastcall CL_Streaming_DrawOverlay(const ScreenPlacement *const scrPlace)
{
  ?CL_Streaming_DrawOverlay@@YAXQEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
CL_Streaming_GetWorldRequestImagesLoading
==============
*/

unsigned int __fastcall CL_Streaming_GetWorldRequestImagesLoading(const StreamSyncWorldType requestType)
{
  return ?CL_Streaming_GetWorldRequestImagesLoading@@YAIW4StreamSyncWorldType@@@Z(requestType);
}

/*
==============
CL_Streaming_GetViewWeaponRequestLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetViewWeaponRequestLimit(const LocalClientNum_t localClientNum)
{
  return ?CL_Streaming_GetViewWeaponRequestLimit@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_AddClientRequestedAssets
==============
*/

void __fastcall CL_Streaming_AddClientRequestedAssets(const LocalClientNum_t localClientNum, const ClStreamingRequest **requests, const unsigned int requestCount, const StreamSyncClientType requestType, const ClStreamingBufferNum bufferNum)
{
  ?CL_Streaming_AddClientRequestedAssets@@YAXW4LocalClientNum_t@@QEAPEBUClStreamingRequest@@IW4StreamSyncClientType@@W4ClStreamingBufferNum@@@Z(localClientNum, requests, requestCount, requestType, bufferNum);
}

/*
==============
CL_Streaming_Init
==============
*/

void CL_Streaming_Init(void)
{
  ?CL_Streaming_Init@@YAXXZ();
}

/*
==============
CL_Streaming_GetClientRequestImagesLoading
==============
*/

unsigned int __fastcall CL_Streaming_GetClientRequestImagesLoading(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  return ?CL_Streaming_GetClientRequestImagesLoading@@YAIW4LocalClientNum_t@@W4StreamSyncClientType@@@Z(localClientNum, requestType);
}

/*
==============
CL_Streaming_InitImagePool
==============
*/

void CL_Streaming_InitImagePool(void)
{
  ?CL_Streaming_InitImagePool@@YAXXZ();
}

/*
==============
CL_Streaming_CheckForTransientReloads
==============
*/

void CL_Streaming_CheckForTransientReloads(void)
{
  ?CL_Streaming_CheckForTransientReloads@@YAXXZ();
}

/*
==============
CL_Streaming_UnloadWeapons
==============
*/

void __fastcall CL_Streaming_UnloadWeapons()
{
  ?CL_Streaming_UnloadWeapons@@YAXXZ();
}

/*
==============
CL_Streaming_GetBodyRequestLimit
==============
*/

unsigned int __fastcall CL_Streaming_GetBodyRequestLimit(const LocalClientNum_t localClientNum)
{
  return ?CL_Streaming_GetBodyRequestLimit@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Streaming_Update
==============
*/

void CL_Streaming_Update(void)
{
  ?CL_Streaming_Update@@YAXXZ();
}

/*
==============
CL_Streaming_IsWeaponViewRequestLoaded
==============
*/

bool __fastcall CL_Streaming_IsWeaponViewRequestLoaded(const LocalClientNum_t localClientNum, const Weapon *weapon)
{
  return ?CL_Streaming_IsWeaponViewRequestLoaded@@YA_NW4LocalClientNum_t@@AEBUWeapon@@@Z(localClientNum, weapon);
}

/*
==============
CL_Streaming_AddClientRequestedAssets
==============
*/
void CL_Streaming_AddClientRequestedAssets(const LocalClientNum_t localClientNum, const ClStreamingRequest **requests, const unsigned int requestCount, const StreamSyncClientType requestType, const ClStreamingBufferNum bufferNum)
{
  ClStreamingRequestBuffer *RequestBuffer; 
  __int64 v10; 

  if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3086, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v10) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3087, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v10, 6) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_AddClientRequestedAssets");
  RequestBuffer = CL_Streaming_GetRequestBuffer(localClientNum, requestType, bufferNum);
  CL_Streaming_AssignRequestsToBuffer(RequestBuffer, requests, requestCount);
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_AddRequestsToQueue
==============
*/
void CL_Streaming_AddRequestsToQueue(StreamRequestQueue *requestQueue, const ClStreamingRequest *requests, const unsigned int requestCount, const StreamSyncClientType requestType)
{
  const ClStreamingRequest *v6; 
  unsigned int v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const ClStreamingRequest *v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  StreamRequestItem *requestItem; 
  unsigned int rebuildCount; 
  AssetStreamingPriority v16; 
  unsigned int v17; 
  unsigned int v18; 
  StreamRequestItem *v20; 
  const dvar_t *v21; 
  ClGameModeApplication *ActiveClientApplication; 
  __int64 i; 
  const char *v24; 
  const dvar_t *v25; 
  unsigned int v26; 
  const dvar_t *v27; 
  const unsigned int *p_assetCount; 
  const unsigned int *assetIds; 
  char *fmt; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int outRequestIndex; 
  unsigned int v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  const ClStreamingRequest *v39; 
  __int64 v40; 
  __int64 v41[2]; 
  char outRequestString[1032]; 

  v40 = -2i64;
  v6 = requests;
  v39 = requests;
  v41[0] = 0i64;
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2861, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2862, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v31) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2863, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v31, 6) )
      __debugbreak();
  }
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v32) = requestQueue->maxRequestCount;
    LODWORD(v31) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2864, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v31, v32) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_AddRequestsToQueue");
  v8 = 0;
  v36 = 0;
  if ( requestCount )
  {
    v9 = 0i64;
    v37 = 0i64;
    v10 = (__int64)v6;
    v38 = (__int64)v6;
    v11 = v6;
    while ( 1 )
    {
      if ( CL_Streaming_FindRequest(requestQueue, v11, &outRequestIndex) )
      {
        v12 = outRequestIndex;
        if ( outRequestIndex >= requestQueue->requestCount )
        {
          LODWORD(v32) = requestQueue->requestCount;
          LODWORD(v31) = outRequestIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2875, ASSERT_TYPE_ASSERT, "(unsigned)( queueIndex ) < (unsigned)( requestQueue->requestCount )", "queueIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        if ( requestQueue->requestItem[v12].requestLoadState == STREAM_REQUEST_STATE_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2876, ASSERT_TYPE_ASSERT, "(requestQueue->requestItem[queueIndex].requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_UNLOADED)", (const char *)&queryFormat, "requestQueue->requestItem[queueIndex].requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_UNLOADED") )
          __debugbreak();
        v13 = v12;
        requestItem = requestQueue->requestItem;
        rebuildCount = requestQueue->rebuildCount;
        if ( rebuildCount <= requestQueue->requestItem[v12].requestTime )
        {
          v16.raw = (unsigned int)requestItem[v13].requestPriority;
          v17 = (v16.raw >> 23) & 7;
          v18 = (*(_DWORD *)v10 >> 23) & 7;
          if ( v17 <= v18 && (v17 != v18 || (v16.raw & 0x7F8000) >= (*(_DWORD *)v10 & 0x7F8000u)) )
            v16.raw = *(unsigned int *)v10;
        }
        else
        {
          requestItem[v13].requestTime = rebuildCount;
          requestItem = requestQueue->requestItem;
          v16.raw = *(unsigned int *)v10;
        }
        if ( requestItem[v13].requestPriority.raw != v16.raw )
        {
          requestItem[v13].requestPriority = v16;
          v20 = &requestQueue->requestItem[v13];
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1320, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
            __debugbreak();
          if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
          {
            LODWORD(v32) = 6;
            LODWORD(v31) = requestType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1321, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v31, v32) )
              __debugbreak();
          }
          v21 = DCONST_DVARBOOL_cl_streaming_devVerbose;
          if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v21->current.enabled )
          {
            CL_Streaming_GetRequestItemModelsText(v20, outRequestString, 0x400u);
            LODWORD(v31) = Sys_Milliseconds();
            LODWORD(fmt) = v20->requestPriority.raw;
            Com_Printf(14, "CL_Streaming: Updating load request for request %d::%s{%d} at time %d\n", (unsigned int)requestType, outRequestString, fmt, v31);
          }
          ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
          for ( i = 0i64; (unsigned int)i < v20->requestAssetCount; i = (unsigned int)(i + 1) )
          {
            v24 = CL_Streaming_AssetId_ConvertToString(v20->requestAssets[i].assetId);
            ((void (__fastcall *)(ClGameModeApplication *, const char *, _QWORD))ActiveClientApplication->SetLoadPriority)(ActiveClientApplication, v24, v20->requestPriority.raw);
          }
          v9 = v37;
          v10 = v38;
          v8 = v36;
        }
        requestQueue->requestItem[v12].requestFromDev = 0;
        goto LABEL_65;
      }
      if ( requestQueue->requestCount < requestQueue->maxRequestCount )
        break;
      if ( !CL_Streaming_FindLRURequest(requestQueue, &outRequestIndex, v11) )
      {
        v25 = DCONST_DVARBOOL_cl_streaming_devVerbose;
        if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        if ( v25->current.enabled )
        {
          CL_Streaming_DevPrintRequestQueue(requestQueue, requestType);
          CL_Streaming_GetStreamingAssetsText(v11->assetIds, *(_DWORD *)(v10 + 4), outRequestString, 1024);
          Com_Printf(14, "CL_Streaming: Unable to add the specified request to the request queue: %s\n", outRequestString);
        }
        if ( v8 >= 0x40 )
        {
          LODWORD(v34) = 64;
          LODWORD(v33) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v33, v34) )
            __debugbreak();
        }
        v9 = v37;
        *((_DWORD *)v41 + (v37 >> 5)) |= 0x80000000 >> (v8 & 0x1F);
        goto LABEL_65;
      }
      if ( !CL_Streaming_ReplaceRequest(requestQueue, outRequestIndex, v11, requestType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2905, ASSERT_TYPE_ASSERT, "(CL_Streaming_ReplaceRequest( requestQueue, queueIndex, &requests[requestIndex], requestType ))", (const char *)&queryFormat, "CL_Streaming_ReplaceRequest( requestQueue, queueIndex, &requests[requestIndex], requestType )") )
        goto LABEL_51;
LABEL_65:
      v36 = ++v8;
      v37 = ++v9;
      ++v11;
      v10 += 60i64;
      v38 = v10;
      if ( v8 >= requestCount )
      {
        v6 = v39;
        goto LABEL_67;
      }
    }
    if ( CL_Streaming_StartRequest(requestQueue, v11, requestType) || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2900, ASSERT_TYPE_ASSERT, "(CL_Streaming_StartRequest( requestQueue, &requests[requestIndex], requestType ))", (const char *)&queryFormat, "CL_Streaming_StartRequest( requestQueue, &requests[requestIndex], requestType )") )
      goto LABEL_65;
LABEL_51:
    __debugbreak();
    goto LABEL_65;
  }
LABEL_67:
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_AddRequestsToQueue - Validation");
  v26 = 0;
  if ( requestCount )
  {
    while ( 1 )
    {
      if ( !CL_Streaming_FindRequest(requestQueue, &v6[v26], &outRequestIndex) )
      {
        if ( v26 >= 0x40 )
        {
          LODWORD(v32) = 64;
          LODWORD(v31) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v26 & 0x1F)) & *((_DWORD *)v41 + ((unsigned __int64)v26 >> 5))) == 0 )
          break;
      }
      if ( ++v26 >= requestCount )
        goto LABEL_74;
    }
    v27 = DCONST_DVARBOOL_cl_streaming_devVerbose;
    if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      CL_Streaming_DevPrintRequestQueue(requestQueue, requestType);
      Com_Printf(14, "Trying to add %d new requests\n", requestCount);
      v26 = 0;
      p_assetCount = &v6->assetCount;
      assetIds = v6->assetIds;
      do
      {
        CL_Streaming_GetStreamingAssetsText(assetIds, *p_assetCount, outRequestString, 1024);
        Com_Printf(14, "[%d] Requested %s\n", v26++, outRequestString);
        assetIds += 15;
        p_assetCount += 15;
      }
      while ( v26 < requestCount );
    }
    CL_Streaming_GetStreamingAssetsText(v6[v26].assetIds, v6[v26].assetCount, outRequestString, 1024);
    LODWORD(v31) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2951, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_Streaming_AddRequestedAssets: Asset removed from queue (%d) during add\n", v31) )
      __debugbreak();
  }
LABEL_74:
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_AddRequiredImagesForRequest
==============
*/
void CL_Streaming_AddRequiredImagesForRequest(StreamRequestItem *const requestItem, const StreamSyncClientType requestType)
{
  StreamModelLod RequiredStreamModelLod; 
  StreamImageMip RequiredStreamImageMip; 
  StreamImageMip v6; 
  unsigned __int8 v7; 
  unsigned int i; 
  const char *v9; 
  XAssetHeader v10; 
  int v11; 
  unsigned __int8 requestLoadingImageCount; 
  __int64 v13; 

  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1598, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v13) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1599, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v13, 6) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_AddRequiredImagesForRequest");
  RequiredStreamModelLod = CL_Streaming_GetRequiredStreamModelLod(requestType);
  RequiredStreamImageMip = CL_Streaming_GetRequiredStreamImageMip(requestType);
  v6 = RequiredStreamImageMip;
  if ( RequiredStreamModelLod && RequiredStreamImageMip )
  {
    v7 = 0;
    for ( i = 0; i < requestItem->requestAssetCount; ++i )
    {
      v9 = CL_Streaming_AssetId_ConvertToString(requestItem->requestAssets[i].assetId);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1618, ASSERT_TYPE_ASSERT, "( ( assetName != nullptr ) )", "( assetName ) = %p", NULL) )
        __debugbreak();
      if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1619, ASSERT_TYPE_ASSERT, "(assetName[0] != '\\0')", (const char *)&queryFormat, "assetName[0] != '\\0'") )
        __debugbreak();
      v10.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v9, 0).physicsLibrary;
      if ( v10.physicsLibrary )
      {
        v11 = CL_Streaming_Images_AddImagesForXModelToRequest(v10.model, RequiredStreamModelLod, v6, requestItem);
        if ( 255 - v7 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1629, ASSERT_TYPE_ASSERT, "(0xffui8 - imageCount >= imagesAdded)", (const char *)&queryFormat, "UINT8_MAX - imageCount >= imagesAdded") )
          __debugbreak();
        v7 += v11;
      }
      else
      {
        Com_PrintError(14, "CL_Streaming failed to find asset header for XModel '%s'.\n", v9);
      }
    }
    requestLoadingImageCount = requestItem->requestLoadingImageCount;
    if ( requestLoadingImageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1640, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingImageCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingImageCount", "0", requestLoadingImageCount, 0i64) )
      __debugbreak();
    requestItem->requestLoadingImageCount = v7;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_AddWeaponRequest
==============
*/
void CL_Streaming_AddWeaponRequest(const XModel *const model, ClStreamingRequest *outRequest)
{
  unsigned int v4; 
  const char *v5; 
  const char *name; 
  __int64 v7; 

  if ( !outRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3199, ASSERT_TYPE_ASSERT, "(outRequest)", (const char *)&queryFormat, "outRequest") )
    __debugbreak();
  if ( outRequest->assetCount > 0xD )
  {
    LODWORD(v7) = outRequest->assetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3200, ASSERT_TYPE_ASSERT, "( outRequest->assetCount ) <= ( MAX_ASSETS_PER_REQUEST )", "outRequest->assetCount not in [0, MAX_ASSETS_PER_REQUEST]\n\t%u not in [0, %u]", v7, 13) )
      __debugbreak();
  }
  if ( model )
  {
    if ( outRequest->assetCount == 13 )
    {
      v4 = 0;
      do
      {
        v5 = CL_Streaming_AssetId_ConvertToString(outRequest->assetIds[v4]);
        Com_Printf(1, "Requested asset %s\n", v5);
        ++v4;
      }
      while ( v4 < outRequest->assetCount );
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144202C70, 1132i64);
    }
    else
    {
      name = model->name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3221, ASSERT_TYPE_ASSERT, "( ( modelName != nullptr ) )", "( modelName ) = %p", NULL) )
        __debugbreak();
      if ( *name )
        outRequest->assetIds[outRequest->assetCount++] = CL_Streaming_AssetId_GetFromName(name);
    }
  }
}

/*
==============
CL_Streaming_AddWorldRequestedAssets
==============
*/
void CL_Streaming_AddWorldRequestedAssets(const ClStreamingRequest **requests, const unsigned int requestCount, const StreamSyncWorldType requestType, const ClStreamingBufferNum bufferNum)
{
  ClStreamingRequestBuffer *RequestBuffer; 
  __int64 v9; 

  if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3073, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_WORLD_TYPE_COUNT )
  {
    LODWORD(v9) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3074, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", v9, 3) )
      __debugbreak();
  }
  RequestBuffer = CL_Streaming_GetRequestBuffer(LOCAL_CLIENT_0, (const StreamSyncClientType)requestType, bufferNum);
  CL_Streaming_AssignRequestsToBuffer(RequestBuffer, requests, requestCount);
}

/*
==============
CL_Streaming_AnyClientRequestsLoadedThisFrame
==============
*/
__int64 CL_Streaming_AnyClientRequestsLoadedThisFrame(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  StreamRequestQueue *ClientRequestQueue; 

  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, requestType);
  if ( ClientRequestQueue )
    return ClientRequestQueue->anyRequestsLoadedThisFrame;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2179, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return MEMORY[0x28];
}

/*
==============
CL_Streaming_AnyWorldRequestsLoadedThisFrame
==============
*/
_BOOL8 CL_Streaming_AnyWorldRequestsLoadedThisFrame(const StreamSyncWorldType requestType)
{
  __int64 v1; 
  StreamRequestQueue *v2; 

  v1 = requestType;
  if ( (unsigned int)requestType >= STREAM_SYNC_WORLD_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", requestType, 3) )
    __debugbreak();
  v2 = s_worldRequestQueue[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2187, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return v2->anyRequestsLoadedThisFrame;
}

/*
==============
CL_Streaming_AssetId_ConvertToString
==============
*/
const char *CL_Streaming_AssetId_ConvertToString(const unsigned int assetId)
{
  const char *v2; 

  if ( !CL_Streaming_AssetId_IsValid(assetId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 343, ASSERT_TYPE_ASSERT, "(CL_Streaming_AssetId_IsValid( assetId ))", (const char *)&queryFormat, "CL_Streaming_AssetId_IsValid( assetId )") )
    __debugbreak();
  v2 = SL_ConvertToString((scr_string_t)assetId);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 347, ASSERT_TYPE_ASSERT, "( ( assetName != nullptr ) )", "( assetName ) = %p", NULL) )
    __debugbreak();
  if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 348, ASSERT_TYPE_ASSERT, "(assetName[0] != '\\0')", (const char *)&queryFormat, "assetName[0] != '\\0'") )
    __debugbreak();
  return v2;
}

/*
==============
CL_Streaming_AssetId_GetFromName
==============
*/
__int64 CL_Streaming_AssetId_GetFromName(const char *const assetName)
{
  unsigned int String; 

  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 356, ASSERT_TYPE_ASSERT, "( ( assetName != nullptr ) )", "( assetName ) = %p", NULL) )
    __debugbreak();
  if ( !*assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 357, ASSERT_TYPE_ASSERT, "(assetName[0] != '\\0')", (const char *)&queryFormat, "assetName[0] != '\\0'") )
    __debugbreak();
  String = SL_GetString(assetName, 0x20u);
  if ( !CL_Streaming_AssetId_IsValid(String) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 361, ASSERT_TYPE_ASSERT, "(CL_Streaming_AssetId_IsValid( assetId ))", (const char *)&queryFormat, "CL_Streaming_AssetId_IsValid( assetId )") )
    __debugbreak();
  return String;
}

/*
==============
CL_Streaming_AssetId_IsValid
==============
*/
bool CL_Streaming_AssetId_IsValid(const unsigned int assetId)
{
  return assetId && 16 * assetId < 0x800000;
}

/*
==============
CL_Streaming_AssignRequestsToBuffer
==============
*/
void CL_Streaming_AssignRequestsToBuffer(ClStreamingRequestBuffer *buffer, const ClStreamingRequest **requests, const unsigned int requestCount)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  ClStreamingRequest *v9; 
  unsigned int maxRequestCount; 

  v4 = requestCount;
  if ( requestCount > buffer->maxRequestCount )
  {
    maxRequestCount = buffer->maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3059, ASSERT_TYPE_ASSERT, "( requestCount ) <= ( buffer.maxRequestCount )", "requestCount not in [0, buffer.maxRequestCount]\n\t%u not in [0, %u]", requestCount, maxRequestCount) )
      __debugbreak();
  }
  if ( (_DWORD)v4 )
  {
    v6 = 0i64;
    v7 = v4;
    do
    {
      v8 = (__int64)*requests++;
      v9 = &buffer->requests[v6++];
      *(__m256i *)&v9->priority.raw = *(__m256i *)v8;
      *(_OWORD *)&v9->assetIds[6] = *(_OWORD *)(v8 + 32);
      *(double *)&v9->assetIds[10] = *(double *)(v8 + 48);
      v9->assetIds[12] = *(_DWORD *)(v8 + 56);
      --v7;
    }
    while ( v7 );
  }
  buffer->dirty = 1;
  buffer->requestCount = v4;
}

/*
==============
CL_Streaming_CancelAllLoadingRequests
==============
*/
void CL_Streaming_CancelAllLoadingRequests(void)
{
  int i; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
      CL_Streaming_CancelLoadingRequests((const LocalClientNum_t)i);
  }
}

/*
==============
CL_Streaming_CancelLoadingRequests
==============
*/
void CL_Streaming_CancelLoadingRequests(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  const dvar_t *v2; 
  StreamSyncClientType i; 
  StreamRequestQueue *ClientRequestQueue; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 
  unsigned __int8 loadingCount; 
  const dvar_t *v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  const dvar_t *v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  char *fmt; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  CL_Streaming_Images_CheckImageFunctor imageFn; 
  __int64 v21; 
  char outRequestString[1032]; 

  v21 = -2i64;
  v1 = localClientNum;
  v2 = DCONST_DVARBOOL_cl_streaming_devVerbose;
  if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    Com_Printf(14, "CL_Streaming: Cancelling loading requests for local client %u\n", (unsigned int)v1);
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
  {
    ClientRequestQueue = CL_Streaming_GetClientRequestQueue(v1, i);
    if ( ClientRequestQueue->requestCount > ClientRequestQueue->maxRequestCount )
    {
      LODWORD(v17) = ClientRequestQueue->maxRequestCount;
      LODWORD(v16) = ClientRequestQueue->requestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2075, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v16, v17) )
        __debugbreak();
    }
    *(_QWORD *)&ClientRequestQueue->modelsLoading = 0i64;
    v5 = 0;
    if ( ClientRequestQueue->requestCount )
    {
      while ( 1 )
      {
        v6 = (__int64)&ClientRequestQueue->requestItem[v5];
        v7 = *(_DWORD *)(v6 + 64);
        if ( v7 && v7 != 3 )
        {
          if ( !CL_Streaming_GetModelsLoadStatus(&ClientRequestQueue->requestItem[v5], i) || (Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_CheckImages"), imageFn.loadingCount = 0, imageFn.mipRequested = *(_DWORD *)(v6 + 68), CL_Streaming_Images_ForEachImage_CL_Streaming_Images_CheckImageFunctor_(*(_WORD *)(v6 + 72), &imageFn), loadingCount = imageFn.loadingCount, *(_BYTE *)(v6 + 86) = imageFn.loadingCount, Sys_ProfEndNamedEvent(), loadingCount) )
          {
            v12 = DCONST_DVARBOOL_cl_streaming_devVerbose;
            if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v12);
            if ( v12->current.enabled )
            {
              CL_Streaming_GetRequestItemModelsText((const StreamRequestItem *)v6, outRequestString, 0x400u);
              LODWORD(fmt) = Sys_Milliseconds();
              Com_Printf(14, "CL_Streaming: Cancelling request for %d::%s at time %d\n", (unsigned int)i, outRequestString, fmt);
            }
            CL_Streaming_ProcessUnloadRequest((StreamRequestItem *)v6, i);
            v13 = *(_BYTE *)(v6 + 85);
            if ( v13 )
            {
              LODWORD(v18) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2121, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingModelCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingModelCount", "0", v18, 0i64) )
                __debugbreak();
            }
            v14 = *(_BYTE *)(v6 + 86);
            if ( v14 )
            {
              LODWORD(v18) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2122, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingImageCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingImageCount", "0", v18, 0i64) )
                __debugbreak();
            }
            CL_Streaming_RemoveRequest(ClientRequestQueue, v5);
            goto LABEL_27;
          }
          v9 = DCONST_DVARBOOL_cl_streaming_devVerbose;
          if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v9);
          if ( v9->current.enabled )
          {
            CL_Streaming_GetRequestItemModelsText((const StreamRequestItem *)v6, outRequestString, 0x400u);
            LODWORD(fmt) = Sys_Milliseconds();
            Com_Printf(14, "CL_Streaming: Keeping loaded request for %d::%s at time %d\n", (unsigned int)i, outRequestString, fmt);
          }
          CL_Streaming_MarkRequestItemLoaded(ClientRequestQueue, (StreamRequestItem *const)v6, i);
          v10 = *(_BYTE *)(v6 + 85);
          if ( v10 )
          {
            LODWORD(v18) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2101, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingModelCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingModelCount", "0", v18, 0i64) )
              __debugbreak();
          }
          v11 = *(_BYTE *)(v6 + 86);
          if ( v11 )
          {
            LODWORD(v18) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2102, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingImageCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingImageCount", "0", v18, 0i64) )
              __debugbreak();
          }
        }
        ++v5;
LABEL_27:
        if ( v5 >= ClientRequestQueue->requestCount )
        {
          v1 = localClientNum;
          break;
        }
      }
    }
  }
}

/*
==============
CL_Streaming_CheckDirtyBuffers
==============
*/
void CL_Streaming_CheckDirtyBuffers(unsigned int (*dirtyBufferMask)[2])
{
  int i; 
  StreamSyncClientType j; 
  const dvar_t *v4; 
  bool v5; 
  ClStreamingBufferNum v6; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_CheckDirtyBuffers");
  for ( i = 0; i < 2; ++i )
  {
    (*dirtyBufferMask)[0] = 0;
    for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
    {
      switch ( j )
      {
        case STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL:
          v4 = DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled )
            goto LABEL_20;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_headUpdatesEnabled");
LABEL_18:
          if ( v5 )
            __debugbreak();
LABEL_20:
          Dvar_CheckFrontendServerThread(v4);
          if ( !v4->current.enabled )
            continue;
          break;
        case STREAM_SYNC_CLIENT_TYPE_BODY:
          v4 = DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled )
            goto LABEL_20;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_bodyUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_WEAPON:
          v4 = DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled )
            goto LABEL_20;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_weaponUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL:
          v4 = DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled )
            goto LABEL_20;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_viewArmsUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON:
          v4 = DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled )
            goto LABEL_20;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_viewWeaponUpdatesEnabled");
          goto LABEL_18;
      }
      v6 = CL_STREAMING_BUFFER_INPUT_0;
      while ( !CL_Streaming_GetRequestBuffer((const LocalClientNum_t)i, j, v6)->dirty )
      {
        if ( (unsigned int)++v6 >= CL_STREAMING_BUFFER_COUNT )
          goto LABEL_26;
      }
      (*dirtyBufferMask)[0] |= 0x80000000 >> (j & 0x1F);
LABEL_26:
      ;
    }
    dirtyBufferMask = (unsigned int (*)[2])((char *)dirtyBufferMask + 4);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_CheckForTransientReloads
==============
*/
void CL_Streaming_CheckForTransientReloads(void)
{
  int v0; 
  StreamSyncClientType i; 
  StreamSyncClientType j; 
  StreamRequestQueue *ClientRequestQueue; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_CheckForTransientReloads");
  v0 = 0;
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; ++i )
    CL_Streaming_CheckRequestQueueForTransientReloads(s_worldRequestQueue[i], i);
  do
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)v0) )
    {
      for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
      {
        ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v0, j);
        CL_Streaming_CheckRequestQueueForTransientReloads(ClientRequestQueue, j);
      }
    }
    ++v0;
  }
  while ( v0 < 2 );
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_CheckRequestQueueForTransientReloads
==============
*/
void CL_Streaming_CheckRequestQueueForTransientReloads(StreamRequestQueue *requestQueue, const StreamSyncClientType requestType)
{
  unsigned int v2; 
  StreamRequestItem *v5; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  int LogChannel; 
  __int64 v11; 
  CL_Streaming_Images_ValidateStreamedImagesFunctor v12; 
  char outRequestString[1024]; 

  v2 = 0;
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1824, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v11) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1825, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v11, requestQueue->maxRequestCount) )
      __debugbreak();
  }
  if ( requestQueue->requestCount )
  {
    do
    {
      v5 = &requestQueue->requestItem[v2];
      if ( v5->requestLoadState == STREAM_REQUEST_STATE_LOADED )
      {
        if ( CL_Streaming_GetModelsLoadStatus(&requestQueue->requestItem[v2], requestType) )
        {
          CL_Streaming_Images_ForEachImage_CL_Streaming_Images_ValidateStreamedImagesFunctor_(v5->requestRequiredImages, &v12);
        }
        else
        {
          v5->requestLoadState = STREAM_REQUEST_STATE_MODEL_LOADING;
          v6 = DCONST_DVARINT_cl_streaming_devDelayLoadBase;
          if ( !DCONST_DVARINT_cl_streaming_devDelayLoadBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devDelayLoadBase") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v6);
          integer = v6->current.integer;
          v8 = DCONST_DVARINT_cl_streaming_devDelayLoadJitter;
          if ( !DCONST_DVARINT_cl_streaming_devDelayLoadJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devDelayLoadJitter") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          v9 = v8->current.integer;
          if ( integer < v9 )
            v9 = integer;
          v5->requestStartLoadTime = Sys_Milliseconds();
          v5->requestDelayLoadTime = v5->requestStartLoadTime + I_irand(integer - v9, v9 + integer);
          CL_Streaming_GetRequestItemModelsText(v5, outRequestString, 0x400u);
          LogChannel = DB_GetLogChannel();
          Com_Printf(LogChannel, "CL_Streaming: Load invalidated for request (0x%p) %d::%s.\n", v5, (unsigned int)requestType, outRequestString);
        }
      }
      ++v2;
    }
    while ( v2 < requestQueue->requestCount );
  }
}

/*
==============
CL_Streaming_ClearAllBuffers
==============
*/
void CL_Streaming_ClearAllBuffers()
{
  int v0; 
  __int64 v1; 
  unsigned int i; 
  unsigned int v3; 
  unsigned int *p_maxRequestCount; 
  void *v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v0 = 0;
  v9 = 0i64;
  v1 = 0i64;
  do
  {
    for ( i = 0; i < 6; ++i )
    {
      v3 = 0;
      p_maxRequestCount = &s_clStreamingRequestBuffers[0][v1][2 * (int)i].maxRequestCount;
      do
      {
        if ( (unsigned int)v0 >= 2 )
        {
          LODWORD(v8) = 2;
          LODWORD(v7) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 703, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingRequestBuffers ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingRequestBuffers )\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        v5 = *(void **)(p_maxRequestCount - 3);
        v6 = 60i64 * *p_maxRequestCount;
        *(p_maxRequestCount - 1) = 0;
        DebugWipe(v5, v6);
        ++v3;
        p_maxRequestCount += 6;
      }
      while ( v3 < 2 );
      v1 = v9;
    }
    v1 = v9 + 6;
    ++v0;
    v9 += 6i64;
  }
  while ( v0 < 2 );
}

/*
==============
CL_Streaming_DevPrintAllRequestQueues
==============
*/
void CL_Streaming_DevPrintAllRequestQueues()
{
  int v0; 
  StreamSyncClientType i; 
  StreamSyncClientType j; 
  const StreamRequestQueue *ClientRequestQueue; 

  Com_Printf(14, "(-- CL_Streaming request queues begin --)\n");
  v0 = 0;
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; ++i )
    CL_Streaming_DevPrintRequestQueue(s_worldRequestQueue[i], i);
  do
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)v0) )
    {
      for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
      {
        ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v0, j);
        CL_Streaming_DevPrintRequestQueue(ClientRequestQueue, j);
      }
    }
    ++v0;
  }
  while ( v0 < 2 );
  Com_Printf(14, "(-- CL_Streaming request queues end --)\n");
}

/*
==============
CL_Streaming_DevPrintRequestQueue
==============
*/
void CL_Streaming_DevPrintRequestQueue(const StreamRequestQueue *requestQueue, const StreamSyncClientType requestType)
{
  unsigned int i; 
  StreamRequestItem *v5; 
  unsigned int requestAssetCount; 
  char *fmt; 
  __int64 v8; 
  __int64 v9; 
  unsigned int assetIds[16]; 
  char outRequestString[1024]; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 897, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  Com_Printf(16, "**** Streaming RequestType:%d RequestCount:%d\n", (unsigned int)requestType, requestQueue->requestCount);
  for ( i = 0; i < requestQueue->requestCount; ++i )
  {
    v5 = &requestQueue->requestItem[i];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 814, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
      __debugbreak();
    requestAssetCount = v5->requestAssetCount;
    if ( requestAssetCount )
      memcpy_0(assetIds, v5, 4i64 * requestAssetCount);
    CL_Streaming_GetStreamingAssetsText(assetIds, requestAssetCount, outRequestString, 1024);
    LODWORD(v9) = v5->requestTime;
    LODWORD(v8) = v5->requestLoadState;
    LODWORD(fmt) = v5->requestPriority.raw;
    Com_Printf(16, "**** %d::%s{%d}, state %d, requested at %d\n", (unsigned int)requestType, outRequestString, fmt, v8, v9);
  }
}

/*
==============
CL_Streaming_DrawBufferOverlay
==============
*/
void CL_Streaming_DrawBufferOverlay(const ScreenPlacement *const scrPlace)
{
  const dvar_t *v2; 
  unsigned int unsignedInt; 
  unsigned int v4; 
  unsigned int v5; 
  ClStreamingRequestBuffer *RequestBuffer; 
  __int64 v7; 
  char *fmt; 
  char *fmta; 
  char *s; 
  int destPos[4]; 
  char outRequestString[1040]; 
  char dest[68112]; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3608, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  v2 = DCONST_DVARINT_cl_streaming_drawBuffer;
  if ( DCONST_DVARINT_cl_streaming_drawBuffer )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_cl_streaming_drawBuffer);
    unsignedInt = v2->current.unsignedInt;
    if ( unsignedInt != -1 )
    {
      v4 = v2->current.unsignedInt;
      v5 = 0;
      destPos[0] = 0;
      dest[0] = 0;
      RequestBuffer = CL_Streaming_GetRequestBuffer((const LocalClientNum_t)(v4 / 0xC), (const StreamSyncClientType)((v4 >> 1) % 6), (const ClStreamingBufferNum)(v4 & 1));
      LODWORD(s) = (v4 >> 1) % 6;
      LODWORD(fmt) = unsignedInt / 0xC;
      Com_sprintfPos_truncate(dest, 0x10A10ui64, destPos, "LocalClientNum: %d, StreamSyncClientType: %d, BufferNum: %d, requestCount: %d\n", fmt, s, v4 & 1, RequestBuffer->requestCount);
      if ( RequestBuffer->requestCount )
      {
        do
        {
          v7 = (__int64)&RequestBuffer->requests[v5];
          CL_Streaming_GetStreamingAssetsText((const unsigned int *)(v7 + 8), *(_DWORD *)(v7 + 4), outRequestString, 1032);
          LODWORD(fmta) = (*(_DWORD *)v7 >> 23) & 7;
          Com_sprintfPos_truncate(dest, 0x10A10ui64, destPos, "  %4u %s\n", fmta, outRequestString);
          ++v5;
        }
        while ( v5 < RequestBuffer->requestCount );
      }
      CG_DrawDevString(scrPlace, 0.0, 0.0, 0.5, 0.5, dest, color_1, 5, cls.smallDevFont);
    }
  }
}

/*
==============
CL_Streaming_DrawOverlay
==============
*/
void CL_Streaming_DrawOverlay(const ScreenPlacement *const scrPlace)
{
  CL_Streaming_DrawBufferOverlay(scrPlace);
  CL_Streaming_DrawQueueOverlay(scrPlace);
}

/*
==============
CL_Streaming_DrawQueueOverlay
==============
*/
void CL_Streaming_DrawQueueOverlay(const ScreenPlacement *const scrPlace)
{
  const dvar_t *v2; 
  unsigned int unsignedInt; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  signed int v7; 
  StreamRequestQueue *ClientRequestQueue; 
  const StreamRequestItem *v9; 
  char *fmt; 
  char *fmta; 
  char *s; 
  int destPos[4]; 
  char outRequestString[1040]; 
  char dest[68112]; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3656, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  v2 = DCONST_DVARINT_cl_streaming_drawQueue;
  if ( DCONST_DVARINT_cl_streaming_drawQueue )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_cl_streaming_drawQueue);
    unsignedInt = v2->current.unsignedInt;
    if ( unsignedInt != -1 )
    {
      v4 = unsignedInt;
      v5 = 0;
      destPos[0] = 0;
      v6 = unsignedInt / 0xC;
      dest[0] = 0;
      v7 = unsignedInt % 6;
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)(v4 / 0xC), (const StreamSyncClientType)v7);
      if ( !ClientRequestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3676, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
        __debugbreak();
      LODWORD(s) = v7;
      LODWORD(fmt) = v6;
      Com_sprintfPos_truncate(dest, 0x10A10ui64, destPos, "LocalClientNum: %d, StreamSyncClientType: %d, requestCount: %d\n", fmt, s, ClientRequestQueue->requestCount);
      if ( ClientRequestQueue->requestCount )
      {
        do
        {
          v9 = &ClientRequestQueue->requestItem[v5];
          CL_Streaming_GetRequestItemModelsText(v9, outRequestString, 0x408u);
          LODWORD(fmta) = (v9->requestPriority.raw >> 23) & 7;
          Com_sprintfPos_truncate(dest, 0x10A10ui64, destPos, "  %4u %s\n", fmta, outRequestString);
          ++v5;
        }
        while ( v5 < ClientRequestQueue->requestCount );
      }
      CG_DrawDevString(scrPlace, 0.0, 0.0, 0.5, 0.5, dest, color_2, 5, cls.smallDevFont);
    }
  }
}

/*
==============
CL_Streaming_FindLRURequest
==============
*/
char CL_Streaming_FindLRURequest(const StreamRequestQueue *requestQueue, unsigned int *outRequestIndex, const ClStreamingRequest *const request)
{
  unsigned int rebuildCount; 
  unsigned int requestCount; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  StreamRequestItem *requestItem; 
  __int64 v12; 
  __int64 v14; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1079, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( !outRequestIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1080, ASSERT_TYPE_ASSERT, "(outRequestIndex)", (const char *)&queryFormat, "outRequestIndex") )
    __debugbreak();
  if ( !requestQueue->requestCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1081, ASSERT_TYPE_ASSERT, "(requestQueue->requestCount)", (const char *)&queryFormat, "requestQueue->requestCount") )
    __debugbreak();
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v14) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1082, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v14, requestQueue->maxRequestCount) )
      __debugbreak();
  }
  if ( request )
    rebuildCount = requestQueue->rebuildCount;
  else
    rebuildCount = -1;
  requestCount = requestQueue->requestCount;
  v8 = 0;
  v9 = -1;
  v10 = -1;
  if ( requestCount )
  {
    requestItem = requestQueue->requestItem;
    while ( 1 )
    {
      v12 = v8;
      if ( requestItem[v12].requestFromDev )
        break;
      if ( requestItem[v12].requestTime < rebuildCount && ((requestItem[v12].requestPriority.raw >> 23) & 7) <= v9 )
      {
        v10 = v8;
        rebuildCount = requestItem[v12].requestTime;
        v9 = (requestItem[v12].requestPriority.raw >> 23) & 7;
      }
      if ( ++v8 >= requestCount )
        goto LABEL_23;
    }
    *outRequestIndex = v8;
    return 1;
  }
  else
  {
LABEL_23:
    if ( v10 >= requestCount )
    {
      *outRequestIndex = -1;
      return 0;
    }
    else
    {
      *outRequestIndex = v10;
      return 1;
    }
  }
}

/*
==============
CL_Streaming_FindRequest
==============
*/
char CL_Streaming_FindRequest(const StreamRequestQueue *requestQueue, const ClStreamingRequest *request, unsigned int *outRequestIndex)
{
  __int64 v6; 
  unsigned int i; 
  unsigned int assetCount; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1050, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( !outRequestIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1051, ASSERT_TYPE_ASSERT, "(outRequestIndex)", (const char *)&queryFormat, "outRequestIndex") )
    __debugbreak();
  if ( request->assetCount > 0xD )
  {
    LODWORD(v11) = request->assetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1052, ASSERT_TYPE_ASSERT, "( request->assetCount ) <= ( MAX_ASSETS_PER_REQUEST )", "request->assetCount not in [0, MAX_ASSETS_PER_REQUEST]\n\t%u not in [0, %u]", v11, 13) )
      __debugbreak();
  }
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v12) = requestQueue->maxRequestCount;
    LODWORD(v11) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1053, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v11, v12) )
      __debugbreak();
  }
  v6 = 0i64;
  for ( i = CL_Streaming_GetRequestHash(request); (unsigned int)v6 < requestQueue->requestCount; v6 = (unsigned int)(v6 + 1) )
  {
    if ( (unsigned int)v6 >= requestQueue->maxRequestCount )
    {
      LODWORD(v12) = requestQueue->maxRequestCount;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1024, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->maxRequestCount )", "requestIndex doesn't index requestQueue->maxRequestCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( requestQueue->requestHash[v6] == i )
    {
      assetCount = request->assetCount;
      if ( requestQueue->requestItem[(unsigned int)v6].requestAssetCount == assetCount )
      {
        v9 = 0i64;
        if ( !assetCount )
        {
LABEL_22:
          *outRequestIndex = v6;
          return 1;
        }
        while ( requestQueue->requestItem[(unsigned int)v6].requestAssets[v9].assetId == request->assetIds[v9] )
        {
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= assetCount )
            goto LABEL_22;
        }
      }
    }
  }
  *outRequestIndex = -1;
  return 0;
}

/*
==============
CL_Streaming_FreeUnusedResources
==============
*/
void CL_Streaming_FreeUnusedResources()
{
  unsigned int i; 
  int j; 
  StreamSyncClientType k; 
  StreamRequestQueue *ClientRequestQueue; 
  int v4; 
  StreamSyncClientType v5; 
  ClStreamingBufferNum m; 
  unsigned int v7; 
  ClStreamingRequestBuffer *RequestBuffer; 
  __int64 v9; 
  __int64 v10; 
  scr_string_t v11; 
  StreamSyncClientType v12; 
  int v13; 

  if ( SL_GetSystemCount(2u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2045, ASSERT_TYPE_ASSERT, "(SL_GetSystemCount( SL_USER_TEMP ) == 0)", (const char *)&queryFormat, "SL_GetSystemCount( SL_USER_TEMP ) == 0") )
    __debugbreak();
  if ( SL_GetSystemCount(2u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 369, ASSERT_TYPE_ASSERT, "(SL_GetSystemCount( SL_USER_TEMP ) == 0)", (const char *)&queryFormat, "SL_GetSystemCount( SL_USER_TEMP ) == 0") )
    __debugbreak();
  SL_TransferSystem(0x20u, 2u);
  for ( i = 0; i < 3; ++i )
    CL_Streaming_MarkQueueAssetsInUse(s_worldRequestQueue[i]);
  for ( j = 0; j < 2; ++j )
  {
    for ( k = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)k < STREAM_SYNC_CLIENT_TYPE_COUNT; ++k )
    {
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)j, k);
      CL_Streaming_MarkQueueAssetsInUse(ClientRequestQueue);
    }
  }
  v4 = 0;
  v13 = 0;
  do
  {
    v5 = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL;
    v12 = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL;
    do
    {
      for ( m = CL_STREAMING_BUFFER_INPUT_0; (unsigned int)m < CL_STREAMING_BUFFER_COUNT; ++m )
      {
        v7 = 0;
        RequestBuffer = CL_Streaming_GetRequestBuffer((const LocalClientNum_t)v4, v5, m);
        if ( RequestBuffer->requestCount )
        {
          do
          {
            v9 = 0i64;
            v10 = (__int64)&RequestBuffer->requests[v7];
            if ( *(_DWORD *)(v10 + 4) )
            {
              do
              {
                v11 = *(_DWORD *)(v10 + 4 * v9 + 8);
                if ( !SL_IsValidStringValue(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 377, ASSERT_TYPE_ASSERT, "(SL_IsValidStringValue( assetString ))", (const char *)&queryFormat, "SL_IsValidStringValue( assetString )") )
                  __debugbreak();
                j_SL_AddUser(v11, 0x20u);
                v9 = (unsigned int)(v9 + 1);
              }
              while ( (unsigned int)v9 < *(_DWORD *)(v10 + 4) );
            }
            ++v7;
          }
          while ( v7 < RequestBuffer->requestCount );
          v5 = v12;
          v4 = v13;
        }
      }
      v12 = ++v5;
    }
    while ( (unsigned int)v5 < STREAM_SYNC_CLIENT_TYPE_COUNT );
    v13 = ++v4;
  }
  while ( v4 < 2 );
  SL_ShutdownSystem(2u);
}

/*
==============
CL_Streaming_GetBodyRequestLimit
==============
*/
__int64 CL_Streaming_GetBodyRequestLimit(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_clStreamingLimits[v1][1];
}

/*
==============
CL_Streaming_GetClientRequestImagesLoading
==============
*/
__int64 CL_Streaming_GetClientRequestImagesLoading(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  StreamRequestQueue *ClientRequestQueue; 

  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, requestType);
  if ( ClientRequestQueue )
    return ClientRequestQueue->imagesLoading;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2218, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return MEMORY[0x24];
}

/*
==============
CL_Streaming_GetClientRequestModelsLoading
==============
*/
__int64 CL_Streaming_GetClientRequestModelsLoading(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  StreamRequestQueue *ClientRequestQueue; 

  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, requestType);
  if ( ClientRequestQueue )
    return ClientRequestQueue->modelsLoading;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2202, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return MEMORY[0x20];
}

/*
==============
CL_Streaming_GetClientRequestQueue
==============
*/
StreamRequestQueue *CL_Streaming_GetClientRequestQueue(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = requestType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 398, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v7) = 6;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_clientRequestQueue[v2][v3];
}

/*
==============
CL_Streaming_GetCustomizationRequest
==============
*/
void CL_Streaming_GetCustomizationRequest(const CustomizationModelType customizationType, const unsigned int modelIndex, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  const char *ModelName; 

  ModelName = NULL;
  if ( !outRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3278, ASSERT_TYPE_ASSERT, "(outRequest)", (const char *)&queryFormat, "outRequest") )
    __debugbreak();
  if ( BG_Customization_IsEnabled() )
    ModelName = BG_Customization_GetModelName(customizationType, modelIndex);
  CL_Streaming_GetSingleModelRequest(ModelName, priority, outRequest);
}

/*
==============
CL_Streaming_GetHeadRequestLimit
==============
*/
__int64 CL_Streaming_GetHeadRequestLimit(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_clStreamingLimits[v1][0];
}

/*
==============
CL_Streaming_GetLimit
==============
*/
__int64 CL_Streaming_GetLimit(const LocalClientNum_t localClientNum, const StreamSyncClientType streamSyncType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = streamSyncType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v7) = 6;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3020, ASSERT_TYPE_ASSERT, "(unsigned)( streamSyncType ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits[localClientNum] ) ) + 0 ) )", "streamSyncType doesn't index ARRAY_COUNT( s_clStreamingLimits[localClientNum] )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_clStreamingLimits[v2][v3];
}

/*
==============
CL_Streaming_GetModelsLoadStatus
==============
*/
char CL_Streaming_GetModelsLoadStatus(StreamRequestItem *requestItem, const StreamSyncClientType requestType)
{
  ClGameModeApplication *ActiveClientApplication; 
  unsigned __int8 v5; 
  __int64 v6; 
  unsigned int requestAssetCount; 
  const char *v8; 
  bool v9; 
  __int64 v11; 

  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1251, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v11) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1252, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v11, 6) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_GetModelsLoadStatus");
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  v5 = truncate_cast<unsigned char,unsigned int>(requestItem->requestAssetCount);
  v6 = 0i64;
  requestAssetCount = requestItem->requestAssetCount;
  if ( requestAssetCount )
  {
    while ( 1 )
    {
      v8 = CL_Streaming_AssetId_ConvertToString(requestItem->requestAssets[v6].assetId);
      v9 = ActiveClientApplication->IsModelNameLoaded(ActiveClientApplication, v8);
      requestAssetCount = requestItem->requestAssetCount;
      if ( !v9 )
        break;
      --v5;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= requestAssetCount )
        goto LABEL_10;
    }
    if ( v5 > requestAssetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1270, ASSERT_TYPE_ASSERT, "( modelsLoading ) <= ( requestItem->requestAssetCount )", "%s <= %s\n\t%i, %i", "modelsLoading", "requestItem->requestAssetCount", v5, requestItem->requestAssetCount) )
      __debugbreak();
    requestItem->requestLoadingModelCount = v5;
    Sys_ProfEndNamedEvent();
    return 0;
  }
  else
  {
LABEL_10:
    if ( v5 > requestAssetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1278, ASSERT_TYPE_ASSERT, "( modelsLoading ) <= ( requestItem->requestAssetCount )", "%s <= %s\n\t%i, %i", "modelsLoading", "requestItem->requestAssetCount", v5, requestAssetCount) )
      __debugbreak();
    requestItem->requestLoadingModelCount = v5;
    Sys_ProfEndNamedEvent();
    return 1;
  }
}

/*
==============
CL_Streaming_GetPendingRequestedAssets
==============
*/
void CL_Streaming_GetPendingRequestedAssets(unsigned int *outModelCount, unsigned int *outImageCount)
{
  unsigned int v2; 
  StreamRequestQueue *v5; 
  LocalClientNum_t i; 
  StreamSyncClientType j; 
  StreamRequestQueue *ClientRequestQueue; 

  v2 = 0;
  *outModelCount = 0;
  *outImageCount = 0;
  do
  {
    v5 = s_worldRequestQueue[v2];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2234, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
      __debugbreak();
    ++v2;
    *outModelCount += v5->modelsLoading;
    *outImageCount += v5->imagesLoading;
  }
  while ( v2 < 3 );
  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
  {
    for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
    {
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue(i, j);
      if ( !ClientRequestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2244, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
        __debugbreak();
      *outModelCount += ClientRequestQueue->modelsLoading;
      *outImageCount += ClientRequestQueue->imagesLoading;
    }
  }
}

/*
==============
CL_Streaming_GetRequestBuffer
==============
*/
ClStreamingRequestBuffer *CL_Streaming_GetRequestBuffer(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType, const ClStreamingBufferNum bufferNum)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = (unsigned int)bufferNum;
  v5 = requestType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 703, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingRequestBuffers ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingRequestBuffers )\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 6 )
  {
    LODWORD(v9) = 6;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 704, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingRequestBuffers[localClientNum] ) ) + 0 ) )", "requestType doesn't index ARRAY_COUNT( s_clStreamingRequestBuffers[localClientNum] )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 705, ASSERT_TYPE_ASSERT, "(unsigned)( bufferNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingRequestBuffers[localClientNum][requestType] ) ) + 0 ) )", "bufferNum doesn't index ARRAY_COUNT( s_clStreamingRequestBuffers[localClientNum][requestType] )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return &s_clStreamingRequestBuffers[v3][v5][v4];
}

/*
==============
CL_Streaming_GetRequestHash
==============
*/
__int64 CL_Streaming_GetRequestHash(const ClStreamingRequest *request)
{
  unsigned int v2; 
  unsigned int i; 
  unsigned int *v4; 
  __int64 v5; 
  unsigned int *v6; 
  int v7; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 947, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  v2 = 0;
  for ( i = 0; i < request->assetCount; ++i )
  {
    v4 = &request->assetIds[i];
    if ( (!*v4 || 16 * *v4 >= 0x800000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 952, ASSERT_TYPE_ASSERT, "(CL_Streaming_AssetId_IsValid( request->assetIds[assetIndex] ))", (const char *)&queryFormat, "CL_Streaming_AssetId_IsValid( request->assetIds[assetIndex] )") )
      __debugbreak();
    v5 = 4i64;
    v6 = &request->assetIds[i];
    if ( v6 > &request->assetIds[i + 1] )
      v5 = 0i64;
    if ( &request->assetIds[i] <= &request->assetIds[i + 1] )
    {
      do
      {
        v7 = *(unsigned __int8 *)v6;
        v6 = (unsigned int *)((char *)v6 + 1);
        v2 = v7 ^ (16777619 * v2);
      }
      while ( (char *)v6 - (char *)v4 != v5 );
    }
  }
  return v2;
}

/*
==============
CL_Streaming_GetRequestItemModelsText
==============
*/
__int64 CL_Streaming_GetRequestItemModelsText(const StreamRequestItem *requestItem, char *outRequestString, const unsigned int requestStringSize)
{
  unsigned __int64 v3; 
  unsigned int requestAssetCount; 
  unsigned int v7; 
  int v8; 
  __int64 result; 
  const unsigned int *v10; 
  const char *v11; 
  int v12; 
  int v13; 
  bool v14; 
  char v15[56]; 

  v3 = (int)requestStringSize;
  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 814, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  if ( !outRequestString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 815, ASSERT_TYPE_ASSERT, "(outRequestString)", (const char *)&queryFormat, "outRequestString") )
    __debugbreak();
  requestAssetCount = requestItem->requestAssetCount;
  if ( requestAssetCount )
    memcpy_0(v15, requestItem, 4i64 * requestAssetCount);
  if ( !outRequestString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 772, ASSERT_TYPE_ASSERT, "(outRequestString)", (const char *)&queryFormat, "outRequestString") )
    __debugbreak();
  v7 = 0;
  v8 = Com_sprintf_truncate(outRequestString, v3, "[");
  if ( v8 < 0 )
    return 0i64;
  if ( requestAssetCount )
  {
    v10 = (const unsigned int *)v15;
    do
    {
      v11 = CL_Streaming_AssetId_ConvertToString(*v10);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 781, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
        __debugbreak();
      v12 = Com_sprintf_truncate(&outRequestString[v8], (int)v3 - v8, (const char *)&queryFormat, v11);
      if ( v12 < 0 )
        break;
      v8 += v12;
      if ( v7 < requestAssetCount - 1 )
      {
        v13 = Com_sprintf_truncate(&outRequestString[v8], (int)v3 - v8, ", ");
        if ( v13 < 0 )
          break;
        v8 += v13;
      }
      ++v7;
      ++v10;
    }
    while ( v7 < requestAssetCount );
  }
  v14 = Com_sprintf_truncate(&outRequestString[v8], (int)v3 - v8, "]") < 0;
  result = (unsigned int)(v3 - 1);
  if ( !v14 )
    return (unsigned int)v8;
  return result;
}

/*
==============
CL_Streaming_GetRequiredStreamImageMip
==============
*/
__int64 CL_Streaming_GetRequiredStreamImageMip(const StreamSyncClientType clientStreamType)
{
  const dvar_t *v1; 
  __int64 v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18[6]; 

  v1 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForHeads;
  v2 = clientStreamType;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForHeads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForHeads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForBodies;
  v18[0] = integer;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForBodies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForWorldWeapons;
  v18[1] = v5;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForWorldWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForWorldWeapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v8 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForViewArms;
  v18[2] = v7;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForViewArms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForViewArms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForViewWeapons;
  v18[3] = v9;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForViewWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForViewWeapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  v12 = DCONST_DVARINT_cl_streaming_requiredStreamImageMipForClientModels;
  v18[4] = v11;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamImageMipForClientModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamImageMipForClientModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v18[5] = v12->current.integer;
  if ( (unsigned int)v2 >= 6 )
  {
    LODWORD(v16) = 6;
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 689, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( ( sizeof( *array_counter( CL_STREAMSYNC_REQUEST_TYPE_MIP_REQUIREMENT ) ) + 0 ) )", "clientStreamType doesn't index CL_STREAMSYNC_REQUEST_TYPE_MIP_REQUIREMENT\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v13 = v18[v2];
  if ( v13 > 4 )
  {
    v17 = 4;
    LODWORD(v15) = v18[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 692, ASSERT_TYPE_ASSERT, "( StreamImageMip::NO_MIPS ) <= ( requiredMip ) && ( requiredMip ) <= ( StreamImageMip::HIGHEST )", "requiredMip not in [StreamImageMip::NO_MIPS, StreamImageMip::HIGHEST]\n\t%i not in [%i, %i]", v15, 0i64, v17) )
      __debugbreak();
  }
  return v13;
}

/*
==============
CL_Streaming_GetRequiredStreamModelLod
==============
*/
__int64 CL_Streaming_GetRequiredStreamModelLod(const StreamSyncClientType clientStreamType)
{
  const dvar_t *v1; 
  __int64 v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18[6]; 

  v1 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForHeads;
  v2 = clientStreamType;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForHeads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForHeads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForBodies;
  v18[0] = integer;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForBodies") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForWorldWeapons;
  v18[1] = v5;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForWorldWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForWorldWeapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v8 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForViewArms;
  v18[2] = v7;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForViewArms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForViewArms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForViewWeapons;
  v18[3] = v9;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForViewWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForViewWeapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  v12 = DCONST_DVARINT_cl_streaming_requiredStreamModelLodForClientModels;
  v18[4] = v11;
  if ( !DCONST_DVARINT_cl_streaming_requiredStreamModelLodForClientModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_requiredStreamModelLodForClientModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v18[5] = v12->current.integer;
  if ( (unsigned int)v2 >= 6 )
  {
    LODWORD(v16) = 6;
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( clientStreamType ) < (unsigned)( ( sizeof( *array_counter( CL_STREAMSYNC_REQUEST_TYPE_LOD_REQUIREMENT ) ) + 0 ) )", "clientStreamType doesn't index CL_STREAMSYNC_REQUEST_TYPE_LOD_REQUIREMENT\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v13 = v18[v2];
  if ( v13 > 6 )
  {
    v17 = 6;
    LODWORD(v15) = v18[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 666, ASSERT_TYPE_ASSERT, "( StreamModelLod::NO_LODS ) <= ( requiredLod ) && ( requiredLod ) <= ( StreamModelLod::LOWEST )", "requiredLod not in [StreamModelLod::NO_LODS, StreamModelLod::LOWEST]\n\t%i not in [%i, %i]", v15, 0i64, v17) )
      __debugbreak();
  }
  return v13;
}

/*
==============
CL_Streaming_GetSingleModelRequest
==============
*/
void CL_Streaming_GetSingleModelRequest(const char *const modelName, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  unsigned int v3; 
  unsigned int v7; 

  v3 = 0;
  if ( !outRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3303, ASSERT_TYPE_ASSERT, "( ( outRequest != nullptr ) )", "( outRequest ) = %p", NULL) )
    __debugbreak();
  if ( modelName && *modelName )
  {
    v7 = CL_Streaming_AssetId_GetFromName(modelName);
    outRequest->priority = priority;
    v3 = 1;
  }
  else
  {
    outRequest->priority = ASSET_STREAMING_ZERO_PRIORITY;
    v7 = 0;
  }
  outRequest->assetIds[0] = v7;
  outRequest->assetCount = v3;
}

/*
==============
CL_Streaming_GetStreamingAssetsText
==============
*/
__int64 CL_Streaming_GetStreamingAssetsText(const unsigned int *assetIds, const unsigned int assetCount, char *outRequestString, const int requestStringSize)
{
  unsigned __int64 v4; 
  const unsigned int *v7; 
  int v8; 
  __int64 result; 
  unsigned int i; 
  const char *v11; 
  int v12; 
  int v13; 
  bool v14; 

  v4 = requestStringSize;
  v7 = assetIds;
  if ( !assetIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 771, ASSERT_TYPE_ASSERT, "(assetIds)", (const char *)&queryFormat, "assetIds") )
    __debugbreak();
  if ( !outRequestString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 772, ASSERT_TYPE_ASSERT, "(outRequestString)", (const char *)&queryFormat, "outRequestString") )
    __debugbreak();
  v8 = Com_sprintf_truncate(outRequestString, v4, "[");
  if ( v8 < 0 )
    return 0i64;
  for ( i = 0; i < assetCount; ++v7 )
  {
    v11 = CL_Streaming_AssetId_ConvertToString(*v7);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 781, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
      __debugbreak();
    v12 = Com_sprintf_truncate(&outRequestString[v8], (int)v4 - v8, (const char *)&queryFormat, v11);
    if ( v12 < 0 )
      break;
    v8 += v12;
    if ( i < assetCount - 1 )
    {
      v13 = Com_sprintf_truncate(&outRequestString[v8], (int)v4 - v8, ", ");
      if ( v13 < 0 )
        break;
      v8 += v13;
    }
    ++i;
  }
  v14 = Com_sprintf_truncate(&outRequestString[v8], (int)v4 - v8, "]") < 0;
  result = (unsigned int)(v4 - 1);
  if ( !v14 )
    return (unsigned int)v8;
  return result;
}

/*
==============
CL_Streaming_GetViewArmsRequestLimit
==============
*/
__int64 CL_Streaming_GetViewArmsRequestLimit(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_clStreamingLimits[v1][3];
}

/*
==============
CL_Streaming_GetViewWeaponRequestLimit
==============
*/
__int64 CL_Streaming_GetViewWeaponRequestLimit(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_clStreamingLimits[v1][4];
}

/*
==============
CL_Streaming_GetWeaponRequest
==============
*/
void CL_Streaming_GetWeaponRequest(const Weapon *weapon, const AssetStreamingPriority priority, const bool viewModel, ClStreamingRequest *const outRequest)
{
  unsigned int WeaponStreamedModels; 
  const XModel **v9; 
  __int64 v10; 
  const char **v11; 
  unsigned int v12; 
  const char *v13; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  const XModel *outList[32]; 

  if ( !outRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3253, ASSERT_TYPE_ASSERT, "(outRequest)", (const char *)&queryFormat, "outRequest") )
    __debugbreak();
  outRequest->priority = priority;
  outRequest->assetCount = 0;
  if ( BG_ValidateWeapon(weapon) )
  {
    WeaponStreamedModels = BG_GetWeaponStreamedModels(weapon, (const XModel *(*)[32])outList, viewModel);
    if ( WeaponStreamedModels )
    {
      v9 = outList;
      v10 = WeaponStreamedModels;
      do
      {
        v11 = (const char **)*v9;
        if ( outRequest->assetCount > 0xD )
        {
          LODWORD(v16) = 13;
          LODWORD(v15) = outRequest->assetCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3200, ASSERT_TYPE_ASSERT, "( outRequest->assetCount ) <= ( MAX_ASSETS_PER_REQUEST )", "outRequest->assetCount not in [0, MAX_ASSETS_PER_REQUEST]\n\t%u not in [0, %u]", v15, v16) )
            __debugbreak();
        }
        if ( v11 )
        {
          if ( outRequest->assetCount == 13 )
          {
            v12 = 0;
            do
            {
              v13 = CL_Streaming_AssetId_ConvertToString(outRequest->assetIds[v12]);
              Com_Printf(1, "Requested asset %s\n", v13);
              ++v12;
            }
            while ( v12 < outRequest->assetCount );
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144202C70, 1132i64);
          }
          else
          {
            v14 = *v11;
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3221, ASSERT_TYPE_ASSERT, "( ( modelName != nullptr ) )", "( modelName ) = %p", NULL) )
              __debugbreak();
            if ( *v14 )
              outRequest->assetIds[outRequest->assetCount++] = CL_Streaming_AssetId_GetFromName(v14);
          }
        }
        ++v9;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    Com_PrintError(14, "CL_Streaming_GetWeaponRequest: Refusing streaming request for invalid weapon. See console log for details.\n");
  }
}

/*
==============
CL_Streaming_GetWeaponViewModels
==============
*/
void CL_Streaming_GetWeaponViewModels(const Weapon *weapon, ClStreamingModelList *outModelList)
{
  unsigned int WeaponStreamedModels; 
  const XModel **v5; 
  __int64 v6; 
  __int64 modelCount; 
  const XModel *outList[32]; 

  if ( !outModelList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3347, ASSERT_TYPE_ASSERT, "(outModelList)", (const char *)&queryFormat, "outModelList") )
    __debugbreak();
  DebugWipe(outModelList->models, 0x68ui64);
  outModelList->modelCount = 0;
  WeaponStreamedModels = BG_GetWeaponStreamedModels(weapon, (const XModel *(*)[32])outList, 1);
  if ( WeaponStreamedModels )
  {
    v5 = outList;
    v6 = WeaponStreamedModels;
    do
    {
      if ( *v5 )
      {
        modelCount = outModelList->modelCount;
        if ( (unsigned int)modelCount >= 0xD )
        {
          Com_PrintError(14, "CL_Streaming_GetWeaponModels: Too many models for wepaon, some will be dropped.\n");
        }
        else
        {
          outModelList->models[modelCount] = *v5;
          ++outModelList->modelCount;
        }
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
CL_Streaming_GetWeaponViewRequest
==============
*/
void CL_Streaming_GetWeaponViewRequest(const Weapon *weapon, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  CL_Streaming_GetWeaponRequest(weapon, priority, 1, outRequest);
}

/*
==============
CL_Streaming_GetWeaponWorldRequest
==============
*/
void CL_Streaming_GetWeaponWorldRequest(const Weapon *weapon, const AssetStreamingPriority priority, ClStreamingRequest *outRequest)
{
  CL_Streaming_GetWeaponRequest(weapon, priority, 0, outRequest);
}

/*
==============
CL_Streaming_GetWorldRequestImagesLoading
==============
*/
__int64 CL_Streaming_GetWorldRequestImagesLoading(const StreamSyncWorldType requestType)
{
  __int64 v1; 
  StreamRequestQueue *v2; 

  v1 = requestType;
  if ( (unsigned int)requestType >= STREAM_SYNC_WORLD_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", requestType, 3) )
    __debugbreak();
  v2 = s_worldRequestQueue[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2210, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return v2->imagesLoading;
}

/*
==============
CL_Streaming_GetWorldRequestModelsLoading
==============
*/
__int64 CL_Streaming_GetWorldRequestModelsLoading(const StreamSyncWorldType requestType)
{
  __int64 v1; 
  StreamRequestQueue *v2; 

  v1 = requestType;
  if ( (unsigned int)requestType >= STREAM_SYNC_WORLD_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", requestType, 3) )
    __debugbreak();
  v2 = s_worldRequestQueue[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2194, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  return v2->modelsLoading;
}

/*
==============
CL_Streaming_GetWorldWeaponRequestLimit
==============
*/
__int64 CL_Streaming_GetWorldWeaponRequestLimit(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3019, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_clStreamingLimits[v1][2];
}

/*
==============
CL_Streaming_Images_AddImage
==============
*/
void CL_Streaming_Images_AddImage(const LocalClientNum_t localClientNum, const ClStreamingImageUser user, const unsigned int imageIndex)
{
  __int64 v3; 
  __int64 v5; 
  GfxImage *GfxImageAtIndex; 
  __int64 v7; 
  __int64 v8; 

  v3 = user;
  v5 = localClientNum;
  if ( imageIndex >= 0x14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3398, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, 81920) )
    __debugbreak();
  GfxImageAtIndex = DB_GetGfxImageAtIndex(imageIndex);
  if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3401, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
    __debugbreak();
  if ( (GfxImageAtIndex->flags & 0x40) != 0 )
  {
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3408, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage ) ) + 0 ) )", "localClientNum doesn't index s_clStreamedImageUserFirstImagePage\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3409, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage[localClientNum] ) ) + 0 ) )", "user doesn't index s_clStreamedImageUserFirstImagePage[localClientNum]\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    s_clStreamedImageUserFirstImagePage[v5][v3] = CL_Streaming_Images_AddImageInternal(s_clStreamedImageUserFirstImagePage[v5][v3], imageIndex);
  }
}

/*
==============
CL_Streaming_Images_AddImageInternal
==============
*/
unsigned __int16 CL_Streaming_Images_AddImageInternal(const unsigned __int16 originalImagePageIndex, const unsigned int imageIndex)
{
  ClStreamedImagePage *PageAtIndex; 
  ClStreamedImagePage *v6; 
  unsigned __int16 IndexForPage; 

  if ( originalImagePageIndex )
  {
    PageAtIndex = CL_Streaming_Images_GetPageAtIndex(originalImagePageIndex);
  }
  else
  {
    if ( !s_clStreamedImagePool.nextFreePageIndex )
    {
LABEL_6:
      CL_Streaming_Images_MarkMissedAllocation();
      return 0;
    }
    PageAtIndex = &s_clStreamedImagePool.pages[(unsigned __int64)s_clStreamedImagePool.nextFreePageIndex];
    s_clStreamedImagePool.nextFreePageIndex = (*(_DWORD *)PageAtIndex >> 6) & 0x3FF;
    *(_DWORD *)PageAtIndex &= 0xFFFF003F;
  }
  if ( !PageAtIndex )
    goto LABEL_6;
  if ( (*(_BYTE *)PageAtIndex & 0x3F) == 15 )
  {
    if ( !s_clStreamedImagePool.nextFreePageIndex )
    {
      CL_Streaming_Images_MarkMissedAllocation();
      return originalImagePageIndex;
    }
    v6 = &s_clStreamedImagePool.pages[(unsigned __int64)s_clStreamedImagePool.nextFreePageIndex];
    s_clStreamedImagePool.nextFreePageIndex = (*(_DWORD *)v6 >> 6) & 0x3FF;
    *(_DWORD *)v6 &= 0xFFFF003F;
    IndexForPage = CL_Streaming_Images_GetIndexForPage(PageAtIndex);
    *(_DWORD *)v6 &= 0xFFFF003F;
    PageAtIndex = v6;
    *(_DWORD *)v6 |= (IndexForPage & 0x3FF) << 6;
  }
  if ( !PageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 489, ASSERT_TYPE_ASSERT, "( ( page != nullptr ) )", "( page ) = %p", NULL) )
    __debugbreak();
  if ( (*(_DWORD *)PageAtIndex & 0x3Fu) >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 490, ASSERT_TYPE_ASSERT, "( page->count ) < ( CL_STREAMED_IMAGE_PAGE_SIZE )", "%s < %s\n\t%u, %u", "page->count", "CL_STREAMED_IMAGE_PAGE_SIZE", *(_DWORD *)PageAtIndex & 0x3F, 15) )
    __debugbreak();
  PageAtIndex->imageIndices[*(_DWORD *)PageAtIndex & 0x3F] = imageIndex;
  *(_DWORD *)PageAtIndex ^= ((unsigned __int8)*(_DWORD *)PageAtIndex ^ (unsigned __int8)(*(_DWORD *)PageAtIndex + 1)) & 0x3F;
  return CL_Streaming_Images_GetIndexForPage(PageAtIndex);
}

/*
==============
CL_Streaming_Images_AddImagesForXModelToRequest
==============
*/
__int64 CL_Streaming_Images_AddImagesForXModelToRequest(const XModel *const model, const StreamModelLod requiredLod, const StreamImageMip requiredMip, StreamRequestItem *const requestItem)
{
  StreamRequestItem *v4; 
  int v8; 
  unsigned int v9; 
  const XModelLodInfo *LodInfo; 
  int *v11; 
  __int64 v12; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *v14; 
  unsigned __int16 surfIndex; 
  unsigned __int16 v16; 
  Material **v17; 
  __int64 v18; 
  Material *v19; 
  unsigned int v20; 
  const char **p_name; 
  const dvar_t *v22; 
  unsigned int GfxImageIndex; 
  unsigned __int64 v24; 
  unsigned __int8 v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  char *fmt; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  Material **v35; 
  __int64 v36; 
  int v38[2562]; 

  v4 = requestItem;
  v8 = 0;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 561, ASSERT_TYPE_ASSERT, "( ( model != nullptr ) )", "( model ) = %p", NULL) )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 562, ASSERT_TYPE_ASSERT, "( ( requestItem != nullptr ) )", "( requestItem ) = %p", NULL) )
    __debugbreak();
  if ( requiredLod == NO_MIPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 564, ASSERT_TYPE_ASSERT, "(requiredLod != StreamModelLod::NO_LODS)", (const char *)&queryFormat, "requiredLod != StreamModelLod::NO_LODS") )
    __debugbreak();
  if ( requiredMip == NO_MIPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 565, ASSERT_TYPE_ASSERT, "(requiredMip != StreamImageMip::NO_MIPS)", (const char *)&queryFormat, "requiredMip != StreamImageMip::NO_MIPS") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_Images_AddImagesForXModelToRequest");
  v9 = Stream_RequestedXModelLod(model, requiredLod);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, v9);
  if ( LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
  {
    v11 = v38;
    v12 = 160i64;
    do
    {
      *(_QWORD *)v11 = 0i64;
      *((_QWORD *)v11 + 1) = 0i64;
      *((_QWORD *)v11 + 2) = 0i64;
      v11 += 16;
      *((_QWORD *)v11 - 5) = 0i64;
      *((_QWORD *)v11 - 4) = 0i64;
      *((_QWORD *)v11 - 3) = 0i64;
      *((_QWORD *)v11 - 2) = 0i64;
      *((_QWORD *)v11 - 1) = 0i64;
      --v12;
    }
    while ( v12 );
    v4->requestRequiredMip = requiredMip;
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numsurfs = XModelGetLodInfo(model, v9)->numsurfs;
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v14 = XModelGetLodInfo(model, v9);
    surfIndex = v14->surfIndex;
    v16 = model->numsurfs;
    if ( surfIndex >= v16 )
    {
      LODWORD(v31) = surfIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v31, v16) )
        __debugbreak();
    }
    v17 = &model->materialHandles[v14->surfIndex];
    v35 = v17;
    if ( numsurfs )
    {
      v18 = numsurfs;
      v36 = numsurfs;
      do
      {
        v19 = *v17;
        if ( !*v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 585, ASSERT_TYPE_ASSERT, "( ( material != nullptr ) )", "( material ) = %p", NULL) )
          __debugbreak();
        v20 = 0;
        if ( v19->textureCount )
        {
          do
          {
            p_name = &v19->textureTable[v20].image->name;
            if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 590, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
              __debugbreak();
            if ( ((_DWORD)p_name[3] & 0x40) != 0 )
            {
              v22 = DCONST_DVARBOOL_cl_streaming_devVerbose;
              if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v22);
              if ( v22->current.enabled )
              {
                LODWORD(fmt) = Sys_Milliseconds();
                Com_Printf(14, "CL_Streaming: added required image %s (mip=%u) time %d\n", *p_name, (unsigned int)requiredMip, fmt);
              }
              GfxImageIndex = DB_GetGfxImageIndex((const GfxImage *)p_name);
              v24 = GfxImageIndex;
              if ( GfxImageIndex >= 0x14000 )
              {
                LODWORD(v34) = 81920;
                LODWORD(v33) = GfxImageIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v33, v34) )
                  __debugbreak();
              }
              v38[v24 >> 5] |= 0x80000000 >> (v24 & 0x1F);
            }
            ++v20;
          }
          while ( v20 < v19->textureCount );
          v17 = v35;
          v18 = v36;
        }
        v35 = ++v17;
        v36 = --v18;
      }
      while ( v18 );
      v4 = requestItem;
    }
    v25 = 0;
    v26 = v38[0];
    while ( v26 )
    {
LABEL_56:
      v28 = __lzcnt(v26);
      if ( v28 >= 0x20 )
      {
        LODWORD(v32) = 32;
        LODWORD(v31) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v28) & v26) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v26 &= ~(0x80000000 >> v28);
      v4->requestRequiredImages = CL_Streaming_Images_AddImageInternal(v4->requestRequiredImages, v28 + 32 * v8);
      if ( v25 == 0xFF )
      {
        LODWORD(v34) = 255;
        LODWORD(v33) = 255;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 614, ASSERT_TYPE_ASSERT, "( imageCount ) < ( 0xffui8 )", "%s < %s\n\t%i, %i", "imageCount", "UINT8_MAX", v33, v34) )
          __debugbreak();
      }
      ++v25;
    }
    while ( 1 )
    {
      v27 = (unsigned int)(v8 + 1);
      v8 = v27;
      if ( (unsigned int)v27 >= 0xA00 )
        break;
      v26 = v38[v27];
      if ( v26 )
        goto LABEL_56;
    }
  }
  else
  {
    v25 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v25;
}

/*
==============
CL_Streaming_Images_ClearImages
==============
*/
void CL_Streaming_Images_ClearImages(const LocalClientNum_t localClientNum, const ClStreamingImageUser user)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v2 = localClientNum;
  v3 = user;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3388, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage ) ) + 0 ) )", "localClientNum doesn't index s_clStreamedImageUserFirstImagePage\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3389, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage[localClientNum] ) ) + 0 ) )", "user doesn't index s_clStreamedImageUserFirstImagePage[localClientNum]\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  s_clStreamedImageUserFirstImagePage[v2][v3] = CL_Streaming_Images_ClearImagesInternal(s_clStreamedImageUserFirstImagePage[v2][v3]);
}

/*
==============
CL_Streaming_Images_ClearImagesInternal
==============
*/
__int64 CL_Streaming_Images_ClearImagesInternal(const unsigned __int16 firstPageIndex)
{
  unsigned __int16 v1; 
  ClStreamedImagePage *v2; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = firstPageIndex;
  while ( v1 )
  {
    if ( v1 >= 0xA9u )
    {
      LODWORD(v7) = 169;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 425, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImagePool.pages ) ) + 0 ) )", "pageIndex doesn't index s_clStreamedImagePool.pages\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v2 = &s_clStreamedImagePool.pages[(unsigned __int64)v1];
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 507, ASSERT_TYPE_ASSERT, "( ( page != nullptr ) )", "( page ) = %p", NULL) )
      __debugbreak();
    if ( (*(_BYTE *)v2 & 0x3F) == 0 )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 508, ASSERT_TYPE_ASSERT, "( page->count ) != ( 0 )", "%s != %s\n\t%i, %i", "page->count", "0", v8, 0i64) )
        __debugbreak();
    }
    v3 = *(_DWORD *)v2;
    v4 = *(_DWORD *)v2 & 0xFFFFFFC0;
    *(_DWORD *)v2 = v4;
    v1 = (v3 >> 6) & 0x3FF;
    *(_DWORD *)v2 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(s_clStreamedImagePool.nextFreePageIndex << 6)) & 0xFFC0;
    s_clStreamedImagePool.nextFreePageIndex = CL_Streaming_Images_GetIndexForPage(v2);
    DebugWipe(v2->imageIndices, 0x3Cui64);
  }
  return 0i64;
}

/*
==============
CL_Streaming_Images_GetIndexForPage
==============
*/
__int64 CL_Streaming_Images_GetIndexForPage(const ClStreamedImagePage *const page)
{
  signed __int64 v2; 

  if ( page < s_clStreamedImagePool.pages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 417, ASSERT_TYPE_ASSERT, "( page ) >= ( &s_clStreamedImagePool.pages[0] )", "%s >= %s\n\t%p, %p", "page", "&s_clStreamedImagePool.pages[0]", page, s_clStreamedImagePool.pages) )
    __debugbreak();
  if ( page >= (const ClStreamedImagePage *const)&s_clStreamedImagePool.missedAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 418, ASSERT_TYPE_ASSERT, "( page ) < ( &s_clStreamedImagePool.pages[CL_STREAMED_IMAGE_PAGE_COUNT] )", "%s < %s\n\t%p, %p", "page", "&s_clStreamedImagePool.pages[CL_STREAMED_IMAGE_PAGE_COUNT]", page, &s_clStreamedImagePool.missedAllocations) )
    __debugbreak();
  v2 = page - s_clStreamedImagePool.pages;
  if ( (v2 < 0 || (unsigned __int64)v2 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v2, "signed", v2) )
    __debugbreak();
  return (unsigned __int16)v2;
}

/*
==============
CL_Streaming_Images_GetPageAtIndex
==============
*/
ClStreamedImagePage *CL_Streaming_Images_GetPageAtIndex(const unsigned __int16 pageIndex)
{
  int v3; 
  int v4; 

  if ( pageIndex >= 0xA9u )
  {
    v4 = 169;
    v3 = pageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 425, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImagePool.pages ) ) + 0 ) )", "pageIndex doesn't index s_clStreamedImagePool.pages\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_clStreamedImagePool.pages[(unsigned __int64)pageIndex];
}

/*
==============
CL_Streaming_Images_HintImagesInCache
==============
*/
void CL_Streaming_Images_HintImagesInCache(const LocalClientNum_t localClientNum, const ClStreamingImageUser user, const StreamMiniDistance hintDistance)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 
  CL_Streaming_Images_HintImagesFunctor imageFn; 

  v3 = localClientNum;
  v4 = user;
  imageFn.hintDistance.mValue = hintDistance.mValue;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3379, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage ) ) + 0 ) )", "localClientNum doesn't index s_clStreamedImageUserFirstImagePage\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3380, ASSERT_TYPE_ASSERT, "(unsigned)( user ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImageUserFirstImagePage[localClientNum] ) ) + 0 ) )", "user doesn't index s_clStreamedImageUserFirstImagePage[localClientNum]\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  CL_Streaming_Images_ForEachImage_CL_Streaming_Images_HintImagesFunctor_(s_clStreamedImageUserFirstImagePage[v3][v4], &imageFn);
}

/*
==============
CL_Streaming_Images_MarkMissedAllocation
==============
*/
char CL_Streaming_Images_MarkMissedAllocation()
{
  char result; 
  unsigned int missedAllocations; 
  int v2; 

  if ( s_clStreamedImagePool.missedAllocations == -1 )
  {
    v2 = -1;
    missedAllocations = s_clStreamedImagePool.missedAllocations;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 409, ASSERT_TYPE_ASSERT, "( s_clStreamedImagePool.missedAllocations ) < ( 0xffffffff )", "%s < %s\n\t%i, %i", "s_clStreamedImagePool.missedAllocations", "UINT_MAX", missedAllocations, v2);
    if ( result )
      __debugbreak();
    ++s_clStreamedImagePool.missedAllocations;
  }
  else
  {
    result = LOBYTE(s_clStreamedImagePool.missedAllocations) + 1;
    ++s_clStreamedImagePool.missedAllocations;
  }
  return result;
}

/*
==============
CL_Streaming_Init
==============
*/
void CL_Streaming_Init(void)
{
  ClStreamedImagePage *v0; 
  unsigned __int16 v1; 
  int v2; 
  unsigned int i; 
  bool v4; 
  StreamSyncClientType j; 
  StreamRequestQueue *ClientRequestQueue; 
  __int64 v7; 
  __int64 v8; 

  Cmd_AddCommandInternal("cl_streaming_devUnloadAll", CL_Streaming_UnloadAll, &CL_Streaming_UnloadAll_VAR);
  Cmd_AddCommandInternal("cl_streaming_devUnloadHeads", CL_Streaming_UnloadHeads, &CL_Streaming_UnloadHeads_VAR);
  Cmd_AddCommandInternal("cl_streaming_devUnloadBodies", CL_Streaming_UnloadBodies, &CL_Streaming_UnloadBodies_VAR);
  Cmd_AddCommandInternal("cl_streaming_devUnloadWeapons", CL_Streaming_UnloadWeapons, &CL_Streaming_UnloadWeapons_VAR);
  Cmd_AddCommandInternal("cl_streaming_devUnloadViewWeapons", CL_Streaming_UnloadViewWeapons, &CL_Streaming_UnloadViewWeapons_VAR);
  Cmd_AddCommandInternal("cl_streaming_devUnloadViewArms", CL_Streaming_UnloadViewArms, &CL_Streaming_UnloadViewArms_VAR);
  Cmd_AddCommandInternal("cl_streaming_devRefreshAll", CL_Streaming_RefreshAll, &CL_Streaming_RefreshAll_VAR);
  if ( !s_clStreamingInitialized )
  {
    CL_Streaming_InitRequestBuffers();
    CL_Streaming_ClearAllBuffers();
    v0 = &s_clStreamedImagePool.pages[168];
    v1 = 168;
    do
    {
      if ( v1 >= 0xA9u )
      {
        LODWORD(v8) = 169;
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2459, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImagePool.pages ) ) + 0 ) )", "pageIndex doesn't index s_clStreamedImagePool.pages\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      *(_DWORD *)v0 &= 0xFFFF003F;
      *(_DWORD *)v0-- |= (--v1 & 0x3FF) << 6;
    }
    while ( v1 );
    *(_DWORD *)s_clStreamedImagePool.pages &= 0xFFFF003F;
    s_clStreamedImagePool.nextFreePageIndex = 168;
    s_clStreamingInitialized = 1;
  }
  v2 = 0;
  for ( i = 0; i < 3; ++i )
    CL_Streaming_ResetRequestQueue(s_worldRequestQueue[i]);
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2392, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
    {
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v2, j);
      CL_Streaming_ResetRequestQueue(ClientRequestQueue);
    }
    v4 = (unsigned int)++v2 < 2;
  }
  while ( v2 < 2 );
  CL_Streaming_FreeUnusedResources();
}

/*
==============
CL_Streaming_InitImagePool
==============
*/
void CL_Streaming_InitImagePool(void)
{
  ClStreamedImagePage *v0; 
  unsigned __int16 v1; 
  __int64 v2; 
  __int64 v3; 

  v0 = &s_clStreamedImagePool.pages[168];
  v1 = 168;
  do
  {
    if ( v1 >= 0xA9u )
    {
      LODWORD(v3) = 169;
      LODWORD(v2) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2459, ASSERT_TYPE_ASSERT, "(unsigned)( pageIndex ) < (unsigned)( ( sizeof( *array_counter( s_clStreamedImagePool.pages ) ) + 0 ) )", "pageIndex doesn't index s_clStreamedImagePool.pages\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    *(_DWORD *)v0 &= 0xFFFF003F;
    *(_DWORD *)v0-- |= (--v1 & 0x3FF) << 6;
  }
  while ( v1 );
  *(_DWORD *)s_clStreamedImagePool.pages &= 0xFFFF003F;
  s_clStreamedImagePool.nextFreePageIndex = 168;
}

/*
==============
CL_Streaming_InitLimits
==============
*/
void CL_Streaming_InitLimits(void)
{
  int maxClients; 
  int activeCount; 
  int v2; 
  unsigned int (*v3)[6]; 
  StreamSyncClientType i; 
  __int64 v5; 
  __int64 v6; 

  maxClients = cls.maxClients;
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  activeCount = cls.m_localClientsActive.activeCount;
  if ( !maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2987, ASSERT_TYPE_ASSERT, "(maxClients)", (const char *)&queryFormat, "maxClients") )
    __debugbreak();
  if ( !activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2988, ASSERT_TYPE_ASSERT, "(localClientCount)", (const char *)&queryFormat, "localClientCount") )
    __debugbreak();
  v2 = 0;
  v3 = s_clStreamingLimits;
  do
  {
    for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v6) = 2;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2970, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      *(_DWORD *)v3 = Com_StreamSync_GetMaxEntryCount(i, maxClients, activeCount);
      v3 = (unsigned int (*)[6])((char *)v3 + 4);
    }
    ++v2;
  }
  while ( v2 < 2 );
}

/*
==============
CL_Streaming_InitRequest
==============
*/
void CL_Streaming_InitRequest(StreamRequestQueue *requestQueue, const unsigned int requestIndex, const ClStreamingRequest *request, const StreamRequestState requestState)
{
  __int64 v4; 
  __int64 v8; 
  unsigned int v9; 
  StreamRequestItem *i; 
  __int64 v11; 
  __int64 v12; 

  v4 = requestIndex;
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 964, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( (unsigned int)v4 >= requestQueue->requestCount )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 965, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v12, requestQueue->requestCount) )
      __debugbreak();
  }
  v8 = v4;
  v9 = 0;
  for ( i = &requestQueue->requestItem[v4]; v9 < request->assetCount; i->requestAssets[v11].assetId = request->assetIds[v11] )
    v11 = v9++;
  requestQueue->requestHash[v8] = CL_Streaming_GetRequestHash(request);
  i->requestAssetCount = request->assetCount;
  i->requestTime = requestQueue->rebuildCount;
  i->requestPriority.raw = request->priority.raw;
  i->requestLoadState = requestState;
  i->requestRequiredMip = NO_MIPS;
  i->requestRequiredImages = 0;
  *(_QWORD *)&i->requestStartLoadTime = 0i64;
  *(_WORD *)&i->requestFromDev = 0;
  i->requestLoadingImageCount = 0;
}

/*
==============
CL_Streaming_InitRequestBuffers
==============
*/
char CL_Streaming_InitRequestBuffers()
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  StreamSyncClientType i; 
  ClStreamingBufferNum v5; 
  StreamRequestBufferData *v6; 
  ClStreamingRequestBuffer *RequestBuffer; 
  int v8; 
  StreamRequestBufferData *bodyRequests; 
  bool v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v0 = 0;
  v1 = 14880i64;
  v2 = 12000i64;
  v3 = 9600i64;
  do
  {
    for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
    {
      v5 = CL_STREAMING_BUFFER_INPUT_0;
      v6 = s_clStreamingRequestBufferData;
      do
      {
        RequestBuffer = CL_Streaming_GetRequestBuffer((const LocalClientNum_t)v0, i, v5);
        switch ( i )
        {
          case STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL:
          case STREAM_SYNC_CLIENT_TYPE_BODY:
            v8 = 48;
            break;
          case STREAM_SYNC_CLIENT_TYPE_WEAPON:
            v8 = 64;
            break;
          case STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL:
            v8 = 20;
            break;
          case STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON:
            v8 = 24;
            break;
          case STREAM_SYNC_CLIENT_TYPE_CLIENT_MODELS:
            v8 = 32;
            break;
          default:
            LODWORD(v12) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 725, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_Streaming_GetMaxRequestBufferSize: unhandled StreamSyncClientType %u", v12) )
              __debugbreak();
            v8 = 0;
            break;
        }
        RequestBuffer->maxRequestCount = v8;
        switch ( i )
        {
          case STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL:
            bodyRequests = v6;
            break;
          case STREAM_SYNC_CLIENT_TYPE_BODY:
            bodyRequests = (StreamRequestBufferData *)v6->bodyRequests;
            break;
          case STREAM_SYNC_CLIENT_TYPE_WEAPON:
            bodyRequests = (StreamRequestBufferData *)v6->worldWeaponRequests;
            break;
          case STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL:
            if ( (unsigned int)v0 >= 2 )
            {
              LODWORD(v13) = 2;
              LODWORD(v12) = v0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 742, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( bufferData.viewArmsRequests ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( bufferData.viewArmsRequests )\n\t%i not in [0, %i)", v12, v13) )
                __debugbreak();
            }
            bodyRequests = (StreamRequestBufferData *)((char *)v6 + v3);
            break;
          case STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON:
            if ( (unsigned int)v0 >= 2 )
            {
              LODWORD(v13) = 2;
              LODWORD(v12) = v0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 747, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( bufferData.viewArmsRequests ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( bufferData.viewArmsRequests )\n\t%i not in [0, %i)", v12, v13) )
                __debugbreak();
            }
            bodyRequests = (StreamRequestBufferData *)((char *)v6 + v2);
            break;
          case STREAM_SYNC_CLIENT_TYPE_CLIENT_MODELS:
            if ( (unsigned int)v0 >= 2 )
            {
              LODWORD(v13) = 2;
              LODWORD(v12) = v0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 752, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( bufferData.viewArmsRequests ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( bufferData.viewArmsRequests )\n\t%i not in [0, %i)", v12, v13) )
                __debugbreak();
            }
            bodyRequests = (StreamRequestBufferData *)((char *)v6 + v1);
            break;
          default:
            LODWORD(v12) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 759, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_Streaming_GetRequestArrayForBufferAndType: unhandled StreamSyncClientType %u", v12) )
              __debugbreak();
            bodyRequests = NULL;
            break;
        }
        v10 = RequestBuffer->maxRequestCount == 0;
        RequestBuffer->requests = (ClStreamingRequest *)bodyRequests;
        if ( v10 )
        {
          LODWORD(v14) = 0;
          LOBYTE(bodyRequests) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2420, ASSERT_TYPE_ASSERT, "( buffer.maxRequestCount ) != ( 0 )", "%s != %s\n\t%i, %i", "buffer.maxRequestCount", "0", v14, 0i64);
          if ( (_BYTE)bodyRequests )
            __debugbreak();
        }
        if ( !RequestBuffer->requests )
        {
          LOBYTE(bodyRequests) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2421, ASSERT_TYPE_ASSERT, "( ( buffer.requests != nullptr ) )", "( buffer.requests ) = %p", NULL);
          if ( (_BYTE)bodyRequests )
            __debugbreak();
        }
        ++v5;
        ++v6;
      }
      while ( (unsigned int)v5 < CL_STREAMING_BUFFER_COUNT );
    }
    ++v0;
    v3 += 1200i64;
    v2 += 1440i64;
    v1 += 1920i64;
  }
  while ( v0 < 2 );
  return (char)bodyRequests;
}

/*
==============
CL_Streaming_IsClientRequestLoaded
==============
*/
bool CL_Streaming_IsClientRequestLoaded(const LocalClientNum_t localClientNum, const ClStreamingRequest *request, const StreamSyncClientType requestType)
{
  StreamRequestQueue *ClientRequestQueue; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  unsigned int outRequestIndex; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3126, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v9) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3127, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v9, 6) )
      __debugbreak();
  }
  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, requestType);
  if ( ClientRequestQueue->requestCount > ClientRequestQueue->maxRequestCount )
  {
    LODWORD(v10) = ClientRequestQueue->maxRequestCount;
    LODWORD(v9) = ClientRequestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3130, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v9, v10) )
      __debugbreak();
  }
  if ( !CL_Streaming_FindRequest(ClientRequestQueue, request, &outRequestIndex) )
    return 0;
  v7 = outRequestIndex;
  if ( outRequestIndex >= ClientRequestQueue->requestCount )
  {
    LODWORD(v10) = ClientRequestQueue->requestCount;
    LODWORD(v9) = outRequestIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3134, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return ClientRequestQueue->requestItem[v7].requestLoadState == STREAM_REQUEST_STATE_LOADED;
}

/*
==============
CL_Streaming_IsRequestTypeEnabled
==============
*/
char CL_Streaming_IsRequestTypeEnabled(const StreamSyncClientType type)
{
  __int32 v1; 
  __int32 v2; 
  __int32 v3; 
  const dvar_t *v5; 
  const char *v6; 

  if ( type == STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL )
  {
    v5 = DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled;
    if ( DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled )
      goto LABEL_19;
    v6 = "cl_streaming_headUpdatesEnabled";
    goto LABEL_17;
  }
  v1 = type - 1;
  if ( !v1 )
  {
    v5 = DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled;
    if ( DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled )
      goto LABEL_19;
    v6 = "cl_streaming_bodyUpdatesEnabled";
    goto LABEL_17;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v5 = DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled;
    if ( DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled )
      goto LABEL_19;
    v6 = "cl_streaming_weaponUpdatesEnabled";
    goto LABEL_17;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled;
    if ( DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled )
      goto LABEL_19;
    v6 = "cl_streaming_viewArmsUpdatesEnabled";
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
    goto LABEL_19;
  }
  if ( v3 != 1 )
    return 1;
  v5 = DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled;
  if ( !DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled )
  {
    v6 = "cl_streaming_viewWeaponUpdatesEnabled";
    goto LABEL_17;
  }
LABEL_19:
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled;
}

/*
==============
CL_Streaming_IsWeaponViewRequestLoaded
==============
*/
bool CL_Streaming_IsWeaponViewRequestLoaded(const LocalClientNum_t localClientNum, const Weapon *weapon)
{
  StreamRequestQueue *ClientRequestQueue; 
  __int64 v4; 
  __int64 v6; 
  unsigned int requestCount; 
  __int64 v8; 
  unsigned int maxRequestCount; 
  unsigned int outRequestIndex; 
  ClStreamingRequest outRequest; 

  CL_Streaming_GetWeaponRequest(weapon, ASSET_STREAMING_ZERO_PRIORITY, 1, &outRequest);
  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON);
  if ( ClientRequestQueue->requestCount > ClientRequestQueue->maxRequestCount )
  {
    maxRequestCount = ClientRequestQueue->maxRequestCount;
    requestCount = ClientRequestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3130, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", requestCount, maxRequestCount) )
      __debugbreak();
  }
  if ( !CL_Streaming_FindRequest(ClientRequestQueue, &outRequest, &outRequestIndex) )
    return 0;
  v4 = outRequestIndex;
  if ( outRequestIndex >= ClientRequestQueue->requestCount )
  {
    LODWORD(v8) = ClientRequestQueue->requestCount;
    LODWORD(v6) = outRequestIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3134, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  return ClientRequestQueue->requestItem[v4].requestLoadState == STREAM_REQUEST_STATE_LOADED;
}

/*
==============
CL_Streaming_IsWeaponWorldRequestLoaded
==============
*/
bool CL_Streaming_IsWeaponWorldRequestLoaded(const Weapon *weapon)
{
  __int64 v1; 
  bool v2; 
  __int64 v4; 
  unsigned int requestCount; 
  __int64 v6; 
  unsigned int maxRequestCount; 
  unsigned int outRequestIndex; 
  __int64 v9; 
  ClStreamingRequest outRequest; 

  v9 = -2i64;
  CL_Streaming_GetWeaponRequest(weapon, ASSET_STREAMING_ZERO_PRIORITY, 0, &outRequest);
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_IsWorldRequestLoaded");
  if ( s_worldWeaponRequestQueue.requestCount > s_worldWeaponRequestQueue.maxRequestCount )
  {
    maxRequestCount = s_worldWeaponRequestQueue.maxRequestCount;
    requestCount = s_worldWeaponRequestQueue.requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3108, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", requestCount, maxRequestCount) )
      __debugbreak();
  }
  if ( CL_Streaming_FindRequest(&s_worldWeaponRequestQueue, &outRequest, &outRequestIndex) )
  {
    v1 = outRequestIndex;
    if ( outRequestIndex >= s_worldWeaponRequestQueue.requestCount )
    {
      LODWORD(v6) = s_worldWeaponRequestQueue.requestCount;
      LODWORD(v4) = outRequestIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3112, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    v2 = s_worldWeaponRequestQueue.requestItem[v1].requestLoadState == STREAM_REQUEST_STATE_LOADED;
    Sys_ProfEndNamedEvent();
    return v2;
  }
  else
  {
    Sys_ProfEndNamedEvent();
    return 0;
  }
}

/*
==============
CL_Streaming_IsWorldRequestLoaded
==============
*/
_BOOL8 CL_Streaming_IsWorldRequestLoaded(const ClStreamingRequest *request, const StreamSyncWorldType requestType)
{
  __int64 v2; 
  StreamRequestQueue *v4; 
  __int64 v5; 
  bool v6; 
  __int64 v8; 
  __int64 v9; 
  unsigned int outRequestIndex; 

  v2 = requestType;
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_IsWorldRequestLoaded");
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3104, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( (unsigned int)v2 >= 6 )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3105, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v8, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v9) = 3;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v4 = s_worldRequestQueue[v2];
  if ( v4->requestCount > v4->maxRequestCount )
  {
    LODWORD(v9) = v4->maxRequestCount;
    LODWORD(v8) = v4->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3108, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v8, v9) )
      __debugbreak();
  }
  if ( CL_Streaming_FindRequest(v4, request, &outRequestIndex) )
  {
    v5 = outRequestIndex;
    if ( outRequestIndex >= v4->requestCount )
    {
      LODWORD(v9) = v4->requestCount;
      LODWORD(v8) = outRequestIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3112, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = v4->requestItem[v5].requestLoadState == STREAM_REQUEST_STATE_LOADED;
  }
  else
  {
    v6 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v6;
}

/*
==============
CL_Streaming_LoadDevCustomizationAssets
==============
*/
void CL_Streaming_LoadDevCustomizationAssets(const StreamSyncClientType streamType, const CustomizationModelType customizationType)
{
  ClGameModeApplication *ActiveClientApplication; 
  int v5; 
  bool v6; 
  connstate_t *i; 
  StreamRequestQueue *ClientRequestQueue; 
  unsigned int ModelCount; 
  const dvar_t *v10; 
  unsigned int v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  const char *ModelName; 
  AssetStreamingPriority v15; 
  __int64 requestCount; 
  __int64 v17; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  unsigned int outRequestIndex; 
  ClStreamingRequest request; 

  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    v21 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3428, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( CUSTOMIZATION_TYPE_COUNT )", "customizationType doesn't index CUSTOMIZATION_TYPE_COUNT\n\t%i not in [0, %i)", customizationType, v21) )
      __debugbreak();
  }
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  if ( CL_Streaming_IsRequestTypeEnabled(streamType) )
  {
    v5 = 0;
    v6 = 1;
    for ( i = &clientUIActives[0].connectionState; ; i += 110 )
    {
      if ( !v6 )
      {
        LODWORD(v20) = 2;
        LODWORD(v17) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v20) )
          __debugbreak();
        LODWORD(v22) = 2;
        LODWORD(v19) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v22) )
          __debugbreak();
      }
      if ( !*((_BYTE *)i + 28) )
      {
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v20) = 2;
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v20) )
            __debugbreak();
        }
        if ( *i == CA_ACTIVE )
          break;
      }
      v6 = (unsigned int)++v5 < 2;
      if ( v5 >= 2 )
        return;
    }
    ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v5, streamType);
    ModelCount = BG_Customization_GetModelCount(customizationType);
    v10 = DCONST_DVARBOOL_cl_streaming_devMaxLoad;
    v11 = 0;
    v12 = ModelCount;
    if ( !DCONST_DVARBOOL_cl_streaming_devMaxLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devMaxLoad") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
      goto LABEL_26;
    v13 = DCONST_DVARBOOL_cl_streaming_devMaxLoadCustom;
    if ( !DCONST_DVARBOOL_cl_streaming_devMaxLoadCustom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devMaxLoadCustom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
LABEL_26:
      if ( v12 )
      {
        while ( ClientRequestQueue->requestCount != ClientRequestQueue->maxRequestCount )
        {
          ModelName = BG_Customization_GetModelName(customizationType, v11);
          if ( !ActiveClientApplication->IsModelNameLoaded(ActiveClientApplication, ModelName) )
          {
            v15.raw = ASSET_STREAMING_ZERO_PRIORITY.raw;
            if ( ModelName && *ModelName )
            {
              request.assetIds[0] = CL_Streaming_AssetId_GetFromName(ModelName);
              request.assetCount = 1;
            }
            else
            {
              *(_QWORD *)&request.assetCount = 0i64;
            }
            request.priority = v15;
            if ( !CL_Streaming_FindRequest(ClientRequestQueue, &request, &outRequestIndex) )
            {
              requestCount = ClientRequestQueue->requestCount;
              if ( (unsigned int)requestCount >= ClientRequestQueue->maxRequestCount )
              {
                LODWORD(v20) = streamType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3463, ASSERT_TYPE_ASSERT, "(requestIndex < requestQueue->maxRequestCount)", "%s\n\tTrying to requestItem a customization asset (streamType:%d) to fill capacity, but we are already at capacity", "requestIndex < requestQueue->maxRequestCount", v20) )
                  __debugbreak();
              }
              if ( !CL_Streaming_StartRequest(ClientRequestQueue, &request, streamType) )
                return;
              ClientRequestQueue->requestItem[requestCount].requestFromDev = 1;
            }
          }
          if ( ++v11 >= v12 )
            return;
        }
      }
    }
  }
}

/*
==============
CL_Streaming_LoadDevWeaponAssets
==============
*/
void CL_Streaming_LoadDevWeaponAssets(const StreamSyncClientType streamType)
{
  int v2; 
  connstate_t *p_connectionState; 
  bool v4; 
  StreamRequestQueue *ClientRequestQueue; 
  const dvar_t *v6; 
  StreamRequestQueue *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  unsigned int WeaponStreamedModels; 
  const XModel **v11; 
  __int64 v12; 
  __int64 requestCount; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int outRequestIndex; 
  Weapon inOutWeapon; 
  ClStreamingRequest outRequest; 
  const XModel *outList[32]; 

  if ( CL_Streaming_IsRequestTypeEnabled(streamType) )
  {
    if ( ((streamType - 2) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3549, ASSERT_TYPE_ASSERT, "(streamType == STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON || streamType == STREAM_SYNC_CLIENT_TYPE_WEAPON)", (const char *)&queryFormat, "streamType == STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON || streamType == STREAM_SYNC_CLIENT_TYPE_WEAPON") )
      __debugbreak();
    v2 = 0;
    p_connectionState = &clientUIActives[0].connectionState;
    v4 = 1;
    while ( 1 )
    {
      if ( !v4 )
      {
        LODWORD(v16) = 2;
        LODWORD(v14) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v16) )
          __debugbreak();
        LODWORD(v17) = 2;
        LODWORD(v15) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v17) )
          __debugbreak();
      }
      if ( !*((_BYTE *)p_connectionState + 28) )
      {
        if ( (unsigned int)v2 >= 2 )
        {
          LODWORD(v16) = 2;
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v16) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
          break;
      }
      ++v2;
      p_connectionState += 110;
      v4 = (unsigned int)v2 < 2;
      if ( v2 >= 2 )
        return;
    }
    ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v2, streamType);
    v6 = DCONST_DVARBOOL_cl_streaming_devMaxLoad;
    v7 = ClientRequestQueue;
    *(_DWORD *)&inOutWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    memset(&inOutWeapon, 0, 48);
    *(double *)&inOutWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    if ( !DCONST_DVARBOOL_cl_streaming_devMaxLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devMaxLoad") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      goto LABEL_33;
    v8 = DCONST_DVARBOOL_cl_streaming_devMaxLoadWeapons;
    if ( !DCONST_DVARBOOL_cl_streaming_devMaxLoadWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devMaxLoadWeapons") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
LABEL_33:
      while ( 1 )
      {
        do
        {
          v9 = DCONST_DVARBOOL_cl_streaming_devLoadWeaponsRandom;
          if ( !DCONST_DVARBOOL_cl_streaming_devLoadWeaponsRandom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devLoadWeaponsRandom") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v9);
          if ( v9->current.enabled )
          {
            BG_WeaponsUtil_RandomizeWeapon(&inOutWeapon, &s_clStreamingRandomWeaponSeed);
          }
          else if ( !BG_WeaponsUtil_AdvanceWeapon(&inOutWeapon) )
          {
            return;
          }
        }
        while ( !BG_WeaponHasStreamedModels(&inOutWeapon) );
        if ( v7->requestCount == v7->maxRequestCount )
          break;
        if ( (unsigned int)streamType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
        {
          LODWORD(v16) = 6;
          LODWORD(v14) = streamType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3486, ASSERT_TYPE_ASSERT, "(unsigned)( streamType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "streamType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v14, v16) )
            __debugbreak();
        }
        WeaponStreamedModels = BG_GetWeaponStreamedModels(&inOutWeapon, (const XModel *(*)[32])outList, streamType == STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON);
        if ( WeaponStreamedModels )
        {
          v11 = outList;
          outRequest.priority = ASSET_STREAMING_ZERO_PRIORITY;
          outRequest.assetCount = 0;
          v12 = WeaponStreamedModels;
          do
          {
            CL_Streaming_AddWeaponRequest(*v11++, &outRequest);
            --v12;
          }
          while ( v12 );
          if ( !CL_Streaming_FindRequest(v7, &outRequest, &outRequestIndex) )
          {
            requestCount = v7->requestCount;
            if ( (unsigned int)requestCount >= v7->maxRequestCount )
            {
              LODWORD(v16) = streamType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3577, ASSERT_TYPE_ASSERT, "(requestIndex < requestQueue->maxRequestCount)", "%s\n\tTrying to requestItem a weapon asset (streamType:%d) to fill capacity, but we are already at capacity", "requestIndex < requestQueue->maxRequestCount", v16) )
                __debugbreak();
            }
            if ( !CL_Streaming_StartRequest(v7, &outRequest, streamType) )
              return;
            v7->requestItem[requestCount].requestFromDev = 1;
          }
        }
      }
    }
  }
}

/*
==============
CL_Streaming_MarkQueueAssetsInUse
==============
*/
void CL_Streaming_MarkQueueAssetsInUse(StreamRequestQueue *requestQueue)
{
  unsigned int i; 
  StreamRequestItem *v3; 
  __int64 j; 
  scr_string_t assetId; 
  __int64 v6; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1915, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v6) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1916, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v6, requestQueue->maxRequestCount) )
      __debugbreak();
  }
  for ( i = 0; i < requestQueue->requestCount; ++i )
  {
    v3 = &requestQueue->requestItem[i];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1921, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
      __debugbreak();
    for ( j = 0i64; (unsigned int)j < v3->requestAssetCount; j = (unsigned int)(j + 1) )
    {
      assetId = v3->requestAssets[j].assetId;
      if ( !SL_IsValidStringValue(assetId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 377, ASSERT_TYPE_ASSERT, "(SL_IsValidStringValue( assetString ))", (const char *)&queryFormat, "SL_IsValidStringValue( assetString )") )
        __debugbreak();
      j_SL_AddUser(assetId, 0x20u);
    }
  }
}

/*
==============
CL_Streaming_MarkRequestItemLoaded
==============
*/
void CL_Streaming_MarkRequestItemLoaded(StreamRequestQueue *const requestQueue, StreamRequestItem *const requestItem, const StreamSyncClientType requestType)
{
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  int LogChannel; 
  __int64 v11; 
  char outRequestString[1024]; 

  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1650, ASSERT_TYPE_ASSERT, "( ( requestItem != nullptr ) )", "( requestItem ) = %p", NULL) )
    __debugbreak();
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1651, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  v6 = Sys_Milliseconds();
  v7 = v6 - requestItem->requestStartLoadTime;
  v8 = v6 - requestItem->requestDelayLoadTime;
  v9 = v6;
  CL_Streaming_GetRequestItemModelsText(requestItem, outRequestString, 0x400u);
  LogChannel = DB_GetLogChannel();
  LODWORD(v11) = v9;
  Com_Printf(LogChannel, "CL_Streaming: Load completed for request (0x%p) %d::%s at time %d (%d total ms, %d real ms).\n", requestItem, (unsigned int)requestType, outRequestString, v11, v7, v8);
  requestItem->requestLoadState = STREAM_REQUEST_STATE_LOADED;
  requestQueue->anyRequestsLoadedThisFrame = 1;
}

/*
==============
CL_Streaming_OnLevelLoad
==============
*/
void CL_Streaming_OnLevelLoad(void)
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_cl_streaming_devVerbose;
  if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Com_Printf(14, "CL_Streaming_OnLevelLoad():\n");
    CL_Streaming_DevPrintAllRequestQueues();
  }
}

/*
==============
CL_Streaming_OnLevelUnload
==============
*/
void CL_Streaming_OnLevelUnload(void)
{
  int i; 
  const dvar_t *v1; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
      CL_Streaming_CancelLoadingRequests((const LocalClientNum_t)i);
  }
  CL_Streaming_FreeUnusedResources();
  v1 = DCONST_DVARBOOL_cl_streaming_devVerbose;
  if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Com_Printf(14, "CL_Streaming_OnLevelUnload():\n");
    CL_Streaming_DevPrintAllRequestQueues();
  }
}

/*
==============
CL_Streaming_ProcessLoadRequest
==============
*/
char CL_Streaming_ProcessLoadRequest(StreamRequestItem *requestItem, const StreamSyncClientType requestType)
{
  const dvar_t *v4; 
  __int64 v5; 
  ClGameModeApplication *ActiveClientApplication; 
  const char *v7; 
  const dvar_t *v8; 
  int integer; 
  const dvar_t *v10; 
  int v11; 
  unsigned __int8 v12; 
  unsigned __int8 requestLoadingModelCount; 
  __int64 v15; 
  char outRequestString[1024]; 

  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1352, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v15) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1353, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v15, 6) )
      __debugbreak();
  }
  v4 = DCONST_DVARBOOL_cl_streaming_devVerbose;
  if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    CL_Streaming_GetRequestItemModelsText(requestItem, outRequestString, 0x400u);
    LODWORD(v15) = Sys_Milliseconds();
    Com_Printf(14, "CL_Streaming: New load request for request (0x%p) %d::%s at time %d\n", requestItem, (unsigned int)requestType, outRequestString, v15);
  }
  v5 = 0i64;
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  if ( requestItem->requestAssetCount )
  {
    while ( 1 )
    {
      v7 = CL_Streaming_AssetId_ConvertToString(requestItem->requestAssets[v5].assetId);
      if ( !((unsigned __int8 (__fastcall *)(ClGameModeApplication *, const char *, _QWORD))ActiveClientApplication->LoadModel)(ActiveClientApplication, v7, requestItem->requestPriority.raw) )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= requestItem->requestAssetCount )
        goto LABEL_15;
    }
    requestLoadingModelCount = requestItem->requestLoadingModelCount;
    if ( requestLoadingModelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1375, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingModelCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingModelCount", "0", requestLoadingModelCount, 0i64) )
      __debugbreak();
    requestItem->requestLoadingModelCount = truncate_cast<unsigned char,unsigned int>(requestItem->requestAssetCount);
    return 0;
  }
  else
  {
LABEL_15:
    v8 = DCONST_DVARINT_cl_streaming_devDelayLoadBase;
    if ( !DCONST_DVARINT_cl_streaming_devDelayLoadBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devDelayLoadBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    v10 = DCONST_DVARINT_cl_streaming_devDelayLoadJitter;
    if ( !DCONST_DVARINT_cl_streaming_devDelayLoadJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devDelayLoadJitter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.integer;
    if ( integer < v11 )
      v11 = integer;
    requestItem->requestStartLoadTime = Sys_Milliseconds();
    requestItem->requestDelayLoadTime = requestItem->requestStartLoadTime + I_irand(integer - v11, v11 + integer);
    v12 = requestItem->requestLoadingModelCount;
    if ( v12 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1390, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingModelCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingModelCount", "0", v12, 0i64) )
        __debugbreak();
    }
    requestItem->requestLoadingModelCount = truncate_cast<unsigned char,unsigned int>(requestItem->requestAssetCount);
    return 1;
  }
}

/*
==============
CL_Streaming_ProcessLoadingRequestItem
==============
*/
void CL_Streaming_ProcessLoadingRequestItem(StreamRequestQueue *const requestQueue, StreamRequestItem *const requestItem, const StreamSyncClientType requestType)
{
  StreamRequestState requestLoadState; 
  StreamRequestState v7; 
  __int32 v8; 
  unsigned __int8 loadingCount; 
  const dvar_t *v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int LogChannel; 
  unsigned int v15; 
  const dvar_t *v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  CL_Streaming_Images_TouchImageAndCheckFunctor imageFn; 
  CL_Streaming_Images_DebugStringFunctor v26; 
  __int64 v27; 
  char dest[1019]; 
  int v29; 
  char v30; 

  v27 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_ProcessLoadingRequestItem");
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1674, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1675, ASSERT_TYPE_ASSERT, "( ( requestItem != nullptr ) )", "( requestItem ) = %p", NULL) )
    __debugbreak();
  if ( requestItem->requestLoadState == STREAM_REQUEST_STATE_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1676, ASSERT_TYPE_ASSERT, "(requestItem->requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_UNLOADED)", (const char *)&queryFormat, "requestItem->requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_UNLOADED") )
    __debugbreak();
  if ( requestItem->requestLoadState == STREAM_REQUEST_STATE_LOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1677, ASSERT_TYPE_ASSERT, "(requestItem->requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_LOADED)", (const char *)&queryFormat, "requestItem->requestLoadState != StreamRequestState::STREAM_REQUEST_STATE_LOADED") )
    __debugbreak();
  requestLoadState = requestItem->requestLoadState;
  if ( requestLoadState )
  {
    do
    {
      if ( requestLoadState == STREAM_REQUEST_STATE_LOADED )
        break;
      v7 = requestLoadState;
      v8 = requestLoadState - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          if ( !CL_Streaming_GetModelsLoadStatus(requestItem, requestType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1710, ASSERT_TYPE_ASSERT, "(CL_Streaming_GetModelsLoadStatus( requestItem, requestType ))", (const char *)&queryFormat, "CL_Streaming_GetModelsLoadStatus( requestItem, requestType )") )
            __debugbreak();
          Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_TouchRequiredImagesForRequestAndCheck");
          imageFn.loadingCount = 0;
          imageFn.mipRequested = requestItem->requestRequiredMip;
          CL_Streaming_Images_ForEachImage_CL_Streaming_Images_TouchImageAndCheckFunctor_(requestItem->requestRequiredImages, &imageFn);
          loadingCount = imageFn.loadingCount;
          requestItem->requestLoadingImageCount = imageFn.loadingCount;
          Sys_ProfEndNamedEvent();
          if ( !loadingCount )
          {
            v10 = DCONST_DVARBOOL_cl_streaming_devVerbose;
            if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v10);
            if ( v10->current.enabled )
            {
              v11 = Sys_Milliseconds();
              v12 = v11 - requestItem->requestStartLoadTime;
              v13 = v11 - requestItem->requestDelayLoadTime;
              v26.buffer = dest;
              v26.bufferSize = 1024i64;
              v26.imageCount = 0i64;
              v26.bytesWritten = Com_sprintf_truncate(dest, 0x400ui64, "[");
              CL_Streaming_Images_ForEachImage_CL_Streaming_Images_DebugStringFunctor_(requestItem->requestRequiredImages, &v26);
              if ( v26.bufferSize == v26.bytesWritten )
              {
                v29 = 1563307566;
                if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 885, ASSERT_TYPE_ASSERT, "(buffer[bufferSize - 1] == '\\0')", (const char *)&queryFormat, "buffer[bufferSize - 1] == '\\0'") )
                  __debugbreak();
              }
              else
              {
                Com_sprintf_truncate(&dest[v26.bytesWritten], v26.bufferSize - v26.bytesWritten, "]");
              }
              LogChannel = DB_GetLogChannel();
              LODWORD(v23) = v13;
              LODWORD(v22) = v12;
              LODWORD(v21) = v11;
              Com_Printf(LogChannel, "CL_Streaming: Images loaded for request (0x%p) %d::%s at time %d (%d total ms, %d real ms).\n", requestItem, (unsigned int)requestType, dest, v21, v22, v23);
            }
            v15 = Sys_Milliseconds();
            if ( v15 < requestItem->requestStartLoadTime )
            {
              LODWORD(v24) = requestItem->requestStartLoadTime;
              LODWORD(v23) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1727, ASSERT_TYPE_ASSERT, "( currentTime ) >= ( requestItem->requestStartLoadTime )", "%s >= %s\n\t%i, %i", "currentTime", "requestItem->requestStartLoadTime", v23, v24) )
                __debugbreak();
            }
            if ( requestItem->requestDelayLoadTime <= v15 )
              CL_Streaming_MarkRequestItemLoaded(requestQueue, requestItem, requestType);
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1738, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        {
          __debugbreak();
        }
      }
      else if ( CL_Streaming_GetModelsLoadStatus(requestItem, requestType) )
      {
        v16 = DCONST_DVARBOOL_cl_streaming_devVerbose;
        if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          v17 = Sys_Milliseconds();
          v18 = v17 - requestItem->requestStartLoadTime;
          v19 = v17 - requestItem->requestDelayLoadTime;
          CL_Streaming_GetRequestItemModelsText(requestItem, dest, 0x400u);
          v20 = DB_GetLogChannel();
          LODWORD(v23) = v19;
          LODWORD(v22) = v18;
          LODWORD(v21) = v17;
          Com_Printf(v20, "CL_Streaming: Models loaded for request (0x%p) %d::%s at time %d (%d total ms, %d real ms).\n", requestItem, (unsigned int)requestType, dest, v21, v22, v23);
        }
        CL_Streaming_AddRequiredImagesForRequest(requestItem, requestType);
        requestItem->requestLoadState = STREAM_REQUEST_STATE_IMAGES_LOADING;
      }
      requestLoadState = requestItem->requestLoadState;
    }
    while ( v7 != requestLoadState );
  }
  requestQueue->modelsLoading += requestItem->requestLoadingModelCount;
  requestQueue->imagesLoading += requestItem->requestLoadingImageCount;
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_ProcessRequestQueue
==============
*/
void CL_Streaming_ProcessRequestQueue(StreamRequestQueue *requestQueue, const StreamSyncClientType requestType)
{
  const char *v4; 
  unsigned int i; 
  StreamRequestItem *v6; 
  unsigned __int8 requestLoadingImageCount; 
  __int64 v8; 
  __int64 v9; 
  CL_Streaming_Images_TouchImageFunctor imageFn; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1773, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v8) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1774, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v8, requestQueue->maxRequestCount) )
      __debugbreak();
  }
  if ( CL_Streaming_IsRequestTypeEnabled(requestType) )
  {
    v4 = j_va("CL_Streaming_ProcessRequestQueue - %d", (unsigned int)requestType);
    Sys_ProfBeginNamedEvent(0xFF808080, v4);
    requestQueue->anyRequestsLoadedThisFrame = 0;
    *(_QWORD *)&requestQueue->modelsLoading = 0i64;
    for ( i = 0; i < requestQueue->requestCount; ++i )
    {
      v6 = &requestQueue->requestItem[i];
      if ( v6->requestLoadState == STREAM_REQUEST_STATE_LOADED )
      {
        requestLoadingImageCount = v6->requestLoadingImageCount;
        if ( requestLoadingImageCount )
        {
          LODWORD(v9) = requestLoadingImageCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1793, ASSERT_TYPE_ASSERT, "( requestItem->requestLoadingImageCount ) == ( 0 )", "%s == %s\n\t%i, %i", "requestItem->requestLoadingImageCount", "0", v9, 0i64) )
            __debugbreak();
        }
        Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_TouchRequiredImagesForRequest");
        imageFn.mipRequested = v6->requestRequiredMip;
        CL_Streaming_Images_ForEachImage_CL_Streaming_Images_TouchImageFunctor_(v6->requestRequiredImages, &imageFn);
        Sys_ProfEndNamedEvent();
      }
      else
      {
        CL_Streaming_ProcessLoadingRequestItem(requestQueue, &requestQueue->requestItem[i], requestType);
      }
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CL_Streaming_ProcessRequestQueues
==============
*/
void CL_Streaming_ProcessRequestQueues()
{
  StreamSyncClientType i; 
  int j; 
  StreamSyncClientType k; 
  StreamRequestQueue *ClientRequestQueue; 
  StreamSyncClientType m; 
  StreamRequestQueue *v5; 
  const dvar_t *v6; 
  char *fmt; 
  __int64 v8; 
  __int64 v9; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_ProcessRequestQueues");
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; ++i )
    CL_Streaming_ProcessRequestQueue(s_worldRequestQueue[i], i);
  for ( j = 0; j < 2; ++j )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)j) )
    {
      for ( k = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)k < STREAM_SYNC_CLIENT_TYPE_COUNT; ++k )
      {
        ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)j, k);
        CL_Streaming_ProcessRequestQueue(ClientRequestQueue, k);
      }
    }
    else
    {
      if ( (unsigned int)j >= 2 )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1898, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      for ( m = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)m < STREAM_SYNC_CLIENT_TYPE_COUNT; ++m )
      {
        v5 = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)j, m);
        CL_Streaming_RemoveAllRequests(v5, m);
      }
    }
  }
  if ( s_clStreamedImagePool.missedAllocations )
  {
    v6 = DCONST_DVARBOOL_cl_streamingErrorOnMissingRequiredImages;
    if ( !DCONST_DVARBOOL_cl_streamingErrorOnMissingRequiredImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streamingErrorOnMissingRequiredImages") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      LODWORD(fmt) = s_clStreamedImagePool.missedAllocations;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144201870, 6433i64, 2520i64, fmt);
    }
    else
    {
      Com_PrintError(14, "CL_Streaming exceeded capacity CL_STREAMING_TOTAL_IMAGE_COUNT (%u) by %u required images.\n", 2520i64, s_clStreamedImagePool.missedAllocations);
    }
  }
  s_clStreamedImagePool.missedAllocations = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
CL_Streaming_ProcessUnloadRequest
==============
*/
void CL_Streaming_ProcessUnloadRequest(StreamRequestItem *requestItem, const StreamSyncClientType requestType)
{
  const dvar_t *v4; 
  ClGameModeApplication *ActiveClientApplication; 
  unsigned int requestAssetCount; 
  ClGameModeApplication *v7; 
  unsigned int i; 
  const char *v9; 
  unsigned int v10; 
  __int64 v11; 
  char outRequestString[1024]; 

  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1404, ASSERT_TYPE_ASSERT, "(requestItem)", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v11) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1405, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v11, 6) )
      __debugbreak();
  }
  v4 = DCONST_DVARBOOL_cl_streaming_devVerbose;
  if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    CL_Streaming_GetRequestItemModelsText(requestItem, outRequestString, 0x400u);
    LODWORD(v11) = Sys_Milliseconds();
    Com_Printf(14, "CL_Streaming: New unload request for request (0x%p) %d::%s at time %d\n", requestItem, (unsigned int)requestType, outRequestString, v11);
  }
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  requestAssetCount = requestItem->requestAssetCount;
  v7 = ActiveClientApplication;
  for ( i = 0; i < requestAssetCount; ++i )
  {
    v9 = CL_Streaming_AssetId_ConvertToString(requestItem->requestAssets[i].assetId);
    v7->UnloadModel(v7, v9);
    requestAssetCount = requestItem->requestAssetCount;
  }
  v10 = 0;
  if ( requestAssetCount )
  {
    do
    {
      ++v10;
      requestItem->requestRequiredImages = CL_Streaming_Images_ClearImagesInternal(requestItem->requestRequiredImages);
      requestItem->requestRequiredMip = NO_MIPS;
    }
    while ( v10 < requestItem->requestAssetCount );
  }
  *(_WORD *)&requestItem->requestLoadingModelCount = 0;
}

/*
==============
CL_Streaming_RefreshAll
==============
*/
void CL_Streaming_RefreshAll()
{
  int v0; 
  __int64 v1; 
  unsigned int i; 
  unsigned int v3; 
  ClStreamingRequestBuffer *v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    for ( i = 0; i < 6; ++i )
    {
      v3 = 0;
      v4 = s_clStreamingRequestBuffers[v1][i];
      do
      {
        if ( (unsigned int)v0 >= 2 )
        {
          LODWORD(v6) = 2;
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 703, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingRequestBuffers ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingRequestBuffers )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v4->dirty = 1;
        ++v3;
        ++v4;
      }
      while ( v3 < 2 );
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 2 );
}

/*
==============
CL_Streaming_RemoveAllRequests
==============
*/
void CL_Streaming_RemoveAllRequests(StreamRequestQueue *requestQueue, StreamSyncClientType requestType)
{
  int LogChannel; 
  unsigned int i; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1488, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( requestQueue->requestCount )
  {
    LogChannel = DB_GetLogChannel();
    Com_Printf(LogChannel, "CL_Streaming: Removing all requests of type %d\n", (unsigned int)requestType);
    for ( i = 0; i < requestQueue->requestCount; ++i )
      CL_Streaming_ProcessUnloadRequest(&requestQueue->requestItem[i], requestType);
    CL_Streaming_ResetRequestQueue(requestQueue);
  }
}

/*
==============
CL_Streaming_RemoveRequest
==============
*/
void CL_Streaming_RemoveRequest(StreamRequestQueue *requestQueue, const unsigned int requestIndex)
{
  __int64 v2; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = requestIndex;
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1470, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v7) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1471, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v7, requestQueue->maxRequestCount) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= requestQueue->requestCount )
  {
    LODWORD(v8) = requestQueue->requestCount;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1472, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = --requestQueue->requestCount;
  if ( (unsigned int)v2 < v4 )
  {
    v5 = v4 - (unsigned int)v2;
    v6 = (unsigned int)(v2 + 1);
    memmove_0(&requestQueue->requestItem[v2], &requestQueue->requestItem[v6], 88 * v5);
    memmove_0(&requestQueue->requestHash[v2], &requestQueue->requestHash[v6], 4 * v5);
  }
}

/*
==============
CL_Streaming_ReplaceRequest
==============
*/
char CL_Streaming_ReplaceRequest(StreamRequestQueue *requestQueue, const unsigned int requestIndex, const ClStreamingRequest *request, const StreamSyncClientType requestType)
{
  __int64 v4; 
  const dvar_t *v8; 
  StreamRequestItem *v9; 
  __int64 v11; 
  __int64 v12; 
  char outRequestString[1024]; 

  v4 = requestIndex;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1553, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1554, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v11) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1555, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v11, 6) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= requestQueue->requestCount )
  {
    LODWORD(v12) = requestQueue->requestCount;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1556, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( requestQueue->requestCount > requestQueue->maxRequestCount )
  {
    LODWORD(v12) = requestQueue->maxRequestCount;
    LODWORD(v11) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1557, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( requestQueue->maxRequestCount )", "requestQueue->requestCount not in [0, requestQueue->maxRequestCount]\n\t%u not in [0, %u]", v11, v12) )
      __debugbreak();
  }
  v8 = DCONST_DVARBOOL_cl_streaming_devNoLoad;
  v9 = &requestQueue->requestItem[v4];
  if ( !DCONST_DVARBOOL_cl_streaming_devNoLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devNoLoad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    CL_Streaming_GetStreamingAssetsText(request->assetIds, request->assetCount, outRequestString, 1024);
    Com_Printf(14, "CL_Streaming: DevNoLoad - Ignoring %i::%s\n", (unsigned int)requestType, outRequestString);
    return 0;
  }
  else
  {
    CL_Streaming_ProcessUnloadRequest(v9, requestType);
    CL_Streaming_InitRequest(requestQueue, v4, request, STREAM_REQUEST_STATE_MODEL_LOADING);
    if ( CL_Streaming_ProcessLoadRequest(v9, requestType) )
    {
      return 1;
    }
    else
    {
      CL_Streaming_GetRequestItemModelsText(v9, outRequestString, 0x400u);
      Com_Printf(14, "CL_Streaming: Failed to submit request (0x%p) %d::%s!\n", v9, (unsigned int)requestType, outRequestString);
      CL_Streaming_RemoveRequest(requestQueue, v4);
      return 0;
    }
  }
}

/*
==============
CL_Streaming_ReportLimits
==============
*/
void CL_Streaming_ReportLimits(void)
{
  int v0; 
  unsigned int (*v1)[6]; 
  StreamSyncClientType i; 
  int v3; 
  const char *TypeName; 
  char *fmt; 
  __int64 v6; 
  __int64 v7; 

  Com_Printf(14, "(-- CL_Streaming Limits begin --)\n");
  v0 = 0;
  v1 = s_clStreamingLimits;
  do
  {
    for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
    {
      if ( (unsigned int)v0 >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3005, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      v3 = *(_DWORD *)v1;
      TypeName = Com_StreamSync_GetTypeName(i);
      LODWORD(fmt) = v3;
      Com_Printf(14, "  [CL %d] '%s': %d\n", (unsigned int)v0, TypeName, fmt);
      v1 = (unsigned int (*)[6])((char *)v1 + 4);
    }
    ++v0;
  }
  while ( v0 < 2 );
  Com_Printf(14, "(-- CL_Streaming Limits end --)\n");
}

/*
==============
CL_Streaming_Reset
==============
*/
void CL_Streaming_Reset(void)
{
  int v0; 
  unsigned int i; 
  bool v2; 
  StreamSyncClientType j; 
  StreamRequestQueue *ClientRequestQueue; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  for ( i = 0; i < 3; ++i )
    CL_Streaming_ResetRequestQueue(s_worldRequestQueue[i]);
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2392, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
    {
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v0, j);
      CL_Streaming_ResetRequestQueue(ClientRequestQueue);
    }
    v2 = (unsigned int)++v0 < 2;
  }
  while ( v0 < 2 );
  CL_Streaming_FreeUnusedResources();
}

/*
==============
CL_Streaming_ResetRequestQueue
==============
*/
void CL_Streaming_ResetRequestQueue(StreamRequestQueue *queue)
{
  unsigned int i; 
  StreamRequestItem *v3; 
  __int64 v4; 

  if ( !queue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1448, ASSERT_TYPE_ASSERT, "(queue)", (const char *)&queryFormat, "queue") )
    __debugbreak();
  if ( queue->requestCount > queue->maxRequestCount )
  {
    LODWORD(v4) = queue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1449, ASSERT_TYPE_ASSERT, "( queue->requestCount ) <= ( queue->maxRequestCount )", "queue->requestCount not in [0, queue->maxRequestCount]\n\t%u not in [0, %u]", v4, queue->maxRequestCount) )
      __debugbreak();
  }
  for ( i = 0; i < queue->requestCount; v3->requestRequiredMip = NO_MIPS )
  {
    v3 = &queue->requestItem[i];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 547, ASSERT_TYPE_ASSERT, "( ( requestItem != nullptr ) )", "( requestItem ) = %p", NULL) )
      __debugbreak();
    ++i;
    v3->requestRequiredImages = CL_Streaming_Images_ClearImagesInternal(v3->requestRequiredImages);
  }
  memset_0(queue->requestItem, 0, 88i64 * queue->maxRequestCount);
  memset_0(queue->requestHash, 0, 4i64 * queue->maxRequestCount);
  *(_QWORD *)&queue->rebuildCount = 0i64;
  queue->anyRequestsLoadedThisFrame = 0;
}

/*
==============
CL_Streaming_SetMaxClientRequestCount
==============
*/
void CL_Streaming_SetMaxClientRequestCount(const LocalClientNum_t localClientNum, const StreamSyncClientType requestType, const unsigned int maxRequestCount)
{
  StreamRequestQueue *ClientRequestQueue; 
  const dvar_t *v7; 
  char *fmt; 

  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3174, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", requestType, 6) )
    __debugbreak();
  ClientRequestQueue = CL_Streaming_GetClientRequestQueue(localClientNum, requestType);
  if ( !ClientRequestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3177, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  if ( ClientRequestQueue->maxRequestCount != maxRequestCount )
  {
    v7 = DCONST_DVARBOOL_cl_streaming_devVerbose;
    if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      LODWORD(fmt) = maxRequestCount;
      Com_Printf(14, "CL_Streaming: New queue size for requestItem type %d. Changing from %d to %d requests\n", (unsigned int)requestType, ClientRequestQueue->maxRequestCount, fmt);
    }
    CL_Streaming_SetMaxRequestCount(ClientRequestQueue, requestType, maxRequestCount);
  }
}

/*
==============
CL_Streaming_SetMaxRequestCount
==============
*/
void CL_Streaming_SetMaxRequestCount(StreamRequestQueue *requestQueue, const StreamSyncClientType requestType, const unsigned int maxRequestCount)
{
  unsigned int i; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int outRequestIndex; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2581, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( requestQueue->maxRequestCount > requestQueue->requestBufferSize )
  {
    LODWORD(v8) = requestQueue->maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2582, ASSERT_TYPE_ASSERT, "( requestQueue->maxRequestCount ) <= ( requestQueue->requestBufferSize )", "requestQueue->maxRequestCount not in [0, requestQueue->requestBufferSize]\n\t%u not in [0, %u]", v8, requestQueue->requestBufferSize) )
      __debugbreak();
  }
  if ( maxRequestCount > requestQueue->requestBufferSize )
  {
    LODWORD(v9) = requestQueue->requestBufferSize;
    LODWORD(v8) = maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2583, ASSERT_TYPE_ASSERT, "( maxRequestCount ) <= ( requestQueue->requestBufferSize )", "maxRequestCount not in [0, requestQueue->requestBufferSize]\n\t%u not in [0, %u]", v8, v9) )
      __debugbreak();
  }
  for ( i = requestQueue->requestCount; i > maxRequestCount; i = requestQueue->requestCount )
  {
    if ( CL_Streaming_FindLRURequest(requestQueue, &outRequestIndex, NULL) )
    {
      v7 = outRequestIndex;
      if ( outRequestIndex >= requestQueue->requestCount )
      {
        LODWORD(v9) = requestQueue->requestCount;
        LODWORD(v8) = outRequestIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2592, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->requestCount )", "requestIndex doesn't index requestQueue->requestCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      CL_Streaming_ProcessUnloadRequest(&requestQueue->requestItem[v7], requestType);
      CL_Streaming_RemoveRequest(requestQueue, v7);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2601, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find a requestItem to unload when reducing the size of the requestItem queue") )
    {
      __debugbreak();
    }
  }
  if ( i > maxRequestCount )
  {
    LODWORD(v9) = maxRequestCount;
    LODWORD(v8) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2605, ASSERT_TYPE_ASSERT, "( requestQueue->requestCount ) <= ( maxRequestCount )", "requestQueue->requestCount not in [0, maxRequestCount]\n\t%u not in [0, %u]", v8, v9) )
      __debugbreak();
  }
  requestQueue->maxRequestCount = maxRequestCount;
}

/*
==============
CL_Streaming_SetMaxWorldRequestCount
==============
*/
void CL_Streaming_SetMaxWorldRequestCount(const StreamSyncWorldType requestType, const unsigned int maxRequestCount)
{
  __int64 v2; 
  StreamRequestQueue *v4; 
  const dvar_t *v5; 
  char *fmt; 
  __int64 v7; 
  __int64 v8; 

  v2 = requestType;
  if ( (unsigned int)requestType >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3147, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", requestType, 6) )
    __debugbreak();
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v8) = 3;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_WORLD_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_WORLD_TYPE_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = s_worldRequestQueue[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 3150, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
    __debugbreak();
  if ( v4->maxRequestCount != maxRequestCount )
  {
    v5 = DCONST_DVARBOOL_cl_streaming_devVerbose;
    if ( !DCONST_DVARBOOL_cl_streaming_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      LODWORD(fmt) = maxRequestCount;
      Com_Printf(14, "CL_Streaming: New queue size for requestItem type %d. Changing from %d to %d requests\n", (unsigned int)v2, v4->maxRequestCount, fmt);
    }
    CL_Streaming_SetMaxRequestCount(v4, (const StreamSyncClientType)v2, maxRequestCount);
  }
}

/*
==============
CL_Streaming_Shutdown
==============
*/
void CL_Streaming_Shutdown(void)
{
  Cmd_RemoveCommand("cl_streaming_devUnloadAll");
  Cmd_RemoveCommand("cl_streaming_devUnloadHeads");
  Cmd_RemoveCommand("cl_streaming_devUnloadBodies");
  Cmd_RemoveCommand("cl_streaming_devUnloadWeapons");
  Cmd_RemoveCommand("cl_streaming_devUnloadViewWeapons");
  Cmd_RemoveCommand("cl_streaming_devUnloadViewArms");
  Cmd_RemoveCommand("cl_streaming_devRefreshAll");
  CL_Streaming_ClearAllBuffers();
  CL_Streaming_UnloadAll();
}

/*
==============
CL_Streaming_StartRequest
==============
*/
char CL_Streaming_StartRequest(StreamRequestQueue *requestQueue, const ClStreamingRequest *request, const StreamSyncClientType requestType)
{
  const dvar_t *v6; 
  __int64 requestCount; 
  unsigned int v9; 
  StreamRequestItem *v10; 
  __int64 v11; 
  __int64 v12; 
  char outRequestString[1024]; 

  if ( !requestQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1513, ASSERT_TYPE_ASSERT, "(requestQueue)", (const char *)&queryFormat, "requestQueue") )
    __debugbreak();
  if ( (unsigned int)requestType >= STREAM_SYNC_CLIENT_TYPE_COUNT )
  {
    LODWORD(v11) = requestType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1514, ASSERT_TYPE_ASSERT, "(unsigned)( requestType ) < (unsigned)( STREAM_SYNC_CLIENT_TYPE_COUNT )", "requestType doesn't index STREAM_SYNC_CLIENT_TYPE_COUNT\n\t%i not in [0, %i)", v11, 6) )
      __debugbreak();
  }
  if ( requestQueue->requestCount >= requestQueue->maxRequestCount )
  {
    LODWORD(v12) = requestQueue->maxRequestCount;
    LODWORD(v11) = requestQueue->requestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1515, ASSERT_TYPE_ASSERT, "(unsigned)( requestQueue->requestCount ) < (unsigned)( requestQueue->maxRequestCount )", "requestQueue->requestCount doesn't index requestQueue->maxRequestCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = DCONST_DVARBOOL_cl_streaming_devNoLoad;
  if ( !DCONST_DVARBOOL_cl_streaming_devNoLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devNoLoad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Com_Printf(14, "CL_Streaming: DevNoLoad - Ignoring %i\n", (unsigned int)requestType);
    return 0;
  }
  else
  {
    requestCount = requestQueue->requestCount;
    v9 = requestQueue->requestCount;
    v10 = &requestQueue->requestItem[requestCount];
    requestQueue->requestCount = requestCount + 1;
    CL_Streaming_InitRequest(requestQueue, v9, request, STREAM_REQUEST_STATE_MODEL_LOADING);
    if ( CL_Streaming_ProcessLoadRequest(v10, requestType) )
    {
      return 1;
    }
    else
    {
      CL_Streaming_GetRequestItemModelsText(v10, outRequestString, 0x400u);
      Com_Printf(14, "CL_Streaming: Failed to submit request (0x%p) %d::%s!\n", v10, (unsigned int)requestType, outRequestString);
      CL_Streaming_RemoveRequest(requestQueue, requestCount);
      return 0;
    }
  }
}

/*
==============
CL_Streaming_UnloadAll
==============
*/
void CL_Streaming_UnloadAll(void)
{
  int v0; 
  StreamSyncClientType i; 
  bool v2; 
  StreamSyncClientType j; 
  StreamRequestQueue *ClientRequestQueue; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; ++i )
    CL_Streaming_RemoveAllRequests(s_worldRequestQueue[i], i);
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 1898, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    for ( j = STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL; (unsigned int)j < STREAM_SYNC_CLIENT_TYPE_COUNT; ++j )
    {
      ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v0, j);
      CL_Streaming_RemoveAllRequests(ClientRequestQueue, j);
    }
    v2 = (unsigned int)++v0 < 2;
  }
  while ( v0 < 2 );
  CL_Streaming_FreeUnusedResources();
}

/*
==============
CL_Streaming_UnloadBodies
==============
*/
void CL_Streaming_UnloadBodies(void)
{
  CL_Streaming_RemoveAllRequests(&s_bodyRequestQueue, STREAM_SYNC_CLIENT_TYPE_BODY);
}

/*
==============
CL_Streaming_UnloadHeads
==============
*/
void CL_Streaming_UnloadHeads(void)
{
  CL_Streaming_RemoveAllRequests(s_worldRequestQueue[0], STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL);
}

/*
==============
CL_Streaming_UnloadViewArms
==============
*/
void CL_Streaming_UnloadViewArms(void)
{
  int v0; 
  StreamRequestQueue **v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  v1 = (StreamRequestQueue **)&s_clientRequestQueue[0][3];
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 398, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    CL_Streaming_RemoveAllRequests(*v1, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL);
    ++v0;
    v1 += 6;
    v2 = (unsigned int)v0 < 2;
  }
  while ( v0 < 2 );
}

/*
==============
CL_Streaming_UnloadViewWeapons
==============
*/
void CL_Streaming_UnloadViewWeapons(void)
{
  int v0; 
  StreamRequestQueue **v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  v1 = (StreamRequestQueue **)&s_clientRequestQueue[0][4];
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 398, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    CL_Streaming_RemoveAllRequests(*v1, STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON);
    ++v0;
    v1 += 6;
    v2 = (unsigned int)v0 < 2;
  }
  while ( v0 < 2 );
}

/*
==============
CL_Streaming_UnloadWeapons
==============
*/
void CL_Streaming_UnloadWeapons(void)
{
  CL_Streaming_RemoveAllRequests(&s_worldWeaponRequestQueue, STREAM_SYNC_CLIENT_TYPE_WEAPON);
}

/*
==============
CL_Streaming_Update
==============
*/
void CL_Streaming_Update(void)
{
  const dvar_t *v0; 
  int maxClients; 
  int activeCount; 
  int v3; 
  unsigned int (*v4)[6]; 
  StreamSyncClientType i; 
  int j; 
  StreamSyncClientType k; 
  StreamRequestQueue *ClientRequestQueue; 
  unsigned int Limit; 
  int v10; 
  unsigned int *v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  StreamSyncClientType v15; 
  const char *v16; 
  StreamRequestQueue *v17; 
  ClStreamingBufferNum m; 
  ClStreamingRequestBuffer *RequestBuffer; 
  unsigned int v20; 
  const dvar_t *v21; 
  int n; 
  __int64 v23; 
  StreamSyncClientType v24; 
  StreamRequestQueue *v25; 
  int requestCount; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int dirtyBufferMask[2]; 

  if ( !Com_Frontend_LoadFastfile_IsInUse() && (Com_FrontEnd_IsInFrontEnd() || CL_AnyLocalClientStateActive()) && !Com_GameStart_IsActive() && ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_Update");
    v0 = DCONST_DVARBOOL_com_useDynamicStreamingLimits;
    if ( !DCONST_DVARBOOL_com_useDynamicStreamingLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_useDynamicStreamingLimits") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      maxClients = cls.maxClients;
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      activeCount = cls.m_localClientsActive.activeCount;
      if ( !maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2987, ASSERT_TYPE_ASSERT, "(maxClients)", (const char *)&queryFormat, "maxClients") )
        __debugbreak();
      if ( !activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2988, ASSERT_TYPE_ASSERT, "(localClientCount)", (const char *)&queryFormat, "localClientCount") )
        __debugbreak();
      v3 = 0;
      v4 = s_clStreamingLimits;
      do
      {
        for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
        {
          if ( (unsigned int)v3 >= 2 )
          {
            LODWORD(v31) = 2;
            LODWORD(v30) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2970, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_clStreamingLimits ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_clStreamingLimits )\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          *(_DWORD *)v4 = Com_StreamSync_GetMaxEntryCount(i, maxClients, activeCount);
          v4 = (unsigned int (*)[6])((char *)v4 + 4);
        }
        ++v3;
      }
      while ( v3 < 2 );
      for ( j = 0; j < 2; ++j )
      {
        for ( k = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)k < STREAM_SYNC_CLIENT_TYPE_COUNT; ++k )
        {
          ClientRequestQueue = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)j, k);
          Limit = CL_Streaming_GetLimit((const LocalClientNum_t)j, k);
          CL_Streaming_SetMaxRequestCount(ClientRequestQueue, k, Limit);
        }
      }
    }
    CL_Streaming_CheckDirtyBuffers((unsigned int (*)[2])dirtyBufferMask);
    Sys_ProfBeginNamedEvent(0xFF808080, "CL_Streaming_BuildUpdatedRequestQueues");
    v10 = 0;
    v11 = dirtyBufferMask;
    v12 = 1;
    do
    {
      if ( !v12 )
      {
        LODWORD(v31) = 2;
        LODWORD(v30) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2696, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( dirtyBufferMask ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( dirtyBufferMask )\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      v13 = *v11;
      if ( *v11 )
      {
        do
        {
          v14 = v13;
          v15 = __lzcnt(v13);
          v16 = j_va("CL_Streaming_BuildUpdatedRequestQueuesForType - %d", (unsigned int)v15);
          Sys_ProfBeginNamedEvent(0xFF808080, v16);
          v17 = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)v10, v15);
          ++v17->rebuildCount;
          for ( m = CL_STREAMING_BUFFER_INPUT_0; (unsigned int)m < CL_STREAMING_BUFFER_COUNT; ++m )
          {
            RequestBuffer = CL_Streaming_GetRequestBuffer((const LocalClientNum_t)v10, v15, m);
            CL_Streaming_AddRequestsToQueue(v17, RequestBuffer->requests, RequestBuffer->requestCount, v15);
            RequestBuffer->dirty = 0;
          }
          Sys_ProfEndNamedEvent();
          v20 = 0x80000000 >> (v15 & 0x1F);
          v13 ^= v20;
        }
        while ( v20 != v14 );
      }
      ++v10;
      ++v11;
      v12 = (unsigned int)v10 < 2;
    }
    while ( v10 < 2 );
    Sys_ProfEndNamedEvent();
    CL_Streaming_ValidateBuffers();
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) )
    {
      CL_Streaming_LoadDevCustomizationAssets(STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL, CUSTOMIZATION_TYPE_HEAD);
      CL_Streaming_LoadDevCustomizationAssets(STREAM_SYNC_CLIENT_TYPE_BODY, CUSTOMIZATION_TYPE_BODY);
      CL_Streaming_LoadDevCustomizationAssets(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, CUSTOMIZATION_TYPE_VIEWHANDS);
      CL_Streaming_LoadDevWeaponAssets(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON);
      CL_Streaming_LoadDevWeaponAssets(STREAM_SYNC_CLIENT_TYPE_WEAPON);
    }
    CL_Streaming_ProcessRequestQueues();
    v21 = DCONST_DVARBOOL_cl_streaming_devInjectChaos;
    if ( !DCONST_DVARBOOL_cl_streaming_devInjectChaos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_devInjectChaos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      for ( n = 0; n < 2; ++n )
      {
        if ( CL_IsLocalClientActive((LocalClientNum_t)n) )
        {
          v23 = 5i64;
          do
          {
            v24 = BG_irand(0, 6, &pHoldrand);
            v25 = CL_Streaming_GetClientRequestQueue((const LocalClientNum_t)n, v24);
            if ( !v25 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2794, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2756, ASSERT_TYPE_ASSERT, "( ( requestQueue != nullptr ) )", "( requestQueue ) = %p", NULL) )
                __debugbreak();
            }
            requestCount = v25->requestCount;
            if ( requestCount )
            {
              v27 = BG_irand(0, requestCount, &pHoldrand);
              v28 = v27;
              if ( v27 >= v25->maxRequestCount )
              {
                LODWORD(v31) = v25->maxRequestCount;
                LODWORD(v30) = v27;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2765, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( requestQueue->maxRequestCount )", "requestIndex doesn't index requestQueue->maxRequestCount\n\t%i not in [0, %i)", v30, v31) )
                  __debugbreak();
              }
              v29 = (__int64)&v25->requestItem[v28];
              if ( *(_DWORD *)(v29 + 64) == 3 )
              {
                CL_Streaming_ProcessUnloadRequest((StreamRequestItem *)v29, v24);
                CL_Streaming_RemoveRequest(v25, v28);
              }
            }
            --v23;
          }
          while ( v23 );
        }
      }
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CL_Streaming_ValidateBuffers
==============
*/
char CL_Streaming_ValidateBuffers()
{
  int v0; 
  StreamSyncClientType i; 
  const dvar_t *v2; 
  bool v3; 
  ClStreamingRequestBuffer *RequestBuffer; 
  ClStreamingBufferNum j; 
  ClStreamingRequestBuffer *v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  int v11; 

  v0 = 0;
  v11 = 0;
  do
  {
    for ( i = STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL; (unsigned int)i < STREAM_SYNC_CLIENT_TYPE_COUNT; ++i )
    {
      switch ( i )
      {
        case STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL:
          v2 = DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_headUpdatesEnabled )
            goto LABEL_20;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_headUpdatesEnabled");
LABEL_18:
          if ( v3 )
            __debugbreak();
LABEL_20:
          Dvar_CheckFrontendServerThread(v2);
          LOBYTE(RequestBuffer) = v2->current.enabled;
          if ( !(_BYTE)RequestBuffer )
            continue;
          break;
        case STREAM_SYNC_CLIENT_TYPE_BODY:
          v2 = DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_bodyUpdatesEnabled )
            goto LABEL_20;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_bodyUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_WEAPON:
          v2 = DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_weaponUpdatesEnabled )
            goto LABEL_20;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_weaponUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL:
          v2 = DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_viewArmsUpdatesEnabled )
            goto LABEL_20;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_viewArmsUpdatesEnabled");
          goto LABEL_18;
        case STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON:
          v2 = DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled;
          if ( DCONST_DVARBOOL_cl_streaming_viewWeaponUpdatesEnabled )
            goto LABEL_20;
          v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_viewWeaponUpdatesEnabled");
          goto LABEL_18;
      }
      for ( j = CL_STREAMING_BUFFER_INPUT_0; (unsigned int)j < CL_STREAMING_BUFFER_COUNT; ++j )
      {
        RequestBuffer = CL_Streaming_GetRequestBuffer((const LocalClientNum_t)v0, i, j);
        v6 = RequestBuffer;
        if ( RequestBuffer->dirty )
        {
          LOBYTE(RequestBuffer) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2733, ASSERT_TYPE_ASSERT, "(!buffer.dirty)", (const char *)&queryFormat, "!buffer.dirty");
          if ( (_BYTE)RequestBuffer )
            __debugbreak();
        }
        v7 = 0;
        if ( v6->requestCount )
        {
          do
          {
            LOBYTE(RequestBuffer) = v7;
            v8 = 0;
            v9 = (__int64)&v6->requests[v7];
            if ( *(_DWORD *)(v9 + 4) )
            {
              do
              {
                RequestBuffer = (ClStreamingRequestBuffer *)CL_Streaming_AssetId_ConvertToString(*(_DWORD *)(v9 + 4i64 * v8 + 8));
                if ( !RequestBuffer )
                {
                  LOBYTE(RequestBuffer) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_streaming.cpp", 2742, ASSERT_TYPE_ASSERT, "( ( assetString != nullptr ) )", "( assetString ) = %p", NULL);
                  if ( (_BYTE)RequestBuffer )
                    __debugbreak();
                }
                ++v8;
              }
              while ( v8 < *(_DWORD *)(v9 + 4) );
            }
            ++v7;
          }
          while ( v7 < v6->requestCount );
          v0 = v11;
        }
      }
    }
    v11 = ++v0;
  }
  while ( v0 < 2 );
  return (char)RequestBuffer;
}

