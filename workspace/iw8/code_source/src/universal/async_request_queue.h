/*
==============
AsyncRequestQueue<1024,128>::ClearRequests
==============
*/

void __fastcall AsyncRequestQueue<1024,128>::ClearRequests(AsyncRequestQueue<1024,128> *this)
{
  ?ClearRequests@?$AsyncRequestQueue@$0EAA@$0IA@@@QEAAXXZ(this);
}

/*
==============
AsyncRequestQueue<1024,128>::WriteRequest
==============
*/

void __fastcall AsyncRequestQueue<1024,128>::WriteRequest(AsyncRequestQueue<1024,128> *this, const int type, const void *data, const int dataSize, AsyncRequestHandle *handle)
{
  ?WriteRequest@?$AsyncRequestQueue@$0EAA@$0IA@@@QEAAXHPEBXHPEAVAsyncRequestHandle@@@Z(this, type, data, dataSize, handle);
}

/*
==============
AsyncRequestQueue<1024,128>::SetProcessor
==============
*/

void __fastcall AsyncRequestQueue<1024,128>::SetProcessor(AsyncRequestQueue<1024,128> *this, AsyncRequestProcessor *processor)
{
  ?SetProcessor@?$AsyncRequestQueue@$0EAA@$0IA@@@QEAAXPEAVAsyncRequestProcessor@@@Z(this, processor);
}

/*
==============
AsyncRequestQueue<1024,128>::ProcessRequests
==============
*/

void __fastcall AsyncRequestQueue<1024,128>::ProcessRequests(AsyncRequestQueue<1024,128> *this, void *context)
{
  ?ProcessRequests@?$AsyncRequestQueue@$0EAA@$0IA@@@QEAAXPEAX@Z(this, context);
}

/*
==============
AsyncRequestQueue<1024,128>::ClearRequests
==============
*/
void AsyncRequestQueue<1024,128>::ClearRequests(AsyncRequestQueue<1024,128> *this)
{
  signed __int32 m_readOffset; 
  unsigned int v2; 
  __int64 v4; 

  m_readOffset = this->m_requests.m_readOffset;
  v2 = this->m_requests.m_writeOffset - this->m_requests.m_readOffset;
  v4 = (unsigned __int8)this & 3;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", this) )
        __debugbreak();
    }
    if ( m_readOffset == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + m_readOffset, m_readOffset) )
      break;
    m_readOffset = this->m_requests.m_readOffset;
    v2 = this->m_requests.m_writeOffset - this->m_requests.m_readOffset;
  }
}

/*
==============
AsyncRequestQueue<1024,128>::ProcessRequests
==============
*/
void AsyncRequestQueue<1024,128>::ProcessRequests(AsyncRequestQueue<1024,128> *this, void *context)
{
  int v4; 
  char v5[8]; 
  int buffer; 
  AsyncRequestHandle *v7; 
  int v8; 
  char v9[128]; 

  if ( !this->m_processor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 117, ASSERT_TYPE_ASSERT, "(m_processor != 0)", (const char *)&queryFormat, "m_processor != NULL") )
    __debugbreak();
  while ( (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 )
  {
    MpscStream<1024>::Read(&this->m_requests, &buffer, 24);
    v4 = v8;
    if ( (unsigned __int64)v8 > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 126, ASSERT_TYPE_ASSERT, "(header.size <= sizeof( data ))", (const char *)&queryFormat, "header.size <= sizeof( data )") )
      __debugbreak();
    MpscStream<1024>::Read(&this->m_requests, v9, v4);
    this->m_processor->ProcessRequest(this->m_processor, buffer, v9, v4, context);
    MpscStream<1024>::Read(&this->m_requests, v5, 1);
    if ( v7 )
      AsyncRequestHandle::Signal(v7);
  }
}

/*
==============
AsyncRequestQueue<1024,128>::SetProcessor
==============
*/
void AsyncRequestQueue<1024,128>::SetProcessor(AsyncRequestQueue<1024,128> *this, AsyncRequestProcessor *processor)
{
  this->m_processor = processor;
}

/*
==============
AsyncRequestQueue<1024,128>::WriteRequest
==============
*/
void AsyncRequestQueue<1024,128>::WriteRequest(AsyncRequestQueue<1024,128> *this, const int type, const void *data, const int dataSize, AsyncRequestHandle *handle)
{
  size_t v5; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int128 v11; 
  __int64 v12; 
  __int128 dataa; 
  __int64 v14; 
  char v15[104]; 

  v5 = dataSize;
  LODWORD(v11) = type;
  *((_QWORD *)&v11 + 1) = handle;
  LODWORD(v12) = dataSize;
  v8 = dataSize + 25;
  if ( (unsigned int)(dataSize + 25) > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 74, ASSERT_TYPE_ASSERT, "(sizeof( requestBuffer ) >= requestSize)", (const char *)&queryFormat, "sizeof( requestBuffer ) >= requestSize") )
    __debugbreak();
  if ( handle && AsyncRequestHandle::IsComplete(handle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\async_request_queue.h", 75, ASSERT_TYPE_ASSERT, "(handle == 0 || !handle->IsComplete())", (const char *)&queryFormat, "handle == NULL || !handle->IsComplete()") )
    __debugbreak();
  dataa = v11;
  v14 = v12;
  memcpy_0(v15, data, v5);
  v15[v5] = -1;
  v9 = Sys_Milliseconds();
  while ( MpscStream<1024>::Write(&this->m_requests, &dataa, v8) <= 0 )
  {
    Sys_Sleep(1);
    v10 = (unsigned int)(Sys_Milliseconds() - v9);
    if ( (int)v10 > 1000 )
      Com_PrintWarning(25, "[NET] Waited %dms for space in request buffer, currently queued %uB\n", v10, this->m_requests.m_writeOffset - this->m_requests.m_readOffset);
  }
}

