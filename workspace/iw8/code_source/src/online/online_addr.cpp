/*
==============
XNADDR::FromString
==============
*/

void __fastcall XNADDR::FromString(XNADDR *this, const char *data, int length)
{
  ?FromString@XNADDR@@QEAAXPEBDH@Z(this, data, length);
}

/*
==============
XNADDR::GetString
==============
*/

const char *__fastcall XNADDR::GetString(XNADDR *this)
{
  return ?GetString@XNADDR@@QEBAPEBDXZ(this);
}

/*
==============
XNADDR::IsDedicated
==============
*/

bool __fastcall XNADDR::IsDedicated(XNADDR *this)
{
  return ?IsDedicated@XNADDR@@QEBA_NXZ(this);
}

/*
==============
XNADDR::ToCommonAddr
==============
*/

bdReference<bdCommonAddr> *__fastcall XNADDR::ToCommonAddr(XNADDR *this, bdReference<bdCommonAddr> *result)
{
  return ?ToCommonAddr@XNADDR@@QEBA?AV?$bdReference@VbdCommonAddr@@@@XZ(this, result);
}

/*
==============
XNADDR::ToString
==============
*/

void __fastcall XNADDR::ToString(XNADDR *this, char *buffer)
{
  ?ToString@XNADDR@@QEBAXQEAD@Z(this, buffer);
}

/*
==============
XNADDR::IsNull
==============
*/

bool __fastcall XNADDR::IsNull(XNADDR *this)
{
  return ?IsNull@XNADDR@@QEBA_NXZ(this);
}

/*
==============
XNADDR::operator=
==============
*/

XNADDR *__fastcall XNADDR::operator=(XNADDR *this, const XNADDR *other)
{
  return ??4XNADDR@@QEAAAEAU0@AEBU0@@Z(this, other);
}

/*
==============
XNADDR::Clear
==============
*/

void __fastcall XNADDR::Clear(XNADDR *this)
{
  ?Clear@XNADDR@@QEAAXXZ(this);
}

/*
==============
XNADDR::operator!=
==============
*/

bool __fastcall XNADDR::operator!=(XNADDR *this, const XNADDR *other)
{
  return ??9XNADDR@@QEBA_NAEBU0@@Z(this, other);
}

/*
==============
XNADDR::operator==
==============
*/

bool __fastcall XNADDR::operator==(XNADDR *this, const XNADDR *other)
{
  return ??8XNADDR@@QEBA_NAEBU0@@Z(this, other);
}

/*
==============
XNADDR::FromString
==============
*/

void __fastcall XNADDR::FromString(XNADDR *this, char *data)
{
  ?FromString@XNADDR@@QEAAXQEAD@Z(this, data);
}

/*
==============
XNADDR::GetNatType
==============
*/

int __fastcall XNADDR::GetNatType(XNADDR *this)
{
  return ?GetNatType@XNADDR@@QEBAHXZ(this);
}

/*
==============
XNADDR::operator=
==============
*/
XNADDR *XNADDR::operator=(XNADDR *this, const XNADDR *other)
{
  *this = *other;
  return this;
}

/*
==============
XNADDR::operator==
==============
*/
bool XNADDR::operator==(XNADDR *this, const XNADDR *other)
{
  return memcmp_0(this, other, 0x54ui64) == 0;
}

/*
==============
XNADDR::operator!=
==============
*/
bool XNADDR::operator!=(XNADDR *this, const XNADDR *other)
{
  return memcmp_0(this, other, 0x54ui64) != 0;
}

/*
==============
XNADDR::Clear
==============
*/
void XNADDR::Clear(XNADDR *this)
{
  *this = NULL_ADDR;
}

/*
==============
XNADDR::FromString
==============
*/
void XNADDR::FromString(XNADDR *this, const char *data, int length)
{
  bdBinASCII::unhexlify(data, length, this->addrBuff, 0x54u);
}

/*
==============
XNADDR::FromString
==============
*/
void XNADDR::FromString(XNADDR *this, char *data)
{
  bdBinASCII::unhexlify(data, 0xA8u, this->addrBuff, 0x54u);
}

