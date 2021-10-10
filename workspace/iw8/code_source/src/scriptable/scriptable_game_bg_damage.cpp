/*
==============
ScriptableBg_GetDamageForWeapon
==============
*/

int __fastcall ScriptableBg_GetDamageForWeapon(const Weapon *weapon, const int isAlternate, const int mod)
{
  return ?ScriptableBg_GetDamageForWeapon@@YAHAEBUWeapon@@HH@Z(weapon, isAlternate, mod);
}

/*
==============
ScriptableBg_IsValidWeaponClass
==============
*/

bool __fastcall ScriptableBg_IsValidWeaponClass(const ScriptableEventParams *eventParams, const ScriptableStateDef *stateDef)
{
  return ?ScriptableBg_IsValidWeaponClass@@YA_NPEBUScriptableEventParams@@PEBUScriptableStateDef@@@Z(eventParams, stateDef);
}

/*
==============
ScriptableBg_ShouldProcessDefForDamage
==============
*/

int __fastcall ScriptableBg_ShouldProcessDefForDamage(const ScriptableContext context, const ScriptableDef *def)
{
  return ?ScriptableBg_ShouldProcessDefForDamage@@YAHW4ScriptableContext@@PEBUScriptableDef@@@Z(context, def);
}

/*
==============
ScriptableBg_DamagePart
==============
*/

int __fastcall ScriptableBg_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const unsigned int damageTypeFlags, const unsigned int damage)
{
  return ?ScriptableBg_DamagePart@@YAHPEBUScriptableEventParams@@PEBUScriptablePartDef@@II@Z(eventParams, def, damageTypeFlags, damage);
}

/*
==============
ScriptableBg_IsValidDamageCause
==============
*/

bool __fastcall ScriptableBg_IsValidDamageCause(unsigned int damageTypeFlags, Scriptable_DamageCause validDamageCauses)
{
  return ?ScriptableBg_IsValidDamageCause@@YA_NIW4Scriptable_DamageCause@@@Z(damageTypeFlags, validDamageCauses);
}

/*
==============
ScriptableBg_IsSplashDamage
==============
*/

int __fastcall ScriptableBg_IsSplashDamage(const int mod)
{
  return ?ScriptableBg_IsSplashDamage@@YAHH@Z(mod);
}

/*
==============
ScriptableBg_IsValidAttacker
==============
*/

bool __fastcall ScriptableBg_IsValidAttacker(unsigned int damageTypeFlags, Scriptable_Attackers validAttackers)
{
  return ?ScriptableBg_IsValidAttacker@@YA_NIW4Scriptable_Attackers@@@Z(damageTypeFlags, validAttackers);
}

/*
==============
ScriptableBg_ShouldProcessPart
==============
*/

int __fastcall ScriptableBg_ShouldProcessPart(const ScriptableContext context, const ScriptablePartDef *partDef)
{
  return ?ScriptableBg_ShouldProcessPart@@YAHW4ScriptableContext@@PEBUScriptablePartDef@@@Z(context, partDef);
}

/*
==============
ScriptableBg_RadiusDamageEvent
==============
*/

void __fastcall ScriptableBg_RadiusDamageEvent(const ScriptableContext context, const ScriptableRadiusDamageCallbackTable *callbacks, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const float explosionInnerDamage, const float explosionOuterDamage, const meansOfDeath_t mod, const int runOcclusionTraces)
{
  ?ScriptableBg_RadiusDamageEvent@@YAXW4ScriptableContext@@PEBUScriptableRadiusDamageCallbackTable@@IIAEBUWeapon@@HAEBTvec3_t@@MMMW4meansOfDeath_t@@H@Z(context, callbacks, inflictorEntNum, attackerEntNum, weapon, isAlternate, position, outerRadius, explosionInnerDamage, explosionOuterDamage, mod, runOcclusionTraces);
}

/*
==============
ScriptableBg_IsValidWeapon
==============
*/

bool __fastcall ScriptableBg_IsValidWeapon(const ScriptableEventParams *eventParams, const ScriptableStateDef *stateDef)
{
  return ?ScriptableBg_IsValidWeapon@@YA_NPEBUScriptableEventParams@@PEBUScriptableStateDef@@@Z(eventParams, stateDef);
}

/*
==============
ScriptableBg_IsValidAttackerTeam
==============
*/

bool __fastcall ScriptableBg_IsValidAttackerTeam(Scriptable_TeamFilter teamFilter, team_t attackerTeam, team_t victimTeam, unsigned int attackerOwnerEntNum, unsigned int victimOwnerEntNum)
{
  return ?ScriptableBg_IsValidAttackerTeam@@YA_NW4Scriptable_TeamFilter@@W4team_t@@1II@Z(teamFilter, attackerTeam, victimTeam, attackerOwnerEntNum, victimOwnerEntNum);
}

/*
==============
ScriptableBg_ProcessDamageEvent
==============
*/

void __fastcall ScriptableBg_ProcessDamageEvent(const ScriptableDamageEvent *damageEvent)
{
  ?ScriptableBg_ProcessDamageEvent@@YAXPEBUScriptableDamageEvent@@@Z(damageEvent);
}

