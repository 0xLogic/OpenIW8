/*
==============
Online_VideoStreaming::SourceReaderCallback::OnEvent
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::OnEvent(Online_VideoStreaming::SourceReaderCallback *this, unsigned int __formal, IMFMediaEvent *a3)
{
  return ?OnEvent@SourceReaderCallback@Online_VideoStreaming@@UEAAJKPEAUIMFMediaEvent@@@Z(this, __formal, a3);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnSample
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::OnSample(Online_VideoStreaming::SourceReaderCallback *this, HRESULT result, unsigned int streamIndex, unsigned int streamFlags, __int64 timestamp, IMFSample *sample)
{
  return ?OnSample@SourceReaderCallback@Online_VideoStreaming@@AEAAJJKK_JPEAUIMFSample@@@Z(this, result, streamIndex, streamFlags, timestamp, sample);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnFlush
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::OnFlush(Online_VideoStreaming::SourceReaderCallback *this, unsigned int __formal)
{
  return ?OnFlush@SourceReaderCallback@Online_VideoStreaming@@UEAAJK@Z(this, __formal);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::~SourceReaderCallback
==============
*/

void __fastcall Online_VideoStreaming::SourceReaderCallback::~SourceReaderCallback(Online_VideoStreaming::SourceReaderCallback *this)
{
  ??1SourceReaderCallback@Online_VideoStreaming@@UEAA@XZ(this);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::AddRef
==============
*/

unsigned int __fastcall Online_VideoStreaming::SourceReaderCallback::AddRef(Online_VideoStreaming::SourceReaderCallback *this)
{
  return ?AddRef@SourceReaderCallback@Online_VideoStreaming@@UEAAKXZ(this);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnReadSample
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::OnReadSample(Online_VideoStreaming::SourceReaderCallback *this, HRESULT hrStatus, unsigned int dwStreamIndex, unsigned int dwStreamFlags, __int64 llTimestamp, IMFSample *pSample)
{
  return ?OnReadSample@SourceReaderCallback@Online_VideoStreaming@@UEAAJJKK_JPEAUIMFSample@@@Z(this, hrStatus, dwStreamIndex, dwStreamFlags, llTimestamp, pSample);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::Release
==============
*/

unsigned int __fastcall Online_VideoStreaming::SourceReaderCallback::Release(Online_VideoStreaming::SourceReaderCallback *this)
{
  return ?Release@SourceReaderCallback@Online_VideoStreaming@@UEAAKXZ(this);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::QueryInterface
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::QueryInterface(Online_VideoStreaming::SourceReaderCallback *this, const _GUID *iid, void **outInterface)
{
  return ?QueryInterface@SourceReaderCallback@Online_VideoStreaming@@UEAAJAEBU_GUID@@PEAPEAX@Z(this, iid, outInterface);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::~SourceReaderCallback
==============
*/
void Online_VideoStreaming::SourceReaderCallback::~SourceReaderCallback(Online_VideoStreaming::SourceReaderCallback *this)
{
  this->__vftable = (Online_VideoStreaming::SourceReaderCallback_vtbl *)&Online_VideoStreaming::SourceReaderCallback::`vftable';
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::AddRef
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::AddRef(Online_VideoStreaming::SourceReaderCallback *this)
{
  return (unsigned int)_InterlockedIncrement(&this->m_refCount);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnEvent
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::OnEvent(Online_VideoStreaming::SourceReaderCallback *this, unsigned int __formal, IMFMediaEvent *a3)
{
  return 0i64;
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnFlush
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::OnFlush(Online_VideoStreaming::SourceReaderCallback *this, unsigned int __formal)
{
  return 0i64;
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnReadSample
==============
*/

HRESULT __fastcall Online_VideoStreaming::SourceReaderCallback::OnReadSample(Online_VideoStreaming::SourceReaderCallback *this, HRESULT hrStatus, unsigned int dwStreamIndex, unsigned int dwStreamFlags, __int64 llTimestamp, IMFSample *pSample)
{
  return Online_VideoStreaming::SourceReaderCallback::OnSample(this, hrStatus, dwStreamIndex, dwStreamFlags, llTimestamp, pSample);
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::OnSample
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::OnSample(Online_VideoStreaming::SourceReaderCallback *this, HRESULT result, unsigned int streamIndex, unsigned int streamFlags, __int64 timestamp, IMFSample *sample)
{
  EnterCriticalSection(&this->m_critSec);
  if ( result < 0 )
  {
    Com_PrintError(25, "SourceReaderCallback::OnSample failes with error 0x%08x\n", (unsigned int)result);
  }
  else
  {
    this->m_sample = sample;
    if ( sample )
      sample->AddRef(sample);
    this->m_sampleTimestamp = timestamp;
    this->m_streamFlags = streamFlags;
    this->m_streamIndex = streamIndex;
  }
  this->m_result = result;
  LeaveCriticalSection(&this->m_critSec);
  SetEvent(this->m_eventHandle);
  return 0i64;
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::QueryInterface
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::QueryInterface(Online_VideoStreaming::SourceReaderCallback *this, const _GUID *iid, void **outInterface)
{
  if ( *(_QWORD *)&iid->Data1 == *(_QWORD *)&IID_IMFSourceReaderCallback.Data1 && *(_QWORD *)iid->Data4 == *(_QWORD *)IID_IMFSourceReaderCallback.Data4 || *(_QWORD *)&iid->Data1 == *(_QWORD *)&IID_IUnknown.Data1 && *(_QWORD *)iid->Data4 == *(_QWORD *)IID_IUnknown.Data4 )
  {
    if ( outInterface )
    {
      *outInterface = this;
      this->AddRef(this);
      return 0i64;
    }
    else
    {
      return 2147500035i64;
    }
  }
  else
  {
    *outInterface = NULL;
    return 2147500034i64;
  }
}

/*
==============
Online_VideoStreaming::SourceReaderCallback::Release
==============
*/
__int64 Online_VideoStreaming::SourceReaderCallback::Release(Online_VideoStreaming::SourceReaderCallback *this)
{
  return (unsigned int)_InterlockedDecrement(&this->m_refCount);
}

