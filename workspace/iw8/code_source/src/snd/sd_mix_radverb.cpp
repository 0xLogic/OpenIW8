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
  void *v6; 
  unsigned __int64 v7; 
  unsigned int v11; 
  SD_DSP::QuadFrame *v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 *v15; 
  __int64 v16; 
  __int64 v17; 
  const float *v19; 
  const float *v20; 
  snd_quad_five_tap_delay_state *v23; 
  const float *v24; 
  const float *v25; 
  float *v26; 
  const float *v27; 
  const float *v28; 
  float *v29; 
  const float *v30; 
  const float *v31; 
  float *v32; 
  const float *v33; 
  float *v34; 
  const float *v35; 
  const float *v36; 
  const float *v37; 
  const float *v38; 
  const float *v39; 
  const float *v40; 
  const float *v41; 
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *v42; 
  __int64 v43; 
  char v44[4168]; 
  __int64 v45; 

  v6 = alloca(v5);
  v45 = -2i64;
  v7 = (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v7 + 4160) = (unsigned __int64)&v43 ^ _security_cookie;
  *(_QWORD *)v7 = reverbSubmixBus;
  *(_QWORD *)(v7 + 8) = delayState;
  v11 = SND_Hash(delayParam, 0x64u);
  if ( *delayParamHash != v11 )
  {
    SND_FiveTapDelaySetParams(delayState, delayParam);
    *delayParamHash = v11;
  }
  v12 = (SD_DSP::QuadFrame *)(v7 + 64);
  v13 = 256i64;
  do
  {
    SD_DSP::QuadFrame::QuadFrame(v12++);
    --v13;
  }
  while ( v13 );
  if ( (((_BYTE)v7 + 64) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  if ( (((_BYTE)v7 + 64) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v7 + 64) )
    __debugbreak();
  v14 = 0;
  v15 = (__int64 *)(v7 + 16);
  do
  {
    v16 = v14 << 8;
    v17 = v7 + 4 * v16 + 64;
    if ( v7 + 4 * v16 == -64i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( (v17 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v15 = v17;
    ++v14;
    ++v15;
  }
  while ( v14 < 4 );
  _YMM0 = *(__m256i *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  *(__m256i *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = _YMM0;
  *(__m256i *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = _YMM0;
  v19 = delaySubmixBus->data._Elems[2];
  v20 = delaySubmixBus->data._Elems[0];
  __asm
  {
    vextractf128 xmm0, ymm0, 1
    vpextrq rsi, xmm0, 1
  }
  v23 = *(snd_quad_five_tap_delay_state **)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawGainCopy<256>(_RSI, v20, 1.0, v19, 0.50118721);
  v24 = delaySubmixBus->data._Elems[2];
  v25 = delaySubmixBus->data._Elems[1];
  v26 = *(float **)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawGainCopy<256>(v26, v25, 1.0, v24, 0.50118721);
  v27 = delaySubmixBus->data._Elems[6];
  v28 = delaySubmixBus->data._Elems[4];
  v29 = *(float **)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(v29, v28, v27);
  v30 = delaySubmixBus->data._Elems[7];
  v31 = delaySubmixBus->data._Elems[5];
  v32 = *(float **)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(v32, v31, v30);
  v33 = delaySubmixBus->data._Elems[8];
  v34 = *(float **)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v34, v33);
  v35 = delaySubmixBus->data._Elems[12];
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v34, v35);
  v36 = delaySubmixBus->data._Elems[9];
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v26, v36);
  v37 = delaySubmixBus->data._Elems[13];
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v26, v37);
  v38 = delaySubmixBus->data._Elems[10];
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v29, v38);
  v39 = delaySubmixBus->data._Elems[14];
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v29, v39);
  v40 = delaySubmixBus->data._Elems[11];
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v32, v40);
  v41 = delaySubmixBus->data._Elems[15];
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v32, v41);
  SND_FiveTapDelayFrame(v23, v34, v26, v29, v32, 256);
  *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v34;
  v42 = *(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)v7;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)v7, 0, (const SD_DSP::ConstSampleBufferRefType<256> *)(v7 + 8));
  *(_QWORD *)v7 = v26;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v42, 1u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)v7 = v29;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v42, 4u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64));
  *(_QWORD *)v7 = v32;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::SumToChannel(v42, 5u, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFE0ui64));
}

