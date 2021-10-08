/*
==============
bdRelayJoinData::deserializeEncrypted
==============
*/

bool __fastcall bdRelayJoinData::deserializeEncrypted(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?deserializeEncrypted@bdRelayJoinData@@IEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::bdRelayJoinData
==============
*/

void __fastcall bdRelayJoinData::bdRelayJoinData(bdRelayJoinData *this, const unsigned __int8 *verification, const unsigned __int8 *secret, unsigned __int64 relayID, unsigned int routingID, unsigned __int64 joinID, bdAddr *relayAddr)
{
  ??0bdRelayJoinData@@QEAA@QEBE0_KI1VbdAddr@@@Z(this, verification, secret, relayID, routingID, joinID, relayAddr);
}

/*
==============
bdRelayJoinData::deserialize
==============
*/

bool __fastcall bdRelayJoinData::deserialize(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdRelayJoinData@@QEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::getRelayID
==============
*/

unsigned __int64 __fastcall bdRelayJoinData::getRelayID(bdRelayJoinData *this)
{
  return ?getRelayID@bdRelayJoinData@@QEBA_KXZ(this);
}

/*
==============
bdRelayJoinData::serializeEncrypted
==============
*/

bool __fastcall bdRelayJoinData::serializeEncrypted(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?serializeEncrypted@bdRelayJoinData@@IEBA_NPEAXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::operator!=
==============
*/

bool __fastcall bdRelayJoinData::operator!=(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return ??9bdRelayJoinData@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdRelayJoinData::decrypt
==============
*/

bool __fastcall bdRelayJoinData::decrypt(bdRelayJoinData *this, const unsigned __int8 *relaySecret)
{
  return ?decrypt@bdRelayJoinData@@QEAA_NQEBE@Z(this, relaySecret);
}

/*
==============
bdRelayJoinData::encrypt
==============
*/

bool __fastcall bdRelayJoinData::encrypt(bdRelayJoinData *this, const unsigned __int8 *relaySecret)
{
  return ?encrypt@bdRelayJoinData@@QEAA_NQEBE@Z(this, relaySecret);
}

/*
==============
bdRelayJoinData::serialize
==============
*/

bool __fastcall bdRelayJoinData::serialize(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdRelayJoinData@@QEBA_NPEAXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::getRoutingID
==============
*/

unsigned int __fastcall bdRelayJoinData::getRoutingID(bdRelayJoinData *this)
{
  return ?getRoutingID@bdRelayJoinData@@QEBAIXZ(this);
}

/*
==============
bdRelayJoinData::deserializeInitJoin
==============
*/

bool __fastcall bdRelayJoinData::deserializeInitJoin(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?deserializeInitJoin@bdRelayJoinData@@IEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::operator==
==============
*/

bool __fastcall bdRelayJoinData::operator==(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return ??8bdRelayJoinData@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdRelayJoinData::getRelayAddr
==============
*/

const bdAddr *__fastcall bdRelayJoinData::getRelayAddr(bdRelayJoinData *this)
{
  return ?getRelayAddr@bdRelayJoinData@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdRelayJoinData::isSameRoute
==============
*/

bool __fastcall bdRelayJoinData::isSameRoute(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return ?isSameRoute@bdRelayJoinData@@QEBA_NAEBV1@@Z(this, other);
}

/*
==============
bdRelayJoinData::operator=
==============
*/

bdRelayJoinData *__fastcall bdRelayJoinData::operator=(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return ??4bdRelayJoinData@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdRelayJoinData::getVerification
==============
*/

const unsigned __int8 *__fastcall bdRelayJoinData::getVerification(bdRelayJoinData *this)
{
  return ?getVerification@bdRelayJoinData@@QEBAPEBEXZ(this);
}

/*
==============
bdRelayJoinData::getJoinID
==============
*/

unsigned __int64 __fastcall bdRelayJoinData::getJoinID(bdRelayJoinData *this)
{
  return ?getJoinID@bdRelayJoinData@@QEBA_KXZ(this);
}

/*
==============
bdRelayJoinData::setJoinID
==============
*/

void __fastcall bdRelayJoinData::setJoinID(bdRelayJoinData *this, unsigned __int64 joinID)
{
  ?setJoinID@bdRelayJoinData@@QEAAX_K@Z(this, joinID);
}

/*
==============
bdRelayJoinData::getSecret
==============
*/

const unsigned __int8 *__fastcall bdRelayJoinData::getSecret(bdRelayJoinData *this)
{
  return ?getSecret@bdRelayJoinData@@QEBAPEBEXZ(this);
}

/*
==============
bdRelayJoinData::serializeInitJoin
==============
*/

bool __fastcall bdRelayJoinData::serializeInitJoin(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  return ?serializeInitJoin@bdRelayJoinData@@IEBA_NPEAXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdRelayJoinData::bdRelayJoinData
==============
*/

void __fastcall bdRelayJoinData::bdRelayJoinData(bdRelayJoinData *this)
{
  ??0bdRelayJoinData@@QEAA@XZ(this);
}

/*
==============
bdRelayJoinData::bdRelayJoinData
==============
*/
void bdRelayJoinData::bdRelayJoinData(bdRelayJoinData *this, const unsigned __int8 *verification, const unsigned __int8 *secret, unsigned __int64 relayID, unsigned int routingID, unsigned __int64 joinID, bdAddr *relayAddr)
{
  this->m_version = 1;
  *(_QWORD *)this->m_secret = 0i64;
  _RBX = verification;
  _RDI = this;
  *(_QWORD *)&this->m_secret[8] = 0i64;
  _RSI = secret;
  this->m_routingID = routingID;
  this->m_joinID = joinID;
  this->m_relayID = relayID;
  bdAddr::bdAddr(&this->m_relayAddr, relayAddr);
  bdHandleAssert(_RBX != NULL, "verification != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaytypes\\bdrelayjoindata.cpp", "bdRelayJoinData::bdRelayJoinData", 0x24u, "Verification cannot be NULL.");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi+118h], xmm0
  }
  if ( _RSI )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rdi+57h], xmm0
    }
  }
}

/*
==============
bdRelayJoinData::bdRelayJoinData
==============
*/
void bdRelayJoinData::bdRelayJoinData(bdRelayJoinData *this)
{
  this->m_version = 1;
  *(_QWORD *)this->m_secret = 0i64;
  *(_QWORD *)&this->m_secret[8] = 0i64;
  this->m_relayID = 0i64;
  this->m_routingID = 0;
  this->m_joinID = 0i64;
  bdAddr::bdAddr(&this->m_relayAddr);
}

/*
==============
bdRelayJoinData::operator=
==============
*/
bdRelayJoinData *bdRelayJoinData::operator=(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  bdRelayJoinData *result; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
  }
  *(_DWORD *)&this->m_encrypted[80] = *(_DWORD *)&other->m_encrypted[80];
  *(_WORD *)&this->m_encrypted[84] = *(_WORD *)&other->m_encrypted[84];
  this->m_version = other->m_version;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+57h]
    vmovups xmmword ptr [rcx+57h], xmm0
    vmovups xmm0, xmmword ptr [rdx+118h]
    vmovups xmmword ptr [rcx+118h], xmm0
  }
  this->m_relayID = other->m_relayID;
  this->m_routingID = other->m_routingID;
  this->m_joinID = other->m_joinID;
  result = this;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm1, ymmword ptr [rdx+0A0h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
    vmovups ymm0, ymmword ptr [rdx+0C0h]
    vmovups ymmword ptr [rcx+0C0h], ymm0
    vmovups ymm1, ymmword ptr [rdx+0E0h]
    vmovups ymmword ptr [rcx+0E0h], ymm1
    vmovups xmm0, xmmword ptr [rdx+100h]
    vmovups xmmword ptr [rcx+100h], xmm0
    vmovsd  xmm1, qword ptr [rdx+110h]
    vmovsd  qword ptr [rcx+110h], xmm1
  }
  return result;
}

/*
==============
bdRelayJoinData::operator==
==============
*/
bool bdRelayJoinData::operator==(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return !memcmp_0(this, other, 0x56ui64) && this->m_version == other->m_version && *(_QWORD *)this->m_secret == *(_QWORD *)other->m_secret && *(_QWORD *)&this->m_secret[8] == *(_QWORD *)&other->m_secret[8] && *(_QWORD *)this->m_verification == *(_QWORD *)other->m_verification && *(_QWORD *)&this->m_verification[8] == *(_QWORD *)&other->m_verification[8] && this->m_relayID == other->m_relayID && this->m_routingID == other->m_routingID && this->m_joinID == other->m_joinID && bdSockAddr::compare(&this->m_relayAddr.m_address, &other->m_relayAddr.m_address, 1);
}

/*
==============
bdRelayJoinData::operator!=
==============
*/
bool bdRelayJoinData::operator!=(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return memcmp_0(this, other, 0x56ui64) || this->m_version != other->m_version || *(_QWORD *)this->m_secret != *(_QWORD *)other->m_secret || *(_QWORD *)&this->m_secret[8] != *(_QWORD *)&other->m_secret[8] || *(_QWORD *)this->m_verification != *(_QWORD *)other->m_verification || *(_QWORD *)&this->m_verification[8] != *(_QWORD *)&other->m_verification[8] || this->m_relayID != other->m_relayID || this->m_routingID != other->m_routingID || this->m_joinID != other->m_joinID || !bdSockAddr::compare(&this->m_relayAddr.m_address, &other->m_relayAddr.m_address, 1);
}

/*
==============
bdRelayJoinData::decrypt
==============
*/
__int64 bdRelayJoinData::decrypt(bdRelayJoinData *this, const unsigned __int8 *relaySecret)
{
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int8 v14; 
  unsigned int newOffset[2]; 
  unsigned __int64 v17; 
  __int64 v18; 
  bdAuthenticationTag authTag; 
  bdCypherAESGCM v20; 
  unsigned __int8 plainText[8]; 

  v18 = -2i64;
  bdCypherAESGCM::bdCypherAESGCM(&v20);
  LOBYTE(relaySecret) = bdCypherAESGCM::init(&v20, relaySecret, 0x10u);
  bdAuthenticationTag::bdAuthenticationTag(&authTag);
  if ( !(_BYTE)relaySecret || !bdAuthenticationTag::setTag(&authTag, &this->m_encrypted[70], 0x10u) || !bdCypherAESGCM::setAuthenticationTag(&v20, &authTag) || !bdCypherAESGCM::decrypt(&v20, this->m_encrypted, &this->m_encrypted[12], plainText, 0x3Au) )
  {
    newOffset[0] = 0;
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  newOffset[0] = 0;
  if ( !bdBytePacker::removeBuffer(plainText, 0x3Au, 0, newOffset, this->m_secret, 0x10u) || !bdBytePacker::removeBuffer(plainText, 0x3Au, newOffset[0], newOffset, this->m_verification, 0x10u) )
    goto LABEL_22;
  _RAX = newOffset[0];
  v5 = newOffset[0] + 8;
  v6 = v5;
  newOffset[0] += 8;
  if ( v5 > 0x3A )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    v6 = newOffset[0];
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+rax+30h+plainText]
      vmovsd  [rsp+130h+var_E8], xmm0
    }
    this->m_relayID = v17;
  }
  if ( v5 > 0x3A )
    goto LABEL_22;
  v8 = v6 + 4;
  v9 = v6 + 4;
  newOffset[0] = v6 + 4;
  if ( v6 + 4 > 0x3A )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    v9 = newOffset[0];
  }
  else
  {
    this->m_routingID = *(_DWORD *)&plainText[v6];
  }
  if ( v8 > 0x3A )
    goto LABEL_22;
  v10 = v9 + 8;
  v11 = v9 + 8;
  newOffset[0] = v9 + 8;
  if ( v9 + 8 > 0x3A )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    v11 = newOffset[0];
  }
  else
  {
    _RAX = v9;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+rax+30h+plainText]
      vmovsd  [rsp+130h+var_E8], xmm0
    }
    this->m_joinID = v17;
  }
  if ( v10 > 0x3A || !bdAddr::deserialize(&this->m_relayAddr, plainText, 0x3Au, v11, newOffset) )
    goto LABEL_22;
  v14 = 1;
