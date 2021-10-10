/*
==============
G_BeamEntity_AddTargetEnt
==============
*/

void __fastcall G_BeamEntity_AddTargetEnt(gentity_s *beamEnt, const gentity_s *targetEnt, const scr_string_t targetEntTag, const ConeTargetInfo *coneTargetInfo)
{
  ?G_BeamEntity_AddTargetEnt@@YAXPEAUgentity_s@@PEBU1@W4scr_string_t@@PEBVConeTargetInfo@@@Z(beamEnt, targetEnt, targetEntTag, coneTargetInfo);
}

/*
==============
G_BeamEntity_AddTargetEntForSpaceship
==============
*/

void __fastcall G_BeamEntity_AddTargetEntForSpaceship(gentity_s *beamEnt, const gentity_s *targetEnt, const scr_string_t targetEntTag, const vec3_t *worldPos)
{
  ?G_BeamEntity_AddTargetEntForSpaceship@@YAXPEAUgentity_s@@PEBU1@W4scr_string_t@@AEBTvec3_t@@@Z(beamEnt, targetEnt, targetEntTag, worldPos);
}

/*
==============
G_BeamEntity_WeaponSpawn
==============
*/

gentity_s *__fastcall G_BeamEntity_WeaponSpawn(gentity_s *owner, const Weapon *weapon)
{
  return ?G_BeamEntity_WeaponSpawn@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@@Z(owner, weapon);
}

/*
==============
G_BeamEntity_Update
==============
*/

void __fastcall G_BeamEntity_Update(gentity_s *beamEnt)
{
  ?G_BeamEntity_Update@@YAXPEAUgentity_s@@@Z(beamEnt);
}

/*
==============
G_BeamEntity_ClearTargets
==============
*/

void __fastcall G_BeamEntity_ClearTargets(gentity_s *beamEnt)
{
  ?G_BeamEntity_ClearTargets@@YAXPEAUgentity_s@@@Z(beamEnt);
}

/*
==============
G_BeamEntity_GetLinkedBeamEntity
==============
*/

gentity_s *__fastcall G_BeamEntity_GetLinkedBeamEntity(const gentity_s *owner)
{
  return ?G_BeamEntity_GetLinkedBeamEntity@@YAPEAUgentity_s@@PEBU1@@Z(owner);
}

/*
==============
G_BeamEntity_Destroy
==============
*/

void __fastcall G_BeamEntity_Destroy(gentity_s *beamEnt)
{
  ?G_BeamEntity_Destroy@@YAXPEAUgentity_s@@@Z(beamEnt);
}

/*
==============
G_BeamEntity_ScriptSpawn
==============
*/

gentity_s *__fastcall G_BeamEntity_ScriptSpawn(gentity_s *owner, scr_string_t ownerTag, int fxId)
{
  return ?G_BeamEntity_ScriptSpawn@@YAPEAUgentity_s@@PEAU1@W4scr_string_t@@H@Z(owner, ownerTag, fxId);
}

/*
==============
G_BeamEntity_SetPos
==============
*/

void __fastcall G_BeamEntity_SetPos(gentity_s *beamEnt, const vec3_t *pos)
{
  ?G_BeamEntity_SetPos@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(beamEnt, pos);
}