/*
==============
ScriptableBg_BuildExplosionDamageTrace
==============
*/
__int64 ScriptableBg_BuildExplosionDamageTrace(const vec3_t *damageOrigin, const Bounds *targetAbsBounds, vec3_t (*points)[5], int (*doTrace)[5])
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 result; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  __int128 v25; 
  __int128 v26; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 

  if ( !targetAbsBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 451, ASSERT_TYPE_ASSERT, "( targetAbsBounds )", (const char *)&queryFormat, "targetAbsBounds") )
    __debugbreak();
  v8 = targetAbsBounds->midPoint.v[0];
  (*points)[0].v[0] = targetAbsBounds->midPoint.v[0];
  v9 = targetAbsBounds->midPoint.v[1];
  (*points)[0].v[1] = v9;
  v10 = targetAbsBounds->midPoint.v[2];
  (*points)[0].v[2] = v10;
  v11 = damageOrigin->v[0] - v8;
  v12 = damageOrigin->v[1] - v9;
  v13 = damageOrigin->v[2] - v10;
  v14 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
  if ( v14 <= 1.0 )
    return 0i64;
  v16 = LODWORD(FLOAT_1_0);
  *(float *)&v16 = (float)(1.0 / v14) * v11;
  v17 = v16;
  v18 = (float)(1.0 / v14) * v12;
  v19 = (float)(1.0 / v14) * v13;
  v20 = (float)((float)(v18 * v18) + (float)(*(float *)&v17 * *(float *)&v17)) + (float)(v19 * v19);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 465, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", *(float *)&v17, v18, v19, fsqrt(v20)) )
    __debugbreak();
  LODWORD(v21) = LODWORD(v18) ^ _xmm;
  v22 = fsqrt((float)(v21 * v21) + (float)(*(float *)&v17 * *(float *)&v17));
  v23 = v17;
  if ( v22 == 0.0 )
  {
    v24 = FLOAT_1_0;
  }
  else
  {
    v25 = v17;
    *(float *)&v25 = *(float *)&v17 * (float)(1.0 / v22);
    v23 = v25;
    v24 = v21 * (float)(1.0 / v22);
  }
  v26 = v23;
  *(float *)&v26 = (float)(*(float *)&v23 * *(float *)&v23) + (float)(v24 * v24);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v26 - 1.0) & _xmm) >= 0.0020000001 )
  {
    *(float *)&v26 = fsqrt(*(float *)&v26);
    _XMM0 = v26;
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 484, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", v24, *(float *)&v23, *(double *)&_XMM0, *(float *)&v26) )
      __debugbreak();
  }
  LODWORD(v29) = COERCE_UNSIGNED_INT(v19 * *(float *)&v23) ^ _xmm;
  v30 = (float)(*(float *)&v17 * *(float *)&v23) - (float)(v18 * v24);
  v31 = v19 * v24;
  v32 = (float)((float)(v31 * v31) + (float)(v29 * v29)) + (float)(v30 * v30);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 489, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v29, v31, v30, fsqrt(v32)) )
    __debugbreak();
  v33 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v23 * targetAbsBounds->halfSize.v[1]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 * targetAbsBounds->halfSize.v[0]) & _xmm);
  v35 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 * targetAbsBounds->halfSize.v[0]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v31 * targetAbsBounds->halfSize.v[1]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * targetAbsBounds->halfSize.v[2]) & _xmm);
  v34 = v35;
  (*doTrace)[0] = 1;
  (*doTrace)[1] = 1;
  (*doTrace)[2] = 1;
  (*doTrace)[3] = 1;
  (*doTrace)[4] = 1;
  if ( v33 < 32.0 )
  {
    v33 = 0.0;
    (*doTrace)[1] = 0;
    (*doTrace)[3] = 0;
  }
  if ( v35 < 32.0 )
  {
    v34 = 0.0;
    *(_QWORD *)&(*doTrace)[1] = 0i64;
    if ( v33 == 0.0 )
      (*doTrace)[4] = 0;
  }
  v36 = (float)(v24 * v33) + (*points)[0].v[0];
  (*points)[1].v[0] = v36;
  (*points)[1].v[1] = (float)(*(float *)&v23 * v33) + (*points)[0].v[1];
  (*points)[1].v[2] = (*points)[0].v[2];
  (*points)[1].v[0] = v36 + (float)(v29 * v34);
  (*points)[1].v[1] = (float)(v31 * v34) + (*points)[1].v[1];
  (*points)[1].v[2] = (float)(v30 * v34) + (*points)[1].v[2];
  v37 = (*points)[0].v[0] - (float)(v24 * v33);
  (*points)[2].v[0] = v37;
  (*points)[2].v[1] = (*points)[0].v[1] - (float)(*(float *)&v23 * v33);
  (*points)[2].v[2] = (*points)[0].v[2];
  (*points)[2].v[0] = v37 + (float)(v29 * v34);
  (*points)[2].v[1] = (float)(v31 * v34) + (*points)[2].v[1];
  (*points)[2].v[2] = (float)(v30 * v34) + (*points)[2].v[2];
  v38 = (float)(v24 * v33) + (*points)[0].v[0];
  (*points)[3].v[0] = v38;
  (*points)[3].v[1] = (float)(*(float *)&v23 * v33) + (*points)[0].v[1];
  (*points)[3].v[2] = (*points)[0].v[2];
  result = 1i64;
  (*points)[3].v[0] = v38 - (float)(v29 * v34);
  (*points)[3].v[1] = (*points)[3].v[1] - (float)(v31 * v34);
  (*points)[3].v[2] = (*points)[3].v[2] - (float)(v30 * v34);
  v39 = (*points)[0].v[0] - (float)(v24 * v33);
  (*points)[4].v[0] = v39;
  (*points)[4].v[1] = (*points)[0].v[1] - (float)(*(float *)&v23 * v33);
  (*points)[4].v[2] = (*points)[0].v[2];
  (*points)[4].v[0] = v39 - (float)(v29 * v34);
  (*points)[4].v[1] = (*points)[4].v[1] - (float)(v31 * v34);
  (*points)[4].v[2] = (*points)[4].v[2] - (float)(v30 * v34);
  return result;
}

/*
==============
ScriptableBg_CalculateAdjustedDamage
==============
*/
__int64 ScriptableBg_CalculateAdjustedDamage(const int baseDamage, const float extraBias)
{
  __int64 result; 

  _XMM0 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
  __asm { vpcmpeqd xmm4, xmm0, xmm2 }
  _XMM2 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm4, xmm2, xmm3, xmm4 }
  result = (unsigned int)(int)(float)((float)(*(float *)&_XMM4 * (float)baseDamage) * extraBias);
  if ( (int)result < 1 )
    return 1i64;
  return result;
}

