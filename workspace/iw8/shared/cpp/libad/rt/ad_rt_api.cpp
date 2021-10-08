/*
==============
AD_RT_Destroy
==============
*/

void AD_RT_Destroy(void)
{
  ?AD_RT_Destroy@@YAXXZ();
}

/*
==============
AD_RT_Init
==============
*/

void __fastcall AD_RT_Init(const AD_RT_Options *options)
{
  ?AD_RT_Init@@YAXPEBUAD_RT_Options@@@Z(options);
}

/*
==============
AD_RT_Destroy
==============
*/
void AD_RT_Destroy(void)
{
  AD_ProcessDestroy();
  AD_MemoryDestroy();
  AD_DebugDestroy();
  AD_LoggingDestroy();
}

/*
==============
AD_RT_Init
==============
*/
void AD_RT_Init(const AD_RT_Options *options)
{
  if ( !options->externalMalloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_api.cpp", 13, ASSERT_TYPE_ASSERT, "options->externalMalloc != nullptr", "options->externalMalloc != nullptr") )
    __debugbreak();
  if ( !options->externalFree && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_api.cpp", 14, ASSERT_TYPE_ASSERT, "options->externalFree != nullptr", "options->externalFree != nullptr") )
    __debugbreak();
  if ( !options->externalSpawnThread && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_api.cpp", 17, ASSERT_TYPE_ASSERT, "options->externalSpawnThread != nullptr", "options->externalSpawnThread != nullptr") )
    __debugbreak();
  if ( !options->externalCleanupThread && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_api.cpp", 18, ASSERT_TYPE_ASSERT, "options->externalCleanupThread != nullptr", "options->externalCleanupThread != nullptr") )
    __debugbreak();
  if ( !options->externalLogging && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_api.cpp", 21, ASSERT_TYPE_ASSERT, "options->externalLogging != nullptr", "options->externalLogging != nullptr") )
    __debugbreak();
  AD_LoggingInit(options);
  AD_DebugInit(options);
  AD_MemoryInit(options);
  AD_ProcessInit(options);
}

