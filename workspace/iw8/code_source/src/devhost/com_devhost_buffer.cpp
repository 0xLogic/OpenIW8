/*
==============
ComDevhostBuffer::Reserve
==============
*/

void __fastcall ComDevhostBuffer::Reserve(ComDevhostBuffer *this, int ch, unsigned int amt, const unsigned __int8 *buffer)
{
  ?Reserve@ComDevhostBuffer@@QEAAXHIPEBE@Z(this, ch, amt, buffer);
}

/*
==============
Com_DevHost_Buffer_Write
==============
*/

int __fastcall Com_DevHost_Buffer_Write(const unsigned __int8 *data, int len)
{
  return ?Com_DevHost_Buffer_Write@@YAHPEBEH@Z(data, len);
}

/*
==============
Com_DevHost_Buffer_Flush
==============
*/

int __fastcall Com_DevHost_Buffer_Flush()
{
  return ?Com_DevHost_Buffer_Flush@@YAHXZ();
}

/*
==============
Com_DevHost_Buffer_Read
==============
*/

int __fastcall Com_DevHost_Buffer_Read(int chan, unsigned __int8 *data, int len)
{
  return ?Com_DevHost_Buffer_Read@@YAHHPEAEH@Z(chan, data, len);
}

/*
==============
Com_DevHost_Buffer_Init
==============
*/

void __fastcall Com_DevHost_Buffer_Init(unsigned __int8 *buffer, int space, int read_channel_number)
{
  ?Com_DevHost_Buffer_Init@@YAXPEAEHH@Z(buffer, space, read_channel_number);
}

/*
==============
ComDevhostReadHandle::Skip
==============
*/

unsigned int __fastcall ComDevhostReadHandle::Skip(ComDevhostReadHandle *this, unsigned int size)
{
  return ?Skip@ComDevhostReadHandle@@QEAAII@Z(this, size);
}

/*
==============
Com_DevHost_Process_Msgs
==============
*/

void __fastcall Com_DevHost_Process_Msgs(int system)
{
  ?Com_DevHost_Process_Msgs@@YAXH@Z(system);
}

/*
==============
ComDevhostReadHandle::Read
==============
*/

unsigned int __fastcall ComDevhostReadHandle::Read(ComDevhostReadHandle *this, unsigned __int8 *desbuf, unsigned int size)
{
  return ?Read@ComDevhostReadHandle@@QEAAIPEAEI@Z(this, desbuf, size);
}

/*
==============
ComDevhostBuffer::Consume
==============
*/

void __fastcall ComDevhostBuffer::Consume(ComDevhostBuffer *this, int ch, unsigned int amt, unsigned __int8 *buffer)
{
  ?Consume@ComDevhostBuffer@@QEAAXHIPEAE@Z(this, ch, amt, buffer);
}

/*
==============
ComDevhostReadHandle::~ComDevhostReadHandle
==============
*/

void __fastcall ComDevhostReadHandle::~ComDevhostReadHandle(ComDevhostReadHandle *this)
{
  ??1ComDevhostReadHandle@@QEAA@XZ(this);
}

/*
==============
ComDevhostReadHandle::ComDevhostReadHandle
==============
*/

void __fastcall ComDevhostReadHandle::ComDevhostReadHandle(ComDevhostReadHandle *this, __int16 chan, __int16 comm, bool swap, unsigned int size)
{
  ??0ComDevhostReadHandle@@QEAA@FF_NI@Z(this, chan, comm, swap, size);
}

/*
==============
Com_DevHost_Receive_Msg
==============
*/

bool __fastcall Com_DevHost_Receive_Msg(const unsigned __int8 *const hdr)
{
  return ?Com_DevHost_Receive_Msg@@YA_NQEBE@Z(hdr);
}

/*
==============
ComDevhostReadHandle::ComDevhostReadHandle
==============
*/
void ComDevhostReadHandle::ComDevhostReadHandle(ComDevhostReadHandle *this, __int16 chan, __int16 comm, bool swap, unsigned int size)
{
  this->m_size = size;
  this->m_channel = chan;
  this->m_command = comm;
  this->m_swap = swap;
  this->m_bytesRead = 0;
}

