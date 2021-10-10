/*
==============
bdLoginFlow::loginDelayElapsed
==============
*/

bool __fastcall bdLoginFlow::loginDelayElapsed(bdLoginFlow *this)
{
  return ?loginDelayElapsed@bdLoginFlow@@QEAA_NXZ(this);
}

/*
==============
bdLoginFlow::~bdLoginFlow
==============
*/

void __fastcall bdLoginFlow::~bdLoginFlow(bdLoginFlow *this)
{
  ??1bdLoginFlow@@QEAA@XZ(this);
}

/*
==============
bdLoginFlow::bdLoginFlow
==============
*/

void __fastcall bdLoginFlow::bdLoginFlow(bdLoginFlow *this, bdLoginConfig *loginConfig, bdLoginStatus *loginStatus, bdLoginResult *loginResult)
{
  ??0bdLoginFlow@@QEAA@PEAVbdLoginConfig@@PEAVbdLoginStatus@@PEAVbdLoginResult@@@Z(this, loginConfig, loginStatus, loginResult);
}

/*
==============
bdLoginFlow::getQueueTask
==============
*/

bdLoginTaskJoinQueue *__fastcall bdLoginFlow::getQueueTask(bdLoginFlow *this)
{
  return ?getQueueTask@bdLoginFlow@@QEAAPEAVbdLoginTaskJoinQueue@@XZ(this);
}

/*
==============
bdLoginFlow::reset
==============
*/

void __fastcall bdLoginFlow::reset(bdLoginFlow *this)
{
  ?reset@bdLoginFlow@@QEAAXXZ(this);
}

/*
==============
bdLoginFlow::loginQueuePollWaitElapsed
==============
*/

bool __fastcall bdLoginFlow::loginQueuePollWaitElapsed(bdLoginFlow *this)
{
  return ?loginQueuePollWaitElapsed@bdLoginFlow@@QEAA_NXZ(this);
}

/*
==============
bdLoginFlow::validateResumeConfig
==============
*/

bool __fastcall bdLoginFlow::validateResumeConfig(bdLoginFlow *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  return ?validateResumeConfig@bdLoginFlow@@QEAA_NW4bdLoginResumeFlow@@AEAVbdLoginResumeConfig@@@Z(this, resumeFlow, resumeConfig);
}

/*
==============
bdLoginFlow::getAuthTask
==============
*/

bdLoginTaskAuthenticate *__fastcall bdLoginFlow::getAuthTask(bdLoginFlow *this)
{
  return ?getAuthTask@bdLoginFlow@@QEAAPEAVbdLoginTaskAuthenticate@@XZ(this);
}

/*
==============
bdLoginFlow::handleBackOffState
==============
*/

void __fastcall bdLoginFlow::handleBackOffState(bdLoginFlow *this)
{
  ?handleBackOffState@bdLoginFlow@@IEAAXXZ(this);
}

/*
==============
bdLoginFlow::resume
==============
*/

void __fastcall bdLoginFlow::resume(bdLoginFlow *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  ?resume@bdLoginFlow@@QEAAXW4bdLoginResumeFlow@@AEAVbdLoginResumeConfig@@@Z(this, resumeFlow, resumeConfig);
}

/*
==============
bdLoginFlow::pump
==============
*/

bdLoginFailure::bdLoginFailureCode __fastcall bdLoginFlow::pump(bdLoginFlow *this)
{
  return ?pump@bdLoginFlow@@QEAA?AW4bdLoginFailureCode@bdLoginFailure@@XZ(this);
}

/*
==============
bdLoginFlow::abort
==============
*/

void __fastcall bdLoginFlow::abort(bdLoginFlow *this)
{
  ?abort@bdLoginFlow@@QEAAXXZ(this);
}

/*
==============
bdLoginFlow::recordBackoffError
==============
*/

void __fastcall bdLoginFlow::recordBackoffError(bdLoginFlow *this, const char *errorMessage)
{
  ?recordBackoffError@bdLoginFlow@@IEAAXPEBD@Z(this, errorMessage);
}

/*
==============
bdLoginFlow::validateConfig
==============
*/

bool __fastcall bdLoginFlow::validateConfig(bdLoginFlow *this)
{
  return ?validateConfig@bdLoginFlow@@QEAA_NXZ(this);
}

/*
==============
bdLoginFlow::bdLoginFlow
==============
*/
void bdLoginFlow::bdLoginFlow(bdLoginFlow *this, bdLoginConfig *loginConfig, bdLoginStatus *loginStatus, bdLoginResult *loginResult)
{
  bdLoginTask *Myval2; 

  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
  this->m_firstPartyTask._Mypair._Myval2 = NULL;
  bdLoginTaskAuthenticate::bdLoginTaskAuthenticate(&this->m_authenticateTask, loginConfig, loginResult);
  bdLoginTaskCreateUnoAnonymousAccount::bdLoginTaskCreateUnoAnonymousAccount(&this->m_createUnoAnonymousAccountTask, loginConfig, loginResult);
  bdLoginTaskCreateUnoAccount::bdLoginTaskCreateUnoAccount(&this->m_createUnoAccountTask, loginConfig, loginResult);
  bdLoginTaskAuthenticateUnoAccount::bdLoginTaskAuthenticateUnoAccount(&this->m_authenticateUnoAccountTask, loginConfig, loginResult);
  bdLoginTaskUpdateUnoAccount::bdLoginTaskUpdateUnoAccount(&this->m_updateUnoAccountTask, loginConfig, loginResult);
  bdLoginTaskUmbrellaCrossplay::bdLoginTaskUmbrellaCrossplay(&this->m_umbrellaCrossplayTask, loginConfig, loginResult);
  bdLoginTaskUmbrellaLegacyLogin::bdLoginTaskUmbrellaLegacyLogin(&this->m_umbrellaLegacyLoginTask, loginConfig, loginResult);
  bdLoginTaskJoinQueue::bdLoginTaskJoinQueue(&this->m_joinQueueTask, loginConfig, loginResult);
  bdLoginTaskPollQueue::bdLoginTaskPollQueue(&this->m_pollQueueTask, loginConfig, loginResult);
  bdLoginTaskConnectToLSG::bdLoginTaskConnectToLSG(&this->m_connectToLSGTask, loginConfig, loginResult);
  bdLoginTaskReportExtendedAuthInfo::bdLoginTaskReportExtendedAuthInfo(&this->m_reportExtendedAuthInfoTask, loginConfig, loginResult);
  bdLoginTaskFetchUnoAccount::bdLoginTaskFetchUnoAccount(&this->m_fetchUnoAccountTask, loginConfig, loginResult);
  this->m_loginConfig = loginConfig;
  this->m_loginStatus = loginStatus;
  this->m_loginResult = loginResult;
  this->m_code = NOT_AN_ERROR;
  Myval2 = this->m_firstPartyTask._Mypair._Myval2;
  this->m_firstPartyTask._Mypair._Myval2 = NULL;
  if ( Myval2 )
    ((void (__fastcall *)(bdLoginTask *, __int64))Myval2->~bdLoginTask)(Myval2, 1i64);
  bdBackoffTimer::setTimeouts(&this->m_backoffTimer, defaultFlowBackOffTimeouts, 4u);
}

