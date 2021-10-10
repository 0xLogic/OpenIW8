/*
==============
AllocVoice
==============
*/

int __fastcall AllocVoice()
{
  return ?AllocVoice@@YAHXZ();
}

/*
==============
BinkOpenSDSoundSystem
==============
*/

int (__fastcall *__fastcall BinkOpenSDSoundSystem(unsigned __int64 param))(BINKSND *, unsigned int, int, unsigned int, BINK *)
{
  return ?BinkOpenSDSoundSystem@@YAP6AHPEAUBINKSND@@IHIPEAUBINK@@@Z_K@Z(param);
}

/*
==============
ConsumeCircBufData
==============
*/

bool __fastcall ConsumeCircBufData(SDBinkCircularBuffer *circ, int count, void *outputBuffer)
{
  return ?ConsumeCircBufData@@YA_NPEAUSDBinkCircularBuffer@@HPEAX@Z(circ, count, outputBuffer);
}

/*
==============
SD_BinkResetBuffer
==============
*/

void SD_BinkResetBuffer(void)
{
  ?SD_BinkResetBuffer@@YAXXZ();
}

/*
==============
SD_MixBinkAsVoice
==============
*/

bool __fastcall SD_MixBinkAsVoice(float *leftBuffer, float *rightBuffer, unsigned int frameCount)
{
  return ?SD_MixBinkAsVoice@@YA_NPEAM0I@Z(leftBuffer, rightBuffer, frameCount);
}

