/*
==============
RetryTimer::Start
==============
*/

void __fastcall RetryTimer::Start(RetryTimer *this, RetryTimer::Mode mode)
{
  ?Start@RetryTimer@@QEAAXW4Mode@1@@Z(this, mode);
}

/*
==============
RetryTimer::Stop
==============
*/

void __fastcall RetryTimer::Stop(RetryTimer *this)
{
  ?Stop@RetryTimer@@QEAAXXZ(this);
}

/*
==============
RetryTimer::GetRetryCount
==============
*/

int __fastcall RetryTimer::GetRetryCount(RetryTimer *this)
{
  return ?GetRetryCount@RetryTimer@@QEBAHXZ(this);
}

/*
==============
RetryTimer::GetBackoffDelay
==============
*/

unsigned int __fastcall RetryTimer::GetBackoffDelay(RetryTimer *this)
{
  return ?GetBackoffDelay@RetryTimer@@AEBAIXZ(this);
}

/*
==============
RetryTimer::IsExpired
==============
*/

bool __fastcall RetryTimer::IsExpired(RetryTimer *this, const int timeMillis)
{
  return ?IsExpired@RetryTimer@@QEBA_NH@Z(this, timeMillis);
}

/*
==============
RetryTimer::IsBackingOff
==============
*/

bool __fastcall RetryTimer::IsBackingOff(RetryTimer *this)
{
  return ?IsBackingOff@RetryTimer@@QEBA_NXZ(this);
}

/*
==============
RetryTimer::IsExpired
==============
*/

bool __fastcall RetryTimer::IsExpired(RetryTimer *this)
{
  return ?IsExpired@RetryTimer@@QEBA_NXZ(this);
}

/*
==============
RetryTimer::Reset
==============
*/

void __fastcall RetryTimer::Reset(RetryTimer *this)
{
  ?Reset@RetryTimer@@QEAAXXZ(this);
}

/*
==============
RetryTimer::GetRefreshDelay
==============
*/

unsigned int __fastcall RetryTimer::GetRefreshDelay(RetryTimer *this)
{
  return ?GetRefreshDelay@RetryTimer@@AEBAIXZ(this);
}

/*
==============
RetryTimer::Init
==============
*/

void __fastcall RetryTimer::Init(RetryTimer *this, const RetryTimer::Config *config)
{
  ?Init@RetryTimer@@QEAAXAEBUConfig@1@@Z(this, config);
}

/*
==============
RetryTimer::GetMaxBackoffDelay
==============
*/

unsigned int __fastcall RetryTimer::GetMaxBackoffDelay(RetryTimer *this)
{
  return ?GetMaxBackoffDelay@RetryTimer@@AEBAIXZ(this);
}

/*
==============
RetryTimer::RetryTimer
==============
*/

void __fastcall RetryTimer::RetryTimer(RetryTimer *this)
{
  ??0RetryTimer@@QEAA@XZ(this);
}

/*
==============
RetryTimer::RetryTimer
==============
*/
void RetryTimer::RetryTimer(RetryTimer *this)
{
  this->m_config.refreshDelay = NULL;
  this->m_config.backoffDelay = NULL;
  this->m_config.maxBackoffDelay = NULL;
  *(_QWORD *)&this->m_config.initialMode = 0i64;
  this->m_retryCount = 0;
  this->m_expiryTime = 0x7FFFFFFF;
}

/*
==============
RetryTimer::GetBackoffDelay
==============
*/
__int64 RetryTimer::GetBackoffDelay(RetryTimer *this)
{
  const dvar_t *backoffDelay; 

  backoffDelay = this->m_config.backoffDelay;
  if ( backoffDelay )
    return backoffDelay->current.unsignedInt;
  else
    return 1000i64;
}

/*
==============
RetryTimer::GetMaxBackoffDelay
==============
*/
__int64 RetryTimer::GetMaxBackoffDelay(RetryTimer *this)
{
  const dvar_t *maxBackoffDelay; 

  maxBackoffDelay = this->m_config.maxBackoffDelay;
  if ( maxBackoffDelay )
    return maxBackoffDelay->current.unsignedInt;
  else
    return 0x7FFFFFFFi64;
}

/*
==============
RetryTimer::GetRefreshDelay
==============
*/
const dvar_t *RetryTimer::GetRefreshDelay(RetryTimer *this)
{
  const dvar_t *result; 

  result = this->m_config.refreshDelay;
  if ( this->m_config.refreshDelay )
    return (const dvar_t *)result->current.unsignedInt;
  return result;
}

/*
==============
RetryTimer::GetRetryCount
==============
*/
__int64 RetryTimer::GetRetryCount(RetryTimer *this)
{
  return (unsigned int)this->m_retryCount;
}

