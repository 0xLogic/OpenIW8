/*
==============
XSESSION_INFO::Serialize
==============
*/

int __fastcall XSESSION_INFO::Serialize(XSESSION_INFO *this, unsigned __int8 *buffer, const int size)
{
  return ?Serialize@XSESSION_INFO@@QEBAHPEAEH@Z(this, buffer, size);
}

/*
==============
XSESSION_INFO::IsValidSessionId
==============
*/

bool __fastcall XSESSION_INFO::IsValidSessionId(XSESSION_INFO *this)
{
  return ?IsValidSessionId@XSESSION_INFO@@QEBA_NXZ(this);
}

/*
==============
XSESSION_INFO::Deserialize
==============
*/

int __fastcall XSESSION_INFO::Deserialize(XSESSION_INFO *this, const unsigned __int8 *data, const int length)
{
  return ?Deserialize@XSESSION_INFO@@QEAAHPEBEH@Z(this, data, length);
}

/*
==============
XSESSION_INFO::XSESSION_INFO
==============
*/

void __fastcall XSESSION_INFO::XSESSION_INFO(XSESSION_INFO *this, const bdSecurityID *id, const bdSecurityKey *key, const XNADDR *addr)
{
  ??0XSESSION_INFO@@QEAA@AEBVbdSecurityID@@AEBVbdSecurityKey@@AEBUXNADDR@@@Z(this, id, key, addr);
}

/*
==============
XSESSION_INFO::operator=
==============
*/

