/*
==============
AD_MixerPrimingCallback
==============
*/

void __fastcall AD_MixerPrimingCallback(const AD_MixerServiceCallbackData *const data)
{
  ?AD_MixerPrimingCallback@@YAXQEBUAD_MixerServiceCallbackData@@@Z(data);
}

/*
==============
AD_MasterBusMixer_ServiceInputBus
==============
*/

void __fastcall AD_MasterBusMixer_ServiceInputBus(const AD_InputEndpointView *ipView, AD_MasterBusMixerInput *const input, float *scratchBuffer, float *__formal)
{
  ?AD_MasterBusMixer_ServiceInputBus@@YAXPEBUAD_InputEndpointView@@QEAUAD_MasterBusMixerInput@@PEAM2@Z(ipView, input, scratchBuffer, __formal);
}

/*
==============
AD_DisconnectMasterBusMixer
==============
*/

void __fastcall AD_DisconnectMasterBusMixer(AD_MasterBusMixer *mixer)
{
  ?AD_DisconnectMasterBusMixer@@YAXPEAUAD_MasterBusMixer@@@Z(mixer);
}

/*
==============
AD_MasterBusMixer_UpdateOutputEndpointStatus
==============
*/

void __fastcall AD_MasterBusMixer_UpdateOutputEndpointStatus(AD_MasterBusMixer *const mixer, const AD_OutputEndpoints type, const AD_MasterBusMixerDeviceState newState)
{
  ?AD_MasterBusMixer_UpdateOutputEndpointStatus@@YAXQEAUAD_MasterBusMixer@@W4AD_OutputEndpoints@@W4AD_MasterBusMixerDeviceState@@@Z(mixer, type, newState);
}

/*
==============
AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort
==============
*/

unsigned int __fastcall AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort(AD_MasterBusMixer *const mixer, const AD_OutputEndpointView *opView)
{
  return ?AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort@@YAIQEAUAD_MasterBusMixer@@PEBUAD_OutputEndpointView@@@Z(mixer, opView);
}

/*
==============
AD_MasterBusMixer_ServiceOutputEndpoint
==============
*/

bool __fastcall AD_MasterBusMixer_ServiceOutputEndpoint(AD_MasterBusMixer *const mixer, const AD_OutputEndpointView *opView)
{
  return ?AD_MasterBusMixer_ServiceOutputEndpoint@@YA_NQEAUAD_MasterBusMixer@@PEBUAD_OutputEndpointView@@@Z(mixer, opView);
}

/*
==============
AD_ConnectMasterBusMixer
==============
*/

void __fastcall AD_ConnectMasterBusMixer(AD_MasterBusMixer *mixer, void (__fastcall *mixerCallback)(const AD_MixerServiceCallbackData *const), void (__fastcall *voiceChatCallback)(const AD_MixerServiceCallbackData *const), const AD_Thread::CPUAffinity threadAffinity)
{
  ?AD_ConnectMasterBusMixer@@YAXPEAUAD_MasterBusMixer@@P6AXQEBUAD_MixerServiceCallbackData@@@Z2W4CPUAffinity@AD_Thread@@@Z(mixer, mixerCallback, voiceChatCallback, threadAffinity);
}

/*
==============
AD_GetStaticMixerInstance
==============
*/

AD_MasterBusMixer *__fastcall AD_GetStaticMixerInstance()
{
  return ?AD_GetStaticMixerInstance@@YAPEAUAD_MasterBusMixer@@XZ();
}

/*
==============
AD_DestroyMasterBusMixer
==============
*/

void __fastcall AD_DestroyMasterBusMixer(AD_MasterBusMixer *mixer)
{
  ?AD_DestroyMasterBusMixer@@YAXPEAUAD_MasterBusMixer@@@Z(mixer);
}

/*
==============
AD_MasterBusMixer_RequestMix
==============
*/

void __fastcall AD_MasterBusMixer_RequestMix(AD_MasterBusMixer *const mixer)
{
  ?AD_MasterBusMixer_RequestMix@@YAXQEAUAD_MasterBusMixer@@@Z(mixer);
}

/*
==============
AD_PrimeMasterBusMixer
==============
*/

void __fastcall AD_PrimeMasterBusMixer(AD_MasterBusMixer *mixer)
{
  ?AD_PrimeMasterBusMixer@@YAXPEAUAD_MasterBusMixer@@@Z(mixer);
}

/*
==============
AD_InitMasterBusMixer
==============
*/

void __fastcall AD_InitMasterBusMixer(const AD_BK_Options *const options, AD_MasterBusMixer *mixer)
{
  ?AD_InitMasterBusMixer@@YAXQEBUAD_BK_Options@@PEAUAD_MasterBusMixer@@@Z(options, mixer);
}

/*
==============
AD_MasterBusMixer_UpdateInputEndpointStatus
==============
*/

void __fastcall AD_MasterBusMixer_UpdateInputEndpointStatus(AD_MasterBusMixer *const mixer, const AD_InputEndpoints type, const AD_MasterBusMixerDeviceState newState)
{
  ?AD_MasterBusMixer_UpdateInputEndpointStatus@@YAXQEAUAD_MasterBusMixer@@W4AD_InputEndpoints@@W4AD_MasterBusMixerDeviceState@@@Z(mixer, type, newState);
}

/*
==============
AD_MasterBusMixer_ServiceOutputBus_BestEffort<AD_OutputEndpointView,AD_MasterBusMixerOutput>
==============
*/

unsigned int __fastcall AD_MasterBusMixer_ServiceOutputBus_BestEffort<AD_OutputEndpointView,AD_MasterBusMixerOutput>(const AD_OutputEndpointView *opView, AD_MasterBusMixerOutput *const output, float *scratchBuffer, float *remixScratchBuffer)
{
  return ??$AD_MasterBusMixer_ServiceOutputBus_BestEffort@UAD_OutputEndpointView@@UAD_MasterBusMixerOutput@@@@YAIPEBUAD_OutputEndpointView@@QEAUAD_MasterBusMixerOutput@@PEAM2@Z(opView, output, scratchBuffer, remixScratchBuffer);
}

/*
==============
AD_MasterBusMixer_ServiceInputEndpoint
==============
*/

void __fastcall AD_MasterBusMixer_ServiceInputEndpoint(AD_MasterBusMixer *const mixer, const AD_InputEndpointView *ipView)
{
  ?AD_MasterBusMixer_ServiceInputEndpoint@@YAXQEAUAD_MasterBusMixer@@PEBUAD_InputEndpointView@@@Z(mixer, ipView);
}

/*
==============
AD_MasterBusMixer_ServiceOutputBus<AD_OutputEndpointView,AD_MasterBusMixerOutput>
==============
*/

bool __fastcall AD_MasterBusMixer_ServiceOutputBus<AD_OutputEndpointView,AD_MasterBusMixerOutput>(const AD_OutputEndpointView *opView, AD_MasterBusMixerOutput *const output, float *scratchBuffer, float *remixScratchBuffer)
{
  return ??$AD_MasterBusMixer_ServiceOutputBus@UAD_OutputEndpointView@@UAD_MasterBusMixerOutput@@@@YA_NPEBUAD_OutputEndpointView@@QEAUAD_MasterBusMixerOutput@@PEAM2@Z(opView, output, scratchBuffer, remixScratchBuffer);
}

