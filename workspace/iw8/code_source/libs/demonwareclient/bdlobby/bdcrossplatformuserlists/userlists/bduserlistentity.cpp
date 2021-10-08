/*
==============
bdUserListEntity::setScore
==============
*/

void __fastcall bdUserListEntity::setScore(bdUserListEntity *this, const unsigned __int64 score)
{
  ?setScore@bdUserListEntity@@QEAAX_K@Z(this, score);
}

/*
==============
bdUserListEntity::setPresence
==============
*/

void __fastcall bdUserListEntity::setPresence(bdUserListEntity *this, const bdUserPresenceInfo *presence)
{
  ?setPresence@bdUserListEntity@@QEAAXAEBVbdUserPresenceInfo@@@Z(this, presence);
}

/*
==============
bdUserListEntity::getUserDetails
==============
*/

bdUserDetails *__fastcall bdUserListEntity::getUserDetails(bdUserListEntity *this, bdUserDetails *result)
{
  return ?getUserDetails@bdUserListEntity@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdUserListEntity::setUserData
==============
*/

void __fastcall bdUserListEntity::setUserData(bdUserListEntity *this, const bdUserListEntityData *userData)
{
  ?setUserData@bdUserListEntity@@QEAAXAEBVbdUserListEntityData@@@Z(this, userData);
}

/*
==============
bdUserListEntity::getScore
==============
*/

unsigned __int64 __fastcall bdUserListEntity::getScore(bdUserListEntity *this)
{
  return ?getScore@bdUserListEntity@@QEBA_KXZ(this);
}

/*
==============
bdUserListEntity::~bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::~bdUserListEntity(bdUserListEntity *this)
{
  ??1bdUserListEntity@@QEAA@XZ(this);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserDetails *userDetails, const unsigned __int64 score, const bdUserListEntityData *userData)
{
  ??0bdUserListEntity@@QEAA@AEBVbdUserDetails@@_KAEBVbdUserListEntityData@@@Z(this, userDetails, score, userData);
}

/*
==============
bdUserListEntity::getUserData
==============
*/

bdUserListEntityData *__fastcall bdUserListEntity::getUserData(bdUserListEntity *this, bdUserListEntityData *result)
{
  return ?getUserData@bdUserListEntity@@QEBA?AVbdUserListEntityData@@XZ(this, result);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user, const unsigned __int64 score, const bdUserListEntityData *userData)
{
  ??0bdUserListEntity@@QEAA@AEBVbdUserAccountID@@_KAEBVbdUserListEntityData@@@Z(this, user, score, userData);
}

/*
==============
bdUserListEntity::getUser
==============
*/

bdUserAccountID *__fastcall bdUserListEntity::getUser(bdUserListEntity *this, bdUserAccountID *result)
{
  return ?getUser@bdUserListEntity@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserDetails *userDetails, const unsigned __int64 score, const bdUserListEntityData *userData, const bdUserPresenceInfo *presence)
{
  ??0bdUserListEntity@@QEAA@AEBVbdUserDetails@@_KAEBVbdUserListEntityData@@AEBVbdUserPresenceInfo@@@Z(this, userDetails, score, userData, presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this)
{
  ??0bdUserListEntity@@QEAA@XZ(this);
}

/*
==============
bdUserListEntity::setUserDetails
==============
*/

void __fastcall bdUserListEntity::setUserDetails(bdUserListEntity *this, const bdUserDetails *userDetails)
{
  ?setUserDetails@bdUserListEntity@@QEAAXAEBVbdUserDetails@@@Z(this, userDetails);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user)
{
  ??0bdUserListEntity@@QEAA@AEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdUserListEntity::getPresence
==============
*/

bdUserPresenceInfo *__fastcall bdUserListEntity::getPresence(bdUserListEntity *this, bdUserPresenceInfo *result)
{
  return ?getPresence@bdUserListEntity@@QEBA?AVbdUserPresenceInfo@@XZ(this, result);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/

void __fastcall bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user, const unsigned __int64 score)
{
  ??0bdUserListEntity@@QEAA@AEBVbdUserAccountID@@_K@Z(this, user, score);
}

/*
==============
bdUserListEntity::setUser
==============
*/

void __fastcall bdUserListEntity::setUser(bdUserListEntity *this, const bdUserAccountID *user)
{
  ?setUser@bdUserListEntity@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user)
{
  this->m_score = 0i64;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user, const unsigned __int64 score)
{
  this->m_score = score;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserAccountID *user, const unsigned __int64 score, const bdUserListEntityData *userData)
{
  this->m_score = score;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData, userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserDetails *userDetails, const unsigned __int64 score, const bdUserListEntityData *userData)
{
  this->m_score = score;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData, userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this, const bdUserDetails *userDetails, const unsigned __int64 score, const bdUserListEntityData *userData, const bdUserPresenceInfo *presence)
{
  this->m_score = score;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData, userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence, presence);
}

/*
==============
bdUserListEntity::bdUserListEntity
==============
*/
void bdUserListEntity::bdUserListEntity(bdUserListEntity *this)
{
  this->m_score = 0i64;
  bdUserListEntityData::bdUserListEntityData(&this->m_userData);
  bdUserDetails::bdUserDetails(&this->m_userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdUserListEntity::~bdUserListEntity
==============
*/
void bdUserListEntity::~bdUserListEntity(bdUserListEntity *this)
{
  bdUserPresenceInfo::~bdUserPresenceInfo(&this->m_presence);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&this->m_userDetails.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_userDetails.gap79[7]);
  bdUserListEntityData::~bdUserListEntityData(&this->m_userData);
}

/*
==============
bdUserListEntity::getPresence
==============
*/
bdUserPresenceInfo *bdUserListEntity::getPresence(bdUserListEntity *this, bdUserPresenceInfo *result)
{
  bdUserPresenceInfo::bdUserPresenceInfo(result, &this->m_presence);
  return result;
}

/*
==============
bdUserListEntity::getScore
==============
*/
unsigned __int64 bdUserListEntity::getScore(bdUserListEntity *this)
{
  return this->m_score;
}

/*
==============
bdUserListEntity::getUser
==============
*/
bdUserAccountID *bdUserListEntity::getUser(bdUserListEntity *this, bdUserAccountID *result)
{
  bdUserDetails *p_m_userDetails; 
  const char *AccountType; 
  unsigned __int64 userID; 

  userID = (unsigned __int64)result;
  p_m_userDetails = &this->m_userDetails;
  AccountType = bdUserDetails::getAccountType(&this->m_userDetails);
  userID = bdUserDetails::getUserID(p_m_userDetails);
  bdUserAccountID::bdUserAccountID(result, &userID, AccountType);
  return result;
}

/*
==============
bdUserListEntity::getUserData
==============
*/
bdUserListEntityData *bdUserListEntity::getUserData(bdUserListEntity *this, bdUserListEntityData *result)
{
  bdUserListEntityData::bdUserListEntityData(result, &this->m_userData);
  return result;
}

/*
==============
bdUserListEntity::getUserDetails
==============
*/
bdUserDetails *bdUserListEntity::getUserDetails(bdUserListEntity *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, &this->m_userDetails);
  return result;
}

/*
==============
bdUserListEntity::setPresence
==============
*/
void bdUserListEntity::setPresence(bdUserListEntity *this, const bdUserPresenceInfo *presence)
{
  bdUserPresenceInfo::operator=(&this->m_presence, presence);
}

/*
==============
bdUserListEntity::setScore
==============
*/
void bdUserListEntity::setScore(bdUserListEntity *this, const unsigned __int64 score)
{
  this->m_score = score;
}

/*
==============
bdUserListEntity::setUser
==============
*/
void bdUserListEntity::setUser(bdUserListEntity *this, const bdUserAccountID *user)
{
  const bdUserDetails *v3; 
  bdUserDetails v4; 

  bdUserDetails::bdUserDetails(&v4, user);
  bdUserDetails::operator=(&this->m_userDetails, v3);
  bdUserDetails::~bdUserDetails((bdUserDetails *)&v4.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)&v4.gap79[7]);
}

/*
==============
bdUserListEntity::setUserData
==============
*/
void bdUserListEntity::setUserData(bdUserListEntity *this, const bdUserListEntityData *userData)
{
  bdCrossPlatformUserMetadata::operator=(&this->m_userData, userData);
}

/*
==============
bdUserListEntity::setUserDetails
==============
*/
void bdUserListEntity::setUserDetails(bdUserListEntity *this, const bdUserDetails *userDetails)
{
  bdUserDetails::operator=(&this->m_userDetails, userDetails);
}

