/*
==============
bdInitChunk::getInitTag
==============
*/

unsigned int __fastcall bdInitChunk::getInitTag(bdInitChunk *this)
{
  return ?getInitTag@bdInitChunk@@QEBAIXZ(this);
}

/*
==============
bdInitChunk::serialize
==============
*/

unsigned int __fastcall bdInitChunk::serialize(bdInitChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdInitChunk@@UEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdInitChunk::deserialize
==============
*/

bool __fastcall bdInitChunk::deserialize(bdInitChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdInitChunk@@UEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdInitChunk::getWindowCredit
==============
*/

__int64 __fastcall bdInitChunk::getWindowCredit(bdInitChunk *this)
{
  return ?getWindowCredit@bdInitChunk@@QEBA_JXZ(this);
}

/*
==============
bdInitChunk::bdInitChunk
==============
*/

void __fastcall bdInitChunk::bdInitChunk(bdInitChunk *this, unsigned int initTag, const __int64 windowCredit)
{
  ??0bdInitChunk@@QEAA@I_J@Z(this, initTag, windowCredit);
}

/*
==============
bdInitChunk::bdInitChunk
==============
*/

void __fastcall bdInitChunk::bdInitChunk(bdInitChunk *this)
{
  ??0bdInitChunk@@QEAA@XZ(this);
}

/*
==============
bdInitChunk::getFlags
==============
*/

bdInitChunk::bdInitChunkFlags __fastcall bdInitChunk::getFlags(bdInitChunk *this)
{
  return ?getFlags@bdInitChunk@@QEBA?AW4bdInitChunkFlags@1@XZ(this);
}

/*
==============
bdInitChunk::~bdInitChunk
==============
*/

void __fastcall bdInitChunk::~bdInitChunk(bdInitChunk *this)
{
  ??1bdInitChunk@@UEAA@XZ(this);
}

/*
==============
bdInitChunk::bdInitChunk
==============
*/
void bdInitChunk::bdInitChunk(bdInitChunk *this, unsigned int initTag, const __int64 windowCredit)
{
  bdChunk::bdChunk(this, BD_CT_INIT);
  this->__vftable = (bdInitChunk_vtbl *)&bdInitChunk::`vftable';
  this->m_initTag = initTag;
  this->m_flags = BD_IC_NO_FLAGS;
  bdSecurityID::bdSecurityID(&this->m_id);
  this->m_theirKey.m_ptr = NULL;
  this->m_windowCredit = windowCredit;
}

/*
==============
bdInitChunk::bdInitChunk
==============
*/
void bdInitChunk::bdInitChunk(bdInitChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_INIT);
  this->__vftable = (bdInitChunk_vtbl *)&bdInitChunk::`vftable';
  *(_QWORD *)&this->m_initTag = 0i64;
  bdSecurityID::bdSecurityID(&this->m_id);
  this->m_theirKey.m_ptr = NULL;
  this->m_windowCredit = 0i64;
}

/*
==============
bdInitChunk::~bdInitChunk
==============
*/
void bdInitChunk::~bdInitChunk(bdInitChunk *this)
{
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v3; 

  this->__vftable = (bdInitChunk_vtbl *)&bdInitChunk::`vftable';
  m_ptr = this->m_theirKey.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_theirKey.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdByteBuffer *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_theirKey.m_ptr = NULL;
  }
  bdSecurityID::~bdSecurityID(&this->m_id);
  bdChunk::~bdChunk(this);
}

/*
==============
bdInitChunk::deserialize
==============
*/
char bdInitChunk::deserialize(bdInitChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned int v5; 
  unsigned int v7; 
  unsigned __int8 v10; 
  __int64 v11; 
  unsigned int v12; 
  char v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v18; 

  v5 = *offset;
  v7 = size - *offset;
  v18 = *offset;
  if ( v7 <= 4 )
    goto LABEL_24;
  v10 = 0;
  if ( !bdChunk::deserialize(this, data, size, &v18) )
    goto LABEL_10;
  v11 = v18;
  v12 = ++v18;
  if ( data )
  {
    if ( v12 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v10 = data[v11];
  }
  if ( v12 > size && data )
LABEL_10:
    v13 = 0;
  else
    v13 = 1;
  this->m_flags = v10;
  if ( !v13 )
    return 0;
  v14 = v18 + 2;
  v15 = v18 + 2;
  v18 += 2;
  if ( !data )
    goto LABEL_15;
  if ( v14 > size )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    v15 = v18;
LABEL_15:
    if ( v14 > size && data )
      return 0;
  }
  v5 = v15 + 4;
  v18 = v15 + 4;
  v16 = v15 + 4;
  if ( data )
  {
    if ( v5 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v5 = v18;
    }
    else
    {
      this->m_initTag = *(_DWORD *)&data[v15];
    }
  }
  if ( v16 > size && data )
    return 0;
LABEL_24:
  *offset = v5;
  return 1;
}

/*
==============
bdInitChunk::getFlags
==============
*/
__int64 bdInitChunk::getFlags(bdInitChunk *this)
{
  return (unsigned int)this->m_flags;
}

/*
==============
bdInitChunk::getInitTag
==============
*/
__int64 bdInitChunk::getInitTag(bdInitChunk *this)
{
  return this->m_initTag;
}

/*
==============
bdInitChunk::getWindowCredit
==============
*/
__int64 bdInitChunk::getWindowCredit(bdInitChunk *this)
{
  return this->m_windowCredit;
}

/*
==============
bdInitChunk::serialize
==============
*/
__int64 bdInitChunk::serialize(bdInitChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned int v6; 
  unsigned __int8 m_flags; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 
  __int64 v11; 
  bool v12; 
  __int64 result; 
  bool v14; 

  v6 = bdChunk::serialize(this, data, size);
  m_flags = this->m_flags;
  v8 = v6;
  v9 = v6 + 1;
  v10 = (unsigned int)v9 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( !data )
  {
LABEL_8:
    if ( (unsigned int)v9 <= size )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( (unsigned int)v9 <= size )
  {
    data[v8] = m_flags;
    goto LABEL_8;
  }
LABEL_9:
  if ( data )
    return (unsigned int)v9;
LABEL_10:
  v11 = (unsigned int)(v9 + 2);
  v12 = (unsigned int)v11 <= size || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_17:
    if ( (unsigned int)v11 <= size )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( (unsigned int)v11 <= size )
  {
    *(_WORD *)&data[v9] = 0;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
    return (unsigned int)v11;
LABEL_20:
  LODWORD(v9) = v9 + 6;
  v14 = (int)v11 + 4 <= size || !data;
  bdHandleAssert(v14, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
    return (unsigned int)v9;
  result = (unsigned int)v9;
  if ( (unsigned int)v9 <= size )
    *(_DWORD *)&data[v11] = this->m_initTag;
  return result;
}

