/*
==============
SD_DecoderShutdownAcpXma
==============
*/

void SD_DecoderShutdownAcpXma(void)
{
  ?SD_DecoderShutdownAcpXma@@YAXXZ();
}

/*
==============
SD_DecoderFrameAcpXma
==============
*/

void SD_DecoderFrameAcpXma(void)
{
  ?SD_DecoderFrameAcpXma@@YAXXZ();
}

/*
==============
SD_DecoderFrameCountAcpXma
==============
*/

unsigned int __fastcall SD_DecoderFrameCountAcpXma(sd_decoder *decoder)
{
  return ?SD_DecoderFrameCountAcpXma@@YAIPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderConsumeAcpXma
==============
*/

void __fastcall SD_DecoderConsumeAcpXma(sd_decoder *decoder, unsigned int channelCount, unsigned int toConsumeFrames, float *frames)
{
  ?SD_DecoderConsumeAcpXma@@YAXPEAUsd_decoder@@IIPEAM@Z(decoder, channelCount, toConsumeFrames, frames);
}

/*
==============
SD_DecoderFreeAcpXma
==============
*/

sd_decoder_state __fastcall SD_DecoderFreeAcpXma(sd_decoder *decoder)
{
  return ?SD_DecoderFreeAcpXma@@YA?AW4sd_decoder_state@@PEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderInit
==============
*/

void __fastcall SD_DecoderInit(sd_decoder *decoder)
{
  ?SD_DecoderInit@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferCompleteAcpXma
==============
*/

bool __fastcall SD_DecoderBufferCompleteAcpXma(sd_decoder *decoder, const void *pData)
{
  return ?SD_DecoderBufferCompleteAcpXma@@YA_NPEAUsd_decoder@@PEBX@Z(decoder, pData);
}

/*
==============
SD_DecoderCreateAcpXma
==============
*/

void __fastcall SD_DecoderCreateAcpXma(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  ?SD_DecoderCreateAcpXma@@YAXPEAUsd_decoder@@PEBUSndAssetBankEntry@@@Z(decoder, entry);
}

/*
==============
SD_DecoderBufferAvailable
==============
*/

unsigned int __fastcall SD_DecoderBufferAvailable(sd_decoder_input_buffer *dbuf)
{
  return ?SD_DecoderBufferAvailable@@YAIPEAUsd_decoder_input_buffer@@@Z(dbuf);
}

/*
==============
SD_DecoderAcpMessageProcess
==============
*/

void SD_DecoderAcpMessageProcess(void)
{
  ?SD_DecoderAcpMessageProcess@@YAXXZ();
}

/*
==============
SD_DecoderInitAcpXma
==============
*/

void SD_DecoderInitAcpXma(void)
{
  ?SD_DecoderInitAcpXma@@YAXXZ();
}

/*
==============
SD_DecoderBufferReadyAcpXma
==============
*/

bool __fastcall SD_DecoderBufferReadyAcpXma(sd_decoder *decoder)
{
  return ?SD_DecoderBufferReadyAcpXma@@YA_NPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferHasData
==============
*/

bool __fastcall SD_DecoderBufferHasData(sd_decoder_input_buffer *dbuf)
{
  return ?SD_DecoderBufferHasData@@YA_NPEAUsd_decoder_input_buffer@@@Z(dbuf);
}

/*
==============
SD_DecoderBufferCompleteBuffer
==============
*/

bool __fastcall SD_DecoderBufferCompleteBuffer(sd_decoder_input_buffer *dbuf, const void *buffer)
{
  return ?SD_DecoderBufferCompleteBuffer@@YA_NPEAUsd_decoder_input_buffer@@PEBX@Z(dbuf, buffer);
}

/*
==============
SD_DecoderBufferRead
==============
*/

void __fastcall SD_DecoderBufferRead(sd_decoder_input_buffer *dbuf, unsigned int requiredSize, unsigned __int8 *output, bool singleBufferLoop, unsigned int fileSize)
{
  ?SD_DecoderBufferRead@@YAXPEAUsd_decoder_input_buffer@@IPEAE_NI@Z(dbuf, requiredSize, output, singleBufferLoop, fileSize);
}

/*
==============
SD_DecoderInterfaceInitAcpXma
==============
*/

void __fastcall SD_DecoderInterfaceInitAcpXma(sd_decoder_interface *api)
{
  ?SD_DecoderInterfaceInitAcpXma@@YAXPEAUsd_decoder_interface@@@Z(api);
}

/*
==============
SD_DecoderBufferSubmitAcpXma
==============
*/

void __fastcall SD_DecoderBufferSubmitAcpXma(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  ?SD_DecoderBufferSubmitAcpXma@@YAXPEAUsd_decoder@@PEBE_J_N222@Z(decoder, data, size, eos, decodePos, frameSkip, filePos);
}

/*
==============
SD_DecoderThreadUpdateAcpXma
==============
*/

void SD_DecoderThreadUpdateAcpXma(void)
{
  ?SD_DecoderThreadUpdateAcpXma@@YAXXZ();
}

/*
==============
SD_DecoderLockAcpXma
==============
*/

void __fastcall SD_DecoderLockAcpXma(sd_decoder *decoder)
{
  ?SD_DecoderLockAcpXma@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderBufferReadyBuffer
==============
*/

bool __fastcall SD_DecoderBufferReadyBuffer(sd_decoder_input_buffer *dbuf)
{
  return ?SD_DecoderBufferReadyBuffer@@YA_NPEAUsd_decoder_input_buffer@@@Z(dbuf);
}

/*
==============
SD_DecoderInit
==============
*/

void SD_DecoderInit(void)
{
  ?SD_DecoderInit@@YAXXZ();
}

/*
==============
SD_DecoderUnlockAcpXma
==============
*/

void __fastcall SD_DecoderUnlockAcpXma(sd_decoder *decoder)
{
  ?SD_DecoderUnlockAcpXma@@YAXPEAUsd_decoder@@@Z(decoder);
}

/*
==============
SD_DecoderSeekAcpXma
==============
*/

void __fastcall SD_DecoderSeekAcpXma(sd_decoder *decoder, const unsigned __int8 *seekTable, const __int64 seekTableSize, const __int64 frameCount, const __int64 startFrame, __int64 *outDecodePos, __int64 *outFrameSkip)
{
  ?SD_DecoderSeekAcpXma@@YAXPEAUsd_decoder@@PEBE_J22PEA_J3@Z(decoder, seekTable, seekTableSize, frameCount, startFrame, outDecodePos, outFrameSkip);
}

/*
==============
SD_DecoderQueryAvailableDataAcpXma
==============
*/

unsigned int __fastcall SD_DecoderQueryAvailableDataAcpXma(sd_decoder *decoder, unsigned int desiredFrames)
{
  return ?SD_DecoderQueryAvailableDataAcpXma@@YAIPEAUsd_decoder@@I@Z(decoder, desiredFrames);
}

/*
==============
SD_DecoderContiguousBufferAvailable
==============
*/

unsigned int __fastcall SD_DecoderContiguousBufferAvailable(sd_decoder_input_buffer *dbuf)
{
  return ?SD_DecoderContiguousBufferAvailable@@YAIPEAUsd_decoder_input_buffer@@@Z(dbuf);
}

/*
==============
SD_DecoderInit
==============
*/
void SD_DecoderInit(void)
{
  sd_decoder_interface *decoderInterfaces; 
  __int64 v1; 
  signed __int32 v2[10]; 

  decoderInterfaces = g_sd.decoderInterfaces;
  memset_0(g_sd.decoderInterfaces, 0, sizeof(g_sd.decoderInterfaces));
  SD_DecoderInterfaceInitAcpXma(&g_sd.decoderInterfaces[4]);
  SD_DecoderInterfaceInitRev(&g_sd.decoderInterfaces[12]);
  SD_DecoderInterfaceInitOpus(&g_sd.decoderInterfaces[13]);
  v1 = 14i64;
  do
  {
    if ( decoderInterfaces->Init )
      decoderInterfaces->Init();
    ++decoderInterfaces;
    --v1;
  }
  while ( v1 );
  Sys_CreateEvent(0, 0, &g_sd.decodeEvent);
  g_sd.decodeThreadActive = 1;
  _InterlockedOr(v2, 0);
  Sys_SpawnDecodeThread(SD_DecoderThreadMain);
}

/*
==============
SD_DecoderAcpMessageProcess
==============
*/
void SD_DecoderAcpMessageProcess(void)
{
  unsigned int v0; 
  sd_decoder_instance v1; 
  signed __int32 v2[8]; 
  __int64 v3; 
  __int64 v4; 

  if ( g_sd.acpXmaHal->PopMessage(g_sd.acpXmaHal, &g_sd.acpMessage) )
  {
    while ( 1 )
    {
      switch ( g_sd.acpMessage.type )
      {
        case 1u:
          g_sd.acpXmaFrameNumber = g_sd.acpMessage.audioFrameStart.audioFrame;
          goto LABEL_27;
        case 0x10u:
          if ( (g_sd.acpMessage.shapeCommandBlocked.flowgraph & 0xFF000000) == 0x1000000i64 )
          {
            v0 = g_sd.acpMessage.commandCompleted.commandId & 0x1FF;
            if ( v0 >= 0x71 )
            {
              LODWORD(v4) = 113;
              LODWORD(v3) = g_sd.acpMessage.commandCompleted.commandId & 0x1FF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 838, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( g_sd.acpXmaPool ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( g_sd.acpXmaPool )\n\t%i not in [0, %i)", v3, v4) )
                __debugbreak();
            }
            v1.x360_xma = (struct sd_decoder_360_xma *)g_sd.acpXmaPool[v0].instance;
            if ( !*(_BYTE *)v1.x360_xma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 840, ASSERT_TYPE_ASSERT, "(xma->inUse)", (const char *)&queryFormat, "xma->inUse") )
              __debugbreak();
            *((_DWORD *)v1.x360_xma + 27) = 0;
            _InterlockedOr(v2, 0);
            *(_BYTE *)v1.x360_xma = 0;
            if ( ((unsigned __int8)&g_sd.pendingCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.pendingCommands) )
              __debugbreak();
            _InterlockedDecrement(&g_sd.pendingCommands);
          }
          goto LABEL_27;
        case 0x20u:
          SD_PrintAcpMessage(&g_sd.acpMessage);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 861, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_DecoderAcpMessageProcess error") )
          {
LABEL_12:
            __debugbreak();
            g_sd.acpErrorMessage = g_sd.acpMessage;
            goto LABEL_27;
          }
          goto LABEL_10;
      }
      if ( g_sd.acpMessage.type == 64 )
        break;
      if ( g_sd.acpMessage.type == 128 )
      {
        SD_PrintAcpMessage(&g_sd.acpMessage);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 855, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_DecoderAcpMessageProcess error") )
          __debugbreak();
LABEL_10:
        g_sd.acpErrorMessage = g_sd.acpMessage;
        goto LABEL_27;
      }
      SD_PrintAcpMessage(&g_sd.acpMessage);
LABEL_27:
      if ( !g_sd.acpXmaHal->PopMessage(g_sd.acpXmaHal, &g_sd.acpMessage) )
        return;
    }
    SD_PrintAcpMessage(&g_sd.acpMessage);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 867, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SD_DecoderAcpMessageProcess error") )
      goto LABEL_12;
    goto LABEL_10;
  }
}

/*
==============
SD_DecoderBufferAvailable
==============
*/
__int64 SD_DecoderBufferAvailable(sd_decoder_input_buffer *dbuf)
{
  __int64 result; 

  result = 0i64;
  if ( dbuf->inputBuffers[0] )
    result = dbuf->inputBufferSize[0] - dbuf->offsetIntoTopBuffer;
  if ( dbuf->inputBuffers[1] )
    return (unsigned int)(dbuf->inputBufferSize[1] + result);
  return result;
}

/*
==============
SD_DecoderBufferCompleteAcpXma
==============
*/
bool SD_DecoderBufferCompleteAcpXma(sd_decoder *decoder, const void *pData)
{
  sd_decoder_instance v2; 
  __int64 v3; 
  const void **v4; 

  v2.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  v3 = 0i64;
  v4 = (const void **)((char *)v2.x360_xma + 8);
  do
  {
    if ( *v4 == pData )
      return 0;
    ++v3;
    ++v4;
  }
  while ( v3 < 2 );
  return !decoder->eos || *((_BYTE *)v2.x360_xma + 2317) || *((_BYTE *)v2.x360_xma + 2316) != 0;
}

/*
==============
SD_DecoderBufferCompleteBuffer
==============
*/
char SD_DecoderBufferCompleteBuffer(sd_decoder_input_buffer *dbuf, const void *buffer)
{
  __int64 v2; 

  v2 = 0i64;
  while ( dbuf->inputBuffers[v2] != buffer )
  {
    if ( ++v2 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
SD_DecoderBufferHasData
==============
*/
bool SD_DecoderBufferHasData(sd_decoder_input_buffer *dbuf)
{
  return dbuf->inputBuffers[0] != NULL;
}

/*
==============
SD_DecoderBufferRead
==============
*/
void SD_DecoderBufferRead(sd_decoder_input_buffer *dbuf, unsigned int requiredSize, unsigned __int8 *output, bool singleBufferLoop, unsigned int fileSize)
{
  unsigned int v7; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  const unsigned __int8 *v13; 
  const unsigned __int8 *v14; 
  unsigned __int64 v15; 
  unsigned __int64 consumedBytes; 
  signed __int32 v17[8]; 

  v7 = 0;
  v9 = requiredSize;
  if ( requiredSize )
  {
    do
    {
      if ( !dbuf->inputBuffers[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 83, ASSERT_TYPE_ASSERT, "(dbuf->inputBuffers[0])", (const char *)&queryFormat, "dbuf->inputBuffers[0]") )
        __debugbreak();
      v10 = dbuf->inputBufferSize[0] - dbuf->offsetIntoTopBuffer;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 86, ASSERT_TYPE_ASSERT, "(toCopySize > 0)", (const char *)&queryFormat, "toCopySize > 0") )
        __debugbreak();
      v11 = v9 - v7;
      if ( v10 <= (unsigned int)v9 - v7 )
        v11 = v10;
      if ( output )
        memcpy_0(&output[v7], &dbuf->inputBuffers[0][dbuf->offsetIntoTopBuffer], v11);
      dbuf->offsetIntoTopBuffer += v11;
      v7 += v11;
      v12 = dbuf->inputBufferSize[0];
      if ( dbuf->offsetIntoTopBuffer == v12 )
      {
        if ( singleBufferLoop )
        {
          v13 = dbuf->inputBuffers[1];
          if ( v13 )
          {
            v14 = dbuf->inputBuffers[0];
            v15 = dbuf->filePos[0];
            dbuf->inputBuffers[0] = v13;
            _InterlockedOr(v17, 0);
            dbuf->inputBuffers[1] = v14;
            dbuf->inputBufferSize[0] = dbuf->inputBufferSize[1];
            _InterlockedOr(v17, 0);
            dbuf->filePos[0] = dbuf->filePos[1];
            dbuf->inputBufferSize[1] = v12;
            _InterlockedOr(v17, 0);
            dbuf->filePos[1] = v15;
            dbuf->decodePos[1] = 0i64;
            dbuf->frameSkip[1] = 0i64;
          }
          dbuf->decodePos[0] = 0i64;
          dbuf->frameSkip[0] = 0i64;
          dbuf->offsetIntoTopBuffer = 0;
        }
        else
        {
          dbuf->inputBuffers[0] = dbuf->inputBuffers[1];
          _InterlockedOr(v17, 0);
          dbuf->inputBufferSize[0] = dbuf->inputBufferSize[1];
          dbuf->inputBuffers[1] = NULL;
          _InterlockedOr(v17, 0);
          dbuf->decodePos[0] = dbuf->decodePos[1];
          dbuf->frameSkip[0] = dbuf->frameSkip[1];
          dbuf->filePos[0] = dbuf->filePos[1];
          *(_QWORD *)&dbuf->inputBufferSize[1] = 0i64;
          _InterlockedOr(v17, 0);
          dbuf->decodePos[1] = 0i64;
          dbuf->frameSkip[1] = 0i64;
          dbuf->filePos[1] = 0i64;
        }
      }
    }
    while ( v7 < (unsigned int)v9 );
  }
  dbuf->consumedBytes += v9;
  consumedBytes = dbuf->consumedBytes;
  if ( consumedBytes >= fileSize )
    dbuf->consumedBytes = consumedBytes - fileSize;
}

/*
==============
SD_DecoderBufferReadyAcpXma
==============
*/
char SD_DecoderBufferReadyAcpXma(sd_decoder *decoder)
{
  __int64 v1; 
  _QWORD *i; 

  v1 = 0i64;
  for ( i = (_QWORD *)((char *)decoder->instance.x360_xma + 8); *i; ++i )
  {
    if ( ++v1 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
SD_DecoderBufferReadyBuffer
==============
*/
char SD_DecoderBufferReadyBuffer(sd_decoder_input_buffer *dbuf)
{
  __int64 v1; 

  v1 = 0i64;
  while ( dbuf->inputBuffers[v1] )
  {
    if ( ++v1 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
SD_DecoderBufferSubmitAcpXma
==============
*/
void SD_DecoderBufferSubmitAcpXma(sd_decoder *decoder, const unsigned __int8 *data, __int64 size, bool eos, __int64 decodePos, __int64 frameSkip, __int64 filePos)
{
  sd_decoder_instance v7; 
  int v8; 
  _QWORD *v9; 
  __int64 v10; 
  int v11; 
  signed __int32 v14[8]; 

  v7.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  v8 = 0;
  decoder->eos = eos;
  v9 = (_QWORD *)((char *)v7.x360_xma + 8);
  v10 = 0i64;
  decoder->lastBuffer = (void *)data;
  v11 = size;
  while ( *v9 )
  {
    ++v8;
    ++v10;
    ++v9;
    if ( v10 >= 2 )
    {
      SD_DecoderDump(decoder);
      Com_Printf(9, "out of buffers?\n");
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 461, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "out of buffers") )
        __debugbreak();
      return;
    }
  }
  if ( (size < 0 || (unsigned __int64)size > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)size, "signed", size) )
    __debugbreak();
  *((_DWORD *)decoder->instance.x360_xma + v8 + 6) = v11;
  *((_QWORD *)decoder->instance.x360_xma + v8 + 6) = decodePos;
  *((_QWORD *)decoder->instance.x360_xma + v8 + 8) = frameSkip;
  if ( filePos < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 450, ASSERT_TYPE_ASSERT, "(filePos >= 0)", (const char *)&queryFormat, "filePos >= 0") )
    __debugbreak();
  *((_QWORD *)decoder->instance.x360_xma + v8 + 10) = filePos;
  _InterlockedOr(v14, 0);
  *((_QWORD *)decoder->instance.x360_xma + v8 + 1) = data;
}

/*
==============
SD_DecoderConsumeAcpXma
==============
*/
void SD_DecoderConsumeAcpXma(sd_decoder *decoder, unsigned int channelCount, unsigned int toConsumeFrames, float *frames)
{
  const __int16 *x360_xma; 
  __int64 v6; 
  int v8; 

  x360_xma = (const __int16 *)decoder->instance.x360_xma;
  v6 = toConsumeFrames;
  if ( *((_DWORD *)x360_xma + 33) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 350, ASSERT_TYPE_ASSERT, "(xma->channelCount <= 2)", (const char *)&queryFormat, "xma->channelCount <= 2") )
    __debugbreak();
  if ( !*((_DWORD *)x360_xma + 33) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 351, ASSERT_TYPE_ASSERT, "(xma->channelCount > 0)", (const char *)&queryFormat, "xma->channelCount > 0") )
    __debugbreak();
  if ( (unsigned int)(*((_DWORD *)decoder->instance.x360_xma + 34) / *((_DWORD *)decoder->instance.x360_xma + 33)) < (unsigned int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 352, ASSERT_TYPE_ASSERT, "(SD_DecoderQueryAvailableDataAcpXma(decoder, 0) >= toConsumeFrames)", (const char *)&queryFormat, "SD_DecoderQueryAvailableDataAcpXma(decoder, 0) >= toConsumeFrames") )
    __debugbreak();
  if ( (unsigned int)(v6 * *((_DWORD *)x360_xma + 33)) > *((_DWORD *)x360_xma + 34) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 353, ASSERT_TYPE_ASSERT, "(toConsumeFrames*xma->channelCount <= xma->decodedSampleCount)", (const char *)&queryFormat, "toConsumeFrames*xma->channelCount <= xma->decodedSampleCount") )
    __debugbreak();
  SND_DspShort8ToFloat4(v6 * *((_DWORD *)x360_xma + 33), &x360_xma[*((unsigned int *)x360_xma + 35) + 128], frames);
  v8 = v6 * *((_DWORD *)x360_xma + 33);
  *((_DWORD *)x360_xma + 35) += v8;
  *((_DWORD *)x360_xma + 34) -= v8;
  decoder->framesDecoded += v6;
}

/*
==============
SD_DecoderContiguousBufferAvailable
==============
*/
__int64 SD_DecoderContiguousBufferAvailable(sd_decoder_input_buffer *dbuf)
{
  if ( dbuf->inputBuffers[0] )
    return dbuf->inputBufferSize[0] - dbuf->offsetIntoTopBuffer;
  else
    return 0i64;
}

/*
==============
SD_DecoderCreateAcpXma
==============
*/
void SD_DecoderCreateAcpXma(sd_decoder *decoder, const SndAssetBankEntry *entry)
{
  sd_decoder_instance v3; 
  sd_stream *stream; 
  bool v6; 
  __int16 BlocksizeKB; 

  v3.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  *((_DWORD *)v3.x360_xma + 33) = entry->channelCount;
  memset_0((char *)v3.x360_xma + 8, 0, 0x58ui64);
  memset_0((char *)v3.x360_xma + 256, 0, 0x800ui64);
  *((_BYTE *)v3.x360_xma + 1) = 1;
  *((_DWORD *)v3.x360_xma + 34) = 0;
  *((_DWORD *)v3.x360_xma + 577) = 0;
  *((_BYTE *)v3.x360_xma + 2317) = SD_SourceIsLooping(decoder->source);
  *((_BYTE *)v3.x360_xma + 2318) = SD_SourceIsResident(decoder->source);
  stream = decoder->source->stream;
  v6 = stream && entry->size <= stream->primeSize + 0x20000;
  *((_BYTE *)v3.x360_xma + 2319) = v6;
  *((_DWORD *)v3.x360_xma + 32) = entry->frameRate;
  *((_DWORD *)v3.x360_xma + 580) = entry->frameCount;
  BlocksizeKB = entry->BlocksizeKB;
  *((_WORD *)v3.x360_xma + 1162) = BlocksizeKB;
  if ( !BlocksizeKB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 488, ASSERT_TYPE_ASSERT, "(xma->blockSizeKB > 0)", (const char *)&queryFormat, "xma->blockSizeKB > 0") )
    __debugbreak();
  if ( *((unsigned __int16 *)v3.x360_xma + 1162) << 10 > 0x8000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 489, ASSERT_TYPE_ASSERT, "(xma->blockSizeKB*KB <= (32 * KB))", (const char *)&queryFormat, "xma->blockSizeKB*KB <= SD_DECODER_MAX_XMA_BLOCKSIZE") )
    __debugbreak();
}

/*
==============
SD_DecoderErrorAcpXma
==============
*/
void SD_DecoderErrorAcpXma(HRESULT hr, const char *str)
{
  HRESULT v3; 

  if ( hr )
  {
    Com_PrintError(9, "hr = %x %s", (unsigned int)hr, str);
    v3 = hr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v3) )
      __debugbreak();
  }
}

/*
==============
SD_DecoderFrameAcpXma
==============
*/
void SD_DecoderFrameAcpXma(void)
{
  unsigned int v0; 
  __int64 v1; 
  sd_decoder *acpXmaPool; 
  sd_decoder_instance v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 

  SD_DecoderAcpMessageProcess();
  v0 = 0;
  v1 = 0i64;
  acpXmaPool = g_sd.acpXmaPool;
  do
  {
    if ( acpXmaPool->state == SD_DECODER_FREED )
    {
      acpXmaPool->state = SD_DECODER_FREE;
    }
    else if ( acpXmaPool->state == SD_DECODER_RUNNING && SD_DecoderInstanceFrameAcpXma(acpXmaPool) )
    {
      v3.x360_xma = (struct sd_decoder_360_xma *)acpXmaPool->instance;
      if ( v0 != *((_DWORD *)v3.x360_xma + 26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 899, ASSERT_TYPE_ASSERT, "((uint)i == cmd->contextIndex)", (const char *)&queryFormat, "(uint)i == cmd->contextIndex") )
        __debugbreak();
      if ( *((_DWORD *)v3.x360_xma + 28) != (unsigned int)ApuMapVirtualAddress_0(*((_QWORD *)v3.x360_xma + 15) + 43008i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 900, ASSERT_TYPE_ASSERT, "(cmd->contextData == ApuMapVirtualAddress( &xma->acpBuffers->updateContext ))", (const char *)&queryFormat, "cmd->contextData == ApuMapVirtualAddress( &xma->acpBuffers->updateContext )") )
        __debugbreak();
      *(_BYTE *)v3.x360_xma = 1;
      LODWORD(v6) = 0;
      v4 = g_sd.acpXmaHal->SubmitCommand(g_sd.acpXmaHal, ACP_COMMAND_TYPE_UPDATE_XMA_CONTEXT, v1 | 0x1000000, 0xFFFFFFFF, (char *)v3.x360_xma + 104, v6);
      v5 = v4;
      if ( v4 )
      {
        Com_PrintError(9, "hr = %x %s", v4, "SubmitCommand failed\n");
        LODWORD(v6) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v6) )
          __debugbreak();
      }
      if ( ((unsigned __int8)&g_sd.pendingCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.pendingCommands) )
        __debugbreak();
      _InterlockedIncrement(&g_sd.pendingCommands);
    }
    ++v0;
    ++v1;
    ++acpXmaPool;
  }
  while ( v0 < 0x71 );
}

