/*
==============
AD_EndpointDestroy_Platform
==============
*/

void __fastcall AD_EndpointDestroy_Platform(AD_Endpoint *const endpoint)
{
  ?AD_EndpointDestroy_Platform@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointGetBufferFramesAvail
==============
*/

bool __fastcall AD_EndpointGetBufferFramesAvail(AD_Endpoint *const endpoint, unsigned int *outFramecount)
{
  return ?AD_EndpointGetBufferFramesAvail@@YA_NQEAUAD_Endpoint@@AEAI@Z(endpoint, outFramecount);
}

/*
==============
AD_EndpointSubmitBuffer
==============
*/

bool __fastcall AD_EndpointSubmitBuffer(AD_Endpoint *const endpoint, const unsigned int numFrames)
{
  return ?AD_EndpointSubmitBuffer@@YA_NQEAUAD_Endpoint@@I@Z(endpoint, numFrames);
}

/*
==============
AD_EndpointOpen_Platform
==============
*/

bool __fastcall AD_EndpointOpen_Platform(AD_Endpoint *const endpoint)
{
  return ?AD_EndpointOpen_Platform@@YA_NQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointConfigure_Platform
==============
*/

void __fastcall AD_EndpointConfigure_Platform(AD_Endpoint *const endpoint, const AD_EndpointConfig *const config)
{
  ?AD_EndpointConfigure_Platform@@YAXQEAUAD_Endpoint@@QEBUAD_EndpointConfig@@@Z(endpoint, config);
}

/*
==============
AD_EndpointGetBuffer_Platform
==============
*/

float *__fastcall AD_EndpointGetBuffer_Platform(AD_Endpoint *const endpoint)
{
  return ?AD_EndpointGetBuffer_Platform@@YAPEAMQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointClose_Platform
==============
*/

void __fastcall AD_EndpointClose_Platform(AD_Endpoint *const endpoint)
{
  ?AD_EndpointClose_Platform@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointConsumeBuffer
==============
*/

void __fastcall AD_EndpointConsumeBuffer(AD_Endpoint *const endpoint)
{
  ?AD_EndpointConsumeBuffer@@YAXQEAUAD_Endpoint@@@Z(endpoint);
}

/*
==============
AD_EndpointCleanupCOM
==============
*/
void AD_EndpointCleanupCOM(AD_Endpoint *const endpoint)
{
  AD_EndpointFlow flow; 
  AD_Endpoint_Platform *platformData; 
  __int64 v4; 
  IAudioClient *instance; 
  IAudioClient2 *v6; 
  AD_Endpoint_Platform *v7; 
  __int64 v8; 
  IAudioClient *v9; 
  IAudioClient2 *v10; 
  __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 94, ASSERT_TYPE_ASSERT, "endpoint", "endpoint") )
    __debugbreak();
  flow = endpoint->flow;
  if ( flow == Screen )
  {
    platformData = endpoint->platformData;
    v4 = *(_QWORD *)&platformData[20].pendingDeviceId.value[52];
    if ( v4 )
    {
      *(_QWORD *)&platformData[20].pendingDeviceId.value[52] = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    }
    instance = platformData->audioClient1.instance;
    if ( instance )
    {
      platformData->audioClient1.instance = NULL;
      instance->Release(instance);
    }
    v6 = platformData->audioClient2.instance;
    if ( v6 )
    {
      platformData->audioClient2.instance = NULL;
      v6->Release(v6);
    }
  }
  else
  {
    if ( flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
      __debugbreak();
    v7 = endpoint->platformData;
    v8 = *(_QWORD *)&v7[656].currentDeviceId.value[28];
    if ( v8 )
    {
      *(_QWORD *)&v7[656].currentDeviceId.value[28] = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    }
    v9 = v7->audioClient1.instance;
    if ( v9 )
    {
      v7->audioClient1.instance = NULL;
      v9->Release(v9);
    }
    v10 = v7->audioClient2.instance;
    if ( v10 )
    {
      v7->audioClient2.instance = NULL;
      v10->Release(v10);
    }
    if ( v7[656].currentDeviceId.value[45] )
    {
      if ( !*(_QWORD *)&v7[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 113, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
        __debugbreak();
      v11 = *(__int64 **)&v7[656].currentDeviceId.value[36];
      v12 = v11[1];
      if ( v12 )
      {
        v11[1] = 0i64;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
        v11 = *(__int64 **)&v7[656].currentDeviceId.value[36];
      }
      v13 = *v11;
      if ( *v11 )
      {
        *v11 = 0i64;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
      }
      v14 = 16i64;
      v15 = 16i64;
      do
      {
        v16 = *(_QWORD *)&v7[656].currentDeviceId.value[36];
        v17 = *(_QWORD *)(v14 + v16);
        if ( v17 )
        {
          *(_QWORD *)(v14 + v16) = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
        }
        v14 += 8i64;
        --v15;
      }
      while ( v15 );
    }
  }
}

/*
==============
AD_EndpointClose_Platform
==============
*/
void AD_EndpointClose_Platform(AD_Endpoint *const endpoint)
{
  AD_Endpoint_Platform *platformData; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  AD_Endpoint_Platform *v7; 
  IAudioClient *instance; 
  IAudioClient2 *v9; 
  AD_Endpoint_Platform *v10; 
  IMMDevice *v11; 
  AD_EndpointFlow flow; 
  AD_Endpoint_Platform *v13; 

  if ( endpoint->flow == Graph )
  {
    platformData = endpoint->platformData;
    if ( platformData[656].currentDeviceId.value[45] )
    {
      if ( !*(_QWORD *)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 893, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
        __debugbreak();
      if ( *(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64) )
      {
        v3 = 16i64;
        v4 = 16i64;
        do
        {
          v5 = *(_QWORD *)&platformData[656].currentDeviceId.value[36];
          v6 = *(_QWORD *)(v3 + v5);
          if ( v6 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32i64))(v6, 0i64);
            v5 = *(_QWORD *)&platformData[656].currentDeviceId.value[36];
          }
          v3 += 8i64;
          --v4;
        }
        while ( v4 );
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8) + 48i64))(*(_QWORD *)(v5 + 8));
      }
    }
  }
  v7 = endpoint->platformData;
  instance = v7->audioClient1.instance;
  if ( instance )
  {
    instance->Stop(v7->audioClient1.instance);
    v7 = endpoint->platformData;
  }
  v9 = v7->audioClient2.instance;
  if ( v9 )
    v9->Stop(v9);
  AD_EndpointCleanupCOM(endpoint);
  v10 = endpoint->platformData;
  v11 = v10->device.instance;
  if ( v11 )
  {
    v10->device.instance = NULL;
    v11->Release(v11);
  }
  flow = endpoint->flow;
  if ( flow == Screen )
  {
    v13 = endpoint->platformData;
    *(_DWORD *)&v13[20].pendingDeviceId.value[20] = 3840;
    *(_DWORD *)&v13[20].currentDeviceId.value[4] = 0;
  }
  else
  {
    if ( flow )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
        __debugbreak();
    }
    *(_DWORD *)&endpoint->platformData[656].pendingDeviceId.value[52] = 0x20000;
  }
}

/*
==============
AD_EndpointConfigure_Platform
==============
*/
void AD_EndpointConfigure_Platform(AD_Endpoint *const endpoint, const AD_EndpointConfig *const config)
{
  AD_Endpoint_Platform *platformData; 
  bool supportSpatialAudio; 
  AD_EndpointSpatialData *spatialData; 
  __int64 v7; 

  endpoint->platformData->pendingEndpointType = config->endpointType;
  if ( !config->deviceEnumerator && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 63, ASSERT_TYPE_ASSERT, "config->deviceEnumerator != nullptr", "config->deviceEnumerator != nullptr") )
    __debugbreak();
  if ( !config->deviceMixEvent && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 64, ASSERT_TYPE_ASSERT, "config->deviceMixEvent != nullptr", "config->deviceMixEvent != nullptr") )
    __debugbreak();
  endpoint->platformData->deviceEnumerator = config->deviceEnumerator;
  endpoint->platformData->deviceMixEvent = config->deviceMixEvent;
  if ( endpoint->flow == Graph )
  {
    platformData = endpoint->platformData;
    platformData[656].currentDeviceId.value[46] = config->restrictBGM;
    platformData[656].currentDeviceId.value[44] = config->supportSpatialAudio;
    supportSpatialAudio = config->supportSpatialAudio;
    platformData[656].currentDeviceId.value[45] = supportSpatialAudio;
    spatialData = config->spatialData;
    *(_QWORD *)&platformData[656].currentDeviceId.value[36] = spatialData;
    if ( supportSpatialAudio )
    {
      if ( !spatialData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 80, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData != nullptr", "outputPlatformData->spatialData != nullptr") )
        __debugbreak();
      v7 = *(_QWORD *)&platformData[656].currentDeviceId.value[36];
      *(_QWORD *)(v7 + 160) = endpoint;
      *(_QWORD *)(v7 + 168) = AD_SpatialAudioObjectNotifierCallbackImpl;
    }
    else if ( config->spatialData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 85, ASSERT_TYPE_ASSERT, "config->spatialData == nullptr", "config->spatialData == nullptr") )
    {
      __debugbreak();
    }
  }
}

/*
==============
AD_EndpointConsumeBuffer
==============
*/

