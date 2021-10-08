/*
==============
bdReliableSendWindow::isEmpty
==============
*/

bool __fastcall bdReliableSendWindow::isEmpty(bdReliableSendWindow *this)
{
  return ?isEmpty@bdReliableSendWindow@@QEBA_NXZ(this);
}

/*
==============
bdReliableSendWindow::setTimeoutPeriod
==============
*/

void __fastcall bdReliableSendWindow::setTimeoutPeriod(bdReliableSendWindow *this, const float secs)
{
  ?setTimeoutPeriod@bdReliableSendWindow@@QEAAXM@Z(this, secs);
}

/*
==============
add
==============
*/

void __fastcall add(const hkMpRational *rat0, const hkMpRational *rat1, hkMpRational *ratOut)
{
  ?add@@YAXAEBUhkMpRational@@0AEAU1@@Z(rat0, rat1, ratOut);
}

/*
==============
bdReliableSendWindow::handleAck
==============
*/

bool __fastcall bdReliableSendWindow::handleAck(bdReliableSendWindow *this, bdReference<bdSAckChunk> chunk, float *rtt)
{
  return ?handleAck@bdReliableSendWindow@@QEAA_NV?$bdReference@VbdSAckChunk@@@@AEAM@Z(this, chunk, rtt);
}

/*
==============
bdReliableSendWindow::getDataToSend
==============
*/

void __fastcall bdReliableSendWindow::getDataToSend(bdReliableSendWindow *this, bdPacket *packet)
{
  ?getDataToSend@bdReliableSendWindow@@QEAAXAEAVbdPacket@@@Z(this, packet);
}

/*
==============
bdReliableSendWindow::increaseCongestionWindow
==============
*/

void __fastcall bdReliableSendWindow::increaseCongestionWindow(bdReliableSendWindow *this, const unsigned __int64 bytesAcked)
{
  ?increaseCongestionWindow@bdReliableSendWindow@@IEAAX_K@Z(this, bytesAcked);
}

/*
==============
add
==============
*/

void __fastcall add(const hkMpUint *bi0, const hkMpUint *bi1, hkMpUint *biOut)
{
  ?add@@YAXAEBUhkMpUint@@0AEAU1@@Z(bi0, bi1, biOut);
}

/*
==============
bdReliableSendWindow::~bdReliableSendWindow
==============
*/

