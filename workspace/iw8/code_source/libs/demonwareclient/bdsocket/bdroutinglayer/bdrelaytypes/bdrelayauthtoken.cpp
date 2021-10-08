/*
==============
bdRelayAuthToken::operator==
==============
*/

bool __fastcall bdRelayAuthToken::operator==(bdRelayAuthToken *this, const bdRelayAuthToken *other)
{
  return ??8bdRelayAuthToken@@UEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdRelayAuthToken::~bdRelayAuthToken
==============
*/

void __fastcall bdRelayAuthToken::~bdRelayAuthToken(bdRelayAuthToken *this)
{
  ??1bdRelayAuthToken@@UEAA@XZ(this);
}

/*
==============
bdRelayAuthToken::getRelayID
==============
*/

unsigned __int64 __fastcall bdRelayAuthToken::getRelayID(bdRelayAuthToken *this)
{
  return ?getRelayID@bdRelayAuthToken@@QEBA_KXZ(this);
}

/*
==============
bdRelayAuthToken::getRelayAddr
==============
*/

const bdAddr *__fastcall bdRelayAuthToken::getRelayAddr(bdRelayAuthToken *this)
{
  return ?getRelayAddr@bdRelayAuthToken@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdRelayAuthToken::deserialize
==============
*/

bool __fastcall bdRelayAuthToken::deserialize(bdRelayAuthToken *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayAuthToken@@UEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayAuthToken::bdRelayAuthToken
==============
*/

void __fastcall bdRelayAuthToken::bdRelayAuthToken(bdRelayAuthToken *this)
{
  ??0bdRelayAuthToken@@QEAA@XZ(this);
}

/*
==============
bdRelayAuthToken::serializeInit
==============
*/

bool __fastcall bdRelayAuthToken::serializeInit(bdRelayAuthToken *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?serializeInit@bdRelayAuthToken@@MEBA_NPEAXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayAuthToken::getSecret
==============
*/

const unsigned __int8 *__fastcall bdRelayAuthToken::getSecret(bdRelayAuthToken *this)
{
  return ?getSecret@bdRelayAuthToken@@QEBAPEBEXZ(this);
}

/*
==============
bdRelayAuthToken::operator=
==============
*/

bdRelayAuthToken *__fastcall bdRelayAuthToken::operator=(bdRelayAuthToken *this, const bdRelayAuthToken *other)
{
  return ??4bdRelayAuthToken@@UEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdRelayAuthToken::deserializeInit
==============
*/

bool __fastcall bdRelayAuthToken::deserializeInit(bdRelayAuthToken *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?deserializeInit@bdRelayAuthToken@@MEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayAuthToken::bdRelayAuthToken
==============
*/
void bdRelayAuthToken::bdRelayAuthToken(bdRelayAuthToken *this)
{
  this->m_version = 1;
  this->__vftable = (bdRelayAuthToken_vtbl *)&bdRelayAuthToken::`vftable';
  bdAddr::bdAddr(&this->m_relayAddr);
  this->m_relayID = 0i64;
}

/*
==============
bdRelayAuthToken::~bdRelayAuthToken
==============
*/
void bdRelayAuthToken::~bdRelayAuthToken(bdRelayAuthToken *this)
{
  this->__vftable = (bdRelayAuthToken_vtbl *)&bdRelayAuthToken::`vftable';
}

/*
==============
bdRelayAuthToken::operator=
==============
*/
bdRelayAuthToken *bdRelayAuthToken::operator=(bdRelayAuthToken *this, const bdRelayAuthToken *other)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+8]
    vmovups ymmword ptr [rcx+8], ymm0
    vmovups xmm1, xmmword ptr [rdx+28h]
    vmovups xmmword ptr [rcx+28h], xmm1
  }
  *(_DWORD *)&this->m_encrypted[48] = *(_DWORD *)&other->m_encrypted[48];
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+0E0h]
    vmovups xmmword ptr [rcx+0E0h], xmm0
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm1, ymmword ptr [rdx+60h]
    vmovups ymmword ptr [rcx+60h], ymm1
    vmovups ymm0, ymmword ptr [rdx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm1, ymmword ptr [rdx+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
    vmovups xmm0, xmmword ptr [rdx+0C0h]
    vmovups xmmword ptr [rcx+0C0h], xmm0
    vmovsd  xmm1, qword ptr [rdx+0D0h]
    vmovsd  qword ptr [rcx+0D0h], xmm1
  }
  this->m_relayID = other->m_relayID;
  this->m_version = other->m_version;
  return this;
}

/*
==============
bdRelayAuthToken::operator==
==============
*/
bool bdRelayAuthToken::operator==(bdRelayAuthToken *this, const bdRelayAuthToken *other)
{
  return !memcmp_0(this->m_encrypted, other->m_encrypted, 0x34ui64) && *(_QWORD *)this->m_secret == *(_QWORD *)other->m_secret && *(_QWORD *)&this->m_secret[8] == *(_QWORD *)&other->m_secret[8] && bdSockAddr::compare(&this->m_relayAddr.m_address, &other->m_relayAddr.m_address, 1) && this->m_relayID == other->m_relayID && this->m_version == other->m_version;
}

/*
==============
bdRelayAuthToken::deserialize
==============
*/
bool bdRelayAuthToken::deserialize(bdRelayAuthToken *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 *p_m_version; 
  unsigned int v10; 
  unsigned int v11; 
  bool result; 
  unsigned __int64 v14; 
  unsigned int offseta; 

  p_m_version = &this->m_version;
  offseta = offset;
  _RBX = buffer;
  if ( !bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) || *p_m_version != 1 || !bdBytePacker::removeBuffer(_RBX, bufferSize, offseta, &offseta, this->m_encrypted, 0x34u) || !bdBytePacker::removeBuffer(_RBX, bufferSize, offseta, &offseta, this->m_secret, 0x10u) || !bdAddr::deserialize(&this->m_relayAddr, _RBX, bufferSize, offseta, &offseta) )
    goto LABEL_13;
  _RAX = offseta;
  v10 = offseta + 8;
  v11 = offseta + 8;
  offseta += 8;
  if ( _RBX )
  {
    if ( v10 > bufferSize )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
      v11 = offseta;
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rax+rbx]
        vmovsd  [rsp+58h+var_18], xmm0
      }
      this->m_relayID = v14;
    }
  }
  if ( v10 <= bufferSize || !_RBX )
  {
    result = 1;
    *newOffset = v11;
  }
  else
  {
LABEL_13:
    result = 0;
    *newOffset = *newOffset;
  }
  return result;
}

