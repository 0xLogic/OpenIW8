/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/

void __fastcall bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this)
{
  ??0bdCrossPlatformFriend@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/

void __fastcall bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this, const bdUserDetails *userDetails)
{
  ??0bdCrossPlatformFriend@@QEAA@AEBVbdUserDetails@@@Z(this, userDetails);
}

/*
==============
bdCrossPlatformFriend::getUserDetails
==============
*/

bdUserDetails *__fastcall bdCrossPlatformFriend::getUserDetails(bdCrossPlatformFriend *this, bdUserDetails *result)
{
  return ?getUserDetails@bdCrossPlatformFriend@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdCrossPlatformFriend::setPresence
==============
*/

void __fastcall bdCrossPlatformFriend::setPresence(bdCrossPlatformFriend *this, const bdUserPresenceInfo *presence)
{
  ?setPresence@bdCrossPlatformFriend@@QEAAXAEBVbdUserPresenceInfo@@@Z(this, presence);
}

/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/

void __fastcall bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this, const bdUserDetails *userDetails, const bdUserPresenceInfo *presence)
{
  ??0bdCrossPlatformFriend@@QEAA@AEBVbdUserDetails@@AEBVbdUserPresenceInfo@@@Z(this, userDetails, presence);
}

/*
==============
bdCrossPlatformFriend::setUserDetails
==============
*/

void __fastcall bdCrossPlatformFriend::setUserDetails(bdCrossPlatformFriend *this, const bdUserDetails *userDetails)
{
  ?setUserDetails@bdCrossPlatformFriend@@QEAAXAEBVbdUserDetails@@@Z(this, userDetails);
}

/*
==============
bdCrossPlatformFriend::getPresence
==============
*/

bdUserPresenceInfo *__fastcall bdCrossPlatformFriend::getPresence(bdCrossPlatformFriend *this, bdUserPresenceInfo *result)
{
  return ?getPresence@bdCrossPlatformFriend@@QEBA?AVbdUserPresenceInfo@@XZ(this, result);
}

/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/
void bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this, const bdUserDetails *userDetails)
{
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/
void bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this, const bdUserDetails *userDetails, const bdUserPresenceInfo *presence)
{
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence, presence);
}

/*
==============
bdCrossPlatformFriend::bdCrossPlatformFriend
==============
*/
void bdCrossPlatformFriend::bdCrossPlatformFriend(bdCrossPlatformFriend *this)
{
  bdUserDetails::bdUserDetails(&this->m_userDetails);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
}

/*
==============
bdCrossPlatformFriend::getPresence
==============
*/
bdUserPresenceInfo *bdCrossPlatformFriend::getPresence(bdCrossPlatformFriend *this, bdUserPresenceInfo *result)
{
  bdUserPresenceInfo::bdUserPresenceInfo(result, &this->m_presence);
  return result;
}

/*
==============
bdCrossPlatformFriend::getUserDetails
==============
*/
bdUserDetails *bdCrossPlatformFriend::getUserDetails(bdCrossPlatformFriend *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, &this->m_userDetails);
  return result;
}

/*
==============
bdCrossPlatformFriend::setPresence
==============
*/
void bdCrossPlatformFriend::setPresence(bdCrossPlatformFriend *this, const bdUserPresenceInfo *presence)
{
  bdUserPresenceInfo::operator=(&this->m_presence, presence);
}

/*
==============
bdCrossPlatformFriend::setUserDetails
==============
*/

void __fastcall bdCrossPlatformFriend::setUserDetails(bdCrossPlatformFriend *this, const bdUserDetails *userDetails)
{
  bdUserDetails::operator=(&this->m_userDetails, userDetails);
}

