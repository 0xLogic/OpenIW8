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
  unsigned int posePart1FirstIndex; 
  int *dynEntComplexCount; 
  int *dynEntComplexBodyCount; 
  int *dynEntComplexAdditionalBoneCount; 
  __int64 v36; 
  int dynEntSimpleAdditionalBoneCount; 
  hknpBodyId result[2]; 
  vec3_t *origina; 
  const DynEntityDef *v40; 
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
  v40 = DynEnt_GetDef(objectId, DYNENT_BASIS_MODEL);
  v11 = v40;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2208, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2209, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2210, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
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
          LODWORD(v36) = numParts;
          LODWORD(dynEntComplexAdditionalBoneCount) = (unsigned __int8)dynEntSimpleAdditionalBoneCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2262, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v22, dynEntComplexAdditionalBoneCount, v36) )
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
          _RBX = &g_dynEntPoseExtraParts[v18][v17 - 1 + PoseFromClientId->posePart1FirstIndex];
        }
        else
        {
          _RBX = (DynEnt_ExtraPosePart *)PoseFromClientId;
        }
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2264, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0D8h+bodyPosition]
          vmovss  dword ptr [rbx+10h], xmm0
          vmovss  xmm1, dword ptr [rsp+0D8h+bodyPosition+4]
          vmovss  dword ptr [rbx+14h], xmm1
          vmovss  xmm0, dword ptr [rsp+0D8h+bodyPosition+8]
          vmovss  dword ptr [rbx+18h], xmm0
          vmovss  xmm1, dword ptr [rsp+0D8h+bodyOrientationAsQuat]
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm0, dword ptr [rsp+0D8h+bodyOrientationAsQuat+4]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm1, dword ptr [rsp+0D8h+bodyOrientationAsQuat+8]
          vmovss  dword ptr [rbx+8], xmm1
          vmovss  xmm0, dword ptr [rsp+0D8h+bodyOrientationAsQuat+0Ch]
        }
        ++v17;
        __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      }
      while ( v17 < (unsigned __int8)dynEntSimpleAdditionalBoneCount );
      v11 = v40;
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
  Scriptable_EventMove_Data *Data; 
  Scriptable_EventMove_Data *v14; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  char v17; 
  char v24; 
  const XModel *ScriptableModel; 
  CgAntiLag *Instance; 
  vec3_t outOrigin; 
  vec3_t out_endAngles; 
  vec3_t out_endOrigin; 
  BgAntiLagLerpMoverCmd out_cmd; 

  _RBP = moveDef;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2425, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  _RBX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCL_StateEventMoveGetData(_RBX, _RBP);
  v14 = Data;
  if ( (*((_BYTE *)_RBX + 60) & 0x20) != 0 )
  {
    Data->startTime = 0;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<unknown>";
    Com_PrintError(29, "ScriptableCl RunStateEventMove: Scriptable is parented to entity, can't execute event. Index %i '%s'\n", scriptableIndex, name);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+178h+var_48], xmm8
      vmovaps [rsp+178h+var_58], xmm9
      vmovaps [rsp+178h+var_68], xmm10
    }
    ScriptableBg_LerpCalcEndPoints(&_RBX->originInitial, &_RBX->anglesInitial, _RBP, &out_endOrigin, &out_endAngles);
    ScriptableInstanceContextSecure::GetOrigin(_RBX, scriptableIndex, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endOrigin]
      vucomiss xmm0, dword ptr [rsp+178h+outOrigin]
      vmovss  xmm8, dword ptr [rbx+2Ch]
      vmovss  xmm9, dword ptr [rbx+30h]
      vmovss  xmm10, dword ptr [rbx+34h]
    }
    if ( !v17 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endOrigin+4]
      vucomiss xmm0, dword ptr [rsp+178h+outOrigin+4]
    }
    if ( !v17 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endOrigin+8]
      vucomiss xmm0, dword ptr [rsp+178h+outOrigin+8]
    }
    if ( !v17 )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endAngles]; angle1
      vmovaps xmm1, xmm8; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( !(v24 | v17) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endAngles+4]; angle1
      vmovaps xmm1, xmm9; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( !(v24 | v17) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+out_endAngles+8]; angle1
      vmovaps xmm1, xmm10; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( v24 | v17 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rbp+20h]
      }
      if ( !v17 )
        v14->startTime = 0;
    }
    else
    {
LABEL_17:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rbp+20h]
      }
      if ( v17 || !onTime )
      {
        v14->startTime = 0;
        ScriptableCL_SetPose(localClientNum, eventParams->scriptableIndex, _RBX, &out_endOrigin, &out_endAngles, 1);
      }
      else
      {
        _RSI = &v14->startOrigin;
        _R12 = &v14->startAngles;
        v14->startTime = CG_GetLocalClientGlobals(localClientNum)->time;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+178h+outOrigin]
          vmovss  dword ptr [rsi], xmm0
          vmovss  xmm1, dword ptr [rsp+178h+outOrigin+4]
          vmovss  dword ptr [rsi+4], xmm1
          vmovss  xmm0, dword ptr [rsp+178h+outOrigin+8]
          vmovss  dword ptr [rsi+8], xmm0
          vmovss  dword ptr [r12], xmm8
          vmovss  dword ptr [r12+4], xmm9
          vmovss  dword ptr [r12+8], xmm10
        }
        if ( ScriptableCl_GetInstanceCollisionContext(localClientNum, eventParams->scriptableIndex)->canPush )
        {
          ScriptableModel = BG_XCompositeModel_GetScriptableModel(_RBX);
          ScriptableBg_SetupAntilagCommand(&out_cmd, eventParams->scriptableIndex, &ScriptableModel->bounds, v14->startTime, &v14->startOrigin, &v14->startAngles, &out_endOrigin, &out_endAngles, _RBP);
          Instance = CgAntiLag::GetInstance(localClientNum);
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2476, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
            __debugbreak();
          CG_EntityWorkers_EnterCriticalSection();
          BgAntiLag::AddLerpMoverCommand(Instance, &out_cmd);
          CG_EntityWorkers_LeaveCriticalSection();
        }
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+178h+var_58]
      vmovaps xmm8, [rsp+178h+var_48]
      vmovaps xmm10, [rsp+178h+var_68]
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
  bool v11; 
  ScriptableLinkType LinkType; 
  unsigned int v15; 
  unsigned int LinkObject; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionPredictive; 
  unsigned int scriptableCollisionAuthoritative; 
  unsigned int scriptableCollisionDetail; 
  int v22; 
  vec3_t outOrigin; 
  __int64 v24; 
  vec4_t quat; 

  v24 = -2i64;
  _RDI = context;
  v9 = localClientNum;
  _R15 = angles;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v11 = !s_scriptableObjectiveLists[v9].changed && ScriptableCL_GetObjectiveActiveInWorldForInstance((const LocalClientNum_t)v9, scriptableIndex);
  if ( v11 )
    ScriptableInstanceContextSecure::GetOrigin(_RDI, scriptableIndex, &outOrigin);
  ScriptableInstanceContextSecure::SetOrigin(_RDI, scriptableIndex, origin);
  _RDI->angles.v[0] = angles->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  dword ptr [rdi+30h], xmm0
    vmovss  xmm1, dword ptr [r15+8]
    vmovss  dword ptr [rdi+34h], xmm1
  }
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
      v15 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v9, scriptableIndex);
      CG_ClientModel_SetOrigin((const LocalClientNum_t)v9, v15, origin);
      CG_ClientModel_SetAngles((const LocalClientNum_t)v9, v15, angles);
    }
    if ( v11 )
    {
      __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
      if ( VecNCompareCustomEpsilon(outOrigin.v, origin->v, *(float *)&_XMM2, 3) )
      {
LABEL_20:
        InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext((const LocalClientNum_t)v9, scriptableIndex);
        scriptableCollisionPredictive = InstanceCollisionContext->scriptableCollisionPredictive;
        scriptableCollisionAuthoritative = InstanceCollisionContext->scriptableCollisionAuthoritative;
        scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
        if ( InstanceCollisionContext->scriptableCollisionPredictive != -1 || scriptableCollisionAuthoritative != -1 || scriptableCollisionDetail != -1 )
        {
          CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
          v22 = 3 * v9;
          if ( scriptableCollisionPredictive != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v22 + 2), InstanceCollisionContext->scriptableCollisionPredictive, origin, &quat, WARP);
          if ( scriptableCollisionAuthoritative != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v22 + 3), InstanceCollisionContext->scriptableCollisionAuthoritative, origin, &quat, (Scriptable_PhysicsSetPoseCmd)warp);
          if ( scriptableCollisionDetail != -1 )
            ScriptableBg_PhysicsSetPose((Physics_WorldId)(v22 + 4), InstanceCollisionContext->scriptableCollisionDetail, origin, &quat, WARP);
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

  _RBX = moveDef;
  if ( (!context || !moveDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2191, ASSERT_TYPE_ASSERT, "(context && moveDef)", (const char *)&queryFormat, "context && moveDef") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+20h]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2192, ASSERT_TYPE_ASSERT, "(moveDef->seconds > 0.0f)", (const char *)&queryFormat, "moveDef->seconds > 0.0f") )
    __debugbreak();
  eventStreamBufferOffsetClient = _RBX->eventStreamBufferOffsetClient;
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

void __fastcall ScriptableCL_UpdateStateEventMaterialOverride(double deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, ScriptableUpdateRequest *inOutRequest)
{
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int LinkObject; 
  char v24; 
  DObj *ClientDObj; 

  if ( !CG_GetLocalClientGlobals(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2077, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
  if ( Entity )
  {
    if ( Entity->nextState.eType != ET_SCRIPTMOVER || (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) == 0 || (otherEntityNum = Entity->nextState.otherEntityNum, otherEntityNum == 2047) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      otherEntityNum = truncate_cast<short,unsigned int>(LinkObject);
    }
    if ( (unsigned __int64)event->data.wait.eventStreamBufferOffsetClient + 5 > ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2101, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( int ) + sizeof( uint8_t ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovaps [rsp+68h+var_38], xmm7
      vmovss  xmm6, cs:__real@3f800000
    }
    if ( event->data.viewmodelChangeImage.imageValue <= 0 )
    {
      __asm { vmovaps xmm7, xmm6 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vcvtsi2ss xmm0, xmm0, edx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      deltaTime = I_fclamp(*(float *)&deltaTime, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm7, xmm0
      }
      if ( v24 )
        inOutRequest->eventUpdateRequired = 1;
    }
    ClientDObj = Com_GetClientDObj(otherEntityNum, localClientNum);
    if ( ClientDObj )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vsubss  xmm1, xmm6, xmm7
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vmulss  xmm0, xmm1, xmm7
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si r9d, xmm2; newValue
      }
      R_UpdateScriptableEntityData(localClientNum, ClientDObj->entnum, event->data.materialOverride.materialOverrideType, _ER9);
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_28]
      vmovaps xmm7, [rsp+68h+var_38]
    }
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
  __int64 v12; 
  int v13; 
  __int64 v14; 
  CgEntitySystem *EntitySystem; 
  __int64 v20; 
  BgWeaponHandle *v21; 
  __int16 v22; 
  char v23; 
  char v24; 
  __int16 i; 
  unsigned int v26; 
  int v27; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  CgWeaponMap *v41; 
  const Weapon *Weapon; 
  bool result; 
  const dvar_t *v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  vec3_t outOrigin; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
  }
  _R12 = outVelocity;
  _R15 = scriptableCenter;
  v12 = localClientNum;
  v13 = 0;
  v14 = 0i64;
  __asm
  {
    vmovss  xmm9, cs:__real@43200000
    vmovsd  xmm8, cs:__real@3f30000000000000
    vmovss  xmm11, cs:__real@80000000
    vmovss  xmm10, cs:__real@3f800000
  }
  while ( 1 )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v12);
    if ( (unsigned int)v13 >= 0x800 )
    {
      LODWORD(v72) = 2048;
      LODWORD(v71) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v71, v72) )
        __debugbreak();
    }
    v20 = (__int64)&EntitySystem->m_entities[v14];
    if ( (*(_BYTE *)(v20 + 648) & 1) == 0 )
      goto LABEL_46;
    v21 = (BgWeaponHandle *)(v20 + 400);
    if ( v20 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((*(_WORD *)(v20 + 408) - 12) & 0xFFFD) != 0 )
      break;
    if ( *(_BYTE *)(v20 + 524) )
      goto LABEL_13;
LABEL_45:
    memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_46:
    ++v13;
    ++v14;
    if ( v13 >= 2048 )
    {
      result = 0;
      goto LABEL_48;
    }
  }
  v22 = *(_WORD *)(v20 + 408);
  if ( v22 != 4 )
  {
    if ( !v22 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( SLOWORD(v21->m_mapEntryId) < (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v74) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(v73) = SLOWORD(v21->m_mapEntryId);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1457, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) >= ( ComCharacterLimits::GetClientMaxCount() )", "%s >= %s\n\t%i, %i", "cent->nextState.number", "ComCharacterLimits::GetClientMaxCount()", v73, v74) )
          __debugbreak();
      }
      for ( i = *(_WORD *)(v20 + 672); i != *(_WORD *)(v20 + 552); ++i )
      {
        v26 = *(_DWORD *)(v20 + 8i64 * (i & 3) + 560) - 108;
        if ( v26 <= 8 )
        {
          v27 = 291;
          if ( _bittest(&v27, v26) )
          {
            if ( !*(_QWORD *)(v20 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
              __debugbreak();
            FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v20 + 48), (const cpose_t *)v20);
            FunctionPointer_origin((const vec4_t *)(v20 + 56), &outOrigin);
            if ( *(_BYTE *)(v20 + 2) )
            {
              __asm
              {
                vmovd   xmm0, dword ptr [rsp+0F8h+outOrigin]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm8
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+0F8h+outOrigin], xmm2
                vmovd   xmm0, dword ptr [rsp+0F8h+outOrigin+4]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm8
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+0F8h+outOrigin+4], xmm2
                vmovd   xmm0, dword ptr [rsp+0F8h+outOrigin+8]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm8
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+0F8h+outOrigin+8], xmm2
              }
            }
            if ( !CgWeaponMap::ms_instance[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v41 = CgWeaponMap::ms_instance[v12];
            if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
              __debugbreak();
            Weapon = BgWeaponMap::GetWeapon(v41, v21[33]);
            BG_ExplosionRadius(Weapon, 0);
            __asm
            {
              vxorps  xmm7, xmm7, xmm7
              vcvtsi2ss xmm7, xmm7, eax
            }
            goto LABEL_44;
          }
        }
      }
    }
    goto LABEL_45;
  }
LABEL_13:
  CG_GetPoseOrigin((const cpose_t *)v20, &outOrigin);
  __asm { vmovaps xmm7, xmm9 }
LABEL_44:
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vsubss  xmm6, xmm0, dword ptr [rsp+0F8h+outOrigin]
    vmovss  dword ptr [r12], xmm6
    vmovss  xmm1, dword ptr [r15+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+0F8h+outOrigin+4]
    vmovss  dword ptr [r12+4], xmm5
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+outOrigin+8]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [r12], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [r12+4], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r12+8], xmm0
    vcomiss xmm3, xmm7
  }
  if ( !(v23 | v24) )
    goto LABEL_45;
  v70 = DCONST_DVARBOOL_scriptable_debug_impact;
  if ( !DCONST_DVARBOOL_scriptable_debug_impact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_impact") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  if ( v70->current.enabled )
  {
    CG_DebugLine(&outOrigin, _R15, &colorRed, 0, 600);
    CG_DebugStar(_R15, &colorCyan, 0, 600);
  }
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_48:
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
  unsigned __int8 count; 
  unsigned __int8 objectiveIndex; 
  unsigned __int8 v8; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v18 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableObjectiveLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableObjectiveLists )\n\t%i not in [0, %i)", localClientNum, v18) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  if ( InstanceCommonContext->objectiveIndex )
  {
    _RDI = &s_scriptableObjectiveLists[v2];
    if ( !_RDI->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 341, ASSERT_TYPE_ASSERT, "(list.count > 0)", (const char *)&queryFormat, "list.count > 0") )
      __debugbreak();
    count = _RDI->count;
    if ( count )
    {
      objectiveIndex = InstanceCommonContext->objectiveIndex;
      v8 = objectiveIndex - 1;
      if ( (unsigned __int8)(objectiveIndex - 1) >= count )
      {
        LODWORD(v17) = count;
        LODWORD(v15) = (unsigned __int8)(objectiveIndex - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( list.count )", "objectiveIndex doesn't index list.count\n\t%i not in [0, %i)", v15, v17) )
          __debugbreak();
      }
      _R15 = 2i64 * v8;
      if ( _RDI->objectives[v8].scriptableIndex != scriptableIndex )
      {
        v20 = scriptableIndex;
        v19 = _RDI->objectives[v8].scriptableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 351, ASSERT_TYPE_ASSERT, "( list.objectives[objectiveIndex].scriptableIndex ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "list.objectives[objectiveIndex].scriptableIndex", "scriptableIndex", v19, v20) )
          __debugbreak();
      }
      v10 = _RDI->count;
      if ( v8 < v10 && _RDI->objectives[v8].scriptableIndex == scriptableIndex )
      {
        v11 = v10 - 1;
        if ( v10 > 1u )
        {
          _RBX = 2i64 * (unsigned __int8)(v10 - 1);
          ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, _RDI->objectives[(unsigned __int8)(v10 - 1)].scriptableIndex)->objectiveIndex = objectiveIndex;
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi+rbx*8]
            vmovups xmmword ptr [rdi+r15*8], xmm0
          }
          v10 = _RDI->count;
        }
        if ( v11 >= v10 )
        {
          LODWORD(v17) = v10;
          LODWORD(v15) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 375, ASSERT_TYPE_ASSERT, "(unsigned)( lastIndex ) < (unsigned)( list.count )", "lastIndex doesn't index list.count\n\t%i not in [0, %i)", v15, v17) )
            __debugbreak();
        }
        v14 = v11;
        _RDI->objectives[v14].scriptableIndex = -1;
        _RDI->objectives[v14].settings = NULL;
        --_RDI->count;
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
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0C8h+out_usePosition]
          vmovss  xmm1, dword ptr [rsp+0C8h+out_usePosition+4]
          vmovss  dword ptr [rsp+0C8h+end], xmm0
          vmovss  xmm0, dword ptr [rsp+0C8h+out_usePosition+8]
          vaddss  xmm2, xmm0, cs:__real@42700000
          vmovss  dword ptr [rsp+0C8h+end+8], xmm2
          vmovss  dword ptr [rsp+0C8h+end+4], xmm1
        }
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
  unsigned int v10; 
  __int64 v12; 
  int time; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v16; 
  ScriptableLinkType LinkType; 
  unsigned int LinkObject; 
  int v45; 
  ParticleSystemHandle v46; 
  unsigned int v47; 
  int scrTagCount; 
  int v49; 
  unsigned __int8 BoneIdx; 
  unsigned __int16 v51; 
  ParticleSystemHandle v52; 
  __int64 v53; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  const dvar_t *v57; 
  unsigned int v58; 
  __int64 v59; 
  ParticleSystem *v60; 
  const ParticleSystemDef *v61; 
  const char *name; 
  ParticleSystemHandle v63; 
  ParticleSystem *ParticleSystemPointerUnsafe; 
  cg_t *LocalClientGlobals; 
  scr_string_t v73; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  int v76; 
  const DObj *ClientDObj; 
  const DObj *v78; 
  unsigned int BoneIndexForDobj; 
  DObj *DObj; 
  unsigned int v81; 
  unsigned int v82; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  entityType_s eType; 
  __int64 number; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int64 v88; 
  __int64 v89; 
  int v90; 
  ParticleSystemHandle v91; 
  int v92; 
  int v93; 
  ParticleSystem *v94; 
  const ParticleSystemDef *particleSystemDef; 
  const char *v103; 
  const char *v104; 
  __int64 v105; 
  __int64 *v106; 
  __int64 v107; 
  unsigned int v108; 
  unsigned __int64 v109; 
  __int64 boneIndex; 
  __int64 spawnFlags; 
  __int64 markEntnum; 
  bool NearestImpactVelocity; 
  unsigned __int8 index[7]; 
  __int64 v124; 
  FXRegisteredDef def; 
  int v126; 
  unsigned int pHoldrand; 
  int dobjHandle; 
  unsigned int ViewmodelDObjHandle; 
  unsigned int scriptableIndexa; 
  scr_string_t boneTag; 
  const char ***v132; 
  __int64 v133; 
  __int64 v134; 
  DObj *obj[2]; 
  float4 endPos; 
  float4 startPos; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> in2; 
  char dest[256]; 
  char v142; 
  void *retaddr; 

  _RAX = &retaddr;
  v134 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v10 = scriptableIndex;
  scriptableIndexa = scriptableIndex;
  v12 = localClientNum;
  v126 = 0;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( !particleFX->effectDef.particleSystemDef )
    goto LABEL_129;
  def.m_particleSystemDef = particleFX->effectDef.particleSystemDef;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B; tmat33_t<vec3_t> const identityMatrix33
    vmovups ymmword ptr [rsp+2C8h+in1], ymm0
  }
  in1.m[2].v[2] = identityMatrix33.m[2].v[2];
  v124 = 0i64;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v12, v10);
  v16 = InstanceCommonContext;
  v132 = (const char ***)InstanceCommonContext;
  NearestImpactVelocity = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+2C8h+obj], xmm6
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rsp+2C8h+obj+4], xmm7
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rsp+2C8h+obj+8], xmm8
  }
  if ( eventParams && (_RCX = eventParams->damageEvent) != NULL )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+44h]
      vsubss  xmm6, xmm0, dword ptr [rcx+38h]
      vmovss  xmm1, dword ptr [rcx+48h]
      vsubss  xmm5, xmm1, dword ptr [rcx+3Ch]
      vmovss  xmm0, dword ptr [rcx+4Ch]
      vsubss  xmm4, xmm0, dword ptr [rcx+40h]
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm1, xmm2, xmm0
      vmovss  [rsp+2C8h+boneTag], xmm1
      vdivss  xmm0, xmm2, xmm1
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm7, xmm5, xmm0
      vmulss  xmm8, xmm4, xmm0
    }
    NearestImpactVelocity = 1;
  }
  else if ( particleFX->allowNearestVehicleVelocity )
  {
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v10, (vec3_t *)&endPos);
    NearestImpactVelocity = ScriptableCl_GetNearestImpactVelocity((const LocalClientNum_t)v12, (const vec3_t *)&endPos, (vec3_t *)obj);
    memset(&endPos, 0, 0xCui64);
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+2C8h+obj+8]
      vmovss  xmm7, dword ptr [rsp+2C8h+obj+4]
      vmovss  xmm6, dword ptr [rsp+2C8h+obj]
    }
  }
  pHoldrand = Sys_Milliseconds();
  LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)v12, v10);
  v133 = 2i64;
  if ( LinkType == SCRIPTABLE_LINK_NONE )
  {
    ScriptableInstanceContextSecure::GetOrigin(v16, v10, (vec3_t *)obj);
    AnglesToAxis(&v16->angles, &in2);
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    LODWORD(v124) = FX_PlayOrientedEffect((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &in2);
    CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
    memset(obj, 0, 0xCui64);
    goto LABEL_28;
  }
  if ( LinkType != SCRIPTABLE_LINK_ENTITY )
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT )
    {
      if ( LinkType != SCRIPTABLE_LINK_CLIENTMODEL )
        goto LABEL_129;
      if ( particleFX->useTagAngles && particleFX->scrTagCount && (LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v12, v10), v45 = truncate_cast<int,unsigned int>(LinkObject) + 2117, v45 <= 2500) )
      {
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        v46 = FX_PlayBoltedEffect((LocalClientNum_t)v12, &def, time, v45, 0, 0);
        LODWORD(v124) = v46;
        if ( v46 )
          ScriptableCl_MLG_hackPFXTint((const LocalClientNum_t)v12, eventParams, v46, eventIdx);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      }
      else
      {
        ScriptableInstanceContextSecure::GetOrigin(v16, v10, (vec3_t *)obj);
        AnglesToAxis(&v16->angles, &axis);
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        LODWORD(v124) = FX_PlayOrientedEffect((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &axis);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
        memset(obj, 0, 0xCui64);
      }
      goto LABEL_28;
    }
    v47 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v12, v10);
    scrTagCount = particleFX->scrTagCount;
    if ( scrTagCount )
    {
      v49 = BG_irand(0, scrTagCount, &pHoldrand);
      BoneIdx = DynEnt_GetBoneIdx((LocalClientNum_t)v12, v47, particleFX->scrTagNames[v49], v16->def->name);
      if ( BoneIdx != 0xFE )
      {
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        if ( v47 == -1 || !fx_marks_dynents_ext_killswitch->current.enabled )
          v51 = 0;
        else
          v51 = 2;
        v52 = FX_PlayBoltedToDynEntEffect((LocalClientNum_t)v12, &def, time, v47, BoneIdx, v51);
        LODWORD(v124) = v52;
        if ( v52 )
          ScriptableCl_MLG_hackPFXTint((const LocalClientNum_t)v12, eventParams, v52, eventIdx);
        CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      }
LABEL_27:
      v16 = (ScriptableInstanceContextSecure *)v132;
      goto LABEL_28;
    }
    if ( particleFX->useTagAngles )
    {
      AnglesToAxis(&v16->angles, &in2);
      MatrixMultiply(&in1, &in2, &axis);
    }
    else
    {
      MatrixCopy33(&in1, &axis);
    }
    ScriptableInstanceContextSecure::GetOrigin(v16, v10, (vec3_t *)obj);
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    if ( v47 == -1 || !fx_marks_dynents_ext_killswitch->current.enabled )
      v63 = FX_PlayOrientedEffect((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &axis);
    else
      v63 = FX_PlayOrientedEffectWithMarkEntity((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &axis, 2u, v47, 1, 0xFEu, NULL);
    LODWORD(v124) = v63;
    ParticleSystemPointerUnsafe = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v12, v63);
    if ( particleFX->scrEndTagCount && ParticleSystemPointerUnsafe )
    {
      __asm { vmovss  xmm0, dword ptr [rsp+2C8h+obj] }
      endPos.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+2C8h+endPos.v]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+8], 20h
        vmovups xmmword ptr [rsp+2C8h+endPos.v], xmm3
        vmovups xmmword ptr [rsp+2C8h+startPos.v], xmm3
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsp+2C8h+endPos.v], xmm0
      }
      ParticleSystem::SetBeamPos(ParticleSystemPointerUnsafe, &startPos, &endPos);
    }
    goto LABEL_55;
  }
  if ( particleFX->useTagAngles )
  {
    if ( !particleFX->scrTagCount )
    {
      AnglesToAxis(&v16->angles, &in2);
      MatrixMultiply(&in1, &in2, &axis);
      ScriptableInstanceContextSecure::GetOrigin(v16, v10, (vec3_t *)obj);
      CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
      LODWORD(v124) = FX_PlayOrientedEffect((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &axis);
      CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
      memset(obj, 0, 0xCui64);
      goto LABEL_28;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1703, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v73 = particleFX->scrTagNames[BG_irand(0, particleFX->scrTagCount, &pHoldrand)];
    boneTag = v73;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v12);
    endPos.v.m128_u64[0] = (unsigned __int64)Instance;
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1711, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( particleFX->isViewmodel )
    {
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
      v76 = BG_PlayerDualWieldingWeapon(Instance, &LocalClientGlobals->predictedPlayerState, CurrentWeaponForPlayer);
      dobjHandle = ScriptableCL_GetViewmodelDObjHandle(WEAPON_HAND_DEFAULT);
      ClientDObj = Com_GetClientDObj(dobjHandle, (LocalClientNum_t)v12);
      startPos.v.m128_i32[0] = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v12, ClientDObj, v10, v73, particleFX->allowMissingTag);
      if ( !v76 )
      {
LABEL_92:
        CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
        v88 = 0i64;
        v89 = (unsigned int)(v126 + 1);
        while ( 1 )
        {
          v90 = startPos.v.m128_i32[v88 / 4];
          if ( v90 != 255 )
            break;
          if ( particleFX->useRootOnMissingTag )
          {
            v91 = FX_PlayBoltedEffect((LocalClientNum_t)v12, &def, time, *(int *)((char *)&dobjHandle + v88), 0, 0);
LABEL_97:
            *(_DWORD *)((char *)&v124 + v88) = v91;
          }
          v88 += 4i64;
          if ( !--v89 )
          {
            CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
            v10 = scriptableIndexa;
            goto LABEL_27;
          }
        }
        v91 = FX_PlayBoltedEffect((LocalClientNum_t)v12, &def, time, *(int *)((char *)&dobjHandle + v88), v90, 0);
        goto LABEL_97;
      }
      v126 = 1;
      ViewmodelDObjHandle = ScriptableCL_GetViewmodelDObjHandle(WEAPON_HAND_LEFT);
      v78 = Com_GetClientDObj(ViewmodelDObjHandle, (LocalClientNum_t)v12);
      BoneIndexForDobj = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v12, v78, v10, v73, particleFX->allowMissingTag);
    }
    else
    {
      if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v12, v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1737, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
        __debugbreak();
      DObj = ScriptableCl_GetDObj((const LocalClientNum_t)v12, v10);
      obj[0] = DObj;
      v81 = ScriptableCl_GetLinkObject((const LocalClientNum_t)v12, v10);
      dobjHandle = v81;
      v82 = ScriptableCl_GetBoneIndexForDobj((const LocalClientNum_t)v12, DObj, scriptableIndexa, v73, particleFX->allowMissingTag);
      startPos.v.m128_i32[0] = v82;
      Entity = CG_GetEntity((const LocalClientNum_t)v12, v81);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1745, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      p_nextState = &Entity->nextState;
      if ( v82 == 255 || (Entity->flags & 1) == 0 )
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
      if ( !CG_Utils_GetActiveWeaponBoneIndex((LocalClientNum_t)v12, obj[0], NULL, p_nextState, WEAPON_HAND_LEFT, boneTag, index) )
        goto LABEL_92;
      v126 = 1;
      ViewmodelDObjHandle = dobjHandle;
      BoneIndexForDobj = index[0];
    }
    startPos.v.m128_i32[1] = BoneIndexForDobj;
    goto LABEL_92;
  }
  ScriptableInstanceContextSecure::GetOrigin(v16, v10, (vec3_t *)obj);
  v92 = particleFX->scrTagCount;
  if ( v92 )
  {
    v93 = BG_irand(0, v92, &pHoldrand);
    if ( !ScriptableCl_GetBonePosition((const LocalClientNum_t)v12, v10, (const scr_string_t)particleFX->scrTagNames[v93], (vec3_t *)obj, particleFX->allowMissingTag) && !particleFX->useRootOnMissingTag )
    {
      memset(obj, 0, 0xCui64);
      goto LABEL_129;
    }
  }
  CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
  LODWORD(v124) = FX_PlayOrientedEffect((LocalClientNum_t)v12, &def, time, (const vec3_t *)obj, &in1);
  v94 = Particle_GetParticleSystemPointerUnsafe((LocalClientNum_t)v12, (ParticleSystemHandle)v124);
  if ( particleFX->scrEndTagCount && v94 )
  {
    __asm { vmovss  xmm0, dword ptr [rsp+2C8h+obj] }
    endPos.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+2C8h+endPos.v]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+2C8h+obj+8], 20h
      vmovups xmmword ptr [rsp+2C8h+endPos.v], xmm3
      vmovups xmmword ptr [rsp+2C8h+startPos.v], xmm3
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rsp+2C8h+endPos.v], xmm0
    }
    ParticleSystem::SetBeamPos(v94, &startPos, &endPos);
  }
