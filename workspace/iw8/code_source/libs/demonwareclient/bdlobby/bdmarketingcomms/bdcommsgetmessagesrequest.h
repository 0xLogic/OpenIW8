/*
==============
bdCommsGetMessagesRequest::operator delete
==============
*/

void __fastcall bdCommsGetMessagesRequest::operator delete(void *p)
{
  ??3bdCommsGetMessagesRequest@@SAXPEAX@Z(p);
}

/*
==============
bdCommsGetMessagesRequest::operator delete
==============
*/
void bdCommsGetMessagesRequest::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

