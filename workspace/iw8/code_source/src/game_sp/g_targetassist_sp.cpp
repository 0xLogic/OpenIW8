/*
==============
GTargetAssistSP::GTargetAssistSP
==============
*/

void __fastcall GTargetAssistSP::GTargetAssistSP(GTargetAssistSP *this)
{
  ??0GTargetAssistSP@@QEAA@XZ(this);
}

/*
==============
GTargetAssistSP::GetMaxTargetCount
==============
*/

int __fastcall GTargetAssistSP::GetMaxTargetCount(GTargetAssistSP *this)
{
  return ?GetMaxTargetCount@GTargetAssistSP@@MEBAHXZ(this);
}

/*
==============
GTargetAssistSP::GetTargetStorage
==============
*/

const BgTargetAssist::TargetInfo *__fastcall GTargetAssistSP::GetTargetStorage(GTargetAssistSP *this)
{
  return ?GetTargetStorage@GTargetAssistSP@@MEBAPEBUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
GTargetAssistSP::EvaluatePotentialTargetEntity
==============
*/

void __fastcall GTargetAssistSP::EvaluatePotentialTargetEntity(GTargetAssistSP *this, const gentity_s *ent)
{
  ?EvaluatePotentialTargetEntity@GTargetAssistSP@@UEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GTargetAssistSP::GetTargetStorage
==============
*/

BgTargetAssist::TargetInfo *__fastcall GTargetAssistSP::GetTargetStorage(GTargetAssistSP *this)
{
  return ?GetTargetStorage@GTargetAssistSP@@MEAAPEAUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
GTargetAssistSP::GTargetAssistSP
==============
*/
void GTargetAssistSP::GTargetAssistSP(GTargetAssistSP *this)
{
  GTargetAssist::GTargetAssist(this);
  this->__vftable = (GTargetAssistSP_vtbl *)&GTargetAssistSP::`vftable';
  memset_0(this->m_targetInfo, 0, sizeof(this->m_targetInfo));
}

/*
==============
GTargetAssistSP::EvaluatePotentialTargetEntity
==============
*/
void GTargetAssistSP::EvaluatePotentialTargetEntity(GTargetAssistSP *this, const gentity_s *ent)
{
  unsigned int eType; 
  int v5; 
  actor_s *actor; 
  team_t eTeam; 
  GVehicles *v8; 
  BgTargetAssist::TargetInfo targetInfo; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_targetassist_sp.cpp", 46, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x11u) && BgTargetAssist::IsEntityPotentialTarget(this, &ent->s) )
  {
    if ( (eType = (unsigned __int16)ent->s.eType, (unsigned __int16)eType <= 0x13u) && (v5 = 540674, _bittest(&v5, eType)) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 8u) )
    {
      targetInfo.entNum = ent->s.number;
      if ( (_WORD)eType == 19 )
      {
        actor = ent->actor;
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_targetassist_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
          __debugbreak();
        eTeam = actor->sentient->eTeam;
      }
      else if ( (_WORD)eType == 14 )
      {
        if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
          __debugbreak();
        v8 = GVehicles::ms_gVehiclesSystem;
        if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_targetassist_sp.cpp", (_DWORD)GVehicles::ms_gVehiclesSystem + 81, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
          __debugbreak();
        eTeam = v8->GetTeam(v8, &ent->s);
      }
      else
      {
        eTeam = TEAM_TWO;
        if ( (_WORD)eType != 1 )
          eTeam = TEAM_ONE;
      }
      targetInfo.teamIndex = truncate_cast<short,enum team_t>(eTeam);
      BgTargetAssist::AddTarget(this, &targetInfo);
    }
  }
}

/*
==============
GTargetAssistSP::GetMaxTargetCount
==============
*/
__int64 GTargetAssistSP::GetMaxTargetCount(GTargetAssistSP *this)
{
  return 200i64;
}

/*
==============
GTargetAssistSP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *GTargetAssistSP::GetTargetStorage(GTargetAssistSP *this)
{
  return this->m_targetInfo;
}

/*
==============
GTargetAssistSP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *GTargetAssistSP::GetTargetStorage(GTargetAssistSP *this)
{
  return this->m_targetInfo;
}

