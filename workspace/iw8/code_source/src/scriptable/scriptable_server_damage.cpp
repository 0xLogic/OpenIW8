/*
==============
ScriptableSv_DamagePart
==============
*/

void __fastcall ScriptableSv_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const ScriptablePartDef *parentDef, const ScriptablePartDef *childDef, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ?ScriptableSv_DamagePart@@YAXPEBUScriptableEventParams@@PEBUScriptablePartDef@@11II@Z(eventParams, def, parentDef, childDef, damageTypeFlags, damage);
}

/*
==============
ScriptableSv_SetDamageOwner
==============
*/

void __fastcall ScriptableSv_SetDamageOwner(const unsigned int scriptableIndex, const gentity_s *attacker)
{
  ?ScriptableSv_SetDamageOwner@@YAXIPEBUgentity_s@@@Z(scriptableIndex, attacker);
}

/*
==============
ScriptableSv_GetDamageOwner
==============
*/

bool __fastcall ScriptableSv_GetDamageOwner(const unsigned int scriptableIndex, unsigned int *outEntNum)
{
  return ?ScriptableSv_GetDamageOwner@@YA_NIPEAI@Z(scriptableIndex, outEntNum);
}

/*
==============
ScriptableSv_Damage
==============
*/

void __fastcall ScriptableSv_Damage(const gentity_s *inflictor, gentity_s *attacker, const unsigned int scriptableIndex, const vec3_t *hitPos, const vec3_t *hitDir, const int mod, const Weapon *weapon, const int isAlternate, const scr_string_t partName, const int providedDmg, const int dFlags, const unsigned int modelIndex)
{
  ?ScriptableSv_Damage@@YAXPEBUgentity_s@@PEAU1@IPEBTvec3_t@@2HAEBUWeapon@@HW4scr_string_t@@HHI@Z(inflictor, attacker, scriptableIndex, hitPos, hitDir, mod, weapon, isAlternate, partName, providedDmg, dFlags, modelIndex);
}

/*
==============
ScriptableSv_DevDestroyEverything
==============
*/

void __fastcall ScriptableSv_DevDestroyEverything(const unsigned int maxDamage)
{
  ?ScriptableSv_DevDestroyEverything@@YAXI@Z(maxDamage);
}

/*
==============
ScriptableSv_RadiusDamage
==============
*/

void __fastcall ScriptableSv_RadiusDamage(const gentity_s *inflictor, const gentity_s *attacker, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const float explosionInnerDamage, const float explosionOuterDamage, const meansOfDeath_t mod, const int runOcclusionTraces)
{
  ?ScriptableSv_RadiusDamage@@YAXPEBUgentity_s@@0AEBUWeapon@@HAEBTvec3_t@@MMMW4meansOfDeath_t@@H@Z(inflictor, attacker, weapon, isAlternate, position, outerRadius, explosionInnerDamage, explosionOuterDamage, mod, runOcclusionTraces);
}

/*
==============
ScriptableSv_GetInstanceIndexCallback
==============
*/
void ScriptableSv_GetInstanceIndexCallback(const ScriptableContext context, const unsigned int id, const ScriptableLinkType type, unsigned int *outScriptableIndex)
{
  const gentity_s *GEntity; 
  __int64 v8; 

  if ( !outScriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 579, ASSERT_TYPE_ASSERT, "( outScriptableIndex )", (const char *)&queryFormat, "outScriptableIndex") )
    __debugbreak();
  if ( type == SCRIPTABLE_LINK_ENTITY )
  {
    GEntity = G_GetGEntity(id);
    *outScriptableIndex = ScriptableSv_GetScriptableIndexForEntity(GEntity);
  }
  else
  {
    if ( type )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 580, ASSERT_TYPE_ASSERT, "( type == SCRIPTABLE_LINK_ENTITY || type == SCRIPTABLE_LINK_NONE )", (const char *)&queryFormat, "type == SCRIPTABLE_LINK_ENTITY || type == SCRIPTABLE_LINK_NONE") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 589, ASSERT_TYPE_ASSERT, "( type == SCRIPTABLE_LINK_NONE )", (const char *)&queryFormat, "type == SCRIPTABLE_LINK_NONE") )
        __debugbreak();
    }
    ScriptableCommon_AssertCountsInitialized();
    if ( id >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v8) = id;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 590, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "id doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v8, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    *outScriptableIndex = id;
  }
}

/*
==============
ScriptableSv_GetDefCallback
==============
*/
void ScriptableSv_GetDefCallback(const ScriptableContext context, const unsigned int scriptableIndex, const ScriptableDef **outDef)
{
  if ( !outDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 599, ASSERT_TYPE_ASSERT, "(outDef)", (const char *)&queryFormat, "outDef") )
    __debugbreak();
  *outDef = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
}

