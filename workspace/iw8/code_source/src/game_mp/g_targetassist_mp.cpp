/*
==============
GTargetAssistMP::EvaluatePotentialTargetEntity
==============
*/

void __fastcall GTargetAssistMP::EvaluatePotentialTargetEntity(GTargetAssistMP *this, const gentity_s *ent)
{
  ?EvaluatePotentialTargetEntity@GTargetAssistMP@@UEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GTargetAssistMP::GetTargetStorage
==============
*/

const BgTargetAssist::TargetInfo *__fastcall GTargetAssistMP::GetTargetStorage(GTargetAssistMP *this)
{
  return ?GetTargetStorage@GTargetAssistMP@@MEBAPEBUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
GTargetAssistMP::GetTargetStorage
==============
*/

BgTargetAssist::TargetInfo *__fastcall GTargetAssistMP::GetTargetStorage(GTargetAssistMP *this)
{
  return ?GetTargetStorage@GTargetAssistMP@@MEAAPEAUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
GTargetAssistMP::GTargetAssistMP
==============
*/

void __fastcall GTargetAssistMP::GTargetAssistMP(GTargetAssistMP *this)
{
  ??0GTargetAssistMP@@QEAA@XZ(this);
}

/*
==============
GTargetAssistMP::GetMaxTargetCount
==============
*/

int __fastcall GTargetAssistMP::GetMaxTargetCount(GTargetAssistMP *this)
{
  return ?GetMaxTargetCount@GTargetAssistMP@@MEBAHXZ(this);
}

/*
==============
GTargetAssistMP::GTargetAssistMP
==============
*/
void GTargetAssistMP::GTargetAssistMP(GTargetAssistMP *this)
{
  GTargetAssist::GTargetAssist(this);
  this->__vftable = (GTargetAssistMP_vtbl *)&GTargetAssistMP::`vftable';
  memset_0(this->m_targetInfo, 0, sizeof(this->m_targetInfo));
}

/*
==============
GTargetAssistMP::EvaluatePotentialTargetEntity
==============
*/
void GTargetAssistMP::EvaluatePotentialTargetEntity(GTargetAssistMP *this, const gentity_s *ent)
{
  const gentity_s *v2; 
  bool IsPlayerOrAgentEntity; 
  const playerState_s *EntityPlayerStateConst; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v7; 
  GVehicles *v8; 
  team_t v9; 
  __int16 otherEntityNum; 
  GHandler *Handler; 
  __int64 v12; 
  BgTargetAssist::TargetInfo targetInfo; 
  team_t outTeam; 

  v2 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_targetassist_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v2->s.lerp.eFlags, ACTIVE, 0x11u) && BgTargetAssist::IsEntityPotentialTarget(this, &v2->s) )
  {
    IsPlayerOrAgentEntity = BG_IsPlayerOrAgentEntity(&v2->s);
    targetInfo.entNum = v2->s.number;
    if ( IsPlayerOrAgentEntity )
    {
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(v2);
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0xBu);
      v7 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex < 0 )
        goto LABEL_25;
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v12) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, 64) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v7 & 0x1F)) & EntityPlayerStateConst->perks.array[v7 >> 5]) == 0 )
        goto LABEL_25;
    }
    else
    {
      if ( v2->s.eType == ET_VEHICLE )
      {
        if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
          __debugbreak();
        v8 = GVehicles::ms_gVehiclesSystem;
        if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_targetassist_mp.cpp", (_DWORD)GVehicles::ms_gVehiclesSystem + 91, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
          __debugbreak();
        v9 = v8->GetTeam(v8, &v2->s);
        goto LABEL_26;
      }
      otherEntityNum = v2->s.otherEntityNum;
      if ( otherEntityNum != 2047 )
      {
        v2 = &g_entities[otherEntityNum];
        if ( v2 )
        {
          if ( G_IsEntityInUse(otherEntityNum) && BG_IsPlayerOrAgentEntity(&v2->s) )
          {
LABEL_25:
            outTeam = TEAM_ZERO;
            Handler = GHandler::getHandler();
            GHandler::GetPlayerTeam(Handler, v2->s.number, &outTeam);
            v9 = outTeam;
LABEL_26:
            targetInfo.teamIndex = truncate_cast<short,enum team_t>(v9);
            BgTargetAssist::AddTarget(this, &targetInfo);
          }
        }
      }
    }
  }
}

/*
==============
GTargetAssistMP::GetMaxTargetCount
==============
*/
__int64 GTargetAssistMP::GetMaxTargetCount(GTargetAssistMP *this)
{
  return 600i64;
}

/*
==============
GTargetAssistMP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *GTargetAssistMP::GetTargetStorage(GTargetAssistMP *this)
{
  return this->m_targetInfo;
}

/*
==============
GTargetAssistMP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *GTargetAssistMP::GetTargetStorage(GTargetAssistMP *this)
{
  return this->m_targetInfo;
}