XSESSION_INFO *__fastcall XSESSION_INFO::operator=(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return ??4XSESSION_INFO@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
XSESSION_INFO::GetSecurityId
==============
*/

const bdSecurityID *__fastcall XSESSION_INFO::GetSecurityId(XSESSION_INFO *this)
{
  return ?GetSecurityId@XSESSION_INFO@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
XSESSION_INFO::GetAddressString
==============
*/

const char *__fastcall XSESSION_INFO::GetAddressString(XSESSION_INFO *this)
{
  return ?GetAddressString@XSESSION_INFO@@QEBAPEBDXZ(this);
}

/*
==============
XSESSION_INFO::GetString
==============
*/

const char *__fastcall XSESSION_INFO::GetString(XSESSION_INFO *this)
{
  return ?GetString@XSESSION_INFO@@QEBAPEBDXZ(this);
}

/*
==============
XSESSION_INFO::Compare
==============
*/

bool __fastcall XSESSION_INFO::Compare(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return ?Compare@XSESSION_INFO@@AEBA_NAEBV1@@Z(this, other);
}

/*
==============
XSESSION_INFO::Set
==============
*/

void __fastcall XSESSION_INFO::Set(XSESSION_INFO *this, const XSECURITY_INFO *security, const XNADDR *addr)
{
  ?Set@XSESSION_INFO@@QEAAXAEBVXSECURITY_INFO@@AEBUXNADDR@@@Z(this, security, addr);
}

/*
==============
XSESSION_INFO::GetAddress
==============
*/

const XNADDR *__fastcall XSESSION_INFO::GetAddress(XSESSION_INFO *this)
{
  return ?GetAddress@XSESSION_INFO@@QEBAAEBUXNADDR@@XZ(this);
}

/*
==============
XSESSION_INFO::Deserialize
==============
*/

void __fastcall XSESSION_INFO::Deserialize(XSESSION_INFO *this, msg_t *msg)
{
  ?Deserialize@XSESSION_INFO@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
OnlineJoinInfo::Serialize
==============
*/

unsigned int __fastcall OnlineJoinInfo::Serialize(OnlineJoinInfo *this, unsigned __int8 *buffer, unsigned int sizeOfBuffer)
{
  return ?Serialize@OnlineJoinInfo@@QEBAIPEAEI@Z(this, buffer, sizeOfBuffer);
}

/*
==============
XSESSION_INFO::GetAddress
==============
*/

XNADDR *__fastcall XSESSION_INFO::GetAddress(XSESSION_INFO *this)
{
  return ?GetAddress@XSESSION_INFO@@QEAAAEAUXNADDR@@XZ(this);
}

/*
==============
XSESSION_INFO::GetSecurityKey
==============
*/

const bdSecurityKey *__fastcall XSESSION_INFO::GetSecurityKey(XSESSION_INFO *this)
{
  return ?GetSecurityKey@XSESSION_INFO@@QEBAAEBVbdSecurityKey@@XZ(this);
}

/*
==============
XSESSION_INFO::GetSecurityInfo
==============
*/

const XSECURITY_INFO *__fastcall XSESSION_INFO::GetSecurityInfo(XSESSION_INFO *this)
{
  return ?GetSecurityInfo@XSESSION_INFO@@QEBAAEBVXSECURITY_INFO@@XZ(this);
}

/*
==============
XSESSION_INFO::GetSecurityId
==============
*/

bdSecurityID *__fastcall XSESSION_INFO::GetSecurityId(XSESSION_INFO *this)
{
  return ?GetSecurityId@XSESSION_INFO@@QEAAAEAVbdSecurityID@@XZ(this);
}

/*
==============
XSESSION_INFO::Serialize
==============
*/

void __fastcall XSESSION_INFO::Serialize(XSESSION_INFO *this, msg_t *msg)
{
  ?Serialize@XSESSION_INFO@@QEBAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
XSESSION_INFO::GetSecurityInfo
==============
*/

XSECURITY_INFO *__fastcall XSESSION_INFO::GetSecurityInfo(XSESSION_INFO *this)
{
  return ?GetSecurityInfo@XSESSION_INFO@@QEAAAEAVXSECURITY_INFO@@XZ(this);
}

/*
==============
XSESSION_INFO::operator==
==============
*/

bool __fastcall XSESSION_INFO::operator==(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return ??8XSESSION_INFO@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
XSESSION_INFO::Clear
==============
*/

void __fastcall XSESSION_INFO::Clear(XSESSION_INFO *this)
{
  ?Clear@XSESSION_INFO@@QEAAXXZ(this);
}

/*
==============
OnlineJoinInfo::Deserialize
==============
*/

void __fastcall OnlineJoinInfo::Deserialize(OnlineJoinInfo *this, const unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  ?Deserialize@OnlineJoinInfo@@QEAAXPEBEI@Z(this, buffer, sizeOfBuffer);
}

/*
==============
XSESSION_INFO::operator!=
==============
*/

bool __fastcall XSESSION_INFO::operator!=(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return ??9XSESSION_INFO@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
XSESSION_INFO::IsLocalhost
==============
*/

bool __fastcall XSESSION_INFO::IsLocalhost(XSESSION_INFO *this)
{
  return ?IsLocalhost@XSESSION_INFO@@QEBA_NXZ(this);
}

/*
==============
XSESSION_INFO::XSESSION_INFO
==============
*/

void __fastcall XSESSION_INFO::XSESSION_INFO(XSESSION_INFO *this, const XSECURITY_INFO *security, const XNADDR *addr)
{
  ??0XSESSION_INFO@@QEAA@AEBVXSECURITY_INFO@@AEBUXNADDR@@@Z(this, security, addr);
}

/*
==============
XSESSION_INFO::GetSecurityKey
==============
*/

bdSecurityKey *__fastcall XSESSION_INFO::GetSecurityKey(XSESSION_INFO *this)
{
  return ?GetSecurityKey@XSESSION_INFO@@QEAAAEAVbdSecurityKey@@XZ(this);
}

/*
==============
XSESSION_INFO::XSESSION_INFO
==============
*/
void XSESSION_INFO::XSESSION_INFO(XSESSION_INFO *this, const XSECURITY_INFO *security, const XNADDR *addr)
{
  XSECURITY_INFO *p_m_security; 

  _RSI = addr;
  _RBP = this;
  p_m_security = &this->m_security;
  bdSecurityID::bdSecurityID(&this->m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key);
  XSECURITY_INFO::operator=(p_m_security, security);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups xmm0, xmmword ptr [rsi+40h]
    vmovups xmmword ptr [rbp+40h], xmm0
  }
  *(_DWORD *)&_RBP->m_address.addrBuff[80] = *(_DWORD *)&_RSI->addrBuff[80];
}

/*
==============
XSESSION_INFO::XSESSION_INFO
==============
*/
void XSESSION_INFO::XSESSION_INFO(XSESSION_INFO *this, const bdSecurityID *id, const bdSecurityKey *key, const XNADDR *addr)
{
  XSECURITY_INFO *p_m_security; 
  const XSECURITY_INFO *v9; 
  XSECURITY_INFO v13; 

  _RBP = addr;
  _R14 = this;
  p_m_security = &this->m_security;
  bdSecurityID::bdSecurityID(&this->m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key);
  XSECURITY_INFO::XSECURITY_INFO(&v13, id, key);
  XSECURITY_INFO::operator=(p_m_security, v9);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [r14], ymm0
    vmovups ymm1, ymmword ptr [rbp+20h]
    vmovups ymmword ptr [r14+20h], ymm1
    vmovups xmm0, xmmword ptr [rbp+40h]
    vmovups xmmword ptr [r14+40h], xmm0
  }
  *(_DWORD *)&_R14->m_address.addrBuff[80] = *(_DWORD *)&_RBP->addrBuff[80];
  bdSecurityKey::~bdSecurityKey(&v13.m_key);
  bdSecurityID::~bdSecurityID(&v13.m_id);
}

/*
==============
XSESSION_INFO::operator=
==============
*/
XSESSION_INFO *XSESSION_INFO::operator=(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  _RBX = other;
  _RDI = this;
  XSECURITY_INFO::operator=(&this->m_security, &other->m_security);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rdi+40h], xmm0
  }
  *(_DWORD *)&_RDI->m_address.addrBuff[80] = *(_DWORD *)&_RBX->m_address.addrBuff[80];
  return _RDI;
}

/*
==============
XSESSION_INFO::operator==
==============
*/

bool __fastcall XSESSION_INFO::operator==(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return XSESSION_INFO::Compare(this, other);
}

/*
==============
XSESSION_INFO::operator!=
==============
*/
bool XSESSION_INFO::operator!=(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  return !XSESSION_INFO::Compare(this, other);
}

/*
==============
XSESSION_INFO::Clear
==============
*/
void XSESSION_INFO::Clear(XSESSION_INFO *this)
{
  XSECURITY_INFO::Clear(&this->m_security);
  memset_0(this, 0, 0x54ui64);
}

/*
==============
XSESSION_INFO::Compare
==============
*/
bool XSESSION_INFO::Compare(XSESSION_INFO *this, const XSESSION_INFO *other)
{
  bdSecurityID *Id; 
  const bdSecurityID *v5; 

  Id = (bdSecurityID *)XSECURITY_INFO::GetId(&this->m_security);
  v5 = XSECURITY_INFO::GetId(&other->m_security);
  return bdSecurityID::operator==(Id, v5) && !memcmp_0(this, other, 0x54ui64);
}

/*
==============
OnlineJoinInfo::Deserialize
==============
*/
void OnlineJoinInfo::Deserialize(OnlineJoinInfo *this, const unsigned __int8 *buffer, const unsigned int sizeOfBuffer)
{
  int v8; 

  _RBX = buffer;
  _RDI = this;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 250, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  _RDI->gameMode[0] = *_RBX;
  _RDI->isInMatchmakingArea = _RBX[1] != 0;
  _RDI->clientPlatform[0] = _RBX[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+3]
    vmovsd  qword ptr [rdi+70h], xmm0
    vmovsd  xmm0, qword ptr [rbx+0Bh]
    vmovsd  qword ptr [rdi+78h], xmm0
  }
  _RDI->isJoinerInInvitersBlocklist = _RBX[19] != 0;
  if ( _RBX[20] )
  {
    v8 = sizeOfBuffer - 21;
    if ( v8 < 108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 166, ASSERT_TYPE_ASSERT, "(length >= Size())", (const char *)&queryFormat, "length >= Size()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+15h]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+35h]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovups xmm0, xmmword ptr [rbx+55h]
      vmovups xmmword ptr [rdi+40h], xmm0
    }
    *(_DWORD *)&_RDI->communicationInfo.session.m_address.addrBuff[80] = *(_DWORD *)(_RBX + 101);
    XSECURITY_INFO::Deserialize(&_RDI->communicationInfo.session.m_security, _RBX + 105, v8);
  }
}

/*
==============
XSESSION_INFO::Deserialize
==============
*/
__int64 XSESSION_INFO::Deserialize(XSESSION_INFO *this, const unsigned __int8 *data, const int length)
{
  _RBX = data;
  _RDI = this;
  if ( length < 108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 166, ASSERT_TYPE_ASSERT, "(length >= Size())", (const char *)&queryFormat, "length >= Size()") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rdi+40h], xmm0
  }
  *(_DWORD *)&_RDI->m_address.addrBuff[80] = *((_DWORD *)_RBX + 20);
  return (unsigned int)(XSECURITY_INFO::Deserialize(&_RDI->m_security, _RBX + 84, length) + 84);
}

