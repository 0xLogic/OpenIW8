/*
==============
BinkCrypt_ExtractFileName
==============
*/

void __fastcall BinkCrypt_ExtractFileName(const char *inName, char *outName, const int outNameMaxSize)
{
  ?BinkCrypt_ExtractFileName@@YAXPEBDPEADH@Z(inName, outName, outNameMaxSize);
}

/*
==============
BinkCrypt_Seek
==============
*/

void __fastcall BinkCrypt_Seek(const unsigned __int64 seekPos, BinkCryptFile *cryptFile)
{
  ?BinkCrypt_Seek@@YAX_KPEAUBinkCryptFile@@@Z(seekPos, cryptFile);
}

/*
==============
BinkCrypt_SetIVBytes
==============
*/

bool __fastcall BinkCrypt_SetIVBytes(const char *name, BinkCryptFile *cryptFile)
{
  return ?BinkCrypt_SetIVBytes@@YA_NPEBDPEAUBinkCryptFile@@@Z(name, cryptFile);
}

/*
==============
BinkCrypt_SetKeyBytes
==============
*/

bool __fastcall BinkCrypt_SetKeyBytes(const unsigned __int64 keyByte0, const unsigned __int64 keyByte8, const unsigned __int64 keyByte16, BinkCryptFile *cryptFile)
{
  return ?BinkCrypt_SetKeyBytes@@YA_N_K00PEAUBinkCryptFile@@@Z(keyByte0, keyByte8, keyByte16, cryptFile);
}

/*
==============
BinkCrypt_Open
==============
*/

void __fastcall BinkCrypt_Open(BinkCryptFile *cryptFile)
{
  ?BinkCrypt_Open@@YAXPEAUBinkCryptFile@@@Z(cryptFile);
}

/*
==============
BinkCrypt_DecryptRead
==============
*/

void __fastcall BinkCrypt_DecryptRead(unsigned __int8 *buffer, const unsigned __int64 size, BinkCryptFile *cryptFile)
{
  ?BinkCrypt_DecryptRead@@YAXPEAE_KPEAUBinkCryptFile@@@Z(buffer, size, cryptFile);
}

/*
==============
BinkKey_ExtractKeyBytes
==============
*/

void __fastcall BinkKey_ExtractKeyBytes(const char *name, unsigned __int64 *keyByte0, unsigned __int64 *keyByte8, unsigned __int64 *keyByte16)
{
  ?BinkKey_ExtractKeyBytes@@YAXPEBDAEA_K11@Z(name, keyByte0, keyByte8, keyByte16);
}

/*
==============
BinkCrypt_Close
==============
*/

void __fastcall BinkCrypt_Close(BinkCryptFile *cryptFile)
{
  ?BinkCrypt_Close@@YAXPEAUBinkCryptFile@@@Z(cryptFile);
}

/*
==============
BinkCrypt_Close
==============
*/
void BinkCrypt_Close(BinkCryptFile *cryptFile)
{
  if ( cryptFile )
    j_ctr_done(&cryptFile->encryptionKey);
}

/*
==============
BinkCrypt_DecryptRead
==============
*/
void BinkCrypt_DecryptRead(unsigned __int8 *buffer, const unsigned __int64 size, BinkCryptFile *cryptFile)
{
  int v3; 
  int v4; 

  if ( cryptFile )
  {
    v3 = j_ctr_decrypt(buffer, buffer, size, &cryptFile->encryptionKey);
    if ( v3 )
    {
      v4 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\bink_encryption.cpp", 114, ASSERT_TYPE_ASSERT, "( ( result == CRYPT_OK ) )", "( result ) = %i", v4) )
        __debugbreak();
    }
  }
}

/*
==============
BinkCrypt_ExtractFileName
==============
*/
void BinkCrypt_ExtractFileName(const char *inName, char *outName, const int outNameMaxSize)
{
  char *v6; 
  char *v7; 
  char *v8; 
  char v9; 
  const char *v10; 
  int v11; 

  v6 = strchr_0(inName, 0);
  v7 = strchr_0(inName, 46);
  if ( v7 && v6 != v7 )
    v6 = v7;
  v8 = v6;
  if ( v6 != inName )
  {
    do
    {
      v9 = *(v8 - 1);
      v10 = v8 - 1;
      if ( v9 == 92 )
        break;
      if ( v9 == 47 )
        break;
      --v8;
    }
    while ( v10 != inName );
  }
  v11 = (_DWORD)v6 - (_DWORD)v8;
  if ( v11 >= outNameMaxSize )
    v11 = outNameMaxSize - 1;
  memcpy_0(outName, v8, v11);
  outName[v11] = 0;
}

/*
==============
BinkCrypt_Open
==============
*/
void BinkCrypt_Open(BinkCryptFile *cryptFile)
{
  symmetric_CTR *ctr; 
  unsigned __int8 *ivBytes; 
  unsigned __int8 *keyBytes; 
  int cipher; 
  int v5; 
  __int64 ctr_mode; 

  if ( cryptFile )
  {
    ctr = &cryptFile->encryptionKey;
    ivBytes = cryptFile->ivBytes;
    keyBytes = cryptFile->keyBytes;
    cipher = j_find_cipher("aes");
    v5 = j_ctr_start(cipher, ivBytes, keyBytes, 24, 0, 0, ctr);
    if ( v5 )
    {
      LODWORD(ctr_mode) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\bink_encryption.cpp", 93, ASSERT_TYPE_ASSERT, "( ( result == CRYPT_OK ) )", "( result ) = %i", ctr_mode) )
        __debugbreak();
    }
  }
}

