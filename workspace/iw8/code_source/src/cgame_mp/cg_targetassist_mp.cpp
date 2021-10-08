/*
==============
CgTargetAssistMP::CgTargetAssistMP
==============
*/

void __fastcall CgTargetAssistMP::CgTargetAssistMP(CgTargetAssistMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgTargetAssistMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgTargetAssistMP::GetPlayerTeam
==============
*/

team_t __fastcall CgTargetAssistMP::GetPlayerTeam(CgTargetAssistMP *this, const __int16 entNum)
{
  return ?GetPlayerTeam@CgTargetAssistMP@@UEBA?AW4team_t@@F@Z(this, entNum);
}

/*
==============
CgTargetAssistMP::GetTargetStorage
==============
*/

BgTargetAssist::TargetInfo *__fastcall CgTargetAssistMP::GetTargetStorage(CgTargetAssistMP *this)
{
  return ?GetTargetStorage@CgTargetAssistMP@@MEAAPEAUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
CgTargetAssistMP::GetTargetStorage
==============
*/

const BgTargetAssist::TargetInfo *__fastcall CgTargetAssistMP::GetTargetStorage(CgTargetAssistMP *this)
{
  return ?GetTargetStorage@CgTargetAssistMP@@MEBAPEBUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
CgTargetAssistMP::EvaluatePotentialTargetEntity
==============
*/

void __fastcall CgTargetAssistMP::EvaluatePotentialTargetEntity(CgTargetAssistMP *this, const centity_t *cent)
{
  ?EvaluatePotentialTargetEntity@CgTargetAssistMP@@QEAAXPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgTargetAssistMP::GetMaxTargetCount
==============
*/

int __fastcall CgTargetAssistMP::GetMaxTargetCount(CgTargetAssistMP *this)
{
  return ?GetMaxTargetCount@CgTargetAssistMP@@MEBAHXZ(this);
}

/*
==============
CgTargetAssistMP::CgTargetAssistMP
==============
*/
void CgTargetAssistMP::CgTargetAssistMP(CgTargetAssistMP *this, const LocalClientNum_t localClientNum)
{
  this->CgTargetAssist::m_localClientNum = localClientNum;
  this->__vftable = (CgTargetAssistMP_vtbl *)&BgTargetAssist::`vftable';
  this->m_targetCount = 0;
  this->__vftable = (CgTargetAssistMP_vtbl *)&CgTargetAssistMP::`vftable';
  memset_0(this->m_targetInfo, 0, sizeof(this->m_targetInfo));
  this->m_localClientNum = localClientNum;
}

/*
==============
CgTargetAssistMP::EvaluatePotentialTargetEntity
==============
*/
void CgTargetAssistMP::EvaluatePotentialTargetEntity(CgTargetAssistMP *this, const centity_t *cent)
{
  entityState_t *p_nextState; 
  bool IsPlayerOrAgentEntity; 
  LocalClientNum_t m_localClientNum; 
  CgHandler *v7; 
  __int16 v8; 
  LocalClientNum_t v9; 
  const cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v13; 
  CgVehicleSystem *VehicleSystem; 
  team_t v15; 
  centity_t *Entity; 
  entityState_t *v17; 
  LocalClientNum_t v18; 
  CgHandler *Handler; 
  __int64 v20; 
  BgTargetAssist::TargetInfo targetInfo; 
  team_t outTeam; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_targetassist_mp.cpp", 46, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_targetassist_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
  {
    p_nextState = &cent->nextState;
    if ( BgTargetAssist::IsEntityPotentialTarget(this, &cent->nextState) )
    {
      IsPlayerOrAgentEntity = BG_IsPlayerOrAgentEntity(&cent->nextState);
      targetInfo.entNum = p_nextState->number;
      m_localClientNum = this->m_localClientNum;
      if ( !IsPlayerOrAgentEntity )
      {
        if ( cent->nextState.eType == ET_VEHICLE )
        {
          VehicleSystem = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
          if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_targetassist_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
            __debugbreak();
          v15 = VehicleSystem->GetTeam(VehicleSystem, p_nextState);
        }
        else
        {
          Entity = CG_GetEntity(m_localClientNum, cent->nextState.otherEntityNum);
          if ( (Entity->flags & 1) == 0 )
            return;
          v17 = &Entity->nextState;
          if ( !BG_IsPlayerOrAgentEntity(&Entity->nextState) )
            return;
          v18 = this->m_localClientNum;
          outTeam = TEAM_ZERO;
          Handler = CgHandler::getHandler(v18);
          CgHandler::GetPlayerTeam(Handler, v17->number, &outTeam);
          v15 = outTeam;
        }
        targetInfo.teamIndex = truncate_cast<short,enum team_t>(v15);
LABEL_25:
        BgTargetAssist::AddTarget(this, &targetInfo);
        return;
      }
      outTeam = TEAM_ZERO;
      v7 = CgHandler::getHandler(m_localClientNum);
      CgHandler::GetPlayerTeam(v7, targetInfo.entNum, &outTeam);
      v8 = truncate_cast<short,enum team_t>(outTeam);
      v9 = this->m_localClientNum;
      targetInfo.teamIndex = v8;
      LocalClientGlobals = CG_GetLocalClientGlobals(v9);
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, cent->nextState.clientNum);
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0xBu);
      v13 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex < 0 )
        goto LABEL_25;
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v20) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v20, 64) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v13 & 0x1F)) & CharacterInfo->perks.array[v13 >> 5]) == 0 )
        goto LABEL_25;
    }
  }
}

/*
==============
CgTargetAssistMP::GetMaxTargetCount
==============
*/
__int64 CgTargetAssistMP::GetMaxTargetCount(CgTargetAssistMP *this)
{
  return 600i64;
}

/*
==============
CgTargetAssistMP::GetPlayerTeam
==============
*/
__int64 CgTargetAssistMP::GetPlayerTeam(CgTargetAssistMP *this, const __int16 entNum)
{
  int v2; 
  centity_t *Entity; 
  centity_t *v5; 
  CgVehicleSystem *VehicleSystem; 
  CgHandler *Handler; 
  team_t outTeam; 

  v2 = entNum;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  v5 = Entity;
  if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_VEHICLE )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_targetassist_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    return ((__int64 (__fastcall *)(CgVehicleSystem *, entityState_t *))VehicleSystem->GetTeam)(VehicleSystem, &v5->nextState);
  }
  else
  {
    Handler = CgHandler::getHandler(this->m_localClientNum);
    CgHandler::GetPlayerTeam(Handler, v2, &outTeam);
    return (unsigned int)outTeam;
  }
}

/*
==============
CgTargetAssistMP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *CgTargetAssistMP::GetTargetStorage(CgTargetAssistMP *this)
{
  return this->m_targetInfo;
}

/*
==============
CgTargetAssistMP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *CgTargetAssistMP::GetTargetStorage(CgTargetAssistMP *this)
{
  return this->m_targetInfo;
}

