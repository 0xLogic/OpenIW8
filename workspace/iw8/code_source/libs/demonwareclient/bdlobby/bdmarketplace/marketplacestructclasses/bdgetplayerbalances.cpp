/*
==============
bdGetPlayerBalancesResponse::getNumBalances
==============
*/

unsigned int __fastcall bdGetPlayerBalancesResponse::getNumBalances(bdGetPlayerBalancesResponse *this)
{
  return ?getNumBalances@bdGetPlayerBalancesResponse@@QEBAIXZ(this);
}

/*
==============
bdGetPlayerBalancesRequest::setContext
==============
*/

void __fastcall bdGetPlayerBalancesRequest::setContext(bdGetPlayerBalancesRequest *this, const char *context)
{
  ?setContext@bdGetPlayerBalancesRequest@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdGetPlayerBalancesRequest::getMaxNumResults
==============
*/

unsigned int __fastcall bdGetPlayerBalancesRequest::getMaxNumResults(bdGetPlayerBalancesRequest *this)
{
  return ?getMaxNumResults@bdGetPlayerBalancesRequest@@QEAAIXZ(this);
}

/*
==============
bdGetPlayerBalancesResponse::reset
==============
*/

void __fastcall bdGetPlayerBalancesResponse::reset(bdGetPlayerBalancesResponse *this)
{
  ?reset@bdGetPlayerBalancesResponse@@QEAAXXZ(this);
}

/*
==============
bdGetPlayerBalancesRequest::reset
==============
*/

void __fastcall bdGetPlayerBalancesRequest::reset(bdGetPlayerBalancesRequest *this)
{
  ?reset@bdGetPlayerBalancesRequest@@QEAAXXZ(this);
}

/*
==============
bdGetPlayerBalancesResponse::getBalance
==============
*/

bdMarketplaceCurrencyAmount *__fastcall bdGetPlayerBalancesResponse::getBalance(bdGetPlayerBalancesResponse *this, bdMarketplaceCurrencyAmount *result, unsigned int index)
{
  return ?getBalance@bdGetPlayerBalancesResponse@@QEBA?AVbdMarketplaceCurrencyAmount@@I@Z(this, result, index);
}

/*
==============
bdGetPlayerBalancesRequest::serialize
==============
*/

bool __fastcall bdGetPlayerBalancesRequest::serialize(bdGetPlayerBalancesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetPlayerBalancesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetPlayerBalancesRequest::bdGetPlayerBalancesRequest
==============
*/

void __fastcall bdGetPlayerBalancesRequest::bdGetPlayerBalancesRequest(bdGetPlayerBalancesRequest *this)
{
  ??0bdGetPlayerBalancesRequest@@QEAA@XZ(this);
}

/*
==============
bdGetPlayerBalancesResponse::deserialize
==============
*/

bool __fastcall bdGetPlayerBalancesResponse::deserialize(bdGetPlayerBalancesResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetPlayerBalancesResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetPlayerBalancesRequest::setMaxNumResults
==============
*/

void __fastcall bdGetPlayerBalancesRequest::setMaxNumResults(bdGetPlayerBalancesRequest *this, unsigned int maxNumResults)
{
  ?setMaxNumResults@bdGetPlayerBalancesRequest@@QEAAXI@Z(this, maxNumResults);
}

/*
==============
bdGetPlayerBalancesResponse::bdGetPlayerBalancesResponse
==============
*/

void __fastcall bdGetPlayerBalancesResponse::bdGetPlayerBalancesResponse(bdGetPlayerBalancesResponse *this)
{
  ??0bdGetPlayerBalancesResponse@@QEAA@XZ(this);
}

/*
==============
bdGetPlayerBalancesRequest::bdGetPlayerBalancesRequest
==============
*/
void bdGetPlayerBalancesRequest::bdGetPlayerBalancesRequest(bdGetPlayerBalancesRequest *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetPlayerBalancesRequest::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetPlayerBalancesRequest_vtbl *)&bdGetPlayerBalancesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetPlayerBalancesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetPlayerBalancesRequest_vtbl *)&bdGetPlayerBalancesRequest::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetPlayerBalancesRequest *)-16i64 )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), (const char *const)&queryFormat.fmt + 3);
  this->m_maxNumResults = 16;
}

/*
==============
bdGetPlayerBalancesResponse::bdGetPlayerBalancesResponse
==============
*/
void bdGetPlayerBalancesResponse::bdGetPlayerBalancesResponse(bdGetPlayerBalancesResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetPlayerBalancesResponse::`vbtable';
    *(_QWORD *)this->gap398 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap398[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetPlayerBalancesResponse_vtbl *)&bdGetPlayerBalancesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetPlayerBalancesResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetPlayerBalancesResponse_vtbl *)&bdGetPlayerBalancesResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x38ui64, 0x10ui64, (void (__fastcall *)(void *))bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount, (void (__fastcall *)(void *))bdMarketplaceCurrencyAmount::`vbase destructor);
  *(_DWORD *)&this->m_balances[880] = 0;
  *(_DWORD *)&this->m_balances[880] = 0;
}

