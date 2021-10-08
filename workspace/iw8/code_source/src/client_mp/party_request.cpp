/*
==============
PartyRequestBuffer::AddRequest
==============
*/

void __fastcall PartyRequestBuffer::AddRequest(PartyRequestBuffer *this, const PartyRequestType type, const void *data, const int dataSize, PartyRequestHandle *handle)
{
  ?AddRequest@PartyRequestBuffer@@QEAAXW4PartyRequestType@@PEBXHPEAVPartyRequestHandle@@@Z(this, type, data, dataSize, handle);
}

/*
==============
PartyRequestHandle::PartyRequestHandle
==============
*/

void __fastcall PartyRequestHandle::PartyRequestHandle(PartyRequestHandle *this)
{
  ??0PartyRequestHandle@@QEAA@XZ(this);
}

/*
==============
PartyRequestHandle::Wait
==============
*/

void __fastcall PartyRequestHandle::Wait(PartyRequestHandle *this)
{
  ?Wait@PartyRequestHandle@@QEBAXXZ(this);
}

/*
==============
PartyRequestBuffer::AddRequest
==============
*/

void __fastcall PartyRequestBuffer::AddRequest(PartyRequestBuffer *this, const PartyRequestType type, const void *data, const int size)
{
  ?AddRequest@PartyRequestBuffer@@QEAAXW4PartyRequestType@@PEBXH@Z(this, type, data, size);
}

/*
==============
PartyRequestBuffer::ProcessRequests
==============
*/

void __fastcall PartyRequestBuffer::ProcessRequests(PartyRequestBuffer *this, PartyData *party)
{
  ?ProcessRequests@PartyRequestBuffer@@QEAAXPEAUPartyData@@@Z(this, party);
}

/*
==============
PartyRequestHandle::Signal
==============
*/

void __fastcall PartyRequestHandle::Signal(PartyRequestHandle *this)
{
  ?Signal@PartyRequestHandle@@QEAAXXZ(this);
}

/*
==============
PartyRequestBuffer::ClearRequests
==============
*/

void __fastcall PartyRequestBuffer::ClearRequests(PartyRequestBuffer *this)
{
  ?ClearRequests@PartyRequestBuffer@@QEAAXXZ(this);
}

/*
==============
PartyRequestHandle::IsComplete
==============
*/

bool __fastcall PartyRequestHandle::IsComplete(PartyRequestHandle *this)
{
  return ?IsComplete@PartyRequestHandle@@QEBA_NXZ(this);
}

/*
==============
PartyRequestBuffer::SyncRequests
==============
*/

void __fastcall PartyRequestBuffer::SyncRequests(PartyRequestBuffer *this, PartyData *party)
{
  ?SyncRequests@PartyRequestBuffer@@QEAAXPEAUPartyData@@@Z(this, party);
}

/*
==============
PartyRequestHandle::PartyRequestHandle
==============
*/
void PartyRequestHandle::PartyRequestHandle(PartyRequestHandle *this)
{
  this->m_complete = 0;
}

/*
==============
PartyRequestBuffer::AddRequest
==============
*/
void PartyRequestBuffer::AddRequest(PartyRequestBuffer *this, const PartyRequestType type, const void *data, const int size)
{
  PartyRequestBuffer::AddRequest(this, type, data, size, NULL);
}

