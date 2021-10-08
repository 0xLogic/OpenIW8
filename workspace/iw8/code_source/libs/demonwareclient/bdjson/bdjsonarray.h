/*
==============
bdJSONArray::operator delete
==============
*/

void __fastcall bdJSONArray::operator delete(void *p)
{
  ??3bdJSONArray@@KAXPEAX@Z(p);
}

/*
==============
bdJSONArray::operator delete
==============
*/
void bdJSONArray::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

