/*
==============
bdAuthTicket::serialize
==============
*/

void __fastcall bdAuthTicket::serialize(bdAuthTicket *this, void *buffer)
{
  ?serialize@bdAuthTicket@@QEAAXPEAX@Z(this, buffer);
}

/*
==============
bdAuthTicket::~bdAuthTicket
==============
*/

void __fastcall bdAuthTicket::~bdAuthTicket(bdAuthTicket *this)
{
  ??1bdAuthTicket@@QEAA@XZ(this);
}

/*
==============
bdAuthTicket::deserialize
==============
*/

void __fastcall bdAuthTicket::deserialize(bdAuthTicket *this, const void *buffer)
{
  ?deserialize@bdAuthTicket@@QEAAXPEBX@Z(this, buffer);
}

/*
==============
bdAuthTicket::bdAuthTicket
==============
*/

void __fastcall bdAuthTicket::bdAuthTicket(bdAuthTicket *this)
{
  ??0bdAuthTicket@@QEAA@XZ(this);
}

/*
==============
bdAuthTicket::bdAuthTicket
==============
*/

void __fastcall bdAuthTicket::bdAuthTicket(bdAuthTicket *this, unsigned __int8 type, unsigned int titleID, unsigned int timeIssued, unsigned int timeExpires, unsigned __int64 licenseID, unsigned __int64 userID, char *username, unsigned __int8 *sessionKey)
{
  ??0bdAuthTicket@@QEAA@EIII_K0PEADPEAE@Z(this, type, titleID, timeIssued, timeExpires, licenseID, userID, username, sessionKey);
}

/*
==============
bdAuthTicket::bdAuthTicket
==============
*/
void bdAuthTicket::bdAuthTicket(bdAuthTicket *this, unsigned __int8 type, unsigned int titleID, unsigned int timeIssued, unsigned int timeExpires, unsigned __int64 licenseID, unsigned __int64 userID, char *username, unsigned __int8 *sessionKey)
{
  _RBX = this;
  this->m_magicNumber = BD_MAGIC_NUMBER;
  this->m_timeExpires = timeExpires;
  this->m_type = type;
  this->m_licenseID = licenseID;
  this->m_userID = userID;
  this->m_titleID = titleID;
  this->m_timeIssued = timeIssued;
  if ( username )
  {
    bdStrlcpy(this->m_username, username, 0x40ui64);
  }
  else
  {
    *(_QWORD *)this->m_username = 0i64;
    *(_QWORD *)&this->m_username[8] = 0i64;
    *(_QWORD *)&this->m_username[16] = 0i64;
    *(_QWORD *)&this->m_username[24] = 0i64;
    *(_QWORD *)&this->m_username[32] = 0i64;
    *(_QWORD *)&this->m_username[40] = 0i64;
    *(_QWORD *)&this->m_username[48] = 0i64;
    *(_QWORD *)&this->m_username[56] = 0i64;
  }
  _RAX = sessionKey;
  if ( sessionKey )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx+68h], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbx+78h], xmm1
    }
  }
  else
  {
    *(_QWORD *)_RBX->m_sessionKey = 0i64;
    *(_QWORD *)&_RBX->m_sessionKey[8] = 0i64;
    *(_QWORD *)&_RBX->m_sessionKey[16] = 0i64;
  }
  *(_WORD *)_RBX->m_usingHashMagicNumber = 13141;
  _RBX->m_usingHashMagicNumber[2] = 34;
  *(_DWORD *)_RBX->m_hash = 0;
}

/*
==============
bdAuthTicket::bdAuthTicket
==============
*/
void bdAuthTicket::bdAuthTicket(bdAuthTicket *this)
{
  this->m_magicNumber = 0;
  this->m_type = 0;
  *(_QWORD *)&this->m_titleID = 0i64;
  this->m_timeExpires = 0;
  this->m_licenseID = 0i64;
  this->m_userID = 0i64;
  memset_0(this->m_username, 0, 0x58ui64);
  *(_WORD *)this->m_usingHashMagicNumber = 13141;
  this->m_usingHashMagicNumber[2] = 34;
  *(_DWORD *)this->m_hash = 0;
}

/*
==============
bdAuthTicket::~bdAuthTicket
==============
*/
void bdAuthTicket::~bdAuthTicket(bdAuthTicket *this)
{
  ;
}

