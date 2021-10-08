/*
==============
hkServerObjectHandler::operator delete
==============
*/

void __fastcall hkServerObjectHandler::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hkServerObjectHandler@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkServerObjectSerializer::operator delete
==============
*/

void __fastcall hkServerObjectSerializer::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3hkServerObjectSerializer@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
hkServerObjectHandler::operator delete
==============
*/
void hkServerObjectHandler::operator delete(void *p, unsigned __int64 nbytes)
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

/*
==============
hkServerObjectSerializer::operator delete
==============
*/
void hkServerObjectSerializer::operator delete(void *p, unsigned __int64 nbytes)
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

