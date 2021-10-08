/*
==============
bdGetInventoryItemInfoResponse::operator delete
==============
*/

void __fastcall bdGetInventoryItemInfoResponse::operator delete(void *p)
{
  ??3bdGetInventoryItemInfoResponse@@SAXPEAX@Z(p);
}

/*
==============
bdGetInventoryItemInfoResponse::operator delete
==============
*/
void bdGetInventoryItemInfoResponse::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

