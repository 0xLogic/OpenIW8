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
  *(_QWORD *)&this->m_secret[8] = 0i64;
  this->m_routingID = routingID;
  this->m_joinID = joinID;
  this->m_relayID = relayID;
  bdAddr::bdAddr(&this->m_relayAddr, relayAddr);
  bdHandleAssert(verification != NULL, "verification != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdroutinglayer\\bdrelaytypes\\bdrelayjoindata.cpp", "bdRelayJoinData::bdRelayJoinData", 0x24u, "Verification cannot be NULL.");
  *(_OWORD *)this->m_verification = *(_OWORD *)verification;
  if ( secret )
    *(_OWORD *)this->m_secret = *(_OWORD *)secret;
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

  *(__m256i *)this->m_encrypted = *(__m256i *)other->m_encrypted;
  *(__m256i *)&this->m_encrypted[32] = *(__m256i *)&other->m_encrypted[32];
  *(_OWORD *)&this->m_encrypted[64] = *(_OWORD *)&other->m_encrypted[64];
  *(_DWORD *)&this->m_encrypted[80] = *(_DWORD *)&other->m_encrypted[80];
  *(_WORD *)&this->m_encrypted[84] = *(_WORD *)&other->m_encrypted[84];
  this->m_version = other->m_version;
  *(_OWORD *)this->m_secret = *(_OWORD *)other->m_secret;
  *(_OWORD *)this->m_verification = *(_OWORD *)other->m_verification;
  this->m_relayID = other->m_relayID;
  this->m_routingID = other->m_routingID;
  this->m_joinID = other->m_joinID;
  result = this;
  this->m_relayAddr = other->m_relayAddr;
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
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 v11; 
  unsigned int newOffset[2]; 
  unsigned __int64 v14; 
  __int64 v15; 
  bdAuthenticationTag authTag; 
  bdCypherAESGCM v17; 
  unsigned __int8 plainText[8]; 

  v15 = -2i64;
  bdCypherAESGCM::bdCypherAESGCM(&v17);
  LOBYTE(relaySecret) = bdCypherAESGCM::init(&v17, relaySecret, 0x10u);
  bdAuthenticationTag::bdAuthenticationTag(&authTag);
  if ( !(_BYTE)relaySecret || !bdAuthenticationTag::setTag(&authTag, &this->m_encrypted[70], 0x10u) || !bdCypherAESGCM::setAuthenticationTag(&v17, &authTag) || !bdCypherAESGCM::decrypt(&v17, this->m_encrypted, &this->m_encrypted[12], plainText, 0x3Au) )
  {
    newOffset[0] = 0;
LABEL_22:
    v11 = 0;
    goto LABEL_23;
  }
  newOffset[0] = 0;
  if ( !bdBytePacker::removeBuffer(plainText, 0x3Au, 0, newOffset, this->m_secret, 0x10u) || !bdBytePacker::removeBuffer(plainText, 0x3Au, newOffset[0], newOffset, this->m_verification, 0x10u) )
    goto LABEL_22;
  v4 = newOffset[0];
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
    v14 = *(_QWORD *)&plainText[v4];
    this->m_relayID = v14;
  }
  if ( v5 > 0x3A )
    goto LABEL_22;
  v7 = v6 + 4;
  v8 = v6 + 4;
  newOffset[0] = v6 + 4;
  if ( v6 + 4 > 0x3A )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    v8 = newOffset[0];
  }
  else
  {
    this->m_routingID = *(_DWORD *)&plainText[v6];
  }
  if ( v7 > 0x3A )
    goto LABEL_22;
  v9 = v8 + 8;
  v10 = v8 + 8;
  newOffset[0] = v8 + 8;
  if ( v8 + 8 > 0x3A )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 8i64);
    v10 = newOffset[0];
  }
  else
  {
    v14 = *(_QWORD *)&plainText[v8];
    this->m_joinID = v14;
  }
  if ( v9 > 0x3A || !bdAddr::deserialize(&this->m_relayAddr, plainText, 0x3Au, v10, newOffset) )
    goto LABEL_22;
  v11 = 1;
LABEL_23:
  bdAuthenticationTag::~bdAuthenticationTag(&authTag);
  bdCypherAESGCM::~bdCypherAESGCM(&v17);
  return v11;
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
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  char v10; 
  bdTrulyRandomImpl *v11; 
  bdTrulyRandomImpl *v12; 
  bdSingletonRegistryImpl *Instance; 
  bool v14; 
  bool v15; 
  unsigned int TagLength; 
  unsigned __int8 *Tag; 
  unsigned int newOffset; 
  unsigned __int64 m_relayID; 
  __int64 v21; 
  bdAuthenticationTag authTag; 
  bdCypherAESGCM v23; 
  unsigned __int8 dest[64]; 

  v21 = -2i64;
  bdCypherAESGCM::bdCypherAESGCM(&v23);
  newOffset = 0;
  if ( !bdCypherAESGCM::init(&v23, relaySecret, 0x10u) )
    goto LABEL_9;
  if ( !bdBytePacker::appendBuffer(dest, 0x3Au, 0, &newOffset, this->m_secret, 0x10u) )
    goto LABEL_9;
  if ( !bdBytePacker::appendBuffer(dest, 0x3Au, newOffset, &newOffset, this->m_verification, 0x10u) )
    goto LABEL_9;
  v4 = newOffset;
  v5 = newOffset + 8;
  newOffset = v5;
  bdHandleAssert(v5 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( v5 > 0x3A )
    goto LABEL_9;
  m_relayID = this->m_relayID;
  *(double *)&dest[v4] = *(double *)&m_relayID;
  v6 = newOffset;
  v7 = newOffset + 4;
  newOffset = v7;
  bdHandleAssert(v7 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( v7 > 0x3A )
    goto LABEL_9;
  *(_DWORD *)&dest[v6] = this->m_routingID;
  v8 = newOffset;
  v9 = newOffset + 8;
  newOffset = v9;
  bdHandleAssert(v9 <= 0x3A, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 8i64);
  if ( v9 <= 0x3A && (m_relayID = this->m_joinID, *(double *)&dest[v8] = *(double *)&m_relayID, bdAddr::serialize(&this->m_relayAddr, dest, 0x3Au, newOffset, &newOffset)) )
    v10 = 1;
  else
LABEL_9:
    v10 = 0;
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v11 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    m_relayID = (unsigned __int64)v11;
    if ( v11 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v11);
    else
      v12 = NULL;
    bdSingleton<bdTrulyRandomImpl>::m_instance = v12;
    if ( !v12 )
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
  v14 = v10 && bdCypherAESGCM::encrypt(&v23, this->m_encrypted, dest, &this->m_encrypted[12], 0x3Au);
  bdAuthenticationTag::bdAuthenticationTag(&authTag);
  v15 = v14 && bdCypherAESGCM::getAuthenticationTag(&v23, &authTag, 0x10u);
  TagLength = bdAuthenticationTag::getTagLength(&authTag);
  Tag = bdAuthenticationTag::getTag(&authTag);
  memcpy_0(&this->m_encrypted[70], Tag, TagLength);
  bdAuthenticationTag::~bdAuthenticationTag(&authTag);
  bdCypherAESGCM::~bdCypherAESGCM(&v23);
  return v15;
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

