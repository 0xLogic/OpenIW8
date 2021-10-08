/*
==============
bdCryptoConfig::getHashSHA256
==============
*/

int __fastcall bdCryptoConfig::getHashSHA256()
{
  return ?getHashSHA256@bdCryptoConfig@@SAHXZ();
}

/*
==============
bdCryptoConfig::getHashSHA1
==============
*/

int __fastcall bdCryptoConfig::getHashSHA1()
{
  return ?getHashSHA1@bdCryptoConfig@@SAHXZ();
}

/*
==============
bdCryptoConfig::getHashTIGER192
==============
*/

int __fastcall bdCryptoConfig::getHashTIGER192()
{
  return ?getHashTIGER192@bdCryptoConfig@@SAHXZ();
}

/*
==============
bdCryptoConfig::getHashSHA512
==============
*/

int __fastcall bdCryptoConfig::getHashSHA512()
{
  return ?getHashSHA512@bdCryptoConfig@@SAHXZ();
}

/*
==============
bdCryptoConfig::getHashSHA384
==============
*/

int __fastcall bdCryptoConfig::getHashSHA384()
{
  return ?getHashSHA384@bdCryptoConfig@@SAHXZ();
}

/*
==============
bdCryptoConfig::getHashSHA1
==============
*/
__int64 bdCryptoConfig::getHashSHA1()
{
  int hash_id; 

  bdHandleAssert(bdCryptoConfig::s_hashSHA1 != -1, "(s_hashSHA1 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA1", 0x24u, "LTC hash SHA1 not registered");
  hash_id = j_find_hash_id(sha1_desc.ID);
  bdHandleAssert(bdCryptoConfig::s_hashSHA1 == hash_id, "(s_hashSHA1 == find_hash_id(sha1_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA1", 0x25u, "LTC hash registry error");
  return (unsigned int)bdCryptoConfig::s_hashSHA1;
}

/*
==============
bdCryptoConfig::getHashSHA256
==============
*/
__int64 bdCryptoConfig::getHashSHA256()
{
  int hash_id; 

  bdHandleAssert(bdCryptoConfig::s_hashSHA256 != -1, "(s_hashSHA256 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA256", 0x2Bu, "LTC hash SHA256 not registered");
  hash_id = j_find_hash_id(sha256_desc.ID);
  bdHandleAssert(bdCryptoConfig::s_hashSHA256 == hash_id, "(s_hashSHA256 == find_hash_id(sha256_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA256", 0x2Cu, "LTC hash registry error");
  return (unsigned int)bdCryptoConfig::s_hashSHA256;
}

/*
==============
bdCryptoConfig::getHashSHA384
==============
*/
__int64 bdCryptoConfig::getHashSHA384()
{
  int hash_id; 

  bdHandleAssert(bdCryptoConfig::s_hashSHA384 != -1, "(s_hashSHA384 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA384", 0x32u, "LTC hash SHA384 not registered");
  hash_id = j_find_hash_id(sha384_desc.ID);
  bdHandleAssert(bdCryptoConfig::s_hashSHA384 == hash_id, "(s_hashSHA384 == find_hash_id(sha384_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA384", 0x33u, "LTC hash registry error");
  return (unsigned int)bdCryptoConfig::s_hashSHA384;
}

/*
==============
bdCryptoConfig::getHashSHA512
==============
*/
__int64 bdCryptoConfig::getHashSHA512()
{
  int hash_id; 

  bdHandleAssert(bdCryptoConfig::s_hashSHA512 != -1, "(s_hashSHA512 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA512", 0x39u, "LTC hash SHA512 not registered");
  hash_id = j_find_hash_id(sha512_desc.ID);
  bdHandleAssert(bdCryptoConfig::s_hashSHA512 == hash_id, "(s_hashSHA512 == find_hash_id(sha512_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashSHA512", 0x3Au, "LTC hash registry error");
  return (unsigned int)bdCryptoConfig::s_hashSHA512;
}

/*
==============
bdCryptoConfig::getHashTIGER192
==============
*/
__int64 bdCryptoConfig::getHashTIGER192()
{
  int hash_id; 

  bdHandleAssert(bdCryptoConfig::s_hashTIGER192 != -1, "(s_hashTIGER192 != BD_CRYPTO_UNDEFINED)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashTIGER192", 0x40u, "LTC hash TIGER not registered");
  hash_id = j_find_hash_id(tiger_desc.ID);
  bdHandleAssert(bdCryptoConfig::s_hashTIGER192 == hash_id, "(s_hashTIGER192 == find_hash_id(tiger_desc.ID))", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcryptoconfig.inl", "bdCryptoConfig::getHashTIGER192", 0x41u, "LTC hash registry error");
  return (unsigned int)bdCryptoConfig::s_hashTIGER192;
}

