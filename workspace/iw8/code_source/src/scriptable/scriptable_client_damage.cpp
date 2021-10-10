/*
==============
ScriptableCl_VehicleDamageEvent
==============
*/

void __fastcall ScriptableCl_VehicleDamageEvent(const LocalClientNum_t localClientNum, const centity_t *vehicleCent, const unsigned int scriptableIndex)
{
  ?ScriptableCl_VehicleDamageEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@I@Z(localClientNum, vehicleCent, scriptableIndex);
}

/*
==============
ScriptableCl_ExplosionDamageEvent
==============
*/

void __fastcall ScriptableCl_ExplosionDamageEvent(const LocalClientNum_t localClientNum, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const int explosionInnerDamage, const int explosionOuterDamage, const int runOcclusionTraces)
{
  ?ScriptableCl_ExplosionDamageEvent@@YAXW4LocalClientNum_t@@IIAEBUWeapon@@HAEBTvec3_t@@MHHH@Z(localClientNum, inflictorEntNum, attackerEntNum, weapon, isAlternate, position, outerRadius, explosionInnerDamage, explosionOuterDamage, runOcclusionTraces);
}

/*
==============
ScriptableCl_DamagePart
==============
*/

void __fastcall ScriptableCl_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const ScriptablePartDef *parentDef, const ScriptablePartDef *childDef, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ?ScriptableCl_DamagePart@@YAXPEBUScriptableEventParams@@PEBUScriptablePartDef@@11II@Z(eventParams, def, parentDef, childDef, damageTypeFlags, damage);
}

/*
==============
ScriptableCl_VehicleDamageClientScriptables
==============
*/

void __fastcall ScriptableCl_VehicleDamageClientScriptables(const LocalClientNum_t localClientNum, const centity_t *vehicleCent, const Bounds *vehicleBounds)
{
  ?ScriptableCl_VehicleDamageClientScriptables@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEBUBounds@@@Z(localClientNum, vehicleCent, vehicleBounds);
}

/*
==============
ScriptableCl_MeleeEvent
==============
*/

void __fastcall ScriptableCl_MeleeEvent(const LocalClientNum_t localClientNum, const int sourceEntityNum, const Weapon *weapon, const int isAlternate)
{
  ?ScriptableCl_MeleeEvent@@YAXW4LocalClientNum_t@@HAEBUWeapon@@H@Z(localClientNum, sourceEntityNum, weapon, isAlternate);
}

/*
==============
ScriptableCl_EntityBulletHitEvent
==============
*/

void __fastcall ScriptableCl_EntityBulletHitEvent(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int inflictorEntNum, const vec3_t *start, const vec3_t *end, const int mod, const Weapon *weapon, const int isAlternate, const scr_string_t partName)
{
  ?ScriptableCl_EntityBulletHitEvent@@YAXW4LocalClientNum_t@@IIAEBTvec3_t@@1HAEBUWeapon@@HW4scr_string_t@@@Z(localClientNum, scriptableIndex, inflictorEntNum, start, end, mod, weapon, isAlternate, partName);
}

/*
==============
ScriptableCl_GetInstanceIndexCallback
==============
*/
void ScriptableCl_GetInstanceIndexCallback(const ScriptableContext context, const unsigned int entityNum, const ScriptableLinkType type, unsigned int *outScriptableIndex)
{
  LocalClientNum_t v8; 
  LocalClientNum_t v9; 
  const centity_t *Entity; 
  bool v11; 
  const DynEntityDef *Def; 
  unsigned int runtimeInstanceCount; 
  unsigned int v14; 
  __int64 v15; 

  if ( !outScriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 435, ASSERT_TYPE_ASSERT, "(outScriptableIndex)", (const char *)&queryFormat, "outScriptableIndex") )
    __debugbreak();
  v8 = ScriptableCl_ContextToLocalClient(context);
  v9 = v8;
  if ( type == SCRIPTABLE_LINK_ENTITY )
  {
    Entity = CG_GetEntity(v8, entityNum);
    v11 = !ScriptableCl_GetIndexForEntity(v9, Entity, outScriptableIndex);
    goto LABEL_22;
  }
  if ( type != SCRIPTABLE_LINK_DYNENT )
  {
    v11 = type == SCRIPTABLE_LINK_CLIENTMODEL;
LABEL_22:
    if ( !v11 )
      return;
    goto LABEL_23;
  }
  Def = DynEnt_GetDef(entityNum, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 455, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( Def->scriptableMapIndex < g_scriptableWorldCounts.totalInstanceCount )
  {
    if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
      __debugbreak();
    if ( Def->scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
    {
      LODWORD(v15) = Def->scriptableMapIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 464, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "dynEntDef->scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v15, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
        __debugbreak();
    }
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
      __debugbreak();
    v14 = Def->scriptableMapIndex + runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
    goto LABEL_24;
  }
LABEL_23:
  v14 = -1;
LABEL_24:
  *outScriptableIndex = v14;
}

/*
==============
ScriptableCl_GetDefCallback
==============
*/
void ScriptableCl_GetDefCallback(const ScriptableContext context, const unsigned int scriptableIndex, const ScriptableDef **outDef)
{
  LocalClientNum_t v6; 

  if ( !outDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 482, ASSERT_TYPE_ASSERT, "(outDef)", (const char *)&queryFormat, "outDef") )
    __debugbreak();
  v6 = ScriptableCl_ContextToLocalClient(context);
  *outDef = ScriptableCl_GetInstanceCommonContext(v6, scriptableIndex)->def;
}

/*
==============
ScriptableCl_GetOriginAnglesCallback
==============
*/
void ScriptableCl_GetOriginAnglesCallback(const ScriptableContext context, const unsigned int scriptableIndex, vec3_t *outOrigin, vec3_t *outAngles)
{
  LocalClientNum_t v7; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  v7 = ScriptableCl_ContextToLocalClient(context);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v7, scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, outOrigin);
  *outAngles = InstanceCommonContext->angles;
}

