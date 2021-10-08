/*
==============
bdMarketplaceBalanceUpdatePushMessage::deserialize
==============
*/

bool __fastcall bdMarketplaceBalanceUpdatePushMessage::deserialize(bdMarketplaceBalanceUpdatePushMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdMarketplaceBalanceUpdatePushMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::~bdMarketplaceBalanceUpdatePushMessage
==============
*/

void __fastcall bdMarketplaceBalanceUpdatePushMessage::~bdMarketplaceBalanceUpdatePushMessage(bdMarketplaceBalanceUpdatePushMessage *this)
{
  ??1bdMarketplaceBalanceUpdatePushMessage@@UEAA@XZ(this);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::bdMarketplaceBalanceUpdatePushMessage
==============
*/

void __fastcall bdMarketplaceBalanceUpdatePushMessage::bdMarketplaceBalanceUpdatePushMessage(bdMarketplaceBalanceUpdatePushMessage *this)
{
  ??0bdMarketplaceBalanceUpdatePushMessage@@QEAA@XZ(this);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::getNumBalances
==============
*/

unsigned int __fastcall bdMarketplaceBalanceUpdatePushMessage::getNumBalances(bdMarketplaceBalanceUpdatePushMessage *this)
{
  return ?getNumBalances@bdMarketplaceBalanceUpdatePushMessage@@QEBAIXZ(this);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::reset
==============
*/

void __fastcall bdMarketplaceBalanceUpdatePushMessage::reset(bdMarketplaceBalanceUpdatePushMessage *this)
{
  ?reset@bdMarketplaceBalanceUpdatePushMessage@@QEAAXXZ(this);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::getPlayerBalance
==============
*/

bdMarketplacePlayerCurrencyV2 *__fastcall bdMarketplaceBalanceUpdatePushMessage::getPlayerBalance(bdMarketplaceBalanceUpdatePushMessage *this, bdMarketplacePlayerCurrencyV2 *result, unsigned int index)
{
  return ?getPlayerBalance@bdMarketplaceBalanceUpdatePushMessage@@QEBA?AVbdMarketplacePlayerCurrencyV2@@I@Z(this, result, index);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::bdMarketplaceBalanceUpdatePushMessage
==============
*/
void bdMarketplaceBalanceUpdatePushMessage::bdMarketplaceBalanceUpdatePushMessage(bdMarketplaceBalanceUpdatePushMessage *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdMarketplaceBalanceUpdatePushMessage::`vbtable';
    *(_QWORD *)this->gap378 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap378[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdMarketplaceBalanceUpdatePushMessage_vtbl *)&bdMarketplaceBalanceUpdatePushMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceBalanceUpdatePushMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdMarketplaceBalanceUpdatePushMessage_vtbl *)&bdMarketplaceBalanceUpdatePushMessage::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x90ui64, 6ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrencyV2::bdMarketplacePlayerCurrencyV2, (void (__fastcall *)(void *))bdMarketplacePlayerCurrencyV2::`vbase destructor);
  *(_DWORD *)&this->m_balances[848] = 0;
  *(_DWORD *)&this->m_balances[848] = 0;
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::~bdMarketplaceBalanceUpdatePushMessage
==============
*/
void bdMarketplaceBalanceUpdatePushMessage::~bdMarketplaceBalanceUpdatePushMessage(bdMarketplaceBalanceUpdatePushMessage *this)
{
  bdStructBufferSerializable *v1; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdMarketplaceBalanceUpdatePushMessage::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 880) = &bdMarketplaceBalanceUpdatePushMessage::`vftable'{for `bdReferencable'};
  v1 = (bdMarketplaceBalanceUpdatePushMessage *)((char *)this - 872);
  `eh vector destructor iterator'(this[-1].m_balances, 0x90ui64, 6ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrencyV2::`vbase destructor);
  bdStructBufferSerializable::~bdStructBufferSerializable(v1);
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::deserialize
==============
*/
bool bdMarketplaceBalanceUpdatePushMessage::deserialize(bdMarketplaceBalanceUpdatePushMessage *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdMarketplacePlayerCurrencyV2,6>(deserializer, 1u, (bdStructFixedSizeArray<bdMarketplacePlayerCurrencyV2,6> *)(&this->__vftable + 2));
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::getNumBalances
==============
*/
__int64 bdMarketplaceBalanceUpdatePushMessage::getNumBalances(bdMarketplaceBalanceUpdatePushMessage *this)
{
  return *(unsigned int *)&this->m_balances[848];
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::getPlayerBalance
==============
*/
bdMarketplacePlayerCurrencyV2 *bdMarketplaceBalanceUpdatePushMessage::getPlayerBalance(bdMarketplaceBalanceUpdatePushMessage *this, bdMarketplacePlayerCurrencyV2 *result, unsigned int index)
{
  __int64 v3; 
  bdMarketplaceBalanceUpdatePushMessage *v5; 
  char *v6; 
  int v8; 

  v3 = index;
  v5 = this;
  v8 = 0;
  bdHandleAssert(index < *(_DWORD *)&this->m_balances[848], "index < m_balances.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdbalanceupdatepushmessage.cpp", "bdMarketplaceBalanceUpdatePushMessage::getPlayerBalance", 0x27u, "getPlayerBalance out of range", v8, -2i64);
  v5 = (bdMarketplaceBalanceUpdatePushMessage *)((char *)v5 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v5->m_balances[832], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplacePlayerCurrencyV2,6>::operator []", 0x54u, "i is out of range");
  v6 = (char *)v5 + 144 * v3;
  *((_QWORD *)&result->__vftable + 1) = &bdMarketplacePlayerCurrencyV2::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)result->gap80, (const bdReferencable *)&v6[*(int *)(*((_QWORD *)v6 + 1) + 4i64) + 8]);
  bdStructBufferSerializable::bdStructBufferSerializable(result, (const bdStructBufferSerializable *)v6);
  result->__vftable = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplacePlayerCurrencyV2_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdMarketplacePlayerCurrencyV2_vtbl *)&bdMarketplacePlayerCurrencyV2::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&result->__vftable + 2), (const bdStructUserAccountID *)(v6 + 16));
  result->m_currencyId = v6[104];
  result->m_value = *((_DWORD *)v6 + 27);
  result->m_collisionField = *((_WORD *)v6 + 56);
  result->m_signedBalance = *((_QWORD *)v6 + 15);
  return result;
}

/*
==============
bdMarketplaceBalanceUpdatePushMessage::reset
==============
*/
void bdMarketplaceBalanceUpdatePushMessage::reset(bdMarketplaceBalanceUpdatePushMessage *this)
{
  *(_DWORD *)&this->m_balances[848] = 0;
}

