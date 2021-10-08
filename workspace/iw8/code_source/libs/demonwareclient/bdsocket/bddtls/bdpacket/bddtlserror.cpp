/*
==============
bdDTLSError::bdDTLSError
==============
*/

void __fastcall bdDTLSError::bdDTLSError(bdDTLSError *this, unsigned __int16 vtag, bdDTLSError::bdDTLSErrorType etype, const bdSecurityID *secID)
{
  ??0bdDTLSError@@QEAA@GW4bdDTLSErrorType@0@AEBVbdSecurityID@@@Z(this, vtag, etype, secID);
}

/*
==============
bdDTLSError::getSecID
==============
*/

void __fastcall bdDTLSError::getSecID(bdDTLSError *this, bdSecurityID *secID)
{
  ?getSecID@bdDTLSError@@QEBAXAEAVbdSecurityID@@@Z(this, secID);
}

/*
==============
bdDTLSError::~bdDTLSError
==============
*/

void __fastcall bdDTLSError::~bdDTLSError(bdDTLSError *this)
{
  ??1bdDTLSError@@UEAA@XZ(this);
}

/*
==============
bdDTLSError::getEtype
==============
*/

bdDTLSError::bdDTLSErrorType __fastcall bdDTLSError::getEtype(bdDTLSError *this)
{
  return ?getEtype@bdDTLSError@@QEBA?AW4bdDTLSErrorType@1@XZ(this);
}

/*
==============
bdDTLSError::deserialize
==============
*/

bool __fastcall bdDTLSError::deserialize(bdDTLSError *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdDTLSError@@UEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSError::serialize
==============
*/

bool __fastcall bdDTLSError::serialize(bdDTLSError *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSError@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSError::bdDTLSError
==============
*/

void __fastcall bdDTLSError::bdDTLSError(bdDTLSError *this)
{
  ??0bdDTLSError@@QEAA@XZ(this);
}

/*
==============
bdDTLSError::bdDTLSError
==============
*/
void bdDTLSError::bdDTLSError(bdDTLSError *this, unsigned __int16 vtag, bdDTLSError::bdDTLSErrorType etype, const bdSecurityID *secID)
{
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_ERROR, vtag, 0);
  this->__vftable = (bdDTLSError_vtbl *)&bdDTLSError::`vftable';
  this->m_etype = etype;
  bdSecurityID::bdSecurityID(&this->m_secID, secID);
}

/*
==============
bdDTLSError::bdDTLSError
==============
*/
void bdDTLSError::bdDTLSError(bdDTLSError *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSError_vtbl *)&bdDTLSError::`vftable';
  this->m_etype = BD_DTLS_INVALID_STATE;
  bdSecurityID::bdSecurityID(&this->m_secID);
}

/*
==============
bdDTLSError::~bdDTLSError
==============
*/
void bdDTLSError::~bdDTLSError(bdDTLSError *this)
{
  this->__vftable = (bdDTLSError_vtbl *)&bdDTLSError::`vftable';
  bdSecurityID::~bdSecurityID(&this->m_secID);
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSError::deserialize
==============
*/
char bdDTLSError::deserialize(bdDTLSError *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned int v11; 
  char v12; 

  *newOffset = offset;
  v9 = -1;
  if ( !bdDTLSHeader::deserialize(this, data, size, offset, newOffset) )
    goto LABEL_9;
  v10 = *newOffset;
  v11 = v10 + 1;
  *newOffset = v10 + 1;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v9 = *((_BYTE *)data + v10);
  }
  if ( v11 > size && data )
LABEL_9:
    v12 = 0;
  else
    v12 = 1;
  this->m_etype = v9;
  if ( v12 && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
    return 1;
  *newOffset = offset;
  return 0;
}

/*
==============
bdDTLSError::getEtype
==============
*/
__int64 bdDTLSError::getEtype(bdDTLSError *this)
{
  return (unsigned int)this->m_etype;
}

/*
==============
bdDTLSError::getSecID
==============
*/
void bdDTLSError::getSecID(bdDTLSError *this, bdSecurityID *secID)
{
  *secID = this->m_secID;
}

/*
==============
bdDTLSError::serialize
==============
*/
char bdDTLSError::serialize(bdDTLSError *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool v9; 
  char m_etype; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 

  *newOffset = offset;
  v9 = bdDTLSHeader::serialize(this, data, size, offset, newOffset);
  m_etype = this->m_etype;
  if ( !v9 )
    goto LABEL_13;
  v11 = *newOffset;
  v12 = v11 + 1;
  *newOffset = v11 + 1;
  v13 = (int)v11 + 1 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( data )
  {
    if ( v12 > size )
      goto LABEL_10;
    *((_BYTE *)data + v11) = m_etype;
  }
  if ( v12 > size )
  {
LABEL_10:
    if ( data )
      goto LABEL_13;
  }
  if ( bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
    return 1;
LABEL_13:
  *newOffset = offset;
  return 0;
}

