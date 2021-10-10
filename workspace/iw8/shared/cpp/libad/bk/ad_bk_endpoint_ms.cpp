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
void AD_EndpointConsumeBuffer(AD_Endpoint *const endpoint)
{
  AD_Endpoint_Platform *platformData; 
  unsigned int v3; 
  __m128 v4; 
  __int64 v5; 
  unsigned int deviceChannelCount; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __m128 v11; 
  __int64 v12; 
  __m128 v13; 
  __m128 v14; 
  unsigned __int64 v15; 
  unsigned int i; 
  unsigned int v17; 
  AD_EndpointFormat deviceFormat; 
  __int32 v19; 
  __int32 v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  float *v24; 
  unsigned int v25; 
  __int64 v26; 
  __int128 v27; 
  __int128 v28; 
  __int64 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v40; 
  __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  float v44; 
  int v45; 
  __int128 v46; 
  __int64 v47; 
  __int128 v48; 
  __int64 v49; 
  unsigned int v50; 
  unsigned int v51; 
  float *v52; 
  unsigned int v53; 
  __int64 v54; 
  __int128 v55; 
  __int128 v56; 
  __int64 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v66; 
  __int64 v67; 
  unsigned int v68; 
  __int64 v69; 
  float v70; 
  float v71; 
  int v72; 
  float v73; 
  __int128 v74; 
  __int64 v75; 
  __int128 v76; 
  __int64 v77; 
  unsigned int v78; 
  unsigned int v79; 
  float *v80; 
  unsigned int v81; 
  int v82; 
  __int128 v86; 
  __int128 v88; 
  __int128 v89; 
  __int64 v91; 
  __m128 v92; 
  __m128 v93; 
  __m128 v99; 
  __m128 v107; 
  __int128 v108; 
  __int64 v109; 
  unsigned int v110; 
  __int64 v111; 
  __int128 v115; 
  __int64 v121; 
  __m128 v126; 
  __m128 v127; 
  __m128 v131; 
  __int128 v133; 
  __int128 v136; 
  __int128 v138; 
  __int64 v139; 
  unsigned int v140; 
  unsigned int v141; 
  float *v142; 
  unsigned int v143; 
  __int64 v144; 
  __m128 v145; 
  __m128 v146; 
  __int64 v147; 
  __m128 v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v153; 
  __int64 v154; 
  unsigned int v155; 
  __int64 v156; 
  float v157; 
  __int64 v158; 
  float v159; 
  __m128 v160; 
  __int64 v161; 
  __m128 v162; 
  __int128 v163; 
  __int128 v164; 
  unsigned int v165; 
  unsigned int v166; 
  int v167; 
  __int64 v168; 

  if ( endpoint->flow != Screen && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 34, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
    __debugbreak();
  platformData = endpoint->platformData;
  v3 = 1;
  v4 = (__m128)LODWORD(FLOAT_1_0);
  v168 = 0i64;
  v165 = 0;
  v167 = 0;
  v166 = 0;
  v5 = *(unsigned int *)&platformData[20].currentDeviceId.value[4];
  deviceChannelCount = platformData->deviceChannelCount;
  v7 = (*(_DWORD *)&platformData[20].pendingDeviceId.value[20] >> 2) - v5;
  v8 = (__int64)&platformData[1].audioClient1 + 4 * v5;
  if ( deviceChannelCount > 1 )
  {
    if ( deviceChannelCount - 1 >= 8 )
    {
      v9 = ((deviceChannelCount - 9) >> 3) + 1;
      v10 = v9;
      v3 = 8 * v9 + 1;
      do
      {
        v11 = v4;
        v11.m128_f32[0] = v4.m128_f32[0] * 0.063095719;
        v4 = v11;
        --v10;
      }
      while ( v10 );
    }
    if ( v3 < deviceChannelCount )
    {
      v12 = deviceChannelCount - v3;
      do
      {
        v13 = v4;
        v13.m128_f32[0] = v4.m128_f32[0] * 0.70794576;
        v4 = v13;
        --v12;
      }
      while ( v12 );
    }
  }
  v14 = _mm_shuffle_ps(v4, v4, 0);
  v15 = _mm_shuffle_ps(v4, v4, 0).m128_u64[0];
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 40i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v166) >= 0 )
  {
    for ( i = v166; v166; i = v166 )
    {
      if ( i > v7 || (*(int (__fastcall **)(_QWORD, __int64 *, unsigned int *, int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 24i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v168, &v165, &v167, 0i64, 0i64, v163, *((_QWORD *)&v163 + 1), v164, *((_QWORD *)&v164 + 1)) < 0 )
        break;
      v17 = v165;
      if ( v165 > v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1006, ASSERT_TYPE_ASSERT, "framesAvailable <= workingDeviceBufferSize", "framesAvailable <= workingDeviceBufferSize") )
          __debugbreak();
        v17 = v165;
        if ( v7 < v165 )
          v17 = v7;
      }
      deviceFormat = platformData->deviceFormat;
      if ( deviceFormat )
      {
        v19 = deviceFormat - 2;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              v21 = v168;
              v22 = 0;
              if ( v17 )
              {
                v23 = deviceChannelCount - 1;
                v24 = (float *)v8;
                do
                {
                  v25 = 1;
                  v26 = deviceChannelCount * v22;
                  v28 = 0i64;
                  *(float *)&v28 = (float)((float)(*(unsigned __int8 *)(v26 + v21) - 128) * 0.0078740157) * v4.m128_f32[0];
                  v27 = v28;
                  if ( deviceChannelCount > 1 )
                  {
                    if ( v23 >= 8 )
                    {
                      v29 = (unsigned int)(v26 + 5);
                      v30 = 0i64;
                      v31 = 0i64;
                      do
                      {
                        v25 += 8;
                        _XMM0 = *(unsigned int *)((unsigned int)(v29 - 4) + v21);
                        __asm
                        {
                          vpmovzxbd xmm1, xmm0
                          vpsubd  xmm2, xmm1, xmm8
                        }
                        _XMM0 = *(unsigned int *)(v29 + v21);
                        v29 = (unsigned int)(v29 + 8);
                        v30 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM2), (__m128)_xmm), v14), v30);
                        __asm
                        {
                          vpmovzxbd xmm1, xmm0
                          vpsubd  xmm2, xmm1, xmm8
                        }
                        v31 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM2), (__m128)_xmm), v14), v31);
                      }
                      while ( v25 < deviceChannelCount - (v23 & 7) );
                      _XMM1 = _mm128_add_ps(v31, v30);
                      __asm { vmovhlps xmm0, xmm1, xmm1 }
                      v40 = _mm128_add_ps(_XMM0, _XMM1);
                      *(float *)&v28 = *(float *)&v28 + (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 245).m128_f32[0]);
                      v27 = v28;
                    }
                    if ( v25 < deviceChannelCount )
                    {
                      if ( deviceChannelCount - v25 >= 4 )
                      {
                        v41 = v25 + (unsigned int)v26 + 1;
                        v42 = ((deviceChannelCount - v25 - 4) >> 2) + 1;
                        v43 = v42;
                        v25 += 4 * v42;
                        do
                        {
                          v44 = (float)((float)((float)(*(unsigned __int8 *)((unsigned int)(v41 - 1) + v21) - 128) * 0.0078740157) + (float)((float)(*(unsigned __int8 *)(v41 + v21) - 128) * 0.0078740157)) + (float)((float)(*(unsigned __int8 *)((unsigned int)(v41 + 1) + v21) - 128) * 0.0078740157);
                          v45 = *(unsigned __int8 *)((unsigned int)(v41 + 2) + v21);
                          v41 = (unsigned int)(v41 + 4);
                          v46 = v27;
                          *(float *)&v46 = *(float *)&v27 + (float)((float)(v44 + (float)((float)(v45 - 128) * 0.0078740157)) * v4.m128_f32[0]);
                          v27 = v46;
                          --v43;
                        }
                        while ( v43 );
                      }
                      for ( ; v25 < deviceChannelCount; v27 = v48 )
                      {
                        v47 = v25 + (unsigned int)v26;
                        ++v25;
                        v48 = v27;
                        *(float *)&v48 = *(float *)&v27 + (float)((float)((float)(*(unsigned __int8 *)(v47 + v21) - 128) * 0.0078740157) * v4.m128_f32[0]);
                      }
                    }
                  }
                  *v24++ = *(float *)&v27;
                  ++v22;
                }
                while ( v22 < v17 );
              }
            }
            else
            {
              v17 = 0;
            }
          }
          else
          {
            v49 = v168;
            v50 = 0;
            if ( v17 )
            {
              v51 = deviceChannelCount - 1;
              v52 = (float *)v8;
              do
              {
                v53 = 1;
                v54 = deviceChannelCount * v50;
                v56 = 0i64;
                *(float *)&v56 = (float)((float)*(__int16 *)(v49 + 2 * v54) * 0.000030518509) * v4.m128_f32[0];
                v55 = v56;
                if ( deviceChannelCount > 1 )
                {
                  if ( v51 >= 8 )
                  {
                    v57 = (unsigned int)(v54 + 5);
                    v58 = 0i64;
                    v59 = 0i64;
                    do
                    {
                      v53 += 8;
                      _XMM0 = *(unsigned __int64 *)(v49 + 2i64 * (unsigned int)(v57 - 4));
                      __asm { vpmovsxwd xmm1, xmm0 }
                      v58 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm), v14), v58);
                      _XMM0 = *(unsigned __int64 *)(v49 + 2 * v57);
                      v57 = (unsigned int)(v57 + 8);
                      __asm { vpmovsxwd xmm1, xmm0 }
                      v59 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm), v14), v59);
                    }
                    while ( v53 < deviceChannelCount - (v51 & 7) );
                    _XMM1 = _mm128_add_ps(v59, v58);
                    __asm { vmovhlps xmm0, xmm1, xmm1 }
                    v66 = _mm128_add_ps(_XMM0, _XMM1);
                    *(float *)&v56 = *(float *)&v56 + (float)(v66.m128_f32[0] + _mm_shuffle_ps(v66, v66, 245).m128_f32[0]);
                    v55 = v56;
                  }
                  if ( v53 < deviceChannelCount )
                  {
                    if ( deviceChannelCount - v53 >= 4 )
                    {
                      v67 = v53 + (unsigned int)v54 + 1;
                      v68 = ((deviceChannelCount - v53 - 4) >> 2) + 1;
                      v69 = v68;
                      v53 += 4 * v68;
                      do
                      {
                        v70 = (float)((float)*(__int16 *)(v49 + 2i64 * (unsigned int)(v67 - 1)) * 0.000030518509) + (float)((float)*(__int16 *)(v49 + 2 * v67) * 0.000030518509);
                        v71 = (float)*(__int16 *)(v49 + 2i64 * (unsigned int)(v67 + 1));
                        v72 = *(__int16 *)(v49 + 2i64 * (unsigned int)(v67 + 2));
                        v67 = (unsigned int)(v67 + 4);
                        v73 = (float)((float)(v70 + (float)(v71 * 0.000030518509)) + (float)((float)v72 * 0.000030518509)) * v4.m128_f32[0];
                        v74 = v55;
                        *(float *)&v74 = *(float *)&v55 + v73;
                        v55 = v74;
                        --v69;
                      }
                      while ( v69 );
                    }
                    for ( ; v53 < deviceChannelCount; v55 = v76 )
                    {
                      v75 = v53 + (unsigned int)v54;
                      ++v53;
                      v76 = v55;
                      *(float *)&v76 = *(float *)&v55 + (float)((float)((float)*(__int16 *)(v49 + 2 * v75) * 0.000030518509) * v4.m128_f32[0]);
                    }
                  }
                }
                *v52++ = *(float *)&v55;
                ++v50;
              }
              while ( v50 < v17 );
            }
          }
        }
        else
        {
          v77 = v168;
          v78 = 0;
          if ( v17 )
          {
            v79 = deviceChannelCount - 1;
            v80 = (float *)v8;
            do
            {
              v81 = 1;
              v82 = deviceChannelCount * v78;
              _XMM0 = 0i64;
              __asm { vcvtsi2sd xmm0, xmm0, dword ptr [r8+r10*4] }
              *((_QWORD *)&v86 + 1) = _XMM0.m128_u64[1];
              *(double *)&v86 = *(double *)_XMM0.m128_u64 * 4.656612875245797e-10;
              _XMM1 = v86;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              v89 = _XMM2;
              *(float *)&v89 = *(float *)&_XMM2 * v4.m128_f32[0];
              v88 = v89;
              if ( deviceChannelCount > 1 )
              {
                if ( v79 >= 4 )
                {
                  __asm { vmovupd xmm8, cs:__xmm@3e000000002000003e00000000200000 }
                  v91 = (unsigned int)(v82 + 3);
                  v164 = 0i64;
                  v92 = 0ui64;
                  v163 = 0i64;
                  v93 = 0ui64;
                  do
                  {
                    v81 += 4;
                    _XMM0 = *(unsigned __int64 *)(v77 + 4i64 * (unsigned int)(v91 - 2));
                    __asm
                    {
                      vcvtdq2pd xmm1, xmm0
                      vmulpd  xmm2, xmm1, xmm8
                      vcvtpd2ps xmm4, xmm2
                      vxorpd  xmm0, xmm0, xmm0
                    }
                    v99.m128_u64[1] = *((_QWORD *)&_XMM0 + 1);
                    v99.m128_u64[0] = v15;
                    _XMM0 = *(unsigned __int64 *)(v77 + 4 * v91);
                    v91 = (unsigned int)(v91 + 4);
                    __asm { vcvtdq2pd xmm1, xmm0 }
                    v92 = _mm128_add_ps(_mm128_mul_ps(_XMM4, v99), v92);
                    __asm
                    {
                      vmulpd  xmm2, xmm1, xmm8
                      vcvtpd2ps xmm4, xmm2
                      vxorpd  xmm0, xmm0, xmm0
                    }
                    v99.m128_u64[1] = *((_QWORD *)&_XMM0 + 1);
                    v93 = _mm128_add_ps(_mm128_mul_ps(_XMM4, v99), v93);
                  }
                  while ( v81 < deviceChannelCount - (v79 & 3) );
                  _XMM2 = _mm128_add_ps(v93, v92);
                  __asm { vmovhlps xmm0, xmm2, xmm2 }
                  v107 = _mm128_add_ps(_XMM0, _XMM2);
                  _XMM0 = _mm_shuffle_ps(v107, v107, 245);
                  v108 = v88;
                  *(float *)&v108 = *(float *)&v88 + (float)(v107.m128_f32[0] + _XMM0.m128_f32[0]);
                  v88 = v108;
                }
                if ( v81 < deviceChannelCount )
                {
                  if ( deviceChannelCount - v81 >= 4 )
                  {
                    v109 = v81 + v82 + 1;
                    v110 = ((deviceChannelCount - v81 - 4) >> 2) + 1;
                    v111 = v110;
                    v81 += 4 * v110;
                    do
                    {
                      _XMM0 = *(unsigned int *)(v77 + 4i64 * (unsigned int)(v109 - 1));
                      __asm { vcvtdq2pd xmm0, xmm0 }
                      *((_QWORD *)&v115 + 1) = *((_QWORD *)&_XMM0 + 1);
                      *(double *)&v115 = *(double *)&_XMM0 * 4.656612875245797e-10;
                      _XMM1 = v115;
                      _XMM0 = *(unsigned int *)(v77 + 4 * v109);
                      __asm
                      {
                        vcvtdq2pd xmm0, xmm0
                        vcvtsd2ss xmm3, xmm1, xmm1
                      }
                      *((_QWORD *)&v115 + 1) = *((_QWORD *)&_XMM0 + 1);
                      *(double *)&v115 = *(double *)&_XMM0 * 4.656612875245797e-10;
                      _XMM1 = v115;
                      _XMM0 = *(unsigned int *)(v77 + 4i64 * (unsigned int)(v109 + 1));
                      v121 = (unsigned int)(v109 + 2);
                      v109 = (unsigned int)(v109 + 4);
                      __asm
                      {
                        vcvtdq2pd xmm0, xmm0
                        vcvtsd2ss xmm2, xmm1, xmm1
                      }
                      *((_QWORD *)&v115 + 1) = *((_QWORD *)&_XMM0 + 1);
                      *(double *)&v115 = *(double *)&_XMM0 * 4.656612875245797e-10;
                      _XMM1 = v115;
                      _XMM0 = *(unsigned int *)(v77 + 4 * v121);
                      v127 = _XMM3;
                      v127.m128_f32[0] = _XMM3.m128_f32[0] + *(float *)&_XMM2;
                      v126 = v127;
                      __asm
                      {
                        vcvtsd2ss xmm2, xmm1, xmm1
                        vcvtdq2pd xmm0, xmm0
                      }
                      v127.m128_u64[1] = *((_QWORD *)&_XMM0 + 1);
                      *(double *)v127.m128_u64 = *(double *)&_XMM0 * 4.656612875245797e-10;
                      _XMM1 = v127;
                      v131 = v126;
                      v131.m128_f32[0] = v126.m128_f32[0] + *(float *)&_XMM2;
                      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                      v131.m128_f32[0] = (float)(v131.m128_f32[0] + *(float *)&_XMM2) * v4.m128_f32[0];
                      _XMM0 = v131;
                      v133 = v88;
                      *(float *)&v133 = *(float *)&v88 + _XMM0.m128_f32[0];
                      v88 = v133;
                      --v111;
                    }
                    while ( v111 );
                  }
                  for ( ; v81 < deviceChannelCount; v88 = v138 )
                  {
                    ++v81;
                    __asm
                    {
                      vxorpd  xmm0, xmm0, xmm0
                      vcvtsi2sd xmm0, xmm0, dword ptr [r8+rax*4]
                    }
                    *((_QWORD *)&v136 + 1) = _XMM0.m128_u64[1];
                    *(double *)&v136 = *(double *)_XMM0.m128_u64 * 4.656612875245797e-10;
                    _XMM1 = v136;
                    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                    v138 = v88;
                    *(float *)&v138 = *(float *)&v88 + (float)(*(float *)&_XMM2 * v4.m128_f32[0]);
                  }
                }
              }
              *v80++ = *(float *)&v88;
              ++v78;
            }
            while ( v78 < v17 );
          }
        }
      }
      else
      {
        v139 = v168;
        v140 = 0;
        if ( v17 )
        {
          v141 = deviceChannelCount - 1;
          v142 = (float *)v8;
          do
          {
            v143 = 1;
            v144 = deviceChannelCount * v140;
            v146 = v4;
            v146.m128_f32[0] = v4.m128_f32[0] * *(float *)(v139 + 4 * v144);
            v145 = v146;
            if ( deviceChannelCount > 1 )
            {
              if ( v141 >= 8 )
              {
                v147 = (unsigned int)(v144 + 5);
                v148 = 0i64;
                v149 = 0i64;
                do
                {
                  v143 += 8;
                  v148 = _mm128_add_ps(_mm128_mul_ps(v14, *(__m128 *)(v139 + 4i64 * (unsigned int)(v147 - 4))), v148);
                  v150 = _mm128_mul_ps(v14, *(__m128 *)(v139 + 4 * v147));
                  v147 = (unsigned int)(v147 + 8);
                  v149 = _mm128_add_ps(v150, v149);
                }
                while ( v143 < deviceChannelCount - (v141 & 7) );
                _XMM1 = _mm128_add_ps(v149, v148);
                __asm { vmovhlps xmm0, xmm1, xmm1 }
                v153 = _mm128_add_ps(_XMM0, _XMM1);
                v146.m128_f32[0] = v146.m128_f32[0] + (float)(v153.m128_f32[0] + _mm_shuffle_ps(v153, v153, 245).m128_f32[0]);
                v145 = v146;
              }
              if ( v143 < deviceChannelCount )
              {
                if ( deviceChannelCount - v143 >= 4 )
                {
                  v154 = v143 + (unsigned int)v144 + 1;
                  v155 = ((deviceChannelCount - v143 - 4) >> 2) + 1;
                  v156 = v155;
                  v143 += 4 * v155;
                  do
                  {
                    v157 = (float)(*(float *)(v139 + 4i64 * (unsigned int)(v154 - 1)) + *(float *)(v139 + 4 * v154)) + *(float *)(v139 + 4i64 * (unsigned int)(v154 + 1));
                    v158 = (unsigned int)(v154 + 2);
                    v154 = (unsigned int)(v154 + 4);
                    v159 = (float)(v157 + *(float *)(v139 + 4 * v158)) * v4.m128_f32[0];
                    v160 = v145;
                    v160.m128_f32[0] = v145.m128_f32[0] + v159;
                    v145 = v160;
                    --v156;
                  }
                  while ( v156 );
                }
                for ( ; v143 < deviceChannelCount; v145 = v162 )
                {
                  v161 = v143 + (unsigned int)v144;
                  ++v143;
                  v162 = v145;
                  v162.m128_f32[0] = v145.m128_f32[0] + (float)(v4.m128_f32[0] * *(float *)(v139 + 4 * v161));
                }
              }
            }
            *v142++ = v145.m128_f32[0];
            ++v140;
          }
          while ( v140 < v17 );
        }
      }
      *(_DWORD *)&platformData[20].currentDeviceId.value[4] += v17;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 32i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], v165);
      v7 -= v17;
      v8 += 4i64 * v17;
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&platformData[20].pendingDeviceId.value[52] + 40i64))(*(_QWORD *)&platformData[20].pendingDeviceId.value[52], &v166) < 0 )
        break;
    }
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
  AD_Endpoint_Platform *v17; 
  AD_COMContainer<IMMDevice> *p_device; 
  IMMDevice *instance; 
  char *fmt; 
  AD_EndpointRole role; 
  AD_EndpointFlow flow; 
  int v23; 
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
  v23 = v9;
  flow = endpoint->flow;
  role = endpoint->role;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "829", Error, "Couldn't create custom device '%s' for role %d, flow %d. HRESULT = 0x%x", endpoint->platformData->pendingDeviceId.value, role, flow, v23);
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
    v17 = endpoint->platformData;
    *(__m256i *)v17->currentDeviceId.value = *(__m256i *)deviceInfo.deviceId.value;
    *(_OWORD *)&v17->currentDeviceId.value[32] = *(_OWORD *)&deviceInfo.deviceId.value[32];
    *(double *)&v17->currentDeviceId.value[48] = *(double *)&deviceInfo.deviceId.value[48];
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
  AD_Endpoint_Platform *platformData; 
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
  AD_WASAPIDeviceInfo *v34; 
  __int64 v35; 
  __int64 v37; 
  WAVEFORMATEXTENSIBLE *wfx; 
  __int64 v39[2]; 
  __int64 v40[3]; 
  WAVEFORMATEXTENSIBLE *v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  void *deviceMixEvent; 
  _QWORD *v46; 
  unsigned int v47; 
  AD_WASAPIDeviceInfo *v48; 
  int v49; 

  v48 = devInfo;
  v39[1] = -2i64;
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
  platformData = endpoint->platformData;
  if ( platformData[656].currentDeviceId.value[45] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 167, ASSERT_TYPE_ASSERT, "outputPlatformData->supportSpatialAudio == true", "outputPlatformData->supportSpatialAudio == true") )
    __debugbreak();
  if ( !*(_QWORD *)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 171, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
    __debugbreak();
  instance = platformData->device.instance;
  Activate = instance->Activate;
  if ( **(_QWORD **)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  if ( ((int (__fastcall *)(IMMDevice *, GUID *, __int64))Activate)(instance, &IID_ISpatialAudioClient, 1i64) < 0 )
    goto LABEL_69;
  v49 = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(***(_QWORD ***)&platformData[656].currentDeviceId.value[36] + 40i64))(**(_QWORD **)&platformData[656].currentDeviceId.value[36], &v49) < 0 )
    goto LABEL_69;
  v47 = 0;
  v39[0] = 0i64;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)&platformData[656].currentDeviceId.value[36] + 48i64))(**(_QWORD **)&platformData[656].currentDeviceId.value[36], v39) < 0 )
    goto LABEL_67;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39[0] + 24i64))(v39[0], &v47) < 0 )
    goto LABEL_67;
  if ( !v47 )
    goto LABEL_67;
  if ( !v49 )
    goto LABEL_67;
  wfx = NULL;
  v10 = 0;
  if ( !v47 )
    goto LABEL_67;
  do
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD, WAVEFORMATEXTENSIBLE **))(*(_QWORD *)v39[0] + 32i64))(v39[0], 0i64, &wfx) < 0 )
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
  while ( v10 < v47 );
  if ( !v12 )
    goto LABEL_67;
  platformData->deviceFormat = AD_DetermineMixFormat(v12);
  if ( (*(int (__fastcall **)(_QWORD, WAVEFORMATEXTENSIBLE *, unsigned int *))(***(_QWORD ***)&platformData[656].currentDeviceId.value[36] + 56i64))(**(_QWORD **)&platformData[656].currentDeviceId.value[36], wfx, &platformData->deviceBufferSize) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 215, ASSERT_TYPE_ASSERT, "(((HRESULT)(hr)) >= 0)", "SUCCEEDED( hr )") )
    __debugbreak();
  if ( platformData->deviceBufferSize > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 216, ASSERT_TYPE_ASSERT, "outputPlatformData->deviceBufferSize <= AD_MixerBufferFrames", "outputPlatformData->deviceBufferSize <= AD_MixerBufferFrames") )
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
  v41 = wfx;
  v42 = _XMM0;
  v43 = 0i64;
  v44 = 6;
  deviceMixEvent = platformData->deviceMixEvent;
  v21 = *(_QWORD **)&platformData[656].currentDeviceId.value[36];
  v46 = v21 + 18;
  v40[0] = 65i64;
  v40[1] = 40i64;
  v40[2] = (__int64)&v41;
  v22 = *v21;
  v23 = *(int (__fastcall **)(__int64, __int64 *, GUID *, _QWORD *))(*(_QWORD *)*v21 + 80i64);
  v24 = v21 + 1;
  if ( v21[1] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  if ( v23(v22, v40, &IID_ISpatialAudioObjectRenderStream, v24) < 0 )
  {
LABEL_67:
    v37 = v39[0];
    if ( v39[0] )
    {
      v39[0] = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16i64))(v37);
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
    v28 = *(_QWORD *)&platformData[656].currentDeviceId.value[36];
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
  v32 = 16 * platformData->deviceBufferSize;
  if ( v32 > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_containers.h", 29, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  v33 = 4 * v32;
  if ( v33 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 685, ASSERT_TYPE_ASSERT, "s <= T_SIZE", "s <= T_SIZE") )
    __debugbreak();
  *(_DWORD *)&platformData[656].pendingDeviceId.value[52] = v33;
  memset_0(&platformData[1].audioClient1, 0, v33);
  platformData->deviceChannelCount = 16;
  platformData->deviceRate = wfx->Format.nSamplesPerSec;
  v34 = v48;
  *(__m256i *)platformData->currentDeviceId.value = *(__m256i *)v48->deviceId.value;
  *(_OWORD *)&platformData->currentDeviceId.value[32] = *(_OWORD *)&v34->deviceId.value[32];
  *(double *)&platformData->currentDeviceId.value[48] = *(double *)&v34->deviceId.value[48];
  platformData->deviceFormFactor = v34->formFactor;
  platformData->state = v34->state;
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64) + 40i64))(*(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64)) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 266, ASSERT_TYPE_ASSERT, "(((HRESULT)(hr)) >= 0)", "SUCCEEDED( hr )") )
    __debugbreak();
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", "267", Canceled, "Created spatial render device: %s", v34->deviceName);
  v35 = v39[0];
  if ( v39[0] )
  {
    v39[0] = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
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
  AD_Endpoint_Platform *platformData; 
  unsigned int deviceChannelCount; 
  __int64 v6; 
  unsigned int i; 
  AD_EndpointFormat deviceFormat; 
  __int32 v9; 
  __int32 v10; 
  unsigned int j; 
  unsigned int v12; 
  char *v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  float v18; 
  void **v19; 
  float v20; 
  _BYTE *v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int v24; 
  char *v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  void **v30; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int v34; 
  char *v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 v45; 
  void **v48; 
  __int64 v49; 
  unsigned int v52; 
  __int64 v53; 
  unsigned int v54; 
  char *v55; 
  __int64 v56; 
  unsigned int v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  void **v61; 
  char *v62; 
  int v63; 
  __int64 v65; 
  unsigned int v66; 
  unsigned __int64 v67; 
  AD_EndpointFormat v68; 
  AD_COMContainer<IAudioClient> *p_audioClient1; 
  __int32 v70; 
  unsigned int k; 
  __int64 v72; 
  __int64 v74; 
  char *v80; 
  unsigned int v81; 
  unsigned int v82; 
  char *v83; 
  unsigned int v84; 
  float *p_audioClient2; 
  float v86; 
  __int64 v87; 
  char *v88; 
  float *v89; 
  float v90; 
  unsigned int v91; 
  __int64 v93; 
  __int64 v94; 
  char *v113; 
  unsigned int v114; 
  __int64 v115; 
  unsigned int v117; 
  __int64 v118; 
  __int64 v122; 
  __int64 v129; 
  __int64 v133; 
  __int64 v134; 
  unsigned int v135; 
  __int64 v136; 
  __int128 v137; 
  __int128 v138; 
  __int64 v147; 
  __int64 v148; 
  char *v149; 
  __int128 v150; 
  __int128 v151; 
  char *v154; 
  unsigned int m; 
  __int64 v156; 
  __int64 v157; 
  double v158; 
  void *v159[3]; 
  char v160[184]; 

  if ( endpoint->flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
    __debugbreak();
  platformData = endpoint->platformData;
  deviceChannelCount = platformData->deviceChannelCount;
  if ( platformData[656].currentDeviceId.value[45] )
  {
    if ( !*(_QWORD *)&platformData[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1116, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
      __debugbreak();
    if ( deviceChannelCount != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1117, ASSERT_TYPE_ASSERT, "AD_SpatialBedChannels == channelCount", "AD_SpatialBedChannels == channelCount") )
      __debugbreak();
    v6 = 16i64;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (*(int (__fastcall **)(_QWORD, void **, char *))(**(_QWORD **)(v6 + *(_QWORD *)&platformData[656].currentDeviceId.value[36]) + 24i64))(*(_QWORD *)(v6 + *(_QWORD *)&platformData[656].currentDeviceId.value[36]), &v159[i + 2], &v160[4 * i + 120]) < 0 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64) + 72i64))(*(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64));
        return 0;
      }
      v6 += 8i64;
    }
    deviceFormat = platformData->deviceFormat;
    if ( deviceFormat )
    {
      v9 = deviceFormat - 2;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            for ( j = 0; j < numFrames; ++j )
            {
              v12 = 0;
              if ( deviceChannelCount >= 4 )
              {
                v13 = v160;
                v14 = deviceChannelCount * j + 1;
                v15 = ((deviceChannelCount - 4) >> 2) + 1;
                v16 = v15;
                v12 = 4 * v15;
                do
                {
                  v17 = *((_QWORD *)v13 - 1);
                  v13 += 32;
                  *(_BYTE *)(j + v17) = 0x80 - (int)(float)(-127.0 * *((float *)&platformData[1].audioClient1.instance + (unsigned int)(v14 - 1)));
                  *(_BYTE *)(j + *((_QWORD *)v13 - 4)) = 0x80 - (int)(float)(-127.0 * *((float *)&platformData[1].audioClient1.instance + v14));
                  *(_BYTE *)(j + *((_QWORD *)v13 - 3)) = 0x80 - (int)(float)(-127.0 * *((float *)&platformData[1].audioClient1.instance + (unsigned int)(v14 + 1)));
                  v18 = -127.0 * *((float *)&platformData[1].audioClient1.instance + (unsigned int)(v14 + 2));
                  v14 = (unsigned int)(v14 + 4);
                  *(_BYTE *)(j + *((_QWORD *)v13 - 2)) = 0x80 - (int)v18;
                  --v16;
                }
                while ( v16 );
              }
              if ( v12 < deviceChannelCount )
              {
                v19 = &v159[v12 + 2];
                do
                {
                  v20 = -127.0 * *((float *)&platformData[1].audioClient1.instance + deviceChannelCount * j + v12);
                  v21 = *v19;
                  ++v12;
                  ++v19;
                  v21[j] = 0x80 - (int)v20;
                }
                while ( v12 < deviceChannelCount );
              }
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
          v22 = 0;
          if ( numFrames )
          {
            v23 = 0i64;
            do
            {
              v24 = 0;
              if ( deviceChannelCount >= 4 )
              {
                v25 = v160;
                v26 = deviceChannelCount * v22 + 1;
                v27 = ((deviceChannelCount - 4) >> 2) + 1;
                v28 = v27;
                v24 = 4 * v27;
                do
                {
                  v25 += 32;
                  *(_WORD *)(v23 + *((_QWORD *)v25 - 5)) = (int)(float)(32767.0 * *((float *)&platformData[1].audioClient1.instance + (unsigned int)(v26 - 1)));
                  *(_WORD *)(v23 + *((_QWORD *)v25 - 4)) = (int)(float)(32767.0 * *((float *)&platformData[1].audioClient1.instance + v26));
                  *(_WORD *)(v23 + *((_QWORD *)v25 - 3)) = (int)(float)(32767.0 * *((float *)&platformData[1].audioClient1.instance + (unsigned int)(v26 + 1)));
                  v29 = (unsigned int)(v26 + 2);
                  v26 = (unsigned int)(v26 + 4);
                  *(_WORD *)(v23 + *((_QWORD *)v25 - 2)) = (int)(float)(32767.0 * *((float *)&platformData[1].audioClient1.instance + v29));
                  --v28;
                }
                while ( v28 );
              }
              if ( v24 < deviceChannelCount )
              {
                v30 = &v159[v24 + 2];
                do
                {
                  v31 = deviceChannelCount * v22 + v24++;
                  *(_WORD *)((char *)*v30++ + v23) = (int)(float)(32767.0 * *((float *)&platformData[1].audioClient1.instance + v31));
                }
                while ( v24 < deviceChannelCount );
              }
              ++v22;
              v23 += 2i64;
            }
            while ( v22 < numFrames );
          }
        }
      }
      else
      {
        v32 = 0;
        if ( numFrames )
        {
          v33 = 0i64;
          do
          {
            v34 = 0;
            if ( deviceChannelCount >= 4 )
            {
              v35 = v160;
              v36 = deviceChannelCount * v32 + 1;
              v37 = ((deviceChannelCount - 4) >> 2) + 1;
              v38 = v37;
              v34 = 4 * v37;
              do
              {
                v35 += 32;
                _XMM1 = COERCE_UNSIGNED_INT64(*((float *)&platformData[1].audioClient1.instance + (unsigned int)(v36 - 1)) * 2147483647.0);
                __asm { vcvttsd2si ecx, xmm1 }
                *(_DWORD *)(v33 + *((_QWORD *)v35 - 5)) = _ECX;
                _XMM1 = COERCE_UNSIGNED_INT64(*((float *)&platformData[1].audioClient1.instance + v36) * 2147483647.0);
                __asm { vcvttsd2si ecx, xmm1 }
                *(_DWORD *)(v33 + *((_QWORD *)v35 - 4)) = _ECX;
                _XMM1 = COERCE_UNSIGNED_INT64(*((float *)&platformData[1].audioClient1.instance + (unsigned int)(v36 + 1)) * 2147483647.0);
                __asm { vcvttsd2si ecx, xmm1 }
                *(_DWORD *)(v33 + *((_QWORD *)v35 - 3)) = _ECX;
                v45 = (unsigned int)(v36 + 2);
                v36 = (unsigned int)(v36 + 4);
                _XMM1 = COERCE_UNSIGNED_INT64(*((float *)&platformData[1].audioClient1.instance + v45) * 2147483647.0);
                __asm { vcvttsd2si ecx, xmm1 }
                *(_DWORD *)(v33 + *((_QWORD *)v35 - 2)) = _ECX;
                --v38;
              }
              while ( v38 );
            }
            if ( v34 < deviceChannelCount )
            {
              v48 = &v159[v34 + 2];
              do
              {
                v49 = deviceChannelCount * v32 + v34++;
                ++v48;
                _XMM1 = COERCE_UNSIGNED_INT64(*((float *)&platformData[1].audioClient1.instance + v49) * 2147483647.0);
                __asm { vcvttsd2si ecx, xmm1 }
                *(_DWORD *)((char *)*(v48 - 1) + v33) = _ECX;
              }
              while ( v34 < deviceChannelCount );
            }
            ++v32;
            v33 += 4i64;
          }
          while ( v32 < numFrames );
        }
      }
    }
    else
    {
      v52 = 0;
      if ( numFrames )
      {
        v53 = 0i64;
        do
        {
          v54 = 0;
          if ( deviceChannelCount >= 4 )
          {
            v55 = v160;
            v56 = deviceChannelCount * v52 + 1;
            v57 = ((deviceChannelCount - 4) >> 2) + 1;
            v58 = v57;
            v54 = 4 * v57;
            do
            {
              v59 = *((_QWORD *)v55 - 1);
              v55 += 32;
              *(_DWORD *)(v53 + v59) = *((_DWORD *)&platformData[1].audioClient1.instance + (unsigned int)(v56 - 1));
              *(_DWORD *)(v53 + *((_QWORD *)v55 - 4)) = *((_DWORD *)&platformData[1].audioClient1.instance + v56);
              *(_DWORD *)(v53 + *((_QWORD *)v55 - 3)) = *((_DWORD *)&platformData[1].audioClient1.instance + (unsigned int)(v56 + 1));
              v60 = (unsigned int)(v56 + 2);
              v56 = (unsigned int)(v56 + 4);
              *(_DWORD *)(v53 + *((_QWORD *)v55 - 2)) = *((_DWORD *)&platformData[1].audioClient1.instance + v60);
              --v58;
            }
            while ( v58 );
          }
          if ( v54 < deviceChannelCount )
          {
            v61 = &v159[v54 + 2];
            do
            {
              v62 = (char *)*v61;
              v63 = *((_DWORD *)&platformData[1].audioClient1.instance + deviceChannelCount * v52 + v54);
              ++v61;
              ++v54;
              *(_DWORD *)&v62[v53] = v63;
            }
            while ( v54 < deviceChannelCount );
          }
          ++v52;
          v53 += 4i64;
        }
        while ( v52 < numFrames );
      }
    }
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64) + 72i64))(*(_QWORD *)(*(_QWORD *)&platformData[656].currentDeviceId.value[36] + 8i64)) < 0 )
      return 0;
  }
  else
  {
    v65 = *(_QWORD *)&platformData[656].currentDeviceId.value[28];
    v66 = 0;
    v159[0] = NULL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v65 + 24i64))(v65, numFrames, v159) < 0 )
      return 0;
    v68 = platformData->deviceFormat;
    p_audioClient1 = &platformData[1].audioClient1;
    if ( v68 )
    {
      v70 = v68 - 2;
      if ( v70 )
      {
        if ( v70 == 1 )
        {
          if ( deviceChannelCount == 8 )
          {
            if ( ((__int64)v159[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1334, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v158) )
              __debugbreak();
            if ( ((unsigned __int8)platformData & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1335, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128i ) == 0", "size_t(sampleBuffer) % alignof( __m128i ) == 0", v158) )
              __debugbreak();
            v67 = (unsigned __int64)v159[0];
            for ( k = 0; k < 2 * numFrames; *(_QWORD *)(v67 + 8i64 * (unsigned int)v74) = _XMM1 )
            {
              v72 = k;
              _XMM0 = _mm128_mul_ps((__m128)_xmm, *(__m128 *)&p_audioClient1[2 * k].instance);
              v74 = k + 1;
              k += 2;
              __asm { vcvttps2dq xmm3, xmm0 }
              _XMM1 = _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&p_audioClient1[2 * v74].instance, *(__m128 *)&p_audioClient1[2 * v74].instance, 78), (__m128)_xmm);
              __asm
              {
                vcvttps2dq xmm2, xmm1
                vpackssdw xmm0, xmm3, xmm3
                vpackssdw xmm1, xmm2, xmm2
              }
              *(_QWORD *)(v67 + 8 * v72) = _XMM0;
            }
          }
          else
          {
            v80 = (char *)v159[0];
            v81 = deviceChannelCount * numFrames;
            v82 = 0;
            if ( deviceChannelCount * numFrames >= 4 )
            {
              v83 = (char *)v159[0] + 4;
              v84 = ((v81 - 4) >> 2) + 1;
              p_audioClient2 = (float *)&platformData[1].audioClient2;
              v67 = v84;
              v82 = 4 * v84;
              do
              {
                v83 += 8;
                v86 = 32767.0 * *(p_audioClient2 - 2);
                p_audioClient2 += 4;
                *((_WORD *)v83 - 6) = (int)v86;
                *((_WORD *)v83 - 5) = (int)(float)(32767.0 * *(p_audioClient2 - 5));
                *((_WORD *)v83 - 4) = (int)(float)(32767.0 * *(p_audioClient2 - 4));
                *((_WORD *)v83 - 3) = (int)(float)(32767.0 * *(p_audioClient2 - 3));
                --v67;
              }
              while ( v67 );
            }
            if ( v82 < v81 )
            {
              v87 = v81 - v82;
              v88 = &v80[2 * v82];
              v89 = (float *)&p_audioClient1[v82 / 2];
              do
              {
                v88 += 2;
                v90 = 32767.0 * *v89++;
                *((_WORD *)v88 - 1) = (int)v90;
                --v87;
              }
              while ( v87 );
            }
          }
        }
        else
        {
          v66 = 2;
        }
      }
      else if ( deviceChannelCount == 8 )
      {
        if ( ((__int64)v159[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1303, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v158) )
          __debugbreak();
        if ( ((unsigned __int8)platformData & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1304, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128i ) == 0", "size_t(sampleBuffer) % alignof( __m128i ) == 0", v158) )
          __debugbreak();
        v67 = (unsigned __int64)v159[0];
        v91 = 0;
        __asm { vmovupd xmm6, cs:__xmm@41dfffffffe0000041dfffffffe00000 }
        if ( 2 * numFrames )
        {
          do
          {
            v93 = 2i64 * (v91 + 1);
            v94 = 2i64 * v91;
            v91 += 2;
            _XMM2 = *(__m128 *)&p_audioClient1[v94].instance;
            _XMM5 = _mm_shuffle_ps(*(__m128 *)&p_audioClient1[v93].instance, *(__m128 *)&p_audioClient1[v93].instance, 78);
            _XMM0 = _mm_cvtps_pd(_XMM2);
            __asm
            {
              vmulpd  xmm1, xmm0, xmm6
              vcvtpd2dq xmm4, xmm1
              vmovhlps xmm0, xmm2, xmm2
            }
            _XMM1 = _mm_cvtps_pd(_XMM0);
            __asm
            {
              vmulpd  xmm2, xmm1, xmm6
              vcvtpd2dq xmm3, xmm2
              vpunpcklqdq xmm0, xmm4, xmm3
            }
            *(_OWORD *)(v67 + 8 * v94) = _XMM0;
            _XMM0 = _mm_cvtps_pd(_XMM5);
            __asm
            {
              vmulpd  xmm1, xmm0, xmm6
              vmovhlps xmm0, xmm5, xmm5
              vcvtpd2dq xmm4, xmm1
            }
            _XMM1 = _mm_cvtps_pd(_XMM0);
            __asm
            {
              vmulpd  xmm2, xmm1, xmm6
              vcvtpd2dq xmm3, xmm2
              vpunpcklqdq xmm0, xmm4, xmm3
            }
            *(_OWORD *)(v67 + 8 * v93) = _XMM0;
          }
          while ( v91 < 2 * numFrames );
        }
      }
      else
      {
        v113 = (char *)v159[0];
        v114 = deviceChannelCount * numFrames;
        v67 = 0i64;
        if ( deviceChannelCount * numFrames )
        {
          if ( v114 >= 8 )
          {
            v115 = v114 - 1;
            if ( v159[0] > (char *)p_audioClient1 + 4 * v115 || (char *)v159[0] + 4 * v115 < (char *)p_audioClient1 )
            {
              __asm { vmovupd xmm4, cs:__xmm@41dfffffffc0000041dfffffffc00000 }
              v117 = 2;
              do
              {
                v118 = (unsigned int)v67;
                v67 = (unsigned int)(v67 + 8);
                _XMM2 = _mm_cvtps_pd((__m128)*(unsigned __int64 *)((char *)&p_audioClient1->instance + 4 * v118));
                __asm
                {
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                }
                *(_QWORD *)&v113[4 * v118] = _XMM0;
                v122 = v117 * 2 - 2;
                _XMM2 = _mm_cvtps_pd((__m128)*(unsigned __int64 *)((char *)&p_audioClient1->instance + 4 * v122));
                __asm
                {
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                }
                *(_QWORD *)&v113[4 * v122] = _XMM0;
                _XMM2 = _mm_cvtps_pd((__m128)(unsigned __int64)p_audioClient1[v117].instance);
                __asm
                {
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                }
                *(_QWORD *)&v113[2 * v117] = _XMM0;
                v129 = v117 * 2 + 2;
                v117 += 4;
                _XMM2 = _mm_cvtps_pd((__m128)*(unsigned __int64 *)((char *)&p_audioClient1->instance + 4 * v129));
                __asm
                {
                  vmulpd  xmm3, xmm2, xmm4
                  vcvttpd2dq xmm0, xmm3
                }
                *(_QWORD *)&v113[4 * v129] = _XMM0;
              }
              while ( (unsigned int)v67 < (v114 & 0xFFFFFFF8) );
            }
          }
          if ( (unsigned int)v67 < v114 )
          {
            if ( v114 - (unsigned int)v67 >= 4 )
            {
              v133 = (char *)p_audioClient1 - v113;
              v134 = (__int64)&v113[4 * (unsigned int)v67 + 4];
              v135 = ((v114 - (unsigned int)v67 - 4) >> 2) + 1;
              v136 = v135;
              v67 = (unsigned int)v67 + 4 * v135;
              do
              {
                v137 = *(unsigned int *)(v133 + v134 - 4);
                v134 += 16i64;
                *((_QWORD *)&v138 + 1) = *((_QWORD *)&v137 + 1);
                *(double *)&v138 = *(float *)&v137 * 2147483647.0;
                _XMM1 = v138;
                __asm { vcvttsd2si eax, xmm1 }
                *(_DWORD *)(v134 - 20) = _EAX;
                _XMM1 = COERCE_UNSIGNED_INT64(*(float *)(v133 + v134 - 16) * 2147483647.0);
                __asm { vcvttsd2si eax, xmm1 }
                *(_DWORD *)(v134 - 16) = _EAX;
                _XMM1 = COERCE_UNSIGNED_INT64(*(float *)(v133 + v134 - 12) * 2147483647.0);
                __asm { vcvttsd2si eax, xmm1 }
                *(_DWORD *)(v134 - 12) = _EAX;
                _XMM1 = COERCE_UNSIGNED_INT64(*(float *)(v133 + v134 - 8) * 2147483647.0);
                __asm { vcvttsd2si eax, xmm1 }
                *(_DWORD *)(v134 - 8) = _EAX;
                --v136;
              }
              while ( v136 );
            }
            if ( (unsigned int)v67 < v114 )
            {
              v147 = (char *)p_audioClient1 - v113;
              v148 = v114 - (unsigned int)v67;
              v149 = &v113[4 * (unsigned int)v67];
              do
              {
                v150 = *(unsigned int *)&v149[v147];
                v149 += 4;
                *((_QWORD *)&v151 + 1) = *((_QWORD *)&v150 + 1);
                *(double *)&v151 = *(float *)&v150 * 2147483647.0;
                _XMM1 = v151;
                __asm { vcvttsd2si eax, xmm1 }
                *((_DWORD *)v149 - 1) = _EAX;
                --v148;
              }
              while ( v148 );
            }
          }
        }
      }
    }
    else if ( deviceChannelCount == 8 )
    {
      if ( ((__int64)v159[0] & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1278, ASSERT_TYPE_ASSERT, "size_t(pData) % alignof( __m128 ) == 0", "size_t(pData) % alignof( __m128 ) == 0", v158) )
        __debugbreak();
      if ( ((unsigned __int8)platformData & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint_ms.cpp", 1279, ASSERT_TYPE_ASSERT, "size_t(sampleBuffer) % alignof( __m128 ) == 0", "size_t(sampleBuffer) % alignof( __m128 ) == 0", v158) )
        __debugbreak();
      v154 = (char *)v159[0];
      v67 = 2 * numFrames;
      for ( m = 0; m < (unsigned int)v67; *(__m128 *)&v154[8 * v157] = _mm_shuffle_ps(*(__m128 *)&p_audioClient1[v157].instance, *(__m128 *)&p_audioClient1[v157].instance, 78) )
      {
        v156 = 2i64 * m;
        v157 = 2i64 * (m + 1);
        m += 2;
        *(_OWORD *)&v154[8 * v156] = *(_OWORD *)&p_audioClient1[v156].instance;
      }
    }
    else
    {
      memcpy_0(v159[0], &platformData[1].audioClient1, 4 * deviceChannelCount * numFrames);
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)&platformData[656].currentDeviceId.value[28] + 32i64))(*(_QWORD *)&platformData[656].currentDeviceId.value[28], numFrames, v66, v67) < 0 )
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

