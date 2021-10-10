/*
==============
Online_Backoff::MaxRetriesReached
==============
*/

bool __fastcall Online_Backoff::MaxRetriesReached(Online_Backoff *this)
{
  return ?MaxRetriesReached@Online_Backoff@@QEAA_NXZ(this);
}

/*
==============
Online_Backoff::Init
==============
*/

void __fastcall Online_Backoff::Init(Online_Backoff *this, int failureDelay, int maxAttempts, float factor, bool stopAtMax, int successDelay)
{
  ?Init@Online_Backoff@@QEAAXHHM_NH@Z(this, failureDelay, maxAttempts, factor, stopAtMax, successDelay);
}

/*
==============
Online_Backoff::ReportSuccess
==============
*/

void __fastcall Online_Backoff::ReportSuccess(Online_Backoff *this, const int ms)
{
  ?ReportSuccess@Online_Backoff@@QEAAXH@Z(this, ms);
}

/*
==============
Online_Backoff::Reset
==============
*/

void __fastcall Online_Backoff::Reset(Online_Backoff *this)
{
  ?Reset@Online_Backoff@@QEAAXXZ(this);
}

/*
==============
Online_Retry::ShouldRetry
==============
*/

bool __fastcall Online_Retry::ShouldRetry(Online_Retry *this)
{
  return ?ShouldRetry@Online_Retry@@QEAA_NXZ(this);
}

/*
==============
Online_Backoff::GetTimeRemaining
==============
*/

int __fastcall Online_Backoff::GetTimeRemaining(Online_Backoff *this, const int ms)
{
  return ?GetTimeRemaining@Online_Backoff@@QEBAHH@Z(this, ms);
}

/*
==============
Online_Backoff::CanProceed
==============
*/

bool __fastcall Online_Backoff::CanProceed(Online_Backoff *this, const int ms)
{
  return ?CanProceed@Online_Backoff@@QEAA_NH@Z(this, ms);
}

/*
==============
Online_Backoff::UpdateStopAtMax
==============
*/

void __fastcall Online_Backoff::UpdateStopAtMax(Online_Backoff *this, const bool stopAtMax)
{
  ?UpdateStopAtMax@Online_Backoff@@QEAAX_N@Z(this, stopAtMax);
}

/*
==============
Online_Backoff::ReportFailure
==============
*/

void __fastcall Online_Backoff::ReportFailure(Online_Backoff *this, const int ms)
{
  ?ReportFailure@Online_Backoff@@QEAAXH@Z(this, ms);
}

/*
==============
Online_Backoff::UpdateFailureDelay
==============
*/

void __fastcall Online_Backoff::UpdateFailureDelay(Online_Backoff *this, const int failureDelay)
{
  ?UpdateFailureDelay@Online_Backoff@@QEAAXH@Z(this, failureDelay);
}

/*
==============
Online_Backoff::UpdateSuccessDelay
==============
*/

void __fastcall Online_Backoff::UpdateSuccessDelay(Online_Backoff *this, const int successDelay)
{
  ?UpdateSuccessDelay@Online_Backoff@@QEAAXH@Z(this, successDelay);
}

/*
==============
Online_Retry::SetNextRetry
==============
*/

void __fastcall Online_Retry::SetNextRetry(Online_Retry *this)
{
  ?SetNextRetry@Online_Retry@@QEAAXXZ(this);
}

/*
==============
Online_Backoff::CanProceed
==============
*/
bool Online_Backoff::CanProceed(Online_Backoff *this, const int ms)
{
  return ms >= 0 && ms >= this->m_lastAttempt + this->m_currDelay && (!this->m_stopAtMax || this->m_currRetry <= this->m_maxRetries);
}

/*
==============
Online_Backoff::GetTimeRemaining
==============
*/
__int64 Online_Backoff::GetTimeRemaining(Online_Backoff *this, const int ms)
{
  __int64 result; 

  result = (unsigned int)(this->m_lastAttempt + this->m_currDelay - ms);
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
Online_Backoff::Init
==============
*/
void Online_Backoff::Init(Online_Backoff *this, int failureDelay, int maxAttempts, float factor, bool stopAtMax, int successDelay)
{
  this->m_stopAtMax = stopAtMax;
  this->m_successDelay = successDelay;
  *(_QWORD *)&this->m_lastAttempt = 0i64;
  this->m_currDelay = 0;
  this->m_factor = factor;
  this->m_failureDelay = failureDelay;
  this->m_maxRetries = maxAttempts;
}

/*
==============
Online_Backoff::MaxRetriesReached
==============
*/
bool Online_Backoff::MaxRetriesReached(Online_Backoff *this)
{
  return this->m_stopAtMax && this->m_currRetry > this->m_maxRetries;
}

/*
==============
Online_Backoff::ReportFailure
==============
*/
void Online_Backoff::ReportFailure(Online_Backoff *this, const int ms)
{
  int m_currRetry; 

  m_currRetry = this->m_currRetry;
  if ( m_currRetry )
  {
    if ( m_currRetry < this->m_maxRetries )
      this->m_currDelay = (int)(float)((float)this->m_currDelay * this->m_factor);
    this->m_lastAttempt = ms;
    this->m_currRetry = m_currRetry + 1;
  }
  else
  {
    this->m_currDelay = this->m_failureDelay;
    this->m_currRetry = 1;
    this->m_lastAttempt = ms;
  }
}

/*
==============
Online_Backoff::ReportSuccess
==============
*/
void Online_Backoff::ReportSuccess(Online_Backoff *this, const int ms)
{
  this->m_currDelay = this->m_successDelay;
  this->m_currRetry = 0;
  this->m_lastAttempt = ms;
}

/*
==============
Online_Backoff::Reset
==============
*/
void Online_Backoff::Reset(Online_Backoff *this)
{
  *(_QWORD *)&this->m_lastAttempt = 0i64;
  this->m_currDelay = 0;
}

/*
==============
Online_Retry::SetNextRetry
==============
*/
void Online_Retry::SetNextRetry(Online_Retry *this)
{
  int v1; 

  v1 = ++this->m_numRetries;
  this->m_retrying = 1;
  if ( v1 > 5 )
    v1 = 5;
  this->m_numRetries = v1;
  this->m_nextRetry = (1000 << this->m_numRetries) + Sys_Milliseconds();
}

/*
==============
Online_Retry::ShouldRetry
==============
*/
bool Online_Retry::ShouldRetry(Online_Retry *this)
{
  return this->m_retrying && Sys_Milliseconds() >= this->m_nextRetry;
}

/*
==============
Online_Backoff::UpdateFailureDelay
==============
*/
void Online_Backoff::UpdateFailureDelay(Online_Backoff *this, const int failureDelay)
{
  int m_failureDelay; 

  if ( this->m_currRetry <= 0 )
  {
    this->m_failureDelay = failureDelay;
  }
  else
  {
    m_failureDelay = this->m_failureDelay;
    this->m_failureDelay = failureDelay;
    if ( m_failureDelay )
    {
      if ( failureDelay != m_failureDelay )
        this->m_currDelay *= failureDelay / m_failureDelay;
    }
  }
}

/*
==============
Online_Backoff::UpdateStopAtMax
==============
*/
void Online_Backoff::UpdateStopAtMax(Online_Backoff *this, const bool stopAtMax)
{
  this->m_stopAtMax = stopAtMax;
}

/*
==============
Online_Backoff::UpdateSuccessDelay
==============
*/
void Online_Backoff::UpdateSuccessDelay(Online_Backoff *this, const int successDelay)
{
  this->m_successDelay = successDelay;
}

