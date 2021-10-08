/*
==============
XUID::GetUniversalId
==============
*/

unsigned __int64 __fastcall XUID::GetUniversalId(XUID *this)
{
  return ?GetUniversalId@XUID@@QEBA_KXZ(this);
}

/*
==============
XUID::GetPlatformIdFromXuid
==============
*/

unsigned __int64 __fastcall XUID::GetPlatformIdFromXuid(const XUID xuid)
{
  return ?GetPlatformIdFromXuid@XUID@@SA_KU1@@Z(xuid);
}

/*
==============
XUID::operator=
==============
*/

XUID *__fastcall XUID::operator=(XUID *this, const XUID *xuid)
{
  return ??4XUID@@QEAAAEAU0@AEBU0@@Z(this, xuid);
}

/*
==============
XUID::ToDevString
==============
*/

const char *__fastcall XUID::ToDevString(XUID *this)
{
  return ?ToDevString@XUID@@QEBAPEBDXZ(this);
}

/*
==============
XUID::ToString
==============
*/

const char *__fastcall XUID::ToString(XUID *this)
{
  return ?ToString@XUID@@QEBAPEBDXZ(this);
}

/*
==============
XUID::operator!=
==============
*/

bool __fastcall XUID::operator!=(XUID *this, const XUID *xuid)
{
  return ??9XUID@@QEBA_NAEBU0@@Z(this, xuid);
}

/*
==============
XUID::ToHexString
==============
*/

const char *__fastcall XUID::ToHexString(XUID *this)
{
  return ?ToHexString@XUID@@QEBAPEBDXZ(this);
}

/*
==============
XUID::XUID
==============
*/

void __fastcall XUID::XUID(XUID *this)
{
  ??0XUID@@QEAA@XZ(this);
}

/*
==============
XUID::operator==
==============
*/

bool __fastcall XUID::operator==(XUID *this, const XUID *xuid)
{
  return ??8XUID@@QEBA_NAEBU0@@Z(this, xuid);
}

/*
==============
XUID::NullXUID
==============
*/

XUID *__fastcall XUID::NullXUID(XUID *result)
{
  return ?NullXUID@XUID@@SA?AU1@XZ(result);
}

/*
==============
XUID::IsNull
==============
*/

bool __fastcall XUID::IsNull(XUID *this)
{
  return ?IsNull@XUID@@QEBA_NXZ(this);
}

/*
==============
XUID::FromUInt64
==============
*/

XUID *__fastcall XUID::FromUInt64(XUID *result, unsigned __int64 id)
{
  return ?FromUInt64@XUID@@SA?AU1@_K@Z(result, id);
}

/*
==============
XUID::FromMsg
==============
*/

XUID *__fastcall XUID::FromMsg(XUID *result, msg_t *msg)
{
  return ?FromMsg@XUID@@SA?AU1@PEAUmsg_t@@@Z(result, msg);
}

/*
==============
XUID::GetXUIDFromPlatformId
==============
*/

bool __fastcall XUID::GetXUIDFromPlatformId(const unsigned __int64 platformId, XUID *outXuid)
{
  return ?GetXUIDFromPlatformId@XUID@@SA_N_KAEAU1@@Z(platformId, outXuid);
}

/*
==============
XUID::ToUint64
==============
*/

unsigned __int64 __fastcall XUID::ToUint64(XUID *this)
{
  return ?ToUint64@XUID@@QEBA_KXZ(this);
}

/*
==============
XUID::FromUniversalId
==============
*/

XUID *__fastcall XUID::FromUniversalId(XUID *result, unsigned __int64 id)
{
  return ?FromUniversalId@XUID@@SA?AU1@_K@Z(result, id);
}

/*
==============
XUID::GetXUIDFromPlatformId
==============
*/

XUID *__fastcall XUID::GetXUIDFromPlatformId(XUID *result, const unsigned __int64 platformId)
{
  return ?GetXUIDFromPlatformId@XUID@@SA?AU1@_K@Z(result, platformId);
}

/*
==============
XUID::FromString
==============
*/

XUID *__fastcall XUID::FromString(XUID *result, const char *xuidString)
{
  return ?FromString@XUID@@SA?AU1@PEBD@Z(result, xuidString);
}

/*
==============
XUID::GetPlatformIdFromXuid
==============
*/

bool __fastcall XUID::GetPlatformIdFromXuid(const XUID xuid, unsigned __int64 *outPlatformId)
{
  return ?GetPlatformIdFromXuid@XUID@@SA_NU1@AEA_K@Z(xuid, outPlatformId);
}

/*
==============
XUID::Serialize
==============
*/

void __fastcall XUID::Serialize(XUID *this, msg_t *const msg)
{
  ?Serialize@XUID@@QEBAXQEAUmsg_t@@@Z(this, msg);
}

