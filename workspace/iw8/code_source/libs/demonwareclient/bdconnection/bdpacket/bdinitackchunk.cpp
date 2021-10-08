/*
==============
bdInitAckChunk::getInitTag
==============
*/

unsigned int __fastcall bdInitAckChunk::getInitTag(bdInitAckChunk *this)
{
  return ?getInitTag@bdInitAckChunk@@QEBAIXZ(this);
}

/*
==============
bdInitAckChunk::getCookie
==============
*/

bool __fastcall bdInitAckChunk::getCookie(bdInitAckChunk *this, bdReference<bdByteBuffer> *cookie)
{
  return ?getCookie@bdInitAckChunk@@QEAA_NAEAV?$bdReference@VbdByteBuffer@@@@@Z(this, cookie);
}

/*
==============
bdInitAckChunk::serialize
==============
*/

unsigned int __fastcall bdInitAckChunk::serialize(bdInitAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdInitAckChunk@@UEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdInitAckChunk::deserialize
==============
*/

bool __fastcall bdInitAckChunk::deserialize(bdInitAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdInitAckChunk@@UEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdInitAckChunk::bdInitAckChunk
==============
*/

void __fastcall bdInitAckChunk::bdInitAckChunk(bdInitAckChunk *this)
{
  ??0bdInitAckChunk@@QEAA@XZ(this);
}

/*
==============
bdInitAckChunk::getWindowCredit
==============
*/

__int64 __fastcall bdInitAckChunk::getWindowCredit(bdInitAckChunk *this)
{
  return ?getWindowCredit@bdInitAckChunk@@QEBA_JXZ(this);
}

/*
==============
bdInitAckChunk::~bdInitAckChunk
==============
*/

void __fastcall bdInitAckChunk::~bdInitAckChunk(bdInitAckChunk *this)
{
  ??1bdInitAckChunk@@UEAA@XZ(this);
}

/*
==============
bdInitAckChunk::bdInitAckChunk
==============
*/

void __fastcall bdInitAckChunk::bdInitAckChunk(bdInitAckChunk *this, unsigned int initTag, bdReference<bdCookie> cookie, const __int64 windowCredit, unsigned int peerTag)
{
  ??0bdInitAckChunk@@QEAA@IV?$bdReference@VbdCookie@@@@_JI@Z(this, initTag, cookie, windowCredit, peerTag);
}

/*
==============
bdInitAckChunk::getPeerTag
==============
*/

unsigned int __fastcall bdInitAckChunk::getPeerTag(bdInitAckChunk *this)
{
  return ?getPeerTag@bdInitAckChunk@@QEBAIXZ(this);
}

/*
==============
bdInitAckChunk::bdInitAckChunk
==============
*/
void bdInitAckChunk::bdInitAckChunk(bdInitAckChunk *this, unsigned int initTag, bdReference<bdCookie> cookie, const __int64 windowCredit, unsigned int peerTag)
{
  bdCookie_vtbl *v9; 

  bdChunk::bdChunk(this, BD_CT_INIT_ACK);
  this->__vftable = (bdInitAckChunk_vtbl *)&bdInitAckChunk::`vftable';
  this->m_initTag = initTag;
  this->m_flags = BD_IC_NO_FLAGS;
  this->m_cookieBuffer.m_ptr = NULL;
  v9 = cookie.m_ptr->__vftable;
  this->m_cookie.m_ptr = (bdCookie *)cookie.m_ptr->__vftable;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 1u);
  this->m_windowCredit = windowCredit;
  this->m_peerTag = peerTag;
  if ( cookie.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&cookie.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( cookie.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCookie_vtbl *, __int64))cookie.m_ptr->~bdReferencable)(cookie.m_ptr->__vftable, 1i64);
    cookie.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdInitAckChunk::bdInitAckChunk
==============
*/
void bdInitAckChunk::bdInitAckChunk(bdInitAckChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_INIT_ACK);
  this->__vftable = (bdInitAckChunk_vtbl *)&bdInitAckChunk::`vftable';
  *(_QWORD *)&this->m_initTag = 0i64;
  this->m_cookieBuffer.m_ptr = NULL;
  this->m_cookie.m_ptr = NULL;
  this->m_windowCredit = 0i64;
  this->m_peerTag = 0;
}

/*
==============
bdInitAckChunk::~bdInitAckChunk
==============
*/
void bdInitAckChunk::~bdInitAckChunk(bdInitAckChunk *this)
{
  bdCookie *m_ptr; 
  bdCookie *v3; 
  bdByteBuffer *v4; 
  bdByteBuffer *v5; 

  this->__vftable = (bdInitAckChunk_vtbl *)&bdInitAckChunk::`vftable';
  m_ptr = this->m_cookie.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_cookie.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdCookie *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_cookie.m_ptr = NULL;
  }
  v4 = this->m_cookieBuffer.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_cookieBuffer.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_cookieBuffer.m_ptr = NULL;
  }
  bdChunk::~bdChunk(this);
}

/*
==============
bdInitAckChunk::deserialize
==============
*/
char bdInitAckChunk::deserialize(bdInitAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned int v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned int v11; 
  char v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char v18; 
  bdByteBuffer *v19; 
  bdByteBuffer *v20; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v22; 
  unsigned int offseta; 
  unsigned int v25; 
  __int64 v26; 
  bdByteBuffer *v27; 

  v26 = -2i64;
  v8 = *offset;
  offseta = v8;
  if ( size - v8 <= 4 )
    goto LABEL_38;
  v9 = 0;
  if ( !bdChunk::deserialize(this, data, size, &offseta) )
    goto LABEL_10;
  v10 = offseta;
  v11 = ++offseta;
  if ( data )
  {
    if ( v11 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v9 = data[v10];
  }
  if ( v11 > size && data )
LABEL_10:
    v12 = 0;
  else
    v12 = 1;
  this->m_flags = v9;
  v13 = 0;
  if ( !v12 )
    goto LABEL_25;
  v14 = offseta;
  v15 = offseta + 2;
  v16 = offseta + 2;
  offseta += 2;
  if ( data )
  {
    if ( v15 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      v16 = offseta;
    }
    else
    {
      v13 = *(_WORD *)&data[v14];
    }
  }
  if ( v15 > size && data )
    goto LABEL_25;
  v17 = v16 + 4;
  offseta = v16 + 4;
  if ( data )
  {
    if ( v17 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
    }
    else
    {
      v25 = *(_DWORD *)&data[v16];
      this->m_initTag = v25;
    }
  }
  if ( v17 > size && data )
LABEL_25:
    v18 = 0;
  else
    v18 = 1;
  v19 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v20 = v19;
  v27 = v19;
  if ( v19 )
  {
    v19->m_refCount.m_value._My_val = 0;
    v19->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v19->m_size = v13;
    v19->m_data = NULL;
    *(_WORD *)&v19->m_typeChecked = 0;
    v19->m_allocatedData = 0;
    bdByteBuffer::init(v19, v13);
  }
  else
  {
    v20 = NULL;
  }
  m_ptr = this->m_cookieBuffer.m_ptr;
  if ( m_ptr )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
    {
      v22 = this->m_cookieBuffer.m_ptr;
      if ( v22 )
        ((void (__fastcall *)(bdByteBuffer *, __int64))v22->~bdReferencable)(v22, 1i64);
    }
  }
  this->m_cookieBuffer.m_ptr = v20;
  if ( v20 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
  if ( v18 && bdBytePacker::removeBuffer(data, size, offseta, &offseta, this->m_cookieBuffer.m_ptr->m_data, v13) )
  {
    v8 = offseta;
LABEL_38:
    *offset = v8;
    return 1;
  }
  return 0;
}

/*
==============
bdInitAckChunk::getCookie
==============
*/
bool bdInitAckChunk::getCookie(bdInitAckChunk *this, bdReference<bdByteBuffer> *cookie)
{
  bool v2; 
  bdReference<bdByteBuffer> *p_m_cookieBuffer; 
  bdByteBuffer *m_ptr; 

  v2 = this->m_cookieBuffer.m_ptr == NULL;
  p_m_cookieBuffer = &this->m_cookieBuffer;
  if ( this->m_cookieBuffer.m_ptr )
  {
    if ( p_m_cookieBuffer != cookie )
    {
      if ( cookie->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&cookie->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && cookie->m_ptr )
        ((void (__fastcall *)(bdByteBuffer *, __int64))cookie->m_ptr->~bdReferencable)(cookie->m_ptr, 1i64);
      m_ptr = p_m_cookieBuffer->m_ptr;
      cookie->m_ptr = p_m_cookieBuffer->m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    v2 = p_m_cookieBuffer->m_ptr == NULL;
  }
  return !v2;
}

/*
==============
bdInitAckChunk::getInitTag
==============
*/
__int64 bdInitAckChunk::getInitTag(bdInitAckChunk *this)
{
  return this->m_initTag;
}

/*
==============
bdInitAckChunk::getPeerTag
==============
*/
__int64 bdInitAckChunk::getPeerTag(bdInitAckChunk *this)
{
  return this->m_peerTag;
}

/*
==============
bdInitAckChunk::getWindowCredit
==============
*/
__int64 bdInitAckChunk::getWindowCredit(bdInitAckChunk *this)
{
  return this->m_windowCredit;
}

/*
==============
bdInitAckChunk::serialize
==============
*/
__int64 bdInitAckChunk::serialize(bdInitAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned __int8 *v3; 
  unsigned int v7; 
  unsigned __int8 m_flags; 
  __int64 v9; 
  __int64 v10; 
  bool v11; 
  char v12; 
  __int64 v13; 
  unsigned int v14; 
  bool v15; 
  char v16; 
  unsigned int v17; 
  int v18; 
  __int16 v19; 
  unsigned int v20; 
  bool v21; 
  __int64 result; 

  v3 = NULL;
  if ( !this->m_cookie.m_ptr )
    return 0i64;
  v7 = bdChunk::serialize(this, data, size);
  m_flags = this->m_flags;
  v9 = v7;
  v10 = v7 + 1;
  v11 = (unsigned int)v10 <= size || !data;
  bdHandleAssert(v11, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_9:
    if ( (unsigned int)v10 <= size )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( (unsigned int)v10 <= size )
  {
    data[v9] = m_flags;
    goto LABEL_9;
  }
LABEL_10:
  if ( data )
  {
    v12 = 0;
    goto LABEL_13;
  }
LABEL_12:
  v12 = 1;
LABEL_13:
  v13 = (unsigned int)(v10 + 2);
  v14 = v10 + 2;
  if ( !v12 )
    goto LABEL_24;
  v14 = v10 + 6;
  v15 = (int)v10 + 6 <= size || !data;
  bdHandleAssert(v15, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( data )
  {
    if ( v14 > size )
      goto LABEL_22;
    *(_DWORD *)&data[v13] = this->m_initTag;
  }
  if ( v14 > size )
  {
LABEL_22:
    if ( !data )
      goto LABEL_23;
LABEL_24:
    v16 = 0;
    goto LABEL_25;
  }
LABEL_23:
  v16 = 1;
LABEL_25:
  if ( data )
    v3 = &data[v14];
  v17 = bdCookie::serialize(this->m_cookie.m_ptr, v3, size - v14);
  v18 = (unsigned __int16)v17;
  v19 = v17;
  bdHandleAssert(v17 == (unsigned __int16)v17, "cookieLength == length16", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdinitackchunk.cpp", "bdInitAckChunk::serialize", 0x54u, "Cookie is too big to bit in 16 bits.");
  v20 = v18 + v14;
  if ( !v16 )
    return v20;
  v21 = (unsigned int)v13 <= size || !data;
  bdHandleAssert(v21, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
    return v20;
  result = v20;
  if ( (unsigned int)v13 <= size )
    *(_WORD *)&data[v10] = v19;
  return result;
}

