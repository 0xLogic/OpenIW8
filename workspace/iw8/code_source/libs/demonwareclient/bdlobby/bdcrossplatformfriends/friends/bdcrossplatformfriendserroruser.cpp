/*
==============
bdCrossPlatformFriendsErrorUser::setUser
==============
*/

void __fastcall bdCrossPlatformFriendsErrorUser::setUser(bdCrossPlatformFriendsErrorUser *this, const bdUserAccountID *user)
{
  ?setUser@bdCrossPlatformFriendsErrorUser@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdCrossPlatformFriendsErrorUser::setErrorCode
==============
*/

void __fastcall bdCrossPlatformFriendsErrorUser::setErrorCode(bdCrossPlatformFriendsErrorUser *this, const unsigned int errorCode)
{
  ?setErrorCode@bdCrossPlatformFriendsErrorUser@@QEAAXI@Z(this, errorCode);
}

/*
==============
bdCrossPlatformFriendsErrorUser::getErrorCode
==============
*/

unsigned int __fastcall bdCrossPlatformFriendsErrorUser::getErrorCode(bdCrossPlatformFriendsErrorUser *this)
{
  return ?getErrorCode@bdCrossPlatformFriendsErrorUser@@QEBAIXZ(this);
}

/*
==============
bdCrossPlatformFriendsErrorUser::getUser
==============
*/

bdUserAccountID *__fastcall bdCrossPlatformFriendsErrorUser::getUser(bdCrossPlatformFriendsErrorUser *this, bdUserAccountID *result)
{
  return ?getUser@bdCrossPlatformFriendsErrorUser@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser
==============
*/

void __fastcall bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser(bdCrossPlatformFriendsErrorUser *this, const bdUserAccountID *user, const unsigned int errorCode)
{
  ??0bdCrossPlatformFriendsErrorUser@@QEAA@AEBVbdUserAccountID@@I@Z(this, user, errorCode);
}

/*
==============
bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser
==============
*/

void __fastcall bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser(bdCrossPlatformFriendsErrorUser *this)
{
  ??0bdCrossPlatformFriendsErrorUser@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser
==============
*/
void bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser(bdCrossPlatformFriendsErrorUser *this, const bdUserAccountID *user, const unsigned int errorCode)
{
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user, user);
  this->m_errorCode = errorCode;
}

/*
==============
bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser
==============
*/
void bdCrossPlatformFriendsErrorUser::bdCrossPlatformFriendsErrorUser(bdCrossPlatformFriendsErrorUser *this)
{
  bdStructUserAccountID::bdStructUserAccountID(&this->m_user);
  this->m_errorCode = 0;
}

/*
==============
bdCrossPlatformFriendsErrorUser::getErrorCode
==============
*/
__int64 bdCrossPlatformFriendsErrorUser::getErrorCode(bdCrossPlatformFriendsErrorUser *this)
{
  return this->m_errorCode;
}

/*
==============
bdCrossPlatformFriendsErrorUser::getUser
==============
*/
bdUserAccountID *bdCrossPlatformFriendsErrorUser::getUser(bdCrossPlatformFriendsErrorUser *this, bdUserAccountID *result)
{
  bdUserAccountID::bdUserAccountID(result, &this->m_user);
  return result;
}

/*
==============
bdCrossPlatformFriendsErrorUser::setErrorCode
==============
*/
void bdCrossPlatformFriendsErrorUser::setErrorCode(bdCrossPlatformFriendsErrorUser *this, const unsigned int errorCode)
{
  this->m_errorCode = errorCode;
}

/*
==============
bdCrossPlatformFriendsErrorUser::setUser
==============
*/
void bdCrossPlatformFriendsErrorUser::setUser(bdCrossPlatformFriendsErrorUser *this, const bdUserAccountID *user)
{
  bdStructUserAccountID v3; 

  bdStructUserAccountID::bdStructUserAccountID(&v3, user);
  bdUserAccountID::operator=(&this->m_user, &v3);
  bdReferencable::operator=((bdReferencable *)&this->m_user.gap38[*(int *)(*(_QWORD *)&this->m_user.gap38[8] + 4i64) + 8], (const bdReferencable *)&v3.gap38[*(int *)(*(_QWORD *)&v3.gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v3._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v3.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v3._bytes_48);
}

