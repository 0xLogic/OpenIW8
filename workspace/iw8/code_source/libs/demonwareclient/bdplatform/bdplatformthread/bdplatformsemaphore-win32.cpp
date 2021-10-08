/*
==============
bdPlatformSemaphore::destroy
==============
*/

void __fastcall bdPlatformSemaphore::destroy(void **handle)
{
  ?destroy@bdPlatformSemaphore@@SAXAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSemaphore::wait
==============
*/

bool __fastcall bdPlatformSemaphore::wait(void **handle)
{
  return ?wait@bdPlatformSemaphore@@SA_NAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSemaphore::release
==============
*/

void __fastcall bdPlatformSemaphore::release(void **handle)
{
  ?release@bdPlatformSemaphore@@SAXAEAPEAX@Z(handle);
}

/*
==============
bdPlatformSemaphore::createSemaphore
==============
*/

void *__fastcall bdPlatformSemaphore::createSemaphore(unsigned int initialCount, unsigned int maxCount)
{
  return ?createSemaphore@bdPlatformSemaphore@@SAPEAXII@Z(initialCount, maxCount);
}

/*
==============
bdPlatformSemaphore::createSemaphore
==============
*/
HANDLE bdPlatformSemaphore::createSemaphore(unsigned int initialCount, unsigned int maxCount)
{
  return CreateSemaphoreExW(NULL, initialCount, maxCount, NULL, 0, 0x1F0003u);
}

/*
==============
bdPlatformSemaphore::destroy
==============
*/
void bdPlatformSemaphore::destroy(void **handle)
{
  ReleaseSemaphore(*handle, 1, NULL);
  CloseHandle(*handle);
}

/*
==============
bdPlatformSemaphore::release
==============
*/
void bdPlatformSemaphore::release(void **handle)
{
  ReleaseSemaphore(*handle, 1, NULL);
}

/*
==============
bdPlatformSemaphore::wait
==============
*/
bool bdPlatformSemaphore::wait(void **handle)
{
  return WaitForSingleObject(*handle, 0xFFFFFFFF) == 0;
}

