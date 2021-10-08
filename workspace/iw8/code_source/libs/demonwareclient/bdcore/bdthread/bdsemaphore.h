/*
==============
bdSemaphore::operator delete
==============
*/

void __fastcall bdSemaphore::operator delete(void *p)
{
  ??3bdSemaphore@@SAXPEAX@Z(p);
}

/*
==============
bdSemaphore::operator delete
==============
*/
void bdSemaphore::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

