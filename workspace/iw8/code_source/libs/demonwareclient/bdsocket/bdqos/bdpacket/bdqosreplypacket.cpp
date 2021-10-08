/*
==============
bdQoSReplyPacket::getDataSize
==============
*/

unsigned int __fastcall bdQoSReplyPacket::getDataSize(bdQoSReplyPacket *this)
{
  return ?getDataSize@bdQoSReplyPacket@@QEBAIXZ(this);
}

/*
==============
bdQoSReplyPacket::getSerializedSize
==============
*/

unsigned int __fastcall bdQoSReplyPacket::getSerializedSize(bdQoSReplyPacket *this)
{
  return ?getSerializedSize@bdQoSReplyPacket@@QEAAIXZ(this);
}

/*
==============
bdQoSReplyPacket::serialize
==============
*/

bool __fastcall bdQoSReplyPacket::serialize(bdQoSReplyPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdQoSReplyPacket@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdQoSReplyPacket::~bdQoSReplyPacket
==============
*/

void __fastcall bdQoSReplyPacket::~bdQoSReplyPacket(bdQoSReplyPacket *this)
{
  ??1bdQoSReplyPacket@@QEAA@XZ(this);
}

/*
==============
bdQoSReplyPacket::deserialize
==============
*/

bool __fastcall bdQoSReplyPacket::deserialize(bdQoSReplyPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdQoSReplyPacket@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdQoSReplyPacket::setHasData
==============
*/

void __fastcall bdQoSReplyPacket::setHasData(bdQoSReplyPacket *this, bool hasData)
{
  ?setHasData@bdQoSReplyPacket@@QEAAX_N@Z(this, hasData);
}

/*
==============
bdQoSReplyPacket::bdQoSReplyPacket
==============
*/

void __fastcall bdQoSReplyPacket::bdQoSReplyPacket(bdQoSReplyPacket *this)
{
  ??0bdQoSReplyPacket@@QEAA@XZ(this);
}

/*
==============
bdQoSReplyPacket::setHostProcessingTime
==============
*/

void __fastcall bdQoSReplyPacket::setHostProcessingTime(bdQoSReplyPacket *this, float hostProcessingTime)
{
  ?setHostProcessingTime@bdQoSReplyPacket@@QEAAXM@Z(this, hostProcessingTime);
}

/*
==============
bdQoSReplyPacket::getData
==============
*/

unsigned __int8 *__fastcall bdQoSReplyPacket::getData(bdQoSReplyPacket *this)
{
  return ?getData@bdQoSReplyPacket@@QEAAPEAEXZ(this);
}

/*
==============
bdQoSReplyPacket::getHeaderSize
==============
*/

unsigned int __fastcall bdQoSReplyPacket::getHeaderSize(bdQoSReplyPacket *this)
{
  return ?getHeaderSize@bdQoSReplyPacket@@IEAAIXZ(this);
}

/*
==============
bdQoSReplyPacket::getId
==============
*/

unsigned int __fastcall bdQoSReplyPacket::getId(bdQoSReplyPacket *this)
{
  return ?getId@bdQoSReplyPacket@@QEBAIXZ(this);
}

/*
==============
bdQoSReplyPacket::getType
==============
*/

unsigned __int8 __fastcall bdQoSReplyPacket::getType(bdQoSReplyPacket *this)
{
  return ?getType@bdQoSReplyPacket@@QEBAEXZ(this);
}

/*
==============
bdQoSReplyPacket::setData
==============
*/

bool __fastcall bdQoSReplyPacket::setData(bdQoSReplyPacket *this, const unsigned __int8 *data, unsigned int dataSize)
{
  return ?setData@bdQoSReplyPacket@@QEAA_NPEBEI@Z(this, data, dataSize);
}

/*
==============
bdQoSReplyPacket::getEnabled
==============
*/

bool __fastcall bdQoSReplyPacket::getEnabled(bdQoSReplyPacket *this)
{
  return ?getEnabled@bdQoSReplyPacket@@QEBA_NXZ(this);
}

/*
==============
bdQoSReplyPacket::setId
==============
*/

void __fastcall bdQoSReplyPacket::setId(bdQoSReplyPacket *this, unsigned int id)
{
  ?setId@bdQoSReplyPacket@@QEAAXI@Z(this, id);
}

/*
==============
bdQoSReplyPacket::setEnabled
==============
*/

void __fastcall bdQoSReplyPacket::setEnabled(bdQoSReplyPacket *this, bool mode)
{
  ?setEnabled@bdQoSReplyPacket@@QEAAX_N@Z(this, mode);
}

/*
==============
bdQoSReplyPacket::bdQoSReplyPacket
==============
*/

void __fastcall bdQoSReplyPacket::bdQoSReplyPacket(bdQoSReplyPacket *this, unsigned int id, unsigned __int64 timestamp)
{
  ??0bdQoSReplyPacket@@QEAA@I_K@Z(this, id, timestamp);
}

/*
==============
bdQoSReplyPacket::getBandwidth
==============
*/

unsigned int __fastcall bdQoSReplyPacket::getBandwidth(bdQoSReplyPacket *this)
{
  return ?getBandwidth@bdQoSReplyPacket@@QEBAIXZ(this);
}

/*
==============
bdQoSReplyPacket::getElapsedTime
==============
*/

double __fastcall bdQoSReplyPacket::getElapsedTime(bdQoSReplyPacket *this)
{
  double result; 

  *(float *)&result = ?getElapsedTime@bdQoSReplyPacket@@QEBAMXZ(this);
  return result;
}

/*
==============
bdQoSReplyPacket::setTimestamp
==============
*/

void __fastcall bdQoSReplyPacket::setTimestamp(bdQoSReplyPacket *this, unsigned __int64 timestamp)
{
  ?setTimestamp@bdQoSReplyPacket@@QEAAX_K@Z(this, timestamp);
}

/*
==============
bdQoSReplyPacket::setBandwidth
==============
*/

void __fastcall bdQoSReplyPacket::setBandwidth(bdQoSReplyPacket *this, unsigned int bandwidth)
{
  ?setBandwidth@bdQoSReplyPacket@@QEAAXI@Z(this, bandwidth);
}

/*
==============
bdQoSReplyPacket::bdQoSReplyPacket
==============
*/
void bdQoSReplyPacket::bdQoSReplyPacket(bdQoSReplyPacket *this, unsigned int id, unsigned __int64 timestamp)
{
  this->m_type = 41;
  *(_QWORD *)&this->m_bandwidth = 0i64;
  this->m_data = NULL;
  *(_QWORD *)&this->m_dataSize = 0i64;
  this->m_hasData = 0;
  this->m_id = id;
  this->m_timestamp = timestamp;
  this->m_enabledMode = 1;
}

/*
==============
bdQoSReplyPacket::bdQoSReplyPacket
==============
*/
void bdQoSReplyPacket::bdQoSReplyPacket(bdQoSReplyPacket *this)
{
  this->m_type = 41;
  this->m_id = 0;
  this->m_timestamp = 0i64;
  *(_QWORD *)&this->m_bandwidth = 0i64;
  this->m_data = NULL;
  *(_QWORD *)&this->m_dataSize = 0i64;
  this->m_hasData = 0;
  this->m_enabledMode = 1;
}

/*
==============
bdQoSReplyPacket::~bdQoSReplyPacket
==============
*/
void bdQoSReplyPacket::~bdQoSReplyPacket(bdQoSReplyPacket *this)
{
  unsigned __int8 *m_data; 

  m_data = this->m_data;
  if ( m_data )
  {
    bdMemory::deallocate(m_data);
    this->m_data = NULL;
    this->m_dataSize = 0;
  }
}

/*
==============
bdQoSReplyPacket::deserialize
==============
*/
char bdQoSReplyPacket::deserialize(bdQoSReplyPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v10; 
  unsigned int v12; 
  __int64 v14; 
  unsigned int v15; 
  char v17; 
  unsigned int m_dataSize; 
  unsigned __int8 *m_data; 
  unsigned __int8 *v20; 
  int v22; 
  unsigned int *newOffseta; 

  _RSI = (char *)data;
  _R14 = this;
  v10 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v10 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  if ( v10 > size && _RSI || !bdBytePacker::removeBasicType<unsigned int>(_RSI, size, *newOffset, newOffset, &_R14->m_id) )
    goto LABEL_25;
  _RAX = *newOffset;
  v12 = _RAX + 8;
  *newOffset = _RAX + 8;
  if ( _RSI )
  {
    if ( v12 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+rsi]
        vmovsd  [rsp+68h+newOffset], xmm0
      }
      _R14->m_timestamp = (unsigned __int64)newOffseta;
    }
  }
  if ( v12 > size && _RSI || !bdBytePacker::removeBasicType<bool>(_RSI, size, *newOffset, newOffset, &_R14->m_enabledMode) || !bdBytePacker::removeBasicType<unsigned int>(_RSI, size, *newOffset, newOffset, &_R14->m_dataSize) || !bdBytePacker::removeBasicType<unsigned int>(_RSI, size, *newOffset, newOffset, &_R14->m_bandwidth) )
    goto LABEL_25;
  v14 = *newOffset;
  v15 = v14 + 4;
  *newOffset = v14 + 4;
  if ( _RSI )
  {
    if ( v15 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    }
    else
    {
      v22 = *(_DWORD *)&_RSI[v14];
      __asm
      {
        vmovss  xmm0, [rsp+68h+arg_10]
        vmovss  dword ptr [r14+18h], xmm0
      }
    }
  }
  if ( (v15 <= size || !_RSI) && bdBytePacker::removeBasicType<bool>(_RSI, size, *newOffset, newOffset, &_R14->m_hasData) )
    v17 = 1;
  else
LABEL_25:
    v17 = 0;
  m_dataSize = _R14->m_dataSize;
  if ( size - *newOffset != m_dataSize )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::deserialize", 0xCEu, "Received a packet with invalid dataSize!");
LABEL_34:
    v17 = 0;
    goto LABEL_35;
  }
  if ( !v17 )
  {
LABEL_35:
    *newOffset = offset;
    return v17;
  }
  m_data = _R14->m_data;
  if ( m_data )
  {
    bdMemory::deallocate(m_data);
    m_dataSize = _R14->m_dataSize;
    _R14->m_data = NULL;
  }
  if ( !m_dataSize )
    return v17;
  v20 = (unsigned __int8 *)bdMemory::allocate(m_dataSize);
  _R14->m_data = v20;
  if ( !v20 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::deserialize", 0xDDu, "Failed to allocate data buffer.");
    goto LABEL_34;
  }
  if ( !bdBytePacker::removeBuffer(_RSI, size, *newOffset, newOffset, v20, _R14->m_dataSize) )
    goto LABEL_34;
  return 1;
}

