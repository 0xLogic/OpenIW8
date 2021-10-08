/*
==============
SND_QueueInit
==============
*/

void __fastcall SND_QueueInit(SndQueue *queue, SndQueueBuffers *buffers)
{
  ?SND_QueueInit@@YAXPEAUSndQueue@@PEAUSndQueueBuffers@@@Z(queue, buffers);
}

/*
==============
SND_QueueFlush
==============
*/

void __fastcall SND_QueueFlush(SndQueue *queue, bool shouldLockMutex)
{
  ?SND_QueueFlush@@YAXPEAUSndQueue@@_N@Z(queue, shouldLockMutex);
}

/*
==============
SND_QueueAdd
==============
*/

void __fastcall SND_QueueAdd(SndQueue *queue, int cmd, int size, const void *data)
{
  ?SND_QueueAdd@@YAXPEAUSndQueue@@HHPEBX@Z(queue, cmd, size, data);
}

/*
==============
SND_QueuePutFreeBuffer
==============
*/

SndCommandBuffer *__fastcall SND_QueuePutFreeBuffer(SndQueueBuffers *buffers, SndCommandBuffer *buffer)
{
  return ?SND_QueuePutFreeBuffer@@YAPEAUSndCommandBuffer@@PEAUSndQueueBuffers@@PEAU1@@Z(buffers, buffer);
}

/*
==============
SND_QueueBuffersInit
==============
*/

void __fastcall SND_QueueBuffersInit(SndQueueBuffers *buffers)
{
  ?SND_QueueBuffersInit@@YAXPEAUSndQueueBuffers@@@Z(buffers);
}

/*
==============
SND_QueueGetProcessBuffer
==============
*/

SndCommandBuffer *__fastcall SND_QueueGetProcessBuffer(SndQueue *q)
{
  return ?SND_QueueGetProcessBuffer@@YAPEAUSndCommandBuffer@@PEAUSndQueue@@@Z(q);
}

/*
==============
SND_QueueAdd
==============
*/
void SND_QueueAdd(SndQueue *queue, int cmd, int size, const void *data)
{
  size_t v5; 
  __int16 v7; 
  int i; 
  char v9; 
  SndCommandBuffer *active; 
  SndCommandBuffer *v11; 
  int used; 
  void (__fastcall *processNotify)(SndQueue *); 
  SndQueueBuffers *buffers; 
  SndCommandBuffer *freeList; 
  __int64 v16; 

  v5 = size;
  v7 = cmd;
  if ( !queue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 192, ASSERT_TYPE_ASSERT, "(queue)", (const char *)&queryFormat, "queue") )
    __debugbreak();
  for ( i = 0; i < 100; ++i )
  {
    if ( !queue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 161, ASSERT_TYPE_ASSERT, "(queue)", (const char *)&queryFormat, "queue") )
      __debugbreak();
    v9 = 0;
    LockMutex(queue->mutex);
    active = queue->active;
    v11 = active;
    if ( active )
    {
      used = active->used;
      if ( (unsigned __int64)(used + (int)v5 + 8i64) > 0x2000 )
      {
        if ( used )
        {
          active->next = queue->submitted;
          queue->submitted = queue->active;
          processNotify = queue->processNotify;
          queue->active = NULL;
          if ( processNotify )
            processNotify(queue);
        }
        queue->active = NULL;
        v11 = NULL;
      }
    }
    if ( v11 )
      goto LABEL_21;
    buffers = queue->buffers;
    if ( !buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 51, ASSERT_TYPE_ASSERT, "(buffers)", (const char *)&queryFormat, "buffers") )
      __debugbreak();
    freeList = buffers->freeList;
    v11 = NULL;
    if ( freeList )
    {
      v11 = buffers->freeList;
      buffers->freeList = freeList->next;
      v11->next = NULL;
      memset_0(v11->data, 858993459, sizeof(v11->data));
    }
    queue->active = v11;
    if ( v11 )
    {
LABEL_21:
      SND_ErrorIfSoundGlobalsTrashed();
      if ( (unsigned __int64)((int)v5 + v11->used + 8i64) > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 111, ASSERT_TYPE_ASSERT, "(buffer->used+size+sizeof(SndCommandHeader) <= (8*1024))", (const char *)&queryFormat, "buffer->used+size+sizeof(SndCommandHeader) <= SND_COMMAND_BUFFER_SIZE") )
        __debugbreak();
      if ( (int)v5 % 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 112, ASSERT_TYPE_ASSERT, "(size%4==0)", (const char *)&queryFormat, "size%4==0") )
        __debugbreak();
      v16 = v11->used;
      v11->used = v16 + 8;
      *(_WORD *)&v11->data[v16] = v11->sequence;
      ++v11->sequence;
      *(_WORD *)&v11->data[v16 + 2] = 5433;
      *(_WORD *)&v11->data[v16 + 4] = v7;
      *(_WORD *)&v11->data[v16 + 6] = v5;
      memcpy_0(&v11->data[v11->used], data, v5);
      v11->used += v5;
      v9 = 1;
    }
    UnlockMutex(queue->mutex);
    if ( v9 )
      break;
    Sys_Sleep(1);
    Com_PrintWarning(9, "SOUND: out of command buffer space\n");
  }
}

