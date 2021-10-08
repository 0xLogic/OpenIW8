/*
==============
WrapRandomAccessStream::get_CanRead
==============
*/

HRESULT __fastcall WrapRandomAccessStream::get_CanRead(WrapRandomAccessStream *this, unsigned __int8 *value)
{
  return ?get_CanRead@WrapRandomAccessStream@@UEAAJPEAE@Z(this, value);
}

/*
==============
WrapBuffer::get_Capacity
==============
*/

HRESULT __fastcall WrapBuffer::get_Capacity(WrapBuffer *this, unsigned int *capacity)
{
  return ?get_Capacity@WrapBuffer@@UEAAJPEAI@Z(this, capacity);
}

/*
==============
WrapRandomAccessStream::GetOutputStreamAt
==============
*/

HRESULT __fastcall WrapRandomAccessStream::GetOutputStreamAt(WrapRandomAccessStream *this, unsigned __int64 __formal, ABI::Windows::Storage::Streams::IOutputStream **a3)
{
  return ?GetOutputStreamAt@WrapRandomAccessStream@@UEAAJ_KPEAPEAUIOutputStream@Streams@Storage@Windows@ABI@@@Z(this, __formal, a3);
}

/*
==============
WrapRandomAccessStream::Seek
==============
*/

HRESULT __fastcall WrapRandomAccessStream::Seek(WrapRandomAccessStream *this, unsigned __int64 position)
{
  return ?Seek@WrapRandomAccessStream@@UEAAJ_K@Z(this, position);
}

/*
==============
WrapBuffer::put_Length
==============
*/

HRESULT __fastcall WrapBuffer::put_Length(WrapBuffer *this, unsigned int length)
{
  return ?put_Length@WrapBuffer@@UEAAJI@Z(this, length);
}

/*
==============
WrapBuffer::~WrapBuffer
==============
*/

void __fastcall WrapBuffer::~WrapBuffer(WrapBuffer *this)
{
  ??1WrapBuffer@@UEAA@XZ(this);
}

/*
==============
WrapDataBuffer
==============
*/

Windows::Storage::Streams::IBuffer *__fastcall WrapDataBuffer(unsigned __int8 *buffer, unsigned int bufferCapacity, unsigned int bufferLength)
{
  return ?WrapDataBuffer@@YAPE$AAUIBuffer@Streams@Storage@Windows@@PEAEII@Z(buffer, bufferCapacity, bufferLength);
}

/*
==============
WrapRandomAccessStream::~WrapRandomAccessStream
==============
*/

void __fastcall WrapRandomAccessStream::~WrapRandomAccessStream(WrapRandomAccessStream *this)
{
  ??1WrapRandomAccessStream@@UEAA@XZ(this);
}

/*
==============
WrapRandomAccessStream::get_Size
==============
*/

HRESULT __fastcall WrapRandomAccessStream::get_Size(WrapRandomAccessStream *this, unsigned __int64 *value)
{
  return ?get_Size@WrapRandomAccessStream@@UEAAJPEA_K@Z(this, value);
}

/*
==============
WrapBuffer::get_Length
==============
*/

HRESULT __fastcall WrapBuffer::get_Length(WrapBuffer *this, unsigned int *length)
{
  return ?get_Length@WrapBuffer@@UEAAJPEAI@Z(this, length);
}

/*
==============
WrapDataRandomAccessStream
==============
*/

Windows::Storage::Streams::IRandomAccessStream *__fastcall WrapDataRandomAccessStream(unsigned __int8 *buffer, unsigned int bufferSize)
{
  return ?WrapDataRandomAccessStream@@YAPE$AAUIRandomAccessStream@Streams@Storage@Windows@@PEAEI@Z(buffer, bufferSize);
}

/*
==============
WrapBuffer::Buffer
==============
*/

HRESULT __fastcall WrapBuffer::Buffer(WrapBuffer *this, unsigned __int8 **buffer)
{
  return ?Buffer@WrapBuffer@@UEAAJPEAPEAE@Z(this, buffer);
}

/*
==============
WrapRandomAccessStream::put_Size
==============
*/

HRESULT __fastcall WrapRandomAccessStream::put_Size(WrapRandomAccessStream *this, unsigned __int64 value)
{
  return ?put_Size@WrapRandomAccessStream@@UEAAJ_K@Z(this, value);
}

/*
==============
WrapRandomAccessStream::CloneStream
==============
*/

HRESULT __fastcall WrapRandomAccessStream::CloneStream(WrapRandomAccessStream *this, ABI::Windows::Storage::Streams::IRandomAccessStream **__formal)
{
  return ?CloneStream@WrapRandomAccessStream@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@ABI@@@Z(this, __formal);
}

/*
==============
WrapRandomAccessStream::get_CanWrite
==============
*/

