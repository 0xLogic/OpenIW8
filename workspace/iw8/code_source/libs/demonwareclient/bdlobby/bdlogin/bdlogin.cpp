/*
==============
bdLogin::pump
==============
*/

void __fastcall bdLogin::pump(bdLogin *this)
{
  ?pump@bdLogin@@QEAAXXZ(this);
}

/*
==============
bdLogin::bdLogin
==============
*/

void __fastcall bdLogin::bdLogin(bdLogin *this, const bdLoginConfig *config)
{
  ??0bdLogin@@IEAA@AEBVbdLoginConfig@@@Z(this, config);
}

/*
==============
bdLogin::~bdLogin
==============
*/

void __fastcall bdLogin::~bdLogin(bdLogin *this)
{
  ??1bdLogin@@QEAA@XZ(this);
}

/*
==============
bdLogin::getStatus
==============
*/

const bdLoginStatus *__fastcall bdLogin::getStatus(bdLogin *this)
{
  return ?getStatus@bdLogin@@QEBAAEBVbdLoginStatus@@XZ(this);
}

/*
==============
bdLogin::start
==============
*/

bool __fastcall bdLogin::start(bdLogin *this)
{
  return ?start@bdLogin@@QEAA_NXZ(this);
}

/*
==============
bdLogin::getResult
==============
*/

const bdLoginResult *__fastcall bdLogin::getResult(bdLogin *this)
{
  return ?getResult@bdLogin@@QEBAAEBVbdLoginResult@@XZ(this);
}

/*
==============
bdLogin::reset
==============
*/

void __fastcall bdLogin::reset(bdLogin *this)
{
  ?reset@bdLogin@@QEAAXXZ(this);
}

/*
==============
bdLogin::resume
==============
*/

void __fastcall bdLogin::resume(bdLogin *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  ?resume@bdLogin@@QEAAXW4bdLoginResumeFlow@@AEAVbdLoginResumeConfig@@@Z(this, resumeFlow, resumeConfig);
}

/*
==============
bdLogin::abort
==============
*/

void __fastcall bdLogin::abort(bdLogin *this)
{
  ?abort@bdLogin@@QEAAXXZ(this);
}

/*
==============
bdLogin::bdLogin
==============
*/

void __fastcall bdLogin::bdLogin(bdLogin *this)
{
  ??0bdLogin@@QEAA@XZ(this);
}

/*
==============
bdLogin::succeeded
==============
*/

bool __fastcall bdLogin::succeeded(bdLogin *this)
{
  return ?succeeded@bdLogin@@QEAA_NXZ(this);
}

/*
==============
bdLogin::isPending
==============
*/

bool __fastcall bdLogin::isPending(bdLogin *this)
{
  return ?isPending@bdLogin@@QEBA_NXZ(this);
}

/*
==============
bdLogin::operator=
==============
*/

bdLogin *__fastcall bdLogin::operator=(bdLogin *this, const bdLogin *login)
{
  return ??4bdLogin@@QEAAAEAV0@AEBV0@@Z(this, login);
}

/*
==============
bdLogin::bdLogin
==============
*/

void __fastcall bdLogin::bdLogin(bdLogin *this, const bdLogin *login)
{
  ??0bdLogin@@QEAA@AEBV0@@Z(this, login);
}

/*
==============
bdLogin::getFailure
==============
*/

const bdLoginFailure *__fastcall bdLogin::getFailure(bdLogin *this)
{
  return ?getFailure@bdLogin@@QEBAAEBVbdLoginFailure@@XZ(this);
}

/*
==============
bdLogin::bdLogin
==============
*/
void bdLogin::bdLogin(bdLogin *this, const bdLoginConfig *config)
{
  this->m_loginStarted = 0;
  bdLoginConfig::bdLoginConfig(&this->m_loginConfig, config);
  bdLoginStatus::bdLoginStatus(&this->m_loginStatus);
  bdLoginFailure::bdLoginFailure(&this->m_loginFailure);
  bdLoginResult::bdLoginResult(&this->m_loginResult);
  bdLoginFlow::bdLoginFlow(&this->m_loginFlow, &this->m_loginConfig, &this->m_loginStatus, &this->m_loginResult);
  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
}

