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
  void (__fastcall **m_data)(); 
  unsigned int v8; 
  unsigned int m_size; 
  _BOOL8 result; 
  FILE *v11; 

  m_cleaningUp = this->m_cleaningUp;
  v4 = !m_cleaningUp;
  if ( m_cleaningUp )
  {
    v11 = __acrt_iob_func(2u);
    bdFprintf(v11, "Error: %s (%u)\nbdSingletonRegistryImpl::add(), cannot register bdSingletons while in bdSingletonRegistryImpl::cleanUp.\n", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdsingleton.h", 124i64);
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
      m_data = NULL;
      v8 = m_capacity + v6;
      if ( m_capacity + v6 )
      {
        m_data = (void (__fastcall **)())bdMemory::allocate(8i64 * v8);
        m_size = this->m_destroyFunctions.m_size;
        if ( m_size )
          memcpy_0(m_data, this->m_destroyFunctions.m_data, 8i64 * m_size);
      }
      bdMemory::deallocate(this->m_destroyFunctions.m_data);
      this->m_destroyFunctions.m_capacity = v8;
      this->m_destroyFunctions.m_data = m_data;
    }
    else
    {
      m_data = this->m_destroyFunctions.m_data;
    }
    result = v4;
    m_data[this->m_destroyFunctions.m_size++] = destroyFunction;
  }
  return result;
}

