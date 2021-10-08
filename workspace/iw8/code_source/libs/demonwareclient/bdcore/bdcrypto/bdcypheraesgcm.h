/*
==============
bdCypherAESGCM::operator delete
==============
*/

void __fastcall bdCypherAESGCM::operator delete(void *__formal, void *a2)
{
  ??3bdCypherAESGCM@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdCypherAESGCM::operator delete
==============
*/

void __fastcall bdCypherAESGCM::operator delete(void *p)
{
  ??3bdCypherAESGCM@@SAXPEAX@Z(p);
}

/*
==============
bdCypherAESGCM::operator delete
==============
*/
void bdCypherAESGCM::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdCypherAESGCM::operator delete
==============
*/
void bdCypherAESGCM::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