/*
==============
bdRelayAuthToken::deserializeInit
==============
*/
bool bdRelayAuthToken::deserializeInit(bdRelayAuthToken *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  p_m_version = &this->m_version;
  offseta = offset;
  if ( bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this->m_encrypted, 0x34u) )
  {
    result = 1;
    *newOffset = offseta;
  }
  else
  {
    result = 0;
    *newOffset = *newOffset;
  }
  return result;
}

/*
==============
bdRelayAuthToken::getRelayAddr
==============
*/
bdAddr *bdRelayAuthToken::getRelayAddr(bdRelayAuthToken *this)
{
  return &this->m_relayAddr;
}

/*
==============
bdRelayAuthToken::getRelayID
==============
*/
unsigned __int64 bdRelayAuthToken::getRelayID(bdRelayAuthToken *this)
{
  return this->m_relayID;
}

/*
==============
bdRelayAuthToken::getSecret
==============
*/
unsigned __int8 *bdRelayAuthToken::getSecret(bdRelayAuthToken *this)
{
  return this->m_secret;
}

/*
==============
bdRelayAuthToken::serializeInit
==============
*/
bool bdRelayAuthToken::serializeInit(bdRelayAuthToken *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  __int64 v5; 
  unsigned int v9; 
  bool v10; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  v9 = offset + 1;
  offseta = offset + 1;
  v10 = offset + 1 <= bufferSize || !buffer;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( buffer )
  {
    if ( v9 > bufferSize )
      goto LABEL_9;
    *((_BYTE *)buffer + v5) = this->m_version;
  }
  if ( v9 > bufferSize )
  {
LABEL_9:
    if ( buffer )
      goto LABEL_12;
  }
  if ( bdBytePacker::appendBuffer(buffer, bufferSize, offseta, &offseta, this->m_encrypted, 0x34u) )
  {
    result = 1;
    *newOffset = offseta;
    return result;
  }
LABEL_12:
  result = 0;
  *newOffset = *newOffset;
  return result;
}