/*
==============
AD_MasterBusMixer_ServiceOutputBus<AD_OutputEndpointView,AD_MasterBusMixerOutput>
==============
*/
char AD_MasterBusMixer_ServiceOutputBus<AD_OutputEndpointView,AD_MasterBusMixerOutput>(const AD_OutputEndpointView *opView, AD_MasterBusMixerOutput *const output, float *scratchBuffer, float *remixScratchBuffer)
{
  AD_MixBed mixBed; 
  unsigned int v8; 
  unsigned int FramesForDest; 
  AD_MixBed v10; 
  AD_MixBed_Channel_Count v11; 

  mixBed = opView->mixBed;
  v8 = AD_MixBedToChannelCount((const AD_MixBed)opView->mixBed);
  if ( output->currentState != Inactive )
    goto LABEL_15;
  FramesForDest = AD_InterleavedFrameInterpolator<16>::GetFramesForDest(&output->interpolator, 0xBB80u, opView->rate, opView->numFrames);
  if ( !FramesForDest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 784, ASSERT_TYPE_ASSERT, "framesNeeded > 0", "framesNeeded > 0") )
    __debugbreak();
  v10 = output->mixBed;
  v11 = AD_MixBedToChannelCount(v10);
  if ( FramesForDest <= ((unsigned int)output->ringBuffer.m_dataAvail >> 2) / v11 )
  {
    if ( FramesForDest > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 792, ASSERT_TYPE_ASSERT, "framesNeeded <= AD_MixerBufferFrames", "framesNeeded <= AD_MixerBufferFrames") )
      __debugbreak();
    if ( opView->numFrames > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 793, ASSERT_TYPE_ASSERT, "opView->numFrames <= AD_MixerBufferFrames", "opView->numFrames <= AD_MixerBufferFrames") )
      __debugbreak();
    AD_StaticSampleRingBuffer<32768,32>::Read(&output->ringBuffer, scratchBuffer, FramesForDest * v11);
    if ( v10 != mixBed )
    {
      AD_ConvertMixBedFrames(v10, mixBed, FramesForDest, scratchBuffer, remixScratchBuffer);
      scratchBuffer = remixScratchBuffer;
    }
    AD_InterleavedFrameInterpolator<16>::ResampleFrames(&output->interpolator, v8, scratchBuffer, FramesForDest, opView->interleavedBuffer, opView->numFrames, 0xBB80u, opView->rate);
    return 1;
  }
  else
  {
LABEL_15:
    memset_0(opView->interleavedBuffer, 0, 4 * v8 * opView->numFrames);
    return 0;
  }
}

/*
==============
AD_MasterBusMixer_ServiceOutputBus_BestEffort<AD_OutputEndpointView,AD_MasterBusMixerOutput>
==============
*/
__int64 AD_MasterBusMixer_ServiceOutputBus_BestEffort<AD_OutputEndpointView,AD_MasterBusMixerOutput>(const AD_OutputEndpointView *opView, AD_MasterBusMixerOutput *const output, float *scratchBuffer, float *remixScratchBuffer)
{
  AD_MixBed mixBed; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int FramesForDest; 
  AD_InterleavedFrameInterpolator<16> *p_interpolator; 
  unsigned int numDestFrames; 
  unsigned int numFrames; 
  AD_MixBed v14; 
  unsigned int numChannels; 
  unsigned int numChannelsa; 

  if ( output->currentState != Inactive )
    return 0i64;
  mixBed = output->mixBed;
  numChannels = AD_MixBedToChannelCount(mixBed);
  v8 = ((unsigned int)output->ringBuffer.m_dataAvail >> 2) / numChannels;
  v9 = v8;
  if ( !v8 )
    return 0i64;
  FramesForDest = ((unsigned int)output->ringBuffer.m_dataAvail >> 2) / numChannels;
  p_interpolator = &output->interpolator;
  numDestFrames = AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(&output->interpolator, v8, 0xBB80u, opView->rate);
  numFrames = opView->numFrames;
  if ( numDestFrames > numFrames )
  {
    numDestFrames = opView->numFrames;
    FramesForDest = AD_InterleavedFrameInterpolator<16>::GetFramesForDest(&output->interpolator, 0xBB80u, opView->rate, numFrames);
  }
  if ( numDestFrames > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 842, ASSERT_TYPE_ASSERT, "framesProduced <= AD_MixerBufferFrames", "framesProduced <= AD_MixerBufferFrames") )
    __debugbreak();
  if ( FramesForDest > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 843, ASSERT_TYPE_ASSERT, "framesNeeded <= framesAvail", "framesNeeded <= framesAvail") )
    __debugbreak();
  AD_StaticSampleRingBuffer<32768,32>::Read(&output->ringBuffer, scratchBuffer, numChannels * FramesForDest);
  v14 = opView->mixBed;
  numChannelsa = AD_MixBedToChannelCount((const AD_MixBed)opView->mixBed);
  if ( mixBed != v14 )
  {
    AD_ConvertMixBedFrames(mixBed, v14, FramesForDest, scratchBuffer, remixScratchBuffer);
    scratchBuffer = remixScratchBuffer;
  }
  AD_InterleavedFrameInterpolator<16>::ResampleFrames(p_interpolator, numChannelsa, scratchBuffer, FramesForDest, opView->interleavedBuffer, numDestFrames, 0xBB80u, opView->rate);
  return numDestFrames;
}

/*
==============
AD_ConnectMasterBusMixer
==============
*/
void AD_ConnectMasterBusMixer(AD_MasterBusMixer *mixer, void (*mixerCallback)(const AD_MixerServiceCallbackData *const), void (*voiceChatCallback)(const AD_MixerServiceCallbackData *const), const AD_Thread::CPUAffinity threadAffinity)
{
  AD_MasterBusMixerDeviceState *p_currentState; 
  unsigned int v9; 
  bool v10; 
  unsigned int v11; 
  AD_MasterBusMixerDeviceState *v12; 
  bool v13; 
  AD_ThreadContext *inited; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 689, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !mixerCallback && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 690, ASSERT_TYPE_ASSERT, "mixerCallback != nullptr", "mixerCallback != nullptr") )
    __debugbreak();
  if ( !voiceChatCallback && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 691, ASSERT_TYPE_ASSERT, "voiceChatCallback != nullptr", "voiceChatCallback != nullptr") )
    __debugbreak();
  p_currentState = &mixer->outputs.m_elements[0].currentState;
  v9 = 0;
  v10 = 1;
  do
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *((_DWORD *)p_currentState - 1) = 0;
    if ( v9 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *p_currentState = Reserved;
    ++v9;
    p_currentState += 37008;
    v10 = v9 < 4;
  }
  while ( v9 != 4 );
  v11 = 0;
  v12 = &mixer->inputs.m_elements[0].currentState;
  v13 = 1;
  do
  {
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *((_DWORD *)v12 - 1) = 0;
    if ( v11 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *v12 = Reserved;
    ++v11;
    v12 += 33168;
    v13 = v11 < 2;
  }
  while ( v11 != 2 );
  mixer->mixerCallback = mixerCallback;
  mixer->voiceChatCallback = voiceChatCallback;
  inited = AD_InitThread(Mono, mixer, 0, AD_MixerThread, AD_MixerThreadTerminator, (const AD_Thread::Priority)4, threadAffinity, (const AD_ThreadOptions)1);
  mixer->mixerThread = inited;
  if ( inited )
    AD_SpawnThread(inited);
}

