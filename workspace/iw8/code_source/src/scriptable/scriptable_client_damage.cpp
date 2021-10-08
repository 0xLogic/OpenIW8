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
  vec3_t outOrigin; 

  _RBX = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 506, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds", -2i64) )
    __debugbreak();
  v6 = ScriptableCl_ContextToLocalClient(context);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v6, scriptableIndex);
  _RSI = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  __asm { vmovss  xmm0, dword ptr [rsp+58h+outOrigin] }
  if ( _RSI )
  {
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm2, dword ptr [rsp+58h+outOrigin+4]
      vaddss  xmm0, xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [rsp+58h+outOrigin+8]
      vaddss  xmm2, xmm1, dword ptr [rsi+34h]
      vmovss  dword ptr [rbx+8], xmm2
    }
    _RBX->halfSize.v[0] = _RSI->bounds.halfSize.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+3Ch]
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  xmm1, dword ptr [rsi+40h]
      vmovss  dword ptr [rbx+14h], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr [rsp+58h+outOrigin+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr [rsp+58h+outOrigin+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
    _RBX->halfSize.v[0] = 1.0;
    _RBX->halfSize.v[1] = 1.0;
    _RBX->halfSize.v[2] = 1.0;
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
  __int64 v36; 
  __int64 v37; 
  unsigned int scriptableIndexa; 
  centity_t *v39; 
  const Weapon *v40; 
  ScriptableDamageEvent damageEvent; 

  v40 = weapon;
  if ( inflictorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, 2048) )
    __debugbreak();
  if ( attackerEntNum >= 0x800 )
  {
    LODWORD(v37) = 2048;
    LODWORD(v36) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  v17 = ScriptableCl_ContextToLocalClient(context);
  Entity = CG_GetEntity(v17, inflictorEntNum);
  v39 = CG_GetEntity(v17, attackerEntNum);
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
    damageEvent.attackerEntState = &v39->nextState;
    _RAX = startPos;
    damageEvent.partName = 0;
    *(_QWORD *)&damageEvent.dFlags = 0i64;
    damageEvent.scriptableIndex = scriptableIndex;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+60h+damageEvent.start], xmm0
      vmovss  xmm0, dword ptr [rax+8]
    }
    _RAX = hitPos;
    __asm
    {
      vmovss  dword ptr [rbp+60h+damageEvent.start+8], xmm0
      vmovss  dword ptr [rbp+60h+damageEvent.start+4], xmm1
    }
    damageEvent.inflictorEntNum = inflictorEntNum;
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  dword ptr [rbp+60h+damageEvent.end+4], xmm0
      vmovss  dword ptr [rbp+60h+damageEvent.end], xmm1
      vmovss  xmm1, dword ptr [rax+8]
    }
    damageEvent.mod = mod;
    damageEvent.damage = damagePoints;
    _RAX = v40;
    __asm { vmovss  dword ptr [rbp+60h+damageEvent.end+8], xmm1 }
    damageEvent.inflictorScriptableIndex = 500000;
    damageEvent.attackerEntNum = attackerEntNum;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+60h+damageEvent.weapon.weaponIdx], ymm0
      vmovsd  xmm0, qword ptr [rax+30h]
    }
    LODWORD(_RAX) = *(_DWORD *)&v40->weaponCamo;
    __asm
    {
      vmovsd  qword ptr [rbp+60h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0
      vmovss  xmm0, [rbp+60h+explosionOuterDamage]
      vmovss  [rbp+60h+damageEvent.explosionOuterDamage], xmm0
      vmovss  xmm0, [rbp+60h+explosionRadius]
      vmovups xmmword ptr [rbp+60h+damageEvent.weapon.attachmentVariationIndices+5], xmm1
      vmovss  xmm1, [rbp+60h+explosionInnerDamage]
    }
    *(_DWORD *)&damageEvent.weapon.weaponCamo = (_DWORD)_RAX;
    __asm
    {
      vmovss  [rbp+60h+damageEvent.explosionRadius], xmm0
      vmovss  [rbp+60h+damageEvent.explosionInnerDamage], xmm1
    }
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
  LocalClientNum_t v9; 
  hknpShape *ShapeSphere; 
  unsigned int v13; 
  int v14; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int v16; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  unsigned __int16 RefId; 
  __int32 v21; 
  unsigned int v22; 
  const centity_t *Entity; 
  __int64 v24; 
  const DynEntityDef *Def; 
  unsigned int NumHits; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  __int64 v29; 
  float fmt; 
  Physics_GetClosestPointsExtendedData *extendedData; 
  HavokPhysics_CollisionQueryResult *result; 
  DynEntityBasis basisOut[4]; 
  unsigned int dynEntIdOut; 
  int v36; 
  ScriptableLinkType *v37; 
  vec3_t *v38; 
  HavokPhysics_IgnoreBodies v39; 
  Physics_GetClosestPointsExtendedData v40; 
  __int64 v41; 
  char optionalInplaceBuffer[432]; 

  v41 = -2i64;
  __asm { vmovaps [rsp+2E0h+var_50], xmm6 }
  v37 = typeList;
  _RDI = bounds;
  v38 = closestPoints;
  v9 = ScriptableCl_ContextToLocalClient(context);
  __asm { vmovss  xmm1, dword ptr [rdi+0Ch]; radius }
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v39, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v39, -19);
  v40.contents = -1;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+1E0h+var_248.collisionBuffer], xmm6
  }
  v13 = 0;
  v40.nonBrushShape = NULL;
  v40.phaseSelection = All;
  v40.simplify = 1;
  v40.ignoreBodies = &v39;
  v14 = 3 * v9 + 3;
  v36 = v14;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult((Physics_WorldId)v14, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
  __asm { vmovss  dword ptr [rsp+2E0h+fmt], xmm6 }
  Physics_GetClosestPoints((Physics_WorldId)v14, ShapeSphere, &_RDI->midPoint, &quat_identity, fmt, &v40, CollisionQueryResult);
  HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
  v16 = 0;
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult) )
  {
    do
    {
      if ( v16 >= maxcount )
        break;
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v13);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 643, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef((Physics_WorldId)v14, ClosestPointHitBodyId);
      RefSystem = Physics_GetRefSystem(Ref);
      RefId = Physics_GetRefId(Ref);
      v21 = RefSystem - 1;
      if ( v21 )
      {
        if ( v21 != 3 )
          goto LABEL_26;
        v22 = RefId;
        Entity = CG_GetEntity(v9, RefId);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 692, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( !ScriptableCl_IsScriptableEntity(v9, Entity) )
          goto LABEL_26;
        v37[v16] = SCRIPTABLE_LINK_ENTITY;
        entityList[v16] = v22;
        v24 = v16;
      }
      else
      {
        DynEnt_GetBasisAndDynEntId(Ref, v9, basisOut, &dynEntIdOut);
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
        v37[v16] = SCRIPTABLE_LINK_DYNENT;
        entityList[v16] = dynEntIdOut;
        v24 = v16;
      }
      HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v13, &v38[v24]);
      ++v16;
