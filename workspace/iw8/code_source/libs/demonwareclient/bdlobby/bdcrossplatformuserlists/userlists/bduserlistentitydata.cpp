/*
==============
bdUserListEntityData::bdUserListEntityData
==============
*/

void __fastcall bdUserListEntityData::bdUserListEntityData(bdUserListEntityData *this, const bdUserListEntityData *other)
{
  ??0bdUserListEntityData@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserListEntityData::~bdUserListEntityData
==============
*/

void __fastcall bdUserListEntityData::~bdUserListEntityData(bdUserListEntityData *this)
{
  ??1bdUserListEntityData@@UEAA@XZ(this);
}

/*
==============
bdUserListEntityData::bdUserListEntityData
==============
*/

void __fastcall bdUserListEntityData::bdUserListEntityData(bdUserListEntityData *this)
{
  ??0bdUserListEntityData@@QEAA@XZ(this);
}

/*
==============
bdUserListEntityData::validateSize
==============
*/

bool __fastcall bdUserListEntityData::validateSize(bdUserListEntityData *this)
{
  return ?validateSize@bdUserListEntityData@@MEAA_NXZ(this);
}

/*
==============
bdUserListEntityData::bdUserListEntityData
==============
*/
void bdUserListEntityData::bdUserListEntityData(bdUserListEntityData *this, const bdUserListEntityData *other)
{
  bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(this, other);
  this->__vftable = (bdUserListEntityData_vtbl *)&bdUserListEntityData::`vftable';
}

/*
==============
bdUserListEntityData::bdUserListEntityData
==============
*/
void bdUserListEntityData::bdUserListEntityData(bdUserListEntityData *this)
{
  bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(this);
  this->__vftable = (bdUserListEntityData_vtbl *)&bdUserListEntityData::`vftable';
}

/*
==============
bdUserListEntityData::~bdUserListEntityData
==============
*/
void bdUserListEntityData::~bdUserListEntityData(bdUserListEntityData *this)
{
  this->__vftable = (bdUserListEntityData_vtbl *)&bdUserListEntityData::`vftable';
  bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata(this);
}

/*
==============
bdUserListEntityData::validateSize
==============
*/
_BOOL8 bdUserListEntityData::validateSize(bdUserListEntityData *this)
{
  unsigned int Size; 
  bool v2; 
  unsigned int v4; 
  int v5; 

  Size = bdCrossPlatformUserMetadata::getSize(this);
  v2 = Size <= 0x400;
  if ( Size > 0x400 )
  {
    v5 = 1024;
    v4 = Size;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformUserLists", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformuserlists\\userlists\\bduserlistentitydata.cpp", "bdUserListEntityData::validateSize", 0x23u, "User metadata size %u exceeds the configured maximum %u.", v4, v5);
  }
  return v2;
}

