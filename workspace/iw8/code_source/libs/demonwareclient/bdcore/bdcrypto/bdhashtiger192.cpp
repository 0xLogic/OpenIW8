/*
==============
bdHashTiger192::~bdHashTiger192
==============
*/

void __fastcall bdHashTiger192::~bdHashTiger192(bdHashTiger192 *this)
{
  ??1bdHashTiger192@@UEAA@XZ(this);
}

/*
==============
bdHashTiger192::hash
==============
*/

bool __fastcall bdHashTiger192::hash(bdHashTiger192 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  return ?hash@bdHashTiger192@@UEAA_NPEBEIPEAEAEAI@Z(this, data, dataSize, result, resultSize);
}

/*
==============
bdHashTiger192::bdHashTiger192
==============
*/

void __fastcall bdHashTiger192::bdHashTiger192(bdHashTiger192 *this)
{
  ??0bdHashTiger192@@QEAA@XZ(this);
}

/*
==============
bdHashTiger192::bdHashTiger192
==============
*/
void bdHashTiger192::bdHashTiger192(bdHashTiger192 *this)
{
  bdHash::bdHash(this, BD_HASH_TIGER192, 0x18u);
  this->__vftable = (bdHashTiger192_vtbl *)&bdHashTiger192::`vftable';
}

/*
==============
bdHashTiger192::~bdHashTiger192
==============
*/
void bdHashTiger192::~bdHashTiger192(bdHashTiger192 *this)
{
  this->__vftable = (bdHashTiger192_vtbl *)&bdHashTiger192::`vftable';
  bdHash::~bdHash(this);
}

/*
==============
bdHashTiger192::hash
==============
*/
bool bdHashTiger192::hash(bdHashTiger192 *this, const unsigned __int8 *data, const unsigned int dataSize, unsigned __int8 *result, unsigned int *resultSize)
{
  unsigned int *v8; 
  int hash_id; 
  int v10; 
  bool v11; 

  bdHandleAssert(data != NULL, "(data != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x24u, "TIGER input cannot be NULL");
  bdHandleAssert(result != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x25u, "TIGER digest buffer cannot be NULL");
  v8 = resultSize;
  bdHandleAssert(*resultSize >= 0x18, "(resultSize >= BD_TIGER_HASH_SIZE)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x26u, "TIGER requires digest buffer >= 32 bytes");
  if ( data && result && *v8 >= 0x18 )
  {
    LODWORD(resultSize) = *v8;
    bdHandleAssert(bdCryptoConfig::s_hashTIGER192 != -1, "(s_hashTIGER192 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashTIGER192", 0x40u, "LTC hash TIGER not registered");
    hash_id = j_find_hash_id(tiger_desc.ID);
    bdHandleAssert(bdCryptoConfig::s_hashTIGER192 == hash_id, "(s_hashTIGER192 == find_hash_id(tiger_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashTIGER192", 0x41u, "LTC hash registry error");
    v10 = j_hash_memory(bdCryptoConfig::s_hashTIGER192, data, dataSize, result, (unsigned int *)&resultSize);
    if ( !v10 )
    {
      bdHandleAssert((_DWORD)resultSize == 24, "resultSz == BD_TIGER_HASH_SIZE", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x2Eu, "TIGER Hash digest size error");
      v11 = 1;
      *v8 = 24;
      return v11;
    }
    if ( v10 == 6 )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "hashtiger192", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x35u, "Unable to create tiger hash of less than 24 bytes in length!");
    else
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "hashtiger192", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x39u, "Unable to create TIGER hash.");
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "hashtiger192", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdhashtiger192.cpp", "bdHashTiger192::hash", 0x3Eu, "TIGER parameter error");
  }
  return 0;
}

