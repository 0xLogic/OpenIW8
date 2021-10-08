/*
==============
SD_OutputForceWakeup
==============
*/

void SD_OutputForceWakeup(void)
{
  ?SD_OutputForceWakeup@@YAXXZ();
}

/*
==============
SD_OutputInit
==============
*/

void __fastcall SD_OutputInit(bool __formal)
{
  ?SD_OutputInit@@YAX_N@Z(__formal);
}

/*
==============
SD_ShutdownAD
==============
*/

void SD_ShutdownAD(void)
{
  ?SD_ShutdownAD@@YAXXZ();
}

/*
==============
SD_OutputSubmitBuffer
==============
*/

void SD_OutputSubmitBuffer(void)
{
  ?SD_OutputSubmitBuffer@@YAXXZ();
}

/*
==============
SD_OutputEnableUserSystems
==============
*/

void __fastcall SD_OutputEnableUserSystems(bool enable)
{
  ?SD_OutputEnableUserSystems@@YAX_N@Z(enable);
}

/*
==============
SD_OutputClosePadPort
==============
*/

void __fastcall SD_OutputClosePadPort(int localControllerIndex)
{
  ?SD_OutputClosePadPort@@YAXH@Z(localControllerIndex);
}

/*
==============
SD_OutputShutdown
==============
*/

void __fastcall SD_OutputShutdown(bool __formal)
{
  ?SD_OutputShutdown@@YAX_N@Z(__formal);
}

/*
==============
SD_MixerServiceCallback
==============
*/

void __fastcall SD_MixerServiceCallback(const AD_MixerServiceCallbackData *const data)
{
  ?SD_MixerServiceCallback@@YAXQEBUAD_MixerServiceCallbackData@@@Z(data);
}

/*
==============
SD_InitAD
==============
*/

void SD_InitAD(void)
{
  ?SD_InitAD@@YAXXZ();
}

/*
==============
SD_VoiceChatServiceCallback
==============
*/

void __fastcall SD_VoiceChatServiceCallback(const AD_MixerServiceCallbackData *const data)
{
  ?SD_VoiceChatServiceCallback@@YAXQEBUAD_MixerServiceCallbackData@@@Z(data);
}

/*
==============
SD_OnVisibilityChanged
==============
*/

void __fastcall SD_OnVisibilityChanged(bool visible)
{
  ?SD_OnVisibilityChanged@@YAX_N@Z(visible);
}

/*
==============
SD_OutputUpdateVoiceDeviceType
==============
*/

void SD_OutputUpdateVoiceDeviceType(void)
{
  ?SD_OutputUpdateVoiceDeviceType@@YAXXZ();
}

/*
==============
SD_OutputInitPadPort
==============
*/

void __fastcall SD_OutputInitPadPort(int localControllerIndex)
{
  ?SD_OutputInitPadPort@@YAXH@Z(localControllerIndex);
}

/*
==============
SD_AD_Free
==============
*/
void SD_AD_Free(void *const mem)
{
  Com_PrintError(9, "AD: Trying to free memory when all memory should be static");
}

/*
==============
SD_AD_LogFunc_External
==============
*/
void SD_AD_LogFunc_External(const char *file, const char *line, AD_LogCategory category, const char *string)
{
  if ( snd_libad_logging_enable->current.enabled )
  {
    switch ( category )
    {
      case 0:
      case 1:
      case 2:
      case 6:
        Com_Printf(9, "AD: %s@%s - %s\n", file, line, string);
        break;
      case 3:
        Com_PrintWarning(9, "AD: %s@%s - %s\n", file, line, string);
        break;
      case 4:
      case 5:
        Com_PrintError(9, "AD: %s@%s - %s\n", file, line, string);
        break;
      default:
        return;
    }
  }
}

/*
==============
SD_AD_Malloc
==============
*/
void *SD_AD_Malloc(const unsigned int count, const unsigned int alignment)
{
  Com_PrintError(9, "AD: Trying to allocate memory when all memory should be static");
  return 0i64;
}