/*
==============
XUID::Deserialize
==============
*/

void __fastcall XUID::Deserialize(XUID *this, msg_t *const msg)
{
  ?Deserialize@XUID@@QEAAXQEAUmsg_t@@@Z(this, msg);
}

/*
==============
XUID::FromHexString
==============
*/

XUID *__fastcall XUID::FromHexString(XUID *result, const char *xuidString)
{
  return ?FromHexString@XUID@@SA?AU1@PEBD@Z(result, xuidString);
}

/*
==============
XUID::IsValid
==============
*/

bool __fastcall XUID::IsValid(XUID *this)
{
  return ?IsValid@XUID@@QEBA_NXZ(this);
}

/*
==============
XUID::RandomXUID
==============
*/

XUID *__fastcall XUID::RandomXUID(XUID *result)
{
  return ?RandomXUID@XUID@@SA?AU1@XZ(result);
}

/*
==============
XUID::XUID
==============
*/
void XUID::XUID(XUID *this)
{
  this->m_id = 0i64;
}

/*
==============
XUID::operator=
==============
*/
XUID *XUID::operator=(XUID *this, const XUID *xuid)
{
  this->m_id = xuid->m_id;
  return this;
}

/*
==============
XUID::operator==
==============
*/
bool XUID::operator==(XUID *this, const XUID *xuid)
{
  return xuid->m_id == this->m_id;
}

/*
==============
XUID::operator!=
==============
*/
bool XUID::operator!=(XUID *this, const XUID *xuid)
{
  return xuid->m_id != this->m_id;
}

/*
==============
XUID::Deserialize
==============
*/
void XUID::Deserialize(XUID *this, msg_t *const msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 163, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  this->m_id = MSG_ReadInt64(msg);
}

/*
==============
XUID::FromHexString
==============
*/
XUID *XUID::FromHexString(XUID *result, const char *xuidString)
{
  if ( !xuidString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 75, ASSERT_TYPE_ASSERT, "(xuidString)", (const char *)&queryFormat, "xuidString") )
    __debugbreak();
  result->m_id = 0i64;
  result->m_id = I_atoui64_hex(xuidString);
  return result;
}

/*
==============
XUID::FromMsg
==============
*/
XUID *XUID::FromMsg(XUID *result, msg_t *msg)
{
  result->m_id = 0i64;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 163, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  result->m_id = MSG_ReadInt64(msg);
  return result;
}

/*
==============
XUID::FromString
==============
*/
XUID *XUID::FromString(XUID *result, const char *xuidString)
{
  if ( !xuidString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 65, ASSERT_TYPE_ASSERT, "(xuidString)", (const char *)&queryFormat, "xuidString") )
    __debugbreak();
  result->m_id = 0i64;
  result->m_id = I_atoui64(xuidString);
  return result;
}

/*
==============
XUID::FromUInt64
==============
*/
XUID *XUID::FromUInt64(XUID *result, unsigned __int64 id)
{
  result->m_id = id;
  return result;
}

/*
==============
XUID::FromUniversalId
==============
*/
XUID *XUID::FromUniversalId(XUID *result, unsigned __int64 id)
{
  result->m_id = id;
  return result;
}

/*
==============
XUID::GetPlatformIdFromXuid
==============
*/
unsigned __int64 XUID::GetPlatformIdFromXuid(const XUID xuid)
{
  UserIdMap *Instance; 
  const char *v3; 
  const char *v4; 
  unsigned __int64 platformId; 

  platformId = 0i64;
  Instance = UserIdMap::GetInstance();
  if ( !UserIdMap::GetPlatformIdFromXuid(Instance, xuid, &platformId) )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_assert_on_userid_map_fail, "assert_on_userid_map_fail") )
    {
      v3 = j_va("%zu", xuid.m_id);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 193, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to map xuid (%s) to platformId.\n", v3) )
        __debugbreak();
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_print_on_userid_map_fail, "print_on_userid_map_fail") )
    {
      v4 = j_va("%zu", xuid.m_id);
      Com_PrintError(25, "[XUIDFAIL] Failed to map xuid (%s) to platformId.\n", v4);
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 172, ASSERT_TYPE_ASSERT, "(GetPlatformIdFromXuid( xuid, retVal ))", (const char *)&queryFormat, "GetPlatformIdFromXuid( xuid, retVal )") )
      __debugbreak();
  }
  return platformId;
}