LABEL_26:
      ++v13;
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
      v14 = v36;
    }
    while ( v13 < NumHits );
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v27 = hkMemHeapAllocator();
  v39.m_ignoreBodies.m_size = 0;
  if ( v39.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v39.m_ignoreBodies.m_data, 4, v39.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v39.m_ignoreBodies.m_data = NULL;
  v39.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v28 = hkMemHeapAllocator();
  v39.m_ignoreEntities.m_size = 0;
  if ( v39.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v39.m_ignoreEntities.m_data, 8, v39.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v29 = v16;
  __asm { vmovaps xmm6, [rsp+2E0h+var_50] }
  return v29;
}

/*
==============
ScriptableCl_DamagePart
==============
*/
void ScriptableCl_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const ScriptablePartDef *parentDef, const ScriptablePartDef *childDef, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ScriptableContext context; 
  const ScriptablePartDef *v19; 
  LocalClientNum_t v21; 
  __int64 scriptableIndex; 
  __int64 v23; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int stateId; 
  unsigned int v29; 
  bool v30; 
  unsigned int v32; 
  bool IsValidAttacker; 
  unsigned int v34; 
  team_t v35; 
  unsigned int LinkObject; 
  bool IsValidAttackerTeam; 
  bool IsValidDamageCause; 
  bool IsValidWeaponClass; 
  bool IsValidWeapon; 
  const ScriptableDamageEvent *damageEvent; 
  bool v44; 
  int IsSplashDamage; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  bool BoneTransform; 
  bool v54; 
  const char *tagName; 
  ScriptableInstanceContextSecure *v56; 
  const char *v57; 
  ScriptableInstanceClientContext *v103; 
  unsigned int v105; 
  bool v110; 
  unsigned int v111; 
  unsigned int v120; 
  ScriptablePartDef *parentPart; 
  bool v127; 
  const ScriptablePartDef *v130; 
  ScriptablePartDef *v131; 
  bool v132; 
  __int64 v138; 
  __int64 v139; 
  unsigned int v140; 
  unsigned int v141; 
  unsigned int v142; 
  unsigned int v143; 
  team_t victimTeam; 
  unsigned int entityNumOut; 
  team_t teamOut; 
  const ScriptablePartDef *v147; 
  const ScriptablePartDef *v148; 
  tmat43_t<vec3_t> outTransform; 
  char v160; 

  __asm
  {
    vmovaps [rsp+188h+var_78], xmm9
    vmovaps [rsp+188h+var_B8], xmm13
    vmovaps [rsp+188h+var_C8], xmm14
  }
  v148 = childDef;
  context = eventParams->context;
  v19 = childDef;
  v147 = parentDef;
  v21 = ScriptableCl_ContextToLocalClient(context);
  scriptableIndex = eventParams->scriptableIndex;
  v23 = v21;
  PartRuntime = ScriptableCl_GetPartRuntime(v21, eventParams->scriptableIndex, def);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 732, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  stateId = PartRuntime->stateId;
  v143 = 0;
  v141 = damage;
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm13, xmm13, xmm13
  }
  if ( damage )
  {
    __asm
    {
      vmovaps [rsp+188h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3f800000
    }
    v29 = stateId;
    __asm
    {
      vmovaps [rsp+188h+var_48], xmm6
      vmovaps [rsp+188h+var_58], xmm7
      vmovaps [rsp+188h+var_68], xmm8
      vmovaps [rsp+188h+var_88], xmm10
      vmovaps [rsp+188h+var_98], xmm11
      vmovaps [rsp+188h+var_A8], xmm12
    }
    v142 = stateId + 1;
    do
    {
      v30 = v29 < def->numStates;
      if ( v29 >= def->numStates )
        break;
      _RDI = &def->states[v29];
      v30 = 0;
      if ( SLOBYTE(_RDI->base.flags) >= 0 )
        break;
      if ( _RDI->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 747, ASSERT_TYPE_ASSERT, "(stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
        __debugbreak();
      v32 = damageTypeFlags;
      IsValidAttacker = ScriptableBg_IsValidAttacker(damageTypeFlags, _RDI->data.health.validAttackers);
      v30 = 0;
      if ( !IsValidAttacker )
        goto LABEL_70;
      if ( _RDI->data.health.validAttackerTeams )
      {
        if ( !eventParams->damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 756, ASSERT_TYPE_ASSERT, "(eventParams->damageEvent)", (const char *)&queryFormat, "eventParams->damageEvent") )
          __debugbreak();
        ScriptableCl_GetTeam((const LocalClientNum_t)v23, eventParams->damageEvent->attackerEntNum, &teamOut, &entityNumOut);
        if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v23, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
        {
          LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v23, scriptableIndex);
          ScriptableCl_GetTeam((const LocalClientNum_t)v23, LinkObject, &victimTeam, &v140);
          v35 = victimTeam;
          v34 = v140;
        }
        else
        {
          v30 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          v34 = 2047;
          v140 = 2047;
          v35 = v30 ? TEAM_FOUR : TEAM_ZERO;
          victimTeam = v35;
        }
        IsValidAttackerTeam = ScriptableBg_IsValidAttackerTeam(_RDI->data.health.validAttackerTeams, teamOut, v35, entityNumOut, v34);
        v30 = 0;
        if ( !IsValidAttackerTeam )
          goto LABEL_70;
      }
      IsValidDamageCause = ScriptableBg_IsValidDamageCause(damageTypeFlags, _RDI->data.health.validDamageCause);
      v30 = 0;
      if ( !IsValidDamageCause )
        goto LABEL_70;
      if ( _RDI->data.health.numWeaponClasses )
      {
        IsValidWeaponClass = ScriptableBg_IsValidWeaponClass(eventParams, _RDI);
        v30 = 0;
        if ( !IsValidWeaponClass )
          goto LABEL_70;
      }
      if ( _RDI->data.health.numWeapons )
      {
        IsValidWeapon = ScriptableBg_IsValidWeapon(eventParams, _RDI);
        v30 = 0;
        if ( !IsValidWeapon )
          goto LABEL_70;
      }
      __asm { vmovaps xmm9, xmm15 }
      if ( v147 )
      {
        __asm { vmovss  xmm9, dword ptr [rdi+64h] }
      }
      else if ( v19 )
      {
        __asm { vmovss  xmm9, dword ptr [rdi+68h] }
      }
      damageEvent = eventParams->damageEvent;
      __asm { vmovaps xmm11, xmm15 }
      v30 = 0;
      v44 = damageEvent == NULL;
      if ( damageEvent )
      {
        IsSplashDamage = ScriptableBg_IsSplashDamage(damageEvent->mod);
        v30 = 0;
        v44 = IsSplashDamage == 0;
        if ( IsSplashDamage )
        {
          v30 = 0;
          v44 = !_RDI->data.health.localizeSplashDamage;
          if ( _RDI->data.health.localizeSplashDamage )
          {
            _RAX = eventParams->damageEvent;
            __asm
            {
              vmovss  xmm7, dword ptr [rax+0ACh]
              vmovss  xmm10, dword ptr [rax+0A4h]
              vmovss  xmm12, dword ptr [rax+0A8h]
              vmulss  xmm8, xmm7, xmm7
            }
            if ( !ScriptableCl_GetDObjSafe((const LocalClientNum_t)v23, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 815, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
              __debugbreak();
            if ( !ScriptableCl_GetDObj((const LocalClientNum_t)v23, scriptableIndex) )
            {
              InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v23, scriptableIndex);
              if ( InstanceCommonContext->def )
                name = InstanceCommonContext->def->name;
              else
                name = "<unknown>";
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144073560, 307i64, name);
            }
            BoneTransform = ScriptableCl_GetBoneTransform((const LocalClientNum_t)v23, scriptableIndex, (const scr_string_t)def->scrTagName, &outTransform, 0);
            v30 = 0;
            v54 = !BoneTransform;
            if ( !BoneTransform )
            {
              tagName = def->tagName;
              v56 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v23, scriptableIndex);
              if ( v56->def )
                v57 = v56->def->name;
              else
                v57 = "<unknown>";
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440735E0, 308i64, v57, tagName);
            }
            _RAX = eventParams->damageEvent;
            __asm
            {
              vmovss  xmm5, dword ptr [rax+3Ch]
              vsubss  xmm0, xmm5, dword ptr [rsp+188h+outTransform+28h]
              vmovss  xmm4, dword ptr [rax+38h]
              vsubss  xmm2, xmm4, dword ptr [rsp+188h+outTransform+24h]
              vmovss  xmm6, dword ptr [rax+40h]
              vsubss  xmm3, xmm6, dword ptr [rsp+188h+outTransform+2Ch]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, xmm8
            }
            if ( !v30 && !v54 )
              goto LABEL_70;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+44h]
              vmovss  xmm1, dword ptr [rax+48h]
              vsubss  xmm4, xmm0, xmm4
              vmovss  xmm0, dword ptr [rax+4Ch]
              vsubss  xmm6, xmm0, xmm6
              vsqrtss xmm0, xmm3, xmm3
              vsubss  xmm5, xmm1, xmm5
              vdivss  xmm7, xmm15, xmm7
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm1, xmm15, xmm1
              vsubss  xmm8, xmm12, xmm10
              vmulss  xmm0, xmm1, xmm8
              vaddss  xmm2, xmm0, xmm10
              vcvttss2si ecx, xmm2
            }
            v30 = 0;
            v44 = _ECX == 0;
            if ( _ECX )
            {
              __asm
              {
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vmulss  xmm3, xmm0, xmm7
                vsubss  xmm1, xmm15, xmm3
                vmulss  xmm0, xmm1, xmm8
                vaddss  xmm2, xmm0, xmm10
                vcvttss2si eax, xmm2
                vmovd   xmm1, eax
                vmovd   xmm0, ecx
                vcvtdq2ps xmm1, xmm1
                vcvtdq2ps xmm0, xmm0
                vdivss  xmm11, xmm1, xmm0
              }
            }
          }
        }
      }
      __asm
      {
        vmulss  xmm6, xmm11, xmm9
        vxorps  xmm9, xmm9, xmm9
        vcomiss xmm6, xmm9
      }
      if ( v44 )
        goto LABEL_70;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, rax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+58h]
        vmulss  xmm1, xmm7, xmm6
        vcomiss xmm1, xmm0
      }
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v139) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v138) = scriptableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v138, v139) )
          __debugbreak();
      }
      if ( (unsigned int)v23 >= 2 )
      {
        LODWORD(v139) = 2;
        LODWORD(v138) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v138, v139) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      _RBP = def->eventStreamBufferOffsetClient;
      v103 = &g_scriptableCl_instanceContexts[v23][scriptableIndex];
      if ( _RBP + 4 > (unsigned __int64)v103->commonContext.eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 875, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      _RCX = v103->commonContext.eventStreamBuffer;
      v105 = v142;
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+rbp]
        vdivss  xmm0, xmm2, xmm6
        vminss  xmm1, xmm0, xmm7
        vcvttss2si rax, xmm1
      }
      v143 += _RAX;
      v110 = v141 <= (unsigned int)_RAX;
      v111 = v141 - _RAX;
      __asm
      {
        vmulss  xmm3, xmm1, xmm6
        vsubss  xmm4, xmm2, xmm3
        vcomiss xmm4, xmm9
        vmovss  dword ptr [rcx+rbp], xmm4
      }
      v141 = v111;
      if ( !v110 )
        goto LABEL_64;
      if ( v105 < def->numStates )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+5Ch]
          vmulss  xmm0, xmm1, dword ptr [rdi+60h]
        }
      }
      else
      {
LABEL_64:
        __asm
        {
          vmulss  xmm0, xmm3, xmm6
          vmulss  xmm2, xmm0, dword ptr [rdi+5Ch]
          vmulss  xmm0, xmm0, dword ptr [rdi+60h]
        }
      }
      v30 = 0;
      __asm
      {
        vaddss  xmm13, xmm0, xmm13
        vaddss  xmm14, xmm2, xmm14
      }
      if ( (def->flags & 4) != 0 )
        break;
      __asm { vcomiss xmm4, xmm9 }
      if ( (def->flags & 4) != 0 )
        break;
      v30 = v105 < def->numStates;
      if ( v105 >= def->numStates )
        break;
      ScriptableCl_InitEventParams((const LocalClientNum_t)v23, (ScriptableEventParams *)&outTransform, scriptableIndex, def);
      ++v29;
      *(_QWORD *)outTransform.row2.v = eventParams->damageEvent;
      v142 = v105 + 1;
      ScriptableBg_ChangePartState((ScriptableEventParams *)&outTransform, v29, 1);
      v19 = v148;
      v30 = v143 < damage;
    }
    while ( v143 < damage );
    v32 = damageTypeFlags;
