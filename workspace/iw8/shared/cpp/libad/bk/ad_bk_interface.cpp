/*
==============
AD_SetDeviceConfig
==============
*/

bool __fastcall AD_SetDeviceConfig(AD_Interface *const iface, const AD_DeviceConfigRequest *configRequest, const AD_InputEndpoints endpoint)
{
  return ?AD_SetDeviceConfig@@YA_NQEAUAD_Interface@@AEBUAD_DeviceConfigRequest@@W4AD_InputEndpoints@@@Z(iface, configRequest, endpoint);
}

/*
==============
AD_GetDeviceConfig
==============
*/

bool __fastcall AD_GetDeviceConfig(AD_Interface *const iface, AD_DeviceConfig *const destDevInfo, const AD_OutputEndpoints endpoint)
{
  return ?AD_GetDeviceConfig@@YA_NQEAUAD_Interface@@QEAUAD_DeviceConfig@@W4AD_OutputEndpoints@@@Z(iface, destDevInfo, endpoint);
}

/*
==============
AD_InterfaceUpdateDeviceState
==============
*/

void __fastcall AD_InterfaceUpdateDeviceState(AD_Interface *const iface, const AD_DeviceGUID *const deviceId, unsigned int state)
{
  ?AD_InterfaceUpdateDeviceState@@YAXQEAUAD_Interface@@QEBUAD_DeviceGUID@@I@Z(iface, deviceId, state);
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/

bool __fastcall AD_InterfaceReOpenDevice(AD_Interface *const iface, AD_EndpointFlow flow, AD_EndpointRole role)
{
  return ?AD_InterfaceReOpenDevice@@YA_NQEAUAD_Interface@@W4AD_EndpointFlow@@W4AD_EndpointRole@@@Z(iface, flow, role);
}

/*
==============
AD_GetStaticInterfaceInstance
==============
*/

AD_Interface *__fastcall AD_GetStaticInterfaceInstance()
{
  return ?AD_GetStaticInterfaceInstance@@YAPEAUAD_Interface@@XZ();
}

/*
==============
AD_GetDeviceConfig
==============
*/

bool __fastcall AD_GetDeviceConfig(AD_Interface *const iface, AD_DeviceConfig *const destDevInfo, const AD_InputEndpoints endpoint)
{
  return ?AD_GetDeviceConfig@@YA_NQEAUAD_Interface@@QEAUAD_DeviceConfig@@W4AD_InputEndpoints@@@Z(iface, destDevInfo, endpoint);
}

/*
==============
AD_SetDeviceConfig
==============
*/

bool __fastcall AD_SetDeviceConfig(const AD_DeviceConfigRequest *configRequest, const AD_InputEndpoints endpoint)
{
  return ?AD_SetDeviceConfig@@YA_NAEBUAD_DeviceConfigRequest@@W4AD_InputEndpoints@@@Z(configRequest, endpoint);
}

/*
==============
AD_InterfaceConnect
==============
*/

bool __fastcall AD_InterfaceConnect(AD_Interface *const iface, void (__fastcall *mixerCallback)(const AD_MixerServiceCallbackData *const), void (__fastcall *voiceChatCallback)(const AD_MixerServiceCallbackData *const))
{
  return ?AD_InterfaceConnect@@YA_NQEAUAD_Interface@@P6AXQEBUAD_MixerServiceCallbackData@@@Z2@Z(iface, mixerCallback, voiceChatCallback);
}

/*
==============
AD_BK_Destroy
==============
*/

void __fastcall AD_BK_Destroy(AD_Interface *iface, const bool freeInterface, const bool freeMixer)
{
  ?AD_BK_Destroy@@YAXPEAUAD_Interface@@_N1@Z(iface, freeInterface, freeMixer);
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/

bool __fastcall AD_InterfaceReOpenDevice(AD_Interface *const iface, const AD_DeviceGUID *const deviceId)
{
  return ?AD_InterfaceReOpenDevice@@YA_NQEAUAD_Interface@@QEBUAD_DeviceGUID@@@Z(iface, deviceId);
}

/*
==============
AD_GetDeviceConfig
==============
*/

bool __fastcall AD_GetDeviceConfig(AD_DeviceConfig *const destDevInfo, const AD_InputEndpoints endpoint)
{
  return ?AD_GetDeviceConfig@@YA_NQEAUAD_DeviceConfig@@W4AD_InputEndpoints@@@Z(destDevInfo, endpoint);
}

/*
==============
AD_BK_Init
==============
*/

AD_Interface *__fastcall AD_BK_Init(const AD_BK_Options *const options, AD_Interface *const existingInterface, AD_MasterBusMixer *existingMixer)
{
  return ?AD_BK_Init@@YAPEAUAD_Interface@@QEBUAD_BK_Options@@QEAU1@PEAUAD_MasterBusMixer@@@Z(options, existingInterface, existingMixer);
}

/*
==============
AD_SetDeviceConfig
==============
*/

bool __fastcall AD_SetDeviceConfig(const AD_DeviceConfigRequest *configRequest, const AD_OutputEndpoints endpoint)
{
  return ?AD_SetDeviceConfig@@YA_NAEBUAD_DeviceConfigRequest@@W4AD_OutputEndpoints@@@Z(configRequest, endpoint);
}

/*
==============
AD_GetDeviceConfig
==============
*/

bool __fastcall AD_GetDeviceConfig(AD_DeviceConfig *const destDevInfo, const AD_OutputEndpoints endpoint)
{
  return ?AD_GetDeviceConfig@@YA_NQEAUAD_DeviceConfig@@W4AD_OutputEndpoints@@@Z(destDevInfo, endpoint);
}

/*
==============
AD_InterfaceActivateUser
==============
*/

unsigned int __fastcall AD_InterfaceActivateUser(AD_Interface *const iface, const AD_UserInfo *const userInfo)
{
  return ?AD_InterfaceActivateUser@@YAIQEAUAD_Interface@@QEBUAD_UserInfo@@@Z(iface, userInfo);
}

/*
==============
AD_InterfaceDeactivateUser
==============
*/

void __fastcall AD_InterfaceDeactivateUser(AD_Interface *const iface, const AD_UserInfo *const userInfo)
{
  ?AD_InterfaceDeactivateUser@@YAXQEAUAD_Interface@@QEBUAD_UserInfo@@@Z(iface, userInfo);
}

/*
==============
AD_SetDeviceConfig
==============
*/

bool __fastcall AD_SetDeviceConfig(AD_Interface *const iface, const AD_DeviceConfigRequest *configRequest, const AD_OutputEndpoints endpoint)
{
  return ?AD_SetDeviceConfig@@YA_NQEAUAD_Interface@@AEBUAD_DeviceConfigRequest@@W4AD_OutputEndpoints@@@Z(iface, configRequest, endpoint);
}

/*
==============
AD_InterfaceCloseDevice
==============
*/

void __fastcall AD_InterfaceCloseDevice(AD_Interface *const iface, const AD_DeviceGUID *const deviceId)
{
  ?AD_InterfaceCloseDevice@@YAXQEAUAD_Interface@@QEBUAD_DeviceGUID@@@Z(iface, deviceId);
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/

bool __fastcall AD_InterfaceReOpenDevice(AD_Interface *const iface, AD_EndpointFlow flow, AD_EndpointType type)
{
  return ?AD_InterfaceReOpenDevice@@YA_NQEAUAD_Interface@@W4AD_EndpointFlow@@W4AD_EndpointType@@@Z(iface, flow, type);
}

/*
==============
AD_BK_Force_Wakeup
==============
*/

void __fastcall AD_BK_Force_Wakeup(AD_Interface *iface)
{
  ?AD_BK_Force_Wakeup@@YAXPEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_InterfaceDisconnect
==============
*/

void __fastcall AD_InterfaceDisconnect(AD_Interface *const iface)
{
  ?AD_InterfaceDisconnect@@YAXQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_GetDeviceConfig
==============
*/
bool AD_GetDeviceConfig(AD_DeviceConfig *const destDevInfo, const AD_InputEndpoints endpoint)
{
  return AD_GetDeviceConfig(s_adGlobals.iface, destDevInfo, endpoint);
}

/*
==============
AD_GetDeviceConfig
==============
*/
bool AD_GetDeviceConfig(AD_DeviceConfig *const destDevInfo, const AD_OutputEndpoints endpoint)
{
  return AD_GetDeviceConfig(s_adGlobals.iface, destDevInfo, endpoint);
}

/*
==============
AD_SetDeviceConfig
==============
*/
bool AD_SetDeviceConfig(const AD_DeviceConfigRequest *configRequest, const AD_InputEndpoints endpoint)
{
  return AD_SetDeviceConfig(s_adGlobals.iface, configRequest, endpoint);
}

/*
==============
AD_SetDeviceConfig
==============
*/
bool AD_SetDeviceConfig(const AD_DeviceConfigRequest *configRequest, const AD_OutputEndpoints endpoint)
{
  return AD_SetDeviceConfig(s_adGlobals.iface, configRequest, endpoint);
}

/*
==============
AD_BK_Destroy
==============
*/
void AD_BK_Destroy(AD_Interface *iface, const bool freeInterface, const bool freeMixer)
{
  AD_Event *event; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 122, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  if ( iface->interfaceThread && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 123, ASSERT_TYPE_ASSERT, "iface->interfaceThread == nullptr", "Interface thread not cleaned up") )
    __debugbreak();
  if ( !iface->masterBusMixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 124, ASSERT_TYPE_ASSERT, "iface->masterBusMixer != nullptr", "Master bus mixer not valid") )
    __debugbreak();
  AD_DestroyInterfaceThreadData(iface);
  event = iface->interfaceThreadSignals.event;
  if ( event )
  {
    iface->interfaceThreadSignals.event = NULL;
    AD_DestroyEvent(event);
  }
  AD_DestroyMasterBusMixer(iface->masterBusMixer);
  AD_UserManagerDestroy(&iface->userManager);
  AD_PlatformDestroy(&iface->options);
  if ( freeMixer )
    _AD_Aligned_Free(iface->masterBusMixer);
  iface->masterBusMixer = NULL;
  if ( freeInterface )
    _AD_Aligned_Free(iface);
}

/*
==============
AD_BK_Force_Wakeup
==============
*/
void AD_BK_Force_Wakeup(AD_Interface *iface)
{
  ;
}

/*
==============
AD_BK_Init
==============
*/
AD_Interface *AD_BK_Init(const AD_BK_Options *const options, AD_Interface *const existingInterface, AD_MasterBusMixer *existingMixer)
{
  AD_Interface *v6; 
  AD_Interface *v7; 
  __int64 v8; 
  AD_Event *Event; 

  _RBX = existingInterface;
  _RSI = options;
  if ( !options && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 92, ASSERT_TYPE_ASSERT, "options != nullptr", "options != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 94, ASSERT_TYPE_ASSERT, "existingInterface != nullptr", "existingInterface != nullptr") )
    __debugbreak();
  if ( !existingMixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 95, ASSERT_TYPE_ASSERT, "existingMixer != nullptr", "existingMixer != nullptr") )
    __debugbreak();
  if ( !_RBX )
  {
    v6 = (AD_Interface *)_AD_Aligned_Malloc(0x82940u, 4u);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_memory.h", 99, ASSERT_TYPE_ASSERT, "res != nullptr", "AD_Malloc failed to allocate %lu bytes.", 534848i64) )
      __debugbreak();
    memset_0(v6, 0, sizeof(AD_Interface));
    AD_Interface::AD_Interface(v6);
    _RBX = v7;
  }
  if ( !existingMixer )
  {
    existingMixer = (AD_MasterBusMixer *)_AD_Aligned_Malloc(0x111680u, 4u);
    if ( !existingMixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_memory.h", 99, ASSERT_TYPE_ASSERT, "res != nullptr", "AD_Malloc failed to allocate %lu bytes.", 1119872i64) )
      __debugbreak();
    memset_0(existingMixer, 0, sizeof(AD_MasterBusMixer));
    existingMixer->outputs.__vftable = (AD_EnumArray<AD_MasterBusMixerOutput,enum AD_OutputEndpoints,4,32>_vtbl *)&AD_EnumArray<AD_MasterBusMixerOutput,enum AD_OutputEndpoints,4,32>::`vftable';
    `eh vector constructor iterator'(existingMixer->outputs.m_elements, 0x24240ui64, 4ui64, (void (__fastcall *)(void *))AD_MasterBusMixerOutput::AD_MasterBusMixerOutput, (void (__fastcall *)(void *))AD_MasterBusMixerOutput::~AD_MasterBusMixerOutput);
    existingMixer->inputs.__vftable = (AD_EnumArray<AD_MasterBusMixerInput,enum AD_InputEndpoints,2,32>_vtbl *)&AD_EnumArray<AD_MasterBusMixerInput,enum AD_InputEndpoints,2,32>::`vftable';
    `eh vector constructor iterator'(existingMixer->inputs.m_elements, 0x20640ui64, 2ui64, (void (__fastcall *)(void *))AD_MasterBusMixerInput::AD_MasterBusMixerInput, (void (__fastcall *)(void *))AD_MasterBusMixerInput::~AD_MasterBusMixerInput);
    existingMixer->mainOutputScratchBuffer.m_size = 0x20000;
    existingMixer->mainOutputScratchBuffer.__vftable = (AD_StaticSampleBuffer<32768,32>_vtbl *)&AD_StaticSampleBuffer<32768,32>::`vftable';
    existingMixer->mainOutputRemixScratchBuffer.m_size = 0x20000;
    existingMixer->mainOutputRemixScratchBuffer.__vftable = (AD_StaticSampleBuffer<32768,32>_vtbl *)&AD_StaticSampleBuffer<32768,32>::`vftable';
  }
  _RBX->masterBusMixer = existingMixer;
  v8 = 0i64;
  _RBX->interfaceThread = NULL;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  _RBX->options.outputMixBedConfig[3] = _RSI->outputMixBedConfig[3];
  if ( !AD_PlatformInit(&_RBX->options) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 104, ASSERT_TYPE_ASSERT, "AD_PlatformInit( &newInterface->options )", "AD_PlatformInit( &newInterface->options )") )
    __debugbreak();
  AD_InitMasterBusMixer(&_RBX->options, _RBX->masterBusMixer);
  AD_UserManagerInit(&_RBX->userManager);
  Event = AD_CreateEvent(0xBu, 0i64, 0);
  _RBX->interfaceThreadSignals.event = Event;
  if ( !Event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 123, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  if ( AD_InitInterfaceThreadData(_RBX) )
    return _RBX;
  return (AD_Interface *)v8;
}

/*
==============
AD_GetDeviceConfig
==============
*/
bool AD_GetDeviceConfig(AD_Interface *const iface, AD_DeviceConfig *const destDevInfo, const AD_InputEndpoints endpoint)
{
  __int64 v3; 

  v3 = (unsigned int)endpoint;
  if ( (unsigned int)endpoint >= Stereo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  return AD_EndpointGetDeviceConfig(&iface->interfaceThreadData.inputEndpoints.m_elements[v3], destDevInfo);
}

/*
==============
AD_GetDeviceConfig
==============
*/
bool AD_GetDeviceConfig(AD_Interface *const iface, AD_DeviceConfig *const destDevInfo, const AD_OutputEndpoints endpoint)
{
  __int64 v3; 

  v3 = (unsigned int)endpoint;
  if ( (unsigned int)endpoint >= Quadraphonic && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  return AD_EndpointGetDeviceConfig(&iface->interfaceThreadData.outputEndpoints.m_elements[v3], destDevInfo);
}

/*
==============
AD_GetStaticInterfaceInstance
==============
*/
AD_Interface *AD_GetStaticInterfaceInstance()
{
  return &s_adInterface;
}

/*
==============
AD_InterfaceActivateUser
==============
*/
__int64 AD_InterfaceActivateUser(AD_Interface *const iface, const AD_UserInfo *const userInfo)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  const AD_Endpoint *v7; 
  char *fmt; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 212, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  if ( !userInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 213, ASSERT_TYPE_ASSERT, "userInfo != nullptr", "userInfo != nullptr") )
    __debugbreak();
  v4 = AD_UserManagerAddUser(&iface->userManager, userInfo);
  v5 = v4;
  if ( v4 == 2 )
    return 2i64;
  v6 = v4 + 2;
  while ( 1 )
  {
    if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    v7 = &iface->interfaceThreadData.outputEndpoints.m_elements[(unsigned __int64)v6];
    if ( !AD_EndpointIsForUser(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 116, ASSERT_TYPE_ASSERT, "AD_EndpointIsForUser( &endpoints[endpointIndx] )", "AD_EndpointIsForUser( &endpoints[endpointIndx] )") )
      __debugbreak();
    if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsOpenPending(v7) )
    {
      if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsClosePending(v7) )
        break;
    }
    LODWORD(fmt) = v5;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", "223", Started, "Waiting for interface to process previous output endpoint change for user handle %d", fmt);
    if ( AD_GetLogBreakLevel() == Started )
      __debugbreak();
    AD_Sleep(1u);
  }
  while ( 1 )
  {
    if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsForUser(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 116, ASSERT_TYPE_ASSERT, "AD_EndpointIsForUser( &endpoints[endpointIndx] )", "AD_EndpointIsForUser( &endpoints[endpointIndx] )") )
      __debugbreak();
    if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsOpenPending(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) )
    {
      if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsClosePending(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) )
        break;
    }
    LODWORD(fmt) = v5;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", "230", Started, "Waiting for interface to process previous input endpoint change for user handle %d", fmt);
    if ( AD_GetLogBreakLevel() == Started )
      __debugbreak();
    AD_Sleep(1u);
  }
  if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(iface->interfaceThreadSignals.event, 2ui64);
  return (unsigned int)v5;
}