void __fastcall AD_EndpointConsumeBuffer(AD_Endpoint *const endpoint, double _XMM1_8, double _XMM2_8)
{
  AD_Endpoint_Platform *platformData; 
  unsigned int v16; 
  __int64 v18; 
  unsigned int deviceChannelCount; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v29; 
  unsigned int v34; 
  AD_EndpointFormat deviceFormat; 
  __int32 v36; 
  __int32 v37; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v42; 
  int v43; 
  int v66; 
  unsigned int v67; 
  __int64 v68; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v87; 
  int v88; 
  int v108; 
  unsigned int v109; 
  __int64 v110; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v129; 
  int v130; 
  unsigned int v161; 
  __int64 v162; 
  unsigned int v186; 
  unsigned int v187; 
  unsigned int v189; 
  int v190; 
  int v192; 
  int v201; 
  unsigned int v202; 
  __int64 v203; 
  unsigned int v230; 
  unsigned int v231; 
  int v232; 
  __int64 v233; 

  __asm
  {
    vmovaps [rsp+138h+var_58], xmm6
    vmovaps [rsp+138h+var_A8], xmm11
    vmovaps [rsp+138h+var_E8], xmm15
  }
  if ( endpoint->flow != Screen && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 34, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
    __debugbreak();
  platformData = endpoint->platformData;
  v16 = 1;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  v233 = 0i64;
  v230 = 0;
  v232 = 0;
  v231 = 0;
  v18 = *(unsigned int *)&platformData[20].currentDeviceId.value[4];
  deviceChannelCount = platformData->deviceChannelCount;
  v20 = (*(_DWORD *)&platformData[20].pendingDeviceId.value[20] >> 2) - v18;
  v21 = (__int64)&platformData[1].audioClient1 + 4 * v18;
  if ( deviceChannelCount > 1 )
  {
    if ( deviceChannelCount - 1 >= 8 )
    {
      __asm { vmovss  xmm0, cs:__real@3d813854 }
      v22 = ((deviceChannelCount - 9) >> 3) + 1;
      v23 = v22;
      v16 = 8 * v22 + 1;
      do
      {
        __asm { vmulss  xmm6, xmm6, xmm0 }
        --v23;
      }
      while ( v23 );
    }
    if ( v16 < deviceChannelCount )
    {
      __asm { vmovss  xmm0, cs:__real@3f353bef }
      v24 = deviceChannelCount - v16;
      do
      {
        __asm { vmulss  xmm6, xmm6, xmm0 }
        --v24;
      }
      while ( v24 );
    }
  }
  __asm
  {
    vmovaps xmm11, xmm6
    vmovaps xmm15, xmm6
    vshufps xmm11, xmm11, xmm11, 0
    vshufps xmm15, xmm15, xmm15, 0
  }
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 40i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v231) >= 0 )
  {
    v29 = v231;
    if ( v231 )
    {
      __asm
      {
        vmovaps [rsp+138h+var_68], xmm7
        vmovaps [rsp+138h+var_78], xmm8
        vmovaps [rsp+138h+var_88], xmm9
        vmovaps [rsp+138h+var_98], xmm10
        vmovaps [rsp+138h+var_B8], xmm12
        vmovss  xmm12, cs:__real@3c010204
        vmovaps [rsp+138h+var_C8], xmm13
        vmovss  xmm13, cs:__real@38000100
        vmovaps [rsp+138h+var_D8], xmm14
        vmovsd  xmm14, cs:__real@3e00000000200000
      }
      do
      {
        if ( v29 > v20 || (*(int (__fastcall **)(_QWORD, __int64 *, unsigned int *, int *, _QWORD, _QWORD))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 24i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v233, &v230, &v232, 0i64, 0i64) < 0 )
          break;
        v34 = v230;
        if ( v230 > v20 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1006, ASSERT_TYPE_ASSERT, "framesAvailable <= workingDeviceBufferSize", "framesAvailable <= workingDeviceBufferSize") )
            __debugbreak();
          v34 = v230;
          if ( v20 < v230 )
            v34 = v20;
        }
        deviceFormat = platformData->deviceFormat;
        if ( deviceFormat )
        {
          v36 = deviceFormat - 2;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
              {
                _R8 = v233;
                v39 = 0;
                if ( v34 )
                {
                  v40 = deviceChannelCount - 1;
                  _RSI = v21;
                  do
                  {
                    v42 = 1;
                    v43 = deviceChannelCount * v39;
                    __asm
                    {
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, ecx
                      vmulss  xmm1, xmm0, xmm12
                      vmulss  xmm4, xmm1, xmm6
                    }
                    if ( deviceChannelCount > 1 )
                    {
                      if ( v40 >= 8 )
                      {
                        __asm
                        {
                          vmovdqu xmm8, cs:__xmm@00000080000000800000008000000080
                          vmovups xmm9, cs:__xmm@3c0102043c0102043c0102043c010204
                        }
                        _R9 = (unsigned int)(v43 + 5);
                        __asm
                        {
                          vxorps  xmm5, xmm5, xmm5
                          vxorps  xmm7, xmm7, xmm7
                        }
                        do
                        {
                          _RAX = (unsigned int)(_R9 - 4);
                          v42 += 8;
                          __asm
                          {
                            vmovd   xmm0, dword ptr [rax+r8]
                            vpmovzxbd xmm1, xmm0
                            vpsubd  xmm2, xmm1, xmm8
                            vcvtdq2ps xmm3, xmm2
                            vmulps  xmm0, xmm3, xmm9
                            vmulps  xmm1, xmm0, xmm11
                            vmovd   xmm0, dword ptr [r9+r8]
                          }
                          _R9 = (unsigned int)(_R9 + 8);
                          __asm
                          {
                            vaddps  xmm5, xmm1, xmm5
                            vpmovzxbd xmm1, xmm0
                            vpsubd  xmm2, xmm1, xmm8
                            vcvtdq2ps xmm3, xmm2
                            vmulps  xmm0, xmm3, xmm9
                            vmulps  xmm1, xmm0, xmm11
                            vaddps  xmm7, xmm1, xmm7
                          }
                        }
                        while ( v42 < deviceChannelCount - (v40 & 7) );
                        __asm
                        {
                          vaddps  xmm1, xmm7, xmm5
                          vmovhlps xmm0, xmm1, xmm1
                          vaddps  xmm2, xmm0, xmm1
                          vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
                          vaddss  xmm2, xmm2, xmm0
                          vaddss  xmm4, xmm4, xmm2
                        }
                      }
                      if ( v42 < deviceChannelCount )
                      {
                        if ( deviceChannelCount - v42 >= 4 )
                        {
                          v66 = v42 + v43 + 1;
                          v67 = ((deviceChannelCount - v42 - 4) >> 2) + 1;
                          v68 = v67;
                          v42 += 4 * v67;
                          do
                          {
                            __asm
                            {
                              vxorps  xmm0, xmm0, xmm0
                              vcvtsi2ss xmm0, xmm0, eax
                              vmulss  xmm2, xmm0, xmm12
                              vxorps  xmm0, xmm0, xmm0
                              vcvtsi2ss xmm0, xmm0, ecx
                              vmulss  xmm1, xmm0, xmm12
                              vaddss  xmm3, xmm2, xmm1
                              vxorps  xmm0, xmm0, xmm0
                              vcvtsi2ss xmm0, xmm0, eax
                              vmulss  xmm1, xmm0, xmm12
                              vaddss  xmm2, xmm3, xmm1
                            }
                            v66 += 4;
                            __asm
                            {
                              vxorps  xmm0, xmm0, xmm0
                              vcvtsi2ss xmm0, xmm0, eax
                              vmulss  xmm1, xmm0, xmm12
                              vaddss  xmm2, xmm2, xmm1
                              vmulss  xmm3, xmm2, xmm6
                              vaddss  xmm4, xmm4, xmm3
                            }
                            --v68;
                          }
                          while ( v68 );
                        }
                        while ( v42 < deviceChannelCount )
                        {
                          ++v42;
                          __asm
                          {
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, eax
                            vmulss  xmm1, xmm0, xmm12
                            vmulss  xmm2, xmm1, xmm6
                            vaddss  xmm4, xmm4, xmm2
                          }
                        }
                      }
                    }
                    __asm { vmovss  dword ptr [rsi], xmm4 }
                    _RSI += 4i64;
                    ++v39;
                  }
                  while ( v39 < v34 );
                }
              }
              else
              {
                v34 = 0;
              }
            }
            else
            {
              _R8 = v233;
              v84 = 0;
              if ( v34 )
              {
                v85 = deviceChannelCount - 1;
                _RSI = v21;
                do
                {
                  v87 = 1;
                  v88 = deviceChannelCount * v84;
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, ecx
                    vmulss  xmm1, xmm0, xmm13
                    vmulss  xmm4, xmm1, xmm6
                  }
                  if ( deviceChannelCount > 1 )
                  {
                    if ( v85 >= 8 )
                    {
                      __asm { vmovups xmm8, cs:__xmm@38000100380001003800010038000100 }
                      _R9 = (unsigned int)(v88 + 5);
                      __asm
                      {
                        vxorps  xmm5, xmm5, xmm5
                        vxorps  xmm7, xmm7, xmm7
                      }
                      do
                      {
                        _RAX = (unsigned int)(_R9 - 4);
                        v87 += 8;
                        __asm
                        {
                          vmovq   xmm0, qword ptr [r8+rax*2]
                          vpmovsxwd xmm1, xmm0
                          vcvtdq2ps xmm2, xmm1
                          vmulps  xmm3, xmm2, xmm8
                          vmulps  xmm0, xmm3, xmm11
                          vaddps  xmm5, xmm0, xmm5
                          vmovq   xmm0, qword ptr [r8+r9*2]
                        }
                        _R9 = (unsigned int)(_R9 + 8);
                        __asm
                        {
                          vpmovsxwd xmm1, xmm0
                          vcvtdq2ps xmm2, xmm1
                          vmulps  xmm3, xmm2, xmm8
                          vmulps  xmm0, xmm3, xmm11
                          vaddps  xmm7, xmm0, xmm7
                        }
                      }
                      while ( v87 < deviceChannelCount - (v85 & 7) );
                      __asm
                      {
                        vaddps  xmm1, xmm7, xmm5
                        vmovhlps xmm0, xmm1, xmm1
                        vaddps  xmm2, xmm0, xmm1
                        vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
                        vaddss  xmm2, xmm2, xmm0
                        vaddss  xmm4, xmm4, xmm2
                      }
                    }
                    if ( v87 < deviceChannelCount )
                    {
                      if ( deviceChannelCount - v87 >= 4 )
                      {
                        v108 = v87 + v88 + 1;
                        v109 = ((deviceChannelCount - v87 - 4) >> 2) + 1;
                        v110 = v109;
                        v87 += 4 * v109;
                        do
                        {
                          __asm
                          {
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, eax
                            vmulss  xmm2, xmm0, xmm13
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, ecx
                            vmulss  xmm1, xmm0, xmm13
                            vaddss  xmm3, xmm2, xmm1
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, eax
                          }
                          v108 += 4;
                          __asm
                          {
                            vmulss  xmm1, xmm0, xmm13
                            vaddss  xmm2, xmm3, xmm1
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, eax
                            vmulss  xmm1, xmm0, xmm13
                            vaddss  xmm2, xmm2, xmm1
                            vmulss  xmm3, xmm2, xmm6
                            vaddss  xmm4, xmm4, xmm3
                          }
                          --v110;
                        }
                        while ( v110 );
                      }
                      while ( v87 < deviceChannelCount )
                      {
                        ++v87;
                        __asm
                        {
                          vxorps  xmm0, xmm0, xmm0
                          vcvtsi2ss xmm0, xmm0, eax
                          vmulss  xmm1, xmm0, xmm13
                          vmulss  xmm2, xmm1, xmm6
                          vaddss  xmm4, xmm4, xmm2
                        }
                      }
                    }
                  }
                  __asm { vmovss  dword ptr [rsi], xmm4 }
                  _RSI += 4i64;
                  ++v84;
                }
                while ( v84 < v34 );
              }
            }
          }
          else
          {
            _R8 = v233;
            v126 = 0;
            if ( v34 )
            {
              v127 = deviceChannelCount - 1;
              _RSI = v21;
              do
              {
                v129 = 1;
                v130 = deviceChannelCount * v126;
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2sd xmm0, xmm0, dword ptr [r8+r10*4]
                  vmulsd  xmm1, xmm0, xmm14
                  vcvtsd2ss xmm2, xmm1, xmm1
                  vmulss  xmm7, xmm2, xmm6
                }
                if ( deviceChannelCount > 1 )
                {
                  if ( v127 >= 4 )
                  {
                    __asm
                    {
                      vmovupd xmm8, cs:__xmm@3e000000002000003e00000000200000
                      vxorps  xmm0, xmm0, xmm0
                    }
                    _R11 = (unsigned int)(v130 + 3);
                    __asm
                    {
                      vmovups [rsp+138h+var_F8], xmm0
                      vmovsd  xmm10, qword ptr [rsp+138h+var_F8]
                      vmovups [rsp+138h+var_108], xmm0
                      vmovsd  xmm9, qword ptr [rsp+138h+var_108]
                    }
                    do
                    {
                      _RAX = (unsigned int)(_R11 - 2);
                      v129 += 4;
                      __asm
                      {
                        vmovq   xmm0, qword ptr [r8+rax*4]
                        vcvtdq2pd xmm1, xmm0
                        vmulpd  xmm2, xmm1, xmm8
                        vcvtpd2ps xmm4, xmm2
                        vxorpd  xmm0, xmm0, xmm0
                        vmovaps xmm3, xmm15
                        vmovsd  xmm1, xmm0, xmm3
                        vmovq   xmm0, qword ptr [r8+r11*4]
                      }
                      _R11 = (unsigned int)(_R11 + 4);
                      __asm
                      {
                        vmulps  xmm5, xmm4, xmm1
                        vcvtdq2pd xmm1, xmm0
                        vmovaps xmm2, xmm10
                        vaddps  xmm10, xmm5, xmm2
                        vmulpd  xmm2, xmm1, xmm8
                        vcvtpd2ps xmm4, xmm2
                        vmovaps xmm2, xmm9
                        vxorpd  xmm0, xmm0, xmm0
                        vmovsd  xmm1, xmm0, xmm3
                        vmulps  xmm5, xmm4, xmm1
                        vaddps  xmm9, xmm5, xmm2
                        vmovaps xmm1, xmm2
                      }
                    }
                    while ( v129 < deviceChannelCount - (v127 & 3) );
                    __asm
                    {
                      vmovaps xmm1, xmm9
                      vmovaps xmm2, xmm10
                      vaddps  xmm2, xmm1, xmm2
                      vmovhlps xmm0, xmm2, xmm2
                      vaddps  xmm1, xmm0, xmm2
                      vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
                      vaddss  xmm1, xmm1, xmm0
                      vaddss  xmm7, xmm7, xmm1
                    }
                  }
                  if ( v129 < deviceChannelCount )
                  {
                    if ( deviceChannelCount - v129 >= 4 )
                    {
                      _R9 = v129 + v130 + 1;
                      v161 = ((deviceChannelCount - v129 - 4) >> 2) + 1;
                      v162 = v161;
                      v129 += 4 * v161;
                      do
                      {
                        _RAX = (unsigned int)(_R9 - 1);
                        __asm { vmovd   xmm0, dword ptr [r8+rax*4] }
                        _RAX = (unsigned int)(_R9 + 1);
                        __asm
                        {
                          vcvtdq2pd xmm0, xmm0
                          vmulsd  xmm1, xmm0, xmm14
                          vmovd   xmm0, dword ptr [r8+r9*4]
                          vcvtdq2pd xmm0, xmm0
                          vcvtsd2ss xmm3, xmm1, xmm1
                          vmulsd  xmm1, xmm0, xmm14
                          vmovd   xmm0, dword ptr [r8+rax*4]
                        }
                        _RAX = (unsigned int)(_R9 + 2);
                        _R9 = (unsigned int)(_R9 + 4);
                        __asm
                        {
                          vcvtdq2pd xmm0, xmm0
                          vcvtsd2ss xmm2, xmm1, xmm1
                          vmulsd  xmm1, xmm0, xmm14
                          vmovd   xmm0, dword ptr [r8+rax*4]
                          vaddss  xmm4, xmm3, xmm2
                          vcvtsd2ss xmm2, xmm1, xmm1
                          vcvtdq2pd xmm0, xmm0
                          vmulsd  xmm1, xmm0, xmm14
                          vaddss  xmm3, xmm4, xmm2
                          vcvtsd2ss xmm2, xmm1, xmm1
                          vaddss  xmm3, xmm3, xmm2
                          vmulss  xmm0, xmm3, xmm6
                          vaddss  xmm7, xmm7, xmm0
                        }
                        --v162;
                      }
                      while ( v162 );
                    }
                    while ( v129 < deviceChannelCount )
                    {
                      ++v129;
                      __asm
                      {
                        vxorpd  xmm0, xmm0, xmm0
                        vcvtsi2sd xmm0, xmm0, dword ptr [r8+rax*4]
                        vmulsd  xmm1, xmm0, xmm14
                        vcvtsd2ss xmm2, xmm1, xmm1
                        vmulss  xmm3, xmm2, xmm6
                        vaddss  xmm7, xmm7, xmm3
                      }
                    }
                  }
                }
                __asm { vmovss  dword ptr [rsi], xmm7 }
                _RSI += 4i64;
                ++v126;
              }
              while ( v126 < v34 );
            }
          }
        }
        else
        {
          _R8 = v233;
          v186 = 0;
          if ( v34 )
          {
            v187 = deviceChannelCount - 1;
            _RSI = v21;
            do
            {
              v189 = 1;
              v190 = deviceChannelCount * v186;
              __asm { vmulss  xmm3, xmm6, dword ptr [r8+r10*4] }
              if ( deviceChannelCount > 1 )
              {
                if ( v187 >= 8 )
                {
                  v192 = v190 + 5;
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vxorps  xmm2, xmm2, xmm2
                  }
                  do
                  {
                    v189 += 8;
                    __asm
                    {
                      vmulps  xmm0, xmm11, xmmword ptr [r8+rax*4]
                      vaddps  xmm1, xmm0, xmm1
                      vmulps  xmm0, xmm11, xmmword ptr [r8+r9*4]
                    }
                    v192 += 8;
                    __asm { vaddps  xmm2, xmm0, xmm2 }
                  }
                  while ( v189 < deviceChannelCount - (v187 & 7) );
                  __asm
                  {
                    vaddps  xmm1, xmm2, xmm1
                    vmovhlps xmm0, xmm1, xmm1
                    vaddps  xmm2, xmm0, xmm1
                    vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
                    vaddss  xmm2, xmm2, xmm0
                    vaddss  xmm3, xmm3, xmm2
                  }
                }
                if ( v189 < deviceChannelCount )
                {
                  if ( deviceChannelCount - v189 >= 4 )
                  {
                    v201 = v189 + v190 + 1;
                    v202 = ((deviceChannelCount - v189 - 4) >> 2) + 1;
                    v203 = v202;
                    v189 += 4 * v202;
                    do
                    {
                      _RAX = (unsigned int)(v201 - 1);
                      __asm
                      {
                        vmovss  xmm0, dword ptr [r8+rax*4]
                        vaddss  xmm1, xmm0, dword ptr [r8+r9*4]
                        vaddss  xmm0, xmm1, dword ptr [r8+rax*4]
                      }
                      v201 += 4;
                      __asm
                      {
                        vaddss  xmm0, xmm0, dword ptr [r8+rax*4]
                        vmulss  xmm1, xmm0, xmm6
                        vaddss  xmm3, xmm3, xmm1
                      }
                      --v203;
                    }
                    while ( v203 );
                  }
                  while ( v189 < deviceChannelCount )
                  {
                    ++v189;
                    __asm
                    {
                      vmulss  xmm0, xmm6, dword ptr [r8+rax*4]
                      vaddss  xmm3, xmm3, xmm0
                    }
                  }
                }
              }
              __asm { vmovss  dword ptr [rsi], xmm3 }
              _RSI += 4i64;
              ++v186;
            }
            while ( v186 < v34 );
          }
        }
        *(_DWORD *)&platformData[20].currentDeviceId.value[4] += v34;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 32i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], v230);
        v20 -= v34;
        v21 += 4i64 * v34;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 40i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v231) < 0 )
          break;
        v29 = v231;
      }
      while ( v231 );
      __asm
      {
        vmovaps xmm13, [rsp+138h+var_C8]
        vmovaps xmm12, [rsp+138h+var_B8]
        vmovaps xmm10, [rsp+138h+var_98]
        vmovaps xmm9, [rsp+138h+var_88]
        vmovaps xmm8, [rsp+138h+var_78]
        vmovaps xmm7, [rsp+138h+var_68]
        vmovaps xmm14, [rsp+138h+var_D8]
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_58]
    vmovaps xmm11, [rsp+138h+var_A8]
    vmovaps xmm15, [rsp+138h+var_E8]
  }
}