/*
==============
ScriptableCl_GetAbsBoundsCallback
==============
*/
void ScriptableCl_GetAbsBoundsCallback(const ScriptableContext context, const unsigned int scriptableIndex, Bounds *bounds)
{
  LocalClientNum_t v6; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  vec3_t outOrigin; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 506, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds", -2i64) )
    __debugbreak();
  v6 = ScriptableCl_ContextToLocalClient(context);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v6, scriptableIndex);
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  if ( ScriptableModel )
  {
    bounds->midPoint.v[0] = outOrigin.v[0] + ScriptableModel->bounds.midPoint.v[0];
    bounds->midPoint.v[1] = outOrigin.v[1] + ScriptableModel->bounds.midPoint.v[1];
    bounds->midPoint.v[2] = outOrigin.v[2] + ScriptableModel->bounds.midPoint.v[2];
    bounds->halfSize.v[0] = ScriptableModel->bounds.halfSize.v[0];
    bounds->halfSize.v[1] = ScriptableModel->bounds.halfSize.v[1];
    bounds->halfSize.v[2] = ScriptableModel->bounds.halfSize.v[2];
  }
  else
  {
    bounds->midPoint = outOrigin;
    bounds->halfSize.v[0] = 1.0;
    bounds->halfSize.v[1] = 1.0;
    bounds->halfSize.v[2] = 1.0;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_RadiusDamageCallback
==============
*/
void ScriptableCl_RadiusDamageCallback(const ScriptableContext context, const unsigned int scriptableIndex, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const vec3_t *startPos, const vec3_t *hitPos, const int mod, const Weapon *weapon, const int isAlternate, const int damagePoints, const float explosionOuterDamage, const float explosionInnerDamage, const float explosionRadius)
{
  LocalClientNum_t v17; 
  centity_t *Entity; 
  const ScriptableDef *def; 
  const ScriptableDef *v20; 
  float v21; 
  __int64 v22; 
  float v23; 
  __int128 v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int scriptableIndexa; 
  centity_t *v29; 
  const Weapon *v30; 
  ScriptableDamageEvent damageEvent; 

  v30 = weapon;
  if ( inflictorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, 2048) )
    __debugbreak();
  if ( attackerEntNum >= 0x800 )
  {
    LODWORD(v27) = 2048;
    LODWORD(v26) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v17 = ScriptableCl_ContextToLocalClient(context);
  Entity = CG_GetEntity(v17, inflictorEntNum);
  v29 = CG_GetEntity(v17, attackerEntNum);
  if ( inflictorEntNum - 2046 <= 1 || !ScriptableCl_IsScriptableEntity(v17, Entity) || ScriptableCl_IsReservedScriptableEntity(v17, inflictorEntNum) || BG_IsCharacterEntity(&Entity->nextState) )
    goto LABEL_20;
  if ( !ScriptableCl_GetIndexForEntity(v17, Entity, &scriptableIndexa) )
  {
    Com_PrintError(29, "ScriptableCl_RadiusDamageCallback: Could not find scriptable index for inflictor ent %i\n", inflictorEntNum);
    return;
  }
  def = ScriptableCl_GetInstanceCommonContext(v17, scriptableIndexa)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 554, ASSERT_TYPE_ASSERT, "(inflictorDef)", (const char *)&queryFormat, "inflictorDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 268, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 0x1000) != 0 || (ScriptableCl_GetInstanceCommonContext(v17, scriptableIndex)->def->flags & 0x400) == 0 )
  {
LABEL_20:
    damageEvent.context = context;
    damageEvent.callbacks = ScriptableCl_GetCallbackTable();
    v20 = ScriptableCl_GetInstanceCommonContext(v17, scriptableIndex)->def;
    damageEvent.inflictorEntState = &Entity->nextState;
    damageEvent.def = v20;
    damageEvent.attackerEntState = &v29->nextState;
    damageEvent.partName = 0;
    *(_QWORD *)&damageEvent.dFlags = 0i64;
    damageEvent.scriptableIndex = scriptableIndex;
    v21 = startPos->v[1];
    damageEvent.start.v[0] = startPos->v[0];
    damageEvent.start.v[2] = startPos->v[2];
    damageEvent.start.v[1] = v21;
    damageEvent.inflictorEntNum = inflictorEntNum;
    v22 = *(_QWORD *)hitPos->v;
    LODWORD(damageEvent.end.v[1]) = HIDWORD(*(_QWORD *)hitPos->v);
    damageEvent.end.v[0] = *(float *)&v22;
    v23 = hitPos->v[2];
    damageEvent.mod = mod;
    damageEvent.damage = damagePoints;
    damageEvent.end.v[2] = v23;
    damageEvent.inflictorScriptableIndex = 500000;
    damageEvent.attackerEntNum = attackerEntNum;
    v24 = *(_OWORD *)&v30->attachmentVariationIndices[5];
    *(__m256i *)&damageEvent.weapon.weaponIdx = *(__m256i *)&v30->weaponIdx;
    v25 = *(_DWORD *)&v30->weaponCamo;
    *(_QWORD *)&damageEvent.weapon.attachmentVariationIndices[21] = *(_QWORD *)&v30->attachmentVariationIndices[21];
    damageEvent.explosionOuterDamage = explosionOuterDamage;
    *(_OWORD *)&damageEvent.weapon.attachmentVariationIndices[5] = v24;
    *(_DWORD *)&damageEvent.weapon.weaponCamo = v25;
    damageEvent.explosionRadius = explosionRadius;
    damageEvent.explosionInnerDamage = explosionInnerDamage;
    damageEvent.isAlternate = isAlternate;
    ScriptableBg_ProcessDamageEvent(&damageEvent);
  }
}

/*
==============
ScriptableCl_AreaScriptables
==============
*/
__int64 ScriptableCl_AreaScriptables(const ScriptableContext context, const Bounds *bounds, unsigned int *entityList, ScriptableLinkType *typeList, vec3_t *closestPoints, unsigned int maxcount)
{
  LocalClientNum_t v8; 
  hknpShape *ShapeSphere; 
  unsigned int v10; 
  int v11; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int v13; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  unsigned __int16 RefId; 
  __int32 v18; 
  unsigned int v19; 
  const centity_t *Entity; 
  __int64 v21; 
  const DynEntityDef *Def; 
  unsigned int NumHits; 
  hkMemoryAllocator *v24; 
  hkMemoryAllocator *v25; 
  Physics_GetClosestPointsExtendedData *extendedData; 
  HavokPhysics_CollisionQueryResult *result; 
  DynEntityBasis basisOut[4]; 
  unsigned int dynEntIdOut; 
  int v31; 
  ScriptableLinkType *v32; 
  vec3_t *v33; 
  HavokPhysics_IgnoreBodies v34; 
  Physics_GetClosestPointsExtendedData v35; 
  __int64 v36; 
  char optionalInplaceBuffer[432]; 

  v36 = -2i64;
  v32 = typeList;
  v33 = closestPoints;
  v8 = ScriptableCl_ContextToLocalClient(context);
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, bounds->halfSize.v[0], optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v34, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v34, -19);
  v35.contents = -1;
  v35.collisionBuffer = 0.0;
  v10 = 0;
  v35.nonBrushShape = NULL;
  v35.phaseSelection = All;
  v35.simplify = 1;
  v35.ignoreBodies = &v34;
  v11 = 3 * v8 + 3;
  v31 = v11;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult((Physics_WorldId)v11, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
  Physics_GetClosestPoints((Physics_WorldId)v11, ShapeSphere, &bounds->midPoint, &quat_identity, 0.0, &v35, CollisionQueryResult);
  HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
  v13 = 0;
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult) )
  {
    do
    {
      if ( v13 >= maxcount )
        break;
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v10);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 643, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef((Physics_WorldId)v11, ClosestPointHitBodyId);
      RefSystem = Physics_GetRefSystem(Ref);
      RefId = Physics_GetRefId(Ref);
      v18 = RefSystem - 1;
      if ( v18 )
      {
        if ( v18 != 3 )
          goto LABEL_26;
        v19 = RefId;
        Entity = CG_GetEntity(v8, RefId);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 692, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( !ScriptableCl_IsScriptableEntity(v8, Entity) )
          goto LABEL_26;
        v32[v13] = SCRIPTABLE_LINK_ENTITY;
        entityList[v13] = v19;
        v21 = v13;
      }
      else
      {
        DynEnt_GetBasisAndDynEntId(Ref, v8, basisOut, &dynEntIdOut);
        if ( basisOut[0] )
          goto LABEL_26;
        Def = DynEnt_GetDef(dynEntIdOut, DYNENT_BASIS_MODEL);
        if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 669, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        if ( Def->type != DYNENT_TYPE_SCRIPTABLEINST )
          goto LABEL_26;
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
          __debugbreak();
        if ( Def->scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
        {
          LODWORD(result) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
          LODWORD(extendedData) = Def->scriptableMapIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 676, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "dynEntDef->scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", extendedData, result) )
            __debugbreak();
        }
        v32[v13] = SCRIPTABLE_LINK_DYNENT;
        entityList[v13] = dynEntIdOut;
        v21 = v13;
      }
      HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v10, &v33[v21]);
      ++v13;