/*
==============
ComDevhostReadHandle::~ComDevhostReadHandle
==============
*/
void ComDevhostReadHandle::~ComDevhostReadHandle(ComDevhostReadHandle *this)
{
  unsigned int m_size; 
  unsigned int m_bytesRead; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  signed int v8; 
  __int64 m_channel; 
  ComDevhostBuffer *m_bufferSys; 
  ComDevhostBuffer::Channel *v11; 
  unsigned int m_outCnt; 
  signed int v13; 
  unsigned __int8 buffer[2048]; 

  m_size = this->m_size;
  m_bytesRead = this->m_bytesRead;
  if ( m_size != m_bytesRead )
  {
    do
    {
      v4 = m_size - m_bytesRead;
      v5 = m_bytesRead;
      if ( m_size != m_bytesRead )
      {
        do
        {
          v6 = 2048;
          if ( v4 < 0x800 )
            v6 = v4;
          v7 = 0;
          m_size = this->m_size;
          v8 = m_size - m_bytesRead;
          if ( v6 <= m_size - m_bytesRead )
            v8 = v6;
          if ( v8 )
          {
            do
            {
              m_channel = this->m_channel;
              m_bufferSys = g_devhost.m_bufferSys;
              v11 = &g_devhost.m_bufferSys->m_channels[m_channel];
              m_outCnt = v11->m_outCnt;
              v13 = v11->m_inCnt - m_outCnt;
              if ( v8 <= v13 )
                v13 = v8;
              if ( v13 > 0 )
              {
                v11->m_outCnt = v13 + m_outCnt;
                ComDevhostBuffer::Consume(m_bufferSys, m_channel, v13, buffer);
              }
              v7 += v13;
              v5 = v13 + this->m_bytesRead;
              this->m_bytesRead = v5;
              v8 -= v13;
            }
            while ( v8 );
            m_size = this->m_size;
          }
          else
          {
            v5 = this->m_bytesRead;
          }
          v4 -= v7;
          m_bytesRead = v5;
        }
        while ( v4 );
      }
      m_bytesRead = v5;
    }
    while ( m_size != v5 );
  }
}

/*
==============
Com_DevHost_Buffer_Flush
==============
*/
__int64 Com_DevHost_Buffer_Flush()
{
  unsigned int v0; 

  g_devhost.m_harness->WaitEvent(1);
  v0 = DevHost_Buffer_FlushInternal();
  g_devhost.m_harness->SignalEvent(1);
  return v0;
}