/*
==============
AD_EndpointDestroy_Platform
==============
*/
void AD_EndpointDestroy_Platform(AD_Endpoint *const endpoint)
{
  AD_Endpoint_Platform *platformData; 

  endpoint->platformData->currentDeviceId.value[0] = 0;
  endpoint->platformData->pendingDeviceId.value[0] = 0;
  endpoint->platformData->deviceEnumerator = NULL;
  endpoint->platformData->deviceMixEvent = NULL;
  if ( endpoint->flow == Graph )
  {
    platformData = endpoint->platformData;
    if ( platformData[656].currentDeviceId.value[45] )
    {
      if ( !*(_QWORD *)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 47, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
        __debugbreak();
      *(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 160i64) = 0i64;
    }
  }
}

/*
==============
AD_EndpointGetBufferFramesAvail
==============
*/
bool AD_EndpointGetBufferFramesAvail(AD_Endpoint *const endpoint, unsigned int *outFramecount)
{
  AD_EndpointFlow flow; 
  AD_Endpoint_Platform *platformData; 
  __int64 v6; 
  IAudioClient2 *instance; 
  int v9; 
  int v10; 

  if ( !AD_EndpointIsActive(endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1383, ASSERT_TYPE_ASSERT, "AD_EndpointIsActive( endpoint )", "AD_EndpointIsActive( endpoint )") )
    __debugbreak();
  *outFramecount = 0;
  if ( endpoint->pendingAction != 2 )
  {
    flow = endpoint->flow;
    if ( flow == Graph )
    {
      platformData = endpoint->platformData;
      if ( platformData[656].currentDeviceId.value[45] )
      {
        if ( !*(_QWORD *)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1398, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
          __debugbreak();
        v6 = *(_QWORD *)&platformData[656].currentDeviceId.value[36];
        v10 = 0;
        if ( (*(int (__fastcall **)(_QWORD, int *, unsigned int *))(**(_QWORD **)(v6 + 8) + 64i64))(*(_QWORD *)(v6 + 8), &v10, outFramecount) >= 0 )
          return *outFramecount || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64) + 72i64))(*(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64)) >= 0;
      }
      else
      {
        instance = (IAudioClient2 *)platformData->audioClient1.instance;
        v9 = 0;
        if ( !instance )
          instance = platformData->audioClient2.instance;
        if ( instance->GetCurrentPadding(instance, (unsigned int *)&v9) >= 0 )
        {
          *outFramecount = platformData->deviceBufferSize - v9;
          return 1;
        }
      }
      return 0;
    }
    if ( flow != Screen && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 34, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
      __debugbreak();
    *outFramecount = *(_DWORD *)&endpoint->platformData[20].currentDeviceId.value[4];
  }
  return 1;
}