LABEL_26:
      ++v10;
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
      v11 = v31;
    }
    while ( v10 < NumHits );
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v24 = hkMemHeapAllocator();
  v34.m_ignoreBodies.m_size = 0;
  if ( v34.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v24, v34.m_ignoreBodies.m_data, 4, v34.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v34.m_ignoreBodies.m_data = NULL;
  v34.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v25 = hkMemHeapAllocator();
  v34.m_ignoreEntities.m_size = 0;
  if ( v34.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v25, v34.m_ignoreEntities.m_data, 8, v34.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v13;
}

/*
==============
ScriptableCl_DamagePart
==============
*/
void ScriptableCl_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const ScriptablePartDef *parentDef, const ScriptablePartDef *childDef, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ScriptableContext context; 
  const ScriptablePartDef *v8; 
  LocalClientNum_t v10; 
  __int64 scriptableIndex; 
  __int64 v12; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int stateId; 
  float v15; 
  float v16; 
  unsigned int v17; 
  ScriptableStateDef *v18; 
  unsigned int v19; 
  bool v20; 
  unsigned int v21; 
  team_t v22; 
  unsigned int LinkObject; 
  float damagePropagationFromParent; 
  const ScriptableDamageEvent *damageEvent; 
  float v26; 
  const ScriptableDamageEvent *v27; 
  float explosionRadius; 
  float explosionOuterDamage; 
  float explosionInnerDamage; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const char *tagName; 
  ScriptableInstanceContextSecure *v34; 
  const char *v35; 
  const ScriptableDamageEvent *v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  unsigned int v44; 
  float v45; 
  float v46; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceClientContext *v48; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int v50; 
  __int128 v51; 
  __int128 v53; 
  unsigned int v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  unsigned int v60; 
  ScriptablePartDef *parentPart; 
  bool v62; 
  const ScriptablePartDef *v63; 
  ScriptablePartDef *v64; 
  bool v65; 
  __int64 v66; 
  __int64 v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  team_t victimTeam; 
  unsigned int entityNumOut; 
  team_t teamOut; 
  const ScriptablePartDef *v75; 
  const ScriptablePartDef *v76; 
  tmat43_t<vec3_t> outTransform; 

  v76 = childDef;
  context = eventParams->context;
  v8 = childDef;
  v75 = parentDef;
  v10 = ScriptableCl_ContextToLocalClient(context);
  scriptableIndex = eventParams->scriptableIndex;
  v12 = v10;
  PartRuntime = ScriptableCl_GetPartRuntime(v10, eventParams->scriptableIndex, def);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 732, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  stateId = PartRuntime->stateId;
  v71 = 0;
  v69 = damage;
  v15 = 0.0;
  v16 = 0.0;
  if ( damage )
  {
    v17 = stateId;
    v70 = stateId + 1;
    do
    {
      if ( v17 >= def->numStates )
        break;
      v18 = &def->states[v17];
      if ( SLOBYTE(v18->base.flags) >= 0 )
        break;
      if ( v18->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 747, ASSERT_TYPE_ASSERT, "(stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
        __debugbreak();
      v19 = damageTypeFlags;
      if ( !ScriptableBg_IsValidAttacker(damageTypeFlags, v18->data.health.validAttackers) )
        goto LABEL_71;
      if ( v18->data.health.validAttackerTeams )
      {
        if ( !eventParams->damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 756, ASSERT_TYPE_ASSERT, "(eventParams->damageEvent)", (const char *)&queryFormat, "eventParams->damageEvent") )
          __debugbreak();
        ScriptableCl_GetTeam((const LocalClientNum_t)v12, eventParams->damageEvent->attackerEntNum, &teamOut, &entityNumOut);
        if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v12, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
        {
          LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v12, scriptableIndex);
          ScriptableCl_GetTeam((const LocalClientNum_t)v12, LinkObject, &victimTeam, &v68);
          v22 = victimTeam;
          v21 = v68;
        }
        else
        {
          v20 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          v21 = 2047;
          v68 = 2047;
          v22 = v20 ? TEAM_FOUR : TEAM_ZERO;
          victimTeam = v22;
        }
        if ( !ScriptableBg_IsValidAttackerTeam(v18->data.health.validAttackerTeams, teamOut, v22, entityNumOut, v21) )
          goto LABEL_71;
      }
      if ( !ScriptableBg_IsValidDamageCause(damageTypeFlags, v18->data.health.validDamageCause) || v18->data.health.numWeaponClasses && !ScriptableBg_IsValidWeaponClass(eventParams, v18) || v18->data.health.numWeapons && !ScriptableBg_IsValidWeapon(eventParams, v18) )
        goto LABEL_71;
      damagePropagationFromParent = FLOAT_1_0;
      if ( v75 )
      {
        damagePropagationFromParent = v18->data.health.damagePropagationFromParent;
      }
      else if ( v8 )
      {
        damagePropagationFromParent = v18->data.health.damagePropagationFromChild;
      }
      damageEvent = eventParams->damageEvent;
      v26 = FLOAT_1_0;
      if ( damageEvent && ScriptableBg_IsSplashDamage(damageEvent->mod) && v18->data.health.localizeSplashDamage )
      {
        v27 = eventParams->damageEvent;
        explosionRadius = v27->explosionRadius;
        explosionOuterDamage = v27->explosionOuterDamage;
        explosionInnerDamage = v27->explosionInnerDamage;
        if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v12, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 815, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
          __debugbreak();
        if ( !ScriptableCl_GetDObj((const LocalClientNum_t)v12, scriptableIndex) )
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v12, scriptableIndex);
          if ( InstanceCommonContext->def )
            name = InstanceCommonContext->def->name;
          else
            name = "<unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144073560, 307i64, name);
        }
        if ( !ScriptableCl_GetBoneTransform((const LocalClientNum_t)v12, scriptableIndex, (const scr_string_t)def->scrTagName, &outTransform, 0) )
        {
          tagName = def->tagName;
          v34 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v12, scriptableIndex);
          if ( v34->def )
            v35 = v34->def->name;
          else
            v35 = "<unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440735E0, 308i64, v35, tagName);
        }
        v36 = eventParams->damageEvent;
        v37 = v36->start.v[1];
        v38 = v36->start.v[0];
        v39 = v36->start.v[2];
        v40 = (float)((float)((float)(v37 - outTransform.m[3].v[1]) * (float)(v37 - outTransform.m[3].v[1])) + (float)((float)(v38 - outTransform.m[3].v[0]) * (float)(v38 - outTransform.m[3].v[0]))) + (float)((float)(v39 - outTransform.m[3].v[2]) * (float)(v39 - outTransform.m[3].v[2]));
        if ( v40 > (float)(explosionRadius * explosionRadius) )
          goto LABEL_71;
        v41 = v36->end.v[0] - v38;
        v42 = v36->end.v[2] - v39;
        v43 = 1.0 / explosionRadius;
        v44 = (int)(float)((float)((float)(1.0 - (float)(fsqrt(v40) * v43)) * (float)(explosionInnerDamage - explosionOuterDamage)) + explosionOuterDamage);
        if ( v44 )
          v26 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)(float)((float)((float)(1.0 - (float)(fsqrt((float)((float)((float)(v36->end.v[1] - v37) * (float)(v36->end.v[1] - v37)) + (float)(v41 * v41)) + (float)(v42 * v42)) * v43)) * (float)(explosionInnerDamage - explosionOuterDamage)) + explosionOuterDamage)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)v44).m128_f32[0];
      }
      v45 = v26 * damagePropagationFromParent;
      if ( (float)(v26 * damagePropagationFromParent) <= 0.0 )
        goto LABEL_71;
      v46 = (float)v69;
      if ( (float)(v46 * v45) < (float)v18->data.health.minimumDamage )
        goto LABEL_71;
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v67) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v66) = scriptableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      if ( (unsigned int)v12 >= 2 )
      {
        LODWORD(v67) = 2;
        LODWORD(v66) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      eventStreamBufferOffsetClient = def->eventStreamBufferOffsetClient;
      v48 = &g_scriptableCl_instanceContexts[v12][scriptableIndex];
      if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)v48->commonContext.eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 875, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      eventStreamBuffer = v48->commonContext.eventStreamBuffer;
      v50 = v70;
      v51 = *(unsigned int *)&eventStreamBuffer[eventStreamBufferOffsetClient];
      v53 = v51;
      *(float *)&v53 = *(float *)&v51 / v45;
      _XMM0 = v53;
      __asm { vminss  xmm1, xmm0, xmm7 }
      v71 += (int)*(float *)&_XMM1;
      v55 = v69 - (int)*(float *)&_XMM1;
      v56 = *(float *)&v51 - (float)(*(float *)&_XMM1 * v45);
      *(float *)&eventStreamBuffer[eventStreamBufferOffsetClient] = v56;
      v69 = v55;
      if ( v56 > 0.0 || v50 >= def->numStates )
      {
        v58 = (float)((float)(*(float *)&_XMM1 * v45) * v45) * v18->data.health.damagePropagationToParent;
        v59 = (float)((float)(*(float *)&_XMM1 * v45) * v45) * v18->data.health.damagePropagationToChild;
      }
      else
      {
        v57 = (float)v55;
        v58 = (float)(v57 * v45) * v18->data.health.damagePropagationToParent;
        v59 = (float)(v57 * v45) * v18->data.health.damagePropagationToChild;
      }
      v16 = v59 + v16;
      v15 = v58 + v15;
      if ( (def->flags & 4) != 0 )
        break;
      if ( v56 > 0.0 )
        break;
      if ( v50 >= def->numStates )
        break;
      ScriptableCl_InitEventParams((const LocalClientNum_t)v12, (ScriptableEventParams *)&outTransform, scriptableIndex, def);
      ++v17;
      *(_QWORD *)outTransform.row2.v = eventParams->damageEvent;
      v70 = v50 + 1;
      ScriptableBg_ChangePartState((ScriptableEventParams *)&outTransform, v17, 1);
      v8 = v76;
    }
    while ( v71 < damage );
    v19 = damageTypeFlags;