LABEL_23:
  bdAuthenticationTag::~bdAuthenticationTag(&authTag);
  bdCypherAESGCM::~bdCypherAESGCM(&v20);
  return v14;
}

/*
==============
bdRelayJoinData::deserialize
==============
*/
bool bdRelayJoinData::deserialize(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  offseta = offset;
  p_m_version = &this->m_version;
  result = bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this->m_secret, 0x10u) && bdBytePacker::removeBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_relayID) && bdBytePacker::removeBasicType<unsigned int>(buffer, bufferSize, offseta, &offseta, &this->m_routingID) && bdBytePacker::removeBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_joinID) && bdAddr::deserialize(&this->m_relayAddr, buffer, bufferSize, offseta, &offseta);
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::deserializeEncrypted
==============
*/
bool bdRelayJoinData::deserializeEncrypted(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  p_m_version = &this->m_version;
  offseta = offset;
  result = bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this, 0x56u);
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::deserializeInitJoin
==============
*/
bool bdRelayJoinData::deserializeInitJoin(bdRelayJoinData *this, const void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  unsigned int v5; 
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  p_m_version = &this->m_version;
  offseta = offset;
  result = bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_relayID) && bdBytePacker::removeBasicType<unsigned int>(buffer, bufferSize, offseta, &offseta, &this->m_routingID) && bdBytePacker::removeBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_joinID) && bdAddr::deserialize(&this->m_relayAddr, buffer, bufferSize, offseta, &offseta);
  if ( result )
    v5 = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::encrypt