/*
==============
AD_EndpointGetBuffer_Platform
==============
*/
AD_COMContainer<IAudioClient> *AD_EndpointGetBuffer_Platform(AD_Endpoint *const endpoint)
{
  if ( endpoint->flow >= (unsigned int)Button && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
    __debugbreak();
  return &endpoint->platformData[1].audioClient1;
}

/*
==============
AD_EndpointOpen_Platform
==============
*/
char AD_EndpointOpen_Platform(AD_Endpoint *const endpoint)
{
  HRESULT CommunicationsDeviceForUser; 
  AD_Endpoint_Platform *platformData; 
  AD_EndpointType currentEndpointType; 
  AD_Endpoint_Platform *v5; 
  void *v6; 
  __int64 (__fastcall *v7)(void *, wchar_t *, IMMDevice **); 
  IMMDevice **v8; 
  int v9; 
  int v10; 
  void *deviceEnumerator; 
  __int64 (__fastcall *v12)(void *, bool, __int64, IMMDevice **); 
  IMMDevice **AddressOf; 
  AD_Output_Endpoint_Platform *OutputPlatformData; 
  bool trySupportSpatialAudio; 
  AD_COMContainer<IMMDevice> *p_device; 
  IMMDevice *instance; 
  char *fmt; 
  AD_EndpointRole role; 
  AD_EndpointFlow flow; 
  int v26; 
  AD_WASAPIDeviceInfo deviceInfo; 
  wchar_t dest[56]; 

  if ( endpoint->platformData->device.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 792, ASSERT_TYPE_ASSERT, "endpoint->platformData->device.Peek() == nullptr", "endpoint->platformData->device.Peek() == nullptr") )
    __debugbreak();
  if ( !endpoint->platformData->deviceEnumerator && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 794, ASSERT_TYPE_ASSERT, "endpoint->platformData->deviceEnumerator", "endpoint->platformData->deviceEnumerator") )
    __debugbreak();
  if ( !endpoint->platformData->deviceMixEvent && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 795, ASSERT_TYPE_ASSERT, "endpoint->platformData->deviceMixEvent", "endpoint->platformData->deviceMixEvent") )
    __debugbreak();
  endpoint->platformData->lastSubmitTime = AD_GetTime();
  endpoint->platformData->currentEndpointType = endpoint->platformData->pendingEndpointType;
  if ( (!AD_EndpointIsForUser(endpoint) || endpoint->currentUserInfo.userId == AD_SystemUser.userId && endpoint->currentUserInfo.platformId == AD_SystemUser.platformId) && (AD_EndpointIsForUser(endpoint) || endpoint->currentUserInfo.userId != AD_SystemUser.userId || endpoint->currentUserInfo.platformId != AD_SystemUser.platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 800, ASSERT_TYPE_ASSERT, "( AD_EndpointIsForUser( endpoint ) && ( endpoint->currentUserInfo != AD_SystemUser ) ) || ( !AD_EndpointIsForUser( endpoint ) && ( endpoint->currentUserInfo == AD_SystemUser ) )", "( AD_EndpointIsForUser( endpoint ) && ( endpoint->currentUserInfo != AD_SystemUser ) ) || ( !AD_EndpointIsForUser( endpoint ) && ( endpoint->currentUserInfo == AD_SystemUser ) )") )
    __debugbreak();
  if ( AD_EndpointIsForUser(endpoint) )
    goto LABEL_19;
  platformData = endpoint->platformData;
  currentEndpointType = platformData->currentEndpointType;
  if ( currentEndpointType == Arrow )
  {
    deviceEnumerator = platformData->deviceEnumerator;
    v12 = *(__int64 (__fastcall **)(void *, bool, __int64, IMMDevice **))(*(_QWORD *)platformData->deviceEnumerator + 32i64);
    AddressOf = AD_COMContainer<IMMDevice>::GetAddressOf(&platformData->device);
    CommunicationsDeviceForUser = v12(deviceEnumerator, endpoint->flow != Graph, 1i64, AddressOf);
    goto LABEL_29;
  }
  if ( currentEndpointType == 1 )
  {
LABEL_19:
    CommunicationsDeviceForUser = AD_GetCommunicationsDeviceForUser(endpoint);
LABEL_29:
    v10 = CommunicationsDeviceForUser;
    goto LABEL_30;
  }
  if ( currentEndpointType != Custom )
  {
    LODWORD(fmt) = platformData->currentEndpointType;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "834", (const AD_LogCategory)4, "Unknown endpoint type %d specified", fmt);
    if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
      __debugbreak();
    return 0;
  }
  AD_UTF8ToWChar(platformData->pendingDeviceId.value, dest, 56);
  v5 = endpoint->platformData;
  v6 = v5->deviceEnumerator;
  v7 = *(__int64 (__fastcall **)(void *, wchar_t *, IMMDevice **))(*(_QWORD *)v5->deviceEnumerator + 40i64);
  v8 = AD_COMContainer<IMMDevice>::GetAddressOf(&v5->device);
  v9 = v7(v6, dest, v8);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_31;
  v26 = v9;
  flow = endpoint->flow;
  role = endpoint->role;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "829", Error, "Couldn't create custom device '%s' for role %d, flow %d. HRESULT = 0x%x", endpoint->platformData->pendingDeviceId.value, role, flow, v26);
  if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
    __debugbreak();
LABEL_30:
  if ( v10 >= 0 )
  {
LABEL_31:
    deviceInfo.deviceId.value[0] = 0;
    if ( AD_GetDeviceInfo(&endpoint->platformData->device, &deviceInfo, (const AD_EndpointFlow)endpoint->flow, (const AD_EndpointRole)endpoint->role) )
    {
      if ( endpoint->flow == Graph )
      {
        OutputPlatformData = AD_Endpoint::GetOutputPlatformData(endpoint);
        trySupportSpatialAudio = OutputPlatformData->trySupportSpatialAudio;
        OutputPlatformData->supportSpatialAudio = trySupportSpatialAudio;
        if ( trySupportSpatialAudio )
        {
          if ( AD_EndpointOpen_Spatial(endpoint, &deviceInfo, (const AD_EndpointRole)endpoint->role) )
            return 1;
          AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "858", Canceled, "Couldn't create a spatial device, falling back to wasapi");
          OutputPlatformData->supportSpatialAudio = 0;
        }
      }
      if ( AD_EndpointOpen_WASAPI(endpoint, &deviceInfo, (const AD_EndpointRole)endpoint->role) )
        return 1;
    }
    _RAX = endpoint->platformData;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+258h+deviceInfo.deviceId.value]
      vmovups ymmword ptr [rax+84h], ymm0
      vmovups xmm1, xmmword ptr [rsp+258h+deviceInfo.deviceId.value+20h]
      vmovups xmmword ptr [rax+0A4h], xmm1
      vmovsd  xmm0, qword ptr [rsp+258h+deviceInfo.deviceId.value+30h]
      vmovsd  qword ptr [rax+0B4h], xmm0
    }
  }
  AD_EndpointCleanupCOM(endpoint);
  p_device = &endpoint->platformData->device;
  instance = p_device->instance;
  if ( p_device->instance )
  {
    p_device->instance = NULL;
    instance->Release(instance);
  }
  return 0;
}

/*
==============
AD_EndpointOpen_Spatial
==============
*/
char AD_EndpointOpen_Spatial(AD_Endpoint *const endpoint, AD_WASAPIDeviceInfo *devInfo, const AD_EndpointRole endpointRole)
{
  IMMDevice *instance; 
  HRESULT (__fastcall *Activate)(IMMDevice *, const _GUID *, unsigned int, tagPROPVARIANT *, void **); 
  unsigned int v10; 
  unsigned int v11; 
  WAVEFORMATEXTENSIBLE *v12; 
  const AudioObjectType *v15; 
  _QWORD *v21; 
  __int64 v22; 
  int (__fastcall *v23)(__int64, __int64 *, GUID *, _QWORD *); 
  _QWORD *v24; 
  const AudioObjectType *v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  int (__fastcall *v30)(__int64, _QWORD, __int64); 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v38; 
  __int64 v40; 
  WAVEFORMATEXTENSIBLE *wfx; 
  __int64 v42[2]; 
  __int64 v43[3]; 
  WAVEFORMATEXTENSIBLE *v44; 
  __int64 v46; 
  int v47; 
  void *deviceMixEvent; 
  _QWORD *v49; 
  unsigned int v50; 
  AD_WASAPIDeviceInfo *v51; 
  int v52; 

  v51 = devInfo;
  v42[1] = -2i64;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 161, ASSERT_TYPE_ASSERT, "endpoint", "endpoint") )
    __debugbreak();
  if ( !devInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 162, ASSERT_TYPE_ASSERT, "devInfo", "devInfo") )
    __debugbreak();
  if ( endpoint->flow )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 164, ASSERT_TYPE_ASSERT, "endpoint->flow == AD_EndpointFlow::Output", "Spatial audio only supports output devices.") )
      __debugbreak();
    if ( endpoint->flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
      __debugbreak();
  }
  _RDI = endpoint->platformData;
  if ( _RDI[656].currentDeviceId.value[45] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 167, ASSERT_TYPE_ASSERT, "outputPlatformData->supportSpatialAudio == true", "outputPlatformData->supportSpatialAudio == true") )
    __debugbreak();
  if ( !*(_QWORD *)&_RDI[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 171, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
    __debugbreak();
  instance = _RDI->device.instance;
  Activate = instance->Activate;
  if ( **(_QWORD **)&_RDI[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  if ( ((int (__fastcall *)(IMMDevice *, GUID *, __int64))Activate)(instance, &IID_ISpatialAudioClient, 1i64) < 0 )
    goto LABEL_69;
  v52 = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(***(_QWORD ***)&_RDI[656].currentDeviceId.value[36] + 40i64))(**(_QWORD **)&_RDI[656].currentDeviceId.value[36], &v52) < 0 )
    goto LABEL_69;
  v50 = 0;
  v42[0] = 0i64;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)&_RDI[656].currentDeviceId.value[36] + 48i64))(**(_QWORD **)&_RDI[656].currentDeviceId.value[36], v42) < 0 )
    goto LABEL_67;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42[0] + 24i64))(v42[0], &v50) < 0 )
    goto LABEL_67;
  if ( !v50 )
    goto LABEL_67;
  if ( !v52 )
    goto LABEL_67;
  wfx = NULL;
  v10 = 0;
  if ( !v50 )
    goto LABEL_67;
  do
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD, WAVEFORMATEXTENSIBLE **))(*(_QWORD *)v42[0] + 32i64))(v42[0], 0i64, &wfx) < 0 )
    {
      v12 = wfx;
    }
    else
    {
      v11 = AD_RectifySampleRate(wfx->Format.nSamplesPerSec);
      v12 = wfx;
      if ( v11 == wfx->Format.nSamplesPerSec )
        break;
      v12 = NULL;
      wfx = NULL;
    }
    ++v10;
  }
  while ( v10 < v50 );
  if ( !v12 )
    goto LABEL_67;
  _RDI->deviceFormat = AD_DetermineMixFormat(v12);
  if ( (*(int (__fastcall **)(_QWORD, WAVEFORMATEXTENSIBLE *, unsigned int *))(***(_QWORD ***)&_RDI[656].currentDeviceId.value[36] + 56i64))(**(_QWORD **)&_RDI[656].currentDeviceId.value[36], wfx, &_RDI->deviceBufferSize) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 215, ASSERT_TYPE_ASSERT, "(((HRESULT)(hr)) >= 0)", "SUCCEEDED( hr )") )
    __debugbreak();
  if ( _RDI->deviceBufferSize > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 216, ASSERT_TYPE_ASSERT, "outputPlatformData->deviceBufferSize <= AD_MixerBufferFrames", "outputPlatformData->deviceBufferSize <= AD_MixerBufferFrames") )
    __debugbreak();
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  v15 = &AD_SpeakerBedTypes[4];
  do
  {
    __asm
    {
      vpor    xmm1, xmm1, xmmword ptr [rax-10h]
      vpor    xmm2, xmm2, xmmword ptr [rax]
    }
    v15 += 8;
  }
  while ( (__int64)v15 < (__int64)"c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp" );
  __asm
  {
    vpor    xmm1, xmm1, xmm2
    vpsrldq xmm0, xmm1, 8
    vpor    xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpor    xmm0, xmm2, xmm0
  }
  v44 = wfx;
  __asm { vmovd   [rsp+0C8h+var_60], xmm0 }
  v46 = 0i64;
  v47 = 6;
  deviceMixEvent = _RDI->deviceMixEvent;
  v21 = *(_QWORD **)&_RDI[656].currentDeviceId.value[36];
  v49 = v21 + 18;
  v43[0] = 65i64;
  v43[1] = 40i64;
  v43[2] = (__int64)&v44;
  v22 = *v21;
  v23 = *(int (__fastcall **)(__int64, __int64 *, GUID *, _QWORD *))(*(_QWORD *)*v21 + 80i64);
  v24 = v21 + 1;
  if ( v21[1] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  if ( v23(v22, v43, &IID_ISpatialAudioObjectRenderStream, v24) < 0 )
  {
LABEL_67:
    v40 = v42[0];
    if ( v42[0] )
    {
      v42[0] = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16i64))(v40);
    }
