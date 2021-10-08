/*
==============
CgVehicleCollisionSystem::SetLocalClientNum
==============
*/

void __fastcall CgVehicleCollisionSystem::SetLocalClientNum(CgVehicleCollisionSystem *this, LocalClientNum_t localClientNum)
{
  ?SetLocalClientNum@CgVehicleCollisionSystem@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgVehicleCollisionSystem::FilterTeamTurrets
==============
*/

bool __fastcall CgVehicleCollisionSystem::FilterTeamTurrets(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  return ?FilterTeamTurrets@CgVehicleCollisionSystem@@IEAA_NAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
CgVehicleCollisionSystem::CollisionScriptables
==============
*/

void __fastcall CgVehicleCollisionSystem::CollisionScriptables(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionScriptables@CgVehicleCollisionSystem@@MEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
CgVehicleCollisionSystem::CollisionFiltering
==============
*/

void __fastcall CgVehicleCollisionSystem::CollisionFiltering(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionFiltering@CgVehicleCollisionSystem@@MEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
CgVehicleCollisionSystem::CollideScriptable
==============
*/

void __fastcall CgVehicleCollisionSystem::CollideScriptable(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo, unsigned int scriptableIndex)
{
  ?CollideScriptable@CgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@I@Z(this, inOutCollInfo, scriptableIndex);
}

/*
==============
CgVehicleCollisionSystem::CollideScriptable
==============
*/
void CgVehicleCollisionSystem::CollideScriptable(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo, unsigned int scriptableIndex)
{
  __int64 v4; 
  BgVehiclePhysics *v6; 
  BgVehiclePhysics *v7; 
  bool v8; 
  const dvar_t *v9; 
  __int64 m_localClientNum; 
  bool v11; 
  ScriptableInstanceClientContext **v12; 
  const ScriptableDef *def; 
  int flags; 
  bool v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = scriptableIndex;
  if ( inOutCollInfo->vehicleCount == 1 )
  {
    if ( CG_Door_ScriptableIsDoor((const LocalClientNum_t)this->m_localClientNum, scriptableIndex) )
    {
      inOutCollInfo->filterCollision = 0;
    }
    else
    {
      v6 = inOutCollInfo->vehObjs[0];
      v8 = 1;
      if ( !v6 || !v6->SupportsFeature(v6, VPFEAT_SCRIPTABLE_FILTERING) )
      {
        v7 = inOutCollInfo->vehObjs[1];
        if ( !v7 || !v7->SupportsFeature(v7, VPFEAT_SCRIPTABLE_FILTERING) )
          v8 = 0;
      }
      v9 = DVARBOOL_scriptable_vehicle_filtering;
      if ( !DVARBOOL_scriptable_vehicle_filtering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_vehicle_filtering") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled && v8 )
      {
        m_localClientNum = this->m_localClientNum;
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v4 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v17) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(v16) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(v17) = 2;
          LODWORD(v16) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v11 = g_scriptableCl_instanceContexts[m_localClientNum] == NULL;
        v12 = &g_scriptableCl_instanceContexts[m_localClientNum];
        if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        def = (*v12)[v4].commonContext.def;
        v15 = 0;
        if ( def )
        {
          flags = def->flags;
          if ( (flags & 0x80) != 0 && (flags & 0x180000) == 0 )
            v15 = 1;
        }
      }
      else
      {
        v15 = ScriptableCl_AllowVehicleCollisionFilter((const LocalClientNum_t)this->m_localClientNum, v4);
      }
      inOutCollInfo->filterCollision = v15;
    }
  }
}

/*
==============
CgVehicleCollisionSystem::CollisionFiltering
==============
*/
void CgVehicleCollisionSystem::CollisionFiltering(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  centity_t *CEntityFromUserData; 
  centity_t *v5; 
  centity_t *v6; 
  CgHandler *Handler; 
  int v8; 
  int v9; 
  char v10; 
  char v11; 

  CEntityFromUserData = CG_ExtractCEntityFromUserData(this->m_localClientNum, inOutCollInfo->bodyUserData[0]);
  v5 = CG_ExtractCEntityFromUserData(this->m_localClientNum, inOutCollInfo->bodyUserData[1]);
  v6 = v5;
  if ( CEntityFromUserData && v5 && (CEntityFromUserData->nextState.eType == ET_TURRET || v5->nextState.eType == ET_TURRET) )
  {
    Handler = CgHandler::getHandler(this->m_localClientNum);
    if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_collision_system.cpp", 48, ASSERT_TYPE_ASSERT, "(entHandler)", (const char *)&queryFormat, "entHandler") )
      __debugbreak();
    Handler->GetEntityTeam(Handler, (team_t *)&v9, CEntityFromUserData->nextState.number, (unsigned int *)&v10);
    Handler->GetEntityTeam(Handler, (team_t *)&v8, v6->nextState.number, (unsigned int *)&v11);
    if ( v9 == v8 )
      inOutCollInfo->filterCollision = 1;
  }
}

/*
==============
CgVehicleCollisionSystem::CollisionScriptables
==============
*/
void CgVehicleCollisionSystem::CollisionScriptables(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  bool IsPhysicsVehicle; 
  __int64 v5; 
  int v6; 
  const centity_t *CEntityFromUserData; 
  unsigned int v8; 
  unsigned int scriptableIndex; 

  if ( inOutCollInfo->vehicleCount == 1 )
  {
    IsPhysicsVehicle = BgVehicleCollisionCallbackInfo::IsPhysicsVehicle(inOutCollInfo, 0);
    scriptableIndex = -1;
    v5 = 16i64;
    if ( IsPhysicsVehicle )
      v5 = 20i64;
    v6 = *(Physics_WorldId *)((char *)&inOutCollInfo->worldId + v5);
    CEntityFromUserData = CG_ExtractCEntityFromUserData(this->m_localClientNum, v6);
    if ( CEntityFromUserData )
    {
      if ( !ScriptableCl_GetIndexForEntity((const LocalClientNum_t)this->m_localClientNum, CEntityFromUserData, &scriptableIndex) )
        return;
    }
    else if ( Physics_GetRefSystem(v6) == Physics_RefSystem_Scriptable )
    {
      v8 = v6 & 0x3FFFFF;
      scriptableIndex = v8;
LABEL_7:
      if ( v8 != -1 )
        CgVehicleCollisionSystem::CollideScriptable(this, inOutCollInfo, v8);
      return;
    }
    v8 = scriptableIndex;
    goto LABEL_7;
  }
}

/*
==============
CgVehicleCollisionSystem::FilterTeamTurrets
==============
*/
bool CgVehicleCollisionSystem::FilterTeamTurrets(CgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  centity_t *CEntityFromUserData; 
  centity_t *v5; 
  centity_t *v6; 
  CgHandler *Handler; 
  int v9; 
  int v10; 
  char v11; 
  char v12; 

  CEntityFromUserData = CG_ExtractCEntityFromUserData(this->m_localClientNum, inOutCollInfo->bodyUserData[0]);
  v5 = CG_ExtractCEntityFromUserData(this->m_localClientNum, inOutCollInfo->bodyUserData[1]);
  v6 = v5;
  if ( !CEntityFromUserData || !v5 || CEntityFromUserData->nextState.eType != ET_TURRET && v5->nextState.eType != ET_TURRET )
    return 0;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_collision_system.cpp", 48, ASSERT_TYPE_ASSERT, "(entHandler)", (const char *)&queryFormat, "entHandler") )
    __debugbreak();
  Handler->GetEntityTeam(Handler, (team_t *)&v10, CEntityFromUserData->nextState.number, (unsigned int *)&v11);
  Handler->GetEntityTeam(Handler, (team_t *)&v9, v6->nextState.number, (unsigned int *)&v12);
  return v10 == v9;
}

/*
==============
CgVehicleCollisionSystem::SetLocalClientNum
==============
*/
void CgVehicleCollisionSystem::SetLocalClientNum(CgVehicleCollisionSystem *this, LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
}

