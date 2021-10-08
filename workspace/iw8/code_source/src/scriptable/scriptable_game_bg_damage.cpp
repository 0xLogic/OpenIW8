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
  bool v18; 
  bool v19; 
  __int64 result; 
  bool v54; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  double v159; 
  double v160; 
  char v168; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = points;
  _RDI = targetAbsBounds;
  _RBP = damageOrigin;
  v18 = targetAbsBounds == NULL;
  if ( !targetAbsBounds )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 451, ASSERT_TYPE_ASSERT, "( targetAbsBounds )", (const char *)&queryFormat, "targetAbsBounds");
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm4, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm5, xmm1, xmm3
    vsubss  xmm7, xmm0, xmm2
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, xmm6
  }
  if ( v18 )
  {
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm8
      vmovaps [rsp+0F8h+var_58], xmm9
      vmovaps [rsp+0F8h+var_68], xmm10
      vdivss  xmm0, xmm6, xmm1
      vmovaps [rsp+0F8h+var_78], xmm11
      vmulss  xmm10, xmm0, xmm4
      vmulss  xmm11, xmm0, xmm5
      vmovaps [rsp+0F8h+var_88], xmm12
      vmovaps [rsp+0F8h+var_98], xmm13
      vmulss  xmm13, xmm0, xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm0, xmm11, xmm11
      vmulss  xmm8, xmm10, xmm10
      vaddss  xmm2, xmm0, xmm8
      vmulss  xmm1, xmm13, xmm13
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm3, xmm6
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, cs:__real@3b03126f
      vmovaps [rsp+0F8h+var_A8], xmm14
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm13, xmm13
      vmovsd  [rsp+0F8h+var_C0], xmm2
      vcvtss2sd xmm3, xmm11, xmm11
      vmovsd  [rsp+0F8h+var_C8], xmm3
      vcvtss2sd xmm0, xmm10, xmm10
      vmovsd  [rsp+0F8h+var_D0], xmm0
    }
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 465, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", v149, v152, v155, v158);
    if ( v54 )
      __debugbreak();
    __asm
    {
      vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm2, xmm11, xmm14
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm1, xmm0, xmm8
      vsqrtss xmm3, xmm1, xmm1
      vxorps  xmm12, xmm12, xmm12
      vucomiss xmm3, xmm12
      vmovaps xmm9, xmm10
    }
    if ( v54 )
    {
      __asm
      {
        vdivss  xmm0, xmm6, xmm3
        vmulss  xmm9, xmm10, xmm0
        vmulss  xmm8, xmm2, xmm0
      }
    }
    else
    {
      __asm { vmovaps xmm8, xmm6 }
    }
    __asm
    {
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm3, xmm1, xmm0
      vsubss  xmm2, xmm3, xmm6
      vandps  xmm2, xmm2, xmm7
      vcomiss xmm2, cs:__real@3b03126f
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_B8], xmm1
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_C0], xmm0
      vcvtss2sd xmm2, xmm9, xmm9
      vmovsd  [rsp+0F8h+var_C8], xmm2
      vcvtss2sd xmm3, xmm8, xmm8
      vmovsd  [rsp+0F8h+var_D0], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 484, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", v150, v153, v156, v159) )
      __debugbreak();
    __asm
    {
      vmulss  xmm0, xmm13, xmm9
      vxorps  xmm14, xmm0, xmm14
      vmulss  xmm0, xmm11, xmm8
      vmovaps xmm11, [rsp+0F8h+var_78]
      vmulss  xmm1, xmm10, xmm9
      vsubss  xmm10, xmm1, xmm0
      vmulss  xmm0, xmm14, xmm14
      vmulss  xmm13, xmm13, xmm8
      vmulss  xmm2, xmm13, xmm13
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm4, xmm3, xmm1
      vsubss  xmm0, xmm4, xmm6
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, cs:__real@3b03126f
      vsqrtss xmm0, xmm4, xmm4
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm10, xmm10
      vmovsd  [rsp+0F8h+var_C0], xmm2
      vcvtss2sd xmm3, xmm13, xmm13
      vmovsd  [rsp+0F8h+var_C8], xmm3
      vcvtss2sd xmm0, xmm14, xmm14
      vmovsd  [rsp+0F8h+var_D0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 489, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v151, v154, v157, v160) )
      __debugbreak();
    __asm
    {
      vmulss  xmm1, xmm9, dword ptr [rdi+10h]
      vmulss  xmm0, xmm8, dword ptr [rdi+0Ch]
      vmulss  xmm2, xmm14, dword ptr [rdi+0Ch]
      vandps  xmm1, xmm1, xmm7
      vandps  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm1, xmm0
      vmulss  xmm0, xmm13, dword ptr [rdi+10h]
      vmulss  xmm1, xmm10, dword ptr [rdi+14h]
      vandps  xmm0, xmm0, xmm7
      vandps  xmm1, xmm1, xmm7
      vandps  xmm2, xmm2, xmm7
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm0, xmm3, xmm1
      vmovss  xmm1, cs:__real@42000000
    }
    (*doTrace)[0] = 1;
    __asm { vcomiss xmm4, xmm1 }
    (*doTrace)[1] = 1;
    (*doTrace)[2] = 1;
    (*doTrace)[3] = 1;
    (*doTrace)[4] = 1;
    __asm
    {
      vcomiss xmm0, xmm1
      vmovaps xmm12, [rsp+0F8h+var_88]
      vmulss  xmm6, xmm13, xmm0
      vmovaps xmm13, [rsp+0F8h+var_98]
      vmulss  xmm7, xmm10, xmm0
      vmovaps xmm10, [rsp+0F8h+var_68]
      vmulss  xmm5, xmm14, xmm0
      vmovaps xmm14, [rsp+0F8h+var_A8]
      vmulss  xmm3, xmm8, xmm4
      vaddss  xmm1, xmm3, dword ptr [rsi]
      vmovss  dword ptr [rsi+0Ch], xmm1
      vmovaps xmm8, [rsp+0F8h+var_48]
      vmulss  xmm4, xmm9, xmm4
      vaddss  xmm0, xmm4, dword ptr [rsi+4]
      vmovss  dword ptr [rsi+10h], xmm0
    }
    (*_RSI)[1].v[2] = (*_RSI)[0].v[2];
    __asm
    {
      vmovaps xmm9, [rsp+0F8h+var_58]
      vaddss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rsi+0Ch], xmm0
      vaddss  xmm1, xmm6, dword ptr [rsi+10h]
      vmovss  dword ptr [rsi+10h], xmm1
      vaddss  xmm0, xmm7, dword ptr [rsi+14h]
      vmovss  dword ptr [rsi+14h], xmm0
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm2, xmm0, xmm3
      vmovss  dword ptr [rsi+18h], xmm2
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm0, xmm1, xmm4
      vmovss  dword ptr [rsi+1Ch], xmm0
    }
    (*_RSI)[2].v[2] = (*_RSI)[0].v[2];
    __asm
    {
      vaddss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsi+18h], xmm0
      vaddss  xmm1, xmm6, dword ptr [rsi+1Ch]
      vmovss  dword ptr [rsi+1Ch], xmm1
      vaddss  xmm0, xmm7, dword ptr [rsi+20h]
      vmovss  dword ptr [rsi+20h], xmm0
      vaddss  xmm1, xmm3, dword ptr [rsi]
      vmovss  dword ptr [rsi+24h], xmm1
      vaddss  xmm0, xmm4, dword ptr [rsi+4]
      vmovss  dword ptr [rsi+28h], xmm0
    }
    (*_RSI)[3].v[2] = (*_RSI)[0].v[2];
    result = 1i64;
    __asm
    {
      vsubss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rsi+24h], xmm0
      vmovss  xmm1, dword ptr [rsi+28h]
      vsubss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsi+28h], xmm2
      vmovss  xmm0, dword ptr [rsi+2Ch]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi+2Ch], xmm1
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm2, xmm0, xmm3
      vmovss  dword ptr [rsi+30h], xmm2
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm0, xmm1, xmm4
      vmovss  dword ptr [rsi+34h], xmm0
    }
    (*_RSI)[4].v[2] = (*_RSI)[0].v[2];
    __asm
    {
      vsubss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsi+30h], xmm0
      vmovss  xmm1, dword ptr [rsi+34h]
      vsubss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsi+34h], xmm2
      vmovss  xmm0, dword ptr [rsi+38h]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi+38h], xmm1
    }
  }
  _R11 = &v168;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
