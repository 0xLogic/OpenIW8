/*
==============
GBulletMP::SetTempEventEntNormal
==============
*/

void __fastcall GBulletMP::SetTempEventEntNormal(GBulletMP *this, gentity_s *ent, const vec3_t *normal)
{
  ?SetTempEventEntNormal@GBulletMP@@UEAAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, ent, normal);
}

/*
==============
GBulletMP::ImpactEffectCreate
==============
*/

bool __fastcall GBulletMP::ImpactEffectCreate(GBulletMP *this, unsigned int *randSeed, const BulletFireParams *bp, const BulletTraceResults *br, const vec3_t *normal, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int impactEffectFlags, gentity_s **outHitEffectEnt)
{
  return ?ImpactEffectCreate@GBulletMP@@UEAA_NPEAIPEBUBulletFireParams@@PEBUBulletTraceResults@@AEBTvec3_t@@AEBUWeapon@@_NPEAUgentity_s@@HPEAPEAU6@@Z(this, randSeed, bp, br, normal, weapon, isAlternate, attacker, impactEffectFlags, outHitEffectEnt);
}

/*
==============
GBulletMP::SpreadFireTargets
==============
*/

void __fastcall GBulletMP::SpreadFireTargets(GBulletMP *this, gentity_s *attacker, int shotCount, float range, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, int gameTime)
{
  ?SpreadFireTargets@GBulletMP@@UEAAXPEAUgentity_s@@HMMPEBUBgWeaponParms@@PEBU2@H@Z(this, attacker, shotCount, range, spread, wp, weaponEnt, gameTime);
}

/*
==============
GBulletMP::CheckFireExtendedAdvance
==============
*/

bool __fastcall GBulletMP::CheckFireExtendedAdvance(GBulletMP *this, const BulletTraceResults *br, const gentity_s *attacker)
{
  return ?CheckFireExtendedAdvance@GBulletMP@@UEAA_NPEBUBulletTraceResults@@PEBUgentity_s@@@Z(this, br, attacker);
}

/*
==============
GBulletMP::ProcessRiotShield
==============
*/

bool __fastcall GBulletMP::ProcessRiotShield(GBulletMP *this, unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int gameTime, int dFlags, int damage, bool *bulletStillActive)
{
  return ?ProcessRiotShield@GBulletMP@@UEAA_NPEAIPEAUBulletFireParams@@PEAUBulletTraceResults@@AEBUWeapon@@_NPEAUgentity_s@@HHHPEA_N@Z(this, randSeed, bp, br, weapon, isAlternate, attacker, gameTime, dFlags, damage, bulletStillActive);
}

/*
==============
G_BulletMP_MarkPotentialImpactFixup
==============
*/

void __fastcall G_BulletMP_MarkPotentialImpactFixup(const gentity_s *impactEventEnt, const __int16 hitEntityNum, scr_string_t partName)
{
  ?G_BulletMP_MarkPotentialImpactFixup@@YAXPEBUgentity_s@@FW4scr_string_t@@@Z(impactEventEnt, hitEntityNum, partName);
}

/*
==============
G_BulletMP_ProcessPotentialImpactFixups
==============
*/

void G_BulletMP_ProcessPotentialImpactFixups(void)
{
  ?G_BulletMP_ProcessPotentialImpactFixups@@YAXXZ();
}

/*
==============
GBulletMP::UseFriendlyFire
==============
*/

bool __fastcall GBulletMP::UseFriendlyFire(GBulletMP *this)
{
  return ?UseFriendlyFire@GBulletMP@@UEBA_NXZ(this);
}

/*
==============
GBulletMP::InvokeEntityImpaledCallback
==============
*/

void __fastcall GBulletMP::InvokeEntityImpaledCallback(GBulletMP *this, gentity_s *attacker, gentity_s *victim, const Weapon *r_weapon, const bool isAlternate, const vec3_t *clientLocation, const vec3_t *serverLocation, const vec3_t *direction, hitLocation_t hitLocation, scr_string_t partName, const vec3_t *boneOffset)
{
  ?InvokeEntityImpaledCallback@GBulletMP@@UEBAXPEAUgentity_s@@0AEBUWeapon@@_NAEBTvec3_t@@33W4hitLocation_t@@W4scr_string_t@@3@Z(this, attacker, victim, r_weapon, isAlternate, clientLocation, serverLocation, direction, hitLocation, partName, boneOffset);
}

