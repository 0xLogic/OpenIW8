/*
==============
bdMultiPartURL::bdMultiPartURL
==============
*/

void __fastcall bdMultiPartURL::bdMultiPartURL(bdMultiPartURL *this)
{
  ??0bdMultiPartURL@@QEAA@XZ(this);
}

/*
==============
bdMultiPartURL::~bdMultiPartURL
==============
*/

void __fastcall bdMultiPartURL::~bdMultiPartURL(bdMultiPartURL *this)
{
  ??1bdMultiPartURL@@UEAA@XZ(this);
}

/*
==============
bdMultiPartURL::deserialize
==============
*/

bool __fastcall bdMultiPartURL::deserialize(bdMultiPartURL *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdMultiPartURL@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdMultiPartURL::sizeOf
==============
*/

unsigned int __fastcall bdMultiPartURL::sizeOf(bdMultiPartURL *this)
{
  return ?sizeOf@bdMultiPartURL@@UEAAIXZ(this);
}

/*
==============
bdMultiPartURL::bdMultiPartURL
==============
*/
void bdMultiPartURL::bdMultiPartURL(bdMultiPartURL *this, int a2)
{
  bdMultiPartURL_vtbl **v3; 
  __int64 v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMultiPartURL::`vbtable';
    *(_QWORD *)this->gap2828 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2828[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdMultiPartURL_vtbl *)&bdMultiPartURL::`vftable'{for `bdTaskResult'};
  *(bdMultiPartURL_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMultiPartURL_vtbl *)&bdMultiPartURL::`vftable'{for `bdReferencable'};
  this->m_numUrls = 0;
  this->m_fileID = 0i64;
  v3 = &this->__vftable + 2;
  v4 = 10i64;
  do
  {
    memset_0(v3, 0, 0x400ui64);
    v3 = (bdMultiPartURL_vtbl **)((char *)v3 + 1025);
    --v4;
  }
  while ( v4 );
}

/*
==============
bdMultiPartURL::~bdMultiPartURL
==============
*/
void bdMultiPartURL::~bdMultiPartURL(bdMultiPartURL *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdMultiPartURL::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 10272) = &bdMultiPartURL::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdMultiPartURL *)((char *)this - 10264));
}

/*
==============
bdMultiPartURL::deserialize
==============
*/
_BOOL8 bdMultiPartURL::deserialize(bdMultiPartURL *this, bdReference<bdByteBuffer> buffer)
{
  bool String; 
  unsigned int i; 

  String = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileID) && bdByteBuffer::readArrayStart((bdByteBuffer *)buffer.m_ptr->__vftable, 0x10u, &this->m_numUrls);
  for ( i = 0; i < this->m_numUrls; String = bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, (char *const)&this->__vftable + 1025 * i++ + 16, 0x401ui64) )
  {
    if ( !String )
      break;
  }
  bdByteBuffer::readArrayEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return String;
}

/*
==============
bdMultiPartURL::sizeOf
==============
*/
__int64 bdMultiPartURL::sizeOf(bdMultiPartURL *this)
{
  return 10296i64;
}

