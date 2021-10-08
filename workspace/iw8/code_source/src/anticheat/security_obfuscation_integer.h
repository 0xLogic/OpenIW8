/*
==============
secure_uint8_t::secureInt8_Get
==============
*/

unsigned __int8 __fastcall secure_uint8_t::secureInt8_Get(secure_uint8_t *this)
{
  return ?secureInt8_Get@secure_uint8_t@@QEBAEXZ(this);
}

/*
==============
secure_uint32_3_t::secureInt32_3_Reset
==============
*/

void __fastcall secure_uint32_3_t::secureInt32_3_Reset(secure_uint32_3_t *this)
{
  ?secureInt32_3_Reset@secure_uint32_3_t@@QEAAXXZ(this);
}

/*
==============
secure_uint64_t::secure_uint64_t
==============
*/

void __fastcall secure_uint64_t::secure_uint64_t(secure_uint64_t *this)
{
  ??0secure_uint64_t@@QEAA@XZ(this);
}

/*
==============
secure_uint32_3_t::secureInt32_3_Set
==============
*/

void __fastcall secure_uint32_3_t::secureInt32_3_Set(secure_uint32_3_t *this, const SecureVec3 *inData)
{
  ?secureInt32_3_Set@secure_uint32_3_t@@QEAAXAEBUSecureVec3@@@Z(this, inData);
}

/*
==============
secure_uint8_t::secureInt8_Set
==============
*/

void __fastcall secure_uint8_t::secureInt8_Set(secure_uint8_t *this, const unsigned __int8 inData)
{
  ?secureInt8_Set@secure_uint8_t@@QEAAXE@Z(this, inData);
}

/*
==============
secure_uint32_3_t::secureInt32_3_Get
==============
*/

void __fastcall secure_uint32_3_t::secureInt32_3_Get(secure_uint32_3_t *this, SecureVec3 *outData)
{
  ?secureInt32_3_Get@secure_uint32_3_t@@QEBAXAEAUSecureVec3@@@Z(this, outData);
}

/*
==============
secure_uint64_t::secure_uint64_t
==============
*/
void secure_uint64_t::secure_uint64_t(secure_uint64_t *this)
{
  this->initialized = 0;
}

/*
==============
secure_uint32_3_t::secureInt32_3_Get
==============
*/
void secure_uint32_3_t::secureInt32_3_Get(secure_uint32_3_t *this, SecureVec3 *outData)
{
  if ( !this->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(outData->x) = this->data[0] ^ (((unsigned int)this ^ this->secureInt32_3_aab) * (((unsigned int)this ^ this->secureInt32_3_aab) + 2));
  LODWORD(outData->y) = this->data[1] ^ ((((_DWORD)this + 4) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 4) ^ this->secureInt32_3_aab) + 2));
  LODWORD(outData->z) = this->data[2] ^ ((((_DWORD)this + 8) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 8) ^ this->secureInt32_3_aab) + 2));
}

/*
==============
secure_uint32_3_t::secureInt32_3_Reset
==============
*/
void secure_uint32_3_t::secureInt32_3_Reset(secure_uint32_3_t *this)
{
  bdRandom v2; 
  _BYTE in[8]; 

  bdRandom::bdRandom(&v2);
  bdRandom::nextUBytes(&v2, in, 8);
  this->secureInt32_3_aab = *(_DWORD *)in;
  this->secureInt32_3_set_aab = *(_DWORD *)&in[4];
  memset(in, 0, sizeof(in));
  this->initialized = 1;
  this->secureInt32_3_aab += this->secureInt32_3_set_aab;
  this->data[0] = ((unsigned int)this ^ this->secureInt32_3_aab) * (((unsigned int)this ^ this->secureInt32_3_aab) + 2);
  this->data[1] = (((_DWORD)this + 4) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 4) ^ this->secureInt32_3_aab) + 2);
  this->data[2] = (((_DWORD)this + 8) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 8) ^ this->secureInt32_3_aab) + 2);
  bdRandom::~bdRandom(&v2);
}

/*
==============
secure_uint32_3_t::secureInt32_3_Set
==============
*/
void secure_uint32_3_t::secureInt32_3_Set(secure_uint32_3_t *this, const SecureVec3 *inData)
{
  if ( !this->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  this->secureInt32_3_aab += this->secureInt32_3_set_aab;
  this->data[0] = LODWORD(inData->x) ^ (((unsigned int)this ^ this->secureInt32_3_aab) * (((unsigned int)this ^ this->secureInt32_3_aab) + 2));
  this->data[1] = LODWORD(inData->y) ^ ((((_DWORD)this + 4) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 4) ^ this->secureInt32_3_aab) + 2));
  this->data[2] = LODWORD(inData->z) ^ ((((_DWORD)this + 8) ^ this->secureInt32_3_aab) * ((((_DWORD)this + 8) ^ this->secureInt32_3_aab) + 2));
}

/*
==============
secure_uint8_t::secureInt8_Get
==============
*/
unsigned __int8 secure_uint8_t::secureInt8_Get(secure_uint8_t *this)
{
  if ( !this->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 462, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  return this->data ^ (((unsigned __int8)this ^ LOBYTE(this->secureInt8_aab)) * (((unsigned __int8)this ^ LOBYTE(this->secureInt8_aab)) + 2)) ^ ((unsigned __int16)(((unsigned __int16)this ^ LOWORD(this->secureInt8_aab)) * (((unsigned __int16)this ^ LOWORD(this->secureInt8_aab)) + 2)) >> 8);
}

/*
==============
secure_uint8_t::secureInt8_Set
==============
*/
void secure_uint8_t::secureInt8_Set(secure_uint8_t *this, const unsigned __int8 inData)
{
  if ( !this->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  this->secureInt8_aab += this->secureInt8_set_aab;
  this->data = inData ^ (((unsigned __int8)this ^ LOBYTE(this->secureInt8_aab)) * (((unsigned __int8)this ^ LOBYTE(this->secureInt8_aab)) + 2)) ^ ((unsigned __int16)(((unsigned __int16)this ^ LOWORD(this->secureInt8_aab)) * (((unsigned __int16)this ^ LOWORD(this->secureInt8_aab)) + 2)) >> 8);
}