/*
==============
SD_AD_SpawnThread
==============
*/
void *SD_AD_SpawnThread(const AD_Thread::Name threadName, void (*threadFunc)(void *const), void *payload)
{
  int v3; 
  __int64 v4; 
  int v5; 
  ThreadContext v8; 

  v3 = 0;
  v4 = (unsigned int)threadName;
  v5 = 0;
  if ( threadName )
  {
    if ( threadName == Mono )
    {
      v8 = THREAD_CONTEXT_AD_MIX;
    }
    else
    {
      v8 = THREAD_CONTEXT_COUNT;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 691, ASSERT_TYPE_ASSERT, "(context <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "context <= THREAD_CONTEXT_AD_LAST") )
        __debugbreak();
    }
  }
  else
  {
    v8 = THREAD_CONTEXT_AD_INTERFACE;
  }
  s_threadNamePayload[v4] = payload;
  s_threadNameFunc[v4] = threadFunc;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v5 = 6;
      g_sd.threadExit = 0;
      v3 = 1;
    }
    else
    {
      Sys_Error((const ObfuscateErrorText)&stru_1444EFFF8);
    }
  }
  else
  {
    v5 = 6;
    v3 = 1;
  }
  Sys_SpawnSoundThread(v8, SD_AD_ThreadFunc, v3, v5);
  return Sys_GetSoundThreadHandle(v8);
}

/*
==============
SD_AD_TerminateThread
==============
*/
void SD_AD_TerminateThread(const AD_Thread::Name threadName)
{
  unsigned int threadExit; 
  __int64 v2; 
  ThreadContext v3; 

  threadExit = g_sd.threadExit;
  v2 = (unsigned int)threadName;
  if ( threadName == Mono )
    threadExit = 1;
  g_sd.threadExit = threadExit;
  if ( threadName )
  {
    if ( threadName == Mono )
      v3 = THREAD_CONTEXT_AD_MIX;
    else
      v3 = THREAD_CONTEXT_COUNT;
  }
  else
  {
    v3 = THREAD_CONTEXT_AD_INTERFACE;
  }
  Sys_ClearSoundThread(v3);
  s_threadNamePayload[v2] = NULL;
  s_threadNameFunc[v2] = NULL;
}

