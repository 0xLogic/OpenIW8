/*
==============
Stream_ViewPos_MoveToNextFrame
==============
*/

void Stream_ViewPos_MoveToNextFrame(void)
{
  ?Stream_ViewPos_MoveToNextFrame@@YAXXZ();
}

/*
==============
Stream_ViewPos_GetStaticMultiView
==============
*/

void __fastcall Stream_ViewPos_GetStaticMultiView(StreamUpdateMultiView *multiView)
{
  ?Stream_ViewPos_GetStaticMultiView@@YAXAEAUStreamUpdateMultiView@@@Z(multiView);
}

/*
==============
Stream_ViewPos_UpdateForClient
==============
*/

unsigned int __fastcall Stream_ViewPos_UpdateForClient(unsigned int clientIndex)
{
  return ?Stream_ViewPos_UpdateForClient@@YAII@Z(clientIndex);
}

/*
==============
Stream_ViewPos_GetDynamicMultiView
==============
*/

void __fastcall Stream_ViewPos_GetDynamicMultiView(unsigned int clientIndex, StreamUpdateMultiView *multiView)
{
  ?Stream_ViewPos_GetDynamicMultiView@@YAXIAEAUStreamUpdateMultiView@@@Z(clientIndex, multiView);
}

/*
==============
Stream_ViewPos_UpdateForAllClients
==============
*/

unsigned int __fastcall Stream_ViewPos_UpdateForAllClients()
{
  return ?Stream_ViewPos_UpdateForAllClients@@YAIXZ();
}

/*
==============
Stream_ViewPos_Init
==============
*/

void Stream_ViewPos_Init(void)
{
  ?Stream_ViewPos_Init@@YAXXZ();
}

/*
==============
Stream_LocalClientNum_GetCurrent
==============
*/
LocalClientNum_t (*Stream_LocalClientNum_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (LocalClientNum_t (*)[8])streamFrontendGlob->savedLocalClientNum[streamFrontendGlob->currentSavedViewPos][v1];
}

/*
==============
Stream_ViewCosFovLimit_GetCurrent
==============
*/
float (*Stream_ViewCosFovLimit_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (float (*)[8])streamFrontendGlob->savedViewCosFovLimit[streamFrontendGlob->currentSavedViewPos][v1];
}

/*
==============
Stream_ViewDir_GetCurrent
==============
*/
vec3_t (*Stream_ViewDir_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (vec3_t (*)[8])streamFrontendGlob->savedViewDir[streamFrontendGlob->currentSavedViewPos][v1];
}

