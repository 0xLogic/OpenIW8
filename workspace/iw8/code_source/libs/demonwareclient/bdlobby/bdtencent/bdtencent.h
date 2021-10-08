/*
==============
bdTencent::operator delete
==============
*/

void __fastcall bdTencent::operator delete(void *p)
{
  ??3bdTencent@@SAXPEAX@Z(p);
}

/*
==============
bdTencent::operator delete
==============
*/
void bdTencent::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

