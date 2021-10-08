/*
==============
DDL::DDL_Transfer_Shutdown
==============
*/

bool __fastcall DDL::DDL_Transfer_Shutdown(DDLTransferQueue *queue)
{
  return ?DDL_Transfer_Shutdown@DDL@@YA_NPEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL::GetHeader
==============
*/

DDL::DDLTransferHeader *__fastcall DDL::GetHeader(DDLTransferQueue *queue)
{
  return ?GetHeader@DDL@@YAPEAUDDLTransferHeader@1@PEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL::DDL_Transfer_Enqueue
==============
*/

bool __fastcall DDL::DDL_Transfer_Enqueue(DDLTransferQueue *queue, const DDLState *state, const DDLContext *context)
{
  return ?DDL_Transfer_Enqueue@DDL@@YA_NPEAUDDLTransferQueue@@PEBUDDLState@@PEBUDDLContext@@@Z(queue, state, context);
}

/*
==============
DDL::DDL_Transfer_Serialize
==============
*/

unsigned __int8 *__fastcall DDL::DDL_Transfer_Serialize(DDLTransferQueue *queue, void *userData, unsigned int userDataSize, unsigned __int64 *outSize)
{
  return ?DDL_Transfer_Serialize@DDL@@YAPEAEPEAUDDLTransferQueue@@PEAXIPEA_K@Z(queue, userData, userDataSize, outSize);
}

/*
==============
DDL::DDL_Transfer_Deserialize
==============
*/

bool __fastcall DDL::DDL_Transfer_Deserialize(const unsigned __int8 *buffer, const unsigned __int64 len, DDLContext *ddlContext, void *outHeader)
{
  return ?DDL_Transfer_Deserialize@DDL@@YA_NPEBE_KPEAUDDLContext@@PEAX@Z(buffer, len, ddlContext, outHeader);
}

/*
==============
DDL::DDL_Transfer_Clear
==============
*/

void __fastcall DDL::DDL_Transfer_Clear(DDLTransferQueue *queue)
{
  ?DDL_Transfer_Clear@DDL@@YAXPEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL::IsInitialized
==============
*/

bool __fastcall DDL::IsInitialized(DDLTransferQueue *queue)
{
  return ?IsInitialized@DDL@@YA_NPEAUDDLTransferQueue@@@Z(queue);
}

/*
==============
DDL::DDL_Transfer_InitQueue
==============
*/

bool __fastcall DDL::DDL_Transfer_InitQueue(DDLTransferQueue *queue, unsigned __int8 *buffer, unsigned int bufferSize, unsigned int userDataSize)
{
  return ?DDL_Transfer_InitQueue@DDL@@YA_NPEAUDDLTransferQueue@@PEAEII@Z(queue, buffer, bufferSize, userDataSize);
}

/*
==============
DDL::DDL_Transfer_Clear
==============
*/
void DDL::DDL_Transfer_Clear(DDLTransferQueue *queue)
{
  if ( queue->initialized )
  {
    *((_QWORD *)queue->buffer + 1) = 0i64;
    queue->cursor = queue->head;
    queue->commandCount = 0;
  }
}

/*
==============
DDL::DDL_Transfer_Deserialize
==============
*/
char DDL::DDL_Transfer_Deserialize(const unsigned __int8 *buffer, const unsigned __int64 len, DDLContext *ddlContext, void *outHeader)
{
  __int64 v7; 
  const unsigned __int8 *v8; 
  int v9; 
  unsigned __int64 v10; 
  int v11; 
  const unsigned __int8 *v12; 
  int v13; 
  int v14; 

  if ( buffer )
  {
    LOWORD(v7) = *((_WORD *)buffer + 2);
    v8 = buffer + 16;
    if ( (_WORD)v7 )
    {
      memcpy_0(outHeader, buffer + 16, (unsigned __int16)v7);
      v7 = *((unsigned __int16 *)buffer + 2);
      v8 += v7;
    }
    v9 = 0;
    v10 = len - (unsigned __int16)v7 - 16;
    if ( !v10 )
      return 1;
    while ( (unsigned int)++v9 <= *((_DWORD *)buffer + 3) )
    {
      v11 = *((unsigned __int16 *)v8 + 2);
      v12 = v8 + 8;
      v13 = *(_DWORD *)v8;
      v10 -= 8i64;
      if ( *((_WORD *)v8 + 2) )
      {
        do
        {
          v14 = 8;
          if ( v11 <= 8 )
            v14 = v11;
          if ( !DDL_SetBits(ddlContext, v13, v14, *(char *)v12) )
            return 0;
          ++v12;
          v11 -= 8;
          v13 += 8;
          --v10;
        }
        while ( v11 > 0 );
      }
      if ( !v10 )
        v12 = v8;
      v8 = v12;
      if ( !v10 )
        return 1;
    }
  }
  return 0;
}

/*
==============
DDL::DDL_Transfer_Enqueue
==============
*/
char DDL::DDL_Transfer_Enqueue(DDLTransferQueue *queue, const DDLState *state, const DDLContext *context)
{
  int offset; 
  unsigned int commandCount; 
  unsigned int v7; 
  unsigned __int8 *head; 
  int v9; 
  int v10; 
  unsigned __int8 *buffer; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int8 *cursor; 
  _BYTE *i; 
  int v18; 

  if ( !queue->initialized || !state || !context )
    return 0;
  offset = state->offset;
  commandCount = queue->commandCount;
  v7 = state->member->bitSize / state->member->arraySize;
  head = queue->head;
  v9 = v7;
  v10 = v7 >> 3;
  if ( (v7 & 7) != 0 )
    v10 = (v7 >> 3) + 1;
  buffer = NULL;
  v12 = v10 + 8;
  v13 = 0;
  if ( commandCount )
  {
    while ( 1 )
    {
      v14 = *((unsigned __int16 *)head + 2);
      if ( *(_DWORD *)head == offset )
        break;
      v15 = v14 >> 3;
      if ( (int)v14 % 8 )
        v15 = (unsigned int)(v15 + 1);
      ++v13;
      head += v15 + 8;
      if ( v13 >= commandCount )
        goto LABEL_13;
    }
    if ( v14 != v9 )
      return 0;
  }
LABEL_13:
  cursor = queue->cursor;
  if ( head == cursor )
  {
    if ( (unsigned __int64)&cursor[v12 - (unsigned __int64)queue->buffer] < queue->bufferSize )
    {
      *(_DWORD *)head = offset;
      *((_WORD *)head + 2) = v9;
      queue->cursor += v12;
      ++queue->commandCount;
      goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  for ( i = head + 8; v9 > 0; ++i )
  {
    v18 = 8;
    if ( v9 <= 8 )
      v18 = v9;
    v9 -= 8;
    *i = DDL_GetBits(context, offset, v18);
    offset += 8;
  }
  if ( queue->initialized )
    buffer = queue->buffer;
  ++*((_DWORD *)buffer + 3);
  return 1;
}

/*
==============
DDL::DDL_Transfer_InitQueue
==============
*/
bool DDL::DDL_Transfer_InitQueue(DDLTransferQueue *queue, unsigned __int8 *buffer, unsigned int bufferSize, unsigned int userDataSize)
{
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  bool result; 

  if ( !queue || !buffer || bufferSize < userDataSize + 16 )
    return 0;
  queue->buffer = buffer;
  queue->bufferSize = bufferSize;
  *((_QWORD *)buffer + 1) = 0i64;
  *((_WORD *)buffer + 2) = userDataSize;
  v4 = queue->buffer;
  queue->commandCount = 0;
  queue->initialized = 1;
  v5 = &v4[userDataSize + 16];
  result = 1;
  queue->head = v5;
  queue->cursor = v5;
  return result;
}

/*
==============
DDL::DDL_Transfer_Serialize
==============
*/
unsigned __int8 *DDL::DDL_Transfer_Serialize(DDLTransferQueue *queue, void *userData, unsigned int userDataSize, unsigned __int64 *outSize)
{
  unsigned __int8 *buffer; 
  unsigned __int8 *result; 
  unsigned __int64 v8; 

  if ( queue->initialized && queue->commandCount )
  {
    buffer = queue->buffer;
    if ( *((unsigned __int16 *)queue->buffer + 2) == userDataSize )
    {
      memcpy_0(buffer + 16, userData, userDataSize);
      v8 = queue->cursor - queue->buffer;
      *outSize = v8;
      *((_DWORD *)buffer + 2) = DDL::DDL_BlockChecksum32(queue->buffer + 16, v8 - 16, 0);
      return queue->buffer;
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    result = NULL;
    *outSize = 0i64;
  }
  return result;
}

/*
==============
DDL::DDL_Transfer_Shutdown
==============
*/
bool DDL::DDL_Transfer_Shutdown(DDLTransferQueue *queue)
{
  bool result; 

  if ( !queue )
    return 0;
  result = 1;
  queue->buffer = NULL;
  queue->cursor = NULL;
  queue->head = NULL;
  *(_QWORD *)&queue->bufferSize = 0i64;
  *(_QWORD *)&queue->commandCount = 0i64;
  return result;
}

/*
==============
DDL::GetHeader
==============
*/
DDL::DDLTransferHeader *DDL::GetHeader(DDLTransferQueue *queue)
{
  DDL::DDLTransferHeader *result; 

  if ( !queue )
    return 0i64;
  if ( !queue->initialized )
    return 0i64;
  result = (DDL::DDLTransferHeader *)queue->buffer;
  if ( !queue->buffer )
    return 0i64;
  return result;
}

/*
==============
DDL::IsInitialized
==============
*/
bool DDL::IsInitialized(DDLTransferQueue *queue)
{
  return queue->initialized;
}