void __fastcall bdReliableSendWindow::~bdReliableSendWindow(bdReliableSendWindow *this)
{
  ??1bdReliableSendWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableSendWindow::getTimeoutPeriod
==============
*/

double __fastcall bdReliableSendWindow::getTimeoutPeriod(bdReliableSendWindow *this)
{
  double result; 

  *(float *)&result = ?getTimeoutPeriod@bdReliableSendWindow@@QEBAMXZ(this);
  return result;
}

/*
==============
bdReliableSendWindow::bdReliableSendWindow
==============
*/

void __fastcall bdReliableSendWindow::bdReliableSendWindow(bdReliableSendWindow *this)
{
  ??0bdReliableSendWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableSendWindow::decreaseCongestionWindow
==============
*/

void __fastcall bdReliableSendWindow::decreaseCongestionWindow(bdReliableSendWindow *this, const bdReliableSendWindow::bdCongestionWindowDecreaseReason reason)
{
  ?decreaseCongestionWindow@bdReliableSendWindow@@IEAAXW4bdCongestionWindowDecreaseReason@1@@Z(this, reason);
}

/*
==============
bdReliableSendWindow::add
==============
*/

bool __fastcall bdReliableSendWindow::add(bdReliableSendWindow *this, bdReference<bdDataChunk> chunk)
{
  return ?add@bdReliableSendWindow@@QEAA_NV?$bdReference@VbdDataChunk@@@@@Z(this, chunk);
}

/*
==============
add
==============
*/
void add(const hkMpRational *rat0, const hkMpRational *rat1, hkMpRational *ratOut)
{
  sum(rat0, rat0->m_signed, rat1, rat1->m_signed, ratOut);
}

/*
==============
add
==============
*/
void add(const hkMpUint *bi0, const hkMpUint *bi1, hkMpUint *biOut)
{
  const hkMpUint *v3; 
  bool v5; 
  int m_size; 
  hkMpUint *p_p; 
  __int64 v8; 
  unsigned int *v9; 
  hkMemoryAllocator *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int *v16; 
  __int64 v17; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned int *m_data; 
  hkMemoryAllocator *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  char *v28; 
  __int64 v29; 
  signed __int64 v30; 
  const hkMpUint *v31; 
  int v32; 
  bool v33; 
  int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int v41; 
  char v42; 
  bool v43; 
  __int64 v44; 
  unsigned int v45; 
  __int64 v46; 
  __int64 v47; 
  unsigned int *v48; 
  hkMemoryAllocator *v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  unsigned int *v55; 
  __int64 v56; 
  signed __int64 v57; 
  hkMemoryAllocator *v58; 
  void *p; 
  int v60; 
  int v61; 

  v3 = bi0;
  p = NULL;
  v60 = 0;
  v61 = 0x80000000;
  v5 = biOut == bi0 || biOut == bi1;
  m_size = bi0->m_atoms.m_size;
  p_p = (hkMpUint *)&p;
  if ( !v5 )
    p_p = biOut;
  if ( m_size )
  {
    v19 = bi1->m_atoms.m_size;
    if ( v19 )
    {
      v31 = bi1;
      v32 = 0;
      if ( m_size > v19 )
        v31 = v3;
      if ( m_size > v19 )
        v3 = bi1;
      v33 = 0;
      v34 = v31->m_atoms.m_size + 1;
      v35 = hkMemHeapAllocator();
      v36 = p_p->m_atoms.m_capacityAndFlags & 0x3FFFFFFF;
      if ( v36 < v34 )
      {
        v37 = 2 * v36;
        v38 = v34;
        if ( (unsigned int)v37 >= 0x3FFFFFFF )
          v37 = 1073741822;
        if ( v34 < v37 )
          v38 = v37;
        hkArrayUtil::_reserve(v35, p_p, v38, 4);
      }
      p_p->m_atoms.m_size = v34;
      if ( v3->m_atoms.m_size <= 0 )
        goto LABEL_50;
      v39 = 0i64;
      do
      {
        v40 = v31->m_atoms.m_data[v39];
        v41 = v40 + v3->m_atoms.m_data[v39];
        v42 = v41 < v40;
        if ( v33 )
        {
          v43 = v41++ == -1;
          v42 |= v43;
        }
        ++v32;
        v33 = v42;
        p_p->m_atoms.m_data[v39++] = v41;
      }
      while ( v32 < v3->m_atoms.m_size );
      if ( v42 )
      {
        v44 = v32;
        while ( v32 < v31->m_atoms.m_size )
        {
          v45 = v31->m_atoms.m_data[v44];
          v43 = v45++ == -1;
          v33 = v43;
          ++v32;
          p_p->m_atoms.m_data[v44++] = v45;
          if ( v45 )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        if ( v32 < v31->m_atoms.m_size )
        {
          v46 = v32;
          do
          {
            ++v46;
            ++v32;
            p_p->m_atoms.m_data[v46 - 1] = v31->m_atoms.m_data[v46 - 1];
          }
          while ( v32 < v31->m_atoms.m_size );
        }
      }
      if ( v33 )
        p_p->m_atoms.m_data[v32] = 1;
      else
        --p_p->m_atoms.m_size;
    }
    else if ( p_p != bi1 )
    {
      p_p->m_atoms.m_size = 0;
      v20 = bi1->m_atoms.m_size;
      m_data = bi1->m_atoms.m_data;
      v22 = hkMemHeapAllocator();
      v23 = p_p->m_atoms.m_size;
      v24 = p_p->m_atoms.m_capacityAndFlags & 0x3FFFFFFF;
      v25 = v20 + v23;
      if ( (int)v20 + v23 > v24 )
      {
        v26 = 2 * v24;
        v27 = v20 + v23;
        if ( (unsigned int)v26 >= 0x3FFFFFFF )
          v26 = 1073741822;
        if ( v25 < v26 )
          v27 = v26;
        hkArrayUtil::_reserve(v22, p_p, v27, 4);
        v23 = p_p->m_atoms.m_size;
      }
      v28 = (char *)&p_p->m_atoms.m_data[v23];
      v29 = v20;
      if ( (int)v20 > 0 )
      {
        v30 = (char *)m_data - v28;
        do
        {
          *(_DWORD *)v28 = *(_DWORD *)&v28[v30];
          v28 += 4;
          --v29;
        }
        while ( v29 );
      }
      p_p->m_atoms.m_size = v25;
    }
  }
  else if ( p_p != v3 )
  {
    p_p->m_atoms.m_size = 0;
    v8 = v3->m_atoms.m_size;
    v9 = v3->m_atoms.m_data;
    v10 = hkMemHeapAllocator();
    v11 = p_p->m_atoms.m_size;
    v12 = p_p->m_atoms.m_capacityAndFlags & 0x3FFFFFFF;
    v13 = v11 + v8;
    if ( v11 + (int)v8 > v12 )
    {
      v14 = 2 * v12;
      v15 = v11 + v8;
      if ( (unsigned int)v14 >= 0x3FFFFFFF )
        v14 = 1073741822;
      if ( v13 < v14 )
        v15 = v14;
      hkArrayUtil::_reserve(v10, p_p, v15, 4);
      v11 = p_p->m_atoms.m_size;
    }
    v16 = &p_p->m_atoms.m_data[v11];
    v17 = v8;
    if ( (int)v8 > 0 )
    {
      v18 = (char *)v9 - (char *)v16;
      do
      {
        *v16 = *(unsigned int *)((char *)v16 + v18);
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    p_p->m_atoms.m_size = v13;
  }
  if ( v5 && biOut != p_p )
  {
    biOut->m_atoms.m_size = 0;
    v47 = p_p->m_atoms.m_size;
    v48 = p_p->m_atoms.m_data;
    v49 = hkMemHeapAllocator();
    v50 = biOut->m_atoms.m_size;
    v51 = biOut->m_atoms.m_capacityAndFlags & 0x3FFFFFFF;
    v52 = v50 + v47;
    if ( v50 + (int)v47 > v51 )
    {
      v53 = 2 * v51;
      v54 = v50 + v47;
      if ( (unsigned int)v53 >= 0x3FFFFFFF )
        v53 = 1073741822;
      if ( v52 < v53 )
        v54 = v53;
      hkArrayUtil::_reserve(v49, biOut, v54, 4);
      v50 = biOut->m_atoms.m_size;
    }
    v55 = &biOut->m_atoms.m_data[v50];
    v56 = v47;
    if ( (int)v47 > 0 )
    {
      v57 = (char *)v48 - (char *)v55;
      do
      {
        *v55 = *(unsigned int *)((char *)v55 + v57);
        ++v55;
        --v56;
      }
      while ( v56 );
    }
    biOut->m_atoms.m_size = v52;
  }
  v58 = hkMemHeapAllocator();
  v60 = 0;
  if ( v61 >= 0 )
    hkMemoryAllocator::bufFree2(v58, p, 4, v61 & 0x3FFFFFFF);
}

/*
==============
add
==============
*/
__int64 add(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_add((mp_int *)a, (mp_int *)b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
bdReliableSendWindow::bdReliableSendWindow
==============
*/
void bdReliableSendWindow::bdReliableSendWindow(bdReliableSendWindow *this)
{
  bdSequenceNumber::bdSequenceNumber(&this->m_lastAcked, -1);
  bdSequenceNumber::bdSequenceNumber(&this->m_nextFree, 0);
  `eh vector constructor iterator'(this->m_frame, 0x18ui64, 0x80ui64, (void (__fastcall *)(void *))bdReliableSendWindow::bdMessageFrame::bdMessageFrame, (void (__fastcall *)(void *))bdReliableSendWindow::bdMessageFrame::~bdMessageFrame);
  this->m_remoteReceiveWindowCredit = 15000i64;
  this->m_flightSize = 0i64;
  this->m_partialBytesAcked = 0i64;
  this->m_slowStartThresh = 15000i64;
  this->m_congestionWindow = 2576i64;
  bdStopwatch::bdStopwatch(&this->m_lastSent);
  this->m_timeoutPeriod = 0.30000001;
  this->m_retransmitCountThreshold = 3;
  bdStopwatch::start(&this->m_lastSent);
}

/*
==============
bdReliableSendWindow::~bdReliableSendWindow
==============
*/
void bdReliableSendWindow::~bdReliableSendWindow(bdReliableSendWindow *this)
{
  `eh vector destructor iterator'(this->m_frame, 0x18ui64, 0x80ui64, (void (__fastcall *)(void *))bdReliableSendWindow::bdMessageFrame::~bdMessageFrame);
}

/*
==============
bdReliableSendWindow::add
==============
*/
__int64 bdReliableSendWindow::add(bdReliableSendWindow *this, bdReference<bdDataChunk> chunk)
{
  unsigned __int8 v3; 
  bdSequenceNumber *p_m_nextFree; 
  bdReliableSendWindow::bdMessageFrame *v5; 
  unsigned __int16 Value; 
  bdDataChunk_vtbl *v7; 
  volatile signed __int32 *v8; 
  bdDataChunk_vtbl *v10; 
  bdStopwatch v11; 
  __int16 v12; 
  bool v13; 
  bdSequenceNumber result; 
  bdDataChunk *m_ptr; 
  bdDataChunk_vtbl *v16; 
  __int64 *v17; 

  m_ptr = chunk.m_ptr;
  v3 = 0;
  p_m_nextFree = &this->m_nextFree;
  v5 = &this->m_frame[bdSequenceNumber::getValue(&this->m_nextFree) & 0x7F];
  if ( v5->m_chunk.m_ptr )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::add", 0x3Eu, "reliable message window is full.");
    goto LABEL_25;
  }
  Value = bdSequenceNumber::getValue(p_m_nextFree);
  bdDataChunk::setSequenceNumber((bdDataChunk *)chunk.m_ptr->__vftable, Value);
  v7 = chunk.m_ptr->__vftable;
  v16 = v7;
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->getType, 1u);
    v7 = v16;
  }
  v17 = (__int64 *)&v16;
  v10 = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->getType, 1u);
  bdStopwatch::bdStopwatch(&v11);
  v12 = 0;
  v13 = 0;
  if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)&v16->getType, 0xFFFFFFFF) == 1 )
  {
    if ( v16 )
      (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))v16->~bdReferencable)(v16, 1i64);
    v16 = NULL;
  }
  if ( &v10 != (bdDataChunk_vtbl **)v5 )
  {
    if ( v5->m_chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v5->m_chunk.m_ptr )
      ((void (__fastcall *)(bdDataChunk *, __int64))v5->m_chunk.m_ptr->~bdReferencable)(v5->m_chunk.m_ptr, 1i64);
    v8 = (volatile signed __int32 *)v10;
    v5->m_chunk.m_ptr = (bdDataChunk *)v10;
    if ( !v8 )
      goto LABEL_19;
    _InterlockedExchangeAdd(v8 + 2, 1u);
  }
  v8 = (volatile signed __int32 *)v10;