/*
==============
ScriptableSv_GetOriginAnglesCallback
==============
*/
void ScriptableSv_GetOriginAnglesCallback(const ScriptableContext context, const unsigned int scriptableIndex, vec3_t *outOrigin, vec3_t *outAngles)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  *outOrigin = InstanceCommonContext->origin;
  *outAngles = InstanceCommonContext->angles;
}

/*
==============
ScriptableSv_GetAbsBoundsCallback
==============
*/
void ScriptableSv_GetAbsBoundsCallback(const ScriptableContext context, const unsigned int scriptableIndex, Bounds *bounds)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  const gentity_s *Entity; 
  DObj *ServerDObjForEnt; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t out; 
  vec4_t quat; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 617, ASSERT_TYPE_ASSERT, "( bounds )", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( !ScriptableModel )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
    if ( ServerDObjForEnt )
    {
      if ( ServerDObjForEnt->numModels )
        ScriptableModel = *ServerDObjForEnt->models;
    }
  }
  if ( ScriptableModel )
  {
    AnglesToQuat(&InstanceCommonContext->angles, &quat);
    QuatTransform(&quat, &ScriptableModel->bounds.midPoint, &out);
    v9 = out.v[1];
    bounds->midPoint.v[0] = out.v[0] + InstanceCommonContext->origin.v[0];
    v10 = out.v[2];
    bounds->midPoint.v[1] = v9 + InstanceCommonContext->origin.v[1];
    bounds->midPoint.v[2] = v10 + InstanceCommonContext->origin.v[2];
    bounds->halfSize.v[0] = ScriptableModel->bounds.halfSize.v[0];
    bounds->halfSize.v[1] = ScriptableModel->bounds.halfSize.v[1];
    v11 = ScriptableModel->bounds.halfSize.v[2];
  }
  else
  {
    v11 = FLOAT_1_0;
    bounds->midPoint.v[0] = InstanceCommonContext->origin.v[0];
    bounds->midPoint.v[1] = InstanceCommonContext->origin.v[1];
    bounds->midPoint.v[2] = InstanceCommonContext->origin.v[2];
    bounds->halfSize.v[0] = 1.0;
    bounds->halfSize.v[1] = 1.0;
  }
  bounds->halfSize.v[2] = v11;
}

/*
==============
ScriptableSv_RadiusDamageCallback
==============
*/
void ScriptableSv_RadiusDamageCallback(const ScriptableContext context, const unsigned int scriptableIndex, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const vec3_t *startPos, const vec3_t *hitPos, const int mod, const Weapon *weapon, const int isAlternate, const int damagePoints, const float explosionOuterDamage, const float explosionInnerDamage, const float explosionRadius)
{
  __int64 v14; 
  __int64 v15; 
  gentity_s *v16; 
  gentity_s *v17; 
  unsigned int runtimeInstanceCount; 
  entityType_s eType; 
  const ScriptableDef *def; 
  const ScriptableDef *v21; 
  float v22; 
  float v23; 
  double v24; 
  float v25; 
  __int128 v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int scriptableIndexa[4]; 
  ScriptableDamageEvent damageEvent; 

  v14 = attackerEntNum;
  v15 = inflictorEntNum;
  if ( inflictorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 655, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, 2048) )
    __debugbreak();
  if ( (unsigned int)v14 >= 0x800 )
  {
    LODWORD(v29) = 2048;
    LODWORD(v28) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 656, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  v16 = &g_entities[v15];
  v17 = &g_entities[v14];
  if ( ScriptableSv_GetScriptableIndexForEntity(v16) == -1 )
    goto LABEL_27;
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(v16) < runtimeInstanceCount )
    goto LABEL_27;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = v16->s.eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
    goto LABEL_27;
  if ( !ScriptableSv_TryGetIndexForEntity(v16, scriptableIndexa) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 666, ASSERT_TYPE_ASSERT, "(ScriptableSv_TryGetIndexForEntity( inflictor, &inflictorScriptableIndex ))", (const char *)&queryFormat, "ScriptableSv_TryGetIndexForEntity( inflictor, &inflictorScriptableIndex )") )
    __debugbreak();
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndexa[0])->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 670, ASSERT_TYPE_ASSERT, "( inflictorDef )", (const char *)&queryFormat, "inflictorDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 268, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 0x1000) != 0 )
    goto LABEL_27;
  v21 = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 678, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (v21->flags & 0x400) == 0 )
  {
LABEL_27:
    damageEvent.context = SBL_CONTEXT_SERVER;
    damageEvent.callbacks = ScriptableSv_GetCallbackTable();
    damageEvent.def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
    damageEvent.scriptableIndex = scriptableIndex;
    damageEvent.inflictorEntNum = v15;
    ScriptableSv_TryGetIndexForEntity(v16, &damageEvent.inflictorScriptableIndex);
    damageEvent.inflictorEntState = &v16->s;
    damageEvent.attackerEntNum = v14;
    damageEvent.attackerEntState = &v17->s;
    v22 = startPos->v[1];
    damageEvent.start.v[0] = startPos->v[0];
    damageEvent.start.v[2] = startPos->v[2];
    damageEvent.start.v[1] = v22;
    damageEvent.partName = 0;
    v23 = hitPos->v[0];
    damageEvent.end.v[1] = hitPos->v[1];
    *(__m256i *)&damageEvent.weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    v24 = *(double *)&weapon->attachmentVariationIndices[21];
    damageEvent.end.v[0] = v23;
    v25 = hitPos->v[2];
    damageEvent.mod = mod;
    *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = v24;
    damageEvent.end.v[2] = v25;
    v26 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    damageEvent.damage = damagePoints;
    v27 = *(_DWORD *)&weapon->weaponCamo;
    damageEvent.explosionOuterDamage = explosionOuterDamage;
    *(_OWORD *)&damageEvent.weapon.attachmentVariationIndices[5] = v26;
    *(_DWORD *)&damageEvent.weapon.weaponCamo = v27;
    damageEvent.explosionRadius = explosionRadius;
    damageEvent.explosionInnerDamage = explosionInnerDamage;
    *(_QWORD *)&damageEvent.dFlags = 5i64;
    damageEvent.isAlternate = isAlternate;
    ScriptableSv_UpdateDamageOwner(scriptableIndex, v17);
    ScriptableBg_ProcessDamageEvent(&damageEvent);
  }
}

