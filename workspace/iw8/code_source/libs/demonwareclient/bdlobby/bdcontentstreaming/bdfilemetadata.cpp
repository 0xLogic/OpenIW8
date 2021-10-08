/*
==============
bdFileMetaData::checkStringLen
==============
*/

bool __fastcall bdFileMetaData::checkStringLen(bdFileMetaData *this)
{
  return ?checkStringLen@bdFileMetaData@@AEAA_NXZ(this);
}

/*
==============
bdFileMetaData::reset
==============
*/

void __fastcall bdFileMetaData::reset(bdFileMetaData *this)
{
  ?reset@bdFileMetaData@@QEAAXXZ(this);
}

/*
==============
bdFileMetaData::~bdFileMetaData
==============
*/

void __fastcall bdFileMetaData::~bdFileMetaData(bdFileMetaData *this)
{
  ??1bdFileMetaData@@UEAA@XZ(this);
}

/*
==============
bdFileMetaData::bdFileMetaData
==============
*/

void __fastcall bdFileMetaData::bdFileMetaData(bdFileMetaData *this)
{
  ??0bdFileMetaData@@QEAA@XZ(this);
}

/*
==============
bdFileMetaData::sizeOf
==============
*/

unsigned int __fastcall bdFileMetaData::sizeOf(bdFileMetaData *this)
{
  return ?sizeOf@bdFileMetaData@@UEAAIXZ(this);
}

/*
==============
bdFileMetaData::resetArrays
==============
*/

void __fastcall bdFileMetaData::resetArrays(bdFileMetaData *this)
{
  ?resetArrays@bdFileMetaData@@AEAAXXZ(this);
}

/*
==============
bdFileMetaData::deserialize
==============
*/

bool __fastcall bdFileMetaData::deserialize(bdFileMetaData *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdFileMetaData@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdFileMetaData::bdFileMetaData
==============
*/
void bdFileMetaData::bdFileMetaData(bdFileMetaData *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdFileMetaData::`vbtable';
    *(&this->m_originID + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_originID + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdFileMetaData_vtbl *)&bdFileMetaData::`vftable'{for `bdTaskResult'};
  *(bdFileMetaData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdFileMetaData_vtbl *)&bdFileMetaData::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_fileSize = 0;
  this->m_ownerID = 0i64;
  this->m_fileSlot = 0;
  this->m_numTags = 0;
  *(_QWORD *)&this->m_metaDataSize = 0i64;
  `eh vector vbase constructor iterator'(this->m_tags, 0x40ui64, 0x100ui64, (void (__fastcall *)(void *))bdTag::bdTag, (void (__fastcall *)(void *))bdTag::`vbase destructor);
  this->m_numCopiesMade = 0;
  this->m_originID = 0i64;
  bdFileMetaData::resetArrays(this);
}

/*
==============
bdFileMetaData::~bdFileMetaData
==============
*/
void bdFileMetaData::~bdFileMetaData(bdFileMetaData *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdFileMetaData::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 19720) = &bdFileMetaData::`vftable'{for `bdReferencable'};
  `eh vector destructor iterator'(&this[-1].m_tags[0].__vftable + 2, 0x40ui64, 0x100ui64, (void (__fastcall *)(void *))bdTag::`vbase destructor);
  bdTaskResult::~bdTaskResult((bdFileMetaData *)((char *)this - 19712));
}

/*
==============
bdFileMetaData::checkStringLen
==============
*/
char bdFileMetaData::checkStringLen(bdFileMetaData *this)
{
  if ( bdStrlen(this->m_url) < 0x3FF )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdContentStreaming/bdFileMetaData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdfilemetadata.cpp", "bdFileMetaData::checkStringLen", 0x6Fu, "m_url was truncated, buffer is too small");
  return 0;
}