/*
==============
XSESSION_INFO::Deserialize
==============
*/
void XSESSION_INFO::Deserialize(XSESSION_INFO *this, msg_t *msg)
{
  MSG_ReadData(msg, 84, this, 84);
  XSECURITY_INFO::Deserialize(&this->m_security, msg);
}

/*
==============
XSESSION_INFO::GetAddress
==============
*/
XSESSION_INFO *XSESSION_INFO::GetAddress(XSESSION_INFO *this)
{
  return this;
}

/*
==============
XSESSION_INFO::GetAddress
==============
*/
XSESSION_INFO *XSESSION_INFO::GetAddress(XSESSION_INFO *this)
{
  return this;
}

/*
==============
XSESSION_INFO::GetAddressString
==============
*/
char *XSESSION_INFO::GetAddressString(XSESSION_INFO *this)
{
  bdCommonAddr *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdAddr *PublicAddr; 
  bdAddr *LocalAddrByIndex; 
  char *v6; 
  bdReference<bdCommonAddr> me; 
  __int64 v9; 
  bdCommonAddr v10; 
  char str[24]; 
  char v12[24]; 

  v9 = -2i64;
  m_ptr = NET_GetLocalCommonAddr()->m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdCommonAddr::bdCommonAddr(&v10);
  me.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdCommonAddr::deserialize(&v10, (bdReference<bdCommonAddr>)&me, this->m_address.addrBuff);
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(&v10);
  bdAddr::toString(PublicAddr, str, 0x16ui64);
  LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex(&v10, 0);
  bdAddr::toString(LocalAddrByIndex, v12, 0x16ui64);
  v6 = j_va("%s / %s", v12, str);
  bdCommonAddr::~bdCommonAddr(&v10);
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v6;
}