/*
==============
bdLoginFlow::~bdLoginFlow
==============
*/
void bdLoginFlow::~bdLoginFlow(bdLoginFlow *this)
{
  bdLoginTask *Myval2; 

  bdLoginTaskFetchUnoAccount::~bdLoginTaskFetchUnoAccount(&this->m_fetchUnoAccountTask);
  bdLoginTaskReportExtendedAuthInfo::~bdLoginTaskReportExtendedAuthInfo(&this->m_reportExtendedAuthInfoTask);
  bdLoginTaskConnectToLSG::~bdLoginTaskConnectToLSG(&this->m_connectToLSGTask);
  bdLoginTaskPollQueue::~bdLoginTaskPollQueue(&this->m_pollQueueTask);
  bdLoginTaskJoinQueue::~bdLoginTaskJoinQueue(&this->m_joinQueueTask);
  bdLoginTaskUmbrellaLegacyLogin::~bdLoginTaskUmbrellaLegacyLogin(&this->m_umbrellaLegacyLoginTask);
  bdLoginTaskUmbrellaCrossplay::~bdLoginTaskUmbrellaCrossplay(&this->m_umbrellaCrossplayTask);
  bdLoginTaskUpdateUnoAccount::~bdLoginTaskUpdateUnoAccount(&this->m_updateUnoAccountTask);
  bdLoginTaskAuthenticateUnoAccount::~bdLoginTaskAuthenticateUnoAccount(&this->m_authenticateUnoAccountTask);
  bdLoginTaskCreateUnoAccount::~bdLoginTaskCreateUnoAccount(&this->m_createUnoAccountTask);
  bdLoginTaskCreateUnoAnonymousAccount::~bdLoginTaskCreateUnoAnonymousAccount(&this->m_createUnoAnonymousAccountTask);
  bdLoginTaskAuthenticate::~bdLoginTaskAuthenticate(&this->m_authenticateTask);
  Myval2 = this->m_firstPartyTask._Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(bdLoginTask *, __int64))Myval2->~bdLoginTask)(Myval2, 1i64);
}

/*
==============
bdLoginFlow::abort
==============
*/
void bdLoginFlow::abort(bdLoginFlow *this)
{
  bdLoginTask *Myval2; 

  Myval2 = this->m_firstPartyTask._Mypair._Myval2;
  if ( Myval2 )
    Myval2->abortTask(Myval2);
  this->m_authenticateTask.abortTask(&this->m_authenticateTask);
  this->m_createUnoAnonymousAccountTask.abortTask(&this->m_createUnoAnonymousAccountTask);
  this->m_createUnoAccountTask.abortTask(&this->m_createUnoAccountTask);
  this->m_authenticateUnoAccountTask.abortTask(&this->m_authenticateUnoAccountTask);
  this->m_updateUnoAccountTask.abortTask(&this->m_updateUnoAccountTask);
  this->m_umbrellaCrossplayTask.abortTask(&this->m_umbrellaCrossplayTask);
  this->m_umbrellaLegacyLoginTask.abortTask(&this->m_umbrellaLegacyLoginTask);
  this->m_joinQueueTask.abortTask(&this->m_joinQueueTask);
  this->m_pollQueueTask.abortTask(&this->m_pollQueueTask);
  this->m_connectToLSGTask.abortTask(&this->m_connectToLSGTask);
  this->m_reportExtendedAuthInfoTask.abortTask(&this->m_reportExtendedAuthInfoTask);
  this->m_fetchUnoAccountTask.abortTask(&this->m_fetchUnoAccountTask);
  bdLoginStatus::setFinishedFlow(this->m_loginStatus, 0);
}

/*
==============
bdLoginFlow::getAuthTask
==============
*/
bdLoginTaskAuthenticate *bdLoginFlow::getAuthTask(bdLoginFlow *this)
{
  return &this->m_authenticateTask;
}

/*
==============
bdLoginFlow::getQueueTask
==============
*/
bdLoginTaskJoinQueue *bdLoginFlow::getQueueTask(bdLoginFlow *this)
{
  return &this->m_joinQueueTask;
}

/*
==============
bdLoginFlow::handleBackOffState
==============
*/
void bdLoginFlow::handleBackOffState(bdLoginFlow *this)
{
  bdLoginTask *Myval2; 

  if ( bdBackoffTimer::checkTimer(&this->m_backoffTimer) )
  {
    if ( bdBackoffTimer::maxFailuresReached(&this->m_backoffTimer) )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::handleBackOffState", 0x3BAu, "Reached backoff limit, failing out");
      bdLoginStatus::updateLoginStatusCode(this->m_loginStatus, FAILED);
    }
    else
    {
      Myval2 = this->m_firstPartyTask._Mypair._Myval2;
      if ( Myval2 )
      {
        this->m_firstPartyTask._Mypair._Myval2 = NULL;
        ((void (__fastcall *)(bdLoginTask *, __int64))Myval2->~bdLoginTask)(Myval2, 1i64);
      }
      this->m_authenticateTask.reset(&this->m_authenticateTask);
      this->m_createUnoAnonymousAccountTask.reset(&this->m_createUnoAnonymousAccountTask);
      this->m_createUnoAccountTask.reset(&this->m_createUnoAccountTask);
      this->m_authenticateUnoAccountTask.reset(&this->m_authenticateUnoAccountTask);
      this->m_updateUnoAccountTask.reset(&this->m_updateUnoAccountTask);
      this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
      this->m_umbrellaLegacyLoginTask.reset(&this->m_umbrellaLegacyLoginTask);
      this->m_joinQueueTask.reset(&this->m_joinQueueTask);
      this->m_pollQueueTask.reset(&this->m_pollQueueTask);
      this->m_connectToLSGTask.reset(&this->m_connectToLSGTask);
      this->m_reportExtendedAuthInfoTask.reset(&this->m_reportExtendedAuthInfoTask);
      this->m_fetchUnoAccountTask.reset(&this->m_fetchUnoAccountTask);
      bdLoginStatus::setFinishedFlow(this->m_loginStatus, 0);
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Reset bdLoginFlow", READY);
    }
  }
}

/*
==============
bdLoginFlow::loginDelayElapsed
==============
*/
bool bdLoginFlow::loginDelayElapsed(bdLoginFlow *this)
{
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  float m_loginDelayMS; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_loginDelayStartTimestamp, HiResTimeStamp);
  m_loginDelayMS = (float)this->m_loginDelayMS;
  return (float)(*(float *)&ElapsedTime * 1000.0) >= m_loginDelayMS;
}

/*
==============
bdLoginFlow::loginQueuePollWaitElapsed
==============
*/
bool bdLoginFlow::loginQueuePollWaitElapsed(bdLoginFlow *this)
{
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  float v4; 
  float v5; 
  unsigned __int64 v6; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_loginQueueWaitStartTimestamp, HiResTimeStamp);
  v5 = *(float *)&ElapsedTime * 1000.0;
  v4 = *(float *)&ElapsedTime * 1000.0;
  v6 = 0i64;
  if ( (float)(*(float *)&ElapsedTime * 1000.0) >= 9.223372e18 )
  {
    v4 = v5 - 9.223372e18;
    if ( (float)(v5 - 9.223372e18) < 9.223372e18 )
      v6 = 0x8000000000000000ui64;
  }
  return v6 + (unsigned int)(int)v4 >= bdLoginStatus::getNextPollAfterMS(this->m_loginStatus);
}