/*
==============
Stream_ViewPos_AppendPredicted
==============
*/
void Stream_ViewPos_AppendPredicted(unsigned int clientIndex, StreamUpdateMultiView *multiView)
{
  __int64 v2; 
  unsigned __int64 v4; 
  vec3_t *v5; 
  vec3_t *v6; 
  vec3_t *v7; 
  float v8; 
  float v9; 
  LocalClientNum_t v10; 
  __m128 v12; 
  __m128 v16; 
  double v19; 
  const dvar_t *v20; 
  __m128 v21; 
  float v25; 
  __m128 v27; 
  __int64 v30; 
  __int64 v32; 
  int v33; 
  unsigned __int64 i; 
  __m128 v; 
  __m128 v36; 
  __m128 v37; 

  v2 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v33 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v33) )
      __debugbreak();
  }
  v4 = 0i64;
  for ( i = streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v2]; v4 < i; multiView->localClientIndex[multiView->viewCount++] = v10 )
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 20, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v5 = &streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v6 = &streamFrontendGlob->savedViewDir[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v7 = &streamFrontendGlob->savedViewVelocity[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v8 = streamFrontendGlob->savedViewZoomFactor[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v9 = streamFrontendGlob->savedViewCosFovLimit[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v32) = 2;
      LODWORD(v30) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v10 = streamFrontendGlob->savedLocalClientNum[streamFrontendGlob->currentSavedViewPos][v2][v4];
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewPos ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewPos )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v.m128_i32[3] = 0;
    v12 = v;
    v12.m128_f32[0] = v5->v[0];
    _XMM3 = v12;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
    }
    multiView->viewPos[multiView->viewCount] = (float4)_XMM3.v;
    v = _XMM3.v;
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewDir ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewDir )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v36.m128_i32[3] = 0;
    v16 = v36;
    v16.m128_f32[0] = v6->v[0];
    _XMM3 = v16;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
    }
    multiView->viewDir[multiView->viewCount] = (float4)_XMM3.v;
    v36 = _XMM3.v;
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewZoomFactors ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewZoomFactors )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    multiView->viewZoomFactors[multiView->viewCount] = v8;
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewCosFovLimit ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewCosFovLimit )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    multiView->viewCosFovLimit[multiView->viewCount] = v9;
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewDistanceScaleSq ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewDistanceScaleSq )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    multiView->viewDistanceScaleSq[multiView->viewCount] = 1.0;
    v19 = CL_StreamViews_ParametricVelocity(v7);
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.velocityZoomFactors ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.velocityZoomFactors )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v20 = DCONST_DVARFLT_stream_maxVelocityZoomFactor;
    if ( !DCONST_DVARFLT_stream_maxVelocityZoomFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxVelocityZoomFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    multiView->velocityZoomFactors[multiView->viewCount] = *(float *)&v19 * v20->current.value;
    v21 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)v7->v, (__m128)*(unsigned __int64 *)v7->v, 85);
    v21.m128_f32[0] = fsqrt((float)((float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(COERCE_FLOAT(*(_QWORD *)v7->v) * COERCE_FLOAT(*(_QWORD *)v7->v))) + (float)(v7->v[2] * v7->v[2]));
    _XMM3 = v21;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v25 = COERCE_FLOAT(*(_QWORD *)v7->v) * (float)(1.0 / *(float *)&_XMM0);
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 208, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewVelocityDir ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewVelocityDir )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    v37.m128_i32[3] = 0;
    v27 = v37;
    v27.m128_f32[0] = v25;
    _XMM0 = v27;
    __asm
    {
      vinsertps xmm0, xmm0, xmm6, 10h
      vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    }
    multiView->viewVelocityDir[multiView->viewCount] = (float4)_XMM0.v;
    v37 = _XMM0.v;
    if ( multiView->viewCount >= 0x10u )
    {
      LODWORD(v32) = 16;
      LODWORD(v30) = multiView->viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.localClientIndex ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.localClientIndex )\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    ++v4;
  }
}

/*
==============
Stream_ViewPos_GetCurrent
==============
*/
vec3_t (*Stream_ViewPos_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 20, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (vec3_t (*)[8])streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][v1];
}

/*
==============
Stream_ViewPos_GetDynamicMultiView
==============
*/
void Stream_ViewPos_GetDynamicMultiView(unsigned int clientIndex, StreamUpdateMultiView *multiView)
{
  multiView->viewCount = 0;
  Stream_ViewPos_AppendPredicted(clientIndex, multiView);
  Stream_ViewPos_RemoveDuplicates(multiView);
}

/*
==============
Stream_ViewPos_GetStaticMultiView
==============
*/
void Stream_ViewPos_GetStaticMultiView(StreamUpdateMultiView *multiView)
{
  int v1; 

  v1 = 0;
  for ( multiView->viewCount = 0; v1 < streamFrontendGlob->numClientsLastFrame; ++v1 )
    Stream_ViewPos_AppendPredicted(v1, multiView);
  Stream_ViewPos_RemoveDuplicates(multiView);
}

/*
==============
Stream_ViewPos_Init
==============
*/
void Stream_ViewPos_Init(void)
{
  if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 11, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
    __debugbreak();
  streamFrontendGlob->currentSavedViewPos = 0;
  memset_0(streamFrontendGlob->savedViewPosCount, 0, 0x190ui64);
}

