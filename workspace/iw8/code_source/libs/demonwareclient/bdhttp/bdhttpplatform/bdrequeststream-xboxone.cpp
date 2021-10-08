/*
==============
bdRequestStream::Read
==============
*/

HRESULT __fastcall bdRequestStream::Read(bdRequestStream *this, void *outBuffer, unsigned int outBufferSize, unsigned int *numBytesRead)
{
  return ?Read@bdRequestStream@@UEAAJPEAXKPEAK@Z(this, outBuffer, outBufferSize, numBytesRead);
}

/*
==============
bdRequestStream::AddRef
==============
*/

unsigned int __fastcall bdRequestStream::AddRef(bdRequestStream *this)
{
  return ?AddRef@bdRequestStream@@UEAAKXZ(this);
}

/*
==============
bdRequestStream::Invoke
==============
*/

HRESULT __fastcall bdRequestStream::Invoke(bdRequestStream *this, int dispIdMember, const _GUID *riid, unsigned int lcid, unsigned __int16 wFlags, tagDISPPARAMS *pDispParams, tagVARIANT *pVarResult, tagEXCEPINFO *pExcepInfo, unsigned int *puArgErr)
{
  return ?Invoke@bdRequestStream@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
}

/*
==============
bdRequestStream::bdRequestStream
==============
*/

void __fastcall bdRequestStream::bdRequestStream(bdRequestStream *this)
{
  ??0bdRequestStream@@QEAA@XZ(this);
}

/*
==============
bdRequestStream::setBytesUploaded
==============
*/

void __fastcall bdRequestStream::setBytesUploaded(bdRequestStream *this, unsigned int val)
{
  ?setBytesUploaded@bdRequestStream@@QEAAXI@Z(this, val);
}

/*
==============
bdRequestStream::Release
==============
*/

unsigned int __fastcall bdRequestStream::Release(bdRequestStream *this)
{
  return ?Release@bdRequestStream@@UEAAKXZ(this);
}

/*
==============
bdRequestStream::Write
==============
*/

HRESULT __fastcall bdRequestStream::Write(bdRequestStream *this, const void *outBuffer, unsigned int outBufferSize, unsigned int *written)
{
  return ?Write@bdRequestStream@@UEAAJPEBXKPEAK@Z(this, outBuffer, outBufferSize, written);
}

/*
==============
bdRequestStream::setupHandler
==============
*/

void __fastcall bdRequestStream::setupHandler(bdRequestStream *this, bdUploadInterceptor *uploadHandler, unsigned int uploadSize)
{
  ?setupHandler@bdRequestStream@@QEAAXPEAVbdUploadInterceptor@@I@Z(this, uploadHandler, uploadSize);
}

/*
==============
bdRequestStream::GetIDsOfNames
==============
*/

HRESULT __fastcall bdRequestStream::GetIDsOfNames(bdRequestStream *this, const _GUID *riid, wchar_t **rgszNames, unsigned int cNames, unsigned int lcid, int *rgDispId)
{
  return ?GetIDsOfNames@bdRequestStream@@UEAAJAEBU_GUID@@PEAPEA_WIKPEAJ@Z(this, riid, rgszNames, cNames, lcid, rgDispId);
}

/*
==============
bdRequestStream::getBytesUploaded
==============
*/

unsigned int __fastcall bdRequestStream::getBytesUploaded(bdRequestStream *this)
{
  return ?getBytesUploaded@bdRequestStream@@QEAAIXZ(this);
}

/*
==============
bdRequestStream::QueryInterface
==============
*/

HRESULT __fastcall bdRequestStream::QueryInterface(bdRequestStream *this, const _GUID *interfaceID, void **interfaceObj)
{
  return ?QueryInterface@bdRequestStream@@UEAAJAEBU_GUID@@PEAPEAX@Z(this, interfaceID, interfaceObj);
}

/*
==============
bdRequestStream::Open
==============
*/

HRESULT __fastcall bdRequestStream::Open(bdRequestStream *this, const char *buffer, unsigned int bufferSize)
{
  return ?Open@bdRequestStream@@QEAAJPEBDK@Z(this, buffer, bufferSize);
}

/*
==============
bdRequestStream::Size
==============
*/

unsigned __int64 __fastcall bdRequestStream::Size(bdRequestStream *this)
{
  return ?Size@bdRequestStream@@QEAA?B_KXZ(this);
}

/*
==============
bdRequestStream::GetTypeInfoCount
==============
*/

