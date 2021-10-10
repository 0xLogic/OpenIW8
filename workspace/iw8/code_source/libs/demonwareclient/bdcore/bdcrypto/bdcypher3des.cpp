/*
==============
bdCypher3Des::~bdCypher3Des
==============
*/

void __fastcall bdCypher3Des::~bdCypher3Des(bdCypher3Des *this)
{
  ??1bdCypher3Des@@UEAA@XZ(this);
}

/*
==============
bdCypher3Des::decrypt
==============
*/

bool __fastcall bdCypher3Des::decrypt(bdCypher3Des *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  return ?decrypt@bdCypher3Des@@UEAA_NPEBE0PEAEI@Z(this, iv, cypherText, plainText, size);
}

/*
==============
bdCypher3Des::bdCypher3Des
==============
*/

void __fastcall bdCypher3Des::bdCypher3Des(bdCypher3Des *this)
{
  ??0bdCypher3Des@@QEAA@XZ(this);
}

/*
==============
bdCypher3Des::init
==============
*/

bool __fastcall bdCypher3Des::init(bdCypher3Des *this, const unsigned __int8 *key, unsigned int keySize)
{
  return ?init@bdCypher3Des@@UEAA_NPEBEI@Z(this, key, keySize);
}

/*
==============
bdCypher3Des::encrypt
==============
*/

bool __fastcall bdCypher3Des::encrypt(bdCypher3Des *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  return ?encrypt@bdCypher3Des@@UEAA_NPEBE0PEAEI@Z(this, iv, plainText, cypherText, size);
}

/*
==============
bdCypher3Des::bdCypher3Des
==============
*/
void bdCypher3Des::bdCypher3Des(bdCypher3Des *this)
{
  NTSTATUS v2; 

  bdCypher::bdCypher(this, 8u, BD_CYPHER_MODE_CBC);
  this->__vftable = (bdCypher3Des_vtbl *)&bdCypher3Des::`vftable';
  this->m_cypherKey = NULL;
  if ( !bdCypher3Des::s_provider && getBCryptProvider(&bdCypher3Des::s_provider, L"3DES", 0) >= 0 )
  {
    v2 = BCryptSetProperty_0(bdCypher3Des::s_provider, L"ChainingMode", (PUCHAR)L"ChainingModeCBC", 0x20u, 0);
    if ( v2 < 0 )
      logBCryptResult("bdCypher3DES", "BCryptSetProperty", v2);
  }
}

/*
==============
bdCypher3Des::~bdCypher3Des
==============
*/
void bdCypher3Des::~bdCypher3Des(bdCypher3Des *this)
{
  void *m_cypherKey; 
  NTSTATUS v3; 

  this->__vftable = (bdCypher3Des_vtbl *)&bdCypher3Des::`vftable';
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
  {
    v3 = BCryptDestroyKey_0(m_cypherKey);
    if ( v3 < 0 )
      logBCryptResult("bdCypher3DES", "BCryptDestroyKey", v3);
    this->m_cypherKey = NULL;
  }
  bdCypher::~bdCypher(this);
}

/*
==============
bdCypher3Des::decrypt
==============
*/
char bdCypher3Des::decrypt(bdCypher3Des *this, const unsigned __int8 *iv, const unsigned __int8 *cypherText, unsigned __int8 *plainText, unsigned int size)
{
  double v5; 
  void *m_cypherKey; 
  NTSTATUS v7; 
  ULONG v9; 
  double v10; 

  v5 = *(double *)iv;
  m_cypherKey = this->m_cypherKey;
  v9 = 0;
  v10 = v5;
  v7 = BCryptDecrypt_0(m_cypherKey, (PUCHAR)cypherText, size, NULL, (PUCHAR)&v10, 8u, plainText, size, &v9, 0);
  if ( v7 >= 0 )
    return 1;
  logBCryptResult("bdCypher3DES", "BCryptDecrypt", v7);
  return 0;
}

/*
==============
bdCypher3Des::encrypt
==============
*/
char bdCypher3Des::encrypt(bdCypher3Des *this, const unsigned __int8 *iv, const unsigned __int8 *plainText, unsigned __int8 *cypherText, unsigned int size)
{
  double v5; 
  void *m_cypherKey; 
  NTSTATUS v7; 
  ULONG v9; 
  double v10; 

  v5 = *(double *)iv;
  m_cypherKey = this->m_cypherKey;
  v9 = 0;
  v10 = v5;
  v7 = BCryptEncrypt_0(m_cypherKey, (PUCHAR)plainText, size, NULL, (PUCHAR)&v10, 8u, cypherText, size, &v9, 0);
  if ( v7 >= 0 )
    return 1;
  logBCryptResult("bdCypher3DES", "BCryptEncrypt", v7);
  return 0;
}

/*
==============
bdCypher3Des::init
==============
*/
char bdCypher3Des::init(bdCypher3Des *this, const unsigned __int8 *key, unsigned int keySize)
{
  void **p_m_cypherKey; 
  void *m_cypherKey; 
  NTSTATUS SymmetricKey_0; 

  p_m_cypherKey = &this->m_cypherKey;
  m_cypherKey = this->m_cypherKey;
  if ( m_cypherKey )
    BCryptDestroyKey_0(m_cypherKey);
  *p_m_cypherKey = NULL;
  if ( keySize == 24 )
  {
    SymmetricKey_0 = BCryptGenerateSymmetricKey_0(bdCypher3Des::s_provider, p_m_cypherKey, NULL, 0, (PUCHAR)key, 0x18u, 0);
    if ( SymmetricKey_0 < 0 )
    {
      logBCryptResult("bdCypher3DES", "BCryptGenerateSymmetricKey", SymmetricKey_0);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCypher3DES", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcrypto\\bdcypher3des.cpp", "bdCypher3Des::init", 0xCAu, "Cannot init 3DES cypher with key of size [%u], Key must be 24 bytes", keySize);
    return 0;
  }
}