/*
==============
AllocVoice
==============
*/
__int64 AllocVoice()
{
  __int64 result; 
  SDBinkVoiceInstance *i; 

  result = 0i64;
  for ( i = s_binkVoices; i->inUse; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 5 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
BinkOpenSDSoundSystem
==============
*/
int (*BinkOpenSDSoundSystem(unsigned __int64 param))(BINKSND *, unsigned int, int, unsigned int, BINK *)
{
  int (__fastcall *result)(BINKSND *, unsigned int, int, unsigned int, BINK *); 

  memset_0(s_binkVoices, 0, sizeof(s_binkVoices));
  SD_SetAuxCallback(SoundCallback);
  result = CustomAudioOpen;
  s_onOff = 1;
  return result;
}

/*
==============
ConsumeCircBufData
==============
*/
bool ConsumeCircBufData(SDBinkCircularBuffer *circ, int count, void *outputBuffer)
{
  volatile int *p_count; 
  unsigned __int64 v4; 
  bool result; 
  __int64 tail; 
  size_t v9; 
  unsigned __int8 *v10; 
  int v11; 

  p_count = &circ->count;
  v4 = count;
  if ( count > circ->count )
    return 0;
  tail = circ->tail;
  v9 = count;
  v10 = &circ->buffer[tail];
  if ( 192000 - tail >= v4 )
  {
    memcpy_0(outputBuffer, v10, v9);
  }
  else
  {
    v11 = 192000 - tail;
    memcpy_0(outputBuffer, v10, 192000 - (int)tail);
    memcpy_0((char *)outputBuffer + v11, circ->buffer, (int)v4 - v11);
  }
  if ( ((unsigned __int8)p_count & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_count) )
    __debugbreak();
  _InterlockedExchangeAdd(p_count, -(int)v4);
  result = 1;
  circ->tail = ((int)v4 + circ->tail) % 0x2EE00;
  return result;
}

/*
==============
CustomAudioOpen
==============
*/
__int64 CustomAudioOpen(BINKSND *bs, unsigned int freq, int chans, unsigned int flags, BINK *bink)
{
  SDBinkContext *SDBinkContext; 
  unsigned int v9; 
  SDBinkVoiceInstance *v10; 
  SDBinkVoiceInstance *v12; 
  int v13; 
  __int64 v14; 
  __int64 FrameRateDiv; 
  int v16; 
  signed __int32 v17[10]; 

  SDBinkContext = GetSDBinkContext(bs);
  memset_0(bs, 0, sizeof(BINKSND));
  v9 = 0;
  v10 = s_binkVoices;
  while ( v10->inUse )
  {
    ++v9;
    ++v10;
    if ( v9 >= 5 )
    {
      v9 = -1;
      break;
    }
  }
  SDBinkContext->voiceIndex = v9;
  if ( v9 == -1 )
  {
    Com_PrintError(1, "Too many audio streams in bink file.");
    return 0i64;
  }
  else
  {
    v12 = &s_binkVoices[v9];
    v12->numChannels = chans;
    bs->SoundDroppedOut = 0;
    if ( freq == 48000 )
    {
      if ( chans <= 2 )
      {
        bs->chans = chans;
        bs->freq = 48000;
        bink->limit_speakers = 8;
        SDBinkContext->bink = bink;
        *(_WORD *)&v12->paused = 0;
        bs->OnOff = 1;
        v12->buffer.count = 0;
        *(_QWORD *)&v12->buffer.head = 0i64;
        v13 = bs->chans;
        bs->Ready = Ready_0;
        bs->Lock = Lock_0;
        bs->Unlock = Unlock;
        bs->Volume = Volume;
        bs->Pan = Pan;
        bs->Pause = Pause;
        bs->SetOnOff = SetOnOff;
        bs->Close = Close;
        bs->SpeakerVols = SpeakerVolumes;
        LODWORD(v14) = 96000 * v13;
        if ( bink->FrameRate )
        {
          FrameRateDiv = bink->FrameRateDiv;
          if ( (_DWORD)FrameRateDiv )
            v14 = (int)v14 * FrameRateDiv * bink->Frames / bink->FrameRate;
        }
        v12->status = 0;
        v12->chunkSize = 6000 * v13;
        v16 = 12000 * v13;
        if ( 12000 * v13 > (int)v14 )
          v16 = v14;
        v12->preloadsize = v16;
        _InterlockedOr(v17, 0);
        v12->inUse = 1;
        return 1i64;
      }
      else
      {
        Com_PrintError(1, "Tried to play a Bink file with an audio stream with greater than %d channels.\n", 2i64);
        return 0i64;
      }
    }
    else
    {
      Com_PrintError(1, "Tried to play a Bink file with audio not encoded at %d Hz.\n", 48000i64);
      return 0i64;
    }
  }
}

/*
==============
GetSDBinkContext
==============
*/
SDBinkContext *GetSDBinkContext(BINKSND *bs)
{
  if ( !bs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 327, ASSERT_TYPE_ASSERT, "(bs)", (const char *)&queryFormat, "bs") )
    __debugbreak();
  if ( bs == (BINKSND *)-108i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 329, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
    __debugbreak();
  if ( ((unsigned __int64)&bs->snddata[7] & 0xFFFFFFFFFFFFFFF8ui64) - (unsigned __int64)bs - 92 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 334, ASSERT_TYPE_ASSERT, "(( sizeof( SDBinkContext ) + padding ) <= sizeof( BINKSND::snddata ))", (const char *)&queryFormat, "( sizeof( SDBinkContext ) + padding ) <= sizeof( BINKSND::snddata )") )
    __debugbreak();
  return (SDBinkContext *)((unsigned __int64)&bs->snddata[7] & 0xFFFFFFFFFFFFFFF8ui64);
}

/*
==============
Pan
==============
*/
void Pan(BINKSND *bs, int pan)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 434, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "We do not support the Bink 'Pan' command") )
    __debugbreak();
}

/*
==============
SD_BinkResetBuffer
==============
*/
void SD_BinkResetBuffer(void)
{
  unsigned int v0; 
  bool *p_needsReset; 

  v0 = 0;
  p_needsReset = &s_binkVoices[1].needsReset;
  do
  {
    if ( *(p_needsReset - 192313) )
      *(p_needsReset - 192296) = 1;
    if ( *(p_needsReset - 17) )
      *p_needsReset = 1;
    if ( p_needsReset[192279] )
      p_needsReset[192296] = 1;
    if ( p_needsReset[384575] )
      p_needsReset[384592] = 1;
    if ( p_needsReset[576871] )
      p_needsReset[576888] = 1;
    v0 += 5;
    p_needsReset += 961480;
  }
  while ( v0 < 5 );
}

