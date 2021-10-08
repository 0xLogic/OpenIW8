/*
==============
bdRedeemCodeGrantedCurrency::copyFrom
==============
*/

void __fastcall bdRedeemCodeGrantedCurrency::copyFrom(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy)
{
  ?copyFrom@bdRedeemCodeGrantedCurrency@@AEAAXAEBV1@@Z(this, copy);
}

/*
==============
bdRedeemCodeGrantedCurrency::serialize
==============
*/

bool __fastcall bdRedeemCodeGrantedCurrency::serialize(bdRedeemCodeGrantedCurrency *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdRedeemCodeGrantedCurrency@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdRedeemCodeGrantedCurrency::toString
==============
*/

bdString *__fastcall bdRedeemCodeGrantedCurrency::toString(bdRedeemCodeGrantedCurrency *this, bdString *result)
{
  return ?toString@bdRedeemCodeGrantedCurrency@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdRedeemCodeGrantedCurrency::reset
==============
*/

void __fastcall bdRedeemCodeGrantedCurrency::reset(bdRedeemCodeGrantedCurrency *this)
{
  ?reset@bdRedeemCodeGrantedCurrency@@AEAAXXZ(this);
}

/*
==============
bdRedeemCodeGrantedCurrency::operator=
==============
*/

bdRedeemCodeGrantedCurrency *__fastcall bdRedeemCodeGrantedCurrency::operator=(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy)
{
  return ??4bdRedeemCodeGrantedCurrency@@QEAAAEAV0@AEBV0@@Z(this, copy);
}

/*
==============
bdRedeemCodeGrantedCurrency::deserialize
==============
*/

bool __fastcall bdRedeemCodeGrantedCurrency::deserialize(bdRedeemCodeGrantedCurrency *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRedeemCodeGrantedCurrency@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency
==============
*/

void __fastcall bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy)
{
  ??0bdRedeemCodeGrantedCurrency@@QEAA@AEBV0@@Z(this, copy);
}

/*
==============
bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency
==============
*/

void __fastcall bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency(bdRedeemCodeGrantedCurrency *this)
{
  ??0bdRedeemCodeGrantedCurrency@@QEAA@XZ(this);
}

/*
==============
bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency
==============
*/
void bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeGrantedCurrency::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeGrantedCurrency_vtbl *)&bdRedeemCodeGrantedCurrency::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeGrantedCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeGrantedCurrency_vtbl *)&bdRedeemCodeGrantedCurrency::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&copy->__vftable + 4);
  *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&copy->__vftable + 5);
  *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&copy->__vftable + 6);
}

/*
==============
bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency
==============
*/
void bdRedeemCodeGrantedCurrency::bdRedeemCodeGrantedCurrency(bdRedeemCodeGrantedCurrency *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeGrantedCurrency::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeGrantedCurrency_vtbl *)&bdRedeemCodeGrantedCurrency::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeGrantedCurrency_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeGrantedCurrency_vtbl *)&bdRedeemCodeGrantedCurrency::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdRedeemCodeGrantedCurrency_vtbl **)((char *)&this->__vftable + 20) = NULL;
}

/*
==============
bdRedeemCodeGrantedCurrency::operator=
==============
*/
bdRedeemCodeGrantedCurrency *bdRedeemCodeGrantedCurrency::operator=(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy)
{
  if ( this != copy )
  {
    *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&copy->__vftable + 4);
    *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&copy->__vftable + 5);
    *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&copy->__vftable + 6);
  }
  return this;
}

/*
==============
bdRedeemCodeGrantedCurrency::copyFrom
==============
*/
void bdRedeemCodeGrantedCurrency::copyFrom(bdRedeemCodeGrantedCurrency *this, const bdRedeemCodeGrantedCurrency *copy)
{
  *((_DWORD *)&this->__vftable + 4) = *((_DWORD *)&copy->__vftable + 4);
  *((_DWORD *)&this->__vftable + 5) = *((_DWORD *)&copy->__vftable + 5);
  *((_DWORD *)&this->__vftable + 6) = *((_DWORD *)&copy->__vftable + 6);
}

/*
==============
bdRedeemCodeGrantedCurrency::deserialize
==============
*/
bool bdRedeemCodeGrantedCurrency::deserialize(bdRedeemCodeGrantedCurrency *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4) && bdStructBufferDeserializer::readUInt32(deserializer, 2u, (unsigned int *)&this->__vftable + 5) && bdStructBufferDeserializer::readUInt32(deserializer, 3u, (unsigned int *)&this->__vftable + 6);
}

/*
==============
bdRedeemCodeGrantedCurrency::reset
==============
*/
void bdRedeemCodeGrantedCurrency::reset(bdRedeemCodeGrantedCurrency *this)
{
  *((_DWORD *)&this->__vftable + 4) = -1;
  *(bdRedeemCodeGrantedCurrency_vtbl **)((char *)&this->__vftable + 20) = NULL;
}

/*
==============
bdRedeemCodeGrantedCurrency::serialize
==============
*/
bool bdRedeemCodeGrantedCurrency::serialize(bdRedeemCodeGrantedCurrency *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemcodegrantedcurrency.cpp", "bdRedeemCodeGrantedCurrency::serialize", 0x25u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdRedeemCodeGrantedCurrency::toString
==============
*/
bdString *bdRedeemCodeGrantedCurrency::toString(bdRedeemCodeGrantedCurrency *this, bdString *result)
{
  int v4; 

  v4 = *((_DWORD *)&this->__vftable + 6);
  makeFormattedString(result, "{ currencyId:%d , balanceBefore:%d , balanceDelta:%d }", *((unsigned int *)&this->__vftable + 4), *((unsigned int *)&this->__vftable + 5), v4);
  return result;
}

