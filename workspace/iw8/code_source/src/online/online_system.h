/*
==============
OnlineSystem::OnFrontEnd_FreeSystemsMemory
==============
*/

void __fastcall OnlineSystem::OnFrontEnd_FreeSystemsMemory(OnlineSystem *this)
{
  ?OnFrontEnd_FreeSystemsMemory@OnlineSystem@@UEAAXXZ(this);
}

/*
==============
OnlineSystem::OnUserStatsFetched
==============
*/

void __fastcall OnlineSystem::OnUserStatsFetched(OnlineSystem *this, const int __formal, StatsSource a3)
{
  ?OnUserStatsFetched@OnlineSystem@@UEAAXHW4StatsSource@@@Z(this, __formal, a3);
}

/*
==============
OnlineSystem::ShowLogOutput
==============
*/

bool __fastcall OnlineSystem::ShowLogOutput(OnlineSystem *this)
{
  return ?ShowLogOutput@OnlineSystem@@UEAA_NXZ(this);
}

/*
==============
OnlineSystem::SetNextSystem
==============
*/

void __fastcall OnlineSystem::SetNextSystem(OnlineSystem *this, OnlineSystem *system)
{
  ?SetNextSystem@OnlineSystem@@QEAAXPEAV1@@Z(this, system);
}

/*
==============
OnlineSystem::OnDWMail
==============
*/

void __fastcall OnlineSystem::OnDWMail(OnlineSystem *this, const int __formal, const char *a3, const int a4, bdMailInfo *__formala)
{
  ?OnDWMail@OnlineSystem@@UEAAXHPEBDHPEAVbdMailInfo@@@Z(this, __formal, a3, a4, __formala);
}

/*
==============
OnlineSystem::OnFrontEnd_AllocateSystemsMemory
==============
*/

void __fastcall OnlineSystem::OnFrontEnd_AllocateSystemsMemory(OnlineSystem *this)
{
  ?OnFrontEnd_AllocateSystemsMemory@OnlineSystem@@UEAAXXZ(this);
}

/*
==============
OnlineSystem::DebugLog
==============
*/

void __fastcall OnlineSystem::DebugLog(OnlineSystem *this, const char *msg)
{
  ?DebugLog@OnlineSystem@@QEAAXPEBD@Z(this, msg);
}

/*
==============
OnlineSystem::OnDWInstantMessage
==============
*/

void __fastcall OnlineSystem::OnDWInstantMessage(OnlineSystem *this, const int __formal, unsigned __int64 a3, const char *a4, const char *__formala, unsigned int a6)
{
  ?OnDWInstantMessage@OnlineSystem@@UEAAXH_KPEBD1I@Z(this, __formal, a3, a4, __formala, a6);
}

/*
==============
OnlineSystem::OnFrontEnd_AllocateSystemsMemory
==============
*/
void OnlineSystem::OnFrontEnd_AllocateSystemsMemory(OnlineSystem *this)
{
  ;
}

/*
==============
OnlineSystem::OnFrontEnd_FreeSystemsMemory
==============
*/
void OnlineSystem::OnFrontEnd_FreeSystemsMemory(OnlineSystem *this)
{
  ;
}

/*
==============
OnlineSystem::OnUserStatsFetched
==============
*/
void OnlineSystem::OnUserStatsFetched(OnlineSystem *this, const int __formal, StatsSource a3)
{
  ;
}

/*
==============
OnlineSystem::OnDWInstantMessage
==============
*/
void OnlineSystem::OnDWInstantMessage(OnlineSystem *this, const int __formal, unsigned __int64 a3, const char *a4)
{
  ;
}

/*
==============
OnlineSystem::OnDWMail
==============
*/
void OnlineSystem::OnDWMail(OnlineSystem *this, const int __formal, const char *a3, const int a4)
{
  ;
}

/*
==============
OnlineSystem::ShowLogOutput
==============
*/
bool OnlineSystem::ShowLogOutput(OnlineSystem *this)
{
  return Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") != 0;
}

/*
==============
OnlineSystem::DebugLog
==============
*/
void OnlineSystem::DebugLog(OnlineSystem *this, const char *msg)
{
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || this->ShowLogOutput(this) )
    Com_Printf(25, "%s: %s", this->m_name, msg);
}

/*
==============
OnlineSystem::SetNextSystem
==============
*/
void OnlineSystem::SetNextSystem(OnlineSystem *this, OnlineSystem *system)
{
  if ( this->m_nextSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_system.h", 82, ASSERT_TYPE_ASSERT, "(m_nextSystem == nullptr)", (const char *)&queryFormat, "m_nextSystem == nullptr") )
      __debugbreak();
    this->m_nextSystem = system;
  }
  else
  {
    this->m_nextSystem = system;
  }
}