LABEL_70:
    __asm
    {
      vcomiss xmm14, xmm15
      vmovaps xmm12, [rsp+188h+var_A8]
    }
    v120 = 0;
    __asm
    {
      vmovaps xmm11, [rsp+188h+var_98]
      vmovaps xmm10, [rsp+188h+var_88]
      vmovaps xmm8, [rsp+188h+var_68]
      vmovaps xmm7, [rsp+188h+var_58]
      vmovaps xmm6, [rsp+188h+var_48]
    }
    if ( !v30 )
    {
      parentPart = def->parentPart;
      v30 = 0;
      if ( parentPart )
      {
        v30 = v147 < parentPart;
        if ( v147 != parentPart )
        {
          v127 = (def->flags & 2) == 0 && (parentPart->flags & 2) == 0;
          if ( (def->flags & 2) == 0 || (v30 = 0, v127) )
          {
            __asm { vcvttss2si rax, xmm14 }
            ScriptableCl_DamagePart(eventParams, parentPart, NULL, def, v32, _RAX);
          }
        }
      }
    }
    __asm
    {
      vcomiss xmm13, xmm15
      vmovaps xmm15, [rsp+188h+var_D8]
    }
    if ( !v30 && def->numChildParts )
    {
      v130 = v148;
      do
      {
        v131 = &def->childParts[v120];
        if ( v131 != v130 )
        {
          v132 = (def->flags & 2) == 0 && (v131->flags & 2) == 0;
          if ( (def->flags & 2) != 0 || v132 )
          {
            __asm { vcvttss2si rax, xmm13 }
            ScriptableCl_DamagePart(eventParams, v131, def, NULL, v32, _RAX);
          }
        }
        ++v120;
      }
      while ( v120 < def->numChildParts );
    }
  }
  _R11 = &v160;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
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
  const ScriptableDef *def; 
  int DamageForWeapon; 
  int v28; 
  ScriptableDamageEvent damageEvent; 

  _RSI = weapon;
  _R14 = start;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 83, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, inflictorEntNum);
  damageEvent.context = ScriptableCl_LocalClientToContext(localClientNum);
  damageEvent.callbacks = ScriptableCl_GetCallbackTable();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
  }
  def = InstanceCommonContext->def;
  damageEvent.inflictorEntState = &Entity->nextState;
  damageEvent.attackerEntState = &Entity->nextState;
  _RAX = end;
  __asm
  {
    vmovss  dword ptr [rsp+120h+damageEvent.start], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+37h+damageEvent.start+4], xmm1
    vmovss  xmm1, dword ptr [rax]
    vmovss  dword ptr [rbp+37h+damageEvent.end], xmm1
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rbp+37h+damageEvent.start+8], xmm0
    vmovss  xmm0, dword ptr [rax+4]
  }
  damageEvent.def = def;
  __asm { vmovss  dword ptr [rbp+37h+damageEvent.end+8], xmm1 }
  damageEvent.partName = partName;
  __asm { vmovss  dword ptr [rbp+37h+damageEvent.end+4], xmm0 }
  damageEvent.scriptableIndex = scriptableIndex;
  damageEvent.inflictorEntNum = inflictorEntNum;
  damageEvent.inflictorScriptableIndex = 500000;
  damageEvent.attackerEntNum = inflictorEntNum;
  damageEvent.mod = mod;
  DamageForWeapon = ScriptableBg_GetDamageForWeapon(weapon, isAlternate, mod);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups xmm1, xmmword ptr [rsi+20h]
  }
  damageEvent.damage = DamageForWeapon;
  damageEvent.isAlternate = isAlternate;
  __asm
  {
    vmovups ymmword ptr [rbp+37h+damageEvent.weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [rsi+30h]
  }
  *(_QWORD *)&damageEvent.dFlags = 0i64;
  v28 = *(_DWORD *)&weapon->weaponCamo;
  __asm { vmovsd  qword ptr [rbp+37h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0 }
  *(_DWORD *)&damageEvent.weapon.weaponCamo = v28;
  __asm { vmovups xmmword ptr [rbp+37h+damageEvent.weapon.attachmentVariationIndices+5], xmm1 }
  ScriptableBg_ProcessDamageEvent(&damageEvent);
}

/*
==============
ScriptableCl_ExplosionDamageEvent
==============
*/
void ScriptableCl_ExplosionDamageEvent(const LocalClientNum_t localClientNum, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const int explosionInnerDamage, const int explosionOuterDamage, const int runOcclusionTraces)
{
  ScriptableContext v16; 
  float v22; 
  float v23; 
  float v24; 

  Sys_ProfBeginNamedEvent(0xFF808000, "ScriptableCl_ExplosionDamageEvent");
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 131, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v16 = ScriptableCl_LocalClientToContext(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+68h+explosionOuterDamage]
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  xmm0, [rsp+68h+outerRadius]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+68h+explosionInnerDamage]
    vmovss  [rsp+68h+var_28], xmm1
    vmovss  [rsp+68h+var_30], xmm0
  }
  ScriptableBg_RadiusDamageEvent(v16, &s_clRadiusCallbackTable, inflictorEntNum, attackerEntNum, weapon, isAlternate, position, v22, v23, v24, MOD_EXPLOSIVE, runOcclusionTraces);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_MeleeEvent