/*
==============
XSESSION_INFO::GetSecurityId
==============
*/
bdSecurityID *XSESSION_INFO::GetSecurityId(XSESSION_INFO *this)
{
  return XSECURITY_INFO::GetId(&this->m_security);
}

/*
==============
XSESSION_INFO::GetSecurityId
==============
*/
const bdSecurityID *XSESSION_INFO::GetSecurityId(XSESSION_INFO *this)
{
  return XSECURITY_INFO::GetId(&this->m_security);
}

/*
==============
XSESSION_INFO::GetSecurityInfo
==============
*/
XSECURITY_INFO *XSESSION_INFO::GetSecurityInfo(XSESSION_INFO *this)
{
  return &this->m_security;
}

/*
==============
XSESSION_INFO::GetSecurityInfo
==============
*/
XSECURITY_INFO *XSESSION_INFO::GetSecurityInfo(XSESSION_INFO *this)
{
  return &this->m_security;
}

/*
==============
XSESSION_INFO::GetSecurityKey
==============
*/
bdSecurityKey *XSESSION_INFO::GetSecurityKey(XSESSION_INFO *this)
{
  return XSECURITY_INFO::GetKey(&this->m_security);
}

/*
==============
XSESSION_INFO::GetSecurityKey
==============
*/
const bdSecurityKey *XSESSION_INFO::GetSecurityKey(XSESSION_INFO *this)
{
  return XSECURITY_INFO::GetKey(&this->m_security);
}

/*
==============
XSESSION_INFO::GetString
==============
*/
char *XSESSION_INFO::GetString(XSESSION_INFO *this)
{
  const char *String; 
  bdCommonAddr *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdAddr *PublicAddr; 
  bdAddr *LocalAddrByIndex; 
  const char *v7; 
  bdReference<bdCommonAddr> me; 
  __int64 v10; 
  bdCommonAddr v11; 
  char str[24]; 
  char v13[24]; 
  char v14[128]; 
  char dest[128]; 

  v10 = -2i64;
  String = XSECURITY_INFO::GetString(&this->m_security);
  Core_strcpy(dest, 0x80ui64, String);
  m_ptr = NET_GetLocalCommonAddr()->m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdCommonAddr::bdCommonAddr(&v11);
  me.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  bdCommonAddr::deserialize(&v11, (bdReference<bdCommonAddr>)&me, this->m_address.addrBuff);
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(&v11);
  bdAddr::toString(PublicAddr, str, 0x16ui64);
  LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex(&v11, 0);
  bdAddr::toString(LocalAddrByIndex, v13, 0x16ui64);
  v7 = j_va("%s / %s", v13, str);
  bdCommonAddr::~bdCommonAddr(&v11);
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  Core_strcpy(v14, 0x80ui64, v7);
  return j_va("%s, %s", dest, v14);
}