/*
==============
SD_MixBinkAsVoice
==============
*/
char SD_MixBinkAsVoice(float *leftBuffer, float *rightBuffer, unsigned int frameCount)
{
  unsigned int v3; 
  int v7; 
  unsigned int v8; 
  volatile int *p_count; 
  int *p_numChannels; 
  char outputBuffer[1024]; 

  v3 = 0;
  v7 = 0;
  if ( !s_onOff )
    return 0;
  v8 = 0;
  p_count = &s_binkVoices[0].buffer.count;
  do
  {
    if ( *((_BYTE *)p_count - 292) && !*((_BYTE *)p_count - 276) )
    {
      if ( !*((_DWORD *)p_count - 70) || (unsigned int)(((unsigned __int64)*(int *)p_count >> 1) / *((int *)p_count - 72)) < frameCount )
        return 0;
      ++v7;
    }
    ++v8;
    p_count += 48074;
  }
  while ( v8 < 5 );
  if ( !v7 )
    return 0;
  p_numChannels = &s_binkVoices[0].numChannels;
  do
  {
    if ( *((_BYTE *)p_numChannels - 4) )
    {
      if ( ConsumeCircBufData((SDBinkCircularBuffer *)(p_numChannels + 70), *p_numChannels << 9, (void *)((unsigned __int64)outputBuffer & 0xFFFFFFFFFFFFFFE0ui64)) )
        SD_WriteBinkDataToVoice(*p_numChannels, (__int16 *)((unsigned __int64)outputBuffer & 0xFFFFFFFFFFFFFFE0ui64), leftBuffer, rightBuffer, frameCount);
    }
    ++v3;
    p_numChannels += 48074;
  }
  while ( v3 < 5 );
  return 1;
}

