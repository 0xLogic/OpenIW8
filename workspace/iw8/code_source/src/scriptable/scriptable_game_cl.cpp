/*
==============
ScriptableCl_ObjectiveCount
==============
*/

unsigned __int8 __fastcall ScriptableCl_ObjectiveCount(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_ObjectiveCount@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_IsUpdateRequiredForInstance
==============
*/

bool __fastcall ScriptableCl_IsUpdateRequiredForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableDef *def)
{
  return ?ScriptableCl_IsUpdateRequiredForInstance@@YA_NW4LocalClientNum_t@@IAEBUScriptableDef@@@Z(localClientNum, scriptableIndex, def);
}

/*
==============
ScriptableCl_ShutdownActiveEvents
==============
*/

void __fastcall ScriptableCl_ShutdownActiveEvents(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams)
{
  ?ScriptableCl_ShutdownActiveEvents@@YAXW4LocalClientNum_t@@PEBUScriptableEventParams@@@Z(localClientNum, eventParams);
}

/*
==============
ScriptableCl_HasLootFX
==============
*/

bool __fastcall ScriptableCl_HasLootFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_HasLootFX@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveAdd
==============
*/

void __fastcall ScriptableCl_ObjectiveAdd(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const ObjectiveSettings *const settings)
{
  ?ScriptableCl_ObjectiveAdd@@YAXW4LocalClientNum_t@@IQEBUObjectiveSettings@@@Z(localClientNum, scriptableIndex, settings);
}

/*
==============
ScriptableCl_ClearModel
==============
*/

void __fastcall ScriptableCl_ClearModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_ClearModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetPhysInstanceId
==============
*/

unsigned int __fastcall ScriptableCl_GetPhysInstanceId(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetPhysInstanceId@@YAIW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_DestroyCollision
==============
*/

void __fastcall ScriptableCl_DestroyCollision(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_DestroyCollision@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveGetForInstance
==============
*/

unsigned __int8 __fastcall ScriptableCl_ObjectiveGetForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_ObjectiveGetForInstance@@YAEW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveAddSafe
==============
*/

bool __fastcall ScriptableCl_ObjectiveAddSafe(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_ObjectiveAddSafe@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ObjectiveChangedSet
==============
*/

void __fastcall ScriptableCl_ObjectiveChangedSet(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ObjectiveChangedSet@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ObjectiveInitForClient
==============
*/

void __fastcall ScriptableCl_ObjectiveInitForClient(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ObjectiveInitForClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ObjectiveChangedClear
==============
*/

void __fastcall ScriptableCl_ObjectiveChangedClear(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ObjectiveChangedClear@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_MarkLootPingStatusDirty
==============
*/

void __fastcall ScriptableCl_MarkLootPingStatusDirty(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_MarkLootPingStatusDirty@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ObjectiveChanged
==============
*/

bool __fastcall ScriptableCl_ObjectiveChanged(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_ObjectiveChanged@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_StopLootFX
==============
*/

void __fastcall ScriptableCl_StopLootFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const bool kill)
{
  ?ScriptableCl_StopLootFX@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, scriptableIndex, kill);
}

/*
==============
ScriptableCl_RunStateEvents_Specific
==============
*/

void __fastcall ScriptableCl_RunStateEvents_Specific(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, ScriptableEventDef *events, unsigned int numEvents)
{
  ?ScriptableCl_RunStateEvents_Specific@@YAXW4LocalClientNum_t@@PEBUScriptableEventParams@@PEAI_NPEAUScriptableEventDef@@I@Z(localClientNum, eventParams, holdrand, onTime, events, numEvents);
}

/*
==============
ScriptableCl_UpdateInstanceEvents
==============
*/

bool __fastcall ScriptableCl_UpdateInstanceEvents(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const float deltaTime)
{
  return ?ScriptableCl_UpdateInstanceEvents@@YA_NW4LocalClientNum_t@@IM@Z(localClientNum, scriptableIndex, deltaTime);
}

/*
==============
ScriptableCl_RunStateEventsFrom
==============
*/

void __fastcall ScriptableCl_RunStateEventsFrom(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, unsigned int nextEvent, unsigned int *holdrand)
{
  ?ScriptableCl_RunStateEventsFrom@@YAXW4LocalClientNum_t@@IPEBUScriptablePartDef@@IPEAI@Z(localClientNum, scriptableIndex, part, nextEvent, holdrand);
}

/*
==============
ScriptableCl_CreateCollisionFromArchive
==============
*/

void __fastcall ScriptableCl_CreateCollisionFromArchive(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_CreateCollisionFromArchive@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveRemove
==============
*/

void __fastcall ScriptableCl_ObjectiveRemove(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  ?ScriptableCl_ObjectiveRemove@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ClearLootPingFX
==============
*/

void __fastcall ScriptableCl_ClearLootPingFX(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ClearLootPingFX@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ObjectiveGetInstanceIndex
==============
*/

unsigned int __fastcall ScriptableCl_ObjectiveGetInstanceIndex(const LocalClientNum_t localClientNum, unsigned __int8 objectiveIndex)
{
  return ?ScriptableCl_ObjectiveGetInstanceIndex@@YAIW4LocalClientNum_t@@E@Z(localClientNum, objectiveIndex);
}

/*
==============
ScriptableCl_ClearAnimTimes
==============
*/

void __fastcall ScriptableCl_ClearAnimTimes(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ClearAnimTimes@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_CreateCollision
==============
*/

void __fastcall ScriptableCl_CreateCollision(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventCollisionDef *collision, int clipmapModelId, bool neverMoves, bool canPush, bool canTouch, const XModel *model)
{
  ?ScriptableCl_CreateCollision@@YAXW4LocalClientNum_t@@IPEBUScriptableEventCollisionDef@@H_N22PEBUXModel@@@Z(localClientNum, scriptableIndex, collision, clipmapModelId, neverMoves, canPush, canTouch, model);
}

/*
==============
ScriptableCl_RunStateEvents_All
==============
*/

void __fastcall ScriptableCl_RunStateEvents_All(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime)
{
  ?ScriptableCl_RunStateEvents_All@@YAXW4LocalClientNum_t@@PEBUScriptableEventParams@@PEAI_N@Z(localClientNum, eventParams, holdrand, onTime);
}

/*
==============
ScriptableCl_GetLootPingPopupIndex
==============
*/

unsigned int __fastcall ScriptableCl_GetLootPingPopupIndex(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_GetLootPingPopupIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_UpdateLootPingFX
==============
*/

void __fastcall ScriptableCl_UpdateLootPingFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const BG_SpawnGroup_Loot_Table *table)
{
  ?ScriptableCl_UpdateLootPingFX@@YAXW4LocalClientNum_t@@IPEBUBG_SpawnGroup_Loot_Table@@@Z(localClientNum, scriptableIndex, table);
}

/*
==============
ScriptableCL_RunStateEventFootstep
==============
*/

void __fastcall ScriptableCL_RunStateEventFootstep(const LocalClientNum_t localClientNum, const ScriptableEventParams *const eventParams, bool onTime, const ScriptableEventFootstepDef *const footstep)
{
  ?ScriptableCL_RunStateEventFootstep@@YAXW4LocalClientNum_t@@QEBUScriptableEventParams@@_NQEBUScriptableEventFootstepDef@@@Z(localClientNum, eventParams, onTime, footstep);
}

/*
==============
ScriptableCl_UpdateLootPingPopup
==============
*/

void __fastcall ScriptableCl_UpdateLootPingPopup(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_UpdateLootPingPopup@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_PlayLootTrailFX
==============
*/

void __fastcall ScriptableCl_PlayLootTrailFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_PlayLootTrailFX@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_UpdateCollisionActivation
==============
*/

void __fastcall ScriptableCl_UpdateCollisionActivation(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_UpdateCollisionActivation@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveGet
==============
*/

const ObjectiveSettings *__fastcall ScriptableCl_ObjectiveGet(const LocalClientNum_t localClientNum, unsigned __int8 objectiveIndex, vec3_t *out_origin)
{
  return ?ScriptableCl_ObjectiveGet@@YAPEBUObjectiveSettings@@W4LocalClientNum_t@@EAEATvec3_t@@@Z(localClientNum, objectiveIndex, out_origin);
}

/*
==============
ScriptableCl_UpdateModel
==============
*/

void __fastcall ScriptableCl_UpdateModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, bool activatePhysics)
{
  ?ScriptableCl_UpdateModel@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, scriptableIndex, activatePhysics);
}

/*
==============
ScriptableCl_ObjectivePeak
==============
*/

unsigned __int8 __fastcall ScriptableCl_ObjectivePeak(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_ObjectivePeak@@YAEW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_PlayLootBeamFX
==============
*/

void __fastcall ScriptableCl_PlayLootBeamFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_PlayLootBeamFX@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ObjectiveActiveForInstance
==============
*/

bool __fastcall ScriptableCl_ObjectiveActiveForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_ObjectiveActiveForInstance@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCL_SetPose
==============
*/

void __fastcall ScriptableCL_SetPose(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, ScriptableInstanceContextSecure *context, const vec3_t *origin, const vec3_t *angles, bool warp)
{
  ?ScriptableCL_SetPose@@YAXW4LocalClientNum_t@@IAEAUScriptableInstanceContextSecure@@AEBTvec3_t@@2_N@Z(localClientNum, scriptableIndex, context, origin, angles, warp);
}

/*
==============
ScriptableCl_PlaySound
==============
*/

void __fastcall ScriptableCl_PlaySound(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventSoundDef *sound)
{
  ?ScriptableCl_PlaySound@@YAXW4LocalClientNum_t@@IPEBUScriptableEventSoundDef@@@Z(localClientNum, scriptableIndex, sound);
}

/*
==============
ScriptableCL_DynentSetPose
==============
*/
void ScriptableCL_DynentSetPose(const LocalClientNum_t localClientNum, unsigned int objectId, const vec3_t *origin, const vec4_t *quat)
{
  __int64 v4; 
  DynEntityClient *Client; 
  const DynEntityDef *Def; 
  DynEntityPose *PoseFromClientId; 
  const DynEntityDef *v11; 
  unsigned __int16 v12; 
  bool v13; 
  Physics_WorldId v14; 
  unsigned int NumRigidBodys; 
  char v16; 
  unsigned __int8 v17; 
  __int64 v18; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 numParts; 
  const char *v22; 
  unsigned __int8 v23; 
  DynEnt_ExtraPosePart *v24; 
  unsigned int posePart1FirstIndex; 
  int *dynEntComplexCount; 
  int *dynEntComplexBodyCount; 
  int *dynEntComplexAdditionalBoneCount; 
  __int64 v29; 
  int dynEntSimpleAdditionalBoneCount; 
  hknpBodyId result[2]; 
  vec3_t *origina; 
  const DynEntityDef *v33; 
  vec3_t bodyPosition; 
  vec4_t bodyOrientationAsQuat; 

  v4 = localClientNum;
  origina = (vec3_t *)origin;
  Client = DynEnt_GetClient(localClientNum, objectId, DYNENT_BASIS_MODEL);
  Def = DynEnt_GetDef(objectId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  *(_QWORD *)&result[0].m_serialAndIndex = v4;
  if ( Def->clientId[v4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v4, Def->clientId[v4], DYNENT_BASIS_MODEL);
  v33 = DynEnt_GetDef(objectId, DYNENT_BASIS_MODEL);
  v11 = v33;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2208, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2209, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2210, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  PoseFromClientId->pose.origin.v[0] = origin->v[0];
  PoseFromClientId->pose.origin.v[1] = origin->v[1];
  PoseFromClientId->pose.origin.v[2] = origin->v[2];
  PoseFromClientId->pose.quat.v[0] = quat->v[0];
  PoseFromClientId->pose.quat.v[1] = quat->v[1];
  PoseFromClientId->pose.quat.v[2] = quat->v[2];
  PoseFromClientId->pose.quat.v[3] = quat->v[3];
  v12 = Client->flags | 0x41;
  v13 = Client->physicsSystemId == -1;
  Client->flags = v12;
  if ( v13 )
  {
    if ( Client->activeModel )
    {
      dynEntSimpleAdditionalBoneCount = 0;
      Client->flags = v12 | 3;
      if ( DynEnt_UpdatePoseModel((LocalClientNum_t)v4, objectId, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount) )
        DynEnt_LinkModel((LocalClientNum_t)v4, objectId);
      Client->flags = v12;
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    v14 = 3 * v4 + 3;
    ScriptableBg_PhysicsSetPose(v14, Client->physicsSystemId, origina, &PoseFromClientId->pose.quat, WARP);
    NumRigidBodys = Physics_GetNumRigidBodys(v14, Client->physicsSystemId);
    v16 = NumRigidBodys;
    dynEntSimpleAdditionalBoneCount = NumRigidBodys;
    if ( NumRigidBodys > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)NumRigidBodys, "unsigned", NumRigidBodys) )
      __debugbreak();
    v17 = 0;
    if ( v16 )
    {
      v18 = *(_QWORD *)&result[0].m_serialAndIndex;
      do
      {
        physicsSystemId = Client->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v14 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(dynEntComplexBodyCount) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", dynEntComplexBodyCount) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(dynEntComplexBodyCount) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", dynEntComplexBodyCount) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
        {
          LODWORD(dynEntComplexBodyCount) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", dynEntComplexBodyCount) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(dynEntComplexBodyCount) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", dynEntComplexBodyCount) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, v14, physicsSystemId, v17)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2254, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_GetRigidBodyTransformAfterWarpInstanceTo(v14, Client->physicsSystemId, m_serialAndIndex, origina, &PoseFromClientId->pose.quat, &bodyPosition, &bodyOrientationAsQuat);
        numParts = PoseFromClientId->numParts;
        if ( v17 >= numParts )
        {
          v22 = Client->activeModel ? Client->activeModel->name : "Unknown";
          LODWORD(v29) = numParts;
          LODWORD(dynEntComplexAdditionalBoneCount) = (unsigned __int8)dynEntSimpleAdditionalBoneCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2262, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v22, dynEntComplexAdditionalBoneCount, v29) )
            __debugbreak();
        }
        v23 = PoseFromClientId->numParts;
        if ( v17 >= v23 )
        {
          LODWORD(dynEntComplexBodyCount) = v23;
          LODWORD(dynEntComplexCount) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
            __debugbreak();
        }
        if ( v17 )
        {
          posePart1FirstIndex = PoseFromClientId->posePart1FirstIndex;
          if ( posePart1FirstIndex + v17 - 1 >= g_dynEntExtraPosePartsAllocCount[v18] )
          {
            LODWORD(dynEntComplexBodyCount) = g_dynEntExtraPosePartsAllocCount[v18];
            LODWORD(dynEntComplexCount) = posePart1FirstIndex + v17 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
              __debugbreak();
          }
          v24 = &g_dynEntPoseExtraParts[v18][v17 - 1 + PoseFromClientId->posePart1FirstIndex];
        }
        else
        {
          v24 = (DynEnt_ExtraPosePart *)PoseFromClientId;
        }
        if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2264, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
          __debugbreak();
        v24->posePart.origin = bodyPosition;
        v24->posePart.quat = bodyOrientationAsQuat;
        ++v17;
      }
      while ( v17 < (unsigned __int8)dynEntSimpleAdditionalBoneCount );
      v11 = v33;
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
  }
  v11->initialPose.origin.v[0] = PoseFromClientId->pose.origin.v[0];
  v11->initialPose.origin.v[1] = PoseFromClientId->pose.origin.v[1];
  v11->initialPose.origin.v[2] = PoseFromClientId->pose.origin.v[2];
  v11->initialPose.quat.v[0] = PoseFromClientId->pose.quat.v[0];
  v11->initialPose.quat.v[1] = PoseFromClientId->pose.quat.v[1];
  v11->initialPose.quat.v[2] = PoseFromClientId->pose.quat.v[2];
  v11->initialPose.quat.v[3] = PoseFromClientId->pose.quat.v[3];
}

/*
==============
ScriptableCL_GetObjectiveActiveInWorldForInstance
==============
*/
bool ScriptableCL_GetObjectiveActiveInWorldForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned __int8 v5; 
  ScriptableObjectiveList *v6; 
  unsigned __int8 count; 
  const ObjectiveSettings *settings; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex)->objectiveIndex )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  if ( !InstanceCommonContext->objectiveIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 208, ASSERT_TYPE_ASSERT, "(r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE)", (const char *)&queryFormat, "r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE") )
    __debugbreak();
  v5 = InstanceCommonContext->objectiveIndex - 1;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2340, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v6 = &s_scriptableObjectiveLists[v2];
  count = v6->count;
  if ( v5 >= count )
  {
    LODWORD(v12) = count;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2342, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( list.count )", "objectiveIndex doesn't index list.count\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  settings = v6->objectives[v5].settings;
  return settings && ((settings->state - 2) & 0xFD) == 0;
}

/*
==============
ScriptableCL_RunStateEventCompassIcon
==============
*/
void ScriptableCL_RunStateEventCompassIcon(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventCompassIconDef *compassIcon)
{
  __int64 v4; 
  unsigned int scriptableIndex; 
  centity_t *Entity; 
  unsigned int number; 
  const char *name; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = localClientNum;
  if ( onTime || compassIcon->stateful )
  {
    scriptableIndex = eventParams->scriptableIndex;
    Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2720, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)ComCharacterLimits::ms_gameData.m_characterCount > 256 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2723, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetCharacterMaxCount() ) <= ( (((200 + 48)) + 8) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetCharacterMaxCount()", "MAX_COMPASS_AND_MT_ACTORS_MP", ComCharacterLimits::ms_gameData.m_characterCount, 256) )
        __debugbreak();
    }
    if ( BG_IsCharacterEntityIndex(Entity->nextState.number) )
    {
      if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
      {
        LODWORD(v14) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v14) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v4] )
      {
        LODWORD(v14) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v14) )
          __debugbreak();
      }
      CgCompassSystem::ms_compassSystemArray[v4]->SetCompassActorIcon(CgCompassSystem::ms_compassSystemArray[v4], Entity->nextState.number, compassIcon);
    }
    else
    {
      if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2727, ASSERT_TYPE_ASSERT, "(eventParams->partDef)", (const char *)&queryFormat, "eventParams->partDef") )
        __debugbreak();
      if ( !ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2728, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDef( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDef( localClientNum, scriptableIndex )") )
        __debugbreak();
      number = Entity->nextState.number;
      name = eventParams->partDef->name;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, eventParams->scriptableIndex);
      if ( InstanceCommonContext->def )
        v12 = InstanceCommonContext->def->name;
      else
        v12 = "<unknown>";
      Com_PrintError(29, "Forcing Scriptable Dump: Scriptable %s set on non - character ent( id %i ).Part %s has a Compass Icon Event which is only valid for character ents.\n", v12, number, name);
      CrashReport_TriggerNow();
    }
  }
}

/*
==============
ScriptableCL_RunStateEventFootstep
==============
*/
void ScriptableCL_RunStateEventFootstep(const LocalClientNum_t localClientNum, const ScriptableEventParams *const eventParams, bool onTime, const ScriptableEventFootstepDef *const footstep)
{
  ScriptableFootstepFlag flags; 
  unsigned int LinkObject; 
  __int16 v8; 
  const centity_t *EntityFromObjectId; 
  bool v10; 
  FootstepVFX *leftFootstepVFX; 
  TraceGroundSource source; 

  flags = footstep->flags;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, eventParams->scriptableIndex);
  v8 = truncate_cast<short,unsigned int>(LinkObject);
  EntityFromObjectId = ScriptableCl_GetEntityFromObjectId(localClientNum, v8);
  CG_EntityWorkers_EnterCriticalSection();
  v10 = flags & 1;
  if ( v10 )
    leftFootstepVFX = footstep->leftFootstepVFX;
  else
    leftFootstepVFX = footstep->rightFootstepVFX;
  LOBYTE(source) = 1;
  CG_Entity_AddFootstepEvent(localClientNum, v10, EntityFromObjectId, leftFootstepVFX, source, (ScriptableFootstepFlag)(footstep->flags | 0x80));
  CG_EntityWorkers_LeaveCriticalSection();
}

/*
==============
ScriptableCL_RunStateEventGravityArc
==============
*/
void ScriptableCL_RunStateEventGravityArc(const LocalClientNum_t localClientNum, const ScriptableEventParams *const eventParams, bool onTime, const ScriptableEventGravityArcDef *const moveDef)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  int *Data; 
  unsigned int v11; 
  unsigned int LinkObject; 
  ParticleSystemHandle ParticleSystemHandle; 
  ParticleManager *ParticleManager; 
  unsigned int v15; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const FXRegisteredDef *LootItemRarityTrailFX; 
  ScriptableGravityArcRuntimeData arcData; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2570, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCl_StateEventGravityArcGetData(InstanceCommonContext, moveDef);
  ScriptableCl_GravityArcCalcData(localClientNum, scriptableIndex, InstanceCommonContext, moveDef, &arcData);
  if ( onTime )
  {
    *Data = CG_GetLocalClientGlobals(localClientNum)->time;
    ScriptableCL_SetPose(localClientNum, eventParams->scriptableIndex, InstanceCommonContext, &arcData.startOrigin, &arcData.startAngles, 1);
    *((_BYTE *)InstanceCommonContext + 61) |= 2u;
    if ( moveDef->playLootTrailFX && ScriptableCl_IsLoot(localClientNum, scriptableIndex) )
    {
      v11 = eventParams->scriptableIndex;
      if ( ScriptableCl_GetLinkType(localClientNum, v11) == SCRIPTABLE_LINK_CLIENTMODEL )
      {
        LinkObject = ScriptableCl_GetLinkObject(localClientNum, v11);
        ParticleSystemHandle = CG_ClientModel_GetParticleSystemHandle(localClientNum, LinkObject);
        if ( ParticleSystemHandle )
        {
          ParticleManager = ParticleManager::GetParticleManager(localClientNum);
          ParticleManager::KillSystem(ParticleManager, ParticleSystemHandle);
          CG_ClientModel_SetParticleSystemHandle(localClientNum, LinkObject, PARTICLE_SYSTEM_INVALID_HANDLE);
        }
      }
      v15 = eventParams->scriptableIndex;
      LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, v15);
      if ( LootItemDef )
      {
        LootItemRarityTrailFX = ScriptableCl_GetLootItemRarityTrailFX(localClientNum, LootItemDef->rarity);
        ScriptableCl_PlayLootFX(localClientNum, v15, LootItemRarityTrailFX, 1, 1);
      }
    }
  }
  else
  {
    *Data = 0;
    ScriptableCL_SetPose(localClientNum, eventParams->scriptableIndex, InstanceCommonContext, &arcData.endOrigin, &arcData.endAngles, 1);
  }
}

/*
==============
ScriptableCL_RunStateEventMaterialOverride
==============
*/
void ScriptableCL_RunStateEventMaterialOverride(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventMaterialOverrideDef *materialOverrideDef)
{
  unsigned int scriptableIndex; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int LinkObject; 
  DObj *ClientDObj; 
  DObj *v13; 
  unsigned __int16 entnum; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 v19; 
  __int64 numModels; 
  const XModel **models; 
  MaterialOverrideType *p_overrideType; 
  __int64 v23; 
  DObjModel dobjModels; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2007, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2011, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
  if ( Entity )
  {
    if ( Entity->nextState.eType != ET_SCRIPTMOVER || (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) == 0 || (otherEntityNum = Entity->nextState.otherEntityNum, otherEntityNum == 2047) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      otherEntityNum = truncate_cast<short,unsigned int>(LinkObject);
    }
    ClientDObj = Com_GetClientDObj(otherEntityNum, localClientNum);
    v13 = ClientDObj;
    if ( ClientDObj )
    {
      entnum = ClientDObj->entnum;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
      eventStreamBufferOffsetClient = materialOverrideDef->eventStreamBufferOffsetClient;
      v17 = InstanceCommonContext;
      if ( eventStreamBufferOffsetClient + 5 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2040, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      v18 = &v17->eventStreamBuffer[eventStreamBufferOffsetClient];
      *(_DWORD *)v18 = LocalClientGlobals->time;
      v19 = R_AddScriptableEntityData(localClientNum, entnum, materialOverrideDef->materialOverrideType);
      if ( materialOverrideDef->materialOverrideType == Scriptable_MaterialOverrideType_Refraction )
      {
        memset_0(&dobjModels, 0, 0xA00ui64);
        numModels = v13->numModels;
        if ( v13->numModels )
        {
          models = v13->models;
          p_overrideType = &dobjModels.camoParams.overrideType;
          do
          {
            v23 = (__int64)*models++;
            *((_QWORD *)p_overrideType - 7) = v23;
            *p_overrideType = MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE;
            *((_QWORD *)p_overrideType - 1) = Material_GetRefractionOverrideMaterial;
            p_overrideType += 20;
            --numModels;
          }
          while ( numModels );
        }
        DObjFreeMaterialOverrides(v13);
        DObjFreeMaterialData(v13);
        DObjSetCamoMaterialOverride(v13, &dobjModels, v13->numModels);
      }
      v18[4] = v19;
    }
  }
}

/*
==============
ScriptableCL_RunStateEventMove
==============
*/
void ScriptableCL_RunStateEventMove(const LocalClientNum_t localClientNum, const ScriptableEventParams *const eventParams, bool onTime, const ScriptableEventMoveDef *const moveDef)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  Scriptable_EventMove_Data *Data; 
  Scriptable_EventMove_Data *v11; 
  ScriptableInstanceContextSecure *v12; 
  const char *name; 
  float v14; 
  float v15; 
  float v16; 
  double v17; 
  double v18; 
  double v19; 
  const XModel *ScriptableModel; 
  CgAntiLag *Instance; 
  vec3_t outOrigin; 
  vec3_t out_endAngles; 
  vec3_t out_endOrigin; 
  BgAntiLagLerpMoverCmd out_cmd; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2425, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCL_StateEventMoveGetData(InstanceCommonContext, moveDef);
  v11 = Data;
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
  {
    Data->startTime = 0;
    v12 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v12->def )
      name = v12->def->name;
    else
      name = "<unknown>";
    Com_PrintError(29, "ScriptableCl RunStateEventMove: Scriptable is parented to entity, can't execute event. Index %i '%s'\n", scriptableIndex, name);
  }
  else
  {
    ScriptableBg_LerpCalcEndPoints(&InstanceCommonContext->originInitial, &InstanceCommonContext->anglesInitial, moveDef, &out_endOrigin, &out_endAngles);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    v14 = InstanceCommonContext->angles.v[0];
    v15 = InstanceCommonContext->angles.v[1];
    v16 = InstanceCommonContext->angles.v[2];
    if ( out_endOrigin.v[0] == outOrigin.v[0] && out_endOrigin.v[1] == outOrigin.v[1] && out_endOrigin.v[2] == outOrigin.v[2] && (v17 = AngleDelta(out_endAngles.v[0], InstanceCommonContext->angles.v[0]), COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.00000011920929) && (v18 = AngleDelta(out_endAngles.v[1], v15), COERCE_FLOAT(LODWORD(v18) & _xmm) <= 0.00000011920929) && (v19 = AngleDelta(out_endAngles.v[2], v16), COERCE_FLOAT(LODWORD(v19) & _xmm) <= 0.00000011920929) )
    {
      if ( moveDef->seconds != 0.0 )
        v11->startTime = 0;
    }
    else if ( moveDef->seconds == 0.0 || !onTime )
    {
      v11->startTime = 0;
      ScriptableCL_SetPose(localClientNum, eventParams->scriptableIndex, InstanceCommonContext, &out_endOrigin, &out_endAngles, 1);
    }
    else
    {
      v11->startTime = CG_GetLocalClientGlobals(localClientNum)->time;
      v11->startOrigin = outOrigin;
      v11->startAngles.v[0] = v14;
      v11->startAngles.v[1] = v15;
      v11->startAngles.v[2] = v16;
      if ( ScriptableCl_GetInstanceCollisionContext(localClientNum, eventParams->scriptableIndex)->canPush )
      {
        ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
        ScriptableBg_SetupAntilagCommand(&out_cmd, eventParams->scriptableIndex, &ScriptableModel->bounds, v11->startTime, &v11->startOrigin, &v11->startAngles, &out_endOrigin, &out_endAngles, moveDef);
        Instance = CgAntiLag::GetInstance(localClientNum);
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2476, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
          __debugbreak();
        CG_EntityWorkers_EnterCriticalSection();
        BgAntiLag::AddLerpMoverCommand(Instance, &out_cmd);
        CG_EntityWorkers_LeaveCriticalSection();
      }
    }
  }
}

/*
==============
ScriptableCL_SetPose
==============
*/
void ScriptableCL_SetPose(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, ScriptableInstanceContextSecure *context, const vec3_t *origin, const vec3_t *angles, bool warp)
{
  __int64 v9; 
  bool v10; 
  ScriptableLinkType LinkType; 
  unsigned int v12; 
  unsigned int LinkObject; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionPredictive; 
  unsigned int scriptableCollisionAuthoritative; 
  unsigned int scriptableCollisionDetail; 
  int v18; 
  vec3_t outOrigin; 
  __int64 v20; 
  vec4_t quat; 

  v20 = -2i64;
  v9 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v10 = !s_scriptableObjectiveLists[v9].changed && ScriptableCL_GetObjectiveActiveInWorldForInstance((const LocalClientNum_t)v9, scriptableIndex);
  if ( v10 )
    ScriptableInstanceContextSecure::GetOrigin(context, scriptableIndex, &outOrigin);
  ScriptableInstanceContextSecure::SetOrigin(context, scriptableIndex, origin);
  context->angles = *angles;
  AnglesToQuat(angles, &quat);
  LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)v9, scriptableIndex);
  if ( LinkType != SCRIPTABLE_LINK_ENTITY )
  {
    if ( LinkType == SCRIPTABLE_LINK_DYNENT )
    {
      LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v9, scriptableIndex);
      ScriptableCL_DynentSetPose((const LocalClientNum_t)v9, LinkObject, origin, &quat);
    }
    else if ( LinkType == SCRIPTABLE_LINK_CLIENTMODEL )
    {
      v12 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v9, scriptableIndex);
      CG_ClientModel_SetOrigin((const LocalClientNum_t)v9, v12, origin);
      CG_ClientModel_SetAngles((const LocalClientNum_t)v9, v12, angles);
    }
    if ( v10 )
    {
      if ( VecNCompareCustomEpsilon(outOrigin.v, origin->v, 0.001, 3) )
      {
LABEL_20:
        InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext((const LocalClientNum_t)v9, scriptableIndex);
        scriptableCollisionPredictive = InstanceCollisionContext->scriptableCollisionPredictive;
        scriptableCollisionAuthoritative = InstanceCollisionContext->scriptableCollisionAuthoritative;
        scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
        if ( InstanceCollisionContext->scriptableCollisionPredictive != -1 || scriptableCollisionAuthoritative != -1 || scriptableCollisionDetail != -1 )
        {
          CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
          v18 = 3 * v9;
          if ( scriptableCollisionPredictive != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v18 + 2), InstanceCollisionContext->scriptableCollisionPredictive, origin, &quat, WARP);
          if ( scriptableCollisionAuthoritative != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v18 + 3), InstanceCollisionContext->scriptableCollisionAuthoritative, origin, &quat, (Scriptable_PhysicsSetPoseCmd)warp);
          if ( scriptableCollisionDetail != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v18 + 4), InstanceCollisionContext->scriptableCollisionDetail, origin, &quat, WARP);
          CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        }
        goto LABEL_30;
      }
      ScriptableCl_ObjectiveChangedSet((const LocalClientNum_t)v9);
    }
    if ( ScriptableCl_Spatial_Marked((const LocalClientNum_t)v9, scriptableIndex) )
      ScriptableCl_Spatial_UpdateOrigin((const LocalClientNum_t)v9, scriptableIndex);
    goto LABEL_20;
  }
LABEL_30:
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCL_StateEventMoveGetData
==============
*/
Scriptable_EventMove_Data *ScriptableCL_StateEventMoveGetData(ScriptableInstanceContextSecure *const context, const ScriptableEventMoveDef *const moveDef)
{
  __int64 eventStreamBufferOffsetClient; 

  if ( (!context || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2191, ASSERT_TYPE_ASSERT, "(context && moveDef)", (const char *)&queryFormat, "context && moveDef") )
    __debugbreak();
  if ( moveDef->seconds <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2192, ASSERT_TYPE_ASSERT, "(moveDef->seconds > 0.0f)", (const char *)&queryFormat, "moveDef->seconds > 0.0f") )
    __debugbreak();
  eventStreamBufferOffsetClient = moveDef->eventStreamBufferOffsetClient;
  if ( eventStreamBufferOffsetClient + 28 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2195, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventMove_Data ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventMove_Data ) <= context->eventStreamBufferSize") )
    __debugbreak();
  return (Scriptable_EventMove_Data *)&context->eventStreamBuffer[eventStreamBufferOffsetClient];
}

/*
==============
ScriptableCL_StateEventMovePhysicsClearVelocity
==============
*/
void ScriptableCL_StateEventMovePhysicsClearVelocity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionAuthoritative; 
  unsigned int scriptableCollisionDetail; 

  CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  if ( InstanceCollisionContext->scriptableCollisionPredictive != -1 )
    ScriptableBg_PhysicsClearVelocity((Physics_WorldId)(3 * localClientNum + 2), InstanceCollisionContext->scriptableCollisionPredictive);
  scriptableCollisionAuthoritative = InstanceCollisionContext->scriptableCollisionAuthoritative;
  if ( scriptableCollisionAuthoritative != -1 )
    ScriptableBg_PhysicsClearVelocity((Physics_WorldId)(3 * localClientNum + 3), scriptableCollisionAuthoritative);
  scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
  if ( scriptableCollisionDetail != -1 )
    ScriptableBg_PhysicsClearVelocity((Physics_WorldId)(3 * localClientNum + 4), scriptableCollisionDetail);
  CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
}

/*
==============
ScriptableCL_UpdateStateEventMaterialOverride
==============
*/
void ScriptableCL_UpdateStateEventMaterialOverride(const float deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, ScriptableUpdateRequest *inOutRequest)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int LinkObject; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *eventStreamBuffer; 
  signed int imageValue; 
  unsigned __int8 v18; 
  double v19; 
  float v20; 
  DObj *ClientDObj; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2077, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
  if ( Entity )
  {
    if ( Entity->nextState.eType != ET_SCRIPTMOVER || (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) == 0 || (otherEntityNum = Entity->nextState.otherEntityNum, otherEntityNum == 2047) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      otherEntityNum = truncate_cast<short,unsigned int>(LinkObject);
    }
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = event->data.wait.eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 5 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2101, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
    imageValue = event->data.viewmodelChangeImage.imageValue;
    v18 = eventStreamBuffer[eventStreamBufferOffsetClient + 4];
    if ( imageValue <= 0 )
    {
      v20 = FLOAT_1_0;
    }
    else
    {
      v19 = I_fclamp((float)(LocalClientGlobals->time - *(_DWORD *)&eventStreamBuffer[eventStreamBufferOffsetClient]) / (float)imageValue, 0.0, 1.0);
      v20 = *(float *)&v19;
      if ( *(float *)&v19 < 1.0 )
        inOutRequest->eventUpdateRequired = 1;
    }
    ClientDObj = Com_GetClientDObj(otherEntityNum, localClientNum);
    if ( ClientDObj )
      R_UpdateScriptableEntityData(localClientNum, ClientDObj->entnum, event->data.materialOverride.materialOverrideType, (int)(float)((float)((float)(1.0 - v20) * (float)v18) + (float)((float)event->data.anonymous.buffer[8] * v20)));
  }
}

/*
==============
ScriptableCl_ClearAnimTimes
==============
*/
void ScriptableCl_ClearAnimTimes(const LocalClientNum_t localClientNum)
{
  unsigned int serverInstanceCount; 
  unsigned int i; 
  const ScriptableDef *def; 
  unsigned int j; 
  __int64 v6; 

  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_ClearAnimTimes");
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  for ( i = 0; i < serverInstanceCount; ++i )
  {
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, i)->def;
    if ( def )
    {
      if ( (def->flags & 2) != 0 )
      {
        for ( j = 0; j < def->numParts; ++j )
        {
          v6 = (__int64)&def->parts[j];
          if ( (*(_BYTE *)(v6 + 12) & 4) != 0 )
            ScriptableCl_ClearPartAnimTimes(localClientNum, i, (const ScriptablePartDef *)v6);
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_ClearLootPingFX
==============
*/
void ScriptableCl_ClearLootPingFX(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 7049, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  s_scriptableLootPing[v2].fx = PARTICLE_SYSTEM_INVALID_HANDLE;
  s_scriptableLootPing[v2].index = -1;
  *(_WORD *)&s_scriptableLootPing[v2].popup = 0;
  s_scriptableLootPing[v2].isPingedByPlayer = 0;
  s_scriptableLootPing[v2].popupIndex = -1;
}

/*
==============
ScriptableCl_ClearModel
==============
*/
void ScriptableCl_ClearModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned int LinkObject; 
  ScriptableLinkType LinkType; 
  CgEntitySystem *EntitySystem; 
  centity_t *Entity; 

  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    Entity = CgEntitySystem::GetEntity(EntitySystem, LinkObject);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6421, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    CG_Entity_DestroyPhysics(localClientNum, Entity->nextState.number);
    CG_Entity_DestroyCloth(localClientNum, Entity->nextState.number);
  }
  else if ( LinkType == SCRIPTABLE_LINK_DYNENT )
  {
    DynEnt_ChangeActiveModelForScriptable(localClientNum, LinkObject, NULL);
  }
}

/*
==============
ScriptableCl_ClearPartAnimTimes
==============
*/
void ScriptableCl_ClearPartAnimTimes(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  __int64 v3; 
  const ScriptablePartDef *v4; 
  __int64 v5; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 stateId; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = localClientNum;
  v4 = partDef;
  v5 = scriptableIndex;
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6977, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= v4->numStates )
  {
    LODWORD(v13) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6978, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( partDef->numStates )", "runtime->stateId doesn't index partDef->numStates\n\t%i not in [0, %i)", v13, v4->numStates) )
      __debugbreak();
  }
  stateId = PartRuntime->stateId;
  v8 = 0;
  v9 = 0;
  v10 = (__int64)&v4->states[stateId];
  if ( *(_DWORD *)(v10 + 12) )
  {
    do
    {
      v11 = *(_QWORD *)(v10 + 16) + 176i64 * v9;
      if ( *(_DWORD *)(v11 + 16) == 6 )
      {
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v5 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v14) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(v13) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v14) = 2;
          LODWORD(v13) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        ScriptableCl_StateEventAnimationGetData(&g_scriptableCl_instanceContexts[v3][v5].commonContext, (const ScriptableEventAnimationDef *const)(v11 + 24))->serverTime = 0;
      }
      ++v9;
    }
    while ( v9 < *(_DWORD *)(v10 + 12) );
    v4 = partDef;
  }
  if ( v4->numChildParts )
  {
    do
    {
      v12 = (__int64)&v4->childParts[v8];
      if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
        ScriptableCl_ClearPartAnimTimes((const LocalClientNum_t)v3, v5, (const ScriptablePartDef *)v12);
      ++v8;
    }
    while ( v8 < v4->numChildParts );
  }
}