/*
==============
SD_DecoderFrameCountAcpXma
==============
*/
__int64 SD_DecoderFrameCountAcpXma(sd_decoder *decoder)
{
  return *((unsigned int *)decoder->instance.x360_xma + 580);
}

/*
==============
SD_DecoderFreeAcpXma
==============
*/
__int64 SD_DecoderFreeAcpXma(sd_decoder *decoder)
{
  return 3i64;
}

/*
==============
SD_DecoderInit
==============
*/
void SD_DecoderInit(sd_decoder *decoder)
{
  sd_decoder_instance v1; 
  int *v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  __int64 v24; 

  v1.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  v2 = (int *)*((_QWORD *)v1.x360_xma + 12);
  v3 = *((_QWORD *)v1.x360_xma + 15) + 43008i64;
  *(_QWORD *)v2 = 0i64;
  *((_QWORD *)v2 + 1) = 0i64;
  *((_QWORD *)v2 + 2) = 0i64;
  *((_QWORD *)v2 + 3) = 0i64;
  *((_QWORD *)v2 + 4) = 0i64;
  *((_QWORD *)v2 + 5) = 0i64;
  *((_QWORD *)v2 + 6) = 0i64;
  *((_QWORD *)v2 + 7) = 0i64;
  *(_QWORD *)v3 = 0i64;
  *(_QWORD *)(v3 + 8) = 0i64;
  *(_QWORD *)(v3 + 16) = 0i64;
  *(_QWORD *)(v3 + 24) = 0i64;
  *(_QWORD *)(v3 + 32) = 0i64;
  *(_QWORD *)(v3 + 40) = 0i64;
  *(_QWORD *)(v3 + 48) = 0i64;
  *(_QWORD *)(v3 + 56) = 0i64;
  if ( (ApuMapVirtualAddress_0(*((_QWORD *)v1.x360_xma + 15)) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 504, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->input0) % 2048 == 0)", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->input0) % SD_SHAPE_XMA_INPUT_BUFFER_ALIGNMENT == 0") )
    __debugbreak();
  if ( (ApuMapVirtualAddress_0(*((_QWORD *)v1.x360_xma + 15) + 0x8000i64) & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 505, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->output) % 128 == 0)", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->output) % SD_SHAPE_XMA_OVERLAP_ADD_BUFFER_ALIGNMENT == 0") )
    __debugbreak();
  if ( (unsigned __int8)ApuMapVirtualAddress_0(*((_QWORD *)v1.x360_xma + 15) + 40704i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 506, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->overlap) % 256 == 0)", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->overlap) % SD_SHAPE_XMA_OUTPUT_BUFFER_SIZE_ALIGNMENT == 0") )
    __debugbreak();
  if ( v3 && (v4 = *((_DWORD *)v1.x360_xma + 33), v4 <= 2) )
  {
    *(_DWORD *)(v3 + 4) &= ~0x20000000u;
    *(_DWORD *)(v3 + 4) |= (((_BYTE)v4 - 1) & 1) << 29;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaNumChannels failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x1000u;
  if ( v3 )
  {
    v5 = *((_DWORD *)v1.x360_xma + 32);
    v6 = *(_DWORD *)(v3 + 4);
    if ( v5 > 0x5DC0 )
    {
      if ( v5 > 0x7D00 )
      {
        v7 = v6 | 0x18000000;
        if ( v5 <= 0xAC44 )
          v7 = *(_DWORD *)(v3 + 4) & 0xE7FFFFFF | 0x10000000;
        *(_DWORD *)(v3 + 4) = v7;
      }
      else
      {
        *(_DWORD *)(v3 + 4) = v6 & 0xE7FFFFFF | 0x8000000;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 4) = v6 & 0xE7FFFFFF;
    }
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaSampleRate failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x800u;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) &= ~0x80000000;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaCurrentInputBuffer failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  v8 = *((_QWORD *)v1.x360_xma + 15);
  *((_DWORD *)v1.x360_xma + 27) |= 0x40000u;
  v9 = ApuMapVirtualAddress_0(v8);
  if ( !v3 || (v9 & 0x7FF) != 0 )
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaInputBuffer0 failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  else
  {
    *(_DWORD *)(v3 + 20) = v9;
  }
  v10 = *((_QWORD *)v1.x360_xma + 15);
  *((_DWORD *)v1.x360_xma + 27) |= 0x80000u;
  v11 = ApuMapVirtualAddress_0(v10);
  if ( !v3 || (v11 & 0x7FF) != 0 )
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaInputBuffer1 failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  else
  {
    *(_DWORD *)(v3 + 24) = v11;
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x100000u;
  v12 = SetShapeXmaNumSubframesToDecode((SHAPE_XMA_CONTEXT *)v3, 4u);
  v13 = v12;
  if ( v12 )
  {
    Com_PrintError(9, "hr = %x %s", v12, "SetShapeXmaNumSubframesToDecode failed\n");
    LODWORD(v24) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  v14 = *((_QWORD *)v1.x360_xma + 15);
  *((_DWORD *)v1.x360_xma + 27) |= 0x200u;
  v15 = ApuMapVirtualAddress_0(v14 + 0x8000);
  if ( v3 && v15 && (v15 & 0x3F) == 0 )
  {
    *(_DWORD *)(v3 + 28) = v15;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBuffer failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x200000u;
  if ( v3 )
  {
    *(_DWORD *)v3 |= 0x7C00000u;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBufferSize failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  v16 = *((_QWORD *)v1.x360_xma + 15);
  *((_DWORD *)v1.x360_xma + 27) |= 0x40u;
  v17 = ApuMapVirtualAddress_0(v16 + 40704);
  if ( v3 && v17 && (v17 & 0x7F) == 0 )
  {
    *(_DWORD *)(v3 + 32) = v17;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOverlapAddBuffer failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x400000u;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80000000;
  }
  else
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBufferValid failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x2000u;
  *(_DWORD *)v3 &= ~0x100000u;
  *((_DWORD *)v1.x360_xma + 27) |= 0x10u;
  *(_DWORD *)v3 &= ~0x200000u;
  *((_DWORD *)v1.x360_xma + 27) |= 0x20u;
  *(_DWORD *)v3 &= 0xFFF00FFF;
  *((_DWORD *)v1.x360_xma + 27) |= 4u;
  v18 = *v2;
  v19 = ((unsigned int)*v2 >> 19) & 0x1F00;
  v20 = (v2[9] & 0x1F) << 8;
  if ( v20 <= v19 )
  {
    if ( v20 >= v19 )
    {
      v22 = (v18 >> 14) & 0x1F00;
      v21 = 0;
      if ( v2[1] >= 0 )
        v21 = v22;
    }
    else
    {
      v21 = v19 - v20;
    }
  }
  else
  {
    v21 = v19 + ((v18 >> 14) & 0x1F00) - v20;
  }
  v23 = (v21 + v20) % 0x1F00;
  if ( (_BYTE)v23 )
  {
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBufferReadOffset failed\n");
    LODWORD(v24) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
  else
  {
    *(_DWORD *)(v3 + 36) &= 0xFFFFFFE0;
    *(_DWORD *)(v3 + 36) |= (v23 >> 8) & 0x1F;
  }
  *((_DWORD *)v1.x360_xma + 27) |= 0x800000u;
  if ( *(_BYTE *)v1.x360_xma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 570, ASSERT_TYPE_ASSERT, "(!xma->inUse)", (const char *)&queryFormat, "!xma->inUse") )
    __debugbreak();
  if ( !*((_BYTE *)v1.x360_xma + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 571, ASSERT_TYPE_ASSERT, "(xma->needsInit)", (const char *)&queryFormat, "xma->needsInit") )
    __debugbreak();
  if ( !*((_QWORD *)v1.x360_xma + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 572, ASSERT_TYPE_ASSERT, "(xma->acpContext)", (const char *)&queryFormat, "xma->acpContext") )
    __debugbreak();
  if ( !*((_QWORD *)v1.x360_xma + 15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 573, ASSERT_TYPE_ASSERT, "(xma->acpBuffers)", (const char *)&queryFormat, "xma->acpBuffers") )
    __debugbreak();
  if ( *((_DWORD *)v1.x360_xma + 33) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 574, ASSERT_TYPE_ASSERT, "(xma->channelCount <= 2)", (const char *)&queryFormat, "xma->channelCount <= 2") )
    __debugbreak();
  ++*((_DWORD *)v1.x360_xma + 578);
  *((_QWORD *)v1.x360_xma + 17) = 0i64;
  *((_BYTE *)v1.x360_xma + 2316) = 0;
  *((_BYTE *)v1.x360_xma + 1) = 0;
}

/*
==============
SD_DecoderInitAcpXma
==============
*/
void SD_DecoderInitAcpXma(void)
{
  unsigned int ShapeContexts_0; 
  int v1; 
  unsigned int v2; 
  unsigned int v3; 
  sd_decoder_acp_xma_acp_buffers **p_acpBuffers; 
  unsigned int v5; 
  sd_decoder_instance *p_instance; 
  __int64 v7; 
  SHAPE_XMA_CONTEXT *v8; 
  sd_decoder_acp_xma_acp_buffers *v9; 
  sd_decoder_acp_xma_acp_buffers *v10; 
  sd_decoder_acp_xma_acp_buffers *v11; 
  __int64 v12; 
  __int64 output; 
  __int64 overlap; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int i; 
  int v19; 
  char v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25[4]; 
  __int64 v26[8]; 
  int v27[4]; 

  g_sd.acpXmaContexts.numXmaContexts = 113;
  ShapeContexts_0 = AcpHalAllocateShapeContexts_0(&g_sd.acpXmaContexts);
  v1 = ShapeContexts_0;
  if ( ShapeContexts_0 )
  {
    Com_PrintError(9, "hr = %x %s", ShapeContexts_0, "Unable to create ACP contexts for XMA decoding\n");
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v1) )
      __debugbreak();
  }
  memset_0(g_sd.acpXmaContexts.xmaContextArray, 0, 0x1C40ui64);
  v2 = ApuAlloc_0(&g_sd.acpXmaAcpBuffers, 0i64, 5091328i64, 2048i64, 1);
  v3 = v2;
  if ( v2 )
  {
    Com_PrintError(9, "hr = %x %s", v2, "Unable to allocate ACP buffer memory\n");
    LODWORD(v22) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
      __debugbreak();
  }
  memset_0(g_sd.acpXmaAcpBuffers, 0, 0x4DB000ui64);
  p_acpBuffers = &g_sd.acpXmaInstancePool[0].acpBuffers;
  v5 = 0;
  *(_QWORD *)&g_sd.acpMessage.type = 0i64;
  p_instance = &g_sd.acpXmaPool[0].instance;
  *(_OWORD *)&g_sd.acpMessage.usec = 0ui64;
  *(ACP_MESSAGE_ERROR *)((char *)&g_sd.acpMessage.error + 12) = 0i64;
  v7 = 0i64;
  *(_QWORD *)&g_sd.acpErrorMessage.droppedMessageCount = 0i64;
  g_sd.acpErrorMessage.12 = 0ui64;
  do
  {
    v8 = &g_sd.acpXmaContexts.xmaContextArray[v7];
    *(p_acpBuffers - 3) = (sd_decoder_acp_xma_acp_buffers *)&g_sd.acpXmaContexts.xmaContextArray[v7];
    p_instance->x360_xma = (struct sd_decoder_360_xma *)(p_acpBuffers - 15);
    v9 = &g_sd.acpXmaAcpBuffers[v5];
    *p_acpBuffers = v9;
    if ( !(unsigned int)ApuMapVirtualAddress_0(v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 949, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->input0))", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->input0)") )
      __debugbreak();
    if ( !(unsigned int)ApuMapVirtualAddress_0((*p_acpBuffers)->output) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 950, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->output))", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->output)") )
      __debugbreak();
    if ( !(unsigned int)ApuMapVirtualAddress_0((*p_acpBuffers)->overlap) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 951, ASSERT_TYPE_ASSERT, "(ApuMapVirtualAddress(xma->acpBuffers->overlap))", (const char *)&queryFormat, "ApuMapVirtualAddress(xma->acpBuffers->overlap)") )
      __debugbreak();
    v10 = *p_acpBuffers;
    if ( v8 && (!v10 || (unsigned __int8)ApuIsVirtualAddressValid_0(*p_acpBuffers, 2048i64)) )
    {
      v8->ptrRead0 = ApuMapVirtualAddress_0(v10);
    }
    else
    {
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaInputBuffer0 fail\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    v11 = *p_acpBuffers;
    if ( v8 && (!v11 || (unsigned __int8)ApuIsVirtualAddressValid_0(*p_acpBuffers, 2048i64)) )
    {
      v8->ptrRead1 = ApuMapVirtualAddress_0(v11);
    }
    else
    {
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaInputBuffer1 fail\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    if ( v8 )
    {
      v27[0] = 1;
      v12 = 0i64;
      v27[1] = 2;
      v27[2] = 4;
      v27[3] = 8;
      while ( v27[v12] != 4 )
      {
        if ( (unsigned __int64)++v12 >= 4 )
          goto LABEL_33;
      }
      *((_DWORD *)v8 + 1) &= 0xFF4FFFFF;
      *((_DWORD *)v8 + 1) |= 0x400000u;
    }
    else
    {
LABEL_33:
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaNumSubframesToDecode fail\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    if ( v8 && (output = (__int64)(*p_acpBuffers)->output, *p_acpBuffers != (sd_decoder_acp_xma_acp_buffers *)-32768i64) && (unsigned __int8)ApuIsVirtualAddressValid_0((*p_acpBuffers)->output, 64i64) )
    {
      v8->ptrWrite = ApuMapVirtualAddress_0(output);
    }
    else
    {
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBuffer fail\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    if ( v8 )
    {
      *(_DWORD *)v8 |= 0x7C00000u;
      overlap = (__int64)(*p_acpBuffers)->overlap;
      if ( *p_acpBuffers != (sd_decoder_acp_xma_acp_buffers *)-40704i64 && (unsigned __int8)ApuIsVirtualAddressValid_0((*p_acpBuffers)->overlap, 128i64) )
      {
        v8->ptrOverlapAdd = ApuMapVirtualAddress_0(overlap);
        goto LABEL_50;
      }
    }
    else
    {
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBufferSize fail\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOverlapAddBuffer fail\n");
    LODWORD(v22) = -2147024809;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
      __debugbreak();
LABEL_50:
    if ( v8 )
    {
      *((_DWORD *)v8 + 1) |= 0x80000000;
    }
    else
    {
      Com_PrintError(9, "hr = %x %s", 2147942487i64, "SetShapeXmaOutputBufferValid failed\n");
      LODWORD(v22) = -2147024809;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v22) )
        __debugbreak();
    }
    *((_DWORD *)p_acpBuffers - 3) = 0;
    *((_DWORD *)p_acpBuffers - 4) = v5;
    v15 = ApuMapVirtualAddress_0(&(*p_acpBuffers)->updateContext);
    *((_DWORD *)p_acpBuffers - 2) = v15;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 979, ASSERT_TYPE_ASSERT, "(cmd->contextData)", (const char *)&queryFormat, "cmd->contextData") )
      __debugbreak();
    ++v5;
    ++v7;
    p_acpBuffers += 304;
    p_instance += 560;
  }
  while ( v5 < 0x71 );
  AcpHalCreate_0(&g_sd.acpXmaHal);
  g_sd.acpXmaHal->Connect(g_sd.acpXmaHal, 4096u, 4096u);
  v25[0] = 209;
  v16 = g_sd.acpXmaHal->SubmitCommand(g_sd.acpXmaHal, ACP_COMMAND_TYPE_REGISTER_MESSAGE, 4110417920ui64, 0xFFFFFFFF, v25, 0);
  v17 = v16;
  if ( v16 )
  {
    Com_PrintError(9, "hr = %x %s", v16, "acpXmaHal->SubmitCommand fail\n");
    LODWORD(v23) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v23) )
      __debugbreak();
  }
  if ( ((unsigned __int8)&g_sd.pendingCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.pendingCommands) )
    __debugbreak();
  _InterlockedIncrement(&g_sd.pendingCommands);
  memset(v26, 0, sizeof(v26));
  for ( i = 0; i < 0x71; ++i )
  {
    v19 = i;
    v20 = i & 0x1F;
    *((_DWORD *)v26 + (v19 >> 5)) |= 1 << v20;
  }
  v21 = g_sd.acpXmaHal->SubmitCommand(g_sd.acpXmaHal, ACP_COMMAND_TYPE_ENABLE_XMA_CONTEXTS, 0i64, 0xFFFFFFFF, v26, 0);
  if ( ((unsigned __int64)&g_sd.pendingCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sd.pendingCommands) )
    __debugbreak();
  _InterlockedIncrement(&g_sd.pendingCommands);
  if ( v21 )
  {
    Com_PrintError(9, "hr = %x %s", v21, "acpXmaHal->SubmitCommand fail\n");
    LODWORD(v24) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 320, ASSERT_TYPE_ASSERT, "( ( hr == ((HRESULT)0L) ) )", "( hr ) = %08x", v24) )
      __debugbreak();
  }
}

