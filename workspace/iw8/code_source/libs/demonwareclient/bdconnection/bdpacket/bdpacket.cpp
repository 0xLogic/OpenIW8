/*
==============
bdPacket::serialize
==============
*/

unsigned int __fastcall bdPacket::serialize(bdPacket *this, unsigned __int8 *outBuffer, const unsigned int outSize)
{
  return ?serialize@bdPacket@@QEAAIPEAEI@Z(this, outBuffer, outSize);
}

/*
==============
bdPacket::bdPacket
==============
*/

void __fastcall bdPacket::bdPacket(bdPacket *this)
{
  ??0bdPacket@@QEAA@XZ(this);
}

/*
==============
bdPacket::getVerificationTag
==============
*/

unsigned int __fastcall bdPacket::getVerificationTag(bdPacket *this)
{
  return ?getVerificationTag@bdPacket@@QEBAIXZ(this);
}

/*
==============
bdPacket::getNextChunk
==============
*/

bool __fastcall bdPacket::getNextChunk(bdPacket *this, bdReference<bdChunk> *chunk)
{
  return ?getNextChunk@bdPacket@@QEAA_NAEAV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdPacket::~bdPacket
==============
*/

void __fastcall bdPacket::~bdPacket(bdPacket *this)
{
  ??1bdPacket@@UEAA@XZ(this);
}

/*
==============
bdPacket::isEmpty
==============
*/

bool __fastcall bdPacket::isEmpty(bdPacket *this)
{
  return ?isEmpty@bdPacket@@QEBA_NXZ(this);
}

/*
==============
bdPacket::deserialize
==============
*/

bool __fastcall bdPacket::deserialize(bdPacket *this, const unsigned __int8 *inData, const unsigned int inSize)
{
  return ?deserialize@bdPacket@@QEAA_NPEBEI@Z(this, inData, inSize);
}

/*
==============
bdPacket::addChunk
==============
*/

bool __fastcall bdPacket::addChunk(bdPacket *this, bdReference<bdChunk> chunk)
{
  return ?addChunk@bdPacket@@QEAA_NV?$bdReference@VbdChunk@@@@@Z(this, chunk);
}

/*
==============
bdPacket::bdPacket
==============
*/

void __fastcall bdPacket::bdPacket(bdPacket *this, const unsigned int tag, const unsigned int bufferSize)
{
  ??0bdPacket@@QEAA@II@Z(this, tag, bufferSize);
}

/*
==============
bdPacket::bdPacket
==============
*/
void bdPacket::bdPacket(bdPacket *this, const unsigned int tag, const unsigned int bufferSize)
{
  this->__vftable = (bdPacket_vtbl *)&bdPacket::`vftable';
  this->m_chunks.m_head = NULL;
  this->m_chunks.m_tail = NULL;
  this->m_chunks.m_size = 0;
  this->m_me.m_ptr = NULL;
  this->m_bufferSize = bufferSize - 6;
  this->m_tag = tag;
  this->m_currentSize = 6;
}

/*
==============
bdPacket::bdPacket
==============
*/
void bdPacket::bdPacket(bdPacket *this)
{
  this->__vftable = (bdPacket_vtbl *)&bdPacket::`vftable';
  this->m_chunks.m_head = NULL;
  this->m_chunks.m_tail = NULL;
  this->m_chunks.m_size = 0;
  this->m_me.m_ptr = NULL;
  *(_QWORD *)&this->m_tag = 0i64;
  this->m_currentSize = 0;
}

/*
==============
bdPacket::~bdPacket
==============
*/
void bdPacket::~bdPacket(bdPacket *this)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v3; 

  this->__vftable = (bdPacket_vtbl *)&bdPacket::`vftable';
  m_ptr = this->m_me.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_me.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_me.m_ptr = NULL;
  }
  bdLinkedList<bdReference<bdChunk>>::~bdLinkedList<bdReference<bdChunk>>(&this->m_chunks);
}

/*
==============
bdPacket::addChunk
==============
*/
__int64 bdPacket::addChunk(bdPacket *this, bdReference<bdChunk> chunk)
{
  unsigned __int8 v4; 
  unsigned int v5; 

  bdHandleAssert(chunk.m_ptr->__vftable != NULL, "chunk.notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::addChunk", 0x103u, "Chunk should never be null.", -2i64);
  v4 = 0;
  v5 = this->m_currentSize + (*((__int64 (__fastcall **)(bdChunk_vtbl *))chunk.m_ptr->~bdReferencable + 4))(chunk.m_ptr->__vftable);
  if ( v5 <= this->m_bufferSize )
  {
    bdLinkedList<bdReference<bdChunk>>::addTail(&this->m_chunks, (const bdReference<bdChunk> *)chunk.m_ptr);
    this->m_currentSize = v5;
    v4 = 1;
  }
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdPacket::deserialize
==============
*/
bool bdPacket::deserialize(bdPacket *this, const unsigned __int8 *inData, const unsigned int inSize)
{
  int v6; 
  unsigned __int16 v7; 
  char v8; 
  unsigned int v9; 
  unsigned __int8 *v11; 
  unsigned int v12; 
  bool v13; 
  unsigned int v14; 
  bdChunkTypes Type; 
  bdChunk *v16; 
  bdDataChunk *v17; 
  bdChunk *v18; 
  bdSAckChunk *v19; 
  bdChunk *v20; 
  bdHeartbeatChunk *v21; 
  bdChunk *v22; 
  bdHeartbeatAckChunk *v23; 
  bdChunk *v24; 
  bdInitChunk *v25; 
  bdChunk *v26; 
  bdInitAckChunk *v27; 
  bdChunk *v28; 
  bdCookieEchoChunk *v29; 
  bdChunk *v30; 
  bdCookieAckChunk *v31; 
  bdChunk *v32; 
  bdShutdownChunk *v33; 
  bdChunk *v34; 
  bdShutdownAckChunk *v35; 
  bdChunk *v36; 
  bdShutdownCompleteChunk *v37; 
  bdChunk *v38; 
  signed __int32 v39; 
  bdChunk *m_ptr; 
  signed __int32 v41; 
  bdReference<bdChunk> value; 
  unsigned __int8 *data; 
  unsigned int v44; 
  unsigned __int8 *unencData; 
  __int64 v46; 
  bdDataChunk *v47; 
  bdSAckChunk *v48; 
  bdHeartbeatChunk *v49; 
  bdHeartbeatAckChunk *v50; 
  bdInitChunk *v51; 
  bdInitAckChunk *v52; 
  bdCookieEchoChunk *v53; 
  bdCookieAckChunk *v54; 
  bdShutdownChunk *v55; 
  bdShutdownAckChunk *v56; 
  bdShutdownCompleteChunk *v57; 
  bdChunk *v58; 
  unsigned int offset; 
  unsigned __int16 v61; 
  unsigned int unencOffset; 

  v46 = -2i64;
  if ( inData && inSize > 6 )
  {
    v6 = 2;
    offset = 2;
    v7 = *(_WORD *)inData;
    v61 = *(_WORD *)inData;
    v8 = 1;
  }
  else
  {
    v7 = 0;
    v6 = 0;
    offset = 0;
    v8 = 0;
  }
  v9 = v7;
  if ( v7 <= inSize - v6 )
  {
    v11 = (unsigned __int8 *)&inData[v6];
    data = v11;
    unencData = &v11[v7];
    v12 = inSize - v7 - v6;
    unencOffset = 0;
    offset = 0;
    if ( !v8 )
      goto LABEL_17;
    offset = 4;
    if ( v11 )
    {
      if ( v7 < 4u )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "byte packer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::removeBasicType", 0xA2u, "Not enough data left to read %u bytes.", 4i64);
        v11 = data;
      }
      else
      {
        v44 = *(_DWORD *)v11;
        this->m_tag = v44;
      }
    }
    if ( v7 < 4u && v11 )
LABEL_17:
      v13 = 0;
    else
      v13 = 1;
    v14 = 0;
    if ( offset < v7 )
    {
      while ( 2 )
      {
        if ( v13 && v14 < 0x64 )
        {
          Type = bdChunk::getType(&v11[offset], v9 - offset);
          v16 = NULL;
          value.m_ptr = NULL;
          switch ( Type )
          {
            case BD_CT_PADDING:
              ++offset;
              goto LABEL_72;
            case BD_CT_DATA:
              v17 = (bdDataChunk *)bdMemory::allocate(0x28ui64);
              v47 = v17;
              if ( v17 )
              {
                bdDataChunk::bdDataChunk(v17);
                v16 = v18;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_INIT:
              v25 = (bdInitChunk *)bdMemory::allocate(0x38ui64);
              v51 = v25;
              if ( v25 )
              {
                bdInitChunk::bdInitChunk(v25);
                v16 = v26;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_INIT_ACK:
              v27 = (bdInitAckChunk *)bdMemory::allocate(0x40ui64);
              v52 = v27;
              if ( v27 )
              {
                bdInitAckChunk::bdInitAckChunk(v27);
                v16 = v28;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_SACK:
              v19 = (bdSAckChunk *)bdMemory::allocate(0x40ui64);
              v48 = v19;
              if ( v19 )
              {
                bdSAckChunk::bdSAckChunk(v19);
                v16 = v20;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_HEARTBEAT:
              v21 = (bdHeartbeatChunk *)bdMemory::allocate(0x20ui64);
              v49 = v21;
              if ( v21 )
              {
                bdHeartbeatChunk::bdHeartbeatChunk(v21);
                v16 = v22;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_HEARTBEAT_ACK:
              v23 = (bdHeartbeatAckChunk *)bdMemory::allocate(0x20ui64);
              v50 = v23;
              if ( v23 )
              {
                bdHeartbeatAckChunk::bdHeartbeatAckChunk(v23);
                v16 = v24;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_ABORT:
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::deserialize", 0xCEu, "Not implemented! (BD_CT_ABORT)");
              goto LABEL_72;
            case BD_CT_SHUTDOWN:
              v33 = (bdShutdownChunk *)bdMemory::allocate(0x20ui64);
              v55 = v33;
              if ( v33 )
              {
                bdShutdownChunk::bdShutdownChunk(v33);
                v16 = v34;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_SHUTDOWN_ACK:
              v35 = (bdShutdownAckChunk *)bdMemory::allocate(0x20ui64);
              v56 = v35;
              if ( v35 )
              {
                bdShutdownAckChunk::bdShutdownAckChunk(v35);
                v16 = v36;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_SHUTDOWN_COMPLETE:
              v37 = (bdShutdownCompleteChunk *)bdMemory::allocate(0x20ui64);
              v57 = v37;
              if ( v37 )
              {
                bdShutdownCompleteChunk::bdShutdownCompleteChunk(v37);
                v16 = v38;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_ERROR:
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::deserialize", 0xC4u, "Not implemented! (BD_CT_ERROR)");
              goto LABEL_72;
            case BD_CT_COOKIE_ECHO:
              v29 = (bdCookieEchoChunk *)bdMemory::allocate(0x30ui64);
              v53 = v29;
              if ( v29 )
              {
                bdCookieEchoChunk::bdCookieEchoChunk(v29);
                v16 = v30;
              }
              else
              {
                v16 = NULL;
              }
              goto LABEL_58;
            case BD_CT_COOKIE_ACK:
              v31 = (bdCookieAckChunk *)bdMemory::allocate(0x20ui64);
              v54 = v31;
              if ( v31 )
              {
                bdCookieAckChunk::bdCookieAckChunk(v31);
                v16 = v32;
              }
              else
              {
                v16 = NULL;
              }
LABEL_58:
              value.m_ptr = v16;
              if ( !v16 )
                goto LABEL_72;
              _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
              if ( Type == BD_CT_DATA )
              {
                _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
                v39 = _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 0xFFFFFFFF);
                m_ptr = value.m_ptr;
                if ( v39 == 1 )
                  ((void (__fastcall *)(bdChunk *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
                v58 = m_ptr;
                _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
                v13 = bdDataChunk::deserialize((bdDataChunk *)value.m_ptr, data, v9, &offset, unencData, v12, &unencOffset);
                v41 = _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 0xFFFFFFFF);
                v16 = value.m_ptr;
                if ( v41 == 1 )
                  ((void (__fastcall *)(bdChunk *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
                if ( v13 )
                  goto LABEL_68;
              }
              else
              {
                v16 = value.m_ptr;
                if ( value.m_ptr->deserialize(value.m_ptr, data, v9, &offset) )
                {
                  v13 = 1;
LABEL_68:
                  bdLinkedList<bdReference<bdChunk>>::addTail(&this->m_chunks, &value);
                  goto LABEL_72;
                }
                v13 = 0;
              }
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::deserialize", 0xF2u, "Chunk deserialization failed.");
LABEL_72:
              ++v14;
              if ( v16 )
              {
                if ( !_InterlockedDecrement((volatile signed __int32 *)&v16->m_refCount) )
                  ((void (__fastcall *)(bdChunk *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
              }
              v11 = data;
              if ( offset >= v9 )
                return v13;
              continue;
            default:
              v13 = 0;
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::deserialize", 0xDCu, "unknown chunk type.");
              goto LABEL_72;
          }
        }
        break;
      }
    }
    return v13;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::deserialize", 0x8Du, "Received a malformed packet!  Packet claims to have size [%u] bytes, but we only received [%u] bytes of data!", v7, inSize);
    return 0;
  }
}

/*
==============
bdPacket::getNextChunk
==============
*/
char bdPacket::getNextChunk(bdPacket *this, bdReference<bdChunk> *chunk)
{
  bdLinkedList<bdReference<bdChunk> >::Node *m_head; 
  bdChunk *m_ptr; 
  bdLinkedList<bdReference<bdChunk> >::Node *v6; 
  bdLinkedList<bdReference<bdChunk> >::Node *m_prev; 

  if ( !this->m_chunks.m_size )
    return 0;
  bdHandleAssert(this->m_chunks.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdChunk> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.", -2i64);
  m_head = this->m_chunks.m_head;
  if ( m_head != (bdLinkedList<bdReference<bdChunk> >::Node *)chunk )
  {
    if ( chunk->m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&chunk->m_ptr->m_refCount) && chunk->m_ptr )
      ((void (__fastcall *)(bdChunk *, __int64))chunk->m_ptr->~bdReferencable)(chunk->m_ptr, 1i64);
    m_ptr = m_head->m_data.m_ptr;
    chunk->m_ptr = (bdChunk *)m_head->m_data;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  v6 = this->m_chunks.m_head;
  if ( v6 )
  {
    this->m_chunks.m_head = v6->m_next;
    m_prev = v6->m_prev;
    if ( v6 == this->m_chunks.m_tail )
      this->m_chunks.m_tail = m_prev;
    else
      v6->m_next->m_prev = m_prev;
    if ( v6->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v6->m_data.m_ptr )
        ((void (__fastcall *)(bdChunk *, __int64))v6->m_data.m_ptr->~bdReferencable)(v6->m_data.m_ptr, 1i64);
      v6->m_data.m_ptr = NULL;
    }
    bdMemory::deallocate(v6);
    --this->m_chunks.m_size;
  }
  return 1;
}

/*
==============
bdPacket::getVerificationTag
==============
*/
__int64 bdPacket::getVerificationTag(bdPacket *this)
{
  return this->m_tag;
}

/*
==============
bdPacket::isEmpty
==============
*/
bool bdPacket::isEmpty(bdPacket *this)
{
  return this->m_chunks.m_size == 0;
}

/*
==============
bdPacket::serialize
==============
*/
__int64 bdPacket::serialize(bdPacket *this, unsigned __int8 *outBuffer, const unsigned int outSize)
{
  bdPacket *v5; 
  int v6; 
  bool v7; 
  char v8; 
  bdLinkedList<bdReference<bdChunk> >::Node *m_head; 
  unsigned int v10; 
  volatile signed __int32 *m_ptr; 
  volatile signed __int32 *v12; 
  unsigned int v13; 
  int v14; 
  bdLinkedList<bdReference<bdChunk> >::Node *v15; 
  bdDataChunk *v16; 
  bdDataChunk *v17; 
  volatile signed __int32 *p_m_refCount; 
  unsigned int v19; 
  bool v20; 
  int v23; 

  v5 = this;
  v6 = 6;
  v7 = outSize >= 6 || !outBuffer;
  v23 = 4;
  bdHandleAssert(v7, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !outBuffer )
  {
LABEL_8:
    if ( outSize >= 6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( outSize >= 6 )
  {
    *(_DWORD *)(outBuffer + 2) = v5->m_tag;
    goto LABEL_8;
  }
LABEL_9:
  if ( outBuffer )
  {
    v8 = 0;
    goto LABEL_12;
  }
LABEL_11:
  v8 = 1;
LABEL_12:
  m_head = v5->m_chunks.m_head;
  v10 = outSize - 6;
  if ( m_head )
  {
    do
    {
      if ( !v8 )
        break;
      m_ptr = (volatile signed __int32 *)m_head->m_data.m_ptr;
      m_head = m_head->m_next;
      v12 = m_ptr + 2;
      if ( m_ptr )
        _InterlockedExchangeAdd(v12, 1u);
      v13 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)m_ptr + 32i64))(m_ptr);
      if ( v10 < v13 )
      {
        v8 = 0;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::serialize", 0x51u, "Buffer not big enough for all chunks.");
      }
      else
      {
        v10 -= v13;
        v14 = (*(__int64 (__fastcall **)(volatile signed __int32 *, unsigned __int8 *, _QWORD))(*(_QWORD *)m_ptr + 16i64))(m_ptr, &outBuffer[v6], outSize - v6);
        v23 += v14;
        v6 += v14;
      }
      if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))m_ptr)(m_ptr, 1i64);
    }
    while ( m_head );
    v5 = this;
  }
  v15 = v5->m_chunks.m_head;
  while ( v15 )
  {
    if ( !v8 )
      break;
    v16 = (bdDataChunk *)v15->m_data.m_ptr;
    v15 = v15->m_next;
    v17 = v16;
    p_m_refCount = (volatile signed __int32 *)&v16->m_refCount;
    if ( v16 )
    {
      _InterlockedExchangeAdd(p_m_refCount, 1u);
      v17 = v16;
    }
    if ( v17->getType(v17) == BD_CT_DATA )
    {
      _InterlockedExchangeAdd(p_m_refCount, 1u);
      if ( v16 && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChunk *, __int64))v16->~bdReferencable)(v16, 1i64);
      if ( v16 )
        _InterlockedExchangeAdd(p_m_refCount, 1u);
      v6 += bdDataChunk::serializeUnencrypted(v16, &outBuffer[v6], outSize - v6);
      if ( v16 && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChunk *, __int64))v16->~bdReferencable)(v16, 1i64);
    }
    if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChunk *, __int64))v16->~bdReferencable)(v16, 1i64);
  }
  v19 = 0;
  if ( v8 )
  {
    if ( (unsigned __int16)v23 != v23 )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/packet", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::serialize", 0x76u, "Encrypted data section size too big to fit in bdUInt16.");
      goto LABEL_53;
    }
    v20 = outSize >= 2 || !outBuffer;
    bdHandleAssert(v20, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 2i64);
    if ( outBuffer )
    {
      if ( outSize < 2 )
      {
LABEL_49:
        if ( outBuffer )
        {
          v19 = 0;
          goto LABEL_53;
        }
LABEL_51:
        v19 = v6;
        goto LABEL_53;
      }
      *(_WORD *)outBuffer = v23;
    }
    if ( outSize >= 2 )
      goto LABEL_51;
    goto LABEL_49;
  }
LABEL_53:
  bdHandleAssert(this->m_currentSize == v19, "m_currentSize == totalBytesWritten", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdpacket\\bdpacket.cpp", "bdPacket::serialize", 0x7Au, "Packet size miscalculation.");
  return v19;
}

