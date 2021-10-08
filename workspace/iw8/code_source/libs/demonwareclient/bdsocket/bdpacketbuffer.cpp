/*
==============
bdPacketBufferInternal::getKey
==============
*/

unsigned int __fastcall bdPacketBufferInternal::getKey(bdPacketBufferInternal *this)
{
  return ?getKey@bdPacketBufferInternal@@QEAAIXZ(this);
}

/*
==============
bdPacketBuffer::clearBuffer
==============
*/

void __fastcall bdPacketBuffer::clearBuffer(bdPacketBuffer *this, unsigned int key)
{
  ?clearBuffer@bdPacketBuffer@@QEAAXI@Z(this, key);
}

/*
==============
bdPacketBuffer::bdPacketBuffer
==============
*/

void __fastcall bdPacketBuffer::bdPacketBuffer(bdPacketBuffer *this)
{
  ??0bdPacketBuffer@@QEAA@XZ(this);
}

/*
==============
bdPacketBufferInternal::setKey
==============
*/

void __fastcall bdPacketBufferInternal::setKey(bdPacketBufferInternal *this, unsigned int key)
{
  ?setKey@bdPacketBufferInternal@@QEAAXI@Z(this, key);
}

/*
==============
bdPacketBufferInternal::bdPacketBufferInternal
==============
*/

void __fastcall bdPacketBufferInternal::bdPacketBufferInternal(bdPacketBufferInternal *this)
{
  ??0bdPacketBufferInternal@@QEAA@XZ(this);
}

/*
==============
bdPacketBufferInternal::clearBuffer
==============
*/

void __fastcall bdPacketBufferInternal::clearBuffer(bdPacketBufferInternal *this)
{
  ?clearBuffer@bdPacketBufferInternal@@QEAAXXZ(this);
}

/*
==============
bdPacketBuffer::findBuffer
==============
*/

bdPacketBufferInternal *__fastcall bdPacketBuffer::findBuffer(bdPacketBuffer *this, unsigned int key, bool findEmpty)
{
  return ?findBuffer@bdPacketBuffer@@AEAAPEAVbdPacketBufferInternal@@I_N@Z(this, key, findEmpty);
}

/*
==============
bdPacketBufferInternal::flushBuffer
==============
*/

int __fastcall bdPacketBufferInternal::flushBuffer(bdPacketBufferInternal *this, bdDTLSAssociation *dtlsSocket, const bdAddr *realAddr)
{
  return ?flushBuffer@bdPacketBufferInternal@@QEAAHPEAVbdDTLSAssociation@@AEBVbdAddr@@@Z(this, dtlsSocket, realAddr);
}

/*
==============
bdPacketBuffer::bufferPacket
==============
*/

bool __fastcall bdPacketBuffer::bufferPacket(bdPacketBuffer *this, unsigned int key, void *data, unsigned int length)
{
  return ?bufferPacket@bdPacketBuffer@@QEAA_NIPEAXI@Z(this, key, data, length);
}

/*
==============
bdPacketBufferInternal::bufferPacket
==============
*/

bool __fastcall bdPacketBufferInternal::bufferPacket(bdPacketBufferInternal *this, void *data, unsigned int length)
{
  return ?bufferPacket@bdPacketBufferInternal@@QEAA_NPEAXI@Z(this, data, length);
}

/*
==============
bdPacketBuffer::clearAll
==============
*/

void __fastcall bdPacketBuffer::clearAll(bdPacketBuffer *this)
{
  ?clearAll@bdPacketBuffer@@QEAAXXZ(this);
}

/*
==============
bdPacketBuffer::flushBuffer
==============
*/

int __fastcall bdPacketBuffer::flushBuffer(bdPacketBuffer *this, unsigned int key, bdDTLSAssociation *dtlsSocket, const bdAddr *realAddr)
{
  return ?flushBuffer@bdPacketBuffer@@QEAAHIPEAVbdDTLSAssociation@@AEBVbdAddr@@@Z(this, key, dtlsSocket, realAddr);
}

/*
==============
bdPacketBuffer::bdPacketBuffer
==============
*/
void bdPacketBuffer::bdPacketBuffer(bdPacketBuffer *this)
{
  bdPacketBuffer *v2; 
  __int64 v3; 

  v2 = this;
  v3 = 10i64;
  do
  {
    bdPacketBufferInternal::bdPacketBufferInternal(v2->m_buffers);
    v2 = (bdPacketBuffer *)((char *)v2 + 1032);
    --v3;
  }
  while ( v3 );
  this->m_numActiveBuffers = 0;
}

/*
==============
bdPacketBufferInternal::bdPacketBufferInternal
==============
*/
void bdPacketBufferInternal::bdPacketBufferInternal(bdPacketBufferInternal *this)
{
  *(_QWORD *)&this->m_offset = 0i64;
  memset_0(this, 0, 0x400ui64);
}

