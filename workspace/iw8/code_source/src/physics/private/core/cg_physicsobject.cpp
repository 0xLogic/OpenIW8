/*
==============
CG_PhysicsObject_Init
==============
*/

void CG_PhysicsObject_Init(void)
{
  ?CG_PhysicsObject_Init@@YAXXZ();
}

/*
==============
CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping
==============
*/

void __fastcall CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@@Z(worldId, physObj);
}

/*
==============
CG_PhysicsObject_GetInstance
==============
*/

unsigned int __fastcall CG_PhysicsObject_GetInstance(Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum)
{
  return ?CG_PhysicsObject_GetInstance@@YAIW4Physics_WorldId@@HW4LocalClientNum_t@@@Z(worldId, entNum, localClientNum);
}

/*
==============
CG_PhysicsObject_UpdatePhysicsChild
==============
*/

void __fastcall CG_PhysicsObject_UpdatePhysicsChild(Physics_WorldId worldId, LocalClientNum_t localClientNum, centity_t *ent)
{
  ?CG_PhysicsObject_UpdatePhysicsChild@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@PEAUcentity_t@@@Z(worldId, localClientNum, ent);
}

/*
==============
CG_PhysicsObject_PreUpdatePredictiveWorld
==============
*/

void __fastcall CG_PhysicsObject_PreUpdatePredictiveWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_PreUpdatePredictiveWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
CG_PhysicsObject_CachePrimaryBodies
==============
*/

void __fastcall CG_PhysicsObject_CachePrimaryBodies(LocalClientNum_t localClientNum, __int16 entNum)
{
  ?CG_PhysicsObject_CachePrimaryBodies@@YAXW4LocalClientNum_t@@F@Z(localClientNum, entNum);
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectUsed
==============
*/

bool __fastcall CG_PhysicsObject_IsPhysicsObjectUsed(LocalClientNum_t localClientNum, __int16 entNum)
{
  return ?CG_PhysicsObject_IsPhysicsObjectUsed@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entNum);
}

/*
==============
CG_PhysicsObject_PostUpdatePredictiveWorld
==============
*/

void __fastcall CG_PhysicsObject_PostUpdatePredictiveWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_PostUpdatePredictiveWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
CG_PhysicsObject_CreateDetailBoneMapping
==============
*/

void __fastcall CG_PhysicsObject_CreateDetailBoneMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  ?CG_PhysicsObject_CreateDetailBoneMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@PEBUDObj@@PEBUPhysicsAsset@@@Z(worldId, physObj, dobj, physAsset);
}

/*
==============
CG_PhysicsObject_DestroyPropagationMapping
==============
*/

void __fastcall CG_PhysicsObject_DestroyPropagationMapping(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_DestroyPropagationMapping@@YAXW4Physics_WorldId@@0PEAVCG_PhysicsObject@@@Z(fromWorldId, toWorldId, physObj);
}

/*
==============
CG_PhysicsObject_DestroyDynamicBodyToPoseMapping
==============
*/

void __fastcall CG_PhysicsObject_DestroyDynamicBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_DestroyDynamicBodyToPoseMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@@Z(worldId, physObj);
}

/*
==============
CG_PhysicsObject_DestroyChildData
==============
*/

void __fastcall CG_PhysicsObject_DestroyChildData(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_DestroyChildData@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@@Z(worldId, physObj);
}

/*
==============
CG_PhysicsObject_CreateDynamicBodyToPoseMapping
==============
*/

void __fastcall CG_PhysicsObject_CreateDynamicBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  ?CG_PhysicsObject_CreateDynamicBodyToPoseMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@PEBUDObj@@PEBUPhysicsAsset@@@Z(worldId, physObj, dobj, physAsset);
}

/*
==============
CG_PhysicsObject_Get
==============
*/

CG_PhysicsObject *__fastcall CG_PhysicsObject_Get(int entNum, LocalClientNum_t localClientNum)
{
  return ?CG_PhysicsObject_Get@@YAPEAVCG_PhysicsObject@@HW4LocalClientNum_t@@@Z(entNum, localClientNum);
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectShown
==============
*/

bool __fastcall CG_PhysicsObject_IsPhysicsObjectShown(LocalClientNum_t localClientNum, __int16 entNum)
{
  return ?CG_PhysicsObject_IsPhysicsObjectShown@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entNum);
}

/*
==============
CG_PhysicsObject_CreatePhysicsChild
==============
*/

void __fastcall CG_PhysicsObject_CreatePhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  ?CG_PhysicsObject_CreatePhysicsChild@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, ent);
}

/*
==============
CG_PhysicsObject_Shutdown
==============
*/

void CG_PhysicsObject_Shutdown(void)
{
  ?CG_PhysicsObject_Shutdown@@YAXXZ();
}

/*
==============
CG_PhysicsObject_LaunchClient
==============
*/

void __fastcall CG_PhysicsObject_LaunchClient(Physics_WorldId worldId, const centity_t *cent, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_LaunchClient@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@@Z(worldId, cent, localClientNum);
}

/*
==============
CG_PhysicsObject_ResetPhysicsChild
==============
*/

void __fastcall CG_PhysicsObject_ResetPhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  ?CG_PhysicsObject_ResetPhysicsChild@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, ent);
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsShown
==============
*/

void __fastcall CG_PhysicsObject_MarkPhysicsObjectAsShown(LocalClientNum_t localClientNum, __int16 entNum, bool shown)
{
  ?CG_PhysicsObject_MarkPhysicsObjectAsShown@@YAXW4LocalClientNum_t@@F_N@Z(localClientNum, entNum, shown);
}

/*
==============
CG_PhysicsObject_DestroyDetailBoneMapping
==============
*/

void __fastcall CG_PhysicsObject_DestroyDetailBoneMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_DestroyDetailBoneMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@@Z(worldId, physObj);
}

/*
==============
CG_PhysicsObject_CreatePropagationMapping
==============
*/

void __fastcall CG_PhysicsObject_CreatePropagationMapping(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, CG_PhysicsObject *physObj)
{
  ?CG_PhysicsObject_CreatePropagationMapping@@YAXW4Physics_WorldId@@0PEAVCG_PhysicsObject@@@Z(fromWorldId, toWorldId, physObj);
}

/*
==============
CG_PhysicsObject_SetEntityTransforms
==============
*/

void __fastcall CG_PhysicsObject_SetEntityTransforms(Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_SetEntityTransforms@@YAXW4Physics_WorldId@@HW4LocalClientNum_t@@@Z(worldId, entNum, localClientNum);
}

/*
==============
CG_PhysicsObject_PropagateToDetailWorld
==============
*/

void __fastcall CG_PhysicsObject_PropagateToDetailWorld(Physics_WorldId fromWorldId, Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_PropagateToDetailWorld@@YAXW4Physics_WorldId@@0W4LocalClientNum_t@@@Z(fromWorldId, worldId, localClientNum);
}

/*
==============
CG_PhysicsObject_Propagate
==============
*/

void __fastcall CG_PhysicsObject_Propagate(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, LocalClientNum_t localClientNum, int numSteps)
{
  ?CG_PhysicsObject_Propagate@@YAXW4Physics_WorldId@@0W4LocalClientNum_t@@H@Z(fromWorldId, toWorldId, localClientNum, numSteps);
}

/*
==============
CG_PhysicsObject_CreateKeyframedBodyToPoseMapping
==============
*/

void __fastcall CG_PhysicsObject_CreateKeyframedBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  ?CG_PhysicsObject_CreateKeyframedBodyToPoseMapping@@YAXW4Physics_WorldId@@PEAVCG_PhysicsObject@@PEBUDObj@@PEBUPhysicsAsset@@@Z(worldId, physObj, dobj, physAsset);
}

/*
==============
CG_PhysicsObject_Write
==============
*/

void __fastcall CG_PhysicsObject_Write(MemoryFile *memFile)
{
  ?CG_PhysicsObject_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_PhysicsObject_UpdateDetailWorldInstance
==============
*/

unsigned int __fastcall CG_PhysicsObject_UpdateDetailWorldInstance(Physics_WorldId fromWorldId, Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum, DObjPartBits **partBits)
{
  return ?CG_PhysicsObject_UpdateDetailWorldInstance@@YAIW4Physics_WorldId@@0HW4LocalClientNum_t@@PEAPEAUDObjPartBits@@@Z(fromWorldId, worldId, entNum, localClientNum, partBits);
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectMovable
==============
*/

bool __fastcall CG_PhysicsObject_IsPhysicsObjectMovable(LocalClientNum_t localClientNum, __int16 entNum)
{
  return ?CG_PhysicsObject_IsPhysicsObjectMovable@@YA_NW4LocalClientNum_t@@F@Z(localClientNum, entNum);
}

/*
==============
CG_PhysicsObject_MatchSnapshot
==============
*/

void __fastcall CG_PhysicsObject_MatchSnapshot(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_MatchSnapshot@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PhysicsObject_Load
==============
*/

void __fastcall CG_PhysicsObject_Load(SaveGame *save)
{
  ?CG_PhysicsObject_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
CG_PhysicsObject_MapPose
==============
*/

void __fastcall CG_PhysicsObject_MapPose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits, int physicsObjectId, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_MapPose@@YAXPEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@HW4LocalClientNum_t@@@Z(pose, obj, partBits, physicsObjectId, localClientNum);
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsMovable
==============
*/

void __fastcall CG_PhysicsObject_MarkPhysicsObjectAsMovable(LocalClientNum_t localClientNum, __int16 entNum, bool movable)
{
  ?CG_PhysicsObject_MarkPhysicsObjectAsMovable@@YAXW4LocalClientNum_t@@F_N@Z(localClientNum, entNum, movable);
}

/*
==============
CG_PhysicsObject_PostUpdateAuthoritativeWorld
==============
*/

void __fastcall CG_PhysicsObject_PostUpdateAuthoritativeWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?CG_PhysicsObject_PostUpdateAuthoritativeWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsUsed
==============
*/

void __fastcall CG_PhysicsObject_MarkPhysicsObjectAsUsed(LocalClientNum_t localClientNum, __int16 entNum, bool used)
{
  ?CG_PhysicsObject_MarkPhysicsObjectAsUsed@@YAXW4LocalClientNum_t@@F_N@Z(localClientNum, entNum, used);
}

/*
==============
CG_PhysicsObject_DestroyPhysicsChild
==============
*/

void __fastcall CG_PhysicsObject_DestroyPhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  ?CG_PhysicsObject_DestroyPhysicsChild@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, ent);
}

/*
==============
CG_PhysicsObject_GetBase
==============
*/

PhysicsObject *__fastcall CG_PhysicsObject_GetBase(int entNum, LocalClientNum_t localClientNum)
{
  return ?CG_PhysicsObject_GetBase@@YAPEAVPhysicsObject@@HW4LocalClientNum_t@@@Z(entNum, localClientNum);
}

/*
==============
CG_PhysicsObject_CachePrimaryBodies
==============
*/
void CG_PhysicsObject_CachePrimaryBodies(LocalClientNum_t localClientNum, __int16 entNum)
{
  __int64 v2; 
  CG_PhysicsObject *v3; 
  Physics_WorldId v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int *v8; 
  unsigned int v9; 
  unsigned int v10; 
  hknpBodyId *RigidBodyID; 
  unsigned int m_serialAndIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v16; 
  hknpBodyId result; 
  vec4_t orientation; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  v3 = CG_PhysicsObject_Get(entNum, localClientNum);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 290, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v4 = 3 * v2 + 2;
  v5 = v4;
  v6 = 3 * (int)v2 + 4;
  v7 = v4;
  if ( (int)v4 <= v6 )
  {
    v8 = &v3->physicsInstances[v4];
    v16 = v2;
    v9 = 3 * v2 + 2;
    do
    {
      v10 = *v8;
      if ( *v8 == -1 )
      {
        v3->primaryBodies[v5 - v7] = 0xFFFFFF;
      }
      else
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v4 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v14) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && v9 - 2 <= 5 )
        {
          LODWORD(v14) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && v9 <= 1 )
        {
          LODWORD(v14) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, v4, v10, 0);
        m_serialAndIndex = RigidBodyID->m_serialAndIndex;
        v3->primaryBodies[v5 - v7] = RigidBodyID->m_serialAndIndex;
        if ( v5 == v7 )
        {
          v13 = entNum;
          Physics_GetRigidBodyTransform(v4, m_serialAndIndex, &s_centityPhyObjPredictivePositions[v16][v13], &orientation);
          QuatToAxis(&orientation, &axis);
          AxisToAngles(&axis, &s_centityPhyObjPredictiveAngles[v16][v13]);
        }
      }
      ++v4;
      ++v9;
      ++v5;
      ++v8;
    }
    while ( v5 <= v6 );
  }
}

/*
==============
CG_PhysicsObject_CreateDetailBoneMapping
==============
*/
void CG_PhysicsObject_CreateDetailBoneMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  __int64 v6; 
  hkMonitorStream *Value; 
  hkMonitorStream *v8; 
  unsigned int v9; 
  int NumRigidBodys; 
  __int64 v11; 
  ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator> *v12; 
  signed int v13; 
  unsigned __int64 v14; 
  const DObj *v15; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 BoneIndex; 
  __int64 v18; 
  signed int v19; 
  hkMonitorStream *v20; 
  const DObj *result; 
  PhysicsAsset *physAsseta; 

  physAsseta = (PhysicsAsset *)physAsset;
  result = dobj;
  v6 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v20 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_CreateDetailBoneMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 780, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v6 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 781, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 782, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 783, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v9 = physObj->physicsInstances[v6];
  if ( v9 != -1 && Physics_IsInstanceDetailBounded((const Physics_WorldId)v6, v9) )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, v9);
    if ( NumRigidBodys <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 800, ASSERT_TYPE_ASSERT, "(numBodies > 1)", (const char *)&queryFormat, "numBodies > 1") )
      __debugbreak();
    v11 = 656i64;
    if ( Physics_IsDetailWorld((Physics_WorldId)v6) )
      v11 = 640i64;
    v12 = (ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator> *)((char *)physObj + v11);
    if ( v12->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 804, ASSERT_TYPE_ASSERT, "(boneMapping->size() == 0)", (const char *)&queryFormat, "boneMapping->size() == 0") )
      __debugbreak();
    v19 = NumRigidBodys - 1;
    ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator>::reserve(v12, NumRigidBodys - 1);
    v13 = 0;
    if ( NumRigidBodys - 1 > 0 )
    {
      v14 = 0i64;
      v15 = result;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v18) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID((hknpBodyId *)&result, (const Physics_WorldId)v6, v9, v13)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 811, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        BoneIndex = CG_PhysicsObject_FindBoneIndex((Physics_WorldId)v6, m_serialAndIndex, v15, physAsseta);
        if ( v14 >= v12->m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v14 >= v12->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v12->m_data.m_buffer[v14].bodyId = m_serialAndIndex;
        if ( v14 >= v12->m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v14 >= v12->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v12->m_data.m_buffer[v14].boneIndex = BoneIndex;
        ++v13;
        ++v14;
      }
      while ( v13 < v19 );
      v8 = v20;
    }
  }
  if ( v8 )
    hkMonitorStream::timerEnd(v8, "Et");
}

/*
==============
CG_PhysicsObject_CreateDynamicBodyToPoseMapping
==============
*/
void CG_PhysicsObject_CreateDynamicBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  __int64 v6; 
  hkMonitorStream *Value; 
  hkMonitorStream *v8; 
  unsigned int v9; 
  int NumRigidBodys; 
  int v11; 
  signed int v12; 
  unsigned int m_serialAndIndex; 
  __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  signed int v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  signed int v21; 
  unsigned int v22; 
  unsigned __int8 BoneIndex; 
  unsigned __int64 v24; 
  __int64 v25; 
  vec4_t *v26; 
  __int64 v27; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  hkMonitorStream *v31; 
  hknpBodyId result; 
  CG_PhysicsObject *v33; 
  DObj *dobja; 
  PhysicsAsset *physAsseta; 

  physAsseta = (PhysicsAsset *)physAsset;
  dobja = (DObj *)dobj;
  v33 = physObj;
  v6 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v31 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_CreateDynamicBodyToPoseMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 515, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v6 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 516, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 517, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 518, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v9 = physObj->physicsInstances[v6];
  v28 = v9;
  if ( v9 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, v9);
    v29 = NumRigidBodys;
    v11 = 0;
    v12 = 1;
    if ( NumRigidBodys > 1 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v27) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v27) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v27) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, v9, v12)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 533, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v6, m_serialAndIndex) )
          ++v11;
        ++v12;
      }
      while ( v12 < NumRigidBodys );
      v8 = v31;
      v14 = (__int64)v33;
      if ( v11 )
      {
        if ( v33->clientDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 548, ASSERT_TYPE_ASSERT, "(physObj->clientDynamicBoneMapping.size() == 0)", (const char *)&queryFormat, "physObj->clientDynamicBoneMapping.size() == 0") )
          __debugbreak();
        if ( *(_QWORD *)(v14 + 560) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
          __debugbreak();
        if ( !ntl::static_shared_allocator<CG_PhysicsObject_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<1114112,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        *(_QWORD *)(v14 + 560) = ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_PhysicsObject_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<1114112,0>>::mp_allocator->m_heap, 68i64 * v11, 4ui64, 1);
        *(_QWORD *)(v14 + 568) = v11;
        v15 = 0i64;
        v16 = 0i64;
        do
        {
          if ( v15 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
          v17 = *(_QWORD *)(v14 + 560);
          *(_DWORD *)(v16 + v17) = 0xFFFFFF;
          *(_BYTE *)(v16 + v17 + 4) = 0;
          *(_QWORD *)(v16 + v17 + 8) = 0i64;
          *(_QWORD *)(v16 + v17 + 16) = 0i64;
          *(_QWORD *)(v16 + v17 + 24) = 0i64;
          *(vec4_t *)(v16 + v17 + 32) = quat_identity;
          *(vec4_t *)(v16 + v17 + 48) = quat_identity;
          *(_DWORD *)(v16 + v17 + 64) = 0;
          ++v15;
          v16 += 68i64;
        }
        while ( v15 < v11 );
        v18 = 0;
        result.m_serialAndIndex = 0;
        v19 = 0i64;
        v20 = 0i64;
        v30 = 0i64;
        v21 = 1;
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v6 > 7 )
          {
            LODWORD(v27) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
          {
            LODWORD(v27) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
          {
            LODWORD(v27) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
              __debugbreak();
          }
          v22 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&v33, (const Physics_WorldId)v6, v9, v21)->m_serialAndIndex;
          if ( (v22 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 556, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v6, v22) )
          {
            BoneIndex = CG_PhysicsObject_FindBoneIndex((Physics_WorldId)v6, v22, dobja, physAsseta);
            if ( v19 >= *(_QWORD *)(v14 + 568) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_DWORD *)(v20 + *(_QWORD *)(v14 + 560)) = v22;
            if ( v19 >= *(_QWORD *)(v14 + 568) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_BYTE *)(v20 + *(_QWORD *)(v14 + 560) + 4) = BoneIndex;
            v24 = v18;
            if ( (unsigned __int64)v18 >= *(_QWORD *)(v14 + 568) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( (unsigned __int64)v18 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            v25 = 68i64 * v18;
            v26 = (vec4_t *)(v25 + *(_QWORD *)(v14 + 560) + 32);
            if ( v24 >= *(_QWORD *)(v14 + 568) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v24 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            Physics_GetRigidBodyTransform((const Physics_WorldId)v6, v22, (vec3_t *)(v25 + *(_QWORD *)(v14 + 560) + 8), v26);
            if ( v19 >= *(_QWORD *)(v14 + 568) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 568) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_DWORD *)(v30 + *(_QWORD *)(v14 + 560) + 64) = 0;
            v18 = ++result.m_serialAndIndex;
            ++v19;
            v20 = v30 + 68;
            v30 += 68i64;
          }
          ++v21;
          v9 = v28;
        }
        while ( v21 < v29 );
        v8 = v31;
      }
    }
  }
  if ( v8 )
    hkMonitorStream::timerEnd(v8, "Et");
}