/*
==============
BinkCrypt_Seek
==============
*/
void BinkCrypt_Seek(const unsigned __int64 seekPos, BinkCryptFile *cryptFile)
{
  unsigned __int64 blocklen; 
  BinkCryptFile *v3; 
  unsigned __int64 v7; 
  int cipher; 
  int v10; 
  int v11; 
  __int64 ctr_mode; 
  unsigned __int8 IV[16]; 

  if ( cryptFile )
  {
    blocklen = cryptFile->encryptionKey.blocklen;
    v3 = cryptFile;
    if ( (_DWORD)blocklen )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx+19h]
        vmovups xmmword ptr [rsp+78h+IV], xmm0
      }
      *(_QWORD *)&IV[8] = *((_QWORD *)&_RT0 + 1);
      v7 = seekPos / blocklen;
      __asm { vmovq   rax, xmm0 }
      *(_QWORD *)IV = v7 + _RAX;
      cipher = j_find_cipher("aes");
      v10 = j_ctr_start(cipher, IV, v3->keyBytes, 24, 0, 0, &v3->encryptionKey);
      if ( v10 )
      {
        LODWORD(ctr_mode) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\bink_encryption.cpp", 140, ASSERT_TYPE_ASSERT, "( ( result == CRYPT_OK ) )", "( result ) = %i", ctr_mode) )
          __debugbreak();
      }
      v11 = j_ctr_decrypt(IV, IV, seekPos % v3->encryptionKey.blocklen, &v3->encryptionKey);
      if ( v11 )
      {
        LODWORD(ctr_mode) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\bink_encryption.cpp", 147, ASSERT_TYPE_ASSERT, "( ( result == CRYPT_OK ) )", "( result ) = %i", ctr_mode) )
          __debugbreak();
      }
    }
  }
}

/*
==============
BinkCrypt_SetIVBytes
==============
*/
bool BinkCrypt_SetIVBytes(const char *name, BinkCryptFile *cryptFile)
{
  char *v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  bool result; 
  char outName[64]; 

  if ( !name || !cryptFile )
    return 0;
  BinkCrypt_ExtractFileName(name, outName, 64);
  v3 = outName;
  v4 = 0xCBF29CE484222325ui64;
  while ( 1 )
  {
    v5 = *v3;
    v6 = v5 + 32;
    if ( (unsigned __int8)(*v3 - 65) > 0x19u )
      v6 = *v3;
    v4 = 0x100000001B3i64 * (v6 ^ (unsigned __int64)v4);
    if ( !(_BYTE)v5 )
      break;
    ++v3;
  }
  *(_QWORD *)cryptFile->ivBytes = v4;
  result = 1;
  *(_QWORD *)&cryptFile->ivBytes[8] = v4;
  return result;
}

/*
==============
BinkCrypt_SetKeyBytes
==============
*/
bool BinkCrypt_SetKeyBytes(const unsigned __int64 keyByte0, const unsigned __int64 keyByte8, const unsigned __int64 keyByte16, BinkCryptFile *cryptFile)
{
  bool result; 

  if ( !cryptFile )
    return 0;
  *(_QWORD *)cryptFile->keyBytes = keyByte0;
  result = 1;
  *(_QWORD *)&cryptFile->keyBytes[8] = keyByte8;
  *(_QWORD *)&cryptFile->keyBytes[16] = keyByte16;
  return result;
}

/*
==============
BinkKey_ExtractKeyBytes
==============
*/
void BinkKey_ExtractKeyBytes(const char *name, unsigned __int64 *keyByte0, unsigned __int64 *keyByte8, unsigned __int64 *keyByte16)
{
  char *v8; 
  char *v9; 
  char *v10; 
  char v11; 
  const char *v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  char v21[64]; 

  v8 = strchr_0(name, 0);
  v9 = strchr_0(name, 46);
  if ( v9 && v8 != v9 )
    v8 = v9;
  v10 = v8;
  if ( v8 != name )
  {
    do
    {
      v11 = *(v10 - 1);
      v12 = v10 - 1;
      if ( v11 == 92 )
        break;
      if ( v11 == 47 )
        break;
      --v10;
    }
    while ( v12 != name );
  }
  v13 = (_DWORD)v8 - (_DWORD)v10;
  v14 = 63;
  if ( v13 < 64 )
    v14 = v13;
  v15 = v14;
  memcpy_0(v21, v10, v14);
  v16 = v21;
  v21[v15] = 0;
  v17 = 0xCBF29CE484222325ui64;
  while ( 1 )
  {
    v18 = *v16;
    v19 = v18 + 32;
    if ( (unsigned __int8)(*v16 - 65) > 0x19u )
      v19 = *v16;
    v17 = 0x100000001B3i64 * (v19 ^ v17);
    if ( !(_BYTE)v18 )
      break;
    ++v16;
  }
  *keyByte0 = *(_QWORD *)&s_BinkKey[v17 % 0x4A9];
  *keyByte8 = *(_QWORD *)&s_BinkKey[(unsigned int)(v17 >> 16) % 0x4A9];
  *keyByte16 = *(_QWORD *)&s_BinkKey[HIDWORD(v17) % 0x4A9];
  v20 = *(_QWORD *)&s_BinkKey[(unsigned int)(v17 >> 24) % 0x4A9];
  *keyByte0 ^= v20;
  *keyByte8 ^= v20;
  *keyByte16 ^= v20;
}

