/*
==============
bdReceivedMessage::getMessage
==============
*/

bdReference<bdMessage> *__fastcall bdReceivedMessage::getMessage(bdReceivedMessage *this, bdReference<bdMessage> *result)
{
  return ?getMessage@bdReceivedMessage@@QEBA?AV?$bdReference@VbdMessage@@@@XZ(this, result);
}

/*
==============
bdReceivedMessage::bdReceivedMessage
==============
*/

void __fastcall bdReceivedMessage::bdReceivedMessage(bdReceivedMessage *this, const bdReference<bdMessage> message, const bdReference<bdConnection> connection)
{
  ??0bdReceivedMessage@@QEAA@V?$bdReference@VbdMessage@@@@V?$bdReference@VbdConnection@@@@@Z(this, message, connection);
}

/*
==============
bdReceivedMessage::~bdReceivedMessage
==============
*/

void __fastcall bdReceivedMessage::~bdReceivedMessage(bdReceivedMessage *this)
{
  ??1bdReceivedMessage@@QEAA@XZ(this);
}

/*
==============
bdReceivedMessage::getConnection
==============
*/

bdReference<bdConnection> *__fastcall bdReceivedMessage::getConnection(bdReceivedMessage *this, bdReference<bdConnection> *result)
{
  return ?getConnection@bdReceivedMessage@@QEBA?AV?$bdReference@VbdConnection@@@@XZ(this, result);
}

/*
==============
bdReceivedMessage::bdReceivedMessage
==============
*/
void bdReceivedMessage::bdReceivedMessage(bdReceivedMessage *this, const bdReference<bdMessage> message, const bdReference<bdConnection> connection)
{
  bdMessage_vtbl *v5; 
  bdConnection_vtbl *v7; 

  v5 = message.m_ptr->__vftable;
  this->m_message.m_ptr = (bdMessage *)message.m_ptr->__vftable;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5[1], 1u);
  v7 = connection.m_ptr->__vftable;
  this->m_connection.m_ptr = (bdConnection *)connection.m_ptr->__vftable;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->receive, 1u);
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdMessage_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
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
bdReceivedMessage::~bdReceivedMessage
==============
*/
void bdReceivedMessage::~bdReceivedMessage(bdReceivedMessage *this)
{
  bdConnection *m_ptr; 
  bdConnection *v3; 

  m_ptr = this->m_connection.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_connection.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdConnection *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_connection.m_ptr = NULL;
  }
  if ( this->m_message.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_message.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( this->m_message.m_ptr )
      ((void (__fastcall *)(bdMessage *, __int64))this->m_message.m_ptr->~bdReferencable)(this->m_message.m_ptr, 1i64);
    this->m_message.m_ptr = NULL;
  }
}

/*
==============
bdReceivedMessage::getConnection
==============
*/
bdReference<bdConnection> *bdReceivedMessage::getConnection(bdReceivedMessage *this, bdReference<bdConnection> *result)
{
  bdConnection *m_ptr; 

  m_ptr = this->m_connection.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdReceivedMessage::getMessage
==============
*/
bdReference<bdMessage> *bdReceivedMessage::getMessage(bdReceivedMessage *this, bdReference<bdMessage> *result)
{
  bdMessage *m_ptr; 

  m_ptr = this->m_message.m_ptr;
  result->m_ptr = (bdMessage *)this->m_message;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