HRESULT __fastcall WrapRandomAccessStream::get_CanWrite(WrapRandomAccessStream *this, unsigned __int8 *value)
{
  return ?get_CanWrite@WrapRandomAccessStream@@UEAAJPEAE@Z(this, value);
}

/*
==============
WrapRandomAccessStream::ReadAsync
==============
*/

HRESULT __fastcall WrapRandomAccessStream::ReadAsync(WrapRandomAccessStream *this, ABI::Windows::Storage::Streams::IBuffer *buffer, unsigned int count, ABI::Windows::Storage::Streams::InputStreamOptions __formal, ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer *,unsigned int> **operation)
{
  return ?ReadAsync@WrapRandomAccessStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@ABI@@IW4InputStreamOptions@3456@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@ABI@@I@Foundation@56@@Z(this, buffer, count, __formal, operation);
}

/*
==============
WrapRandomAccessStream::get_Position
==============
*/

HRESULT __fastcall WrapRandomAccessStream::get_Position(WrapRandomAccessStream *this, unsigned __int64 *value)
{
  return ?get_Position@WrapRandomAccessStream@@UEAAJPEA_K@Z(this, value);
}

/*
==============
WrapRandomAccessStream::GetInputStreamAt
==============
*/

HRESULT __fastcall WrapRandomAccessStream::GetInputStreamAt(WrapRandomAccessStream *this, unsigned __int64 __formal, ABI::Windows::Storage::Streams::IInputStream **a3)
{
  return ?GetInputStreamAt@WrapRandomAccessStream@@UEAAJ_KPEAPEAUIInputStream@Streams@Storage@Windows@ABI@@@Z(this, __formal, a3);
}

/*
==============
WrapBuffer::~WrapBuffer
==============
*/
void WrapBuffer::~WrapBuffer(WrapBuffer *this)
{
  __int64 v2; 
  __int64 v3; 

  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::ABI::Windows::Storage::Streams::IBuffer::IInspectable::IUnknown::__vftable = (WrapBuffer_vtbl *)&WrapBuffer::`vftable';
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::IWeakReferenceSource::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>_vtbl *)&WrapBuffer::`vftable'{for `IWeakReferenceSource'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>_vtbl *)&WrapBuffer::`vftable'{for `IMarshal's `Microsoft::WRL::FtmBase'};
  *(_QWORD *)&this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::FtmBase::gap8 = &WrapBuffer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IAgileObject>,Microsoft::WRL::Details::Nil>,1,0>'s `Microsoft::WRL::FtmBase'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Windows::Storage::Streams::IBufferByteAccess::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>_vtbl *)&WrapBuffer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,1>'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>_vtbl *)&WrapBuffer::`vftable'{for `IMarshal's `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>'};
  *(_QWORD *)&this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::gap8 = &WrapBuffer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IAgileObject>,Microsoft::WRL::Details::Nil>,1,0>'s `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>'};
  this->weakRef_->Release(this->weakRef_);
  this->weakRef_ = NULL;
  v2 = *((_QWORD *)&this->Microsoft::WRL::FtmBase + 3);
  if ( v2 )
  {
    *((_QWORD *)&this->Microsoft::WRL::FtmBase + 3) = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  }
  v3 = *(_QWORD *)this->gap18;
  if ( v3 )
  {
    *(_QWORD *)this->gap18 = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
}

/*
==============
WrapRandomAccessStream::~WrapRandomAccessStream
==============
*/
void WrapRandomAccessStream::~WrapRandomAccessStream(WrapRandomAccessStream *this)
{
  __int64 v2; 
  __int64 v3; 

  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::ABI::Windows::Storage::Streams::IInputStream::IInspectable::IUnknown::__vftable = (WrapRandomAccessStream_vtbl *)&WrapRandomAccessStream::`vftable';
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::IWeakReferenceSource::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>_vtbl *)&WrapRandomAccessStream::`vftable'{for `IWeakReferenceSource'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>_vtbl *)&WrapRandomAccessStream::`vftable'{for `IMarshal's `Microsoft::WRL::FtmBase'};
  *(_QWORD *)&this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::FtmBase::gap8 = &WrapRandomAccessStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IAgileObject>,Microsoft::WRL::Details::Nil>,1,0>'s `Microsoft::WRL::FtmBase'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::ABI::Windows::Storage::Streams::IRandomAccessStream::IInspectable::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>_vtbl *)&WrapRandomAccessStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,1>'};
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>_vtbl *)&WrapRandomAccessStream::`vftable'{for `IMarshal's `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>'};
  *(_QWORD *)&this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::gap8 = &WrapRandomAccessStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IAgileObject>,Microsoft::WRL::Details::Nil>,1,0>'s `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>'};
  this->weakRef_->Release(this->weakRef_);
  this->weakRef_ = NULL;
  v2 = *((_QWORD *)&this->Microsoft::WRL::FtmBase + 3);
  if ( v2 )
  {
    *((_QWORD *)&this->Microsoft::WRL::FtmBase + 3) = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  }
  v3 = *(_QWORD *)this->gap18;
  if ( v3 )
  {
    *(_QWORD *)this->gap18 = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
}