/*
==============
ScriptableBg_DamagePart
==============
*/
__int64 ScriptableBg_DamagePart(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const unsigned int damageTypeFlags, const unsigned int damage)
{
  const ScriptablePartDef *v8; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 797, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 798, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  v8 = def;
  if ( !def )
    return 0i64;
  while ( (v8->flags & 0x100) == 0 )
  {
    v8 = v8->parentPart;
    if ( !v8 )
      return 0i64;
  }
  if ( !eventParams->callbacks->damagePartCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 814, ASSERT_TYPE_ASSERT, "( eventParams->callbacks->damagePartCallback )", (const char *)&queryFormat, "eventParams->callbacks->damagePartCallback") )
    __debugbreak();
  eventParams->callbacks->damagePartCallback(eventParams, def, damageTypeFlags, damage);
  return 1i64;
}

/*
==============
ScriptableBg_DamagePartAndChildren
==============
*/
void ScriptableBg_DamagePartAndChildren(ScriptableEventParams *eventParms, const ScriptablePartDef *def, const unsigned int damageTypeFlags, const unsigned int damage)
{
  unsigned int i; 
  ScriptablePartDef *v9; 

  if ( !eventParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 314, ASSERT_TYPE_ASSERT, "( eventParms )", (const char *)&queryFormat, "eventParms") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 315, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x100) != 0 )
    ScriptableBg_DamagePart(eventParms, def, damageTypeFlags, damage);
  for ( i = 0; i < def->numChildParts; ++i )
  {
    v9 = &def->childParts[i];
    if ( !eventParms->damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 330, ASSERT_TYPE_ASSERT, "( eventParms->damageEvent )", (const char *)&queryFormat, "eventParms->damageEvent") )
      __debugbreak();
    if ( eventParms->damageEvent->context || (v9->flags & 2) != 0 )
      ScriptableBg_DamagePartAndChildren(eventParms, v9, damageTypeFlags, damage);
  }
}

/*
==============
ScriptableBg_FindDamagedPart
==============
*/
ScriptablePartDef *ScriptableBg_FindDamagedPart(ScriptableEventParams *eventParams, const ScriptableDamageEvent *damageEvent)
{
  const ScriptableDef *def; 
  int v6; 
  ScriptablePartDef *v7; 
  ScriptablePartDef *DamagedPart_Internal; 
  scr_string_t v9; 
  ScriptableContext context; 
  unsigned int flags; 

  if ( !damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 267, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
    __debugbreak();
  if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 268, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
    __debugbreak();
  if ( !damageEvent->partName )
    return ScriptableBg_FindFirstDamageablePart(damageEvent);
  while ( 1 )
  {
    def = damageEvent->def;
    v6 = 0;
    if ( def->numParts )
      break;
LABEL_12:
    if ( !damageEvent->callbacks->findParentDamagePartNameCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 300, ASSERT_TYPE_ASSERT, "( damageEvent->callbacks->findParentDamagePartNameCallback )", (const char *)&queryFormat, "damageEvent->callbacks->findParentDamagePartNameCallback") )
      __debugbreak();
    v9 = damageEvent->callbacks->findParentDamagePartNameCallback(eventParams, damageEvent->partName);
    damageEvent->partName = v9;
    if ( !v9 )
      return ScriptableBg_FindFirstDamageablePart(damageEvent);
  }
  while ( 1 )
  {
    v7 = &def->parts[v6];
    DamagedPart_Internal = ScriptableBg_FindDamagedPart_Internal(v7, damageEvent);
    if ( DamagedPart_Internal )
      break;
    def = damageEvent->def;
    if ( ++v6 >= def->numParts )
      goto LABEL_12;
  }
  context = damageEvent->context;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 77, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  flags = v7->flags;
  if ( context )
    LOBYTE(flags) = ~(unsigned __int8)(flags >> 2);
  else
    flags >>= 1;
  if ( (flags & 1) == 0 )
    return ScriptableBg_FindFirstDamageablePart(damageEvent);
  return DamagedPart_Internal;
}

/*
==============
ScriptableBg_FindDamagedPart_Internal
==============
*/
ScriptablePartDef *ScriptableBg_FindDamagedPart_Internal(ScriptablePartDef *partDef, const ScriptableDamageEvent *damageEvent)
{
  int v4; 
  unsigned int numDamageTagOverrides; 
  int v6; 
  ScriptablePartDef *result; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 210, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( !damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 211, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
    __debugbreak();
  if ( !damageEvent->partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 212, ASSERT_TYPE_ASSERT, "( damageEvent->partName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "damageEvent->partName != NULL_SCR_STRING") )
    __debugbreak();
  if ( damageEvent->context == SBL_CONTEXT_SERVER && (partDef->flags & 2) == 0 )
    return 0i64;
  v4 = 0;
  if ( (partDef->flags & 0x80) != 0 )
  {
    numDamageTagOverrides = partDef->numDamageTagOverrides;
    if ( numDamageTagOverrides )
    {
      v6 = 0;
      while ( partDef->damageTagOverrides[v6].scrTag != damageEvent->partName )
      {
        if ( ++v6 >= numDamageTagOverrides )
          goto LABEL_17;
      }
      return partDef;
    }
    if ( partDef->scrTagName == damageEvent->partName )
      return partDef;
  }
LABEL_17:
  if ( !partDef->numChildParts )
    return 0i64;
  while ( 1 )
  {
    result = ScriptableBg_FindDamagedPart_Internal(&partDef->childParts[v4], damageEvent);
    if ( result )
      break;
    if ( ++v4 >= partDef->numChildParts )
      return 0i64;
  }
  return result;
}

/*
==============
ScriptableBg_FindFirstDamageablePart
==============
*/
ScriptablePartDef *ScriptableBg_FindFirstDamageablePart(const ScriptableDamageEvent *damageEvent)
{
  const ScriptableDef *def; 
  int v3; 
  ScriptableContext context; 
  __int64 v5; 
  unsigned int v6; 

  if ( !damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 182, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
    __debugbreak();
  if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 183, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
    __debugbreak();
  def = damageEvent->def;
  v3 = 0;
  if ( !def->numParts )
    return 0i64;
  while ( 1 )
  {
    context = damageEvent->context;
    v5 = (__int64)&def->parts[v3];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 77, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
      __debugbreak();
    v6 = *(_DWORD *)(v5 + 12);
    if ( context )
      LOBYTE(v6) = ~(unsigned __int8)(v6 >> 2);
    else
      v6 >>= 1;
    if ( (v6 & 1) != 0 )
      break;
    def = damageEvent->def;
    if ( ++v3 >= def->numParts )
      return 0i64;
  }
  return (ScriptablePartDef *)v5;
}

/*
==============
ScriptableBg_GetAttackerFlags
==============
*/
__int64 ScriptableBg_GetAttackerFlags(const ScriptableDamageEvent *damageEvent)
{
  const entityState_t *attackerEntState; 
  entityType_s eType; 
  const entityState_t *v5; 

  if ( !damageEvent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 140, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 124, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
      __debugbreak();
  }
  if ( damageEvent->callbacks->isPlayerDamageEvent((const ScriptableContext)damageEvent->context, damageEvent->attackerEntState) )
    return 16i64;
  attackerEntState = damageEvent->attackerEntState;
  if ( !attackerEntState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = attackerEntState->eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && !ScriptableBg_IsPlayerAttacker(damageEvent) )
    return 32i64;
  v5 = damageEvent->attackerEntState;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v5->eType - 12) & 0xFFFD) != 0 )
    return 64i64;
  else
    return 32i64;
}

