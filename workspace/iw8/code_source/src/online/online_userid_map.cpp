/*
==============
UserIdMap::GetXuidFromPlatformId
==============
*/

bool __fastcall UserIdMap::GetXuidFromPlatformId(UserIdMap *this, const unsigned __int64 platformId, XUID *xuid)
{
  return ?GetXuidFromPlatformId@UserIdMap@@QEBA_N_KAEAUXUID@@@Z(this, platformId, xuid);
}

/*
==============
UserIdMap::GetPlatformIdFromXuid
==============
*/

bool __fastcall UserIdMap::GetPlatformIdFromXuid(UserIdMap *this, const XUID xuid, unsigned __int64 *platformId)
{
  return ?GetPlatformIdFromXuid@UserIdMap@@QEBA_NUXUID@@AEA_K@Z(this, xuid, platformId);
}

/*
==============
UserIdMapModuleCallback::RegisterCallbacks
==============
*/

void __fastcall UserIdMapModuleCallback::RegisterCallbacks(UserIdMapModuleCallback *this, bool (__fastcall *const xuidFromPlatform)(const unsigned __int64, XUID *), bool (__fastcall *const platformFromXuid)(const XUID, unsigned __int64 *))
{
  ?RegisterCallbacks@UserIdMapModuleCallback@@QEAAXQ6A_N_KAEAUXUID@@@ZQ6A_NU2@AEA_K@Z@Z(this, xuidFromPlatform, platformFromXuid);
}

/*
==============
UserIdMap::GetInstance
==============
*/

UserIdMap *__fastcall UserIdMap::GetInstance()
{
  return ?GetInstance@UserIdMap@@SAAEAV1@XZ();
}

/*
==============
UserIdMap::RegisterMapModule
==============
*/

void __fastcall UserIdMap::RegisterMapModule(UserIdMap *this, const UserIdMap::UserIdMapSystem system, UserIdMapModuleInterface *module)
{
  ?RegisterMapModule@UserIdMap@@QEAAXW4UserIdMapSystem@1@PEAVUserIdMapModuleInterface@@@Z(this, system, module);
}

/*
==============
UserIdMapModuleCallback::GetPlatformIdFromXuid
==============
*/

bool __fastcall UserIdMapModuleCallback::GetPlatformIdFromXuid(UserIdMapModuleCallback *this, const XUID xuid, unsigned __int64 *platformId)
{
  return ?GetPlatformIdFromXuid@UserIdMapModuleCallback@@UEBA_NUXUID@@AEA_K@Z(this, xuid, platformId);
}

/*
==============
UserIdMapModuleCallback::GetXuidFromPlatformId
==============
*/

bool __fastcall UserIdMapModuleCallback::GetXuidFromPlatformId(UserIdMapModuleCallback *this, const unsigned __int64 platformId, XUID *xuid)
{
  return ?GetXuidFromPlatformId@UserIdMapModuleCallback@@UEBA_N_KAEAUXUID@@@Z(this, platformId, xuid);
}

/*
==============
UserIdMap::UserIdMap
==============
*/

void __fastcall UserIdMap::UserIdMap(UserIdMap *this)
{
  ??0UserIdMap@@AEAA@XZ(this);
}

/*
==============
UserIdMap::UserIdMap
==============
*/
void UserIdMap::UserIdMap(UserIdMap *this)
{
  this->m_modules[0] = NULL;
  this->m_modules[1] = NULL;
  this->m_modules[2] = NULL;
  this->m_modules[3] = NULL;
  this->m_modules[4] = NULL;
}

/*
==============
CheckOnMainThread
==============
*/
void CheckOnMainThread(const char *functionName)
{
  if ( !Sys_IsMainThread() )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_assert_on_userid_map_fail, "assert_on_userid_map_fail") )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_map.cpp", 58, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s being called from non-main thread.\n", functionName) )
        __debugbreak();
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_print_on_userid_map_fail, "print_on_userid_map_fail") )
    {
      Com_PrintError(25, "%s being called from non-main thread.\n", functionName);
    }
  }
}