/*
==============
bdFileMetaData::deserialize
==============
*/
__int64 bdFileMetaData::deserialize(bdFileMetaData *this, bdReference<bdByteBuffer> buffer)
{
  unsigned int *p_m_metaDataSize; 
  bool v5; 
  bool v6; 
  unsigned int m_numTags; 
  __int64 v8; 
  bool (__fastcall *deserialize)(bdTaskResult *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v10; 
  bool v11; 
  char *m_url; 
  unsigned __int64 v13; 
  unsigned __int8 v14; 
  bdByteBuffer_vtbl *v16; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  this->m_fileSlot = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_fileSize = 0;
  this->m_ownerID = 0i64;
  this->m_numTags = 0;
  p_m_metaDataSize = &this->m_metaDataSize;
  this->m_metaDataSize = 0;
  this->m_summaryFileSize = 0;
  this->m_numCopiesMade = 0;
  this->m_originID = 0i64;
  bdFileMetaData::resetArrays(this);
  v5 = bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned __int64 *)&this->__vftable + 2) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 6) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, (unsigned int *)&this->__vftable + 7) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileSize) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_ownerID) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_ownerName, 0x40ui64) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_fileSlot) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_fileName, 0x80ui64) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_url, 0x400ui64) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_category);
  *p_m_metaDataSize = 2048;
  v6 = v5 && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_metaData, p_m_metaDataSize) && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_summaryFileSize) && bdByteBuffer::readArrayStart((bdByteBuffer *)buffer.m_ptr->__vftable, 0xAu, &this->m_numTags);
  m_numTags = this->m_numTags;
  if ( m_numTags )
  {
    m_numTags >>= 1;
    this->m_numTags = m_numTags;
  }
  v8 = 0i64;
  if ( m_numTags )
  {
    do
    {
      if ( !v6 )
        break;
      deserialize = this->m_tags[(unsigned int)v8].deserialize;
      v10 = buffer.m_ptr->__vftable;
      v16 = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->allocateBuffer, 1u);
      v6 = ((unsigned __int8 (__fastcall *)(bdTag *, bdByteBuffer_vtbl **))deserialize)(&this->m_tags[v8], &v16) != 0;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < this->m_numTags );
  }
  bdByteBuffer::readArrayEnd((bdByteBuffer *)buffer.m_ptr->__vftable);
  if ( v6 && bdByteBuffer::readUInt32((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_numCopiesMade) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_originID) )
  {
    v11 = this->m_url == NULL;
    m_url = this->m_url;
    bdHandleAssert(!v11, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v13 = -1i64;
    do
      ++v13;
    while ( m_url[v13] );
    if ( v13 < 0x3FF )
    {
      v14 = 1;
      goto LABEL_34;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdContentStreaming/bdFileMetaData", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcontentstreaming\\bdfilemetadata.cpp", "bdFileMetaData::checkStringLen", 0x6Fu, "m_url was truncated, buffer is too small");
  }
  v14 = 0;
LABEL_34:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v14;
}

/*
==============
bdFileMetaData::reset
==============
*/
void bdFileMetaData::reset(bdFileMetaData *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  this->m_fileSlot = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_fileSize = 0;
  this->m_ownerID = 0i64;
  this->m_numTags = 0;
  *(_QWORD *)&this->m_metaDataSize = 0i64;
  this->m_numCopiesMade = 0;
  this->m_originID = 0i64;
  bdFileMetaData::resetArrays(this);
}

/*
==============
bdFileMetaData::resetArrays
==============
*/
void bdFileMetaData::resetArrays(bdFileMetaData *this)
{
  unsigned int i; 

  memset_0(this->m_fileName, 0, 0x480ui64);
  *(_QWORD *)this->m_ownerName = 0i64;
  *(_QWORD *)&this->m_ownerName[8] = 0i64;
  *(_QWORD *)&this->m_ownerName[16] = 0i64;
  *(_QWORD *)&this->m_ownerName[24] = 0i64;
  *(_QWORD *)&this->m_ownerName[32] = 0i64;
  *(_QWORD *)&this->m_ownerName[40] = 0i64;
  *(_QWORD *)&this->m_ownerName[48] = 0i64;
  *(_QWORD *)&this->m_ownerName[56] = 0i64;
  memset_0(this->m_metaData, 0, sizeof(this->m_metaData));
  for ( i = 0; i < this->m_numTags; ++i )
    bdTag::set(&this->m_tags[i], 0i64, 0i64);
}

/*
==============
bdFileMetaData::sizeOf
==============
*/
__int64 bdFileMetaData::sizeOf(bdFileMetaData *this)
{
  return 19744i64;
}

