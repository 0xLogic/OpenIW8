/*
==============
bdAchievementClient::UserAchievements::UserAchievements
==============
*/

void __fastcall bdAchievementClient::UserAchievements::UserAchievements(bdAchievementClient::UserAchievements *this)
{
  ??0UserAchievements@bdAchievementClient@@QEAA@XZ(this);
}

/*
==============
bdAchievementClient::operator delete
==============
*/

void __fastcall bdAchievementClient::operator delete(void *p)
{
  ??3bdAchievementClient@@SAXPEAX@Z(p);
}

/*
==============
bdAchievementClient::UserAchievements::UserAchievements
==============
*/
void bdAchievementClient::UserAchievements::UserAchievements(bdAchievementClient::UserAchievements *this)
{
  this->isLoaded = 0;
  bdUserAccountID::bdUserAccountID(&this->firstPartyUser);
  this->platform = BD_PLATFORM_ID_INVALID;
  `eh vector constructor iterator'(&this->achievements, 0xE20ui64, 1ui64, (void (__fastcall *)(void *))bdAchievementClient::Achievement::Achievement, (void (__fastcall *)(void *))bdAchievementClient::Achievement::~Achievement);
  this->achievements.m_size = 0;
}

/*
==============
bdAchievementClient::operator delete
==============
*/
void bdAchievementClient::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

