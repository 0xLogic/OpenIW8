/*
==============
bdRedeemCodeResult::bdRedeemCodeResult
==============
*/

void __fastcall bdRedeemCodeResult::bdRedeemCodeResult(bdRedeemCodeResult *this)
{
  ??0bdRedeemCodeResult@@QEAA@XZ(this);
}

/*
==============
bdRedeemCodeResult::deserialize
==============
*/

bool __fastcall bdRedeemCodeResult::deserialize(bdRedeemCodeResult *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRedeemCodeResult@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRedeemCodeResult::serialize
==============
*/

bool __fastcall bdRedeemCodeResult::serialize(bdRedeemCodeResult *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdRedeemCodeResult@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdRedeemCodeResult::reset
==============
*/

void __fastcall bdRedeemCodeResult::reset(bdRedeemCodeResult *this)
{
  ?reset@bdRedeemCodeResult@@QEAAXXZ(this);
}

/*
==============
bdRedeemCodeResult::bdRedeemCodeResult
==============
*/
void bdRedeemCodeResult::bdRedeemCodeResult(bdRedeemCodeResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRedeemCodeResult::`vbtable';
    *((_QWORD *)&this->m_grantedCurrencies + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_grantedCurrencies + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRedeemCodeResult_vtbl *)&bdRedeemCodeResult::`vftable'{for `bdStructBufferSerializable'};
  *(bdRedeemCodeResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRedeemCodeResult_vtbl *)&bdRedeemCodeResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_grantedCurrencies.m_data = NULL;
  *(_QWORD *)&this->m_grantedCurrencies.m_capacity = 0i64;
}

/*
==============
bdRedeemCodeResult::deserialize
==============
*/
bool bdRedeemCodeResult::deserialize(bdRedeemCodeResult *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  char v5; 
  int v6; 
  int v7; 
  char *v8; 
  unsigned int v9; 
  __int64 v10; 
  char *v11; 
  bdRedeemCodeGrantedItem *v12; 
  __int64 v13; 
  bdRedeemCodeGrantedItem v15; 

  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  v4 = 0;
  while ( !v4 )
  {
    bdRedeemCodeGrantedItem::bdRedeemCodeGrantedItem(&v15);
    if ( bdStructBufferDeserializer::readObject(deserializer, 1u, &v15) )
    {
      v5 = 1;
      if ( bdStructBufferDeserializer::getLastReadResult(deserializer) == BD_READ_SUCCESS_TAG_NOT_FOUND )
      {
        v4 = 1;
      }
      else
      {
        v6 = *((_DWORD *)&this->__vftable + 6);
        if ( *((_DWORD *)&this->__vftable + 7) == v6 )
        {
          v7 = *((_DWORD *)&this->__vftable + 6);
          if ( !v6 )
            v7 = 1;
          v8 = NULL;
          v9 = v6 + v7;
          if ( v9 )
          {
            v8 = (char *)bdMemory::allocate(944i64 * v9);
            v10 = *((unsigned int *)&this->__vftable + 7);
            if ( (_DWORD)v10 )
              memcpy_0(v8, *((const void **)&this->__vftable + 2), 944 * v10);
          }
          bdMemory::deallocate(*((void **)&this->__vftable + 2));
          *((_QWORD *)&this->__vftable + 2) = v8;
          *((_DWORD *)&this->__vftable + 6) = v9;
        }
        else
        {
          v8 = (char *)*((_QWORD *)&this->__vftable + 2);
        }
        v11 = &v8[944 * *((unsigned int *)&this->__vftable + 7)];
        v12 = &v15;
        v13 = 7i64;
        do
        {
          *(_OWORD *)v11 = *(_OWORD *)&v12->__vftable;
          *((_OWORD *)v11 + 1) = *((_OWORD *)&v12->__vftable + 1);
          *((_OWORD *)v11 + 2) = *(_OWORD *)v12->m_itemName;
          *((_OWORD *)v11 + 3) = *(_OWORD *)&v12->m_itemName[16];
          *((_OWORD *)v11 + 4) = *(_OWORD *)&v12->m_itemName[32];
          *((_OWORD *)v11 + 5) = *(_OWORD *)&v12->m_itemName[48];
          *((_OWORD *)v11 + 6) = *(_OWORD *)&v12->m_itemName[64];
          v11 += 128;
          *((_OWORD *)v11 - 1) = *(_OWORD *)&v12->m_itemName[80];
          v12 = (bdRedeemCodeGrantedItem *)((char *)v12 + 128);
          --v13;
        }
        while ( v13 );
        *(_OWORD *)v11 = *(_OWORD *)&v12->__vftable;
        *((_OWORD *)v11 + 1) = *((_OWORD *)&v12->__vftable + 1);
        *((_OWORD *)v11 + 2) = *(_OWORD *)v12->m_itemName;
        ++*((_DWORD *)&this->__vftable + 7);
      }
    }
    else
    {
      v5 = 0;
    }
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v15.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v15.gap39C[4]);
    if ( !v5 )
      return 0;
  }
  return bdStructBufferDeserializer::readObjectArray<bdRedeemCodeGrantedCurrency>(deserializer, 2u, &this->m_grantedCurrencies);
}

/*
==============
bdRedeemCodeResult::reset
==============
*/
void bdRedeemCodeResult::reset(bdRedeemCodeResult *this)
{
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdMemory::deallocate(this->m_grantedCurrencies.m_data);
  this->m_grantedCurrencies.m_data = NULL;
  *(_QWORD *)&this->m_grantedCurrencies.m_capacity = 0i64;
}

/*
==============
bdRedeemCodeResult::serialize
==============
*/
bool bdRedeemCodeResult::serialize(bdRedeemCodeResult *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdredeemablecode\\bdredeemcoderesult.cpp", "bdRedeemCodeResult::serialize", 0x19u, "NOT IMPLEMENTED");
  return 0;
}

