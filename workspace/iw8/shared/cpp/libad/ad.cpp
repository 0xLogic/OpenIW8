/*
==============
AD_Force_Wakeup
==============
*/

void AD_Force_Wakeup(void)
{
  ?AD_Force_Wakeup@@YAXXZ();
}

/*
==============
AD_ActivateUser
==============
*/

unsigned int __fastcall AD_ActivateUser(const AD_UserInfo *const userInfo)
{
  return ?AD_ActivateUser@@YAIQEBUAD_UserInfo@@@Z(userInfo);
}

/*
==============
AD_DeactivateUser
==============
*/

void __fastcall AD_DeactivateUser(const AD_UserInfo *const userInfo)
{
  ?AD_DeactivateUser@@YAXQEBUAD_UserInfo@@@Z(userInfo);
}

/*
==============
AD_Destroy
==============
*/

void AD_Destroy(void)
{
  ?AD_Destroy@@YAXXZ();
}

/*
==============
AD_Init
==============
*/

void __fastcall AD_Init(void (__fastcall *mixerCallback)(const AD_MixerServiceCallbackData *const), void (__fastcall *voiceChatCallback)(const AD_MixerServiceCallbackData *const), void *(__fastcall *externalMalloc)(const unsigned int, const unsigned int), void (__fastcall *externalFree)(void *const), void *(__fastcall *spawnExternalThread)(const AD_Thread::Name, void (__fastcall *)(void *const), void *const), void (__fastcall *cleanupExternalThread)(const AD_Thread::Name), void (__fastcall *externalLogging)(const char *, const char *, AD_LogCategory, const char *), const bool supportSpatialAudio, const bool restrictedBGM)
{
  ?AD_Init@@YAXP6AXQEBUAD_MixerServiceCallbackData@@@Z1P6APEAXII@ZP6AXQEAX@ZP6APEAXW4Name@AD_Thread@@43@ZP6AX5@ZP6AXPEBD8W4AD_LogCategory@@8@Z_N_N@Z(mixerCallback, voiceChatCallback, externalMalloc, externalFree, spawnExternalThread, cleanupExternalThread, externalLogging, supportSpatialAudio, restrictedBGM);
}

/*
==============
AD_ActivateUser
==============
*/
unsigned int AD_ActivateUser(const AD_UserInfo *const userInfo)
{
  return AD_InterfaceActivateUser(s_adGlobals.iface, userInfo);
}

/*
==============
AD_DeactivateUser
==============
*/
void AD_DeactivateUser(const AD_UserInfo *const userInfo)
{
  AD_InterfaceDeactivateUser(s_adGlobals.iface, userInfo);
}

/*
==============
AD_Destroy
==============
*/
void AD_Destroy(void)
{
  if ( s_adGlobals.iface )
  {
    AD_InterfaceDisconnect(s_adGlobals.iface);
    AD_BK_Destroy(s_adGlobals.iface, 0, 0);
    s_adGlobals.iface = NULL;
  }
  AD_RT_Destroy();
}

/*
==============
AD_Force_Wakeup
==============
*/
void AD_Force_Wakeup(void)
{
  if ( !s_adGlobals.iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\ad.cpp", 110, ASSERT_TYPE_ASSERT, "s_adGlobals.iface", "s_adGlobals.iface") )
    __debugbreak();
  AD_BK_Force_Wakeup(s_adGlobals.iface);
}

/*
==============
AD_Init
==============
*/
void AD_Init(void (*mixerCallback)(const AD_MixerServiceCallbackData *const), void (*voiceChatCallback)(const AD_MixerServiceCallbackData *const), void *(*externalMalloc)(const unsigned int, const unsigned int), void (*externalFree)(void *const), void *(*spawnExternalThread)(const AD_Thread::Name, void (*)(void *const), void *const), void (*cleanupExternalThread)(const AD_Thread::Name), void (*externalLogging)(const char *, const char *, AD_LogCategory, const char *), const bool supportSpatialAudio, const bool restrictedBGM)
{
  AD_MasterBusMixer *StaticMixerInstance; 
  AD_Interface *StaticInterfaceInstance; 
  AD_Interface *v13; 
  const char *v14; 
  const char *v15; 
  AD_RT_Options v16; 
  AD_BK_Options options; 

  *(_QWORD *)options.outputMixBedConfig = 0i64;
  v16.projectName = "ad";
  *(_QWORD *)&options.outputMixBedConfig[2] = 0x700000007i64;
  v16.externalLogging = externalLogging;
  options.supportSpatialAudio = supportSpatialAudio;
  *(_QWORD *)&options.interfaceThreadAffinity = -1i64;
  v16.externalMalloc = externalMalloc;
  v16.externalFree = externalFree;
  v16.externalSpawnThread = spawnExternalThread;
  v16.externalCleanupThread = cleanupExternalThread;
  AD_RT_Init(&v16);
  options.restrictedBGM = restrictedBGM;
  StaticMixerInstance = AD_GetStaticMixerInstance();
  StaticInterfaceInstance = AD_GetStaticInterfaceInstance();
  v13 = AD_BK_Init(&options, StaticInterfaceInstance, StaticMixerInstance);
  s_adGlobals.iface = v13;
  if ( v13 )
  {
    if ( AD_InterfaceConnect(v13, mixerCallback, voiceChatCallback) )
      return;
    AD_BK_Destroy(s_adGlobals.iface, 1, 1);
    v14 = "Could not connect interface";
    s_adGlobals.iface = NULL;
    v15 = "87";
  }
  else
  {
    v14 = "Could not instantiate interface";
    v15 = "81";
  }
  AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\ad.cpp", v15, (const AD_LogCategory)5, v14);
  if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
    __debugbreak();
}

