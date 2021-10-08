/*
==============
bdCookie::getLocalTieTag
==============
*/

unsigned int __fastcall bdCookie::getLocalTieTag(bdCookie *this)
{
  return ?getLocalTieTag@bdCookie@@QEBAIXZ(this);
}

/*
==============
bdCookie::~bdCookie
==============
*/

void __fastcall bdCookie::~bdCookie(bdCookie *this)
{
  ??1bdCookie@@UEAA@XZ(this);
}

/*
==============
bdCookie::getPeerTieTag
==============
*/

unsigned int __fastcall bdCookie::getPeerTieTag(bdCookie *this)
{
  return ?getPeerTieTag@bdCookie@@QEBAIXZ(this);
}

/*
==============
bdCookie::bdCookie
==============
*/

void __fastcall bdCookie::bdCookie(bdCookie *this)
{
  ??0bdCookie@@QEAA@XZ(this);
}

/*
==============
bdCookie::getPeerTag
==============
*/

unsigned int __fastcall bdCookie::getPeerTag(bdCookie *this)
{
  return ?getPeerTag@bdCookie@@QEBAIXZ(this);
}

/*
==============
bdCookie::getSerializedSize
==============
*/

unsigned int __fastcall bdCookie::getSerializedSize(bdCookie *this)
{
  return ?getSerializedSize@bdCookie@@QEBAIXZ(this);
}

/*
==============
bdCookie::bdCookie
==============
*/

void __fastcall bdCookie::bdCookie(bdCookie *this, unsigned int localTag, unsigned int peerTag, unsigned int localTieTag, unsigned int peerTieTag)
{
  ??0bdCookie@@QEAA@IIII@Z(this, localTag, peerTag, localTieTag, peerTieTag);
}

/*
==============
bdCookie::serialize
==============
*/

