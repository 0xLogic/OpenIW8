/*
==============
bdClansGetGroupFileResponse::bdClansGetGroupFileResponse
==============
*/

void __fastcall bdClansGetGroupFileResponse::bdClansGetGroupFileResponse(bdClansGetGroupFileResponse *this)
{
  ??0bdClansGetGroupFileResponse@@QEAA@XZ(this);
}

/*
==============
bdClansGetGroupFileResponse::setFile
==============
*/

void __fastcall bdClansGetGroupFileResponse::setFile(bdClansGetGroupFileResponse *this, const bdClansGroupFile *file)
{
  ?setFile@bdClansGetGroupFileResponse@@QEAAXAEBVbdClansGroupFile@@@Z(this, file);
}

/*
==============
bdClansGetGroupFileResponse::getFile
==============
*/

bdClansGroupFile *__fastcall bdClansGetGroupFileResponse::getFile(bdClansGetGroupFileResponse *this, bdClansGroupFile *result)
{
  return ?getFile@bdClansGetGroupFileResponse@@QEBA?AVbdClansGroupFile@@XZ(this, result);
}

/*
==============
bdClansGetGroupFileResponse::serialize
==============
*/

bool __fastcall bdClansGetGroupFileResponse::serialize(bdClansGetGroupFileResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdClansGetGroupFileResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdClansGetGroupFileResponse::deserialize
==============
*/

bool __fastcall bdClansGetGroupFileResponse::deserialize(bdClansGetGroupFileResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdClansGetGroupFileResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdClansGetGroupFileResponse::bdClansGetGroupFileResponse
==============
*/

void __fastcall bdClansGetGroupFileResponse::bdClansGetGroupFileResponse(bdClansGetGroupFileResponse *this, const bdClansGroupFile *file)
{
  ??0bdClansGetGroupFileResponse@@QEAA@AEBVbdClansGroupFile@@@Z(this, file);
}

/*
==============
bdClansGetGroupFileResponse::bdClansGetGroupFileResponse
==============
*/
void bdClansGetGroupFileResponse::bdClansGetGroupFileResponse(bdClansGetGroupFileResponse *this, const bdClansGroupFile *file, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupFileResponse::`vbtable';
    *(_QWORD *)&this->m_file[368] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_file[376] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupFileResponse_vtbl *)&bdClansGetGroupFileResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupFileResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupFileResponse_vtbl *)&bdClansGetGroupFileResponse::`vftable'{for `bdReferencable'};
  bdClansGroupFile::bdClansGroupFile((bdClansGroupFile *)(&this->__vftable + 2), file);
}

/*
==============
bdClansGetGroupFileResponse::bdClansGetGroupFileResponse
==============
*/
void bdClansGetGroupFileResponse::bdClansGetGroupFileResponse(bdClansGetGroupFileResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdClansGetGroupFileResponse::`vbtable';
    *(_QWORD *)&this->m_file[368] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_file[376] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdClansGetGroupFileResponse_vtbl *)&bdClansGetGroupFileResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdClansGetGroupFileResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdClansGetGroupFileResponse_vtbl *)&bdClansGetGroupFileResponse::`vftable'{for `bdReferencable'};
  bdClansGroupFile::bdClansGroupFile((bdClansGroupFile *)(&this->__vftable + 2));
}

/*
==============
bdClansGetGroupFileResponse::deserialize
==============
*/
bool bdClansGetGroupFileResponse::deserialize(bdClansGetGroupFileResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&this->__vftable + 2));
}

/*
==============
bdClansGetGroupFileResponse::getFile
==============
*/
bdClansGroupFile *bdClansGetGroupFileResponse::getFile(bdClansGetGroupFileResponse *this, bdClansGroupFile *result)
{
  bdClansGroupFile::bdClansGroupFile(result, (const bdClansGroupFile *)(&this->__vftable + 2));
  return result;
}

/*
==============
bdClansGetGroupFileResponse::serialize
==============
*/
bool bdClansGetGroupFileResponse::serialize(bdClansGetGroupFileResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdclans\\bdclansgetgroupfileresponse.cpp", "bdClansGetGroupFileResponse::serialize", 0x21u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdClansGetGroupFileResponse::setFile
==============
*/
void bdClansGetGroupFileResponse::setFile(bdClansGetGroupFileResponse *this, const bdClansGroupFile *file)
{
  bdClansGetGroupFileResponse_vtbl **v2; 
  __int64 v5; 

  v2 = &this->__vftable + 2;
  bdReferencable::operator=((bdReferencable *)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 3) + 4i64) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 1) + 4i64) + 8));
  bdReferencable::operator=((bdReferencable *)((char *)v2 + SHIDWORD(v2[3]->serialize) + 24), (const bdReferencable *)((char *)&file->__vftable + *(int *)(*((_QWORD *)&file->__vftable + 3) + 4i64) + 24));
  _RCX = v2 + 10;
  *((_WORD *)v2 + 16) = *(_WORD *)file->m_group;
  v5 = 2i64;
  v2[5] = *(bdClansGetGroupFileResponse_vtbl **)&file->m_group[8];
  *((_WORD *)v2 + 24) = *(_WORD *)&file->m_group[16];
  v2[7] = *(bdClansGetGroupFileResponse_vtbl **)&file->m_group[24];
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
  v2[42] = (bdClansGetGroupFileResponse_vtbl *)file->m_fileData;
  *((_DWORD *)v2 + 86) = file->m_fileSize;
  *((_DWORD *)v2 + 87) = file->m_collisionField;
  v2[44] = (bdClansGetGroupFileResponse_vtbl *)file->m_createdTimestamp;
  v2[45] = (bdClansGetGroupFileResponse_vtbl *)file->m_updatedTimestamp;
}

