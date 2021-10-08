/*
==============
bdLoginQueueTicket::bdLoginQueueTicket
==============
*/

void __fastcall bdLoginQueueTicket::bdLoginQueueTicket(bdLoginQueueTicket *this, unsigned int titleID, unsigned __int64 userID)
{
  ??0bdLoginQueueTicket@@QEAA@I_K@Z(this, titleID, userID);
}

/*
==============
bdLoginQueueTicket::encrypt
==============
*/

bool __fastcall bdLoginQueueTicket::encrypt(bdLoginQueueTicket *this, const unsigned __int8 (*client3DESKey)[24], const unsigned __int8 *const iv, bdReference<bdBitBuffer> outDataBuf)
{
  return ?encrypt@bdLoginQueueTicket@@QEAA_NAEAY0BI@$$CBEQEBEV?$bdReference@VbdBitBuffer@@@@@Z(this, client3DESKey, iv, outDataBuf);
}

/*
==============
bdLoginQueueTicket::bdLoginQueueTicket
==============
*/

void __fastcall bdLoginQueueTicket::bdLoginQueueTicket(bdLoginQueueTicket *this)
{
  ??0bdLoginQueueTicket@@QEAA@XZ(this);
}

/*
==============
bdLoginQueueTicket::~bdLoginQueueTicket
==============
*/

void __fastcall bdLoginQueueTicket::~bdLoginQueueTicket(bdLoginQueueTicket *this)
{
  ??1bdLoginQueueTicket@@QEAA@XZ(this);
}

/*
==============
bdLoginQueueTicket::setData
==============
*/

void __fastcall bdLoginQueueTicket::setData(bdLoginQueueTicket *this, const unsigned int *titleID, const unsigned __int64 *userID)
{
  ?setData@bdLoginQueueTicket@@QEAAXAEBIAEB_K@Z(this, titleID, userID);
}

/*
==============
bdLoginQueueTicket::bdLoginQueueTicket
==============
*/
void bdLoginQueueTicket::bdLoginQueueTicket(bdLoginQueueTicket *this, unsigned int titleID, unsigned __int64 userID)
{
  this->m_titleID = titleID;
  this->m_userID = userID;
}

/*
==============
bdLoginQueueTicket::bdLoginQueueTicket
==============
*/
void bdLoginQueueTicket::bdLoginQueueTicket(bdLoginQueueTicket *this)
{
  this->m_titleID = 0;
  this->m_userID = 0i64;
}

/*
==============
bdLoginQueueTicket::~bdLoginQueueTicket
==============
*/
void bdLoginQueueTicket::~bdLoginQueueTicket(bdLoginQueueTicket *this)
{
  ;
}

/*
==============
bdLoginQueueTicket::encrypt
==============
*/
char bdLoginQueueTicket::encrypt(bdLoginQueueTicket *this, const unsigned __int8 (*client3DESKey)[24], const unsigned __int8 *const iv, bdReference<bdBitBuffer> outDataBuf)
{
  bdBitBuffer *v8; 
  bdBitBuffer *v9; 
  bdBitBuffer *v10; 
  unsigned int m_titleID; 
  unsigned __int64 m_userID; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int m_size; 
  __int64 v17; 
  char v18[4]; 
  unsigned int bits; 
  __int64 v20[4]; 
  char dest[16]; 

  v20[1] = -2i64;
  v20[2] = (__int64)outDataBuf.m_ptr;
  v8 = (bdBitBuffer *)bdMemory::allocate(0x30ui64);
  v20[0] = (__int64)v8;
  if ( v8 )
  {
    bdBitBuffer::bdBitBuffer(v8, 0xCu, 0);
    v10 = v9;
  }
  else
  {
    v10 = NULL;
  }
  v20[3] = (__int64)v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  m_titleID = this->m_titleID;
  bdBitBuffer::writeDataType(v10, BD_BB_UNSIGNED_INTEGER32_TYPE);
  bits = m_titleID;
  bdBitBuffer::writeBits(v10, &bits, 0x20u);
  m_userID = this->m_userID;
  bdBitBuffer::writeDataType(v10, BD_BB_UNSIGNED_INTEGER64_TYPE);
  v20[0] = m_userID;
  bdBitBuffer::writeBits(v10, v20, 0x40u);
  v13 = ((v10->m_data.m_size + 7) & 0xFFFFFFF8) - v10->m_data.m_size;
  v18[0] = this->m_userID;
  if ( v13 )
  {
    v14 = v13;
    do
    {
      bdBitBuffer::writeBits(v10, v18, 8u);
      --v14;
    }
    while ( v14 );
  }
  m_size = v10->m_data.m_size;
  bdHandleAssert(m_size <= 0x10, "cypherTextSize >= actualDataSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdloginqueueticket.cpp", "bdLoginQueueTicket::encrypt", 0x42u, "Insufficient memory [%u vs %u bytes] for bdLoginQueueTicket encryption", 16, m_size);
  if ( m_size <= 0x10 )
  {
    bdCryptoUtils::encrypt(client3DESKey, iv, v10->m_data.m_data, dest, m_size);
    bdBitBuffer::writeBits((bdBitBuffer *)outDataBuf.m_ptr->__vftable, dest, 8 * v10->m_data.m_size);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdBitBuffer *, __int64))v10->~bdReferencable)(v10, 1i64);
    if ( outDataBuf.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&outDataBuf.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( outDataBuf.m_ptr->__vftable )
        (*(void (__fastcall **)(bdBitBuffer_vtbl *, __int64))outDataBuf.m_ptr->~bdReferencable)(outDataBuf.m_ptr->__vftable, 1i64);
      outDataBuf.m_ptr->__vftable = NULL;
    }
    return 1;
  }
  else
  {
    LODWORD(v17) = 16;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLoginQueueTicket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdloginqueueticket.cpp", "bdLoginQueueTicket::encrypt", 0x47u, "Insufficient memory [%u vs %u bytes] for bdLoginQueueTicket encryption", v17, m_size);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdBitBuffer *, __int64))v10->~bdReferencable)(v10, 1i64);
    if ( outDataBuf.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&outDataBuf.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( outDataBuf.m_ptr->__vftable )
        (*(void (__fastcall **)(bdBitBuffer_vtbl *, __int64))outDataBuf.m_ptr->~bdReferencable)(outDataBuf.m_ptr->__vftable, 1i64);
      outDataBuf.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
bdLoginQueueTicket::setData
==============
*/
void bdLoginQueueTicket::setData(bdLoginQueueTicket *this, const unsigned int *titleID, const unsigned __int64 *userID)
{
  this->m_titleID = *titleID;
  this->m_userID = *userID;
}