/*
==============
bdLogin::bdLogin
==============
*/
void bdLogin::bdLogin(bdLogin *this, const bdLogin *login)
{
  this->m_loginStarted = 0;
  bdLoginConfig::bdLoginConfig(&this->m_loginConfig, &login->m_loginConfig);
  bdLoginStatus::bdLoginStatus(&this->m_loginStatus);
  bdLoginFailure::bdLoginFailure(&this->m_loginFailure);
  bdLoginResult::bdLoginResult(&this->m_loginResult);
  bdLoginFlow::bdLoginFlow(&this->m_loginFlow, &this->m_loginConfig, &this->m_loginStatus, &this->m_loginResult);
  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
}

/*
==============
bdLogin::bdLogin
==============
*/
void bdLogin::bdLogin(bdLogin *this)
{
  this->m_loginStarted = 0;
  bdLoginConfig::bdLoginConfig(&this->m_loginConfig);
  bdLoginStatus::bdLoginStatus(&this->m_loginStatus);
  bdLoginFailure::bdLoginFailure(&this->m_loginFailure);
  bdLoginResult::bdLoginResult(&this->m_loginResult);
  bdLoginFlow::bdLoginFlow(&this->m_loginFlow, &this->m_loginConfig, &this->m_loginStatus, &this->m_loginResult);
  bdBackoffTimer::bdBackoffTimer(&this->m_backoffTimer);
}

/*
==============
bdLogin::~bdLogin
==============
*/
void bdLogin::~bdLogin(bdLogin *this)
{
  bdLoginFlow::~bdLoginFlow(&this->m_loginFlow);
  bdLoginResult::~bdLoginResult(&this->m_loginResult);
  bdLoginFailure::~bdLoginFailure(&this->m_loginFailure);
  bdLoginStatus::~bdLoginStatus(&this->m_loginStatus);
  bdLoginConfig::~bdLoginConfig(&this->m_loginConfig);
}

/*
==============
bdLogin::operator=
==============
*/
bdLogin *bdLogin::operator=(bdLogin *this, const bdLogin *login)
{
  bdLoginConfig::operator=(&this->m_loginConfig, &login->m_loginConfig);
  return this;
}

/*
==============
bdLogin::abort
==============
*/
void bdLogin::abort(bdLogin *this)
{
  this->m_loginStarted = 0;
  bdLoginFlow::abort(&this->m_loginFlow);
}

/*
==============
bdLogin::getFailure
==============
*/
bdLoginFailure *bdLogin::getFailure(bdLogin *this)
{
  return &this->m_loginFailure;
}

/*
==============
bdLogin::getResult
==============
*/
bdLoginResult *bdLogin::getResult(bdLogin *this)
{
  return &this->m_loginResult;
}

/*
==============
bdLogin::getStatus
==============
*/
bdLoginStatus *bdLogin::getStatus(bdLogin *this)
{
  return &this->m_loginStatus;
}

/*
==============
bdLogin::isPending
==============
*/
bool bdLogin::isPending(bdLogin *this)
{
  bdLoginStatus *p_m_loginStatus; 

  p_m_loginStatus = &this->m_loginStatus;
  return bdLoginStatus::getLoginStatusCode(&this->m_loginStatus) != FAILED && bdLoginStatus::getLoginStatusCode(p_m_loginStatus) != FLOW_PAUSED && bdLoginStatus::getLoginStatusCode(p_m_loginStatus) != COMPLETED;
}

/*
==============
bdLogin::pump
==============
*/
void bdLogin::pump(bdLogin *this)
{
  this->m_failureCode = bdLoginFlow::pump(&this->m_loginFlow);
}