LABEL_19:
  v5->m_timer = v11;
  *(_WORD *)&v5->m_sendCount = v12;
  v5->m_gapAcked = v13;
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 && v10 )
    (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))v10->~bdReferencable)(v10, 1i64);
  bdSequenceNumber::operator++(p_m_nextFree, &result, 0);
  v3 = 1;
LABEL_25:
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return v3;
}

/*
==============
bdReliableSendWindow::decreaseCongestionWindow
==============
*/
void bdReliableSendWindow::decreaseCongestionWindow(bdReliableSendWindow *this, const bdReliableSendWindow::bdCongestionWindowDecreaseReason reason)
{
  __int32 v2; 
  __int64 m_congestionWindow; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( reason )
  {
    v2 = reason - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        m_congestionWindow = this->m_congestionWindow;
        if ( m_congestionWindow < 10306 )
          v4 = 5152i64;
        else
          v4 = m_congestionWindow / 2;
        this->m_congestionWindow = v4;
        this->m_flightSize = 0i64;
        this->m_partialBytesAcked = 0i64;
      }
    }
    else
    {
      v5 = this->m_congestionWindow;
      this->m_congestionWindow = 1288i64;
      if ( v5 < 5154 )
        this->m_slowStartThresh = 2576i64;
      else
        this->m_slowStartThresh = v5 / 2;
      this->m_partialBytesAcked = 0i64;
    }
  }
  else
  {
    v6 = this->m_congestionWindow;
    if ( v6 < 5154 )
      v7 = 2576i64;
    else
      v7 = v6 / 2;
    this->m_congestionWindow = v7;
    this->m_slowStartThresh = v7;
    this->m_partialBytesAcked = 0i64;
  }
}