==============
*/
void ScriptableCl_MeleeEvent(const LocalClientNum_t localClientNum, const int sourceEntityNum, const Weapon *weapon, const int isAlternate)
{
  __int64 v11; 
  centity_t *Entity; 
  entityType_s eType; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  cg_t *v24; 
  const characterInfo_t *CharacterInfo; 
  int meleeChargeEnt; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  unsigned int v32; 
  float *v35; 
  __int64 isSliding; 
  __int64 v63; 
  vec3_t outEyePos; 
  vec3_t outForward; 
  vec3_t outRight; 
  vec3_t outUp; 
  vec3_t end; 

  v11 = sourceEntityNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 210, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, v11);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 214, ASSERT_TYPE_ASSERT, "(CENextValid( attacker ))", (const char *)&queryFormat, "CENextValid( attacker )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = Entity->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 215, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &attacker->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &attacker->nextState )") )
    __debugbreak();
  if ( CG_GetViewDirection(localClientNum, v11, &outForward, &outRight, &outUp) )
  {
    __asm
    {
      vmovaps [rsp+130h+var_50], xmm6
      vmovaps [rsp+130h+var_60], xmm7
      vmovaps [rsp+130h+var_70], xmm8
      vmovaps [rsp+130h+var_80], xmm9
      vmovaps [rsp+130h+var_90], xmm10
    }
    CG_CalcEyePoint(localClientNum, v11, &outEyePos);
    __asm
    {
      vmovss  xmm4, cs:__real@c1200000
      vmulss  xmm3, xmm4, dword ptr [rbp+57h+outForward+4]
      vmulss  xmm2, xmm4, dword ptr [rsp+130h+outForward]
      vaddss  xmm2, xmm2, dword ptr [rsp+130h+outEyePos]
      vmovss  dword ptr [rsp+130h+outEyePos], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+130h+outEyePos+4]
      vmulss  xmm3, xmm4, dword ptr [rbp+57h+outForward+8]
      vmovss  dword ptr [rsp+130h+outEyePos+4], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+130h+outEyePos+8]
      vmovss  dword ptr [rsp+130h+outEyePos+8], xmm2
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v24 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v24->IsMP(v24) )
    {
      if ( (unsigned int)v11 >= v24[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(isSliding) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", isSliding, v24[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v24[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v11);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v24, v11);
    }
    if ( CharacterInfo )
      meleeChargeEnt = CharacterInfo->meleeChargeEnt;
    else
      meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x14u);
    v28 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex >= 0 )
    {
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v63) = 64;
        LODWORD(isSliding) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", isSliding, v63) )
          __debugbreak();
      }
      v29 = ((0x80000000 >> (v28 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v28 >> 5]) != 0;
    }
    else
    {
      v29 = 0;
    }
    v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
    v31 = meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE;
    v32 = 0;
    *(double *)&_XMM0 = BG_GetMeleeRangeByWeapon(weapon, isAlternate != 0, v31, v29, PM_EFF_STANCE_DEFAULT, v30);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = BG_GetMeleeWidth(weapon, isAlternate != 0);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = BG_GetMeleeHeight(weapon, isAlternate != 0);
    v35 = (float *)traceOffsets_0 + 1;
    __asm { vmovaps xmm10, xmm0 }
    do
    {
      __asm
      {
        vmulss  xmm6, xmm9, dword ptr [rbx-4]
        vmulss  xmm7, xmm10, dword ptr [rbx]
        vmulss  xmm2, xmm8, dword ptr [rsp+130h+outForward]
        vaddss  xmm4, xmm2, dword ptr [rsp+130h+outEyePos]
        vmulss  xmm1, xmm6, dword ptr [rbp+57h+outRight]
        vmulss  xmm2, xmm7, dword ptr [rbp+57h+outUp]
        vmulss  xmm0, xmm6, dword ptr [rbp+57h+outRight+4]
        vaddss  xmm5, xmm4, xmm1
        vaddss  xmm1, xmm5, xmm2
        vmulss  xmm2, xmm8, dword ptr [rbp+57h+outForward+4]
        vaddss  xmm3, xmm2, dword ptr [rsp+130h+outEyePos+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+57h+outRight+8]
        vaddss  xmm4, xmm3, xmm0
        vmovss  dword ptr [rbp+57h+end], xmm1
        vmulss  xmm1, xmm7, dword ptr [rbp+57h+outUp+4]
        vaddss  xmm0, xmm4, xmm1
        vmulss  xmm1, xmm8, dword ptr [rbp+57h+outForward+8]
        vaddss  xmm3, xmm1, dword ptr [rsp+130h+outEyePos+8]
        vmovss  dword ptr [rbp+57h+end+4], xmm0
        vmulss  xmm0, xmm7, dword ptr [rbp+57h+outUp+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm0
        vmovss  dword ptr [rbp+57h+end+8], xmm2
      }
      if ( ScriptableCl_MeleeEventInternal(localClientNum, v11, weapon, isAlternate, &outEyePos, &end) )
        break;
      ++v32;
      v35 += 2;
    }
    while ( v32 < 5 );
    __asm
    {
      vmovaps xmm9, [rsp+130h+var_80]
      vmovaps xmm8, [rsp+130h+var_70]
      vmovaps xmm7, [rsp+130h+var_60]
      vmovaps xmm6, [rsp+130h+var_50]
      vmovaps xmm10, [rsp+130h+var_90]
    }
  }
}