/*
==============
Com_DevHost_Buffer_Init
==============
*/
void Com_DevHost_Buffer_Init(unsigned __int8 *buffer, int space, int read_channel_number)
{
  unsigned __int8 *v4; 
  __int16 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int16 v13; 

  v4 = buffer + 24;
  if ( buffer )
  {
    *((_QWORD *)buffer + 1) = v4;
    v5 = read_channel_number + 1;
    *((_WORD *)buffer + 8) = v5;
    *((_WORD *)buffer + 9) = v5 - 1;
    *(_QWORD *)buffer = &v4[24 * v5];
    v6 = (unsigned int)(space - 24 * v5 - 24) >> 10;
    if ( (unsigned __int16)v6 <= 2 * v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_buffer.cpp", 263, ASSERT_TYPE_SANITY, "( numNodes > m_channelNum * 2 )", (const char *)&queryFormat, "numNodes > m_channelNum * 2", -2i64) )
      __debugbreak();
    v7 = 0i64;
    v8 = 0i64;
    if ( *((__int16 *)buffer + 8) > 0 )
    {
      v9 = 0i64;
      do
      {
        v10 = 3i64 * (int)v8;
        v11 = *((_QWORD *)buffer + 1);
        *(_QWORD *)(v11 + 8 * v10) = 0i64;
        *(_QWORD *)(v11 + 8 * v10 + 8) = 0i64;
        *(_QWORD *)(v11 + 8 * v10 + 16) = 0i64;
        *(_WORD *)(*((_QWORD *)buffer + 1) + v9 + 6) = -1;
        *(_WORD *)(*((_QWORD *)buffer + 1) + v9 + 2) = -1;
        v8 = (unsigned int)(v8 + 1);
        v9 += 24i64;
      }
      while ( (int)v8 < *((__int16 *)buffer + 8) );
    }
    *((_WORD *)buffer + 10) = 0;
    if ( (_WORD)v6 )
    {
      v8 = 1i64;
      v12 = (unsigned __int16)v6;
      do
      {
        v13 = v8;
        if ( (_WORD)v8 == (_WORD)v6 )
          v13 = -1;
        *(_WORD *)(v7 + *(_QWORD *)buffer) = v13;
        LOWORD(v8) = v8 + 1;
        v7 += 1024i64;
        --v12;
      }
      while ( v12 );
    }
    ((void (__fastcall *)(__int64, void (__fastcall *)(int), __int64, __int64))g_devhost.m_harness->SignalEvent)(1i64, g_devhost.m_harness->SignalEvent, v7, v8);
    g_devhost.m_bufferSys = (ComDevhostBuffer *)buffer;
  }
  else
  {
    g_devhost.m_bufferSys = NULL;
  }
}

/*
==============
Com_DevHost_Buffer_Read
==============
*/
__int64 Com_DevHost_Buffer_Read(int chan, unsigned __int8 *data, int len)
{
  ComDevhostBuffer *m_bufferSys; 
  int v4; 
  ComDevhostBuffer::Channel *v5; 
  unsigned int m_outCnt; 

  m_bufferSys = g_devhost.m_bufferSys;
  v4 = len;
  v5 = &g_devhost.m_bufferSys->m_channels[chan];
  m_outCnt = v5->m_outCnt;
  if ( len > (int)(v5->m_inCnt - m_outCnt) )
    v4 = v5->m_inCnt - m_outCnt;
  if ( v4 > 0 )
  {
    v5->m_outCnt = m_outCnt + v4;
    ComDevhostBuffer::Consume(m_bufferSys, chan, v4, data);
  }
  return (unsigned int)v4;
}

/*
==============
Com_DevHost_Buffer_Write
==============
*/
__int64 Com_DevHost_Buffer_Write(const unsigned __int8 *data, int len)
{
  unsigned int v2; 
  int v3; 
  ComDevhostBuffer *m_bufferSys; 
  __int64 m_sendChannel; 
  __int64 v7; 
  int v8; 
  int byteIdx; 
  signed int v10; 
  ComDevhostBuffer *v11; 

  v2 = 0;
  v3 = len;
  if ( len > 0 )
  {
    g_devhost.m_harness->WaitEvent(1);
    m_bufferSys = g_devhost.m_bufferSys;
    m_sendChannel = g_devhost.m_bufferSys->m_sendChannel;
    v7 = m_sendChannel;
    while ( 1 )
    {
      if ( (signed int)(m_bufferSys->m_channels[v7].m_inCnt - m_bufferSys->m_channels[v7].m_outCnt) >= 2040 || m_bufferSys->m_freeList._My_val == 0xFFFF )
      {
        DevHost_Buffer_FlushInternal();
        if ( v3 > 2040 )
        {
          v8 = g_devhost.m_harness->SocketSend(g_devhost.m_clientSocket, data, v3);
          if ( v8 < 0 )
            return 0xFFFFFFFFi64;
          v2 += v8;
          data += v8;
          v3 -= v8;
        }
      }
      if ( v3 <= 0 )
        break;
      if ( g_devhost.m_bufferSys->m_freeList._My_val != 0xFFFF || (byteIdx = g_devhost.m_bufferSys->m_channels[g_devhost.m_bufferSys->m_sendChannel].m_tail.byteIdx, v10 = 1020 - byteIdx, byteIdx == 1020) )
        v10 = 1020;
      v11 = g_devhost.m_bufferSys;
      if ( v3 < v10 )
        v10 = v3;
      ComDevhostBuffer::Reserve(g_devhost.m_bufferSys, m_sendChannel, v10, data);
      v11->m_channels[v7].m_inCnt += v10;
      if ( v10 < 0 )
        return 0xFFFFFFFFi64;
      v2 += v10;
      data += v10;
      v3 -= v10;
      if ( v3 <= 0 )
        break;
      m_bufferSys = g_devhost.m_bufferSys;
    }
    g_devhost.m_harness->SignalEvent(1);
  }
  return v2;
}

/*
==============
Com_DevHost_Process_Msgs
==============
*/
void Com_DevHost_Process_Msgs(int system)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  ComDevhostBuffer::Channel *m_channels; 
  char v5; 
  unsigned int v6; 
  ComDevhostBuffer *m_bufferSys; 
  ComDevhostBuffer::Channel *v8; 
  unsigned int m_outCnt; 
  int v10; 
  int v11; 
  int v12; 
  bool (__fastcall *v13)(ComDevhostReadHandle *); 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  signed int v17; 
  int v18; 
  ComDevhostBuffer *v19; 
  ComDevhostBuffer::Channel *v20; 
  unsigned int v21; 
  signed int v22; 
  __int16 v23[2]; 
  bool v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  unsigned __int8 buffer[8]; 
  unsigned __int8 v29[2048]; 

  v27 = -2i64;
  v1 = system;
  v2 = system;
  v3 = system;
  m_channels = g_devhost.m_bufferSys->m_channels;
  v5 = 1;
  do
  {
    if ( m_channels[v3].m_inCnt - m_channels[v3].m_outCnt < 7 )
      break;
    v6 = 7;
    m_bufferSys = g_devhost.m_bufferSys;
    v8 = g_devhost.m_bufferSys->m_channels;
    m_outCnt = v8[v3].m_outCnt;
    v10 = v8[v3].m_inCnt - m_outCnt;
    if ( v10 < 7 )
    {
      v6 = v8[v3].m_inCnt - m_outCnt;
      if ( v10 <= 0 )
        continue;
    }
    v8[v3].m_outCnt = m_outCnt + v6;
    ComDevhostBuffer::Consume(m_bufferSys, v1, v6, buffer);
    v11 = buffer[6] | ((buffer[5] | ((buffer[4] | (buffer[3] << 8)) << 8)) << 8);
    v23[0] = v1;
    v23[1] = buffer[1];
    v24 = (buffer[2] != 0) != g_devhost.m_EndianTool.m_isBigEndian;
    v25 = v11;
    v12 = 0;
    v26 = 0;
    v13 = g_devhost.m_systemCallbacks[v2];
    if ( v13 )
    {
      v5 = v13((ComDevhostReadHandle *)v23);
      v12 = v26;
      v11 = v25;
    }
    v14 = v11 - v12;
    if ( v11 != v12 )
    {
      do
      {
        for ( ; v14; v14 -= v16 )
        {
          v15 = 2048;
          if ( v14 < 0x800 )
            v15 = v14;
          v16 = 0;
          v17 = v11 - v12;
          if ( v15 <= v11 - v12 )
            v17 = v15;
          if ( v17 )
          {
            do
            {
              v18 = v23[0];
              v19 = g_devhost.m_bufferSys;
              v20 = &g_devhost.m_bufferSys->m_channels[v23[0]];
              v21 = v20->m_outCnt;
              v22 = v20->m_inCnt - v21;
              if ( v17 <= v22 )
                v22 = v17;
              if ( v22 > 0 )
              {
                v20->m_outCnt = v22 + v21;
                ComDevhostBuffer::Consume(v19, v18, v22, v29);
                v12 = v26;
              }
              v16 += v22;
              v12 += v22;
              v26 = v12;
              v17 -= v22;
            }
            while ( v17 );
            v11 = v25;
          }
        }
        v14 = v11 - v12;
      }
      while ( v11 != v12 );
      v2 = v1;
    }
  }
  while ( v5 );
}