/*
==============
SD_AD_ThreadFunc
==============
*/
void SD_AD_ThreadFunc(unsigned int threadContext)
{
  unsigned int v2; 
  __int64 v3; 
  void (__fastcall *v4)(void *const); 
  void *v5; 

  if ( threadContext < 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 663, ASSERT_TYPE_ASSERT, "(threadContext >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "threadContext >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( threadContext > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 664, ASSERT_TYPE_ASSERT, "(threadContext <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "threadContext <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  if ( (int)threadContext < 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 635, ASSERT_TYPE_ASSERT, "(threadContext >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "threadContext >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( (int)threadContext > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 636, ASSERT_TYPE_ASSERT, "(threadContext <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "threadContext <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  v2 = threadContext - 10;
  if ( v2 )
  {
    if ( v2 == 1 )
      v3 = 1i64;
    else
      v3 = 2i64;
  }
  else
  {
    v3 = 0i64;
  }
  v4 = s_threadNameFunc[v3];
  v5 = s_threadNamePayload[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 670, ASSERT_TYPE_ASSERT, "(threadFunc != nullptr)", (const char *)&queryFormat, "threadFunc != nullptr") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 671, ASSERT_TYPE_ASSERT, "(payload != nullptr)", (const char *)&queryFormat, "payload != nullptr") )
    __debugbreak();
  v4(v5);
}

/*
==============
SD_InitAD
==============
*/
void SD_InitAD(void)
{
  Dvar_BeginPermanentRegistration();
  snd_libad_logging_enable = Dvar_RegisterBool("MPNPQSTOSN", 1, 0, "Print log output from libad");
  snd_libad_loopback_enable = Dvar_RegisterBool("MPPMPMSTQR", 0, 0, "Echo microphone input locally");
  Dvar_EndPermanentRegistration();
  AD_Init(SD_MixerServiceCallback, SD_VoiceChatServiceCallback, SD_AD_Malloc, SD_AD_Free, (void *(__fastcall *)(const AD_Thread::Name, void (__fastcall *)(void *const), void *const))SD_AD_SpawnThread, SD_AD_TerminateThread, SD_AD_LogFunc_External, 1, 0);
}

/*
==============
SD_MixerServiceCallback
==============
*/
void SD_MixerServiceCallback(const AD_MixerServiceCallbackData *const data)
{
  __int64 v2; 
  unsigned int i; 
  AD_MixerOutputEndpointView *outputEndpointViews; 
  AD_OutputEndpoints endpointType; 
  SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *interleavedBuffer; 
  unsigned __int64 v7; 
  __m256 *v8; 
  const __m256 *v9; 
  SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256> src; 
  SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> v15; 
  __int64 v16; 
  AD_DeviceConfig destDevInfo; 

  v16 = -2i64;
  if ( s_mixerActive )
  {
    Sys_ProfBeginNamedEvent(0xFF00u, "SD_MixerServiceCallback");
    if ( g_snd.shouldDiscardBinkAudio || !data->numOutputEndpointViews || data->outputEndpointViews->endpointType )
      SD_BinkResetBuffer();
    SD_MixFrameBegin();
    SD_MixVoicesAndMaster();
    SD_MixBusses();
    SD_MixFrameEnd();
    for ( i = 0; i < data->numOutputEndpointViews; ++i )
    {
      outputEndpointViews = data->outputEndpointViews;
      endpointType = outputEndpointViews[i].endpointType;
      interleavedBuffer = (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)outputEndpointViews[i].interleavedBuffer;
      if ( endpointType )
      {
        if ( endpointType == Mono )
        {
          if ( outputEndpointViews[i].mixBed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 422, ASSERT_TYPE_ASSERT, "(AD_MixBedToChannelCount( data->outputEndpointViews[i].mixBed ) == (AD_MixBed_Channel_Count)SD_SubmixBus::SamplesPerFrame)", (const char *)&queryFormat, "AD_MixBedToChannelCount( data->outputEndpointViews[i].mixBed ) == (AD_MixBed_Channel_Count)SD_SubmixBus::SamplesPerFrame") )
            __debugbreak();
          v15.data = (SD_DSP::AtmosFrame *)SD_DSP::Buffer<SD_DSP::AtmosFrame,256>::GetInterleavedView(interleavedBuffer, (float *const)v2);
          src.data = SD_GetConstInterleavedBus(0xFu).data;
          SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::CopyFrom(&v15, &src);
        }
      }
      else
      {
        destDevInfo.customEndpointId.value[0] = 0;
        if ( AD_GetDeviceConfig(&destDevInfo, (const AD_OutputEndpoints)0) )
        {
          switch ( destDevInfo.channelCount )
          {
            case Mono:
            case Stereo:
              g_snd.playback_channels = 2;
              break;
            case Quadraphonic:
            case Surround_5_1:
              g_snd.playback_channels = 6;
              break;
            case Surround_7_1:
              g_snd.playback_channels = 8;
              break;
            case Surround_7_1_2:
            case Surround_7_1_4:
            case Surround_7_1_4_4:
              g_snd.playback_channels = 16;
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 403, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid audio device channel count") )
                __debugbreak();
              break;
          }
        }
        if ( data->outputEndpointViews[i].mixBed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 408, ASSERT_TYPE_ASSERT, "(AD_MixBedToChannelCount( data->outputEndpointViews[i].mixBed ) == (AD_MixBed_Channel_Count)SD_SubmixBus::SamplesPerFrame)", (const char *)&queryFormat, "AD_MixBedToChannelCount( data->outputEndpointViews[i].mixBed ) == (AD_MixBed_Channel_Count)SD_SubmixBus::SamplesPerFrame") )
          __debugbreak();
        if ( ((unsigned __int8)interleavedBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 61, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", interleavedBuffer) )
          __debugbreak();
        if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 424, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)interleavedBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 425, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        v7 = (unsigned __int64)&g_sd.busBuffers[57344] & 0x1F;
        if ( ((unsigned __int8)&g_sd.busBuffers[57344] & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 67, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", &g_sd.busBuffers[57344]) )
          __debugbreak();
        if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 432, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 438, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)interleavedBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 446, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 204, ASSERT_TYPE_ASSERT, "(vOut != nullptr)", (const char *)&queryFormat, "vOut != nullptr") )
          __debugbreak();
        v8 = SD_DSP::RegisterTraits<__m256>::Upcast((float *const)interleavedBuffer);
        v9 = SD_DSP::RegisterTraits<__m256>::Upcast(&g_sd.busBuffers[57344]);
        _RCX = v8 + 1;
        _RAX = (char *)v9 - (char *)v8;
        v2 = 256i64;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax+rcx-20h]
            vmovups ymmword ptr [rcx-20h], ymm0
            vmovups ymm1, ymmword ptr [rax+rcx]
            vmovups ymmword ptr [rcx], ymm1
          }
          _RCX += 2;
          --v2;
        }
        while ( v2 );
      }
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SD_OnVisibilityChanged
==============
*/
void SD_OnVisibilityChanged(bool visible)
{
  g_snd.shouldDiscardBinkAudio = !visible;
}

