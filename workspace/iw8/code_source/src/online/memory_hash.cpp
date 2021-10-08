/*
==============
MemoryHashInfo::OpenAsSHATomCrypt
==============
*/

int __fastcall MemoryHashInfo::OpenAsSHATomCrypt(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  return ?OpenAsSHATomCrypt@MemoryHashInfo@@QEAAH_KI0@Z(this, st, ln, key);
}

/*
==============
MemoryHashInfo::Cancel
==============
*/

int __fastcall MemoryHashInfo::Cancel(MemoryHashInfo *this)
{
  return ?Cancel@MemoryHashInfo@@QEAAHXZ(this);
}

/*
==============
MemoryHashInfo::StartFrame
==============
*/

void MemoryHashInfo::StartFrame(void)
{
  ?StartFrame@MemoryHashInfo@@SAXXZ();
}

/*
==============
MemoryHashInfo::RequestHash
==============
*/

MemoryHashInfo *__fastcall MemoryHashInfo::RequestHash()
{
  return ?RequestHash@MemoryHashInfo@@SAPEAU1@XZ();
}

/*
==============
MemoryHashInfo::OpenAsCRC32
==============
*/

int __fastcall MemoryHashInfo::OpenAsCRC32(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  return ?OpenAsCRC32@MemoryHashInfo@@QEAAH_KI0@Z(this, st, ln, key);
}

/*
==============
MemoryHashInfo::OpenAsMD4
==============
*/

int __fastcall MemoryHashInfo::OpenAsMD4(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  return ?OpenAsMD4@MemoryHashInfo@@QEAAH_KI0@Z(this, st, ln, key);
}

/*
==============
MemoryHashInfo::OpenAsCRC32Split
==============
*/

int __fastcall MemoryHashInfo::OpenAsCRC32Split(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  return ?OpenAsCRC32Split@MemoryHashInfo@@QEAAH_KI0@Z(this, st, ln, key);
}

/*
==============
MemoryHashInfo::OpenAs8WayProbe
==============
*/

int __fastcall MemoryHashInfo::OpenAs8WayProbe(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  return ?OpenAs8WayProbe@MemoryHashInfo@@QEAAH_KI0@Z(this, st, ln, key);
}

/*
==============
MemoryHashInfo::Continue
==============
*/

int __fastcall MemoryHashInfo::Continue(MemoryHashInfo *this)
{
  return ?Continue@MemoryHashInfo@@QEAAHXZ(this);
}

/*
==============
MemoryHashInfo::Complete
==============
*/

void __fastcall MemoryHashInfo::Complete(MemoryHashInfo *this, unsigned __int64 *resultptr)
{
  ?Complete@MemoryHashInfo@@QEAAXPEA_K@Z(this, resultptr);
}

/*
==============
MemoryHashInfo::Cancel
==============
*/
__int64 MemoryHashInfo::Cancel(MemoryHashInfo *this)
{
  this->state = 0i64;
  this->type = CT_TYPE_INVALID;
  return 1i64;
}

/*
==============
MemoryHashInfo::Complete
==============
*/
void MemoryHashInfo::Complete(MemoryHashInfo *this, unsigned __int64 *resultptr)
{
  unsigned __int64 v4; 
  challengeTest_t type; 
  unsigned __int64 state; 
  unsigned __int64 v7; 
  int v9; 
  __int64 v10[2]; 
  int v11; 

  _RDI = resultptr;
  if ( this->type == CT_TYPE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 552, ASSERT_TYPE_ASSERT, "(CT_TYPE_INVALID != GetType())", (const char *)&queryFormat, "CT_TYPE_INVALID != GetType()") )
    __debugbreak();
  v4 = __rdtsc();
  v9 = v4;
  type = this->type;
  if ( this->type > CT_TYPE_INVALID )
  {
    if ( type <= CT_TYPE_MD4 )
      goto LABEL_9;
    switch ( type )
    {
      case CT_TYPE_SHA_TOMCRYPT:
        if ( hash_descriptor[(__int64)libTomCryptSHA1Index].hashsize != 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 570, ASSERT_TYPE_ASSERT, "(20 == hash_descriptor[libTomCryptSHA1Index].hashsize)", (const char *)&queryFormat, "TOMCRYPT_SHA1_DIGEST_SIZE == hash_descriptor[libTomCryptSHA1Index].hashsize") )
          __debugbreak();
        v10[0] = 0i64;
        v10[1] = 0i64;
        v11 = 0;
        if ( libTomCryptSHA1Index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 574, ASSERT_TYPE_ASSERT, "(libTomCryptSHA1Index >= 0)", (const char *)&queryFormat, "libTomCryptSHA1Index >= 0") )
          __debugbreak();
        if ( hash_descriptor[(__int64)libTomCryptSHA1Index].done((Hash_state *)&this->48, (unsigned __int8 *)v10) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 582, ASSERT_TYPE_ASSERT, "(CRYPT_OK == intresult)", (const char *)&queryFormat, "CRYPT_OK == intresult") )
            __debugbreak();
        }
        else
        {
          __asm
          {
            vmovsd  xmm0, [rsp+78h+var_40]
            vmovsd  qword ptr [rdi], xmm0
          }
        }
        break;
      case CT_TYPE_8WAY:
        state = this->hashState.sha512.state[0];
        goto LABEL_10;
      case CT_TYPE_CRC32_SPLIT:
