/*
==============
bdQoSRequestPacket::getType
==============
*/

unsigned __int8 __fastcall bdQoSRequestPacket::getType(bdQoSRequestPacket *this)
{
  return ?getType@bdQoSRequestPacket@@QEBAEXZ(this);
}

/*
==============
bdQoSRequestPacket::serialize
==============
*/

bool __fastcall bdQoSRequestPacket::serialize(bdQoSRequestPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdQoSRequestPacket@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdQoSRequestPacket::setRequestingData
==============
*/

void __fastcall bdQoSRequestPacket::setRequestingData(bdQoSRequestPacket *this, bool requestingData)
{
  ?setRequestingData@bdQoSRequestPacket@@QEAAX_N@Z(this, requestingData);
}

/*
==============
bdQoSRequestPacket::bdQoSRequestPacket
==============
*/

void __fastcall bdQoSRequestPacket::bdQoSRequestPacket(bdQoSRequestPacket *this, unsigned int secid, unsigned int id)
{
  ??0bdQoSRequestPacket@@QEAA@II@Z(this, secid, id);
}

/*
==============
bdQoSRequestPacket::deserialize
==============
*/

bool __fastcall bdQoSRequestPacket::deserialize(bdQoSRequestPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdQoSRequestPacket@@QEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdQoSRequestPacket::getId
==============
*/

unsigned int __fastcall bdQoSRequestPacket::getId(bdQoSRequestPacket *this)
{
  return ?getId@bdQoSRequestPacket@@QEBAIXZ(this);
}

/*
==============
bdQoSRequestPacket::getSecId
==============
*/

unsigned int __fastcall bdQoSRequestPacket::getSecId(bdQoSRequestPacket *this)
{
  return ?getSecId@bdQoSRequestPacket@@QEBAIXZ(this);
}

/*
==============
bdQoSRequestPacket::getRequestingData
==============
*/

bool __fastcall bdQoSRequestPacket::getRequestingData(bdQoSRequestPacket *this)
{
  return ?getRequestingData@bdQoSRequestPacket@@QEBA_NXZ(this);
}

/*
==============
bdQoSRequestPacket::getTimestamp
==============
*/

unsigned __int64 __fastcall bdQoSRequestPacket::getTimestamp(bdQoSRequestPacket *this)
{
  return ?getTimestamp@bdQoSRequestPacket@@QEBA_KXZ(this);
}

/*
==============
bdQoSRequestPacket::bdQoSRequestPacket
==============
*/

void __fastcall bdQoSRequestPacket::bdQoSRequestPacket(bdQoSRequestPacket *this)
{
  ??0bdQoSRequestPacket@@QEAA@XZ(this);
}

/*
==============
bdQoSRequestPacket::bdQoSRequestPacket
==============
*/
void bdQoSRequestPacket::bdQoSRequestPacket(bdQoSRequestPacket *this, unsigned int secid, unsigned int id)
{
  this->m_type = 40;
  this->m_id = id;
  this->m_secid = secid;
  this->m_requestingData = 0;
  this->m_timestamp = bdPlatformTiming::getHiResTimeStamp();
}

/*
==============
bdQoSRequestPacket::bdQoSRequestPacket
==============
*/
void bdQoSRequestPacket::bdQoSRequestPacket(bdQoSRequestPacket *this)
{
  this->m_type = 0;
  this->m_timestamp = 0i64;
  *(_QWORD *)&this->m_id = 0i64;
  this->m_requestingData = 0;
}

/*
==============
bdQoSRequestPacket::deserialize
==============
*/
char bdQoSRequestPacket::deserialize(bdQoSRequestPacket *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 

  v9 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  if ( v9 <= size || !data )
  {
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
    if ( (v11 <= size || !data) && bdBytePacker::removeBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_id) && bdBytePacker::removeBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_secid) )
    {
      v12 = *newOffset;
      v13 = v12 + 1;
      *newOffset = v12 + 1;
      if ( data )
      {
        if ( v13 > size )
          bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
        else
          this->m_requestingData = *((_BYTE *)data + v12);
      }
      if ( v13 <= size || !data )
        return 1;
    }
  }
  *newOffset = offset;
  return 0;
}

/*
==============
bdQoSRequestPacket::getId
==============
*/
__int64 bdQoSRequestPacket::getId(bdQoSRequestPacket *this)
{
  return this->m_id;
}

/*
==============
bdQoSRequestPacket::getRequestingData
==============
*/
_BOOL8 bdQoSRequestPacket::getRequestingData(bdQoSRequestPacket *this)
{
  return this->m_requestingData;
}

/*
==============
bdQoSRequestPacket::getSecId
==============
*/
__int64 bdQoSRequestPacket::getSecId(bdQoSRequestPacket *this)
{
  return this->m_secid;
}

/*
==============
bdQoSRequestPacket::getTimestamp
==============
*/
unsigned __int64 bdQoSRequestPacket::getTimestamp(bdQoSRequestPacket *this)
{
  return this->m_timestamp;
}

/*
==============
bdQoSRequestPacket::getType
==============
*/
__int64 bdQoSRequestPacket::getType(bdQoSRequestPacket *this)
{
  return this->m_type;
}

/*
==============
bdQoSRequestPacket::serialize
==============
*/
char bdQoSRequestPacket::serialize(bdQoSRequestPacket *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  __int64 v6; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v14; 
  unsigned int v15; 
  bool v16; 

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
    goto LABEL_31;
LABEL_10:
  v11 = *newOffset;
  v12 = v11 + 8;
  *newOffset = v11 + 8;
  v13 = (int)v11 + 8 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( !data )
  {
LABEL_17:
    if ( v12 <= size )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( v12 <= size )
  {
    *(double *)((char *)data + v11) = *(double *)&this->m_timestamp;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    goto LABEL_31;
LABEL_19:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_id) || !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_secid) )
    goto LABEL_31;
  v14 = *newOffset;
  v15 = v14 + 1;
  *newOffset = v14 + 1;
  v16 = (int)v14 + 1 <= size || !data;
  bdHandleAssert(v16, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
    goto LABEL_28;
  if ( v15 <= size )
  {
    *((_BYTE *)data + v14) = this->m_requestingData;
LABEL_28:
    if ( v15 <= size )
      return 1;
  }
  if ( !data )
    return 1;
LABEL_31:
  *newOffset = v6;
  return 0;
}

/*
==============
bdQoSRequestPacket::setRequestingData
==============
*/
void bdQoSRequestPacket::setRequestingData(bdQoSRequestPacket *this, bool requestingData)
{
  this->m_requestingData = requestingData;
}

