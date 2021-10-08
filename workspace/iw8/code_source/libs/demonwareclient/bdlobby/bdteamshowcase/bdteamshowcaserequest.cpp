/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::deserialize
==============
*/

bool __fastcall bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::deserialize(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::serialize
==============
*/

bool __fastcall bdTeamShowcaseGetShowcasedFilesRequest::serialize(bdTeamShowcaseGetShowcasedFilesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdTeamShowcaseGetShowcasedFilesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::deserialize
==============
*/

bool __fastcall bdTeamShowcaseGetShowcasedFilesRequest::deserialize(bdTeamShowcaseGetShowcasedFilesRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdTeamShowcaseGetShowcasedFilesRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::serialize
==============
*/

bool __fastcall bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::serialize(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::bdTeamShowcaseGetShowcasedFilesRequest
==============
*/

void __fastcall bdTeamShowcaseGetShowcasedFilesRequest::bdTeamShowcaseGetShowcasedFilesRequest(bdTeamShowcaseGetShowcasedFilesRequest *this)
{
  ??0bdTeamShowcaseGetShowcasedFilesRequest@@QEAA@XZ(this);
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest
==============
*/

void __fastcall bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this)
{
  ??0bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest@@QEAA@XZ(this);
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::init
==============
*/

void __fastcall bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::init(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, const bdFileID *fileID)
{
  ?init@bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest@@QEAAXPEBVbdFileID@@@Z(this, fileID);
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::init
==============
*/

void __fastcall bdTeamShowcaseGetShowcasedFilesRequest::init(bdTeamShowcaseGetShowcasedFilesRequest *this, const unsigned __int64 teamID, const unsigned __int16 fileTypeTag)
{
  ?init@bdTeamShowcaseGetShowcasedFilesRequest@@QEAAX_KG@Z(this, teamID, fileTypeTag);
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::bdTeamShowcaseGetShowcasedFilesRequest
==============
*/
void bdTeamShowcaseGetShowcasedFilesRequest::bdTeamShowcaseGetShowcasedFilesRequest(bdTeamShowcaseGetShowcasedFilesRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamShowcaseGetShowcasedFilesRequest::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTeamShowcaseGetShowcasedFilesRequest_vtbl *)&bdTeamShowcaseGetShowcasedFilesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdTeamShowcaseGetShowcasedFilesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamShowcaseGetShowcasedFilesRequest_vtbl *)&bdTeamShowcaseGetShowcasedFilesRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest
==============
*/
void bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest_vtbl *)&bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest_vtbl *)&bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::deserialize
==============
*/
bool bdTeamShowcaseGetShowcasedFilesRequest::deserialize(bdTeamShowcaseGetShowcasedFilesRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcaserequest.cpp", "bdTeamShowcaseGetShowcasedFilesRequest::deserialize", 0x23u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::deserialize
==============
*/
bool bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::deserialize(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteamshowcase\\bdteamshowcaserequest.cpp", "bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::deserialize", 0x3Au, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::init
==============
*/
void bdTeamShowcaseGetShowcasedFilesRequest::init(bdTeamShowcaseGetShowcasedFilesRequest *this, const unsigned __int64 teamID, const unsigned __int16 fileTypeTag)
{
  *((_QWORD *)&this->__vftable + 2) = teamID;
  *((_WORD *)&this->__vftable + 12) = fileTypeTag;
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::init
==============
*/
void bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::init(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, const bdFileID *fileID)
{
  *((_QWORD *)&this->__vftable + 2) = fileID;
}

/*
==============
bdTeamShowcaseGetShowcasedFilesRequest::serialize
==============
*/
bool bdTeamShowcaseGetShowcasedFilesRequest::serialize(bdTeamShowcaseGetShowcasedFilesRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt64(serializer, 1u, *((_QWORD *)&this->__vftable + 2)) && bdStructBufferSerializer::writeUInt16(serializer, 2u, *((_WORD *)&this->__vftable + 12));
}

/*
==============
bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::serialize
==============
*/
bool bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest::serialize(bdTeamShowcaseGetTeamIDsByShowcasedFilesRequest *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt64(serializer, 1u, *(_QWORD *)(*((_QWORD *)&this->__vftable + 2) + 32i64));
}

