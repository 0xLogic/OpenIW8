/*
==============
PlatformBlocklist::PlatformBlocklist
==============
*/

void __fastcall PlatformBlocklist::PlatformBlocklist(PlatformBlocklist *this)
{
  ??0PlatformBlocklist@@QEAA@XZ(this);
}

/*
==============
PlatformBlocklist::PlatformBlocklist
==============
*/
void PlatformBlocklist::PlatformBlocklist(PlatformBlocklist *this)
{
  PlatformBlocklist *v2; 
  __int64 v3; 
  XUID *m_xuids; 
  __int64 v5; 

  v2 = this;
  v3 = 1000i64;
  do
  {
    PlatformBlockedUser::PlatformBlockedUser(v2->m_list);
    v2 = (PlatformBlocklist *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  m_xuids = this->m_userIdResolver.m_xuids;
  this->m_numBlocked = 0;
  v5 = 200i64;
  this->m_xuidFetchRequired = 0;
  *(_QWORD *)&this->m_numErrors = 0i64;
  do
  {
    XUID::XUID(m_xuids++);
    --v5;
  }
  while ( v5 );
  this->m_userIdResolver.m_numXuids = 0;
  this->m_userIdResolver.m_numPlatformIds = 0;
  this->m_userIdResolver.m_taskId = 0;
}

