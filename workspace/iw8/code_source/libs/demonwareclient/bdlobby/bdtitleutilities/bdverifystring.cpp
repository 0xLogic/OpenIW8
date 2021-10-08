/*
==============
bdVerifyString::deserialize
==============
*/

bool __fastcall bdVerifyString::deserialize(bdVerifyString *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdVerifyString@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdVerifyString::getVerificationResult
==============
*/

unsigned int __fastcall bdVerifyString::getVerificationResult(bdVerifyString *this)
{
  return ?getVerificationResult@bdVerifyString@@QEBAIXZ(this);
}

/*
==============
bdVerifyString::bdVerifyString
==============
*/

void __fastcall bdVerifyString::bdVerifyString(bdVerifyString *this)
{
  ??0bdVerifyString@@QEAA@XZ(this);
}

/*
==============
bdVerifyString::sizeOf
==============
*/

unsigned int __fastcall bdVerifyString::sizeOf(bdVerifyString *this)
{
  return ?sizeOf@bdVerifyString@@UEAAIXZ(this);
}

/*
==============
bdVerifyString::bdVerifyString
==============
*/
void bdVerifyString::bdVerifyString(bdVerifyString *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdVerifyString::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdVerifyString_vtbl *)&bdVerifyString::`vftable'{for `bdTaskResult'};
  *(bdVerifyString_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdVerifyString_vtbl *)&bdVerifyString::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  *((_DWORD *)&this->__vftable + 5) = 0;
}

/*
==============
bdVerifyString::deserialize
==============
*/
__int64 bdVerifyString::deserialize(bdVerifyString *this, bdReference<bdByteBuffer> buffer)
{
  _DWORD *v4; 
  bool UInt32; 
  unsigned __int8 v6; 

  v4 = (_DWORD *)&this->__vftable + 5;
  UInt32 = bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 5);
  *((_BYTE *)&this->__vftable + 16) = UInt32;
  if ( UInt32 )
  {
    bdHandleAssert(*v4 <= 2u, "m_verificationResult <= BD_PF_PROFANITY_FOUND", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdtitleutilities\\bdverifystring.cpp", "bdVerifyString::deserialize", 0x1Eu, "Profanity return code not recognized", -2i64);
    v6 = *((_BYTE *)&this->__vftable + 16);
  }
  else
  {
    *v4 = 2;
    v6 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v6;
}

/*
==============
bdVerifyString::getVerificationResult
==============
*/
__int64 bdVerifyString::getVerificationResult(bdVerifyString *this)
{
  return *((unsigned int *)&this->__vftable + 5);
}

/*
==============
bdVerifyString::sizeOf
==============
*/
__int64 bdVerifyString::sizeOf(bdVerifyString *this)
{
  return 40i64;
}

