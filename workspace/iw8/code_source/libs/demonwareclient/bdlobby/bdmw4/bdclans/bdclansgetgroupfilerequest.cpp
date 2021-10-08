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
  _RCX = &this->m_file[64];
  _RAX = &file->m_fileName;
  v7 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (bdStructFixedSizeString<255> *)((char *)_RAX + 128);
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
  __int64 v5; 

  v2 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 1) + 4i64) + 8));
  bdReferencable::operator=((bdReferencable *)((char *)v2 + SHIDWORD(v2[3]->serialize) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 3) + 4i64) + 24));
  _RCX = v2 + 10;
  *((_WORD *)v2 + 16) = *(_WORD *)file->m_group;
  v5 = 2i64;
  v2[5] = *(bdClansGetGroupFileRequest_vtbl **)&file->m_group[8];
  *((_WORD *)v2 + 24) = *(_WORD *)&file->m_group[16];
  v2[7] = *(bdClansGetGroupFileRequest_vtbl **)&file->m_group[24];
  _RAX = &file->m_fileName;
  do
  {
    _RCX += 16;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (bdStructFixedSizeString<255> *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v5;
  }
  while ( v5 );
  v2[42] = (bdClansGetGroupFileRequest_vtbl *)file->m_fileData;
  *((_DWORD *)v2 + 86) = file->m_fileSize;
  *((_DWORD *)v2 + 87) = file->m_collisionField;
  v2[44] = (bdClansGetGroupFileRequest_vtbl *)file->m_createdTimestamp;
  v2[45] = (bdClansGetGroupFileRequest_vtbl *)file->m_updatedTimestamp;
}