/*
==============
GBulletMP::CheckExplosiveBulletType
==============
*/

void __fastcall GBulletMP::CheckExplosiveBulletType(GBulletMP *this, const gentity_s *attacker)
{
  ?CheckExplosiveBulletType@GBulletMP@@UEBAXPEBUgentity_s@@@Z(this, attacker);
}

/*
==============
GBulletMP::ImpactEffectSetAdditionalFlags
==============
*/

void __fastcall GBulletMP::ImpactEffectSetAdditionalFlags(GBulletMP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  ?ImpactEffectSetAdditionalFlags@GBulletMP@@UEAAXPEAUgentity_s@@H@Z(this, hitEffectEnt, impactEffectFlags);
}

/*
==============
GBulletMP::UseAISuppression
==============
*/

bool __fastcall GBulletMP::UseAISuppression(GBulletMP *this)
{
  return ?UseAISuppression@GBulletMP@@UEBA_NXZ(this);
}

/*
==============
GBulletMP::CheckFirePenetrateStop
==============
*/

bool __fastcall GBulletMP::CheckFirePenetrateStop(GBulletMP *this, const BulletTraceResults *br, const gentity_s *attacker, bool penetratedGlass)
{
  return ?CheckFirePenetrateStop@GBulletMP@@UEAA_NPEBUBulletTraceResults@@PEBUgentity_s@@_N@Z(this, br, attacker, penetratedGlass);
}

/*
==============
GBulletMP::ImpactEffectSetFlags
==============
*/

void __fastcall GBulletMP::ImpactEffectSetFlags(GBulletMP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  ?ImpactEffectSetFlags@GBulletMP@@UEAAXPEAUgentity_s@@H@Z(this, hitEffectEnt, impactEffectFlags);
}

/*
==============
GBulletMP::SetVictimShieldHitEventParameters
==============
*/

void __fastcall GBulletMP::SetVictimShieldHitEventParameters(GBulletMP *this, gentity_s *tempEnt, int attackerEntNum, int victimEntNum, const vec3_t *startPos, const vec3_t *hitPos, unsigned int *randSeed)
{
  ?SetVictimShieldHitEventParameters@GBulletMP@@UEAAXPEAUgentity_s@@HHAEBTvec3_t@@1PEAI@Z(this, tempEnt, attackerEntNum, victimEntNum, startPos, hitPos, randSeed);
}

/*
==============
GBulletMP::TraceIgnoreHitEntity
==============
*/

bool __fastcall GBulletMP::TraceIgnoreHitEntity(GBulletMP *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker, bool allowHitSelf)
{
  return ?TraceIgnoreHitEntity@GBulletMP@@UEBA_NPEBUBulletFireParams@@PEBUBulletTraceResults@@PEBUgentity_s@@_N@Z(this, bp, br, attacker, allowHitSelf);
}

/*
==============
GBulletMP::CheckExplosiveBulletType
==============
*/
void GBulletMP::CheckExplosiveBulletType(GBulletMP *this, const gentity_s *attacker)
{
  unsigned int eType; 
  int v4; 
  const char *EntityTypeName; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)attacker->s.eType;
  if ( (unsigned __int16)eType > 0x13u || (v4 = 659458, !_bittest(&v4, eType)) )
  {
    EntityTypeName = BG_GetEntityTypeName((const entityType_s)eType);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E47080, 520i64, EntityTypeName);
  }
}

/*
==============
GBulletMP::CheckFireExtendedAdvance
==============
*/
bool GBulletMP::CheckFireExtendedAdvance(GBulletMP *this, const BulletTraceResults *br, const gentity_s *attacker)
{
  gentity_s *hitEnt; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 163, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 164, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 165, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  hitEnt = br->hitEnt;
  return hitEnt->client && !G_ClientMP_OnSameTeam(hitEnt, attacker);
}