/*
==============
ScriptableSv_AreaScriptables
==============
*/
__int64 ScriptableSv_AreaScriptables(const ScriptableContext context, const Bounds *bounds, unsigned int *objectIdList, ScriptableLinkType *typeList, vec3_t *closestPoints, unsigned int maxcount)
{
  hknpShape *ShapeSphere; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int v11; 
  unsigned int i; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  unsigned __int16 RefId; 
  int v17; 
  __int64 v18; 
  unsigned int v19; 
  const gentity_s *v20; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v22; 
  HavokPhysics_IgnoreBodies v24; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v26; 
  char optionalInplaceBuffer[432]; 

  v26 = -2i64;
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, bounds->halfSize.v[0], optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v24, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v24, -261);
  extendedData.contents = -1;
  extendedData.collisionBuffer = 0.0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v24;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeSphere, &bounds->midPoint, &quat_identity, 0.0, &extendedData, CollisionQueryResult);
  HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
  v11 = 0;
  for ( i = 0; i < HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult); ++i )
  {
    if ( v11 >= maxcount )
      break;
    ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, i);
    if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 761, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
    RefSystem = Physics_GetRefSystem(Ref);
    RefId = Physics_GetRefId(Ref);
    if ( RefSystem == Physics_RefSystem_GEntities )
    {
      v19 = RefId;
      v20 = &g_entities[RefId];
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 777, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( ScriptableSv_GetScriptableIndexForEntity(v20) == -1 )
        continue;
      v18 = v11;
      typeList[v11] = SCRIPTABLE_LINK_ENTITY;
      objectIdList[v11] = v19;
    }
    else
    {
      if ( RefSystem != Physics_RefSystem_Scriptable )
        continue;
      v17 = Ref & 0x3FFFFF;
      if ( ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectType )
        continue;
      v18 = v11;
      typeList[v11] = SCRIPTABLE_LINK_NONE;
      objectIdList[v11] = v17;
    }
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, i, &closestPoints[v18]);
    ++v11;
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v21 = hkMemHeapAllocator();
  v24.m_ignoreBodies.m_size = 0;
  if ( v24.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v24.m_ignoreBodies.m_data, 4, v24.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v24.m_ignoreBodies.m_data = NULL;
  v24.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v22 = hkMemHeapAllocator();
  v24.m_ignoreEntities.m_size = 0;
  if ( v24.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v24.m_ignoreEntities.m_data, 8, v24.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v11;
}

/*
==============
ScriptableSv_Damage
==============
*/
void ScriptableSv_Damage(const gentity_s *inflictor, gentity_s *attacker, const unsigned int scriptableIndex, const vec3_t *hitPos, const vec3_t *hitDir, const int mod, const Weapon *weapon, const int isAlternate, const scr_string_t partName, const int providedDmg, const int dFlags, const unsigned int modelIndex)
{
  const dvar_t *v12; 
  const ScriptableDef *def; 
  unsigned int number; 
  const vec3_t *v19; 
  const vec3_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  int DamageForWeapon; 
  float v25; 
  __m256i v26; 
  __int128 v27; 
  double v28; 
  ScriptableDamageEvent damageEvent; 

  v12 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 154, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
      __debugbreak();
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 155, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    if ( !ScriptableBg_IsSplashDamage(mod) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_FIRE) && mod == 12 && attacker->vehicle )
        G_Utils_AddEvent(attacker, 0xC7u, scriptableIndex);
      damageEvent.context = SBL_CONTEXT_SERVER;
      damageEvent.callbacks = ScriptableSv_GetCallbackTable();
      def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
      number = inflictor->s.number;
      damageEvent.def = def;
      damageEvent.scriptableIndex = scriptableIndex;
      damageEvent.inflictorEntNum = number;
      ScriptableSv_TryGetIndexForEntity(inflictor, &damageEvent.inflictorScriptableIndex);
      v19 = &vec3_origin;
      damageEvent.attackerEntNum = attacker->s.number;
      v20 = &vec3_origin;
      damageEvent.inflictorEntState = &inflictor->s;
      if ( hitPos )
        v20 = hitPos;
      damageEvent.attackerEntState = &attacker->s;
      damageEvent.mod = mod;
      v21 = v20->v[0];
      v22 = v20->v[1];
      v23 = v20->v[2];
      damageEvent.end.v[0] = v20->v[0];
      if ( hitDir )
        v19 = hitDir;
      damageEvent.end.v[1] = v22;
      damageEvent.partName = partName;
      DamageForWeapon = providedDmg;
      v25 = v22 - v19->v[1];
      damageEvent.start.v[0] = v21 - v19->v[0];
      damageEvent.start.v[2] = v23 - v19->v[2];
      damageEvent.end.v[2] = v23;
      damageEvent.start.v[1] = v25;
      if ( providedDmg <= 0 )
        DamageForWeapon = ScriptableBg_GetDamageForWeapon(weapon, isAlternate, mod);
      v26 = *(__m256i *)&weapon->weaponIdx;
      v27 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
      damageEvent.damage = DamageForWeapon;
      damageEvent.dFlags = dFlags;
      *(__m256i *)&damageEvent.weapon.weaponIdx = v26;
      v28 = *(double *)&weapon->attachmentVariationIndices[21];
      damageEvent.modelIndex = modelIndex;
      *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
      *(_OWORD *)&damageEvent.weapon.attachmentVariationIndices[5] = v27;
      *(double *)&damageEvent.weapon.attachmentVariationIndices[21] = v28;
      damageEvent.isAlternate = isAlternate;
      ScriptableSv_UpdateDamageOwner(scriptableIndex, attacker);
      ScriptableBg_ProcessDamageEvent(&damageEvent);
    }
  }
}