LABEL_55:
  CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
  memset(obj, 0, 0xCui64);
LABEL_28:
  v53 = v12;
  if ( particleFX->oneshotLooping )
  {
    eventStreamBufferOffsetClient = particleFX->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)v16->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1925, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    v55 = &v16->eventStreamBuffer[eventStreamBufferOffsetClient];
    v56 = v55;
    do
    {
      *(_DWORD *)v56 = *(_DWORD *)&v56[(char *)&v124 - (char *)v55];
      v57 = DVARBOOL_scriptable_particle_event_debug;
      if ( !DVARBOOL_scriptable_particle_event_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_particle_event_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v57);
      if ( v57->current.enabled && *(_DWORD *)v55 )
      {
        v58 = 0;
        if ( g_particleSystemsGeneration[4096 * v53 + (*(_DWORD *)v55 & 0xFFF)].__all32 == *(_DWORD *)v55 )
          v58 = *(_DWORD *)v55 & 0xFFF;
        v59 = (v53 << 12) + v58;
        v60 = NULL;
        if ( g_particleSystems[0][v59] >= (ParticleSystem *)0x1000 )
          v60 = g_particleSystems[0][v59];
        if ( v60 && (v61 = ParticleSystem::GetDef(v60)) != NULL )
          name = v61->name;
        else
          name = "Unknown";
        particleSystemDef = particleFX->effectDef.particleSystemDef;
        if ( particleSystemDef )
          v103 = particleSystemDef->name;
        else
          v103 = "Unknown";
        if ( *v132 )
          v104 = **v132;
        else
          v104 = "Unknown";
        LODWORD(markEntnum) = *(_DWORD *)v55;
        LODWORD(boneIndex) = v10;
        Com_sprintf(dest, 0x100ui64, "Scriptable\t%s\t%i\tStart-Particle\t%s\t%i\t%s\n", v104, boneIndex, v103, markEntnum, name);
        Com_PrintMessage(29, dest, 0);
      }
      v56 += 4;
      --v133;
    }
    while ( v133 );
  }
  if ( NearestImpactVelocity )
  {
    CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
    v105 = v53 << 12;
    v106 = &v124;
    v107 = (unsigned int)(v126 + 1);
    do
    {
      v108 = 0;
      if ( g_particleSystemsGeneration[v105 + (*(_DWORD *)v106 & 0xFFF)].__all32 == *(_DWORD *)v106 )
        v108 = *(_DWORD *)v106 & 0xFFF;
      v109 = *((_QWORD *)&g_particleSystems[0][v105] + v108);
      _RAX = 0i64;
      if ( v109 >= 0x1000 )
        _RAX = v109;
      if ( _RAX )
      {
        HIDWORD(obj[1]) = 0;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+2C8h+obj]
          vmovss  xmm0, xmm0, xmm6
          vinsertps xmm0, xmm0, xmm7, 10h
          vinsertps xmm0, xmm0, xmm8, 20h ; ' '
          vmovups xmmword ptr [rsp+2C8h+obj], xmm0
          vmovups xmmword ptr [rax+90h], xmm0
        }
        *(_QWORD *)(_RAX + 416) |= 0x4000ui64;
      }
      v106 = (__int64 *)((char *)v106 + 4);
      --v107;
    }
    while ( v107 );
    CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
  }
LABEL_129:
  _R11 = &v142;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
ScriptableCl_PlaySound
==============
*/
void ScriptableCl_PlaySound(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventSoundDef *sound)
{
  unsigned int v7; 
  SndAliasList *soundAliasCache; 
  const char *v10; 
  const char *v11; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  SndAliasList *Alias; 
  const char *v15; 
  ScriptableInstanceContextSecure *v16; 
  const char *aliasName; 
  const char *soundAlias; 
  __int64 v19; 
  signed __int64 v20; 
  int v21; 
  int v22; 
  int v24; 
  int v25; 
  SndAliasList *v26; 
  char v27; 
  char looping; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  ScriptableInstanceContextSecure *v32; 
  ScriptableInstanceContextSecure *v33; 
  unsigned __int64 count; 
  unsigned __int64 v36; 
  SndAlias *head; 
  bool v38; 
  scr_string_t scrTagName; 
  bool v43; 
  bool BonePosition; 
  __int16 v52; 
  unsigned int LinkObject; 
  unsigned int v54; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  __int32 v60; 
  unsigned int scriptableCollisionPredictive; 
  unsigned int RigidBodyID; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v64; 
  hkMemoryAllocator *v65; 
  CgSoundSystem *SoundSystem; 
  const char *explosionReflClass; 
  const char *v68; 
  char v69; 
  int v70; 
  char v71; 
  unsigned __int64 ScriptableSndEntHandle; 
  int parent; 
  int siblings; 
  int siblingsa; 
  int linked; 
  vec3_t outOrigin; 
  HavokPhysics_IgnoreBodies v82; 
  __int64 v83; 
  vec3_t out; 
  Physics_RaycastExtendedData axis; 
  void *retaddr; 

  _RAX = &retaddr;
  v83 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RBX = sound;
  v7 = scriptableIndex;
  if ( !sound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2750, ASSERT_TYPE_ASSERT, "(sound)", (const char *)&queryFormat, "sound") )
    __debugbreak();
  if ( !MLG_IsCoDCasterEnabled() || !MLG_IsLocalPlayerMLGSpectator(localClientNum) || I_strcmp(_RBX->soundAlias, "mus_jugg_01") && I_strcmp(_RBX->soundAlias, "mus_jugg_01_hp") )
  {
    soundAliasCache = _RBX->soundAliasCache;
    v10 = "<unknown>";
    if ( soundAliasCache )
    {
      aliasName = soundAliasCache->aliasName;
      soundAlias = _RBX->soundAlias;
      v19 = 0x7FFFFFFFi64;
      if ( !soundAlias && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v20 = soundAlias - aliasName;
      do
      {
        v21 = (unsigned __int8)aliasName[v20];
        v22 = *(unsigned __int8 *)aliasName++;
        if ( !v19-- )
          break;
        if ( v21 != v22 )
        {
          v24 = v21 + 32;
          if ( (unsigned int)(v21 - 65) > 0x19 )
            v24 = v21;
          v21 = v24;
          v25 = v22 + 32;
          if ( (unsigned int)(v22 - 65) > 0x19 )
            v25 = v22;
          if ( v21 != v25 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2775, ASSERT_TYPE_ASSERT, "( !I_stricmp( sound->soundAlias, sound->soundAliasCache->aliasName ) )", "Sound cache name does not match. %s vs %s", _RBX->soundAlias, _RBX->soundAliasCache->aliasName) )
              __debugbreak();
            break;
          }
        }
      }
      while ( v21 );
      v26 = _RBX->soundAliasCache;
      if ( SND_TryFindAlias(_RBX->soundAlias) != v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2776, ASSERT_TYPE_ASSERT, "( SND_TryFindAlias( sound->soundAlias ) == sound->soundAliasCache )", "Sound cache alias does not match. %s vs %s", _RBX->soundAlias, v26->aliasName) )
        __debugbreak();
      Alias = _RBX->soundAliasCache;
      if ( Alias )
      {
        v7 = scriptableIndex;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2780, ASSERT_TYPE_ASSERT, "( ( aliasList != nullptr ) )", "( sound->soundAlias ) = %s", _RBX->soundAlias) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
          __debugbreak();
        v7 = scriptableIndex;
      }
    }
    else
    {
      v11 = _RBX->soundAlias;
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v7);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      Com_PrintWarning(14, "Scriptable %s is trying to play sound %s which has not been cached. Performance warning.\n", name, v11);
      Alias = SND_TryFindAlias(_RBX->soundAlias);
      if ( !Alias )
      {
        v15 = _RBX->soundAlias;
        v16 = ScriptableCl_GetInstanceCommonContext(localClientNum, v7);
        if ( v16->def )
          v10 = v16->def->name;
        Com_PrintWarning(14, "Scriptable %s is trying to play sound %s, but we can't find the alias list\n", v10, v15);
        goto LABEL_114;
      }
    }
    if ( !Alias->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
      __debugbreak();
    v27 = Alias->head->flags & 1;
    looping = _RBX->looping;
    if ( looping == v27 )
    {
      v33 = ScriptableCl_GetInstanceCommonContext(localClientNum, v7);
      ScriptableInstanceContextSecure::GetOrigin(v33, v7, &outOrigin);
      if ( v27 )
      {
        *(double *)&_XMM0 = SND_DistSqToNearestListener(&outOrigin);
        __asm { vmovaps xmm2, xmm0 }
        if ( Alias->count <= 0 )
          goto LABEL_114;
        count = Alias->count;
        v36 = 0i64;
        head = Alias->head;
        v38 = __CFADD__(head, 104i64) || (SndAlias *)&head->distMax == NULL;
        _RAX = &head->distMax;
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rax]
            vmulss  xmm0, xmm1, xmm1
            vcomiss xmm2, xmm0
          }
          if ( v38 )
            break;
          ++v36;
          _RAX += 58;
          v38 = v36 <= count;
          if ( (__int64)v36 >= (__int64)count )
            goto LABEL_114;
        }
      }
      scrTagName = _RBX->scrTagName;
      v43 = scrTagName == 0;
      if ( !scrTagName || (BonePosition = ScriptableCl_GetBonePosition(localClientNum, v7, scrTagName, &outOrigin, _RBX->allowMissingTag), v43 = !BonePosition, BonePosition) || (v43 = !_RBX->useRootOnMissingTag, _RBX->useRootOnMissingTag) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vucomiss xmm6, dword ptr [rbx+40h]
        }
        if ( !v43 )
          goto LABEL_67;
        __asm { vucomiss xmm6, dword ptr [rbx+44h] }
        if ( !v43 )
          goto LABEL_67;
        __asm { vucomiss xmm6, dword ptr [rbx+48h] }
        if ( !v43 )
        {
LABEL_67:
          AnglesToAxis(&v33->angles, (tmat33_t<vec3_t> *)&axis);
          AxisTransformVec3((const tmat33_t<vec3_t> *)&axis, &_RBX->worldOffset, &out);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+130h+outOrigin]
            vaddss  xmm1, xmm0, dword ptr [rbp+57h+out]
            vmovss  dword ptr [rsp+130h+outOrigin], xmm1
            vmovss  xmm2, dword ptr [rbp+57h+outOrigin+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+57h+out+4]
            vmovss  dword ptr [rbp+57h+outOrigin+4], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+outOrigin+8]
            vaddss  xmm2, xmm1, dword ptr [rbp+57h+out+8]
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm2
          }
        }
        v52 = 2046;
        if ( ScriptableCl_GetLinkTypeEquals(localClientNum, v7, SCRIPTABLE_LINK_ENTITY) )
        {
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, v7);
          v52 = truncate_cast<short,unsigned int>(LinkObject);
        }
        v54 = 0;
        if ( _RBX->doGroundTrace )
        {
          Sys_ProfBeginNamedEvent(0xFFD2691E, "ScriptableCl_PlaySound_GroundTrace");
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+130h+outOrigin]
            vmovss  dword ptr [rbp+57h+out], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+outOrigin+4]
            vmovss  dword ptr [rbp+57h+out+4], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
            vsubss  xmm1, xmm0, dword ptr [rbx+3Ch]
            vmovss  dword ptr [rbp+57h+out+8], xmm1
          }
          InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
          CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
          v60 = 3 * localClientNum + 2;
          scriptableCollisionPredictive = InstanceCollisionContext->scriptableCollisionPredictive;
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v82, v52 != 2046, scriptableCollisionPredictive != -1);
          if ( v52 != 2046 )
            HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v82, 0, v52, 1, 1, 0, 1, 1);
          if ( scriptableCollisionPredictive != -1 )
          {
            if ( Physics_GetNumRigidBodys((const Physics_WorldId)v60, scriptableCollisionPredictive) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2877, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, collisionInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( worldId, collisionInstanceId ) == 1") )
              __debugbreak();
            RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v60, scriptableCollisionPredictive, 0);
            if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2879, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            HavokPhysics_IgnoreBodies::SetIgnoreBody(&v82, 0, RigidBodyID);
          }
          axis.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          __asm { vmovss  dword ptr [rbp+57h+axis+14h], xmm6 }
          *(_QWORD *)&axis.phaseSelection = 0x100000000i64;
          *(_WORD *)&axis.collectInsideHits = 256;
          axis.contents = 8391987;
          axis.ignoreBodies = &v82;
          ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v60);
          if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2889, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
            __debugbreak();
          HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
          Physics_Raycast((Physics_WorldId)v60, &outOrigin, &out, &axis, ClosestResult);
          if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
            v54 = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
          CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
          Sys_ProfEndNamedEvent();
          v64 = hkMemHeapAllocator();
          v82.m_ignoreBodies.m_size = 0;
          if ( v82.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v64, v82.m_ignoreBodies.m_data, 4, v82.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          v82.m_ignoreBodies.m_data = NULL;
          v82.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v65 = hkMemHeapAllocator();
          v82.m_ignoreEntities.m_size = 0;
          if ( v82.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v65, v82.m_ignoreEntities.m_data, 8, v82.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          v82.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
        }
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2909, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
          __debugbreak();
        explosionReflClass = _RBX->explosionReflClass;
        if ( explosionReflClass && *explosionReflClass && !_RBX->looping )
        {
          if ( v52 == 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2914, ASSERT_TYPE_ASSERT, "(sndEntityNum != ENTITYNUM_WORLD)", (const char *)&queryFormat, "sndEntityNum != ENTITYNUM_WORLD") )
            __debugbreak();
          v68 = _RBX->explosionReflClass;
          if ( v68 && (v69 = *v68) != 0 )
          {
            v70 = 5381;
            do
            {
              v71 = v69 | 0x20;
              if ( (unsigned int)(v69 - 65) >= 0x1A )
                v71 = v69;
              v70 = 65599 * v70 + v71;
              v69 = *++v68;
            }
            while ( *v68 );
            if ( !v70 )
              v70 = 1;
          }
          else
          {
            v70 = 0;
          }
          SoundSystem->PlayExplosionSoundAsync(SoundSystem, v52, &outOrigin, Alias, v54, v70);
        }
        else if ( v52 == 2046 )
        {
          ScriptableSndEntHandle = CG_GenerateScriptableSndEntHandle(localClientNum, scriptableIndex);
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  [rsp+130h+linked], xmm0
            vmovss  dword ptr [rsp+130h+siblings], xmm0
          }
          ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, unsigned __int64, SndAliasList *, unsigned int, int, int, _DWORD))SoundSystem->PlaySurfaceSoundOnSndEntAsync)(SoundSystem, 2046i64, &outOrigin, ScriptableSndEntHandle, Alias, v54, siblingsa, linked, 0);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+130h+siblings], xmm0
            vmovss  dword ptr [rsp+130h+parent], xmm0
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, unsigned int, int, int, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)v52, &outOrigin, Alias, v54, parent, siblings, 0);
        }
      }
    }
    else
    {
      v29 = "Fire-and-Forget";
      v30 = "Fire-and-Forget";
      if ( looping )
        v30 = "Looping";
      v31 = _RBX->soundAlias;
      v32 = ScriptableCl_GetInstanceCommonContext(localClientNum, v7);
      if ( v32->def )
        v10 = v32->def->name;
      if ( v27 )
        v29 = "Looping";
      Com_PrintError(29, "Scriptable %s thinks sound %s is %s and it is %s\n", v10, v31, v30, v29);
      ScriptableCl_EnterError();
    }
  }