/*
==============
GBulletMP::CheckFirePenetrateStop
==============
*/
bool GBulletMP::CheckFirePenetrateStop(GBulletMP *this, const BulletTraceResults *br, const gentity_s *attacker, bool penetratedGlass)
{
  gentity_s *hitEnt; 
  bool result; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 149, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 150, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  result = 0;
  if ( !penetratedGlass )
  {
    if ( SV_IsAgentEntity(attacker) )
    {
      hitEnt = br->hitEnt;
      if ( hitEnt )
      {
        if ( G_Utils_IsClient(hitEnt) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetrationHitsClients, "bullet_penetrationHitsClients") )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
G_BulletMP_MarkPotentialImpactFixup
==============
*/
void G_BulletMP_MarkPotentialImpactFixup(const gentity_s *impactEventEnt, const __int16 hitEntityNum, scr_string_t partName)
{
  const dvar_t *v6; 
  __int64 number; 
  entityType_s eType; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !impactEventEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(impactEventEnt != nullptr)", (const char *)&queryFormat, "impactEventEnt != nullptr") )
    __debugbreak();
  v6 = DVARBOOL_killswitch_impact_vfx_corpse_fixup_enabled;
  if ( !DVARBOOL_killswitch_impact_vfx_corpse_fixup_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_impact_vfx_corpse_fixup_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && partName )
  {
    number = impactEventEnt->s.number;
    if ( (unsigned int)number >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = impactEventEnt->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 309, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( impactEventEnt->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( impactEventEnt->s.number )") )
      __debugbreak();
    eType = impactEventEnt->s.eType;
    if ( (unsigned __int16)(eType - 29) > 0xE2u )
    {
      LODWORD(v11) = 29;
      LODWORD(v10) = eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 310, ASSERT_TYPE_ASSERT, "( static_cast<int>(ET_EVENTS) ) <= ( static_cast<int>(impactEventEnt->s.eType) ) && ( static_cast<int>(impactEventEnt->s.eType) ) <= ( static_cast<int>(ET_EVENTS + EV_MAX_EVENTS) - 1 )", "static_cast<int>(impactEventEnt->s.eType) not in [static_cast<int>(ET_EVENTS), static_cast<int>(ET_EVENTS + EV_MAX_EVENTS) - 1]\n\t%i not in [%i, %i]", v10, v11, 255) )
        __debugbreak();
    }
    if ( (unsigned int)hitEntityNum >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = hitEntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntityNum ) < (unsigned)( ( 2048 ) )", "hitEntityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( G_Utils_IsClientOrAgent(&g_entities[hitEntityNum]) )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( hitEntityNum >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v11) = ComCharacterLimits::ms_gameData.m_characterCount;
        LODWORD(v10) = hitEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "hitEntityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( ((unsigned __int8)s_bulletImpactEventFixupCandidateCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", s_bulletImpactEventFixupCandidateCount) )
        __debugbreak();
      v9 = _InterlockedExchangeAdd(s_bulletImpactEventFixupCandidateCount, 1u);
      if ( v9 < 0x80 )
      {
        s_bulletImpactEventFixups[v9].eventEntityNum = impactEventEnt->s.number;
        s_bulletImpactEventFixups[v9].hitEntityNum = hitEntityNum;
        s_bulletImpactEventFixups[v9].partName = partName;
      }
    }
  }
}

