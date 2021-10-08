/*
==============
bdEnableCrossplatformProgression::setStatusMessage
==============
*/

void __fastcall bdEnableCrossplatformProgression::setStatusMessage(bdEnableCrossplatformProgression *this, const char *message)
{
  ?setStatusMessage@bdEnableCrossplatformProgression@@QEAAXPEBD@Z(this, message);
}

/*
==============
bdEnableCrossplatformProgression::bdEnableCrossplatformProgression
==============
*/

void __fastcall bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this, bdLoginResult *result, char *email, char *password)
{
  ??0bdEnableCrossplatformProgression@@QEAA@PEAVbdLoginResult@@PEAD1@Z(this, result, email, password);
}

/*
==============
bdEnableCrossplatformProgression::getStatus
==============
*/

bdEnableCrossplatformProgression::TaskStatus __fastcall bdEnableCrossplatformProgression::getStatus(bdEnableCrossplatformProgression *this)
{
  return ?getStatus@bdEnableCrossplatformProgression@@QEAA?AW4TaskStatus@1@XZ(this);
}

/*
==============
bdEnableCrossplatformProgression::pump
==============
*/

void __fastcall bdEnableCrossplatformProgression::pump(bdEnableCrossplatformProgression *this)
{
  ?pump@bdEnableCrossplatformProgression@@QEAAXXZ(this);
}

/*
==============
bdEnableCrossplatformProgression::getErrorCode
==============
*/

bdLobbyErrorCode __fastcall bdEnableCrossplatformProgression::getErrorCode(bdEnableCrossplatformProgression *this)
{
  return ?getErrorCode@bdEnableCrossplatformProgression@@QEBA?AW4bdLobbyErrorCode@@XZ(this);
}

/*
==============
bdEnableCrossplatformProgression::~bdEnableCrossplatformProgression
==============
*/

void __fastcall bdEnableCrossplatformProgression::~bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this)
{
  ??1bdEnableCrossplatformProgression@@QEAA@XZ(this);
}

/*
==============
bdEnableCrossplatformProgression::getStatusMessage
==============
*/

char *__fastcall bdEnableCrossplatformProgression::getStatusMessage(bdEnableCrossplatformProgression *this)
{
  return ?getStatusMessage@bdEnableCrossplatformProgression@@QEAAPEADXZ(this);
}

/*
==============
bdEnableCrossplatformProgression::bdEnableCrossplatformProgression
==============
*/

void __fastcall bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this, bdLoginResult *result, bdUnoAccountInfo *unoAccInfo)
{
  ??0bdEnableCrossplatformProgression@@QEAA@PEAVbdLoginResult@@PEAVbdUnoAccountInfo@@@Z(this, result, unoAccInfo);
}

/*
==============
bdEnableCrossplatformProgression::isPending
==============
*/

bool __fastcall bdEnableCrossplatformProgression::isPending(bdEnableCrossplatformProgression *this)
{
  return ?isPending@bdEnableCrossplatformProgression@@QEAA_NXZ(this);
}

/*
==============
bdEnableCrossplatformProgression::bdEnableCrossplatformProgression
==============
*/
void bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this, bdLoginResult *result, char *email, char *password)
{
  *(_QWORD *)&this->m_taskStatus = 0i64;
  this->m_loginAndLinkTask = NULL;
  this->m_upgradeAnonymousToFull = NULL;
  this->m_loginResult = result;
  bdStrlcpy(this->m_email, email, 0x100ui64);
  bdStrlcpy(this->m_password, password, 0x65ui64);
}

/*
==============
bdEnableCrossplatformProgression::bdEnableCrossplatformProgression
==============
*/
void bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this, bdLoginResult *result, bdUnoAccountInfo *unoAccInfo)
{
  this->m_cppEnableMode = UPGRADE_AND_NOTIFY;
  this->m_taskStatus = READY;
  this->m_loginAndLinkTask = NULL;
  this->m_upgradeAnonymousToFull = NULL;
  this->m_loginResult = result;
  this->m_unoAccountInfo = unoAccInfo;
}

