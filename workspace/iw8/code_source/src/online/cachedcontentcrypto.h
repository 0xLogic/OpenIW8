/*
==============
CachedContentCrypto::~CachedContentCrypto
==============
*/

void __fastcall CachedContentCrypto::~CachedContentCrypto(CachedContentCrypto *this)
{
  ??1CachedContentCrypto@@UEAA@XZ(this);
}

/*
==============
CachedContentCrypto::~CachedContentCrypto
==============
*/
void CachedContentCrypto::~CachedContentCrypto(CachedContentCrypto *this)
{
  this->__vftable = (CachedContentCrypto_vtbl *)&CachedContentCrypto::`vftable';
  bdCypherAES::~bdCypherAES(&this->m_AESEncryptor);
}