/*
==============
G_BulletMP_ProcessPotentialImpactFixups
==============
*/
void G_BulletMP_ProcessPotentialImpactFixups(void)
{
  const dvar_t *v0; 
  signed __int32 v1; 
  scr_string_t *p_partName; 
  __int64 v3; 
  gentity_s *v4; 
  entityType_s eType; 
  __int16 v6; 
  gentity_s *v7; 
  const gentity_s *HitCorpseEntity_Hack; 
  const gentity_s *v9; 
  const DObj *ServerDObjForEnt; 
  bool v11; 
  int BoneIndexInternal_14; 
  __int16 number; 
  const char *v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  v0 = DVARBOOL_killswitch_impact_vfx_corpse_fixup_enabled;
  if ( !DVARBOOL_killswitch_impact_vfx_corpse_fixup_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_impact_vfx_corpse_fixup_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = 0;
    if ( s_bulletImpactEventFixupCandidateCount[0] > 0 )
    {
      p_partName = &s_bulletImpactEventFixups[0].partName;
      do
      {
        v3 = *((__int16 *)p_partName - 2);
        if ( (unsigned int)v3 >= 0x800 )
        {
          LODWORD(v17) = 2048;
          LODWORD(v16) = *((__int16 *)p_partName - 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( impactData.eventEntityNum ))", (const char *)&queryFormat, "G_IsEntityInUse( impactData.eventEntityNum )") )
          __debugbreak();
        v4 = &g_entities[*((__int16 *)p_partName - 2)];
        eType = v4->s.eType;
        if ( (unsigned __int16)(eType - 29) > 0xE2u )
        {
          LODWORD(v18) = 255;
          LODWORD(v17) = 29;
          LODWORD(v16) = eType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( static_cast<int>(ET_EVENTS) ) <= ( static_cast<int>(impactEventEnt->s.eType) ) && ( static_cast<int>(impactEventEnt->s.eType) ) <= ( static_cast<int>(ET_EVENTS + EV_MAX_EVENTS) - 1 )", "static_cast<int>(impactEventEnt->s.eType) not in [static_cast<int>(ET_EVENTS), static_cast<int>(ET_EVENTS + EV_MAX_EVENTS) - 1]\n\t%i not in [%i, %i]", v16, v17, v18) )
            __debugbreak();
        }
        v6 = *((_WORD *)p_partName - 1);
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v6 >= ComCharacterLimits::ms_gameData.m_characterCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v17) = ComCharacterLimits::ms_gameData.m_characterCount;
          LODWORD(v16) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "victimEntityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v7 = &g_entities[v6];
        if ( v7->health <= 0 )
        {
          HitCorpseEntity_Hack = G_CombatMP_GetHitCorpseEntity_Hack(v7);
          v9 = HitCorpseEntity_Hack;
          if ( !HitCorpseEntity_Hack || ((HitCorpseEntity_Hack->s.eType - 2) & 0xFFEF) != 0 )
          {
            Com_PrintWarning(15, "Impact fixup failed: failed to find corpse ent for dead character index %i\n", (unsigned int)*((__int16 *)p_partName - 2));
          }
          else
          {
            ServerDObjForEnt = Com_GetServerDObjForEnt(HitCorpseEntity_Hack);
            if ( ServerDObjForEnt )
            {
              v11 = *p_partName == 0;
              inOutIndex = -2;
              if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 383, ASSERT_TYPE_ASSERT, "(impactData.partName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "impactData.partName != NULL_SCR_STRING") )
                __debugbreak();
              BoneIndexInternal_14 = DObjGetBoneIndexInternal_14(ServerDObjForEnt, *p_partName, &inOutIndex, &modelIndex);
              number = v9->s.number;
              if ( BoneIndexInternal_14 )
              {
                v4->s.groundEntityNum = number;
                if ( (unsigned int)inOutIndex + 1 >= 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 397, ASSERT_TYPE_ASSERT, "( boneIndex + 1 < 0xff )", (const char *)&queryFormat, "boneIndex + 1 < UCHAR_MAX") )
                  __debugbreak();
                v15 = inOutIndex + 1;
                v4->s.eventParm2 |= 2u;
                v4->s.lerp.u.actor.species = v15;
              }
              else
              {
                v14 = SL_ConvertToString(*p_partName);
                Com_PrintWarning(15, "Impact fixup failed: failed to find partName '%s' on corpse ent index %i \n", v14, (unsigned int)number);
              }
            }
            else
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 373, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
                __debugbreak();
              Com_PrintWarning(15, "Impact fixup failed: failed to get server dobj for corpse ent index %i\n", (unsigned int)v9->s.number);
            }
          }
        }
        ++v1;
        p_partName += 2;
      }
      while ( v1 < s_bulletImpactEventFixupCandidateCount[0] );
    }
  }
  s_bulletImpactEventFixupCandidateCount[0] = 0;
}

