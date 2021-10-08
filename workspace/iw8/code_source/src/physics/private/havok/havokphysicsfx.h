/*
==============
HavokPhysicsFX_Pipeline::operator delete
==============
*/

void __fastcall HavokPhysicsFX_Pipeline::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3HavokPhysicsFX_Pipeline@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
HavokPhysicsFX_BasicIntegratorTask::getName
==============
*/

const char *__fastcall HavokPhysicsFX_BasicIntegratorTask::getName(HavokPhysicsFX_BasicIntegratorTask *this)
{
  return ?getName@HavokPhysicsFX_BasicIntegratorTask@@EEBAPEBDXZ(this);
}

/*
==============
HavokPhysicsFX_LinAngDampingIntegratorTask::getName
==============
*/

const char *__fastcall HavokPhysicsFX_LinAngDampingIntegratorTask::getName(HavokPhysicsFX_LinAngDampingIntegratorTask *this)
{
  return ?getName@HavokPhysicsFX_LinAngDampingIntegratorTask@@EEBAPEBDXZ(this);
}

/*
==============
HavokPhysicsFX_Pipeline::operator delete
==============
*/
void HavokPhysicsFX_Pipeline::operator delete(void *p, unsigned __int64 nbytes)
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

/*
==============
HavokPhysicsFX_BasicIntegratorTask::getName
==============
*/
const char *HavokPhysicsFX_BasicIntegratorTask::getName(HavokPhysicsFX_BasicIntegratorTask *this)
{
  return "HavokPhysicsFX_BasicIntegratorTask";
}

/*
==============
HavokPhysicsFX_LinAngDampingIntegratorTask::getName
==============
*/
const char *HavokPhysicsFX_LinAngDampingIntegratorTask::getName(HavokPhysicsFX_LinAngDampingIntegratorTask *this)
{
  return "HavokPhysicsFX_LinAngDampingIntegratorTask";
}

