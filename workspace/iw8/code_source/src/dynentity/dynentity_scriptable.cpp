/*
==============
DynEnt_ScriptableUpdatePosition
==============
*/

bool __fastcall DynEnt_ScriptableUpdatePosition(LocalClientNum_t localClientNum, const unsigned int dynEntId, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?DynEnt_ScriptableUpdatePosition@@YA_NW4LocalClientNum_t@@IAEATvec3_t@@1@Z(localClientNum, dynEntId, outOrigin, outAngles);
}

/*
==============
DynEnt_ScriptablePhysicsLaunch
==============
*/

void __fastcall DynEnt_ScriptablePhysicsLaunch(LocalClientNum_t localClientNum, unsigned int dynEntId, const XModel *model, const vec3_t *launchPos, const vec3_t *launchAngles, const vec3_t *linVel, const vec3_t *angVel)
{
  ?DynEnt_ScriptablePhysicsLaunch@@YAXW4LocalClientNum_t@@IPEBUXModel@@AEBTvec3_t@@222@Z(localClientNum, dynEntId, model, launchPos, launchAngles, linVel, angVel);
}

/*
==============
DynEnt_ChangeActiveModelForScriptable
==============
*/

void __fastcall DynEnt_ChangeActiveModelForScriptable(LocalClientNum_t localClientNum, const unsigned int dynEntId, const XModel *model)
{
  ?DynEnt_ChangeActiveModelForScriptable@@YAXW4LocalClientNum_t@@IPEBUXModel@@@Z(localClientNum, dynEntId, model);
}

/*
==============
DynEnt_ScriptableSetPosition
==============
*/

void __fastcall DynEnt_ScriptableSetPosition(LocalClientNum_t localClientNum, const unsigned int dynEntId, const vec3_t *origin, const vec3_t *angles)
{
  ?DynEnt_ScriptableSetPosition@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@1@Z(localClientNum, dynEntId, origin, angles);
}

/*
==============
DynEnt_ActivateForScriptable
==============
*/

void __fastcall DynEnt_ActivateForScriptable(LocalClientNum_t localClientNum, const unsigned int dynEntId, bool active)
{
  ?DynEnt_ActivateForScriptable@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, dynEntId, active);
}

/*
==============
DynEnt_IsValidScriptableModel
==============
*/

bool __fastcall DynEnt_IsValidScriptableModel(const XModel *model, const unsigned int rigidSurfLimit)
{
  return ?DynEnt_IsValidScriptableModel@@YA_NPEBUXModel@@I@Z(model, rigidSurfLimit);
}

/*
==============
DynEnt_ActivateForScriptable
==============
*/
void DynEnt_ActivateForScriptable(LocalClientNum_t localClientNum, const unsigned int dynEntId, bool active)
{
  DynEntityClient *Client; 
  unsigned __int16 flags; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 100, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  flags = Client->flags;
  v6 = flags | 1;
  v7 = flags & 0xFFFE;
  if ( !active )
    v6 = v7;
  Client->flags = v6;
}

/*
==============
DynEnt_ChangeActiveModelForScriptable
==============
*/
void DynEnt_ChangeActiveModelForScriptable(LocalClientNum_t localClientNum, const unsigned int dynEntId, const XModel *model)
{
  const DynEntityDef *Def; 
  DynEntityClient *Client; 
  unsigned __int16 flags; 
  XModelDetailCollision *detailCollision; 
  bool v10; 
  XModelDetailCollision *v11; 
  PhysicsAsset *physicsAsset; 
  const XModel *detailModel; 
  int dynEntSimpleAdditionalBoneCount; 

  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 252, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 253, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  DynEnt_UnlinkEntity(localClientNum, dynEntId, DYNENT_BASIS_MODEL, 0, 1);
  flags = Client->flags;
  Client->activeModel = model;
  Client->spawnCollisionCacheCount = 0;
  Client->flags = flags & 0xFFAF | 0x40;
  v10 = model && (detailCollision = model->detailCollision) != NULL && DB_IsXAssetTransient(ASSET_TYPE_XMODEL_DETAIL_COLLISION, detailCollision->name);
  Def->isTransient = v10;
  if ( v10 )
    Client->flags |= 0x10u;
  if ( model )
  {
    v11 = model->detailCollision;
    physicsAsset = model->physicsAsset;
    if ( v11 && v11->physicsLODDataSize )
    {
      detailModel = model;
      goto LABEL_19;
    }
  }
  else
  {
    physicsAsset = NULL;
  }
  detailModel = NULL;
LABEL_19:
  if ( (Client->flags & 2) != 0 )
    DynEnt_ReplacePhysicsForModelSwap(localClientNum, dynEntId, model, physicsAsset, detailModel);
  else
    DynEnt_SetupPhysics(localClientNum, dynEntId, DYNENT_BASIS_MODEL, model, physicsAsset, -1, detailModel, 0, 0, 0);
  if ( Client->activeModel )
  {
    dynEntSimpleAdditionalBoneCount = 0;
    if ( DynEnt_UpdatePoseModel(localClientNum, dynEntId, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount, &dynEntSimpleAdditionalBoneCount) )
      DynEnt_LinkModel(localClientNum, dynEntId);
  }
  FX_ReleaseDynEntMarks(localClientNum, Client);
}