/*
==============
UserIdMap::GetInstance
==============
*/
UserIdMap *UserIdMap::GetInstance()
{
  return &UserIdMap::s_instance;
}

/*
==============
UserIdMap::GetPlatformIdFromXuid
==============
*/
char UserIdMap::GetPlatformIdFromXuid(UserIdMap *this, const XUID xuid, unsigned __int64 *platformId)
{
  int v6; 

  CheckOnMainThread("UserIdMap::GetPlatformIdFromXuid");
  v6 = 0;
  while ( !this->m_modules[0] || !((unsigned __int8 (__fastcall *)(UserIdMapModuleInterface *, unsigned __int64, unsigned __int64 *))this->m_modules[0]->GetPlatformIdFromXuid)(this->m_modules[0], xuid.m_id, platformId) )
  {
    ++v6;
    this = (UserIdMap *)((char *)this + 8);
    if ( v6 >= 5 )
      return 0;
  }
  return 1;
}

/*
==============
UserIdMapModuleCallback::GetPlatformIdFromXuid
==============
*/
__int64 UserIdMapModuleCallback::GetPlatformIdFromXuid(UserIdMapModuleCallback *this, const XUID xuid, unsigned __int64 *platformId)
{
  return ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64 *))this->m_platformFromXuidCallback)(xuid.m_id, platformId);
}

/*
==============
UserIdMap::GetXuidFromPlatformId
==============
*/
char UserIdMap::GetXuidFromPlatformId(UserIdMap *this, const unsigned __int64 platformId, XUID *xuid)
{
  int v6; 

  CheckOnMainThread("UserIdMap::GetXuidFromPlatformId");
  v6 = 0;
  while ( !this->m_modules[0] || !((__int64 (__fastcall *)(UserIdMapModuleInterface *, const unsigned __int64, XUID *))this->m_modules[0]->GetXuidFromPlatformId)(this->m_modules[0], platformId, xuid) )
  {
    ++v6;
    this = (UserIdMap *)((char *)this + 8);
    if ( v6 >= 5 )
      return 0;
  }
  return 1;
}

/*
==============
UserIdMapModuleCallback::GetXuidFromPlatformId
==============
*/
__int64 UserIdMapModuleCallback::GetXuidFromPlatformId(UserIdMapModuleCallback *this, const unsigned __int64 platformId, XUID *xuid)
{
  return ((__int64 (__fastcall *)(const unsigned __int64, XUID *))this->m_xuidFromPlatformCallback)(platformId, xuid);
}

/*
==============
UserIdMapModuleCallback::RegisterCallbacks
==============
*/
void UserIdMapModuleCallback::RegisterCallbacks(UserIdMapModuleCallback *this, bool (*const xuidFromPlatform)(const unsigned __int64, XUID *), bool (*const platformFromXuid)(const XUID, unsigned __int64 *))
{
  if ( this->m_xuidFromPlatformCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_map.cpp", 29, ASSERT_TYPE_SANITY, "( m_xuidFromPlatformCallback == nullptr )", (const char *)&queryFormat, "m_xuidFromPlatformCallback == nullptr") )
    __debugbreak();
  if ( this->m_platformFromXuidCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_map.cpp", 30, ASSERT_TYPE_SANITY, "( m_platformFromXuidCallback == nullptr )", (const char *)&queryFormat, "m_platformFromXuidCallback == nullptr") )
    __debugbreak();
  this->m_xuidFromPlatformCallback = xuidFromPlatform;
  this->m_platformFromXuidCallback = platformFromXuid;
}

/*
==============
UserIdMap::RegisterMapModule
==============
*/
void UserIdMap::RegisterMapModule(UserIdMap *this, const UserIdMap::UserIdMapSystem system, UserIdMapModuleInterface *module)
{
  __int64 v4; 
  int v6; 

  v4 = system;
  CheckOnMainThread("UserIdMap::RegisterMapModule");
  if ( this->m_modules[v4] )
  {
    v6 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_map.cpp", 105, ASSERT_TYPE_ASSERT, "( m_modules[systemIndex] == nullptr )", "UserIdMap system %u trying to be reregistered.", v6) )
      __debugbreak();
  }
  this->m_modules[v4] = module;
}