/*
==============
SD_MixReverb
==============
*/
void SD_MixReverb(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *reverbSubmixBus, snd_rv_params *radverbParam, snd_rv_state_simd *radverbState, float *reverbPan)
{
  signed __int64 v4; 
  void *v5; 
  unsigned __int64 v6; 
  SD_DSP::QuadFrame *v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  const float *v15; 
  const float *v16; 
  snd_rv_params *v20; 
  float *v21; 
  float *inLS; 
  float *inRS; 
  float *v24; 
  __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  char *fmt; 
  char v31[4552]; 
  __int64 v32; 

  v5 = alloca(v4);
  v32 = -2i64;
  v6 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v6 + 4544) = (unsigned __int64)&v29 ^ _security_cookie;
  *(_QWORD *)v6 = reverbPan;
  *(_QWORD *)(v6 + 8) = radverbState;
  *(_QWORD *)(v6 + 16) = radverbParam;
  v8 = (SD_DSP::QuadFrame *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 192);
  v9 = 256i64;
  do
  {
    SD_DSP::QuadFrame::QuadFrame(v8++);
    --v9;
  }
  while ( v9 );
  if ( (((_BYTE)v6 - 64) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  if ( (((_BYTE)v6 - 64) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v6 + 192) )
    __debugbreak();
  v10 = 0;
  v11 = (__int64 *)(v6 + 24);
  do
  {
    v12 = v10 << 8;
    v13 = v6 + 4 * v12 + 192;
    if ( v6 + 4 * v12 == -192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( (v13 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v11 = v13;
    ++v10;
    ++v11;
  }
  while ( v10 < 4 );
  _YMM2 = *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = _YMM2;
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = _YMM2;
  v15 = reverbSubmixBus->data._Elems[0];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = reverbSubmixBus->data._Elems[0];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = reverbSubmixBus->data._Elems[1];
  v16 = reverbSubmixBus->data._Elems[2];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = v16;
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = reverbSubmixBus->data._Elems[3];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = reverbSubmixBus->data._Elems[4];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = reverbSubmixBus->data._Elems[5];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = reverbSubmixBus->data._Elems[6];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x78) = reverbSubmixBus->data._Elems[7];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = reverbSubmixBus->data._Elems[8];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x88) = reverbSubmixBus->data._Elems[9];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90) = reverbSubmixBus->data._Elems[10];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98) = reverbSubmixBus->data._Elems[11];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = reverbSubmixBus->data._Elems[12];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8) = reverbSubmixBus->data._Elems[13];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0) = reverbSubmixBus->data._Elems[14];
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8) = reverbSubmixBus->data._Elems[15];
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10C0) = *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E0) = *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1100) = *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80);
  *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120) = *(__m256i *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
  __asm
  {
    vextractf128 xmm0, ymm2, 1
    vpextrq r14, xmm0, 1
  }
  _R13 = *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v20 = *(snd_rv_params **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawGainCopy<256>(_R14, v15, 1.0, v16, 0.50118721);
  v21 = *(float **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 259, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  *(float *)&fmt = FLOAT_0_50118721;
  SD_DSP::RawGainCopy<256>(v21, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10C8), 1.0, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10D0), 0.50118721);
  inLS = *(float **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(inLS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E0), *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10F0));
  inRS = *(float **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 243, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSumCopy<256>(inRS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E8), *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10F8));
  v24 = *(float **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v24, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1100));
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v24, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120));
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v21, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1108));
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(v21, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1128));
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inLS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1110));
  if ( !inLS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inLS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1130));
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inRS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1118));
  if ( !inRS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_sequentialbuffer.h", 267, ASSERT_TYPE_ASSERT, "(dest != nullptr)", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  SD_DSP::RawSum<256>(inRS, *(const float *const *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1138));
  SND_RvFrame(v20, (snd_rv_state_simd *)_R13, 0x100u, v24, v21, inLS, inRS, *(float **)v6);
  __asm { vbroadcastss ymm2, dword ptr [r13+42Ch] }
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10C0) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 556));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10E0) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 588));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1100) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 620));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 652));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1140) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 684));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1160) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 716));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1180) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 748));
  *(__m256 *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11A0) = _mm256_mul_ps(_YMM2, *(__m256 *)(_R13 + 780));
  *(_QWORD *)v6 = v24;
  v26 = _R13 + 812;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixCopy(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64), (const float *const)(_R13 + 812), (const float *const)(v6 + 4288));
  *(_QWORD *)v6 = v21;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64), (const float *const)(_R13 + 876), (const float *const)(v6 + 4352));
  *(_QWORD *)v6 = inLS;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64), (const float *const)(_R13 + 940), (const float *const)(v6 + 4416));
  *(_QWORD *)v6 = inRS;
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(reverbSubmixBus, (const SD_DSP::ConstSampleBufferRefType<256> *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFE0ui64), (const float *const)(_R13 + 1004), (const float *const)(v6 + 4480));
  v27 = v6 + 4288;
  v28 = 2i64;
  do
  {
    *(__m256i *)v26 = *(__m256i *)v27;
    *(__m256i *)(v26 + 32) = *(__m256i *)(v27 + 32);
    *(__m256i *)(v26 + 64) = *(__m256i *)(v27 + 64);
    *(_OWORD *)(v26 + 96) = *(_OWORD *)(v27 + 96);
    v26 += 128i64;
    *(_OWORD *)(v26 - 16) = *(_OWORD *)(v27 + 112);
    v27 += 128i64;
    --v28;
  }
  while ( v28 );
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
  unsigned int v7; 
  const bool *v8; 
  bool v9; 
  __int64 v10; 
  float *v11; 
  unsigned int v12; 
  __m256i *v13; 
  float *v14; 
  __int64 v15; 
  int v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> delaySubmixBus; 
  SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> reverbSubmixBus; 
  bool Bool_Internal_DebugName; 
  bool v24; 
  unsigned int v25; 
  const bool *v26; 

  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_reverb_enable, "snd_reverb_enable");
  v24 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_delay_enable, "snd_delay_enable");
  v16 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd mix delay usec");
  v0 = 0;
  v25 = 0;
  v26 = SndBusIsInterleaved;
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
    v5 = &v17;
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
    *(__m256i *)delaySubmixBus.data._Elems = v17;
    *(__m256i *)&delaySubmixBus.data._Elems[4] = v18;
    *(__m256i *)&delaySubmixBus.data._Elems[8] = v19;
    *(__m256i *)&delaySubmixBus.data._Elems[12] = v20;
    *(__m256i *)reverbSubmixBus.data._Elems = v17;
    *(__m256i *)&reverbSubmixBus.data._Elems[4] = v18;
    *(__m256i *)&reverbSubmixBus.data._Elems[8] = v19;
    *(__m256i *)&reverbSubmixBus.data._Elems[12] = v20;
    v7 = v25;
    v8 = v26;
    v9 = Bool_Internal_DebugName;
    if ( v24 )
    {
      if ( v25 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 586, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT") )
        __debugbreak();
      if ( *v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 587, ASSERT_TYPE_ASSERT, "(!SndBusIsInterleaved[b])", (const char *)&queryFormat, "!SndBusIsInterleaved[b]") )
        __debugbreak();
      if ( v25 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
        __debugbreak();
      v10 = v25 << 12;
      v11 = &g_sd.busBuffers[v10];
      if ( (((unsigned __int8)((unsigned __int8)&g_sd + 4 * v10) - 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", &g_sd.busBuffers[v10]) )
        __debugbreak();
      v12 = 0;
      v13 = &v17;
      do
      {
        v14 = &v11[256 * v12];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)v11 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        v13->m256i_i64[0] = (__int64)v14;
        ++v12;
        v13 = (__m256i *)((char *)v13 + 8);
      }
      while ( v12 < 0x10 );
      *(__m256i *)delaySubmixBus.data._Elems = v17;
      *(__m256i *)&delaySubmixBus.data._Elems[4] = v18;
      *(__m256i *)&delaySubmixBus.data._Elems[8] = v19;
      *(__m256i *)&delaySubmixBus.data._Elems[12] = v20;
      v7 = v25;
      v15 = (int)v25;
      SD_MixDelay(&delaySubmixBus, &reverbSubmixBus, &g_sd.mixParam->quadDelay[v25], &g_sd.quadDelayParamHash[v25], &g_sd.quadDelay[v25]);
      v8 = v26;
      v9 = Bool_Internal_DebugName;
    }
    else
    {
      v15 = (int)v25;
    }
    if ( v9 )
      SD_MixReverb(&reverbSubmixBus, &g_sd.mixParam->radverb[v15], &g_sd.radverb[v15], g_sd.mixParam->reverbPan[v15]);
    v0 = v7 + 1;
    v25 = v0;
    v26 = v8 + 1;
  }
  while ( v0 < 4 );
  g_sd.mixDelayUsec = Sys_Microseconds() - v16;
  Sys_ProfEndNamedEvent();
}