/*
==============
ScriptableCl_CreateCollision
==============
*/
void ScriptableCl_CreateCollision(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventCollisionDef *collision, int clipmapModelId, bool neverMoves, bool canPush, bool canTouch, const XModel *model)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned int LinkObject; 
  DynEntityClient *Client; 
  const DynEntityDef *Def; 
  const char *v16; 
  const char *v17; 
  int v18; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *collmapName; 

  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_CreateCollision");
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  if ( model )
  {
    if ( !model->physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6757, ASSERT_TYPE_ASSERT, "(model->physicsAsset)", (const char *)&queryFormat, "model->physicsAsset", -2i64) )
      __debugbreak();
    InstanceCollisionContext->clipmapCModelIndex = 0;
    InstanceCollisionContext->model = model;
    goto LABEL_6;
  }
  if ( clipmapModelId == -1 )
  {
    v16 = "clipmapModelId != SCRIPTABLE_COLLMAP_INVALID_INDEX";
    v17 = "(clipmapModelId != SCRIPTABLE_COLLMAP_INVALID_INDEX)";
    v18 = 6764;
  }
  else
  {
    if ( clipmapModelId != -2 )
      goto LABEL_24;
    v16 = "clipmapModelId != SCRIPTABLE_COLLMAP_UNKNOWN_INDEX";
    v17 = "(clipmapModelId != SCRIPTABLE_COLLMAP_UNKNOWN_INDEX)";
    v18 = 6765;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", v18, ASSERT_TYPE_ASSERT, v17, (const char *)&queryFormat, v16, -2i64) )
    __debugbreak();
LABEL_24:
  InstanceCollisionContext->clipmapCModelIndex = clipmapModelId;
  InstanceCollisionContext->model = NULL;
  if ( !CM_BrushModelIsValid(clipmapModelId) )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( collision )
      collmapName = collision->collmapName;
    else
      collmapName = "UNKNOWN";
    Com_PrintError(29, "Scriptable %s tried to play a collision event using collmap %s, but it wasn't available.  Does this map need a recompile?\n", InstanceCommonContext->def->name, collmapName);
    ScriptableCl_EnterError();
    InstanceCollisionContext->collisionActiveFlags = 0;
    goto LABEL_30;
  }
LABEL_6:
  InstanceCollisionContext->canPush = canPush;
  InstanceCollisionContext->canTouch = canTouch;
  InstanceCollisionContext->neverMoves = neverMoves;
  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) != SCRIPTABLE_LINK_DYNENT )
    goto LABEL_29;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  Client = DynEnt_GetClient(localClientNum, LinkObject, DYNENT_BASIS_MODEL);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6798, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( (Client->flags & 0x2000) != 0 )
  {
    Def = DynEnt_GetDef(LinkObject, DYNENT_BASIS_MODEL);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6805, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
      __debugbreak();
    if ( (Def->collisionFlags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6806, ASSERT_TYPE_ASSERT, "(dynEntDef->collisionFlags & DYNENT_CAN_DISABLE_LINKED_COLLISIONS)", (const char *)&queryFormat, "dynEntDef->collisionFlags & DYNENT_CAN_DISABLE_LINKED_COLLISIONS") )
      __debugbreak();
    InstanceCollisionContext->collisionActiveFlags = 8;
  }
  else
  {
LABEL_29:
    ScriptableCl_CreateCollisionPhysicsInstances(localClientNum, scriptableIndex, 1, 1, 1);
  }
LABEL_30:
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_CreateCollisionFromArchive
==============
*/
void ScriptableCl_CreateCollisionFromArchive(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned __int8 collisionActiveFlags; 
  char v6; 
  char v7; 
  char v8; 
  bool v9; 

  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_CreateCollisionFromArchive");
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  collisionActiveFlags = InstanceCollisionContext->collisionActiveFlags;
  v6 = collisionActiveFlags & 1;
  v7 = collisionActiveFlags & 8;
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6831, ASSERT_TYPE_ASSERT, "(!deferCreateCollisions || !wasActive)", (const char *)&queryFormat, "!deferCreateCollisions || !wasActive", -2i64) )
      __debugbreak();
  }
  if ( v6 )
  {
LABEL_9:
    v8 = 1;
    goto LABEL_10;
  }
LABEL_6:
  if ( v7 && (InstanceCollisionContext->collisionActiveFlags & 2) != 0 )
    goto LABEL_9;
  v8 = 0;
LABEL_10:
  v9 = v6 && (InstanceCollisionContext->collisionActiveFlags & 4) == 0;
  if ( v8 )
  {
    ScriptableCl_CreateCollisionPhysicsInstances(localClientNum, scriptableIndex, v9, v9, 0);
  }
  else if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6835, ASSERT_TYPE_ASSERT, "(createCollisions || !activateCollisions)", (const char *)&queryFormat, "createCollisions || !activateCollisions") )
  {
    __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_CreateCollisionPhysicsInstances
==============
*/
void ScriptableCl_CreateCollisionPhysicsInstances(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, bool activate, bool addImmediate, bool deactivateLinkedDynEntCollisions)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  const cmodel_t *BrushModel; 
  const XModel *model; 
  const char *v12; 
  const char *v13; 
  int v14; 
  int v15; 
  int v16; 
  const PhysicsAsset *physicsAsset; 
  const XModel *v18; 
  Physics_InstantiationForceType forceType; 
  const ScriptableDef *v20; 
  unsigned int v21; 
  __int32 v22; 
  unsigned int v23; 
  const XModel *v24; 
  Physics_WorldId v25; 
  bool v26; 
  unsigned int v27; 
  unsigned int LinkObject; 
  DynEntityClient *Client; 
  char v30; 
  Scriptable_Analytics_Zone AnalyticsZoneForScriptable; 
  vec3_t outOrigin; 
  const ScriptableDef *def; 
  Physics_InstantiateShapeOverride shapeOverride; 
  __int64 v37; 
  vec4_t quat; 

  v37 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_CreateCollisionPhysicsInstances");
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6604, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  BrushModel = NULL;
  model = InstanceCollisionContext->model;
  v12 = "r_collisionContext.model->physicsAsset";
  if ( model )
  {
    if ( model->physicsAsset )
      goto LABEL_20;
    v13 = "(r_collisionContext.model->physicsAsset)";
    v14 = 6622;
    goto LABEL_18;
  }
  if ( InstanceCollisionContext->clipmapCModelIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6612, ASSERT_TYPE_ASSERT, "(r_collisionContext.clipmapCModelIndex != SCRIPTABLE_COLLMAP_INVALID_INDEX)", (const char *)&queryFormat, "r_collisionContext.clipmapCModelIndex != SCRIPTABLE_COLLMAP_INVALID_INDEX") )
    __debugbreak();
  if ( InstanceCollisionContext->clipmapCModelIndex == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6613, ASSERT_TYPE_ASSERT, "(r_collisionContext.clipmapCModelIndex != SCRIPTABLE_COLLMAP_UNKNOWN_INDEX)", (const char *)&queryFormat, "r_collisionContext.clipmapCModelIndex != SCRIPTABLE_COLLMAP_UNKNOWN_INDEX") )
    __debugbreak();
  if ( !CM_BrushModelIsValid(InstanceCollisionContext->clipmapCModelIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6614, ASSERT_TYPE_ASSERT, "(CM_BrushModelIsValid( r_collisionContext.clipmapCModelIndex ))", (const char *)&queryFormat, "CM_BrushModelIsValid( r_collisionContext.clipmapCModelIndex )") )
    __debugbreak();
  BrushModel = CM_GetBrushModel(InstanceCollisionContext->clipmapCModelIndex);
  if ( !BrushModel )
  {
    v12 = "clipmapModel";
    v13 = "(clipmapModel)";
    v14 = 6617;
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", v14, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v12) )
      __debugbreak();
  }
LABEL_20:
  if ( scriptableIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6628, ASSERT_TYPE_ASSERT, "(scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX)", (const char *)&queryFormat, "scriptableIndex <= PHYSICS_MAX_SCRIPTABLE_INDEX") )
    __debugbreak();
  if ( localClientNum > (LOCAL_CLIENT_COUNT|LOCAL_CLIENT_LAST) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6629, ASSERT_TYPE_ASSERT, "(localClientNum <= PHYSICS_MAX_LOCAL_CLIENT_INDEX)", (const char *)&queryFormat, "localClientNum <= PHYSICS_MAX_LOCAL_CLIENT_INDEX") )
    __debugbreak();
  v15 = scriptableIndex & 0x3FFFFF | ((localClientNum << 22) + 0x400000) & 0xC00000 | Physics_MakeRef(Physics_RefSystem_Scriptable, Physics_RelationshipSystem_None, 0, 0);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  AnglesToQuat(&InstanceCommonContext->angles, &quat);
  v16 = 0;
  shapeOverride.customShape = NULL;
  shapeOverride.shapeOverride = -1;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeAddendum = -1;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  physicsAsset = NULL;
  v18 = InstanceCollisionContext->model;
  if ( v18 )
  {
    if ( !v18->physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6646, ASSERT_TYPE_ASSERT, "(r_collisionContext.model->physicsAsset)", (const char *)&queryFormat, "r_collisionContext.model->physicsAsset") )
      __debugbreak();
    physicsAsset = InstanceCollisionContext->model->physicsAsset;
LABEL_33:
    if ( physicsAsset )
      goto LABEL_36;
    goto LABEL_34;
  }
  if ( BrushModel )
  {
    shapeOverride.shapeOverride = BrushModel->physicsShapeOverrideIdx;
    physicsAsset = BrushModel->physicsAsset;
    goto LABEL_33;
  }
LABEL_34:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6656, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
LABEL_36:
  LOBYTE(v16) = InstanceCollisionContext->neverMoves;
  forceType = v16 + 2;
  CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
  v20 = def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (v20->flags & 2) != 0 )
  {
    if ( InstanceCollisionContext->scriptableCollisionPredictive != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6666, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionPredictive == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionPredictive == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v21 = Physics_InstantiateAsset((Physics_WorldId)(3 * localClientNum + 2), InstanceCollisionContext->model, physicsAsset, v15, &outOrigin, &quat, activate, addImmediate, 1, &shapeOverride, forceType, Physics_InstantiationFilterTypeNone, 0);
    InstanceCollisionContext->scriptableCollisionPredictive = v21;
    if ( activate != Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 2), v21, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6668, ASSERT_TYPE_ASSERT, "(activate == Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true ))", (const char *)&queryFormat, "activate == Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true )") )
      __debugbreak();
  }
  if ( InstanceCollisionContext->scriptableCollisionAuthoritative != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6670, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionAuthoritative == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionAuthoritative == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v22 = 3 * localClientNum;
  v23 = Physics_InstantiateAsset((Physics_WorldId)(3 * localClientNum + 3), InstanceCollisionContext->model, physicsAsset, v15, &outOrigin, &quat, activate, addImmediate, 1, &shapeOverride, forceType, Physics_InstantiationFilterTypeNone, 0);
  InstanceCollisionContext->scriptableCollisionAuthoritative = v23;
  if ( activate != Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 3), v23, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6672, ASSERT_TYPE_ASSERT, "(activate == Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true ))", (const char *)&queryFormat, "activate == Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true )") )
    __debugbreak();
  if ( InstanceCollisionContext->scriptableCollisionDetail != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6673, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionDetail == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v24 = InstanceCollisionContext->model;
  if ( v24 && v24->detailCollision )
  {
    v25 = v22 + 4;
    v26 = activate;
    v27 = Physics_InstantiateDetailModel((Physics_WorldId)(v22 + 4), v24, v15, &outOrigin, &quat, activate, 1, 0, 1);
    InstanceCollisionContext->scriptableCollisionDetail = v27;
    if ( Physics_GetNumRigidBodys((const Physics_WorldId)(v22 + 4), v27) != 1 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144080210);
  }
  else
  {
    v25 = v22 + 4;
    InstanceCollisionContext->scriptableCollisionDetail = Physics_InstantiateAsset((Physics_WorldId)(v22 + 4), v24, physicsAsset, v15, &outOrigin, &quat, activate, addImmediate, 1, &shapeOverride, forceType, Physics_InstantiationFilterTypeNone, 0);
    v26 = activate;
  }
  if ( v26 != Physics_IsInstanceInWorld(v25, InstanceCollisionContext->scriptableCollisionDetail, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6687, ASSERT_TYPE_ASSERT, "(activate == Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true ))", (const char *)&queryFormat, "activate == Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true )") )
    __debugbreak();
  if ( (def->flags & 2) != 0 )
    Physics_SetInstanceContents((Physics_WorldId)(v22 + 2), InstanceCollisionContext->scriptableCollisionPredictive, 624146387);
  Physics_SetInstanceContents((Physics_WorldId)(v22 + 3), InstanceCollisionContext->scriptableCollisionAuthoritative, 624146387);
  Physics_SetInstanceContents(v25, InstanceCollisionContext->scriptableCollisionDetail, 624146387);
  if ( deactivateLinkedDynEntCollisions && ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_DYNENT )
  {
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
    Client = DynEnt_GetClient(localClientNum, LinkObject, DYNENT_BASIS_MODEL);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6705, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    if ( InstanceCollisionContext->model )
    {
      Client->flags |= 0x1001u;
      DynEntCL_Lock(Client);
      if ( (Client->flags & 2) != 0 )
      {
        DynEnt_ShutdownPhysics(localClientNum, LinkObject, DYNENT_BASIS_MODEL, 0);
        Client->flags &= ~0x4000u;
      }
      DynEntCL_Unlock(Client);
    }
    else
    {
      Client->flags &= ~0x1000u;
    }
  }
  CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
  v30 = 16;
  if ( v26 )
    v30 = 1;
  InstanceCollisionContext->collisionActiveFlags = v30;
  AnalyticsZoneForScriptable = ScriptableCl_GetAnalyticsZoneForScriptable(localClientNum, scriptableIndex);
  Scriptable_Analytics_AddCollisionInstanceCount(AnalyticsZoneForScriptable, 1);
  if ( v26 )
    Scriptable_Analytics_AddClientCollisionActivationCount(AnalyticsZoneForScriptable, 1);
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_DestroyCollision
==============
*/
void ScriptableCl_DestroyCollision(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  ScriptableCollisionClientContext *v5; 
  int v6; 
  Scriptable_Analytics_Zone AnalyticsZoneForScriptable; 
  Scriptable_Analytics_Zone v8; 
  bool v9; 

  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  v5 = InstanceCollisionContext;
  if ( InstanceCollisionContext->collisionActiveFlags )
  {
    AnalyticsZoneForScriptable = ScriptableCl_GetAnalyticsZoneForScriptable(localClientNum, scriptableIndex);
    v8 = AnalyticsZoneForScriptable;
    if ( v5->scriptableCollisionPredictive != -1 || v5->scriptableCollisionAuthoritative != -1 )
      Scriptable_Analytics_AddCollisionInstanceCount(AnalyticsZoneForScriptable, -1);
    if ( (v5->collisionActiveFlags & 1) != 0 )
      Scriptable_Analytics_AddClientCollisionActivationCount(v8, -1);
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    if ( v5->scriptableCollisionPredictive != -1 )
    {
      Physics_DestroyInstance((Physics_WorldId)(3 * localClientNum + 2), v5->scriptableCollisionPredictive, 0);
      v5->scriptableCollisionPredictive = -1;
    }
    if ( v5->scriptableCollisionAuthoritative != -1 )
    {
      if ( v5->scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6878, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      Physics_DestroyInstance((Physics_WorldId)(3 * localClientNum + 3), v5->scriptableCollisionAuthoritative, 1);
      Physics_DestroyInstance((Physics_WorldId)(3 * localClientNum + 4), v5->scriptableCollisionDetail, 0);
      *(_QWORD *)&v5->scriptableCollisionAuthoritative = -1i64;
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    v9 = v5->scriptableCollisionPredictive == -1;
    v5->collisionActiveFlags = 32;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6890, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionPredictive == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionPredictive == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v5->scriptableCollisionAuthoritative != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6891, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionAuthoritative == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionAuthoritative == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v5->scriptableCollisionDetail != -1 )
    {
      v6 = 6892;
LABEL_30:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", v6, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionDetail == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
    }
  }
  else
  {
    if ( InstanceCollisionContext->scriptableCollisionPredictive != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6850, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionPredictive == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionPredictive == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v5->scriptableCollisionAuthoritative != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6851, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionAuthoritative == 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionAuthoritative == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v5->scriptableCollisionDetail != -1 )
    {
      v6 = 6852;
      goto LABEL_30;
    }
  }
}

/*
==============
ScriptableCl_GetAnalyticsZoneForScriptable
==============
*/
__int64 ScriptableCl_GetAnalyticsZoneForScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  __int64 result; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6587, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 2) == 0 )
    return 4i64;
  ScriptableCommon_AssertCountsInitialized();
  result = 3i64;
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    return 1i64;
  return result;
}

/*
==============
ScriptableCl_GetLootPingPopupIndex
==============
*/
__int64 ScriptableCl_GetLootPingPopupIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 7293, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( s_scriptableLootPing[v1].popup )
    return s_scriptableLootPing[v1].index;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
ScriptableCl_GetNearestImpactVelocity
==============
*/
bool ScriptableCl_GetNearestImpactVelocity(const LocalClientNum_t localClientNum, const vec3_t *scriptableCenter, vec3_t *outVelocity)
{
  __int64 v5; 
  unsigned int v6; 
  __int64 i; 
  CgEntitySystem *EntitySystem; 
  __int64 v9; 
  BgWeaponHandle *v10; 
  __int16 v11; 
  float v12; 
  __int16 j; 
  unsigned int v14; 
  int v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  CgWeaponMap *v30; 
  const Weapon *Weapon; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v35; 
  bool result; 
  const dvar_t *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  vec3_t outOrigin; 

  v5 = localClientNum;
  v6 = 0;
  for ( i = 0i64; ; ++i )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
    if ( v6 >= 0x800 )
    {
      LODWORD(v42) = 2048;
      LODWORD(v41) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v41, v42) )
        __debugbreak();
    }
    v9 = (__int64)&EntitySystem->m_entities[i];
    if ( (*(_BYTE *)(v9 + 648) & 1) == 0 )
      goto LABEL_46;
    v10 = (BgWeaponHandle *)(v9 + 400);
    if ( v9 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((*(_WORD *)(v9 + 408) - 12) & 0xFFFD) != 0 )
      break;
    if ( *(_BYTE *)(v9 + 524) )
      goto LABEL_13;
LABEL_45:
    memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_46:
    if ( (int)++v6 >= 2048 )
      return 0;
  }
  v11 = *(_WORD *)(v9 + 408);
  if ( v11 != 4 )
  {
    if ( !v11 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( SLOWORD(v10->m_mapEntryId) < (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v44) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(v43) = SLOWORD(v10->m_mapEntryId);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1457, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) >= ( ComCharacterLimits::GetClientMaxCount() )", "%s >= %s\n\t%i, %i", "cent->nextState.number", "ComCharacterLimits::GetClientMaxCount()", v43, v44) )
          __debugbreak();
      }
      for ( j = *(_WORD *)(v9 + 672); j != *(_WORD *)(v9 + 552); ++j )
      {
        v14 = *(_DWORD *)(v9 + 8i64 * (j & 3) + 560) - 108;
        if ( v14 <= 8 )
        {
          v15 = 291;
          if ( _bittest(&v15, v14) )
          {
            if ( !*(_QWORD *)(v9 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
              __debugbreak();
            FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v9 + 48), (const cpose_t *)v9);
            FunctionPointer_origin((const vec4_t *)(v9 + 56), &outOrigin);
            if ( *(_BYTE *)(v9 + 2) )
            {
              _XMM0 = LODWORD(outOrigin.v[0]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v20;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              outOrigin.v[0] = *(float *)&_XMM2;
              _XMM0 = LODWORD(outOrigin.v[1]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v20;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              outOrigin.v[1] = *(float *)&_XMM2;
              _XMM0 = LODWORD(outOrigin.v[2]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v20;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              outOrigin.v[2] = *(float *)&_XMM2;
            }
            if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v30 = CgWeaponMap::ms_instance[v5];
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
              __debugbreak();
            Weapon = BgWeaponMap::GetWeapon(v30, v10[33]);
            v12 = (float)BG_ExplosionRadius(Weapon, 0);
            goto LABEL_44;
          }
        }
      }
    }
    goto LABEL_45;
  }
LABEL_13:
  CG_GetPoseOrigin((const cpose_t *)v9, &outOrigin);
  v12 = FLOAT_160_0;
LABEL_44:
  v33 = LODWORD(scriptableCenter->v[0]);
  v32 = scriptableCenter->v[0] - outOrigin.v[0];
  outVelocity->v[0] = v32;
  v34 = scriptableCenter->v[1] - outOrigin.v[1];
  outVelocity->v[1] = v34;
  v35 = scriptableCenter->v[2] - outOrigin.v[2];
  *(float *)&v33 = fsqrt((float)((float)(v32 * v32) + (float)(v34 * v34)) + (float)(v35 * v35));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm10, xmm0
  }
  outVelocity->v[0] = v32 * (float)(1.0 / *(float *)&_XMM1);
  outVelocity->v[1] = v34 * (float)(1.0 / *(float *)&_XMM1);
  outVelocity->v[2] = v35 * (float)(1.0 / *(float *)&_XMM1);
  if ( *(float *)&v33 > v12 )
    goto LABEL_45;
  v40 = DCONST_DVARBOOL_scriptable_debug_impact;
  if ( !DCONST_DVARBOOL_scriptable_debug_impact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_impact") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
  {
    CG_DebugLine(&outOrigin, scriptableCenter, &colorRed, 0, 600);
    CG_DebugStar(scriptableCenter, &colorCyan, 0, 600);
  }
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  return result;
}

/*
==============
ScriptableCl_GetPhysInstanceId
==============
*/
unsigned int ScriptableCl_GetPhysInstanceId(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int32 v4; 
  int LinkObject; 
  ScriptableLinkType LinkType; 
  centity_t *Entity; 
  CG_PhysicsObject *v9; 

  v4 = 3 * localClientNum;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4145, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4146, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
      __debugbreak();
    v9 = CG_PhysicsObject_Get(Entity->nextState.number, localClientNum);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4150, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    return v9->physicsInstances[v4 + 3];
  }
  else if ( LinkType == SCRIPTABLE_LINK_DYNENT )
  {
    return DynEnt_GetPhysicsInstance(LinkObject, DYNENT_BASIS_MODEL, localClientNum);
  }
  else
  {
    return -1;
  }
}

/*
==============
ScriptableCl_GravityArcCalcData
==============
*/
void ScriptableCl_GravityArcCalcData(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, ScriptableInstanceContextSecure *r_context, const ScriptableEventGravityArcDef *const moveDef, ScriptableGravityArcRuntimeData *arcData)
{
  __int16 StandaloneParentEntityNum; 
  const centity_t *Entity; 
  vec3_t anglesInitial; 
  vec3_t originInitial; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2546, ASSERT_TYPE_ASSERT, "(moveDef != nullptr)", (const char *)&queryFormat, "moveDef != nullptr") )
    __debugbreak();
  if ( (*((_BYTE *)r_context + 60) & 0x20) != 0 )
  {
    StandaloneParentEntityNum = ScriptableCl_GetStandaloneParentEntityNum(localClientNum, scriptableIndex);
    if ( StandaloneParentEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2551, ASSERT_TYPE_ASSERT, "(parentEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntityNum != ENTITYNUM_NONE") )
      __debugbreak();
    Entity = CG_GetEntity(localClientNum, StandaloneParentEntityNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2553, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
      __debugbreak();
    ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(localClientNum, scriptableIndex, Entity, &r_context->originInitial, &r_context->anglesInitial, &originInitial, &anglesInitial);
    ScriptableBg_GravityArcCalcData(moveDef, r_context->payload, &originInitial, &anglesInitial, arcData);
  }
  else
  {
    ScriptableBg_GravityArcCalcData(moveDef, r_context->payload, &r_context->originInitial, &r_context->anglesInitial, arcData);
  }
}

/*
==============
ScriptableCl_HasLootFX
==============
*/
bool ScriptableCl_HasLootFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned int LinkObject; 
  bool result; 

  result = 0;
  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_CLIENTMODEL )
  {
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
    if ( CG_ClientModel_GetParticleSystemHandle(localClientNum, LinkObject) )
      return 1;
  }
  return result;
}

/*
==============
ScriptableCl_IsUpdateRequiredForInstance
==============
*/
char ScriptableCl_IsUpdateRequiredForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableDef *def)
{
  int v6; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6386, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_RequiresUpdate( &def ) ) )", "( def.name ) = %s", def->name) )
    __debugbreak();
  v6 = 0;
  if ( !def->numParts )
    return 0;
  while ( !ScriptableCl_IsUpdateRequiredForPartInCurrentState(localClientNum, scriptableIndex, &def->parts[v6]) )
  {
    if ( ++v6 >= def->numParts )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableCl_IsUpdateRequiredForPartInCurrentState
==============
*/
char ScriptableCl_IsUpdateRequiredForPartInCurrentState(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part)
{
  ScriptablePartRuntime *PartRuntime; 
  int v7; 
  __int64 v9; 

  if ( (part->flags & 0x200) == 0 )
    return 0;
  if ( !part->numStates )
    goto LABEL_10;
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, part);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6359, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= part->numStates )
  {
    LODWORD(v9) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6361, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part.numStates )", "runtime->stateId doesn't index part.numStates\n\t%i not in [0, %i)", v9, part->numStates) )
      __debugbreak();
  }
  if ( (part->states[PartRuntime->stateId].base.flags & 0x200) == 0 )
  {
LABEL_10:
    v7 = 0;
    if ( part->numChildParts )
    {
      while ( !ScriptableCl_IsUpdateRequiredForPartInCurrentState(localClientNum, scriptableIndex, &part->childParts[v7]) )
      {
        if ( ++v7 >= part->numChildParts )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

/*
==============
ScriptableCl_MLG_hackPFXTint
==============
*/
void ScriptableCl_MLG_hackPFXTint(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, ParticleSystemHandle particleSystemHandle, unsigned int eventIdx)
{
  __int64 v4; 
  char v5; 
  const ScriptableTeamEvent *teamEvent; 
  int filter; 
  ParticleSystem *v10; 
  unsigned __int32 v11; 
  __int64 v12; 
  unsigned __int8 v13; 

  v4 = localClientNum;
  v5 = eventIdx;
  if ( CG_GetLocalClientGlobals(localClientNum)->m_isMLGSpectator )
  {
    teamEvent = eventParams->teamEvent;
    if ( teamEvent )
      filter = teamEvent->filter;
    else
      filter = 5;
    v10 = NULL;
    v11 = 0;
    if ( g_particleSystemsGeneration[4096 * v4 + (particleSystemHandle & 0xFFF)].__all32 == particleSystemHandle )
      v11 = particleSystemHandle & 0xFFF;
    v12 = (v4 << 12) + v11;
    if ( g_particleSystems[0][v12] >= (ParticleSystem *)0x1000 )
      v10 = g_particleSystems[0][v12];
    if ( v10 )
    {
      v10->m_flags |= 0x1000000000ui64;
      if ( filter == 3 )
      {
        v13 = 1;
      }
      else if ( (unsigned int)(filter - 1) <= 1 )
      {
        v13 = 2;
      }
      else
      {
        v13 = ((v5 & 1) != 0) + 1;
      }
      ParticleSystem::SetGlobalTintIndex(v10, v13);
    }
  }
}

/*
==============
ScriptableCl_MarkLootPingStatusDirty
==============
*/
void ScriptableCl_MarkLootPingStatusDirty(const LocalClientNum_t localClientNum)
{
  s_scriptableLootPing[localClientNum].pingStatusDirty = 1;
}

/*
==============
ScriptableCl_ObjectiveActiveForInstance
==============
*/
bool ScriptableCl_ObjectiveActiveForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  return ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->objectiveIndex != 0;
}

/*
==============
ScriptableCl_ObjectiveAdd
==============
*/
void ScriptableCl_ObjectiveAdd(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const ObjectiveSettings *const settings)
{
  __int64 v3; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableObjectiveList *v7; 
  unsigned __int8 count; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v15) )
      __debugbreak();
    LODWORD(v16) = 2;
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", v13, v16) )
      __debugbreak();
  }
  if ( s_scriptableObjectiveLists[v3].count >= 0xFAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 300, ASSERT_TYPE_ASSERT, "(ScriptableCl_ObjectiveAddSafe( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_ObjectiveAddSafe( localClientNum )") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex);
  if ( !InstanceCommonContext->objectiveIndex )
  {
    v7 = &s_scriptableObjectiveLists[v3];
    count = v7->count;
    if ( count >= 0xFAu )
    {
      LODWORD(v14) = 250;
      LODWORD(v11) = count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( list.count ) < (unsigned)( SCRIPTABLE_OBJECTIVE_MAX )", "list.count doesn't index SCRIPTABLE_OBJECTIVE_MAX\n\t%i not in [0, %i)", v11, v14) )
        __debugbreak();
    }
    v9 = v7->count;
    if ( v9 < 0xFAu )
    {
      v7->objectives[v9].scriptableIndex = scriptableIndex;
      v7->objectives[v7->count].settings = settings;
      InstanceCommonContext->objectiveIndex = ++v7->count;
      v10 = v7->count;
      if ( v7->peak < v10 )
        v7->peak = v10;
      ScriptableCl_ObjectiveChangedSet((const LocalClientNum_t)v3);
    }
  }
}

/*
==============
ScriptableCl_ObjectiveAddSafe
==============
*/
bool ScriptableCl_ObjectiveAddSafe(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_scriptableObjectiveLists[v1].count < 0xFAu;
}

/*
==============
ScriptableCl_ObjectiveChanged
==============
*/
_BOOL8 ScriptableCl_ObjectiveChanged(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_scriptableObjectiveLists[v1].changed;
}

/*
==============
ScriptableCl_ObjectiveChangedClear
==============
*/
void ScriptableCl_ObjectiveChangedClear(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  s_scriptableObjectiveLists[v1].changed = 0;
}

/*
==============
ScriptableCl_ObjectiveChangedSet
==============
*/
void ScriptableCl_ObjectiveChangedSet(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  s_scriptableObjectiveLists[v1].changed = 1;
}

/*
==============
ScriptableCl_ObjectiveCount
==============
*/
__int64 ScriptableCl_ObjectiveCount(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_scriptableObjectiveLists[v1].count;
}

/*
==============
ScriptableCl_ObjectiveGet
==============
*/
const ObjectiveSettings *ScriptableCl_ObjectiveGet(const LocalClientNum_t localClientNum, unsigned __int8 objectiveIndex, vec3_t *out_origin)
{
  __int64 v3; 
  ScriptableObjectiveList *v6; 
  unsigned __int8 count; 
  ScriptableObjective *v8; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned __int8 v11; 
  __int64 v13; 
  __int64 v14; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = &s_scriptableObjectiveLists[v3];
  count = v6->count;
  if ( objectiveIndex >= count )
  {
    LODWORD(v14) = count;
    LODWORD(v13) = objectiveIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 235, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( list.count )", "objectiveIndex doesn't index list.count\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( objectiveIndex >= v6->count )
    return 0i64;
  v8 = &v6->objectives[objectiveIndex];
  if ( !v8->settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 244, ASSERT_TYPE_ASSERT, "(objective.settings)", (const char *)&queryFormat, "objective.settings") )
    __debugbreak();
  scriptableIndex = v8->scriptableIndex;
  if ( v8->scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 247, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 248, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !v8->settings || scriptableIndex == -1 || !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, scriptableIndex) )
    return 0i64;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex);
  if ( !InstanceCommonContext->objectiveIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 267, ASSERT_TYPE_ASSERT, "(r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE)", (const char *)&queryFormat, "r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE") )
    __debugbreak();
  if ( InstanceCommonContext->objectiveIndex - 1 != objectiveIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 268, ASSERT_TYPE_ASSERT, "( ( r_context.objectiveIndex - SCRIPTABLE_OBJECTIVE_OFFSET_IN_CONTEXT ) ) == ( objectiveIndex )", "%s == %s\n\t%i, %i", "( r_context.objectiveIndex - SCRIPTABLE_OBJECTIVE_OFFSET_IN_CONTEXT )", "objectiveIndex", InstanceCommonContext->objectiveIndex - 1, objectiveIndex) )
    __debugbreak();
  v11 = InstanceCommonContext->objectiveIndex;
  if ( !v11 || v11 - 1 != objectiveIndex )
    return 0i64;
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, out_origin);
  return v8->settings;
}

/*
==============
ScriptableCl_ObjectiveGetForInstance
==============
*/
unsigned __int8 ScriptableCl_ObjectiveGetForInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  int v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( !InstanceCommonContext->objectiveIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 208, ASSERT_TYPE_ASSERT, "(r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE)", (const char *)&queryFormat, "r_context.objectiveIndex != SCRIPTABLE_OBJECTIVE_CONTEXT_NONE") )
    __debugbreak();
  return InstanceCommonContext->objectiveIndex - 1;
}

/*
==============
ScriptableCl_ObjectiveGetInstanceIndex
==============
*/
__int64 ScriptableCl_ObjectiveGetInstanceIndex(const LocalClientNum_t localClientNum, unsigned __int8 objectiveIndex)
{
  __int64 v2; 
  ScriptableObjectiveList *v4; 
  unsigned __int8 count; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  v4 = &s_scriptableObjectiveLists[v2];
  count = v4->count;
  if ( objectiveIndex >= count )
  {
    LODWORD(v9) = count;
    LODWORD(v7) = objectiveIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( list.count )", "objectiveIndex doesn't index list.count\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( objectiveIndex < v4->count )
    return v4->objectives[objectiveIndex].scriptableIndex;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
ScriptableCl_ObjectiveInitForClient
==============
*/
void ScriptableCl_ObjectiveInitForClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  *(_WORD *)&s_scriptableObjectiveLists[v2].count = 0;
  s_scriptableObjectiveLists[v2].changed = 0;
}

/*
==============
ScriptableCl_ObjectivePeak
==============
*/
__int64 ScriptableCl_ObjectivePeak(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_scriptableObjectiveLists[v1].peak;
}

/*
==============
ScriptableCl_ObjectiveRemove
==============
*/
void ScriptableCl_ObjectiveRemove(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableObjectiveList *v5; 
  unsigned __int8 count; 
  unsigned __int8 objectiveIndex; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v15) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  if ( InstanceCommonContext->objectiveIndex )
  {
    v5 = &s_scriptableObjectiveLists[v2];
    if ( !v5->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 341, ASSERT_TYPE_ASSERT, "(list.count > 0)", (const char *)&queryFormat, "list.count > 0") )
      __debugbreak();
    count = v5->count;
    if ( count )
    {
      objectiveIndex = InstanceCommonContext->objectiveIndex;
      v8 = objectiveIndex - 1;
      if ( (unsigned __int8)(objectiveIndex - 1) >= count )
      {
        LODWORD(v14) = count;
        LODWORD(v12) = (unsigned __int8)(objectiveIndex - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( list.count )", "objectiveIndex doesn't index list.count\n\t%i not in [0, %i)", v12, v14) )
          __debugbreak();
      }
      if ( v5->objectives[v8].scriptableIndex != scriptableIndex )
      {
        v17 = scriptableIndex;
        v16 = v5->objectives[v8].scriptableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 351, ASSERT_TYPE_ASSERT, "( list.objectives[objectiveIndex].scriptableIndex ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "list.objectives[objectiveIndex].scriptableIndex", "scriptableIndex", v16, v17) )
          __debugbreak();
      }
      v9 = v5->count;
      if ( v8 < v9 && v5->objectives[v8].scriptableIndex == scriptableIndex )
      {
        v10 = v9 - 1;
        if ( v9 > 1u )
        {
          ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, v5->objectives[(unsigned __int8)(v9 - 1)].scriptableIndex)->objectiveIndex = objectiveIndex;
          v5->objectives[v8] = v5->objectives[v10];
          v9 = v5->count;
        }
        if ( v10 >= v9 )
        {
          LODWORD(v14) = v9;
          LODWORD(v12) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( lastIndex ) < (unsigned)( list.count )", "lastIndex doesn't index list.count\n\t%i not in [0, %i)", v12, v14) )
            __debugbreak();
        }
        v11 = v10;
        v5->objectives[v11].scriptableIndex = -1;
        v5->objectives[v11].settings = NULL;
        --v5->count;
        InstanceCommonContext->objectiveIndex = 0;
        ScriptableCl_ObjectiveChangedSet((const LocalClientNum_t)v2);
      }
    }
  }
}