/*
==============
RetryTimer::Init
==============
*/
void RetryTimer::Init(RetryTimer *this, const RetryTimer::Config *config)
{
  int integer; 
  unsigned int unsignedInt; 
  RetryTimer *v5; 
  RetryTimer::Mode initialMode; 
  const dvar_t *backoffDelay; 
  int v8; 
  const dvar_t *maxBackoffDelay; 

  __asm { vmovups ymm0, ymmword ptr [rdx] }
  integer = 0;
  unsignedInt = 0x7FFFFFFF;
  __asm { vmovups ymmword ptr [rcx], ymm0 }
  this->m_retryCount = 0;
  v5 = this;
  this->m_expiryTime = 0x7FFFFFFF;
  initialMode = config->initialMode;
  if ( initialMode )
  {
    if ( initialMode == MODE_REFRESH )
    {
      if ( this->m_config.refreshDelay )
        integer = this->m_config.refreshDelay->current.integer;
      this->m_delay = integer;
    }
    else if ( initialMode == MODE_BACKOFF )
    {
      backoffDelay = this->m_config.backoffDelay;
      if ( (this->m_config.flags & 1) != 0 )
      {
        if ( backoffDelay )
          v8 = I_irand(0, backoffDelay->current.integer);
        else
          v8 = I_irand(0, 1000);
      }
      else if ( backoffDelay )
      {
        v8 = backoffDelay->current.integer;
      }
      else
      {
        v8 = 1000;
      }
      v5->m_delay = v8;
      maxBackoffDelay = v5->m_config.maxBackoffDelay;
      if ( maxBackoffDelay )
        unsignedInt = maxBackoffDelay->current.unsignedInt;
      if ( unsignedInt > v5->m_delay )
        unsignedInt = v5->m_delay;
      ++v5->m_retryCount;
      v5->m_delay = unsignedInt;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\retry_timer.cpp", 65, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid timer mode %d", (unsigned __int8)initialMode) )
    {
      __debugbreak();
    }
    v5->m_expiryTime = v5->m_delay + Sys_Milliseconds();
  }
}

/*
==============
RetryTimer::IsBackingOff
==============
*/
bool RetryTimer::IsBackingOff(RetryTimer *this)
{
  return this->m_retryCount > 0 && this->m_expiryTime - Sys_Milliseconds() > 0;
}

/*
==============
RetryTimer::IsExpired
==============
*/
bool RetryTimer::IsExpired(RetryTimer *this, const int timeMillis)
{
  return this->m_expiryTime - timeMillis <= 0;
}

/*
==============
RetryTimer::IsExpired
==============
*/
bool RetryTimer::IsExpired(RetryTimer *this)
{
  return this->m_expiryTime - Sys_Milliseconds() <= 0;
}

/*
==============
RetryTimer::Reset
==============
*/
void RetryTimer::Reset(RetryTimer *this)
{
  this->m_retryCount = 0;
  this->m_expiryTime = 0x7FFFFFFF;
}

/*
==============
RetryTimer::Start
==============
*/
void RetryTimer::Start(RetryTimer *this, RetryTimer::Mode mode)
{
  const dvar_t *backoffDelay; 
  unsigned int v4; 
  const dvar_t *maxBackoffDelay; 
  unsigned int unsignedInt; 

  if ( mode == MODE_REFRESH )
  {
    if ( this->m_config.refreshDelay )
      unsignedInt = this->m_config.refreshDelay->current.unsignedInt;
    else
      unsignedInt = 0;
LABEL_28:
    this->m_delay = unsignedInt;
    goto LABEL_29;
  }
  if ( mode == MODE_BACKOFF )
  {
    backoffDelay = this->m_config.backoffDelay;
    if ( this->m_retryCount )
    {
      if ( backoffDelay )
        v4 = backoffDelay->current.unsignedInt;
      else
        v4 = 1000;
      if ( 2 * this->m_delay > v4 )
        v4 = 2 * this->m_delay;
    }
    else if ( (this->m_config.flags & 1) != 0 )
    {
      if ( backoffDelay )
        v4 = I_irand(0, backoffDelay->current.integer);
      else
        v4 = I_irand(0, 1000);
    }
    else if ( backoffDelay )
    {
      v4 = backoffDelay->current.unsignedInt;
    }
    else
    {
      v4 = 1000;
    }
    this->m_delay = v4;
    maxBackoffDelay = this->m_config.maxBackoffDelay;
    if ( maxBackoffDelay )
    {
      unsignedInt = maxBackoffDelay->current.unsignedInt;
      if ( unsignedInt > this->m_delay )
        unsignedInt = this->m_delay;
      ++this->m_retryCount;
    }
    else
    {
      unsignedInt = 0x7FFFFFFF;
      if ( this->m_delay < 0x7FFFFFFF )
        unsignedInt = this->m_delay;
      ++this->m_retryCount;
    }
    goto LABEL_28;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\retry_timer.cpp", 65, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid timer mode %d", (unsigned __int8)mode) )
  {
    __debugbreak();
    this->m_expiryTime = this->m_delay + Sys_Milliseconds();
    return;
  }
LABEL_29:
  this->m_expiryTime = this->m_delay + Sys_Milliseconds();
}

/*
==============
RetryTimer::Stop
==============
*/
void RetryTimer::Stop(RetryTimer *this)
{
  this->m_expiryTime = 0x7FFFFFFF;
}