/*
==============
Com_DevHost_Receive_Msg
==============
*/
char Com_DevHost_Receive_Msg(const unsigned __int8 *const hdr)
{
  __int64 v1; 
  int v2; 
  ComDevhostBuffer *m_bufferSys; 
  __int64 v4; 
  ComDevhostBuffer *v5; 
  ComDevhostBuffer::Pointer m_tail; 
  unsigned __int16 nodeIdx; 
  int v8; 
  unsigned __int64 v9; 
  int v10; 
  __int64 v11; 
  char v13[2048]; 

  v1 = *hdr;
  v2 = hdr[6] | ((hdr[5] | ((hdr[4] | (hdr[3] << 8)) << 8)) << 8);
  if ( (int)v1 < g_devhost.m_channelNum && g_devhost.m_systemCallbacks[v1] )
  {
    m_bufferSys = g_devhost.m_bufferSys;
    ComDevhostBuffer::Reserve(g_devhost.m_bufferSys, v1, 7u, hdr);
    v4 = v1;
    m_bufferSys->m_channels[v1].m_inCnt += 7;
    v5 = g_devhost.m_bufferSys;
    m_tail = g_devhost.m_bufferSys->m_channels[v1].m_tail;
    ComDevhostBuffer::Reserve(g_devhost.m_bufferSys, v1, v2, NULL);
    if ( v2 > 0 )
    {
      nodeIdx = m_tail.nodeIdx;
      do
      {
        v8 = v2;
        if ( 1020 - m_tail.byteIdx <= v2 )
          v8 = 1020 - m_tail.byteIdx;
        v9 = (unsigned __int64)nodeIdx << 10;
        if ( v8 <= 0 )
        {
          m_tail.byteIdx = 0;
          nodeIdx = *(unsigned __int16 *)((char *)&v5->m_buffers->m_hdr.m_next + v9);
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int8 *))g_devhost.m_harness->SocketRecv)(g_devhost.m_clientSocket, &v5->m_buffers->m_data[m_tail.byteIdx + v9]);
          if ( v10 < 0 )
            break;
          v2 -= v10;
          v5->m_channels[v4].m_inCnt += v10;
          m_tail.byteIdx += v10;
        }
      }
      while ( v2 > 0 );
    }
    g_devhost.m_anyDataReceived = 1;
  }
  else
  {
    for ( ; v2; v2 -= g_devhost.m_harness->SocketRecv(g_devhost.m_clientSocket, v13, v11) )
    {
      v11 = (unsigned int)v2;
      if ( (unsigned int)v2 > 0x800 )
        v11 = 2048i64;
    }
  }
  return 1;
}

