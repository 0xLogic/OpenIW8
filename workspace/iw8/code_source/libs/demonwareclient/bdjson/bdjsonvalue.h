/*
==============
bdJSONValue::operator delete
==============
*/

void __fastcall bdJSONValue::operator delete(void *p)
{
  ??3bdJSONValue@@SAXPEAX@Z(p);
}

/*
==============
bdJSONValue::operator delete
==============
*/

void __fastcall bdJSONValue::operator delete(void *__formal, void *a2)
{
  ??3bdJSONValue@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
bdJSONValue::operator delete
==============
*/
void bdJSONValue::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdJSONValue::operator delete
==============
*/
void bdJSONValue::operator delete(void *__formal, void *a2)
{
  ;
}

