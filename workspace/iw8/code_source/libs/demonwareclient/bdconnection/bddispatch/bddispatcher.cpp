/*
==============
bdDispatcher::bdDispatcher
==============
*/

void __fastcall bdDispatcher::bdDispatcher(bdDispatcher *this)
{
  ??0bdDispatcher@@QEAA@XZ(this);
}

/*
==============
bdDispatcher::process
==============
*/

void __fastcall bdDispatcher::process(bdDispatcher *this, bdReference<bdConnection> connection)
{
  ?process@bdDispatcher@@QEAAXV?$bdReference@VbdConnection@@@@@Z(this, connection);
}

/*
==============
bdDispatcher::reset
==============
*/

void __fastcall bdDispatcher::reset(bdDispatcher *this)
{
  ?reset@bdDispatcher@@QEAAXXZ(this);
}

/*
==============
bdDispatcher::unregisterInterceptor
==============
*/

void __fastcall bdDispatcher::unregisterInterceptor(bdDispatcher *this, bdDispatchInterceptor *const interceptor)
{
  ?unregisterInterceptor@bdDispatcher@@QEAAXQEAVbdDispatchInterceptor@@@Z(this, interceptor);
}

/*
==============
bdDispatcher::registerInterceptor
==============
*/

void __fastcall bdDispatcher::registerInterceptor(bdDispatcher *this, bdDispatchInterceptor *const interceptor)
{
  ?registerInterceptor@bdDispatcher@@QEAAXQEAVbdDispatchInterceptor@@@Z(this, interceptor);
}

/*
==============
bdDispatcher::bdDispatcher
==============
*/
void bdDispatcher::bdDispatcher(bdDispatcher *this)
{
  this->m_interceptors.m_data = NULL;
  *(_QWORD *)&this->m_interceptors.m_capacity = 0i64;
}