/*
==============
WrapBuffer::Buffer
==============
*/
__int64 WrapBuffer::Buffer(WrapBuffer *this, unsigned __int8 **buffer)
{
  *buffer = (unsigned __int8 *)this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IBuffer,Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBufferByteAccess,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable;
  return 0i64;
}

/*
==============
WrapRandomAccessStream::CloneStream
==============
*/
__int64 WrapRandomAccessStream::CloneStream(WrapRandomAccessStream *this, ABI::Windows::Storage::Streams::IRandomAccessStream **__formal)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_wrapbuffer.cpp", 117, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XB3:TODO") )
    __debugbreak();
  return 0i64;
}

/*
==============
WrapRandomAccessStream::GetInputStreamAt
==============
*/
__int64 WrapRandomAccessStream::GetInputStreamAt(WrapRandomAccessStream *this, unsigned __int64 __formal, ABI::Windows::Storage::Streams::IInputStream **a3)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_wrapbuffer.cpp", 123, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XB3:TODO") )
    __debugbreak();
  return 0i64;
}

/*
==============
WrapRandomAccessStream::GetOutputStreamAt
==============
*/
__int64 WrapRandomAccessStream::GetOutputStreamAt(WrapRandomAccessStream *this, unsigned __int64 __formal, ABI::Windows::Storage::Streams::IOutputStream **a3)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_wrapbuffer.cpp", 111, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XB3:TODO") )
    __debugbreak();
  return 0i64;
}

/*
==============
WrapRandomAccessStream::ReadAsync
==============
*/
__int64 WrapRandomAccessStream::ReadAsync(WrapRandomAccessStream *this, ABI::Windows::Storage::Streams::IBuffer *buffer, __int64 count, __int64 __formal, ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer *,unsigned int> **operation)
{
  unsigned int v5; 
  ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer *,unsigned int> *v8; 
  ABI::Windows::Storage::Streams::IBuffer *v9; 
  Concurrency::details::_AsyncTaskGeneratorThunk<<lambda_4e6e2c0eb46968b0d281fd98350b9cc0> > *v10; 
  Concurrency::details::_AsyncTaskGeneratorThunk<<lambda_4e6e2c0eb46968b0d281fd98350b9cc0> > *v11; 
  WrapRandomAccessStream::ReadAsync::__l2::<lambda_4e6e2c0eb46968b0d281fd98350b9cc0> _Func; 

  v5 = count;
  v8 = NULL;
  v9 = NULL;
  if ( buffer )
  {
    buffer->AddRef(buffer);
    v9 = buffer;
  }
  _Func.__this = this;
  _Func.pBuffer.ptr_ = v9;
  if ( v9 )
    ((void (__fastcall *)(ABI::Windows::Storage::Streams::IBuffer *, ABI::Windows::Storage::Streams::IBuffer *, __int64, __int64, __int64))v9->AddRef)(v9, buffer, count, __formal, -2i64);
  _Func.count = v5;
  v10 = Concurrency::create_async<_lambda_4e6e2c0eb46968b0d281fd98350b9cc0_>(&_Func);
  v11 = v10;
  if ( v10 )
  {
    v8 = (ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer *,unsigned int> *)&v10->Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer _,unsigned int>;
    if ( v10 != (Concurrency::details::_AsyncTaskGeneratorThunk<<lambda_4e6e2c0eb46968b0d281fd98350b9cc0> > *)-16i64 )
      v8->AddRef((IUnknown *)&v10->Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer _,unsigned int>);
  }
  if ( v11 )
    v11->__abi_Release(v11);
  if ( v9 )
    v9->Release(v9);
  *operation = v8;
  if ( v8 )
    v8->Release(v8);
  if ( v9 )
    v9->Release(v9);
  return 0i64;
}

/*
==============
WrapRandomAccessStream::Seek
==============
*/
__int64 WrapRandomAccessStream::Seek(WrapRandomAccessStream *this, unsigned __int64 position)
{
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable = (Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>_vtbl *)position;
  return 0i64;
}

