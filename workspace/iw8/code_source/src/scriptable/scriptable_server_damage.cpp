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
  const gentity_s *Entity; 
  DObj *ServerDObjForEnt; 
  vec3_t out; 
  vec4_t quat; 

  _RBX = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 617, ASSERT_TYPE_ASSERT, "( bounds )", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  _RSI = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( !_RSI )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
    if ( ServerDObjForEnt )
    {
      if ( ServerDObjForEnt->numModels )
        _RSI = *ServerDObjForEnt->models;
    }
  }
  if ( _RSI )
  {
    AnglesToQuat(&InstanceCommonContext->angles, &quat);
    QuatTransform(&quat, &_RSI->bounds.midPoint, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+out]
      vaddss  xmm1, xmm0, dword ptr [rdi+20h]
      vmovss  xmm2, dword ptr [rsp+78h+out+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+24h]
      vmovss  xmm1, dword ptr [rsp+78h+out+8]
      vmovss  dword ptr [rbx+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdi+28h]
      vmovss  dword ptr [rbx+8], xmm2
    }
    _RBX->halfSize.v[0] = _RSI->bounds.halfSize.v[0];
    _RBX->halfSize.v[1] = _RSI->bounds.halfSize.v[1];
    __asm { vmovss  xmm0, dword ptr [rsi+40h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    _RBX->midPoint.v[0] = InstanceCommonContext->origin.v[0];
    _RBX->midPoint.v[1] = InstanceCommonContext->origin.v[1];
    _RBX->midPoint.v[2] = InstanceCommonContext->origin.v[2];
    _RBX->halfSize.v[0] = 1.0;
    _RBX->halfSize.v[1] = 1.0;
  }
  __asm { vmovss  dword ptr [rbx+14h], xmm0 }
}

