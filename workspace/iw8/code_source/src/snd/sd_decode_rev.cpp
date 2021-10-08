/*
==============
SD_DecoderShutdownREV
==============
*/

void SD_DecoderShutdownREV(void)
{
  ?SD_DecoderShutdownREV@@YAXXZ();
}

/*
==============
SD_DecoderConsumeREV
==============
*/

void __fastcall SD_DecoderConsumeREV(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  ?SD_DecoderConsumeREV@@YAXPEAUsd_decoder@@IIPEAM@Z(decoder, channelCount, count, frames);
}

/*
==============
SD_DecoderBufferReadyREV
==============
*/

bool __fastcall SD_DecoderBufferReadyREV(sd_decoder *decoder)
{
  return ?SD_DecoderBufferReadyREV@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderInitREV
==============
*/

void SD_DecoderInitREV(void)
{
  ?SD_DecoderInitREV@@YAXXZ();
}

/*
==============
SD_DecoderQueryAvailableDataREV
==============
*/

unsigned int __fastcall SD_DecoderQueryAvailableDataREV(sd_decoder *decoder, unsigned int desired)
{
  return ?SD_DecoderQueryAvailableDataREV@@YAIPEAUsd_decoder@@I@Z(decoder, desired);
}

/*
==============
SD_DecoderBufferSubmitREV
==============
*/

void __fastcall SD_DecoderBufferSubmitREV(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  ?SD_DecoderBufferSubmitREV@@YAXPEAUsd_decoder@@PEBE_J_N222@Z(decoder, data, size, eos, decodePos, frameSkip, filePos);
}

/*
==============
SD_DecoderThreadUpdateREV
==============
*/

void SD_DecoderThreadUpdateREV(void)
{
  ?SD_DecoderThreadUpdateREV@@YAXXZ();
}

/*
==============
SD_DecodeREVRead
==============
*/

bool __fastcall SD_DecodeREVRead(sd_decoder *decoder)
{
  return ?SD_DecodeREVRead@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderFrameCountREV
==============
*/

unsigned int __fastcall SD_DecoderFrameCountREV(sd_decoder *decoder)
{
  return ?SD_DecoderFrameCountREV@@YAIPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderFrameREV
==============
*/

void SD_DecoderFrameREV(void)
{
  ?SD_DecoderFrameREV@@YAXXZ();
}

/*
==============
SD_DecoderFreeREV
==============
*/

sd_decoder_state __fastcall SD_DecoderFreeREV(sd_decoder *decoder)
{
  return ?SD_DecoderFreeREV@@YA?AW4sd_decoder_state@@PEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderCreateREV
==============
*/

void __fastcall SD_DecoderCreateREV(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  ?SD_DecoderCreateREV@@YAXPEAUsd_decoder@@PEBUSndAssetBankEntry@@@Z(decoder, entry);
}

/*
==============
SD_DecoderLockREV
==============
*/

void __fastcall SD_DecoderLockREV(sd_decoder *decoder)
{
  ?SD_DecoderLockREV@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferCompleteREV
==============
*/

bool __fastcall SD_DecoderBufferCompleteREV(sd_decoder *decoder, const void *buffer)
{
  return ?SD_DecoderBufferCompleteREV@@YA_NPEAUsd_decoder@@PEBX@Z(decoder, buffer);
}

/*
==============
SD_DecoderInterfaceInitRev
==============
*/

void __fastcall SD_DecoderInterfaceInitRev(sd_decoder_interface *api)
{
  ?SD_DecoderInterfaceInitRev@@YAXPEAUsd_decoder_interface@@@Z(api);
}

/*
==============
SD_DecoderUnlockREV
==============
*/

void __fastcall SD_DecoderUnlockREV(sd_decoder *decoder)
{
  ?SD_DecoderUnlockREV@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecodeREVRead
==============
*/
char SD_DecodeREVRead(sd_decoder *decoder)
{
  sd_decoder_instance v2; 
  _QWORD *v3; 
  int v4; 
  int v5; 
  CrankcaseAudio::Buffer v7; 

  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecodeREVRead");
  v2.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  if ( v2.x360_xma && (v3 = (_QWORD *)*((_QWORD *)v2.x360_xma + 514)) != NULL && *v3 )
  {
    v4 = *((_DWORD *)v2.x360_xma + 1027);
    v5 = v4 << 8;
    if ( *((_DWORD *)v2.x360_xma + 1026) + 256 <= 1024 / v4 )
    {
      if ( (unsigned int)(v5 + *((_DWORD *)v2.x360_xma + 1025)) > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 238, ASSERT_TYPE_ASSERT, "(rev->outputBufferWriteHead + writeSamples <= ( 4 * 256 ))", (const char *)&queryFormat, "rev->outputBufferWriteHead + writeSamples <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecodeREVReadBuffer");
      CrankcaseAudio::Buffer::Buffer(&v7);
      CrankcaseAudio::Buffer::Init(&v7, v4, (float *)v2.x360_xma + *((unsigned int *)v2.x360_xma + 1025), v5);
      (*(void (__fastcall **)(_QWORD, CrankcaseAudio::Buffer *))(***((_QWORD ***)v2.x360_xma + 514) + 24i64))(**((_QWORD **)v2.x360_xma + 514), &v7);
      *((_DWORD *)v2.x360_xma + 1025) = (((_WORD)v4 << 8) + (unsigned __int16)*((_DWORD *)v2.x360_xma + 1025)) & 0x3FF;
      Sys_InterlockedExchangeAdd((volatile int *)v2.x360_xma + 1026, 256);
      if ( *((_DWORD *)v2.x360_xma + 1026) > 1024 / v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 248, ASSERT_TYPE_ASSERT, "(rev->outputBufferCount <= ( 4 * 256 ) / channels)", (const char *)&queryFormat, "rev->outputBufferCount <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channels") )
        __debugbreak();
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      return 1;
    }
    else
    {
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  else
  {
    Sys_ProfEndNamedEvent();
    return 0;
  }
}

/*
==============
SD_DecoderBufferCompleteREV
==============
*/
char SD_DecoderBufferCompleteREV(sd_decoder *decoder, const void *buffer)
{
  return 1;
}

/*
==============
SD_DecoderBufferReadyREV
==============
*/
char SD_DecoderBufferReadyREV(sd_decoder *decoder)
{
  return 1;
}

/*
==============
SD_DecoderBufferSubmitREV
==============
*/
void SD_DecoderBufferSubmitREV(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos)
{
  ;
}

/*
==============
SD_DecoderConsumeREV
==============
*/
void SD_DecoderConsumeREV(sd_decoder *decoder, unsigned int channelCount, unsigned int count, float *frames)
{
  __int64 v4; 
  sd_decoder *v5; 
  __int64 v6; 
  sd_decoder_instance v7; 
  const char *v8; 
  int *v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  bool v15; 
  unsigned int v16; 

  v4 = (int)channelCount;
  v5 = decoder;
  v6 = count;
  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderConsumeREV");
  v7.x360_xma = (struct sd_decoder_360_xma *)v5->instance;
  v8 = "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx";
  if ( (unsigned int)v4 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v4, "unsigned", (unsigned int)v4) )
    __debugbreak();
  if ( (*(unsigned int (__fastcall **)(_QWORD, const char *))(***((_QWORD ***)v7.x360_xma + 514) + 40i64))(**((_QWORD **)v7.x360_xma + 514), v8) != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 69, ASSERT_TYPE_ASSERT, "(rev->vehicle->player->getNumberChannels() == truncate_cast<int>( channelCount ))", (const char *)&queryFormat, "rev->vehicle->player->getNumberChannels() == truncate_cast<int>( channelCount )") )
    __debugbreak();
  if ( (unsigned int)v6 > *((_DWORD *)v5->instance.x360_xma + 1026) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 70, ASSERT_TYPE_ASSERT, "(count <= SD_DecoderQueryAvailableDataREV( decoder, 0 ))", (const char *)&queryFormat, "count <= SD_DecoderQueryAvailableDataREV( decoder, 0 )") )
    __debugbreak();
  if ( (unsigned int)v4 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v4, "unsigned", (unsigned int)v4) )
    __debugbreak();
  v9 = (int *)((char *)v7.x360_xma + 4104);
  v10 = 1024 / (int)v4;
  if ( *((_DWORD *)v7.x360_xma + 1026) > 1024 / (int)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 71, ASSERT_TYPE_ASSERT, "(rev->outputBufferCount <= ( 4 * 256 ) / truncate_cast<int>( channelCount ))", (const char *)&queryFormat, "rev->outputBufferCount <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / truncate_cast<int>( channelCount )") )
    __debugbreak();
  v11 = 0x400 / (unsigned int)v4;
  if ( *((_DWORD *)v7.x360_xma + 1024) >= 0x400 / (unsigned int)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 72, ASSERT_TYPE_ASSERT, "(rev->outputBufferReadHead < ( 4 * 256 ) / channelCount)", (const char *)&queryFormat, "rev->outputBufferReadHead < SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channelCount") )
    __debugbreak();
  v12 = 0;
  if ( (_DWORD)v6 )
  {
    do
    {
      v13 = v11 - *((_DWORD *)v7.x360_xma + 1024);
      if ( (unsigned int)v6 - v12 > (unsigned int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 81, ASSERT_TYPE_ASSERT, "(toWrite <= count)", (const char *)&queryFormat, "toWrite <= count") )
        __debugbreak();
      if ( v13 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 82, ASSERT_TYPE_ASSERT, "(available <= ( 4 * 256 ) / channelCount)", (const char *)&queryFormat, "available <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channelCount") )
        __debugbreak();
      if ( v13 >= (unsigned int)v6 - v12 )
        v13 = v6 - v12;
      if ( v13 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 89, ASSERT_TYPE_ASSERT, "(toWrite <= ( 4 * 256 ) / channelCount)", (const char *)&queryFormat, "toWrite <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channelCount") )
        __debugbreak();
      memcpy_0(&frames[(unsigned int)v4 * v12], (char *)v7.x360_xma + 4 * (unsigned int)(*((_DWORD *)v7.x360_xma + 1024) * v4), 4i64 * (unsigned int)v4 * v13);
      v12 += v13;
      v14 = (v13 + *((_DWORD *)v7.x360_xma + 1024)) % v11;
      *((_DWORD *)v7.x360_xma + 1024) = v14;
      if ( v14 >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 96, ASSERT_TYPE_ASSERT, "(rev->outputBufferReadHead < ( 4 * 256 ) / channelCount)", (const char *)&queryFormat, "rev->outputBufferReadHead < SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channelCount") )
        __debugbreak();
      if ( v12 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 97, ASSERT_TYPE_ASSERT, "(written <= ( 4 * 256 ) / channelCount)", (const char *)&queryFormat, "written <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channelCount") )
        __debugbreak();
      v15 = v12 < (unsigned int)v6;
      if ( v12 > (unsigned int)v6 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 98, ASSERT_TYPE_ASSERT, "(written <= count)", (const char *)&queryFormat, "written <= count") )
          __debugbreak();
        v15 = v12 < (unsigned int)v6;
      }
    }
    while ( v15 );
    v9 = (int *)((char *)v7.x360_xma + 4104);
    v5 = decoder;
    v10 = 1024 / (int)v4;
  }
  v5->framesDecoded += v6;
  v16 = -truncate_cast<int,unsigned int>(v6);
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v9) )
    __debugbreak();
  _InterlockedExchangeAdd(v9, v16);
  if ( (unsigned int)v4 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v4, "unsigned", (unsigned int)v4) )
    __debugbreak();
  if ( *v9 > v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 104, ASSERT_TYPE_ASSERT, "(rev->outputBufferCount <= ( 4 * 256 ) / truncate_cast<int>( channelCount ))", (const char *)&queryFormat, "rev->outputBufferCount <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / truncate_cast<int>( channelCount )") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderCreateREV
==============
*/
void SD_DecoderCreateREV(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  sd_source *source; 
  sd_decoder_instance v7; 
  sd_vehicle *v8; 
  unsigned __int8 *data; 
  int MemoryFootprint; 
  CrankcaseAudio::IREVPlayer *v11; 
  int v20[6]; 
  char v21; 
  CrankcaseAudio::VehiclePhysicsControlData result; 

  Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecoderCreateREV");
  if ( !decoder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 160, ASSERT_TYPE_ASSERT, "(decoder)", (const char *)&queryFormat, "decoder") )
    __debugbreak();
  if ( !decoder->source->loaded.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 161, ASSERT_TYPE_ASSERT, "(decoder->source->loaded.data)", (const char *)&queryFormat, "decoder->source->loaded.data") )
    __debugbreak();
  if ( entry->format != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 162, ASSERT_TYPE_ASSERT, "(entry->format == SND_ASSET_FORMAT_REV)", (const char *)&queryFormat, "entry->format == SND_ASSET_FORMAT_REV") )
    __debugbreak();
  if ( !*((_QWORD *)decoder->instance.x360_xma + 514) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 163, ASSERT_TYPE_ASSERT, "(decoder->instance.rev->vehicle)", (const char *)&queryFormat, "decoder->instance.rev->vehicle") )
    __debugbreak();
  source = decoder->source;
  if ( ((__int64)source->loaded.data & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 164, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( decoder->source->loaded.data ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )decoder->source->loaded.data ) ) = 0x%llx", source->loaded.data) )
    __debugbreak();
  v7.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  v8 = (sd_vehicle *)*((_QWORD *)v7.x360_xma + 514);
  data = (unsigned __int8 *)decoder->source->loaded.data;
  MemoryFootprint = CrankcaseAudio::IREVPlayer::getMemoryFootprint();
  v11 = CrankcaseAudio::IREVPlayer::construct(v8->player, MemoryFootprint);
  v8->player = v11;
  v11->LoadData(v11, data);
  if ( entry->channelCount != v8->player->getNumberChannels(v8->player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 183, ASSERT_TYPE_ASSERT, "(entry->channelCount == vehicle->player->getNumberChannels())", (const char *)&queryFormat, "entry->channelCount == vehicle->player->getNumberChannels()") )
    __debugbreak();
  *(double *)&_XMM0 = ((double (__fastcall *)(CrankcaseAudio::IREVPlayer *))v8->player->getSampleRate)(v8->player);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  if ( entry->frameRate != _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 184, ASSERT_TYPE_ASSERT, "(entry->frameRate == FastRound( vehicle->player->getSampleRate() ))", (const char *)&queryFormat, "entry->frameRate == FastRound( vehicle->player->getSampleRate() )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+98h+var_68], xmm0
    vmovss  [rsp+98h+var_64], xmm2
    vmovss  [rsp+98h+var_60], xmm2
    vmovss  [rsp+98h+var_58], xmm2
    vmovss  [rsp+98h+var_54], xmm0
  }
  v20[3] = 1;
  v21 = 1;
  ((void (__fastcall *)(CrankcaseAudio::IREVPlayer *, int *))v8->player->Update)(v8->player, v20);
  CrankcaseAudio::GetREVPhysicsControlData(&result, data);
  CrankcaseAudio::PhysicsSimulator::Initialize(v8->physicsSim, &result);
  CrankcaseAudio::PhysicsSimulator::Reset(v8->physicsSim);
  memset_0(v7.x360_xma, 0, 0x1000ui64);
  *((_QWORD *)v7.x360_xma + 512) = 0i64;
  *((_DWORD *)v7.x360_xma + 1026) = 0;
  *((_DWORD *)v7.x360_xma + 1027) = entry->channelCount;
  SD_VehicleInit(v8);
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_DecoderFrameCountREV
==============
*/
__int64 SD_DecoderFrameCountREV(sd_decoder *decoder)
{
  return 0x20000i64;
}