/*
==============
GBulletMP::ImpactEffectCreate
==============
*/
bool GBulletMP::ImpactEffectCreate(GBulletMP *this, unsigned int *randSeed, const BulletFireParams *bp, const BulletTraceResults *br, const vec3_t *normal, const Weapon *weapon, bool isAlternate, gentity_s *attacker)
{
  gentity_s *hitEnt; 
  unsigned __int16 partGroup; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 33, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 34, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 35, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  hitEnt = br->hitEnt;
  if ( !hitEnt || !G_Utils_IsClientOrAgent(hitEnt) )
    return 0;
  partGroup = br->trace.partGroup;
  if ( partGroup == 19 )
  {
    GBullet::BroadcastSpecialHitEvent(this, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt, HITLOC_SHIELD);
    GBullet::BroadcastShieldHitEventToVictim(this, randSeed, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt->s.number);
    partGroup = br->trace.partGroup;
  }
  if ( (unsigned __int16)(partGroup - 20) <= 1u )
    GBullet::BroadcastSpecialHitEvent(this, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt, (hitLocation_t)partGroup);
  return 0;
}

/*
==============
GBulletMP::ImpactEffectSetAdditionalFlags
==============
*/
void GBulletMP::ImpactEffectSetAdditionalFlags(GBulletMP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  __int16 v3; 

  v3 = impactEffectFlags;
  if ( !hitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 90, ASSERT_TYPE_ASSERT, "(hitEffectEnt)", (const char *)&queryFormat, "hitEffectEnt") )
    __debugbreak();
  if ( (hitEffectEnt->s.eventParm2 & 0x1FFF) != hitEffectEnt->s.eventParm2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(( hitEffectEnt->s.eventParm2 & ( ( IMPACTEFFECT_LAST << 1 ) - 1 ) ) == hitEffectEnt->s.eventParm2)", "%s\n\thitEffectEnt->s.eventParm2 %d is already greater than IMPACTEFFECT_LAST.", "( hitEffectEnt->s.eventParm2 & ( ( IMPACTEFFECT_LAST << 1 ) - 1 ) ) == hitEffectEnt->s.eventParm2", hitEffectEnt->s.eventParm2) )
    __debugbreak();
  hitEffectEnt->s.eventParm2 |= v3 & 0x1FFF;
}

