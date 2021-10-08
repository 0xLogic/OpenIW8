/*
==============
bdReliableReceiveWindow::operator delete
==============
*/

void __fastcall bdReliableReceiveWindow::operator delete(void *p)
{
  ??3bdReliableReceiveWindow@@SAXPEAX@Z(p);
}

/*
==============
bdReliableReceiveWindow::operator delete
==============
*/
void bdReliableReceiveWindow::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