/*
==============
AD_InterfaceCloseDevice
==============
*/
void AD_InterfaceCloseDevice(AD_Interface *const iface, const AD_DeviceGUID *const deviceId)
{
  unsigned int v3; 
  char v4; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 

  v3 = 0;
  v4 = 0;
  v6 = 0i64;
  do
  {
    if ( AD_EndpointIsActive(&iface->interfaceThreadData.inputEndpoints.m_elements[v6]) && (AD_Interface *const)((char *)iface + v6 * 64) != (AD_Interface *const)-96i64 && !memcmp_0(&iface->interfaceThreadData.inputEndpoints.m_elements[v6].platformData->currentDeviceId, deviceId, 0x38ui64) && !AD_EndpointIsClosePending(&iface->interfaceThreadData.inputEndpoints.m_elements[v6]) )
    {
      v4 = 1;
      AD_EndpointScheduleClose(&iface->interfaceThreadData.inputEndpoints.m_elements[v6]);
      iface->interfaceThreadData.inputDeviceChangedTimestamp.v = 0i64;
      iface->interfaceThreadData.inputDevicesChanged = 1;
    }
    ++v3;
    ++v6;
  }
  while ( v3 < 2 );
  v7 = 0;
  v8 = 0i64;
  do
  {
    if ( AD_EndpointIsActive(&iface->interfaceThreadData.outputEndpoints.m_elements[v8]) && (AD_Interface *const)((char *)iface + v8 * 64) != (AD_Interface *const)-8608i64 && !memcmp_0(&iface->interfaceThreadData.outputEndpoints.m_elements[v8].platformData->currentDeviceId, deviceId, 0x38ui64) && !AD_EndpointIsClosePending(&iface->interfaceThreadData.outputEndpoints.m_elements[v8]) )
    {
      v4 = 1;
      AD_EndpointScheduleClose(&iface->interfaceThreadData.outputEndpoints.m_elements[v8]);
      iface->interfaceThreadData.outputDeviceChangedTimestamp.v = 0i64;
      iface->interfaceThreadData.outputDevicesChanged = 1;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 4 );
  if ( v4 )
  {
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
}

/*
==============
AD_InterfaceConnect
==============
*/
bool AD_InterfaceConnect(AD_Interface *const iface, void (*mixerCallback)(const AD_MixerServiceCallbackData *const), void (*voiceChatCallback)(const AD_MixerServiceCallbackData *const))
{
  AD_ThreadContext *inited; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 165, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  if ( !iface->masterBusMixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 166, ASSERT_TYPE_ASSERT, "iface->masterBusMixer != nullptr", "iface->masterBusMixer != nullptr") )
    __debugbreak();
  AD_ConnectMasterBusMixer(iface->masterBusMixer, mixerCallback, voiceChatCallback, (const AD_Thread::CPUAffinity)iface->options.mixerThreadAffinity);
  AD_PrimeMasterBusMixer(iface->masterBusMixer);
  inited = AD_InitThread((const AD_Thread::Name)0, iface, 0, AD_InterfaceThread, AD_InterfaceThreadTerminator, (const AD_Thread::Priority)4, (const AD_Thread::CPUAffinity)iface->options.interfaceThreadAffinity, (const AD_ThreadOptions)1);
  iface->interfaceThread = inited;
  if ( inited )
  {
    AD_UserManagerConnect(&iface->userManager);
    AD_SpawnThread(iface->interfaceThread);
    if ( AD_UserManagerAnyPendingUsers(&iface->userManager) )
    {
      if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
        __debugbreak();
      AD_SignalEventFlags(iface->interfaceThreadSignals.event, 2ui64);
    }
    LOBYTE(inited) = 1;
  }
  return (char)inited;
}

/*
==============
AD_InterfaceDeactivateUser
==============
*/
void AD_InterfaceDeactivateUser(AD_Interface *const iface, const AD_UserInfo *const userInfo)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  const AD_Endpoint *v7; 
  char *fmt; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 246, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  v4 = AD_UserManagerRemoveUser(&iface->userManager, userInfo);
  v5 = v4;
  if ( v4 != 2 )
  {
    v6 = v4 + 2;
    while ( 1 )
    {
      if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      v7 = &iface->interfaceThreadData.outputEndpoints.m_elements[(unsigned __int64)v6];
      if ( !AD_EndpointIsForUser(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 116, ASSERT_TYPE_ASSERT, "AD_EndpointIsForUser( &endpoints[endpointIndx] )", "AD_EndpointIsForUser( &endpoints[endpointIndx] )") )
        __debugbreak();
      if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsOpenPending(v7) )
      {
        if ( v6 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
          __debugbreak();
        if ( !AD_EndpointIsClosePending(v7) )
          break;
      }
      LODWORD(fmt) = v5;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", "256", Started, "Waiting for interface to process previous output endpoint change for user handle %d", fmt);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
      AD_Sleep(1u);
    }
    while ( 1 )
    {
      if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsForUser(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 116, ASSERT_TYPE_ASSERT, "AD_EndpointIsForUser( &endpoints[endpointIndx] )", "AD_EndpointIsForUser( &endpoints[endpointIndx] )") )
        __debugbreak();
      if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsOpenPending(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) )
      {
        if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
          __debugbreak();
        if ( !AD_EndpointIsClosePending(&iface->interfaceThreadData.inputEndpoints.m_elements[v5]) )
          break;
      }
      LODWORD(fmt) = v5;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", "263", Started, "Waiting for interface to process previous input endpoint change for user handle %d", fmt);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
      AD_Sleep(1u);
    }
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 2ui64);
  }
}