/*
==============
ScriptableSv_DamageNotify
==============
*/
void ScriptableSv_DamageNotify(ScriptableEventParams *eventParams, const unsigned int damageDone, const unsigned int initialStateIndex, const unsigned int finalStateIndex)
{
  unsigned int scriptableIndex; 
  unsigned int runtimeInstanceCount; 
  unsigned int v8; 
  __int64 v9; 
  gentity_s *Entity; 
  const ScriptableDamageEvent *damageEvent; 
  gentity_s *v12; 
  __int64 inflictorEntNum; 
  const gentity_s *v14; 
  const gentity_s *v15; 
  int mod; 
  int dFlags; 
  unsigned int modelIndex; 
  scr_string_t partName; 
  bool isAlternate; 
  vec3_t *InstanceOrigin; 
  vec3_t *point; 
  __int64 damage; 
  vec3_t end; 
  vec3_t dir; 
  Weapon r_weapon; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 240, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 241, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(point) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", point, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  v8 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
  if ( scriptableIndex >= v8 )
  {
    v9 = scriptableIndex - v8;
    if ( (unsigned int)v9 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
    {
      LODWORD(damage) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
      LODWORD(point) = scriptableIndex - v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", point, damage) )
        __debugbreak();
    }
    if ( cm.mapEnts->scriptableMapEnts.mapInstances[v9].targetname )
    {
      if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
      {
        Entity = ScriptableSv_GetEntity(scriptableIndex);
        damageEvent = eventParams->damageEvent;
        v12 = Entity;
        if ( damageEvent )
        {
          if ( damageEvent->attackerEntNum >= 0x800 )
          {
            LODWORD(damage) = 2048;
            LODWORD(point) = damageEvent->attackerEntNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvt->attackerEntNum ) < (unsigned)( ( 2048 ) )", "damageEvt->attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", point, damage) )
              __debugbreak();
          }
          inflictorEntNum = damageEvent->inflictorEntNum;
          v14 = &g_entities[damageEvent->attackerEntNum];
          if ( (unsigned int)inflictorEntNum > 0x7FE )
            v15 = NULL;
          else
            v15 = &g_entities[inflictorEntNum];
          end = damageEvent->end;
          dir.v[0] = damageEvent->end.v[0] - damageEvent->start.v[0];
          dir.v[1] = damageEvent->end.v[1] - damageEvent->start.v[1];
          dir.v[2] = damageEvent->end.v[2] - damageEvent->start.v[2];
          mod = damageEvent->mod;
          dFlags = damageEvent->dFlags;
          modelIndex = damageEvent->modelIndex;
          partName = damageEvent->partName;
          r_weapon = damageEvent->weapon;
          isAlternate = damageEvent->isAlternate == 1;
        }
        else
        {
          v14 = Entity;
          v15 = Entity;
          InstanceOrigin = (vec3_t *)ScriptableSv_GetInstanceOrigin(scriptableIndex);
          mod = 0;
          dFlags = 0;
          modelIndex = 0;
          partName = 0;
          end = *InstanceOrigin;
          memset(&r_weapon, 0, 48);
          dir.v[0] = 0.0;
          dir.v[1] = 0.0;
          dir.v[2] = 0.0;
          *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
          isAlternate = 0;
          *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
        }
        G_Combat_DamageNotify(scr_const.damage, v12, v14, v15, &dir, &end, damageDone, mod, dFlags, modelIndex, partName, &r_weapon, isAlternate, NULL);
      }
      else
      {
        Com_PrintError(29, "ScriptableSv_DamageNotify: Unepxected non-entity damage notify for map scriptable %u\n", scriptableIndex);
      }
    }
  }
}

