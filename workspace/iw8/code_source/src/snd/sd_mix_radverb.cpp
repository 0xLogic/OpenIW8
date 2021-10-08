/*
==============
SD_MixReverb
==============
*/

void __fastcall SD_MixReverb(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *reverbSubmixBus, snd_rv_params *radverbParam, snd_rv_state_simd *radverbState, float *reverbPan)
{
  ?SD_MixReverb@@YAXAEAU?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@PEAUsnd_rv_params@@PEAUsnd_rv_state_simd@@PEAM@Z(reverbSubmixBus, radverbParam, radverbState, reverbPan);
}

/*
==============
SD_MixDelay
==============
*/

void __fastcall SD_MixDelay(SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *delaySubmixBus, SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *reverbSubmixBus, snd_quad_five_tap_delay_params *delayParam, unsigned int *delayParamHash, snd_quad_five_tap_delay_state *delayState)
{
  ?SD_MixDelay@@YAXAEAU?$ConstSequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@AEAU?$SequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@2@PEAUsnd_quad_five_tap_delay_params@@PEAIPEAUsnd_quad_five_tap_delay_state@@@Z(delaySubmixBus, reverbSubmixBus, delayParam, delayParamHash, delayState);
}

/*
==============
SD_MixReverb
==============
*/

void SD_MixReverb(void)
{
  ?SD_MixReverb@@YAXXZ();
}

/*
==============
SD_MixDelay
==============
*/
void SD_MixDelay(SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *delaySubmixBus, SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *reverbSubmixBus, snd_quad_five_tap_delay_params *delayParam, unsigned int *delayParamHash, snd_quad_five_tap_delay_state *delayState)
{
  signed __int64 v5; 
  void *v7; 
  unsigned int v12; 
  SD_DSP::QuadFrame *v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 *v16; 
  __int64 v17; 
  __int64 v18; 
  const float *v20; 
  const float *v21; 
  snd_quad_five_tap_delay_state *v24; 
  const float *v27; 
  const float *v28; 
  float *v29; 
  const float *v31; 
  const float *v32; 
  float *v33; 
  const float *v34; 
  const float *v35; 
  float *v36; 
  const float *v37; 
  float *v38; 
  const float *v39; 
  const float *v40; 
  const float *v41; 
  const float *v42; 
  const float *v43; 
  const float *v44; 
  const float *v45; 
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *v46; 
  __int64 v48; 
  char *fmt; 
  char v50[4168]; 
  __int64 v51; 

  v7 = alloca(v5);
  v51 = -2i64;
  __asm { vmovaps [rsp+10E8h+var_48], xmm6 }
  _RBP = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4160) = (unsigned __int64)&v48 ^ _security_cookie;
  *(_QWORD *)_RBP = reverbSubmixBus;
  *(_QWORD *)(_RBP + 8) = delayState;
  v12 = SND_Hash(delayParam, 0x64u);
  if ( *delayParamHash != v12 )
  {
    SND_FiveTapDelaySetParams(delayState, delayParam);
    *delayParamHash = v12;
  }
  v13 = (SD_DSP::QuadFrame *)(_RBP + 64);
  v14 = 256i64;
  do
  {
    SD_DSP::QuadFrame::QuadFrame(v13++);
    --v14;
  }
  while ( v14 );
  if ( (((_BYTE)_RBP + 64) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  if ( (((_BYTE)_RBP + 64) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", _RBP + 64) )
    __debugbreak();
  v15 = 0;
  v16 = (__int64 *)(_RBP + 16);
  do
  {
    v17 = v15 << 8;
    v18 = _RBP + 4 * v17 + 64;
    if ( _RBP + 4 * v17 == -64i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( (v18 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v16 = v18;
    ++v15;
    ++v16;
  }
  while ( v15 < 4 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+10h]
    vmovups ymmword ptr [rbp+10h], ymm0
    vmovups ymmword ptr [rbp+10h], ymm0
  }
  v20 = delaySubmixBus->data._Elems[2];
  v21 = delaySubmixBus->data._Elems[0];
  __asm
  {
    vextractf128 xmm0, ymm0, 1
    vpextrq rsi, xmm0, 1
  }
  v24 = *(snd_quad_five_tap_delay_state **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f004dce
    vmovss  dword ptr [rsp+10E8h+fmt], xmm6
    vmovss  xmm2, cs:__real@3f800000; incomingGain1
  }
  SD_DSP::RawGainCopy<256>(_RSI, v21, *(const float *)&_XMM2, v20, *(const float *)&fmt);
  v27 = delaySubmixBus->data._Elems[2];
  v28 = delaySubmixBus->data._Elems[1];
  v29 = *(float **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rsp+10E8h+fmt], xmm6
    vmovss  xmm2, cs:__real@3f800000; incomingGain1
  }
  SD_DSP::RawGainCopy<256>(v29, v28, *(const float *)&_XMM2, v27, *(const float *)&fmt);
  v31 = delaySubmixBus->data._Elems[6];
  v32 = delaySubmixBus->data._Elems[4];
  v33 = *(float **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(v33, v32, v31);
  v34 = delaySubmixBus->data._Elems[7];
  v35 = delaySubmixBus->data._Elems[5];
  v36 = *(float **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(v36, v35, v34);
  v37 = delaySubmixBus->data._Elems[8];
  v38 = *(float **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v38, v37);
  v39 = delaySubmixBus->data._Elems[12];
  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v38, v39);
  v40 = delaySubmixBus->data._Elems[9];
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v29, v40);
  v41 = delaySubmixBus->data._Elems[13];
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v29, v41);
  v42 = delaySubmixBus->data._Elems[10];
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v33, v42);
  v43 = delaySubmixBus->data._Elems[14];
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v33, v43);
  v44 = delaySubmixBus->data._Elems[11];
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v36, v44);
  v45 = delaySubmixBus->data._Elems[15];
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v36, v45);
  SND_FiveTapDelayFrame(v24, v38, v29, v33, v36, 256);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v38;
  v46 = *(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)_RBP;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)_RBP, 0, (const SD_DSP::ConstSampleBufferRefType<256> *)(_RBP + 8));
  *(_QWORD *)_RBP = v29;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v46, 1u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)_RBP = v33;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v46, 4u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)_RBP = v36;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v46, 5u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0ui64));
  __asm { vmovaps xmm6, [rsp+10E8h+var_48] }
}