/*
==============
XSESSION_INFO::IsLocalhost
==============
*/

bool __fastcall XSESSION_INFO::IsLocalhost(XSESSION_INFO *this)
{
  return NET_IsLocalXnaddr(&this->m_address);
}

/*
==============
XSESSION_INFO::IsValidSessionId
==============
*/
bool XSESSION_INFO::IsValidSessionId(XSESSION_INFO *this)
{
  bdSecurityID *Id; 

  Id = (bdSecurityID *)XSECURITY_INFO::GetId(&this->m_security);
  return bdSecurityID::IsValid(Id);
}

/*
==============
OnlineJoinInfo::Serialize
==============
*/
__int64 OnlineJoinInfo::Serialize(OnlineJoinInfo *this, unsigned __int8 *buffer, unsigned int sizeOfBuffer)
{
  bdSecurityID *Id; 
  signed int v9; 

  _RBX = buffer;
  _RDI = this;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 208, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  *_RBX = _RDI->gameMode[0];
  _RBX[1] = _RDI->isInMatchmakingArea;
  _RBX[2] = _RDI->clientPlatform[0];
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+70h]
    vmovsd  qword ptr [rbx+3], xmm0
    vmovsd  xmm0, qword ptr [rdi+78h]
    vmovsd  qword ptr [rbx+0Bh], xmm0
  }
  _RBX[19] = _RDI->isJoinerInInvitersBlocklist;
  Id = (bdSecurityID *)XSECURITY_INFO::GetId(&_RDI->communicationInfo.session.m_security);
  if ( bdSecurityID::IsValid(Id) )
  {
    v9 = sizeOfBuffer - 21;
    _RBX[20] = 1;
    if ( v9 < 108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 144, ASSERT_TYPE_ASSERT, "(size >= Size())", (const char *)&queryFormat, "size >= Size()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+15h], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rbx+35h], ymm1
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [rbx+55h], xmm0
    }
    *(_DWORD *)(_RBX + 101) = *(_DWORD *)&_RDI->communicationInfo.session.m_address.addrBuff[80];
    return (unsigned int)(XSECURITY_INFO::Serialize(&_RDI->communicationInfo.session.m_security, _RBX + 105, v9 - 84) + 105);
  }
  else
  {
    _RBX[20] = 0;
    return 21i64;
  }
}

/*
==============
XSESSION_INFO::Serialize
==============
*/
__int64 XSESSION_INFO::Serialize(XSESSION_INFO *this, unsigned __int8 *buffer, const int size)
{
  _RBX = buffer;
  _RDI = this;
  if ( size < 108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.cpp", 144, ASSERT_TYPE_ASSERT, "(size >= Size())", (const char *)&queryFormat, "size >= Size()") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbx+40h], xmm0
  }
  *((_DWORD *)_RBX + 20) = *(_DWORD *)&_RDI->m_address.addrBuff[80];
  return (unsigned int)(XSECURITY_INFO::Serialize(&_RDI->m_security, _RBX + 84, size - 84) + 84);
}

/*
==============
XSESSION_INFO::Serialize
==============
*/
void XSESSION_INFO::Serialize(XSESSION_INFO *this, msg_t *msg)
{
  MSG_WriteData(msg, this, 84);
  XSECURITY_INFO::Serialize(&this->m_security, msg);
}

/*
==============
XSESSION_INFO::Set
==============
*/
void XSESSION_INFO::Set(XSESSION_INFO *this, const XSECURITY_INFO *security, const XNADDR *addr)
{
  _RBX = this;
  _RDI = addr;
  XSECURITY_INFO::operator=(&this->m_security, security);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbx+40h], xmm0
  }
  *(_DWORD *)&_RBX->m_address.addrBuff[80] = *(_DWORD *)&_RDI->addrBuff[80];
}

