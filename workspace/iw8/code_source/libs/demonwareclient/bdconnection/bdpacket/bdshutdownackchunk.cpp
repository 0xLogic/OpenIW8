/*
==============
bdShutdownAckChunk::getFlags
==============
*/

bdShutdownAckChunk::bdShutdownAckFlags __fastcall bdShutdownAckChunk::getFlags(bdShutdownAckChunk *this)
{
  return ?getFlags@bdShutdownAckChunk@@QEBA?AW4bdShutdownAckFlags@1@XZ(this);
}

/*
==============
bdShutdownAckChunk::~bdShutdownAckChunk
==============
*/

void __fastcall bdShutdownAckChunk::~bdShutdownAckChunk(bdShutdownAckChunk *this)
{
  ??1bdShutdownAckChunk@@UEAA@XZ(this);
}

/*
==============
bdShutdownAckChunk::deserialize
==============
*/

bool __fastcall bdShutdownAckChunk::deserialize(bdShutdownAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdShutdownAckChunk@@MEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdShutdownAckChunk::bdShutdownAckChunk
==============
*/

void __fastcall bdShutdownAckChunk::bdShutdownAckChunk(bdShutdownAckChunk *this)
{
  ??0bdShutdownAckChunk@@QEAA@XZ(this);
}

/*
==============
bdShutdownAckChunk::serialize
==============
*/

unsigned int __fastcall bdShutdownAckChunk::serialize(bdShutdownAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdShutdownAckChunk@@MEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdShutdownAckChunk::bdShutdownAckChunk
==============
*/
void bdShutdownAckChunk::bdShutdownAckChunk(bdShutdownAckChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_SHUTDOWN_ACK);
  this->m_flags = BD_SA_NO_FLAGS;
  this->__vftable = (bdShutdownAckChunk_vtbl *)&bdShutdownAckChunk::`vftable';
}

/*
==============
bdShutdownAckChunk::~bdShutdownAckChunk
==============
*/
void bdShutdownAckChunk::~bdShutdownAckChunk(bdShutdownAckChunk *this)
{
  this->__vftable = (bdShutdownAckChunk_vtbl *)&bdShutdownAckChunk::`vftable';
  bdChunk::~bdChunk(this);
}

/*
==============
bdShutdownAckChunk::deserialize
==============
*/
char bdShutdownAckChunk::deserialize(bdShutdownAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned int v10; 
  char v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v15; 

  v15 = *offset;
  v8 = 0;
  if ( !bdChunk::deserialize(this, data, size, &v15) )
    goto LABEL_9;
  v9 = v15;
  v10 = ++v15;
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
  if ( v11 )
  {
    v12 = v15 + 2;
    v13 = v15 + 2;
    v15 += 2;
    if ( data )
    {
      if ( v12 <= size )
      {
LABEL_16:
        *offset = v13;
        return 1;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      v13 = v15;
    }
    if ( v12 <= size || !data )
      goto LABEL_16;
  }
  return 0;
}

/*
==============
bdShutdownAckChunk::getFlags
==============
*/
__int64 bdShutdownAckChunk::getFlags(bdShutdownAckChunk *this)
{
  return (unsigned int)this->m_flags;
}

/*
==============
bdShutdownAckChunk::serialize
==============
*/
__int64 bdShutdownAckChunk::serialize(bdShutdownAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned int v6; 
  unsigned __int8 m_flags; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 
  unsigned int v12; 
  bool v13; 

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
      goto LABEL_11;
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
LABEL_11:
  v12 = v9 + 2;
  v13 = (int)v9 + 2 <= size || !data;
  bdHandleAssert(v13, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( data )
  {
    if ( v12 <= size )
      *(_WORD *)&data[v9] = 0;
  }
  return v12;
}

