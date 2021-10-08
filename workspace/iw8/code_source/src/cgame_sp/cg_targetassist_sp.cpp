/*
==============
CgTargetAssistSP::GetTargetStorage
==============
*/

const BgTargetAssist::TargetInfo *__fastcall CgTargetAssistSP::GetTargetStorage(CgTargetAssistSP *this)
{
  return ?GetTargetStorage@CgTargetAssistSP@@MEBAPEBUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
CgTargetAssistSP::CgTargetAssistSP
==============
*/

void __fastcall CgTargetAssistSP::CgTargetAssistSP(CgTargetAssistSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgTargetAssistSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgTargetAssistSP::GetMaxTargetCount
==============
*/

int __fastcall CgTargetAssistSP::GetMaxTargetCount(CgTargetAssistSP *this)
{
  return ?GetMaxTargetCount@CgTargetAssistSP@@MEBAHXZ(this);
}

/*
==============
CgTargetAssistSP::GetTargetStorage
==============
*/

BgTargetAssist::TargetInfo *__fastcall CgTargetAssistSP::GetTargetStorage(CgTargetAssistSP *this)
{
  return ?GetTargetStorage@CgTargetAssistSP@@MEAAPEAUTargetInfo@BgTargetAssist@@XZ(this);
}

/*
==============
CgTargetAssistSP::GetPlayerTeam
==============
*/

team_t __fastcall CgTargetAssistSP::GetPlayerTeam(CgTargetAssistSP *this, const __int16 entNum)
{
  return ?GetPlayerTeam@CgTargetAssistSP@@UEBA?AW4team_t@@F@Z(this, entNum);
}

/*
==============
CgTargetAssistSP::EvaluatePotentialTargetEntity
==============
*/

void __fastcall CgTargetAssistSP::EvaluatePotentialTargetEntity(CgTargetAssistSP *this, const centity_t *cent)
{
  ?EvaluatePotentialTargetEntity@CgTargetAssistSP@@QEAAXPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgTargetAssistSP::CgTargetAssistSP
==============
*/
void CgTargetAssistSP::CgTargetAssistSP(CgTargetAssistSP *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgTargetAssistSP_vtbl *)&BgTargetAssist::`vftable';
  this->m_targetCount = 0;
  this->__vftable = (CgTargetAssistSP_vtbl *)&CgTargetAssistSP::`vftable';
  memset_0(this->m_targetInfo, 0, sizeof(this->m_targetInfo));
}

/*
==============
CgTargetAssistSP::EvaluatePotentialTargetEntity
==============
*/
void CgTargetAssistSP::EvaluatePotentialTargetEntity(CgTargetAssistSP *this, const centity_t *cent)
{
  LerpEntityState *p_lerp; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  int v7; 
  __int16 number; 
  __int16 v9; 
  __int64 m_localClientNum; 
  CgVehicleSystem **v11; 
  CgVehicleSystem *v12; 
  team_t v13; 
  __int64 v14; 
  __int64 v15; 
  BgTargetAssist::TargetInfo targetInfo; 
  int team; 
  int actorIndex; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_targetassist_sp.cpp", 39, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_lerp = &cent->nextState.lerp;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
  {
    p_nextState = &cent->nextState;
    if ( BgTargetAssist::IsEntityPotentialTarget(this, &cent->nextState) )
    {
      if ( (eType = cent->nextState.eType, (unsigned __int16)eType <= ET_ACTOR) && (v7 = 540674, _bittest(&v7, eType)) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 8u) )
      {
        number = p_nextState->number;
        targetInfo.entNum = p_nextState->number;
        if ( eType == ET_ACTOR )
        {
          actorIndex = 0;
          team = 0;
          CG_GetClientActorIndexAndTeam(number, &actorIndex, &team);
          v9 = team;
          if ( (unsigned int)(team + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)team, "signed", team) )
            __debugbreak();
          targetInfo.teamIndex = v9;
        }
        else
        {
          if ( eType == ET_VEHICLE )
          {
            m_localClientNum = this->m_localClientNum;
            if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
              __debugbreak();
            if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
            {
              LODWORD(v15) = CgVehicleSystem::ms_allocatedCount;
              LODWORD(v14) = m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
                __debugbreak();
            }
            v11 = &CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum];
            if ( !*v11 )
            {
              LODWORD(v15) = m_localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v15) )
                __debugbreak();
            }
            v12 = *v11;
            if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_targetassist_sp.cpp", 82, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
              __debugbreak();
            v13 = v12->GetTeam(v12, p_nextState);
          }
          else
          {
            v13 = TEAM_TWO;
            if ( eType != ET_PLAYER )
              v13 = TEAM_ONE;
          }
          targetInfo.teamIndex = truncate_cast<short,enum team_t>(v13);
        }
        BgTargetAssist::AddTarget(this, &targetInfo);
      }
    }
  }
}

/*
==============
CgTargetAssistSP::GetMaxTargetCount
==============
*/
__int64 CgTargetAssistSP::GetMaxTargetCount(CgTargetAssistSP *this)
{
  return 200i64;
}

/*
==============
CgTargetAssistSP::GetPlayerTeam
==============
*/
__int64 CgTargetAssistSP::GetPlayerTeam(CgTargetAssistSP *this, const __int16 entNum)
{
  return 2i64;
}

/*
==============
CgTargetAssistSP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *CgTargetAssistSP::GetTargetStorage(CgTargetAssistSP *this)
{
  return this->m_targetInfo;
}

/*
==============
CgTargetAssistSP::GetTargetStorage
==============
*/
BgTargetAssist::TargetInfo *CgTargetAssistSP::GetTargetStorage(CgTargetAssistSP *this)
{
  return this->m_targetInfo;
}