==============
*/
_BOOL8 bdRelayJoinData::encrypt(bdRelayJoinData *this, const unsigned __int8 *relaySecret)
{
  unsigned int v5; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v10; 
  char v12; 
  bdTrulyRandomImpl *v13; 
  bdTrulyRandomImpl *v14; 
  bdSingletonRegistryImpl *Instance; 
  bool v16; 
  bool v17; 
  unsigned int TagLength; 
  unsigned __int8 *Tag; 
  unsigned int newOffset; 
  unsigned __int64 m_relayID; 
  __int64 v23; 
  bdAuthenticationTag authTag; 
  bdCypherAESGCM v25; 
  unsigned __int8 dest[64]; 

  v23 = -2i64;
  bdCypherAESGCM::bdCypherAESGCM(&v25);
  newOffset = 0;
  if ( !bdCypherAESGCM::init(&v25, relaySecret, 0x10u) )
    goto LABEL_9;
  if ( !bdBytePacker::appendBuffer(dest, 0x3Au, 0, &newOffset, this->m_secret, 0x10u) )
    goto LABEL_9;
  if ( !bdBytePacker::appendBuffer(dest, 0x3Au, newOffset, &newOffset, this->m_verification, 0x10u) )
    goto LABEL_9;
  _R14 = newOffset;
  v5 = newOffset + 8;
  newOffset = v5;
  bdHandleAssert(v5 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( v5 > 0x3A )
    goto LABEL_9;
  m_relayID = this->m_relayID;
  __asm
  {
    vmovsd  xmm0, [rsp+140h+var_F8]
    vmovsd  qword ptr [rbp+r14+40h+dest], xmm0
  }
  v7 = newOffset;
  v8 = newOffset + 4;
  newOffset = v8;
  bdHandleAssert(v8 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( v8 > 0x3A )
    goto LABEL_9;
  *(_DWORD *)&dest[v7] = this->m_routingID;
  _R14 = newOffset;
  v10 = newOffset + 8;
  newOffset = v10;
  bdHandleAssert(v10 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( v10 > 0x3A )
    goto LABEL_9;
  m_relayID = this->m_joinID;
  __asm
  {
    vmovsd  xmm0, [rsp+140h+var_F8]
    vmovsd  qword ptr [rbp+r14+40h+dest], xmm0
  }
  if ( bdAddr::serialize(&this->m_relayAddr, dest, 0x3Au, newOffset, &newOffset) )
    v12 = 1;
  else
LABEL_9:
    v12 = 0;
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v13 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    m_relayID = (unsigned __int64)v13;
    if ( v13 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v13);
    else
      v14 = NULL;
    bdSingleton<bdTrulyRandomImpl>::m_instance = v14;
    if ( !v14 )
      goto LABEL_17;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_17:
      DebugBreak();
    }
  }
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, this->m_encrypted, 0xCu);
  v16 = v12 && bdCypherAESGCM::encrypt(&v25, this->m_encrypted, dest, &this->m_encrypted[12], 0x3Au);
  bdAuthenticationTag::bdAuthenticationTag(&authTag);
  v17 = v16 && bdCypherAESGCM::getAuthenticationTag(&v25, &authTag, 0x10u);
  TagLength = bdAuthenticationTag::getTagLength(&authTag);
  Tag = bdAuthenticationTag::getTag(&authTag);
  memcpy_0(&this->m_encrypted[70], Tag, TagLength);
  bdAuthenticationTag::~bdAuthenticationTag(&authTag);
  bdCypherAESGCM::~bdCypherAESGCM(&v25);
  return v17;
}