/*
==============
CG_PhysicsObject_CreateKeyframedBodyToPoseMapping
==============
*/
void CG_PhysicsObject_CreateKeyframedBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj, const DObj *dobj, const PhysicsAsset *physAsset)
{
  __int64 v6; 
  hkMonitorStream *Value; 
  hkMonitorStream *v8; 
  unsigned int v9; 
  int NumRigidBodys; 
  unsigned __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  Physics_WorldId v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned int RigidBodyID; 
  int v22; 
  unsigned __int64 v23; 
  PhysicsAsset *v24; 
  unsigned int m_serialAndIndex; 
  PhysicsAsset *v26; 
  int v27; 
  DObj *v28; 
  unsigned int v29; 
  unsigned __int8 BoneIndex; 
  __int64 v31; 
  unsigned int instanceId; 
  int v33; 
  Physics_WorldId worldIda; 
  hkMonitorStream *v35; 
  unsigned __int64 v36; 
  PhysicsAsset *physicsAsset; 
  DObj *dobja; 
  __int64 v39; 
  hkMonitorStream *v40; 
  vec3_t position; 
  vec3_t origin; 
  vec4_t orientation; 
  vec4_t quat; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 

  v39 = -2i64;
  physicsAsset = (PhysicsAsset *)physAsset;
  dobja = (DObj *)dobj;
  v6 = worldId;
  worldIda = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v35 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_CreateKeyframedBodyToPoseMapping");
  v40 = v8;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 600, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v6 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 601, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 602, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 603, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( physObj->serverKeyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 604, ASSERT_TYPE_ASSERT, "(physObj->serverKeyframedOffsetMapping.size() == 0)", (const char *)&queryFormat, "physObj->serverKeyframedOffsetMapping.size() == 0") )
    __debugbreak();
  if ( physObj->serverKeyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 605, ASSERT_TYPE_ASSERT, "(physObj->serverKeyframedBoneMapping.size() == 0)", (const char *)&queryFormat, "physObj->serverKeyframedBoneMapping.size() == 0") )
    __debugbreak();
  v9 = physObj->physicsInstances[v6];
  instanceId = v9;
  if ( v9 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, v9);
    v33 = NumRigidBodys;
    v11 = 0i64;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 1;
    if ( NumRigidBodys > 1 )
    {
      v16 = NumRigidBodys;
      do
      {
        if ( !Physics_IsPhysicsAssetBodyDynamic(physicsAsset, v15) )
        {
          ++v12;
          if ( Physics_IsAssetBodyAnimationDriven(physicsAsset, v15) )
            ++v13;
          else
            ++v14;
        }
        ++v15;
      }
      while ( v15 < v16 );
      v8 = v35;
      v17 = worldIda;
      if ( v12 )
      {
        if ( v14 > 0 )
        {
          v18 = v14;
          if ( physObj->serverKeyframedOffsetMapping.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
            __debugbreak();
          if ( !ntl::static_shared_allocator<CG_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
            __debugbreak();
          physObj->serverKeyframedOffsetMapping.m_data.m_buffer = (PhysicsObjectOffsetMapping *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator->m_heap, 52i64 * v14, 4ui64, 1);
          physObj->serverKeyframedOffsetMapping.m_data.m_size = v14;
          v19 = 0i64;
          v20 = 0i64;
          do
          {
            if ( v19 >= physObj->serverKeyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
            physObj->serverKeyframedOffsetMapping.m_data.m_buffer[v20].bodyId = 0xFFFFFF;
            ++v19;
            ++v20;
          }
          while ( v19 < v18 );
          RigidBodyID = Physics_GetRigidBodyID(v17, instanceId, 0);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 654, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( rootBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( rootBodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform(v17, RigidBodyID, &position, &orientation);
          QuatAndOriginToMatrix43(&orientation, &position, &result);
          MatrixInverseOrthogonal43(&result, &out);
          v22 = 1;
          v23 = 0i64;
          v36 = 0i64;
          v24 = physicsAsset;
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v17 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v17 - 2) <= 5 )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v31) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v17 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v31) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldIda, v17, instanceId, v22)->m_serialAndIndex;
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 664, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( !Physics_IsPhysicsAssetBodyDynamic(v24, v22) && !Physics_IsAssetBodyAnimationDriven(v24, v22) )
            {
              Physics_GetRigidBodyTransform(v17, m_serialAndIndex, &origin, &quat);
              QuatAndOriginToMatrix43(&quat, &origin, &in1);
              if ( v23 >= physObj->serverKeyframedOffsetMapping.m_data.m_size )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v23 >= physObj->serverKeyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              physObj->serverKeyframedOffsetMapping.m_data.m_buffer[v36 / 0x34].bodyId = m_serialAndIndex;
              if ( (int)v11 >= physObj->serverKeyframedOffsetMapping.m_data.m_size )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( (int)v11 >= physObj->serverKeyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              MatrixMultiply43(&in1, &out, &physObj->serverKeyframedOffsetMapping.m_data.m_buffer[(int)v11].rootOffset);
              LODWORD(v11) = v11 + 1;
              ++v23;
              v36 += 52i64;
            }
            ++v22;
          }
          while ( v22 < v33 );
          v8 = v35;
          v11 = 0i64;
        }
        if ( v13 > 0 )
        {
          ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator>::reserve(&physObj->serverKeyframedBoneMapping, v13);
          v26 = physicsAsset;
          v27 = 1;
          v28 = dobja;
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v17 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v17 - 2) <= 5 )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v31) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v17 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              LODWORD(v31) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v31) )
                __debugbreak();
            }
            v29 = HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldIda, v17, instanceId, v27)->m_serialAndIndex;
            if ( (v29 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 695, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( !Physics_IsPhysicsAssetBodyDynamic(v26, v27) && Physics_IsAssetBodyAnimationDriven(v26, v27) )
            {
              BoneIndex = CG_PhysicsObject_FindBoneIndex(v17, v29, v28, v26);
              if ( v11 >= physObj->serverKeyframedBoneMapping.m_data.m_size )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v11 >= physObj->serverKeyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              physObj->serverKeyframedBoneMapping.m_data.m_buffer[v11].bodyId = v29;
              if ( v11 >= physObj->serverKeyframedBoneMapping.m_data.m_size )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v11 >= physObj->serverKeyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              physObj->serverKeyframedBoneMapping.m_data.m_buffer[v11++].boneIndex = BoneIndex;
            }
            ++v27;
          }
          while ( v27 < v33 );
          v8 = v35;
        }
      }
    }
  }
  if ( v8 )
    hkMonitorStream::timerEnd(v8, "Et");
}

/*
==============
CG_PhysicsObject_CreatePhysicsChild
==============
*/
void CG_PhysicsObject_CreatePhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1980, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1981, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  if ( ent->nextState.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1982, ASSERT_TYPE_ASSERT, "(ent->nextState.eType == ET_PHYSICS_CHILD)", (const char *)&queryFormat, "ent->nextState.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1983, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
}

/*
==============
CG_PhysicsObject_CreatePropagationMapping
==============
*/
void CG_PhysicsObject_CreatePropagationMapping(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, CG_PhysicsObject *physObj)
{
  __int64 v4; 
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  __int64 v8; 
  const unsigned int *v9; 
  int NumRigidBodys; 
  unsigned __int64 v11; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> **v12; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> *mp_next; 
  signed int v14; 
  signed int v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  Physics_WorldId v18; 
  unsigned int RigidBodyID; 
  const char *RigidBodyName; 
  unsigned int v21; 
  unsigned int m_serialAndIndex; 
  const char *v23; 
  __int64 v24; 
  signed __int64 v25; 
  int v26; 
  int v27; 
  int v29; 
  int v30; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> *v31; 
  __int64 v32; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> **v33; 
  signed __int64 v34; 
  hkMonitorStream *v35; 
  Physics_WorldId worldId; 
  int v37; 
  unsigned __int64 v38; 
  const unsigned int *v39; 

  worldId = fromWorldId;
  v4 = toWorldId;
  v5 = fromWorldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v35 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_CreatePropagationMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 354, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (_DWORD)v5 == (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 355, ASSERT_TYPE_ASSERT, "(fromWorldId != toWorldId)", (const char *)&queryFormat, "fromWorldId != toWorldId") )
    __debugbreak();
  if ( (unsigned int)(v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 356, ASSERT_TYPE_ASSERT, "(fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)(v4 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 357, ASSERT_TYPE_ASSERT, "(toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 358, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v8 = v5;
  v39 = &physObj->physicsInstances[v5];
  if ( *v39 != -1 )
  {
    v9 = &physObj->physicsInstances[v4];
    if ( *v9 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, *v39);
      v11 = NumRigidBodys;
      if ( NumRigidBodys > 0 )
      {
        v12 = &physObj->propagationMappings[v8][v4];
        v33 = v12;
        if ( *v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 375, ASSERT_TYPE_ASSERT, "(physObj->propagationMappings[fromWorldId][toWorldId] == 0)", (const char *)&queryFormat, "physObj->propagationMappings[fromWorldId][toWorldId] == NULL") )
          __debugbreak();
        if ( !s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<16> *)s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next == &s_cg_physicsObject_PropagationArrayAllocator.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x800ui64) )
          __debugbreak();
        mp_next = (ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> *)s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next;
        s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next = s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next->mp_next;
        v14 = 0;
        mp_next->m_data.m_buffer = NULL;
        mp_next->m_data.m_size = 0i64;
        v34 = v11;
        ntl::array<int,CG_PhysicsObject_PropagationValueAllocator>::reserve(mp_next, v11);
        *v12 = mp_next;
        v15 = Physics_GetNumRigidBodys((const Physics_WorldId)v4, *v9);
        v16 = 0;
        v37 = 0;
        if ( (int)v11 > 0 )
        {
          v17 = 0i64;
          v38 = 0i64;
          v18 = worldId;
          do
          {
            RigidBodyID = Physics_GetRigidBodyID(v18, *v39, v16);
            if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 387, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyIdFrom ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyIdFrom )") )
              __debugbreak();
            RigidBodyName = Physics_GetRigidBodyName(v18, RigidBodyID);
            if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 389, ASSERT_TYPE_ASSERT, "(bodyNameFrom)", (const char *)&queryFormat, "bodyNameFrom") )
              __debugbreak();
            if ( v14 < v15 )
            {
              while ( 2 )
              {
                v21 = *v9;
                if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                  __debugbreak();
                if ( (unsigned int)v4 > 7 )
                {
                  LODWORD(v32) = v4;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v32) )
                    __debugbreak();
                }
                if ( v21 == -1 )
                {
                  LODWORD(v32) = v4;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v32) )
                    __debugbreak();
                }
                if ( !g_physicsClientWorldsCreated && (unsigned int)(v4 - 2) <= 5 )
                {
                  LODWORD(v32) = v4;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v32) )
                    __debugbreak();
                }
                if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
                {
                  LODWORD(v32) = v4;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v32) )
                    __debugbreak();
                }
                m_serialAndIndex = HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldId, (const Physics_WorldId)v4, v21, v14)->m_serialAndIndex;
                if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 395, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyIdTo ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyIdTo )") )
                  __debugbreak();
                v23 = Physics_GetRigidBodyName((Physics_WorldId)v4, m_serialAndIndex);
                if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 397, ASSERT_TYPE_ASSERT, "(bodyNameTo)", (const char *)&queryFormat, "bodyNameTo") )
                  __debugbreak();
                v24 = 0x7FFFFFFFi64;
                if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                v25 = RigidBodyName - v23;
                while ( 1 )
                {
                  v26 = (unsigned __int8)v23[v25];
                  v27 = *(unsigned __int8 *)v23++;
                  if ( !v24-- )
                  {
LABEL_80:
                    v17 = v38;
                    if ( v14 >= v15 )
                      goto LABEL_94;
                    goto LABEL_81;
                  }
                  if ( v26 != v27 )
                  {
                    v29 = v26 + 32;
                    if ( (unsigned int)(v26 - 65) > 0x19 )
                      v29 = v26;
                    v26 = v29;
                    v30 = v27 + 32;
                    if ( (unsigned int)(v27 - 65) > 0x19 )
                      v30 = v27;
                    if ( v26 != v30 )
                      break;
                  }
                  if ( !v26 )
                    goto LABEL_80;
                }
                if ( ++v14 < v15 )
                  continue;
                break;
              }
              v17 = v38;
            }
LABEL_94:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 408, ASSERT_TYPE_ASSERT, "(bodyItTo < numRigidBodiesToMapTo)", (const char *)&queryFormat, "bodyItTo < numRigidBodiesToMapTo") )
              __debugbreak();
LABEL_81:
            v31 = *v33;
            if ( v17 >= (*v33)->m_data.m_size )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v17 >= v31->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            v31->m_data.m_buffer[v17] = v14;
            v16 = ++v37;
            v38 = ++v17;
          }
          while ( (__int64)v17 < v34 );
          v7 = v35;
        }
      }
    }
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
CG_PhysicsObject_DebugVelocities
==============
*/
void CG_PhysicsObject_DebugVelocities(const LocalClientNum_t localClientNum, Physics_WorldId worldId, unsigned int bodyId, const vec3_t *targetPosition, bool sameTransform, const char *prefix)
{
  int Ref; 
  int EntityNum; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  const char **v14; 
  const char *v15; 
  const dvar_t *v16; 
  const char *string; 
  bool v18; 
  const dvar_t *v19; 
  int integer; 
  bool v21; 
  const cpose_t *Pose; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  const HavokPhysicsWorld *ConstWorld; 
  float v29; 
  float v30; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  double v35; 
  vec3_t outOrigin; 
  vec3_t linVel; 
  int v38[4]; 
  vec3_t position; 
  vec4_t orientation; 

  if ( worldId != worldToDebug1 && worldId != worldToDebug2 )
    return;
  Ref = Physics_GetRef(worldId, bodyId);
  if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_CEntities )
    return;
  EntityNum = Physics_GetEntityNum(Ref);
  Entity = CG_GetEntity(localClientNum, EntityNum);
  if ( (Entity->flags & 1) == 0 || Entity->nextState.eType != ET_SCRIPTMOVER )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ClientDObj = Com_GetClientDObj(EntityNum, localClientNum);
  if ( ClientDObj && ClientDObj->numModels )
  {
    v14 = (const char **)*ClientDObj->models;
    if ( v14 )
    {
      v15 = *v14;
      goto LABEL_12;
    }
  }
  else
  {
    v14 = NULL;
  }
  v15 = "none";
LABEL_12:
  v16 = DVARSTR_physics_debugClientBodyVelocitiesModelSearchString;
  if ( !DVARSTR_physics_debugClientBodyVelocitiesModelSearchString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugClientBodyVelocitiesModelSearchString") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  string = v16->current.string;
  v18 = !string || !*string || v14 && I_strstr(v15, string);
  v19 = DCONST_DVARINT_physics_debugClientBodyVelocitiesEntNumber;
  if ( !DCONST_DVARINT_physics_debugClientBodyVelocitiesEntNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugClientBodyVelocitiesEntNumber") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  integer = v19->current.integer;
  v21 = integer != 2047 && (integer == 2048 || integer == EntityNum);
  if ( v18 && v21 )
  {
    Pose = CG_GetPose(localClientNum, EntityNum);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 567, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !Pose->prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
      __debugbreak();
    FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(Pose->prevOrigin.Get_prevOrigin, Pose);
    FunctionPointer_prevOrigin(&Pose->prevOrigin.prevOrigin, (vec3_t *)v38);
    CG_GetPoseOrigin(Pose, &outOrigin);
    v24 = 1000.0 / (float)LocalClientGlobals->frametime;
    v25 = (float)(outOrigin.v[0] - *(float *)v38) * v24;
    v26 = (float)(outOrigin.v[2] - *(float *)&v38[2]) * v24;
    v27 = (float)(outOrigin.v[1] - *(float *)&v38[1]) * v24;
    Physics_GetRigidBodyTransform(worldId, bodyId, &position, &orientation);
    Physics_GetRigidBodyLinVel(worldId, bodyId, &linVel);
    ConstWorld = HavokPhysics_GetConstWorld(worldId);
    v29 = linVel.v[1];
    v35 = linVel.v[1];
    v30 = linVel.v[0];
    *(double *)linVel.v = v25;
    LODWORD(v33) = LocalClientGlobals->time;
    LODWORD(v32) = bodyId;
    LODWORD(fmt) = worldId;
    Com_Printf(20, "%s local client: %d world: %d body: %u game time: %d frame time: %d world frame time: %d entnum: %d model: %s same transform: %d ent origin: %.2f %.2f %.2f physics current origin: %.2f %.2f %.2f target origin: %.2f %.2f %.2f ent speed %.2f physics speed %.2f ent velocity: %.2f %.2f %.2f physics velocity: %.2f %.2f %.2f \n", prefix, (unsigned int)localClientNum, fmt, v32, v33, LocalClientGlobals->frametime, (int)(float)(ConstWorld->timeStep * 1000.0), EntityNum, v15, sameTransform, outOrigin.v[0], outOrigin.v[1], outOrigin.v[2], position.v[0], position.v[1], position.v[2], targetPosition->v[0], targetPosition->v[1], targetPosition->v[2], fsqrt((float)((float)(v27 * v27) + (float)(v25 * v25)) + (float)(v26 * v26)), fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(linVel.v[2] * linVel.v[2])), v25, v27, v26, v30, v35, linVel.v[2]);
  }
}

/*
==============
CG_PhysicsObject_DestroyChildData
==============
*/
void CG_PhysicsObject_DestroyChildData(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  unsigned __int64 i; 
  __int16 *m_buffer; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyChildData");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 739, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 740, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 741, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->childEntities.m_data.m_size )
  {
    for ( i = 0i64; i < physObj->childEntities.m_data.m_size; ++i )
      ;
    m_buffer = physObj->childEntities.m_data.m_buffer;
    if ( m_buffer )
    {
      if ( !ntl::static_shared_allocator<CG_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      ntl::nxheap::free(&ntl::static_shared_allocator<CG_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator->m_heap, m_buffer);
      physObj->childEntities.m_data.m_buffer = NULL;
      physObj->childEntities.m_data.m_size = 0i64;
    }
    if ( !physObj->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 747, ASSERT_TYPE_ASSERT, "(physObj->serverDynamicBoneMapping.size() > 0)", (const char *)&queryFormat, "physObj->serverDynamicBoneMapping.size() > 0") )
      __debugbreak();
    ntl::array<PhysicsObjectCachedBoneMapping,CG_PhysicsObject_CachedBoneMappingAllocator>::clear_and_deallocate(&physObj->serverDynamicBoneMapping);
  }
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_DestroyDetailBoneMapping
==============
*/
void CG_PhysicsObject_DestroyDetailBoneMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  bool IsDetailWorld; 
  __int64 v7; 
  ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator> *v8; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyDetailBoneMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 828, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 829, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 830, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  IsDetailWorld = Physics_IsDetailWorld(worldId);
  v7 = 656i64;
  if ( IsDetailWorld )
    v7 = 640i64;
  v8 = (ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator> *)((char *)physObj + v7);
  if ( v8->m_data.m_size )
    ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator>::clear_and_deallocate(v8);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_DestroyDynamicBodyToPoseMapping
==============
*/
void CG_PhysicsObject_DestroyDynamicBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyDynamicBodyToPoseMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 580, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 581, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 582, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->clientDynamicBoneMapping.m_data.m_size )
    ntl::array<PhysicsObjectCachedBoneMapping,CG_PhysicsObject_CachedBoneMappingAllocator>::clear_and_deallocate(&physObj->clientDynamicBoneMapping);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping
==============
*/
void CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping(Physics_WorldId worldId, CG_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  unsigned __int64 i; 
  PhysicsObjectOffsetMapping *m_buffer; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyKeyframedBodyToPoseMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 718, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)(worldId - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 719, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 720, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->serverKeyframedBoneMapping.m_data.m_size )
    ntl::array<PhysicsObjectBoneMapping,CG_PhysicsObject_BoneMappingAllocator>::clear_and_deallocate(&physObj->serverKeyframedBoneMapping);
  if ( physObj->serverKeyframedOffsetMapping.m_data.m_size )
  {
    for ( i = 0i64; i < physObj->serverKeyframedOffsetMapping.m_data.m_size; ++i )
      ;
    m_buffer = physObj->serverKeyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer )
    {
      if ( !ntl::static_shared_allocator<CG_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      ntl::nxheap::free(&ntl::static_shared_allocator<CG_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator->m_heap, m_buffer);
      physObj->serverKeyframedOffsetMapping.m_data.m_buffer = NULL;
      physObj->serverKeyframedOffsetMapping.m_data.m_size = 0i64;
    }
  }
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_DestroyPhysicsChild
==============
*/
void CG_PhysicsObject_DestroyPhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  CG_PhysicsObject *v8; 
  unsigned __int64 v9; 
  __int64 v10; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyPhysicsChild");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1995, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->nextState.number;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v10) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  if ( ent != &EntitySystem->m_entities[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1996, ASSERT_TYPE_ASSERT, "(ent == CG_GetEntity( localClientNum, ent->nextState.number ))", (const char *)&queryFormat, "ent == CG_GetEntity( localClientNum, ent->nextState.number )") )
    __debugbreak();
  if ( ent->pose.eType != 22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1997, ASSERT_TYPE_ASSERT, "(ent->pose.eType == ET_PHYSICS_CHILD)", (const char *)&queryFormat, "ent->pose.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1998, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v8 = CG_PhysicsObject_Get(ent->prevOtherEntityNum, localClientNum);
  v9 = ent->prevPhysicsChildBodyIdx >> 16;
  if ( v8->childEntities.m_data.m_size > v9 && v8->childEntities.m_data.m_buffer[v9] == ent->nextState.number )
  {
    if ( v9 >= v8->childEntities.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v9 >= v8->childEntities.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v8->childEntities.m_data.m_buffer[v9] = 2047;
    if ( v9 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2011, ASSERT_TYPE_ASSERT, "(physObj->serverDynamicBoneMapping.size() > dynamicChildIdx)", (const char *)&queryFormat, "physObj->serverDynamicBoneMapping.size() > dynamicChildIdx") )
        __debugbreak();
      if ( v9 >= v8->serverDynamicBoneMapping.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v9 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
    }
    v8->serverDynamicBoneMapping.m_data.m_buffer[v9].bodyId = 0xFFFFFF;
  }
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_DestroyPropagationMapping
==============
*/
void CG_PhysicsObject_DestroyPropagationMapping(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, CG_PhysicsObject *physObj)
{
  __int64 v4; 
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> **v8; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> *v9; 
  unsigned __int64 i; 
  int *m_buffer; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v12; 

  v4 = toWorldId;
  v5 = fromWorldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_DestroyPropagationMapping");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 420, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( (_DWORD)v5 == (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 421, ASSERT_TYPE_ASSERT, "(fromWorldId != toWorldId)", (const char *)&queryFormat, "fromWorldId != toWorldId") )
    __debugbreak();
  if ( (unsigned int)(v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 422, ASSERT_TYPE_ASSERT, "(fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)(v4 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 423, ASSERT_TYPE_ASSERT, "(toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 424, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->physicsInstances[v5] == -1 || physObj->physicsInstances[v4] == -1 )
  {
    if ( physObj->propagationMappings[v5][v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 430, ASSERT_TYPE_ASSERT, "(!physObj->propagationMappings[fromWorldId][toWorldId])", (const char *)&queryFormat, "!physObj->propagationMappings[fromWorldId][toWorldId]") )
      __debugbreak();
  }
  else
  {
    v8 = &physObj->propagationMappings[v5][v4];
    v9 = *v8;
    if ( *v8 )
    {
      for ( i = 0i64; i < v9->m_data.m_size; ++i )
        ;
      m_buffer = v9->m_data.m_buffer;
      if ( v9->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<CG_PhysicsObject_PropagationValueAllocator,ntl::fixed_heap_allocator<65536,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<CG_PhysicsObject_PropagationValueAllocator,ntl::fixed_heap_allocator<65536,0>>::mp_allocator->m_heap, m_buffer);
        v9->m_data.m_buffer = NULL;
        v9->m_data.m_size = 0i64;
      }
      v12 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)*v8;
      if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      v12->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head;
      s_cg_physicsObject_PropagationArrayAllocator.m_freelist.m_head.mp_next = v12;
      *v8 = NULL;
    }
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
CG_PhysicsObject_FindBoneIndex
==============
*/
unsigned __int8 CG_PhysicsObject_FindBoneIndex(Physics_WorldId worldId, unsigned int bodyId, const DObj *dobj, const PhysicsAsset *physAsset)
{
  const char *RigidBodyName; 
  scr_string_t String; 
  __int64 v7; 
  unsigned __int64 v8; 
  scr_string_t v9; 
  scr_string_t v10; 
  unsigned __int8 result; 
  const char *v12; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 
  char _Buffer[256]; 

  RigidBodyName = Physics_GetRigidBodyName(worldId, bodyId);
  if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 476, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  j_sprintf(_Buffer, "%s_lod0", RigidBodyName);
  I_strlwr(_Buffer);
  String = SL_FindString(_Buffer);
  v7 = -1i64;
  do
    ++v7;
  while ( _Buffer[v7] );
  v8 = v7 - 5;
  if ( v8 >= 0x100 )
  {
    j___report_rangecheckfailure(v8);
    JUMPOUT(0x142697D80i64);
  }
  _Buffer[v8] = 0;
  v9 = SL_FindString(_Buffer);
  v10 = v9;
  if ( !String )
  {
    if ( !v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 492, ASSERT_TYPE_ASSERT, "(scrName1 != ( static_cast< scr_string_t >( 0 ) ) || scrName2 != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tCouldn't find a bone name %s - it's probably not in the skeleton", "scrName1 != NULL_SCR_STRING || scrName2 != NULL_SCR_STRING", _Buffer) )
        __debugbreak();
      goto LABEL_16;
    }
LABEL_14:
    inOutIndex[0] = -2;
    if ( DObjGetBoneIndexInternal_88(dobj, v10, inOutIndex, modelIndex) )
    {
      result = inOutIndex[0];
      if ( inOutIndex[0] != 0xFE )
        return result;
    }
    goto LABEL_16;
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_88(dobj, String, inOutIndex, modelIndex) )
  {
    result = inOutIndex[0];
    if ( inOutIndex[0] != 0xFE )
      return result;
  }
  if ( v10 )
    goto LABEL_14;
LABEL_16:
  if ( dobj && dobj->numModels )
    v12 = **(const char ***)dobj->models;
  else
    v12 = "Unknown";
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 500, ASSERT_TYPE_ASSERT, "(index != 254)", "%s\n\tCouldn't find bone %s in model %s", "index != UNDEFINED_BONEINDEX", RigidBodyName, v12) )
    __debugbreak();
  return -1;
}

/*
==============
CG_PhysicsObject_Get
==============
*/
CG_PhysicsObject *CG_PhysicsObject_Get(int entNum, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = entNum;
  v3 = localClientNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( s_physicsObject_NumCEntityPhysObjs )", "entNum doesn't index s_physicsObject_NumCEntityPhysObjs\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  if ( ((int)v3 < 0 || (int)v3 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 232, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  return &s_centityPhyObjs[v3][v2];
}

/*
==============
CG_PhysicsObject_GetBase
==============
*/
CG_PhysicsObject *CG_PhysicsObject_GetBase(int entNum, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = entNum;
  v3 = localClientNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 241, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( s_physicsObject_NumCEntityPhysObjs )", "entNum doesn't index s_physicsObject_NumCEntityPhysObjs\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  if ( ((int)v3 < 0 || (int)v3 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 242, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  return &s_centityPhyObjs[v3][v2];
}

/*
==============
CG_PhysicsObject_GetInstance
==============
*/
__int64 CG_PhysicsObject_GetInstance(Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  CG_PhysicsObject *v4; 

  v3 = worldId;
  v4 = CG_PhysicsObject_Get(entNum, localClientNum);
  if ( v4 )
    return v4->physicsInstances[v3];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 251, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return *(unsigned int *)(4 * v3 + 4);
}

/*
==============
CG_PhysicsObject_Init
==============
*/
void CG_PhysicsObject_Init(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  vec3_t *MemoryBuffer; 
  CG_PhysicsObject *v4; 
  vec3_t *v5; 
  __int64 i; 

  if ( s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 99, ASSERT_TYPE_ASSERT, "(!s_physicsObject_CInitialized)", (const char *)&queryFormat, "!s_physicsObject_CInitialized") )
    __debugbreak();
  s_physicsObject_CInitialized = 1;
  v0 = 0i64;
  v1 = 0i64;
  v2 = 2i64;
  do
  {
    if ( s_centityPhyObjs[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 105, ASSERT_TYPE_ASSERT, "(!s_centityPhyObjs[localClientNum])", (const char *)&queryFormat, "!s_centityPhyObjs[localClientNum]") )
      __debugbreak();
    if ( s_centityPhyObjPredictivePositions[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 106, ASSERT_TYPE_ASSERT, "(!s_centityPhyObjPredictivePositions[localClientNum])", (const char *)&queryFormat, "!s_centityPhyObjPredictivePositions[localClientNum]") )
      __debugbreak();
    if ( s_centityPhyObjPredictiveAngles[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 107, ASSERT_TYPE_ASSERT, "(!s_centityPhyObjPredictiveAngles[localClientNum])", (const char *)&queryFormat, "!s_centityPhyObjPredictiveAngles[localClientNum]") )
      __debugbreak();
    s_centityPhyObjs[v1] = (CG_PhysicsObject *)Physics_AllocateMemoryBuffer(0x170000ui64, "s_gentityPhyObjs");
    *(_QWORD *)s_centityPhyObjUsed[v0].array = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[2] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[4] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[6] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[8] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[10] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[12] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[14] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[16] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[18] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[20] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[22] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[24] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[26] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[28] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[30] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[32] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[34] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[36] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[38] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[40] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[42] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[44] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[46] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[48] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[50] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[52] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[54] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[56] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[58] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[60] = 0i64;
    *(_QWORD *)&s_centityPhyObjUsed[v0].array[62] = 0i64;
    *(_QWORD *)s_centityPhyObjShown[v0].array = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[2] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[4] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[6] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[8] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[10] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[12] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[14] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[16] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[18] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[20] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[22] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[24] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[26] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[28] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[30] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[32] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[34] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[36] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[38] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[40] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[42] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[44] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[46] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[48] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[50] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[52] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[54] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[56] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[58] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[60] = 0i64;
    *(_QWORD *)&s_centityPhyObjShown[v0].array[62] = 0i64;
    *(_QWORD *)s_centityPhyObjMovable[v0].array = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[2] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[4] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[6] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[8] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[10] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[12] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[14] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[16] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[18] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[20] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[22] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[24] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[26] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[28] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[30] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[32] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[34] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[36] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[38] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[40] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[42] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[44] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[46] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[48] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[50] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[52] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[54] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[56] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[58] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[60] = 0i64;
    *(_QWORD *)&s_centityPhyObjMovable[v0].array[62] = 0i64;
    s_centityPhyObjPredictivePositions[v1] = (vec3_t *)Physics_AllocateMemoryBuffer(0x6000ui64, "s_centityPhyObjPredictivePositions");
    MemoryBuffer = (vec3_t *)Physics_AllocateMemoryBuffer(0x6000ui64, "s_centityPhyObjPredictiveAngles");
    v4 = s_centityPhyObjs[v1];
    s_centityPhyObjPredictiveAngles[v1] = MemoryBuffer;
    v5 = MemoryBuffer;
    memset_0(v4, 0, 0x170000ui64);
    memset_0(s_centityPhyObjPredictivePositions[v1], 0, 0x6000ui64);
    memset_0(v5, 0, 0x6000ui64);
    for ( i = 2i64; i < 376834; i += 184i64 )
    {
      *(_QWORD *)((char *)v4 + i * 4 - 4) = -1i64;
      *(_QWORD *)&v4->physicsInstances[i] = -1i64;
      *(_QWORD *)&v4->physicsInstances[i + 2] = -1i64;
      *(_QWORD *)&v4->physicsInstances[i + 4] = -1i64;
    }
    ++v0;
    ++v1;
    --v2;
  }
  while ( v2 );
  ntl::static_shared_allocator<CG_PhysicsObject_PropagationValueAllocator,ntl::fixed_heap_allocator<65536,0>>::mp_allocator = &s_cg_physicsObject_PropagationValueAllocator;
  ntl::static_shared_allocator<CG_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator = &s_cg_PhysicsObject_OffsetMappingAllocator;
  ntl::static_shared_allocator<CG_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator = &s_cg_PhysicsObject_BoneMappingAllocator;
  ntl::static_shared_allocator<CG_PhysicsObject_CachedBoneMappingAllocator,ntl::fixed_heap_allocator<1114112,0>>::mp_allocator = &s_cg_PhysicsObject_CachedBoneMappingAllocator;
  ntl::static_shared_allocator<CG_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator = &s_cg_PhysicsObject_ChildEntityAllocator;
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectMovable
==============
*/
bool CG_PhysicsObject_IsPhysicsObjectMovable(LocalClientNum_t localClientNum, __int16 entNum)
{
  return bitarray_base<bitarray<2048>>::testBit(&s_centityPhyObjMovable[(__int64)(int)localClientNum], entNum);
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectShown
==============
*/
bool CG_PhysicsObject_IsPhysicsObjectShown(LocalClientNum_t localClientNum, __int16 entNum)
{
  return bitarray_base<bitarray<2048>>::testBit(&s_centityPhyObjShown[(__int64)(int)localClientNum], entNum);
}

/*
==============
CG_PhysicsObject_IsPhysicsObjectUsed
==============
*/
bool CG_PhysicsObject_IsPhysicsObjectUsed(LocalClientNum_t localClientNum, __int16 entNum)
{
  return bitarray_base<bitarray<2048>>::testBit(&s_centityPhyObjUsed[(__int64)(int)localClientNum], entNum);
}

/*
==============
CG_PhysicsObject_LaunchClient
==============
*/
void CG_PhysicsObject_LaunchClient(Physics_WorldId worldId, const centity_t *cent, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  CG_PhysicsObject *v6; 
  unsigned int v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v13; 
  signed int v16; 
  int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  __int64 v19; 
  hknpBodyId result; 
  vec3_t normalizedDirection; 
  vec3_t position; 

  v3 = worldId;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2385, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2386, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2387, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v6 = CG_PhysicsObject_Get(cent->nextState.number, localClientNum);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2391, ASSERT_TYPE_ASSERT, "(physObject)", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v7 = v6->physicsInstances[v3];
  if ( v7 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2393, ASSERT_TYPE_ASSERT, "(physInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v8 = cent->prevState.pos.trDelta.v[1];
  v9 = cent->prevState.apos.trDelta.v[0];
  v10 = LODWORD(cent->prevState.apos.trDelta.v[1]);
  v11 = cent->prevState.apos.trDelta.v[2];
  position.v[0] = cent->prevState.pos.trDelta.v[0];
  position.v[2] = cent->prevState.pos.trDelta.v[2];
  position.v[1] = v8;
  v13 = v10;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9)) + (float)(v11 * v11));
  _XMM6 = v13;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM0) * v9;
  normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM0) * v11;
  normalizedDirection.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v10;
  v16 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v3, v7);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v3 > 7 )
      {
        LODWORD(v19) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v19) )
          __debugbreak();
      }
      if ( v7 == -1 )
      {
        LODWORD(v19) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
      {
        LODWORD(v19) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v19) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
      {
        LODWORD(v19) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, v7, v16)->m_serialAndIndex;
      Physics_ActivateBody((Physics_WorldId)v3, m_serialAndIndex);
      Physics_ApplyImpulse((Physics_WorldId)v3, m_serialAndIndex, &position, &normalizedDirection, *(float *)&v13);
      ++v16;
    }
    while ( v16 < NumRigidBodys );
  }
}

/*
==============
CG_PhysicsObject_Load
==============
*/
void CG_PhysicsObject_Load(SaveGame *save)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v2; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v2 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_Load");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 209, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( v2 )
    hkMonitorStream::timerEnd(v2, "Et");
}

/*
==============
CG_PhysicsObject_MapPose
==============
*/
void CG_PhysicsObject_MapPose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits, int physicsObjectId, LocalClientNum_t localClientNum)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v10; 
  DObjAnimMat *RotTransArray; 
  __int64 v12; 
  CG_PhysicsObject *v13; 
  float v14; 
  float v15; 
  float v16; 
  PhysicsObjectCachedBoneMapping *m_buffer; 
  unsigned __int8 boneIndex; 
  unsigned __int8 numBones; 
  DObjAnimMat *v20; 
  __int64 currentCache; 
  vec4_t *v22; 
  PhysicsObjectCachedBoneMapping *v28; 
  unsigned __int8 v29; 
  unsigned __int8 v30; 
  DObjAnimMat *v31; 
  __int64 v32; 
  vec4_t *v33; 
  __int64 v39; 
  __int64 v40; 

  v5 = physicsObjectId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_MapPose");
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2118, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2119, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2120, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2121, ASSERT_TYPE_ASSERT, "(physicsObjectId != CG_POSE_PHYSICS_ID_INVALID)", (const char *)&queryFormat, "physicsObjectId != CG_POSE_PHYSICS_ID_INVALID") )
    __debugbreak();
  if ( (unsigned int)(v5 - 1) >= 0x800 )
  {
    LODWORD(v39) = v5 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2122, ASSERT_TYPE_ASSERT, "(unsigned)( physicsObjectId - 1 ) < (unsigned)( s_physicsObject_NumCEntityPhysObjs )", "physicsObjectId - 1 doesn't index s_physicsObject_NumCEntityPhysObjs\n\t%i not in [0, %i)", v39, 2048) )
      __debugbreak();
  }
  if ( obj->numBones )
  {
    RotTransArray = DObjGetRotTransArray(obj);
    if ( RotTransArray )
    {
      v12 = v5;
      v13 = s_centityPhyObjs[localClientNum];
      if ( v13[v5 - 1].clientDynamicBoneMapping.m_data.m_size + v13[v5 - 1].serverDynamicBoneMapping.m_data.m_size )
      {
        Profile_Begin(688);
        v14 = g_activeRefDef->viewOffset.v[0];
        v15 = g_activeRefDef->viewOffset.v[1];
        v16 = g_activeRefDef->viewOffset.v[2];
        m_buffer = v13[v12 - 1].serverDynamicBoneMapping.m_data.m_buffer;
        if ( m_buffer != &m_buffer[v13[v12 - 1].serverDynamicBoneMapping.m_data.m_size] )
        {
          do
          {
            if ( (m_buffer->bodyId & 0xFFFFFF) != 0xFFFFFF )
            {
              boneIndex = m_buffer->boneIndex;
              numBones = obj->numBones;
              if ( boneIndex >= numBones )
              {
                LODWORD(v40) = numBones;
                LODWORD(v39) = boneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2159, ASSERT_TYPE_ASSERT, "(unsigned)( mapping->boneIndex ) < (unsigned)( obj->numBones )", "mapping->boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v39, v40) )
                  __debugbreak();
              }
              if ( DObjSetSkelRotTransIndex(obj, partBits, m_buffer->boneIndex) )
              {
                v20 = &RotTransArray[m_buffer->boneIndex];
                currentCache = m_buffer->currentCache;
                v20->trans.v[0] = m_buffer->cachedPosition[currentCache].v[0] - v14;
                v20->trans.v[1] = m_buffer->cachedPosition[currentCache].v[1] - v15;
                v20->trans.v[2] = m_buffer->cachedPosition[currentCache].v[2] - v16;
                v22 = &m_buffer->cachedOrientationAsQuat[currentCache];
                v20->quat.v[0] = v22->v[0];
                v20->quat.v[1] = v22->v[1];
                v20->quat.v[2] = v22->v[2];
                _XMM3 = v20->quat;
                __asm { vinsertps xmm3, xmm3, dword ptr [rcx+0Ch], 30h ; '0' }
                _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
                __asm
                {
                  vhaddps xmm1, xmm0, xmm0
                  vhaddps xmm2, xmm1, xmm1
                }
                v20->quat = (vec4_t)_mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM2));
                v20->transWeight = 2.0;
              }
            }
            ++m_buffer;
          }
          while ( m_buffer != &v13[v12 - 1].serverDynamicBoneMapping.m_data.m_buffer[v13[v12 - 1].serverDynamicBoneMapping.m_data.m_size] );
        }
        v28 = v13[v12 - 1].clientDynamicBoneMapping.m_data.m_buffer;
        if ( v28 != &v28[v13[v12 - 1].clientDynamicBoneMapping.m_data.m_size] )
        {
          do
          {
            if ( (v28->bodyId & 0xFFFFFF) != 0xFFFFFF )
            {
              v29 = v28->boneIndex;
              v30 = obj->numBones;
              if ( v29 >= v30 )
              {
                LODWORD(v40) = v30;
                LODWORD(v39) = v29;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2188, ASSERT_TYPE_ASSERT, "(unsigned)( mapping->boneIndex ) < (unsigned)( obj->numBones )", "mapping->boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v39, v40) )
                  __debugbreak();
              }
              if ( DObjSetSkelRotTransIndex(obj, partBits, v28->boneIndex) )
              {
                v31 = &RotTransArray[v28->boneIndex];
                v32 = v28->currentCache;
                v31->trans.v[0] = v28->cachedPosition[v32].v[0] - v14;
                v31->trans.v[1] = v28->cachedPosition[v32].v[1] - v15;
                v31->trans.v[2] = v28->cachedPosition[v32].v[2] - v16;
                v33 = &v28->cachedOrientationAsQuat[v32];
                v31->quat.v[0] = v33->v[0];
                v31->quat.v[1] = v33->v[1];
                v31->quat.v[2] = v33->v[2];
                _XMM3 = v31->quat;
                __asm { vinsertps xmm3, xmm3, dword ptr [rcx+0Ch], 30h ; '0' }
                _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
                __asm
                {
                  vhaddps xmm1, xmm0, xmm0
                  vhaddps xmm2, xmm1, xmm1
                }
                v31->quat = (vec4_t)_mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM2));
                v31->transWeight = 2.0;
              }
            }
            ++v28;
          }
          while ( v28 != &v13[v12 - 1].clientDynamicBoneMapping.m_data.m_buffer[v13[v12 - 1].clientDynamicBoneMapping.m_data.m_size] );
        }
        Profile_EndInternal(NULL);
      }
    }
  }
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsMovable
==============
*/
void CG_PhysicsObject_MarkPhysicsObjectAsMovable(LocalClientNum_t localClientNum, __int16 entNum, bool movable)
{
  bitarray_base<bitarray<2048>>::setBitTo(&s_centityPhyObjMovable[(__int64)(int)localClientNum], entNum, movable);
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsShown
==============
*/
void CG_PhysicsObject_MarkPhysicsObjectAsShown(LocalClientNum_t localClientNum, __int16 entNum, bool shown)
{
  bitarray_base<bitarray<2048>>::setBitTo(&s_centityPhyObjShown[(__int64)(int)localClientNum], entNum, shown);
}

/*
==============
CG_PhysicsObject_MarkPhysicsObjectAsUsed
==============
*/
void CG_PhysicsObject_MarkPhysicsObjectAsUsed(LocalClientNum_t localClientNum, __int16 entNum, bool used)
{
  bitarray_base<bitarray<2048> > *v4; 
  unsigned int v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  v4 = &s_centityPhyObjUsed[(__int64)(int)localClientNum];
  v5 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v9 = 2048;
    v7 = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v9) )
      __debugbreak();
  }
  if ( (((0x80000000 >> (v5 & 0x1F)) & *(_DWORD *)&v4[4 * ((unsigned __int64)v5 >> 5)]) != 0) == used )
  {
    v6 = "Unused";
    if ( used )
      v6 = "Used";
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 273, ASSERT_TYPE_ASSERT, "(s_centityPhyObjUsed[localClientNum].testBit( entNum ) != used)", "%s\n\tCG_PhysicsObject_MarkPhysicsObjectAsUsed: Ent num %i is %s already", "s_centityPhyObjUsed[localClientNum].testBit( entNum ) != used", v8, v6) )
      __debugbreak();
  }
  bitarray_base<bitarray<2048>>::setBitTo(v4, v5, used);
}

