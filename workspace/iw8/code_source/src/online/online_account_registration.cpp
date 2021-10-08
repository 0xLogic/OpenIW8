/*
==============
Online_AccountRegistration::SendFailureToLua
==============
*/

void __fastcall Online_AccountRegistration::SendFailureToLua(Online_AccountRegistration *this, const int controllerIndex, const char *eventHandlerName, const Online_AccountRegistration::AccountRegistrationErrorCode errorCode, const unsigned int detailErrorCode)
{
  ?SendFailureToLua@Online_AccountRegistration@@AEAAXHPEBDW4AccountRegistrationErrorCode@1@I@Z(this, controllerIndex, eventHandlerName, errorCode, detailErrorCode);
}

/*
==============
Online_AccountRegistration::CreateAnonymous
==============
*/

void __fastcall Online_AccountRegistration::CreateAnonymous(Online_AccountRegistration *this, const int controllerIndex)
{
  ?CreateAnonymous@Online_AccountRegistration@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AccountRegistration::RenameComplete
==============
*/

void __fastcall Online_AccountRegistration::RenameComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?RenameComplete@Online_AccountRegistration@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
Online_AccountRegistration::ChangeEmailComplete
==============
*/

void __fastcall Online_AccountRegistration::ChangeEmailComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?ChangeEmailComplete@Online_AccountRegistration@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
Online_AccountRegistration::GetInstancePtr
==============
*/

Online_AccountRegistration *__fastcall Online_AccountRegistration::GetInstancePtr()
{
  return ?GetInstancePtr@Online_AccountRegistration@@SAPEAV1@XZ();
}

/*
==============
Online_AccountRegistration::MapLoginErrorToLUIError
==============
*/

Online_AccountRegistration::AccountRegistrationErrorCode __fastcall Online_AccountRegistration::MapLoginErrorToLUIError(const unsigned int dwErrorCode)
{
  return ?MapLoginErrorToLUIError@Online_AccountRegistration@@CA?AW4AccountRegistrationErrorCode@1@I@Z(dwErrorCode);
}

/*
==============
Online_AccountRegistration::OnSignedOut
==============
*/

void __fastcall Online_AccountRegistration::OnSignedOut(Online_AccountRegistration *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_AccountRegistration@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_AccountRegistration::GetInstance
==============
*/

Online_AccountRegistration *__fastcall Online_AccountRegistration::GetInstance()
{
  return ?GetInstance@Online_AccountRegistration@@SAAEAV1@XZ();
}

/*
==============
Online_AccountRegistration::GetPendingRegistrationController
==============
*/

int __fastcall Online_AccountRegistration::GetPendingRegistrationController(Online_AccountRegistration *this)
{
  return ?GetPendingRegistrationController@Online_AccountRegistration@@QEBAHXZ(this);
}

/*
==============
Online_AccountRegistration::CheckUsername
==============
*/

bool __fastcall Online_AccountRegistration::CheckUsername(Online_AccountRegistration *this, const char *usernameString, int *firstIllegalByteIndex, const bool allowHash)
{
  return ?CheckUsername@Online_AccountRegistration@@QEAA_NPEBDPEAH_N@Z(this, usernameString, firstIllegalByteIndex, allowHash);
}

/*
==============
Online_AccountRegistration::UpgradeFromExisting
==============
*/

bool __fastcall Online_AccountRegistration::UpgradeFromExisting(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::LoginInfo *loginInfo)
{
  return ?UpgradeFromExisting@Online_AccountRegistration@@QEAA_NHAEBULoginInfo@1@@Z(this, controllerIndex, loginInfo);
}

/*
==============
Online_AccountRegistration::IsFullAccount
==============
*/

bool __fastcall Online_AccountRegistration::IsFullAccount(Online_AccountRegistration *this, const int controllerIndex)
{
  return ?IsFullAccount@Online_AccountRegistration@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_AccountRegistration::FillUnoAccountInfo
==============
*/

void __fastcall Online_AccountRegistration::FillUnoAccountInfo(const Online_AccountRegistration::CreateInfo *createInfo, bdUnoAccountInfo *unoAccountInfo)
{
  ?FillUnoAccountInfo@Online_AccountRegistration@@CAXAEBUCreateInfo@1@AEAVbdUnoAccountInfo@@@Z(createInfo, unoAccountInfo);
}

/*
==============
Online_AccountRegistration::StartRegistration
==============
*/

bool __fastcall Online_AccountRegistration::StartRegistration(Online_AccountRegistration *this, const int controllerIndex)
{
  return ?StartRegistration@Online_AccountRegistration@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_AccountRegistration::SanitizeUTF8String
==============
*/

void __fastcall Online_AccountRegistration::SanitizeUTF8String(const char *inString, char *outString, const unsigned int outStringSize)
{
  ?SanitizeUTF8String@Online_AccountRegistration@@SAXPEBDPEADI@Z(inString, outString, outStringSize);
}

/*
==============
Online_AccountRegistration::Cancel
==============
*/

void __fastcall Online_AccountRegistration::Cancel(Online_AccountRegistration *this, const int controllerIndex)
{
  ?Cancel@Online_AccountRegistration@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AccountRegistration::LoginExisting
==============
*/

void __fastcall Online_AccountRegistration::LoginExisting(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::LoginInfo *loginInfo)
{
  ?LoginExisting@Online_AccountRegistration@@QEAAXHAEBULoginInfo@1@@Z(this, controllerIndex, loginInfo);
}

/*
==============
Online_AccountRegistration::ChangeEmail
==============
*/

bool __fastcall Online_AccountRegistration::ChangeEmail(Online_AccountRegistration *this, const int controllerIndex, const char *newEmail)
{
  return ?ChangeEmail@Online_AccountRegistration@@QEAA_NHPEBD@Z(this, controllerIndex, newEmail);
}

/*
==============
Online_AccountRegistration::Rename
==============
*/

bool __fastcall Online_AccountRegistration::Rename(Online_AccountRegistration *this, const int controllerIndex, const char *newAccountName)
{
  return ?Rename@Online_AccountRegistration@@QEAA_NHPEBD@Z(this, controllerIndex, newAccountName);
}

/*
==============
Online_AccountRegistration::SendSuccessToLua
==============
*/

void __fastcall Online_AccountRegistration::SendSuccessToLua(Online_AccountRegistration *this, const int controllerIndex, const char *eventHandlerName)
{
  ?SendSuccessToLua@Online_AccountRegistration@@AEAAXHPEBD@Z(this, controllerIndex, eventHandlerName);
}

/*
==============
Online_AccountRegistration::OnSignedIn
==============
*/

void __fastcall Online_AccountRegistration::OnSignedIn(Online_AccountRegistration *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_AccountRegistration@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_AccountRegistration::Init
==============
*/

bool __fastcall Online_AccountRegistration::Init(Online_AccountRegistration *this)
{
  return ?Init@Online_AccountRegistration@@UEAA_NXZ(this);
}

/*
==============
Online_AccountRegistration::IsRegistering
==============
*/

bool __fastcall Online_AccountRegistration::IsRegistering(Online_AccountRegistration *this)
{
  return ?IsRegistering@Online_AccountRegistration@@QEBA_NXZ(this);
}

/*
==============
Online_AccountRegistration::Frame
==============
*/

void __fastcall Online_AccountRegistration::Frame(Online_AccountRegistration *this)
{
  ?Frame@Online_AccountRegistration@@UEAAXXZ(this);
}

/*
==============
Online_AccountRegistration::CreateFull
==============
*/

void __fastcall Online_AccountRegistration::CreateFull(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::CreateInfo *createInfo)
{
  ?CreateFull@Online_AccountRegistration@@QEAAXHAEBUCreateInfo@1@@Z(this, controllerIndex, createInfo);
}

/*
==============
Online_AccountRegistration::UpgradeToFull
==============
*/

bool __fastcall Online_AccountRegistration::UpgradeToFull(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::CreateInfo *createInfo)
{
  return ?UpgradeToFull@Online_AccountRegistration@@QEAA_NHAEBUCreateInfo@1@@Z(this, controllerIndex, createInfo);
}

/*
==============
Online_AccountRegistration::RegisterLuaFunctions
==============
*/

void __fastcall Online_AccountRegistration::RegisterLuaFunctions(Online_AccountRegistration *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_AccountRegistration@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_AccountRegistration::Init
==============
*/
char Online_AccountRegistration::Init(Online_AccountRegistration *this)
{
  Cmd_AddCommandInternal("accountreg_create_anonymous", TestCreateAnonymous, &stru_149F1C1C8);
  Cmd_AddCommandInternal("accountreg_login_existing", TestLoginExisting, &stru_149F1C1F8);
  Cmd_AddCommandInternal("accountreg_create_full", TestCreateFull, &stru_149F1C228);
  Cmd_AddCommandInternal("accountreg_upgrade_full", TestUpgradeFull, &stru_149F1C258);
  Cmd_AddCommandInternal("accountreg_upgrade_existing", TestUpgradeFromExisting, &stru_149F1C288);
  Cmd_AddCommandInternal("accountreg_rename", TestRename, &stru_149F1C2B8);
  Cmd_AddCommandInternal("accountreg_change_email", TestChangeEmail, &stru_149F1C2E8);
  Cmd_AddCommandInternal("accountreg_is_full", TestIsFull, &stru_149F1C318);
  Cmd_AddCommandInternal("accountreg_checkusername", TestCheckUsername, &stru_149F1C348);
  Cmd_AddCommandInternal("accountreg_sanitizeutf8", TestSanitizeUTF8, &stru_149F1C378);
  Cmd_AddCommandInternal("accountreg_delete_user", DeleteUnoAccount, &stru_149F1C3A8);
  return 1;
}

/*
==============
Online_AccountRegistration::Frame
==============
*/
void Online_AccountRegistration::Frame(Online_AccountRegistration *this)
{
  Online_AccountRegistration::RegistrationState m_registrationState; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginResult *Result; 
  unsigned int detailErrorCode; 
  Online_AccountRegistration::AccountRegistrationErrorCode v7; 
  bdEnableCrossplatformProgression::TaskStatus Status; 
  unsigned int ErrorCode; 
  const char *StatusMessage; 
  Online_AccountRegistration::AccountRegistrationErrorCode v11; 
  bdEnableCrossplatformProgression *m_crossPlatformProgression; 
  bdLoginResult *m_tempLoginResult; 
  bdUnoAccountInfo *m_tempAccountInfo; 

  if ( this->m_pendingRegistrationController != -1 )
  {
    m_registrationState = this->m_registrationState;
    if ( m_registrationState == SEARCHING )
    {
      Instance = DWServicesAccess::GetInstance();
      Login = DWServicesAccess::GetLogin(Instance, this->m_pendingRegistrationController);
      if ( DWLogin::isPending(Login) )
        return;
      if ( DWLogin::succeeded(Login) )
      {
        Online_AccountRegistration::SendSuccessToLua(this, this->m_pendingRegistrationController, "AccountRegistrationSuccess");
      }
      else if ( DWLogin::failed(Login) )
      {
        Result = (bdLoginResult *)DWLogin::getResult(Login);
        detailErrorCode = bdLoginResult::getTaskErrorCode(Result);
        v7 = Online_AccountRegistration::MapLoginErrorToLUIError(detailErrorCode);
        Online_AccountRegistration::SendFailureToLua(this, this->m_pendingRegistrationController, "AccountRegistrationFailure", v7, detailErrorCode);
      }
      else
      {
        Com_PrintError(25, "[LOGINREG] Registration is no longer pending but did not succeed or fail.  This should never happen.\n");
      }
      goto LABEL_24;
    }
    if ( m_registrationState == QOSING )
    {
      if ( !this->m_crossPlatformProgression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 821, ASSERT_TYPE_SANITY, "( m_crossPlatformProgression != nullptr )", (const char *)&queryFormat, "m_crossPlatformProgression != nullptr", -2i64) )
        __debugbreak();
      bdEnableCrossplatformProgression::pump(this->m_crossPlatformProgression);
      if ( !bdEnableCrossplatformProgression::isPending(this->m_crossPlatformProgression) )
      {
        Status = bdEnableCrossplatformProgression::getStatus(this->m_crossPlatformProgression);
        if ( Status == LOGIN_DELAY )
        {
          Com_Printf(25, "[LOGINREG] Enable CrossPlatform Progression succeeded.\n");
          Online_AccountRegistration::SendSuccessToLua(this, this->m_pendingRegistrationController, "AccountRegistrationSuccess");
        }
        else if ( Status == FIRST_PARTY_AUTHED )
        {
          ErrorCode = bdEnableCrossplatformProgression::getErrorCode(this->m_crossPlatformProgression);
          StatusMessage = bdEnableCrossplatformProgression::getStatusMessage(this->m_crossPlatformProgression);
          Com_PrintError(25, "[LOGINREG] Enable CrossPlatform Progression failed with (%u) %s.\n", ErrorCode, StatusMessage);
          v11 = Online_AccountRegistration::MapLoginErrorToLUIError(ErrorCode);
          Online_AccountRegistration::SendFailureToLua(this, this->m_pendingRegistrationController, "AccountRegistrationFailure", v11, ErrorCode);
        }
        m_crossPlatformProgression = this->m_crossPlatformProgression;
        if ( m_crossPlatformProgression )
        {
          bdEnableCrossplatformProgression::~bdEnableCrossplatformProgression(this->m_crossPlatformProgression);
          bdMemory::deallocate(m_crossPlatformProgression);
        }
        this->m_crossPlatformProgression = NULL;
        m_tempLoginResult = this->m_tempLoginResult;
        if ( m_tempLoginResult )
        {
          bdLoginResult::~bdLoginResult(this->m_tempLoginResult);
          bdMemory::deallocate(m_tempLoginResult);
          this->m_tempLoginResult = NULL;
        }
        else
        {
          m_tempAccountInfo = this->m_tempAccountInfo;
          if ( m_tempAccountInfo )
          {
            ((void (__fastcall *)(bdUnoAccountInfo *, __int64))m_tempAccountInfo->~bdSingleIdentityJSONDeserializable)(m_tempAccountInfo, 1i64);
            this->m_tempAccountInfo = NULL;
          }
        }
LABEL_24:
        this->m_registrationState = IDLE;
        this->m_pendingRegistrationController = -1;
      }
    }
  }
}

/*
==============
Online_AccountRegistration::OnSignedIn
==============
*/
void Online_AccountRegistration::OnSignedIn(Online_AccountRegistration *this, const int controllerIndex, GenericSignInState signinState)
{
  int m_pendingRegistrationController; 

  if ( signinState == SignedInToLocalClient )
  {
    m_pendingRegistrationController = this->m_pendingRegistrationController;
    if ( m_pendingRegistrationController != -1 && controllerIndex != m_pendingRegistrationController )
    {
      Live_DisconnectFromWebServices(m_pendingRegistrationController);
      this->m_pendingRegistrationController = -1;
    }
  }
}

/*
==============
Online_AccountRegistration::OnSignedOut
==============
*/
void Online_AccountRegistration::OnSignedOut(Online_AccountRegistration *this, const int controllerIndex, GenericSignOutState signOutState)
{
  int m_pendingRegistrationController; 

  m_pendingRegistrationController = this->m_pendingRegistrationController;
  if ( m_pendingRegistrationController != -1 && controllerIndex == m_pendingRegistrationController )
  {
    Live_DisconnectFromWebServices(m_pendingRegistrationController);
    this->m_pendingRegistrationController = -1;
  }
}

/*
==============
Online_AccountRegistration::RegisterLuaFunctions
==============
*/
void Online_AccountRegistration::RegisterLuaFunctions(Online_AccountRegistration *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "AccountRegistration", AccountRegistration_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_CoD_LuaCall_GetPendingRegistrationController
==============
*/
__int64 LUI_CoD_LuaCall_GetPendingRegistrationController(lua_State *const luaVM)
{
  int m_pendingRegistrationController; 
  unsigned int v3; 

  m_pendingRegistrationController = -1;
  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.GetPendingRegistrationController()");
  if ( !j_lua_gettop(luaVM) )
    m_pendingRegistrationController = Online_AccountRegistration::s_instance.m_pendingRegistrationController;
  j_lua_pushinteger(luaVM, m_pendingRegistrationController);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CreateAnonymous
==============
*/
__int64 LUI_CoD_LuaCall_CreateAnonymous(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.CreateAnonymous( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    Online_AccountRegistration::CreateAnonymous(&Online_AccountRegistration::s_instance, v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_LoginExisting
==============
*/
__int64 LUI_CoD_LuaCall_LoginExisting(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  unsigned int v6; 
  Online_AccountRegistration::LoginInfo loginInfo; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isstring(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.LoginExisting( <controllerIndex>, <email>, <username>, <password> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isstring(luaVM, 4) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    Core_strcpy(loginInfo.email, 0x100ui64, v3);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    Core_strcpy(loginInfo.username, 0x1Aui64, v4);
    v5 = j_lua_tolstring(luaVM, 4, NULL);
    Core_strcpy(loginInfo.password, 0x65ui64, v5);
    Online_AccountRegistration::LoginExisting(&Online_AccountRegistration::s_instance, v2, &loginInfo);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_CreateFull
==============
*/
__int64 LUI_CoD_LuaCall_CreateFull(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_CreateFull_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_Cancel
==============
*/
__int64 LUI_CoD_LuaCall_Cancel(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  unsigned int v6; 
  unsigned int v8; 
  int v9; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.Cancel( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = v2;
    if ( v2 >= 8 )
    {
      v9 = 8;
      v8 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 285, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( Online_AccountRegistration::s_instance.m_pendingRegistrationController == -1 || Online_AccountRegistration::s_instance.m_pendingRegistrationController != v3 )
    {
      Com_PrintError(25, "[LOGINREG] Attempting to cancel account registration when it is not pending on controller(%u).\n", v3);
    }
    else
    {
      Com_Printf(25, "[LOGINREG] Cancelling account registration for controller(%u).\n", v3);
      Instance = DWServicesAccess::GetInstance();
      Login = DWServicesAccess::GetLogin(Instance, v3);
      DWLogin::abort(Login);
      Online_AccountRegistration::SendFailureToLua(&Online_AccountRegistration::s_instance, v3, "AccountRegistrationFailure", CANCELLED, 0);
    }
    InviteJoinHSM::Handle_CancelInvitationAfterAccountRegistrationCancel(&g_invitationHSM);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetAccountInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetAccountInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bool v6; 
  bdLoginResult *v7; 
  lua_State *v8; 
  bdLoginResult *v9; 
  const char *Username; 
  unsigned int v11; 
  unsigned int v13; 
  int v14; 
  bdCrossPlatformAccountInfo result; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.GetAccountInfo( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = v2;
    if ( v2 >= 8 )
    {
      v14 = 8;
      v13 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 1014, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    j_lua_createtable(luaVM, 0, 0);
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, v3);
    v6 = 0;
    if ( DWLogin::succeeded(Login) )
    {
      v7 = (bdLoginResult *)DWLogin::getResult(Login);
      bdLoginResult::getCrossPlatformAccountInfo(v7, &result);
      v6 = 1;
      v8 = LUI_luaVM;
      v9 = (bdLoginResult *)DWLogin::getResult(Login);
      Username = bdLoginResult::getUsername(v9);
      LUI_SetTableString("username", Username, v8);
      LUI_SetTableString("email", result.m_email, LUI_luaVM);
      bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(&result);
    }
    LUI_SetTableBool("success", v6, LUI_luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetAutoFillInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetAutoFillInfo(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 
  char Dest[96]; 
  wchar_t LocaleName[88]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.GetAutoFillInfo( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      j_lua_tonumber(luaVM, 1);
      j_lua_createtable(luaVM, 0, 0);
      if ( GetUserDefaultLocaleName(LocaleName, 85) )
      {
        if ( wcstombs(Dest, LocaleName, 0x55ui64) )
        {
          v2 = I_strstr(Dest, "-");
          if ( v2 )
            LUI_SetTableString("countryCode", v2 + 1, luaVM);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsAutoRegistrationEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsAutoRegistrationEnabled(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 1081, ASSERT_TYPE_ASSERT, "(lua_gettop(luaVM) == 0)", (const char *)&queryFormat, "lua_gettop(luaVM) == 0") )
    __debugbreak();
  j_lua_pushboolean(LUI_luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetAutoRegistrationState
==============
*/
__int64 LUI_CoD_LuaCall_GetAutoRegistrationState(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 1094, ASSERT_TYPE_ASSERT, "(lua_gettop(luaVM) == 0)", (const char *)&queryFormat, "lua_gettop(luaVM) == 0") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UpgradeToFull
==============
*/
__int64 LUI_CoD_LuaCall_UpgradeToFull(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_UpgradeToFull_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_UpgradeFromExisting
==============
*/
__int64 LUI_CoD_LuaCall_UpgradeFromExisting(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  const char *v5; 
  unsigned int v6; 
  Online_AccountRegistration::LoginInfo loginInfo; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.UpgradeFromExisting( <controllerIndex>, <email>, <password> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    Core_strcpy(loginInfo.email, 0x100ui64, v4);
    v5 = j_lua_tolstring(luaVM, 3, NULL);
    Core_strcpy(loginInfo.password, 0x65ui64, v5);
    v2 = Online_AccountRegistration::UpgradeFromExisting(&Online_AccountRegistration::s_instance, v3, &loginInfo);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_RenameAccount
==============
*/
__int64 LUI_CoD_LuaCall_RenameAccount(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  unsigned int v5; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.RenameAccount( <controllerIndex>, <newName> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    v2 = Online_AccountRegistration::Rename(&Online_AccountRegistration::s_instance, v3, v4);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ChangeEmail
==============
*/
__int64 LUI_CoD_LuaCall_ChangeEmail(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  unsigned int v5; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.ChangeEmail( <controllerIndex>, <newEmail> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    v2 = Online_AccountRegistration::ChangeEmail(&Online_AccountRegistration::s_instance, v3, v4);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsFullAccount
==============
*/
__int64 LUI_CoD_LuaCall_IsFullAccount(lua_State *const luaVM)
{
  bool IsFullAccount; 
  int v3; 
  unsigned int v4; 

  IsFullAccount = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.IsFullAccount( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    IsFullAccount = Online_AccountRegistration::IsFullAccount(&Online_AccountRegistration::s_instance, v3);
  }
  j_lua_pushboolean(luaVM, IsFullAccount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_CheckUsernameString
==============
*/
__int64 LUI_CoD_LuaCall_CheckUsernameString(lua_State *const luaVM)
{
  int v1; 
  bool v3; 
  const char *v4; 
  bool v5; 
  bool v6; 
  unsigned int v7; 
  int firstIllegalByteIndex; 

  v1 = -1;
  firstIllegalByteIndex = -1;
  v3 = 0;
  if ( j_lua_gettop(luaVM) > 2 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.CheckUsernameString( <userName> )");
  if ( j_lua_gettop(luaVM) <= 2 && j_lua_isstring(luaVM, 1) )
  {
    v4 = j_lua_tolstring(luaVM, 1, NULL);
    v5 = j_lua_gettop(luaVM) == 2 && j_lua_toboolean(luaVM, 2) != 0;
    v6 = Online_AccountRegistration::CheckUsername(&Online_AccountRegistration::s_instance, v4, &firstIllegalByteIndex, v5);
    v1 = firstIllegalByteIndex;
    v3 = v6;
  }
  j_lua_createtable(luaVM, 0, 0);
  LUI_SetTableBool("legal", v3, LUI_luaVM);
  LUI_SetTableInt("illegalByteIndex", v1, LUI_luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SanitizeUTF8String
==============
*/
__int64 LUI_CoD_LuaCall_SanitizeUTF8String(lua_State *const luaVM)
{
  const char *v2; 
  unsigned int v3; 
  char outString[1024]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.SanitizeUTF8String( <string> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    Online_AccountRegistration::SanitizeUTF8String(v2, outString, 0x400u);
  }
  j_lua_pushstring(luaVM, outString);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetAccountAge
==============
*/
__int64 LUI_CoD_LuaCall_GetAccountAge(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetAccountAge_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
Online_AccountRegistration::Cancel
==============
*/
void Online_AccountRegistration::Cancel(Online_AccountRegistration *this, const int controllerIndex)
{
  int m_pendingRegistrationController; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 285, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  m_pendingRegistrationController = this->m_pendingRegistrationController;
  if ( m_pendingRegistrationController == -1 || m_pendingRegistrationController != controllerIndex )
  {
    Com_PrintError(25, "[LOGINREG] Attempting to cancel account registration when it is not pending on controller(%u).\n", (unsigned int)controllerIndex);
  }
  else
  {
    Com_Printf(25, "[LOGINREG] Cancelling account registration for controller(%u).\n", (unsigned int)controllerIndex);
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
    DWLogin::abort(Login);
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRegistrationFailure", CANCELLED, 0);
  }
}

/*
==============
Online_AccountRegistration::ChangeEmail
==============
*/
char Online_AccountRegistration::ChangeEmail(Online_AccountRegistration *this, const int controllerIndex, const char *newEmail)
{
  bdRemoteTask *v7; 
  bdUpgradeAnonUnoAccResponse *v8; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  unsigned __int64 v11; 
  unsigned __int64 UserID; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  DWServicesAccess *v14; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  TaskCreateRequest *v16; 
  bdRemoteTask *v17; 
  TaskManager *v18; 
  char *m_email; 
  unsigned __int64 v20; 
  char v21; 
  bdUpgradeAnonUnoAccResponse *m_changeEmailResponse; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v26; 
  TaskCreateResult pTaskCreateResult; 
  bdCrossPlatformAccountInfo v28; 
  bdUnoAccountInfo accountInfo; 
  bdUpgradeAnonUnoAccRequest request; 

  v26 = -2i64;
  if ( Live_UserIsGuest(controllerIndex) )
  {
    Com_PrintError(25, "[LOGINREG] Change email called with guest account for controller(%u)\n.", (unsigned int)controllerIndex);
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "ChangeEmailFailure", GUEST_ACCOUNT, 0);
    return 0;
  }
  else
  {
    bdUpgradeAnonUnoAccRequest::bdUpgradeAnonUnoAccRequest(&request);
    bdUnoAccountInfo::bdUnoAccountInfo(&accountInfo);
    if ( this->m_pendingRegistrationController != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 443, ASSERT_TYPE_SANITY, "( !IsRegistering() )", (const char *)&queryFormat, "!IsRegistering()") )
      __debugbreak();
    if ( this->m_changeEmailResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 444, ASSERT_TYPE_SANITY, "( m_changeEmailResponse == nullptr )", (const char *)&queryFormat, "m_changeEmailResponse == nullptr") )
      __debugbreak();
    v7 = (bdRemoteTask *)bdMemory::allocate(0x430ui64);
    result.m_ptr = v7;
    if ( v7 )
      bdUpgradeAnonUnoAccResponse::bdUpgradeAnonUnoAccResponse((bdUpgradeAnonUnoAccResponse *)v7);
    else
      v8 = NULL;
    this->m_changeEmailResponse = v8;
    Instance = DWServicesAccess::GetInstance();
    LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = Online_AccountRegistration::ChangeEmailComplete;
    pTaskCreateRequest.m_appData = this;
    bdHandleAssert(newEmail != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = -1i64;
    do
      ++v11;
    while ( newEmail[v11] );
    if ( v11 <= 0x100 )
      bdStrlcpy(accountInfo.m_email, newEmail, 0x100ui64);
    UserID = bdLoginResult::getUserID(LoginResult);
    bdUpgradeAnonUnoAccRequest::setUnoID(&request, UserID);
    CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(LoginResult);
    bdUpgradeAnonUnoAccRequest::setAuthToken(&request, CrossplayAccessInfo->m_accessToken);
    bdUpgradeAnonUnoAccRequest::setAccountInfo(&request, &accountInfo);
    v14 = DWServicesAccess::GetInstance();
    CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v14, controllerIndex);
    v16 = (TaskCreateRequest *)DWCrossPlatformIdentity::upgradeAnonAccToFull(CrossPlatformIdentity, &result, &request, this->m_changeEmailResponse);
    if ( v16 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v17 = *(bdRemoteTask **)&v16->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v17;
      if ( v17 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v18 = TaskManager::GetInstance(), TaskManager::CreateTask(v18, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      m_email = bdLoginResult::getCrossPlatformAccountInfo(LoginResult, &v28)->m_email;
      v20 = bdLoginResult::getUserID(LoginResult);
      Com_Printf(25, "[LOGINREG] Sending change emamil request for controller(%u), unoID(%zu), currentEmail(%s), to new email(%s).\n", (unsigned int)controllerIndex, v20, m_email, newEmail);
      bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(&v28);
      v21 = 1;
    }
    else
    {
      Com_PrintError(25, "[LOGINREG] Failed to send change email request for controller(%u).\n", (unsigned int)controllerIndex);
      m_changeEmailResponse = this->m_changeEmailResponse;
      if ( m_changeEmailResponse )
        ((void (__fastcall *)(bdUpgradeAnonUnoAccResponse *, __int64))m_changeEmailResponse->~bdRESTResponse)(m_changeEmailResponse, 1i64);
      v21 = 0;
    }
    pTaskCreateRequest.m_onCompletionCallback = NULL;
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_appSecondaryCallback = NULL;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    if ( pTaskCreateRequest.m_asyncInfo )
    {
      pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
      m_asyncInfo = NULL;
      pTaskCreateRequest.m_asyncInfo = NULL;
    }
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
      }
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
    bdUnoAccountInfo::~bdUnoAccountInfo(&accountInfo);
    bdUnoAccountInfo::~bdUnoAccountInfo(&request.m_accountInfo);
    bdRESTRequest::~bdRESTRequest(&request);
    return v21;
  }
}

/*
==============
Online_AccountRegistration::ChangeEmailComplete
==============
*/
void Online_AccountRegistration::ChangeEmailComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_AccountRegistration *m_appData; 
  bdUpgradeAnonUnoAccResponse *m_changeEmailResponse; 
  unsigned int ErrorCode; 
  Online_AccountRegistration::AccountRegistrationErrorCode v7; 
  bdUpgradeAnonUnoAccResponse *v8; 

  m_appData = (Online_AccountRegistration *)task->m_appData;
  if ( (Online_AccountRegistration *)(((unsigned __int64)&m_appData->__vftable + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 745, ASSERT_TYPE_SANITY, "( registration != nullptr )", (const char *)&queryFormat, "registration != nullptr") )
    __debugbreak();
  if ( !m_appData->m_changeEmailResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 746, ASSERT_TYPE_SANITY, "( registration->m_changeEmailResponse != nullptr )", (const char *)&queryFormat, "registration->m_changeEmailResponse != nullptr") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 768, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unhandled taskState.") )
        __debugbreak();
    }
    else
    {
      m_changeEmailResponse = m_appData->m_changeEmailResponse;
      ErrorCode = 0;
      if ( m_changeEmailResponse )
        ErrorCode = bdUpgradeAnonUnoAccResponse::getErrorCode(m_changeEmailResponse);
      v7 = Online_AccountRegistration::MapLoginErrorToLUIError(ErrorCode);
      Online_AccountRegistration::SendFailureToLua(m_appData, task->m_controllerIndex, "ChangeEmailFailure", v7, ErrorCode);
    }
  }
  else
  {
    Online_AccountRegistration::SendSuccessToLua(m_appData, task->m_controllerIndex, "ChangeEmailSuccess");
  }
  v8 = m_appData->m_changeEmailResponse;
  if ( v8 )
    ((void (__fastcall *)(bdUpgradeAnonUnoAccResponse *, __int64))v8->~bdRESTResponse)(v8, 1i64);
  m_appData->m_changeEmailResponse = NULL;
}

/*
==============
Online_AccountRegistration::CheckUsername
==============
*/
char Online_AccountRegistration::CheckUsername(Online_AccountRegistration *this, const char *usernameString, int *firstIllegalByteIndex, const bool allowHash)
{
  char v4; 
  int *v5; 
  int RowCount; 
  bool v9; 
  unsigned __int8 v10; 
  int v11; 
  const char *ColumnValueForRow; 
  const char *v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  const char *v18; 
  unsigned __int8 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  int v23; 
  int m_legalGlyphRangesLoaded; 
  unsigned __int8 v25; 
  StringTable *table; 
  int *v27; 
  bool v28; 

  v28 = allowHash;
  v27 = firstIllegalByteIndex;
  *firstIllegalByteIndex = -1;
  v4 = allowHash;
  v5 = firstIllegalByteIndex;
  if ( this->m_legalGlyphRangesLoaded >= 0 )
    goto LABEL_16;
  StringTable_GetAsset(GLYPH_RANGE_TABLE, (const StringTable **)&table);
  RowCount = StringTable_GetRowCount(table);
  if ( RowCount <= 64 )
  {
    v10 = 0;
    if ( RowCount <= 0 )
      goto LABEL_10;
    v11 = 0;
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(table, v11, 1);
      v13 = StringTable_GetColumnValueForRow(table, v11, 2);
      v14 = strtoul(ColumnValueForRow, NULL, 16);
      v15 = strtoul(v13, NULL, 16);
      if ( !v14 || !v15 )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 531, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Row %u in %s contains an invalid range, %s-%s.", v11, GLYPH_RANGE_TABLE, ColumnValueForRow, v13);
        goto LABEL_12;
      }
      v16 = v10++;
      v11 = v10;
      this->m_legalGlyphRanges[v16].start = v14;
      this->m_legalGlyphRanges[v16].end = v15;
    }
    while ( v10 < RowCount );
    v5 = v27;
LABEL_10:
    v4 = v28;
    this->m_legalGlyphRangesLoaded = v10;
    if ( (v10 & 0x80u) != 0 )
    {
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 544, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Username legal glyph table could not be loaded so username cannot be checked.\n");
      goto LABEL_12;
    }
LABEL_16:
    v18 = usernameString;
    if ( !*usernameString )
      return 1;
    while ( 1 )
    {
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 134, ASSERT_TYPE_ASSERT, "(utf8Stream)", (const char *)&queryFormat, "utf8Stream") )
        __debugbreak();
      v19 = *v18;
      if ( *v18 < 0 )
      {
        if ( (v19 & 0xE0) == 0xC0 )
        {
          v20 = v18[1] & 0x7F | ((v19 & 0x1F) << 6);
          if ( v20 < 0x80 )
            goto LABEL_44;
          v21 = 2i64;
        }
        else if ( (v19 & 0xF0) == 0xE0 )
        {
          v20 = v18[2] & 0x7F | ((v18[1] & 0x7F | ((v19 & 0xF) << 6)) << 6);
          if ( v20 - 2048 > 0xCFFF && v20 < 0xE000 )
            goto LABEL_44;
          v21 = 3i64;
        }
        else
        {
          if ( (v19 & 0xF8) != 0xF0 || (v20 = v18[3] & 0x7F | ((v18[2] & 0x7F | ((v18[1] & 0x7F | ((v19 & 7) << 6)) << 6)) << 6), v20 - 0x10000 > 0xFFFFE) )
          {
LABEL_44:
            *v5 = truncate_cast<int,__int64>(v18 - usernameString);
            Com_PrintError(25, "Could not parse usernameString %s into valid glyphs.\n", usernameString);
            return 0;
          }
          v21 = 4i64;
        }
      }
      else
      {
        v20 = v19;
        v21 = 1i64;
      }
      v22 = v20;
      v23 = v21;
      if ( v20 > 0xFFFF )
        v22 = 32;
      if ( !v4 || v22 != 35 )
      {
        m_legalGlyphRangesLoaded = this->m_legalGlyphRangesLoaded;
        v25 = 0;
        if ( m_legalGlyphRangesLoaded <= 0 )
        {
LABEL_40:
          *v5 = truncate_cast<int,__int64>(v18 - usernameString);
          return 0;
        }
        while ( v22 < this->m_legalGlyphRanges[v25].start || v22 > this->m_legalGlyphRanges[v25].end )
        {
          if ( ++v25 >= m_legalGlyphRangesLoaded )
            goto LABEL_40;
        }
        v21 = v23;
      }
      v18 += v21;
      if ( !*v18 )
        return 1;
    }
  }
  v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 517, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Too many legal glyph ranges in %s.", GLYPH_RANGE_TABLE);
LABEL_12:
  if ( v9 )
    __debugbreak();
  return 0;
}

/*
==============
Online_AccountRegistration::CreateAnonymous
==============
*/
void Online_AccountRegistration::CreateAnonymous(Online_AccountRegistration *this, const int controllerIndex)
{
  __int64 m_pendingRegistrationController; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v7; 
  DWLogin *v8; 
  DWServicesAccess *v9; 
  DWLogin *v10; 
  bdLoginResumeConfig *v11; 
  const char *LocalClientName; 
  int v14; 
  bdLoginResumeConfig v15; 
  char v16[5704]; 
  bdLoginResumeConfig __that; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 181, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v14) )
      __debugbreak();
  }
  m_pendingRegistrationController = (unsigned int)this->m_pendingRegistrationController;
  if ( controllerIndex == (_DWORD)m_pendingRegistrationController )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
    if ( DWLogin::hasStarted(Login) )
    {
      v7 = DWServicesAccess::GetInstance();
      v8 = DWServicesAccess::GetLogin(v7, controllerIndex);
      if ( DWLogin::isPending(v8) )
      {
        Com_PrintError(25, "[LOGINREG]. CreateAnonymous called while login is already pending for controller(%u)\n", (unsigned int)controllerIndex);
      }
      else
      {
        bdLoginResumeConfig::bdLoginResumeConfig(&__that);
        qmemcpy(&v15, v16, sizeof(v15));
        v9 = DWServicesAccess::GetInstance();
        v10 = DWServicesAccess::GetLogin(v9, controllerIndex);
        bdLoginResumeConfig::bdLoginResumeConfig(&v15, &__that);
        DWLogin::resume(v10, BD_LOGIN_CREATE_ANONYMOUS_ACCOUNT, v11);
        LocalClientName = Live_GetLocalClientName(controllerIndex);
        Com_Printf(25, "[LOGINREG] Logging in with anonymous account for controller(%u), Platform User Name is(%s).\n", (unsigned int)controllerIndex, LocalClientName);
        this->m_registrationState = SEARCHING;
        bdLoginResumeConfig::~bdLoginResumeConfig(&__that);
      }
    }
    else
    {
      Com_PrintError(25, "[LOGINREG]. CreateAnonymous called before login has started for controller(%u)\n", (unsigned int)controllerIndex);
    }
  }
  else
  {
    Com_PrintError(25, "[LOGINREG]. CreateAnonymous called on controller(%u) while there is already a pending registration on controller(%u).\n", (unsigned int)controllerIndex, m_pendingRegistrationController);
  }
}

/*
==============
Online_AccountRegistration::CreateFull
==============
*/
void Online_AccountRegistration::CreateFull(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::CreateInfo *createInfo)
{
  __int64 m_pendingRegistrationController; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v9; 
  DWLogin *v10; 
  const dvar_t *v11; 
  DWServicesAccess *v12; 
  DWLogin *v13; 
  bdLoginResumeConfig *v14; 
  int v16; 
  bdLoginResumeConfig v17; 
  char v18[5704]; 
  bdUnoAccountInfo unoAccountInfo; 
  bdLoginResumeConfig __that; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v16 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 245, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v16) )
      __debugbreak();
  }
  m_pendingRegistrationController = (unsigned int)this->m_pendingRegistrationController;
  if ( controllerIndex == (_DWORD)m_pendingRegistrationController )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
    if ( DWLogin::hasStarted(Login) )
    {
      v9 = DWServicesAccess::GetInstance();
      v10 = DWServicesAccess::GetLogin(v9, controllerIndex);
      if ( DWLogin::isPending(v10) )
      {
        Com_PrintError(25, "[LOGINREG]. CreateFull called while login is still pending for controller(%u)\n", (unsigned int)controllerIndex);
      }
      else
      {
        v11 = DVARBOOL_accountreg_create_profanity_check;
        if ( !DVARBOOL_accountreg_create_profanity_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_create_profanity_check") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled && ProfanityFilter_IsBadWord(controllerIndex, createInfo->username) )
        {
          Com_PrintError(25, "[LOGINREG] CreateFull called with inappropriate username (%s) for controller(%u)\n.", createInfo->username, (unsigned int)controllerIndex);
          Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRegistrationFailure", USERNAME_PROFANITY, 0);
        }
        else
        {
          bdUnoAccountInfo::bdUnoAccountInfo(&unoAccountInfo);
          Online_AccountRegistration::FillUnoAccountInfo(createInfo, &unoAccountInfo);
          bdLoginResumeConfig::bdLoginResumeConfig(&__that);
          bdLoginResumeConfig::setAccountInfo(&__that, &unoAccountInfo);
          qmemcpy(&v17, v18, sizeof(v17));
          v12 = DWServicesAccess::GetInstance();
          v13 = DWServicesAccess::GetLogin(v12, controllerIndex);
          bdLoginResumeConfig::bdLoginResumeConfig(&v17, &__that);
          DWLogin::resume(v13, BD_LOGIN_CREATE_FULL_ACCOUNT, v14);
          Com_Printf(25, "[LOGINREG] Logging in with new account for controller(%u), username(%s), email(%s), password(%s).\n", (unsigned int)controllerIndex, createInfo->username, createInfo->email, createInfo->password);
          this->m_registrationState = SEARCHING;
          bdLoginResumeConfig::~bdLoginResumeConfig(&__that);
          bdUnoAccountInfo::~bdUnoAccountInfo(&unoAccountInfo);
        }
      }
    }
    else
    {
      Com_PrintError(25, "[LOGINREG]. CreateFull called before login has started for controller(%u)\n", (unsigned int)controllerIndex);
    }
  }
  else
  {
    Com_PrintError(25, "[LOGINREG]. CreateFull called on controller(%u) while there is already a pending registration on controller(%u).\n", (unsigned int)controllerIndex, m_pendingRegistrationController);
  }
}

/*
==============
DeleteUnoAccount
==============
*/
void DeleteUnoAccount()
{
  unsigned int v0; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  DWServicesAccess *v3; 
  DWUmbrella *Umbrella; 
  DWServicesAccess *v5; 
  DWUmbrella *v6; 
  DWServicesAccess *v7; 
  DWUno *Uno; 
  DWServicesAccess *v9; 
  DWUno *v10; 
  int NumLinkedAccounts; 
  int v12; 
  const bdUmbrellaProviderAccount *LinkedAccounts; 
  __int64 v14; 
  const char *v15; 
  const bdUmbrellaProviderAccount *v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  DWServicesAccess *v20; 
  DWUno *v21; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  bdReference<bdRemoteTask> result; 

  v0 = Cmd_ArgInt(1);
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, v0);
  v3 = DWServicesAccess::GetInstance();
  Umbrella = DWServicesAccess::GetUmbrella(v3, v0);
  if ( !DWUmbrella::isUmbrellaInited(Umbrella) )
  {
    v5 = DWServicesAccess::GetInstance();
    v6 = DWServicesAccess::GetUmbrella(v5, v0);
    DWUmbrella::initUmbrella(v6);
  }
  v7 = DWServicesAccess::GetInstance();
  Uno = DWServicesAccess::GetUno(v7, v0);
  if ( !DWUno::isUnoInited(Uno) )
  {
    v9 = DWServicesAccess::GetInstance();
    v10 = DWServicesAccess::GetUno(v9, v0);
    DWUno::initUno(v10);
  }
  NumLinkedAccounts = bdLoginResult::getNumLinkedAccounts(LoginResult);
  v12 = 0;
  LinkedAccounts = bdLoginResult::getLinkedAccounts(LoginResult);
  if ( NumLinkedAccounts )
  {
    while ( 2 )
    {
      v14 = 0x7FFFFFFFi64;
      v15 = "uno";
      v16 = &LinkedAccounts[v12];
      if ( v16 == (const bdUmbrellaProviderAccount *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v17 = v15[(char *)v16 - "uno" + 16];
        v18 = v14;
        v19 = *v15++;
        --v14;
        if ( !v18 )
        {
LABEL_12:
          Com_Printf(25, "Deleting uno account for controller(%u).\n", v0);
          v20 = DWServicesAccess::GetInstance();
          v21 = DWServicesAccess::GetUno(v20, v0);
          CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(LoginResult);
          DWUno::deleteAccount(v21, &result, v16->m_linkedAccountID, CrossplayAccessInfo->m_accessToken);
          if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( result.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
          }
          return;
        }
        if ( v17 != v19 )
          break;
        if ( !v17 )
          goto LABEL_12;
      }
      if ( ++v12 < NumLinkedAccounts )
        continue;
      break;
    }
  }
  Com_PrintError(25, "Attempting to delete uno account for controller(%u) but could not find a registered uno account.\n", v0);
}

/*
==============
Online_AccountRegistration::FillUnoAccountInfo
==============
*/
void Online_AccountRegistration::FillUnoAccountInfo(const Online_AccountRegistration::CreateInfo *createInfo, bdUnoAccountInfo *unoAccountInfo)
{
  unsigned __int64 v4; 

  unoAccountInfo->m_accountType = BD_UNO_ACCOUNT_FULL;
  bdUnoAccountInfo::setUsername(unoAccountInfo, createInfo->username);
  bdUnoAccountInfo::setPassword(unoAccountInfo, createInfo->password);
  bdUnoAccountInfo::setEmail(unoAccountInfo, createInfo->email);
  bdHandleAssert(createInfo->countrycode != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( createInfo->countrycode[v4] );
  if ( v4 <= 3 )
    bdStrlcpy(unoAccountInfo->m_country, createInfo->countrycode, 3ui64);
  unoAccountInfo->m_over18 = createInfo->isOver18;
  unoAccountInfo->m_subscriptionOptIn = createInfo->marketingOptIn;
}

/*
==============
Online_AccountRegistration::GetInstance
==============
*/
Online_AccountRegistration *Online_AccountRegistration::GetInstance()
{
  return &Online_AccountRegistration::s_instance;
}

/*
==============
Online_AccountRegistration::GetInstancePtr
==============
*/
Online_AccountRegistration *Online_AccountRegistration::GetInstancePtr()
{
  return &Online_AccountRegistration::s_instance;
}

/*
==============
Online_AccountRegistration::GetPendingRegistrationController
==============
*/
__int64 Online_AccountRegistration::GetPendingRegistrationController(Online_AccountRegistration *this)
{
  return (unsigned int)this->m_pendingRegistrationController;
}

/*
==============
Online_AccountRegistration::IsFullAccount
==============
*/
bool Online_AccountRegistration::IsFullAccount(Online_AccountRegistration *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bool v5; 
  DWServicesAccess *v6; 
  bdLoginResult *LoginResult; 
  AccountType m_accountType; 
  bdCrossPlatformAccountInfo result; 

  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
  v5 = DWLogin::succeeded(Login);
  if ( v5 )
  {
    v6 = DWServicesAccess::GetInstance();
    LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v6, controllerIndex);
    bdLoginResult::getCrossPlatformAccountInfo(LoginResult, &result);
    m_accountType = result.m_accountType;
    bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(&result);
    return m_accountType == BD_LOGIN_ACCOUNT_FULL;
  }
  return v5;
}

/*
==============
Online_AccountRegistration::IsRegistering
==============
*/
bool Online_AccountRegistration::IsRegistering(Online_AccountRegistration *this)
{
  return this->m_pendingRegistrationController != -1;
}

/*
==============
LUI_CoD_LuaCall_CreateFull_impl
==============
*/
__int64 LUI_CoD_LuaCall_CreateFull_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  Online_AccountRegistration::CreateInfo createInfo; 

  if ( j_lua_gettop(luaVM) != 6 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isstring(luaVM, 4) || !j_lua_isstring(luaVM, 5) || j_lua_type(luaVM, 6) != 1 )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.CreateFull( <controllerIndex>, <email>, <username>, <password>, <countrycode>, <marketinOptIn> )");
  if ( j_lua_gettop(luaVM) == 6 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isstring(luaVM, 4) && j_lua_isstring(luaVM, 5) && j_lua_type(luaVM, 6) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    Core_strcpy(createInfo.email, 0x100ui64, v3);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    Core_strcpy(createInfo.username, 0x1Aui64, v4);
    v5 = j_lua_tolstring(luaVM, 4, NULL);
    Core_strcpy(createInfo.password, 0x65ui64, v5);
    v6 = j_lua_tolstring(luaVM, 5, NULL);
    Core_strcpy(createInfo.countrycode, 3ui64, v6);
    v7 = j_lua_toboolean(luaVM, 6);
    createInfo.isOver18 = 1;
    createInfo.marketingOptIn = v7 != 0;
    Online_AccountRegistration::CreateFull(&Online_AccountRegistration::s_instance, v2, &createInfo);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetAccountAge_impl
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetAccountAge_impl(lua_State *const luaVM, double _XMM1_8)
{
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginResult *v9; 
  __time64_t v10; 
  unsigned int UTC; 
  struct tm Tm; 
  bdCrossPlatformAccountInfo result; 
  char dest[24]; 

  v4 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.GetAccountAge( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v5 = lui_tointeger32(luaVM, 1);
  v6 = v5;
  if ( v5 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 1244, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, 8) )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, v6);
  if ( !DWLogin::succeeded(Login) )
    return 0i64;
  v9 = (bdLoginResult *)DWLogin::getResult(Login);
  bdLoginResult::getCrossPlatformAccountInfo(v9, &result);
  memset(&Tm, 0, sizeof(Tm));
  Core_strcpy(dest, 0x15ui64, result.m_createdTime);
  if ( j_sscanf(dest, "%d-%d-%dT%d:%d:%dZ", &Tm.tm_year, &Tm.tm_mon, &Tm.tm_mday, &Tm.tm_hour, &Tm.tm_min, &Tm) == 6 )
  {
    Tm.tm_year -= 1900;
    --Tm.tm_mon;
    v10 = _mktime64(&Tm);
    UTC = LiveStorage_GetUTC();
    *(double *)&_XMM0 = _difftime64(UTC, v10);
    __asm
    {
      vcvttsd2si edx, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, edx; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    Com_PrintError(25, "AccountRegistration.GetAccountAge error parsing created timestamp: %s", dest);
    v4 = 0;
  }
  bdCrossPlatformAccountInfo::~bdCrossPlatformAccountInfo(&result);
  return v4;
}

/*
==============
LUI_CoD_LuaCall_UpgradeToFull_impl
==============
*/
__int64 LUI_CoD_LuaCall_UpgradeToFull_impl(lua_State *const luaVM)
{
  bool v2; 
  int v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  Online_AccountRegistration::CreateInfo createInfo; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isstring(luaVM, 4) || j_lua_type(luaVM, 5) != 1 )
    j_luaL_error(luaVM, "USAGE: AccountRegistration.UpgradeToFull( <controllerIndex>, <email>, <password>, <countrycode>, <marketingOptIn> )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isstring(luaVM, 4) && j_lua_type(luaVM, 5) == 1 )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    Core_strcpy(createInfo.email, 0x100ui64, v4);
    v5 = j_lua_tolstring(luaVM, 3, NULL);
    Core_strcpy(createInfo.password, 0x65ui64, v5);
    v6 = j_lua_tolstring(luaVM, 4, NULL);
    Core_strcpy(createInfo.countrycode, 3ui64, v6);
    createInfo.marketingOptIn = j_lua_toboolean(luaVM, 5) != 0;
    Core_strcpy(createInfo.username, 0x1Aui64, (const char *)&queryFormat.fmt + 3);
    createInfo.isOver18 = 1;
    v2 = Online_AccountRegistration::UpgradeToFull(&Online_AccountRegistration::s_instance, v3, &createInfo);
  }
  j_lua_pushboolean(luaVM, v2);
  return 1i64;
}

/*
==============
Online_AccountRegistration::LoginExisting
==============
*/
void Online_AccountRegistration::LoginExisting(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::LoginInfo *loginInfo)
{
  __int64 m_pendingRegistrationController; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v9; 
  DWLogin *v10; 
  DWServicesAccess *v11; 
  DWLogin *v12; 
  bdLoginResumeConfig *v13; 
  int v15; 
  bdLoginResumeConfig v16; 
  char v17[5704]; 
  bdUnoAccountInfo accountInfo; 
  bdLoginResumeConfig __that; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v15 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 210, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v15) )
      __debugbreak();
  }
  m_pendingRegistrationController = (unsigned int)this->m_pendingRegistrationController;
  if ( controllerIndex == (_DWORD)m_pendingRegistrationController )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
    if ( DWLogin::hasStarted(Login) )
    {
      v9 = DWServicesAccess::GetInstance();
      v10 = DWServicesAccess::GetLogin(v9, controllerIndex);
      if ( DWLogin::isPending(v10) )
      {
        Com_PrintError(25, "[LOGINREG]. LoginExisting called while login is still pending for controller(%u)\n", (unsigned int)controllerIndex);
      }
      else
      {
        bdUnoAccountInfo::bdUnoAccountInfo(&accountInfo);
        bdUnoAccountInfo::setEmail(&accountInfo, loginInfo->email);
        bdUnoAccountInfo::setUsername(&accountInfo, loginInfo->username);
        bdUnoAccountInfo::setPassword(&accountInfo, loginInfo->password);
        bdLoginResumeConfig::bdLoginResumeConfig(&__that);
        bdLoginResumeConfig::setAccountInfo(&__that, &accountInfo);
        qmemcpy(&v16, v17, sizeof(v16));
        v11 = DWServicesAccess::GetInstance();
        v12 = DWServicesAccess::GetLogin(v11, controllerIndex);
        bdLoginResumeConfig::bdLoginResumeConfig(&v16, &__that);
        DWLogin::resume(v12, BD_LOGIN_EXISTING_USER_LOGIN, v13);
        Com_Printf(25, "[LOGINREG] Logging in existing account for controller(%u), username(%s), email(%s), pass(%s).\n", (unsigned int)controllerIndex, loginInfo->username, loginInfo->email, loginInfo->password);
        this->m_registrationState = SEARCHING;
        bdLoginResumeConfig::~bdLoginResumeConfig(&__that);
        bdUnoAccountInfo::~bdUnoAccountInfo(&accountInfo);
      }
    }
    else
    {
      Com_PrintError(25, "[LOGINREG]. LoginExisting called before login has started for controller(%u)\n", (unsigned int)controllerIndex);
    }
  }
  else
  {
    Com_PrintError(25, "[LOGINREG]. LoginExisting called on controller(%u) while there is already a pending registration on controller(%u).\n", (unsigned int)controllerIndex, m_pendingRegistrationController);
  }
}

/*
==============
Online_AccountRegistration::MapLoginErrorToLUIError
==============
*/
__int64 Online_AccountRegistration::MapLoginErrorToLUIError(const unsigned int dwErrorCode)
{
  __int64 result; 

  switch ( dwErrorCode )
  {
    case 0x36BFu:
      result = 9i64;
      break;
    case 0x3717u:
      result = 10i64;
      break;
    case 0x3720u:
      result = 6i64;
      break;
    case 0x3721u:
      result = 4i64;
      break;
    case 0x3722u:
      result = 5i64;
      break;
    case 0x3723u:
      result = 8i64;
      break;
    case 0x3726u:
      result = 11i64;
      break;
    case 0x3727u:
      result = 12i64;
      break;
    default:
      result = 3i64;
      break;
  }
  return result;
}

/*
==============
Online_AccountRegistration::Rename
==============
*/
char Online_AccountRegistration::Rename(Online_AccountRegistration *this, const int controllerIndex, const char *newAccountName)
{
  Online_AccountRegistration::AccountRegistrationErrorCode v6; 
  const dvar_t *v8; 
  Online_Loot *Instance; 
  const dvar_t *v10; 
  __int64 ItemQuantity; 
  const dvar_t *v12; 
  Online_Commerce *v13; 
  const dvar_t *v14; 
  char v15; 
  bdRemoteTask *v16; 
  bdRenameCrossPlatformUserResponse *v17; 
  DWServicesAccess *v18; 
  bdLoginResult *LoginResult; 
  unsigned __int64 UserID; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  DWServicesAccess *v22; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  TaskCreateRequest *v24; 
  bdRemoteTask *v25; 
  TaskManager *v26; 
  const char *Username; 
  unsigned __int64 v28; 
  bdRenameCrossPlatformUserResponse *m_renameResponse; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v32; 
  TaskCreateResult pTaskCreateResult; 
  bdRenameCrossPlatformUserRequest request; 

  v32 = -2i64;
  if ( Live_UserIsGuest(controllerIndex) )
  {
    Com_PrintError(25, "[LOGINREG] Rename called with guest account for controller(%u)\n.", (unsigned int)controllerIndex);
    v6 = GUEST_ACCOUNT;
LABEL_3:
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRenameFailure", v6, 0);
    return 0;
  }
  v8 = DVARBOOL_accountreg_rename_profanity_check;
  if ( !DVARBOOL_accountreg_rename_profanity_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_rename_profanity_check") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && ProfanityFilter_IsBadWord(controllerIndex, newAccountName) )
  {
    Com_PrintError(25, "[LOGINREG] Rename called with inappropriate username (%s) for controller(%u)\n.", newAccountName, (unsigned int)controllerIndex);
    v6 = USERNAME_PROFANITY;
    goto LABEL_3;
  }
  Instance = Online_Loot::GetInstance();
  v10 = DVARINT_accountreg_rename_token_id;
  if ( !DVARINT_accountreg_rename_token_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_rename_token_id") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  ItemQuantity = Online_Loot::GetItemQuantity(Instance, controllerIndex, v10->current.unsignedInt);
  v12 = DVARBOOL_accountreg_rename_use_currency;
  if ( !DVARBOOL_accountreg_rename_use_currency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_rename_use_currency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = Online_Commerce::GetInstance();
    v14 = DVARINT_accountreg_rename_currency_id;
    if ( !DVARINT_accountreg_rename_currency_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_rename_currency_id") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    ItemQuantity = Online_Commerce::GetCurrencyAmount(v13, controllerIndex, v14->current.integer);
  }
  if ( ItemQuantity <= 0 )
  {
    Com_PrintError(25, "[LOGINREG] Rename called for controller (%u) but you don't have any rename tokens available.", (unsigned int)controllerIndex);
    v6 = NO_RENAME_TOKEN;
    goto LABEL_3;
  }
  bdRenameCrossPlatformUserRequest::bdRenameCrossPlatformUserRequest(&request);
  if ( this->m_pendingRegistrationController != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 392, ASSERT_TYPE_SANITY, "( !IsRegistering() )", (const char *)&queryFormat, "!IsRegistering()") )
    __debugbreak();
  if ( this->m_renameResponse )
  {
    Com_PrintError(25, "[LOGINREG] Rename called for controller (%u) but we already have a rename task in flight.", (unsigned int)controllerIndex);
    v15 = 0;
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRenameFailure", BUSY, 0);
  }
  else
  {
    v16 = (bdRemoteTask *)bdMemory::allocate(0x30ui64);
    result.m_ptr = v16;
    if ( v16 )
      bdRenameCrossPlatformUserResponse::bdRenameCrossPlatformUserResponse((bdRenameCrossPlatformUserResponse *)v16);
    else
      v17 = NULL;
    this->m_renameResponse = v17;
    v18 = DWServicesAccess::GetInstance();
    LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v18, controllerIndex);
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = Online_AccountRegistration::RenameComplete;
    pTaskCreateRequest.m_appData = this;
    UserID = bdLoginResult::getUserID(LoginResult);
    bdRenameCrossPlatformUserRequest::setUnoID(&request, UserID);
    CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(LoginResult);
    bdRenameCrossPlatformUserRequest::setAuthToken(&request, CrossplayAccessInfo->m_accessToken);
    bdRenameCrossPlatformUserRequest::setUsername(&request, newAccountName);
    v22 = DWServicesAccess::GetInstance();
    CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v22, controllerIndex);
    v24 = (TaskCreateRequest *)DWCrossPlatformIdentity::renameUser(CrossPlatformIdentity, &result, &request, this->m_renameResponse);
    if ( v24 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v25 = *(bdRemoteTask **)&v24->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v25;
      if ( v25 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v26 = TaskManager::GetInstance(), TaskManager::CreateTask(v26, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      Username = bdLoginResult::getUsername(LoginResult);
      v28 = bdLoginResult::getUserID(LoginResult);
      Com_Printf(25, "[LOGINREG] Sending rename request for controller(%u), unoID(%zu), currentName(%s), to new username(%s).\n", (unsigned int)controllerIndex, v28, Username, newAccountName);
      v15 = 1;
    }
    else
    {
      Com_PrintError(25, "[LOGINREG] Failed to send rename request for controller(%u).\n", (unsigned int)controllerIndex);
      m_renameResponse = this->m_renameResponse;
      if ( m_renameResponse )
        ((void (__fastcall *)(bdRenameCrossPlatformUserResponse *, __int64))m_renameResponse->~bdRESTResponse)(m_renameResponse, 1i64);
      v15 = 0;
    }
    TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  }
  bdRESTRequest::~bdRESTRequest(&request);
  return v15;
}

/*
==============
Online_AccountRegistration::RenameComplete
==============
*/
void Online_AccountRegistration::RenameComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_AccountRegistration *m_appData; 
  bdRenameCrossPlatformUserResponse *m_renameResponse; 
  unsigned int ErrorCode; 
  Online_AccountRegistration::AccountRegistrationErrorCode v7; 
  Online_Commerce *Instance; 
  bdRenameCrossPlatformUserResponse *v9; 

  m_appData = (Online_AccountRegistration *)task->m_appData;
  if ( (Online_AccountRegistration *)(((unsigned __int64)&m_appData->__vftable + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 709, ASSERT_TYPE_SANITY, "( registration != nullptr )", (const char *)&queryFormat, "registration != nullptr") )
    __debugbreak();
  if ( !m_appData->m_renameResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 710, ASSERT_TYPE_SANITY, "( registration->m_renameResponse != nullptr )", (const char *)&queryFormat, "registration->m_renameResponse != nullptr") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 733, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unhandled taskState.") )
        __debugbreak();
    }
    else
    {
      m_renameResponse = m_appData->m_renameResponse;
      ErrorCode = 0;
      if ( m_renameResponse )
        ErrorCode = bdRenameCrossPlatformUserResponse::getErrorCode(m_renameResponse);
      v7 = Online_AccountRegistration::MapLoginErrorToLUIError(ErrorCode);
      Online_AccountRegistration::SendFailureToLua(m_appData, task->m_controllerIndex, "AccountRenameFailure", v7, ErrorCode);
    }
  }
  else
  {
    Online_AccountRegistration::SendSuccessToLua(m_appData, task->m_controllerIndex, "AccountRenameSuccess");
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::GetCurrency(Instance, task->m_controllerIndex);
  }
  v9 = m_appData->m_renameResponse;
  if ( v9 )
    ((void (__fastcall *)(bdRenameCrossPlatformUserResponse *, __int64))v9->~bdRESTResponse)(v9, 1i64);
  m_appData->m_renameResponse = NULL;
}

/*
==============
Online_AccountRegistration::SanitizeUTF8String
==============
*/
void Online_AccountRegistration::SanitizeUTF8String(const char *inString, char *outString, const unsigned int outStringSize)
{
  char *v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  char v9; 
  const char *v10; 
  char *v11; 
  int v12; 
  int v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v4 = outString;
  v5 = inString;
  if ( !inString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 593, ASSERT_TYPE_SANITY, "( inString )", (const char *)&queryFormat, "inString") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 594, ASSERT_TYPE_SANITY, "( outString )", (const char *)&queryFormat, "outString") )
    __debugbreak();
  v6 = -1i64;
  v7 = -1i64;
  do
    ++v7;
  while ( v5[v7] );
  if ( (unsigned int)v7 >= outStringSize )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( v5[v8] );
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 595, ASSERT_TYPE_SANITY, "( I_strlen( inString ) ) < ( outStringSize )", "I_strlen( inString ) < outStringSize\n\t%i, %i", v19, outStringSize) )
      __debugbreak();
  }
  v9 = *v5;
  v10 = v5;
  v11 = v4;
  if ( *v5 )
  {
    while ( 1 )
    {
      v12 = 0;
      v13 = -1;
      if ( v9 < 0 )
      {
        if ( (v9 & 0xE0) == 0xC0 )
        {
          v13 = v10[1] & 0x7F | ((v9 & 0x1F) << 6);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v12 = 2;
            if ( v13 > 0xFFFF )
              v13 = 32;
            goto LABEL_34;
          }
          goto LABEL_33;
        }
        if ( (v9 & 0xF0) == 0xE0 )
        {
          v13 = v10[2] & 0x7F | ((v10[1] & 0x7F | ((v9 & 0xF) << 6)) << 6);
          if ( (unsigned int)(v13 - 2048) <= 0xCFFF || (unsigned int)v13 >= 0xE000 )
          {
            v12 = 3;
            if ( v13 > 0xFFFF )
              v13 = 32;
            goto LABEL_34;
          }
          goto LABEL_33;
        }
        if ( (v9 & 0xF8) == 0xF0 )
        {
          v13 = v10[3] & 0x7F | ((v10[2] & 0x7F | ((v10[1] & 0x7F | ((v9 & 7) << 6)) << 6)) << 6);
          if ( (unsigned int)(v13 - 0x10000) <= 0xFFFFE )
          {
            v12 = 4;
            if ( v13 > 0xFFFF )
              v13 = 32;
            goto LABEL_34;
          }
LABEL_33:
          v13 = -1;
        }
      }
      else
      {
        v13 = (unsigned __int8)v9;
        v12 = 1;
      }
LABEL_34:
      if ( (unsigned int)(v13 - 65281) > 0x5D )
      {
        v15 = v12;
        memcpy_0(v11, v10, v12);
      }
      else
      {
        v14 = v13 + 32;
        if ( (unsigned int)(v13 - 65248 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)(v13 + 32), "signed", v13 - 65248) )
          __debugbreak();
        *v11 = v14;
        v15 = 1i64;
      }
      v10 += v12;
      v11 += v15;
      v9 = *v10;
      if ( !*v10 )
      {
        v5 = inString;
        v4 = outString;
        break;
      }
    }
  }
  v16 = -1i64;
  *v11 = 0;
  do
    ++v16;
  while ( v5[v16] );
  v17 = -1i64;
  do
    ++v17;
  while ( v4[v17] );
  if ( (unsigned int)v16 < (unsigned int)v17 )
  {
    v18 = -1i64;
    do
      ++v18;
    while ( v4[v18] );
    do
      ++v6;
    while ( v5[v6] );
    LODWORD(v20) = v18;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 620, ASSERT_TYPE_SANITY, "( I_strlen( inString ) ) >= ( I_strlen( outString ) )", "I_strlen( inString ) >= I_strlen( outString )\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
}

/*
==============
Online_AccountRegistration::SendFailureToLua
==============
*/
void Online_AccountRegistration::SendFailureToLua(Online_AccountRegistration *this, const int controllerIndex, const char *eventHandlerName, const Online_AccountRegistration::AccountRegistrationErrorCode errorCode, const unsigned int detailErrorCode)
{
  __int64 v5; 
  __int64 v7; 
  lua_State *v8; 
  LocalClientNum_t ClientFromController; 

  v5 = errorCode;
  v7 = controllerIndex;
  Com_Printf(25, "[LOGINREG] Sending account registration failure to LUA for controller(%u), eventHandler(%s), error(%i).\n", (unsigned int)controllerIndex, eventHandlerName, errorCode);
  v8 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v7);
  if ( LUI_BeginEvent(ClientFromController, eventHandlerName, v8) )
  {
    LUI_BeginTable("options", 0, 2, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v7, LUI_luaVM);
    LUI_SetTableInt("errorCode", v5, LUI_luaVM);
    LUI_SetTableInt("detailErrorCode", detailErrorCode, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_AccountRegistration::SendSuccessToLua
==============
*/
void Online_AccountRegistration::SendSuccessToLua(Online_AccountRegistration *this, const int controllerIndex, const char *eventHandlerName)
{
  __int64 v3; 
  lua_State *v5; 
  LocalClientNum_t ClientFromController; 

  v3 = controllerIndex;
  Com_Printf(25, "[LOGINREG] Sending account registration success to LUA for controller(%u), eventHandler(%s).\n", (unsigned int)controllerIndex, eventHandlerName);
  v5 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  if ( LUI_BeginEvent(ClientFromController, eventHandlerName, v5) )
  {
    LUI_BeginTable("options", 0, 2, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v3, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_AccountRegistration::StartRegistration
==============
*/
char Online_AccountRegistration::StartRegistration(Online_AccountRegistration *this, const int controllerIndex)
{
  __int64 m_pendingRegistrationController; 
  int v7; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 79, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  m_pendingRegistrationController = (unsigned int)this->m_pendingRegistrationController;
  if ( (_DWORD)m_pendingRegistrationController == -1 )
  {
    Com_Printf(25, "[LOGINREG] Starting account registration step on controller(%u).\n", (unsigned int)controllerIndex);
    this->m_pendingRegistrationController = controllerIndex;
    return 1;
  }
  else
  {
    Com_PrintError(25, "[LOGINREG] Attempting to start registration on controller(%u) when registration is already active on controller(%u).\n", (unsigned int)controllerIndex, m_pendingRegistrationController);
    return 0;
  }
}

/*
==============
TestChangeEmail
==============
*/
void TestChangeEmail()
{
  int v0; 
  const char *v1; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  Online_AccountRegistration::ChangeEmail(&Online_AccountRegistration::s_instance, v0, v1);
}

/*
==============
TestCheckUsername
==============
*/
void TestCheckUsername()
{
  const char *v0; 
  int v1; 
  bool v2; 
  const char *v3; 
  int firstIllegalByteIndex; 

  v0 = Cmd_Argv(1);
  if ( Cmd_Argc() == 3 )
    v1 = Cmd_ArgInt(2);
  else
    v1 = 0;
  v2 = Online_AccountRegistration::CheckUsername(&Online_AccountRegistration::s_instance, v0, &firstIllegalByteIndex, v1 != 0);
  v3 = "failed";
  if ( v2 )
    v3 = "success";
  Com_Printf(25, "CheckUsername returned %s, with problem index(%i).\n", v3, (unsigned int)firstIllegalByteIndex);
}

/*
==============
TestCreateAnonymous
==============
*/
void TestCreateAnonymous()
{
  int v0; 

  v0 = Cmd_ArgInt(1);
  Online_AccountRegistration::CreateAnonymous(&Online_AccountRegistration::s_instance, v0);
}

/*
==============
TestCreateFull
==============
*/
void TestCreateFull()
{
  int v0; 
  const char *v1; 
  char *v2; 
  unsigned int v3; 
  const char *v4; 
  Online_AccountRegistration::CreateInfo createInfo; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  if ( Cmd_Argc() == 4 )
  {
    v2 = (char *)Cmd_Argv(3);
  }
  else
  {
    v3 = I_irand(0, 10000);
    v2 = j_va("%s%u@fakeemaildomain.com", v1, v3);
  }
  v4 = v2;
  Core_strcpy(createInfo.countrycode, 3ui64, "US");
  Core_strcpy(createInfo.password, 0x65ui64, "password1234");
  Core_strcpy(createInfo.username, 0x1Aui64, v1);
  Core_strcpy(createInfo.email, 0x100ui64, v4);
  *(_WORD *)&createInfo.isOver18 = 257;
  Online_AccountRegistration::CreateFull(&Online_AccountRegistration::s_instance, v0, &createInfo);
}

/*
==============
TestIsFull
==============
*/
void TestIsFull()
{
  unsigned int v0; 
  bool IsFullAccount; 
  const char *v2; 

  v0 = Cmd_ArgInt(1);
  IsFullAccount = Online_AccountRegistration::IsFullAccount(&Online_AccountRegistration::s_instance, v0);
  v2 = "false";
  if ( IsFullAccount )
    v2 = "true";
  Com_Printf(25, "TestIsFull (%u) is %s.\n", v0, v2);
}

/*
==============
TestLoginExisting
==============
*/
void TestLoginExisting()
{
  int v0; 
  const char *v1; 
  Online_AccountRegistration::LoginInfo *email; 
  unsigned __int64 v3; 
  const char *v4; 
  Online_AccountRegistration::LoginInfo dest; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  if ( I_strstr(v1, "@") )
  {
    email = (Online_AccountRegistration::LoginInfo *)dest.email;
    v3 = 256i64;
  }
  else
  {
    email = &dest;
    v3 = 26i64;
  }
  Core_strcpy(email->username, v3, v1);
  if ( Cmd_Argc() == 4 )
    v4 = Cmd_Argv(3);
  else
    v4 = "password1234";
  Core_strcpy(dest.password, 0x65ui64, v4);
  Online_AccountRegistration::LoginExisting(&Online_AccountRegistration::s_instance, v0, &dest);
}

/*
==============
TestRename
==============
*/
void TestRename()
{
  int v0; 
  const char *v1; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  Online_AccountRegistration::Rename(&Online_AccountRegistration::s_instance, v0, v1);
}

/*
==============
TestSanitizeUTF8
==============
*/
void TestSanitizeUTF8()
{
  const char *v0; 
  char outString[1024]; 

  v0 = Cmd_Argv(1);
  Online_AccountRegistration::SanitizeUTF8String(v0, outString, 0x400u);
}

/*
==============
TestUpgradeFromExisting
==============
*/
void TestUpgradeFromExisting()
{
  int v0; 
  const char *v1; 
  Online_AccountRegistration::LoginInfo loginInfo; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  Core_strcpy(loginInfo.email, 0x100ui64, v1);
  Core_strcpy(loginInfo.password, 0x65ui64, "password1234");
  Online_AccountRegistration::UpgradeFromExisting(&Online_AccountRegistration::s_instance, v0, &loginInfo);
}

/*
==============
TestUpgradeFull
==============
*/
void TestUpgradeFull()
{
  int v0; 
  const char *v1; 
  char *v2; 
  const char *v3; 
  Online_AccountRegistration::CreateInfo createInfo; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  if ( Cmd_Argc() == 4 )
    v2 = (char *)Cmd_Argv(3);
  else
    v2 = j_va("%s@fakeemaildomain.com", v1);
  v3 = v2;
  Core_strcpy(createInfo.countrycode, 3ui64, "US");
  Core_strcpy(createInfo.password, 0x65ui64, "password1234");
  Core_strcpy(createInfo.username, 0x1Aui64, v1);
  Core_strcpy(createInfo.email, 0x100ui64, v3);
  *(_WORD *)&createInfo.isOver18 = 257;
  Online_AccountRegistration::UpgradeToFull(&Online_AccountRegistration::s_instance, v0, &createInfo);
}

/*
==============
Online_AccountRegistration::UpgradeFromExisting
==============
*/
char Online_AccountRegistration::UpgradeFromExisting(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::LoginInfo *loginInfo)
{
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginResult *v9; 
  bdEnableCrossplatformProgression *v10; 
  bdLoginResult *v11; 
  DWServicesAccess *v12; 
  const bdLoginResult *LoginResult; 
  bdEnableCrossplatformProgression *v14; 
  char *password; 
  char *email; 
  bdEnableCrossplatformProgression *v17; 
  unsigned __int64 UserID; 

  if ( this->m_pendingRegistrationController != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 337, ASSERT_TYPE_SANITY, "( !IsRegistering() )", (const char *)&queryFormat, "!IsRegistering()", -2i64) )
    __debugbreak();
  if ( this->m_crossPlatformProgression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 338, ASSERT_TYPE_SANITY, "( m_crossPlatformProgression == nullptr )", (const char *)&queryFormat, "m_crossPlatformProgression == nullptr") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
  if ( !DWLogin::succeeded(Login) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 339, ASSERT_TYPE_SANITY, "( DWServicesAccess::GetInstance().GetLogin( controllerIndex ).succeeded() )", (const char *)&queryFormat, "DWServicesAccess::GetInstance().GetLogin( controllerIndex ).succeeded()") )
    __debugbreak();
  if ( Live_UserIsGuest(controllerIndex) )
  {
    Com_PrintError(25, "[LOGINREG] UpgradeFromExisting called with guest account for controller(%u)\n.", (unsigned int)controllerIndex);
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRegistrationFailure", GUEST_ACCOUNT, 0);
    return 0;
  }
  else
  {
    v9 = (bdLoginResult *)bdMemory::allocate(0xAB60ui64);
    v10 = NULL;
    if ( v9 )
      bdLoginResult::bdLoginResult(v9);
    else
      v11 = NULL;
    this->m_tempLoginResult = v11;
    v12 = DWServicesAccess::GetInstance();
    LoginResult = DWServicesAccess::getLoginResult(v12, controllerIndex);
    bdLoginResult::operator=(this->m_tempLoginResult, LoginResult);
    this->m_pendingRegistrationController = controllerIndex;
    v14 = (bdEnableCrossplatformProgression *)bdMemory::allocate(0x590ui64);
    password = loginInfo->password;
    email = loginInfo->email;
    if ( v14 )
    {
      bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(v14, this->m_tempLoginResult, email, password);
      v10 = v17;
    }
    this->m_crossPlatformProgression = v10;
    UserID = bdLoginResult::getUserID(this->m_tempLoginResult);
    Com_Printf(25, "[LOGINREG] Sending login to account request for controller(%u), unoID(%zu), with email(%s), password(%s).\n", (unsigned int)controllerIndex, UserID, email, password);
    this->m_registrationState = QOSING;
    return 1;
  }
}

/*
==============
Online_AccountRegistration::UpgradeToFull
==============
*/
char Online_AccountRegistration::UpgradeToFull(Online_AccountRegistration *this, const int controllerIndex, const Online_AccountRegistration::CreateInfo *createInfo)
{
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  Online_AccountRegistration::AccountRegistrationErrorCode v8; 
  const dvar_t *v10; 
  bdUnoAccountInfo *v11; 
  bdEnableCrossplatformProgression *v12; 
  bdUnoAccountInfo *v13; 
  bdLoginResult *v14; 
  bdLoginResult *v15; 
  DWServicesAccess *v16; 
  const bdLoginResult *LoginResult; 
  bdEnableCrossplatformProgression *v18; 
  bdEnableCrossplatformProgression *v19; 
  unsigned __int64 UserID; 

  if ( this->m_pendingRegistrationController != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 301, ASSERT_TYPE_SANITY, "( !IsRegistering() )", (const char *)&queryFormat, "!IsRegistering()") )
    __debugbreak();
  if ( this->m_crossPlatformProgression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 302, ASSERT_TYPE_SANITY, "( m_crossPlatformProgression == nullptr )", (const char *)&queryFormat, "m_crossPlatformProgression == nullptr") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
  if ( !DWLogin::succeeded(Login) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_account_registration.cpp", 303, ASSERT_TYPE_SANITY, "( DWServicesAccess::GetInstance().GetLogin( controllerIndex ).succeeded() )", (const char *)&queryFormat, "DWServicesAccess::GetInstance().GetLogin( controllerIndex ).succeeded()") )
    __debugbreak();
  if ( Live_UserIsGuest(controllerIndex) )
  {
    Com_PrintError(25, "[LOGINREG] UpgradeToFull called with guest account for controller(%u)\n.", (unsigned int)controllerIndex);
    v8 = GUEST_ACCOUNT;
LABEL_12:
    Online_AccountRegistration::SendFailureToLua(this, controllerIndex, "AccountRegistrationFailure", v8, 0);
    return 0;
  }
  v10 = DVARBOOL_accountreg_rename_profanity_check;
  if ( !DVARBOOL_accountreg_rename_profanity_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "accountreg_rename_profanity_check") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && ProfanityFilter_IsBadWord(controllerIndex, createInfo->username) )
  {
    Com_PrintError(25, "[LOGINREG] UpgradeToFull called with inappropriate username (%s) for controller(%u)\n.", createInfo->username, (unsigned int)controllerIndex);
    v8 = USERNAME_PROFANITY;
    goto LABEL_12;
  }
  v11 = (bdUnoAccountInfo *)bdMemory::allocate(0x1610ui64);
  v12 = NULL;
  if ( v11 )
    bdUnoAccountInfo::bdUnoAccountInfo(v11);
  else
    v13 = NULL;
  this->m_tempAccountInfo = v13;
  Online_AccountRegistration::FillUnoAccountInfo(createInfo, v13);
  v14 = (bdLoginResult *)bdMemory::allocate(0xAB60ui64);
  if ( v14 )
    bdLoginResult::bdLoginResult(v14);
  else
    v15 = NULL;
  this->m_tempLoginResult = v15;
  v16 = DWServicesAccess::GetInstance();
  LoginResult = DWServicesAccess::getLoginResult(v16, controllerIndex);
  bdLoginResult::operator=(this->m_tempLoginResult, LoginResult);
  this->m_pendingRegistrationController = controllerIndex;
  v18 = (bdEnableCrossplatformProgression *)bdMemory::allocate(0x590ui64);
  if ( v18 )
  {
    bdEnableCrossplatformProgression::bdEnableCrossplatformProgression(v18, this->m_tempLoginResult, this->m_tempAccountInfo);
    v12 = v19;
  }
  this->m_crossPlatformProgression = v12;
  UserID = bdLoginResult::getUserID(this->m_tempLoginResult);
  Com_Printf(25, "[LOGINREG] Sending upgrade account request for controller(%u), unoID(%zu), with email(%s).\n", (unsigned int)controllerIndex, UserID, createInfo->email);
  this->m_registrationState = QOSING;
  return 1;
}