/*
==============
bdRelayJoinData::getJoinID
==============
*/
unsigned __int64 bdRelayJoinData::getJoinID(bdRelayJoinData *this)
{
  return this->m_joinID;
}

/*
==============
bdRelayJoinData::getRelayAddr
==============
*/
bdAddr *bdRelayJoinData::getRelayAddr(bdRelayJoinData *this)
{
  return &this->m_relayAddr;
}

/*
==============
bdRelayJoinData::getRelayID
==============
*/
unsigned __int64 bdRelayJoinData::getRelayID(bdRelayJoinData *this)
{
  return this->m_relayID;
}

/*
==============
bdRelayJoinData::getRoutingID
==============
*/
__int64 bdRelayJoinData::getRoutingID(bdRelayJoinData *this)
{
  return this->m_routingID;
}

/*
==============
bdRelayJoinData::getSecret
==============
*/
unsigned __int8 *bdRelayJoinData::getSecret(bdRelayJoinData *this)
{
  return this->m_secret;
}

/*
==============
bdRelayJoinData::getVerification
==============
*/
unsigned __int8 *bdRelayJoinData::getVerification(bdRelayJoinData *this)
{
  return this->m_verification;
}

/*
==============
bdRelayJoinData::isSameRoute
==============
*/
bool bdRelayJoinData::isSameRoute(bdRelayJoinData *this, const bdRelayJoinData *other)
{
  return this->m_relayID == other->m_relayID && this->m_routingID == other->m_routingID && bdSockAddr::compare(&this->m_relayAddr.m_address, &other->m_relayAddr.m_address, 1);
}