/*
==============
ScriptableBg_GetDamageForWeapon
==============
*/
int ScriptableBg_GetDamageForWeapon(const Weapon *weapon, const int isAlternate, const int mod)
{
  double ExplDmg; 
  bool v7; 
  int Damage; 
  int v9; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  if ( mod == 8 )
    return BG_GetMeleeDamage(weapon, isAlternate != 0);
  if ( mod == 3 )
  {
    ExplDmg = BG_WeaponBulletFire_GetExplDmg(weapon, isAlternate != 0);
    return (int)*(float *)&ExplDmg;
  }
  else
  {
    v7 = isAlternate != 0;
    Damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate != 0);
    if ( (unsigned int)mod <= 0x10 )
    {
      v9 = 65696;
      if ( _bittest(&v9, mod) )
      {
        BG_GetExplosionDamageRangeInfo(weapon, v7, &outDamageRangeInfo);
        Damage += (int)outDamageRangeInfo.innerDamage;
      }
    }
    return Damage;
  }
}

/*
==============
ScriptableBg_IsPlayerAttacker
==============
*/
__int64 ScriptableBg_IsPlayerAttacker(const ScriptableDamageEvent *damageEvent)
{
  if ( !damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 124, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
    __debugbreak();
  return ((__int64 (__fastcall *)(_QWORD, const entityState_t *))damageEvent->callbacks->isPlayerDamageEvent)((unsigned int)damageEvent->context, damageEvent->attackerEntState);
}

/*
==============
ScriptableBg_IsSplashDamage
==============
*/
_BOOL8 ScriptableBg_IsSplashDamage(const int mod)
{
  int v1; 
  _BOOL8 result; 

  result = 0;
  if ( (unsigned int)mod <= 0x10 )
  {
    v1 = 65704;
    if ( _bittest(&v1, mod) )
      return 1;
  }
  return result;
}

/*
==============
ScriptableBg_IsValidAttacker
==============
*/
bool ScriptableBg_IsValidAttacker(unsigned int damageTypeFlags, Scriptable_Attackers validAttackers)
{
  bool result; 

  if ( (damageTypeFlags & 0x40) != 0 )
    return 1;
  switch ( validAttackers )
  {
    case Scriptable_Attackers_All:
      return 1;
    case Scriptable_Attackers_NoPlayer:
      return (damageTypeFlags & 0x10) == 0;
    case Scriptable_Attackers_PlayerOnly:
      return (damageTypeFlags & 0x10) != 0;
    case Scriptable_Attackers_NoAI:
      return (damageTypeFlags & 0x20) == 0;
    case Scriptable_Attackers_AIOnly:
      return (damageTypeFlags & 0x20) != 0;
    case Scriptable_Attackers_None:
      goto $LN4_78;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 901, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown Scriptable Valid Attacker Setting %i", validAttackers) )
        __debugbreak();
$LN4_78:
      result = 0;
      break;
  }
  return result;
}

/*
==============
ScriptableBg_IsValidAttackerTeam
==============
*/
char ScriptableBg_IsValidAttackerTeam(Scriptable_TeamFilter teamFilter, team_t attackerTeam, team_t victimTeam, unsigned int attackerOwnerEntNum, unsigned int victimOwnerEntNum)
{
  bool v8; 
  bool v10; 

  v8 = attackerTeam == TEAM_ZERO || victimTeam == TEAM_ZERO;
  switch ( teamFilter )
  {
    case Scriptable_Team_Filter_All:
      return 1;
    case Scriptable_Team_Filter_Bad:
      return attackerTeam == TEAM_ZERO;
    case Scriptable_Team_Filter_Axis:
      return attackerTeam == TEAM_ONE;
    case Scriptable_Team_Filter_Allies:
      return attackerTeam == TEAM_TWO;
    case Scriptable_Team_Filter_Three:
      return attackerTeam == TEAM_THREE;
    case Scriptable_Team_Filter_Neutral:
      return attackerTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
    case Scriptable_Team_Filter_Dead:
      return attackerTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 5 : 0);
    case Scriptable_Team_Filter_My_Team:
      if ( v8 )
        return attackerOwnerEntNum == victimOwnerEntNum;
      return attackerTeam == victimTeam;
    case Scriptable_Team_Filter_Enemy_Team:
      if ( v8 )
      {
        if ( attackerOwnerEntNum != victimOwnerEntNum && attackerTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) && victimTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
          return 1;
      }
      else if ( attackerTeam != victimTeam && attackerTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) && victimTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
      {
        return 1;
      }
      return 0;
    case Scriptable_Team_Filter_All_But_My_Team:
      if ( v8 )
        return attackerOwnerEntNum != victimOwnerEntNum;
      else
        return attackerTeam != victimTeam;
    case Scriptable_Team_Filter_All_But_Enemy_Team:
      if ( v8 )
        v10 = attackerOwnerEntNum == victimOwnerEntNum;
      else
        v10 = attackerTeam == victimTeam;
      if ( !v10 )
        goto LABEL_30;
      return 1;
    case Scriptable_Team_Filter_Enemy_Team_And_Me:
      if ( v8 )
      {
LABEL_30:
        if ( attackerTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
          return 1;
        return victimTeam == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
      }
      else
      {
        if ( attackerTeam != victimTeam && attackerTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) && victimTeam != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
          return 1;
        return attackerOwnerEntNum == victimOwnerEntNum;
      }
    case Scriptable_Team_Filter_Just_Me:
      return attackerOwnerEntNum == victimOwnerEntNum;
    default:
      return 0;
  }
}

/*
==============
ScriptableBg_IsValidDamageCause
==============
*/
bool ScriptableBg_IsValidDamageCause(unsigned int damageTypeFlags, Scriptable_DamageCause validDamageCauses)
{
  bool result; 

  if ( (damageTypeFlags & 0x40) != 0 )
    return 1;
  switch ( validDamageCauses )
  {
    case Scriptable_DamageCause_All:
      return 1;
    case Scriptable_DamageCause_SplashOnly:
      return (damageTypeFlags & 2) != 0;
    case Scriptable_DamageCause_NoSplash:
      return (damageTypeFlags & 2) == 0;
    case Scriptable_DamageCause_NoMelee:
      return (damageTypeFlags & 4) == 0;
    case Scriptable_DamageCause_None:
      goto $LN4_80;
    case Scriptable_DamageCause_MeleeOnly:
      return (damageTypeFlags & 4) != 0;
    case Scriptable_DamageCause_MeleeAndSplashOnly:
      return (damageTypeFlags & 6) != 0;
    case Scriptable_DamageCause_CrushOnly:
      return (damageTypeFlags & 8) != 0;
    case Scriptable_DamageCause_CrushAndSplashOnly:
      return (damageTypeFlags & 0xA) != 0;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1055, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown Scriptable Valid Damage Cause Setting %i", validDamageCauses) )
        __debugbreak();
$LN4_80:
      result = 0;
      break;
  }
  return result;
}

/*
==============
ScriptableBg_IsValidWeapon
==============
*/
char ScriptableBg_IsValidWeapon(const ScriptableEventParams *eventParams, const ScriptableStateDef *stateDef)
{
  const ScriptableDamageEvent *damageEvent; 
  WeaponCompleteDef *PointerToWeaponCompleteDefConst; 
  unsigned int numWeapons; 
  __int64 v7; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1091, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( (!stateDef || stateDef->type != Scriptable_StateType_Health) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1092, ASSERT_TYPE_ASSERT, "(stateDef && stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef && stateDef->type == Scriptable_StateType_Health") )
    __debugbreak();
  if ( !stateDef->data.health.numWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1093, ASSERT_TYPE_ASSERT, "(stateDef->data.health.numWeapons > 0)", (const char *)&queryFormat, "stateDef->data.health.numWeapons > 0") )
    __debugbreak();
  damageEvent = eventParams->damageEvent;
  if ( !damageEvent )
    return 0;
  PointerToWeaponCompleteDefConst = (WeaponCompleteDef *)BG_GetPointerToWeaponCompleteDefConst(damageEvent->weapon.weaponIdx);
  numWeapons = stateDef->data.health.numWeapons;
  v7 = 0i64;
  if ( !numWeapons )
    return 0;
  while ( stateDef->data.health.weapons[v7] != PointerToWeaponCompleteDefConst )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= numWeapons )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableBg_IsValidWeaponClass