/*
==============
SD_OutputClosePadPort
==============
*/
void SD_OutputClosePadPort(int localControllerIndex)
{
  unsigned int v2; 
  int *v3; 

  if ( SND_Active() )
  {
    v2 = 0;
    v3 = s_userToControllerIndexLookup;
    _RBX = s_userInfoCache;
    do
    {
      if ( *v3 == localControllerIndex )
      {
        if ( _RBX->userId == AD_InvalidUser.userId && _RBX->platformId == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 157, ASSERT_TYPE_ASSERT, "(s_userInfoCache[i] != AD_InvalidUser)", (const char *)&queryFormat, "s_userInfoCache[i] != AD_InvalidUser") )
          __debugbreak();
        AD_DeactivateUser(&s_userInfoCache[v2]);
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
          vmovups xmmword ptr [rbx], xmm0
        }
        *v3 = -1;
      }
      ++v2;
      ++v3;
      ++_RBX;
    }
    while ( v2 < 2 );
  }
}

/*
==============
SD_OutputEnableUserSystems
==============
*/
void SD_OutputEnableUserSystems(bool enable)
{
  int *v2; 
  int v3; 
  unsigned __int64 PlatformUserId; 
  unsigned int v6; 
  unsigned int v9; 
  AD_UserInfo userInfo; 

  if ( SND_Active() && s_userSystemEnabled != enable )
  {
    v2 = s_userToControllerIndexLookup;
    v3 = 0;
    s_userSystemEnabled = enable;
    _R15 = s_userInfoCache;
    do
    {
      if ( enable )
      {
        if ( CL_Mgr_IsControllerActive(v3) )
        {
          if ( Live_IsSignedIn(v3) )
          {
            if ( SND_Active() && s_userSystemEnabled )
            {
              PlatformUserId = Live_GetPlatformUserId(v3);
              userInfo.userId = 0;
              userInfo.platformId = PlatformUserId;
              v6 = AD_ActivateUser(&userInfo);
              if ( v6 == 2 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 116, ASSERT_TYPE_ASSERT, "(h != AD_InvalidUserHandle)", (const char *)&queryFormat, "h != AD_InvalidUserHandle") )
                  __debugbreak();
              }
              else
              {
                __asm { vmovups xmm0, xmmword ptr [rsp+68h+userInfo.userId] }
                s_userToControllerIndexLookup[v6] = v3;
                _RAX = 2i64 * v6;
                __asm { vmovups xmmword ptr [r15+rax*8], xmm0 }
              }
            }
          }
          else
          {
            Com_PrintError(9, "Trying to activate a signed-out user on controller index %d\n", (unsigned int)v3);
          }
        }
      }
      else if ( SND_Active() )
      {
        v9 = 0;
        _RBX = s_userInfoCache;
        do
        {
          if ( *v2 == v3 )
          {
            if ( _RBX->userId == AD_InvalidUser.userId && _RBX->platformId == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 157, ASSERT_TYPE_ASSERT, "(s_userInfoCache[i] != AD_InvalidUser)", (const char *)&queryFormat, "s_userInfoCache[i] != AD_InvalidUser") )
              __debugbreak();
            AD_DeactivateUser(&s_userInfoCache[v9]);
            __asm
            {
              vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
              vmovups xmmword ptr [rbx], xmm0
            }
            *v2 = -1;
          }
          ++v9;
          ++v2;
          ++_RBX;
        }
        while ( v9 < 2 );
        v2 = s_userToControllerIndexLookup;
      }
      ++v3;
    }
    while ( v3 < 8 );
  }
}

/*
==============
SD_OutputForceWakeup
==============
*/

void SD_OutputForceWakeup(void)
{
  AD_Force_Wakeup();
}

/*
==============
SD_OutputInit
==============
*/
void SD_OutputInit(bool __formal)
{
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?AD_InvalidUser@@3UAD_UserInfo@@B.userId; AD_UserInfo const AD_InvalidUser
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmovups ymmword ptr cs:s_userInfoCache.userId, ymm0
  }
  *(_QWORD *)s_userToControllerIndexLookup = -1i64;
  s_mixerActive = 1;
}

