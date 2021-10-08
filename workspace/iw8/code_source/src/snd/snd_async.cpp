/*
==============
SND_ProcessSNDQueue
==============
*/

void SND_ProcessSNDQueue(void)
{
  ?SND_ProcessSNDQueue@@YAXXZ();
}

/*
==============
SND_ProcessCLQueue
==============
*/

void SND_ProcessCLQueue(void)
{
  ?SND_ProcessCLQueue@@YAXXZ();
}

/*
==============
SND_AsyncInit
==============
*/

void SND_AsyncInit(void)
{
  ?SND_AsyncInit@@YAXXZ();
}

/*
==============
SND_AsyncInit
==============
*/
void SND_AsyncInit(void)
{
  SND_QueueBuffersInit(&g_snd.queueBuffers);
  SND_QueueInit(&g_snd.CGQ, &g_snd.queueBuffers);
  SND_QueueInit(&g_snd.SNDQ, &g_snd.queueBuffers);
  g_snd.command_process_flag = 1;
}

/*
==============
SND_BufferSND
==============
*/
void SND_BufferSND(SndCommandBuffer *buffer)
{
  int used; 
  int v3; 
  int i; 
  __int64 v5; 
  int v6; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 98, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  used = buffer->used;
  v3 = 0;
  for ( i = 0; v3 < used; v3 = *(unsigned __int16 *)&buffer->data[v5 + 6] + v6 )
  {
    v5 = v3;
    v6 = v3 + 8;
    if ( v6 + *(unsigned __int16 *)&buffer->data[v5 + 6] > used && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 109, ASSERT_TYPE_ASSERT, "(offset + header->size <= buffer->used)", (const char *)&queryFormat, "offset + header->size <= buffer->used") )
      __debugbreak();
    if ( *(unsigned __int16 *)&buffer->data[v5] != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 110, ASSERT_TYPE_ASSERT, "(header->sequence == sequence)", (const char *)&queryFormat, "header->sequence == sequence") )
      __debugbreak();
    ++i;
    if ( *(_WORD *)&buffer->data[v5 + 2] != 5433 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 113, ASSERT_TYPE_ASSERT, "(header->magic == 0x1539)", (const char *)&queryFormat, "header->magic == SND_QUEUE_MAGIC") )
      __debugbreak();
    if ( SND_CommandSize((SndCommandType)*(unsigned __int16 *)&buffer->data[v5 + 4]) != *(unsigned __int16 *)&buffer->data[v5 + 6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 115, ASSERT_TYPE_ASSERT, "(SND_CommandSize((SndCommandType)(header->command)) == header->size)", (const char *)&queryFormat, "SND_CommandSize((SndCommandType)(header->command)) == header->size") )
      __debugbreak();
    if ( SND_GetProcessCommandFlag() && *(_WORD *)&buffer->data[v5 + 4] )
    {
      switch ( *(_WORD *)&buffer->data[v5 + 4] )
      {
        case 1:
          SNDL_AddBank(*(const SndBank **)&buffer->data[v5 + 8], buffer->data[v5 + 16]);
          break;
        case 2:
          SNDL_RemoveBank(*(const SndBank **)&buffer->data[v5 + 8], buffer->data[v5 + 16]);
          break;
        case 4:
          SNDL_Shutdown();
          break;
        default:
          Com_PrintError(9, "SOUND invalid SND command %d", *(unsigned __int16 *)&buffer->data[v5 + 4]);
          break;
      }
    }
    used = buffer->used;
  }
  if ( v3 != used && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_async.cpp", 125, ASSERT_TYPE_ASSERT, "(offset == buffer->used)", (const char *)&queryFormat, "offset == buffer->used") )
    __debugbreak();
  SND_QueuePutFreeBuffer(buffer->buffers, buffer);
}

/*
==============
SND_ProcessCLQueue
==============
*/
void SND_ProcessCLQueue(void)
{
  ;
}

/*
==============
SND_ProcessSNDQueue
==============
*/
void SND_ProcessSNDQueue(void)
{
  SndCommandBuffer *i; 
  SndCommandBuffer *j; 

  for ( i = SND_QueueGetProcessBuffer(&g_snd.SNDQ); i; i = SND_QueueGetProcessBuffer(&g_snd.SNDQ) )
    SND_BufferSND(i);
  SND_QueueFlush(&g_snd.SNDQ, 1);
  for ( j = SND_QueueGetProcessBuffer(&g_snd.SNDQ); j; j = SND_QueueGetProcessBuffer(&g_snd.SNDQ) )
    SND_BufferSND(j);
}

