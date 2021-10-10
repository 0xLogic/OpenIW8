/*
==============
CachedContentCrypto::Hash_SHA256Done
==============
*/

bool __fastcall CachedContentCrypto::Hash_SHA256Done(CachedContentCrypto *this, cccHashValueSHA256_t *hash)
{
  return ?Hash_SHA256Done@CachedContentCrypto@@QEAA_NPEAUcccHashValueSHA256_t@@@Z(this, hash);
}

/*
==============
CachedContentCrypto::GetInstance
==============
*/

CachedContentCrypto *__fastcall CachedContentCrypto::GetInstance()
{
  return ?GetInstance@CachedContentCrypto@@SAAEAV1@XZ();
}

/*
==============
CachedContentCrypto::GetInstancePtr
==============
*/

CachedContentCrypto *__fastcall CachedContentCrypto::GetInstancePtr()
{
  return ?GetInstancePtr@CachedContentCrypto@@SAPEAV1@XZ();
}

/*
==============
CachedContentCrypto::Hash_SHA256Init
==============
*/

bool __fastcall CachedContentCrypto::Hash_SHA256Init(CachedContentCrypto *this)
{
  return ?Hash_SHA256Init@CachedContentCrypto@@QEAA_NXZ(this);
}

/*
==============
CachedContentCrypto::Cipher_AESEnd
==============
*/

void __fastcall CachedContentCrypto::Cipher_AESEnd(CachedContentCrypto *this)
{
  ?Cipher_AESEnd@CachedContentCrypto@@QEAAXXZ(this);
}

/*
==============
CachedContentCrypto::Cipher_AESDecryptStream
==============
*/

bool __fastcall CachedContentCrypto::Cipher_AESDecryptStream(CachedContentCrypto *this, const cccAESKey_t *inKey, CachedContentIOStreamBase *cipherStream, CachedContentIOStreamBase *plainStream, unsigned int expectedPlainStreamSize)
{
  return ?Cipher_AESDecryptStream@CachedContentCrypto@@QEAA_NAEBUcccAESKey_t@@PEAVCachedContentIOStreamBase@@1I@Z(this, inKey, cipherStream, plainStream, expectedPlainStreamSize);
}

/*
==============
CachedContentCrypto::RSAVerify_SHA256
==============
*/

bool __fastcall CachedContentCrypto::RSAVerify_SHA256(CachedContentCrypto *this, const cccHashValueSHA256_t *hash, const cccRSASignature_t *signature)
{
  return ?RSAVerify_SHA256@CachedContentCrypto@@QEAA_NPEBUcccHashValueSHA256_t@@PEBUcccRSASignature_t@@@Z(this, hash, signature);
}

/*
==============
CachedContentCrypto::Init
==============
*/

void __fastcall CachedContentCrypto::Init(CachedContentCrypto *this)
{
  ?Init@CachedContentCrypto@@QEAAXXZ(this);
}

/*
==============
CachedContentCrypto::Cipher_AESDecryptBlock
==============
*/

bool __fastcall CachedContentCrypto::Cipher_AESDecryptBlock(CachedContentCrypto *this, const unsigned __int8 *cipherText, unsigned __int8 *plainText, unsigned int bufferSize)
{
  return ?Cipher_AESDecryptBlock@CachedContentCrypto@@QEAA_NPEBEPEAEI@Z(this, cipherText, plainText, bufferSize);
}

/*
==============
CachedContentCrypto::Cipher_AESInit
==============
*/

bool __fastcall CachedContentCrypto::Cipher_AESInit(CachedContentCrypto *this, const cccAESKey_t *inKey)
{
  return ?Cipher_AESInit@CachedContentCrypto@@QEAA_NAEBUcccAESKey_t@@@Z(this, inKey);
}

/*
==============
CachedContentCrypto::CachedContentCrypto
==============
*/

void __fastcall CachedContentCrypto::CachedContentCrypto(CachedContentCrypto *this)
{
  ??0CachedContentCrypto@@AEAA@XZ(this);
}

/*
==============
CachedContentCrypto::Hash_SHA256Process
==============
*/

bool __fastcall CachedContentCrypto::Hash_SHA256Process(CachedContentCrypto *this, unsigned __int8 *data, unsigned int size)
{
  return ?Hash_SHA256Process@CachedContentCrypto@@QEAA_NPEAEI@Z(this, data, size);
}