/*
==============
SD_DecoderInstanceFrameAcpXma
==============
*/
char SD_DecoderInstanceFrameAcpXma(sd_decoder *decoder)
{
  signed __int64 v2; 
  sd_decoder_instance v3; 
  __int64 v4; 
  _DWORD *v5; 
  char result; 
  HRESULT v7; 
  unsigned int ShapeXmaOutputBufferNumBytesAvailable; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  const void *v14; 
  int v15; 
  HRESULT v16; 
  HRESULT v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  bool v22; 
  unsigned int v23; 
  char v24; 
  bool v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  sd_source *source; 
  unsigned int FileSize; 
  size_t v32; 
  sd_source *v33; 
  unsigned int v34; 
  _BYTE *v35; 
  int v36; 
  unsigned int v37; 
  unsigned __int8 *v38; 
  unsigned int v39; 
  unsigned __int64 v40; 
  int v41; 
  unsigned __int64 v42; 
  HRESULT v43; 
  unsigned int v44; 
  int v45; 
  __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  char v49; 
  int v50; 
  HRESULT v51; 
  __int64 v52; 
  HRESULT v53; 
  signed __int32 v54[8]; 
  char v55; 
  bool v56; 
  int v57; 
  size_t v58; 
  __int64 v59; 
  _DWORD *v60; 
  int v61[6]; 

  SD_DecoderUpdate(decoder);
  v55 = 0;
  v2 = decoder - g_sd.acpXmaPool;
  if ( (unsigned __int64)(v2 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v2, "signed", decoder - g_sd.acpXmaPool) )
    __debugbreak();
  v3.x360_xma = (struct sd_decoder_360_xma *)decoder->instance;
  v4 = *((_QWORD *)v3.x360_xma + 12);
  v5 = (_DWORD *)(*((_QWORD *)v3.x360_xma + 15) + 43008i64);
  v59 = v4;
  v60 = v5;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 595, ASSERT_TYPE_ASSERT, "(xma->acpContext)", (const char *)&queryFormat, "xma->acpContext") )
    __debugbreak();
  if ( *(_BYTE *)v3.x360_xma )
    return 0;
  if ( !decoder->source->stream )
  {
    if ( *((_QWORD *)v3.x360_xma + 2) )
    {
      SD_DecoderDump(decoder);
      Com_Printf(9, "invalid second buffer\n");
      if ( *((_QWORD *)v3.x360_xma + 2) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 610, ASSERT_TYPE_ASSERT, "(!xma->inputBuffer.inputBuffers[1])", (const char *)&queryFormat, "!xma->inputBuffer.inputBuffers[1]") )
          __debugbreak();
      }
    }
  }
  if ( *((_DWORD *)v3.x360_xma + 27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 613, ASSERT_TYPE_ASSERT, "(!xma->updateCommand.updateMask)", (const char *)&queryFormat, "!xma->updateCommand.updateMask") )
    __debugbreak();
  v7 = 0;
  if ( *((_BYTE *)v3.x360_xma + 1) )
  {
    SD_DecoderInit(decoder);
LABEL_50:
    v55 = 1;
    goto LABEL_51;
  }
  if ( !*((_DWORD *)v3.x360_xma + 34) )
  {
    ShapeXmaOutputBufferNumBytesAvailable = GetShapeXmaOutputBufferNumBytesAvailable((const SHAPE_XMA_CONTEXT *)v4);
    if ( ShapeXmaOutputBufferNumBytesAvailable > 0x800 )
      ShapeXmaOutputBufferNumBytesAvailable = 2048;
    v9 = ShapeXmaOutputBufferNumBytesAvailable & 0xFFFFFF00;
    if ( v9 )
    {
      *((_DWORD *)v3.x360_xma + 576) = 305419896;
      v57 = (*(_DWORD *)(v4 + 36) & 0x1F) << 8;
      v10 = (v57 + v9) % 0x1F00;
      if ( *((_DWORD *)v3.x360_xma + 577) > 0x400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 633, ASSERT_TYPE_ASSERT, "(xma->outputFrameSkip <= (256 * 4))", (const char *)&queryFormat, "xma->outputFrameSkip <= SD_ACP_XMA_DECODED_SAMPLE_COUNT") )
        __debugbreak();
      v11 = 2 * *((_DWORD *)v3.x360_xma + 577) * *((_DWORD *)v3.x360_xma + 33);
      if ( v11 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 635, ASSERT_TYPE_ASSERT, "(outputFrameSkipBytes <= bytesToRead)", (const char *)&queryFormat, "outputFrameSkipBytes <= bytesToRead") )
        __debugbreak();
      v12 = v9 - v11;
      if ( v11 > 0x1F00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 637, ASSERT_TYPE_ASSERT, "(outputFrameSkipBytes <= SHAPE_XMA_MAX_OUTPUT_BUFFER_SIZE)", (const char *)&queryFormat, "outputFrameSkipBytes <= SD_ACP_XMA_OUTPUT_BUFFER_SIZE") )
        __debugbreak();
      v13 = (v11 + v57) % 0x1F00;
      v14 = (const void *)(v13 + *((_QWORD *)v3.x360_xma + 15) + 0x8000);
      if ( (unsigned int)v13 + v12 > 0x1F00 )
      {
        v57 = 7936 - v13;
        v58 = (unsigned int)(7936 - v13);
        memcpy_0((char *)v3.x360_xma + 256, v14, v58);
        if ( *((_DWORD *)v3.x360_xma + 576) != 305419896 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 649, ASSERT_TYPE_ASSERT, "(xma->decodedMagic == 0x12345678)", (const char *)&queryFormat, "xma->decodedMagic == SD_DECODER_ACP_MAGIC") )
          __debugbreak();
        memcpy_0((char *)v3.x360_xma + 2 * (v58 >> 1) + 256, (const void *)(*((_QWORD *)v3.x360_xma + 15) + 0x8000i64), v12 - v57);
        if ( *((_DWORD *)v3.x360_xma + 576) == 305419896 )
          goto LABEL_42;
        v15 = 651;
      }
      else
      {
        memcpy_0((char *)v3.x360_xma + 256, v14, v12);
        if ( *((_DWORD *)v3.x360_xma + 576) == 305419896 )
        {
LABEL_42:
          *((_DWORD *)v3.x360_xma + 577) = 0;
          *((_DWORD *)v3.x360_xma + 35) = 0;
          _InterlockedOr(v54, 0);
          *((_DWORD *)v3.x360_xma + 34) = v12 >> 1;
          if ( v5 )
          {
            v16 = 0;
            v5[1] |= 0x80000000;
          }
          else
          {
            v16 = -2147024809;
          }
          SD_DecoderErrorAcpXma(v16, "SetShapeXmaOutputBufferValid failed\n");
          if ( !v5 || (_BYTE)v10 )
          {
            v17 = -2147024809;
          }
          else
          {
            v5[9] &= 0xFFFFFFE0;
            v17 = 0;
            v5[9] |= (v10 >> 8) & 0x1F;
          }
          SD_DecoderErrorAcpXma(v17, "SetShapeXmaOutputBufferReadOffset failed\n");
          *((_DWORD *)v3.x360_xma + 27) |= 0x802000u;
          v4 = v59;
          goto LABEL_50;
        }
        v15 = 643;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", v15, ASSERT_TYPE_ASSERT, "(xma->decodedMagic == 0x12345678)", (const char *)&queryFormat, "xma->decodedMagic == SD_DECODER_ACP_MAGIC") )
        __debugbreak();
      goto LABEL_42;
    }
  }