/*
==============
AD_DestroyMasterBusMixer
==============
*/
void AD_DestroyMasterBusMixer(AD_MasterBusMixer *mixer)
{
  AD_Event *event; 
  float *p_x2; 
  unsigned int i; 
  float *v5; 
  unsigned int j; 

  event = mixer->mixerThreadSignals.event;
  if ( event )
  {
    mixer->mixerThreadSignals.event = NULL;
    AD_DestroyEvent(event);
  }
  p_x2 = &mixer->outputs.m_elements[0].interpolator.resampleFilterState[1].x2;
  for ( i = 0; i < 4; ++i )
  {
    *((_DWORD *)p_x2 - 32838) = 0x4000;
    *(_QWORD *)(p_x2 - 53) = 0i64;
    AD_InterlockedExchange((volatile int *)p_x2 - 51, 0);
    *(_QWORD *)(p_x2 - 45) = 0i64;
    *((_QWORD *)p_x2 - 6) = 0i64;
    *((_QWORD *)p_x2 - 14) = 0i64;
    *(_QWORD *)(p_x2 - 5) = 0i64;
    *(_QWORD *)(p_x2 - 3) = 0i64;
    *(_QWORD *)(p_x2 - 43) = 0i64;
    *(_QWORD *)(p_x2 - 1) = 0i64;
    *(_QWORD *)(p_x2 + 1) = 0i64;
    *((_QWORD *)p_x2 - 13) = 0i64;
    *(_QWORD *)(p_x2 + 3) = 0i64;
    *(_QWORD *)(p_x2 + 5) = 0i64;
    *(_QWORD *)(p_x2 - 41) = 0i64;
    *(_QWORD *)(p_x2 + 7) = 0i64;
    *(_QWORD *)(p_x2 + 9) = 0i64;
    *((_QWORD *)p_x2 - 12) = 0i64;
    *(_QWORD *)(p_x2 + 11) = 0i64;
    *(_QWORD *)(p_x2 + 13) = 0i64;
    *(_QWORD *)(p_x2 - 39) = 0i64;
    *(_QWORD *)(p_x2 + 15) = 0i64;
    *(_QWORD *)(p_x2 + 17) = 0i64;
    *((_QWORD *)p_x2 - 11) = 0i64;
    *(_QWORD *)(p_x2 + 19) = 0i64;
    *(_QWORD *)(p_x2 + 21) = 0i64;
    *(_QWORD *)(p_x2 - 37) = 0i64;
    *(_QWORD *)(p_x2 + 23) = 0i64;
    *(_QWORD *)(p_x2 + 25) = 0i64;
    *((_QWORD *)p_x2 - 10) = 0i64;
    *(_QWORD *)(p_x2 + 27) = 0i64;
    *(_QWORD *)(p_x2 + 29) = 0i64;
    *(_QWORD *)(p_x2 - 35) = 0i64;
    *(_QWORD *)(p_x2 + 31) = 0i64;
    *(_QWORD *)(p_x2 + 33) = 0i64;
    *((_QWORD *)p_x2 - 9) = 0i64;
    *(_QWORD *)(p_x2 + 35) = 0i64;
    *(_QWORD *)(p_x2 + 37) = 0i64;
    *(_QWORD *)(p_x2 - 33) = 0i64;
    *(_QWORD *)(p_x2 + 39) = 0i64;
    *(_QWORD *)(p_x2 + 41) = 0i64;
    *((_QWORD *)p_x2 - 8) = 0i64;
    *(_QWORD *)(p_x2 + 43) = 0i64;
    *(_QWORD *)(p_x2 + 45) = 0i64;
    *(_QWORD *)(p_x2 - 31) = 0i64;
    *(_QWORD *)(p_x2 + 47) = 0i64;
    *(_QWORD *)(p_x2 + 49) = 0i64;
    *((_QWORD *)p_x2 - 7) = 0i64;
    *(_QWORD *)(p_x2 + 51) = 0i64;
    *(_QWORD *)(p_x2 + 53) = 0i64;
    *(p_x2 - 29) = 0.0;
    *(_QWORD *)(p_x2 + 55) = 0i64;
    *(_QWORD *)(p_x2 + 57) = 0i64;
    p_x2[59] = 0.0;
    p_x2[60] = 0.0;
    p_x2 += 37008;
  }
  v5 = &mixer->inputs.m_elements[0].interpolator.resampleFilterState[1].x2;
  for ( j = 0; j < 2; ++j )
  {
    *((_DWORD *)v5 - 32838) = 1024;
    *(_QWORD *)(v5 - 53) = 0i64;
    AD_InterlockedExchange((volatile int *)v5 - 51, 0);
    *(_QWORD *)(v5 - 45) = 0i64;
    *((_QWORD *)v5 - 6) = 0i64;
    *((_QWORD *)v5 - 14) = 0i64;
    *(_QWORD *)(v5 - 5) = 0i64;
    *(_QWORD *)(v5 - 3) = 0i64;
    *(_QWORD *)(v5 - 43) = 0i64;
    *(_QWORD *)(v5 - 1) = 0i64;
    *(_QWORD *)(v5 + 1) = 0i64;
    *((_QWORD *)v5 - 13) = 0i64;
    *(_QWORD *)(v5 + 3) = 0i64;
    *(_QWORD *)(v5 + 5) = 0i64;
    *(_QWORD *)(v5 - 41) = 0i64;
    *(_QWORD *)(v5 + 7) = 0i64;
    *(_QWORD *)(v5 + 9) = 0i64;
    *((_QWORD *)v5 - 12) = 0i64;
    *(_QWORD *)(v5 + 11) = 0i64;
    *(_QWORD *)(v5 + 13) = 0i64;
    *(_QWORD *)(v5 - 39) = 0i64;
    *(_QWORD *)(v5 + 15) = 0i64;
    *(_QWORD *)(v5 + 17) = 0i64;
    *((_QWORD *)v5 - 11) = 0i64;
    *(_QWORD *)(v5 + 19) = 0i64;
    *(_QWORD *)(v5 + 21) = 0i64;
    *(_QWORD *)(v5 - 37) = 0i64;
    *(_QWORD *)(v5 + 23) = 0i64;
    *(_QWORD *)(v5 + 25) = 0i64;
    *((_QWORD *)v5 - 10) = 0i64;
    *(_QWORD *)(v5 + 27) = 0i64;
    *(_QWORD *)(v5 + 29) = 0i64;
    *(_QWORD *)(v5 - 35) = 0i64;
    *(_QWORD *)(v5 + 31) = 0i64;
    *(_QWORD *)(v5 + 33) = 0i64;
    *((_QWORD *)v5 - 9) = 0i64;
    *(_QWORD *)(v5 + 35) = 0i64;
    *(_QWORD *)(v5 + 37) = 0i64;
    *(_QWORD *)(v5 - 33) = 0i64;
    *(_QWORD *)(v5 + 39) = 0i64;
    *(_QWORD *)(v5 + 41) = 0i64;
    *((_QWORD *)v5 - 8) = 0i64;
    *(_QWORD *)(v5 + 43) = 0i64;
    *(_QWORD *)(v5 + 45) = 0i64;
    *(_QWORD *)(v5 - 31) = 0i64;
    *(_QWORD *)(v5 + 47) = 0i64;
    *(_QWORD *)(v5 + 49) = 0i64;
    *((_QWORD *)v5 - 7) = 0i64;
    *(_QWORD *)(v5 + 51) = 0i64;
    *(_QWORD *)(v5 + 53) = 0i64;
    *(v5 - 29) = 0.0;
    *(_QWORD *)(v5 + 55) = 0i64;
    *(_QWORD *)(v5 + 57) = 0i64;
    v5[59] = 0.0;
    v5[60] = 0.0;
    v5 += 33168;
  }
}

/*
==============
AD_DisconnectMasterBusMixer
==============
*/
void AD_DisconnectMasterBusMixer(AD_MasterBusMixer *mixer)
{
  AD_ThreadContext *mixerThread; 

  mixerThread = mixer->mixerThread;
  if ( mixer->mixerThread )
  {
    AD_TerminateThread(mixer->mixerThread);
    AD_CleanupThread(mixerThread);
    mixer->mixerThread = NULL;
  }
}

/*
==============
AD_GetStaticMixerInstance
==============
*/
AD_MasterBusMixer *AD_GetStaticMixerInstance()
{
  return &s_adMixer;
}

