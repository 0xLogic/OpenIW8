/*
==============
hknpWorld::operator delete
==============
*/

void __fastcall hknpWorld::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hknpWorld@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hknpWorld::operator delete
==============
*/
void hknpWorld::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    if ( *((_WORD *)p + 8) != 0xFFFF )
      v2 = *((unsigned __int16 *)p + 8);
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

