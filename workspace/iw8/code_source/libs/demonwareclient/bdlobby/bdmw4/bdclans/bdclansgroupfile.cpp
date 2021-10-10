/*
==============
bdClansGroupFile::deserialize
==============
*/

bool __fastcall bdClansGroupFile::deserialize(bdClansGroupFile *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGroupFile@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGroupFile::getFileName
==============
*/

const char *__fastcall bdClansGroupFile::getFileName(bdClansGroupFile *this)
{
  return ?getFileName@bdClansGroupFile@@QEBAPEBDXZ(this);
}

/*
==============
bdClansGroupFile::getFileData
==============
*/

const unsigned __int8 *__fastcall bdClansGroupFile::getFileData(bdClansGroupFile *this)
{
  return ?getFileData@bdClansGroupFile@@QEBAPEBEXZ(this);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/

void __fastcall bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, unsigned __int8 *fileData, unsigned int fileSize)
{
  ??0bdClansGroupFile@@QEAA@PEAEI@Z(this, fileData, fileSize);
}

/*
==============
bdClansGroupFile::reset
==============
*/

void __fastcall bdClansGroupFile::reset(bdClansGroupFile *this)
{
  ?reset@bdClansGroupFile@@QEAAXXZ(this);
}

/*
==============
bdClansGroupFile::setFileName
==============
*/

void __fastcall bdClansGroupFile::setFileName(bdClansGroupFile *this, const char *fileName)
{
  ?setFileName@bdClansGroupFile@@QEAAXPEBD@Z(this, fileName);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/

void __fastcall bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupIdentifier *group, const char *fileName, unsigned __int8 *fileData, unsigned int fileSize, const unsigned int collisionField)
{
  ??0bdClansGroupFile@@QEAA@AEBVbdClansGroupIdentifier@@PEBDPEAEII@Z(this, group, fileName, fileData, fileSize, collisionField);
}

/*
==============
bdClansGroupFile::serialize
==============
*/

bool __fastcall bdClansGroupFile::serialize(bdClansGroupFile *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGroupFile@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGroupFile::setFileData
==============
*/

void __fastcall bdClansGroupFile::setFileData(bdClansGroupFile *this, unsigned __int8 *fileData, unsigned int fileSize)
{
  ?setFileData@bdClansGroupFile@@QEAAXPEAEI@Z(this, fileData, fileSize);
}

/*
==============
bdClansGroupFile::setGroup
==============
*/

void __fastcall bdClansGroupFile::setGroup(bdClansGroupFile *this, const bdClansGroupIdentifier *group)
{
  ?setGroup@bdClansGroupFile@@QEAAXAEBVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/

void __fastcall bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupFile *__that)
{
  ??0bdClansGroupFile@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdClansGroupFile::getCollisionField
==============
*/

unsigned int __fastcall bdClansGroupFile::getCollisionField(bdClansGroupFile *this)
{
  return ?getCollisionField@bdClansGroupFile@@QEBAIXZ(this);
}

/*
==============
bdClansGroupFile::getGroup
==============
*/

bdClansGroupIdentifier *__fastcall bdClansGroupFile::getGroup(bdClansGroupFile *this, bdClansGroupIdentifier *result)
{
  return ?getGroup@bdClansGroupFile@@QEBA?AVbdClansGroupIdentifier@@XZ(this, result);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/

void __fastcall bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupIdentifier *group, const char *fileName)
{
  ??0bdClansGroupFile@@QEAA@AEBVbdClansGroupIdentifier@@PEBD@Z(this, group, fileName);
}

/*
==============
bdClansGroupFile::setCollisionField
==============
*/

void __fastcall bdClansGroupFile::setCollisionField(bdClansGroupFile *this, const unsigned int collisionField)
{
  ?setCollisionField@bdClansGroupFile@@QEAAXI@Z(this, collisionField);
}

/*
==============
bdClansGroupFile::getCreatedTimestamp
==============
*/

unsigned __int64 __fastcall bdClansGroupFile::getCreatedTimestamp(bdClansGroupFile *this)
{
  return ?getCreatedTimestamp@bdClansGroupFile@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/

void __fastcall bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this)
{
  ??0bdClansGroupFile@@QEAA@XZ(this);
}

/*
==============
bdClansGroupFile::getFileSize
==============
*/

unsigned int __fastcall bdClansGroupFile::getFileSize(bdClansGroupFile *this)
{
  return ?getFileSize@bdClansGroupFile@@QEBAIXZ(this);
}

/*
==============
bdClansGroupFile::getUpdatedTimestamp
==============
*/

unsigned __int64 __fastcall bdClansGroupFile::getUpdatedTimestamp(bdClansGroupFile *this)
{
  return ?getUpdatedTimestamp@bdClansGroupFile@@QEBA_KXZ(this);
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/
void bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupFile *__that, int a3)
{
  bdStructFixedSizeString<255> *p_m_fileName; 
  bdStructFixedSizeString<255> *v6; 
  __int64 v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupFile::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)(&this->m_updatedTimestamp + 1), (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_group[32], (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 3) + 4i64) + 24));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), (const bdStructBufferSerializable *)(&__that->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansGroupFile_vtbl *)&bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)this->m_group = *(_WORD *)__that->m_group;
  *(_QWORD *)&this->m_group[8] = *(_QWORD *)&__that->m_group[8];
  *(_WORD *)&this->m_group[16] = *(_WORD *)&__that->m_group[16];
  *(_QWORD *)&this->m_group[24] = *(_QWORD *)&__that->m_group[24];
  p_m_fileName = &this->m_fileName;
  v6 = &__that->m_fileName;
  v7 = 2i64;
  do
  {
    *(_OWORD *)p_m_fileName->m_buffer = *(_OWORD *)v6->m_buffer;
    *(_OWORD *)&p_m_fileName->m_buffer[16] = *(_OWORD *)&v6->m_buffer[16];
    *(_OWORD *)&p_m_fileName->m_buffer[32] = *(_OWORD *)&v6->m_buffer[32];
    *(_OWORD *)&p_m_fileName->m_buffer[48] = *(_OWORD *)&v6->m_buffer[48];
    *(_OWORD *)&p_m_fileName->m_buffer[64] = *(_OWORD *)&v6->m_buffer[64];
    *(_OWORD *)&p_m_fileName->m_buffer[80] = *(_OWORD *)&v6->m_buffer[80];
    *(_OWORD *)&p_m_fileName->m_buffer[96] = *(_OWORD *)&v6->m_buffer[96];
    p_m_fileName = (bdStructFixedSizeString<255> *)((char *)p_m_fileName + 128);
    *(_OWORD *)&p_m_fileName[-1].m_buffer[240] = *(_OWORD *)&v6->m_buffer[112];
    v6 = (bdStructFixedSizeString<255> *)((char *)v6 + 128);
    --v7;
  }
  while ( v7 );
  this->m_fileData = __that->m_fileData;
  this->m_fileSize = __that->m_fileSize;
  this->m_collisionField = __that->m_collisionField;
  this->m_createdTimestamp = __that->m_createdTimestamp;
  this->m_updatedTimestamp = __that->m_updatedTimestamp;
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/
void bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupIdentifier *group, const char *fileName, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupFile::`vbtable';
    *(&this->m_updatedTimestamp + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_updatedTimestamp + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2), group);
  bdStructFixedSizeString<255>::copy(&this->m_fileName, fileName);
  this->m_fileData = NULL;
  *(_QWORD *)&this->m_fileSize = 0i64;
  this->m_createdTimestamp = 0i64;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/
void bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, const bdClansGroupIdentifier *group, const char *fileName, unsigned __int8 *fileData, unsigned int fileSize, const unsigned int collisionField, int a7)
{
  if ( a7 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupFile::`vbtable';
    *(&this->m_updatedTimestamp + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_updatedTimestamp + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2), group);
  bdStructFixedSizeString<255>::copy(&this->m_fileName, fileName);
  this->m_fileData = fileData;
  this->m_fileSize = fileSize;
  this->m_collisionField = collisionField;
  this->m_createdTimestamp = 0i64;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/
void bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, unsigned __int8 *fileData, unsigned int fileSize, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupFile::`vbtable';
    *(&this->m_updatedTimestamp + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_updatedTimestamp + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2));
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>(&this->m_fileName);
  this->m_fileData = fileData;
  this->m_fileSize = fileSize;
  this->m_collisionField = 0;
  this->m_createdTimestamp = 0i64;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupFile::bdClansGroupFile
==============
*/
void bdClansGroupFile::bdClansGroupFile(bdClansGroupFile *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGroupFile::`vbtable';
    *(&this->m_updatedTimestamp + 1) = (unsigned __int64)&bdReferencable::`vftable';
    *((_DWORD *)&this->m_updatedTimestamp + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGroupFile_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGroupFile_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  bdClansGroupIdentifier::bdClansGroupIdentifier((bdClansGroupIdentifier *)(&this->__vftable + 2));
  bdStructFixedSizeString<255>::bdStructFixedSizeString<255>(&this->m_fileName);
  this->m_fileData = NULL;
  *(_QWORD *)&this->m_fileSize = 0i64;
  this->m_createdTimestamp = 0i64;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupFile::deserialize
==============
*/
bool bdClansGroupFile::deserialize(bdClansGroupFile *this, bdStructBufferDeserializer *deserializer)
{
  bool v4; 
  unsigned int readSize; 

  readSize = 0;
  v4 = bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_fileName.m_buffer, 0xFFu) && bdStructBufferDeserializer::readBlob(deserializer, 3u, this->m_fileData, this->m_fileSize, &readSize);
  this->m_fileSize = readSize;
  return v4 && bdStructBufferDeserializer::readUInt32(deserializer, 4u, &this->m_collisionField) && bdStructBufferDeserializer::readUInt64(deserializer, 5u, &this->m_createdTimestamp) && bdStructBufferDeserializer::readUInt64(deserializer, 6u, &this->m_updatedTimestamp);
}

/*
==============
bdClansGroupFile::getCollisionField
==============
*/
__int64 bdClansGroupFile::getCollisionField(bdClansGroupFile *this)
{
  return this->m_collisionField;
}

/*
==============
bdClansGroupFile::getCreatedTimestamp
==============
*/
unsigned __int64 bdClansGroupFile::getCreatedTimestamp(bdClansGroupFile *this)
{
  return this->m_createdTimestamp;
}

/*
==============
bdClansGroupFile::getFileData
==============
*/
unsigned __int8 *bdClansGroupFile::getFileData(bdClansGroupFile *this)
{
  return this->m_fileData;
}

/*
==============
bdClansGroupFile::getFileName
==============
*/
bdStructFixedSizeString<255> *bdClansGroupFile::getFileName(bdClansGroupFile *this)
{
  return &this->m_fileName;
}

/*
==============
bdClansGroupFile::getFileSize
==============
*/
__int64 bdClansGroupFile::getFileSize(bdClansGroupFile *this)
{
  return this->m_fileSize;
}

/*
==============
bdClansGroupFile::getGroup
==============
*/
bdClansGroupIdentifier *bdClansGroupFile::getGroup(bdClansGroupFile *this, bdClansGroupIdentifier *result)
{
  bdClansGroupIdentifier::bdClansGroupIdentifier(result, (const bdClansGroupIdentifier *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansGroupFile::getUpdatedTimestamp
==============
*/
unsigned __int64 bdClansGroupFile::getUpdatedTimestamp(bdClansGroupFile *this)
{
  return this->m_updatedTimestamp;
}

/*
==============
bdClansGroupFile::reset
==============
*/
void bdClansGroupFile::reset(bdClansGroupFile *this)
{
  bdClansGroupIdentifier::reset((bdClansGroupIdentifier *)(&this->__vftable + 2));
  bdStructFixedSizeString<255>::copy(&this->m_fileName, NULL);
  this->m_fileData = NULL;
  *(_QWORD *)&this->m_fileSize = 0i64;
  this->m_createdTimestamp = 0i64;
  this->m_updatedTimestamp = 0i64;
}

/*
==============
bdClansGroupFile::serialize
==============
*/
bool bdClansGroupFile::serialize(bdClansGroupFile *this, bdStructBufferSerializer *serializer)
{
  unsigned int v4; 
  void *v5; 

  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2)) )
    return 0;
  v4 = 255;
  v5 = memchr_0(&this->m_fileName, 0, 0xFFui64);
  if ( v5 )
    v4 = (_DWORD)v5 - ((_DWORD)this + 80);
  return bdStructBufferSerializer::writeString(serializer, 2u, this->m_fileName.m_buffer, v4) && bdStructBufferSerializer::writeBlob(serializer, 3u, this->m_fileData, this->m_fileSize) && bdStructBufferSerializer::writeUInt32(serializer, 4u, this->m_collisionField);
}

/*
==============
bdClansGroupFile::setCollisionField
==============
*/
void bdClansGroupFile::setCollisionField(bdClansGroupFile *this, const unsigned int collisionField)
{
  this->m_collisionField = collisionField;
}

/*
==============
bdClansGroupFile::setFileData
==============
*/
void bdClansGroupFile::setFileData(bdClansGroupFile *this, unsigned __int8 *fileData, unsigned int fileSize)
{
  this->m_fileSize = fileSize;
  this->m_fileData = fileData;
}

/*
==============
bdClansGroupFile::setFileName
==============
*/
void bdClansGroupFile::setFileName(bdClansGroupFile *this, const char *fileName)
{
  bdStructFixedSizeString<255>::copy(&this->m_fileName, fileName);
}

/*
==============
bdClansGroupFile::setGroup
==============
*/
void bdClansGroupFile::setGroup(bdClansGroupFile *this, const bdClansGroupIdentifier *group)
{
  bdClansGroupFile_vtbl **v2; 

  v2 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&group->__vftable + *(int *)(*((_QWORD *)&group->__vftable + 1) + 4i64) + 8));
  *((_WORD *)v2 + 8) = *((_WORD *)&group->__vftable + 8);
  v2[3] = (bdClansGroupFile_vtbl *)*((_QWORD *)&group->__vftable + 3);
  *((_WORD *)v2 + 16) = group->m_rootKind;
  v2[5] = (bdClansGroupFile_vtbl *)group->m_rootID;
}

