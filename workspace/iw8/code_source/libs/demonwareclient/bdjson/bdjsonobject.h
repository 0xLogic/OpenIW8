/*
==============
bdJSONObject::operator delete
==============
*/

void __fastcall bdJSONObject::operator delete(void *p)
{
  ??3bdJSONObject@@KAXPEAX@Z(p);
}

/*
==============
bdJSONObject::operator delete
==============
*/
void bdJSONObject::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