/*
==============
AD_InitMasterBusMixer
==============
*/
void AD_InitMasterBusMixer(const AD_BK_Options *const options, AD_MasterBusMixer *mixer)
{
  AD_MixBed *p_mixBed; 
  unsigned int v5; 
  AD_MixBed *outputMixBedConfig; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  unsigned int *p_m_size; 
  AD_Event *Event; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 609, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  AD_DestroyMasterBusMixer(mixer);
  p_mixBed = &mixer->outputs.m_elements[0].mixBed;
  v5 = 0;
  outputMixBedConfig = options->outputMixBedConfig;
  do
  {
    *p_mixBed = *outputMixBedConfig;
    switch ( *p_mixBed )
    {
      case 0:
        v7 = 16;
        break;
      case 1:
        v7 = 12;
        break;
      case 2:
        v7 = 10;
        break;
      case 3:
        v7 = 8;
        break;
      case 4:
        v7 = 6;
        break;
      case 5:
        v7 = 4;
        break;
      case 6:
        v7 = 2;
        break;
      case 7:
        v7 = 1;
        break;
      default:
        v7 = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 616, ASSERT_TYPE_ASSERT, "channelCount <= AD_MixerBufferMaxChannels", "channelCount <= AD_MixerBufferMaxChannels") )
          __debugbreak();
        break;
    }
    if ( (unsigned int)(v7 << 8) > 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 29, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
      __debugbreak();
    v8 = v7 << 10;
    if ( (unsigned int)(v7 << 10) > 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 685, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
      __debugbreak();
    *((_DWORD *)p_mixBed - 32792) = v8;
    memset_0(p_mixBed - 36888, 0, v8);
    v9 = v7 << 11;
    if ( v9 > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 116, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
      __debugbreak();
    v10 = 4 * v9;
    if ( 4 * v9 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 371, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
      __debugbreak();
    *(_QWORD *)(p_mixBed - 7) = 0i64;
    AD_InterlockedExchange((volatile int *)p_mixBed - 5, 0);
    *((_DWORD *)p_mixBed - 8) = v10;
    memset_0(p_mixBed - 32776, 0, v10);
    ++v5;
    p_mixBed += 37008;
    ++outputMixBedConfig;
  }
  while ( v5 < 4 );
  v11 = 0;
  v12 = 1;
  p_m_size = &mixer->inputs.m_elements[0].tempBuffer.m_size;
  do
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    p_m_size[32792] = 1;
    if ( v11 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *p_m_size = 1024;
    memset_0(p_m_size - 256, 0, 0x400ui64);
    if ( v11 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *(_QWORD *)(p_m_size + 32785) = 0i64;
    AD_InterlockedExchange((volatile int *)p_m_size + 32787, 0);
    p_m_size[32784] = 0x20000;
    memset_0(p_m_size + 16, 0, 0x20000ui64);
    if ( v11 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    *((_BYTE *)p_m_size + 131596) = 0;
    ++v11;
    p_m_size += 33168;
    v12 = v11 < 2;
  }
  while ( v11 != 2 );
  Event = AD_CreateEvent(4u, 0i64, 0);
  mixer->mixerThreadSignals.event = Event;
  if ( !Event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 123, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  mixer->mixerThread = NULL;
  mixer->mixerCallback = NULL;
  mixer->voiceChatCallback = NULL;
}

/*
==============
AD_MasterBusMixer_RequestMix
==============
*/
void AD_MasterBusMixer_RequestMix(AD_MasterBusMixer *const mixer)
{
  unsigned int v2; 
  AD_MasterBusMixerDeviceState *p_pendingState; 
  unsigned int v4; 
  char v5; 
  bool v6; 
  AD_MasterBusMixerDeviceState *v7; 
  bool v8; 

  if ( !mixer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 1036, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 744, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
  }
  v2 = 0;
  p_pendingState = &mixer->outputs.m_elements[0].pendingState;
  v4 = 0;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
    }
    ++v4;
    v5 |= *p_pendingState != *((_DWORD *)p_pendingState + 1);
    p_pendingState += 37008;
    v6 = v4 < 4;
  }
  while ( v4 != 4 );
  v7 = &mixer->inputs.m_elements[0].pendingState;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
    }
    ++v2;
    v5 |= *v7 != *((_DWORD *)v7 + 1);
    v7 += 33168;
    v8 = v2 < 2;
  }
  while ( v2 != 2 );
  if ( v5 )
  {
    if ( !mixer->mixerThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(mixer->mixerThreadSignals.event, 8ui64);
  }
  if ( !mixer->mixerThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(mixer->mixerThreadSignals.event, 2ui64);
}

/*
==============
AD_MasterBusMixer_ServiceInputBus
==============
*/
void AD_MasterBusMixer_ServiceInputBus(const AD_InputEndpointView *ipView, AD_MasterBusMixerInput *const input, float *scratchBuffer, float *__formal)
{
  unsigned int numFrames; 
  unsigned int numDestFrames; 
  unsigned int v9; 
  char *fmt; 

  if ( ipView->numChannels != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 871, ASSERT_TYPE_ASSERT, "ipView->numChannels == AD_MixerBufferMaxInputChannels", "ipView->numChannels == AD_MixerBufferMaxInputChannels") )
    __debugbreak();
  if ( input->currentState == Inactive )
  {
    numFrames = ipView->numFrames;
    numDestFrames = AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(&input->interpolator, numFrames, ipView->rate, 0xBB80u);
    v9 = numDestFrames;
    if ( (input->ringBuffer.m_size - input->ringBuffer.m_dataAvail) >> 2 < numDestFrames )
    {
      LODWORD(fmt) = ipView->type;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", "898", Started, "Input overflow for endpoint %d! Free %d, have %d", fmt, (input->ringBuffer.m_size - input->ringBuffer.m_dataAvail) >> 2, numDestFrames);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
      input->overflowed = 1;
    }
    else
    {
      AD_InterleavedFrameInterpolator<16>::ResampleFrames(&input->interpolator, ipView->numChannels, ipView->interleavedBuffer, numFrames, scratchBuffer, numDestFrames, ipView->rate, 0xBB80u);
      AD_StaticSampleRingBuffer<32768,32>::Write(&input->ringBuffer, scratchBuffer, v9);
    }
  }
}

/*
==============
AD_MasterBusMixer_ServiceInputEndpoint
==============
*/
void AD_MasterBusMixer_ServiceInputEndpoint(AD_MasterBusMixer *const mixer, const AD_InputEndpointView *ipView)
{
  __int64 type; 
  __int64 v5; 
  unsigned int numFrames; 
  unsigned int numDestFrames; 
  unsigned int v8; 
  char *fmt; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 980, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !ipView && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 981, ASSERT_TYPE_ASSERT, "ipView != nullptr", "ipView != nullptr") )
    __debugbreak();
  type = (unsigned int)ipView->type;
  if ( (unsigned int)type >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v5 = type;
  if ( ipView->numChannels != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 871, ASSERT_TYPE_ASSERT, "ipView->numChannels == AD_MixerBufferMaxInputChannels", "ipView->numChannels == AD_MixerBufferMaxInputChannels") )
    __debugbreak();
  if ( mixer->inputs.m_elements[v5].currentState == Inactive )
  {
    numFrames = ipView->numFrames;
    numDestFrames = AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(&mixer->inputs.m_elements[v5].interpolator, numFrames, ipView->rate, 0xBB80u);
    v8 = numDestFrames;
    if ( (mixer->inputs.m_elements[v5].ringBuffer.m_size - mixer->inputs.m_elements[v5].ringBuffer.m_dataAvail) >> 2 < numDestFrames )
    {
      LODWORD(fmt) = ipView->type;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", "898", Started, "Input overflow for endpoint %d! Free %d, have %d", fmt, (mixer->inputs.m_elements[v5].ringBuffer.m_size - mixer->inputs.m_elements[v5].ringBuffer.m_dataAvail) >> 2, numDestFrames);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
      mixer->inputs.m_elements[v5].overflowed = 1;
    }
    else
    {
      AD_InterleavedFrameInterpolator<16>::ResampleFrames(&mixer->inputs.m_elements[v5].interpolator, ipView->numChannels, ipView->interleavedBuffer, numFrames, (float *)mixer->mainOutputScratchBuffer.m_buffer, numDestFrames, ipView->rate, 0xBB80u);
      AD_StaticSampleRingBuffer<32768,32>::Write(&mixer->inputs.m_elements[v5].ringBuffer, (const float *)mixer->mainOutputScratchBuffer.m_buffer, v8);
    }
  }
}

/*
==============
AD_MasterBusMixer_ServiceOutputEndpoint
==============
*/
char AD_MasterBusMixer_ServiceOutputEndpoint(AD_MasterBusMixer *const mixer, const AD_OutputEndpointView *opView)
{
  __int64 type; 
  char *m_buffer; 
  AD_MixBed mixBed; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int FramesForDest; 
  AD_MixBed_Channel_Count v10; 
  AD_MixBed incomingMixBed; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 993, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !opView && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 994, ASSERT_TYPE_ASSERT, "opView != nullptr", "opView != nullptr") )
    __debugbreak();
  type = (unsigned int)opView->type;
  m_buffer = mixer->mainOutputScratchBuffer.m_buffer;
  if ( (unsigned int)type >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  mixBed = opView->mixBed;
  v7 = type;
  v8 = AD_MixBedToChannelCount((const AD_MixBed)opView->mixBed);
  if ( mixer->outputs.m_elements[type].currentState != Inactive )
    goto LABEL_24;
  FramesForDest = AD_InterleavedFrameInterpolator<16>::GetFramesForDest(&mixer->outputs.m_elements[v7].interpolator, 0xBB80u, opView->rate, opView->numFrames);
  if ( !FramesForDest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 784, ASSERT_TYPE_ASSERT, "framesNeeded > 0", "framesNeeded > 0") )
    __debugbreak();
  incomingMixBed = mixer->outputs.m_elements[v7].mixBed;
  v10 = AD_MixBedToChannelCount(incomingMixBed);
  if ( FramesForDest <= ((unsigned int)mixer->outputs.m_elements[v7].ringBuffer.m_dataAvail >> 2) / v10 )
  {
    if ( FramesForDest > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 792, ASSERT_TYPE_ASSERT, "framesNeeded <= AD_MixerBufferFrames", "framesNeeded <= AD_MixerBufferFrames") )
      __debugbreak();
    if ( opView->numFrames > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 793, ASSERT_TYPE_ASSERT, "opView->numFrames <= AD_MixerBufferFrames", "opView->numFrames <= AD_MixerBufferFrames") )
      __debugbreak();
    AD_StaticSampleRingBuffer<32768,32>::Read(&mixer->outputs.m_elements[v7].ringBuffer, (float *)mixer->mainOutputScratchBuffer.m_buffer, FramesForDest * v10);
    if ( incomingMixBed != mixBed )
    {
      AD_ConvertMixBedFrames(incomingMixBed, mixBed, FramesForDest, (const float *const)m_buffer, (float *const)mixer->mainOutputRemixScratchBuffer.m_buffer);
      m_buffer = mixer->mainOutputRemixScratchBuffer.m_buffer;
    }
    AD_InterleavedFrameInterpolator<16>::ResampleFrames(&mixer->outputs.m_elements[v7].interpolator, v8, (const float *)m_buffer, FramesForDest, opView->interleavedBuffer, opView->numFrames, 0xBB80u, opView->rate);
    return 1;
  }
  else
  {
LABEL_24:
    memset_0(opView->interleavedBuffer, 0, 4 * v8 * opView->numFrames);
    return 0;
  }
}