LABEL_69:
    AD_EndpointCleanupCOM(endpoint);
    return 0;
  }
  v25 = AD_SpeakerBedTypes;
  v26 = 16i64;
  v27 = 16i64;
  do
  {
    v28 = *(_QWORD *)&_RDI[656].currentDeviceId.value[36];
    v29 = *(_QWORD *)(v28 + 8);
    v30 = *(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v29 + 80i64);
    v31 = v28 + v26;
    if ( *(_QWORD *)(v28 + v26) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
      __debugbreak();
    if ( v30(v29, *(unsigned int *)v25, v31) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 245, ASSERT_TYPE_ASSERT, "(((HRESULT)(hr)) >= 0)", "SUCCEEDED( hr )") )
      __debugbreak();
    v26 += 8i64;
    ++v25;
    --v27;
  }
  while ( v27 );
  v32 = 16 * _RDI->deviceBufferSize;
  if ( v32 > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 29, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  v33 = 4 * v32;
  if ( v33 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 685, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  *(_DWORD *)&_RDI[656].pendingDeviceId.value[52] = v33;
  memset_0(&_RDI[1].audioClient1, 0, v33);
  _RDI->deviceChannelCount = 16;
  _RDI->deviceRate = wfx->Format.nSamplesPerSec;
  _RBX = (__int64)v51;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+84h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rdi+0A4h], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rdi+0B4h], xmm0
  }
  _RDI->deviceFormFactor = *(_DWORD *)(_RBX + 320);
  _RDI->state = *(_DWORD *)(_RBX + 312);
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&_RDI[656].currentDeviceId.value[36] + 8i64) + 40i64))(*(_QWORD *)(*(_QWORD *)&_RDI[656].currentDeviceId.value[36] + 8i64)) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 266, ASSERT_TYPE_ASSERT, "(((HRESULT)(hr)) >= 0)", "SUCCEEDED( hr )") )
    __debugbreak();
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "267", Canceled, "Created spatial render device: %s", (const char *)(_RBX + 56));
  v38 = v42[0];
  if ( v42[0] )
  {
    v42[0] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16i64))(v38);
  }
  return 1;
}

/*
==============
AD_EndpointOpen_WASAPI
==============
*/
char AD_EndpointOpen_WASAPI(AD_Endpoint *const endpoint, AD_WASAPIDeviceInfo *devInfo, const AD_EndpointRole endpointRole)
{
  AD_EndpointFlow flow; 
  AD_Endpoint_Platform *platformData; 
  IMMDevice *instance; 
  HRESULT (__fastcall *Activate)(IMMDevice *, const _GUID *, unsigned int, tagPROPVARIANT *, void **); 
  AD_COMContainer<IAudioClient2> *p_audioClient2; 
  HRESULT v11; 
  int v12; 
  HRESULT v13; 
  char *fmt; 
  HRESULT outHr; 
  __int64 v17; 
  __int64 v18; 
  int v19; 

  v17 = -2i64;
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 492, ASSERT_TYPE_ASSERT, "endpoint", "endpoint") )
    __debugbreak();
  if ( !devInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 493, ASSERT_TYPE_ASSERT, "devInfo", "devInfo") )
    __debugbreak();
  flow = endpoint->flow;
  if ( flow != Screen )
  {
    if ( flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
      __debugbreak();
    if ( endpoint->platformData[656].currentDeviceId.value[45] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 496, ASSERT_TYPE_ASSERT, "endpoint->flow == AD_EndpointFlow::Input || endpoint->GetOutputPlatformData()->supportSpatialAudio == false", "endpoint->flow == AD_EndpointFlow::Input || endpoint->GetOutputPlatformData()->supportSpatialAudio == false") )
      __debugbreak();
  }
  if ( endpoint->platformData->audioClient1.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 498, ASSERT_TYPE_ASSERT, "endpoint->platformData->audioClient1.Peek() == nullptr", "endpoint->platformData->audioClient1.Peek() == nullptr") )
    __debugbreak();
  if ( endpoint->platformData->audioClient2.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 499, ASSERT_TYPE_ASSERT, "endpoint->platformData->audioClient2.Peek() == nullptr", "endpoint->platformData->audioClient2.Peek() == nullptr") )
    __debugbreak();
  platformData = endpoint->platformData;
  instance = platformData->device.instance;
  Activate = instance->Activate;
  p_audioClient2 = &platformData->audioClient2;
  if ( platformData->audioClient2.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  HIDWORD(fmt) = HIDWORD(p_audioClient2);
  v11 = ((__int64 (__fastcall *)(IMMDevice *, GUID *, __int64))Activate)(instance, &IID_IAudioClient2, 1i64);
  if ( v11 >= 0 )
  {
    v18 = 12i64;
    v12 = 0;
    if ( endpoint->flow == Screen )
    {
      v19 = 8;
    }
    else if ( endpointRole == Communications )
    {
      v19 = 8;
    }
    else
    {
      LOBYTE(v12) = endpointRole == BGM;
      v19 = v12 + 6;
    }
    v13 = endpoint->platformData->audioClient2.instance->SetClientProperties(endpoint->platformData->audioClient2.instance, (const AudioClientProperties *)&v18);
    outHr = v13;
    if ( v13 < 0 )
    {
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "562", Error, "SetClientProperties failed for device: %s. HRESULT = 0x%x", devInfo->deviceName, v13);
      if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
        __debugbreak();
    }
    if ( AD_EndpointOpen_WASAPI_Common_IAudioClient2_(endpoint->platformData->audioClient2.instance, endpoint, devInfo, endpointRole, &outHr) )
      return 1;
    v11 = outHr;
  }
  LODWORD(fmt) = v11;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "584", Error, "Failed to create wasapi device. HRESULT = 0x%x", fmt);
  if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
    __debugbreak();
  AD_EndpointCleanupCOM(endpoint);
  return 0;
}

