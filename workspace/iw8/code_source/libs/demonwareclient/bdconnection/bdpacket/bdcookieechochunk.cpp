/*
==============
bdCookieEchoChunk::bdCookieEchoChunk
==============
*/

void __fastcall bdCookieEchoChunk::bdCookieEchoChunk(bdCookieEchoChunk *this)
{
  ??0bdCookieEchoChunk@@QEAA@XZ(this);
}

/*
==============
bdCookieEchoChunk::getCookie
==============
*/

bool __fastcall bdCookieEchoChunk::getCookie(bdCookieEchoChunk *this, bdReference<bdCookie> *cookie)
{
  return ?getCookie@bdCookieEchoChunk@@QEAA_NAEAV?$bdReference@VbdCookie@@@@@Z(this, cookie);
}

/*
==============
bdCookieEchoChunk::serialize
==============
*/

unsigned int __fastcall bdCookieEchoChunk::serialize(bdCookieEchoChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdCookieEchoChunk@@MEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdCookieEchoChunk::getFlags
==============
*/

bdCookieEchoChunk::bdCookieEchoFlags __fastcall bdCookieEchoChunk::getFlags(bdCookieEchoChunk *this)
{
  return ?getFlags@bdCookieEchoChunk@@QEBA?AW4bdCookieEchoFlags@1@XZ(this);
}

/*
==============
bdCookieEchoChunk::deserialize
==============
*/

bool __fastcall bdCookieEchoChunk::deserialize(bdCookieEchoChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdCookieEchoChunk@@MEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdCookieEchoChunk::bdCookieEchoChunk
==============
*/

void __fastcall bdCookieEchoChunk::bdCookieEchoChunk(bdCookieEchoChunk *this, bdReference<bdByteBuffer> cookieBuffer)
{
  ??0bdCookieEchoChunk@@QEAA@V?$bdReference@VbdByteBuffer@@@@@Z(this, cookieBuffer);
}

/*
==============
bdCookieEchoChunk::~bdCookieEchoChunk
==============
*/

void __fastcall bdCookieEchoChunk::~bdCookieEchoChunk(bdCookieEchoChunk *this)
{
  ??1bdCookieEchoChunk@@UEAA@XZ(this);
}

/*
==============
bdCookieEchoChunk::bdCookieEchoChunk
==============
*/
void bdCookieEchoChunk::bdCookieEchoChunk(bdCookieEchoChunk *this, bdReference<bdByteBuffer> cookieBuffer)
{
  bdByteBuffer_vtbl *v4; 

  bdChunk::bdChunk(this, BD_CT_COOKIE_ECHO);
  this->__vftable = (bdCookieEchoChunk_vtbl *)&bdCookieEchoChunk::`vftable';
  this->m_flags = BD_CE_NO_FLAGS;
  this->m_cookie.m_ptr = NULL;
  v4 = cookieBuffer.m_ptr->__vftable;
  this->m_cookieBuffer.m_ptr = (bdByteBuffer *)cookieBuffer.m_ptr->__vftable;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->allocateBuffer, 1u);
  if ( cookieBuffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&cookieBuffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( cookieBuffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))cookieBuffer.m_ptr->~bdReferencable)(cookieBuffer.m_ptr->__vftable, 1i64);
    cookieBuffer.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdCookieEchoChunk::bdCookieEchoChunk
==============
*/
void bdCookieEchoChunk::bdCookieEchoChunk(bdCookieEchoChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_COOKIE_ECHO);
  this->__vftable = (bdCookieEchoChunk_vtbl *)&bdCookieEchoChunk::`vftable';
  this->m_flags = BD_CE_NO_FLAGS;
  this->m_cookie.m_ptr = NULL;
  this->m_cookieBuffer.m_ptr = NULL;
}

/*
==============
bdCookieEchoChunk::~bdCookieEchoChunk
==============
*/
void bdCookieEchoChunk::~bdCookieEchoChunk(bdCookieEchoChunk *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 
  bdCookie *v4; 
  bdCookie *v5; 

  this->__vftable = (bdCookieEchoChunk_vtbl *)&bdCookieEchoChunk::`vftable';
  m_ptr = this->m_cookieBuffer.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_cookieBuffer.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_cookieBuffer.m_ptr = NULL;
  }
  v4 = this->m_cookie.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_cookie.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdCookie *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_cookie.m_ptr = NULL;
  }
  bdChunk::~bdChunk(this);
}

/*
==============
bdCookieEchoChunk::deserialize
==============
*/
char bdCookieEchoChunk::deserialize(bdCookieEchoChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned int v10; 
  char v11; 
  bdCookie *v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  unsigned int v15; 
  char v16; 
  bdCookie *v17; 
  bdCookie *v18; 
  bdCookie *m_ptr; 
  bdCookie *v20; 
  unsigned int v21; 
  unsigned int offseta; 
  __int64 v24; 
  bdCookie *v25; 

  v24 = -2i64;
  offseta = *offset;
  v8 = 0;
  if ( !bdChunk::deserialize(this, data, size, &offseta) )
    goto LABEL_9;
  v9 = offseta;
  v10 = ++offseta;
  if ( data )
  {
    if ( v10 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v8 = data[v9];
  }
  if ( v10 > size && data )
LABEL_9:
    v11 = 0;
  else
    v11 = 1;
  this->m_flags = v8;
  v12 = NULL;
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
  v14 = offseta;
  v15 = offseta + 2;
  offseta += 2;
  if ( data )
  {
    if ( v15 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    else
      v13 = *(_WORD *)&data[v14];
  }
  if ( v15 > size && data )
LABEL_18:
    v16 = 0;
  else
    v16 = 1;
  v17 = (bdCookie *)bdMemory::allocate(0x20ui64);
  v25 = v17;
  if ( v17 )
  {
    bdCookie::bdCookie(v17);
    v12 = v18;
  }
  m_ptr = this->m_cookie.m_ptr;
  if ( m_ptr )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
    {
      v20 = this->m_cookie.m_ptr;
      if ( v20 )
        ((void (__fastcall *)(bdCookie *, __int64))v20->~bdReferencable)(v20, 1i64);
    }
  }
  this->m_cookie.m_ptr = v12;
  if ( v12 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  v21 = offseta;
  if ( v16 )
  {
    if ( bdCookie::deserialize(this->m_cookie.m_ptr, data, size, &offseta) && offseta - v21 != v13 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdcookieechochunk.cpp", "bdCookieEchoChunk::deserialize", 0x70u, "Invalid cookie echo.");
      return 0;
    }
    *offset = offseta;
  }
  return v16;
}

/*
==============
bdCookieEchoChunk::getCookie
==============
*/
bool bdCookieEchoChunk::getCookie(bdCookieEchoChunk *this, bdReference<bdCookie> *cookie)
{
  bool v2; 
  bdReference<bdCookie> *p_m_cookie; 
  bdCookie *m_ptr; 

  v2 = this->m_cookie.m_ptr == NULL;
  p_m_cookie = &this->m_cookie;
  if ( this->m_cookie.m_ptr )
  {
    if ( p_m_cookie != cookie )
    {
      if ( cookie->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&cookie->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && cookie->m_ptr )
        ((void (__fastcall *)(bdCookie *, __int64))cookie->m_ptr->~bdReferencable)(cookie->m_ptr, 1i64);
      m_ptr = p_m_cookie->m_ptr;
      cookie->m_ptr = p_m_cookie->m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    v2 = p_m_cookie->m_ptr == NULL;
  }
  return !v2;
}

/*
==============
bdCookieEchoChunk::getFlags
==============
*/
__int64 bdCookieEchoChunk::getFlags(bdCookieEchoChunk *this)
{
  return (unsigned int)this->m_flags;
}

/*
==============
bdCookieEchoChunk::serialize
==============
*/
__int64 bdCookieEchoChunk::serialize(bdCookieEchoChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned __int8 *v3; 
  __int64 result; 
  unsigned int v8; 
  unsigned __int8 m_flags; 
  __int64 v10; 
  unsigned int v11; 
  bool v12; 
  char v13; 
  bdByteBuffer *m_ptr; 
  unsigned __int16 m_size; 
  __int64 v16; 
  unsigned int v17; 
  bool v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int16 v21; 
  bool v22; 
  unsigned int offset; 

  v3 = NULL;
  offset = 0;
  if ( *(_OWORD *)&this->m_cookie.m_ptr == 0i64 )
    return 0i64;
  v8 = bdChunk::serialize(this, data, size);
  m_flags = this->m_flags;
  v10 = v8;
  v11 = v8 + 1;
  offset = v8 + 1;
  v12 = v8 + 1 <= size || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_10:
    if ( v11 <= size )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( v11 <= size )
  {
    data[v10] = m_flags;
    goto LABEL_10;
  }
LABEL_11:
  if ( data )
  {
    v13 = 0;
    goto LABEL_14;
  }
LABEL_13:
  v13 = 1;
LABEL_14:
  m_ptr = this->m_cookieBuffer.m_ptr;
  if ( m_ptr )
  {
    m_size = m_ptr->m_size;
    if ( !v13 )
      return offset;
    v16 = offset;
    v17 = offset + 2;
    offset = v17;
    v18 = v17 <= size || !data;
    bdHandleAssert(v18, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( data )
    {
      if ( v17 > size )
      {
LABEL_24:
        if ( !data )
          goto LABEL_25;
        return offset;
      }
      *(_WORD *)&data[v16] = m_size;
    }
    if ( v17 <= size )
    {
LABEL_25:
      bdBytePacker::appendBuffer(data, size, offset, &offset, this->m_cookieBuffer.m_ptr->m_data, m_size);
      return offset;
    }
    goto LABEL_24;
  }
  v19 = offset;
  v20 = offset + 2;
  offset += 2;
  if ( data )
    v3 = &data[v20];
  v21 = bdCookie::serialize(this->m_cookie.m_ptr, v3, size - v20);
  result = v21 + offset;
  offset += v21;
  if ( v13 )
  {
    v22 = v20 <= size || !data;
    bdHandleAssert(v22, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( !data )
      return offset;
    result = offset;
    if ( v20 <= size )
      *(_WORD *)&data[v19] = v21;
  }
  return result;
}