/*
==============
AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort
==============
*/
__int64 AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort(AD_MasterBusMixer *const mixer, const AD_OutputEndpointView *opView)
{
  __int64 type; 
  char *m_buffer; 
  __int64 v6; 
  AD_MixBed mixBed; 
  __int64 result; 
  unsigned int v9; 
  unsigned int FramesForDest; 
  unsigned int numDestFrames; 
  unsigned int numFrames; 
  AD_MixBed v13; 
  unsigned int v14; 
  AD_MixBed_Channel_Count v15; 
  float *outgoingBuffer; 
  AD_InterleavedFrameInterpolator<16> *p_interpolator; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 1005, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !opView && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 1006, ASSERT_TYPE_ASSERT, "opView != nullptr", "opView != nullptr") )
    __debugbreak();
  type = (unsigned int)opView->type;
  outgoingBuffer = (float *)mixer->mainOutputRemixScratchBuffer.m_buffer;
  m_buffer = mixer->mainOutputScratchBuffer.m_buffer;
  if ( (unsigned int)type >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v6 = type;
  if ( mixer->outputs.m_elements[v6].currentState != Inactive )
    return 0i64;
  mixBed = mixer->outputs.m_elements[v6].mixBed;
  v15 = AD_MixBedToChannelCount(mixBed);
  result = ((unsigned int)mixer->outputs.m_elements[v6].ringBuffer.m_dataAvail >> 2) / v15;
  v9 = result;
  if ( (_DWORD)result )
  {
    p_interpolator = &mixer->outputs.m_elements[v6].interpolator;
    FramesForDest = ((unsigned int)mixer->outputs.m_elements[v6].ringBuffer.m_dataAvail >> 2) / v15;
    numDestFrames = AD_InterleavedFrameInterpolator<16>::GetFramesForSrc(p_interpolator, result, 0xBB80u, opView->rate);
    numFrames = opView->numFrames;
    if ( numDestFrames > numFrames )
    {
      numDestFrames = opView->numFrames;
      FramesForDest = AD_InterleavedFrameInterpolator<16>::GetFramesForDest(&mixer->outputs.m_elements[v6].interpolator, 0xBB80u, opView->rate, numFrames);
    }
    if ( numDestFrames > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 842, ASSERT_TYPE_ASSERT, "framesProduced <= AD_MixerBufferFrames", "framesProduced <= AD_MixerBufferFrames") )
      __debugbreak();
    if ( FramesForDest > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 843, ASSERT_TYPE_ASSERT, "framesNeeded <= framesAvail", "framesNeeded <= framesAvail") )
      __debugbreak();
    AD_StaticSampleRingBuffer<32768,32>::Read(&mixer->outputs.m_elements[v6].ringBuffer, (float *)mixer->mainOutputScratchBuffer.m_buffer, v15 * FramesForDest);
    v13 = opView->mixBed;
    v14 = AD_MixBedToChannelCount((const AD_MixBed)opView->mixBed);
    if ( mixBed != v13 )
    {
      AD_ConvertMixBedFrames(mixBed, v13, FramesForDest, (const float *const)m_buffer, outgoingBuffer);
      m_buffer = (char *)outgoingBuffer;
    }
    AD_InterleavedFrameInterpolator<16>::ResampleFrames(p_interpolator, v14, (const float *)m_buffer, FramesForDest, opView->interleavedBuffer, numDestFrames, 0xBB80u, opView->rate);
    return numDestFrames;
  }
  return result;
}

/*
==============
AD_MasterBusMixer_UpdateInputEndpointStatus
==============
*/
void AD_MasterBusMixer_UpdateInputEndpointStatus(AD_MasterBusMixer *const mixer, const AD_InputEndpoints type, const AD_MasterBusMixerDeviceState newState)
{
  __int64 v3; 
  __int64 v6; 

  v3 = (unsigned int)type;
  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 909, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v6 = v3;
  if ( mixer->inputs.m_elements[v6].pendingState != newState )
  {
    AD_InterleavedFrameInterpolator<16>::Reset(&mixer->inputs.m_elements[v6].interpolator);
    mixer->inputs.m_elements[v6].pendingState = newState;
  }
}

/*
==============
AD_MasterBusMixer_UpdateOutputEndpointStatus
==============
*/
void AD_MasterBusMixer_UpdateOutputEndpointStatus(AD_MasterBusMixer *const mixer, const AD_OutputEndpoints type, const AD_MasterBusMixerDeviceState newState)
{
  __int64 v3; 
  char *v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 

  v3 = (unsigned int)type;
  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 924, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( (unsigned int)v3 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v6 = (char *)mixer + 148032 * v3;
  if ( *((_DWORD *)v6 + 37017) != newState )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      v10 = *((_DWORD *)v6 + 36907) >> 2;
      if ( v10 )
        AD_StaticSampleRingBuffer<32768,32>::Skip((AD_StaticSampleRingBuffer<32768,32> *)(v6 + 16512), v10);
    }
    else
    {
      v7 = 0;
      v8 = 0i64;
      do
      {
        v9 = (unsigned int)mixer->outputs.m_elements[v8].ringBuffer.m_dataAvail >> 2;
        if ( v9 )
          AD_StaticSampleRingBuffer<32768,32>::Skip(&mixer->outputs.m_elements[v8].ringBuffer, v9);
        ++v7;
        ++v8;
      }
      while ( v7 < 2 );
    }
    *((_DWORD *)v6 + 37017) = newState;
  }
}

/*
==============
AD_MixerPrimingCallback
==============
*/
void AD_MixerPrimingCallback(const AD_MixerServiceCallbackData *const data)
{
  unsigned int numFrames; 
  unsigned int i; 
  AD_MixerOutputEndpointView *v4; 
  int v5; 

  numFrames = data->numFrames;
  for ( i = 0; i < data->numOutputEndpointViews; ++i )
  {
    v4 = &data->outputEndpointViews[i];
    switch ( v4->mixBed )
    {
      case 0:
        v5 = 64;
        break;
      case 1:
        v5 = 48;
        break;
      case 2:
        v5 = 40;
        break;
      case 3:
        v5 = 32;
        break;
      case 4:
        v5 = 24;
        break;
      case 5:
        v5 = 16;
        break;
      case 6:
        v5 = 8;
        break;
      case 7:
        v5 = 4;
        break;
      default:
        v5 = -4;
        break;
    }
    memset_0(v4->interleavedBuffer, 0, v5 * numFrames);
  }
}