/*
==============
bdLoginFlow::pump
==============
*/
__int64 bdLoginFlow::pump(bdLoginFlow *this)
{
  char *p_m_firstPartyTask; 
  bdLoginResult *m_loginResult; 
  bdLoginConfig *m_loginConfig; 
  bdRemoteTask *v5; 
  bdLoginTask *v6; 
  bool isDediLogin; 
  bdLoginStatus *m_loginStatus; 
  bdLoginResult *v9; 
  const char *ThunderpantsToken; 
  bdLoginTask *Myval2; 
  void (**v12)(void); 
  bdLoginStatus *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  unsigned int MaxInitialLoginDelayMS; 
  bdLoginStatus *v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int64 HiResTimeStamp; 
  double ElapsedTime; 
  float m_loginDelayMS; 
  bdLoginTaskAuthenticate::AuthStatusCode TaskCode; 
  bdEnvironment Environment; 
  const char *v26; 
  bdLoginStatus *v27; 
  const char *v28; 
  const char *v29; 
  bool isCrossPlayEnabled; 
  bdLoginStatus *v31; 
  bdLoginTaskJoinQueue::JoinQueueState v32; 
  bdLoginTaskJoinQueue *v33; 
  bool v34; 
  bdLoginStatus *v35; 
  bdLoginQueueRecord *LoginqueueRecord; 
  bdLoginStatus *v37; 
  bdLoginStatus *v38; 
  const char *v39; 
  __int64 (__fastcall **v40)(void *); 
  void *p_m_joinQueueTask; 
  const char *v42; 
  bdLoginTaskPollQueue::PollQueueState v43; 
  bdLoginStatus *v44; 
  const char *UserQueueData; 
  bdLoginQueueRecord *v46; 
  bdLoginStatus *v47; 
  bool v48; 
  bdLoginStatus *v49; 
  unsigned __int64 v50; 
  double v51; 
  float v52; 
  float v53; 
  unsigned __int64 v54; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v55; 
  const char *FirstPartyUsername; 
  const char *FirstPartyAccountType; 
  unsigned __int64 FirstPartyUserID; 
  bool shouldPauseAfterCrossPlatformLogin; 
  bdLoginStatus *v60; 
  bdLoginStatus *v61; 
  const char *v62; 
  bdReference<bdRemoteTask> *RemoteTaskRef; 
  bool v64; 
  bdLoginResumeConfig *LoginResumeConfig; 
  bool isInitialized; 
  bdLoginStatus *v67; 
  __int64 (__fastcall **v68)(void *); 
  void *p_m_umbrellaCrossplayTask; 
  const char *v70; 
  bdLoginResumeFlow LoginResumeFlow; 
  bdLoginResult *v72; 
  bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode v73; 
  const char *UnoIDToken; 
  __int64 (__fastcall **v75)(void *); 
  void *p_m_createUnoAnonymousAccountTask; 
  const char *v77; 
  bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode v78; 
  __int32 v79; 
  void *p_m_createUnoAccountTask; 
  bdLoginStatus *v81; 
  const char *v82; 
  bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode v83; 
  __int32 v84; 
  bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode v85; 
  __int32 v86; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v87; 
  const char *v88; 
  const char *v89; 
  unsigned __int64 v90; 
  bdLoginTaskUmbrellaLegacyLogin::UmbrellaLegacyLoginStatusCode v91; 
  const char *v92; 
  const char *v93; 
  bdLoginTaskConnectToLSG::LSGConnectionState v94; 
  __int64 v95; 
  const char *v96; 
  bdLoginTaskReportExtendedAuthInfo::ReportInfoState v97; 
  const char *Username; 
  const char *AccountType; 
  unsigned __int64 v100; 
  unsigned __int64 UnoID; 
  bdLoginStatus *v102; 
  const char *v103; 
  bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode v104; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v105; 
  bdLoginTask *v106; 
  unsigned int line; 
  char *format; 
  const char *ClientID; 
  unsigned __int64 UserID; 
  unsigned __int64 v112; 
  unsigned int TitleID; 
  bdRandom v114; 
  bdReference<bdRemoteTask> v115; 
  __int64 v116; 
  char v117; 
  bdLoginQueueRecord result; 
  bdLoginQueueRecord v119; 
  bdLoginResumeConfig v120; 

  v116 = -2i64;
  switch ( bdLoginStatus::getLoginStatusCode(this->m_loginStatus) )
  {
    case READY:
      p_m_firstPartyTask = (char *)&this->m_firstPartyTask;
      if ( !this->m_firstPartyTask._Mypair._Myval2 )
      {
        m_loginResult = this->m_loginResult;
        m_loginConfig = this->m_loginConfig;
        if ( bdLoginConfig::getLoginType(m_loginConfig) == WAITING_FOR_REPORT_CONSOLE_DETAILS )
        {
          v5 = (bdRemoteTask *)bdMemory::allocate(0x1EC0ui64);
          v115.m_ptr = v5;
          if ( v5 )
            bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken((bdLoginTaskFetchXboxOneToken *)v5, m_loginConfig, m_loginResult);
        }
        else
        {
          v5 = NULL;
        }
        if ( p_m_firstPartyTask == &v117 )
        {
          if ( v5 )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v5->~bdReferencable)(v5, 1i64);
        }
        else
        {
          v6 = *(bdLoginTask **)p_m_firstPartyTask;
          *(_QWORD *)p_m_firstPartyTask = v5;
          if ( v6 )
            ((void (__fastcall *)(bdLoginTask *, __int64))v6->~bdLoginTask)(v6, 1i64);
        }
      }
      bdLoginStatus::startLoginTimer(this->m_loginStatus);
      isDediLogin = bdLoginConfig::isDediLogin(this->m_loginConfig);
      m_loginStatus = this->m_loginStatus;
      if ( isDediLogin )
      {
        bdLoginStatus::updateLoginStatus(m_loginStatus, "ATVI dedicated login detected, starting Auth task", AUTHENTICATING);
        v9 = this->m_loginResult;
        ThunderpantsToken = bdLoginConfig::getThunderpantsToken(this->m_loginConfig);
        bdLoginResult::setPlatformToken(v9, ThunderpantsToken);
        format = "ATVI dedicated login detected, starting Auth task";
        line = 150;
        goto LABEL_24;
      }
      bdLoginStatus::updateLoginStatus(m_loginStatus, "Fetching First Party Token", FETCHING_FIRST_PARTY_TOKEN);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x9Cu, "Updating state to: FETCHING_FIRST_PARTY_TOKEN");
      Myval2 = *(bdLoginTask **)p_m_firstPartyTask;
      goto LABEL_15;
    case FETCHING_FIRST_PARTY_TOKEN:
      Myval2 = this->m_firstPartyTask._Mypair._Myval2;
      if ( Myval2->m_firstPartyTokenStatusCode == FIRST_PARTY_AUTHED )
      {
        v13 = this->m_loginStatus;
        v14 = Myval2->getTaskMessage(Myval2);
        bdLoginStatus::updateLoginStatus(v13, v14, FAILED);
        v15 = this->m_firstPartyTask._Mypair._Myval2->getTaskMessage(this->m_firstPartyTask._Mypair._Myval2);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xACu, v15);
        v16 = this->m_firstPartyTask._Mypair._Myval2->getTaskMessage(this->m_firstPartyTask._Mypair._Myval2);
        bdLoginFlow::recordBackoffError(this, v16);
        this->m_code = FIRST_PARTY_ERROR;
        return (unsigned int)this->m_code;
      }
      if ( Myval2->m_firstPartyTokenStatusCode != LOGIN_DELAY )
      {
LABEL_15:
        v12 = (void (**)(void))Myval2->__vftable;
        goto LABEL_16;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Got First Party token(s), ready to authenticate with Demonware", FIRST_PARTY_AUTHED);
      format = "Updating state to: FIRST_PARTY_AUTHED";
      line = 168;
      goto LABEL_24;
    case FIRST_PARTY_AUTHED:
      MaxInitialLoginDelayMS = bdLoginConfig::getMaxInitialLoginDelayMS(this->m_loginConfig);
      v18 = this->m_loginStatus;
      if ( MaxInitialLoginDelayMS )
      {
        bdLoginStatus::updateLoginStatus(v18, "Applying initial login delay, before authenticating with Demonware", LOGIN_DELAY);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xCAu, "Updating state to: LOGIN_DELAY");
        bdRandom::bdRandom(&v114);
        v19 = bdLoginConfig::getMaxInitialLoginDelayMS(this->m_loginConfig);
        v20 = bdRandom::nextUInt(&v114);
        this->m_loginDelayMS = v20 % v19;
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xD0u, "Going to wait %d ms", v20 % v19);
        this->m_loginDelayStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
        bdRandom::~bdRandom(&v114);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(v18, "Authenticating to Demonware", AUTHENTICATING);
      format = "Updating state to: AUTHENTICATING";
      line = 217;
      goto LABEL_24;
    case LOGIN_DELAY:
      HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
      ElapsedTime = bdPlatformTiming::getElapsedTime(this->m_loginDelayStartTimestamp, HiResTimeStamp);
      m_loginDelayMS = (float)this->m_loginDelayMS;
      if ( (float)(*(float *)&ElapsedTime * 1000.0) < m_loginDelayMS )
        return (unsigned int)this->m_code;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Authenticating to Demonware", AUTHENTICATING);
      format = "Updating state to: AUTHENTICATING";
      line = 225;
      goto LABEL_24;
    case AUTHENTICATING:
      TaskCode = bdLoginTaskAuthenticate::getTaskCode(&this->m_authenticateTask);
      switch ( TaskCode )
      {
        case WAITING_FOR_REPORT_CONSOLE_DETAILS:
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Got a reply from Demonware Auth", AUTHENTICATING);
          break;
        case CONNECTED:
          v29 = this->m_authenticateTask.getTaskMessage(&this->m_authenticateTask);
          bdLoginFlow::recordBackoffError(this, v29);
          this->m_code = AUTH_ERROR;
          return (unsigned int)this->m_code;
        case DISCONNECTING:
          v27 = this->m_loginStatus;
          v28 = this->m_authenticateTask.getTaskMessage(&this->m_authenticateTask);
          bdLoginStatus::updateLoginStatus(v27, v28, FAILED);
          this->m_code = AUTH_ERROR;
          return (unsigned int)this->m_code;
        case DISCONNECTED:
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Authenticated to Demonware", AUTHENTICATED);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xF0u, "Updating state to: AUTHENTICATED");
          Environment = bdLoginResult::getEnvironment(this->m_loginResult);
          v26 = bdEnvironmentToString(Environment);
          TitleID = bdLoginResult::getTitleID(this->m_loginResult);
          ClientID = bdLoginResult::getClientID(this->m_loginResult);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xF5u, "Using Client ID: %s, Title ID: %d, ENV: %s", ClientID, TitleID, v26);
          return (unsigned int)this->m_code;
      }
      this->m_authenticateTask.pump(&this->m_authenticateTask);
      return (unsigned int)this->m_code;
    case AUTHENTICATED:
      if ( bdLoginResult::isLoginQueueEnabled(this->m_loginResult) )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Joining Login Queue", JOINING_LOGIN_QUEUE);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x10Bu, "Updating state to: JOINING_LOGIN_QUEUE");
        this->m_joinQueueTask.pump(&this->m_joinQueueTask);
        return (unsigned int)this->m_code;
      }
      isCrossPlayEnabled = bdLoginResult::isCrossPlayEnabled(this->m_loginResult);
      v31 = this->m_loginStatus;
      if ( isCrossPlayEnabled )
      {
        bdLoginStatus::updateLoginStatus(v31, "Starting crossplay login", CROSSPLAY_LOG_IN);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x116u, "Updating state to: CROSSPLAY_LOG_IN");
        this->m_umbrellaCrossplayTask.pump(&this->m_umbrellaCrossplayTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(v31, "Starting legacy login", LEGACY_LOG_IN);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x11Eu, "Updating state to: LEGACY_LOG_IN");
      goto LABEL_131;
    case CROSSPLAY_LOG_IN:
      v55 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      switch ( v55 )
      {
        case CONNECTED:
          RemoteTaskRef = bdLoginTaskUmbrellaCrossplay::getRemoteTaskRef(&this->m_umbrellaCrossplayTask, &v115);
          v64 = bdRemoteTask::getErrorCode(RemoteTaskRef->m_ptr) == BD_UMBRELLA_ACCOUNT_NOT_FOUND;
          if ( v115.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v115.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v115.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v115.m_ptr->~bdReferencable)(v115.m_ptr, 1i64);
          if ( !v64 )
          {
LABEL_88:
            v68 = (__int64 (__fastcall **)(void *))this->m_umbrellaCrossplayTask.__vftable;
            p_m_umbrellaCrossplayTask = &this->m_umbrellaCrossplayTask;
            goto LABEL_89;
          }
          if ( bdLoginConfig::shouldCreateAnonymousAccount(this->m_loginConfig) )
          {
            bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Starting Uno anonymous account creation", CREATING_UNO_ANONYMOUS_ACCOUNT);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1BFu, "Updating state to: CREATING_UNO_ANONYMOUS_ACCOUNT");
            this->m_createUnoAnonymousAccountTask.pump(&this->m_createUnoAnonymousAccountTask);
            return (unsigned int)this->m_code;
          }
          LoginResumeConfig = bdLoginResult::getLoginResumeConfig(this->m_loginResult, &v120);
          isInitialized = bdLoginResumeConfig::isInitialized(LoginResumeConfig);
          bdLoginResumeConfig::~bdLoginResumeConfig(&v120);
          v67 = this->m_loginStatus;
          if ( isInitialized )
          {
            bdLoginStatus::updateLoginStatus(v67, "Resume Flow has already been set, creating Uno Account", RESUME_FLOW);
            format = "Updating state to: RESUME_FLOW";
            line = 460;
            goto LABEL_24;
          }
          bdLoginStatus::updateLoginStatus(v67, "[NO_CROSSPLAY_ACCOUNT_FOUND] Failed to retrieve linked account", FAILED);
          this->m_code = NO_CROSSPLAY_ACCOUNT_FOUND;
          break;
        case DISCONNECTING:
LABEL_77:
          this->m_code = UMBRELLA_ERROR;
          v61 = this->m_loginStatus;
          v62 = this->m_umbrellaCrossplayTask.getTaskMessage(&this->m_umbrellaCrossplayTask);
          bdLoginStatus::updateLoginStatus(v61, v62, FAILED);
          break;
        case DISCONNECTED:
          FirstPartyUsername = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
          FirstPartyAccountType = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
          FirstPartyUserID = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1A5u, "First Party User ID : %I64u, Account Type: %s, Username: %s", FirstPartyUserID, FirstPartyAccountType, FirstPartyUsername);
          shouldPauseAfterCrossPlatformLogin = bdLoginConfig::shouldPauseAfterCrossPlatformLogin(this->m_loginConfig);
          v60 = this->m_loginStatus;
          if ( shouldPauseAfterCrossPlatformLogin )
          {
            bdLoginStatus::updateLoginStatus(v60, "Paused", FLOW_PAUSED);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1AAu, "Updating state to: FLOW_PAUSED");
          }
          else
          {
            bdLoginStatus::updateLoginStatus(v60, "Connecting to LSG", CONNECTING_TO_LSG);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1AFu, "Updating state to: CONNECTING_TO_LSG");
          }
          break;
        default:
          goto LABEL_48;
      }
      return (unsigned int)this->m_code;
    case RESUME_FLOW:
      LoginResumeFlow = bdLoginResult::getLoginResumeFlow(this->m_loginResult);
      switch ( LoginResumeFlow )
      {
        case BD_LOGIN_CREATE_ANONYMOUS_ACCOUNT:
          this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting state to CREATING_UNO_ANONYMOUS_ACCOUNT", CREATING_UNO_ANONYMOUS_ACCOUNT);
          format = "Updating state to: CREATING_UNO_ANONYMOUS_ACCOUNT";
          line = 497;
          goto LABEL_24;
        case BD_LOGIN_CREATE_FULL_ACCOUNT:
          this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting state to CREATING_UNO_ACCOUNT", CREATING_UNO_ACCOUNT);
          format = "Updating state to: CREATING_UNO_ACCOUNT";
          line = 504;
          goto LABEL_24;
        case BD_LOGIN_EXISTING_USER_LOGIN:
          this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting state to AUTHENTICATING_UNO_ACCOUNT", AUTHENTICATING_UNO_ACCOUNT);
          format = "Updating state to: AUTHENTICATING_UNO_ACCOUNT";
          line = 511;
          goto LABEL_24;
        case BD_LOGIN_UPDATE_EXISTING_USER:
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting state to UPDATING_UNO_ACCOUNT", UPDATING_UNO_ACCOUNT);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x205u, "Updating state to: UPDATING_UNO_ACCOUNT");
          v72 = this->m_loginResult;
          v72->m_loginResumeConfig.m_accountInfo.m_userID = bdLoginResult::getUserID(v72);
          break;
        default:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x20Au, "In an unknown resume flow state");
          break;
      }
      return (unsigned int)this->m_code;
    case CREATING_UNO_ANONYMOUS_ACCOUNT:
      v73 = bdLoginTaskCreateUnoAnonymousAccount::getTaskCode(&this->m_createUnoAnonymousAccountTask);
      if ( v73 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v75 = (__int64 (__fastcall **)(void *))this->m_createUnoAnonymousAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_createUnoAnonymousAccountTask;
        goto LABEL_106;
      }
      if ( v73 != CONNECTED )
      {
        this->m_createUnoAnonymousAccountTask.pump(&this->m_createUnoAnonymousAccountTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Anonymous Account", CROSSPLAY_LOG_IN_LINK);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x215u, "Updating state to: CROSSPLAY_LOG_IN_LINK");
      this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
      bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
      UnoIDToken = bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken(&this->m_createUnoAnonymousAccountTask);
      goto LABEL_103;
    case CREATING_UNO_ACCOUNT:
      v78 = bdLoginTaskCreateUnoAccount::getTaskCode(&this->m_createUnoAccountTask);
      if ( v78 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v75 = (__int64 (__fastcall **)(void *))this->m_createUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_createUnoAccountTask;
        goto LABEL_106;
      }
      v79 = v78 - 4;
      if ( v78 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Account", CROSSPLAY_LOG_IN_LINK);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x22Cu, "Updating state to: CROSSPLAY_LOG_IN_LINK");
        this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
        bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
        UnoIDToken = bdLoginTaskCreateUnoAccount::getUnoIDToken(&this->m_createUnoAccountTask);
        goto LABEL_103;
      }
      v12 = (void (**)(void))this->m_createUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_createUnoAccountTask;
      if ( v79 != 1 )
      {
LABEL_16:
        v12[1]();
        return (unsigned int)this->m_code;
      }
      goto LABEL_110;
    case AUTHENTICATING_UNO_ACCOUNT:
      v83 = bdLoginTaskAuthenticateUnoAccount::getTaskCode(&this->m_authenticateUnoAccountTask);
      if ( v83 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v75 = (__int64 (__fastcall **)(void *))this->m_authenticateUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_authenticateUnoAccountTask;
        goto LABEL_106;
      }
      v84 = v83 - 4;
      if ( v83 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Account", CROSSPLAY_LOG_IN_LINK);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x248u, "Updating state to: CROSSPLAY_LOG_IN_LINK");
        this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
        bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
        UnoIDToken = bdLoginTaskAuthenticateUnoAccount::getUnoIDToken(&this->m_authenticateUnoAccountTask);
LABEL_103:
        bdLoginTaskUmbrellaCrossplay::setUnoIDToken(&this->m_umbrellaCrossplayTask, UnoIDToken);
        goto LABEL_48;
      }
      v12 = (void (**)(void))this->m_authenticateUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_authenticateUnoAccountTask;
      if ( v84 == 1 )
        goto LABEL_110;
      goto LABEL_116;
    case UPDATING_UNO_ACCOUNT:
      v85 = bdLoginTaskUpdateUnoAccount::getTaskCode(&this->m_updateUnoAccountTask);
      if ( v85 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v75 = (__int64 (__fastcall **)(void *))this->m_updateUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_updateUnoAccountTask;
        goto LABEL_106;
      }
      v86 = v85 - 4;
      if ( v85 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Updated Uno Account", CONNECTING_TO_LSG);
        format = "Updating state to: CONNECTING_TO_LSG";
        line = 611;
        goto LABEL_24;
      }
      v12 = (void (**)(void))this->m_updateUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_updateUnoAccountTask;
      if ( v86 == 1 )
      {
LABEL_110:
        v81 = this->m_loginStatus;
        v82 = (const char *)((__int64 (__fastcall *)(void *))v12[4])(p_m_createUnoAccountTask);
        bdLoginStatus::updateLoginStatus(v81, v82, FAILED);
        this->m_code = UNO_ERROR;
      }
      else
      {
LABEL_116:
        ((void (__fastcall *)(void *))v12[1])(p_m_createUnoAccountTask);
      }
      return (unsigned int)this->m_code;
    case CROSSPLAY_LOG_IN_LINK:
      v87 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      if ( v87 == CONNECTED )
        goto LABEL_88;
      if ( v87 == DISCONNECTING )
        goto LABEL_77;
      if ( v87 != DISCONNECTED )
        goto LABEL_48;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connecting to LSG", CONNECTING_TO_LSG);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x27Bu, "Updating state to: CONNECTING_TO_LSG");
      v88 = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
      v89 = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
      v90 = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x280u, "First Party User ID : %I64u, Account Type: %s, Username: %s", v90, v89, v88);
      UserID = bdLoginResult::getUserID(this->m_loginResult);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x281u, "Uno ID: %I64u", UserID);
      return (unsigned int)this->m_code;
    case LEGACY_LOG_IN:
      v91 = bdLoginTaskUmbrellaLegacyLogin::getTaskCode(&this->m_umbrellaLegacyLoginTask);
      if ( v91 == CONNECTED )
      {
        v68 = (__int64 (__fastcall **)(void *))this->m_umbrellaLegacyLoginTask.__vftable;
        p_m_umbrellaCrossplayTask = &this->m_umbrellaLegacyLoginTask;
LABEL_89:
        v70 = (const char *)v68[4](p_m_umbrellaCrossplayTask);
        bdLoginFlow::recordBackoffError(this, v70);
        this->m_code = UMBRELLA_ERROR;
      }
      else
      {
        if ( v91 != DISCONNECTING )
          goto LABEL_131;
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connecting to LSG", CONNECTING_TO_LSG);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x298u, "Updating state to: CONNECTING_TO_LSG");
        v92 = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
        v93 = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
        v112 = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x29Du, "First Party User ID : %I64u, Account Type: %s, Username: %s", v112, v93, v92);
      }
      return (unsigned int)this->m_code;
    case CONNECTING_TO_LSG:
      v94 = bdLoginTaskConnectToLSG::getTaskCode(&this->m_connectToLSGTask);
      v95 = (unsigned int)(v94 - 4);
      if ( v94 == CONNECTED )
        goto LABEL_138;
      if ( v94 != DISCONNECTING )
      {
        this->m_connectToLSGTask.pump(&this->m_connectToLSGTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connected to LSG, now reporting Extended Auth Info", REPORTING_EXTENDED_AUTH_INFO);
      format = "Updating state to: REPORTING_EXTENDED_AUTH_INFO";
      line = 688;
      goto LABEL_24;
    case REPORTING_EXTENDED_AUTH_INFO:
      v97 = bdLoginTaskReportExtendedAuthInfo::getTaskCode(&this->m_reportExtendedAuthInfoTask);
      if ( v97 == CONNECTING )
      {
        v103 = (const char *)((__int64 (__fastcall *)(bdLoginTaskReportExtendedAuthInfo *, _QWORD))this->m_reportExtendedAuthInfoTask.getTaskMessage)(&this->m_reportExtendedAuthInfoTask, (unsigned int)(v97 - 2));
        bdLoginFlow::recordBackoffError(this, v103);
        this->m_code = ANTI_CHEAT_ERROR;
      }
      else if ( v97 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        Username = bdLoginResult::getUsername(this->m_loginResult);
        AccountType = bdLoginResult::getAccountType(this->m_loginResult);
        v100 = bdLoginResult::getUserID(this->m_loginResult);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2C5u, "DW User ID: %I64u Account Type: %s, Username: %s", v100, AccountType, Username);
        UnoID = bdLoginResult::getUnoID(this->m_loginResult);
        v102 = this->m_loginStatus;
        if ( UnoID )
        {
          bdLoginStatus::updateLoginStatus(v102, "Updating state to: FETCHING_UNO_ACCOUNT", FETCHING_UNO_ACCOUNT);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2CAu, "Updating state to: FETCHING_UNO_ACCOUNT");
        }
        else
        {
          bdLoginStatus::setFinishedFlow(v102, 1);
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Login Complete", COMPLETED);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2D0u, "No UnoID could be found for this user, will not Fetch Uno Account details");
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2D1u, "Updating state to: COMPLETED");
        }
      }
      else
      {
        this->m_reportExtendedAuthInfoTask.pump(&this->m_reportExtendedAuthInfoTask);
      }
      return (unsigned int)this->m_code;
    case JOINING_LOGIN_QUEUE:
      v32 = bdLoginTaskJoinQueue::getTaskCode(&this->m_joinQueueTask);
      if ( v32 == CONNECTED )
      {
        v40 = (__int64 (__fastcall **)(void *))this->m_joinQueueTask.__vftable;
        p_m_joinQueueTask = &this->m_joinQueueTask;
        goto LABEL_54;
      }
      if ( v32 == DISCONNECTING )
        goto LABEL_52;
      v33 = &this->m_joinQueueTask;
      if ( v32 != DISCONNECTED )
      {
        this->m_joinQueueTask.pump(v33);
        return (unsigned int)this->m_code;
      }
      if ( bdLoginTaskJoinQueue::getQueueMemberStatus(v33) != BD_POPPED_FROM_THE_QUEUE )
      {
        if ( bdLoginTaskJoinQueue::getQueueMemberStatus(&this->m_joinQueueTask) == BD_JOINED )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x142u, "Joined the Login Queue");
          LoginqueueRecord = bdLoginTaskJoinQueue::getLoginqueueRecord(&this->m_joinQueueTask, &result);
          v37 = this->m_loginStatus;
          v37->m_loginQueueInfo.m_position = LoginqueueRecord->m_position;
          v37->m_loginQueueInfo.m_estimatedWaitTimeSec = LoginqueueRecord->m_estimatedWaitTimeSec;
          v37->m_loginQueueInfo.m_estimatedWaitTimeMilliseconds = LoginqueueRecord->m_estimatedWaitTimeMilliseconds;
          v37->m_loginQueueInfo.m_nextPollAfterSec = LoginqueueRecord->m_nextPollAfterSec;
          v37->m_loginQueueInfo.m_nextPollAfterMilliseconds = LoginqueueRecord->m_nextPollAfterMilliseconds;
          v37->m_loginQueueInfo.m_ivSeed = LoginqueueRecord->m_ivSeed;
          bdLoginQueueRecord::~bdLoginQueueRecord(&result);
          this->m_loginQueueWaitStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting status to POLLING_LOGIN_QUEUE_WAIT", POLLING_LOGIN_QUEUE_WAIT);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x149u, "Going to wait %d ms before polling", this->m_loginStatus->m_loginQueueInfo.m_nextPollAfterMilliseconds);
        }
        return (unsigned int)this->m_code;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x12Cu, "No need to join Login Queue at this moment");
      v34 = bdLoginResult::isCrossPlayEnabled(this->m_loginResult);
      v35 = this->m_loginStatus;
      if ( v34 )
      {
        bdLoginStatus::updateLoginStatus(v35, "Starting crossplay login", CROSSPLAY_LOG_IN);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x132u, "Updating state to: CROSSPLAY_LOG_IN");
        goto LABEL_48;
      }
      bdLoginStatus::updateLoginStatus(v35, "Starting legacy login", LEGACY_LOG_IN);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x13Au, "Updating state to: LEGACY_LOG_IN");
      goto LABEL_131;
    case POLLING_LOGIN_QUEUE:
      v43 = bdLoginTaskPollQueue::getTaskCode(&this->m_pollQueueTask);
      switch ( v43 )
      {
        case CONNECTED:
          v40 = (__int64 (__fastcall **)(void *))this->m_pollQueueTask.__vftable;
          p_m_joinQueueTask = &this->m_pollQueueTask;
LABEL_54:
          v42 = (const char *)v40[4](p_m_joinQueueTask);
          bdLoginFlow::recordBackoffError(this, v42);
          this->m_code = LOGINQUEUE_ERROR;
          break;
        case DISCONNECTING:
LABEL_52:
          v38 = this->m_loginStatus;
          v39 = this->m_joinQueueTask.getTaskMessage(&this->m_joinQueueTask);
          bdLoginStatus::updateLoginStatus(v38, v39, FAILED);
          this->m_code = LOGINQUEUE_ERROR;
          break;
        case DISCONNECTED:
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x160u, "Polled Login Queue Completed");
          v48 = bdLoginResult::isCrossPlayEnabled(this->m_loginResult);
          v49 = this->m_loginStatus;
          if ( v48 )
          {
            bdLoginStatus::updateLoginStatus(v49, "Starting crossplay login", CROSSPLAY_LOG_IN);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x166u, "Updating state to: CROSSPLAY_LOG_IN");