/*
==============
bdQoSReplyPacket::getBandwidth
==============
*/
__int64 bdQoSReplyPacket::getBandwidth(bdQoSReplyPacket *this)
{
  return this->m_bandwidth;
}

/*
==============
bdQoSReplyPacket::getData
==============
*/
unsigned __int8 *bdQoSReplyPacket::getData(bdQoSReplyPacket *this)
{
  return this->m_data;
}

/*
==============
bdQoSReplyPacket::getDataSize
==============
*/
__int64 bdQoSReplyPacket::getDataSize(bdQoSReplyPacket *this)
{
  return this->m_dataSize;
}

/*
==============
bdQoSReplyPacket::getElapsedTime
==============
*/
float bdQoSReplyPacket::getElapsedTime(bdQoSReplyPacket *this)
{
  unsigned __int64 HiResTimeStamp; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_timestamp, HiResTimeStamp);
  __asm { vsubss  xmm0, xmm0, dword ptr [rbx+18h] }
  return *(float *)&_XMM0;
}

/*
==============
bdQoSReplyPacket::getEnabled
==============
*/
_BOOL8 bdQoSReplyPacket::getEnabled(bdQoSReplyPacket *this)
{
  return this->m_enabledMode;
}

/*
==============
bdQoSReplyPacket::getHeaderSize
==============
*/
__int64 bdQoSReplyPacket::getHeaderSize(bdQoSReplyPacket *this)
{
  __int64 result; 
  unsigned int m_dataSize; 
  unsigned int v4; 
  bool appended; 
  unsigned int v6; 

  result = bdQoSReplyPacket::headerSize;
  if ( !bdQoSReplyPacket::headerSize )
  {
    m_dataSize = this->m_dataSize;
    this->m_dataSize = 0;
    bdQoSReplyPacket::headerSize = 1;
    bdHandleAssert(result + 1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    bdQoSReplyPacket::headerSize += 4;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdQoSReplyPacket::headerSize += 8;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
    ++bdQoSReplyPacket::headerSize;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    bdQoSReplyPacket::headerSize += 4;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdQoSReplyPacket::headerSize += 4;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdQoSReplyPacket::headerSize += 4;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    ++bdQoSReplyPacket::headerSize;
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
    v4 = this->m_dataSize;
    if ( v4 && this->m_hasData )
    {
      appended = bdBytePacker::appendBuffer(NULL, 0xFFFFu, bdQoSReplyPacket::headerSize, &bdQoSReplyPacket::headerSize, this->m_data, v4);
      v6 = bdQoSReplyPacket::headerSize;
      if ( !appended )
        v6 = 0;
      bdQoSReplyPacket::headerSize = v6;
    }
    this->m_dataSize = m_dataSize;
    return bdQoSReplyPacket::headerSize;
  }
  return result;
}

/*
==============
bdQoSReplyPacket::getId
==============
*/
__int64 bdQoSReplyPacket::getId(bdQoSReplyPacket *this)
{
  return this->m_id;
}

/*
==============
bdQoSReplyPacket::getSerializedSize
==============
*/
__int64 bdQoSReplyPacket::getSerializedSize(bdQoSReplyPacket *this)
{
  unsigned int m_dataSize; 

  this->m_serializedSize = 1;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  this->m_serializedSize += 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  this->m_serializedSize += 8;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  ++this->m_serializedSize;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  this->m_serializedSize += 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  this->m_serializedSize += 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  this->m_serializedSize += 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  ++this->m_serializedSize;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  m_dataSize = this->m_dataSize;
  if ( !m_dataSize || !this->m_hasData || bdBytePacker::appendBuffer(NULL, 0xFFFFu, this->m_serializedSize, &this->m_serializedSize, this->m_data, m_dataSize) )
    return this->m_serializedSize;
  this->m_serializedSize = 0;
  return 0i64;
}

/*
==============
bdQoSReplyPacket::getType
==============
*/
__int64 bdQoSReplyPacket::getType(bdQoSReplyPacket *this)
{
  return this->m_type;
}

/*
==============
bdQoSReplyPacket::serialize
==============
*/
bool bdQoSReplyPacket::serialize(bdQoSReplyPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v7; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  char v17; 
  bool *p_m_hasData; 
  bool result; 
  unsigned int m_dataSize; 
  __int64 v21; 
  unsigned int v22; 
  bool v23; 
  __int64 v24; 
  unsigned int v25; 
  bool v26; 
  int v28; 
  unsigned int *newOffseta; 

  v7 = offset;
  _R14 = this;
  v10 = offset + 1;
  *newOffset = offset + 1;
  v11 = offset + 1 <= size || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_8:
    if ( v10 <= size )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v10 <= size )
  {
    *((_BYTE *)data + v7) = _R14->m_type;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_22;
LABEL_10:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &_R14->m_id) )
    goto LABEL_22;
  v12 = *newOffset;
  v13 = v12 + 8;
  *newOffset = v12 + 8;
  v14 = (int)v12 + 8 <= size || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( data )
  {
    if ( v13 > size )
      goto LABEL_19;
    newOffseta = (unsigned int *)_R14->m_timestamp;
    _RAX = (char *)data + v12;
    __asm
    {
      vmovsd  xmm0, [rsp+68h+newOffset]
      vmovsd  qword ptr [rax], xmm0
    }
  }
  if ( v13 > size )
  {
LABEL_19:
    if ( data )
      goto LABEL_22;
  }
  if ( bdBytePacker::appendBasicType<bool>(data, size, *newOffset, newOffset, &_R14->m_enabledMode) )
  {
    v17 = 1;
    goto LABEL_23;
  }
