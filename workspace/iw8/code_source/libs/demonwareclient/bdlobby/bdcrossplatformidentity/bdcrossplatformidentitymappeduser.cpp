/*
==============
bdCrossPlatformIdentityMappedUser::getUserID
==============
*/

unsigned __int64 __fastcall bdCrossPlatformIdentityMappedUser::getUserID(bdCrossPlatformIdentityMappedUser *this)
{
  return ?getUserID@bdCrossPlatformIdentityMappedUser@@QEAA_KXZ(this);
}

/*
==============
bdCrossPlatformIdentityMappedUser::isValid
==============
*/

bool __fastcall bdCrossPlatformIdentityMappedUser::isValid(bdCrossPlatformIdentityMappedUser *this)
{
  return ?isValid@bdCrossPlatformIdentityMappedUser@@QEAA_NXZ(this);
}

/*
==============
bdCrossPlatformIdentityMappedUser::getAccountType
==============
*/

const char *__fastcall bdCrossPlatformIdentityMappedUser::getAccountType(bdCrossPlatformIdentityMappedUser *this)
{
  return ?getAccountType@bdCrossPlatformIdentityMappedUser@@QEAAPEBDXZ(this);
}

/*
==============
bdCrossPlatformIdentityMappedUser::getAccountType
==============
*/
const char *bdCrossPlatformIdentityMappedUser::getAccountType(bdCrossPlatformIdentityMappedUser *this)
{
  return this->_bytes_20;
}

/*
==============
bdCrossPlatformIdentityMappedUser::getUserID
==============
*/
unsigned __int64 bdCrossPlatformIdentityMappedUser::getUserID(bdCrossPlatformIdentityMappedUser *this)
{
  return this->m_userID;
}

/*
==============
bdCrossPlatformIdentityMappedUser::isValid
==============
*/
bool bdCrossPlatformIdentityMappedUser::isValid(bdCrossPlatformIdentityMappedUser *this)
{
  return this->m_userID != 0;
}

