/*
==============
bdReliableReceiveWindow::~bdReliableReceiveWindow
==============
*/

void __fastcall bdReliableReceiveWindow::~bdReliableReceiveWindow(bdReliableReceiveWindow *this)
{
  ??1bdReliableReceiveWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableReceiveWindow::getNextToRead
==============
*/

bdReference<bdDataChunk> *__fastcall bdReliableReceiveWindow::getNextToRead(bdReliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  return ?getNextToRead@bdReliableReceiveWindow@@QEAA?AV?$bdReference@VbdDataChunk@@@@XZ(this, result);
}

/*
==============
bdReliableReceiveWindow::calculateAck
==============
*/

void __fastcall bdReliableReceiveWindow::calculateAck(bdReliableReceiveWindow *this)
{
  ?calculateAck@bdReliableReceiveWindow@@IEAAXXZ(this);
}

/*
==============
bdReliableReceiveWindow::bdReliableReceiveWindow
==============
*/

void __fastcall bdReliableReceiveWindow::bdReliableReceiveWindow(bdReliableReceiveWindow *this)
{
  ??0bdReliableReceiveWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableReceiveWindow::add
==============
*/

bool __fastcall bdReliableReceiveWindow::add(bdReliableReceiveWindow *this, bdReference<bdDataChunk> chunk)
{
  return ?add@bdReliableReceiveWindow@@QEAA_NV?$bdReference@VbdDataChunk@@@@@Z(this, chunk);
}

/*
==============
bdReliableReceiveWindow::getDataToSend
==============
*/

void __fastcall bdReliableReceiveWindow::getDataToSend(bdReliableReceiveWindow *this, bdPacket *packet)
{
  ?getDataToSend@bdReliableReceiveWindow@@QEAAXAEAVbdPacket@@@Z(this, packet);
}

/*
==============
bdReliableReceiveWindow::bdReliableReceiveWindow
==============
*/
void bdReliableReceiveWindow::bdReliableReceiveWindow(bdReliableReceiveWindow *this)
{
  bdSequenceNumber::bdSequenceNumber(&this->m_newest, -1);
  bdSequenceNumber::bdSequenceNumber(&this->m_lastCumulative, -1);
  bdSequenceNumber::bdSequenceNumber(&this->m_lastDispatched, -1);
  `eh vector constructor iterator'(this->m_frame, 8ui64, 0x80ui64, (void (__fastcall *)(void *))bdReference<bdDataChunk>::bdReference<bdDataChunk>, (void (__fastcall *)(void *))bdReference<bdDataChunk>::~bdReference<bdDataChunk>);
  this->m_shouldAck = 0;
  this->m_recvWindowUsedCredit = 0i64;
  this->m_recvWindowCredit = 15000i64;
  this->m_sack.m_ptr = NULL;
}

/*
==============
bdReliableReceiveWindow::~bdReliableReceiveWindow
==============
*/
void bdReliableReceiveWindow::~bdReliableReceiveWindow(bdReliableReceiveWindow *this)
{
  bdSAckChunk *m_ptr; 
  bdSAckChunk *v3; 

  m_ptr = this->m_sack.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_sack.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdSAckChunk *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_sack.m_ptr = NULL;
  }
  `eh vector destructor iterator'(this->m_frame, 8ui64, 0x80ui64, (void (__fastcall *)(void *))bdReference<bdDataChunk>::~bdReference<bdDataChunk>);
}

/*
==============
bdReliableReceiveWindow::add
==============
*/
__int64 bdReliableReceiveWindow::add(bdReliableReceiveWindow *this, bdReference<bdDataChunk> chunk)
{
  unsigned __int8 v4; 
  unsigned __int16 SequenceNumber; 
  __int64 v6; 
  const bdSequenceNumber *v7; 
  bdReference<bdDataChunk> *v8; 
  bdDataChunk *v9; 
  bdDataChunk *v10; 
  unsigned __int16 v11; 
  bdSequenceNumber v13; 
  bdDataChunk *m_ptr; 
  bdSequenceNumber other; 
  bdSequenceNumber result; 

  m_ptr = chunk.m_ptr;
  v4 = 1;
  bdHandleAssert(chunk.m_ptr->__vftable != NULL, "chunk.notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::add", 0x22u, "bdReliableReceiveWindow::add, null chunk.");
  SequenceNumber = bdDataChunk::getSequenceNumber((bdDataChunk *)chunk.m_ptr->__vftable);
  bdSequenceNumber::bdSequenceNumber(&v13, &this->m_newest, SequenceNumber, 0x10u);
  v6 = (*((int (__fastcall **)(bdDataChunk_vtbl *))chunk.m_ptr->~bdReferencable + 4))(chunk.m_ptr->__vftable);
  if ( !bdSequenceNumber::operator<(&v13, &this->m_newest) && this->m_recvWindowUsedCredit + v6 > this->m_recvWindowCredit )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::add", 0x4Bu, "Not enough recv window credit.");
    goto LABEL_13;
  }
  bdSequenceNumber::bdSequenceNumber(&other, 128);
  v7 = bdSequenceNumber::operator+(&this->m_lastDispatched, &result, &other);
  if ( bdSequenceNumber::operator>(&v13, v7) )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::add", 0x30u, "Window overflow (a) - info only");
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  if ( bdSequenceNumber::operator>(&v13, &this->m_lastDispatched) )
  {
    v8 = &this->m_frame[bdSequenceNumber::getValue(&v13) & 0x7F];
    v9 = v8->m_ptr;
    v10 = (bdDataChunk *)chunk.m_ptr->__vftable;
    if ( v8->m_ptr )
    {
      v11 = bdDataChunk::getSequenceNumber(v10);
      if ( bdDataChunk::getSequenceNumber(v9) != v11 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::add", 0x44u, "Window overflow (b) - error");
        goto LABEL_13;
      }
    }
    else
    {
      this->m_recvWindowUsedCredit += v10->getSerializedSize(v10);
      bdReference<bdDataChunk>::operator=(v8, (const bdReference<bdDataChunk> *)chunk.m_ptr);
      if ( bdSequenceNumber::operator>(&v13, &this->m_newest) )
        this->m_newest = v13;
    }
  }
LABEL_14:
  bdReliableReceiveWindow::calculateAck(this);
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdReliableReceiveWindow::calculateAck
==============
*/
void bdReliableReceiveWindow::calculateAck(bdReliableReceiveWindow *this)
{
  bdSequenceNumber *p_other; 
  bdSequenceNumber *p_result; 
  bdSequenceNumber *p_m_lastCumulative; 
  const bdSequenceNumber *v5; 
  bdSAckChunk *v6; 
  bdSAckChunk *v7; 
  bdSAckChunk *v8; 
  bdSAckChunk *m_ptr; 
  bdSAckChunk *v10; 
  bdSequenceNumber *v11; 
  bdSequenceNumber *v12; 
  bdSequenceNumber *v13; 
  bdSequenceNumber *v14; 
  int Value; 
  bdSequenceNumber *v16; 
  int v17; 
  __int64 v18; 
  bdReference<bdDataChunk> *v19; 
  unsigned __int16 v20; 
  bdSequenceNumber *v21; 
  bdSequenceNumber *v22; 
  bdSAckChunk *v23; 
  unsigned __int16 v24; 
  bdSAckChunk::bdGapAckBlock gap; 
  bdSequenceNumber other; 
  bdSequenceNumber v27; 
  bdSequenceNumber v28; 
  bdSequenceNumber v29; 
  bdSequenceNumber v30; 
  bdSequenceNumber v31; 
  bdSequenceNumber v32; 
  char v33; 
  bdSequenceNumber result; 
  bdSequenceNumber v35; 
  bdSequenceNumber v36; 
  bdSequenceNumber v37; 
  bdSequenceNumber v38; 
  bdSequenceNumber v39; 
  bdSequenceNumber v40; 
  bdSequenceNumber v41; 
  bdSequenceNumber v42; 
  bdSequenceNumber v43; 
  bdSequenceNumber v44; 
  bdSequenceNumber v45; 
  bdSequenceNumber v46; 
  __int64 v47; 
  bdSequenceNumber v48; 
  bdSAckChunk *v49; 
  bdSequenceNumber v50; 
  bdSequenceNumber v51; 

  v47 = -2i64;
  if ( bdSequenceNumber::operator>(&this->m_lastCumulative, &this->m_lastDispatched) )
  {
    bdSequenceNumber::bdSequenceNumber(&v51, 1);
    p_other = &v51;
    p_result = (bdSequenceNumber *)&v33;
    p_m_lastCumulative = &this->m_lastCumulative;
  }
  else
  {
    bdSequenceNumber::bdSequenceNumber(&other, 1);
    p_other = &other;
    p_result = &result;
    p_m_lastCumulative = &this->m_lastDispatched;
  }
  for ( v48.m_seqNum = bdSequenceNumber::operator+(p_m_lastCumulative, p_result, p_other)->m_seqNum; bdSequenceNumber::operator<=(&v48, &this->m_newest); bdSequenceNumber::operator++(&v48, &v35, 0) )
  {
    if ( !this->m_frame[bdSequenceNumber::getValue(&v48) & 0x7F].m_ptr )
      break;
    this->m_lastCumulative = v48;
  }
  bdSequenceNumber::bdSequenceNumber(&v36, -1);
  if ( bdSequenceNumber::operator!=(&this->m_lastCumulative, v5) )
  {
    v6 = (bdSAckChunk *)bdMemory::allocate(0x40ui64);
    v49 = v6;
    if ( v6 )
    {
      bdSAckChunk::bdSAckChunk(v6, this->m_recvWindowCredit - this->m_recvWindowUsedCredit, BD_SC_NO_FLAGS);
      v8 = v7;
    }
    else
    {
      v8 = NULL;
    }
    m_ptr = this->m_sack.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v10 = this->m_sack.m_ptr;
        if ( v10 )
          ((void (__fastcall *)(bdSAckChunk *, __int64))v10->~bdReferencable)(v10, 1i64);
      }
    }
    this->m_sack.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    gap = 0i64;
    bdSequenceNumber::bdSequenceNumber(&v27, 1);
    for ( v48.m_seqNum = bdSequenceNumber::operator+(&this->m_lastCumulative, &v37, &v27)->m_seqNum; bdSequenceNumber::operator<=(&v48, &this->m_newest); bdSequenceNumber::operator++(&v48, &v44, 0) )
    {
      if ( this->m_frame[bdSequenceNumber::getValue(&v48) & 0x7F].m_ptr )
      {
        if ( !gap.m_start )
        {
          v11 = bdSequenceNumber::operator-(&v48, &v38, &this->m_lastCumulative);
          gap.m_start = bdSequenceNumber::getValue(v11);
        }
      }
      else if ( gap.m_start )
      {
        bdSequenceNumber::bdSequenceNumber(&v28, 1);
        v12 = bdSequenceNumber::operator-(&v48, &v39, &v28);
        v13 = bdSequenceNumber::operator-(v12, &v40, &this->m_lastCumulative);
        gap.m_end = bdSequenceNumber::getValue(v13);
        bdSAckChunk::addGap(this->m_sack.m_ptr, &gap);
        bdSequenceNumber::bdSequenceNumber(&v29, gap.m_start);
        v14 = bdSequenceNumber::operator+(&this->m_lastCumulative, &v41, &v29);
        Value = bdSequenceNumber::getValue(v14);
        bdSequenceNumber::bdSequenceNumber(&v31, Value);
        bdSequenceNumber::bdSequenceNumber(&v30, gap.m_end);
        v16 = bdSequenceNumber::operator+(&this->m_lastCumulative, &v42, &v30);
        v17 = bdSequenceNumber::getValue(v16);
        bdSequenceNumber::bdSequenceNumber(&v50, v17);
        LODWORD(v49) = v31;
        while ( bdSequenceNumber::operator<((bdSequenceNumber *)&v49, &v50) )
        {
          v18 = bdSequenceNumber::getValue((bdSequenceNumber *)&v49) & 0x8000007F;
          if ( (int)v18 < 0 )
            v18 = ((unsigned __int8)(v18 - 1) | 0xFFFFFF80) + 1;
          v19 = &this->m_frame[v18];
          bdHandleAssert(v19->m_ptr != NULL, "m_frame[index].notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::calculateAck", 0xC6u, "Invalid gap ack.");
          LOWORD(v19) = bdDataChunk::getSequenceNumber(v19->m_ptr);
          v20 = bdSequenceNumber::getValue((bdSequenceNumber *)&v49);
          bdHandleAssert((_WORD)v19 == v20, "m_frame[index]->getSequenceNumber() == static_cast<bdUInt16>(jj.getValue())", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::calculateAck", 0xC8u, "Invalid seq num.");
          bdSequenceNumber::operator++((bdSequenceNumber *)&v49, &v43, 0);
        }
        gap = 0i64;
      }
    }
    if ( gap.m_start )
    {
      bdSequenceNumber::bdSequenceNumber(&v32, 1);
      v21 = bdSequenceNumber::operator-(&v48, &v45, &v32);
      v22 = bdSequenceNumber::operator-(v21, &v46, &this->m_lastCumulative);
      gap.m_end = bdSequenceNumber::getValue(v22);
      bdSAckChunk::addGap(this->m_sack.m_ptr, &gap);
    }
    v23 = this->m_sack.m_ptr;
    v24 = bdSequenceNumber::getValue(&this->m_lastCumulative);
    bdSAckChunk::setCumulativeAck(v23, v24);
  }
}

/*
==============
bdReliableReceiveWindow::getDataToSend
==============
*/
void bdReliableReceiveWindow::getDataToSend(bdReliableReceiveWindow *this, bdPacket *packet)
{
  bdSAckChunk *m_ptr; 
  bdSAckChunk *v4; 
  bdSAckChunk *v5; 
  bdReference<bdChunk> chunk; 

  m_ptr = this->m_sack.m_ptr;
  if ( m_ptr )
  {
    chunk.m_ptr = m_ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( bdPacket::addChunk(packet, (bdReference<bdChunk>)&chunk) )
    {
      v4 = this->m_sack.m_ptr;
      if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v5 = this->m_sack.m_ptr;
        if ( v5 )
          ((void (__fastcall *)(bdSAckChunk *, __int64))v5->~bdReferencable)(v5, 1i64);
      }
      this->m_sack.m_ptr = NULL;
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::getDataToSend", 0x62u, "SACK chunk didn't fit in packet");
    }
  }
}