/*
==============
G_BeamEntity_AddTargetEnt
==============
*/
void G_BeamEntity_AddTargetEnt(gentity_s *beamEnt, const gentity_s *targetEnt, const scr_string_t targetEntTag, const ConeTargetInfo *coneTargetInfo)
{
  LerpEntityStateBeamEntBonePair *entBonePairs; 
  int v9; 
  __int64 v10; 
  const char *v11; 
  ConeTargetHitResults *HitResults; 
  const ConeTargetHitInfo *FirstVisibleHit; 
  unsigned int clientTagIndex; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 198, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 199, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 200, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  entBonePairs = beamEnt->s.lerp.u.beam.entBonePairs;
  v9 = 0;
  v10 = 0i64;
  while ( 1 )
  {
    clientTagIndex = 0;
    v11 = SL_ConvertToString(targetEntTag);
    if ( !NetConstStrings_GetClientTagIndex(v11, &clientTagIndex) )
    {
      Com_PrintError(1, "G_BeamEntity_AddTargetEnt given a client tag that is not in ncsclienttags.txt");
      return;
    }
    if ( (entBonePairs->m_data & 0x7FF) == 2047 )
      break;
    ++v9;
    ++v10;
    ++entBonePairs;
    if ( v10 >= 7 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 234, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      return;
    }
  }
  if ( !v9 )
  {
    if ( coneTargetInfo )
    {
      HitResults = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults((ConeTargetInfo *)coneTargetInfo);
      FirstVisibleHit = ConeTargetHitResults::GetFirstVisibleHit(HitResults);
      if ( FirstVisibleHit )
        G_BeamEntity_SetPos(beamEnt, &FirstVisibleHit->tagWorldPos);
    }
  }
  LerpEntityStateBeamEntBonePair::SetEntityNum(entBonePairs, targetEnt->s.number);
  LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex(entBonePairs, clientTagIndex);
}

/*
==============
G_BeamEntity_AddTargetEntForSpaceship
==============
*/
void G_BeamEntity_AddTargetEntForSpaceship(gentity_s *beamEnt, const gentity_s *targetEnt, const scr_string_t targetEntTag, const vec3_t *worldPos)
{
  LerpEntityStateBeamEntBonePair *entBonePairs; 
  __int64 i; 
  const char *v10; 
  unsigned int clientTagIndex; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 240, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 241, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 242, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  entBonePairs = beamEnt->s.lerp.u.beam.entBonePairs;
  for ( i = 0i64; i < 7; ++i )
  {
    clientTagIndex = 0;
    v10 = SL_ConvertToString(targetEntTag);
    if ( !NetConstStrings_GetClientTagIndex(v10, &clientTagIndex) )
    {
      Com_PrintError(1, "G_BeamEntity_AddTargetEnt given a client tag that is not in ncsclienttags.txt");
      return;
    }
    if ( (entBonePairs->m_data & 0x7FF) == 2047 )
    {
      G_BeamEntity_SetPos(beamEnt, worldPos);
      LerpEntityStateBeamEntBonePair::SetEntityNum(entBonePairs, targetEnt->s.number);
      LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex(entBonePairs, clientTagIndex);
      return;
    }
    ++entBonePairs;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 267, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
    __debugbreak();
}

/*
==============
G_BeamEntity_ClearTargets
==============
*/
void G_BeamEntity_ClearTargets(gentity_s *beamEnt)
{
  ThreatSight *threatSight; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 168, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 169, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  threatSight = beamEnt->s.lerp.u.actor.threatSight;
  v3 = 7i64;
  do
  {
    *(_DWORD *)threatSight |= 0x7FFu;
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 74, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( !BgDynamicLimits::ms_data.m_clientTagBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 75, ASSERT_TYPE_ASSERT, "(ms_data.m_clientTagBits > 0)", (const char *)&queryFormat, "ms_data.m_clientTagBits > 0") )
      __debugbreak();
    v4 = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits);
    if ( !(1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits)) )
    {
      LODWORD(v6) = 0;
      LODWORD(v5) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 540, ASSERT_TYPE_ASSERT, "( clientTagIndex ) < ( ( 1u << attachBits ) )", "%s < %s\n\t%i, %i", "clientTagIndex", "( 1u << attachBits )", v5, v6) )
        __debugbreak();
    }
    *(_DWORD *)threatSight &= ~((v4 - 1) << 11);
    threatSight += 2;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_BeamEntity_Destroy