/*
==============
bdDispatcher::process
==============
*/
void bdDispatcher::process(bdDispatcher *this, bdReference<bdConnection> connection)
{
  bdConnection *v4; 
  __int64 v5; 
  bool v6; 
  bdConnection *v7; 
  __int64 v8; 
  bool v9; 
  bdReference<bdMessage> message; 
  bdReference<bdConnection> v11; 
  bdReference<bdMessage> v12; 
  __int64 v13; 
  bdReceivedMessage v14; 
  bdReceivedMessage v15; 
  bdMessage *v16; 
  bdReference<bdConnection> connectiona; 

  v13 = -2i64;
  v16 = NULL;
  while ( (*((unsigned __int8 (__fastcall **)(bdConnection_vtbl *, bdMessage **))connection.m_ptr->~bdReferencable + 3))(connection.m_ptr->__vftable, &v16) )
  {
    v4 = (bdConnection *)connection.m_ptr->__vftable;
    connectiona.m_ptr = v4;
    if ( v4 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
    message.m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    bdReceivedMessage::bdReceivedMessage(&v14, (const bdReference<bdMessage>)&message, (const bdReference<bdConnection>)&connectiona);
    v5 = 0i64;
    do
    {
      if ( (unsigned int)v5 >= this->m_interceptors.m_size )
        break;
      bdHandleAssert(1, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdDispatchInterceptor *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed", message.m_ptr);
      v6 = this->m_interceptors.m_data[v5]->accept(this->m_interceptors.m_data[v5], &v14);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( !v6 );
    bdReceivedMessage::~bdReceivedMessage(&v14);
  }
  while ( (*((unsigned __int8 (__fastcall **)(bdConnection_vtbl *, bdMessage **))connection.m_ptr->~bdReferencable + 4))(connection.m_ptr->__vftable, &v16) )
  {
    v7 = (bdConnection *)connection.m_ptr->__vftable;
    v11.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    v12.m_ptr = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 1u);
    bdReceivedMessage::bdReceivedMessage(&v15, (const bdReference<bdMessage>)&v12, (const bdReference<bdConnection>)&v11);
    v8 = 0i64;
    do
    {
      if ( (unsigned int)v8 >= this->m_interceptors.m_size )
        break;
      bdHandleAssert(1, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdDispatchInterceptor *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v9 = this->m_interceptors.m_data[v8]->acceptOutOfOrder(this->m_interceptors.m_data[v8], &v15);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( !v9 );
    bdReceivedMessage::~bdReceivedMessage(&v15);
  }
  if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)&v16->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( v16 )
      ((void (__fastcall *)(bdMessage *, __int64))v16->~bdReferencable)(v16, 1i64);
    v16 = NULL;
  }
  if ( connection.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&connection.m_ptr->receive, 0xFFFFFFFF) == 1 )
  {
    if ( connection.m_ptr->__vftable )
      (*(void (__fastcall **)(bdConnection_vtbl *, __int64))connection.m_ptr->~bdReferencable)(connection.m_ptr->__vftable, 1i64);
    connection.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdDispatcher::registerInterceptor
==============
*/
void bdDispatcher::registerInterceptor(bdDispatcher *this, bdDispatchInterceptor *const interceptor)
{
  bdDispatchInterceptor **m_data; 
  unsigned int m_size; 
  int v5; 
  unsigned int m_capacity; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  m_data = NULL;
  m_size = this->m_interceptors.m_size;
  v5 = 0;
  if ( m_size )
  {
    while ( interceptor != this->m_interceptors.m_data[v5] )
    {
      if ( ++v5 >= m_size )
        goto LABEL_6;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "dispatcher", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bddispatch\\bddispatcher.cpp", "bdDispatcher::registerInterceptor", 0x3Bu, "Same listener registered multiple times.");
  }
LABEL_6:
  m_capacity = this->m_interceptors.m_capacity;
  if ( this->m_interceptors.m_size == m_capacity )
  {
    v7 = this->m_interceptors.m_capacity;
    if ( !m_capacity )
      v7 = 1;
    v8 = m_capacity + v7;
    if ( m_capacity + v7 )
    {
      m_data = (bdDispatchInterceptor **)bdMemory::allocate(8i64 * v8);
      v9 = this->m_interceptors.m_size;
      if ( v9 )
        memcpy_0(m_data, this->m_interceptors.m_data, 8i64 * v9);
    }
    bdMemory::deallocate(this->m_interceptors.m_data);
    this->m_interceptors.m_data = m_data;
    this->m_interceptors.m_capacity = v8;
  }
  else
  {
    m_data = this->m_interceptors.m_data;
  }
  m_data[this->m_interceptors.m_size++] = interceptor;
}

/*
==============
bdDispatcher::reset
==============
*/
void bdDispatcher::reset(bdDispatcher *this)
{
  bdMemory::deallocate(this->m_interceptors.m_data);
  this->m_interceptors.m_data = NULL;
  *(_QWORD *)&this->m_interceptors.m_capacity = 0i64;
}

/*
==============
bdDispatcher::unregisterInterceptor
==============
*/
void bdDispatcher::unregisterInterceptor(bdDispatcher *this, bdDispatchInterceptor *const interceptor)
{
  int v4; 
  unsigned int m_size; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int i; 
  unsigned int m_capacity; 
  unsigned int v10; 
  unsigned int v11; 
  bdDispatchInterceptor **v12; 
  unsigned int v13; 

  v4 = 0;
  m_size = this->m_interceptors.m_size;
  v6 = 1;
  if ( m_size )
  {
    while ( interceptor != this->m_interceptors.m_data[v4] )
    {
      if ( ++v4 >= m_size )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    bdLogMessage(BD_LOG_WARNING, "warn/", "dispatcher", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bddispatch\\bddispatcher.cpp", "bdDispatcher::unregisterInterceptor", 0x48u, "Attempt to unregister unknown listener.");
  }
  v7 = this->m_interceptors.m_size;
  for ( i = 0; i < v7; ++v6 )
  {
    if ( interceptor == this->m_interceptors.m_data[i] )
    {
      if ( i < v7 && v6 <= v7 && i < v6 )
      {
        memmove_0(&this->m_interceptors.m_data[i], &this->m_interceptors.m_data[v6], 8i64 * (v7 - v6));
        m_capacity = this->m_interceptors.m_capacity;
        v10 = i + this->m_interceptors.m_size - v6;
        this->m_interceptors.m_size = v10;
        if ( m_capacity > 4 * v10 )
        {
          v11 = m_capacity - v10;
          if ( m_capacity != v10 )
            v11 = 0;
          if ( v11 <= m_capacity >> 1 )
            v11 = m_capacity >> 1;
          v12 = NULL;
          v13 = m_capacity - v11;
          this->m_interceptors.m_capacity = v13;
          if ( v13 )
            v12 = (bdDispatchInterceptor **)bdMemory::reallocate(this->m_interceptors.m_data, 8i64 * v13);
          this->m_interceptors.m_data = v12;
        }
      }
      --i;
      --v6;
    }
    v7 = this->m_interceptors.m_size;
    ++i;
  }
}

