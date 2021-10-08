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
    _RAX = this;
    if ( v8 )
    {
      if ( m_size )
      {
        _RBP = (char *)other - (char *)this;
        v11 = m_size;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax+rbp]
            vmovups ymmword ptr [rax], ymm0
            vmovups ymm1, ymmword ptr [rax+rbp+20h]
            vmovups ymmword ptr [rax+20h], ymm1
            vmovups ymm0, ymmword ptr [rax+rbp+40h]
            vmovups ymmword ptr [rax+40h], ymm0
            vmovups ymm1, ymmword ptr [rax+rbp+60h]
            vmovups ymmword ptr [rax+60h], ymm1
            vmovups xmm0, xmmword ptr [rax+rbp+80h]
            vmovups xmmword ptr [rax+80h], xmm0
            vmovsd  xmm1, qword ptr [rax+rbp+90h]
            vmovsd  qword ptr [rax+90h], xmm1
          }
          _RAX = (bdFixedArray<bdAddr,5> *)((char *)_RAX + 152);
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
  __int64 v9; 

  _RSI = this;
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
  _RSI->m_size = m_size;
  v7 = other->m_size;
  if ( v7 > 5 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdContainers/bdFixedArray", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::bdFixedArray", 0x39u, "Input bdArray<T> size[%u] exceeds bdFixedArray<T, MAX_SIZE[%u]>, copy MAX_SIZE elements", other->m_size, 5);
    m_size = _RSI->m_size;
    v7 = other->m_size;
  }
  if ( v7 && m_size <= v7 && m_size )
  {
    _RCX = 0i64;
    v9 = m_size;
    do
    {
      _RAX = other->m_data;
      _RCX += 152i64;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+rax-98h]
        vmovups ymmword ptr [rcx+rsi-98h], ymm0
        vmovups ymm1, ymmword ptr [rcx+rax-78h]
        vmovups ymmword ptr [rcx+rsi-78h], ymm1
        vmovups ymm0, ymmword ptr [rcx+rax-58h]
        vmovups ymmword ptr [rcx+rsi-58h], ymm0
        vmovups ymm1, ymmword ptr [rcx+rax-38h]
        vmovups ymmword ptr [rcx+rsi-38h], ymm1
        vmovups xmm0, xmmword ptr [rcx+rax-18h]
        vmovups xmmword ptr [rcx+rsi-18h], xmm0
        vmovsd  xmm1, qword ptr [rcx+rax-8]
        vmovsd  qword ptr [rcx+rsi-8], xmm1
      }
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

  _RDI = this;
  _RBX = element;
  bdHandleAssert(this->m_size < 5, "(m_size < MAX_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::pushBack", 0xBEu, "Cannot add, too many elements");
  m_size = _RDI->m_size;
  if ( (unsigned int)m_size < 5 )
  {
    __asm { vmovups ymm0, ymmword ptr [rbx] }
    _RCX = 152 * m_size;
    __asm
    {
      vmovups ymmword ptr [rcx+rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rcx+rdi+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rcx+rdi+40h], ymm0
      vmovups ymm1, ymmword ptr [rbx+60h]
      vmovups ymmword ptr [rcx+rdi+60h], ymm1
      vmovups xmm0, xmmword ptr [rbx+80h]
      vmovups xmmword ptr [rcx+rdi+80h], xmm0
      vmovsd  xmm1, qword ptr [rbx+90h]
      vmovsd  qword ptr [rcx+rdi+90h], xmm1
    }
    ++_RDI->m_size;
  }
}

