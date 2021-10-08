/*
==============
bdSetUserRegulationPreferenceResponse::operator delete
==============
*/

void __fastcall bdSetUserRegulationPreferenceResponse::operator delete(void *p)
{
  ??3bdSetUserRegulationPreferenceResponse@@SAXPEAX@Z(p);
}

/*
==============
bdSetUserRegulationPreferenceResponse::operator delete
==============
*/
void bdSetUserRegulationPreferenceResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