/*
==============
ScriptableCl_PlayLootBeamFX
==============
*/
void ScriptableCl_PlayLootBeamFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const FXRegisteredDef *LootItemRarityBeamFX; 

  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
  if ( LootItemDef )
  {
    LootItemRarityBeamFX = ScriptableCl_GetLootItemRarityBeamFX(localClientNum, LootItemDef->rarity);
    ScriptableCl_PlayLootFX(localClientNum, scriptableIndex, LootItemRarityBeamFX, 0, 1);
  }
}

/*
==============
ScriptableCl_PlayLootFX
==============
*/
void ScriptableCl_PlayLootFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const FXRegisteredDef *const fxHandle, const bool bolted, const bool saveHandle)
{
  const dvar_t *v9; 
  unsigned int LinkObject; 
  int time; 
  int v12; 
  ParticleSystemHandle v13; 
  const vec3_t *InstanceAngles; 
  unsigned int outFirstUsablePartIndex; 
  vec3_t out_usePosition; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 

  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 7062, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_scriptable_loot_fx_enabled;
  if ( !DCONST_DVARBOOL_scriptable_loot_fx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_loot_fx_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_CLIENTMODEL && fxHandle->m_particleSystemDef )
  {
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
    time = CG_GetLocalClientGlobals(localClientNum)->time;
    if ( bolted )
    {
      v12 = truncate_cast<int,unsigned int>(LinkObject) + 2117;
      if ( v12 > 2500 )
        return;
      v13 = FX_PlayBoltedEffect(localClientNum, fxHandle, time, v12, 0, 0);
    }
    else
    {
      if ( ScriptableCl_IsScriptableUsable(localClientNum, scriptableIndex, &outFirstUsablePartIndex) )
        ScriptableCl_GetPartUsePosition(localClientNum, scriptableIndex, outFirstUsablePartIndex, &out_usePosition);
      else
        ScriptableCl_GetInstanceOrigin(localClientNum, scriptableIndex, &out_usePosition);
      InstanceAngles = ScriptableCl_GetInstanceAngles(localClientNum, scriptableIndex);
      AnglesToAxis(InstanceAngles, &axis);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_scriptable_loot_fx_debug, "scriptable_loot_fx_debug") )
      {
        end.v[0] = out_usePosition.v[0];
        end.v[2] = out_usePosition.v[2] + 60.0;
        end.v[1] = out_usePosition.v[1];
        CG_DebugLine(&out_usePosition, &end, &colorRed, 0, 1000);
      }
      v13 = FX_PlayOrientedEffect(localClientNum, fxHandle, time, &out_usePosition, &axis);
    }
    if ( saveHandle )
      CG_ClientModel_SetParticleSystemHandle(localClientNum, LinkObject, v13);
  }
}

/*
==============
ScriptableCl_PlayLootTrailFX
==============
*/
void ScriptableCl_PlayLootTrailFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const FXRegisteredDef *LootItemRarityTrailFX; 

  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
  if ( LootItemDef )
  {
    LootItemRarityTrailFX = ScriptableCl_GetLootItemRarityTrailFX(localClientNum, LootItemDef->rarity);
    ScriptableCl_PlayLootFX(localClientNum, scriptableIndex, LootItemRarityTrailFX, 1, 1);
  }
}

/*
==============
ScriptableCl_PlayParticleFX
==============
*/
void ScriptableCl_PlayParticleFX(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, const unsigned int scriptableIndex, const ScriptableEventPFXDef *particleFX, unsigned int eventIdx)
{
  unsigned int v6; 
  __int64 v8; 
  int time; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v11; 
  float v12; 
  const ScriptableDamageEvent *damageEvent; 
  float v14; 
  __int128 v15; 
  float v16; 
  ScriptableLinkType LinkType; 
  unsigned int LinkObject; 
  int v22; 
  ParticleSystemHandle v23; 
  unsigned int v24; 
  int scrTagCount; 
  int v26; 
  unsigned __int8 BoneIdx; 
  unsigned __int16 v28; 
  ParticleSystemHandle v29; 
  __int64 v30; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *v32; 
  unsigned __int8 *v33; 
  const dvar_t *v34; 
  unsigned int v35; 
  __int64 v36; 
  ParticleSystem *v37; 
  const ParticleSystemDef *v38; 
  const char *name; 
  ParticleSystemHandle v40; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  __m128 v; 
  cg_t *LocalClientGlobals; 
  scr_string_t v47; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  int v50; 
  const DObj *ClientDObj; 
  const DObj *v52; 
  unsigned int BoneIndexForDobj; 
  DObj *DObj; 
  unsigned int v55; 
  unsigned int v56; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  entityType_s eType; 
  __int64 number; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int64 v62; 
  __int64 v63; 
  int v64; 
  ParticleSystemHandle v65; 
  int v66; 
  int v67; 
  ParticleSystem *v68; 
  __m128 v70; 
  const ParticleSystemDef *particleSystemDef; 
  const char *v74; 
  const char *v75; 
  __int64 v76; 
  __int64 *v77; 
  __int64 v78; 
  unsigned int v79; 
  unsigned __int64 v80; 
  unsigned __int64 v81; 
  __int128 v83; 
  __int64 boneIndex; 
  __int64 spawnFlags; 
  __int64 markEntnum; 
  bool NearestImpactVelocity; 
  unsigned __int8 index[7]; 
  __int64 v91; 
  FXRegisteredDef def; 
  int v93; 
  unsigned int pHoldrand; 
  int dobjHandle; 
  unsigned int ViewmodelDObjHandle; 
  unsigned int scriptableIndexa; 
  scr_string_t boneTag; 
  const char ***v99; 
  __int64 v100; 
  __int64 v101; 
  DObj *obj[2]; 
  float4 endPos; 
  float4 startPos; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> in2; 
  char dest[256]; 

  v101 = -2i64;
  v6 = scriptableIndex;
  scriptableIndexa = scriptableIndex;
  v8 = localClientNum;
  v93 = 0;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( !particleFX->effectDef.particleSystemDef )
    return;
  def.m_particleSystemDef = particleFX->effectDef.particleSystemDef;
  in1 = identityMatrix33;
  v91 = 0i64;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v8, v6);
  v11 = InstanceCommonContext;
  v99 = (const char ***)InstanceCommonContext;
  NearestImpactVelocity = 0;
  v12 = 0.0;
  *(float *)obj = 0.0;
  *((float *)obj + 1) = 0.0;
  *(float *)&obj[1] = 0.0;
  if ( eventParams && (damageEvent = eventParams->damageEvent) != NULL )
  {
    v14 = damageEvent->end.v[0] - damageEvent->start.v[0];
    v15 = LODWORD(damageEvent->end.v[1]);
    *(float *)&v15 = damageEvent->end.v[1] - damageEvent->start.v[1];
    v16 = damageEvent->end.v[2] - damageEvent->start.v[2];
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14)) + (float)(v16 * v16));
    _XMM1 = v15;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm2, xmm0
    }
    boneTag = _XMM1;
    v12 = v14 * (float)(1.0 / *(float *)&_XMM1);
    NearestImpactVelocity = 1;
  }
  else if ( particleFX->allowNearestVehicleVelocity )
  {
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v6, (vec3_t *)&endPos);
    NearestImpactVelocity = ScriptableCl_GetNearestImpactVelocity((const LocalClientNum_t)v8, (const vec3_t *)&endPos, (vec3_t *)obj);
    memset(&endPos, 0, 0xCui64);
    v12 = *(float *)obj;
  }
  pHoldrand = Sys_Milliseconds();
  LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)v8, v6);
  v100 = 2i64;
  if ( LinkType == SCRIPTABLE_LINK_NONE )
  {
    ScriptableInstanceContextSecure::GetOrigin(v11, v6, (vec3_t *)obj);
    AnglesToAxis(&v11->angles, &in2);
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    LODWORD(v91) = FX_PlayOrientedEffect((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &in2);
    CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
    memset(obj, 0, 0xCui64);
    goto LABEL_28;
  }
  if ( LinkType != SCRIPTABLE_LINK_ENTITY )
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT )
    {
      if ( LinkType != SCRIPTABLE_LINK_CLIENTMODEL )
        return;
      if ( particleFX->useTagAngles && particleFX->scrTagCount && (LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v8, v6), v22 = truncate_cast<int,unsigned int>(LinkObject) + 2117, v22 <= 2500) )
      {
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        v23 = FX_PlayBoltedEffect((LocalClientNum_t)v8, &def, time, v22, 0, 0);
        LODWORD(v91) = v23;
        if ( v23 )
          ScriptableCl_MLG_hackPFXTint((const LocalClientNum_t)v8, eventParams, v23, eventIdx);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      }
      else
      {
        ScriptableInstanceContextSecure::GetOrigin(v11, v6, (vec3_t *)obj);
        AnglesToAxis(&v11->angles, &axis);
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        LODWORD(v91) = FX_PlayOrientedEffect((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &axis);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
        memset(obj, 0, 0xCui64);
      }
      goto LABEL_28;
    }
    v24 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v8, v6);
    scrTagCount = particleFX->scrTagCount;
    if ( scrTagCount )
    {
      v26 = BG_irand(0, scrTagCount, &pHoldrand);
      BoneIdx = DynEnt_GetBoneIdx((LocalClientNum_t)v8, v24, particleFX->scrTagNames[v26], v11->def->name);
      if ( BoneIdx != 0xFE )
      {
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        if ( v24 == -1 || !fx_marks_dynents_ext_killswitch->current.enabled )
          v28 = 0;
        else
          v28 = 2;
        v29 = FX_PlayBoltedToDynEntEffect((LocalClientNum_t)v8, &def, time, v24, BoneIdx, v28);
        LODWORD(v91) = v29;
        if ( v29 )
          ScriptableCl_MLG_hackPFXTint((const LocalClientNum_t)v8, eventParams, v29, eventIdx);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      }
LABEL_27:
      v11 = (ScriptableInstanceContextSecure *)v99;
      goto LABEL_28;
    }
    if ( particleFX->useTagAngles )
    {
      AnglesToAxis(&v11->angles, &in2);
      MatrixMultiply(&in1, &in2, &axis);
    }
    else
    {
      MatrixCopy33(&in1, &axis);
    }
    ScriptableInstanceContextSecure::GetOrigin(v11, v6, (vec3_t *)obj);
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    if ( v24 == -1 || !fx_marks_dynents_ext_killswitch->current.enabled )
      v40 = FX_PlayOrientedEffect((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &axis);
    else
      v40 = FX_PlayOrientedEffectWithMarkEntity((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &axis, 2u, v24, 1, 0xFEu, NULL);
    LODWORD(v91) = v40;
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v8, v40);
    if ( particleFX->scrEndTagCount && ParticleSystemPointerUnsafe )
    {
      endPos.v.m128_i32[3] = 0;
      v = endPos.v;
      v.m128_f32[0] = *(float *)obj;
      _XMM3 = v;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+8], 20h
      }
      startPos.v = _XMM3;
      endPos.v = 0i64;
      ParticleSystem::SetBeamPos(ParticleSystemPointerUnsafe, &startPos, &endPos);
    }
    goto LABEL_55;
  }
  if ( particleFX->useTagAngles )
  {
    if ( !particleFX->scrTagCount )
    {
      AnglesToAxis(&v11->angles, &in2);
      MatrixMultiply(&in1, &in2, &axis);
      ScriptableInstanceContextSecure::GetOrigin(v11, v6, (vec3_t *)obj);
      CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
      LODWORD(v91) = FX_PlayOrientedEffect((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &axis);
      CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      memset(obj, 0, 0xCui64);
      goto LABEL_28;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1703, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v47 = particleFX->scrTagNames[BG_irand(0, particleFX->scrTagCount, &pHoldrand)];
    boneTag = v47;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v8);
    endPos.v.m128_u64[0] = (unsigned __int64)Instance;
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1711, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( particleFX->isViewmodel )
    {
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
      v50 = BG_PlayerDualWieldingWeapon(Instance, &LocalClientGlobals->predictedPlayerState, CurrentWeaponForPlayer);
      dobjHandle = ScriptableCL_GetViewmodelDObjHandle(WEAPON_HAND_DEFAULT);
      ClientDObj = Com_GetClientDObj(dobjHandle, (LocalClientNum_t)v8);
      startPos.v.m128_i32[0] = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v8, ClientDObj, v6, v47, particleFX->allowMissingTag);
      if ( !v50 )
      {
LABEL_92:
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        v62 = 0i64;
        v63 = (unsigned int)(v93 + 1);
        while ( 1 )
        {
          v64 = startPos.v.m128_i32[v62 / 4];
          if ( v64 != 255 )
            break;
          if ( particleFX->useRootOnMissingTag )
          {
            v65 = FX_PlayBoltedEffect((LocalClientNum_t)v8, &def, time, *(int *)((char *)&dobjHandle + v62), 0, 0);
LABEL_97:
            *(_DWORD *)((char *)&v91 + v62) = v65;
          }
          v62 += 4i64;
          if ( !--v63 )
          {
            CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
            v6 = scriptableIndexa;
            goto LABEL_27;
          }
        }
        v65 = FX_PlayBoltedEffect((LocalClientNum_t)v8, &def, time, *(int *)((char *)&dobjHandle + v62), v64, 0);
        goto LABEL_97;
      }
      v93 = 1;
      ViewmodelDObjHandle = ScriptableCL_GetViewmodelDObjHandle(WEAPON_HAND_LEFT);
      v52 = Com_GetClientDObj(ViewmodelDObjHandle, (LocalClientNum_t)v8);
      BoneIndexForDobj = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v8, v52, v6, v47, particleFX->allowMissingTag);
    }
    else
    {
      if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v8, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1737, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
        __debugbreak();
      DObj = ScriptableCl_GetDObj((const LocalClientNum_t)v8, v6);
      obj[0] = DObj;
      v55 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v8, v6);
      dobjHandle = v55;
      v56 = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v8, DObj, scriptableIndexa, v47, particleFX->allowMissingTag);
      startPos.v.m128_i32[0] = v56;
      Entity = CG_GetEntity((const LocalClientNum_t)v8, v55);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1745, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      p_nextState = &Entity->nextState;
      if ( v56 == 255 || (Entity->flags & 1) == 0 )
        goto LABEL_92;
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = Entity->nextState.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
        goto LABEL_92;
      number = p_nextState->number;
      if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, p_nextState->number) )
      {
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(spawnFlags) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", spawnFlags, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
              __debugbreak();
          }
          CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
        }
      }
      else
      {
        CharacterInfo = NULL;
      }
      if ( !BG_PlayerOrEntityDualWielding((const BgWeaponMap *)endPos.v.m128_u64[0], NULL, p_nextState, CharacterInfo) )
        goto LABEL_92;
      index[0] = -2;
      if ( !CG_Utils_GetActiveWeaponBoneIndex((LocalClientNum_t)v8, obj[0], NULL, p_nextState, WEAPON_HAND_LEFT, boneTag, index) )
        goto LABEL_92;
      v93 = 1;
      ViewmodelDObjHandle = dobjHandle;
      BoneIndexForDobj = index[0];
    }
    startPos.v.m128_i32[1] = BoneIndexForDobj;
    goto LABEL_92;
  }
  ScriptableInstanceContextSecure::GetOrigin(v11, v6, (vec3_t *)obj);
  v66 = particleFX->scrTagCount;
  if ( v66 )
  {
    v67 = BG_irand(0, v66, &pHoldrand);
    if ( !ScriptableCl_GetBonePosition((const LocalClientNum_t)v8, v6, (const scr_string_t)particleFX->scrTagNames[v67], (vec3_t *)obj, particleFX->allowMissingTag) && !particleFX->useRootOnMissingTag )
    {
      memset(obj, 0, 0xCui64);
      return;
    }
  }
  CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
  LODWORD(v91) = FX_PlayOrientedEffect((LocalClientNum_t)v8, &def, time, (const vec3_t *)obj, &in1);
  v68 = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v8, (ParticleSystemHandle)v91);
  if ( particleFX->scrEndTagCount && v68 )
  {
    endPos.v.m128_i32[3] = 0;
    v70 = endPos.v;
    v70.m128_f32[0] = *(float *)obj;
    _XMM3 = v70;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+8], 20h
    }
    startPos.v = _XMM3;
    endPos.v = 0i64;
    ParticleSystem::SetBeamPos(v68, &startPos, &endPos);
  }
LABEL_55:
  CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
  memset(obj, 0, 0xCui64);
LABEL_28:
  v30 = v8;
  if ( particleFX->oneshotLooping )
  {
    eventStreamBufferOffsetClient = particleFX->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)v11->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1925, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    v32 = &v11->eventStreamBuffer[eventStreamBufferOffsetClient];
    v33 = v32;
    do
    {
      *(_DWORD *)v33 = *(_DWORD *)&v33[(char *)&v91 - (char *)v32];
      v34 = DVARBOOL_scriptable_particle_event_debug;
      if ( !DVARBOOL_scriptable_particle_event_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_particle_event_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.enabled && *(_DWORD *)v32 )
      {
        v35 = 0;
        if ( g_particleSystemsGeneration[4096 * v30 + (*(_DWORD *)v32 & 0xFFF)].__all32 == *(_DWORD *)v32 )
          v35 = *(_DWORD *)v32 & 0xFFF;
        v36 = (v30 << 12) + v35;
        v37 = NULL;
        if ( g_particleSystems[0][v36] >= (ParticleSystem *)0x1000 )
          v37 = g_particleSystems[0][v36];
        if ( v37 && (v38 = ParticleSystem::GetDef(v37)) != NULL )
          name = v38->name;
        else
          name = "Unknown";
        particleSystemDef = particleFX->effectDef.particleSystemDef;
        if ( particleSystemDef )
          v74 = particleSystemDef->name;
        else
          v74 = "Unknown";
        if ( *v99 )
          v75 = **v99;
        else
          v75 = "Unknown";
        LODWORD(markEntnum) = *(_DWORD *)v32;
        LODWORD(boneIndex) = v6;
        Com_sprintf(dest, 0x100ui64, "Scriptable\t%s\t%i\tStart-Particle\t%s\t%i\t%s\n", v75, boneIndex, v74, markEntnum, name);
        Com_PrintMessage(29, dest, 0);
      }
      v33 += 4;
      --v100;
    }
    while ( v100 );
  }
  if ( NearestImpactVelocity )
  {
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    v76 = v30 << 12;
    v77 = &v91;
    v78 = (unsigned int)(v93 + 1);
    do
    {
      v79 = 0;
      if ( g_particleSystemsGeneration[v76 + (*(_DWORD *)v77 & 0xFFF)].__all32 == *(_DWORD *)v77 )
        v79 = *(_DWORD *)v77 & 0xFFF;
      v80 = *((_QWORD *)&g_particleSystems[0][v76] + v79);
      v81 = 0i64;
      if ( v80 >= 0x1000 )
        v81 = v80;
      if ( v81 )
      {
        HIDWORD(obj[1]) = 0;
        v83 = *(_OWORD *)obj;
        *(float *)&v83 = v12;
        _XMM0 = v83;
        __asm
        {
          vinsertps xmm0, xmm0, xmm7, 10h
          vinsertps xmm0, xmm0, xmm8, 20h ; ' '
        }
        *(_OWORD *)obj = _XMM0;
        *(_OWORD *)(v81 + 144) = _XMM0;
        *(_QWORD *)(v81 + 416) |= 0x4000ui64;
      }
      v77 = (__int64 *)((char *)v77 + 4);
      --v78;
    }
    while ( v78 );
    CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
  }
}

/*
==============
ScriptableCl_PlaySound
==============
*/
void ScriptableCl_PlaySound(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventSoundDef *sound)
{
  unsigned int v4; 
  SndAliasList *soundAliasCache; 
  const char *v7; 
  const char *v8; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  SndAliasList *Alias; 
  const char *v12; 
  ScriptableInstanceContextSecure *v13; 
  const char *aliasName; 
  const char *soundAlias; 
  __int64 v16; 
  signed __int64 v17; 
  int v18; 
  int v19; 
  int v21; 
  int v22; 
  SndAliasList *v23; 
  char v24; 
  char looping; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  ScriptableInstanceContextSecure *v29; 
  ScriptableInstanceContextSecure *v30; 
  double v31; 
  __int64 v32; 
  float *p_distMax; 
  scr_string_t scrTagName; 
  __int16 v35; 
  unsigned int LinkObject; 
  unsigned int v37; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  __int32 v39; 
  unsigned int scriptableCollisionPredictive; 
  unsigned int RigidBodyID; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v43; 
  hkMemoryAllocator *v44; 
  CgSoundSystem *SoundSystem; 
  const char *explosionReflClass; 
  const char *v47; 
  char v48; 
  int v49; 
  char v50; 
  unsigned __int64 ScriptableSndEntHandle; 
  vec3_t outOrigin; 
  HavokPhysics_IgnoreBodies v54; 
  __int64 v55; 
  vec3_t out; 
  Physics_RaycastExtendedData axis; 

  v55 = -2i64;
  v4 = scriptableIndex;
  if ( !sound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2750, ASSERT_TYPE_ASSERT, "(sound)", (const char *)&queryFormat, "sound") )
    __debugbreak();
  if ( !MLG_IsCoDCasterEnabled() || !MLG_IsLocalPlayerMLGSpectator(localClientNum) || I_strcmp(sound->soundAlias, "mus_jugg_01") && I_strcmp(sound->soundAlias, "mus_jugg_01_hp") )
  {
    soundAliasCache = sound->soundAliasCache;
    v7 = "<unknown>";
    if ( soundAliasCache )
    {
      aliasName = soundAliasCache->aliasName;
      soundAlias = sound->soundAlias;
      v16 = 0x7FFFFFFFi64;
      if ( !soundAlias && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v17 = soundAlias - aliasName;
      do
      {
        v18 = (unsigned __int8)aliasName[v17];
        v19 = *(unsigned __int8 *)aliasName++;
        if ( !v16-- )
          break;
        if ( v18 != v19 )
        {
          v21 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v21 = v18;
          v18 = v21;
          v22 = v19 + 32;
          if ( (unsigned int)(v19 - 65) > 0x19 )
            v22 = v19;
          if ( v18 != v22 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2775, ASSERT_TYPE_ASSERT, "( !I_stricmp( sound->soundAlias, sound->soundAliasCache->aliasName ) )", "Sound cache name does not match. %s vs %s", sound->soundAlias, sound->soundAliasCache->aliasName) )
              __debugbreak();
            break;
          }
        }
      }
      while ( v18 );
      v23 = sound->soundAliasCache;
      if ( SND_TryFindAlias(sound->soundAlias) != v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2776, ASSERT_TYPE_ASSERT, "( SND_TryFindAlias( sound->soundAlias ) == sound->soundAliasCache )", "Sound cache alias does not match. %s vs %s", sound->soundAlias, v23->aliasName) )
        __debugbreak();
      Alias = sound->soundAliasCache;
      if ( Alias )
      {
        v4 = scriptableIndex;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2780, ASSERT_TYPE_ASSERT, "( ( aliasList != nullptr ) )", "( sound->soundAlias ) = %s", sound->soundAlias) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
          __debugbreak();
        v4 = scriptableIndex;
      }
    }
    else
    {
      v8 = sound->soundAlias;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v4);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      Com_PrintWarning(14, "Scriptable %s is trying to play sound %s which has not been cached. Performance warning.\n", name, v8);
      Alias = SND_TryFindAlias(sound->soundAlias);
      if ( !Alias )
      {
        v12 = sound->soundAlias;
        v13 = ScriptableCl_GetInstanceCommonContext(localClientNum, v4);
        if ( v13->def )
          v7 = v13->def->name;
        Com_PrintWarning(14, "Scriptable %s is trying to play sound %s, but we can't find the alias list\n", v7, v12);
        goto LABEL_114;
      }
    }
    if ( !Alias->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
      __debugbreak();
    v24 = Alias->head->flags & 1;
    looping = sound->looping;
    if ( looping == v24 )
    {
      v30 = ScriptableCl_GetInstanceCommonContext(localClientNum, v4);
      ScriptableInstanceContextSecure::GetOrigin(v30, v4, &outOrigin);
      if ( v24 )
      {
        v31 = SND_DistSqToNearestListener(&outOrigin);
        if ( Alias->count <= 0 )
          goto LABEL_114;
        v32 = 0i64;
        p_distMax = &Alias->head->distMax;
        while ( *(float *)&v31 > (float)(*p_distMax * *p_distMax) )
        {
          ++v32;
          p_distMax += 58;
          if ( v32 >= Alias->count )
            goto LABEL_114;
        }
      }
      scrTagName = sound->scrTagName;
      if ( !scrTagName || ScriptableCl_GetBonePosition(localClientNum, v4, scrTagName, &outOrigin, sound->allowMissingTag) || sound->useRootOnMissingTag )
      {
        if ( sound->worldOffset.v[0] != 0.0 || sound->worldOffset.v[1] != 0.0 || sound->worldOffset.v[2] != 0.0 )
        {
          AnglesToAxis(&v30->angles, (tmat33_t<vec3_t> *)&axis);
          AxisTransformVec3((const tmat33_t<vec3_t> *)&axis, &sound->worldOffset, &out);
          outOrigin.v[0] = outOrigin.v[0] + out.v[0];
          outOrigin.v[1] = outOrigin.v[1] + out.v[1];
          outOrigin.v[2] = outOrigin.v[2] + out.v[2];
        }
        v35 = 2046;
        if ( ScriptableCl_GetLinkTypeEquals(localClientNum, v4, SCRIPTABLE_LINK_ENTITY) )
        {
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, v4);
          v35 = truncate_cast<short,unsigned int>(LinkObject);
        }
        v37 = 0;
        if ( sound->doGroundTrace )
        {
          Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_PlaySound_GroundTrace");
          out.v[0] = outOrigin.v[0];
          out.v[1] = outOrigin.v[1];
          out.v[2] = outOrigin.v[2] - sound->groundTraceLength;
          InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
          CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
          v39 = 3 * localClientNum + 2;
          scriptableCollisionPredictive = InstanceCollisionContext->scriptableCollisionPredictive;
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v54, v35 != 2046, scriptableCollisionPredictive != -1);
          if ( v35 != 2046 )
            HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v54, 0, v35, 1, 1, 0, 1, 1);
          if ( scriptableCollisionPredictive != -1 )
          {
            if ( Physics_GetNumRigidBodys((const Physics_WorldId)v39, scriptableCollisionPredictive) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2877, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, collisionInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( worldId, collisionInstanceId ) == 1") )
              __debugbreak();
            RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v39, scriptableCollisionPredictive, 0);
            if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2879, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            HavokPhysics_IgnoreBodies::SetIgnoreBody(&v54, 0, RigidBodyID);
          }
          axis.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          axis.collisionBuffer = 0.0;
          *(_QWORD *)&axis.phaseSelection = 0x100000000i64;
          *(_WORD *)&axis.collectInsideHits = 256;
          axis.contents = 8391987;
          axis.ignoreBodies = &v54;
          ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v39);
          if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2889, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
            __debugbreak();
          HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
          Physics_Raycast((Physics_WorldId)v39, &outOrigin, &out, &axis, ClosestResult);
          if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
            v37 = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
          CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
          Sys_ProfEndNamedEvent();
          v43 = hkMemHeapAllocator();
          v54.m_ignoreBodies.m_size = 0;
          if ( v54.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v43, v54.m_ignoreBodies.m_data, 4, v54.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v54.m_ignoreBodies.m_data = NULL;
          v54.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v44 = hkMemHeapAllocator();
          v54.m_ignoreEntities.m_size = 0;
          if ( v54.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v44, v54.m_ignoreEntities.m_data, 8, v54.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          v54.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
        }
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2909, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
          __debugbreak();
        explosionReflClass = sound->explosionReflClass;
        if ( explosionReflClass && *explosionReflClass && !sound->looping )
        {
          if ( v35 == 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2914, ASSERT_TYPE_ASSERT, "(sndEntityNum != ENTITYNUM_WORLD)", (const char *)&queryFormat, "sndEntityNum != ENTITYNUM_WORLD") )
            __debugbreak();
          v47 = sound->explosionReflClass;
          if ( v47 && (v48 = *v47) != 0 )
          {
            v49 = 5381;
            do
            {
              v50 = v48 | 0x20;
              if ( (unsigned int)(v48 - 65) >= 0x1A )
                v50 = v48;
              v49 = 65599 * v49 + v50;
              v48 = *++v47;
            }
            while ( *v47 );
            if ( !v49 )
              v49 = 1;
          }
          else
          {
            v49 = 0;
          }
          SoundSystem->PlayExplosionSoundAsync(SoundSystem, v35, &outOrigin, Alias, v37, v49);
        }
        else if ( v35 == 2046 )
        {
          ScriptableSndEntHandle = CG_GenerateScriptableSndEntHandle(localClientNum, scriptableIndex);
          ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, unsigned __int64, SndAliasList *, unsigned int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundOnSndEntAsync)(SoundSystem, 2046i64, &outOrigin, ScriptableSndEntHandle, Alias, v37, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
        }
        else
        {
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, unsigned int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)v35, &outOrigin, Alias, v37, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
        }
      }
    }
    else
    {
      v26 = "Fire-and-Forget";
      v27 = "Fire-and-Forget";
      if ( looping )
        v27 = "Looping";
      v28 = sound->soundAlias;
      v29 = ScriptableCl_GetInstanceCommonContext(localClientNum, v4);
      if ( v29->def )
        v7 = v29->def->name;
      if ( v24 )
        v26 = "Looping";
      Com_PrintError(29, "Scriptable %s thinks sound %s is %s and it is %s\n", v7, v28, v27, v26);
      ScriptableCl_EnterError();
    }
  }
LABEL_114:
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_RunStateEventAnimation
==============
*/
void ScriptableCl_RunStateEventAnimation(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventAnimationDef *animation)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v12; 
  Scriptable_EventAnimation_Data_MP *v13; 
  ScriptableLinkType LinkType; 
  ScriptableLinkType v15; 
  unsigned int LinkObject; 
  const DObj *DObj; 
  DObj *v18; 
  float goalTime; 
  XAnimTree *Tree; 
  XAnim_s *v21; 
  XAnimOwner v22; 
  centity_t *Entity; 
  XAnimTree *v24; 
  unsigned int index; 
  Scriptable_EventAnimation_Data_MP *Data; 
  float outRate; 
  float outStartTime[3]; 

  ScriptableBg_ChooseAnimationStartTimeAndRate(animation, holdrand, outStartTime, &outRate);
  outStartTime[1] = outRate;
  if ( (LODWORD(outRate) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 738, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 747, ASSERT_TYPE_ASSERT, "(ps != nullptr)", (const char *)&queryFormat, "ps != nullptr") )
      __debugbreak();
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    v12 = InstanceCommonContext;
    if ( onTime || animation->stateful )
    {
      if ( !InstanceCommonContext->def->animationTreeDef[0] )
      {
        Com_PrintWarning(14, "WARNING: Scriptable %s cannot play animation %s as it's missing an anim tree\n", InstanceCommonContext->def->name, animation->animation->name);
        return;
      }
      LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
      v15 = LinkType;
      if ( LinkType )
      {
        if ( LinkType == SCRIPTABLE_LINK_CLIENTMODEL )
        {
          if ( !v12->data.compositeModel )
          {
            Com_PrintWarning(14, "WARNING: Scriptable %s cannot play animation %s as it's missing a model\n", v12->def->name, animation->animation->name);
            return;
          }
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
          if ( !CG_ClientModel_IsInitialized(localClientNum, LinkObject) )
          {
            ScriptableCl_UpdateModel(localClientNum, scriptableIndex, 0);
            if ( !CG_ClientModel_IsInitialized(localClientNum, LinkObject) )
            {
              Com_PrintError(29, "Scriptable %s is trying to play animation %s but even after attempting to force a model update the clientmodel remains uninitialized\n", v12->def->name, animation->animation->name);
              ScriptableCl_EnterError();
            }
          }
        }
        if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 807, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
        v18 = (DObj *)DObj;
        if ( DObj )
        {
          goalTime = animation->blendTime;
          Tree = DObjGetTree(DObj);
          if ( Tree )
            goto LABEL_44;
          if ( v15 != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 824, ASSERT_TYPE_ASSERT, "(linkType == SCRIPTABLE_LINK_ENTITY)", (const char *)&queryFormat, "linkType == SCRIPTABLE_LINK_ENTITY") )
            __debugbreak();
          v21 = v12->def->animationTreeDef[0];
          if ( v21 && v21->initialized )
          {
            Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
            if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 829, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
              __debugbreak();
            LOBYTE(v22) = 1;
            Tree = Com_XAnimCreateSmallTree(v21, v22);
            DObjSetTree(v18, Tree);
            v24 = Entity->tree;
            if ( Entity->nextState.eType == ET_SCRIPTMOVER )
            {
              if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 842, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                __debugbreak();
            }
            else
            {
              if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 837, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                __debugbreak();
              Entity->tree = Tree;
            }
            if ( Tree )
            {
LABEL_44:
              index = animation->animationIndex[0].index;
              if ( animation->overrideAnimation )
                XAnimSetCompleteGoalWeightKnob(v18, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, goalTime, outRate, (scr_string_t)0, 4u, 0, LINEAR);
              else
                XAnimSetCompleteGoalWeight(v18, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, goalTime, outRate, (scr_string_t)0, 4u, 0, LINEAR, NULL);
              if ( animation->startTimeNormalized )
                XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, outStartTime[0]);
              else
                XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, outStartTime[0]);
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END|0x80) )
              {
                Data = ScriptableCl_StateEventAnimationGetData(v12, animation);
                Data->serverTime = ScriptableCl_GetFrameServerTime(localClientNum) - p_predictedPlayerState->deltaTime;
                Data->startTime = outStartTime[0];
                Data->playBackRate = outRate;
              }
            }
          }
        }
        else
        {
          Com_PrintError(29, "Scriptable %s is trying to play animation %s but doesn't have a dobj\n", v12->def->name, animation->animation->name);
          ScriptableCl_EnterError();
        }
      }
    }
    else if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END|0x80) )
    {
      v13 = ScriptableCl_StateEventAnimationGetData(v12, animation);
      v13->serverTime = ScriptableCl_GetFrameServerTime(localClientNum) - p_predictedPlayerState->deltaTime;
      v13->startTime = animation->startTimeMin;
      v13->playBackRate = animation->playbackRateMin;
    }
  }
}