/*
==============
bdGetPlayerBalancesResponse::deserialize
==============
*/
__int64 bdGetPlayerBalancesResponse::deserialize(bdGetPlayerBalancesResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdGetPlayerBalancesResponse_vtbl **v3; 
  unsigned __int8 v4; 
  char v5; 
  __int64 v7; 
  bdGetPlayerBalancesResponse_vtbl **v8; 
  __int64 v9; 
  __int64 v10; 
  bdMarketplaceCurrencyAmount v11; 

  v3 = &this->__vftable + 2;
  v4 = 1;
  *(_DWORD *)&this->m_balances[880] = 0;
  v5 = 0;
  while ( !v5 )
  {
    bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(&v11);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &v11) )
      goto LABEL_9;
    v4 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( *((_DWORD *)v3 + 224) < 0x10u )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceCurrencyAmount,16>::pushBack", 0x40u, "No more capacity for pushBack");
        v7 = *((unsigned int *)v3 + 224);
        if ( (unsigned int)v7 < 0x10 )
        {
          v8 = &v3[7 * v7];
          *((_DWORD *)v3 + 224) = v7 + 1;
          bdReferencable::operator=((bdReferencable *)((char *)v8 + SHIDWORD(v8[1]->serialize) + 8), (const bdReferencable *)((char *)&v11.__vftable + *(int *)(*((_QWORD *)&v11.__vftable + 1) + 4i64) + 8));
          *((_BYTE *)v8 + 16) = *((_BYTE *)&v11.__vftable + 16);
          v8[3] = (bdGetPlayerBalancesResponse_vtbl *)*((_QWORD *)&v11.__vftable + 3);
          *((_WORD *)v8 + 16) = v11.m_collisionField;
        }
        goto LABEL_10;
      }
      LODWORD(v10) = 16;
      LODWORD(v9) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v9, v10);
LABEL_9:
      v4 = 0;
      goto LABEL_10;
    }
    v5 = 1;
LABEL_10:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v11.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v11.gap22[6]);
    if ( !v4 )
      return v4;
  }
  return v4;
}

/*
==============
bdGetPlayerBalancesResponse::getBalance
==============
*/
bdMarketplaceCurrencyAmount *bdGetPlayerBalancesResponse::getBalance(bdGetPlayerBalancesResponse *this, bdMarketplaceCurrencyAmount *result, unsigned int index)
{
  __int64 v3; 
  bdGetPlayerBalancesResponse *v5; 
  char *v6; 
  int v8; 

  v3 = index;
  v5 = this;
  v8 = 0;
  bdHandleAssert(index < *(_DWORD *)&this->m_balances[880], "index < m_balances.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\marketplacestructclasses\\bdgetplayerbalances.cpp", "bdGetPlayerBalancesResponse::getBalance", 0x48u, "getBalance out of range", v8, -2i64);
  v5 = (bdGetPlayerBalancesResponse *)((char *)v5 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v5->m_balances[864], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceCurrencyAmount,16>::operator []", 0x54u, "i is out of range");
  v6 = (char *)v5 + 56 * v3;
  *((_QWORD *)&result->__vftable + 1) = &bdMarketplaceCurrencyAmount::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&result->gap22[6], (const bdReferencable *)&v6[*(int *)(*((_QWORD *)v6 + 1) + 4i64) + 8]);
  bdStructBufferSerializable::bdStructBufferSerializable(result, (const bdStructBufferSerializable *)v6);
  result->__vftable = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdStructBufferSerializable'};
  *(bdMarketplaceCurrencyAmount_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdMarketplaceCurrencyAmount_vtbl *)&bdMarketplaceCurrencyAmount::`vftable'{for `bdReferencable'};
  *((_BYTE *)&result->__vftable + 16) = v6[16];
  *((_QWORD *)&result->__vftable + 3) = *((_QWORD *)v6 + 3);
  result->m_collisionField = *((_WORD *)v6 + 16);
  return result;
}

/*
==============
bdGetPlayerBalancesRequest::getMaxNumResults
==============
*/
__int64 bdGetPlayerBalancesRequest::getMaxNumResults(bdGetPlayerBalancesRequest *this)
{
  return this->m_maxNumResults;
}

/*
==============
bdGetPlayerBalancesResponse::getNumBalances
==============
*/
__int64 bdGetPlayerBalancesResponse::getNumBalances(bdGetPlayerBalancesResponse *this)
{
  return *(unsigned int *)&this->m_balances[880];
}

/*
==============
bdGetPlayerBalancesRequest::reset
==============
*/
void bdGetPlayerBalancesRequest::reset(bdGetPlayerBalancesRequest *this)
{
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), (const char *const)&queryFormat.fmt + 3);
  this->m_maxNumResults = 16;
}

/*
==============
bdGetPlayerBalancesResponse::reset
==============
*/
void bdGetPlayerBalancesResponse::reset(bdGetPlayerBalancesResponse *this)
{
  *(_DWORD *)&this->m_balances[880] = 0;
}

/*
==============
bdGetPlayerBalancesRequest::serialize
==============
*/
bool bdGetPlayerBalancesRequest::serialize(bdGetPlayerBalancesRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 

  v2 = (const char *)(&this->__vftable + 2);
  v5 = 16;
  v6 = memchr_0(&this->__vftable + 2, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  return bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) && bdStructBufferSerializer::writeUInt32(serializer, 2u, this->m_maxNumResults);
}

/*
==============
bdGetPlayerBalancesRequest::setContext
==============
*/
void bdGetPlayerBalancesRequest::setContext(bdGetPlayerBalancesRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::operator=((bdStructFixedSizeString<16> *)(&this->__vftable + 2), context);
}

/*
==============
bdGetPlayerBalancesRequest::setMaxNumResults
==============
*/
void bdGetPlayerBalancesRequest::setMaxNumResults(bdGetPlayerBalancesRequest *this, unsigned int maxNumResults)
{
  this->m_maxNumResults = maxNumResults;
}