LABEL_9:
        state = this->state;
LABEL_10:
        *_RDI = state;
        break;
    }
  }
  v7 = __rdtsc();
  LODWORD(v7) = this->cumulativeProcessingTime - v9 + v7;
  this->type = CT_TYPE_INVALID;
  this->cumulativeProcessingTime = v7;
}

/*
==============
MemoryHashInfo::Continue
==============
*/
__int64 MemoryHashInfo::Continue(MemoryHashInfo *this)
{
  unsigned __int64 v2; 
  unsigned int length; 
  unsigned int position; 
  unsigned int blockSize; 
  unsigned int v6; 
  const unsigned __int8 *v7; 
  unsigned int v8; 
  unsigned __int64 state; 
  unsigned int v10; 
  unsigned __int64 i; 
  __int64 v12; 
  __int64 v13; 
  unsigned int index; 
  unsigned __int64 v15; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  int v22; 

  if ( this->type == CT_TYPE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 426, ASSERT_TYPE_ASSERT, "(CT_TYPE_INVALID != GetType())", (const char *)&queryFormat, "CT_TYPE_INVALID != GetType()") )
    __debugbreak();
  v2 = __rdtsc();
  length = this->length;
  v22 = v2;
  position = this->position;
  if ( position >= length )
    return 1i64;
  blockSize = length - position;
  if ( blockSize > this->blockSize )
    blockSize = this->blockSize;
  if ( !blockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 444, ASSERT_TYPE_ASSERT, "(ln > 0)", (const char *)&queryFormat, "ln > 0") )
    __debugbreak();
  v6 = this->position;
  v7 = (const unsigned __int8 *)(this->start + v6);
  v8 = 0;
  if ( this->type == CT_TYPE_CRC32 )
  {
    this->state = MemoryHash_GenerateCRC32Checksum((const unsigned __int8 *)(this->start + this->position), blockSize, this->state);
LABEL_41:
    this->position = v6 + blockSize;
    goto LABEL_42;
  }
  if ( this->type == CT_TYPE_MD4 )
  {
    v17 = blockSize;
    v18 = ~LODWORD(this->state);
    if ( blockSize )
    {
      do
      {
        v19 = *v7++;
        v18 = (v18 >> 8) ^ g_crc32Table[v19 ^ (unsigned __int8)v18];
        --v17;
      }
      while ( v17 );
    }
    this->state = ~v18;
    goto LABEL_41;
  }
  if ( this->type != CT_TYPE_SHA_TOMCRYPT )
  {
    if ( this->type == CT_TYPE_8WAY )
    {
      this->state = MemoryHash_GenerateCRC32Checksum((const unsigned __int8 *)(this->start + this->position), blockSize, this->state);
      this->position = v6 + blockSize;
      if ( v6 + blockSize > this->length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 487, ASSERT_TYPE_ASSERT, "(GetPosition() <= GetLength())", (const char *)&queryFormat, "GetPosition() <= GetLength()") )
        __debugbreak();
      v13 = this->length;
      if ( this->position == (_DWORD)v13 )
      {
        index = this->index;
        this->hashState.sha512.state[0] |= (unsigned __int64)(unsigned __int8)(LOBYTE(this->state) ^ BYTE1(this->state) ^ ((LODWORD(this->state) ^ (unsigned int)(this->state >> 8)) >> 16)) << (8 * (unsigned __int8)index);
        if ( index < 7 )
        {
          v15 = this->hashState.sha512.$54277655FF0D32820F5A007615C60E29::length;
          this->start += v13;
          this->state = v15;
          this->index = index + 1;
          this->position = 0;
        }
      }
      goto LABEL_42;
    }
    if ( this->type != CT_TYPE_CRC32_SPLIT )
    {
      LODWORD(v21) = this->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 507, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad hash type: %d\n", v21) )
        __debugbreak();
      goto LABEL_42;
    }
    state = this->state;
    v10 = blockSize;
    for ( i = HIDWORD(state); v10; ++v7 )
    {
      v12 = *v7;
      --v10;
      if ( ((unsigned __int8)v7 & 1) != 0 )
        LODWORD(i) = crc32_table[v12 ^ (unsigned __int8)i] ^ ((unsigned int)i >> 8);
      else
        LODWORD(state) = crc32_table[v12 ^ (unsigned __int8)state] ^ ((unsigned int)state >> 8);
    }
    this->state = (unsigned int)state | ((unsigned __int64)(unsigned int)i << 32);
    goto LABEL_41;
  }
  if ( libTomCryptSHA1Index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 470, ASSERT_TYPE_ASSERT, "(libTomCryptSHA1Index >= 0)", (const char *)&queryFormat, "libTomCryptSHA1Index >= 0") )
    __debugbreak();
  if ( hash_descriptor[(__int64)libTomCryptSHA1Index].process((Hash_state *)&this->48, v7, blockSize) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 475, ASSERT_TYPE_ASSERT, "(CRYPT_OK == intresult)", (const char *)&queryFormat, "CRYPT_OK == intresult") )
      __debugbreak();
    return 1i64;
  }
  this->position += blockSize;
