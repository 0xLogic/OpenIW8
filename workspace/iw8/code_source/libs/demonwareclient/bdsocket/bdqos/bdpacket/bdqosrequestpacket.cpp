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
  unsigned int v10; 
  unsigned int v12; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int *newOffseta; 

  _RBX = data;
  v10 = offset + 1;
  *newOffset = offset + 1;
  if ( data )
  {
    if ( v10 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      this->m_type = *((_BYTE *)data + offset);
  }
  if ( v10 <= size || !_RBX )
  {
    _RAX = *newOffset;
    v12 = _RAX + 8;
    *newOffset = _RAX + 8;
    if ( _RBX )
    {
      if ( v12 > size )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+rbx]
          vmovsd  [rsp+68h+newOffset], xmm0
        }
        this->m_timestamp = (unsigned __int64)newOffseta;
      }
    }
    if ( (v12 <= size || !_RBX) && bdBytePacker::removeBasicType<unsigned int>(_RBX, size, *newOffset, newOffset, &this->m_id) && bdBytePacker::removeBasicType<unsigned int>(_RBX, size, *newOffset, newOffset, &this->m_secid) )
    {
      v14 = *newOffset;
      v15 = v14 + 1;
      *newOffset = v14 + 1;
      if ( _RBX )
      {
        if ( v15 > size )
          bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
        else
          this->m_requestingData = _RBX[v14];
      }
      if ( v15 <= size || !_RBX )
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
  __int64 v7; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  __int64 v17; 
  unsigned int v18; 
  bool v19; 
  unsigned int *newOffseta; 

  v7 = offset;
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
    *((_BYTE *)data + v7) = this->m_type;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_31;
LABEL_10:
  v12 = *newOffset;
  v13 = v12 + 8;
  *newOffset = v12 + 8;
  v14 = (int)v12 + 8 <= size || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( !data )
  {
LABEL_17:
    if ( v13 <= size )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( v13 <= size )
  {
    newOffseta = (unsigned int *)this->m_timestamp;
    _RAX = (char *)data + v12;
    __asm
    {
      vmovsd  xmm0, [rsp+68h+newOffset]
      vmovsd  qword ptr [rax], xmm0
    }
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    goto LABEL_31;
LABEL_19:
  if ( !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_id) || !bdBytePacker::appendBasicType<unsigned int>(data, size, *newOffset, newOffset, &this->m_secid) )
    goto LABEL_31;
  v17 = *newOffset;
  v18 = v17 + 1;
  *newOffset = v17 + 1;
  v19 = (int)v17 + 1 <= size || !data;
  bdHandleAssert(v19, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
    goto LABEL_28;
  if ( v18 <= size )
  {
    *((_BYTE *)data + v17) = this->m_requestingData;
LABEL_28:
    if ( v18 <= size )
      return 1;
  }
  if ( !data )
    return 1;
LABEL_31:
  *newOffset = v7;
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

