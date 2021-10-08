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

bool __fastcall bdLoginFlow::loginDelayElapsed(bdLoginFlow *this, double _XMM1_8)
{
  unsigned __int64 HiResTimeStamp; 
  char v8; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_loginDelayStartTimestamp, HiResTimeStamp);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vcomiss xmm2, xmm1
  }
  return !v8;
}

/*
==============
bdLoginFlow::loginQueuePollWaitElapsed
==============
*/
bool bdLoginFlow::loginQueuePollWaitElapsed(bdLoginFlow *this)
{
  unsigned __int64 HiResTimeStamp; 

  HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
  *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_loginQueueWaitStartTimestamp, HiResTimeStamp);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vmovss  xmm2, cs:__real@5f000000
    vcomiss xmm1, xmm2
    vsubss  xmm1, xmm1, xmm2
    vcomiss xmm1, xmm2
    vcvttss2si rbx, xmm1
  }
  return _RBX >= bdLoginStatus::getNextPollAfterMS(this->m_loginStatus);
}

/*
==============
bdLoginFlow::pump
==============
*/

__int64 __fastcall bdLoginFlow::pump(bdLoginFlow *this, double _XMM1_8)
{
  char *p_m_firstPartyTask; 
  bdLoginResult *m_loginResult; 
  bdLoginConfig *m_loginConfig; 
  bdRemoteTask *v7; 
  bdLoginTask *v8; 
  bool isDediLogin; 
  bdLoginStatus *m_loginStatus; 
  bdLoginResult *v11; 
  const char *ThunderpantsToken; 
  bdLoginTask *Myval2; 
  void (**v14)(void); 
  bdLoginStatus *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  unsigned int MaxInitialLoginDelayMS; 
  bdLoginStatus *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned __int64 HiResTimeStamp; 
  char v27; 
  bdLoginTaskAuthenticate::AuthStatusCode TaskCode; 
  bdEnvironment Environment; 
  const char *v30; 
  bdLoginStatus *v31; 
  const char *v32; 
  const char *v33; 
  bool isCrossPlayEnabled; 
  bdLoginStatus *v35; 
  bdLoginTaskJoinQueue::JoinQueueState v36; 
  bdLoginTaskJoinQueue *v37; 
  bool v38; 
  bdLoginStatus *v39; 
  bdLoginQueueRecord *LoginqueueRecord; 
  bdLoginStatus *v41; 
  bdLoginStatus *v42; 
  const char *v43; 
  __int64 (__fastcall **v44)(void *); 
  void *p_m_joinQueueTask; 
  const char *v46; 
  bdLoginTaskPollQueue::PollQueueState v47; 
  bdLoginStatus *v48; 
  const char *UserQueueData; 
  bdLoginQueueRecord *v50; 
  bdLoginStatus *v51; 
  bool v52; 
  bdLoginStatus *v53; 
  unsigned __int64 v54; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v59; 
  const char *FirstPartyUsername; 
  const char *FirstPartyAccountType; 
  unsigned __int64 FirstPartyUserID; 
  bool shouldPauseAfterCrossPlatformLogin; 
  bdLoginStatus *v64; 
  bdLoginStatus *v65; 
  const char *v66; 
  bdReference<bdRemoteTask> *RemoteTaskRef; 
  bool v68; 
  bdLoginResumeConfig *LoginResumeConfig; 
  bool isInitialized; 
  bdLoginStatus *v71; 
  __int64 (__fastcall **v72)(void *); 
  void *p_m_umbrellaCrossplayTask; 
  const char *v74; 
  bdLoginResumeFlow LoginResumeFlow; 
  bdLoginResult *v76; 
  bdLoginTaskCreateUnoAnonymousAccount::CreateUnoAnonymousAccountStatusCode v77; 
  const char *UnoIDToken; 
  __int64 (__fastcall **v79)(void *); 
  void *p_m_createUnoAnonymousAccountTask; 
  const char *v81; 
  bdLoginTaskCreateUnoAccount::CreateUnoAccountStatusCode v82; 
  __int32 v83; 
  void *p_m_createUnoAccountTask; 
  bdLoginStatus *v85; 
  const char *v86; 
  bdLoginTaskAuthenticateUnoAccount::AuthenticateUnoAccountStatusCode v87; 
  __int32 v88; 
  bdLoginTaskUpdateUnoAccount::UpdateUnoAccountStatusCode v89; 
  __int32 v90; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v91; 
  const char *v92; 
  const char *v93; 
  unsigned __int64 v94; 
  bdLoginTaskUmbrellaLegacyLogin::UmbrellaLegacyLoginStatusCode v95; 
  const char *v96; 
  const char *v97; 
  bdLoginTaskConnectToLSG::LSGConnectionState v98; 
  __int64 v99; 
  const char *v100; 
  bdLoginTaskReportExtendedAuthInfo::ReportInfoState v101; 
  const char *Username; 
  const char *AccountType; 
  unsigned __int64 v104; 
  unsigned __int64 UnoID; 
  bdLoginStatus *v106; 
  const char *v107; 
  bdLoginTaskFetchUnoAccount::FetchUnoAccountStatusCode v108; 
  bdLoginTaskUmbrellaCrossplay::UmbrellaLoginStatusCode v109; 
  bdLoginTask *v110; 
  unsigned int line; 
  char *format; 
  const char *ClientID; 
  unsigned __int64 UserID; 
  unsigned __int64 v116; 
  unsigned int TitleID; 
  bdRandom v118; 
  bdReference<bdRemoteTask> v119; 
  __int64 v120; 
  char v121; 
  bdLoginQueueRecord result; 
  bdLoginQueueRecord v123; 
  bdLoginResumeConfig v124; 

  v120 = -2i64;
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
          v7 = (bdRemoteTask *)bdMemory::allocate(0x1EC0ui64);
          v119.m_ptr = v7;
          if ( v7 )
            bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken((bdLoginTaskFetchXboxOneToken *)v7, m_loginConfig, m_loginResult);
        }
        else
        {
          v7 = NULL;
        }
        if ( p_m_firstPartyTask == &v121 )
        {
          if ( v7 )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v7->~bdReferencable)(v7, 1i64);
        }
        else
        {
          v8 = *(bdLoginTask **)p_m_firstPartyTask;
          *(_QWORD *)p_m_firstPartyTask = v7;
          if ( v8 )
            ((void (__fastcall *)(bdLoginTask *, __int64))v8->~bdLoginTask)(v8, 1i64);
        }
      }
      bdLoginStatus::startLoginTimer(this->m_loginStatus);
      isDediLogin = bdLoginConfig::isDediLogin(this->m_loginConfig);
      m_loginStatus = this->m_loginStatus;
      if ( isDediLogin )
      {
        bdLoginStatus::updateLoginStatus(m_loginStatus, "ATVI dedicated login detected, starting Auth task", AUTHENTICATING);
        v11 = this->m_loginResult;
        ThunderpantsToken = bdLoginConfig::getThunderpantsToken(this->m_loginConfig);
        bdLoginResult::setPlatformToken(v11, ThunderpantsToken);
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
        v15 = this->m_loginStatus;
        v16 = Myval2->getTaskMessage(Myval2);
        bdLoginStatus::updateLoginStatus(v15, v16, FAILED);
        v17 = this->m_firstPartyTask._Mypair._Myval2->getTaskMessage(this->m_firstPartyTask._Mypair._Myval2);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xACu, v17);
        v18 = this->m_firstPartyTask._Mypair._Myval2->getTaskMessage(this->m_firstPartyTask._Mypair._Myval2);
        bdLoginFlow::recordBackoffError(this, v18);
        this->m_code = FIRST_PARTY_ERROR;
        return (unsigned int)this->m_code;
      }
      if ( Myval2->m_firstPartyTokenStatusCode != LOGIN_DELAY )
      {
LABEL_15:
        v14 = (void (**)(void))Myval2->__vftable;
        goto LABEL_16;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Got First Party token(s), ready to authenticate with Demonware", FIRST_PARTY_AUTHED);
      format = "Updating state to: FIRST_PARTY_AUTHED";
      line = 168;
      goto LABEL_24;
    case FIRST_PARTY_AUTHED:
      MaxInitialLoginDelayMS = bdLoginConfig::getMaxInitialLoginDelayMS(this->m_loginConfig);
      v20 = this->m_loginStatus;
      if ( MaxInitialLoginDelayMS )
      {
        bdLoginStatus::updateLoginStatus(v20, "Applying initial login delay, before authenticating with Demonware", LOGIN_DELAY);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xCAu, "Updating state to: LOGIN_DELAY");
        bdRandom::bdRandom(&v118);
        v21 = bdLoginConfig::getMaxInitialLoginDelayMS(this->m_loginConfig);
        v22 = bdRandom::nextUInt(&v118);
        this->m_loginDelayMS = v22 % v21;
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xD0u, "Going to wait %d ms", v22 % v21);
        this->m_loginDelayStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
        bdRandom::~bdRandom(&v118);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(v20, "Authenticating to Demonware", AUTHENTICATING);
      format = "Updating state to: AUTHENTICATING";
      line = 217;
      goto LABEL_24;
    case LOGIN_DELAY:
      HiResTimeStamp = bdPlatformTiming::getHiResTimeStamp();
      *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_loginDelayStartTimestamp, HiResTimeStamp);
      __asm
      {
        vmulss  xmm2, xmm0, cs:__real@447a0000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vcomiss xmm2, xmm1
      }
      if ( v27 )
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
          v33 = this->m_authenticateTask.getTaskMessage(&this->m_authenticateTask);
          bdLoginFlow::recordBackoffError(this, v33);
          this->m_code = AUTH_ERROR;
          return (unsigned int)this->m_code;
        case DISCONNECTING:
          v31 = this->m_loginStatus;
          v32 = this->m_authenticateTask.getTaskMessage(&this->m_authenticateTask);
          bdLoginStatus::updateLoginStatus(v31, v32, FAILED);
          this->m_code = AUTH_ERROR;
          return (unsigned int)this->m_code;
        case DISCONNECTED:
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Authenticated to Demonware", AUTHENTICATED);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xF0u, "Updating state to: AUTHENTICATED");
          Environment = bdLoginResult::getEnvironment(this->m_loginResult);
          v30 = bdEnvironmentToString(Environment);
          TitleID = bdLoginResult::getTitleID(this->m_loginResult);
          ClientID = bdLoginResult::getClientID(this->m_loginResult);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0xF5u, "Using Client ID: %s, Title ID: %d, ENV: %s", ClientID, TitleID, v30);
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
      v35 = this->m_loginStatus;
      if ( isCrossPlayEnabled )
      {
        bdLoginStatus::updateLoginStatus(v35, "Starting crossplay login", CROSSPLAY_LOG_IN);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x116u, "Updating state to: CROSSPLAY_LOG_IN");
        this->m_umbrellaCrossplayTask.pump(&this->m_umbrellaCrossplayTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(v35, "Starting legacy login", LEGACY_LOG_IN);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x11Eu, "Updating state to: LEGACY_LOG_IN");
      goto LABEL_128;
    case CROSSPLAY_LOG_IN:
      v59 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      switch ( v59 )
      {
        case CONNECTED:
          RemoteTaskRef = bdLoginTaskUmbrellaCrossplay::getRemoteTaskRef(&this->m_umbrellaCrossplayTask, &v119);
          v68 = bdRemoteTask::getErrorCode(RemoteTaskRef->m_ptr) == BD_UMBRELLA_ACCOUNT_NOT_FOUND;
          if ( v119.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v119.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v119.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v119.m_ptr->~bdReferencable)(v119.m_ptr, 1i64);
          if ( !v68 )
          {
LABEL_85:
            v72 = (__int64 (__fastcall **)(void *))this->m_umbrellaCrossplayTask.__vftable;
            p_m_umbrellaCrossplayTask = &this->m_umbrellaCrossplayTask;
            goto LABEL_86;
          }
          if ( bdLoginConfig::shouldCreateAnonymousAccount(this->m_loginConfig) )
          {
            bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Starting Uno anonymous account creation", CREATING_UNO_ANONYMOUS_ACCOUNT);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1BFu, "Updating state to: CREATING_UNO_ANONYMOUS_ACCOUNT");
            this->m_createUnoAnonymousAccountTask.pump(&this->m_createUnoAnonymousAccountTask);
            return (unsigned int)this->m_code;
          }
          LoginResumeConfig = bdLoginResult::getLoginResumeConfig(this->m_loginResult, &v124);
          isInitialized = bdLoginResumeConfig::isInitialized(LoginResumeConfig);
          bdLoginResumeConfig::~bdLoginResumeConfig(&v124);
          v71 = this->m_loginStatus;
          if ( isInitialized )
          {
            bdLoginStatus::updateLoginStatus(v71, "Resume Flow has already been set, creating Uno Account", RESUME_FLOW);
            format = "Updating state to: RESUME_FLOW";
            line = 460;
            goto LABEL_24;
          }
          bdLoginStatus::updateLoginStatus(v71, "[NO_CROSSPLAY_ACCOUNT_FOUND] Failed to retrieve linked account", FAILED);
          this->m_code = NO_CROSSPLAY_ACCOUNT_FOUND;
          break;
        case DISCONNECTING:
LABEL_74:
          this->m_code = UMBRELLA_ERROR;
          v65 = this->m_loginStatus;
          v66 = this->m_umbrellaCrossplayTask.getTaskMessage(&this->m_umbrellaCrossplayTask);
          bdLoginStatus::updateLoginStatus(v65, v66, FAILED);
          break;
        case DISCONNECTED:
          FirstPartyUsername = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
          FirstPartyAccountType = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
          FirstPartyUserID = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1A5u, "First Party User ID : %I64u, Account Type: %s, Username: %s", FirstPartyUserID, FirstPartyAccountType, FirstPartyUsername);
          shouldPauseAfterCrossPlatformLogin = bdLoginConfig::shouldPauseAfterCrossPlatformLogin(this->m_loginConfig);
          v64 = this->m_loginStatus;
          if ( shouldPauseAfterCrossPlatformLogin )
          {
            bdLoginStatus::updateLoginStatus(v64, "Paused", FLOW_PAUSED);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x1AAu, "Updating state to: FLOW_PAUSED");
          }
          else
          {
            bdLoginStatus::updateLoginStatus(v64, "Connecting to LSG", CONNECTING_TO_LSG);
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
          v76 = this->m_loginResult;
          v76->m_loginResumeConfig.m_accountInfo.m_userID = bdLoginResult::getUserID(v76);
          break;
        default:
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x20Au, "In an unknown resume flow state");
          break;
      }
      return (unsigned int)this->m_code;
    case CREATING_UNO_ANONYMOUS_ACCOUNT:
      v77 = bdLoginTaskCreateUnoAnonymousAccount::getTaskCode(&this->m_createUnoAnonymousAccountTask);
      if ( v77 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v79 = (__int64 (__fastcall **)(void *))this->m_createUnoAnonymousAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_createUnoAnonymousAccountTask;
        goto LABEL_103;
      }
      if ( v77 != CONNECTED )
      {
        this->m_createUnoAnonymousAccountTask.pump(&this->m_createUnoAnonymousAccountTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Anonymous Account", CROSSPLAY_LOG_IN_LINK);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x215u, "Updating state to: CROSSPLAY_LOG_IN_LINK");
      this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
      bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
      UnoIDToken = bdLoginTaskCreateUnoAnonymousAccount::getUnoIDToken(&this->m_createUnoAnonymousAccountTask);
      goto LABEL_100;
    case CREATING_UNO_ACCOUNT:
      v82 = bdLoginTaskCreateUnoAccount::getTaskCode(&this->m_createUnoAccountTask);
      if ( v82 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v79 = (__int64 (__fastcall **)(void *))this->m_createUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_createUnoAccountTask;
        goto LABEL_103;
      }
      v83 = v82 - 4;
      if ( v82 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Account", CROSSPLAY_LOG_IN_LINK);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x22Cu, "Updating state to: CROSSPLAY_LOG_IN_LINK");
        this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
        bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
        UnoIDToken = bdLoginTaskCreateUnoAccount::getUnoIDToken(&this->m_createUnoAccountTask);
        goto LABEL_100;
      }
      v14 = (void (**)(void))this->m_createUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_createUnoAccountTask;
      if ( v83 != 1 )
      {
LABEL_16:
        v14[1]();
        return (unsigned int)this->m_code;
      }
      goto LABEL_107;
    case AUTHENTICATING_UNO_ACCOUNT:
      v87 = bdLoginTaskAuthenticateUnoAccount::getTaskCode(&this->m_authenticateUnoAccountTask);
      if ( v87 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v79 = (__int64 (__fastcall **)(void *))this->m_authenticateUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_authenticateUnoAccountTask;
        goto LABEL_103;
      }
      v88 = v87 - 4;
      if ( v87 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Created Uno Account", CROSSPLAY_LOG_IN_LINK);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x248u, "Updating state to: CROSSPLAY_LOG_IN_LINK");
        this->m_umbrellaCrossplayTask.reset(&this->m_umbrellaCrossplayTask);
        bdLoginTaskUmbrellaCrossplay::setLinking(&this->m_umbrellaCrossplayTask, 1);
        UnoIDToken = bdLoginTaskAuthenticateUnoAccount::getUnoIDToken(&this->m_authenticateUnoAccountTask);
LABEL_100:
        bdLoginTaskUmbrellaCrossplay::setUnoIDToken(&this->m_umbrellaCrossplayTask, UnoIDToken);
        goto LABEL_48;
      }
      v14 = (void (**)(void))this->m_authenticateUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_authenticateUnoAccountTask;
      if ( v88 == 1 )
        goto LABEL_107;
      goto LABEL_113;
    case UPDATING_UNO_ACCOUNT:
      v89 = bdLoginTaskUpdateUnoAccount::getTaskCode(&this->m_updateUnoAccountTask);
      if ( v89 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v79 = (__int64 (__fastcall **)(void *))this->m_updateUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_updateUnoAccountTask;
        goto LABEL_103;
      }
      v90 = v89 - 4;
      if ( v89 == CONNECTED )
      {
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Updated Uno Account", CONNECTING_TO_LSG);
        format = "Updating state to: CONNECTING_TO_LSG";
        line = 611;
        goto LABEL_24;
      }
      v14 = (void (**)(void))this->m_updateUnoAccountTask.__vftable;
      p_m_createUnoAccountTask = &this->m_updateUnoAccountTask;
      if ( v90 == 1 )
      {
LABEL_107:
        v85 = this->m_loginStatus;
        v86 = (const char *)((__int64 (__fastcall *)(void *))v14[4])(p_m_createUnoAccountTask);
        bdLoginStatus::updateLoginStatus(v85, v86, FAILED);
        this->m_code = UNO_ERROR;
      }
      else
      {
LABEL_113:
        ((void (__fastcall *)(void *))v14[1])(p_m_createUnoAccountTask);
      }
      return (unsigned int)this->m_code;
    case CROSSPLAY_LOG_IN_LINK:
      v91 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      if ( v91 == CONNECTED )
        goto LABEL_85;
      if ( v91 == DISCONNECTING )
        goto LABEL_74;
      if ( v91 != DISCONNECTED )
        goto LABEL_48;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connecting to LSG", CONNECTING_TO_LSG);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x27Bu, "Updating state to: CONNECTING_TO_LSG");
      v92 = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
      v93 = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
      v94 = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x280u, "First Party User ID : %I64u, Account Type: %s, Username: %s", v94, v93, v92);
      UserID = bdLoginResult::getUserID(this->m_loginResult);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x281u, "Uno ID: %I64u", UserID);
      return (unsigned int)this->m_code;
    case LEGACY_LOG_IN:
      v95 = bdLoginTaskUmbrellaLegacyLogin::getTaskCode(&this->m_umbrellaLegacyLoginTask);
      if ( v95 == CONNECTED )
      {
        v72 = (__int64 (__fastcall **)(void *))this->m_umbrellaLegacyLoginTask.__vftable;
        p_m_umbrellaCrossplayTask = &this->m_umbrellaLegacyLoginTask;
LABEL_86:
        v74 = (const char *)v72[4](p_m_umbrellaCrossplayTask);
        bdLoginFlow::recordBackoffError(this, v74);
        this->m_code = UMBRELLA_ERROR;
      }
      else
      {
        if ( v95 != DISCONNECTING )
          goto LABEL_128;
        bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connecting to LSG", CONNECTING_TO_LSG);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x298u, "Updating state to: CONNECTING_TO_LSG");
        v96 = bdLoginResult::getFirstPartyUsername(this->m_loginResult);
        v97 = bdLoginResult::getFirstPartyAccountType(this->m_loginResult);
        v116 = bdLoginResult::getFirstPartyUserID(this->m_loginResult);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x29Du, "First Party User ID : %I64u, Account Type: %s, Username: %s", v116, v97, v96);
      }
      return (unsigned int)this->m_code;
    case CONNECTING_TO_LSG:
      v98 = bdLoginTaskConnectToLSG::getTaskCode(&this->m_connectToLSGTask);
      v99 = (unsigned int)(v98 - 4);
      if ( v98 == CONNECTED )
        goto LABEL_135;
      if ( v98 != DISCONNECTING )
      {
        this->m_connectToLSGTask.pump(&this->m_connectToLSGTask);
        return (unsigned int)this->m_code;
      }
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Connected to LSG, now reporting Extended Auth Info", REPORTING_EXTENDED_AUTH_INFO);
      format = "Updating state to: REPORTING_EXTENDED_AUTH_INFO";
      line = 688;
      goto LABEL_24;
    case REPORTING_EXTENDED_AUTH_INFO:
      v101 = bdLoginTaskReportExtendedAuthInfo::getTaskCode(&this->m_reportExtendedAuthInfoTask);
      if ( v101 == CONNECTING )
      {
        v107 = (const char *)((__int64 (__fastcall *)(bdLoginTaskReportExtendedAuthInfo *, _QWORD))this->m_reportExtendedAuthInfoTask.getTaskMessage)(&this->m_reportExtendedAuthInfoTask, (unsigned int)(v101 - 2));
        bdLoginFlow::recordBackoffError(this, v107);
        this->m_code = ANTI_CHEAT_ERROR;
      }
      else if ( v101 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        Username = bdLoginResult::getUsername(this->m_loginResult);
        AccountType = bdLoginResult::getAccountType(this->m_loginResult);
        v104 = bdLoginResult::getUserID(this->m_loginResult);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2C5u, "DW User ID: %I64u Account Type: %s, Username: %s", v104, AccountType, Username);
        UnoID = bdLoginResult::getUnoID(this->m_loginResult);
        v106 = this->m_loginStatus;
        if ( UnoID )
        {
          bdLoginStatus::updateLoginStatus(v106, "Updating state to: FETCHING_UNO_ACCOUNT", FETCHING_UNO_ACCOUNT);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x2CAu, "Updating state to: FETCHING_UNO_ACCOUNT");
        }
        else
        {
          bdLoginStatus::setFinishedFlow(v106, 1);
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
      v36 = bdLoginTaskJoinQueue::getTaskCode(&this->m_joinQueueTask);
      if ( v36 == CONNECTED )
      {
        v44 = (__int64 (__fastcall **)(void *))this->m_joinQueueTask.__vftable;
        p_m_joinQueueTask = &this->m_joinQueueTask;
        goto LABEL_54;
      }
      if ( v36 == DISCONNECTING )
        goto LABEL_52;
      v37 = &this->m_joinQueueTask;
      if ( v36 != DISCONNECTED )
      {
        this->m_joinQueueTask.pump(v37);
        return (unsigned int)this->m_code;
      }
      if ( bdLoginTaskJoinQueue::getQueueMemberStatus(v37) != BD_POPPED_FROM_THE_QUEUE )
      {
        if ( bdLoginTaskJoinQueue::getQueueMemberStatus(&this->m_joinQueueTask) == BD_JOINED )
        {
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x142u, "Joined the Login Queue");
          LoginqueueRecord = bdLoginTaskJoinQueue::getLoginqueueRecord(&this->m_joinQueueTask, &result);
          v41 = this->m_loginStatus;
          v41->m_loginQueueInfo.m_position = LoginqueueRecord->m_position;
          v41->m_loginQueueInfo.m_estimatedWaitTimeSec = LoginqueueRecord->m_estimatedWaitTimeSec;
          v41->m_loginQueueInfo.m_estimatedWaitTimeMilliseconds = LoginqueueRecord->m_estimatedWaitTimeMilliseconds;
          v41->m_loginQueueInfo.m_nextPollAfterSec = LoginqueueRecord->m_nextPollAfterSec;
          v41->m_loginQueueInfo.m_nextPollAfterMilliseconds = LoginqueueRecord->m_nextPollAfterMilliseconds;
          v41->m_loginQueueInfo.m_ivSeed = LoginqueueRecord->m_ivSeed;
          bdLoginQueueRecord::~bdLoginQueueRecord(&result);
          this->m_loginQueueWaitStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
          bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting status to POLLING_LOGIN_QUEUE_WAIT", POLLING_LOGIN_QUEUE_WAIT);
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x149u, "Going to wait %d ms before polling", this->m_loginStatus->m_loginQueueInfo.m_nextPollAfterMilliseconds);
        }
        return (unsigned int)this->m_code;
      }
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x12Cu, "No need to join Login Queue at this moment");
      v38 = bdLoginResult::isCrossPlayEnabled(this->m_loginResult);
      v39 = this->m_loginStatus;
      if ( v38 )
      {
        bdLoginStatus::updateLoginStatus(v39, "Starting crossplay login", CROSSPLAY_LOG_IN);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x132u, "Updating state to: CROSSPLAY_LOG_IN");
        goto LABEL_48;
      }
      bdLoginStatus::updateLoginStatus(v39, "Starting legacy login", LEGACY_LOG_IN);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x13Au, "Updating state to: LEGACY_LOG_IN");
      goto LABEL_128;
    case POLLING_LOGIN_QUEUE:
      v47 = bdLoginTaskPollQueue::getTaskCode(&this->m_pollQueueTask);
      switch ( v47 )
      {
        case CONNECTED:
          v44 = (__int64 (__fastcall **)(void *))this->m_pollQueueTask.__vftable;
          p_m_joinQueueTask = &this->m_pollQueueTask;
LABEL_54:
          v46 = (const char *)v44[4](p_m_joinQueueTask);
          bdLoginFlow::recordBackoffError(this, v46);
          this->m_code = LOGINQUEUE_ERROR;
          break;
        case DISCONNECTING:
LABEL_52:
          v42 = this->m_loginStatus;
          v43 = this->m_joinQueueTask.getTaskMessage(&this->m_joinQueueTask);
          bdLoginStatus::updateLoginStatus(v42, v43, FAILED);
          this->m_code = LOGINQUEUE_ERROR;
          break;
        case DISCONNECTED:
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x160u, "Polled Login Queue Completed");
          v52 = bdLoginResult::isCrossPlayEnabled(this->m_loginResult);
          v53 = this->m_loginStatus;
          if ( v52 )
          {
            bdLoginStatus::updateLoginStatus(v53, "Starting crossplay login", CROSSPLAY_LOG_IN);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x166u, "Updating state to: CROSSPLAY_LOG_IN");