LABEL_71:
    v60 = 0;
    if ( v15 >= 1.0 )
    {
      parentPart = def->parentPart;
      if ( parentPart )
      {
        if ( v75 != parentPart )
        {
          v62 = (def->flags & 2) == 0 && (parentPart->flags & 2) == 0;
          if ( (def->flags & 2) == 0 || v62 )
            ScriptableCl_DamagePart(eventParams, parentPart, NULL, def, v19, (int)v15);
        }
      }
    }
    if ( v16 >= 1.0 && def->numChildParts )
    {
      v63 = v76;
      do
      {
        v64 = &def->childParts[v60];
        if ( v64 != v63 )
        {
          v65 = (def->flags & 2) == 0 && (v64->flags & 2) == 0;
          if ( (def->flags & 2) != 0 || v65 )
            ScriptableCl_DamagePart(eventParams, v64, def, NULL, v19, (int)v16);
        }
        ++v60;
      }
      while ( v60 < def->numChildParts );
    }
  }
}

/*
==============
ScriptableCl_EntityBulletHitEvent
==============
*/
void ScriptableCl_EntityBulletHitEvent(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int inflictorEntNum, const vec3_t *start, const vec3_t *end, const int mod, const Weapon *weapon, const int isAlternate, const scr_string_t partName)
{
  centity_t *Entity; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  float v15; 
  float v16; 
  const ScriptableDef *def; 
  float v18; 
  float v19; 
  float v20; 
  int DamageForWeapon; 
  __m256i v22; 
  __int128 v23; 
  double v24; 
  int v25; 
  ScriptableDamageEvent damageEvent; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 83, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, inflictorEntNum);
  damageEvent.context = ScriptableCl_LocalClientToContext(localClientNum);
  damageEvent.callbacks = ScriptableCl_GetCallbackTable();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  v15 = start->v[0];
  v16 = start->v[1];
  def = InstanceCommonContext->def;
  damageEvent.inflictorEntState = &Entity->nextState;
  damageEvent.attackerEntState = &Entity->nextState;
  damageEvent.start.v[0] = v15;
  v18 = start->v[2];
  damageEvent.start.v[1] = v16;
  damageEvent.end.v[0] = end->v[0];
  v19 = end->v[2];
  damageEvent.start.v[2] = v18;
  v20 = end->v[1];
  damageEvent.def = def;
  damageEvent.end.v[2] = v19;
  damageEvent.partName = partName;
  damageEvent.end.v[1] = v20;
  damageEvent.scriptableIndex = scriptableIndex;
  damageEvent.inflictorEntNum = inflictorEntNum;
  damageEvent.inflictorScriptableIndex = 500000;
  damageEvent.attackerEntNum = inflictorEntNum;
  damageEvent.mod = mod;
  DamageForWeapon = ScriptableBg_GetDamageForWeapon(weapon, isAlternate, mod);
  v22 = *(__m256i *)&weapon->weaponIdx;
  v23 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  damageEvent.damage = DamageForWeapon;
  damageEvent.isAlternate = isAlternate;
  *(__m256i *)&damageEvent.weapon.weaponIdx = v22;
  v24 = *(double *)&weapon->attachmentVariationIndices[21];
  *(_QWORD *)&damageEvent.dFlags = 0i64;
  v25 = *(_DWORD *)&weapon->weaponCamo;
  *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = v24;
  *(_DWORD *)&damageEvent.weapon.weaponCamo = v25;
  *(_OWORD *)&damageEvent.weapon.attachmentVariationIndices[5] = v23;
  ScriptableBg_ProcessDamageEvent(&damageEvent);
}