==============
*/
char ScriptableBg_IsValidWeaponClass(const ScriptableEventParams *eventParams, const ScriptableStateDef *stateDef)
{
  const ScriptableDamageEvent *damageEvent; 
  weapClass_t WeaponClass; 
  unsigned int numWeaponClasses; 
  __int64 v7; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1062, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( (!stateDef || stateDef->type != Scriptable_StateType_Health) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1063, ASSERT_TYPE_ASSERT, "(stateDef && stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef && stateDef->type == Scriptable_StateType_Health") )
    __debugbreak();
  if ( !stateDef->data.health.numWeaponClasses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 1064, ASSERT_TYPE_ASSERT, "(stateDef->data.health.numWeaponClasses > 0)", (const char *)&queryFormat, "stateDef->data.health.numWeaponClasses > 0") )
    __debugbreak();
  damageEvent = eventParams->damageEvent;
  if ( !damageEvent )
    return 0;
  WeaponClass = BG_GetWeaponClass(&damageEvent->weapon, damageEvent->isAlternate != 0);
  numWeaponClasses = stateDef->data.health.numWeaponClasses;
  v7 = 0i64;
  if ( !numWeaponClasses )
    return 0;
  while ( stateDef->data.health.weaponClasses[v7] != WeaponClass )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= numWeaponClasses )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableBg_ProcessDamageEvent