/*
==============
SD_MixReverb
==============
*/
void SD_MixReverb(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *reverbSubmixBus, snd_rv_params *radverbParam, snd_rv_state_simd *radverbState, float *reverbPan)
{
  signed __int64 v4; 
  void *v6; 
  SD_DSP::QuadFrame *v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 *v12; 
  __int64 v13; 
  __int64 v14; 
  const float *v16; 
  const float *v17; 
  snd_rv_params *v25; 
  float *v28; 
  float *inLS; 
  float *inRS; 
  float *v32; 
  __int64 v44; 
  __int64 v51; 
  char *fmt; 
  char v53[4552]; 
  __int64 v54; 

  v6 = alloca(v4);
  v54 = -2i64;
  __asm { vmovaps [rsp+1288h+var_58], xmm6 }
  _RBP = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4544) = (unsigned __int64)&v51 ^ _security_cookie;
  *(_QWORD *)_RBP = reverbPan;
  *(_QWORD *)(_RBP + 8) = radverbState;
  *(_QWORD *)(_RBP + 16) = radverbParam;
  v9 = (SD_DSP::QuadFrame *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 192);
  v10 = 256i64;
  do
  {
    SD_DSP::QuadFrame::QuadFrame(v9++);
    --v10;
  }
  while ( v10 );
  if ( (((_BYTE)_RBP - 64) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  if ( (((_BYTE)_RBP - 64) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", _RBP + 192) )
    __debugbreak();
  v11 = 0;
  v12 = (__int64 *)(_RBP + 24);
  do
  {
    v13 = v11 << 8;
    v14 = _RBP + 4 * v13 + 192;
    if ( _RBP + 4 * v13 == -192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( (v14 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v12 = v14;
    ++v11;
    ++v12;
  }
  while ( v11 < 4 );
  __asm
  {
    vmovups ymm2, ymmword ptr [rbp+18h]
    vmovups ymmword ptr [rbp+18h], ymm2
    vmovups ymmword ptr [rbp+18h], ymm2
  }
  v16 = reverbSubmixBus->data._Elems[0];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = reverbSubmixBus->data._Elems[0];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = reverbSubmixBus->data._Elems[1];
  v17 = reverbSubmixBus->data._Elems[2];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = v17;
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = reverbSubmixBus->data._Elems[3];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = reverbSubmixBus->data._Elems[4];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = reverbSubmixBus->data._Elems[5];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = reverbSubmixBus->data._Elems[6];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x78) = reverbSubmixBus->data._Elems[7];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = reverbSubmixBus->data._Elems[8];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x88) = reverbSubmixBus->data._Elems[9];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90) = reverbSubmixBus->data._Elems[10];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98) = reverbSubmixBus->data._Elems[11];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = reverbSubmixBus->data._Elems[12];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8) = reverbSubmixBus->data._Elems[13];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0) = reverbSubmixBus->data._Elems[14];
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8) = reverbSubmixBus->data._Elems[15];
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+40h]
    vmovups ymmword ptr [rbp+10C0h], ymm0
    vmovups ymm1, ymmword ptr [rbp+60h]
    vmovups ymmword ptr [rbp+10E0h], ymm1
    vmovups ymm0, ymmword ptr [rbp+80h]
    vmovups ymmword ptr [rbp+1100h], ymm0
    vmovups ymm1, ymmword ptr [rbp+0A0h]
    vmovups ymmword ptr [rbp+1120h], ymm1
    vextractf128 xmm0, ymm2, 1
    vpextrq r14, xmm0, 1
  }
  _R13 = *(snd_rv_state_simd **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v25 = *(snd_rv_params **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f004dce
    vmovss  dword ptr [rsp+1288h+fmt], xmm6
    vmovss  xmm2, cs:__real@3f800000; incomingGain1
  }
  SD_DSP::RawGainCopy<256>(_R14, v16, *(const float *)&_XMM2, v17, *(const float *)&fmt);
  v28 = *(float **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rsp+1288h+fmt], xmm6
    vmovss  xmm2, cs:__real@3f800000; incomingGain1
  }
  SD_DSP::RawGainCopy<256>(v28, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10C8), *(const float *)&_XMM2, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10D0), *(const float *)&fmt);
  inLS = *(float **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(inLS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E0), *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10F0));
  inRS = *(float **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(inRS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E8), *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10F8));
  v32 = *(float **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v32, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1100));
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v32, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120));
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v28, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1108));
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v28, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1128));
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inLS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1110));
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inLS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1130));
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inRS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1118));
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inRS, *(const float *const *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1138));
  SND_RvFrame(v25, _R13, 0x100u, v32, v28, inLS, inRS, *(float **)_RBP);
  __asm
  {
    vbroadcastss ymm2, dword ptr [r13+42Ch]
    vmulps  ymm0, ymm2, ymmword ptr [r13+22Ch]
    vmovups ymmword ptr [rbp+10C0h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+24Ch]
    vmovups ymmword ptr [rbp+10E0h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+26Ch]
    vmovups ymmword ptr [rbp+1100h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+28Ch]
    vmovups ymmword ptr [rbp+1120h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+2ACh]
    vmovups ymmword ptr [rbp+1140h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+2CCh]
    vmovups ymmword ptr [rbp+1160h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+2ECh]
    vmovups ymmword ptr [rbp+1180h], ymm0
    vmulps  ymm0, ymm2, ymmword ptr [r13+30Ch]
    vmovups ymmword ptr [rbp+11A0h], ymm0
  }
  *(_QWORD *)_RBP = v32;
  _RBX = _R13->prevPan;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64), _R13->prevPan, (const float *const)(_RBP + 4288));
  *(_QWORD *)_RBP = v28;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64), &_R13->prevPan[16], (const float *const)(_RBP + 4352));
  *(_QWORD *)_RBP = inLS;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64), &_R13->prevPan[32], (const float *const)(_RBP + 4416));
  *(_QWORD *)_RBP = inRS;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64), &_R13->prevPan[48], (const float *const)(_RBP + 4480));
  _RAX = _RBP + 4288;
  v44 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+60h], xmm0
    }
    _RBX += 32;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    _RAX += 128i64;
    --v44;
  }
  while ( v44 );
  __asm { vmovaps xmm6, [rsp+1288h+var_58] }
}