ScriptableBg_CalculateAdjustedDamage
==============
*/

int __fastcall ScriptableBg_CalculateAdjustedDamage(const int baseDamage, double extraBias)
{
  int result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
    vmovss  xmm3, cs:__real@3f000000
  }
  _EAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
  _ECX = 0;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm2, ecx
    vpcmpeqd xmm4, xmm0, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vblendvps xmm4, xmm2, xmm3, xmm4
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm3, xmm4, xmm0
    vmulss  xmm1, xmm3, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vcvttss2si eax, xmm1
  }
  if ( result < 1 )
    return 1;
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
  int result; 
  bool v7; 
  int Damage; 
  int v9; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  if ( mod == 8 )
    return BG_GetMeleeDamage(weapon, isAlternate != 0);
  if ( mod == 3 )
  {
    *(double *)&_XMM0 = BG_WeaponBulletFire_GetExplDmg(weapon, isAlternate != 0);
    __asm { vcvttss2si eax, xmm0 }
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
        __asm { vcvttss2si ecx, [rsp+68h+outDamageRangeInfo.innerDamage] }
        Damage += _ECX;
      }
    }
    return Damage;
  }
  return result;
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
  int v12; 
  int AttackerFlags; 
  int v14; 
  const ScriptableDef *def; 
  __int64 v16; 
  int v21; 
  int v27; 
  int v31; 
  int v32; 
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
      __asm { vmovss  xmm2, cs:__real@41100000 }
      _ESI = 0;
      __asm { vmovd   xmm1, esi }
      _EAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@41500000
        vblendvps xmm1, xmm1, xmm2, xmm3; extraBias
      }
      v12 = ScriptableBg_CalculateAdjustedDamage(damageEvent->damage, *(double *)&_XMM1);
      AttackerFlags = ScriptableBg_GetAttackerFlags(damageEvent);
      eventParms.context = damageEvent->context;
      v14 = AttackerFlags | 2;
      eventParms.callbacks = damageEvent->callbacks;
      eventParms.scriptableIndex = damageEvent->scriptableIndex;
      def = damageEvent->def;
      eventParms.partDef = NULL;
      eventParms.damageEvent = damageEvent;
      if ( def->numParts )
      {
        do
        {
          v16 = (__int64)&def->parts[_ESI];
          if ( damageEvent->context || (*(_BYTE *)(v16 + 12) & 2) != 0 )
          {
            ScriptableBg_DamagePartAndChildren(&eventParms, (const ScriptablePartDef *)v16, v14, v12);
            def = damageEvent->def;
          }
          ++_ESI;
        }
        while ( _ESI < def->numParts );
      }
    }
    else
    {
      if ( !damageEvent->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 397, ASSERT_TYPE_ASSERT, "( damageEvent->def )", (const char *)&queryFormat, "damageEvent->def") )
        __debugbreak();
      __asm { vmovss  xmm2, cs:__real@3f000000 }
      _ESI = 0;
      _EAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
      __asm { vmovd   xmm0, eax }
      v21 = damageEvent->mod;
      __asm
      {
        vmovd   xmm1, esi
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
      }
      v27 = 1;
      __asm
      {
        vblendvps xmm3, xmm1, xmm2, xmm3
        vmulss  xmm2, xmm3, xmm0
        vcvttss2si r14d, xmm2
      }
      if ( _ER14 < 1 )
        _ER14 = 1;
      if ( v21 == 8 )
      {
        v27 = 4;
      }
      else if ( v21 == 12 )
      {
        v27 = 8;
      }
      v31 = ScriptableBg_GetAttackerFlags(damageEvent);
      eventParms.partDef = NULL;
      eventParms.context = damageEvent->context;
      v32 = v27 | v31;
      eventParms.callbacks = damageEvent->callbacks;
      eventParms.scriptableIndex = damageEvent->scriptableIndex;
      eventParms.damageEvent = damageEvent;
      DamagedPart = ScriptableBg_FindDamagedPart(&eventParms, damageEvent);
      if ( DamagedPart )
        ScriptableBg_DamagePart(&eventParms, DamagedPart, v32, _ER14);
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
  bool v24; 
  char v36; 
  bool v49; 
  __int64 v53; 
  __int64 scriptableEntNum; 
  int v55; 
  int v56; 
  int v57; 
  unsigned int scriptableIndex; 
  unsigned int v59; 
  ScriptableDef *def; 
  const Weapon *v61; 
  char v62[16]; 
  char v63[16]; 
  Bounds targetAbsBounds; 

  _R12 = position;
  v59 = targetLinkNum;
  v61 = weapon;
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 670, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( inflictorEntNum >= 0x800 )
  {
    LODWORD(v53) = inflictorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( inflictorEntNum ) < (unsigned)( ( 2048 ) )", "inflictorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v53, 2048) )
      __debugbreak();
  }
  if ( attackerEntNum >= 0x800 )
  {
    LODWORD(scriptableEntNum) = 2048;
    LODWORD(v53) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 672, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v53, scriptableEntNum) )
      __debugbreak();
  }
  v24 = callbacks->getInstanceIndex == NULL;
  scriptableIndex = 500000;
  def = NULL;
  if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 677, ASSERT_TYPE_ASSERT, "( callbacks->getInstanceIndex )", (const char *)&queryFormat, "callbacks->getInstanceIndex") )
    __debugbreak();
  callbacks->getInstanceIndex((unsigned int)context, targetLinkNum, (unsigned __int8)targetLinkType, &scriptableIndex);
  if ( scriptableIndex >= 0x7A120 )
  {
    LODWORD(scriptableEntNum) = 500000;
    LODWORD(v53) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 679, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( SCRIPTABLE_MAX_INSTANCE_COUNT )", "scriptableIndex doesn't index SCRIPTABLE_MAX_INSTANCE_COUNT\n\t%i not in [0, %i)", v53, scriptableEntNum) )
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
    callbacks->getOriginAngles(context, scriptableIndex, (vec3_t *)v63, (vec3_t *)v62);
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm3, xmm0, dword ptr [r13+0]
      vmovss  xmm1, dword ptr [r12+4]
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm2, xmm1, dword ptr [r13+4]
      vsubss  xmm4, xmm0, dword ptr [r13+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm5, xmm3, xmm0
      vcomiss xmm5, [rsp+148h+radiusSquared]
    }
    if ( v36 | v24 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vmovaps [rsp+148h+var_58], xmm6
        vmovss  xmm6, [rsp+148h+explosionOuterDamage]
        vmovaps [rsp+148h+var_68], xmm7
        vmovss  xmm7, [rsp+148h+radius]
        vdivss  xmm0, xmm2, xmm7
        vsqrtss xmm1, xmm5, xmm5
        vmulss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm2, xmm1
        vmovaps [rsp+148h+var_78], xmm8
        vmovss  xmm8, [rsp+148h+explosionInnerDamage]
        vsubss  xmm0, xmm8, xmm6
        vmulss  xmm1, xmm2, xmm0
        vaddss  xmm2, xmm1, xmm6
        vcvttss2si r14d, xmm2
      }
      if ( _ER14 <= 0 )
      {
LABEL_41:
        __asm
        {
          vmovaps xmm7, [rsp+148h+var_68]
          vmovaps xmm6, [rsp+148h+var_58]
          vmovaps xmm8, [rsp+148h+var_78]
        }
        return;
      }
      if ( targetLinkType == SCRIPTABLE_LINK_ENTITY )
      {
        if ( !callbacks->getAbsBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 722, ASSERT_TYPE_ASSERT, "(callbacks->getAbsBounds)", (const char *)&queryFormat, "callbacks->getAbsBounds") )
          __debugbreak();
        callbacks->getAbsBounds(context, scriptableIndex, &targetAbsBounds);
        if ( runOcclusionTraces && !ScriptableBg_ShouldRadiusDamageHurt(callbacks, context, scriptableIndex, &targetAbsBounds, position, inflictorEntNum, v59, 9441297) )
          goto LABEL_41;
        if ( callbacks->damage )
          goto LABEL_40;
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 738, ASSERT_TYPE_ASSERT, "( callbacks->damage )", (const char *)&queryFormat, "callbacks->damage");
      }
      else
      {
        if ( callbacks->damage )
        {
LABEL_40:
          __asm
          {
            vmovss  [rsp+148h+var_E8], xmm7
            vmovss  [rsp+148h+var_F0], xmm8
            vmovss  [rsp+148h+var_F8], xmm6
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, const vec3_t *, const vec3_t *, const meansOfDeath_t, const Weapon *, const int, int, int, int, int))callbacks->damage)((unsigned int)context, scriptableIndex, inflictorEntNum, attackerEntNum, position, closestPoint, splashMethodOfDeath, v61, isAlternate, _ER14, v55, v56, v57);
          goto LABEL_41;
        }
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 715, ASSERT_TYPE_ASSERT, "( callbacks->damage )", (const char *)&queryFormat, "callbacks->damage");
      }
      if ( v49 )
        __debugbreak();
      goto LABEL_40;
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
  char v22; 
  bool v23; 
  unsigned int v38; 
  ScriptableLinkType *v39; 
  const unsigned int *v40; 
  vec3_t *p_closestPoint; 
  __int64 v44; 
  __int64 radiusSquared; 
  double radiusSquareda; 
  float radiusSquaredb; 
  __int64 radius; 
  double radiusa; 
  float radiusb; 
  double v55; 
  float v56; 
  float v57; 
  int v62[6]; 
  char v63[40]; 
  vec3_t closestPoint; 
  char v65[16]; 

  __asm
  {
    vmovaps [rsp+208h+var_58], xmm6
    vmovaps [rsp+208h+var_88], xmm9
  }
  _R13 = position;
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
  _RBX = DCONST_DVARFLT_bg_radiusDamageMax;
  if ( !DCONST_DVARFLT_bg_radiusDamageMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_radiusDamageMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, [rsp+208h+outerRadius]
    vmovss  xmm1, cs:__real@3f800000
    vcomiss xmm3, xmm1
    vmovss  xmm2, dword ptr [rbx+28h]
  }
  if ( v22 )
  {
    __asm { vmovaps xmm6, xmm1 }
    goto LABEL_16;
  }
  __asm
  {
    vcmpltss xmm0, xmm2, xmm3
    vblendvps xmm0, xmm3, xmm2, xmm0
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( !v22 )
  {
LABEL_16:
    __asm { vcomiss xmm6, xmm2 }
    if ( v22 | v23 )
      goto LABEL_19;
  }
  __asm
  {
    vcvtss2sd xmm0, xmm2, xmm2
    vmovsd  [rsp+208h+var_1D0], xmm0
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovsd  qword ptr [rsp+208h+radius], xmm0
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  qword ptr [rsp+208h+radiusSquared], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 767, ASSERT_TYPE_ASSERT, "( 1.0f ) <= ( actualRadius ) && ( actualRadius ) <= ( radiusDamageMax )", "actualRadius not in [1.0f, radiusDamageMax]\n\t%g not in [%g, %g]", radiusSquareda, radiusa, v55) )
    __debugbreak();
