/*
==============
bdCommonAddr::deserialize
==============
*/

bool __fastcall bdCommonAddr::deserialize(bdCommonAddr *this, bdReference<bdCommonAddr> me, bdReference<bdBitBuffer> buffer)
{
  return ?deserialize@bdCommonAddr@@QEAA_NV?$bdReference@VbdCommonAddr@@@@V?$bdReference@VbdBitBuffer@@@@@Z(this, me, buffer);
}

/*
==============
bdCommonAddr::operator<
==============
*/

bool __fastcall bdCommonAddr::operator<(bdCommonAddr *this, const bdCommonAddr *other)
{
  return ??MbdCommonAddr@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this, bdReference<bdCommonAddr> me, const bdArray<bdAddr> *localAddrs, const bdAddr *publicAddr, const bdNATType natType)
{
  ??0bdCommonAddr@@QEAA@V?$bdReference@VbdCommonAddr@@@@AEBV?$bdArray@VbdAddr@@@@AEBVbdAddr@@W4bdNATType@@@Z(this, me, localAddrs, publicAddr, natType);
}

/*
==============
bdCommonAddr::calculateHash
==============
*/

void __fastcall bdCommonAddr::calculateHash(bdCommonAddr *this)
{
  ?calculateHash@bdCommonAddr@@IEAAXXZ(this);
}

/*
==============
bdCommonAddr::setNATType
==============
*/

void __fastcall bdCommonAddr::setNATType(bdCommonAddr *this, const bdNATType natType)
{
  ?setNATType@bdCommonAddr@@QEAAXW4bdNATType@@@Z(this, natType);
}

/*
==============
bdCommonAddr::getLocalAddrs
==============
*/

const bdFixedArray<bdAddr,5> *__fastcall bdCommonAddr::getLocalAddrs(bdCommonAddr *this)
{
  return ?getLocalAddrs@bdCommonAddr@@QEBAAEBV?$bdFixedArray@VbdAddr@@$04@@XZ(this);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdArray<bdAddr> *localAddrs, const bdAddr *publicAddr, const bdNATType natType, const bdPlatformID platformID)
{
  ??0bdCommonAddr@@QEAA@AEBV?$bdArray@VbdAddr@@@@AEBVbdAddr@@W4bdNATType@@W4bdPlatformID@@@Z(this, localAddrs, publicAddr, natType, platformID);
}

/*
==============
bdCommonAddr::serialize
==============
*/

void __fastcall bdCommonAddr::serialize(bdCommonAddr *this, bdReference<bdBitBuffer> buffer)
{
  ?serialize@bdCommonAddr@@QEBAXV?$bdReference@VbdBitBuffer@@@@@Z(this, buffer);
}

/*
==============
bdCommonAddr::setRelayJoinData
==============
*/

void __fastcall bdCommonAddr::setRelayJoinData(bdCommonAddr *this, const bdRelayJoinData *joinData)
{
  ?setRelayJoinData@bdCommonAddr@@QEAAXAEBVbdRelayJoinData@@@Z(this, joinData);
}

/*
==============
bdCommonAddr::operator!=
==============
*/