/*
==============
ScriptableSv_DamagePart
==============
*/
void ScriptableSv_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const ScriptablePartDef *parentDef, const ScriptablePartDef *childDef, const unsigned int damageTypeFlags, const unsigned int damage)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  const ScriptablePartDef *v14; 
  unsigned int scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int stateId; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int128 v22; 
  __int128 v23; 
  ScriptableStateDef *v24; 
  ScriptableInstanceContext *InstanceCommonContext; 
  float damagePropagationFromParent; 
  const ScriptableDamageEvent *damageEvent; 
  float v28; 
  const ScriptableDamageEvent *v29; 
  float explosionRadius; 
  float explosionOuterDamage; 
  float explosionInnerDamage; 
  const gentity_s *Entity; 
  const DObj *ServerDObjForEnt; 
  ScriptableInstanceContext *v35; 
  const char *name; 
  scr_string_t scrTagName; 
  const XModel *ScriptableModel; 
  const char *v39; 
  const char *tagName; 
  ScriptableInstanceContext *v41; 
  const char *v42; 
  const char *v43; 
  ScriptableInstanceContext *v44; 
  const char *v45; 
  const ScriptableDamageEvent *v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  unsigned int v54; 
  float v55; 
  unsigned int v56; 
  float v57; 
  __int64 eventStreamBufferOffsetServer; 
  unsigned __int8 *eventStreamBuffer; 
  __int128 v60; 
  __int128 v62; 
  unsigned int v64; 
  float v65; 
  float v66; 
  unsigned int v67; 
  __int128 v68; 
  __int128 v69; 
  float v70; 
  ScriptablePartDef *parentPart; 
  unsigned int v72; 
  ScriptablePartDef *v73; 
  unsigned __int8 inOutIndex[8]; 
  const ScriptablePartDef *v75; 
  unsigned int v76; 
  unsigned int finalStateIndex; 
  unsigned int victimOwnerEntNum; 
  unsigned int entityNumOut; 
  team_t victimTeam; 
  team_t teamOut; 
  float v82; 
  float v83; 
  unsigned int initialStateIndex[2]; 
  ScriptableInstanceContextSecure *instanceContext; 
  const ScriptablePartDef *v86; 
  int modelIndex; 
  ScriptableEventParams outParams; 
  tmat43_t<vec3_t> outTagMat; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  __int128 v93; 
  __int128 v94; 
  __int128 v95; 
  __int128 v96; 

  v14 = childDef;
  v93 = v9;
  v75 = childDef;
  v86 = parentDef;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 328, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  instanceContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  g_damageProcessingScriptable = scriptableIndex;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, def);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 336, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  stateId = PartRuntime->stateId;
  v19 = 0;
  v20 = 0;
  *(_DWORD *)inOutIndex = 0;
  v21 = stateId;
  initialStateIndex[1] = stateId;
  v76 = damage;
  finalStateIndex = stateId;
  v22 = 0i64;
  v23 = 0i64;
  if ( damage )
  {
    v96 = v6;
    v95 = v7;
    v94 = v8;
    v92 = v10;
    v91 = v11;
    v90 = v12;
    do
    {
      if ( v21 >= def->numStates )
        break;
      v24 = &def->states[v21];
      if ( SLOBYTE(v24->base.flags) >= 0 )
        break;
      if ( v24->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 351, ASSERT_TYPE_ASSERT, "( stateDef->type == Scriptable_StateType_Health )", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
        __debugbreak();
      if ( !ScriptableBg_IsValidAttacker(damageTypeFlags, v24->data.health.validAttackers) )
        break;
      if ( v24->data.health.validAttackerTeams )
      {
        if ( !eventParams->damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 360, ASSERT_TYPE_ASSERT, "( eventParams->damageEvent )", (const char *)&queryFormat, "eventParams->damageEvent") )
          __debugbreak();
        if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 361, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
          __debugbreak();
        ScriptableSv_GetTeam(eventParams->damageEvent->attackerEntNum, &teamOut, &entityNumOut);
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        ScriptableSv_GetTeam(InstanceCommonContext->linkedObjectIndex, &victimTeam, &victimOwnerEntNum);
        if ( !ScriptableBg_IsValidAttackerTeam(v24->data.health.validAttackerTeams, teamOut, victimTeam, entityNumOut, victimOwnerEntNum) )
          break;
      }
      if ( !ScriptableBg_IsValidDamageCause(damageTypeFlags, v24->data.health.validDamageCause) || v24->data.health.numWeaponClasses && !ScriptableBg_IsValidWeaponClass(eventParams, v24) || v24->data.health.numWeapons && !ScriptableBg_IsValidWeapon(eventParams, v24) )
        break;
      damagePropagationFromParent = FLOAT_1_0;
      if ( v86 )
      {
        damagePropagationFromParent = v24->data.health.damagePropagationFromParent;
      }
      else if ( v75 )
      {
        damagePropagationFromParent = v24->data.health.damagePropagationFromChild;
      }
      damageEvent = eventParams->damageEvent;
      v28 = FLOAT_1_0;
      if ( damageEvent && ScriptableBg_IsSplashDamage(damageEvent->mod) && v24->data.health.localizeSplashDamage )
      {
        v29 = eventParams->damageEvent;
        explosionRadius = v29->explosionRadius;
        explosionOuterDamage = v29->explosionOuterDamage;
        explosionInnerDamage = v29->explosionInnerDamage;
        Entity = ScriptableSv_GetEntity(scriptableIndex);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 414, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
          __debugbreak();
        ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
        if ( !ServerDObjForEnt )
        {
          v35 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          if ( v35->def )
            name = v35->def->name;
          else
            name = "<Unknown>";
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408EF50, 902i64, name);
        }
        scrTagName = def->scrTagName;
        inOutIndex[4] = -2;
        if ( DObjGetBoneIndexInternal_26(ServerDObjForEnt, scrTagName, &inOutIndex[4], &modelIndex) )
        {
          G_Utils_DObjGetWorldBoneIndexMatrix(Entity, inOutIndex[4], &outTagMat);
          v82 = outTagMat.m[3].v[0];
          v83 = outTagMat.m[3].v[1];
          initialStateIndex[0] = LODWORD(outTagMat.m[3].v[2]);
        }
        else
        {
          ScriptableModel = BG_XCompositeModel_GetScriptableModel(instanceContext);
          if ( ScriptableModel )
          {
            v39 = ScriptableModel->name;
            tagName = def->tagName;
            v41 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
            if ( v41->def )
              v42 = v41->def->name;
            else
              v42 = "<Unknown>";
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408EFC0, 903i64, v42, tagName, v39);
          }
          else
          {
            v43 = def->tagName;
            v44 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
            if ( v44->def )
              v45 = v44->def->name;
            else
              v45 = "<Unknown>";
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408F020, 904i64, v45, v43);
          }
        }
        v46 = eventParams->damageEvent;
        v47 = v46->start.v[1];
        v48 = v46->start.v[0];
        v49 = v46->start.v[2];
        v50 = (float)((float)((float)(v47 - v83) * (float)(v47 - v83)) + (float)((float)(v48 - v82) * (float)(v48 - v82))) + (float)((float)(v49 - *(float *)initialStateIndex) * (float)(v49 - *(float *)initialStateIndex));
        if ( v50 > (float)(explosionRadius * explosionRadius) )
          break;
        v21 = finalStateIndex;
        v51 = v46->end.v[0] - v48;
        v52 = v46->end.v[2] - v49;
        v53 = 1.0 / explosionRadius;
        v54 = (int)(float)((float)((float)(1.0 - (float)(fsqrt(v50) * v53)) * (float)(explosionInnerDamage - explosionOuterDamage)) + explosionOuterDamage);
        if ( v54 )
          v28 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)(float)((float)((float)(1.0 - (float)(fsqrt((float)((float)((float)(v46->end.v[1] - v47) * (float)(v46->end.v[1] - v47)) + (float)(v51 * v51)) + (float)(v52 * v52)) * v53)) * (float)(explosionInnerDamage - explosionOuterDamage)) + explosionOuterDamage)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)v54).m128_f32[0];
      }
      v55 = v28 * damagePropagationFromParent;
      if ( (float)(v28 * damagePropagationFromParent) <= 0.0 )
        break;
      v56 = v76;
      v57 = (float)v76;
      if ( (float)(v57 * v55) < (float)v24->data.health.minimumDamage )
        break;
      eventStreamBufferOffsetServer = def->eventStreamBufferOffsetServer;
      if ( eventStreamBufferOffsetServer + 4 > (unsigned __int64)instanceContext->eventStreamBufferSize )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 483, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v56 = v76;
      }
      eventStreamBuffer = instanceContext->eventStreamBuffer;
      v60 = *(unsigned int *)&eventStreamBuffer[eventStreamBufferOffsetServer];
      v62 = v60;
      *(float *)&v62 = *(float *)&v60 / v55;
      _XMM0 = v62;
      __asm { vminss  xmm1, xmm0, xmm7 }
      *(_DWORD *)inOutIndex += (int)*(float *)&_XMM1;
      v64 = v56 - (int)*(float *)&_XMM1;
      v65 = *(float *)&_XMM1 * v55;
      v66 = *(float *)&v60 - (float)(*(float *)&_XMM1 * v55);
      *(float *)&eventStreamBuffer[eventStreamBufferOffsetServer] = v66;
      v76 = v64;
      if ( v66 > 0.0 )
        goto LABEL_70;
      v67 = v21 + 1;
      if ( v21 + 1 >= def->numStates )
      {
        if ( v66 <= 0.0 && v21 + 1 == def->numStates )
        {
          v70 = (float)v64;
          *(float *)&v22 = *(float *)&v22 + (float)((float)(v70 * v55) * v24->data.health.damagePropagationToParent);
          *(float *)&v23 = *(float *)&v23 + (float)((float)(v70 * v55) * v24->data.health.damagePropagationToChild);
          break;
        }
LABEL_70:
        *(float *)&v23 = *(float *)&v23 + (float)((float)(v65 * v55) * v24->data.health.damagePropagationToChild);
        *(float *)&v22 = *(float *)&v22 + (float)((float)(v65 * v55) * v24->data.health.damagePropagationToParent);
        break;
      }
      v68 = v23;
      *(float *)&v68 = *(float *)&v23 + (float)((float)(v65 * v55) * v24->data.health.damagePropagationToChild);
      v23 = v68;
      v69 = v22;
      *(float *)&v69 = *(float *)&v22 + (float)((float)(v65 * v55) * v24->data.health.damagePropagationToParent);
      v22 = v69;
      ScriptableSv_InitEventParams((ScriptableEventParams *)&outTagMat, scriptableIndex, def);
      *(_QWORD *)outTagMat.row2.v = eventParams->damageEvent;
      finalStateIndex = ++v21;
      ScriptableBg_ChangePartState((ScriptableEventParams *)&outTagMat, v67, 1);
    }
    while ( *(_DWORD *)inOutIndex < damage );
    v14 = v75;
    v20 = *(_DWORD *)inOutIndex;
  }
  ScriptableSv_InitEventParams(&outParams, scriptableIndex, def);
  outParams.damageEvent = eventParams->damageEvent;
  ScriptableSv_DamageNotify(&outParams, v20, initialStateIndex[1], finalStateIndex);
  if ( *(float *)&v22 < 1.0 || (parentPart = def->parentPart) == NULL || v86 == parentPart )
  {
    v72 = damageTypeFlags;
  }
  else
  {
    if ( (parentPart->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 540, ASSERT_TYPE_ASSERT, "(def->parentPart->flags & (1 << 1))", (const char *)&queryFormat, "def->parentPart->flags & SCRIPTABLE_DEFFLAG_SERVER_INSTANCE") )
      __debugbreak();
    v72 = damageTypeFlags;
    ScriptableSv_DamagePart(eventParams, def->parentPart, NULL, def, damageTypeFlags, (int)*(float *)&v22);
  }
  if ( *(float *)&v23 >= 1.0 && def->numChildParts )
  {
    do
    {
      v73 = &def->childParts[v19];
      if ( v73 != v14 && (v73->flags & 2) != 0 )
        ScriptableSv_DamagePart(eventParams, v73, def, NULL, v72, (int)*(float *)&v23);
      ++v19;
    }
    while ( v19 < def->numChildParts );
  }
  if ( G_Door_ScriptableIsDoor(scriptableIndex) )
    G_Door_ProcessDamageEvent(eventParams->damageEvent);
  g_damageProcessingScriptable = -1;
}