/*
==============
bdPacketBuffer::bufferPacket
==============
*/
char bdPacketBuffer::bufferPacket(bdPacketBuffer *this, unsigned int key, void *data, unsigned int length)
{
  bdPacketBufferInternal *v4; 
  unsigned int *p_m_key; 
  int v6; 
  __int64 m_offset; 
  char v10; 

  v4 = NULL;
  p_m_key = &this->m_buffers[0].m_key;
  v6 = 0;
  while ( 1 )
  {
    if ( !*p_m_key )
    {
      if ( !v4 )
        v4 = &this->m_buffers[v6];
      goto LABEL_6;
    }
    if ( *p_m_key == key )
      break;
LABEL_6:
    ++v6;
    p_m_key += 258;
    if ( v6 >= 10 )
      goto LABEL_9;
  }
  v4 = &this->m_buffers[v6];
LABEL_9:
  if ( v4 )
  {
    if ( !v4->m_key )
    {
      v4->m_key = key;
      ++this->m_numActiveBuffers;
    }
    m_offset = v4->m_offset;
    v10 = 0;
    if ( (unsigned __int64)((unsigned int)m_offset + length) + 4 >= 0x400 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/socketbuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::bufferPacket", 0x7Au, "Failed to buffer packet, not enough room in buffer. \t\t\t\t\t\t\tConsider increasing BD_SENDTO_BUFFER_SIZE");
    }
    else
    {
      v4->m_offset = m_offset + 4;
      bdHandleAssert((unsigned int)(m_offset + 4) <= 0x400, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
      v10 = 0;
      if ( (unsigned int)(m_offset + 4) <= 0x400 )
      {
        *(_DWORD *)&v4->m_buffer[m_offset] = length;
        if ( bdBytePacker::appendBuffer(v4, 0x400u, v4->m_offset, &v4->m_offset, data, length) )
          return 1;
      }
    }
    return v10;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/socketbuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBuffer::bufferPacket", 0x26u, "Failed to buffer packet, no empty buffers for new connection. \t\t\tConsider increasing BD_MAX_BUFFERED_CONNECTIONS");
    return 0;
  }
}

/*
==============
bdPacketBufferInternal::bufferPacket
==============
*/
char bdPacketBufferInternal::bufferPacket(bdPacketBufferInternal *this, void *data, unsigned int length)
{
  __int64 m_offset; 

  m_offset = this->m_offset;
  if ( (unsigned __int64)((unsigned int)m_offset + length) + 4 >= 0x400 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/socketbuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::bufferPacket", 0x7Au, "Failed to buffer packet, not enough room in buffer. \t\t\t\t\t\t\tConsider increasing BD_SENDTO_BUFFER_SIZE");
  }
  else
  {
    this->m_offset = m_offset + 4;
    bdHandleAssert((unsigned int)(m_offset + 4) <= 0x400, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    if ( (unsigned int)(m_offset + 4) <= 0x400 )
    {
      *(_DWORD *)&this->m_buffer[m_offset] = length;
      if ( bdBytePacker::appendBuffer(this, 0x400u, this->m_offset, &this->m_offset, data, length) )
        return 1;
    }
  }
  return 0;
}

/*
==============
bdPacketBuffer::clearAll
==============
*/
void bdPacketBuffer::clearAll(bdPacketBuffer *this)
{
  *(_QWORD *)&this->m_buffers[0].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[1].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[2].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[3].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[4].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[5].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[6].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[7].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[8].m_offset = 0i64;
  *(_QWORD *)&this->m_buffers[9].m_offset = 0i64;
  this->m_numActiveBuffers = 0;
}

/*
==============
bdPacketBuffer::clearBuffer
==============
*/
void bdPacketBuffer::clearBuffer(bdPacketBuffer *this, unsigned int key)
{
  unsigned int *p_m_key; 
  int v3; 
  bdPacketBufferInternal *v5; 

  p_m_key = &this->m_buffers[0].m_key;
  v3 = 0;
  while ( !*p_m_key || *p_m_key != key )
  {
    ++v3;
    p_m_key += 258;
    if ( v3 >= 10 )
      return;
  }
  v5 = &this->m_buffers[v3];
  if ( v5 )
  {
    *(_QWORD *)&v5->m_offset = 0i64;
    --this->m_numActiveBuffers;
  }
}

/*
==============
bdPacketBufferInternal::clearBuffer
==============
*/
void bdPacketBufferInternal::clearBuffer(bdPacketBufferInternal *this)
{
  *(_QWORD *)&this->m_offset = 0i64;
}

/*
==============
bdPacketBuffer::findBuffer
==============
*/
bdPacketBufferInternal *bdPacketBuffer::findBuffer(bdPacketBuffer *this, unsigned int key, bool findEmpty)
{
  bdPacketBufferInternal *v3; 
  unsigned int *p_m_key; 
  int v5; 
  unsigned int v6; 

  v3 = NULL;
  p_m_key = &this->m_buffers[0].m_key;
  v5 = 0;
  while ( 1 )
  {
    v6 = *p_m_key;
    if ( findEmpty )
      break;
    if ( v6 )
      goto LABEL_7;
LABEL_8:
    ++v5;
    p_m_key += 258;
    if ( v5 >= 10 )
      return v3;
  }
  if ( !v6 )
  {
    if ( !v3 )
      v3 = &this->m_buffers[v5];
    goto LABEL_8;
  }
LABEL_7:
  if ( v6 != key )
    goto LABEL_8;
  return (bdPacketBufferInternal *)((char *)this + 1032 * v5);
}

/*
==============
bdPacketBuffer::flushBuffer
==============
*/
__int64 bdPacketBuffer::flushBuffer(bdPacketBuffer *this, unsigned int key, bdDTLSAssociation *dtlsSocket, const bdAddr *realAddr)
{
  unsigned int v4; 
  int v7; 
  unsigned int *i; 
  bdPacketBufferInternal *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int m_offset; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  char str[24]; 

  v4 = 0;
  if ( !this->m_numActiveBuffers )
    return 0i64;
  v7 = 0;
  for ( i = &this->m_buffers[0].m_key; !*i || *i != key; i += 258 )
  {
    if ( ++v7 >= 10 )
      return v4;
  }
  v9 = &this->m_buffers[v7];
  if ( v9 )
  {
    v10 = 0;
    v11 = (unsigned int)dtlsSocket;
    v12 = 0;
    while ( 1 )
    {
      m_offset = v9->m_offset;
      if ( v10 >= m_offset )
        break;
      v14 = v10;
      v15 = v10 + 4;
      if ( (unsigned int)v15 > m_offset )
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      else
        v11 = *(_DWORD *)&v9->m_buffer[v14];
      if ( (unsigned int)v15 > m_offset )
        break;
      bdHandleAssert(v11 < 1024 - (unsigned __int64)(unsigned int)v15, "length < sizeof(m_buffer) - offset", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::flushBuffer", 0x94u, "Buffer overflow");
      v16 = dtlsSocket->sendTo(dtlsSocket, realAddr, &v9->m_buffer[v15], v11);
      v17 = v16;
      if ( v16 < 0 )
      {
        bdAddr::toString((bdAddr *)realAddr, str, 0x16ui64);
        v18 = v17;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/socketbuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::flushBuffer", 0xA0u, "Failed to send buffered packet to %s, error %d", str, v18);
        break;
      }
      v12 += v16;
      v10 = v11 + v15;
    }
    *(_QWORD *)&v9->m_offset = 0i64;
    v4 = v12;
    --this->m_numActiveBuffers;
  }
  return v4;
}

/*
==============
bdPacketBufferInternal::flushBuffer
==============
*/
__int64 bdPacketBufferInternal::flushBuffer(bdPacketBufferInternal *this, bdDTLSAssociation *dtlsSocket, const bdAddr *realAddr)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int i; 
  unsigned int m_offset; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v15; 
  unsigned int v16; 
  char str[24]; 

  v3 = v16;
  v4 = 0;
  for ( i = 0; ; i = v3 + v11 )
  {
    m_offset = this->m_offset;
    if ( i >= m_offset )
      break;
    v10 = i;
    v11 = i + 4;
    if ( (unsigned int)v11 > m_offset )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      v3 = *(_DWORD *)&this->m_buffer[v10];
    if ( (unsigned int)v11 > m_offset )
      break;
    bdHandleAssert(v3 < 1024 - (unsigned __int64)(unsigned int)v11, "length < sizeof(m_buffer) - offset", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::flushBuffer", 0x94u, "Buffer overflow");
    v12 = dtlsSocket->sendTo(dtlsSocket, realAddr, &this->m_buffer[v11], v3);
    v13 = v12;
    if ( v12 < 0 )
    {
      bdAddr::toString((bdAddr *)realAddr, str, 0x16ui64);
      v15 = v13;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/socketbuffer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdpacketbuffer.cpp", "bdPacketBufferInternal::flushBuffer", 0xA0u, "Failed to send buffered packet to %s, error %d", str, v15);
      break;
    }
    v4 += v12;
  }
  *(_QWORD *)&this->m_offset = 0i64;
  return v4;
}

/*
==============
bdPacketBufferInternal::getKey
==============
*/
__int64 bdPacketBufferInternal::getKey(bdPacketBufferInternal *this)
{
  return this->m_key;
}

/*
==============
bdPacketBufferInternal::setKey
==============
*/
void bdPacketBufferInternal::setKey(bdPacketBufferInternal *this, unsigned int key)
{
  this->m_key = key;
}