/*
==============
bdEnableCrossplatformProgression::~bdEnableCrossplatformProgression
==============
*/
void bdEnableCrossplatformProgression::~bdEnableCrossplatformProgression(bdEnableCrossplatformProgression *this)
{
  bdLoginAndLink *m_loginAndLinkTask; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 
  bdRemoteTask *v6; 
  bdUpgradeAnonymousToFull *m_upgradeAnonymousToFull; 
  bdRemoteTask *v8; 
  bdRemoteTask *v9; 
  bdRemoteTask *v10; 
  bdRemoteTask *v11; 

  m_loginAndLinkTask = this->m_loginAndLinkTask;
  if ( m_loginAndLinkTask )
  {
    m_ptr = m_loginAndLinkTask->m_linkAccountTask.m_ptr;
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v4 = m_loginAndLinkTask->m_linkAccountTask.m_ptr;
      if ( v4 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v4->~bdReferencable)(v4, 1i64);
      m_loginAndLinkTask->m_linkAccountTask.m_ptr = NULL;
    }
    v5 = m_loginAndLinkTask->m_authenticateUserTask.m_ptr;
    if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v6 = m_loginAndLinkTask->m_authenticateUserTask.m_ptr;
      if ( v6 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v6->~bdReferencable)(v6, 1i64);
      m_loginAndLinkTask->m_authenticateUserTask.m_ptr = NULL;
    }
    bdRESTResponse::~bdRESTResponse(&m_loginAndLinkTask->m_authResponse);
    bdRESTResponse::~bdRESTResponse(&m_loginAndLinkTask->m_linkResponse);
    bdMemory::deallocate(m_loginAndLinkTask);
  }
  m_upgradeAnonymousToFull = this->m_upgradeAnonymousToFull;
  if ( m_upgradeAnonymousToFull )
  {
    v8 = m_upgradeAnonymousToFull->m_upgradeUmbrellaTask.m_ptr;
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v9 = m_upgradeAnonymousToFull->m_upgradeUmbrellaTask.m_ptr;
      if ( v9 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v9->~bdReferencable)(v9, 1i64);
      m_upgradeAnonymousToFull->m_upgradeUmbrellaTask.m_ptr = NULL;
    }
    v10 = m_upgradeAnonymousToFull->m_upgradeUnoTask.m_ptr;
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v11 = m_upgradeAnonymousToFull->m_upgradeUnoTask.m_ptr;
      if ( v11 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v11->~bdReferencable)(v11, 1i64);
      m_upgradeAnonymousToFull->m_upgradeUnoTask.m_ptr = NULL;
    }
    bdRESTResponse::~bdRESTResponse(&m_upgradeAnonymousToFull->m_umbrellaResponse);
    bdRESTResponse::~bdRESTResponse(&m_upgradeAnonymousToFull->m_unoResponse);
    bdUnoAccountInfo::~bdUnoAccountInfo(&m_upgradeAnonymousToFull->m_unoAccountInfo);
    bdMemory::deallocate(m_upgradeAnonymousToFull);
  }
}

/*
==============
bdEnableCrossplatformProgression::getErrorCode
==============
*/
bdLobbyErrorCode bdEnableCrossplatformProgression::getErrorCode(bdEnableCrossplatformProgression *this)
{
  bdEnableCrossplatformProgression::CppEnableMode m_cppEnableMode; 

  m_cppEnableMode = this->m_cppEnableMode;
  if ( m_cppEnableMode == LOGIN_AND_LINK )
    return bdLoginAndLink::getErrorCode(this->m_loginAndLinkTask);
  if ( m_cppEnableMode == UPGRADE_AND_NOTIFY )
    return bdUpgradeAnonymousToFull::getErrorCode(this->m_upgradeAnonymousToFull);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdenablecrossplatformprogression.cpp", "bdEnableCrossplatformProgression::getErrorCode", 0x9Bu, "Fetching error code in an unexpected state");
  return 30500;
}

/*
==============
bdEnableCrossplatformProgression::getStatus
==============
*/
__int64 bdEnableCrossplatformProgression::getStatus(bdEnableCrossplatformProgression *this)
{
  return (unsigned int)this->m_taskStatus;
}