/*
==============
ScriptableSv_DevDestroyEverything
==============
*/
void ScriptableSv_DevDestroyEverything(const unsigned int maxDamage)
{
  unsigned int runtimeInstanceCount; 
  ScriptableInstanceContext *InstanceCommonContext; 

  if ( maxDamage )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
    while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
    {
      if ( ScriptableSv_GetInstanceInUse(runtimeInstanceCount) )
      {
        if ( !ScriptableSv_IsServerInstance(runtimeInstanceCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 842, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
          __debugbreak();
        if ( ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount)->linkedObjectType <= SCRIPTABLE_LINK_ENTITY )
        {
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount);
          ScriptableSv_Damage(g_entities, g_entities, runtimeInstanceCount, &InstanceCommonContext->origin, NULL, 0, &NULL_WEAPON, 0, (const scr_string_t)0, maxDamage, 0, 0);
        }
      }
      ++runtimeInstanceCount;
      ScriptableCommon_AssertCountsInitialized();
    }
    Com_Printf(15, "ScriptableSv_DevDestroyEverything: Applied %i\n", maxDamage);
  }
}

/*
==============
ScriptableSv_GetDamageOwner
==============
*/
char ScriptableSv_GetDamageOwner(const unsigned int scriptableIndex, unsigned int *outEntNum)
{
  ScriptableServerSpecificContext *InstanceServerContext; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  if ( !outEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 125, ASSERT_TYPE_ASSERT, "( outEntNum )", (const char *)&queryFormat, "outEntNum") )
    __debugbreak();
  InstanceServerContext = ScriptableSv_GetInstanceServerContext(scriptableIndex);
  number = InstanceServerContext->damageOwnerEntHandle.number;
  if ( !InstanceServerContext->damageOwnerEntHandle.number )
    goto LABEL_34;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(v14) = InstanceServerContext->damageOwnerEntHandle.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  v9 = InstanceServerContext->damageOwnerEntHandle.number;
  if ( InstanceServerContext->damageOwnerEntHandle.number )
  {
    if ( (unsigned int)v9 - 1 >= 0x7FF )
    {
      LODWORD(v14) = 2047;
      LODWORD(v13) = v9 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v10 = InstanceServerContext->damageOwnerEntHandle.number;
    if ( (unsigned int)(v10 - 1) >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v10 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v11 = v10 - 1;
    if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v11] )
    {
      LODWORD(v14) = InstanceServerContext->damageOwnerEntHandle.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v14) )
        __debugbreak();
    }
    *outEntNum = (__int16)(InstanceServerContext->damageOwnerEntHandle.number - 1);
    return 1;
  }
  else
  {
LABEL_34:
    *outEntNum = 2047;
    return 0;
  }
}

