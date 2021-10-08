/*
==============
bdLiveStreamingInterceptor::operator delete
==============
*/

void __fastcall bdLiveStreamingInterceptor::operator delete(void *p)
{
  ??3bdLiveStreamingInterceptor@@SAXPEAX@Z(p);
}

/*
==============
bdLiveStreamingInterceptor::operator delete
==============
*/
void bdLiveStreamingInterceptor::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

