/*
==============
bdClientAuthToken::getSecret
==============
*/

const unsigned __int8 *__fastcall bdClientAuthToken::getSecret(bdClientAuthToken *this)
{
  return ?getSecret@bdClientAuthToken@@QEBAPEBEXZ(this);
}

/*
==============
bdClientAuthToken::~bdClientAuthToken
==============
*/

void __fastcall bdClientAuthToken::~bdClientAuthToken(bdClientAuthToken *this)
{
  ??1bdClientAuthToken@@UEAA@XZ(this);
}

/*
==============
bdClientAuthToken::deserialize
==============
*/

bool __fastcall bdClientAuthToken::deserialize(bdClientAuthToken *this, const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdClientAuthToken@@UEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdClientAuthToken::operator==
==============
*/

bool __fastcall bdClientAuthToken::operator==(bdClientAuthToken *this, const bdClientAuthToken *other)
{
  return ??8bdClientAuthToken@@UEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdClientAuthToken::operator=
==============
*/

bdClientAuthToken *__fastcall bdClientAuthToken::operator=(bdClientAuthToken *this, const bdClientAuthToken *other)
{
  return ??4bdClientAuthToken@@UEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdClientAuthToken::deserializeInit
==============
*/

bool __fastcall bdClientAuthToken::deserializeInit(bdClientAuthToken *this, const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserializeInit@bdClientAuthToken@@MEAA_NPEBXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdClientAuthToken::serializeInit
==============
*/

bool __fastcall bdClientAuthToken::serializeInit(bdClientAuthToken *this, void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
{
  return ?serializeInit@bdClientAuthToken@@MEBA_NPEAXIIAEAI@Z(this, buffer, bufferSize, offset, newOffset);
}

/*
==============
bdClientAuthToken::getExpiryDelta
==============
*/

unsigned int __fastcall bdClientAuthToken::getExpiryDelta(bdClientAuthToken *this)
{
  return ?getExpiryDelta@bdClientAuthToken@@QEBAIXZ(this);
}

/*
==============
bdClientAuthToken::bdClientAuthToken
==============
*/

void __fastcall bdClientAuthToken::bdClientAuthToken(bdClientAuthToken *this)
{
  ??0bdClientAuthToken@@QEAA@XZ(this);
}

/*
==============
bdClientAuthToken::bdClientAuthToken
==============
*/
void bdClientAuthToken::bdClientAuthToken(bdClientAuthToken *this)
{
  this->m_version = 1;
  this->__vftable = (bdClientAuthToken_vtbl *)&bdClientAuthToken::`vftable';
}

/*
==============
bdClientAuthToken::~bdClientAuthToken
==============
*/
void bdClientAuthToken::~bdClientAuthToken(bdClientAuthToken *this)
{
  this->__vftable = (bdClientAuthToken_vtbl *)&bdClientAuthToken::`vftable';
}

/*
==============
bdClientAuthToken::operator=
==============
*/
bdClientAuthToken *bdClientAuthToken::operator=(bdClientAuthToken *this, const bdClientAuthToken *other)
{
  *(__m256i *)this->m_encrypted = *(__m256i *)other->m_encrypted;
  *(_OWORD *)&this->m_encrypted[32] = *(_OWORD *)&other->m_encrypted[32];
  *(double *)&this->m_encrypted[48] = *(double *)&other->m_encrypted[48];
  this->m_version = other->m_version;
  *(_OWORD *)this->m_secret = *(_OWORD *)other->m_secret;
  this->m_expiresIn = other->m_expiresIn;
  return this;
}

/*
==============
bdClientAuthToken::operator==
==============
*/
bool bdClientAuthToken::operator==(bdClientAuthToken *this, const bdClientAuthToken *other)
{
  return !memcmp_0(this->m_encrypted, other->m_encrypted, 0x38ui64) && this->m_version == other->m_version && *(_QWORD *)this->m_secret == *(_QWORD *)other->m_secret && *(_QWORD *)&this->m_secret[8] == *(_QWORD *)&other->m_secret[8] && this->m_expiresIn == other->m_expiresIn;
}

/*
==============
bdClientAuthToken::deserialize
==============
*/
bool bdClientAuthToken::deserialize(bdClientAuthToken *this, const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  p_m_version = &this->m_version;
  offseta = offset;
  if ( bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this->m_encrypted, 0x38u) && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this->m_secret, 0x10u) && bdBytePacker::removeBasicType<unsigned int>(buffer, bufferSize, offseta, &offseta, &this->m_expiresIn) )
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
bdClientAuthToken::deserializeInit
==============
*/
bool bdClientAuthToken::deserializeInit(bdClientAuthToken *this, const void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 *p_m_version; 
  bool result; 
  unsigned int offseta; 

  p_m_version = &this->m_version;
  offseta = offset;
  if ( bdBytePacker::removeBasicType<unsigned char>(buffer, bufferSize, offset, &offseta, &this->m_version) && *p_m_version == 1 && bdBytePacker::removeBuffer(buffer, bufferSize, offseta, &offseta, this->m_encrypted, 0x38u) && bdBytePacker::removeBasicType<unsigned int>(buffer, bufferSize, offseta, &offseta, &this->m_expiresIn) )
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
bdClientAuthToken::getExpiryDelta
==============
*/
__int64 bdClientAuthToken::getExpiryDelta(bdClientAuthToken *this)
{
  return this->m_expiresIn;
}

/*
==============
bdClientAuthToken::getSecret
==============
*/
unsigned __int8 *bdClientAuthToken::getSecret(bdClientAuthToken *this)
{
  return this->m_secret;
}

/*
==============
bdClientAuthToken::serializeInit
==============
*/
bool bdClientAuthToken::serializeInit(bdClientAuthToken *this, void *buffer, const unsigned int bufferSize, const unsigned int offset, unsigned int *newOffset)
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
    goto LABEL_21;
LABEL_10:
  if ( !bdBytePacker::appendBuffer(buffer, bufferSize, offseta, &offseta, this->m_encrypted, 0x38u) )
    goto LABEL_21;
  v11 = offseta;
  v12 = offseta + 4;
  offseta = v12;
  v13 = v12 <= bufferSize || !buffer;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
    goto LABEL_18;
  if ( v12 <= bufferSize )
  {
    *(_DWORD *)((char *)buffer + v11) = this->m_expiresIn;
LABEL_18:
    if ( v12 <= bufferSize )
    {
LABEL_20:
      result = 1;
      *newOffset = offseta;
      return result;
    }
  }
  if ( !buffer )
    goto LABEL_20;
LABEL_21:
  result = 0;
  *newOffset = *newOffset;
  return result;
}