/*
==============
Stream_ViewPos_MoveToNextFrame
==============
*/
void Stream_ViewPos_MoveToNextFrame(void)
{
  _BOOL8 v0; 

  v0 = (streamFrontendGlob->currentSavedViewPos & 1) == 0;
  *(_QWORD *)&streamFrontendGlob->savedViewPosCount[v0][0] = 0i64;
  streamFrontendGlob->currentSavedViewPos = v0;
}

/*
==============
Stream_ViewPos_RemoveDuplicates
==============
*/
void Stream_ViewPos_RemoveDuplicates(StreamUpdateMultiView *multiView)
{
  unsigned __int64 v1; 
  float4 *v3; 
  float *v4; 
  unsigned __int64 v5; 
  StreamUpdateMultiView *v6; 
  __m128 v7; 

  v1 = 1i64;
  if ( multiView->viewCount > 1u )
  {
    v3 = &multiView->viewPos[1];
    v4 = &multiView->velocityZoomFactors[1];
    do
    {
      v5 = 0i64;
      if ( v1 )
      {
        v6 = multiView;
        while ( 1 )
        {
          v7 = _mm128_sub_ps(v6->viewPos[0].v, v3->v);
          _XMM2 = _mm128_mul_ps(v7, v7);
          __asm
          {
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
          }
          if ( *(float *)&_XMM2 <= 0.0099999998 )
            break;
          ++v5;
          v6 = (StreamUpdateMultiView *)((char *)v6 + 16);
          if ( v5 >= v1 )
            goto LABEL_7;
        }
        *v3 = multiView->viewPos[multiView->viewCount - 1];
        v3[16] = multiView->viewPos[multiView->viewCount + 15];
        v3[32] = multiView->viewDir[multiView->viewCount + 15];
        *(v4 - 16) = multiView->viewVelocityDir[15].v.m128_f32[multiView->viewCount + 3];
        *v4 = multiView->viewZoomFactors[multiView->viewCount + 15];
        v4[16] = multiView->velocityZoomFactors[multiView->viewCount + 15];
        v4[32] = multiView->viewCosFovLimit[multiView->viewCount + 15];
        v4[48] = multiView->viewDistanceScaleSq[multiView->viewCount-- + 15];
      }
      else
      {
LABEL_7:
        ++v1;
        ++v4;
        ++v3;
      }
    }
    while ( v1 < multiView->viewCount );
  }
}