/*
==============
XUID::GetPlatformIdFromXuid
==============
*/
_BOOL8 XUID::GetPlatformIdFromXuid(const XUID xuid, unsigned __int64 *outPlatformId)
{
  UserIdMap *Instance; 
  bool PlatformIdFromXuid; 
  const char *v6; 
  const char *v8; 

  Instance = UserIdMap::GetInstance();
  PlatformIdFromXuid = UserIdMap::GetPlatformIdFromXuid(Instance, xuid, outPlatformId);
  if ( !PlatformIdFromXuid )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_assert_on_userid_map_fail, "assert_on_userid_map_fail") )
    {
      v6 = j_va("%zu", xuid.m_id);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 193, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to map xuid (%s) to platformId.\n", v6) )
      {
        __debugbreak();
        return PlatformIdFromXuid;
      }
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_print_on_userid_map_fail, "print_on_userid_map_fail") )
    {
      v8 = j_va("%zu", xuid.m_id);
      Com_PrintError(25, "[XUIDFAIL] Failed to map xuid (%s) to platformId.\n", v8);
    }
  }
  return PlatformIdFromXuid;
}

/*
==============
XUID::GetUniversalId
==============
*/
unsigned __int64 XUID::GetUniversalId(XUID *this)
{
  return this->m_id;
}

/*
==============
XUID::GetXUIDFromPlatformId
==============
*/
XUID *XUID::GetXUIDFromPlatformId(XUID *result, const unsigned __int64 platformId)
{
  UserIdMap *Instance; 

  result->m_id = 0i64;
  Instance = UserIdMap::GetInstance();
  if ( !UserIdMap::GetXuidFromPlatformId(Instance, platformId, result) )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_assert_on_userid_map_fail, "assert_on_userid_map_fail") )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 218, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to map platformId (%zu) to xuid.\n", platformId) )
        __debugbreak();
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_print_on_userid_map_fail, "print_on_userid_map_fail") )
    {
      Com_PrintError(25, "[XUIDFAIL] Failed to map platformId (%zu) to xuid.\n", platformId);
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 180, ASSERT_TYPE_ASSERT, "(GetXUIDFromPlatformId( platformId, retVal ))", (const char *)&queryFormat, "GetXUIDFromPlatformId( platformId, retVal )") )
      __debugbreak();
  }
  return result;
}

/*
==============
XUID::GetXUIDFromPlatformId
==============
*/
_BOOL8 XUID::GetXUIDFromPlatformId(const unsigned __int64 platformId, XUID *outXuid)
{
  UserIdMap *Instance; 
  bool XuidFromPlatformId; 

  Instance = UserIdMap::GetInstance();
  XuidFromPlatformId = UserIdMap::GetXuidFromPlatformId(Instance, platformId, outXuid);
  if ( !XuidFromPlatformId )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_assert_on_userid_map_fail, "assert_on_userid_map_fail") )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 218, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to map platformId (%zu) to xuid.\n", platformId) )
      {
        __debugbreak();
        return XuidFromPlatformId;
      }
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_print_on_userid_map_fail, "print_on_userid_map_fail") )
    {
      Com_PrintError(25, "[XUIDFAIL] Failed to map platformId (%zu) to xuid.\n", platformId);
    }
  }
  return XuidFromPlatformId;
}

/*
==============
XUID::IsNull
==============
*/
bool XUID::IsNull(XUID *this)
{
  return this->m_id == 0;
}

/*
==============
XUID::IsValid
==============
*/
bool XUID::IsValid(XUID *this)
{
  return this->m_id != 0;
}

/*
==============
XUID::NullXUID
==============
*/
XUID *XUID::NullXUID(XUID *result)
{
  result->m_id = NULL_XUID.m_id;
  return result;
}

/*
==============
XUID::RandomXUID
==============
*/
XUID *XUID::RandomXUID(XUID *result)
{
  unsigned int *RandSeed; 
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  XUID *v6; 

  result->m_id = 0i64;
  RandSeed = GetRandSeed();
  v3 = *RandSeed;
  v4 = Sys_Microseconds();
  if ( v4 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v4, "unsigned", v4) )
    __debugbreak();
  *RandSeed = v4;
  v5 = I_irand(1, 0x7FFFFFFF);
  v6 = result;
  result->m_id = v5;
  *RandSeed = v3;
  return v6;
}

/*
==============
XUID::Serialize
==============
*/
void XUID::Serialize(XUID *this, msg_t *const msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\xuid.cpp", 156, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_WriteInt64(msg, this->m_id);
}

/*
==============
XUID::ToDevString
==============
*/
char *XUID::ToDevString(XUID *this)
{
  return j_va("%zu", this->m_id);
}

/*
==============
XUID::ToHexString
==============
*/
char *XUID::ToHexString(XUID *this)
{
  return j_va("%zx", this->m_id);
}

/*
==============
XUID::ToString
==============
*/
char *XUID::ToString(XUID *this)
{
  return j_va("%zu", this->m_id);
}

/*
==============
XUID::ToUint64
==============
*/
unsigned __int64 XUID::ToUint64(XUID *this)
{
  return this->m_id;
}