LABEL_114:
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm { vmovaps xmm6, xmmword ptr [rsp+130h+var_48+8] }
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
  ScriptableInstanceContextSecure *v15; 
  Scriptable_EventAnimation_Data_MP *Data; 
  ScriptableLinkType LinkType; 
  ScriptableLinkType v18; 
  unsigned int LinkObject; 
  const DObj *DObj; 
  DObj *v21; 
  XAnimTree *Tree; 
  XAnim_s *v24; 
  XAnimOwner v25; 
  centity_t *Entity; 
  XAnimTree *v27; 
  unsigned int index; 
  float fmta; 
  float fmtb; 
  float fmt; 
  float goalTime; 
  float goalTimea; 
  float v41; 
  float v42; 
  float outRate; 
  float outStartTime; 
  int v45; 

  _RDI = animation;
  ScriptableBg_ChooseAnimationStartTimeAndRate(animation, holdrand, &outStartTime, &outRate);
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+outRate]
    vmovss  [rsp+0A8h+var_40], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 738, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 747, ASSERT_TYPE_ASSERT, "(ps != nullptr)", (const char *)&queryFormat, "ps != nullptr") )
      __debugbreak();
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    v15 = InstanceCommonContext;
    if ( onTime || animation->stateful )
    {
      if ( !InstanceCommonContext->def->animationTreeDef[0] )
      {
        Com_PrintWarning(14, "WARNING: Scriptable %s cannot play animation %s as it's missing an anim tree\n", InstanceCommonContext->def->name, animation->animation->name);
        return;
      }
      LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
      v18 = LinkType;
      if ( LinkType )
      {
        if ( LinkType == SCRIPTABLE_LINK_CLIENTMODEL )
        {
          if ( !v15->data.compositeModel )
          {
            Com_PrintWarning(14, "WARNING: Scriptable %s cannot play animation %s as it's missing a model\n", v15->def->name, animation->animation->name);
            return;
          }
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
          if ( !CG_ClientModel_IsInitialized(localClientNum, LinkObject) )
          {
            ScriptableCl_UpdateModel(localClientNum, scriptableIndex, 0);
            if ( !CG_ClientModel_IsInitialized(localClientNum, LinkObject) )
            {
              Com_PrintError(29, "Scriptable %s is trying to play animation %s but even after attempting to force a model update the clientmodel remains uninitialized\n", v15->def->name, animation->animation->name);
              ScriptableCl_EnterError();
            }
          }
        }
        if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 807, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
        v21 = (DObj *)DObj;
        if ( DObj )
        {
          __asm
          {
            vmovaps [rsp+0A8h+var_38], xmm6
            vmovss  xmm6, dword ptr [rdi+28h]
          }
          Tree = DObjGetTree(DObj);
          if ( Tree )
            goto LABEL_44;
          if ( v18 != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 824, ASSERT_TYPE_ASSERT, "(linkType == SCRIPTABLE_LINK_ENTITY)", (const char *)&queryFormat, "linkType == SCRIPTABLE_LINK_ENTITY") )
            __debugbreak();
          v24 = v15->def->animationTreeDef[0];
          if ( v24 && v24->initialized )
          {
            Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
            if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 829, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
              __debugbreak();
            LOBYTE(v25) = 1;
            Tree = Com_XAnimCreateSmallTree(v24, v25);
            DObjSetTree(v21, Tree);
            v27 = Entity->tree;
            if ( Entity->nextState.eType == ET_SCRIPTMOVER )
            {
              if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 842, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                __debugbreak();
            }
            else
            {
              if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 837, ASSERT_TYPE_ASSERT, "(entity->tree == 0)", (const char *)&queryFormat, "entity->tree == NULL") )
                __debugbreak();
              Entity->tree = Tree;
            }
            if ( Tree )
            {
LABEL_44:
              index = animation->animationIndex[0].index;
              __asm
              {
                vmovss  xmm0, [rsp+0A8h+outRate]
                vmovss  xmm1, cs:__real@3f800000
              }
              if ( animation->overrideAnimation )
              {
                __asm
                {
                  vmovss  [rsp+0A8h+var_78], xmm0
                  vmovss  [rsp+0A8h+goalTime], xmm6
                  vmovss  dword ptr [rsp+0A8h+fmt], xmm1
                }
                XAnimSetCompleteGoalWeightKnob(v21, 0, XANIM_SUBTREE_DEFAULT, index, fmta, goalTime, v41, (scr_string_t)0, 4u, 0, LINEAR);
              }
              else
              {
                __asm
                {
                  vmovss  [rsp+0A8h+var_78], xmm0
                  vmovss  [rsp+0A8h+goalTime], xmm6
                  vmovss  dword ptr [rsp+0A8h+fmt], xmm1
                }
                XAnimSetCompleteGoalWeight(v21, 0, XANIM_SUBTREE_DEFAULT, index, fmtb, goalTimea, v42, (scr_string_t)0, 4u, 0, LINEAR, NULL);
              }
              __asm
              {
                vmovss  xmm0, [rsp+0A8h+outStartTime]
                vmovss  dword ptr [rsp+0A8h+fmt], xmm0
              }
              if ( animation->startTimeNormalized )
                XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmt);
              else
                XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmt);
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END|0x80) )
              {
                _RBX = ScriptableCl_StateEventAnimationGetData(v15, animation);
                _RBX->serverTime = ScriptableCl_GetFrameServerTime(localClientNum) - p_predictedPlayerState->deltaTime;
                __asm
                {
                  vmovss  xmm0, [rsp+0A8h+outStartTime]
                  vmovss  dword ptr [rbx+4], xmm0
                  vmovss  xmm1, [rsp+0A8h+outRate]
                  vmovss  dword ptr [rbx+8], xmm1
                }
              }
            }
          }
          __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
        }
        else
        {
          Com_PrintError(29, "Scriptable %s is trying to play animation %s but doesn't have a dobj\n", v15->def->name, animation->animation->name);
          ScriptableCl_EnterError();
        }
      }
    }
    else if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END|0x80) )
    {
      Data = ScriptableCl_StateEventAnimationGetData(v15, animation);
      Data->serverTime = ScriptableCl_GetFrameServerTime(localClientNum) - p_predictedPlayerState->deltaTime;
      Data->startTime = animation->startTimeMin;
      Data->playBackRate = animation->playbackRateMin;
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
  __int32 v14; 
  unsigned int PhysInstanceId; 
  unsigned int scriptableIndex; 
  bool v36; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  __int64 v74; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v77; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  v77 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RBX = applyAngularForce;
  v14 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, eventParams->scriptableIndex);
  if ( PhysInstanceId == -1 )
  {
    if ( applyAngularForce->randomRange )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+18h]; max
        vmovss  xmm0, dword ptr [rbx+0Ch]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1Ch]; max
        vmovss  xmm0, dword ptr [rbx+10h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+20h]; max
        vmovss  xmm0, dword ptr [rbx+14h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    if ( !Physics_IsInstanceInWorld((Physics_WorldId)v14, PhysInstanceId, 0) )
      Physics_AddPendingBodies((Physics_WorldId)v14);
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    scriptableIndex = eventParams->scriptableIndex;
    _RAX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+2Ch]
      vmovss  dword ptr [rsp+128h+angles], xmm0
      vmovss  xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+128h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rax+34h]
      vmovss  dword ptr [rsp+128h+angles+8], xmm0
    }
    ScriptableInstanceContextSecure::GetOrigin(_RAX, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    if ( applyAngularForce->randomRange )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+18h]; max
        vmovss  xmm0, dword ptr [rbx+0Ch]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, dword ptr [rbx+1Ch]; max
        vmovss  xmm0, dword ptr [rbx+10h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm1, dword ptr [rbx+20h]; max
        vmovss  xmm0, dword ptr [rbx+14h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm { vmovaps xmm5, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+0Ch]
        vmovss  xmm7, dword ptr [rbx+10h]
        vmovss  xmm5, dword ptr [rbx+14h]
      }
    }
    v36 = !applyAngularForce->worldSpace;
    if ( applyAngularForce->worldSpace )
    {
      __asm
      {
        vmovaps xmm8, xmm6
        vmovaps xmm9, xmm7
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [rsp+128h+axis]
        vmulss  xmm1, xmm7, dword ptr [rsp+128h+axis+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm5, dword ptr [rsp+128h+axis+18h]
        vaddss  xmm8, xmm3, xmm0
        vmulss  xmm4, xmm6, dword ptr [rsp+128h+axis+4]
        vmulss  xmm0, xmm7, dword ptr [rsp+128h+axis+10h]
        vaddss  xmm3, xmm4, xmm0
        vmulss  xmm1, xmm5, dword ptr [rsp+128h+axis+1Ch]
        vaddss  xmm9, xmm3, xmm1
        vmulss  xmm4, xmm6, dword ptr [rsp+128h+axis+8]
        vmulss  xmm1, xmm7, dword ptr [rsp+128h+axis+14h]
        vaddss  xmm3, xmm4, xmm1
        vmulss  xmm0, xmm5, dword ptr [rsp+128h+axis+20h]
        vaddss  xmm5, xmm3, xmm0
      }
    }
    __asm
    {
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcmpless xmm0, xmm6, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm6, xmm2, xmm0
      vmovss  [rsp+128h+result.m_serialAndIndex], xmm1
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm2, xmm8
      vmovss  dword ptr [rsp+128h+torqueVector], xmm0
      vmulss  xmm1, xmm9, xmm2
      vmovss  dword ptr [rsp+128h+torqueVector+4], xmm1
      vmulss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsp+128h+torqueVector+8], xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm6, xmm1
    }
    if ( !v36 )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v14, PhysInstanceId);
      for ( i = 0; i < NumRigidBodys; ++i )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v14 > 7 )
        {
          LODWORD(v74) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v74) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
        {
          LODWORD(v74) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v74) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= 1 )
        {
          LODWORD(v74) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v74) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v14, PhysInstanceId, i)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4363, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v14, m_serialAndIndex) )
        {
          __asm { vmovaps xmm3, xmm6; magnitude }
          Physics_ApplyAngularImpulse((Physics_WorldId)v14, m_serialAndIndex, &torqueVector, *(float *)&_XMM3);
        }
      }
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v81;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
ScriptableCl_RunStateEventApplyConstantForce
==============
*/
void ScriptableCl_RunStateEventApplyConstantForce(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventApplyConstantForceDef *applyConstantForce)
{
  bool v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v39; 
  unsigned __int64 eventStreamBufferSize; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  v15 = !applyConstantForce->randomRange;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-28h], xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v15 )
  {
    __asm { vxorps  xmm12, xmm12, xmm12 }
    goto LABEL_9;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm12, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_9:
    __asm { vxorps  xmm11, xmm11, xmm11 }
    goto LABEL_10;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm11, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_10:
    __asm { vxorps  xmm10, xmm10, xmm10 }
    goto LABEL_11;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm10, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_11:
    __asm { vxorps  xmm9, xmm9, xmm9 }
    goto LABEL_12;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm9, xmm0 }
  if ( !applyConstantForce->randomRange )
  {
LABEL_12:
    __asm { vxorps  xmm8, xmm8, xmm8 }
    goto LABEL_13;
  }
  __asm
  {
    vmovaps xmm1, xmm7; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
  __asm { vmovaps xmm8, xmm0 }
  if ( applyConstantForce->randomRange )
  {
    __asm
    {
      vmovaps xmm1, xmm7; max
      vxorps  xmm0, xmm0, xmm0; min
    }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    __asm { vmovaps xmm6, xmm0 }
  }
LABEL_13:
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
  eventStreamBufferOffsetClient = applyConstantForce->eventStreamBufferOffsetClient;
  v39 = InstanceCommonContext;
  __asm { vmovaps xmm7, [rsp+0C8h+var_28] }
  _RBX = eventStreamBufferOffsetClient;
  eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
  if ( eventStreamBufferOffsetClient + 24 > eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4395, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 6 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 24, eventStreamBufferSize) )
    __debugbreak();
  _RAX = v39->eventStreamBuffer;
  _R11 = &v52;
  __asm
  {
    vmovss  dword ptr [rbx+rax], xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovss  dword ptr [rbx+rax+4], xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rbx+rax+8], xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rbx+rax+0Ch], xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rbx+rax+10h], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbx+rax+14h], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
}

/*
==============
ScriptableCl_RunStateEventApplyForce
==============
*/
void ScriptableCl_RunStateEventApplyForce(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventApplyForceDef *applyForce)
{
  __int32 v17; 
  unsigned int PhysInstanceId; 
  unsigned int scriptableIndex; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  float fmt; 
  __int64 v117; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v120; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  v120 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  _RBX = applyForce;
  v17 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, eventParams->scriptableIndex);
  if ( PhysInstanceId == -1 )
  {
    if ( applyForce->randomRange )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+24h]; max
        vmovss  xmm0, dword ptr [rbx+0Ch]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+28h]; max
        vmovss  xmm0, dword ptr [rbx+10h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+2Ch]; max
        vmovss  xmm0, dword ptr [rbx+14h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+30h]; max
        vmovss  xmm0, dword ptr [rbx+18h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+34h]; max
        vmovss  xmm0, dword ptr [rbx+1Ch]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+38h]; max
        vmovss  xmm0, dword ptr [rbx+20h]; min
      }
      BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    }
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    if ( !Physics_IsInstanceInWorld((Physics_WorldId)v17, PhysInstanceId, 0) )
      Physics_AddPendingBodies((Physics_WorldId)v17);
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    scriptableIndex = eventParams->scriptableIndex;
    _RAX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+2Ch]
      vmovss  dword ptr [rbp+60h+angles], xmm0
      vmovss  xmm1, dword ptr [rax+30h]
      vmovss  dword ptr [rbp+60h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rax+34h]
      vmovss  dword ptr [rbp+60h+angles+8], xmm0
    }
    ScriptableInstanceContextSecure::GetOrigin(_RAX, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    if ( applyForce->randomRange )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+24h]; max
        vmovss  xmm0, dword ptr [rbx+0Ch]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovss  xmm1, dword ptr [rbx+28h]; max
        vmovss  xmm0, dword ptr [rbx+10h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm9, xmm0
        vmovss  xmm1, dword ptr [rbx+2Ch]; max
        vmovss  xmm0, dword ptr [rbx+14h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm10, xmm0
        vmovss  xmm1, dword ptr [rbx+30h]; max
        vmovss  xmm0, dword ptr [rbx+18h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, dword ptr [rbx+34h]; max
        vmovss  xmm0, dword ptr [rbx+1Ch]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm1, dword ptr [rbx+38h]; max
        vmovss  xmm0, dword ptr [rbx+20h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm { vmovaps xmm4, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+0Ch]
        vmovss  xmm9, dword ptr [rbx+10h]
        vmovss  xmm10, dword ptr [rbx+14h]
        vmovss  xmm6, dword ptr [rbx+18h]
        vmovss  xmm7, dword ptr [rbx+1Ch]
        vmovss  xmm4, dword ptr [rbx+20h]
      }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+160h+axis+0Ch]
      vmulss  xmm1, xmm9, xmm3
      vmovss  xmm11, dword ptr [rsp+160h+axis]
      vmulss  xmm0, xmm11, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rsp+160h+axis+18h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+160h+outOrigin]
      vmovss  dword ptr [rbp+60h+position], xmm2
      vmovss  xmm5, dword ptr [rsp+160h+axis+10h]
      vmulss  xmm1, xmm9, xmm5
      vmovss  xmm13, dword ptr [rsp+160h+axis+4]
      vmulss  xmm0, xmm13, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rsp+160h+axis+1Ch]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+160h+outOrigin+4]
      vmovss  dword ptr [rbp+60h+position+4], xmm2
      vmulss  xmm1, xmm9, dword ptr [rsp+160h+axis+14h]
      vmovss  xmm9, dword ptr [rsp+160h+axis+8]
      vmulss  xmm0, xmm9, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rbp+60h+axis+20h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+160h+outOrigin+8]
      vmovss  dword ptr [rbp+60h+position+8], xmm2
    }
    if ( applyForce->worldSpace )
    {
      __asm
      {
        vmovaps xmm5, xmm7
        vmovaps xmm8, xmm6
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm7, xmm5
        vmulss  xmm0, xmm13, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rsp+160h+axis+1Ch]
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm3, xmm7, xmm3
        vmulss  xmm0, xmm11, xmm6
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, dword ptr [rsp+160h+axis+18h]
        vaddss  xmm8, xmm2, xmm1
        vmulss  xmm3, xmm7, dword ptr [rsp+160h+axis+14h]
        vmulss  xmm0, xmm9, xmm6
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, dword ptr [rbp+60h+axis+20h]
        vaddss  xmm4, xmm2, xmm1
      }
    }
    __asm
    {
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcmpless xmm0, xmm6, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm6, xmm2, xmm0
      vmovss  [rsp+160h+result.m_serialAndIndex], xmm1
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm2, xmm8
      vmovss  dword ptr [rbp+60h+normalizedDirection], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+60h+normalizedDirection+4], xmm1
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbp+60h+normalizedDirection+8], xmm0
    }
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v17, PhysInstanceId);
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v17 > 7 )
      {
        LODWORD(v117) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v117) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v17 - 2) <= 5 )
      {
        LODWORD(v117) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v117) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v17 <= 1 )
      {
        LODWORD(v117) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v117) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v17, PhysInstanceId, i)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v17, m_serialAndIndex) )
      {
        __asm { vmovss  dword ptr [rsp+160h+fmt], xmm6 }
        Physics_ApplyImpulse((Physics_WorldId)v17, m_serialAndIndex, &position, &normalizedDirection, fmt);
      }
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v125;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
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
  Scriptable_EventLight_Data *v16; 
  char v17; 
  char v18; 
  cg_t *LocalClientGlobals; 
  GfxWorld *world; 
  ScriptableInstance *v30; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v33; 
  GfxLight *v34; 
  const ComPrimaryLight *v35; 
  __int64 currentTime; 
  __int64 transitionRand; 
  float transitionRanda; 
  float v42; 
  float v43; 
  ScriptableInstance *outInstance; 
  Scriptable_EventLight_Data *data; 
  int time; 

  MapInstance = ScriptableCommon_GetMapInstance(eventParams->scriptableIndex, (const ScriptableInstance **)&outInstance);
  scriptableIndex = eventParams->scriptableIndex;
  if ( MapInstance )
  {
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    _RBP = light;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = light->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 36 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3323, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    v16 = (Scriptable_EventLight_Data *)&InstanceCommonContext->eventStreamBuffer[eventStreamBufferOffsetClient];
    __asm { vmovaps [rsp+0B8h+var_58], xmm8 }
    data = v16;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+34h]; max
      vmovss  xmm0, dword ptr [rbp+30h]; min
      vcomiss xmm1, xmm0
    }
    time = LocalClientGlobals->time;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( v17 | v18 )
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    else
    {
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm { vmovaps xmm8, xmm0 }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+14h]; max
      vmovss  xmm0, dword ptr [rbp+10h]; min
      vcomiss xmm1, xmm0
      vmovaps [rsp+0B8h+var_48], xmm7
    }
    if ( v17 | v18 )
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
    else
    {
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm { vmovaps xmm7, xmm0 }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+0Ch]; max
      vmovss  xmm0, dword ptr [rbp+8]; min
      vcomiss xmm1, xmm0
    }
    if ( !(v17 | v18) )
    {
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm { vmovaps xmm6, xmm0 }
    }
    world = rgp.world;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3366, ASSERT_TYPE_ASSERT, "(curGfxWorld)", (const char *)&queryFormat, "curGfxWorld") )
      __debugbreak();
    v30 = outInstance;
    v31 = 0;
    v32 = 56i64;
    do
    {
      v33 = *(unsigned __int16 *)((char *)&v30->initialDef + v32);
      if ( !*(_WORD *)((char *)&v30->initialDef + v32) )
        break;
      if ( (unsigned int)v33 >= world->primaryLightCount )
      {
        LODWORD(transitionRand) = world->primaryLightCount;
        LODWORD(currentTime) = *(unsigned __int16 *)((char *)&v30->initialDef + v32);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3379, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( curGfxWorld->primaryLightCount )", "lightIndex doesn't index curGfxWorld->primaryLightCount\n\t%i not in [0, %i)", currentTime, transitionRand) )
          __debugbreak();
      }
      v34 = &world->primaryLights[v33];
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3381, ASSERT_TYPE_ASSERT, "(refLight)", (const char *)&queryFormat, "refLight") )
        __debugbreak();
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( (unsigned int)v33 >= comWorld.primaryLightCount )
      {
        LODWORD(transitionRand) = comWorld.primaryLightCount;
        LODWORD(currentTime) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", currentTime, transitionRand) )
          __debugbreak();
      }
      v35 = &comWorld.primaryLights[v33];
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3384, ASSERT_TYPE_ASSERT, "(rawLight)", (const char *)&queryFormat, "rawLight") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+0B8h+var_78], xmm6
        vmovss  [rsp+0B8h+var_80], xmm7
        vmovss  [rsp+0B8h+transitionRand], xmm8
      }
      ScriptableCl_RunStateEventLight_Internal(v33, data, light, v34, v35, time, transitionRanda, v42, v43);
      ++v31;
      v32 += 2i64;
    }
    while ( v31 < 5 );
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
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
  unsigned int entityId; 
  float v50; 
  RadiantLight *radiantLiveLightRaw; 
  GfxLight *radiantLiveLight; 
  char v54[16]; 

  v9 = refLight;
  _RSI = rawLight;
  _RBP = light;
  _RDI = data;
  if ( (refLight->flags & 0x10) != 0 )
  {
    entityId = refLight->entityId;
    radiantLiveLightRaw = NULL;
    radiantLiveLight = NULL;
    if ( CG_LiveUpdateFindLight(entityId, &radiantLiveLight, &radiantLiveLightRaw) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymm1, ymmword ptr [rsi+80h]
      }
      v9 = radiantLiveLight;
      _RAX = v54;
      __asm
      {
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rsi+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rsi+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm0, ymmword ptr [rsi+60h]
        vmovups ymmword ptr [rax+60h], ymm0
        vmovups ymmword ptr [rax+80h], ymm1
      }
      _RAX = radiantLiveLightRaw;
      _RSI = (const ComPrimaryLight *)v54;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+14h]
        vmovss  [rsp+118h+var_88], xmm1
        vmovss  xmm0, dword ptr [rax+48h]
        vmovss  [rsp+118h+var_C8], xmm0
        vmovss  xmm1, dword ptr [rax+30h]
        vmovss  [rsp+118h+var_B8], xmm1
        vmovss  xmm0, dword ptr [rax+34h]
        vmovss  [rsp+118h+var_B4], xmm0
        vmovss  xmm1, dword ptr [rax+38h]
        vmovss  [rsp+118h+var_B0], xmm1
      }
    }
  }
  __asm { vmovss  xmm1, [rsp+118h+transitionRand] }
  _RDI->startTime = currentTime;
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+30h]
    vmovss  xmm0, dword ptr [rbp+34h]
    vcmpless xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm0
  }
  _RDI->transTime = _EAX;
  if ( _RBP->useColor )
  {
    _RDI->startColorLinearSrgb.v[0] = v9->colorLinearSrgb.v[0];
    _RDI->startColorLinearSrgb.v[1] = v9->colorLinearSrgb.v[1];
    _RDI->startColorLinearSrgb.v[2] = v9->colorLinearSrgb.v[2];
  }
  if ( DVARBOOL_scriptable_light_radiusscale->current.enabled )
  {
    _RDI->startRadius = v9->radius;
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+10h]
      vmovss  xmm0, dword ptr [rbp+14h]
      vcmpless xmm1, xmm0, xmm2
      vmovss  xmm0, [rsp+118h+radiusRand]
      vblendvps xmm3, xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+20h], xmm3
      vmulss  xmm0, xmm3, dword ptr [rsi+50h]
      vmaxss  xmm1, xmm0, cs:__real@3f8147ae
      vmovss  [rsp+118h+var_F8], xmm3
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+50h]
      vmaxss  xmm0, xmm0, cs:__real@3f8147ae
      vmovss  dword ptr [rdi+1Ch], xmm0
      vmovss  xmm1, dword ptr [rsi+50h]
      vmaxss  xmm1, xmm1, cs:__real@3f8147ae
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+20h], xmm1
    vmovss  xmm1, [rsp+118h+intensityScaleRand]
  }
  _RDI->startIntensity = v9->intensity;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vmovss  xmm3, dword ptr [rbp+8]
    vcmpless xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
    vmulss  xmm0, xmm0, dword ptr [rsi+10h]
    vmovss  dword ptr [rdi+18h], xmm0
  }
  if ( !_RBP->useStateTransitionTime && !CG_EntityWorkers_TryAddScriptableStateEventLightUpdate(lightIndex, _RDI, _RBP, _RSI) )
  {
    v9->radius = _RDI->targetRadius;
    v9->intensity = _RDI->targetIntensity;
    if ( _RBP->useColor )
    {
      v9->colorLinearSrgb.v[0] = _RBP->colorLinearSrgb.v[0];
      v9->colorLinearSrgb.v[1] = _RBP->colorLinearSrgb.v[1];
      v50 = _RBP->colorLinearSrgb.v[2];
    }
    else
    {
      v9->colorLinearSrgb.v[0] = _RSI->colorLinearSrgb.v[0];
      v9->colorLinearSrgb.v[1] = _RSI->colorLinearSrgb.v[1];
      v50 = _RSI->colorLinearSrgb.v[2];
    }
    v9->colorLinearSrgb.v[2] = v50;
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
  __int16 freqPitch; 
  __int16 pitch; 
  __int16 yaw; 
  __int16 roll; 
  float allowMissingTag; 
  float allowMissingTaga; 
  float v36; 
  float v37; 
  __int16 freqYaw; 
  vec3_t outOrigin; 
  char v40; 
  void *retaddr; 
  __int16 freqRoll; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = screenshake;
  if ( onTime || screenshake->stateful )
  {
    isScreenShake = screenshake->isScreenShake;
    isEarthquake = screenshake->isEarthquake;
    scriptableIndex = eventParams->scriptableIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    scrTagName = _RDI->scrTagName;
    if ( (!scrTagName || ScriptableCl_GetBonePosition(localClientNum, scriptableIndex, scrTagName, &outOrigin, _RDI->allowMissingTag) || _RDI->useRootOnMissingTag) && (isScreenShake || isEarthquake) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1Ch]
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si ebp, xmm1
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, dword ptr [rdi+28h]
      }
      if ( isScreenShake )
      {
        freqPitch = 100 * LOWORD(_RDI->frequencyPitch);
        freqYaw = 100 * LOWORD(_RDI->frequencyYaw);
        freqRoll = 100 * LOWORD(_RDI->frequencyRoll);
        __asm
        {
          vmovss  xmm7, dword ptr [rdi+20h]
          vmovss  xmm8, dword ptr [rdi+24h]
        }
        pitch = 100 * LOWORD(_RDI->scalePitch);
        yaw = 100 * LOWORD(_RDI->scaleYaw);
        roll = 100 * LOWORD(_RDI->scaleRoll);
        if ( isEarthquake )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+2Ch]
            vmulss  xmm1, xmm0, cs:__real@42c80000
            vcvttss2si eax, xmm1
          }
          pitch = _EAX;
          yaw = _EAX;
          roll = _EAX;
        }
        CG_EntityWorkers_EnterCriticalSection();
        __asm
        {
          vmovss  [rsp+0E8h+var_88], xmm8
          vmovss  [rsp+0E8h+var_90], xmm7
          vmovss  dword ptr [rsp+0E8h+allowMissingTag], xmm6
        }
        CG_StartShakeCameraWithControls(localClientNum, _EBP, 2047, &outOrigin, allowMissingTag, pitch, yaw, roll, freqPitch, freqYaw, freqRoll, v36, v37, isEarthquake);
      }
      else
      {
        if ( !isEarthquake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3649, ASSERT_TYPE_ASSERT, "(isEarthquake)", (const char *)&queryFormat, "isEarthquake") )
          __debugbreak();
        CG_EntityWorkers_EnterCriticalSection();
        __asm
        {
          vmovss  dword ptr [rsp+0E8h+allowMissingTag], xmm6
          vmovss  xmm1, dword ptr [rdi+2Ch]; scale
        }
        CG_StartShakeCamera(localClientNum, *(float *)&_XMM1, _EBP, &outOrigin, allowMissingTaga);
      }
      CG_EntityWorkers_LeaveCriticalSection();
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int8 *eventStreamBuffer; 
  scr_string_t scrTagName; 
  unsigned int v22; 
  unsigned int ReservedDynent; 
  unsigned int *v30; 
  const ScriptableDamageEvent *damageEvent; 
  XModel *model; 
  const ScriptableDamageEvent *v106; 
  bool IsExplosionMOD; 
  bool v108; 
  DynEntityClient *Client; 
  unsigned int physicsSystemId; 
  cg_t *LocalClientGlobals; 
  char *fmt; 
  char *fmta; 
  vec3_t outOrigin; 
  __int64 v145; 
  vec3_t pHoldrand; 
  vec3_t angVel; 
  vec3_t linVel; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTransform; 
  char v151; 
  void *retaddr; 

  _RAX = &retaddr;
  v145 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  *(_QWORD *)pHoldrand.v = holdrand;
  _RBX = spawnDynent;
  if ( onTime || spawnDynent->stateful )
  {
    scriptableIndex = eventParams->scriptableIndex;
    _RDI = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = spawnDynent->eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)_RDI->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1266, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    eventStreamBuffer = _RDI->eventStreamBuffer;
    scrTagName = spawnDynent->scrTagName;
    v22 = scriptableIndex;
    if ( scrTagName )
    {
      if ( ScriptableCl_GetBoneTransform(localClientNum, scriptableIndex, scrTagName, &outTransform, spawnDynent->allowMissingTag) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+outTransform+24h]
          vmovss  dword ptr [rsp+180h+outOrigin], xmm0
          vmovss  xmm1, dword ptr [rbp+80h+outTransform+28h]
          vmovss  dword ptr [rsp+180h+outOrigin+4], xmm1
          vmovss  xmm0, dword ptr [rbp+80h+outTransform+2Ch]
          vmovss  dword ptr [rsp+180h+outOrigin+8], xmm0
        }
        AxisToAngles((const tmat33_t<vec3_t> *)&outTransform, &angles);
        goto LABEL_11;
      }
      if ( !spawnDynent->useRootOnMissingTag )
      {
LABEL_46:
        memset(&outOrigin, 0, sizeof(outOrigin));
        goto LABEL_47;
      }
      v22 = scriptableIndex;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rbp+80h+angles], xmm0
      vmovss  xmm1, dword ptr [rdi+30h]
      vmovss  dword ptr [rbp+80h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  dword ptr [rbp+80h+angles+8], xmm0
    }
    ScriptableInstanceContextSecure::GetOrigin(_RDI, v22, &outOrigin);
    AnglesAndOriginToMatrix43(&angles, &outOrigin, &outTransform);
