/*
==============
BG_AssetStreaming_RemoveRequestsFromSource
==============
*/

void __fastcall BG_AssetStreaming_RemoveRequestsFromSource(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const AssetStreamingRequestSource source)
{
  ?BG_AssetStreaming_RemoveRequestsFromSource@@YAXPEAUAssetStreamingRequestItem@@IW4AssetStreamingRequestSource@@@Z(requestList, requestListSize, source);
}

/*
==============
BG_AssetStreaming_AddWeaponAssetRequest
==============
*/

bool __fastcall BG_AssetStreaming_AddWeaponAssetRequest(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const Weapon *weapon, const AssetStreamingRequestSource source, const unsigned int frame)
{
  return ?BG_AssetStreaming_AddWeaponAssetRequest@@YA_NPEAUAssetStreamingRequestItem@@IAEBUWeapon@@W4AssetStreamingRequestSource@@I@Z(requestList, requestListSize, weapon, source, frame);
}

/*
==============
BG_AssetStreaming_AddAssetRequest
==============
*/

bool __fastcall BG_AssetStreaming_AddAssetRequest(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const unsigned int assetIndex, const AssetStreamingRequestSource source, const unsigned int frame)
{
  return ?BG_AssetStreaming_AddAssetRequest@@YA_NPEAUAssetStreamingRequestItem@@IIW4AssetStreamingRequestSource@@I@Z(requestList, requestListSize, assetIndex, source, frame);
}

/*
==============
BG_AssetStreaming_GetRequestSource
==============
*/

AssetStreamingRequestSource __fastcall BG_AssetStreaming_GetRequestSource(const AssetStreamingRequestItem *requestItem)
{
  return ?BG_AssetStreaming_GetRequestSource@@YA?AW4AssetStreamingRequestSource@@PEBUAssetStreamingRequestItem@@@Z(requestItem);
}

/*
==============
BG_AssetStreaming_AddAssetRequest
==============
*/
bool BG_AssetStreaming_AddAssetRequest(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const unsigned int assetIndex, const AssetStreamingRequestSource source, const unsigned int frame)
{
  if ( assetIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 138, ASSERT_TYPE_ASSERT, "( assetIndex != ASSET_STREAMING_INDEX_WEAPON )", (const char *)&queryFormat, "assetIndex != ASSET_STREAMING_INDEX_WEAPON") )
    __debugbreak();
  return BG_AssetStreaming_AddAssetRequestInternal(requestList, requestListSize, assetIndex, NULL, source, frame);
}

/*
==============
BG_AssetStreaming_AddAssetRequestInternal
==============
*/
char BG_AssetStreaming_AddAssetRequestInternal(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const unsigned int assetIndex, const Weapon *weapon, const AssetStreamingRequestSource source, const int frame)
{
  const Weapon *v7; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int *p_sourceMask; 
  int v16; 
  int v17; 
  bool v18; 
  unsigned int *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  AssetStreamingRequestItem *v25; 
  __int64 v27; 
  __int64 v28; 
  AssetStreamingRequestSource sourcea; 

  v7 = weapon;
  if ( !requestList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 51, ASSERT_TYPE_ASSERT, "( requestList )", (const char *)&queryFormat, "requestList") )
    __debugbreak();
  if ( source )
  {
    v9 = 1 << (source - 1);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 52, ASSERT_TYPE_ASSERT, "( source != ASSET_STREAMING_REQUEST_NONE )", (const char *)&queryFormat, "source != ASSET_STREAMING_REQUEST_NONE") )
      __debugbreak();
    v9 = 0;
  }
  v10 = 0x7FFFFFFF;
  v11 = 0;
  v12 = 0x7FFFFFFF;
  v13 = requestListSize;
  sourcea = 0x7FFFFFFF;
  v14 = requestListSize;
  if ( requestListSize )
  {
    p_sourceMask = &requestList->sourceMask;
    while ( 1 )
    {
      v16 = *(p_sourceMask - 1);
      if ( assetIndex == v16 )
      {
        if ( v16 != -1 )
        {
          if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 18, ASSERT_TYPE_ASSERT, "(!weapon)", (const char *)&queryFormat, "!weapon") )
            __debugbreak();
          v19 = p_sourceMask;
LABEL_51:
          *p_sourceMask = v9 | *v19;
          p_sourceMask[1] = frame;
          return 1;
        }
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 13, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
          __debugbreak();
        v17 = memcmp_0(p_sourceMask + 2, v7, 0x3Cui64);
        v12 = sourcea;
        v18 = v17 == 0;
      }
      else
      {
        v18 = 0;
      }
      v19 = p_sourceMask;
      if ( v18 )
        goto LABEL_51;
      v20 = *p_sourceMask;
      if ( !*p_sourceMask )
        break;
      if ( v20 < v9 )
      {
        v23 = v11;
        v24 = *p_sourceMask;
        if ( v20 >= v10 )
          v23 = v14;
        if ( v20 >= v10 )
          v24 = v10;
        v14 = v23;
        if ( v23 >= requestListSize )
        {
          LODWORD(v28) = requestListSize;
          LODWORD(v27) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( priorityRequestIndex ) < (unsigned)( requestListSize )", "priorityRequestIndex doesn't index requestListSize\n\t%i not in [0, %i)", v27, v28) )
            __debugbreak();
        }
        v12 = sourcea;
        v10 = v24;
        goto LABEL_37;
      }
