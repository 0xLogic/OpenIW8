/*
==============
hkIo::Detail::createWriterImpl<hkContainerHeapAllocator>
==============
*/

hkIo::Detail::WriteBufferImpl *__fastcall hkIo::Detail::createWriterImpl<hkContainerHeapAllocator>(hkArray<char,hkContainerHeapAllocator> *a)
{
  return ??$createWriterImpl@UhkContainerHeapAllocator@@@Detail@hkIo@@YAPEAUWriteBufferImpl@01@PEAV?$hkArray@DUhkContainerHeapAllocator@@@@@Z(a);
}

/*
==============
hkIo::Detail::createWriterImpl<hkContainerTempAllocator>
==============
*/

hkIo::Detail::WriteBufferImpl *__fastcall hkIo::Detail::createWriterImpl<hkContainerTempAllocator>(hkArray<char,hkContainerTempAllocator> *a)
{
  return ??$createWriterImpl@UhkContainerTempAllocator@@@Detail@hkIo@@YAPEAUWriteBufferImpl@01@PEAV?$hkArray@DUhkContainerTempAllocator@@@@@Z(a);
}

/*
==============
hkIo::Detail::createWriterImpl<hkContainerHeapAllocator>
==============
*/
hkIo::Detail::WriteBufferImpl *hkIo::Detail::createWriterImpl<hkContainerHeapAllocator>(hkArray<char,hkContainerHeapAllocator> *a)
{
  hkMemoryAllocator *v2; 

  v2 = hkMemHeapAllocator();
  return hkIo::Detail::WriteBufferImpl::createFromArray(a, v2);
}

/*
==============
hkIo::Detail::createWriterImpl<hkContainerTempAllocator>
==============
*/
hkIo::Detail::WriteBufferImpl *hkIo::Detail::createWriterImpl<hkContainerTempAllocator>(hkArray<char,hkContainerTempAllocator> *a)
{
  return hkIo::Detail::WriteBufferImpl::createFromArray(a, &hkContainerTempAllocator::s_alloc);
}

