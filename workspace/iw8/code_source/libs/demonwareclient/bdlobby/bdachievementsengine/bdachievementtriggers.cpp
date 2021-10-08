/*
==============
bdAchievementTriggers::addActivateAchievement
==============
*/

bdAchievementTriggers *__fastcall bdAchievementTriggers::addActivateAchievement(bdAchievementTriggers *this, const bdActivateAchievementAchievementTrigger *activateAchievement)
{
  return ?addActivateAchievement@bdAchievementTriggers@@QEAAAEAV1@AEBVbdActivateAchievementAchievementTrigger@@@Z(this, activateAchievement);
}

/*
==============
bdGrantCurrencyAchievementTrigger::operator!=
==============
*/

bool __fastcall bdGrantCurrencyAchievementTrigger::operator!=(bdGrantCurrencyAchievementTrigger *this, const bdGrantCurrencyAchievementTrigger *rhs)
{
  return ??9bdGrantCurrencyAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementTriggers::deserialize
==============
*/

bool __fastcall bdAchievementTriggers::deserialize(bdAchievementTriggers *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementTriggers@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementTriggers::operator!=
==============
*/

bool __fastcall bdAchievementTriggers::operator!=(bdAchievementTriggers *this, const bdAchievementTriggers *rhs)
{
  return ??9bdAchievementTriggers@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger
==============
*/

void __fastcall bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger(bdGrantProductAchievementTrigger *this, unsigned int productID)
{
  ??0bdGrantProductAchievementTrigger@@QEAA@I@Z(this, productID);
}

/*
==============
bdGrantCurrencyAchievementTrigger::serialize
==============
*/

bool __fastcall bdGrantCurrencyAchievementTrigger::serialize(bdGrantCurrencyAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGrantCurrencyAchievementTrigger@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementTriggers::bdAchievementTriggers
==============
*/

void __fastcall bdAchievementTriggers::bdAchievementTriggers(bdAchievementTriggers *this, const bdAchievementTriggers *__that)
{
  ??0bdAchievementTriggers@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdAchievementTriggers::addGrantProduct
==============
*/

bdAchievementTriggers *__fastcall bdAchievementTriggers::addGrantProduct(bdAchievementTriggers *this, const bdGrantProductAchievementTrigger *grantProduct)
{
  return ?addGrantProduct@bdAchievementTriggers@@QEAAAEAV1@AEBVbdGrantProductAchievementTrigger@@@Z(this, grantProduct);
}

/*
==============
bdActivateAchievementAchievementTrigger::getStartTimestamp
==============
*/

const bdAchievementRelativeTimestamp *__fastcall bdActivateAchievementAchievementTrigger::getStartTimestamp(bdActivateAchievementAchievementTrigger *this)
{
  return ?getStartTimestamp@bdActivateAchievementAchievementTrigger@@QEBAAEBVbdAchievementRelativeTimestamp@@XZ(this);
}

/*
==============
bdActivateAchievementAchievementTrigger::operator==
==============
*/

bool __fastcall bdActivateAchievementAchievementTrigger::operator==(bdActivateAchievementAchievementTrigger *this, const bdActivateAchievementAchievementTrigger *rhs)
{
  return ??8bdActivateAchievementAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/

void __fastcall bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this, const char *name, const bdAchievementRelativeTimestamp *startTimestamp)
{
  ??0bdActivateAchievementAchievementTrigger@@QEAA@PEBDAEBVbdAchievementRelativeTimestamp@@@Z(this, name, startTimestamp);
}

/*
==============
bdAchievementTriggers::operator==
==============
*/

bool __fastcall bdAchievementTriggers::operator==(bdAchievementTriggers *this, const bdAchievementTriggers *rhs)
{
  return ??8bdAchievementTriggers@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger
==============
*/

void __fastcall bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger(bdGrantCurrencyAchievementTrigger *this, unsigned int currencyID, unsigned int amount)
{
  ??0bdGrantCurrencyAchievementTrigger@@QEAA@II@Z(this, currencyID, amount);
}

/*
==============
bdActivateAchievementAchievementTrigger::serialize
==============
*/

bool __fastcall bdActivateAchievementAchievementTrigger::serialize(bdActivateAchievementAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdActivateAchievementAchievementTrigger@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGrantProductAchievementTrigger::getProductID
==============
*/

unsigned int __fastcall bdGrantProductAchievementTrigger::getProductID(bdGrantProductAchievementTrigger *this)
{
  return ?getProductID@bdGrantProductAchievementTrigger@@QEBAIXZ(this);
}

/*
==============
bdAchievementTriggers::serialize
==============
*/

bool __fastcall bdAchievementTriggers::serialize(bdAchievementTriggers *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementTriggers@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementTriggers::getGrantCurency
==============
*/

const bdGrantCurrencyAchievementTrigger *__fastcall bdAchievementTriggers::getGrantCurency(bdAchievementTriggers *this, unsigned int i)
{
  return ?getGrantCurency@bdAchievementTriggers@@QEBAAEBVbdGrantCurrencyAchievementTrigger@@I@Z(this, i);
}

/*
==============
bdAchievementTriggers::getGrantProduct
==============
*/

const bdGrantProductAchievementTrigger *__fastcall bdAchievementTriggers::getGrantProduct(bdAchievementTriggers *this, unsigned int i)
{
  return ?getGrantProduct@bdAchievementTriggers@@QEBAAEBVbdGrantProductAchievementTrigger@@I@Z(this, i);
}

/*
==============
bdGrantCurrencyAchievementTrigger::getAmount
==============
*/

unsigned int __fastcall bdGrantCurrencyAchievementTrigger::getAmount(bdGrantCurrencyAchievementTrigger *this)
{
  return ?getAmount@bdGrantCurrencyAchievementTrigger@@QEBAIXZ(this);
}

/*
==============
bdGrantCurrencyAchievementTrigger::operator==
==============
*/

bool __fastcall bdGrantCurrencyAchievementTrigger::operator==(bdGrantCurrencyAchievementTrigger *this, const bdGrantCurrencyAchievementTrigger *rhs)
{
  return ??8bdGrantCurrencyAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger
==============
*/

void __fastcall bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger(bdGrantCurrencyAchievementTrigger *this)
{
  ??0bdGrantCurrencyAchievementTrigger@@QEAA@XZ(this);
}

/*
==============
bdAchievementTriggers::getNumActivateAchievements
==============
*/

unsigned int __fastcall bdAchievementTriggers::getNumActivateAchievements(bdAchievementTriggers *this)
{
  return ?getNumActivateAchievements@bdAchievementTriggers@@QEBAIXZ(this);
}

/*
==============
bdGrantProductAchievementTrigger::toString
==============
*/

bdString *__fastcall bdGrantProductAchievementTrigger::toString(bdGrantProductAchievementTrigger *this, bdString *result)
{
  return ?toString@bdGrantProductAchievementTrigger@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdGrantProductAchievementTrigger::serialize
==============
*/

bool __fastcall bdGrantProductAchievementTrigger::serialize(bdGrantProductAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGrantProductAchievementTrigger@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdActivateAchievementAchievementTrigger::getTimeLimit
==============
*/

const bdAchievementRelativeTimestamp *__fastcall bdActivateAchievementAchievementTrigger::getTimeLimit(bdActivateAchievementAchievementTrigger *this)
{
  return ?getTimeLimit@bdActivateAchievementAchievementTrigger@@QEBAAEBVbdAchievementRelativeTimestamp@@XZ(this);
}

/*
==============
bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger
==============
*/

void __fastcall bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger(bdGrantProductAchievementTrigger *this)
{
  ??0bdGrantProductAchievementTrigger@@QEAA@XZ(this);
}

/*
==============
bdGrantProductAchievementTrigger::operator==
==============
*/

bool __fastcall bdGrantProductAchievementTrigger::operator==(bdGrantProductAchievementTrigger *this, const bdGrantProductAchievementTrigger *rhs)
{
  return ??8bdGrantProductAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementTriggers::getNumGrantCurrencies
==============
*/

unsigned int __fastcall bdAchievementTriggers::getNumGrantCurrencies(bdAchievementTriggers *this)
{
  return ?getNumGrantCurrencies@bdAchievementTriggers@@QEBAIXZ(this);
}

/*
==============
bdAchievementTriggers::bdAchievementTriggers
==============
*/

void __fastcall bdAchievementTriggers::bdAchievementTriggers(bdAchievementTriggers *this)
{
  ??0bdAchievementTriggers@@QEAA@XZ(this);
}

/*
==============
bdActivateAchievementAchievementTrigger::getName
==============
*/

const char *__fastcall bdActivateAchievementAchievementTrigger::getName(bdActivateAchievementAchievementTrigger *this)
{
  return ?getName@bdActivateAchievementAchievementTrigger@@QEBAPEBDXZ(this);
}

/*
==============
bdAchievementTriggers::getNumGrantProducts
==============
*/

unsigned int __fastcall bdAchievementTriggers::getNumGrantProducts(bdAchievementTriggers *this)
{
  return ?getNumGrantProducts@bdAchievementTriggers@@QEBAIXZ(this);
}

/*
==============
bdAchievementTriggers::addGrantCurrency
==============
*/

bdAchievementTriggers *__fastcall bdAchievementTriggers::addGrantCurrency(bdAchievementTriggers *this, const bdGrantCurrencyAchievementTrigger *grantCurrency)
{
  return ?addGrantCurrency@bdAchievementTriggers@@QEAAAEAV1@AEBVbdGrantCurrencyAchievementTrigger@@@Z(this, grantCurrency);
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/

void __fastcall bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this)
{
  ??0bdActivateAchievementAchievementTrigger@@QEAA@XZ(this);
}

/*
==============
bdGrantProductAchievementTrigger::deserialize
==============
*/

bool __fastcall bdGrantProductAchievementTrigger::deserialize(bdGrantProductAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGrantProductAchievementTrigger@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdActivateAchievementAchievementTrigger::hasTimeLimit
==============
*/

bool __fastcall bdActivateAchievementAchievementTrigger::hasTimeLimit(bdActivateAchievementAchievementTrigger *this)
{
  return ?hasTimeLimit@bdActivateAchievementAchievementTrigger@@QEBA_NXZ(this);
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/

void __fastcall bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this, const char *name, const bdAchievementRelativeTimestamp *startTimestamp, const bdAchievementRelativeTimestamp *timeLimit)
{
  ??0bdActivateAchievementAchievementTrigger@@QEAA@PEBDAEBVbdAchievementRelativeTimestamp@@1@Z(this, name, startTimestamp, timeLimit);
}

/*
==============
bdActivateAchievementAchievementTrigger::operator!=
==============
*/

bool __fastcall bdActivateAchievementAchievementTrigger::operator!=(bdActivateAchievementAchievementTrigger *this, const bdActivateAchievementAchievementTrigger *rhs)
{
  return ??9bdActivateAchievementAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdActivateAchievementAchievementTrigger::toString
==============
*/

bdString *__fastcall bdActivateAchievementAchievementTrigger::toString(bdActivateAchievementAchievementTrigger *this, bdString *result)
{
  return ?toString@bdActivateAchievementAchievementTrigger@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdActivateAchievementAchievementTrigger::deserialize
==============
*/

bool __fastcall bdActivateAchievementAchievementTrigger::deserialize(bdActivateAchievementAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdActivateAchievementAchievementTrigger@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGrantCurrencyAchievementTrigger::toString
==============
*/

bdString *__fastcall bdGrantCurrencyAchievementTrigger::toString(bdGrantCurrencyAchievementTrigger *this, bdString *result)
{
  return ?toString@bdGrantCurrencyAchievementTrigger@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdGrantCurrencyAchievementTrigger::getCurrencyID
==============
*/

unsigned int __fastcall bdGrantCurrencyAchievementTrigger::getCurrencyID(bdGrantCurrencyAchievementTrigger *this)
{
  return ?getCurrencyID@bdGrantCurrencyAchievementTrigger@@QEBAIXZ(this);
}

/*
==============
bdGrantProductAchievementTrigger::operator!=
==============
*/

bool __fastcall bdGrantProductAchievementTrigger::operator!=(bdGrantProductAchievementTrigger *this, const bdGrantProductAchievementTrigger *rhs)
{
  return ??9bdGrantProductAchievementTrigger@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementTriggers::toString
==============
*/

bdString *__fastcall bdAchievementTriggers::toString(bdAchievementTriggers *this, bdString *result)
{
  return ?toString@bdAchievementTriggers@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdGrantCurrencyAchievementTrigger::deserialize
==============
*/

bool __fastcall bdGrantCurrencyAchievementTrigger::deserialize(bdGrantCurrencyAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGrantCurrencyAchievementTrigger@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementTriggers::getActivateAchievement
==============
*/

const bdActivateAchievementAchievementTrigger *__fastcall bdAchievementTriggers::getActivateAchievement(bdAchievementTriggers *this, unsigned int i)
{
  return ?getActivateAchievement@bdAchievementTriggers@@QEBAAEBVbdActivateAchievementAchievementTrigger@@I@Z(this, i);
}

/*
==============
bdAchievementTriggers::bdAchievementTriggers
==============
*/
void bdAchievementTriggers::bdAchievementTriggers(bdAchievementTriggers *this, const bdAchievementTriggers *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementTriggers::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap368, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdAchievementTriggers_vtbl *)&bdAchievementTriggers::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementTriggers_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementTriggers_vtbl *)&bdAchievementTriggers::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger, (void (__fastcall *)(void *))bdGrantProductAchievementTrigger::`vbase destructor);
  *(_DWORD *)&this->m_grantProducts[64] = 0;
  bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2>::copy((bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *)(&this->__vftable + 2), (const bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *)(&__that->__vftable + 2));
  `eh vector vbase constructor iterator'(&this->m_grantCurrencies, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger, (void (__fastcall *)(void *))bdGrantCurrencyAchievementTrigger::`vbase destructor);
  this->m_grantCurrencies.m_size = 0;
  bdStructFixedSizeArray<bdGrantCurrencyAchievementTrigger,2>::copy(&this->m_grantCurrencies, &__that->m_grantCurrencies);
  `eh vector vbase constructor iterator'(&this->m_activateAchievements, 0x150ui64, 2ui64, (void (__fastcall *)(void *))bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger, (void (__fastcall *)(void *))bdActivateAchievementAchievementTrigger::`vbase destructor);
  this->m_activateAchievements.m_size = 0;
  bdStructFixedSizeArray<bdActivateAchievementAchievementTrigger,2>::copy(&this->m_activateAchievements, &__that->m_activateAchievements);
}

/*
==============
bdAchievementTriggers::bdAchievementTriggers
==============
*/
void bdAchievementTriggers::bdAchievementTriggers(bdAchievementTriggers *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementTriggers::`vbtable';
    *(_QWORD *)this->gap368 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap368[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementTriggers_vtbl *)&bdAchievementTriggers::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementTriggers_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementTriggers_vtbl *)&bdAchievementTriggers::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger, (void (__fastcall *)(void *))bdGrantProductAchievementTrigger::`vbase destructor);
  *(_DWORD *)&this->m_grantProducts[64] = 0;
  `eh vector vbase constructor iterator'(&this->m_grantCurrencies, 0x28ui64, 2ui64, (void (__fastcall *)(void *))bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger, (void (__fastcall *)(void *))bdGrantCurrencyAchievementTrigger::`vbase destructor);
  this->m_grantCurrencies.m_size = 0;
  `eh vector vbase constructor iterator'(&this->m_activateAchievements, 0x150ui64, 2ui64, (void (__fastcall *)(void *))bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger, (void (__fastcall *)(void *))bdActivateAchievementAchievementTrigger::`vbase destructor);
  this->m_activateAchievements.m_size = 0;
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/
void bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this, const char *name, const bdAchievementRelativeTimestamp *startTimestamp, const bdAchievementRelativeTimestamp *timeLimit, int a5)
{
  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdActivateAchievementAchievementTrigger::`vbtable';
    *(_QWORD *)this->gap140 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap140[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdActivateAchievementAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 2), name);
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_startTimestamp, startTimestamp);
  this->m_timeLimit.m_hasValue = 1;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_timeLimit.m_value, timeLimit);
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/
void bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this, const char *name, const bdAchievementRelativeTimestamp *startTimestamp, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdActivateAchievementAchievementTrigger::`vbtable';
    *(_QWORD *)this->gap140 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap140[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdActivateAchievementAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<100>::bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&this->__vftable + 2), name);
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_startTimestamp, startTimestamp);
  this->m_timeLimit.m_hasValue = 0;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_timeLimit.m_value);
}

/*
==============
bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger
==============
*/
void bdActivateAchievementAchievementTrigger::bdActivateAchievementAchievementTrigger(bdActivateAchievementAchievementTrigger *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdActivateAchievementAchievementTrigger::`vbtable';
    *(_QWORD *)this->gap140 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap140[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdActivateAchievementAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdActivateAchievementAchievementTrigger_vtbl *)&bdActivateAchievementAchievementTrigger::`vftable'{for `bdReferencable'};
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdActivateAchievementAchievementTrigger *)-16i64 )
  {
    v4 = 100i64;
    if ( v3 < 0x64 )
      v4 = v3;
    memcpy_0(&this->__vftable + 2, (char *)&queryFormat.fmt + 3, v4);
    *((_BYTE *)&this->__vftable + v4 + 16) = 0;
  }
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_startTimestamp);
  this->m_timeLimit.m_hasValue = 0;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&this->m_timeLimit.m_value);
}

/*
==============
bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger
==============
*/
void bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger(bdGrantCurrencyAchievementTrigger *this, unsigned int currencyID, unsigned int amount, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGrantCurrencyAchievementTrigger::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGrantCurrencyAchievementTrigger_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdGrantCurrencyAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGrantCurrencyAchievementTrigger_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = currencyID;
  *((_DWORD *)&this->__vftable + 5) = amount;
}

/*
==============
bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger
==============
*/
void bdGrantCurrencyAchievementTrigger::bdGrantCurrencyAchievementTrigger(bdGrantCurrencyAchievementTrigger *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGrantCurrencyAchievementTrigger::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGrantCurrencyAchievementTrigger_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdGrantCurrencyAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGrantCurrencyAchievementTrigger_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger
==============
*/
void bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger(bdGrantProductAchievementTrigger *this, unsigned int productID, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGrantProductAchievementTrigger::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGrantProductAchievementTrigger_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdGrantProductAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGrantProductAchievementTrigger_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = productID;
}

/*
==============
bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger
==============
*/
void bdGrantProductAchievementTrigger::bdGrantProductAchievementTrigger(bdGrantProductAchievementTrigger *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGrantProductAchievementTrigger::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGrantProductAchievementTrigger_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
  *(bdGrantProductAchievementTrigger_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGrantProductAchievementTrigger_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 0;
}

/*
==============
bdAchievementTriggers::operator==
==============
*/
char bdAchievementTriggers::operator==(bdAchievementTriggers *this, const bdAchievementTriggers *rhs)
{
  int v2; 
  unsigned int v5; 
  unsigned int v6; 
  bool v7; 
  unsigned int v8; 
  unsigned int m_size; 
  unsigned int v10; 
  bool v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  bool v15; 
  __int64 v16; 
  bool m_hasValue; 
  unsigned int v18; 

  v2 = *(_DWORD *)&this->m_grantProducts[64];
  if ( v2 == *(_DWORD *)&rhs->m_grantProducts[64] )
  {
    v5 = 0;
    v6 = 0;
    if ( v2 )
    {
      v7 = v2 != 0;
      while ( 1 )
      {
        bdHandleAssert(v7, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantProductAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
        bdHandleAssert(v6 < *(_DWORD *)&rhs->m_grantProducts[64], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantProductAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
        if ( *(_DWORD *)&this->m_grantProducts[40 * v6] != *(_DWORD *)&rhs->m_grantProducts[40 * v6] )
          break;
        v8 = *(_DWORD *)&this->m_grantProducts[64];
        v7 = ++v6 < v8;
        if ( v6 >= v8 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      m_size = this->m_grantCurrencies.m_size;
      if ( m_size == rhs->m_grantCurrencies.m_size )
      {
        v10 = 0;
        if ( m_size )
        {
          v11 = m_size != 0;
          while ( 1 )
          {
            bdHandleAssert(v11, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantCurrencyAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
            v12 = v10;
            bdHandleAssert(v10 < rhs->m_grantCurrencies.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantCurrencyAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
            if ( *((_DWORD *)&this->m_grantCurrencies.m_elements[v12].__vftable + 4) != *((_DWORD *)&rhs->m_grantCurrencies.m_elements[v12].__vftable + 4) || *((_DWORD *)&this->m_grantCurrencies.m_elements[v12].__vftable + 5) != *((_DWORD *)&rhs->m_grantCurrencies.m_elements[v12].__vftable + 5) )
              break;
            v13 = this->m_grantCurrencies.m_size;
            v11 = ++v10 < v13;
            if ( v10 >= v13 )
              goto LABEL_12;
          }
        }
        else
        {
LABEL_12:
          v14 = this->m_activateAchievements.m_size;
          if ( v14 == rhs->m_activateAchievements.m_size )
          {
            if ( !v14 )
              return 1;
            v15 = v14 != 0;
            while ( 1 )
            {
              bdHandleAssert(v15, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdActivateAchievementAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
              v16 = v5;
              bdHandleAssert(v5 < rhs->m_activateAchievements.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdActivateAchievementAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
              if ( strncmp((const char *)&this->m_activateAchievements.m_elements[v16].__vftable + 16, (const char *)&rhs->m_activateAchievements.m_elements[v16].__vftable + 16, 0x64ui64) )
                break;
              if ( !bdAchievementRelativeTimestamp::operator==(&this->m_activateAchievements.m_elements[v16].m_startTimestamp, &rhs->m_activateAchievements.m_elements[v16].m_startTimestamp) )
                break;
              m_hasValue = this->m_activateAchievements.m_elements[v16].m_timeLimit.m_hasValue;
              if ( m_hasValue != rhs->m_activateAchievements.m_elements[v16].m_timeLimit.m_hasValue )
                break;
              if ( m_hasValue )
              {
                bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
                bdHandleAssert(rhs->m_activateAchievements.m_elements[v16].m_timeLimit.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
                if ( !bdAchievementRelativeTimestamp::operator==(&this->m_activateAchievements.m_elements[v16].m_timeLimit.m_value, &rhs->m_activateAchievements.m_elements[v16].m_timeLimit.m_value) )
                  break;
              }
              v18 = this->m_activateAchievements.m_size;
              v15 = ++v5 < v18;
              if ( v5 >= v18 )
                return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
bdActivateAchievementAchievementTrigger::operator==
==============
*/
bool bdActivateAchievementAchievementTrigger::operator==(bdActivateAchievementAchievementTrigger *this, const bdActivateAchievementAchievementTrigger *rhs)
{
  bool m_hasValue; 
  bool result; 

  result = 0;
  if ( !strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x64ui64) && bdAchievementRelativeTimestamp::operator==(&this->m_startTimestamp, &rhs->m_startTimestamp) )
  {
    m_hasValue = this->m_timeLimit.m_hasValue;
    if ( m_hasValue == rhs->m_timeLimit.m_hasValue )
    {
      if ( !m_hasValue )
        return 1;
      bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
      bdHandleAssert(rhs->m_timeLimit.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
      if ( bdAchievementRelativeTimestamp::operator==(&this->m_timeLimit.m_value, &rhs->m_timeLimit.m_value) )
        return 1;
    }
  }
  return result;
}

/*
==============
bdGrantCurrencyAchievementTrigger::operator==
==============
*/
bool bdGrantCurrencyAchievementTrigger::operator==(bdGrantCurrencyAchievementTrigger *this, const bdGrantCurrencyAchievementTrigger *rhs)
{
  return *((_DWORD *)&this->__vftable + 4) == *((_DWORD *)&rhs->__vftable + 4) && *((_DWORD *)&this->__vftable + 5) == *((_DWORD *)&rhs->__vftable + 5);
}

/*
==============
bdGrantProductAchievementTrigger::operator==
==============
*/
bool bdGrantProductAchievementTrigger::operator==(bdGrantProductAchievementTrigger *this, const bdGrantProductAchievementTrigger *rhs)
{
  return *((_DWORD *)&this->__vftable + 4) == *((_DWORD *)&rhs->__vftable + 4);
}

/*
==============
bdAchievementTriggers::operator!=
==============
*/
bool bdAchievementTriggers::operator!=(bdAchievementTriggers *this, const bdAchievementTriggers *rhs)
{
  return !bdAchievementTriggers::operator==(this, rhs);
}

/*
==============
bdActivateAchievementAchievementTrigger::operator!=
==============
*/
bool bdActivateAchievementAchievementTrigger::operator!=(bdActivateAchievementAchievementTrigger *this, const bdActivateAchievementAchievementTrigger *rhs)
{
  bool m_hasValue; 
  bool result; 

  result = 1;
  if ( !strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x64ui64) && bdAchievementRelativeTimestamp::operator==(&this->m_startTimestamp, &rhs->m_startTimestamp) )
  {
    m_hasValue = this->m_timeLimit.m_hasValue;
    if ( m_hasValue == rhs->m_timeLimit.m_hasValue )
    {
      if ( !m_hasValue )
        return 0;
      bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
      bdHandleAssert(rhs->m_timeLimit.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
      if ( bdAchievementRelativeTimestamp::operator==(&this->m_timeLimit.m_value, &rhs->m_timeLimit.m_value) )
        return 0;
    }
  }
  return result;
}

/*
==============
bdGrantCurrencyAchievementTrigger::operator!=
==============
*/
bool bdGrantCurrencyAchievementTrigger::operator!=(bdGrantCurrencyAchievementTrigger *this, const bdGrantCurrencyAchievementTrigger *rhs)
{
  return *((_DWORD *)&this->__vftable + 4) != *((_DWORD *)&rhs->__vftable + 4) || *((_DWORD *)&this->__vftable + 5) != *((_DWORD *)&rhs->__vftable + 5);
}

/*
==============
bdGrantProductAchievementTrigger::operator!=
==============
*/
bool bdGrantProductAchievementTrigger::operator!=(bdGrantProductAchievementTrigger *this, const bdGrantProductAchievementTrigger *rhs)
{
  return *((_DWORD *)&this->__vftable + 4) != *((_DWORD *)&rhs->__vftable + 4);
}

/*
==============
bdAchievementTriggers::addActivateAchievement
==============
*/
bdAchievementTriggers *bdAchievementTriggers::addActivateAchievement(bdAchievementTriggers *this, const bdActivateAchievementAchievementTrigger *activateAchievement)
{
  bdStructFixedSizeArray<bdActivateAchievementAchievementTrigger,2>::pushBack(&this->m_activateAchievements, activateAchievement);
  return this;
}

/*
==============
bdAchievementTriggers::addGrantCurrency
==============
*/
bdAchievementTriggers *bdAchievementTriggers::addGrantCurrency(bdAchievementTriggers *this, const bdGrantCurrencyAchievementTrigger *grantCurrency)
{
  bdStructFixedSizeArray<bdGrantCurrencyAchievementTrigger,2>::pushBack(&this->m_grantCurrencies, grantCurrency);
  return this;
}

/*
==============
bdAchievementTriggers::addGrantProduct
==============
*/
bdAchievementTriggers *bdAchievementTriggers::addGrantProduct(bdAchievementTriggers *this, const bdGrantProductAchievementTrigger *grantProduct)
{
  bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2>::pushBack((bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *)(&this->__vftable + 2), grantProduct);
  return this;
}

/*
==============
bdAchievementTriggers::deserialize
==============
*/
bool bdAchievementTriggers::deserialize(bdAchievementTriggers *this, bdStructBufferDeserializer *deserializer)
{
  int v4; 
  char v5; 
  char v6; 
  __int64 v8; 
  bdAchievementTriggers_vtbl **v9; 
  char v10; 
  char v11; 
  __int64 m_size; 
  bdGrantCurrencyAchievementTrigger *v13; 
  __int64 v14; 
  __int64 v15; 
  bdStructBufferSerializable object; 
  int v17; 

  v4 = 0;
  *(_DWORD *)&this->m_grantProducts[64] = 0;
  v5 = 0;
  while ( !v5 )
  {
    *((_QWORD *)&object.__vftable + 1) = &bdGrantProductAchievementTrigger::`vbtable';
    *((_QWORD *)&object.__vftable + 3) = &bdReferencable::`vftable';
    v17 = 0;
    v4 |= 1u;
    bdStructBufferSerializable::bdStructBufferSerializable(&object);
    object.__vftable = (bdStructBufferSerializable_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
    *(bdStructBufferSerializable_vtbl **)((char *)&object.__vftable + *(int *)(*((_QWORD *)&object.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdGrantProductAchievementTrigger::`vftable'{for `bdReferencable'};
    *((_DWORD *)&object.__vftable + 4) = 0;
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &object) )
      goto LABEL_8;
    v6 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( *(_DWORD *)&this->m_grantProducts[64] < 2u )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantProductAchievementTrigger,2>::pushBack", 0x40u, "No more capacity for pushBack");
        v8 = *(unsigned int *)&this->m_grantProducts[64];
        if ( (unsigned int)v8 < 2 )
        {
          v9 = &this->__vftable + 5 * v8 + 2;
          *(_DWORD *)&this->m_grantProducts[64] = v8 + 1;
          bdReferencable::operator=((bdReferencable *)((char *)v9 + *(int *)(*((_QWORD *)&this->__vftable + 5 * v8 + 3) + 4i64) + 8), (const bdReferencable *)((char *)&object.__vftable + *(int *)(*((_QWORD *)&object.__vftable + 1) + 4i64) + 8));
          *((_DWORD *)v9 + 4) = *((_DWORD *)&object.__vftable + 4);
        }
        goto LABEL_9;
      }
      LODWORD(v15) = 2;
      LODWORD(v14) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v14, v15);
LABEL_8:
      v6 = 0;
      goto LABEL_9;
    }
    v5 = 1;
LABEL_9:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&object.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&object.__vftable + 3));
    if ( !v6 )
      return 0;
  }
  this->m_grantCurrencies.m_size = 0;
  v10 = 0;
  while ( !v10 )
  {
    *((_QWORD *)&object.__vftable + 1) = &bdGrantCurrencyAchievementTrigger::`vbtable';
    *((_QWORD *)&object.__vftable + 3) = &bdReferencable::`vftable';
    v17 = 0;
    v4 |= 2u;
    bdStructBufferSerializable::bdStructBufferSerializable(&object);
    object.__vftable = (bdStructBufferSerializable_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdStructBufferSerializable'};
    *(bdStructBufferSerializable_vtbl **)((char *)&object.__vftable + *(int *)(*((_QWORD *)&object.__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdGrantCurrencyAchievementTrigger::`vftable'{for `bdReferencable'};
    *((_QWORD *)&object.__vftable + 2) = 0i64;
    if ( !bdStructBufferDeserializer::readObject(deserializer, 2u, &object) )
      goto LABEL_20;
    v11 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( this->m_grantCurrencies.m_size < 2 )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantCurrencyAchievementTrigger,2>::pushBack", 0x40u, "No more capacity for pushBack");
        m_size = this->m_grantCurrencies.m_size;
        if ( (unsigned int)m_size < 2 )
        {
          v13 = &this->m_grantCurrencies.m_elements[m_size];
          this->m_grantCurrencies.m_size = m_size + 1;
          bdReferencable::operator=((bdReferencable *)((char *)&v13->__vftable + *(int *)(*((_QWORD *)&this->m_grantCurrencies.m_elements[m_size].__vftable + 1) + 4i64) + 8), (const bdReferencable *)((char *)&object.__vftable + *(int *)(*((_QWORD *)&object.__vftable + 1) + 4i64) + 8));
          *((_DWORD *)&v13->__vftable + 4) = *((_DWORD *)&object.__vftable + 4);
          *((_DWORD *)&v13->__vftable + 5) = *((_DWORD *)&object.__vftable + 5);
        }
        goto LABEL_21;
      }
      LODWORD(v15) = 2;
      LODWORD(v14) = 2;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v14, v15);
LABEL_20:
      v11 = 0;
      goto LABEL_21;
    }
    v10 = 1;
LABEL_21:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&object.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&object.__vftable + 3));
    if ( !v11 )
      return 0;
  }
  return bdStructBufferDeserializer::readObjectArray<bdActivateAchievementAchievementTrigger,2>(deserializer, 3u, &this->m_activateAchievements);
}

/*
==============
bdActivateAchievementAchievementTrigger::deserialize
==============
*/
bool bdActivateAchievementAchievementTrigger::deserialize(bdActivateAchievementAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  char v4; 
  bdAchievementRelativeTimestamp v6; 

  if ( !bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x65u) || !bdStructBufferDeserializer::readObject(deserializer, 2u, &this->m_startTimestamp) )
    return 0;
  this->m_timeLimit.m_hasValue = 0;
  bdAchievementRelativeTimestamp::bdAchievementRelativeTimestamp(&v6);
  if ( bdStructBufferDeserializer::readObject(deserializer, 3u, &v6) )
  {
    v4 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      this->m_timeLimit.m_hasValue = 1;
      bdReferencable::operator=((bdReferencable *)((char *)&this->m_timeLimit.m_value.__vftable + *(int *)(*((_QWORD *)&this->m_timeLimit.m_value.__vftable + 1) + 4i64) + 8), (const bdReferencable *)&v6.m_periodParams[*(int *)(*((_QWORD *)&v6.__vftable + 1) + 4i64) - 24]);
      *((_DWORD *)&this->m_timeLimit.m_value.__vftable + 4) = *((_DWORD *)&v6.__vftable + 4);
      bdReferencable::operator=((bdReferencable *)&this->m_timeLimit.m_value.m_periodParams[*(int *)(*(_QWORD *)this->m_timeLimit.m_value.m_periodParams + 4i64)], (const bdReferencable *)&v6.m_periodParams[*(int *)(*(_QWORD *)v6.m_periodParams + 4i64)]);
      *(_DWORD *)&this->m_timeLimit.m_value.m_periodParams[8] = *(_DWORD *)&v6.m_periodParams[8];
      *(_DWORD *)&this->m_timeLimit.m_value.m_periodParams[12] = *(_DWORD *)&v6.m_periodParams[12];
      *(_DWORD *)&this->m_timeLimit.m_value.m_periodParams[16] = *(_DWORD *)&v6.m_periodParams[16];
      *(_DWORD *)&this->m_timeLimit.m_value.m_periodParams[20] = *(_DWORD *)&v6.m_periodParams[20];
      *(_DWORD *)&this->m_timeLimit.m_value.m_periodParams[24] = *(_DWORD *)&v6.m_periodParams[24];
    }
  }
  else
  {
    v4 = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v6.m_periodParams[8]);
  bdReferencable::~bdReferencable((bdReferencable *)&v6.m_periodParams[32]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v6.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&v6.m_periodParams[48]);
  return v4 != 0;
}

/*
==============
bdGrantCurrencyAchievementTrigger::deserialize
==============
*/
bool bdGrantCurrencyAchievementTrigger::deserialize(bdGrantCurrencyAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4) && bdStructBufferDeserializer::readUInt32(deserializer, 2u, (unsigned int *)&this->__vftable + 5);
}

/*
==============
bdGrantProductAchievementTrigger::deserialize
==============
*/
bool bdGrantProductAchievementTrigger::deserialize(bdGrantProductAchievementTrigger *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4);
}

/*
==============
bdAchievementTriggers::getActivateAchievement
==============
*/
const bdActivateAchievementAchievementTrigger *bdAchievementTriggers::getActivateAchievement(bdAchievementTriggers *this, unsigned int i)
{
  bdStructFixedSizeArray<bdActivateAchievementAchievementTrigger,2> *p_m_activateAchievements; 
  __int64 v3; 

  p_m_activateAchievements = &this->m_activateAchievements;
  v3 = i;
  bdHandleAssert(i < this->m_activateAchievements.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdActivateAchievementAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
  return (const bdActivateAchievementAchievementTrigger *)((char *)p_m_activateAchievements + 336 * v3);
}

/*
==============
bdGrantCurrencyAchievementTrigger::getAmount
==============
*/
__int64 bdGrantCurrencyAchievementTrigger::getAmount(bdGrantCurrencyAchievementTrigger *this)
{
  return *((unsigned int *)&this->__vftable + 5);
}

/*
==============
bdGrantCurrencyAchievementTrigger::getCurrencyID
==============
*/
__int64 bdGrantCurrencyAchievementTrigger::getCurrencyID(bdGrantCurrencyAchievementTrigger *this)
{
  return *((unsigned int *)&this->__vftable + 4);
}

/*
==============
bdAchievementTriggers::getGrantCurency
==============
*/
const bdGrantCurrencyAchievementTrigger *bdAchievementTriggers::getGrantCurency(bdAchievementTriggers *this, unsigned int i)
{
  bdStructFixedSizeArray<bdGrantCurrencyAchievementTrigger,2> *p_m_grantCurrencies; 
  __int64 v3; 

  p_m_grantCurrencies = &this->m_grantCurrencies;
  v3 = i;
  bdHandleAssert(i < this->m_grantCurrencies.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantCurrencyAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
  return (const bdGrantCurrencyAchievementTrigger *)((char *)p_m_grantCurrencies + 40 * v3);
}

/*
==============
bdAchievementTriggers::getGrantProduct
==============
*/
bdAchievementTriggers_vtbl **bdAchievementTriggers::getGrantProduct(bdAchievementTriggers *this, unsigned int i)
{
  bdAchievementTriggers_vtbl **v2; 
  __int64 v3; 

  v2 = &this->__vftable + 2;
  v3 = i;
  bdHandleAssert(i < *(_DWORD *)&this->m_grantProducts[64], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdGrantProductAchievementTrigger,2>::operator []", 0x54u, "i is out of range");
  return &v2[5 * v3];
}

/*
==============
bdActivateAchievementAchievementTrigger::getName
==============
*/
bdActivateAchievementAchievementTrigger_vtbl **bdActivateAchievementAchievementTrigger::getName(bdActivateAchievementAchievementTrigger *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdAchievementTriggers::getNumActivateAchievements
==============
*/
__int64 bdAchievementTriggers::getNumActivateAchievements(bdAchievementTriggers *this)
{
  return this->m_activateAchievements.m_size;
}

/*
==============
bdAchievementTriggers::getNumGrantCurrencies
==============
*/
__int64 bdAchievementTriggers::getNumGrantCurrencies(bdAchievementTriggers *this)
{
  return this->m_grantCurrencies.m_size;
}

/*
==============
bdAchievementTriggers::getNumGrantProducts
==============
*/
__int64 bdAchievementTriggers::getNumGrantProducts(bdAchievementTriggers *this)
{
  return *(unsigned int *)&this->m_grantProducts[64];
}

/*
==============
bdGrantProductAchievementTrigger::getProductID
==============
*/
__int64 bdGrantProductAchievementTrigger::getProductID(bdGrantProductAchievementTrigger *this)
{
  return *((unsigned int *)&this->__vftable + 4);
}

/*
==============
bdActivateAchievementAchievementTrigger::getStartTimestamp
==============
*/
bdAchievementRelativeTimestamp *bdActivateAchievementAchievementTrigger::getStartTimestamp(bdActivateAchievementAchievementTrigger *this)
{
  return &this->m_startTimestamp;
}

/*
==============
bdActivateAchievementAchievementTrigger::getTimeLimit
==============
*/
bdAchievementRelativeTimestamp *bdActivateAchievementAchievementTrigger::getTimeLimit(bdActivateAchievementAchievementTrigger *this)
{
  bdHandleAssert(this->m_timeLimit.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value");
  return &this->m_timeLimit.m_value;
}

/*
==============
bdActivateAchievementAchievementTrigger::hasTimeLimit
==============
*/
_BOOL8 bdActivateAchievementAchievementTrigger::hasTimeLimit(bdActivateAchievementAchievementTrigger *this)
{
  return this->m_timeLimit.m_hasValue;
}

/*
==============
bdAchievementTriggers::serialize
==============
*/
bool bdAchievementTriggers::serialize(bdAchievementTriggers *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementtriggers.cpp", "bdAchievementTriggers::serialize", 0x103u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdActivateAchievementAchievementTrigger::serialize
==============
*/
bool bdActivateAchievementAchievementTrigger::serialize(bdActivateAchievementAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementtriggers.cpp", "bdActivateAchievementAchievementTrigger::serialize", 0xA9u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGrantCurrencyAchievementTrigger::serialize
==============
*/
bool bdGrantCurrencyAchievementTrigger::serialize(bdGrantCurrencyAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementtriggers.cpp", "bdGrantCurrencyAchievementTrigger::serialize", 0x5Bu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGrantProductAchievementTrigger::serialize
==============
*/
bool bdGrantProductAchievementTrigger::serialize(bdGrantProductAchievementTrigger *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementtriggers.cpp", "bdGrantProductAchievementTrigger::serialize", 0x27u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementTriggers::toString
==============
*/
bdString *bdAchievementTriggers::toString(bdAchievementTriggers *this, bdString *result)
{
  bdString *Array; 
  const char *Buffer; 
  bdString *v6; 
  const char *v7; 
  bdString *v8; 
  const char *v9; 
  bdString v11; 
  bdString v12; 
  bdString resulta; 

  v12.m_string = (char *)result;
  Array = makeArrayString<bdActivateAchievementAchievementTrigger,2>(&resulta, &this->m_activateAchievements);
  Buffer = bdString::getBuffer(Array);
  v6 = makeArrayString<bdGrantCurrencyAchievementTrigger,2>(&v11, &this->m_grantCurrencies);
  v7 = bdString::getBuffer(v6);
  v8 = makeArrayString<bdGrantProductAchievementTrigger,2>(&v12, (const bdStructFixedSizeArray<bdGrantProductAchievementTrigger,2> *)(&this->__vftable + 2));
  v9 = bdString::getBuffer(v8);
  makeFormattedString(result, "{ grantProducts:%s , grantCurrencies:%s , activateAchievements:%s }", v9, v7, Buffer);
  bdString::~bdString(&v12);
  bdString::~bdString(&v11);
  bdString::~bdString(&resulta);
  return result;
}

/*
==============
bdActivateAchievementAchievementTrigger::toString
==============
*/
bdString *bdActivateAchievementAchievementTrigger::toString(bdActivateAchievementAchievementTrigger *this, bdString *result)
{
  bool m_hasValue; 
  bdString *p_resulta; 
  char v6; 
  char v7; 
  const char *Buffer; 
  bdString *v9; 
  const char *v10; 
  int v12; 
  bdString v13; 
  bdString resulta; 
  bdString v15; 
  bdString v16; 

  resulta.m_string = (char *)result;
  v12 = 0;
  m_hasValue = this->m_timeLimit.m_hasValue;
  if ( m_hasValue )
  {
    bdHandleAssert(m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementRelativeTimestamp>::getValue", 0x3Cu, "Has no value", v12, -2i64);
    bdAchievementRelativeTimestamp::toString(&this->m_timeLimit.m_value, &resulta);
    p_resulta = &resulta;
    v6 = 18;
  }
  else
  {
    bdString::bdString(&v15, "none");
    v6 = 4;
  }
  bdString::bdString(&v13, p_resulta);
  v7 = v6 | 8;
  if ( (v7 & 4) != 0 )
  {
    v7 &= ~4u;
    bdString::~bdString(&v15);
  }
  if ( (v7 & 2) != 0 )
    bdString::~bdString(&resulta);
  Buffer = bdString::getBuffer(&v13);
  v9 = bdAchievementRelativeTimestamp::toString(&this->m_startTimestamp, &v16);
  v10 = bdString::getBuffer(v9);
  makeFormattedString(result, "{ name:%s , startTimestamp:%s , timeLimit:%s }", (const char *)&this->__vftable + 16, v10, Buffer);
  bdString::~bdString(&v16);
  bdString::~bdString(&v13);
  return result;
}

/*
==============
bdGrantCurrencyAchievementTrigger::toString
==============
*/
bdString *bdGrantCurrencyAchievementTrigger::toString(bdGrantCurrencyAchievementTrigger *this, bdString *result)
{
  makeFormattedString(result, "{ currencyID:%d , amount:%d }", *((unsigned int *)&this->__vftable + 4), *((unsigned int *)&this->__vftable + 5));
  return result;
}

/*
==============
bdGrantProductAchievementTrigger::toString
==============
*/
bdString *bdGrantProductAchievementTrigger::toString(bdGrantProductAchievementTrigger *this, bdString *result)
{
  makeFormattedString(result, "{ productID:%d }", *((unsigned int *)&this->__vftable + 4));
  return result;
}