/*
==============
SD_OutputInitPadPort
==============
*/
void SD_OutputInitPadPort(int localControllerIndex)
{
  unsigned int v2; 
  AD_UserInfo userInfo; 

  if ( Live_IsSignedIn(localControllerIndex) )
  {
    if ( SND_Active() && s_userSystemEnabled )
    {
      userInfo.userId = 0;
      userInfo.platformId = Live_GetPlatformUserId(localControllerIndex);
      v2 = AD_ActivateUser(&userInfo);
      if ( v2 == 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 116, ASSERT_TYPE_ASSERT, "(h != AD_InvalidUserHandle)", (const char *)&queryFormat, "h != AD_InvalidUserHandle") )
          __debugbreak();
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rsp+48h+userInfo.userId] }
        _RCX = 0x140000000ui64;
        s_userToControllerIndexLookup[v2] = localControllerIndex;
        _RAX = 2i64 * v2;
        __asm { vmovups xmmword ptr rva s_userInfoCache.userId[rcx+rax*8], xmm0 }
      }
    }
  }
  else
  {
    Com_PrintError(9, "Trying to activate a signed-out user on controller index %d\n", (unsigned int)localControllerIndex);
  }
}

/*
==============
SD_OutputShutdown
==============
*/
void SD_OutputShutdown(bool __formal)
{
  s_mixerActive = 0;
}

/*
==============
SD_OutputSubmitBuffer
==============
*/
void SD_OutputSubmitBuffer(void)
{
  ;
}

/*
==============
SD_OutputUpdateVoiceDeviceType
==============
*/
void SD_OutputUpdateVoiceDeviceType(void)
{
  unsigned int Int_Internal_DebugName; 
  AD_InputEndpoints v1; 
  AD_OutputEndpoints i; 
  AD_DeviceConfigRequest configRequest; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_snd_voiceChatDeviceType, "snd_voiceChatDeviceType");
  if ( Int_Internal_DebugName > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 202, ASSERT_TYPE_ASSERT, "(voiceDeviceType == SND_VOICE_DEVICE_TYPE_COMMUNICATIONS || voiceDeviceType == SND_VOICE_DEVICE_TYPE_MAIN)", (const char *)&queryFormat, "voiceDeviceType == SND_VOICE_DEVICE_TYPE_COMMUNICATIONS || voiceDeviceType == SND_VOICE_DEVICE_TYPE_MAIN") )
    __debugbreak();
  v1 = 0;
  if ( s_voiceDeviceTypeLast != (Int_Internal_DebugName != 1) )
  {
    s_voiceDeviceTypeLast = Int_Internal_DebugName != 1;
    configRequest.endpointType = Int_Internal_DebugName != 1;
    configRequest.customEndpointId.value[0] = 0;
    configRequest.spatialSupport = 0;
    do
      AD_SetDeviceConfig(&configRequest, v1++);
    while ( (unsigned int)v1 < Stereo );
    for ( i = Stereo; (unsigned int)i < Quadraphonic; ++i )
      AD_SetDeviceConfig(&configRequest, i);
  }
}

/*
==============
SD_ShutdownAD
==============
*/

void SD_ShutdownAD(void)
{
  AD_Destroy();
}

