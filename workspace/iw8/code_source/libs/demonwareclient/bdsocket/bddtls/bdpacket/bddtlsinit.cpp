/*
==============
bdDTLSInit::bdDTLSInit
==============
*/

void __fastcall bdDTLSInit::bdDTLSInit(bdDTLSInit *this)
{
  ??0bdDTLSInit@@QEAA@XZ(this);
}

/*
==============
bdDTLSInit::getInitTag
==============
*/

unsigned __int16 __fastcall bdDTLSInit::getInitTag(bdDTLSInit *this)
{
  return ?getInitTag@bdDTLSInit@@QEBAGXZ(this);
}

/*
==============
bdDTLSInit::serialize
==============
*/

bool __fastcall bdDTLSInit::serialize(bdDTLSInit *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdDTLSInit@@UEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdDTLSInit::getRandomData
==============
*/

const bdDTLSRandom *__fastcall bdDTLSInit::getRandomData(bdDTLSInit *this)
{
  return ?getRandomData@bdDTLSInit@@QEBAAEBVbdDTLSRandom@@XZ(this);
}

/*
==============
bdDTLSInit::deserialize
==============
*/

bool __fastcall bdDTLSInit::deserialize(bdDTLSInit *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  return ?deserialize@bdDTLSInit@@UEAA_NPEBXIIAEAIG@Z(this, data, size, offset, newOffset, expectedCypherSuite);
}

/*
==============
bdDTLSInit::bdDTLSInit
==============
*/

void __fastcall bdDTLSInit::bdDTLSInit(bdDTLSInit *this, unsigned __int16 initTag, const bdSecurityID *secID, const bdDTLSRandom *randomData, const unsigned __int16 *cypherSuite)
{
  ??0bdDTLSInit@@QEAA@GAEBVbdSecurityID@@AEBVbdDTLSRandom@@AEBG@Z(this, initTag, secID, randomData, cypherSuite);
}

/*
==============
bdDTLSInit::~bdDTLSInit
==============
*/

void __fastcall bdDTLSInit::~bdDTLSInit(bdDTLSInit *this)
{
  ??1bdDTLSInit@@UEAA@XZ(this);
}

/*
==============
bdDTLSInit::getSecID
==============
*/

void __fastcall bdDTLSInit::getSecID(bdDTLSInit *this, bdSecurityID *secID)
{
  ?getSecID@bdDTLSInit@@QEBAXAEAVbdSecurityID@@@Z(this, secID);
}

/*
==============
bdDTLSInit::bdDTLSInit
==============
*/
void bdDTLSInit::bdDTLSInit(bdDTLSInit *this, unsigned __int16 initTag, const bdSecurityID *secID, const bdDTLSRandom *randomData, const unsigned __int16 *cypherSuite)
{
  bdDTLSHeader::bdDTLSHeader(this, BD_DTLS_INIT, 0, 0);
  this->__vftable = (bdDTLSInit_vtbl *)&bdDTLSInit::`vftable';
  this->m_initTag = initTag;
  bdSecurityID::bdSecurityID(&this->m_secID, secID);
  *(__m256i *)this->m_random.m_dtlsRandom = *(__m256i *)randomData->m_dtlsRandom;
  this->m_random.m_initialized = 1;
  this->m_cypherSuite = *cypherSuite;
}

/*
==============
bdDTLSInit::bdDTLSInit
==============
*/
void bdDTLSInit::bdDTLSInit(bdDTLSInit *this)
{
  bdDTLSHeader::bdDTLSHeader(this);
  this->__vftable = (bdDTLSInit_vtbl *)&bdDTLSInit::`vftable';
  this->m_initTag = 0;
  bdSecurityID::bdSecurityID(&this->m_secID);
  this->m_random.m_initialized = 0;
  *(_QWORD *)this->m_random.m_dtlsRandom = 0i64;
  *(_QWORD *)&this->m_random.m_dtlsRandom[8] = 0i64;
  *(_QWORD *)&this->m_random.m_dtlsRandom[16] = 0i64;
  *(_QWORD *)&this->m_random.m_dtlsRandom[24] = 0i64;
  this->m_cypherSuite = 0;
}

/*
==============
bdDTLSInit::~bdDTLSInit
==============
*/
void bdDTLSInit::~bdDTLSInit(bdDTLSInit *this)
{
  this->__vftable = (bdDTLSInit_vtbl *)&bdDTLSInit::`vftable';
  bdCryptoUtils::zeroBuffer(&this->m_random, 0x20ui64);
  bdSecurityID::~bdSecurityID(&this->m_secID);
  bdDTLSHeader::~bdDTLSHeader(this);
}

/*
==============
bdDTLSInit::deserialize
==============
*/
bool bdDTLSInit::deserialize(bdDTLSInit *this, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset, const unsigned __int16 expectedCypherSuite)
{
  bool result; 
  __m256i dest; 

  *newOffset = offset;
  result = bdDTLSHeader::deserialize(this, data, size, offset, newOffset) && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_initTag) && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u);
  if ( BD_DTLS_VERSION < 3u )
  {
    if ( result )
      return result;
  }
  else
  {
    if ( result && bdBytePacker::removeBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_cypherSuite) && expectedCypherSuite == this->m_cypherSuite && bdBytePacker::removeBuffer(data, size, *newOffset, newOffset, &dest, 0x20u) )
    {
      *(__m256i *)this->m_random.m_dtlsRandom = dest;
      this->m_random.m_initialized = 1;
      return 1;
    }
    result = 0;
  }
  *newOffset = offset;
  return result;
}

/*
==============
bdDTLSInit::getInitTag
==============
*/
__int64 bdDTLSInit::getInitTag(bdDTLSInit *this)
{
  return this->m_initTag;
}

/*
==============
bdDTLSInit::getRandomData
==============
*/
bdDTLSRandom *bdDTLSInit::getRandomData(bdDTLSInit *this)
{
  return &this->m_random;
}

/*
==============
bdDTLSInit::getSecID
==============
*/
void bdDTLSInit::getSecID(bdDTLSInit *this, bdSecurityID *secID)
{
  *secID = this->m_secID;
}

/*
==============
bdDTLSInit::serialize
==============
*/
bool bdDTLSInit::serialize(bdDTLSInit *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool result; 

  *newOffset = offset;
  result = bdDTLSHeader::serialize(this, data, size, offset, newOffset) && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_initTag) && bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_secID, 8u);
  if ( BD_DTLS_VERSION < 3u )
  {
    if ( result )
      return result;
  }
  else
  {
    if ( result && bdBytePacker::appendBasicType<unsigned short>(data, size, *newOffset, newOffset, &this->m_cypherSuite) )
    {
      bdHandleAssert(this->m_random.m_initialized, "m_initialized", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bddtls\\bddtlsrandom.h", "bdDTLSRandom::getData", 0x41u, "bdDTLSRandom not initialized before access");
      if ( bdBytePacker::appendBuffer(data, size, *newOffset, newOffset, &this->m_random, 0x20u) )
        return 1;
    }
    result = 0;
  }
  *newOffset = offset;
  return result;
}

