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
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  char v14; 
  unsigned int m_dataSize; 
  unsigned __int8 *m_data; 
  unsigned __int8 *v17; 

  v9 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  if ( v9 > size && data || !bdBytePacker::removeBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_id) )
    goto LABEL_25;
  v10 = *newOffset;
  v11 = v10 + 8;
  *newOffset = v10 + 8;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    else
      this->m_timestamp = *(_QWORD *)((char *)data + v10);
  }
  if ( v11 > size && data || !bdBytePacker::removeBasicType<bool>(data, size, *newOffset, newOffset, &this->m_enabledMode) || !bdBytePacker::removeBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_dataSize) || !bdBytePacker::removeBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_bandwidth) )
    goto LABEL_25;
  v12 = *newOffset;
  v13 = v12 + 4;
  *newOffset = v12 + 4;
  if ( data )
  {
    if ( v13 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    else
      this->m_hostProcessingTime = *(float *)((char *)data + v12);
  }
  if ( (v13 <= size || !data) && bdBytePacker::removeBasicType<bool>(data, size, *newOffset, newOffset, &this->m_hasData) )
    v14 = 1;
  else
LABEL_25:
    v14 = 0;
  m_dataSize = this->m_dataSize;
  if ( size - *newOffset != m_dataSize )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::deserialize", 0xCEu, "Received a packet with invalid dataSize!");
LABEL_34:
    v14 = 0;
    goto LABEL_35;
  }
  if ( !v14 )
  {
LABEL_35:
    *newOffset = offset;
    return v14;
  }
  m_data = this->m_data;
  if ( m_data )
  {
    bdMemory::deallocate(m_data);
    m_dataSize = this->m_dataSize;
    this->m_data = NULL;
  }
  if ( !m_dataSize )
    return v14;
  v17 = (unsigned __int8 *)bdMemory::allocate(m_dataSize);
  this->m_data = v17;
  if ( !v17 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/qos", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdqos\\bdpacket\\bdqosreplypacket.cpp", "bdQoSReplyPacket::deserialize", 0xDDu, "Failed to allocate data buffer.");
    goto LABEL_34;
  }
  if ( !bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, v17, this->m_dataSize) )
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
  double ElapsedTime; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_timestamp, HiResTimeStamp);
  return *(float *)&ElapsedTime - this->m_hostProcessingTime;
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
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  char v14; 
  bool *p_m_hasData; 
  bool result; 
  unsigned int m_dataSize; 
  __int64 v18; 
  unsigned int v19; 
  bool v20; 
  __int64 v21; 
  unsigned int v22; 
  bool v23; 

  v6 = offset;
  v9 = offset + 1;
  *newOffset = offset + 1;
  v10 = offset + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_8:
    if ( v9 <= size )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 <= size )
  {
    *((_BYTE *)data + v6) = this->m_type;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_22;
LABEL_10:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_id) )
    goto LABEL_22;
  v11 = *newOffset;
  v12 = v11 + 8;
  *newOffset = v11 + 8;
  v13 = (int)v11 + 8 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( data )
  {
    if ( v12 > size )
      goto LABEL_19;
    *(double *)((char *)data + v11) = *(double *)&this->m_timestamp;
  }
  if ( v12 > size )
  {
LABEL_19:
    if ( data )
      goto LABEL_22;
  }
  if ( bdBytePacker::appendBasicType<bool>(data, size, *newOffset, newOffset, &this->m_enabledMode) )
  {
    v14 = 1;
    goto LABEL_23;
  }
LABEL_22:
  v14 = 0;
LABEL_23:
  p_m_hasData = &this->m_hasData;
  if ( !v14 )
    goto LABEL_26;
  if ( !*p_m_hasData )
  {
    v18 = *newOffset;
    v19 = v18 + 4;
    *newOffset = v18 + 4;
    v20 = (int)v18 + 4 <= size || !data;
    bdHandleAssert(v20, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    if ( data )
    {
      if ( v19 > size )
      {
LABEL_40:
        if ( data )
          goto LABEL_26;
        goto LABEL_41;
      }
      *(_DWORD *)((char *)data + v18) = 0;
    }
    if ( v19 <= size )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_dataSize) )
    goto LABEL_26;
LABEL_41:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_bandwidth) )
    goto LABEL_26;
  v21 = *newOffset;
  v22 = v21 + 4;
  *newOffset = v21 + 4;
  v23 = (int)v21 + 4 <= size || !data;
  bdHandleAssert(v23, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v22 > size )
      goto LABEL_50;
    *(float *)((char *)data + v21) = this->m_hostProcessingTime;
  }
  if ( v22 > size )
  {
LABEL_50:
    if ( data )
      goto LABEL_26;
  }
  if ( bdBytePacker::appendBasicType<bool>(data, size, *newOffset, newOffset, &this->m_hasData) )
  {
    result = 1;
    goto LABEL_27;
  }
LABEL_26:
  result = 0;
LABEL_27:
  m_dataSize = this->m_dataSize;
  if ( m_dataSize && *p_m_hasData )
  {
    if ( result && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_data, m_dataSize) )
      return 1;
    result = 0;
  }
  else if ( result )
  {
    return result;
  }
  *newOffset = v6;
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
void bdQoSReplyPacket::setHostProcessingTime(bdQoSReplyPacket *this, float hostProcessingTime)
{
  this->m_hostProcessingTime = hostProcessingTime;
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