/*
==============
DynEnt_IsValidScriptableModel
==============
*/
char DynEnt_IsValidScriptableModel(const XModel *model, const unsigned int rigidSurfLimit)
{
  int v5; 
  __int64 v6; 
  XRigidVertList **i; 
  XSurface *surfaces; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 311, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !rigidSurfLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 312, ASSERT_TYPE_ASSERT, "(rigidSurfLimit)", (const char *)&queryFormat, "rigidSurfLimit") )
    __debugbreak();
  if ( model->numLods )
  {
    v5 = XModelGetSurfaces(model, &surfaces, 0);
    if ( v5 )
    {
      if ( v5 <= 0 )
      {
        return 1;
      }
      else
      {
        v6 = 0i64;
        for ( i = &surfaces->rigidVertLists; *((_BYTE *)i - 80); i += 24 )
        {
          if ( (*i)->boneIndexOffset >= 4u )
          {
            Com_PrintWarning(14, "DynEnt_IsValidScriptableModel: Too many rigid surfaces for '%s'. We only support %i. Consider increasing SCRIPTABLE_MAX_RIGID_BODIES_FOR_LOOT_DYNENTS\n", model->name, 4i64);
            return 0;
          }
          if ( ++v6 >= v5 )
            return 1;
        }
        Com_PrintWarning(14, "DynEnt_IsValidScriptableModel: No rigid vertices for '%s'. Surfaces for dynents only support rigid skinning\n", model->name);
        return 0;
      }
    }
    else
    {
      Com_PrintWarning(14, "DynEnt_IsValidScriptableModel: No surfaces specified for '%s'. Must use visible models for dynents.\n", model->name);
      return 0;
    }
  }
  else
  {
    Com_PrintWarning(14, "DynEnt_IsValidScriptableModel: No LODs specified for '%s'. Must use visible models for dynents.\n", model->name);
    return 0;
  }
}

/*
==============
DynEnt_ScriptablePhysicsLaunch
==============
*/
void DynEnt_ScriptablePhysicsLaunch(LocalClientNum_t localClientNum, unsigned int dynEntId, const XModel *model, const vec3_t *launchPos, const vec3_t *launchAngles, const vec3_t *linVel, const vec3_t *angVel)
{
  __int32 v11; 
  DynEntityClient *v12; 
  DynEntityPose *Pose; 
  const DynEntityDef *Def; 
  const vec3_t *v15; 
  DynEntityClient *v16; 
  unsigned int v17; 
  unsigned int NumRigidBodys; 
  const vec3_t *v19; 
  const vec3_t *v20; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  __int64 v23; 
  DynEntityClient *Client; 
  __int16 gridIdx; 
  hknpBodyId result; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 50, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  v11 = 3 * localClientNum + 3;
  if ( WorldCollision_IsCollisionReadyAt((const Physics_WorldId)v11, (const vec2_t *)launchPos, &gridIdx) )
  {
    v12 = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 100, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    v12->flags |= 1u;
    Pose = DynEnt_GetPose(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
    Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 156, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
      __debugbreak();
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 157, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
      __debugbreak();
    v15 = launchAngles;
    Pose->pose.origin.v[0] = launchPos->v[0];
    Pose->pose.origin.v[1] = launchPos->v[1];
    Pose->pose.origin.v[2] = launchPos->v[2];
    AnglesToQuat(v15, &Pose->pose.quat);
    Pose->posePart0.origin.v[0] = Pose->pose.origin.v[0];
    Pose->posePart0.origin.v[1] = Pose->pose.origin.v[1];
    Pose->posePart0.origin.v[2] = Pose->pose.origin.v[2];
    Pose->posePart0.quat.v[0] = Pose->pose.quat.v[0];
    Pose->posePart0.quat.v[1] = Pose->pose.quat.v[1];
    Pose->posePart0.quat.v[2] = Pose->pose.quat.v[2];
    Pose->posePart0.quat.v[3] = Pose->pose.quat.v[3];
    Def->initialPose.origin.v[0] = Pose->pose.origin.v[0];
    Def->initialPose.origin.v[1] = Pose->pose.origin.v[1];
    Def->initialPose.origin.v[2] = Pose->pose.origin.v[2];
    Def->initialPose.quat.v[0] = Pose->pose.quat.v[0];
    Def->initialPose.quat.v[1] = Pose->pose.quat.v[1];
    Def->initialPose.quat.v[2] = Pose->pose.quat.v[2];
    Def->initialPose.quat.v[3] = Pose->pose.quat.v[3];
    DynEnt_ChangeActiveModelForScriptable(localClientNum, dynEntId, model);
    v16 = Client;
    v17 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v11, Client->physicsSystemId);
    if ( NumRigidBodys )
    {
      v19 = angVel;
      v20 = linVel;
      do
      {
        physicsSystemId = v16->physicsSystemId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
            __debugbreak();
        }
        if ( physicsSystemId == -1 )
        {
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v23) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
        {
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v11, physicsSystemId, v17)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 70, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_SetRigidBodyLinAngVel((const Physics_WorldId)v11, m_serialAndIndex, v20, v19);
        v16 = Client;
        ++v17;
      }
      while ( v17 < NumRigidBodys );
    }
  }
}