/*
==============
bdLogin::reset
==============
*/
void bdLogin::reset(bdLogin *this)
{
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::reset", 0x7Eu, "Calling reset on bdLogin");
  this->m_loginStarted = 0;
  bdLoginFlow::reset(&this->m_loginFlow);
  bdLoginFailure::updateLoginFailure(&this->m_loginFailure, (const char *)&queryFormat.fmt + 3, NOT_AN_ERROR);
  bdLoginResult::reset(&this->m_loginResult);
}

/*
==============
bdLogin::resume
==============
*/
void bdLogin::resume(bdLogin *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  bdLoginFlow::resume(&this->m_loginFlow, resumeFlow, resumeConfig);
}

/*
==============
bdLogin::start
==============
*/
char bdLogin::start(bdLogin *this)
{
  char v2; 
  int v3; 
  bdEnvironment Environment; 
  bdLoginConfig *p_m_loginConfig; 
  bdEnvironment v6; 
  bdEnvironment v7; 
  const char *v8; 

  v2 = 1;
  v3 = 2;
  if ( bdLoginConfig::getLoginType(&this->m_loginConfig) == UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::start", 0x30u, "Calling login.start() on platform which does not support bdLogin");
    bdLoginStatus::updateLoginStatus(&this->m_loginStatus, "Calling login.start() on platform which does not support bdLogin", FAILED);
    v2 = 0;
  }
  if ( bdLoginConfig::getLoginType(&this->m_loginConfig) != CONNECTING && bdLoginConfig::getLoginType(&this->m_loginConfig) != WAITING_FOR_REPORT_CONSOLE_DETAILS )
  {
    Environment = bdLoginConfig::getEnvironment(&this->m_loginConfig);
    p_m_loginConfig = &this->m_loginConfig;
    if ( Environment == BD_ENVIRONMENT_MAX )
    {
      if ( bdLoginConfig::isDediLogin(p_m_loginConfig) )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::start", 0x40u, "No environment set, defaulting to Retail for ATVI Dedicated Server. Specify environment using setEnvironment()");
      }
      else
      {
        v3 = 0;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::start", 0x48u, "Environment not set for login, defaulting to DEV");
      }
      v6 = v3;
    }
    else
    {
      v7 = bdLoginConfig::getEnvironment(p_m_loginConfig);
      v8 = bdEnvironmentToString(v7);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::start", 0x4Eu, "Using client defined environment: [%s]", v8);
      v6 = bdLoginConfig::getEnvironment(&this->m_loginConfig);
    }
    bdLoginResult::setEnvironment(&this->m_loginResult, v6);
  }
  if ( !v2 )
    return 0;
  if ( this->m_loginStarted )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogin.cpp", "bdLogin::start", 0x59u, "Calling login.start() on already instantiated bdLogin instance. Make sure you call login.reset() first");
    bdLoginStatus::updateLoginStatusMessage(&this->m_loginStatus, "WARNING: Calling login.start() on instance that was already initiated. You will have to call login.reset() first");
    return 0;
  }
  else if ( bdLoginFlow::validateConfig(&this->m_loginFlow) )
  {
    this->m_loginStarted = 1;
    return 1;
  }
  else
  {
    bdLoginStatus::updateLoginStatus(&this->m_loginStatus, "Failed to validate config for login", FAILED);
    return 0;
  }
}

/*
==============
bdLogin::succeeded
==============
*/
char bdLogin::succeeded(bdLogin *this)
{
  bdLoginFailure::bdLoginFailureCode m_failureCode; 
  const char *LoginStatusMessage; 

  if ( bdLoginStatus::finishedFlow(&this->m_loginStatus) )
    return 1;
  if ( bdLoginStatus::getLoginStatusCode(&this->m_loginStatus) == FAILED )
  {
    m_failureCode = this->m_failureCode;
    LoginStatusMessage = bdLoginStatus::getLoginStatusMessage(&this->m_loginStatus);
    bdLoginFailure::updateLoginFailure(&this->m_loginFailure, LoginStatusMessage, m_failureCode);
  }
  return 0;
}