LABEL_48:
            this->m_umbrellaCrossplayTask.pump(&this->m_umbrellaCrossplayTask);
          }
          else
          {
            bdLoginStatus::updateLoginStatus(v49, "Starting legacy login", LEGACY_LOG_IN);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x16Eu, "Updating state to: LEGACY_LOG_IN");
LABEL_131:
            this->m_umbrellaLegacyLoginTask.pump(&this->m_umbrellaLegacyLoginTask);
          }
          break;
        default:
          this->m_pollQueueTask.pump(&this->m_pollQueueTask);
          v44 = this->m_loginStatus;
          UserQueueData = bdLoginTaskPollQueue::getUserQueueData(&this->m_pollQueueTask);
          bdLoginStatus::updateLoginStatusMessage(v44, UserQueueData);
          if ( bdLoginTaskPollQueue::pollStatusUpdated(&this->m_pollQueueTask) && bdLoginTaskPollQueue::getTaskCode(&this->m_pollQueueTask) == UNINITIALIZED )
          {
            v46 = bdLoginTaskPollQueue::getLoginqueueRecord(&this->m_pollQueueTask, &v119);
            v47 = this->m_loginStatus;
            v47->m_loginQueueInfo.m_position = v46->m_position;
            v47->m_loginQueueInfo.m_estimatedWaitTimeSec = v46->m_estimatedWaitTimeSec;
            v47->m_loginQueueInfo.m_estimatedWaitTimeMilliseconds = v46->m_estimatedWaitTimeMilliseconds;
            v47->m_loginQueueInfo.m_nextPollAfterSec = v46->m_nextPollAfterSec;
            v47->m_loginQueueInfo.m_nextPollAfterMilliseconds = v46->m_nextPollAfterMilliseconds;
            v47->m_loginQueueInfo.m_ivSeed = v46->m_ivSeed;
            bdLoginQueueRecord::~bdLoginQueueRecord(&v119);
            bdLoginTaskPollQueue::setPollStatusUpdated(&this->m_pollQueueTask, 0);
            this->m_loginQueueWaitStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
            bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting status to POLLING_LOGIN_QUEUE_WAIT", POLLING_LOGIN_QUEUE_WAIT);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x18Fu, "Going to wait %d ms before polling again", this->m_loginStatus->m_loginQueueInfo.m_nextPollAfterMilliseconds);
          }
          break;
      }
      return (unsigned int)this->m_code;
    case POLLING_LOGIN_QUEUE_WAIT:
      v50 = bdPlatformTiming::getHiResTimeStamp();
      v51 = bdPlatformTiming::getElapsedTime(this->m_loginQueueWaitStartTimestamp, v50);
      v53 = *(float *)&v51 * 1000.0;
      v52 = *(float *)&v51 * 1000.0;
      v54 = 0i64;
      if ( (float)(*(float *)&v51 * 1000.0) >= 9.223372e18 )
      {
        v52 = v53 - 9.223372e18;
        if ( (float)(v53 - 9.223372e18) < 9.223372e18 )
          v54 = 0x8000000000000000ui64;
      }
      if ( v54 + (unsigned int)(int)v52 < bdLoginStatus::getNextPollAfterMS(this->m_loginStatus) )
        return (unsigned int)this->m_code;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Updating state to: POLLING_LOGIN_QUEUE", POLLING_LOGIN_QUEUE);
      format = "Updating state to: POLLING_LOGIN_QUEUE";
      line = 409;
      goto LABEL_24;
    case FETCHING_UNO_ACCOUNT:
      v104 = bdLoginTaskFetchUnoAccount::getTaskCode(&this->m_fetchUnoAccountTask);
      if ( v104 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v75 = (__int64 (__fastcall **)(void *))this->m_fetchUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_fetchUnoAccountTask;
LABEL_106:
        v77 = (const char *)v75[4](p_m_createUnoAnonymousAccountTask);
        bdLoginFlow::recordBackoffError(this, v77);
        this->m_code = UNO_ERROR;
      }
      else if ( v104 == CONNECTED )
      {
        bdLoginStatus::setFinishedFlow(this->m_loginStatus, 1);
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Login Complete", COMPLETED);
        format = "Successfully fetched Uno Account, setting state to `Completed`";
        line = 741;
LABEL_24:
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", line, format);
      }
      else
      {
        this->m_fetchUnoAccountTask.pump(&this->m_fetchUnoAccountTask);
      }
      return (unsigned int)this->m_code;
    case REFRESHING_CROSSPLAY_TOKEN:
      v105 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      if ( v105 == CONNECTED )
        goto LABEL_88;
      if ( v105 != DISCONNECTED )
        goto LABEL_164;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Refreshed crossplay token, setting login state `Completed`", COMPLETED);
      format = "Refreshed crossplay token, setting login state `Completed`";
      line = 759;
      goto LABEL_24;
    case REFRESHING_BNET_WATCHDOG_TOKEN:
      return (unsigned int)this->m_code;
    case BACKOFF:
      if ( bdBackoffTimer::checkTimer(&this->m_backoffTimer) )
      {
        if ( bdBackoffTimer::maxFailuresReached(&this->m_backoffTimer) )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::handleBackOffState", 0x3BAu, "Reached backoff limit, failing out");
          bdLoginStatus::updateLoginStatusCode(this->m_loginStatus, FAILED);
        }
        else
        {
          v106 = this->m_firstPartyTask._Mypair._Myval2;
          if ( v106 )
          {
            this->m_firstPartyTask._Mypair._Myval2 = NULL;
            ((void (__fastcall *)(bdLoginTask *, __int64))v106->~bdLoginTask)(v106, 1i64);
          }
          this->m_authenticateTask.reset(&this->m_authenticateTask);
          this->m_createUnoAnonymousAccountTask.reset(&this->m_createUnoAnonymousAccountTask);
          this->m_createUnoAccountTask.reset(&this->m_createUnoAccountTask);
          this->m_authenticateUnoAccountTask.reset(&this->m_authenticateUnoAccountTask);
          this->m_updateUnoAccountTask.reset(&this->m_updateUnoAccountTask);
          this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
          this->m_umbrellaLegacyLoginTask.reset(&this->m_umbrellaLegacyLoginTask);
          this->m_joinQueueTask.reset(&this->m_joinQueueTask);
          this->m_pollQueueTask.reset(&this->m_pollQueueTask);
          this->m_connectToLSGTask.reset(&this->m_connectToLSGTask);
          this->m_reportExtendedAuthInfoTask.reset(&this->m_reportExtendedAuthInfoTask);
          this->m_fetchUnoAccountTask.reset(&this->m_fetchUnoAccountTask);
          bdLoginStatus::setFinishedFlow(this->m_loginStatus, 0);
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Reset bdLoginFlow", READY);
        }
      }
      return (unsigned int)this->m_code;
    case COMPLETED:
      this->m_connectToLSGTask.pump(&this->m_connectToLSGTask);
      if ( bdLoginTaskConnectToLSG::getTaskCode(&this->m_connectToLSGTask) == DISCONNECTING )
      {
        if ( bdLoginResult::isCrossPlayEnabled(this->m_loginResult) && !bdLoginTaskUmbrellaCrossplay::validateAccessToken(&this->m_umbrellaCrossplayTask) )
        {
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Doing Umbrella token refresh", REFRESHING_CROSSPLAY_TOKEN);
          this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
LABEL_164:
          bdLoginTaskUmbrellaCrossplay::pumpRefresh(&this->m_umbrellaCrossplayTask);
        }
      }
      else
      {
LABEL_138:
        v96 = (const char *)((__int64 (__fastcall *)(bdLoginTaskConnectToLSG *, __int64))this->m_connectToLSGTask.getTaskMessage)(&this->m_connectToLSGTask, v95);
        bdLoginFlow::recordBackoffError(this, v96);
        this->m_code = LSG_ERROR;
      }
      return (unsigned int)this->m_code;
    default:
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x353u, "Pumping login flow in unexpected state");
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Pumping login flow in unexpected state", FAILED);
      this->m_code = UNKNOWN_ERROR;
      return (unsigned int)this->m_code;
  }
}

