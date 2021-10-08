/*
==============
bdHMacSHA384::operator delete
==============
*/

void __fastcall bdHMacSHA384::operator delete(void *p)
{
  ??3bdHMacSHA384@@SAXPEAX@Z(p);
}

/*
==============
bdHMacSHA384::operator delete
==============
*/

void __fastcall bdHMacSHA384::operator delete(void *__formal, void *a2)
{
  ??3bdHMacSHA384@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdHMacSHA384::operator delete
==============
*/
void bdHMacSHA384::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
bdHMacSHA384::operator delete
==============
*/
void bdHMacSHA384::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