/*
==============
GBulletMP::ImpactEffectSetFlags
==============
*/
void GBulletMP::ImpactEffectSetFlags(GBulletMP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  __int16 v3; 

  v3 = impactEffectFlags;
  if ( !hitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(hitEffectEnt)", (const char *)&queryFormat, "hitEffectEnt") )
    __debugbreak();
  hitEffectEnt->s.eventParm2 = v3 & 0x1FFF;
}

/*
==============
GBulletMP::InvokeEntityImpaledCallback
==============
*/
void GBulletMP::InvokeEntityImpaledCallback(GBulletMP *this, gentity_s *attacker, gentity_s *victim, const Weapon *r_weapon, const bool isAlternate, const vec3_t *clientLocation, const vec3_t *serverLocation, const vec3_t *direction, hitLocation_t hitLocation, scr_string_t partName, const vec3_t *boneOffset)
{
  __int64 number; 
  __int64 v15; 
  scrContext_t *v16; 
  scr_string_t HitLocationString; 
  entityType_s eType; 
  int initstructs; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  number = attacker->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v21) = attacker->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attacker->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( attacker->s.number )") )
    __debugbreak();
  if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 259, ASSERT_TYPE_ASSERT, "(victim)", (const char *)&queryFormat, "victim") )
    __debugbreak();
  v15 = victim->s.number;
  if ( (unsigned int)v15 >= 0x800 )
  {
    LODWORD(v22) = 2048;
    LODWORD(v21) = victim->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( victim->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( victim->s.number )") )
    __debugbreak();
  if ( (unsigned int)hitLocation >= HITLOC_NUM )
  {
    LODWORD(v22) = 22;
    LODWORD(v21) = hitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  v16 = ScriptContext_Server();
  Scr_AddVector(v16, boneOffset->v);
  Scr_AddConstString(v16, partName);
  HitLocationString = G_Combat_GetHitLocationString(hitLocation);
  Scr_AddConstString(v16, HitLocationString);
  Scr_AddVector(v16, direction->v);
  Scr_AddVector(v16, serverLocation->v);
  Scr_AddVector(v16, clientLocation->v);
  GScr_Weapon_AddParam(v16, r_weapon, isAlternate);
  GScr_AddEntity(attacker);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  eType = victim->s.eType;
  if ( eType == ET_PLAYER )
  {
    initstructs = GameScriptData::ms_gScriptData[2].initstructs;
LABEL_47:
    v20 = GScr_ExecEntThread(victim, initstructs, 8u);
    Scr_FreeThread(v16, v20);
    return;
  }
  if ( eType == ET_AGENT_CORPSE )
  {
    initstructs = GameScriptData::ms_gScriptData[1].scriptable_used;
    goto LABEL_47;
  }
  LODWORD(v22) = eType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 289, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnknown entity type (%i) for impale callback.", "0", v22) )
    __debugbreak();
}

/*
==============
GBulletMP::ProcessRiotShield
==============
*/
char GBulletMP::ProcessRiotShield(GBulletMP *this, unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int gameTime, int dFlags, int damage, bool *bulletStillActive)
{
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 125, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 126, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 127, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 128, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !bulletStillActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 129, ASSERT_TYPE_ASSERT, "( bulletStillActive )", (const char *)&queryFormat, "bulletStillActive") )
    __debugbreak();
  if ( br->trace.partGroup != 19 || !G_Utils_IsClientOrAgent(br->hitEnt) )
    return 0;
  G_CombatMP_ShieldNotifyAndDamage(br->hitEnt, attacker, attacker, &bp->dir, &br->hitPos, damage, dFlags, bp->methodOfDeath, weapon, isAlternate, level.time - gameTime);
  return 1;
}

/*
==============
GBulletMP::SetTempEventEntNormal
==============
*/
void GBulletMP::SetTempEventEntNormal(GBulletMP *this, gentity_s *ent, const vec3_t *normal)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 173, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ent->s.eventParm = DirToByte(normal);
}

