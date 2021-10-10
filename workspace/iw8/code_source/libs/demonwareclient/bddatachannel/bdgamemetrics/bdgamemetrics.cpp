/*
==============
bdGameMetrics::bdGameMetrics
==============
*/

void __fastcall bdGameMetrics::bdGameMetrics(bdGameMetrics *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, unsigned __int64 userid)
{
  ??0bdGameMetrics@@QEAA@QEBD0000_K@Z(this, ingestionEndpoint, authToken, bucket, category, client, userid);
}

/*
==============
bdGameMetrics::enqueue
==============
*/

bool __fastcall bdGameMetrics::enqueue(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?enqueue@bdGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
bdGameMetrics::prepare
==============
*/

bool __fastcall bdGameMetrics::prepare(bdGameMetrics *this)
{
  return ?prepare@bdGameMetrics@@QEAA_NXZ(this);
}

/*
==============
bdGameMetrics::setUpdateInterval
==============
*/

bool __fastcall bdGameMetrics::setUpdateInterval(bdGameMetrics *this, unsigned int interval)
{
  return ?setUpdateInterval@bdGameMetrics@@QEAA_NI@Z(this, interval);
}

/*
==============
bdGameMetrics::init
==============
*/

bool __fastcall bdGameMetrics::init(bdGameMetrics *this, unsigned int count)
{
  return ?init@bdGameMetrics@@QEAA_NI@Z(this, count);
}

/*
==============
bdGameMetrics::set
==============
*/

bool __fastcall bdGameMetrics::set(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?set@bdGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
bdMetricsRingBuffer::init
==============
*/

bool __fastcall bdMetricsRingBuffer::init(bdMetricsRingBuffer *this, unsigned int numberOfEntries)
{
  return ?init@bdMetricsRingBuffer@@QEAA_NI@Z(this, numberOfEntries);
}

/*
==============
bdGameMetrics::timing
==============
*/

bool __fastcall bdGameMetrics::timing(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?timing@bdGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
bdGameMetrics::gauge
==============
*/

bool __fastcall bdGameMetrics::gauge(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?gauge@bdGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
bdGameMetrics::getUpdateInterval
==============
*/

unsigned __int64 __fastcall bdGameMetrics::getUpdateInterval(bdGameMetrics *this)
{
  return ?getUpdateInterval@bdGameMetrics@@QEBA_KXZ(this);
}

/*
==============
bdMetricsRingBuffer::bdMetricsRingBuffer
==============
*/

void __fastcall bdMetricsRingBuffer::bdMetricsRingBuffer(bdMetricsRingBuffer *this)
{
  ??0bdMetricsRingBuffer@@QEAA@XZ(this);
}

/*
==============
bdMetricsRingBuffer::getDataSize
==============
*/

unsigned int __fastcall bdMetricsRingBuffer::getDataSize(bdMetricsRingBuffer *this)
{
  return ?getDataSize@bdMetricsRingBuffer@@QEAAIXZ(this);
}

/*
==============
bdGameMetrics::counter
==============
*/

bool __fastcall bdGameMetrics::counter(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?counter@bdGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
bdMetricsRingBuffer::getDataPtr
==============
*/

const unsigned __int8 *__fastcall bdMetricsRingBuffer::getDataPtr(bdMetricsRingBuffer *this)
{
  return ?getDataPtr@bdMetricsRingBuffer@@QEBAPEBEXZ(this);
}

/*
==============
bdMetricsRingBuffer::swap
==============
*/

void __fastcall bdMetricsRingBuffer::swap(bdMetricsRingBuffer *this)
{
  ?swap@bdMetricsRingBuffer@@QEAAXXZ(this);
}

/*
==============
bdMetricsRingBuffer::writeMetric
==============
*/

bool __fastcall bdMetricsRingBuffer::writeMetric(bdMetricsRingBuffer *this, unsigned __int64 timestamp, const char *const name, long double value, unsigned __int64 metrictype)
{
  return ?writeMetric@bdMetricsRingBuffer@@QEAA_N_KQEBDN0@Z(this, timestamp, name, value, metrictype);
}

/*
==============
bdGameMetrics::bdGameMetrics
==============
*/
void bdGameMetrics::bdGameMetrics(bdGameMetrics *this, const char *const ingestionEndpoint, const char *const authToken, const char *const bucket, const char *const category, const char *const client, unsigned __int64 userid)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v9; 
  bdByteBuffer *v10; 
  bdByteBuffer *v11; 

  bdDataChannelDispatch::bdDataChannelDispatch(this, ingestionEndpoint, authToken, bucket, category, client, userid, BD_CONTENT_TYPE_PROTO, 0);
  this->__vftable = (bdGameMetrics_vtbl *)&bdGameMetrics::`vftable';
  `eh vector constructor iterator'(&this->m_items, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGameMetricsBuffer::bdGameMetricsBuffer, (void (__fastcall *)(void *))bdGameMetricsBuffer::~bdGameMetricsBuffer);
  this->m_items.m_activeRing = 0;
  this->m_items.m_ringBuffer[0].byteBufferSize = 0;
  m_ptr = this->m_items.m_ringBuffer[0].metricsBuffer.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v9 = this->m_items.m_ringBuffer[0].metricsBuffer.m_ptr;
      if ( v9 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v9->~bdReferencable)(v9, 1i64);
    }
  }
  this->m_items.m_ringBuffer[0].metricsBuffer.m_ptr = NULL;
  this->m_items.m_ringBuffer[1].byteBufferSize = 0;
  v10 = this->m_items.m_ringBuffer[1].metricsBuffer.m_ptr;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v11 = this->m_items.m_ringBuffer[1].metricsBuffer.m_ptr;
      if ( v11 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v11->~bdReferencable)(v11, 1i64);
    }
  }
  this->m_items.m_ringBuffer[1].metricsBuffer.m_ptr = NULL;
  this->m_minimumPostInterval = 60i64;
}