LABEL_38:
      ++v11;
      p_sourceMask += 18;
      if ( v11 >= requestListSize )
      {
        if ( v13 != requestListSize )
        {
          if ( v13 >= requestListSize )
          {
            LODWORD(v28) = requestListSize;
            LODWORD(v27) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( availableRequestIndex ) < (unsigned)( requestListSize )", "availableRequestIndex doesn't index requestListSize\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          v25 = &requestList[v13];
          if ( v25->sourceMask )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 110, ASSERT_TYPE_ASSERT, "( requestItem->sourceMask == ASSET_STREAMING_REQUEST_NONE )", (const char *)&queryFormat, "requestItem->sourceMask == ASSET_STREAMING_REQUEST_NONE") )
              __debugbreak();
          }
LABEL_46:
          BG_AssetStreaming_AssignItem(v25, assetIndex, v7, v9, frame);
          return 1;
        }
        if ( v14 != requestListSize )
        {
          if ( v14 >= requestListSize )
          {
            LODWORD(v28) = requestListSize;
            LODWORD(v27) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( priorityRequestIndex ) < (unsigned)( requestListSize )", "priorityRequestIndex doesn't index requestListSize\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          v25 = &requestList[v14];
          if ( !v25->sourceMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 122, ASSERT_TYPE_ASSERT, "( requestItem->sourceMask != ASSET_STREAMING_REQUEST_NONE )", (const char *)&queryFormat, "requestItem->sourceMask != ASSET_STREAMING_REQUEST_NONE") )
            __debugbreak();
          goto LABEL_46;
        }
        return 0;
      }
    }
    v21 = p_sourceMask[1];
    v22 = v11;
    if ( v21 >= v12 )
      v22 = v13;
    if ( v21 >= v12 )
      v21 = v12;
    v13 = v22;
    if ( v22 >= requestListSize )
    {
      LODWORD(v28) = requestListSize;
      LODWORD(v27) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( availableRequestIndex ) < (unsigned)( requestListSize )", "availableRequestIndex doesn't index requestListSize\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    v12 = v21;
    v14 = v11;
    sourcea = v21;
    v10 = 0;
LABEL_37:
    v7 = weapon;
    goto LABEL_38;
  }
  return 0;
}

/*
==============
BG_AssetStreaming_AddWeaponAssetRequest
==============
*/
char BG_AssetStreaming_AddWeaponAssetRequest(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const Weapon *weapon, const AssetStreamingRequestSource source, const unsigned int frame)
{
  return BG_AssetStreaming_AddAssetRequestInternal(requestList, requestListSize, 0xFFFFFFFF, weapon, source, frame);
}

/*
==============
BG_AssetStreaming_AssignItem
==============
*/
void BG_AssetStreaming_AssignItem(AssetStreamingRequestItem *outItem, const unsigned int assetIndex, const Weapon *weapon, const unsigned int sourceMask, const int frame)
{
  outItem->assetIndex = assetIndex;
  _RDI = weapon;
  _RBX = outItem;
  if ( weapon )
  {
    if ( assetIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 31, ASSERT_TYPE_ASSERT, "(assetIndex == ASSET_STREAMING_INDEX_WEAPON)", (const char *)&queryFormat, "assetIndex == ASSET_STREAMING_INDEX_WEAPON") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+0Ch], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+2Ch], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+3Ch], xmm0
    }
    *(_DWORD *)&_RBX->weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  }
  else if ( assetIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 36, ASSERT_TYPE_ASSERT, "(assetIndex != ASSET_STREAMING_INDEX_WEAPON)", (const char *)&queryFormat, "assetIndex != ASSET_STREAMING_INDEX_WEAPON") )
  {
    __debugbreak();
  }
  _RBX->sourceMask = sourceMask;
  _RBX->frame = frame;
}

/*
==============
BG_AssetStreaming_GetRequestSource
==============
*/
AssetStreamingRequestSource BG_AssetStreaming_GetRequestSource(const AssetStreamingRequestItem *requestItem)
{
  if ( !requestItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 172, ASSERT_TYPE_ASSERT, "( requestItem )", (const char *)&queryFormat, "requestItem") )
    __debugbreak();
  return Com_Streaming_GetRequestSourceFromMask(requestItem->sourceMask);
}

/*
==============
BG_AssetStreaming_RemoveRequestsFromSource
==============
*/
void BG_AssetStreaming_RemoveRequestsFromSource(AssetStreamingRequestItem *requestList, const unsigned int requestListSize, const AssetStreamingRequestSource source)
{
  __int64 v3; 
  int v6; 
  int v7; 
  unsigned int *p_sourceMask; 
  __int64 v9; 

  v3 = requestListSize;
  if ( !requestList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 154, ASSERT_TYPE_ASSERT, "( requestList )", (const char *)&queryFormat, "requestList") )
    __debugbreak();
  if ( source )
  {
    v6 = 1 << (source - 1);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_asset_streaming.cpp", 155, ASSERT_TYPE_ASSERT, "( source != ASSET_STREAMING_REQUEST_NONE )", (const char *)&queryFormat, "source != ASSET_STREAMING_REQUEST_NONE") )
      __debugbreak();
    v6 = 0;
  }
  if ( (_DWORD)v3 )
  {
    v7 = ~v6;
    p_sourceMask = &requestList->sourceMask;
    v9 = v3;
    do
    {
      *p_sourceMask &= v7;
      p_sourceMask += 18;
      --v9;
    }
    while ( v9 );
  }
}