/*
==============
SD_MixReverb
==============
*/
void SD_MixReverb(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  float *v3; 
  unsigned int v4; 
  __m256i *v5; 
  float *v6; 
  unsigned int v11; 
  const bool *v12; 
  bool v13; 
  __int64 v14; 
  float *v15; 
  unsigned int v16; 
  __m256i *v17; 
  float *v18; 
  __int64 v23; 
  int v24; 
  __m256i v25; 
  SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> delaySubmixBus; 
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> reverbSubmixBus; 
  bool Bool_Internal_DebugName; 
  bool v32; 
  unsigned int v33; 
  const bool *v34; 

  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_reverb_enable, "snd_reverb_enable");
  v32 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_delay_enable, "snd_delay_enable");
  v24 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd mix delay usec");
  v0 = 0;
  v33 = 0;
  v34 = SndBusIsInterleaved;
  do
  {
    v1 = (unsigned int)(v0 + 4);
    if ( (unsigned int)v1 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 593, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT") )
      __debugbreak();
    if ( SndBusIsInterleaved[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 594, ASSERT_TYPE_ASSERT, "(!SndBusIsInterleaved[b])", (const char *)&queryFormat, "!SndBusIsInterleaved[b]") )
      __debugbreak();
    if ( (unsigned int)v1 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
      __debugbreak();
    v2 = (unsigned int)((_DWORD)v1 << 12);
    v3 = &g_sd.busBuffers[v2];
    if ( (((unsigned __int8)&g_sd + 4 * (_BYTE)v2 - 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", &g_sd.busBuffers[v2]) )
      __debugbreak();
    v4 = 0;
    v5 = &v25;
    do
    {
      v6 = &v3[256 * v4];
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
        __debugbreak();
      if ( ((unsigned __int8)v3 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
        __debugbreak();
      v5->m256i_i64[0] = (__int64)v6;
      ++v4;
      v5 = (__m256i *)((char *)v5 + 8);
    }
    while ( v4 < 0x10 );
    __asm
    {
      vmovups ymm3, [rsp+280h+var_240]
      vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems], ymm3
      vmovups ymm2, [rsp+280h+var_220]
      vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+20h], ymm2
      vmovups ymm1, [rbp+180h+var_200]
      vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+40h], ymm1
      vmovups ymm0, [rbp+180h+var_1E0]
      vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+60h], ymm0
      vmovups ymmword ptr [rbp+180h+reverbSubmixBus.data._Elems], ymm3
      vmovups ymmword ptr [rbp+180h+reverbSubmixBus.data._Elems+20h], ymm2
      vmovups ymmword ptr [rbp+180h+reverbSubmixBus.data._Elems+40h], ymm1
      vmovups ymmword ptr [rbp+180h+reverbSubmixBus.data._Elems+60h], ymm0
    }
    v11 = v33;
    v12 = v34;
    v13 = Bool_Internal_DebugName;
    if ( v32 )
    {
      if ( v33 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 586, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT") )
        __debugbreak();
      if ( *v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 587, ASSERT_TYPE_ASSERT, "(!SndBusIsInterleaved[b])", (const char *)&queryFormat, "!SndBusIsInterleaved[b]") )
        __debugbreak();
      if ( v33 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
        __debugbreak();
      v14 = v33 << 12;
      v15 = &g_sd.busBuffers[v14];
      if ( (((unsigned __int8)((unsigned __int8)&g_sd + 4 * v14) - 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", &g_sd.busBuffers[v14]) )
        __debugbreak();
      v16 = 0;
      v17 = &v25;
      do
      {
        v18 = &v15[256 * v16];
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)v15 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        v17->m256i_i64[0] = (__int64)v18;
        ++v16;
        v17 = (__m256i *)((char *)v17 + 8);
      }
      while ( v16 < 0x10 );
      __asm
      {
        vmovups ymm3, [rsp+280h+var_240]
        vmovups ymm2, [rsp+280h+var_220]
        vmovups ymm1, [rbp+180h+var_200]
        vmovups ymm0, [rbp+180h+var_1E0]
        vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems], ymm3
        vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+20h], ymm2
        vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+40h], ymm1
        vmovups ymmword ptr [rbp+180h+delaySubmixBus.data._Elems+60h], ymm0
      }
      v11 = v33;
      v23 = (int)v33;
      SD_MixDelay(&delaySubmixBus, &reverbSubmixBus, &g_sd.mixParam->quadDelay[v33], &g_sd.quadDelayParamHash[v33], &g_sd.quadDelay[v33]);
      v12 = v34;
      v13 = Bool_Internal_DebugName;
    }
    else
    {
      v23 = (int)v33;
    }
    if ( v13 )
      SD_MixReverb(&reverbSubmixBus, &g_sd.mixParam->radverb[v23], &g_sd.radverb[v23], g_sd.mixParam->reverbPan[v23]);
    v0 = v11 + 1;
    v33 = v0;
    v34 = v12 + 1;
  }
  while ( v0 < 4 );
  g_sd.mixDelayUsec = Sys_Microseconds() - v24;
  Sys_ProfEndNamedEvent();
}