/*
==============
bdMetricsRingBuffer::bdMetricsRingBuffer
==============
*/
void bdMetricsRingBuffer::bdMetricsRingBuffer(bdMetricsRingBuffer *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 
  bdByteBuffer *v4; 
  bdByteBuffer *v5; 

  `eh vector constructor iterator'(this, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGameMetricsBuffer::bdGameMetricsBuffer, (void (__fastcall *)(void *))bdGameMetricsBuffer::~bdGameMetricsBuffer);
  this->m_activeRing = 0;
  this->m_ringBuffer[0].byteBufferSize = 0;
  m_ptr = this->m_ringBuffer[0].metricsBuffer.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = this->m_ringBuffer[0].metricsBuffer.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
  }
  this->m_ringBuffer[0].metricsBuffer.m_ptr = NULL;
  this->m_ringBuffer[1].byteBufferSize = 0;
  v4 = this->m_ringBuffer[1].metricsBuffer.m_ptr;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v5 = this->m_ringBuffer[1].metricsBuffer.m_ptr;
      if ( v5 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v5->~bdReferencable)(v5, 1i64);
    }
  }
  this->m_ringBuffer[1].metricsBuffer.m_ptr = NULL;
}

/*
==============
bdGameMetrics::counter
==============
*/
bool bdGameMetrics::counter(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return bdMetricsRingBuffer::writeMetric(&this->m_items, timestamp, name, value, 1ui64);
}

/*
==============
bdGameMetrics::enqueue
==============
*/
bool bdGameMetrics::enqueue(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return bdMetricsRingBuffer::writeMetric(&this->m_items, timestamp, name, value, 1ui64);
}

/*
==============
bdGameMetrics::gauge
==============
*/
bool bdGameMetrics::gauge(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return bdMetricsRingBuffer::writeMetric(&this->m_items, timestamp, name, value, 2ui64);
}

/*
==============
bdMetricsRingBuffer::getDataPtr
==============
*/
unsigned __int8 *bdMetricsRingBuffer::getDataPtr(bdMetricsRingBuffer *this)
{
  return this->m_ringBuffer[this->m_activeRing].metricsBuffer.m_ptr->m_readPtr;
}

/*
==============
bdMetricsRingBuffer::getDataSize
==============
*/
unsigned int bdMetricsRingBuffer::getDataSize(bdMetricsRingBuffer *this)
{
  return bdStructSerializationOutputStream::getWrittenSize(&this->m_ringBuffer[this->m_activeRing].metricStream);
}

/*
==============
bdGameMetrics::getUpdateInterval
==============
*/
unsigned __int64 bdGameMetrics::getUpdateInterval(bdGameMetrics *this)
{
  return this->m_minimumPostInterval;
}

/*
==============
bdGameMetrics::init
==============
*/
bool bdGameMetrics::init(bdGameMetrics *this, unsigned int count)
{
  unsigned int v4; 
  __int64 v5; 
  bdReference<bdByteBuffer> *p_metricsBuffer; 
  bdByteBuffer *v7; 
  bdByteBuffer *v8; 
  unsigned int m_ptr; 
  bdReference<bdByteBuffer> buffer; 
  bdByteBuffer *v12; 

  if ( !bdDataChannelDispatch::init(this) || !bdDataChannelDispatch::setStatus(this, BD_DISPATCH_STATUS_OK, "No Error") )
    return 0;
  v4 = 144 * count;
  v5 = 2i64;
  p_metricsBuffer = &this->m_items.m_ringBuffer[0].metricsBuffer;
  do
  {
    LODWORD(p_metricsBuffer[-1].m_ptr) = v4;
    v7 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    v8 = v7;
    v12 = v7;
    if ( v7 )
    {
      m_ptr = (unsigned int)p_metricsBuffer[-1].m_ptr;
      v7->m_refCount.m_value._My_val = 0;
      v7->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
      v7->m_size = m_ptr;
      v7->m_data = NULL;
      *(_WORD *)&v7->m_typeChecked = 0;
      v7->m_allocatedData = 0;
      bdByteBuffer::init(v7, m_ptr);
    }
    else
    {
      v8 = NULL;
    }
    if ( p_metricsBuffer->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_metricsBuffer->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_metricsBuffer->m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))p_metricsBuffer->m_ptr->~bdReferencable)(p_metricsBuffer->m_ptr, 1i64);
    p_metricsBuffer->m_ptr = v8;
    if ( v8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
      v8 = p_metricsBuffer->m_ptr;
    }
    buffer.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    bdStructSerializationOutputStream::prepare((bdStructSerializationOutputStream *)&p_metricsBuffer[1], (bdReference<bdByteBuffer>)&buffer, v4);
    p_metricsBuffer += 5;
    --v5;
  }
  while ( v5 );
  return this->m_items.m_ringBuffer[0].metricsBuffer.m_ptr && this->m_items.m_ringBuffer[1].metricsBuffer.m_ptr;
}

/*
==============
bdMetricsRingBuffer::init
==============
*/
bool bdMetricsRingBuffer::init(bdMetricsRingBuffer *this, unsigned int numberOfEntries)
{
  unsigned int v3; 
  bdReference<bdByteBuffer> *p_metricsBuffer; 
  __int64 v5; 
  bdByteBuffer *v6; 
  bdByteBuffer *v7; 
  unsigned int m_ptr; 
  bdReference<bdByteBuffer> buffer; 
  bdByteBuffer *v11; 

  v3 = 144 * numberOfEntries;
  p_metricsBuffer = &this->m_ringBuffer[0].metricsBuffer;
  v5 = 2i64;
  do
  {
    LODWORD(p_metricsBuffer[-1].m_ptr) = v3;
    v6 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
    v7 = v6;
    v11 = v6;
    if ( v6 )
    {
      m_ptr = (unsigned int)p_metricsBuffer[-1].m_ptr;
      v6->m_refCount.m_value._My_val = 0;
      v6->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
      v6->m_size = m_ptr;
      v6->m_data = NULL;
      *(_WORD *)&v6->m_typeChecked = 0;
      v6->m_allocatedData = 0;
      bdByteBuffer::init(v6, m_ptr);
    }
    else
    {
      v7 = NULL;
    }
    if ( p_metricsBuffer->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_metricsBuffer->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_metricsBuffer->m_ptr )
      ((void (__fastcall *)(bdByteBuffer *, __int64))p_metricsBuffer->m_ptr->~bdReferencable)(p_metricsBuffer->m_ptr, 1i64);
    p_metricsBuffer->m_ptr = v7;
    if ( v7 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
      v7 = p_metricsBuffer->m_ptr;
    }
    buffer.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    bdStructSerializationOutputStream::prepare((bdStructSerializationOutputStream *)&p_metricsBuffer[1], (bdReference<bdByteBuffer>)&buffer, v3);
    p_metricsBuffer += 5;
    --v5;
  }
  while ( v5 );
  return this->m_ringBuffer[0].metricsBuffer.m_ptr && this->m_ringBuffer[1].metricsBuffer.m_ptr;
}

/*
==============
bdGameMetrics::prepare
==============
*/
bool bdGameMetrics::prepare(bdGameMetrics *this)
{
  bool v2; 
  __int64 POSIXTimestamp; 
  unsigned __int64 m_minimumPostInterval; 
  unsigned int WrittenSize; 
  _BOOL8 v7; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 *m_data; 
  bdByteBuffer *v10; 
  bdStructSerializationOutputStream *p_metricStream; 
  unsigned int byteBufferSize; 
  bdReference<bdByteBuffer> buffer; 

  v2 = 0;
  POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
  m_minimumPostInterval = this->m_minimumPostInterval;
  if ( POSIXTimestamp - bdDataChannelDispatch::getLastPostTime(this) >= m_minimumPostInterval )
  {
    WrittenSize = bdStructSerializationOutputStream::getWrittenSize(&this->m_items.m_ringBuffer[this->m_items.m_activeRing].metricStream);
    if ( WrittenSize )
    {
      v2 = bdDataChannelDispatch::write(this, this->m_items.m_ringBuffer[this->m_items.m_activeRing].metricsBuffer.m_ptr->m_readPtr, WrittenSize, SERIALIZATION_FORMAT_DDL4, COMPRESSION_TYPE_NONE);
      v7 = this->m_items.m_activeRing == 0;
      this->m_items.m_activeRing = v7;
      m_ptr = this->m_items.m_ringBuffer[v7].metricsBuffer.m_ptr;
      m_data = m_ptr->m_data;
      m_ptr->m_writePtr = m_data;
      m_ptr->m_readPtr = m_data;
      v10 = this->m_items.m_ringBuffer[this->m_items.m_activeRing].metricsBuffer.m_ptr;
      p_metricStream = &this->m_items.m_ringBuffer[this->m_items.m_activeRing].metricStream;
      byteBufferSize = this->m_items.m_ringBuffer[this->m_items.m_activeRing].byteBufferSize;
      buffer.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      bdStructSerializationOutputStream::prepare(p_metricStream, (bdReference<bdByteBuffer>)&buffer, byteBufferSize);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannel/bdGameMetrics", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdgamemetrics\\bdgamemetrics.cpp", "bdGameMetrics::prepare", 0xB4u, "Attempting to construct an empty Metrics Payload.");
      bdDataChannelDispatch::setStatus(this, BD_DISPATCH_STATUS_FAILED, "Attempting to construct an empty Metrics Payload.");
    }
    return v2;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannel/bdGameMetrics", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bdgamemetrics\\bdgamemetrics.cpp", "bdGameMetrics::prepare", 0xA6u, "Minimum time between data upload too short.");
    return 0;
  }
}

/*
==============
bdGameMetrics::set
==============
*/
bool bdGameMetrics::set(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return bdMetricsRingBuffer::writeMetric(&this->m_items, timestamp, name, value, 3ui64);
}

/*
==============
bdGameMetrics::setUpdateInterval
==============
*/
char bdGameMetrics::setUpdateInterval(bdGameMetrics *this, unsigned int interval)
{
  if ( !interval )
    return 0;
  this->m_minimumPostInterval = interval;
  return 1;
}

/*
==============
bdMetricsRingBuffer::swap
==============
*/
void bdMetricsRingBuffer::swap(bdMetricsRingBuffer *this)
{
  _BOOL8 v1; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 *m_data; 
  __int64 m_activeRing; 
  bdByteBuffer *v5; 
  unsigned int byteBufferSize; 
  bdReference<bdByteBuffer> buffer; 

  v1 = this->m_activeRing == 0;
  this->m_activeRing = v1;
  m_ptr = this->m_ringBuffer[v1].metricsBuffer.m_ptr;
  m_data = m_ptr->m_data;
  m_ptr->m_writePtr = m_data;
  m_ptr->m_readPtr = m_data;
  m_activeRing = this->m_activeRing;
  v5 = this->m_ringBuffer[m_activeRing].metricsBuffer.m_ptr;
  byteBufferSize = this->m_ringBuffer[m_activeRing].byteBufferSize;
  buffer.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdStructSerializationOutputStream::prepare(&this->m_ringBuffer[m_activeRing].metricStream, (bdReference<bdByteBuffer>)&buffer, byteBufferSize);
}

/*
==============
bdGameMetrics::timing
==============
*/
bool bdGameMetrics::timing(bdGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return bdMetricsRingBuffer::writeMetric(&this->m_items, timestamp, name, value, 4ui64);
}

/*
==============
bdMetricsRingBuffer::writeMetric
==============
*/
__int64 bdMetricsRingBuffer::writeMetric(bdMetricsRingBuffer *this, unsigned __int64 timestamp, const char *const name, long double value, unsigned __int64 metrictype)
{
  bdByteBuffer *v8; 
  bdByteBuffer *v9; 
  unsigned __int8 *m_data; 
  bool v11; 
  unsigned int v12; 
  void *v13; 
  bool v14; 
  unsigned int WrittenSize; 
  __int64 m_activeRing; 
  bdStructSerializationOutputStream *p_metricStream; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 v19; 
  char v21; 
  bdByteBuffer *v22; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v24; 
  bdByteBuffer *v25; 
  bdStructSerializationOutputStream stream; 

  v24 = -2i64;
  v21 = 0;
  v8 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v9 = v8;
  buffer.m_ptr = v8;
  if ( v8 )
  {
    v8->m_refCount.m_value._My_val = 0;
    v8->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v8->m_size = 256;
    v8->m_data = NULL;
    *(_WORD *)&v8->m_typeChecked = 0;
    v8->m_allocatedData = 0;
    bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
    v9->m_size = 256;
    v9->allocateBuffer(v9);
    m_data = v9->m_data;
    v9->m_writePtr = m_data;
    v9->m_readPtr = m_data;
  }
  else
  {
    v9 = NULL;
  }
  v25 = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdStructSerializationOutputStream::bdStructSerializationOutputStream(&stream);
  buffer.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  bdStructSerializationOutputStream::prepare(&stream, (bdReference<bdByteBuffer>)&buffer, 0x100u);
  v11 = bdProtobufHelper::encodeTag(&stream, 1u, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&stream, timestamp);
  v12 = 128;
  v13 = memchr_0(name, 0, 0x80ui64);
  if ( v13 )
    v12 = (_DWORD)v13 - (_DWORD)name;
  v14 = v11 && bdProtobufHelper::encodeTag(&stream, 2u, WIRETYPE_STRING) && bdProtobufHelper::encodeString(&stream, name, v12) && bdProtobufHelper::encodeTag(&stream, 3u, WIRETYPE_64BIT) && bdProtobufHelper::encode64bits(&stream, value) && bdProtobufHelper::encodeTag(&stream, 4u, WIRETYPE_VARINT) && bdProtobufHelper::encodeVarInt(&stream, metrictype);
  WrittenSize = bdStructSerializationOutputStream::getWrittenSize(&stream);
  if ( !v14 || (m_activeRing = this->m_activeRing, this->m_ringBuffer[m_activeRing].metricStream.m_bufferSize <= WrittenSize) || !bdProtobufHelper::encodeTag(&this->m_ringBuffer[m_activeRing].metricStream, 1u, WIRETYPE_STRING) || !bdProtobufHelper::encodeVarInt(&this->m_ringBuffer[this->m_activeRing].metricStream, WrittenSize) )
  {
    m_ptr = v22;
LABEL_32:
    v19 = 0;
    goto LABEL_33;
  }
  p_metricStream = &this->m_ringBuffer[this->m_activeRing].metricStream;
  m_ptr = stream.m_buffer.m_ptr;
  v22 = stream.m_buffer.m_ptr;
  if ( stream.m_buffer.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&stream.m_buffer.m_ptr->m_refCount, 1u);
    m_ptr = v22;
  }
  v21 = 1;
  if ( !bdStructSerializationOutputStream::write(p_metricStream, m_ptr->m_data, WrittenSize) )
    goto LABEL_32;
  v19 = 1;
LABEL_33:
  if ( (v21 & 1) != 0 && m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v22->~bdReferencable)(v22, 1i64);
  bdStructSerializationOutputStream::~bdStructSerializationOutputStream(&stream);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v9->~bdReferencable)(v9, 1i64);
  return v19;
}

