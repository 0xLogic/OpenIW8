/*
==============
bdSingletonRegistryImpl::operator delete
==============
*/

void __fastcall bdSingletonRegistryImpl::operator delete(void *p)
{
  ??3bdSingletonRegistryImpl@@SAXPEAX@Z(p);
}

/*
==============
bdSingletonRegistryImpl::~bdSingletonRegistryImpl
==============
*/

void __fastcall bdSingletonRegistryImpl::~bdSingletonRegistryImpl(bdSingletonRegistryImpl *this)
{
  ??1bdSingletonRegistryImpl@@MEAA@XZ(this);
}

/*
==============
bdSingletonRegistryImpl::add
==============
*/

bool __fastcall bdSingletonRegistryImpl::add(bdSingletonRegistryImpl *this, void (__fastcall *const destroyFunction)())
{
  return ?add@bdSingletonRegistryImpl@@QEAA_NQ6AXXZ@Z(this, destroyFunction);
}

/*
==============
bdSingletonRegistryImpl::~bdSingletonRegistryImpl
==============
*/
void bdSingletonRegistryImpl::~bdSingletonRegistryImpl(bdSingletonRegistryImpl *this)
{
  this->__vftable = (bdSingletonRegistryImpl_vtbl *)&bdSingletonRegistryImpl::`vftable';
  bdMemory::deallocate(this->m_destroyFunctions.m_data);
  this->m_destroyFunctions.m_data = NULL;
  *(_QWORD *)&this->m_destroyFunctions.m_capacity = 0i64;
}

/*
==============
bdSingletonRegistryImpl::operator delete
==============
*/
void bdSingletonRegistryImpl::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdSingletonRegistryImpl::add
==============
*/
_BOOL8 bdSingletonRegistryImpl::add(bdSingletonRegistryImpl *this, void (*const destroyFunction)())
{
  bool m_cleaningUp; 
  bool v4; 
  unsigned int m_capacity; 
  int v6; 
  unsigned int v8; 
  unsigned int m_size; 
  _BOOL8 result; 
  FILE *v13; 
  void (__fastcall *v14)(); 

  v14 = destroyFunction;
  m_cleaningUp = this->m_cleaningUp;
  v4 = !m_cleaningUp;
  if ( m_cleaningUp )
  {
    v13 = __acrt_iob_func(2u);
    bdFprintf(v13, "Error: %s (%u)\nbdSingletonRegistryImpl::add(), cannot register bdSingletons while in bdSingletonRegistryImpl::cleanUp.\n", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsingleton.h", 124i64);
    return v4;
  }
  else
  {
    m_capacity = this->m_destroyFunctions.m_capacity;
    if ( this->m_destroyFunctions.m_size == m_capacity )
    {
      v6 = m_capacity;
      if ( !m_capacity )
        v6 = 1;
      _RDI = NULL;
      v8 = m_capacity + v6;
      if ( m_capacity + v6 )
      {
        _RDI = (void (__fastcall **)())bdMemory::allocate(8i64 * v8);
        m_size = this->m_destroyFunctions.m_size;
        if ( m_size )
          memcpy_0(_RDI, this->m_destroyFunctions.m_data, 8i64 * m_size);
      }
      bdMemory::deallocate(this->m_destroyFunctions.m_data);
      this->m_destroyFunctions.m_capacity = v8;
      this->m_destroyFunctions.m_data = _RDI;
    }
    else
    {
      _RDI = this->m_destroyFunctions.m_data;
    }
    _RCX = this->m_destroyFunctions.m_size;
    result = v4;
    __asm
    {
      vmovsd  xmm0, [rsp+28h+arg_8]
      vmovsd  qword ptr [rdi+rcx*8], xmm0
    }
    ++this->m_destroyFunctions.m_size;
  }
  return result;
}

