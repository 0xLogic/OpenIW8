/*
==============
bdPresenceData::bdPresenceData
==============
*/

void __fastcall bdPresenceData::bdPresenceData(bdPresenceData *this)
{
  ??0bdPresenceData@@QEAA@XZ(this);
}

/*
==============
bdPresenceData::~bdPresenceData
==============
*/

void __fastcall bdPresenceData::~bdPresenceData(bdPresenceData *this)
{
  ??1bdPresenceData@@UEAA@XZ(this);
}

/*
==============
bdPresenceData::bdPresenceData
==============
*/

void __fastcall bdPresenceData::bdPresenceData(bdPresenceData *this, const bdPresenceData *other)
{
  ??0bdPresenceData@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdPresenceData::bdPresenceData
==============
*/
void bdPresenceData::bdPresenceData(bdPresenceData *this, const bdPresenceData *other)
{
  bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(this, other);
  this->__vftable = (bdPresenceData_vtbl *)&bdPresenceData::`vftable';
}

/*
==============
bdPresenceData::bdPresenceData
==============
*/
void bdPresenceData::bdPresenceData(bdPresenceData *this)
{
  bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(this);
  this->__vftable = (bdPresenceData_vtbl *)&bdPresenceData::`vftable';
}

/*
==============
bdPresenceData::~bdPresenceData
==============
*/
void bdPresenceData::~bdPresenceData(bdPresenceData *this)
{
  this->__vftable = (bdPresenceData_vtbl *)&bdPresenceData::`vftable';
  bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata(this);
}

