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
  __int64 v7; 
  unsigned __int64 v9; 
  LocalClientNum_t v21; 
  const dvar_t *v37; 
  __int64 v66; 
  __int64 v68; 
  int v69; 
  unsigned __int64 v70; 
  float v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 

  v7 = clientIndex;
  _RBX = multiView;
  if ( clientIndex >= 2 )
  {
    v69 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v69) )
      __debugbreak();
  }
  v9 = 0i64;
  v70 = streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v7];
  if ( streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v7] )
  {
    __asm
    {
      vmovaps [rsp+128h+var_48], xmm6
      vmovaps [rsp+128h+var_58], xmm7
      vmovaps [rsp+128h+var_68], xmm8
      vmovaps [rsp+128h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+128h+var_88], xmm10
      vmovss  xmm10, cs:__real@80000000
    }
    do
    {
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 20, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RSI = &streamFrontendGlob->savedViewPos[streamFrontendGlob->currentSavedViewPos][v7][v9];
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RBP = &streamFrontendGlob->savedViewDir[streamFrontendGlob->currentSavedViewPos][v7][v9];
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _R13 = &streamFrontendGlob->savedViewVelocity[streamFrontendGlob->currentSavedViewPos][v7][v9];
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RDX = streamFrontendGlob;
      _RAX = v9 + 8 * (v7 + 2i64 * streamFrontendGlob->currentSavedViewPos);
      __asm { vmovss  xmm7, dword ptr [rdx+rax*4+0B970DCh] }
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RDX = streamFrontendGlob;
      _RAX = v9 + 8 * (v7 + 2i64 * streamFrontendGlob->currentSavedViewPos);
      __asm { vmovss  xmm6, dword ptr [rdx+rax*4+0B9715Ch] }
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v68) = 2;
        LODWORD(v66) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      v21 = streamFrontendGlob->savedLocalClientNum[streamFrontendGlob->currentSavedViewPos][v7][v9];
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewPos ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewPos )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rsi] }
      HIDWORD(v73) = 0;
      __asm { vmovups xmm3, xmmword ptr [rsp+60h] }
      _RAX = 2i64 * _RBX->viewCount;
      __asm
      {
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
        vmovups xmmword ptr [rbx+rax*8], xmm3
        vmovups xmmword ptr [rsp+60h], xmm3
      }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewDir ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewDir )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rbp+0] }
      HIDWORD(v74) = 0;
      __asm { vmovups xmm3, xmmword ptr [rsp+70h] }
      _RAX = 2 * (_RBX->viewCount + 16i64);
      __asm
      {
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
        vmovups xmmword ptr [rbx+rax*8], xmm3
        vmovups xmmword ptr [rsp+70h], xmm3
      }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewZoomFactors ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewZoomFactors )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RAX = _RBX->viewCount;
      __asm { vmovss  dword ptr [rbx+rax*4+300h], xmm7 }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewCosFovLimit ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewCosFovLimit )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RAX = _RBX->viewCount;
      __asm { vmovss  dword ptr [rbx+rax*4+380h], xmm6 }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewDistanceScaleSq ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewDistanceScaleSq )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      _RBX->viewDistanceScaleSq[_RBX->viewCount] = 1.0;
      *(double *)&_XMM0 = CL_StreamViews_ParametricVelocity(_R13);
      __asm { vmovaps xmm6, xmm0 }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.velocityZoomFactors ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.velocityZoomFactors )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      v37 = DCONST_DVARFLT_stream_maxVelocityZoomFactor;
      if ( !DCONST_DVARFLT_stream_maxVelocityZoomFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxVelocityZoomFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      __asm { vmulss  xmm0, xmm6, dword ptr [rsi+28h] }
      _RAX = _RBX->viewCount;
      __asm
      {
        vmovss  dword ptr [rbx+rax*4+340h], xmm0
        vmovsd  xmm1, qword ptr [r13+0]
        vmovsd  [rsp+128h+var_E0], xmm1
        vmovss  xmm5, dword ptr [rsp+128h+var_E0]
        vshufps xmm6, xmm1, xmm1, 55h ; 'U'
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
      }
      v72 = _R13->v[2];
      __asm
      {
        vmovss  xmm4, [rsp+128h+var_D8]
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm7, xmm5, xmm1
        vmulss  xmm6, xmm6, xmm1
        vmulss  xmm8, xmm4, xmm1
      }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 208, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.viewVelocityDir ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.viewVelocityDir )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      HIDWORD(v75) = 0;
      __asm { vmovups xmm0, xmmword ptr [rsp+80h] }
      _RAX = 2 * (_RBX->viewCount + 32i64);
      __asm
      {
        vmovss  xmm0, xmm0, xmm7
        vinsertps xmm0, xmm0, xmm6, 10h
        vinsertps xmm0, xmm0, xmm8, 20h ; ' '
        vmovups xmmword ptr [rbx+rax*8], xmm0
        vmovups xmmword ptr [rsp+80h], xmm0
      }
      if ( _RBX->viewCount >= 0x10u )
      {
        LODWORD(v68) = 16;
        LODWORD(v66) = _RBX->viewCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( multiView.viewCount ) < (unsigned)( ( sizeof( *array_counter( multiView.localClientIndex ) ) + 0 ) )", "multiView.viewCount doesn't index ARRAY_COUNT( multiView.localClientIndex )\n\t%i not in [0, %i)", v66, v68) )
          __debugbreak();
      }
      ++v9;
      _RBX->localClientIndex[_RBX->viewCount++] = v21;
    }
    while ( v9 < v70 );
    __asm
    {
      vmovaps xmm10, [rsp+128h+var_88]
      vmovaps xmm9, [rsp+128h+var_78]
      vmovaps xmm8, [rsp+128h+var_68]
      vmovaps xmm7, [rsp+128h+var_58]
      vmovaps xmm6, [rsp+128h+var_48]
    }
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
  float *v5; 
  unsigned __int64 v6; 
  bool v7; 

  v1 = 1i64;
  _R8 = multiView;
  if ( multiView->viewCount > 1u )
  {
    __asm { vmovss  xmm4, cs:__real@3c23d70a }
    _R9 = &multiView->viewPos[1];
    v5 = &multiView->velocityZoomFactors[1];
    do
    {
      v6 = 0i64;
      v7 = v1 == 0;
      if ( v1 )
      {
        __asm { vmovups xmm3, xmmword ptr [r9] }
        _RCX = _R8;
        while ( 1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx]
            vsubps  xmm1, xmm0, xmm3
            vmulps  xmm2, xmm1, xmm1
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vcomiss xmm2, xmm4
          }
          if ( v7 )
            break;
          ++v6;
          _RCX = (StreamUpdateMultiView *)((char *)_RCX + 16);
          v7 = v6 <= v1;
          if ( v6 >= v1 )
            goto LABEL_7;
        }
        _RAX = 2i64 * _R8->viewCount;
        __asm
        {
          vmovups xmm0, xmmword ptr [r8+rax*8-10h]
          vmovdqu xmmword ptr [r9], xmm0
        }
        _RAX = 2 * (_R8->viewCount + 15i64);
        __asm
        {
          vmovups xmm0, xmmword ptr [r8+rax*8]
          vmovdqu xmmword ptr [r9+100h], xmm0
        }
        _RAX = 2 * (_R8->viewCount + 31i64);
        __asm
        {
          vmovups xmm0, xmmword ptr [r8+rax*8]
          vmovdqu xmmword ptr [r9+200h], xmm0
        }
        *(v5 - 16) = _R8->viewVelocityDir[15].v.m128_f32[_R8->viewCount + 3];
        *v5 = _R8->viewZoomFactors[_R8->viewCount + 15];
        v5[16] = _R8->velocityZoomFactors[_R8->viewCount + 15];
        v5[32] = _R8->viewCosFovLimit[_R8->viewCount + 15];
        v5[48] = _R8->viewDistanceScaleSq[_R8->viewCount-- + 15];
      }
      else
      {
LABEL_7:
        ++v1;
        ++v5;
        ++_R9;
      }
    }
    while ( v1 < _R8->viewCount );
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
  __int64 v6; 
  const vec3_t *ManualViewAngles; 
  const vec3_t *AutoViewAngles; 
  __int64 result; 
  __int64 v23; 
  __int64 v24; 
  char v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v34; 

  Stream_CheckFrontendUpdateLocks();
  v0 = streamFrontendGlob;
  v1 = 0i64;
  v26 = 0;
  v2 = 0;
  v31 = 0i64;
  v3 = 0i64;
  v32 = (streamFrontendGlob->gameMode[0] != 1) + 1i64;
  while ( 1 )
  {
    v4 = 0;
    v25 = v0->gameMode[0];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 20, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v27 = (__int64)v0->savedViewPos[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    _R13 = (__int64)v0->savedViewDir[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v6 = (__int64)v0->savedViewVelocity[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v28 = (__int64)v0->savedViewZoomFactor[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v29 = (__int64)v0->savedViewCosFovLimit[v0->currentSavedViewPos][v3];
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v0 = streamFrontendGlob;
    }
    v30 = (__int64)v0->savedLocalClientNum[v0->currentSavedViewPos][v3];
    do
    {
      if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)v1, (LocalClientNum_t)v2) )
      {
        _RDI = v4;
        _RBX = 3i64 * v4;
        *(vec3_t *)(v27 + 12i64 * v4) = *CL_StreamViews_GetManualViewOrigin((StreamManualViewType)v1, (LocalClientNum_t)v2);
        ManualViewAngles = CL_StreamViews_GetManualViewAngles((StreamManualViewType)v1, (LocalClientNum_t)v2);
        AnglesToAxis(ManualViewAngles, &axis);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0F8h+axis]
          vmovss  xmm1, dword ptr [rsp+0F8h+axis+4]
          vmovss  dword ptr [r13+rbx*4+0], xmm0
          vmovss  xmm0, dword ptr [rsp+0F8h+axis+8]
          vmovss  dword ptr [r13+rbx*4+8], xmm0
          vmovss  dword ptr [r13+rbx*4+4], xmm1
        }
        *(vec3_t *)(v6 + 12i64 * v4) = *CL_StreamViews_GetManualViewVelocity((StreamManualViewType)v1, (LocalClientNum_t)v2);
        *(double *)&_XMM0 = CL_StreamViews_GetManualViewZoomFactor((StreamManualViewType)v1, (LocalClientNum_t)v2);
        _RAX = v28;
        __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
        *(double *)&_XMM0 = CL_StreamViews_GetManualViewCosFovLimit((StreamManualViewType)v1, (LocalClientNum_t)v2);
        _RAX = v29;
        ++v4;
        __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
        *(_DWORD *)(v30 + 4 * _RDI) = v2;
      }
      ++v1;
    }
    while ( v1 < 5 );
    if ( v25 == 1 && CL_StreamViewsSP_IsAutoViewSet(LINEAR, v2) )
    {
      _RDI = v4;
      _RBX = 3i64 * v4;
      *(vec3_t *)(v27 + 12i64 * v4) = *CL_StreamViewsSP_GetAutoViewOrigin(LINEAR, v2);
      AutoViewAngles = CL_StreamViewsSP_GetAutoViewAngles(LINEAR, v2);
      AnglesToAxis(AutoViewAngles, &v34);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+var_58]
        vmovss  xmm1, dword ptr [rsp+0F8h+var_58+4]
        vmovss  dword ptr [r13+rbx*4+0], xmm0
        vmovss  xmm0, dword ptr [rsp+0F8h+var_58+8]
        vmovss  dword ptr [r13+rbx*4+8], xmm0
        vmovss  dword ptr [r13+rbx*4+4], xmm1
      }
      *(double *)&_XMM0 = CL_StreamViewsSP_GetAutoViewZoomFactor(LINEAR, v2);
      _RAX = v28;
      v1 = 0i64;
      ++v4;
      __asm { vmovss  dword ptr [rax+rdi*4], xmm0 }
      *(_QWORD *)(v6 + 4 * _RBX) = 0i64;
      *(_DWORD *)(v6 + 4 * _RBX + 8) = 0;
      *(_DWORD *)(v29 + 4 * _RDI) = 0;
      *(_DWORD *)(v30 + 4 * _RDI) = 0;
    }
    else
    {
      v1 = 0i64;
    }
    if ( v4 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 145, ASSERT_TYPE_ASSERT, "(viewPosCount <= ( sizeof( *array_counter( viewPosition ) ) + 0 ))", (const char *)&queryFormat, "viewPosCount <= ARRAY_COUNT( viewPosition )") )
      __debugbreak();
    if ( v2 >= 2 )
    {
      LODWORD(v24) = 2;
      LODWORD(v23) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v31] = v4;
    result = v26 + 1;
    if ( !v4 )
      result = v26;
    v3 = ++v2;
    v26 = result;
    v31 = v2;
    if ( v2 >= v32 )
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
  __int64 v2; 
  vec3_t (*Current)[8]; 
  vec3_t (*v5)[8]; 
  unsigned __int64 v6; 
  const vec3_t *ManualViewAngles; 
  const vec3_t *AutoViewAngles; 
  __int64 result; 
  __int64 v21; 
  char v22; 
  float (*v23)[8]; 
  float (*v24)[8]; 
  LocalClientNum_t (*v25)[8]; 
  tmat33_t<vec3_t> axis; 

  _R14 = 0i64;
  v22 = streamFrontendGlob->gameMode[0];
  v2 = clientIndex;
  Current = Stream_ViewPos_GetCurrent(clientIndex);
  _R12 = Stream_ViewDir_GetCurrent(v2);
  v5 = Stream_ViewVelocity_GetCurrent(v2);
  v23 = Stream_ViewZoomFactor_GetCurrent(v2);
  v24 = Stream_ViewCosFovLimit_GetCurrent(v2);
  v6 = 0i64;
  v25 = Stream_LocalClientNum_GetCurrent(v2);
  do
  {
    if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)v6, (LocalClientNum_t)v2) )
    {
      _RBX = 3 * _R14;
      (*Current)[_R14] = *CL_StreamViews_GetManualViewOrigin((StreamManualViewType)v6, (LocalClientNum_t)v2);
      ManualViewAngles = CL_StreamViews_GetManualViewAngles((StreamManualViewType)v6, (LocalClientNum_t)v2);
      AnglesToAxis(ManualViewAngles, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+axis]
        vmovss  xmm1, dword ptr [rsp+0B8h+axis+4]
        vmovss  dword ptr [r12+rbx*4], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+axis+8]
        vmovss  dword ptr [r12+rbx*4+8], xmm0
        vmovss  dword ptr [r12+rbx*4+4], xmm1
      }
      (*v5)[_R14] = *CL_StreamViews_GetManualViewVelocity((StreamManualViewType)v6, (LocalClientNum_t)v2);
      *(double *)&_XMM0 = CL_StreamViews_GetManualViewZoomFactor((StreamManualViewType)v6, (LocalClientNum_t)v2);
      _RAX = v23;
      __asm { vmovss  dword ptr [rax+r14*4], xmm0 }
      *(double *)&_XMM0 = CL_StreamViews_GetManualViewCosFovLimit((StreamManualViewType)v6, (LocalClientNum_t)v2);
      _RAX = v24;
      __asm { vmovss  dword ptr [rax+r14*4], xmm0 }
      (*v25)[_R14] = v2;
      _R14 = (unsigned int)(_R14 + 1);
    }
    ++v6;
  }
  while ( v6 < 5 );
  if ( v22 == 1 && CL_StreamViewsSP_IsAutoViewSet(LINEAR, v2) )
  {
    _RBX = 3 * _R14;
    (*Current)[_R14] = *CL_StreamViewsSP_GetAutoViewOrigin(LINEAR, v2);
    AutoViewAngles = CL_StreamViewsSP_GetAutoViewAngles(LINEAR, v2);
    AnglesToAxis(AutoViewAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+axis]
      vmovss  xmm1, dword ptr [rsp+0B8h+axis+4]
      vmovss  dword ptr [r12+rbx*4], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+axis+8]
      vmovss  dword ptr [r12+rbx*4+8], xmm0
      vmovss  dword ptr [r12+rbx*4+4], xmm1
    }
    *(double *)&_XMM0 = CL_StreamViewsSP_GetAutoViewZoomFactor(LINEAR, v2);
    _RAX = v23;
    __asm { vmovss  dword ptr [rax+r14*4], xmm0 }
    *(_QWORD *)(*v5)[_R14].v = 0i64;
    (*v5)[_R14].v[2] = 0.0;
    (*v24)[_R14] = 0.0;
    (*v25)[_R14] = LOCAL_CLIENT_0;
    LODWORD(_R14) = _R14 + 1;
  }
  if ( (unsigned int)_R14 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 145, ASSERT_TYPE_ASSERT, "(viewPosCount <= ( sizeof( *array_counter( viewPosition ) ) + 0 ))", (const char *)&queryFormat, "viewPosCount <= ARRAY_COUNT( viewPosition )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_viewpos.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, 2) )
      __debugbreak();
  }
  result = (unsigned int)_R14;
  streamFrontendGlob->savedViewPosCount[streamFrontendGlob->currentSavedViewPos][v2] = _R14;
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

