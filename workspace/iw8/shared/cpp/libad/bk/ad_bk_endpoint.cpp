/*
==============
AD_EndpointIsOpenPending
==============
*/

bool __fastcall AD_EndpointIsOpenPending(const AD_Endpoint *const endpoint)
{
  return ?AD_EndpointIsOpenPending@@YA_NQEBUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointIsActive
==============
*/

bool __fastcall AD_EndpointIsActive(const AD_Endpoint *const endpoint)
{
  return ?AD_EndpointIsActive@@YA_NQEBUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointInit
==============
*/

void __fastcall AD_EndpointInit(AD_Endpoint *const endpoint, AD_Endpoint_Platform *const platformData)
{
  ?AD_EndpointInit@@YAXQEAUAD_Endpoint@@QEAUAD_Endpoint_Platform@@@Z(endpoint, platformData);
}

/*
==============
AD_EndpointIsClosePending
==============
*/

bool __fastcall AD_EndpointIsClosePending(const AD_Endpoint *const endpoint)
{
  return ?AD_EndpointIsClosePending@@YA_NQEBUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointDestroy
==============
*/

void __fastcall AD_EndpointDestroy(AD_Endpoint *const endpoint)
{
  ?AD_EndpointDestroy@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointIsForUser
==============
*/

bool __fastcall AD_EndpointIsForUser(const AD_Endpoint *const endpoint)
{
  return ?AD_EndpointIsForUser@@YA_NQEBUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointIsBoundToUser
==============
*/

bool __fastcall AD_EndpointIsBoundToUser(const AD_Endpoint *const endpoint, const AD_UserInfo *const userInfo)
{
  return ?AD_EndpointIsBoundToUser@@YA_NQEBUAD_Endpoint@@QEBUAD_UserInfo@@@Z(endpoint, userInfo);
}

/*
==============
AD_EndpointScheduleReOpen
==============
*/

void __fastcall AD_EndpointScheduleReOpen(AD_Endpoint *const endpoint)
{
  ?AD_EndpointScheduleReOpen@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointGetBuffer
==============
*/

float *__fastcall AD_EndpointGetBuffer(AD_Endpoint *const endpoint)
{
  return ?AD_EndpointGetBuffer@@YAPEAMQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointScheduleOpen
==============
*/

void __fastcall AD_EndpointScheduleOpen(AD_Endpoint *const endpoint, const AD_UserInfo *const userInfo)
{
  ?AD_EndpointScheduleOpen@@YAXQEAUAD_Endpoint@@QEBUAD_UserInfo@@@Z(endpoint, userInfo);
}

/*
==============
AD_EndpointIsScheduledForReOpen
==============
*/

bool __fastcall AD_EndpointIsScheduledForReOpen(AD_Endpoint *const endpoint)
{
  return ?AD_EndpointIsScheduledForReOpen@@YA_NQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointProcessPendingActions
==============
*/

void __fastcall AD_EndpointProcessPendingActions(AD_Endpoint *const endpoint)
{
  ?AD_EndpointProcessPendingActions@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointClose
==============
*/

void __fastcall AD_EndpointClose(AD_Endpoint *const endpoint)
{
  ?AD_EndpointClose@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointConfigure
==============
*/

void __fastcall AD_EndpointConfigure(AD_Endpoint *const endpoint, const AD_EndpointConfig *const config)
{
  ?AD_EndpointConfigure@@YAXQEAUAD_Endpoint@@QEBUAD_EndpointConfig@@@Z(endpoint, config);
}

/*
==============
AD_EndpointScheduleClose
==============
*/

void __fastcall AD_EndpointScheduleClose(AD_Endpoint *const endpoint)
{
  ?AD_EndpointScheduleClose@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointClose
==============
*/
void AD_EndpointClose(AD_Endpoint *const endpoint)
{
  _RBX = endpoint;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 57, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  AD_EndpointClose_Platform(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
    vmovups xmmword ptr [rbx+28h], xmm0
  }
  _RBX->active = 0;
  _RBX->pendingAction = None;
}

/*
==============
AD_EndpointConfigure
==============
*/
void AD_EndpointConfigure(AD_Endpoint *const endpoint, const AD_EndpointConfig *const config)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 31, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  endpoint->flow = config->flow;
  endpoint->role = config->role;
  AD_EndpointConfigure_Platform(endpoint, config);
}

/*
==============
AD_EndpointDestroy
==============
*/
void AD_EndpointDestroy(AD_Endpoint *const endpoint)
{
  _RBX = endpoint;
  if ( !endpoint )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 22, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 57, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
      __debugbreak();
  }
  AD_EndpointClose_Platform(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
    vmovups xmmword ptr [rbx+28h], xmm0
  }
  _RBX->active = 0;
  _RBX->pendingAction = None;
  AD_EndpointDestroy_Platform(_RBX);
}

/*
==============
AD_EndpointGetBuffer
==============
*/
float *AD_EndpointGetBuffer(AD_Endpoint *const endpoint)
{
  if ( !endpoint )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 197, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 103, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
      __debugbreak();
  }
  if ( !endpoint->active && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 198, ASSERT_TYPE_ASSERT, "AD_EndpointIsActive( endpoint )", "AD_EndpointIsActive( endpoint )") )
    __debugbreak();
  return AD_EndpointGetBuffer_Platform(endpoint);
}

/*
==============
AD_EndpointInit
==============
*/
void AD_EndpointInit(AD_Endpoint *const endpoint, AD_Endpoint_Platform *const platformData)
{
  _RBX = endpoint;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 9, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( !platformData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 10, ASSERT_TYPE_ASSERT, "platformData != nullptr", "platformData != nullptr") )
    __debugbreak();
  _RBX->active = 0;
  _RBX->pendingAction = None;
  _RBX->flaggedForReOpen = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
    vmovups xmmword ptr [rbx+28h], xmm0
  }
  _RBX->platformData = platformData;
}

/*
==============
AD_EndpointIsActive
==============
*/
__int64 AD_EndpointIsActive(const AD_Endpoint *const endpoint)
{
  if ( endpoint )
    return endpoint->active;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 103, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
AD_EndpointIsBoundToUser
==============
*/
bool AD_EndpointIsBoundToUser(const AD_Endpoint *const endpoint, const AD_UserInfo *const userInfo)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 119, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( !userInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 120, ASSERT_TYPE_ASSERT, "userInfo != nullptr", "userInfo != nullptr") )
    __debugbreak();
  return endpoint->currentUserInfo.userId == userInfo->userId && endpoint->currentUserInfo.platformId == userInfo->platformId;
}

/*
==============
AD_EndpointIsClosePending
==============
*/
bool AD_EndpointIsClosePending(const AD_Endpoint *const endpoint)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 95, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  return endpoint->pendingAction == 2 || endpoint->pendingAction == 3;
}

/*
==============
AD_EndpointIsForUser
==============
*/
bool AD_EndpointIsForUser(const AD_Endpoint *const endpoint)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 111, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  return endpoint->role == Communications;
}

/*
==============
AD_EndpointIsOpenPending
==============
*/
bool AD_EndpointIsOpenPending(const AD_Endpoint *const endpoint)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 87, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  return endpoint->pendingAction == 1;
}

/*
==============
AD_EndpointIsScheduledForReOpen
==============
*/
__int64 AD_EndpointIsScheduledForReOpen(AD_Endpoint *const endpoint)
{
  if ( endpoint )
    return endpoint->flaggedForReOpen;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 154, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  return MEMORY[0x10];
}

/*
==============
AD_EndpointProcessPendingActions
==============
*/
void AD_EndpointProcessPendingActions(AD_Endpoint *const endpoint)
{
  bool v3; 
  bool v6; 

  _RBX = endpoint;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 178, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  switch ( _RBX->pendingAction )
  {
    case 1:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+18h]
        vmovups xmmword ptr [rbx+28h], xmm0
      }
      v3 = AD_EndpointOpen_Platform(_RBX);
      _RBX->active = v3;
      if ( !v3 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
          vmovups xmmword ptr [rbx+28h], xmm0
        }
      }
      _RBX->pendingAction = None;
      break;
    case 2:
      AD_EndpointClose(_RBX);
      break;
    case 3:
      AD_EndpointClose_Platform(_RBX);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+18h]
        vmovups xmmword ptr [rbx+28h], xmm0
      }
      v6 = AD_EndpointOpen_Platform(_RBX);
      _RBX->active = v6;
      if ( !v6 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
          vmovups xmmword ptr [rbx+28h], xmm0
        }
      }
      _RBX->pendingAction = None;
      break;
  }
}

/*
==============
AD_EndpointScheduleClose
==============
*/
void AD_EndpointScheduleClose(AD_Endpoint *const endpoint)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 162, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( endpoint->pendingAction )
  {
    do
      AD_Sleep(1u);
    while ( endpoint->pendingAction );
    endpoint->pendingAction = 2;
  }
  else
  {
    endpoint->pendingAction = 2;
  }
}

/*
==============
AD_EndpointScheduleOpen
==============
*/
void AD_EndpointScheduleOpen(AD_Endpoint *const endpoint, const AD_UserInfo *const userInfo)
{
  _RDI = userInfo;
  _RBX = endpoint;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 128, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 129, ASSERT_TYPE_ASSERT, "userInfo != nullptr", "userInfo != nullptr") )
    __debugbreak();
  while ( _RBX->pendingAction )
    AD_Sleep(1u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbx+18h], xmm0
  }
  _RBX->pendingAction = 1;
}

/*
==============
AD_EndpointScheduleReOpen
==============
*/
void AD_EndpointScheduleReOpen(AD_Endpoint *const endpoint)
{
  if ( endpoint )
  {
    endpoint->flaggedForReOpen = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.cpp", 146, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
      __debugbreak();
    MEMORY[0x10] = 1;
  }
}

