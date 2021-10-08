/*
==============
bdLoginConfig::setTitleID
==============
*/

void __fastcall bdLoginConfig::setTitleID(bdLoginConfig *this, const unsigned int titleID)
{
  ?setTitleID@bdLoginConfig@@IEAAXI@Z(this, titleID);
}

/*
==============
bdLoginConfig::getTitleVersion
==============
*/

unsigned int __fastcall bdLoginConfig::getTitleVersion(bdLoginConfig *this)
{
  return ?getTitleVersion@bdLoginConfig@@QEBAIXZ(this);
}

/*
==============
bdLoginConfig::getLSGAddress
==============
*/

const char *__fastcall bdLoginConfig::getLSGAddress(bdLoginConfig *this)
{
  return ?getLSGAddress@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::isDediLogin
==============
*/

bool __fastcall bdLoginConfig::isDediLogin(bdLoginConfig *this)
{
  return ?isDediLogin@bdLoginConfig@@QEBA_NXZ(this);
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/

void __fastcall bdLoginConfig::bdLoginConfig(bdLoginConfig *this, const bdLoginConfig *__that)
{
  ??0bdLoginConfig@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdLoginConfig::getMaxInitialLoginDelayMS
==============
*/

unsigned int __fastcall bdLoginConfig::getMaxInitialLoginDelayMS(bdLoginConfig *this)
{
  return ?getMaxInitialLoginDelayMS@bdLoginConfig@@QEBAIXZ(this);
}

/*
==============
bdLoginConfig::getThunderpantsToken
==============
*/

const char *__fastcall bdLoginConfig::getThunderpantsToken(bdLoginConfig *this)
{
  return ?getThunderpantsToken@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::getUser
==============
*/

bdPlatformUser *__fastcall bdLoginConfig::getUser(bdLoginConfig *this, bdPlatformUser *result)
{
  return ?getUser@bdLoginConfig@@QEBA?AVbdPlatformUser@@XZ(this, result);
}

/*
==============
bdLoginConfig::getLoginQueueAddress
==============
*/

const char *__fastcall bdLoginConfig::getLoginQueueAddress(bdLoginConfig *this)
{
  return ?getLoginQueueAddress@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::getGameID
==============
*/

const char *__fastcall bdLoginConfig::getGameID(bdLoginConfig *this)
{
  return ?getGameID@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::shouldPauseAfterCrossPlatformLogin
==============
*/

bool __fastcall bdLoginConfig::shouldPauseAfterCrossPlatformLogin(bdLoginConfig *this)
{
  return ?shouldPauseAfterCrossPlatformLogin@bdLoginConfig@@QEBA_NXZ(this);
}

/*
==============
bdLoginConfig::getLoginQueueID
==============
*/

unsigned __int8 __fastcall bdLoginConfig::getLoginQueueID(bdLoginConfig *this)
{
  return ?getLoginQueueID@bdLoginConfig@@QEBAEXZ(this);
}

/*
==============
bdLoginConfig::getGameMode
==============
*/

unsigned int __fastcall bdLoginConfig::getGameMode(bdLoginConfig *this)
{
  return ?getGameMode@bdLoginConfig@@QEBAIXZ(this);
}

/*
==============
bdLoginConfig::getLoginQueuePort
==============
*/

unsigned __int16 __fastcall bdLoginConfig::getLoginQueuePort(bdLoginConfig *this)
{
  return ?getLoginQueuePort@bdLoginConfig@@QEBAGXZ(this);
}

/*
==============
bdLoginConfig::getLobbyEventHandler
==============
*/

bdLobbyEventHandler *__fastcall bdLoginConfig::getLobbyEventHandler(bdLoginConfig *this)
{
  return ?getLobbyEventHandler@bdLoginConfig@@QEBAPEAVbdLobbyEventHandler@@XZ(this);
}

/*
==============
bdLoginConfig::getTitleID
==============
*/

unsigned int __fastcall bdLoginConfig::getTitleID(bdLoginConfig *this, bdEnvironment environment)
{
  return ?getTitleID@bdLoginConfig@@QEBAIW4bdEnvironment@@@Z(this, environment);
}

/*
==============
bdLoginConfig::~bdLoginConfig
==============
*/

void __fastcall bdLoginConfig::~bdLoginConfig(bdLoginConfig *this)
{
  ??1bdLoginConfig@@UEAA@XZ(this);
}

/*
==============
bdLoginConfig::getDesiredUserName
==============
*/

const char *__fastcall bdLoginConfig::getDesiredUserName(bdLoginConfig *this)
{
  return ?getDesiredUserName@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::setAuthAddressAndPort
==============
*/

void __fastcall bdLoginConfig::setAuthAddressAndPort(bdLoginConfig *this, const char *authAddress, const unsigned __int16 authPort)
{
  ?setAuthAddressAndPort@bdLoginConfig@@IEAAXPEBDG@Z(this, authAddress, authPort);
}

/*
==============
bdLoginConfig::getMacAddr
==============
*/

bdMACAddr *__fastcall bdLoginConfig::getMacAddr(bdLoginConfig *this, bdMACAddr *result)
{
  return ?getMacAddr@bdLoginConfig@@QEBA?AVbdMACAddr@@XZ(this, result);
}

/*
==============
bdLoginConfig::getInternalAddr
==============
*/

unsigned int __fastcall bdLoginConfig::getInternalAddr(bdLoginConfig *this)
{
  return ?getInternalAddr@bdLoginConfig@@QEBAIXZ(this);
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/

void __fastcall bdLoginConfig::bdLoginConfig(bdLoginConfig *this)
{
  ??0bdLoginConfig@@AEAA@XZ(this);
}

/*
==============
bdLoginConfig::getLoginType
==============
*/

bdLoginConfig::LoginFlow __fastcall bdLoginConfig::getLoginType(bdLoginConfig *this)
{
  return ?getLoginType@bdLoginConfig@@QEBA?AW4LoginFlow@1@XZ(this);
}

/*
==============
bdLoginConfig::clientSetQueueID
==============
*/

bool __fastcall bdLoginConfig::clientSetQueueID(bdLoginConfig *this)
{
  return ?clientSetQueueID@bdLoginConfig@@QEBA_NXZ(this);
}

/*
==============
bdLoginConfig::setPushMessageHandler
==============
*/

void __fastcall bdLoginConfig::setPushMessageHandler(bdLoginConfig *this, bdPushMessageHandler *handler)
{
  ?setPushMessageHandler@bdLoginConfig@@IEAAXPEAVbdPushMessageHandler@@@Z(this, handler);
}

/*
==============
bdLoginConfig::getLobbyPushMessageHandlers
==============
*/

const bdFastArray<bdPushMessageHandler *> *__fastcall bdLoginConfig::getLobbyPushMessageHandlers(bdLoginConfig *this)
{
  return ?getLobbyPushMessageHandlers@bdLoginConfig@@QEBAAEBV?$bdFastArray@PEAVbdPushMessageHandler@@@@XZ(this);
}

/*
==============
bdLoginConfig::getServiceLevel
==============
*/

const char *__fastcall bdLoginConfig::getServiceLevel(bdLoginConfig *this)
{
  return ?getServiceLevel@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/

void __fastcall bdLoginConfig::bdLoginConfig(bdLoginConfig *this, const bdPlatformUser *user, const unsigned int titleID, const char *authAddress, const char *lsgAddress, const unsigned __int16 authPort, const unsigned __int16 lsgPort)
{
  ??0bdLoginConfig@@QEAA@AEBVbdPlatformUser@@IPEBD1GG@Z(this, user, titleID, authAddress, lsgAddress, authPort, lsgPort);
}

/*
==============
bdLoginConfig::shouldCreateAnonymousAccount
==============
*/

bool __fastcall bdLoginConfig::shouldCreateAnonymousAccount(bdLoginConfig *this)
{
  return ?shouldCreateAnonymousAccount@bdLoginConfig@@QEBA_NXZ(this);
}

/*
==============
bdLoginConfig::setLSGAddressAndPort
==============
*/

void __fastcall bdLoginConfig::setLSGAddressAndPort(bdLoginConfig *this, const char *lsgAddress, const unsigned __int16 lsgPort)
{
  ?setLSGAddressAndPort@bdLoginConfig@@IEAAXPEBDG@Z(this, lsgAddress, lsgPort);
}

/*
==============
bdLoginConfig::setTitleIDs
==============
*/

void __fastcall bdLoginConfig::setTitleIDs(bdLoginConfig *this, const unsigned int *titleIDs)
{
  ?setTitleIDs@bdLoginConfig@@IEAAXQEBI@Z(this, titleIDs);
}

/*
==============
bdLoginConfig::setQueueID
==============
*/

void __fastcall bdLoginConfig::setQueueID(bdLoginConfig *this, const unsigned __int8 queueID)
{
  ?setQueueID@bdLoginConfig@@IEAAXE@Z(this, queueID);
}

/*
==============
bdLoginConfig::getAuthPort
==============
*/

unsigned __int16 __fastcall bdLoginConfig::getAuthPort(bdLoginConfig *this)
{
  return ?getAuthPort@bdLoginConfig@@QEBAGXZ(this);
}

/*
==============
bdLoginConfig::getEnvironment
==============
*/

bdEnvironment __fastcall bdLoginConfig::getEnvironment(bdLoginConfig *this)
{
  return ?getEnvironment@bdLoginConfig@@QEBA?AW4bdEnvironment@@XZ(this);
}

/*
==============
bdLoginConfig::getLSGPort
==============
*/

unsigned __int16 __fastcall bdLoginConfig::getLSGPort(bdLoginConfig *this)
{
  return ?getLSGPort@bdLoginConfig@@QEBAGXZ(this);
}

/*
==============
bdLoginConfig::setTitleVersion
==============
*/

void __fastcall bdLoginConfig::setTitleVersion(bdLoginConfig *this, const unsigned int version)
{
  ?setTitleVersion@bdLoginConfig@@IEAAXI@Z(this, version);
}

/*
==============
bdLoginConfig::setServiceLevel
==============
*/

void __fastcall bdLoginConfig::setServiceLevel(bdLoginConfig *this, const char *sl)
{
  ?setServiceLevel@bdLoginConfig@@IEAAXPEBD@Z(this, sl);
}

/*
==============
bdLoginConfig::setLoginQueueAddressAndPort
==============
*/

void __fastcall bdLoginConfig::setLoginQueueAddressAndPort(bdLoginConfig *this, const char *loginQueueAddress, const unsigned __int16 loginQueuePort)
{
  ?setLoginQueueAddressAndPort@bdLoginConfig@@IEAAXPEBDG@Z(this, loginQueueAddress, loginQueuePort);
}

/*
==============
bdLoginConfig::getAuthAddress
==============
*/

const char *__fastcall bdLoginConfig::getAuthAddress(bdLoginConfig *this)
{
  return ?getAuthAddress@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::getEffectiveQueueID
==============
*/

unsigned __int8 __fastcall bdLoginConfig::getEffectiveQueueID(bdLoginConfig *this)
{
  return ?getEffectiveQueueID@bdLoginConfig@@QEBAEXZ(this);
}

/*
==============
bdLoginConfig::getRegion
==============
*/

const char *__fastcall bdLoginConfig::getRegion(bdLoginConfig *this)
{
  return ?getRegion@bdLoginConfig@@QEBAPEBDXZ(this);
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/
void bdLoginConfig::bdLoginConfig(bdLoginConfig *this)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  size_t v4; 
  size_t v5; 

  this->__vftable = (bdLoginConfig_vtbl *)&bdLoginConfig::`vftable';
  this->m_environment = BD_ENVIRONMENT_MAX;
  bdPlatformUser::bdPlatformUser(&this->m_user);
  this->m_authPort = 443;
  this->m_lsgPort = 3074;
  this->m_titleVersion = 0;
  this->m_loginType = NOT_CONNECTED;
  bdMACAddr::bdMACAddr(&this->m_macAddr);
  this->m_shouldCreateAnonymousAccount = 1;
  *(_WORD *)&this->m_dediLogin = 0;
  this->m_pushHandlers.m_data = NULL;
  *(_QWORD *)&this->m_pushHandlers.m_capacity = 10i64;
  this->m_pushHandlers.m_data = (bdPushMessageHandler **)bdMemory::allocate(0x50ui64);
  this->m_maxInitialLoginDelayMS = 0;
  *(_WORD *)&this->m_clientSetQueueID = 0;
  memset_0(this->m_thunderpantsToken, 0, sizeof(this->m_thunderpantsToken));
  memset_0(this->m_authAddress, 0, sizeof(this->m_authAddress));
  memset_0(this->m_lsgAddress, 0, sizeof(this->m_lsgAddress));
  *(_QWORD *)this->m_desiredUserName = 0i64;
  *(_QWORD *)&this->m_desiredUserName[8] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[16] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[24] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[32] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[40] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[48] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[56] = 0i64;
  this->m_desiredUserName[64] = 0;
  *(_DWORD *)this->m_gameID = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( region[v3] );
  if ( this != (bdLoginConfig *)-5298i64 )
  {
    v4 = 6i64;
    if ( v3 < 6 )
      v4 = v3;
    memcpy_0(this->m_region, "global", v4);
    this->m_region[v4] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v2;
  while ( sl[v2] );
  if ( this != (bdLoginConfig *)-5280i64 )
  {
    v5 = 4i64;
    if ( v2 < 4 )
      v5 = v2;
    memcpy_0(this->m_serviceLevel, "paid", v5);
    this->m_serviceLevel[v5] = 0;
  }
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/
void bdLoginConfig::bdLoginConfig(bdLoginConfig *this, const bdPlatformUser *user, const unsigned int titleID, const char *authAddress, const char *lsgAddress, const unsigned __int16 authPort, const unsigned __int16 lsgPort)
{
  bdWinRTPtr *m_ptr; 
  bool v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  size_t v14; 
  size_t v15; 

  this->__vftable = (bdLoginConfig_vtbl *)&bdLoginConfig::`vftable';
  this->m_environment = BD_ENVIRONMENT_MAX;
  m_ptr = user->m_user.m_ptr;
  this->m_user = (bdPlatformUser)user->m_user.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  this->m_authPort = authPort;
  this->m_lsgPort = lsgPort;
  this->m_titleVersion = 0;
  this->m_loginType = NOT_CONNECTED;
  bdMACAddr::bdMACAddr(&this->m_macAddr);
  this->m_shouldCreateAnonymousAccount = 1;
  *(_WORD *)&this->m_dediLogin = 0;
  this->m_pushHandlers.m_data = NULL;
  *(_QWORD *)&this->m_pushHandlers.m_capacity = 10i64;
  this->m_pushHandlers.m_data = (bdPushMessageHandler **)bdMemory::allocate(0x50ui64);
  this->m_maxInitialLoginDelayMS = 0;
  *(_WORD *)&this->m_clientSetQueueID = 0;
  v11 = authAddress && lsgAddress;
  bdHandleAssert(v11, "(authAddress != BD_NULL) && (lsgAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::bdLoginConfig", 0x49u, "Must instantiate bdLoginConfig with a valid Auth and LSG address.", -2i64);
  bdStrlcpy(this->m_authAddress, authAddress, 0x400ui64);
  bdStrlcpy(this->m_lsgAddress, lsgAddress, 0x400ui64);
  *(_QWORD *)this->m_desiredUserName = 0i64;
  *(_QWORD *)&this->m_desiredUserName[8] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[16] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[24] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[32] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[40] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[48] = 0i64;
  *(_QWORD *)&this->m_desiredUserName[56] = 0i64;
  this->m_desiredUserName[64] = 0;
  *(_DWORD *)this->m_gameID = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  v13 = -1i64;
  do
    ++v13;
  while ( region[v13] );
  if ( this != (bdLoginConfig *)-5298i64 )
  {
    v14 = 6i64;
    if ( v13 < 6 )
      v14 = v13;
    memcpy_0(this->m_region, "global", v14);
    this->m_region[v14] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v12;
  while ( sl[v12] );
  if ( this != (bdLoginConfig *)-5280i64 )
  {
    v15 = 4i64;
    if ( v12 < 4 )
      v15 = v12;
    memcpy_0(this->m_serviceLevel, "paid", v15);
    this->m_serviceLevel[v15] = 0;
  }
  this->m_titleIDs[0] = titleID;
  this->m_titleIDs[1] = titleID;
  this->m_titleIDs[2] = titleID;
  memset_0(this->m_thunderpantsToken, 0, sizeof(this->m_thunderpantsToken));
}

/*
==============
bdLoginConfig::~bdLoginConfig
==============
*/
void bdLoginConfig::~bdLoginConfig(bdLoginConfig *this)
{
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v3; 

  this->__vftable = (bdLoginConfig_vtbl *)&bdLoginConfig::`vftable';
  bdMemory::deallocate(this->m_pushHandlers.m_data);
  this->m_pushHandlers.m_data = NULL;
  *(_QWORD *)&this->m_pushHandlers.m_capacity = 0i64;
  m_ptr = this->m_user.m_user.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_user.m_user.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_user.m_user.m_ptr = NULL;
  }
}

/*
==============
bdLoginConfig::clientSetQueueID
==============
*/
_BOOL8 bdLoginConfig::clientSetQueueID(bdLoginConfig *this)
{
  return this->m_clientSetQueueID;
}

/*
==============
bdLoginConfig::getAuthAddress
==============
*/
char *bdLoginConfig::getAuthAddress(bdLoginConfig *this)
{
  return this->m_authAddress;
}

/*
==============
bdLoginConfig::getAuthPort
==============
*/
__int64 bdLoginConfig::getAuthPort(bdLoginConfig *this)
{
  return this->m_authPort;
}

/*
==============
bdLoginConfig::getDesiredUserName
==============
*/
char *bdLoginConfig::getDesiredUserName(bdLoginConfig *this)
{
  return this->m_desiredUserName;
}

/*
==============
bdLoginConfig::getEffectiveQueueID
==============
*/
unsigned __int8 bdLoginConfig::getEffectiveQueueID(bdLoginConfig *this)
{
  char *m_serviceLevel; 
  __int64 v3; 
  __int64 v4; 
  char v5; 
  int v6; 
  int v7; 

  if ( this->m_clientSetQueueID )
    return this->m_queueID;
  m_serviceLevel = this->m_serviceLevel;
  v3 = 0i64;
  v4 = 0i64;
  while ( 1 )
  {
    v5 = m_serviceLevel[v4++];
    if ( v5 != sl[v4 - 1] )
      break;
    if ( v4 == 5 )
      return 0;
  }
  do
  {
    v6 = (unsigned __int8)m_serviceLevel[v3++];
    v7 = v6 - (unsigned __int8)aFree[v3 - 1];
  }
  while ( !v7 && v3 != 5 );
  return v7 == 0;
}

/*
==============
bdLoginConfig::getEnvironment
==============
*/
__int64 bdLoginConfig::getEnvironment(bdLoginConfig *this)
{
  return (unsigned int)this->m_environment;
}

/*
==============
bdLoginConfig::getGameID
==============
*/
char *bdLoginConfig::getGameID(bdLoginConfig *this)
{
  return this->m_gameID;
}

/*
==============
bdLoginConfig::getGameMode
==============
*/
__int64 bdLoginConfig::getGameMode(bdLoginConfig *this)
{
  return this->m_gameMode;
}

/*
==============
bdLoginConfig::getInternalAddr
==============
*/
__int64 bdLoginConfig::getInternalAddr(bdLoginConfig *this)
{
  return this->m_internalAddr;
}

/*
==============
bdLoginConfig::getLSGAddress
==============
*/
char *bdLoginConfig::getLSGAddress(bdLoginConfig *this)
{
  return this->m_lsgAddress;
}

/*
==============
bdLoginConfig::getLSGPort
==============
*/
__int64 bdLoginConfig::getLSGPort(bdLoginConfig *this)
{
  return this->m_lsgPort;
}

/*
==============
bdLoginConfig::getLobbyEventHandler
==============
*/
bdLobbyEventHandler *bdLoginConfig::getLobbyEventHandler(bdLoginConfig *this)
{
  return this->m_lobbyEventHandler;
}

/*
==============
bdLoginConfig::getLobbyPushMessageHandlers
==============
*/
bdFastArray<bdPushMessageHandler *> *bdLoginConfig::getLobbyPushMessageHandlers(bdLoginConfig *this)
{
  return &this->m_pushHandlers;
}

/*
==============
bdLoginConfig::getLoginQueueAddress
==============
*/
char *bdLoginConfig::getLoginQueueAddress(bdLoginConfig *this)
{
  return this->m_loginQueueAddress;
}

/*
==============
bdLoginConfig::getLoginQueueID
==============
*/
__int64 bdLoginConfig::getLoginQueueID(bdLoginConfig *this)
{
  return this->m_queueID;
}

/*
==============
bdLoginConfig::getLoginQueuePort
==============
*/
__int64 bdLoginConfig::getLoginQueuePort(bdLoginConfig *this)
{
  return this->m_loginQueuePort;
}

/*
==============
bdLoginConfig::getLoginType
==============
*/
__int64 bdLoginConfig::getLoginType(bdLoginConfig *this)
{
  __int64 result; 

  result = (unsigned int)this->m_loginType;
  if ( (_DWORD)result == 1 )
  {
    result = 3i64;
    if ( this->m_dediLogin )
      return 8i64;
  }
  return result;
}

/*
==============
bdLoginConfig::getMacAddr
==============
*/
bdMACAddr *bdLoginConfig::getMacAddr(bdLoginConfig *this, bdMACAddr *result)
{
  *result = this->m_macAddr;
  return result;
}

/*
==============
bdLoginConfig::getMaxInitialLoginDelayMS
==============
*/
__int64 bdLoginConfig::getMaxInitialLoginDelayMS(bdLoginConfig *this)
{
  return this->m_maxInitialLoginDelayMS;
}

/*
==============
bdLoginConfig::getRegion
==============
*/
char *bdLoginConfig::getRegion(bdLoginConfig *this)
{
  return this->m_region;
}

/*
==============
bdLoginConfig::getServiceLevel
==============
*/
char *bdLoginConfig::getServiceLevel(bdLoginConfig *this)
{
  return this->m_serviceLevel;
}

/*
==============
bdLoginConfig::getThunderpantsToken
==============
*/
char *bdLoginConfig::getThunderpantsToken(bdLoginConfig *this)
{
  return this->m_thunderpantsToken;
}

/*
==============
bdLoginConfig::getTitleID
==============
*/
__int64 bdLoginConfig::getTitleID(bdLoginConfig *this, bdEnvironment environment)
{
  __int64 v2; 

  v2 = environment;
  bdHandleAssert(environment < BD_ENVIRONMENT_MAX, "environment < BD_ENVIRONMENT_MAX", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::getTitleID", 0x71u, "getTitleID called with invalid environment.");
  return this->m_titleIDs[v2];
}

/*
==============
bdLoginConfig::getTitleVersion
==============
*/
__int64 bdLoginConfig::getTitleVersion(bdLoginConfig *this)
{
  return this->m_titleVersion;
}

/*
==============
bdLoginConfig::getUser
==============
*/
bdPlatformUser *bdLoginConfig::getUser(bdLoginConfig *this, bdPlatformUser *result)
{
  bdWinRTPtr *m_ptr; 

  m_ptr = this->m_user.m_user.m_ptr;
  result->m_user.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdLoginConfig::isDediLogin
==============
*/
_BOOL8 bdLoginConfig::isDediLogin(bdLoginConfig *this)
{
  return this->m_dediLogin;
}

/*
==============
bdLoginConfig::setAuthAddressAndPort
==============
*/
void bdLoginConfig::setAuthAddressAndPort(bdLoginConfig *this, const char *authAddress, const unsigned __int16 authPort)
{
  char *m_authAddress; 

  m_authAddress = this->m_authAddress;
  bdHandleAssert(this->m_authAddress != NULL, "(m_authAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::setAuthAddressAndPort", 0x15Eu, "Must provide valid auth address");
  bdStrlcpy(m_authAddress, authAddress, 0x400ui64);
  this->m_authPort = authPort;
}

/*
==============
bdLoginConfig::setLSGAddressAndPort
==============
*/
void bdLoginConfig::setLSGAddressAndPort(bdLoginConfig *this, const char *lsgAddress, const unsigned __int16 lsgPort)
{
  char *m_lsgAddress; 

  m_lsgAddress = this->m_lsgAddress;
  bdHandleAssert(this->m_lsgAddress != NULL, "(m_lsgAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::setLSGAddressAndPort", 0x166u, "Must provide valid lsg address");
  bdStrlcpy(m_lsgAddress, lsgAddress, 0x400ui64);
  this->m_lsgPort = lsgPort;
}

/*
==============
bdLoginConfig::setLoginQueueAddressAndPort
==============
*/
void bdLoginConfig::setLoginQueueAddressAndPort(bdLoginConfig *this, const char *loginQueueAddress, const unsigned __int16 loginQueuePort)
{
  char *m_loginQueueAddress; 

  m_loginQueueAddress = this->m_loginQueueAddress;
  bdHandleAssert(this->m_loginQueueAddress != NULL, "(m_loginQueueAddress != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::setLoginQueueAddressAndPort", 0x16Eu, "Must provide valid login queue address");
  bdStrlcpy(m_loginQueueAddress, loginQueueAddress, 0x400ui64);
  this->m_loginQueuePort = loginQueuePort;
}

/*
==============
bdLoginConfig::setPushMessageHandler
==============
*/
void bdLoginConfig::setPushMessageHandler(bdLoginConfig *this, bdPushMessageHandler *handler)
{
  unsigned int m_capacity; 
  int v4; 
  unsigned int v6; 
  unsigned int m_size; 
  bdPushMessageHandler *v10; 

  if ( handler )
  {
    v10 = handler;
    m_capacity = this->m_pushHandlers.m_capacity;
    if ( this->m_pushHandlers.m_size == m_capacity )
    {
      v4 = m_capacity;
      if ( !m_capacity )
        v4 = 1;
      _RDI = NULL;
      v6 = m_capacity + v4;
      if ( v6 )
      {
        _RDI = (bdPushMessageHandler **)bdMemory::allocate(8i64 * v6);
        m_size = this->m_pushHandlers.m_size;
        if ( m_size )
          memcpy_0(_RDI, this->m_pushHandlers.m_data, 8i64 * m_size);
      }
      bdMemory::deallocate(this->m_pushHandlers.m_data);
      this->m_pushHandlers.m_capacity = v6;
      this->m_pushHandlers.m_data = _RDI;
    }
    else
    {
      _RDI = this->m_pushHandlers.m_data;
    }
    _RAX = this->m_pushHandlers.m_size;
    __asm
    {
      vmovsd  xmm0, [rsp+28h+arg_8]
      vmovsd  qword ptr [rdi+rax*8], xmm0
    }
    ++this->m_pushHandlers.m_size;
  }
}

/*
==============
bdLoginConfig::setQueueID
==============
*/
void bdLoginConfig::setQueueID(bdLoginConfig *this, const unsigned __int8 queueID)
{
  this->m_queueID = queueID;
  this->m_clientSetQueueID = 1;
}

/*
==============
bdLoginConfig::setServiceLevel
==============
*/
void bdLoginConfig::setServiceLevel(bdLoginConfig *this, const char *sl)
{
  __int64 v4; 
  __int64 v5; 
  char v6; 
  char v7; 
  bool v8; 

  bdHandleAssert(sl != NULL, "(sl != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::setServiceLevel", 0x18Du, "Must provide valid service level value");
  v4 = 0i64;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = sl[v5++];
    if ( v6 != ::sl[v5 - 1] )
      break;
    if ( v5 == 5 )
    {
      while ( 1 )
      {
        v7 = sl[v4++];
        if ( v7 != aFree[v4 - 1] )
          goto LABEL_7;
        if ( v4 == 5 )
        {
          v8 = 0;
          goto LABEL_8;
        }
      }
    }
  }
LABEL_7:
  v8 = 1;
LABEL_8:
  bdHandleAssert(v8, "(bdStrcmp(sl, BD_LOGIN_SERVICE_LEVEL_PAID) != 0 || bdStrcmp(sl, BD_LOGIN_SERVICE_LEVEL_FREE) != 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginconfig.cpp", "bdLoginConfig::setServiceLevel", 0x192u, "Service level must be 'paid' or 'free'");
  bdStrlcpy(this->m_serviceLevel, sl, 5ui64);
}

/*
==============
bdLoginConfig::setTitleID
==============
*/
void bdLoginConfig::setTitleID(bdLoginConfig *this, const unsigned int titleID)
{
  this->m_titleIDs[0] = titleID;
  this->m_titleIDs[1] = titleID;
  this->m_titleIDs[2] = titleID;
}

/*
==============
bdLoginConfig::setTitleIDs
==============
*/
void bdLoginConfig::setTitleIDs(bdLoginConfig *this, const unsigned int *titleIDs)
{
  this->m_titleIDs[0] = *titleIDs;
  this->m_titleIDs[1] = titleIDs[1];
  this->m_titleIDs[2] = titleIDs[2];
}

/*
==============
bdLoginConfig::setTitleVersion
==============
*/
void bdLoginConfig::setTitleVersion(bdLoginConfig *this, const unsigned int version)
{
  this->m_titleVersion = version;
}

/*
==============
bdLoginConfig::shouldCreateAnonymousAccount
==============
*/
_BOOL8 bdLoginConfig::shouldCreateAnonymousAccount(bdLoginConfig *this)
{
  return this->m_shouldCreateAnonymousAccount;
}

/*
==============
bdLoginConfig::shouldPauseAfterCrossPlatformLogin
==============
*/
_BOOL8 bdLoginConfig::shouldPauseAfterCrossPlatformLogin(bdLoginConfig *this)
{
  return this->m_shouldPauseFlow;
}

/*
==============
bdLoginConfig::bdLoginConfig
==============
*/
void bdLoginConfig::bdLoginConfig(bdLoginConfig *this, const bdLoginConfig *__that)
{
  bdWinRTPtr *m_ptr; 
  __int64 v8; 
  __int64 v9; 
  __int64 v20; 
  bdPushMessageHandler **v41; 
  __int64 m_capacity; 
  bdPushMessageHandler **v43; 
  unsigned int m_size; 

  _RDI = __that;
  _RBX = this;
  this->__vftable = (bdLoginConfig_vtbl *)&bdLoginConfig::`vftable';
  this->m_environment = __that->m_environment;
  m_ptr = __that->m_user.m_user.m_ptr;
  _RBX->m_user.m_user.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+18h]
    vmovsd  qword ptr [rbx+18h], xmm0
  }
  _RBX->m_titleIDs[2] = __that->m_titleIDs[2];
  _RAX = _RBX->m_authAddress;
  _RCX = __that->m_authAddress;
  v8 = 8i64;
  v9 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rax+50h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX += 128;
    --v9;
  }
  while ( v9 );
  _RBX->m_authPort = _RDI->m_authPort;
  _RAX = _RBX->m_lsgAddress;
  _RCX = _RDI->m_lsgAddress;
  v20 = 8i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rax+50h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX += 128;
    --v20;
  }
  while ( v20 );
  _RBX->m_lsgPort = _RDI->m_lsgPort;
  _RCX = _RBX->m_loginQueueAddress;
  _RAX = _RDI->m_loginQueueAddress;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128;
    --v8;
  }
  while ( v8 );
  _RBX->m_loginQueuePort = _RDI->m_loginQueuePort;
  _RBX->m_titleVersion = _RDI->m_titleVersion;
  _RBX->m_loginType = _RDI->m_loginType;
  *(_DWORD *)_RBX->m_macAddr.m_data = *(_DWORD *)_RDI->m_macAddr.m_data;
  *(_WORD *)&_RBX->m_macAddr.m_data[4] = *(_WORD *)&_RDI->m_macAddr.m_data[4];
  _RBX->m_gameMode = _RDI->m_gameMode;
  _RBX->m_internalAddr = _RDI->m_internalAddr;
  _RBX->m_shouldCreateAnonymousAccount = _RDI->m_shouldCreateAnonymousAccount;
  memcpy_0(_RBX->m_thunderpantsToken, _RDI->m_thunderpantsToken, sizeof(_RBX->m_thunderpantsToken));
  _RBX->m_dediLogin = _RDI->m_dediLogin;
  _RBX->m_shouldPauseFlow = _RDI->m_shouldPauseFlow;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+1447h]
    vmovups ymmword ptr [rbx+1447h], ymm0
    vmovups ymm1, ymmword ptr [rdi+1467h]
    vmovups ymmword ptr [rbx+1467h], ymm1
  }
  _RBX->m_desiredUserName[64] = _RDI->m_desiredUserName[64];
  _RBX->m_lobbyEventHandler = _RDI->m_lobbyEventHandler;
  _RBX->m_pushHandlers.m_capacity = _RDI->m_pushHandlers.m_capacity;
  _RBX->m_pushHandlers.m_size = _RDI->m_pushHandlers.m_size;
  v41 = NULL;
  m_capacity = _RDI->m_pushHandlers.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v43 = (bdPushMessageHandler **)bdMemory::allocate(8 * m_capacity);
    v41 = v43;
    m_size = _RDI->m_pushHandlers.m_size;
    if ( m_size )
      memcpy_0(v43, _RDI->m_pushHandlers.m_data, 8i64 * m_size);
  }
  _RBX->m_pushHandlers.m_data = v41;
  *(_DWORD *)_RBX->m_serviceLevel = *(_DWORD *)_RDI->m_serviceLevel;
  _RBX->m_serviceLevel[4] = _RDI->m_serviceLevel[4];
  _RBX->m_maxInitialLoginDelayMS = _RDI->m_maxInitialLoginDelayMS;
  _RBX->m_clientSetQueueID = _RDI->m_clientSetQueueID;
  _RBX->m_queueID = _RDI->m_queueID;
  *(_DWORD *)_RBX->m_gameID = *(_DWORD *)_RDI->m_gameID;
  *(_DWORD *)_RBX->m_region = *(_DWORD *)_RDI->m_region;
  *(_WORD *)&_RBX->m_region[4] = *(_WORD *)&_RDI->m_region[4];
  _RBX->m_region[6] = _RDI->m_region[6];
}

