/*
==============
bdSAckChunk::setWindowCredit
==============
*/

void __fastcall bdSAckChunk::setWindowCredit(bdSAckChunk *this, const __int64 credit)
{
  ?setWindowCredit@bdSAckChunk@@QEAAX_J@Z(this, credit);
}

/*
==============
bdSAckChunk::serialize
==============
*/

unsigned int __fastcall bdSAckChunk::serialize(bdSAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  return ?serialize@bdSAckChunk@@MEBAIPEAEI@Z(this, data, size);
}

/*
==============
bdSAckChunk::setCumulativeAck
==============
*/

void __fastcall bdSAckChunk::setCumulativeAck(bdSAckChunk *this, const unsigned __int16 seqNumAck)
{
  ?setCumulativeAck@bdSAckChunk@@QEAAXG@Z(this, seqNumAck);
}

/*
==============
bdSAckChunk::addGap
==============
*/

void __fastcall bdSAckChunk::addGap(bdSAckChunk *this, const bdSAckChunk::bdGapAckBlock *gap)
{
  ?addGap@bdSAckChunk@@QEAAXAEBVbdGapAckBlock@1@@Z(this, gap);
}

/*
==============
bdSAckChunk::getGapList
==============
*/

bdLinkedList<bdSAckChunk::bdGapAckBlock> *__fastcall bdSAckChunk::getGapList(bdSAckChunk *this)
{
  return ?getGapList@bdSAckChunk@@QEAAAEAV?$bdLinkedList@VbdGapAckBlock@bdSAckChunk@@@@XZ(this);
}

/*
==============
bdSAckChunk::getWindowCredit
==============
*/

__int64 __fastcall bdSAckChunk::getWindowCredit(bdSAckChunk *this)
{
  return ?getWindowCredit@bdSAckChunk@@QEBA_JXZ(this);
}

/*
==============
bdSAckChunk::bdSAckChunk
==============
*/

void __fastcall bdSAckChunk::bdSAckChunk(bdSAckChunk *this)
{
  ??0bdSAckChunk@@QEAA@XZ(this);
}

/*
==============
bdSAckChunk::bdSAckChunk
==============
*/

void __fastcall bdSAckChunk::bdSAckChunk(bdSAckChunk *this, const __int64 windowCredit, bdSAckChunk::bdSAckFlags flags)
{
  ??0bdSAckChunk@@QEAA@_JW4bdSAckFlags@0@@Z(this, windowCredit, flags);
}

/*
==============
bdSAckChunk::deserialize
==============
*/

bool __fastcall bdSAckChunk::deserialize(bdSAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  return ?deserialize@bdSAckChunk@@MEAA_NQEBEIAEAI@Z(this, data, size, offset);
}

/*
==============
bdSAckChunk::getFlags
==============
*/

bdSAckChunk::bdSAckFlags __fastcall bdSAckChunk::getFlags(bdSAckChunk *this)
{
  return ?getFlags@bdSAckChunk@@QEBA?AW4bdSAckFlags@1@XZ(this);
}

/*
==============
bdSAckChunk::~bdSAckChunk
==============
*/

void __fastcall bdSAckChunk::~bdSAckChunk(bdSAckChunk *this)
{
  ??1bdSAckChunk@@UEAA@XZ(this);
}

/*
==============
bdSAckChunk::getCumulativeAck
==============
*/

unsigned __int16 __fastcall bdSAckChunk::getCumulativeAck(bdSAckChunk *this)
{
  return ?getCumulativeAck@bdSAckChunk@@QEBAGXZ(this);
}

/*
==============
bdSAckChunk::bdSAckChunk
==============
*/
void bdSAckChunk::bdSAckChunk(bdSAckChunk *this)
{
  bdChunk::bdChunk(this, BD_CT_SACK);
  this->__vftable = (bdSAckChunk_vtbl *)&bdSAckChunk::`vftable';
  this->m_flags = BD_SC_NO_FLAGS;
  this->m_cumulativeAck = 0;
  this->m_gaps.m_head = NULL;
  this->m_gaps.m_tail = NULL;
  this->m_gaps.m_size = 0;
  this->m_windowCredit = 0i64;
}

/*
==============
bdSAckChunk::bdSAckChunk
==============
*/
void bdSAckChunk::bdSAckChunk(bdSAckChunk *this, const __int64 windowCredit, bdSAckChunk::bdSAckFlags flags)
{
  bdChunk::bdChunk(this, BD_CT_SACK);
  this->m_flags = flags;
  this->__vftable = (bdSAckChunk_vtbl *)&bdSAckChunk::`vftable';
  this->m_cumulativeAck = 0;
  this->m_gaps.m_head = NULL;
  this->m_gaps.m_tail = NULL;
  this->m_gaps.m_size = 0;
  this->m_windowCredit = windowCredit;
}