LABEL_22:
  v17 = 0;
LABEL_23:
  p_m_hasData = &_R14->m_hasData;
  if ( !v17 )
    goto LABEL_26;
  if ( !*p_m_hasData )
  {
    v21 = *newOffset;
    v22 = v21 + 4;
    *newOffset = v21 + 4;
    v23 = (int)v21 + 4 <= size || !data;
    bdHandleAssert(v23, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    if ( data )
    {
      if ( v22 > size )
      {
LABEL_40:
        if ( data )
          goto LABEL_26;
        goto LABEL_41;
      }
      *(_DWORD *)((char *)data + v21) = 0;
    }
    if ( v22 <= size )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &_R14->m_dataSize) )
    goto LABEL_26;
LABEL_41:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &_R14->m_bandwidth) )
    goto LABEL_26;
  v24 = *newOffset;
  v25 = v24 + 4;
  *newOffset = v24 + 4;
  v26 = (int)v24 + 4 <= size || !data;
  bdHandleAssert(v26, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v25 > size )
      goto LABEL_50;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+18h]
      vmovss  [rsp+68h+arg_18], xmm0
    }
    *(_DWORD *)((char *)data + v24) = v28;
  }
  if ( v25 > size )
  {
LABEL_50:
    if ( data )
      goto LABEL_26;
  }
  if ( bdBytePacker::appendBasicType<bool>(data, size, *newOffset, newOffset, &_R14->m_hasData) )
  {
    result = 1;
    goto LABEL_27;
  }