/*
==============
CG_PhysicsObject_MatchSnapshot
==============
*/
void CG_PhysicsObject_MatchSnapshot(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  hkMonitorStream *Value; 
  __int64 v3; 
  int v4; 
  int *v5; 
  __int64 v6; 
  __int64 v7; 
  int *v8; 
  __int64 v9; 
  int *v10; 
  bitarray<2048> *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  CG_PhysicsObject *v16; 
  trType_t trType; 
  bool v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned int m_serialAndIndex; 
  unsigned int v23; 
  int v24; 
  CG_PhysicsObject *v25; 
  bool v26; 
  bool IsTriggerVolume; 
  bool v28; 
  bool v29; 
  char *v30; 
  int *v31; 
  _QWORD *v32; 
  char *v33; 
  int *v34; 
  unsigned __int64 v35; 
  ThreadContext CurrentThreadContext; 
  int v37; 
  unsigned int *v38; 
  __int16 v39; 
  unsigned int v40; 
  int v41; 
  unsigned int *v42; 
  __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned __int64 v50; 
  const PhysicsAsset *InstanceAsset; 
  int NumServerRigidBodysInAsset; 
  unsigned int v53; 
  bool v54; 
  __int64 v55; 
  __int64 v56; 
  unsigned int v57; 
  hkMonitorStream *v58; 
  int v59; 
  Physics_WorldId v60; 
  Physics_WorldId v61; 
  __int64 v62; 
  unsigned int v63; 
  signed int v64; 
  __int64 v65; 
  CG_PhysicsObject *v66; 
  const centity_t *v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  bitarray<2048> *v73; 
  int asset; 
  PhysicsAsset *asseta; 
  hknpBodyId result[2]; 
  Physics_WorldId toWorldId; 
  LocalClientNum_t localClientNuma; 
  __int64 v79; 
  CgEntitySystem *EntitySystem; 
  Physics_WorldId worldId; 
  __int64 v82; 
  hkMonitorStream *v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  int v88[64]; 
  int v89[64]; 
  int v90[64]; 

  v86 = -2i64;
  v1 = localClientNum;
  localClientNuma = localClientNum;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = (__int64)Value;
  v83 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_MatchSnapshot");
  v87 = v3;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 858, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( ((int)v1 < 0 || (int)v1 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 859, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v4 = 3 * v1;
  toWorldId = 3 * v1 + 3;
  worldId = 3 * v1 + 2;
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 881, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  *(_QWORD *)&result[0].m_serialAndIndex = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !*(_QWORD *)&result[0].m_serialAndIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 885, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Profile_Begin(675);
  v85 = 0i64;
  v5 = v88;
  v6 = 4i64;
  v7 = 4i64;
  do
  {
    *(_QWORD *)v5 = 0i64;
    *((_QWORD *)v5 + 1) = 0i64;
    *((_QWORD *)v5 + 2) = 0i64;
    v5 += 16;
    *((_QWORD *)v5 - 5) = 0i64;
    *((_QWORD *)v5 - 4) = 0i64;
    *((_QWORD *)v5 - 3) = 0i64;
    *((_QWORD *)v5 - 2) = 0i64;
    *((_QWORD *)v5 - 1) = 0i64;
    --v7;
  }
  while ( v7 );
  v8 = v89;
  v9 = 4i64;
  do
  {
    *(_QWORD *)v8 = 0i64;
    *((_QWORD *)v8 + 1) = 0i64;
    *((_QWORD *)v8 + 2) = 0i64;
    v8 += 16;
    *((_QWORD *)v8 - 5) = 0i64;
    *((_QWORD *)v8 - 4) = 0i64;
    *((_QWORD *)v8 - 3) = 0i64;
    *((_QWORD *)v8 - 2) = 0i64;
    *((_QWORD *)v8 - 1) = 0i64;
    --v9;
  }
  while ( v9 );
  v10 = v90;
  do
  {
    *(_QWORD *)v10 = 0i64;
    *((_QWORD *)v10 + 1) = 0i64;
    *((_QWORD *)v10 + 2) = 0i64;
    v10 += 16;
    *((_QWORD *)v10 - 5) = 0i64;
    *((_QWORD *)v10 - 4) = 0i64;
    *((_QWORD *)v10 - 3) = 0i64;
    *((_QWORD *)v10 - 2) = 0i64;
    *((_QWORD *)v10 - 1) = 0i64;
    --v6;
  }
  while ( v6 );
  v79 = v1;
  v82 = v1 << 8;
  v11 = &s_centityPhyObjUsed[v1];
  v73 = v11;
  LODWORD(v1) = 0;
  v12 = v11->array[0];
  v84 = v4 + 2i64;
  v13 = *(_QWORD *)&result[0].m_serialAndIndex;
  while ( v12 )
  {
LABEL_26:
    v14 = __lzcnt(v12);
    v15 = v14 + 32 * v1;
    if ( v14 >= 0x20 )
    {
      LODWORD(v70) = 32;
      LODWORD(v69) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( (v12 & (0x80000000 >> v14)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 &= ~(0x80000000 >> v14);
    v16 = &s_centityPhyObjs[v79][v15];
    *(_QWORD *)&result[0].m_serialAndIndex = v16;
    if ( v15 >= 0x800 )
    {
      LODWORD(v70) = 2048;
      LODWORD(v69) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)EntitySystem + 760 * (int)v15) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 906, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    trType = EntitySystem->m_entities[v15].prevState.pos.trType;
    v18 = *(_DWORD *)(v13 + 296) == EntitySystem->m_entities[v15].nextState.number && CgVehicleSystem::PhysicsIsValidVehicle(localClientNuma, &EntitySystem->m_entities[v15]);
    if ( v16->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
    {
      if ( (unsigned int)(trType - 11) <= 1 || v18 )
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v88[(unsigned __int64)v15 >> 5] &= ~(0x80000000 >> (v15 & 0x1F));
      }
      else
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v88[(unsigned __int64)v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
      }
    }
    else if ( v16->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH )
    {
      if ( (unsigned int)(trType - 11) <= 1 || v18 )
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v89[(unsigned __int64)v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
      }
      else
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v89[(unsigned __int64)v15 >> 5] &= ~(0x80000000 >> (v15 & 0x1F));
      }
    }
    if ( trType == TR_PHYSICS_CLIENT_AUTH )
    {
      if ( v16->physicsInstances[v84] == -1 )
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v90[(unsigned __int64)v15 >> 5] &= ~(0x80000000 >> (v15 & 0x1F));
      }
      else
      {
        if ( v15 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        v90[(unsigned __int64)v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
      }
    }
    if ( v15 >= 0x800 )
    {
      LODWORD(v70) = 2048;
      LODWORD(v69) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
        __debugbreak();
    }
    v19 = 0x80000000 >> (v15 & 0x1F);
    v20 = (unsigned __int64)v15 >> 5;
    if ( (v19 & v88[v20]) == 0 )
    {
      if ( v15 >= 0x800 )
      {
        LODWORD(v70) = 2048;
        LODWORD(v69) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
          __debugbreak();
      }
      v11 = v73;
      if ( (v19 & v89[v20]) == 0 )
        continue;
    }
    if ( v15 >= 0x800 )
    {
      LODWORD(v70) = 2048;
      LODWORD(v69) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
        __debugbreak();
    }
    **(_DWORD **)&result[0].m_serialAndIndex = (v19 & v88[v20]) == 0;
    v11 = v73;
  }
  while ( 1 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x40 )
      break;
    v12 = v11->array[v1];
    if ( v12 )
      goto LABEL_26;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(677);
  LODWORD(v21) = 0;
  asset = 0;
  m_serialAndIndex = v11->array[0];
  while ( m_serialAndIndex )
  {
LABEL_91:
    v23 = __lzcnt(m_serialAndIndex);
    v24 = v23 + 32 * v21;
    if ( v23 >= 0x20 )
    {
      LODWORD(v70) = 32;
      LODWORD(v69) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( (m_serialAndIndex & (0x80000000 >> v23)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    m_serialAndIndex &= ~(0x80000000 >> v23);
    result[0].m_serialAndIndex = m_serialAndIndex;
    v25 = &s_centityPhyObjs[v79][v24];
    if ( (unsigned int)v24 >= 0x800 )
    {
      LODWORD(v70) = 2048;
      LODWORD(v69) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)EntitySystem + 760 * v24) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 948, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    v26 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntitySystem->m_entities[v24].prevState.eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&EntitySystem->m_entities[v24].prevState.eFlags, ACTIVE, 0);
    IsTriggerVolume = CG_Entity_IsTriggerVolume(&EntitySystem->m_entities[v24]);
    v28 = v26 && !IsTriggerVolume;
    if ( (unsigned int)(v24 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v24, "signed", v24) )
      __debugbreak();
    v29 = bitarray_base<bitarray<2048>>::testBit((bitarray<2048> *)((char *)s_centityPhyObjShown + v82), (__int16)v24);
    LODWORD(v21) = asset;
    if ( v29 )
    {
      if ( v28 )
      {
        v30 = (char *)Sys_GetValue(0);
        v31 = (int *)(v30 + 29216);
        if ( (unsigned int)(*((_DWORD *)v30 + 7304) + 1) >= 3 )
        {
          LODWORD(v70) = 3;
          LODWORD(v69) = *((_DWORD *)v30 + 7304) + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v69, v70) )
            __debugbreak();
        }
        if ( (unsigned int)++*v31 >= 3 )
        {
          LODWORD(v70) = 3;
          LODWORD(v69) = *v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v69, v70) )
            __debugbreak();
        }
        v32 = v30 + 2088;
        v33 = v30 + 40;
        if ( *v32 < (unsigned __int64)v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        *v32 += 8i64;
        if ( *v32 >= (unsigned __int64)v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
          __debugbreak();
        *(_QWORD *)*v32 = v31;
        if ( *v32 <= (unsigned __int64)v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        v34 = &v31[*v31 + 2];
        v35 = __rdtsc();
        *v34 = v35;
        if ( Sys_HasValidCurrentThreadContext() )
          CurrentThreadContext = Sys_GetCurrentThreadContext();
        else
          CurrentThreadContext = THREAD_CONTEXT_COUNT;
        CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 678, NULL, 0);
        if ( (unsigned int)(v24 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v24, "signed", v24) )
          __debugbreak();
        if ( (unsigned int)(__int16)v24 >= 0x800 )
        {
          LODWORD(v72) = 2048;
          LODWORD(v71) = (__int16)v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
            __debugbreak();
        }
        *(unsigned int *)((char *)&s_centityPhyObjShown[0].array[(unsigned __int64)(unsigned int)(__int16)v24 >> 5] + v82) &= ~(0x80000000 >> (v24 & 0x1F));
        v37 = 2;
        v38 = &v25->physicsInstances[2];
        do
        {
          if ( *v38 != -1 )
            Physics_RemoveInstanceFromWorld((Physics_WorldId)v37, *v38, 1);
          ++v37;
          ++v38;
        }
        while ( v37 <= 7 );
        Profile_EndInternal(NULL);
        LODWORD(v21) = asset;
        m_serialAndIndex = result[0].m_serialAndIndex;
      }
    }
    else if ( !v28 )
    {
      Profile_Begin(679);
      v39 = truncate_cast<short,int>(v24);
      v40 = v39;
      if ( (unsigned int)v39 >= 0x800 )
      {
        LODWORD(v72) = 2048;
        LODWORD(v71) = v39;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v71, v72) )
          __debugbreak();
      }
      *(unsigned int *)((char *)&s_centityPhyObjShown[0].array[(unsigned __int64)v40 >> 5] + v82) |= 0x80000000 >> (v40 & 0x1F);
      v41 = 2;
      v42 = &v25->physicsInstances[2];
      do
      {
        if ( *v42 != -1 )
          Physics_AddInstanceToWorld((Physics_WorldId)v41, *v42, 0, 1);
        ++v41;
        ++v42;
      }
      while ( v41 <= 7 );
      Profile_EndInternal(NULL);
      LODWORD(v21) = asset;
    }
    v11 = v73;
  }
  while ( 1 )
  {
    v21 = (unsigned int)(v21 + 1);
    asset = v21;
    if ( (unsigned int)v21 >= 0x40 )
      break;
    m_serialAndIndex = v11->array[v21];
    if ( m_serialAndIndex )
      goto LABEL_91;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(680);
  LODWORD(v43) = 0;
  v44 = v11->array[0];
  v45 = toWorldId;
  while ( v44 )
  {
LABEL_159:
    v46 = __lzcnt(v44);
    v47 = v46 + 32 * v43;
    if ( v46 >= 0x20 )
    {
      LODWORD(v70) = 32;
      LODWORD(v69) = v46;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v46) & v44) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v44 &= ~(0x80000000 >> v46);
    v48 = s_centityPhyObjs[v79][v47].physicsInstances[v45];
    if ( v48 != -1 )
    {
      if ( v47 >= 0x800 )
      {
        LODWORD(v70) = 2048;
        LODWORD(v69) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
          __debugbreak();
      }
      v49 = 0x80000000 >> (v47 & 0x1F);
      v50 = (unsigned __int64)v47 >> 5;
      if ( (v49 & v88[v50]) != 0 )
        goto LABEL_174;
      if ( v47 >= 0x800 )
      {
        LODWORD(v70) = 2048;
        LODWORD(v69) = v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
          __debugbreak();
      }
      if ( (v49 & v89[v50]) != 0 )
      {
LABEL_174:
        InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v45, v48);
        asseta = (PhysicsAsset *)InstanceAsset;
        if ( !InstanceAsset )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1027, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
            __debugbreak();
          InstanceAsset = NULL;
        }
        NumServerRigidBodysInAsset = Physics_GetNumServerRigidBodysInAsset(InstanceAsset);
        if ( NumServerRigidBodysInAsset != 1 )
        {
          LODWORD(v70) = NumServerRigidBodysInAsset;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1032, ASSERT_TYPE_ASSERT, "(numRBs == 1)", "%s\n\tCG_PhysicsObject type swapping only supports one serverside rigid-body per instance at the moment. Num rigid bodies: %i, Asset name: %s", "numRBs == 1", v70, asseta->name) )
            __debugbreak();
        }
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v45 > 7 )
        {
          LODWORD(v70) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v70) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v45 - 2) <= 5 )
        {
          LODWORD(v70) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v70) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v45 <= 1 )
        {
          LODWORD(v70) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v70) )
            __debugbreak();
        }
        v53 = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v45, v48, 0)->m_serialAndIndex;
        if ( (v53 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1035, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( v47 >= 0x800 )
        {
          LODWORD(v70) = 2048;
          LODWORD(v69) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
            __debugbreak();
        }
        if ( (v49 & v88[v50]) != 0 && Physics_IsRigidBodyDynamic((Physics_WorldId)v45, v53) )
        {
          Physics_SetRigidBodyKeyframed((Physics_WorldId)v45, v53);
          goto LABEL_155;
        }
        if ( v47 >= 0x800 )
        {
          LODWORD(v70) = 2048;
          LODWORD(v69) = v47;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
            __debugbreak();
        }
        v54 = (v49 & v89[v50]) == 0;
        v11 = v73;
        if ( !v54 )
        {
          if ( v47 >= 0x800 )
          {
            LODWORD(v70) = 2048;
            LODWORD(v69) = v47;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v69, v70) )
              __debugbreak();
          }
          v55 = (int)v47;
          v56 = (__int64)&EntitySystem->m_entities[v55];
          if ( (CgEntitySystem *)((char *)EntitySystem + v55 * 760) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1047, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
            __debugbreak();
          if ( *(_DWORD *)(v56 + 292) == 12 )
          {
            if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v45, v53) )
              Physics_SetRigidBodyKeyframed((Physics_WorldId)v45, v53);
          }
          else
          {
            Physics_SetRigidBodyToDefault((Physics_WorldId)v45, v53, asseta, 0);
          }
        }
      }
      else
      {
LABEL_155:
        v11 = v73;
      }
    }
  }
  while ( 1 )
  {
    v43 = (unsigned int)(v43 + 1);
    if ( (unsigned int)v43 >= 0x40 )
      break;
    v44 = v11->array[v43];
    if ( v44 )
      goto LABEL_159;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(676);
  v57 = v90[0];
  v58 = v83;
  v59 = v85;
  v60 = toWorldId;
  v61 = worldId;
  while ( v57 )
  {
LABEL_222:
    v63 = __lzcnt(v57);
    v64 = v63 + 32 * v59;
    if ( v63 >= 0x20 )
    {
      LODWORD(v70) = 32;
      LODWORD(v69) = v63;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v63) & v57) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v57 &= ~(0x80000000 >> v63);
    v65 = v64;
    v66 = &s_centityPhyObjs[v79][v64];
    if ( (unsigned int)v64 >= 0x800 )
    {
      LODWORD(v70) = 2048;
      LODWORD(v69) = v64;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v69, v70) )
        __debugbreak();
    }
    v67 = &EntitySystem->m_entities[v64];
    if ( (CgEntitySystem *)((char *)EntitySystem + 760 * v65) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1079, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    v68 = v84;
    Physics_DestroyInstance(v61, v66->physicsInstances[v84], 0);
    v66->primaryBodies[0] = 0xFFFFFF;
    CG_PhysicsObject_DestroyPropagationMapping(v61, v60, v66);
    v66->physicsInstances[v68] = -1;
    CG_PhysicsObject_LaunchClient(v60, v67, localClientNuma);
  }
  while ( 1 )
  {
    v62 = (unsigned int)(v59 + 1);
    v59 = v62;
    if ( (unsigned int)v62 >= 0x40 )
      break;
    v57 = v90[v62];
    if ( v57 )
      goto LABEL_222;
  }
  Profile_EndInternal(NULL);
  if ( v58 )
    hkMonitorStream::timerEnd(v58, "Et");
}

/*
==============
CG_PhysicsObject_PostUpdateAuthoritativeWorld
==============
*/
void CG_PhysicsObject_PostUpdateAuthoritativeWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_PostUpdateAuthorativeWorld");
  CG_PhysicsObject_PostUpdateClientWorld(worldId, localClientNum);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_PostUpdateClientWorld