HRESULT __fastcall bdRequestStream::GetTypeInfoCount(bdRequestStream *this, unsigned int *pctinfo)
{
  return ?GetTypeInfoCount@bdRequestStream@@UEAAJPEAI@Z(this, pctinfo);
}

/*
==============
bdRequestStream::GetTypeInfo
==============
*/

HRESULT __fastcall bdRequestStream::GetTypeInfo(bdRequestStream *this, unsigned int iTInfo, unsigned int lcid, ITypeInfo **ppTInfo)
{
  return ?GetTypeInfo@bdRequestStream@@UEAAJIKPEAPEAUITypeInfo@@@Z(this, iTInfo, lcid, ppTInfo);
}

/*
==============
bdRequestStream::setBufSeekIndex
==============
*/

HRESULT __fastcall bdRequestStream::setBufSeekIndex(bdRequestStream *this, __int64 val)
{
  return ?setBufSeekIndex@bdRequestStream@@IEAAJ_J@Z(this, val);
}

/*
==============
bdRequestStream::~bdRequestStream
==============
*/

void __fastcall bdRequestStream::~bdRequestStream(bdRequestStream *this)
{
  ??1bdRequestStream@@UEAA@XZ(this);
}

/*
==============
bdRequestStream::bdRequestStream
==============
*/
void bdRequestStream::bdRequestStream(bdRequestStream *this)
{
  this->refcount_ = 1;
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (bdRequestStream_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (bdRequestStream_vtbl *)&bdRequestStream::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&bdRequestStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  this->m_cRef = 1;
  this->m_buffer = NULL;
  this->m_uploadHandler = NULL;
  *(_QWORD *)&this->m_uploadSize = 0i64;
}

/*
==============
bdRequestStream::~bdRequestStream
==============
*/
void bdRequestStream::~bdRequestStream(bdRequestStream *this)
{
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::ISequentialStream::IUnknown::__vftable = (bdRequestStream_vtbl *)&bdRequestStream::`vftable'{for `ISequentialStream'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,IDispatch,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>::IDispatch::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>_vtbl *)&bdRequestStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>'};
  this->refcount_ = -1073741823;
}

/*
==============
bdRequestStream::AddRef
==============
*/
__int64 bdRequestStream::AddRef(bdRequestStream *this)
{
  return (unsigned int)_InterlockedIncrement(&this->m_cRef);
}

/*
==============
bdRequestStream::GetIDsOfNames
==============
*/
__int64 bdRequestStream::GetIDsOfNames(bdRequestStream *this, const _GUID *riid, wchar_t **rgszNames, unsigned int cNames)
{
  return 2147614726i64;
}

/*
==============
bdRequestStream::GetTypeInfo
==============
*/
__int64 bdRequestStream::GetTypeInfo(bdRequestStream *this, unsigned int iTInfo, unsigned int lcid, ITypeInfo **ppTInfo)
{
  __int64 result; 

  result = 2147500033i64;
  if ( ppTInfo )
    *ppTInfo = NULL;
  return result;
}

/*
==============
bdRequestStream::GetTypeInfoCount
==============
*/
__int64 bdRequestStream::GetTypeInfoCount(bdRequestStream *this, unsigned int *pctinfo)
{
  *pctinfo = 0;
  return 2147500033i64;
}

/*
==============
bdRequestStream::Invoke
==============
*/
__int64 bdRequestStream::Invoke(bdRequestStream *this, int dispIdMember, const _GUID *riid, unsigned int lcid)
{
  return 0i64;
}

/*
==============
bdRequestStream::Open
==============
*/
__int64 bdRequestStream::Open(bdRequestStream *this, const char *buffer, unsigned int bufferSize)
{
  __int64 result; 

  if ( !buffer )
    return 2147942487i64;
  this->m_buffSize = bufferSize;
  result = 0i64;
  this->m_buffSeekIndex = 0i64;
  this->m_buffer = buffer;
  return result;
}