/*
==============
PartyRequestBuffer::AddRequest
==============
*/
void PartyRequestBuffer::AddRequest(PartyRequestBuffer *this, const PartyRequestType type, const void *data, const int dataSize, PartyRequestHandle *handle)
{
  size_t v5; 
  int v8; 
  int v11; 
  volatile unsigned int m_writeOffset; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int128 v16; 
  __int64 v17; 
  __int128 Src; 
  char v20[2024]; 

  v5 = dataSize;
  LODWORD(v16) = type;
  *((_QWORD *)&v16 + 1) = handle;
  LODWORD(v17) = dataSize;
  v8 = dataSize + 25;
  if ( (unsigned int)(dataSize + 25) > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 32, ASSERT_TYPE_ASSERT, "(sizeof( requestBuffer ) >= requestSize)", (const char *)&queryFormat, "sizeof( requestBuffer ) >= requestSize") )
    __debugbreak();
  if ( handle && handle->m_complete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 33, ASSERT_TYPE_ASSERT, "(handle == 0 || !handle->IsComplete())", (const char *)&queryFormat, "handle == NULL || !handle->IsComplete()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, [rsp+8A8h+var_870]
    vmovsd  xmm1, [rsp+8A8h+var_860]
    vmovups [rsp+8A8h+Src], xmm0
    vmovsd  [rsp+8A8h+var_848], xmm1
  }
  memcpy_0(v20, data, v5);
  v20[v5] = -1;
  v11 = Sys_Milliseconds();
  while ( 1 )
  {
    if ( (signed int)(2048 - this->m_requests.m_writeOffset + this->m_requests.m_readOffset) >= v8 )
    {
      m_writeOffset = this->m_requests.m_writeOffset;
      if ( v8 > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
        __debugbreak();
      v13 = m_writeOffset & 0x7FF;
      v14 = 2048 - v13;
      if ( v8 < 2048 - v13 )
        v14 = v8;
      memcpy_0(&this->m_requests.m_buffer.m_data[v13], &Src, v14);
      memcpy_0(&this->m_requests.m_buffer, (char *)&Src + v14, v8 - v14);
      if ( (signed int)(2048 - this->m_requests.m_writeOffset + this->m_requests.m_readOffset) < v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\spsc_stream.h", 74, ASSERT_TYPE_ASSERT, "(Space( length ))", (const char *)&queryFormat, "Space( length )") )
        __debugbreak();
      this->m_requests.m_writeOffset += v8;
      if ( v8 > 0 )
        break;
    }
    Sys_Sleep(1);
    v15 = (unsigned int)(Sys_Milliseconds() - v11);
    if ( (int)v15 > 1000 )
      Com_PrintWarning(25, "Waited %dms for space in party request buffer, currently queued %uB\n", v15, this->m_requests.m_writeOffset - this->m_requests.m_readOffset);
  }
}

/*
==============
PartyRequestBuffer::ClearRequests
==============
*/
void PartyRequestBuffer::ClearRequests(PartyRequestBuffer *this)
{
  this->m_requests.m_readOffset = 0;
  this->m_requests.m_writeOffset = 0;
}

/*
==============
PartyRequestHandle::IsComplete
==============
*/
_BOOL8 PartyRequestHandle::IsComplete(PartyRequestHandle *this)
{
  return this->m_complete;
}

/*
==============
PartyRequestBuffer::ProcessRequests
==============
*/
void PartyRequestBuffer::ProcessRequests(PartyRequestBuffer *this, PartyData *party)
{
  int v4; 
  volatile __int32 *v5; 
  __int64 v6; 
  char v7[8]; 
  int buffer; 
  volatile __int32 *v9; 
  int v10; 
  int botId; 
  unsigned __int8 v12; 
  char *reason; 
  NetCloseStyle closeStyle; 

  if ( Party_AreWeHost(party) && (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 )
  {
    do
    {
      SpscStream<2048>::Read(&this->m_requests, &buffer, 24);
      v4 = v10;
      if ( (unsigned __int64)v10 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 93, ASSERT_TYPE_ASSERT, "(header.size <= sizeof( data ))", (const char *)&queryFormat, "header.size <= sizeof( data )") )
        __debugbreak();
      SpscStream<2048>::Read(&this->m_requests, &botId, v4);
      if ( buffer )
      {
        if ( buffer == 1 )
        {
          PartyHost_ClearGo(party);
        }
        else if ( buffer == 2 )
        {
          PartyHost_AddBot(party, botId);
        }
        else
        {
          LODWORD(v6) = buffer;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled party request type %u\n", v6) )
            __debugbreak();
        }
      }
      else
      {
        PartyHost_RemovePlayer(party, botId, v12, reason, closeStyle);
      }
      SpscStream<2048>::Read(&this->m_requests, v7, 1);
      v5 = v9;
      if ( v9 )
      {
        if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v9) )
          __debugbreak();
        _InterlockedExchange(v5, 1);
      }
    }
    while ( (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 );
  }
}

/*
==============
PartyRequestHandle::Signal
==============
*/
void PartyRequestHandle::Signal(PartyRequestHandle *this)
{
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", this) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)&this->m_complete, 1);
}

/*
==============
PartyRequestBuffer::SyncRequests
==============
*/
void PartyRequestBuffer::SyncRequests(PartyRequestBuffer *this, PartyData *party)
{
  int v4; 
  volatile __int32 *v5; 
  __int64 v6; 
  char v7[8]; 
  int buffer; 
  volatile __int32 *v9; 
  int v10; 
  int botId; 
  unsigned __int8 v12; 
  char *reason; 
  NetCloseStyle closeStyle; 

  while ( (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 )
  {
    if ( Sys_IsMainThread() )
    {
      if ( Party_AreWeHost(party) && (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 )
      {
        do
        {
          SpscStream<2048>::Read(&this->m_requests, &buffer, 24);
          v4 = v10;
          if ( (unsigned __int64)v10 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 93, ASSERT_TYPE_ASSERT, "(header.size <= sizeof( data ))", (const char *)&queryFormat, "header.size <= sizeof( data )") )
            __debugbreak();
          SpscStream<2048>::Read(&this->m_requests, &botId, v4);
          if ( buffer )
          {
            if ( buffer == 1 )
            {
              PartyHost_ClearGo(party);
            }
            else if ( buffer == 2 )
            {
              PartyHost_AddBot(party, botId);
            }
            else
            {
              LODWORD(v6) = buffer;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_request.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled party request type %u\n", v6) )
                __debugbreak();
            }
          }
          else
          {
            PartyHost_RemovePlayer(party, botId, v12, reason, closeStyle);
          }
          SpscStream<2048>::Read(&this->m_requests, v7, 1);
          v5 = v9;
          if ( v9 )
          {
            if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v9) )
              __debugbreak();
            _InterlockedExchange(v5, 1);
          }
        }
        while ( (signed int)(this->m_requests.m_writeOffset - this->m_requests.m_readOffset) > 0 );
      }
    }
    else
    {
      Sys_Sleep(1);
    }
  }
}

/*
==============
PartyRequestHandle::Wait
==============
*/
void PartyRequestHandle::Wait(PartyRequestHandle *this)
{
  while ( !this->m_complete )
    Sys_Sleep(1);
}