/*
==============
XNADDR::GetNatType
==============
*/
bdNATType XNADDR::GetNatType(XNADDR *this)
{
  bdReference<bdCommonAddr> *v1; 
  bdNATType NATType; 
  bdNATType v3; 
  bdReference<bdCommonAddr> result; 

  v1 = XNADDR::ToCommonAddr(this, &result);
  NATType = bdCommonAddr::getNATType(v1->m_ptr);
  v3 = NATType;
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
    {
      ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      return v3;
    }
  }
  return NATType;
}

/*
==============
XNADDR::GetString
==============
*/
const char *XNADDR::GetString(XNADDR *this)
{
  bdCommonAddr *v2; 
  bdCommonAddr *v3; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v5; 
  const char *result; 
  const char *v7; 
  bdReference<bdCommonAddr> commonAddr; 
  bdReference<bdCommonAddr> me; 

  v2 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  me.m_ptr = v2;
  if ( v2 )
  {
    bdCommonAddr::bdCommonAddr(v2);
    m_ptr = v3;
  }
  else
  {
    m_ptr = NULL;
  }
  commonAddr.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = commonAddr.m_ptr;
  }
  v5 = NET_GetLocalCommonAddr()->m_ptr;
  me.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  bdCommonAddr::deserialize(m_ptr, (bdReference<bdCommonAddr>)&me, this->addrBuff);
  result = dwCommonAddrToString(&commonAddr);
  v7 = result;
  if ( commonAddr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&commonAddr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( commonAddr.m_ptr )
    {
      ((void (__fastcall *)(bdCommonAddr *, __int64))commonAddr.m_ptr->~bdReferencable)(commonAddr.m_ptr, 1i64);
      return v7;
    }
  }
  return result;
}

/*
==============
XNADDR::IsDedicated
==============
*/
_BOOL8 XNADDR::IsDedicated(XNADDR *this)
{
  bool v1; 
  bdReference<bdCommonAddr> result; 

  v1 = XNADDR::ToCommonAddr(this, &result)->m_ptr->m_platformID == BD_PLATFORM_ID_SERVER;
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  return v1;
}

/*
==============
XNADDR::IsNull
==============
*/
bool XNADDR::IsNull(XNADDR *this)
{
  return memcmp_0(this, &NULL_ADDR, 0x54ui64) == 0;
}

/*
==============
XNADDR::ToCommonAddr
==============
*/
bdReference<bdCommonAddr> *XNADDR::ToCommonAddr(XNADDR *this, bdReference<bdCommonAddr> *result)
{
  const bdReference<bdCommonAddr> *LocalCommonAddr; 
  bdCommonAddr *v5; 
  bdCommonAddr *v6; 
  bdCommonAddr *v7; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> *v9; 
  bdReference<bdCommonAddr> me; 

  me.m_ptr = (bdCommonAddr *)result;
  LocalCommonAddr = NET_GetLocalCommonAddr();
  v5 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  me.m_ptr = v5;
  if ( v5 )
  {
    bdCommonAddr::bdCommonAddr(v5);
    v7 = v6;
  }
  else
  {
    v7 = NULL;
  }
  m_ptr = LocalCommonAddr->m_ptr;
  me.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( !bdCommonAddr::deserialize(v7, (bdReference<bdCommonAddr>)&me, this->addrBuff) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_addr.cpp", 64, ASSERT_TYPE_ASSERT, "(commonAddr->deserialize( localCommonAddr, addrBuff ) == true)", (const char *)&queryFormat, "commonAddr->deserialize( localCommonAddr, addrBuff ) == true", -2i64) )
    __debugbreak();
  result->m_ptr = v7;
  v9 = result;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  return v9;
}

/*
==============
XNADDR::ToString
==============
*/
void XNADDR::ToString(XNADDR *this, char *buffer)
{
  bdBinASCII::hexlify(this->addrBuff, 0x54u, buffer, 0xA9u);
}

