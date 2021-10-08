/*
==============
bdUserPresence::setContext
==============
*/

void __fastcall bdUserPresence::setContext(bdUserPresence *this, const char *context)
{
  ?setContext@bdUserPresence@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdUserPresence::setPresence
==============
*/

void __fastcall bdUserPresence::setPresence(bdUserPresence *this, const bdUserPresenceInfo *presence)
{
  ?setPresence@bdUserPresence@@QEAAXAEBVbdUserPresenceInfo@@@Z(this, presence);
}

/*
==============
bdUserPresence::getUserDetails
==============
*/

bdUserDetails *__fastcall bdUserPresence::getUserDetails(bdUserPresence *this, bdUserDetails *result)
{
  return ?getUserDetails@bdUserPresence@@QEBA?AVbdUserDetails@@XZ(this, result);
}

/*
==============
bdUserPresence::getPresence
==============
*/

bdUserPresenceInfo *__fastcall bdUserPresence::getPresence(bdUserPresence *this, bdUserPresenceInfo *result)
{
  return ?getPresence@bdUserPresence@@QEBA?AVbdUserPresenceInfo@@XZ(this, result);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/

void __fastcall bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfo *presence)
{
  ??0bdUserPresence@@QEAA@AEBVbdUserAccountID@@PEBDAEBVbdUserPresenceInfo@@@Z(this, user, context, presence);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/

void __fastcall bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfo *presence)
{
  ??0bdUserPresence@@QEAA@AEBVbdUserDetails@@PEBDAEBVbdUserPresenceInfo@@@Z(this, userDetails, context, presence);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/

void __fastcall bdUserPresence::bdUserPresence(bdUserPresence *this)
{
  ??0bdUserPresence@@QEAA@XZ(this);
}

/*
==============
bdUserPresence::setUserDetails
==============
*/

void __fastcall bdUserPresence::setUserDetails(bdUserPresence *this, const bdUserDetails *userDetails)
{
  ?setUserDetails@bdUserPresence@@QEAAXAEBVbdUserDetails@@@Z(this, userDetails);
}

/*
==============
bdUserPresence::setUser
==============
*/

void __fastcall bdUserPresence::setUser(bdUserPresence *this, const bdUserAccountID *user)
{
  ?setUser@bdUserPresence@@QEAAXAEBVbdUserAccountID@@@Z(this, user);
}

/*
==============
bdUserPresence::~bdUserPresence
==============
*/

void __fastcall bdUserPresence::~bdUserPresence(bdUserPresence *this)
{
  ??1bdUserPresence@@QEAA@XZ(this);
}

/*
==============
bdUserPresence::operator=
==============
*/

bdUserPresence *__fastcall bdUserPresence::operator=(bdUserPresence *this, const bdUserPresence *other)
{
  return ??4bdUserPresence@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdUserPresence::getContext
==============
*/

const char *__fastcall bdUserPresence::getContext(bdUserPresence *this)
{
  return ?getContext@bdUserPresence@@QEBAPEBDXZ(this);
}

/*
==============
bdUserPresence::getUser
==============
*/

bdUserAccountID *__fastcall bdUserPresence::getUser(bdUserPresence *this, bdUserAccountID *result)
{
  return ?getUser@bdUserPresence@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/

void __fastcall bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserPresence *other)
{
  ??0bdUserPresence@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/
void bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserPresence *other)
{
  const bdUserPresence *v2; 
  bdUserPresence *v3; 

  v2 = other;
  v3 = this;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx], xmm0
  }
  this->m_context.m_buffer[16] = other->m_context.m_buffer[16];
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence, &other->m_presence);
  bdUserDetails::bdUserDetails(&v3->m_userDetails, &v2->m_userDetails);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/
void bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserAccountID *user, const char *context, const bdUserPresenceInfo *presence)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence, presence);
  bdUserDetails::bdUserDetails(&this->m_userDetails, user);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/
void bdUserPresence::bdUserPresence(bdUserPresence *this, const bdUserDetails *userDetails, const char *context, const bdUserPresenceInfo *presence)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence, presence);
  bdUserDetails::bdUserDetails(&this->m_userDetails, userDetails);
}

/*
==============
bdUserPresence::bdUserPresence
==============
*/
void bdUserPresence::bdUserPresence(bdUserPresence *this)
{
  unsigned __int64 v2; 
  size_t v3; 

  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  do
    ++v2;
  while ( *((_BYTE *)&queryFormat.fmt + v2 + 3) );
  if ( this )
  {
    v3 = 16i64;
    if ( v2 < 0x10 )
      v3 = v2;
    memcpy_0(this, (char *)&queryFormat.fmt + 3, v3);
    this->m_context.m_buffer[v3] = 0;
  }
  bdUserPresenceInfo::bdUserPresenceInfo(&this->m_presence);
  bdUserDetails::bdUserDetails(&this->m_userDetails);
}

/*
==============
bdUserPresence::~bdUserPresence
==============
*/
void bdUserPresence::~bdUserPresence(bdUserPresence *this)
{
  bdUserDetails::~bdUserDetails((bdUserDetails *)&this->m_userDetails.gap79[7]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_userDetails.gap79[7]);
  bdUserPresenceInfo::~bdUserPresenceInfo(&this->m_presence);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_context);
}

/*
==============
bdUserPresence::operator=
==============
*/
bdUserPresence *bdUserPresence::operator=(bdUserPresence *this, const bdUserPresence *other)
{
  const bdUserPresence *v2; 
  bdUserPresence *v3; 

  v2 = other;
  v3 = this;
  if ( this != other )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx], xmm0
    }
    this->m_context.m_buffer[16] = other->m_context.m_buffer[16];
    bdUserPresenceInfo::operator=(&this->m_presence, &other->m_presence);
    bdUserDetails::operator=(&v3->m_userDetails, &v2->m_userDetails);
  }
  return v3;
}

/*
==============
bdUserPresence::getContext
==============
*/
bdUserPresence *bdUserPresence::getContext(bdUserPresence *this)
{
  return this;
}

/*
==============
bdUserPresence::getPresence
==============
*/
bdUserPresenceInfo *bdUserPresence::getPresence(bdUserPresence *this, bdUserPresenceInfo *result)
{
  bdUserPresenceInfo::bdUserPresenceInfo(result, &this->m_presence);
  return result;
}

/*
==============
bdUserPresence::getUser
==============
*/
bdUserAccountID *bdUserPresence::getUser(bdUserPresence *this, bdUserAccountID *result)
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
bdUserPresence::getUserDetails
==============
*/
bdUserDetails *bdUserPresence::getUserDetails(bdUserPresence *this, bdUserDetails *result)
{
  bdUserDetails::bdUserDetails(result, &this->m_userDetails);
  return result;
}

/*
==============
bdUserPresence::setContext
==============
*/

void __fastcall bdUserPresence::setContext(bdUserPresence *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdUserPresence::setPresence
==============
*/
void bdUserPresence::setPresence(bdUserPresence *this, const bdUserPresenceInfo *presence)
{
  bdUserPresenceInfo::operator=(&this->m_presence, presence);
}

/*
==============
bdUserPresence::setUser
==============
*/
void bdUserPresence::setUser(bdUserPresence *this, const bdUserAccountID *user)
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
bdUserPresence::setUserDetails
==============
*/
void bdUserPresence::setUserDetails(bdUserPresence *this, const bdUserDetails *userDetails)
{
  bdUserDetails::operator=(&this->m_userDetails, userDetails);
}