/*
==============
AD_EndpointSubmitBuffer
==============
*/
char AD_EndpointSubmitBuffer(AD_Endpoint *const endpoint, const unsigned int numFrames)
{
  unsigned int deviceChannelCount; 
  __int64 v7; 
  unsigned int i; 
  AD_EndpointFormat deviceFormat; 
  __int32 v10; 
  __int32 v11; 
  unsigned int v12; 
  unsigned int v14; 
  char *v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  char v21; 
  void **v26; 
  char v29; 
  _BYTE *v30; 
  unsigned int v31; 
  __int64 v33; 
  unsigned int v34; 
  char *v35; 
  int v36; 
  unsigned int v37; 
  __int64 v38; 
  void **v47; 
  unsigned int v50; 
  __int64 v52; 
  unsigned int v53; 
  char *v54; 
  unsigned int v56; 
  __int64 v57; 
  void **v77; 
  unsigned int v83; 
  __int64 v84; 
  unsigned int v85; 
  char *v86; 
  __int64 v87; 
  unsigned int v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  void **v92; 
  char *v93; 
  int v94; 
  __int64 v96; 
  unsigned int v97; 
  AD_EndpointFormat v99; 
  __int32 v101; 
  unsigned int v102; 
  char *v115; 
  unsigned int v117; 
  unsigned int v118; 
  char *v119; 
  unsigned int v120; 
  AD_COMContainer<IAudioClient2> *p_audioClient2; 
  __int64 v130; 
  char *v131; 
  char *v132; 
  unsigned int v135; 
  unsigned int v159; 
  __int64 v160; 
  unsigned int v162; 
  unsigned int v186; 
  __int64 v187; 
  __int64 v205; 
  unsigned int v212; 
  int v218; 
  double v220; 
  void *v221[3]; 
  char v222[184]; 

  if ( endpoint->flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
    __debugbreak();
  _RBX = endpoint->platformData;
  deviceChannelCount = _RBX->deviceChannelCount;
  if ( _RBX[656].currentDeviceId.value[45] )
  {
    if ( !*(_QWORD *)&_RBX[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1116, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
      __debugbreak();
    if ( deviceChannelCount != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1117, ASSERT_TYPE_ASSERT, "AD_SpatialBedChannels == channelCount", "AD_SpatialBedChannels == channelCount") )
      __debugbreak();
    v7 = 16i64;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (*(int (__fastcall **)(_QWORD, void **, char *))(**(_QWORD **)(v7 + *(_QWORD *)&_RBX[656].currentDeviceId.value[36]) + 24i64))(*(_QWORD *)(v7 + *(_QWORD *)&_RBX[656].currentDeviceId.value[36]), &v221[i + 2], &v222[4 * i + 120]) < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&_RBX[656].currentDeviceId.value[36] + 8i64) + 72i64))(*(_QWORD *)(*(_QWORD *)&_RBX[656].currentDeviceId.value[36] + 8i64));
        return 0;
      }
      v7 += 8i64;
    }
    deviceFormat = _RBX->deviceFormat;
    if ( deviceFormat )
    {
      v10 = deviceFormat - 2;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            v12 = 0;
            if ( numFrames )
            {
              __asm { vmovss  xmm2, cs:__real@c2fe0000 }
              do
              {
                v14 = 0;
                if ( deviceChannelCount >= 4 )
                {
                  v15 = v222;
                  v16 = deviceChannelCount * v12 + 1;
                  v17 = ((deviceChannelCount - 4) >> 2) + 1;
                  v18 = v17;
                  v14 = 4 * v17;
                  do
                  {
                    __asm
                    {
                      vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                      vcvttss2si eax, xmm1
                    }
                    v21 = 0x80 - _EAX;
                    _RAX = *((_QWORD *)v15 - 1);
                    v15 += 32;
                    *(_BYTE *)(v12 + _RAX) = v21;
                    __asm
                    {
                      vmulss  xmm1, xmm2, dword ptr [rbx+r8*4+100h]
                      vcvttss2si eax, xmm1
                    }
                    *(_BYTE *)(v12 + *((_QWORD *)v15 - 4)) = 0x80 - _RAX;
                    __asm
                    {
                      vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                      vcvttss2si eax, xmm1
                    }
                    *(_BYTE *)(v12 + *((_QWORD *)v15 - 3)) = 0x80 - _RAX;
                    __asm
                    {
                      vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                      vcvttss2si eax, xmm1
                    }
                    v16 += 4;
                    *(_BYTE *)(v12 + *((_QWORD *)v15 - 2)) = 0x80 - _RAX;
                    --v18;
                  }
                  while ( v18 );
                }
                if ( v14 < deviceChannelCount )
                {
                  v26 = &v221[v14 + 2];
                  do
                  {
                    __asm
                    {
                      vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                      vcvttss2si eax, xmm1
                    }
                    v29 = 0x80 - _EAX;
                    v30 = *v26;
                    ++v14;
                    ++v26;
                    v30[v12] = v29;
                  }
                  while ( v14 < deviceChannelCount );
                }
                ++v12;
              }
              while ( v12 < numFrames );
            }
          }
          else
          {
            AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "1250", (const AD_LogCategory)4, "Unsupported spatial object format");
            if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
              __debugbreak();
          }
        }
        else
        {
          v31 = 0;
          if ( numFrames )
          {
            __asm { vmovss  xmm2, cs:__real@46fffe00 }
            v33 = 0i64;
            do
            {
              v34 = 0;
              if ( deviceChannelCount >= 4 )
              {
                v35 = v222;
                v36 = deviceChannelCount * v31 + 1;
                v37 = ((deviceChannelCount - 4) >> 2) + 1;
                v38 = v37;
                v34 = 4 * v37;
                do
                {
                  v35 += 32;
                  __asm
                  {
                    vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                    vcvttss2si ecx, xmm1
                  }
                  *(_WORD *)(v33 + *((_QWORD *)v35 - 5)) = _ECX;
                  __asm
                  {
                    vmulss  xmm1, xmm2, dword ptr [rbx+r8*4+100h]
                    vcvttss2si ecx, xmm1
                  }
                  *(_WORD *)(v33 + *((_QWORD *)v35 - 4)) = _ECX;
                  __asm
                  {
                    vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                    vcvttss2si ecx, xmm1
                  }
                  *(_WORD *)(v33 + *((_QWORD *)v35 - 3)) = _ECX;
                  v36 += 4;
                  __asm
                  {
                    vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                    vcvttss2si ecx, xmm1
                  }
                  *(_WORD *)(v33 + *((_QWORD *)v35 - 2)) = _ECX;
                  --v38;
                }
                while ( v38 );
              }
              if ( v34 < deviceChannelCount )
              {
                v47 = &v221[v34 + 2];
                do
                {
                  ++v34;
                  ++v47;
                  __asm
                  {
                    vmulss  xmm1, xmm2, dword ptr [rbx+rax*4+100h]
                    vcvttss2si ecx, xmm1
                  }
                  *(_WORD *)((char *)*(v47 - 1) + v33) = _ECX;
                }
                while ( v34 < deviceChannelCount );
              }
              ++v31;
              v33 += 2i64;
            }
            while ( v31 < numFrames );
          }
        }
      }
      else
      {
        v50 = 0;
        if ( numFrames )
        {
          __asm { vmovsd  xmm2, cs:__real@41dfffffffc00000 }
          v52 = 0i64;
          do
          {
            v53 = 0;
            if ( deviceChannelCount >= 4 )
            {
              v54 = v222;
              _R8 = deviceChannelCount * v50 + 1;
              v56 = ((deviceChannelCount - 4) >> 2) + 1;
              v57 = v56;
              v53 = 4 * v56;
              do
              {
                _RAX = (unsigned int)(_R8 - 1);
                v54 += 32;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rax*4+100h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si ecx, xmm1
                }
                *(_DWORD *)(v52 + *((_QWORD *)v54 - 5)) = _ECX;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+r8*4+100h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si ecx, xmm1
                }
                *(_DWORD *)(v52 + *((_QWORD *)v54 - 4)) = _ECX;
                _RAX = (unsigned int)(_R8 + 1);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rax*4+100h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si ecx, xmm1
                }
                *(_DWORD *)(v52 + *((_QWORD *)v54 - 3)) = _ECX;
                _RAX = (unsigned int)(_R8 + 2);
                _R8 = (unsigned int)(_R8 + 4);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rax*4+100h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si ecx, xmm1
                }
                *(_DWORD *)(v52 + *((_QWORD *)v54 - 2)) = _ECX;
                --v57;
              }
              while ( v57 );
            }
            if ( v53 < deviceChannelCount )
            {
              v77 = &v221[v53 + 2];
              do
              {
                _RAX = deviceChannelCount * v50 + v53++;
                ++v77;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rax*4+100h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si ecx, xmm1
                }
                *(_DWORD *)((char *)*(v77 - 1) + v52) = _ECX;
              }
              while ( v53 < deviceChannelCount );
            }
            ++v50;
            v52 += 4i64;
          }
          while ( v50 < numFrames );
        }
      }
    }
    else
    {
      v83 = 0;
      if ( numFrames )
      {
        v84 = 0i64;
        do
        {
          v85 = 0;
          if ( deviceChannelCount >= 4 )
          {
            v86 = v222;
            v87 = deviceChannelCount * v83 + 1;
            v88 = ((deviceChannelCount - 4) >> 2) + 1;
            v89 = v88;
            v85 = 4 * v88;
            do
            {
              v90 = *((_QWORD *)v86 - 1);
              v86 += 32;
              *(_DWORD *)(v84 + v90) = *((_DWORD *)&_RBX[1].audioClient1.instance + (unsigned int)(v87 - 1));
              *(_DWORD *)(v84 + *((_QWORD *)v86 - 4)) = *((_DWORD *)&_RBX[1].audioClient1.instance + v87);
              *(_DWORD *)(v84 + *((_QWORD *)v86 - 3)) = *((_DWORD *)&_RBX[1].audioClient1.instance + (unsigned int)(v87 + 1));
              v91 = (unsigned int)(v87 + 2);
              v87 = (unsigned int)(v87 + 4);
              *(_DWORD *)(v84 + *((_QWORD *)v86 - 2)) = *((_DWORD *)&_RBX[1].audioClient1.instance + v91);
              --v89;
            }
            while ( v89 );
          }
          if ( v85 < deviceChannelCount )
          {
            v92 = &v221[v85 + 2];
            do
            {
              v93 = (char *)*v92;
              v94 = *((_DWORD *)&_RBX[1].audioClient1.instance + deviceChannelCount * v83 + v85);
              ++v92;
              ++v85;
              *(_DWORD *)&v93[v84] = v94;
            }
            while ( v85 < deviceChannelCount );
          }
          ++v83;
          v84 += 4i64;
        }
        while ( v83 < numFrames );
      }
    }
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&_RBX[656].currentDeviceId.value[36] + 8i64) + 72i64))(*(_QWORD *)(*(_QWORD *)&_RBX[656].currentDeviceId.value[36] + 8i64)) < 0 )
      return 0;
  }
  else
  {
    v96 = *(_QWORD *)&_RBX[656].currentDeviceId.value[28];
    v97 = 0;
    v221[0] = NULL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v96 + 24i64))(v96, numFrames, v221) < 0 )
      return 0;
    v99 = _RBX->deviceFormat;
    _RSI = &_RBX[1].audioClient1;
    __asm { vmovaps [rsp+148h+var_38], xmm6 }
    if ( v99 )
    {
      v101 = v99 - 2;
      if ( v101 )
      {
        if ( v101 == 1 )
        {
          if ( deviceChannelCount == 8 )
          {
            if ( ((__int64)v221[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1334, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v220) )
              __debugbreak();
            if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1335, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128i ) == 0", "size_t(sampleBuffer) % alignof( __m128i ) == 0", v220) )
              __debugbreak();
            _R9 = (unsigned __int64)v221[0];
            v102 = 0;
            __asm { vmovups xmm4, cs:__xmm@46ffff0046ffff0046ffff0046ffff00 }
            if ( 2 * numFrames )
            {
              do
              {
                _RDX = v102;
                __asm { vmulps  xmm0, xmm4, xmmword ptr [rsi+rax*8] }
                _RAX = v102 + 1;
                v102 += 2;
                __asm { vcvttps2dq xmm3, xmm0 }
                _RCX = (unsigned int)_RAX;
                _RAX *= 2i64;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsi+rax*8]
                  vshufps xmm0, xmm0, xmm0, 4Eh ; 'N'
                  vmulps  xmm1, xmm0, xmm4
                  vcvttps2dq xmm2, xmm1
                  vpackssdw xmm0, xmm3, xmm3
                  vpackssdw xmm1, xmm2, xmm2
                  vmovq   qword ptr [r9+rdx*8], xmm0
                  vmovq   qword ptr [r9+rcx*8], xmm1
                }
              }
              while ( v102 < 2 * numFrames );
            }
          }
          else
          {
            v115 = (char *)v221[0];
            __asm { vmovss  xmm2, cs:__real@46fffe00 }
            v117 = deviceChannelCount * numFrames;
            v118 = 0;
            if ( deviceChannelCount * numFrames >= 4 )
            {
              v119 = (char *)v221[0] + 4;
              v120 = ((v117 - 4) >> 2) + 1;
              p_audioClient2 = &_RBX[1].audioClient2;
              _R9 = v120;
              v118 = 4 * v120;
              do
              {
                v119 += 8;
                __asm { vmulss  xmm1, xmm2, dword ptr [rdx-8] }
                p_audioClient2 += 2;
                __asm { vcvttss2si eax, xmm1 }
                *((_WORD *)v119 - 6) = _EAX;
                __asm
                {
                  vmulss  xmm1, xmm2, dword ptr [rdx-14h]
                  vcvttss2si eax, xmm1
                }
                *((_WORD *)v119 - 5) = _EAX;
                __asm
                {
                  vmulss  xmm1, xmm2, dword ptr [rdx-10h]
                  vcvttss2si eax, xmm1
                }
                *((_WORD *)v119 - 4) = _EAX;
                __asm
                {
                  vmulss  xmm1, xmm2, dword ptr [rdx-0Ch]
                  vcvttss2si eax, xmm1
                }
                *((_WORD *)v119 - 3) = _EAX;
                --_R9;
              }
              while ( _R9 );
            }
            if ( v118 < v117 )
            {
              v130 = v117 - v118;
              v131 = &v115[2 * v118];
              v132 = (char *)&_RSI[v118 / 2];
              do
              {
                v131 += 2;
                __asm { vmulss  xmm1, xmm2, dword ptr [rdx] }
                v132 += 4;
                __asm { vcvttss2si eax, xmm1 }
                *((_WORD *)v131 - 1) = _EAX;
                --v130;
              }
              while ( v130 );
            }
          }
        }
        else
        {
          v97 = 2;
        }
      }
      else if ( deviceChannelCount == 8 )
      {
        if ( ((__int64)v221[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1303, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v220) )
          __debugbreak();
        if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1304, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128i ) == 0", "size_t(sampleBuffer) % alignof( __m128i ) == 0", v220) )
          __debugbreak();
        _R9 = (unsigned __int64)v221[0];
        v135 = 0;
        __asm { vmovupd xmm6, cs:__xmm@41dfffffffe0000041dfffffffe00000 }
        if ( 2 * numFrames )
        {
          do
          {
            _RDX = 2i64 * (v135 + 1);
            _RCX = 2i64 * v135;
            v135 += 2;
            __asm
            {
              vmovups xmm2, xmmword ptr [rsi+rcx*8]
              vmovups xmm0, xmmword ptr [rsi+rdx*8]
              vshufps xmm5, xmm0, xmm0, 4Eh ; 'N'
              vcvtps2pd xmm0, xmm2
              vmulpd  xmm1, xmm0, xmm6
              vcvtpd2dq xmm4, xmm1
              vmovhlps xmm0, xmm2, xmm2
              vcvtps2pd xmm1, xmm0
              vmulpd  xmm2, xmm1, xmm6
              vcvtpd2dq xmm3, xmm2
              vpunpcklqdq xmm0, xmm4, xmm3
              vmovdqu xmmword ptr [r9+rcx*8], xmm0
              vcvtps2pd xmm0, xmm5
              vmulpd  xmm1, xmm0, xmm6
              vmovhlps xmm0, xmm5, xmm5
              vcvtpd2dq xmm4, xmm1
              vcvtps2pd xmm1, xmm0
              vmulpd  xmm2, xmm1, xmm6
              vcvtpd2dq xmm3, xmm2
              vpunpcklqdq xmm0, xmm4, xmm3
              vmovdqu xmmword ptr [r9+rdx*8], xmm0
            }
          }
          while ( v135 < 2 * numFrames );
        }
      }
      else
      {
        _R10 = (char *)v221[0];
        v159 = deviceChannelCount * numFrames;
        _R9 = 0i64;
        if ( deviceChannelCount * numFrames )
        {
          if ( v159 >= 8 )
          {
            v160 = v159 - 1;
            if ( v221[0] > (char *)_RSI + 4 * v160 || (char *)v221[0] + 4 * v160 < (char *)_RSI )
            {
              __asm { vmovupd xmm4, cs:__xmm@41dfffffffc0000041dfffffffc00000 }
              v162 = 4;
              do
              {
                _RAX = (unsigned int)_R9;
                _R9 = (unsigned int)(_R9 + 8);
                __asm
                {
                  vmovsd  xmm1, qword ptr [rsi+rax*4]
                  vcvtps2pd xmm2, xmm1
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                  vmovq   qword ptr [r10+rax*4], xmm0
                }
                _RAX = v162 - 2;
                __asm
                {
                  vmovsd  xmm1, qword ptr [rsi+rax*4]
                  vcvtps2pd xmm2, xmm1
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                  vmovq   qword ptr [r10+rax*4], xmm0
                }
                _RAX = v162;
                __asm
                {
                  vmovsd  xmm1, qword ptr [rsi+rax*4]
                  vcvtps2pd xmm2, xmm1
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                  vmovq   qword ptr [r10+rax*4], xmm0
                }
                _RAX = v162 + 2;
                v162 += 8;
                __asm
                {
                  vmovsd  xmm1, qword ptr [rsi+rax*4]
                  vcvtps2pd xmm2, xmm1
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                  vmovq   qword ptr [r10+rax*4], xmm0
                }
              }
              while ( (unsigned int)_R9 < (v159 & 0xFFFFFFF8) );
            }
          }
          if ( (unsigned int)_R9 < v159 )
          {
            __asm { vmovsd  xmm2, cs:__real@41dfffffffc00000 }
            if ( v159 - (unsigned int)_R9 >= 4 )
            {
              _RDX = (char *)_RSI - _R10;
              _RCX = (__int64)&_R10[4 * (unsigned int)_R9 + 4];
              v186 = ((v159 - (unsigned int)_R9 - 4) >> 2) + 1;
              v187 = v186;
              _R9 = (unsigned int)_R9 + 4 * v186;
              do
              {
                __asm { vmovss  xmm0, dword ptr [rdx+rcx-4] }
                _RCX += 16i64;
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si eax, xmm1
                }
                *(_DWORD *)(_RCX - 20) = _EAX;
                __asm
                {
                  vmovss  xmm0, dword ptr [rdx+rcx-10h]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si eax, xmm1
                }
                *(_DWORD *)(_RCX - 16) = _EAX;
                __asm
                {
                  vmovss  xmm0, dword ptr [rdx+rcx-0Ch]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si eax, xmm1
                }
                *(_DWORD *)(_RCX - 12) = _EAX;
                __asm
                {
                  vmovss  xmm0, dword ptr [rdx+rcx-8]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si eax, xmm1
                }
                *(_DWORD *)(_RCX - 8) = _EAX;
                --v187;
              }
              while ( v187 );
            }
            if ( (unsigned int)_R9 < v159 )
            {
              _RSI = (char *)_RSI - _R10;
              v205 = v159 - (unsigned int)_R9;
              _RCX = &_R10[4 * (unsigned int)_R9];
              do
              {
                __asm { vmovss  xmm0, dword ptr [rcx+rsi] }
                _RCX += 4;
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmulsd  xmm1, xmm0, xmm2
                  vcvttsd2si eax, xmm1
                }
                *((_DWORD *)_RCX - 1) = _EAX;
                --v205;
              }
              while ( v205 );
            }
          }
        }
      }
    }
    else if ( deviceChannelCount == 8 )
    {
      if ( ((__int64)v221[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1278, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v220) )
        __debugbreak();
      if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1279, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128 ) == 0", "size_t(sampleBuffer) % alignof( __m128 ) == 0", v220) )
        __debugbreak();
      _R8 = v221[0];
      _R9 = 2 * numFrames;
      v212 = 0;
      while ( v212 < (unsigned int)_R9 )
      {
        _RAX = 2i64 * v212;
        _RCX = 2i64 * (v212 + 1);
        v212 += 2;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi+rax*8]
          vmovups xmmword ptr [r8+rax*8], xmm0
          vmovups xmm0, xmmword ptr [rsi+rcx*8]
          vshufps xmm1, xmm0, xmm0, 4Eh ; 'N'
          vmovups xmmword ptr [r8+rcx*8], xmm1
        }
      }
    }
    else
    {
      memcpy_0(v221[0], &_RBX[1].audioClient1, 4 * deviceChannelCount * numFrames);
    }
    v218 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)&_RBX[656].currentDeviceId.value[28] + 32i64))(*(_QWORD *)&_RBX[656].currentDeviceId.value[28], numFrames, v97, _R9);
    __asm { vmovaps xmm6, [rsp+148h+var_38] }
    if ( v218 < 0 )
      return 0;
  }
  return 1;
}