LABEL_11:
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
      ReservedDynent = *(_DWORD *)&eventStreamBuffer[eventStreamBufferOffsetClient];
    else
      ReservedDynent = ScriptableCl_GetReservedDynent(localClientNum);
    v30 = *(unsigned int **)pHoldrand.v;
    if ( spawnDynent->randomRangeLinVel )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+44h]; max
        vmovss  xmm0, dword ptr [rbx+2Ch]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, *(unsigned int **)pHoldrand.v);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovss  xmm1, dword ptr [rbx+48h]; max
        vmovss  xmm0, dword ptr [rbx+30h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v30);
      __asm
      {
        vmovaps xmm9, xmm0
        vmovss  xmm1, dword ptr [rbx+4Ch]; max
        vmovss  xmm0, dword ptr [rbx+34h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v30);
      __asm { vmovaps xmm10, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+2Ch]
        vmovss  xmm9, dword ptr [rbx+30h]
        vmovss  xmm10, dword ptr [rbx+34h]
      }
    }
    if ( spawnDynent->randomRangeAngVel )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+50h]; max
        vmovss  xmm0, dword ptr [rbx+38h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v30);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  xmm1, dword ptr [rbx+54h]; max
        vmovss  xmm0, dword ptr [rbx+3Ch]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v30);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm1, dword ptr [rbx+58h]; max
        vmovss  xmm0, dword ptr [rbx+40h]; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v30);
      __asm { vmovaps xmm4, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+38h]
        vmovss  xmm7, dword ptr [rbx+3Ch]
        vmovss  xmm4, dword ptr [rbx+40h]
      }
    }
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+80h+outTransform+20h]
      vmovss  xmm13, dword ptr [rbp+80h+outTransform+14h]
      vmovss  xmm14, dword ptr [rbp+80h+outTransform+10h]
      vmovss  xmm15, dword ptr [rbp+80h+outTransform+0Ch]
      vmovss  xmm3, dword ptr [rbp+80h+outTransform+4]
      vmovss  xmm0, dword ptr [rbp+80h+outTransform]
    }
    if ( spawnDynent->worldSpaceLinVel )
    {
      __asm
      {
        vmovss  dword ptr [rsp+180h+var_108], xmm8
        vmovss  dword ptr [rsp+180h+var_108+4], xmm9
        vmovss  dword ptr [rbp+80h+var_108+8], xmm10
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm8, xmm0
        vmulss  xmm0, xmm15, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, dword ptr [rbp+80h+outTransform+18h]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+var_108], xmm2
        vmulss  xmm3, xmm8, xmm3
        vmulss  xmm0, xmm14, xmm9
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm10, dword ptr [rbp+80h+outTransform+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+var_108+4], xmm2
        vmulss  xmm3, xmm8, dword ptr [rbp+80h+outTransform+8]
        vmulss  xmm0, xmm13, xmm9
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm10, xmm5
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbp+80h+var_108+8], xmm2
        vmovss  xmm3, dword ptr [rbp+80h+outTransform+4]
        vmovss  xmm0, dword ptr [rbp+80h+outTransform]
      }
    }
    if ( spawnDynent->worldSpaceAngVel )
    {
      __asm
      {
        vmovss  dword ptr [rsp+180h+var_118], xmm6
        vmovss  dword ptr [rsp+180h+var_118+4], xmm7
        vmovss  dword ptr [rsp+180h+var_118+8], xmm4
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vmulss  xmm0, xmm15, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rbp+80h+outTransform+18h]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+var_118], xmm2
        vmulss  xmm3, xmm6, xmm3
        vmulss  xmm0, xmm14, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, dword ptr [rbp+80h+outTransform+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+var_118+4], xmm2
        vmulss  xmm3, xmm6, dword ptr [rbp+80h+outTransform+8]
        vmulss  xmm0, xmm13, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, xmm5
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+var_118+8], xmm2
      }
    }
    __asm { vxorps  xmm8, xmm8, xmm8 }
    if ( spawnDynent->allowCauseVelocity )
    {
      damageEvent = eventParams->damageEvent;
      if ( damageEvent )
      {
        if ( !BG_IsExplosionMOD((meansOfDeath_t)damageEvent->mod) )
        {
          __asm
          {
            vmovss  dword ptr [rsp+180h+var_108], xmm8
            vmovss  dword ptr [rsp+180h+var_108+4], xmm8
            vmovss  dword ptr [rbp+80h+var_108+8], xmm8
            vmovss  dword ptr [rsp+180h+var_118], xmm8
            vmovss  dword ptr [rsp+180h+var_118+4], xmm8
            vmovss  dword ptr [rsp+180h+var_118+8], xmm8
          }
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
          v106 = eventParams->damageEvent;
          if ( v106 )
          {
            IsExplosionMOD = BG_IsExplosionMOD((meansOfDeath_t)v106->mod);
            v108 = !IsExplosionMOD;
            if ( !IsExplosionMOD )
            {
              _RAX = eventParams->damageEvent;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+44h]
                vsubss  xmm5, xmm0, dword ptr [rax+38h]
                vmovss  xmm1, dword ptr [rax+48h]
                vsubss  xmm6, xmm1, dword ptr [rax+3Ch]
                vmovss  xmm0, dword ptr [rax+4Ch]
                vsubss  xmm7, xmm0, dword ptr [rax+40h]
                vmulss  xmm2, xmm6, xmm6
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm7, xmm7
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm4, xmm2, xmm2
                vcmpless xmm0, xmm4, cs:__real@80000000
                vmovss  xmm2, cs:__real@3f800000
                vblendvps xmm1, xmm4, xmm2, xmm0
                vmovss  dword ptr [rsp+180h+pHoldrand], xmm1
                vdivss  xmm2, xmm2, xmm1
                vmulss  xmm0, xmm5, xmm2
                vmovss  dword ptr [rsp+180h+pHoldrand], xmm0
                vmulss  xmm1, xmm6, xmm2
                vmovss  dword ptr [rsp+180h+pHoldrand+4], xmm1
                vmulss  xmm0, xmm2, xmm7
                vmovss  [rsp+180h+var_120], xmm0
                vcomiss xmm4, xmm8
              }
              if ( !v108 )
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
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovss  xmm3, dword ptr [rsp+180h+outOrigin+4]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovss  xmm2, dword ptr [rsp+180h+outOrigin]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+180h+fmt], xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        Com_PrintWarning(14, "A scriptable attempted to spawn a dynent at [%.2f, %.2f, %.2f] with a model %s with no physics asset\n", _R8, _R9, fmta, model->name);
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm3, dword ptr [rsp+180h+outOrigin+4]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovss  xmm2, dword ptr [rsp+180h+outOrigin]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+180h+fmt], xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_PrintWarning((unsigned __int8)model + 14, "A scriptable attempted to spawn a dynent at [%.2f, %.2f, %.2f] with no model\n", _R8, _R9, fmt);
    }
    goto LABEL_46;
  }
LABEL_47:
  _R11 = &v151;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
}

