/*
==============
hkFreeListAllocator::getExtendedInterface
==============
*/

hkMemoryAllocator::ExtendedInterface *__fastcall hkFreeListAllocator::getExtendedInterface(hkFreeListAllocator *this)
{
  return ?getExtendedInterface@hkFreeListAllocator@@UEAAPEAUExtendedInterface@hkMemoryAllocator@@XZ(this);
}

/*
==============
hkFreeListAllocator::operator delete
==============
*/

void __fastcall hkFreeListAllocator::operator delete(void *__formal, void *a2)
{
  ??3hkFreeListAllocator@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
hkFreeListAllocator::operator delete
==============
*/
void hkFreeListAllocator::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
hkFreeListAllocator::getExtendedInterface
==============
*/
hkMemoryAllocator::ExtendedInterface *hkFreeListAllocator::getExtendedInterface(hkFreeListAllocator *this)
{
  hkMemoryAllocator::ExtendedInterface *result; 

  result = &this->hkMemoryAllocator::ExtendedInterface;
  if ( !this )
    return 0i64;
  return result;
}