/*
==============
ComDevhostBuffer::Consume
==============
*/
void ComDevhostBuffer::Consume(ComDevhostBuffer *this, int ch, unsigned int amt, unsigned __int8 *buffer)
{
  unsigned int v6; 
  ComDevhostBuffer::Channel *v7; 
  int byteIdx; 
  unsigned int v9; 
  unsigned __int16 nodeIdx; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int16 My_val; 
  unsigned __int16 v14; 

  if ( amt )
  {
    v6 = amt;
    v7 = &this->m_channels[ch];
    do
    {
      byteIdx = v7->m_head.byteIdx;
      v9 = 1020 - byteIdx;
      if ( byteIdx == 1020 )
      {
        nodeIdx = v7->m_head.nodeIdx;
        v11 = (unsigned __int64)nodeIdx << 10;
        v12 = *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v11);
        v7->m_head.nodeIdx = v12;
        v7->m_head.byteIdx = 0;
        this->m_buffers[(unsigned __int64)v12].m_hdr.m_prev = -1;
        do
        {
          My_val = this->m_freeList._My_val;
          *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v11) = My_val;
          v14 = this->m_freeList._My_val;
          this->m_freeList._My_val = nodeIdx;
        }
        while ( v14 != My_val );
        if ( My_val == 0xFFFF )
          g_devhost.m_harness->SignalEvent(0);
      }
      else
      {
        if ( v6 < v9 )
          LOWORD(v9) = v6;
        if ( buffer )
        {
          memcpy_0(buffer, &this->m_buffers[(unsigned __int64)v7->m_head.nodeIdx].m_data[(__int16)byteIdx], (__int16)v9);
          LOWORD(byteIdx) = v7->m_head.byteIdx;
          buffer += (__int16)v9;
        }
        v7->m_head.byteIdx = v9 + byteIdx;
        v6 -= (__int16)v9;
      }
    }
    while ( v6 );
  }
}

