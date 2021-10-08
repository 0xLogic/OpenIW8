/*
==============
Timer::IsActive
==============
*/

bool __fastcall Timer::IsActive(Timer *this)
{
  return ?IsActive@Timer@@QEBA_NXZ(this);
}

/*
==============
Timer::Timer
==============
*/

void __fastcall Timer::Timer(Timer *this)
{
  ??0Timer@@QEAA@XZ(this);
}

/*
==============
Timer::Start
==============
*/

void __fastcall Timer::Start(Timer *this, int now, int expiryDelta)
{
  ?Start@Timer@@QEAAXHH@Z(this, now, expiryDelta);
}

/*
==============
Timer::IsStarted
==============
*/

bool __fastcall Timer::IsStarted(Timer *this)
{
  return ?IsStarted@Timer@@QEBA_NXZ(this);
}

/*
==============
Timer::IsExpired
==============
*/

bool __fastcall Timer::IsExpired(Timer *this)
{
  return ?IsExpired@Timer@@QEBA_NXZ(this);
}

/*
==============
Timer::IsExpired
==============
*/

bool __fastcall Timer::IsExpired(Timer *this, const int now)
{
  return ?IsExpired@Timer@@QEBA_NH@Z(this, now);
}

/*
==============
Timer::Reset
==============
*/

void __fastcall Timer::Reset(Timer *this)
{
  ?Reset@Timer@@QEAAXXZ(this);
}

/*
==============
Timer::Start
==============
*/

void __fastcall Timer::Start(Timer *this, int expiryDelta)
{
  ?Start@Timer@@QEAAXH@Z(this, expiryDelta);
}

/*
==============
Timer::Timer
==============
*/
void Timer::Timer(Timer *this)
{
  this->m_expiryTime = -1;
}

/*
==============
Timer::IsActive
==============
*/
bool Timer::IsActive(Timer *this)
{
  return this->m_expiryTime != -1 && Sys_Milliseconds() < this->m_expiryTime;
}

/*
==============
Timer::IsExpired
==============
*/
bool Timer::IsExpired(Timer *this, const int now)
{
  return now >= this->m_expiryTime;
}

/*
==============
Timer::IsExpired
==============
*/
bool Timer::IsExpired(Timer *this)
{
  return Sys_Milliseconds() >= this->m_expiryTime;
}

/*
==============
Timer::IsStarted
==============
*/
bool Timer::IsStarted(Timer *this)
{
  return this->m_expiryTime != -1;
}

/*
==============
Timer::Reset
==============
*/
void Timer::Reset(Timer *this)
{
  this->m_expiryTime = -1;
}

/*
==============
Timer::Start
==============
*/
void Timer::Start(Timer *this, int expiryDelta)
{
  this->m_expiryTime = expiryDelta + Sys_Milliseconds();
}

/*
==============
Timer::Start
==============
*/
void Timer::Start(Timer *this, int now, int expiryDelta)
{
  this->m_expiryTime = now + expiryDelta;
}

