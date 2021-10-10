/*
==============
bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>
==============
*/

void __fastcall bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(bdFixedArray<bdAddr,5> *this, const bdFixedArray<bdAddr,5> *other)
{
  ??0?$bdFixedArray@VbdAddr@@$04@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>
==============
*/

void __fastcall bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(bdFixedArray<bdAddr,5> *this, const bdArray<bdAddr> *other)
{
  ??0?$bdFixedArray@VbdAddr@@$04@@QEAA@AEBV?$bdArray@VbdAddr@@@@@Z(this, other);
}

/*
==============
bdFixedArray<bdAddr,5>::operator[]
==============
*/

const bdAddr *__fastcall bdFixedArray<bdAddr,5>::operator[](bdFixedArray<bdAddr,5> *this, const unsigned int index)
{
  return ??A?$bdFixedArray@VbdAddr@@$04@@QEBAAEBVbdAddr@@I@Z(this, index);
}

/*
==============
bdFixedArray<bdAddr,5>::pushBack
==============
*/

void __fastcall bdFixedArray<bdAddr,5>::pushBack(bdFixedArray<bdAddr,5> *this, const bdAddr *element)
{
  ?pushBack@?$bdFixedArray@VbdAddr@@$04@@QEAAXAEBVbdAddr@@@Z(this, element);
}

/*
==============
bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>
==============
*/
void bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(bdFixedArray<bdAddr,5> *this, const bdFixedArray<bdAddr,5> *other)
{
  bdFixedArray<bdAddr,5> *v4; 
  __int64 v5; 
  unsigned int m_size; 
  unsigned int v7; 
  bool v8; 
  bdFixedArray<bdAddr,5> *v9; 
  signed __int64 v10; 
  __int64 v11; 

  v4 = this;
  v5 = 5i64;
  do
  {
    bdAddr::bdAddr(v4->m_array);
    v4 = (bdFixedArray<bdAddr,5> *)((char *)v4 + 152);
    --v5;
  }
  while ( v5 );
  m_size = other->m_size;
  this->m_size = m_size;
  v7 = other->m_size;
  if ( v7 )
  {
    v8 = m_size <= v7;
    v9 = this;
    if ( v8 )
    {
      if ( m_size )
      {
        v10 = (char *)other - (char *)this;
        v11 = m_size;
        do
        {
          *(__m256i *)&v9->m_array[0].m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)((char *)&v9->m_array[0].m_address.inUn.m_sockaddrStorage.ss_family + v10);
          *((__m256i *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + 1) = *(__m256i *)((char *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + v10 + 32);
          *((__m256i *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + 2) = *(__m256i *)((char *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + v10 + 64);
          *((__m256i *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + 3) = *(__m256i *)((char *)&v9->m_array[0].m_address.inUn.m_ipv6Sockaddr + v10 + 96);
          v9->m_array[0].m_relayRoute = *(bdRelayRoute *)((char *)&v9->m_array[0].m_relayRoute + v10);
          *(double *)&v9->m_array[0].m_type = *(double *)((char *)&v9->m_array[0].m_type + v10);
          v9 = (bdFixedArray<bdAddr,5> *)((char *)v9 + 152);
          --v11;
        }
        while ( v11 );
      }
    }
  }
}

/*
==============
bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>
==============
*/
void bdFixedArray<bdAddr,5>::bdFixedArray<bdAddr,5>(bdFixedArray<bdAddr,5> *this, const bdArray<bdAddr> *other)
{
  bdFixedArray<bdAddr,5> *v4; 
  __int64 v5; 
  unsigned int m_size; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  bdAddr *m_data; 

  v4 = this;
  v5 = 5i64;
  do
  {
    bdAddr::bdAddr(v4->m_array);
    v4 = (bdFixedArray<bdAddr,5> *)((char *)v4 + 152);
    --v5;
  }
  while ( v5 );
  m_size = 5;
  if ( other->m_size < 5 )
    m_size = other->m_size;
  this->m_size = m_size;
  v7 = other->m_size;
  if ( v7 > 5 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdContainers/bdFixedArray", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::bdFixedArray", 0x39u, "Input bdArray<T> size[%u] exceeds bdFixedArray<T, MAX_SIZE[%u]>, copy MAX_SIZE elements", other->m_size, 5);
    m_size = this->m_size;
    v7 = other->m_size;
  }
  if ( v7 && m_size <= v7 && m_size )
  {
    v8 = 0i64;
    v9 = m_size;
    do
    {
      m_data = other->m_data;
      ++v8;
      *(__m256i *)&this->m_array[v8 - 1].m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&other->m_data[v8 - 1].m_address.inUn.m_sockaddrStorage.ss_family;
      *((__m256i *)&this->m_array[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&m_data[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 1);
      *((__m256i *)&this->m_array[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&m_data[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 2);
      *((__m256i *)&this->m_array[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&m_data[v8 - 1].m_address.inUn.m_ipv6Sockaddr + 3);
      this->m_array[v8 - 1].m_relayRoute = m_data[v8 - 1].m_relayRoute;
      *(double *)&this->m_array[v8 - 1].m_type = *(double *)&m_data[v8 - 1].m_type;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
bdFixedArray<bdAddr,5>::operator[]
==============
*/
const bdAddr *bdFixedArray<bdAddr,5>::operator[](bdFixedArray<bdAddr,5> *this, const unsigned int index)
{
  __int64 v3; 

  v3 = index;
  bdHandleAssert(index < this->m_size, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x4Du, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed");
  return (const bdAddr *)((char *)this + 152 * v3);
}

/*
==============
bdFixedArray<bdAddr,5>::pushBack
==============
*/
void bdFixedArray<bdAddr,5>::pushBack(bdFixedArray<bdAddr,5> *this, const bdAddr *element)
{
  __int64 m_size; 
  __int64 v5; 

  bdHandleAssert(this->m_size < 5, "(m_size < MAX_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::pushBack", 0xBEu, "Cannot add, too many elements");
  m_size = this->m_size;
  if ( (unsigned int)m_size < 5 )
  {
    v5 = m_size;
    *(__m256i *)&this->m_array[v5].m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&element->m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&this->m_array[v5].m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&element->m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&this->m_array[v5].m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&element->m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&this->m_array[v5].m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&element->m_address.inUn.m_ipv6Sockaddr + 3);
    this->m_array[v5].m_relayRoute = element->m_relayRoute;
    *(double *)&this->m_array[v5].m_type = *(double *)&element->m_type;
    ++this->m_size;
  }
}