/*
==============
bdAuthTicket::deserialize
==============
*/
void bdAuthTicket::deserialize(bdAuthTicket *this, const void *buffer)
{
  unsigned int newOffset; 

  if ( buffer )
  {
    this->m_magicNumber = *(_DWORD *)buffer;
    this->m_type = *((_BYTE *)buffer + 4);
    this->m_titleID = *(_DWORD *)((char *)buffer + 5);
    this->m_timeIssued = *(_DWORD *)((char *)buffer + 9);
  }
  newOffset = 17;
  if ( buffer )
    this->m_timeExpires = *(_DWORD *)((char *)buffer + 13);
  if ( bdBytePacker::removeBasicType<unsigned __int64>(buffer, 0x80u, 0x11u, &newOffset, &this->m_licenseID) && bdBytePacker::removeBasicType<unsigned __int64>(buffer, 0x80u, newOffset, &newOffset, &this->m_userID) && bdBytePacker::removeBuffer(buffer, 0x80u, newOffset, &newOffset, this->m_username, 0x40u) && bdBytePacker::removeBuffer(buffer, 0x80u, newOffset, &newOffset, this->m_sessionKey, 0x18u) && bdBytePacker::removeBuffer(buffer, 0x80u, newOffset, &newOffset, this->m_usingHashMagicNumber, 3u) )
    bdBytePacker::removeBuffer(buffer, 0x80u, newOffset, &newOffset, this->m_hash, 4u);
  bdHandleAssert(newOffset == 128, "offset == BD_AUTH_TICKET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthticket.cpp", "bdAuthTicket::deserialize", 0x83u, "Decoded auth ticket was the wrong size.");
}

/*
==============
bdAuthTicket::serialize
==============
*/
void bdAuthTicket::serialize(bdAuthTicket *this, void *buffer)
{
  __int64 v4; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  unsigned int v8; 
  bool v9; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  __int64 v13; 
  unsigned int v14; 
  bool v15; 
  char v16; 
  unsigned __int8 *m_hash; 
  bool v18; 
  unsigned int offset; 
  unsigned int resultSize; 
  bdHashTiger192 v21; 
  __int64 v22; 
  unsigned __int8 result[4]; 

  v22 = -2i64;
  offset = 4;
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( buffer )
    *(_DWORD *)buffer = this->m_magicNumber;
  v4 = offset;
  v5 = offset + 1;
  offset = v5;
  v6 = v5 <= 0x80 || !buffer;
  bdHandleAssert(v6, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !buffer )
  {
LABEL_10:
    if ( v5 <= 0x80 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v5 <= 0x80 )
  {
    *((_BYTE *)buffer + v4) = this->m_type;
    goto LABEL_10;
  }
LABEL_11:
  if ( buffer )
    goto LABEL_45;
LABEL_12:
  v7 = offset;
  v8 = offset + 4;
  offset = v8;
  v9 = v8 <= 0x80 || !buffer;
  bdHandleAssert(v9, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_19:
    if ( v8 <= 0x80 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v8 <= 0x80 )
  {
    *(_DWORD *)((char *)buffer + v7) = this->m_titleID;
    goto LABEL_19;
  }
LABEL_20:
  if ( buffer )
    goto LABEL_45;
LABEL_21:
  v10 = offset;
  v11 = offset + 4;
  offset = v11;
  v12 = v11 <= 0x80 || !buffer;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_28:
    if ( v11 <= 0x80 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( v11 <= 0x80 )
  {
    *(_DWORD *)((char *)buffer + v10) = this->m_timeIssued;
    goto LABEL_28;
  }
LABEL_29:
  if ( buffer )
    goto LABEL_45;
LABEL_30:
  v13 = offset;
  v14 = offset + 4;
  offset = v14;
  v15 = v14 <= 0x80 || !buffer;
  bdHandleAssert(v15, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( buffer )
  {
    if ( v14 > 0x80 )
      goto LABEL_38;
    *(_DWORD *)((char *)buffer + v13) = this->m_timeExpires;
  }
  if ( v14 > 0x80 )
  {
LABEL_38:
    if ( !buffer )
      goto LABEL_39;
LABEL_45:
    v16 = 0;
    goto LABEL_46;
  }
LABEL_39:
  if ( !bdBytePacker::appendBasicType<unsigned __int64>(buffer, 0x80u, offset, &offset, &this->m_licenseID) || !bdBytePacker::appendBasicType<unsigned __int64>(buffer, 0x80u, offset, &offset, &this->m_userID) || !bdBytePacker::appendBuffer(buffer, 0x80u, offset, &offset, this->m_username, 0x40u) || !bdBytePacker::appendBuffer(buffer, 0x80u, offset, &offset, this->m_sessionKey, 0x18u) || !bdBytePacker::appendBuffer(buffer, 0x80u, offset, &offset, this->m_usingHashMagicNumber, 3u) )
    goto LABEL_45;
  v16 = 1;
LABEL_46:
  bdHashTiger192::bdHashTiger192(&v21);
  resultSize = 24;
  bdHashTiger192::hash(&v21, (const unsigned __int8 *)buffer, 0x79u, result, &resultSize);
  m_hash = this->m_hash;
  *(_DWORD *)m_hash = *(_DWORD *)result;
  v18 = v16 && bdBytePacker::appendBuffer(buffer, 0x80u, offset, &offset, m_hash, 4u);
  bdHandleAssert(offset == 128, "offset == BD_AUTH_TICKET_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthticket.cpp", "bdAuthTicket::serialize", 0x6Bu, "Encoded auth ticket was the wrong size.");
  bdHandleAssert(v18, "result", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthticket.cpp", "bdAuthTicket::serialize", 0x6Cu, "Failed to serialize the ticket.");
  bdHashTiger192::~bdHashTiger192(&v21);
}