/*
==============
DevHost_Buffer_FlushInternal
==============
*/
__int64 DevHost_Buffer_FlushInternal()
{
  ComDevhostBuffer *m_bufferSys; 
  ComDevhostBuffer::Channel *m_channels; 
  __int64 m_sendChannel; 
  __int64 v3; 
  int v4; 
  unsigned int v5; 
  ComDevhostBuffer::Pointer m_head; 
  unsigned __int16 nodeIdx; 
  int v8; 
  unsigned __int64 v9; 
  int v10; 

  m_bufferSys = g_devhost.m_bufferSys;
  m_channels = g_devhost.m_bufferSys->m_channels;
  m_sendChannel = g_devhost.m_bufferSys->m_sendChannel;
  v3 = m_sendChannel;
  if ( (signed int)(m_channels[m_sendChannel].m_inCnt - m_channels[m_sendChannel].m_outCnt) <= 0 )
    return 0i64;
  v4 = m_channels[v3].m_inCnt - m_channels[v3].m_outCnt;
  if ( (signed int)(m_channels[m_sendChannel].m_inCnt - m_channels[m_sendChannel].m_outCnt) <= v4 )
    v4 = m_channels[m_sendChannel].m_inCnt - m_channels[m_sendChannel].m_outCnt;
  v5 = 0;
  if ( v4 > 0 )
  {
    m_head = m_channels[m_sendChannel].m_head;
    nodeIdx = m_head.nodeIdx;
    while ( 1 )
    {
      v8 = v4;
      if ( 1020 - m_head.byteIdx <= v4 )
        v8 = 1020 - m_head.byteIdx;
      v9 = (unsigned __int64)nodeIdx << 10;
      if ( v8 <= 0 )
      {
        m_head.byteIdx = 0;
        nodeIdx = *(unsigned __int16 *)((char *)&m_bufferSys->m_buffers->m_hdr.m_next + v9);
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int8 *))g_devhost.m_harness->SocketSend)(g_devhost.m_clientSocket, &m_bufferSys->m_buffers->m_data[m_head.byteIdx + v9]);
        if ( v10 < 0 )
          return (unsigned int)-1;
        v5 += v10;
        v4 -= v10;
        m_head.byteIdx += v10;
      }
      if ( v4 <= 0 )
      {
        m_bufferSys->m_channels[v3].m_outCnt += v5;
        ComDevhostBuffer::Consume(m_bufferSys, m_sendChannel, v5, NULL);
        return v5;
      }
    }
  }
  return v5;
}

/*
==============
ComDevhostReadHandle::Read
==============
*/
__int64 ComDevhostReadHandle::Read(ComDevhostReadHandle *this, unsigned __int8 *desbuf, unsigned int size)
{
  unsigned int v3; 
  signed int v4; 
  ComDevhostBuffer *m_bufferSys; 
  __int64 m_channel; 
  ComDevhostBuffer::Channel *m_channels; 
  unsigned int m_inCnt; 
  ComDevhostBuffer::Channel *v11; 
  unsigned int m_outCnt; 
  signed int v13; 

  v3 = 0;
  v4 = size;
  if ( size > this->m_size - this->m_bytesRead )
    v4 = this->m_size - this->m_bytesRead;
  for ( ; v4; v4 -= v13 )
  {
    m_bufferSys = g_devhost.m_bufferSys;
    m_channel = this->m_channel;
    m_channels = g_devhost.m_bufferSys->m_channels;
    m_inCnt = m_channels[m_channel].m_inCnt;
    v11 = &m_channels[m_channel];
    m_outCnt = v11->m_outCnt;
    v13 = m_inCnt - m_outCnt;
    if ( v4 <= v13 )
      v13 = v4;
    if ( v13 > 0 )
    {
      v11->m_outCnt = v13 + m_outCnt;
      ComDevhostBuffer::Consume(m_bufferSys, m_channel, v13, desbuf);
    }
    this->m_bytesRead += v13;
    v3 += v13;
  }
  return v3;
}

/*
==============
ComDevhostBuffer::Reserve
==============
*/
void ComDevhostBuffer::Reserve(ComDevhostBuffer *this, __int64 ch, unsigned int amt, const unsigned __int8 *buffer)
{
  unsigned int v6; 
  unsigned __int64 v7; 
  ComDevhostBuffer::Channel *v8; 
  unsigned __int16 nodeIdx; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  ComDevhostBuffer::Pointer m_head; 
  unsigned int v14; 
  __int64 My_val; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ComDevhostBuffer::Pointer v18; 
  ComDevhostBuffer::Pointer v19; 

  if ( amt )
  {
    v6 = amt;
    v7 = (unsigned __int64)"chan.m_head.byteIdx == sizeof( Node::m_data )";
    v8 = &this->m_channels[(int)ch];
    while ( 1 )
    {
      nodeIdx = v8->m_head.nodeIdx;
      if ( nodeIdx == 0xFFFF )
        break;
      ch = (unsigned int)v8->m_tail.byteIdx;
      v14 = 1020 - ch;
      if ( (_DWORD)ch != 1020 )
      {
        if ( v6 < v14 )
          LOWORD(v14) = v6;
        if ( buffer )
        {
          memcpy_0(&this->m_buffers[(unsigned __int64)v8->m_tail.nodeIdx].m_data[v8->m_tail.byteIdx], buffer, (__int16)v14);
          ch = (unsigned __int16)v8->m_tail.byteIdx;
          buffer += (__int16)v14;
        }
        LOWORD(ch) = v14 + ch;
        v8->m_tail.byteIdx = ch;
        v6 -= (__int16)v14;
        goto LABEL_21;
      }
      if ( v8->m_head.byteIdx != 1020 || v8->m_tail.nodeIdx != nodeIdx )
      {
        do
        {
          while ( 1 )
          {
            My_val = this->m_freeList._My_val;
            if ( (_WORD)My_val != 0xFFFF )
              break;
            ((void (__fastcall *)(_QWORD, __int64, __int64, unsigned __int64))g_devhost.m_harness->WaitEvent)(0i64, ch, My_val, v7);
          }
          v7 = (unsigned __int16)My_val;
          v16 = (unsigned __int64)(unsigned __int16)My_val << 10;
          ch = *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v16);
          LOWORD(ch) = this->m_freeList._My_val;
          this->m_freeList._My_val = *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v16);
        }
        while ( (_WORD)ch != (_WORD)My_val );
        v17 = (unsigned __int64)(unsigned __int16)My_val << 10;
        v19.byteIdx = 0;
        v19.nodeIdx = My_val;
        this->m_buffers[(unsigned __int64)v8->m_tail.nodeIdx].m_hdr.m_next = My_val;
        *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_prev + v17) = v8->m_tail.nodeIdx;
        *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v17) = -1;
        m_head = v19;
        goto LABEL_20;
      }
      v8->m_tail.byteIdx = 0;
      v8->m_head.byteIdx = 0;