/*
==============
bdRequestStream::QueryInterface
==============
*/
__int64 bdRequestStream::QueryInterface(bdRequestStream *this, const _GUID *interfaceID, void **interfaceObj)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0> *v5; 

  if ( !interfaceObj )
    return 2147942487i64;
  *interfaceObj = NULL;
  if ( *(_OWORD *)interfaceID == *(_OWORD *)&IID_IUnknown || *(_QWORD *)&interfaceID->Data1 == *(_QWORD *)&IID_IDispatch.Data1 && *(_QWORD *)interfaceID->Data4 == *(_QWORD *)IID_IDispatch.Data4 )
  {
    v5 = &this->Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil>,1,0>;
    if ( !this )
      v5 = NULL;
    ((void (__fastcall *)(bdRequestStream *, const _GUID *, _QWORD))this->AddRef)(this, interfaceID, 0i64);
    *interfaceObj = v5;
    return 0i64;
  }
  else if ( *(_QWORD *)&interfaceID->Data1 == *(_QWORD *)&IID_ISequentialStream.Data1 && *(_QWORD *)interfaceID->Data4 == *(_QWORD *)IID_ISequentialStream.Data4 )
  {
    ((void (__fastcall *)(bdRequestStream *, const _GUID *, _QWORD))this->AddRef)(this, interfaceID, 0i64);
    *interfaceObj = this;
    return 0i64;
  }
  else
  {
    return 2147500034i64;
  }
}

/*
==============
bdRequestStream::Read
==============
*/
__int64 bdRequestStream::Read(bdRequestStream *this, void *outBuffer, __int64 outBufferSize, unsigned int *numBytesRead)
{
  unsigned int v5; 
  bdUploadInterceptor *m_uploadHandler; 
  unsigned int v8; 
  __int64 result; 
  const char *m_buffer; 
  unsigned __int64 m_buffSeekIndex; 

  v5 = 0;
  m_uploadHandler = this->m_uploadHandler;
  if ( m_uploadHandler )
  {
    v8 = m_uploadHandler->handleUpload(m_uploadHandler, outBuffer, outBufferSize, this->m_bytesUploaded);
  }
  else
  {
    if ( !outBuffer )
      return 2147942487i64;
    m_buffer = this->m_buffer;
    v8 = 0;
    if ( (_DWORD)outBufferSize )
    {
      m_buffSeekIndex = this->m_buffSeekIndex;
      while ( m_buffSeekIndex != this->m_buffSize )
      {
        ++v8;
        *(_BYTE *)outBuffer = m_buffer[m_buffSeekIndex];
        outBuffer = (char *)outBuffer + 1;
        m_buffSeekIndex = ++this->m_buffSeekIndex;
        if ( v8 >= (unsigned int)outBufferSize )
          goto LABEL_11;
      }
      v5 = 1;
    }
  }
LABEL_11:
  this->m_bytesUploaded += v8;
  result = v5;
  *numBytesRead = v8;
  return result;
}

/*
==============
bdRequestStream::Release
==============
*/
__int64 bdRequestStream::Release(bdRequestStream *this)
{
  unsigned __int32 v1; 

  v1 = _InterlockedDecrement(&this->m_cRef);
  if ( !v1 && this )
    ((void (__fastcall *)(bdRequestStream *, __int64))this->~RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISequentialStream,Microsoft::WRL::Details::InterfaceList<IDispatch,Microsoft::WRL::Details::Nil> >,Microsoft::WRL::RuntimeClassFlags<2>,1,0,1>)(this, 1i64);
  return v1;
}

/*
==============
bdRequestStream::Size
==============
*/
unsigned __int64 bdRequestStream::Size(bdRequestStream *this)
{
  if ( this->m_uploadHandler )
    return this->m_uploadSize;
  else
    return this->m_buffSize;
}

/*
==============
bdRequestStream::Write
==============
*/
__int64 bdRequestStream::Write(bdRequestStream *this, const void *outBuffer, unsigned int outBufferSize, unsigned int *written)
{
  return 2147500033i64;
}

/*
==============
bdRequestStream::getBytesUploaded
==============
*/
__int64 bdRequestStream::getBytesUploaded(bdRequestStream *this)
{
  return this->m_bytesUploaded;
}

/*
==============
bdRequestStream::setBufSeekIndex
==============
*/
__int64 bdRequestStream::setBufSeekIndex(bdRequestStream *this, __int64 val)
{
  if ( val < 0 )
    return 2147680257i64;
  this->m_buffSeekIndex = val;
  return 0i64;
}

/*
==============
bdRequestStream::setBytesUploaded
==============
*/
void bdRequestStream::setBytesUploaded(bdRequestStream *this, unsigned int val)
{
  this->m_bytesUploaded = val;
}

/*
==============
bdRequestStream::setupHandler
==============
*/
void bdRequestStream::setupHandler(bdRequestStream *this, bdUploadInterceptor *uploadHandler, unsigned int uploadSize)
{
  this->m_uploadHandler = uploadHandler;
  this->m_uploadSize = uploadSize;
}

