/*
==============
bdClientAuthTokenResult::bdClientAuthTokenResult
==============
*/

void __fastcall bdClientAuthTokenResult::bdClientAuthTokenResult(bdClientAuthTokenResult *this)
{
  ??0bdClientAuthTokenResult@@QEAA@XZ(this);
}

/*
==============
bdClientAuthTokenResult::sizeOf
==============
*/

unsigned int __fastcall bdClientAuthTokenResult::sizeOf(bdClientAuthTokenResult *this)
{
  return ?sizeOf@bdClientAuthTokenResult@@UEAAIXZ(this);
}

/*
==============
bdClientAuthTokenResult::deserialize
==============
*/

bool __fastcall bdClientAuthTokenResult::deserialize(bdClientAuthTokenResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdClientAuthTokenResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdClientAuthTokenResult::bdClientAuthTokenResult
==============
*/
void bdClientAuthTokenResult::bdClientAuthTokenResult(bdClientAuthTokenResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClientAuthTokenResult::`vbtable';
    *(_QWORD *)this->gap68 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap68[8] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdClientAuthTokenResult_vtbl *)&bdClientAuthTokenResult::`vftable'{for `bdTaskResult'};
  *(bdClientAuthTokenResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClientAuthTokenResult_vtbl *)&bdClientAuthTokenResult::`vftable'{for `bdReferencable'};
  bdClientAuthToken::bdClientAuthToken((bdClientAuthToken *)(&this->__vftable + 2));
}

/*
==============
bdClientAuthTokenResult::deserialize
==============
*/
__int64 bdClientAuthTokenResult::deserialize(bdClientAuthTokenResult *this, bdReference<bdByteBuffer> buffer)
{
  unsigned __int8 v4; 
  unsigned int length; 
  int v7; 
  __int64 v8; 
  bdByteBuffer *m_ptr; 
  unsigned __int8 v10[80]; 

  v8 = -2i64;
  m_ptr = buffer.m_ptr;
  length = 77;
  if ( bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, v10, &length) )
  {
    v7 = 0;
    v4 = (*(__int64 (__fastcall **)(bdClientAuthTokenResult_vtbl **, unsigned __int8 *, _QWORD, _QWORD, int *))(*((_QWORD *)&this->__vftable + 2) + 8i64))(&this->__vftable + 2, v10, length, 0i64, &v7);
  }
  else
  {
    v4 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdClientAuthTokenResult::sizeOf
==============
*/
__int64 bdClientAuthTokenResult::sizeOf(bdClientAuthTokenResult *this)
{
  return 120i64;
}