/*
==============
ScriptableCl_ExplosionDamageEvent
==============
*/
void ScriptableCl_ExplosionDamageEvent(const LocalClientNum_t localClientNum, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const int explosionInnerDamage, const int explosionOuterDamage, const int runOcclusionTraces)
{
  ScriptableContext v14; 

  Sys_ProfBeginNamedEvent(0xFF808000, "ScriptableCl_ExplosionDamageEvent");
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 131, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v14 = ScriptableCl_LocalClientToContext(localClientNum);
  ScriptableBg_RadiusDamageEvent(v14, &s_clRadiusCallbackTable, inflictorEntNum, attackerEntNum, weapon, isAlternate, position, outerRadius, (float)explosionInnerDamage, (float)explosionOuterDamage, MOD_EXPLOSIVE, runOcclusionTraces);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_MeleeEvent
==============
*/
void ScriptableCl_MeleeEvent(const LocalClientNum_t localClientNum, const int sourceEntityNum, const Weapon *weapon, const int isAlternate)
{
  __int64 v5; 
  centity_t *Entity; 
  entityType_s eType; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  cg_t *v11; 
  const characterInfo_t *CharacterInfo; 
  int meleeChargeEnt; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v15; 
  bool v16; 
  bool v17; 
  bool v18; 
  unsigned int v19; 
  double MeleeRangeByWeapon; 
  float v21; 
  double MeleeWidth; 
  float v23; 
  double MeleeHeight; 
  float *v25; 
  float v26; 
  float v27; 
  __int64 isSliding; 
  __int64 v29; 
  vec3_t outEyePos; 
  vec3_t outForward; 
  vec3_t outRight; 
  vec3_t outUp; 
  vec3_t end; 

  v5 = sourceEntityNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 210, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, v5);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 214, ASSERT_TYPE_ASSERT, "(CENextValid( attacker ))", (const char *)&queryFormat, "CENextValid( attacker )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = Entity->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 215, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &attacker->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &attacker->nextState )") )
    __debugbreak();
  if ( CG_GetViewDirection(localClientNum, v5, &outForward, &outRight, &outUp) )
  {
    CG_CalcEyePoint(localClientNum, v5, &outEyePos);
    outEyePos.v[0] = (float)(-10.0 * outForward.v[0]) + outEyePos.v[0];
    outEyePos.v[1] = (float)(-10.0 * outForward.v[1]) + outEyePos.v[1];
    outEyePos.v[2] = (float)(-10.0 * outForward.v[2]) + outEyePos.v[2];
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v11->IsMP(v11) )
    {
      if ( (unsigned int)v5 >= v11[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(isSliding) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", isSliding, v11[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v11[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v5);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v11, v5);
    }
    if ( CharacterInfo )
      meleeChargeEnt = CharacterInfo->meleeChargeEnt;
    else
      meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x14u);
    v15 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex >= 0 )
    {
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v29) = 64;
        LODWORD(isSliding) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", isSliding, v29) )
          __debugbreak();
      }
      v16 = ((0x80000000 >> (v15 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v15 >> 5]) != 0;
    }
    else
    {
      v16 = 0;
    }
    v17 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
    v18 = meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE;
    v19 = 0;
    MeleeRangeByWeapon = BG_GetMeleeRangeByWeapon(weapon, isAlternate != 0, v18, v16, PM_EFF_STANCE_DEFAULT, v17);
    v21 = *(float *)&MeleeRangeByWeapon;
    MeleeWidth = BG_GetMeleeWidth(weapon, isAlternate != 0);
    v23 = *(float *)&MeleeWidth;
    MeleeHeight = BG_GetMeleeHeight(weapon, isAlternate != 0);
    v25 = (float *)traceOffsets_0 + 1;
    do
    {
      v26 = v23 * *(v25 - 1);
      v27 = *(float *)&MeleeHeight * *v25;
      end.v[0] = (float)((float)((float)(v21 * outForward.v[0]) + outEyePos.v[0]) + (float)(v26 * outRight.v[0])) + (float)(v27 * outUp.v[0]);
      end.v[1] = (float)((float)((float)(v21 * outForward.v[1]) + outEyePos.v[1]) + (float)(v26 * outRight.v[1])) + (float)(v27 * outUp.v[1]);
      end.v[2] = (float)((float)((float)(v21 * outForward.v[2]) + outEyePos.v[2]) + (float)(v26 * outRight.v[2])) + (float)(v27 * outUp.v[2]);
      if ( ScriptableCl_MeleeEventInternal(localClientNum, v5, weapon, isAlternate, &outEyePos, &end) )
        break;
      ++v19;
      v25 += 2;
    }
    while ( v19 < 5 );
  }
}