LABEL_42:
  v20 = __rdtsc();
  this->cumulativeProcessingTime = this->cumulativeProcessingTime - v22 + v20;
  if ( this->position > this->length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 521, ASSERT_TYPE_ASSERT, "(GetPosition() <= GetLength())", (const char *)&queryFormat, "GetPosition() <= GetLength()") )
    __debugbreak();
  LOBYTE(v8) = this->position >= this->length;
  return v8;
}

/*
==============
MemoryHash_GenerateCRC32Checksum
==============
*/
__int64 MemoryHash_GenerateCRC32Checksum(const unsigned __int8 *data, int length, unsigned int key)
{
  __int64 v3; 

  for ( ; length; --length )
  {
    v3 = *data++;
    key = (key >> 8) ^ crc32_table[v3 ^ (unsigned __int8)key];
  }
  return key;
}

/*
==============
MemoryHashInfo::OpenAs8WayProbe
==============
*/
__int64 MemoryHashInfo::OpenAs8WayProbe(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  unsigned __int64 v8; 
  __int64 result; 

  if ( this->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 360, ASSERT_TYPE_ASSERT, "(GetType() == CT_TYPE_INVALID)", (const char *)&queryFormat, "GetType() == CT_TYPE_INVALID") )
    __debugbreak();
  v8 = __rdtsc();
  this->start = st;
  *(_QWORD *)&this->startProcessingTime = (unsigned int)v8;
  this->position = 0;
  this->state = key;
  this->hashState.sha512.$54277655FF0D32820F5A007615C60E29::length = key;
  this->hashState.sha512.state[0] = 0i64;
  result = 1i64;
  this->length = ln >> 3;
  this->type = CT_TYPE_8WAY;
  *(_QWORD *)&this->blockSize = 0x2000i64;
  return result;
}

/*
==============
MemoryHashInfo::OpenAsCRC32
==============
*/
__int64 MemoryHashInfo::OpenAsCRC32(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  unsigned __int64 v8; 
  __int64 result; 

  if ( this->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 234, ASSERT_TYPE_ASSERT, "(GetType() == CT_TYPE_INVALID)", (const char *)&queryFormat, "GetType() == CT_TYPE_INVALID") )
    __debugbreak();
  v8 = __rdtsc();
  this->start = st;
  this->startProcessingTime = v8;
  this->length = ln;
  this->cumulativeProcessingTime = 0;
  result = 1i64;
  this->type = CT_TYPE_CRC32;
  this->position = 0;
  this->blockSize = 0x2000;
  this->state = key;
  return result;
}