/*
==============
AD_FindMatchingDeviceIndex
==============
*/
__int64 AD_FindMatchingDeviceIndex(AD_COMContainer<IMMDeviceCollection> deviceCollectionInterface, const wchar_t *targetDeviceId)
{
  unsigned int v4; 
  bool i; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  IMMDeviceCollection_vtbl *v9; 
  IMMDeviceCollection_vtbl *v11; 
  __int64 v12; 
  LPVOID String1[8]; 
  unsigned int v14; 
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); 

  String1[1] = (LPVOID)-2i64;
  v14 = 0;
  v4 = 0;
  for ( i = (*((int (__fastcall **)(IMMDeviceCollection_vtbl *, unsigned int *))deviceCollectionInterface.instance->QueryInterface + 3))(deviceCollectionInterface.instance->__vftable, &v14) < 0; !i && v4 < v14; i = v6 < 0 )
  {
    v15 = NULL;
    v6 = (*((__int64 (__fastcall **)(IMMDeviceCollection_vtbl *, _QWORD, _QWORD))deviceCollectionInterface.instance->QueryInterface + 4))(deviceCollectionInterface.instance->__vftable, v4, &v15);
    if ( v6 >= 0 )
    {
      v12 = 0i64;
      v6 = (**v15)(v15, &IID_IMMXboxDevice, &v12);
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 56i64))(v12, String1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
        if ( !_wcsicmp((const wchar_t *)String1[0], targetDeviceId) )
        {
          CoTaskMemFree(String1[0]);
          v8 = (__int64)v15;
          if ( v15 )
          {
            v15 = NULL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
          }
          v9 = deviceCollectionInterface.instance->__vftable;
          if ( deviceCollectionInterface.instance->__vftable )
          {
            deviceCollectionInterface.instance->__vftable = NULL;
            (*((void (__fastcall **)(IMMDeviceCollection_vtbl *))v9->QueryInterface + 2))(v9);
          }
          return v4;
        }
        CoTaskMemFree(String1[0]);
      }
    }
    v7 = (__int64)v15;
    if ( v15 )
    {
      v15 = NULL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    }
    ++v4;
  }
  v11 = deviceCollectionInterface.instance->__vftable;
  if ( deviceCollectionInterface.instance->__vftable )
  {
    deviceCollectionInterface.instance->__vftable = NULL;
    (*((void (__fastcall **)(IMMDeviceCollection_vtbl *))v11->QueryInterface + 2))(v11);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
AD_FindMatchingUserDevice
==============
*/
Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *AD_FindMatchingUserDevice(Windows::Xbox::System::User *user, AD_EndpointFlow flow, AD_EndpointType endpointType)
{
  Windows::Xbox::System::User *v5; 
  int v6; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v7; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v8; 
  __int64 v9; 
  __int64 m_i; 
  Platform::Guid *i; 
  int v12; 
  __int64 v13; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v22[4]; 
  Platform::Collections::VectorViewIterator<Windows::Xbox::System::IAudioDeviceInfo _> result; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v24; 
  __int64 v25; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v; 

  v22[1] = -2i64;
  v5 = user;
  v = NULL;
  v6 = user->__abi_get_AudioDevices(user, &v);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v;
  v8 = v;
  if ( v )
  {
    v->__abi_AddRef(v);
    v7 = v;
  }
  if ( v7 )
    v7->__abi_Release(v7);
  v22[0] = (__int64)v8;
  if ( v8 )
    v8->__abi_AddRef(v8);
  v22[2] = (__int64)v8;
  if ( v8 )
  {
    v8->__abi_Release(v8);
    v8->__abi_AddRef(v8);
  }
  v24 = v8;
  v9 = 0i64;
  v25 = 0i64;
  Windows::Foundation::Collections::end<Windows::Xbox::System::IAudioDeviceInfo __gc *>(&result, v8);
  m_i = result.m_i;
  if ( !result.m_i )
  {
LABEL_44:
    if ( result.m_v )
      result.m_v->__abi_Release(result.m_v);
    if ( v8 )
      v8->__abi_Release(v8);
    if ( v8 )
      v8->__abi_Release(v8);
    if ( flow || endpointType != 1 )
      return 0i64;
    else
      return (Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *)AD_FindMatchingUserDevice(v5, Graph, Arrow);
  }
  v22[0] = 0i64;
  for ( i = NULL; ; i = (Platform::Guid *)(unsigned int)v9 )
  {
    v12 = v8->Platform::Object::__vftable[1].__abi_QueryInterface(v8, i, (void **)v22);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v22[0];
    v14 = (Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *)v22[0];
    if ( v22[0] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22[0] + 8i64))(v22[0]);
      v13 = v22[0];
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    v = v14;
    if ( v14 )
      v14->__abi_AddRef(v14);
    v22[3] = (__int64)v14;
    if ( v14 )
      v14->__abi_Release(v14);
    LODWORD(v) = 0;
    v15 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> **))v14->Platform::Object::__vftable[1].__abi_GetIids)(v14, &v);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    if ( (_DWORD)v )
    {
      LODWORD(v) = 0;
      v16 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> **))v14->Platform::Object::__vftable[1].__abi_GetIids)(v14, &v);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      if ( (_DWORD)v != 1 )
        goto LABEL_38;
    }
    LODWORD(v) = 0;
    v17 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> **))v14->Platform::Object::__vftable[1].__abi_AddRef)(v14, &v);
    if ( flow != Screen )
      break;
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    if ( !(_DWORD)v )
    {
      LODWORD(v) = 0;
      v18 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> **))v14->Platform::Object::__vftable[1].__abi_Release)(v14, &v);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      if ( !(_DWORD)v )
        goto LABEL_40;
    }
