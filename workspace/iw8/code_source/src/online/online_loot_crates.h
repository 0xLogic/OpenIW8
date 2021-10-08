/*
==============
Online_LootCrate::~Online_LootCrate
==============
*/

void __fastcall Online_LootCrate::~Online_LootCrate(Online_LootCrate *this)
{
  ??1Online_LootCrate@@UEAA@XZ(this);
}

/*
==============
Online_LootCrate::~Online_LootCrate
==============
*/
void Online_LootCrate::~Online_LootCrate(Online_LootCrate *this)
{
  this->__vftable = (Online_LootCrate_vtbl *)&Online_LootCrate::`vftable';
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_openCrateResponse.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_openCrateResponse.m_jsonScriptResponse[15984]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_openCrateRequest.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_openCrateRequest.m_jsonClientData[1004]);
  `eh vector destructor iterator'(this->m_purchaseSkusResult, 0x48ui64, 8ui64, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusResult::`vbase destructor);
}