LABEL_26:
  result = 0;
LABEL_27:
  m_dataSize = _R14->m_dataSize;
  if ( m_dataSize && *p_m_hasData )
  {
    if ( result && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, _R14->m_data, m_dataSize) )
      return 1;
    result = 0;
  }
  else if ( result )
  {
    return result;
  }
  *newOffset = v7;
  return result;
}

/*
==============
bdQoSReplyPacket::setBandwidth
==============
*/
void bdQoSReplyPacket::setBandwidth(bdQoSReplyPacket *this, unsigned int bandwidth)
{
  this->m_bandwidth = bandwidth;
}

/*
==============
bdQoSReplyPacket::setData
==============
*/
char bdQoSReplyPacket::setData(bdQoSReplyPacket *this, const unsigned __int8 *data, unsigned int dataSize)
{
  unsigned __int64 v3; 
  unsigned __int8 *m_data; 
  unsigned __int8 *v7; 

  v3 = dataSize;
  if ( dataSize > 1288 - bdQoSReplyPacket::getHeaderSize(this) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::setData", 0x55u, "Attempted to set more data then available.");
    return 0;
  }
  m_data = this->m_data;
  if ( m_data )
  {
    bdMemory::deallocate(m_data);
    this->m_data = NULL;
    *(_QWORD *)&this->m_dataSize = 0i64;
  }
  if ( !(_DWORD)v3 )
    return 1;
  v7 = (unsigned __int8 *)bdMemory::allocate(v3);
  this->m_data = v7;
  if ( v7 )
  {
    this->m_dataSize = v3;
    memcpy_0(v7, data, v3);
    return 1;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::setData", 0x49u, "Failed to allocate data buffer.");
  return 0;
}

/*
==============
bdQoSReplyPacket::setEnabled
==============
*/
void bdQoSReplyPacket::setEnabled(bdQoSReplyPacket *this, bool mode)
{
  this->m_enabledMode = mode;
  this->m_serializedSize = 0;
}

/*
==============
bdQoSReplyPacket::setHasData
==============
*/
void bdQoSReplyPacket::setHasData(bdQoSReplyPacket *this, bool hasData)
{
  this->m_hasData = hasData;
}

/*
==============
bdQoSReplyPacket::setHostProcessingTime
==============
*/

void __fastcall bdQoSReplyPacket::setHostProcessingTime(bdQoSReplyPacket *this, double hostProcessingTime)
{
  __asm { vmovss  dword ptr [rcx+18h], xmm1 }
}

/*
==============
bdQoSReplyPacket::setId
==============
*/
void bdQoSReplyPacket::setId(bdQoSReplyPacket *this, unsigned int id)
{
  this->m_id = id;
}

/*
==============
bdQoSReplyPacket::setTimestamp
==============
*/
void bdQoSReplyPacket::setTimestamp(bdQoSReplyPacket *this, unsigned __int64 timestamp)
{
  this->m_timestamp = timestamp;
}