/*
==============
AD_MixerThread
==============
*/
void AD_MixerThread(void *const payload, const int arg)
{
  int *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned __int64 v7; 
  AD_EventFlagHelper<enum AD_MixerThreadSignals,0>::EventFlags flags; 
  int v9[4]; 

  if ( !payload )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 38, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 46, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
  }
  do
  {
    LODWORD(flags.flags) = 0;
    if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 54, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
    v9[0] = 1;
    v3 = v9;
    v9[1] = 2;
    v4 = 0i64;
    v9[2] = 3;
    v5 = 3i64;
    do
    {
      v6 = *v3++;
      v4 |= 1i64 << v6;
      --v5;
    }
    while ( v5 );
    flags.flags = v4 & 1;
    if ( (v4 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 580, ASSERT_TYPE_ASSERT, "( defaultFlags & derivedFlags ) == 0ull", "( defaultFlags & derivedFlags ) == 0ull") )
      __debugbreak();
    LODWORD(flags.flags) = 1;
    if ( !*((_QWORD *)payload + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 228, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    v7 = AD_AwaitAnyEventFlags(*((AD_Event **)payload + 3), v4 | 1, 0x19u, 2ui64);
    if ( (v7 & 1) != 0 )
      break;
    flags.flags = v7 & v4;
  }
  while ( AD_MixerThreadUpdate((AD_MasterBusMixer *const)payload, (const AD_EventFlagHelper<enum AD_MixerThreadSignals,0>::EventFlags)&flags) );
}

/*
==============
AD_MixerThreadFillMainCallbackEndpointData
==============
*/
void AD_MixerThreadFillMainCallbackEndpointData(AD_MasterBusMixer *const mixer, AD_MixerServiceCallbackDataBuilder *const cbd)
{
  unsigned int v4; 
  __int64 v5; 
  AD_MixBed mixBed; 
  __int64 m_count; 
  __int64 v8; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 231, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !cbd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 232, ASSERT_TYPE_ASSERT, "cbd != nullptr", "cbd != nullptr") )
    __debugbreak();
  if ( !cbd->numFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 233, ASSERT_TYPE_ASSERT, "cbd->numFrames > 0", "cbd->numFrames > 0") )
    __debugbreak();
  v4 = 0;
  v5 = 0i64;
  do
  {
    if ( v4 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( mixer->outputs.m_elements[v5].currentState == Inactive )
    {
      mixBed = mixer->outputs.m_elements[v5].mixBed;
      if ( ((mixer->outputs.m_elements[v5].ringBuffer.m_size - mixer->outputs.m_elements[v5].ringBuffer.m_dataAvail) >> 2) / AD_MixBedToChannelCount(mixBed) < cbd->numFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 243, ASSERT_TYPE_ASSERT, "( mainOutput->ringBuffer.SamplesFree() / AD_Value( AD_MixBedToChannelCount( incomingMixBed ) ) ) >= cbd->numFrames", "( mainOutput->ringBuffer.SamplesFree() / AD_Value( AD_MixBedToChannelCount( incomingMixBed ) ) ) >= cbd->numFrames") )
        __debugbreak();
      if ( cbd->outputEndpoints.m_count >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 210, ASSERT_TYPE_ASSERT, "m_count < T_COUNT", "m_count < T_COUNT") )
        __debugbreak();
      m_count = cbd->outputEndpoints.m_count;
      cbd->outputEndpoints.m_count = m_count + 1;
      v8 = 2 * (m_count + 1);
      LODWORD((&cbd->outputEndpoints.__vftable)[v8]) = v4;
      (&cbd->outputEndpoints.__vftable)[v8 + 1] = (AD_StackCollection<AD_MixerOutputEndpointView,4,16>_vtbl *)mixer->outputs.m_elements[v5].tempBuffer.m_buffer;
      HIDWORD((&cbd->outputEndpoints.__vftable)[v8]) = mixBed;
    }
    ++v4;
    ++v5;
  }
  while ( v4 != 2 );
}

/*
==============
AD_MixerThreadFillVoiceChatCallbackEndpointData
==============
*/
void AD_MixerThreadFillVoiceChatCallbackEndpointData(AD_MasterBusMixer *const mixer, AD_MixerServiceCallbackDataBuilder *const cbd)
{
  AD_MixerServiceCallbackDataBuilder *v2; 
  unsigned __int32 numFrames; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  AD_MixBed mixBed; 
  __int64 m_count; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  char *m_buffer; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 m_readPos; 
  unsigned int m_size; 
  char *v22; 
  unsigned int v23; 
  size_t v24; 
  char *v25; 
  char *fmt; 
  unsigned __int32 v27; 
  unsigned int v29; 

  v2 = cbd;
  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 299, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 300, ASSERT_TYPE_ASSERT, "cbd != nullptr", "cbd != nullptr") )
    __debugbreak();
  if ( !v2->numFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 301, ASSERT_TYPE_ASSERT, "cbd->numFrames > 0", "cbd->numFrames > 0") )
    __debugbreak();
  numFrames = v2->numFrames;
  v5 = 2;
  v27 = v2->numFrames;
  v6 = 1;
  v7 = 2i64;
  do
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( mixer->outputs.m_elements[v7].currentState == Inactive )
    {
      mixBed = mixer->outputs.m_elements[v7].mixBed;
      if ( ((mixer->outputs.m_elements[v7].ringBuffer.m_size - mixer->outputs.m_elements[v7].ringBuffer.m_dataAvail) >> 2) / AD_MixBedToChannelCount(mixBed) < numFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 313, ASSERT_TYPE_ASSERT, "( mainOutput->ringBuffer.SamplesFree() / AD_Value( AD_MixBedToChannelCount( incomingMixBed ) ) ) >= framesToProduce", "( mainOutput->ringBuffer.SamplesFree() / AD_Value( AD_MixBedToChannelCount( incomingMixBed ) ) ) >= framesToProduce") )
        __debugbreak();
      if ( v2->outputEndpoints.m_count >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 210, ASSERT_TYPE_ASSERT, "m_count < T_COUNT", "m_count < T_COUNT") )
        __debugbreak();
      m_count = v2->outputEndpoints.m_count;
      v2->outputEndpoints.m_count = m_count + 1;
      v10 = 2 * (m_count + 1);
      HIDWORD((&v2->outputEndpoints.__vftable)[v10]) = mixBed;
      LODWORD((&v2->outputEndpoints.__vftable)[v10]) = v5;
      (&v2->outputEndpoints.__vftable)[v10 + 1] = (AD_StackCollection<AD_MixerOutputEndpointView,4,16>_vtbl *)mixer->outputs.m_elements[v7].tempBuffer.m_buffer;
      v2 = cbd;
    }
    ++v5;
    ++v7;
    v6 = v5 < 4;
  }
  while ( v5 != 4 );
  v11 = 0;
  v29 = 0;
  v12 = 0i64;
  v13 = 1;
  do
  {
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( mixer->inputs.m_elements[v12].currentState == Inactive )
    {
      if ( mixer->inputs.m_elements[v12].overflowed )
      {
        v14 = mixer->inputs.m_elements[v12].ringBuffer.m_size >> 3;
        if ( (unsigned int)mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail >> 2 > v14 )
        {
          LODWORD(fmt) = v11;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", "339", Started, "Throwing out input samples for endpoint %d due to buffer overflow", fmt);
          if ( AD_GetLogBreakLevel() == Started )
            __debugbreak();
          v15 = 4 * (((unsigned int)mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail >> 2) - v14);
          if ( mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail < v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 441, ASSERT_TYPE_ASSERT, "BytesAvail() >= dataSize", "BytesAvail() >= dataSize") )
            __debugbreak();
          if ( !mixer->inputs.m_elements[v12].ringBuffer.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 442, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
            __debugbreak();
          mixer->inputs.m_elements[v12].ringBuffer.m_readPos = (v15 + mixer->inputs.m_elements[v12].ringBuffer.m_readPos) % mixer->inputs.m_elements[v12].ringBuffer.m_size;
          AD_InterlockedSubtract(&mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail, v15);
          mixer->inputs.m_elements[v12].overflowed = 0;
        }
      }
      if ( (unsigned int)mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail >> 2 >= numFrames )
      {
        m_buffer = mixer->inputs.m_elements[v12].tempBuffer.m_buffer;
        if ( v2->inputEndpoints.m_count >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 210, ASSERT_TYPE_ASSERT, "m_count < T_COUNT", "m_count < T_COUNT") )
          __debugbreak();
        v17 = v2->inputEndpoints.m_count;
        v18 = 4 * numFrames;
        v2->inputEndpoints.m_count = v17 + 1;
        v19 = 2 * (v17 + 1);
        LODWORD((&v2->inputEndpoints.__vftable)[v19]) = v11;
        (&v2->inputEndpoints.__vftable)[v19 + 1] = (AD_StackCollection<AD_MixerInputEndpointView,2,16>_vtbl *)m_buffer;
        HIDWORD((&v2->inputEndpoints.__vftable)[v19]) = mixer->inputs.m_elements[v12].numChannels;
        if ( !mixer->inputs.m_elements[v12].ringBuffer.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 431, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
          __debugbreak();
        if ( (AD_MasterBusMixer *const)((char *)mixer + v12 * 132672) == (AD_MasterBusMixer *const)-592256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 450, ASSERT_TYPE_ASSERT, "destData", "destData") )
          __debugbreak();
        if ( mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail < v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 451, ASSERT_TYPE_ASSERT, "BytesAvail() >= dataSize", "BytesAvail() >= dataSize") )
          __debugbreak();
        if ( v18 )
        {
          m_readPos = mixer->inputs.m_elements[v12].ringBuffer.m_readPos;
          m_size = mixer->inputs.m_elements[v12].ringBuffer.m_size;
          v22 = &mixer->inputs.m_elements[v12].ringBuffer.m_buffer[m_readPos];
          if ( (unsigned int)m_readPos + v18 <= m_size )
          {
            v24 = v18;
            v25 = mixer->inputs.m_elements[v12].tempBuffer.m_buffer;
          }
          else
          {
            v23 = m_size - m_readPos;
            memcpy_0(mixer->inputs.m_elements[v12].tempBuffer.m_buffer, v22, v23);
            v22 = mixer->inputs.m_elements[v12].ringBuffer.m_buffer;
            v24 = v18 - v23;
            v25 = &m_buffer[v23];
          }
          memcpy_0(v25, v22, v24);
          v11 = v29;
        }
        mixer->inputs.m_elements[v12].ringBuffer.m_readPos = (v18 + mixer->inputs.m_elements[v12].ringBuffer.m_readPos) % mixer->inputs.m_elements[v12].ringBuffer.m_size;
        AD_InterlockedSubtract(&mixer->inputs.m_elements[v12].ringBuffer.m_dataAvail, v18);
        numFrames = v27;
      }
    }
    v2 = cbd;
    ++v11;
    ++v12;
    v29 = v11;
    v13 = v11 < 2;
  }
  while ( v11 != 2 );
}