/*
==============
bdReliableSendWindow::getDataToSend
==============
*/
void bdReliableSendWindow::getDataToSend(bdReliableSendWindow *this, bdPacket *packet)
{
  bdPacket *v3; 
  char v5; 
  char v6; 
  __int64 v7; 
  __int64 v8; 
  bdDataChunk *m_ptr; 
  unsigned __int16 SequenceNumber; 
  int Value; 
  bdDataChunk *v12; 
  __int64 v13; 
  char v14; 
  char v15; 
  __int64 v16; 
  __int64 m_congestionWindow; 
  __int64 v18; 
  __int64 v19; 
  char v23; 
  __int64 v24; 
  __int64 v25; 
  bdDataChunk *v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 m_flightSize; 
  __int64 v30; 
  bool v31; 
  char v32; 
  bdDataChunk *v33; 
  bdStopwatch *p_m_timer; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  bdDataChunk *v38; 
  bdSequenceNumber other; 
  bdSequenceNumber v40; 
  bdSequenceNumber v41; 
  bdReference<bdChunk> chunk; 
  bdReference<bdChunk> v43; 
  bdReference<bdChunk> v44; 
  bdReference<bdChunk> v45; 
  bdSequenceNumber v46; 
  bdSequenceNumber v47; 
  __int64 v48; 
  char v49; 
  bdSequenceNumber result; 
  bdSequenceNumber v52; 

  v48 = -2i64;
  v3 = packet;
  _RSI = this;
  v5 = 0;
  v6 = 0;
  v49 = 0;
  bdSequenceNumber::bdSequenceNumber(&other, 1);
  bdSequenceNumber::operator+(&_RSI->m_lastAcked, &result, &other);
  if ( bdSequenceNumber::operator<(&result, &_RSI->m_nextFree) )
  {
    while ( 1 )
    {
      v7 = bdSequenceNumber::getValue(&result) & 0x7F;
      v8 = v7;
      m_ptr = _RSI->m_frame[v7].m_chunk.m_ptr;
      if ( !m_ptr )
        goto LABEL_12;
      SequenceNumber = bdDataChunk::getSequenceNumber(m_ptr);
      bdSequenceNumber::bdSequenceNumber(&v40, &_RSI->m_lastAcked, SequenceNumber, 0x10u);
      Value = bdSequenceNumber::getValue(&v40);
      if ( Value != bdSequenceNumber::getValue(&result) )
        bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0x5Au, "Window error");
      v12 = _RSI->m_frame[v8].m_chunk.m_ptr;
      if ( !v12 )
        goto LABEL_12;
      v13 = (int)v12->getSerializedSize(v12);
      if ( !_RSI->m_frame[v8].m_sendCount )
        goto LABEL_13;
      if ( _RSI->m_frame[v8].m_missingCount >= _RSI->m_retransmitCountThreshold )
        break;
      *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RSI->m_frame[v8].m_timer);
      __asm { vcomiss xmm0, dword ptr [rsi+8] }
      if ( !(v14 | v15) )
      {
        v5 = 1;
        goto LABEL_11;
      }
LABEL_12:
      bdSequenceNumber::operator++(&result, &v46, 0);
      if ( !bdSequenceNumber::operator<(&result, &_RSI->m_nextFree) )
      {
LABEL_13:
        v16 = 2576i64;
        v3 = packet;
        if ( v6 )
        {
          m_congestionWindow = _RSI->m_congestionWindow;
          if ( m_congestionWindow < 5154 )
            v18 = 2576i64;
          else
            v18 = m_congestionWindow / 2;
          _RSI->m_slowStartThresh = v18;
          _RSI->m_congestionWindow = v18;
          _RSI->m_partialBytesAcked = 0i64;
        }
        if ( v5 )
        {
          v19 = _RSI->m_congestionWindow;
          if ( v19 >= 5154 )
            v16 = v19 / 2;
          _RSI->m_slowStartThresh = v16;
          _RSI->m_congestionWindow = 1288i64;
          _RSI->m_partialBytesAcked = 0i64;
          __asm
          {
            vmovss  xmm2, cs:__real@40000000
            vmulss  xmm1, xmm2, dword ptr [rsi+8]
            vcmpltss xmm0, xmm2, xmm1
            vblendvps xmm0, xmm1, xmm2, xmm0
            vmovss  dword ptr [rsi+8], xmm0
          }
        }
        goto LABEL_22;
      }
    }
    v6 = 1;