/*
==============
ScriptableCl_MeleeEventInternal
==============
*/
__int64 ScriptableCl_MeleeEventInternal(const LocalClientNum_t localClientNum, const int sourceEntityNum, const Weapon *weapon, const int isAlternate, const vec3_t *start, const vec3_t *end)
{
  const dvar_t *v14; 
  const vec4_t *v15; 
  unsigned __int16 EntityHitId; 
  const centity_t *Entity; 
  __int64 result; 
  const dvar_t *v19; 
  const char *v20; 
  scr_string_t partName; 
  unsigned int v30; 
  centity_t *v36; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  const entityState_t *p_nextState; 
  int DamageForWeapon; 
  int v47; 
  unsigned int scriptableIndex; 
  int isAlternatea; 
  ScriptableDamageEvent damageEvent; 
  trace_t results; 

  _RSI = start;
  _R13 = weapon;
  _R14 = end;
  isAlternatea = isAlternate;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 147, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, end, &bounds_origin, sourceEntityNum, 0, 41968017, 1, NULL, All);
  v14 = DCONST_DVARBOOL_scriptable_debug_melee;
  if ( !DCONST_DVARBOOL_scriptable_debug_melee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_melee") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v15 = &colorLtBlue;
    if ( results.hitType != TRACE_HITTYPE_ENTITY )
      v15 = &colorRed;
    CG_DebugLine(start, end, v15, 1, 300);
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
  v19 = DCONST_DVARBOOL_scriptable_debug_melee;
  __asm
  {
    vmovaps [rsp+200h+var_50], xmm6
    vmovaps [rsp+200h+var_60], xmm7
    vmovaps [rsp+200h+var_70], xmm8
  }
  if ( !DCONST_DVARBOOL_scriptable_debug_melee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_melee") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    v20 = SL_ConvertToString(results.partName);
    Com_Printf(14, "ScriptableCl_MeleeEventInternal: Hit Instance %i part %s.\n", scriptableIndex, v20);
  }
  partName = results.partName;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm5, [rbp+100h+results.fraction]
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm6, xmm1, dword ptr [rsi]
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [r14+8]
  }
  v30 = scriptableIndex;
  __asm
  {
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm7, xmm2, dword ptr [rsi+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm8, xmm2, dword ptr [rsi+8]
  }
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 83, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v36 = CG_GetEntity(localClientNum, sourceEntityNum);
  damageEvent.context = ScriptableCl_LocalClientToContext(localClientNum);
  damageEvent.callbacks = ScriptableCl_GetCallbackTable();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v30);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
  }
  def = InstanceCommonContext->def;
  p_nextState = &v36->nextState;
  LODWORD(v36) = isAlternatea;
  __asm
  {
    vmovss  dword ptr [rbp+100h+damageEvent.start], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
  damageEvent.def = def;
  __asm
  {
    vmovss  dword ptr [rbp+100h+damageEvent.start+8], xmm0
    vmovss  dword ptr [rbp+100h+damageEvent.start+4], xmm1
    vmovss  dword ptr [rbp+100h+damageEvent.end], xmm6
    vmovss  dword ptr [rbp+100h+damageEvent.end+4], xmm7
    vmovss  dword ptr [rbp+100h+damageEvent.end+8], xmm8
  }
  damageEvent.scriptableIndex = v30;
  damageEvent.inflictorEntNum = sourceEntityNum;
  damageEvent.inflictorScriptableIndex = 500000;
  damageEvent.inflictorEntState = p_nextState;
  damageEvent.attackerEntNum = sourceEntityNum;
  damageEvent.attackerEntState = p_nextState;
  damageEvent.partName = partName;
  damageEvent.mod = 8;
  DamageForWeapon = ScriptableBg_GetDamageForWeapon(_R13, isAlternatea, 8);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups xmm1, xmmword ptr [r13+20h]
  }
  damageEvent.damage = DamageForWeapon;
  damageEvent.isAlternate = (int)v36;
  __asm
  {
    vmovups ymmword ptr [rbp+100h+damageEvent.weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [r13+30h]
  }
  *(_QWORD *)&damageEvent.dFlags = 0i64;
  v47 = *(_DWORD *)&_R13->weaponCamo;
  __asm { vmovsd  qword ptr [rbp+100h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0 }
  *(_DWORD *)&damageEvent.weapon.weaponCamo = v47;
  __asm { vmovups xmmword ptr [rbp+100h+damageEvent.weapon.attachmentVariationIndices+5], xmm1 }
  ScriptableBg_ProcessDamageEvent(&damageEvent);
  __asm { vmovaps xmm8, [rsp+200h+var_70] }
  result = 1i64;
  __asm
  {
    vmovaps xmm7, [rsp+200h+var_60]
    vmovaps xmm6, [rsp+200h+var_50]
  }
  return result;
}

/*
==============
ScriptableCl_VehicleDamageClientScriptables
==============
*/
void ScriptableCl_VehicleDamageClientScriptables(const LocalClientNum_t localClientNum, const centity_t *vehicleCent, const Bounds *vehicleBounds)
{
  __int64 v16; 
  __int64 serverInstanceCount; 
  __int64 v27; 
  __int64 v28; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *v34; 
  const dvar_t *v35; 
  const char *v36; 
  ScriptableContext v38; 
  LocalClientNum_t v39; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 duration; 
  __int64 v72; 
  vec3_t outOrigin; 
  vec3_t v74; 
  vec3_t end; 
  __int64 v76; 
  __int64 v77; 
  vec3_t point; 
  __int64 v79; 
  Bounds bounds; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  v79 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R12 = vehicleBounds;
  v16 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 346, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  if ( !vehicleCent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 347, ASSERT_TYPE_ASSERT, "(vehicleCent)", (const char *)&queryFormat, "vehicleCent") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 348, ASSERT_TYPE_ASSERT, "(vehicleBounds)", (const char *)&queryFormat, "vehicleBounds") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_damage.cpp", 351, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
    __debugbreak();
  CG_GetPoseOrigin(&vehicleCent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+2B0h+outOrigin]
    vaddss  xmm1, xmm0, dword ptr [r12]
    vmovss  dword ptr [rbp+1B0h+bounds.midPoint], xmm1
    vmovss  xmm2, dword ptr [rsp+2B0h+outOrigin+4]
    vaddss  xmm0, xmm2, dword ptr [r12+4]
    vmovss  dword ptr [rbp+1B0h+bounds.midPoint+4], xmm0
    vmovss  xmm1, dword ptr [rsp+2B0h+outOrigin+8]
    vaddss  xmm2, xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rbp+1B0h+bounds.midPoint+8], xmm2
    vmovss  xmm0, dword ptr [r12+0Ch]
    vmovss  dword ptr [rbp+1B0h+bounds.halfSize], xmm0
    vmovss  xmm1, dword ptr [r12+10h]
    vmovss  dword ptr [rbp+1B0h+bounds.halfSize+4], xmm1
    vmovss  xmm0, dword ptr [r12+14h]
    vmovss  dword ptr [rbp+1B0h+bounds.halfSize+8], xmm0
  }
  Bounds_ExpandToWidth(&bounds);
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  LODWORD(v76) = g_scriptableWorldCounts.totalInstanceCount;
  if ( (unsigned int)serverInstanceCount < g_scriptableWorldCounts.totalInstanceCount )
  {
    v27 = v16;
    v28 = 152 * serverInstanceCount;
    v77 = 152 * serverInstanceCount;
    __asm
    {
      vmovss  xmm15, dword ptr [rbp+1B0h+bounds.halfSize+8]
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm12, cs:__real@3f800000
      vxorps  xmm14, xmm14, xmm14
    }
    do
    {
      def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v16, serverInstanceCount)->def;
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
        LODWORD(v72) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(duration) = serverInstanceCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, v72) )
          __debugbreak();
      }
      if ( (unsigned int)v16 >= 2 )
      {
        LODWORD(v72) = 2;
        LODWORD(duration) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", duration, v72) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v34 = (ScriptableInstanceContextSecure *)((char *)&g_scriptableCl_instanceContexts[v27]->commonContext + v28);
      v35 = DCONST_DVARBOOL_scriptable_debug_vehicle_client;
      if ( !DCONST_DVARBOOL_scriptable_debug_vehicle_client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_vehicle_client") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      if ( v35->current.enabled )
      {
        ScriptableInstanceContextSecure::GetOrigin(v34, serverInstanceCount, &point);
        v36 = j_va("S:%i", (unsigned int)serverInstanceCount);
        __asm { vmovaps xmm2, xmm12; scale }
        CG_DebugString(&point, &colorWhite, *(float *)&_XMM2, v36, 0, 1);
        memset(&point, 0, sizeof(point));
      }
      if ( (def->flags & 0x80) != 0 )
      {
        ScriptableInstanceContextSecure::GetOrigin(v34, serverInstanceCount, &end);
        v38 = ScriptableCl_LocalClientToContext((const LocalClientNum_t)v16);
        v39 = ScriptableCl_ContextToLocalClient(v38);
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v39, serverInstanceCount);
        _RBX = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
        ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, serverInstanceCount, &v74);
        if ( _RBX )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+2B0h+var_260]
            vaddss  xmm1, xmm0, dword ptr [rbx+2Ch]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint], xmm1
            vmovss  xmm0, dword ptr [rsp+2B0h+var_260+4]
            vaddss  xmm2, xmm0, dword ptr [rbx+30h]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint+4], xmm2
            vmovss  xmm0, dword ptr [rsp+2B0h+var_260+8]
            vaddss  xmm3, xmm0, dword ptr [rbx+34h]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint+8], xmm3
            vmovss  xmm8, dword ptr [rbx+38h]
            vmovss  dword ptr [rbp+1B0h+var_148.halfSize], xmm8
            vmovss  xmm6, dword ptr [rbx+3Ch]
            vmovss  dword ptr [rbp+1B0h+var_148.halfSize+4], xmm6
            vmovss  xmm7, dword ptr [rbx+40h]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rsp+2B0h+var_260]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint], xmm1
            vmovss  xmm2, dword ptr [rsp+2B0h+var_260+4]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint+4], xmm2
            vmovss  xmm3, dword ptr [rsp+2B0h+var_260+8]
            vmovss  dword ptr [rbp+1B0h+var_148.midPoint+8], xmm3
            vmovaps xmm8, xmm12
            vmovss  dword ptr [rbp+1B0h+var_148.halfSize], xmm12
            vmovaps xmm6, xmm12
            vmovss  dword ptr [rbp+1B0h+var_148.halfSize+4], xmm6
            vmovaps xmm7, xmm12
          }
        }
        __asm { vmovss  dword ptr [rbp+1B0h+var_148.halfSize+8], xmm7 }
        memset(&v74, 0, sizeof(v74));
        __asm
        {
          vaddss  xmm9, xmm1, dword ptr [rsp+2B0h+end]
          vaddss  xmm10, xmm2, dword ptr [rsp+2B0h+end+4]
          vaddss  xmm11, xmm3, dword ptr [rsp+2B0h+end+8]
          vcomiss xmm8, xmm14
          vcomiss xmm6, xmm14
          vcomiss xmm7, xmm14
          vmaxss  xmm2, xmm6, xmm8
          vmovss  dword ptr [rbp+1B0h+axis+0Ch], xmm2
          vmovss  dword ptr [rbp+1B0h+axis+10h], xmm2
          vmaxss  xmm3, xmm2, xmm7
          vmovss  dword ptr [rbp+1B0h+axis+14h], xmm3
          vmovss  xmm0, dword ptr [rbp+1B0h+bounds.midPoint]
          vsubss  xmm1, xmm0, xmm9
          vandps  xmm1, xmm1, xmm13
          vaddss  xmm0, xmm2, dword ptr [rbp+1B0h+bounds.halfSize]
          vcomiss xmm1, xmm0
        }
        memset(&end, 0, sizeof(end));
      }
      LODWORD(serverInstanceCount) = serverInstanceCount + 1;
      v28 = v77 + 152;
      v77 += 152i64;
      v27 = v16;
    }
    while ( (unsigned int)serverInstanceCount < (unsigned int)v76 );
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000f423f0000000c00000000
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovdqu xmmword ptr [rsp+108h+damageEvent.partName], xmm0
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rsp+108h+damageEvent.weapon.weaponIdx], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    damageEvent.modelIndex = 0;
    damageEvent.isAlternate = 0;
    __asm
    {
      vmovsd  qword ptr [rsp+108h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0
      vmovups xmmword ptr [rsp+108h+damageEvent.weapon.attachmentVariationIndices+5], xmm1
    }
    *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    ScriptableBg_ProcessDamageEvent(&damageEvent);
  }
}