==============
*/
void CG_PhysicsObject_PostUpdateClientWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  bitarray<2048> *v5; 
  int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  CG_PhysicsObject *v12; 
  bool IsPredictiveWorld; 
  bool v14; 
  unsigned __int64 m_size; 
  PhysicsObjectCachedBoneMapping *m_buffer; 
  int v17; 
  unsigned int bodyId; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v20; 
  __int64 v21; 
  __int64 v22; 
  bitarray<2048> *v23; 
  __int64 v24; 
  int v25; 
  int v27; 
  int v28; 

  v2 = localClientNum;
  v3 = worldId;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1823, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v3 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1824, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( ((int)v2 < 0 || (int)v2 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1825, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v4 = 0;
  v24 = v2;
  v25 = 0;
  v5 = &s_centityPhyObjUsed[v2];
  v28 = 0;
  v6 = 0;
  v23 = v5;
  LODWORD(v7) = 0;
  v27 = 0;
  v8 = v5->array[0];
  while ( 1 )
  {
    v9 = v4;
    if ( !v8 )
      break;
LABEL_15:
    v10 = __lzcnt(v8);
    v11 = v10 + 32 * v7;
    if ( v10 >= 0x20 )
    {
      LODWORD(v22) = 32;
      LODWORD(v21) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( (v8 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v8 &= ~(0x80000000 >> v10);
    v12 = &s_centityPhyObjs[v24][v11];
    if ( v12->physicsInstances[v3] == -1 )
    {
      IsPredictiveWorld = Physics_IsPredictiveWorld((Physics_WorldId)v3);
      LODWORD(v7) = v27;
      v5 = v23;
      v4 = v25;
      if ( !IsPredictiveWorld )
      {
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1859, ASSERT_TYPE_ASSERT, "(Physics_IsPredictiveWorld( worldId ))", "%s\n\tCG_PhysicsObject_PostUpdateClientWorld(): This physics instance shouldn't be Invalid on a client world that is not predictive (authoritative)", "Physics_IsPredictiveWorld( worldId )");
        LODWORD(v7) = v27;
        v5 = v23;
        if ( v14 )
          __debugbreak();
      }
    }
    else
    {
      m_size = v12->clientDynamicBoneMapping.m_data.m_size;
      if ( m_size )
      {
        v6 += m_size;
        v28 = v6;
      }
      m_buffer = v12->clientDynamicBoneMapping.m_data.m_buffer;
      ++v4;
      if ( !m_size )
        v4 = v9;
      v25 = v4;
      if ( m_buffer != &m_buffer[m_size] )
      {
        do
        {
          if ( (m_buffer->bodyId & 0xFFFFFF) != 0xFFFFFF )
          {
            v17 = 1 - m_buffer->currentCache;
            if ( m_buffer->currentCache != 1 && v17 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1885, ASSERT_TYPE_ASSERT, "(newCache == 0 || newCache == 1)", (const char *)&queryFormat, "newCache == 0 || newCache == 1") )
              __debugbreak();
            bodyId = m_buffer->bodyId;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v3 > 7 )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
                __debugbreak();
            }
            if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
                __debugbreak();
            }
            if ( (unsigned int)v3 > 7 )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
                __debugbreak();
            }
            if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v22) )
                __debugbreak();
            }
            world = HavokPhysics_GetConstWorld((Physics_WorldId)v3)->world;
            if ( !world )
            {
              LODWORD(v22) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v22) )
                __debugbreak();
            }
            v20 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
            m_buffer->cachedPosition[v17].v[0] = 32.0 * v20[1].m[0].v[0];
            m_buffer->cachedPosition[v17].v[1] = 32.0 * v20[1].m[0].v[1];
            m_buffer->cachedPosition[v17].v[2] = 32.0 * v20[1].m[0].v[2];
            Axis34ToQuat(v20, &m_buffer->cachedOrientationAsQuat[v17]);
            m_buffer->currentCache = v17;
          }
          ++m_buffer;
        }
        while ( m_buffer != &v12->clientDynamicBoneMapping.m_data.m_buffer[v12->clientDynamicBoneMapping.m_data.m_size] );
        v4 = v25;
        v6 = v28;
      }
      LODWORD(v7) = v27;
      v5 = v23;
    }
  }
  while ( 1 )
  {
    v7 = (unsigned int)(v7 + 1);
    v27 = v7;
    if ( (unsigned int)v7 >= 0x40 )
      break;
    v8 = v5->array[v7];
    if ( v8 )
      goto LABEL_15;
  }
  if ( Physics_IsAuthoritativeWorld((Physics_WorldId)v3) )
    Physics_SetCGPhysicsObjectAuthoritativeDebugData(localClientNum, v4, v6);
}

/*
==============
CG_PhysicsObject_PostUpdatePredictiveWorld
==============
*/
void CG_PhysicsObject_PostUpdatePredictiveWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_PostUpdatePredictiveWorld");
  CG_PhysicsObject_PostUpdateClientWorld(worldId, localClientNum);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_PreUpdatePredictiveWorld