LABEL_11:
    _RSI->m_flightSize -= v13;
    goto LABEL_12;
  }
LABEL_22:
  v23 = 0;
  bdSequenceNumber::bdSequenceNumber(&v41, 1);
  bdSequenceNumber::operator+(&_RSI->m_lastAcked, &v52, &v41);
  if ( !bdSequenceNumber::operator<(&v52, &_RSI->m_nextFree) )
    goto LABEL_56;
  while ( !v23 )
  {
    v24 = bdSequenceNumber::getValue(&v52) & 0x7F;
    v25 = v24;
    v26 = _RSI->m_frame[v24].m_chunk.m_ptr;
    if ( v26 )
    {
      v38 = _RSI->m_frame[v24].m_chunk.m_ptr;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
      if ( _RSI->m_frame[v24].m_sendCount )
      {
        if ( _RSI->m_frame[v24].m_missingCount < _RSI->m_retransmitCountThreshold )
        {
          *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RSI->m_frame[v24].m_timer);
          __asm { vcomiss xmm0, dword ptr [rsi+8] }
          if ( v14 | v15 || _RSI->m_flightSize >= _RSI->m_congestionWindow )
            goto LABEL_48;
          v45.m_ptr = v38;
          _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
          if ( !bdPacket::addChunk(v3, (bdReference<bdChunk>)&v45) )
          {
            bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0x11Eu, "packet full.");
            goto LABEL_47;
          }
          v33 = v38;
          LODWORD(v37) = bdDataChunk::getSequenceNumber(v38);
          bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0x113u, "sent retransmit (rto timeout) %u", v37);
          p_m_timer = &_RSI->m_frame[v25].m_timer;
        }
        else
        {
          v44.m_ptr = v38;
          _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
          if ( !bdPacket::addChunk(v3, (bdReference<bdChunk>)&v44) )
          {
            bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0x105u, "packet full.");
            goto LABEL_47;
          }
          v33 = v38;
          LODWORD(v37) = bdDataChunk::getSequenceNumber(v38);
          bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0xFAu, "sent retransmit (fast retransmit) %u", v37);
          p_m_timer = &_RSI->m_frame[v25].m_timer;
        }
        ++_RSI->m_frame[v25].m_sendCount;
        _RSI->m_frame[v25].m_missingCount = 0;
        bdStopwatch::start(p_m_timer);
        _RSI->m_flightSize += v33->getSerializedSize(v33);
        v32 = 1;
        v49 = 1;
      }
      else
      {
        v27 = v38->getSerializedSize(v38);
        v28 = v38->getSerializedSize(v38);
        m_flightSize = _RSI->m_flightSize;
        v30 = _RSI->m_remoteReceiveWindowCredit - m_flightSize;
        v31 = m_flightSize < _RSI->m_congestionWindow && (unsigned int)v27 < 0x508;
        if ( v30 <= v28 )
        {
          if ( v31 )
          {
            v43.m_ptr = v38;
            _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
            if ( bdPacket::addChunk(v3, (bdReference<bdChunk>)&v43) )
            {
              LODWORD(v37) = bdDataChunk::getSequenceNumber(v38);
              bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0xDFu, "sent 1 new packet %u (rule b)", v37);
              ++_RSI->m_frame[v25].m_sendCount;
              bdStopwatch::start(&_RSI->m_frame[v25].m_timer);
              _RSI->m_flightSize += v27;
              v49 = 1;
            }
            else
            {
              bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0xEAu, "packet full.");
            }
          }
        }
        else
        {
          chunk.m_ptr = v38;
          _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 1u);
          if ( bdPacket::addChunk(v3, (bdReference<bdChunk>)&chunk) )
          {
            ++_RSI->m_frame[v25].m_sendCount;
            bdStopwatch::start(&_RSI->m_frame[v25].m_timer);
            _RSI->m_flightSize += v27;
            v32 = 1;
            v49 = 1;
            goto LABEL_49;
          }
          bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::getDataToSend", 0xD4u, "packet full.");
        }
