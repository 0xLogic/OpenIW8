/*
==============
bdAuthUserInfo::getXboxOneUserId
==============
*/

unsigned __int64 __fastcall bdAuthUserInfo::getXboxOneUserId(bdAuthUserInfo *this)
{
  return ?getXboxOneUserId@bdAuthUserInfo@@QEBA_KXZ(this);
}

/*
==============
bdAuthUserInfo::initForXboxOne
==============
*/

void __fastcall bdAuthUserInfo::initForXboxOne(bdAuthUserInfo *this, unsigned int userIndex, unsigned __int64 userId, unsigned int version)
{
  ?initForXboxOne@bdAuthUserInfo@@QEAAXI_KI@Z(this, userIndex, userId, version);
}

/*
==============
bdAuthUserInfo::getXboxOneUserIndex
==============
*/

unsigned int __fastcall bdAuthUserInfo::getXboxOneUserIndex(bdAuthUserInfo *this)
{
  return ?getXboxOneUserIndex@bdAuthUserInfo@@QEBAIXZ(this);
}

/*
==============
bdAuthUserInfo::getXboxOneVersion
==============
*/

unsigned int __fastcall bdAuthUserInfo::getXboxOneVersion(bdAuthUserInfo *this)
{
  return ?getXboxOneVersion@bdAuthUserInfo@@QEBAIXZ(this);
}

/*
==============
bdAuthUserInfo::getXboxOneUserId
==============
*/
unsigned __int64 bdAuthUserInfo::getXboxOneUserId(bdAuthUserInfo *this)
{
  bdHandleAssert(this->m_initializedFor == (BD_COPY|BD_GET), "m_initializedFor == BD_XB1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthuserinfo-xboxone.cpp", "bdAuthUserInfo::getXboxOneUserId", 0x1Fu, "Auth user info object not initialized for XBoxOne");
  return this->m_xboxOne.m_userId;
}

/*
==============
bdAuthUserInfo::getXboxOneUserIndex
==============
*/
__int64 bdAuthUserInfo::getXboxOneUserIndex(bdAuthUserInfo *this)
{
  bdHandleAssert(this->m_initializedFor == (BD_COPY|BD_GET), "m_initializedFor == BD_XB1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthuserinfo-xboxone.cpp", "bdAuthUserInfo::getXboxOneUserIndex", 0x18u, "Auth user info object not initialized for XBoxOne");
  return this->m_steam.m_version;
}

/*
==============
bdAuthUserInfo::getXboxOneVersion
==============
*/
__int64 bdAuthUserInfo::getXboxOneVersion(bdAuthUserInfo *this)
{
  bdHandleAssert(this->m_initializedFor == (BD_COPY|BD_GET), "m_initializedFor == BD_XB1", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdauth\\bdauthplatform\\bdauthuserinfo-xboxone.cpp", "bdAuthUserInfo::getXboxOneVersion", 0x26u, "Auth user info object not initialized for XBoxOne");
  return this->m_xboxOne.m_version;
}

/*
==============
bdAuthUserInfo::initForXboxOne
==============
*/
void bdAuthUserInfo::initForXboxOne(bdAuthUserInfo *this, unsigned int userIndex, unsigned __int64 userId, unsigned int version)
{
  this->m_initializedFor = BD_COPY|BD_GET;
  this->m_xboxOne.m_userId = userId;
  this->m_steam.m_version = userIndex;
  this->m_xboxOne.m_version = version;
}