/*
==============
ScriptableCl_MeleeEventInternal
==============
*/
__int64 ScriptableCl_MeleeEventInternal(const LocalClientNum_t localClientNum, const int sourceEntityNum, const Weapon *weapon, const int isAlternate, const vec3_t *start, const vec3_t *end)
{
  const dvar_t *v9; 
  const vec4_t *v10; 
  unsigned __int16 EntityHitId; 
  const centity_t *Entity; 
  const dvar_t *v14; 
  const char *v15; 
  scr_string_t partName; 
  float v17; 
  unsigned int v18; 
  float v19; 
  float v20; 
  centity_t *v21; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  float v23; 
  const ScriptableDef *def; 
  const entityState_t *p_nextState; 
  float v26; 
  int DamageForWeapon; 
  __m256i v28; 
  __int128 v29; 
  double v30; 
  int v31; 
  unsigned int scriptableIndex; 
  int isAlternatea; 
  ScriptableDamageEvent damageEvent; 
  trace_t results; 

  isAlternatea = isAlternate;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 147, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, end, &bounds_origin, sourceEntityNum, 0, 41968017, 1, NULL, All);
  v9 = DCONST_DVARBOOL_scriptable_debug_melee;
  if ( !DCONST_DVARBOOL_scriptable_debug_melee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_melee") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = &colorLtBlue;
    if ( results.hitType != TRACE_HITTYPE_ENTITY )
      v10 = &colorRed;
    CG_DebugLine(start, end, v10, 1, 300);
  }
  if ( results.hitType != TRACE_HITTYPE_ENTITY )
    return 0i64;
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntityHitId >= 0x7FEu )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, EntityHitId);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 178, ASSERT_TYPE_ASSERT, "(hitEnt)", (const char *)&queryFormat, "hitEnt") )
    __debugbreak();
  if ( !ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex) )
    return 1i64;
  v14 = DCONST_DVARBOOL_scriptable_debug_melee;
  if ( !DCONST_DVARBOOL_scriptable_debug_melee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_melee") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v15 = SL_ConvertToString(results.partName);
    Com_Printf(14, "ScriptableCl_MeleeEventInternal: Hit Instance %i part %s.\n", scriptableIndex, v15);
  }
  partName = results.partName;
  v17 = (float)((float)(end->v[0] - start->v[0]) * results.fraction) + start->v[0];
  v18 = scriptableIndex;
  v19 = (float)((float)(end->v[1] - start->v[1]) * results.fraction) + start->v[1];
  v20 = (float)((float)(end->v[2] - start->v[2]) * results.fraction) + start->v[2];
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 83, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v21 = CG_GetEntity(localClientNum, sourceEntityNum);
  damageEvent.context = ScriptableCl_LocalClientToContext(localClientNum);
  damageEvent.callbacks = ScriptableCl_GetCallbackTable();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v18);
  v23 = start->v[1];
  def = InstanceCommonContext->def;
  p_nextState = &v21->nextState;
  LODWORD(v21) = isAlternatea;
  damageEvent.start.v[0] = start->v[0];
  v26 = start->v[2];
  damageEvent.def = def;
  damageEvent.start.v[2] = v26;
  damageEvent.start.v[1] = v23;
  damageEvent.end.v[0] = v17;
  damageEvent.end.v[1] = v19;
  damageEvent.end.v[2] = v20;
  damageEvent.scriptableIndex = v18;
  damageEvent.inflictorEntNum = sourceEntityNum;
  damageEvent.inflictorScriptableIndex = 500000;
  damageEvent.inflictorEntState = p_nextState;
  damageEvent.attackerEntNum = sourceEntityNum;
  damageEvent.attackerEntState = p_nextState;
  damageEvent.partName = partName;
  damageEvent.mod = 8;
  DamageForWeapon = ScriptableBg_GetDamageForWeapon(weapon, isAlternatea, 8);
  v28 = *(__m256i *)&weapon->weaponIdx;
  v29 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  damageEvent.damage = DamageForWeapon;
  damageEvent.isAlternate = (int)v21;
  *(__m256i *)&damageEvent.weapon.weaponIdx = v28;
  v30 = *(double *)&weapon->attachmentVariationIndices[21];
  *(_QWORD *)&damageEvent.dFlags = 0i64;
  v31 = *(_DWORD *)&weapon->weaponCamo;
  *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = v30;
  *(_DWORD *)&damageEvent.weapon.weaponCamo = v31;
  *(_OWORD *)&damageEvent.weapon.attachmentVariationIndices[5] = v29;
  ScriptableBg_ProcessDamageEvent(&damageEvent);
  return 1i64;
}