LABEL_47:
        v23 = 1;
LABEL_48:
        v32 = v49;
      }
LABEL_49:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChunk *, __int64))v38->~bdReferencable)(v38, 1i64);
      goto LABEL_52;
    }
    v32 = v49;
LABEL_52:
    bdSequenceNumber::operator++(&v52, &v47, 0);
    if ( !bdSequenceNumber::operator<(&v52, &_RSI->m_nextFree) )
      goto LABEL_55;
  }
  v32 = v49;
LABEL_55:
  if ( v32 )
  {
LABEL_61:
    bdStopwatch::start(&_RSI->m_lastSent);
  }
  else
  {
LABEL_56:
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_RSI->m_lastSent);
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v14 | v15) )
    {
      v35 = _RSI->m_congestionWindow;
      if ( v35 < 10306 )
        v36 = 5152i64;
      else
        v36 = v35 / 2;
      _RSI->m_congestionWindow = v36;
      _RSI->m_partialBytesAcked = 0i64;
      _RSI->m_flightSize = 0i64;
      goto LABEL_61;
    }
  }
}

/*
==============
bdReliableSendWindow::getTimeoutPeriod
==============
*/
float bdReliableSendWindow::getTimeoutPeriod(bdReliableSendWindow *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+8] }
  return *(float *)&_XMM0;
}

