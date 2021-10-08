/*
==============
bdDTLSCookieAck::deserialize
==============
*/

bool __fastcall bdDTLSCookieAck::deserialize(bdDTLSCookieAck *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdDTLSCookieAck@@UEAA_NPEBXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSCookieAck::getECCKey
==============
*/

const unsigned __int8 *__fastcall bdDTLSCookieAck::getECCKey(bdDTLSCookieAck *this)
{
  return ?getECCKey@bdDTLSCookieAck@@QEBAPEBEXZ(this);
}

/*
==============
bdDTLSCookieAck::bdDTLSCookieAck
==============
*/

void __fastcall bdDTLSCookieAck::bdDTLSCookieAck(bdDTLSCookieAck *this)
{
  ??0bdDTLSCookieAck@@QEAA@XZ(this);
}

/*
==============
bdDTLSCookieAck::bdDTLSCookieAck
==============
*/

void __fastcall bdDTLSCookieAck::bdDTLSCookieAck(bdDTLSCookieAck *this, unsigned __int16 vtag, const unsigned __int8 *key, const bdSecurityID secID)
{
  ??0bdDTLSCookieAck@@QEAA@GQEBEVbdSecurityID@@@Z(this, vtag, key, secID);
}

/*
==============
bdDTLSCookieAck::~bdDTLSCookieAck
==============
*/

void __fastcall bdDTLSCookieAck::~bdDTLSCookieAck(bdDTLSCookieAck *this)
{
  ??1bdDTLSCookieAck@@UEAA@XZ(this);
}

/*
==============
bdDTLSCookieAck::serialize
==============
*/

bool __fastcall bdDTLSCookieAck::serialize(bdDTLSCookieAck *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSCookieAck@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSCookieAck::getSecID
==============
*/

void __fastcall bdDTLSCookieAck::getSecID(bdDTLSCookieAck *this, bdSecurityID *secID)
{
  ?getSecID@bdDTLSCookieAck@@QEBAXAEAVbdSecurityID@@@Z(this, secID);
}

/*
==============
bdDTLSCookieAck::bdDTLSCookieAck
==============
*/
void bdDTLSCookieAck::bdDTLSCookieAck(bdDTLSCookieAck *this, unsigned __int16 vtag, const unsigned __int8 *key, const bdSecurityID secID)
{
  _RBX = key;
  _RDI = this;
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_COOKIE_ACK, vtag, 0);
  _RDI->__vftable = (bdDTLSCookieAck_vtbl *)&bdDTLSCookieAck::`vftable';
  bdSecurityID::bdSecurityID(&_RDI->m_secID, *(const bdSecurityID **)&secID);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+10h], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+30h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdi+50h], ymm0
  }
  *(_DWORD *)&_RDI->m_ECCKey[96] = *((_DWORD *)_RBX + 24);
  bdSecurityID::~bdSecurityID(*(bdSecurityID **)&secID);
}

/*
==============
bdDTLSCookieAck::bdDTLSCookieAck
==============
*/
void bdDTLSCookieAck::bdDTLSCookieAck(bdDTLSCookieAck *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSCookieAck_vtbl *)&bdDTLSCookieAck::`vftable';
  bdSecurityID::bdSecurityID(&this->m_secID);
}

/*
==============
bdDTLSCookieAck::~bdDTLSCookieAck
==============
*/
void bdDTLSCookieAck::~bdDTLSCookieAck(bdDTLSCookieAck *this)
{
  this->__vftable = (bdDTLSCookieAck_vtbl *)&bdDTLSCookieAck::`vftable';
  bdSecurityID::~bdSecurityID(&this->m_secID);
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSCookieAck::deserialize
==============
*/
char bdDTLSCookieAck::deserialize(bdDTLSCookieAck *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdDTLSHeader::deserialize(this, data, size, offset, newOffset) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, this->m_ECCKey, 0x64u) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
    return 1;
  *newOffset = offset;
  return 0;
}

/*
==============
bdDTLSCookieAck::getECCKey
==============
*/
unsigned __int8 *bdDTLSCookieAck::getECCKey(bdDTLSCookieAck *this)
{
  return this->m_ECCKey;
}

/*
==============
bdDTLSCookieAck::getSecID
==============
*/
void bdDTLSCookieAck::getSecID(bdDTLSCookieAck *this, bdSecurityID *secID)
{
  *secID = this->m_secID;
}

/*
==============
bdDTLSCookieAck::serialize
==============
*/
char bdDTLSCookieAck::serialize(bdDTLSCookieAck *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  *newOffset = offset;
  if ( bdDTLSHeader::serialize(this, data, size, offset, newOffset) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, this->m_ECCKey, 0x64u) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u) )
    return 1;
  *newOffset = offset;
  return 0;
}