/*
==============
bdLoginFlow::recordBackoffError
==============
*/
void bdLoginFlow::recordBackoffError(bdLoginFlow *this, const char *errorMessage)
{
  bdLoginStatus::updateLoginStatus(this->m_loginStatus, errorMessage, BACKOFF);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::recordBackoffError", 0x3ABu, errorMessage);
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::recordBackoffError", 0x3ACu, "Error encountered. Entering Backoff");
  bdBackoffTimer::recordFailure(&this->m_backoffTimer);
}

/*
==============
bdLoginFlow::reset
==============
*/
void bdLoginFlow::reset(bdLoginFlow *this)
{
  bdLoginTask *Myval2; 

  Myval2 = this->m_firstPartyTask._Mypair._Myval2;
  if ( Myval2 )
  {
    this->m_firstPartyTask._Mypair._Myval2 = NULL;
    ((void (__fastcall *)(bdLoginTask *, __int64))Myval2->~bdLoginTask)(Myval2, 1i64);
  }
  this->m_authenticateTask.reset(&this->m_authenticateTask);
  this->m_createUnoAnonymousAccountTask.reset(&this->m_createUnoAnonymousAccountTask);
  this->m_createUnoAccountTask.reset(&this->m_createUnoAccountTask);
  this->m_authenticateUnoAccountTask.reset(&this->m_authenticateUnoAccountTask);
  this->m_updateUnoAccountTask.reset(&this->m_updateUnoAccountTask);
  this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
  this->m_umbrellaLegacyLoginTask.reset(&this->m_umbrellaLegacyLoginTask);
  this->m_joinQueueTask.reset(&this->m_joinQueueTask);
  this->m_pollQueueTask.reset(&this->m_pollQueueTask);
  this->m_connectToLSGTask.reset(&this->m_connectToLSGTask);
  this->m_reportExtendedAuthInfoTask.reset(&this->m_reportExtendedAuthInfoTask);
  this->m_fetchUnoAccountTask.reset(&this->m_fetchUnoAccountTask);
  bdLoginStatus::setFinishedFlow(this->m_loginStatus, 0);
  bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Reset bdLoginFlow", READY);
}