/*
==============
ScriptableSv_RadiusDamage
==============
*/
void ScriptableSv_RadiusDamage(const gentity_s *inflictor, const gentity_s *attacker, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const float explosionInnerDamage, const float explosionOuterDamage, const meansOfDeath_t mod, const int runOcclusionTraces)
{
  const dvar_t *v10; 
  unsigned int v15; 
  unsigned int number; 

  v10 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v15 = 2046;
    if ( inflictor )
      number = inflictor->s.number;
    else
      number = 2046;
    if ( attacker )
      v15 = attacker->s.number;
    ScriptableBg_RadiusDamageEvent(SBL_CONTEXT_SERVER, &s_svRadiusCallbackTable, number, v15, weapon, isAlternate, position, outerRadius, explosionInnerDamage, explosionOuterDamage, mod, runOcclusionTraces);
  }
}

/*
==============
ScriptableSv_SetDamageOwner
==============
*/
void ScriptableSv_SetDamageOwner(const unsigned int scriptableIndex, const gentity_s *attacker)
{
  ScriptableServerSpecificContext *InstanceServerContext; 

  InstanceServerContext = ScriptableSv_GetInstanceServerContext(scriptableIndex);
  EntHandle::setEnt((EntHandle *)InstanceServerContext, attacker);
}

