/*
==============
Online_Loot::~Online_Loot
==============
*/

void __fastcall Online_Loot::~Online_Loot(Online_Loot *this)
{
  ??1Online_Loot@@UEAA@XZ(this);
}

/*
==============
Online_Loot::~Online_Loot
==============
*/
void Online_Loot::~Online_Loot(Online_Loot *this)
{
  this->__vftable = (Online_Loot_vtbl *)&Online_Loot::`vftable';
  `eh vector destructor iterator'(this->m_responseObjects, 0xDC8ui64, 1ui64, (void (__fastcall *)(void *))bdObjectStoreErrorWrappedObject::~bdObjectStoreErrorWrappedObject);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_getContentCreatorListResponse.m_response.__vftable + 2));
  bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase(&this->m_getContentCreatorListResponse.m_response);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_getContentCreatorListResponse.m_response.gap1020);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&this->m_getContentCreatorListResponse.__vftable + 2));
  bdObjectStoreJSONResponseBase::~bdObjectStoreJSONResponseBase(&this->m_getContentCreatorListResponse);
  bdReferencable::~bdReferencable((bdReferencable *)this->m_getContentCreatorListResponse.gap2058);
  `eh vector destructor iterator'(this->m_achievementList, 0x70ui64, 0x28ui64, (void (__fastcall *)(void *))bdUserAchievement::`vbase destructor);
  `eh vector destructor iterator'(this->m_auditLogResult, 0x40ui64, 8ui64, (void (__fastcall *)(void *))bdMarketplaceAuditLogResult::`vbase destructor);
  `eh vector destructor iterator'(this->m_purchaseSkusResultv4, 0x20D8ui64, 8ui64, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusResultV4::`vbase destructor);
  `eh vector destructor iterator'(this->m_purchaseSkusResult, 0x48ui64, 8ui64, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusResult::`vbase destructor);
}