==============
*/
void G_BeamEntity_Destroy(gentity_s *beamEnt)
{
  gentity_s *v2; 
  ThreatSight *threatSight; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 87, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 88, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  if ( EntHandle::isDefined(&beamEnt->parent) )
  {
    v2 = EntHandle::ent(&beamEnt->parent);
    EntHandle::setEnt(&v2->linkedBeamEnt, NULL);
  }
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 169, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  threatSight = beamEnt->s.lerp.u.actor.threatSight;
  v4 = 7i64;
  do
  {
    *(_DWORD *)threatSight |= 0x7FFu;
    if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 74, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
      __debugbreak();
    if ( !BgDynamicLimits::ms_data.m_clientTagBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 75, ASSERT_TYPE_ASSERT, "(ms_data.m_clientTagBits > 0)", (const char *)&queryFormat, "ms_data.m_clientTagBits > 0") )
      __debugbreak();
    v5 = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits);
    if ( !(1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits)) )
    {
      LODWORD(v7) = 0;
      LODWORD(v6) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 540, ASSERT_TYPE_ASSERT, "( clientTagIndex ) < ( ( 1u << attachBits ) )", "%s < %s\n\t%i, %i", "clientTagIndex", "( 1u << attachBits )", v6, v7) )
        __debugbreak();
    }
    *(_DWORD *)threatSight &= ~((v5 - 1) << 11);
    threatSight += 2;
    --v4;
  }
  while ( v4 );
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, beamEnt);
}

/*
==============
G_BeamEntity_GetLinkedBeamEntity
==============
*/
gentity_s *G_BeamEntity_GetLinkedBeamEntity(const gentity_s *owner)
{
  gentity_s *v2; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 16, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !EntHandle::isDefined(&owner->linkedBeamEnt) )
    return 0i64;
  v2 = EntHandle::ent(&owner->linkedBeamEnt);
  if ( v2->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 20, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  return v2;
}

/*
==============
G_BeamEntity_ScriptSpawn
==============
*/
gentity_s *G_BeamEntity_ScriptSpawn(gentity_s *owner, scr_string_t ownerTag, int fxId)
{
  const char *v5; 
  gentity_s *v6; 
  unsigned int clientTagIndex; 

  clientTagIndex = 0;
  v5 = SL_ConvertToString(ownerTag);
  if ( !NetConstStrings_GetClientTagIndex(v5, &clientTagIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B250, 523i64);
  v6 = G_Utils_SpawnEntity();
  v6->s.lerp.pos.trType = TR_STATIONARY;
  v6->s.eType = ET_BEAM;
  *(_QWORD *)&v6->s.lerp.pos.trTime = 0i64;
  *(_QWORD *)v6->s.lerp.pos.trDelta.v = 0i64;
  v6->s.lerp.pos.trDelta.v[2] = 0.0;
  Trajectory_SetTrBase(&v6->s.lerp.pos, &vec3_origin);
  SV_LinkEntity(v6);
  v6->s.lerp.u.anonymous.data[0] = 1;
  v6->s.otherEntityNum = G_GetEntityIndex(owner);
  LerpEntityStateBeamScript::SetEntityClientTagIndex(&v6->s.lerp.u.beam.script, clientTagIndex);
  LerpEntityStateBeamScript::SetFXId(&v6->s.lerp.u.beam.script, fxId);
  return v6;
}

/*
==============
G_BeamEntity_SetPos
==============
*/
void G_BeamEntity_SetPos(gentity_s *beamEnt, const vec3_t *pos)
{
  int v4; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 181, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  v4 = 0;
  if ( level.time - beamEnt->c.item[0].ammoCount > 0 )
    v4 = level.time - beamEnt->c.item[0].ammoCount;
  if ( v4 > 100 )
    beamEnt->s.lerp.eFlags.m_flags[0] ^= 4u;
  Trajectory_SetTrBase(&beamEnt->s.lerp.pos, pos);
  beamEnt->c.item[0].ammoCount = level.time;
}

/*
==============
G_BeamEntity_Update
==============
*/
void G_BeamEntity_Update(gentity_s *beamEnt)
{
  gentity_s *v2; 
  gentity_s *v3; 
  const scrContext_t *v4; 
  const Weapon *Weapon; 
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  __int128 v8; 
  double v9; 
  GWeaponMap *v10; 
  const Weapon *v11; 
  ThreatSight *threatSight; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  gentity_s *v16; 
  __m256i Buf1; 
  __int128 v18; 
  double v19; 
  __int64 v20; 

  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 104, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  if ( beamEnt->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 105, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
    __debugbreak();
  if ( beamEnt->s.lerp.u.anonymous.data[0] )
    goto LABEL_31;
  Buf1 = *(__m256i *)&NULL_WEAPON.weaponIdx;
  v19 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  v18 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  LODWORD(v20) = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  if ( !EntHandle::isDefined(&beamEnt->parent) || (v2 = EntHandle::ent(&beamEnt->parent), (v3 = v2) == NULL) || v2->s.eType == ET_ACTOR_CORPSE )
  {
LABEL_30:
    G_BeamEntity_Destroy(beamEnt);
    return;
  }
  if ( v2->actor )
  {
    v4 = ScriptContext_Server();
    Weapon = GScr_Weapon_GetWeapon(v4, (const scr_weapon_t)v3->actor->currentWeapon);
  }
  else
  {
    if ( !v2->client && !v2->agent )
      goto LABEL_31;
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v2);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", Buf1.m256i_i64[0], Buf1.m256i_i64[1], Buf1.m256i_i64[2], Buf1.m256i_i64[3], v18, v19, v20) )
      __debugbreak();
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weapCommon.weaponHandle);
  }
  v8 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
  Buf1 = *(__m256i *)&Weapon->weaponIdx;
  v9 = *(double *)&Weapon->attachmentVariationIndices[21];
  LODWORD(v20) = *(_DWORD *)&Weapon->weaponCamo;
  v19 = v9;
  v18 = v8;
  if ( !Buf1.m256i_i16[0] )
    goto LABEL_30;
  v10 = GWeaponMap::GetInstance();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v11 = BgWeaponMap::GetWeapon(v10, beamEnt->s.weaponHandle);
  if ( memcmp_0(&Buf1, v11, 0x3Cui64) )
    goto LABEL_30;
LABEL_31:
  threatSight = beamEnt->s.lerp.u.actor.threatSight;
  v13 = 7i64;
  do
  {
    v14 = *(_DWORD *)threatSight & 0x7FF;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v15 = v14;
    if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v14] )
      goto LABEL_43;
    v16 = &g_entities[v15];
    if ( !&g_entities[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v16->s.lerp.eFlags, ACTIVE, 0x11u) )