/*
==============
GBulletMP::SetVictimShieldHitEventParameters
==============
*/
void GBulletMP::SetVictimShieldHitEventParameters(GBulletMP *this, gentity_s *tempEnt, int attackerEntNum, int victimEntNum, const vec3_t *startPos, const vec3_t *hitPos)
{
  __int128 v6; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  int v17; 
  unsigned __int64 clientNum; 
  __int64 v19; 
  __int64 v20; 
  tmat33_t<vec3_t> out; 
  vec3_t v22; 
  tmat43_t<vec3_t> resultMatrix; 
  __int128 v24; 

  v8 = victimEntNum;
  if ( !tempEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 211, ASSERT_TYPE_ASSERT, "( tempEnt )", (const char *)&queryFormat, "tempEnt") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
      __debugbreak();
  }
  v9 = v8;
  if ( !g_entities[v8].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 213, ASSERT_TYPE_ASSERT, "( g_entities[victimEntNum].client )", (const char *)&queryFormat, "g_entities[victimEntNum].client") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v20) = 2048;
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( !g_entities[v9].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 189, ASSERT_TYPE_ASSERT, "( g_entities[entNum].client )", (const char *)&queryFormat, "g_entities[entNum].client") )
    __debugbreak();
  if ( G_Weapon_GetShieldTagMatrix(&g_entities[v9], &resultMatrix) )
  {
    v24 = v6;
    MatrixInverse((const tmat33_t<vec3_t> *)&resultMatrix, &out);
    v11 = hitPos->v[0] - resultMatrix.m[3].v[0];
    v12 = hitPos->v[1] - resultMatrix.m[3].v[1];
    v13 = hitPos->v[2] - resultMatrix.m[3].v[2];
    v22.v[0] = (float)((float)(v11 * out.m[0].v[0]) + (float)(v12 * out.m[1].v[0])) + (float)(v13 * out.m[2].v[0]);
    v14 = (float)(startPos->v[1] - resultMatrix.m[3].v[1]) * out.m[1].v[0];
    v22.v[1] = (float)((float)(v11 * out.m[0].v[1]) + (float)(v12 * out.m[1].v[1])) + (float)(v13 * out.m[2].v[1]);
    v15 = (float)(startPos->v[0] - resultMatrix.m[3].v[0]) * out.m[0].v[0];
    v22.v[2] = (float)((float)(v12 * out.m[1].v[2]) + (float)(v11 * out.m[0].v[2])) + (float)(v13 * out.m[2].v[2]);
    v10 = BG_ShieldHitEncode(&v22, (float)((float)(v15 + v14) + (float)((float)(startPos->v[2] - resultMatrix.m[3].v[2]) * out.m[2].v[0])) > 0.0);
  }
  else
  {
    Com_PrintWarning(15, "Couldn't get tag matrix for entity #%i's shield.\n", (unsigned int)v8);
    v10 = 0;
  }
  v16 = v10;
  v17 = BG_ShieldHitEncodeHitMarker(startPos, hitPos);
  if ( (v17 & 0xFF0000FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(( hitMarkerData & 0xFF0000FF ) == 0)", (const char *)&queryFormat, "( hitMarkerData & 0xFF0000FF ) == 0") )
    __debugbreak();
  tempEnt->s.eventParm = v16 | v17;
  clientNum = (unsigned int)g_entities[v9].client->ps.clientNum;
  tempEnt->s.clientNum = clientNum;
  *(_QWORD *)tempEnt->clientMask.array = -1i64;
  *(_QWORD *)&tempEnt->clientMask.array[2] = -1i64;
  *(_QWORD *)&tempEnt->clientMask.array[4] = -1i64;
  tempEnt->clientMask.array[6] = -1;
  if ( (unsigned int)clientNum >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", clientNum, 224) )
    __debugbreak();
  tempEnt->clientMask.array[clientNum >> 5] &= ~(0x80000000 >> (clientNum & 0x1F));
}

/*
==============
GBulletMP::SpreadFireTargets
==============
*/
void GBulletMP::SpreadFireTargets(GBulletMP *this, gentity_s *attacker, int shotCount, float range)
{
  if ( this->m_reduceSpreadShotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(!m_reduceSpreadShotCount)", "%s\n\tMust be off or this funciton needs to be implemented", "!m_reduceSpreadShotCount") )
    __debugbreak();
}

/*
==============
GBulletMP::TraceIgnoreHitEntity
==============
*/
bool GBulletMP::TraceIgnoreHitEntity(GBulletMP *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker, bool allowHitSelf)
{
  gclient_s *client; 
  EntityTagInfo *tagInfo; 
  bool result; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 99, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 100, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 101, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_bullet_mp.cpp", 102, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  result = 1;
  if ( (allowHitSelf || br->hitEnt != attacker || (client = attacker->client) == NULL || (client->ps.linkFlags.m_flags[0] & 4) != 0 || client->ps.vehicleState.entity != 2047) && (!attacker->turretHandle.m_objIndex || (tagInfo = attacker->tagInfo) == NULL || tagInfo->parent != br->hitEnt) && (!SV_IsAgent(attacker->s.number) || !SV_Agent_IsScripted(attacker->s.number) || !GBullet::TraceIgnoreHitEntityForAI(this, bp, br, attacker)) )
    return 0;
  return result;
}

/*
==============
GBulletMP::UseAISuppression
==============
*/
bool GBulletMP::UseAISuppression(GBulletMP *this)
{
  return 0;
}

/*
==============
GBulletMP::UseFriendlyFire
==============
*/
bool GBulletMP::UseFriendlyFire(GBulletMP *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_scr_team_fftype;
  if ( !DVARINT_scr_team_fftype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_team_fftype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer != 0;
}