/*
==============
bdSAckChunk::~bdSAckChunk
==============
*/
void bdSAckChunk::~bdSAckChunk(bdSAckChunk *this)
{
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_head; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_next; 

  this->__vftable = (bdSAckChunk_vtbl *)&bdSAckChunk::`vftable';
  if ( this->m_gaps.m_head )
  {
    do
    {
      m_head = this->m_gaps.m_head;
      m_next = m_head->m_next;
      bdMemory::deallocate(m_head);
      this->m_gaps.m_head = m_next;
    }
    while ( m_next );
  }
  this->m_gaps.m_tail = NULL;
  this->m_gaps.m_size = 0;
  bdChunk::~bdChunk(this);
}

/*
==============
bdSAckChunk::addGap
==============
*/
void bdSAckChunk::addGap(bdSAckChunk *this, const bdSAckChunk::bdGapAckBlock *gap)
{
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::addTail(&this->m_gaps, gap);
}

/*
==============
bdSAckChunk::deserialize
==============
*/
__int64 bdSAckChunk::deserialize(bdSAckChunk *this, const unsigned __int8 *const data, const unsigned int size, unsigned int *offset)
{
  unsigned __int8 v7; 
  __int64 v8; 
  unsigned int v9; 
  char v10; 
  unsigned int v11; 
  char v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  unsigned int v15; 
  unsigned int v16; 
  char v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  char v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned __int8 v25; 
  unsigned int v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned __int16 v32; 
  unsigned int v33; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_tail; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v35; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v36; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_next; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v38; 
  __int64 v40; 
  __int64 v41; 
  __int16 v42; 
  unsigned int offseta; 
  bdSAckChunk::bdGapAckBlock v44; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v45; 
  unsigned __int16 v46; 

  offseta = *offset;
  v7 = 0;
  if ( !bdChunk::deserialize(this, data, size, &offseta) )
    goto LABEL_9;
  v8 = offseta;
  v9 = ++offseta;
  if ( data )
  {
    if ( v9 > size )
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 1i64);
    else
      v7 = data[v8];
  }
  if ( v9 > size && data )
LABEL_9:
    v10 = 0;
  else
    v10 = 1;
  this->m_flags = v7;
  if ( !v10 )
    goto LABEL_17;
  v11 = offseta + 2;
  offseta += 2;
  if ( !data )
  {
LABEL_14:
    if ( v11 <= size || !data )
      goto LABEL_16;
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  if ( v11 > size )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
    goto LABEL_14;
  }
LABEL_16:
  v12 = 1;
LABEL_18:
  v13 = offseta + 1;
  v14 = 0;
  v15 = offseta + 1;
  if ( !v12 )
    goto LABEL_26;
  v16 = offseta + 3;
  offseta += 3;
  v15 = v13 + 2;
  if ( data )
  {
    if ( v16 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      v15 = offseta;
    }
    else
    {
      v14 = *(_WORD *)&data[v13];
    }
  }
  if ( v16 > size && data )
LABEL_26:
    v17 = 0;
  else
    v17 = 1;
  this->m_cumulativeAck = v14;
  v18 = 0;
  if ( !v17 )
    goto LABEL_35;
  v19 = v15;
  v15 += 4;
  offseta = v15;
  v20 = v15;
  if ( data )
  {
    if ( v15 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
      v15 = offseta;
    }
    else
    {
      v18 = *(_DWORD *)&data[v19];
    }
  }
  if ( v20 > size && data )
LABEL_35:
    v21 = 0;
  else
    v21 = 1;
  v22 = 0;
  this->m_windowCredit = v18;
  v46 = 0;
  if ( !v21 )
    goto LABEL_44;
  v23 = v15;
  v15 += 2;
  offseta = v15;
  v24 = v15;
  if ( data )
  {
    if ( v15 > size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
      v15 = offseta;
      v22 = 0;
    }
    else
    {
      v22 = *(_WORD *)&data[v23];
      v46 = v22;
    }
  }
  if ( v24 > size && data )
LABEL_44:
    v25 = 0;
  else
    v25 = 1;
  v26 = v15 + 2;
  v27 = 0;
  offseta = v26;
  v42 = 0;
  if ( !v25 )
    return 0i64;
  while ( v27 < v22 )
  {
    v28 = 0;
    v29 = v26 + 2;
    offseta = v26 + 2;
    v30 = v26 + 2;
    if ( data )
    {
      if ( v29 > size )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
        v30 = offseta;
      }
      else
      {
        v28 = *(_WORD *)&data[v26];
      }
    }
    if ( v29 > size && data )
    {
      v32 = 0;
    }
    else
    {
      v31 = v30 + 2;
      v32 = 0;
      offseta = v30 + 2;
      if ( data )
      {
        if ( v31 > size )
          bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 2i64);
        else
          v32 = *(_WORD *)&data[v30];
      }
      if ( v31 <= size || !data )
      {
        v25 = 1;
        goto LABEL_62;
      }
    }
    v25 = 0;
LABEL_62:
    v33 = v32;
    m_tail = this->m_gaps.m_tail;
    v44.m_start = v28;
    v44.m_end = v33;
    v35 = (bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *)bdMemory::allocate(0x18ui64);
    v45 = v35;
    v36 = v35;
    if ( v35 )
      v35->m_data = v44;
    else
      v36 = NULL;
    if ( m_tail )
    {
      v36->m_next = m_tail->m_next;
      v36->m_prev = m_tail;
      m_next = m_tail->m_next;
      if ( m_next )
      {
        m_next->m_prev = v36;
      }
      else
      {
        bdHandleAssert(m_tail == this->m_gaps.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdSAckChunk::bdGapAckBlock>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
        this->m_gaps.m_tail = v36;
      }
      m_tail->m_next = v36;
    }
    else
    {
      v36->m_next = NULL;
      v36->m_prev = this->m_gaps.m_tail;
      v38 = this->m_gaps.m_tail;
      if ( v38 )
        v38->m_next = v36;
      else
        this->m_gaps.m_head = v36;
      this->m_gaps.m_tail = v36;
    }
    ++this->m_gaps.m_size;
    LODWORD(v41) = v33;
    LODWORD(v40) = v28;
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/chunks", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdsackchunk.cpp", "bdSAckChunk::deserialize", 0xA7u, "gap ack: %hu-%hu", v40, v41);
    v27 = ++v42;
    if ( !v25 )
      return v25;
    v26 = offseta;
    v22 = v46;
  }
  *offset = v26;
  return v25;
}

/*
==============
bdSAckChunk::getCumulativeAck
==============
*/
__int64 bdSAckChunk::getCumulativeAck(bdSAckChunk *this)
{
  return this->m_cumulativeAck;
}

/*
==============
bdSAckChunk::getFlags
==============
*/
__int64 bdSAckChunk::getFlags(bdSAckChunk *this)
{
  return (unsigned int)this->m_flags;
}

/*
==============
bdSAckChunk::getGapList
==============
*/
bdLinkedList<bdSAckChunk::bdGapAckBlock> *bdSAckChunk::getGapList(bdSAckChunk *this)
{
  return &this->m_gaps;
}

/*
==============
bdSAckChunk::getWindowCredit
==============
*/
__int64 bdSAckChunk::getWindowCredit(bdSAckChunk *this)
{
  return this->m_windowCredit;
}

/*
==============
bdSAckChunk::serialize
==============
*/
__int64 bdSAckChunk::serialize(bdSAckChunk *this, unsigned __int8 *data, const unsigned int size)
{
  unsigned int v6; 
  unsigned __int8 m_flags; 
  __int64 v8; 
  unsigned int v9; 
  bool v10; 
  __int64 v11; 
  bool v12; 
  char v13; 
  unsigned __int16 m_cumulativeAck; 
  unsigned int v15; 
  __int64 v16; 
  bool v17; 
  char v18; 
  int m_windowCredit; 
  __int64 v20; 
  bool v21; 
  char v22; 
  __int16 m_size; 
  __int64 v24; 
  bool v25; 
  __int64 v26; 
  bool v27; 
  char v28; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *i; 
  __int16 m_start; 
  __int64 v31; 
  bool v32; 
  char v33; 
  __int16 m_end; 
  __int64 v35; 
  bool v36; 

  v6 = bdChunk::serialize(this, data, size);
  m_flags = this->m_flags;
  v8 = v6;
  v9 = v6 + 1;
  v10 = v6 + 1 <= size || !data;
  bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 1i64);
  if ( data && v9 <= size )
    data[v8] = m_flags;
  if ( v9 > size && data )
    goto LABEL_19;
  v11 = v9;
  v9 += 2;
  v12 = v9 <= size || !data;
  bdHandleAssert(v12, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_17:
    if ( v9 <= size )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( v9 <= size )
  {
    *(_WORD *)&data[v11] = 0;
    goto LABEL_17;
  }
LABEL_18:
  if ( data )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_21;
  }
LABEL_20:
  v13 = 1;
LABEL_21:
  m_cumulativeAck = this->m_cumulativeAck;
  v15 = v9 + 1;
  if ( !v13 )
    goto LABEL_32;
  v16 = v15;
  v15 += 2;
  v17 = v15 <= size || !data;
  bdHandleAssert(v17, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
    goto LABEL_29;
  if ( v15 <= size )
  {
    *(_WORD *)&data[v16] = m_cumulativeAck;
LABEL_29:
    if ( v15 <= size )
    {
LABEL_31:
      v18 = 1;
      goto LABEL_33;
    }
  }
  if ( !data )
    goto LABEL_31;
LABEL_32:
  v18 = 0;
LABEL_33:
  m_windowCredit = this->m_windowCredit;
  if ( !v18 )
    goto LABEL_44;
  v20 = v15;
  v15 += 4;
  v21 = v15 <= size || !data;
  bdHandleAssert(v21, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !data )
    goto LABEL_41;
  if ( v15 <= size )
  {
    *(_DWORD *)&data[v20] = m_windowCredit;
LABEL_41:
    if ( v15 <= size )
    {
LABEL_43:
      v22 = 1;
      goto LABEL_45;
    }
  }
  if ( !data )
    goto LABEL_43;
LABEL_44:
  v22 = 0;
LABEL_45:
  m_size = this->m_gaps.m_size;
  if ( !v22 )
    goto LABEL_65;
  v24 = v15;
  v15 += 2;
  v25 = v15 <= size || !data;
  bdHandleAssert(v25, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_53:
    if ( v15 <= size )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( v15 <= size )
  {
    *(_WORD *)&data[v24] = m_size;
    goto LABEL_53;
  }
LABEL_54:
  if ( data )
    goto LABEL_65;
LABEL_55:
  v26 = v15;
  v15 += 2;
  v27 = v15 <= size || !data;
  bdHandleAssert(v27, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
  if ( !data )
  {
LABEL_62:
    if ( v15 <= size )
    {
LABEL_64:
      v28 = 1;
      goto LABEL_66;
    }
    goto LABEL_63;
  }
  if ( v15 <= size )
  {
    *(_WORD *)&data[v26] = 0;
    goto LABEL_62;
  }
LABEL_63:
  if ( !data )
    goto LABEL_64;
LABEL_65:
  v28 = 0;
LABEL_66:
  for ( i = this->m_gaps.m_head; i; i = i->m_next )
  {
    m_start = i->m_data.m_start;
    if ( !v28 )
      goto LABEL_78;
    v31 = v15;
    v15 += 2;
    v32 = v15 <= size || !data;
    bdHandleAssert(v32, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( data )
    {
      if ( v15 > size )
        goto LABEL_76;
      *(_WORD *)&data[v31] = m_start;
    }
    if ( v15 <= size )
      goto LABEL_77;
LABEL_76:
    if ( !data )
    {
LABEL_77:
      v33 = 1;
      goto LABEL_79;
    }
LABEL_78:
    v33 = 0;
LABEL_79:
    m_end = i->m_data.m_end;
    if ( !v33 )
      goto LABEL_90;
    v35 = v15;
    v15 += 2;
    v36 = v15 <= size || !data;
    bdHandleAssert(v36, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( !data )
      goto LABEL_87;
    if ( v15 <= size )
    {
      *(_WORD *)&data[v35] = m_end;
LABEL_87:
      if ( v15 <= size )
        goto LABEL_89;
    }
    if ( data )
    {
LABEL_90:
      v28 = 0;
      continue;
    }
LABEL_89:
    v28 = 1;
  }
  return v15;
}

/*
==============
bdSAckChunk::setCumulativeAck
==============
*/
void bdSAckChunk::setCumulativeAck(bdSAckChunk *this, const unsigned __int16 seqNumAck)
{
  this->m_cumulativeAck = seqNumAck;
}

/*
==============
bdSAckChunk::setWindowCredit
==============
*/
void bdSAckChunk::setWindowCredit(bdSAckChunk *this, const __int64 credit)
{
  this->m_windowCredit = credit;
}