/*
==============
AD_MixerThreadSubmitEndpointData
==============
*/
void AD_MixerThreadSubmitEndpointData(AD_MasterBusMixer *const mixer, const AD_MixerServiceCallbackData *const cbd)
{
  unsigned int numFrames; 
  unsigned int v5; 
  AD_StaticSampleRingBuffer<32768,32> *p_ringBuffer; 
  AD_MixerOutputEndpointView *v7; 
  __int64 endpointType; 
  int v9; 
  float *interleavedBuffer; 
  char *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  char *v15; 
  unsigned int v16; 
  float *v17; 
  size_t v18; 
  unsigned int v19; 
  AD_StaticSampleRingBuffer<32768,32> *v20; 

  if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 366, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
    __debugbreak();
  if ( !cbd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 367, ASSERT_TYPE_ASSERT, "cbd != nullptr", "cbd != nullptr") )
    __debugbreak();
  if ( !cbd->numFrames && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 368, ASSERT_TYPE_ASSERT, "cbd->numFrames > 0", "cbd->numFrames > 0") )
    __debugbreak();
  numFrames = cbd->numFrames;
  v5 = 0;
  v19 = cbd->numFrames;
  if ( cbd->numOutputEndpointViews )
  {
    p_ringBuffer = &mixer->outputs.m_elements[0].ringBuffer;
    v20 = &mixer->outputs.m_elements[0].ringBuffer;
    do
    {
      v7 = &cbd->outputEndpointViews[v5];
      endpointType = (unsigned int)v7->endpointType;
      if ( (unsigned int)endpointType >= 4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
          __debugbreak();
        p_ringBuffer = v20;
        numFrames = v19;
      }
      switch ( v7->mixBed )
      {
        case 0:
          v9 = 64;
          break;
        case 1:
          v9 = 48;
          break;
        case 2:
          v9 = 40;
          break;
        case 3:
          v9 = 32;
          break;
        case 4:
          v9 = 24;
          break;
        case 5:
          v9 = 16;
          break;
        case 6:
          v9 = 8;
          break;
        case 7:
          v9 = 4;
          break;
        default:
          v9 = -4;
          break;
      }
      interleavedBuffer = v7->interleavedBuffer;
      v11 = (char *)p_ringBuffer + 148032 * endpointType;
      v12 = v9 * numFrames;
      if ( !interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 400, ASSERT_TYPE_ASSERT, "srcData", "srcData") )
        __debugbreak();
      if ( *((_DWORD *)v11 + 32776) - *((_DWORD *)v11 + 32779) < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 401, ASSERT_TYPE_ASSERT, "BytesFree() >= dataSize", "BytesFree() >= dataSize") )
        __debugbreak();
      if ( !*((_DWORD *)v11 + 32776) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 402, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
        __debugbreak();
      if ( v12 )
      {
        v13 = *((unsigned int *)v11 + 32778);
        v14 = *((_DWORD *)v11 + 32776);
        v15 = &v11[v13 + 32];
        if ( (unsigned int)v13 + v12 <= v14 )
        {
          v18 = v12;
          v17 = interleavedBuffer;
        }
        else
        {
          v16 = v14 - v13;
          memcpy_0(v15, interleavedBuffer, v16);
          v17 = (float *)((char *)interleavedBuffer + v16);
          v18 = v12 - v16;
          v15 = v11 + 32;
        }
        memcpy_0(v15, v17, v18);
        *((_DWORD *)v11 + 32778) = (v12 + *((_DWORD *)v11 + 32778)) % *((_DWORD *)v11 + 32776);
        AD_InterlockedAdd((volatile int *)v11 + 32779, v12);
      }
      numFrames = v19;
      p_ringBuffer = v20;
      ++v5;
    }
    while ( v5 < cbd->numOutputEndpointViews );
  }
}