/*
==============
ScriptableCl_RunStateEventSun
==============
*/
void ScriptableCl_RunStateEventSun(const LocalClientNum_t localClientNum, const ScriptableEventParams *eventParams, unsigned int *holdrand, bool onTime, const ScriptableEventSunDef *sun)
{
  cg_t *LocalClientGlobals; 
  bool v10; 
  int time; 
  char v23; 
  bool v24; 
  double v27; 
  double v30; 
  float sunIntensityOut; 
  vec3_t sunColorLinearSrgbOut; 
  vec3_t forward; 
  vec3_t sunDirOut; 

  _RBX = sun;
  _RSI = cm.mapEnts;
  _RDI = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v10 = !sun->useStateTransitionTime;
  time = LocalClientGlobals->time;
  if ( sun->useStateTransitionTime )
  {
    _RSI->scriptableMapEnts.sunClientDatas[_RDI].startTime = time;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+30h]; max
      vmovss  xmm0, dword ptr [rbx+2Ch]; min
      vcomiss xmm1, xmm0
    }
    if ( v10 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm0
      }
    }
    else
    {
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
      }
    }
    _RSI->scriptableMapEnts.sunClientDatas[_RDI].transTime = _EAX;
  }
  if ( sun->useColor )
  {
    if ( R_GetSunColorOverride(&sunColorLinearSrgbOut) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+sunColorLinearSrgbOut]
        vmovss  xmm1, dword ptr [rsp+88h+sunColorLinearSrgbOut+4]
        vmovss  dword ptr [rdi+rsi+240h], xmm0
        vmovss  xmm0, dword ptr [rsp+88h+sunColorLinearSrgbOut+8]
        vmovss  dword ptr [rdi+rsi+248h], xmm0
        vmovss  dword ptr [rdi+rsi+244h], xmm1
      }
    }
    else
    {
      *(_QWORD *)_RSI->scriptableMapEnts.sunClientDatas[_RDI].startColorLinearSrgb.v = *(_QWORD *)sun->colorLinearSrgb.v;
      _RSI->scriptableMapEnts.sunClientDatas[_RDI].startColorLinearSrgb.v[2] = sun->colorLinearSrgb.v[2];
    }
  }
  if ( sun->useIntensity )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+10h]; max
      vmovss  xmm0, dword ptr [rbx+0Ch]; min
      vcomiss xmm1, xmm0
    }
    if ( sun->useIntensity )
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
    __asm { vmovss  dword ptr [rdi+rsi+250h], xmm0 }
    if ( R_GetSunIntensityOverride(&sunIntensityOut) )
    {
      __asm
      {
        vmovss  xmm0, [rsp+88h+sunIntensityOut]
        vmovss  dword ptr [rdi+rsi+24Ch], xmm0
      }
    }
    else
    {
      _RSI->scriptableMapEnts.sunClientDatas[_RDI].startIntensity = _RSI->scriptableMapEnts.sunClientDatas[_RDI].targetIntensity;
    }
  }
  v23 = 0;
  v24 = !sun->useDirection;
  if ( sun->useDirection )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+38h]; max
      vmovss  xmm0, dword ptr [rbx+34h]; min
      vcomiss xmm1, xmm0
    }
    if ( sun->useDirection )
    {
      v27 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&v27);
    }
    __asm
    {
      vmovss  dword ptr [rdi+rsi+260h], xmm0
      vmovss  xmm1, dword ptr [rbx+40h]; max
      vmovss  xmm0, dword ptr [rbx+3Ch]; min
      vcomiss xmm1, xmm0
    }
    if ( !(v23 | v24) )
    {
      v30 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&v30);
    }
    __asm { vmovss  dword ptr [rdi+rsi+264h], xmm0 }
    _RSI->scriptableMapEnts.sunClientDatas[_RDI].targetAngles.v[2] = 0.0;
    if ( R_GetSunDirectionOverride(time, &sunDirOut) )
    {
      vectoangles(&sunDirOut, &_RSI->scriptableMapEnts.sunClientDatas[_RDI].startAngles);
    }
    else
    {
      _RSI->scriptableMapEnts.sunClientDatas[_RDI].startAngles.v[0] = _RSI->scriptableMapEnts.sunClientDatas[_RDI].targetAngles.v[0];
      _RSI->scriptableMapEnts.sunClientDatas[_RDI].startAngles.v[1] = _RSI->scriptableMapEnts.sunClientDatas[_RDI].targetAngles.v[1];
      _RSI->scriptableMapEnts.sunClientDatas[_RDI].startAngles.v[2] = _RSI->scriptableMapEnts.sunClientDatas[_RDI].targetAngles.v[2];
    }
  }
  if ( !sun->useStateTransitionTime )
  {
    if ( sun->useDirection )
      AngleVectors(&_RSI->scriptableMapEnts.sunClientDatas[_RDI].targetAngles, &forward, NULL, NULL);
    __asm { vmovss  xmm1, dword ptr [rdi+rsi+250h]; intensity }
    if ( !CG_EntityWorkers_TryAddScriptableStateEventSunUpdate(sun, *(const float *)&_XMM1, &forward) )
    {
      if ( sun->useColor )
        R_SetSunColorOverride((const vec3_t *)&sun->colorLinearSrgb);
      if ( sun->useIntensity )
      {
        __asm { vmovss  xmm0, dword ptr [rdi+rsi+250h]; sunIntensity }
        R_SetSunIntensityOverride(*(const float *)&_XMM0);
      }
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
  Scriptable_TeamFilter v25; 
  bool v26; 
  unsigned int *v27; 
  bool v28; 

  v28 = onTime;
  v27 = holdrand;
  v5 = teamSelector;
  scriptableIndex = eventParams->scriptableIndex;
  v7 = onTime;
  _RSI = eventParams;
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
    v7 = v28;
    eventStreamBuffer[eventStreamBufferOffsetClient] = DoesTeamMatch;
  }
  v18 = _RSI->teamEvent == NULL;
  v26 = DoesTeamMatch;
  v25 = teamFilter;
  LODWORD(teamSelector) = *v27;
  if ( !v18 )
  {
    v19 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v19->def )
      name = v19->def->name;
    else
      name = "<unknown>";
    Com_Printf(16, "ScriptableCl_RunStateEventTeamSelector: Nested TeamSelector, might produce unexpected teamEvent params (%s)\n", name);
  }
  eventParamsa.teamEvent = (const ScriptableTeamEvent *)&v25;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+98h+eventParams.context], ymm0
  }
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
  const char *name; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *v16; 
  char *fmt; 

  scriptableIndex = eventParams->scriptableIndex;
  _RDI = viewmodelShaderParam;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3897, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = ScriptableCl_GetEntity(localClientNum, scriptableIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3900, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  CharacterInfo = cg_t::TryGetCharacterInfo(LocalClientGlobals, Entity->nextState.number);
  if ( CharacterInfo )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm7
      vmovaps [rsp+78h+var_48], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vaddss  xmm1, xmm8, dword ptr [rdi+10h]
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vcvttss2si eax, xmm2
    }
    if ( _EAX )
    {
      __asm
      {
        vmovaps [rsp+78h+var_28], xmm6
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm6, dword ptr [rdi+20h]
        vmovss  xmm2, dword ptr [rdi+0Ch]; value
      }
      ScriptableCl_SetViewmodelShaderParam_Internal(&CharacterInfo->shaderOverride[_EAX - 1], _RDI, *(const float *)&_XMM2);
      __asm { vmovaps xmm6, [rsp+78h+var_28] }
    }
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_38]
      vmovaps xmm8, [rsp+78h+var_48]
    }
  }
  else
  {
    number = Entity->nextState.number;
    name = _RDI->base->name;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      v16 = InstanceCommonContext->def->name;
    else
      v16 = "<unknown>";
    LODWORD(fmt) = number;
    Com_PrintError(29, "Scriptable %s with event %s on a non-character entity %d.\n", v16, name, fmt);
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
  unsigned int *v13; 
  ScriptableEventDef *v16; 
  unsigned int v17; 
  __int64 v18; 
  const char *EventTypeName; 
  const char *v23; 
  char v24; 
  char v25; 
  ScriptablePartDef *part; 
  unsigned int stateIdx; 
  unsigned int numStates; 
  unsigned int v29; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  unsigned __int8 v34; 
  ScriptableInstanceContextSecure *v35; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableEventDef *eventsA; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  ScriptableInstanceContextSecure *v39; 
  __int64 v40; 
  unsigned int scriptableIndex; 
  ScriptableInstanceContextSecure *v42; 
  scr_string_t scrNotification; 
  unsigned int LinkObject; 
  CgSoundSystem *SoundSystem; 
  ScriptableEventDef *eventsB; 
  cg_t *LocalClientGlobals; 
  unsigned int v54; 
  ScriptableInstanceContextSecure *v55; 
  scr_string_t scrTagName; 
  const ScriptablePartDef *v57; 
  ScriptableInstanceContextSecure *v58; 
  const char *v59; 
  char v61; 
  ScriptableInstanceContextSecure *v62; 
  __int64 v63; 
  unsigned int v64; 
  ScriptableInstanceContextSecure *v65; 
  __int64 v66; 
  unsigned __int8 *eventStreamBuffer; 
  ScriptableInstanceContextSecure *v68; 
  const char *v69; 
  unsigned int v70; 
  ScriptableInstanceContextSecure *v71; 
  const char *v72; 
  ScriptablePartReference v73; 
  bool IsCharacterThirdPerson; 
  ScriptableInstanceContextSecure *v75; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableEventDef *v77; 
  ScriptableInstanceContextSecure *v87; 
  __int64 v88; 
  unsigned __int8 v91; 
  unsigned int v92; 
  __int16 v93; 
  const centity_t *EntityFromObjectId; 
  bool v95; 
  FootstepVFX *leftFootstepVFX; 
  ScriptableInstanceContextSecure *v100; 
  ScriptableInstanceContextSecure *v103; 
  __int64 v104; 
  char *fmt; 
  float fmta; 
  vec3_t *pos; 
  unsigned int posa; 
  float posc; 
  unsigned int posb; 
  float impulseVecOverride; 
  float impulseVecOverridea; 
  __int64 randSeed; 
  __int64 v120; 
  float v121; 
  unsigned int v122; 
  unsigned int holdranda; 
  vec3_t outOrigin; 
  vec3_t outPosition; 
  __int64 v126; 
  unsigned int *v127; 
  ScriptableEventDef *v128; 
  __int64 v129; 
  ScriptableEventParams outParams; 
  char dest[280]; 
  char v132; 
  void *retaddr; 

  _RAX = &retaddr;
  v129 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v13 = holdrand;
  v127 = holdrand;
  v16 = events;
  v128 = events;
  v17 = 0;
  v122 = 0;
  if ( numEvents )
  {
    v18 = 0i64;
    v126 = 0i64;
    __asm
    {
      vmovss  xmm10, cs:__real@3f800000
      vxorps  xmm9, xmm9, xmm9
    }
    while ( 1 )
    {
      _RDI = &v16[v18];
      EventTypeName = ScriptableBg_GetEventTypeName(_RDI->type);
      v23 = j_va("ScriptableCl_RunStateEvent %s", EventTypeName);
      Sys_ProfBeginNamedEvent(0xFFD2691E, v23);
      switch ( _RDI->type )
      {
        case Scriptable_EventType_StateChange:
          if ( !_RDI->data.disablePhysicsSubShape.mutableShapeHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 388, ASSERT_TYPE_ASSERT, "(stateChange->part)", (const char *)&queryFormat, "stateChange->part") )
            __debugbreak();
          part = _RDI->data.stateChange.part;
          if ( (part->flags & 4) != 0 )
            goto $LN8_100;
          stateIdx = _RDI->data.stateChange.stateIdx;
          numStates = part->numStates;
          if ( stateIdx < numStates )
          {
            CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
            ScriptableCl_InitEventParams(localClientNum, &outParams, eventParams->scriptableIndex, _RDI->data.stateChange.part);
            ScriptableBg_ChangePartState(&outParams, _RDI->data.stateChange.stateIdx, onTime);
            CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
            goto LABEL_14;
          }
          v29 = numStates - 1;
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( InstanceCommonContext->def )
            name = InstanceCommonContext->def->name;
          else
            name = "<unknown>";
          LODWORD(fmt) = v29;
          Com_PrintError(29, "Scriptable %s tried to run a state change event, the state %i was outside the range 0-%i\n", name, stateIdx, fmt);
          goto LABEL_13;
        case Scriptable_EventType_Wait:
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+20h]; jumptable 00000001414D64D1 case 1
            vmovss  xmm1, dword ptr [rdi+24h]; max
            vcomiss xmm1, xmm6
          }
          if ( !(v24 | v25) )
          {
            __asm { vmovaps xmm0, xmm6; min }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v13);
            __asm { vmovaps xmm6, xmm0 }
          }
          v100 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          _RSI = _RDI->data.wait.eventStreamBufferOffsetClient;
          if ( _RSI + 4 > (unsigned __int64)v100->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 429, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          _RAX = v100->eventStreamBuffer;
          __asm { vmovss  dword ptr [rsi+rax], xmm6 }
          goto LABEL_161;
        case Scriptable_EventType_Random:
          __asm
          {
            vmovaps xmm1, xmm10; max
            vmovaps xmm0, xmm9; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v13);
          __asm { vcomiss xmm0, dword ptr [rdi+20h] }
          v34 = v24 | v25;
          v35 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          eventStreamBufferOffsetClient = _RDI->data.random.eventStreamBufferOffsetClient;
          if ( eventStreamBufferOffsetClient + 1 > (unsigned __int64)v35->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 451, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v35->eventStreamBuffer[eventStreamBufferOffsetClient] = v34;
          if ( v34 )
          {
            posa = _RDI->data.stateChange.stateIdx;
            eventsA = _RDI->data.random.eventsA;
          }
          else
          {
            posa = _RDI->data.random.eventBCount;
            eventsA = _RDI->data.random.eventsB;
          }
          ScriptableCl_RunStateEvents_Specific(localClientNum, eventParams, v13, onTime, eventsA, posa);
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
          ScriptableCl_RunStateEventModel(localClientNum, eventParams, onTime, (const ScriptableEventModelDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Collision:
          ScriptableCl_RunStateEventCollision(localClientNum, eventParams, onTime, (const ScriptableEventCollisionDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Animation:
          ScriptableCl_RunStateEventAnimation(localClientNum, eventParams, v13, onTime, (const ScriptableEventAnimationDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_HideShowBone:
          ScriptableCl_RunStateEventHideShowBone(localClientNum, eventParams, onTime, (const ScriptableEventHideShowBoneDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableCl_RunStateEventDisablePhysicsSubShape(localClientNum, eventParams, onTime, (const ScriptableEventDisablePhysicsSubShapeDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_NoteTrack:
          InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, eventParams->scriptableIndex);
          InstanceNoteTrackContext->currentNoteTracks = (const ScriptableEventNoteTrackDef *)&_RDI->data;
          InstanceNoteTrackContext->currentNoteTrackPartDef = eventParams->partDef;
          goto $LN8_100;
        case Scriptable_EventType_SpawnDynent:
          ScriptableCl_RunStateEventSpawnDynent(localClientNum, eventParams, v13, onTime, (const ScriptableEventSpawnDynentDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_PFX:
          if ( !onTime && !_RDI->data.anonymous.buffer[0] )
          {
            __asm { vcomiss xmm9, dword ptr [rdi+58h] }
            if ( !_RDI->data.anonymous.buffer[60] )
              goto $LN8_100;
          }
          ScriptableCl_PlayParticleFX(localClientNum, eventParams, eventParams->scriptableIndex, (const ScriptableEventPFXDef *)&_RDI->data, v17);
          __asm { vcomiss xmm9, dword ptr [rdi+58h] }
          if ( !v24 )
            goto $LN8_100;
          v39 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v40 = _RDI->data.particleFX.eventStreamBufferOffsetClient;
          if ( v40 + 4 > (unsigned __int64)v39->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 1989, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          *(_DWORD *)&v39->eventStreamBuffer[v40] = _RDI->data.screenshake.frequencyYaw;
          goto LABEL_14;
        case Scriptable_EventType_Sound:
          if ( (onTime || _RDI->data.anonymous.buffer[0] || _RDI->data.anonymous.buffer[32]) && !_RDI->data.anonymous.buffer[33] )
            ScriptableCl_PlaySound(localClientNum, eventParams->scriptableIndex, (const ScriptableEventSoundDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Explosion:
          if ( !onTime && !_RDI->data.anonymous.buffer[36] )
            goto $LN8_100;
          scriptableIndex = eventParams->scriptableIndex;
          v42 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          ScriptableInstanceContextSecure::GetOrigin(v42, scriptableIndex, &outOrigin);
          scrNotification = _RDI->data.script.scrNotification;
          if ( !scrNotification || ScriptableCl_GetBonePosition(localClientNum, scriptableIndex, scrNotification, &outOrigin, _RDI->data.explosion.allowMissingTag) || _RDI->data.anonymous.buffer[38] )
          {
            __asm { vmovss  xmm6, dword ptr [rdi+38h] }
            if ( ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
            {
              LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
              truncate_cast<short,unsigned int>(LinkObject);
            }
            CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+3Ch]
              vmovss  [rsp+278h+var_238], xmm10
              vmovss  dword ptr [rsp+278h+pos], xmm9
              vmovss  dword ptr [rsp+278h+fmt], xmm0
              vmovss  xmm3, dword ptr [rdi+40h]; innerDamage
              vmovaps xmm2, xmm6; radius
            }
            Physics_ApplyRadiusForce((const Physics_WorldId)(3 * localClientNum + 3), &outOrigin, *(const float *)&_XMM2, *(const float *)&_XMM3, fmta, posc, &vec3_origin, *v13, v121);
            CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
            SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
            if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3209, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
              __debugbreak();
            CG_EntityWorkers_EnterCriticalSection();
            __asm
            {
              vmovaps xmm3, xmm9
              vmovaps xmm2, xmm6
            }
            ((void (__fastcall *)(CgSoundSystem *, vec3_t *))SoundSystem->PlayClientSideReactiveSounds)(SoundSystem, &outOrigin);
            CG_EntityWorkers_LeaveCriticalSection();
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
          goto LABEL_14;
        case Scriptable_EventType_Light:
          ScriptableCl_RunStateEventLight(localClientNum, eventParams, v13, onTime, (const ScriptableEventLightDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Sun:
          ScriptableCl_RunStateEventSun(localClientNum, eventParams, v13, onTime, (const ScriptableEventSunDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Rumble:
          if ( !onTime && !_RDI->data.anonymous.buffer[0] )
            goto $LN8_100;
          eventsB = _RDI->data.random.eventsB;
          if ( !eventsB || !LOBYTE(eventsB->base.name) )
            goto $LN8_100;
          if ( CG_Rumble_IsBroadcastRumble(_RDI->data.rumble.rumbleAsset) )
          {
            v54 = eventParams->scriptableIndex;
            v55 = ScriptableCl_GetInstanceCommonContext(localClientNum, v54);
            ScriptableInstanceContextSecure::GetOrigin(v55, v54, &outPosition);
            scrTagName = _RDI->data.sound.scrTagName;
            if ( !scrTagName || ScriptableCl_GetBonePosition(localClientNum, v54, scrTagName, &outPosition, _RDI->data.rumble.allowMissingTag) || _RDI->data.anonymous.buffer[41] )
            {
              __asm { vmovss  dword ptr [rsp+278h+impulseVecOverride], xmm10 }
              CG_Rumble_PlayDeferred(localClientNum, _RDI->data.rumble.rumbleAsset, RUMBLELOOP_ONESHOT, RUMBLESOURCE_POS, 0, &outPosition, impulseVecOverridea, 0);
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
            __asm { vmovss  dword ptr [rsp+278h+impulseVecOverride], xmm10 }
            CG_Rumble_PlayDeferred(localClientNum, _RDI->data.rumble.rumbleAsset, RUMBLELOOP_ONESHOT, RUMBLESOURCE_ENTITY, LocalClientGlobals->predictedPlayerState.clientNum, NULL, impulseVecOverride, 0);
          }
          goto LABEL_14;
        case Scriptable_EventType_Screenshake:
          ScriptableCl_RunStateEventScreenshake(localClientNum, eventParams, onTime, (const ScriptableEventScreenshakeDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_PartDamage:
          v57 = _RDI->data.partDamage.part;
          if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3663, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
            __debugbreak();
          if ( (v57->flags & 0x100) != 0 )
          {
            __asm { vcvttss2si rax, dword ptr [rdi+24h] }
            if ( _RDI->data.anonymous.buffer[8] )
            {
              LODWORD(_RAX) = -1;
              goto LABEL_88;
            }
            v61 = 0;
            if ( (_DWORD)_RAX )
LABEL_88:
              ScriptableBg_DamagePart(eventParams, v57, 0x41u, _RAX);
            __asm { vcomiss xmm9, dword ptr [rdi+2Ch] }
            if ( v61 )
            {
              v62 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
              __asm { vcomiss xmm9, dword ptr [rdi+30h] }
              if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3695, ASSERT_TYPE_ASSERT, "(partDamage->intervalDoT > 0.f)", (const char *)&queryFormat, "partDamage->intervalDoT > 0.f") )
                __debugbreak();
              v63 = _RDI->data.partDamage.eventStreamBufferOffsetClient;
              if ( v63 + 4 > (unsigned __int64)v62->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3699, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
                __debugbreak();
              *(_DWORD *)&v62->eventStreamBuffer[v63] = _RDI->data.random.eventBCount;
            }
            goto LABEL_14;
          }
          v58 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          if ( v58->def )
            v59 = v58->def->name;
          else
            v59 = "<unknown>";
          Com_PrintError(29, "Scriptable %s tried to damage a part that doesn't have any health states\n", v59);
LABEL_13:
          ScriptableCl_EnterError();
LABEL_14:
          v17 = v122;
$LN8_100:
          Sys_ProfEndNamedEvent();
          v122 = ++v17;
          v18 = ++v126;
          if ( v17 >= numEvents )
            goto LABEL_162;
          v16 = v128;
          break;
        case Scriptable_EventType_SetMayhem:
          ScriptableCl_RunStateEventSetMayhem(localClientNum, eventParams, onTime, (const ScriptableEventSetMayhemDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_PlayMayhem:
          v64 = eventParams->scriptableIndex;
          v65 = ScriptableCl_GetInstanceCommonContext(localClientNum, v64);
          v66 = _RDI->data.playMayhem.eventStreamBufferOffsetClient;
          if ( v66 + 4 > (unsigned __int64)v65->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3780, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          eventStreamBuffer = v65->eventStreamBuffer;
          if ( *(_DWORD *)&eventStreamBuffer[v66] )
          {
            v70 = ScriptableCl_GetLinkObject(localClientNum, v64);
            v71 = ScriptableCl_GetInstanceCommonContext(localClientNum, v64);
            if ( v71->def )
              v72 = v71->def->name;
            else
              v72 = "<unknown>";
            LODWORD(fmt) = v70;
            Com_sprintf(dest, 0x104ui64, "Scriptable-%s-%i", v72, fmt);
            *(_DWORD *)&eventStreamBuffer[v66] = SL_GetString(dest, 0);
            CG_EntityWorkers_EnterCriticalSection_Mayhem(NONE_LEGACY);
            v73.flatId = (unsigned int)_RDI->data.stateChange.partReference;
            if ( v73.flatId )
            {
              if ( v73.flatId == 1 )
                Mayhem_PauseInstance(*(scr_string_t *)&eventStreamBuffer[v66]);
            }
            else
            {
              Mayhem_PlayInstance(*(scr_string_t *)&eventStreamBuffer[v66]);
            }
            CG_EntityWorkers_LeaveCriticalSection_Mayhem(NONE_LEGACY);
            SL_RemoveRefToString(*(scr_string_t *)&eventStreamBuffer[v66]);
            v13 = v127;
          }
          else
          {
            v68 = ScriptableCl_GetInstanceCommonContext(localClientNum, v64);
            if ( v68->def )
              v69 = v68->def->name;
            else
              v69 = "<unknown>";
            Com_PrintError(29, "Scriptable %s tried to run a playmayhem event, but no mayhem was running for this scriptable\n", v69);
            ScriptableCl_EnterError();
          }
          goto LABEL_14;
        case Scriptable_EventType_ViewmodelShaderParam:
          ScriptableCl_RunStateEventViewmodelShaderParam(localClientNum, eventParams, onTime, (const ScriptableEventViewmodelShaderParamDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ClientViewSelector:
          IsCharacterThirdPerson = ScriptableCl_IsCharacterThirdPerson(localClientNum, eventParams->scriptableIndex);
          if ( (_RDI->data.anonymous.base->flags & 0x200) != 0 )
          {
            v75 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
            eventStreamBufferOffsetServer = _RDI->data.random.eventStreamBufferOffsetServer;
            if ( eventStreamBufferOffsetServer + 1 > (unsigned __int64)v75->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4025, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
              __debugbreak();
            v75->eventStreamBuffer[eventStreamBufferOffsetServer] = IsCharacterThirdPerson;
            v17 = v122;
          }
          holdranda = *v13;
          if ( IsCharacterThirdPerson )
          {
            posb = _RDI->data.random.eventBCount;
            v77 = _RDI->data.random.eventsB;
          }
          else
          {
            posb = _RDI->data.stateChange.partReference.flatId;
            v77 = _RDI->data.random.eventsA;
          }
          ScriptableCl_RunStateEvents_Specific(localClientNum, eventParams, &holdranda, onTime, v77, posb);
          goto $LN8_100;
        case Scriptable_EventType_TeamSelector:
          ScriptableCl_RunStateEventTeamSelector(localClientNum, eventParams, v13, onTime, (const ScriptableEventTeamSelectorDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyForce:
          ScriptableCl_RunStateEventApplyForce(localClientNum, eventParams, v13, onTime, (const ScriptableEventApplyForceDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyAngularForce:
          ScriptableCl_RunStateEventApplyAngularForce(localClientNum, eventParams, v13, onTime, (const ScriptableEventApplyAngularForceDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyConstantForce:
          ScriptableCl_RunStateEventApplyConstantForce(localClientNum, eventParams, v13, onTime, (const ScriptableEventApplyConstantForceDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ApplyConstantAngularForce:
          if ( !_RDI->data.anonymous.buffer[1] )
          {
            __asm { vmovaps xmm8, xmm9 }
LABEL_133:
            __asm { vmovaps xmm7, xmm9 }
            goto LABEL_134;
          }
          __asm
          {
            vmovaps xmm1, xmm10; max
            vmovaps xmm0, xmm9; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v13);
          __asm { vmovaps xmm8, xmm0 }
          if ( !_RDI->data.anonymous.buffer[1] )
            goto LABEL_133;
          __asm
          {
            vmovaps xmm1, xmm10; max
            vmovaps xmm0, xmm9; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v13);
          __asm { vmovaps xmm7, xmm0 }
          if ( _RDI->data.anonymous.buffer[1] )
          {
            __asm
            {
              vmovaps xmm1, xmm10; max
              vmovaps xmm0, xmm9; min
            }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, v13);
            __asm { vmovaps xmm6, xmm0 }
            goto LABEL_135;
          }
LABEL_134:
          __asm { vmovaps xmm6, xmm9 }
LABEL_135:
          v87 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v88 = _RDI->data.applyConstantAngularForce.eventStreamBufferOffsetClient;
          _RDI = v88;
          if ( v88 + 12 > (unsigned __int64)v87->eventStreamBufferSize )
          {
            LODWORD(v120) = v87->eventStreamBufferSize;
            LODWORD(randSeed) = v88 + 12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4421, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 3 * sizeof( float )", "r_context.eventStreamBufferSize", randSeed, v120) )
              __debugbreak();
          }
          _RAX = v87->eventStreamBuffer;
          __asm
          {
            vmovss  dword ptr [rdi+rax], xmm8
            vmovss  dword ptr [rdi+rax+4], xmm7
            vmovss  dword ptr [rdi+rax+8], xmm6
          }
          goto LABEL_14;
        case Scriptable_EventType_CompassIcon:
          ScriptableCL_RunStateEventCompassIcon(localClientNum, eventParams, onTime, (const ScriptableEventCompassIconDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_MaterialOverride:
          ScriptableCL_RunStateEventMaterialOverride(localClientNum, eventParams, onTime, (const ScriptableEventMaterialOverrideDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_DynamicBoneNoiseCurve:
          if ( onTime || _RDI->data.anonymous.buffer[0] )
            ScriptableCl_SetDynamicBoneNoiseCurve(localClientNum, eventParams->scriptableIndex, (const ScriptableEventDynamicBoneNoiseCurveDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Move:
          ScriptableCL_RunStateEventMove(localClientNum, eventParams, onTime, (const ScriptableEventMoveDef *const)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_Footstep:
          v91 = _RDI->data.anonymous.buffer[26];
          v92 = ScriptableCl_GetLinkObject(localClientNum, eventParams->scriptableIndex);
          v93 = truncate_cast<short,unsigned int>(v92);
          EntityFromObjectId = ScriptableCl_GetEntityFromObjectId(localClientNum, v93);
          CG_EntityWorkers_EnterCriticalSection();
          v95 = v91 & 1;
          if ( v95 )
            leftFootstepVFX = _RDI->data.footstep.leftFootstepVFX;
          else
            leftFootstepVFX = _RDI->data.footstep.rightFootstepVFX;
          LOBYTE(fmt) = 1;
          CG_Entity_AddFootstepEvent(localClientNum, v95, EntityFromObjectId, leftFootstepVFX, (TraceGroundSource)fmt, (ScriptableFootstepFlag)(_RDI->data.anonymous.buffer[26] | 0x80));
          CG_EntityWorkers_LeaveCriticalSection();
          goto LABEL_14;
        case Scriptable_EventType_GravityArc:
          ScriptableCL_RunStateEventGravityArc(localClientNum, eventParams, onTime, (const ScriptableEventGravityArcDef *const)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_ViewTrigger:
          v103 = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
          v104 = _RDI->data.wait.eventStreamBufferOffsetServer;
          if ( v104 + 1 > (unsigned __int64)v103->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2969, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v103->eventStreamBuffer[v104] = 0;
LABEL_161:
          Sys_ProfEndNamedEvent();
          goto LABEL_162;
        case Scriptable_EventType_Objective:
          ScriptableCl_RunStateEventObjective(localClientNum, eventParams, (const ScriptableEventObjectiveDef *)&_RDI->data);
          goto $LN8_100;
        case Scriptable_EventType_VehicleBlowUpTire:
          ScriptableCl_RunStateVehicleEvent(localClientNum, eventParams, _RDI);
          goto $LN8_100;
        default:
          LODWORD(pos) = _RDI->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4916, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableCl_RunStateEvents: Unknown event type %i", pos) )
            __debugbreak();
          goto $LN8_100;
      }
    }
  }
LABEL_162:
  _R11 = &v132;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
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
  __int64 v22; 
  __int64 v23; 

  _RDI = noise;
  if ( !noise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3098, ASSERT_TYPE_ASSERT, "(noise)", (const char *)&queryFormat, "noise") )
    __debugbreak();
  if ( _RDI->isViewmodel )
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
        LODWORD(v23) = ViewmodelDObjHandle;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v23) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v23) = 2;
        LODWORD(v22) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v14 = 2533 * localClientNum + v13;
      if ( v14 >= 0x13CA )
      {
        LODWORD(v23) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v23) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( v15 )
      {
        if ( v15 >= (unsigned int)s_objCount )
        {
          LODWORD(v23) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v23) )
            __debugbreak();
        }
        v16 = (DObj *)s_objBuf[v15];
        if ( v16 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+1Ch]; rateMul
            vmovss  xmm2, dword ptr [rdi+18h]; strengthMul
          }
          XAnimBonePhysics_SetCurveState(v16, _RDI->curve, *(const float *)&_XMM2, *(const float *)&_XMM3);
        }
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
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+1Ch]; rateMul
        vmovss  xmm2, dword ptr [rdi+18h]; strengthMul
      }
      XAnimBonePhysics_SetCurveState(DObj, _RDI->curve, *(const float *)&_XMM2, *(const float *)&_XMM3);
    }
  }
}

/*
==============
ScriptableCl_SetViewmodelShaderParam
==============
*/

void __fastcall ScriptableCl_SetViewmodelShaderParam(shaderOverride_t *shaderOverride, const ScriptableEventViewmodelShaderParamDef *viewmodelShaderParam, const Scriptable_EventViewmodelShaderParam_Data *data, double blendAmount)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3883, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx+8]
    vmulss  xmm0, xmm6, dword ptr [rbx+14h]
    vaddss  xmm2, xmm2, xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
  ScriptableCl_SetViewmodelShaderParam_Internal(shaderOverride, viewmodelShaderParam, *(const float *)&_XMM2);
}

/*
==============
ScriptableCl_SetViewmodelShaderParam_Internal
==============
*/

void __fastcall ScriptableCl_SetViewmodelShaderParam_Internal(shaderOverride_t *shaderOverride, const ScriptableEventViewmodelShaderParamDef *viewmodelShaderParam, double value)
{
  _RDI = shaderOverride;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  CG_EntityWorkers_EnterCriticalSection_ViewModel(NONE_LEGACY);
  switch ( viewmodelShaderParam->shaderParam )
  {
    case Scriptable_ShaderParamType_ScrollRate_X:
      __asm { vmovss  dword ptr [rdi], xmm6; jumptable 00000001414D7E0E case 1 }
      break;
    case Scriptable_ShaderParamType_ScrollRate_Y:
      __asm { vmovss  dword ptr [rdi+4], xmm6; jumptable 00000001414D7E0E case 2 }
      break;
    case Scriptable_ShaderParamType_ScrollRate_R:
      __asm { vmovss  dword ptr [rdi+8], xmm6; jumptable 00000001414D7E0E case 3 }
      break;
    case Scriptable_ShaderParamType_Rotation:
      __asm { vmovss  dword ptr [rdi+14h], xmm6; jumptable 00000001414D7E0E case 4 }
      break;
    case Scriptable_ShaderParamType_Tiling_X:
      __asm { vmovss  dword ptr [rdi+0Ch], xmm6; jumptable 00000001414D7E0E case 5 }
      break;
    case Scriptable_ShaderParamType_Tiling_Y:
      __asm { vmovss  dword ptr [rdi+10h], xmm6; jumptable 00000001414D7E0E case 6 }
      break;
    case Scriptable_ShaderParamType_Alpha:
      __asm { vmovss  dword ptr [rdi+18h], xmm6; jumptable 00000001414D7E0E case 7 }
      break;
    case Scriptable_ShaderParamType_Emissive:
      __asm { vmovss  dword ptr [rdi+1Ch], xmm6; jumptable 00000001414D7E0E case 8 }
      break;
    case Scriptable_ShaderParamType_AtlasFrame:
    case Scriptable_ShaderParamType_Placeholder1:
      __asm { vmovss  dword ptr [rdi+20h], xmm6; jumptable 00000001414D7E0E cases 9,10 }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 3874, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableCl_SetViewmodelShaderParam_Internal passed invalid shaderParam. This should be caught by a Com_Error in the calling function.") )
        __debugbreak();
      break;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  ScriptableInstanceContextSecure *v17; 
  const char *name; 
  ScriptableStateDef *v19; 
  double v24; 
  double v25; 
  double v26; 
  vec3_t outOrigin; 
  char v28; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
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
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+0C8h+outOrigin+8]
      vcvtss2sd xmm6, xmm6, xmm6
      vmovss  xmm7, dword ptr [rsp+0C8h+outOrigin+4]
      vcvtss2sd xmm7, xmm7, xmm7
      vmovss  xmm8, dword ptr [rsp+0C8h+outOrigin]
      vcvtss2sd xmm8, xmm8, xmm8
    }
    v17 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v17->def )
      name = v17->def->name;
    else
      name = "<unknown>";
    __asm
    {
      vmovsd  [rsp+0C8h+var_68], xmm6
      vmovsd  [rsp+0C8h+var_70], xmm7
      vmovsd  [rsp+0C8h+var_78], xmm8
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5304, ASSERT_TYPE_ASSERT, "(runtime->stateId < eventParams->partDef->numStates)", "%s\n\tState index invalid %i < %i for part %i in %s at [%.2f, %.2f, %.2f]", "runtime->stateId < eventParams->partDef->numStates", PartRuntime->stateId, eventParams->partDef->numStates, eventParams->partDef->flatId, name, v24, v25, v26) )
      __debugbreak();
  }
  v19 = &eventParams->partDef->states[PartRuntime->stateId];
  ScriptableCl_StopStateEvents(localClientNum, eventParams, v19->base.events, v19->base.numEvents);
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v28;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  __int64 v12; 
  const char *EventTypeName; 
  const char *v15; 
  __int64 v16; 
  const ScriptableEventParams *v17; 
  LocalClientNum_t v18; 
  unsigned int v19; 
  ScriptableEventDef *v20; 
  unsigned int scriptableIndex; 
  const DObj *DObj; 
  XAnimTree *Tree; 
  unsigned int v25; 
  unsigned int v27; 
  ScriptableInstanceContextSecure *v28; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  unsigned int v30; 
  ScriptableInstanceContextSecure *v31; 
  __int64 v32; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int LinkObject; 
  ScriptableInstanceContextSecure *v35; 
  const char *name; 
  scr_string_t String; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int v43; 
  DObj *ClientDObj; 
  DObj *v45; 
  unsigned __int16 entnum; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  ScriptableInstanceContextSecure *v50; 
  ScriptableGravityArcRuntimeData arcData; 
  char dest[280]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, eventParams->scriptableIndex);
  v50 = InstanceCommonContext;
  if ( numEvents )
  {
    _RSI = &events->type;
    v12 = numEvents;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      EventTypeName = ScriptableBg_GetEventTypeName(*_RSI);
      v15 = j_va("ScriptableCl_StopEvent %s", EventTypeName);
      Sys_ProfBeginNamedEvent(0xFFD2691E, v15);
      switch ( *_RSI )
      {
        case Scriptable_EventType_Random:
          v16 = *((unsigned __int16 *)_RSI + 25);
          if ( v16 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5160, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v17 = eventParams;
          v18 = localClientNum;
          if ( !InstanceCommonContext->eventStreamBuffer[v16] )
            goto LABEL_46;
          v19 = *((_DWORD *)_RSI + 5);
          goto LABEL_9;
        case Scriptable_EventType_Collision:
          if ( *((_BYTE *)_RSI + 35) )
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
                  v25 = *((unsigned __int16 *)_RSI + 36);
                  if ( *((_BYTE *)_RSI + 26) )
                  {
                    __asm { vmovss  dword ptr [rsp+1F8h+fmt], xmm6 }
                    XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v25, fmta);
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rsi+30h]
                      vmovss  dword ptr [rsp+1F8h+fmt], xmm0
                    }
                    XAnimClearGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v25, fmtb, LINEAR);
                  }
                }
              }
            }
          }
          break;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableCl_StopStateEventDisablePhysicsSubShape(localClientNum, eventParams, (const ScriptableEventDisablePhysicsSubShapeDef *)(_RSI + 2));
          break;
        case Scriptable_EventType_NoteTrack:
          InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, eventParams->scriptableIndex);
          if ( (Scriptable_EventType *)InstanceNoteTrackContext->currentNoteTracks == _RSI + 2 )
          {
            InstanceNoteTrackContext->currentNoteTracks = NULL;
            InstanceNoteTrackContext->currentNoteTrackPartDef = NULL;
          }
          break;
        case Scriptable_EventType_PFX:
          ScriptableCl_StopStateEventParticleFX(localClientNum, eventParams, (const ScriptableEventPFXDef *)(_RSI + 2));
          break;
        case Scriptable_EventType_SetMayhem:
          v30 = eventParams->scriptableIndex;
          v31 = ScriptableCl_GetInstanceCommonContext(localClientNum, v30);
          v32 = *((unsigned __int16 *)_RSI + 12);
          if ( v32 + 4 > (unsigned __int64)v31->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5114, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          eventStreamBuffer = v31->eventStreamBuffer;
          LinkObject = ScriptableCl_GetLinkObject(localClientNum, v30);
          v35 = ScriptableCl_GetInstanceCommonContext(localClientNum, v30);
          if ( v35->def )
            name = v35->def->name;
          else
            name = "<unknown>";
          LODWORD(fmt) = LinkObject;
          Com_sprintf(dest, 0x104ui64, "Scriptable-%s-%i", name, fmt);
          String = SL_GetString(dest, 0);
          *(_DWORD *)&eventStreamBuffer[v32] = String;
          if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5126, ASSERT_TYPE_ASSERT, "(*mayhemId != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*mayhemId != NULL_SCR_STRING") )
            __debugbreak();
          CG_EntityWorkers_EnterCriticalSection_Mayhem(NONE_LEGACY);
          if ( Mayhem_DoesInstanceExist(*(scr_string_t *)&eventStreamBuffer[v32]) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5128, ASSERT_TYPE_ASSERT, "(Mayhem_DoesInstanceExist( *mayhemId ) == qtrue)", (const char *)&queryFormat, "Mayhem_DoesInstanceExist( *mayhemId ) == qtrue") )
            __debugbreak();
          Mayhem_KillInstance(*(scr_string_t *)&eventStreamBuffer[v32]);
          CG_EntityWorkers_LeaveCriticalSection_Mayhem(NONE_LEGACY);
          SL_RemoveRefToString(*(scr_string_t *)&eventStreamBuffer[v32]);
          *(_DWORD *)&eventStreamBuffer[v32] = 0;
          InstanceCommonContext = v50;
          break;
        case Scriptable_EventType_ClientViewSelector:
          v38 = *((unsigned __int16 *)_RSI + 24);
          if ( v38 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5219, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v17 = eventParams;
          v18 = localClientNum;
          if ( InstanceCommonContext->eventStreamBuffer[v38] )
          {
LABEL_46:
            v19 = *((_DWORD *)_RSI + 8);
            v20 = (ScriptableEventDef *)*((_QWORD *)_RSI + 5);
          }
          else
          {
            v19 = *((_DWORD *)_RSI + 4);
LABEL_9:
            v20 = (ScriptableEventDef *)*((_QWORD *)_RSI + 3);
          }
          goto LABEL_10;
        case Scriptable_EventType_TeamSelector:
          v39 = *((unsigned __int16 *)_RSI + 28);
          if ( v39 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5242, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
            __debugbreak();
          v17 = eventParams;
          v18 = localClientNum;
          if ( InstanceCommonContext->eventStreamBuffer[v39] )
          {
            v19 = *((_DWORD *)_RSI + 6);
            v20 = (ScriptableEventDef *)*((_QWORD *)_RSI + 4);
          }
          else
          {
            v19 = *((_DWORD *)_RSI + 10);
            v20 = (ScriptableEventDef *)*((_QWORD *)_RSI + 6);
          }
LABEL_10:
          ScriptableCl_StopStateEvents(v18, v17, v20, v19);
          break;
        case Scriptable_EventType_MaterialOverride:
          v40 = eventParams->scriptableIndex;
          Entity = ScriptableCl_GetEntity(localClientNum, v40);
          if ( Entity )
          {
            if ( Entity->nextState.eType != ET_SCRIPTMOVER || (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) == 0 || (otherEntityNum = Entity->nextState.otherEntityNum, otherEntityNum == 2047) )
            {
              v43 = ScriptableCl_GetLinkObject(localClientNum, v40);
              otherEntityNum = truncate_cast<short,unsigned int>(v43);
            }
            ClientDObj = Com_GetClientDObj(otherEntityNum, localClientNum);
            v45 = ClientDObj;
            if ( ClientDObj )
            {
              entnum = ClientDObj->entnum;
              if ( *((_DWORD *)_RSI + 4) == 1 )
              {
                DObjFreeMaterialOverrides(ClientDObj);
                DObjFreeMaterialData(v45);
              }
              R_RemoveScriptableEntityData(localClientNum, entnum);
              InstanceCommonContext = v50;
            }
          }
          break;
        case Scriptable_EventType_GravityArc:
          v27 = eventParams->scriptableIndex;
          v28 = ScriptableCl_GetInstanceCommonContext(localClientNum, v27);
          *((_BYTE *)v28 + 61) &= ~2u;
          ScriptableCl_GravityArcCalcData(localClientNum, v27, v28, (const ScriptableEventGravityArcDef *const)(_RSI + 2), &arcData);
          ScriptableCL_StateEventMovePhysicsClearVelocity(localClientNum, v27);
          ScriptableCL_SetPose(localClientNum, v27, v28, &arcData.endOrigin, &arcData.endAngles, 1);
          InstanceCommonContext = v50;
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
      _RSI += 44;
      --v12;
    }
    while ( v12 );
  }
  __asm { vmovaps xmm6, [rsp+1F8h+var_48] }
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

void __fastcall ScriptableCl_UpdateEvent(double deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, const ScriptableStateDef *state, const ScriptableEventDef *event, unsigned int eventIdx, unsigned int *holdrand, ScriptableUpdateRequest *inOutRequest)
{
  __int64 v18; 
  ScriptableUpdateRequest *v21; 
  const char *EventTypeName; 
  const char *v23; 
  char v24; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned __int64 eventStreamBufferSize; 
  bool v28; 
  bool v29; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int v35; 
  const ScriptableEventDef *v36; 
  ScriptableEventDef *v38; 
  DObj *DObj; 
  DObj *v41; 
  XAnimTree *Tree; 
  XAnimOwner v43; 
  centity_t *Entity; 
  XAnim_s *v45; 
  cg_t *LocalClientGlobals; 
  cg_t *v47; 
  playerState_s *p_predictedPlayerState; 
  int v49; 
  char v50; 
  unsigned int index; 
  char v65; 
  bool v71; 
  bool v72; 
  unsigned __int8 v76; 
  bool v77; 
  bool v78; 
  int v80; 
  ParticleSystem *v81; 
  unsigned int v82; 
  __int64 v83; 
  ScriptableInstanceContextSecure *v84; 
  const char *name; 
  centity_t *v87; 
  __int64 v106; 
  __int64 eventStreamBufferOffsetClient; 
  const Scriptable_EventLight_Data *v114; 
  GfxWorld *world; 
  unsigned int v126; 
  __int64 v127; 
  __int64 v129; 
  bool v216; 
  unsigned __int64 v218; 
  bool v219; 
  bool v220; 
  ScriptableEventDef *eventsB; 
  char v227; 
  cg_t *v228; 
  centity_t *v229; 
  characterInfo_t *CharacterInfo; 
  __int64 v231; 
  unsigned __int8 *v232; 
  const Scriptable_EventViewmodelShaderParam_Data *v233; 
  DObj *v252; 
  __int64 v253; 
  unsigned int eventBCount; 
  ScriptableEventDef *eventsA; 
  unsigned int v256; 
  ScriptableEventDef *v257; 
  unsigned int v259; 
  const ScriptableEventDef *v260; 
  DObj *v262; 
  unsigned int LinkObject; 
  unsigned __int64 v264; 
  DObj *v265; 
  unsigned int eventPassCount; 
  ScriptableEventDef *eventsPass; 
  unsigned int v268; 
  const ScriptableEventDef *v269; 
  unsigned int v271; 
  const ScriptableEventDef *v272; 
  char v280; 
  char v281; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  ScriptableEventDef *v314; 
  float v315; 
  float v316; 
  __int64 rate; 
  float ratea; 
  float rateb; 
  char IsCharacterThirdPerson; 
  char DoesTeamMatch; 
  char v322; 
  unsigned int pHoldrand; 
  unsigned __int8 *v324; 
  __int64 v325; 
  DObj *obj[2]; 
  float4 endPos; 
  float4 startPos; 
  tmat43_t<vec3_t> outTransform; 
  char v330; 
  void *retaddr; 

  _RAX = &retaddr;
  v325 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v18 = localClientNum;
  __asm { vmovaps xmm6, xmm0 }
  _RDI = event;
  startPos.v.m128_u64[0] = (unsigned __int64)holdrand;
  v21 = inOutRequest;
  obj[0] = (DObj *)inOutRequest;
  if ( !event && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5374, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
    __debugbreak();
  EventTypeName = ScriptableBg_GetEventTypeName(event->type);
  v23 = j_va("ScriptableCl_UpdateEvent %s", EventTypeName);
  Sys_ProfBeginNamedEvent(0xFFD2691E, v23);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v18, scriptableIndex);
  switch ( event->type )
  {
    case Scriptable_EventType_Wait:
      _RDI = event->data.wait.eventStreamBufferOffsetClient;
      eventStreamBufferSize = InstanceCommonContext->eventStreamBufferSize;
      v28 = _RDI + 4 <= eventStreamBufferSize;
      if ( _RDI + 4 > eventStreamBufferSize )
      {
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5386, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize");
        v28 = !v29;
        if ( v29 )
          __debugbreak();
      }
      _RAX = InstanceCommonContext->eventStreamBuffer;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rax]
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm0, xmm1
      }
      if ( !v28 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi+rax], xmm0
          vcomiss xmm0, xmm1
        }
        if ( v28 )
        {
          *(_DWORD *)&_RAX[_RDI] = 0;
          ScriptableCl_RunStateEventsFrom((const LocalClientNum_t)v18, scriptableIndex, part, eventIdx + 1, (unsigned int *)startPos.v.m128_u64[0]);
        }
        *inOutRequest = (ScriptableUpdateRequest)257;
      }
      goto LABEL_333;
    case Scriptable_EventType_Random:
      obj[0] = (DObj *)event->data.random.eventStreamBufferOffsetClient;
      if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5421, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
      v35 = 0;
      if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)eventStreamBuffer) )
      {
        if ( event->data.stateChange.stateIdx )
        {
          while ( 1 )
          {
            v36 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v35);
            if ( (v36->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v36, v35, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v35 >= event->data.stateChange.stateIdx )
              goto LABEL_333;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5438, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_313;
        }
      }
      else if ( event->data.random.eventBCount )
      {
        while ( 1 )
        {
          v38 = &event->data.random.eventsB[v35];
          if ( (v38->base.flags & 0x200) != 0 )
          {
            __asm { vmovaps xmm0, xmm6; deltaTime }
            ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v38, v35, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
            if ( inOutRequest->stopUpdatingEventsForState )
              break;
          }
          if ( ++v35 >= event->data.random.eventBCount )
            goto LABEL_333;
        }
        if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5455, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
          goto LABEL_313;
      }
      goto LABEL_333;
    case Scriptable_EventType_Animation:
      inOutRequest->eventUpdateRequired = 1;
      if ( ScriptableCl_GetDObjSafe((const LocalClientNum_t)v18, scriptableIndex) )
      {
        if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v18, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5475, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        DObj = ScriptableCl_GetDObj((const LocalClientNum_t)v18, scriptableIndex);
        v41 = DObj;
        obj[0] = DObj;
        if ( DObj && InstanceCommonContext->def->animationTreeDef[0] )
        {
          Tree = DObjGetTree(DObj);
          if ( Tree )
            goto LABEL_54;
          if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v18, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
          {
            Entity = ScriptableCl_GetEntity((const LocalClientNum_t)v18, scriptableIndex);
            if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5495, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
              __debugbreak();
            v45 = InstanceCommonContext->def->animationTreeDef[0];
            if ( v45 && v45->initialized )
            {
              LOBYTE(v43) = 1;
              Tree = Com_XAnimCreateSmallTree(v45, v43);
              DObjSetTree(v41, Tree);
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
                LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
                if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5524, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                  __debugbreak();
                v47 = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
                p_predictedPlayerState = &v47->predictedPlayerState;
                if ( v47 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5527, ASSERT_TYPE_ASSERT, "(ps != nullptr)", (const char *)&queryFormat, "ps != nullptr") )
                  __debugbreak();
                v49 = ScriptableCl_GetFrameServerTime((const LocalClientNum_t)v18) - p_predictedPlayerState->deltaTime;
                if ( LocalClientGlobals->inKillCam )
                  goto LABEL_66;
                if ( (unsigned int)v18 >= 2 )
                {
                  LODWORD(v314) = v18;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 176, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrameKillCamTransition ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrameKillCamTransition\n\t%i not in [0, %i)", v314, 2) )
                    __debugbreak();
                }
                if ( !g_scriptableFrameKillCamTransition[v18] )
LABEL_66:
                  v50 = 0;
                else
                  v50 = 1;
                index = event->data.animation.animationIndex[0].index;
                if ( LocalClientGlobals->inKillCam || v50 )
                {
                  _R15 = ScriptableCl_StateEventAnimationGetData(InstanceCommonContext, (const ScriptableEventAnimationDef *const)&event->data);
                  if ( index )
                  {
                    if ( XAnimGetInfoIndex(Tree, 0, XANIM_SUBTREE_DEFAULT, index) )
                    {
                      if ( !XAnimIsLooped(Tree->anims, index) && LocalClientGlobals->oldTime - LocalClientGlobals->predictedPlayerState.deltaTime <= _R15->serverTime && _R15->serverTime < v49 )
                      {
                        __asm
                        {
                          vmovss  xmm6, dword ptr [r15+8]
                          vmovss  [rsp+180h+pHoldrand], xmm6
                        }
                        if ( (pHoldrand & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5556, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
                          __debugbreak();
                        __asm { vmovss  dword ptr [rsp+180h+fmt], xmm6 }
                        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmta);
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm7, xmm7, xmm7 }
                      if ( v49 - _R15->serverTime >= 0 || XAnimIsLooped(Tree->anims, index) )
                        __asm { vmovss  xmm6, dword ptr [r15+8] }
                      else
                        __asm { vxorps  xmm6, xmm6, xmm6 }
                      __asm { vmovss  [rsp+180h+pHoldrand], xmm6 }
                      if ( (pHoldrand & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5577, ASSERT_TYPE_SANITY, "( !IS_NAN( playbackRate ) )", (const char *)&queryFormat, "!IS_NAN( playbackRate )") )
                        __debugbreak();
                      __asm
                      {
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm0, xmm0, r12d
                        vmulss  xmm9, xmm0, cs:__real@3a83126f
                        vmovss  xmm8, cs:__real@3f800000
                      }
                      if ( event->data.anonymous.buffer[9] )
                      {
                        __asm
                        {
                          vmovss  [rsp+180h+rate], xmm6
                          vmovss  dword ptr [rsp+180h+var_158], xmm7
                          vmovss  dword ptr [rsp+180h+fmt], xmm8
                        }
                        XAnimSetCompleteGoalWeightKnob(obj[0], 0, XANIM_SUBTREE_DEFAULT, index, fmtb, v315, ratea, (scr_string_t)0, 4u, 0, LINEAR);
                      }
                      else
                      {
                        __asm
                        {
                          vmovss  [rsp+180h+rate], xmm6
                          vmovss  dword ptr [rsp+180h+var_158], xmm7
                          vmovss  dword ptr [rsp+180h+fmt], xmm8
                        }
                        XAnimSetCompleteGoalWeight(obj[0], 0, XANIM_SUBTREE_DEFAULT, index, fmtc, v316, rateb, (scr_string_t)0, 4u, 0, LINEAR, NULL);
                      }
                      if ( event->data.anonymous.buffer[20] )
                      {
                        XAnimGetLength(Tree->anims, index);
                        __asm
                        {
                          vdivss  xmm1, xmm9, xmm0
                          vmulss  xmm2, xmm1, xmm6
                          vaddss  xmm6, xmm2, dword ptr [r15+4]
                          vmovaps xmm0, xmm6; X
                        }
                        if ( XAnimIsLooped(Tree->anims, index) )
                        {
                          __asm { vmovaps xmm1, xmm8; Y }
                          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                          __asm
                          {
                            vmovaps xmm6, xmm0
                            vcomiss xmm0, xmm7
                          }
                          if ( v65 )
                          {
                            __asm
                            {
                              vsubss  xmm6, xmm8, xmm0
                              vcomiss xmm6, xmm7
                            }
                            if ( !v65 )
                              __asm { vcomiss xmm6, xmm8 }
                            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5604, ASSERT_TYPE_ASSERT, "(startTime >= 0.0f && startTime < 1.0f)", (const char *)&queryFormat, "startTime >= 0.0f && startTime < 1.0f") )
                              __debugbreak();
                          }
                        }
                        else
                        {
                          __asm
                          {
                            vmovaps xmm2, xmm8; max
                            vxorps  xmm1, xmm1, xmm1; min
                          }
                          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                          __asm { vmovaps xmm6, xmm0 }
                        }
                        __asm { vmovss  [rsp+180h+pHoldrand], xmm6 }
                        if ( (pHoldrand & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5611, ASSERT_TYPE_SANITY, "( !IS_NAN( startTime ) )", (const char *)&queryFormat, "!IS_NAN( startTime )") )
                          __debugbreak();
                        __asm { vmovss  dword ptr [rsp+180h+fmt], xmm6 }
                        XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmtd);
                      }
                      else
                      {
                        __asm
                        {
                          vmulss  xmm0, xmm9, xmm6
                          vaddss  xmm8, xmm0, dword ptr [r15+4]
                          vmovss  [rsp+180h+pHoldrand], xmm8
                        }
                        v71 = (pHoldrand & 0x7F800000) < 0x7F800000;
                        if ( (pHoldrand & 0x7F800000) == 2139095040 )
                        {
                          v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5617, ASSERT_TYPE_SANITY, "( !IS_NAN( startTime ) )", (const char *)&queryFormat, "!IS_NAN( startTime )");
                          v71 = 0;
                          if ( v72 )
                            __debugbreak();
                        }
                        __asm { vcomiss xmm8, xmm7 }
                        if ( v71 )
                        {
                          if ( XAnimIsLooped(Tree->anims, index) )
                          {
                            *(double *)&_XMM0 = XAnimGetLength(Tree->anims, index);
                            __asm
                            {
                              vmovaps xmm6, xmm0
                              vmovaps xmm1, xmm0; Y
                              vmovaps xmm0, xmm8; X
                            }
                            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                            __asm
                            {
                              vaddss  xmm8, xmm0, xmm6
                              vcomiss xmm8, xmm7
                            }
                            if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5624, ASSERT_TYPE_ASSERT, "(startTime >= 0.0f)", (const char *)&queryFormat, "startTime >= 0.0f") )
                              __debugbreak();
                          }
                          else
                          {
                            __asm { vxorps  xmm8, xmm8, xmm8 }
                          }
                        }
                        __asm { vmovss  dword ptr [rsp+180h+fmt], xmm8 }
                        XAnimSetTimeInSeconds(Tree, 0, XANIM_SUBTREE_DEFAULT, index, fmte);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_333;
    case Scriptable_EventType_PFX:
      v76 = event->data.anonymous.buffer[60];
      v77 = v76 && event->data.anonymous.buffer[69] && event->data.random.eventBCount;
      v78 = v76 && event->data.particleFX.scrEndTagCount;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm7, dword ptr [rdi+58h]
      }
      if ( v77 || v78 )
      {
        obj[0] = (DObj *)event->data.particleFX.eventStreamBufferOffsetClient;
        if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5671, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( unsigned int ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v80 = *(_DWORD *)((char *)&obj[0]->tree + (unsigned __int64)InstanceCommonContext->eventStreamBuffer);
        v81 = NULL;
        v82 = 0;
        if ( g_particleSystemsGeneration[4096 * v18 + (v80 & 0xFFF)].__all32 == v80 )
          v82 = v80 & 0xFFF;
        v83 = (v18 << 12) + v82;
        if ( g_particleSystems[0][v83] >= (ParticleSystem *)0x1000 )
          v81 = g_particleSystems[0][v83];
        if ( v81 )
        {
          inOutRequest->eventUpdateRequired = 1;
          if ( v77 )
          {
            if ( !event->data.random.eventBCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5689, ASSERT_TYPE_ASSERT, "(event->data.particleFX.scrTagCount > 0)", (const char *)&queryFormat, "event->data.particleFX.scrTagCount > 0") )
              __debugbreak();
            if ( ScriptableCl_GetBoneTransform((const LocalClientNum_t)v18, scriptableIndex, *event->data.particleFX.scrTagNames, &outTransform, 1) )
            {
              if ( !ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v18, scriptableIndex, SCRIPTABLE_LINK_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5695, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY ))", (const char *)&queryFormat, "ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
                __debugbreak();
              __asm { vmovss  xmm8, dword ptr [rdi+6Ch] }
              v87 = ScriptableCl_GetEntity((const LocalClientNum_t)v18, scriptableIndex);
              if ( v87 && v87->nextState.eType == ET_MISSILE )
              {
                __asm { vmovss  xmm1, cs:__real@461c4000; maxAbsValueSize }
                MSG_UnpackUnsignedFloat(v87->nextState.lerp.u.anonymous.data[6], *(float *)&_XMM1, 0x10u);
                __asm
                {
                  vcmpltss xmm1, xmm7, xmm0
                  vblendvps xmm8, xmm8, xmm0, xmm1
                }
              }
              if ( event->data.particleFX.beamBoneAxis >= 3u )
              {
                LODWORD(v314) = event->data.particleFX.beamBoneAxis;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5709, ASSERT_TYPE_ASSERT, "(unsigned)( event->data.particleFX.beamBoneAxis ) < (unsigned)( 3 )", "event->data.particleFX.beamBoneAxis doesn't index 3\n\t%i not in [0, %i)", v314, 3) )
                  __debugbreak();
              }
              if ( event->data.particleFX.beamBoneAxis >= 4u )
              {
                LODWORD(rate) = 4;
                LODWORD(v314) = event->data.particleFX.beamBoneAxis;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v314, rate) )
                  __debugbreak();
              }
              __asm
              {
                vmulss  xmm0, xmm8, dword ptr [rbp+rcx*4+80h+outTransform]
                vmovss  xmm3, dword ptr [rbp+80h+outTransform+24h]
                vaddss  xmm6, xmm0, xmm3
                vmulss  xmm1, xmm8, dword ptr [rbp+rcx*4+80h+outTransform+4]
                vaddss  xmm5, xmm1, dword ptr [rbp+80h+outTransform+28h]
                vmulss  xmm0, xmm8, dword ptr [rbp+rcx*4+80h+outTransform+8]
                vaddss  xmm4, xmm0, dword ptr [rbp+80h+outTransform+2Ch]
              }
              endPos.v.m128_i32[3] = 0;
              __asm
              {
                vmovups xmm0, xmmword ptr [rbp+80h+endPos.v]
                vmovss  xmm0, xmm0, xmm3
                vinsertps xmm0, xmm0, dword ptr [rbp+80h+outTransform+28h], 10h
                vinsertps xmm0, xmm0, dword ptr [rbp+80h+outTransform+2Ch], 20h
                vmovups xmmword ptr [rbp+80h+endPos.v], xmm0
                vmovups xmmword ptr [rbp+80h+obj], xmm0
              }
              endPos.v.m128_i32[3] = 0;
              __asm
              {
                vmovups xmm0, xmmword ptr [rbp+80h+endPos.v]
                vmovss  xmm0, xmm0, xmm6
                vinsertps xmm0, xmm0, xmm5, 10h
                vinsertps xmm0, xmm0, xmm4, 20h ; ' '
                vmovups xmmword ptr [rbp+80h+endPos.v], xmm0
                vmovups xmmword ptr [rbp+80h+endPos.v], xmm0
              }
              CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
              ParticleSystem::SetBeamPos(v81, (const float4 *)obj, &endPos);
              CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
            }
          }
          else
          {
            if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5731, ASSERT_TYPE_ASSERT, "(loopingWithEndTag)", (const char *)&queryFormat, "loopingWithEndTag") )
              __debugbreak();
            pHoldrand = Sys_Milliseconds();
            v106 = BG_irand(0, event->data.screenshake.radius, &pHoldrand);
            CG_EntityWorkers_EnterCriticalSection_VFX(NONE_LEGACY);
            ParticleSystem::GetBeamPos(v81, &startPos, (float4 *)obj);
            if ( ScriptableCl_GetBonePosition((const LocalClientNum_t)v18, scriptableIndex, *((const scr_string_t *)&event->data.random.eventsB->base.name + v106), (vec3_t *)&endPos, 0) )
            {
              __asm { vmovss  xmm0, dword ptr [rbp+80h+endPos.v] }
              HIDWORD(obj[1]) = 0;
              __asm
              {
                vmovups xmm3, xmmword ptr [rbp+80h+obj]
                vmovss  xmm3, xmm3, xmm0
                vinsertps xmm3, xmm3, dword ptr [rbp+80h+endPos.v+4], 10h
                vinsertps xmm3, xmm3, dword ptr [rbp+80h+endPos.v+8], 20h
                vmovups xmmword ptr [rbp+80h+obj], xmm3
                vmovups xmmword ptr [rbp+80h+obj], xmm3
              }
              ParticleSystem::SetBeamPos(v81, &startPos, (const float4 *)obj);
            }
            CG_EntityWorkers_LeaveCriticalSection_VFX(NONE_LEGACY);
          }
        }
        else
        {
          v84 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v18, scriptableIndex);
          if ( v84->def )
            name = v84->def->name;
          else
            name = "<unknown>";
          Com_PrintWarning(29, "Scriptable UpdateEvent: Missing particle system (%d %s)\n", scriptableIndex, name);
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5754, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable_EventType_PFX is running Update when it should not be.") )
      {
        goto LABEL_313;
      }
      goto LABEL_333;
    case Scriptable_EventType_Sound:
      inOutRequest->eventUpdateRequired = 1;
      if ( !event->data.anonymous.buffer[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5764, ASSERT_TYPE_ASSERT, "(event->data.sound.looping)", (const char *)&queryFormat, "event->data.sound.looping") )
        __debugbreak();
      ScriptableCl_PlaySound((const LocalClientNum_t)v18, scriptableIndex, (const ScriptableEventSoundDef *)&event->data);
      goto LABEL_333;
    case Scriptable_EventType_Light:
      if ( !event->data.anonymous.buffer[36] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5771, ASSERT_TYPE_ASSERT, "(event->data.light.useStateTransitionTime)", (const char *)&queryFormat, "event->data.light.useStateTransitionTime") )
        __debugbreak();
      if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)obj) )
      {
        eventStreamBufferOffsetClient = event->data.animation.eventStreamBufferOffsetClient;
        if ( eventStreamBufferOffsetClient + 36 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5784, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventLight_Data ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v114 = (const Scriptable_EventLight_Data *)&InstanceCommonContext->eventStreamBuffer[eventStreamBufferOffsetClient];
        CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
        if ( v114->transTime < 0 )
        {
          LODWORD(v314) = v114->transTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5794, ASSERT_TYPE_ASSERT, "( ( data->transTime >= 0 ) )", "( data->transTime ) = %i", v314) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r15+4]
          vmaxss  xmm1, xmm0, cs:__real@34000000
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vdivss  xmm0, xmm0, xmm1; val
          vmovss  xmm7, cs:__real@3f800000
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm6, xmm0
          vcomiss xmm0, xmm7
        }
        if ( v24 )
          inOutRequest->eventUpdateRequired = 1;
        world = rgp.world;
        if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5807, ASSERT_TYPE_ASSERT, "(curGfxWorld)", (const char *)&queryFormat, "curGfxWorld") )
          __debugbreak();
        v126 = 0;
        v127 = 56i64;
        __asm { vmovss  xmm8, cs:__real@3f8147ae }
        do
        {
          v129 = *(unsigned __int16 *)((char *)&obj[0]->tree + v127);
          if ( !*(_WORD *)((char *)&obj[0]->tree + v127) )
            break;
          __asm { vmovaps xmm0, xmm6; interpolation }
          if ( !CG_EntityWorkers_TryAddScriptableEventLightUpdate(*(const float *)&_XMM0, *(unsigned __int16 *)((char *)&obj[0]->tree + v127), v114, event) )
          {
            _RBX = (__int64)&world->primaryLights[v129];
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5823, ASSERT_TYPE_ASSERT, "(refLight)", (const char *)&queryFormat, "refLight") )
              __debugbreak();
            _R14 = Com_GetPrimaryLight(v129);
            if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5825, ASSERT_TYPE_ASSERT, "(rawLight)", (const char *)&queryFormat, "rawLight") )
              __debugbreak();
            __asm { vsubss  xmm3, xmm7, xmm6 }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_scriptable_light_radiusscale, "scriptable_light_radiusscale") )
            {
              __asm
              {
                vmulss  xmm1, xmm3, dword ptr [r15+1Ch]
                vmulss  xmm0, xmm6, dword ptr [r15+20h]
                vaddss  xmm1, xmm1, xmm0
                vmaxss  xmm2, xmm1, xmm8
                vmovss  dword ptr [rbx+44h], xmm2
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r14+50h]
                vmaxss  xmm1, xmm0, xmm8
                vmovss  dword ptr [rbx+44h], xmm1
              }
            }
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [r15+18h]
              vmulss  xmm0, xmm3, dword ptr [r15+14h]
              vaddss  xmm1, xmm1, xmm0
              vmovss  dword ptr [rbx+10h], xmm1
            }
            if ( event->data.anonymous.buffer[16] )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+34h]
                vsubss  xmm1, xmm0, dword ptr [r15+8]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [r15+8]
                vmovss  dword ptr [rbx+14h], xmm3
                vmovss  xmm0, dword ptr [rdi+38h]
                vsubss  xmm1, xmm0, dword ptr [r15+0Ch]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [r15+0Ch]
                vmovss  dword ptr [rbx+18h], xmm3
                vmovss  xmm0, dword ptr [rdi+3Ch]
                vsubss  xmm1, xmm0, dword ptr [r15+10h]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [r15+10h]
                vmovss  dword ptr [rbx+1Ch], xmm3
              }
            }
            else
            {
              *(float *)(_RBX + 20) = _R14->colorLinearSrgb.v[0];
              __asm
              {
                vmovss  xmm0, dword ptr [r14+24h]
                vmovss  dword ptr [rbx+18h], xmm0
                vmovss  xmm1, dword ptr [r14+28h]
                vmovss  dword ptr [rbx+1Ch], xmm1
              }
            }
          }
          ++v126;
          v127 += 2i64;
        }
        while ( v126 < 5 );
      }
      else
      {
        Com_PrintError(29, "Can't update 'light' event for instance %i, it does not have any mapped lights\n", scriptableIndex);
      }
      goto LABEL_333;
    case Scriptable_EventType_Sun:
      if ( !event->data.anonymous.buffer[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5856, ASSERT_TYPE_ASSERT, "(event->data.sun.useStateTransitionTime)", (const char *)&queryFormat, "event->data.sun.useStateTransitionTime") )
        __debugbreak();
      _RSI = &cm.mapEnts->scriptableMapEnts.sunClientDatas[v18];
      CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
      if ( _RSI->transTime < 0 )
      {
        LODWORD(v314) = _RSI->transTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5865, ASSERT_TYPE_ASSERT, "( ( data->transTime >= 0 ) )", "( data->transTime ) = %i", v314) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4]
        vmaxss  xmm1, xmm0, cs:__real@34000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vdivss  xmm0, xmm0, xmm1; val
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm10, xmm0
        vcomiss xmm0, xmm6
      }
      if ( v24 )
        inOutRequest->eventUpdateRequired = 1;
      if ( !CG_EntityWorkers_TryAddScriptableEventSunUpdate(*(const float *)&_XMM0, event, _RSI) )
      {
        if ( event->data.anonymous.buffer[12] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+30h]
            vsubss  xmm1, xmm0, dword ptr [rsi+8]
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm3, xmm2, dword ptr [rsi+8]
            vmovss  dword ptr [rbp+80h+endPos.v], xmm3
            vmovss  xmm0, dword ptr [rdi+34h]
            vsubss  xmm1, xmm0, dword ptr [rsi+0Ch]
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm3, xmm2, dword ptr [rsi+0Ch]
            vmovss  dword ptr [rbp+80h+endPos.v+4], xmm3
            vmovss  xmm0, dword ptr [rdi+38h]
            vsubss  xmm1, xmm0, dword ptr [rsi+10h]
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm3, xmm2, dword ptr [rsi+10h]
            vmovss  dword ptr [rbp+80h+endPos.v+8], xmm3
          }
          R_SetSunColorOverride((const vec3_t *)&endPos);
        }
        if ( event->data.anonymous.buffer[0] )
        {
          __asm
          {
            vsubss  xmm0, xmm6, xmm10
            vmulss  xmm2, xmm0, dword ptr [rsi+14h]
            vmulss  xmm1, xmm10, dword ptr [rsi+18h]
            vaddss  xmm0, xmm2, xmm1; sunIntensity
          }
          R_SetSunIntensityOverride(*(const float *)&_XMM0);
        }
        if ( event->data.anonymous.buffer[60] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+28h]
            vsubss  xmm1, xmm0, dword ptr [rsi+1Ch]
            vmovss  xmm9, cs:__real@3b360b61
            vmulss  xmm3, xmm1, xmm9
            vmovss  xmm7, cs:__real@3f000000
            vaddss  xmm2, xmm3, xmm7
            vxorps  xmm8, xmm8, xmm8
            vroundss xmm0, xmm8, xmm2, 1
            vsubss  xmm0, xmm3, xmm0
            vmovss  xmm6, cs:__real@43b40000
            vmulss  xmm0, xmm0, xmm6
            vmulss  xmm1, xmm0, xmm10
            vaddss  xmm2, xmm1, dword ptr [rsi+1Ch]
            vmovss  dword ptr [rbp+80h+endPos.v], xmm2
            vmovss  xmm0, dword ptr [rsi+2Ch]
            vsubss  xmm0, xmm0, dword ptr [rsi+20h]
            vmulss  xmm4, xmm0, xmm9
            vaddss  xmm2, xmm4, xmm7
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm0, xmm4, xmm3
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm3, xmm2, dword ptr [rsi+20h]
            vmovss  dword ptr [rbp+80h+endPos.v+4], xmm3
            vmovss  xmm0, dword ptr [rsi+30h]
            vsubss  xmm0, xmm0, dword ptr [rsi+24h]
            vmulss  xmm3, xmm0, xmm9
            vaddss  xmm2, xmm3, xmm7
            vroundss xmm1, xmm8, xmm2, 1
            vsubss  xmm0, xmm3, xmm1
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm3, xmm2, dword ptr [rsi+24h]
            vmovss  dword ptr [rbp+80h+endPos.v+8], xmm3
          }
          AngleVectors((const vec3_t *)&endPos, (vec3_t *)obj, NULL, NULL);
          R_SetSunDirectionOverride((const vec3_t *)obj, 0);
        }
      }
      goto LABEL_333;
    case Scriptable_EventType_PartDamage:
      __asm
      {
        vxorps  xmm7, xmm7, xmm7; jumptable 00000001414D9AEC case 19
        vcomiss xmm7, dword ptr [rdi+2Ch]
      }
      if ( !v24 )
      {
        v216 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5905, ASSERT_TYPE_ASSERT, "(event->data.partDamage.amountDoT > 0.f)", (const char *)&queryFormat, "event->data.partDamage.amountDoT > 0.f");
        v24 = 0;
        if ( v216 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, dword ptr [rdi+30h] }
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5906, ASSERT_TYPE_ASSERT, "(event->data.partDamage.intervalDoT > 0.f)", (const char *)&queryFormat, "event->data.partDamage.intervalDoT > 0.f") )
        __debugbreak();
      _R13 = event->data.partDamage.eventStreamBufferOffsetClient;
      v218 = InstanceCommonContext->eventStreamBufferSize;
      v219 = _R13 + 4 <= v218;
      if ( _R13 + 4 > v218 )
      {
        v220 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5910, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize");
        v219 = !v220;
        if ( v220 )
          __debugbreak();
      }
      _R12 = InstanceCommonContext->eventStreamBuffer;
      __asm
      {
        vmovss  xmm0, dword ptr [r12+r13]
        vcomiss xmm0, xmm7
      }
      if ( !v219 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm6
          vmovss  dword ptr [r12+r13], xmm0
          vcomiss xmm0, xmm7
        }
        if ( v219 )
        {
          do
          {
            __asm
            {
              vaddss  xmm0, xmm0, dword ptr [rdi+30h]
              vmovss  dword ptr [r12+r13], xmm0
            }
            eventsB = event->data.random.eventsB;
            if ( !eventsB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5928, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
              __debugbreak();
            ScriptableCl_InitEventParams((const LocalClientNum_t)v18, (ScriptableEventParams *)&outTransform, scriptableIndex, (const ScriptablePartDef *)eventsB);
            __asm { vcvttss2si r9, dword ptr [rdi+2Ch]; damage }
            ScriptableBg_DamagePart((const ScriptableEventParams *)&outTransform, (const ScriptablePartDef *)eventsB, 0x41u, _R9);
            __asm
            {
              vmovss  xmm0, dword ptr [r12+r13]
              vcomiss xmm0, xmm7
            }
          }
          while ( v24 | v227 );
          v21 = (ScriptableUpdateRequest *)obj[0];
        }
        v21->eventUpdateRequired = 1;
      }
      goto LABEL_333;
    case Scriptable_EventType_ViewmodelShaderParam:
      v228 = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
      if ( !v228 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5951, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v229 = ScriptableCl_GetEntity((const LocalClientNum_t)v18, scriptableIndex);
      if ( !v229 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5954, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      CharacterInfo = cg_t::TryGetCharacterInfo(v228, v229->nextState.number);
      if ( CharacterInfo )
      {
        v231 = event->data.viewmodelShaderParam.eventStreamBufferOffsetClient;
        if ( v231 + 32 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5968, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( Scriptable_EventViewmodelShaderParam_Data ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v232 = InstanceCommonContext->eventStreamBuffer;
        v28 = __CFADD__(v231, v232) || &v232[v231] == NULL;
        v233 = (const Scriptable_EventViewmodelShaderParam_Data *)&v232[v231];
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4]
          vxorps  xmm6, xmm6, xmm6
          vcomiss xmm0, xmm6
        }
        if ( !v28 )
        {
          inOutRequest->eventUpdateRequired = 1;
          CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, ecx
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4]
            vdivss  xmm0, xmm1, xmm0; X
          }
          if ( event->data.stateChange.partReference.flatId == 10 )
          {
            __asm { vmovss  xmm1, cs:__real@3f800000; Y }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          }
          else
          {
            __asm
            {
              vmovss  xmm2, cs:__real@3f800000; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          }
          __asm
          {
            vmovaps xmm4, xmm0
            vmovss  xmm0, dword ptr [rdi+28h]
            vaddss  xmm2, xmm0, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm1, xmm0, xmm2, 1
            vcvttss2si eax, xmm1
          }
          if ( _EAX )
          {
            __asm { vmovaps xmm3, xmm4; blendAmount }
            ScriptableCl_SetViewmodelShaderParam(&CharacterInfo->shaderOverride[_EAX - 1], (const ScriptableEventViewmodelShaderParamDef *)&event->data, v233, *(double *)&_XMM3);
          }
        }
      }
      else
      {
        LODWORD(fmt) = v229->nextState.number;
        Com_PrintError(29, "Scriptable %s with event %s on a non-character entity %d.\n", InstanceCommonContext->def->name, event->data.anonymous.base->name, fmt);
        ScriptableCl_EnterError();
      }
      goto LABEL_333;
    case Scriptable_EventType_ClientViewSelector:
      IsCharacterThirdPerson = ScriptableCl_IsCharacterThirdPerson((const LocalClientNum_t)v18, scriptableIndex);
      obj[0] = (DObj *)event->data.random.eventStreamBufferOffsetServer;
      if ( (XAnimTree **)((char *)&obj[0]->tree + 4) > (XAnimTree **)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6023, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      v324 = InstanceCommonContext->eventStreamBuffer;
      pHoldrand = *(_DWORD *)startPos.v.m128_u64[0];
      inOutRequest->eventUpdateRequired = 1;
      v252 = obj[0];
      v253 = (__int64)v324;
      if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)v324) != IsCharacterThirdPerson )
      {
        ScriptableCl_InitEventParams((const LocalClientNum_t)v18, (ScriptableEventParams *)&outTransform, scriptableIndex, part);
        if ( *((_BYTE *)&obj[0]->tree + (unsigned __int64)v324) )
        {
          eventBCount = event->data.random.eventBCount;
          eventsA = event->data.random.eventsB;
        }
        else
        {
          eventBCount = event->data.stateChange.partReference.flatId;
          eventsA = event->data.random.eventsA;
        }
        ScriptableCl_StopStateEvents((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, eventsA, eventBCount);
        *((_BYTE *)&obj[0]->tree + (unsigned __int64)v324) = IsCharacterThirdPerson;
        if ( IsCharacterThirdPerson )
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.random.eventsB, event->data.random.eventBCount);
        else
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.random.eventsA, event->data.stateChange.partReference.flatId);
        v253 = (__int64)v324;
      }
      if ( *((_BYTE *)&v252->tree + v253) )
      {
        v256 = 0;
        if ( event->data.random.eventBCount )
        {
          while ( 1 )
          {
            v257 = &event->data.random.eventsB[v256];
            if ( (v257->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v257, v256, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v256 >= event->data.random.eventBCount )
              goto LABEL_333;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6077, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_313;
        }
      }
      else
      {
        v259 = 0;
        if ( event->data.stateChange.partReference.flatId )
        {
          while ( 1 )
          {
            v260 = (const ScriptableEventDef *)(event->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v259);
            if ( (v260->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v260, v259, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v259 >= event->data.stateChange.partReference.flatId )
              goto LABEL_333;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6094, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_313;
        }
      }
      goto LABEL_333;
    case Scriptable_EventType_TeamSelector:
      if ( event->data.anonymous.buffer[4] )
      {
        v262 = (DObj *)CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
        obj[0] = v262;
        if ( !v262 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6112, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          v262 = obj[0];
        }
        LinkObject = v262[1].skel.partBits.worldCtrl.array[3];
      }
      else
      {
        if ( !ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v18, scriptableIndex, SCRIPTABLE_LINK_ENTITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6118, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", "TeamSelector only works on entity scriptables for non-local-player tests") )
          __debugbreak();
        LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v18, scriptableIndex);
      }
      LODWORD(v324) = event->data.stateChange.partReference.flatId;
      DoesTeamMatch = ScriptableCl_DoesTeamMatch((const LocalClientNum_t)v18, LinkObject, (Scriptable_TeamFilter)v324);
      endPos.v.m128_u64[0] = event->data.teamSelector.eventStreamBufferOffsetClient;
      if ( endPos.v.m128_u64[0] + 4 > InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6127, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      obj[0] = (DObj *)InstanceCommonContext->eventStreamBuffer;
      inOutRequest->eventUpdateRequired = 1;
      pHoldrand = *(_DWORD *)startPos.v.m128_u64[0];
      v264 = endPos.v.m128_u64[0];
      v265 = obj[0];
      if ( *((_BYTE *)&obj[0]->tree + endPos.v.m128_u64[0]) != DoesTeamMatch )
      {
        ScriptableCl_InitEventParams((const LocalClientNum_t)v18, (ScriptableEventParams *)&outTransform, scriptableIndex, part);
        startPos.v.m128_i8[4] = DoesTeamMatch;
        startPos.v.m128_i32[0] = (int)v324;
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
        ScriptableCl_StopStateEvents((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, eventsPass, eventPassCount);
        *((_BYTE *)&obj[0]->tree + endPos.v.m128_u64[0]) = DoesTeamMatch;
        if ( DoesTeamMatch )
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.teamSelector.eventsPass, event->data.teamSelector.eventPassCount);
        else
          ScriptableCl_RunStateEvents_Specific((const LocalClientNum_t)v18, (const ScriptableEventParams *)&outTransform, &pHoldrand, 0, event->data.teamSelector.eventsFail, event->data.teamSelector.eventFailCount);
        v265 = obj[0];
      }
      if ( *((_BYTE *)&v265->tree + v264) )
      {
        v268 = 0;
        if ( event->data.teamSelector.eventPassCount )
        {
          while ( 1 )
          {
            v269 = (const ScriptableEventDef *)&event->data.spawnDynent.tagName[176 * v268];
            if ( (v269->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v269, v268, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v268 >= event->data.teamSelector.eventPassCount )
              goto LABEL_333;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6190, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
LABEL_313:
            __debugbreak();
        }
      }
      else
      {
        v271 = 0;
        if ( event->data.teamSelector.eventFailCount )
        {
          while ( 1 )
          {
            v272 = (const ScriptableEventDef *)((char *)event->data.chunkDynent.part + 176 * v271);
            if ( (v272->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(const float *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, v272, v271, &pHoldrand, inOutRequest);
              if ( inOutRequest->stopUpdatingEventsForState )
                break;
            }
            if ( ++v271 >= event->data.teamSelector.eventFailCount )
              goto LABEL_333;
          }
          if ( !inOutRequest->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6207, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            goto LABEL_313;
        }
      }
LABEL_333:
      Sys_ProfEndNamedEvent();
      _R11 = &v330;
      __asm
      {
        vmovaps xmm6, xmmword ptr [r11-18h]
        vmovaps xmm7, xmmword ptr [r11-28h]
        vmovaps xmm8, xmmword ptr [r11-38h]
        vmovaps xmm9, xmmword ptr [r11-48h]
        vmovaps xmm10, xmmword ptr [r11-58h]
      }
      return;
    case Scriptable_EventType_ApplyConstantForce:
      __asm { vmovaps xmm3, xmm6; deltaTime }
      ScriptableCl_UpdateEventApplyConstantForce((const LocalClientNum_t)v18, scriptableIndex, (const ScriptableEventApplyConstantForceDef *)&event->data, *(float *)&_XMM3, inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_ApplyConstantAngularForce:
      __asm { vmovaps xmm3, xmm6; deltaTime }
      ScriptableCl_UpdateEventApplyConstantAngularForce((const LocalClientNum_t)v18, scriptableIndex, (const ScriptableEventApplyConstantAngularForceDef *)&event->data, *(float *)&_XMM3, inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_MaterialOverride:
      __asm { vmovaps xmm0, xmm6; deltaTime }
      ScriptableCL_UpdateStateEventMaterialOverride(*(double *)&_XMM0, (const LocalClientNum_t)v18, scriptableIndex, part, state, event, eventIdx, inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_Move:
      __asm { vmovaps xmm3, xmm6; deltaTime }
      ScriptableCl_UpdateStateEventMove((const LocalClientNum_t)v18, scriptableIndex, (const ScriptableEventMoveDef *const)&event->data, *(float *)&_XMM3, inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_GravityArc:
      __asm { vmovaps xmm3, xmm6; deltaTime }
      ScriptableCl_UpdateStateEventGravityArc((const LocalClientNum_t)v18, scriptableIndex, (const ScriptableEventGravityArcDef *const)&event->data, *(float *)&_XMM3, inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_ViewTrigger:
      ScriptableCl_UpdateStateEventViewTrigger((const LocalClientNum_t)v18, scriptableIndex, part, (const ScriptableEventViewTriggerDef *const)&event->data, eventIdx, (unsigned int *)startPos.v.m128_u64[0], inOutRequest);
      goto LABEL_333;
    case Scriptable_EventType_Hover:
      __asm
      {
        vmovss  xmm0, cs:__real@34000000; jumptable 00000001414D9AEC case 40
        vcomiss xmm0, dword ptr [rdi+24h]
      }
      if ( !v24 )
        goto LABEL_322;
      __asm { vcomiss xmm0, dword ptr [rdi+20h] }
      if ( v24 )
      {
        v280 = 1;
      }
      else
      {
LABEL_322:
        v280 = 0;
        v24 = 0;
      }
      __asm { vcomiss xmm0, dword ptr [rdi+28h] }
      v281 = v24;
      __asm { vcomiss xmm0, dword ptr [rdi+2Ch] }
      v322 = v24;
      if ( v280 || v24 )
      {
        _RSI = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v18, scriptableIndex);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+14h]
          vmovss  dword ptr [rbp+80h+endPos.v], xmm0
          vmovss  xmm1, dword ptr [rax+18h]
          vmovss  dword ptr [rbp+80h+endPos.v+4], xmm1
          vmovss  xmm0, dword ptr [rax+1Ch]
          vmovss  dword ptr [rbp+80h+endPos.v+8], xmm0
          vmovss  xmm1, dword ptr [rax+8]
          vmovss  dword ptr [rbp+80h+obj], xmm1
          vmovss  xmm0, dword ptr [rax+0Ch]
          vmovss  dword ptr [rbp+80h+obj+4], xmm0
          vmovss  xmm1, dword ptr [rax+10h]
          vmovss  dword ptr [rbp+80h+obj+8], xmm1
        }
        CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm6, xmm0, cs:__real@3a83126f
        }
        if ( v280 )
        {
          __asm { vdivss  xmm0, xmm6, dword ptr [rdi+24h]; X }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm2, xmm0, dword ptr [rdi+20h]
            vaddss  xmm2, xmm2, dword ptr [rbp+80h+obj+8]
            vmovss  dword ptr [rbp+80h+obj+8], xmm2
          }
        }
        __asm { vmovss  xmm3, cs:__real@43b40000 }
        if ( v281 )
        {
          __asm
          {
            vdivss  xmm0, xmm6, dword ptr [rdi+28h]
            vmulss  xmm2, xmm0, xmm3
            vaddss  xmm2, xmm2, dword ptr [rbp+80h+endPos.v]
            vmovss  dword ptr [rbp+80h+endPos.v], xmm2
          }
        }
        if ( v322 )
        {
          __asm
          {
            vdivss  xmm0, xmm6, dword ptr [rdi+2Ch]
            vmulss  xmm2, xmm0, xmm3
            vaddss  xmm2, xmm2, dword ptr [rbp+80h+endPos.v+4]
            vmovss  dword ptr [rbp+80h+endPos.v+4], xmm2
          }
        }
        ScriptableCL_SetPose((const LocalClientNum_t)v18, scriptableIndex, _RSI, (const vec3_t *)obj, (const vec3_t *)&endPos, 0);
        inOutRequest->eventUpdateRequired = 1;
      }
      goto LABEL_333;
    default:
      goto LABEL_333;
  }
}

/*
==============
ScriptableCl_UpdateEventApplyConstantAngularForce
==============
*/

void __fastcall ScriptableCl_UpdateEventApplyConstantAngularForce(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventApplyConstantAngularForceDef *applyConstantAngularForce, double deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  __int32 v17; 
  unsigned int PhysInstanceId; 
  unsigned int v19; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  bool v44; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int RigidBodyID; 
  vec3_t outOrigin; 
  __int64 v86; 
  vec3_t angles; 
  vec3_t torqueVector; 
  tmat33_t<vec3_t> axis; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  v86 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmm12, xmm3
  }
  v17 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, scriptableIndex);
  v19 = PhysInstanceId;
  if ( PhysInstanceId != -1 && Physics_IsInstanceInWorld((Physics_WorldId)v17, PhysInstanceId, 0) )
  {
    inOutRequest->eventUpdateRequired = 1;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    _R15 = InstanceCommonContext;
    eventStreamBufferOffsetClient = applyConstantAngularForce->eventStreamBufferOffsetClient;
    _R13 = eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 12 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4567, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 3 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 12, InstanceCommonContext->eventStreamBufferSize) )
      __debugbreak();
    _RAX = _R15->eventStreamBuffer;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+r13]
      vmovss  xmm7, dword ptr [rax+r13+4]
      vmovss  xmm8, dword ptr [rax+r13+8]
      vmovss  xmm0, dword ptr [r15+2Ch]
      vmovss  dword ptr [rsp+178h+angles], xmm0
      vmovss  xmm1, dword ptr [r15+30h]
      vmovss  dword ptr [rsp+178h+angles+4], xmm1
      vmovss  xmm0, dword ptr [r15+34h]
      vmovss  dword ptr [rsp+178h+angles+8], xmm0
    }
    ScriptableInstanceContextSecure::GetOrigin(_R15, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vsubss  xmm0, xmm11, xmm6
      vmulss  xmm2, xmm0, dword ptr [r14+0Ch]
      vmulss  xmm1, xmm6, dword ptr [r14+18h]
      vaddss  xmm9, xmm2, xmm1
      vsubss  xmm0, xmm11, xmm7
      vmulss  xmm2, xmm0, dword ptr [r14+10h]
      vmulss  xmm1, xmm7, dword ptr [r14+1Ch]
      vaddss  xmm10, xmm2, xmm1
      vsubss  xmm0, xmm11, xmm8
      vmulss  xmm2, xmm0, dword ptr [r14+14h]
      vmulss  xmm1, xmm8, dword ptr [r14+20h]
      vaddss  xmm5, xmm2, xmm1
    }
    v44 = !applyConstantAngularForce->worldSpace;
    if ( applyConstantAngularForce->worldSpace )
    {
      __asm
      {
        vmovaps xmm6, xmm10
        vmovaps xmm7, xmm9
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm3, xmm9, dword ptr [rsp+178h+axis+4]
        vmulss  xmm2, xmm10, dword ptr [rsp+178h+axis+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm1, xmm5, dword ptr [rsp+178h+axis+1Ch]
        vaddss  xmm6, xmm4, xmm1
        vmulss  xmm3, xmm9, dword ptr [rsp+178h+axis]
        vmulss  xmm1, xmm10, dword ptr [rsp+178h+axis+0Ch]
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm5, dword ptr [rsp+178h+axis+18h]
        vaddss  xmm7, xmm4, xmm0
        vmulss  xmm3, xmm9, dword ptr [rsp+178h+axis+8]
        vmulss  xmm2, xmm10, dword ptr [rsp+178h+axis+14h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm0, xmm5, dword ptr [rsp+178h+axis+20h]
        vaddss  xmm5, xmm4, xmm0
      }
    }
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm1
      vmulss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rsp+178h+torqueVector], xmm0
      vmulss  xmm1, xmm2, xmm6
      vmovss  dword ptr [rsp+178h+torqueVector+4], xmm1
      vmulss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsp+178h+torqueVector+8], xmm0
      vmulss  xmm6, xmm12, xmm3
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm6, xmm1
    }
    if ( !v44 )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v17, v19);
      for ( i = 0; i < NumRigidBodys; ++i )
      {
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v17, v19, i);
        if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4621, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v17, RigidBodyID) )
        {
          __asm { vmovaps xmm3, xmm6; magnitude }
          Physics_ApplyAngularImpulse((Physics_WorldId)v17, RigidBodyID, &torqueVector, *(float *)&_XMM3);
        }
      }
      CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
