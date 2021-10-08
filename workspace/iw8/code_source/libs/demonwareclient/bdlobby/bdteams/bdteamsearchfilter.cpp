/*
==============
bdTeamSearchFilter::bdTeamSearchFilter
==============
*/

void __fastcall bdTeamSearchFilter::bdTeamSearchFilter(bdTeamSearchFilter *this)
{
  ??0bdTeamSearchFilter@@QEAA@XZ(this);
}

/*
==============
bdTeamSearchFilter::serializedSizeOf
==============
*/

int __fastcall bdTeamSearchFilter::serializedSizeOf(bdTeamSearchFilter *this)
{
  return ?serializedSizeOf@bdTeamSearchFilter@@UEBAHXZ(this);
}

/*
==============
bdTeamSearchFilter::sizeOf
==============
*/

unsigned int __fastcall bdTeamSearchFilter::sizeOf(bdTeamSearchFilter *this)
{
  return ?sizeOf@bdTeamSearchFilter@@UEAAIXZ(this);
}

/*
==============
bdTeamSearchFilter::serialize
==============
*/

bool __fastcall bdTeamSearchFilter::serialize(bdTeamSearchFilter *this, bdByteBuffer *buffer)
{
  return ?serialize@bdTeamSearchFilter@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdTeamSearchFilter::bdTeamSearchFilter
==============
*/

void __fastcall bdTeamSearchFilter::bdTeamSearchFilter(bdTeamSearchFilter *this, const char *column, const char *searchOperator, const char *value)
{
  ??0bdTeamSearchFilter@@QEAA@PEBD00@Z(this, column, searchOperator, value);
}

/*
==============
bdTeamSearchFilter::deserialize
==============
*/

bool __fastcall bdTeamSearchFilter::deserialize(bdTeamSearchFilter *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdTeamSearchFilter@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdTeamSearchFilter::bdTeamSearchFilter
==============
*/
void bdTeamSearchFilter::bdTeamSearchFilter(bdTeamSearchFilter *this, const char *column, const char *searchOperator, const char *value, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamSearchFilter::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdTeamSearchFilter::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_value[70] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_value[78] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdTeamSearchFilter_vtbl *)&bdTeamSearchFilter::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdTeamSearchFilter::`vftable'{for `bdSerializable'};
  *(bdTeamSearchFilter_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamSearchFilter_vtbl *)&bdTeamSearchFilter::`vftable'{for `bdReferencable'};
  bdStrlcpy(this->_bytes_20, column, 0x40ui64);
  bdStrlcpy(this->m_searchOperator, searchOperator, 0xAui64);
  bdStrlcpy(this->m_value, value, 0x40ui64);
}

/*
==============
bdTeamSearchFilter::bdTeamSearchFilter
==============
*/
void bdTeamSearchFilter::bdTeamSearchFilter(bdTeamSearchFilter *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamSearchFilter::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdTeamSearchFilter::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_value[70] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_value[78] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdTeamSearchFilter_vtbl *)&bdTeamSearchFilter::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdTeamSearchFilter::`vftable'{for `bdSerializable'};
  *(bdTeamSearchFilter_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamSearchFilter_vtbl *)&bdTeamSearchFilter::`vftable'{for `bdReferencable'};
}

/*
==============
bdTeamSearchFilter::deserialize
==============
*/
char bdTeamSearchFilter::deserialize(bdTeamSearchFilter *this, bdReference<bdByteBuffer> buffer)
{
  if ( buffer.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer) )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdTeamSearchFilter::serialize
==============
*/
bool bdTeamSearchFilter::serialize(bdTeamSearchFilter *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeString(buffer, (const char *const)&this->__vftable + 16, 0x40ui64) && bdByteBuffer::writeString(buffer, &this->m_column[32], 0xAui64) && bdByteBuffer::writeString(buffer, &this->m_column[42], 0x40ui64);
}

/*
==============
bdTeamSearchFilter::serializedSizeOf
==============
*/
__int64 bdTeamSearchFilter::serializedSizeOf(bdTeamSearchFilter *this)
{
  return 276i64;
}

/*
==============
bdTeamSearchFilter::sizeOf
==============
*/
__int64 bdTeamSearchFilter::sizeOf(bdTeamSearchFilter *this)
{
  return 192i64;
}