/*
==============
SD_DecoderFrameREV
==============
*/
void SD_DecoderFrameREV(void)
{
  sd_decoder *revPool; 

  revPool = g_sd.revPool;
  do
  {
    if ( revPool->state == SD_DECODER_RUNNING )
      SD_DecoderUpdate(revPool);
    ++revPool;
  }
  while ( (__int64)revPool < (__int64)g_sd.revInstancePool );
}

/*
==============
SD_DecoderFreeREV
==============
*/
__int64 SD_DecoderFreeREV(sd_decoder *decoder)
{
  return 3i64;
}

/*
==============
SD_DecoderInitREV
==============
*/
void SD_DecoderInitREV(void)
{
  int MemoryFootprint; 
  __int64 v1; 
  int v2; 
  unsigned __int8 *v3; 
  unsigned __int8 *v4; 
  unsigned int v5; 
  sd_decoder_rev *revInstancePool; 
  sd_decoder_instance *p_instance; 
  sd_vehicle *vehicles; 
  CrankcaseAudio::IREVPlayer *v9; 
  CrankcaseAudio::PhysicsSimulator *v10; 
  CrankcaseAudio::PhysicsSimulator *v11; 

  memset_0(g_sd.revPool, 0, 0xA820ui64);
  MemoryFootprint = CrankcaseAudio::IREVPlayer::getMemoryFootprint();
  v1 = MemoryFootprint;
  v2 = 5 * MemoryFootprint + 320;
  v3 = SD_Alloc("Vehicle Ram", v2, 0x10u);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    revInstancePool = g_sd.revInstancePool;
    p_instance = &g_sd.revPool[0].instance;
    g_sd.revMemorySize = v2;
    vehicles = g_sd.vehicles;
    g_sd.revMemory = v3;
    do
    {
      v9 = CrankcaseAudio::IREVPlayer::construct(v4, v1);
      v10 = (CrankcaseAudio::PhysicsSimulator *)&v4[v1];
      vehicles->player = v9;
      CrankcaseAudio::PhysicsSimulator::PhysicsSimulator(v10);
      vehicles->physicsSim = v11;
      p_instance += 560;
      revInstancePool->vehicle = vehicles;
      v4 = (unsigned __int8 *)&v10[1];
      p_instance[-560].x360_xma = (struct sd_decoder_360_xma *)revInstancePool;
      ++v5;
      ++revInstancePool;
      ++vehicles;
    }
    while ( v5 < 5 );
  }
}