/*
==============
bdReliableSendWindow::handleAck
==============
*/
__int64 bdReliableSendWindow::handleAck(bdReliableSendWindow *this, bdReference<bdSAckChunk> chunk, float *rtt)
{
  bdSAckChunk **v7; 
  unsigned __int16 CumulativeAck; 
  unsigned __int8 v10; 
  int Value; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  bdDataChunk *v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  bdDataChunk *v19; 
  bdDataChunk *v20; 
  bdDataChunk *v21; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock> *GapList; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_head; 
  __int64 v25; 
  __int64 v26; 
  bdStopwatch *p_m_timer; 
  char v28; 
  int *v29; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v30; 
  __int64 m_congestionWindow; 
  __int64 v32; 
  __int64 m_partialBytesAcked; 
  __int64 v34; 
  __int64 v35; 
  bdSequenceNumber v37; 
  bdSequenceNumber v38; 
  bdSequenceNumber v39; 
  bdSequenceNumber v40; 
  bdSequenceNumber other; 
  bdSequenceNumber result; 
  bdSequenceNumber v43; 
  bdSequenceNumber v44; 
  bdSequenceNumber v45; 
  bdSequenceNumber v46; 
  bdSequenceNumber v47; 
  bdSequenceNumber v48; 
  bdSequenceNumber v49; 
  bdSequenceNumber v50; 
  bdSequenceNumber v51; 
  bdSequenceNumber v52; 
  bdSequenceNumber v53; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock> *v54; 
  __int64 v55; 
  void *retaddr; 
  bdSequenceNumber v58; 
  bdSAckChunk *m_ptr; 
  bdSequenceNumber v60; 

  _RAX = &retaddr;
  m_ptr = chunk.m_ptr;
  v55 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RSI = rtt;
  v7 = (bdSAckChunk **)chunk.m_ptr;
  CumulativeAck = bdSAckChunk::getCumulativeAck((bdSAckChunk *)chunk.m_ptr->__vftable);
  bdSequenceNumber::bdSequenceNumber(&v58, &this->m_lastAcked, CumulativeAck, 0x10u);
  v10 = 1;
  bdSequenceNumber::bdSequenceNumber(&other, 1);
  bdSequenceNumber::operator-(&this->m_nextFree, &result, &other);
  if ( bdSequenceNumber::operator>(&v58, &result) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::handleAck", 0x145u, "Acking unsent chunk.");
    v10 = 0;
  }
  else
  {
    Value = bdSequenceNumber::getValue(&this->m_lastAcked);
    if ( bdSequenceNumber::getValue(&v58) >= Value )
    {
      v12 = bdSequenceNumber::getValue(&v58) & 0x8000007F;
      if ( (int)v12 < 0 )
        v12 = ((unsigned __int8)(v12 - 1) | 0xFFFFFF80) + 1;
      if ( this->m_frame[v12].m_chunk.m_ptr && this->m_frame[v12].m_sendCount == 1 )
      {
        *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_frame[v12].m_timer);
        __asm { vmovss  dword ptr [rsi], xmm0 }
      }
      else
      {
        *_RSI = 0.0;
      }
      this->m_remoteReceiveWindowCredit = bdSAckChunk::getWindowCredit(*v7);
      this->m_flightSize = 0i64;
      v13 = 0;
      bdSequenceNumber::bdSequenceNumber(&v43, 1);
      bdSequenceNumber::operator+(&v58, &v39, &v43);
      do
      {
        v14 = bdSequenceNumber::getValue(&v39) & 0x7F;
        v15 = this->m_frame[v14].m_chunk.m_ptr;
        if ( !v15 )
          break;
        this->m_flightSize += this->m_frame[v14].m_sendCount * v15->getSerializedSize(v15);
        ++v13;
        bdSequenceNumber::operator++(&v39, &v50, 0);
      }
      while ( v13 < 0x80 );
      v16 = 0;
      bdSequenceNumber::bdSequenceNumber(&v44, 1);
      bdSequenceNumber::operator+(&this->m_lastAcked, &v37, &v44);
      if ( bdSequenceNumber::operator<=(&v37, &v58) )
      {
        do
        {
          v17 = bdSequenceNumber::getValue(&v37) & 0x7F;
          v18 = v17;
          v19 = this->m_frame[v17].m_chunk.m_ptr;
          if ( v19 )
          {
            v16 += v19->getSerializedSize(v19);
            v20 = this->m_frame[v18].m_chunk.m_ptr;
            if ( v20 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 )
              {
                v21 = this->m_frame[v18].m_chunk.m_ptr;
                if ( v21 )
                  ((void (__fastcall *)(bdDataChunk *, __int64))v21->~bdReferencable)(v21, 1i64);
              }
            }
            this->m_frame[v18].m_chunk.m_ptr = NULL;
            bdStopwatch::reset(&this->m_frame[v18].m_timer);
          }
          else
          {
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::handleAck", 0x18Au, "Invalid ack.");
            v10 = 0;
          }
          bdSequenceNumber::operator++(&v37, &v51, 0);
        }
        while ( bdSequenceNumber::operator<=(&v37, &v58) );
        v7 = (bdSAckChunk **)m_ptr;
      }
      GapList = bdSAckChunk::getGapList(*v7);
      v54 = GapList;
      bdSequenceNumber::bdSequenceNumber(&v45, 1);
      bdSequenceNumber::operator+(&v58, &v40, &v45);
      if ( v10 )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
        do
        {
          if ( !GapList->m_size )
            break;
          bdHandleAssert(GapList->m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdSAckChunk::bdGapAckBlock>::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
          m_head = GapList->m_head;
          bdSequenceNumber::bdSequenceNumber(&v46, GapList->m_head->m_data.m_start);
          bdSequenceNumber::operator+(&v58, &v48, &v46);
          bdSequenceNumber::bdSequenceNumber(&v47, m_head->m_data.m_end);
          bdSequenceNumber::operator+(&v58, &v38, &v47);
          v60.m_seqNum = v40.m_seqNum;
          if ( bdSequenceNumber::operator<=(&v60, &v38) )
          {
            do
            {
              v25 = bdSequenceNumber::getValue(&v60) & 0x7F;
              v26 = v25;
              if ( !this->m_frame[v25].m_chunk.m_ptr )
              {
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::handleAck", 0x19Fu, "Shouldn't be null!");
                v10 = 0;
              }
              if ( !this->m_frame[v26].m_sendCount )
              {
                bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/windows", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdreliablesendwindow.cpp", "bdReliableSendWindow::handleAck", 0x1A6u, "Send count should be > 0");
                v10 = 0;
              }
              if ( bdSequenceNumber::operator<(&v60, &v48) )
              {
                ++this->m_frame[v26].m_missingCount;
                if ( this->m_frame[v26].m_gapAcked )
                {
                  this->m_frame[v26].m_gapAcked = 0;
                  p_m_timer = &this->m_frame[v26].m_timer;
                  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(p_m_timer);
                  __asm { vucomiss xmm0, xmm6 }
                  if ( v28 )
                    bdStopwatch::start(p_m_timer);
                }
              }
              else
              {
                this->m_frame[v26].m_gapAcked = 1;
                bdStopwatch::start(&this->m_frame[v26].m_timer);
                v16 += this->m_frame[v26].m_chunk.m_ptr->getSerializedSize(this->m_frame[v26].m_chunk.m_ptr);
              }
              bdSequenceNumber::operator++(&v60, &v52, 0);
            }
            while ( bdSequenceNumber::operator<=(&v60, &v38) );
            GapList = v54;
          }
          bdSequenceNumber::bdSequenceNumber(&v49, 1);
          v40.m_seqNum = bdSequenceNumber::operator+(&v38, &v53, &v49)->m_seqNum;
          v29 = (int *)GapList->m_head;
          if ( GapList->m_head )
          {
            GapList->m_head = (bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *)*((_QWORD *)v29 + 1);
            v30 = (bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *)*((_QWORD *)v29 + 2);
            if ( v29 == (int *)GapList->m_tail )
              GapList->m_tail = v30;
            else
              *(_QWORD *)(*((_QWORD *)v29 + 1) + 16i64) = v30;
            bdMemory::deallocate(v29);
            --GapList->m_size;
          }
        }
        while ( v10 );
        v7 = (bdSAckChunk **)m_ptr;
      }
      m_congestionWindow = this->m_congestionWindow;
      if ( this->m_flightSize >= m_congestionWindow )
      {
        if ( m_congestionWindow > this->m_slowStartThresh )
        {
          this->m_partialBytesAcked += v16;
          m_partialBytesAcked = this->m_partialBytesAcked;
          if ( m_partialBytesAcked >= m_congestionWindow )
          {
            v34 = m_congestionWindow + 1288;
            this->m_congestionWindow = v34;
            if ( v34 >= m_partialBytesAcked )
              this->m_partialBytesAcked = 0i64;
            else
              this->m_partialBytesAcked = m_partialBytesAcked - v34;
          }
        }
        else
        {
          if ( v16 <= 0x508ui64 )
            v32 = v16 + m_congestionWindow;
          else
            v32 = m_congestionWindow + 1288;
          this->m_congestionWindow = v32;
        }
      }
      this->m_lastAcked = v58;
    }
  }
  if ( *v7 && _InterlockedExchangeAdd((volatile signed __int32 *)&(*v7)->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( *v7 )
      ((void (__fastcall *)(bdSAckChunk *, __int64))(*v7)->~bdReferencable)(*v7, 1i64);
    *v7 = NULL;
  }
  v35 = v10;
  __asm { vmovaps xmm6, xmmword ptr [rsp+0E0h+var_48+8] }
  return v35;
}