==============
*/
void ScriptableBg_ProcessDamageEvent(const ScriptableDamageEvent *damageEvent)
{
  unsigned int mod; 
  int v3; 
  unsigned int v4; 
  unsigned int v9; 
  int AttackerFlags; 
  int v11; 
  const ScriptableDef *def; 
  __int64 v13; 
  int damage; 
  int v16; 
  float v19; 
  int v20; 
  signed int v22; 
  int v23; 
  int v24; 
  const ScriptablePartDef *DamagedPart; 
  ScriptableEventParams eventParms; 

  if ( !damageEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 423, ASSERT_TYPE_ASSERT, "( damageEvent )", (const char *)&queryFormat, "damageEvent") )
    __debugbreak();
  if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 424, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
    __debugbreak();
  if ( ScriptableBg_ShouldProcessDefForDamage((const ScriptableContext)damageEvent->context, damageEvent->def) )
  {
    mod = damageEvent->mod;
    if ( mod <= 0x10 && (v3 = 65704, _bittest(&v3, mod)) )
    {
      if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 347, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
        __debugbreak();
      v4 = 0;
      _XMM0 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_13_0);
      __asm { vblendvps xmm1, xmm1, xmm2, xmm3; extraBias }
      v9 = ScriptableBg_CalculateAdjustedDamage(damageEvent->damage, *(const float *)&_XMM1);
      AttackerFlags = ScriptableBg_GetAttackerFlags(damageEvent);
      eventParms.context = damageEvent->context;
      v11 = AttackerFlags | 2;
      eventParms.callbacks = damageEvent->callbacks;
      eventParms.scriptableIndex = damageEvent->scriptableIndex;
      def = damageEvent->def;
      eventParms.partDef = NULL;
      eventParms.damageEvent = damageEvent;
      if ( def->numParts )
      {
        do
        {
          v13 = (__int64)&def->parts[v4];
          if ( damageEvent->context || (*(_BYTE *)(v13 + 12) & 2) != 0 )
          {
            ScriptableBg_DamagePartAndChildren(&eventParms, (const ScriptablePartDef *)v13, v11, v9);
            def = damageEvent->def;
          }
          ++v4;
        }
        while ( v4 < def->numParts );
      }
    }
    else
    {
      if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 397, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
        __debugbreak();
      damage = damageEvent->damage;
      _XMM0 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
      v16 = damageEvent->mod;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_1_0);
      v19 = (float)damage;
      v20 = 1;
      __asm { vblendvps xmm3, xmm1, xmm2, xmm3 }
      v22 = (int)(float)(*(float *)&_XMM3 * v19);
      if ( v22 < 1 )
        v22 = 1;
      if ( v16 == 8 )
      {
        v20 = 4;
      }
      else if ( v16 == 12 )
      {
        v20 = 8;
      }
      v23 = ScriptableBg_GetAttackerFlags(damageEvent);
      eventParms.partDef = NULL;
      eventParms.context = damageEvent->context;
      v24 = v20 | v23;
      eventParms.callbacks = damageEvent->callbacks;
      eventParms.scriptableIndex = damageEvent->scriptableIndex;
      eventParms.damageEvent = damageEvent;
      DamagedPart = ScriptableBg_FindDamagedPart(&eventParms, damageEvent);
      if ( DamagedPart )
        ScriptableBg_DamagePart(&eventParms, DamagedPart, v24, v22);
    }
  }
}

/*
==============
ScriptableBg_ProcessForRadiusDamage
==============
*/
void ScriptableBg_ProcessForRadiusDamage(const ScriptableRadiusDamageCallbackTable *callbacks, const ScriptableContext context, const unsigned int targetLinkNum, ScriptableLinkType targetLinkType, const vec3_t *closestPoint, const float radiusSquared, const float radius, const float explosionOuterDamage, const float explosionInnerDamage, const vec3_t *position, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const meansOfDeath_t splashMethodOfDeath, const Weapon *weapon, const int isAlternate, const int runOcclusionTraces)
{
  bool v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  bool v25; 
  __int64 v26; 
  __int64 scriptableEntNum; 
  unsigned int scriptableIndex; 
  unsigned int v29; 
  ScriptableDef *def; 
  const Weapon *v31; 
  char v32[16]; 
  char v33[16]; 
  Bounds targetAbsBounds; 

  v29 = targetLinkNum;
  v31 = weapon;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 670, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( inflictorEntNum >= 0x800 )
  {
    LODWORD(v26) = inflictorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, 2048) )
      __debugbreak();
  }
  if ( attackerEntNum >= 0x800 )
  {
    LODWORD(scriptableEntNum) = 2048;
    LODWORD(v26) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 672, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, scriptableEntNum) )
      __debugbreak();
  }
  v20 = callbacks->getInstanceIndex == NULL;
  scriptableIndex = 500000;
  def = NULL;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 677, ASSERT_TYPE_ASSERT, "( callbacks->getInstanceIndex )", (const char *)&queryFormat, "callbacks->getInstanceIndex") )
    __debugbreak();
  callbacks->getInstanceIndex((unsigned int)context, targetLinkNum, (unsigned __int8)targetLinkType, &scriptableIndex);
  if ( scriptableIndex >= 0x7A120 )
  {
    LODWORD(scriptableEntNum) = 500000;
    LODWORD(v26) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 679, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( SCRIPTABLE_MAX_INSTANCE_COUNT )", "scriptableIndex doesn't index SCRIPTABLE_MAX_INSTANCE_COUNT\n\t%i not in [0, %i)", v26, scriptableEntNum) )
      __debugbreak();
  }
  if ( !callbacks->getDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 681, ASSERT_TYPE_ASSERT, "( callbacks->getDef )", (const char *)&queryFormat, "callbacks->getDef") )
    __debugbreak();
  callbacks->getDef(context, scriptableIndex, (const ScriptableDef **)&def);
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 683, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( ScriptableBg_ShouldProcessDefForDamage(context, def) )
  {
    if ( !callbacks->getOriginAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 694, ASSERT_TYPE_ASSERT, "( callbacks->getOriginAngles )", (const char *)&queryFormat, "callbacks->getOriginAngles") )
      __debugbreak();
    callbacks->getOriginAngles(context, scriptableIndex, (vec3_t *)v33, (vec3_t *)v32);
    v21 = position->v[1] - closestPoint->v[1];
    v22 = position->v[2] - closestPoint->v[2];
    v23 = (float)((float)(v21 * v21) + (float)((float)(position->v[0] - closestPoint->v[0]) * (float)(position->v[0] - closestPoint->v[0]))) + (float)(v22 * v22);
    if ( v23 <= radiusSquared )
    {
      v24 = (float)((float)(1.0 - (float)(fsqrt(v23) * (float)(1.0 / radius))) * (float)(explosionInnerDamage - explosionOuterDamage)) + explosionOuterDamage;
      if ( (int)v24 > 0 )
      {
        if ( targetLinkType != SCRIPTABLE_LINK_ENTITY )
        {
          if ( !callbacks->damage )
          {
            v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 715, ASSERT_TYPE_ASSERT, "( callbacks->damage )", (const char *)&queryFormat, "callbacks->damage");
            goto LABEL_38;
          }
          goto LABEL_40;
        }
        if ( !callbacks->getAbsBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 722, ASSERT_TYPE_ASSERT, "(callbacks->getAbsBounds)", (const char *)&queryFormat, "callbacks->getAbsBounds") )
          __debugbreak();
        callbacks->getAbsBounds(context, scriptableIndex, &targetAbsBounds);
        if ( !runOcclusionTraces || ScriptableBg_ShouldRadiusDamageHurt(callbacks, context, scriptableIndex, &targetAbsBounds, position, inflictorEntNum, v29, 9441297) )
        {
          if ( !callbacks->damage )
          {
            v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 738, ASSERT_TYPE_ASSERT, "( callbacks->damage )", (const char *)&queryFormat, "callbacks->damage");
LABEL_38:
            if ( v25 )
              __debugbreak();
          }