/*
==============
WrapDataBuffer
==============
*/
WrapBuffer *WrapDataBuffer(unsigned __int8 *buffer, unsigned int bufferCapacity, unsigned int bufferLength)
{
  Microsoft::WRL::ComPtr<WrapBuffer> *v3; 
  WrapBuffer *ptr; 
  WrapBuffer *v5; 
  unsigned __int8 *v7; 
  unsigned int v8; 
  unsigned int v9; 
  Microsoft::WRL::ComPtr<WrapBuffer> v10; 

  v9 = bufferLength;
  v8 = bufferCapacity;
  v7 = buffer;
  v3 = Microsoft::WRL::Details::Make<WrapBuffer,unsigned char * &,unsigned int &,unsigned int &>(&v10, &v7, &v8, &v9);
  ptr = v3->ptr_;
  v3->ptr_ = NULL;
  v5 = v10.ptr_;
  if ( v10.ptr_ )
  {
    v10.ptr_ = NULL;
    v5->Release(v5);
  }
  if ( ptr )
    ptr->AddRef(ptr);
  if ( ptr )
    ptr->Release(ptr);
  return ptr;
}

/*
==============
WrapDataRandomAccessStream
==============
*/
Windows::Storage::Streams::IRandomAccessStream *WrapDataRandomAccessStream(unsigned __int8 *buffer, unsigned int bufferSize)
{
  Microsoft::WRL::ComPtr<WrapRandomAccessStream> *v2; 
  __int64 v3; 
  __int64 v4; 
  WrapRandomAccessStream *ptr; 
  unsigned __int8 *arg1; 
  unsigned int arg2; 
  Microsoft::WRL::ComPtr<WrapRandomAccessStream> result; 
  __int64 v10; 

  arg2 = bufferSize;
  arg1 = buffer;
  v2 = Microsoft::WRL::Details::Make<WrapRandomAccessStream,unsigned char * &,unsigned int &>(&result, &arg1, &arg2);
  v3 = 0i64;
  if ( v2->ptr_ )
  {
    v4 = (__int64)&v2->ptr_->Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>;
    v10 = v4;
  }
  else
  {
    v4 = 0i64;
    v10 = 0i64;
  }
  v2->ptr_ = NULL;
  ptr = result.ptr_;
  if ( result.ptr_ )
  {
    result.ptr_ = NULL;
    ptr->Release(ptr);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8i64))(v4, v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16i64))(v4, v3);
  return (Windows::Storage::Streams::IRandomAccessStream *)v4;
}

/*
==============
WrapRandomAccessStream::get_CanRead
==============
*/
__int64 WrapRandomAccessStream::get_CanRead(WrapRandomAccessStream *this, unsigned __int8 *value)
{
  *value = 1;
  return 0i64;
}

/*
==============
WrapRandomAccessStream::get_CanWrite
==============
*/
__int64 WrapRandomAccessStream::get_CanWrite(WrapRandomAccessStream *this, unsigned __int8 *value)
{
  *value = 0;
  return 0i64;
}

/*
==============
WrapBuffer::get_Capacity
==============
*/
__int64 WrapBuffer::get_Capacity(WrapBuffer *this, unsigned int *capacity)
{
  *capacity = this->_bufferCapacity;
  return 0i64;
}

/*
==============
WrapBuffer::get_Length
==============
*/
__int64 WrapBuffer::get_Length(WrapBuffer *this, unsigned int *length)
{
  *length = this->_bufferLength;
  return 0i64;
}

/*
==============
WrapRandomAccessStream::get_Position
==============
*/
__int64 WrapRandomAccessStream::get_Position(WrapRandomAccessStream *this, unsigned __int64 *value)
{
  *value = (unsigned __int64)this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::Nil>,1,0>::IMarshal::IUnknown::__vftable;
  return 0i64;
}

/*
==============
WrapRandomAccessStream::get_Size
==============
*/
__int64 WrapRandomAccessStream::get_Size(WrapRandomAccessStream *this, unsigned __int64 *value)
{
  *value = (unsigned __int64)this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::marshaller_.ptr_;
  return 0i64;
}

/*
==============
WrapBuffer::put_Length
==============
*/
__int64 WrapBuffer::put_Length(WrapBuffer *this, unsigned int length)
{
  if ( length > this->_bufferCapacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_wrapbuffer.cpp", 42, ASSERT_TYPE_ASSERT, "(length <= _bufferCapacity)", (const char *)&queryFormat, "length <= _bufferCapacity") )
    __debugbreak();
  if ( length > this->_bufferCapacity )
    return 2147942487i64;
  this->_bufferLength = length;
  return 0i64;
}

/*
==============
WrapRandomAccessStream::put_Size
==============
*/
__int64 WrapRandomAccessStream::put_Size(WrapRandomAccessStream *this, unsigned __int64 value)
{
  this->Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ABI::Windows::Storage::Streams::IInputStream,ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,1>::Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IInputStream,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > > >,0,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > > >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> > >,1,1>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ABI::Windows::Storage::Streams::IRandomAccessStream,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil> >,1,0>::Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>::Microsoft::WRL::FtmBase::marshaller_.ptr_ = (IMarshal *)(unsigned int)value;
  return 0i64;
}