/*
==============
bdReliableSendWindow::increaseCongestionWindow
==============
*/
void bdReliableSendWindow::increaseCongestionWindow(bdReliableSendWindow *this, const unsigned __int64 bytesAcked)
{
  __int64 m_congestionWindow; 
  unsigned __int64 v3; 
  __int64 m_partialBytesAcked; 
  __int64 v5; 

  m_congestionWindow = this->m_congestionWindow;
  if ( this->m_flightSize >= m_congestionWindow )
  {
    if ( m_congestionWindow > this->m_slowStartThresh )
    {
      this->m_partialBytesAcked += bytesAcked;
      m_partialBytesAcked = this->m_partialBytesAcked;
      if ( m_partialBytesAcked >= m_congestionWindow )
      {
        v5 = m_congestionWindow + 1288;
        this->m_congestionWindow = v5;
        if ( v5 >= m_partialBytesAcked )
          this->m_partialBytesAcked = 0i64;
        else
          this->m_partialBytesAcked = m_partialBytesAcked - v5;
      }
    }
    else
    {
      v3 = 1288i64;
      if ( bytesAcked <= 0x508 )
        v3 = bytesAcked;
      this->m_congestionWindow = m_congestionWindow + v3;
    }
  }
}

/*
==============
bdReliableSendWindow::isEmpty
==============
*/
__int64 bdReliableSendWindow::isEmpty(bdReliableSendWindow *this)
{
  unsigned __int8 v2; 
  bdDataChunk *m_ptr; 
  unsigned __int8 v4; 
  bdSequenceNumber v6; 
  bdSequenceNumber result; 

  v6.m_seqNum = this->m_lastAcked.m_seqNum;
  v2 = 1;
  if ( !bdSequenceNumber::operator<(&v6, &this->m_nextFree) )
    return 1i64;
  do
  {
    if ( !v2 )
      break;
    m_ptr = this->m_frame[bdSequenceNumber::getValue(&v6) & 0x7F].m_chunk.m_ptr;
    bdSequenceNumber::operator++(&v6, &result, 0);
    v4 = 0;
    if ( !m_ptr )
      v4 = v2;
    v2 = v4;
  }
  while ( bdSequenceNumber::operator<(&v6, &this->m_nextFree) );
  return v2;
}

/*
==============
bdReliableSendWindow::setTimeoutPeriod
==============
*/

void __fastcall bdReliableSendWindow::setTimeoutPeriod(bdReliableSendWindow *this, double secs)
{
  __asm { vmovss  dword ptr [rcx+8], xmm1 }
}