LABEL_43:
      *(_DWORD *)threatSight |= 0x7FFu;
    threatSight += 2;
    --v13;
  }
  while ( v13 );
}

/*
==============
G_BeamEntity_WeaponSpawn
==============
*/
gentity_s *G_BeamEntity_WeaponSpawn(gentity_s *owner, const Weapon *weapon)
{
  gentity_s *v4; 
  GWeaponMap *Instance; 

  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 67, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  if ( !owner )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 68, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 16, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
      __debugbreak();
  }
  if ( EntHandle::isDefined(&owner->linkedBeamEnt) )
  {
    if ( EntHandle::ent(&owner->linkedBeamEnt)->s.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 20, ASSERT_TYPE_ASSERT, "(beamEnt->s.eType == ET_BEAM)", (const char *)&queryFormat, "beamEnt->s.eType == ET_BEAM") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_beamentity.cpp", 69, ASSERT_TYPE_ASSERT, "(!G_BeamEntity_GetLinkedBeamEntity( owner ))", (const char *)&queryFormat, "!G_BeamEntity_GetLinkedBeamEntity( owner )") )
      __debugbreak();
  }
  v4 = G_Utils_SpawnEntity();
  v4->s.lerp.pos.trType = TR_INTERPOLATE;
  v4->s.eType = ET_BEAM;
  *(_QWORD *)&v4->s.lerp.pos.trTime = 0i64;
  *(_QWORD *)v4->s.lerp.pos.trDelta.v = 0i64;
  v4->s.lerp.pos.trDelta.v[2] = 0.0;
  Trajectory_SetTrBase(&v4->s.lerp.pos, &vec3_origin);
  SV_LinkEntity(v4);
  v4->s.lerp.u.anonymous.data[0] = 0;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Instance->SetWeapon(Instance, &v4->s.weaponHandle, weapon);
  EntHandle::setEnt(&v4->parent, owner);
  v4->s.otherEntityNum = G_GetEntityIndex(owner);
  EntHandle::setEnt(&owner->linkedBeamEnt, v4);
  return v4;
}