LABEL_51:
  v56 = *((_BYTE *)v3.x360_xma + 2317) && (*((_BYTE *)v3.x360_xma + 2318) || *((_BYTE *)v3.x360_xma + 2319));
  v18 = *(_DWORD *)v4;
  v19 = *(_DWORD *)(v4 + 12);
  v20 = *(_DWORD *)(v4 + 8);
  v21 = v18 >> 20;
  LOBYTE(v21) = v21 & 1;
  v22 = (v20 & 0x10000000) != 0;
  v23 = v19 >> 31;
  v57 = v21;
  if ( v20 < 0 )
  {
    v24 = 0;
    if ( (v20 & 0x20000000) != 0 )
    {
      Com_Printf(9, "SHAPE_XMA_ERROR_STATUS_FRAME_CROSSES_BOUNDARY_INTO_INVALID_READ_BUFFER_VALIDBUFFER_CURRBUF_IS_0 on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
      LOBYTE(v21) = v57;
      v24 = 1;
    }
    if ( (v20 & 0x40000000) != 0 )
    {
      Com_Printf(9, "SHAPE_XMA_ERROR_STATUS_FRAME_CROSSES_BOTH_READ_BUFFER_BOUNDARIES on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
LABEL_62:
      SD_DecoderDump(decoder);
      v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 687, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "xma error");
LABEL_78:
      if ( v25 )
        __debugbreak();
      *((_DWORD *)v3.x360_xma + 27) = 0;
      result = 0;
      *(_BYTE *)v3.x360_xma = 0;
      decoder->error = 1;
      return result;
    }
    if ( v24 )
      goto LABEL_62;
  }
  if ( (_BYTE)v23 )
  {
    switch ( (*(_DWORD *)(v59 + 12) >> 26) & 0x1F )
    {
      case 1:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_UNKNOWN_STATE on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 2:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_OUT_OF_RANGE on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 3:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_FRAME_SIZE_EXCEEDED on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 4:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_BITSTREAM_CORRUPTION on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 5:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_BARKVLC_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 6:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_BARKRLC_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 7:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_VLC4D_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 8:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_VLC2D_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 9:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_VLC1D_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 0xA:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_RLC0_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 0xB:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_RLC1_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      case 0xF:
        Com_Printf(9, "SHAPE_XMA_PARSER_ERROR_STATUS_LARGEVAL24_ERROR on context %u at frame %u\n", (unsigned int)v2, g_sd.acpXmaFrameNumber);
        break;
      default:
        break;
    }
    SD_DecoderDump(decoder);
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 698, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "xma parse error");
    goto LABEL_78;
  }
  if ( *((_QWORD *)v3.x360_xma + 1) && (v26 = *((_DWORD *)v3.x360_xma + 6) - *((_DWORD *)v3.x360_xma + 8)) != 0 && !(_BYTE)v21 )
  {
    v27 = truncate_cast<unsigned long,unsigned __int64>(*((_QWORD *)v3.x360_xma + 6));
    v28 = truncate_cast<unsigned long,unsigned __int64>(*((_QWORD *)v3.x360_xma + 8));
    *((_QWORD *)v3.x360_xma + 6) = 0i64;
    v29 = *((_QWORD *)v3.x360_xma + 10);
    *((_QWORD *)v3.x360_xma + 8) = 0i64;
    if ( v29 )
    {
      *((_QWORD *)v3.x360_xma + 5) = v29;
      *((_QWORD *)v3.x360_xma + 10) = 0i64;
    }
    if ( v27 )
    {
      if ( *((_BYTE *)decoder->instance.x360_xma + 2318) )
      {
        source = decoder->source;
        if ( !source->stream )
        {
          FileSize = SD_SourceGetFileSize(source);
          SD_DecoderBufferRead((sd_decoder_input_buffer *)((char *)v3.x360_xma + 8), v27, NULL, v56, FileSize);
          v26 -= v27;
        }
      }
    }
    if ( v26 <= 0x8000 )
    {
      if ( (int)v26 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 743, ASSERT_TYPE_ASSERT, "(toRead > 0)", (const char *)&queryFormat, "toRead > 0") )
        __debugbreak();
    }
    else
    {
      v26 = 0x8000;
    }
    v32 = *((_QWORD *)v3.x360_xma + 5);
    v33 = decoder->source;
    v58 = v32;
    v34 = SD_SourceGetFileSize(v33);
    SD_DecoderBufferRead((sd_decoder_input_buffer *)((char *)v3.x360_xma + 8), v26, *((unsigned __int8 **)v3.x360_xma + 15), v56, v34);
    v35 = (_BYTE *)*((_QWORD *)v3.x360_xma + 15);
    if ( (((unsigned __int8)v35[2] >> 3) | (32 * ((unsigned __int8)v35[1] | ((*v35 & 3) << 8))) || (v35[2] & 7) != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_decode_acp_xma.cpp", 761, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad XMA packet submission.  Asset: %s Position: %d", decoder->source->alias->assetFileName, v32) )
      __debugbreak();
    v36 = 0;
    v37 = 32;
    if ( !v58 )
      v36 = 3;
    if ( v28 )
    {
      v38 = (unsigned __int8 *)*((_QWORD *)v3.x360_xma + 15);
      v39 = v28 >> 9;
      v40 = (unsigned __int64)&v38[v26];
      v41 = 0;
      v42 = (unsigned __int64)v38;
      if ( (unsigned __int64)(v38 + 2048) > v40 )
        goto LABEL_105;
      while ( v41 + (*(unsigned __int8 *)v42 >> 2) <= v39 )
      {
        v41 += *(unsigned __int8 *)v42 >> 2;
        v42 += ((unsigned __int64)*(unsigned __int8 *)(v42 + 3) << 11) + 2048;
        if ( v42 + 2048 > v40 )
          goto LABEL_105;
      }
      v44 = ((*(unsigned __int8 *)(v42 + 2) >> 3) | (32 * (*(unsigned __int8 *)(v42 + 1) | ((*(_BYTE *)v42 & 3) << 8)))) + 32;
      v45 = v39 - v41;
      if ( v45 )
      {
        do
        {
          v46 = v44 >> 3;
          --v45;
          v47 = v44 & 7;
          v48 = *(unsigned __int8 *)((unsigned int)(v46 + 1) + v42) | (*(unsigned __int8 *)(v46 + v42) << 8);
          if ( v47 >= 2 )
          {
            v50 = *(unsigned __int8 *)((unsigned int)(v46 + 2) + v42);
            v49 = 9;
            v48 = v50 | (v48 << 8);
          }
          else
          {
            v49 = 1;
          }
          v44 += (v48 >> (v49 - v47)) & 0x7FFF;
        }
        while ( v45 );
        v5 = v60;
      }
      v42 = (unsigned int)(v42 - *((_DWORD *)v3.x360_xma + 30));
      if ( v44 + 8 * (_DWORD)v42 )
      {
        v37 = v44 + 8 * v42;
        v36 = (v28 >> 7) & 3;
      }
      else
      {
LABEL_105:
        Com_PrintError(9, "Resident stream is too small to properly seek - needs code fix\n", v42);
      }
      *((_DWORD *)v3.x360_xma + 577) = v28 & 0x7F;
    }
    if ( v5 && v37 <= 0x3FFFFFF )
    {
      v5[2] &= 0xFC000000;
      v5[2] |= v37 & 0x3FFFFFF;
      v43 = 0;
    }
    else
    {
      v43 = -2147024809;
    }
    SD_DecoderErrorAcpXma(v43, "SetShapeXmaInputBufferReadOffset failed\n");
    if ( v5 )
    {
      v61[0] = 0;
      v52 = 0i64;
      v61[1] = 1;
      v61[2] = 2;
      v61[3] = 3;
      v61[4] = 4;
      while ( v36 != v61[v52] )
      {
        if ( (unsigned __int64)++v52 >= 5 )
        {
          v51 = -2147024809;
          goto LABEL_126;
        }
      }
      v5[1] &= 0xF8FFFFFF;
      v51 = 0;
      v5[1] |= v36 << 24;
    }
    else
    {
      v51 = -2147024809;
    }