==============
*/
void CG_PhysicsObject_PreUpdatePredictiveWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  signed __int64 v2; 
  void *v3; 
  __int64 v4; 
  cpose_t *v5; 
  hkMonitorStream *Value; 
  __int64 v7; 
  int v8; 
  bitarray_base<bitarray<2048> > *v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  CG_PhysicsObject *v17; 
  unsigned int v18; 
  bool IsTriggerVolume; 
  int v20; 
  unsigned int v21; 
  BOOL v22; 
  __int64 v23; 
  vec3_t *v24; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v29; 
  hkMonitorStream *v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  LocalClientNum_t v44; 
  __int32 v45; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  const DObj *v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  __int64 v52; 
  int *v53; 
  unsigned __int64 v54; 
  CG_PhysicsObject *v55; 
  vec3_t *v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  vec3_t *v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  bool v70; 
  unsigned int v71; 
  const dvar_t *v72; 
  bool v73; 
  Physics_WorldId v74; 
  unsigned __int64 v75; 
  __int64 v76; 
  vec3_t *v77; 
  vec3_t *v78; 
  vec3_t *v79; 
  vec3_t *v80; 
  const DObj *physicsObjectKeyframedOffsetMappingHavingCount; 
  int v82; 
  int v83; 
  unsigned int v84; 
  unsigned int v85; 
  __int64 v86; 
  int v87; 
  CG_PhysicsObject *v88; 
  unsigned int v89; 
  unsigned __int64 m_size; 
  __int16 *m_buffer; 
  CG_PhysicsObject *v92; 
  __int64 v93; 
  __int64 v94; 
  unsigned int v95; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int m_serialAndIndex; 
  void (__fastcall *v98)(const vec4_t *, vec3_t *); 
  __int128 v102; 
  int v118; 
  int v119; 
  int *v120; 
  __int64 v121; 
  Physics_WorldId v122; 
  int v123; 
  CG_PhysicsObject *v124; 
  unsigned __int64 v125; 
  PhysicsObjectCachedBoneMapping *v126; 
  int v127; 
  unsigned int bodyId; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v130; 
  int v131; 
  int v132; 
  int *v133; 
  Physics_WorldId v134; 
  __int64 v135; 
  int v136; 
  __int64 v137; 
  LocalClientNum_t v138; 
  unsigned int v139; 
  unsigned int v140; 
  __int64 v141; 
  int v142; 
  __int64 v143; 
  __int64 v144; 
  __int64 v145; 
  cpose_t *v146; 
  int v147; 
  DObjAnimMat *SkelBoneMatrix; 
  float v149; 
  float v150; 
  float v151; 
  hknpBodyId v152; 
  int physicsObjectKeyframedOffsetMappingCount; 
  int physicsObjectKeyframedOffsetMappingHavingCountUpdated; 
  int physicsObjectKeyframedOffsetMappingCountUpdated; 
  int *v162; 
  __int64 v163; 
  int v164; 
  __int64 v165; 
  __int64 v166; 
  CG_PhysicsObject *v167; 
  unsigned __int64 v168; 
  unsigned __int64 v169; 
  PhysicsObjectOffsetMapping *v170; 
  Physics_WorldId v171; 
  char *prefix; 
  __int64 updateBroadphaseIfWarping; 
  bool physicsObjectDynamicBoneMappingCount; 
  int physicsObjectDynamicBoneMappingCounta; 
  int physicsObjectDynamicBoneMappingCountb; 
  char v177; 
  unsigned __int16 v178; 
  char v179; 
  int v180; 
  int physicsObjectKeyframedBoneMappingHavingCountUpdated; 
  cpose_t *pose; 
  int numPhysicsObjectsNeedingFullUpdate; 
  Physics_WorldId worldIda; 
  int physicsObjectKeyframedBoneMappingHavingCount; 
  hknpBodyId result[2]; 
  int physicsObjectChildCount; 
  int numPhysicsObjectsNeedingUpdate; 
  LocalClientNum_t localClientNuma; 
  int physicsObjectKeyframedBoneMappingCount[2]; 
  __int64 v191; 
  __int64 v192; 
  int physicsObjectDynamicBoneMappingHavingCount; 
  int physicsObjectChildHavingCount; 
  int v195[4]; 
  CgEntitySystem *EntitySystem; 
  int numPhysicsObjects; 
  hkMonitorStream *v198; 
  __int64 v199; 
  __int64 v200; 
  __int64 v201; 
  vec4_t quat; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 
  hkQuaternionf v205; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in2; 
  int v208[2048]; 
  int v209[2048]; 
  vec3_t outAngles[2048]; 
  vec3_t targetPosition[2048]; 
  char v212[2048]; 

  v3 = alloca(v2);
  v200 = -2i64;
  v4 = localClientNum;
  localClientNuma = localClientNum;
  v5 = (cpose_t *)(int)worldId;
  worldIda = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = (__int64)Value;
  v198 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_PreUpdatePredictiveWorld");
  v201 = v7;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1199, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)((_DWORD)v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1200, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( ((int)v4 < 0 || (int)v4 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1201, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v8 = 3 * v4 + 2;
  physicsObjectKeyframedBoneMappingCount[0] = (_DWORD)v5 - v8;
  v199 = 0i64;
  if ( (unsigned int)((_DWORD)v5 - v8) > 2 )
  {
    LODWORD(prefix) = (_DWORD)v5 - v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1205, ASSERT_TYPE_ASSERT, "( 0 ) <= ( primaryBodyIndex ) && ( primaryBodyIndex ) <= ( PHYSICS_NUM_CLIENT_WORLDS_PER_CLIENT-1 )", "primaryBodyIndex not in [0, PHYSICS_NUM_CLIENT_WORLDS_PER_CLIENT-1]\n\t%i not in [%i, %i]", prefix, 0i64, 2) )
      __debugbreak();
  }
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v4);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1223, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  *(_QWORD *)quat.v = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !*(_QWORD *)quat.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1227, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Profile_Begin(649);
  numPhysicsObjectsNeedingUpdate = 0;
  numPhysicsObjectsNeedingFullUpdate = 0;
  numPhysicsObjects = 0;
  v192 = v4;
  v191 = v4 << 8;
  v9 = &s_centityPhyObjUsed[v4];
  hkPosition.m_quad.m128_u64[0] = (unsigned __int64)v9;
  LODWORD(v10) = 0;
  v11 = *(_DWORD *)v9;
  pose = v5;
  v12 = v191;
  while ( v11 )
  {
LABEL_26:
    v13 = __lzcnt(v11);
    v14 = v13 + 32 * v10;
    if ( v13 >= 0x20 )
    {
      LODWORD(updateBroadphaseIfWarping) = 32;
      LODWORD(prefix) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v13) & v11) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v11 &= ~(0x80000000 >> v13);
    ++numPhysicsObjects;
    if ( v14 >= 0x800 )
    {
      LODWORD(updateBroadphaseIfWarping) = 2048;
      LODWORD(prefix) = v13 + 32 * v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    v15 = (int)v14;
    v16 = (__int64)&EntitySystem->m_entities[v15];
    if ( (CgEntitySystem *)((char *)EntitySystem + v15 * 760) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1253, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    v17 = &s_centityPhyObjs[v192][v14];
    v209[numPhysicsObjectsNeedingUpdate] = v14;
    physicsObjectDynamicBoneMappingCount = v17->physicsInstances[(_QWORD)pose] != -1;
    if ( v14 >= 0x800 )
    {
      LODWORD(updateBroadphaseIfWarping) = 2048;
      LODWORD(prefix) = v13 + 32 * v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", prefix, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    v18 = physicsObjectDynamicBoneMappingCount && ((0x80000000 >> (v14 & 0x1F)) & *(unsigned int *)((_BYTE *)&s_centityPhyObjMovable[0].array[(unsigned __int64)v14 >> 5] + v12)) != 0;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v16 + 288), ACTIVE, 0xCu) || (v177 = 0, GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v16 + 288), ACTIVE, 0)) )
      v177 = 1;
    IsTriggerVolume = CG_Entity_IsTriggerVolume((const centity_t *)v16);
    if ( !v177 || IsTriggerVolume )
    {
      if ( v18 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1263, ASSERT_TYPE_ASSERT, "(updateNeeded01 == 0 || updateNeeded01 == 1)", (const char *)&queryFormat, "updateNeeded01 == 0 || updateNeeded01 == 1") )
        __debugbreak();
    }
    else
    {
      v18 = 0;
    }
    numPhysicsObjectsNeedingUpdate += v18;
    v20 = numPhysicsObjectsNeedingFullUpdate;
    v208[numPhysicsObjectsNeedingFullUpdate] = v14;
    v21 = 0;
    v22 = 0;
    if ( !v17->serverKeyframedOffsetMapping.m_data.m_size )
      v22 = v17->serverKeyframedBoneMapping.m_data.m_size == 0 && v17->childEntities.m_data.m_size == 0;
    if ( !v17->serverDynamicBoneMapping.m_data.m_size )
      v21 = v18;
    numPhysicsObjectsNeedingFullUpdate = v18 - (v21 & v22) + v20;
    v23 = (int)v14;
    v24 = &targetPosition[v14];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !*(_QWORD *)(v16 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v16 + 48), (const cpose_t *)v16);
    FunctionPointer_origin((const vec4_t *)(v16 + 56), v24);
    if ( *(_BYTE *)(v16 + 2) )
    {
      _XMM0 = LODWORD(v24->v[0]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      v24->v[0] = *(float *)&_XMM2;
      _XMM0 = LODWORD(v24->v[1]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      v24->v[1] = *(float *)&_XMM2;
      _XMM0 = LODWORD(v24->v[2]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      v24->v[2] = *(float *)&_XMM2;
    }
    if ( ((*(_DWORD *)(v16 + 72) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v16 + 76) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v16 + 80) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1279, ASSERT_TYPE_ASSERT, "(!IS_NAN( cEntity->pose.angles[0] ) && !IS_NAN( cEntity->pose.angles[1] ) && !IS_NAN( cEntity->pose.angles[2] ))", "%s\n\tInvalid centity pose angles %.2f,%.2f,%.2f", "!IS_NAN( cEntity->pose.angles[0] ) && !IS_NAN( cEntity->pose.angles[1] ) && !IS_NAN( cEntity->pose.angles[2] )", *(float *)(v16 + 72), *(float *)(v16 + 76), *(float *)(v16 + 80)) )
      __debugbreak();
    outAngles[v23].v[0] = *(float *)(v16 + 72);
    outAngles[v23].v[1] = *(float *)(v16 + 76);
    outAngles[v23].v[2] = *(float *)(v16 + 80);
    v9 = (bitarray_base<bitarray<2048> > *)hkPosition.m_quad.m128_u64[0];
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= 0x40 )
      break;
    v11 = *(_DWORD *)&v9[4 * v10];
    if ( v11 )
      goto LABEL_26;
  }
  v39 = v198;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) )
  {
    v40 = 0;
    physicsObjectDynamicBoneMappingCounta = 0;
    if ( *(int *)(*(_QWORD *)quat.v + 21400i64) > 0 )
    {
      v41 = *(_QWORD *)quat.v + 21296i64;
      do
      {
        v178 = *(_WORD *)(v41 + 4);
        if ( bitarray_base<bitarray<2048>>::testBit(v9, (__int16)v178) )
        {
          AxisCopy((const tmat33_t<vec3_t> *)(*(_QWORD *)quat.v + 26948i64), (tmat33_t<vec3_t> *)&out);
          if ( *(_QWORD *)quat.v == -26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
            __debugbreak();
          v42 = *(_DWORD *)(*(_QWORD *)quat.v + 27028i64);
          if ( *(_QWORD *)quat.v == -26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
            __debugbreak();
          LODWORD(out.m[3].v[0]) = *(_DWORD *)(*(_QWORD *)quat.v + 26936i64) ^ ((v42 ^ (LODWORD(quat.v[0]) + 26936)) * ((v42 ^ (LODWORD(quat.v[0]) + 26936)) + 2));
          LODWORD(out.m[3].v[1]) = *(_DWORD *)(*(_QWORD *)quat.v + 26940i64) ^ ((v42 ^ (LODWORD(quat.v[0]) + 26940)) * ((v42 ^ (LODWORD(quat.v[0]) + 26940)) + 2));
          result[0].m_serialAndIndex = v42 ^ (LODWORD(quat.v[0]) + 26944);
          LODWORD(out.m[3].v[2]) = *(_DWORD *)(*(_QWORD *)quat.v + 26944i64) ^ (result[0].m_serialAndIndex * (result[0].m_serialAndIndex + 2));
          if ( *(_DWORD *)v41 != scr_const.tag_origin )
          {
            v43 = 0i64;
            v44 = localClientNuma;
            v45 = 2533 * localClientNuma;
            v46 = 2048;
            do
            {
              if ( v46 > 0x9E4 )
              {
                LODWORD(updateBroadphaseIfWarping) = v46;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", updateBroadphaseIfWarping) )
                  __debugbreak();
              }
              if ( (unsigned int)v44 >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(updateBroadphaseIfWarping) = 2;
                LODWORD(prefix) = v44;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
                  __debugbreak();
              }
              v47 = 2533i64 * (int)v44 + v43 + 2048;
              if ( v46 + v45 >= 0x13CA )
              {
                LODWORD(updateBroadphaseIfWarping) = v46 + v45;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", updateBroadphaseIfWarping) )
                  __debugbreak();
              }
              v48 = clientObjMap[v47];
              if ( v48 )
              {
                if ( v48 >= (unsigned int)s_objCount )
                {
                  LODWORD(updateBroadphaseIfWarping) = v48;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", updateBroadphaseIfWarping) )
                    __debugbreak();
                }
                v49 = (const DObj *)s_objBuf[v48];
                if ( v49 )
                {
                  if ( CG_DObjGetWorldTagMatrix((const cpose_t *)(*(_QWORD *)quat.v + 303328i64), v49, *(scr_string_t *)v41, (tmat33_t<vec3_t> *)&out, &out.m[3]) )
                    break;
                }
              }
              ++v46;
              ++v43;
              v44 = localClientNuma;
            }
            while ( v43 < 2 );
            v40 = physicsObjectDynamicBoneMappingCounta;
          }
          BG_UpdateViewLinkedModelTransform((const ViewLinkedData *)(v41 - 24), &out, &targetPosition[v178], &outAngles[v178]);
          v9 = (bitarray_base<bitarray<2048> > *)hkPosition.m_quad.m128_u64[0];
        }
        physicsObjectDynamicBoneMappingCounta = ++v40;
        v41 += 32i64;
      }
      while ( v40 < *(_DWORD *)(*(_QWORD *)quat.v + 21400i64) );
      v39 = v198;
    }
  }
  Profile_EndInternal(NULL);
  Profile_Begin(650);
  v50 = DVARBOOL_cg_keyframedPredictive;
  if ( !DVARBOOL_cg_keyframedPredictive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_keyframedPredictive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  if ( !v50->current.enabled )
    goto LABEL_108;
  v51 = DVARBOOL_movingPlatformUseKeyframeVelocities;
  if ( !DVARBOOL_movingPlatformUseKeyframeVelocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformUseKeyframeVelocities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  v179 = 1;
  if ( !v51->current.enabled )
LABEL_108:
    v179 = 0;
  if ( numPhysicsObjectsNeedingUpdate )
  {
    v52 = physicsObjectKeyframedBoneMappingCount[0];
    v191 = physicsObjectKeyframedBoneMappingCount[0];
    v53 = v209;
    *(_QWORD *)&result[0].m_serialAndIndex = (unsigned int)numPhysicsObjectsNeedingUpdate;
    do
    {
      v54 = *v53;
      v55 = &s_centityPhyObjs[v192][v54];
      v56 = s_centityPhyObjPredictivePositions[v192];
      v57 = targetPosition[v54].v[0] - v56[v54].v[0];
      v58 = v57 * v57;
      v59 = targetPosition[v54].v[1] - v56[v54].v[1];
      v60 = v59 * v59;
      v61 = targetPosition[v54].v[2] - v56[v54].v[2];
      v62 = v61 * v61;
      v70 = 0;
      if ( v58 < 0.000099999997 && v60 < 0.000099999997 && v62 < 0.000099999997 )
      {
        v63 = s_centityPhyObjPredictiveAngles[v192];
        v64 = outAngles[v54].v[0] - v63[v54].v[0];
        v65 = v64 * v64;
        v66 = outAngles[v54].v[1] - v63[v54].v[1];
        v67 = v66 * v66;
        v68 = outAngles[v54].v[2] - v63[v54].v[2];
        v69 = v68 * v68;
        if ( v65 < 0.000099999997 && v67 < 0.000099999997 && v69 < 0.000099999997 )
          v70 = 1;
      }
      v212[v54] = v70;
      v71 = v55->primaryBodies[v52];
      if ( (v71 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1351, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      v72 = DCONST_DVARBOOL_physics_debugClientBodyVelocities;
      if ( !DCONST_DVARBOOL_physics_debugClientBodyVelocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugClientBodyVelocities") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v72);
      v73 = !v72->current.enabled;
      v74 = worldIda;
      if ( !v73 )
        CG_PhysicsObject_DebugVelocities(localClientNuma, worldIda, v71, &targetPosition[v54], v70, "PRE UPDATE CLIENT PRED WORLD");
      if ( v70 )
      {
        if ( v179 && !Physics_IsRigidBodyDynamic(worldIda, v71) )
          Physics_ZeroRigidBodyLinAngVel(worldIda, v71);
      }
      else
      {
        v75 = v54;
        v76 = v192;
        v77 = s_centityPhyObjPredictivePositions[v192];
        v78 = &targetPosition[v54];
        v77[v75].v[0] = v78->v[0];
        v77[v75].v[1] = v78->v[1];
        v77[v75].v[2] = v78->v[2];
        v79 = s_centityPhyObjPredictiveAngles[v76];
        v80 = &outAngles[v75];
        v79[v75].v[0] = v80->v[0];
        v79[v75].v[1] = v80->v[1];
        v79[v75].v[2] = v80->v[2];
        if ( ((LODWORD(v80->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles[v75].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles[v75].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1375, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsAngles[physObjIt][0] ) && !IS_NAN( orientationAsAngles[physObjIt][1] ) && !IS_NAN( orientationAsAngles[physObjIt][2] ))", "%s\n\tInvalid orientation angles %.2f,%.2f,%.2f", "!IS_NAN( orientationAsAngles[physObjIt][0] ) && !IS_NAN( orientationAsAngles[physObjIt][1] ) && !IS_NAN( orientationAsAngles[physObjIt][2] )", outAngles[v75].v[0], outAngles[v75].v[1], outAngles[v75].v[2]) )
          __debugbreak();
        AnglesToQuat(v80, &quat);
        if ( ((LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1377, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tInvalid orientation quat %2.f,%.2f,%.2f,%.2f", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )", quat.v[0], quat.v[1], quat.v[2], quat.v[3]) )
          __debugbreak();
        if ( v179 )
        {
          if ( !Physics_IsRigidBodyDynamic(v74, v71) )
            Physics_KeyframeRigidBodyTo(v74, v71, v78, &quat, 1.0, 1, 0, 0.0);
        }
        else
        {
          Physics_WarpRigidBodyTo_Simple(v74, v71, v78, &quat);
        }
      }
      ++v53;
      v73 = (*(_QWORD *)&result[0].m_serialAndIndex)-- == 1i64;
      v52 = v191;
    }
    while ( !v73 );
    v39 = v198;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(651);
  physicsObjectKeyframedOffsetMappingHavingCount = NULL;
  v82 = 0;
  physicsObjectChildHavingCount = 0;
  v83 = 0;
  physicsObjectChildCount = 0;
  v84 = 0;
  v180 = 0;
  v85 = numPhysicsObjectsNeedingFullUpdate;
  if ( numPhysicsObjectsNeedingFullUpdate )
  {
    v86 = 0i64;
    *(_QWORD *)physicsObjectKeyframedBoneMappingCount = 0i64;
    while ( 1 )
    {
      v87 = v82;
      v88 = &s_centityPhyObjs[v192][v208[v86]];
      v89 = v88->physicsInstances[(_QWORD)pose];
      if ( v89 == -1 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1407, ASSERT_TYPE_ASSERT, "(physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v83 = physicsObjectChildCount;
        v84 = v180;
      }
      m_size = v88->childEntities.m_data.m_size;
      if ( m_size )
        physicsObjectChildCount = m_size + v83;
      v82 = v87 + 1;
      if ( !m_size )
        v82 = v87;
      physicsObjectChildHavingCount = v82;
      m_buffer = v88->childEntities.m_data.m_buffer;
      if ( m_buffer != &m_buffer[m_size] )
        break;
LABEL_249:
      v180 = ++v84;
      v86 = ++*(_QWORD *)physicsObjectKeyframedBoneMappingCount;
      v83 = physicsObjectChildCount;
      if ( v84 >= v85 )
      {
        physicsObjectChildHavingCount = v82;
        v39 = v198;
        physicsObjectKeyframedOffsetMappingHavingCount = NULL;
        goto LABEL_251;
      }
    }
    v92 = v88;
    while ( 1 )
    {
      v93 = *m_buffer;
      if ( (_DWORD)v93 == 2047 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1423, ASSERT_TYPE_ASSERT, "(childEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "childEntNum != ENTITYNUM_NONE") )
          goto LABEL_165;
      }
      else if ( (unsigned int)v93 >= 0x800 )
      {
        LODWORD(updateBroadphaseIfWarping) = 2048;
        LODWORD(prefix) = *m_buffer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
LABEL_165:
          __debugbreak();
      }
      v94 = (__int64)&EntitySystem->m_entities[v93];
      if ( (CgEntitySystem *)((char *)EntitySystem + 760 * v93) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1425, ASSERT_TYPE_ASSERT, "(childEntity)", (const char *)&queryFormat, "childEntity") )
        __debugbreak();
      if ( (*(_BYTE *)(v94 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1426, ASSERT_TYPE_ASSERT, "(CENextValid( childEntity ))", (const char *)&queryFormat, "CENextValid( childEntity )") )
        __debugbreak();
      v95 = *(unsigned __int16 *)(v94 + 600);
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldIda > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v89 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldIda - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( worldIda < PHYSICS_WORLD_ID_FIRST )
          goto LABEL_191;
        if ( worldIda <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(updateBroadphaseIfWarping) = worldIda;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
      }
      if ( (unsigned int)worldIda > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
LABEL_191:
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v89 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      ConstWorld = HavokPhysics_GetConstWorld(worldIda);
      if ( !ConstWorld->world )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v95 >= HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v89) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1430, ASSERT_TYPE_ASSERT, "(bodyIdx < Physics_GetNumRigidBodys( worldId, physicsInstance ))", (const char *)&queryFormat, "bodyIdx < Physics_GetNumRigidBodys( worldId, physicsInstance )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldIda > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v89 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldIda - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldIda <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, worldIda, v89, v95)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1432, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( childBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( childBodyId )") )
        __debugbreak();
      AnglesToQuat((const vec3_t *)(v94 + 72), &quat);
      if ( !*(_QWORD *)(v94 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      v98 = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v94 + 48), (const cpose_t *)v94);
      v98((const vec4_t *)(v94 + 56), (vec3_t *)v195);
      if ( *(_BYTE *)(v94 + 2) )
      {
        _XMM0 = (unsigned int)v195[0];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v102 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v102 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v102;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v195[0] = _XMM2;
        _XMM0 = (unsigned int)v195[1];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v102 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v102 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v102;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v195[1] = _XMM2;
        _XMM0 = (unsigned int)v195[2];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v102 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v102 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v102;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v195[2] = _XMM2;
      }
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldIda > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(updateBroadphaseIfWarping) = worldIda;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( ((v195[0] & 0x7F800000) == 2139095040 || (v195[1] & 0x7F800000) == 2139095040 || (v195[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
        __debugbreak();
      if ( ((LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
        __debugbreak();
      hkPosition.m_quad.m128_f32[0] = 0.03125 * *(float *)v195;
      hkPosition.m_quad.m128_f32[1] = 0.03125 * *(float *)&v195[1];
      hkPosition.m_quad.m128_f32[2] = 0.03125 * *(float *)&v195[2];
      hkPosition.m_quad.m128_f32[3] = 0.0;
      _XMM3 = LODWORD(quat.v[0]);
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbp+10950h+quat+4], 10950h+var_10940
        vinsertps xmm3, xmm3, dword ptr [rbp+10950h+quat+8], 10950h+quat+8
        vinsertps xmm3, xmm3, dword ptr [rbp+10950h+quat+0Ch], 10950h+hkPosition
        vdpps   xmm0, xmm3, xmm3, 0FFh
      }
      v205.m_vec.m_quad = _XMM0;
      __asm { vrsqrtps xmm1, xmm0 }
      hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM0), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM3);
      HavokPhysics_WarpRigidBodyTo(worldIda, (const hknpBodyId)m_serialAndIndex, &hkPosition, &hkOrientation, 0, 1);
      if ( ++m_buffer == &v92->childEntities.m_data.m_buffer[v92->childEntities.m_data.m_size] )
      {
        v84 = v180;
        v82 = physicsObjectChildHavingCount;
        v85 = numPhysicsObjectsNeedingFullUpdate;
        goto LABEL_249;
      }
    }
  }
LABEL_251:
  Profile_EndInternal(NULL);
  Profile_Begin(652);
  v118 = 0;
  physicsObjectDynamicBoneMappingHavingCount = 0;
  v119 = 0;
  physicsObjectDynamicBoneMappingCountb = 0;
  if ( v85 )
  {
    v120 = v208;
    *(_QWORD *)&result[0].m_serialAndIndex = v208;
    v121 = v85;
    *(_QWORD *)physicsObjectKeyframedBoneMappingCount = v85;
    v122 = worldIda;
    do
    {
      v123 = v118;
      v124 = &s_centityPhyObjs[v192][*v120];
      v191 = (__int64)v124;
      v125 = v124->serverDynamicBoneMapping.m_data.m_size;
      if ( v125 )
      {
        v119 += v125;
        physicsObjectDynamicBoneMappingCountb = v119;
      }
      ++v118;
      if ( !v125 )
        v118 = v123;
      physicsObjectDynamicBoneMappingHavingCount = v118;
      v126 = v124->serverDynamicBoneMapping.m_data.m_buffer;
      if ( v126 != &v126[v125] )
      {
        do
        {
          if ( (v126->bodyId & 0xFFFFFF) != 0xFFFFFF )
          {
            v127 = 1 - v126->currentCache;
            if ( v126->currentCache != 1 && v127 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1478, ASSERT_TYPE_ASSERT, "(newCache == 0 || newCache == 1)", (const char *)&queryFormat, "newCache == 0 || newCache == 1") )
              __debugbreak();
            bodyId = v126->bodyId;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v122 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v122 - 2) <= 5 )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v122 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            if ( (unsigned int)v122 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            world = HavokPhysics_GetConstWorld(v122)->world;
            if ( !world )
            {
              LODWORD(updateBroadphaseIfWarping) = v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", updateBroadphaseIfWarping) )
                __debugbreak();
            }
            v130 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
            v126->cachedPosition[v127].v[0] = 32.0 * v130[1].m[0].v[0];
            v126->cachedPosition[v127].v[1] = 32.0 * v130[1].m[0].v[1];
            v126->cachedPosition[v127].v[2] = 32.0 * v130[1].m[0].v[2];
            Axis34ToQuat(v130, &v126->cachedOrientationAsQuat[v127]);
            v126->currentCache = v127;
            v124 = (CG_PhysicsObject *)v191;
          }
          ++v126;
        }
        while ( v126 != &v124->serverDynamicBoneMapping.m_data.m_buffer[v124->serverDynamicBoneMapping.m_data.m_size] );
        v121 = *(_QWORD *)physicsObjectKeyframedBoneMappingCount;
        v118 = physicsObjectDynamicBoneMappingHavingCount;
        v119 = physicsObjectDynamicBoneMappingCountb;
      }
      v120 = (int *)(*(_QWORD *)&result[0].m_serialAndIndex + 4i64);
      *(_QWORD *)&result[0].m_serialAndIndex += 4i64;
      *(_QWORD *)physicsObjectKeyframedBoneMappingCount = --v121;
    }
    while ( v121 );
    physicsObjectDynamicBoneMappingHavingCount = v118;
    v39 = v198;
    physicsObjectKeyframedOffsetMappingHavingCount = NULL;
    v85 = numPhysicsObjectsNeedingFullUpdate;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(653);
  v131 = 0;
  physicsObjectKeyframedBoneMappingHavingCount = 0;
  physicsObjectKeyframedBoneMappingCount[0] = 0;
  v132 = 0;
  physicsObjectKeyframedBoneMappingHavingCountUpdated = 0;
  hkPosition.m_quad.m128_i32[0] = 0;
  if ( v85 )
  {
    v133 = v208;
    *(_QWORD *)quat.v = v208;
    v191 = v85;
    v134 = worldIda;
    v135 = v192;
    do
    {
      v136 = v132;
      v137 = *v133;
      *(_QWORD *)&result[0].m_serialAndIndex = &s_centityPhyObjs[v135][v137];
      if ( *(_QWORD *)(*(_QWORD *)&result[0].m_serialAndIndex + 616i64) )
      {
        if ( (unsigned int)v137 > 0x9E4 )
        {
          LODWORD(updateBroadphaseIfWarping) = v137;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v138 = localClientNuma;
        if ( (unsigned int)localClientNuma >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(updateBroadphaseIfWarping) = 2;
          LODWORD(prefix) = localClientNuma;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v139 = v137 + 2533 * v138;
        if ( v139 >= 0x13CA )
        {
          LODWORD(updateBroadphaseIfWarping) = v139;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v140 = clientObjMap[v139];
        if ( v140 )
        {
          if ( v140 >= (unsigned int)s_objCount )
          {
            LODWORD(updateBroadphaseIfWarping) = v140;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", updateBroadphaseIfWarping) )
              __debugbreak();
          }
          physicsObjectKeyframedOffsetMappingHavingCount = (const DObj *)s_objBuf[v140];
        }
        v141 = *(_QWORD *)(*(_QWORD *)&result[0].m_serialAndIndex + 616i64);
        if ( v141 )
          physicsObjectKeyframedBoneMappingCount[0] += v141;
        v142 = v131 + 1;
        if ( !v141 )
          v142 = v131;
        physicsObjectKeyframedBoneMappingHavingCount = v142;
        v131 = v142;
        if ( physicsObjectKeyframedOffsetMappingHavingCount )
        {
          if ( (unsigned int)v137 >= 0x800 )
          {
            LODWORD(updateBroadphaseIfWarping) = 2048;
            LODWORD(prefix) = v137;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", prefix, updateBroadphaseIfWarping) )
              __debugbreak();
          }
          pose = &EntitySystem->m_entities[v137].pose;
          if ( (CgEntitySystem *)((char *)EntitySystem + 760 * v137) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1518, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
            __debugbreak();
          v143 = *(_QWORD *)&result[0].m_serialAndIndex;
          v144 = *(_QWORD *)(*(_QWORD *)&result[0].m_serialAndIndex + 616i64);
          if ( v144 )
            hkPosition.m_quad.m128_i32[0] += v144;
          v132 = v136 + 1;
          if ( !v144 )
            v132 = v136;
          physicsObjectKeyframedBoneMappingHavingCountUpdated = v132;
          v145 = *(_QWORD *)(*(_QWORD *)&result[0].m_serialAndIndex + 608i64);
          if ( v145 != v145 + 8 * v144 )
          {
            v146 = pose;
            do
            {
              if ( (*(_DWORD *)v145 & 0xFFFFFF) != 0xFFFFFF )
              {
                v147 = *(unsigned __int8 *)(v145 + 4);
                Profile_Begin(421);
                LODWORD(pose) = v147;
                CG_DObjCalcBones(v146, physicsObjectKeyframedOffsetMappingHavingCount, 1, (const int *)&pose);
                Profile_EndInternal(NULL);
                if ( DObjGetRotTransArray(physicsObjectKeyframedOffsetMappingHavingCount) )
                  SkelBoneMatrix = DObjGetSkelBoneMatrix(physicsObjectKeyframedOffsetMappingHavingCount, v147);
                else
                  SkelBoneMatrix = NULL;
                *(float *)&pose = SkelBoneMatrix->quat.v[0];
                if ( ((unsigned int)pose & 0x7F800000) == 2139095040 || (*(float *)&pose = SkelBoneMatrix->quat.v[1], ((unsigned int)pose & 0x7F800000) == 2139095040) || (*(float *)&pose = SkelBoneMatrix->quat.v[2], ((unsigned int)pose & 0x7F800000) == 2139095040) || (*(float *)&pose = SkelBoneMatrix->quat.v[3], ((unsigned int)pose & 0x7F800000) == 2139095040) )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1545, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )") )
                    __debugbreak();
                }
                v149 = SkelBoneMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
                v150 = SkelBoneMatrix->trans.v[1] + g_activeRefDef->viewOffset.v[1];
                v151 = SkelBoneMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
                v152.m_serialAndIndex = *(_DWORD *)v145;
                if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
                  __debugbreak();
                if ( (unsigned int)v134 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
                {
                  LODWORD(updateBroadphaseIfWarping) = v134;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
                    __debugbreak();
                }
                if ( (v152.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
                {
                  LODWORD(updateBroadphaseIfWarping) = v134;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
                    __debugbreak();
                }
                *(float *)&pose = v149;
                if ( (LODWORD(v149) & 0x7F800000) == 2139095040 || (*(float *)&pose = v150, (LODWORD(v150) & 0x7F800000) == 2139095040) || (*(float *)&pose = v151, (LODWORD(v151) & 0x7F800000) == 2139095040) )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
                    __debugbreak();
                }
                *(float *)&pose = SkelBoneMatrix->quat.v[0];
                if ( ((unsigned int)pose & 0x7F800000) == 2139095040 || (*(float *)&pose = SkelBoneMatrix->quat.v[1], ((unsigned int)pose & 0x7F800000) == 2139095040) || (*(float *)&pose = SkelBoneMatrix->quat.v[2], ((unsigned int)pose & 0x7F800000) == 2139095040) || (*(float *)&pose = SkelBoneMatrix->quat.v[3], ((unsigned int)pose & 0x7F800000) == 2139095040) )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
                    __debugbreak();
                }
                hkOrientation.m_vec.m_quad.m128_f32[0] = v149 * 0.03125;
                hkOrientation.m_vec.m_quad.m128_f32[1] = v150 * 0.03125;
                hkOrientation.m_vec.m_quad.m128_f32[2] = v151 * 0.03125;
                hkOrientation.m_vec.m_quad.m128_f32[3] = 0.0;
                _XMM4 = LODWORD(SkelBoneMatrix->quat.v[0]);
                __asm
                {
                  vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
                  vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
                  vinsertps xmm4, xmm4, dword ptr [rdi+0Ch], 30h ; '0'
                  vdpps   xmm1, xmm4, xmm4, 0FFh
                  vrsqrtps xmm2, xmm1
                }
                v205.m_vec.m_quad = _mm128_mul_ps(_XMM4, _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM2, _XMM1), _XMM2)), _mm128_mul_ps(_XMM2, *(__m128 *)hkMath::hkSse_floatHalf)));
                HavokPhysics_WarpRigidBodyTo(v134, v152, &hkOrientation.m_vec, &v205, 0, 0);
              }
              v145 += 8i64;
            }
            while ( v145 != *(_QWORD *)(v143 + 608) + 8i64 * *(_QWORD *)(v143 + 616) );
            v131 = physicsObjectKeyframedBoneMappingHavingCount;
            v132 = physicsObjectKeyframedBoneMappingHavingCountUpdated;
          }
        }
        else
        {
          v132 = physicsObjectKeyframedBoneMappingHavingCountUpdated;
        }
        physicsObjectKeyframedOffsetMappingHavingCount = NULL;
        v135 = v192;
      }
      v133 = (int *)(*(_QWORD *)quat.v + 4i64);
      *(_QWORD *)quat.v += 4i64;
      --v191;
    }
    while ( v191 );
    physicsObjectKeyframedBoneMappingHavingCount = v131;
    v39 = v198;
    v85 = numPhysicsObjectsNeedingFullUpdate;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(654);
  physicsObjectKeyframedOffsetMappingCount = 0;
  LODWORD(pose) = 0;
  physicsObjectKeyframedOffsetMappingHavingCountUpdated = 0;
  physicsObjectKeyframedOffsetMappingCountUpdated = 0;
  LODWORD(EntitySystem) = 0;
  if ( v85 )
  {
    v162 = v208;
    v163 = v85;
    while ( 1 )
    {
      v164 = physicsObjectKeyframedOffsetMappingHavingCountUpdated;
      v165 = *v162;
      v166 = v165;
      v167 = s_centityPhyObjs[v192];
      v168 = v167[v165].serverKeyframedOffsetMapping.m_data.m_size;
      if ( v168 )
      {
        physicsObjectKeyframedOffsetMappingCount += v168;
        LODWORD(pose) = physicsObjectKeyframedOffsetMappingCount;
      }
      LODWORD(physicsObjectKeyframedOffsetMappingHavingCount) = (_DWORD)physicsObjectKeyframedOffsetMappingHavingCount + 1;
      if ( !v168 )
        LODWORD(physicsObjectKeyframedOffsetMappingHavingCount) = v199;
      result[0].m_serialAndIndex = (unsigned int)physicsObjectKeyframedOffsetMappingHavingCount;
      if ( !v212[v165] && v168 )
      {
        AnglesAndOriginToMatrix43(&outAngles[v165], &targetPosition[v165], &in2);
        v169 = v167[v166].serverKeyframedOffsetMapping.m_data.m_size;
        physicsObjectKeyframedOffsetMappingCountUpdated = (int)EntitySystem;
        if ( v169 )
        {
          physicsObjectKeyframedOffsetMappingCountUpdated = v169 + (_DWORD)EntitySystem;
          LODWORD(EntitySystem) = v169 + (_DWORD)EntitySystem;
        }
        ++physicsObjectKeyframedOffsetMappingHavingCountUpdated;
        if ( !v169 )
          physicsObjectKeyframedOffsetMappingHavingCountUpdated = v164;
        v170 = v167[v166].serverKeyframedOffsetMapping.m_data.m_buffer;
        if ( v170 != &v170[v169] )
        {
          v171 = worldIda;
          do
          {
            if ( (v170->bodyId & 0xFFFFFF) != 0xFFFFFF )
            {
              MatrixMultiply43(&v170->rootOffset, &in2, &out);
              AxisToQuat((const tmat33_t<vec3_t> *)&out, (vec4_t *)&v205);
              Physics_WarpRigidBodyTo_Simple(v171, v170->bodyId, &out.m[3], (const vec4_t *)&v205);
            }
            ++v170;
          }
          while ( v170 != &v167[v166].serverKeyframedOffsetMapping.m_data.m_buffer[v167[v166].serverKeyframedOffsetMapping.m_data.m_size] );
          LODWORD(physicsObjectKeyframedOffsetMappingHavingCount) = result[0];
          physicsObjectKeyframedOffsetMappingCountUpdated = (int)EntitySystem;
        }
        physicsObjectKeyframedOffsetMappingCount = (int)pose;
      }
      ++v162;
      --v163;
      LODWORD(v199) = (_DWORD)physicsObjectKeyframedOffsetMappingHavingCount;
      if ( !v163 )
        break;
      LODWORD(physicsObjectKeyframedOffsetMappingHavingCount) = v199;
    }
    v39 = v198;
    v85 = numPhysicsObjectsNeedingFullUpdate;
  }
  Physics_SetCGPhysicsObjectPredictiveDebugData(localClientNuma, numPhysicsObjects, numPhysicsObjectsNeedingUpdate, v85, physicsObjectChildHavingCount, physicsObjectChildCount, physicsObjectDynamicBoneMappingHavingCount, physicsObjectDynamicBoneMappingCountb, physicsObjectKeyframedBoneMappingHavingCount, physicsObjectKeyframedBoneMappingCount[0], physicsObjectKeyframedBoneMappingHavingCountUpdated, hkPosition.m_quad.m128_i32[0], (int)physicsObjectKeyframedOffsetMappingHavingCount, physicsObjectKeyframedOffsetMappingCount, physicsObjectKeyframedOffsetMappingHavingCountUpdated, physicsObjectKeyframedOffsetMappingCountUpdated);
  Profile_EndInternal(NULL);
  memset(v195, 0, 0xCui64);
  if ( v39 )
    hkMonitorStream::timerEnd(v39, "Et");
}

/*
==============
CG_PhysicsObject_Propagate
==============
*/
void CG_PhysicsObject_Propagate(Physics_WorldId fromWorldId, Physics_WorldId toWorldId, LocalClientNum_t localClientNum, int numSteps)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  hkMonitorStream *Value; 
  __int64 v9; 
  bitarray<2048> *v10; 
  __int64 v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  CG_PhysicsObject *v16; 
  unsigned int v17; 
  bool v18; 
  bool v19; 
  signed int v20; 
  unsigned __int64 v21; 
  int NumRigidBodys; 
  __int64 v23; 
  ntl::array<int,CG_PhysicsObject_PropagationValueAllocator> *v24; 
  unsigned int v25; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int m_serialAndIndex; 
  unsigned int v28; 
  int v29; 
  int v30; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v32; 
  hknpWorld *v33; 
  const tmat34_t<vec4_t> *v34; 
  bool v35; 
  const dvar_t *v36; 
  hknpWorld *v37; 
  const PhysicsAsset *InstanceAsset; 
  const char *name; 
  const char *RigidBodyName; 
  char *prefix; 
  vec3_t *endPosition; 
  int v43; 
  int v44; 
  int numPropagatedBodies; 
  unsigned int instanceId; 
  int v47; 
  unsigned int v48; 
  bitarray<2048> *v50; 
  unsigned int v51; 
  __int64 v53; 
  CG_PhysicsObject *physicsObject; 
  hknpBodyId result; 
  hknpBodyId v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  hkMonitorStream *v60; 
  __int64 v61; 
  __int64 v62; 
  vec3_t v0; 
  vec3_t v1[2]; 
  __int128 v65; 
  vec4_t out; 
  vec4_t startRotationAsQuat; 

  v61 = -2i64;
  v5 = localClientNum;
  v6 = toWorldId;
  v7 = fromWorldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = (__int64)Value;
  v60 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_Propagate");
  v62 = v9;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1703, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (_DWORD)v7 == (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1704, ASSERT_TYPE_ASSERT, "(fromWorldId != toWorldId)", (const char *)&queryFormat, "fromWorldId != toWorldId") )
    __debugbreak();
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1705, ASSERT_TYPE_ASSERT, "(fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "fromWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && fromWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)(v6 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1706, ASSERT_TYPE_ASSERT, "(toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "toWorldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && toWorldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( ((int)v5 < 0 || (int)v5 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1707, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( numSteps <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1708, ASSERT_TYPE_ASSERT, "(numSteps > 0)", (const char *)&queryFormat, "numSteps > 0") )
    __debugbreak();
  v43 = 0;
  numPropagatedBodies = 0;
  v57 = v5;
  v53 = v5 << 8;
  v10 = &s_centityPhyObjUsed[v5];
  v50 = v10;
  LODWORD(v11) = 0;
  v44 = 0;
  v12 = v10->array[0];
  v13 = 0;
LABEL_24:
  while ( v12 )
  {
LABEL_27:
    v14 = __lzcnt(v12);
    v15 = v14 + 32 * v11;
    v51 = v15;
    if ( v14 >= 0x20 )
    {
      LODWORD(endPosition) = 32;
      LODWORD(prefix) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", prefix, endPosition) )
        __debugbreak();
    }
    if ( (v12 & (0x80000000 >> v14)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 &= ~(0x80000000 >> v14);
    v48 = v12;
    v16 = &s_centityPhyObjs[v57][v15];
    physicsObject = v16;
    instanceId = v16->physicsInstances[v7];
    v17 = v16->physicsInstances[v6];
    LODWORD(v11) = v44;
    v10 = v50;
    v13 = v43;
    if ( instanceId == -1 )
      goto LABEL_24;
    if ( v17 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1732, ASSERT_TYPE_ASSERT, "(physicsInstanceTo != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceTo != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v15 >= 0x800 )
    {
      LODWORD(endPosition) = 2048;
      LODWORD(prefix) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", prefix, endPosition) )
        __debugbreak();
    }
    LODWORD(v11) = v44;
    v10 = v50;
    v13 = v43;
    if ( ((0x80000000 >> (v15 & 0x1F)) & *(unsigned int *)((_BYTE *)&s_centityPhyObjMovable[0].array[(unsigned __int64)v15 >> 5] + v53)) == 0 )
      goto LABEL_24;
    if ( v15 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v15, "signed", (int)v15) )
      __debugbreak();
    v18 = bitarray_base<bitarray<2048>>::testBit((bitarray<2048> *)((char *)s_centityPhyObjShown + v53), (__int16)v15);
    if ( v18 != Physics_IsInstanceInWorld((Physics_WorldId)v7, instanceId, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1742, ASSERT_TYPE_ASSERT, "(isPhysicsObjectShown == Physics_IsInstanceInWorld( fromWorldId, physicsInstanceFrom, true ))", (const char *)&queryFormat, "isPhysicsObjectShown == Physics_IsInstanceInWorld( fromWorldId, physicsInstanceFrom, true )") )
      __debugbreak();
    v19 = !v18;
    LODWORD(v11) = v44;
    v10 = v50;
    v13 = v43;
    if ( v19 )
      goto LABEL_24;
    v13 = ++v43;
    v20 = 0;
    v47 = 0;
    v21 = 0i64;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, instanceId);
    v58 = NumRigidBodys;
    LODWORD(v11) = v44;
    v10 = v50;
    if ( NumRigidBodys <= 0 )
      goto LABEL_23;
    v23 = v6 + 8 * v7;
    v59 = v23;
    do
    {
      ++numPropagatedBodies;
      if ( !v16->propagationMappings[0][v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1760, ASSERT_TYPE_ASSERT, "(physicsObject->propagationMappings[fromWorldId][toWorldId])", (const char *)&queryFormat, "physicsObject->propagationMappings[fromWorldId][toWorldId]") )
        __debugbreak();
      if ( v20 >= v16->propagationMappings[0][v23]->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1761, ASSERT_TYPE_ASSERT, "(rigidBodyIdFrom < physicsObject->propagationMappings[fromWorldId][toWorldId]->size())", (const char *)&queryFormat, "rigidBodyIdFrom < physicsObject->propagationMappings[fromWorldId][toWorldId]->size()") )
        __debugbreak();
      v24 = v16->propagationMappings[0][v23];
      if ( v21 >= v24->m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v21 >= v24->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v25 = v24->m_data.m_buffer[v21];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v17 == -1 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", endPosition) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
        goto LABEL_80;
      if ( (int)v6 >= 0 )
      {
        if ( (int)v6 <= 1 )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", endPosition) )
            __debugbreak();
        }
LABEL_80:
        if ( (unsigned int)v6 <= 7 )
          goto LABEL_83;
      }
      LODWORD(endPosition) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
        __debugbreak();
LABEL_83:
      if ( v17 == -1 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", endPosition) )
          __debugbreak();
      }
      ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v6);
      if ( !ConstWorld->world )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", endPosition) )
          __debugbreak();
      }
      if ( v25 >= HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1764, ASSERT_TYPE_ASSERT, "(rigidBodyIdTo < Physics_GetNumRigidBodys( toWorldId, physicsInstanceTo ))", (const char *)&queryFormat, "rigidBodyIdTo < Physics_GetNumRigidBodys( toWorldId, physicsInstanceTo )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > 7 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", endPosition) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, instanceId, v20)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v17 == -1 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", endPosition) )
          __debugbreak();
      }
      v28 = HavokPhysics_GetRigidBodyID(&v56, (const Physics_WorldId)v6, v17, v25)->m_serialAndIndex;
      v29 = m_serialAndIndex & 0xFFFFFF;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1769, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
        __debugbreak();
      v30 = v28 & 0xFFFFFF;
      if ( (v28 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1770, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > 7 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v29 == 0xFFFFFF )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", endPosition) )
          __debugbreak();
      }
      if ( (unsigned int)v7 > 7 )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v29 == 0xFFFFFF )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", endPosition) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld((Physics_WorldId)v7)->world;
      if ( !world )
      {
        LODWORD(endPosition) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", endPosition) )
          __debugbreak();
      }
      v32 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
      v0.v[0] = 32.0 * v32[1].m[0].v[0];
      v0.v[1] = 32.0 * v32[1].m[0].v[1];
      v0.v[2] = 32.0 * v32[1].m[0].v[2];
      Axis34ToQuat(v32, &out);
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v30 == 0xFFFFFF )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", endPosition) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", endPosition) )
          __debugbreak();
      }
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
          __debugbreak();
      }
      if ( v30 == 0xFFFFFF )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", endPosition) )
          __debugbreak();
      }
      v33 = HavokPhysics_GetConstWorld((Physics_WorldId)v6)->world;
      if ( !v33 )
      {
        LODWORD(endPosition) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", endPosition) )
          __debugbreak();
      }
      v34 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v33->getBodyTransform)(&v33->hknpWorldReader, v28);
      v1[0].v[0] = 32.0 * v34[1].m[0].v[0];
      v1[0].v[1] = 32.0 * v34[1].m[0].v[1];
      v1[0].v[2] = 32.0 * v34[1].m[0].v[2];
      Axis34ToQuat(v34, &startRotationAsQuat);
      v35 = VecNCompareCustomEpsilon(v0.v, v1[0].v, 0.0099999998, 3) && VecNCompareCustomEpsilon(out.v, startRotationAsQuat.v, 0.001, 3);
      v36 = DCONST_DVARBOOL_physics_debugClientBodyVelocities;
      if ( !DCONST_DVARBOOL_physics_debugClientBodyVelocities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugClientBodyVelocities") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
        CG_PhysicsObject_DebugVelocities(localClientNum, (Physics_WorldId)v6, v28, &v0, v35, "PRE UPDATE CLIENT AUTH WORLD");
      if ( v35 )
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 409, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 410, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
            __debugbreak();
        }
        if ( v30 == 0xFFFFFF )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 411, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", endPosition) )
            __debugbreak();
        }
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 519, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", endPosition) )
            __debugbreak();
        }
        if ( v30 == 0xFFFFFF )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 520, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", endPosition) )
            __debugbreak();
        }
        v37 = HavokPhysics_GetMutableWorld((Physics_WorldId)v6)->world;
        if ( !v37 )
        {
          LODWORD(endPosition) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 524, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", endPosition) )
            __debugbreak();
        }
        v65 = 0i64;
        ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int128 *, __int128 *, _DWORD))v37->setBodyVelocity)(&v37->hknpWorldWriter, v28, &v65, &v65, 0);
        v16 = physicsObject;
      }
      else
      {
        if ( Physics_IsRigidBodyStatic((Physics_WorldId)v6, v28) )
        {
          InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v6, v17);
          if ( InstanceAsset )
            name = InstanceAsset->name;
          else
            name = "UNKNOWN";
          RigidBodyName = Physics_GetRigidBodyName((Physics_WorldId)v6, v28);
          Com_PrintWarning(20, "Physics Worker Error: An Entity(%i) with a Static rigid body has been moved - asset:%s, body:%s.  Either it should not be moved, or it should not be Static.", v51, name, RigidBodyName);
          Physics_SetWorkerError();
        }
        v16 = physicsObject;
        CG_PhysicsObject_PropagateBody((Physics_WorldId)v6, numSteps, physicsObject, v28, v1, &startRotationAsQuat, &v0, &out, 1);
      }
      v20 = ++v47;
      ++v21;
      v23 = v59;
    }
    while ( (__int64)v21 < v58 );
    LODWORD(v11) = v44;
    v10 = v50;
    v13 = v43;