/*
==============
bdRelayJoinData::serialize
==============
*/
bool bdRelayJoinData::serialize(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  __int64 v5; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  v9 = offset + 1;
  offseta = offset + 1;
  v10 = offset + 1 <= bufferSize || !buffer;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !buffer )
  {
LABEL_8:
    if ( v9 <= bufferSize )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 <= bufferSize )
  {
    *((_BYTE *)buffer + v5) = this->m_version;
    goto LABEL_8;
  }
LABEL_9:
  if ( buffer )
    goto LABEL_24;
LABEL_10:
  if ( !bdBytePacker::appendBuffer(buffer, bufferSize, offseta, &offseta, this->m_secret, 0x10u) || !bdBytePacker::appendBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_relayID) )
    goto LABEL_24;
  v11 = offseta;
  v12 = offseta + 4;
  offseta = v12;
  v13 = v12 <= bufferSize || !buffer;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( buffer )
  {
    if ( v12 > bufferSize )
      goto LABEL_20;
    *(_DWORD *)((char *)buffer + v11) = this->m_routingID;
  }
  if ( v12 > bufferSize )
  {
LABEL_20:
    if ( buffer )
      goto LABEL_24;
  }
  if ( bdBytePacker::appendBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_joinID) && bdAddr::serialize(&this->m_relayAddr, buffer, bufferSize, offseta, &offseta) )
  {
    result = 1;
    goto LABEL_25;
  }
LABEL_24:
  result = 0;
LABEL_25:
  if ( result )
    LODWORD(v5) = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::serializeEncrypted
==============
*/
bool bdRelayJoinData::serializeEncrypted(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
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
  if ( bdBytePacker::appendBuffer(buffer, bufferSize, offseta, &offseta, this, 0x56u) )
  {
    result = 1;
    goto LABEL_13;
  }
LABEL_12:
  result = 0;
LABEL_13:
  if ( result )
    LODWORD(v5) = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::serializeInitJoin
==============
*/
bool bdRelayJoinData::serializeInitJoin(bdRelayJoinData *this, void *buffer, unsigned int bufferSize, unsigned int offset, unsigned int *newOffset)
{
  __int64 v5; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  bool v13; 
  bool result; 
  unsigned int offseta; 

  v5 = offset;
  v9 = offset + 1;
  offseta = offset + 1;
  v10 = offset + 1 <= bufferSize || !buffer;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !buffer )
  {
LABEL_8:
    if ( v9 <= bufferSize )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 <= bufferSize )
  {
    *((_BYTE *)buffer + v5) = this->m_version;
    goto LABEL_8;
  }
LABEL_9:
  if ( buffer )
    goto LABEL_23;
LABEL_10:
  if ( !bdBytePacker::appendBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_relayID) )
    goto LABEL_23;
  v11 = offseta;
  v12 = offseta + 4;
  offseta = v12;
  v13 = v12 <= bufferSize || !buffer;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( buffer )
  {
    if ( v12 > bufferSize )
      goto LABEL_19;
    *(_DWORD *)((char *)buffer + v11) = this->m_routingID;
  }
  if ( v12 > bufferSize )
  {
LABEL_19:
    if ( buffer )
      goto LABEL_23;
  }
  if ( bdBytePacker::appendBasicType<unsigned __int64>(buffer, bufferSize, offseta, &offseta, &this->m_joinID) && bdAddr::serialize(&this->m_relayAddr, buffer, bufferSize, offseta, &offseta) )
  {
    result = 1;
    goto LABEL_24;
  }
LABEL_23:
  result = 0;
LABEL_24:
  if ( result )
    LODWORD(v5) = offseta;
  *newOffset = v5;
  return result;
}

/*
==============
bdRelayJoinData::setJoinID
==============
*/
void bdRelayJoinData::setJoinID(bdRelayJoinData *this, unsigned __int64 joinID)
{
  this->m_joinID = joinID;
}