/*
==============
ScriptableCl_RunStateEventApplyAngularForce
==============
*/
void ScriptableCl_RunStateEventApplyAngularForce(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventApplyAngularForceDef *applyAngularForce)
{
  __int32 v8; 
  unsigned int PhysInstanceId; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v21; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  __int64 v27; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v30; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 

  v30 = -2i64;
  v8 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, eventParams->scriptableIndex);
  if ( PhysInstanceId == -1 )
  {
    if ( applyAngularForce->randomRange )
    {
      BG_flrand(applyAngularForce->forceVector.v[0], applyAngularForce->forceVector2.v[0], holdrand);
      BG_flrand(applyAngularForce->forceVector.v[1], applyAngularForce->forceVector2.v[1], holdrand);
      BG_flrand(applyAngularForce->forceVector.v[2], applyAngularForce->forceVector2.v[2], holdrand);
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    if ( !Physics_IsInstanceInWorld((Physics_WorldId)v8, PhysInstanceId, 0) )
      Physics_AddPendingBodies((Physics_WorldId)v8);
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    angles = InstanceCommonContext->angles;
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    if ( applyAngularForce->randomRange )
    {
      v12 = LODWORD(applyAngularForce->forceVector.v[0]);
      *(double *)&v12 = BG_flrand(*(float *)&v12, applyAngularForce->forceVector2.v[0], holdrand);
      v13 = v12;
      v14 = LODWORD(applyAngularForce->forceVector.v[1]);
      *(double *)&v14 = BG_flrand(*(float *)&v14, applyAngularForce->forceVector2.v[1], holdrand);
      v15 = v14;
      *(double *)&v14 = BG_flrand(applyAngularForce->forceVector.v[2], applyAngularForce->forceVector2.v[2], holdrand);
      v16 = *(float *)&v14;
    }
    else
    {
      v13 = LODWORD(applyAngularForce->forceVector.v[0]);
      v15 = LODWORD(applyAngularForce->forceVector.v[1]);
      v16 = applyAngularForce->forceVector.v[2];
    }
    if ( applyAngularForce->worldSpace )
    {
      v17 = *(float *)&v13;
      v18 = v15;
    }
    else
    {
      v17 = (float)((float)(*(float *)&v13 * axis.m[0].v[0]) + (float)(*(float *)&v15 * axis.m[1].v[0])) + (float)(v16 * axis.m[2].v[0]);
      v19 = v13;
      *(float *)&v19 = (float)((float)(*(float *)&v13 * axis.m[0].v[1]) + (float)(*(float *)&v15 * axis.m[1].v[1])) + (float)(v16 * axis.m[2].v[1]);
      v18 = v19;
      v16 = (float)((float)(*(float *)&v13 * axis.m[0].v[2]) + (float)(*(float *)&v15 * axis.m[1].v[2])) + (float)(v16 * axis.m[2].v[2]);
    }
    v21 = v18;
    *(float *)&v21 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(v17 * v17)) + (float)(v16 * v16));
    _XMM6 = v21;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm1, xmm6, xmm2, xmm0
    }
    result.m_serialAndIndex = _XMM1;
    torqueVector.v[0] = (float)(1.0 / *(float *)&_XMM1) * v17;
    torqueVector.v[1] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM1);
    torqueVector.v[2] = (float)(1.0 / *(float *)&_XMM1) * v16;
    if ( *(float *)&v21 != 0.0 )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, PhysInstanceId);
      for ( i = 0; i < NumRigidBodys; ++i )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v27) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v27) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v27) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, PhysInstanceId, i)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4363, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v8, m_serialAndIndex) )
          Physics_ApplyAngularImpulse((Physics_WorldId)v8, m_serialAndIndex, &torqueVector, *(float *)&v21);
      }
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_RunStateEventApplyConstantForce
==============
*/
void ScriptableCl_RunStateEventApplyConstantForce(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventApplyConstantForceDef *applyConstantForce)
{
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v22; 
  __int64 v23; 
  unsigned __int64 eventStreamBufferSize; 
  unsigned __int8 *eventStreamBuffer; 

  v8 = 0.0;
  if ( !applyConstantForce->randomRange )
  {
    v10 = 0.0;
    goto LABEL_9;
  }
  v9 = BG_flrand(0.0, 1.0, holdrand);
  v10 = *(float *)&v9;
  if ( !applyConstantForce->randomRange )
  {
LABEL_9:
    v12 = 0.0;
    goto LABEL_10;
  }
  v11 = BG_flrand(0.0, 1.0, holdrand);
  v12 = *(float *)&v11;
  if ( !applyConstantForce->randomRange )
  {
LABEL_10:
    v14 = 0.0;
    goto LABEL_11;
  }
  v13 = BG_flrand(0.0, 1.0, holdrand);
  v14 = *(float *)&v13;
  if ( !applyConstantForce->randomRange )
  {
LABEL_11:
    v16 = 0.0;
    goto LABEL_12;
  }
  v15 = BG_flrand(0.0, 1.0, holdrand);
  v16 = *(float *)&v15;
  if ( !applyConstantForce->randomRange )
  {
LABEL_12:
    v18 = 0.0;
    goto LABEL_13;
  }
  v17 = BG_flrand(0.0, 1.0, holdrand);
  v18 = *(float *)&v17;
  if ( applyConstantForce->randomRange )
  {
    v19 = BG_flrand(0.0, 1.0, holdrand);
    v8 = *(float *)&v19;
  }
LABEL_13:
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
  eventStreamBufferOffsetClient = applyConstantForce->eventStreamBufferOffsetClient;
  v22 = InstanceCommonContext;
  v23 = eventStreamBufferOffsetClient;
  eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
  if ( eventStreamBufferOffsetClient + 24 > eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4395, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 6 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 24, eventStreamBufferSize) )
    __debugbreak();
  eventStreamBuffer = v22->eventStreamBuffer;
  *(float *)&eventStreamBuffer[v23] = v10;
  *(float *)&eventStreamBuffer[v23 + 4] = v12;
  *(float *)&eventStreamBuffer[v23 + 8] = v14;
  *(float *)&eventStreamBuffer[v23 + 12] = v16;
  *(float *)&eventStreamBuffer[v23 + 16] = v18;
  *(float *)&eventStreamBuffer[v23 + 20] = v8;
}

/*
==============
ScriptableCl_RunStateEventApplyForce
==============
*/
void ScriptableCl_RunStateEventApplyForce(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventApplyForceDef *applyForce)
{
  __int32 v8; 
  unsigned int PhysInstanceId; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v27; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  __int64 v33; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v36; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 

  v36 = -2i64;
  v8 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, eventParams->scriptableIndex);
  if ( PhysInstanceId == -1 )
  {
    if ( applyForce->randomRange )
    {
      BG_flrand(applyForce->forcePos.v[0], applyForce->forcePos2.v[0], holdrand);
      BG_flrand(applyForce->forcePos.v[1], applyForce->forcePos2.v[1], holdrand);
      BG_flrand(applyForce->forcePos.v[2], applyForce->forcePos2.v[2], holdrand);
      BG_flrand(applyForce->forceVector.v[0], applyForce->forceVector2.v[0], holdrand);
      BG_flrand(applyForce->forceVector.v[1], applyForce->forceVector2.v[1], holdrand);
      BG_flrand(applyForce->forceVector.v[2], applyForce->forceVector2.v[2], holdrand);
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    if ( !Physics_IsInstanceInWorld((Physics_WorldId)v8, PhysInstanceId, 0) )
      Physics_AddPendingBodies((Physics_WorldId)v8);
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    angles = InstanceCommonContext->angles;
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    if ( applyForce->randomRange )
    {
      v12 = BG_flrand(applyForce->forcePos.v[0], applyForce->forcePos2.v[0], holdrand);
      v13 = *(float *)&v12;
      v14 = BG_flrand(applyForce->forcePos.v[1], applyForce->forcePos2.v[1], holdrand);
      v15 = *(float *)&v14;
      v16 = BG_flrand(applyForce->forcePos.v[2], applyForce->forcePos2.v[2], holdrand);
      v17 = *(float *)&v16;
      v18 = LODWORD(applyForce->forceVector.v[0]);
      *(double *)&v18 = BG_flrand(*(float *)&v18, applyForce->forceVector2.v[0], holdrand);
      v19 = v18;
      v20 = LODWORD(applyForce->forceVector.v[1]);
      *(double *)&v20 = BG_flrand(*(float *)&v20, applyForce->forceVector2.v[1], holdrand);
      v21 = v20;
      *(double *)&v20 = BG_flrand(applyForce->forceVector.v[2], applyForce->forceVector2.v[2], holdrand);
      v22 = *(float *)&v20;
    }
    else
    {
      v13 = applyForce->forcePos.v[0];
      v15 = applyForce->forcePos.v[1];
      v17 = applyForce->forcePos.v[2];
      v19 = LODWORD(applyForce->forceVector.v[0]);
      v21 = LODWORD(applyForce->forceVector.v[1]);
      v22 = applyForce->forceVector.v[2];
    }
    position.v[0] = (float)((float)((float)(v15 * axis.m[1].v[0]) + (float)(axis.m[0].v[0] * v13)) + (float)(v17 * axis.m[2].v[0])) + outOrigin.v[0];
    position.v[1] = (float)((float)((float)(v15 * axis.m[1].v[1]) + (float)(axis.m[0].v[1] * v13)) + (float)(v17 * axis.m[2].v[1])) + outOrigin.v[1];
    position.v[2] = (float)((float)((float)(v15 * axis.m[1].v[2]) + (float)(axis.m[0].v[2] * v13)) + (float)(v17 * axis.m[2].v[2])) + outOrigin.v[2];
    if ( applyForce->worldSpace )
    {
      v23 = *(float *)&v21;
      v24 = v19;
    }
    else
    {
      v23 = (float)((float)(*(float *)&v21 * axis.m[1].v[1]) + (float)(axis.m[0].v[1] * *(float *)&v19)) + (float)(v22 * axis.m[2].v[1]);
      v25 = v21;
      *(float *)&v25 = (float)((float)(*(float *)&v21 * axis.m[1].v[0]) + (float)(axis.m[0].v[0] * *(float *)&v19)) + (float)(v22 * axis.m[2].v[0]);
      v24 = v25;
      v22 = (float)((float)(*(float *)&v21 * axis.m[1].v[2]) + (float)(axis.m[0].v[2] * *(float *)&v19)) + (float)(v22 * axis.m[2].v[2]);
    }
    v27 = v24;
    *(float *)&v27 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v23 * v23)) + (float)(v22 * v22));
    _XMM6 = v27;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm1, xmm6, xmm2, xmm0
    }
    result.m_serialAndIndex = _XMM1;
    normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v24;
    normalizedDirection.v[1] = v23 * (float)(1.0 / *(float *)&_XMM1);
    normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM1) * v22;
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, PhysInstanceId);
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > 7 )
      {
        LODWORD(v33) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v33) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
      {
        LODWORD(v33) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, PhysInstanceId, i)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v8, m_serialAndIndex) )
        Physics_ApplyImpulse((Physics_WorldId)v8, m_serialAndIndex, &position, &normalizedDirection, *(float *)&v27);
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_RunStateEventCollision
==============
*/
void ScriptableCl_RunStateEventCollision(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventCollisionDef *collision)
{
  unsigned int scriptableIndex; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned __int8 collisionActiveFlags; 
  XModel *model; 
  char v10; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const char *collmapName; 
  int v14; 
  int clipmapCModelIndex; 
  ScriptableInstanceContextSecure *v16; 
  const char *v17; 
  ScriptableInstanceContextSecure *v18; 
  const char *v19; 
  ScriptableInstanceContextSecure *v20; 
  const char *v21; 
  ScriptableInstanceContextSecure *v22; 
  const char *v23; 
  char v24; 
  unsigned __int8 v25; 
  XModel *v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 

  scriptableIndex = eventParams->scriptableIndex;
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  if ( !ScriptableCl_HasCollisionSupport(localClientNum, scriptableIndex) )
  {
    collisionActiveFlags = InstanceCollisionContext->collisionActiveFlags;
    if ( collisionActiveFlags )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 625, ASSERT_TYPE_ASSERT, "( r_collisionContext.collisionActiveFlags ) == ( 0 )", "%s == %s\n\t%u, %u", "r_collisionContext.collisionActiveFlags", "0", collisionActiveFlags, 0i64) )
        __debugbreak();
    }
    return;
  }
  if ( g_phyicsMapentsSwapped )
    Com_PrintWarning(20, "Mapents has changed - Scriptable collision events disabled on the client to prevent shape indexing errors\n");
  model = collision->model;
  v10 = 0;
  if ( model )
  {
    if ( model->physicsAsset )
      goto LABEL_39;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<unknown>";
    Com_PrintWarning(29, "Client Scriptable %s is using a collision model with no asset\n", name);
    goto LABEL_38;
  }
  collmapName = collision->collmapName;
  if ( !collmapName || !*collmapName || (v14 = collision->clipmapCModelIndex, (unsigned int)(v14 + 2) <= 1) || !CM_BrushModelIsValid(v14) || !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
  {
    clipmapCModelIndex = collision->clipmapCModelIndex;
    if ( clipmapCModelIndex == -1 )
    {
      v16 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v16->def )
        v17 = v16->def->name;
      else
        v17 = "<unknown>";
      Com_PrintWarning(29, "Client Scriptable %s is using a collision event that has an invalid index - you may need to recompile the map - check linker output for more information\n", v17);
    }
    else if ( clipmapCModelIndex == -2 )
    {
      v18 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v18->def )
        v19 = v18->def->name;
      else
        v19 = "<unknown>";
      Com_PrintWarning(29, "Client Scriptable %s is using a collision event that has been disabled, probably because you are using mychanges\n", v19);
    }
    else if ( CM_BrushModelIsValid(clipmapCModelIndex) )
    {
      if ( !CM_GetBrushModel(collision->clipmapCModelIndex)->physicsAsset )
      {
        v22 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
        if ( v22->def )
          v23 = v22->def->name;
        else
          v23 = "<unknown>";
        Com_PrintWarning(29, "Client Scriptable %s is using a collision event with a brush that has no collision\n", v23);
      }
    }
    else
    {
      v20 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v20->def )
        v21 = v20->def->name;
      else
        v21 = "<unknown>";
      Com_PrintWarning(29, "Client Scriptable %s is using a collision event with an invalid brush index\n", v21);
    }
LABEL_38:
    v10 = 1;
  }
LABEL_39:
  v24 = 0;
  if ( v10 )
    goto LABEL_50;
  v25 = InstanceCollisionContext->collisionActiveFlags;
  if ( !v25 || (v25 & 0x20) != 0 )
  {
    v24 = 1;
LABEL_50:
    ScriptableCl_DestroyCollision(localClientNum, scriptableIndex);
    InstanceCollisionContext->collisionActiveFlags = 0;
    if ( v24 )
      ScriptableCl_CreateCollision(localClientNum, scriptableIndex, collision, collision->clipmapCModelIndex, collision->neverMoves, collision->canPush, collision->canTouch, collision->model);
    return;
  }
  v26 = collision->model;
  if ( v26 )
  {
    v27 = v26 != InstanceCollisionContext->model;
    v28 = InstanceCollisionContext->clipmapCModelIndex == 0;
  }
  else
  {
    v27 = collision->clipmapCModelIndex != InstanceCollisionContext->clipmapCModelIndex;
    v28 = InstanceCollisionContext->model == NULL;
  }
  v29 = !v28 || v27;
  v30 = collision->canPush != InstanceCollisionContext->canPush || collision->canTouch != InstanceCollisionContext->canTouch;
  if ( collision->neverMoves != InstanceCollisionContext->neverMoves )
    v30 = 1;
  v24 = v30 || v29;
  if ( v24 )
    goto LABEL_50;
}

/*
==============
ScriptableCl_RunStateEventDisablePhysicsSubShape
==============
*/
void ScriptableCl_RunStateEventDisablePhysicsSubShape(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventDisablePhysicsSubShapeDef *disablePhysicsSubShape)
{
  unsigned int scriptableIndex; 
  int LinkObject; 
  __int32 v9; 
  int v10; 
  ScriptableLinkType LinkType; 
  unsigned int PhysicsInstance; 
  CG_PhysicsObject *v13; 
  const char *mutableShapeName; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  int v17; 
  const char *v18; 
  ScriptableInstanceContextSecure *v19; 
  const char *v20; 
  __int32 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int RigidBodyID; 
  unsigned int v25; 
  int v26; 
  const char *v27; 
  ScriptableInstanceContextSecure *v28; 
  const char *v29; 
  char *fmt; 
  unsigned __int16 shapeInstanceId; 
  int bodyIdx; 

  scriptableIndex = eventParams->scriptableIndex;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  v9 = 3 * localClientNum;
  v10 = -1;
  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    v13 = CG_PhysicsObject_Get(LinkObject, localClientNum);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1034, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v10 = v13->physicsInstances[v9 + 2];
    PhysicsInstance = v13->physicsInstances[v9 + 3];
  }
  else
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT )
      return;
    PhysicsInstance = DynEnt_GetPhysicsInstance(LinkObject, DYNENT_BASIS_MODEL, localClientNum);
  }
  if ( PhysicsInstance == -1 )
  {
    if ( v10 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1054, ASSERT_TYPE_ASSERT, "(predictiveInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "predictiveInstance == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( !disablePhysicsSubShape->allowMissingShape )
    {
      mutableShapeName = disablePhysicsSubShape->mutableShapeName;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      Com_PrintError(29, "Scriptable %s tried to disable sub-shape %s and there was no physics instance\n", name, mutableShapeName);
      ScriptableCl_EnterError();
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    Physics_DecodeSubShapeKey((Physics_WorldId)(v9 + 3), PhysicsInstance, disablePhysicsSubShape->mutableShapeHash, &bodyIdx, &shapeInstanceId);
    v17 = bodyIdx;
    if ( bodyIdx >= 0 )
    {
      if ( v10 == -1 )
      {
        v21 = 3 * localClientNum + 2;
        v22 = 0xFFFFFF;
      }
      else
      {
        v23 = v10;
        v21 = 3 * localClientNum + 2;
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v21, v23, bodyIdx);
        v17 = bodyIdx;
        v22 = RigidBodyID;
      }
      v25 = Physics_GetRigidBodyID((const Physics_WorldId)(v9 + 3), PhysicsInstance, v17);
      if ( (v25 & 0xFFFFFF) == 0xFFFFFF )
      {
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        if ( !disablePhysicsSubShape->allowMissingShape )
        {
          v26 = bodyIdx;
          v27 = disablePhysicsSubShape->mutableShapeName;
          v28 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( v28->def )
            v29 = v28->def->name;
          else
            v29 = "<unknown>";
          LODWORD(fmt) = v26;
          Com_PrintError(29, "Scriptable %s tried to disable sub-shape %s and the decoded rigid body idx %i could not be found\n", v29, v27, fmt);
          ScriptableCl_EnterError();
        }
      }
      else
      {
        if ( (v22 & 0xFFFFFF) != 0xFFFFFF )
          Physics_EnableShapeInstance((Physics_WorldId)v21, v22, shapeInstanceId, 0);
        Physics_EnableShapeInstance((Physics_WorldId)(v9 + 3), v25, shapeInstanceId, 0);
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
      }
    }
    else
    {
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
      if ( !disablePhysicsSubShape->allowMissingShape )
      {
        v18 = disablePhysicsSubShape->mutableShapeName;
        v19 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
        if ( v19->def )
          v20 = v19->def->name;
        else
          v20 = "<unknown>";
        Com_PrintError(29, "Scriptable %s tried to disable sub-shape %s and the name could not be decoded\n", v20, v18);
        ScriptableCl_EnterError();
      }
    }
  }
}

/*
==============
ScriptableCl_RunStateEventHideShowBone
==============
*/
void ScriptableCl_RunStateEventHideShowBone(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventHideShowBoneDef *hideShowBone)
{
  unsigned int scriptableIndex; 
  unsigned int LinkObject; 
  int IsReservedScriptableEntity; 
  const ScriptableInstanceContextSecure *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  const XModel *v12; 
  const char *v13; 
  ScriptableInstanceContextSecure *v14; 
  const char *v15; 
  DObj *DObj; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  ScriptableInstanceContextSecure *v20; 
  const char *v21; 
  unsigned __int8 v22; 
  const XModel *v23; 
  const char *v24; 
  ScriptableInstanceContextSecure *v25; 
  const char *v26; 
  const char *v27; 
  ScriptableInstanceContextSecure *v28; 
  const XModel *v29; 
  const char *v30; 
  const char *v31; 
  ScriptableInstanceContextSecure *v32; 
  unsigned int v33; 
  scr_string_t scrTagName; 
  const XModel *v35; 
  int numBones; 
  const char *Name; 
  const char *v38; 
  ScriptableInstanceContextSecure *v39; 
  unsigned __int8 v40; 
  unsigned __int8 v41; 
  __int64 v42; 
  unsigned __int8 childIndex; 
  unsigned __int8 inOutIndex[7]; 
  int modelIndex[2]; 
  const char *tagName; 
  DObjPartBits partBits; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    scriptableIndex = eventParams->scriptableIndex;
    if ( ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      IsReservedScriptableEntity = ScriptableCl_IsReservedScriptableEntity(localClientNum, LinkObject);
      childIndex = IsReservedScriptableEntity == 0;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
      v12 = ScriptableModel;
      if ( IsReservedScriptableEntity || ScriptableModel )
      {
        if ( !IsReservedScriptableEntity && !ScriptableModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 917, ASSERT_TYPE_ASSERT, "(!checkModel || xmodel)", (const char *)&queryFormat, "!checkModel || xmodel") )
          __debugbreak();
        if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 919, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
        if ( !DObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 921, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
          __debugbreak();
        v17 = "<unknown>";
        v18 = "UNKNOWN";
        if ( !DObj->numModels )
        {
          v19 = v12 ? v12->name : "UNKNOWN";
          *(_QWORD *)modelIndex = hideShowBone->tagName;
          v20 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          v21 = v20->def ? v20->def->name : "<unknown>";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 922, ASSERT_TYPE_ASSERT, "(dobj->numModels >= 1)", "%s\n\tScriptable %s tried to find bone %s in model %s but the dobj doesn't have a model", "dobj->numModels >= 1", v21, *(const char **)modelIndex, v19) )
            __debugbreak();
        }
        v22 = childIndex;
        if ( childIndex )
        {
          v23 = *DObj->models;
          if ( v23 != v12 )
          {
            *(_QWORD *)modelIndex = v23 ? XModelGetName(v23) : "UNKNOWN";
            v24 = v12 ? XModelGetName(v12) : "UNKNOWN";
            tagName = hideShowBone->tagName;
            v25 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
            v26 = v25->def ? v25->def->name : "<unknown>";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 923, ASSERT_TYPE_ASSERT, "(!checkModel || dobj->models[0] == xmodel)", "%s\n\tScriptable %s tried to find bone %s in model %s but the dobj has %s", "!checkModel || dobj->models[0] == xmodel", v26, tagName, v24, *(const char **)modelIndex) )
              __debugbreak();
          }
          v22 = childIndex;
        }
        if ( DObj->numModels )
        {
          if ( !v22 || (v29 = *DObj->models, v29 == v12) )
          {
            scrTagName = hideShowBone->scrTagName;
            inOutIndex[0] = -2;
            if ( DObjGetBoneIndexInternal_24(DObj, scrTagName, inOutIndex, modelIndex) )
            {
              DObjGetHidePartBits(DObj, &partBits);
              if ( hideShowBone->hide )
              {
                bitarray_base<bitarray<256>>::setBit(&partBits, inOutIndex[0]);
                if ( hideShowBone->hideShowChildren )
                {
                  v40 = inOutIndex[0];
                  childIndex = -2;
                  if ( DObjGetNextChildBoneIndex(DObj, inOutIndex[0], &childIndex) )
                  {
                    do
                      bitarray_base<bitarray<256>>::setBit(&partBits, childIndex);
                    while ( DObjGetNextChildBoneIndex(DObj, v40, &childIndex) );
                  }
                }
              }
              else
              {
                bitarray_base<bitarray<256>>::resetBit(&partBits, inOutIndex[0]);
                if ( hideShowBone->hideShowChildren )
                {
                  v41 = inOutIndex[0];
                  childIndex = -2;
                  if ( DObjGetNextChildBoneIndex(DObj, inOutIndex[0], &childIndex) )
                  {
                    do
                      bitarray_base<bitarray<256>>::resetBit(&partBits, childIndex);
                    while ( DObjGetNextChildBoneIndex(DObj, v41, &childIndex) );
                  }
                }
              }
              DObjSetHidePartBits(DObj, &partBits);
            }
            else if ( !hideShowBone->allowMissingTag )
            {
              v35 = *DObj->models;
              if ( v35 )
                numBones = v35->numBones;
              else
                numBones = 0;
              if ( v35 )
                Name = XModelGetName(v35);
              else
                Name = "UNKNOWN";
              if ( v12 )
                v18 = XModelGetName(v12);
              v38 = hideShowBone->tagName;
              v39 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
              if ( v39->def )
                v17 = v39->def->name;
              LODWORD(v42) = numBones;
              Com_PrintError(29, "Scriptable %s tried to find bone %s in model %s %s with %i bones and failed\n", v17, v38, v18, Name, v42);
              ScriptableCl_EnterError();
            }
          }
          else if ( !hideShowBone->allowMissingTag )
          {
            if ( v29 )
              v30 = XModelGetName(v29);
            else
              v30 = "UNKNOWN";
            if ( v12 )
              v18 = XModelGetName(v12);
            v31 = hideShowBone->tagName;
            v32 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
            if ( v32->def )
              v17 = v32->def->name;
            v33 = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
            Com_PrintError(29, "Scriptable %i %s tried to find bone %s in model %s but the dobj has %s\n", v33, v17, v31, v18, v30);
            ScriptableCl_EnterError();
          }
        }
        else if ( !hideShowBone->allowMissingTag )
        {
          if ( v12 )
            v18 = XModelGetName(v12);
          v27 = hideShowBone->tagName;
          v28 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          if ( v28->def )
            v17 = v28->def->name;
          Com_PrintError(29, "Scriptable %s tried to find bone %s in model %s but the dobj doesn't have a model\n", v17, v27, v18);
          ScriptableCl_EnterError();
        }
      }
      else
      {
        v13 = hideShowBone->tagName;
        v14 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
        if ( v14->def )
          v15 = v14->def->name;
        else
          v15 = "<unknown>";
        Com_PrintError(29, "Scriptable %s tried to find bone %s but doesn't have a model\n", v15, v13);
        ScriptableCl_EnterError();
      }
    }
  }
}

/*
==============
ScriptableCl_RunStateEventLight
==============
*/
void ScriptableCl_RunStateEventLight(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventLightDef *light)
{
  bool MapInstance; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  cg_t *LocalClientGlobals; 
  float transitionMax; 
  float transitionMin; 
  float v15; 
  double v16; 
  float v17; 
  float radiusMax; 
  float radiusMin; 
  double v20; 
  float v21; 
  float intensityScaleMax; 
  float intensityScaleMin; 
  double v24; 
  GfxWorld *world; 
  ScriptableInstance *v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  GfxLight *v30; 
  const ComPrimaryLight *v31; 
  __int64 currentTime; 
  __int64 transitionRand; 
  ScriptableInstance *outInstance; 
  Scriptable_EventLight_Data *data; 
  int time; 

  MapInstance = ScriptableCommon_GetMapInstance(eventParams->scriptableIndex, (const ScriptableInstance **)&outInstance);
  scriptableIndex = eventParams->scriptableIndex;
  if ( MapInstance )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = light->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 36 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3323, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    data = (Scriptable_EventLight_Data *)&InstanceCommonContext->eventStreamBuffer[eventStreamBufferOffsetClient];
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    transitionMax = light->transitionMax;
    transitionMin = light->transitionMin;
    time = LocalClientGlobals->time;
    v15 = 0.0;
    if ( transitionMax <= transitionMin )
    {
      v17 = 0.0;
    }
    else
    {
      v16 = BG_flrand(transitionMin, transitionMax, holdrand);
      v17 = *(float *)&v16;
    }
    radiusMax = light->radiusMax;
    radiusMin = light->radiusMin;
    if ( radiusMax <= radiusMin )
    {
      v21 = 0.0;
    }
    else
    {
      v20 = BG_flrand(radiusMin, radiusMax, holdrand);
      v21 = *(float *)&v20;
    }
    intensityScaleMax = light->intensityScaleMax;
    intensityScaleMin = light->intensityScaleMin;
    if ( intensityScaleMax > intensityScaleMin )
    {
      v24 = BG_flrand(intensityScaleMin, intensityScaleMax, holdrand);
      v15 = *(float *)&v24;
    }
    world = rgp.world;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3366, ASSERT_TYPE_ASSERT, "(curGfxWorld)", (const char *)&queryFormat, "curGfxWorld") )
      __debugbreak();
    v26 = outInstance;
    v27 = 0;
    v28 = 56i64;
    do
    {
      v29 = *(unsigned __int16 *)((char *)&v26->initialDef + v28);
      if ( !*(_WORD *)((char *)&v26->initialDef + v28) )
        break;
      if ( (unsigned int)v29 >= world->primaryLightCount )
      {
        LODWORD(transitionRand) = world->primaryLightCount;
        LODWORD(currentTime) = *(unsigned __int16 *)((char *)&v26->initialDef + v28);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3379, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( curGfxWorld->primaryLightCount )", "lightIndex doesn't index curGfxWorld->primaryLightCount\n\t%i not in [0, %i)", currentTime, transitionRand) )
          __debugbreak();
      }
      v30 = &world->primaryLights[v29];
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3381, ASSERT_TYPE_ASSERT, "(refLight)", (const char *)&queryFormat, "refLight") )
        __debugbreak();
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( (unsigned int)v29 >= comWorld.primaryLightCount )
      {
        LODWORD(transitionRand) = comWorld.primaryLightCount;
        LODWORD(currentTime) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", currentTime, transitionRand) )
          __debugbreak();
      }
      v31 = &comWorld.primaryLights[v29];
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3384, ASSERT_TYPE_ASSERT, "(rawLight)", (const char *)&queryFormat, "rawLight") )
        __debugbreak();
      ScriptableCl_RunStateEventLight_Internal(v29, data, light, v30, v31, time, v17, v21, v15);
      ++v27;
      v28 += 2i64;
    }
    while ( v27 < 5 );
  }
  else
  {
    Com_PrintError(29, "Can't run 'light' event for instance %i, it does not have any mapped lights\n", scriptableIndex);
  }
}

/*
==============
ScriptableCl_RunStateEventLight_Internal
==============
*/
void ScriptableCl_RunStateEventLight_Internal(const unsigned int lightIndex, Scriptable_EventLight_Data *data, const ScriptableEventLightDef *light, GfxLight *refLight, const ComPrimaryLight *rawLight, int currentTime, float transitionRand, float radiusRand, float intensityScaleRand)
{
  GfxLight *v9; 
  const ComPrimaryLight *v10; 
  unsigned int entityId; 
  __m256i v15; 
  __int128 v25; 
  float v34; 
  RadiantLight *radiantLiveLightRaw; 
  GfxLight *radiantLiveLight; 
  __m256i v37; 
  __m256i v38; 
  __m256i v39; 
  __m256i v40; 
  __m256i v41; 

  v9 = refLight;
  v10 = rawLight;
  if ( (refLight->flags & 0x10) != 0 )
  {
    entityId = refLight->entityId;
    radiantLiveLightRaw = NULL;
    radiantLiveLight = NULL;
    if ( CG_LiveUpdateFindLight(entityId, &radiantLiveLight, &radiantLiveLightRaw) )
    {
      v15 = *(__m256i *)&rawLight->shadowArea;
      v9 = radiantLiveLight;
      v37 = *(__m256i *)&rawLight->spawnFlags;
      v38 = *(__m256i *)rawLight->colorLinearSrgb.v;
      v39 = *(__m256i *)&rawLight->up.z;
      v40 = *(__m256i *)rawLight->bulbLength.v;
      v41 = v15;
      v10 = (const ComPrimaryLight *)&v37;
      v39.m256i_i32[4] = LODWORD(radiantLiveLightRaw->radius);
      v37.m256i_i32[4] = LODWORD(radiantLiveLightRaw->directIntensity);
      v38.m256i_i64[0] = *(_QWORD *)radiantLiveLightRaw->directColorLinearSrgb.v;
      v38.m256i_i32[2] = LODWORD(radiantLiveLightRaw->directColorLinearSrgb.v[2]);
    }
  }
  _XMM1 = LODWORD(transitionRand);
  data->startTime = currentTime;
  _XMM0 = LODWORD(light->transitionMax);
  __asm
  {
    vcmpless xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
  }
  data->transTime = (int)(float)(*(float *)&_XMM0 * 1000.0);
  if ( light->useColor )
  {
    data->startColorLinearSrgb.v[0] = v9->colorLinearSrgb.v[0];
    data->startColorLinearSrgb.v[1] = v9->colorLinearSrgb.v[1];
    data->startColorLinearSrgb.v[2] = v9->colorLinearSrgb.v[2];
  }
  if ( DVARBOOL_scriptable_light_radiusscale->current.enabled )
  {
    data->startRadius = v9->radius;
    _XMM0 = LODWORD(light->radiusMax);
    __asm { vcmpless xmm1, xmm0, xmm2 }
    _XMM0 = LODWORD(radiusRand);
    __asm { vblendvps xmm3, xmm0, xmm2, xmm1 }
    data->targetRadius = *(float *)&_XMM3;
    v25 = _XMM3;
    *(float *)&v25 = *(float *)&_XMM3 * v10->radius;
    _XMM0 = v25;
    __asm { vmaxss  xmm1, xmm0, cs:__real@3f8147ae }
  }
  else
  {
    _XMM0 = LODWORD(v10->radius);
    __asm { vmaxss  xmm0, xmm0, cs:__real@3f8147ae }
    data->startRadius = *(float *)&_XMM0;
    _XMM1 = LODWORD(v10->radius);
    __asm { vmaxss  xmm1, xmm1, cs:__real@3f8147ae }
  }
  data->targetRadius = *(float *)&_XMM1;
  _XMM1 = LODWORD(intensityScaleRand);
  data->startIntensity = v9->intensity;
  _XMM0 = LODWORD(light->intensityScaleMax);
  __asm
  {
    vcmpless xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
  }
  data->targetIntensity = *(float *)&_XMM0 * v10->intensity;
  if ( !light->useStateTransitionTime && !CG_EntityWorkers_TryAddScriptableStateEventLightUpdate(lightIndex, data, light, v10) )
  {
    v9->radius = data->targetRadius;
    v9->intensity = data->targetIntensity;
    if ( light->useColor )
    {
      v9->colorLinearSrgb.v[0] = light->colorLinearSrgb.v[0];
      v9->colorLinearSrgb.v[1] = light->colorLinearSrgb.v[1];
      v34 = light->colorLinearSrgb.v[2];
    }
    else
    {
      v9->colorLinearSrgb.v[0] = v10->colorLinearSrgb.v[0];
      v9->colorLinearSrgb.v[1] = v10->colorLinearSrgb.v[1];
      v34 = v10->colorLinearSrgb.v[2];
    }
    v9->colorLinearSrgb.v[2] = v34;
  }
}

/*
==============
ScriptableCl_RunStateEventModel
==============
*/
void ScriptableCl_RunStateEventModel(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventModelDef *model)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableDataType dataType; 
  const ScriptableDef *def; 
  char v11; 
  DObj *DObj; 
  DObj *v13; 
  bool v14; 
  unsigned __int8 v15; 
  char v16; 
  bool v17; 
  char v18; 
  char v19; 
  ScriptableModelUnion v20; 
  unsigned int LinkObject; 
  const ScriptableDef *v22; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 528, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 529, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  dataType = model->dataType;
  def = InstanceCommonContext->def;
  v11 = InstanceCommonContext->data.compositeModel != model->data.compositeModel;
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 2) != 0 && ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
  {
    if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 551, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
      __debugbreak();
    DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
    v13 = DObj;
    v14 = !DObj || !DObj->numModels;
    v11 |= v14;
    if ( !v11 )
    {
      if ( dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
      {
        if ( v13->numModels != GetSubmodelCountRecursive(model->data.compositeModel) )
          v11 = 1;
        if ( !v11 )
          v11 = !BG_XCompositeModel_AreSubmodelsIdentical(v13, model->data.compositeModel);
      }
      else
      {
        v11 = *v13->models != model->data.model;
      }
    }
  }
  v15 = *((_BYTE *)InstanceCommonContext + 60);
  v16 = (v15 >> 7 != model->dynamicSimulation || ((v15 & 0x40) != 0) != model->neverMoves) | v11;
  v17 = ((v15 & 8) != 0) != model->hudOutlineActive || InstanceCommonContext->hudOutlineColor != model->hudOutlineColor || ((v15 & 0x10) != 0) != model->hudOutlineFill;
  InstanceCommonContext->dataType = (dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL) + 1;
  InstanceCommonContext->data.compositeModel = model->data.compositeModel;
  *((_BYTE *)InstanceCommonContext + 60) ^= (*((_BYTE *)InstanceCommonContext + 60) ^ (model->neverMoves << 6)) & 0x40;
  v18 = (model->dynamicSimulation << 7) | *((_BYTE *)InstanceCommonContext + 60) & 0x7F;
  *((_BYTE *)InstanceCommonContext + 60) = v18;
  v19 = v18 ^ (v18 ^ (8 * model->hudOutlineActive)) & 8;
  *((_BYTE *)InstanceCommonContext + 60) = v19;
  InstanceCommonContext->hudOutlineColor = model->hudOutlineColor;
  *((_BYTE *)InstanceCommonContext + 60) = v19 ^ (v19 ^ (16 * model->hudOutlineFill)) & 0x10;
  *((_BYTE *)InstanceCommonContext + 61) ^= (model->activatePhysics ^ *((_BYTE *)InstanceCommonContext + 61)) & 1;
  v20.compositeModel = (XCompositeModelDef *)model->data;
  if ( v16 || !v20.compositeModel )
  {
    ScriptableCl_UpdateModel(localClientNum, scriptableIndex, model->activatePhysics);
    if ( localClientNum == LOCAL_CLIENT_0 && !ScriptableCl_Spatial_Required(LOCAL_CLIENT_0, scriptableIndex) )
    {
      v22 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, scriptableIndex)->def;
      if ( v22 )
      {
        if ( (v22->flags & 0x20000) != 0 )
        {
          if ( v20.compositeModel )
            ScriptableCl_AddNonSpatialLootInstance(scriptableIndex);
          else
            ScriptableCl_RemoveNonSpatialLootInstance(scriptableIndex);
        }
      }
    }
  }
  else if ( v17 )
  {
    if ( ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      CG_ClientModel_SetHudOutline(localClientNum, LinkObject, (*((_BYTE *)InstanceCommonContext + 60) & 8) != 0, InstanceCommonContext->hudOutlineColor, (*((_BYTE *)InstanceCommonContext + 60) & 0x10) != 0);
    }
  }
}