LABEL_21:
      v7 = (unsigned __int64)"chan.m_head.byteIdx == sizeof( Node::m_data )";
      if ( !v6 )
        return;
    }
    do
    {
      while ( 1 )
      {
        v10 = this->m_freeList._My_val;
        if ( (_WORD)v10 != 0xFFFF )
          break;
        ((void (__fastcall *)(_QWORD, __int64, __int64, unsigned __int64))g_devhost.m_harness->WaitEvent)(0i64, ch, v10, v7);
      }
      v7 = (unsigned __int16)v10;
      v11 = (unsigned __int64)(unsigned __int16)v10 << 10;
      ch = *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v11);
      LOWORD(ch) = this->m_freeList._My_val;
      this->m_freeList._My_val = *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v11);
    }
    while ( (_WORD)ch != (_WORD)v10 );
    v12 = (unsigned __int64)(unsigned __int16)v10 << 10;
    v18.byteIdx = 0;
    v18.nodeIdx = v10;
    v8->m_head = v18;
    *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_prev + v12) = -1;
    *(unsigned __int16 *)((char *)&this->m_buffers->m_hdr.m_next + v12) = -1;
    m_head = v8->m_head;
LABEL_20:
    v8->m_tail = m_head;
    goto LABEL_21;
  }
}

/*
==============
ComDevhostReadHandle::Skip
==============
*/
__int64 ComDevhostReadHandle::Skip(ComDevhostReadHandle *this, unsigned int size)
{
  unsigned int v2; 
  unsigned int i; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  ComDevhostBuffer *m_bufferSys; 
  __int64 m_channel; 
  ComDevhostBuffer::Channel *m_channels; 
  unsigned int m_inCnt; 
  ComDevhostBuffer::Channel *v12; 
  unsigned int m_outCnt; 
  signed int v14; 
  unsigned __int8 buffer[2048]; 

  v2 = 0;
  for ( i = size; i; i -= v7 )
  {
    v5 = 2048;
    if ( i < 0x800 )
      v5 = i;
    v6 = this->m_size - this->m_bytesRead;
    v7 = 0;
    if ( v5 <= v6 )
      v6 = v5;
    for ( ; v6; v6 -= v14 )
    {
      m_bufferSys = g_devhost.m_bufferSys;
      m_channel = this->m_channel;
      m_channels = g_devhost.m_bufferSys->m_channels;
      m_inCnt = m_channels[m_channel].m_inCnt;
      v12 = &m_channels[m_channel];
      m_outCnt = v12->m_outCnt;
      v14 = m_inCnt - m_outCnt;
      if ( (int)v6 <= v14 )
        v14 = v6;
      if ( v14 > 0 )
      {
        v12->m_outCnt = v14 + m_outCnt;
        ComDevhostBuffer::Consume(m_bufferSys, m_channel, v14, buffer);
      }
      this->m_bytesRead += v14;
      v7 += v14;
    }
    v2 += v7;
  }
  return v2;
}