/*
==============
SD_WriteBinkDataToVoice
==============
*/
void SD_WriteBinkDataToVoice(const int numChannels, __int16 *shortBuffer, float *leftBuffer, float *rightBuffer)
{
  unsigned __int64 v4; 
  __int64 v8; 
  __int64 v9; 
  __m256 *v10; 
  __int64 v11; 
  __m256 v12; 
  __m256i v13; 
  __m256 v14; 
  __m256 v15; 
  __m256 v16; 
  __m256 v17; 
  __m256 v18; 
  __m256 v19; 
  __m256 v20; 
  __m256 v21; 
  __m256 v22; 
  __m256 v23; 
  __m256 v24; 
  __int64 v25; 
  __m256 *v26; 
  __m256 v27; 
  __m256i v28; 
  __m256 v29; 
  __m256 v30; 
  __m256 v31; 
  __m256 v32; 
  __m256 v33; 
  __m256 v34; 
  __m256 v35; 
  __m256 v36; 
  __m256 v37; 
  __m256 v38; 
  __m256 v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  __m128 *v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v63; 
  __m128 v64; 
  __m128 v65; 
  unsigned int v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69[4]; 

  v4 = (unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64;
  SND_DspShort8ToFloat4(numChannels << 8, shortBuffer, (float *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 2080));
  if ( numChannels == 1 )
  {
    *(_QWORD *)v4 = ((_BYTE)v4 + 32) & 0x1F;
    if ( (((_BYTE)v4 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 2080) )
      __debugbreak();
    if ( ((unsigned __int8)leftBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", leftBuffer) )
      __debugbreak();
    v8 = 4i64;
    v9 = v4 + 2080 - (_QWORD)leftBuffer;
    v10 = (__m256 *)(leftBuffer + 8);
    v11 = 4i64;
    do
    {
      v12 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v9));
      v10[-1] = _mm256_add_ps(_mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v9 - 32)), v10[-1]);
      v13 = (__m256i)_mm256_add_ps(v12, *v10);
      v14 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2112 - (_QWORD)leftBuffer));
      *(__m256i *)v10 = v13;
      v15 = _mm256_add_ps(v14, v10[1]);
      v16 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2144 - (_QWORD)leftBuffer));
      v10[1] = v15;
      v17 = _mm256_add_ps(v16, v10[2]);
      v18 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2176 - (_QWORD)leftBuffer));
      v10[2] = v17;
      v19 = _mm256_add_ps(v18, v10[3]);
      v20 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2208 - (_QWORD)leftBuffer));
      v10[3] = v19;
      v21 = _mm256_add_ps(v20, v10[4]);
      v22 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2240 - (_QWORD)leftBuffer));
      v10[4] = v21;
      v23 = _mm256_add_ps(v22, v10[5]);
      v24 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v10 + v4 + 2272 - (_QWORD)leftBuffer));
      v10[5] = v23;
      v10[6] = _mm256_add_ps(v24, v10[6]);
      v10 += 8;
      --v11;
    }
    while ( v11 );
    if ( *(_QWORD *)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 2080) )
      __debugbreak();
    if ( ((unsigned __int8)rightBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", rightBuffer) )
      __debugbreak();
    v25 = v4 + 2080 - (_QWORD)rightBuffer;
    v26 = (__m256 *)(rightBuffer + 8);
    do
    {
      v27 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v25));
      v26[-1] = _mm256_add_ps(_mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v25 - 32)), v26[-1]);
      v28 = (__m256i)_mm256_add_ps(v27, *v26);
      v29 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2112 - (_QWORD)rightBuffer));
      *(__m256i *)v26 = v28;
      v30 = _mm256_add_ps(v29, v26[1]);
      v31 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2144 - (_QWORD)rightBuffer));
      v26[1] = v30;
      v32 = _mm256_add_ps(v31, v26[2]);
      v33 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2176 - (_QWORD)rightBuffer));
      v26[2] = v32;
      v34 = _mm256_add_ps(v33, v26[3]);
      v35 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2208 - (_QWORD)rightBuffer));
      v26[3] = v34;
      v36 = _mm256_add_ps(v35, v26[4]);
      v37 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2240 - (_QWORD)rightBuffer));
      v26[4] = v36;
      v38 = _mm256_add_ps(v37, v26[5]);
      v39 = _mm256_mul_ps(_ymm, *(__m256 *)((char *)v26 + v4 + 2272 - (_QWORD)rightBuffer));
      v26[5] = v38;
      v26[6] = _mm256_add_ps(v39, v26[6]);
      v26 += 8;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v40 = v4 + 1072;
    v41 = 8i64;
    v42 = (__m128 *)(v4 + 2192);
    do
    {
      v40 += 128i64;
      v43 = v42[-7];
      v44 = _mm_shuffle_ps(v43, v42[-6], 136);
      v45 = _mm_shuffle_ps(v43, v42[-6], 221);
      v46 = v42[-5];
      v47 = v42[-3];
      v48 = v42[8];
      v42 += 16;
      *(__m128 *)(v40 - 1168) = v44;
      v49 = _mm_shuffle_ps(v46, v42[-20], 136);
      *(__m128 *)(v40 - 144) = v45;
      v50 = _mm_shuffle_ps(v46, v42[-20], 221);
      v51 = v42[-17];
      *(__m128 *)(v40 - 1152) = v49;
      v52 = _mm_shuffle_ps(v47, v42[-18], 136);
      *(__m128 *)(v40 - 128) = v50;
      v53 = _mm_shuffle_ps(v47, v42[-18], 221);
      v54 = v42[-15];
      *(__m128 *)(v40 - 1136) = v52;
      v55 = _mm_shuffle_ps(v51, v42[-16], 136);
      *(__m128 *)(v40 - 112) = v53;
      v56 = _mm_shuffle_ps(v51, v42[-16], 221);
      v57 = v42[-13];
      *(__m128 *)(v40 - 1120) = v55;
      v58 = _mm_shuffle_ps(v54, v42[-14], 136);
      *(__m128 *)(v40 - 96) = v56;
      v59 = _mm_shuffle_ps(v54, v42[-14], 221);
      v60 = v42[-11];
      *(__m128 *)(v40 - 1104) = v58;
      v61 = _mm_shuffle_ps(v57, v42[-12], 136);
      *(__m128 *)(v40 - 80) = v59;
      v62 = _mm_shuffle_ps(v57, v42[-12], 221);
      v63 = v42[-9];
      *(__m128 *)(v40 - 1088) = v61;
      v64 = _mm_shuffle_ps(v60, v42[-10], 136);
      *(__m128 *)(v40 - 64) = v62;
      v65 = _mm_shuffle_ps(v60, v42[-10], 221);
      *(__m128 *)(v40 - 1072) = v64;
      *(__m128 *)(v40 - 48) = v65;
      *(__m128 *)(v40 - 1056) = _mm_shuffle_ps(v63, v48, 136);
      *(__m128 *)(v40 - 32) = _mm_shuffle_ps(v63, v48, 221);
      --v41;
    }
    while ( v41 );
    if ( (((_BYTE)v4 + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 576, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 32) )
      __debugbreak();
    if ( ((unsigned __int8)leftBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 577, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", leftBuffer) )
      __debugbreak();
    v66 = 2;
    do
    {
      v67 = 8i64 * (v66 + 13);
      *(__m256 *)&leftBuffer[8 * v66 - 16] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 - 2)), *(__m256 *)&leftBuffer[8 * v66 - 16]);
      *(__m256 *)&leftBuffer[8 * v66 - 8] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 - 1)), *(__m256 *)&leftBuffer[8 * v66 - 8]);
      *(__m256 *)&leftBuffer[8 * v66] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * v66), *(__m256 *)&leftBuffer[8 * v66]);
      *(__m256 *)&leftBuffer[8 * v66 + 8] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 1)), *(__m256 *)&leftBuffer[8 * v66 + 8]);
      *(__m256 *)&leftBuffer[8 * v66 + 16] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 2)), *(__m256 *)&leftBuffer[8 * v66 + 16]);
      *(__m256 *)&leftBuffer[8 * v66 + 24] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 3)), *(__m256 *)&leftBuffer[8 * v66 + 24]);
      *(__m256 *)&leftBuffer[8 * v66 + 32] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 4)), *(__m256 *)&leftBuffer[8 * v66 + 32]);
      *(__m256 *)&leftBuffer[8 * v66 + 40] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 5)), *(__m256 *)&leftBuffer[8 * v66 + 40]);
      *(__m256 *)&leftBuffer[8 * v66 + 48] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 6)), *(__m256 *)&leftBuffer[8 * v66 + 48]);
      *(__m256 *)&leftBuffer[8 * v66 + 56] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 7)), *(__m256 *)&leftBuffer[8 * v66 + 56]);
      *(__m256 *)&leftBuffer[8 * v66 + 64] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 8)), *(__m256 *)&leftBuffer[8 * v66 + 64]);
      *(__m256 *)&leftBuffer[8 * v66 + 72] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 9)), *(__m256 *)&leftBuffer[8 * v66 + 72]);
      *(__m256 *)&leftBuffer[8 * v66 + 80] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 10)), *(__m256 *)&leftBuffer[8 * v66 + 80]);
      *(__m256 *)&leftBuffer[8 * v66 + 88] = _mm256_add_ps(*(__m256 *)(((unsigned __int64)v69 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20 + 32i64 * (v66 + 11)), *(__m256 *)&leftBuffer[8 * v66 + 88]);
      v68 = 8i64 * (v66 + 12);
      v66 += 16;
      *(__m256 *)&leftBuffer[v68] = _mm256_add_ps(*(__m256 *)(v4 + 32 + v68 * 4), *(__m256 *)&leftBuffer[v68]);
      *(__m256 *)&leftBuffer[v67] = _mm256_add_ps(*(__m256 *)(v4 + 32 + v67 * 4), *(__m256 *)&leftBuffer[v67]);
    }
    while ( v66 - 2 < 0x20 );
    SND_DspSum(0x100u, (const float *)(v4 + 1056), rightBuffer);
  }
}

