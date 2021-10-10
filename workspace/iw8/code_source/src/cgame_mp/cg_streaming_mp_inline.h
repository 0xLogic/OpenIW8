/*
==============
CG_StreamingMP_RequestList_Alloc<Weapon>
==============
*/

void __fastcall CG_StreamingMP_RequestList_Alloc<Weapon>(HunkUser *hunkUser, CgStreamRequestList<Weapon> *requestList, const unsigned int maxRequests)
{
  ??$CG_StreamingMP_RequestList_Alloc@UWeapon@@@@YAXPEAUHunkUser@@AEAU?$CgStreamRequestList@UWeapon@@@@I@Z(hunkUser, requestList, maxRequests);
}

/*
==============
CG_StreamingMP_RequestList_Free<Weapon>
==============
*/

void __fastcall CG_StreamingMP_RequestList_Free<Weapon>(CgStreamRequestList<Weapon> *requestList)
{
  ??$CG_StreamingMP_RequestList_Free@UWeapon@@@@YAXAEAU?$CgStreamRequestList@UWeapon@@@@@Z(requestList);
}

/*
==============
CG_StreamingMP_RequestList_Validate<Weapon>
==============
*/

void __fastcall CG_StreamingMP_RequestList_Validate<Weapon>(const CgStreamRequestList<Weapon> *requestList)
{
  ??$CG_StreamingMP_RequestList_Validate@UWeapon@@@@YAXAEBU?$CgStreamRequestList@UWeapon@@@@@Z(requestList);
}

/*
==============
CG_StreamingMP_RequestList_Clear<Weapon>
==============
*/

void __fastcall CG_StreamingMP_RequestList_Clear<Weapon>(CgStreamRequestList<Weapon> *requestList)
{
  ??$CG_StreamingMP_RequestList_Clear@UWeapon@@@@YAXAEAU?$CgStreamRequestList@UWeapon@@@@@Z(requestList);
}

/*
==============
CG_StreamingMP_RequestList_Alloc<Weapon>
==============
*/
void CG_StreamingMP_RequestList_Alloc<Weapon>(HunkUser *hunkUser, CgStreamRequestList<Weapon> *requestList, const unsigned int maxRequests)
{
  AssetStreamingPriority *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 143, ASSERT_TYPE_ASSERT, "( ( hunkUser != nullptr ) )", "( hunkUser ) = %p", NULL) )
    __debugbreak();
  if ( requestList->cgRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 144, ASSERT_TYPE_ASSERT, "( ( requestList.cgRequests == nullptr ) )", "( requestList.cgRequests ) = %p", requestList->cgRequests) )
    __debugbreak();
  if ( requestList->clRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 145, ASSERT_TYPE_ASSERT, "( ( requestList.clRequests == nullptr ) )", "( requestList.clRequests ) = %p", requestList->clRequests) )
    __debugbreak();
  if ( requestList->priorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 146, ASSERT_TYPE_ASSERT, "( ( requestList.priorities == nullptr ) )", "( requestList.priorities ) = %p", requestList->priorities) )
    __debugbreak();
  if ( maxRequests > 0x40 )
  {
    LODWORD(v7) = maxRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 147, ASSERT_TYPE_ASSERT, "( maxRequests ) <= ( MAX_CG_STREAMING_REQUESTS )", "maxRequests not in [0, MAX_CG_STREAMING_REQUESTS]\n\t%u not in [0, %u]", v7, 64) )
      __debugbreak();
  }
  if ( !(60 * maxRequests) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 150, ASSERT_TYPE_ASSERT, "( clRequestListAllocationSize ) != ( 0 )", "%s != %s\n\t%i, %i", "clRequestListAllocationSize", "0", 0, 0i64) )
      __debugbreak();
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 153, ASSERT_TYPE_ASSERT, "( cgRequestListAllocationSize ) != ( 0 )", "%s != %s\n\t%i, %i", "cgRequestListAllocationSize", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( !(4 * maxRequests) )
  {
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 156, ASSERT_TYPE_ASSERT, "( priorityListAllocationSize ) != ( 0 )", "%s != %s\n\t%i, %i", "priorityListAllocationSize", "0", v8, 0i64) )
      __debugbreak();
  }
  requestList->clRequests = (ClStreamingRequest *)Mem_HunkUser_AllocInternal(hunkUser, 60 * maxRequests, 8ui64, "CG_StreamingMP_RequestList_Alloc");
  requestList->cgRequests = (Weapon *)Mem_HunkUser_AllocInternal(hunkUser, 60 * maxRequests, 4ui64, "CG_StreamingMP_RequestList_Alloc");
  v6 = (AssetStreamingPriority *)Mem_HunkUser_AllocInternal(hunkUser, 4 * maxRequests, 4ui64, "CG_StreamingMP_RequestList_Alloc");
  requestList->maxRequestCount = maxRequests;
  requestList->priorities = v6;
  requestList->requestCount = 0;
}