LABEL_38:
    v14->__abi_Release(v14);
    v25 = ++v9;
    if ( v9 == m_i )
    {
      v5 = user;
      goto LABEL_44;
    }
    v22[0] = 0i64;
  }
  if ( v17 < 0 )
    __abi_WinRTraiseException(v17);
  if ( (_DWORD)v != 1 )
    goto LABEL_38;
  v19 = 2;
  if ( endpointType == 1 )
    v19 = 0;
  LODWORD(v) = 0;
  v20 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> **))v14->Platform::Object::__vftable[1].__abi_Release)(v14, &v);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  if ( (_DWORD)v != v19 )
    goto LABEL_38;
LABEL_40:
  v14->__abi_AddRef(v14);
  v14->__abi_Release(v14);
  if ( result.m_v )
    result.m_v->__abi_Release(result.m_v);
  v8->__abi_Release(v8);
  v8->__abi_Release(v8);
  return v14;
}

/*
==============
AD_GetCommunicationsDeviceForUser
==============
*/
__int64 AD_GetCommunicationsDeviceForUser(AD_Endpoint *const endpoint)
{
  HSTRING v2; 
  Windows::Xbox::System::User *v3; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v6; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v7; 
  __int64 v8; 
  __int64 v9; 
  Platform::Guid *v10; 
  int v11; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v12; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v18; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *MatchingUserDevice; 
  HSTRING v21; 
  int v22; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v23; 
  int v24; 
  HSTRING v25; 
  PCWSTR v26; 
  unsigned __int64 v27; 
  const wchar_t *v28; 
  int v29; 
  int MatchingDeviceIndex; 
  void *v31; 
  __int64 (__fastcall *v32)(void *, _QWORD, AD_COMContainer<IMMDevice> *); 
  AD_Endpoint_Platform *platformData; 
  unsigned int v34; 
  void *v35; 
  Platform::Guid pGuid; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v37; 
  __int64 v38; 
  Platform::Collections::VectorViewIterator<Windows::Xbox::System::User _> result; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v; 
  void *ppActivationFactory; 
  HSTRING newString; 

  if ( endpoint->role != Communications && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 684, ASSERT_TYPE_ASSERT, "endpoint->role == AD_EndpointRole::Communications", "endpoint->role == AD_EndpointRole::Communications") )
    __debugbreak();
  if ( endpoint->platformData->currentEndpointType >= (unsigned int)Custom && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 686, ASSERT_TYPE_ASSERT, "endpoint->platformData->currentEndpointType == AD_EndpointType::DefaultMain || endpoint->platformData->currentEndpointType == AD_EndpointType::DefaultCommunications", "endpoint->platformData->currentEndpointType == AD_EndpointType::DefaultMain || endpoint->platformData->currentEndpointType == AD_EndpointType::DefaultCommunications") )
    __debugbreak();
  v2 = NULL;
  v3 = NULL;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v = NULL;
  v5 = (*(__int64 (__fastcall **)(void *, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> **))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, &v);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v;
  v7 = v;
  if ( v )
  {
    v->__abi_AddRef(v);
    v6 = v;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  newString = (HSTRING)v7;
  if ( v7 )
    v7->__abi_AddRef(v7);
  newString = (HSTRING)v7;
  if ( v7 )
    v7->__abi_Release(v7);
  if ( v7 )
    v7->__abi_AddRef(v7);
  if ( v7 )
    v7->__abi_Release(v7);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  newString = (HSTRING)v7;
  if ( v7 )
    v7->__abi_AddRef(v7);
  if ( v7 )
  {
    v7->__abi_Release(v7);
    v7->__abi_AddRef(v7);
  }
  v37 = v7;
  v8 = 0i64;
  v38 = 0i64;
  Windows::Foundation::Collections::end<Windows::Xbox::System::User __gc *>(&result, v7);
  v9 = 0i64;
  v10 = NULL;
  while ( v9 != result.m_i )
  {
    v = NULL;
    v11 = v7->Platform::Object::__vftable[1].__abi_QueryInterface(v7, v10, (void **)&v);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = v;
    v13 = v;
    if ( v )
    {
      v->__abi_AddRef(v);
      v12 = v;
    }
    if ( v12 )
      v12->__abi_Release(v12);
    ppActivationFactory = v13;
    if ( v13 )
      v13->__abi_AddRef(v13);
    if ( v13 )
      v13->__abi_Release(v13);
    ppActivationFactory = v13;
    if ( v13 )
      v13->__abi_AddRef(v13);
    if ( v13 )
      v13->__abi_Release(v13);
    ppActivationFactory = NULL;
    v14 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, void **))v13->Platform::Object::__vftable[2].__abi_GetIids)(v13, &ppActivationFactory);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = (HSTRING)ppActivationFactory;
    if ( ppActivationFactory )
    {
      v16 = WindowsDuplicateString_0((HSTRING)ppActivationFactory, &newString);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v2 = newString;
      v15 = (HSTRING)ppActivationFactory;
    }
    WindowsDeleteString_0(v15);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v2, NULL);
    v18 = _wcstoui64(StringRawBuffer_0, NULL, 10);
    WindowsDeleteString_0(v2);
    if ( v18 == endpoint->currentUserInfo.platformId )
    {
      if ( v13 )
      {
        v13->__abi_AddRef(v13);
        v3 = (Windows::Xbox::System::User *)v13;
      }
      v13->__abi_Release(v13);
      break;
    }
    v13->__abi_Release(v13);
    v9 = ++v8;
    v38 = v8;
    v10 = (Platform::Guid *)(unsigned int)v8;
    v2 = NULL;
  }
  if ( result.m_v )
    ((void (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, Platform::Guid *))result.m_v->__abi_Release)(result.m_v, v10);
  if ( v7 )
    ((void (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, Platform::Guid *))v7->__abi_Release)(v7, v10);
  if ( v7 )
    ((void (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, Platform::Guid *))v7->__abi_Release)(v7, v10);
  if ( v3 )
  {
    MatchingUserDevice = AD_FindMatchingUserDevice(v3, endpoint->flow, endpoint->platformData->currentEndpointType);
    v21 = (HSTRING)MatchingUserDevice;
    v = (Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *)MatchingUserDevice;
    if ( MatchingUserDevice )
      MatchingUserDevice->__abi_AddRef(MatchingUserDevice);
    newString = v21;
    if ( v21 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16i64))(v21);
    if ( v21 )
    {
      v = NULL;
      v22 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> **))(*(_QWORD *)v21 + 48i64))(v21, &v);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v23 = v;
      if ( v )
      {
        v24 = WindowsDuplicateString_0((HSTRING)v, (HSTRING *)&ppActivationFactory);
        if ( v24 < 0 )
          __abi_WinRTraiseException(v24);
        v25 = (HSTRING)ppActivationFactory;
        v23 = v;
      }
      else
      {
        v25 = NULL;
      }
      WindowsDeleteString_0((HSTRING)v23);
      v26 = WindowsGetStringRawBuffer_0(v25, NULL);
      WindowsDeleteString_0(v25);
      if ( !v26 )
        goto LABEL_89;
      v27 = -1i64;
      do
        ++v27;
      while ( v26[v27] );
      if ( v27 > 0x27 && (v28 = v26 + 39) != NULL )
      {
        ppActivationFactory = NULL;
        v29 = (*(__int64 (__fastcall **)(void *, bool, __int64, void **))(*(_QWORD *)endpoint->platformData->deviceEnumerator + 24i64))(endpoint->platformData->deviceEnumerator, endpoint->flow != Graph, 1i64, &ppActivationFactory);
        if ( v29 < 0 )
        {
          v34 = v29;
        }
        else
        {
          v = (Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *)ppActivationFactory;
          if ( ppActivationFactory )
            (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 8i64))(ppActivationFactory);
          MatchingDeviceIndex = AD_FindMatchingDeviceIndex((AD_COMContainer<IMMDeviceCollection>)&v, v28);
          if ( MatchingDeviceIndex < 0 )
          {
            v34 = -2147023728;
          }
          else
          {
            v31 = ppActivationFactory;
            v32 = *(__int64 (__fastcall **)(void *, _QWORD, AD_COMContainer<IMMDevice> *))(*(_QWORD *)ppActivationFactory + 32i64);
            platformData = endpoint->platformData;
            if ( platformData->device.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
              __debugbreak();
            v34 = v32(v31, (unsigned int)MatchingDeviceIndex, &platformData->device);
          }
        }
        v35 = ppActivationFactory;
        if ( ppActivationFactory )
        {
          ppActivationFactory = NULL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16i64))(v35);
        }
      }
      else
      {
LABEL_89:
        v34 = -2147023728;
      }
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16i64))(v21);
      v3->__abi_Release(v3);
      return v34;
    }
    else
    {
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "710", Canceled, "Couldn't find user audio device for PlatformId %lu", endpoint->currentUserInfo.platformId);
      v3->__abi_Release(v3);
      return 2147943568i64;
    }
  }
  else
  {
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "703", Canceled, "Couldn't find user for PlatformId %lu", endpoint->currentUserInfo.platformId);
    return 2147943568i64;
  }
}

/*
==============
AD_RectifySampleRate
==============
*/
__int64 AD_RectifySampleRate(const unsigned int rate)
{
  if ( rate > 0xBB80 )
  {
    if ( rate == 44100 * (rate / 0xAC44) )
      return 44100i64;
    if ( rate == 48000 * (rate / 0xBB80) )
      return 48000i64;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "149", (const AD_LogCategory)4, "Really odd sample rate configured: %d", rate);
    if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
      __debugbreak();
  }
  return rate;
}

/*
==============
AD_SpatialAudioObjectNotifierCallbackImpl
==============
*/
void AD_SpatialAudioObjectNotifierCallbackImpl(AD_Endpoint *endpoint, ISpatialAudioObjectRenderStreamBase *sender, __int64 hnsComplianceDeadlineTime, unsigned int availableDynamicObjectCountChange)
{
  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 24, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
}