LABEL_40:
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, const vec3_t *, const vec3_t *, const meansOfDeath_t, const Weapon *, const int, int, _DWORD, _DWORD, _DWORD))callbacks->damage)((unsigned int)context, scriptableIndex, inflictorEntNum, attackerEntNum, position, closestPoint, splashMethodOfDeath, v31, isAlternate, (int)v24, LODWORD(explosionOuterDamage), LODWORD(explosionInnerDamage), LODWORD(radius));
        }
      }
    }
  }
}

/*
==============
ScriptableBg_RadiusDamageEvent
==============
*/
void ScriptableBg_RadiusDamageEvent(const ScriptableContext context, const ScriptableRadiusDamageCallbackTable *callbacks, const unsigned int inflictorEntNum, const unsigned int attackerEntNum, const Weapon *weapon, const int isAlternate, const vec3_t *position, const float outerRadius, const float explosionInnerDamage, const float explosionOuterDamage, const meansOfDeath_t mod, const int runOcclusionTraces)
{
  const dvar_t *v16; 
  float v19; 
  bool v22; 
  float v23; 
  unsigned int v24; 
  ScriptableLinkType *v25; 
  const unsigned int *v26; 
  vec3_t *p_closestPoint; 
  __int64 v28; 
  __int64 radiusSquared; 
  __int64 radius; 
  int v35[6]; 
  char v36[40]; 
  vec3_t closestPoint; 
  char v38[16]; 

  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 750, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( inflictorEntNum >= 0x800 )
  {
    LODWORD(radiusSquared) = inflictorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 751, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", radiusSquared, 2048) )
      __debugbreak();
  }
  if ( attackerEntNum >= 0x800 )
  {
    LODWORD(radius) = 2048;
    LODWORD(radiusSquared) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 752, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", radiusSquared, radius) )
      __debugbreak();
  }
  v16 = DCONST_DVARFLT_bg_radiusDamageMax;
  if ( !DCONST_DVARFLT_bg_radiusDamageMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_radiusDamageMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  _XMM3 = LODWORD(outerRadius);
  _XMM2 = v16->current.unsignedInt;
  if ( outerRadius < 1.0 )
  {
    v19 = FLOAT_1_0;
    goto LABEL_16;
  }
  __asm
  {
    vcmpltss xmm0, xmm2, xmm3
    vblendvps xmm0, xmm3, xmm2, xmm0
  }
  v19 = *(float *)&_XMM0;
  if ( *(float *)&_XMM0 >= 1.0 )
  {
LABEL_16:
    if ( v19 <= *(float *)&_XMM2 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 767, ASSERT_TYPE_ASSERT, "( 1.0f ) <= ( actualRadius ) && ( actualRadius ) <= ( radiusDamageMax )", "actualRadius not in [1.0f, radiusDamageMax]\n\t%g not in [%g, %g]", v19, DOUBLE_1_0, *(float *)&_XMM2) )
    __debugbreak();
LABEL_19:
  v22 = callbacks->areaScriptables == NULL;
  v23 = position->v[1];
  v35[0] = LODWORD(position->v[0]);
  v35[2] = LODWORD(position->v[2]);
  *(float *)&v35[1] = v23;
  *(float *)&v35[3] = v19 * 1.4142135;
  *(float *)&v35[4] = v19 * 1.4142135;
  *(float *)&v35[5] = v19 * 1.4142135;
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 778, ASSERT_TYPE_ASSERT, "( callbacks->areaScriptables )", (const char *)&queryFormat, "callbacks->areaScriptables") )
    __debugbreak();
  v24 = callbacks->areaScriptables(context, (const Bounds *)v35, (unsigned int *)v36, (ScriptableLinkType *)v38, &closestPoint, 10u);
  if ( v24 )
  {
    v25 = (ScriptableLinkType *)v38;
    v26 = (const unsigned int *)v36;
    p_closestPoint = &closestPoint;
    v28 = v24;
    do
    {
      ScriptableBg_ProcessForRadiusDamage(callbacks, context, *v26++, *v25++, p_closestPoint++, v19 * v19, v19, explosionOuterDamage, explosionInnerDamage, position, inflictorEntNum, attackerEntNum, mod, weapon, isAlternate, runOcclusionTraces);
      --v28;
    }
    while ( v28 );
  }
}

/*
==============
ScriptableBg_ShouldProcessDefForDamage
==============
*/
_BOOL8 ScriptableBg_ShouldProcessDefForDamage(const ScriptableContext context, const ScriptableDef *def)
{
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 52, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 324, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 0x80) == 0 )
    return 0i64;
  if ( context )
    return def->partCount != def->serverControlledPartCount;
  if ( !def->serverInstancedPartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 63, ASSERT_TYPE_ASSERT, "(def->serverInstancedPartCount > 0)", "%s\n\tManaged to get called on the server without server parts?", "def->serverInstancedPartCount > 0") )
    __debugbreak();
  return 1i64;
}

