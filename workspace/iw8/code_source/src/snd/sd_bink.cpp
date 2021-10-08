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
  __int64 v9; 
  __int64 v11; 
  __int64 v47; 
  unsigned int v74; 
  __int64 v123[4]; 

  _RBP = (unsigned __int64)v123 & 0xFFFFFFFFFFFFFFE0ui64;
  _RDI = leftBuffer;
  SND_DspShort8ToFloat4(numChannels << 8, shortBuffer, (float *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFE0ui64) + 2080));
  if ( numChannels == 1 )
  {
    *(_QWORD *)_RBP = ((_BYTE)_RBP + 32) & 0x1F;
    if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 2080) )
      __debugbreak();
    if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
      __debugbreak();
    __asm { vmovups ymm2, cs:__ymm@3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000 }
    v9 = 4i64;
    _RAX = _RDI + 8;
    v11 = 4i64;
    do
    {
      __asm
      {
        vmulps  ymm0, ymm2, ymmword ptr [rcx+rax-20h]
        vaddps  ymm1, ymm0, ymmword ptr [rax-20h]
        vmulps  ymm0, ymm2, ymmword ptr [rcx+rax]
        vmovups ymmword ptr [rax-20h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax]
        vmulps  ymm0, ymm2, ymmword ptr [r10+rax]
        vmovups ymmword ptr [rax], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+20h]
        vmulps  ymm0, ymm2, ymmword ptr [r11+rax]
        vmovups ymmword ptr [rax+20h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+40h]
        vmulps  ymm0, ymm2, ymmword ptr [r14+rax]
        vmovups ymmword ptr [rax+40h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+60h]
        vmulps  ymm0, ymm2, ymmword ptr [r15+rax]
        vmovups ymmword ptr [rax+60h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+80h]
        vmulps  ymm0, ymm2, ymmword ptr [r12+rax]
        vmovups ymmword ptr [rax+80h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+0A0h]
        vmulps  ymm0, ymm2, ymmword ptr [rax+r13]
        vmovups ymmword ptr [rax+0A0h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+0C0h]
        vmovups ymmword ptr [rax+0C0h], ymm1
      }
      _RAX += 64;
      --v11;
    }
    while ( v11 );
    if ( *(_QWORD *)_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 596, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 2080) )
      __debugbreak();
    if ( ((unsigned __int8)rightBuffer & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 597, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", rightBuffer) )
      __debugbreak();
    __asm { vmovups ymm2, cs:__ymm@3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000 }
    _RAX = rightBuffer + 8;
    do
    {
      __asm
      {
        vmulps  ymm0, ymm2, ymmword ptr [rax+rcx-20h]
        vaddps  ymm1, ymm0, ymmword ptr [rax-20h]
        vmulps  ymm0, ymm2, ymmword ptr [rcx+rax]
        vmovups ymmword ptr [rax-20h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax]
        vmulps  ymm0, ymm2, ymmword ptr [rdx+rax]
        vmovups ymmword ptr [rax], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+20h]
        vmulps  ymm0, ymm2, ymmword ptr [r8+rax]
        vmovups ymmword ptr [rax+20h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+40h]
        vmulps  ymm0, ymm2, ymmword ptr [r9+rax]
        vmovups ymmword ptr [rax+40h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+60h]
        vmulps  ymm0, ymm2, ymmword ptr [r10+rax]
        vmovups ymmword ptr [rax+60h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+80h]
        vmulps  ymm0, ymm2, ymmword ptr [r11+rax]
        vmovups ymmword ptr [rax+80h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+0A0h]
        vmulps  ymm0, ymm2, ymmword ptr [rdi+rax]
        vmovups ymmword ptr [rax+0A0h], ymm1
        vaddps  ymm1, ymm0, ymmword ptr [rax+0C0h]
        vmovups ymmword ptr [rax+0C0h], ymm1
      }
      _RAX += 64;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    _RAX = _RBP + 1072;
    v47 = 8i64;
    _RCX = _RBP + 2192;
    do
    {
      _RAX += 128i64;
      __asm
      {
        vmovups xmm2, xmmword ptr [rcx-70h]
        vshufps xmm0, xmm2, xmmword ptr [rcx-60h], 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmmword ptr [rcx-60h], 0DDh ; 'Ý'
        vmovups xmm3, xmmword ptr [rcx-50h]
        vmovups xmm4, xmmword ptr [rcx-30h]
        vmovups xmm2, xmmword ptr [rcx+80h]
      }
      _RCX += 256i64;
      __asm
      {
        vmovups xmmword ptr [rax-490h], xmm0
        vshufps xmm0, xmm3, xmmword ptr [rcx-140h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-90h], xmm1
        vshufps xmm1, xmm3, xmmword ptr [rcx-140h], 0DDh ; 'Ý'
        vmovups xmm3, xmmword ptr [rcx-110h]
        vmovups xmmword ptr [rax-480h], xmm0
        vshufps xmm0, xmm4, xmmword ptr [rcx-120h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-80h], xmm1
        vshufps xmm1, xmm4, xmmword ptr [rcx-120h], 0DDh ; 'Ý'
        vmovups xmm4, xmmword ptr [rcx-0F0h]
        vmovups xmmword ptr [rax-470h], xmm0
        vshufps xmm0, xmm3, xmmword ptr [rcx-100h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-70h], xmm1
        vshufps xmm1, xmm3, xmmword ptr [rcx-100h], 0DDh ; 'Ý'
        vmovups xmm3, xmmword ptr [rcx-0D0h]
        vmovups xmmword ptr [rax-460h], xmm0
        vshufps xmm0, xmm4, xmmword ptr [rcx-0E0h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-60h], xmm1
        vshufps xmm1, xmm4, xmmword ptr [rcx-0E0h], 0DDh ; 'Ý'
        vmovups xmm4, xmmword ptr [rcx-0B0h]
        vmovups xmmword ptr [rax-450h], xmm0
        vshufps xmm0, xmm3, xmmword ptr [rcx-0C0h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-50h], xmm1
        vshufps xmm1, xmm3, xmmword ptr [rcx-0C0h], 0DDh ; 'Ý'
        vmovups xmm3, xmmword ptr [rcx-90h]
        vmovups xmmword ptr [rax-440h], xmm0
        vshufps xmm0, xmm4, xmmword ptr [rcx-0A0h], 88h ; 'ˆ'
        vmovups xmmword ptr [rax-40h], xmm1
        vshufps xmm1, xmm4, xmmword ptr [rcx-0A0h], 0DDh ; 'Ý'
        vmovups xmmword ptr [rax-430h], xmm0
        vmovups xmmword ptr [rax-30h], xmm1
        vshufps xmm0, xmm3, xmm2, 88h ; 'ˆ'
        vmovups xmmword ptr [rax-420h], xmm0
        vshufps xmm1, xmm3, xmm2, 0DDh ; 'Ý'
        vmovups xmmword ptr [rax-20h], xmm1
      }
      --v47;
    }
    while ( v47 );
    if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 576, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 32) )
      __debugbreak();
    if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 577, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
      __debugbreak();
    v74 = 2;
    do
    {
      _RCX = 32i64 * (v74 - 2);
      _RAX = 32i64 * v74;
      _RDX = 32i64 * (v74 + 13);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 - 1);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
        vmovups ymm0, [rbp+rax+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rax+rdi]
        vmovups ymmword ptr [rax+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 1);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 2);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 3);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 4);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 5);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 6);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 7);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 8);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 9);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 10);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 11);
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
      }
      _RCX = 32i64 * (v74 + 12);
      v74 += 16;
      __asm
      {
        vmovups ymm0, [rbp+rcx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rdi]
        vmovups ymmword ptr [rcx+rdi], ymm0
        vmovups ymm0, [rbp+rdx+1070h+var_1050]
        vaddps  ymm0, ymm0, ymmword ptr [rdx+rdi]
        vmovups ymmword ptr [rdx+rdi], ymm0
      }
    }
    while ( v74 - 2 < 0x20 );
    SND_DspSum(0x100u, (const float *)(_RBP + 1056), rightBuffer);
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
bool SoundCallback(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *destination)
{
  signed __int64 v1; 
  void *v6; 
  int v8; 
  bool result; 
  unsigned int v10; 
  bool *p_needsReset; 
  unsigned int v12; 
  int v15; 
  SD_DSP::MonoFrame *v16; 
  __int64 v17; 
  unsigned __int64 v19; 
  __int64 v20; 
  const float *v23; 
  const float *v24; 
  const SD_DSP::ConstSampleBufferRefType<256> *v25; 
  SD_DSP::StereoFrame *v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int64 v33; 
  unsigned int v36; 
  __int64 *v37; 
  unsigned int v41; 
  __int64 v52; 
  char v53[4232]; 
  __int64 v54; 
  char v58; 

  v6 = alloca(v1);
  v54 = -2i64;
  __asm
  {
    vmovaps [rsp+1138h+var_38], xmm6
    vmovaps [rsp+1138h+var_48], xmm7
    vmovaps [rsp+1138h+var_58], xmm8
  }
  _RBP = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4224) = (unsigned __int64)&v52 ^ _security_cookie;
  *(_QWORD *)(_RBP + 32) = destination;
  v8 = 0;
  if ( !s_onOff )
    goto LABEL_2;
  v10 = 0;
  p_needsReset = &s_binkVoices[0].needsReset;
  do
  {
    if ( *(p_needsReset - 17) && !*(p_needsReset - 1) && !*p_needsReset )
    {
      if ( !*(_DWORD *)(p_needsReset - 5) || (unsigned int)(((unsigned __int64)*(int *)(p_needsReset + 275) >> 1) / *(int *)(p_needsReset - 13)) < 0x100 )
        goto LABEL_2;
      ++v8;
    }
    ++v10;
    p_needsReset += 192296;
  }
  while ( v10 < 5 );
  if ( v8 )
  {
    v12 = 0;
    *(_DWORD *)_RBP = 0;
    _R15 = s_binkVoices[0].pan;
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = s_binkVoices[0].pan;
    __asm { vmovss  xmm6, cs:__real@38000100 }
    do
    {
      if ( *((_BYTE *)_R15 - 156) && ConsumeCircBufData((SDBinkCircularBuffer *)(_R15 + 32), *((_DWORD *)_R15 - 38) << 9, (void *)(_RBP + 3200)) )
      {
        v15 = *((_DWORD *)_R15 - 38);
        if ( v15 == 1 )
        {
          v16 = (SD_DSP::MonoFrame *)(_RBP + 128);
          v17 = 256i64;
          do
          {
            SD_DSP::MonoFrame::MonoFrame(v16++);
            --v17;
          }
          while ( v17 );
          if ( (((_BYTE)_RBP + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          if ( (((_BYTE)_RBP + 0x80) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", _RBP + 128) )
            __debugbreak();
          if ( (((_BYTE)_RBP + 0x80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          _RSI = _RBP + 128;
          v19 = _RBP + 3200;
          v20 = 256i64;
          do
          {
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 29, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
              __debugbreak();
            if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 35, ASSERT_TYPE_ASSERT, "(outChannel != nullptr)", (const char *)&queryFormat, "outChannel != nullptr") )
              __debugbreak();
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsi], xmm1
            }
            _RSI += 4i64;
            v19 += 2i64;
            --v20;
          }
          while ( v20 );
          *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
          v23 = _R15 - 32;
          v24 = _R15;
          v25 = (const SD_DSP::ConstSampleBufferRefType<256> *)(_RBP + 24);
        }
        else
        {
          if ( v15 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_bink.cpp", 238, ASSERT_TYPE_ASSERT, "(voice->numChannels == 2)", (const char *)&queryFormat, "voice->numChannels == 2") )
            __debugbreak();
          v26 = (SD_DSP::StereoFrame *)(_RBP + 1152);
          v27 = 256i64;
          do
          {
            SD_DSP::StereoFrame::StereoFrame(v26++);
            --v27;
          }
          while ( v27 );
          if ( (((_BYTE)_RBP + 0x80) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          if ( (((_BYTE)_RBP + 0x80) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", _RBP + 1152) )
            __debugbreak();
          v28 = 0;
          v29 = (__int64 *)(_RBP + 96);
          do
          {
            v30 = v28 << 8;
            v31 = _RBP + 4 * v30 + 1152;
            if ( _RBP + 4 * v30 == -1152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
              __debugbreak();
            if ( (v31 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
              __debugbreak();
            *v29 = v31;
            ++v28;
            ++v29;
          }
          while ( v28 < 2 );
          __asm
          {
            vmovups xmm7, xmmword ptr [rbp+60h]
            vmovdqa xmmword ptr [rbp+40h], xmm7
            vmovdqu xmmword ptr [rbp+30h], xmm7
          }
          v33 = _RBP + 3200;
          __asm { vmovdqu xmm8, cs:__xmm@00000000000000080000000000000008 }
          *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 128i64;
          do
          {
            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 29, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
              __debugbreak();
            *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0;
            _R14 = 0i64;
            do
            {
              v36 = 0;
              v37 = (__int64 *)(_RBP + 48);
              do
              {
                _RBX = *v37;
                if ( !*v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_transpose.h", 35, ASSERT_TYPE_ASSERT, "(outChannel != nullptr)", (const char *)&queryFormat, "outChannel != nullptr") )
                  __debugbreak();
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm6
                  vmovss  dword ptr [r14+rbx], xmm1
                }
                ++v36;
                ++v37;
              }
              while ( v36 < 2 );
              v41 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 8) + 1;
              *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v41;
              _R14 += 4i64;
            }
            while ( v41 < 2 );
            __asm
            {
              vpaddq  xmm7, xmm8, xmm7
              vmovdqu xmmword ptr [rbp+30h], xmm7
            }
            v33 += 8i64;
          }
          while ( (*(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10))-- != 1i64 );
          *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
          _R15 = *(float **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
          SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), (const SD_DSP::ConstSampleBufferRefType<256> *)(_RBP + 16), _R15 - 32, _R15);
          *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
          v23 = _R15 - 16;
          v24 = _R15 + 16;
          v25 = (const SD_DSP::ConstSampleBufferRefType<256> *)(_RBP + 8);
        }
        SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::MatrixSum(*(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), v25, v23, v24);
        v12 = *(_DWORD *)_RBP;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovups ymmword ptr [r15-80h], ymm0
        vmovups ymm1, ymmword ptr [r15+20h]
        vmovups ymmword ptr [r15-60h], ymm1
        vmovups ymm0, ymmword ptr [r15+40h]
        vmovups ymmword ptr [r15-40h], ymm0
        vmovups ymm1, ymmword ptr [r15+60h]
        vmovups ymmword ptr [r15-20h], ymm1
      }
      *(_DWORD *)_RBP = ++v12;
      _R15 += 48074;
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = _R15;
    }
    while ( v12 < 5 );
    result = 1;
  }
  else
  {
LABEL_2:
    result = 0;
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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