/*
==============
ScriptableCl_RunStateEventObjective
==============
*/
void ScriptableCl_RunStateEventObjective(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, const ScriptableEventObjectiveDef *objective)
{
  __int64 v3; 
  ClConfigStrings *ClConfigStrings; 
  const char *label; 
  unsigned int v8; 
  const char *description; 
  unsigned int v10; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *icon; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *v14; 
  ScriptableObjectiveList *v15; 
  unsigned __int8 count; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v3 = localClientNum;
  CG_EntityWorkers_EnterCriticalSection_ScriptableCl(NONE_LEGACY);
  if ( ScriptableCl_ObjectiveAddSafe((const LocalClientNum_t)v3) )
  {
    if ( !objective->settings.cached )
    {
      objective->settings.cached = 1;
      ClConfigStrings = ClConfigStrings::GetClConfigStrings();
      if ( !ClConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2998, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      label = objective->label;
      if ( label && *label )
        v8 = ((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetLocalizedStringIndex)(ClConfigStrings);
      else
        v8 = 0;
      description = objective->description;
      objective->settings.label = v8;
      if ( description && *description )
      {
        v10 = ((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetLocalizedStringIndex)(ClConfigStrings);
        objective->settings.description = v10;
        if ( !v10 )
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, eventParams->scriptableIndex);
          Com_PrintWarning(29, "WARNING: Scriptable %s failed to get localized string index for reference '%s', the string probably needs to be flagged as LOCPRECACHE\n", InstanceCommonContext->def->name, objective->description);
        }
      }
      else
      {
        objective->settings.description = 0;
      }
      icon = objective->icon;
      if ( icon && *icon )
        NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_OBJECTIVEICON, icon, &objective->settings.icon);
    }
    scriptableIndex = eventParams->scriptableIndex;
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v19) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", v19, 2) )
        __debugbreak();
      LODWORD(v22) = 2;
      LODWORD(v20) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    if ( s_scriptableObjectiveLists[v3].count >= 0xFAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 300, ASSERT_TYPE_ASSERT, "(ScriptableCl_ObjectiveAddSafe( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_ObjectiveAddSafe( localClientNum )") )
      __debugbreak();
    v14 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex);
    if ( !v14->objectiveIndex )
    {
      v15 = &s_scriptableObjectiveLists[v3];
      count = v15->count;
      if ( count >= 0xFAu )
      {
        LODWORD(v21) = 250;
        LODWORD(v19) = count;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( list.count ) < (unsigned)( SCRIPTABLE_OBJECTIVE_MAX )", "list.count doesn't index SCRIPTABLE_OBJECTIVE_MAX\n\t%i not in [0, %i)", v19, v21) )
          __debugbreak();
      }
      v17 = v15->count;
      if ( v17 < 0xFAu )
      {
        v15->objectives[v17].scriptableIndex = scriptableIndex;
        v15->objectives[v15->count].settings = &objective->settings;
        v14->objectiveIndex = ++v15->count;
        v18 = v15->count;
        if ( v15->peak < v18 )
          v15->peak = v18;
        ScriptableCl_ObjectiveChangedSet((const LocalClientNum_t)v3);
      }
    }
    CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(NONE_LEGACY);
  }
  else
  {
    CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(NONE_LEGACY);
    Com_PrintError(29, "Can't add objective because too many active\n");
  }
}

/*
==============
ScriptableCl_RunStateEventScreenshake
==============
*/
void ScriptableCl_RunStateEventScreenshake(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventScreenshakeDef *screenshake)
{
  bool isScreenShake; 
  bool isEarthquake; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  scr_string_t scrTagName; 
  int v11; 
  float radius; 
  __int16 freqPitch; 
  float durationFadeUp; 
  float durationFadeDown; 
  __int16 pitch; 
  __int16 yaw; 
  __int16 roll; 
  __int16 freqYaw; 
  vec3_t outOrigin; 
  __int16 freqRoll; 

  if ( onTime || screenshake->stateful )
  {
    isScreenShake = screenshake->isScreenShake;
    isEarthquake = screenshake->isEarthquake;
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    scrTagName = screenshake->scrTagName;
    if ( (!scrTagName || ScriptableCl_GetBonePosition(localClientNum, scriptableIndex, scrTagName, &outOrigin, screenshake->allowMissingTag) || screenshake->useRootOnMissingTag) && (isScreenShake || isEarthquake) )
    {
      v11 = (int)(float)(screenshake->duration * 1000.0);
      radius = (float)screenshake->radius;
      if ( isScreenShake )
      {
        freqPitch = 100 * LOWORD(screenshake->frequencyPitch);
        freqYaw = 100 * LOWORD(screenshake->frequencyYaw);
        freqRoll = 100 * LOWORD(screenshake->frequencyRoll);
        durationFadeUp = screenshake->durationFadeUp;
        durationFadeDown = screenshake->durationFadeDown;
        pitch = 100 * LOWORD(screenshake->scalePitch);
        yaw = 100 * LOWORD(screenshake->scaleYaw);
        roll = 100 * LOWORD(screenshake->scaleRoll);
        if ( isEarthquake )
        {
          pitch = (int)(float)(screenshake->scaleEarthquake * 100.0);
          yaw = pitch;
          roll = pitch;
        }
        CG_EntityWorkers_EnterCriticalSection();
        CG_StartShakeCameraWithControls(localClientNum, v11, 2047, &outOrigin, radius, pitch, yaw, roll, freqPitch, freqYaw, freqRoll, durationFadeUp, durationFadeDown, isEarthquake);
      }
      else
      {
        if ( !isEarthquake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3649, ASSERT_TYPE_ASSERT, "(isEarthquake)", (const char *)&queryFormat, "isEarthquake") )
          __debugbreak();
        CG_EntityWorkers_EnterCriticalSection();
        CG_StartShakeCamera(localClientNum, screenshake->scaleEarthquake, v11, &outOrigin, radius);
      }
      CG_EntityWorkers_LeaveCriticalSection();
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_RunStateEventSetMayhem
==============
*/
void ScriptableCl_RunStateEventSetMayhem(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventSetMayhemDef *setMayhem)
{
  const ScriptableDef *v6; 
  const char *v7; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  scr_string_t *v11; 
  const char *name; 
  const ScriptableDef *def; 
  const char *v14; 
  unsigned int LinkObject; 
  const ScriptableDef *v16; 
  const char *v17; 
  scr_string_t String; 
  scr_string_t v19; 
  char *fmt; 
  vec3_t outOrigin; 
  __int64 v22; 
  vec4_t quat; 
  char dest[272]; 

  v22 = -2i64;
  if ( setMayhem->mayhem )
  {
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = setMayhem->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3728, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    v11 = (scr_string_t *)&InstanceCommonContext->eventStreamBuffer[eventStreamBufferOffsetClient];
    if ( *v11 )
    {
      name = setMayhem->mayhem->name;
      def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
      if ( def )
        v14 = def->name;
      else
        v14 = "<unknown>";
      Com_PrintError(29, "Scriptable %s tried to set mayhem %s, but a mayhem was already running for this scriptable\n", v14, name);
      ScriptableCl_EnterError();
    }
    else
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      v16 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
      if ( v16 )
        v17 = v16->name;
      else
        v17 = "<unknown>";
      LODWORD(fmt) = LinkObject;
      Com_sprintf(dest, 0x104ui64, "Scriptable-%s-%i", v17, fmt);
      String = SL_GetString(dest, 0);
      *v11 = String;
      if ( Mayhem_DoesInstanceExist(String) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3750, ASSERT_TYPE_ASSERT, "(Mayhem_DoesInstanceExist( *mayhemId ) == qfalse)", (const char *)&queryFormat, "Mayhem_DoesInstanceExist( *mayhemId ) == qfalse") )
        __debugbreak();
      v19 = SL_GetString(setMayhem->mayhem->name, 0);
      ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
      AnglesToQuat(&InstanceCommonContext->angles, &quat);
      CG_EntityWorkers_EnterCriticalSection_Mayhem(NONE_LEGACY);
      if ( !Mayhem_SpawnInstance(*v11, v19, &outOrigin, &quat) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3761, ASSERT_TYPE_ASSERT, "(Mayhem_SpawnInstance( *mayhemId, assetName, position, orientationAsQuat ))", (const char *)&queryFormat, "Mayhem_SpawnInstance( *mayhemId, assetName, position, orientationAsQuat )") )
        __debugbreak();
      CG_EntityWorkers_LeaveCriticalSection_Mayhem(NONE_LEGACY);
      SL_RemoveRefToString(v19);
      SL_RemoveRefToString(*v11);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  else
  {
    v6 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex)->def;
    if ( v6 )
      v7 = v6->name;
    else
      v7 = "<unknown>";
    Com_PrintError(29, "Scriptable %s tried to set an empty mayhem event\n", v7);
    ScriptableCl_EnterError();
  }
}

/*
==============
ScriptableCl_RunStateEventSpawnDynent
==============
*/
void ScriptableCl_RunStateEventSpawnDynent(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventSpawnDynentDef *spawnDynent)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *eventStreamBuffer; 
  scr_string_t scrTagName; 
  unsigned int v12; 
  unsigned int ReservedDynent; 
  unsigned int *v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  float v26; 
  float v27; 
  float v28; 
  const ScriptableDamageEvent *damageEvent; 
  XModel *model; 
  const ScriptableDamageEvent *v31; 
  const ScriptableDamageEvent *v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  DynEntityClient *Client; 
  unsigned int physicsSystemId; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrigin; 
  __int64 v44; 
  vec3_t pHoldrand; 
  vec3_t angVel; 
  vec3_t linVel; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTransform; 

  v44 = -2i64;
  *(_QWORD *)pHoldrand.v = holdrand;
  if ( onTime || spawnDynent->stateful )
  {
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = spawnDynent->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1266, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
    scrTagName = spawnDynent->scrTagName;
    v12 = scriptableIndex;
    if ( scrTagName )
    {
      if ( ScriptableCl_GetBoneTransform(localClientNum, scriptableIndex, scrTagName, &outTransform, spawnDynent->allowMissingTag) )
      {
        outOrigin = outTransform.m[3];
        AxisToAngles((const tmat33_t<vec3_t> *)&outTransform, &angles);
        goto LABEL_11;
      }
      if ( !spawnDynent->useRootOnMissingTag )
      {
LABEL_46:
        memset(&outOrigin, 0, sizeof(outOrigin));
        return;
      }
      v12 = scriptableIndex;
    }
    angles = InstanceCommonContext->angles;
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v12, &outOrigin);
    AnglesAndOriginToMatrix43(&angles, &outOrigin, &outTransform);
LABEL_11:
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
      ReservedDynent = *(_DWORD *)&eventStreamBuffer[eventStreamBufferOffsetClient];
    else
      ReservedDynent = ScriptableCl_GetReservedDynent(localClientNum);
    v14 = *(unsigned int **)pHoldrand.v;
    if ( spawnDynent->randomRangeLinVel )
    {
      v15 = BG_flrand(spawnDynent->launchLinVel.v[0], spawnDynent->launchLinVel2.v[0], *(unsigned int **)pHoldrand.v);
      v16 = *(float *)&v15;
      v17 = BG_flrand(spawnDynent->launchLinVel.v[1], spawnDynent->launchLinVel2.v[1], v14);
      v18 = *(float *)&v17;
      v19 = BG_flrand(spawnDynent->launchLinVel.v[2], spawnDynent->launchLinVel2.v[2], v14);
      v20 = *(float *)&v19;
    }
    else
    {
      v16 = spawnDynent->launchLinVel.v[0];
      v18 = spawnDynent->launchLinVel.v[1];
      v20 = spawnDynent->launchLinVel.v[2];
    }
    if ( spawnDynent->randomRangeAngVel )
    {
      v21 = BG_flrand(spawnDynent->launchAngVel.v[0], spawnDynent->launchAngVel2.v[0], v14);
      v22 = *(float *)&v21;
      v23 = BG_flrand(spawnDynent->launchAngVel.v[1], spawnDynent->launchAngVel2.v[1], v14);
      v24 = *(float *)&v23;
      v25 = BG_flrand(spawnDynent->launchAngVel.v[2], spawnDynent->launchAngVel2.v[2], v14);
      v26 = *(float *)&v25;
    }
    else
    {
      v22 = spawnDynent->launchAngVel.v[0];
      v24 = spawnDynent->launchAngVel.v[1];
      v26 = spawnDynent->launchAngVel.v[2];
    }
    v27 = outTransform.m[0].v[1];
    v28 = outTransform.m[0].v[0];
    if ( spawnDynent->worldSpaceLinVel )
    {
      linVel.v[0] = v16;
      linVel.v[1] = v18;
      linVel.v[2] = v20;
    }
    else
    {
      linVel.v[0] = (float)((float)(v16 * outTransform.m[0].v[0]) + (float)(outTransform.m[1].v[0] * v18)) + (float)(v20 * outTransform.m[2].v[0]);
      linVel.v[1] = (float)((float)(v16 * outTransform.m[0].v[1]) + (float)(outTransform.m[1].v[1] * v18)) + (float)(v20 * outTransform.m[2].v[1]);
      linVel.v[2] = (float)((float)(v16 * outTransform.m[0].v[2]) + (float)(outTransform.m[1].v[2] * v18)) + (float)(v20 * outTransform.m[2].v[2]);
      v27 = outTransform.m[0].v[1];
      v28 = outTransform.m[0].v[0];
    }
    if ( spawnDynent->worldSpaceAngVel )
    {
      angVel.v[0] = v22;
      angVel.v[1] = v24;
      angVel.v[2] = v26;
    }
    else
    {
      angVel.v[0] = (float)((float)(v22 * v28) + (float)(outTransform.m[1].v[0] * v24)) + (float)(v26 * outTransform.m[2].v[0]);
      angVel.v[1] = (float)((float)(v22 * v27) + (float)(outTransform.m[1].v[1] * v24)) + (float)(v26 * outTransform.m[2].v[1]);
      angVel.v[2] = (float)((float)(v22 * outTransform.m[0].v[2]) + (float)(outTransform.m[1].v[2] * v24)) + (float)(v26 * outTransform.m[2].v[2]);
    }
    if ( spawnDynent->allowCauseVelocity )
    {
      damageEvent = eventParams->damageEvent;
      if ( damageEvent )
      {
        if ( !BG_IsExplosionMOD((meansOfDeath_t)damageEvent->mod) )
        {
          linVel.v[0] = 0.0;
          linVel.v[1] = 0.0;
          linVel.v[2] = 0.0;
          angVel.v[0] = 0.0;
          angVel.v[1] = 0.0;
          angVel.v[2] = 0.0;
        }
      }
    }
    model = spawnDynent->model;
    if ( model )
    {
      if ( model->physicsAsset )
      {
        CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
        DynEnt_ScriptablePhysicsLaunch(localClientNum, ReservedDynent, spawnDynent->model, &outOrigin, &angles, &linVel, &angVel);
        if ( spawnDynent->allowCauseVelocity )
        {
          v31 = eventParams->damageEvent;
          if ( v31 )
          {
            if ( !BG_IsExplosionMOD((meansOfDeath_t)v31->mod) )
            {
              v32 = eventParams->damageEvent;
              v33 = v32->end.v[0] - v32->start.v[0];
              v35 = LODWORD(v32->end.v[1]);
              v34 = v32->end.v[1] - v32->start.v[1];
              v36 = v32->end.v[2] - v32->start.v[2];
              *(float *)&v35 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v36 * v36));
              _XMM4 = v35;
              __asm
              {
                vcmpless xmm0, xmm4, cs:__real@80000000
                vblendvps xmm1, xmm4, xmm2, xmm0
              }
              pHoldrand.v[0] = v33 * (float)(1.0 / *(float *)&_XMM1);
              pHoldrand.v[1] = v34 * (float)(1.0 / *(float *)&_XMM1);
              pHoldrand.v[2] = (float)(1.0 / *(float *)&_XMM1) * v36;
              if ( *(float *)&v35 > 0.0 )
              {
                Client = DynEnt_GetClient(localClientNum, ReservedDynent, DYNENT_BASIS_MODEL);
                if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1390, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                  __debugbreak();
                physicsSystemId = Client->physicsSystemId;
                if ( physicsSystemId != -1 )
                  Physics_ApplyBulletForceInstance((const Physics_WorldId)(3 * localClientNum + 3), physicsSystemId, &eventParams->damageEvent->end, &pHoldrand, eventParams->damageEvent->inflictorEntNum, eventParams->damageEvent->mod == 8);
              }
            }
          }
        }
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        if ( spawnDynent->effectDef.particleSystemDef )
        {
          CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
          *(_QWORD *)pHoldrand.v = spawnDynent->effectDef.particleSystemDef;
          LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
          FX_PlayBoltedToDynEntEffect(localClientNum, (const FXRegisteredDef *)&pHoldrand, LocalClientGlobals->time, ReservedDynent, 0, 0);
          CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
        }
      }
      else
      {
        Com_PrintWarning(14, "A scriptable attempted to spawn a dynent at [%.2f, %.2f, %.2f] with a model %s with no physics asset\n", outOrigin.v[0], outOrigin.v[1], outOrigin.v[2], model->name);
      }
    }
    else
    {
      Com_PrintWarning(14, "A scriptable attempted to spawn a dynent at [%.2f, %.2f, %.2f] with no model\n", outOrigin.v[0], outOrigin.v[1], outOrigin.v[2]);
    }
    goto LABEL_46;
  }
}

/*
==============
ScriptableCl_RunStateEventSun
==============
*/
void ScriptableCl_RunStateEventSun(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventSunDef *sun)
{
  MapEnts *mapEnts; 
  __int64 v7; 
  int time; 
  float transitionMax; 
  double v10; 
  float v11; 
  float intensityOverrideMax; 
  double v13; 
  float pitchMax; 
  double v15; 
  double v16; 
  float headingMax; 
  double v18; 
  float sunIntensityOut; 
  vec3_t sunColorLinearSrgbOut; 
  vec3_t forward; 
  vec3_t sunDirOut; 

  mapEnts = cm.mapEnts;
  v7 = localClientNum;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( sun->useStateTransitionTime )
  {
    mapEnts->scriptableMapEnts.sunClientDatas[v7].startTime = time;
    transitionMax = sun->transitionMax;
    *(float *)&v10 = sun->transitionMin;
    if ( transitionMax > *(float *)&v10 )
      v10 = BG_flrand(*(float *)&v10, transitionMax, holdrand);
    mapEnts->scriptableMapEnts.sunClientDatas[v7].transTime = (int)(float)(*(float *)&v10 * 1000.0);
  }
  if ( sun->useColor )
  {
    if ( R_GetSunColorOverride(&sunColorLinearSrgbOut) )
    {
      v11 = sunColorLinearSrgbOut.v[1];
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startColorLinearSrgb.v[0] = sunColorLinearSrgbOut.v[0];
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startColorLinearSrgb.v[2] = sunColorLinearSrgbOut.v[2];
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startColorLinearSrgb.v[1] = v11;
    }
    else
    {
      *(_QWORD *)mapEnts->scriptableMapEnts.sunClientDatas[v7].startColorLinearSrgb.v = *(_QWORD *)sun->colorLinearSrgb.v;
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startColorLinearSrgb.v[2] = sun->colorLinearSrgb.v[2];
    }
  }
  if ( sun->useIntensity )
  {
    intensityOverrideMax = sun->intensityOverrideMax;
    *(float *)&v13 = sun->intensityOverrideMin;
    if ( intensityOverrideMax > *(float *)&v13 )
      v13 = BG_flrand(*(float *)&v13, intensityOverrideMax, holdrand);
    mapEnts->scriptableMapEnts.sunClientDatas[v7].targetIntensity = *(float *)&v13;
    if ( R_GetSunIntensityOverride(&sunIntensityOut) )
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startIntensity = sunIntensityOut;
    else
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startIntensity = mapEnts->scriptableMapEnts.sunClientDatas[v7].targetIntensity;
  }
  if ( sun->useDirection )
  {
    pitchMax = sun->pitchMax;
    *(float *)&v15 = sun->pitchMin;
    if ( pitchMax > *(float *)&v15 )
    {
      v16 = BG_flrand(*(float *)&v15, pitchMax, holdrand);
      v15 = AngleNormalize360(*(const float *)&v16);
    }
    mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[0] = *(float *)&v15;
    headingMax = sun->headingMax;
    *(float *)&v15 = sun->headingMin;
    if ( headingMax > *(float *)&v15 )
    {
      v18 = BG_flrand(*(float *)&v15, headingMax, holdrand);
      v15 = AngleNormalize360(*(const float *)&v18);
    }
    mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[1] = *(float *)&v15;
    mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[2] = 0.0;
    if ( R_GetSunDirectionOverride(time, &sunDirOut) )
    {
      vectoangles(&sunDirOut, &mapEnts->scriptableMapEnts.sunClientDatas[v7].startAngles);
    }
    else
    {
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startAngles.v[0] = mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[0];
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startAngles.v[1] = mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[1];
      mapEnts->scriptableMapEnts.sunClientDatas[v7].startAngles.v[2] = mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles.v[2];
    }
  }
  if ( !sun->useStateTransitionTime )
  {
    if ( sun->useDirection )
      AngleVectors(&mapEnts->scriptableMapEnts.sunClientDatas[v7].targetAngles, &forward, NULL, NULL);
    if ( !CG_EntityWorkers_TryAddScriptableStateEventSunUpdate(sun, mapEnts->scriptableMapEnts.sunClientDatas[v7].targetIntensity, &forward) )
    {
      if ( sun->useColor )
        R_SetSunColorOverride((const vec3_t *)&sun->colorLinearSrgb);
      if ( sun->useIntensity )
        R_SetSunIntensityOverride(mapEnts->scriptableMapEnts.sunClientDatas[v7].targetIntensity);
      if ( sun->useDirection )
        R_SetSunDirectionOverride(&forward, 0);
    }
  }
}

/*
==============
ScriptableCl_RunStateEventTeamSelector
==============
*/
void ScriptableCl_RunStateEventTeamSelector(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventTeamSelectorDef *teamSelector)
{
  const ScriptableEventTeamSelectorDef *v5; 
  unsigned int scriptableIndex; 
  char v7; 
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  Scriptable_TeamFilter teamFilter; 
  bool DoesTeamMatch; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v16; 
  unsigned __int8 *eventStreamBuffer; 
  bool v18; 
  ScriptableInstanceContextSecure *v19; 
  const char *name; 
  ScriptableEventDef *eventsPass; 
  unsigned int numEvents; 
  ScriptableEventParams eventParamsa; 
  Scriptable_TeamFilter v24; 
  bool v25; 
  unsigned int *v26; 
  bool v27; 

  v27 = onTime;
  v26 = holdrand;
  v5 = teamSelector;
  scriptableIndex = eventParams->scriptableIndex;
  v7 = onTime;
  if ( teamSelector->testLocalPlayer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4058, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  }
  else
  {
    if ( !ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4065, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", "TeamSelector only works on entity scriptables for non-local-player tests") )
      __debugbreak();
    clientNum = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  }
  teamFilter = v5->teamFilter;
  DoesTeamMatch = ScriptableCl_DoesTeamMatch(localClientNum, clientNum, teamFilter);
  if ( (v5->base->flags & 0x200) != 0 )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = v5->eventStreamBufferOffsetClient;
    v16 = InstanceCommonContext;
    if ( eventStreamBufferOffsetClient + 1 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4079, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    eventStreamBuffer = v16->eventStreamBuffer;
    v7 = v27;
    eventStreamBuffer[eventStreamBufferOffsetClient] = DoesTeamMatch;
  }
  v18 = eventParams->teamEvent == NULL;
  v25 = DoesTeamMatch;
  v24 = teamFilter;
  LODWORD(teamSelector) = *v26;
  if ( !v18 )
  {
    v19 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v19->def )
      name = v19->def->name;
    else
      name = "<unknown>";
    Com_Printf(16, "ScriptableCl_RunStateEventTeamSelector: Nested TeamSelector, might produce unexpected teamEvent params (%s)\n", name);
  }
  eventParamsa.teamEvent = (const ScriptableTeamEvent *)&v24;
  *(__m256i *)&eventParamsa.context = *(__m256i *)&eventParams->context;
  if ( DoesTeamMatch )
  {
    eventsPass = v5->eventsPass;
    numEvents = v5->eventPassCount;
  }
  else
  {
    eventsPass = v5->eventsFail;
    numEvents = v5->eventFailCount;
  }
  ScriptableCl_RunStateEvents_Specific(localClientNum, &eventParamsa, (unsigned int *)&teamSelector, v7, eventsPass, numEvents);
}

/*
==============
ScriptableCl_RunStateEventViewmodelShaderParam
==============
*/
void ScriptableCl_RunStateEventViewmodelShaderParam(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, bool onTime, const ScriptableEventViewmodelShaderParamDef *viewmodelShaderParam)
{
  unsigned int scriptableIndex; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  characterInfo_t *CharacterInfo; 
  int number; 
  const char *v11; 
  ScriptableInstanceContextSecure *v12; 
  const char *v13; 
  shaderOverride_t *v16; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v19; 
  Scriptable_EventViewmodelShaderParam_Data *v20; 
  float scrollRateX; 
  ScriptableInstanceContextSecure *v23; 
  const char *name; 
  char *fmt; 

  scriptableIndex = eventParams->scriptableIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3897, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3900, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  CharacterInfo = cg_t::TryGetCharacterInfo(LocalClientGlobals, Entity->nextState.number);
  if ( CharacterInfo )
  {
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    if ( (int)*(float *)&_XMM2 )
    {
      v16 = &CharacterInfo->shaderOverride[(int)*(float *)&_XMM2 - 1];
      if ( viewmodelShaderParam->transitionTime <= 0.0 )
      {
        ScriptableCl_SetViewmodelShaderParam_Internal(v16, viewmodelShaderParam, viewmodelShaderParam->floatValue);
      }
      else
      {
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
        eventStreamBufferOffsetClient = viewmodelShaderParam->eventStreamBufferOffsetClient;
        v19 = InstanceCommonContext;
        if ( eventStreamBufferOffsetClient + 32 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3931, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v20 = (Scriptable_EventViewmodelShaderParam_Data *)&v19->eventStreamBuffer[eventStreamBufferOffsetClient];
        switch ( viewmodelShaderParam->shaderParam )
        {
          case Scriptable_ShaderParamType_ScrollRate_X:
            scrollRateX = v16->scrollRateX;
            goto LABEL_27;
          case Scriptable_ShaderParamType_ScrollRate_Y:
            scrollRateX = v16->scrollRateY;
            goto LABEL_27;
          case Scriptable_ShaderParamType_ScrollRate_R:
            scrollRateX = v16->scrollRateR;
            goto LABEL_27;
          case Scriptable_ShaderParamType_Rotation:
            scrollRateX = v16->rotation;
            goto LABEL_27;
          case Scriptable_ShaderParamType_Tiling_X:
            scrollRateX = v16->tilingX;
            goto LABEL_27;
          case Scriptable_ShaderParamType_Tiling_Y:
            scrollRateX = v16->tilingY;
            goto LABEL_27;
          case Scriptable_ShaderParamType_Alpha:
            scrollRateX = v16->alpha;
            goto LABEL_27;
          case Scriptable_ShaderParamType_Emissive:
            scrollRateX = v16->emissive;
            goto LABEL_27;
          case Scriptable_ShaderParamType_AtlasFrame:
          case Scriptable_ShaderParamType_Placeholder1:
            scrollRateX = v16->atlasTime;
LABEL_27:
            v20->startFloatValue = scrollRateX;
            v20->targetFloatValue = viewmodelShaderParam->floatValue;
            v20->startTime = CG_GetLocalClientGlobals(localClientNum)->time;
            __asm { vroundss xmm1, xmm7, xmm4, 1 }
            v20->transTime = (int)*(float *)&_XMM1;
            ScriptableCl_SetViewmodelShaderParam(v16, viewmodelShaderParam, v20, 0.0);
            break;
          default:
            v23 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
            if ( v23->def )
              name = v23->def->name;
            else
              name = "<unknown>";
            Com_PrintError(29, "Scriptable %s has an unknown or unset shader param type\n", name);
            ScriptableCl_EnterError();
            break;
        }
      }
    }
  }
  else
  {
    number = Entity->nextState.number;
    v11 = viewmodelShaderParam->base->name;
    v12 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v12->def )
      v13 = v12->def->name;
    else
      v13 = "<unknown>";
    LODWORD(fmt) = number;
    Com_PrintError(29, "Scriptable %s with event %s on a non-character entity %d.\n", v13, v11, fmt);
    ScriptableCl_EnterError();
  }
}

/*
==============
ScriptableCl_RunStateEventsFrom
==============
*/
void ScriptableCl_RunStateEventsFrom(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, unsigned int nextEvent, unsigned int *holdrand)
{
  __int64 v5; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v10; 
  __int64 numEvents; 
  __int64 v12; 
  ScriptableEventParams outParams; 

  v5 = nextEvent;
  ScriptableCl_InitEventParams(localClientNum, &outParams, scriptableIndex, part);
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, part);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4932, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= part->numStates )
  {
    LODWORD(numEvents) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4933, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part->numStates )", "runtime->stateId doesn't index part->numStates\n\t%i not in [0, %i)", numEvents, part->numStates) )
      __debugbreak();
  }
  v10 = &part->states[PartRuntime->stateId];
  if ( (unsigned int)v5 >= v10->base.numEvents )
  {
    LODWORD(v12) = v10->base.numEvents;
    LODWORD(numEvents) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4936, ASSERT_TYPE_ASSERT, "(unsigned)( nextEvent ) < (unsigned)( stateDef->base.numEvents )", "nextEvent doesn't index stateDef->base.numEvents\n\t%i not in [0, %i)", numEvents, v12) )
      __debugbreak();
  }
  ScriptableCl_RunStateEvents_Specific(localClientNum, &outParams, holdrand, 1, &v10->base.events[v5], v10->base.numEvents - v5);
}

/*
==============
ScriptableCl_RunStateEvents_All
==============
*/
void ScriptableCl_RunStateEvents_All(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime)
{
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v9; 
  __int64 numEvents; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4946, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4947, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, eventParams->scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4951, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= eventParams->partDef->numStates )
  {
    LODWORD(numEvents) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4952, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( eventParams->partDef->numStates )", "runtime->stateId doesn't index eventParams->partDef->numStates\n\t%i not in [0, %i)", numEvents, eventParams->partDef->numStates) )
      __debugbreak();
  }
  v9 = &eventParams->partDef->states[PartRuntime->stateId];
  ScriptableCl_RunStateEvents_Specific(localClientNum, eventParams, holdrand, onTime, v9->base.events, v9->base.numEvents);
}