LABEL_126:
    SD_DecoderErrorAcpXma(v51, "SetShapeXmaNumSubframesToSkip failed\n");
    if ( v5 )
    {
      v5[4] &= ~0x80000000;
      v53 = 0;
    }
    else
    {
      v53 = -2147024809;
    }
    SD_DecoderErrorAcpXma(v53, "SetShapeXmaCurrentInputBuffer failed\n");
    *v5 |= 0x100000u;
    SD_DecoderErrorAcpXma(0, "SetShapeXmaInputBuffer0Valid failed\n");
    if ( (v26 & 0x7FF) != 0 )
    {
      v7 = -2147024809;
    }
    else
    {
      *v5 &= 0xFFFFF000;
      *v5 |= (v26 >> 11) & 0xFFF;
    }
    SD_DecoderErrorAcpXma(v7, "SetShapeXmaInputBuffer0Size failed\n");
    *((_DWORD *)v3.x360_xma + 27) |= 0x44411u;
    result = 1;
    v22 = 0;
  }
  else
  {
    result = v55;
  }
  *((_BYTE *)v3.x360_xma + 2316) = v22;
  return result;
}

/*
==============
SD_DecoderInterfaceInitAcpXma
==============
*/
void SD_DecoderInterfaceInitAcpXma(sd_decoder_interface *api)
{
  api->MixThreadInit = NULL;
  api->Init = SD_DecoderInitAcpXma;
  api->Shutdown = SD_DecoderShutdownAcpXma;
  api->Lock = SD_DecoderLockAcpXma;
  api->Unlock = SD_DecoderUnlockAcpXma;
  api->QueryAvailableData = SD_DecoderQueryAvailableDataAcpXma;
  api->BufferComplete = SD_DecoderBufferCompleteAcpXma;
  api->BufferReady = SD_DecoderBufferReadyAcpXma;
  api->BufferSubmit = SD_DecoderBufferSubmitAcpXma;
  api->Consume = SD_DecoderConsumeAcpXma;
  api->Free = SD_DecoderFreeAcpXma;
  api->Create = SD_DecoderCreateAcpXma;
  api->Seek = SD_DecoderSeekAcpXma;
  api->DecodeFrameCount = SD_DecoderFrameCountAcpXma;
  api->ThreadUpdate = SD_DecoderThreadUpdateAcpXma;
  api->Frame = SD_DecoderFrameAcpXma;
}