/*
==============
SD_VoiceChatServiceCallback
==============
*/
void SD_VoiceChatServiceCallback(const AD_MixerServiceCallbackData *const data)
{
  const AD_MixerServiceCallbackData *v1; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  bool v5; 
  unsigned int v6; 
  AD_MixerInputEndpointView *inputEndpointViews; 
  __int64 endpointType; 
  const float *interleavedBuffer; 
  __int64 v10; 
  float *v11; 
  unsigned int v12; 
  float **p_outgoing; 
  float *v14; 
  float *v15; 
  int v16; 
  bool *v17; 
  AD_MixerOutputEndpointView *outputEndpointViews; 
  float *v19; 
  __int64 v20; 
  unsigned int v21; 
  float *v22; 
  float *v23; 
  __int64 j; 
  unsigned int i; 
  AD_InputEndpoints v26; 
  float *_incoming; 
  float *_outgoing; 
  AD_DeviceConfig destDevInfo; 
  char v31[8]; 

  v1 = data;
  if ( s_mixerActive )
  {
    Sys_ProfBeginNamedEvent(0xFF00u, "SD_VoiceChatServiceCallback");
    SD_VoiceChatMixFrame();
    v3 = 0;
    v4 = 0i64;
    v5 = 1;
    do
    {
      if ( !v5 )
      {
        j___report_rangecheckfailure(v2);
        JUMPOUT(0x142751895i64);
      }
      v31[v4++] = 0;
      v5 = (unsigned __int64)v4 < 8;
    }
    while ( v4 < 8 );
    v6 = 0;
    for ( i = 0; v6 < v1->numInputEndpointViews; i = v6 )
    {
      inputEndpointViews = v1->inputEndpointViews;
      endpointType = (unsigned int)inputEndpointViews[v6].endpointType;
      v26 = inputEndpointViews[v6].endpointType;
      interleavedBuffer = inputEndpointViews[v6].interleavedBuffer;
      _incoming = (float *)interleavedBuffer;
      if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 505, ASSERT_TYPE_ASSERT, "(interleavedBuffer != nullptr)", (const char *)&queryFormat, "interleavedBuffer != nullptr") )
        __debugbreak();
      if ( v1->inputEndpointViews[v6].numChannels != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 506, ASSERT_TYPE_ASSERT, "(data->inputEndpointViews[i].numChannels == 1)", (const char *)&queryFormat, "data->inputEndpointViews[i].numChannels == 1") )
        __debugbreak();
      if ( (unsigned int)endpointType < 2 )
      {
        v10 = s_userToControllerIndexLookup[endpointType];
        if ( (_DWORD)v10 != -1 )
        {
          VoiceEncode_SubmitLocalVoiceData(v10, interleavedBuffer, 0x100u);
          if ( snd_libad_loopback_enable->current.enabled )
          {
            if ( (unsigned int)v10 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 616, ASSERT_TYPE_ASSERT, "(i<SND_VOICE_BUS_COUNT)", (const char *)&queryFormat, "i<SND_VOICE_BUS_COUNT") )
              __debugbreak();
            v11 = &g_sd.voiceBusBuffers[(_DWORD)v10 << 8];
            if ( ((unsigned __int8)v11 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v11) )
              __debugbreak();
            v12 = 0;
            p_outgoing = &_outgoing;
            do
            {
              v14 = &v11[256 * v12];
              if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
                __debugbreak();
              if ( ((unsigned __int8)v11 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
                __debugbreak();
              *p_outgoing = v14;
              ++v12;
              ++p_outgoing;
            }
            while ( v12 < 0x10 );
            v15 = _outgoing;
            v3 = 0;
            v1 = data;
            LODWORD(endpointType) = v26;
            if ( !_outgoing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
              __debugbreak();
            SD_DSP::RawSum<256>(v15, _incoming);
            v6 = i;
          }
        }
        destDevInfo.customEndpointId.value[0] = 0;
        if ( AD_GetDeviceConfig(&destDevInfo, (const AD_InputEndpoints)endpointType) && (_DWORD)v10 != -1 )
          v31[v10] = destDevInfo.isMicEnabled;
      }
      ++v6;
    }
    v16 = 0;
    v17 = (bool *)v31;
    do
      Voice_SetIsMicrophoneAttached(v16++, *v17++);
    while ( v16 < 8 );
    if ( v1->numOutputEndpointViews )
    {
      do
      {
        outputEndpointViews = v1->outputEndpointViews;
        v19 = outputEndpointViews[v3].interleavedBuffer;
        v20 = (unsigned int)(outputEndpointViews[v3].endpointType - 2);
        if ( (unsigned int)v20 <= 1 )
        {
          if ( outputEndpointViews[v3].mixBed != (Mono|Stereo|Quadraphonic) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_output_libad.cpp", 554, ASSERT_TYPE_ASSERT, "(data->outputEndpointViews[i].mixBed == AD_MixBed::Mono)", (const char *)&queryFormat, "data->outputEndpointViews[i].mixBed == AD_MixBed::Mono") )
            __debugbreak();
          v21 = s_userToControllerIndexLookup[v20];
          if ( v21 != -1 )
          {
            if ( v21 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 616, ASSERT_TYPE_ASSERT, "(i<SND_VOICE_BUS_COUNT)", (const char *)&queryFormat, "i<SND_VOICE_BUS_COUNT") )
              __debugbreak();
            v22 = &g_sd.voiceBusBuffers[256 * v21];
            v23 = v19;
            for ( j = 256i64; j; --j )
              *v23++ = *v22++;
          }
        }
        ++v3;
      }
      while ( v3 < v1->numOutputEndpointViews );
    }
    Sys_ProfEndNamedEvent();
  }
}