/*
==============
CachedContentCrypto::CachedContentCrypto
==============
*/
void CachedContentCrypto::CachedContentCrypto(CachedContentCrypto *this)
{
  this->__vftable = (CachedContentCrypto_vtbl *)&CachedContentCrypto::`vftable';
  bdCypherAES::bdCypherAES(&this->m_AESEncryptor);
  *(_QWORD *)this->m_AESKey.keyBytes = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[8] = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[16] = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[24] = 0i64;
  *(_QWORD *)this->m_AESKey.intialVectorBytes = 0i64;
  *(_QWORD *)&this->m_AESKey.intialVectorBytes[8] = 0i64;
  this->m_initialize = 0;
}

/*
==============
CachedContentCrypto::Cipher_AESDecryptBlock
==============
*/
char CachedContentCrypto::Cipher_AESDecryptBlock(CachedContentCrypto *this, const unsigned __int8 *cipherText, unsigned __int8 *plainText, unsigned int bufferSize)
{
  Online_CachedContentStreamer *v8; 
  const char *v9; 
  Online_ErrorReporting *v10; 
  Online_CachedContentStreamer *Instance; 
  const char *v13; 
  Online_ErrorReporting *InstancePtr; 

  if ( !this->m_inUseCipher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 522, ASSERT_TYPE_ASSERT, "(m_inUseCipher)", (const char *)&queryFormat, "m_inUseCipher") )
    __debugbreak();
  if ( !cipherText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 523, ASSERT_TYPE_ASSERT, "(cipherText)", (const char *)&queryFormat, "cipherText") )
    __debugbreak();
  if ( !plainText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 524, ASSERT_TYPE_ASSERT, "(plainText)", (const char *)&queryFormat, "plainText") )
    __debugbreak();
  if ( this->m_inUseCipher )
  {
    if ( this->m_AESEncryptor.decrypt(&this->m_AESEncryptor, this->m_AESKey.intialVectorBytes, cipherText, plainText, bufferSize) )
    {
      return 1;
    }
    else
    {
      Instance = Online_CachedContentStreamer::GetInstance();
      v13 = j_va("Cipher_AESDecryptBlock: failed\n");
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
        Com_Printf(25, "%s: %s", Instance->m_name, v13);
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)0x2000000, NULL);
      return 0;
    }
  }
  else
  {
    v8 = Online_CachedContentStreamer::GetInstance();
    v9 = j_va("Cipher_AESDecryptBlock: failed\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v8->ShowLogOutput(v8) )
      Com_Printf(25, "%s: %s", v8->m_name, v9);
    v10 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v10, (Online_Error_CAT_CCS_t)0x1000000, NULL);
    return 0;
  }
}

/*
==============
CachedContentCrypto::Cipher_AESDecryptStream
==============
*/
__int64 CachedContentCrypto::Cipher_AESDecryptStream(CachedContentCrypto *this, const cccAESKey_t *inKey, CachedContentIOStreamBase *cipherStream, CachedContentIOStreamBase *plainStream, unsigned int expectedPlainStreamSize)
{
  unsigned __int8 *m_ptr; 
  Online_CachedContentStreamer *Instance; 
  const char *v11; 
  Online_CachedContentStreamer *v12; 
  const char *v13; 
  Online_CachedContentStreamer *v14; 
  const char *v15; 
  Online_ErrorReporting *InstancePtr; 
  unsigned __int8 v17; 
  Online_CachedContentStreamer *v18; 
  const char *v19; 
  Online_ErrorReporting *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  Online_CachedContentStreamer *v25; 
  const char *v26; 
  Online_ErrorReporting *v27; 
  Online_CachedContentStreamer *v28; 
  const char *v29; 
  Online_ErrorReporting *v30; 
  Mem_LargeLocal v31; 
  Mem_LargeLocal v32; 
  unsigned int v33; 
  unsigned __int8 *cipherText; 

  Mem_LargeLocal::Mem_LargeLocal(&v32, 0x400ui64, "cccAESBuffer_t inputBufferAES");
  cipherText = (unsigned __int8 *)v32.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v31, 0x400ui64, "cccAESBuffer_t outputBufferAES");
  m_ptr = (unsigned __int8 *)v31.m_ptr;
  if ( !cipherStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 554, ASSERT_TYPE_ASSERT, "(cipherStream)", (const char *)&queryFormat, "cipherStream", -2i64) )
    __debugbreak();
  if ( !plainStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 555, ASSERT_TYPE_ASSERT, "(plainStream)", (const char *)&queryFormat, "plainStream") )
    __debugbreak();
  if ( !cipherStream->IsValid(cipherStream, CCIOSModeRead) )
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v11 = j_va("CachedContentCrypto::Cipher_AESDecryptStream: invalid input stream.\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v11);
LABEL_21:
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
    v17 = 0;
    goto LABEL_40;
  }
  if ( !plainStream->IsValid(plainStream, CCIOSModeWrite) )
  {
    v12 = Online_CachedContentStreamer::GetInstance();
    v13 = j_va("CachedContentCrypto::Cipher_AESDecryptStream: invalid output stream.\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v12->ShowLogOutput(v12) )
      Com_Printf(25, "%s: %s", v12->m_name, v13);
    goto LABEL_21;
  }
  if ( !cipherStream->Size(cipherStream, &v33) )
  {
    v14 = Online_CachedContentStreamer::GetInstance();
    v15 = j_va("CachedContentCrypto::Cipher_AESDecryptStream: failed to get input stream size \n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v14->ShowLogOutput(v14) )
      Com_Printf(25, "%s: %s", v14->m_name, v15);
    goto LABEL_21;
  }
  if ( this->m_inUseCipher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 495, ASSERT_TYPE_ASSERT, "(!m_inUseCipher)", (const char *)&queryFormat, "!m_inUseCipher") )
    __debugbreak();
  this->m_inUseCipher = 1;
  *(__m256i *)this->m_AESKey.keyBytes = *(__m256i *)inKey->keyBytes;
  *(_OWORD *)this->m_AESKey.intialVectorBytes = *(_OWORD *)inKey->intialVectorBytes;
  if ( !this->m_AESEncryptor.init(&this->m_AESEncryptor, (const unsigned __int8 *)&this->m_AESKey, 32u) )
  {
    v18 = Online_CachedContentStreamer::GetInstance();
    v19 = j_va("Cipher_AESInit: Setup failed\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v18->ShowLogOutput(v18) )
      Com_Printf(25, "%s: %s", v18->m_name, v19);
    v20 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v20, (Online_Error_CAT_CCS_t)0x200000, NULL);
  }
  v21 = expectedPlainStreamSize;
  v22 = 0;
  if ( v33 )
  {
    while ( 1 )
    {
      v22 += cipherStream->Read(cipherStream, cipherText, 1024i64);
      if ( !CachedContentCrypto::Cipher_AESDecryptBlock(this, cipherText, m_ptr, 0x400u) )
        break;
      v23 = v21;
      if ( v21 > 0x400 )
        v23 = 1024;
      if ( plainStream->Write(plainStream, m_ptr, v23) != v23 )
      {
        v25 = Online_CachedContentStreamer::GetInstance();
        v26 = j_va("CachedContentCrypto::Cipher_AESDecryptStream: failed to write all of output. \n");
        OnlineSystem::DebugLog(v25, v26);
        v27 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v27, MOVEMENT, NULL);
        v17 = 0;
        goto LABEL_40;
      }
      v21 -= v23;
      if ( v22 >= v33 )
        goto LABEL_36;
    }
    v28 = Online_CachedContentStreamer::GetInstance();
    v29 = j_va("CachedContentCrypto::Cipher_AESDecryptStream:  error while encryting. \n");
    OnlineSystem::DebugLog(v28, v29);
    v30 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v30, MOVEMENT, NULL);
    v17 = 0;
  }
  else
  {
LABEL_36:
    if ( !this->m_inUseCipher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 513, ASSERT_TYPE_ASSERT, "(m_inUseCipher)", (const char *)&queryFormat, "m_inUseCipher") )
      __debugbreak();
    this->m_inUseCipher = 0;
    *(_QWORD *)this->m_AESKey.keyBytes = 0i64;
    *(_QWORD *)&this->m_AESKey.keyBytes[8] = 0i64;
    *(_QWORD *)&this->m_AESKey.keyBytes[16] = 0i64;
    *(_QWORD *)&this->m_AESKey.keyBytes[24] = 0i64;
    *(_QWORD *)this->m_AESKey.intialVectorBytes = 0i64;
    *(_QWORD *)&this->m_AESKey.intialVectorBytes[8] = 0i64;
    v17 = 1;
  }
LABEL_40:
  Mem_LargeLocal::~Mem_LargeLocal(&v31);
  Mem_LargeLocal::~Mem_LargeLocal(&v32);
  return v17;
}

/*
==============
CachedContentCrypto::Cipher_AESEnd
==============
*/
void CachedContentCrypto::Cipher_AESEnd(CachedContentCrypto *this)
{
  if ( !this->m_inUseCipher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 513, ASSERT_TYPE_ASSERT, "(m_inUseCipher)", (const char *)&queryFormat, "m_inUseCipher") )
    __debugbreak();
  this->m_inUseCipher = 0;
  *(_QWORD *)this->m_AESKey.keyBytes = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[8] = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[16] = 0i64;
  *(_QWORD *)&this->m_AESKey.keyBytes[24] = 0i64;
  *(_QWORD *)this->m_AESKey.intialVectorBytes = 0i64;
  *(_QWORD *)&this->m_AESKey.intialVectorBytes[8] = 0i64;
}

/*
==============
CachedContentCrypto::Cipher_AESInit
==============
*/
char CachedContentCrypto::Cipher_AESInit(CachedContentCrypto *this, const cccAESKey_t *inKey)
{
  bdCypherAES_vtbl *v4; 
  Online_CachedContentStreamer *Instance; 
  const char *v6; 
  Online_ErrorReporting *InstancePtr; 

  if ( this->m_inUseCipher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 495, ASSERT_TYPE_ASSERT, "(!m_inUseCipher)", (const char *)&queryFormat, "!m_inUseCipher") )
    __debugbreak();
  this->m_inUseCipher = 1;
  *(__m256i *)this->m_AESKey.keyBytes = *(__m256i *)inKey->keyBytes;
  v4 = this->m_AESEncryptor.__vftable;
  *(_OWORD *)this->m_AESKey.intialVectorBytes = *(_OWORD *)inKey->intialVectorBytes;
  if ( v4->init(&this->m_AESEncryptor, this->m_AESKey.keyBytes, 32u) )
    return 1;
  Instance = Online_CachedContentStreamer::GetInstance();
  v6 = j_va("Cipher_AESInit: Setup failed\n");
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
    Com_Printf(25, "%s: %s", Instance->m_name, v6);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)0x200000, NULL);
  return 0;
}

/*
==============
CachedContentCrypto::GetInstance
==============
*/
CachedContentCrypto *CachedContentCrypto::GetInstance()
{
  if ( !CachedContentCrypto::s_instance.m_initialize )
    CachedContentCrypto::Init(&CachedContentCrypto::s_instance);
  return &CachedContentCrypto::s_instance;
}

/*
==============
CachedContentCrypto::GetInstancePtr
==============
*/
CachedContentCrypto *CachedContentCrypto::GetInstancePtr()
{
  if ( !CachedContentCrypto::s_instance.m_initialize )
    CachedContentCrypto::Init(&CachedContentCrypto::s_instance);
  return &CachedContentCrypto::s_instance;
}

/*
==============
CachedContentCrypto::Hash_SHA256Done
==============
*/
char CachedContentCrypto::Hash_SHA256Done(CachedContentCrypto *this, cccHashValueSHA256_t *hash)
{
  unsigned int v4; 
  Online_ErrorReporting *InstancePtr; 
  char dest[16]; 

  if ( !this->m_inUseHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 155, ASSERT_TYPE_ASSERT, "(m_inUseHash)", (const char *)&queryFormat, "m_inUseHash") )
    __debugbreak();
  v4 = j_sha256_done(&this->m_hashState, hash->hashBytes);
  this->m_inUseHash = 0;
  if ( !v4 )
    return 1;
  Com_sprintf(dest, 0x10ui64, "%d", v4);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)2048, dest);
  return 0;
}

/*
==============
CachedContentCrypto::Hash_SHA256Init
==============
*/
char CachedContentCrypto::Hash_SHA256Init(CachedContentCrypto *this)
{
  unsigned int v2; 
  Online_ErrorReporting *InstancePtr; 
  char dest[16]; 

  if ( this->m_inUseHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 112, ASSERT_TYPE_ASSERT, "(!m_inUseHash)", (const char *)&queryFormat, "!m_inUseHash") )
    __debugbreak();
  this->m_inUseHash = 1;
  v2 = j_sha256_init(&this->m_hashState);
  if ( !v2 )
    return 1;
  Com_sprintf(dest, 0x10ui64, "%d", v2);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)512, dest);
  return 0;
}

/*
==============
CachedContentCrypto::Hash_SHA256Process
==============
*/
char CachedContentCrypto::Hash_SHA256Process(CachedContentCrypto *this, unsigned __int8 *data, unsigned int size)
{
  unsigned int v6; 
  Online_ErrorReporting *InstancePtr; 
  char dest[16]; 

  if ( !this->m_inUseHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 134, ASSERT_TYPE_ASSERT, "(m_inUseHash)", (const char *)&queryFormat, "m_inUseHash") )
    __debugbreak();
  v6 = j_sha256_process(&this->m_hashState, data, size);
  if ( !v6 )
    return 1;
  Com_sprintf(dest, 0x10ui64, "%d", v6);
  InstancePtr = Online_ErrorReporting::GetInstancePtr();
  Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)1024, dest);
  return 0;
}

/*
==============
CachedContentCrypto::Init
==============
*/
void CachedContentCrypto::Init(CachedContentCrypto *this)
{
  __m256i *v2; 
  __int64 v3; 
  ltc_math_descriptor *v4; 
  __m256i v5; 
  __int128 v6; 
  Online_ErrorReporting *InstancePtr; 

  v2 = (__m256i *)&ltc_mp;
  v3 = 3i64;
  v4 = &ltm_desc;
  do
  {
    v2 += 4;
    v5 = *(__m256i *)&v4->name;
    v6 = *(_OWORD *)&v4->count_lsb_bits;
    v4 = (ltc_math_descriptor *)((char *)v4 + 128);
    v2[-4] = v5;
    v2[-3] = *(__m256i *)&v4[-1].exptmod;
    v2[-2] = *(__m256i *)&v4[-1].ecc_ptdbl;
    *(_OWORD *)v2[-1].m256i_i8 = *(_OWORD *)&v4[-1].rsa_me;
    *(_OWORD *)&v2[-1].m256i_u64[2] = v6;
    --v3;
  }
  while ( v3 );
  *v2 = *(__m256i *)&v4->name;
  if ( j_register_hash(&sha256_desc) == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 77, ASSERT_TYPE_ASSERT, "(registerIndex != -1)", (const char *)&queryFormat, "registerIndex != -1") )
      __debugbreak();
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)256, NULL);
  }
  *(_WORD *)&this->m_inUseCipher = 256;
  this->m_inUseHash = 0;
}

/*
==============
CachedContentCrypto::RSAVerify_SHA256
==============
*/
char CachedContentCrypto::RSAVerify_SHA256(CachedContentCrypto *this, const cccHashValueSHA256_t *hash, const cccRSASignature_t *signature)
{
  int hash_idx; 
  Online_ErrorReporting *InstancePtr; 
  int v8; 
  unsigned int v9; 
  Online_ErrorReporting *v10; 
  Online_Error_CAT_CCS_t v11; 
  unsigned int v12; 
  int stat[4]; 
  Rsa_key key; 
  char dest[16]; 

  hash_idx = j_find_hash("sha256");
  if ( hash_idx == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 359, ASSERT_TYPE_ASSERT, "(hashIndex != -1)", (const char *)&queryFormat, "hashIndex != -1") )
      __debugbreak();
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_CCS_t)4096, NULL);
    return 0;
  }
  else
  {
    v8 = j_rsa_import(s_CCCPublicKey, 0x10Eu, &key);
    v9 = v8;
    if ( v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcrypto.cpp", 369, ASSERT_TYPE_ASSERT, "( ( result == CRYPT_OK ) )", "( result ) = %i", v8) )
        __debugbreak();
      Com_sprintf(dest, 0x10ui64, "%d", v9);
      v10 = Online_ErrorReporting::GetInstancePtr();
      v11 = 0x2000;
    }
    else
    {
      stat[0] = 0;
      v12 = j_rsa_verify_hash_ex(signature->signatureBytes, 0x100u, hash->hashBytes, 0x20u, 3, hash_idx, 8u, stat, &key);
      j_rsa_free(&key);
      if ( !v12 && stat[0] == 1 )
        return 1;
      Com_sprintf(dest, 0x10ui64, "%d", v12);
      v10 = Online_ErrorReporting::GetInstancePtr();
      v11 = 0x4000;
    }
    Online_ErrorReporting::ReportError(v10, v11, dest);
    return 0;
  }
}