/*
==============
SD_DecoderLockAcpXma
==============
*/
void SD_DecoderLockAcpXma(sd_decoder *decoder)
{
  ;
}

/*
==============
SD_DecoderQueryAvailableDataAcpXma
==============
*/
__int64 SD_DecoderQueryAvailableDataAcpXma(sd_decoder *decoder, unsigned int desiredFrames)
{
  return (unsigned int)(*((_DWORD *)decoder->instance.x360_xma + 34) / *((_DWORD *)decoder->instance.x360_xma + 33));
}

/*
==============
SD_DecoderSeekAcpXma
==============
*/
void SD_DecoderSeekAcpXma(sd_decoder *decoder, const unsigned __int8 *seekTable, const __int64 seekTableSize, const __int64 frameCount, const __int64 startFrame, __int64 *outDecodePos, __int64 *outFrameSkip)
{
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 

  if ( seekTableSize > 0 && (v10 = (truncate_cast<unsigned long,__int64>(startFrame) & 0xFFFFFFF8) + 384, v11 = truncate_cast<unsigned long,__int64>(seekTableSize) >> 2, v12 = 0, v13 = 0, v11) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)seekTable;
      if ( *(_DWORD *)seekTable > v10 )
        break;
      ++v13;
      seekTable += 4;
      v12 = v14;
      if ( v13 >= v11 )
        goto LABEL_5;
    }
    *outDecodePos = (v13 * *((unsigned __int16 *)decoder->instance.x360_xma + 1162)) << 10;
    *outFrameSkip = v10 - v12;
  }
  else
  {
LABEL_5:
    *outDecodePos = 0i64;
    *outFrameSkip = 0i64;
  }
}