/*
==============
ScriptableCl_VehicleDamageClientScriptables
==============
*/
void ScriptableCl_VehicleDamageClientScriptables(const LocalClientNum_t localClientNum, const centity_t *vehicleCent, const Bounds *vehicleBounds)
{
  __int64 v5; 
  __int64 serverInstanceCount; 
  __int64 v7; 
  __int64 v8; 
  float v9; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *v11; 
  const dvar_t *v12; 
  const char *v13; 
  ScriptableContext v14; 
  LocalClientNum_t v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const ScriptableDef *v31; 
  ScriptableInstanceContextSecure *v32; 
  __int64 duration; 
  __int64 v34; 
  vec3_t outOrigin; 
  vec3_t v36; 
  vec3_t end; 
  __int64 v38; 
  __int64 v39; 
  vec3_t point; 
  __int64 v41; 
  ScriptableDamageEvent damageEvent; 
  Bounds bounds; 
  Bounds v44; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> rotation; 

  v41 = -2i64;
  v5 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 346, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  if ( !vehicleCent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 347, ASSERT_TYPE_ASSERT, "(vehicleCent)", (const char *)&queryFormat, "vehicleCent") )
    __debugbreak();
  if ( !vehicleBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 348, ASSERT_TYPE_ASSERT, "(vehicleBounds)", (const char *)&queryFormat, "vehicleBounds") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 351, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
    __debugbreak();
  CG_GetPoseOrigin(&vehicleCent->pose, &outOrigin);
  bounds.midPoint.v[0] = outOrigin.v[0] + vehicleBounds->midPoint.v[0];
  bounds.midPoint.v[1] = outOrigin.v[1] + vehicleBounds->midPoint.v[1];
  bounds.midPoint.v[2] = outOrigin.v[2] + vehicleBounds->midPoint.v[2];
  bounds.halfSize = vehicleBounds->halfSize;
  Bounds_ExpandToWidth(&bounds);
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  LODWORD(v38) = g_scriptableWorldCounts.totalInstanceCount;
  if ( (unsigned int)serverInstanceCount < g_scriptableWorldCounts.totalInstanceCount )
  {
    v7 = v5;
    v8 = 152 * serverInstanceCount;
    v39 = 152 * serverInstanceCount;
    v9 = bounds.halfSize.v[2];
    do
    {
      def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v5, serverInstanceCount)->def;
      if ( !def )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 366, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
      }
      if ( (def->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 367, ASSERT_TYPE_ASSERT, "(!ScriptableDef_HasServerInstance( def ))", (const char *)&queryFormat, "!ScriptableDef_HasServerInstance( def )") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)serverInstanceCount >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v34) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(duration) = serverInstanceCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, v34) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= 2 )
      {
        LODWORD(v34) = 2;
        LODWORD(duration) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", duration, v34) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v11 = (ScriptableInstanceContextSecure *)((char *)&g_scriptableCl_instanceContexts[v7]->commonContext + v8);
      v12 = DCONST_DVARBOOL_scriptable_debug_vehicle_client;
      if ( !DCONST_DVARBOOL_scriptable_debug_vehicle_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_vehicle_client") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
      {
        ScriptableInstanceContextSecure::GetOrigin(v11, serverInstanceCount, &point);
        v13 = j_va("S:%i", (unsigned int)serverInstanceCount);
        CG_DebugString(&point, &colorWhite, 1.0, v13, 0, 1);
        memset(&point, 0, sizeof(point));
      }
      if ( (def->flags & 0x80) != 0 )
      {
        ScriptableInstanceContextSecure::GetOrigin(v11, serverInstanceCount, &end);
        v14 = ScriptableCl_LocalClientToContext((const LocalClientNum_t)v5);
        v15 = ScriptableCl_ContextToLocalClient(v14);
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v15, serverInstanceCount);
        ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
        ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, serverInstanceCount, &v36);
        if ( ScriptableModel )
        {
          v18 = v36.v[0] + ScriptableModel->bounds.midPoint.v[0];
          v44.midPoint.v[0] = v18;
          v19 = v36.v[1] + ScriptableModel->bounds.midPoint.v[1];
          v44.midPoint.v[1] = v19;
          v20 = v36.v[2] + ScriptableModel->bounds.midPoint.v[2];
          v44.midPoint.v[2] = v20;
          v21 = ScriptableModel->bounds.halfSize.v[0];
          v44.halfSize.v[0] = v21;
          _XMM6 = LODWORD(ScriptableModel->bounds.halfSize.v[1]);
          v44.halfSize.v[1] = ScriptableModel->bounds.halfSize.v[1];
          v23 = ScriptableModel->bounds.halfSize.v[2];
        }
        else
        {
          v18 = v36.v[0];
          v44.midPoint = v36;
          v19 = v36.v[1];
          v20 = v36.v[2];
          v21 = FLOAT_1_0;
          v44.halfSize.v[0] = FLOAT_1_0;
          _XMM6 = LODWORD(FLOAT_1_0);
          v44.halfSize.v[1] = FLOAT_1_0;
          v23 = FLOAT_1_0;
        }
        v44.halfSize.v[2] = v23;
        memset(&v36, 0, sizeof(v36));
        v24 = v18 + end.v[0];
        v25 = v19 + end.v[1];
        v26 = v20 + end.v[2];
        if ( v21 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
          __debugbreak();
        if ( *(float *)&_XMM6 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
          __debugbreak();
        if ( v23 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
          __debugbreak();
        __asm { vmaxss  xmm2, xmm6, xmm8 }
        axis.m[1].v[0] = *(float *)&_XMM2;
        axis.m[1].v[1] = *(float *)&_XMM2;
        __asm { vmaxss  xmm3, xmm2, xmm7 }
        axis.m[1].v[2] = *(float *)&_XMM3;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(bounds.midPoint.v[0] - v24) & _xmm) < (float)(*(float *)&_XMM2 + bounds.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(bounds.midPoint.v[1] - v25) & _xmm) < (float)(*(float *)&_XMM2 + bounds.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(bounds.midPoint.v[2] - v26) & _xmm) < (float)(*(float *)&_XMM3 + v9) )
        {
          v29 = DCONST_DVARBOOL_scriptable_debug_vehicle_client;
          if ( !DCONST_DVARBOOL_scriptable_debug_vehicle_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_vehicle_client") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          if ( v29->current.enabled )
          {
            CG_GetPoseOrigin(&vehicleCent->pose, &outOrigin);
            CG_DebugLine(&outOrigin, &end, &colorYellow, 0, 1);
          }
          v30 = DCONST_DVARBOOL_scriptable_debug_vehicle_client;
          if ( !DCONST_DVARBOOL_scriptable_debug_vehicle_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_vehicle_client") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v30);
          if ( v30->current.enabled )
          {
            AnglesToAxis(&vehicleCent->pose.angles, &axis);
            CG_GetPoseOrigin(&vehicleCent->pose, &outOrigin);
            CG_DebugBoxOriented(&outOrigin, vehicleBounds, &axis, &colorGreen, 0, 1000);
            AnglesToAxis(&v11->angles, &rotation);
            CG_DebugBoxOriented(&end, &v44, &rotation, &colorBlue, 0, 1000);
          }
          if ( (int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 288, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
            __debugbreak();
          if ( !vehicleCent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 289, ASSERT_TYPE_ASSERT, "(vehicleCent)", (const char *)&queryFormat, "vehicleCent") )
            __debugbreak();
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 292, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
            __debugbreak();
          v31 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v5, serverInstanceCount)->def;
          if ( v31 )
          {
            damageEvent.context = ScriptableCl_LocalClientToContext((const LocalClientNum_t)v5);
            damageEvent.callbacks = ScriptableCl_GetCallbackTable();
            damageEvent.def = v31;
            damageEvent.scriptableIndex = serverInstanceCount;
            damageEvent.inflictorEntNum = vehicleCent->nextState.number;
            damageEvent.inflictorScriptableIndex = 500000;
            damageEvent.inflictorEntState = &vehicleCent->nextState;
            damageEvent.attackerEntNum = damageEvent.inflictorEntNum;
            damageEvent.attackerEntState = &vehicleCent->nextState;
            CG_GetPoseOrigin(&vehicleCent->pose, &damageEvent.start);
            v32 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v5, serverInstanceCount);
            ScriptableInstanceContextSecure::GetOrigin(v32, serverInstanceCount, &damageEvent.end);
            *(_OWORD *)&damageEvent.partName = _xmm;
            memset(&damageEvent.modelIndex, 0, 52);
            *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
            *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
            damageEvent.isAlternate = 0;
            ScriptableBg_ProcessDamageEvent(&damageEvent);
          }
        }
        memset(&end, 0, sizeof(end));
      }
      LODWORD(serverInstanceCount) = serverInstanceCount + 1;
      v8 = v39 + 152;
      v39 += 152i64;
      v7 = v5;
    }
    while ( (unsigned int)serverInstanceCount < (unsigned int)v38 );
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_VehicleDamageEvent
==============
*/
void ScriptableCl_VehicleDamageEvent(const LocalClientNum_t localClientNum, const centity_t *vehicleCent, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableDamageEvent damageEvent; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 288, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  if ( !vehicleCent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 289, ASSERT_TYPE_ASSERT, "(vehicleCent)", (const char *)&queryFormat, "vehicleCent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 292, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
    __debugbreak();
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( def )
  {
    damageEvent.context = ScriptableCl_LocalClientToContext(localClientNum);
    damageEvent.callbacks = ScriptableCl_GetCallbackTable();
    damageEvent.inflictorEntNum = vehicleCent->nextState.number;
    damageEvent.attackerEntNum = damageEvent.inflictorEntNum;
    damageEvent.def = def;
    damageEvent.scriptableIndex = scriptableIndex;
    damageEvent.inflictorScriptableIndex = 500000;
    damageEvent.inflictorEntState = &vehicleCent->nextState;
    damageEvent.attackerEntState = &vehicleCent->nextState;
    CG_GetPoseOrigin(&vehicleCent->pose, &damageEvent.start);
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &damageEvent.end);
    *(_OWORD *)&damageEvent.partName = _xmm;
    memset(&damageEvent.modelIndex, 0, 52);
    damageEvent.isAlternate = 0;
    *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    ScriptableBg_ProcessDamageEvent(&damageEvent);
  }
}

