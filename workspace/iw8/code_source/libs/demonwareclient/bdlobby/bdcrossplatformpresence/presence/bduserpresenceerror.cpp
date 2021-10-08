/*
==============
bdUserPresenceError::setUser
==============
*/

void __fastcall bdUserPresenceError::setUser(bdUserPresenceError *this, const bdUserAccountID *user)
{
  ?setUser@bdUserPresenceError@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdUserPresenceError::bdUserPresenceError
==============
*/

void __fastcall bdUserPresenceError::bdUserPresenceError(bdUserPresenceError *this)
{
  ??0bdUserPresenceError@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceError::deserialize
==============
*/

bool __fastcall bdUserPresenceError::deserialize(bdUserPresenceError *this, bdJSONDeserializer *deserializer)
{
  return ?deserialize@bdUserPresenceError@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, deserializer);
}

/*
==============
bdUserPresenceError::bdUserPresenceError
==============
*/

void __fastcall bdUserPresenceError::bdUserPresenceError(bdUserPresenceError *this, const bdUserAccountID *user, const unsigned int errorCode)
{
  ??0bdUserPresenceError@@QEAA@AEBVbdUserAccountID@@I@Z(this, user, errorCode);
}

/*
==============
bdUserPresenceError::setErrorCode
==============
*/

void __fastcall bdUserPresenceError::setErrorCode(bdUserPresenceError *this, const unsigned int errorCode)
{
  ?setErrorCode@bdUserPresenceError@@QEAAXI@Z(this, errorCode);
}

/*
==============
bdUserPresenceError::getErrorCode
==============
*/

unsigned int __fastcall bdUserPresenceError::getErrorCode(bdUserPresenceError *this)
{
  return ?getErrorCode@bdUserPresenceError@@QEBAIXZ(this);
}

/*
==============
bdUserPresenceError::getUser
==============
*/

bdUserAccountID *__fastcall bdUserPresenceError::getUser(bdUserPresenceError *this, bdUserAccountID *result)
{
  return ?getUser@bdUserPresenceError@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdUserPresenceError::bdUserPresenceError
==============
*/
void bdUserPresenceError::bdUserPresenceError(bdUserPresenceError *this, const bdUserAccountID *user, const unsigned int errorCode)
{
  bdUserAccountID::bdUserAccountID(&this->m_user, user);
  this->m_errorCode = errorCode;
}

/*
==============
bdUserPresenceError::bdUserPresenceError
==============
*/
void bdUserPresenceError::bdUserPresenceError(bdUserPresenceError *this)
{
  bdUserAccountID::bdUserAccountID(&this->m_user);
  this->m_errorCode = 0;
}

/*
==============
bdUserPresenceError::deserialize
==============
*/
char bdUserPresenceError::deserialize(bdUserPresenceError *this, bdJSONDeserializer *deserializer)
{
  unsigned int v5; 
  unsigned __int64 value[3]; 
  bdUserAccountID other; 
  __int64 accountType; 
  __int16 v9; 

  value[1] = -2i64;
  value[0] = 0i64;
  accountType = 0i64;
  v9 = 0;
  v5 = 0;
  if ( !bdJSONDeserializer::getUInt64(deserializer, "userID", value) || !bdJSONDeserializer::getString(deserializer, "accountType", (char *const)&accountType, 0xAu) || !bdJSONDeserializer::getUInt32(deserializer, "errorCode", &v5) )
    return 0;
  bdUserAccountID::bdUserAccountID(&other, value, (const char *const)&accountType);
  bdUserAccountID::operator=(&this->m_user, &other);
  this->m_errorCode = v5;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  return 1;
}

/*
==============
bdUserPresenceError::getErrorCode
==============
*/
__int64 bdUserPresenceError::getErrorCode(bdUserPresenceError *this)
{
  return this->m_errorCode;
}

/*
==============
bdUserPresenceError::getUser
==============
*/
bdUserAccountID *bdUserPresenceError::getUser(bdUserPresenceError *this, bdUserAccountID *result)
{
  bdUserAccountID::bdUserAccountID(result, &this->m_user);
  return result;
}

/*
==============
bdUserPresenceError::setErrorCode
==============
*/
void bdUserPresenceError::setErrorCode(bdUserPresenceError *this, const unsigned int errorCode)
{
  this->m_errorCode = errorCode;
}

/*
==============
bdUserPresenceError::setUser
==============
*/

void __fastcall bdUserPresenceError::setUser(bdUserPresenceError *this, const bdUserAccountID *user)
{
  bdUserAccountID::operator=(&this->m_user, user);
}

