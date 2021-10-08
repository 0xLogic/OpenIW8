/*
==============
bdCypher3Des::operator delete
==============
*/

void __fastcall bdCypher3Des::operator delete(void *__formal, void *a2)
{
  ??3bdCypher3Des@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdCypher3Des::operator delete
==============
*/

void __fastcall bdCypher3Des::operator delete(void *p)
{
  ??3bdCypher3Des@@SAXPEAX@Z(p);
}

/*
==============
bdCypher3Des::operator delete
==============
*/
void bdCypher3Des::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdCypher3Des::operator delete
==============
*/
void bdCypher3Des::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