/*
==============
ScriptableCl_RunStateEvents_Specific
==============
*/
void ScriptableCl_RunStateEvents_Specific(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, ScriptableEventDef *events, unsigned int numEvents)
{
  unsigned int *v7; 
  ScriptableEventDef *v10; 
  unsigned int v11; 
  __int64 v12; 
  ScriptableEventDef *v13; 
  const char *EventTypeName; 
  const char *v15; 
  ScriptablePartDef *part; 
  unsigned int stateIdx; 
  unsigned int numStates; 
  unsigned int v19; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  double v22; 
  bool v23; 
  ScriptableInstanceContextSecure *v24; 
  __int64 v25; 
  ScriptableEventDef *eventsA; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  ScriptableInstanceContextSecure *v28; 
  __int64 v29; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *v31; 
  scr_string_t scrNotification; 
  float playbackRateMin; 
  unsigned int LinkObject; 
  CgSoundSystem *SoundSystem; 
  ScriptableEventDef *eventsB; 
  cg_t *LocalClientGlobals; 
  unsigned int v38; 
  ScriptableInstanceContextSecure *v39; 
  scr_string_t scrTagName; 
  const ScriptablePartDef *v41; 
  ScriptableInstanceContextSecure *v42; 
  const char *v43; 
  unsigned int v44; 
  ScriptableInstanceContextSecure *v45; 
  __int64 v46; 
  unsigned int v47; 
  ScriptableInstanceContextSecure *v48; 
  __int64 v49; 
  unsigned __int8 *eventStreamBuffer; 
  ScriptableInstanceContextSecure *v51; 
  const char *v52; 
  unsigned int v53; 
  ScriptableInstanceContextSecure *v54; 
  const char *v55; 
  ScriptablePartReference v56; 
  bool IsCharacterThirdPerson; 
  ScriptableInstanceContextSecure *v58; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableEventDef *v60; 
  double v61; 
  float v62; 
  double v63; 
  float v64; 
  double v65; 
  float v66; 
  ScriptableInstanceContextSecure *v67; 
  __int64 v68; 
  __int64 v69; 
  unsigned __int8 *v70; 
  unsigned __int8 v71; 
  unsigned int v72; 
  __int16 v73; 
  const centity_t *EntityFromObjectId; 
  bool v75; 
  FootstepVFX *leftFootstepVFX; 
  float delayMin; 
  float delayMax; 
  double v79; 
  ScriptableInstanceContextSecure *v80; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v82; 
  __int64 v83; 
  char *fmt; 
  vec3_t *pos; 
  unsigned int posa; 
  unsigned int posb; 
  __int64 randSeed; 
  __int64 v89; 
  unsigned int v90; 
  unsigned int holdranda; 
  vec3_t outOrigin; 
  vec3_t outPosition; 
  __int64 v94; 
  unsigned int *v95; 
  ScriptableEventDef *v96; 
  __int64 v97; 
  ScriptableEventParams outParams; 
  char dest[280]; 

  v97 = -2i64;
  v7 = holdrand;
  v95 = holdrand;
  v10 = events;
  v96 = events;
  v11 = 0;
  v90 = 0;
  if ( numEvents )
  {
    v12 = 0i64;
    v94 = 0i64;
    while ( 1 )
    {
      v13 = &v10[v12];
      EventTypeName = ScriptableBg_GetEventTypeName(v13->type);
      v15 = j_va("ScriptableCl_RunStateEvent %s", EventTypeName);
      Sys_ProfBeginNamedEvent(0xFFD2691E, v15);
      switch ( v13->type )
      {
        case Scriptable_EventType_StateChange:
          if ( !v13->data.disablePhysicsSubShape.mutableShapeHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 388, ASSERT_TYPE_ASSERT, "(stateChange->part)", (const char *)&queryFormat, "stateChange->part") )
            __debugbreak();
          part = v13->data.stateChange.part;
          if ( (part->flags & 4) != 0 )
            goto $LN8_100;
          stateIdx = v13->data.stateChange.stateIdx;
          numStates = part->numStates;
          if ( stateIdx < numStates )
          {
            CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
            ScriptableCl_InitEventParams(localClientNum, &outParams, eventParams->scriptableIndex, v13->data.stateChange.part);
            ScriptableBg_ChangePartState(&outParams, v13->data.stateChange.stateIdx, onTime);
            CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
            goto LABEL_14;
          }
          v19 = numStates - 1;
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( InstanceCommonContext->def )
            name = InstanceCommonContext->def->name;
          else
            name = "<unknown>";
          LODWORD(fmt) = v19;
          Com_PrintError(29, "Scriptable %s tried to run a state change event, the state %i was outside the range 0-%i\n", name, stateIdx, fmt);
          goto LABEL_13;
        case Scriptable_EventType_Wait:
          delayMin = v13->data.wait.delayMin;
          delayMax = v13->data.wait.delayMax;
          if ( delayMax > delayMin )
          {
            v79 = BG_flrand(v13->data.wait.delayMin, delayMax, v7);
            delayMin = *(float *)&v79;
          }
          v80 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          eventStreamBufferOffsetClient = v13->data.wait.eventStreamBufferOffsetClient;
          if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)v80->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 429, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          *(float *)&v80->eventStreamBuffer[eventStreamBufferOffsetClient] = delayMin;
          goto LABEL_162;
        case Scriptable_EventType_Random:
          v22 = BG_flrand(0.0, 1.0, v7);
          v23 = *(float *)&v22 <= v13->data.wait.delayMin;
          v24 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v25 = v13->data.random.eventStreamBufferOffsetClient;
          if ( v25 + 1 > (unsigned __int64)v24->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 451, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v24->eventStreamBuffer[v25] = v23;
          if ( v23 )
          {
            posa = v13->data.stateChange.stateIdx;
            eventsA = v13->data.random.eventsA;
          }
          else
          {
            posa = v13->data.random.eventBCount;
            eventsA = v13->data.random.eventsB;
          }
          ScriptableCl_RunStateEvents_Specific(localClientNum, eventParams, v7, onTime, eventsA, posa);
          goto LABEL_14;
        case Scriptable_EventType_Script:
        case Scriptable_EventType_ChunkDynent:
        case Scriptable_EventType_ViewmodelChangeImage:
        case Scriptable_EventType_AddModel:
        case Scriptable_EventType_SpatialDisable:
        case Scriptable_EventType_Hover:
        case Scriptable_EventType_Dlc1:
        case Scriptable_EventType_ScriptDamage:
          goto $LN8_100;
        case Scriptable_EventType_Model:
          ScriptableCl_RunStateEventModel(localClientNum, eventParams, onTime, (const ScriptableEventModelDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Collision:
          ScriptableCl_RunStateEventCollision(localClientNum, eventParams, onTime, (const ScriptableEventCollisionDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Animation:
          ScriptableCl_RunStateEventAnimation(localClientNum, eventParams, v7, onTime, (const ScriptableEventAnimationDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_HideShowBone:
          ScriptableCl_RunStateEventHideShowBone(localClientNum, eventParams, onTime, (const ScriptableEventHideShowBoneDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableCl_RunStateEventDisablePhysicsSubShape(localClientNum, eventParams, onTime, (const ScriptableEventDisablePhysicsSubShapeDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_NoteTrack:
          InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, eventParams->scriptableIndex);
          InstanceNoteTrackContext->currentNoteTracks = (const ScriptableEventNoteTrackDef *)&v13->data;
          InstanceNoteTrackContext->currentNoteTrackPartDef = eventParams->partDef;
          goto $LN8_100;
        case Scriptable_EventType_SpawnDynent:
          ScriptableCl_RunStateEventSpawnDynent(localClientNum, eventParams, v7, onTime, (const ScriptableEventSpawnDynentDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_PFX:
          if ( !onTime && !v13->data.anonymous.buffer[0] && v13->data.spawnDynent.launchAngVel.v[2] <= 0.0 && !v13->data.anonymous.buffer[60] )
            goto $LN8_100;
          ScriptableCl_PlayParticleFX(localClientNum, eventParams, eventParams->scriptableIndex, (const ScriptableEventPFXDef *)&v13->data, v11);
          if ( v13->data.spawnDynent.launchAngVel.v[2] <= 0.0 )
            goto $LN8_100;
          v28 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v29 = v13->data.particleFX.eventStreamBufferOffsetClient;
          if ( v29 + 4 > (unsigned __int64)v28->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1989, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          *(_DWORD *)&v28->eventStreamBuffer[v29] = v13->data.screenshake.frequencyYaw;
          goto LABEL_14;
        case Scriptable_EventType_Sound:
          if ( (onTime || v13->data.anonymous.buffer[0] || v13->data.anonymous.buffer[32]) && !v13->data.anonymous.buffer[33] )
            ScriptableCl_PlaySound(localClientNum, eventParams->scriptableIndex, (const ScriptableEventSoundDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Explosion:
          if ( !onTime && !v13->data.anonymous.buffer[36] )
            goto $LN8_100;
          scriptableIndex = eventParams->scriptableIndex;
          v31 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          ScriptableInstanceContextSecure::GetOrigin(v31, scriptableIndex, &outOrigin);
          scrNotification = v13->data.script.scrNotification;
          if ( !scrNotification || ScriptableCl_GetBonePosition(localClientNum, scriptableIndex, scrNotification, &outOrigin, v13->data.explosion.allowMissingTag) || v13->data.anonymous.buffer[38] )
          {
            playbackRateMin = v13->data.animation.playbackRateMin;
            if ( ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
            {
              LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
              truncate_cast<short,unsigned int>(LinkObject);
            }
            CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
            Physics_ApplyRadiusForce((const Physics_WorldId)(3 * localClientNum + 3), &outOrigin, playbackRateMin, v13->data.animation.blendTime, v13->data.animation.playbackRateMax, 0.0, &vec3_origin, *v7, 1.0);
            CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
            SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
            if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3209, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
              __debugbreak();
            CG_EntityWorkers_EnterCriticalSection();
            ((void (__fastcall *)(CgSoundSystem *, vec3_t *))SoundSystem->PlayClientSideReactiveSounds)(SoundSystem, &outOrigin);
            CG_EntityWorkers_LeaveCriticalSection();
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
          goto LABEL_14;
        case Scriptable_EventType_Light:
          ScriptableCl_RunStateEventLight(localClientNum, eventParams, v7, onTime, (const ScriptableEventLightDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Sun:
          ScriptableCl_RunStateEventSun(localClientNum, eventParams, v7, onTime, (const ScriptableEventSunDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Rumble:
          if ( !onTime && !v13->data.anonymous.buffer[0] )
            goto $LN8_100;
          eventsB = v13->data.random.eventsB;
          if ( !eventsB || !LOBYTE(eventsB->base.name) )
            goto $LN8_100;
          if ( CG_Rumble_IsBroadcastRumble(v13->data.rumble.rumbleAsset) )
          {
            v38 = eventParams->scriptableIndex;
            v39 = ScriptableCl_GetInstanceCommonContext(localClientNum, v38);
            ScriptableInstanceContextSecure::GetOrigin(v39, v38, &outPosition);
            scrTagName = v13->data.sound.scrTagName;
            if ( !scrTagName || ScriptableCl_GetBonePosition(localClientNum, v38, scrTagName, &outPosition, v13->data.rumble.allowMissingTag) || v13->data.anonymous.buffer[41] )
            {
              CG_Rumble_PlayDeferred(localClientNum, v13->data.rumble.rumbleAsset, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, &outPosition, 1.0, 0);
              memset(&outPosition, 0, sizeof(outPosition));
            }
            else
            {
              memset(&outPosition, 0, sizeof(outPosition));
            }
          }
          else
          {
            LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
            if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3538, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
              __debugbreak();
            CG_Rumble_PlayDeferred(localClientNum, v13->data.rumble.rumbleAsset, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, 1.0, 0);
          }
          goto LABEL_14;
        case Scriptable_EventType_Screenshake:
          ScriptableCl_RunStateEventScreenshake(localClientNum, eventParams, onTime, (const ScriptableEventScreenshakeDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_PartDamage:
          v41 = v13->data.partDamage.part;
          if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3663, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
            __debugbreak();
          if ( (v41->flags & 0x100) != 0 )
          {
            v44 = (int)v13->data.wait.delayMax;
            if ( v13->data.anonymous.buffer[8] )
            {
              v44 = -1;
              goto LABEL_89;
            }
            if ( v44 )
LABEL_89:
              ScriptableBg_DamagePart(eventParams, v41, 0x41u, v44);
            if ( v13->data.animation.startTimeMin > 0.0 )
            {
              v45 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
              if ( v13->data.animation.startTimeMax <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3695, ASSERT_TYPE_ASSERT, "(partDamage->intervalDoT > 0.f)", (const char *)&queryFormat, "partDamage->intervalDoT > 0.f") )
                __debugbreak();
              v46 = v13->data.partDamage.eventStreamBufferOffsetClient;
              if ( v46 + 4 > (unsigned __int64)v45->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3699, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
                __debugbreak();
              *(_DWORD *)&v45->eventStreamBuffer[v46] = v13->data.random.eventBCount;
            }
            goto LABEL_14;
          }
          v42 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( v42->def )
            v43 = v42->def->name;
          else
            v43 = "<unknown>";
          Com_PrintError(29, "Scriptable %s tried to damage a part that doesn't have any health states\n", v43);
LABEL_13:
          ScriptableCl_EnterError();
LABEL_14:
          v11 = v90;
$LN8_100:
          Sys_ProfEndNamedEvent();
          v90 = ++v11;
          v12 = ++v94;
          if ( v11 >= numEvents )
            return;
          v10 = v96;
          break;
        case Scriptable_EventType_SetMayhem:
          ScriptableCl_RunStateEventSetMayhem(localClientNum, eventParams, onTime, (const ScriptableEventSetMayhemDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_PlayMayhem:
          v47 = eventParams->scriptableIndex;
          v48 = ScriptableCl_GetInstanceCommonContext(localClientNum, v47);
          v49 = v13->data.playMayhem.eventStreamBufferOffsetClient;
          if ( v49 + 4 > (unsigned __int64)v48->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3780, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          eventStreamBuffer = v48->eventStreamBuffer;
          if ( *(_DWORD *)&eventStreamBuffer[v49] )
          {
            v53 = ScriptableCl_GetLinkObject(localClientNum, v47);
            v54 = ScriptableCl_GetInstanceCommonContext(localClientNum, v47);
            if ( v54->def )
              v55 = v54->def->name;
            else
              v55 = "<unknown>";
            LODWORD(fmt) = v53;
            Com_sprintf(dest, 0x104ui64, "Scriptable-%s-%i", v55, fmt);
            *(_DWORD *)&eventStreamBuffer[v49] = SL_GetString(dest, 0);
            CG_EntityWorkers_EnterCriticalSection_Mayhem(NONE_LEGACY);
            v56.flatId = (unsigned int)v13->data.stateChange.partReference;
            if ( v56.flatId )
            {
              if ( v56.flatId == 1 )
                Mayhem_PauseInstance(*(scr_string_t *)&eventStreamBuffer[v49]);
            }
            else
            {
              Mayhem_PlayInstance(*(scr_string_t *)&eventStreamBuffer[v49]);
            }
            CG_EntityWorkers_LeaveCriticalSection_Mayhem(NONE_LEGACY);
            SL_RemoveRefToString(*(scr_string_t *)&eventStreamBuffer[v49]);
            v7 = v95;
          }
          else
          {
            v51 = ScriptableCl_GetInstanceCommonContext(localClientNum, v47);
            if ( v51->def )
              v52 = v51->def->name;
            else
              v52 = "<unknown>";
            Com_PrintError(29, "Scriptable %s tried to run a playmayhem event, but no mayhem was running for this scriptable\n", v52);
            ScriptableCl_EnterError();
          }
          goto LABEL_14;
        case Scriptable_EventType_ViewmodelShaderParam:
          ScriptableCl_RunStateEventViewmodelShaderParam(localClientNum, eventParams, onTime, (const ScriptableEventViewmodelShaderParamDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ClientViewSelector:
          IsCharacterThirdPerson = ScriptableCl_IsCharacterThirdPerson(localClientNum, eventParams->scriptableIndex);
          if ( (v13->data.anonymous.base->flags & 0x200) != 0 )
          {
            v58 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
            eventStreamBufferOffsetServer = v13->data.random.eventStreamBufferOffsetServer;
            if ( eventStreamBufferOffsetServer + 1 > (unsigned __int64)v58->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4025, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
              __debugbreak();
            v58->eventStreamBuffer[eventStreamBufferOffsetServer] = IsCharacterThirdPerson;
            v11 = v90;
          }
          holdranda = *v7;
          if ( IsCharacterThirdPerson )
          {
            posb = v13->data.random.eventBCount;
            v60 = v13->data.random.eventsB;
          }
          else
          {
            posb = v13->data.stateChange.partReference.flatId;
            v60 = v13->data.random.eventsA;
          }
          ScriptableCl_RunStateEvents_Specific(localClientNum, eventParams, &holdranda, onTime, v60, posb);
          goto $LN8_100;
        case Scriptable_EventType_TeamSelector:
          ScriptableCl_RunStateEventTeamSelector(localClientNum, eventParams, v7, onTime, (const ScriptableEventTeamSelectorDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyForce:
          ScriptableCl_RunStateEventApplyForce(localClientNum, eventParams, v7, onTime, (const ScriptableEventApplyForceDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyAngularForce:
          ScriptableCl_RunStateEventApplyAngularForce(localClientNum, eventParams, v7, onTime, (const ScriptableEventApplyAngularForceDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyConstantForce:
          ScriptableCl_RunStateEventApplyConstantForce(localClientNum, eventParams, v7, onTime, (const ScriptableEventApplyConstantForceDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyConstantAngularForce:
          if ( !v13->data.anonymous.buffer[1] )
          {
            v62 = 0.0;
LABEL_134:
            v64 = 0.0;
            goto LABEL_135;
          }
          v61 = BG_flrand(0.0, 1.0, v7);
          v62 = *(float *)&v61;
          if ( !v13->data.anonymous.buffer[1] )
            goto LABEL_134;
          v63 = BG_flrand(0.0, 1.0, v7);
          v64 = *(float *)&v63;
          if ( v13->data.anonymous.buffer[1] )
          {
            v65 = BG_flrand(0.0, 1.0, v7);
            v66 = *(float *)&v65;
            goto LABEL_136;
          }
LABEL_135:
          v66 = 0.0;
LABEL_136:
          v67 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v68 = v13->data.applyConstantAngularForce.eventStreamBufferOffsetClient;
          v69 = v68;
          if ( v68 + 12 > (unsigned __int64)v67->eventStreamBufferSize )
          {
            LODWORD(v89) = v67->eventStreamBufferSize;
            LODWORD(randSeed) = v68 + 12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4421, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 3 * sizeof( float )", "r_context.eventStreamBufferSize", randSeed, v89) )
              __debugbreak();
          }
          v70 = v67->eventStreamBuffer;
          *(float *)&v70[v69] = v62;
          *(float *)&v70[v69 + 4] = v64;
          *(float *)&v70[v69 + 8] = v66;
          goto LABEL_14;
        case Scriptable_EventType_CompassIcon:
          ScriptableCL_RunStateEventCompassIcon(localClientNum, eventParams, onTime, (const ScriptableEventCompassIconDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_MaterialOverride:
          ScriptableCL_RunStateEventMaterialOverride(localClientNum, eventParams, onTime, (const ScriptableEventMaterialOverrideDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_DynamicBoneNoiseCurve:
          if ( onTime || v13->data.anonymous.buffer[0] )
            ScriptableCl_SetDynamicBoneNoiseCurve(localClientNum, eventParams->scriptableIndex, (const ScriptableEventDynamicBoneNoiseCurveDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Move:
          ScriptableCL_RunStateEventMove(localClientNum, eventParams, onTime, (const ScriptableEventMoveDef *const)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_Footstep:
          v71 = v13->data.anonymous.buffer[26];
          v72 = ScriptableCl_GetLinkObject(localClientNum, eventParams->scriptableIndex);
          v73 = truncate_cast<short,unsigned int>(v72);
          EntityFromObjectId = ScriptableCl_GetEntityFromObjectId(localClientNum, v73);
          CG_EntityWorkers_EnterCriticalSection();
          v75 = v71 & 1;
          if ( v75 )
            leftFootstepVFX = v13->data.footstep.leftFootstepVFX;
          else
            leftFootstepVFX = v13->data.footstep.rightFootstepVFX;
          LOBYTE(fmt) = 1;
          CG_Entity_AddFootstepEvent(localClientNum, v75, EntityFromObjectId, leftFootstepVFX, (TraceGroundSource)fmt, (ScriptableFootstepFlag)(v13->data.anonymous.buffer[26] | 0x80));
          CG_EntityWorkers_LeaveCriticalSection();
          goto LABEL_14;
        case Scriptable_EventType_GravityArc:
          ScriptableCL_RunStateEventGravityArc(localClientNum, eventParams, onTime, (const ScriptableEventGravityArcDef *const)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_ViewTrigger:
          v82 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v83 = v13->data.wait.eventStreamBufferOffsetServer;
          if ( v83 + 1 > (unsigned __int64)v82->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2969, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v82->eventStreamBuffer[v83] = 0;
LABEL_162:
          Sys_ProfEndNamedEvent();
          return;
        case Scriptable_EventType_Objective:
          ScriptableCl_RunStateEventObjective(localClientNum, eventParams, (const ScriptableEventObjectiveDef *)&v13->data);
          goto $LN8_100;
        case Scriptable_EventType_VehicleBlowUpTire:
          ScriptableCl_RunStateVehicleEvent(localClientNum, eventParams, v13);
          goto $LN8_100;
        default:
          LODWORD(pos) = v13->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4916, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableCl_RunStateEvents: Unknown event type %i", pos) )
            __debugbreak();
          goto $LN8_100;
      }
    }
  }
}

/*
==============
ScriptableCl_RunStateVehicleEvent
==============
*/
void ScriptableCl_RunStateVehicleEvent(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, const ScriptableEventDef *eventDef)
{
  __int64 v3; 
  const centity_t *Entity; 
  unsigned int v7; 
  CgVehicleSystem **v8; 
  CgVehicleSystem *v9; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v11; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  __int64 v14; 
  __int64 v15; 

  v3 = localClientNum;
  Entity = ScriptableCl_GetEntity(localClientNum, eventParams->scriptableIndex);
  if ( !Entity )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3058, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "entity is null") )
      return;
    goto LABEL_3;
  }
  if ( (int)v3 >= 0 && (v7 = CgVehicleSystem::ms_allocatedCount, (int)v3 < CgVehicleSystem::ms_allocatedCount) && (v8 = &CgVehicleSystem::ms_vehicleSystemArray[v3], *v8) )
  {
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
        __debugbreak();
      v7 = CgVehicleSystem::ms_allocatedCount;
    }
    if ( (unsigned int)v3 >= v7 )
    {
      LODWORD(v15) = v7;
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !*v8 )
    {
      LODWORD(v15) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v15) )
        __debugbreak();
    }
    v9 = *v8;
  }
  else
  {
    v9 = NULL;
  }
  if ( v9 )
  {
    ClientSafeConst = CgVehicleSystem::GetClientSafeConst(v9, Entity);
    v11 = ClientSafeConst;
    if ( ClientSafeConst && BGVehicles::PhysicsIsValid(ClientSafeConst->physicsId) )
    {
      v12 = v9->PhysicsGetVehiclePhysicsManager(v9);
      ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, v11->physicsId);
      if ( ObjectById )
        ObjectById->ReactToScriptableEvent(ObjectById, eventParams, eventDef);
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3065, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehicleSystem is null") )
  {
LABEL_3:
    __debugbreak();
  }
}

/*
==============
ScriptableCl_SetDynamicBoneNoiseCurve
==============
*/
void ScriptableCl_SetDynamicBoneNoiseCurve(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventDynamicBoneNoiseCurveDef *noise)
{
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  int v9; 
  PlayerHandIndex v10; 
  PlayerHandIndex v11; 
  unsigned int ViewmodelDObjHandle; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  DObj *v16; 
  DObj *DObj; 
  __int64 v18; 
  __int64 v19; 

  if ( !noise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3098, ASSERT_TYPE_ASSERT, "(noise)", (const char *)&queryFormat, "noise") )
    __debugbreak();
  if ( noise->isViewmodel )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3103, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3106, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
    v9 = BG_PlayerDualWieldingWeapon(Instance, &LocalClientGlobals->predictedPlayerState, CurrentWeaponForPlayer);
    v10 = WEAPON_HAND_DEFAULT;
    v11 = v9 != 0;
    do
    {
      ViewmodelDObjHandle = ScriptableCL_GetViewmodelDObjHandle(v10);
      v13 = ViewmodelDObjHandle;
      if ( ViewmodelDObjHandle > 0x9E4 )
      {
        LODWORD(v19) = ViewmodelDObjHandle;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v19) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v19) = 2;
        LODWORD(v18) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v14 = 2533 * localClientNum + v13;
      if ( v14 >= 0x13CA )
      {
        LODWORD(v19) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v19) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( v15 )
      {
        if ( v15 >= (unsigned int)s_objCount )
        {
          LODWORD(v19) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v19) )
            __debugbreak();
        }
        v16 = (DObj *)s_objBuf[v15];
        if ( v16 )
          XAnimBonePhysics_SetCurveState(v16, noise->curve, noise->strengthMultiplier, noise->rateMultiplier);
      }
      ++v10;
    }
    while ( v10 <= v11 );
  }
  else
  {
    if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3127, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
      __debugbreak();
    DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
    if ( DObj )
      XAnimBonePhysics_SetCurveState(DObj, noise->curve, noise->strengthMultiplier, noise->rateMultiplier);
  }
}

/*
==============
ScriptableCl_SetViewmodelShaderParam
==============
*/
void ScriptableCl_SetViewmodelShaderParam(shaderOverride_t *shaderOverride, const ScriptableEventViewmodelShaderParamDef *viewmodelShaderParam, const Scriptable_EventViewmodelShaderParam_Data *data, float blendAmount)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3883, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  ScriptableCl_SetViewmodelShaderParam_Internal(shaderOverride, viewmodelShaderParam, (float)((float)(1.0 - blendAmount) * data->startFloatValue) + (float)(blendAmount * data->targetFloatValue));
}

/*
==============
ScriptableCl_SetViewmodelShaderParam_Internal
==============
*/
void ScriptableCl_SetViewmodelShaderParam_Internal(shaderOverride_t *shaderOverride, const ScriptableEventViewmodelShaderParamDef *viewmodelShaderParam, const float value)
{
  CG_EntityWorkers_EnterCriticalSection_ViewModel(NONE_LEGACY);
  switch ( viewmodelShaderParam->shaderParam )
  {
    case Scriptable_ShaderParamType_ScrollRate_X:
      shaderOverride->scrollRateX = value;
      break;
    case Scriptable_ShaderParamType_ScrollRate_Y:
      shaderOverride->scrollRateY = value;
      break;
    case Scriptable_ShaderParamType_ScrollRate_R:
      shaderOverride->scrollRateR = value;
      break;
    case Scriptable_ShaderParamType_Rotation:
      shaderOverride->rotation = value;
      break;
    case Scriptable_ShaderParamType_Tiling_X:
      shaderOverride->tilingX = value;
      break;
    case Scriptable_ShaderParamType_Tiling_Y:
      shaderOverride->tilingY = value;
      break;
    case Scriptable_ShaderParamType_Alpha:
      shaderOverride->alpha = value;
      break;
    case Scriptable_ShaderParamType_Emissive:
      shaderOverride->emissive = value;
      break;
    case Scriptable_ShaderParamType_AtlasFrame:
    case Scriptable_ShaderParamType_Placeholder1:
      shaderOverride->atlasTime = value;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3874, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableCl_SetViewmodelShaderParam_Internal passed invalid shaderParam. This should be caught by a Com_Error in the calling function.") )
        __debugbreak();
      break;
  }
  CG_EntityWorkers_LeaveCriticalSection_ViewModel(NONE_LEGACY);
}

/*
==============
ScriptableCl_ShutdownActiveEvents
==============
*/
void ScriptableCl_ShutdownActiveEvents(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams)
{
  unsigned int scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  double v7; 
  double v8; 
  double v9; 
  ScriptableInstanceContextSecure *v10; 
  const char *name; 
  ScriptableStateDef *v12; 
  vec3_t outOrigin; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5292, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5298, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  if ( PartRuntime->stateId >= eventParams->partDef->numStates )
  {
    v7 = outOrigin.v[2];
    v8 = outOrigin.v[1];
    v9 = outOrigin.v[0];
    v10 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v10->def )
      name = v10->def->name;
    else
      name = "<unknown>";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5304, ASSERT_TYPE_ASSERT, "(runtime->stateId < eventParams->partDef->numStates)", "%s\n\tState index invalid %i < %i for part %i in %s at [%.2f, %.2f, %.2f]", "runtime->stateId < eventParams->partDef->numStates", PartRuntime->stateId, eventParams->partDef->numStates, eventParams->partDef->flatId, name, v9, v8, v7) )
      __debugbreak();
  }
  v12 = &eventParams->partDef->states[PartRuntime->stateId];
  ScriptableCl_StopStateEvents(localClientNum, eventParams, v12->base.events, v12->base.numEvents);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_StateEventAnimationGetData
==============
*/
Scriptable_EventAnimation_Data_MP *ScriptableCl_StateEventAnimationGetData(ScriptableInstanceContextSecure *const context, const ScriptableEventAnimationDef *const animDef)
{
  __int64 eventStreamBufferOffsetClient; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 721, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !animDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 722, ASSERT_TYPE_ASSERT, "(animDef)", (const char *)&queryFormat, "animDef") )
    __debugbreak();
  eventStreamBufferOffsetClient = animDef->eventStreamBufferOffsetClient;
  if ( eventStreamBufferOffsetClient + 12 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 725, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventAnimation_Data_MP ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventAnimation_Data_MP ) <= context->eventStreamBufferSize") )
    __debugbreak();
  return (Scriptable_EventAnimation_Data_MP *)&context->eventStreamBuffer[eventStreamBufferOffsetClient];
}

/*
==============
ScriptableCl_StateEventGravityArcGetData
==============
*/
unsigned __int8 *ScriptableCl_StateEventGravityArcGetData(ScriptableInstanceContextSecure *const context, const ScriptableEventGravityArcDef *const def)
{
  __int64 eventStreamBufferOffsetServer; 

  if ( (!context || !def) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2534, ASSERT_TYPE_ASSERT, "( context && def )", (const char *)&queryFormat, "context && def") )
    __debugbreak();
  eventStreamBufferOffsetServer = def->eventStreamBufferOffsetServer;
  if ( eventStreamBufferOffsetServer + 4 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2537, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( int ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( int ) <= context->eventStreamBufferSize") )
    __debugbreak();
  return &context->eventStreamBuffer[eventStreamBufferOffsetServer];
}

/*
==============
ScriptableCl_StopLootFX
==============
*/
void ScriptableCl_StopLootFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const bool kill)
{
  unsigned int LinkObject; 
  ParticleSystemHandle ParticleSystemHandle; 
  ParticleManager *ParticleManager; 

  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_CLIENTMODEL )
  {
    LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
    ParticleSystemHandle = CG_ClientModel_GetParticleSystemHandle(localClientNum, LinkObject);
    if ( ParticleSystemHandle )
    {
      ParticleManager = ParticleManager::GetParticleManager(localClientNum);
      if ( kill )
        ParticleManager::KillSystem(ParticleManager, ParticleSystemHandle);
      else
        ParticleManager::StopSystem(ParticleManager, ParticleSystemHandle);
      CG_ClientModel_SetParticleSystemHandle(localClientNum, LinkObject, PARTICLE_SYSTEM_INVALID_HANDLE);
    }
  }
}

/*
==============
ScriptableCl_StopStateEventDisablePhysicsSubShape
==============
*/
void ScriptableCl_StopStateEventDisablePhysicsSubShape(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, const ScriptableEventDisablePhysicsSubShapeDef *disablePhysicsSubShape)
{
  unsigned int scriptableIndex; 
  int LinkObject; 
  __int32 v8; 
  int v9; 
  ScriptableLinkType LinkType; 
  unsigned int PhysicsInstance; 
  CG_PhysicsObject *v12; 
  const char *mutableShapeName; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  int v16; 
  const char *v17; 
  ScriptableInstanceContextSecure *v18; 
  const char *v19; 
  Physics_WorldId v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int RigidBodyID; 
  unsigned int v24; 
  int v25; 
  const char *v26; 
  ScriptableInstanceContextSecure *v27; 
  const char *v28; 
  char *fmt; 
  unsigned __int16 shapeInstanceId; 
  int bodyIdx; 
  Physics_WorldId worldId; 

  scriptableIndex = eventParams->scriptableIndex;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  v8 = 3 * localClientNum;
  worldId = 3 * localClientNum + 2;
  v9 = -1;
  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    v12 = CG_PhysicsObject_Get(LinkObject, localClientNum);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1147, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v9 = v12->physicsInstances[v8 + 2];
    PhysicsInstance = v12->physicsInstances[v8 + 3];
  }
  else
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT )
      return;
    PhysicsInstance = DynEnt_GetPhysicsInstance(LinkObject, DYNENT_BASIS_MODEL, localClientNum);
  }
  if ( PhysicsInstance == -1 )
  {
    if ( v9 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1168, ASSERT_TYPE_ASSERT, "(predictiveInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "predictiveInstance == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( !disablePhysicsSubShape->allowMissingShape )
    {
      mutableShapeName = disablePhysicsSubShape->mutableShapeName;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      Com_PrintError(29, "Scriptable %s tried to stop disabling sub-shape %s and there was no physics instance\n", name, mutableShapeName);
      ScriptableCl_EnterError();
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    Physics_DecodeSubShapeKey((Physics_WorldId)(v8 + 3), PhysicsInstance, disablePhysicsSubShape->mutableShapeHash, &bodyIdx, &shapeInstanceId);
    v16 = bodyIdx;
    if ( bodyIdx >= 0 )
    {
      if ( v9 == -1 )
      {
        v20 = worldId;
        v21 = 0xFFFFFF;
      }
      else
      {
        v22 = v9;
        v20 = worldId;
        RigidBodyID = Physics_GetRigidBodyID(worldId, v22, bodyIdx);
        v16 = bodyIdx;
        v21 = RigidBodyID;
      }
      v24 = Physics_GetRigidBodyID((const Physics_WorldId)(v8 + 3), PhysicsInstance, v16);
      if ( (v24 & 0xFFFFFF) == 0xFFFFFF )
      {
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        if ( !disablePhysicsSubShape->allowMissingShape )
        {
          v25 = bodyIdx;
          v26 = disablePhysicsSubShape->mutableShapeName;
          v27 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( v27->def )
            v28 = v27->def->name;
          else
            v28 = "<unknown>";
          LODWORD(fmt) = v25;
          Com_PrintError(29, "Scriptable %s tried to stop disabling sub-shape %s and the decoded rigid body idx %i could not be found\n", v28, v26, fmt);
          ScriptableCl_EnterError();
        }
      }
      else
      {
        if ( (v21 & 0xFFFFFF) != 0xFFFFFF )
          Physics_EnableShapeInstance(v20, v21, shapeInstanceId, 1);
        Physics_EnableShapeInstance((Physics_WorldId)(v8 + 3), v24, shapeInstanceId, 1);
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
      }
    }
    else
    {
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
      if ( !disablePhysicsSubShape->allowMissingShape )
      {
        v17 = disablePhysicsSubShape->mutableShapeName;
        v18 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
        if ( v18->def )
          v19 = v18->def->name;
        else
          v19 = "<unknown>";
        Com_PrintError(29, "Scriptable %s tried to stop disabling sub-shape %s and the name could not be decoded\n", v19, v17);
        ScriptableCl_EnterError();
      }
    }
  }
}

/*
==============
ScriptableCl_StopStateEventParticleFX
==============
*/
void ScriptableCl_StopStateEventParticleFX(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, const ScriptableEventPFXDef *particleFX)
{
  __int64 v4; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v8; 
  unsigned __int8 *v9; 
  ParticleManager *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  ParticleSystem *v14; 
  __int64 v15; 
  const dvar_t *v16; 
  const ParticleSystemDef *Def; 
  const char *name; 
  const ParticleSystemDef *particleSystemDef; 
  int v20; 
  const char *v21; 
  ScriptableInstanceContextSecure *v22; 
  const char *v23; 
  ScriptableInstanceContextSecure *v24; 
  const char *v25; 
  const ParticleSystemDef *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  ParticleManager *ParticleManager; 
  char _Buffer[256]; 

  v4 = localClientNum;
  if ( particleFX->oneshotLooping && particleFX->effectDef.particleSystemDef )
  {
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = particleFX->eventStreamBufferOffsetClient;
    v8 = InstanceCommonContext;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5052, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    v9 = &v8->eventStreamBuffer[eventStreamBufferOffsetClient];
    ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v4);
    v10 = ParticleManager;
    if ( !ParticleManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5059, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
      __debugbreak();
    v11 = v4 << 12;
    v12 = 2i64;
    v29 = 2i64;
    do
    {
      v13 = 0;
      if ( g_particleSystemsGeneration[v11 + (*(_DWORD *)v9 & 0xFFF)].__all32 == *(_DWORD *)v9 )
        v13 = *(_DWORD *)v9 & 0xFFF;
      v14 = NULL;
      v15 = v11 + v13;
      if ( g_particleSystems[0][v15] >= (ParticleSystem *)0x1000 )
        v14 = g_particleSystems[0][v15];
      if ( v14 )
      {
        v16 = DVARBOOL_scriptable_particle_event_debug;
        if ( !DVARBOOL_scriptable_particle_event_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_particle_event_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          Def = ParticleSystem::GetDef(v14);
          if ( Def )
            name = Def->name;
          else
            name = "Unknown";
          particleSystemDef = particleFX->effectDef.particleSystemDef;
          v20 = *(_DWORD *)v9;
          if ( particleSystemDef )
            v21 = particleSystemDef->name;
          else
            v21 = "Unknown";
          v22 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex);
          if ( v22->def )
            v23 = v22->def->name;
          else
            v23 = "<unknown>";
          LODWORD(v27) = v20;
          j_sprintf(_Buffer, "Scriptable\t%s\t%i\tStop-Particle\t%s\t%i\t%s\n", v23, scriptableIndex, v21, v27, name);
          Com_PrintMessage(29, _Buffer, 0);
          v10 = ParticleManager;
          v12 = v29;
        }
        if ( !v14->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
          __debugbreak();
        if ( particleFX->effectDef.particleSystemDef != v14->m_pSystemDef )
        {
          v24 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex);
          v25 = v24->def ? v24->def->name : "<unknown>";
          v26 = ParticleSystem::GetDef(v14);
          LODWORD(v28) = *(_DWORD *)v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5089, ASSERT_TYPE_ASSERT, "(particleFX->effectDef.particleSystemDef == particleSystem->GetDef())", "%s\n\tScriptable particle FX def %s does not match handle %i effect def %s in scriptable %s\n", "particleFX->effectDef.particleSystemDef == particleSystem->GetDef()", particleFX->effectDef.particleSystemDef->name, v28, v26->name, v25) )
            __debugbreak();
        }
        if ( particleFX->killOnExit )
          ParticleManager::KillSystem(v10, v14);
        else
          ParticleManager::StopSystem(v10, v14);
        v11 = v4 << 12;
      }
      *(_DWORD *)v9 = 0;
      v9 += 4;
      v29 = --v12;
    }
    while ( v12 );
  }
}

/*
==============
ScriptableCl_StopStateEvents
==============
*/
void ScriptableCl_StopStateEvents(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, ScriptableEventDef *events, unsigned int numEvents)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  Scriptable_EventType *p_type; 
  __int64 v10; 
  const char *EventTypeName; 
  const char *v12; 
  __int64 v13; 
  const ScriptableEventParams *v14; 
  LocalClientNum_t v15; 
  unsigned int v16; 
  ScriptableEventDef *v17; 
  unsigned int scriptableIndex; 
  const DObj *DObj; 
  XAnimTree *Tree; 
  unsigned int v21; 
  unsigned int v22; 
  ScriptableInstanceContextSecure *v23; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  unsigned int v25; 
  ScriptableInstanceContextSecure *v26; 
  __int64 v27; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int LinkObject; 
  ScriptableInstanceContextSecure *v30; 
  const char *name; 
  scr_string_t String; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int v38; 
  DObj *ClientDObj; 
  DObj *v40; 
  unsigned __int16 entnum; 
  char *fmt; 
  ScriptableInstanceContextSecure *v43; 
  ScriptableGravityArcRuntimeData arcData; 
  char dest[280]; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
  v43 = InstanceCommonContext;
  if ( numEvents )
  {
    p_type = &events->type;
    v10 = numEvents;
    do
    {
      EventTypeName = ScriptableBg_GetEventTypeName(*p_type);
      v12 = j_va("ScriptableCl_StopEvent %s", EventTypeName);
      Sys_ProfBeginNamedEvent(0xFFD2691E, v12);
      switch ( *p_type )
      {
        case Scriptable_EventType_Random:
          v13 = *((unsigned __int16 *)p_type + 25);
          if ( v13 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5160, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v14 = eventParams;
          v15 = localClientNum;
          if ( !InstanceCommonContext->eventStreamBuffer[v13] )
            goto LABEL_46;
          v16 = *((_DWORD *)p_type + 5);
          goto LABEL_9;
        case Scriptable_EventType_Collision:
          if ( *((_BYTE *)p_type + 35) )
          {
            ScriptableCl_DestroyCollision(localClientNum, eventParams->scriptableIndex);
            ScriptableCl_GetInstanceCollisionContext(localClientNum, eventParams->scriptableIndex)->collisionActiveFlags = 0;
          }
          break;
        case Scriptable_EventType_Animation:
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
          {
            scriptableIndex = eventParams->scriptableIndex;
            if ( ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) )
            {
              if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4988, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
                __debugbreak();
              DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
              if ( DObj )
              {
                Tree = DObjGetTree(DObj);
                if ( Tree )
                {
                  v21 = *((unsigned __int16 *)p_type + 36);
                  if ( *((_BYTE *)p_type + 26) )
                    XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v21, 0.0);
                  else
                    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v21, *((float *)p_type + 12), LINEAR);
                }
              }
            }
          }
          break;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableCl_StopStateEventDisablePhysicsSubShape(localClientNum, eventParams, (const ScriptableEventDisablePhysicsSubShapeDef *)(p_type + 2));
          break;
        case Scriptable_EventType_NoteTrack:
          InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, eventParams->scriptableIndex);
          if ( (Scriptable_EventType *)InstanceNoteTrackContext->currentNoteTracks == p_type + 2 )
          {
            InstanceNoteTrackContext->currentNoteTracks = NULL;
            InstanceNoteTrackContext->currentNoteTrackPartDef = NULL;
          }
          break;
        case Scriptable_EventType_PFX:
          ScriptableCl_StopStateEventParticleFX(localClientNum, eventParams, (const ScriptableEventPFXDef *)(p_type + 2));
          break;
        case Scriptable_EventType_SetMayhem:
          v25 = eventParams->scriptableIndex;
          v26 = ScriptableCl_GetInstanceCommonContext(localClientNum, v25);
          v27 = *((unsigned __int16 *)p_type + 12);
          if ( v27 + 4 > (unsigned __int64)v26->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5114, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          eventStreamBuffer = v26->eventStreamBuffer;
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, v25);
          v30 = ScriptableCl_GetInstanceCommonContext(localClientNum, v25);
          if ( v30->def )
            name = v30->def->name;
          else
            name = "<unknown>";
          LODWORD(fmt) = LinkObject;
          Com_sprintf(dest, 0x104ui64, "Scriptable-%s-%i", name, fmt);
          String = SL_GetString(dest, 0);
          *(_DWORD *)&eventStreamBuffer[v27] = String;
          if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5126, ASSERT_TYPE_ASSERT, "(*mayhemId != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*mayhemId != NULL_SCR_STRING") )
            __debugbreak();
          CG_EntityWorkers_EnterCriticalSection_Mayhem(NONE_LEGACY);
          if ( Mayhem_DoesInstanceExist(*(scr_string_t *)&eventStreamBuffer[v27]) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5128, ASSERT_TYPE_ASSERT, "(Mayhem_DoesInstanceExist( *mayhemId ) == qtrue)", (const char *)&queryFormat, "Mayhem_DoesInstanceExist( *mayhemId ) == qtrue") )
            __debugbreak();
          Mayhem_KillInstance(*(scr_string_t *)&eventStreamBuffer[v27]);
          CG_EntityWorkers_LeaveCriticalSection_Mayhem(NONE_LEGACY);
          SL_RemoveRefToString(*(scr_string_t *)&eventStreamBuffer[v27]);
          *(_DWORD *)&eventStreamBuffer[v27] = 0;
          InstanceCommonContext = v43;
          break;
        case Scriptable_EventType_ClientViewSelector:
          v33 = *((unsigned __int16 *)p_type + 24);
          if ( v33 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5219, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v14 = eventParams;
          v15 = localClientNum;
          if ( InstanceCommonContext->eventStreamBuffer[v33] )
          {
LABEL_46:
            v16 = *((_DWORD *)p_type + 8);
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 5);
          }
          else
          {
            v16 = *((_DWORD *)p_type + 4);
LABEL_9:
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 3);
          }
          goto LABEL_10;
        case Scriptable_EventType_TeamSelector:
          v34 = *((unsigned __int16 *)p_type + 28);
          if ( v34 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5242, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v14 = eventParams;
          v15 = localClientNum;
          if ( InstanceCommonContext->eventStreamBuffer[v34] )
          {
            v16 = *((_DWORD *)p_type + 6);
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 4);
          }
          else
          {
            v16 = *((_DWORD *)p_type + 10);
            v17 = (ScriptableEventDef *)*((_QWORD *)p_type + 6);
          }
LABEL_10:
          ScriptableCl_StopStateEvents(v15, v14, v17, v16);
          break;
        case Scriptable_EventType_MaterialOverride:
          v35 = eventParams->scriptableIndex;
          Entity = ScriptableCl_GetEntity(localClientNum, v35);
          if ( Entity )
          {
            if ( Entity->nextState.eType != ET_SCRIPTMOVER || (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) == 0 || (otherEntityNum = Entity->nextState.otherEntityNum, otherEntityNum == 2047) )
            {
              v38 = ScriptableCl_GetLinkObject(localClientNum, v35);
              otherEntityNum = truncate_cast<short,unsigned int>(v38);
            }
            ClientDObj = Com_GetClientDObj(otherEntityNum, localClientNum);
            v40 = ClientDObj;
            if ( ClientDObj )
            {
              entnum = ClientDObj->entnum;
              if ( *((_DWORD *)p_type + 4) == 1 )
              {
                DObjFreeMaterialOverrides(ClientDObj);
                DObjFreeMaterialData(v40);
              }
              R_RemoveScriptableEntityData(localClientNum, entnum);
              InstanceCommonContext = v43;
            }
          }
          break;
        case Scriptable_EventType_GravityArc:
          v22 = eventParams->scriptableIndex;
          v23 = ScriptableCl_GetInstanceCommonContext(localClientNum, v22);
          *((_BYTE *)v23 + 61) &= ~2u;
          ScriptableCl_GravityArcCalcData(localClientNum, v22, v23, (const ScriptableEventGravityArcDef *const)(p_type + 2), &arcData);
          ScriptableCL_StateEventMovePhysicsClearVelocity(localClientNum, v22);
          ScriptableCL_SetPose(localClientNum, v22, v23, &arcData.endOrigin, &arcData.endAngles, 1);
          InstanceCommonContext = v43;
          break;
        case Scriptable_EventType_Objective:
          CG_EntityWorkers_EnterCriticalSection_ScriptableCl(NONE_LEGACY);
          ScriptableCl_ObjectiveRemove(localClientNum, eventParams->scriptableIndex);
          CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(NONE_LEGACY);
          break;
        default:
          break;
      }
      Sys_ProfEndNamedEvent();
      p_type += 44;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
ScriptableCl_UpdateCollisionActivation
==============
*/
void ScriptableCl_UpdateCollisionActivation(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  ScriptableCollisionClientContext *v5; 
  unsigned __int8 collisionActiveFlags; 
  char v7; 
  Scriptable_Analytics_Zone v8; 
  Scriptable_Analytics_Zone AnalyticsZoneForScriptable; 

  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_UpdateCollisionActivation");
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  v5 = InstanceCollisionContext;
  collisionActiveFlags = InstanceCollisionContext->collisionActiveFlags;
  v7 = collisionActiveFlags & 8;
  if ( (collisionActiveFlags & 8) != 0 || InstanceCollisionContext->scriptableCollisionAuthoritative != -1 || InstanceCollisionContext->scriptableCollisionPredictive != -1 )
  {
    if ( (collisionActiveFlags & 1) != 0 )
    {
      if ( (collisionActiveFlags & 4) != 0 )
      {
        if ( (collisionActiveFlags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6942, ASSERT_TYPE_ASSERT, "((r_collisionContext.collisionActiveFlags & SCRIPTABLE_CLIENT_COLLISION_ACTIVATION_REQUESTED) == 0)", (const char *)&queryFormat, "(r_collisionContext.collisionActiveFlags & SCRIPTABLE_CLIENT_COLLISION_ACTIVATION_REQUESTED) == 0", -2i64) )
          __debugbreak();
        if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6943, ASSERT_TYPE_ASSERT, "(!createCollisionsDeferred)", (const char *)&queryFormat, "!createCollisionsDeferred") )
          __debugbreak();
        Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_UpdateCollisionActivation - deactivate");
        CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
        if ( v5->scriptableCollisionPredictive != -1 )
        {
          Physics_RemoveInstanceFromWorld((Physics_WorldId)(3 * localClientNum + 2), v5->scriptableCollisionPredictive, 0);
          if ( Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 2), v5->scriptableCollisionPredictive, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6951, ASSERT_TYPE_ASSERT, "(!Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true ))", (const char *)&queryFormat, "!Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true )") )
            __debugbreak();
        }
        if ( v5->scriptableCollisionAuthoritative != -1 )
        {
          if ( v5->scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6955, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          Physics_RemoveInstanceFromWorld((Physics_WorldId)(3 * localClientNum + 3), v5->scriptableCollisionAuthoritative, 0);
          if ( Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 3), v5->scriptableCollisionAuthoritative, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6957, ASSERT_TYPE_ASSERT, "(!Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true ))", (const char *)&queryFormat, "!Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true )") )
            __debugbreak();
          Physics_RemoveInstanceFromWorld((Physics_WorldId)(3 * localClientNum + 4), v5->scriptableCollisionDetail, 0);
          if ( Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 4), v5->scriptableCollisionDetail, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6959, ASSERT_TYPE_ASSERT, "(!Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true ))", (const char *)&queryFormat, "!Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true )") )
            __debugbreak();
        }
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        v5->collisionActiveFlags = 16;
        AnalyticsZoneForScriptable = (unsigned int)ScriptableCl_GetAnalyticsZoneForScriptable(localClientNum, scriptableIndex);
        Scriptable_Analytics_AddClientCollisionActivationCount(AnalyticsZoneForScriptable, -1);
        Sys_ProfEndNamedEvent();
      }
    }
    else if ( (collisionActiveFlags & 2) != 0 )
    {
      if ( (collisionActiveFlags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6907, ASSERT_TYPE_ASSERT, "((r_collisionContext.collisionActiveFlags & SCRIPTABLE_CLIENT_COLLISION_DEACTIVATION_REQUESTED) == 0)", (const char *)&queryFormat, "(r_collisionContext.collisionActiveFlags & SCRIPTABLE_CLIENT_COLLISION_DEACTIVATION_REQUESTED) == 0", -2i64) )
        __debugbreak();
      if ( v7 )
      {
        ScriptableCl_CreateCollisionPhysicsInstances(localClientNum, scriptableIndex, 1, 0, 1);
      }
      else
      {
        Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_UpdateCollisionActivation - activate");
        CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
        if ( v5->scriptableCollisionPredictive != -1 )
        {
          Physics_AddInstanceToWorld((Physics_WorldId)(3 * localClientNum + 2), v5->scriptableCollisionPredictive, 0, 1);
          if ( !Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 2), v5->scriptableCollisionPredictive, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6921, ASSERT_TYPE_ASSERT, "(Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true ))", (const char *)&queryFormat, "Physics_IsInstanceInWorld( Physics_GetClientPredictiveWorldId( localClientNum ), r_collisionContext.scriptableCollisionPredictive, true )") )
            __debugbreak();
        }
        if ( v5->scriptableCollisionAuthoritative != -1 )
        {
          if ( v5->scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6925, ASSERT_TYPE_ASSERT, "(r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          Physics_AddInstanceToWorld((Physics_WorldId)(3 * localClientNum + 3), v5->scriptableCollisionAuthoritative, 0, 1);
          if ( !Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 3), v5->scriptableCollisionAuthoritative, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6927, ASSERT_TYPE_ASSERT, "(Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true ))", (const char *)&queryFormat, "Physics_IsInstanceInWorld( Physics_GetClientAuthoritativeWorldId( localClientNum ), r_collisionContext.scriptableCollisionAuthoritative, true )") )
            __debugbreak();
          Physics_AddInstanceToWorld((Physics_WorldId)(3 * localClientNum + 4), v5->scriptableCollisionDetail, 0, 1);
          if ( !Physics_IsInstanceInWorld((Physics_WorldId)(3 * localClientNum + 4), v5->scriptableCollisionDetail, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6929, ASSERT_TYPE_ASSERT, "(Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true ))", (const char *)&queryFormat, "Physics_IsInstanceInWorld( Physics_GetClientDetailWorldId( localClientNum ), r_collisionContext.scriptableCollisionDetail, true )") )
            __debugbreak();
        }
        CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        v5->collisionActiveFlags = 1;
        v8 = (unsigned int)ScriptableCl_GetAnalyticsZoneForScriptable(localClientNum, scriptableIndex);
        Scriptable_Analytics_AddClientCollisionActivationCount(v8, 1);
        Sys_ProfEndNamedEvent();
      }
    }
  }
  v5->collisionActiveFlags &= 0xF9u;
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_UpdateEvent
==============
*/
void ScriptableCl_UpdateEvent(const float deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, unsigned int *holdrand, ScriptableUpdateRequest *inOutRequest)
{
  __int64 v11; 
  ScriptableUpdateRequest *v13; 
  const char *EventTypeName; 
  const char *v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *eventStreamBuffer; 
  float v19; 
  unsigned __int8 *v20; 
  unsigned int v21; 
  const ScriptableEventDef *v22; 
  ScriptableEventDef *v23; 
  DObj *DObj; 
  DObj *v25; 
  XAnimTree *Tree; 
  XAnimOwner v27; 
  centity_t *Entity; 
  XAnim_s *v29; 
  cg_t *LocalClientGlobals; 
  cg_t *v31; 
  playerState_s *p_predictedPlayerState; 
  int v33; 
  char v34; 
  unsigned int index; 
  Scriptable_EventAnimation_Data_MP *Data; 
  float playBackRate; 
  float v38; 
  float v39; 
  double Length; 
  float v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  double v47; 
  unsigned __int8 v48; 
  bool v49; 
  bool v50; 
  __int64 v52; 
  unsigned __int8 *v53; 
  float v54; 
  float v55; 
  int v56; 
  ParticleSystem *v57; 
  unsigned int v58; 
  __int64 v59; 
  ScriptableInstanceContextSecure *v60; 
  const char *name; 
  centity_t *v63; 
  __int64 beamBoneAxis; 
  float v66; 
  __m128 v; 
  __m128 v72; 
  __int64 v75; 
  __int128 v77; 
  __int64 v80; 
  const Scriptable_EventLight_Data *v81; 
  int time; 
  __int128 v84; 
  float v86; 
  GfxWorld *world; 
  unsigned int v88; 
  __int64 v89; 
  __int64 v90; 
  float *p_type; 
  const ComPrimaryLight *PrimaryLight; 
  __int128 v93; 
  Scriptable_EventSun_Data *v98; 
  int v99; 
  __int128 v101; 
  float v103; 
  double v104; 
  __int64 v109; 
  unsigned __int8 *v110; 
  float v111; 
  float v112; 
  ScriptableEventDef *eventsB; 
  cg_t *v114; 
  centity_t *v115; 
  characterInfo_t *CharacterInfo; 
  __int64 v117; 
  const Scriptable_EventViewmodelShaderParam_Data *v118; 
  float v119; 
  double v120; 
  float v121; 
  DObj *v124; 
  __int64 v125; 
  unsigned int eventBCount; 
  ScriptableEventDef *eventsA; 
  unsigned int v128; 
  ScriptableEventDef *v129; 
  unsigned int v130; 
  const ScriptableEventDef *v131; 
  DObj *v132; 
  unsigned int LinkObject; 
  unsigned __int64 v134; 
  DObj *v135; 
  unsigned int eventPassCount; 
  ScriptableEventDef *eventsPass; 
  unsigned int v138; 
  const ScriptableEventDef *v139; 
  unsigned int v140; 
  const ScriptableEventDef *v141; 
  bool v142; 
  bool v143; 
  ScriptableInstanceContextSecure *v144; 
  float v145; 
  float v146; 
  char *fmt; 
  ScriptableEventDef *v148; 
  __int64 rate; 
  char IsCharacterThirdPerson; 
  char DoesTeamMatch; 
  bool v152; 
  unsigned int pHoldrand; 
  unsigned __int8 *v154; 
  __int64 v155; 
  DObj *obj[2]; 
  float4 endPos; 
  float4 startPos; 
  tmat43_t<vec3_t> outTransform; 

  v155 = -2i64;
  v11 = localClientNum;
  startPos.v.m128_u64[0] = (unsigned __int64)holdrand;
  v13 = inOutRequest;
  obj[0] = (DObj *)inOutRequest;
  if ( !event && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5374, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
    __debugbreak();
  EventTypeName = ScriptableBg_GetEventTypeName(event->type);
  v15 = j_va("ScriptableCl_UpdateEvent %s", EventTypeName);
  Sys_ProfBeginNamedEvent(0xFFD2691E, v15);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v11, scriptableIndex);
  switch ( event->type )
  {
    case Scriptable_EventType_Wait:
      eventStreamBufferOffsetClient = event->data.wait.eventStreamBufferOffsetClient;
      if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5386, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
      v19 = *(float *)&eventStreamBuffer[eventStreamBufferOffsetClient];
      if ( v19 > 0.0 )
      {
        *(float *)&eventStreamBuffer[eventStreamBufferOffsetClient] = v19 - deltaTime;
        if ( (float)(v19 - deltaTime) <= 0.0 )
        {
          *(_DWORD *)&eventStreamBuffer[eventStreamBufferOffsetClient] = 0;
          ScriptableCl_RunStateEventsFrom((const LocalClientNum_t)v11, scriptableIndex, part, eventIdx + 1, (unsigned int *)startPos.v.m128_u64[0]);
        }
        *inOutRequest = (ScriptableUpdateRequest)257;
      }
      goto LABEL_341;
    case Scriptable_EventType_Random:
      obj[0] = (DObj *)event->data.random.eventStreamBufferOffsetClient;
      if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5421, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      v20 = InstanceCommonContext->eventStreamBuffer;
      v21 = 0;
      if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)v20) )
      {
        if ( event->data.stateChange.stateIdx )
        {
          while ( 1 )
          {
            v22 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v21);
            if ( (v22->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v22, v21, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v21 >= event->data.stateChange.stateIdx )
              goto LABEL_341;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5438, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_320;
        }
      }
      else if ( event->data.random.eventBCount )
      {
        while ( 1 )
        {
          v23 = &event->data.random.eventsB[v21];
          if ( (v23->base.flags & 0x200) != 0 )
          {
            ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v23, v21, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
            if ( inOutRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v21 >= event->data.random.eventBCount )
            goto LABEL_341;
        }
        if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5455, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
          goto LABEL_320;
      }
      goto LABEL_341;
    case Scriptable_EventType_Animation:
      inOutRequest->eventUpdateRequired = 1;
      if ( ScriptableCl_GetDObjSafe((const LocalClientNum_t)v11, scriptableIndex) )
      {
        if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v11, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5475, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        DObj = ScriptableCl_GetDObj((const LocalClientNum_t)v11, scriptableIndex);
        v25 = DObj;
        obj[0] = DObj;
        if ( DObj && InstanceCommonContext->def->animationTreeDef[0] )
        {
          Tree = DObjGetTree(DObj);
          if ( Tree )
            goto LABEL_54;
          if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v11, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
          {
            Entity = ScriptableCl_GetEntity((const LocalClientNum_t)v11, scriptableIndex);
            if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5495, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
              __debugbreak();
            v29 = InstanceCommonContext->def->animationTreeDef[0];
            if ( v29 && v29->initialized )
            {
              LOBYTE(v27) = 1;
              Tree = Com_XAnimCreateSmallTree(v29, v27);
              DObjSetTree(v25, Tree);
              if ( Entity->nextState.eType == ET_SCRIPTMOVER )
              {
                if ( Entity->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5511, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                  __debugbreak();
              }
              else
              {
                if ( Entity->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5506, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                  __debugbreak();
                Entity->tree = Tree;
              }
              if ( Tree )
              {
LABEL_54:
                LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
                if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5524, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                  __debugbreak();
                v31 = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
                p_predictedPlayerState = &v31->predictedPlayerState;
                if ( v31 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5527, ASSERT_TYPE_ASSERT, "(ps != nullptr)", (const char *)&queryFormat, "ps != nullptr") )
                  __debugbreak();
                v33 = ScriptableCl_GetFrameServerTime((const LocalClientNum_t)v11) - p_predictedPlayerState->deltaTime;
                if ( LocalClientGlobals->inKillCam )
                  goto LABEL_66;
                if ( (unsigned int)v11 >= 2 )
                {
                  LODWORD(v148) = v11;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 176, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrameKillCamTransition ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrameKillCamTransition\n\t%i not in [0, %i)", v148, 2) )
                    __debugbreak();
                }
                if ( !g_scriptableFrameKillCamTransition[v11] )
LABEL_66:
                  v34 = 0;
                else
                  v34 = 1;
                index = event->data.animation.animationIndex[0].index;
                if ( LocalClientGlobals->inKillCam || v34 )
                {
                  Data = ScriptableCl_StateEventAnimationGetData(InstanceCommonContext, (const ScriptableEventAnimationDef *const)&event->data);
                  if ( index )
                  {
                    if ( XAnimGetInfoIndex(Tree, 0, XANIM_SUBTREE_DEFAULT, index) )
                    {
                      if ( !XAnimIsLooped(Tree->anims, index) && LocalClientGlobals->oldTime - LocalClientGlobals->predictedPlayerState.deltaTime <= Data->serverTime && Data->serverTime < v33 )
                      {
                        playBackRate = Data->playBackRate;
                        *(float *)&pHoldrand = playBackRate;
                        if ( (LODWORD(playBackRate) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5556, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
                          __debugbreak();
                        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, index, playBackRate);
                      }
                    }
                    else
                    {
                      if ( v33 - Data->serverTime >= 0 || XAnimIsLooped(Tree->anims, index) )
                        v38 = Data->playBackRate;
                      else
                        v38 = 0.0;
                      *(float *)&pHoldrand = v38;
                      if ( (LODWORD(v38) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5577, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
                        __debugbreak();
                      v39 = (float)(v33 - Data->serverTime) * 0.001;
                      if ( event->data.anonymous.buffer[9] )
                        XAnimSetCompleteGoalWeightKnob(obj[0], 0, XANIM_SUBTREE_DEFAULT, index, 1.0, 0.0, v38, (scr_string_t)0, 4u, 0, LINEAR);
                      else
                        XAnimSetCompleteGoalWeight(obj[0], 0, XANIM_SUBTREE_DEFAULT, index, 1.0, 0.0, v38, (scr_string_t)0, 4u, 0, LINEAR, NULL);
                      if ( event->data.anonymous.buffer[20] )
                      {
                        Length = XAnimGetLength(Tree->anims, index);
                        v41 = (float)((float)(v39 / *(float *)&Length) * v38) + Data->startTime;
                        if ( XAnimIsLooped(Tree->anims, index) )
                        {
                          v42 = fmodf_0(v41, 1.0);
                          v43 = v42;
                          if ( v42 < 0.0 )
                          {
                            v43 = 1.0 - v42;
                            if ( ((float)(1.0 - v42) < 0.0 || (float)(1.0 - v42) >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5604, ASSERT_TYPE_ASSERT, "(startTime >= 0.0f && startTime < 1.0f)", (const char *)&queryFormat, "startTime >= 0.0f && startTime < 1.0f") )
                              __debugbreak();
                          }
                        }
                        else
                        {
                          v44 = I_fclamp(v41, 0.0, 1.0);
                          v43 = *(float *)&v44;
                        }
                        *(float *)&pHoldrand = v43;
                        if ( (LODWORD(v43) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5611, ASSERT_TYPE_SANITY, "( !IS_NAN( startTime ) )", (const char *)&queryFormat, "!IS_NAN( startTime )") )
                          __debugbreak();
                        XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, v43);
                      }
                      else
                      {
                        v46 = (float)(v39 * v38) + Data->startTime;
                        v45 = v46;
                        *(float *)&pHoldrand = v46;
                        if ( (LODWORD(v46) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5617, ASSERT_TYPE_SANITY, "( !IS_NAN( startTime ) )", (const char *)&queryFormat, "!IS_NAN( startTime )") )
                          __debugbreak();
                        if ( v46 < 0.0 )
                        {
                          if ( XAnimIsLooped(Tree->anims, index) )
                          {
                            v47 = XAnimGetLength(Tree->anims, index);
                            v45 = fmodf_0(v46, *(float *)&v47) + *(float *)&v47;
                            if ( v45 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5624, ASSERT_TYPE_ASSERT, "(startTime >= 0.0f)", (const char *)&queryFormat, "startTime >= 0.0f") )
                              __debugbreak();
                          }
                          else
                          {
                            v45 = 0.0;
                          }
                        }
                        XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, v45);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_341;
    case Scriptable_EventType_PFX:
      v48 = event->data.anonymous.buffer[60];
      v49 = v48 && event->data.anonymous.buffer[69] && event->data.random.eventBCount;
      v50 = v48 && event->data.particleFX.scrEndTagCount;
      _XMM7 = 0i64;
      if ( event->data.spawnDynent.launchAngVel.v[2] <= 0.0 )
      {
        if ( v49 || v50 )
        {
          obj[0] = (DObj *)event->data.particleFX.eventStreamBufferOffsetClient;
          if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5671, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v56 = *(_DWORD *)((char *)&obj[0]->tree + (unsigned __int64)InstanceCommonContext->eventStreamBuffer);
          v57 = NULL;
          v58 = 0;
          if ( g_particleSystemsGeneration[4096 * v11 + (v56 & 0xFFF)].__all32 == v56 )
            v58 = v56 & 0xFFF;
          v59 = (v11 << 12) + v58;
          if ( g_particleSystems[0][v59] >= (ParticleSystem *)0x1000 )
            v57 = g_particleSystems[0][v59];
          if ( v57 )
          {
            inOutRequest->eventUpdateRequired = 1;
            if ( v49 )
            {
              if ( !event->data.random.eventBCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5689, ASSERT_TYPE_ASSERT, "(event->data.particleFX.scrTagCount > 0)", (const char *)&queryFormat, "event->data.particleFX.scrTagCount > 0") )
                __debugbreak();
              if ( ScriptableCl_GetBoneTransform((const LocalClientNum_t)v11, scriptableIndex, *event->data.particleFX.scrTagNames, &outTransform, 1) )
              {
                if ( !ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v11, scriptableIndex, SCRIPTABLE_LINK_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5695, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY ))", (const char *)&queryFormat, "ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
                  __debugbreak();
                _XMM8 = LODWORD(event->data.spawnDynent.launchAngVel2.v[1]);
                v63 = ScriptableCl_GetEntity((const LocalClientNum_t)v11, scriptableIndex);
                if ( v63 && v63->nextState.eType == ET_MISSILE )
                {
                  MSG_UnpackUnsignedFloat(v63->nextState.lerp.u.anonymous.data[6], 10000.0, 0x10u);
                  __asm
                  {
                    vcmpltss xmm1, xmm7, xmm0
                    vblendvps xmm8, xmm8, xmm0, xmm1
                  }
                }
                if ( event->data.particleFX.beamBoneAxis >= 3u )
                {
                  LODWORD(v148) = event->data.particleFX.beamBoneAxis;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5709, ASSERT_TYPE_ASSERT, "(unsigned)( event->data.particleFX.beamBoneAxis ) < (unsigned)( 3 )", "event->data.particleFX.beamBoneAxis doesn't index 3\n\t%i not in [0, %i)", v148, 3) )
                    __debugbreak();
                }
                beamBoneAxis = event->data.particleFX.beamBoneAxis;
                if ( (unsigned int)beamBoneAxis >= 4 )
                {
                  LODWORD(rate) = 4;
                  LODWORD(v148) = event->data.particleFX.beamBoneAxis;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v148, rate) )
                    __debugbreak();
                }
                v66 = (float)(*(float *)&_XMM8 * outTransform.m[beamBoneAxis].v[0]) + outTransform.m[3].v[0];
                endPos.v.m128_i32[3] = 0;
                v = endPos.v;
                v.m128_f32[0] = outTransform.m[3].v[0];
                _XMM0 = v;
                __asm
                {
                  vinsertps xmm0, xmm0, dword ptr [rbp+80h+outTransform+28h], 10h
                  vinsertps xmm0, xmm0, dword ptr [rbp+80h+outTransform+2Ch], 20h
                }
                endPos.v = _XMM0;
                *(__m128 *)obj = _XMM0;
                endPos.v.m128_i32[3] = 0;
                v72 = endPos.v;
                v72.m128_f32[0] = v66;
                _XMM0 = v72;
                __asm
                {
                  vinsertps xmm0, xmm0, xmm5, 10h
                  vinsertps xmm0, xmm0, xmm4, 20h ; ' '
                }
                endPos.v = _XMM0;
                CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
                ParticleSystem::SetBeamPos(v57, (const float4 *)obj, &endPos);
                CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
              }
            }
            else
            {
              if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5731, ASSERT_TYPE_ASSERT, "(loopingWithEndTag)", (const char *)&queryFormat, "loopingWithEndTag") )
                __debugbreak();
              *(float *)&pHoldrand = COERCE_FLOAT(Sys_Milliseconds());
              v75 = BG_irand(0, event->data.screenshake.radius, &pHoldrand);
              CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
              ParticleSystem::GetBeamPos(v57, &startPos, (float4 *)obj);
              if ( ScriptableCl_GetBonePosition((const LocalClientNum_t)v11, scriptableIndex, *((const scr_string_t *)&event->data.random.eventsB->base.name + v75), (vec3_t *)&endPos, 0) )
              {
                HIDWORD(obj[1]) = 0;
                v77 = *(_OWORD *)obj;
                *(float *)&v77 = endPos.v.m128_f32[0];
                _XMM3 = v77;
                __asm
                {
                  vinsertps xmm3, xmm3, dword ptr [rbp+80h+endPos.v+4], 10h
                  vinsertps xmm3, xmm3, dword ptr [rbp+80h+endPos.v+8], 20h
                }
                *(_OWORD *)obj = _XMM3;
                ParticleSystem::SetBeamPos(v57, &startPos, (const float4 *)obj);
              }
              CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
            }
          }
          else
          {
            v60 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v11, scriptableIndex);
            if ( v60->def )
              name = v60->def->name;
            else
              name = "<unknown>";
            Com_PrintWarning(29, "Scriptable UpdateEvent: Missing particle system (%d %s)\n", scriptableIndex, name);
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5754, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable_EventType_PFX is running Update when it should not be.") )
        {
          goto LABEL_320;
        }
      }
      else
      {
        v52 = event->data.particleFX.eventStreamBufferOffsetClient;
        if ( v52 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5649, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v53 = InstanceCommonContext->eventStreamBuffer;
        v54 = *(float *)&v53[v52];
        *(float *)&v53[v52] = v54 - deltaTime;
        if ( (float)(v54 - deltaTime) > 0.0 )
          goto LABEL_234;
        do
        {
          ScriptableCl_PlayParticleFX((const LocalClientNum_t)v11, NULL, scriptableIndex, (const ScriptableEventPFXDef *)&event->data, eventIdx);
          v55 = event->data.spawnDynent.launchAngVel.v[2] + *(float *)&v53[v52];
          *(float *)&v53[v52] = v55;
        }
        while ( v55 <= 0.0 );
        BYTE1(obj[0]->tree) = 1;
      }
      goto LABEL_341;
    case Scriptable_EventType_Sound:
      inOutRequest->eventUpdateRequired = 1;
      if ( !event->data.anonymous.buffer[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5764, ASSERT_TYPE_ASSERT, "(event->data.sound.looping)", (const char *)&queryFormat, "event->data.sound.looping") )
        __debugbreak();
      ScriptableCl_PlaySound((const LocalClientNum_t)v11, scriptableIndex, (const ScriptableEventSoundDef *)&event->data);
      goto LABEL_341;
    case Scriptable_EventType_Light:
      if ( !event->data.anonymous.buffer[36] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5771, ASSERT_TYPE_ASSERT, "(event->data.light.useStateTransitionTime)", (const char *)&queryFormat, "event->data.light.useStateTransitionTime") )
        __debugbreak();
      if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)obj) )
      {
        v80 = event->data.animation.eventStreamBufferOffsetClient;
        if ( v80 + 36 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5784, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v81 = (const Scriptable_EventLight_Data *)&InstanceCommonContext->eventStreamBuffer[v80];
        time = CG_GetLocalClientGlobals((const LocalClientNum_t)v11)->time;
        if ( v81->transTime < 0 )
        {
          LODWORD(v148) = v81->transTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5794, ASSERT_TYPE_ASSERT, "( ( data->transTime >= 0 ) )", "( data->transTime ) = %i", v148) )
            __debugbreak();
        }
        v84 = 0i64;
        *(float *)&v84 = (float)v81->transTime;
        _XMM0 = v84;
        __asm { vmaxss  xmm1, xmm0, cs:__real@34000000 }
        *(float *)&v84 = (float)(time - v81->startTime) / *(float *)&_XMM1;
        *(double *)&_XMM0 = I_fclamp(*(float *)&v84, 0.0, 1.0);
        v86 = *(float *)&v84;
        if ( *(float *)&_XMM0 < 1.0 )
          inOutRequest->eventUpdateRequired = 1;
        world = rgp.world;
        if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5807, ASSERT_TYPE_ASSERT, "(curGfxWorld)", (const char *)&queryFormat, "curGfxWorld") )
          __debugbreak();
        v88 = 0;
        v89 = 56i64;
        do
        {
          v90 = *(unsigned __int16 *)((char *)&obj[0]->tree + v89);
          if ( !*(_WORD *)((char *)&obj[0]->tree + v89) )
            break;
          if ( !CG_EntityWorkers_TryAddScriptableEventLightUpdate(v86, *(unsigned __int16 *)((char *)&obj[0]->tree + v89), v81, event) )
          {
            p_type = (float *)&world->primaryLights[v90].type;
            if ( !p_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5823, ASSERT_TYPE_ASSERT, "(refLight)", (const char *)&queryFormat, "refLight") )
              __debugbreak();
            PrimaryLight = Com_GetPrimaryLight(v90);
            if ( !PrimaryLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5825, ASSERT_TYPE_ASSERT, "(rawLight)", (const char *)&queryFormat, "rawLight") )
              __debugbreak();
            v93 = LODWORD(FLOAT_1_0);
            *(float *)&v93 = 1.0 - v86;
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_light_radiusscale, "scriptable_light_radiusscale") )
            {
              *(float *)&v93 = (float)(*(float *)&v93 * v81->startRadius) + (float)(v86 * v81->targetRadius);
              _XMM1 = v93;
              __asm { vmaxss  xmm2, xmm1, xmm8 }
              p_type[17] = *(float *)&_XMM2;
            }
            else
            {
              _XMM0 = LODWORD(PrimaryLight->radius);
              __asm { vmaxss  xmm1, xmm0, xmm8 }
              p_type[17] = *(float *)&_XMM1;
            }
            p_type[4] = (float)(v86 * v81->targetIntensity) + (float)((float)(1.0 - v86) * v81->startIntensity);
            if ( event->data.anonymous.buffer[16] )
            {
              p_type[5] = (float)((float)(event->data.chunkDynent.launchAngVel.v[0] - v81->startColorLinearSrgb.v[0]) * v86) + v81->startColorLinearSrgb.v[0];
              p_type[6] = (float)((float)(event->data.animation.playbackRateMin - v81->startColorLinearSrgb.v[1]) * v86) + v81->startColorLinearSrgb.v[1];
              p_type[7] = (float)((float)(event->data.animation.playbackRateMax - v81->startColorLinearSrgb.v[2]) * v86) + v81->startColorLinearSrgb.v[2];
            }
            else
            {
              p_type[5] = PrimaryLight->colorLinearSrgb.v[0];
              p_type[6] = PrimaryLight->colorLinearSrgb.v[1];
              p_type[7] = PrimaryLight->colorLinearSrgb.v[2];
            }
          }
          ++v88;
          v89 += 2i64;
        }
        while ( v88 < 5 );
      }
      else
      {
        Com_PrintError(29, "Can't update 'light' event for instance %i, it does not have any mapped lights\n", scriptableIndex);
      }
      goto LABEL_341;
    case Scriptable_EventType_Sun:
      if ( !event->data.anonymous.buffer[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5856, ASSERT_TYPE_ASSERT, "(event->data.sun.useStateTransitionTime)", (const char *)&queryFormat, "event->data.sun.useStateTransitionTime") )
        __debugbreak();
      v98 = &cm.mapEnts->scriptableMapEnts.sunClientDatas[v11];
      v99 = CG_GetLocalClientGlobals((const LocalClientNum_t)v11)->time;
      if ( v98->transTime < 0 )
      {
        LODWORD(v148) = v98->transTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5865, ASSERT_TYPE_ASSERT, "( ( data->transTime >= 0 ) )", "( data->transTime ) = %i", v148) )
          __debugbreak();
      }
      v101 = 0i64;
      *(float *)&v101 = (float)v98->transTime;
      _XMM0 = v101;
      __asm { vmaxss  xmm1, xmm0, cs:__real@34000000 }
      v103 = (float)(v99 - v98->startTime) / *(float *)&_XMM1;
      v104 = I_fclamp(v103, 0.0, 1.0);
      if ( *(float *)&v104 < 1.0 )
        inOutRequest->eventUpdateRequired = 1;
      if ( !CG_EntityWorkers_TryAddScriptableEventSunUpdate(*(const float *)&v104, event, v98) )
      {
        if ( event->data.anonymous.buffer[12] )
        {
          endPos.v.m128_f32[0] = (float)((float)(event->data.animation.startTimeMax - v98->startColorLinearSrgb.v[0]) * v103) + v98->startColorLinearSrgb.v[0];
          endPos.v.m128_f32[1] = (float)((float)(event->data.chunkDynent.launchAngVel.v[0] - v98->startColorLinearSrgb.v[1]) * v103) + v98->startColorLinearSrgb.v[1];
          endPos.v.m128_f32[2] = (float)((float)(event->data.animation.playbackRateMin - v98->startColorLinearSrgb.v[2]) * v103) + v98->startColorLinearSrgb.v[2];
          R_SetSunColorOverride((const vec3_t *)&endPos);
        }
        if ( event->data.anonymous.buffer[0] )
          R_SetSunIntensityOverride((float)((float)(1.0 - v103) * v98->startIntensity) + (float)(v103 * v98->targetIntensity));
        if ( event->data.anonymous.buffer[60] )
        {
          _XMM8 = 0i64;
          __asm { vroundss xmm0, xmm8, xmm2, 1 }
          endPos.v.m128_f32[0] = (float)((float)((float)((float)((float)(v98->targetAngles.v[0] - v98->startAngles.v[0]) * 0.0027777778) - *(float *)&_XMM0) * 360.0) * v103) + v98->startAngles.v[0];
          __asm { vroundss xmm3, xmm8, xmm2, 1 }
          endPos.v.m128_f32[1] = (float)((float)((float)((float)((float)(v98->targetAngles.v[1] - v98->startAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v103) + v98->startAngles.v[1];
          __asm { vroundss xmm1, xmm8, xmm2, 1 }
          endPos.v.m128_f32[2] = (float)((float)((float)((float)((float)(v98->targetAngles.v[2] - v98->startAngles.v[2]) * 0.0027777778) - *(float *)&_XMM1) * 360.0) * v103) + v98->startAngles.v[2];
          AngleVectors((const vec3_t *)&endPos, (vec3_t *)obj, NULL, NULL);
          R_SetSunDirectionOverride((const vec3_t *)obj, 0);
        }
      }
      goto LABEL_341;
    case Scriptable_EventType_PartDamage:
      if ( event->data.animation.startTimeMin <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5905, ASSERT_TYPE_ASSERT, "(event->data.partDamage.amountDoT > 0.f)", (const char *)&queryFormat, "event->data.partDamage.amountDoT > 0.f") )
        __debugbreak();
      if ( event->data.animation.startTimeMax <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5906, ASSERT_TYPE_ASSERT, "(event->data.partDamage.intervalDoT > 0.f)", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0.f") )
        __debugbreak();
      v109 = event->data.partDamage.eventStreamBufferOffsetClient;
      if ( v109 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5910, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      v110 = InstanceCommonContext->eventStreamBuffer;
      v111 = *(float *)&v110[v109];
      if ( v111 > 0.0 )
      {
        v112 = v111 - deltaTime;
        *(float *)&v110[v109] = v112;
        if ( v112 <= 0.0 )
        {
          do
          {
            *(float *)&v110[v109] = v112 + event->data.animation.startTimeMax;
            eventsB = event->data.random.eventsB;
            if ( !eventsB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5928, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
              __debugbreak();
            ScriptableCl_InitEventParams((const LocalClientNum_t)v11, (ScriptableEventParams *)&outTransform, scriptableIndex, (const ScriptablePartDef *)eventsB);
            ScriptableBg_DamagePart((const ScriptableEventParams *)&outTransform, (const ScriptablePartDef *)eventsB, 0x41u, (int)event->data.animation.startTimeMin);
            v112 = *(float *)&v110[v109];
          }
          while ( v112 <= 0.0 );
          v13 = (ScriptableUpdateRequest *)obj[0];
        }
LABEL_234:
        v13->eventUpdateRequired = 1;
      }
      goto LABEL_341;
    case Scriptable_EventType_ViewmodelShaderParam:
      v114 = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
      if ( !v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5951, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v115 = ScriptableCl_GetEntity((const LocalClientNum_t)v11, scriptableIndex);
      if ( !v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5954, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      CharacterInfo = cg_t::TryGetCharacterInfo(v114, v115->nextState.number);
      if ( CharacterInfo )
      {
        v117 = event->data.viewmodelShaderParam.eventStreamBufferOffsetClient;
        if ( v117 + 32 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5968, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v118 = (const Scriptable_EventViewmodelShaderParam_Data *)&InstanceCommonContext->eventStreamBuffer[v117];
        if ( (float)v118->transTime > 0.0 )
        {
          inOutRequest->eventUpdateRequired = 1;
          v119 = (float)(CG_GetLocalClientGlobals((const LocalClientNum_t)v11)->time - v118->startTime) / (float)v118->transTime;
          if ( event->data.stateChange.partReference.flatId == 10 )
            *(float *)&v120 = fmodf_0(v119, 1.0);
          else
            v120 = I_fclamp(v119, 0.0, 1.0);
          v121 = *(float *)&v120;
          _XMM0 = 0i64;
          __asm { vroundss xmm1, xmm0, xmm2, 1 }
          if ( (int)*(float *)&_XMM1 )
            ScriptableCl_SetViewmodelShaderParam(&CharacterInfo->shaderOverride[(int)*(float *)&_XMM1 - 1], (const ScriptableEventViewmodelShaderParamDef *)&event->data, v118, v121);
        }
      }
      else
      {
        LODWORD(fmt) = v115->nextState.number;
        Com_PrintError(29, "Scriptable %s with event %s on a non-character entity %d.\n", InstanceCommonContext->def->name, event->data.anonymous.base->name, fmt);
        ScriptableCl_EnterError();
      }
      goto LABEL_341;
    case Scriptable_EventType_ClientViewSelector:
      IsCharacterThirdPerson = ScriptableCl_IsCharacterThirdPerson((const LocalClientNum_t)v11, scriptableIndex);
      obj[0] = (DObj *)event->data.random.eventStreamBufferOffsetServer;
      if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6023, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      v154 = InstanceCommonContext->eventStreamBuffer;
      pHoldrand = *(unsigned int *)startPos.v.m128_u64[0];
      inOutRequest->eventUpdateRequired = 1;
      v124 = obj[0];
      v125 = (__int64)v154;
      if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)v154) != IsCharacterThirdPerson )
      {
        ScriptableCl_InitEventParams((const LocalClientNum_t)v11, (ScriptableEventParams *)&outTransform, scriptableIndex, part);
        if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)v154) )
        {
          eventBCount = event->data.random.eventBCount;
          eventsA = event->data.random.eventsB;
        }
        else
        {
          eventBCount = event->data.stateChange.partReference.flatId;
          eventsA = event->data.random.eventsA;
        }
        ScriptableCl_StopStateEvents((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, eventsA, eventBCount);
        *((_BYTE *)&obj[0]->tree + (unsigned __int64)v154) = IsCharacterThirdPerson;
        if ( IsCharacterThirdPerson )
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.random.eventsB, event->data.random.eventBCount);
        else
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.random.eventsA, event->data.stateChange.partReference.flatId);
        v125 = (__int64)v154;
      }
      if ( *((_BYTE *)&v124->tree + v125) )
      {
        v128 = 0;
        if ( event->data.random.eventBCount )
        {
          while ( 1 )
          {
            v129 = &event->data.random.eventsB[v128];
            if ( (v129->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v129, v128, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v128 >= event->data.random.eventBCount )
              goto LABEL_341;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6077, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_320;
        }
      }
      else
      {
        v130 = 0;
        if ( event->data.stateChange.partReference.flatId )
        {
          while ( 1 )
          {
            v131 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v130);
            if ( (v131->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v131, v130, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v130 >= event->data.stateChange.partReference.flatId )
              goto LABEL_341;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6094, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_320;
        }
      }
      goto LABEL_341;
    case Scriptable_EventType_TeamSelector:
      if ( event->data.anonymous.buffer[4] )
      {
        v132 = (DObj *)CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
        obj[0] = v132;
        if ( !v132 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6112, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          v132 = obj[0];
        }
        LinkObject = v132[1].skel.partBits.worldCtrl.array[3];
      }
      else
      {
        if ( !ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v11, scriptableIndex, SCRIPTABLE_LINK_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6118, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", "TeamSelector only works on entity scriptables for non-local-player tests") )
          __debugbreak();
        LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v11, scriptableIndex);
      }
      LODWORD(v154) = event->data.stateChange.partReference.flatId;
      DoesTeamMatch = ScriptableCl_DoesTeamMatch((const LocalClientNum_t)v11, LinkObject, (Scriptable_TeamFilter)v154);
      endPos.v.m128_u64[0] = event->data.teamSelector.eventStreamBufferOffsetClient;
      if ( endPos.v.m128_u64[0] + 4 > InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6127, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      obj[0] = (DObj *)InstanceCommonContext->eventStreamBuffer;
      inOutRequest->eventUpdateRequired = 1;
      pHoldrand = *(unsigned int *)startPos.v.m128_u64[0];
      v134 = endPos.v.m128_u64[0];
      v135 = obj[0];
      if ( *((_BYTE *)&obj[0]->tree + endPos.v.m128_u64[0]) != DoesTeamMatch )
      {
        ScriptableCl_InitEventParams((const LocalClientNum_t)v11, (ScriptableEventParams *)&outTransform, scriptableIndex, part);
        startPos.v.m128_i8[4] = DoesTeamMatch;
        startPos.v.m128_i32[0] = (int)v154;
        if ( *(_QWORD *)&outTransform.row2.z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6149, ASSERT_TYPE_ASSERT, "(eventParams.teamEvent == nullptr)", (const char *)&queryFormat, "eventParams.teamEvent == nullptr") )
          __debugbreak();
        *(_QWORD *)&outTransform.row2.z = &startPos;
        if ( *((_BYTE *)&obj[0]->tree + endPos.v.m128_u64[0]) )
        {
          eventPassCount = event->data.teamSelector.eventPassCount;
          eventsPass = event->data.teamSelector.eventsPass;
        }
        else
        {
          eventPassCount = event->data.teamSelector.eventFailCount;
          eventsPass = event->data.teamSelector.eventsFail;
        }
        ScriptableCl_StopStateEvents((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, eventsPass, eventPassCount);
        *((_BYTE *)&obj[0]->tree + endPos.v.m128_u64[0]) = DoesTeamMatch;
        if ( DoesTeamMatch )
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.teamSelector.eventsPass, event->data.teamSelector.eventPassCount);
        else
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v11, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.teamSelector.eventsFail, event->data.teamSelector.eventFailCount);
        v135 = obj[0];
      }
      if ( *((_BYTE *)&v135->tree + v134) )
      {
        v138 = 0;
        if ( event->data.teamSelector.eventPassCount )
        {
          while ( 1 )
          {
            v139 = (const ScriptableEventDef *)&event->data.spawnDynent.tagName[176 * v138];
            if ( (v139->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v139, v138, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v138 >= event->data.teamSelector.eventPassCount )
              goto LABEL_341;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6190, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
LABEL_320:
            __debugbreak();
        }
      }
      else
      {
        v140 = 0;
        if ( event->data.teamSelector.eventFailCount )
        {
          while ( 1 )
          {
            v141 = (const ScriptableEventDef *)((char *)event->data.chunkDynent.part + 176 * v140);
            if ( (v141->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, v141, v140, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v140 >= event->data.teamSelector.eventFailCount )
              goto LABEL_341;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6207, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_320;
        }
      }
LABEL_341:
      Sys_ProfEndNamedEvent();
      return;
    case Scriptable_EventType_ApplyConstantForce:
      ScriptableCl_UpdateEventApplyConstantForce((const LocalClientNum_t)v11, scriptableIndex, (const ScriptableEventApplyConstantForceDef *)&event->data, deltaTime, inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_ApplyConstantAngularForce:
      ScriptableCl_UpdateEventApplyConstantAngularForce((const LocalClientNum_t)v11, scriptableIndex, (const ScriptableEventApplyConstantAngularForceDef *)&event->data, deltaTime, inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_MaterialOverride:
      ScriptableCL_UpdateStateEventMaterialOverride(deltaTime, (const LocalClientNum_t)v11, scriptableIndex, part, state, event, eventIdx, inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_Move:
      ScriptableCl_UpdateStateEventMove((const LocalClientNum_t)v11, scriptableIndex, (const ScriptableEventMoveDef *const)&event->data, deltaTime, inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_GravityArc:
      ScriptableCl_UpdateStateEventGravityArc((const LocalClientNum_t)v11, scriptableIndex, (const ScriptableEventGravityArcDef *const)&event->data, deltaTime, inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_ViewTrigger:
      ScriptableCl_UpdateStateEventViewTrigger((const LocalClientNum_t)v11, scriptableIndex, part, (const ScriptableEventViewTriggerDef *const)&event->data, eventIdx, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
      goto LABEL_341;
    case Scriptable_EventType_Hover:
      v142 = event->data.wait.delayMax > 0.00000011920929 && event->data.wait.delayMin > 0.00000011920929;
      v143 = event->data.chunkDynent.launchLinVel.v[0] > 0.00000011920929;
      v152 = event->data.animation.startTimeMin > 0.00000011920929;
      if ( v142 || event->data.chunkDynent.launchLinVel.v[0] > 0.00000011920929 || event->data.animation.startTimeMin > 0.00000011920929 )
      {
        v144 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v11, scriptableIndex);
        endPos.v.m128_u64[0] = *(_QWORD *)v144->anglesInitial.v;
        endPos.v.m128_i32[2] = LODWORD(v144->anglesInitial.v[2]);
        *(vec3_t *)obj = v144->originInitial;
        v145 = (float)(CG_GetLocalClientGlobals((const LocalClientNum_t)v11)->time + 1200 * scriptableIndex);
        v146 = v145 * 0.001;
        if ( v142 )
          *(float *)&obj[1] = (float)(sinf_0(v146 / event->data.wait.delayMax) * event->data.wait.delayMin) + *(float *)&obj[1];
        if ( v143 )
          endPos.v.m128_f32[0] = (float)((float)(v146 / event->data.chunkDynent.launchLinVel.v[0]) * 360.0) + endPos.v.m128_f32[0];
        if ( v152 )
          endPos.v.m128_f32[1] = (float)((float)(v146 / event->data.animation.startTimeMin) * 360.0) + endPos.v.m128_f32[1];
        ScriptableCL_SetPose((const LocalClientNum_t)v11, scriptableIndex, v144, (const vec3_t *)obj, (const vec3_t *)&endPos, 0);
        inOutRequest->eventUpdateRequired = 1;
      }
      goto LABEL_341;
    default:
      goto LABEL_341;
  }
}

/*
==============
ScriptableCl_UpdateEventApplyConstantAngularForce
==============
*/
void ScriptableCl_UpdateEventApplyConstantAngularForce(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventApplyConstantAngularForceDef *applyConstantAngularForce, float deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  __int32 v9; 
  unsigned int PhysInstanceId; 
  unsigned int v11; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v13; 
  __int64 eventStreamBufferOffsetClient; 
  __int64 v15; 
  unsigned __int8 *eventStreamBuffer; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  __int128 v29; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int RigidBodyID; 
  vec3_t outOrigin; 
  __int64 v36; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 

  v36 = -2i64;
  v9 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, scriptableIndex);
  v11 = PhysInstanceId;
  if ( PhysInstanceId != -1 && Physics_IsInstanceInWorld((Physics_WorldId)v9, PhysInstanceId, 0) )
  {
    inOutRequest->eventUpdateRequired = 1;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    v13 = InstanceCommonContext;
    eventStreamBufferOffsetClient = applyConstantAngularForce->eventStreamBufferOffsetClient;
    v15 = eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 12 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4567, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 3 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 12, InstanceCommonContext->eventStreamBufferSize) )
      __debugbreak();
    eventStreamBuffer = v13->eventStreamBuffer;
    v17 = *(float *)&eventStreamBuffer[v15];
    v18 = *(float *)&eventStreamBuffer[v15 + 4];
    v19 = *(float *)&eventStreamBuffer[v15 + 8];
    angles = v13->angles;
    ScriptableInstanceContextSecure::GetOrigin(v13, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    v20 = LODWORD(FLOAT_1_0);
    *(float *)&v20 = (float)((float)(1.0 - v17) * applyConstantAngularForce->forceVector.v[0]) + (float)(v17 * applyConstantAngularForce->forceVector2.v[0]);
    v21 = v20;
    v22 = LODWORD(FLOAT_1_0);
    v23 = (float)((float)(1.0 - v18) * applyConstantAngularForce->forceVector.v[1]) + (float)(v18 * applyConstantAngularForce->forceVector2.v[1]);
    v24 = (float)((float)(1.0 - v19) * applyConstantAngularForce->forceVector.v[2]) + (float)(v19 * applyConstantAngularForce->forceVector2.v[2]);
    if ( applyConstantAngularForce->worldSpace )
    {
      *(float *)&v22 = (float)((float)(1.0 - v18) * applyConstantAngularForce->forceVector.v[1]) + (float)(v18 * applyConstantAngularForce->forceVector2.v[1]);
      v25 = v22;
      v26 = *(float *)&v21;
    }
    else
    {
      v27 = v21;
      *(float *)&v27 = (float)((float)(*(float *)&v21 * axis.m[0].v[1]) + (float)(v23 * axis.m[1].v[1])) + (float)(v24 * axis.m[2].v[1]);
      v25 = v27;
      v26 = (float)((float)(*(float *)&v21 * axis.m[0].v[0]) + (float)(v23 * axis.m[1].v[0])) + (float)(v24 * axis.m[2].v[0]);
      v24 = (float)((float)(*(float *)&v21 * axis.m[0].v[2]) + (float)(v23 * axis.m[1].v[2])) + (float)(v24 * axis.m[2].v[2]);
    }
    v29 = v25;
    *(float *)&v29 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v26 * v26)) + (float)(v24 * v24));
    _XMM3 = v29;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm11, xmm0
    }
    torqueVector.v[0] = (float)(1.0 / *(float *)&_XMM1) * v26;
    torqueVector.v[1] = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v25;
    torqueVector.v[2] = (float)(1.0 / *(float *)&_XMM1) * v24;
    if ( (float)(deltaTime * *(float *)&v29) != 0.0 )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, v11);
      for ( i = 0; i < NumRigidBodys; ++i )
      {
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v9, v11, i);
        if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4621, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v9, RigidBodyID) )
          Physics_ApplyAngularImpulse((Physics_WorldId)v9, RigidBodyID, &torqueVector, deltaTime * *(float *)&v29);
      }
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_UpdateEventApplyConstantForce
==============
*/
void ScriptableCl_UpdateEventApplyConstantForce(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventApplyConstantForceDef *applyConstantForce, float deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  __int32 v9; 
  unsigned int PhysInstanceId; 
  unsigned int v11; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int64 eventStreamBufferSize; 
  __int64 v15; 
  unsigned __int8 *eventStreamBuffer; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  __int128 v33; 
  __int128 v34; 
  float v38; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  __int64 v42; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v45; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 

  v45 = -2i64;
  v9 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, scriptableIndex);
  v11 = PhysInstanceId;
  if ( PhysInstanceId != -1 && Physics_IsInstanceInWorld((Physics_WorldId)v9, PhysInstanceId, 0) )
  {
    inOutRequest->eventUpdateRequired = 1;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = applyConstantForce->eventStreamBufferOffsetClient;
    eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
    v15 = eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 24 > eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4460, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 6 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 24, eventStreamBufferSize) )
      __debugbreak();
    eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
    v17 = *(float *)&eventStreamBuffer[v15];
    v18 = *(float *)&eventStreamBuffer[v15 + 4];
    v19 = *(float *)&eventStreamBuffer[v15 + 8];
    v20 = *(float *)&eventStreamBuffer[v15 + 12];
    v21 = *(float *)&eventStreamBuffer[v15 + 16];
    v22 = *(float *)&eventStreamBuffer[v15 + 20];
    angles = InstanceCommonContext->angles;
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    v23 = (float)((float)(1.0 - v17) * applyConstantForce->forcePos.v[0]) + (float)(v17 * applyConstantForce->forcePos2.v[0]);
    v24 = (float)((float)(1.0 - v18) * applyConstantForce->forcePos.v[1]) + (float)(v18 * applyConstantForce->forcePos2.v[1]);
    v25 = (float)((float)(1.0 - v19) * applyConstantForce->forcePos.v[2]) + (float)(v19 * applyConstantForce->forcePos2.v[2]);
    v26 = LODWORD(FLOAT_1_0);
    *(float *)&v26 = (float)((float)(1.0 - v20) * applyConstantForce->forceVector.v[0]) + (float)(v20 * applyConstantForce->forceVector2.v[0]);
    v27 = v26;
    v29 = LODWORD(FLOAT_1_0);
    *(float *)&v29 = (float)((float)(1.0 - v21) * applyConstantForce->forceVector.v[1]) + (float)(v21 * applyConstantForce->forceVector2.v[1]);
    v28 = *(float *)&v29;
    v30 = (float)((float)(1.0 - v22) * applyConstantForce->forceVector.v[2]) + (float)(v22 * applyConstantForce->forceVector2.v[2]);
    position.v[0] = (float)((float)((float)(v23 * axis.m[0].v[0]) + (float)(axis.m[1].v[0] * v24)) + (float)(v25 * axis.m[2].v[0])) + outOrigin.v[0];
    position.v[1] = (float)((float)((float)(v23 * axis.m[0].v[1]) + (float)(axis.m[1].v[1] * v24)) + (float)(v25 * axis.m[2].v[1])) + outOrigin.v[1];
    position.v[2] = (float)((float)((float)(v23 * axis.m[0].v[2]) + (float)(axis.m[1].v[2] * v24)) + (float)(v25 * axis.m[2].v[2])) + outOrigin.v[2];
    if ( applyConstantForce->worldSpace )
    {
      v31 = v29;
      v32 = *(float *)&v27;
    }
    else
    {
      v33 = v27;
      *(float *)&v33 = (float)((float)(*(float *)&v27 * axis.m[0].v[1]) + (float)(axis.m[1].v[1] * v28)) + (float)(v30 * axis.m[2].v[1]);
      v31 = v33;
      v32 = (float)((float)(*(float *)&v27 * axis.m[0].v[0]) + (float)(axis.m[1].v[0] * v28)) + (float)(v30 * axis.m[2].v[0]);
      v30 = (float)((float)(*(float *)&v27 * axis.m[0].v[2]) + (float)(axis.m[1].v[2] * v28)) + (float)(v30 * axis.m[2].v[2]);
    }
    v34 = v31;
    *(float *)&v34 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(v32 * v32)) + (float)(v30 * v30));
    _XMM3 = v34;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm13, xmm0
    }
    result.m_serialAndIndex = _XMM1;
    normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM1) * v32;
    normalizedDirection.v[1] = *(float *)&v31 * (float)(1.0 / *(float *)&_XMM1);
    normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM1) * v30;
    v38 = deltaTime * *(float *)&v34;
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, v11);
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v42) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v9, v11, i)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4523, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v9, m_serialAndIndex) )
        Physics_ApplyImpulse((Physics_WorldId)v9, m_serialAndIndex, &position, &normalizedDirection, v38);
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_UpdateInstanceEvents
==============
*/
_BOOL8 ScriptableCl_UpdateInstanceEvents(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const float deltaTime)
{
  const ScriptableDef *def; 
  bool eventUpdateRequired; 
  unsigned int v7; 
  ScriptableUpdateRequest inOutRequest; 

  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_UpdateInstanceEvents");
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6329, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", scriptableIndex) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def", -2i64) )
      __debugbreak();
  }
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6330, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_RequiresUpdate( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  eventUpdateRequired = 0;
  inOutRequest = 0;
  v7 = 0;
  if ( def->numParts )
  {
    do
      ScriptableCl_UpdatePart(deltaTime, localClientNum, scriptableIndex, &def->parts[v7++], &inOutRequest);
    while ( v7 < def->numParts );
    eventUpdateRequired = inOutRequest.eventUpdateRequired;
  }
  Sys_ProfEndNamedEvent();
  return eventUpdateRequired;
}