LABEL_48:
            this->m_umbrellaCrossplayTask.pump(&this->m_umbrellaCrossplayTask);
          }
          else
          {
            bdLoginStatus::updateLoginStatus(v53, "Starting legacy login", LEGACY_LOG_IN);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x16Eu, "Updating state to: LEGACY_LOG_IN");
LABEL_128:
            this->m_umbrellaLegacyLoginTask.pump(&this->m_umbrellaLegacyLoginTask);
          }
          break;
        default:
          this->m_pollQueueTask.pump(&this->m_pollQueueTask);
          v48 = this->m_loginStatus;
          UserQueueData = bdLoginTaskPollQueue::getUserQueueData(&this->m_pollQueueTask);
          bdLoginStatus::updateLoginStatusMessage(v48, UserQueueData);
          if ( bdLoginTaskPollQueue::pollStatusUpdated(&this->m_pollQueueTask) && bdLoginTaskPollQueue::getTaskCode(&this->m_pollQueueTask) == UNINITIALIZED )
          {
            v50 = bdLoginTaskPollQueue::getLoginqueueRecord(&this->m_pollQueueTask, &v123);
            v51 = this->m_loginStatus;
            v51->m_loginQueueInfo.m_position = v50->m_position;
            v51->m_loginQueueInfo.m_estimatedWaitTimeSec = v50->m_estimatedWaitTimeSec;
            v51->m_loginQueueInfo.m_estimatedWaitTimeMilliseconds = v50->m_estimatedWaitTimeMilliseconds;
            v51->m_loginQueueInfo.m_nextPollAfterSec = v50->m_nextPollAfterSec;
            v51->m_loginQueueInfo.m_nextPollAfterMilliseconds = v50->m_nextPollAfterMilliseconds;
            v51->m_loginQueueInfo.m_ivSeed = v50->m_ivSeed;
            bdLoginQueueRecord::~bdLoginQueueRecord(&v123);
            bdLoginTaskPollQueue::setPollStatusUpdated(&this->m_pollQueueTask, 0);
            this->m_loginQueueWaitStartTimestamp = bdPlatformTiming::getHiResTimeStamp();
            bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Setting status to POLLING_LOGIN_QUEUE_WAIT", POLLING_LOGIN_QUEUE_WAIT);
            bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdloginflow\\bdloginflow.cpp", "bdLoginFlow::pump", 0x18Fu, "Going to wait %d ms before polling again", this->m_loginStatus->m_loginQueueInfo.m_nextPollAfterMilliseconds);
          }
          break;
      }
      return (unsigned int)this->m_code;
    case POLLING_LOGIN_QUEUE_WAIT:
      v54 = bdPlatformTiming::getHiResTimeStamp();
      *(double *)&_XMM0 = bdPlatformTiming::getElapsedTime(this->m_loginQueueWaitStartTimestamp, v54);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vmovss  xmm2, cs:__real@5f000000
        vcomiss xmm1, xmm2
        vsubss  xmm1, xmm1, xmm2
        vcomiss xmm1, xmm2
        vcvttss2si rbx, xmm1
      }
      if ( _RBX < bdLoginStatus::getNextPollAfterMS(this->m_loginStatus) )
        return (unsigned int)this->m_code;
      bdLoginStatus::updateLoginStatus(this->m_loginStatus, "Updating state to: POLLING_LOGIN_QUEUE", POLLING_LOGIN_QUEUE);
      format = "Updating state to: POLLING_LOGIN_QUEUE";
      line = 409;
      goto LABEL_24;
    case FETCHING_UNO_ACCOUNT:
      v108 = bdLoginTaskFetchUnoAccount::getTaskCode(&this->m_fetchUnoAccountTask);
      if ( v108 == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v79 = (__int64 (__fastcall **)(void *))this->m_fetchUnoAccountTask.__vftable;
        p_m_createUnoAnonymousAccountTask = &this->m_fetchUnoAccountTask;
LABEL_103:
        v81 = (const char *)v79[4](p_m_createUnoAnonymousAccountTask);
        bdLoginFlow::recordBackoffError(this, v81);
        this->m_code = UNO_ERROR;
      }
      else if ( v108 == CONNECTED )
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
      v109 = bdLoginTaskUmbrellaCrossplay::getTaskCode(&this->m_umbrellaCrossplayTask);
      if ( v109 == CONNECTED )
        goto LABEL_85;
      if ( v109 != DISCONNECTED )
        goto LABEL_161;
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
          v110 = this->m_firstPartyTask._Mypair._Myval2;
          if ( v110 )
          {
            this->m_firstPartyTask._Mypair._Myval2 = NULL;
            ((void (__fastcall *)(bdLoginTask *, __int64))v110->~bdLoginTask)(v110, 1i64);
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
LABEL_161:
          bdLoginTaskUmbrellaCrossplay::pumpRefresh(&this->m_umbrellaCrossplayTask);
        }
      }
      else
      {
LABEL_135:
        v100 = (const char *)((__int64 (__fastcall *)(bdLoginTaskConnectToLSG *, __int64))this->m_connectToLSGTask.getTaskMessage)(&this->m_connectToLSGTask, v99);
        bdLoginFlow::recordBackoffError(this, v100);
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