unsigned int __fastcall bdCookie::serialize(bdCookie *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdCookie@@QEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdCookie::getLocalTag
==============
*/

unsigned int __fastcall bdCookie::getLocalTag(bdCookie *this)
{
  return ?getLocalTag@bdCookie@@QEBAIXZ(this);
}

/*
==============
bdCookie::deserialize
==============
*/

bool __fastcall bdCookie::deserialize(bdCookie *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdCookie@@QEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdCookie::bdCookie
==============
*/
void bdCookie::bdCookie(bdCookie *this, unsigned int localTag, unsigned int peerTag, unsigned int localTieTag, unsigned int peerTieTag)
{
  bdTrulyRandomImpl *v5; 
  bdSingletonRegistryImpl *Instance; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCookie_vtbl *)&bdCookie::`vftable';
  this->m_localTag = localTag;
  this->m_peerTag = peerTag;
  this->m_localTieTag = localTieTag;
  this->m_peerTieTag = peerTieTag;
  if ( !bdCookie::m_secretInitialized )
  {
    if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
    {
      v5 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
      if ( v5 )
        bdTrulyRandomImpl::bdTrulyRandomImpl(v5);
      bdSingleton<bdTrulyRandomImpl>::m_instance = v5;
      if ( !v5 )
        goto LABEL_8;
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
      {
        bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
        bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_8:
        DebugBreak();
      }
    }
    bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, bdCookie::m_secret, 0x14u);
    bdCookie::m_secretInitialized = 1;
  }
}

/*
==============
bdCookie::bdCookie
==============
*/
void bdCookie::bdCookie(bdCookie *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdCookie_vtbl *)&bdCookie::`vftable';
  *(_QWORD *)&this->m_localTag = 0i64;
  *(_QWORD *)&this->m_localTieTag = 0i64;
}

/*
==============
bdCookie::~bdCookie
==============
*/
void bdCookie::~bdCookie(bdCookie *this)
{
  this->__vftable = (bdCookie_vtbl *)&bdCookie::`vftable';
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdCookie::deserialize
==============
*/
__int64 bdCookie::deserialize(bdCookie *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int newOffset; 
  unsigned int length; 
  bdHMacSHA1 v14; 
  __int64 v15; 
  unsigned __int8 digest[8]; 
  __int64 v17; 
  int v18; 

  v15 = -2i64;
  v8 = 0;
  v9 = *offset;
  if ( size - (unsigned int)v9 > 0x14 )
  {
    bdHMacSHA1::bdHMacSHA1(&v14, bdCookie::m_secret, 0x14u);
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
    bdHMacSHA1::process(&v14, &data[v9 + 20], 0x14u);
    length = 20;
    bdHMacSHA1::getData(&v14, digest, &length);
    if ( *(_QWORD *)&data[v9] != *(_QWORD *)digest || *(_QWORD *)&data[v9 + 8] != v17 || *(_DWORD *)&data[v9 + 16] != v18 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdcookie.cpp", "bdCookie::deserialize", 0x85u, "cookie failed HMac test.");
      goto LABEL_17;
    }
    v10 = v9 + 24;
    newOffset = v9 + 24;
    if ( data )
    {
      if ( v10 <= size )
      {
LABEL_10:
        if ( bdBytePacker::removeBasicType<unsigned int>(data, size, v10, &newOffset, &this->m_localTag) && bdBytePacker::removeBasicType<unsigned int>(data, size, newOffset, &newOffset, &this->m_peerTag) && bdBytePacker::removeBasicType<unsigned int>(data, size, newOffset, &newOffset, &this->m_peerTieTag) && bdBytePacker::removeBasicType<unsigned int>(data, size, newOffset, &newOffset, &this->m_localTieTag) )
        {
          v8 = 1;
          *offset = newOffset;
LABEL_17:
          bdHMacSHA1::~bdHMacSHA1(&v14);
          return v8;
        }
LABEL_15:
        v8 = 0;
        goto LABEL_17;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    }
    if ( v10 > size && data )
      goto LABEL_15;
    goto LABEL_10;
  }
  return v8;
}

/*
==============
bdCookie::getLocalTag
==============
*/
__int64 bdCookie::getLocalTag(bdCookie *this)
{
  return this->m_localTag;
}

/*
==============
bdCookie::getLocalTieTag
==============
*/
__int64 bdCookie::getLocalTieTag(bdCookie *this)
{
  return this->m_localTieTag;
}

/*
==============
bdCookie::getPeerTag
==============
*/
__int64 bdCookie::getPeerTag(bdCookie *this)
{
  return this->m_peerTag;
}

/*
==============
bdCookie::getPeerTieTag
==============
*/
__int64 bdCookie::getPeerTieTag(bdCookie *this)
{
  return this->m_peerTieTag;
}

/*
==============
bdCookie::getSerializedSize
==============
*/
__int64 bdCookie::getSerializedSize(bdCookie *this)
{
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  bdHandleAssert(1, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  return 40i64;
}

/*
==============
bdCookie::serialize
==============
*/
__int64 bdCookie::serialize(bdCookie *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned int v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bdHMacSHA1 v13; 
  unsigned int length; 

  v6 = 24;
  v7 = size >= 0x18 || !data;
  bdHandleAssert(v7, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
  {
LABEL_8:
    if ( size >= 0x18 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( size >= 0x18 )
  {
    *((_DWORD *)data + 5) = 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    goto LABEL_48;
LABEL_10:
  v6 = 28;
  v8 = size >= 0x1C || !data;
  bdHandleAssert(v8, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
  {
LABEL_17:
    if ( size >= 0x1C )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( size >= 0x1C )
  {
    *((_DWORD *)data + 6) = this->m_localTag;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    goto LABEL_48;
LABEL_19:
  v6 = 32;
  v9 = size >= 0x20 || !data;
  bdHandleAssert(v9, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
  {
LABEL_26:
    if ( size >= 0x20 )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( size >= 0x20 )
  {
    *((_DWORD *)data + 7) = this->m_peerTag;
    goto LABEL_26;
  }
LABEL_27:
  if ( data )
    goto LABEL_48;
LABEL_28:
  v6 = 36;
  v10 = size >= 0x24 || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
  {
LABEL_35:
    if ( size >= 0x24 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( size >= 0x24 )
  {
    *((_DWORD *)data + 8) = this->m_peerTieTag;
    goto LABEL_35;
  }
LABEL_36:
  if ( data )
    goto LABEL_48;
LABEL_37:
  v6 = 40;
  v11 = size >= 0x28 || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( size < 0x28 )
      goto LABEL_45;
    *((_DWORD *)data + 9) = this->m_localTieTag;
  }
  if ( size < 0x28 )
  {
LABEL_45:
    if ( !data )
      return v6;
    goto LABEL_48;
  }
  if ( data )
  {
LABEL_48:
    bdHMacSHA1::bdHMacSHA1(&v13, bdCookie::m_secret, 0x14u);
    bdHMacSHA1::process(&v13, data + 20, v6 - 20);
    length = 20;
    bdHMacSHA1::getData(&v13, data, &length);
    bdHMacSHA1::~bdHMacSHA1(&v13);
  }
  return v6;
}