/*
==============
ScriptableSv_RadiusDamageCallback
==============
*/
void ScriptableSv_RadiusDamageCallback(const ScriptableContext context, const unsigned int scriptableIndex, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const vec3_t *startPos, const vec3_t *hitPos, const int mod, const Weapon *weapon, const int isAlternate, const int damagePoints, const float explosionOuterDamage, const float explosionInnerDamage, const float explosionRadius)
{
  __int64 v15; 
  __int64 v16; 
  gentity_s *v17; 
  gentity_s *v18; 
  unsigned int runtimeInstanceCount; 
  entityType_s eType; 
  const ScriptableDef *def; 
  const ScriptableDef *v22; 
  __int64 v37; 
  __int64 v38; 
  unsigned int scriptableIndexa[4]; 
  ScriptableDamageEvent damageEvent; 

  _R13 = weapon;
  v15 = attackerEntNum;
  v16 = inflictorEntNum;
  if ( inflictorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 655, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", inflictorEntNum, 2048) )
    __debugbreak();
  if ( (unsigned int)v15 >= 0x800 )
  {
    LODWORD(v38) = 2048;
    LODWORD(v37) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 656, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
      __debugbreak();
  }
  v17 = &g_entities[v16];
  v18 = &g_entities[v15];
  if ( ScriptableSv_GetScriptableIndexForEntity(v17) == -1 )
    goto LABEL_27;
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(v17) < runtimeInstanceCount )
    goto LABEL_27;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = v17->s.eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
    goto LABEL_27;
  if ( !ScriptableSv_TryGetIndexForEntity(v17, scriptableIndexa) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 666, ASSERT_TYPE_ASSERT, "(ScriptableSv_TryGetIndexForEntity( inflictor, &inflictorScriptableIndex ))", (const char *)&queryFormat, "ScriptableSv_TryGetIndexForEntity( inflictor, &inflictorScriptableIndex )") )
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
  v22 = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 678, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (v22->flags & 0x400) == 0 )
  {
LABEL_27:
    damageEvent.context = SBL_CONTEXT_SERVER;
    damageEvent.callbacks = ScriptableSv_GetCallbackTable();
    damageEvent.def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
    damageEvent.scriptableIndex = scriptableIndex;
    damageEvent.inflictorEntNum = v16;
    ScriptableSv_TryGetIndexForEntity(v17, &damageEvent.inflictorScriptableIndex);
    _RAX = startPos;
    damageEvent.inflictorEntState = &v17->s;
    damageEvent.attackerEntNum = v15;
    damageEvent.attackerEntState = &v18->s;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+40h+damageEvent.start], xmm0
      vmovss  xmm0, dword ptr [rax+8]
    }
    _RAX = hitPos;
    __asm
    {
      vmovss  dword ptr [rbp+40h+damageEvent.start+8], xmm0
      vmovss  dword ptr [rbp+40h+damageEvent.start+4], xmm1
    }
    damageEvent.partName = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  xmm1, dword ptr [rax]
      vmovss  dword ptr [rbp+40h+damageEvent.end+4], xmm0
      vmovups ymm0, ymmword ptr [r13+0]
      vmovups ymmword ptr [rbp+40h+damageEvent.weapon.weaponIdx], ymm0
      vmovsd  xmm0, qword ptr [r13+30h]
      vmovss  dword ptr [rbp+40h+damageEvent.end], xmm1
      vmovss  xmm1, dword ptr [rax+8]
    }
    damageEvent.mod = mod;
    __asm
    {
      vmovsd  qword ptr [rbp+40h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0
      vmovss  xmm0, [rbp+40h+explosionOuterDamage]
      vmovss  dword ptr [rbp+40h+damageEvent.end+8], xmm1
      vmovups xmm1, xmmword ptr [r13+20h]
    }
    damageEvent.damage = damagePoints;
    LODWORD(_RAX) = *(_DWORD *)&weapon->weaponCamo;
    __asm
    {
      vmovss  [rbp+40h+damageEvent.explosionOuterDamage], xmm0
      vmovss  xmm0, [rbp+40h+explosionRadius]
      vmovups xmmword ptr [rbp+40h+damageEvent.weapon.attachmentVariationIndices+5], xmm1
      vmovss  xmm1, [rbp+40h+explosionInnerDamage]
    }
    *(_DWORD *)&damageEvent.weapon.weaponCamo = (_DWORD)_RAX;
    __asm
    {
      vmovss  [rbp+40h+damageEvent.explosionRadius], xmm0
      vmovss  [rbp+40h+damageEvent.explosionInnerDamage], xmm1
    }
    *(_QWORD *)&damageEvent.dFlags = 5i64;
    damageEvent.isAlternate = isAlternate;
    ScriptableSv_UpdateDamageOwner(scriptableIndex, v18);
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
  const Bounds *v10; 
  hknpShape *ShapeSphere; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int v15; 
  unsigned int i; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  unsigned __int16 RefId; 
  int v21; 
  __int64 v22; 
  unsigned int v23; 
  const gentity_s *v24; 
  hkMemoryAllocator *v25; 
  hkMemoryAllocator *v26; 
  __int64 result; 
  float fmt; 
  HavokPhysics_IgnoreBodies v30; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v32; 
  char optionalInplaceBuffer[432]; 
  void *retaddr; 

  _RAX = &retaddr;
  v32 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v10 = bounds;
  __asm { vmovss  xmm1, dword ptr [rdx+0Ch]; radius }
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v30, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v30, -261);
  extendedData.contents = -1;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+2B8h+var_240.collisionBuffer], xmm6
  }
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v30;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
  __asm { vmovss  dword ptr [rsp+2B8h+fmt], xmm6 }
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeSphere, &v10->midPoint, &quat_identity, fmt, &extendedData, CollisionQueryResult);
  HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
  v15 = 0;
  for ( i = 0; i < HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult); ++i )
  {
    if ( v15 >= maxcount )
      break;
    ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, i);
    if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 761, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
    RefSystem = Physics_GetRefSystem(Ref);
    RefId = Physics_GetRefId(Ref);
    if ( RefSystem == Physics_RefSystem_GEntities )
    {
      v23 = RefId;
      v24 = &g_entities[RefId];
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 777, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( ScriptableSv_GetScriptableIndexForEntity(v24) == -1 )
        continue;
      v22 = v15;
      typeList[v15] = SCRIPTABLE_LINK_ENTITY;
      objectIdList[v15] = v23;
    }
    else
    {
      if ( RefSystem != Physics_RefSystem_Scriptable )
        continue;
      v21 = Ref & 0x3FFFFF;
      if ( ScriptableSv_GetInstanceCommonContext(v21)->linkedObjectType )
        continue;
      v22 = v15;
      typeList[v15] = SCRIPTABLE_LINK_NONE;
      objectIdList[v15] = v21;
    }
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, i, &closestPoints[v22]);
    ++v15;
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v25 = hkMemHeapAllocator();
  v30.m_ignoreBodies.m_size = 0;
  if ( v30.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v25, v30.m_ignoreBodies.m_data, 4, v30.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v30.m_ignoreBodies.m_data = NULL;
  v30.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v26 = hkMemHeapAllocator();
  v30.m_ignoreEntities.m_size = 0;
  if ( v30.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v26, v30.m_ignoreEntities.m_data, 8, v30.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = v15;
  __asm { vmovaps xmm6, [rsp+2B8h+var_48] }
  return result;
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
  int DamageForWeapon; 
  ScriptableDamageEvent damageEvent; 

  v12 = DCONST_DVARBOOL_scriptable_enable;
  _RDI = weapon;
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
      damageEvent.attackerEntNum = attacker->s.number;
      _RAX = &vec3_origin;
      damageEvent.inflictorEntState = &inflictor->s;
      if ( hitPos )
        _RAX = hitPos;
      damageEvent.attackerEntState = &attacker->s;
      damageEvent.mod = mod;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm2, dword ptr [rax+8]
        vmovss  dword ptr [rbp+37h+damageEvent.end], xmm0
        vmovss  dword ptr [rbp+37h+damageEvent.end+4], xmm1
      }
      damageEvent.partName = partName;
      DamageForWeapon = providedDmg;
      __asm
      {
        vsubss  xmm0, xmm0, dword ptr [rcx]
        vsubss  xmm1, xmm1, dword ptr [rcx+4]
        vmovss  dword ptr [rsp+130h+damageEvent.start], xmm0
        vsubss  xmm0, xmm2, dword ptr [rcx+8]
        vmovss  dword ptr [rbp+37h+damageEvent.start+8], xmm0
        vmovss  dword ptr [rbp+37h+damageEvent.end+8], xmm2
        vmovss  dword ptr [rbp+37h+damageEvent.start+4], xmm1
      }
      if ( providedDmg <= 0 )
        DamageForWeapon = ScriptableBg_GetDamageForWeapon(weapon, isAlternate, mod);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups xmm1, xmmword ptr [rdi+20h]
      }
      damageEvent.damage = DamageForWeapon;
      damageEvent.dFlags = dFlags;
      __asm
      {
        vmovups ymmword ptr [rbp+37h+damageEvent.weapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rdi+30h]
      }
      damageEvent.modelIndex = modelIndex;
      *(_DWORD *)&damageEvent.weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
      __asm
      {
        vmovups xmmword ptr [rbp+37h+damageEvent.weapon.attachmentVariationIndices+5], xmm1
        vmovsd  qword ptr [rbp+37h+damageEvent.weapon.attachmentVariationIndices+15h], xmm0
      }
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
  gentity_s *v12; 
  __int64 v13; 
  const gentity_s *v14; 
  const gentity_s *v15; 
  int mod; 
  int dFlags; 
  unsigned int modelIndex; 
  scr_string_t partName; 
  bool isAlternate; 
  vec3_t *point; 
  __int64 damage; 
  vec3_t v43; 
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
        _RDI = (unsigned int *)eventParams->damageEvent;
        v12 = Entity;
        if ( _RDI )
        {
          if ( _RDI[10] >= 0x800 )
          {
            LODWORD(damage) = 2048;
            LODWORD(point) = _RDI[10];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( damageEvt->attackerEntNum ) < (unsigned)( ( 2048 ) )", "damageEvt->attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", point, damage) )
              __debugbreak();
          }
          v13 = _RDI[6];
          v14 = &g_entities[_RDI[10]];
          if ( (unsigned int)v13 > 0x7FE )
            v15 = NULL;
          else
            v15 = &g_entities[v13];
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+44h]
            vmovss  dword ptr [rsp+108h+var_98], xmm0
            vmovss  xmm1, dword ptr [rdi+48h]
            vmovss  dword ptr [rsp+108h+var_98+4], xmm1
            vmovss  xmm0, dword ptr [rdi+4Ch]
            vmovss  dword ptr [rsp+108h+var_98+8], xmm0
            vmovss  xmm0, dword ptr [rdi+44h]
            vsubss  xmm1, xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rsp+108h+dir], xmm1
            vmovss  xmm2, dword ptr [rdi+48h]
            vsubss  xmm0, xmm2, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rsp+108h+dir+4], xmm0
            vmovss  xmm1, dword ptr [rdi+4Ch]
            vsubss  xmm2, xmm1, dword ptr [rdi+40h]
            vmovss  dword ptr [rsp+108h+dir+8], xmm2
            vmovups ymm0, ymmword ptr [rdi+64h]
          }
          mod = _RDI[21];
          dFlags = _RDI[23];
          modelIndex = _RDI[24];
          partName = _RDI[20];
          __asm
          {
            vmovups ymmword ptr [rsp+108h+var_78.weaponIdx], ymm0
            vmovups xmm1, xmmword ptr [rdi+84h]
            vmovups xmmword ptr [rsp+108h+var_78.attachmentVariationIndices+5], xmm1
            vmovsd  xmm0, qword ptr [rdi+94h]
            vmovsd  qword ptr [rsp+108h+var_78.attachmentVariationIndices+15h], xmm0
          }
          *(_DWORD *)&r_weapon.weaponCamo = _RDI[39];
          isAlternate = _RDI[40] == 1;
        }
        else
        {
          v14 = Entity;
          v15 = Entity;
          _RAX = ScriptableSv_GetInstanceOrigin(scriptableIndex);
          mod = 0;
          dFlags = 0;
          modelIndex = 0;
          partName = 0;
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  dword ptr [rsp+108h+var_98], xmm0
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rsp+108h+var_98+4], xmm1
            vmovss  xmm0, dword ptr [rax+8]
            vxorps  xmm1, xmm1, xmm1
            vmovss  dword ptr [rsp+108h+var_98+8], xmm0
            vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
            vmovups ymmword ptr [rsp+108h+var_78.weaponIdx], ymm0
            vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
            vmovss  dword ptr [rsp+108h+dir], xmm1
            vmovss  dword ptr [rsp+108h+dir+4], xmm1
            vmovss  dword ptr [rsp+108h+dir+8], xmm1
            vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
          }
          *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
          isAlternate = 0;
          __asm
          {
            vmovsd  qword ptr [rsp+108h+var_78.attachmentVariationIndices+15h], xmm0
            vmovups xmmword ptr [rsp+108h+var_78.attachmentVariationIndices+5], xmm1
          }
        }
        G_Combat_DamageNotify(scr_const.damage, v12, v14, v15, &dir, &v43, damageDone, mod, dFlags, modelIndex, partName, &r_weapon, isAlternate, NULL);
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
  const ScriptablePartDef *v19; 
  unsigned int scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int stateId; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const ScriptableDamageEvent *damageEvent; 
  bool v35; 
  int IsSplashDamage; 
  const gentity_s *Entity; 
  const DObj *ServerDObjForEnt; 
  ScriptableInstanceContext *v44; 
  const char *name; 
  scr_string_t scrTagName; 
  const XModel *ScriptableModel; 
  const char *v48; 
  const char *tagName; 
  ScriptableInstanceContext *v50; 
  const char *v51; 
  char v52; 
  char v53; 
  const char *v54; 
  ScriptableInstanceContext *v55; 
  const char *v56; 
  unsigned int v100; 
  unsigned int v113; 
  bool v130; 
  ScriptablePartDef *parentPart; 
  unsigned int v133; 
  ScriptablePartDef *v137; 
  bool IsDoor; 
  unsigned __int8 inOutIndex[8]; 
  const ScriptablePartDef *v142; 
  unsigned int v143; 
  unsigned int finalStateIndex; 
  unsigned int victimOwnerEntNum; 
  unsigned int entityNumOut; 
  team_t victimTeam; 
  team_t teamOut[4]; 
  unsigned int initialStateIndex_4; 
  ScriptableInstanceContextSecure *instanceContext; 
  const ScriptablePartDef *v151; 
  int modelIndex; 
  ScriptableEventParams outParams; 
  tmat43_t<vec3_t> outTagMat; 
  void *retaddr; 

  _R11 = &retaddr;
  v19 = childDef;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v142 = childDef;
  v151 = parentDef;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 328, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  scriptableIndex = eventParams->scriptableIndex;
  instanceContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  g_damageProcessingScriptable = scriptableIndex;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, def);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 336, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  stateId = PartRuntime->stateId;
  v24 = 0;
  v25 = 0;
  *(_DWORD *)inOutIndex = 0;
  v26 = stateId;
  initialStateIndex_4 = stateId;
  v143 = damage;
  finalStateIndex = stateId;
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm13, xmm13, xmm13
  }
  if ( damage )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_48+8], xmm6
      vmovaps [rsp+1B0h+var_58+8], xmm7
      vmovaps [rsp+1B0h+var_68+8], xmm8
      vmovaps [rsp+1B0h+var_88+8], xmm10
      vmovaps [rsp+1B0h+var_98+8], xmm11
      vmovaps [rsp+1B0h+var_A8+8], xmm12
    }
    do
    {
      if ( v26 >= def->numStates )
        break;
      _RBX = &def->states[v26];
      if ( SLOBYTE(_RBX->base.flags) >= 0 )
        break;
      if ( _RBX->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 351, ASSERT_TYPE_ASSERT, "( stateDef->type == Scriptable_StateType_Health )", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
        __debugbreak();
      if ( !ScriptableBg_IsValidAttacker(damageTypeFlags, _RBX->data.health.validAttackers) )
        break;
      if ( _RBX->data.health.validAttackerTeams )
      {
        if ( !eventParams->damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 360, ASSERT_TYPE_ASSERT, "( eventParams->damageEvent )", (const char *)&queryFormat, "eventParams->damageEvent") )
          __debugbreak();
        if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 361, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
          __debugbreak();
        ScriptableSv_GetTeam(eventParams->damageEvent->attackerEntNum, teamOut, &entityNumOut);
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        ScriptableSv_GetTeam(InstanceCommonContext->linkedObjectIndex, &victimTeam, &victimOwnerEntNum);
        if ( !ScriptableBg_IsValidAttackerTeam(_RBX->data.health.validAttackerTeams, teamOut[0], victimTeam, entityNumOut, victimOwnerEntNum) )
          break;
      }
      if ( !ScriptableBg_IsValidDamageCause(damageTypeFlags, _RBX->data.health.validDamageCause) || _RBX->data.health.numWeaponClasses && !ScriptableBg_IsValidWeaponClass(eventParams, _RBX) || _RBX->data.health.numWeapons && !ScriptableBg_IsValidWeapon(eventParams, _RBX) )
        break;
      __asm { vmovaps xmm9, xmm14 }
      if ( v151 )
      {
        __asm { vmovss  xmm9, dword ptr [rbx+64h] }
      }
      else if ( v142 )
      {
        __asm { vmovss  xmm9, dword ptr [rbx+68h] }
      }
      damageEvent = eventParams->damageEvent;
      __asm { vmovaps xmm11, xmm14 }
      v35 = damageEvent == NULL;
      if ( damageEvent )
      {
        IsSplashDamage = ScriptableBg_IsSplashDamage(damageEvent->mod);
        v35 = IsSplashDamage == 0;
        if ( IsSplashDamage )
        {
          v35 = !_RBX->data.health.localizeSplashDamage;
          if ( _RBX->data.health.localizeSplashDamage )
          {
            _RAX = eventParams->damageEvent;
            __asm
            {
              vmovss  xmm7, dword ptr [rax+0ACh]
              vmovss  xmm10, dword ptr [rax+0A4h]
              vmovss  xmm12, dword ptr [rax+0A8h]
              vmulss  xmm8, xmm7, xmm7
            }
            Entity = ScriptableSv_GetEntity(scriptableIndex);
            if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 414, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
              __debugbreak();
            ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
            if ( !ServerDObjForEnt )
            {
              v44 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
              if ( v44->def )
                name = v44->def->name;
              else
                name = "<Unknown>";
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408EF50, 902i64, name);
            }
            scrTagName = def->scrTagName;
            inOutIndex[4] = -2;
            if ( DObjGetBoneIndexInternal_26(ServerDObjForEnt, scrTagName, &inOutIndex[4], &modelIndex) )
            {
              G_Utils_DObjGetWorldBoneIndexMatrix(Entity, inOutIndex[4], &outTagMat);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0B0h+outTagMat+24h]
                vmovss  [rsp+1B0h+var_158], xmm0
                vmovss  xmm0, dword ptr [rbp+0B0h+outTagMat+28h]
                vmovss  [rsp+1B0h+var_154], xmm0
                vmovss  xmm0, dword ptr [rbp+0B0h+outTagMat+2Ch]
                vmovss  [rsp+1B0h+initialStateIndex], xmm0
              }
            }
            else
            {
              ScriptableModel = BG_XCompositeModel_GetScriptableModel(instanceContext);
              if ( ScriptableModel )
              {
                v48 = ScriptableModel->name;
                tagName = def->tagName;
                v50 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
                if ( v50->def )
                  v51 = v50->def->name;
                else
                  v51 = "<Unknown>";
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408EFC0, 903i64, v51, tagName, v48);
              }
              else
              {
                v54 = def->tagName;
                v55 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
                if ( v55->def )
                  v56 = v55->def->name;
                else
                  v56 = "<Unknown>";
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408F020, 904i64, v56, v54);
              }
            }
            _RAX = eventParams->damageEvent;
            __asm
            {
              vmovss  xmm5, dword ptr [rax+3Ch]
              vsubss  xmm0, xmm5, [rsp+1B0h+var_154]
              vmovss  xmm4, dword ptr [rax+38h]
              vsubss  xmm2, xmm4, [rsp+1B0h+var_158]
              vmovss  xmm6, dword ptr [rax+40h]
              vsubss  xmm3, xmm6, [rsp+1B0h+initialStateIndex]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, xmm8
            }
            if ( !(v52 | v53) )
              break;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+44h]
              vmovss  xmm1, dword ptr [rax+48h]
            }
            v26 = finalStateIndex;
            __asm
            {
              vsubss  xmm4, xmm0, xmm4
              vmovss  xmm0, dword ptr [rax+4Ch]
              vsubss  xmm6, xmm0, xmm6
              vsqrtss xmm0, xmm3, xmm3
              vsubss  xmm5, xmm1, xmm5
              vdivss  xmm7, xmm14, xmm7
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm1, xmm14, xmm1
              vsubss  xmm8, xmm12, xmm10
              vmulss  xmm0, xmm1, xmm8
              vaddss  xmm2, xmm0, xmm10
              vcvttss2si ecx, xmm2
            }
            v35 = _ECX == 0;
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
                vsubss  xmm1, xmm14, xmm3
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
      if ( v35 )
        break;
      v100 = v143;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, rdx
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+58h]
        vmulss  xmm1, xmm7, xmm6
        vcomiss xmm1, xmm0
      }
      _RSI = def->eventStreamBufferOffsetServer;
      if ( _RSI + 4 > (unsigned __int64)instanceContext->eventStreamBufferSize )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 483, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        v100 = v143;
      }
      _RCX = instanceContext->eventStreamBuffer;
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+rcx]
        vdivss  xmm0, xmm2, xmm6
        vminss  xmm1, xmm0, xmm7
        vcvttss2si rax, xmm1
      }
      *(_DWORD *)inOutIndex += _RAX;
      __asm
      {
        vmulss  xmm3, xmm1, xmm6
        vsubss  xmm0, xmm2, xmm3
        vcomiss xmm0, xmm9
        vmovss  dword ptr [rsi+rcx], xmm0
      }
      v143 = v100 - _RAX;
      if ( v100 > (unsigned int)_RAX )
        goto LABEL_70;
      v113 = v26 + 1;
      if ( v26 + 1 >= def->numStates )
      {
        __asm { vcomiss xmm0, xmm9 }
        if ( v113 <= def->numStates && v26 + 1 == def->numStates )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm1, xmm2, dword ptr [rbx+5Ch]
            vmulss  xmm0, xmm2, dword ptr [rbx+60h]
            vaddss  xmm15, xmm15, xmm1
            vaddss  xmm13, xmm13, xmm0
          }
          break;
        }