/*
==============
ScriptableCl_UpdateLootPingFX
==============
*/
void ScriptableCl_UpdateLootPingFX(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const BG_SpawnGroup_Loot_Table *table)
{
  __int64 v3; 
  int v6; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 7210, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( s_scriptableLootPing[v3].index != scriptableIndex )
  {
    s_scriptableLootPing[v3].index = scriptableIndex;
    s_scriptableLootPing[v3].pingStatusDirty = 1;
  }
  ScriptableCl_UpdateLootPingPopup((const LocalClientNum_t)v3);
}

/*
==============
ScriptableCl_UpdateLootPingPopup
==============
*/
void ScriptableCl_UpdateLootPingPopup(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned int index; 
  unsigned __int16 ModelFromPath; 
  bool v6; 
  unsigned __int16 v7; 
  const char *name; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BgWeaponHandle v10; 
  CgWeaponMap *Instance; 
  __int64 weaponIdx; 
  Material *killIconMat; 
  unsigned __int16 v14; 
  __int64 v15; 
  unsigned int v16; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_UpdateLootPingPopup");
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  index = s_scriptableLootPing[v1].index;
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.lootCard.shouldShow");
  v6 = index != -1;
  if ( index != -1 && ScriptableCl_IsLootWeaponWithInvalidHandleIndex((const LocalClientNum_t)v1, index) )
    v6 = 0;
  if ( s_scriptableLootPing[v1].popup != v6 )
  {
    s_scriptableLootPing[v1].popup = v6;
    LUI_Model_SetInt(ModelFromPath, v6);
  }
  if ( v6 && s_scriptableLootPing[v1].popupIndex != index )
  {
    s_scriptableLootPing[v1].popupIndex = index;
    v7 = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.lootCard.targetEntityNum");
    if ( index > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 210, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
      __debugbreak();
    LUI_Model_SetInt(v7, index | 0x40000000);
    name = (char *)&queryFormat.fmt + 3;
    LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v1, index);
    if ( LootItemDef && BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
    {
      v10.m_mapEntryId = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, index)->extraPayload;
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
      weaponIdx = BgWeaponMap::GetWeapon(Instance, v10)->weaponIdx;
      if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
      {
        v16 = bg_lastParsedWeaponIndex;
        LODWORD(v15) = weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v15, v16) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      killIconMat = bg_weaponCompleteDefs[weaponIdx]->killIconMat;
      if ( killIconMat )
        name = killIconMat->name;
    }
    v14 = LUI_Model_CreateModelFromPath(ModelForController, "cg.HUD.hints.lootCard.customWeaponIcon");
    LUI_Model_SetString(v14, name);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_UpdateModel
==============
*/
void ScriptableCl_UpdateModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, bool activatePhysics)
{
  unsigned int LinkObject; 
  int LinkType; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v9; 
  DynEntityClient *Client; 
  __int32 v11; 
  unsigned int NumRigidBodys; 
  unsigned int i; 
  unsigned int RigidBodyID; 
  CgEntitySystem *EntitySystem; 
  DObj *DObj_General; 
  DObj *v17; 
  const XModel *ScriptableModel; 
  const char **p_name; 
  const char ***models; 
  const char *v21; 
  __int32 v22; 
  bool IsInstanceDeactivated; 
  CG_PhysicsObject *v24; 
  unsigned int v25; 
  vec3_t outOrigin; 
  bool createdNew_optionalOut; 

  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  LinkType = (unsigned __int8)ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  v9 = InstanceCommonContext;
  switch ( LinkType )
  {
    case 1:
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( EntitySystem->IsMP(EntitySystem) )
      {
        DObj_General = CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, LinkObject, &createdNew_optionalOut);
      }
      else
      {
        createdNew_optionalOut = 0;
        DObj_General = Com_GetClientDObj(LinkObject, EntitySystem->m_localClientNum);
      }
      v17 = DObj_General;
      ScriptableModel = BG_XCompositeModel_GetScriptableModel(v9);
      p_name = &ScriptableModel->name;
      if ( v17 )
      {
        if ( !v17->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6506, ASSERT_TYPE_ASSERT, "(obj->numModels >= 1)", (const char *)&queryFormat, "obj->numModels >= 1", -2i64) )
          __debugbreak();
        models = (const char ***)v17->models;
        if ( *models == p_name )
        {
          if ( !createdNew_optionalOut )
          {
            CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
            v22 = 3 * localClientNum;
            IsInstanceDeactivated = 1;
            v24 = CG_PhysicsObject_Get(LinkObject, localClientNum);
            if ( v24 )
            {
              v25 = v24->physicsInstances[v22 + 3];
              if ( v25 != -1 )
                IsInstanceDeactivated = Physics_IsInstanceDeactivated((Physics_WorldId)(v22 + 3), v25);
            }
            CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
            CG_Entity_DestroyPhysics(localClientNum, LinkObject);
            if ( CG_Entity_ShouldCreatePhysicsOnInit(localClientNum, LinkObject) || !EntitySystem->IsMP(EntitySystem) )
              CG_Entity_CreatePhysics(localClientNum, LinkObject, IsInstanceDeactivated);
            CG_Entity_DestroyCloth(localClientNum, LinkObject);
            if ( CG_Entity_ShouldCreateClothOnInit(localClientNum, LinkObject) || !EntitySystem->IsMP(EntitySystem) )
              CG_Entity_CreateCloth(localClientNum, LinkObject);
          }
        }
        else
        {
          if ( p_name )
            v21 = *p_name;
          else
            v21 = "Unknown";
          Com_Printf(29, "Client scriptable setModel event found non-matching model %s - currently using %s instead - this may be ok if a subsequent setModelEvent occurs before the end of the frame\n", v21, **models);
        }
      }
      else if ( ScriptableModel )
      {
        Com_Printf(29, "Client scriptable failed to find dobj when setting model %s - this may be ok if a subsequent setModelEvent occurs before the end of the frame\n", ScriptableModel->name);
      }
      break;
    case 2:
      DynEnt_ActivateForScriptable(localClientNum, LinkObject, 1);
      ScriptableInstanceContextSecure::GetOrigin(v9, scriptableIndex, &outOrigin);
      DynEnt_ScriptableSetPosition(localClientNum, LinkObject, &outOrigin, &v9->angles);
      if ( v9->dataType != SCRIPTABLE_DATA_TYPE_XMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6458, ASSERT_TYPE_ASSERT, "(r_context.dataType == SCRIPTABLE_DATA_TYPE_XMODEL)", "%s\n\tComposite model not supported for SCRIPTABLE_LINK_DYNENT", "r_context.dataType == SCRIPTABLE_DATA_TYPE_XMODEL") )
        __debugbreak();
      DynEnt_ChangeActiveModelForScriptable(localClientNum, LinkObject, v9->data.model);
      if ( activatePhysics )
      {
        Client = DynEnt_GetClient(localClientNum, LinkObject, DYNENT_BASIS_MODEL);
        if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6464, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient", -2i64) )
          __debugbreak();
        if ( Client->physicsSystemId != -1 )
        {
          CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
          v11 = 3 * localClientNum + 3;
          NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v11, Client->physicsSystemId);
          for ( i = 0; i < NumRigidBodys; ++i )
          {
            RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v11, Client->physicsSystemId, i);
            if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6475, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            Physics_ActivateBody((Physics_WorldId)v11, RigidBodyID);
          }
          CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
        }
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
      break;
    case 3:
      ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
      CG_ClientModel_SetOrigin(localClientNum, LinkObject, &outOrigin);
      CG_ClientModel_SetAngles(localClientNum, LinkObject, &v9->angles);
      if ( !ScriptableCl_ObjectiveChanged(localClientNum) && ScriptableCL_GetObjectiveActiveInWorldForInstance(localClientNum, scriptableIndex) )
        ScriptableCl_ObjectiveChangedSet(localClientNum);
      if ( ScriptableCl_Spatial_Marked(localClientNum, scriptableIndex) )
        ScriptableCl_Spatial_UpdateOrigin(localClientNum, scriptableIndex);
      ScriptableCl_SetClientModelInstanceModels(localClientNum, scriptableIndex);
      memset(&outOrigin, 0, sizeof(outOrigin));
      break;
  }
}