/*
==============
SD_DecoderInterfaceInitRev
==============
*/
void SD_DecoderInterfaceInitRev(sd_decoder_interface *api)
{
  api->Init = SD_DecoderInitREV;
  api->Shutdown = SD_DecoderShutdownREV;
  api->Lock = SD_DecoderLockREV;
  api->Unlock = SD_DecoderUnlockREV;
  api->QueryAvailableData = SD_DecoderQueryAvailableDataREV;
  api->BufferComplete = SD_DecoderBufferCompleteREV;
  api->BufferReady = SD_DecoderBufferReadyREV;
  api->BufferSubmit = SD_DecoderBufferSubmitREV;
  api->Consume = SD_DecoderConsumeREV;
  api->Free = SD_DecoderFreeREV;
  api->Create = SD_DecoderCreateREV;
  api->ThreadUpdate = SD_DecoderThreadUpdateREV;
  api->Frame = SD_DecoderFrameREV;
  api->DecodeFrameCount = SD_DecoderFrameCountREV;
}

/*
==============
SD_DecoderLockREV
==============
*/
void SD_DecoderLockREV(sd_decoder *decoder)
{
  ;
}

/*
==============
SD_DecoderQueryAvailableDataREV
==============
*/
__int64 SD_DecoderQueryAvailableDataREV(sd_decoder *decoder, unsigned int desired)
{
  return *((unsigned int *)decoder->instance.x360_xma + 1026);
}