/*
==============
SD_DecoderShutdownAcpXma
==============
*/
void SD_DecoderShutdownAcpXma(void)
{
  ;
}

/*
==============
SD_DecoderThreadUpdateAcpXma
==============
*/
void SD_DecoderThreadUpdateAcpXma(void)
{
  ;
}

/*
==============
SD_DecoderUnlockAcpXma
==============
*/
void SD_DecoderUnlockAcpXma(sd_decoder *decoder)
{
  ;
}

/*
==============
SD_PrintAcpMessage
==============
*/
void SD_PrintAcpMessage(const ACP_MESSAGE *message)
{
  unsigned int reason; 
  const char *v2; 

  switch ( message->type )
  {
    case 1u:
      Com_Printf(9, "ACP: AUDIO_FRAME_START: audio frame = %u\n", message->audioFrameStart.audioFrame);
      break;
    case 2u:
      Com_Printf(9, "ACP: FLOWGRAPH_COMPLETED: flowgraph = 0x%p\n", (const void *)message->audioFrameStart.audioFrame);
      break;
    case 4u:
      Com_Printf(9, "ACP: SRC_BLOCKED: context = %u - ", message->audioFrameStart.audioFrame);
      break;
    case 8u:
      Com_Printf(9, "ACP: DMA_BLOCKED: context = %u - ", message->audioFrameStart.audioFrame);
      break;
    case 0x10u:
      Com_Printf(9, "ACP: COMMAND_COMPLETED: audioframe = %u, command = %u\n", message->commandCompleted.audioFrame, message->commandCompleted.commandId);
      break;
    case 0x20u:
      reason = message->flowgraphTerminated.reason;
      if ( reason )
      {
        if ( reason == 1 )
        {
          v2 = "ACP_FLOWGRAPH_TERMINATED_TIME_EXCEEDED";
        }
        else
        {
          v2 = "UNKNOWN";
          if ( reason == 2 )
            v2 = "ACP_FLOWGRAPH_TERMINATED_DISCONNECT";
        }
      }
      else
      {
        v2 = "ACP_FLOWGRAPH_TERMINATED_REASON_INVALID_GRAPH";
      }
      Com_Printf(9, "ACP: FLOWGRAPH_TERMINATED: Completed = %u, reason = %s\n", message->shapeCommandBlocked.flowgraph, v2);
      break;
    case 0x40u:
      Com_Printf(9, "MESSAGE: ERROR: errorCode = 0x%08X, additionalData = 0x%08X\n", message->audioFrameStart.audioFrame, message->shapeCommandBlocked.flowgraph);
      break;
    case 0x80u:
      Com_Printf(9, "MESSAGE: DISCONNECTED\n");
      break;
    default:
      Com_Printf(9, "MESSAGE: *** ERROR: UNKNWON MESSAGE ***\n");
      break;
  }
}