/*
==============
ScriptableCl_UpdatePart
==============
*/
void ScriptableCl_UpdatePart(const float deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, ScriptableUpdateRequest *inOutRequest)
{
  unsigned int v8; 
  ScriptableUpdateRequest *v9; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v11; 
  unsigned int eventIdx; 
  const ScriptableEventDef *v13; 
  ScriptableEventDef *event; 
  unsigned int holdrand[4]; 
  unsigned int pHoldrand; 

  if ( (part->flags & 0x200) != 0 )
  {
    v8 = 0;
    v9 = inOutRequest;
    if ( part->numStates )
    {
      PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, part);
      if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6300, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
        __debugbreak();
      if ( PartRuntime->stateId >= part->numStates )
      {
        LODWORD(event) = PartRuntime->stateId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6302, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part.numStates )", "runtime->stateId doesn't index part.numStates\n\t%i not in [0, %i)", event, part->numStates) )
          __debugbreak();
      }
      v11 = &part->states[PartRuntime->stateId];
      if ( (v11->base.flags & 0x200) != 0 )
      {
        pHoldrand = scriptableIndex + ScriptableCl_GetFrameServerTime(localClientNum);
        BG_srand(&pHoldrand);
        eventIdx = 0;
        holdrand[0] = pHoldrand;
        if ( v11->base.numEvents )
        {
          while ( 1 )
          {
            v13 = &v11->base.events[eventIdx];
            if ( (v13->base.flags & 0x200) != 0 )
            {
              ScriptableCl_UpdateEvent(deltaTime, localClientNum, scriptableIndex, part, v11, v13, eventIdx, holdrand, v9);
              if ( v9->stopUpdatingEventsForState )
                break;
            }
            if ( ++eventIdx >= v11->base.numEvents )
              goto LABEL_18;
          }
          if ( !v9->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6283, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            __debugbreak();
        }
      }
    }
LABEL_18:
    if ( part->numChildParts )
    {
      do
        ScriptableCl_UpdatePart(deltaTime, localClientNum, scriptableIndex, &part->childParts[v8++], v9);
      while ( v8 < part->numChildParts );
    }
  }
}

/*
==============
ScriptableCl_UpdateStateEventGravityArc
==============
*/
void ScriptableCl_UpdateStateEventGravityArc(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventGravityArcDef *const moveDef, float deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned __int8 *Data; 
  int time; 
  unsigned int LinkObject; 
  ParticleSystemHandle ParticleSystemHandle; 
  ParticleManager *ParticleManager; 
  int v14; 
  float v15; 
  vec3_t out_result; 
  vec3_t angles; 
  vec3_t origin; 
  ScriptableGravityArcRuntimeData arcData; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2606, ASSERT_TYPE_ASSERT, "(moveDef)", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCl_StateEventGravityArcGetData(InstanceCommonContext, moveDef);
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  ScriptableCl_GravityArcCalcData(localClientNum, scriptableIndex, InstanceCommonContext, moveDef, &arcData);
  if ( time <= *(_DWORD *)Data + arcData.durationMS )
  {
    v14 = time - *(_DWORD *)Data;
    v15 = (float)v14 / (float)arcData.durationMS;
    ScriptableBg_GravityArcCalcDelta(&arcData.velocity, v14, arcData.gravity, &out_result);
    origin.v[0] = arcData.startOrigin.v[0] + out_result.v[0];
    origin.v[1] = arcData.startOrigin.v[1] + out_result.v[1];
    origin.v[2] = arcData.startOrigin.v[2] + out_result.v[2];
    angles.v[0] = (float)((float)(arcData.endAngles.v[0] - arcData.startAngles.v[0]) * v15) + arcData.startAngles.v[0];
    angles.v[1] = (float)((float)(arcData.endAngles.v[1] - arcData.startAngles.v[1]) * v15) + arcData.startAngles.v[1];
    angles.v[2] = (float)((float)(arcData.endAngles.v[2] - arcData.startAngles.v[2]) * v15) + arcData.startAngles.v[2];
    ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &origin, &angles, 0);
    inOutRequest->eventUpdateRequired = 1;
  }
  else
  {
    ScriptableCL_StateEventMovePhysicsClearVelocity(localClientNum, scriptableIndex);
    ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &arcData.endOrigin, &arcData.endAngles, 1);
    *((_BYTE *)InstanceCommonContext + 61) &= ~2u;
    if ( ScriptableCl_IsLoot(localClientNum, scriptableIndex) && ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_CLIENTMODEL )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      ParticleSystemHandle = CG_ClientModel_GetParticleSystemHandle(localClientNum, LinkObject);
      if ( ParticleSystemHandle )
      {
        ParticleManager = ParticleManager::GetParticleManager(localClientNum);
        ParticleManager::KillSystem(ParticleManager, ParticleSystemHandle);
        CG_ClientModel_SetParticleSystemHandle(localClientNum, LinkObject, PARTICLE_SYSTEM_INVALID_HANDLE);
      }
    }
  }
}

/*
==============
ScriptableCl_UpdateStateEventMove
==============
*/
void ScriptableCl_UpdateStateEventMove(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventMoveDef *const moveDef, float deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  Scriptable_EventMove_Data *Data; 
  Scriptable_EventMove_Data *v10; 
  ScriptableInstanceContextSecure *v11; 
  const char *name; 
  cg_t *LocalClientGlobals; 
  float seconds; 
  int time; 
  vec3_t out_endOrigin; 
  vec3_t out_endAngles; 
  vec3_t angles; 
  vec3_t origin; 

  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2488, ASSERT_TYPE_ASSERT, "(moveDef)", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCL_StateEventMoveGetData(InstanceCommonContext, moveDef);
  v10 = Data;
  if ( moveDef->seconds > 0.0 && Data->startTime )
  {
    if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
    {
      Data->startTime = 0;
      v11 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v11->def )
        name = v11->def->name;
      else
        name = "<unknown>";
      Com_PrintError(29, "ScriptableCl UpdateStateEventMove: Scriptable is parented to entity, can't execute event. Index %i '%s'\n", scriptableIndex, name);
    }
    else
    {
      ScriptableBg_LerpCalcEndPoints(&InstanceCommonContext->originInitial, &InstanceCommonContext->anglesInitial, moveDef, &out_endOrigin, &out_endAngles);
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      seconds = moveDef->seconds;
      time = LocalClientGlobals->time;
      if ( time < v10->startTime - (int)(float)(seconds * -1000.0) )
      {
        ScriptableBg_LerpVector(&v10->startOrigin, &out_endOrigin, v10->startTime, time, seconds, moveDef->secondsAccel, moveDef->secondsDecel, &origin);
        ScriptableBg_LerpVector(&v10->startAngles, &out_endAngles, v10->startTime, time, moveDef->seconds, moveDef->secondsAccel, moveDef->secondsDecel, &angles);
        ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &origin, &angles, 0);
        inOutRequest->eventUpdateRequired = 1;
      }
      else
      {
        ScriptableCL_StateEventMovePhysicsClearVelocity(localClientNum, scriptableIndex);
        ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &out_endOrigin, &out_endAngles, 1);
        v10->startTime = 0;
      }
    }
  }
}

/*
==============
ScriptableCl_UpdateStateEventViewTrigger
==============
*/
void ScriptableCl_UpdateStateEventViewTrigger(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableEventViewTriggerDef *const viewTriggerDef, unsigned int eventIdx, unsigned int *holdrand, ScriptableUpdateRequest *inOutRequest)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v12; 
  unsigned __int8 *eventStreamBuffer; 
  bool v14; 
  unsigned int v15; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  bool v25; 
  cg_t *v26; 
  bool v27; 
  unsigned int v28; 
  float v31; 
  float v32; 
  float v33; 
  vec3_t outOrigin; 

  if ( !viewTriggerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5316, ASSERT_TYPE_ASSERT, "(viewTriggerDef)", (const char *)&queryFormat, "viewTriggerDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  eventStreamBufferOffsetClient = viewTriggerDef->eventStreamBufferOffsetClient;
  v12 = InstanceCommonContext;
  if ( eventStreamBufferOffsetClient + 1 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5320, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
    __debugbreak();
  eventStreamBuffer = v12->eventStreamBuffer;
  if ( !eventStreamBuffer[eventStreamBufferOffsetClient] )
  {
    v14 = viewTriggerDef->triggerFOVCosHalfAngle > -1.0;
    v27 = viewTriggerDef->triggerDistanceSq > 0.0;
    if ( viewTriggerDef->triggerDistanceSq > 0.0 || viewTriggerDef->triggerFOVCosHalfAngle > -1.0 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      p_view = &LocalClientGlobals->refdef.view;
      if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = p_view->refdefViewOrg_aab;
      v28 = refdefViewOrg_aab;
      v = (_DWORD *)p_view->org.org.v;
      if ( !v )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        refdefViewOrg_aab = v28;
      }
      LODWORD(v31) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
      LODWORD(v32) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
      LODWORD(v20) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
      v15 = scriptableIndex;
      v33 = v20;
      ScriptableInstanceContextSecure::GetOrigin(v12, scriptableIndex, &outOrigin);
      v21 = outOrigin.v[0] - v31;
      v22 = outOrigin.v[1] - v32;
      v23 = outOrigin.v[2] - v33;
      v24 = (float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23);
      if ( v27 && v24 > viewTriggerDef->triggerDistanceSq )
      {
        v25 = 0;
      }
      else
      {
        eventStreamBuffer[eventStreamBufferOffsetClient] = 1;
        if ( !v14 )
          goto LABEL_24;
        v26 = CG_GetLocalClientGlobals(localClientNum);
        v25 = (float)((float)((float)(v22 * v26->refdef.view.axis.m[0].v[1]) + (float)(v21 * v26->refdef.view.axis.m[0].v[0])) + (float)(v23 * v26->refdef.view.axis.m[0].v[2])) >= (float)(fsqrt(v24) * viewTriggerDef->triggerFOVCosHalfAngle);
      }
      eventStreamBuffer[eventStreamBufferOffsetClient] = v25;
      if ( !v25 )
      {
LABEL_25:
        *inOutRequest = (ScriptableUpdateRequest)257;
        return;
      }
    }
    else
    {
      v15 = scriptableIndex;
      eventStreamBuffer[eventStreamBufferOffsetClient] = 1;
    }
LABEL_24:
    ScriptableCl_RunStateEventsFrom(localClientNum, v15, part, eventIdx + 1, holdrand);
    goto LABEL_25;
  }
}

