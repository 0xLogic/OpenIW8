/*
==============
bdCypherAES::operator delete
==============
*/

void __fastcall bdCypherAES::operator delete(void *__formal, void *a2)
{
  ??3bdCypherAES@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdCypherAES::operator delete
==============
*/

void __fastcall bdCypherAES::operator delete(void *p)
{
  ??3bdCypherAES@@SAXPEAX@Z(p);
}

/*
==============
bdCypherAES::operator delete
==============
*/
void bdCypherAES::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdCypherAES::operator delete
==============
*/
void bdCypherAES::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