/*
==============
ScriptableSv_UpdateDamageOwner
==============
*/
void ScriptableSv_UpdateDamageOwner(const unsigned int scriptableIndex, const gentity_s *attacker)
{
  const gentity_s *GEntity; 
  unsigned int v3; 
  ScriptableServerSpecificContext *InstanceServerContext; 
  entityType_s eType; 
  int otherEntityNum; 
  ScriptableServerSpecificContext *v7; 

  GEntity = attacker;
  v3 = scriptableIndex;
  if ( !attacker )
  {
    InstanceServerContext = ScriptableSv_GetInstanceServerContext(scriptableIndex);
    EntHandle::setEnt((EntHandle *)InstanceServerContext, NULL);
    return;
  }
  if ( attacker->client )
    goto LABEL_12;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    eType = GEntity->s.eType;
    if ( (unsigned __int16)(eType - 11) <= 3u || eType == ET_AGENT )
    {
      otherEntityNum = GEntity->s.otherEntityNum;
      if ( otherEntityNum < level.maxclients )
      {
        GEntity = G_GetGEntity(otherEntityNum);
        if ( !GEntity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 99, ASSERT_TYPE_ASSERT, "( clientOwner->client )", (const char *)&queryFormat, "clientOwner->client") )
          __debugbreak();
        scriptableIndex = v3;
LABEL_12:
        v7 = ScriptableSv_GetInstanceServerContext(scriptableIndex);
        EntHandle::setEnt((EntHandle *)v7, GEntity);
      }
    }
  }
}

