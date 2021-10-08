/*
==============
hkMemorySystem::getAllocationCallStack
==============
*/

hkResult __fastcall hkMemorySystem::getAllocationCallStack(hkMemorySystem *this, const void *__formal, unsigned __int64 *a3, int *a4, unsigned __int64 *__formala)
{
  return ?getAllocationCallStack@hkMemorySystem@@UEAA?AUhkResult@@PEBXPEA_KAEAHAEA_K@Z(this, __formal, a3, a4, __formala);
}

/*
==============
hkMemorySystem::getDebugInterface
==============
*/

hkDebugMemorySystem *__fastcall hkMemorySystem::getDebugInterface(hkMemorySystem *this)
{
  return ?getDebugInterface@hkMemorySystem@@UEAAPEAVhkDebugMemorySystem@@XZ(this);
}

/*
==============
hkMemorySystem::getMemorySnapshot
==============
*/

hkResult __fastcall hkMemorySystem::getMemorySnapshot(hkMemorySystem *this, hkMemorySnapshot *__formal)
{
  return ?getMemorySnapshot@hkMemorySystem@@UEBA?AUhkResult@@AEAVhkMemorySnapshot@@@Z(this, __formal);
}

/*
==============
hkMemorySystem::setHeapScrubValues
==============
*/

void __fastcall hkMemorySystem::setHeapScrubValues(hkMemorySystem *this, unsigned int __formal, unsigned int a3)
{
  ?setHeapScrubValues@hkMemorySystem@@UEAAXII@Z(this, __formal, a3);
}

/*
==============
hkMemorySystem::operator delete
==============
*/

void __fastcall hkMemorySystem::operator delete(void *__formal, void *a2)
{
  ??3hkMemorySystem@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
hkMemorySystem::isOk
==============
*/

unsigned int __fastcall hkMemorySystem::isOk(hkMemorySystem *this)
{
  return ?isOk@hkMemorySystem@@UEBAIXZ(this);
}

/*
==============
hkMemorySystem::operator delete
==============
*/
void hkMemorySystem::operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
hkMemorySystem::getAllocationCallStack
==============
*/
const void *hkMemorySystem::getAllocationCallStack(hkMemorySystem *this, const void *__formal, unsigned __int64 *a3, int *a4)
{
  *(_DWORD *)__formal = -2147220992;
  return __formal;
}

/*
==============
hkMemorySystem::getDebugInterface
==============
*/
hkDebugMemorySystem *hkMemorySystem::getDebugInterface(hkMemorySystem *this)
{
  return 0i64;
}

/*
==============
hkMemorySystem::getMemorySnapshot
==============
*/
hkMemorySnapshot *hkMemorySystem::getMemorySnapshot(hkMemorySystem *this, hkMemorySnapshot *__formal)
{
  LODWORD(__formal->m_mem) = -2147220992;
  return __formal;
}

/*
==============
hkMemorySystem::isOk
==============
*/
__int64 hkMemorySystem::isOk(hkMemorySystem *this)
{
  return 1i64;
}

/*
==============
hkMemorySystem::setHeapScrubValues
==============
*/
void hkMemorySystem::setHeapScrubValues(hkMemorySystem *this, unsigned int __formal, unsigned int a3)
{
  ;
}