ScriptableCl_UpdateEventApplyConstantForce
==============
*/

void __fastcall ScriptableCl_UpdateEventApplyConstantForce(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableEventApplyConstantForceDef *applyConstantForce, double deltaTime, ScriptableUpdateRequest *inOutRequest)
{
  __int32 v20; 
  unsigned int PhysInstanceId; 
  unsigned int v22; 
  __int64 eventStreamBufferOffsetClient; 
  unsigned __int64 eventStreamBufferSize; 
  signed int NumRigidBodys; 
  signed int i; 
  unsigned int m_serialAndIndex; 
  float fmt; 
  __int64 v128; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  __int64 v131; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t normalizedDirection; 
  vec3_t position; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  v131 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
    vmovaps xmm14, xmm3
  }
  v20 = 3 * localClientNum + 3;
  PhysInstanceId = ScriptableCl_GetPhysInstanceId(localClientNum, scriptableIndex);
  v22 = PhysInstanceId;
  if ( PhysInstanceId != -1 && Physics_IsInstanceInWorld((Physics_WorldId)v20, PhysInstanceId, 0) )
  {
    inOutRequest->eventUpdateRequired = 1;
    _R13 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    eventStreamBufferOffsetClient = applyConstantForce->eventStreamBufferOffsetClient;
    eventStreamBufferSize = _R13->eventStreamBufferSize;
    _RBX = eventStreamBufferOffsetClient;
    if ( eventStreamBufferOffsetClient + 24 > eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4460, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 6 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "%s <= %s\n\t%i, %i", "eventBufferOffset + 6 * sizeof( float )", "r_context.eventStreamBufferSize", eventStreamBufferOffsetClient + 24, eventStreamBufferSize) )
      __debugbreak();
    _RAX = _R13->eventStreamBuffer;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+rax]
      vmovss  xmm7, dword ptr [rbx+rax+4]
      vmovss  xmm8, dword ptr [rbx+rax+8]
      vmovss  xmm9, dword ptr [rbx+rax+0Ch]
      vmovss  xmm10, dword ptr [rbx+rax+10h]
      vmovss  xmm12, dword ptr [rbx+rax+14h]
      vmovss  xmm0, dword ptr [r13+2Ch]
      vmovss  dword ptr [rbp+0B0h+angles], xmm0
      vmovss  xmm1, dword ptr [r13+30h]
      vmovss  dword ptr [rbp+0B0h+angles+4], xmm1
      vmovss  xmm0, dword ptr [r13+34h]
      vmovss  dword ptr [rbp+0B0h+angles+8], xmm0
    }
    ScriptableInstanceContextSecure::GetOrigin(_R13, scriptableIndex, &outOrigin);
    AnglesToAxis(&angles, &axis);
    __asm
    {
      vmovss  xmm13, cs:__real@3f800000
      vsubss  xmm0, xmm13, xmm6
      vmulss  xmm2, xmm0, dword ptr [r15+0Ch]
      vmulss  xmm1, xmm6, dword ptr [r15+24h]
      vaddss  xmm11, xmm2, xmm1
      vsubss  xmm0, xmm13, xmm7
      vmulss  xmm2, xmm0, dword ptr [r15+10h]
      vmulss  xmm1, xmm7, dword ptr [r15+28h]
      vaddss  xmm6, xmm2, xmm1
      vsubss  xmm0, xmm13, xmm8
      vmulss  xmm2, xmm0, dword ptr [r15+14h]
      vmulss  xmm1, xmm8, dword ptr [r15+2Ch]
      vaddss  xmm5, xmm2, xmm1
      vsubss  xmm0, xmm13, xmm9
      vmulss  xmm2, xmm0, dword ptr [r15+18h]
      vmulss  xmm1, xmm9, dword ptr [r15+30h]
      vaddss  xmm7, xmm2, xmm1
      vsubss  xmm0, xmm13, xmm10
      vmulss  xmm2, xmm0, dword ptr [r15+1Ch]
      vmulss  xmm1, xmm10, dword ptr [r15+34h]
      vaddss  xmm8, xmm2, xmm1
      vsubss  xmm0, xmm13, xmm12
      vmulss  xmm2, xmm0, dword ptr [r15+20h]
      vmulss  xmm1, xmm12, dword ptr [r15+38h]
      vaddss  xmm4, xmm2, xmm1
      vmovss  xmm9, dword ptr [rsp+1B0h+axis]
      vmulss  xmm3, xmm11, xmm9
      vmovss  xmm10, dword ptr [rsp+1B0h+axis+0Ch]
      vmulss  xmm0, xmm10, xmm6
      vaddss  xmm2, xmm3, xmm0
      vmovss  xmm12, dword ptr [rbp+0B0h+axis+18h]
      vmulss  xmm1, xmm5, xmm12
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+1B0h+outOrigin]
      vmovss  dword ptr [rbp+0B0h+position], xmm2
      vmovss  xmm3, dword ptr [rsp+1B0h+axis+4]
      vmulss  xmm1, xmm11, xmm3
      vmovss  xmm15, dword ptr [rbp+0B0h+axis+10h]
      vmulss  xmm0, xmm15, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+0B0h+axis+1Ch]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+1B0h+outOrigin+4]
      vmovss  dword ptr [rbp+0B0h+position+4], xmm2
      vmulss  xmm1, xmm11, dword ptr [rsp+1B0h+axis+8]
      vmovss  xmm11, dword ptr [rbp+0B0h+axis+14h]
      vmulss  xmm0, xmm11, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+0B0h+axis+20h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rsp+1B0h+outOrigin+8]
      vmovss  dword ptr [rbp+0B0h+position+8], xmm2
    }
    if ( applyConstantForce->worldSpace )
    {
      __asm
      {
        vmovaps xmm5, xmm8
        vmovaps xmm6, xmm7
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm7, xmm3
        vmulss  xmm0, xmm15, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rbp+0B0h+axis+1Ch]
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm3, xmm7, xmm9
        vmulss  xmm0, xmm10, xmm8
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, xmm12
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm3, xmm7, dword ptr [rsp+1B0h+axis+8]
        vmulss  xmm0, xmm11, xmm8
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, dword ptr [rbp+0B0h+axis+20h]
        vaddss  xmm4, xmm2, xmm1
      }
    }
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm13, xmm0
      vmovss  [rsp+1B0h+result.m_serialAndIndex], xmm1
      vdivss  xmm2, xmm13, xmm1
      vmulss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbp+0B0h+normalizedDirection], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+0B0h+normalizedDirection+4], xmm1
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbp+0B0h+normalizedDirection+8], xmm0
      vmulss  xmm6, xmm14, xmm3
    }
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_LEGACY);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v20, v22);
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(v128) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v128) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
      {
        LODWORD(v128) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v128) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
      {
        LODWORD(v128) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v128) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v20, v22, i)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 4523, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v20, m_serialAndIndex) )
      {
        __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
        Physics_ApplyImpulse((Physics_WorldId)v20, m_serialAndIndex, &position, &normalizedDirection, fmt);
      }
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_LEGACY);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
ScriptableCl_UpdateInstanceEvents
==============
*/

