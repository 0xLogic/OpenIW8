/*
==============
Online_DailyChurnLogin::ControllerFrame
==============
*/

void __fastcall Online_DailyChurnLogin::ControllerFrame(Online_DailyChurnLogin *this, const int controllerIndex)
{
  ?ControllerFrame@Online_DailyChurnLogin@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_DailyChurnLogin::Init
==============
*/

bool __fastcall Online_DailyChurnLogin::Init(Online_DailyChurnLogin *this)
{
  return ?Init@Online_DailyChurnLogin@@UEAA_NXZ(this);
}

/*
==============
Online_DailyChurnLogin::OutputCurrentState
==============
*/

void __fastcall Online_DailyChurnLogin::OutputCurrentState(Online_DailyChurnLogin *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_DailyChurnLogin@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_DailyChurnLogin::RegisterLuaFunctions
==============
*/

void __fastcall Online_DailyChurnLogin::RegisterLuaFunctions(Online_DailyChurnLogin *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_DailyChurnLogin@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_DailyChurnLogin::UpdateReward
==============
*/

bool __fastcall Online_DailyChurnLogin::UpdateReward(Online_DailyChurnLogin *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateReward@Online_DailyChurnLogin@@QEAA_NHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, json, complete);
}

/*
==============
Online_DailyChurnLogin::Frame
==============
*/

void __fastcall Online_DailyChurnLogin::Frame(Online_DailyChurnLogin *this)
{
  ?Frame@Online_DailyChurnLogin@@UEAAXXZ(this);
}

/*
==============
Online_DailyChurnLogin::GetInstance
==============
*/

Online_DailyChurnLogin *__fastcall Online_DailyChurnLogin::GetInstance()
{
  return ?GetInstance@Online_DailyChurnLogin@@SAAEAV1@XZ();
}

/*
==============
Online_DailyChurnLogin::OnSignedIn
==============
*/

void __fastcall Online_DailyChurnLogin::OnSignedIn(Online_DailyChurnLogin *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_DailyChurnLogin@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_DailyChurnLogin::GetInstancePtr
==============
*/

Online_DailyChurnLogin *__fastcall Online_DailyChurnLogin::GetInstancePtr()
{
  return ?GetInstancePtr@Online_DailyChurnLogin@@SAPEAV1@XZ();
}

/*
==============
Online_DailyChurnLogin::OnSignedOut
==============
*/

void __fastcall Online_DailyChurnLogin::OnSignedOut(Online_DailyChurnLogin *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_DailyChurnLogin@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_DailyChurnLogin::OnRegistered
==============
*/

void __fastcall Online_DailyChurnLogin::OnRegistered(Online_DailyChurnLogin *this)
{
  ?OnRegistered@Online_DailyChurnLogin@@UEAAXXZ(this);
}

/*
==============
Online_DailyChurnLogin::Uninit
==============
*/

void __fastcall Online_DailyChurnLogin::Uninit(Online_DailyChurnLogin *this)
{
  ?Uninit@Online_DailyChurnLogin@@UEAAXXZ(this);
}

/*
==============
Online_DailyChurnLogin::OnDisconnect
==============
*/

void __fastcall Online_DailyChurnLogin::OnDisconnect(Online_DailyChurnLogin *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_DailyChurnLogin@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_DailyChurnLogin::OnUnregistered
==============
*/

void __fastcall Online_DailyChurnLogin::OnUnregistered(Online_DailyChurnLogin *this)
{
  ?OnUnregistered@Online_DailyChurnLogin@@UEAAXXZ(this);
}

/*
==============
Online_DailyChurnLogin::OnRegistered
==============
*/
void Online_DailyChurnLogin::OnRegistered(Online_DailyChurnLogin *this)
{
  ;
}

/*
==============
Online_DailyChurnLogin::OnUnregistered
==============
*/
void Online_DailyChurnLogin::OnUnregistered(Online_DailyChurnLogin *this)
{
  ;
}

/*
==============
Online_DailyChurnLogin::Init
==============
*/
char Online_DailyChurnLogin::Init(Online_DailyChurnLogin *this)
{
  return 1;
}

/*
==============
Online_DailyChurnLogin::Uninit
==============
*/
void Online_DailyChurnLogin::Uninit(Online_DailyChurnLogin *this)
{
  ;
}

/*
==============
Online_DailyChurnLogin::Frame
==============
*/
void Online_DailyChurnLogin::Frame(Online_DailyChurnLogin *this)
{
  ;
}

/*
==============
Online_DailyChurnLogin::ControllerFrame
==============
*/
void Online_DailyChurnLogin::ControllerFrame(Online_DailyChurnLogin *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_DailyChurnLogin::OnSignedIn
==============
*/
void Online_DailyChurnLogin::OnSignedIn(Online_DailyChurnLogin *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_DailyChurnLogin::OnSignedOut
==============
*/
void Online_DailyChurnLogin::OnSignedOut(Online_DailyChurnLogin *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_DailyChurnLogin::OnDisconnect
==============
*/
void Online_DailyChurnLogin::OnDisconnect(Online_DailyChurnLogin *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_DailyChurnLogin::RegisterLuaFunctions
==============
*/
void Online_DailyChurnLogin::RegisterLuaFunctions(Online_DailyChurnLogin *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "DailyChurnLogin", DailyChurnLogin_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_DailyChurnLogin::OutputCurrentState
==============
*/
void Online_DailyChurnLogin::OutputCurrentState(Online_DailyChurnLogin *this, const int controllerIndex)
{
  Com_Printf(25, "Online_DailyChurnLogin DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  __asm
  {
    vmovsd  xmm3, cs:__real@3fcc000000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
  Com_Printf(25, "Online_DailyChurnLogin DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_SetDailyChurnLoginSeen
==============
*/
__int64 LUI_CoD_LuaCall_SetDailyChurnLoginSeen(lua_State *luaVM)
{
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DailyChurnLogin.SetHasBeenSeen( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DailyChurnLogin.SetHasBeenSeen( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[_EAX].isNew = 0;
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetDailyChurnLoginReward
==============
*/
__int64 LUI_CoD_LuaCall_GetDailyChurnLoginReward(lua_State *luaVM)
{
  __int64 v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: DailyChurnLogin.GetReward( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DailyChurnLogin.GetReward( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  v4 = _EAX;
  j_lua_createtable(luaVM, 0, 0);
  LUI_SetTableInt("ProductID", Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[v4].productID, LUI_luaVM);
  LUI_SetTableInt("ProductAmount", Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[v4].productAmount, LUI_luaVM);
  LUI_SetTableInt("CurrencyID", Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[v4].currencyID, LUI_luaVM);
  LUI_SetTableInt("CurrencyAmount", Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[v4].currencyAmount, LUI_luaVM);
  LUI_SetTableBool("IsNew", Online_DailyChurnLogin::s_instance.m_dailyChurnLoginReward[v4].isNew, LUI_luaVM);
  return 1i64;
}

/*
==============
Online_DailyChurnLogin::GetInstance
==============
*/
Online_DailyChurnLogin *Online_DailyChurnLogin::GetInstance()
{
  return &Online_DailyChurnLogin::s_instance;
}

/*
==============
Online_DailyChurnLogin::GetInstancePtr
==============
*/
Online_DailyChurnLogin *Online_DailyChurnLogin::GetInstancePtr()
{
  return &Online_DailyChurnLogin::s_instance;
}

/*
==============
Online_DailyChurnLogin::UpdateReward
==============
*/
char Online_DailyChurnLogin::UpdateReward(Online_DailyChurnLogin *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  __int64 v5; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  char v11; 
  lua_State *v13; 
  LocalClientNum_t ClientFromController; 
  bdJSONDeserializer v16; 
  bdJSONDeserializer value; 
  __int64 v18; 
  char v19[32]; 

  v18 = -2i64;
  v5 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v16);
      bdJSONDeserializer::getElementByIndex(&value, i, &v16);
      bdJSONDeserializer::getString(&v16, "type", v19, 0x20u);
      v8 = 0i64;
      v9 = 0x7FFFFFFFi64;
      do
      {
        v10 = v19[v8];
        v11 = aGrantProduct[v8++];
        if ( !v9-- )
          break;
        if ( v10 != v11 )
          goto LABEL_12;
      }
      while ( v10 );
      if ( bdJSONDeserializer::hasKey(&v16, "productID") && bdJSONDeserializer::getInt32(&v16, "productID", &this->m_dailyChurnLoginReward[v5].productID) )
      {
        this->m_dailyChurnLoginReward[v5].isNew = 1;
        v13 = LUI_luaVM;
        ClientFromController = CL_Mgr_GetClientFromController(v5);
        if ( LUI_BeginEvent(ClientFromController, "daily_login_churn_reward", v13) )
        {
          LUI_SetTableBool("IsNew", 1, LUI_luaVM);
          LUI_SetTableInt("ProductID", this->m_dailyChurnLoginReward[v5].productID, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
      }
LABEL_12:
      bdJSONDeserializer::~bdJSONDeserializer(&v16);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return 1;
}