/*
==============
bdReliableReceiveWindow::getNextToRead
==============
*/
bdReference<bdDataChunk> *bdReliableReceiveWindow::getNextToRead(bdReliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  __int64 v4; 
  bdReference<bdDataChunk> *v5; 
  unsigned __int16 SequenceNumber; 
  __int64 v7; 
  bdSAckChunk *m_ptr; 
  int v10; 
  int Value; 
  bdSequenceNumber v12; 
  bdReference<bdDataChunk> *v13; 
  bdSequenceNumber resulta; 
  bdSequenceNumber other; 

  v13 = result;
  result->m_ptr = NULL;
  v4 = ((unsigned __int8)bdSequenceNumber::getValue(&this->m_lastDispatched) + 1) & 0x7F;
  bdSequenceNumber::bdSequenceNumber(&other, 1);
  bdSequenceNumber::operator+(&this->m_lastDispatched, &resulta, &other);
  v5 = &this->m_frame[v4];
  if ( !v5->m_ptr )
    return result;
  SequenceNumber = bdDataChunk::getSequenceNumber(v5->m_ptr);
  bdSequenceNumber::bdSequenceNumber(&v12, &this->m_lastDispatched, SequenceNumber, 0x10u);
  if ( !bdSequenceNumber::operator==(&resulta, &v12) )
  {
    Value = bdSequenceNumber::getValue(&v12);
    v10 = bdSequenceNumber::getValue(&resulta);
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::getNextToRead", 0x86u, "unexpected seq number. (%d != %d)", v10, Value);
    return result;
  }
  bdReference<bdDataChunk>::operator=(result, v5);
  if ( v5->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v5->m_ptr )
    ((void (__fastcall *)(bdDataChunk *, __int64))v5->m_ptr->~bdReferencable)(v5->m_ptr, 1i64);
  v5->m_ptr = NULL;
  this->m_lastDispatched = v12;
  v7 = this->m_recvWindowUsedCredit - result->m_ptr->getSerializedSize(result->m_ptr);
  this->m_recvWindowUsedCredit = v7;
  m_ptr = this->m_sack.m_ptr;
  if ( m_ptr )
    bdSAckChunk::setWindowCredit(m_ptr, this->m_recvWindowCredit - v7);
  else
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablereceivewindow.cpp", "bdReliableReceiveWindow::getNextToRead", 0x81u, "No SACK available");
  return result;
}

