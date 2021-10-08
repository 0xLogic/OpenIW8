/*
==============
hkLargeBlockAllocator::LimitedMemoryListener::~LimitedMemoryListener
==============
*/

void __fastcall hkLargeBlockAllocator::LimitedMemoryListener::~LimitedMemoryListener(hkLargeBlockAllocator::LimitedMemoryListener *this)
{
  ??1LimitedMemoryListener@hkLargeBlockAllocator@@UEAA@XZ(this);
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree
==============
*/

void __fastcall hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree(hkLargeBlockAllocator::FixedMemoryBlockServer *this, void *p, int numBytes)
{
  ?blockFree@FixedMemoryBlockServer@hkLargeBlockAllocator@@UEAAXPEAXH@Z(this, p, numBytes);
}

/*
==============
hkLargeBlockAllocator::getExtendedInterface
==============
*/

hkMemoryAllocator::ExtendedInterface *__fastcall hkLargeBlockAllocator::getExtendedInterface(hkLargeBlockAllocator *this)
{
  return ?getExtendedInterface@hkLargeBlockAllocator@@UEAAPEAUExtendedInterface@hkMemoryAllocator@@XZ(this);
}

/*
==============
hkLargeBlockAllocator::operator delete
==============
*/

void __fastcall hkLargeBlockAllocator::operator delete(void *__formal, void *a2)
{
  ??3hkLargeBlockAllocator@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize
==============
*/

int __fastcall hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize(hkLargeBlockAllocator::FixedMemoryBlockServer *this, const void *obj, int numBytes)
{
  return ?getAllocatedSize@FixedMemoryBlockServer@hkLargeBlockAllocator@@UEBAHPEBXH@Z(this, obj, numBytes);
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc
==============
*/

void __fastcall __noreturn hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc(hkLargeBlockAllocator::FixedMemoryBlockServer *this, int numBytes)
{
  ?blockAlloc@FixedMemoryBlockServer@hkLargeBlockAllocator@@UEAAPEAXH@Z(this, numBytes);
}

/*
==============
hkLargeBlockAllocator::LimitedMemoryListener::~LimitedMemoryListener
==============
*/
void hkLargeBlockAllocator::LimitedMemoryListener::~LimitedMemoryListener(hkLargeBlockAllocator::LimitedMemoryListener *this)
{
  this->__vftable = (hkLargeBlockAllocator::LimitedMemoryListener_vtbl *)&hkLargeBlockAllocator::LimitedMemoryListener::`vftable';
}

/*
==============
hkLargeBlockAllocator::operator delete
==============
*/
void hkLargeBlockAllocator::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc
==============
*/
void __noreturn hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc(hkLargeBlockAllocator::FixedMemoryBlockServer *this, int numBytes)
{
  hkMemoryAllocator::outOfMemory(this, NULL);
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree
==============
*/
void hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree(hkLargeBlockAllocator::FixedMemoryBlockServer *this, void *p, int numBytes)
{
  ;
}

/*
==============
hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize
==============
*/
__int64 hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize(hkLargeBlockAllocator::FixedMemoryBlockServer *this, const void *obj, int numBytes)
{
  return (unsigned int)numBytes;
}

/*
==============
hkLargeBlockAllocator::getExtendedInterface
==============
*/
hkMemoryAllocator::ExtendedInterface *hkLargeBlockAllocator::getExtendedInterface(hkLargeBlockAllocator *this)
{
  hkMemoryAllocator::ExtendedInterface *result; 

  result = &this->hkMemoryAllocator::ExtendedInterface;
  if ( !this )
    return 0i64;
  return result;
}

