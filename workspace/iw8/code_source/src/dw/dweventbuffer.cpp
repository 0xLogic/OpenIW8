/*
==============
dwEventBuffer::Reset
==============
*/

void __fastcall dwEventBuffer::Reset(dwEventBuffer *this)
{
  ?Reset@dwEventBuffer@@QEAAXXZ(this);
}

/*
==============
dwEventBuffer::Flush
==============
*/

int __fastcall dwEventBuffer::Flush(dwEventBuffer *this, const int controllerIndex)
{
  return ?Flush@dwEventBuffer@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
dwEventBuffer::dwEventBuffer
==============
*/

void __fastcall dwEventBuffer::dwEventBuffer(dwEventBuffer *this)
{
  ??0dwEventBuffer@@QEAA@XZ(this);
}

/*
==============
dwEventBuffer::GetActiveInfo
==============
*/

bdEventInfo *__fastcall dwEventBuffer::GetActiveInfo(dwEventBuffer *this)
{
  return ?GetActiveInfo@dwEventBuffer@@QEAAPEAVbdEventInfo@@XZ(this);
}

/*
==============
dwEventBuffer::CommitActiveInfo
==============
*/

void __fastcall dwEventBuffer::CommitActiveInfo(dwEventBuffer *this)
{
  ?CommitActiveInfo@dwEventBuffer@@QEAAXXZ(this);
}

/*
==============
dwEventBuffer::Init
==============
*/

void __fastcall dwEventBuffer::Init(dwEventBuffer *this, unsigned __int8 *buffer, const unsigned __int64 len, const unsigned __int8 eventCount)
{
  ?Init@dwEventBuffer@@QEAAXPEAE_KE@Z(this, buffer, len, eventCount);
}

/*
==============
dwEventBuffer::~dwEventBuffer
==============
*/

void __fastcall dwEventBuffer::~dwEventBuffer(dwEventBuffer *this)
{
  ??1dwEventBuffer@@QEAA@XZ(this);
}

/*
==============
dwEventBuffer::GetActiveInfo
==============
*/

const bdEventInfo *__fastcall dwEventBuffer::GetActiveInfo(dwEventBuffer *this)
{
  return ?GetActiveInfo@dwEventBuffer@@QEBAPEBVbdEventInfo@@XZ(this);
}

/*
==============
dwEventBuffer::dwEventBuffer
==============
*/
void dwEventBuffer::dwEventBuffer(dwEventBuffer *this)
{
  this->m_eventInfos = NULL;
  this->m_buffer = NULL;
  this->m_end = NULL;
  this->m_eventCount = 0;
}

/*
==============
dwEventBuffer::~dwEventBuffer
==============
*/
void dwEventBuffer::~dwEventBuffer(dwEventBuffer *this)
{
  bdEventInfo *m_eventInfos; 
  unsigned __int8 *i; 
  bdEventInfo_vtbl **v4; 

  m_eventInfos = this->m_eventInfos;
  if ( this->m_eventInfos )
  {
    for ( i = this->m_buffer; m_eventInfos != (bdEventInfo *)i; ++m_eventInfos )
    {
      v4 = (bdEventInfo_vtbl **)((char *)&m_eventInfos->__vftable + *(int *)(*((_QWORD *)&m_eventInfos->__vftable + 1) + 4i64) + 8);
      ((void (__fastcall *)(bdEventInfo_vtbl **, _QWORD))(*v4)->deserialize)(v4, 0i64);
    }
    this->m_eventInfos = NULL;
    this->m_buffer = NULL;
    this->m_end = NULL;
    this->m_eventCount = 0;
  }
}

/*
==============
dwEventBuffer::CommitActiveInfo
==============
*/
void dwEventBuffer::CommitActiveInfo(dwEventBuffer *this)
{
  unsigned __int8 *v2; 
  bdEventInfo *m_eventInfos; 
  unsigned __int8 v4; 
  unsigned __int8 *v5; 
  char v6; 
  unsigned __int8 *v7; 

  v2 = &this->m_eventInfos[this->m_eventCount].m_eventDesc[*(unsigned int *)&this->m_eventInfos[this->m_eventCount]._bytes_20[8]];
  if ( v2 >= this->m_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dweventbuffer.cpp", 36, ASSERT_TYPE_ASSERT, "(next < m_end)", (const char *)&queryFormat, "next < m_end") )
    __debugbreak();
  m_eventInfos = this->m_eventInfos;
  v4 = this->m_eventCount + 1;
  this->m_eventCount = v4;
  if ( m_eventInfos )
  {
    v5 = (unsigned __int8 *)&m_eventInfos[v4];
    if ( v5 && v5 < this->m_buffer )
    {
      v6 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v5 = NULL;
  }
  v6 = 0;
LABEL_10:
  v7 = NULL;
  if ( v6 )
    v7 = v5;
  if ( v7 )
  {
    v7[32] = 1;
    *((_DWORD *)v7 + 9) = 0;
    *((_QWORD *)v7 + 6) = v2;
    *((_DWORD *)v7 + 10) = LODWORD(this->m_end) - (_DWORD)v2;
  }
}

/*
==============
dwEventBuffer::Flush
==============
*/
_BOOL8 dwEventBuffer::Flush(dwEventBuffer *this, const int controllerIndex)
{
  char v2; 
  DWServicesAccess *Instance; 
  bool isReady; 
  bool v7; 
  DWServicesAccess *v8; 
  DWEventLog *EventLog; 
  bool v10; 
  bdReference<bdRemoteTask> result; 

  v2 = 0;
  LODWORD(result.m_ptr) = 0;
  Instance = DWServicesAccess::GetInstance();
  isReady = DWServicesAccess::isReady(Instance, controllerIndex);
  v7 = this->m_eventInfos && this->m_eventCount;
  v10 = 0;
  if ( isReady && v7 )
  {
    v8 = DWServicesAccess::GetInstance();
    EventLog = DWServicesAccess::GetEventLog(v8, controllerIndex);
    v2 = 1;
    if ( DWEventLog::recordEventsMixed(EventLog, &result, this->m_eventInfos, this->m_eventCount, NULL)->m_ptr )
      v10 = 1;
  }
  if ( (v2 & 1) != 0 && result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( v10 )
  {
    this->m_eventInfos->_bytes_20[0] = 1;
    *(_DWORD *)&this->m_eventInfos->_bytes_20[4] = 0;
    this->m_eventInfos->m_eventDesc = this->m_buffer;
    *(_DWORD *)&this->m_eventInfos->_bytes_20[8] = LODWORD(this->m_end) - LODWORD(this->m_buffer);
    this->m_eventCount = 0;
  }
  return v10;
}

/*
==============
dwEventBuffer::GetActiveInfo
==============
*/
bdEventInfo *dwEventBuffer::GetActiveInfo(dwEventBuffer *this)
{
  bdEventInfo *result; 

  if ( !this->m_eventInfos )
    return 0i64;
  result = &this->m_eventInfos[this->m_eventCount];
  if ( !result || (unsigned __int8 *)result >= this->m_buffer )
    return 0i64;
  return result;
}

/*
==============
dwEventBuffer::GetActiveInfo
==============
*/
bdEventInfo *dwEventBuffer::GetActiveInfo(dwEventBuffer *this)
{
  bdEventInfo *result; 

  if ( !this->m_eventInfos )
    return 0i64;
  result = &this->m_eventInfos[this->m_eventCount];
  if ( !result || (unsigned __int8 *)result >= this->m_buffer )
    return 0i64;
  return result;
}

/*
==============
dwEventBuffer::Init
==============
*/
void dwEventBuffer::Init(dwEventBuffer *this, unsigned __int8 *buffer, const unsigned __int64 len, const unsigned __int8 eventCount)
{
  bdEventInfo *m_eventInfos; 
  unsigned __int8 *i; 
  bdEventInfo_vtbl **v10; 
  unsigned __int8 *v11; 

  m_eventInfos = this->m_eventInfos;
  if ( this->m_eventInfos )
  {
    for ( i = this->m_buffer; m_eventInfos != (bdEventInfo *)i; ++m_eventInfos )
    {
      v10 = (bdEventInfo_vtbl **)((char *)&m_eventInfos->__vftable + *(int *)(*((_QWORD *)&m_eventInfos->__vftable + 1) + 4i64) + 8);
      ((void (__fastcall *)(bdEventInfo_vtbl **, _QWORD))(*v10)->deserialize)(v10, 0i64);
    }
    this->m_eventInfos = NULL;
    this->m_buffer = NULL;
    this->m_end = NULL;
    this->m_eventCount = 0;
  }
  if ( buffer )
  {
    this->m_eventInfos = (bdEventInfo *)buffer;
    v11 = &buffer[72 * eventCount];
    this->m_buffer = v11;
    this->m_end = &buffer[len];
    this->m_eventCount = 0;
    if ( buffer < v11 )
    {
      do
      {
        if ( buffer )
          bdEventInfo::bdEventInfo((bdEventInfo *)buffer);
        buffer += 72;
      }
      while ( buffer < this->m_buffer );
      buffer = (unsigned __int8 *)this->m_eventInfos;
    }
    buffer[32] = 1;
    *(_DWORD *)&this->m_eventInfos->_bytes_20[4] = 0;
    this->m_eventInfos->m_eventDesc = this->m_buffer;
    *(_DWORD *)&this->m_eventInfos->_bytes_20[8] = LODWORD(this->m_end) - LODWORD(this->m_buffer);
  }
}

/*
==============
dwEventBuffer::Reset
==============
*/
void dwEventBuffer::Reset(dwEventBuffer *this)
{
  this->m_eventCount = 0;
}