/*
==============
SetOnOff
==============
*/
__int64 SetOnOff(BINKSND *bs, int status)
{
  __int64 result; 

  bs->OnOff = status;
  result = 1i64;
  s_onOff = status != 0;
  return result;
}

/*
==============
SoundCallback
==============
*/
char SoundCallback(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *destination)
{
  signed __int64 v1; 
  void *v2; 
  unsigned __int64 v3; 
  int v4; 
  unsigned int v6; 
  bool *p_needsReset; 
  unsigned int v8; 
  float *pan; 
  int v10; 
  SD_DSP::MonoFrame *v11; 
  __int64 v12; 
  float *v13; 
  __int16 *v14; 
  __int64 v15; 
  const float *v16; 
  const float *v17; 
  const SD_DSP::ConstSampleBufferRefType<256> *v18; 
  SD_DSP::StereoFrame *v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 *v22; 
  __int64 v23; 
  __int64 v24; 
  __int128 v25; 
  unsigned __int64 v26; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 *v31; 
  __int64 v32; 
  __int64 v35; 
  char v36[4232]; 
  __int64 v37; 

  v2 = alloca(v1);
  v37 = -2i64;
  v3 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v3 + 4224) = (unsigned __int64)&v35 ^ _security_cookie;
  *(_QWORD *)(v3 + 32) = destination;
  v4 = 0;
  if ( !s_onOff )
    return 0;
  v6 = 0;
  p_needsReset = &s_binkVoices[0].needsReset;
  do
  {
    if ( *(p_needsReset - 17) && !*(p_needsReset - 1) && !*p_needsReset )
    {
      if ( !*(_DWORD *)(p_needsReset - 5) || (unsigned int)(((unsigned __int64)*(int *)(p_needsReset + 275) >> 1) / *(int *)(p_needsReset - 13)) < 0x100 )
        return 0;
      ++v4;
    }
    ++v6;
    p_needsReset += 192296;
  }
  while ( v6 < 5 );
  if ( !v4 )
    return 0;
  v8 = 0;
  *(_DWORD *)v3 = 0;
  pan = s_binkVoices[0].pan;
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = s_binkVoices[0].pan;
  do
  {
    if ( *((_BYTE *)pan - 156) && ConsumeCircBufData((SDBinkCircularBuffer *)(pan + 32), *((_DWORD *)pan - 38) << 9, (void *)(v3 + 3200)) )
    {
      v10 = *((_DWORD *)pan - 38);
      if ( v10 == 1 )
      {
        v11 = (SD_DSP::MonoFrame *)(v3 + 128);
        v12 = 256i64;
        do
        {
          SD_DSP::MonoFrame::MonoFrame(v11++);
          --v12;
        }
        while ( v12 );
        if ( (((_BYTE)v3 + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        if ( (((_BYTE)v3 + 0x80) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v3 + 128) )
          __debugbreak();
        if ( (((_BYTE)v3 + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        v13 = (float *)(v3 + 128);
        v14 = (__int16 *)(v3 + 3200);
        v15 = 256i64;
        do
        {
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 29, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
            __debugbreak();
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 35, ASSERT_TYPE_ASSERT, "(outChannel != nullptr)", (const char *)&queryFormat, "outChannel != nullptr") )
            __debugbreak();
          *v13++ = (float)*v14++ * 0.000030518509;
          --v15;
        }
        while ( v15 );
        *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
        v16 = pan - 32;
        v17 = pan;
        v18 = (const SD_DSP::ConstSampleBufferRefType<256> *)(v3 + 24);
      }
      else
      {
        if ( v10 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 238, ASSERT_TYPE_ASSERT, "(voice->numChannels == 2)", (const char *)&queryFormat, "voice->numChannels == 2") )
          __debugbreak();
        v19 = (SD_DSP::StereoFrame *)(v3 + 1152);
        v20 = 256i64;
        do
        {
          SD_DSP::StereoFrame::StereoFrame(v19++);
          --v20;
        }
        while ( v20 );
        if ( (((_BYTE)v3 + 0x80) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        if ( (((_BYTE)v3 + 0x80) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v3 + 1152) )
          __debugbreak();
        v21 = 0;
        v22 = (__int64 *)(v3 + 96);
        do
        {
          v23 = v21 << 8;
          v24 = v3 + 4 * v23 + 1152;
          if ( v3 + 4 * v23 == -1152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
            __debugbreak();
          if ( (v24 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          *v22 = v24;
          ++v21;
          ++v22;
        }
        while ( v21 < 2 );
        v25 = *(_OWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
        *(_OWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = v25;
        *(_OWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = v25;
        v26 = v3 + 3200;
        _XMM8 = _xmm;
        *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 128i64;
        do
        {
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 29, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
            __debugbreak();
          v28 = 0;
          *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0;
          v29 = 0i64;
          do
          {
            v30 = 0;
            v31 = (__int64 *)(v3 + 48);
            do
            {
              v32 = *v31;
              if ( !*v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 35, ASSERT_TYPE_ASSERT, "(outChannel != nullptr)", (const char *)&queryFormat, "outChannel != nullptr") )
                __debugbreak();
              *(float *)(v29 + v32) = (float)*(__int16 *)(v26 + 2i64 * (2 * v28 + v30++)) * 0.000030518509;
              ++v31;
            }
            while ( v30 < 2 );
            v28 = *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 8) + 1;
            *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v28;
            v29 += 4i64;
          }
          while ( v28 < 2 );
          __asm { vpaddq  xmm7, xmm8, xmm7 }
          *(_OWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = _XMM7;
          v26 += 8i64;
        }
        while ( (*(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10))-- != 1i64 );
        *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
        pan = *(float **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
        SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), (const SD_DSP::ConstSampleBufferRefType<256> *)(v3 + 16), pan - 32, pan);
        *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
        v16 = pan - 16;
        v17 = pan + 16;
        v18 = (const SD_DSP::ConstSampleBufferRefType<256> *)(v3 + 8);
      }
      SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), v18, v16, v17);
      v8 = *(_DWORD *)v3;
    }
    *((__m256i *)pan - 4) = *(__m256i *)pan;
    *((__m256i *)pan - 3) = *(__m256i *)(pan + 8);
    *((__m256i *)pan - 2) = *(__m256i *)(pan + 16);
    *((__m256i *)pan - 1) = *(__m256i *)(pan + 24);
    *(_DWORD *)v3 = ++v8;
    pan += 48074;
    *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = pan;
  }
  while ( v8 < 5 );
  return 1;
}

/*
==============
SpeakerVolumes
==============
*/
void SpeakerVolumes(BINKSND *bs, float *volumes, unsigned int total)
{
  __int64 voiceIndex; 

  voiceIndex = GetSDBinkContext(bs)->voiceIndex;
  if ( total != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 479, ASSERT_TYPE_ASSERT, "(total == 8)", (const char *)&queryFormat, "total == 8") )
    __debugbreak();
  s_binkVoices[voiceIndex].pan[0] = *volumes;
  s_binkVoices[voiceIndex].pan[16] = volumes[1];
  s_binkVoices[voiceIndex].pan[1] = volumes[s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[17] = volumes[s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[2] = volumes[2 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[18] = volumes[2 * s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[3] = volumes[3 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[19] = volumes[3 * s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[4] = volumes[4 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[20] = volumes[4 * s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[5] = volumes[5 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[21] = volumes[5 * s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[6] = volumes[6 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[22] = volumes[6 * s_binkVoices[voiceIndex].numChannels + 1];
  s_binkVoices[voiceIndex].pan[7] = volumes[7 * s_binkVoices[voiceIndex].numChannels];
  s_binkVoices[voiceIndex].pan[23] = volumes[7 * s_binkVoices[voiceIndex].numChannels + 1];
}