/*
==============
AD_MixerThreadTerminator
==============
*/
void AD_MixerThreadTerminator(void *const payload, const int arg)
{
  if ( !*((_QWORD *)payload + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(*((AD_Event **)payload + 3), 1ui64);
}

/*
==============
AD_MixerThreadUpdate
==============
*/
char AD_MixerThreadUpdate(AD_MasterBusMixer *const mixer, const AD_EventFlagHelper<enum AD_MixerThreadSignals,0>::EventFlags flags)
{
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  AD_MasterBusMixerDeviceState *p_currentState; 
  AD_MasterBusMixerDeviceState *v7; 
  char *v8; 
  unsigned int v9; 
  AD_MasterBusMixerDeviceState *v10; 
  bool v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  void (__fastcall *voiceChatCallback)(const AD_MixerServiceCallbackData *const); 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  bool v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  bool v28; 
  unsigned int v29; 
  int v30; 
  AD_RawTimerValue v31; 
  unsigned __int64 MSecDelta; 
  __int64 v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 *v39; 
  AD_MixerServiceCallbackData v40; 
  int v41; 
  char *v42; 
  int v43; 
  char *v44; 
  int v45; 
  int v46; 
  char *v47; 
  int v48; 
  char *v49; 
  int v50; 
  __int64 v51; 
  AD_MixerServiceCallbackDataBuilder cbd; 
  int v53; 
  void **v54; 
  char v55; 
  int v56; 
  void **v57; 
  char v58; 
  int v59; 
  int v60; 
  void **v61; 
  char v62; 
  int v63; 
  void **v64; 
  char v65; 
  int v66; 

  v51 = -2i64;
  v39 = (__int64 *)flags.flags;
  v3 = *(_QWORD *)flags.flags;
  v4 = 0i64;
  if ( (*(_QWORD *)flags.flags & 8) != 0 )
  {
    v5 = 0;
    p_currentState = &mixer->outputs.m_elements[0].currentState;
    v7 = &mixer->outputs.m_elements[0].currentState;
    do
    {
      if ( v5 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( *v7 != *((_DWORD *)v7 - 1) )
      {
        v8 = (char *)((char *)mixer - (char *)p_currentState);
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147652) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147784) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147720) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147812) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147820) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147660) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147828) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147836) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147728) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147844) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147852) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147668) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147860) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147868) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147736) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147876) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147884) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147676) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147892) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147900) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147744) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147908) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147916) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147684) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147924) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147932) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147752) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147940) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147948) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147692) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147956) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147964) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147760) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147972) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147980) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147700) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147988) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147996) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147768) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148004) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148012) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147708) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148020) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148028) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 147776) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148036) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148044) = 0i64;
        *(AD_MasterBusMixerDeviceState *)((char *)v7 + (_QWORD)v8 + 147716) = Reserved;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148052) = 0i64;
        *(_QWORD *)((char *)v7 + (_QWORD)v8 + 148060) = 0i64;
        *v7 = *(v7 - 1);
      }
      ++v5;
      v7 += 37008;
    }
    while ( v5 != 4 );
    v9 = 0;
    v10 = &mixer->inputs.m_elements[0].currentState;
    v11 = 1;
    do
    {
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( *v10 != *((_DWORD *)v10 - 1) )
      {
        v12 = *((_DWORD *)v10 - 111) >> 2;
        if ( v12 )
        {
          v13 = 4 * v12;
          if ( *((_DWORD *)v10 - 111) < (unsigned int)(4 * v12) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 441, ASSERT_TYPE_ASSERT, "BytesAvail() >= dataSize", "BytesAvail() >= dataSize") )
            __debugbreak();
          if ( !*((_DWORD *)v10 - 114) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 442, ASSERT_TYPE_ASSERT, "BufferSize() > 0", "BufferSize() > 0") )
            __debugbreak();
          *((_DWORD *)v10 - 113) = (unsigned int)(v13 + *((_DWORD *)v10 - 113)) % *((_DWORD *)v10 - 114);
          AD_InterlockedSubtract((volatile int *)v10 - 111, v13);
        }
        *((_BYTE *)v10 + 4) = 0;
        *v10 = *(v10 - 1);
      }
      ++v9;
      v10 += 33168;
      v11 = v9 < 2;
    }
    while ( v9 != 2 );
    flags.flags = (unsigned __int64)v39;
    v3 = *v39;
    v4 = 0i64;
  }
  if ( (v3 & 4) != 0 || (v3 & 2) != 0 )
  {
    v14 = 0;
    v35 = 0;
    v15 = 0i64;
    v38 = 0i64;
    while ( 1 )
    {
      if ( (*(_BYTE *)flags.flags & 2) == 0 || (v14 ? (voiceChatCallback = mixer->voiceChatCallback) : (voiceChatCallback = mixer->mixerCallback), !voiceChatCallback) )
        voiceChatCallback = AD_MixerPrimingCallback;
      if ( v14 )
        break;
      if ( !mixer )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 62, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
          __debugbreak();
        v4 = 0i64;
      }
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
          __debugbreak();
        if ( mixer->outputs.m_elements[v17].currentState == Inactive )
          break;
        if ( ++v17 == 2 )
          goto LABEL_78;
      }
      if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 124, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
        __debugbreak();
      v18 = -1;
      v36 = -1;
      v19 = 0;
      v20 = 0i64;
      do
      {
        if ( v19 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
          __debugbreak();
        if ( mixer->outputs.m_elements[v20].currentState == Inactive )
        {
          switch ( mixer->outputs.m_elements[v20].mixBed )
          {
            case 0:
              v21 = 16;
              break;
            case 1:
              v21 = 12;
              break;
            case 2:
              v21 = 10;
              break;
            case 3:
              v21 = 8;
              break;
            case 4:
              v21 = 6;
              break;
            case 5:
              v21 = 4;
              break;
            case 6:
              v21 = 2;
              break;
            case 7:
              v21 = 1;
              break;
            default:
              v21 = -1;
              break;
          }
          v18 = ((mixer->outputs.m_elements[v20].ringBuffer.m_size - mixer->outputs.m_elements[v20].ringBuffer.m_dataAvail) >> 2) / v21;
          if ( v36 < v18 )
            v18 = v36;
          v36 = v18;
        }
        ++v19;
        ++v20;
      }
      while ( v19 != 2 );
      if ( v18 == -1 )
        goto LABEL_104;
      v22 = v18 & 0xFFFFFFF0;
LABEL_105:
      v15 = v38;
      v14 = v35;
      if ( v22 < 0x100 )
      {
        if ( voiceChatCallback )
        {
          v31.v = AD_GetTime().v;
          MSecDelta = AD_GetMSecDelta(mixer->lastMixTime[v38], v31);
          if ( MSecDelta > 0x64 )
          {
            LODWORD(v34) = v35;
            AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", "528", Canceled, "Interface hasn't accepted any new mix data for %llums. Running null mix pass %d.", MSecDelta, v34);
            v61 = &AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
            v63 = 0;
            v64 = &AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
            v66 = 0;
            v60 = 256;
            v46 = 256;
            v47 = &v62;
            v48 = 0;
            v49 = &v65;
            v50 = 0;
            voiceChatCallback((const AD_MixerServiceCallbackData *const)&v46);
            v64 = &AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
            v61 = &AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
          }
        }
LABEL_116:
        v4 = 0i64;
      }
      else
      {
        v4 = 0i64;
        v30 = 0;
        do
        {
          if ( v30 >= 2 )
            break;
          cbd.outputEndpoints.__vftable = (AD_StackCollection<AD_MixerOutputEndpointView,4,16>_vtbl *)&AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
          cbd.outputEndpoints.m_count = 0;
          cbd.inputEndpoints.__vftable = (AD_StackCollection<AD_MixerInputEndpointView,2,16>_vtbl *)&AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
          cbd.inputEndpoints.m_count = 0;
          v22 -= 256;
          cbd.numFrames = 256;
          if ( v35 )
            AD_MixerThreadFillVoiceChatCallbackEndpointData(mixer, &cbd);
          else
            AD_MixerThreadFillMainCallbackEndpointData(mixer, &cbd);
          v40.numFrames = cbd.numFrames;
          v40.outputEndpointViews = cbd.outputEndpoints.m_elements;
          v40.numOutputEndpointViews = cbd.outputEndpoints.m_count;
          v40.inputEndpointViews = cbd.inputEndpoints.m_elements;
          v40.numInputEndpointViews = cbd.inputEndpoints.m_count;
          voiceChatCallback(&v40);
          AD_MixerThreadSubmitEndpointData(mixer, &v40);
          mixer->lastMixTime[v38] = AD_GetTime();
          ++v30;
          cbd.inputEndpoints.__vftable = (AD_StackCollection<AD_MixerInputEndpointView,2,16>_vtbl *)&AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
          cbd.outputEndpoints.__vftable = (AD_StackCollection<AD_MixerOutputEndpointView,4,16>_vtbl *)&AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
          v4 = 0i64;
        }
        while ( v22 >= 0x100 );
      }
      v35 = ++v14;
      v38 = ++v15;
      flags.flags = (unsigned __int64)v39;
      if ( v14 >= 2 )
        return 1;
    }
    if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 104, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
    v23 = 2;
    v24 = 1;
    while ( 1 )
    {
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( mixer->outputs.m_elements[v23].currentState == Inactive )
        break;
      v24 = (unsigned int)++v23 < 4;
      if ( v23 == 4 )
      {
LABEL_78:
        if ( voiceChatCallback )
        {
          v54 = &AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
          v56 = 0;
          v57 = &AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
          v59 = 0;
          v53 = 256;
          v41 = 256;
          v42 = &v55;
          v43 = 0;
          v44 = &v58;
          v45 = 0;
          ((void (__fastcall *)(int *, unsigned __int64, __int64))voiceChatCallback)(&v41, flags.flags, v4);
          v57 = &AD_StackCollection<AD_MixerInputEndpointView,2,16>::`vftable';
          v54 = &AD_StackCollection<AD_MixerOutputEndpointView,4,16>::`vftable';
        }
        goto LABEL_116;
      }
    }
    if ( !mixer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_masterbusmixer.cpp", 179, ASSERT_TYPE_ASSERT, "mixer != nullptr", "mixer != nullptr") )
      __debugbreak();
    v25 = -1;
    v37 = -1;
    v26 = 2i64;
    v27 = 2;
    v28 = 1;
    do
    {
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( mixer->outputs.m_elements[v26].currentState == Inactive )
      {
        switch ( mixer->outputs.m_elements[v26].mixBed )
        {
          case 0:
            v29 = 16;
            break;
          case 1:
            v29 = 12;
            break;
          case 2:
            v29 = 10;
            break;
          case 3:
            v29 = 8;
            break;
          case 4:
            v29 = 6;
            break;
          case 5:
            v29 = 4;
            break;
          case 6:
            v29 = 2;
            break;
          case 7:
            v29 = 1;
            break;
          default:
            v29 = -1;
            break;
        }
        v25 = ((mixer->outputs.m_elements[v26].ringBuffer.m_size - mixer->outputs.m_elements[v26].ringBuffer.m_dataAvail) >> 2) / v29;
        if ( v37 < v25 )
          v25 = v37;
        v37 = v25;
      }
      ++v27;
      ++v26;
      v28 = v27 < 4;
    }
    while ( v27 != 4 );
    if ( v25 != -1 )
    {
      v22 = v25 & 0xFFFFFFF0;
      goto LABEL_105;
    }
LABEL_104:
    v22 = 0;
    goto LABEL_105;
  }
  return 1;
}

/*
==============
AD_PrimeMasterBusMixer
==============
*/
void AD_PrimeMasterBusMixer(AD_MasterBusMixer *mixer)
{
  if ( !mixer->mixerThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(mixer->mixerThreadSignals.event, 4ui64);
}