/*
==============
SND_QueueBuffersInit
==============
*/
void SND_QueueBuffersInit(SndQueueBuffers *buffers)
{
  void *v2; 
  int v3; 
  SndQueueBuffers **p_buffers; 
  char *v5; 
  char *v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 

  memset_0(buffers, 0, sizeof(SndQueueBuffers));
  v2 = NewMutex();
  buffers->mutex = v2;
  LockMutex(v2);
  v3 = 2;
  p_buffers = &buffers->buffers[1].buffers;
  do
  {
    *(p_buffers - 1029) = (SndQueueBuffers *)buffers->freeList;
    v5 = (char *)buffers + 8224 * v3 - 16448;
    buffers->freeList = (SndCommandBuffer *)(v5 + 8);
    *(p_buffers - 1028) = buffers;
    memset_0(v5 + 40, 286331153, 0x2000ui64);
    *(p_buffers - 1) = (SndQueueBuffers *)buffers->freeList;
    v6 = (char *)buffers + 8224 * v3 - 8224;
    buffers->freeList = (SndCommandBuffer *)(v6 + 8);
    *p_buffers = buffers;
    memset_0(v6 + 40, 286331153, 0x2000ui64);
    p_buffers[1027] = (SndQueueBuffers *)buffers->freeList;
    v7 = v3;
    buffers->freeList = &buffers->buffers[v7];
    p_buffers[1028] = buffers;
    memset_0(buffers->buffers[v7].data, 286331153, sizeof(buffers->buffers[v7].data));
    p_buffers[2055] = (SndQueueBuffers *)buffers->freeList;
    v8 = &buffers->buffers[v3].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v8 + 8);
    p_buffers[2056] = buffers;
    memset_0(v8 + 40, 286331153, 0x2000ui64);
    p_buffers[3083] = (SndQueueBuffers *)buffers->freeList;
    v9 = &buffers->buffers[v3 + 1].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v9 + 8);
    p_buffers[3084] = buffers;
    memset_0(v9 + 40, 286331153, 0x2000ui64);
    p_buffers[4111] = (SndQueueBuffers *)buffers->freeList;
    v10 = &buffers->buffers[v3 + 2].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v10 + 8);
    p_buffers[4112] = buffers;
    memset_0(v10 + 40, 286331153, 0x2000ui64);
    p_buffers[5139] = (SndQueueBuffers *)buffers->freeList;
    v11 = &buffers->buffers[v3 + 3].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v11 + 8);
    p_buffers[5140] = buffers;
    memset_0(v11 + 40, 286331153, 0x2000ui64);
    p_buffers[6167] = (SndQueueBuffers *)buffers->freeList;
    v12 = &buffers->buffers[v3 + 4].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v12 + 8);
    p_buffers[6168] = buffers;
    memset_0(v12 + 40, 286331153, 0x2000ui64);
    p_buffers[7195] = (SndQueueBuffers *)buffers->freeList;
    v13 = v3 + 6;
    buffers->freeList = &buffers->buffers[v13];
    p_buffers[7196] = buffers;
    memset_0(buffers->buffers[v13].data, 286331153, sizeof(buffers->buffers[v13].data));
    p_buffers[8223] = (SndQueueBuffers *)buffers->freeList;
    v14 = &buffers->buffers[v3 + 6].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v14 + 8);
    p_buffers[8224] = buffers;
    memset_0(v14 + 40, 286331153, 0x2000ui64);
    p_buffers[9251] = (SndQueueBuffers *)buffers->freeList;
    v15 = &buffers->buffers[v3 + 7].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v15 + 8);
    p_buffers[9252] = buffers;
    memset_0(v15 + 40, 286331153, 0x2000ui64);
    p_buffers[10279] = (SndQueueBuffers *)buffers->freeList;
    v16 = &buffers->buffers[v3 + 8].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v16 + 8);
    p_buffers[10280] = buffers;
    memset_0(v16 + 40, 286331153, 0x2000ui64);
    p_buffers[11307] = (SndQueueBuffers *)buffers->freeList;
    v17 = &buffers->buffers[v3 + 9].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v17 + 8);
    p_buffers[11308] = buffers;
    memset_0(v17 + 40, 286331153, 0x2000ui64);
    p_buffers[12335] = (SndQueueBuffers *)buffers->freeList;
    v18 = &buffers->buffers[v3 + 10].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v18 + 8);
    p_buffers[12336] = buffers;
    memset_0(v18 + 40, 286331153, 0x2000ui64);
    p_buffers[13363] = (SndQueueBuffers *)buffers->freeList;
    v19 = &buffers->buffers[v3 + 11].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v19 + 8);
    p_buffers[13364] = buffers;
    memset_0(v19 + 40, 286331153, 0x2000ui64);
    p_buffers[14391] = (SndQueueBuffers *)buffers->freeList;
    v20 = &buffers->buffers[v3 + 12].data[8184];
    buffers->freeList = (SndCommandBuffer *)(v20 + 8);
    p_buffers[14392] = buffers;
    memset_0(v20 + 40, 286331153, 0x2000ui64);
    v3 += 16;
    p_buffers += 16448;
  }
  while ( v3 - 2 < 128 );
  UnlockMutex(buffers->mutex);
}