/*
==============
Stream_ViewPos_UpdateForAllClients
==============
*/
__int64 Stream_ViewPos_UpdateForAllClients()
{
  StreamFrontendGlob *v0; 
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const vec3_t *ManualViewAngles; 
  float v9; 
  double ManualViewZoomFactor; 
  double ManualViewCosFovLimit; 
  __int64 v12; 
  __int64 v13; 
  const vec3_t *AutoViewAngles; 
  float v15; 
  double AutoViewZoomFactor; 
  __int64 result; 
  __int64 v18; 
  __int64 v19; 
  char v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v29; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  v1 = 0i64;
  v21 = 0;
  v2 = 0;
  v26 = 0i64;
  v3 = 0i64;
  v27 = (streamFrontendGlob->gameMode[0] != 1) + 1i64;
  while ( 1 )
  {
    v4 = 0;
    v20 = v0->gameMode[0];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 20, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v22 = (__int64)v0->savedViewPos[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v5 = (__int64)v0->savedViewDir[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v6 = (__int64)v0->savedViewVelocity[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v23 = (__int64)v0->savedViewZoomFactor[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v24 = (__int64)v0->savedViewCosFovLimit[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v25 = (__int64)v0->savedLocalClientNum[v0->currentSavedViewPos][v3];
    do
    {
      if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)v1, (LocalClientNum_t)v2) )
      {
        v7 = v4;
        *(vec3_t *)(v22 + 12i64 * v4) = *CL_StreamViews_GetManualViewOrigin((StreamManualViewType)v1, (LocalClientNum_t)v2);
        ManualViewAngles = CL_StreamViews_GetManualViewAngles((StreamManualViewType)v1, (LocalClientNum_t)v2);
        AnglesToAxis(ManualViewAngles, &axis);
        v9 = axis.m[0].v[1];
        *(float *)(v5 + 12i64 * v4) = axis.m[0].v[0];
        *(float *)(v5 + 12i64 * v4 + 8) = axis.m[0].v[2];
        *(float *)(v5 + 12i64 * v4 + 4) = v9;
        *(vec3_t *)(v6 + 12i64 * v4) = *CL_StreamViews_GetManualViewVelocity((StreamManualViewType)v1, (LocalClientNum_t)v2);
        ManualViewZoomFactor = CL_StreamViews_GetManualViewZoomFactor((StreamManualViewType)v1, (LocalClientNum_t)v2);
        *(float *)(v23 + 4i64 * v4) = *(float *)&ManualViewZoomFactor;
        ManualViewCosFovLimit = CL_StreamViews_GetManualViewCosFovLimit((StreamManualViewType)v1, (LocalClientNum_t)v2);
        ++v4;
        *(float *)(v24 + 4 * v7) = *(float *)&ManualViewCosFovLimit;
        *(_DWORD *)(v25 + 4 * v7) = v2;
      }
      ++v1;
    }
    while ( v1 < 5 );
    if ( v20 == 1 && CL_StreamViewsSP_IsAutoViewSet(LINEAR, v2) )
    {
      v12 = v4;
      v13 = 3i64 * v4;
      *(vec3_t *)(v22 + 12i64 * v4) = *CL_StreamViewsSP_GetAutoViewOrigin(LINEAR, v2);
      AutoViewAngles = CL_StreamViewsSP_GetAutoViewAngles(LINEAR, v2);
      AnglesToAxis(AutoViewAngles, &v29);
      v15 = v29.m[0].v[1];
      *(float *)(v5 + 12i64 * v4) = v29.m[0].v[0];
      *(float *)(v5 + 12i64 * v4 + 8) = v29.m[0].v[2];
      *(float *)(v5 + 12i64 * v4 + 4) = v15;
      AutoViewZoomFactor = CL_StreamViewsSP_GetAutoViewZoomFactor(LINEAR, v2);
      v1 = 0i64;
      ++v4;
      *(float *)(v23 + 4 * v12) = *(float *)&AutoViewZoomFactor;
      *(_QWORD *)(v6 + 4 * v13) = 0i64;
      *(_DWORD *)(v6 + 4 * v13 + 8) = 0;
      *(_DWORD *)(v24 + 4 * v12) = 0;
      *(_DWORD *)(v25 + 4 * v12) = 0;
    }
    else
    {
      v1 = 0i64;
    }
    if ( v4 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 145, ASSERT_TYPE_ASSERT, "(viewPosCount <= ( sizeof( *array_counter( viewPosition ) ) + 0 ))", (const char *)&queryFormat, "viewPosCount <= ARRAY_COUNT( viewPosition )") )
      __debugbreak();
    if ( v2 >= 2 )
    {
      LODWORD(v19) = 2;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v26] = v4;
    result = v21 + 1;
    if ( !v4 )
      result = v21;
    v3 = ++v2;
    v21 = result;
    v26 = v2;
    if ( v2 >= v27 )
      break;
    v0 = streamFrontendGlob;
  }
  return result;
}

/*
==============
Stream_ViewPos_UpdateForClient
==============
*/
__int64 Stream_ViewPos_UpdateForClient(unsigned int clientIndex)
{
  __int64 v1; 
  __int64 v2; 
  vec3_t (*Current)[8]; 
  vec3_t (*v4)[8]; 
  vec3_t (*v5)[8]; 
  unsigned __int64 v6; 
  const vec3_t *ManualViewAngles; 
  float v8; 
  double ManualViewZoomFactor; 
  double ManualViewCosFovLimit; 
  const vec3_t *AutoViewAngles; 
  float v12; 
  double AutoViewZoomFactor; 
  __int64 result; 
  __int64 v15; 
  char v16; 
  float (*v17)[8]; 
  float (*v18)[8]; 
  LocalClientNum_t (*v19)[8]; 
  tmat33_t<vec3_t> axis; 

  v1 = 0i64;
  v16 = streamFrontendGlob->gameMode[0];
  v2 = clientIndex;
  Current = Stream_ViewPos_GetCurrent(clientIndex);
  v4 = Stream_ViewDir_GetCurrent(v2);
  v5 = Stream_ViewVelocity_GetCurrent(v2);
  v17 = Stream_ViewZoomFactor_GetCurrent(v2);
  v18 = Stream_ViewCosFovLimit_GetCurrent(v2);
  v6 = 0i64;
  v19 = Stream_LocalClientNum_GetCurrent(v2);
  do
  {
    if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)v6, (LocalClientNum_t)v2) )
    {
      (*Current)[v1] = *CL_StreamViews_GetManualViewOrigin((StreamManualViewType)v6, (LocalClientNum_t)v2);
      ManualViewAngles = CL_StreamViews_GetManualViewAngles((StreamManualViewType)v6, (LocalClientNum_t)v2);
      AnglesToAxis(ManualViewAngles, &axis);
      v8 = axis.m[0].v[1];
      (*v4)[v1].v[0] = axis.m[0].v[0];
      (*v4)[v1].v[2] = axis.m[0].v[2];
      (*v4)[v1].v[1] = v8;
      (*v5)[v1] = *CL_StreamViews_GetManualViewVelocity((StreamManualViewType)v6, (LocalClientNum_t)v2);
      ManualViewZoomFactor = CL_StreamViews_GetManualViewZoomFactor((StreamManualViewType)v6, (LocalClientNum_t)v2);
      (*v17)[v1] = *(float *)&ManualViewZoomFactor;
      ManualViewCosFovLimit = CL_StreamViews_GetManualViewCosFovLimit((StreamManualViewType)v6, (LocalClientNum_t)v2);
      (*v18)[v1] = *(float *)&ManualViewCosFovLimit;
      (*v19)[v1] = v2;
      v1 = (unsigned int)(v1 + 1);
    }
    ++v6;
  }
  while ( v6 < 5 );
  if ( v16 == 1 && CL_StreamViewsSP_IsAutoViewSet(LINEAR, v2) )
  {
    (*Current)[v1] = *CL_StreamViewsSP_GetAutoViewOrigin(LINEAR, v2);
    AutoViewAngles = CL_StreamViewsSP_GetAutoViewAngles(LINEAR, v2);
    AnglesToAxis(AutoViewAngles, &axis);
    v12 = axis.m[0].v[1];
    (*v4)[v1].v[0] = axis.m[0].v[0];
    (*v4)[v1].v[2] = axis.m[0].v[2];
    (*v4)[v1].v[1] = v12;
    AutoViewZoomFactor = CL_StreamViewsSP_GetAutoViewZoomFactor(LINEAR, v2);
    (*v17)[v1] = *(float *)&AutoViewZoomFactor;
    *(_QWORD *)(*v5)[v1].v = 0i64;
    (*v5)[v1].v[2] = 0.0;
    (*v18)[v1] = 0.0;
    (*v19)[v1] = LOCAL_CLIENT_0;
    LODWORD(v1) = v1 + 1;
  }
  if ( (unsigned int)v1 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 145, ASSERT_TYPE_ASSERT, "(viewPosCount <= ( sizeof( *array_counter( viewPosition ) ) + 0 ))", (const char *)&queryFormat, "viewPosCount <= ARRAY_COUNT( viewPosition )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  result = (unsigned int)v1;
  streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v2] = v1;
  return result;
}

/*
==============
Stream_ViewVelocity_GetCurrent
==============
*/
vec3_t (*Stream_ViewVelocity_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (vec3_t (*)[8])streamFrontendGlob->savedViewVelocity[streamFrontendGlob->currentSavedViewPos][v1];
}

/*
==============
Stream_ViewZoomFactor_GetCurrent
==============
*/
float (*Stream_ViewZoomFactor_GetCurrent(unsigned int clientIndex))[8]
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return (float (*)[8])streamFrontendGlob->savedViewZoomFactor[streamFrontendGlob->currentSavedViewPos][v1];
}

