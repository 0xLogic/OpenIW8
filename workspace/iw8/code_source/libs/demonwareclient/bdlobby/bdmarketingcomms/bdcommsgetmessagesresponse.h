/*
==============
bdCommsGetMessagesResponse::operator delete
==============
*/

void __fastcall bdCommsGetMessagesResponse::operator delete(void *p)
{
  ??3bdCommsGetMessagesResponse@@SAXPEAX@Z(p);
}

/*
==============
bdCommsGetMessagesResponse::operator delete
==============
*/
void bdCommsGetMessagesResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

