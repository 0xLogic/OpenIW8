/*
==============
bdClansGetGroupFileRequest::setFile
==============
*/

void __fastcall bdClansGetGroupFileRequest::setFile(bdClansGetGroupFileRequest *this, const bdClansGroupFile *file)
{
  ?setFile@bdClansGetGroupFileRequest@@QEAAXAEBVbdClansGroupFile@@@Z(this, file);
}

/*
==============
bdClansGetGroupFileRequest::deserialize
==============
*/

bool __fastcall bdClansGetGroupFileRequest::deserialize(bdClansGetGroupFileRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdClansGetGroupFileRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupFileRequest::serialize
==============
*/

bool __fastcall bdClansGetGroupFileRequest::serialize(bdClansGetGroupFileRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdClansGetGroupFileRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdClansGetGroupFileRequest::bdClansGetGroupFileRequest
==============
*/

void __fastcall bdClansGetGroupFileRequest::bdClansGetGroupFileRequest(bdClansGetGroupFileRequest *this, const bdClansGroupFile *file)
{
  ??0bdClansGetGroupFileRequest@@QEAA@AEBVbdClansGroupFile@@@Z(this, file);
}

/*
==============
bdClansGetGroupFileRequest::bdClansGetGroupFileRequest
==============
*/
void bdClansGetGroupFileRequest::bdClansGetGroupFileRequest(bdClansGetGroupFileRequest *this, const bdClansGroupFile *file, int a3)
{
  _OWORD *v5; 
  bdStructFixedSizeString<255> *p_m_fileName; 
  __int64 v7; 

  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupFileRequest::`vbtable';
    *(_QWORD *)&this->m_file[368] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_file[376] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupFileRequest_vtbl *)&bdClansGetGroupFileRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupFileRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupFileRequest_vtbl *)&bdClansGetGroupFileRequest::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 3) = &bdClansGroupFile::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_file[352], (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2), file);
  *((_QWORD *)&this->__vftable + 2) = &bdClansGroupFile::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupFileRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24) = (bdClansGetGroupFileRequest_vtbl *)&bdClansGroupFile::`vftable'{for `bdReferencable'};
  *(_QWORD *)&this->m_file[8] = &bdClansGroupIdentifier::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_file[48], (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 3) + 4i64) + 24));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)this->m_file, (const bdStructBufferSerializable *)(&file->__vftable + 2));
  *(_QWORD *)this->m_file = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&this->m_file[*(int *)(*(_QWORD *)&this->m_file[8] + 4i64) + 8] = &bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
  *(_WORD *)&this->m_file[16] = *(_WORD *)file->m_group;
  *(_QWORD *)&this->m_file[24] = *(_QWORD *)&file->m_group[8];
  *(_WORD *)&this->m_file[32] = *(_WORD *)&file->m_group[16];
  *(_QWORD *)&this->m_file[40] = *(_QWORD *)&file->m_group[24];
  v5 = &this->m_file[64];
  p_m_fileName = &file->m_fileName;
  v7 = 2i64;
  do
  {
    *v5 = *(_OWORD *)p_m_fileName->m_buffer;
    v5[1] = *(_OWORD *)&p_m_fileName->m_buffer[16];
    v5[2] = *(_OWORD *)&p_m_fileName->m_buffer[32];
    v5[3] = *(_OWORD *)&p_m_fileName->m_buffer[48];
    v5[4] = *(_OWORD *)&p_m_fileName->m_buffer[64];
    v5[5] = *(_OWORD *)&p_m_fileName->m_buffer[80];
    v5[6] = *(_OWORD *)&p_m_fileName->m_buffer[96];
    v5 += 8;
    *(v5 - 1) = *(_OWORD *)&p_m_fileName->m_buffer[112];
    p_m_fileName = (bdStructFixedSizeString<255> *)((char *)p_m_fileName + 128);
    --v7;
  }
  while ( v7 );
  *(_QWORD *)&this->m_file[320] = file->m_fileData;
  *(_DWORD *)&this->m_file[328] = file->m_fileSize;
  *(_DWORD *)&this->m_file[332] = file->m_collisionField;
  *(_QWORD *)&this->m_file[336] = file->m_createdTimestamp;
  *(_QWORD *)&this->m_file[344] = file->m_updatedTimestamp;
}

/*
==============
bdClansGetGroupFileRequest::deserialize
==============
*/
bool bdClansGetGroupFileRequest::deserialize(bdClansGetGroupFileRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupfilerequest.cpp", "bdClansGetGroupFileRequest::deserialize", 0x1Cu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetGroupFileRequest::serialize
==============
*/
bool bdClansGetGroupFileRequest::serialize(bdClansGetGroupFileRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)(&this->__vftable + 2));
}

/*
==============
bdClansGetGroupFileRequest::setFile
==============
*/
void bdClansGetGroupFileRequest::setFile(bdClansGetGroupFileRequest *this, const bdClansGroupFile *file)
{
  bdClansGetGroupFileRequest_vtbl **v2; 
  bdClansGetGroupFileRequest_vtbl **v4; 
  __int64 v5; 
  bdStructFixedSizeString<255> *p_m_fileName; 
  __int128 v7; 

  v2 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 1) + 4i64) + 8));
  bdReferencable::operator=((bdReferencable *)((char *)v2 + SHIDWORD(v2[3]->serialize) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 3) + 4i64) + 24));
  v4 = v2 + 10;
  *((_WORD *)v2 + 16) = *(_WORD *)file->m_group;
  v5 = 2i64;
  v2[5] = *(bdClansGetGroupFileRequest_vtbl **)&file->m_group[8];
  *((_WORD *)v2 + 24) = *(_WORD *)&file->m_group[16];
  v2[7] = *(bdClansGetGroupFileRequest_vtbl **)&file->m_group[24];
  p_m_fileName = &file->m_fileName;
  do
  {
    v4 += 16;
    v7 = *(_OWORD *)p_m_fileName->m_buffer;
    p_m_fileName = (bdStructFixedSizeString<255> *)((char *)p_m_fileName + 128);
    *((_OWORD *)v4 - 8) = v7;
    *((_OWORD *)v4 - 7) = *(_OWORD *)&p_m_fileName[-1].m_buffer[144];
    *((_OWORD *)v4 - 6) = *(_OWORD *)&p_m_fileName[-1].m_buffer[160];
    *((_OWORD *)v4 - 5) = *(_OWORD *)&p_m_fileName[-1].m_buffer[176];
    *((_OWORD *)v4 - 4) = *(_OWORD *)&p_m_fileName[-1].m_buffer[192];
    *((_OWORD *)v4 - 3) = *(_OWORD *)&p_m_fileName[-1].m_buffer[208];
    *((_OWORD *)v4 - 2) = *(_OWORD *)&p_m_fileName[-1].m_buffer[224];
    *((_OWORD *)v4 - 1) = *(_OWORD *)&p_m_fileName[-1].m_buffer[240];
    --v5;
  }
  while ( v5 );
  v2[42] = (bdClansGetGroupFileRequest_vtbl *)file->m_fileData;
  *((_DWORD *)v2 + 86) = file->m_fileSize;
  *((_DWORD *)v2 + 87) = file->m_collisionField;
  v2[44] = (bdClansGetGroupFileRequest_vtbl *)file->m_createdTimestamp;
  v2[45] = (bdClansGetGroupFileRequest_vtbl *)file->m_updatedTimestamp;
}