LABEL_70:
        __asm
        {
          vmulss  xmm1, xmm3, xmm6
          vmulss  xmm0, xmm1, dword ptr [rbx+5Ch]
          vmulss  xmm1, xmm1, dword ptr [rbx+60h]
          vaddss  xmm13, xmm13, xmm1
          vaddss  xmm15, xmm15, xmm0
        }
        break;
      }
      __asm
      {
        vmulss  xmm1, xmm3, xmm6
        vmulss  xmm0, xmm1, dword ptr [rbx+5Ch]
        vmulss  xmm1, xmm1, dword ptr [rbx+60h]
        vaddss  xmm13, xmm13, xmm1
        vaddss  xmm15, xmm15, xmm0
      }
      ScriptableSv_InitEventParams((ScriptableEventParams *)&outTagMat, scriptableIndex, def);
      *(_QWORD *)outTagMat.row2.v = eventParams->damageEvent;
      finalStateIndex = ++v26;
      ScriptableBg_ChangePartState((ScriptableEventParams *)&outTagMat, v113, 1);
    }
    while ( *(_DWORD *)inOutIndex < damage );
    v19 = v142;
    v25 = *(_DWORD *)inOutIndex;
    __asm
    {
      vmovaps xmm11, [rsp+1B0h+var_98+8]
      vmovaps xmm10, [rsp+1B0h+var_88+8]
      vmovaps xmm8, [rsp+1B0h+var_68+8]
      vmovaps xmm7, [rsp+1B0h+var_58+8]
      vmovaps xmm6, [rsp+1B0h+var_48+8]
      vmovaps xmm12, [rsp+1B0h+var_A8+8]
    }
  }
  ScriptableSv_InitEventParams(&outParams, scriptableIndex, def);
  outParams.damageEvent = eventParams->damageEvent;
  ScriptableSv_DamageNotify(&outParams, v25, initialStateIndex_4, finalStateIndex);
  __asm
  {
    vcomiss xmm15, xmm14
    vmovaps xmm9, [rsp+1B0h+var_78+8]
  }
  if ( v130 || (parentPart = def->parentPart, v130 = 0, !parentPart) || (v130 = v151 < parentPart, v151 == parentPart) )
  {
    v133 = damageTypeFlags;
  }
  else
  {
    if ( (parentPart->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_damage.cpp", 540, ASSERT_TYPE_ASSERT, "(def->parentPart->flags & (1 << 1))", (const char *)&queryFormat, "def->parentPart->flags & SCRIPTABLE_DEFFLAG_SERVER_INSTANCE") )
      __debugbreak();
    v133 = damageTypeFlags;
    __asm { vcvttss2si rax, xmm15 }
    ScriptableSv_DamagePart(eventParams, def->parentPart, NULL, def, damageTypeFlags, _RAX);
  }
  __asm
  {
    vmovaps xmm15, [rsp+1B0h+var_D8+8]
    vcomiss xmm13, xmm14
    vmovaps xmm14, [rsp+1B0h+var_C8+8]
  }
  if ( !v130 && def->numChildParts )
  {
    do
    {
      v137 = &def->childParts[v24];
      if ( v137 != v19 && (v137->flags & 2) != 0 )
      {
        __asm { vcvttss2si rax, xmm13 }
        ScriptableSv_DamagePart(eventParams, v137, def, NULL, v133, _RAX);
      }
      ++v24;
    }
    while ( v24 < def->numChildParts );
  }
  IsDoor = G_Door_ScriptableIsDoor(scriptableIndex);
  __asm { vmovaps xmm13, [rsp+1B0h+var_B8+8] }
  if ( IsDoor )
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
  float v20; 
  float v21; 
  float v22; 

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
    __asm
    {
      vmovss  xmm0, [rsp+68h+explosionOuterDamage]
      vmovss  xmm1, [rsp+68h+explosionInnerDamage]
      vmovss  [rsp+68h+var_20], xmm0
      vmovss  xmm0, [rsp+68h+outerRadius]
      vmovss  [rsp+68h+var_28], xmm1
      vmovss  [rsp+68h+var_30], xmm0
    }
    ScriptableBg_RadiusDamageEvent(SBL_CONTEXT_SERVER, &s_svRadiusCallbackTable, number, v15, weapon, isAlternate, position, v20, v21, v22, mod, runOcclusionTraces);
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