_BOOL8 __fastcall ScriptableCl_UpdateInstanceEvents(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, double deltaTime)
{
  const ScriptableDef *def; 
  bool eventUpdateRequired; 
  unsigned int v9; 
  _BOOL8 result; 
  ScriptableUpdateRequest inOutRequest; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
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
  v9 = 0;
  if ( def->numParts )
  {
    do
    {
      __asm { vmovaps xmm0, xmm6; deltaTime }
      ScriptableCl_UpdatePart(*(const float *)&_XMM0, localClientNum, scriptableIndex, &def->parts[v9++], &inOutRequest);
    }
    while ( v9 < def->numParts );
    eventUpdateRequired = inOutRequest.eventUpdateRequired;
  }
  Sys_ProfEndNamedEvent();
  result = eventUpdateRequired;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
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

void __fastcall ScriptableCl_UpdatePart(double deltaTime, const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *part, ScriptableUpdateRequest *inOutRequest)
{
  unsigned int v7; 
  unsigned int v11; 
  ScriptableUpdateRequest *v12; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *v14; 
  unsigned int eventIdx; 
  const ScriptableEventDef *v16; 
  ScriptableEventDef *event; 
  unsigned int holdrand[4]; 
  unsigned int pHoldrand; 

  v7 = (unsigned int)part->flags >> 9;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps xmm6, xmm0
  }
  if ( (v7 & 1) != 0 )
  {
    v11 = 0;
    v12 = inOutRequest;
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
      v14 = &part->states[PartRuntime->stateId];
      if ( (v14->base.flags & 0x200) != 0 )
      {
        pHoldrand = scriptableIndex + ScriptableCl_GetFrameServerTime(localClientNum);
        BG_srand(&pHoldrand);
        eventIdx = 0;
        holdrand[0] = pHoldrand;
        if ( v14->base.numEvents )
        {
          while ( 1 )
          {
            v16 = &v14->base.events[eventIdx];
            if ( (v16->base.flags & 0x200) != 0 )
            {
              __asm { vmovaps xmm0, xmm6; deltaTime }
              ScriptableCl_UpdateEvent(*(double *)&_XMM0, localClientNum, scriptableIndex, part, v14, v16, eventIdx, holdrand, v12);
              if ( v12->stopUpdatingEventsForState )
                break;
            }
            if ( ++eventIdx >= v14->base.numEvents )
              goto LABEL_18;
          }
          if ( !v12->eventUpdateRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 6283, ASSERT_TYPE_ASSERT, "( inOutRequest.eventUpdateRequired )", "We were asked to stop processing events, we need an update next frame") )
            __debugbreak();
        }
      }
    }
