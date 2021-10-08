/*
==============
bdEventLog::operator delete
==============
*/

void __fastcall bdEventLog::operator delete(void *p)
{
  ??3bdEventLog@@SAXPEAX@Z(p);
}

/*
==============
bdEventLog::operator delete
==============
*/
void bdEventLog::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