/*
==============
DynEnt_ScriptableSetPosition
==============
*/
void DynEnt_ScriptableSetPosition(LocalClientNum_t localClientNum, const unsigned int dynEntId, const vec3_t *origin, const vec3_t *angles)
{
  DynEntityPose *Pose; 
  const DynEntityDef *Def; 

  Pose = DynEnt_GetPose(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 156, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 157, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  Pose->pose.origin.v[0] = origin->v[0];
  Pose->pose.origin.v[1] = origin->v[1];
  Pose->pose.origin.v[2] = origin->v[2];
  AnglesToQuat(angles, &Pose->pose.quat);
  Pose->posePart0.origin.v[0] = Pose->pose.origin.v[0];
  Pose->posePart0.origin.v[1] = Pose->pose.origin.v[1];
  Pose->posePart0.origin.v[2] = Pose->pose.origin.v[2];
  Pose->posePart0.quat.v[0] = Pose->pose.quat.v[0];
  Pose->posePart0.quat.v[1] = Pose->pose.quat.v[1];
  Pose->posePart0.quat.v[2] = Pose->pose.quat.v[2];
  Pose->posePart0.quat.v[3] = Pose->pose.quat.v[3];
  Def->initialPose.origin.v[0] = Pose->pose.origin.v[0];
  Def->initialPose.origin.v[1] = Pose->pose.origin.v[1];
  Def->initialPose.origin.v[2] = Pose->pose.origin.v[2];
  Def->initialPose.quat.v[0] = Pose->pose.quat.v[0];
  Def->initialPose.quat.v[1] = Pose->pose.quat.v[1];
  Def->initialPose.quat.v[2] = Pose->pose.quat.v[2];
  Def->initialPose.quat.v[3] = Pose->pose.quat.v[3];
}

/*
==============
DynEnt_ScriptableUpdatePosition
==============
*/
char DynEnt_ScriptableUpdatePosition(LocalClientNum_t localClientNum, const unsigned int dynEntId, vec3_t *outOrigin, vec3_t *outAngles)
{
  DynEntityClient *Client; 
  DynEntityPose *v9; 
  DynEntityClient *v11; 
  DynEntityPose *Pose; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 136, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( (Client->flags & 0x81) != 0x81 && (Client->flags & 0x41) != 65 )
  {
    v11 = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 123, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    if ( (v11->flags & 1) != 0 )
    {
      Pose = DynEnt_GetPose(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 200, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
        __debugbreak();
      AnglesToQuat(outAngles, &quat);
      __asm { vmovss  xmm2, cs:__real@3f800000; epsilon }
      if ( !VecNCompareCustomEpsilon(Pose->posePart0.origin.v, outOrigin->v, *(float *)&_XMM2, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 204, ASSERT_TYPE_ASSERT, "(Vec3CompareCustomEpsilon( dynEntPose->posePart0.origin, outOrigin, 1.0f ))", (const char *)&queryFormat, "Vec3CompareCustomEpsilon( dynEntPose->posePart0.origin, outOrigin, 1.0f )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+quat+4]
        vmulss  xmm3, xmm0, dword ptr [rbx+4]
        vmovss  xmm1, dword ptr [rsp+0A8h+quat]
        vmulss  xmm2, xmm1, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+0A8h+quat+8]
        vmulss  xmm1, xmm0, dword ptr [rbx+8]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm2, dword ptr [rsp+0A8h+quat+0Ch]
        vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
        vaddss  xmm3, xmm4, xmm1
        vaddss  xmm1, xmm3, xmm0
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, cs:__real@3f666666
      }
    }
    return 0;
  }
  else
  {
    v9 = DynEnt_GetPose(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_scriptable.cpp", 182, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
      __debugbreak();
    outOrigin->v[0] = v9->posePart0.origin.v[0];
    outOrigin->v[1] = v9->posePart0.origin.v[1];
    outOrigin->v[2] = v9->posePart0.origin.v[2];
    QuatToAxis(&v9->posePart0.quat, &axis);
    AxisToAngles(&axis, outAngles);
    return 1;
  }
}