LABEL_18:
    if ( part->numChildParts )
    {
      do
      {
        __asm { vmovaps xmm0, xmm6; deltaTime }
        ScriptableCl_UpdatePart(*(const float *)&_XMM0, localClientNum, scriptableIndex, &part->childParts[v11++], v12);
      }
      while ( v11 < part->numChildParts );
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
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
  int v14; 
  unsigned int LinkObject; 
  ParticleSystemHandle ParticleSystemHandle; 
  ParticleManager *ParticleManager; 
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
  v14 = *(_DWORD *)Data;
  if ( time <= *(_DWORD *)Data + arcData.durationMS )
  {
    __asm
    {
      vmovss  xmm2, [rbp+4Fh+arcData.gravity]; gravity
      vmovaps [rsp+100h+var_40], xmm6
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vcvtsi2ss xmm1, xmm1, r12d
      vdivss  xmm6, xmm1, xmm0
    }
    ScriptableBg_GravityArcCalcDelta(&arcData.velocity, time - v14, *(const float *)&_XMM2, &out_result);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4Fh+arcData.startOrigin]
      vaddss  xmm1, xmm0, dword ptr [rsp+100h+out_result]
      vmovss  xmm2, dword ptr [rbp+4Fh+arcData.startOrigin+4]
      vaddss  xmm0, xmm2, dword ptr [rbp+4Fh+out_result+4]
      vmovss  dword ptr [rbp+4Fh+origin], xmm1
      vmovss  xmm1, dword ptr [rbp+4Fh+arcData.startOrigin+8]
      vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+out_result+8]
      vmovss  dword ptr [rbp+4Fh+origin+4], xmm0
      vmovss  xmm0, dword ptr [rbp+4Fh+arcData.endAngles]
      vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+arcData.startAngles]
      vmovss  xmm0, dword ptr [rbp+4Fh+arcData.endAngles+4]
      vmovss  dword ptr [rbp+4Fh+origin+8], xmm2
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+arcData.startAngles]
      vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+arcData.startAngles+4]
      vmovss  xmm0, dword ptr [rbp+4Fh+arcData.endAngles+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+arcData.startAngles+8]
      vmovss  dword ptr [rbp+4Fh+angles], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+arcData.startAngles+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+4Fh+angles+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+arcData.startAngles+8]
      vmovss  dword ptr [rbp+4Fh+angles+8], xmm3
    }
    ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &origin, &angles, 0);
    __asm { vmovaps xmm6, [rsp+100h+var_40] }
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
  Scriptable_EventMove_Data *v12; 
  char v13; 
  ScriptableInstanceContextSecure *v14; 
  const char *name; 
  int time; 
  float fmt; 
  float fmta; 
  float warp; 
  float warpa; 
  float v29; 
  float v30; 
  vec3_t out_endOrigin; 
  vec3_t out_endAngles; 
  vec3_t angles; 
  vec3_t origin; 

  _RDI = moveDef;
  if ( !moveDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 2488, ASSERT_TYPE_ASSERT, "(moveDef)", (const char *)&queryFormat, "moveDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  Data = ScriptableCL_StateEventMoveGetData(InstanceCommonContext, _RDI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdi+20h]
  }
  v12 = Data;
  if ( v13 && Data->startTime )
  {
    if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
    {
      Data->startTime = 0;
      v14 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v14->def )
        name = v14->def->name;
      else
        name = "<unknown>";
      Com_PrintError(29, "ScriptableCl UpdateStateEventMove: Scriptable is parented to entity, can't execute event. Index %i '%s'\n", scriptableIndex, name);
    }
    else
    {
      ScriptableBg_LerpCalcEndPoints(&InstanceCommonContext->originInitial, &InstanceCommonContext->anglesInitial, _RDI, &out_endOrigin, &out_endAngles);
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+20h]
        vmulss  xmm0, xmm2, cs:__real@c47a0000
      }
      time = _RAX->time;
      __asm { vcvttss2si eax, xmm0 }
      if ( time < v12->startTime - (int)_RAX )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  xmm1, dword ptr [rdi+24h]
          vmovss  [rsp+0C8h+var_98], xmm0
          vmovss  dword ptr [rsp+0C8h+warp], xmm1
          vmovss  dword ptr [rsp+0C8h+fmt], xmm2
        }
        ScriptableBg_LerpVector(&v12->startOrigin, &out_endOrigin, v12->startTime, time, fmt, warp, v29, &origin);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  xmm1, dword ptr [rdi+24h]
          vmovss  [rsp+0C8h+var_98], xmm0
          vmovss  xmm0, dword ptr [rdi+20h]
          vmovss  dword ptr [rsp+0C8h+warp], xmm1
          vmovss  dword ptr [rsp+0C8h+fmt], xmm0
        }
        ScriptableBg_LerpVector(&v12->startAngles, &out_endAngles, v12->startTime, time, fmta, warpa, v30, &angles);
        ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &origin, &angles, 0);
        inOutRequest->eventUpdateRequired = 1;
      }
      else
      {
        ScriptableCL_StateEventMovePhysicsClearVelocity(localClientNum, scriptableIndex);
        ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &out_endOrigin, &out_endAngles, 1);
        v12->startTime = 0;
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
  ScriptableInstanceContextSecure *v17; 
  unsigned __int8 *eventStreamBuffer; 

  _RBX = viewTriggerDef;
  if ( !viewTriggerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5316, ASSERT_TYPE_ASSERT, "(viewTriggerDef)", (const char *)&queryFormat, "viewTriggerDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  eventStreamBufferOffsetClient = _RBX->eventStreamBufferOffsetClient;
  v17 = InstanceCommonContext;
  if ( eventStreamBufferOffsetClient + 1 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_cl.cpp", 5320, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( bool ) <= r_context.eventStreamBufferSize") )
    __debugbreak();
  eventStreamBuffer = v17->eventStreamBuffer;
  if ( !eventStreamBuffer[eventStreamBufferOffsetClient] )
  {
    __asm
    {
      vmovaps [rsp+108h+var_58], xmm6
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+8]
      vmovss  xmm0, cs:__real@bf800000
      vmovaps [rsp+108h+var_68], xmm7
      vcomiss xmm0, dword ptr [rbx+0Ch]
      vmovaps [rsp+108h+var_78], xmm8
      vmovaps [rsp+108h+var_88], xmm9
    }
    eventStreamBuffer[eventStreamBufferOffsetClient] = 1;
    ScriptableCl_RunStateEventsFrom(localClientNum, scriptableIndex, part, eventIdx + 1, holdrand);
    __asm
    {
      vmovaps xmm9, [rsp+108h+var_88]
      vmovaps xmm8, [rsp+108h+var_78]
      vmovaps xmm7, [rsp+108h+var_68]
      vmovaps xmm6, [rsp+108h+var_58]
    }
    *inOutRequest = (ScriptableUpdateRequest)257;
  }
}