/*
==============
MemoryHashInfo::OpenAsCRC32Split
==============
*/
__int64 MemoryHashInfo::OpenAsCRC32Split(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  unsigned __int64 v8; 
  __int64 result; 

  if ( this->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 263, ASSERT_TYPE_ASSERT, "(GetType() == CT_TYPE_INVALID)", (const char *)&queryFormat, "GetType() == CT_TYPE_INVALID") )
    __debugbreak();
  v8 = __rdtsc();
  this->start = st;
  *(_QWORD *)&this->startProcessingTime = (unsigned int)v8;
  this->position = 0;
  result = 1i64;
  this->length = ln;
  this->type = CT_TYPE_CRC32_SPLIT;
  this->blockSize = 0x2000;
  this->state = key;
  return result;
}

/*
==============
MemoryHashInfo::OpenAsMD4
==============
*/
__int64 MemoryHashInfo::OpenAsMD4(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  unsigned __int64 v8; 
  __int64 result; 

  if ( this->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 288, ASSERT_TYPE_ASSERT, "(GetType() == CT_TYPE_INVALID)", (const char *)&queryFormat, "GetType() == CT_TYPE_INVALID") )
    __debugbreak();
  v8 = __rdtsc();
  this->start = st;
  *(_QWORD *)&this->startProcessingTime = (unsigned int)v8;
  this->position = 0;
  result = 1i64;
  this->length = ln;
  this->type = CT_TYPE_MD4;
  this->blockSize = 2048;
  this->state = key;
  return result;
}

/*
==============
MemoryHashInfo::OpenAsSHATomCrypt
==============
*/
__int64 MemoryHashInfo::OpenAsSHATomCrypt(MemoryHashInfo *this, unsigned __int64 st, unsigned int ln, unsigned __int64 key)
{
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int64 v10; 

  v10 = key;
  if ( libTomCryptSHA1Index < 0 )
  {
    libTomCryptSHA1Index = j_register_hash(&sha1_desc);
    if ( libTomCryptSHA1Index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 318, ASSERT_TYPE_ASSERT, "(libTomCryptSHA1Index >= 0)", (const char *)&queryFormat, "libTomCryptSHA1Index >= 0") )
      __debugbreak();
  }
  if ( this->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 322, ASSERT_TYPE_ASSERT, "(GetType() == CT_TYPE_INVALID)", (const char *)&queryFormat, "GetType() == CT_TYPE_INVALID") )
    __debugbreak();
  v7 = __rdtsc();
  this->start = st;
  *(_QWORD *)&this->startProcessingTime = (unsigned int)v7;
  this->state = v10;
  v8 = (__int64)libTomCryptSHA1Index << 7;
  this->type = CT_TYPE_SHA_TOMCRYPT;
  this->position = 0;
  this->length = ln;
  this->blockSize = 4096;
  if ( !(*(unsigned int (__fastcall **)($54277655FF0D32820F5A007615C60E29 *))((char *)&hash_descriptor[0].init + v8))(&this->48) && !hash_descriptor[(__int64)libTomCryptSHA1Index].process((Hash_state *)&this->48, (const unsigned __int8 *)&v10, 8u) )
    return 1i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\memory_hash.cpp", 343, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
    __debugbreak();
  this->type = CT_TYPE_INVALID;
  return 0i64;
}

/*
==============
MemoryHashInfo::RequestHash
==============
*/
MemoryHashInfo *MemoryHashInfo::RequestHash()
{
  int v0; 
  MemoryHashInfo *v1; 

  v0 = 0;
  v1 = s_hashInfos;
  while ( v1->type )
  {
    ++v0;
    if ( (__int64)++v1 >= (__int64)&unk_150A564F0 )
      return 0i64;
  }
  return &s_hashInfos[v0];
}

/*
==============
MemoryHashInfo::StartFrame
==============
*/
void MemoryHashInfo::StartFrame(void)
{
  ;
}