/*
==============
ScriptableBg_ShouldProcessPart
==============
*/
_BOOL8 ScriptableBg_ShouldProcessPart(const ScriptableContext context, const ScriptablePartDef *partDef)
{
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 77, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( context )
    return (partDef->flags & 4) == 0;
  else
    return ((unsigned int)partDef->flags >> 1) & 1;
}

/*
==============
ScriptableBg_ShouldRadiusDamageHurt
==============
*/
__int64 ScriptableBg_ShouldRadiusDamageHurt(const ScriptableRadiusDamageCallbackTable *callbacks, const ScriptableContext context, const unsigned int scriptableIndex, const Bounds *targetAbsBounds, const vec3_t *damageOrigin, const unsigned int inflictorEntNum, const unsigned int scriptableEntNum, const int contentmask)
{
  const dvar_t *v11; 
  __int64 v12; 
  void (__fastcall *debugBox)(const vec3_t *, const Bounds *, float, const vec4_t *, int, int); 
  const Bounds *v14; 
  const vec3_t *v15; 
  const dvar_t *v17; 
  void (__fastcall *debugLine)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  Physics_WorldId ScriptablePhysicsWorldId; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  int v21; 
  int *v22; 
  Physics_WorldId v23; 
  int v24; 
  int RaycastHitRef; 
  Physics_RefSystem RefSystem; 
  const ScriptableDef *ScriptableDefFromIndex; 
  bool v28; 
  unsigned int v29; 
  const dvar_t *v30; 
  void (__fastcall *v31)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  const dvar_t *v32; 
  void (__fastcall *v33)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  hkMemoryAllocator *v34; 
  hkMemoryAllocator *v35; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v39; 
  __int64 v40; 
  vec3_t points[5]; 
  int doTrace[5]; 

  v40 = -2i64;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 548, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !targetAbsBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 549, ASSERT_TYPE_ASSERT, "( targetAbsBounds )", (const char *)&queryFormat, "targetAbsBounds") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    debugBox = callbacks->debugBox;
    if ( debugBox )
      ((void (__fastcall *)(vec3_t *, const Bounds *, __int64, vec4_t *, _DWORD, int))debugBox)(&vec3_origin, targetAbsBounds, v12, &colorMdGrey, 0, 300);
  }
  v14 = targetAbsBounds;
  v15 = damageOrigin;
  if ( !(unsigned int)ScriptableBg_BuildExplosionDamageTrace(damageOrigin, v14, (vec3_t (*)[5])points, (int (*)[5])doTrace) )
    return 1i64;
  v17 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    debugLine = callbacks->debugLine;
    if ( debugLine )
    {
      debugLine(&points[1], &points[2], &colorLtBlue, 1, 300);
      callbacks->debugLine(&points[2], &points[4], &colorLtBlue, 1, 300);
      callbacks->debugLine(&points[4], &points[3], &colorLtBlue, 1, 300);
      callbacks->debugLine(&points[3], &points[1], &colorLtBlue, 1, 300);
    }
  }
  ScriptablePhysicsWorldId = GetScriptablePhysicsWorldId(context);
  AllResult = PhysicsQuery_GetAllResult(ScriptablePhysicsWorldId);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 582, ASSERT_TYPE_ASSERT, "( traceResult )", (const char *)&queryFormat, "traceResult") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v39, 0, 0);
  if ( scriptableEntNum != 2047 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v39, scriptableEntNum, 1, 1, 0, 0, 0);
  if ( inflictorEntNum != 2047 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v39, inflictorEntNum, 1, 1, 0, 0, 0);
  v21 = 0;
  v22 = doTrace;
  while ( !*v22 )
  {
LABEL_60:
    ++v21;
    ++v22;
    if ( v21 >= 5 )
    {
      v29 = 0;
      goto LABEL_62;
    }
  }
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = contentmask;
  extendedData.ignoreBodies = &v39;
  if ( context )
  {
    if ( context == SBL_CONTEXT_CLIENT_0 )
    {
      v23 = PHYSICS_WORLD_ID_CLIENT_FIRST;
    }
    else if ( context == SBL_CONTEXT_CLIENT_1 )
    {
      v23 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.h", 105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown context") )
        __debugbreak();
      v23 = PHYSICS_WORLD_ID_INVALID;
    }
  }
  else
  {
    v23 = PHYSICS_WORLD_ID_FIRST;
  }
  Physics_Raycast(v23, v15, &points[v21], &extendedData, AllResult);
  v24 = 0;
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(AllResult) )
  {
    while ( 1 )
    {
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(AllResult, v24);
      RefSystem = Physics_GetRefSystem(RaycastHitRef);
      ScriptableDefFromIndex = ScriptableBg_GetScriptableDefFromIndex(scriptableIndex, context);
      v28 = ScriptableDefFromIndex && (ScriptableDefFromIndex->flags & 0x180000) != 0;
      if ( RefSystem != Physics_RefSystem_Scriptable || !v28 )
        break;
      if ( ++v24 >= HavokPhysics_CollisionQueryResult::GetNumHits(AllResult) )
      {
        v15 = damageOrigin;
        goto LABEL_48;
      }
    }
    v32 = DCONST_DVARBOOL_scriptable_debug;
    if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v15 = damageOrigin;
    if ( v32->current.enabled )
    {
      v33 = callbacks->debugLine;
      if ( v33 )
        v33(damageOrigin, &points[v21], &colorOrange, 1, 300);
    }
    goto LABEL_60;
  }
LABEL_48:
  v29 = 1;
  v30 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled )
  {
    v31 = callbacks->debugLine;
    if ( v31 )
      v31(v15, &points[v21], &colorGreen, 1, 300);
  }
LABEL_62:
  v34 = hkMemHeapAllocator();
  v39.m_ignoreBodies.m_size = 0;
  if ( v39.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v34, v39.m_ignoreBodies.m_data, 4, v39.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v39.m_ignoreBodies.m_data = NULL;
  v39.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v35 = hkMemHeapAllocator();
  v39.m_ignoreEntities.m_size = 0;
  if ( v39.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v35, v39.m_ignoreEntities.m_data, 8, v39.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v29;
}

