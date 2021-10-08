/*
==============
Online_Commerce::~Online_Commerce
==============
*/

void __fastcall Online_Commerce::~Online_Commerce(Online_Commerce *this)
{
  ??1Online_Commerce@@UEAA@XZ(this);
}

/*
==============
Online_Commerce::~Online_Commerce
==============
*/
void Online_Commerce::~Online_Commerce(Online_Commerce *this)
{
  this->__vftable = (Online_Commerce_vtbl *)&Online_Commerce::`vftable';
  bdTaskResult::~bdTaskResult((bdTaskResult *)(&this->m_exchangeTransactionResult.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_exchangeTransactionResult.m_auditLogId[16]);
  bdStringResult::~bdStringResult((bdStringResult *)&this->m_exchangeTransactionId._bytes_20[16]);
  bdReferencable::~bdReferencable((bdReferencable *)&this->m_exchangeTransactionId._bytes_20[16]);
  WindowsDeleteString_0((HSTRING)this->m_currentExchangeProductID);
  `eh vector destructor iterator'(this->m_playerBalances, 0x38ui64, 0xA0ui64, (void (__fastcall *)(void *))bdMarketplaceCurrencyAmount::`vbase destructor);
  `eh vector destructor iterator'(this->m_playerCurrencyResponses, 0x3A8ui64, 8ui64, (void (__fastcall *)(void *))bdGetPlayerBalancesResponse::`vbase destructor);
  `eh vector destructor iterator'(this->m_playerCurrencyRequests, 0x38ui64, 8ui64, (void (__fastcall *)(void *))bdGetPlayerBalancesRequest::`vbase destructor);
}