LABEL_19:
  v23 = callbacks->areaScriptables == NULL;
  __asm
  {
    vmulss  xmm2, xmm6, cs:__real@3fb504f3
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [r13+4]
    vmovss  [rsp+208h+var_168], xmm0
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+208h+var_160], xmm0
    vmovss  [rsp+208h+var_164], xmm1
    vmovss  [rsp+208h+var_15C], xmm2
    vmovss  [rsp+208h+var_158], xmm2
    vmovss  [rsp+208h+var_154], xmm2
    vmulss  xmm9, xmm6, xmm6
  }
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 778, ASSERT_TYPE_ASSERT, "( callbacks->areaScriptables )", (const char *)&queryFormat, "callbacks->areaScriptables") )
    __debugbreak();
  v38 = callbacks->areaScriptables(context, (const Bounds *)v62, (unsigned int *)v63, (ScriptableLinkType *)v65, &closestPoint, 10u);
  if ( v38 )
  {
    v39 = (ScriptableLinkType *)v65;
    v40 = (const unsigned int *)v63;
    p_closestPoint = &closestPoint;
    __asm
    {
      vmovaps [rsp+208h+var_68], xmm7
      vmovss  xmm7, [rsp+208h+explosionOuterDamage]
      vmovaps [rsp+208h+var_78], xmm8
      vmovss  xmm8, [rsp+208h+explosionInnerDamage]
    }
    v44 = v38;
    do
    {
      __asm
      {
        vmovss  [rsp+208h+var_1C8], xmm8
        vmovss  dword ptr [rsp+208h+var_1D0], xmm7
        vmovss  [rsp+208h+radius], xmm6
        vmovss  [rsp+208h+radiusSquared], xmm9
      }
      ScriptableBg_ProcessForRadiusDamage(callbacks, context, *v40++, *v39++, p_closestPoint++, radiusSquaredb, radiusb, v56, v57, position, inflictorEntNum, attackerEntNum, mod, weapon, isAlternate, runOcclusionTraces);
      --v44;
    }
    while ( v44 );
    __asm
    {
      vmovaps xmm8, [rsp+208h+var_78]
      vmovaps xmm7, [rsp+208h+var_68]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+208h+var_58]
    vmovaps xmm9, [rsp+208h+var_88]
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
  const dvar_t *v13; 
  __int64 v14; 
  void (__fastcall *debugBox)(const vec3_t *, const Bounds *, float, const vec4_t *, int, int); 
  const Bounds *v18; 
  const vec3_t *v19; 
  __int64 result; 
  const dvar_t *v21; 
  void (__fastcall *debugLine)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  Physics_WorldId ScriptablePhysicsWorldId; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  int v25; 
  int *v26; 
  Physics_WorldId v27; 
  int v28; 
  int RaycastHitRef; 
  Physics_RefSystem RefSystem; 
  const ScriptableDef *ScriptableDefFromIndex; 
  bool v32; 
  unsigned int v33; 
  const dvar_t *v34; 
  void (__fastcall *v35)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  const dvar_t *v36; 
  void (__fastcall *v37)(const vec3_t *, const vec3_t *, const vec4_t *, int, int); 
  hkMemoryAllocator *v38; 
  hkMemoryAllocator *v39; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v44; 
  __int64 v45; 
  vec3_t points[5]; 
  int doTrace[5]; 

  v45 = -2i64;
  __asm { vmovaps [rsp+170h+var_50], xmm6 }
  if ( !callbacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 548, ASSERT_TYPE_ASSERT, "( callbacks )", (const char *)&queryFormat, "callbacks") )
    __debugbreak();
  if ( !targetAbsBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_damage.cpp", 549, ASSERT_TYPE_ASSERT, "( targetAbsBounds )", (const char *)&queryFormat, "targetAbsBounds") )
    __debugbreak();
  v13 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v13->current.enabled )
  {
    debugBox = callbacks->debugBox;
    if ( debugBox )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
      ((void (__fastcall *)(vec3_t *, const Bounds *, __int64, vec4_t *, _DWORD, int))debugBox)(&vec3_origin, targetAbsBounds, v14, &colorMdGrey, 0, 300);
    }
  }
  v18 = targetAbsBounds;
  v19 = damageOrigin;
  if ( !(unsigned int)ScriptableBg_BuildExplosionDamageTrace(damageOrigin, v18, (vec3_t (*)[5])points, (int (*)[5])doTrace) )
  {
    result = 1i64;
    goto LABEL_67;
  }
  v21 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
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
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v44, 0, 0);
  if ( scriptableEntNum != 2047 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v44, scriptableEntNum, 1, 1, 0, 0, 0);
  if ( inflictorEntNum != 2047 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v44, inflictorEntNum, 1, 1, 0, 0, 0);
  v25 = 0;
  v26 = doTrace;
  while ( !*v26 )
  {
LABEL_60:
    ++v25;
    ++v26;
    if ( v25 >= 5 )
    {
      v33 = 0;
      goto LABEL_62;
    }
  }
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm { vmovss  [rsp+170h+extendedData.collisionBuffer], xmm6 }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = contentmask;
  extendedData.ignoreBodies = &v44;
  if ( context )
  {
    if ( context == SBL_CONTEXT_CLIENT_0 )
    {
      v27 = PHYSICS_WORLD_ID_CLIENT_FIRST;
    }
    else if ( context == SBL_CONTEXT_CLIENT_1 )
    {
      v27 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.h", 105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown context") )
        __debugbreak();
      v27 = PHYSICS_WORLD_ID_INVALID;
    }
  }
  else
  {
    v27 = PHYSICS_WORLD_ID_FIRST;
  }
  Physics_Raycast(v27, v19, &points[v25], &extendedData, AllResult);
  v28 = 0;
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(AllResult) )
  {
    while ( 1 )
    {
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(AllResult, v28);
      RefSystem = Physics_GetRefSystem(RaycastHitRef);
      ScriptableDefFromIndex = ScriptableBg_GetScriptableDefFromIndex(scriptableIndex, context);
      v32 = ScriptableDefFromIndex && (ScriptableDefFromIndex->flags & 0x180000) != 0;
      if ( RefSystem != Physics_RefSystem_Scriptable || !v32 )
        break;
      if ( ++v28 >= HavokPhysics_CollisionQueryResult::GetNumHits(AllResult) )
      {
        v19 = damageOrigin;
        goto LABEL_48;
      }
    }
    v36 = DCONST_DVARBOOL_scriptable_debug;
    if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v19 = damageOrigin;
    if ( v36->current.enabled )
    {
      v37 = callbacks->debugLine;
      if ( v37 )
        v37(damageOrigin, &points[v25], &colorOrange, 1, 300);
    }
    goto LABEL_60;
  }
LABEL_48:
  v33 = 1;
  v34 = DCONST_DVARBOOL_scriptable_debug;
  if ( !DCONST_DVARBOOL_scriptable_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
  {
    v35 = callbacks->debugLine;
    if ( v35 )
      v35(v19, &points[v25], &colorGreen, 1, 300);
  }
LABEL_62:
  v38 = hkMemHeapAllocator();
  v44.m_ignoreBodies.m_size = 0;
  if ( v44.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v38, v44.m_ignoreBodies.m_data, 4, v44.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v44.m_ignoreBodies.m_data = NULL;
  v44.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v39 = hkMemHeapAllocator();
  v44.m_ignoreEntities.m_size = 0;
  if ( v44.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v39, v44.m_ignoreEntities.m_data, 8, v44.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = v33;
LABEL_67:
  __asm { vmovaps xmm6, [rsp+170h+var_50] }
  return result;
}