/*
==============
AD_InterfaceDisconnect
==============
*/
void AD_InterfaceDisconnect(AD_Interface *const iface)
{
  AD_ThreadContext *interfaceThread; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 195, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  interfaceThread = iface->interfaceThread;
  if ( interfaceThread )
  {
    AD_TerminateThread(iface->interfaceThread);
    AD_CleanupThread(interfaceThread);
    iface->interfaceThread = NULL;
  }
  AD_UserManagerDisconnect(&iface->userManager);
  AD_DisconnectMasterBusMixer(iface->masterBusMixer);
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/
__int64 AD_InterfaceReOpenDevice(AD_Interface *const iface, const AD_DeviceGUID *const deviceId)
{
  unsigned int v2; 
  AD_Endpoint *m_elements; 
  unsigned int v4; 
  unsigned __int8 v5; 
  AD_Endpoint *v8; 

  v2 = 0;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( m_elements && !memcmp_0(&m_elements->platformData->currentDeviceId, deviceId, 0x38ui64) && !AD_EndpointIsScheduledForReOpen(m_elements) )
    {
      v5 = 1;
      AD_EndpointScheduleReOpen(m_elements);
    }
    ++v4;
    ++m_elements;
  }
  while ( v4 < 2 );
  v8 = iface->interfaceThreadData.outputEndpoints.m_elements;
  do
  {
    if ( v8 && !memcmp_0(&v8->platformData->currentDeviceId, deviceId, 0x38ui64) && !AD_EndpointIsScheduledForReOpen(v8) )
    {
      v5 = 1;
      AD_EndpointScheduleReOpen(v8);
    }
    ++v2;
    ++v8;
  }
  while ( v2 < 4 );
  if ( v5 )
  {
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
  return v5;
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/
__int64 AD_InterfaceReOpenDevice(AD_Interface *const iface, AD_EndpointFlow flow, AD_EndpointRole role)
{
  unsigned int v3; 
  AD_Endpoint *m_elements; 
  unsigned int v5; 
  unsigned __int8 v6; 
  AD_Endpoint *v9; 

  v3 = 0;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( m_elements && m_elements->flow == flow && m_elements->role == role && (!AD_EndpointIsScheduledForReOpen(m_elements) || !AD_EndpointIsActive(m_elements)) )
    {
      v6 = 1;
      AD_EndpointScheduleReOpen(m_elements);
    }
    ++v5;
    ++m_elements;
  }
  while ( v5 < 2 );
  v9 = iface->interfaceThreadData.outputEndpoints.m_elements;
  do
  {
    if ( v9 && v9->flow == flow && v9->role == role && (!AD_EndpointIsScheduledForReOpen(v9) || !AD_EndpointIsActive(v9)) )
    {
      v6 = 1;
      AD_EndpointScheduleReOpen(v9);
    }
    ++v3;
    ++v9;
  }
  while ( v3 < 4 );
  if ( v6 )
  {
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
  return v6;
}

/*
==============
AD_InterfaceReOpenDevice
==============
*/
__int64 AD_InterfaceReOpenDevice(AD_Interface *const iface, AD_EndpointFlow flow, AD_EndpointType type)
{
  unsigned int v3; 
  AD_Endpoint *m_elements; 
  unsigned int v5; 
  unsigned __int8 v6; 
  AD_Endpoint *v9; 

  v3 = 0;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( m_elements && m_elements->flow == flow && m_elements->platformData->currentEndpointType == type && !AD_EndpointIsScheduledForReOpen(m_elements) )
    {
      v6 = 1;
      AD_EndpointScheduleReOpen(m_elements);
    }
    ++v5;
    ++m_elements;
  }
  while ( v5 < 2 );
  v9 = iface->interfaceThreadData.outputEndpoints.m_elements;
  do
  {
    if ( v9 && v9->flow == flow && v9->platformData->currentEndpointType == type && !AD_EndpointIsScheduledForReOpen(v9) )
    {
      v6 = 1;
      AD_EndpointScheduleReOpen(v9);
    }
    ++v3;
    ++v9;
  }
  while ( v3 < 4 );
  if ( v6 )
  {
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
  return v6;
}

/*
==============
AD_InterfaceThread
==============
*/
void AD_InterfaceThread(void *const payload, const int arg)
{
  int *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned int i; 
  AD_UserStateChange v10; 
  AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags result; 
  AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags flags; 
  int v13[4]; 

  if ( AD_InterfaceThreadInit((AD_Interface *const)payload) )
  {
    if ( AD_InterfaceThreadSynchronize((AD_Interface *const)payload) )
    {
      do
      {
        v13[0] = 0;
        v3 = v13;
        v13[1] = 1;
        v4 = 0i64;
        v13[2] = 2;
        v5 = 3i64;
        do
        {
          v6 = *v3++;
          v4 |= 1i64 << v6;
          --v5;
        }
        while ( v5 );
        AD_InterfaceThreadGetFlags(&result, (AD_Interface *const)payload);
        flags.flags = result.flags & v4;
        if ( (result.flags & v4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 32, ASSERT_TYPE_ASSERT, "( defaultFlags & derivedFlags ) == 0ull", "( defaultFlags & derivedFlags ) == 0ull") )
          __debugbreak();
        v7 = result.flags | v4;
        if ( !*((_QWORD *)payload + 66836) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 228, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
          __debugbreak();
        v8 = AD_AwaitAnyEventFlags(*((AD_Event **)payload + 66836), v7, 0x64u, result.flags);
        if ( (v8 & 4) != 0 )
          AD_InterfaceThreadUpdateReopenedDevices((AD_Interface *const)payload);
        if ( (v8 & 2) != 0 )
        {
          for ( i = AD_UserManagerUpdateBegin((AD_UserManager *const)((char *)payload + 534704)); !AD_UserManagerUpdateDone(i); i = AD_UserManagerUpdateAdvance((AD_UserManager *const)((char *)payload + 534704), i) )
          {
            v10 = AD_UserManagerGetStateChange((const AD_UserManager *const)((char *)payload + 534704), i);
            if ( v10 )
            {
              if ( v10 == Connecting )
                AD_InterfaceThreadDestroyDevicesForUser((AD_Interface *const)payload, i);
            }
            else
            {
              AD_InterfaceThreadCreateDevicesForUser((AD_Interface *const)payload, i);
            }
          }
        }
        if ( (v8 & 1) != 0 )
          break;
        flags.flags = result.flags & v8;
      }
      while ( AD_InterfaceThreadUpdate((AD_Interface *const)payload, (const AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags)&flags) );
    }
    AD_InterfaceThreadDestroy((AD_Interface *const)payload);
  }
}

/*
==============
AD_InterfaceThreadTerminator
==============
*/
void AD_InterfaceThreadTerminator(void *const payload, const int arg)
{
  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface.cpp", 84, ASSERT_TYPE_ASSERT, "payload != nullptr", "payload != nullptr") )
    __debugbreak();
  if ( !*((_QWORD *)payload + 66836) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(*((AD_Event **)payload + 66836), 1ui64);
}

/*
==============
AD_InterfaceUpdateDeviceState
==============
*/
void AD_InterfaceUpdateDeviceState(AD_Interface *const iface, const AD_DeviceGUID *const deviceId, unsigned int state)
{
  AD_Endpoint *m_elements; 
  unsigned int v4; 
  AD_Endpoint *v7; 
  char *v9; 
  unsigned int v10; 
  AD_Endpoint *v11; 
  char v13; 

  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v4 = 0;
  v13 = 0;
  v7 = iface->interfaceThreadData.inputEndpoints.m_elements;
  do
  {
    if ( v7 && !memcmp_0(&v7->platformData->currentDeviceId, deviceId, 0x38ui64) )
    {
      v9 = (char *)&iface->interfaceThreadData.inputEndpoints.m_elements[0].platformData + (char *)v7 - (char *)m_elements;
      if ( *(_DWORD *)(*(_QWORD *)v9 + 36i64) != 1 && state == 1 )
      {
        AD_EndpointScheduleReOpen(v7);
        v13 = 1;
      }
      *(_DWORD *)(*(_QWORD *)v9 + 36i64) = state;
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 2 );
  v10 = 0;
  v11 = iface->interfaceThreadData.outputEndpoints.m_elements;
  do
  {
    if ( v11 && !memcmp_0(&v11->platformData->currentDeviceId, deviceId, 0x38ui64) )
      v11->platformData->state = state;
    ++v10;
    ++v11;
  }
  while ( v10 < 4 );
  if ( v13 )
  {
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
}

/*
==============
AD_SetDeviceConfig
==============
*/
bool AD_SetDeviceConfig(AD_Interface *const iface, const AD_DeviceConfigRequest *configRequest, const AD_InputEndpoints endpoint)
{
  __int64 v3; 

  v3 = (unsigned int)endpoint;
  if ( (unsigned int)endpoint >= Stereo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  return AD_EndpointSetDeviceConfig(iface, &iface->interfaceThreadData.inputEndpoints.m_elements[v3], configRequest);
}

/*
==============
AD_SetDeviceConfig
==============
*/
bool AD_SetDeviceConfig(AD_Interface *const iface, const AD_DeviceConfigRequest *configRequest, const AD_OutputEndpoints endpoint)
{
  __int64 v3; 

  v3 = (unsigned int)endpoint;
  if ( (unsigned int)endpoint >= Quadraphonic && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  return AD_EndpointSetDeviceConfig(iface, &iface->interfaceThreadData.outputEndpoints.m_elements[v3], configRequest);
}