/*
==============
CG_StreamingMP_RequestList_Clear<Weapon>
==============
*/
void CG_StreamingMP_RequestList_Clear<Weapon>(CgStreamRequestList<Weapon> *requestList)
{
  CG_StreamingMP_RequestList_Validate<Weapon>(requestList);
  DebugWipe(requestList->cgRequests, 60i64 * requestList->maxRequestCount);
  DebugWipe(requestList->clRequests, 60i64 * requestList->maxRequestCount);
  DebugWipe(requestList->priorities, 4i64 * requestList->maxRequestCount);
  requestList->requestCount = 0;
}

/*
==============
CG_StreamingMP_RequestList_Free<Weapon>
==============
*/
void CG_StreamingMP_RequestList_Free<Weapon>(CgStreamRequestList<Weapon> *requestList)
{
  requestList->cgRequests = NULL;
  requestList->clRequests = NULL;
  requestList->priorities = NULL;
  *(_QWORD *)&requestList->requestCount = 0i64;
}

/*
==============
CG_StreamingMP_RequestList_Validate<Weapon>
==============
*/
void CG_StreamingMP_RequestList_Validate<Weapon>(const CgStreamRequestList<Weapon> *requestList)
{
  __int64 v2; 
  int v3; 

  if ( !requestList->cgRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 55, ASSERT_TYPE_ASSERT, "( ( requestList.cgRequests != nullptr ) )", "( requestList.cgRequests ) = %p", NULL) )
    __debugbreak();
  if ( !requestList->clRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 56, ASSERT_TYPE_ASSERT, "( ( requestList.clRequests != nullptr ) )", "( requestList.clRequests ) = %p", NULL) )
    __debugbreak();
  if ( !requestList->priorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 57, ASSERT_TYPE_ASSERT, "( ( requestList.priorities != nullptr ) )", "( requestList.priorities ) = %p", NULL) )
    __debugbreak();
  if ( requestList->maxRequestCount > 0x40 )
  {
    v3 = 64;
    LODWORD(v2) = requestList->maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 58, ASSERT_TYPE_ASSERT, "( requestList.maxRequestCount ) <= ( MAX_CG_STREAMING_REQUESTS )", "requestList.maxRequestCount not in [0, MAX_CG_STREAMING_REQUESTS]\n\t%u not in [0, %u]", v2, v3) )
      __debugbreak();
  }
}

/*
==============
CG_StreamingMP_GetRequestFlagsForDistanceSq
==============
*/
__int64 CG_StreamingMP_GetRequestFlagsForDistanceSq(const float distanceSq)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  float v6; 
  __int64 result; 

  v1 = DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization;
  if ( !DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMaxDistanceForNearWorldModelPrioritization") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization;
  v5 = value * value;
  if ( !DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMinDistanceForFarWorldModelPrioritization") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v6 = v4->current.value * v4->current.value;
  if ( v6 <= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 327, ASSERT_TYPE_ASSERT, "(streamingMinDistanceSqForFarWorldModelPrioritization > streamingMaxDistanceSqForNearWorldModelPrioritization)", (const char *)&queryFormat, "streamingMinDistanceSqForFarWorldModelPrioritization > streamingMaxDistanceSqForNearWorldModelPrioritization") )
    __debugbreak();
  if ( distanceSq <= v5 )
    return 8i64;
  result = 0i64;
  if ( distanceSq >= v6 )
    return 16i64;
  return result;
}