bool __fastcall bdCommonAddr::operator!=(bdCommonAddr *this, const bdCommonAddr *other)
{
  return ??9bdCommonAddr@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdCommonAddr::~bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::~bdCommonAddr(bdCommonAddr *this)
{
  ??1bdCommonAddr@@UEAA@XZ(this);
}

/*
==============
bdCommonAddr::getLocalAddrsArray
==============
*/

const bdArray<bdAddr> *__fastcall bdCommonAddr::getLocalAddrsArray(bdCommonAddr *this, const bdArray<bdAddr> *result)
{
  return ?getLocalAddrsArray@bdCommonAddr@@QEBA?BV?$bdArray@VbdAddr@@@@XZ(this, result);
}

/*
==============
bdCommonAddr::hasSameRelay
==============
*/

bool __fastcall bdCommonAddr::hasSameRelay(bdCommonAddr *this, const bdCommonAddr *other)
{
  return ?hasSameRelay@bdCommonAddr@@IEBA_NAEBV1@@Z(this, other);
}

/*
==============
bdCommonAddr::hasSameAddr
==============
*/

bool __fastcall bdCommonAddr::hasSameAddr(bdCommonAddr *this, const bdCommonAddr *other)
{
  return ?hasSameAddr@bdCommonAddr@@IEBA_NAEBV1@@Z(this, other);
}

/*
==============
bdCommonAddr::getLocalAddrByIndex
==============
*/

const bdAddr *__fastcall bdCommonAddr::getLocalAddrByIndex(bdCommonAddr *this, const unsigned int index)
{
  return ?getLocalAddrByIndex@bdCommonAddr@@QEBAAEBVbdAddr@@I@Z(this, index);
}

/*
==============
bdCommonAddr::getPublicAddr
==============
*/

const bdAddr *__fastcall bdCommonAddr::getPublicAddr(bdCommonAddr *this)
{
  return ?getPublicAddr@bdCommonAddr@@QEBAAEBVbdAddr@@XZ(this);
}

/*
==============
bdCommonAddr::getNATType
==============
*/

bdNATType __fastcall bdCommonAddr::getNATType(bdCommonAddr *this)
{
  return ?getNATType@bdCommonAddr@@QEBA?AW4bdNATType@@XZ(this);
}

/*
==============
bdCommonAddr::serialize
==============
*/

void __fastcall bdCommonAddr::serialize(bdCommonAddr *this, unsigned __int8 *buffer)
{
  ?serialize@bdCommonAddr@@QEBAXQEAE@Z(this, buffer);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdAddr *publicAddr)
{
  ??0bdCommonAddr@@QEAA@AEBVbdAddr@@@Z(this, publicAddr);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this, bdReference<bdCommonAddr> me, const bdFixedArray<bdAddr,5> *localAddrs, const bdAddr *publicAddr, const bdNATType natType)
{
  ??0bdCommonAddr@@QEAA@V?$bdReference@VbdCommonAddr@@@@AEBV?$bdFixedArray@VbdAddr@@$04@@AEBVbdAddr@@W4bdNATType@@@Z(this, me, localAddrs, publicAddr, natType);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this)
{
  ??0bdCommonAddr@@QEAA@XZ(this);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/

void __fastcall bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdFixedArray<bdAddr,5> *localAddrs, const bdAddr *publicAddr, const bdNATType natType, const bdPlatformID platformID)
{
  ??0bdCommonAddr@@QEAA@AEBV?$bdFixedArray@VbdAddr@@$04@@AEBVbdAddr@@W4bdNATType@@W4bdPlatformID@@@Z(this, localAddrs, publicAddr, natType, platformID);
}

/*
==============
bdCommonAddr::operator==
==============
*/

bool __fastcall bdCommonAddr::operator==(bdCommonAddr *this, const bdCommonAddr *other)
{
  return ??8bdCommonAddr@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdCommonAddr::deserialize
==============
*/

bool __fastcall bdCommonAddr::deserialize(bdCommonAddr *this, bdReference<bdCommonAddr> me, const unsigned __int8 *buffer)
{
  return ?deserialize@bdCommonAddr@@QEAA_NV?$bdReference@VbdCommonAddr@@@@QEBE@Z(this, me, buffer);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdArray<bdAddr> *localAddrs, const bdAddr *publicAddr, const bdNATType natType, const bdPlatformID platformID)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(&this->m_localAddrs, localAddrs);
  bdAddr::bdAddr(&this->m_publicAddr, publicAddr);
  this->m_natType = natType;
  this->m_isLoopback = 1;
  this->m_platformID = platformID;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
  bdHandleAssert(this->m_localAddrs.m_size != 0, "m_localAddrs.getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x29u, "Too few local addresses!", -2i64);
  bdHandleAssert(this->m_localAddrs.m_size <= 5, "m_localAddrs.getSize() <= BD_MAX_LOCAL_ADDRS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x2Au, "Too many local addresses!");
  bdCommonAddr::calculateHash(this);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdFixedArray<bdAddr,5> *localAddrs, const bdAddr *publicAddr, const bdNATType natType, const bdPlatformID platformID)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(&this->m_localAddrs, localAddrs);
  bdAddr::bdAddr(&this->m_publicAddr, publicAddr);
  this->m_natType = natType;
  this->m_isLoopback = 1;
  this->m_platformID = platformID;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
  bdHandleAssert(localAddrs->m_size != 0, "localAddrs.getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x38u, "Too few local addresses!", -2i64);
  bdHandleAssert(localAddrs->m_size <= 5, "localAddrs.getSize() <= BD_MAX_LOCAL_ADDRS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x39u, "Too many local addresses!");
  bdCommonAddr::calculateHash(this);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this, const bdAddr *publicAddr)
{
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  __int64 v5; 
  bool isValid; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  p_m_localAddrs = &this->m_localAddrs;
  v5 = 5i64;
  do
  {
    bdAddr::bdAddr(p_m_localAddrs->m_array);
    p_m_localAddrs = (bdFixedArray<bdAddr,5> *)((char *)p_m_localAddrs + 152);
    --v5;
  }
  while ( v5 );
  this->m_localAddrs.m_size = 0;
  bdAddr::bdAddr(&this->m_publicAddr, publicAddr);
  this->m_natType = BD_NAT_OPEN;
  this->m_isLoopback = 0;
  this->m_platformID = BD_PLATFORM_ID_XBOXONE;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
  isValid = bdSockAddr::isValid(&publicAddr->m_address);
  bdHandleAssert(isValid, "publicAddr.getAddress().isValid()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x6Du, "Address not valid!", -2i64);
  bdFixedArray<bdAddr,5>::pushBack(&this->m_localAddrs, publicAddr);
  bdCommonAddr::calculateHash(this);
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this, bdReference<bdCommonAddr> me, const bdArray<bdAddr> *localAddrs, const bdAddr *publicAddr, const bdNATType natType)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(&this->m_localAddrs, localAddrs);
  bdAddr::bdAddr(&this->m_publicAddr, publicAddr);
  this->m_natType = natType;
  this->m_isLoopback = 0;
  this->m_platformID = BD_PLATFORM_ID_XBOXONE;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
  bdHandleAssert(localAddrs->m_size != 0, "localAddrs.getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x47u, "Too few local addresses!", -2i64);
  bdHandleAssert(localAddrs->m_size <= 5, "localAddrs.getSize() <= BD_MAX_LOCAL_ADDRS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x48u, "Too many local addresses!");
  bdCommonAddr::calculateHash(this);
  if ( me.m_ptr->__vftable && bdCommonAddr::hasSameAddr((bdCommonAddr *)me.m_ptr->__vftable, this) )
    this->m_isLoopback = 1;
  if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( me.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
    me.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this, bdReference<bdCommonAddr> me, const bdFixedArray<bdAddr,5> *localAddrs, const bdAddr *publicAddr, const bdNATType natType)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(&this->m_localAddrs, localAddrs);
  bdAddr::bdAddr(&this->m_publicAddr, publicAddr);
  this->m_natType = natType;
  this->m_isLoopback = 0;
  this->m_platformID = BD_PLATFORM_ID_XBOXONE;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
  bdHandleAssert(localAddrs->m_size != 0, "localAddrs.getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x5Cu, "Too few local addresses!", -2i64);
  bdHandleAssert(localAddrs->m_size <= 5, "localAddrs.getSize() <= BD_MAX_LOCAL_ADDRS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::bdCommonAddr", 0x5Du, "Too many local addresses!");
  bdCommonAddr::calculateHash(this);
  if ( me.m_ptr->__vftable && bdCommonAddr::hasSameAddr((bdCommonAddr *)me.m_ptr->__vftable, this) )
    this->m_isLoopback = 1;
  if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( me.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
    me.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdCommonAddr::bdCommonAddr
==============
*/
void bdCommonAddr::bdCommonAddr(bdCommonAddr *this)
{
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  __int64 v3; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  p_m_localAddrs = &this->m_localAddrs;
  v3 = 5i64;
  do
  {
    bdAddr::bdAddr(p_m_localAddrs->m_array);
    p_m_localAddrs = (bdFixedArray<bdAddr,5> *)((char *)p_m_localAddrs + 152);
    --v3;
  }
  while ( v3 );
  this->m_localAddrs.m_size = 0;
  bdAddr::bdAddr(&this->m_publicAddr);
  *(_QWORD *)&this->m_natType = 1i64;
  this->m_isLoopback = 0;
  this->m_platformID = BD_PLATFORM_ID_XBOXONE;
  bdRelayJoinData::bdRelayJoinData(&this->m_joinData);
}

/*
==============
bdCommonAddr::~bdCommonAddr
==============
*/
void bdCommonAddr::~bdCommonAddr(bdCommonAddr *this)
{
  this->__vftable = (bdCommonAddr_vtbl *)&bdCommonAddr::`vftable';
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdCommonAddr::operator==
==============
*/
bool bdCommonAddr::operator==(bdCommonAddr *this, const bdCommonAddr *other)
{
  return bdCommonAddr::hasSameAddr(this, other) && bdRelayJoinData::isSameRoute(&this->m_joinData, &other->m_joinData);
}

/*
==============
bdCommonAddr::operator!=
==============
*/
bool bdCommonAddr::operator!=(bdCommonAddr *this, const bdCommonAddr *other)
{
  return !bdCommonAddr::hasSameAddr(this, other) || !bdRelayJoinData::isSameRoute(&this->m_joinData, &other->m_joinData);
}

/*
==============
bdCommonAddr::operator<
==============
*/
bool bdCommonAddr::operator<(bdCommonAddr *this, const bdCommonAddr *other)
{
  return this->m_hash < other->m_hash;
}

/*
==============
bdCommonAddr::calculateHash
==============
*/
void bdCommonAddr::calculateHash(bdCommonAddr *this)
{
  bdFixedArray<bdAddr,5> *p_m_publicAddr; 
  bool v3; 
  bool v4; 
  __int64 newOffset; 
  bdHashTiger192 v6; 
  __int64 v7; 
  unsigned __int8 data[8]; 
  unsigned __int8 result[4]; 

  v7 = -2i64;
  p_m_publicAddr = (bdFixedArray<bdAddr,5> *)&this->m_publicAddr;
  if ( !bdSockAddr::isValid(&this->m_publicAddr.m_address) )
  {
    if ( this->m_localAddrs.m_size )
    {
      p_m_publicAddr = &this->m_localAddrs;
      bdHandleAssert(this->m_localAddrs.m_size != 0, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x46u, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed");
    }
    else
    {
      p_m_publicAddr = (bdFixedArray<bdAddr,5> *)&BD_CA_INVALID_ADDR;
    }
  }
  LODWORD(newOffset) = 0;
  v3 = bdAddr::serialize(p_m_publicAddr->m_array, data, 6u, 0, (unsigned int *)&newOffset);
  HIDWORD(newOffset) = 24;
  bdHashTiger192::bdHashTiger192(&v6);
  if ( v3 && bdHashTiger192::hash(&v6, data, 6u, result, (unsigned int *)&newOffset + 1) )
  {
    LODWORD(newOffset) = 4;
    this->m_hash = *(_DWORD *)result;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  bdHandleAssert(v4, "status", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::calculateHash", 0x153u, "Failed to calculate hash.", newOffset);
  bdHashTiger192::~bdHashTiger192(&v6);
}

/*
==============
bdCommonAddr::deserialize
==============
*/
__int64 bdCommonAddr::deserialize(bdCommonAddr *this, bdReference<bdCommonAddr> me, const unsigned __int8 *buffer)
{
  char v6; 
  __int64 v7; 
  __int64 m_size; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  unsigned int offset; 
  char v17; 
  bdPlatformID v18; 
  __int64 v19; 
  bdCommonAddr *m_ptr; 
  bdAddr v21; 

  v19 = -2i64;
  m_ptr = me.m_ptr;
  offset = 0;
  v6 = 1;
  this->m_localAddrs.m_size = 0;
  v7 = 5i64;
  do
  {
    bdAddr::bdAddr(&v21);
    if ( v6 && bdAddr::deserialize(&v21, buffer, 0x54u, offset, &offset) )
    {
      v6 = 1;
      if ( bdSockAddr::isValid(&v21.m_address) )
      {
        bdHandleAssert(this->m_localAddrs.m_size < 5, "(m_size < MAX_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::pushBack", 0xBEu, "Cannot add, too many elements");
        m_size = this->m_localAddrs.m_size;
        if ( (unsigned int)m_size < 5 )
        {
          this->m_localAddrs.m_array[m_size] = v21;
          ++this->m_localAddrs.m_size;
        }
      }
    }
    else
    {
      v6 = 0;
    }
    --v7;
  }
  while ( v7 );
  if ( !v6 || !bdAddr::deserialize(&this->m_publicAddr, buffer, 0x54u, offset, &offset) )
    goto LABEL_28;
  v9 = offset;
  v10 = offset + 1;
  v11 = ++offset;
  if ( buffer )
  {
    if ( v10 > 0x54 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
      v11 = offset;
    }
    else
    {
      LOBYTE(v7) = buffer[v9];
      v17 = v7;
    }
  }
  if ( v10 > 0x54 && buffer )
    goto LABEL_28;
  v12 = v11 + 4;
  v13 = v11 + 4;
  offset = v11 + 4;
  if ( buffer )
  {
    if ( v12 > 0x54 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v13 = offset;
    }
    else
    {
      v18 = *(_DWORD *)&buffer[v11];
      this->m_platformID = v18;
    }
  }
  if ( (v12 <= 0x54 || !buffer) && bdRelayJoinData::deserialize(&this->m_joinData, buffer, 0x54u, v13, &offset) )
  {
    v14 = 1;
    this->m_natType = (char)v7;
    bdCommonAddr::calculateHash(this);
    this->m_isLoopback = me.m_ptr->__vftable && bdCommonAddr::hasSameAddr((bdCommonAddr *)me.m_ptr->__vftable, this);
  }
  else
  {
LABEL_28:
    v14 = 0;
  }
  if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( me.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
    me.m_ptr->__vftable = NULL;
  }
  return v14;
}

/*
==============
bdCommonAddr::deserialize
==============
*/
bool bdCommonAddr::deserialize(bdCommonAddr *this, bdReference<bdCommonAddr> me, bdReference<bdBitBuffer> buffer)
{
  bdCommonAddr *v6; 
  bool v7; 
  bdReference<bdCommonAddr> mea; 
  __int64 v10; 
  bdCommonAddr *m_ptr; 
  bdBitBuffer *v12; 
  unsigned __int8 bits[96]; 

  v10 = -2i64;
  m_ptr = me.m_ptr;
  v12 = buffer.m_ptr;
  if ( bdBitBuffer::readBits((bdBitBuffer *)buffer.m_ptr->__vftable, bits, 0x2A0u) )
  {
    v6 = (bdCommonAddr *)me.m_ptr->__vftable;
    mea.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
    v7 = bdCommonAddr::deserialize(this, (bdReference<bdCommonAddr>)&mea, bits);
    if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( me.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
      me.m_ptr->__vftable = NULL;
    }
    if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdBitBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return v7;
  }
  else
  {
    if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( me.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
      me.m_ptr->__vftable = NULL;
    }
    if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdBitBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
bdCommonAddr::getLocalAddrByIndex
==============
*/
const bdAddr *bdCommonAddr::getLocalAddrByIndex(bdCommonAddr *this, const unsigned int index)
{
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  __int64 v3; 

  p_m_localAddrs = &this->m_localAddrs;
  v3 = index;
  bdHandleAssert(index < this->m_localAddrs.m_size, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x4Du, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed");
  return (const bdAddr *)((char *)p_m_localAddrs + 152 * v3);
}

/*
==============
bdCommonAddr::getLocalAddrs
==============
*/
bdFixedArray<bdAddr,5> *bdCommonAddr::getLocalAddrs(bdCommonAddr *this)
{
  return &this->m_localAddrs;
}

/*
==============
bdCommonAddr::getLocalAddrsArray
==============
*/
const bdArray<bdAddr> *bdCommonAddr::getLocalAddrsArray(bdCommonAddr *this, const bdArray<bdAddr> *result)
{
  unsigned int v4; 
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  unsigned int m_capacity; 
  unsigned int v7; 
  bdAddr *v8; 
  unsigned int v9; 
  bdAddr *v10; 
  unsigned int m_size; 
  bdAddr *v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 

  v18 = -2i64;
  result->m_data = NULL;
  *(_QWORD *)&result->m_capacity = 5i64;
  result->m_data = (bdAddr *)bdMemory::allocate(0x2F8ui64);
  LODWORD(v17) = 1;
  v4 = 0;
  if ( this->m_localAddrs.m_size )
  {
    p_m_localAddrs = &this->m_localAddrs;
    do
    {
      bdHandleAssert(v4 < p_m_localAddrs->m_size, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x4Du, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed", v17, v18);
      m_capacity = result->m_capacity;
      if ( result->m_size == m_capacity )
      {
        v7 = result->m_capacity;
        if ( !m_capacity )
          v7 = 1;
        v8 = NULL;
        v9 = m_capacity + v7;
        if ( v9 )
        {
          v10 = (bdAddr *)bdMemory::allocate(152i64 * v9);
          v8 = v10;
          m_size = result->m_size;
          if ( m_size )
          {
            v12 = v10;
            v13 = (char *)((char *)result->m_data - (char *)v10);
            v14 = m_size;
            do
            {
              if ( v12 )
                bdAddr::bdAddr(v12, (const bdAddr *)((char *)v12 + (_QWORD)v13));
              ++v12;
              --v14;
            }
            while ( v14 );
            p_m_localAddrs = &this->m_localAddrs;
          }
        }
        bdMemory::deallocate(result->m_data);
        result->m_data = v8;
        result->m_capacity = v9;
      }
      v15 = result->m_size;
      if ( &result->m_data[v15] )
      {
        bdAddr::bdAddr(&result->m_data[v15], &p_m_localAddrs->m_array[v4]);
        LODWORD(v15) = result->m_size;
      }
      result->m_size = v15 + 1;
      ++v4;
    }
    while ( v4 < this->m_localAddrs.m_size );
  }
  return result;
}

/*
==============
bdCommonAddr::getNATType
==============
*/
__int64 bdCommonAddr::getNATType(bdCommonAddr *this)
{
  return (unsigned int)this->m_natType;
}

/*
==============
bdCommonAddr::getPublicAddr
==============
*/
bdAddr *bdCommonAddr::getPublicAddr(bdCommonAddr *this)
{
  return &this->m_publicAddr;
}

/*
==============
bdCommonAddr::hasSameAddr
==============
*/
bool bdCommonAddr::hasSameAddr(bdCommonAddr *this, const bdCommonAddr *other)
{
  bdAddr *p_m_publicAddr; 
  bdAddr *v5; 

  if ( this->m_hash != other->m_hash )
    return 0;
  p_m_publicAddr = &this->m_publicAddr;
  if ( !bdSockAddr::isValid(&this->m_publicAddr.m_address) )
  {
    if ( this->m_localAddrs.m_size )
      p_m_publicAddr = (bdAddr *)bdFixedArray<bdAddr,5>::operator[](&this->m_localAddrs, 0);
    else
      p_m_publicAddr = &BD_CA_INVALID_ADDR;
  }
  v5 = &other->m_publicAddr;
  if ( !bdSockAddr::isValid(&other->m_publicAddr.m_address) )
  {
    if ( other->m_localAddrs.m_size )
      v5 = (bdAddr *)bdFixedArray<bdAddr,5>::operator[](&other->m_localAddrs, 0);
    else
      v5 = &BD_CA_INVALID_ADDR;
  }
  return bdSockAddr::compare(&p_m_publicAddr->m_address, &v5->m_address, 1);
}

/*
==============
bdCommonAddr::hasSameRelay
==============
*/
bool bdCommonAddr::hasSameRelay(bdCommonAddr *this, const bdCommonAddr *other)
{
  return bdRelayJoinData::isSameRoute(&this->m_joinData, &other->m_joinData);
}

/*
==============
bdCommonAddr::serialize
==============
*/
void bdCommonAddr::serialize(bdCommonAddr *this, unsigned __int8 *buffer)
{
  unsigned int m_size; 
  unsigned int v3; 
  char v6; 
  bdAddr *v7; 
  __int64 v8; 
  unsigned __int8 m_natType; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  unsigned int v13; 
  bool v14; 
  bool v15; 
  unsigned int newOffset; 

  m_size = this->m_localAddrs.m_size;
  v3 = 0;
  newOffset = 0;
  v6 = 1;
  do
  {
    if ( v3 >= m_size )
    {
      if ( !v6 )
        goto LABEL_9;
      v7 = &BD_CA_INVALID_ADDR;
    }
    else
    {
      if ( !v6 )
        goto LABEL_9;
      bdHandleAssert(v3 < this->m_localAddrs.m_size, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x4Du, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed");
      v7 = &this->m_localAddrs.m_array[v3];
    }
    if ( bdAddr::serialize(v7, buffer, 0x54u, newOffset, &newOffset) )
    {
      v6 = 1;
      goto LABEL_10;
    }
LABEL_9:
    v6 = 0;
LABEL_10:
    ++v3;
  }
  while ( v3 < 5 );
  if ( !v6 || !bdAddr::serialize(&this->m_publicAddr, buffer, 0x54u, newOffset, &newOffset) )
    goto LABEL_34;
  v8 = newOffset;
  m_natType = this->m_natType;
  v10 = newOffset + 1;
  newOffset = v10;
  v11 = v10 <= 0x54 || !buffer;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !buffer )
  {
LABEL_20:
    if ( v10 > 0x54 )
      goto LABEL_21;
    goto LABEL_22;
  }
  if ( v10 <= 0x54 )
  {
    buffer[v8] = m_natType;
    goto LABEL_20;
  }
LABEL_21:
  if ( buffer )
    goto LABEL_34;
LABEL_22:
  v12 = newOffset;
  v13 = newOffset + 4;
  newOffset = v13;
  v14 = v13 <= 0x54 || !buffer;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_29:
    if ( v13 > 0x54 )
      goto LABEL_30;
    goto LABEL_31;
  }
  if ( v13 <= 0x54 )
  {
    *(_DWORD *)&buffer[v12] = this->m_platformID;
    goto LABEL_29;
  }
LABEL_30:
  if ( buffer )
    goto LABEL_34;
LABEL_31:
  if ( !bdRelayJoinData::serialize(&this->m_joinData, buffer, 0x54u, newOffset, &newOffset) || newOffset != 84 )
  {
LABEL_34:
    v15 = 0;
    goto LABEL_35;
  }
  v15 = 1;
LABEL_35:
  bdHandleAssert(v15, "status && offset == BD_COMMON_ADDR_SERIALIZED_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::serialize", 0x9Au, "bdCommonAddr::serialize, wrong size.");
}

/*
==============
bdCommonAddr::serialize
==============
*/
void bdCommonAddr::serialize(bdCommonAddr *this, bdReference<bdBitBuffer> buffer)
{
  unsigned __int8 buffera[96]; 

  bdCommonAddr::serialize(this, buffera);
  bdBitBuffer::writeBits((bdBitBuffer *)buffer.m_ptr->__vftable, buffera, 0x2A0u);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdBitBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdCommonAddr::setNATType
==============
*/
void bdCommonAddr::setNATType(bdCommonAddr *this, const bdNATType natType)
{
  if ( (unsigned int)natType > BD_NAT_STRICT )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "warn", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::setNATType", 0x12Fu, "Attempting to set invalid NAT type of %d. Ignoring.", natType);
  }
  else
  {
    this->m_natType = natType;
    bdLogMessage(BD_LOG_WARNING, "warn/", "warn", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddr.cpp", "bdCommonAddr::setNATType", 0x12Bu, "Overriding NAT type of bdCommonAddr. This should be done for testing purposes only!");
  }
}

/*
==============
bdCommonAddr::setRelayJoinData
==============
*/
void bdCommonAddr::setRelayJoinData(bdCommonAddr *this, const bdRelayJoinData *joinData)
{
  bdRelayJoinData::operator=(&this->m_joinData, joinData);
}