/*
==============
SND_QueueFlush
==============
*/
void SND_QueueFlush(SndQueue *queue, bool shouldLockMutex)
{
  char v4; 
  SndCommandBuffer *active; 
  void (__fastcall *processNotify)(SndQueue *); 

  if ( !queue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 129, ASSERT_TYPE_ASSERT, "(queue)", (const char *)&queryFormat, "queue") )
    __debugbreak();
  v4 = 0;
  if ( shouldLockMutex )
    LockMutex(queue->mutex);
  active = queue->active;
  if ( active && active->used )
  {
    v4 = 1;
    active->next = queue->submitted;
    queue->submitted = queue->active;
    queue->active = NULL;
  }
  if ( shouldLockMutex )
    UnlockMutex(queue->mutex);
  if ( v4 )
  {
    processNotify = queue->processNotify;
    if ( processNotify )
      processNotify(queue);
  }
}

/*
==============
SND_QueueGetProcessBuffer
==============
*/
SndCommandBuffer *SND_QueueGetProcessBuffer(SndQueue *q)
{
  SndCommandBuffer *submitted; 
  SndCommandBuffer **p_submitted; 

  LockMutex(q->mutex);
  submitted = q->submitted;
  p_submitted = &q->submitted;
  if ( submitted )
  {
    while ( submitted->next )
    {
      p_submitted = &submitted->next;
      submitted = submitted->next;
    }
    if ( submitted )
      *p_submitted = NULL;
  }
  UnlockMutex(q->mutex);
  return submitted;
}

/*
==============
SND_QueueInit
==============
*/
void SND_QueueInit(SndQueue *queue, SndQueueBuffers *buffers)
{
  void *v4; 
  void *mutex; 

  queue->mutex = NULL;
  queue->active = NULL;
  queue->submitted = NULL;
  queue->buffers = NULL;
  queue->processNotify = NULL;
  v4 = NewMutex();
  queue->mutex = v4;
  LockMutex(v4);
  mutex = queue->mutex;
  queue->buffers = buffers;
  UnlockMutex(mutex);
  SND_QueueAdd(queue, 0, 0, NULL);
}

/*
==============
SND_QueuePutFreeBuffer
==============
*/
SndCommandBuffer *SND_QueuePutFreeBuffer(SndQueueBuffers *buffers, SndCommandBuffer *buffer)
{
  if ( !buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 85, ASSERT_TYPE_ASSERT, "(buffers)", (const char *)&queryFormat, "buffers") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_queue.cpp", 86, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  LockMutex(buffers->mutex);
  buffer->next = buffers->freeList;
  buffers->freeList = buffer;
  memset_0(buffer->data, 572662306, sizeof(buffer->data));
  *(_QWORD *)&buffer->sequence = 0i64;
  UnlockMutex(buffers->mutex);
  return buffer;
}

