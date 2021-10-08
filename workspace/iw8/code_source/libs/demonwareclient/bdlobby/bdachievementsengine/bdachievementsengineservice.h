/*
==============
bdAchievementsEngineService::operator delete
==============
*/

void __fastcall bdAchievementsEngineService::operator delete(void *p)
{
  ??3bdAchievementsEngineService@@SAXPEAX@Z(p);
}

/*
==============
bdAchievementsEngineService::operator delete
==============
*/
void bdAchievementsEngineService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

