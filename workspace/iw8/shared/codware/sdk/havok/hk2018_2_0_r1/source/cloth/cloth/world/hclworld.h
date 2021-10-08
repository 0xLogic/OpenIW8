/*
==============
hclWorld::operator delete
==============
*/

void __fastcall hclWorld::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hclWorld@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hclWorld::operator delete
==============
*/
void hclWorld::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  v2 = nbytes;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  if ( *((_WORD *)p + 8) != 0xFFFF )
    v2 = *((unsigned __int16 *)p + 8);
  Value->m_heap->blockFree(Value->m_heap, p, v2);
}

