/*
==============
reference_cast<bdCookieEchoChunk,bdChunk>
==============
*/

bdCookieEchoChunk *__fastcall reference_cast<bdCookieEchoChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  return ??$reference_cast@VbdCookieEchoChunk@@VbdChunk@@@@YAPEAVbdCookieEchoChunk@@V?$bdReference@VbdChunk@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdSAckChunk,bdChunk>
==============
*/

bdSAckChunk *__fastcall reference_cast<bdSAckChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  return ??$reference_cast@VbdSAckChunk@@VbdChunk@@@@YAPEAVbdSAckChunk@@V?$bdReference@VbdChunk@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdInitAckChunk,bdChunk>
==============
*/

bdInitAckChunk *__fastcall reference_cast<bdInitAckChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  return ??$reference_cast@VbdInitAckChunk@@VbdChunk@@@@YAPEAVbdInitAckChunk@@V?$bdReference@VbdChunk@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdInitChunk,bdChunk>
==============
*/

bdInitChunk *__fastcall reference_cast<bdInitChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  return ??$reference_cast@VbdInitChunk@@VbdChunk@@@@YAPEAVbdInitChunk@@V?$bdReference@VbdChunk@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdLoopbackConnection,bdConnection>
==============
*/

bdLoopbackConnection *__fastcall reference_cast<bdLoopbackConnection,bdConnection>(bdReference<bdConnection> referenceClass)
{
  return ??$reference_cast@VbdLoopbackConnection@@VbdConnection@@@@YAPEAVbdLoopbackConnection@@V?$bdReference@VbdConnection@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdDataChunk,bdChunk>
==============
*/

bdDataChunk *__fastcall reference_cast<bdDataChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  return ??$reference_cast@VbdDataChunk@@VbdChunk@@@@YAPEAVbdDataChunk@@V?$bdReference@VbdChunk@@@@@Z(referenceClass);
}

/*
==============
reference_cast<bdLoopbackConnection,bdConnection>
==============
*/
bdConnection_vtbl *reference_cast<bdLoopbackConnection,bdConnection>(bdReference<bdConnection> referenceClass)
{
  bdConnection_vtbl *v1; 
  bdConnection_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->receive, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdConnection_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

/*
==============
reference_cast<bdCookieEchoChunk,bdChunk>
==============
*/
bdChunk_vtbl *reference_cast<bdCookieEchoChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  bdChunk_vtbl *v1; 
  bdChunk_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->getType, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdChunk_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

/*
==============
reference_cast<bdDataChunk,bdChunk>
==============
*/
bdChunk_vtbl *reference_cast<bdDataChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  bdChunk_vtbl *v1; 
  bdChunk_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->getType, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdChunk_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

/*
==============
reference_cast<bdInitAckChunk,bdChunk>
==============
*/
bdChunk_vtbl *reference_cast<bdInitAckChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  bdChunk_vtbl *v1; 
  bdChunk_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->getType, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdChunk_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

/*
==============
reference_cast<bdInitChunk,bdChunk>
==============
*/
bdChunk_vtbl *reference_cast<bdInitChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  bdChunk_vtbl *v1; 
  bdChunk_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->getType, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdChunk_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

/*
==============
reference_cast<bdSAckChunk,bdChunk>
==============
*/
bdChunk_vtbl *reference_cast<bdSAckChunk,bdChunk>(bdReference<bdChunk> referenceClass)
{
  bdChunk_vtbl *v1; 
  bdChunk_vtbl *v3; 

  v1 = referenceClass.m_ptr->__vftable;
  if ( referenceClass.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&v1->getType, 0xFFFFFFFF) == 1 )
  {
    v3 = referenceClass.m_ptr->__vftable;
    if ( v3 )
      (*(void (__fastcall **)(bdChunk_vtbl *))v3->~bdReferencable)(v3);
    referenceClass.m_ptr->__vftable = NULL;
  }
  return v1;
}

