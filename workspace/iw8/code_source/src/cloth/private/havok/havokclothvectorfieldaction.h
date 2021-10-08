/*
==============
HavokCloth_VectorFieldAction::operator delete
==============
*/

void __fastcall HavokCloth_VectorFieldAction::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokCloth_VectorFieldAction@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokCloth_VectorFieldAction::operator delete
==============
*/
void HavokCloth_VectorFieldAction::operator delete(void *p, unsigned __int64 nbytes)
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