/*
==============
bdLoginFlow::resume
==============
*/
void bdLoginFlow::resume(bdLoginFlow *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  bdLoginResumeFlow loginResumeFlow; 

  loginResumeFlow = resumeFlow;
  if ( this->m_loginStatus->m_lastSuccesfulCode == CROSSPLAY_LOG_IN )
  {
    if ( bdLoginFlow::validateResumeConfig(this, resumeFlow, resumeConfig) )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::resume", 0x397u, "Updating state to: RESUME_FLOW");
      bdLoginResult::setLoginResumeFlow(this->m_loginResult, &loginResumeFlow);
      bdLoginResult::setLoginResumeConfig(this->m_loginResult, resumeConfig);
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Resuming login flow", RESUME_FLOW);
    }
    else
    {
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Failed to validate Resume Config", FAILED);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::resume", 0x3A4u, "bdLogin resume functionality only currently available for crossplay anonymous account creation steps");
  }
}

/*
==============
bdLoginFlow::validateConfig
==============
*/
bool bdLoginFlow::validateConfig(bdLoginFlow *this)
{
  bool v2; 

  v2 = bdLoginConfig::getAuthAddress(this->m_loginConfig) && bdLoginConfig::getLSGAddress(this->m_loginConfig);
  if ( !bdLoginConfig::isDediLogin(this->m_loginConfig) || *bdLoginConfig::getThunderpantsToken(this->m_loginConfig) )
    return v2;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::validateConfig", 0x3CFu, "Failed to detect thunderpants token for ATVI Dedi login");
  return 0;
}

/*
==============
bdLoginFlow::validateResumeConfig
==============
*/
char bdLoginFlow::validateResumeConfig(bdLoginFlow *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  bdUnoAccountInfo *AccountInfo; 
  char v5; 
  bdUnoAccountInfo *v6; 
  bool v7; 
  bdUnoAccountInfo v9; 
  bdUnoAccountInfo result; 

  if ( resumeFlow != BD_LOGIN_UPDATE_EXISTING_USER )
    return 1;
  AccountInfo = bdLoginResumeConfig::getAccountInfo(resumeConfig, &result);
  v5 = 1;
  v7 = 1;
  if ( !AccountInfo->m_email[0] )
  {
    v6 = bdLoginResumeConfig::getAccountInfo(resumeConfig, &v9);
    v5 = 3;
    if ( !v6->m_username[0] )
      v7 = 0;
  }
  if ( (v5 & 2) != 0 )
    bdUnoAccountInfo::~bdUnoAccountInfo(&v9);
  bdUnoAccountInfo::~bdUnoAccountInfo(&result);
  if ( !v7 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::validateResumeConfig", 0x3E1u, "BD_LOGIN_UPDATE_EXISTING_USER needs a username or email to be set to update");
  return v7;
}