/*
==============
SD_DecoderShutdownREV
==============
*/
void SD_DecoderShutdownREV(void)
{
  ;
}

/*
==============
SD_DecoderThreadUpdateREV
==============
*/
void SD_DecoderThreadUpdateREV(void)
{
  sd_decoder *revPool; 
  sd_decoder_instance v1; 
  sd_decoder_instance v2; 
  _QWORD *v3; 
  int v4; 
  int v5; 
  CrankcaseAudio::Buffer v6; 

  revPool = g_sd.revPool;
  do
  {
    v1.x360_xma = (struct sd_decoder_360_xma *)revPool->instance;
    if ( revPool->state == SD_DECODER_FREED )
    {
      memset_0(revPool->instance.x360_xma, 0, 0x1000ui64);
      *((_QWORD *)v1.x360_xma + 512) = 0i64;
      *((_DWORD *)v1.x360_xma + 1026) = 0;
      revPool->state = SD_DECODER_FREE;
    }
    else if ( revPool->state == SD_DECODER_RUNNING )
    {
      Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecodeREVRead");
      v2.x360_xma = (struct sd_decoder_360_xma *)revPool->instance;
      if ( v2.x360_xma )
      {
        v3 = (_QWORD *)*((_QWORD *)v2.x360_xma + 514);
        if ( v3 )
        {
          if ( *v3 )
          {
            v4 = *((_DWORD *)v2.x360_xma + 1027);
            v5 = v4 << 8;
            if ( *((_DWORD *)v2.x360_xma + 1026) + 256 <= 1024 / v4 )
            {
              if ( (unsigned int)(v5 + *((_DWORD *)v2.x360_xma + 1025)) > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 238, ASSERT_TYPE_ASSERT, "(rev->outputBufferWriteHead + writeSamples <= ( 4 * 256 ))", (const char *)&queryFormat, "rev->outputBufferWriteHead + writeSamples <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE") )
                __debugbreak();
              Sys_ProfBeginNamedEvent(0xFFFF00u, "SD_DecodeREVReadBuffer");
              CrankcaseAudio::Buffer::Buffer(&v6);
              CrankcaseAudio::Buffer::Init(&v6, v4, (float *)v2.x360_xma + *((unsigned int *)v2.x360_xma + 1025), v5);
              (*(void (__fastcall **)(_QWORD, CrankcaseAudio::Buffer *))(***((_QWORD ***)v2.x360_xma + 514) + 24i64))(**((_QWORD **)v2.x360_xma + 514), &v6);
              *((_DWORD *)v2.x360_xma + 1025) = ((_WORD)v5 + (unsigned __int16)*((_DWORD *)v2.x360_xma + 1025)) & 0x3FF;
              Sys_InterlockedExchangeAdd((volatile int *)v2.x360_xma + 1026, 256);
              if ( *((_DWORD *)v2.x360_xma + 1026) > 1024 / v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_rev.cpp", 248, ASSERT_TYPE_ASSERT, "(rev->outputBufferCount <= ( 4 * 256 ) / channels)", (const char *)&queryFormat, "rev->outputBufferCount <= SD_DECODER_REV_OUTPUT_BUFFER_SIZE / channels") )
                __debugbreak();
              Sys_ProfEndNamedEvent();
            }
          }
        }
      }
      Sys_ProfEndNamedEvent();
    }
    ++revPool;
  }
  while ( (__int64)revPool < (__int64)g_sd.revInstancePool );
}

/*
==============
SD_DecoderUnlockREV
==============
*/
void SD_DecoderUnlockREV(sd_decoder *decoder)
{
  ;
}