/*
==============
bdEnableCrossplatformProgression::getStatusMessage
==============
*/
char *bdEnableCrossplatformProgression::getStatusMessage(bdEnableCrossplatformProgression *this)
{
  bdEnableCrossplatformProgression::CppEnableMode m_cppEnableMode; 
  char *m_statusMessage; 
  const char *StatusMessage; 
  char *result; 
  unsigned __int64 v6; 
  size_t v7; 

  m_cppEnableMode = this->m_cppEnableMode;
  m_statusMessage = this->m_statusMessage;
  if ( m_cppEnableMode == LOGIN_AND_LINK )
  {
    StatusMessage = bdLoginAndLink::getStatusMessage(this->m_loginAndLinkTask);
LABEL_3:
    bdStrlcpy(m_statusMessage, StatusMessage, 0x400ui64);
    return m_statusMessage;
  }
  if ( m_cppEnableMode == UPGRADE_AND_NOTIFY )
  {
    StatusMessage = bdUpgradeAnonymousToFull::getStatusMessage(this->m_upgradeAnonymousToFull);
    goto LABEL_3;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdenablecrossplatformprogression.cpp", "bdEnableCrossplatformProgression::getStatusMessage", 0x75u, "Unknown enable cpp mode");
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( aUnknownEnableC[v6] );
  if ( m_statusMessage )
  {
    v7 = 1023i64;
    if ( v6 < 0x3FF )
      v7 = v6;
    memcpy_0(m_statusMessage, "Unknown enable cpp mode", v7);
    m_statusMessage[v7] = 0;
  }
  result = m_statusMessage;
  this->m_taskStatus = FIRST_PARTY_AUTHED;
  return result;
}

/*
==============
bdEnableCrossplatformProgression::isPending
==============
*/
bool bdEnableCrossplatformProgression::isPending(bdEnableCrossplatformProgression *this)
{
  return (unsigned int)(this->m_taskStatus - 2) > 1;
}

/*
==============
bdEnableCrossplatformProgression::pump
==============
*/
void bdEnableCrossplatformProgression::pump(bdEnableCrossplatformProgression *this)
{
  bdEnableCrossplatformProgression::CppEnableMode m_cppEnableMode; 
  int v3; 
  bdUpgradeAnonymousToFull *v4; 
  bdUpgradeAnonymousToFull *m_upgradeAnonymousToFull; 
  bool v6; 
  bdLoginAndLink *v7; 
  bdLoginAndLink *m_loginAndLinkTask; 

  m_cppEnableMode = this->m_cppEnableMode;
  if ( m_cppEnableMode == LOGIN_AND_LINK )
  {
    v3 = 0;
    if ( this->m_taskStatus )
    {
      m_loginAndLinkTask = this->m_loginAndLinkTask;
    }
    else
    {
      v7 = (bdLoginAndLink *)bdMemory::allocate(0x3A10ui64);
      if ( v7 )
        bdLoginAndLink::bdLoginAndLink(v7, this->m_loginResult, this->m_email, this->m_password);
      else
        m_loginAndLinkTask = NULL;
      this->m_loginAndLinkTask = m_loginAndLinkTask;
    }
    bdLoginAndLink::pump(m_loginAndLinkTask);
    if ( !bdLoginAndLink::isPending(this->m_loginAndLinkTask) )
    {
      v6 = bdLoginAndLink::succeeded(this->m_loginAndLinkTask);
      goto LABEL_21;
    }
LABEL_19:
    this->m_taskStatus = FETCHING_FIRST_PARTY_TOKEN;
    return;
  }
  if ( m_cppEnableMode != UPGRADE_AND_NOTIFY )
  {
    this->m_taskStatus = FIRST_PARTY_AUTHED;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdenablecrossplatformprogression.cpp", "bdEnableCrossplatformProgression::pump", 0x5Fu, "Pumping cpp enable task with unknown mode");
    return;
  }
  v3 = 0;
  if ( this->m_taskStatus )
  {
    m_upgradeAnonymousToFull = this->m_upgradeAnonymousToFull;
  }
  else
  {
    v4 = (bdUpgradeAnonymousToFull *)bdMemory::allocate(0x3EA8ui64);
    if ( v4 )
      bdUpgradeAnonymousToFull::bdUpgradeAnonymousToFull(v4, this->m_loginResult, this->m_unoAccountInfo);
    else
      m_upgradeAnonymousToFull = NULL;
    this->m_upgradeAnonymousToFull = m_upgradeAnonymousToFull;
  }
  bdUpgradeAnonymousToFull::pump(m_upgradeAnonymousToFull);
  if ( bdUpgradeAnonymousToFull::isPending(this->m_upgradeAnonymousToFull) )
    goto LABEL_19;
  v6 = bdUpgradeAnonymousToFull::succeeded(this->m_upgradeAnonymousToFull);
LABEL_21:
  LOBYTE(v3) = v6;
  this->m_taskStatus = v3 + 2;
}

/*
==============
bdEnableCrossplatformProgression::setStatusMessage
==============
*/
void bdEnableCrossplatformProgression::setStatusMessage(bdEnableCrossplatformProgression *this, const char *message)
{
  bdStrlcpy(this->m_statusMessage, message, 0x400ui64);
}

