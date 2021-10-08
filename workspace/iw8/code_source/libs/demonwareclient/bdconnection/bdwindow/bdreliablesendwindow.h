/*
==============
bdReliableSendWindow::bdMessageFrame::~bdMessageFrame
==============
*/

void __fastcall bdReliableSendWindow::bdMessageFrame::~bdMessageFrame(bdReliableSendWindow::bdMessageFrame *this)
{
  ??1bdMessageFrame@bdReliableSendWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableSendWindow::operator delete
==============
*/

void __fastcall bdReliableSendWindow::operator delete(void *p)
{
  ??3bdReliableSendWindow@@SAXPEAX@Z(p);
}

/*
==============
bdReliableSendWindow::bdMessageFrame::bdMessageFrame
==============
*/

void __fastcall bdReliableSendWindow::bdMessageFrame::bdMessageFrame(bdReliableSendWindow::bdMessageFrame *this)
{
  ??0bdMessageFrame@bdReliableSendWindow@@QEAA@XZ(this);
}

/*
==============
bdReliableSendWindow::operator delete
==============
*/
void bdReliableSendWindow::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdReliableSendWindow::bdMessageFrame::bdMessageFrame
==============
*/
void bdReliableSendWindow::bdMessageFrame::bdMessageFrame(bdReliableSendWindow::bdMessageFrame *this)
{
  this->m_chunk.m_ptr = NULL;
  bdStopwatch::bdStopwatch(&this->m_timer);
  *(_WORD *)&this->m_sendCount = 0;
  this->m_gapAcked = 0;
}

/*
==============
bdReliableSendWindow::bdMessageFrame::~bdMessageFrame
==============
*/
void bdReliableSendWindow::bdMessageFrame::~bdMessageFrame(bdReliableSendWindow::bdMessageFrame *this)
{
  bdDataChunk *m_ptr; 

  m_ptr = this->m_chunk.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( this->m_chunk.m_ptr )
      ((void (__fastcall *)(bdDataChunk *, __int64))this->m_chunk.m_ptr->~bdReferencable)(this->m_chunk.m_ptr, 1i64);
    this->m_chunk.m_ptr = NULL;
  }
}