LABEL_23:
    v12 = v48;
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    v44 = v11;
    if ( (unsigned int)v11 >= 0x40 )
      break;
    v12 = v10->array[v11];
    if ( v12 )
      goto LABEL_27;
  }
  Physics_SetCGPhysicsObjectPropagatedDebugData(localClientNum, v13, numPropagatedBodies);
  if ( v60 )
    hkMonitorStream::timerEnd(v60, "Et");
}

/*
==============
CG_PhysicsObject_PropagateBody
==============
*/
void CG_PhysicsObject_PropagateBody(Physics_WorldId toWorldId, int numSteps, CG_PhysicsObject *physicsObject, unsigned int toBodyId, const vec3_t *startPosition, const vec4_t *startRotationAsQuat, const vec3_t *endPosition, const vec4_t *endRotationAsQuat, unsigned int isFirstBody)
{
  __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  unsigned int v15; 
  const vec4_t *v16; 
  const vec3_t *v17; 
  signed int v18; 
  const vec4_t *v19; 
  unsigned int m_value; 
  __int64 updateBroadphaseIfWarping; 
  int NumConstraints; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 
  hkMonitorStream *v24; 
  __int64 v25; 
  hkMonitorStream *v26; 
  unsigned int bodyIdA; 
  int numStepsa; 
  CG_PhysicsObject *physicsObjecta; 

  physicsObjecta = physicsObject;
  numStepsa = numSteps;
  v25 = -2i64;
  v12 = toWorldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v24 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_PropagateBody");
  v26 = v14;
  v15 = physicsObject->physicsInstances[v12];
  if ( !(_BYTE)isFirstBody )
  {
    v16 = endRotationAsQuat;
    v17 = endPosition;
    Physics_WarpRigidBodyToRelative((Physics_WorldId)v12, toBodyId, startPosition, startRotationAsQuat, endPosition, endRotationAsQuat);
LABEL_13:
    NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v12, v15);
    v18 = 0;
    if ( NumConstraints > 0 )
    {
      v19 = startRotationAsQuat;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        m_value = HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v12, v15, v18)->m_value;
        if ( m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1672, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( constraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( constraintId )") )
          __debugbreak();
        Physics_GetConstraintBodyIds((Physics_WorldId)v12, m_value, &bodyIdA, &isFirstBody);
        if ( bodyIdA == toBodyId && (isFirstBody & 0xFFFFFF) != 0xFFFFFF && !Physics_IsRigidBodyStatic((Physics_WorldId)v12, isFirstBody) )
          CG_PhysicsObject_PropagateBody((Physics_WorldId)v12, numStepsa, physicsObjecta, isFirstBody, startPosition, v19, v17, v16, 0);
        ++v18;
      }
      while ( v18 < NumConstraints );
      v14 = v24;
    }
    goto LABEL_41;
  }
  if ( Physics_IsRigidBodyStatic((Physics_WorldId)v12, toBodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1648, ASSERT_TYPE_ASSERT, "(!Physics_IsRigidBodyStatic( toWorldId, toBodyId ))", (const char *)&queryFormat, "!Physics_IsRigidBodyStatic( toWorldId, toBodyId )") )
    __debugbreak();
  if ( !Physics_IsRigidBodyKeyframed((Physics_WorldId)v12, toBodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1649, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyKeyframed( toWorldId, toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( toWorldId, toBodyId )") )
    __debugbreak();
  v16 = endRotationAsQuat;
  v17 = endPosition;
  if ( Physics_KeyframeRigidBodyTo((Physics_WorldId)v12, toBodyId, endPosition, endRotationAsQuat, 1.0 / (float)numSteps, 1, 0, 0.0) == Physics_MovementType_Warped )
    goto LABEL_13;
LABEL_41:
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
}

/*
==============
CG_PhysicsObject_PropagateToDetailWorld
==============
*/
void CG_PhysicsObject_PropagateToDetailWorld(Physics_WorldId fromWorldId, Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  hkMonitorStream *Value; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  bitarray<2048> *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  CG_PhysicsObject *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  Physics_WorldId v21; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v23; 
  unsigned int v24; 
  const HavokPhysicsWorld *v25; 
  unsigned int v26; 
  unsigned int m_serialAndIndex; 
  unsigned int v28; 
  int v29; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v31; 
  float v32; 
  float v33; 
  float v34; 
  __int64 activate; 
  __int64 v42; 
  int v44; 
  int v45; 
  unsigned int NumRigidBodys; 
  unsigned int v47; 
  int duplicationBodyCount; 
  int detailBoundedCount; 
  bitarray<2048> *v50; 
  __int64 v51; 
  unsigned int v52; 
  hknpBodyId result; 
  hknpBodyId v55; 
  hknpBodyId v56; 
  hknpBodyId v57; 
  Physics_WorldId worldIda[2]; 
  hkMonitorStream *v59; 
  __int64 v60; 
  __int64 v61; 
  vec4_t out; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  v60 = -2i64;
  v3 = localClientNum;
  v4 = worldId;
  v5 = fromWorldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = (__int64)Value;
  v59 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_PropagateToDetailWorld");
  v61 = v7;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2214, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v4 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2217, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( ((int)v3 < 0 || (int)v3 >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2218, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  detailBoundedCount = 0;
  v8 = 0;
  v45 = 0;
  duplicationBodyCount = 0;
  v9 = v3;
  v51 = v3;
  v10 = &s_centityPhyObjUsed[v3];
  v50 = v10;
  LODWORD(v11) = 0;
  v44 = 0;
  v12 = v10->array[0];
  *(_QWORD *)worldIda = v4;
  while ( v12 )
  {
LABEL_20:
    v13 = __lzcnt(v12);
    v14 = v13 + 32 * v11;
    if ( v13 >= 0x20 )
    {
      LODWORD(v42) = 32;
      LODWORD(activate) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", activate, v42) )
        __debugbreak();
    }
    if ( (v12 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 &= ~(0x80000000 >> v13);
    v47 = v12;
    v15 = &s_centityPhyObjs[v9][v14];
    v16 = *(_QWORD *)worldIda;
    v17 = v15->physicsInstances[*(_QWORD *)worldIda];
    v52 = v17;
    v18 = v5;
    if ( v15->physicsInstances[v5] == -1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2237, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[fromWorldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[fromWorldId] != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      v18 = v5;
    }
    v19 = v15->physicsInstances[v16];
    LODWORD(v11) = v44;
    v10 = v50;
    if ( v19 == -1 )
      goto LABEL_15;
    v20 = v15->physicsInstances[v18];
    v21 = (int)v16;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v16, v17);
    if ( !NumRigidBodys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2247, ASSERT_TYPE_ASSERT, "(numBodies > 0)", (const char *)&queryFormat, "numBodies > 0") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v5 > 7 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
        __debugbreak();
    }
    if ( v20 == -1 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
        __debugbreak();
    }
    if ( g_physicsServerWorldsCreated )
      goto LABEL_52;
    if ( (int)v5 >= 0 )
    {
      if ( (int)v5 <= 1 )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
          __debugbreak();
      }
LABEL_52:
      if ( (unsigned int)v5 <= 7 )
        goto LABEL_55;
    }
    LODWORD(v42) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
      __debugbreak();
LABEL_55:
    if ( v20 == -1 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v42) )
        __debugbreak();
    }
    ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v5);
    if ( !ConstWorld->world )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v42) )
        __debugbreak();
    }
    if ( !HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2248, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( fromWorldId, physicsInstanceFrom ) > 0)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( fromWorldId, physicsInstanceFrom ) > 0") )
      __debugbreak();
    if ( !Physics_IsInstanceDetailBounded(v21, v17) )
    {
      v8 = ++v45;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
          __debugbreak();
      }
      if ( v20 == -1 )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
      {
LABEL_121:
        if ( (unsigned int)v5 > 7 )
          goto LABEL_122;
      }
      else
      {
        if ( (int)v5 >= 0 )
        {
          if ( (int)v5 <= 1 )
          {
            LODWORD(v42) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
              __debugbreak();
          }
          goto LABEL_121;
        }
LABEL_122:
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
          __debugbreak();
      }
      if ( v20 == -1 )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v42) )
          __debugbreak();
      }
      v25 = HavokPhysics_GetConstWorld((Physics_WorldId)v5);
      if ( !v25->world )
      {
        LODWORD(v42) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v42) )
          __debugbreak();
      }
      if ( NumRigidBodys != HavokPhysicsInstanceManager_GetBodyCount(&v25->instanceManager, v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2278, ASSERT_TYPE_ASSERT, "( numBodies == Physics_GetNumRigidBodys( fromWorldId, physicsInstanceFrom ) )", (const char *)&queryFormat, "numBodies == Physics_GetNumRigidBodys( fromWorldId, physicsInstanceFrom )") )
        __debugbreak();
      v26 = 0;
      LODWORD(v11) = v44;
      v10 = v50;
      if ( !NumRigidBodys )
      {
        v12 = v47;
        goto LABEL_16;
      }
      duplicationBodyCount += NumRigidBodys;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( v20 == -1 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v56, (const Physics_WorldId)v5, v20, v26)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v21 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v42) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( v17 == -1 )
        {
          LODWORD(v42) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v21 - 2) <= 5 )
        {
          LODWORD(v42) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v21 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v42) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
            __debugbreak();
        }
        v28 = HavokPhysics_GetRigidBodyID(&v57, v21, v17, v26)->m_serialAndIndex;
        v29 = m_serialAndIndex & 0xFFFFFF;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2290, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
          __debugbreak();
        if ( (v28 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2291, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( v29 == 0xFFFFFF )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v42) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
            __debugbreak();
        }
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        if ( v29 == 0xFFFFFF )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v42) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v5)->world;
        if ( !world )
        {
          LODWORD(v42) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v42) )
            __debugbreak();
        }
        v31 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        v32 = 32.0 * v31[1].m[0].v[0];
        v33 = 32.0 * v31[1].m[0].v[1];
        v34 = 32.0 * v31[1].m[0].v[2];
        Axis34ToQuat(v31, &out);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v42) = worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
            __debugbreak();
        }
        v21 = worldId;
        if ( (v28 & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v42) = worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v42) )
            __debugbreak();
        }
        if ( ((LODWORD(v32) & 0x7F800000) == 2139095040 || (LODWORD(v33) & 0x7F800000) == 2139095040 || (LODWORD(v34) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
          __debugbreak();
        if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
          __debugbreak();
        hkPosition.m_quad.m128_f32[0] = v32 * 0.03125;
        hkPosition.m_quad.m128_f32[1] = v33 * 0.03125;
        hkPosition.m_quad.m128_f32[2] = v34 * 0.03125;
        hkPosition.m_quad.m128_f32[3] = 0.0;
        _XMM5 = LODWORD(out.v[0]);
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rbp+80h+out+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rbp+80h+out+8], 20h
          vinsertps xmm5, xmm5, dword ptr [rbp+80h+out+0Ch], 30h
          vdpps   xmm0, xmm5, xmm5, 0FFh
          vrsqrtps xmm4, xmm0
        }
        hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
        HavokPhysics_WarpRigidBodyTo(worldId, (const hknpBodyId)v28, &hkPosition, &hkOrientation, 0, 0);
        ++v26;
        v17 = v52;
      }
      while ( v26 < NumRigidBodys );
      goto LABEL_222;
    }
    ++detailBoundedCount;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v5 > 7 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
        __debugbreak();
    }
    if ( v20 == -1 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v42) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
    {
      LODWORD(v42) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
        __debugbreak();
    }
    v23 = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, v20, 0)->m_serialAndIndex;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v21 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v42) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v42) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v21 - 2) <= 5 )
    {
      LODWORD(v42) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v42) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v21 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v42) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v42) )
        __debugbreak();
    }
    v24 = HavokPhysics_GetRigidBodyID(&v55, v21, v19, NumRigidBodys - 1)->m_serialAndIndex;
    if ( (v23 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2260, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
      __debugbreak();
    if ( (v24 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2261, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
      __debugbreak();
    Physics_GetRigidBodyTransform((const Physics_WorldId)v5, v23, &v15->detailCache.position, &v15->detailCache.orientationAsQuat);
    v15->detailCache.cached = 0;
    Physics_WarpRigidBodyTo(worldId, v24, &v15->detailCache.position, &v15->detailCache.orientationAsQuat, 0, 0);
LABEL_222:
    LODWORD(v11) = v44;
    v12 = v47;
    v10 = v50;
LABEL_15:
    v8 = v45;
LABEL_16:
    v9 = v51;
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    v44 = v11;
    if ( (unsigned int)v11 >= 0x40 )
      break;
    v12 = v10->array[v11];
    if ( v12 )
      goto LABEL_20;
  }
  Physics_SetCGPhysicsObjectDetailPropagationDebugData(localClientNum, detailBoundedCount, v8, duplicationBodyCount);
  if ( v59 )
    hkMonitorStream::timerEnd(v59, "Et");
}

/*
==============
CG_PhysicsObject_ResetPhysicsChild
==============
*/
void CG_PhysicsObject_ResetPhysicsChild(LocalClientNum_t localClientNum, centity_t *ent)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_ResetPhysicsChild");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1980, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1981, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  if ( ent->nextState.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1982, ASSERT_TYPE_ASSERT, "(ent->nextState.eType == ET_PHYSICS_CHILD)", (const char *)&queryFormat, "ent->nextState.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1983, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsObject_SetEntityTransforms
==============
*/
void CG_PhysicsObject_SetEntityTransforms(Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  centity_t *Entity; 
  CG_PhysicsObject *v9; 
  unsigned int v10; 
  unsigned int RigidBodyID; 
  vec3_t outOrigin; 
  __int64 v13; 
  hkMonitorStream *v14; 
  vec4_t orientation; 

  v13 = -2i64;
  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_SetEntityTransforms");
  v14 = v7;
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1943, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  if ( (unsigned int)(v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1944, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1945, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1949, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v9 = CG_PhysicsObject_Get(entNum, localClientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1953, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  if ( v9->mapping != PHYSICSOBJECT_MAPPING_PHYSICS_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1954, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH") )
    __debugbreak();
  v10 = v9->physicsInstances[v5];
  if ( v10 == -1 )
  {
    if ( !Physics_IsPredictiveWorld((Physics_WorldId)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1960, ASSERT_TYPE_ASSERT, "(Physics_IsPredictiveWorld( worldId ))", (const char *)&queryFormat, "Physics_IsPredictiveWorld( worldId )") )
      __debugbreak();
  }
  else
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v5, v10, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 1966, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    Physics_GetRigidBodyTransform((const Physics_WorldId)v5, RigidBodyID, &outOrigin, &orientation);
    CG_SetPoseOrigin(&Entity->pose, &outOrigin);
    UnitQuatToAngles(&orientation, &Entity->pose.angles);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
CG_PhysicsObject_Shutdown
==============
*/
void CG_PhysicsObject_Shutdown(void)
{
  __int64 i; 
  __int64 j; 
  __int64 v2; 
  __int64 v3; 
  bitarray<2048> *v4; 
  unsigned int v5; 

  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 145, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized") )
    __debugbreak();
  s_physicsObject_CInitialized = 0;
  for ( i = 0i64; i < 2; ++i )
  {
    for ( j = 0i64; j < 1507328; j += 736i64 )
    {
      v2 = j;
      v3 = 8i64;
      do
      {
        if ( *(unsigned int *)((char *)s_centityPhyObjs[i]->physicsInstances + v2) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 155, ASSERT_TYPE_ASSERT, "(s_centityPhyObjs[localClientNum][objIt].physicsInstances[instanceIt] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_centityPhyObjs[localClientNum][objIt].physicsInstances[instanceIt] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v2 += 4i64;
        --v3;
      }
      while ( v3 );
    }
    if ( !s_centityPhyObjs[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 160, ASSERT_TYPE_ASSERT, "(s_centityPhyObjs[localClientNum])", (const char *)&queryFormat, "s_centityPhyObjs[localClientNum]") )
      __debugbreak();
    if ( !s_centityPhyObjPredictivePositions[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 161, ASSERT_TYPE_ASSERT, "(s_centityPhyObjPredictivePositions[localClientNum])", (const char *)&queryFormat, "s_centityPhyObjPredictivePositions[localClientNum]") )
      __debugbreak();
    if ( !s_centityPhyObjPredictiveAngles[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 162, ASSERT_TYPE_ASSERT, "(s_centityPhyObjPredictiveAngles[localClientNum])", (const char *)&queryFormat, "s_centityPhyObjPredictiveAngles[localClientNum]") )
      __debugbreak();
    s_centityPhyObjs[i] = NULL;
    v4 = s_centityPhyObjUsed;
    s_centityPhyObjPredictivePositions[i] = NULL;
    v5 = 0;
    s_centityPhyObjPredictiveAngles[i] = NULL;
    while ( !v4->array[0] )
    {
      ++v5;
      v4 = (bitarray<2048> *)((char *)v4 + 4);
      if ( v5 >= 0x40 )
        goto LABEL_27;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 176, ASSERT_TYPE_ASSERT, "(s_centityPhyObjUsed->noBitsOn())", (const char *)&queryFormat, "s_centityPhyObjUsed->noBitsOn()") )
      __debugbreak();
LABEL_27:
    ;
  }
}

/*
==============
CG_PhysicsObject_UpdateDetailWorldInstance
==============
*/
__int64 CG_PhysicsObject_UpdateDetailWorldInstance(Physics_WorldId fromWorldId, Physics_WorldId worldId, int entNum, LocalClientNum_t localClientNum, DObjPartBits **partBits)
{
  __int64 v5; 
  CG_PhysicsObject *v8; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  DObjAnimMat *SkelBoneMatrix; 
  unsigned int v17; 
  DObjPartBits *v18; 
  unsigned int v19; 
  bitarray_base<bitarray<256> > **v20; 
  bitarray_base<bitarray<256> > *v21; 
  __int64 v22; 
  __int64 v23; 
  int boneIndices; 
  unsigned int v25; 
  DObjPartBits **v26; 
  centity_t *Entity; 
  vec3_t position; 

  v5 = worldId;
  v26 = partBits;
  v8 = CG_PhysicsObject_Get(entNum, localClientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2315, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  *partBits = &v8->detailCache.hideBits;
  if ( v8->detailCache.cached )
    return v8->physicsInstances[v5];
  Profile_Begin(766);
  Entity = CG_GetEntity(localClientNum, entNum);
  p_pose = &Entity->pose;
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2330, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, localClientNum);
  v25 = v8->physicsInstances[v5];
  if ( v25 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2337, ASSERT_TYPE_ASSERT, "(toPhysicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "toPhysicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v12 = 164i64;
  if ( Physics_IsDetailWorld((Physics_WorldId)v5) )
    v12 = 160i64;
  v13 = 0;
  v14 = *(_QWORD *)((char *)&v8->mapping + v12 * 4);
  if ( v14 != v14 + 8i64 * *(_QWORD *)&v8->physicsInstances[v12 + 1] )
  {
    do
    {
      if ( (*(_DWORD *)v14 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2347, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( boneMapping->bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
        __debugbreak();
      v15 = *(unsigned __int8 *)(v14 + 4);
      if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      Profile_Begin(421);
      boneIndices = v15;
      CG_DObjCalcBones(p_pose, ClientDObj, 1, &boneIndices);
      Profile_EndInternal(NULL);
      if ( DObjGetRotTransArray(ClientDObj) )
        SkelBoneMatrix = DObjGetSkelBoneMatrix(ClientDObj, v15);
      else
        SkelBoneMatrix = NULL;
      boneIndices = LODWORD(SkelBoneMatrix->quat.v[0]);
      if ( (boneIndices & 0x7F800000) == 2139095040 || (boneIndices = LODWORD(SkelBoneMatrix->quat.v[1]), (boneIndices & 0x7F800000) == 2139095040) || (boneIndices = LODWORD(SkelBoneMatrix->quat.v[2]), (boneIndices & 0x7F800000) == 2139095040) || (boneIndices = LODWORD(SkelBoneMatrix->quat.v[3]), (boneIndices & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2351, ASSERT_TYPE_ASSERT, "(!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] ))", (const char *)&queryFormat, "!IS_NAN( dobjMat->quat[0] ) && !IS_NAN( dobjMat->quat[1] ) && !IS_NAN( dobjMat->quat[2] ) && !IS_NAN( dobjMat->quat[3] )") )
          __debugbreak();
      }
      v17 = *(_DWORD *)v14;
      position.v[0] = SkelBoneMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
      position.v[1] = SkelBoneMatrix->trans.v[1] + g_activeRefDef->viewOffset.v[1];
      position.v[2] = SkelBoneMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
      Physics_WarpLeafDetailRigidBodyTo((Physics_WorldId)v5, v17, &position, &SkelBoneMatrix->quat, 0, 0);
      v18 = *v26;
      v19 = ClientDObj->hidePartBits.array[(unsigned __int64)*(unsigned __int8 *)(v14 + 4) >> 5] & (0x80000000 >> (*(_BYTE *)(v14 + 4) & 0x1F));
      if ( v13 >= 0x100 )
      {
        LODWORD(v23) = 256;
        LODWORD(v22) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v22, v23) )
          __debugbreak();
      }
      v20 = v26;
      v18->array[(unsigned __int64)v13 >> 5] &= ~(0x80000000 >> (v13 & 0x1F));
      v21 = *v20;
      if ( v19 )
        bitarray_base<bitarray<256>>::resetBit(v21, v13);
      else
        bitarray_base<bitarray<256>>::setBit(v21, v13);
      v14 += 8i64;
      p_pose = &Entity->pose;
      ++v13;
    }
    while ( v14 != *(_QWORD *)((char *)&v8->mapping + v12 * 4) + 8i64 * *(_QWORD *)&v8->physicsInstances[v12 + 1] );
  }
  v8->detailCache.cached = 1;
  Profile_EndInternal(NULL);
  return v25;
}

/*
==============
CG_PhysicsObject_UpdatePhysicsChild
==============
*/
void CG_PhysicsObject_UpdatePhysicsChild(Physics_WorldId worldId, LocalClientNum_t localClientNum, centity_t *ent)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  CG_PhysicsObject *v8; 
  unsigned int v9; 
  entityState_t::un_t un; 
  int v11; 
  unsigned __int64 v12; 
  int v13; 
  unsigned __int64 v14; 
  unsigned int RigidBodyID; 
  const DObj *ClientDObj; 
  unsigned __int8 BoneIndex; 
  __int16 number; 
  __int64 v19; 
  vec4_t *cachedOrientationAsQuat; 
  PhysicsObjectBoneMapping *m_buffer; 
  PhysicsObjectBoneMapping *v22; 
  PhysicsObjectOffsetMapping *v23; 
  PhysicsObjectOffsetMapping *v24; 

  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_UpdatePhysicsChild");
  if ( (unsigned int)(v5 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2025, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST", -2i64) )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2026, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2027, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  if ( ent->nextState.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2028, ASSERT_TYPE_ASSERT, "(ent->nextState.eType == ET_PHYSICS_CHILD)", (const char *)&queryFormat, "ent->nextState.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  if ( (localClientNum < LOCAL_CLIENT_0 || localClientNum >= SLODWORD(cl_maxLocalClients)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2029, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum < (cl_maxLocalClients))", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum < MAX_LOCAL_CLIENTS") )
    __debugbreak();
  v8 = CG_PhysicsObject_Get(ent->nextState.otherEntityNum, localClientNum);
  v9 = v8->physicsInstances[v5];
  if ( v9 != -1 )
  {
    un = ent->nextState.un;
    v11 = un.vehicleXModel >> 16;
    v12 = un.vehicleXModel >> 16;
    if ( v8->childEntities.m_data.m_size <= v12 )
      goto LABEL_23;
    if ( v8->childEntities.m_data.m_buffer[v11] == ent->nextState.number )
      goto LABEL_85;
    if ( v8->childEntities.m_data.m_size <= v11 )
    {
LABEL_23:
      v13 = v11 + 1;
      v14 = v11 + 1;
      ntl::array<short,CG_PhysicsObject_ChildEntityAllocator>::resize(&v8->childEntities, v13);
      if ( v8->serverDynamicBoneMapping.m_data.m_size > v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2055, ASSERT_TYPE_ASSERT, "(physObj->serverDynamicBoneMapping.size() <= dynamicChildIdx)", (const char *)&queryFormat, "physObj->serverDynamicBoneMapping.size() <= dynamicChildIdx") )
        __debugbreak();
      ntl::array<PhysicsObjectCachedBoneMapping,CG_PhysicsObject_CachedBoneMappingAllocator>::resize(&v8->serverDynamicBoneMapping, v14);
    }
    if ( (unsigned __int16)un.scriptMoverType >= Physics_GetNumRigidBodys(worldId, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2061, ASSERT_TYPE_ASSERT, "(bodyIdx < Physics_GetNumRigidBodys( worldId, physInstance))", (const char *)&queryFormat, "bodyIdx < Physics_GetNumRigidBodys( worldId, physInstance)") )
      __debugbreak();
    RigidBodyID = Physics_GetRigidBodyID(worldId, v9, (unsigned __int16)un.scriptMoverType);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2063, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(ent->nextState.otherEntityNum, localClientNum);
    if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2067, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    BoneIndex = CG_PhysicsObject_FindBoneIndex(worldId, RigidBodyID, ClientDObj, NULL);
    number = ent->nextState.number;
    if ( v12 >= v8->childEntities.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->childEntities.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v8->childEntities.m_data.m_buffer[v12] = number;
    if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v8->serverDynamicBoneMapping.m_data.m_buffer[v12].boneIndex = BoneIndex;
    if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v19 = v12;
    v8->serverDynamicBoneMapping.m_data.m_buffer[v12].bodyId = RigidBodyID;
    if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    cachedOrientationAsQuat = v8->serverDynamicBoneMapping.m_data.m_buffer[v19].cachedOrientationAsQuat;
    if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    Physics_GetRigidBodyTransform(worldId, RigidBodyID, v8->serverDynamicBoneMapping.m_data.m_buffer[v19].cachedPosition, cachedOrientationAsQuat);
    if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v12 >= v8->serverDynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v8->serverDynamicBoneMapping.m_data.m_buffer[v12].currentCache = 0;
    m_buffer = v8->serverKeyframedBoneMapping.m_data.m_buffer;
    v22 = &m_buffer[v8->serverKeyframedBoneMapping.m_data.m_size];
    if ( m_buffer != v22 )
    {
      while ( m_buffer->bodyId != RigidBodyID )
      {
        if ( ++m_buffer == v22 )
          goto LABEL_80;
      }
      if ( m_buffer->boneIndex != BoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 2083, ASSERT_TYPE_ASSERT, "(keyframedBoneMappingIt->boneIndex == boneIndex)", (const char *)&queryFormat, "keyframedBoneMappingIt->boneIndex == boneIndex") )
        __debugbreak();
      m_buffer->bodyId = 0xFFFFFF;
    }
LABEL_80:
    v23 = v8->serverKeyframedOffsetMapping.m_data.m_buffer;
    v24 = &v23[v8->serverKeyframedOffsetMapping.m_data.m_size];
    if ( v23 != v24 )
    {
      while ( v23->bodyId != RigidBodyID )
      {
        if ( ++v23 == v24 )
          goto LABEL_85;
      }
      v23->bodyId = 0xFFFFFF;
    }
  }
LABEL_85:
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
CG_PhysicsObject_Write
==============
*/
void CG_PhysicsObject_Write(MemoryFile *memFile)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v2; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v2 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsObject_Write");
  if ( !s_physicsObject_CInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicsobject.cpp", 187, ASSERT_TYPE_ASSERT, "(s_physicsObject_CInitialized)", (const char *)&queryFormat, "s_physicsObject_CInitialized", -2i64) )
    __debugbreak();
  if ( v2 )
    hkMonitorStream::timerEnd(v2, "Et");
}

